using System;
using System.Collections.Generic;
using Macad.Common;
using Macad.Occt;

namespace Macad.Core.Exchange.Svg
{
    public abstract class SvgExporterBase
    {
        #region Helper

        bool _AreEqual(Pnt2d first, Pnt2d second)
        {
            return first.IsEqual(second, 0.0001);
        }

        //--------------------------------------------------------------------------------------------------
        
        public static double DotsPerInch { get; set; } = 96.0;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Paths

        protected void InitPathExport()
        {
            CurrentPath = new SvgPathElement();
            _PathStart = new Pnt2d();
            _PathPosition = new Pnt2d();
            _SubPathStartIndex = 0;
        }

        //--------------------------------------------------------------------------------------------------

        protected void AddToPath(SvgPathSegment segment)
        {
            if (CurrentPath == null)
            {
                InitPathExport();
                _PathStart = segment.Start;
                CurrentPath.Segments.Add(new SvgPathSegMoveto(segment.Start));
            }
            else
            {
                // If Segment-Start does not match current subpath end...
                if (!_AreEqual(_PathPosition, segment.Start))
                {
                    if (_AreEqual(_PathStart, segment.End))
                    {
                        // Segment-End matches path start, but Segment-Start
                        // not to current subpath end, so insert on top
                        CurrentPath.Segments.Insert(_SubPathStartIndex + 1, segment);
                        CurrentPath.Segments[_SubPathStartIndex] = new SvgPathSegMoveto(segment.Start);
                        _PathStart = segment.Start;
                        return;
                    }
                    else
                    {
                        // Both Segment-Points do not match to any side of the path
                        // Start new subpath
                        ClosePath();
                        _SubPathStartIndex = CurrentPath.Segments.Count;
                        CurrentPath.Segments.Add(new SvgPathSegMoveto(segment.Start));
                        _PathStart = segment.Start;
                    }
                }
            }

            // Append to current / just created subpath
            _PathPosition = segment.End;
            CurrentPath.Segments.Add(segment);
        }

        //--------------------------------------------------------------------------------------------------

        protected void ClosePath()
        {
            SvgPathElement path = CurrentPath;

            if (path?.Segments.Count > 0)
            {
                if (_PathPosition != Pnt2d.Origin && _AreEqual(_PathStart, _PathPosition))
                    path.Segments.Add(new SvgPathSegClosePath());
            }
            _PathPosition = new Pnt2d();
            _PathStart = new Pnt2d();
        }

        //--------------------------------------------------------------------------------------------------

