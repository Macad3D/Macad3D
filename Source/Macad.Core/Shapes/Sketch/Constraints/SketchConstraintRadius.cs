using System;
using System.Collections.Generic;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.SketchSolve;

namespace Macad.Core.Shapes;

[SerializeType]
public class SketchConstraintRadius : SketchConstraint, ISketchConstraintCreator
{
    [SerializeMember]
    public double Radius { get; set; }

    public override double Parameter
    {
        get { return Radius; }
        set { Radius = value; }
    }

    //--------------------------------------------------------------------------------------------------

    // Implement for serialization
    SketchConstraintRadius()
    { }

    //--------------------------------------------------------------------------------------------------

    public SketchConstraintRadius(int segment, double radius)
    {
        Segments = new[] {segment};
        Radius = radius;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool MakeConstraint(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, SketchConstraintSolver solver)
    {
        if (Radius <= 0)
            return false;

        List<Constraint> constraints = new List<Constraint>();
        bool valid = true;

        if (segments[Segments[0]] is SketchSegmentCircle circleSegment)
        {
            // Circle
            var con = new Constraint { Type = ConstraintType.CircleRadius };
            valid &= solver.SetCircle(ref con.Circle1, circleSegment, constraints, points, false, false);
            valid &= solver.SetParameter(out con.Parameter, Radius, true);
            constraints.Add(con);
        }
        else if (segments[Segments[0]] is SketchSegmentArc arcRimSegment)
        {
            // Arc Rim
            var con = new Constraint { Type = ConstraintType.CircleRadius };
            valid &= solver.SetCircle(ref con.Circle1, arcRimSegment, constraints, points, false, false);
            valid &= solver.SetParameter(out con.Parameter, Radius, true);
            constraints.Add(con);
        }

        if (valid)
        {
            constraints.ForEach(solver.AddConstraint);
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override SketchConstraint Clone()
    {
        return new SketchConstraintRadius(Segments[0], Radius);
    }
                            
    //--------------------------------------------------------------------------------------------------

    public static bool CanCreate(Sketch sketch, List<int> points, List<int> segments)
    {
        return points.Count == 0 
               && segments.Count > 0
               && (SketchConstraintHelper.AllSegmentsOfType<SketchSegmentCircle>(sketch, segments)
                   || SketchConstraintHelper.AllSegmentsOfType<SketchSegmentArc>(sketch, segments))
               && !SketchConstraintHelper.AnyConstrainedSegment<SketchConstraintFixed>(sketch, segments)
               && !SketchConstraintHelper.AnyConstrainedSegment<SketchConstraintRadius>(sketch, segments);
    }

    //--------------------------------------------------------------------------------------------------

    public static List<SketchConstraint> Create(Sketch sketch, List<int> points, List<int> segments)
    {
        var list = new List<SketchConstraint>();

        foreach (var segmentIndex in segments)
        {
            var circle = sketch.Segments[segmentIndex] as SketchSegmentCircle;
            if (circle != null)
            {
                var radius = circle.Radius(sketch.Points);
                if (radius > 0)
                {
                    list.Add(new SketchConstraintRadius(segmentIndex, radius));
                }
                continue;
            }

            var arcRim = sketch.Segments[segmentIndex] as SketchSegmentArc;
            if (arcRim != null)
            {
                var radius = arcRim.Radius(sketch.Points);
                if (radius > 0)
                {
                    list.Add(new SketchConstraintRadius(segmentIndex, radius));
                }
                continue;
            }
            throw new NotImplementedException();
        }
        return list;
    }
}