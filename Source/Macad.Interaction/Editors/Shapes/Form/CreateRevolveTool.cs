using System.Diagnostics;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;

namespace Macad.Interaction.Editors.Shapes;

public class CreateRevolveTool : Tool
{
    readonly Body _TargetBody;
    Revolve _Shape;
    Trihedron _DefaultAxes;

    //--------------------------------------------------------------------------------------------------

    public CreateRevolveTool(Body targetBody)
    {
        _TargetBody = targetBody;
        Debug.Assert(_TargetBody != null);
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        _Shape = Revolve.Create(_TargetBody);

        // Select plane
        _DefaultAxes = new(WorkspaceController, _TargetBody.GetCoordinateSystem(), Trihedron.Components.Axes);
        Add(_DefaultAxes);
        var toolAction = new SelectSubshapeAction(SubshapeTypes.None, null, _DefaultAxes.GetSelectionFilter());
        if (!StartAction(toolAction))
            return false;
        toolAction.Finished += _ToolAction_Finished;
        toolAction.Preview += _ToolActionPreview;

        SetHintMessage("__Select axis__ around which the shape will be revolved.");
        SetCursor(Cursors.SelectEdge);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnCancel()
    {
        _TargetBody.RemoveShape(_Shape, false);
        return base.OnCancel();
    }
    
    //--------------------------------------------------------------------------------------------------

    Revolve.RevolveAxis? _GetAxisFromAction(SelectSubshapeAction.EventArgs args)
    {
        return _DefaultAxes.GetComponent(args.SelectedAisObject) switch
        {
            Trihedron.Components.AxisX => Revolve.RevolveAxis.LocalX,
            Trihedron.Components.AxisY => Revolve.RevolveAxis.LocalY,
            Trihedron.Components.AxisZ => Revolve.RevolveAxis.LocalZ,
            _ => null
        };
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolActionPreview(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
    {
        var axis = _GetAxisFromAction(args);
        if (axis.HasValue)
        {
            _Shape.Axis = axis.Value;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Finished(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
    {
        var axis = _GetAxisFromAction(args);
        if (axis.HasValue)
        {
            _Shape.Axis = axis.Value;
            CommitChanges();
            StopAction(action);
            Stop();
        }
        else
        {
            action.Reset();
        }

        WorkspaceController.Invalidate();
    }
}