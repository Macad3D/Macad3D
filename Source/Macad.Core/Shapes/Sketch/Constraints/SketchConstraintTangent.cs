using System.Collections.Generic;
using System.Diagnostics;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.SketchSolve;

namespace Macad.Core.Shapes;

[SerializeType]
public class SketchConstraintTangent : SketchConstraint, ISketchConstraintCreator
{
    // Implement for serialization
    SketchConstraintTangent()
    { }

    //--------------------------------------------------------------------------------------------------

    public SketchConstraintTangent(int segment, int segTangentTo)
    {
        Segments = new[] { segment, segTangentTo };
    }

    //--------------------------------------------------------------------------------------------------

    public override SketchConstraint Clone()
    {
        return new SketchConstraintTangent(Segments[0], Segments[1]);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool MakeConstraint(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, SketchConstraintSolver solver)
    {
        var constraints = new List<Constraint>();

        SketchSegmentLine lineSegment;
        SketchSegment tangentToSeg;
        if (segments[Segments[0]] is SketchSegmentLine lineSeg0)
        {
            lineSegment = lineSeg0;
            tangentToSeg = segments[Segments[1]];
        }
        else
        {
            lineSegment = segments[Segments[1]] as SketchSegmentLine;
            tangentToSeg = segments[Segments[0]];
        }
        if (lineSegment == null) return false;

        bool valid = true;
        Constraint con;

        if (tangentToSeg is SketchSegmentCircle || tangentToSeg is SketchSegmentArc)
        {
            con = new Constraint {Type = ConstraintType.TangentToCircle};
            valid &= solver.SetLine(ref con.Line1, lineSegment.Points[0], lineSegment.Points[1], false, false);
            valid &= solver.SetCircle(ref con.Circle1, tangentToSeg, constraints, points, false, false);
            constraints.Add(con);
        }
        else
        {
            return false;
        }

        if (valid)
        {
            constraints.ForEach(solver.AddConstraint);
        }

        return valid;
    }
                                
    //--------------------------------------------------------------------------------------------------
    
    public static bool CanCreate(Sketch sketch, List<int> points, List<int> segments)
    {
        return points.Count == 0
               && segments.Count == 2
               && SketchConstraintHelper.AnySegmentsOfType<SketchSegmentLine>(sketch, segments)
               && (SketchConstraintHelper.AnySegmentsOfType<SketchSegmentCircle>(sketch, segments)
                   || SketchConstraintHelper.AnySegmentsOfType<SketchSegmentArc>(sketch, segments))
               && !SketchConstraintHelper.AllSegmentsHaveCommonAngleConstraint(sketch, segments);
    }

    //--------------------------------------------------------------------------------------------------
        
    public static List<SketchConstraint> Create(Sketch sketch, List<int> points, List<int> segments)
    {
        var list = new List<SketchConstraint>();

        var seg1 = sketch.Segments[segments[0]];
        Debug.Assert(seg1 != null);
        var seg2 = sketch.Segments[segments[1]];
        Debug.Assert(seg2 != null);

        if ((seg1 is SketchSegmentLine || seg2 is SketchSegmentLine)
            && (seg1 is SketchSegmentCircle || seg2 is SketchSegmentCircle
                                            || seg1 is SketchSegmentArc || seg2 is SketchSegmentArc))
        {
            list.Add(new SketchConstraintTangent(segments[0], segments[1]));
        }

        return list;
    }
}