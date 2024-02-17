using System.Diagnostics;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public partial class MirrorPropertyPanel : PropertyPanel
{
    public Mirror Shape { get; private set; }

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

    public ICommand ReselectCommand { get; private set; }

    void ExecuteReselect()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as CreateMirrorTool)?.Stop();
        }
        else
        {
            if (WorkspaceController.StartTool(new CreateMirrorTool(Shape)))
                IsToolActive = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        Shape = instance as Mirror;
        Debug.Assert(Shape != null);

        ReselectCommand = new RelayCommand(ExecuteReselect);

        WorkspaceController.PropertyChanged += workspaceController_PropertyChanged;

        InitializeComponent();
    }
        
    //--------------------------------------------------------------------------------------------------

    void workspaceController_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == "CurrentTool")
        {
            if (!(WorkspaceController.CurrentTool is CreateMirrorTool))
                IsToolActive = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as CreateMirrorTool)?.Stop();
        }
        WorkspaceController.PropertyChanged -= workspaceController_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------

}