using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Common;
using Macad.Occt;

namespace Macad.Core.Geom;

public static class EdgeAlgo
{
    /// <summary>
    /// Searches for the longest edge of a shape, and find the longest parallel edge
    /// </summary>
    public static (TopoDS_Edge edge, Ax1? axis, TopoDS_Edge opEdge, Ax1? opAxis) FindLongestEdge(TopoDS_Shape shape)
    {
        TopoDS_Edge foundEdge = null;
        Ax1? foundAxis = null;
        TopoDS_Edge opEdge = null;
        Ax1? opAxis = null;

        // Find the longest edge to revolve around
        double edgeLen = -1;
        var edgeInfos = new List<(TopoDS_Edge edge, double len, Ax1 axis)>();
        var edges = shape.Edges();
        foreach (var edge in edges)
        {
            var brepAdaptor = new BRepAdaptor_Curve(edge);
            if (brepAdaptor.GetCurveType() != GeomAbs_CurveType.Line)
                break;

            var v1 = brepAdaptor.Value(brepAdaptor.FirstParameter());
            var v2 = brepAdaptor.Value(brepAdaptor.LastParameter());
            var len = v1.Distance(v2);
            var axis = new Ax1(v1, new Vec(v1, v2).ToDir());
            if (edge.Orientation() == TopAbs_Orientation.REVERSED)
            {
                axis.Reverse();
            }
            edgeInfos.Add((edge, len, axis));

            if (foundEdge != null && foundEdge.IsSame(edge))
            {
                // Same edge with another orientation
                if (foundEdge.Orientation() == TopAbs_Orientation.REVERSED
                    && edge.Orientation() == TopAbs_Orientation.FORWARD)
                {
                    // Prefer forward edges
                    foundEdge = edge;
                }
                continue;
            }

            if (len > edgeLen)
            {
                foundEdge = edge;
                edgeLen = len;
                foundAxis = axis;
            }
        }

        if (foundAxis != null)
        {
            // Find opposite edge
            edgeLen = -1;
            foreach (var ei in edgeInfos)
            {
                if (ei.edge == foundEdge)
                    continue;
                if(!ei.axis.IsParallel(foundAxis.Value, 0.00001))
                    continue;

                if (ei.len > edgeLen)
                {
                    opEdge = ei.edge;
                    edgeLen = ei.len;
                    opAxis = ei.axis;
                }
            }
        }
        return (foundEdge, foundAxis, opEdge, opAxis);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Searches for the smallest and biggest adjacent face
    /// </summary>
    public static (TopoDS_Face smallestFace, TopoDS_Face largestFace) FindSmallestAndLargestAdjacentFaces(TopoDS_Shape shape, TopoDS_Edge edgeShape)
    {
        // Create a Map of Edge and connected Faces
        var mapOfEdgesToFaces = new TopTools_IndexedDataMapOfShapeListOfShape(1);
        TopExp.MapShapesAndAncestors(shape, TopAbs_ShapeEnum.EDGE, TopAbs_ShapeEnum.FACE, mapOfEdgesToFaces);

        var faceDict = new Dictionary<TopoDS_Face, double>();

        var faces = mapOfEdgesToFaces.FindFromKey(edgeShape).ToList();
        foreach (var face in faces)
        {
            var gprops = new GProp_GProps();
            BRepGProp.SurfaceProperties(face, gprops, false);
            faceDict.Add(face.ToFace(), gprops.Mass());
        }

        if (!faceDict.Any())
            return (null, null);

        var min = faceDict.First();
        var max = min;
        foreach (var kvp in faceDict.Skip(1))
        {
            if (kvp.Value < min.Value)
                min = kvp;
            if (kvp.Value > max.Value)
                max = kvp;
        }

        return (min.Key, max.Key);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Searches for adjacent faces
    /// </summary>
    public static (TopoDS_Face face1, TopoDS_Face face2) FindAdjacentFaces(TopoDS_Shape shape, TopoDS_Edge edgeShape)
    {
        // Create a Map of Edge and connected Faces
        var mapOfEdgesToFaces = new TopTools_IndexedDataMapOfShapeListOfShape(1);
        TopExp.MapShapesAndAncestors(shape, TopAbs_ShapeEnum.EDGE, TopAbs_ShapeEnum.FACE, mapOfEdgesToFaces);

        var faces = mapOfEdgesToFaces.FindFromKey(edgeShape).ToList();
        var face1 = faces.Count > 0 ? faces[0].ToFace() : null;
        var face2 = faces.Count > 1 ? faces[1].ToFace() : null;
        return (face1, face2);
    }

    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Vertex FindSharedVertex(TopoDS_Edge edge1, TopoDS_Edge edge2)
    {
        var vertices1 = edge1.Vertices();
        var vertices2 = edge2.Vertices();
        foreach (var vertex in vertices1)
        {
            if (vertices2.Any(v => v.IsSame(vertex)))
                return vertex;
        }
        return null;
    }
        
    //--------------------------------------------------------------------------------------------------

    public static bool HasCoincidentVertices(TopoDS_Edge edge1, TopoDS_Edge edge2, double precision=0.0001)
    {
        var vertices1 = edge1.Vertices();
        var vertices2 = edge2.Vertices();
        Debug.Assert(vertices1.Count == 2 && vertices2.Count == 2);

        var p10 = vertices1[0].Pnt();
        var p11 = vertices1[1].Pnt();
        var p20 = vertices2[0].Pnt();
        var p21 = vertices2[1].Pnt();

        if (p10.Distance(p20) < precision)
        {
            return p11.Distance(p21) < precision;
        }
        else
        {
            return p10.Distance(p21) < precision && p11.Distance(p20) < precision;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static bool SetContinuity(TopoDS_Shape shape, TopoDS_Edge edge, GeomAbs_Shape newContinuity)
    {
        var (face1, face2) = FindAdjacentFaces(shape, edge);
        if (face1 == null || face2 == null)
        {
            return false;
        }
        var builder = new BRep_Builder();
        builder.Continuity(edge, face1, face2, newContinuity);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static Pnt GetCenter(TopoDS_Edge edge)
    {
        var adaptor = edge.Adaptor();
        var u1 = adaptor.FirstParameter();
        var u2 = adaptor.LastParameter();
        Pnt location = default;
        adaptor.D0(u1.Lerp(u2, 0.5), ref location);
        return location;
    }

    //--------------------------------------------------------------------------------------------------
        
    public static void GetCenter(TopoDS_Edge edge, out Pnt location, out Vec tangent)
    {
        var adaptor = edge.Adaptor();
        var u1 = adaptor.FirstParameter();
        var u2 = adaptor.LastParameter();
        location = default;
        tangent = default;
        adaptor.D1(u1.Lerp(u2, 0.5), ref location, ref tangent);
    }

    //--------------------------------------------------------------------------------------------------

    public static double FindEdgeParameter(TopoDS_Edge edge, Ax1 axis)
    {
        // Calculate parameter on the edge
        double umin = 0, umax = 0;
        var curve = BRep_Tool.Curve(edge, ref umin, ref umax);
        if (curve != null)
        {
            var extrema = new GeomAPI_ExtremaCurveCurve(curve, new Geom_Line(axis));
            if (extrema.NbExtrema() > 0)
            {
                double param1 = 0, param2 = 0;
                extrema.LowerDistanceParameters(ref param1, ref param2);
                return param1;
            }
        }

        var adaptorEdge = edge.Adaptor();
        return (adaptorEdge.FirstParameter() + adaptorEdge.LastParameter()) * 0.5;
    }

    //--------------------------------------------------------------------------------------------------

}