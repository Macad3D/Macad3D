using System.Linq;
using Macad.Core.Shapes;
using Macad.Core.Topology;

namespace Macad.Interaction.Editors.Shapes;

public class CreateLoftTool : Tool
{
    Body _TargetBody;
    Loft _LoftShape;

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        _TargetBody = WorkspaceController.Selection.SelectedEntities.FirstOrDefault() as Body;
        if (_TargetBody == null)
            return false;

        if(_TargetBody?.Shape?.ShapeType != ShapeType.Sketch)
        {
            if (_TargetBody.Shape is Loft loft)
            {
                _LoftShape = loft;
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
                
            CommitChanges();
            Stop();
            WorkspaceController.Selection.SelectEntity(_TargetBody);
            WorkspaceController.Invalidate();
            return false;
        }

        if (!_StartToolAction())
            return false;

        SetHintMessage("__Select sketches__ to define the sections.");
        SetCursor(Cursors.SelectShape);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Finished(SelectEntityAction<Body> action, SelectEntityAction<Body>.EventArgs args)
    {
        StopAction(action);

        _AddOperand(args.SelectedEntity);
        CommitChanges();
        WorkspaceController.Invalidate();

        _StartToolAction();
    }

    //--------------------------------------------------------------------------------------------------

    bool _StartToolAction()
    {
        var toolAction = new SelectEntityAction<Body>(this);
        toolAction.SetFilter((body) => body.Shape.ShapeType == ShapeType.Sketch);
        if (!StartAction(toolAction))
        {
            return false;
        }

        toolAction.Finished += _ToolAction_Finished;
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