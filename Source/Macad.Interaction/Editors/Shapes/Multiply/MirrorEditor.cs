using Macad.Common;
using Macad.Core.Shapes;

namespace Macad.Interaction.Editors.Shapes
{
    [InitializeAtStartup]
    public class MirrorEditor : Editor<Mirror>
    {
        MirrorPropertyPanel _Panel;

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<MirrorPropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
        }

        //--------------------------------------------------------------------------------------------------
                
        static MirrorEditor()
        {
            RegisterEditor<MirrorEditor>();
        }

    }
}