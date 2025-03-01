using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Occt;

namespace Macad.Core;

public static class TopoDSShapeExtensions
{
    public static List<TopoDS_CompSolid> CompSolids(this TopoDS_Shape shape, bool distinct = true)
    {
        var compSolids = new List<TopoDS_CompSolid>();

        var exp = new TopExp_Explorer(shape, TopAbs_ShapeEnum.COMPSOLID, TopAbs_ShapeEnum.SHAPE);
        while (exp.More())
        {
            var compSolid = exp.Current().ToCompSolid();
            exp.Next();

            if (distinct)
            {
                if (compSolids.Any(e => e.IsSame(compSolid)))
                    continue;
            }
            compSolids.Add(compSolid);
        }
        return compSolids;
    }

    //--------------------------------------------------------------------------------------------------

    public static List<TopoDS_Solid> Solids(this TopoDS_Shape shape, bool distinct = true)
    {
        var solids = new List<TopoDS_Solid>();

        var exp = new TopExp_Explorer(shape, TopAbs_ShapeEnum.SOLID, TopAbs_ShapeEnum.SHAPE);
        while (exp.More())
        {
            var solid = exp.Current().ToSolid();
            exp.Next();

            if (distinct)
            {
                if (solids.Any(e => e.IsSame(solid)))
                    continue;
            }
            solids.Add(solid);
        }
        return solids;
    }

    //--------------------------------------------------------------------------------------------------

    public static List<TopoDS_Shell> Shells(this TopoDS_Shape shape, bool distinct = true)
    {
        var shells = new List<TopoDS_Shell>();

        var exp = new TopExp_Explorer(shape, TopAbs_ShapeEnum.SHELL, TopAbs_ShapeEnum.SHAPE);
        while (exp.More())
        {
            var shell = exp.Current().ToShell();
            exp.Next();

            if (distinct)
            {
                if (shells.Any(e => e.IsSame(shell)))
                    continue;
            }
            shells.Add(shell);
        }
        return shells;
    }

    //--------------------------------------------------------------------------------------------------

    public static List<TopoDS_Face> Faces(this TopoDS_Shape shape, bool distinct = true)
    {
        Debug.Assert(shape != null);
            
        var faces = new List<TopoDS_Face>();

        var exp = new TopExp_Explorer(shape, TopAbs_ShapeEnum.FACE, TopAbs_ShapeEnum.SHAPE);
        while (exp.More())
        {
            var face = exp.Current().ToFace();
            exp.Next();

            if (distinct)
            {
                var otherIndex = faces.FindIndex(e => e.IsSame(face));
                if (otherIndex >= 0)
                {
                    if (faces[otherIndex].Orientation() == TopAbs_Orientation.REVERSED
                        && face.Orientation() == TopAbs_Orientation.FORWARD)
                    {
                        // Replace with forward face, this is prefered
                        faces[otherIndex] = face;
                    }

                    // Edge already present or replaced, skip adding
                    continue;
                }
            }
            faces.Add(face);
        }
        return faces;
    }

    //--------------------------------------------------------------------------------------------------

    public static List<TopoDS_Wire> Wires(this TopoDS_Shape shape, bool distinct = true)
    {
        var wires = new List<TopoDS_Wire>();

        var exp = new TopExp_Explorer(shape, TopAbs_ShapeEnum.WIRE, TopAbs_ShapeEnum.SHAPE);
        while (exp.More())
        {
            var wire = exp.Current().ToWire();
            exp.Next();

            if (distinct)
            {
                var otherEdgeIndex = wires.FindIndex(e => e.IsSame(wire));
                if (otherEdgeIndex >= 0)
                {
                    if (wires[otherEdgeIndex].Orientation() == TopAbs_Orientation.REVERSED
                        && wire.Orientation() == TopAbs_Orientation.FORWARD)
                    {
                        // Replace with forward wire, this is prefered
                        wires[otherEdgeIndex] = wire;
                    }

                    // Edge already present or replaced, skip adding
                    continue;
                }
            }

            wires.Add(wire);
        }
        return wires;
    }

