using System;
using System.ComponentModel;
using Macad.Interaction.Editors.Shapes;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Interaction.Panels;
using System.Runtime.CompilerServices;

namespace Macad.Interaction;

[SerializeType]
public sealed class EditorState : BaseObject, IDisposable
{
    #region Active Tools

    public string ActiveTool
    {
        get { return _ActiveTool; }
        // ReSharper disable once ValueParameterNotUsed
        set
        {
            // Some controls need a TwoWay binding which triggers a property change to get correct state
            // e.g. ToggleButton toggles itself, with TwoWay binding we get notified and can trigger state update
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

    public bool SketchContinuesSegmentCreation
    {
        get { return _CurrentSketchEditorTool?.CurrentTool is SketchSegmentCreator && (_CurrentSketchEditorTool?.ContinuesSegmentCreation ?? false); }
    }

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
            _CurrentSketchEditorTool.PropertyChanged -= _SketchEditorTool_PropertyChanged;
            _CurrentSketchEditorTool = null;
            ActiveSketchTool = "";
            SketchGroupVisible = false;
        }

        if (sketchEditorTool != null)
        {
            SketchGroupVisible = true;
            _CurrentSketchEditorTool = sketchEditorTool;
            _CurrentSketchEditorTool.PropertyChanged += _SketchEditorTool_PropertyChanged;
            RaisePropertyChanged(nameof(SketchClipPlaneEnabled));
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _SketchEditorTool_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (_CurrentSketchEditorTool != sender) return;

        if (e.PropertyName == nameof(SketchEditorTool.CurrentTool))
        {
            ActiveSketchTool = _CurrentSketchEditorTool.CurrentTool?.GetType().Name ?? "";
            RaisePropertyChanged(nameof(SketchContinuesSegmentCreation));
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
    public TransformTool.PivotPoint TransformPivot
    {
        get { return _TransformPivot; }
        set
        {
            _TransformPivot = value;
            RaisePropertyChanged();
        }
    }

    TransformTool.PivotPoint _TransformPivot;

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public TransformTool.Options TransformOptions
    {
        get { return _TransformOptions; }
        set
        {
            _TransformOptions = value;
            RaisePropertyChanged();
        }
    }

    TransformTool.Options _TransformOptions;

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

    public SnapInfo SnapInfo { get; private set; }

    //--------------------------------------------------------------------------------------------------
    
    void _SnapBase_SnapInfoChanged(SnapInfo snapInfo)
    {
        SnapInfo = snapInfo;
        RaisePropertyChanged(nameof(SnapInfo));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Document Explorer

    [SerializeMember]
    public DocumentFilterFlags DocumentFilterFlags
    {
        get { return _DocumentFilterFlags; }
        set
        {
            if (_DocumentFilterFlags == value)
                return;

            _DocumentFilterFlags = value; 
            RaisePropertyChanged();
        }
    }

    DocumentFilterFlags _DocumentFilterFlags = DocumentFilterFlags.None;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region c'tor and property handling

    internal EditorState()
    {
        InteractiveContext.Current.PropertyChanged += _InteractiveContext_PropertyChanged;

        _WorkspaceController = InteractiveContext.Current.WorkspaceController;
        if (_WorkspaceController != null)
        {
            _WorkspaceController.PropertyChanged += _WorkspaceController_PropertyChanged;
        }

        ISnapHandler.SnapInfoChanged += _SnapBase_SnapInfoChanged;
    }

    //--------------------------------------------------------------------------------------------------

    public void Dispose()
    {
        ISnapHandler.SnapInfoChanged -= _SnapBase_SnapInfoChanged;
        if (_WorkspaceController != null)
        {
            _WorkspaceController.PropertyChanged -= _WorkspaceController_PropertyChanged;
        }
        InteractiveContext.Current.PropertyChanged -= _InteractiveContext_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------

    void _InteractiveContext_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(InteractiveContext.WorkspaceController))
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

    public static event PropertyChangedEventHandler StateChanged;

    protected override void RaisePropertyChanged([CallerMemberName]string propertyName = "")
    {
        base.RaisePropertyChanged(propertyName);
        StateChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}