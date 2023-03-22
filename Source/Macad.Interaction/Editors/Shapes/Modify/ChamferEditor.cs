using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes
{
    public class ChamferEditor : Editor<Chamfer>
    {
        protected override void OnStart()
        {
            CreatePanel<ChamferPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
        }

        //--------------------------------------------------------------------------------------------------

        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<ChamferEditor>();
        }

        //--------------------------------------------------------------------------------------------------

    }
}