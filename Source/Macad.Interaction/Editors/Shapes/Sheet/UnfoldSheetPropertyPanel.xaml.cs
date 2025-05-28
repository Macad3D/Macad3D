using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;
using System.Windows.Input;

namespace Macad.Interaction.Editors.Shapes;

/// <summary>
/// Interaction logic for ChamferPropertyPanel.xaml
/// </summary>
public partial class UnfoldSheetPropertyPanel : PropertyPanel
{
    public UnfoldSheet UnfoldSheet { get; private set; }

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

    public ICommand ResetFaceCommand { get; private set; }

    void ExecuteResetFace()
    {
        UnfoldSheet.StartFace = null;
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public ICommand SelectFaceCommand { get; private set; }

    void ExecuteSelectFace()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as CreateUnfoldSheetTool)?.Stop();
        }
        else
        {
            if (WorkspaceController.StartTool(new CreateUnfoldSheetTool(UnfoldSheet)))
            {
                IsToolActive = true;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        UnfoldSheet = instance as UnfoldSheet;
        SelectFaceCommand = new RelayCommand(ExecuteSelectFace);
        ResetFaceCommand = new RelayCommand(ExecuteResetFace);

        WorkspaceController.PropertyChanged += _workspaceController_PropertyChanged;

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    void _workspaceController_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(WorkspaceController.CurrentTool))
        {
            if (!(WorkspaceController.CurrentTool is CreateUnfoldSheetTool))
            {
                IsToolActive = false;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as CreateUnfoldSheetTool)?.Stop();
        }
        WorkspaceController.PropertyChanged -= _workspaceController_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------

}