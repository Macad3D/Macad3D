using Macad.Common;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Occt;
using ModelContextProtocol;
using ModelContextProtocol.Server;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Threading.Tasks;

namespace Macad.Mcp;

public class TopologyTools : ToolsBase
{
    const string _BodyDescription = "The body, referenced by its guid or its unique name. Its current (topmost) shape is inspected.";
    const string _BoxMinDescription = "Optional lower corner [x, y, z] of a world-space box (mm). Use large numbers to leave an axis open.";
    const string _BoxMaxDescription = "Optional upper corner [x, y, z] of a world-space box (mm). Use large numbers to leave an axis open.";

    //--------------------------------------------------------------------------------------------------

    #region Result structures

    public sealed record FaceInfo(int Index, string Type, double Area, double[] Center, double[]? Normal,
                                  double[]? AxisLocation, double[]? AxisDirection, double? Radius,
                                  BoundingBoxInfo? BoundingBox, int[] Edges);

    public sealed record EdgeInfo(int Index, string Type, double Length, double[] Start, double[] End, double[] Midpoint,
                                  double[]? Direction, double[]? Center, double[]? Axis, double? Radius, int[] Faces);

    public sealed record MeasureResult(string Guid, string Name, string? Shape, string? ShapeType, BoundingBoxInfo? BoundingBox,
                                       double? Volume, double? Area, double[]? CenterOfMass, int Solids, int Faces, int Edges);

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region Tools

