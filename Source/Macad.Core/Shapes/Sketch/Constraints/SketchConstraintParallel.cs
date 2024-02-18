using System.Collections.Generic;
using System.Diagnostics;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.SketchSolve;

namespace Macad.Core.Shapes;

[SerializeType]
public class SketchConstraintParallel : SketchConstraint, ISketchConstraintCreator
{
    // Implement for serialization
    SketchConstraintParallel()
    { }

    //--------------------------------------------------------------------------------------------------

    public SketchConstraintParallel(int lineSegment1, int lineSegment2)
    {
        Segments = new[] { lineSegment1, lineSegment2 };
    }

    //--------------------------------------------------------------------------------------------------

    public override bool MakeConstraint(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, SketchConstraintSolver solver)
    {
        var lineSegment1 = segments[Segments[0]] as SketchSegmentLine;
        if (lineSegment1 == null) return false;
        var lineSegment2 = segments[Segments[1]] as SketchSegmentLine;
        if (lineSegment2 == null) return false;

        var con = new Constraint { Type = ConstraintType.Parallel };

        bool valid = !lineSegment1.IsConnected(lineSegment2);
        valid &= solver.SetLine(ref con.Line1, lineSegment1.Points[0], lineSegment1.Points[1], false, false);
        valid &= solver.SetLine(ref con.Line2, lineSegment2.Points[0], lineSegment2.Points[1], false, false);

        if (valid)
        {
            solver.AddConstraint(con);
        }
        return valid;
    }

    //--------------------------------------------------------------------------------------------------

    public override SketchConstraint Clone()
    {
        return new SketchConstraintParallel(Segments[0], Segments[1]);
    }
                                  
    //--------------------------------------------------------------------------------------------------
    
    public static bool CanCreate(Sketch sketch, List<int> points, List<int> segments)
    {
        return points.Count == 0
               && segments.Count == 2
               && SketchConstraintHelper.AllSegmentsOfType<SketchSegmentLine>(sketch, segments)
               && !SketchConstraintHelper.AllSegmentsHaveCommonAngleConstraint(sketch, segments)
               && !sketch.Segments[segments[0]].IsConnected(sketch.Segments[segments[1]]);
    }

    //--------------------------------------------------------------------------------------------------

    public static List<SketchConstraint> Create(Sketch sketch, List<int> points, List<int> segments)
    {
        var list = new List<SketchConstraint>();

        for (int i = 0; i < segments.Count - 1; i++)
        {
            var line1 = sketch.Segments[segments[i]] as SketchSegmentLine;
            Debug.Assert(line1 != null);
            var line2 = sketch.Segments[segments[i + 1]] as SketchSegmentLine;
            Debug.Assert(line2 != null);

            if (!line1.IsConnected(line2))
            {
                list.Add(new SketchConstraintParallel(segments[i], segments[i + 1]));
            }
        }
        return list;
    }
}