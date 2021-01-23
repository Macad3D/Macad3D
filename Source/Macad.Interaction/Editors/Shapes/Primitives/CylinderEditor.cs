using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes
{
    [InitializeAtStartup]
    public class CylinderEditor : Editor<Cylinder>
    {
        CylinderPropertyPanel _Panel;

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<CylinderPropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
        }

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
        }
                
        static CylinderEditor()
        {
            RegisterEditor<CylinderEditor>();
        }

    }
}