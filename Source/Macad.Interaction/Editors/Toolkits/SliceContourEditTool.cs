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
    public class SliceContourEditTool : Tool
    {
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

        readonly Body _Body;
        SliceContourComponent _Component;
        SliceContourPropertyPanel _Panel;
        SelectionContext _SelectionContext;

        #region Tool implementation

        //--------------------------------------------------------------------------------------------------

        public SliceContourEditTool(Body body)
        {
            _Body = body;
            _Component = _Body.FindComponent<SliceContourComponent>();
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
                _Panel = PropertyPanel.CreatePanel<SliceContourPropertyPanel>(this);
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
            if (IsSelectingFace)
            {
                ToggleFaceSelection();
            }

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
        AIS_Shape _AisPreviewShape;

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
            // Update reconstructed
            var visObject = WorkspaceController.VisualShapes.GetVisualShape(_Body, true);
            if (visObject == null)
                return;

            visObject.OverrideBrep = _Component.ReconstructedBRep?.Located(new TopLoc_Location(_Body.GetTransformation()));;
            _IsReconstructedActive = true;

            // Update preview
            var builder = new BRep_Builder();
            var compound = new TopoDS_Compound();
            builder.MakeCompound(compound);

            if (_Component.Layers != null)
            {
                foreach (var layer in _Component.Layers)
                {
                    var location = new TopLoc_Location(new Trsf(layer.CutPlane.Position, Ax3.XOY));
                    builder.Add(compound, layer.BRep.Located(location));
                }
            }

            compound.Location(new TopLoc_Location(_Body.GetTransformation()));

            if (_AisPreviewShape == null)
            {
                _AisPreviewShape = new AIS_Shape(compound);
                _AisPreviewShape.SetColor(Colors.FilteredSubshapesHot);
                _AisPreviewShape.SetWidth(2.0);
                _AisPreviewShape.SetZLayer(-2); // Top
                WorkspaceController.Workspace.AisContext.Display(_AisPreviewShape, 0, -1, false, false);
            }
            else
            {
                _AisPreviewShape.SetShape(compound);
                WorkspaceController.Workspace.AisContext.RecomputePrsOnly(_AisPreviewShape, false);
            }

            // Finalize
            _IsReconstructeUpdating = false;

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        void _RemoveReconstructed()
        {
            // Remove reconstructed
            if (_IsReconstructedActive)
            {
                var visObject = WorkspaceController.VisualShapes.GetVisualShape(_Body, true);
                if (visObject == null)
                    return;

                visObject.OverrideBrep = null;
            }
            _IsReconstructedActive = false;

            // Remove preview
            if (_AisPreviewShape != null)
            {
                WorkspaceController.Workspace.AisContext.Erase(_AisPreviewShape, false);
                _AisPreviewShape = null;
            }

            WorkspaceController.Invalidate();
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
            if (e.PropertyName == nameof(SliceContourComponent.ReconstructedBRep))
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
                if (brepAdaptor.GetGeomType() != GeomAbs_SurfaceType.GeomAbs_Plane)
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