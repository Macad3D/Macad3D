using Macad.Core.Topology;
using Macad.Interaction;
using ModelContextProtocol.Server;
using System.ComponentModel;
using System.Linq;
using System.Threading.Tasks;

namespace Macad.Mcp;

public class SelectionTools : ToolsBase
{
    public sealed record SelectionResult(BodyInfo[] Bodies, string? ActiveTool);

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "get_selection", ReadOnly = true)]
    [Description("Returns the bodies the user currently has selected in the viewport (guid and name), and the name of the "
                 + "modelling tool the user is working in, if any. Use it when the user refers to 'this' or 'the selected' part. "
                 + "Macad keeps no lasting selection of faces or edges, so ask the user to describe them and find them "
                 + "with list_faces or list_edges. The selection is only read, never changed.")]
    public Task<SelectionResult> GetSelection()
        => Invoke(() =>
        {
            var workspaceController = InteractiveContext.Current?.WorkspaceController;
            if (workspaceController == null)
            {
                return new SelectionResult([], null);
            }

            var bodies = workspaceController.Selection.SelectedEntities.OfType<Body>().Select(BodyInfo.From).ToArray();
            return new SelectionResult(bodies, workspaceController.CurrentTool?.GetType().Name);
        });

    //--------------------------------------------------------------------------------------------------
}
