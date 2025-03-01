using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Windows;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Toolkits;

public class SliceContourEditTool : Tool
{
    #region Properties

    public SliceContourComponent Component
    {
        get { return _Component; }
    }
        
    //--------------------------------------------------------------------------------------------------

    public Body Body
    {
        get { return _Body; }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsSelectingFace
    {
        get { return _SelectFaceAction != null; }
    }

    //--------------------------------------------------------------------------------------------------

    public bool ShowReconstruction
    {
        get { return _ShowReconstruction; }
        set
        {
            if (_ShowReconstruction != value)
            {
                _ShowReconstruction = value;
                _UpdateReconstruction();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    readonly Body _Body;
    SliceContourComponent _Component;
    SliceContourPropertyPanel _Panel;

    SelectSubshapeAction _SelectSliceAction;
    AxisValueAction _MoveSliceAction;
    readonly List<TopoDS_Shape> _SliceBReps = new();
    int _SliceMovingIndex;
    double _SliceMovingStartValue;
    double _SliceMovingNextValue;
    MultiValueHudElement _HudElement;

    bool _ShowReconstruction;
    bool _IsReconstructedActive;
    bool _IsUpdating;

    SelectSubshapeAction _SelectFaceAction;
    TopoDS_Shape _BrepForFaceSelection;
    Shape _ShapeForFaceSelection;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Tool implementation

    public SliceContourEditTool(Body body)
    {
        _Body = body;
        _Component = _Body.FindComponent<SliceContourComponent>();
    }
        
    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        if (_Component != null)
        {
            _InitInteractions();
        }
        else
        {
            if (SliceContourComponent.CanFindReferenceFace(_Body.GetBRep()))
            {
                _CreateComponent();
                _InitInteractions();
            }
            else
            {
                ToggleFaceSelection();
            }
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateComponent()
    {
        _Component = new SliceContourComponent();
        _Body.AddComponent(_Component);
    }

    //--------------------------------------------------------------------------------------------------

    void _InitInteractions()
    {
        if (_Panel == null)
        {
            _Panel = CreatePanel<SliceContourPropertyPanel>(this, PropertyPanelSortingKey.Tools);
            HidePanels(PropertyPanelSortingKey.BodyShape, PropertyPanelSortingKey.Tools - 1);

            _Component.PropertyChanged += _Component_OnPropertyChanged;
            InteractiveEntity.VisualChanged += _InteractiveEntity_OnVisualChanged;

            // Read settings
            var settings = SliceContourEditorSettings.GetOrCreate(Component);
            ShowReconstruction = settings.ShowReconstruction;
        }

        _Update();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnStop()
    {
        if (IsSelectingFace)
        {
            ToggleFaceSelection();
        }

        if (_SelectSliceAction != null)
        {
            StopAction(_SelectSliceAction);
            _SelectSliceAction = null;
        }

        if (_MoveSliceAction != null)
        {
            StopAction(_MoveSliceAction);
            _MoveSliceAction = null;
        }

        _RemoveVisuals();

        InteractiveEntity.VisualChanged -= _InteractiveEntity_OnVisualChanged;
        if (_Component != null)
        {
            _Component.PropertyChanged -= _Component_OnPropertyChanged;

            // Save settings
            var settings = SliceContourEditorSettings.GetOrCreate(Component);
            settings.ShowReconstruction = ShowReconstruction;
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnCancel()
    {
        if (IsSelectingFace)
        {
            ToggleFaceSelection();
            return false;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
        
    #region Visuals

    void _BeginUpdate()
    {
        if (_IsUpdating)
            return;

        _IsUpdating = true;
        if (Application.Current == null)
        {
            _Update();
        }
        else
        {
            Application.Current.Dispatcher.InvokeAsync(_Update);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _Update()
    {
        _IsUpdating = true;

        _UpdateReconstruction();
        _UpdatePreview();

        _IsUpdating = false;

        // Finalize
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateReconstruction()
    {
        var visObject = WorkspaceController.VisualObjects.Get(_Body, true) as VisualShape;
        if (visObject == null)
        {
            _IsReconstructedActive = false;
            return;
        }

        if (_ShowReconstruction)
        {
            // Update reconstructed
            visObject.OverrideBrep = _Component.ReconstructedBRep?.Located(new TopLoc_Location(_Body.GetTransformation()));
            _IsReconstructedActive = true;
        }
        else if (_IsReconstructedActive)
        {
            visObject.OverrideBrep = null;
            _IsReconstructedActive = false;
        }

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdatePreview()
    {
        // Reset action if slice count changed
        if (_SliceBReps != null && Component.LayerCount != _SliceBReps?.Count)
        {
            StopAction(_SelectSliceAction);
            _SelectSliceAction = null;
        }
            
        // Update preview
        Trsf bodyTrsf = _Body.GetTransformation();
        BRep_Builder builder = new ();
        _SliceBReps.Clear();

        if (_Component.Layers != null)
        {
            foreach (var layer in _Component.Layers)
            {
                TopoDS_Compound compound = new();
                builder.MakeCompound(compound);
                var location = new TopLoc_Location(new Trsf(layer.CutPlane.Position, Ax3.XOY));
                layer.BRep.Located(location).Wires().ForEach(wire => builder.Add(compound, wire));
                _SliceBReps.Add(compound);
            }
        }
                        
        // Create action
        if (_SelectSliceAction == null)
        {
            _SelectSliceAction = new SelectSubshapeAction(_SliceBReps, Body.GetTransformation(), Colors.FilteredSubshapesHot)
            {
                SelectOnMouseDown = true
            };
            _SelectSliceAction.Finished += SelectSliceActionFinished;
            StartAction(_SelectSliceAction);
        }
        else
        {
            _SelectSliceAction?.UpdateShapes(_SliceBReps, Body.GetTransformation());
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RemoveVisuals()
    {
        // Remove reconstructed
        if (_IsReconstructedActive)
        {
            var visObject = WorkspaceController.VisualObjects.Get(_Body, true) as VisualShape;
            if (visObject == null)
                return;

            visObject.OverrideBrep = null;
        }
        _IsReconstructedActive = false;

        // Remove preview
        _SliceBReps.Clear();

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _InteractiveEntity_OnVisualChanged(InteractiveEntity entity)
    {
        if (entity == _Body)
        {
            _BeginUpdate();
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    void _Component_OnPropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(SliceContourComponent.ReconstructedBRep)
            || e.PropertyName == nameof(SliceContourComponent.CustomLayerInterval))
        {
            _BeginUpdate();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Select Reference Face

    public void ToggleFaceSelection()
    {
        if (_SelectFaceAction != null)
        {
            StopAction(_SelectFaceAction);
            _SelectFaceAction = null;
            RemoveHintMessage();
            RemoveCursor();
            RaisePropertyChanged(nameof(IsSelectingFace));

            if (_Component == null)
            {
                // No face, no component
                Stop();
            }
            else
            {
                _Update();
                WorkspaceController.Invalidate();
            }
        }
        else
        {
            _ShapeForFaceSelection = _Component?.GetShape() ?? _Body.Shape;
            _BrepForFaceSelection = _ShapeForFaceSelection.GetTransformedBRep();
            if (_BrepForFaceSelection == null)
                return;
            var visObject = WorkspaceController.VisualObjects.Get(_Body, true) as VisualShape;
            if (visObject == null)
                return;
            visObject.OverrideBrep = _BrepForFaceSelection;

            StopAction(_SelectSliceAction);
            _SelectSliceAction = null;

            _SelectFaceAction = new SelectSubshapeAction(SubshapeTypes.Face, _Body, new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane));
            if (!StartAction(_SelectFaceAction))
            {
                _SelectFaceAction = null;
                return;
            }
            _SelectFaceAction.Finished += _SelectFaceAction_OnFinished;
            SetHintMessage("__Select face__ to define base plane.");
            SetCursor(Cursors.SelectFace);
        }
        RaisePropertyChanged(nameof(IsSelectingFace));
    }

    //--------------------------------------------------------------------------------------------------

    void _SelectFaceAction_OnFinished(SelectSubshapeAction sender, SelectSubshapeAction.EventArgs args)
    {
        if (args.SelectedSubshapeType == SubshapeTypes.Face)
        {
            var face = args.SelectedSubshape.ToFace();
            var brepAdaptor = new BRepAdaptor_Surface(face, true);
            if (brepAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Plane)
            {
                SetHintMessage("Selected face is not a plane type surface.");
                _SelectFaceAction.Reset();
                return;
            }

            var subshapeReference = _ShapeForFaceSelection.GetSubshapeReference(_BrepForFaceSelection, args.SelectedSubshape);

            if (subshapeReference != null)
            {
                if (_Component == null)
                {
                    _CreateComponent();
                }
                _Component.ReferenceFace = subshapeReference;
                CommitChanges();
            }
            else
            {
                Messages.Error("A subshape reference could not be produced for this subshape.");
            }
        }

        ToggleFaceSelection();

        if (_Component != null)
        {
            _InitInteractions();
        }
        else
        {
            Stop();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Move Layer
        
    void SelectSliceActionFinished(SelectSubshapeAction sender, SelectSubshapeAction.EventArgs args)
    {
        var index = _SliceBReps.IndexOfFirst(slice => slice.IsSame(args.SelectedSubshape));
        if (index == -1)
        {
            _SelectSliceAction.Reset();
            return;
        }

        var layer = Component.Layers[index];
        var axis = layer.CutPlane.Axis.Transformed(Body.GetTransformation());
        IntAna_IntConicQuad intersect = new(new gp_Lin(args.MouseEventData.PickAxis), layer.CutPlane, Precision.Angular(), 0, 0);
        if (intersect.NbPoints() == 0)
        {
            _SelectSliceAction.Reset();
            return;
        }
        axis.Location = intersect.Point(1);

        _SliceMovingIndex = index;
        _SliceMovingStartValue = layer.Interval;
        if (index < Component.Layers.Length - 1)
            _SliceMovingNextValue = Component.Layers[index + 1].Interval;
        _MoveSliceAction = new AxisValueAction(axis);
        _MoveSliceAction.Preview += _MoveSliceAction_Preview;
        _MoveSliceAction.Finished += _MoveSliceAction_Finished;
        StartAction(_MoveSliceAction, false);

        args.MouseEventData.Return.ForceReDetection = true;

        SetCursor(Cursors.SetHeight);
        SetHintMessage("__Adjust slice plane interval__. Press `k:Shift` to also move subsequent layers. Press `k:Ctrl` to round to current grid step.");
    }

    //--------------------------------------------------------------------------------------------------

    void _MoveSliceAction_Preview(AxisValueAction sender, AxisValueAction.EventArgs args)
    {
        double[] newInterval;
        if (Component.CustomLayerInterval == null)
        {
            newInterval = new double[Component.LayerCount];
            newInterval.Fill( 1.0 );
            var layers = Component.Layers;
            for (int i = 0; i < Math.Min(layers.Length, Component.LayerCount); i++)
            {
                newInterval[i] = layers[i].Interval;
            }
        }
        else
        {
            newInterval = new double[Component.CustomLayerInterval.Length];
            Component.CustomLayerInterval.CopyTo(newInterval, 0);
        }

        var newValue = _SliceMovingStartValue + args.Value;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            newValue = Maths.RoundToNearest(newValue, WorkspaceController.Workspace.GridStep);
        }

        if (newValue < 0)
        {
            newValue = 0;
        }

        newInterval[_SliceMovingIndex] = newValue;
        var correctedDelta = newValue - _SliceMovingStartValue;
        if (!args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Shift) && _SliceMovingIndex < newInterval.Length-1)
        {
            newInterval[_SliceMovingIndex + 1] = Math.Max(0.0, _SliceMovingNextValue - correctedDelta);
        }

        Component.CustomLayerInterval = newInterval;

        if (_HudElement == null)
        {
            _HudElement = new MultiValueHudElement();
            _HudElement.Label1 = "Interval";
            _HudElement.Units1 = ValueUnits.Length;
            _HudElement.Label2 = "Offset";
            _HudElement.Units2 = ValueUnits.Length;
            Add(_HudElement);
        }
        _HudElement.SetValues(newInterval[_SliceMovingIndex], newInterval.Take(_SliceMovingIndex+1).Sum());
    }

    //--------------------------------------------------------------------------------------------------

    void _MoveSliceAction_Finished(AxisValueAction sender, AxisValueAction.EventArgs args)
    {
        StopAction(_SelectSliceAction);
        _SelectSliceAction = null;
        StopAction(_MoveSliceAction);
        _MoveSliceAction = null;

        SetCursor(null);
        SetHintMessage(null);
        Remove(_HudElement);
        _HudElement = null;

        InteractiveContext.Current.UndoHandler.Commit();

        _Update();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}