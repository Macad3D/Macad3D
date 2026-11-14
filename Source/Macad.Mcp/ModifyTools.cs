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

public class ModifyTools : ToolsBase
{
    const string _TargetDescription = "The body to modify, referenced by its guid or its unique name. It keeps its name and placement.";
    const string _OperandsDescription = "The operand bodies (guids or unique names). They are hidden afterwards and stay linked: "
                                        + "moving or changing them later updates the result.";

    //--------------------------------------------------------------------------------------------------

    #region Booleans

    [McpServerTool(Name = "boolean_fuse")]
    [Description("Unites the target body with one or more operand bodies into one shape (union). "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> BooleanFuse(
        [Description(_TargetDescription)] string target,
        [Description(_OperandsDescription)] string[] operands)
        => _Boolean(target, operands, "fuse", (body, ops) => Core.Shapes.BooleanFuse.Create(body, ops));

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "boolean_cut")]
    [Description("Subtracts one or more operand bodies from the target body (difference), e.g. to drill a bore. "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> BooleanCut(
        [Description(_TargetDescription)] string target,
        [Description(_OperandsDescription)] string[] operands)
        => _Boolean(target, operands, "cut", (body, ops) => Core.Shapes.BooleanCut.Create(body, ops));

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "boolean_common")]
    [Description("Keeps only the volume shared by the target body and all operand bodies (intersection). "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> BooleanCommon(
        [Description(_TargetDescription)] string target,
        [Description(_OperandsDescription)] string[] operands)
        => _Boolean(target, operands, "common", (body, ops) => Core.Shapes.BooleanCommon.Create(body, ops));

    //--------------------------------------------------------------------------------------------------

    static Task<ShapeResult> _Boolean(string target, string[] operands, string operation, Func<Body, IShapeOperand[], ModifierBase> create)
        => Invoke(() =>
        {
            var targetBody = ResolveBody(target);
            if (operands == null || operands.Length == 0)
            {
                throw new McpException("At least one operand body is required.");
            }

            var operandBodies = new List<Body>();
            foreach (var reference in operands)
            {
                var operand = ResolveBody(reference);
                if (operand == targetBody)
                {
                    throw new McpException($"The body '{operand.Name}' cannot be an operand of itself.");
                }
                if (operandBodies.Contains(operand))
                {
                    throw new McpException($"The body '{operand.Name}' is given more than once.");
                }
                if (DependsOn(operand, targetBody))
                {
                    throw new McpException($"The body '{operand.Name}' already uses '{targetBody.Name}' as an operand, "
                                           + "using it the other way round would create a cycle.");
                }
                operandBodies.Add(operand);
            }

            if (targetBody.Shape == null)
            {
                throw new McpException($"The body '{targetBody.Name}' has no shape.");
            }

            create(targetBody, operandBodies.Select(b => (IShapeOperand)new BodyShapeOperand(b)).ToArray());
            foreach (var operand in operandBodies)
            {
                operand.IsVisible = false;
            }

            EnsureValid(targetBody);
            var result = ShapeResult.From(targetBody);
            if (result.Volume is null or < 1e-9)
            {
                throw new McpException($"The {operation} of '{targetBody.Name}' with {string.Join(", ", operandBodies.Select(b => $"'{b.Name}'"))} "
                                       + "has no volume. Check that the bodies are solids and overlap where intended.");
            }

            Commit();
            return result;
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Fillet and chamfer

    const string _EdgesDescription = "Indices of the edges to modify, from list_edges on the same body (its current shape).";

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "fillet")]
    [Description("Rounds edges of a body with a radius (mm). Pick the edges with list_edges first. "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> Fillet(
        [Description("The body, referenced by its guid or its unique name.")] string body,
        [Description(_EdgesDescription)] int[] edges,
        [Description("Fillet radius (mm). Must be > 0 and fit into the adjacent faces.")] double radius)
        => Invoke(() =>
        {
            RequirePositive(radius, nameof(radius));
            var target = ResolveBody(body);
            var references = _GetEdgeReferences(target, edges);

            var fillet = Core.Shapes.Fillet.Create(target);
            fillet.Radius = radius;
            foreach (var reference in references)
            {
                fillet.AddEdge(reference);
            }

            return FinishShape(target, "fillet", $"Check that the radius {radius} fits into the faces next to the edges.");
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "chamfer")]
    [Description("Bevels edges of a body. Pick the edges with list_edges first. Modes: "
                 + "only 'distance': symmetric chamfer, cutting back both faces by the distance; "
                 + "'distance' and 'secondDistance': different distances on the two faces; "
                 + "'distance' and 'angle': a distance on one face and the chamfer angle against it. "
                 + "'reverse' swaps the faces the first distance is measured on. Lengths in mm, angle in degrees. "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> Chamfer(
        [Description("The body, referenced by its guid or its unique name.")] string body,
        [Description(_EdgesDescription)] int[] edges,
        [Description("Chamfer distance (mm). Must be > 0.")] double distance,
        [Description("Distance on the second face (mm), for an asymmetric chamfer. Optional.")] double? secondDistance = null,
        [Description("Chamfer angle (degrees, between 0 and 90), instead of 'secondDistance'. Optional.")] double? angle = null,
        [Description("Swap the faces the distances are measured on. Default false.")] bool reverse = false)
        => Invoke(() =>
        {
            RequirePositive(distance, nameof(distance));
            if (secondDistance != null && angle != null)
            {
                throw new McpException("Give either 'secondDistance' or 'angle', not both.");
            }
            if (secondDistance != null)
            {
                RequirePositive(secondDistance.Value, nameof(secondDistance));
            }
            if (angle != null)
            {
                RequireChamferAngle(angle.Value, nameof(angle));
            }

            var target = ResolveBody(body);
            var references = _GetEdgeReferences(target, edges);

            var chamfer = Core.Shapes.Chamfer.Create(target, references);
            chamfer.Distance = distance;
            chamfer.ReverseOrientation = reverse;
            if (secondDistance != null)
            {
                chamfer.Mode = Core.Shapes.Chamfer.ChamferModes.TwoDistances;
                chamfer.SecondDistance = secondDistance.Value;
            }
            else if (angle != null)
            {
                chamfer.Mode = Core.Shapes.Chamfer.ChamferModes.DistanceAngle;
                chamfer.Angle = angle.Value;
            }
            else
            {
                chamfer.Mode = Core.Shapes.Chamfer.ChamferModes.Symmetric;
            }

            return FinishShape(target, "chamfer", "Check that the distances fit into the faces next to the edges.");
        });

    //--------------------------------------------------------------------------------------------------

    // Converts edge indices of the body's current shape to subshape references.
    static SubshapeReference[] _GetEdgeReferences(Body body, int[] edges)
    {
        if (edges == null || edges.Length == 0)
        {
            throw new McpException("At least one edge index is required. Use list_edges to find them.");
        }

        var shape = body.Shape;
        var edgeCount = shape?.GetBRep()?.Edges().Count
                        ?? throw new McpException($"The shape of body '{body.Name}' could not be created, it has no edges.");
        var invalid = edges.Where(i => i < 0 || i >= edgeCount).Distinct().ToList();
        if (invalid.Count > 0)
        {
            throw new McpException($"No edge with index {string.Join(", ", invalid)} exists, the body has {edgeCount} edges (0 to {edgeCount - 1}). "
                                   + "Edge indices change when the shape is modified, use list_edges again.");
        }

        return edges.Distinct()
                    .Select(i => shape.GetSubshapeReference(SubshapeType.Edge, i)
                                 ?? throw new McpException($"The edge {i} cannot be referenced."))
                    .ToArray();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Offset and scale

    [McpServerTool(Name = "offset")]
    [Description("Grows (positive distance) or shrinks (negative distance) a solid or the contours of a sketch by a distance (mm), "
                 + "e.g. to add a wall around a profile. 'keepOriginal' keeps the original contours of a sketch, so the result is a ring. "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> Offset(
        [Description("The body, referenced by its guid or its unique name.")] string body,
        [Description("Offset distance (mm). Positive grows, negative shrinks. Must not be 0.")] double distance,
        [Description("'round' (default) or 'angular' corners.")] string corner = "round",
        [Description("Sketches only: keep the original contours as well. Default false.")] bool keepOriginal = false)
        => Invoke(() =>
        {
            RequireNonZero(distance, nameof(distance));
            var cornerType = OffsetCornerNames.Parse(corner, nameof(corner));

            var target = ResolveBody(body);
            if (target.Shape?.ShapeType is not (ShapeType.Solid or ShapeType.Sketch))
            {
                throw new McpException($"The body '{target.Name}' is neither a solid nor a sketch and cannot be offset.");
            }
            if (keepOriginal && target.Shape.ShapeType != ShapeType.Sketch)
            {
                throw new McpException("'keepOriginal' is only supported for sketches.");
            }

            var offset = Core.Shapes.Offset.Create(target, distance);
            offset.Corner = cornerType;
            offset.KeepOriginal = keepOriginal;

            return FinishShape(target, "offset", "Check that the distance is not larger than the shape allows.");
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "scale")]
    [Description("Scales a solid or sketch around the body's position (its local origin), uniformly by 'factor' "
                 + "or non-uniformly along the body's local axes with 'factorX', 'factorY' and 'factorZ'. "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> Scale(
        [Description("The body, referenced by its guid or its unique name.")] string body,
        [Description("Uniform scale factor, e.g. 1/64 for a 1:64 model. Alternative to the per-axis factors.")] double? factor = null,
        [Description("Scale factor along the local X axis. Default 1.")] double? factorX = null,
        [Description("Scale factor along the local Y axis. Default 1.")] double? factorY = null,
        [Description("Scale factor along the local Z axis. Default 1.")] double? factorZ = null)
        => Invoke(() =>
        {
            bool perAxis = factorX != null || factorY != null || factorZ != null;
            if (factor != null && perAxis)
            {
                throw new McpException("Give either 'factor' or 'factorX'/'factorY'/'factorZ', not both.");
            }
            if (factor == null && !perAxis)
            {
                throw new McpException("Give 'factor' or at least one of 'factorX', 'factorY', 'factorZ'.");
            }
            foreach (var (value, name) in new[] { (factor, nameof(factor)), (factorX, nameof(factorX)), (factorY, nameof(factorY)), (factorZ, nameof(factorZ)) })
            {
                if (value != null)
                {
                    RequireScaleFactor(value.Value, name);
                }
            }

            var target = ResolveBody(body);
            if (target.Shape?.ShapeType is not (ShapeType.Solid or ShapeType.Sketch))
            {
                throw new McpException($"The body '{target.Name}' is neither a solid nor a sketch and cannot be scaled.");
            }

            if (factor != null)
            {
                Core.Shapes.Scale.Create(target, factor.Value);
            }
            else
            {
                Core.Shapes.Scale.Create(target, factorX ?? 1, factorY ?? 1, factorZ ?? 1);
            }

            return FinishShape(target, "scale", "Check the scale factors.");
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Taper and imprint

    [McpServerTool(Name = "taper")]
    [Description("Tilts a planar face of a solid by an angle (draft), pivoting around one of its edges or a vertex, "
                 + "e.g. to taper the sides of a block. Pick the face with list_faces and the base edge with list_edges "
                 + "(an edge of that face), or give a world point near a corner of the face as 'baseVertex'. "
                 + "Positive angles tilt the face inwards. Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> Taper(
        [Description("The body, referenced by its guid or its unique name.")] string body,
        [Description("Index of the planar face to taper, from list_faces.")] int face,
        [Description("Taper angle in degrees, between -89 and 89, not 0.")] double angle,
        [Description("Index of an edge of the face to pivot around, from list_edges. Alternative to 'baseVertex'.")] int? baseEdge = null,
        [Description("A point [x, y, z] in world coordinates (mm); the nearest corner of the face is the pivot. Alternative to 'baseEdge'.")] double[]? baseVertex = null)
        => Invoke(() =>
        {
            RequireAngle(angle, nameof(angle), 89);
            if ((baseEdge == null) == (baseVertex == null))
            {
                throw new McpException("Give either 'baseEdge' or 'baseVertex'.");
            }

            var target = ResolveBody(body);
            if (target.Shape?.ShapeType != ShapeType.Solid)
            {
                throw new McpException($"The body '{target.Name}' is not a solid. Only faces of solids can be tapered.");
            }
            var (topoFace, faceReference) = GetFace(target, face, true, "for tapering");
            var brep = target.Shape.GetBRep();

            SubshapeReference baseReference;
            if (baseEdge != null)
            {
                var edges = brep.Edges();
                if (baseEdge < 0 || baseEdge >= edges.Count)
                {
                    throw new McpException($"No edge with index {baseEdge} exists, the body has {edges.Count} edges (0 to {edges.Count - 1}).");
                }
                if (topoFace.Edges().IndexOfSame(edges[baseEdge.Value]) < 0)
                {
                    throw new McpException($"The edge {baseEdge} does not bound the face {face}. Use list_edges with face={face}.");
                }
                baseReference = target.Shape.GetSubshapeReference(SubshapeType.Edge, baseEdge.Value);
            }
            else
            {
                var worldPoint = Pnt.Origin.Translated(ToVec(baseVertex, nameof(baseVertex), Vec.Zero));
                var localPoint = worldPoint.Transformed(target.GetTransformation().Inverted());
                var vertex = topoFace.Vertices().OrderBy(v => v.Pnt().Distance(localPoint)).First();
                baseReference = target.Shape.GetSubshapeReference(SubshapeType.Vertex, brep.Vertices().IndexOfSame(vertex));
            }

            Core.Shapes.Taper.Create(target, faceReference, baseReference
                                                          ?? throw new McpException("The base edge or vertex cannot be referenced."), angle);

            return FinishShape(target, "taper", "Check the angle and that the pivot lies on the face.");
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "imprint")]
    [Description("Imprints the contours of a sketch onto a planar face of a solid: 'raise' adds material (a boss), "
                 + "'lower' removes it (a pocket) by 'depth', 'cutout' cuts through the whole solid. "
                 + "The sketch is placed on the face plane: create it with create_sketch(plane='face', body, face) without "
                 + "'origin', 'xDirection' or 'offset', so its coordinates match. The sketch is copied into the imprint, "
                 + "the sketch body is hidden afterwards and not linked, it can be deleted. "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> Imprint(
        [Description("The solid body, referenced by its guid or its unique name.")] string body,
        [Description("Index of the planar face, from list_faces.")] int face,
        [Description("The body with the sketch to imprint (guid or unique name).")] string sketch,
        [Description("'raise' (default), 'lower' or 'cutout'.")] string mode = "raise",
        [Description("Height or depth (mm), not used for 'cutout'. Default 1.")] double depth = 1,
        [Description("Draft angle of the side walls (degrees, between -89 and 89). Default 0.")] double draftAngle = 0)
        => Invoke(() =>
        {
            var imprintMode = ImprintModeNames.Parse(mode, nameof(mode));
            if (imprintMode != Core.Shapes.Imprint.ImprintMode.Cutout)
            {
                RequirePositive(depth, nameof(depth));
            }
            RequireAngle(draftAngle, nameof(draftAngle), 89, allowZero: true);

            var target = ResolveBody(body);
            if (target.Shape?.ShapeType != ShapeType.Solid)
            {
                throw new McpException($"The body '{target.Name}' is not a solid. Only faces of solids can be imprinted.");
            }
            var (topoFace, faceReference) = GetFace(target, face, true, "for imprinting");

            var sketchBody = ResolveBody(sketch);
            if (sketchBody == target || sketchBody.Shape?.ShapeType != ShapeType.Sketch || CountWires(sketchBody.Shape).Closed == 0)
            {
                throw new McpException($"The body '{sketchBody.Name}' must be another body with a sketch containing a closed contour.");
            }
            if (DependsOn(sketchBody, target))
            {
                throw new McpException($"The sketch body '{sketchBody.Name}' already uses '{target.Name}', using it would create a cycle.");
            }
            _CheckSketchOnFace(target, topoFace, sketchBody, face);

            // Like the UI, the imprint owns an embedded sketch. Linking the sketch body as operand is not supported
            // by Imprint (it would rebind the sketch body to the face plane). So the sketch elements are copied.
            var sourceSketch = sketchBody.Shape as Sketch
                               ?? throw new McpException($"The current shape of body '{sketchBody.Name}' must be a plain sketch, not a {sketchBody.Shape.GetType().Name}.");
            var embeddedSketch = new Sketch { Body = target };
            var imprint = Core.Shapes.Imprint.Create(target, faceReference, embeddedSketch);
            embeddedSketch.AddElements(new Dictionary<int, Pnt2d>(sourceSketch.Points), null,
                                       sourceSketch.Segments.ToDictionary(kvp => kvp.Key, kvp => kvp.Value.Clone()),
                                       sourceSketch.Constraints.Select(c => c.Clone()).ToList());
            imprint.Mode = imprintMode;
            imprint.Depth = depth;
            imprint.DraftAngle = draftAngle;
            sketchBody.IsVisible = false;

            return FinishShape(target, "imprint", "Check that the sketch contours lie within the face.");
        });

    //--------------------------------------------------------------------------------------------------

    // The imprint places the sketch on the face plane, centered on the face. Make sure the sketch body is
    // placed there too, so the result is where the agent drew it.
    static void _CheckSketchOnFace(Body target, TopoDS_Face localFace, Body sketchBody, int faceIndex)
    {
        if (!FaceAlgo.GetCenteredPlaneFromFace(localFace, out var localPlane))
        {
            throw new McpException($"The face {faceIndex} is not planar.");
        }
        var expected = localPlane.Position.Transformed(target.GetTransformation());
        var actual = sketchBody.GetCoordinateSystem();
        if (!expected.Location.IsEqual(actual.Location, 1e-4)
            || !expected.Direction.IsEqual(actual.Direction, 1e-6)
            || !expected.XDirection.IsEqual(actual.XDirection, 1e-6))
        {
            throw new McpException($"The sketch '{sketchBody.Name}' is not placed on the face {faceIndex}. "
                                   + $"Create it with create_sketch(plane='face', body='{target.Name}', face={faceIndex}) "
                                   + "without 'origin', 'xDirection' or 'offset'.");
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Cross section

    [McpServerTool(Name = "cross_section")]
    [Description("Cuts a solid body with a plane and replaces it by the contours of the cut, a 2D shape like a sketch, "
                 + "e.g. to get a profile which can be extruded, revolved or exported. The plane is given in world coordinates, "
                 + "by default through the center of the body's bounding box. 'filter' keeps only the outer or inner contours. "
                 + "Returns the new shape with its bounding box.")]
    public Task<ShapeResult> CrossSection(
        [Description("The solid body, referenced by its guid or its unique name.")] string body,
        [Description("Normal [x, y, z] of the cutting plane in world coordinates.")] double[] planeNormal,
        [Description("A point [x, y, z] on the cutting plane in world coordinates (mm). Default: the center of the body.")] double[]? planeOrigin = null,
        [Description("'all' (default), 'outer' or 'inner' contours.")] string filter = "all")
        => Invoke(() =>
        {
            var normal = ToDir(planeNormal, nameof(planeNormal)) ?? throw new McpException("'planeNormal' is required.");
            var wireFilter = CrossSectionFilterNames.Parse(filter, nameof(filter));

            var target = ResolveBody(body);
            if (target.Shape?.ShapeType != ShapeType.Solid)
            {
                throw new McpException($"The body '{target.Name}' is not a solid. Only solids can be cut into a cross section.");
            }
            var origin = planeOrigin != null
                             ? ToVec(planeOrigin, nameof(planeOrigin), Vec.Zero).ToPnt()
                             : target.Shape.GetTransformedBRep().BoundingBox().Center();

            var plane = new Pln(origin, normal);
            if (target.Shape.GetTransformedBRep().BoundingBox().IsOut(plane))
            {
                throw new McpException($"The plane does not cut the body '{target.Name}'. Move 'planeOrigin' into the body.");
            }

            var section = Core.Shapes.CrossSection.Create(target, plane);
            section.Filter = wireFilter;

            EnsureValidShape(target, "cross section");
            if (target.Shape.GetBRep().Edges().Count == 0)
            {
                throw new McpException($"The plane does not cut the body '{target.Name}'. Move 'planeOrigin' into the body.");
            }
            Commit();
            return ShapeResult.From(target);
        });

    //--------------------------------------------------------------------------------------------------

    #endregion
}
