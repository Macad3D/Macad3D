using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes
{
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

        public override void EnrichContextMenu(ContextMenuItems itemList)
        {
            if (Entity.Predecessor is Sketch sketch)
            {
                itemList.AddCommand(SketchCommands.StartSketchEditor, sketch);
            }
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
}