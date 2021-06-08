using System.Runtime.CompilerServices;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes
{
    public class ChamferEditor : Editor<Chamfer>
    {
        ChamferPropertyPanel _Panel;

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<ChamferPropertyPanel>(Entity);
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
            RegisterEditor<ChamferEditor>();
        }

        //--------------------------------------------------------------------------------------------------

    }
}