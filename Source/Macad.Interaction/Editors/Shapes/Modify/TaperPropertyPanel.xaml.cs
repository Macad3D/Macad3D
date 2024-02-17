using System.Diagnostics;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public partial class TaperPropertyPanel : PropertyPanel
{
    public Taper Taper { get; private set; }

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
        
    public ICommand ReselectFaceCommand { get; private set; }

    void ExecuteReselectFace()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as CreateTaperTool)?.Stop();
        }
        else
        {
            if (WorkspaceController.StartTool(new CreateTaperTool(Taper)))
                IsToolActive = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        Taper = instance as Taper;
        Debug.Assert(Taper != null);

        ReselectFaceCommand = new RelayCommand(ExecuteReselectFace);

        WorkspaceController.PropertyChanged += workspaceController_PropertyChanged;

        InitializeComponent();
    }
        
    //--------------------------------------------------------------------------------------------------

    void workspaceController_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
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
            (WorkspaceController.CurrentTool as CreateTaperTool)?.Stop();
        }
        WorkspaceController.PropertyChanged -= workspaceController_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------

}