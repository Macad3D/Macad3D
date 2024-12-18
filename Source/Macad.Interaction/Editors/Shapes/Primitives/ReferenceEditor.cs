using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes;

public class ReferenceEditor : Editor<Reference>
{
    protected override void OnStart()
    {
        CreatePanel<ReferencePropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<ReferenceEditor>();
    }
}