using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes
{
    [InitializeAtStartup]
    public class RevolveEditor : Editor<Revolve>
    {
        RevolvePropertyPanel _Panel;

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<RevolvePropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
        }

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
        }
                
        static RevolveEditor()
        {
            RegisterEditor<RevolveEditor>();
        }

    }
}