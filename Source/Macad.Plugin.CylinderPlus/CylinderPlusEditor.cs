using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Interaction.Panels;

namespace CylinderPlus.Editors
{
    public class CylinderPlusEditor : Editor<Types.CylinderPlus>
    {
        public override Entity GetEntity()
        {
            return Entity;
        }

        protected override void OnStart()
        {
            // For plugins, we don't have a dedicated XAML panel so we can just rely on the shape editor automatically resolving it
            // if we omit CreatePanel. But we can create a generic one if we had one.
            // Macad actually auto-generates UI for properties with [SerializeMember] in the GenericPropertyPanel but since we don't have access to that type directly,
            // we will just rely on the base behavior or omit it.
        }
    }
}