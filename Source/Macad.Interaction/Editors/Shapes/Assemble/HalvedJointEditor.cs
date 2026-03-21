using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes;

public sealed class HalvedJointEditor : Editor<HalvedJoint>
{
    protected override void OnStart()
    {
        base.OnStart();

        CreatePanel<HalvedJointPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<HalvedJointEditor>();
    }

    //--------------------------------------------------------------------------------------------------

}