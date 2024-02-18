using System.Collections.Generic;
using System.Linq;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.SketchSolve;

namespace Macad.Core.Shapes;

[SerializeType]
public class SketchConstraintSmoothCorner : SketchConstraint, ISketchConstraintCreator
{
    [SerializeMember]
    public bool Symmetric { get; set; }

    //--------------------------------------------------------------------------------------------------

    // Implement for serialization
    SketchConstraintSmoothCorner()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public SketchConstraintSmoothCorner(int point, bool symmetric)
    {
        Points = new[] {point};
        Symmetric = symmetric;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool MakeConstraint(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, SketchConstraintSolver solver)
    {
        var adjacentSegments = SketchUtils.GetSegmentsUsingPoint(segments, Points[0]).ToArray();
        if (adjacentSegments.Length != 2)
            return false;

        // Prepare values
        int tan1p1 = -1, tan1p2 = -1;
        var bezier1 = segments[adjacentSegments[0]] as SketchSegmentBezier;
        if (bezier1 != null)
        {
            if (bezier1.Points[0] == Points[0])
            {
                tan1p1 = bezier1.Points[0];
                tan1p2 = bezier1.Points[1];
            }
            else
            {
                tan1p1 = bezier1.Points[bezier1.Degree];
                tan1p2 = bezier1.Points[bezier1.Degree - 1];
            }
        }

        int tan2p1=-1, tan2p2=1;
        var bezier2 = segments[adjacentSegments[1]] as SketchSegmentBezier;
        if (bezier2 != null)
        {
            if (bezier2.Points[0] == Points[0])
            {
                tan2p1 = bezier2.Points[0];
                tan2p2 = bezier2.Points[1];
            }
            else
            {
                tan2p1 = bezier2.Points[bezier2.Degree];
                tan2p2 = bezier2.Points[bezier2.Degree - 1];
            }
        }

        if (bezier1 != null && bezier2 != null)
        {
            // *** Bezier-Bezier ***
            var con = new Constraint {Type = ConstraintType.Colinear};
            if (!solver.SetLine(ref con.Line1, tan1p1, tan1p2, true, false) ||
                !solver.SetLine(ref con.Line2, tan2p1, tan2p2, true, false))
            {
                return false;
            }
            solver.AddConstraint(con);

            if (Symmetric)
            {
                con.Type = ConstraintType.EqualLength;
                solver.AddConstraint(con);
            }
            return true;
        }

        var line = segments[adjacentSegments[0]] as SketchSegmentLine ?? segments[adjacentSegments[1]] as SketchSegmentLine;
        if (line != null && (bezier1 != null || bezier2 != null))
        {
            // *** Bezier-Line ***
            var con = new Constraint {Type = ConstraintType.Colinear};
            if (!solver.SetLine(ref con.Line1, bezier1 != null ? tan1p1 : tan2p1, bezier1 != null ? tan1p2 : tan2p2, true, false) ||
                !solver.SetLine(ref con.Line2, line.StartPoint, line.EndPoint, true, true))
            {
                return false;
            }
            solver.AddConstraint(con);
            return true;
        }

        var arc = segments[adjacentSegments[0]] as SketchSegmentArc ?? segments[adjacentSegments[1]] as SketchSegmentArc;
        if (arc != null && (bezier1 != null || bezier2 != null))
        {
            // *** Bezier-Arc ***
            var constraints = new List<Constraint>();
            var con = new Constraint {Type = ConstraintType.TangentToCircle};
            if (!solver.SetLine(ref con.Line1, bezier1 != null ? tan1p1 : tan2p1, bezier1 != null ? tan1p2 : tan2p2, true, false) ||
                !solver.SetCircle(ref con.Circle1, arc, constraints, points, true, true))
            {
                return false;
            }
            constraints.ForEach(c => solver.AddConstraint(c));
            solver.AddConstraint(con);
            return true;
        }

        return false;
    }
                                              
    //--------------------------------------------------------------------------------------------------
    
    public override SketchConstraint Clone()
    {
        return new SketchConstraintSmoothCorner(Points[0], Symmetric);
    }
    
    //--------------------------------------------------------------------------------------------------

    public static bool CanCreate(Sketch sketch, List<int> points, List<int> segments)
    {
        if (points.Count == 0
            || segments.Count != 0
            || SketchConstraintHelper.AnySegmentWithConstrainedPoint<SketchConstraintFixed>(sketch, points)
            || SketchConstraintHelper.AnyConstrainedPoint<SketchConstraintSmoothCorner>(sketch, points))
        {
            return false;
        }

        foreach (var pointIndex in points)
        {
            var adjacentSegments = SketchUtils.GetSegmentsUsingPoint(sketch.Segments, pointIndex).ToArray();
            if (adjacentSegments.Count() != 2)
                continue;

            var segment1 = sketch.Segments[adjacentSegments[0]];
            var segment2 = sketch.Segments[adjacentSegments[1]];
            if (segment1 is SketchSegmentBezier)
            {
                return segment2 is SketchSegmentBezier
                       || segment2 is SketchSegmentLine
                       || segment2 is SketchSegmentArc;
            }
            if (segment2 is SketchSegmentBezier)
            {
                return segment1 is SketchSegmentBezier
                       || segment1 is SketchSegmentLine
                       || segment1 is SketchSegmentArc;
            }
        }
        return false;
    }
     
    //--------------------------------------------------------------------------------------------------

    public static List<SketchConstraint> Create(Sketch sketch, List<int> points, List<int> segments)
    {
        var list = new List<SketchConstraint>();

        if (!CanCreate(sketch, points, segments))
            return list;

        foreach (var pointIndex in points)
        {
            var adjacentSegments = SketchUtils.GetSegmentsUsingPoint(sketch.Segments, pointIndex);
            if (adjacentSegments.Count() != 2)
                continue;

            list.Add(new SketchConstraintSmoothCorner(pointIndex, true));
        }
        return list;
    }

    //--------------------------------------------------------------------------------------------------
}