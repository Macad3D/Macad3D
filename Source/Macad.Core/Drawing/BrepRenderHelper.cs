using System;
using System.Collections.Generic;
using Macad.Common;
using Macad.Core.Geom;
using Macad.Occt;

namespace Macad.Core.Drawing;

public static class BrepRenderHelper
{
    public static bool RenderShape(IDrawingRenderer renderer, TopoDS_Shape brepShape)
    {
        if (renderer.RenderBrepShape(brepShape))
            return true;

        return RenderFaces(renderer, brepShape);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool RenderFaces(IDrawingRenderer renderer, TopoDS_Shape brepShape)
    {
        var res = true;

        renderer.BeginPath();

        var faces = brepShape.Faces();
        if (faces.Count == 0)
        {
            // Drawings may only contain lines, not faces
            var wires = brepShape.Wires();
            if (wires.Count > 0)
            {
                foreach (var wire in wires)
                {
                    res &= RenderEdges(renderer, wire.Edges(), null);
                }
            }
            else
            {
                // no wires, just render loose edges
                res &= RenderEdges(renderer, brepShape.Edges(), null);
            }
        }
        else
        {
            foreach (var face in faces)
            {
                var outerWire = BRepTools.OuterWire(face);
                if (outerWire == null)
                    continue;

                res &= RenderEdges(renderer, outerWire.Edges(), face);

                var wires = face.Wires();
                foreach (var wire in wires)
                {
                    if (wire.IsEqual(outerWire))
                        continue;
                    res &= RenderEdges(renderer, wire.Edges(), face);
                }

            }
        }

        renderer.EndPath();

        return res;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool RenderEdges(IDrawingRenderer renderer, List<TopoDS_Edge> edges, TopoDS_Face face)
    {
        var res = true;

        // Find plane
        Geom_Plane geomPlane;
        if (face?.Surface() is Geom_Plane facePlane)
        {
            geomPlane = new Geom_Plane(Pln.XOY);
        }
        else
        {
            if (!Topo2dUtils.GetPlaneOfEdges(edges, out var edgesPlane))
            {
                return false;
            }
            geomPlane = edgesPlane;
        }

        // Order edges
        var order = new ShapeAnalysis_WireOrder(true, 0.0001);
        foreach (var edge in edges)
        {
            var first = BRep_Tool.Pnt(TopExp.FirstVertex(edge));
            var last = BRep_Tool.Pnt(TopExp.LastVertex(edge));
            if (edge.Orientation() == TopAbs_Orientation.FORWARD)
                order.Add(first.Coord, last.Coord);
            else
                order.Add(last.Coord, first.Coord);
        }
        order.Perform(true);

        if (order.IsDone())
        {
            order.SetChains(0.0001);
            for (int chain = 1; chain <= order.NbChains(); chain++)
            {
                int startIndex = 0, endIndex = 0;
                order.Chain(chain, ref startIndex, ref endIndex);
                if(startIndex > endIndex)
                    continue;

                // Process ordered edges
                renderer.BeginPathSegment();
                for (int index = startIndex; index <= endIndex; index++)
                {
                    int orderIndex = order.Ordered(index);
                    int originalIndex = Math.Abs(orderIndex) - 1; // order index is 1-based
                    res &= RenderEdge(renderer, edges[originalIndex], orderIndex < 0, geomPlane);
                }
                renderer.EndPathSegment();
            }
        }
        else
        {
            // Cannot sort, just pump out all edges
            foreach (var edge in edges)
                res &= RenderEdge(renderer, edge, false, geomPlane);
        }

        return res;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool RenderEdge(IDrawingRenderer renderer, TopoDS_Edge edge, bool reverse, Geom_Plane plane)
    {
        double first = 0, last = 0;
        bool store = false;
        var curve = BRep_Tool.CurveOnSurface(edge, plane, new TopLoc_Location(), ref first, ref last, ref store);
        if (curve == null)
            return false;

        reverse ^= edge.Orientation() == TopAbs_Orientation.REVERSED;
        return RenderCurve(renderer, curve, first, last, reverse);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool RenderCurve(IDrawingRenderer renderer, Geom2d_Curve curve2d, double first, double last, bool reverse)
    {
        switch (curve2d)
        {
            case Geom2d_Line line:
                return RenderLine(renderer, line, first, last, reverse);

            case Geom2d_Ellipse ellipse:
                return RenderEllipse(renderer, ellipse, first, last, reverse);

            case Geom2d_Circle circle:
                return RenderCircle(renderer, circle, first, last, reverse);

            case Geom2d_BSplineCurve bspline:
                return RenderBSplineCurve(renderer, bspline, first, last, reverse);

            case Geom2d_BezierCurve bezier:
                return RenderBezierCurve(renderer, bezier, first, last, reverse);

            case Geom2d_TrimmedCurve trimmed:
                return RenderCurve(renderer, trimmed.BasisCurve(), Math.Max(first, trimmed.FirstParameter()), Math.Min(last, trimmed.LastParameter()), reverse);

            default:
                // Try to create B-Spline curve
                var bsplineCurve = ShapeConstruct.ConvertCurveToBSpline(curve2d, first, last, 0.001 /*Precision.Confusion()*10*/, curve2d.Continuity(), 10000, 3);
                if (bsplineCurve != null)
                {
                    return RenderBSplineCurve(renderer, bsplineCurve, first, last, reverse);
                }
                Messages.Warning("BrepRenderHelper: Unsupported curve class.");
                return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static bool RenderLine(IDrawingRenderer renderer, Geom2d_Line line, double first, double last, bool reverse)
    {
        var start = line.Value(reverse ? last : first);
        var end = line.Value(reverse ? first : last);
        renderer.Line(start, end);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool RenderCircle(IDrawingRenderer renderer, Geom2d_Circle circle, double first, double last, bool reverse)
    {
        bool fullCircle = first.Distance(last).IsEqual(Maths.DoublePI, 0.00001);
        bool renderAsCurve = fullCircle ? renderer.Capabilities.CircleAsCurve : renderer.Capabilities.CircularArcAsCurve;

        if (renderAsCurve)
        {
            var bsplineCurve = ShapeConstruct.ConvertCurveToBSpline(circle, first, last, 0.001, GeomAbs_Shape.C2, 100, 3);
            if (bsplineCurve != null)
            {
                return RenderBSplineCurve(renderer, bsplineCurve, first, last, reverse);
            }
            return false;
        }

        var center = circle.Location();
        var radius = circle.Radius();
        double rotation = circle.XAxis().Direction.Angle(Dir2d.DX);

        if (circle.Position().Sense() > 0)
        {
            first = Maths.DoublePI - first;
            last = Maths.DoublePI - last;
        }

        if (reverse)
        {
            first.Swap(ref last);
        }

        renderer.Circle(center, radius, first - rotation, last - rotation);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool RenderEllipse(IDrawingRenderer renderer, Geom2d_Ellipse ellipse, double first, double last, bool reverse)
    {
        bool fullEllipse = first.Distance(last).IsEqual(Maths.DoublePI, 0.00001);
        bool renderAsCurve = fullEllipse ? renderer.Capabilities.EllipseAsCurve : renderer.Capabilities.EllipticalArcAsCurve;

        if (renderAsCurve)
        {
            var bsplineCurve = ShapeConstruct.ConvertCurveToBSpline(ellipse, first, last, 0.001, GeomAbs_Shape.C1, 100, 3);
            if (bsplineCurve != null)
            {
                return RenderBSplineCurve(renderer, bsplineCurve, first, last, reverse);
            }
            return false;
        }

        var center = ellipse.Location();
        var majorRadius = ellipse.MajorRadius();
        var minorRadius = ellipse.MinorRadius();
        double rotation = Dir2d.DX.Angle(ellipse.XAxis().Direction);

        if (ellipse.Position().Sense() > 0)
        {
            first = Maths.DoublePI - first;
            last = Maths.DoublePI - last;
        }
            
        if (reverse)
        {
            first.Swap(ref last);
        }

        renderer.Ellipse(center, majorRadius, minorRadius, rotation, first, last);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool RenderBSplineCurve(IDrawingRenderer renderer, Geom2d_BSplineCurve bspline, double first, double last, bool reverse)
    {
        if (renderer.Capabilities.BSplineCurveMaxDegree > 0)
        {
            bspline = Geom2dConvert.SplitBSplineCurve(bspline, first, last, 0.00001);

            if (bspline.Degree() > renderer.Capabilities.BSplineCurveMaxDegree)
            {
                // Try to reduce the order of the curve
                var continuity = bspline.Continuity();
                if (continuity != GeomAbs_Shape.C0)
                    continuity = GeomAbs_Shape.C1;

                var converter = new Geom2dConvert_ApproxCurve(bspline, 0.0001, continuity, 100, 3);
                if (!(converter.IsDone() && converter.HasResult()))
                {
                    Messages.Warning("BrepRenderHelper: BSpline curve has an undecreasable degree of " + bspline.Degree() + ".");
                    return false;
                }

                bspline = converter.Curve();
            }

            var knotSource = bspline.KnotSequence();
            var knots = new double[knotSource.Length()];
            int sourceStart = knotSource.Lower();
            for (int i = 0; i < knots.Length; i++)
            {
                knots[i] = knotSource.Value(sourceStart + i);
            }

            var points = new Pnt2d[bspline.NbPoles()];
            var weights = new double[points.Length];
            for (int i = 0; i < bspline.NbPoles(); i++)
            {
                points[i] = bspline.Pole(i + 1);
                weights[i] = bspline.Weight(i + 1);
            }

            renderer.BSplineCurve(bspline.Degree(), knots, points, weights, bspline.IsRational());
            return true;
        }
        else // Cannot render BSpline, Try bezier
        {
            if (last - first < 0.001)
            {
                // too small, just skip
                return true;
            }
            var converter = new Geom2dConvert_BSplineCurveToBezierCurve(bspline, first, last, 0.001 /*Precision.PConfusion() * 10*/);
            bool result = true;

            if (reverse)
            {
                for (int i = converter.NbArcs(); i >= 1; i -= 1)
                {
                    var arc = converter.Arc(i);
                    result &= RenderBezierCurve(renderer, arc, arc.FirstParameter(), arc.LastParameter(), true);
                }
            }
            else
            {
                for (int i = 1; i <= converter.NbArcs(); i += 1)
                {
                    var arc = converter.Arc(i);
                    result &= RenderBezierCurve(renderer, arc, arc.FirstParameter(), arc.LastParameter(), false);
                }
            }

            return result;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static bool RenderBezierCurve(IDrawingRenderer renderer, Geom2d_BezierCurve bezier, double first, double last, bool reverse)
    {
        if (renderer.Capabilities.BezierCurveMaxDegree > 0)
        {
            var maxDegree = Math.Min(3, renderer.Capabilities.BezierCurveMaxDegree);
            if (bezier.Degree() > maxDegree)
            {
                // Try to reduce the order of the curve
                var continuity = bezier.Continuity();
                if (continuity != GeomAbs_Shape.C0)
                    continuity = GeomAbs_Shape.C1;

                var converter = new Geom2dConvert_ApproxCurve(bezier, 0.0001, continuity, 1000, maxDegree);
                if (!(converter.IsDone() && converter.HasResult()))
                {
                    Messages.Warning("BrepRenderHelper: Bezier curve has an undecreasable order of " + bezier.Degree() + ".");
                    return false;
                }

                return RenderBSplineCurve(renderer, converter.Curve(), first, last, reverse);
            }

            bezier.Segment(first, last);
            Pnt2d c1, c2;
            var start = reverse ? bezier.EndPoint() : bezier.StartPoint();
            var end = reverse ? bezier.StartPoint() : bezier.EndPoint();

            switch (bezier.Degree())
            {
                case 1:
                    renderer.Line(start, end);
                    return true;

                case 2:
                    c1 = bezier.Pole(2);
                    renderer.BezierCurve(new[] {start, c1, end});
                    return true;

                case 3:
                    c1 = bezier.Pole(reverse ? 3 : 2);
                    c2 = bezier.Pole(reverse ? 2 : 3);
                    renderer.BezierCurve(new[] {start, c1, c2, end});
                    return true;

                default:
                    Messages.Warning("BrepRenderHelper: Bezier curve has an unsupported order of " + bezier.Degree() + ".");
                    break;
            }

            return false;
        }
        else
        {
            // Try to create B-Spline curve
            var bsplineCurve = ShapeConstruct.ConvertCurveToBSpline(bezier, first, last, 0.0001, bezier.Continuity(), 10000, 3);
            if (bsplineCurve != null)
            {
                return RenderBSplineCurve(renderer, bsplineCurve, first, last, reverse);
            }
            Messages.Warning("BrepRenderHelper: Bezier curve is not supported by exporter and conversion to BSpline failed.");
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

}