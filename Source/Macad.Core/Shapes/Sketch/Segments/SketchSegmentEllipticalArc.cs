using System;
using System.Collections.Generic;
using System.Diagnostics;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;
/*
 * p0, p1 = end points, also: rim point and major axis point
 * p2 = center point
 */

[SerializeType]
public class SketchSegmentEllipticalArc : SketchSegment
{
    public SketchSegmentEllipticalArc()
    {
        Points = new int[3];
    }

    //--------------------------------------------------------------------------------------------------

    public override int StartPoint
    {
        get { return Points[0]; }
    }

    //--------------------------------------------------------------------------------------------------

    public override int EndPoint
    {
        get { return Points[1]; }
    }

    //--------------------------------------------------------------------------------------------------

    public int CenterPoint
    {
        get { return Points[2]; }
    }

    //--------------------------------------------------------------------------------------------------

    public SketchSegmentEllipticalArc(int p1, int p2, int center)
    {
        Points = new int[] { p1, p2, center };
    }

    //--------------------------------------------------------------------------------------------------

    public override SketchSegment Clone()
    {
        return base.Clone(new SketchSegmentEllipticalArc(Points[0], Points[1], Points[2]));
    }

    //--------------------------------------------------------------------------------------------------

    public override Geom2d_Curve MakeCurve(Dictionary<int, Pnt2d> points)
    {
        try
        {
            var parameters = new double[2];
            var ellipse = GetEllipse(points, parameters);
            if (ellipse == null)
                return null;

            return new Geom2d_TrimmedCurve(new Geom2d_Ellipse(ellipse), parameters[0], parameters[1]);
        }
        catch (Exception)
        {
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public gp_Elips2d GetEllipse(Dictionary<int, Pnt2d> points, double[] parameters = null)
    {
        var p1 = points[Points[0]];
        var p2 = points[Points[1]];
        var center = points[Points[2]];
        var ellipse = Geom.Geom2dUtils.MakeEllipse(center, p1, p2);

        if (ellipse != null && parameters != null)
        {
            Debug.Assert(parameters.Length == 2);
            parameters[0] = ElCLib.Parameter(ellipse, p1);
            parameters[1] = ElCLib.Parameter(ellipse, p2);
        }
        return ellipse;
    }
        
    //--------------------------------------------------------------------------------------------------

    public int GetMajorAxisPoint(Dictionary<int, Pnt2d> points)
    {
        var p1 = points[Points[0]];
        var p2 = points[Points[1]];
        var center = points[Points[2]];

        if (p1.Distance(p2) <= 0 || p2.Distance(center) <= 0 || p1.Distance(center) <= 0)
            return -1;

        return p1.Distance(center) < p2.Distance(center) ? Points[1] : Points[0];
    }

    //--------------------------------------------------------------------------------------------------

}