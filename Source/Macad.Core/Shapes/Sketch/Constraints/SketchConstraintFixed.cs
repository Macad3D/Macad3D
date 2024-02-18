using System;
using Macad.Common.Serialization;
using Macad.Occt;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Core.Shapes;

[SerializeType]
public class SketchConstraintFixed : SketchConstraint, ISketchConstraintCreator
{
    // Implement for serialization
    SketchConstraintFixed()
    { }

    //--------------------------------------------------------------------------------------------------

    public enum TargetType
    {
        Point,
        Segment
    }

    //--------------------------------------------------------------------------------------------------

    public TargetType Target
    {
        get { return Segments != null ? TargetType.Segment : TargetType.Point; }
    }

    //--------------------------------------------------------------------------------------------------

    public SketchConstraintFixed(TargetType targetType, int index)
    {
        switch (targetType)
        {
            case TargetType.Point:
                Points = new[] { index };
                break;
            case TargetType.Segment:
                Segments = new[] { index };
                break;
            default:
                throw new ArgumentOutOfRangeException(nameof(targetType), targetType, null);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override SketchConstraint Clone()
    {
        switch (Target)
        {
            case TargetType.Point:
                return new SketchConstraintFixed(TargetType.Point, Points[0]);
            case TargetType.Segment:
                return new SketchConstraintFixed(TargetType.Point, Segments[0]);
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool MakeConstraint(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, SketchConstraintSolver solver)
    {
        switch (Target)
        {
            case TargetType.Point:
                solver.FixPoint(Points[0]);
                return true;

            case TargetType.Segment:
                foreach (var point in segments[Segments[0]].Points)
                {
                    solver.FixPoint(point);
                }
                return true;
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CanCreate(Sketch sketch, List<int> points, List<int> segments)
    {
        if (segments.Count > 0)
        {
            return !SketchConstraintHelper.AnyConstrainedSegment<SketchConstraintFixed>(sketch, segments)
                   && !SketchConstraintHelper.AnyConstrainedSegment<SketchConstraintFixed>(sketch, segments)
                   && !SketchConstraintHelper.AnyConstrainedSegment<SketchConstraintFixed>(sketch, segments);
        } 
        else if (points.Count > 0)
        {
            return !SketchConstraintHelper.AnyConstrainedPoint<SketchConstraintFixed>(sketch, points)
                   && !SketchConstraintHelper.AnyConstrainedPoint<SketchConstraintHorizontalDistance>(sketch, points)
                   && !SketchConstraintHelper.AnyConstrainedPoint<SketchConstraintVerticalDistance>(sketch, points);
        }


        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public static List<SketchConstraint> Create(Sketch sketch, List<int> points, List<int> segments)
    {
        var list = new List<SketchConstraint>();

        foreach (var pointIndex in points)
        {
            list.Add(new SketchConstraintFixed(SketchConstraintFixed.TargetType.Point, pointIndex));
        }
        foreach (var segIndex in segments)
        {
            list.Add(new SketchConstraintFixed(SketchConstraintFixed.TargetType.Segment, segIndex));
        }
        return list;
    }
}