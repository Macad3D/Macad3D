using System.Windows;
using System.Windows.Controls;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;

namespace Macad.Interaction.Editors.Shapes
{
    public partial class SpherePropertyPanel : PropertyPanel
    {
        public Sphere Sphere { get; private set; }

        //--------------------------------------------------------------------------------------------------

        public override void Initialize(BaseObject instance)
        {
            Sphere = instance as Sphere;
            InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

        public override void Cleanup()
        {
        }

        //--------------------------------------------------------------------------------------------------

    }
}
