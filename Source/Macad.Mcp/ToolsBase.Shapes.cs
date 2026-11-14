using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using ModelContextProtocol;
using System;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Mcp;

// Names, parameter rules and checks of shapes, shared by the tools creating a shape and update_shape changing it later.
public abstract partial class ToolsBase
{
    #region Names

    // Maps the names the tools use for the values of an enum, in both directions.
    protected sealed class NameMap<T> where T : struct, Enum
    {
        readonly (string Name, T Value)[] _Entries;

        //--------------------------------------------------------------------------------------------------

        public NameMap(params (string Name, T Value)[] entries)
        {
            _Entries = entries;
        }

        //--------------------------------------------------------------------------------------------------

        // Names all values of the enum in snake_case (e.g. OverallExtent is 'overall_extent'), except the given ones.
        public static NameMap<T> FromEnum(params T[] except)
        {
            return new NameMap<T>(Enum.GetValues<T>()
                                      .Where(value => !except.Contains(value))
                                      .Select(value => (_ToSnakeCase(value.ToString()), value))
                                      .ToArray());
        }

        //--------------------------------------------------------------------------------------------------

        // The names for an error message, e.g. "'round' or 'angular'".
        public string Allowed
        {
            get
            {
                var names = _Entries.Select(entry => $"'{entry.Name}'").ToArray();
                return names.Length == 1 ? names[0] : string.Join(", ", names[..^1]) + " or " + names[^1];
            }
        }

        //--------------------------------------------------------------------------------------------------

        public T Parse(string? name, string parameter)
        {
            var trimmed = name?.Trim();
            foreach (var entry in _Entries)
            {
                if (string.Equals(entry.Name, trimmed, StringComparison.OrdinalIgnoreCase))
                {
                    return entry.Value;
                }
            }
            throw new McpException($"Unknown {parameter} '{name}'. Use {Allowed}.");
        }

        //--------------------------------------------------------------------------------------------------

        public string Format(T value)
        {
            foreach (var entry in _Entries)
            {
                if (entry.Value.Equals(value))
                {
                    return entry.Name;
                }
            }
            return _ToSnakeCase(value.ToString());
        }

        //--------------------------------------------------------------------------------------------------

        static string _ToSnakeCase(string name)
        {
            return string.Concat(name.Select((c, i) => i > 0 && char.IsUpper(c) ? "_" + char.ToLowerInvariant(c) : char.ToLowerInvariant(c).ToString()));
        }
    }

    //--------------------------------------------------------------------------------------------------

    // 'z' is the sketch normal and is rejected by CheckProfileAgainstAxis, but a revolve created in the UI may use it.
    protected static readonly NameMap<Revolve.RevolveAxis> RevolveAxisNames = new(
        ("x", Revolve.RevolveAxis.LocalX), ("y", Revolve.RevolveAxis.LocalY), ("z", Revolve.RevolveAxis.LocalZ),
        ("world_x", Revolve.RevolveAxis.WorldX), ("world_y", Revolve.RevolveAxis.WorldY), ("world_z", Revolve.RevolveAxis.WorldZ));

    protected static readonly NameMap<Pipe.ProfileType> PipeProfileNames = NameMap<Pipe.ProfileType>.FromEnum();
    protected static readonly NameMap<Offset.CornerType> OffsetCornerNames = NameMap<Offset.CornerType>.FromEnum();
    protected static readonly NameMap<Imprint.ImprintMode> ImprintModeNames = NameMap<Imprint.ImprintMode>.FromEnum(Imprint.ImprintMode.Default);

    protected static readonly NameMap<LinearArray.PlaneType> LinearArrayPlaneNames = new(
        ("XY", LinearArray.PlaneType.XY), ("ZX", LinearArray.PlaneType.ZX), ("YZ", LinearArray.PlaneType.YZ));
    protected static readonly NameMap<LinearArray.DistanceMode> DistanceModeNames = NameMap<LinearArray.DistanceMode>.FromEnum();
    protected static readonly NameMap<LinearArray.AlignmentMode> LinearArrayAlignmentNames = NameMap<LinearArray.AlignmentMode>.FromEnum();

    protected static readonly NameMap<CircularArray.PlaneType> CircularArrayPlaneNames = new(
        ("XY", CircularArray.PlaneType.XY), ("ZX", CircularArray.PlaneType.ZX), ("YZ", CircularArray.PlaneType.YZ));
    protected static readonly NameMap<CircularArray.AlignmentMode> CircularArrayAlignmentNames = NameMap<CircularArray.AlignmentMode>.FromEnum();

    protected static readonly NameMap<CrossSection.WireFilter> CrossSectionFilterNames = NameMap<CrossSection.WireFilter>.FromEnum();

    protected static readonly NameMap<FlangeSheet.ReliefFlags> FlangeReliefNames = new(
        ("none", FlangeSheet.ReliefFlags.None), ("rectangular", FlangeSheet.ReliefFlags.Rectangular),
        ("rectangular_opposite", FlangeSheet.ReliefFlags.Rectangular | FlangeSheet.ReliefFlags.OppositeSide));

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Parameter rules

