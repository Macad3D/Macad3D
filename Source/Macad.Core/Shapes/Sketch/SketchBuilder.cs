using System.Diagnostics;
using Macad.Common;
using Macad.Occt;

namespace Macad.Core.Shapes;

public class SketchBuilder
{
    readonly Sketch _Sketch;

    public SketchBuilder(Sketch sketch)
    {
        Debug.Assert(sketch != null);
        _Sketch = sketch;
    }

    //--------------------------------------------------------------------------------------------------

    int _StartPointIndex = -1;
    int _EndPointIndex = -1;

    //--------------------------------------------------------------------------------------------------

    public int StartPath(double x, double y)
    {
        _StartPointIndex = _Sketch.AddPoint(new Pnt2d(x, y));
        _EndPointIndex = _StartPointIndex;
        return _StartPointIndex;
    }

    //--------------------------------------------------------------------------------------------------
        
    public void EndPath(bool checkIfClosed=true, double tolerance=0.000001)
    {
        if (_StartPointIndex != _EndPointIndex
            && _Sketch.Points[_StartPointIndex].IsEqual(_Sketch.Points[_EndPointIndex], tolerance))
        {
            ClosePath();
        }
        _StartPointIndex = -1;
        _EndPointIndex = -1;
    }

    //--------------------------------------------------------------------------------------------------

    public void ClosePath()
    {
        Debug.Assert(_StartPointIndex != -1);
        Debug.Assert(_EndPointIndex != -1);
        Debug.Assert(_StartPointIndex != _EndPointIndex);
        _Sketch.MergePoints(_EndPointIndex, _StartPointIndex);
        _StartPointIndex = -1;
        _EndPointIndex = -1;
    }

    //--------------------------------------------------------------------------------------------------

    public int Line(double x1, double y1, double x2, double y2)
    {
        var p1 = _Sketch.AddPoint(new Pnt2d(x1, y1));
        var p2 = _Sketch.AddPoint(new Pnt2d(x2, y2));
        return _Sketch.AddSegment(new SketchSegmentLine(p1, p2));
    }

    public int LineTo(double x, double y)
    {
        Debug.Assert(_EndPointIndex != -1);
        var p1 = _Sketch.AddPoint(new Pnt2d(x, y));
        var seg = _Sketch.AddSegment(new SketchSegmentLine(_EndPointIndex, p1));
        _EndPointIndex = p1;
        return seg;
    }

    //--------------------------------------------------------------------------------------------------

    public int Circle(double centerX, double centerY, double rimX, double rimY)
    {
        var p1 = _Sketch.AddPoint(new Pnt2d(centerX, centerY));
        var p2 = _Sketch.AddPoint(new Pnt2d(rimX, rimY));
        return _Sketch.AddSegment(new SketchSegmentCircle(p1, p2));
    }

    public int Circle(double centerX, double centerY, double radius)
    {
        var pntCenter = new Pnt2d(centerX, centerY);
        var center = _Sketch.AddPoint(pntCenter);
        var rim = _Sketch.AddPoint(pntCenter.Translated(new Vec2d(radius, 0)));
        return _Sketch.AddSegment(new SketchSegmentCircle(center, rim));
    }

    //--------------------------------------------------------------------------------------------------

    public int Ellipse(double centerX, double centerY, double rim1X, double rim1Y, double rim2X, double rim2Y)
    {
        var center = _Sketch.AddPoint(new Pnt2d(centerX, centerY));
        var rim1 = _Sketch.AddPoint(new Pnt2d(rim1X, rim1Y));
        var rim2 = _Sketch.AddPoint(new Pnt2d(rim2X, rim2Y));
        return _Sketch.AddSegment(new SketchSegmentEllipse(center, rim1, rim2));
    }

    public int Ellipse(double centerX, double centerY, double radiusX, double radiusY, double angleDeg)
    {
        var pntCenter = new Pnt2d(centerX, centerY);
        var pntRim1 = pntCenter.Translated(new Vec2d(radiusX, 0).Rotated(angleDeg.ToRad()));
        var pntRim2 = pntCenter.Translated(new Vec2d(0, radiusY).Rotated(angleDeg.ToRad()));
        var center = _Sketch.AddPoint(pntCenter);
        var rim1 = _Sketch.AddPoint(pntRim1);
        var rim2 = _Sketch.AddPoint(pntRim2);
        return _Sketch.AddSegment(new SketchSegmentEllipse(center, rim1, rim2));
    }

    //--------------------------------------------------------------------------------------------------

    public int Arc(double x1, double y1, double x2, double y2, double rimX, double rimY)
    {
        var p1 = _Sketch.AddPoint(new Pnt2d(x1, y1));
        var p2 = _Sketch.AddPoint(new Pnt2d(x2, y2));
        var rim = _Sketch.AddPoint(new Pnt2d(rimX, rimY));
        int seg;
        seg = _Sketch.AddSegment(new SketchSegmentArc(p1, p2, rim));
        return seg;
    }

