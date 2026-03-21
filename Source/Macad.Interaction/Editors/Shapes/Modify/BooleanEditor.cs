using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes;

public sealed class BooleanEditor : Editor<BooleanBase>
{
    protected override void OnStart()
    {
        base.OnStart();

        CreatePanel<BooleanPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
    }
        
    //--------------------------------------------------------------------------------------------------
    
    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<BooleanCommon, BooleanEditor>();
        RegisterEditor<BooleanCut, BooleanEditor>();
        RegisterEditor<BooleanFuse, BooleanEditor>();
    }
}