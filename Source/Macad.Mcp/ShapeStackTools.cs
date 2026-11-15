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
using System.Text.Json;
using System.Threading.Tasks;

namespace Macad.Mcp;

public class ShapeStackTools : ToolsBase
{
    const string _BodyDescription = "The body, referenced by its guid or its unique name.";
    const string _IndexDescription = "Position of the shape in the stack, from list_shape_stack (0 = the root shape at the bottom).";

    //--------------------------------------------------------------------------------------------------

    #region Result structures

    public sealed record ShapeStackEntry(int Index, string Type, string Name, string Guid, bool IsCurrent,
                                         Dictionary<string, object?> Parameters, string[] OperandBodies,
                                         bool HasErrors, string[] Errors);

    public sealed record ShapeUpdateResult(ShapeStackEntry Shape, ShapeResult Body);

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region Tools

    [McpServerTool(Name = "list_shape_stack", ReadOnly = true)]
    [Description("Lists the shape stack of a body from the root shape (index 0) to the current shape on top: "
                 + "each shape with its type, its editable parameters (same names and units as the tool that created it), "
                 + "the bodies it uses as operands, and errors. Parameters are changed with update_shape. "
                 + "Sketches are edited with the sketch tools, which work on the topmost sketch of a body.")]
    public Task<ShapeStackEntry[]> ListShapeStack(
        [Description(_BodyDescription)] string body)
        => Invoke(() =>
        {
            var target = ResolveBody(body);
            var stack = GetShapeStack(target);
            stack.Reverse();
            return stack.Select((shape, index) => _Describe(target, shape, index)).ToArray();
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "update_shape")]
    [Description("Changes parameters of a shape in a body's shape stack, e.g. the depth of an extrude below a fillet. "
                 + "Give only the parameters to change, by the names list_shape_stack shows. "
                 + "Shapes above are rebuilt; if the body cannot be rebuilt, nothing is changed and the error is reported. "
                 + "Operand bodies (boolean operands, loft sections, a custom pipe profile) can be replaced; bodies no longer used are shown again. "
                 + "References to faces and edges cannot be changed; remove the shape and create it again instead. "
                 + "Returns the updated shape entry and the body's new bounding box and volume.")]
    public Task<ShapeUpdateResult> UpdateShape(
        [Description(_BodyDescription)] string body,
        [Description(_IndexDescription)] int index,
        [Description("The parameters to change, as an object of name and new value, e.g. {\"depth\": 12}.")] Dictionary<string, JsonElement> parameters)
        => Invoke(() =>
        {
            var target = ResolveBody(body);
            var shape = _GetShape(target, index);
            if (parameters == null || parameters.Count == 0)
            {
                throw new McpException("Give at least one parameter to change.");
            }

            var definitions = _GetParameters(shape);
            if (definitions.Length == 0)
            {
                throw new McpException($"The shape '{shape.GetType().Name}' has no parameters that can be changed here."
                                       + (shape is Sketch ? " Use the sketch tools to edit sketches." : ""));
            }

            var unknown = parameters.Keys.Where(key => definitions.All(d => !d.Name.Equals(key, StringComparison.OrdinalIgnoreCase))).ToList();
            if (unknown.Count > 0)
            {
                throw new McpException($"Unknown parameter(s) {string.Join(", ", unknown.Select(k => $"'{k}'"))} for {shape.GetType().Name}. "
                                       + $"Available: {string.Join(", ", definitions.Select(d => d.Name))}.");
            }

            // Apply in definition order, so dependent parameters (e.g. plane before center) are consistent.
            var context = new _UpdateContext(target, shape);
            foreach (var definition in definitions)
            {
                var entry = parameters.FirstOrDefault(kvp => kvp.Key.Equals(definition.Name, StringComparison.OrdinalIgnoreCase));
                if (entry.Key != null)
                {
                    context.Given.Add(definition.Name);
                    definition.Set(context, entry.Value);
                }
            }
            foreach (var validate in context.Validations.Distinct())
            {
                validate();
            }

            try
            {
                EnsureValidShape(target, shape.GetType().Name, shape is Revolve ? RevolveHint : null, shape);
                if (shape is BoxJoint or HalvedJoint)
                {
                    foreach (var other in GetOperandBodies(shape))
                    {
                        EnsureValidShape(other, shape.GetType().Name);
                    }
                }
            }
            catch (McpException ex)
            {
                throw new McpException($"The body cannot be rebuilt with these parameters, nothing was changed.\n{ex.Message}", ex);
            }
            Commit();

            return new ShapeUpdateResult(_Describe(target, shape, index), ShapeResult.From(target));
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "remove_shape", Destructive = true)]
    [Description("Removes a modifier from a body's shape stack; the shapes above then work on the shape below it. "
                 + "The root shape (index 0) cannot be removed, delete the body instead. "
                 + "Operand bodies of the removed shape are shown again, unless other bodies still use them. "
                 + "Returns the body's new bounding box and volume.")]
    public Task<ShapeResult> RemoveShape(
        [Description(_BodyDescription)] string body,
        [Description(_IndexDescription)] int index)
        => Invoke(() =>
        {
            var target = ResolveBody(body);
            var shape = _GetShape(target, index);
            if (shape is not ModifierBase || index == 0)
            {
                throw new McpException($"The root shape '{shape.GetType().Name}' cannot be removed. Delete the body instead.");
            }
            var operands = shape is BoxJoint or HalvedJoint ? [] : GetOperandBodies(shape);
            if (!target.RemoveShape(shape))
            {
                throw new McpException($"The shape '{shape.GetType().Name}' could not be removed.");
            }

            try
            {
                EnsureValid(target);
            }
            catch (McpException ex)
            {
                throw new McpException($"The body cannot be rebuilt without this shape, nothing was changed.\n{ex.Message}", ex);
            }
            ShowUnusedOperands(operands);
            Commit();
            return ShapeResult.From(target);
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Helper

    static Shape _GetShape(Body body, int index)
    {
        var stack = GetShapeStack(body);
        stack.Reverse();
        if (index < 0 || index >= stack.Count)
        {
            throw new McpException($"No shape with index {index} exists, the body '{body.Name}' has {stack.Count} shapes (0 to {stack.Count - 1}).");
        }
        return stack[index];
    }

    //--------------------------------------------------------------------------------------------------

    static ShapeStackEntry _Describe(Body body, Shape shape, int index)
    {
        var context = new _UpdateContext(body, shape);
        var parameters = _GetParameters(shape).ToDictionary(d => d.Name, d => d.Get(context));
        var operandBodies = GetOperandBodies(shape).Select(b => b.Name).ToArray();
        var errors = CoreContext.Current.MessageHandler?.GetEntityMessages(shape)?
                                .Where(m => m.Severity == MessageSeverity.Error)
                                .Select(m => m.Text)
                                .Distinct()
                                .ToArray() ?? [];
        return new ShapeStackEntry(index, shape.GetType().Name, shape.Name, shape.Guid.ToString(), body.Shape == shape,
                                   parameters, operandBodies, shape.HasErrors, errors);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Parameter definitions

    sealed class _UpdateContext(Body body, Shape shape)
    {
        public Body Body { get; } = body;
        public Shape Shape { get; } = shape;
        public HashSet<string> Given { get; } = [];
        public List<Action> Validations { get; } = [];
    }

    //--------------------------------------------------------------------------------------------------

    sealed record _Param(string Name, Func<_UpdateContext, object?> Get, Action<_UpdateContext, JsonElement> Set);

    static _Param P<T>(string name, Func<T, object?> get, Action<T, JsonElement, _UpdateContext> set) where T : Shape
        => new(name, ctx => get((T)ctx.Shape), (ctx, value) => set((T)ctx.Shape, value, ctx));

    //--------------------------------------------------------------------------------------------------

    static _Param[] _GetParameters(Shape shape)
    {
        return shape switch
        {
            Extrude => _ExtrudeParams,
            Revolve => _RevolveParams,
            Pipe => _PipeParams,
            Loft => _LoftParams,
            BooleanBase => _BooleanParams,
            Fillet => _FilletParams,
            Chamfer => _ChamferParams,
            Mirror => _MirrorParams,
            LinearArray => _LinearArrayParams,
            CircularArray => _CircularArrayParams,
            Offset => _OffsetParams,
            Scale => _ScaleParams,
            Taper => _TaperParams,
            Imprint => _ImprintParams,
            CrossSection => _CrossSectionParams,
            BoxJoint => _BoxJointParams,
            HalvedJoint => _HalvedJointParams,
            FlangeSheet => _FlangeSheetParams,
            _ => []
        };
    }

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _ExtrudeParams =
    [
        P<Extrude>("depth", s => s.Depth, (s, v, _) => s.Depth = _Double(v, "depth", RequireNonZero)),
        P<Extrude>("symmetric", s => s.Symmetric, (s, v, _) => s.Symmetric = _Bool(v, "symmetric")),
    ];

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _RevolveParams =
    [
        P<Revolve>("axis", s => RevolveAxisNames.Format(s.Axis), (s, v, ctx) =>
        {
            s.Axis = RevolveAxisNames.Parse(_String(v, "axis"), "axis");
            _CheckRevolve(s, ctx);
        }),
        P<Revolve>("offset", s => new[] { s.Offset.X, s.Offset.Y }, (s, v, ctx) =>
        {
            s.Offset = ToRevolveOffset(_DoubleArray(v, "offset"));
            _CheckRevolve(s, ctx);
        }),
        P<Revolve>("angle", s => s.SegmentAngle, (s, v, _) => s.SegmentAngle = _Double(v, "angle", (a, n) => RequireAngle(a, n, 360))),
    ];

    static void _CheckRevolve(Revolve revolve, _UpdateContext context)
    {
        context.Validations.Add(() => CheckProfileAgainstAxis(revolve));
    }

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _PipeParams =
    [
        P<Pipe>("profile", s => PipeProfileNames.Format(s.Profile), (s, v, ctx) =>
        {
            var profile = PipeProfileNames.Parse(_String(v, "profile"), "profile");
            if (s.Profile == Pipe.ProfileType.Custom && profile != Pipe.ProfileType.Custom)
            {
                _ReplaceOperandBodies(s, ctx, []);
            }
            s.Profile = profile;
            _CheckPipe(s, ctx);
        }),
        P<Pipe>("profileBody", s => s.Profile == Pipe.ProfileType.Custom ? GetOperandBodies(s).FirstOrDefault()?.Name : null, (s, v, ctx) =>
        {
            if (ctx.Given.Contains("profile") && s.Profile != Pipe.ProfileType.Custom)
                throw new McpException("'profileBody' is only used with profile 'custom'.");
            _ReplaceOperandBodies(s, ctx, [ResolveSketchOperand(_String(v, "profileBody"), ctx.Body, "profile", true)]);
            s.Profile = Pipe.ProfileType.Custom;
            _CheckPipe(s, ctx);
        }),
        P<Pipe>("sizeX", s => s.Profile == Pipe.ProfileType.Custom ? null : s.SizeX, (s, v, ctx) =>
        {
            s.SizeX = _Positive(v, "sizeX");
            _CheckPipe(s, ctx);
        }),
        P<Pipe>("sizeY", s => s.Profile == Pipe.ProfileType.Custom || s.Flags.HasFlag(Pipe.PipeFlags.SymmetricProfile) ? null : s.SizeY, (s, v, ctx) =>
        {
            _CheckPipe(s, ctx);
            if (v.ValueKind == JsonValueKind.Null)
            {
                s.Flags |= Pipe.PipeFlags.SymmetricProfile;
                return;
            }
            s.SizeY = _Positive(v, "sizeY");
            s.Flags &= ~Pipe.PipeFlags.SymmetricProfile;
        }),
        P<Pipe>("thickness", s => s.Profile is Pipe.ProfileType.HollowCircle or Pipe.ProfileType.HollowRectangle ? s.Thickness : null, (s, v, ctx) =>
        {
            s.Thickness = _Positive(v, "thickness");
            _CheckPipe(s, ctx);
        }),
        P<Pipe>("rotation", s => s.Rotation, (s, v, _) => s.Rotation = _Double(v, "rotation")),
        P<Pipe>("bendRadius", s => s.Flags.HasFlag(Pipe.PipeFlags.AutoBendRadius) ? null : s.BendRadius, (s, v, _) =>
        {
            if (v.ValueKind == JsonValueKind.Null)
            {
                s.Flags |= Pipe.PipeFlags.AutoBendRadius;
                return;
            }
            s.BendRadius = _Positive(v, "bendRadius");
            s.Flags &= ~Pipe.PipeFlags.AutoBendRadius;
        }),
    ];

    static void _CheckPipe(Pipe pipe, _UpdateContext context)
    {
        context.Validations.Add(() =>
        {
            switch (pipe.Profile)
            {
                case Pipe.ProfileType.Custom when pipe.Operands.Count < 2:
                    throw new McpException("Profile 'custom' requires 'profileBody'.");
                case Pipe.ProfileType.HollowCircle or Pipe.ProfileType.HollowRectangle:
                    RequirePipeThickness(pipe.Thickness, pipe.SizeX,
                                         pipe.Flags.HasFlag(Pipe.PipeFlags.SymmetricProfile) ? pipe.SizeX : pipe.SizeY);
                    break;
            }
        });
    }

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _LoftParams =
    [
        P<Loft>("sections", s => GetOperandBodies(s).Select(b => b.Name).ToArray(), (s, v, ctx) =>
        {
            var references = _StringArray(v, "sections");
            if (references.Length == 0)
                throw new McpException("At least one further section is required.");

            var sections = new List<Body>();
            foreach (var reference in references)
            {
                var section = ResolveSketchOperand(reference, ctx.Body, "section", false);
                if (sections.Contains(section))
                    throw new McpException($"The section '{section.Name}' is given more than once.");
                sections.Add(section);
            }
            _ReplaceOperandBodies(s, ctx, sections);
        }),
        P<Loft>("capStart", s => s.StartCapping != Loft.CappingMode.None, (s, v, _) => s.StartCapping = _Bool(v, "capStart") ? Loft.CappingMode.Flat : Loft.CappingMode.None),
        P<Loft>("capEnd", s => s.EndCapping != Loft.CappingMode.None, (s, v, _) => s.EndCapping = _Bool(v, "capEnd") ? Loft.CappingMode.Flat : Loft.CappingMode.None),
        P<Loft>("thickness", s => s.Thickness, (s, v, _) => s.Thickness = _Positive(v, "thickness")),
        P<Loft>("thickenOutwards", s => s.ThickenDirection == Loft.Direction.Outwards, (s, v, _) => s.ThickenDirection = _Bool(v, "thickenOutwards") ? Loft.Direction.Outwards : Loft.Direction.Inwards),
    ];

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _BooleanParams =
    [
        P<BooleanBase>("operands", s => GetOperandBodies(s).Select(b => b.Name).ToArray(), (s, v, ctx) =>
        {
            var references = _StringArray(v, "operands");
            if (references.Length == 0)
                throw new McpException("At least one operand body is required.");

            var bodies = new List<Body>();
            foreach (var reference in references)
            {
                var operand = ResolveBody(reference);
                if (operand == ctx.Body || bodies.Contains(operand))
                    throw new McpException($"The body '{operand.Name}' cannot be used as operand here (itself or given twice).");
                if (DependsOn(operand, ctx.Body))
                    throw new McpException($"The body '{operand.Name}' already uses '{ctx.Body.Name}', using it would create a cycle.");
                bodies.Add(operand);
            }

            _ReplaceOperandBodies(s, ctx, bodies);
        }),
    ];

    // Replaces all operands after the first (the shape below) with the bodies, which are hidden.
    // Bodies which are no longer used afterwards are shown again.
    static void _ReplaceOperandBodies(ModifierBase modifier, _UpdateContext context, IReadOnlyCollection<Body> bodies)
    {
        var previous = GetOperandBodies(modifier);
        context.Body.SaveTopologyUndo();
        for (int i = modifier.Operands.Count - 1; i >= 1; i--)
        {
            modifier.RemoveOperand(i);
        }
        foreach (var body in bodies)
        {
            modifier.AddOperand(new BodyShapeOperand(body));
            body.IsVisible = false;
        }
        ShowUnusedOperands(previous.Except(bodies));
    }

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _FilletParams =
    [
        P<Fillet>("radius", s => s.Radius, (s, v, _) => s.Radius = _Positive(v, "radius")),
    ];

    static readonly _Param[] _ChamferParams =
    [
        P<Chamfer>("distance", s => s.Distance, (s, v, _) => s.Distance = _Positive(v, "distance")),
        P<Chamfer>("secondDistance", s => s.Mode == Chamfer.ChamferModes.TwoDistances ? s.SecondDistance : null, (s, v, _) =>
        {
            if (v.ValueKind == JsonValueKind.Null)
            {
                if (s.Mode == Chamfer.ChamferModes.TwoDistances) s.Mode = Chamfer.ChamferModes.Symmetric;
                return;
            }
            s.SecondDistance = _Positive(v, "secondDistance");
            s.Mode = Chamfer.ChamferModes.TwoDistances;
        }),
        P<Chamfer>("angle", s => s.Mode == Chamfer.ChamferModes.DistanceAngle ? s.Angle : null, (s, v, _) =>
        {
            if (v.ValueKind == JsonValueKind.Null)
            {
                if (s.Mode == Chamfer.ChamferModes.DistanceAngle) s.Mode = Chamfer.ChamferModes.Symmetric;
                return;
            }
            var angle = _Double(v, "angle", RequireChamferAngle);
            if (s.Mode == Chamfer.ChamferModes.TwoDistances)
                throw new McpException("Set 'secondDistance' to null to switch from two distances to distance and angle.");
            s.Angle = angle;
            s.Mode = Chamfer.ChamferModes.DistanceAngle;
        }),
        P<Chamfer>("reverse", s => s.ReverseOrientation, (s, v, _) => s.ReverseOrientation = _Bool(v, "reverse")),
    ];

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _MirrorParams =
    [
        P<Mirror>("offset", s => s.Mode == Mirror.MirrorMode.EdgeOrFace ? s.Offset : null, (s, v, _) =>
        {
            if (s.Mode != Mirror.MirrorMode.EdgeOrFace)
                throw new McpException("'offset' is only used when mirroring across a face. Change 'planeOrigin' to move the plane.");
            s.Offset = _Double(v, "offset");
        }),
        new _Param("planeOrigin", ctx => _GetMirrorPlane(ctx) is { } plane ? _Round(plane.Location) : null, (ctx, v) =>
        {
            var plane = _GetMirrorPlane(ctx) ?? throw new McpException("The mirror plane could not be computed.");
            var origin = ToVec(_DoubleArray(v, "planeOrigin"), "planeOrigin", Vec.Zero).ToPnt();
            _SetMirrorPlane(ctx, new Ax2(origin, plane.Direction));
        }),
        new _Param("planeNormal", ctx => _GetMirrorPlane(ctx) is { } plane ? _Round(plane.Direction) : null, (ctx, v) =>
        {
            var plane = _GetMirrorPlane(ctx) ?? throw new McpException("The mirror plane could not be computed.");
            var normal = ToDir(_DoubleArray(v, "planeNormal"), "planeNormal")!.Value;
            _SetMirrorPlane(ctx, new Ax2(plane.Location, normal));
        }),
        P<Mirror>("keepOriginal", s => s.KeepOriginal, (s, v, _) => s.KeepOriginal = _Bool(v, "keepOriginal")),
    ];

    // The mirror plane in world coordinates. For a mirror across a face, it is the face plane moved by the offset.
    static Ax2? _GetMirrorPlane(_UpdateContext context)
    {
        return ((Mirror)context.Shape).GetMirrorAxis(out var plane) ? plane.Transformed(context.Body.GetTransformation()) : null;
    }

    // Setting the plane turns a mirror across a face into a mirror across a fixed plane.
    static void _SetMirrorPlane(_UpdateContext context, Ax2 worldPlane)
    {
        var mirror = (Mirror)context.Shape;
        mirror.Mode = Mirror.MirrorMode.Axis;
        mirror.MirrorAxis = worldPlane.Transformed(context.Body.GetTransformation().Inverted());
    }

    static double[] _Round(Pnt point)
    {
        return [Math.Round(point.X, 9), Math.Round(point.Y, 9), Math.Round(point.Z, 9)];
    }

    static double[] _Round(Dir direction)
    {
        return [Math.Round(direction.X, 9), Math.Round(direction.Y, 9), Math.Round(direction.Z, 9)];
    }

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _LinearArrayParams =
    [
        P<LinearArray>("quantity1", s => (int)s.Quantity1, (s, v, ctx) => { s.Quantity1 = _Quantity(v, "quantity1"); _CheckLinearArray(s, ctx); }),
        P<LinearArray>("distance1", s => s.Distance1, (s, v, _) => s.Distance1 = _Double(v, "distance1")),
        P<LinearArray>("quantity2", s => (int)s.Quantity2, (s, v, ctx) => { s.Quantity2 = _Quantity(v, "quantity2"); _CheckLinearArray(s, ctx); }),
        P<LinearArray>("distance2", s => s.Distance2, (s, v, _) => s.Distance2 = _Double(v, "distance2")),
        P<LinearArray>("plane", s => LinearArrayPlaneNames.Format(s.Plane), (s, v, _) => s.Plane = LinearArrayPlaneNames.Parse(_String(v, "plane"), "plane")),
        P<LinearArray>("rotation", s => s.Rotation, (s, v, _) => s.Rotation = _Double(v, "rotation")),
        P<LinearArray>("distanceMode", s => DistanceModeNames.Format(s.Quantity1 > 1 ? s.DistanceMode1 : s.DistanceMode2), (s, v, ctx) =>
        {
            var mode = DistanceModeNames.Parse(_String(v, "distanceMode"), "distanceMode");
            s.DistanceMode1 = mode;
            s.DistanceMode2 = mode;
            _CheckLinearArray(s, ctx);
        }),
        P<LinearArray>("alignment", s => LinearArrayAlignmentNames.Format(s.Alignment1), (s, v, _) =>
        {
            var alignment = LinearArrayAlignmentNames.Parse(_String(v, "alignment"), "alignment");
            s.Alignment1 = alignment;
            s.Alignment2 = alignment;
        }),
        P<LinearArray>("border", s => s.Border, (s, v, _) => s.Border = _Bool(v, "border")),
    ];

    static void _CheckLinearArray(LinearArray array, _UpdateContext context)
    {
        context.Validations.Add(() =>
        {
            if (array.Quantity1 * array.Quantity2 < 2)
                throw new McpException("The array needs at least two copies (quantity1 * quantity2 >= 2).");
            // Extent modes divide by quantity - 1
            if (array.Quantity1 == 1) array.DistanceMode1 = LinearArray.DistanceMode.Interval;
            if (array.Quantity2 == 1) array.DistanceMode2 = LinearArray.DistanceMode.Interval;
        });
    }

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _CircularArrayParams =
    [
        P<CircularArray>("quantity", s => (int)s.Quantity, (s, v, _) => s.Quantity = _Quantity(v, "quantity", 2)),
        P<CircularArray>("plane", s => CircularArrayPlaneNames.Format(s.Plane), (s, v, ctx) =>
        {
            var center = GetCircularArrayCenter(ctx.Body, s);
            s.Plane = CircularArrayPlaneNames.Parse(_String(v, "plane"), "plane");
            (s.Radius, s.OriginalAngle) = ComputeCircularArrayPlacement(ctx.Body, s.Plane, center);
        }),
        new _Param("center", ctx =>
        {
            var center = GetCircularArrayCenter(ctx.Body, (CircularArray)ctx.Shape);
            return _Round(center);
        }, (ctx, v) =>
        {
            var array = (CircularArray)ctx.Shape;
            var center = ToVec(_DoubleArray(v, "center"), "center", Vec.Zero).ToPnt();
            (array.Radius, array.OriginalAngle) = ComputeCircularArrayPlacement(ctx.Body, array.Plane, center);
        }),
        P<CircularArray>("range", s => s.Range, (s, v, _) => s.Range = _Double(v, "range", (a, n) => RequireAngle(a, n, 360))),
        P<CircularArray>("alignment", s => CircularArrayAlignmentNames.Format(s.Alignment), (s, v, _) => s.Alignment = CircularArrayAlignmentNames.Parse(_String(v, "alignment"), "alignment")),
        P<CircularArray>("keepOrientation", s => s.KeepOrientation, (s, v, _) => s.KeepOrientation = _Bool(v, "keepOrientation")),
    ];

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _OffsetParams =
    [
        P<Offset>("distance", s => s.Distance, (s, v, _) => s.Distance = _Double(v, "distance", RequireNonZero)),
        P<Offset>("corner", s => OffsetCornerNames.Format(s.Corner), (s, v, _) => s.Corner = OffsetCornerNames.Parse(_String(v, "corner"), "corner")),
        P<Offset>("keepOriginal", s => s.KeepOriginal, (s, v, _) => s.KeepOriginal = _Bool(v, "keepOriginal")),
    ];

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _ScaleParams =
    [
        P<Scale>("factor", s => s.Uniform ? s.Factor.X : null, (s, v, _) =>
        {
            var factor = _Double(v, "factor", RequireScaleFactor);
            s.Uniform = true;
            s.Factor = new Vec(factor, factor, factor);
        }),
        P<Scale>("factorX", s => s.Uniform ? null : s.Factor.X, (s, v, _) => { s.Uniform = false; s.Factor = new Vec(_Double(v, "factorX", RequireScaleFactor), s.Factor.Y, s.Factor.Z); }),
        P<Scale>("factorY", s => s.Uniform ? null : s.Factor.Y, (s, v, _) => { s.Uniform = false; s.Factor = new Vec(s.Factor.X, _Double(v, "factorY", RequireScaleFactor), s.Factor.Z); }),
        P<Scale>("factorZ", s => s.Uniform ? null : s.Factor.Z, (s, v, _) => { s.Uniform = false; s.Factor = new Vec(s.Factor.X, s.Factor.Y, _Double(v, "factorZ", RequireScaleFactor)); }),
    ];

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _TaperParams =
    [
        P<Taper>("angle", s => s.Angle, (s, v, _) => s.Angle = _Double(v, "angle", (a, n) => RequireAngle(a, n, 89))),
    ];

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _ImprintParams =
    [
        P<Imprint>("mode", s => ImprintModeNames.Format(s.Mode), (s, v, _) => s.Mode = ImprintModeNames.Parse(_String(v, "mode"), "mode")),
        P<Imprint>("depth", s => s.Depth, (s, v, _) => s.Depth = _Positive(v, "depth")),
        P<Imprint>("draftAngle", s => s.DraftAngle, (s, v, _) => s.DraftAngle = _Double(v, "draftAngle", (a, n) => RequireAngle(a, n, 89, allowZero: true))),
        // Null for an imprint with an embedded sketch (made in the UI); setting it links the sketch body instead
        P<Imprint>("sketch", s => GetOperandBodies(s).FirstOrDefault()?.Name, (s, v, ctx)
            => _ReplaceOperandBodies(s, ctx, [ResolveSketchOperand(_String(v, "sketch"), ctx.Body, "sketch", true)])),
    ];

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _CrossSectionParams =
    [
        new _Param("planeOrigin", ctx => _Round(_GetSectionPlane(ctx).Location), (ctx, v) =>
        {
            var origin = ToVec(_DoubleArray(v, "planeOrigin"), "planeOrigin", Vec.Zero).ToPnt();
            _SetSectionPlane(ctx, new Pln(origin, _GetSectionPlane(ctx).Axis.Direction));
        }),
        new _Param("planeNormal", ctx => _Round(_GetSectionPlane(ctx).Axis.Direction), (ctx, v) =>
        {
            var normal = ToDir(_DoubleArray(v, "planeNormal"), "planeNormal")!.Value;
            _SetSectionPlane(ctx, new Pln(_GetSectionPlane(ctx).Location, normal));
        }),
        P<CrossSection>("filter", s => CrossSectionFilterNames.Format(s.Filter), (s, v, _) => s.Filter = CrossSectionFilterNames.Parse(_String(v, "filter"), "filter")),
    ];

    // The cutting plane in world coordinates.
    static Pln _GetSectionPlane(_UpdateContext context)
    {
        return ((CrossSection)context.Shape).Plane.Transformed(context.Body.GetTransformation());
    }

    static void _SetSectionPlane(_UpdateContext context, Pln worldPlane)
    {
        ((CrossSection)context.Shape).Plane = worldPlane.Transformed(context.Body.GetTransformation().Inverted());
    }

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _BoxJointParams =
    [
        P<BoxJoint>("boxCount", s => s.BoxCount, (s, v, _) => s.BoxCount = (int)_Quantity(v, "boxCount", 2)),
        P<BoxJoint>("ratio", s => s.Ratio, (s, v, _) => s.Ratio = _Double(v, "ratio", RequireRatio)),
        P<BoxJoint>("removeExcess", s => s.RemoveExcess, (s, v, _) => s.RemoveExcess = _Bool(v, "removeExcess")),
        P<BoxJoint>("reverseOrder", s => s.ReverseOrder, (s, v, _) => s.ReverseOrder = _Bool(v, "reverseOrder")),
    ];

    static readonly _Param[] _HalvedJointParams =
    [
        P<HalvedJoint>("ratio", s => s.Ratio, (s, v, _) => s.Ratio = _Double(v, "ratio", RequireRatio)),
    ];

    //--------------------------------------------------------------------------------------------------

    static readonly _Param[] _FlangeSheetParams =
    [
        P<FlangeSheet>("angle", s => s.Angle, (s, v, _) => s.Angle = _Double(v, "angle", RequireBendAngle)),
        P<FlangeSheet>("length", s => s.Length, (s, v, _) => s.Length = _Positive(v, "length")),
        P<FlangeSheet>("radius", s => s.Radius, (s, v, _) => s.Radius = _Positive(v, "radius")),
        P<FlangeSheet>("reverse", s => s.Reverse, (s, v, _) => s.Reverse = _Bool(v, "reverse")),
        P<FlangeSheet>("startGap", s => s.StartGap, (s, v, _) => s.StartGap = _Double(v, "startGap", RequireNonNegative)),
        P<FlangeSheet>("endGap", s => s.EndGap, (s, v, _) => s.EndGap = _Double(v, "endGap", RequireNonNegative)),
        P<FlangeSheet>("relief", s => FlangeReliefNames.Format(s.Relief), (s, v, _) => s.Relief = FlangeReliefNames.Parse(_String(v, "relief"), "relief")),
    ];

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Value conversion

    static double _Double(JsonElement value, string name)
    {
        if (value.ValueKind != JsonValueKind.Number || !value.TryGetDouble(out var result) || !double.IsFinite(result))
        {
            throw new McpException($"'{name}' must be a finite number (got {value}).");
        }
        return result;
    }

    // Converts the value and checks it with one of the parameter rules the creating tools use.
    static double _Double(JsonElement value, string name, Action<double, string> rule)
    {
        var result = _Double(value, name);
        rule(result, name);
        return result;
    }

    static double _Positive(JsonElement value, string name)
    {
        return _Double(value, name, RequirePositive);
    }

    static uint _Quantity(JsonElement value, string name, int minimum = 1)
    {
        if (value.ValueKind != JsonValueKind.Number || !value.TryGetInt32(out var result))
        {
            throw new McpException($"'{name}' must be a whole number (got {value}).");
        }
        RequireQuantity(result, name, minimum);
        return (uint)result;
    }

    static bool _Bool(JsonElement value, string name)
    {
        return value.ValueKind switch
        {
            JsonValueKind.True => true,
            JsonValueKind.False => false,
            _ => throw new McpException($"'{name}' must be true or false (got {value}).")
        };
    }

    static string _String(JsonElement value, string name)
    {
        return value.ValueKind == JsonValueKind.String
                   ? value.GetString()!
                   : throw new McpException($"'{name}' must be a string (got {value}).");
    }

    static double[] _DoubleArray(JsonElement value, string name)
    {
        if (value.ValueKind != JsonValueKind.Array)
        {
            throw new McpException($"'{name}' must be an array of numbers (got {value}).");
        }
        return value.EnumerateArray().Select(e => _Double(e, name)).ToArray();
    }

    static string[] _StringArray(JsonElement value, string name)
    {
        if (value.ValueKind != JsonValueKind.Array)
        {
            throw new McpException($"'{name}' must be an array of strings (got {value}).");
        }
        return value.EnumerateArray().Select(e => _String(e, name)).ToArray();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
