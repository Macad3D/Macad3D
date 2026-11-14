using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using ModelContextProtocol;
using ModelContextProtocol.Server;
using System;
using System.ComponentModel;
using System.Threading.Tasks;

namespace Macad.Mcp;

public class AssembleTools : ToolsBase
{
    const string _Body1Description = "The first solid body, referenced by its guid or its unique name.";
    const string _Body2Description = "The second solid body, overlapping the first one where they are joined.";
    const string _RatioDescription = "Share of the overlap which is cut out of the first body, between 0 and 1. Default 0.5.";

    //--------------------------------------------------------------------------------------------------

    public sealed record JointResult(ShapeResult First, ShapeResult Second);

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "box_joint")]
    [Description("Joins two overlapping solid bodies, e.g. boards meeting at a corner, with a box joint (finger joint): "
                 + "the overlap is divided into boxes along its longest side, which are cut out of the bodies alternately, "
                 + "so the bodies interlock. Both bodies get a linked joint modifier and update each other. "
                 + "Returns the new shapes of both bodies.")]
    public Task<JointResult> BoxJoint(
        [Description(_Body1Description)] string body1,
        [Description(_Body2Description)] string body2,
        [Description("Number of boxes, at least 2. Default 5.")] int boxCount = 5,
        [Description(_RatioDescription)] double ratio = 0.5,
        [Description("True to also remove the parts of the bodies which reach beyond the other body. Default false.")] bool removeExcess = false,
        [Description("True to swap which body keeps the first box. Default false.")] bool reverseOrder = false)
        => Invoke(() =>
        {
            RequireQuantity(boxCount, nameof(boxCount), 2);
            RequireRatio(ratio, nameof(ratio));
            var (first, second) = _ResolvePair(body1, body2);
            var volumes = (first.Shape.GetBRep().Volume(), second.Shape.GetBRep().Volume());

            var (joint, _) = Core.Shapes.BoxJoint.Create(first, second);
            joint.BoxCount = boxCount;
            joint.Ratio = ratio;
            joint.RemoveExcess = removeExcess;
            joint.ReverseOrder = reverseOrder;

            return _Finish(first, second, volumes, "box joint");
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "halved_joint")]
    [Description("Joins two crossing or overlapping solid bodies, e.g. beams of a frame, with a halved joint (lap joint): "
                 + "each body is cut down to a part of its thickness where they overlap, so they lie flush. "
                 + "The side the cuts open to is detected automatically. Both bodies get a linked joint modifier and update each other. "
                 + "Returns the new shapes of both bodies.")]
    public Task<JointResult> HalvedJoint(
        [Description(_Body1Description)] string body1,
        [Description(_Body2Description)] string body2,
        [Description(_RatioDescription)] double ratio = 0.5)
        => Invoke(() =>
        {
            RequireRatio(ratio, nameof(ratio));
            var (first, second) = _ResolvePair(body1, body2);
            var volumes = (first.Shape.GetBRep().Volume(), second.Shape.GetBRep().Volume());

            var (joint, _) = Core.Shapes.HalvedJoint.Create(first, second);
            joint.Ratio = ratio;

            return _Finish(first, second, volumes, "halved joint");
        });

    //--------------------------------------------------------------------------------------------------

    static (Body first, Body second) _ResolvePair(string body1, string body2)
    {
        var first = ResolveBody(body1);
        var second = ResolveBody(body2);
        if (first == second)
        {
            throw new McpException("The two bodies of a joint must differ.");
        }
        foreach (var body in new[] { first, second })
        {
            if (body.Shape?.ShapeType != ShapeType.Solid)
            {
                throw new McpException($"The body '{body.Name}' is not a solid. Only solids can be joined.");
            }
        }
        if (DependsOn(first, second) || DependsOn(second, first))
        {
            throw new McpException($"The bodies '{first.Name}' and '{second.Name}' already use each other as operand, joining them would create a cycle.");
        }
        return (first, second);
    }

    //--------------------------------------------------------------------------------------------------

    // Without an overlap, the joint modifiers pass their shapes through unchanged.
    static JointResult _Finish(Body first, Body second, (double First, double Second) volumesBefore, string operation)
    {
        EnsureValidShape(first, operation);
        EnsureValidShape(second, operation);
        if (Math.Abs(first.Shape.GetBRep().Volume() - volumesBefore.First) < 1e-6
            && Math.Abs(second.Shape.GetBRep().Volume() - volumesBefore.Second) < 1e-6)
        {
            throw new McpException($"The bodies '{first.Name}' and '{second.Name}' do not overlap, there is nothing to join. "
                                   + "Move them so they overlap where the joint should be.");
        }
        Commit();
        return new JointResult(ShapeResult.From(first), ShapeResult.From(second));
    }

    //--------------------------------------------------------------------------------------------------
}
