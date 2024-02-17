using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes;

public class UnfoldSheetEditor : Editor<UnfoldSheet>
{
    protected override void OnStart()
    {
        CreatePanel<UnfoldSheetPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<UnfoldSheetEditor>();
    }

}