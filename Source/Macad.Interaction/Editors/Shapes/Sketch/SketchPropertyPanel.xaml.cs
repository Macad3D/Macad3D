using System.Diagnostics;
using System.Windows;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public partial class SketchPropertyPanel : PropertyPanel
{
    public Sketch Sketch { get; private set; }

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
            var tool = WorkspaceController.CurrentTool as SketchEditorTool;
            tool?.Stop();
        }
        else
        {
            WorkspaceController.StartTool( new SketchEditorTool(Sketch));
        }
    }

    //--------------------------------------------------------------------------------------------------

    void workspaceController_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == "CurrentTool")
        {
            IsToolActive = (WorkspaceController.CurrentTool as SketchEditorTool)?.Sketch == Sketch;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        StartToolCommand = new RelayCommand(ExecuteStartTool);

        WorkspaceController.PropertyChanged += workspaceController_PropertyChanged;

        Sketch = instance as Sketch;
        Debug.Assert(Sketch != null);

        if(Application.Current != null)
            InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnAddedToPane(IPropertyPanelManager manager)
    {
        IsToolActive = (WorkspaceController.CurrentTool as SketchEditorTool)?.Sketch == Sketch;
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        IsToolActive = false;
        WorkspaceController.PropertyChanged -= workspaceController_PropertyChanged;
    }
}