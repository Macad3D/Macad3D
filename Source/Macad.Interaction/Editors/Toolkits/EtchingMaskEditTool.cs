using System.ComponentModel;
using System.Windows;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Toolkits;

public class EtchingMaskEditTool : Tool
{
    public EtchingMaskComponent Component
    {
        get { return _Component; }
    }
        
    //--------------------------------------------------------------------------------------------------

    public Body Body
    {
        get { return _Body; }
    }

    //--------------------------------------------------------------------------------------------------

    EtchingMaskComponent _Component;
    readonly Body _Body;
    EtchingMaskPropertyPanel _Panel;

    #region Tool implementation

    //--------------------------------------------------------------------------------------------------

    public EtchingMaskEditTool(Body body)
    {
        _Body = body;
        _Component = _Body.FindComponent<EtchingMaskComponent>();
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
            if (EtchingMaskComponent.CanFindReferenceFace(_Body.GetBRep()))
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
        _Component = new EtchingMaskComponent();
        _Body.AddComponent(_Component);
    }

    //--------------------------------------------------------------------------------------------------

    void _InitInteractions()
    {
        if (_Panel == null)
        {
            _Panel = CreatePanel<EtchingMaskPropertyPanel>(this, PropertyPanelSortingKey.Tools);
            HidePanels(PropertyPanelSortingKey.BodyShape, PropertyPanelSortingKey.Tools - 1);

            OpenSelectionContext();

            _Component.PropertyChanged += _Component_OnPropertyChanged;
            InteractiveEntity.VisualChanged += _InteractiveEntity_OnVisualChanged;
        }

        _UpdateReconstructed();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        _RemoveReconstructed();
            
        InteractiveEntity.VisualChanged -= _InteractiveEntity_OnVisualChanged;
        if (_Component != null)
        {
            _Component.PropertyChanged -= _Component_OnPropertyChanged;
        }

        base.Cleanup();
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

    bool _IsReconstructedActive;
    bool _IsReconstructeUpdating;

    //--------------------------------------------------------------------------------------------------

    void _BeginUpdateReconstructed()
    {
        if (_IsReconstructeUpdating || !_IsReconstructedActive)
            return;

        _IsReconstructeUpdating = true;
        if (Application.Current == null)
        {
            _UpdateReconstructed();
        }
        else
        {
            Application.Current.Dispatcher.InvokeAsync(_UpdateReconstructed);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateReconstructed()
    {
        var visObject = WorkspaceController.VisualObjects.Get(_Body, true) as VisualShape;
        if (visObject == null)
            return;

        visObject.OverrideBrep = _Component.ReconstructedBRep?.Located(new TopLoc_Location(_Body.GetTransformation()));;
        WorkspaceController.Invalidate();

        _IsReconstructedActive = true;
        _IsReconstructeUpdating = false;
    }

    //--------------------------------------------------------------------------------------------------

    void _RemoveReconstructed()
    {
        if (_IsReconstructedActive)
        {
            var visObject = WorkspaceController.VisualObjects.Get(_Body, true) as VisualShape;
            if (visObject == null)
                return;

            visObject.OverrideBrep = null;
            WorkspaceController.Invalidate();
        }
        _IsReconstructedActive = false;
    }

    //--------------------------------------------------------------------------------------------------

    void _InteractiveEntity_OnVisualChanged(InteractiveEntity entity)
    {
        if (entity == _Body)
        {
            _BeginUpdateReconstructed();
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    void _Component_OnPropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(EtchingMaskComponent.ReconstructedBRep))
        {
            _BeginUpdateReconstructed();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Select Reference Face

    public bool IsSelectingFace
    {
        get { return _SelectFaceAction != null; }
    }

    SelectSubshapeAction _SelectFaceAction;
    TopoDS_Shape _BrepForFaceSelection;
    Shape _ShapeForFaceSelection;

    //--------------------------------------------------------------------------------------------------

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
                _UpdateReconstructed();
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
}