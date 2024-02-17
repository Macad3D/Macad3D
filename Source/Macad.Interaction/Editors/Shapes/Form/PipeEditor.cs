using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public class PipeEditor : Editor<Pipe>
{
    protected override void OnStart()
    {
        var panel = CreatePanel<PipePropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);

        if (Entity.Predecessor is Sketch sketch)
        {
            CreatePanel<SketchPropertyPanel>(sketch, panel);
        }
    }
        
        
    //--------------------------------------------------------------------------------------------------

    public override (IActionCommand, object) GetStartEditingCommand()
    {
        if (Entity.Predecessor is Sketch sketch)
        {
            return (SketchCommands.StartSketchEditor, sketch);
        }
        return base.GetStartEditingCommand();
    }

    //--------------------------------------------------------------------------------------------------

    public override void EnrichContextMenu(ContextMenuItems itemList)
    {
        if (Entity.Profile == Pipe.ProfileType.Custom && Entity.Operands.Count > 1 && Entity.Operands[1] is Sketch profile)
        {
            itemList.AddCommand(SketchCommands.StartSketchEditor, profile, "Edit Profile");
        }
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<PipeEditor>();
    }

    //--------------------------------------------------------------------------------------------------

}