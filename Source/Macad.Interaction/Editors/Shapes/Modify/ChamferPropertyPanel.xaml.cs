using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

/// <summary>
/// Interaction logic for ChamferPropertyPanel.xaml
/// </summary>
public partial class ChamferPropertyPanel : PropertyPanel
{
    public Chamfer Chamfer { get; private set; }

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

    public ICommand StartToolCommand { get; private set; }

    void ExecuteStartTool()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as ChamferEditorTool)?.Stop();
        }
        else
        {
            WorkspaceController.StartTool(new ChamferEditorTool(Chamfer));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public ICommand SelectAllCommand { get; private set; }

    void ExecuteSelectAll()
    {
        Chamfer.AddAllEdges();
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------

    public ICommand SelectNoneCommand { get; private set; }

    void ExecuteSelectNone()
    {
        Chamfer.RemoveAllEdges();
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------

    public ICommand SwitchModeCommand { get; private set; }

    void ExecuteSwitchMode(Chamfer.ChamferModes mode)
    {
        if (Chamfer.Mode != mode)
        {
            Chamfer.Mode = mode;
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public ICommand SwitchAngleSideCommand { get; private set; }

    void ExecuteSwitchAngleSideCommand()
    {
        if (Chamfer.Mode == Chamfer.ChamferModes.DistanceAngle)
        {
            Chamfer.ReverseOrientation = !Chamfer.ReverseOrientation;
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void workspaceController_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == "CurrentTool")
        {
            IsToolActive = WorkspaceController.CurrentTool is ChamferEditorTool;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        StartToolCommand = new RelayCommand(ExecuteStartTool);
        SelectAllCommand = new RelayCommand(ExecuteSelectAll);
        SelectNoneCommand = new RelayCommand(ExecuteSelectNone);
        SwitchModeCommand = new RelayCommand<Chamfer.ChamferModes>(ExecuteSwitchMode);
        SwitchAngleSideCommand = new RelayCommand(ExecuteSwitchAngleSideCommand);

        WorkspaceController.PropertyChanged += workspaceController_PropertyChanged;

        Chamfer = instance as Chamfer;

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as ChamferEditorTool)?.Stop();
        }
        WorkspaceController.PropertyChanged -= workspaceController_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------
}