        protected SvgPathElement FinalizePath()
        {
            ClosePath();

            SvgPathElement path = CurrentPath;
            if (path?.Segments.Count > 0)
            {
                CurrentGroup.Children.Add(path);
            }
            CurrentPath = null;
            return path;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Curve Export

        protected SvgGroupElement CurrentGroup;
        protected SvgPathElement CurrentPath;
        protected Bnd_Box2d BoundingBox;
        Pnt2d _PathStart;
        Pnt2d _PathPosition;
        int _SubPathStartIndex;
        protected bool CombineToPath;

        //--------------------------------------------------------------------------------------------------

        protected void AddCurve(Geom2d_Curve curve2d, bool reverse, double first, double last)
        {
            // Process curve
            switch (curve2d)
            {
                case Geom2d_Line line:
                    AddLine(line, first, last, reverse);
                    break;

                case Geom2d_Ellipse ellipse:
                    AddEllipse(ellipse, first, last, reverse);
                    break;

                case Geom2d_Circle circle:
                    AddCircle(circle, first, last, reverse);
                    break;

                case Geom2d_BSplineCurve bspline:
                    AddBSplineCurve(bspline, first, last, reverse);
                    break;

                case Geom2d_BezierCurve bezier:
                    AddBezierCurve(bezier, first, last, reverse);
                    break;

                default:
                    // Try to create B-Spline curve
                    var bsplineCurve = ShapeConstruct.ConvertCurveToBSpline(curve2d, first, last, 0.001 /*Precision.Confusion()*10*/, curve2d.Continuity(), 10000, 3);
                    if (bsplineCurve != null)
                    {
                        AddBSplineCurve(bsplineCurve, first, last, reverse);
                        return;
                    }
                    Messages.Warning("SvgExporter: Unsupported curve class.");
                    break;
            }
        }

        //--------------------------------------------------------------------------------------------------

        protected void AddCircle(Geom2d_Circle geom2DCircle, double first, double last, bool reverse)
        {
            if (Math.Abs(last - first) < geom2DCircle.Period())
            {
                // Circle arc
                var start = geom2DCircle.Value(reverse ? last : first);
                var end = geom2DCircle.Value(reverse ? first : last);

                // Add the midpoint seems to be the simplest way to improve the BB
                BoundingBox?.Add(geom2DCircle.Value(first + (last - first) / 2));

                // Get parameters of circle
                double radius = geom2DCircle.Radius();
                double length = last - first;
                double halfParameter = (geom2DCircle.LastParameter() - geom2DCircle.FirstParameter()) / 2.0;
                var size = (length < halfParameter) ? SvgArcSize.Small : SvgArcSize.Large;
                var sweep = geom2DCircle.Position().Sense() > 0 
                    ? (reverse ? SvgArcSweep.Negative : SvgArcSweep.Positive)
                    : (reverse ? SvgArcSweep.Positive : SvgArcSweep.Negative);

                AddToPath(new SvgPathSegArc(start, radius, radius, 0.0f, size, sweep, end));
            }
            else 
			{
			    // Complete circle
			    var circleCenter = geom2DCircle.Location();
			    var circleRadius = geom2DCircle.Radius();

			    if (CombineToPath)
			    {
			        if (geom2DCircle.Position().Sense() > 0)
			        {
			            reverse = !reverse;
			        }

			        ClosePath();
			        var rimPoints = new List<Pnt2d>(4)
			        {
			            new Pnt2d(circleCenter.X, circleCenter.Y + circleRadius),
			            new Pnt2d(circleCenter.X - circleRadius, circleCenter.Y),
			            new Pnt2d(circleCenter.X, circleCenter.Y - circleRadius),
			            new Pnt2d(circleCenter.X + circleRadius, circleCenter.Y),
			        };

			        SvgArcSweep sweep;
			        if (reverse)
			        {
			            rimPoints.Reverse();
			            sweep = SvgArcSweep.Positive;
			        }
			        else
			        {
			            sweep = SvgArcSweep.Negative;
			        }

			        AddToPath(new SvgPathSegArc(rimPoints[0], circleRadius, circleRadius, 45.0f, SvgArcSize.Small, sweep, rimPoints[1]));
			        AddToPath(new SvgPathSegArc(rimPoints[1], circleRadius, circleRadius, 45.0f, SvgArcSize.Small, sweep, rimPoints[2]));
			        AddToPath(new SvgPathSegArc(rimPoints[2], circleRadius, circleRadius, 45.0f, SvgArcSize.Small, sweep, rimPoints[3]));
			        AddToPath(new SvgPathSegArc(rimPoints[3], circleRadius, circleRadius, 45.0f, SvgArcSize.Small, sweep, rimPoints[0]));
                    ClosePath();
			    }
			    else
                {
                    CurrentGroup.Children.Add(new SvgCircleElement(circleCenter, circleRadius));
			    }

			    // Enlarge BB
			    var f = geom2DCircle.FirstParameter();
			    var q = (geom2DCircle.LastParameter() - f) / 4;
			    BoundingBox?.Add(geom2DCircle.Value(f));
			    BoundingBox?.Add(geom2DCircle.Value(f + q));
			    BoundingBox?.Add(geom2DCircle.Value(f + q * 2));
			    BoundingBox?.Add(geom2DCircle.Value(f + q * 3));
			}
        }

        //--------------------------------------------------------------------------------------------------

        protected void AddEllipse(Geom2d_Ellipse geom2DEllipse, double first, double last, bool reverse)
        {
            if (Math.Abs(last - first) < geom2DEllipse.Period())
			{
				// Ellipse arc
                var start = geom2DEllipse.Value(reverse ? last : first);
                var end = geom2DEllipse.Value(reverse ? first : last);

				// Add the midpoint seems to be the simplest way to improve the BB
				BoundingBox?.Add(geom2DEllipse.Value(first + (last - first) / 2));

				// Get parameters of ellipse
				double radiusX = geom2DEllipse.MajorRadius();
				double radiusY = geom2DEllipse.MinorRadius();
				double angleX = Maths.NormalizeAngleDegree(geom2DEllipse.XAxis().Angle(Ax2d.OX).ToDeg());
				double length = last - first;
				double halfParameter = (geom2DEllipse.LastParameter() - geom2DEllipse.FirstParameter()) / 2.0;
				var size = (length < halfParameter) ? SvgArcSize.Small : SvgArcSize.Large;
                var sweep = geom2DEllipse.Position().Sense() > 0 
                    ? (reverse ? SvgArcSweep.Negative : SvgArcSweep.Positive)
                    : (reverse ? SvgArcSweep.Positive : SvgArcSweep.Negative);

				AddToPath(new SvgPathSegArc(start, radiusX, radiusY, angleX, size, sweep, end));
			}
            else
            {
                // Complete ellipse
                if (reverse)
                {
                    geom2DEllipse = geom2DEllipse.Reversed() as Geom2d_Ellipse;
                }

                double rotationAngle = geom2DEllipse.XAxis().Angle(Ax2d.OX);

                var segment = new SvgEllipseElement(geom2DEllipse.Location(), geom2DEllipse.MajorRadius(), geom2DEllipse.MinorRadius());
                segment.Transforms.Add(new SvgRotateTransform(Maths.NormalizeAngleDegree(rotationAngle.ToDeg())));
                CurrentGroup.Children.Add(segment);

                // Enlarge BB
                var f = geom2DEllipse.FirstParameter();
                var q = (geom2DEllipse.LastParameter() - f) / 4;
                BoundingBox?.Add(geom2DEllipse.Value(f));
                BoundingBox?.Add(geom2DEllipse.Value(f + q));
                BoundingBox?.Add(geom2DEllipse.Value(f + q * 2));
                BoundingBox?.Add(geom2DEllipse.Value(f + q * 3));
            }
        }

        //--------------------------------------------------------------------------------------------------

        protected void AddBSplineCurve(Geom2d_BSplineCurve geom2DBSpline, double first, double last, bool reverse)
        {
            var converter = new Geom2dConvert_BSplineCurveToBezierCurve(geom2DBSpline, first, last, 0.001 /*Precision.PConfusion() * 10*/);

            if (reverse)
            {
                for (int i = converter.NbArcs(); i >= 1; i -= 1)
                {
                    var arc = converter.Arc(i);
                    AddBezierCurve(arc, arc.FirstParameter(), arc.LastParameter(), true);
                }
            }
            else
            {
                for (int i = 1; i <= converter.NbArcs(); i += 1)
                {
                    var arc = converter.Arc(i);
                    AddBezierCurve(arc, arc.FirstParameter(), arc.LastParameter(), false);
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        protected void AddBezierCurve(Geom2d_BezierCurve geom2DBezier, double first, double last, bool reverse)
        {
            if (geom2DBezier.Degree() > 3)
            {
                // Try to reduce the order of the curve
                var continuity = geom2DBezier.Continuity();
                if (continuity != GeomAbs_Shape.GeomAbs_C0)
                    continuity = GeomAbs_Shape.GeomAbs_C1;

                var converter = new Geom2dConvert_ApproxCurve(geom2DBezier, 0.001 /*Precision.Confusion() * 10*/, continuity, 1000, 3);
                if (!(converter.IsDone() && converter.HasResult()))
                {
                    Messages.Warning("SvgExporter: Bezier curve has an undecreasable order of " + geom2DBezier.Degree() + ".");
                    return;
                }
                AddBSplineCurve(converter.Curve(), first, last, reverse);
                return;
            }

            // Create segment, SVG path does not support UV
            geom2DBezier.Segment(first, last);
            Pnt2d c1, c2;
            var start = reverse ? geom2DBezier.EndPoint() : geom2DBezier.StartPoint();
            var end = reverse ? geom2DBezier.StartPoint() : geom2DBezier.EndPoint();
            
            BoundingBox?.Add(start);
            BoundingBox?.Add(end);

            switch (geom2DBezier.Degree())
            {
                case 1:
                    AddToPath(new SvgPathSegLineto(start, end));
                    break;

                case 2:
                    c1 = geom2DBezier.Pole(2);
                    BoundingBox?.Add(c1);
                    AddToPath(new SvgPathSegCurvetoQuadratic(start, c1, end));
                    break;

                case 3:
                    c1 = geom2DBezier.Pole(reverse ? 3 : 2);
                    c2 = geom2DBezier.Pole(reverse ? 2 : 3);
                    BoundingBox?.Add(c1);
                    BoundingBox?.Add(c2);
                    AddToPath(new SvgPathSegCurvetoCubic(start, c1, c2, end));
                    break;

                default:
                    Messages.Warning("SvgExporter: Bezier curve has an unsupported order of " + geom2DBezier.Degree() + ".");
                    break;
            }
        }

        //--------------------------------------------------------------------------------------------------

        protected void AddLine(Geom2d_Line geom2DLine, double first, double last, bool reverse)
        {
            var start = geom2DLine.Value(first);
            var end = geom2DLine.Value(last);

            BoundingBox?.Add(start);
            BoundingBox?.Add(end);

            if (reverse)
                AddToPath(new SvgPathSegLineto(end, start));
            else
                AddToPath(new SvgPathSegLineto(start, end));
        }

        //--------------------------------------------------------------------------------------------------
        #endregion
    }
}