using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes;

public partial class CylinderPropertyPanel : PropertyPanel
{
    public Cylinder Cylinder { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        Cylinder = instance as Cylinder;
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
    }

    //--------------------------------------------------------------------------------------------------

}