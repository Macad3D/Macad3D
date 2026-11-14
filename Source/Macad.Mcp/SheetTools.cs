using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using ModelContextProtocol;
using ModelContextProtocol.Server;
using System.ComponentModel;
using System.Threading.Tasks;

namespace Macad.Mcp;

public class SheetTools : ToolsBase
{
    const string _BodyDescription = "The sheet body: a solid of constant thickness, e.g. an extruded profile or a thin box. "
                                    + "Referenced by its guid or its unique name.";

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "flange_sheet")]
    [Description("Bends a flange out of a sheet body, like sheet metal: the flange grows from the edge of a planar face "
                 + "(the face's thin end face, from list_faces), bent by 'angle' around 'radius' and continued by 'length'. "
                 + "Lengths in mm, angle in degrees. Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> FlangeSheet(
        [Description(_BodyDescription)] string body,
        [Description("Index of the planar end face to add the flange to, from list_faces.")] int face,
        [Description("Bend angle in degrees, greater than 0 and at most 180. Default 90.")] double angle = 90,
        [Description("Length of the flange after the bend (mm). Default 10.")] double length = 10,
        [Description("Inner bend radius (mm). Default 0.5.")] double radius = 0.5,
        [Description("True to bend to the other side. Default false.")] bool reverse = false,
        [Description("Gap left free at the start of the bend edge (mm). Default 0.")] double startGap = 0,
        [Description("Gap left free at the end of the bend edge (mm). Default 0.")] double endGap = 0,
        [Description("Bend relief notch: 'none' (default), 'rectangular' or 'rectangular_opposite'.")] string relief = "none")
        => Invoke(() =>
        {
            RequireBendAngle(angle, nameof(angle));
            RequirePositive(length, nameof(length));
            RequirePositive(radius, nameof(radius));
            RequireNonNegative(startGap, nameof(startGap));
            RequireNonNegative(endGap, nameof(endGap));
            var reliefFlags = FlangeReliefNames.Parse(relief, nameof(relief));

            var target = _ResolveSheet(body);
            var faceReference = GetFace(target, face, true, "for a flange").reference;

            var flange = Core.Shapes.FlangeSheet.Create(target, faceReference, angle, length, radius);
            flange.Reverse = reverse;
            flange.StartGap = startGap;
            flange.EndGap = endGap;
            flange.Relief = reliefFlags;

            return FinishShape(target, "flange", "Check that the face is a planar end face of a sheet of constant thickness, and the gaps fit the edge.");
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "unfold_sheet")]
    [Description("Unfolds a bent sheet body (e.g. made with flange_sheet) into a flat pattern, e.g. for laser cutting. "
                 + "The unfolding starts at 'startFace', a planar face from list_faces; by default the face nearest to the XY plane is used. "
                 + "Returns the new shape with its bounding box and volume.")]
    public Task<ShapeResult> UnfoldSheet(
        [Description(_BodyDescription)] string body,
        [Description("Index of a planar face which stays in place, from list_faces. Optional.")] int? startFace = null)
        => Invoke(() =>
        {
            var target = _ResolveSheet(body);
            SubshapeReference? startReference = null;
            if (startFace != null)
            {
                startReference = GetFace(target, startFace.Value, true, "as start face").reference;
            }
            else if (!Core.Shapes.UnfoldSheet.CanFindStartFace(target.Shape.GetBRep()))
            {
                throw new McpException($"No start face could be found for body '{target.Name}'. Give 'startFace'.");
            }

            Core.Shapes.UnfoldSheet.Create(target, startReference);

            return FinishShape(target, "unfolded sheet", "Check that the body is a sheet of constant thickness with cylindrical bends.");
        });

    //--------------------------------------------------------------------------------------------------

    static Body _ResolveSheet(string body)
    {
        var target = ResolveBody(body);
        if (target.Shape?.ShapeType != ShapeType.Solid)
        {
            throw new McpException($"The body '{target.Name}' is not a solid. Only solid sheets can be bent or unfolded.");
        }
        return target;
    }

    //--------------------------------------------------------------------------------------------------
}
