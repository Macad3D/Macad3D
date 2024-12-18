using System.Diagnostics;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public partial class PipePropertyPanel : PropertyPanel
{
    public Pipe Pipe { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public bool ProfileIsHollow
    {
        get
        {
            return Pipe.Profile == Pipe.ProfileType.HollowCircle || Pipe.Profile == Pipe.ProfileType.HollowRectangle;
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public ICommand SwitchProfileCommand { get; private set; }

    void ExecuteSwitchProfileCommand(Pipe.ProfileType profile)
    {
        if (Pipe.Profile != profile)
        {
            Sketch profileSketch = null;

            if (profile == Pipe.ProfileType.Custom)
            {
                if (Pipe.Operands.Count < 2)
                {
                    Pipe.Body.SaveTopologyUndo();
                    Pipe.InitCustomProfile();
                    profileSketch = Pipe.Operands.Count > 1 ? Pipe.Operands[1] as Sketch : null;
                }
            }
            else // proile == custom
            {
                if (Pipe.Operands.Count > 1)
                {
                    Pipe.RemoveOperand(1);
                }
            }
            Pipe.Profile = profile;
            CommitChange();

            RaisePropertyChanged(nameof(ProfileIsHollow));
            if (profileSketch != null)
            {
                InteractiveContext.Current.WorkspaceController.StartTool(new SketchEditorTool(profileSketch));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public ICommand ToggleFlagCommand { get; private set; }

    void ExecuteToggleFlagCommand(Pipe.PipeFlags flag)
    {
        Pipe.Flags = Pipe.Flags.HasFlag(flag) ? Pipe.Flags.Removed(flag) : Pipe.Flags.Added(flag);
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        Pipe = instance as Pipe;
        Debug.Assert(Pipe != null);

        SwitchProfileCommand = new RelayCommand<Pipe.ProfileType>(ExecuteSwitchProfileCommand);
        ToggleFlagCommand = new RelayCommand<Pipe.PipeFlags>(ExecuteToggleFlagCommand);

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {

    }

    //--------------------------------------------------------------------------------------------------

}