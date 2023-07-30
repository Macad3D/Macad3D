using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Dialogs;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public sealed partial class HalvedJointPropertyPanel : PropertyPanel
{
    public HalvedJoint HalvedJoint { get; private set; }

    //--------------------------------------------------------------------------------------------------
    
    public ICommand SetOrientationCommand { get; private set; }

    void ExecuteSetOrientation(string mode)
    {
        if (mode == "Auto")
        {
            HalvedJoint.ReferenceFaces = null;
        }
        else if (mode == "Custom")
        {
            ExecuteSelectOrientation();
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public ICommand SelectOrientationCommand { get; private set; }

    void ExecuteSelectOrientation()
    {
        var tool = new SelectHalvedJointOrientationTool(HalvedJoint);
        if (!WorkspaceController.StartTool(tool))
        {
            ErrorDialogs.CannotStartTool("The modifier did not detect any candidates for building joints. Check the overlap area of the two shapes.");
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        HalvedJoint = instance as HalvedJoint;

        SetOrientationCommand = new RelayCommand<string>(ExecuteSetOrientation);
        SelectOrientationCommand = new RelayCommand(ExecuteSelectOrientation);

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------
        
    public override void Cleanup()
    {
    }

}