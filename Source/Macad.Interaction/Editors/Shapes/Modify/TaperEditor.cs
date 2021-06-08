using System.Runtime.CompilerServices;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class TaperEditor : Editor<Taper>
    {
        TaperPropertyPanel _Panel;

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<TaperPropertyPanel>(Entity);
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
            RegisterEditor<TaperEditor>();
        }

    }
}