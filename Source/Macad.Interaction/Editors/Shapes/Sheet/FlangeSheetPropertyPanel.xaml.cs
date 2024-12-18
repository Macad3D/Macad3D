using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

/// <summary>
/// Interaction logic for ChamferPropertyPanel.xaml
/// </summary>
public partial class FlangeSheetPropertyPanel : PropertyPanel
{
    public FlangeSheet FlangeSheet { get; private set; }
        
    //--------------------------------------------------------------------------------------------------

    public bool IsToolActive
    {
        get { return _IsToolActive; }
        set
        {
            if (_IsToolActive != value)
            {
                _IsToolActive = value;
                RaisePropertyChanged();
            }
        }
    }

    bool _IsToolActive;

    //--------------------------------------------------------------------------------------------------

    public RelayCommand SwitchAngleSideCommand { get; private set; }

    void ExecuteSwitchAngleSide()
    {
        FlangeSheet.Reverse = !FlangeSheet.Reverse;
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------

    public RelayCommand<int> SwitchReliefCommand { get; private set; }

    void ExecuteSwitchRelief(int newFlagset)
    {
        var reliefFlags = (FlangeSheet.ReliefFlags) newFlagset;
        if (FlangeSheet.Relief != reliefFlags)
        {
            FlangeSheet.Relief = reliefFlags;
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public RelayCommand ReselectFaceCommand { get; private set; }

    void ExecuteReselectFace()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as CreateFlangeSheetTool)?.Stop();
        }
        else
        {
            if (WorkspaceController.StartTool(new CreateFlangeSheetTool(FlangeSheet)))
                IsToolActive = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        FlangeSheet = instance as FlangeSheet;

        SwitchAngleSideCommand = new RelayCommand(ExecuteSwitchAngleSide);
        SwitchReliefCommand = new RelayCommand<int>(ExecuteSwitchRelief);
        ReselectFaceCommand = new RelayCommand(ExecuteReselectFace);

        WorkspaceController.PropertyChanged += workspaceController_PropertyChanged;

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    void workspaceController_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == "CurrentTool")
        {
            if (!(WorkspaceController.CurrentTool is CreateFlangeSheetTool))
                IsToolActive = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as CreateFlangeSheetTool)?.Stop();
        }
        WorkspaceController.PropertyChanged -= workspaceController_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------

}