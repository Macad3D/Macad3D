using System.ComponentModel;
using Macad.Interaction.Editors.Shapes;
using Macad.Common;
using Macad.Common.Serialization;

namespace Macad.Interaction
{
    [SerializeType]
    public class EditorState : BaseObject
    {
        #region Active Tools

        public string ActiveTool
        {
            get { return _ActiveTool; }
            set
            {
                RaisePropertyChanged();
            }
        }

        string _ActiveTool;

        //--------------------------------------------------------------------------------------------------

        void _UpdateActiveTool(Tool tool)
        {
            _ActiveTool = tool?.Id ?? "";
            RaisePropertyChanged(nameof(ActiveTool));

            _UpdateSketchEditTool(tool as SketchEditorTool);

        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Sketch
        
        //--------------------------------------------------------------------------------------------------

        public bool SketchGroupVisible
        {
            get { return _SketchGroupVisible; }
            private set
            {
                _SketchGroupVisible = value;
                RaisePropertyChanged();
            }
        }

        bool _SketchGroupVisible;

        //--------------------------------------------------------------------------------------------------

        public string ActiveSketchTool
        {
            get { return _ActiveSketchTool; }
            private set
            {
                _ActiveSketchTool = value;
                RaisePropertyChanged();
            }
        }

        string _ActiveSketchTool;

        //--------------------------------------------------------------------------------------------------

        public bool SketchClipPlaneEnabled
        {
            get { return _CurrentSketchEditorTool?.ClipPlaneEnabled ?? false; }
        }

        //--------------------------------------------------------------------------------------------------

        SketchEditorTool _CurrentSketchEditorTool;
        
        void _UpdateSketchEditTool(SketchEditorTool sketchEditorTool)
        {
            if (_CurrentSketchEditorTool != null)
            {
                _CurrentSketchEditorTool.PropertyChanged -= SketchEditorToolPropertyChanged;
                _CurrentSketchEditorTool = null;
                ActiveSketchTool = "";
                SketchGroupVisible = false;
            }

            if (sketchEditorTool != null)
            {
                SketchGroupVisible = true;
                _CurrentSketchEditorTool = sketchEditorTool;
                _CurrentSketchEditorTool.PropertyChanged += SketchEditorToolPropertyChanged;
                RaisePropertyChanged(nameof(SketchClipPlaneEnabled));
            }
        }

        //--------------------------------------------------------------------------------------------------

        void SketchEditorToolPropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (_CurrentSketchEditorTool != sender) return;

            if (e.PropertyName == nameof(SketchEditorTool.CurrentTool))
            {
                if (_CurrentSketchEditorTool.CurrentTool is SketchSegmentLineCreator)
                {
                    ActiveSketchTool = _CurrentSketchEditorTool.ContinuesSegmentCreation ? "SketchSegmentPolyLineCreator" : "SketchSegmentLineCreator";
                }
                else
                {
                    ActiveSketchTool = _CurrentSketchEditorTool.CurrentTool?.GetType().Name ?? "";
                }
            }
            else if (e.PropertyName == nameof(SketchEditorTool.ClipPlaneEnabled))
            {
                RaisePropertyChanged(nameof(SketchClipPlaneEnabled));
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Transform

        [SerializeMember]
        public TransformBodyTool.PivotPoint TransformPivot
        {
            get { return _TransformPivot; }
            set
            {
                _TransformPivot = value;
                RaisePropertyChanged();
            }
        }

        TransformBodyTool.PivotPoint _TransformPivot;

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public TransformBodyTool.Options TransformOptions
        {
            get { return _TransformOptions; }
            set
            {
                _TransformOptions = value;
                RaisePropertyChanged();
            }
        }

        TransformBodyTool.Options _TransformOptions;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Selection

        [SerializeMember]
        public ViewportController.RubberbandSelectionMode RubberbandSelectionMode
        {
            get { return _RubberbandSelectionMode; }
            set
            {
                _RubberbandSelectionMode = value; 
                RaisePropertyChanged();
            }
        }

        ViewportController.RubberbandSelectionMode _RubberbandSelectionMode;

        //--------------------------------------------------------------------------------------------------

        public bool RubberbandIncludeTouched
        {
            get { return _RubberbandIncludeTouched; }
            set
            {
                _RubberbandIncludeTouched = value;
                RaisePropertyChanged();
            }
        }

        bool _RubberbandIncludeTouched;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Workspace

        WorkspaceController _WorkspaceController;

        //--------------------------------------------------------------------------------------------------

        void _WorkspaceController_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(WorkspaceController.CurrentTool))
            {
                _UpdateActiveTool((sender as WorkspaceController)?.CurrentTool);
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Snapping

        
        [SerializeMember]
        public bool SnapToGridSelected
        {
            get { return _SnapToGridSelected; }
            set
            {
                if (_SnapToGridSelected != value)
                {
                    _SnapToGridSelected = value;
                    RaisePropertyChanged();
                }
            }
        }

        bool _SnapToGridSelected;

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public bool SnapToVertexSelected
        {
            get { return _SnapToVertexSelected; }
            set
            {
                if (_SnapToVertexSelected != value)
                {
                    _SnapToVertexSelected = value;
                    RaisePropertyChanged();
                    _WorkspaceController?.Selection?.Invalidate();
                }
            }
        }

        bool _SnapToVertexSelected;

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public bool SnapToEdgeSelected
        {
            get { return _SnapToEdgeSelected; }
            set
            {
                if (_SnapToEdgeSelected != value)
                {
                    _SnapToEdgeSelected = value;
                    RaisePropertyChanged();
                    _WorkspaceController?.Selection?.Invalidate();
                }
            }
        }

        bool _SnapToEdgeSelected;

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public bool SnappingEnabled
        {
            get { return _SnappingEnabled; }
            set
            {
                if (_SnappingEnabled != value)
                {
                    _SnappingEnabled = value;
                    RaisePropertyChanged();
                    _WorkspaceController?.Selection?.Invalidate();
                }
            }
        }

        bool _SnappingEnabled;

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public double SnappingPixelTolerance
        {
            get { return _SnappingPixelTolerance; }
            set
            {
                _WorkspaceController?.Workspace?.AisContext?.SetPixelTolerance((int)value);
                if (_SnappingPixelTolerance != value)
                {
                    _SnappingPixelTolerance = value;
                    RaisePropertyChanged();
                }
            }
        }

        double _SnappingPixelTolerance = 2.0;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region c'tor and property handling

        public EditorState()
        {
            InteractiveContext.Current.PropertyChanged += _InteractiveContext_PropertyChanged;

            _WorkspaceController = InteractiveContext.Current.WorkspaceController;
            if (_WorkspaceController != null)
            {
                _WorkspaceController.PropertyChanged += _WorkspaceController_PropertyChanged;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _InteractiveContext_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName == "WorkspaceController")
            {
                if (_WorkspaceController != null)
                {
                    _WorkspaceController.PropertyChanged -= _WorkspaceController_PropertyChanged;
                }
                _WorkspaceController = InteractiveContext.Current.WorkspaceController;
                if (_WorkspaceController != null)
                {
                    _WorkspaceController.PropertyChanged += _WorkspaceController_PropertyChanged;
                }

                _WorkspaceController_PropertyChanged(_WorkspaceController, new PropertyChangedEventArgs(nameof(WorkspaceController.CurrentTool)));
            }
        }

        //--------------------------------------------------------------------------------------------------
       

        #endregion
    }
}