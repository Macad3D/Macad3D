using System;
using System.Diagnostics;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class CreateMirrorTool : Tool
    {
        enum ToolMode
        {
            CreateNew,
            Reselect
        }

        //--------------------------------------------------------------------------------------------------

        readonly ToolMode _Mode;

        readonly Body _TargetBody;
        readonly Shape _TargetShape;

        readonly Mirror _ModifierToChange;

        //--------------------------------------------------------------------------------------------------

        public CreateMirrorTool(Body targetBody)
        {
            _TargetBody = targetBody;
            _TargetShape = _TargetBody?.Shape;
            Debug.Assert(_TargetBody != null);

            _Mode = ToolMode.CreateNew;
        }
        
        //--------------------------------------------------------------------------------------------------

        public CreateMirrorTool(Mirror modifierToChange)
        {
            _ModifierToChange = modifierToChange;
            Debug.Assert(_ModifierToChange != null);
            _TargetBody = _ModifierToChange.Body;
            Debug.Assert(_TargetBody != null);
            _TargetShape = _ModifierToChange.Operands[0] as Shape;
            Debug.Assert(_TargetShape != null);

            _Mode = ToolMode.Reselect;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            if (_Mode == ToolMode.Reselect)
            {
                var visualShape = WorkspaceController.VisualObjects.Get(_TargetBody) as VisualShape;
                if (visualShape != null)
                {
                    visualShape.OverrideBrep = _TargetShape.GetTransformedBRep();
                    WorkspaceController.Invalidate();
                }
            }

            SelectSubshapeAction toolAction;
            switch (_TargetShape.ShapeType)
            {
                case ShapeType.Sketch:
                    toolAction = new SelectSubshapeAction(this, SubshapeTypes.Edge, _TargetBody);
                    WorkspaceController.HudManager?.SetHintMessage(this, "Select edge as reference for the mirror axis.");
                    WorkspaceController.HudManager?.SetCursor(Cursors.SelectEdge);
                    break;

                case ShapeType.Solid:
                    toolAction = new SelectSubshapeAction(this, SubshapeTypes.Face, _TargetBody);
                    WorkspaceController.HudManager?.SetHintMessage(this, "Select face as reference for the mirror plane.");
                    WorkspaceController.HudManager?.SetCursor(Cursors.SelectFace);
                    break;

                default:
                    Messages.Error("MultiplyMirror works only on sketch or solid.");
                    return false;
            }
           
            if (!WorkspaceController.StartToolAction(toolAction))
                return false;
            toolAction.Finished += _OnActionFinished;

            return true;
        }

        //--------------------------------------------------------------------------------------------------
        
        void _OnActionFinished(ToolAction toolAction)
        {
            var selectAction = toolAction as SelectSubshapeAction;
            Debug.Assert(selectAction != null);

            SubshapeReference subshapeRef = null;

            switch (_TargetShape.ShapeType)
            {
                case ShapeType.Sketch:
                    if (selectAction.SelectedSubshapeType == SubshapeTypes.Edge)
                    {
                        subshapeRef = _TargetShape.GetSubshapeReference(_TargetShape.GetTransformedBRep(), TopoDS.Edge(selectAction.SelectedSubshape));
                    }
                    break;

                case ShapeType.Solid:
                    if (selectAction.SelectedSubshapeType == SubshapeTypes.Face)
                    {
                        subshapeRef = _TargetShape.GetSubshapeReference(_TargetShape.GetTransformedBRep(), TopoDS.Face(selectAction.SelectedSubshape));
                    }
                    break;
                default:
                    return;
            }

            if (subshapeRef != null)
            {
                selectAction.Stop();
                Stop();

                if (_Mode == ToolMode.CreateNew)
                {
                    var mirror = Mirror.Create(_TargetBody, subshapeRef);
                    if (mirror != null)
                    {
                        InteractiveContext.Current.UndoHandler.Commit();
                        //InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(_TargetBody);
                    }
                }
                else if (_Mode == ToolMode.Reselect)
                {
                    // Reselected face or edge
                    _ModifierToChange.ReferenceShape = subshapeRef;
                    _ModifierToChange.Invalidate();
                    InteractiveContext.Current.UndoHandler.Commit();
                }
            }
            else
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