using System.Collections.Generic;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.SketchSolve;

namespace Macad.Core.Shapes;

[SerializeType]
public class SketchConstraintAngle : SketchConstraint, ISketchConstraintCreator
{
    [SerializeMember]
    public double Angle { get; set; }

    public override double Parameter
    {
        get { return Angle; }
        set { Angle = value; }
    }

    //--------------------------------------------------------------------------------------------------

    // Implement for serialization
    SketchConstraintAngle()
    { }

    //--------------------------------------------------------------------------------------------------

    public SketchConstraintAngle(int lineSegment1, int lineSegment2, double angle)
    {
        Segments = new[] { lineSegment1, lineSegment2 };
        Angle = angle;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool MakeConstraint(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, SketchConstraintSolver solver)
    {
        var lineSegment1 = segments[Segments[0]] as SketchSegmentLine;
        if (lineSegment1 == null) return false;
        var lineSegment2 = segments[Segments[1]] as SketchSegmentLine;
        if (lineSegment2 == null) return false;

        // Find intersetion point to sort line directions
        var lin2d1 = lineSegment1.GetLine(points);
        var lin2d2 = lineSegment2.GetLine(points);
        if (lin2d1 == null || lin2d2 == null)
            return false;
            
        var intersection = new IntAna2d_AnaIntersection(lin2d1, lin2d2);
        if (!intersection.IsDone() || intersection.IdenticalElements() || intersection.ParallelElements() || intersection.NbPoints() == 0)
            return false;

        var intPnt = intersection.Point(1).Value();
        bool reverse1 = intPnt.SquareDistance(lin2d1.Location()) > intPnt.SquareDistance(lin2d1.Location().Translated(lin2d1.Direction().ToVec()));
        bool reverse2 = intPnt.SquareDistance(lin2d2.Location()) > intPnt.SquareDistance(lin2d2.Location().Translated(lin2d2.Direction().ToVec()));

        // Create constraint
        bool valid = true;
        var con = new Constraint { Type = ConstraintType.InternalAngle };
        valid &= solver.SetLine(ref con.Line1, lineSegment1.Points[reverse1 ? 1 : 0], lineSegment1.Points[reverse1 ? 0 : 1], false, false);
        valid &= solver.SetLine(ref con.Line2, lineSegment2.Points[reverse2 ? 1 : 0], lineSegment2.Points[reverse2 ? 0 : 1], false, false);
        valid &= solver.SetParameter(out con.Parameter, Angle.ToRad(), true);

        if (valid)
        {
            solver.AddConstraint(con);
        }
        return valid;
    }
         
    //--------------------------------------------------------------------------------------------------

    public override SketchConstraint Clone()
    {
        return new SketchConstraintAngle(Segments[0], Segments[1], Parameter);
    }
                           
    //--------------------------------------------------------------------------------------------------
    
    public static bool CanCreate(Sketch sketch, List<int> points, List<int> segments)
    {
        return points.Count == 0
               && segments.Count == 2
               && SketchConstraintHelper.AllSegmentsOfType<SketchSegmentLine>(sketch, segments)
               && !SketchConstraintHelper.AllSegmentsHaveCommonAngleConstraint(sketch, segments);
    }

    //--------------------------------------------------------------------------------------------------

    public static List<SketchConstraint> Create(Sketch sketch, List<int> points, List<int> segments)
    {
        var list = new List<SketchConstraint>();

        for (int i = 0; i < segments.Count - 1; i++)
        {
            var lin2d1 = (sketch.Segments[segments[i]] as SketchSegmentLine)?.GetLine(sketch.Points);
            var lin2d2 = (sketch.Segments[segments[i + 1]] as SketchSegmentLine)?.GetLine(sketch.Points);
            if (lin2d1 == null || lin2d2 == null)
                continue;

            // Find intersetion point to sort line directions
            var intersection = new IntAna2d_AnaIntersection(lin2d1, lin2d2);
            if (!intersection.IsDone() || intersection.IdenticalElements() || intersection.ParallelElements() || intersection.NbPoints() == 0)
                continue;
            var intPnt = intersection.Point(1).Value();

            if (intPnt.SquareDistance(lin2d1.Location()) > intPnt.SquareDistance(lin2d1.Location().Translated(lin2d1.Direction().ToVec())))
                lin2d1 = lin2d1.Reversed();
            if(intPnt.SquareDistance(lin2d2.Location()) > intPnt.SquareDistance(lin2d2.Location().Translated(lin2d2.Direction().ToVec())))
                lin2d2 = lin2d2.Reversed();

            // Get angle
            var angle = lin2d1.Angle(lin2d2).ToDeg().Abs();
            if (angle > 0)
            {
                list.Add(new SketchConstraintAngle(segments[i], segments[i + 1], angle));
            }
        }
        return list;
    }
}