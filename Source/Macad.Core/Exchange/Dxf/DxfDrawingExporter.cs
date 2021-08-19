using System;
using System.Collections.Generic;
using System.IO;
using Macad.Common;
using Macad.Core.Drawing;
using Macad.Core.Geom;
using Macad.Occt;

namespace Macad.Core.Exchange.Dxf
{
    public class DxfDrawingExporter: IDrawingRenderer, IRendererCapabilities
    { 
        public static MemoryStream Export(Drawing.Drawing drawing, 
                                          DxfVersion version, DxfFlags flags = DxfFlags.None, double precision = 0.01)
        {
            var exporter = new DxfDrawingExporter();
            return exporter._Export(drawing, version, flags, precision);
        }

        //--------------------------------------------------------------------------------------------------

        DxfDomDocument _Document;
        DxfDomLayer _CurrentLayer = null;
        string _CurrentLayerName => _CurrentLayer?.Name ?? "0";
        double _Precision;

        //--------------------------------------------------------------------------------------------------

        DxfDrawingExporter()
        {
        }

        //--------------------------------------------------------------------------------------------------
        
        MemoryStream _Export(Drawing.Drawing drawing, DxfVersion version, DxfFlags flags, double precision)
        {
            _Precision = precision;
            _Document = new DxfDomDocument(version, flags);

            // Export
            drawing.Render(this);

            var stream = _Document.WriteToStream();
            _Document = null;
            return stream;
        }

        //--------------------------------------------------------------------------------------------------
        
        void _AddPolygonCurve(Geom2d_Curve curve)
        {
            var converter = new Geom2dConvert_ApproxCurve(curve, _Precision, GeomAbs_Shape.GeomAbs_C0, 500, 1);
            if (!(converter.IsDone() && converter.HasResult()))
            {
                Messages.Error($"Cannot tesselate curve to polyline.");
                return;
            }

            var approx = converter.Curve();
            var points = new Pnt2d[approx.NbPoles()];
            for (int i = 0; i < points.Length; i++)
            {
                points[i] = approx.Pole(i + 1);
            }

            var entity = new DxfDomLwPolyline(_CurrentLayerName, points);
            _Document.Entities.Add(entity);
        }

        //--------------------------------------------------------------------------------------------------

        #region IRendererCapabilities

        int IRendererCapabilities.BSplineCurveMaxDegree => 3;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region IDrawingRenderer

        IRendererCapabilities IDrawingRenderer.Capabilities => this;

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.BeginGroup(string name)
        {
            _CurrentLayer = new DxfDomLayer(name);
            _Document.Layers.Add(_CurrentLayer);
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.EndGroup()
        {
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.SetStyle(StrokeStyle stroke, FillStyle fill)
        {
            void __AddLinetype(LineStyle style, double length, double[] pattern)
            {
                var linetype = new DxfDomLinetype(style.ToString(), "", length, pattern);
                _Document.Linetypes.Add(linetype);
            }

            //--------------------------------------------------------------------------------------------------

            if (_CurrentLayer == null || stroke == null)
                return;

            _CurrentLayer.Lineweight = stroke.Width;
            _CurrentLayer.LinetypeName = stroke.LineStyle.ToString();

            if (!_Document.Linetypes.Exists(lt => lt.Name == stroke.LineStyle.ToString()))
            {
                switch (stroke.LineStyle)
                {
                    case LineStyle.Solid:
                        __AddLinetype(LineStyle.Solid, 0.0, new double[0]);
                        break;
                    case LineStyle.Dash:
                        __AddLinetype(LineStyle.Dash, 0.6, new[] {0.4, -0.2});
                        break;
                    case LineStyle.ShortDash:
                        __AddLinetype(LineStyle.ShortDash, 0.4, new[] {0.2, -0.2});
                        break;
                    case LineStyle.Dot:
                        __AddLinetype(LineStyle.Dot, 0.2, new[] {0.1, -0.1});
                        break;
                    case LineStyle.DotDash:
                        __AddLinetype(LineStyle.DotDash, 0.9, new[] {0.4, -0.2, 0.1, -0.2});
                        break;
                    default:
                        throw new ArgumentOutOfRangeException();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.EndPathSegment()
        {
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.EndPath()
        {
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.Line(Pnt2d start, Pnt2d end)
        {
            var entity = new DxfDomLine(_CurrentLayerName, start, end);
            _Document.Entities.Add(entity);
        }

        //--------------------------------------------------------------------------------------------------
        
        void IDrawingRenderer.Circle(Pnt2d center, double radius, double startAngle, double endAngle)
        {
            if (startAngle.Distance(endAngle).IsEqual(Maths.DoublePI, 0.00001))
            {
                // Full circle
                var entity = new DxfDomCircle(_CurrentLayerName, center, radius);
                _Document.Entities.Add(entity);
            }
            else
            {
                // Circle arc
                if(startAngle > endAngle)
                    startAngle.Swap(ref endAngle);

                var entity = new DxfDomCircle(_CurrentLayerName, center, radius, startAngle.ToDeg(), endAngle.ToDeg());
                _Document.Entities.Add(entity);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.Ellipse(Pnt2d center, double majorRadius, double minorRadius, double rotation, double startAngle, double endAngle)
        {
            if(startAngle > endAngle)
                startAngle.Swap(ref endAngle);

            if (_Document.Flags.HasFlag(DxfFlags.ExportEllipseAsPolygon))
            {
                Geom2d_Ellipse geom2DEllipse = new(new Ax2d(center, Dir2d.DX.Rotated(-rotation)), majorRadius, minorRadius);
                if (startAngle.Distance(endAngle).IsEqual(Maths.DoublePI, 0.00001))
                {
                    // Full ellipse
                    _AddPolygonCurve(geom2DEllipse);
                }
                else
                {
                    // Elliptical arc
                    _AddPolygonCurve(new Geom2d_TrimmedCurve(geom2DEllipse, startAngle, endAngle));
                }
                return;
            }

            var majorAxisPointOffset = Dir2d.DX.ToVec().Rotated(-rotation).Multiplied(majorRadius);
            var ratio = minorRadius / majorRadius;

            if (startAngle.Distance(endAngle).IsEqual(Maths.DoublePI, 0.00001))
            {
                // Full ellipse
                var entity = new DxfDomEllipse(_CurrentLayerName, center, majorAxisPointOffset.ToPnt(), ratio);
                _Document.Entities.Add(entity);
            }
            else
            {
                // Elliptical arc
                var entity = new DxfDomEllipse(_CurrentLayerName, center, majorAxisPointOffset.ToPnt(), ratio, startAngle, endAngle);
                _Document.Entities.Add(entity);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void IDrawingRenderer.BSplineCurve(int degree, double[] knots, Pnt2d[] controlPoints, double[] weights, bool isRational)
        {
            if (_Document.Flags.HasFlag(DxfFlags.ExportSplineAsPolygon))
            {
                var spline = Geom2dUtils.MakeBSplineCurve(degree, knots, controlPoints, weights, false);
                _AddPolygonCurve(spline);
                return;
            }
            
            var flags = isRational ? DxfDomSpline.SplineFlags.IsRational : DxfDomSpline.SplineFlags.None;
            var entity = new DxfDomSpline(_CurrentLayerName, degree, knots, controlPoints, weights, flags);
            _Document.Entities.Add(entity);
        }

        #endregion
    }
}