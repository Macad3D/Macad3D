using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    public partial class ExtrudePropertyPanel : PropertyPanel
    {
        public Extrude Extrude { get; private set; }

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

        public ICommand ReselectFaceCommand { get; private set; }

        void ExecuteReselectFace()
        {
            if (IsToolActive)
            {
                var tool = WorkspaceController.CurrentTool as CreateExtrudeTool;
                tool?.Stop();
            }
            else
            {
                if (WorkspaceController.StartTool(new CreateExtrudeTool(Extrude)))
                    IsToolActive = true;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void Initialize(BaseObject instance)
        {
            Extrude = instance as Extrude;
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
            WorkspaceController.PropertyChanged -= workspaceController_PropertyChanged;
        }

        //--------------------------------------------------------------------------------------------------

    }
}
