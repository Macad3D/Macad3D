using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.SketchSolve;

namespace Macad.Core.Shapes;

[SerializeType]
public class SketchConstraintVertical : SketchConstraint, ISketchConstraintCreator
{        
    // Implement for serialization
    SketchConstraintVertical()
    { }

    //--------------------------------------------------------------------------------------------------

    public SketchConstraintVertical(int lineSegment)
    {
        Segments = new[] { lineSegment };
    }


    //--------------------------------------------------------------------------------------------------

    public override bool MakeConstraint(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, SketchConstraintSolver solver)
    {
        var lineSegment = segments[Segments[0]] as SketchSegmentLine;
        if (lineSegment == null) return false;

        var con = new Constraint { Type = ConstraintType.Vertical };

        bool valid = solver.SetLine(ref con.Line1, lineSegment.Points[0], lineSegment.Points[1], false, false);

        if(valid)
        {
            solver.AddConstraint(con);
        }
        return valid;
    }
        
    //--------------------------------------------------------------------------------------------------

    public override SketchConstraint Clone()
    {
        return new SketchConstraintVertical(Segments[0]);
    }
    
    //--------------------------------------------------------------------------------------------------

    public static bool CanCreate(Sketch sketch, List<int> points, List<int> segments)
    {
        if (points.Count > 0
            || segments.Count == 0
            || !SketchConstraintHelper.AllSegmentsOfType<SketchSegmentLine>(sketch, segments)
            || SketchConstraintHelper.AnyConstrainedSegment<SketchConstraintFixed>(sketch, segments)
            || SketchConstraintHelper.AnyConstrainedSegment<SketchConstraintHorizontal>(sketch, segments)
            || SketchConstraintHelper.AnyConstrainedSegment<SketchConstraintVertical>(sketch, segments))
        {
            return false;
        }

        // Check for difference between Y coordinates, otherwise the points will get coincident.
        if (segments.Any(segIndex =>
            {
                var seg = sketch.Segments[segIndex];
                return sketch.Points[seg.StartPoint].Y.IsEqual(sketch.Points[seg.EndPoint].Y, 0.0001);
            }))
        {
            return false;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static List<SketchConstraint> Create(Sketch sketch, List<int> points, List<int> segments)
    {
        var list = new List<SketchConstraint>();

        foreach (var segmentIndex in segments)
        {
            var line = sketch.Segments[segmentIndex] as SketchSegmentLine;
            Debug.Assert(line != null);

            list.Add(new SketchConstraintVertical(segmentIndex));
        }
        return list;
    }

}