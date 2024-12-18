using System.Diagnostics;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public partial class ImprintPropertyPanel : PropertyPanel
{
    public Imprint Imprint { get; private set; }

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

    public ICommand SwitchModeCommand { get; private set; }

    void ExecuteSwitchMode(Imprint.ImprintMode mode)
    {
        if (Imprint.Mode != mode)
        {
            Imprint.Mode = mode;
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public ICommand ReselectFaceCommand { get; private set; }

    void ExecuteReselectFace()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as CreateImprintTool)?.Stop();
        }
        else
        {
            if (WorkspaceController.StartTool(new CreateImprintTool(Imprint)))
                IsToolActive = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        Imprint = instance as Imprint;
        Debug.Assert(Imprint != null);

        SwitchModeCommand = new RelayCommand<Imprint.ImprintMode>(ExecuteSwitchMode);
        ReselectFaceCommand = new RelayCommand(ExecuteReselectFace);

        WorkspaceController.PropertyChanged += workspaceController_PropertyChanged;

        InitializeComponent();
    }
        
    //--------------------------------------------------------------------------------------------------

    void workspaceController_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == "CurrentTool")
        {
            if (!(WorkspaceController.CurrentTool is CreateImprintTool))
                IsToolActive = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as CreateImprintTool)?.Stop();
        }
        WorkspaceController.PropertyChanged -= workspaceController_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------

}