using System.Diagnostics;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class CreateImprintTool : Tool
    {
        enum ToolMode
        {
            CreateNew,
            ReselectFace
        }

        //--------------------------------------------------------------------------------------------------

        readonly ToolMode _Mode;

        readonly Body _TargetBody;
        readonly Shape _TargetShape;
        TopoDS_Shape _TargetBrep;
        readonly Imprint.ImprintMode _ImprintMode;

        readonly Imprint _ImprintToChange;

        //--------------------------------------------------------------------------------------------------

        /// <summary>
        /// Create a new imprint by selecting a target face.
        /// </summary>
        public CreateImprintTool(Body targetBody, Imprint.ImprintMode initialMode = Imprint.ImprintMode.Default) 
        {
            _TargetBody = targetBody;
            _TargetShape = _TargetBody?.Shape;
            Debug.Assert(_TargetShape != null);

            _ImprintMode = initialMode;
            if (_ImprintMode == Imprint.ImprintMode.Default)
                _ImprintMode = Imprint.ImprintMode.Raise;

            _Mode = ToolMode.CreateNew;
        }

        //--------------------------------------------------------------------------------------------------

        /// <summary>
        /// Reselect target face of an imprint shape.
        /// </summary>
        public CreateImprintTool(Imprint imprintToChange)
        {
            _ImprintToChange = imprintToChange;
            Debug.Assert(_ImprintToChange != null);
            _TargetBody = _ImprintToChange.Body;
            Debug.Assert(_TargetBody != null);
            _TargetShape = _ImprintToChange.Operands[0] as Shape;
            Debug.Assert(_TargetShape != null);

            _Mode = ToolMode.ReselectFace;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            _TargetBrep = _TargetShape.GetTransformedBRep();
            if (_TargetBrep == null)
                return false;
            
            if (_Mode == ToolMode.ReselectFace)
            {
                var visualShape = WorkspaceController.VisualObjects.Get(_TargetBody) as VisualShape;
                if (visualShape != null)
                {
                    visualShape.OverrideBrep = _TargetBrep;
                    WorkspaceController.Invalidate();
                }
            }

            var toolAction = new SelectSubshapeAction(this, SubshapeTypes.Face, _TargetBody, new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane));
            if (!WorkspaceController.StartToolAction(toolAction))
                return false;
            toolAction.Finished += _OnActionFinished;

            WorkspaceController.HudManager?.SetHintMessage(this, "Select face to imprint.");
            WorkspaceController.HudManager?.SetCursor(Cursors.SelectFace);
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            bool finished = false;
            var selectAction = toolAction as SelectSubshapeAction;
            Debug.Assert(selectAction != null);

            if (selectAction.SelectedSubshapeType == SubshapeTypes.Face)
            {
                var face = TopoDS.Face(selectAction.SelectedSubshape);
                var brepAdaptor = new BRepAdaptor_Surface(face, true);
                if (brepAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Plane)
                {
                    WorkspaceController.HudManager?.SetHintMessage(this, "Selected face is not a plane type surface.");
                }
                else
                {
                    selectAction.Stop();
                    Stop();
                    finished = true;
                    var faceRef = _TargetShape.GetSubshapeReference(_TargetBrep, face);
                    if (faceRef == null)
                    {
                        Messages.Error("A subshape reference could not be produced for this face.");
                        return;
                    }

                    if (_Mode == ToolMode.CreateNew)
                    {
                        // Create new
                        var sketch = new Sketch
                        {
                            Body = _TargetBody,
                        };

                        var imprint = Imprint.Create(_TargetBody, faceRef, sketch);
                        if (imprint != null)
                        {
                            imprint.Mode = _ImprintMode;
                            InteractiveContext.Current.UndoHandler.Commit();
                            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(_TargetBody);
                            WorkspaceController.StartTool(new SketchEditorTool(sketch));
                        }
                    }
                    else if(_Mode == ToolMode.ReselectFace)
                    {
                        // Reselected face
                        _ImprintToChange.Face = faceRef;
                        _ImprintToChange.Invalidate();
                        InteractiveContext.Current.UndoHandler.Commit();
                    }
                }
            }

            if (!finished)
            {
                selectAction.Reset();
            }

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            var visualShape = WorkspaceController.VisualObjects.Get(_TargetBody) as VisualShape;
            if (visualShape != null)
            {
                visualShape.OverrideBrep = null;
            }
            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------

    }
}