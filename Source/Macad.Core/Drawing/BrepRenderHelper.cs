using System;
using System.Collections.Generic;
using System.Linq;
using Macad.Common;
using Macad.Occt;

namespace Macad.Core.Drawing
{
    public sealed class BrepRenderHelper
    {
        TopoDS_Shape _Shape;
        readonly IDrawingRenderer _Renderer;

        //--------------------------------------------------------------------------------------------------

        public BrepRenderHelper(IDrawingRenderer renderer)
        {
            _Renderer = renderer;
        }

        //--------------------------------------------------------------------------------------------------

        public bool Render(TopoDS_Shape brepShape)
        {
            _Shape = brepShape;

            if (_Renderer.RenderBrepShape(_Shape))
                return true;

            return _DoFaces();
        }

        //--------------------------------------------------------------------------------------------------

        bool _DoFaces()
        {
            var res = true;

            _Renderer.BeginPath();

            var faces = _Shape.Faces();
            if (faces.Count == 0)
            {
                // Drawings may only contain lines, not faces
                res = _DoEdges(_Shape.Edges(), null);
            }
            else
            {
                foreach (var face in faces)
                {

                    var outerWire = BRepTools.OuterWire(face);
                    if (outerWire == null)
                        continue;

                    res &= _DoEdges(outerWire.Edges(), face);

                    var wires = face.Wires();
                    foreach (var wire in wires)
                    {
                        if (wire.IsEqual(outerWire))
                            continue;
                        res &= _DoEdges(wire.Edges(), face);
                    }

                }
            }

            _Renderer.EndPath();

            return res;
        }
        
        //--------------------------------------------------------------------------------------------------

        bool _DoEdges(List<TopoDS_Edge> edges, TopoDS_Face face)
        {
            var res = true;

            // Order edges
            var order = new ShapeAnalysis_WireOrder(true, 0.0001);
            foreach (var edge in edges)
            {
                var first = BRep_Tool.Pnt(TopExp.FirstVertex(edge));
                var last = BRep_Tool.Pnt(TopExp.LastVertex(edge));
                if (edge.Orientation() == TopAbs_Orientation.TopAbs_FORWARD)
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

                    // Process ordered edges
                    _Renderer.BeginPathSegment();
                    for (int index = startIndex; index <= endIndex; index++)
                    {
                        int orderIndex = order.Ordered(index);
                        int originalIndex = Math.Abs(orderIndex) - 1; // order index is 1-based
                        res &= _DoEdge(edges[originalIndex], orderIndex < 0, face);
                    }
                    _Renderer.EndPathSegment();
                }
            }
            else
            {
                // Cannot sort, just pump out all edges
                foreach (var edge in edges)
                    res &= _DoEdge(edge, false, face);
            }

            return res;
        }

        //--------------------------------------------------------------------------------------------------

        bool _DoEdge(TopoDS_Edge edge, bool reverse, TopoDS_Face face)
        {
            var res = true;

            reverse ^= edge.Orientation() == TopAbs_Orientation.TopAbs_REVERSED;

            double first = 0, last = 0;
            if (face != null)
            {
                var curve = BRep_Tool.CurveOnSurface(edge, new Geom_Plane(Ax3.XOY), new TopLoc_Location(),  ref first, ref last);
                if (curve == null)
                    return false;

                res &= _DoCurve(curve, first, last, reverse);
            }
            else
            {
                if (!(edge.TShape() is BRep_TEdge tedge))
                    return res;

                var curves = tedge.CurvesList();
                if(reverse)
                {
                    curves.Reverse();
                }

                foreach (var curveOnSurface in curves.Cast<BRep_CurveOnSurface>())
                {
                    var curve = curveOnSurface.PCurve();
                    first = curveOnSurface.First();
                    last = curveOnSurface.Last();
                    res &= _DoCurve(curve, first, last, reverse);
                }
            }

            return res;
        }

        //--------------------------------------------------------------------------------------------------

        bool _DoCurve(Geom2d_Curve curve2d, double first, double last, bool reverse)
        {
            switch (curve2d)
            {
                case Geom2d_Line line:
                    return _DoLine(line, first, last, reverse);

                case Geom2d_Ellipse ellipse:
                    return _DoEllipse(ellipse, first, last, reverse);

                case Geom2d_Circle circle:
                    return _DoCircle(circle, first, last, reverse);

                case Geom2d_BSplineCurve bspline:
                    return _DoBSpline(bspline, first, last, reverse);

                case Geom2d_BezierCurve bezier:
                    return _DoBezier(bezier, first, last, reverse);

                default:
                    // Try to create B-Spline curve
                    var bsplineCurve = ShapeConstruct.ConvertCurveToBSpline(curve2d, first, last, 0.001 /*Precision.Confusion()*10*/, curve2d.Continuity(), 10000, 3);
                    if (bsplineCurve != null)
                    {
                        return _DoBSpline(bsplineCurve, first, last, reverse);
                    }
                    Messages.Warning("BrepRenderHelper: Unsupported curve class.");
                    return false;
            }
        }

