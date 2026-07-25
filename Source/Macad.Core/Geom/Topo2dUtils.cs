using Macad.Occt;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Core.Geom;

public static class Topo2dUtils
{
    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Shape TransformSketchShape(TopoDS_Shape original, IEnumerable<Trsf2d> transforms, bool mergeWires = false, double affinityUFactor = 1.0, IList<BRepTools_History> histories = null)
    {
        if (!GetPlaneOfEdges(original, out Geom_Plane geomPlane))
        {
            return null;
        }
        
        Pln plane = geomPlane.Pln();
        Dictionary<Pnt2d, TopoDS_Vertex> wireEndVertices = mergeWires ? new() : null;
        Dictionary<Pnt2d, TopoDS_Vertex> sharedVertices = new();
        var builder = new BRep_Builder();
        var shapeBuildEdge = new ShapeBuild_Edge();
        var newShape = new TopoDS_Compound();
        builder.MakeCompound(newShape);

        foreach (var transform in transforms)
        {
            // Bookkeeping requested?
            BRepTools_History history = null;
            if (histories != null)
            {
                history = new();
                histories.Add(history);
            }

            // Do transform per wire.
            foreach (var wire in original.Wires())
            {
                // Each wire start with new shared vertices
                sharedVertices.Clear();

                if (mergeWires)
                {
                    // Add end of wire as shared vertex for all wires of all transforms.
                    // This enables connecting them at the end.
                    TopoDS_Vertex v1 = new(), v2 = new();
                    TopExp.Vertices(wire, v1, v2);
                    if (!v1.IsSame(v2))
                    {
                        Pnt2d pnt2d = ProjLib.Project(plane, v1.Pnt()).Transformed(transform);
                        if (!wireEndVertices.Keys.Any(key => key.IsEqual(pnt2d, 1e-8)))
                        {
                            v1 = new();
                            builder.MakeVertex(v1, geomPlane.Value(pnt2d.X, pnt2d.Y), BRepLib.Precision());
                            wireEndVertices.Add(pnt2d, v1);
                        }

                        pnt2d = ProjLib.Project(plane, v2.Pnt()).Transformed(transform);
                        if (!wireEndVertices.Keys.Any(key => key.IsEqual(pnt2d, 1e-8)))
                        {
                            v2 = new();
                            builder.MakeVertex(v2, geomPlane.Value(pnt2d.X, pnt2d.Y), BRepLib.Precision());
                            wireEndVertices.Add(pnt2d, v2);
                        }
                    }

                    // Take all wire end vertices so far as base for shared vertices for this wire
                    foreach (var kvp in wireEndVertices)
                    {
                        sharedVertices.Add(kvp.Key, kvp.Value);
                    }
                }

                TopoDS_Wire newWire = new();
                builder.MakeWire(newWire);

                // Copy edges
                bool edgeCreated = false;
                foreach (var edge in (IEnumerable<TopoDS_Edge>)wire.Edges())
                {
                    var tedge = edge.TShape() as BRep_TEdge;
                    if (tedge == null)
                    {
                        continue;
                    }

                    var curveRep = tedge.CurvesList().FirstOrDefault(cos => cos is BRep_CurveOnSurface && cos.Surface().Equals(geomPlane)) as BRep_CurveOnSurface;
                    if (curveRep == null)
                    {
                        Messages.Error("Required pcurve on plane not found for transforming edge.");
                        continue;
                    }

                    // Transform PCurve
                    var curve = curveRep.PCurve();
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

                    // Check if we already have a vertex in this wire or at the end of other wires (when requestet to merge)
                    TopoDS_Vertex v1 = sharedVertices.FirstOrDefault(kvp => kvp.Key.IsEqual(uv1, 1e-8)).Value;
                    if (v1 == null)
                    {
                        v1 = new();
                        builder.MakeVertex(v1, geomPlane.Value(uv1.X, uv1.Y), BRepLib.Precision());
                        sharedVertices.Add(uv1, v1);
                    }
                    TopoDS_Vertex v2 = sharedVertices.FirstOrDefault(kvp => kvp.Key.IsEqual(uv2, 1e-8)).Value;
                    if (v2 == null)
                    {
                        v2 = new();
                        builder.MakeVertex(v2, geomPlane.Value(uv2.X, uv2.Y), BRepLib.Precision());
                        sharedVertices.Add(uv2, v2);
                    }

                    // Make edge and fill history
                    BRepBuilderAPI_MakeEdge makeEdge = new(newCurve, geomPlane, v1, v2, first, last);
                    if (!makeEdge.IsDone())
                    {
                        Messages.Error("Failed generating transformed edge: " + makeEdge.Error());
                        continue;
                    }
                    var newEdge = makeEdge.Edge();
                    newEdge.Orientation(edge.Orientation());

                    builder.Add(newWire, newEdge);
                    history?.AddGenerated(edge, newEdge);
                    edgeCreated = true;
                }

                if (!edgeCreated)
                {
                    continue;
                }

                builder.Add(newShape, newWire);
            }
        }

        return mergeWires ? BuildWiresFromEdges(newShape.Edges(), true) 
                          : newShape;
    }
        
    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Shape BuildWiresFromEdges(IEnumerable<TopoDS_Edge> edges, bool hasSharedVertices)
    {
        var sosEdges = new TopTools_HSequenceOfShape();
        foreach (var edge in edges)
        {
            sosEdges.Append(edge);
        }

        var wires = new TopTools_HSequenceOfShape();
        ShapeAnalysis_FreeBounds.ConnectEdgesToWires(sosEdges, 1e-8, hasSharedVertices, wires);
            
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
        return BuildWiresFromEdges(shape.Edges(), false);
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