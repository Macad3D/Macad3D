using System.Runtime.CompilerServices;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes
{
    public class FlangeSheetEditor : Editor<FlangeSheet>
    {
        FlangeSheetPropertyPanel _Panel;

        //--------------------------------------------------------------------------------------------------
        
        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<FlangeSheetPropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
        }

        //--------------------------------------------------------------------------------------------------

        [ModuleInitializer]
        public static void Register()
        {
            RegisterEditor<FlangeSheetEditor>();
        }

    }
}