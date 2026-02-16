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
    
    public bool IsToolActive
    {
        get { return _IsToolActive; }
        private set
        {
            _IsToolActive = value;
            RaisePropertyChanged();
        }
    }
        
    bool _IsToolActive;

    //--------------------------------------------------------------------------------------------------

    public MeasurementDescriptor DescriptorPercent0dp { get; private set; }

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
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as SelectHalvedJointOrientationTool)?.Stop();
        }
        else
        {

            var tool = new SelectHalvedJointOrientationTool(HalvedJoint);
            if (!WorkspaceController.StartTool(tool))
            {
                ErrorDialogs.CannotStartTool("The modifier did not detect any candidates for building joints. Check the overlap area of the two shapes.");
                return;
            }

            IsToolActive = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        HalvedJoint = instance as HalvedJoint;

        SetOrientationCommand = new RelayCommand<string>(ExecuteSetOrientation);
        SelectOrientationCommand = new RelayCommand(ExecuteSelectOrientation);

        WorkspaceController.PropertyChanged += _workspaceController_PropertyChanged;

        DescriptorPercent0dp = new MeasurementDescriptor(PhysicalQuantities.Dimensionless, DimensionlessUnits.Percentage, DimensionlessPrecision.Decimal_0);

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    void _workspaceController_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == "CurrentTool")
        {
            if (!(WorkspaceController.CurrentTool is CreateTaperTool))
                IsToolActive = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as SelectHalvedJointOrientationTool)?.Stop();
        }
        WorkspaceController.PropertyChanged -= _workspaceController_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------


}