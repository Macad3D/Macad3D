using System.ComponentModel;
using System.Diagnostics;
using System.Windows;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction.Editors.Toolkits
{
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
        SelectionContext _SelectionContext;

        #region Tool implementation

        //--------------------------------------------------------------------------------------------------

        public EtchingMaskEditTool(Body body)
        {
            _Body = body;
            _Component = _Body.FindComponent<EtchingMaskComponent>();
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
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
                _Panel = PropertyPanel.CreatePanel<EtchingMaskPropertyPanel>(this);
                InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Tools);
                InteractiveContext.Current.PropertyPanelManager?.HidePanels(PropertyPanelSortingKey.BodyShape, PropertyPanelSortingKey.Tools - 1);

                _SelectionContext = InteractiveContext.Current.WorkspaceController.Selection.OpenContext();

                _Component.PropertyChanged += _Component_OnPropertyChanged;
                InteractiveEntity.VisualChanged += _InteractiveEntity_OnVisualChanged;
            }

            _UpdateReconstructed();
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
            InteractiveContext.Current.PropertyPanelManager?.HidePanels(0, 0);
            _RemoveReconstructed();

            InteractiveContext.Current.WorkspaceController.Selection.CloseContext(_SelectionContext);
            
            InteractiveEntity.VisualChanged -= _InteractiveEntity_OnVisualChanged;
            if (_Component != null)
            {
                _Component.PropertyChanged -= _Component_OnPropertyChanged;
            }

            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Cancel(bool force)
        {
            if (!force)
            {
                if (IsSelectingFace)
                {
                    ToggleFaceSelection();
                    return false;
                }
            }

            return base.Cancel(force);
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
                Application.Current.Dispatcher.InvokeAsync(() => { _UpdateReconstructed(); });
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateReconstructed()
        {
            var visObject = WorkspaceController.VisualShapes.GetVisualShape(_Body, true);
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
                var visObject = WorkspaceController.VisualShapes.GetVisualShape(_Body, true);
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
        Shape _ShapeForFaceSelection;

        //--------------------------------------------------------------------------------------------------

        public void ToggleFaceSelection()
        {
            if (_SelectFaceAction != null)
            {
                _SelectFaceAction.Cancel(true);
                _SelectFaceAction = null;
                StatusText = "";
                WorkspaceController.HudManager?.SetCursor(null);
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
                var selectionBRep = _ShapeForFaceSelection.GetTransformedBRep();
                if (selectionBRep == null)
                    return;
                var visObject = WorkspaceController.VisualShapes.GetVisualShape(_Body, true);
                if (visObject == null)
                    return;
                visObject.OverrideBrep = selectionBRep;

                _SelectFaceAction = new SelectSubshapeAction(this, SubshapeTypes.Face, _Body, new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane));
                if (!WorkspaceController.StartToolAction(_SelectFaceAction))
                {
                    _SelectFaceAction = null;
                    return;
                }
                _SelectFaceAction.Finished += _SelectFaceAction_OnFinished;
                StatusText = "Select plane base face.";
                WorkspaceController.HudManager?.SetCursor(Cursors.SelectFace);
            }
            RaisePropertyChanged(nameof(IsSelectingFace));
        }

        //--------------------------------------------------------------------------------------------------

        void _SelectFaceAction_OnFinished(ToolAction toolaction)
        {
            Debug.Assert(toolaction == _SelectFaceAction);

            if (_SelectFaceAction.SelectedSubshapeType == SubshapeTypes.Face)
            {
                var face = TopoDS.Face(_SelectFaceAction.SelectedSubshape);
                var brepAdaptor = new BRepAdaptor_Surface(face, true);
                if (brepAdaptor.GetTypeOcc() != GeomAbs_SurfaceType.GeomAbs_Plane)
                {
                    StatusText = "Selected face is not a plane type surface.";
                    _SelectFaceAction.Reset();
                    return;
                }

                var subshapeReference = _Body.Shape.GetSubshapeReference(_ShapeForFaceSelection.GetTransformedBRep(), _SelectFaceAction.SelectedSubshape);

                if (subshapeReference != null)
                {
                    if (_Component == null)
                    {
                        _CreateComponent();
                    }
                    _Component.ReferenceFace = subshapeReference;
                    InteractiveContext.Current.UndoHandler.Commit();
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
}