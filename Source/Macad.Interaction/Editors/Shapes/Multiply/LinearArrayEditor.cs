using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes
{
    public class LinearArrayEditor : Editor<LinearArray>
    {
        protected override void OnStart()
        {
            CreatePanel<LinearArrayPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
        }

        //--------------------------------------------------------------------------------------------------

        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<LinearArrayEditor>();
        }

    }
}