using System;
using System.Collections.Generic;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;
/*
 * p0 = center point
 * p1, p2 = rim point and major axis point
 */

[SerializeType]
public class SketchSegmentEllipse : SketchSegment
{
    public SketchSegmentEllipse()
    {
        Points = new int[3];
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

    public int RimPoint1
    {
        get { return Points[1]; }
    }

    //--------------------------------------------------------------------------------------------------

    public int RimPoint2
    {
        get { return Points[2]; }
    }

    //--------------------------------------------------------------------------------------------------

    public SketchSegmentEllipse(int center, int p1, int p2)
    {
        Points = new int[] { center, p1, p2 };
    }

    //--------------------------------------------------------------------------------------------------

    public override SketchSegment Clone()
    {
        return base.Clone(new SketchSegmentEllipse(Points[0], Points[1], Points[2]));
    }

    //--------------------------------------------------------------------------------------------------

    public override Geom2d_Curve MakeCurve(Dictionary<int, Pnt2d> points)
    {
        try
        {
            var ellipse = GetEllipse(points);

            if(ellipse == null)
                return null;

            return new Geom2d_Ellipse(ellipse);
        }
        catch (Exception)
        {
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public int GetMajorAxisPoint(Dictionary<int, Pnt2d> points)
    {
        var center = points[Points[0]];
        var p1 = points[Points[1]];
        var p2 = points[Points[2]];

        if ((p1.Distance(p2) <= 0) || (p2.Distance(center) <= 0) || (p1.Distance(center) <= 0))
            return -1;

        // Make sure that p1 is the end of the major axis
        return (p1.Distance(center) < p2.Distance(center)) ? Points[2] : Points[1];
    }

    //--------------------------------------------------------------------------------------------------

    public gp_Elips2d GetEllipse(Dictionary<int, Pnt2d> points)
    {
        var center = points[Points[0]];
        var p1 = points[Points[1]];
        var p2 = points[Points[2]];

        return Geom.Geom2dUtils.MakeEllipse(center, p1, p2);
    }

}