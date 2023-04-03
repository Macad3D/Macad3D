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

        protected override bool OnStart()
        {
            if (_Mode == ToolMode.Reselect)
            {
                OverrideVisualShape(_TargetBody, _TargetShape.GetTransformedBRep());
            }

            SelectSubshapeAction toolAction;
            switch (_TargetShape.ShapeType)
            {
                case ShapeType.Sketch:
                    toolAction = new SelectSubshapeAction(this, SubshapeTypes.Edge, _TargetBody);
                    SetHintMessage("Select edge as reference for the mirror axis.");
                    SetCursor(Cursors.SelectEdge);
                    break;

                case ShapeType.Solid:
                    toolAction = new SelectSubshapeAction(this, SubshapeTypes.Face, _TargetBody);
                    SetHintMessage("Select face as reference for the mirror plane.");
                    SetCursor(Cursors.SelectFace);
                    break;

                default:
                    Messages.Error("MultiplyMirror works only on sketch or solid.");
                    return false;
            }
           
            if (!StartAction(toolAction))
                return false;
            toolAction.Finished += _ToolAction_Finished;

            return true;
        }

        //--------------------------------------------------------------------------------------------------
        
        void _ToolAction_Finished(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
        {
            SubshapeReference subshapeRef = null;
            switch (_TargetShape.ShapeType)
            {
                case ShapeType.Sketch:
                    if (args.SelectedSubshapeType == SubshapeTypes.Edge)
                    {
                        subshapeRef = _TargetShape.GetSubshapeReference(_TargetShape.GetTransformedBRep(), TopoDS.Edge(args.SelectedSubshape));
                    }
                    break;

                case ShapeType.Solid:
                    if (args.SelectedSubshapeType == SubshapeTypes.Face)
                    {
                        subshapeRef = _TargetShape.GetSubshapeReference(_TargetShape.GetTransformedBRep(), TopoDS.Face(args.SelectedSubshape));
                    }
                    break;
                default:
                    return;
            }

            if (subshapeRef != null)
            {
                StopAction(action);
                Stop();

                if (_Mode == ToolMode.CreateNew)
                {
                    var mirror = Mirror.Create(_TargetBody, subshapeRef);
                    if (mirror != null)
                    {
                        CommitChanges();
                    }
                }
                else if (_Mode == ToolMode.Reselect)
                {
                    // Reselected face or edge
                    _ModifierToChange.ReferenceShape = subshapeRef;
                    _ModifierToChange.Invalidate();
                    CommitChanges();
                }
            }
            else
            {
                action.Reset();
            }

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

    }
}