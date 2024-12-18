using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

/// <summary>
/// Interaction logic for FilletPropertyPanel.xaml
/// </summary>
public partial class FilletPropertyPanel : PropertyPanel
{
    public Fillet Fillet { get; private set; }

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
            (WorkspaceController.CurrentTool as FilletEditorTool)?.Stop();
        }
        else
        {
            WorkspaceController.StartTool(new FilletEditorTool(Fillet));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public ICommand SelectAllCommand { get; private set; }

    void ExecuteSelectAll()
    {
        Fillet.AddAllEdges();
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------

    public ICommand SelectNoneCommand { get; private set; }

    void ExecuteSelectNone()
    {
        Fillet.RemoveAllEdges();
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------

    void workspaceController_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == "CurrentTool")
        {
            IsToolActive = WorkspaceController.CurrentTool is FilletEditorTool;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        StartToolCommand = new RelayCommand(ExecuteStartTool);
        SelectAllCommand = new RelayCommand(ExecuteSelectAll);
        SelectNoneCommand = new RelayCommand(ExecuteSelectNone);
        WorkspaceController.PropertyChanged += workspaceController_PropertyChanged;

        Fillet = instance as Fillet;

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as FilletEditorTool)?.Stop();
        }
        WorkspaceController.PropertyChanged -= workspaceController_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------

}