using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes
{
    public class FilletEditor : Editor<Fillet>
    {
        protected override void OnStart()
        {
            CreatePanel<FilletPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
        }

        //--------------------------------------------------------------------------------------------------

        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<FilletEditor>();
        }

        //--------------------------------------------------------------------------------------------------

    }
}