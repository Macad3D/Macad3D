using Macad.Core.Auxiliary;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Auxiliary;

public sealed class DatumPlaneEditor : Editor<DatumPlane>
{
    protected override void OnStart()
    {
        CreatePanel<DatumPlanePropertyPanel>(Entity, PropertyPanelSortingKey.Body);
    }
        
    //--------------------------------------------------------------------------------------------------

    public override void EnrichContextMenu(ContextMenuItems itemList)
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