    public int ArcTo(double x, double y, double rimX, double rimY)
    {
        Debug.Assert(_EndPointIndex != -1);
        var p1 = _Sketch.AddPoint(new Pnt2d(x, y));
        var rim = _Sketch.AddPoint(new Pnt2d(rimX, rimY));
        var seg = _Sketch.AddSegment(new SketchSegmentArc(_EndPointIndex, p1, rim));
        _EndPointIndex = p1;
        return seg;
    }

    //--------------------------------------------------------------------------------------------------

    public int EllipticalArc(double x1, double y1, double x2, double y2, double centerX, double centerY)
    {
        var p1 = _Sketch.AddPoint(new Pnt2d(x1, y1));
        var p2 = _Sketch.AddPoint(new Pnt2d(x2, y2));
        var center = _Sketch.AddPoint(new Pnt2d(centerX, centerY));
        return _Sketch.AddSegment(new SketchSegmentEllipticalArc(p1, p2, center));
    }

    public int EllipticalArcTo(double x, double y, double centerX, double centerY, bool invertSense)
    {
        Debug.Assert(_EndPointIndex != -1);
        var p1 = _Sketch.AddPoint(new Pnt2d(x, y));
        var center = _Sketch.AddPoint(new Pnt2d(centerX, centerY));
        var seg = invertSense
                      ? _Sketch.AddSegment(new SketchSegmentEllipticalArc(p1, _EndPointIndex, center))
                      : _Sketch.AddSegment(new SketchSegmentEllipticalArc(_EndPointIndex, p1, center));
        _EndPointIndex = p1;
        return seg;
    }

    //--------------------------------------------------------------------------------------------------

    public int Bezier(double x1, double y1, double x2, double y2, double cpX, double cpY)
    {
        var p1 = _Sketch.AddPoint(new Pnt2d(x1, y1));
        var p2 = _Sketch.AddPoint(new Pnt2d(x2, y2));
        var cp1 = _Sketch.AddPoint(new Pnt2d(cpX, cpY));
        return _Sketch.AddSegment(new SketchSegmentBezier(p1, cp1, p2));
    }

    public int Bezier(double x1, double y1, double x2, double y2, double cp1X, double cp1Y, double cp2X, double cp2Y)
    {
        var p1 = _Sketch.AddPoint(new Pnt2d(x1, y1));
        var p2 = _Sketch.AddPoint(new Pnt2d(x2, y2));
        var cp1 = _Sketch.AddPoint(new Pnt2d(cp1X, cp1Y));
        var cp2 = _Sketch.AddPoint(new Pnt2d(cp2X, cp2Y));
        return _Sketch.AddSegment(new SketchSegmentBezier(p1, cp1, cp2, p2));
    }

    public int BezierTo(double x, double y, double cpX, double cpY)
    {
        Debug.Assert(_EndPointIndex != -1);
        var p1 = _Sketch.AddPoint(new Pnt2d(x, y));
        var cp1 = _Sketch.AddPoint(new Pnt2d(cpX, cpY));
        var seg = _Sketch.AddSegment(new SketchSegmentBezier(_EndPointIndex, cp1, p1));
        _EndPointIndex = p1;
        return seg;
    }

    public int BezierTo(double x, double y, double cp1X, double cp1Y, double cp2X, double cp2Y)
    {
        Debug.Assert(_EndPointIndex != -1);
        var p1 = _Sketch.AddPoint(new Pnt2d(x, y));
        var cp1 = _Sketch.AddPoint(new Pnt2d(cp1X, cp1Y));
        var cp2 = _Sketch.AddPoint(new Pnt2d(cp2X, cp2Y));
        var seg = _Sketch.AddSegment(new SketchSegmentBezier(_EndPointIndex, cp1, cp2, p1));
        _EndPointIndex = p1;
        return seg;
    }

    //--------------------------------------------------------------------------------------------------

    public void PolyLine(params (double x, double y)[] coords)
    {
        Debug.Assert(coords.Length > 2);

        int length = coords.Length;
        bool closed = coords[0].x.IsEqual(coords[^1].x, double.Epsilon)
                      && coords[0].y.IsEqual(coords[^1].y, double.Epsilon);
        if (closed)
        {
            length -= 1;
        }

        int p0 = _Sketch.AddPoint(new Pnt2d(coords[0].x, coords[0].y));
        int p1 = p0;
        for (var i = 1; i < length; i++)
        {
            int p2 = _Sketch.AddPoint(new Pnt2d(coords[i].x, coords[i].y));
            _Sketch.AddSegment(new SketchSegmentLine(p1, p2));
            p1 = p2;
        }

        if (closed)
        {
            _Sketch.AddSegment(new SketchSegmentLine(p1, p0));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Rectangle(double x1, double y1, double x2, double y2)
    {
        PolyLine((x1, y1), (x2, y1), (x2, y2), (x1, y2), (x1, y1));
    }

    //--------------------------------------------------------------------------------------------------

}