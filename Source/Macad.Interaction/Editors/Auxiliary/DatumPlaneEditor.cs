using System.Runtime.CompilerServices;
using Macad.Core.Auxiliary;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Auxiliary
{
    public sealed class DatumPlaneEditor : Editor<DatumPlane>
    {
        DatumPlanePropertyPanel _Panel;

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<DatumPlanePropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Body);
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
            _Panel = null;
        }
        
        //--------------------------------------------------------------------------------------------------

        public override void EnrichContextMenu(CustomMenuItems itemList)
        {
            itemList.AddCommand(AuxiliaryCommands.SetWorkingPlaneToDatumPlane);
        }

        //--------------------------------------------------------------------------------------------------

        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<DatumPlaneEditor>();
        }
    }
}