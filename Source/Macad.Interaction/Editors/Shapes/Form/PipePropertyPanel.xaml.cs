using System.Diagnostics;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
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
                Pipe.Profile = profile;

                if (profile == Pipe.ProfileType.Custom && Pipe.Operands.Count < 2)
                {
                    Pipe.Body.SaveTopologyUndo();
                    profileSketch = Sketch.Create();
                    profileSketch.Body = Pipe.Body;
                    profileSketch.Name = "Profile";
                    Pipe.AddOperand(profileSketch);
                }
                CommmitChange();

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
            CommmitChange();
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
}
