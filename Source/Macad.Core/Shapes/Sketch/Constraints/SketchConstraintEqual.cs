using System.Collections.Generic;
using System.Diagnostics;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.SketchSolve;

namespace Macad.Core.Shapes;

[SerializeType]
public class SketchConstraintEqual : SketchConstraint, ISketchConstraintCreator
{        
    // Implement for serialization
    SketchConstraintEqual()
    { }

    //--------------------------------------------------------------------------------------------------

    public SketchConstraintEqual(int segment1, int segment2)
    {
        Segments = new[] { segment1, segment2 };
    }

    //--------------------------------------------------------------------------------------------------

    public override SketchConstraint Clone()
    {
        return new SketchConstraintEqual(Segments[0], Segments[1]);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool MakeConstraint(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, SketchConstraintSolver solver)
    {
        if (segments[Segments[0]] is SketchSegmentLine lineSegment1)
        {
            var lineSegment2 = segments[Segments[1]] as SketchSegmentLine;
            if (lineSegment2 == null) return false;

            var con = new Constraint { Type = ConstraintType.EqualLength };

            bool valid = true;
            valid &= solver.SetLine(ref con.Line1, lineSegment1.Points[0], lineSegment1.Points[1], false, false);
            valid &= solver.SetLine(ref con.Line2, lineSegment2.Points[0], lineSegment2.Points[1], false, false);

            if (valid)
            {
                solver.AddConstraint(con);
            }
            return valid;
        }

        if (segments[Segments[0]] is SketchSegmentCircle circleSegment1)
        {
            List<Constraint> constraints = new List<Constraint>();

            var circleSegment2 = segments[Segments[1]] as SketchSegmentCircle;
            if (circleSegment2 == null) return false;
            bool valid = true;

            var con = new Constraint { Type = ConstraintType.EqualRadiusCircles };
            valid &= solver.SetCircle(ref con.Circle1, circleSegment1, constraints, points, true, false);
            valid &= solver.SetCircle(ref con.Circle2, circleSegment2, constraints, points, true, false);
            constraints.Add(con);

            if (valid)
            {
                constraints.ForEach(solver.AddConstraint);
            }
            return valid;
        }
        return false;
    }
                            
    //--------------------------------------------------------------------------------------------------
    
    public static bool CanCreate(Sketch sketch, List<int> points, List<int> segments)
    {
        return points.Count == 0 
               && segments.Count >= 2
               && (SketchConstraintHelper.AllSegmentsOfType<SketchSegmentCircle>(sketch, segments)
                   || SketchConstraintHelper.AllSegmentsOfType<SketchSegmentLine>(sketch, segments))
               && !SketchConstraintHelper.AnyConstrainedSegment<SketchConstraintEqual>(sketch, segments);
    }

    //--------------------------------------------------------------------------------------------------
        
    public static List<SketchConstraint> Create(Sketch sketch, List<int> points, List<int> segments)
    {
        var list = new List<SketchConstraint>();

        for (int i = 0; i < segments.Count - 1; i++)
        {
            var seg1 = sketch.Segments[segments[i]];
            Debug.Assert(seg1 != null);
            var seg2 = sketch.Segments[segments[i + 1]];
            Debug.Assert(seg2 != null);

            if ((seg1 is SketchSegmentCircle || seg1 is SketchSegmentLine)
                && (seg2 is SketchSegmentCircle || seg2 is SketchSegmentLine))
            {
                list.Add(new SketchConstraintEqual(segments[i], segments[i + 1]));
            }
        }
        return list;
    }
}