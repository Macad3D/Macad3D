using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Macad.Common;
using Macad.Occt;

namespace Macad.Core.Exchange.Dxf
{
    public class DxfVectorExporter
    {
        public static MemoryStream Export(VectorExportTemplate template, VectorExportLayer[] layers, 
            DxfVersion version, DxfFlags flags = DxfFlags.None, double precision = 0.01)
        {
            var exporter = new DxfVectorExporter();
            return exporter._Export(template, layers, version, flags, precision);
        }

        //--------------------------------------------------------------------------------------------------

        DxfDomDocument _Document;
        readonly Dictionary<VectorExportLayerType, double> _Lineweights = new Dictionary<VectorExportLayerType, double>();
        string _CurrentLayer = "0";
        double _Precision;

        //--------------------------------------------------------------------------------------------------

        DxfVectorExporter()
        {
        }

        //--------------------------------------------------------------------------------------------------

        MemoryStream _Export(VectorExportTemplate template, VectorExportLayer[] layers, 
            DxfVersion version, DxfFlags flags, double precision)
        {
            _Precision = precision;
            _Document = new DxfDomDocument(version, flags);

            _AddLinetypes(template);

            // Export
            foreach (var layer in layers)
            {
                _ExportLayer(layer);
            }

            var stream = _Document.WriteToStream();
            _Document = null;
            return stream;
        }

        //--------------------------------------------------------------------------------------------------

