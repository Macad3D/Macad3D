using System.Collections.Generic;
using System.Diagnostics;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.SketchSolve;

namespace Macad.Core.Shapes;

[SerializeType]
public class SketchConstraintConcentric : SketchConstraint, ISketchConstraintCreator
{        
    // Implement for serialization
    SketchConstraintConcentric()
    { }

    //--------------------------------------------------------------------------------------------------

    public SketchConstraintConcentric(int segment1, int segment2)
    {
        Segments = new[] { segment1, segment2 };
    }

    //--------------------------------------------------------------------------------------------------

    public override bool MakeConstraint(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, SketchConstraintSolver solver)
    {
        var constraints = new List<Constraint>();
        var con = new Constraint { Type = ConstraintType.ConcentricCircles };

        bool valid = true;
        valid &= solver.SetCircle(ref con.Circle1, segments[Segments[0]], constraints, points, false, true);
        valid &= solver.SetCircle(ref con.Circle2, segments[Segments[1]], constraints, points, false, true);

        if (valid)
        {
            constraints.ForEach(solver.AddConstraint);
            solver.AddConstraint(con);
        }
        return valid;
    }

    //--------------------------------------------------------------------------------------------------

    public override SketchConstraint Clone()
    {
        return new SketchConstraintConcentric(Segments[0], Segments[1]);
    }
    
    //--------------------------------------------------------------------------------------------------
    
    public static bool CanCreate(Sketch sketch, List<int> points, List<int> segments)
    {
        return points.Count == 0 
               && segments.Count >= 2
               && (SketchConstraintHelper.AllSegmentsOfType<SketchSegmentCircle>(sketch, segments)
                   || SketchConstraintHelper.AllSegmentsOfType<SketchSegmentArc>(sketch, segments))
               && !SketchConstraintHelper.AnyConstrainedSegment<SketchConstraintConcentric>(sketch, segments);
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

            if ((seg1 is SketchSegmentCircle || seg1 is SketchSegmentArc)
                && (seg2 is SketchSegmentCircle || seg2 is SketchSegmentArc))
            {
                list.Add(new SketchConstraintConcentric(segments[i], segments[i + 1]));
            }
        }
        return list;
    }
}