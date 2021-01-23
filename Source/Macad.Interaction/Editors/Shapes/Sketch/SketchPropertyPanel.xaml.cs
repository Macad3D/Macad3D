using System.Collections.Generic;
using System.Diagnostics;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
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

        SketchEditorTool _CurrentSketchEditorTool;
        SketchPointsPropertyPanel _PointsPanel;
        SketchSegmentsPropertyPanel _SegmentsPanel;
        SketchConstraintsPropertyPanel _ConstraintsPanel;

        //--------------------------------------------------------------------------------------------------

        void workspaceController_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if (e.PropertyName == "CurrentTool")
            {
                _UpdateToolActive(WorkspaceController.CurrentTool is SketchEditorTool);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateToolActive(bool isActive)
        {
            if (isActive)
            {
                if (IsToolActive == false)
                {
                    IsToolActive = true;
                    _CurrentSketchEditorTool = (SketchEditorTool)WorkspaceController.CurrentTool;

                    _PointsPanel = CreatePanel<SketchPointsPropertyPanel>(_CurrentSketchEditorTool);
                    InteractiveContext.Current.PropertyPanelManager?.AddPanel(_PointsPanel, PropertyPanelSortingKey.Shapes + 1);
                    _SegmentsPanel = CreatePanel<SketchSegmentsPropertyPanel>(_CurrentSketchEditorTool);
                    InteractiveContext.Current.PropertyPanelManager?.AddPanel(_SegmentsPanel, _PointsPanel);
                    _ConstraintsPanel = CreatePanel<SketchConstraintsPropertyPanel>(_CurrentSketchEditorTool);
                    InteractiveContext.Current.PropertyPanelManager?.AddPanel(_ConstraintsPanel, _SegmentsPanel);
                }
            }
            else if (_CurrentSketchEditorTool != null)
            {
                IsToolActive = false;
                InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_ConstraintsPanel);
                _ConstraintsPanel = null;
                InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_SegmentsPanel);
                _SegmentsPanel = null;
                InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_PointsPanel);
                _PointsPanel = null;
                _CurrentSketchEditorTool = null;
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
            _UpdateToolActive(WorkspaceController.CurrentTool is SketchEditorTool);
        }

        //--------------------------------------------------------------------------------------------------

        public override void Cleanup()
        {
            _UpdateToolActive(false);
            WorkspaceController.PropertyChanged -= workspaceController_PropertyChanged;
        }
    }
}
