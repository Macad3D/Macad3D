using Macad.Common;
using Macad.Core.Shapes;

namespace Macad.Interaction.Editors.Shapes
{
    [InitializeAtStartup]
    public class FlangeSheetEditor : Editor<FlangeSheet>
    {
        FlangeSheetPropertyPanel _Panel;

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<FlangeSheetPropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
        }

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
        }
                
        static FlangeSheetEditor()
        {
            RegisterEditor<FlangeSheetEditor>();
        }

    }
}