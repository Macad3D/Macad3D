using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using Macad.Common;
using Macad.Core.Drawing;
using Macad.Occt;

namespace Macad.Core.Exchange.Svg
{
    public class SvgDrawingExporter : SvgExporterBase, IDrawingRenderer, IRendererCapabilities
    {
        public static MemoryStream Export(Drawing.Drawing drawing)
        {
            var exporter = new SvgDrawingExporter();
            return exporter._Export(drawing);
        }
        
        //--------------------------------------------------------------------------------------------------

        readonly Stack<SvgGroupElement> _GroupStack = new();

        //--------------------------------------------------------------------------------------------------

        SvgDrawingExporter()
        {
        }

        //--------------------------------------------------------------------------------------------------
        
        MemoryStream _Export(Drawing.Drawing drawing)
        {
            // Create group
            var group = new SvgGroupElement
            {
                ID = drawing.Name,
                IsLayer = TagGroupsAsLayers
            };
            CurrentGroup = group;

            // Export
            drawing.Render(this);

            // Scale
            double width = 100;
            double height = 100;
            Bnd_Box2d aabb = drawing.GetBoundingBox();
            if (!aabb.IsVoid())
            {
                double xmin = 0, xmax = 0, ymin = 0, ymax = 0;
                aabb.Get(ref xmin, ref ymin, ref xmax, ref ymax);
                width = xmax - xmin;
                height = ymax - ymin;
                group.Transforms.Add(new SvgTranslateTransform(-xmin, -ymax));
            }

            // Create Document
            var doc = new SvgDocument {
                DotsPerInch = DotsPerInch,
                Width = width,
                Height = height
            };
            doc.Children.Add(group);

            return doc.WriteToStream();
        }

        //--------------------------------------------------------------------------------------------------

        #region IRendererCapabilities

        int IRendererCapabilities.BezierCurveMaxDegree => 3;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region IDrawingRenderer

