using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using ModelContextProtocol;
using ModelContextProtocol.Server;
using System;
using System.ComponentModel;
using System.Threading.Tasks;

namespace Macad.Mcp;

public class MultiplyTools : ToolsBase
{
    const string _BodyDescription = "The body, referenced by its guid or its unique name.";

    //--------------------------------------------------------------------------------------------------

    #region Mirror

    [McpServerTool(Name = "mirror")]
    [Description("Mirrors a solid body across a plane, given either as a planar face of the body ('face', index from list_faces) "
                 + "or as 'planeOrigin' and 'planeNormal' in world coordinates. By default the original is kept and fused "
                 + "with the mirrored copy, e.g. to model one half of a symmetric part. "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> Mirror(
        [Description(_BodyDescription)] string body,
        [Description("Index of a planar face of the body to mirror across. Alternative to planeOrigin/planeNormal.")] int? face = null,
        [Description("A point [x, y, z] on the mirror plane in world coordinates (mm).")] double[]? planeOrigin = null,
        [Description("Normal [x, y, z] of the mirror plane in world coordinates.")] double[]? planeNormal = null,
        [Description("Face mode only: moves the mirror plane along the face normal (mm). Default 0.")] double offset = 0,
        [Description("True to keep the original and fuse it with the copy, false for the mirrored copy only. Default true.")] bool keepOriginal = true)
        => Invoke(() =>
        {
            RequireFinite(offset, nameof(offset));
            var target = ResolveBody(body);
            if (target.Shape?.ShapeType != ShapeType.Solid)
            {
                throw new McpException($"The body '{target.Name}' is not a solid. Only solids can be mirrored.");
            }

            Core.Shapes.Mirror mirror;
            if (face != null)
            {
                if (planeOrigin != null || planeNormal != null)
                {
                    throw new McpException("Give either 'face' or 'planeOrigin'/'planeNormal', not both.");
                }
                mirror = Core.Shapes.Mirror.Create(target, GetFace(target, face.Value, true, "as mirror plane").reference);
                mirror.Offset = offset;
            }
            else
            {
                if (planeNormal == null)
                {
                    throw new McpException("Give either 'face' or 'planeNormal' (and optionally 'planeOrigin').");
                }
                if (offset != 0)
                {
                    throw new McpException("'offset' is only used with 'face', move 'planeOrigin' instead.");
                }
                var origin = Pnt.Origin.Translated(ToVec(planeOrigin, nameof(planeOrigin), Vec.Zero));
                var normal = ToDir(planeNormal, nameof(planeNormal))!.Value;
                var localAxis = new Ax2(origin, normal).Transformed(target.GetTransformation().Inverted());
                mirror = Core.Shapes.Mirror.Create(target, localAxis);
            }
            mirror.KeepOriginal = keepOriginal;

            return FinishShape(target, "mirror");
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Linear array

    [McpServerTool(Name = "linear_array")]
    [Description("Repeats a body (solid or sketch) in one or two directions, e.g. a row of bolts or a grid of holes. "
                 + "The directions are axes of the body's own (local) coordinate system, which equals world axes for an unrotated body: "
                 + "plane 'XY': direction 1 = X, direction 2 = Y; 'ZX': direction 1 = Z, direction 2 = X; 'YZ': direction 1 = Y, direction 2 = Z. "
                 + "For sketches the sketch plane is used and 'plane' is ignored. 'rotation' turns both directions within the plane. "
                 + "distanceMode: 'interval' (distance between copies, default), 'spacing' (gap between copies), "
                 + "'extent' (distance from first to last copy), 'overall_extent' (overall size including the body). "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> LinearArray(
        [Description(_BodyDescription)] string body,
        [Description("Number of copies in direction 1, including the original. At least 1.")] int quantity1,
        [Description("Distance in direction 1 (mm), see distanceMode. Negative values go the opposite way.")] double distance1,
        [Description("Number of copies in direction 2, including the original. Default 1.")] int quantity2 = 1,
        [Description("Distance in direction 2 (mm), see distanceMode. Default 0.")] double distance2 = 0,
        [Description("'XY', 'ZX' or 'YZ'. Default 'XY'.")] string plane = "XY",
        [Description("Rotation of the directions within the plane (degrees). Default 0.")] double rotation = 0,
        [Description("'interval', 'spacing', 'extent' or 'overall_extent'. Default 'interval'.")] string distanceMode = "interval",
        [Description("Where the original is: 'first' (default), 'center' or 'last'.")] string alignment = "first",
        [Description("True to create only the outer border of a two-directional grid. Default false.")] bool border = false)
        => Invoke(() =>
        {
            RequireQuantity(quantity1, nameof(quantity1));
            RequireQuantity(quantity2, nameof(quantity2));
            RequireFinite(distance1, nameof(distance1));
            RequireFinite(distance2, nameof(distance2));
            RequireFinite(rotation, nameof(rotation));
            if (quantity1 * quantity2 < 2)
            {
                throw new McpException("The array needs at least two copies (quantity1 * quantity2 >= 2).");
            }
            var planeType = LinearArrayPlaneNames.Parse(plane, nameof(plane));
            var mode = DistanceModeNames.Parse(distanceMode, nameof(distanceMode));
            var align = LinearArrayAlignmentNames.Parse(alignment, nameof(alignment));
            if (mode is Core.Shapes.LinearArray.DistanceMode.Extent or Core.Shapes.LinearArray.DistanceMode.OverallExtent
                && (quantity1 == 1 && distance1 != 0 || quantity2 == 1 && distance2 != 0))
            {
                throw new McpException($"distanceMode '{distanceMode}' needs a quantity of at least 2 in each direction with a distance.");
            }

            var target = _ResolveMultipliable(body);
            var array = Core.Shapes.LinearArray.Create(target);
            array.Plane = planeType;
            array.Rotation = rotation;
            array.Quantity1 = (uint)quantity1;
            array.Distance1 = distance1;
            array.DistanceMode1 = quantity1 > 1 ? mode : Core.Shapes.LinearArray.DistanceMode.Interval; // Extent modes divide by quantity - 1
            array.Alignment1 = align;
            array.Quantity2 = (uint)quantity2;
            array.Distance2 = distance2;
            array.DistanceMode2 = quantity2 > 1 ? mode : Core.Shapes.LinearArray.DistanceMode.Interval;
            array.Alignment2 = align;
            array.Border = border;

            return FinishShape(target, "linear array");
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Circular array

    [McpServerTool(Name = "circular_array")]
    [Description("Repeats a body (solid or sketch) around an axis, e.g. spokes of a wheel or bolts on a flange. "
                 + "The axis is parallel to the normal of 'plane' in the body's own (local) coordinate system, which equals world axes "
                 + "for an unrotated body: 'XY' = Z axis, 'ZX' = Y axis, 'YZ' = X axis. For sketches the sketch normal is used. "
                 + "The axis passes through 'center', by default the body's position (its local origin). "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> CircularArray(
        [Description(_BodyDescription)] string body,
        [Description("Number of copies, including the original. At least 2.")] int quantity,
        [Description("A point [x, y, z] on the rotation axis in world coordinates (mm). Default: the body's position.")] double[]? center = null,
        [Description("'XY', 'ZX' or 'YZ'. Default 'XY'. Ignored for sketches.")] string plane = "XY",
        [Description("Angle covered by the copies (degrees), -360 to 360, not 0. With 360 the copies are spread evenly around, "
                     + "otherwise the first and last copy are 'range' apart. Default 360.")] double range = 360,
        [Description("Where the original is within the range: 'first' (default), 'center' or 'last'.")] string alignment = "first",
        [Description("True to only move the copies around the axis without rotating them. Default false.")] bool keepOrientation = false)
        => Invoke(() =>
        {
            RequireQuantity(quantity, nameof(quantity), 2);
            RequireAngle(range, nameof(range), 360);
            var planeType = CircularArrayPlaneNames.Parse(plane, nameof(plane));
            var align = CircularArrayAlignmentNames.Parse(alignment, nameof(alignment));

            var target = _ResolveMultipliable(body);
            if (target.Shape.ShapeType == ShapeType.Sketch)
            {
                planeType = Core.Shapes.CircularArray.PlaneType.XY;
            }

            var (radius, angle) = center == null ? (0.0, 0.0) : ComputeCircularArrayPlacement(target, planeType, ToVec(center, nameof(center), Vec.Zero).ToPnt());

            var array = Core.Shapes.CircularArray.Create(target);
            array.Plane = planeType;
            array.Quantity = (uint)quantity;
            array.Radius = radius;
            array.OriginalAngle = angle;
            array.Range = range;
            array.Alignment = align;
            array.KeepOrientation = keepOrientation;

            return FinishShape(target, "circular array");
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Helper

    static Body _ResolveMultipliable(string body)
    {
        var target = ResolveBody(body);
        if (target.Shape?.ShapeType is not (ShapeType.Solid or ShapeType.Sketch))
        {
            throw new McpException($"The body '{target.Name}' is neither a solid nor a sketch and cannot be repeated.");
        }
        return target;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
