using System.ComponentModel;
using System.Windows;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Interaction.Visual;
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

        #region Tool implementation

        //--------------------------------------------------------------------------------------------------

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

                OpenSelectionContext();

                _Component.PropertyChanged += _Component_OnPropertyChanged;
                InteractiveEntity.VisualChanged += _InteractiveEntity_OnVisualChanged;
            }

            _UpdateReconstructed();
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnStop()
        {
            if (IsSelectingFace)
            {
                ToggleFaceSelection();
            }

            _RemoveReconstructed();

            InteractiveEntity.VisualChanged -= _InteractiveEntity_OnVisualChanged;
            if (_Component != null)
            {
                _Component.PropertyChanged -= _Component_OnPropertyChanged;
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
            var visObject = WorkspaceController.VisualObjects.Get(_Body, true) as VisualShape;
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
                var visObject = WorkspaceController.VisualObjects.Get(_Body, true) as VisualShape;
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
                SetHintMessage("Select plane base face.");
                SetCursor(Cursors.SelectFace);
            }
            RaisePropertyChanged(nameof(IsSelectingFace));
        }

        //--------------------------------------------------------------------------------------------------

        void _SelectFaceAction_OnFinished(SelectSubshapeAction sender, SelectSubshapeAction.EventArgs args)
        {
            if (args.SelectedSubshapeType == SubshapeTypes.Face)
            {
                var face = TopoDS.Face(args.SelectedSubshape);
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
}