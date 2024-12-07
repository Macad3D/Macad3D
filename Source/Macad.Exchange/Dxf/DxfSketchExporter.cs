using System.IO;
using System.Linq;
using Macad.Core.Shapes;
using Macad.Common;
using Macad.Occt;
using Macad.Core;

namespace Macad.Exchange.Dxf;

internal sealed class DxfSketchExporter
{
    public static MemoryStream Export(Sketch sketch, DxfVersion version, DxfFlags flags, double precision=0.01)
    {
        var exporter = new DxfSketchExporter();

        return exporter._Export(sketch, version, flags, precision);
    }

    //--------------------------------------------------------------------------------------------------

    Sketch _Sketch;
    DxfDomDocument _Document;
    double _Precision;

    //--------------------------------------------------------------------------------------------------

    DxfSketchExporter()
    {
    }

    //--------------------------------------------------------------------------------------------------

    MemoryStream _Export(Sketch sketch, DxfVersion version, DxfFlags flags, double precision)
    {
        _Sketch = sketch;
        _Precision = precision;
        _Document = new DxfDomDocument(version, flags);

        foreach (var segment in _Sketch.Segments.Values)
        {
            switch (segment)
            {
                case SketchSegmentLine line:
                    _AddLineSegment(line);
                    break;

                case SketchSegmentCircle circle:
                    _AddCircleSegment(circle);
                    break;

                case SketchSegmentArc arc:
                    _AddArcSegment(arc);
                    break;

                case SketchSegmentEllipse ellipse:
                    _AddEllipseSegment(ellipse);
                    break;

                case SketchSegmentEllipticalArc ellipArc:
                    _AddEllipticalArcSegment(ellipArc);
                    break;

                case SketchSegmentBezier bezier:
                    _AddBezierSegment(bezier);
                    break;
            }
        }

        var stream = _Document.WriteToStream();
        _Document = null;
        return stream;
    }

    //--------------------------------------------------------------------------------------------------

    void _AddLineSegment(SketchSegmentLine lineSegment)
    {
        var p1 = _Sketch.Points[lineSegment.StartPoint];
        var p2 = _Sketch.Points[lineSegment.EndPoint];

        var entity = new DxfDomLine("0", p1, p2);
        _Document.Entities.Add(entity);
    }

    //--------------------------------------------------------------------------------------------------

    void _AddCircleSegment(SketchSegmentCircle circleSegment)
    {
        var p1 = _Sketch.Points[circleSegment.CenterPoint];
        var radius = circleSegment.Radius(_Sketch.Points);

        var entity = new DxfDomCircle("0", p1, radius);
        _Document.Entities.Add(entity);
    }

    //--------------------------------------------------------------------------------------------------

    void _AddArcSegment(SketchSegmentArc arcSegment)
    {
        var circle = arcSegment.GetCircle(_Sketch.Points);

        Pnt2d startPoint;
        Pnt2d endPoint;
        if (circle.Position().Sense() < 0)
        {
            startPoint = _Sketch.Points[arcSegment.StartPoint];
            endPoint = _Sketch.Points[arcSegment.EndPoint];
        }
        else
        {
            startPoint = _Sketch.Points[arcSegment.EndPoint];
            endPoint = _Sketch.Points[arcSegment.StartPoint];
        }

        var entity = new DxfDomCircle("0", circle.Location(), circle.Radius(), startPoint, endPoint);
        _Document.Entities.Add(entity);
    }

    //--------------------------------------------------------------------------------------------------
        
    void _AddEllipseSegment(SketchSegmentEllipse ellipseSegment)
    {
        var ellipse = ellipseSegment.GetEllipse(_Sketch.Points);

        if (_Document.Flags.HasFlag(DxfFlags.ExportEllipseAsPolygon))
        {
            _AddPolygonCurve(new Geom2d_Ellipse(ellipse));
            return;
        }

        var center = ellipse.Location();
        var majorAxisPointOffset = ellipse.XAxis().Direction.ToVec().Multiplied(ellipse.MajorRadius()).ToPnt();
        var ratio = ellipse.MinorRadius() / ellipse.MajorRadius();
            
        var entity = new DxfDomEllipse("0", center, majorAxisPointOffset, ratio);
        _Document.Entities.Add(entity);
    }

    //--------------------------------------------------------------------------------------------------
        
    void _AddEllipticalArcSegment(SketchSegmentEllipticalArc arcSegment)
    {
        var parameter = new double[2];
        var ellipse = arcSegment.GetEllipse(_Sketch.Points, parameter);

        if (_Document.Flags.HasFlag(DxfFlags.ExportEllipseAsPolygon))
        {
            var trimmedCurve = new Geom2d_TrimmedCurve(new Geom2d_Ellipse(ellipse), parameter[0], parameter[1]);
            _AddPolygonCurve(trimmedCurve);
            return;
        }

        var center = ellipse.Location();
        var majorAxisPointOffset = ellipse.XAxis().Direction.ToVec().Multiplied(ellipse.MajorRadius()).ToPnt();
        var ratio = ellipse.MinorRadius() / ellipse.MajorRadius();
            
        var entity = new DxfDomEllipse("0", center, majorAxisPointOffset, ratio, parameter[0], parameter[1]);
        _Document.Entities.Add(entity);
    }

    //--------------------------------------------------------------------------------------------------

    void _AddBezierSegment(SketchSegmentBezier bezierSegment)
    {
        if (_Document.Flags.HasFlag(DxfFlags.ExportSplineAsPolygon))
        {
            var curve = bezierSegment.MakeCurve(_Sketch.Points);
            if (curve == null)
            {
                Messages.Error($"Cannot make curve for converting bezier segment to polyline.");
                return;
            }

            _AddPolygonCurve(curve);
        }
        else
        {
            var pointCount = bezierSegment.Points.Length;

            var knots = new double[pointCount * 2];
            knots.Fill(0, pointCount, 0.0);
            knots.Fill(pointCount, pointCount, 1.0);

            var points = bezierSegment.Points.Select(idx => _Sketch.Points[idx]).ToArray();

            var entity = new DxfDomSpline("0", pointCount - 1, knots, points, null, DxfDomSpline.SplineFlags.None);
            _Document.Entities.Add(entity);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _AddPolygonCurve(Geom2d_Curve curve)
    {
        var converter = new Geom2dConvert_ApproxCurve(curve, _Precision, GeomAbs_Shape.C0, 500, 1);
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

        var entity = new DxfDomLwPolyline("0", points);
        _Document.Entities.Add(entity);
    }

    //--------------------------------------------------------------------------------------------------

}