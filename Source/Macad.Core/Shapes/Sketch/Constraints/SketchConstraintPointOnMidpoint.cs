using System.Collections.Generic;
using System.Linq;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.SketchSolve;

namespace Macad.Core.Shapes;

[SerializeType]
public class SketchConstraintPointOnMidpoint : SketchConstraint, ISketchConstraintCreator
{
    // Implement for serialization
    SketchConstraintPointOnMidpoint()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public SketchConstraintPointOnMidpoint(int point, int segment)
    {
        Segments = new[] {segment};
        Points = new[] {point};
    }

    //--------------------------------------------------------------------------------------------------

    public override bool MakeConstraint(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, SketchConstraintSolver solver)
    {
        bool valid = false;
        if (segments[Segments[0]] is SketchSegmentLine)
        {
            var lineSegment = (SketchSegmentLine) segments[Segments[0]];

            var con = new Constraint {Type = ConstraintType.PointOnLineMidpoint};
            valid = solver.SetLine(ref con.Line1, lineSegment.Points[0], lineSegment.Points[1], true, true);
            valid &= solver.SetPoint(ref con.Point1, Points[0], false);

            if (valid)
            {
                solver.AddConstraint(con);
            }
        }

        return valid;
    }
    
    //--------------------------------------------------------------------------------------------------

    public override SketchConstraint Clone()
    {
        return new SketchConstraintPointOnMidpoint(Points[0], Segments[0]);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CanCreate(Sketch sketch, List<int> points, List<int> segments)
    {
        return points.Count > 0
               && segments.Count == 1
               && (SketchConstraintHelper.AllSegmentsOfType<SketchSegmentLine>(sketch, segments)
                   || SketchConstraintHelper.AllSegmentsOfType<SketchSegmentCircle>(sketch, segments))
               && !SketchConstraintHelper.AnySegmentAndPointConstraint<SketchConstraintPointOnSegment>(sketch, points, segments)
               && !SketchConstraintHelper.AnySegmentAndPointConstraint<SketchConstraintPointOnMidpoint>(sketch, points, segments)
               && !SketchConstraintHelper.AnyConstrainedPoint<SketchConstraintFixed>(sketch, points);
    }
    
    //--------------------------------------------------------------------------------------------------

    public static List<SketchConstraint> Create(Sketch sketch, List<int> points, List<int> segments)
    {
        var list = new List<SketchConstraint>();
        var segment = sketch.Segments[segments[0]];

        foreach (var pointIndex in points)
        {
            if (segment.Points.Contains(pointIndex))
                continue;

            list.Add(new SketchConstraintPointOnMidpoint(pointIndex, segments[0]));
        }
        return list;
    }

    //--------------------------------------------------------------------------------------------------
}