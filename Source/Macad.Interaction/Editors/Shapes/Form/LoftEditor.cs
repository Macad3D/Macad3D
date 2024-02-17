using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes;

public class LoftEditor : Editor<Loft>
{
    protected override void OnStart()
    {
        CreatePanel<LoftPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<LoftEditor>();
    }

    //--------------------------------------------------------------------------------------------------

}