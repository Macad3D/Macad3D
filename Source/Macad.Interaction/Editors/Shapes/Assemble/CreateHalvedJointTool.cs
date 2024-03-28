using Macad.Core.Shapes;
using Macad.Core.Topology;
using System.Collections.Generic;
using System.Diagnostics;

namespace Macad.Interaction.Editors.Shapes;

public class CreateHalvedJointTool : Tool
{
    readonly Body _TargetBody1;
    readonly Body _TargetBody2;

    //--------------------------------------------------------------------------------------------------

    public CreateHalvedJointTool(Body body1, Body body2 = null)
    {
        _TargetBody1 = body1;
        Debug.Assert(_TargetBody1 != null);
        _TargetBody2 = body2;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        if (_TargetBody2 != null)
        {
            HalvedJoint.Create(_TargetBody1, _TargetBody2);
            CommitChanges();
            Stop();
            WorkspaceController.Invalidate();
            return false;
        }

        var toolAction = new SelectEntityAction<Body>(this);
        if (!StartAction(toolAction))
        {
            return false;
        }

        toolAction.Preview += _ToolAction_Preview;
        toolAction.Finished += _ToolAction_Finished;
        toolAction.Exclude(_TargetBody1);
        UpdateStatusText(null);
        SetCursor(Cursors.SelectShape);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void UpdateStatusText(string shapeName)
    {
        string text = "__Select shape__ to build a halved joint with";

        if (string.IsNullOrEmpty(shapeName))
        {
            text += ".";
        }
        else
        {
            text += ": _" + shapeName + "_";
        }

        SetHintMessage(text);
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Finished(SelectEntityAction<Body> action, SelectEntityAction<Body>.EventArgs args)
    {
        StopAction(action);

        if (args.SelectedEntity != null)
        {
            HalvedJoint.Create(_TargetBody1, args.SelectedEntity);
            CommitChanges();
        }

        Stop();

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Preview(SelectEntityAction<Body> action, SelectEntityAction<Body>.EventArgs args)
    {
        UpdateStatusText(args.SelectedEntity?.Name);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnEntitySelectionChanging(IEnumerable<InteractiveEntity> entitiesToSelect, IEnumerable<InteractiveEntity> entitiesToUnSelect)
    {
        // Allow shape selections
        return false;
    }

    //--------------------------------------------------------------------------------------------------

}