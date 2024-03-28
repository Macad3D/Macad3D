using System.Diagnostics;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;

namespace Macad.Interaction.Editors.Shapes;

public class CreateCircularArrayTool : Tool
{
    readonly Body _TargetBody;
    CircularArray _Shape;
    Trihedron _DefaultPlanes;

    //--------------------------------------------------------------------------------------------------

    public CreateCircularArrayTool(Body targetBody)
    {
        _TargetBody = targetBody;
        Debug.Assert(_TargetBody != null);
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        _Shape = CircularArray.Create(_TargetBody);
        if (_Shape.ShapeType == ShapeType.Sketch)
        {
            Stop();
            CommitChanges();
            return false;
        }

        // Select plane
        _DefaultPlanes = new(WorkspaceController, _TargetBody.GetCoordinateSystem(), Trihedron.Components.Planes);
        Add(_DefaultPlanes);
        var toolAction = new SelectSubshapeAction(SubshapeTypes.None, null, _DefaultPlanes.GetSelectionFilter());
        if (!StartAction(toolAction))
            return false;
        toolAction.Finished += _ToolAction_Finished;
        toolAction.Preview += _ToolActionPreview;

        SetHintMessage("__Select plane__ on which the multiplied elements will be distributed.");
        SetCursor(Cursors.SelectFace);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnCancel()
    {
        _TargetBody.RemoveShape(_Shape, false);
        return base.OnCancel();
    }
    
    //--------------------------------------------------------------------------------------------------

    CircularArray.PlaneType? _GetPlaneFromAction(SelectSubshapeAction.EventArgs args)
    {
        return _DefaultPlanes.GetComponent(args.SelectedAisObject) switch
        {
            Trihedron.Components.PlaneXY => CircularArray.PlaneType.XY,
            Trihedron.Components.PlaneZX => CircularArray.PlaneType.ZX,
            Trihedron.Components.PlaneYZ => CircularArray.PlaneType.YZ,
            _ => null
        };
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolActionPreview(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
    {
        var plane = _GetPlaneFromAction(args);
        if (plane.HasValue)
        {
            _Shape.Plane = plane.Value;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Finished(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
    {
        var plane = _GetPlaneFromAction(args);
        if (plane.HasValue)
        {
            _Shape.Plane = plane.Value;
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