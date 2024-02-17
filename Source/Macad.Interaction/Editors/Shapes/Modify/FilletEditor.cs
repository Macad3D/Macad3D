using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public class FilletEditor : Editor<Fillet>
{
    protected override void OnStart()
    {
        CreatePanel<FilletPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }
		
    //--------------------------------------------------------------------------------------------------

    public override (IActionCommand, object) GetStartEditingCommand()
    {
        return (StartEditorCommand, Entity);
    }

    //--------------------------------------------------------------------------------------------------
        
    static ActionCommand<Fillet> StartEditorCommand { get; } = new(
        (fillet) =>
        {
            var tool = InteractiveContext.Current?.WorkspaceController?.CurrentTool;
            if (tool == null)
            {
                tool = new FilletEditorTool(fillet);
                InteractiveContext.Current?.WorkspaceController?.StartTool(tool);
            }
        },
        (fillet) => InteractiveContext.Current?.WorkspaceController?.CurrentTool == null && fillet != null)        
    {
        Header = (_) => "Select Edges",
        Description = (_) => "Select edges to fillet.",
        Icon = (_) => "Tool-EdgesSelection",
    };

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<FilletEditor>();
    }

    //--------------------------------------------------------------------------------------------------

}