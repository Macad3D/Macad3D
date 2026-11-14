using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Occt;
using ModelContextProtocol;
using ModelContextProtocol.Server;
using System;
using System.ComponentModel;
using System.Threading.Tasks;

namespace Macad.Mcp;

public class TransformTools : ToolsBase
{
    const string _BodyDescription = "The body, referenced by its guid or its unique name.";

    //--------------------------------------------------------------------------------------------------

    public sealed record PlacementResult(string Guid, string Name, double[] Position, double[] RotationAxis, double RotationAngle,
                                         double[] XDirection, double[] ZDirection, BoundingBoxInfo? BoundingBox)
    {
        public static PlacementResult From(Body body)
        {
            var rotation = body.Rotation;
            Vec axis = new(0, 0, 1);
            double angle = 0;
            rotation.GetVectorAndAngle(ref axis, ref angle);
            if (Math.Abs(angle) < 1e-12)
            {
                axis = new Vec(0, 0, 1);
            }
            var x = rotation * new Vec(1, 0, 0);
            var z = rotation * new Vec(0, 0, 1);
            return new(body.Guid.ToString(), body.Name, _ToArray(body.Position.ToVec()), _ToArray(axis), _Round(angle.ToDeg()),
                       _ToArray(x), _ToArray(z), BoundingBoxInfo.From(body.Shape?.GetTransformedBRep()));
        }

        static double _Round(double value) => Math.Abs(value) < 1e-12 ? 0 : Math.Round(value, 9);

        static double[] _ToArray(Vec vec) => [_Round(vec.X), _Round(vec.Y), _Round(vec.Z)];
    }

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "move_body")]
    [Description("Moves a body by a vector in world coordinates (mm). Returns the new placement and bounding box.")]
    public Task<PlacementResult> MoveBody(
        [Description(_BodyDescription)] string body,
        [Description("Translation [x, y, z] (mm).")] double[] offset)
        => Invoke(() =>
        {
            var target = ResolveBody(body);
            var vector = ToVec(offset ?? throw new McpException("'offset' is required."), nameof(offset), Vec.Zero);

            target.Position = target.Position.Translated(vector);
            return _Finish(target);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "rotate_body")]
    [Description("Rotates a body around an axis in world coordinates, counter-clockwise when looking against the axis direction "
                 + "(right-hand rule). The axis passes through 'pivot', by default the body's position (its local origin). "
                 + "Example: a cylinder (axis along Z) laid along world X: axis [0, 1, 0], angle 90. "
                 + "Returns the new placement and bounding box.")]
    public Task<PlacementResult> RotateBody(
        [Description(_BodyDescription)] string body,
        [Description("Axis direction [x, y, z]. Must not be zero.")] double[] axis,
        [Description("Rotation angle in degrees.")] double angle,
        [Description("A point [x, y, z] on the axis, in world coordinates (mm). Default: the body's position.")] double[]? pivot = null)
        => Invoke(() =>
        {
            var target = ResolveBody(body);
            RequireFinite(angle, nameof(angle));
            var direction = ToDir(axis, nameof(axis)) ?? throw new McpException("'axis' is required.");
            var pivotPoint = pivot == null ? target.Position : Pnt.Origin.Translated(ToVec(pivot, nameof(pivot), Vec.Zero));

            var rotation = new Quaternion(direction.ToVec(), angle.ToRad());
            target.Rotation = rotation.Multiplied(target.Rotation).Normalized();
            target.Position = target.Position.Rotated(new Ax1(pivotPoint, direction), angle.ToRad());
            return _Finish(target);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "set_placement")]
    [Description("Sets the absolute placement of a body: its position (local origin) and orientation in world coordinates. "
                 + "Give the orientation either as 'zDirection' (where the body's local Z axis points, optionally with 'xDirection'), "
                 + "or as 'rotationAxis' with 'rotationAngle' (degrees) relative to the unrotated body. "
                 + "Parameters left out keep their current value; rotationAngle 0 resets the rotation. "
                 + "Returns the new placement and bounding box.")]
    public Task<PlacementResult> SetPlacement(
        [Description(_BodyDescription)] string body,
        [Description("Position [x, y, z] in world coordinates (mm). Optional.")] double[]? position = null,
        [Description("Direction [x, y, z] of the body's local Z axis. Optional.")] double[]? zDirection = null,
        [Description("Direction [x, y, z] of the body's local X axis, only with 'zDirection'. Must not be parallel to it. Optional.")] double[]? xDirection = null,
        [Description("Rotation axis [x, y, z], used with 'rotationAngle'. Optional.")] double[]? rotationAxis = null,
        [Description("Rotation angle in degrees around 'rotationAxis'. Optional.")] double? rotationAngle = null)
        => Invoke(() =>
        {
            var target = ResolveBody(body);
            var z = ToDir(zDirection, nameof(zDirection));
            var x = ToDir(xDirection, nameof(xDirection));
            var axis = ToDir(rotationAxis, nameof(rotationAxis));

            if (z != null && (axis != null || rotationAngle != null))
            {
                throw new McpException("Use either 'zDirection' or 'rotationAxis'/'rotationAngle', not both.");
            }
            if (x != null && z == null)
            {
                throw new McpException("'xDirection' needs 'zDirection'.");
            }

            if (z != null)
            {
                Ax3 ax3;
                if (x == null)
                {
                    ax3 = new Ax3(Pnt.Origin, z.Value);
                }
                else if (x.Value.IsParallel(z.Value, 1e-6))
                {
                    throw new McpException("'xDirection' must not be parallel to 'zDirection'.");
                }
                else
                {
                    ax3 = new Ax3(Pnt.Origin, z.Value, x.Value);
                }
                target.Rotation = new Pln(ax3).Rotation();
            }
            else if (rotationAngle != null)
            {
                RequireFinite(rotationAngle.Value, nameof(rotationAngle));
                if (Math.Abs(rotationAngle.Value) < 1e-12)
                {
                    target.Rotation = Quaternion.Identity;
                }
                else
                {
                    if (axis == null)
                    {
                        throw new McpException("'rotationAngle' needs 'rotationAxis'.");
                    }
                    target.Rotation = new Quaternion(axis.Value.ToVec(), rotationAngle.Value.ToRad());
                }
            }
            else if (axis != null)
            {
                throw new McpException("'rotationAxis' needs 'rotationAngle'.");
            }

            if (position != null)
            {
                target.Position = Pnt.Origin.Translated(ToVec(position, nameof(position), Vec.Zero));
            }
            return _Finish(target);
        });

    //--------------------------------------------------------------------------------------------------

    static PlacementResult _Finish(Body body)
    {
        EnsureValid(body);
        Commit();
        return PlacementResult.From(body);
    }

    //--------------------------------------------------------------------------------------------------
}
