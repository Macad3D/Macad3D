using System;
using System.Collections.Generic;
using System.Linq;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public class SketchSegmentBezier : SketchSegment
{
    public SketchSegmentBezier()
    {
        Points = new int[4];
    }

    //--------------------------------------------------------------------------------------------------

    public override int StartPoint
    {
        get { return Points[0]; }
    }

    //--------------------------------------------------------------------------------------------------

    public override int EndPoint
    {
        get { return Points.Last(); }
    }

    //--------------------------------------------------------------------------------------------------

    public int Degree
    {
        get { return Points.Length-1; }
    }

    //--------------------------------------------------------------------------------------------------

    public SketchSegmentBezier(int p1, int cp, int p2)
    {
        Points = new int[] { p1, cp, p2 };
    }

    //--------------------------------------------------------------------------------------------------

    public SketchSegmentBezier(int p1, int cp1, int cp2, int p2)
    {
        Points = new int[] { p1, cp1, cp2, p2 };
    }

    //--------------------------------------------------------------------------------------------------

    public override SketchSegment Clone()
    {
        switch (Points.Length)
        {
            case 3:
                return base.Clone(new SketchSegmentBezier(Points[0], Points[1], Points[2]));
            case 4:
                return base.Clone(new SketchSegmentBezier(Points[0], Points[1], Points[2], Points[3]));
        }
        throw new NotImplementedException();
    }

    //--------------------------------------------------------------------------------------------------

    public override Geom2d_Curve MakeCurve(Dictionary<int, Pnt2d> points)
    {
        try
        {
            var p1 = points[StartPoint];
            var p2 = points[EndPoint];
            if (p1.Distance(p2) <= 0)
                return null;

            var curvePoles = new TColgp_Array1OfPnt2d(1, Points.Length);
            for (var i = 0; i < Points.Length; i++)
            {
                curvePoles.SetValue(i+1, points[Points[i]]);
            }

            return new Geom2d_BezierCurve(curvePoles);
        }
        catch (Exception)
        {
            return null;
        }
    }
}