        //--------------------------------------------------------------------------------------------------

        bool _DoLine(Geom2d_Line line, double first, double last, bool reverse)
        {
            var start = line.Value(reverse ? last : first);
            var end = line.Value(reverse ? first : last);
            _Renderer.Line(start, end);
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool _DoCircle(Geom2d_Circle circle, double first, double last, bool reverse)
        {
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

            _Renderer.Circle(center, radius, first - rotation, last - rotation);

            return true;
        }

        //--------------------------------------------------------------------------------------------------
        
        bool _DoEllipse(Geom2d_Ellipse ellipse, double first, double last, bool reverse)
        {
            var center = ellipse.Location();
            var majorRadius = ellipse.MajorRadius();
            var minorRadius = ellipse.MinorRadius();
            double rotation = ellipse.XAxis().Direction.Angle(Dir2d.DX);

            if (ellipse.Position().Sense() > 0)
            {
                first = Maths.DoublePI - first;
                last = Maths.DoublePI - last;
            }
            
            if (reverse)
            {
                first.Swap(ref last);
            }

            _Renderer.Ellipse(center, majorRadius, minorRadius, rotation, first, last);

            return false;
        }

        //--------------------------------------------------------------------------------------------------

        bool _DoBSpline(Geom2d_BSplineCurve bspline, double first, double last, bool reverse)
        {
            if (_Renderer.Capabilities.BSplineCurveMaxDegree > 0)
            {
                bspline = Geom2dConvert.SplitBSplineCurve(bspline, first, last, 0.00001);

                if (bspline.Degree() > _Renderer.Capabilities.BSplineCurveMaxDegree)
                {
                    // Try to reduce the order of the curve
                    var continuity = bspline.Continuity();
                    if (continuity != GeomAbs_Shape.GeomAbs_C0)
                        continuity = GeomAbs_Shape.GeomAbs_C1;

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

                _Renderer.BSplineCurve(bspline.Degree(), knots, points, weights, bspline.IsRational());
                return true;
            }
            else
            {
                // Cannot render BSpline, Try bezier
                var converter = new Geom2dConvert_BSplineCurveToBezierCurve(bspline, first, last, 0.001 /*Precision.PConfusion() * 10*/);
                bool result = true;

                if (reverse)
                {
                    for (int i = converter.NbArcs(); i >= 1; i -= 1)
                    {
                        var arc = converter.Arc(i);
                        result &= _DoBezier(arc, arc.FirstParameter(), arc.LastParameter(), true);
                    }
                }
                else
                {
                    for (int i = 1; i <= converter.NbArcs(); i += 1)
                    {
                        var arc = converter.Arc(i);
                        result &= _DoBezier(arc, arc.FirstParameter(), arc.LastParameter(), false);
                    }
                }

                return result;
            }
        }

        //--------------------------------------------------------------------------------------------------

        bool _DoBezier(Geom2d_BezierCurve bezier, double first, double last, bool reverse)
        {
            if (_Renderer.Capabilities.BezierCurveMaxDegree > 0)
            {
                var maxDegree = Math.Min(3, _Renderer.Capabilities.BezierCurveMaxDegree);
                if (bezier.Degree() > maxDegree)
                {
                    // Try to reduce the order of the curve
                    var continuity = bezier.Continuity();
                    if (continuity != GeomAbs_Shape.GeomAbs_C0)
                        continuity = GeomAbs_Shape.GeomAbs_C1;

                    var converter = new Geom2dConvert_ApproxCurve(bezier, 0.0001, continuity, 1000, maxDegree);
                    if (!(converter.IsDone() && converter.HasResult()))
                    {
                        Messages.Warning("BrepRenderHelper: Bezier curve has an undecreasable order of " + bezier.Degree() + ".");
                        return false;
                    }

                    return _DoBSpline(converter.Curve(), first, last, reverse);
                }

                bezier.Segment(first, last);
                Pnt2d c1, c2;
                var start = reverse ? bezier.EndPoint() : bezier.StartPoint();
                var end = reverse ? bezier.StartPoint() : bezier.EndPoint();

                switch (bezier.Degree())
                {
                    case 1:
                        _Renderer.Line(start, end);
                        return true;

                    case 2:
                        c1 = bezier.Pole(2);
                        _Renderer.BezierCurve(new[] {start, c1, end});
                        return true;

                    case 3:
                        c1 = bezier.Pole(reverse ? 3 : 2);
                        c2 = bezier.Pole(reverse ? 2 : 3);
                        _Renderer.BezierCurve(new[] {start, c1, c2, end});
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
                    return _DoBSpline(bsplineCurve, first, last, reverse);
                }
                Messages.Warning("BrepRenderHelper: Bezier curve is not supported by exporter and conversion to BSpline failed.");
                return false;
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}
