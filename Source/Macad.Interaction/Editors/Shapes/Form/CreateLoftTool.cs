using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Windows.Forms;
using Macad.Core.Shapes;
using Macad.Core.Topology;

namespace Macad.Interaction.Editors.Shapes
{
    public class CreateLoftTool : Tool
    {
        Body _TargetBody;
        Loft _LoftShape;

        //--------------------------------------------------------------------------------------------------
        
        public CreateLoftTool()
        {
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            _TargetBody = WorkspaceController.Selection.SelectedEntities.FirstOrDefault() as Body;
            if (_TargetBody == null)
                return false;

            if(_TargetBody?.Shape?.ShapeType != ShapeType.Sketch)
            {
                if (_TargetBody.Shape is Loft)
                {
                    _LoftShape = _TargetBody.Shape as Loft;
                }
                else
                {
                    return false;
                }
            }

            if (WorkspaceController.Selection.SelectedEntities.Count > 1)
            {
                foreach (var entity in WorkspaceController.Selection.SelectedEntities.Skip(1))
                {
                    var body = entity as Body;
                    if (body == null)
                        continue;

                    _AddOperand(body);
                }
                InteractiveContext.Current.UndoHandler.Commit();

                Stop();
                
                WorkspaceController.Selection.SelectEntity(_TargetBody);
                WorkspaceController.Invalidate();
                return false;
            }

            if (!_StartToolAction())
                return false;

            StatusText = "Select section sketches.";
            WorkspaceController.HudManager?.SetCursor(Cursors.SelectShape);
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            var selectAction = toolAction as SelectEntityAction<Body>;
            Debug.Assert(selectAction != null);
            selectAction.Stop();

            _AddOperand(selectAction.SelectedEntity);
            InteractiveContext.Current.UndoHandler.Commit();
            WorkspaceController.Invalidate();

            _StartToolAction();
        }

        //--------------------------------------------------------------------------------------------------

        bool _StartToolAction()
        {
            var toolAction = new SelectEntityAction<Body>(this);
            toolAction.SetFilter((body) => body.Shape.ShapeType == ShapeType.Sketch);
            if (!WorkspaceController.StartToolAction(toolAction))
                return false;
            toolAction.Finished += _OnActionFinished;

            toolAction.Exclude(_TargetBody);

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _AddOperand(Body operandBody)
        {
            if (operandBody?.Shape?.ShapeType == ShapeType.Sketch)
            {
                if (_LoftShape == null)
                {
                    _LoftShape = Loft.Create(_TargetBody, new[] {new BodyShapeOperand(operandBody)});
                }
                else
                {
                    _TargetBody.SaveTopologyUndo();
                    _LoftShape.AddOperand(new BodyShapeOperand(operandBody));
                }
                operandBody.IsVisible = false;
            }
        }
    }
}