    //--------------------------------------------------------------------------------------------------

    public static List<TopoDS_Edge> Edges(this TopoDS_Shape shape, bool distinct = true)
    {
        var edges = new List<TopoDS_Edge>();

        var exp = new TopExp_Explorer(shape, TopAbs_ShapeEnum.EDGE, TopAbs_ShapeEnum.SHAPE);
        while (exp.More())
        {
            var edge = exp.Current().ToEdge();
            exp.Next();

            if (distinct)
            {
                var otherEdgeIndex = edges.FindIndex(e => e.IsSame(edge));
                if (otherEdgeIndex >= 0)
                {
                    if (edges[otherEdgeIndex].Orientation() == TopAbs_Orientation.REVERSED
                        && edge.Orientation() == TopAbs_Orientation.FORWARD)
                    {
                        // Replace with forward edge, this is prefered
                        edges[otherEdgeIndex] = edge;
                    }

                    // Edge already present or replaced, skip adding
                    continue;
                }
            }

            edges.Add(edge);
        }
        return edges;
    }

    //--------------------------------------------------------------------------------------------------

    public static List<TopoDS_Vertex> Vertices(this TopoDS_Shape shape, bool distinct = true)
    {
        var faces = new List<TopoDS_Vertex>();

        var exp = new TopExp_Explorer(shape, TopAbs_ShapeEnum.VERTEX, TopAbs_ShapeEnum.SHAPE);
        while (exp.More())
        {
            var vertex = exp.Current().ToVertex();
            exp.Next();

            if (distinct)
            {
                if (faces.Any(e => e.IsSame(vertex)))
                    continue;
            }
            faces.Add(vertex);
        }
        return faces;
    }
        
    //--------------------------------------------------------------------------------------------------

    public static Pnt CenterOfMass(this TopoDS_Shape shape)
    {
        GProp_GProps massProps = new GProp_GProps();
        BRepGProp.SurfaceProperties(shape, massProps);
        return massProps.CentreOfMass();
    }

    //--------------------------------------------------------------------------------------------------

    public static double Area(this TopoDS_Shape shape)
    {
        GProp_GProps massProps = new GProp_GProps();
        BRepGProp.SurfaceProperties(shape, massProps);
        return massProps.Mass();
    }

    //--------------------------------------------------------------------------------------------------

    public static double Volume(this TopoDS_Shape shape)
    {
        GProp_GProps massProps = new GProp_GProps();
        BRepGProp.VolumeProperties(shape, massProps);
        return massProps.Mass();
    }

    //--------------------------------------------------------------------------------------------------

    public static Bnd_Box BoundingBox(this TopoDS_Shape shape)
    {
        var bb = new Bnd_Box();
        BRepBndLib.Add(shape, bb);
        return bb;
    }

    //--------------------------------------------------------------------------------------------------

    public static Pnt Pnt(this TopoDS_Vertex vertex)
    {
        return vertex == null ? new Pnt() : BRep_Tool.Pnt(vertex);
    }

    //--------------------------------------------------------------------------------------------------

    public static Geom_Curve Curve(this TopoDS_Edge edge, out double firstParam, out double lastParam)
    {
        firstParam = lastParam = 0;
        if (edge == null)
            return null;

        return BRep_Tool.Curve(edge, ref firstParam, ref lastParam);
    }

    //--------------------------------------------------------------------------------------------------

    public static Geom_Surface Surface(this TopoDS_Face face)
    {
        return face == null ? null : BRep_Tool.Surface(face);
    }

    //--------------------------------------------------------------------------------------------------

    public static BRepAdaptor_Curve Adaptor(this TopoDS_Edge edge)
    {
        return edge == null ? null : new BRepAdaptor_Curve(edge);
    }

    //--------------------------------------------------------------------------------------------------

    public static BRepAdaptor_Surface Adaptor(this TopoDS_Face face)
    {
        return face == null ? null : new BRepAdaptor_Surface(face);
    }

    //--------------------------------------------------------------------------------------------------

}