using System.Collections.Generic;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    [InitializeAtStartup]
    public class ImprintEditor : Editor<Imprint>
    {
        ImprintPropertyPanel _Panel;
        SketchPropertyPanel _SketchPanel;

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<ImprintPropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);

            if (Entity.Sketch != null)
            {
                _SketchPanel = PropertyPanel.CreatePanel<SketchPropertyPanel>(Entity.Sketch);
                InteractiveContext.Current.PropertyPanelManager?.AddPanel(_SketchPanel, _Panel);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_SketchPanel);
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
        }

        //--------------------------------------------------------------------------------------------------

        public override void EnrichContextMenu(CustomMenuItems itemList)
        {
            if (Entity.Sketch != null)
                itemList.AddCommand(SketchCommands.StartSketchEditor, Entity.Sketch);
        }

        //--------------------------------------------------------------------------------------------------

        static ImprintEditor()
        {
            RegisterEditor<ImprintEditor>();
        }

    }
}