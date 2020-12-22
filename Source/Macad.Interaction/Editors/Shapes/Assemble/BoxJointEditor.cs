using Macad.Common;
using Macad.Core.Shapes;

namespace Macad.Interaction.Editors.Shapes
{
    [InitializeAtStartup]
    public class BoxJointEditor : Editor<BoxJoint>
    {
        BoxJointPropertyPanel _Panel;

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<BoxJointPropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
        }

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
        }
                
        static BoxJointEditor()
        {
            RegisterEditor<BoxJointEditor>();
        }
    }
}