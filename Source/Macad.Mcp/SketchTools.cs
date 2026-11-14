using Macad.Common;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
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

public class SketchTools : ToolsBase
{
    #region Result structures

    public sealed record PlaneInfo(double[] Origin, double[] Normal, double[] XDirection, double[] YDirection)
    {
        public static PlaneInfo From(Ax3 ax3)
        {
            return new([ax3.Location.X, ax3.Location.Y, ax3.Location.Z],
                       [ax3.Direction.X, ax3.Direction.Y, ax3.Direction.Z],
                       [ax3.XDirection.X, ax3.XDirection.Y, ax3.XDirection.Z],
                       [ax3.YDirection.X, ax3.YDirection.Y, ax3.YDirection.Z]);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public sealed record SketchInfo(string Guid, string Name, PlaneInfo Plane);

    //--------------------------------------------------------------------------------------------------

    public sealed record AddedElements(int[] Segments, int[] Points);

    //--------------------------------------------------------------------------------------------------

    public sealed record PointInfo(int Index, double X, double Y);

    public sealed record SegmentInfo(int Index, string Type, int[] Points, bool Auxiliary);

    public sealed record ConstraintInfo(int Index, string Type, int[] Points, int[] Segments, double? Parameter);

    public sealed record SketchDetails(string Guid, string Name, PlaneInfo Plane, PointInfo[] Points, SegmentInfo[] Segments,
                                       ConstraintInfo[] Constraints, int ClosedWires, int OpenWires, bool ConstraintSolverFailed);

    //--------------------------------------------------------------------------------------------------

    #endregion

    const string _SketchDescription = "The body containing the sketch, referenced by its guid or its unique name.";

    //--------------------------------------------------------------------------------------------------

    #region Create

    [McpServerTool(Name = "create_sketch")]
    [Description("Creates a body with an empty sketch on a plane. Sketch coordinates are 2D (x, y) in the plane, in mm. "
                 + "Standard planes: 'XY' (x→world X, y→world Y, normal +Z), "
                 + "'XZ' (x→world X, y→world Z, normal -Y, the front view), "
                 + "'YZ' (x→world Y, y→world Z, normal +X, the side view). "
                 + "'custom' requires 'normal' and optionally 'xDirection'. "
                 + "'face' places the sketch on a planar face of a body, given by 'body' and 'face' (index from list_faces): "
                 + "the normal points out of the body, the origin is the face center or 'origin' projected onto the face, "
                 + "'xDirection' (optional) is projected onto the face. The sketch is a new, independent body.")]
    public Task<SketchInfo> CreateSketch(
        [Description("'XY', 'XZ', 'YZ', 'custom' or 'face'. Default 'XY'.")] string? plane = "XY",
        [Description("Moves the plane along its normal (mm). Default 0.")] double offset = 0,
        [Description("Optional plane origin in world coordinates [x, y, z] (mm). Default [0, 0, 0], or the face center for 'face'.")] double[]? origin = null,
        [Description("Plane normal [x, y, z], only for 'custom'.")] double[]? normal = null,
        [Description("Direction of the sketch x axis [x, y, z], only for 'custom' and 'face'. Must not be parallel to the normal. Optional.")] double[]? xDirection = null,
        [Description("Optional name. If omitted or already taken, a unique name is generated.")] string? name = null,
        [Description("For plane 'face': the body owning the face (guid or unique name).")] string? body = null,
        [Description("For plane 'face': the index of a planar face of the body, from list_faces.")] int? face = null)
        => Invoke(() =>
        {
            RequireFinite(offset, nameof(offset));
            plane ??= "XY"; // A client may send null for the default
            bool onFace = plane.Trim().ToUpperInvariant() == "FACE";
            if (!onFace && (body != null || face != null))
            {
                throw new McpException("'body' and 'face' are only allowed with plane 'face'.");
            }

            var ax3 = onFace
                          ? _GetFaceAxes(body, face, origin, ToDir(normal, nameof(normal)), ToDir(xDirection, nameof(xDirection)))
                          : _GetPlaneAxes(plane, ToVec(origin, nameof(origin), Vec.Zero),
                                          ToDir(normal, nameof(normal)), ToDir(xDirection, nameof(xDirection)));
            ax3.Location = ax3.Location.Translated(ax3.Direction.ToVec(offset));

            var sketchBody = Body.Create(Sketch.Create());
            sketchBody.Position = ax3.Location;
            sketchBody.Rotation = new Pln(ax3).Rotation();
            AddBody(sketchBody, name);
            EnsureValid(sketchBody);
            Commit();

            return new SketchInfo(sketchBody.Guid.ToString(), sketchBody.Name, PlaneInfo.From(sketchBody.GetCoordinateSystem()));
        });

    //--------------------------------------------------------------------------------------------------

    static Ax3 _GetFaceAxes(string? bodyReference, int? faceIndex, double[]? origin, Dir? normal, Dir? xDirection)
    {
        if (bodyReference == null || faceIndex == null)
        {
            throw new McpException("Plane 'face' requires 'body' and 'face'.");
        }
        if (normal != null)
        {
            throw new McpException("'normal' is only allowed with plane 'custom', a face defines its own normal.");
        }

        var body = ResolveBody(bodyReference);
        var faces = body.Shape?.GetTransformedBRep()?.Faces()
                    ?? throw new McpException($"The shape of body '{body.Name}' could not be created, it has no faces.");
        if (faceIndex < 0 || faceIndex >= faces.Count)
        {
            throw new McpException($"No face with index {faceIndex} exists, the body '{body.Name}' has {faces.Count} faces (0 to {faces.Count - 1}).");
        }

        var topoFace = faces[faceIndex.Value];
        var adaptor = new BRepAdaptor_Surface(topoFace);
        if (adaptor.GetSurfaceType() != GeomAbs_SurfaceType.Plane)
        {
            throw new McpException($"The face {faceIndex} of body '{body.Name}' is a {adaptor.GetSurfaceType()} surface, "
                                   + "a sketch can only be placed on a planar face.");
        }

        var faceNormal = FaceAlgo.GetFaceCenterNormal(topoFace).Direction;
        var facePlane = new Pln(adaptor.Plane().Location, faceNormal);
        var location = origin == null
                           ? topoFace.CenterOfMass()
                           : _ProjectOnPlane(Pnt.Origin.Translated(ToVec(origin, nameof(origin), Vec.Zero)), facePlane);

        if (xDirection == null)
        {
            return new Ax3(location, faceNormal);
        }
        var projected = xDirection.Value.ToVec() - faceNormal.ToVec() * xDirection.Value.ToVec().Dot(faceNormal.ToVec());
        if (projected.Magnitude() < 1e-6)
        {
            throw new McpException("'xDirection' must not be parallel to the face normal.");
        }
        return new Ax3(location, faceNormal, new Dir(projected));
    }

    //--------------------------------------------------------------------------------------------------

    static Pnt _ProjectOnPlane(Pnt point, Pln plane)
    {
        var normal = plane.Axis.Direction.ToVec();
        var distance = new Vec(plane.Location, point).Dot(normal);
        return point.Translated(normal * -distance);
    }

    //--------------------------------------------------------------------------------------------------

    static Ax3 _GetPlaneAxes(string plane, Vec origin, Dir? normal, Dir? xDirection)
    {
        var location = Pnt.Origin.Translated(origin);
        var planeName = plane?.Trim().ToUpperInvariant();
        if (planeName != "CUSTOM" && (normal != null || xDirection != null))
        {
            throw new McpException("'normal' and 'xDirection' are only allowed with plane 'custom'.");
        }

        switch (planeName)
        {
            case "XY":
                return new Ax3(location, Dir.DZ, Dir.DX);
            case "XZ":
                return new Ax3(location, Dir.DY.Reversed(), Dir.DX);
            case "YZ":
                return new Ax3(location, Dir.DX, Dir.DY);
            case "CUSTOM":
                if (normal == null)
                {
                    throw new McpException("Plane 'custom' requires 'normal'.");
                }
                if (xDirection == null)
                {
                    return new Ax3(location, normal.Value);
                }
                if (xDirection.Value.IsParallel(normal.Value, 1e-6))
                {
                    throw new McpException("'xDirection' must not be parallel to 'normal'.");
                }
                return new Ax3(location, normal.Value, xDirection.Value);
            default:
                throw new McpException($"Unknown plane '{plane}'. Use 'XY', 'XZ', 'YZ', 'custom' or 'face'.");
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Shapes

    [McpServerTool(Name = "sketch_add_circle")]
    [Description("Adds a circle to a sketch. Coordinates in sketch space (mm). Returns the indices of the added segments and points.")]
    public Task<AddedElements> AddCircle(
        [Description(_SketchDescription)] string sketch,
        [Description("Center x (mm).")] double centerX,
        [Description("Center y (mm).")] double centerY,
        [Description("Radius (mm). Must be > 0.")] double radius)
        => _Modify(sketch, builder =>
        {
            RequireFinite(centerX, nameof(centerX));
            RequireFinite(centerY, nameof(centerY));
            RequirePositive(radius, nameof(radius));
            builder.Circle(centerX, centerY, radius);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "sketch_add_rectangle")]
    [Description("Adds an axis-aligned rectangle given by two opposite corners to a sketch. Coordinates in sketch space (mm). "
                 + "Returns the indices of the added segments and points.")]
    public Task<AddedElements> AddRectangle(
        [Description(_SketchDescription)] string sketch,
        [Description("First corner x (mm).")] double x1,
        [Description("First corner y (mm).")] double y1,
        [Description("Opposite corner x (mm).")] double x2,
        [Description("Opposite corner y (mm).")] double y2)
        => _Modify(sketch, builder =>
        {
            RequireFinite(x1, nameof(x1));
            RequireFinite(y1, nameof(y1));
            RequireFinite(x2, nameof(x2));
            RequireFinite(y2, nameof(y2));
            if (Math.Abs(x2 - x1) < 1e-6 || Math.Abs(y2 - y1) < 1e-6)
            {
                throw new McpException("The rectangle must have a width and height greater than 0.");
            }
            builder.Rectangle(x1, y1, x2, y2);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "sketch_add_polygon")]
    [Description("Adds a closed regular polygon to a sketch. Coordinates in sketch space (mm). "
                 + "Returns the indices of the added segments and points.")]
    public Task<AddedElements> AddPolygon(
        [Description(_SketchDescription)] string sketch,
        [Description("Center x (mm).")] double centerX,
        [Description("Center y (mm).")] double centerY,
        [Description("Distance from the center to the corners (mm). Must be > 0.")] double radius,
        [Description("Number of sides. At least 3.")] int sides,
        [Description("Rotation of the first corner from the sketch x axis, counter-clockwise (degrees). Default 0.")] double rotation = 0)
        => _Modify(sketch, builder =>
        {
            RequireFinite(centerX, nameof(centerX));
            RequireFinite(centerY, nameof(centerY));
            RequirePositive(radius, nameof(radius));
            RequireFinite(rotation, nameof(rotation));
            if (sides < 3)
            {
                throw new McpException($"'sides' must be at least 3 (got {sides}).");
            }

            var corners = new (double x, double y)[sides + 1];
            for (int i = 0; i < sides; i++)
            {
                double angle = rotation.ToRad() + 2.0 * Math.PI * i / sides;
                corners[i] = (centerX + radius * Math.Cos(angle), centerY + radius * Math.Sin(angle));
            }
            corners[sides] = corners[0];
            builder.PolyLine(corners);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "sketch_add_ellipse")]
    [Description("Adds an ellipse to a sketch. Coordinates in sketch space (mm). Returns the indices of the added segments and points.")]
    public Task<AddedElements> AddEllipse(
        [Description(_SketchDescription)] string sketch,
        [Description("Center x (mm).")] double centerX,
        [Description("Center y (mm).")] double centerY,
        [Description("Radius along the (rotated) x axis (mm). Must be > 0.")] double radiusX,
        [Description("Radius along the (rotated) y axis (mm). Must be > 0.")] double radiusY,
        [Description("Rotation counter-clockwise from the sketch x axis (degrees). Default 0.")] double rotation = 0)
        => _Modify(sketch, builder =>
        {
            RequireFinite(centerX, nameof(centerX));
            RequireFinite(centerY, nameof(centerY));
            RequirePositive(radiusX, nameof(radiusX));
            RequirePositive(radiusY, nameof(radiusY));
            RequireFinite(rotation, nameof(rotation));
            builder.Ellipse(centerX, centerY, radiusX, radiusY, rotation);
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Path

    public sealed class PathSegment
    {
        [Description("Segment type: 'line', 'arc', 'bezier' or 'elliptical_arc'.")]
        public string Type { get; init; } = "";

        [Description("End point [x, y] of the segment (mm). The start point is the end of the previous segment.")]
        public double[] To { get; init; } = [];

        [Description("arc: a point [x, y] on the arc between start and end. Alternative to 'center'.")]
        public double[]? Through { get; init; }

        [Description("arc, elliptical_arc: center point [x, y]. For arcs, start and end must have the same distance to the center.")]
        public double[]? Center { get; init; }

        [Description("arc (with 'center'), elliptical_arc: true to go clockwise from start to end. Default false (counter-clockwise).")]
        public bool Clockwise { get; init; }

        [Description("bezier: control point [x, y]. Quadratic curve if 'control2' is omitted.")]
        public double[]? Control { get; init; }

        [Description("bezier: second control point [x, y] for a cubic curve.")]
        public double[]? Control2 { get; init; }
    }

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "sketch_add_path")]
    [Description("Adds a connected path of segments to a sketch, e.g. a profile. Coordinates in sketch space (mm). "
                 + "Each segment starts where the previous one ends. Segment types: "
                 + "'line' {to}; 'arc' {to, through} or {to, center, clockwise}; 'bezier' {to, control[, control2]}; "
                 + "'elliptical_arc' {to, center, clockwise}. "
                 + "If 'closed' is true, the path is closed back to the start, adding a line if the last point is not the start. "
                 + "Returns the indices of the added segments and points.")]
    public Task<AddedElements> AddPath(
        [Description(_SketchDescription)] string sketch,
        [Description("Start point [x, y] (mm).")] double[] start,
        [Description("The segments of the path, in order.")] PathSegment[] segments,
        [Description("True to close the path back to the start point. Default false.")] bool closed = false)
        => _Modify(sketch, builder =>
        {
            var startPoint = _ToPnt2d(start, "start");
            if (segments == null || segments.Length == 0)
            {
                throw new McpException("The path needs at least one segment.");
            }

            builder.StartPath(startPoint.X, startPoint.Y);
            var current = startPoint;
            for (int i = 0; i < segments.Length; i++)
            {
                current = _AddPathSegment(builder, segments[i], i, current);
            }

            if (closed)
            {
                if (segments.Length == 1 && segments[0].Type?.Trim().ToLowerInvariant() == "line")
                {
                    throw new McpException("A closed path needs more than one line.");
                }
                if (!current.IsEqual(startPoint, _Tolerance))
                {
                    builder.LineTo(startPoint.X, startPoint.Y);
                }
                builder.ClosePath();
            }
            else
            {
                builder.EndPath();
            }
        });

    //--------------------------------------------------------------------------------------------------

    const double _Tolerance = 1e-6;

    //--------------------------------------------------------------------------------------------------

    static Pnt2d _AddPathSegment(SketchBuilder builder, PathSegment segment, int index, Pnt2d current)
    {
        string name = $"segments[{index}]";
        if (segment == null)
        {
            throw new McpException($"{name} is missing.");
        }

        var to = _ToPnt2d(segment.To, $"{name}.to");
        if (to.IsEqual(current, _Tolerance))
        {
            throw new McpException($"{name}: the end point is equal to the start point of the segment.");
        }

        switch (segment.Type?.Trim().ToLowerInvariant())
        {
            case "line":
                builder.LineTo(to.X, to.Y);
                break;

            case "arc":
                var through = _GetArcThroughPoint(segment, name, current, to);
                builder.ArcTo(to.X, to.Y, through.X, through.Y);
                break;

            case "bezier":
                var control = _ToPnt2d(segment.Control, $"{name}.control");
                if (segment.Control2 == null)
                {
                    builder.BezierTo(to.X, to.Y, control.X, control.Y);
                }
                else
                {
                    var control2 = _ToPnt2d(segment.Control2, $"{name}.control2");
                    builder.BezierTo(to.X, to.Y, control.X, control.Y, control2.X, control2.Y);
                }
                break;

            case "elliptical_arc":
                var ellipseCenter = _ToPnt2d(segment.Center, $"{name}.center");
                if (ellipseCenter.IsEqual(current, _Tolerance) || ellipseCenter.IsEqual(to, _Tolerance))
                {
                    throw new McpException($"{name}: the center must differ from the start and end point.");
                }
                builder.EllipticalArcTo(to.X, to.Y, ellipseCenter.X, ellipseCenter.Y, segment.Clockwise);
                break;

            default:
                throw new McpException($"{name}: unknown segment type '{segment.Type}'. Use 'line', 'arc', 'bezier' or 'elliptical_arc'.");
        }

        return to;
    }

    //--------------------------------------------------------------------------------------------------

    static Pnt2d _GetArcThroughPoint(PathSegment segment, string name, Pnt2d start, Pnt2d end)
    {
        if (segment.Through != null)
        {
            if (segment.Center != null)
            {
                throw new McpException($"{name}: specify either 'through' or 'center' for an arc, not both.");
            }

            var through = _ToPnt2d(segment.Through, $"{name}.through");
            var cross = (end.X - start.X) * (through.Y - start.Y) - (end.Y - start.Y) * (through.X - start.X);
            if (Math.Abs(cross) < _Tolerance)
            {
                throw new McpException($"{name}: the 'through' point must not be on the line from start to end.");
            }
            return through;
        }

        if (segment.Center == null)
        {
            throw new McpException($"{name}: an arc needs either 'through' or 'center'.");
        }

        var center = _ToPnt2d(segment.Center, $"{name}.center");
        double radius = center.Distance(start);
        if (radius < _Tolerance || Math.Abs(center.Distance(end) - radius) > 1e-3 * Math.Max(1.0, radius))
        {
            throw new McpException($"{name}: start and end must have the same distance from the center " 
                                   + $"(got {radius:0.####} and {center.Distance(end):0.####}).");
        }

        double startAngle = Math.Atan2(start.Y - center.Y, start.X - center.X);
        double endAngle = Math.Atan2(end.Y - center.Y, end.X - center.X);
        double sweep = endAngle - startAngle;
        if (segment.Clockwise)
        {
            if (sweep >= 0) sweep -= 2 * Math.PI;
        }
        else
        {
            if (sweep <= 0) sweep += 2 * Math.PI;
        }

        double midAngle = startAngle + sweep / 2;
        return new Pnt2d(center.X + radius * Math.Cos(midAngle), center.Y + radius * Math.Sin(midAngle));
    }

    //--------------------------------------------------------------------------------------------------

    static Pnt2d _ToPnt2d(double[]? coords, string parameter)
    {
        if (coords == null || coords.Length != 2 || coords.Any(c => !double.IsFinite(c)))
        {
            throw new McpException($"'{parameter}' must be an array of two finite numbers [x, y].");
        }
        return new Pnt2d(coords[0], coords[1]);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Constraints

    delegate bool _CanCreateConstraint(Sketch sketch, List<int> points, List<int> segments);
    delegate List<SketchConstraint> _CreateConstraint(Sketch sketch, List<int> points, List<int> segments);

    sealed record _ConstraintType(string Name, string Usage, _CanCreateConstraint CanCreate, _CreateConstraint Create, bool HasValue)
    {
        public static _ConstraintType Of<T>(string name, string usage, bool hasValue = false) where T : ISketchConstraintCreator
            => new(name, usage, T.CanCreate, T.Create, hasValue);
    }

    static readonly _ConstraintType[] _ConstraintTypes =
    [
        _ConstraintType.Of<SketchConstraintFixed>("fixed", "points or segments"),
        _ConstraintType.Of<SketchConstraintHorizontal>("horizontal", "line segments"),
        _ConstraintType.Of<SketchConstraintVertical>("vertical", "line segments"),
        _ConstraintType.Of<SketchConstraintLength>("length", "line segments, value = length (mm)", true),
        _ConstraintType.Of<SketchConstraintRadius>("radius", "circle or arc segments, value = radius (mm)", true),
        _ConstraintType.Of<SketchConstraintAngle>("angle", "two line segments, value = angle (degrees)", true),
        _ConstraintType.Of<SketchConstraintHorizontalDistance>("horizontal_distance", "points, value = x coordinate (mm)", true),
        _ConstraintType.Of<SketchConstraintVerticalDistance>("vertical_distance", "points, value = y coordinate (mm)", true),
        _ConstraintType.Of<SketchConstraintParallel>("parallel", "two unconnected line segments"),
        _ConstraintType.Of<SketchConstraintPerpendicular>("perpendicular", "two line segments"),
        _ConstraintType.Of<SketchConstraintTangent>("tangent", "a line and a circle or arc segment"),
        _ConstraintType.Of<SketchConstraintEqual>("equal", "two or more line segments (equal length) or circles (equal radius)"),
        _ConstraintType.Of<SketchConstraintConcentric>("concentric", "two or more circles or arcs"),
        _ConstraintType.Of<SketchConstraintPointOnSegment>("point_on_segment", "points and one line or circle segment"),
        _ConstraintType.Of<SketchConstraintPointOnMidpoint>("point_on_midpoint", "points and one line or circle segment"),
        _ConstraintType.Of<SketchConstraintSmoothCorner>("smooth_corner", "points joining a bezier with a bezier, line or arc"),
    ];

    //--------------------------------------------------------------------------------------------------

    public sealed record ConstraintsAdded(int[] Constraints, PointInfo[] Points);

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "sketch_add_constraint")]
    [Description("Adds a constraint to a sketch and solves the sketch. Elements are referenced by the point and segment "
                 + "indices returned when they were added or by sketch_get_info. Types and the elements they take: "
                 + "fixed (points or segments); horizontal, vertical (line segments); length (lines, value mm); "
                 + "radius (circles or arcs, value mm); angle (two lines, value degrees); "
                 + "horizontal_distance, vertical_distance (points, value = x or y coordinate in mm); "
                 + "parallel (two unconnected lines); perpendicular (two lines); tangent (a line and a circle or arc); "
                 + "equal (lines or circles); concentric (circles or arcs); point_on_segment, point_on_midpoint (points and one line or circle); "
                 + "smooth_corner (points joining a bezier to a bezier, line or arc). "
                 + "Without a value, the current measure is kept. If the sketch cannot be solved, nothing is changed. "
                 + "Returns the indices of the added constraints and all point positions after solving.")]
    public Task<ConstraintsAdded> AddConstraint(
        [Description(_SketchDescription)] string sketch,
        [Description("Constraint type, see the tool description.")] string type,
        [Description("Point indices the constraint applies to. Optional.")] int[]? points = null,
        [Description("Segment indices the constraint applies to. Optional.")] int[]? segments = null,
        [Description("Target value for length, radius, angle, horizontal_distance and vertical_distance. Optional.")] double? value = null)
        => Invoke(() =>
        {
            var body = ResolveBody(sketch);
            var sketchShape = FindSketch(body);
            var constraintType = _FindConstraintType(type);
            var pointList = _CheckIndices(points, sketchShape.Points.Keys, "points", "point");
            var segmentList = _CheckIndices(segments, sketchShape.Segments.Keys, "segments", "segment");

            if (value.HasValue)
            {
                _CheckConstraintValue(constraintType, value.Value);
            }

            if (!constraintType.CanCreate(sketchShape, pointList, segmentList))
            {
                throw new McpException($"A '{constraintType.Name}' constraint cannot be created on the given elements. "
                                       + $"It takes: {constraintType.Usage}. It is also refused if the elements are already "
                                       + "constrained in a conflicting way (e.g. fixed, or already horizontal).");
            }

            var constraints = constraintType.Create(sketchShape, pointList, segmentList);
            if (constraints == null || constraints.Count == 0)
            {
                throw new McpException($"No '{constraintType.Name}' constraint could be created from the current geometry of the given elements.");
            }
            if (value.HasValue)
            {
                constraints.ForEach(c => c.Parameter = value.Value);
            }

            sketchShape.SaveUndo(Sketch.ElementType.All);
            var (_, _, indices) = sketchShape.AddElements(null, null, null, constraints);

            // The solver treats point distances as unsigned and keeps the point on its side of the axis,
            // so place the point on the requested side first.
            List<int>? placedPoints = null;
            if (value.HasValue && constraintType.Name is "horizontal_distance" or "vertical_distance")
            {
                foreach (var pointIndex in pointList)
                {
                    var point = sketchShape.Points[pointIndex];
                    sketchShape.SetPoint(pointIndex, constraintType.Name == "horizontal_distance"
                                                         ? new Pnt2d(value.Value, point.Y)
                                                         : new Pnt2d(point.X, value.Value));
                }
                placedPoints = pointList;
            }
            _Solve(sketchShape, placedPoints);

            EnsureValid(body);
            Commit();

            return new ConstraintsAdded(indices.ToArray(), _GetPoints(sketchShape));
        });

    //--------------------------------------------------------------------------------------------------

    static _ConstraintType _FindConstraintType(string type)
    {
        var normalized = type?.Trim().Replace("_", "").ToLowerInvariant();
        return _ConstraintTypes.FirstOrDefault(t => t.Name.Replace("_", "") == normalized)
               ?? throw new McpException($"Unknown constraint type '{type}'. Use one of: {string.Join(", ", _ConstraintTypes.Select(t => t.Name))}.");
    }

    //--------------------------------------------------------------------------------------------------

    static void _CheckConstraintValue(_ConstraintType constraintType, double value)
    {
        if (!constraintType.HasValue)
        {
            throw new McpException($"A '{constraintType.Name}' constraint takes no value.");
        }
        RequireFinite(value, "value");
        switch (constraintType.Name)
        {
            case "length":
            case "radius":
                RequirePositive(value, "value");
                break;
            case "angle":
                if (value <= 0 || value >= 180)
                {
                    throw new McpException($"The angle must be greater than 0 and less than 180 degrees (got {value}).");
                }
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    static List<int> _CheckIndices(int[]? indices, ICollection<int> existing, string parameter, string elementName)
    {
        var list = indices?.Distinct().ToList() ?? [];
        var missing = list.Where(i => !existing.Contains(i)).ToList();
        if (missing.Count > 0)
        {
            throw new McpException($"'{parameter}': no {elementName} with index {string.Join(", ", missing)} exists in the sketch.");
        }
        return list;
    }

    //--------------------------------------------------------------------------------------------------

    static void _Solve(Sketch sketchShape, IEnumerable<int>? fixedPoints = null)
    {
        if (!sketchShape.SolveConstraints(false, fixedPoints))
        {
            throw new McpException("The sketch constraints could not be solved, the sketch is probably over-constrained "
                                   + "or the constraints contradict each other. Nothing was changed.");
        }
    }

    //--------------------------------------------------------------------------------------------------

    static PointInfo[] _GetPoints(Sketch sketchShape)
    {
        return sketchShape.Points.Select(kvp => new PointInfo(kvp.Key, kvp.Value.X, kvp.Value.Y)).ToArray();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Editing

    [McpServerTool(Name = "sketch_delete_elements")]
    [Description("Deletes points, segments and constraints from a sketch, then solves the sketch. "
                 + "Deleting a point also deletes the segments and constraints using it; but if only points are given, "
                 + "a point joining two segments is removed by merging them into one where possible (e.g. two lines become one). "
                 + "Constraint indices change after deleting constraints, point and segment indices stay. "
                 + "Returns the sketch info after the change.")]
    public Task<SketchDetails> DeleteElements(
        [Description(_SketchDescription)] string sketch,
        [Description("Point indices to delete. Optional.")] int[]? points = null,
        [Description("Segment indices to delete. Optional.")] int[]? segments = null,
        [Description("Constraint indices to delete. Optional.")] int[]? constraints = null)
        => Invoke(() =>
        {
            var body = ResolveBody(sketch);
            var sketchShape = FindSketch(body);
            var pointList = _CheckIndices(points, sketchShape.Points.Keys, "points", "point");
            var segmentList = _CheckIndices(segments, sketchShape.Segments.Keys, "segments", "segment");
            var constraintList = _CheckIndices(constraints, Enumerable.Range(0, sketchShape.Constraints.Count).ToList(), "constraints", "constraint")
                                     .Select(i => sketchShape.Constraints[i]).ToList();
            if (pointList.Count + segmentList.Count + constraintList.Count == 0)
            {
                throw new McpException("Nothing to delete, give at least one point, segment or constraint index.");
            }

            sketchShape.SaveUndo(Sketch.ElementType.All);
            if (segmentList.Count == 0 && constraintList.Count == 0)
            {
                SketchUtils.DeletePointsTrySubstituteSegments(sketchShape, pointList);
            }
            else
            {
                sketchShape.DeleteElements(pointList, segmentList, constraintList);
            }
            _Solve(sketchShape);

            EnsureValid(body);
            Commit();
            return _GetDetails(body, sketchShape);
        });

    //--------------------------------------------------------------------------------------------------

    public sealed class PointMove
    {
        [Description("Index of the point to move.")]
        public int Index { get; init; }

        [Description("New x coordinate (mm).")]
        public double X { get; init; }

        [Description("New y coordinate (mm).")]
        public double Y { get; init; }
    }

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "sketch_move_points")]
    [Description("Moves sketch points to new positions (sketch coordinates, mm), then solves the sketch. "
                 + "The solver keeps the moved points where possible and adapts the others to the constraints. "
                 + "Segments follow their points. Returns all point positions after solving.")]
    public Task<PointInfo[]> MovePoints(
        [Description(_SketchDescription)] string sketch,
        [Description("The points to move with their new positions.")] PointMove[] moves)
        => Invoke(() =>
        {
            var body = ResolveBody(sketch);
            var sketchShape = FindSketch(body);
            if (moves == null || moves.Length == 0)
            {
                throw new McpException("'moves' must contain at least one point.");
            }
            for (int i = 0; i < moves.Length; i++)
            {
                if (moves[i] == null)
                {
                    throw new McpException($"moves[{i}] is missing.");
                }
                RequireFinite(moves[i].X, $"moves[{i}].x");
                RequireFinite(moves[i].Y, $"moves[{i}].y");
            }
            var indices = _CheckIndices(moves.Select(m => m.Index).ToArray(), sketchShape.Points.Keys, "moves", "point");
            if (indices.Count != moves.Length)
            {
                throw new McpException("'moves' contains a point more than once.");
            }

            sketchShape.SaveUndo(Sketch.ElementType.All);
            foreach (var move in moves)
            {
                sketchShape.SetPoint(move.Index, new Pnt2d(move.X, move.Y));
            }
            _Solve(sketchShape, indices);

            EnsureValid(body);
            Commit();
            return _GetPoints(sketchShape);
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Info

    [McpServerTool(Name = "sketch_get_info", ReadOnly = true)]
    [Description("Returns the plane, points, segments and constraints of a sketch, and how many closed and open wires "
                 + "it forms. Only closed wires can be used as profiles for extrude or revolve.")]
    public Task<SketchDetails> GetInfo(
        [Description(_SketchDescription)] string sketch)
        => Invoke(() =>
        {
            var body = ResolveBody(sketch);
            return _GetDetails(body, FindSketch(body));
        });

    //--------------------------------------------------------------------------------------------------

    static SketchDetails _GetDetails(Body body, Sketch sketchShape)
    {
        var (closed, open) = CountWires(sketchShape);

        return new SketchDetails(
            body.Guid.ToString(), body.Name, PlaneInfo.From(sketchShape.GetCoordinateSystem()),
            _GetPoints(sketchShape),
            sketchShape.Segments.Select(kvp => new SegmentInfo(kvp.Key, _SegmentTypeName(kvp.Value), kvp.Value.Points, kvp.Value.IsAuxilliary)).ToArray(),
            sketchShape.Constraints.Select((c, i) => new ConstraintInfo(i, _ConstraintTypeName(c), c.Points ?? [], c.Segments ?? [],
                                                                        double.IsNaN(c.Parameter) || c.Parameter == 0 ? null : c.Parameter)).ToArray(),
            closed, open, sketchShape.ConstraintSolverFailed);
    }

    //--------------------------------------------------------------------------------------------------

    static string _SegmentTypeName(SketchSegment segment)
    {
        return segment.GetType().Name.Replace("SketchSegment", "");
    }

    //--------------------------------------------------------------------------------------------------

    static string _ConstraintTypeName(SketchConstraint constraint)
    {
        return constraint.GetType().Name.Replace("SketchConstraint", "");
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Helper

    // Runs a modification of the sketch with a builder and reports the added elements.
    static Task<AddedElements> _Modify(string sketch, Action<SketchBuilder> action)
        => Invoke(() =>
        {
            var body = ResolveBody(sketch);
            var sketchShape = FindSketch(body);
            var pointsBefore = sketchShape.Points.Keys.ToHashSet();
            var segmentsBefore = sketchShape.Segments.Keys.ToHashSet();

            action(new SketchBuilder(sketchShape));

            EnsureValid(body);
            Commit();

            return new AddedElements(sketchShape.Segments.Keys.Where(k => !segmentsBefore.Contains(k)).Order().ToArray(),
                                     sketchShape.Points.Keys.Where(k => !pointsBefore.Contains(k)).Order().ToArray());
        });

    //--------------------------------------------------------------------------------------------------

    #endregion
}
