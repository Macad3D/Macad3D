using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes
{
    [InitializeAtStartup]
    public class BoxEditor : Editor<Box>
    {
        BoxPropertyPanel _Panel;

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<BoxPropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
        }

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
        }
                
        static BoxEditor()
        {
            RegisterEditor<BoxEditor>();
        }

    }
}