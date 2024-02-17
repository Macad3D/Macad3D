using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public class ChamferEditor : Editor<Chamfer>
{
    protected override void OnStart()
    {
        CreatePanel<ChamferPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }

    //--------------------------------------------------------------------------------------------------
        
    public override (IActionCommand, object) GetStartEditingCommand()
    {
        return (StartEditorCommand, Entity);
    }

    //--------------------------------------------------------------------------------------------------
        
    static ActionCommand<Chamfer> StartEditorCommand { get; } = new(
        (chamfer) =>
        {
            var tool = InteractiveContext.Current?.WorkspaceController?.CurrentTool;
            if (tool == null)
            {
                tool = new ChamferEditorTool(chamfer);
                InteractiveContext.Current?.WorkspaceController?.StartTool(tool);
            }
        },
        (chamfer) => InteractiveContext.Current?.WorkspaceController?.CurrentTool == null && chamfer != null)        
    {
        Header = (_) => "Select Edges",
        Description = (_) => "Select edges to chamfer.",
        Icon = (_) => "Tool-EdgesSelection",
    };

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<ChamferEditor>();
    }

    //--------------------------------------------------------------------------------------------------

}