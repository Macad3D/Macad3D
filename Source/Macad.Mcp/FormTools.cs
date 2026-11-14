using Macad.Core;
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

public class FormTools : ToolsBase
{
    const string _BodyDescription = "The body containing the sketch, referenced by its guid or its unique name. "
                                    + "The sketch must be the current (topmost) shape of the body.";

    //--------------------------------------------------------------------------------------------------

    #region Extrude

    [McpServerTool(Name = "extrude")]
    [Description("Turns the closed contours of a sketch into a solid by extruding them along the sketch normal. "
                 + "The body keeps the sketch in its shape stack; the extrusion becomes the current shape. Lengths in mm. "
                 + "Returns the new shape with its bounding box and volume in world coordinates.")]
    public Task<ShapeResult> Extrude(
        [Description(_BodyDescription)] string body,
        [Description("Extrusion length (mm), along the sketch normal. Negative values extrude in the opposite direction. Must not be 0.")] double depth,
        [Description("True to extrude by half the depth to both sides of the sketch plane. Default false.")] bool symmetric = false)
        => Invoke(() =>
        {
            RequireNonZero(depth, nameof(depth));

            var target = ResolveBody(body);
            _RequireClosedSketch(target);

            var extrude = Core.Shapes.Extrude.Create(target);
            extrude.Depth = depth;
            extrude.Symmetric = symmetric;

            return FinishShape(target, "extrude");
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Revolve

    [McpServerTool(Name = "revolve")]
    [Description("Turns the closed contours of a sketch into a solid by revolving them around an axis, "
                 + "e.g. a half profile drawn on one side of the axis becomes a turned part. "
                 + "The profile must not cross the axis, but may touch it. "
                 + "The body keeps the sketch in its shape stack; the revolve becomes the current shape. "
                 + "Returns the new shape with its bounding box and volume in world coordinates.")]
    public Task<ShapeResult> Revolve(
        [Description(_BodyDescription)] string body,
        [Description("Axis direction: 'x' or 'y' for the sketch's own x or y axis, or 'world_x', 'world_y', 'world_z' for a world axis direction. "
                     + "The axis passes through the sketch origin, moved by 'offset'. "
                     + "Example: on plane 'XZ', 'y' is parallel to world Z.")] string axis,
        [Description("Moves the axis within the sketch plane, [x, y] in sketch coordinates (mm). Default [0, 0].")] double[]? offset = null,
        [Description("Revolve angle in degrees, counter-clockwise around the axis. -360 to 360, not 0. Default 360 (full turn).")] double angle = 360)
        => Invoke(() =>
        {
            RequireAngle(angle, nameof(angle), 360);
            var axisType = RevolveAxisNames.Parse(axis, nameof(axis));
            var axisOffset = ToRevolveOffset(offset);

            var target = ResolveBody(body);
            _RequireClosedSketch(target);

            var revolve = Core.Shapes.Revolve.Create(target);
            revolve.Axis = axisType;
            revolve.Offset = axisOffset;
            revolve.SegmentAngle = angle;

            CheckProfileAgainstAxis(revolve);

            return FinishShape(target, "revolve", RevolveHint);
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Pipe

    [McpServerTool(Name = "pipe")]
    [Description("Sweeps a profile along a path, e.g. a rope, a handle or a bent tube. The path is the sketch of 'body' "
                 + "(lines and arcs, connected, open or closed); the body becomes the pipe. "
                 + "Profiles: 'circle' (diameter sizeX, or an ellipse with sizeY), 'hollow_circle', 'rectangle' (sizeX by sizeY, square if sizeY "
                 + "is omitted), 'hollow_rectangle' (wall 'thickness'), or 'custom' with 'profileBody': a sketch body whose sketch origin is "
                 + "placed at the path start, its normal along the path. The profile body is hidden and stays linked. "
                 + "Corners between path segments are bent with 'bendRadius' (default: automatic). "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> Pipe(
        [Description("The body containing the path sketch, referenced by its guid or its unique name. The sketch must be its current shape.")] string body,
        [Description("'circle', 'hollow_circle', 'rectangle', 'hollow_rectangle' or 'custom'. Default 'circle'.")] string profile = "circle",
        [Description("Profile diameter or width (mm). Required for all profiles except 'custom'.")] double? sizeX = null,
        [Description("Profile height (mm), for elliptic or rectangular profiles. Optional.")] double? sizeY = null,
        [Description("Wall thickness for hollow profiles (mm).")] double? thickness = null,
        [Description("Rotation of non-symmetric profiles around the path (degrees). Default 0.")] double rotation = 0,
        [Description("Bend radius at corners of the path (mm). Optional, automatic by default.")] double? bendRadius = null,
        [Description("For 'custom': the body with the profile sketch (guid or unique name).")] string? profileBody = null)
        => Invoke(() =>
        {
            var profileType = PipeProfileNames.Parse(profile, nameof(profile));
            RequireFinite(rotation, nameof(rotation));
            if (bendRadius != null)
            {
                RequirePositive(bendRadius.Value, nameof(bendRadius));
            }

            var target = ResolveBody(body);
            if (target.Shape?.ShapeType != ShapeType.Sketch)
            {
                throw new McpException($"The current shape of body '{target.Name}' is not a sketch. The pipe path must be a sketch.");
            }
            if (target.Shape.GetBRep()?.Edges().Count is null or 0)
            {
                throw new McpException($"The path sketch of body '{target.Name}' is empty.");
            }

            Core.Shapes.Pipe pipe;
            if (profileType == Core.Shapes.Pipe.ProfileType.Custom)
            {
                if (sizeX != null || sizeY != null || thickness != null)
                {
                    throw new McpException("'sizeX', 'sizeY' and 'thickness' are not used with a custom profile, the profile sketch defines the size.");
                }
                var profileSketch = ResolveSketchOperand(profileBody ?? throw new McpException("Profile 'custom' requires 'profileBody'."),
                                                         target, "profile", true);
                pipe = Core.Shapes.Pipe.Create(target, new BodyShapeOperand(profileSketch));
                profileSketch.IsVisible = false;
            }
            else
            {
                if (profileBody != null)
                {
                    throw new McpException("'profileBody' is only used with profile 'custom'.");
                }
                RequirePositive(sizeX ?? throw new McpException($"Profile '{profile}' requires 'sizeX'."), nameof(sizeX));
                if (sizeY != null)
                {
                    RequirePositive(sizeY.Value, nameof(sizeY));
                }

                bool hollow = profileType is Core.Shapes.Pipe.ProfileType.HollowCircle or Core.Shapes.Pipe.ProfileType.HollowRectangle;
                if (hollow)
                {
                    RequirePositive(thickness ?? throw new McpException($"Profile '{profile}' requires 'thickness'."), nameof(thickness));
                    RequirePipeThickness(thickness.Value, sizeX.Value, sizeY ?? sizeX.Value);
                }
                else if (thickness != null)
                {
                    throw new McpException("'thickness' is only used with hollow profiles.");
                }

                pipe = Core.Shapes.Pipe.Create(target);
                pipe.Profile = profileType;
                pipe.SizeX = sizeX.Value;
                pipe.SizeY = sizeY ?? sizeX.Value;
                if (hollow)
                {
                    pipe.Thickness = thickness!.Value;
                }
            }

            var pipeFlags = (Core.Shapes.Pipe.PipeFlags)0;
            if (sizeY == null)
            {
                pipeFlags |= Core.Shapes.Pipe.PipeFlags.SymmetricProfile;
            }
            if (bendRadius == null)
            {
                pipeFlags |= Core.Shapes.Pipe.PipeFlags.AutoBendRadius;
            }
            else
            {
                pipe.BendRadius = bendRadius.Value;
            }
            pipe.Flags = pipeFlags;
            pipe.Rotation = rotation;

            return FinishShape(target, "pipe", "Check for self-intersections, e.g. a profile too large for the bends of the path.");
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Loft

    [McpServerTool(Name = "loft")]
    [Description("Creates a solid through two or more section sketches, e.g. a tapered or transitioning part. "
                 + "'body' holds the first section and becomes the loft; 'sections' are further sketch bodies, which are hidden and stay linked. "
                 + "Each section should contain one contour; sections are ordered along their positions. "
                 + "Without capping the open ends are left out and the loft is thickened to a wall of 'thickness'. "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> Loft(
        [Description("The body with the first section sketch, referenced by its guid or its unique name.")] string body,
        [Description("The other section sketch bodies (guids or unique names).")] string[] sections,
        [Description("True to close the start with a flat cap. Default true.")] bool capStart = true,
        [Description("True to close the end with a flat cap. Default true.")] bool capEnd = true,
        [Description("Wall thickness (mm), used when a cap is left out. Default 1.")] double thickness = 1,
        [Description("True to thicken outwards instead of inwards. Default false.")] bool thickenOutwards = false)
        => Invoke(() =>
        {
            RequirePositive(thickness, nameof(thickness));
            var target = ResolveBody(body);
            if (target.Shape?.ShapeType != ShapeType.Sketch)
            {
                throw new McpException($"The current shape of body '{target.Name}' is not a sketch. A loft starts with a section sketch.");
            }
            if (sections == null || sections.Length == 0)
            {
                throw new McpException("At least one further section is required.");
            }

            var sectionBodies = new List<Body>();
            foreach (var reference in sections)
            {
                var section = ResolveSketchOperand(reference, target, "section", false);
                if (sectionBodies.Contains(section))
                {
                    throw new McpException($"The section '{section.Name}' is given more than once.");
                }
                sectionBodies.Add(section);
            }

            var loft = Core.Shapes.Loft.Create(target, sectionBodies.Select(b => (IShapeOperand)new BodyShapeOperand(b)).ToArray());
            loft.StartCapping = capStart ? Core.Shapes.Loft.CappingMode.Flat : Core.Shapes.Loft.CappingMode.None;
            loft.EndCapping = capEnd ? Core.Shapes.Loft.CappingMode.Flat : Core.Shapes.Loft.CappingMode.None;
            loft.Thickness = thickness;
            loft.ThickenDirection = thickenOutwards ? Core.Shapes.Loft.Direction.Outwards : Core.Shapes.Loft.Direction.Inwards;
            foreach (var section in sectionBodies)
            {
                section.IsVisible = false;
            }

            return FinishShape(target, "loft", capStart && capEnd
                                                   ? "Check that the sections are ordered, do not intersect and have similar contours."
                                                   : "Thickening an open loft often fails; try capping both ends and hollowing the part with a boolean cut instead.");
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Helper

    // Ensures that the body's current shape is a sketch with at least one closed contour.
    static Shape _RequireClosedSketch(Body body)
    {
        if (body.Shape is not { ShapeType: ShapeType.Sketch } sketch)
        {
            throw new McpException($"The current shape of body '{body.Name}' is a {body.Shape?.GetType().Name ?? "missing shape"}, not a sketch. "
                                   + "Only a sketch can be extruded or revolved.");
        }

        var (closed, open) = CountWires(sketch);
        if (closed == 0)
        {
            throw new McpException($"The sketch of body '{body.Name}' contains no closed contour"
                                   + (open > 0 ? $" ({open} open wire(s) found)" : "")
                                   + ". Close the path (e.g. sketch_add_path with closed=true) so it encloses an area.");
        }
        return sketch;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
