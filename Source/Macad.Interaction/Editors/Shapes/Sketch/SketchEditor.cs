using System.Collections.Generic;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    [InitializeAtStartup]
    public class SketchEditor : Editor<Sketch>
    {
        SketchPropertyPanel _Panel;

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<SketchPropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
        }

        //--------------------------------------------------------------------------------------------------

        static SketchEditor()
        {
            RegisterEditor<SketchEditor>();
        }

        //--------------------------------------------------------------------------------------------------

        public override void EnrichContextMenu(CustomMenuItems itemList)
        {
            itemList.AddCommand(SketchCommands.StartSketchEditor, Entity);
            itemList.AddCommand(ModelCommands.CreateExtrude, Entity);
            itemList.AddCommand(ModelCommands.CreateRevolve, Entity);
        }

        //--------------------------------------------------------------------------------------------------

    }
}