    [McpServerTool(Name = "list_faces", ReadOnly = true)]
    [Description("Lists the faces of a body's current shape with their index and geometry in world coordinates (mm): "
                 + "surface type (Plane, Cylinder, Cone, Sphere, Torus, BSplineSurface, ...), area, center, outward normal (planes), "
                 + "axis and radius (cylinders, cones, spheres, tori), bounding box and the indices of their edges. "
                 + "Filters are combined; omitted filters match everything. "
                 + "Indices stay the same as long as the body's shape is not changed and are used by tools working on faces.")]
    public Task<FaceInfo[]> ListFaces(
        [Description(_BodyDescription)] string body,
        [Description("Only faces of this surface type, e.g. 'Plane' or 'Cylinder'. Optional.")] string? type = null,
        [Description("Only planar faces whose outward normal points in this direction [x, y, z] (within 1 degree). Optional.")] double[]? normal = null,
        [Description("Only faces with a radius of at least this value (mm). Optional.")] double? minRadius = null,
        [Description("Only faces with a radius of at most this value (mm). Optional.")] double? maxRadius = null,
        [Description(_BoxMinDescription + " Only faces whose center is inside the box.")] double[]? boxMin = null,
        [Description(_BoxMaxDescription)] double[]? boxMax = null)
        => Invoke(() =>
        {
            var (_, brep) = _GetBRep(body);
            var normalDir = ToDir(normal, nameof(normal));
            var box = _ToBox(boxMin, boxMax);
            _CheckRadiusRange(minRadius, maxRadius);

            var edges = brep.Edges();
            return brep.Faces()
                       .Select((face, index) => _DescribeFace(face, index, edges))
                       .Where(f => type == null || string.Equals(f.Type, type.Trim(), StringComparison.OrdinalIgnoreCase))
                       .Where(f => normalDir == null || (f.Normal != null && _ToDir(f.Normal).IsParallel(normalDir.Value, 1.0.ToRad())
                                                         && _ToDir(f.Normal).Angle(normalDir.Value) < Math.PI / 2))
                       .Where(f => _InRadiusRange(f.Radius, minRadius, maxRadius))
                       .Where(f => box == null || _IsInside(f.Center, box.Value))
                       .ToArray();
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "list_edges", ReadOnly = true)]
    [Description("Lists the edges of a body's current shape with their index and geometry in world coordinates (mm): "
                 + "curve type (Line, Circle, Ellipse, BSplineCurve, ...), length, start, end and midpoint, direction (lines), "
                 + "center, axis and radius (circles) and the indices of the faces they bound. "
                 + "Filters are combined; omitted filters match everything. "
                 + "Indices stay the same as long as the body's shape is not changed and are used by fillet and chamfer.")]
    public Task<EdgeInfo[]> ListEdges(
        [Description(_BodyDescription)] string body,
        [Description("Only edges of this curve type, e.g. 'Line' or 'Circle'. Optional.")] string? type = null,
        [Description("Only lines parallel to this direction [x, y, z], or circles whose axis is parallel to it (within 1 degree, either sense). Optional.")] double[]? direction = null,
        [Description("Only edges with a radius of at least this value (mm). Optional.")] double? minRadius = null,
        [Description("Only edges with a radius of at most this value (mm). Optional.")] double? maxRadius = null,
        [Description(_BoxMinDescription + " Only edges lying completely inside the box.")] double[]? boxMin = null,
        [Description(_BoxMaxDescription)] double[]? boxMax = null,
        [Description("Only edges bounding the face with this index (from list_faces). Optional.")] int? face = null)
        => Invoke(() =>
        {
            var (_, brep) = _GetBRep(body);
            var directionDir = ToDir(direction, nameof(direction));
            var box = _ToBox(boxMin, boxMax);
            _CheckRadiusRange(minRadius, maxRadius);

            var faces = brep.Faces();
            if (face != null && (face < 0 || face >= faces.Count))
            {
                throw new McpException($"'face' must be a face index between 0 and {faces.Count - 1} (got {face}).");
            }

            return brep.Edges()
                       .Select((edge, index) => _DescribeEdge(edge, index, faces))
                       .Where(e => type == null || string.Equals(e.Type, type.Trim(), StringComparison.OrdinalIgnoreCase))
                       .Where(e => directionDir == null
                                   || (e.Direction ?? e.Axis) is { } dir && _ToDir(dir).IsParallel(directionDir.Value, 1.0.ToRad()))
                       .Where(e => _InRadiusRange(e.Radius, minRadius, maxRadius))
                       .Where(e => box == null || (_IsInside(e.Start, box.Value) && _IsInside(e.End, box.Value) && _IsInside(e.Midpoint, box.Value)))
                       .Where(e => face == null || e.Faces.Contains(face.Value))
                       .ToArray();
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "measure", ReadOnly = true)]
    [Description("Measures a body's current shape in world coordinates (mm): bounding box, volume and surface area (solids), "
                 + "center of mass and the number of solids, faces and edges.")]
    public Task<MeasureResult> Measure(
        [Description(_BodyDescription)] string body)
        => Invoke(() =>
        {
            var (target, brep) = _GetBRep(body);
            bool isSolid = target.Shape.ShapeType == Core.Shapes.ShapeType.Solid;
            double[]? center = null;
            if (brep.Faces().Count > 0)
            {
                center = _ToArray(brep.CenterOfMass());
            }

            return new MeasureResult(target.Guid.ToString(), target.Name, target.Shape.GetType().Name, target.Shape.ShapeType.ToString(),
                                     BoundingBoxInfo.From(brep), isSolid ? brep.Volume() : null, isSolid ? brep.Area() : null,
                                     center, brep.Solids().Count, brep.Faces().Count, brep.Edges().Count);
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Descriptors

    static FaceInfo _DescribeFace(TopoDS_Face face, int index, List<TopoDS_Edge> allEdges)
    {
        var adaptor = new BRepAdaptor_Surface(face);
        var surfaceType = adaptor.GetSurfaceType();

        double[]? normal = null, axisLocation = null, axisDirection = null;
        double? radius = null;
        switch (surfaceType)
        {
            case GeomAbs_SurfaceType.Plane:
                normal = _ToArray(FaceAlgo.GetFaceCenterNormal(face).Direction);
                break;
            case GeomAbs_SurfaceType.Cylinder:
                var cylinder = adaptor.Cylinder();
                (axisLocation, axisDirection, radius) = (_ToArray(cylinder.Axis().Location), _ToArray(cylinder.Axis().Direction), cylinder.Radius());
                break;
            case GeomAbs_SurfaceType.Cone:
                var cone = adaptor.Cone();
                (axisLocation, axisDirection, radius) = (_ToArray(cone.Axis().Location), _ToArray(cone.Axis().Direction), cone.RefRadius());
                break;
            case GeomAbs_SurfaceType.Sphere:
                var sphere = adaptor.Sphere();
                (axisLocation, radius) = (_ToArray(sphere.Location()), sphere.Radius());
                break;
            case GeomAbs_SurfaceType.Torus:
                var torus = adaptor.Torus();
                (axisLocation, axisDirection, radius) = (_ToArray(torus.Axis().Location), _ToArray(torus.Axis().Direction), torus.MajorRadius());
                break;
        }

        var edges = face.Edges().Select(edge => allEdges.IndexOfSame(edge)).Where(i => i >= 0).Distinct().Order().ToArray();
        return new FaceInfo(index, surfaceType.ToString(), _Round(face.Area()), _ToArray(face.CenterOfMass()), normal,
                            axisLocation, axisDirection, radius.HasValue ? _Round(radius.Value) : null,
                            BoundingBoxInfo.From(face), edges);
    }

    //--------------------------------------------------------------------------------------------------

    static EdgeInfo _DescribeEdge(TopoDS_Edge edge, int index, List<TopoDS_Face> allFaces)
    {
        var adaptor = new BRepAdaptor_Curve(edge);
        double first = adaptor.FirstParameter(), last = adaptor.LastParameter();
        var start = adaptor.Value(first);
        var end = adaptor.Value(last);
        var mid = adaptor.Value((first + last) / 2);
        if (edge.Orientation() == TopAbs_Orientation.REVERSED)
        {
            (start, end) = (end, start);
        }

        bool degenerated = BRep_Tool.Degenerated(edge);
        var curveType = adaptor.GetCurveType();
        double[]? direction = null, center = null, axis = null;
        double? radius = null;
        if (!degenerated)
        {
            switch (curveType)
            {
                case GeomAbs_CurveType.Line:
                    direction = _ToArray(adaptor.Line().Direction());
                    break;
                case GeomAbs_CurveType.Circle:
                    var circle = adaptor.Circle();
                    (center, axis, radius) = (_ToArray(circle.Location()), _ToArray(circle.Axis().Direction), _Round(circle.Radius()));
                    break;
            }
        }

        var props = new GProp_GProps();
        BRepGProp.LinearProperties(edge, props, false, false);

        var faces = allFaces.Select((face, i) => (face, i))
                            .Where(t => t.face.Edges().IndexOfSame(edge) >= 0)
                            .Select(t => t.i)
                            .ToArray();

        return new EdgeInfo(index, degenerated ? "Degenerated" : curveType.ToString(), _Round(props.Mass()),
                            _ToArray(start), _ToArray(end), _ToArray(mid), direction, center, axis, radius, faces);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Helper

    static (Body body, TopoDS_Shape brep) _GetBRep(string reference)
    {
        var body = ResolveBody(reference);
        var brep = body.Shape?.GetTransformedBRep()
                   ?? throw new McpException($"The shape of body '{body.Name}' could not be created, it has no topology to inspect.");
        return (body, brep);
    }

    //--------------------------------------------------------------------------------------------------

    static (Pnt min, Pnt max)? _ToBox(double[]? boxMin, double[]? boxMax)
    {
        if (boxMin == null && boxMax == null)
        {
            return null;
        }
        if (boxMin == null || boxMax == null)
        {
            throw new McpException("'boxMin' and 'boxMax' must be given together.");
        }
        var min = ToVec(boxMin, nameof(boxMin), Vec.Zero);
        var max = ToVec(boxMax, nameof(boxMax), Vec.Zero);
        if (min.X > max.X || min.Y > max.Y || min.Z > max.Z)
        {
            throw new McpException("Each coordinate of 'boxMin' must not be greater than the one of 'boxMax'.");
        }
        return (min.ToPnt(), max.ToPnt());
    }

    //--------------------------------------------------------------------------------------------------

    const double _Tolerance = 1e-6;

    static bool _IsInside(double[] point, (Pnt min, Pnt max) box)
    {
        return point[0] >= box.min.X - _Tolerance && point[0] <= box.max.X + _Tolerance
               && point[1] >= box.min.Y - _Tolerance && point[1] <= box.max.Y + _Tolerance
               && point[2] >= box.min.Z - _Tolerance && point[2] <= box.max.Z + _Tolerance;
    }

    //--------------------------------------------------------------------------------------------------

    static void _CheckRadiusRange(double? minRadius, double? maxRadius)
    {
        if (minRadius != null) RequireFinite(minRadius.Value, nameof(minRadius));
        if (maxRadius != null) RequireFinite(maxRadius.Value, nameof(maxRadius));
    }

    //--------------------------------------------------------------------------------------------------

    static bool _InRadiusRange(double? radius, double? minRadius, double? maxRadius)
    {
        if (minRadius == null && maxRadius == null)
        {
            return true;
        }
        return radius != null
               && (minRadius == null || radius >= minRadius - _Tolerance)
               && (maxRadius == null || radius <= maxRadius + _Tolerance);
    }

    //--------------------------------------------------------------------------------------------------

    static double _Round(double value) => Math.Abs(value) < 1e-9 ? 0 : Math.Round(value, 9);

    static double[] _ToArray(Pnt pnt) => [_Round(pnt.X), _Round(pnt.Y), _Round(pnt.Z)];

    static double[] _ToArray(Dir dir) => [_Round(dir.X), _Round(dir.Y), _Round(dir.Z)];

    static Dir _ToDir(double[] coords) => new(coords[0], coords[1], coords[2]);

    //--------------------------------------------------------------------------------------------------

    #endregion
}
