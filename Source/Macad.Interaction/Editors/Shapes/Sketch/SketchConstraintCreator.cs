using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using Macad.Core.Shapes;

namespace Macad.Interaction.Editors.Shapes;

public static class SketchConstraintCreator
{
    public static bool CanCreate<T>(Sketch sketch, List<int> points, List<int> segments) where T : SketchConstraint
    {
        if (points == null || segments == null)
            return false;

        var type = typeof(T);

        // Requirements for point constraints
        if (points.Any())
        {
            if (segments.Count == 1)
            {
                if (type == typeof(SketchConstraintPointOnSegment)
                    || type == typeof(SketchConstraintPointOnMidpoint))
                {
                    var segment = sketch.Segments[segments[0]];
                    return (segment is SketchSegmentLine || segment is SketchSegmentCircle)
                           && !sketch.Constraints.Any(c => (c is SketchConstraintPointOnSegment || c is SketchConstraintPointOnMidpoint) && (c.Segments[0] == segments[0]) && points.Contains(c.Points[0]))
                           && !sketch.Constraints.Any(c => c is SketchConstraintFixed && c.Points != null && points.Contains(c.Points[0]))
                           && !points.Any(p => segment.Points.Contains(p));
                }
            }
            if (!segments.Any())
            {
                if (sketch.Constraints.Any(c => c is SketchConstraintFixed
                                                && c.Segments != null && c.Segments.Any(si => sketch.Segments[si].Points?.Any(pi => points.Contains(pi)) ?? false)))
                {
                    // If already fixed, skip the others
                    return false;
                }

                if (type == typeof(SketchConstraintHorizontalDistance))
                {
                    return !sketch.Constraints.Any(c => (c is SketchConstraintHorizontalDistance || c is SketchConstraintFixed) 
                                                        && c.Points != null && points.Contains(c.Points[0]));
                }
                if (type == typeof(SketchConstraintVerticalDistance))
                {
                    return !sketch.Constraints.Any(c => (c is SketchConstraintVerticalDistance || c is SketchConstraintFixed)
                                                        && c.Points != null && points.Contains(c.Points[0]));
                }
                if (type == typeof(SketchConstraintFixed))
                {
                    return !sketch.Constraints.Any(c => (c is SketchConstraintHorizontalDistance || c is SketchConstraintVerticalDistance || c is SketchConstraintFixed) 
                                                        && c.Points != null && points.Contains(c.Points[0]));
                }
                if (type == typeof(SketchConstraintSmoothCorner))
                {
                    return SketchConstraintSmoothCorner.CanCreate(sketch, points, segments);
                }
            }
        }

        // Requirements for segment constraints
        else if (segments.Any()) 
        {
            // Specific requirements for relation of exactly two segments
            if (segments.Count == 2)
            {
                bool containsAngleBasedConstraint =
                    sketch.Constraints.Any(c => (c is SketchConstraintPerpendicular || c is SketchConstraintParallel || c is SketchConstraintAngle)
                                                && segments.Contains(c.Segments[0]) && segments.Contains(c.Segments[1]));

                if (type == typeof(SketchConstraintPerpendicular))
                {
                    return segments.All(segIndex => sketch.Segments[segIndex] is SketchSegmentLine)
                           && !containsAngleBasedConstraint;
                }

                if (type == typeof(SketchConstraintParallel))
                {
                    return segments.All(segIndex => sketch.Segments[segIndex] is SketchSegmentLine)
                           && !containsAngleBasedConstraint
                           && !sketch.Segments[segments[0]].IsConnected(sketch.Segments[segments[1]]);
                }

                if (type == typeof(SketchConstraintAngle))
                {
                    return segments.All(segIndex => sketch.Segments[segIndex] is SketchSegmentLine)
                           && !containsAngleBasedConstraint;
                }

                if (type == typeof(SketchConstraintTangent))
                {
                    return segments.Any(segIndex => sketch.Segments[segIndex] is SketchSegmentLine)
                           && segments.Any(segIndex => sketch.Segments[segIndex] is SketchSegmentCircle || sketch.Segments[segIndex] is SketchSegmentArc)
                           && !containsAngleBasedConstraint;
                }
            }

            // Specific requirements for relation of minimum two segments
            if (segments.Count >= 2)
            {
                if (type == typeof(SketchConstraintConcentric))
                {
                    return segments.All(segIndex => sketch.Segments[segIndex] is SketchSegmentCircle || sketch.Segments[segIndex] is SketchSegmentArc)
                           && !sketch.Constraints.Any(c => c is SketchConstraintConcentric && segments.Contains(c.Segments[0]));
                }

                if (type == typeof(SketchConstraintEqual))
                {
                    return (segments.All(segIndex => sketch.Segments[segIndex] is SketchSegmentCircle) || segments.All(segIndex => sketch.Segments[segIndex] is SketchSegmentLine))
                           && !sketch.Constraints.Any(c => c is SketchConstraintEqual && segments.Contains(c.Segments[0]));
                }
            }

            // Specific requirements for individual segment
            if (sketch.Constraints.Any(c => c is SketchConstraintFixed && c.Segments != null && segments.Contains(c.Segments[0])))
            {
                // If already fixed, skip the others
                return false;
            }

            if (type == typeof(SketchConstraintRadius))
            {
                return segments.All(segIndex => sketch.Segments[segIndex] is SketchSegmentCircle || sketch.Segments[segIndex] is SketchSegmentArc)
                       && !sketch.Constraints.Any(c => c is SketchConstraintRadius && segments.Contains(c.Segments[0]));
            }

            if (type == typeof(SketchConstraintLength))
            {
                return segments.All(segIndex => sketch.Segments[segIndex] is SketchSegmentLine)
                       && !sketch.Constraints.Any(c => c is SketchConstraintLength && segments.Contains(c.Segments[0]));
            }

            if (type == typeof(SketchConstraintHorizontal))
            {
                return segments.All(segIndex => sketch.Segments[segIndex] is SketchSegmentLine)
                       && !sketch.Constraints.Any(c => (c is SketchConstraintHorizontal || c is SketchConstraintVertical) && segments.Contains(c.Segments[0]));
            }

            if (type == typeof(SketchConstraintVertical))
            {
                return segments.All(segIndex => sketch.Segments[segIndex] is SketchSegmentLine)
                       && !sketch.Constraints.Any(c => (c is SketchConstraintHorizontal || c is SketchConstraintVertical) && segments.Contains(c.Segments[0]));
            }

            if (type == typeof(SketchConstraintFixed))
            {
                return !sketch.Constraints.Any(c => c.Segments != null && c.Segments.Length <= 1 && segments.Contains(c.Segments[0]));
            }
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public static List<SketchConstraint> Create<T>(Sketch sketch, List<int> points, List<int> segments) where T : SketchConstraint
    {
        var createMethod = typeof(T).GetMethod("Create", BindingFlags.Static | BindingFlags.Public, null, 
                                               new[] {typeof(Sketch), typeof(List<int>), typeof(List<int>)}, null);
        if (createMethod == null || createMethod.ReturnType != typeof(List<SketchConstraint>))
        {
            throw new NotImplementedException();
        }

        return createMethod.Invoke(null, new object[] {sketch, points, segments}) as List<SketchConstraint>;
    }

    //--------------------------------------------------------------------------------------------------

}