        IRendererCapabilities IDrawingRenderer.Capabilities => this;

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.BeginGroup(string name)
        {
            if (CurrentGroup != null)
            {
                _GroupStack.Push(CurrentGroup);
            }

            CurrentGroup = new SvgGroupElement
            {
                ID = name,
                IsLayer = TagGroupsAsLayers
            };
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.EndGroup()
        {
            Debug.Assert(_GroupStack.Count > 0, "CloseGroup called, but no group on stack.");

            var parent = _GroupStack.Pop();
            if (CurrentGroup != null)
            {
                parent.Children.Add(CurrentGroup);
            }
            CurrentGroup = parent;
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.SetStyle(StrokeStyle stroke, FillStyle fill)
        {
            Debug.Assert(CurrentGroup != null);

            CurrentGroup.Style ??= new SvgStyle();
            if (stroke != null)
            {
                CurrentGroup.Style.StrokeColor = stroke.Color;
                CurrentGroup.Style.StrokeWidth = stroke.Width;
                CurrentGroup.Style.LineStyle = stroke.LineStyle;
            }

            if (fill != null)
            {
                CurrentGroup.Style.FillColor = fill.Color;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.EndPathSegment()
        {
            ClosePath();
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.EndPath()
        {
            FinalizePath();
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.Line(Pnt2d start, Pnt2d end)
        {
            AddToPath(new SvgPathSegLineto(start, end));
        }

        //--------------------------------------------------------------------------------------------------
        
        void IDrawingRenderer.Circle(Pnt2d center, double radius, double startAngle, double endAngle)
        {
            if (startAngle.Distance(endAngle).IsEqual(Maths.DoublePI, 0.00001))
            {
                // Full circle
                if (CurrentGroup.Style.FillColor != null)
                {
                    // Circle must be combined into path
                    ClosePath();

                    var rimPoints = new List<Pnt2d>(4)
                    {
                        new(center.X, center.Y + radius),
                        new(center.X - radius, center.Y),
                        new(center.X, center.Y - radius),
                        new(center.X + radius, center.Y),
                    };

                    SvgArcSweep sweep = SvgArcSweep.Negative;
                    if (endAngle < startAngle)
                    {
                        sweep = SvgArcSweep.Positive;
                        rimPoints.Reverse();
                    }

                    AddToPath(new SvgPathSegArc(rimPoints[0], radius, radius, 45.0f, SvgArcSize.Small, sweep, rimPoints[1]));
                    AddToPath(new SvgPathSegArc(rimPoints[1], radius, radius, 45.0f, SvgArcSize.Small, sweep, rimPoints[2]));
                    AddToPath(new SvgPathSegArc(rimPoints[2], radius, radius, 45.0f, SvgArcSize.Small, sweep, rimPoints[3]));
                    AddToPath(new SvgPathSegArc(rimPoints[3], radius, radius, 45.0f, SvgArcSize.Small, sweep, rimPoints[0]));
                    ClosePath();
                }
                else
                {
                    CurrentGroup.Children.Add(new SvgCircleElement(center, radius));
                }
            }
            else
            {
                // Circle arc
                Geom2d_Circle circle = new Geom2d_Circle(new Ax2d(center, Dir2d.DX), radius);
                var start = circle.Value(startAngle);
                var end = circle.Value(endAngle);

                // Get parameters of circle
                SvgArcSize size = startAngle.Distance(endAngle) < Maths.PI ? SvgArcSize.Small : SvgArcSize.Large;
                SvgArcSweep sweep = SvgArcSweep.Negative;
                if (endAngle < startAngle)
                {
                    sweep = SvgArcSweep.Positive;
                }

                AddToPath(new SvgPathSegArc(start, radius, radius, 0.0f, size, sweep, end));
            }
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.Ellipse(Pnt2d center, double majorRadius, double minorRadius, double rotation, double startAngle, double endAngle)
        {
            if (startAngle.Distance(endAngle).IsEqual(Maths.DoublePI, 0.00001))
            {
                // Full ellipse
                var segment = new SvgEllipseElement(center, majorRadius, minorRadius);
                segment.Transforms.Add(new SvgRotateTransform(Maths.NormalizeAngleDegree(rotation.ToDeg())));
                CurrentGroup.Children.Add(segment);
            }
            else
            {
                // Ellipse arc
                Geom2d_Ellipse geom2DEllipse = new(new Ax2d(center, Dir2d.DX.Rotated(-rotation)), majorRadius, minorRadius);
                var start = geom2DEllipse.Value(startAngle);
                var end = geom2DEllipse.Value(endAngle);

                // Get parameters of ellipse
                double angleX = Maths.NormalizeAngleDegree(rotation.ToDeg());
                SvgArcSize size = startAngle.Distance(endAngle) < Maths.PI ? SvgArcSize.Small : SvgArcSize.Large;
                SvgArcSweep sweep = SvgArcSweep.Negative;
                if (endAngle < startAngle)
                {
                    sweep = SvgArcSweep.Positive;
                }

                AddToPath(new SvgPathSegArc(start, majorRadius, minorRadius, angleX, size, sweep, end));
            }
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.BezierCurve(Pnt2d[] knots)
        {
            if (knots.Length < 2)
                return;

            switch (knots.Length)
            {
                case 2:
                    AddToPath(new SvgPathSegLineto(knots[0], knots[1]));
                    break;

                case 3:
                    AddToPath(new SvgPathSegCurvetoQuadratic(knots[0], knots[1], knots[2]));
                    break;

                case 4:
                    AddToPath(new SvgPathSegCurvetoCubic(knots[0], knots[1], knots[2], knots[3]));
                    break;

                default:
                    Messages.Warning($"SvgExporter: Bezier curve has an unsupported order of {knots.Length-1}.");
                    break;
            }
        }

        #endregion
    }
}