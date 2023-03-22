using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes
{
    public class MirrorEditor : Editor<Mirror>
    {
        protected override void OnStart()
        {
            CreatePanel<MirrorPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
        }

        //--------------------------------------------------------------------------------------------------

        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<MirrorEditor>();
        }

    }
}