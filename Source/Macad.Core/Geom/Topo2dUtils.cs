using System.Collections.Generic;
using System.Linq;
using Macad.Occt;

namespace Macad.Core.Geom;

public static class Topo2dUtils
{
    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Shape TransformSketchShape(TopoDS_Shape original, IEnumerable<Trsf2d> transforms, bool includeOriginal=false, double affinityUFactor=1.0)
    {
        if (!GetPlaneOfEdges(original, out Geom_Plane geomPlane))
        {
            return original;
        }

        // Make copies
        var builder = new BRep_Builder();
        var shapeBuildEdge = new ShapeBuild_Edge();
        var newShape = new TopoDS_Compound();
        builder.MakeCompound(newShape);
            
        foreach (var transform in transforms)
        {
            foreach (var wire in original.Wires())
            {
                foreach (var edge in wire.Edges())
                {
                    if(includeOriginal)
                        builder.Add(newShape, edge);

                    var tedge = edge.TShape() as BRep_TEdge;
                    if (tedge == null)
                        continue;

                    var curves = tedge.CurvesList();
                    foreach (BRep_CurveOnSurface curveRep in curves.OfType<BRep_CurveOnSurface>()
                                                                   .Where(cos => cos.Surface().Equals(geomPlane)))
                    {
                        // Transform PCurve
                        var curve = curveRep.PCurve();
                        var plane = curveRep.Surface() as Geom_Plane;
                        double first = curveRep.First();
                        double last = curveRep.Last();
                        var newCurve = shapeBuildEdge.TransformPCurve(curve, transform, affinityUFactor, ref first, ref last);

                        // Transform UVs
                        Pnt2d uv1 = new Pnt2d();
                        Pnt2d uv2 = new Pnt2d();
                        curveRep.UVPoints(ref uv1, ref uv2);
                        uv1.Transform(transform);
                        uv2.Transform(transform);
                        if (affinityUFactor != 1.0)
                        {
                            gp_GTrsf2d gtrsf = new();
                            gtrsf.SetAffinity(Ax2d.OY, affinityUFactor);
                            uv1 = gtrsf.Transformed(uv1.ToXY()).ToPnt();
                            uv2 = gtrsf.Transformed(uv2.ToXY()).ToPnt();
                        }

                        Pnt p1 = plane.Value(uv1.X, uv1.Y);
                        Pnt p2 = plane.Value(uv2.X, uv2.Y);
                        BRepBuilderAPI_MakeEdge makeEdge = new(newCurve, plane, p1, p2, first, last);

                        if (!makeEdge.IsDone())
                        {
                            Messages.Error("Failed generating transformed edge: " + makeEdge.Error());
                            continue;
                        }
                        builder.Add(newShape, makeEdge.Edge());
                    }
                }
            }
        }

        return BuildWiresFromEdges(newShape);
    }
        
    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Shape BuildWiresFromEdges(IEnumerable<TopoDS_Edge> edges)
    {
        var sosEdges = new TopTools_HSequenceOfShape();
        foreach (var edge in edges)
        {
            sosEdges.Append(edge);
        }

        var wires = new TopTools_HSequenceOfShape();
        ShapeAnalysis_FreeBounds.ConnectEdgesToWires(sosEdges, 1e-8, false, wires);
            
        var builder = new BRep_Builder();
        var newShape = new TopoDS_Compound();
        builder.MakeCompound(newShape);
        for (int i = wires.Lower(); i <= wires.Upper(); i++)
        {
            builder.Add(newShape, wires.Value(i));
        }

        return newShape;
    }

    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Shape BuildWiresFromEdges(TopoDS_Shape shape)
    {
        return BuildWiresFromEdges(shape.Edges());
    }

    //--------------------------------------------------------------------------------------------------

    public static bool GetPlaneOfEdges(TopoDS_Shape shape, out Geom_Plane geomPlane)
    {
        return GetPlaneOfEdges(shape.Edges(), out geomPlane);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool GetPlaneOfEdges(IEnumerable<TopoDS_Edge> edges, out Geom_Plane geomPlane)
    {
        geomPlane = new Geom_Plane(Pln.XOY);
        if (!edges.Any())
        {
            Messages.Error("Cannot get plane of edges, shape doesn't have edges.");
            return false;
        }

        List<Geom_Plane> _Candidates = new();
        foreach (var edge in edges)
        {
            if (!(edge.TShape() is BRep_TEdge tedge))
                continue;

            var curves = tedge.CurvesList();
            var geomPlanes = curves.Where(cos => (cos as BRep_CurveOnSurface)?.Surface() is Geom_Plane)
                                   .Select(cos => (Geom_Plane)cos.Surface())
                                   .ToList();
            if (!geomPlanes.Any())
                continue;

            if (_Candidates.Count == 0)
            {
                _Candidates.AddRange(geomPlanes);
                continue;
            }

            var commons = _Candidates.Where(a => geomPlanes.Any(b => a.Pln().Position.IsCoplanar(b.Pln().Position, 0.00001, 0.00001)));
            int commonsCount = commons.Count();
            if (commonsCount == 0)
            {
                Messages.Error("Cannot get plane of edges, not all edges are coplanar.");
                return false;
            }
            if(commonsCount == _Candidates.Count)
                continue;
            _Candidates = commons.ToList();
        }

        if (_Candidates.Count <= 0)
        {
            return false;
        }

        geomPlane = _Candidates.First();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}