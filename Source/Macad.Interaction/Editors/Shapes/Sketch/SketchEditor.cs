using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
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