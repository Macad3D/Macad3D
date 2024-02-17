using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes;

public class BoxJointEditor : Editor<BoxJoint>
{
    protected override void OnStart()
    {
        CreatePanel<BoxJointPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<BoxJointEditor>();
    }

    //--------------------------------------------------------------------------------------------------

}