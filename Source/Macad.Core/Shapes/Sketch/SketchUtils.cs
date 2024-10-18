using System;
using System.Collections.Generic;
using System.Linq;
using Macad.Common;
using Macad.Core.Geom;
using Macad.Occt;

namespace Macad.Core.Shapes;

public static class SketchUtils
{
    #region Utilities

    public static bool IsUnconnectedEndpoint(Sketch sketch, int point)
    {
        bool foundOnce = false;

        // Look out for segments who reference this point
        foreach (var segmentKvp in sketch.Segments)
        {
            if(segmentKvp.Value.StartPoint != point && segmentKvp.Value.EndPoint != point)
                continue;

            if (foundOnce)
                return false;

            foundOnce = true;
        }

        return foundOnce;
    }

    //--------------------------------------------------------------------------------------------------

    public static IEnumerable<int> GetSegmentsUsingPoint(Sketch sketch, int point)
    {
        return GetSegmentsUsingPoint(sketch.Segments, point);
    }

    //--------------------------------------------------------------------------------------------------

    public static IEnumerable<int> GetSegmentsUsingPoint(Dictionary<int, SketchSegment> segments, int point)
    {
        // Look out for segments who reference this point
        foreach (var segmentKvp in segments)
        {
            foreach (var segPoint in segmentKvp.Value.Points)
            {
                if (segPoint == point)
                {
                    yield return segmentKvp.Key;
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static bool ReplaceSegmentPoint(SketchSegment segment, int oldPointIndex, int newPointIndex)
    {
        var segPoints = segment.Points;
        for (int itSegPoints = 0; itSegPoints < segPoints.Length; itSegPoints++)
        {
            if (segPoints[itSegPoints] != oldPointIndex) 
                continue;

            segPoints[itSegPoints] = newPointIndex;
            return true;
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Split Segment

    public static readonly (int, int[]) SplitSegmentFailed = (-1, null);

    //--------------------------------------------------------------------------------------------------

    public static bool CanSplitSegment(Sketch sketch, SketchSegment segment)
    {
        if (!sketch.Segments.ContainsValue(segment))
            return false;

        switch (segment)
        {
            case SketchSegmentLine:
            case SketchSegmentCircle:
            case SketchSegmentArc:
            case SketchSegmentEllipse:
            case SketchSegmentEllipticalArc:
            case SketchSegmentBezier:
                return true;
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public static (int splitPoint, int[] newSegments) SplitSegment(Sketch sketch, SketchSegment segment, double u)
    {
        if (!sketch.Segments.ContainsValue(segment))
            return SplitSegmentFailed;

        switch (segment)
        {
            case SketchSegmentLine line:
                return SplitSegment(sketch, line, u);
            case SketchSegmentCircle circle:
                return SplitSegment(sketch, circle, u);
            case SketchSegmentArc arc:
                return SplitSegment(sketch, arc, u);
            case SketchSegmentEllipse ellipse:
                return SplitSegment(sketch, ellipse, u);
            case SketchSegmentEllipticalArc ellipticalArc:
                return SplitSegment(sketch, ellipticalArc, u);
            case SketchSegmentBezier bezier:
                return SplitSegment(sketch, bezier, u);
        }

        return SplitSegmentFailed; // Segment not splittable
    }

    //--------------------------------------------------------------------------------------------------

    public static (int splitPoint, int[] newSegments) SplitSegment(Sketch sketch, SketchSegmentLine line, double u)
    {
        var curve = line.MakeCurve(sketch.Points);
        if (curve == null
            || u <= curve.FirstParameter()
            || u >= curve.LastParameter())
            return SplitSegmentFailed;

        int splitPointIndex = sketch.AddPoint(curve.Value(u));

        var newLine1 = new SketchSegmentLine(line.StartPoint, splitPointIndex);
        int seg1Index = sketch.AddSegment(newLine1);

        var newLine2 = new SketchSegmentLine(splitPointIndex, line.EndPoint);
        int seg2Index = sketch.AddSegment(newLine2);

        sketch.DeleteSegment(line);

        return (splitPointIndex, new[] {seg1Index, seg2Index});
    }

    //--------------------------------------------------------------------------------------------------

    public static (int splitPoint, int[] newSegments) SplitSegment(Sketch sketch, SketchSegmentCircle circle, double u)
    {
        u = Maths.NormalizeAngleRad(u);
        if (u == 0.0)
            return SplitSegmentFailed;

        var curve = circle.MakeCurve(sketch.Points);
        if (curve == null)
            return SplitSegmentFailed;

        int splitPointIndex = sketch.AddPoint(curve.Value(u));

        var pointOnCurve = new Geom2dAPI_ProjectPointOnCurve(sketch.Points[circle.RimPoint], curve);
        if (pointOnCurve.NbPoints() < 1)
            return SplitSegmentFailed;
        double oldRimParameter = pointOnCurve.LowerDistanceParameter();
        double rimOffset = (u - oldRimParameter) * 0.5;

        int rim1Index = sketch.AddPoint(curve.Value(oldRimParameter + rimOffset));
        var newArc1 = new SketchSegmentArc(circle.RimPoint, splitPointIndex, rim1Index);
        int seg1Index = sketch.AddSegment(newArc1);

        int rim2Index = sketch.AddPoint(curve.Value(oldRimParameter + Maths.PI + rimOffset));
        var newArc2 = new SketchSegmentArc(splitPointIndex, circle.RimPoint, rim2Index);
        int seg2Index = sketch.AddSegment(newArc2);

        sketch.DeleteSegment(circle);

        return (splitPointIndex, new[] {seg1Index, seg2Index});
    }

    //--------------------------------------------------------------------------------------------------

    public static (int splitPoint, int[] newSegments) SplitSegment(Sketch sketch, SketchSegmentArc arc, double u)
    {
        var parameters = new double[2];
        var circ = arc.GetCircle(sketch.Points, parameters);
        if (circ == null)
            return SplitSegmentFailed;

        u = Maths.NormalizeAngleRad(u);
        if (u <= parameters[0] || u >= parameters[1])
            return SplitSegmentFailed;

        int splitPointIndex = sketch.AddPoint(ElCLib.Value(u, circ));

        int rim1Index = sketch.AddPoint(ElCLib.Value((parameters[0] + u) * 0.5, circ));
        var newArc1 = new SketchSegmentArc(arc.StartPoint, splitPointIndex, rim1Index);
        int seg1Index = sketch.AddSegment(newArc1);

        int rim2Index = sketch.AddPoint(ElCLib.Value((parameters[1] + u) * 0.5, circ));
        var newArc2 = new SketchSegmentArc(splitPointIndex, arc.EndPoint, rim2Index);
        int seg2Index = sketch.AddSegment(newArc2);

        sketch.DeleteSegment(arc);

        return (splitPointIndex, new[] {seg1Index, seg2Index});
    }

    //--------------------------------------------------------------------------------------------------

    public static (int splitPoint, int[] newSegments) SplitSegment(Sketch sketch, SketchSegmentEllipse ellipse, double u)
    {
        u = Maths.NormalizeAngleRad(u);
        if (u == 0.0)
            return SplitSegmentFailed;

        var curve = ellipse.MakeCurve(sketch.Points);
        if (curve == null)
            return SplitSegmentFailed;

        int splitPointIndex = sketch.AddPoint(curve.Value(u));
        int majorAxisPointIndex = ellipse.GetMajorAxisPoint(sketch.Points);

        var newArc1 = new SketchSegmentEllipticalArc(majorAxisPointIndex, splitPointIndex, ellipse.CenterPoint);
        int seg1Index = sketch.AddSegment(newArc1);

        var newArc2 = new SketchSegmentEllipticalArc(splitPointIndex, majorAxisPointIndex, ellipse.CenterPoint);
        int seg2Index = sketch.AddSegment(newArc2);

        sketch.DeleteSegment(ellipse);

        return (splitPointIndex, new[] {seg1Index, seg2Index});
    }

    //--------------------------------------------------------------------------------------------------

    public static (int splitPoint, int[] newSegments) SplitSegment(Sketch sketch, SketchSegmentEllipticalArc ellipticalArc, double u)
    {
        var parameters = new double[2];
        var ellipse = ellipticalArc.GetEllipse(sketch.Points, parameters);
        if (ellipse == null)
            return SplitSegmentFailed;

        if (parameters[1] < parameters[0])
            parameters[1] += Maths.DoublePI;

        u = Maths.NormalizeAngleRad(u);
        if (u <= parameters[0] || u >= parameters[1])
            return SplitSegmentFailed;

        bool startIsMajor = ellipticalArc.StartPoint == ellipticalArc.GetMajorAxisPoint(sketch.Points);
        int splitPointIndex = sketch.AddPoint(ElCLib.Value(u, ellipse));
        var newSegments = new List<int>();

        var newArc = startIsMajor ? new SketchSegmentEllipticalArc(ellipticalArc.StartPoint, splitPointIndex, ellipticalArc.CenterPoint)
                         : new SketchSegmentEllipticalArc(splitPointIndex, ellipticalArc.EndPoint, ellipticalArc.CenterPoint);
        newSegments.Add(sketch.AddSegment(newArc));

        var bezierParts = startIsMajor ? Geom2dUtils.EllipticalArcToBezier(ellipse, u, parameters[1], Maths.HalfPI)
                              : Geom2dUtils.EllipticalArcToBezier(ellipse, parameters[0], u, Maths.HalfPI);

        int p1 = startIsMajor ? splitPointIndex : ellipticalArc.StartPoint;
        for (var index = 0; index < bezierParts.Length; index++)
        {
            var bezierPoints = bezierParts[index];
            int c1 = sketch.AddPoint(bezierPoints.c1);
            int c2 = sketch.AddPoint(bezierPoints.c2);
            int p2 = index == bezierParts.Length - 1
                         ? startIsMajor ? ellipticalArc.EndPoint : splitPointIndex
                         : sketch.AddPoint(bezierPoints.p2);
            var newBezier = new SketchSegmentBezier(p1, c1, c2, p2);
            newSegments.Add(sketch.AddSegment(newBezier));
            p1 = p2;
        }

        sketch.DeleteSegment(ellipticalArc);

        return (splitPointIndex, newSegments.ToArray());
    }

    //--------------------------------------------------------------------------------------------------

    public static (int splitPoint, int[] newSegments) SplitSegment(Sketch sketch, SketchSegmentBezier bezier, double u)
    {
        // https://math.stackexchange.com/questions/877725/retrieve-the-initial-cubic-b%C3%A9zier-curve-subdivided-in-two-b%C3%A9zier-curves

        if (u <= 0.0 || u >= 1.0)
            return SplitSegmentFailed;

        var curve = bezier.MakeCurve(sketch.Points);
        if (curve == null)
            return SplitSegmentFailed;

        Pnt2d splitPoint = curve.Value(u);
        var splitPointIndex = sketch.AddPoint(splitPoint);

        var p1 = sketch.Points[bezier.StartPoint];
        var p2 = sketch.Points[bezier.EndPoint];

        SketchSegmentBezier newBezier1;
        SketchSegmentBezier newBezier2;

        if (bezier.Degree == 2)
        {
            var cp1 = sketch.Points[bezier.Points[1]];

            var cp11 = p1.Translated(new Vec2d(p1, cp1) * u);
            newBezier1 = new SketchSegmentBezier(bezier.StartPoint, sketch.AddPoint(cp11), splitPointIndex);

            var cp21 = p2.Translated(new Vec2d(p2, cp1) * (1.0 - u));
            newBezier2 = new SketchSegmentBezier(splitPointIndex, sketch.AddPoint(cp21), bezier.EndPoint);
        } 
        else if (bezier.Degree == 3)
        {
            var cp1 = sketch.Points[bezier.Points[1]];
            var cp2 = sketch.Points[bezier.Points[2]];
            var splitCp = cp1 + new Vec2d(cp1, cp2) * u;

            var cp11 = p1.Translated(new Vec2d(p1, cp1) * u);
            var cp12 = cp11.Translated(new Vec2d(cp11, splitCp) * u);
            newBezier1 = new SketchSegmentBezier(bezier.StartPoint, sketch.AddPoint(cp11), sketch.AddPoint(cp12), splitPointIndex);

            var cp22 = p2.Translated(new Vec2d(p2, cp2) * (1.0 - u));
            var cp21 = cp22.Translated(new Vec2d(cp22, splitCp) * (1.0 -u));
            newBezier2 = new SketchSegmentBezier(splitPointIndex, sketch.AddPoint(cp21), sketch.AddPoint(cp22), bezier.EndPoint);
        }
        else
        {
            return SplitSegmentFailed;
        }

        int seg1Index = sketch.AddSegment(newBezier1);
        int seg2Index = sketch.AddSegment(newBezier2);

        sketch.DeleteSegment(bezier);

        return (splitPointIndex, new[] {seg1Index, seg2Index});
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Split Point

    public const int[] SplitPointFailed = null;

    //--------------------------------------------------------------------------------------------------

    public static bool CanSplitPoint(Sketch sketch, int point)
    {
        return GetSegmentsUsingPoint(sketch, point).Count() > 1;
    }

    //--------------------------------------------------------------------------------------------------

    public static int[] SplitPoint(Sketch sketch, int point)
    {
        var segmentIds = GetSegmentsUsingPoint(sketch, point).ToArray();
        if (segmentIds.Length <= 1)
            return SplitPointFailed;

        sketch.SaveUndo(Sketch.ElementType.Segment);

        int[] newPoints = new int[segmentIds.Length - 1];
        for (int itNewPoints = 0; itNewPoints < newPoints.Length; itNewPoints++)
        {
            newPoints[itNewPoints] = sketch.AddPoint(sketch.Points[point]);

            // Replace segment point
            ReplaceSegmentPoint(sketch.Segments[segmentIds[itNewPoints]], point, newPoints[itNewPoints]);
        }

        sketch.OnElementsChanged(Sketch.ElementType.Point | Sketch.ElementType.Segment);

        return newPoints;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Delete Point
   
    public static IEnumerable<SketchSegment> DeletePointsTrySubstituteSegments(Sketch sketch, IEnumerable<int> points)
    {
        SketchSegment __CreateSubstituteLineLine(int point, SketchSegmentLine line1, SketchSegmentLine line2)
        {
            // Line-Line --> Line
            var p1 = line1.StartPoint == point ? line1.EndPoint : line1.StartPoint;
            var p2 = line2.StartPoint == point ? line2.EndPoint : line2.StartPoint;
            return new SketchSegmentLine(p1, p2);
        }

        //--------------------------------------------------------------------------------------------------

        SketchSegment __CreateSubstituteArcArc(int point, SketchSegmentArc arc1, SketchSegmentArc arc2)
        {
            // Arc-Arc --> Arc, if center is equal
            var circ1 = arc1.GetCircle(sketch.Points);
            var circ2 = arc2.GetCircle(sketch.Points);

            if (circ1 == null
                || circ2 == null
                || !circ1.Location().IsEqual(circ2.Location(), 0.001)
                || !circ1.Radius().IsEqual(circ2.Radius(), 0.001))
            {
                return null;
            }

            int p1 = arc1.StartPoint == point ? arc1.EndPoint : arc1.StartPoint;
            int p2 = arc2.StartPoint == point ? arc2.EndPoint : arc2.StartPoint;
            var param1 = ElCLib.Parameter(circ1, sketch.Points[p1]);
            var param2 = ElCLib.Parameter(circ1, sketch.Points[p2]);
            var newParamRim = param1 + (param2 - param1) / 2.0;
            if (param1 > param2)
                newParamRim += Maths.PI;
            int rim = sketch.AddPoint(ElCLib.Value(newParamRim, circ1));

            return new SketchSegmentArc(p1, p2, rim);
        }

        //--------------------------------------------------------------------------------------------------

        SketchSegment __CreateSubstituteGeneric(int point, SketchSegment seg1, SketchSegment seg2)
        {
            // Any-Any --> Bezier3 approximation, if not perodic
            var curve1 = (seg1.CachedCurve ?? seg1.MakeCurve(sketch.Points)) as Geom2d_BoundedCurve;
            var curve2 = (seg2.CachedCurve ?? seg2.MakeCurve(sketch.Points)) as Geom2d_BoundedCurve;
            if (curve1 == null || curve2 == null)
                return null;

            var concatCurves = new Geom2dConvert_CompCurveToBSplineCurve(curve1, Convert_ParameterisationType.TgtThetaOver2);
            if (!concatCurves.Add(curve2, 0.001))
                return null;

            var approx = new Geom2dConvert_ApproxCurve(concatCurves.BSplineCurve(), 0.001, GeomAbs_Shape.C1, 1, 3);
            if (!approx.HasResult())
                return null;
            var bspline = approx.Curve();

            var converter = new Geom2dConvert_BSplineCurveToBezierCurve(bspline, bspline.FirstParameter(), bspline.LastParameter(), 0.001);
            if (converter.NbArcs() != 1)
                return null;

            var curve = converter.Arc(1);
            if (curve.NbPoles() < 3 || curve.NbPoles() > 4)
                return null;

            var p1 = curve.StartPoint().IsEqual(curve1.StartPoint(), 0.01) ? seg1.StartPoint : seg1.EndPoint;
            var p2 = curve.EndPoint().IsEqual(curve2.StartPoint(), 0.01) ? seg2.StartPoint : seg2.EndPoint;
            var cp1 = sketch.AddPoint(curve.Pole(2));

            if (curve.NbPoles() == 3)
            {
                return new SketchSegmentBezier(p1, cp1, p2);
            }
            else
            {
                var cp2 = sketch.AddPoint(curve.Pole(3));
                return new SketchSegmentBezier(p1, cp1, cp2, p2);
            }
        }

        //--------------------------------------------------------------------------------------------------

        List<SketchSegment> _segmentsToAdd = [];

        foreach (var point in points)
        {
            SketchSegment substituteSegment = null;
            var segmentIds = GetSegmentsUsingPoint(sketch, point).ToArray();

            // Try to substitute
            if (segmentIds.Length == 2)
            {
                var seg1 = sketch.Segments[segmentIds[0]];
                var seg2 = sketch.Segments[segmentIds[1]];

                if (seg1 is SketchSegmentLine line1 &&
                    seg2 is SketchSegmentLine line2)
                {
                    substituteSegment = __CreateSubstituteLineLine(point, line1, line2);
                }
                else if (seg1 is SketchSegmentArc arc1 &&
                         seg2 is SketchSegmentArc arc2)
                {
                    substituteSegment = __CreateSubstituteArcArc(point, arc1, arc2);
                }

                // Finally try the generic way
                substituteSegment ??= __CreateSubstituteGeneric(point, seg1, seg2);
            }

            if (substituteSegment != null)
            {
                _segmentsToAdd.Add(substituteSegment);
            }
        }

        // Finally, delete the point
        if (_segmentsToAdd.Count > 0)
        {
            sketch.AddElements(null, null, _segmentsToAdd.ToIndexedDictionary(), null);
        }
        sketch.DeleteElements(points, null, null);

        return _segmentsToAdd;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Convert Segment

    public const int ConvertSegmentFailed = -1;

    //--------------------------------------------------------------------------------------------------

    public static bool CanConvertSegment(Sketch sketch, SketchSegment segment, Type targetType)
    {
        if (!sketch.Segments.ContainsValue(segment))
            return false;

        if(targetType == typeof(SketchSegmentBezier))
        {
            if (segment is SketchSegmentBezier bezier)
            {
                return bezier.Degree == 2;
            }
            return !segment.IsPeriodic;
        }

        if (targetType == segment.GetType())
            return false;

        if (targetType == typeof(SketchSegmentLine))
        {
            return !segment.IsPeriodic;
        }
        if (targetType == typeof(SketchSegmentArc))
        {
            return segment is SketchSegmentEllipticalArc 
                   || segment is SketchSegmentBezier;
        }
        if (targetType == typeof(SketchSegmentEllipticalArc))
        {
            return segment is SketchSegmentArc;
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public static int ConvertSegment(Sketch sketch, SketchSegment segment, Type targetType)
    {
        if (!CanConvertSegment(sketch, segment, targetType))
            return ConvertSegmentFailed;

        if(targetType == typeof(SketchSegmentLine))
        {
            return ConvertSegmentToLine(sketch, segment);
        }
        if (targetType == typeof(SketchSegmentBezier))
        {
            return ConvertSegmentToBezier(sketch, segment);
        }
        if (targetType == typeof(SketchSegmentArc))
        {
            return ConvertSegmentToArc(sketch, segment);
        }
        if (targetType == typeof(SketchSegmentEllipticalArc))
        {
            return ConvertSegmentToEllipticalArc(sketch, segment);
        }

        return ConvertSegmentFailed;
    }

    //--------------------------------------------------------------------------------------------------

    public static int ConvertSegmentToLine(Sketch sketch, SketchSegment segment)
    {
        int startPoint = segment.StartPoint;
        int endPoint = segment.EndPoint;
        if (segment.IsPeriodic)
            return -1;

        var newSegment = new SketchSegmentLine(startPoint, endPoint);
        int newSegIndex = sketch.AddSegment(newSegment);
        sketch.DeleteSegment(segment);
        return newSegIndex;
    }

    //--------------------------------------------------------------------------------------------------

    static int ConvertSegmentToBezier(Sketch sketch, SketchSegment segment)
    {
        SketchSegmentBezier newSegment = default;

        int startPoint = segment.StartPoint;
        int endPoint = segment.EndPoint;
        if (segment.IsPeriodic)
            return -1;

        if(segment is SketchSegmentLine)
        {
            var vec = new Vec2d(sketch.Points[startPoint], sketch.Points[endPoint]).Divided(3.0);
            var cp1 = sketch.AddPoint(sketch.Points[startPoint].Translated(vec));
            var cp2 = sketch.AddPoint(sketch.Points[endPoint].Translated(vec.Reversed()));
            newSegment = new SketchSegmentBezier(startPoint, cp1, cp2, endPoint);
        }
        else if (segment is SketchSegmentBezier bezier)
        {
            if (bezier.Degree == 2)
            {
                var cp2 = sketch.AddPoint(sketch.Points[segment.Points[1]]);
                newSegment = new SketchSegmentBezier(startPoint, segment.Points[1], cp2, endPoint);
            }
        }
        else
        {
            // Generic way
            var origCurve = (segment.CachedCurve ?? segment.MakeCurve(sketch.Points));
            if (origCurve == null)
                return -1;

            var approx = new Geom2dConvert_ApproxCurve(origCurve, 0.001, GeomAbs_Shape.C1, 1, 3);
            if (!approx.HasResult())
                return -1;
            var bspline = approx.Curve();

            var converter = new Geom2dConvert_BSplineCurveToBezierCurve(bspline, bspline.FirstParameter(), bspline.LastParameter(), 0.001);
            if (converter.NbArcs() != 1)
                return -1;

            var curve = converter.Arc(1);
            if (curve.NbPoles() < 3 || curve.NbPoles() > 4)
                return -1;

            var cp1 = sketch.AddPoint(curve.Pole(2));

            if (curve.NbPoles() == 3)
            {
                newSegment = new SketchSegmentBezier(startPoint, cp1, endPoint);
            }
            else
            {
                var cp2 = sketch.AddPoint(curve.Pole(3));
                newSegment = new SketchSegmentBezier(startPoint, cp1, cp2, endPoint);
            }
        }
                
        if (newSegment != default)
        {
            int newSegIndex = sketch.AddSegment(newSegment);
            sketch.DeleteSegment(segment);
            return newSegIndex;
        }

        return -1;
    }

    //--------------------------------------------------------------------------------------------------

    static int ConvertSegmentToArc(Sketch sketch, SketchSegment segment)
    {
        if (!(segment is SketchSegmentEllipticalArc
              || segment is SketchSegmentBezier))
            return -1;

        var curve = segment.CachedCurve ?? segment.MakeCurve(sketch.Points);
        var pmid = curve.FirstParameter().Lerp(curve.LastParameter(), 0.5);
        var rimIndex = sketch.AddPoint(curve.Value(pmid));

        var newSegment = new SketchSegmentArc(segment.StartPoint, segment.EndPoint, rimIndex);
        int newSegIndex = sketch.AddSegment(newSegment);
        sketch.DeleteSegment(segment);
        return newSegIndex;
    }

    //--------------------------------------------------------------------------------------------------

    static int ConvertSegmentToEllipticalArc(Sketch sketch, SketchSegment segment)
    {
        var arcSegment = segment as SketchSegmentArc;
        if (arcSegment == null)
            return -1;

        int startPoint = segment.StartPoint;
        int endPoint = segment.EndPoint;
        int centerPoint = sketch.AddPoint(arcSegment.Center(sketch.Points));

        var newSegment = new SketchSegmentEllipticalArc(startPoint, endPoint, centerPoint);
        int newSegIndex = sketch.AddSegment(newSegment);
        sketch.DeleteSegment(segment);
        return newSegIndex;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Welding

    public static bool WeldPoints(Sketch sketch, IEnumerable<int> pointIndices)
    {
        XY targetXY = default;
        int count = 0;
        var pointIndicesList = pointIndices.Distinct().ToList();
        foreach (var pointIndex in pointIndicesList)
        {
            targetXY.Add(sketch.Points[pointIndex].ToXY());
            count++;
        }
        if (count < 2)
            return false;

        Pnt2d targetPoint = targetXY.Divided(count).ToPnt();
        int targetIndex = sketch.AddPoint(targetPoint);
        foreach (var pointIndex in pointIndicesList)
        {
            if (!sketch.Points.ContainsKey(pointIndex))
            {
                // Point deleted in prior operation, just skip
                continue; 
            }
            if (!sketch.Points.ContainsKey(targetIndex))
            {
                // Target point deleted by segment deletion, rebuild
                targetIndex = sketch.AddPoint(targetPoint);
            }
            sketch.MergePoints(pointIndex, targetIndex);
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool WeldPointsWithSegments(Sketch sketch, IEnumerable<SketchSegment> segments, IEnumerable<int> pointIndices)
    {
        bool result = false;
        var segmentList = segments.ToList();

        foreach (var pointIndex in pointIndices.Distinct())
        {
            var point = sketch.Points[pointIndex];

            foreach (var segment in segmentList)
            {
                if (segment.Points.Contains(pointIndex))
                    continue;

                var curve = segment.MakeCurve(sketch.Points);
                Geom2dAPI_ProjectPointOnCurve projector = new(point, curve);
                if(projector.NbPoints() == 0 || projector.LowerDistance() > 0.01)
                    continue;

                double u = projector.LowerDistanceParameter();
                if(u <= curve.FirstParameter() || u >= curve.LastParameter())
                    continue;

                var splitResult = SplitSegment(sketch, segment, u);
                if(splitResult == SplitSegmentFailed)
                    continue;

                sketch.MergePoints(pointIndex, splitResult.splitPoint);
                segmentList.Remove(segment);
                segmentList.AddRange(splitResult.newSegments.Select(segIdx => sketch.Segments[segIdx]));
                result = true;

                break; // Don't try with other segments if we already found a candidate
            }
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool WeldSegments(Sketch sketch, IEnumerable<SketchSegment> segments)
    {
        // Currently only two segments are processed - otherwise we had to check every segment to every other
        var segment1 = segments.ElementAtOrDefault(0);
        var segment2 = segments.ElementAtOrDefault(1);
        if (segment1 == null || segment2 == null)
            return false;

        var curve1 = segment1.MakeCurve(sketch.Points);
        var curve2 = segment2.MakeCurve(sketch.Points);
        if (curve1 == null || curve2 == null)
            return false;

        // Process tangent mode (point lies on other segment)
        if (_TryWeldTangentSegments(sketch, segment1, curve1, segment2)
            || _TryWeldTangentSegments(sketch, segment2, curve2, segment1))
        {
            return true;
        }

        // Process intersection mode
        Geom2dAPI_InterCurveCurve interCC = new(curve1, curve2);
        if (interCC.NbPoints() == 0)
        {
            return false;
        }

        bool result = false;
        Dictionary<SketchSegment, Geom2d_Curve> segs1 = new() { { segment1, curve1 } };
        Dictionary<SketchSegment, Geom2d_Curve> segs2 = new() { { segment2, curve2 } };
        for (int i = 0; i < interCC.NbPoints(); i++)
        {
            Pnt2d point = interCC.Point(i + 1);
            var splitPoint1 = _SplitSegmentAtPoint(sketch, segs1, point);
            var splitPoint2 = _SplitSegmentAtPoint(sketch, segs2, point);
            if(splitPoint1 == -1 || splitPoint2 == -1)
                continue;

            sketch.MergePoints(splitPoint2, splitPoint1);
            result = true;
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    static bool _TryWeldTangentSegments(Sketch sketch, SketchSegment segment, Geom2d_Curve curve, SketchSegment toolSeg)
    {
        if (toolSeg.IsPeriodic)
            return false;

        // Try to find if a point lies on a segment
        bool foundUs = _FindParameter(curve, sketch.Points[toolSeg.StartPoint], out var us);
        bool foundUe = _FindParameter(curve, sketch.Points[toolSeg.EndPoint], out var ue);
        if (foundUs && foundUe)
        {
            if(WeldPointsWithSegments(sketch, new[] { segment }, new[] { toolSeg.StartPoint, toolSeg.EndPoint }))
            {
                sketch.DeleteSegment(toolSeg);
                return true;
            }
        }
        else if(foundUs)
        {
            return WeldPointsWithSegments(sketch, new[] { segment }, new[] { toolSeg.StartPoint });
        }
        else if(foundUe)
        {
            return WeldPointsWithSegments(sketch, new[] { segment }, new[] { toolSeg.EndPoint });
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    static int _SplitSegmentAtPoint(Sketch sketch, Dictionary<SketchSegment, Geom2d_Curve> segInfos, Pnt2d point)
    {
        foreach (var segInfo in segInfos)
        {
            var segment = segInfo.Key;
            var curve = segInfo.Value;

            if (!_FindParameter(curve, point, out double u))
                continue;

            var splitResult = SplitSegment(sketch, segment, u);
            if(splitResult == SplitSegmentFailed)
                continue;

            segInfos.Remove(segment);
            foreach (var newSegIndex in splitResult.newSegments)
            {
                var newSegment = sketch.Segments[newSegIndex];
                segInfos.Add(newSegment, newSegment.MakeCurve(sketch.Points));
            }

            return splitResult.splitPoint;
        }

        return -1;
    }

    //--------------------------------------------------------------------------------------------------

    static bool _FindParameter(Geom2d_Curve curve, Pnt2d point, out double u)
    {
        u = 0.0;

        Geom2dAPI_ProjectPointOnCurve projector = new(point, curve);
        if (projector.NbPoints() == 0 || projector.LowerDistance() > 0.01)
            return false;

        u = projector.LowerDistanceParameter();
        if (u <= curve.FirstParameter() || u >= curve.LastParameter())
            return false;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}