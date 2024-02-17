using System;
using System.Collections.Generic;
using System.Diagnostics;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;
/*
 * p0,p1 = start and end points
 * p2 = rim point
 */

[SerializeType]
public class SketchSegmentArc : SketchSegment
{
    public SketchSegmentArc()
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

    public int RimPoint
    {
        get { return Points[2]; }
    }

    //--------------------------------------------------------------------------------------------------

    public SketchSegmentArc(int start, int end, int rim)
    {
        Points = new int[] { start, end, rim };
    }

    //--------------------------------------------------------------------------------------------------

    public override SketchSegment Clone()
    {
        return base.Clone(new SketchSegmentArc(Points[0], Points[1], Points[2]));
    }

    //--------------------------------------------------------------------------------------------------

    public override Geom2d_Curve MakeCurve(Dictionary<int, Pnt2d> points)
    {
        try
        {
            var parameters = new double[2];
            var circ = GetCircle(points, parameters);
            if (circ == null)
                return null;

            return new Geom2d_TrimmedCurve(new Geom2d_Circle(circ), parameters[0], parameters[1]);
        }
        catch (Exception)
        {
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double Radius(Dictionary<int, Pnt2d> points)
    {
        try
        {
            var circ = GetCircle(points);
            return circ?.Radius() ?? 0;
        }
        catch (Exception)
        {
            return 0;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Pnt2d Center(Dictionary<int, Pnt2d> points)
    {
        try
        {
            var circ = GetCircle(points);
            return circ?.Location() ?? Pnt2d.Origin;
        }
        catch (Exception)
        {
            return Pnt2d.Origin;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public gp_Circ2d GetCircle(Dictionary<int, Pnt2d> points, double[] parameter = null)
    {
        var start = points[Points[0]];
        var end = points[Points[1]];
        var rim = points[Points[2]];
        if ((start.Distance(end) <= 0) || (end.Distance(rim) <= 0) || (start.Distance(rim) <= 0))
            return null;

        var circ = new gce_MakeCirc2d(start, rim, end).Value();

        if (circ != null && parameter != null)
        {
            Debug.Assert(parameter.Length == 2);
            parameter[0] = ElCLib.Parameter(circ, start);
            parameter[1] = ElCLib.Parameter(circ, end);
        }
        return circ;
    }

    //--------------------------------------------------------------------------------------------------

    public double Angle(Dictionary<int, Pnt2d> points)
    {
        var parameter = new double[2];
        var circ = GetCircle(points, parameter);
        if (circ == null)
            return 0;

        return (parameter[1] - parameter[0]) * circ.Position().Sense();
    }
}