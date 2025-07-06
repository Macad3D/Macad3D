﻿using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Common;
using Macad.Occt;

namespace Macad.Core.Geom;

public static class TopoUtils
{
    /// <summary>
    /// Creates a 3D edge from a 2D curve and a plane.
    /// </summary>
    /// <param name="curve2d">The 2D curve to be converted into a 3D edge.</param>
    /// <param name="plane">The plane used to define the spatial context for the 2D curve.</param>
    /// <returns>A 3D edge constructed from the specified 2D curve and plane.</returns>
    public static TopoDS_Edge MakeEdge(Geom2d_Curve curve2d, Pln plane)
    {
        var curve = GeomAPI.To3d(curve2d, plane);
        var edge = new BRepBuilderAPI_MakeEdge(curve).Edge();

        return edge;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Creates a face from a set of four points.
    /// </summary>
    /// <remarks>This method attempts to create a planar face using the provided points. If the planar face
    /// creation fails, it falls back to constructing a B-spline surface. The points must define a closed wire, with
    /// the last point connecting back to the first.</remarks>
    /// <param name="points">An array of four points representing the vertices of the face. The points must be provided in sequential order,
    /// forming a closed wire.</param>
    /// <returns>The constructed face.</returns>
    public static TopoDS_Face MakeFace(Pnt[] points)
    {
        Debug.Assert(points.Length == 4);

        var edges = new TopoDS_Edge[4];
        for (int i = 0; i < 4; i++)
        {
            edges[i] = new BRepBuilderAPI_MakeEdge(points[i], points[i == 3 ? 0 : i+1]).Edge();
        }

        var wire = new BRepBuilderAPI_MakeWire(edges[0], edges[1], edges[2], edges[3]).Wire();
        BRepBuilderAPI_MakeFace makeFace = new(wire);
        if (makeFace.IsDone())
        {
            return makeFace.Face();
        }

        // Making planar face failed, try making b-spline surface
        edges[2].Orientation(TopAbs_Orientation.REVERSED);
        return BRepFill.Face(edges[0], edges[2].ToEdge());
    }

    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Shape CreateFacesFromWires(TopoDS_Shape sourceShape, Pln plane)
    {
        // Create faces from closed wires
        var wires = sourceShape.Wires();
        var openWireCount = 0;
        var closedWireCount = 0;
        BRepBuilderAPI_MakeFace makeFace = new(plane);
        foreach (var wire in wires)
        {
            var checkWire = new BRepCheck_Wire(wire);
            if (checkWire.Closed() != BRepCheck_Status.NoError)
            {
                openWireCount++;
                continue;
            }

            makeFace.Add(wire);
            closedWireCount++;
        }

        if (openWireCount > 0)
        {
            Messages.Warning("Source shape has " + openWireCount + " unclosed wires, which will be ignored.");
        }

        if (closedWireCount == 0)
        {
            Messages.Warning("Source shape has no closed wires.");
            return new TopoDS_Face();
        }

        if (!makeFace.IsDone())
        {
            Messages.Error("Generating faces from source wires failed.");
            return null;
        }

        // Fix orientation of that faces
        var shapeFix = new ShapeFix_Shape(makeFace.Face());
        shapeFix.Perform();

        return shapeFix.Shape();
    }

    //--------------------------------------------------------------------------------------------------

    public static void UpdateFaceOrientation(TopoDS_Face face, Dir referenceDirection)
    {
        if (FaceAlgo.GetFaceCenterNormal(face).Direction.IsOpposite(referenceDirection, Maths.HalfPI))
        {
            face.Reverse();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static void UpdateSolidOrientation(TopoDS_Shape solid)
    {
        var classifier = new BRepClass3d_SolidClassifier(solid);
        classifier.PerformInfinitePoint(Precision.Confusion());
        if (classifier.State() == TopAbs_State.INSIDE)
        {
            solid.Reverse();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Solid MakeSolid(TopoDS_Shell shell, bool correctOrientation)
    {
        var builder = new BRep_Builder();
        var solid = new TopoDS_Solid();
        builder.MakeSolid(solid); 
        builder.Add(solid, shell);

        if (correctOrientation)
        {
            var classifier = new BRepClass3d_SolidClassifier(solid);
            classifier.PerformInfinitePoint(Precision.Confusion());
            if (classifier.State() == TopAbs_State.INSIDE)
            {
                solid = new TopoDS_Solid();
                builder.MakeSolid(solid); 
                builder.Add(solid, shell.Reversed());
            }
        }

        return solid;
    }

    //--------------------------------------------------------------------------------------------------

    public static List<TopoDS_Shape> FindEdgesByVertex(TopoDS_Shape shape, TopoDS_Vertex vertex)
    {
        // Get map of all faces with their ancestors
        var edgeMap = new TopTools_IndexedDataMapOfShapeListOfShape(4);
        TopExp.MapShapesAndAncestors(shape, TopAbs_ShapeEnum.VERTEX, TopAbs_ShapeEnum.EDGE, edgeMap);

        return edgeMap.FindFromKey(vertex).ToList();
    }

    //--------------------------------------------------------------------------------------------------
        
    public static TopoDS_Compound CreateCompound(IEnumerable<TopoDS_Shape> shapes)
    {
        TopoDS_Compound comp = new();
        BRep_Builder builder = new();
        builder.MakeCompound(comp);
        shapes.ForEach(shape => builder.Add(comp, shape));
        return comp;
    }

    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Compound CreateCompound(params TopoDS_Shape[] shapes)
    {
        return CreateCompound(shapes as IEnumerable<TopoDS_Shape>);
    }

    //--------------------------------------------------------------------------------------------------

    public static TopoDS_CompSolid CreateCompound(IEnumerable<TopoDS_Solid> solids)
    {
        TopoDS_CompSolid comp = new();
        BRep_Builder builder = new();
        builder.MakeCompSolid(comp);
        solids.ForEach(shape => builder.Add(comp, shape));
        return comp;
    }

    //--------------------------------------------------------------------------------------------------
        
    public static TopoDS_CompSolid CreateCompound(params TopoDS_Solid[] solids)
    {
        return CreateCompound(solids as IEnumerable<TopoDS_Solid>);
    }

    //--------------------------------------------------------------------------------------------------

}