        void _AddLinetypes(VectorExportTemplate template)
        {
            switch (template)
            {
                case VectorExportTemplate.Drawing:
                    _Document.Linetypes.Add(new DxfDomLinetype(VectorExportLayerType.Outline.ToString(), "", 0.0, new double[0]));
                    _Lineweights.Add(VectorExportLayerType.Outline, 0.5);

                    _Document.Linetypes.Add(new DxfDomLinetype(VectorExportLayerType.Inline.ToString(), "", 0.0, new double[0]));
                    _Lineweights.Add(VectorExportLayerType.Inline, 0.3);

                    _Document.Linetypes.Add(new DxfDomLinetype(VectorExportLayerType.HiddenOutline.ToString(), "", 0.6, new[] {0.4, -0.2}));
                    _Lineweights.Add(VectorExportLayerType.HiddenOutline, 0.3);

                    _Document.Linetypes.Add(new DxfDomLinetype(VectorExportLayerType.HiddenInline.ToString(), "", 0.4, new[] {0.2, -0.2}));
                    _Lineweights.Add(VectorExportLayerType.HiddenInline, 0.2);
                    break;

                case VectorExportTemplate.Contours:
                    _Document.Linetypes.Add(new DxfDomLinetype(VectorExportLayerType.Outline.ToString(), "", 0.0, new double[0]));
                    _Lineweights.Add(VectorExportLayerType.Outline, 0.0);

                    _Document.Linetypes.Add(new DxfDomLinetype(VectorExportLayerType.FilledOutline.ToString(), "", 0.0, new double[0]));
                    _Lineweights.Add(VectorExportLayerType.FilledOutline, 0.0);
                    break;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _ExportLayer(VectorExportLayer layer)
        {
            _Document.Layers.Add(new DxfDomLayer(layer.Name, _Lineweights[layer.Type], layer.Type.ToString()));
            _CurrentLayer = layer.Name;

            foreach (var edge in layer.BRep.Edges())
            {
                var tedge = edge.TShape() as BRep_TEdge;
                if (tedge == null)
                    return;

                var curves = tedge.CurvesList();
                foreach (var curve in curves)
                {
                    Geom2d_Curve geomCurve;
                    double first = 0;
                    double last = 0;
                    BRep_CurveOnSurface curveOnSurface = curve as BRep_CurveOnSurface;
                    if (curveOnSurface != null)
                    {
                        geomCurve = curveOnSurface.PCurve();
                        first = curveOnSurface.First();
                        last = curveOnSurface.Last();
                    }
                    else
                    {
                        geomCurve = BRep_Tool.CurveOnSurface(edge, new Geom_Plane(Ax3.XOY), new TopLoc_Location(), ref first, ref last);
                    }

                    if (geomCurve != null)
                    {
                        _AddCurve(geomCurve, first, last);
                    }
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _AddCurve(Geom2d_Curve curve2d, double first, double last)
        {
            // Process curve
            switch (curve2d)
            {
                case Geom2d_Line line:
                    _AddLine(line, first, last);
                    break;

                case Geom2d_Ellipse ellipse:
                    _AddEllipse(ellipse, first, last);
                    break;

                case Geom2d_Circle circle:
                    _AddCircle(circle, first, last);
                    break;

                case Geom2d_BSplineCurve bspline:
                    _AddBSplineCurve(bspline, first, last);
                    break;

                default:
                    // Try to create B-Spline curve
                    var bsplineCurve = ShapeConstruct.ConvertCurveToBSpline(curve2d, first, last, _Precision*10.0, curve2d.Continuity(), 10000, 3);
                    if (bsplineCurve != null)
                    {
                        _AddBSplineCurve(bsplineCurve, first, last);
                        return;
                    }

                    Messages.Warning($"DxfExporter: Unsupported curve class: {curve2d.GetType().Name}.");
                    break;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _AddLine(Geom2d_Line line, double first, double last)
        {
            var start = line.Value(first);
            var end = line.Value(last);

            var entity = new DxfDomLine(_CurrentLayer, start, end);
            _Document.Entities.Add(entity);
        }

        //--------------------------------------------------------------------------------------------------

        void _AddCircle(Geom2d_Circle circle, double first, double last)
        {
            if (Math.Abs(last - first) < circle.Period())
            {
                // Circle arc
                if (circle.Position().Sense() > 0)
                {
                    var temp = first;
                    first = last;
                    last = temp;
                }

                var entity = new DxfDomCircle(_CurrentLayer, circle.Location(), circle.Radius(), circle.Value(first), circle.Value(last));
                _Document.Entities.Add(entity);
            }
            else
            {
                // Full circle
                var entity = new DxfDomCircle(_CurrentLayer, circle.Location(), circle.Radius());
                _Document.Entities.Add(entity);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _AddEllipse(Geom2d_Ellipse ellipse, double first, double last)
        {
            if (_Document.Flags.HasFlag(DxfFlags.ExportEllipseAsPolygon))
            {
                if (Math.Abs(last - first) < ellipse.Period())
                {
                    // Elliptical arc
                    var trimmedCurve = new Geom2d_TrimmedCurve(ellipse, first, last);
                    _AddPolygonCurve(trimmedCurve);
                }
                else
                {
                    // Full ellipse
                    _AddPolygonCurve(ellipse);
                }
                return;
            }

            var center = ellipse.Location();
            var majorAxisPointOffset = ellipse.XAxis().Direction.ToVec().Multiplied(ellipse.MajorRadius());
            var ratio = ellipse.MinorRadius() / ellipse.MajorRadius();

            if (Math.Abs(last - first) < ellipse.Period())
            {
                // Elliptical arc
                if (ellipse.Position().Sense() > 0)
                {
                    var temp = first;
                    first = ellipse.Period() - last;
                    last = ellipse.Period() - temp;
                }

                var entity = new DxfDomEllipse(_CurrentLayer, center, majorAxisPointOffset.ToPnt(), ratio, first, last);
                _Document.Entities.Add(entity);
            }
            else
            {
                // Full ellipse
                var entity = new DxfDomEllipse(_CurrentLayer, center, majorAxisPointOffset.ToPnt(), ratio);
                _Document.Entities.Add(entity);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _AddBSplineCurve(Geom2d_BSplineCurve bspline, double first, double last)
        {
            // Cut spline
            bspline = Geom2dConvert.SplitBSplineCurve(bspline, first, last, 0.00001);

            if (_Document.Flags.HasFlag(DxfFlags.ExportSplineAsPolygon))
            {
                _AddPolygonCurve(bspline);
                return;
            }

            if (bspline.Degree() > 3)
            {
                // Try to reduce the order of the curve
                var continuity = bspline.Continuity();
                if (continuity != GeomAbs_Shape.GeomAbs_C0)
                    continuity = GeomAbs_Shape.GeomAbs_C1;

                var converter = new Geom2dConvert_ApproxCurve(bspline, _Precision*10.0, continuity, 100, 3);
                if (!(converter.IsDone() && converter.HasResult()))
                {
                    Messages.Warning("DxfExporter: BSpline curve has an undecreasable degree of " + bspline.Degree() + ".");
                    return;
                }

                bspline = converter.Curve();
            }

            var knotSource = bspline.KnotSequence();
            var knots = new double[knotSource.Length()];
            int sourceStart = knotSource.Lower();
            for (int i = 0; i < knots.Length; i++)
            {
                knots[i] = knotSource.Value(sourceStart + i);
            }

            var points = new Pnt2d[bspline.NbPoles()];
            var weights = new double[points.Length];
            for (int i = 0; i < bspline.NbPoles(); i++)
            {
                points[i] = bspline.Pole(i + 1);
                weights[i] = bspline.Weight(i + 1);
            }

            var flags = DxfDomSpline.SplineFlags.None;
            if (bspline.IsRational())
            {
                flags = flags.Added(DxfDomSpline.SplineFlags.IsRational);
            }

            var entity = new DxfDomSpline(_CurrentLayer, bspline.Degree(), knots, points, weights, flags);
            _Document.Entities.Add(entity);
        }

        //--------------------------------------------------------------------------------------------------

        void _AddPolygonCurve(Geom2d_Curve curve)
        {
            var converter = new Geom2dConvert_ApproxCurve(curve, _Precision, GeomAbs_Shape.GeomAbs_C0, 500, 1);
            if (!(converter.IsDone() && converter.HasResult()))
            {
                Messages.Error($"Cannot tesselate bezier to polyline.");
                return;
            }

            var approx = converter.Curve();
            var points = new Pnt2d[approx.NbPoles()];
            for (int i = 0; i < points.Length; i++)
            {
                points[i] = approx.Pole(i + 1);
            }

            var entity = new DxfDomLwPolyline(_CurrentLayer, points);
            _Document.Entities.Add(entity);
        }

        //--------------------------------------------------------------------------------------------------

    }
}
