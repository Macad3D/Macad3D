using System;
using System.Collections.Generic;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;
/*
 * p0 = Center point
 * p1 = Rim point
 */

[SerializeType]
public class SketchSegmentCircle : SketchSegment
{
    public SketchSegmentCircle()
    {
        Points = new int[2];
    }

    //--------------------------------------------------------------------------------------------------

    public override int StartPoint
    {
        get { return -1; }
    }

    //--------------------------------------------------------------------------------------------------

    public override int EndPoint
    {
        get { return -1; }
    }

    //--------------------------------------------------------------------------------------------------

    public int CenterPoint
    {
        get { return Points[0]; }
    }

    //--------------------------------------------------------------------------------------------------

    public int RimPoint
    {
        get { return Points[1]; }
    }

    //--------------------------------------------------------------------------------------------------

    public SketchSegmentCircle(int center, int rim)
    {
        Points = new int[] {center, rim};
    }

    //--------------------------------------------------------------------------------------------------

    public override SketchSegment Clone()
    {
        return base.Clone(new SketchSegmentCircle(Points[0], Points[1]));
    }

    //--------------------------------------------------------------------------------------------------

    public gp_Circ2d GetCircle(Dictionary<int, Pnt2d> points)
    {
        try
        {
            var pCenter = points[Points[0]];
            var pRim = points[Points[1]];
            if (pCenter.Distance(pRim) <= 0)
                return null;

            return new gce_MakeCirc2d(pCenter, pRim, true).Value();
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override Geom2d_Curve MakeCurve(Dictionary<int, Pnt2d> points)
    {
        try
        {
            var circ = GetCircle(points);
            if (circ == null)
                return null;

            return new Geom2d_Circle(circ);
        }
        catch (Exception)
        {
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double Radius(Dictionary<int, Pnt2d> points)
    {
        var pCenter = points[Points[0]];
        var pRim = points[Points[1]];
        return pCenter.Distance(pRim);
    }

    //--------------------------------------------------------------------------------------------------

}