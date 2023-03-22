using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes
{
    public class SketchEditor : Editor<Sketch>
    {
        protected override void OnStart()
        {
            CreatePanel<SketchPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
        }

        //--------------------------------------------------------------------------------------------------

        public override void EnrichContextMenu(ContextMenuItems itemList)
        {
            itemList.AddCommand(SketchCommands.StartSketchEditor, Entity);
            itemList.AddCommand(ModelCommands.CreateExtrude, Entity);
            itemList.AddCommand(ModelCommands.CreateRevolve, Entity);
        }

        //--------------------------------------------------------------------------------------------------

        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<SketchEditor>();
        }

        //--------------------------------------------------------------------------------------------------

    }
}