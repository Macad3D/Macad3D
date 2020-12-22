using Macad.Common;
using Macad.Core.Shapes;

namespace Macad.Interaction.Editors.Shapes
{
    [InitializeAtStartup]
    public class LinearArrayEditor : Editor<LinearArray>
    {
        LinearArrayPropertyPanel _Panel;

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<LinearArrayPropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
        }

        //--------------------------------------------------------------------------------------------------
                
        static LinearArrayEditor()
        {
            RegisterEditor<LinearArrayEditor>();
        }

    }
}