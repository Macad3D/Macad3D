using System.Diagnostics;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class CreateExtrudeTool : Tool
    {
        enum ToolMode
        {
            CreateNew,
            ReselectFace
        }

        //--------------------------------------------------------------------------------------------------

        readonly Body _TargetBody;
        readonly Shape _TargetShape;
        readonly Extrude _ExtrudeToChange;
        readonly ToolMode _Mode;

        //--------------------------------------------------------------------------------------------------

        public CreateExtrudeTool(Body targetBody)
        {
            _TargetBody = targetBody;
            _TargetShape = _TargetBody?.Shape;
            Debug.Assert(_TargetShape != null);

            _Mode = ToolMode.CreateNew;
        }

        //--------------------------------------------------------------------------------------------------

        public CreateExtrudeTool(Extrude extrudeToChange)
        {
            _ExtrudeToChange = extrudeToChange;
            Debug.Assert(_ExtrudeToChange != null);
            _TargetBody = _ExtrudeToChange.Body;
            Debug.Assert(_TargetBody != null);
            _TargetShape = _ExtrudeToChange.Operands[0] as Shape;
            Debug.Assert(_TargetShape != null);

            _Mode = ToolMode.ReselectFace;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            if (_TargetShape.ShapeType == ShapeType.Sketch)
            {
                var modifierShape = Extrude.Create(_TargetBody);
                if (modifierShape != null)
                {
                    InteractiveContext.Current.UndoHandler.Commit();
                }

                InteractiveContext.Current.WorkspaceController.Invalidate();
                Stop();
                return false;
            }
            else
            {
                if (_Mode == ToolMode.ReselectFace)
                {
                    var visualShape = WorkspaceController.VisualObjects.Get(_TargetBody) as VisualShape;
                    if (visualShape != null)
                    {
                        visualShape.OverrideBrep = _TargetShape.GetTransformedBRep();
                        WorkspaceController.Invalidate();
                    }
                }

                var toolAction = new SelectSubshapeAction(this, SubshapeTypes.Face, _TargetBody);
                if (!WorkspaceController.StartToolAction(toolAction))
                    return false;
                toolAction.Finished += _OnActionFinished;

                WorkspaceController.HudManager?.SetHintMessage(this, "Select face to extrude.");
                WorkspaceController.HudManager?.SetCursor(Cursors.SelectFace);
                return true;
            }
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
                selectAction.Stop();
                Stop();
                finished = true;
                var faceRef = _TargetShape.GetSubshapeReference(_TargetShape.GetTransformedBRep(), face);
                if (faceRef == null)
                {
                    Messages.Error("A subshape reference could not be produced for this face.");
                    return;
                }

                if (_Mode == ToolMode.CreateNew)
                {
                    // Create new
                    var extrude = Extrude.Create(_TargetBody, faceRef);
                    if (extrude != null)
                    {
                        InteractiveContext.Current.UndoHandler.Commit();
                        InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(_TargetBody);
                    }
                }
                else if (_Mode == ToolMode.ReselectFace)
                {
                    // Reselected face
                    _ExtrudeToChange.Face = faceRef;
                    _ExtrudeToChange.Invalidate();
                    InteractiveContext.Current.UndoHandler.Commit();
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
