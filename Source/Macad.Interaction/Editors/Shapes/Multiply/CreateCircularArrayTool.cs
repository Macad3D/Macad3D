using System.Diagnostics;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class CreateCircularArrayTool : Tool
{
    readonly Body _TargetBody;
    CircularArray _Shape;
    readonly Plane[] _DefaultPlanes = new Plane[3];

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
        _CreateDefaultPlanes();

        var selectionFilter = new InstanceSelectionFilter(_DefaultPlanes);
        var toolAction = new SelectSubshapeAction(this, SubshapeTypes.None, null, selectionFilter);
        if (!StartAction(toolAction))
            return false;
        toolAction.Finished += _ToolAction_Finished;
        toolAction.Preview += _ToolActionPreview;

        SetHintMessage("Select plane on which the multiplied elements will be distributed.");
        SetCursor(Cursors.SelectFace);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnCancel()
    {
        _Shape.Plane = CircularArray.PlaneType.XY;
        CommitChanges();
        return base.OnCancel();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        for (var i = 0; i < _DefaultPlanes.Length; i++)
        {
            _DefaultPlanes[i]?.Remove();
            _DefaultPlanes[i] = null;
        }

        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateDefaultPlanes()
    {
        var coord = _TargetBody.GetCoordinateSystem();

        _DefaultPlanes[0] = new Plane(WorkspaceController, Plane.Style.Topmost | Plane.Style.NoResize)
        {
            IsSelectable = true,
            Size = new XY(2, 2),
            Margin = new Vec2d(1, 1),
            Color = Colors.ActionBlue
        };
        _DefaultPlanes[0].Set(new Pln(coord));

        _DefaultPlanes[1] = new Plane(WorkspaceController, Plane.Style.Topmost | Plane.Style.NoResize)
        {
            IsSelectable = true,
            Size = new XY(2, 2),
            Margin = new Vec2d(1, 1),
            Color = Colors.ActionGreen
        };
        _DefaultPlanes[1].Set(new Pln(new Ax3(coord.Location, coord.YDirection, coord.Direction)));

        _DefaultPlanes[2] = new Plane(WorkspaceController, Plane.Style.Topmost | Plane.Style.NoResize)
        {
            IsSelectable = true,
            Size = new XY(2, 2),
            Margin = new Vec2d(1, -1),
            Color = Colors.ActionRed
        };
        _DefaultPlanes[2].Set(new Pln(new Ax3(coord.Location, coord.XDirection, coord.Direction)));
    }

    //--------------------------------------------------------------------------------------------------

    CircularArray.PlaneType? _GetPlaneFromAction(SelectSubshapeAction.EventArgs args)
    {
        if (args.SelectedAisObject != null)
        {
            if (args.SelectedAisObject.Equals(_DefaultPlanes[0].AisObject))
            {
                return CircularArray.PlaneType.XY;
            }
            else if (args.SelectedAisObject.Equals(_DefaultPlanes[1].AisObject))
            {
                return CircularArray.PlaneType.ZX;
            }
            else if (args.SelectedAisObject.Equals(_DefaultPlanes[2].AisObject))
            {
                return CircularArray.PlaneType.YZ;
            }
        }

        return null;
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