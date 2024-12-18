using System;
using System.Collections.Generic;
using System.Linq;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Core.Geom;

public static class FaceAlgo
{
    public static bool GetPlaneFromFace(TopoDS_Face face, out Pln plane)
    {
        var surfaceAdaptor = new BRepAdaptor_Surface(face);
        if (surfaceAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Plane)
        {
            plane = new Pln();
            return false;
        }

        plane = surfaceAdaptor.Plane();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool GetCenteredPlaneFromFace(Shape shape, int faceIndex, bool localSpace, out Pln plane)
    {
        var occShape = localSpace ? shape.GetBRep() : shape.GetTransformedBRep();
        if (occShape == null)
        {
            Messages.Error("Shape cannot be made, face parameters not available.");
            plane = Pln.XOY;
            return false;
        }

        var faces = occShape.Faces(true);
        if (faces.Count <= faceIndex)
        {
            Messages.Error("Shape has less faces than required face index.");
            plane = Pln.XOY;
            return false;
        }

        return GetCenteredPlaneFromFace(faces[faceIndex], out plane);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool GetCenteredPlaneFromFace(TopoDS_Face face, out Pln plane)
    {
        var brepAdaptor = new BRepAdaptor_Surface(face, true);
        if (brepAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Plane)
        {
            Messages.Error("Selected face is not a plane type surface.");
            plane = Pln.XOY;
            return false;
        }

        double centerU = brepAdaptor.FirstUParameter() + (brepAdaptor.LastUParameter() - brepAdaptor.FirstUParameter()) / 2;
        double centerV = brepAdaptor.FirstVParameter() + (brepAdaptor.LastVParameter() - brepAdaptor.FirstVParameter()) / 2;
        var centerPnt = brepAdaptor.Value(centerU, centerV);

        var pos = brepAdaptor.Plane().Position;
        var dir = brepAdaptor.Plane().Position.Direction;
        if (face.Orientation() == TopAbs_Orientation.REVERSED)
            dir.Reverse();
        if(pos.Direction.DotCross(pos.XDirection, pos.YDirection) < 0)
            dir.Reverse();

        plane = new Pln(centerPnt, dir);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static Dictionary<TopoDS_Face, TopoDS_Edge> FindConnectedFaces(TopoDS_Shape shape, TopoDS_Face face)
    {
        var list = new Dictionary<TopoDS_Face, TopoDS_Edge>();

        // Get map of all faces with their ancestors
        var faceMap = new TopTools_IndexedDataMapOfShapeListOfShape(50);
        TopExp.MapShapesAndAncestors(shape, TopAbs_ShapeEnum.EDGE, TopAbs_ShapeEnum.FACE, faceMap);

        foreach (var edge in face.Edges())
        {
            var faceList = faceMap.FindFromKey(edge).ToList();
            foreach (var connectedFace in faceList)
            {
                if(connectedFace.IsSame(face))
                    continue;

                if(list.Keys.Any(f => connectedFace.IsSame(f)))
                    continue;

                list.Add(connectedFace.ToFace(), edge);
            }
        }

        return list;
    }

    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Face FindConnectedFace(TopoDS_Shape shape, TopoDS_Face face, TopoDS_Edge sharedEdge)
    {
        // Get map of all faces with their ancestors
        var faceMap = new TopTools_IndexedDataMapOfShapeListOfShape(50);
        TopExp.MapShapesAndAncestors(shape, TopAbs_ShapeEnum.EDGE, TopAbs_ShapeEnum.FACE, faceMap);

        foreach (var edge in face.Edges())
        {
            if (edge.IsSame(sharedEdge))
            {
                var faceList = faceMap.FindFromKey(edge).ToList();
                foreach (var connectedFace in faceList)
                {
                    if (connectedFace.IsSame(face))
                        continue;

                    return connectedFace.ToFace();
                }
            }
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool GetPlaneOfFaces(TopoDS_Shape shape, out Pln plane)
    {
        plane = Pln.XOY;
        var faces = shape.Faces();
        if (faces.Count == 0)
        {
            Messages.Error("Cannot get plane of faces, shape doesn't have faces.");
            return false;
        }

        bool havePlane = false;
        foreach (var face in faces)
        {
            var brepAdaptor = new BRepAdaptor_Surface(face, true);
            if (brepAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Plane)
            {
                Messages.Error("Cannot get plane of faces, shape has faces which are not plane.");
                return false;
            }

            if (havePlane)
            {
                if (!plane.Position.IsCoplanar(brepAdaptor.Plane().Position, 0.00001, 0.00001))
                {
                    Messages.Error("Cannot get plane of faces, not all faces are coplanar.");
                    return false;
                }
            }
            else
            {
                plane = brepAdaptor.Plane();
                havePlane = true;
            }
        }

        return havePlane;
    }

    //--------------------------------------------------------------------------------------------------

    public static Ax1 GetFaceCenterNormal(TopoDS_Face face)
    {
        double umin = 0, umax = 0, vmin = 0, vmax = 0;
        BRepTools.UVBounds(face, ref umin, ref umax, ref vmin, ref vmax);

        var props = new BRepGProp_Face(face);
        Pnt position = new Pnt();
        Vec normal = new Vec();
        props.Normal((umin+umax)/2.0, (vmin+vmax)/2.0, ref position, ref normal );

        return new Ax1(position, normal.ToDir());
    }

    //--------------------------------------------------------------------------------------------------

    public static bool GetFaceNormal(TopoDS_Face face, Pnt location, out Dir normal)
    {
        normal = Dir.DX;

        GeomAPI_ProjectPointOnSurf proj = new(location, face.Surface());
        if(proj.NbPoints() < 1)
            return false;

        double u=0, v=0;
        proj.Parameters(1, ref u, ref v);
        Pnt centerPoint = Pnt.Origin;
        Vec faceNormal = Vec.Zero;
        new BRepGProp_Face(face).Normal(u, v, ref centerPoint, ref faceNormal);
        normal = faceNormal.ToDir();
        return true;
    }

    //--------------------------------------------------------------------------------------------------
    /// <summary>
    /// Searches for the face of a shape, and find the parallel face, both by area comparison
    /// </summary>
    public static (TopoDS_Face face, Pln? plane, TopoDS_Face opFace, Pln? opPlane) FindFaceByAreaSize(TopoDS_Shape shape, Func<double, double, bool> comparer)
    {
        TopoDS_Face foundFace = null;
        Pln? foundPlane = null;
        TopoDS_Face opFace = null;
        Pln? opPlane = null;

        // Find the longest face
        double faceArea = Double.NaN;
        var faceInfos = new List<(TopoDS_Face face, double area, Pln plane)>();
        var faces = shape.Faces();
        foreach (var face in faces)
        {
            var brepAdaptor = new BRepAdaptor_Surface(face);
            if (brepAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Plane)
                continue;

            var area = face.Area();
            var plane = brepAdaptor.Plane();
            if (face.Orientation() == TopAbs_Orientation.REVERSED)
            {
                plane.Position.ZReverse();
            }
            faceInfos.Add((face, area, plane));

            if (foundFace != null && foundFace.IsSame(face))
            {
                // Same edge with another orientation
                if (foundFace.Orientation() == TopAbs_Orientation.REVERSED
                    && face.Orientation() == TopAbs_Orientation.FORWARD)
                {
                    // Prefer forward edges
                    foundFace = face;
                }
                continue;
            }

            if (foundFace == null || comparer(area, faceArea))
            {
                foundFace = face;
                faceArea = area;
                foundPlane = plane;
            }
        }

        if (foundPlane != null)
        {
            // Find opposite edge
            faceArea = Double.NaN;
            foreach (var fi in faceInfos)
            {
                if (ReferenceEquals(fi.face, foundFace))
                    continue;
                if(!fi.plane.Axis.IsParallel(foundPlane.Value.Axis, 0.00001))
                    continue;

                if (opFace == null || comparer(fi.area, faceArea))
                {
                    opFace = fi.face;
                    faceArea = fi.area;
                    opPlane = fi.plane;
                }
            }
        }
        return (foundFace, foundPlane, opFace, opPlane);
    }

    //--------------------------------------------------------------------------------------------------
        
    /*
     * The start face is a face which is parallel to the base plane of the shape (X/Y plane).
     * Take the face with the shortest distance to the plane. This should work for 99%.
     */
    public static TopoDS_Face FindFaceNearestToPlane(TopoDS_Shape sourceShape, Pln plane)
    {
        if(sourceShape == null)
            return null;

        var faces = sourceShape.Faces();
        TopoDS_Face bestMatch = null;
        double bestDistance = Double.MaxValue;

        foreach (var face in faces)
        {
            if (!GetPlaneFromFace(face, out var facePlane))
                continue;

            if (!facePlane.Axis.IsParallel(plane.Axis, 0.01))
                continue;

            var dist = facePlane.SquareDistance(plane);
            if (dist >= bestDistance)
                continue;

            bestMatch = face;
            bestDistance = dist;
        }
        return bestMatch;
    }

    //--------------------------------------------------------------------------------------------------

    public enum FaceDistanceMethod
    {
        UseNormalCenter,
        UseFacePlane
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Find the opposite face to the given reference face which satisfies the distance requirement.
    /// </summary>
    public static TopoDS_Face FindOppositeFace(TopoDS_Shape sourceShape, TopoDS_Face refFace, bool farthest=false, 
                                               FaceDistanceMethod distanceMethod=FaceDistanceMethod.UseNormalCenter,
                                               double angularTolerance=0.01)
    {
        if(sourceShape == null || refFace == null)
            return null;

        Pln refPlane = new Pln();
        if (distanceMethod == FaceDistanceMethod.UseFacePlane)
        {
            if (!GetPlaneFromFace(refFace, out refPlane))
                return null;
        }

        var refNormal = GetFaceCenterNormal(refFace);

        // Iterate faces
        var faces = sourceShape.Faces();
        TopoDS_Face bestMatch = null;
        double bestDistance = farthest ? Double.MinValue : Double.MaxValue;

        foreach (var face in faces)
        {
            if (face.IsEqual(refFace))
                continue;

            var faceNormal = GetFaceCenterNormal(face);
            if (!faceNormal.IsOpposite(refNormal, angularTolerance))
                continue;

            double dist = 0;
            switch (distanceMethod)
            {
                case FaceDistanceMethod.UseNormalCenter:
                    dist = faceNormal.Location.SquareDistance(refNormal.Location);
                    break;
                case FaceDistanceMethod.UseFacePlane:
                    if (!GetPlaneFromFace(face, out var facePlane))
                        continue;
                    if (refPlane.Axis.IsParallel(facePlane.Axis, gp.Resolution))
                    {
                        dist = facePlane.Distance(refPlane);
                    }
                    else
                    {
                        // Faceplane is not exact parallel, so we need to equalize orientation
                        var rotatedPlane = new Pln(facePlane.Location, refPlane.Axis.Direction);
                        dist = rotatedPlane.Distance(refPlane);
                    }

                    break;
                default:
                    throw new ArgumentOutOfRangeException(nameof(distanceMethod), distanceMethod, null);
            }
            if (farthest ? (dist <= bestDistance) : (dist >= bestDistance))
                continue;

            bestMatch = face;
            bestDistance = dist;
        }

        return bestMatch;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Find the vertex which satisfies the distance requirement. The distance is calculated using the shortest
    /// distance between the selected distance method of the face and the vertex position.
    /// </summary>
    /// <returns>The position of the vertex.</returns>
    public static Pnt? FindOppositeVertex(TopoDS_Shape sourceShape, TopoDS_Face refFace, bool farthest = false,
                                           FaceDistanceMethod distanceMethod = FaceDistanceMethod.UseNormalCenter,
                                           double angularTolerance = 0.01)
    {
        if (sourceShape == null || refFace == null)
            return null;

        Pln refPlane = new Pln();
        if (distanceMethod == FaceDistanceMethod.UseFacePlane)
        {
            if (!GetPlaneFromFace(refFace, out refPlane))
                return null;
        }

        var refNormal = GetFaceCenterNormal(refFace);

        // Iterate vertices
        var faceVertices = refFace.Vertices();
        var vertices = sourceShape.Vertices();
        Pnt? bestMatch = null;
        double bestDistance = farthest ? Double.MinValue : Double.MaxValue;

        foreach (var vertex in vertices)
        {
            if (faceVertices.ContainsSame(vertex))
                continue;

            Pnt position = vertex.Pnt();
            double dist = 0;
            switch (distanceMethod)
            {
                case FaceDistanceMethod.UseNormalCenter:
                    dist = position.SquareDistance(refNormal.Location);
                    break;
                case FaceDistanceMethod.UseFacePlane:
                    dist = refPlane.Distance(position);
                    break;
                default:
                    throw new ArgumentOutOfRangeException(nameof(distanceMethod), distanceMethod, null);
            }
            if (farthest ? (dist <= bestDistance) : (dist >= bestDistance))
                continue;

            bestMatch = position;
            bestDistance = dist;
        }

        return bestMatch;
    }

    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Edge FindSharedEdge(TopoDS_Face face1, TopoDS_Face face2)
    {
        var edges1 = face1.Edges();
        var edges2 = face2.Edges();

        return edges1.FirstOrDefault(edge => edges2.ContainsSame(edge));
    }
}