    protected static void RequireNonZero(double value, string parameter)
    {
        RequireFinite(value, parameter);
        if (Math.Abs(value) < 1e-9)
        {
            throw new McpException($"'{parameter}' must not be 0.");
        }
    }

    //--------------------------------------------------------------------------------------------------

    // Requires an angle in degrees between -max and max, and not 0 unless allowed.
    protected static void RequireAngle(double value, string parameter, double max, bool allowZero = false)
    {
        if (!double.IsFinite(value) || Math.Abs(value) > max || (!allowZero && Math.Abs(value) < 1e-9))
        {
            throw new McpException($"'{parameter}' must be between -{max} and {max} degrees{(allowZero ? "" : " and not 0")} (got {value}).");
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected static void RequireChamferAngle(double value, string parameter)
    {
        if (!double.IsFinite(value) || value <= 0 || value >= 90)
        {
            throw new McpException($"'{parameter}' must be greater than 0 and less than 90 degrees (got {value}).");
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected static void RequireQuantity(int quantity, string parameter, int minimum = 1)
    {
        if (quantity < minimum)
        {
            throw new McpException($"'{parameter}' must be at least {minimum} (got {quantity}).");
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected static void RequireNonNegative(double value, string parameter)
    {
        if (!double.IsFinite(value) || value < 0)
        {
            throw new McpException($"'{parameter}' must be a finite number of at least 0 (got {value}).");
        }
    }

    //--------------------------------------------------------------------------------------------------

    // Share of an overlap, as used by the joints.
    protected static void RequireRatio(double value, string parameter)
    {
        if (!double.IsFinite(value) || value <= 0 || value >= 1)
        {
            throw new McpException($"'{parameter}' must be greater than 0 and less than 1 (got {value}).");
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected static void RequireBendAngle(double value, string parameter)
    {
        if (!double.IsFinite(value) || value <= 0 || value > 180)
        {
            throw new McpException($"'{parameter}' must be greater than 0 and at most 180 degrees (got {value}).");
        }
    }

    //--------------------------------------------------------------------------------------------------

    // The wall of a hollow pipe profile must leave a hole.
    protected static void RequirePipeThickness(double thickness, double sizeX, double sizeY)
    {
        if (thickness >= Math.Min(sizeX, sizeY) / 2)
        {
            throw new McpException($"'thickness' must be less than half of the profile size (got {thickness}).");
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected static void RequireScaleFactor(double value, string parameter)
    {
        if (!double.IsFinite(value) || value < 0.001)
        {
            throw new McpException($"'{parameter}' must be a finite number of at least 0.001 (got {value}).");
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Validity

    protected const string RevolveHint = "Check that the profile does not cross or overlap the axis.";

    //--------------------------------------------------------------------------------------------------

    // Builds the body and throws if its shape could not be created. Some shapes are built with errors they do not report,
    // so if 'changed' (default: the current shape) is one of them, the result is also checked for validity.
    protected static void EnsureValidShape(Body body, string operation, string? hint = null, Shape? changed = null)
    {
        var hintText = string.IsNullOrEmpty(hint) ? "" : " " + hint;
        try
        {
            EnsureValid(body);
        }
        catch (McpException ex)
        {
            throw new McpException($"The {operation} could not be created.{hintText}\n{ex.Message}", ex);
        }

        if ((changed ?? body.Shape) is Revolve or Pipe or Loft or Fillet or Chamfer
            && !new BRepCheck_Analyzer(body.Shape.GetBRep()).IsValid())
        {
            throw new McpException($"The {operation} produced an invalid solid.{hintText}");
        }
    }

    //--------------------------------------------------------------------------------------------------

    // Checks the body after an operation, commits it as one undo step and returns the new shape.
    protected static ShapeResult FinishShape(Body body, string operation, string? hint = null)
    {
        EnsureValidShape(body, operation, hint);
        Commit();
        return ShapeResult.From(body);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Operands

    // Checks whether the body uses the other body as operand, directly or through other bodies.
    protected static bool DependsOn(Body body, Body other)
    {
        return _DependsOn(body, other, []);
    }

    //--------------------------------------------------------------------------------------------------

    static bool _DependsOn(Body body, Body other, HashSet<Body> visited)
    {
        if (!visited.Add(body))
        {
            return false;
        }

        foreach (var operand in GetShapeStack(body).SelectMany(GetOperandBodies))
        {
            if (operand == other || _DependsOn(operand, other, visited))
            {
                return true;
            }
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    // Resolves a sketch body to be linked into the target body, e.g. as pipe profile ('role' = "profile") or loft section.
    protected static Body ResolveSketchOperand(string reference, Body target, string role, bool requireClosed)
    {
        var operand = ResolveBody(reference);
        if (operand == target)
        {
            throw new McpException($"The {role} body must differ from '{target.Name}'.");
        }
        if (operand.Shape?.ShapeType != ShapeType.Sketch || (requireClosed && CountWires(operand.Shape).Closed == 0))
        {
            throw new McpException($"The {role} body '{operand.Name}' must be a sketch" + (requireClosed ? " with a closed contour." : "."));
        }
        if (DependsOn(operand, target))
        {
            throw new McpException($"The {role} body '{operand.Name}' already uses '{target.Name}', using it would create a cycle.");
        }
        return operand;
    }

    //--------------------------------------------------------------------------------------------------

    protected static Body[] GetOperandBodies(Shape shape)
    {
        return shape is ModifierBase modifier
                   ? modifier.Operands.OfType<BodyShapeOperand>().Select(op => op.Body).Where(b => b != null).ToArray()
                   : [];
    }

    //--------------------------------------------------------------------------------------------------

    // Operand bodies are hidden while used. Shows those which are no longer used by any body,
    // so they do not remain as invisible leftovers.
    protected static void ShowUnusedOperands(IEnumerable<Body> formerOperands)
    {
        var document = CoreContext.Current.Document;
        foreach (var body in formerOperands.Distinct())
        {
            if (document.IndexOf(body) >= 0 && GetUsingBodies(body).Length == 0)
            {
                body.IsVisible = true;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Revolve

    protected static Vec ToRevolveOffset(double[]? offset)
    {
        if (offset == null)
        {
            return Vec.Zero;
        }
        if (offset.Length != 2 || offset.Any(c => !double.IsFinite(c)))
        {
            throw new McpException("'offset' must be an array of two finite numbers [x, y].");
        }
        return new Vec(offset[0], offset[1], 0);
    }

    //--------------------------------------------------------------------------------------------------

    // The sketch lies in the local XY plane. If the axis lies in that plane too, all profile points
    // must be on one side of it. An axis along the sketch normal would only spin the profile in its plane.
    protected static void CheckProfileAgainstAxis(Revolve revolve)
    {
        var axis = revolve.ComputeAxis() ?? throw new McpException("The revolve axis could not be computed.");
        var direction = axis.Direction;
        if (Math.Abs(direction.Z) > 1 - 1e-6)
        {
            throw new McpException("The axis is perpendicular to the sketch plane, revolving around it would not create a solid.");
        }
        if (Math.Abs(direction.Z) > 1e-6)
        {
            return; // Oblique axis, left to the validity check of the result.
        }

        var brep = (revolve.Predecessor as Shape)?.GetBRep();
        if (brep == null)
        {
            return;
        }

        const double tolerance = 1e-6;
        bool left = false, right = false;
        foreach (var edge in brep.Edges())
        {
            var curve = new BRepAdaptor_Curve(edge);
            double first = curve.FirstParameter(), last = curve.LastParameter();
            const int samples = 32;
            for (int i = 0; i <= samples; i++)
            {
                var point = curve.Value(first + (last - first) * i / samples);
                double side = direction.X * (point.Y - axis.Location.Y) - direction.Y * (point.X - axis.Location.X);
                left |= side > tolerance;
                right |= side < -tolerance;
            }
        }

        if (left && right)
        {
            throw new McpException("The profile crosses the revolve axis. Draw the profile on one side of the axis only "
                                   + "(it may touch the axis), or move the axis with 'offset'.");
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Circular array

    // The array rotates around an axis at distance 'Radius' from the local origin, in the direction
    // 'OriginalAngle' + 180 deg within the plane. Computes both from a center point in world coordinates.
    protected static (double radius, double angle) ComputeCircularArrayPlacement(Body body, CircularArray.PlaneType plane, Pnt worldCenter)
    {
        var localCenter = worldCenter.Transformed(body.GetTransformation().Inverted());
        var (u, v) = _GetCircularArrayPlaneAxes(plane);
        var toOrigin = new Vec(localCenter, Pnt.Origin);
        double x = toOrigin.Dot(u), y = toOrigin.Dot(v);
        double radius = Math.Sqrt(x * x + y * y);
        return (radius, radius < 1e-9 ? 0 : Math.Atan2(y, x).ToDeg());
    }

    //--------------------------------------------------------------------------------------------------

    // Inverse of ComputeCircularArrayPlacement.
    protected static Pnt GetCircularArrayCenter(Body body, CircularArray array)
    {
        var (u, v) = _GetCircularArrayPlaneAxes(array.Plane);
        double angle = array.OriginalAngle.ToRad();
        var toOrigin = u * (array.Radius * Math.Cos(angle)) + v * (array.Radius * Math.Sin(angle));
        return Pnt.Origin.Translated(toOrigin.Reversed()).Transformed(body.GetTransformation());
    }

    //--------------------------------------------------------------------------------------------------

    static (Vec u, Vec v) _GetCircularArrayPlaneAxes(CircularArray.PlaneType plane)
    {
        return plane switch
        {
            CircularArray.PlaneType.ZX => (new Vec(0, 0, 1), new Vec(1, 0, 0)),
            CircularArray.PlaneType.YZ => (new Vec(0, 1, 0), new Vec(0, 0, 1)),
            _ => (new Vec(1, 0, 0), new Vec(0, 1, 0))
        };
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
