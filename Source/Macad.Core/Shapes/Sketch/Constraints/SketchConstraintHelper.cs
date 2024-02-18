using System.Collections.Generic;
using System.Linq;
using Macad.Common;

namespace Macad.Core.Shapes;

public static class SketchConstraintHelper
{
    public static bool AnySegmentsOfType<T>(Sketch sketch, IList<int> segments) where T: SketchSegment
    {
        return segments.Any(segIndex => sketch.Segments[segIndex] is T);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool AllSegmentsOfType<T>(Sketch sketch, IList<int> segments) where T: SketchSegment
    {
        return segments.All(segIndex => sketch.Segments[segIndex] is T);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool AnyConstrainedSegment<T>(Sketch sketch, IList<int> segments) where T: SketchConstraint
    {
        return sketch.Constraints.Any(c => c is T && c.Segments != null && segments.ContainsAny(c.Segments));
    }

    //--------------------------------------------------------------------------------------------------

    public static bool AllSegmentsHaveCommonAngleConstraint(Sketch sketch, IList<int> segments)
    {
        return sketch.Constraints.Any(c => c is SketchConstraintPerpendicular or SketchConstraintParallel or SketchConstraintAngle
                                           && segments.ContainsAll(c.Segments));
    }

    //--------------------------------------------------------------------------------------------------
    
    public static bool AnyConstrainedPoint<T>(Sketch sketch, IList<int> points) where T: SketchConstraint
    {
        return sketch.Constraints.Any(c => c is T && c.Points != null && points.ContainsAny(c.Points));
    }

    //--------------------------------------------------------------------------------------------------

    public static bool AnySegmentWithConstrainedPoint<T>(Sketch sketch, IList<int> points) where T: SketchConstraint
    {
        return sketch.Constraints.Any(c => c is T 
                                           && c.Segments != null 
                                           && c.Segments.Any(si => sketch.Segments[si].Points?.Any(pi => points.Contains(pi)) ?? false));
    }

    //--------------------------------------------------------------------------------------------------

    public static bool AnySegmentAndPointConstraint<T>(Sketch sketch, IList<int> points, IList<int> segments) where T : SketchConstraint
    {
        return sketch.Constraints.Any(c => c is T && c.Segments.ContainsAny(segments) && points.ContainsAny(c.Points));
    }
}
