using Macad.Interaction.Visual;
using Macad.Occt;
using System.Numerics;

namespace Macad.Interaction;

public class PointAction : ToolAction
{
    #region Events

    public class EventArgs
    {
        public Pnt Point { get; init; }
        public Pnt2d PointOnPlane { get; init; }
        public MouseEventData MouseEventData { get; init; }
        public Pnt MarkerPosition { get; set; }
    }

    public delegate void EventHandler(PointAction sender, EventArgs args);
    public event EventHandler Preview;
    public event EventHandler Finished;
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    Pnt _CurrentPoint;
    Marker _Marker;
    HintLine _HintLine;
    Snap3D _SnapHandler;

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        _SnapHandler = SetSnapHandler(new Snap3D());
        OpenSelectionContext();
        return true;
    }

    //--------------------------------------------------------------------------------------------------
        
    protected override void Cleanup()
    {
        Preview = null;
        Finished = null;
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    void _EnsureMarker()
    {
        if (_Marker == null)
        {
            _Marker = new Marker(WorkspaceController, Marker.Styles.Bitmap, Marker.PlusImage);
            Add(_Marker);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void ProcessMouseInput(MouseEventData data)
    {
        var snapInfo = _SnapHandler.Snap(data);
        if (snapInfo.Mode != SnapModes.None)
        {
            // Point is snapped
            Pnt2d point2D = ProjLib.Project(WorkspaceController.Workspace.WorkingPlane, snapInfo.Point);
            _CurrentPoint = ElSLib.Value(point2D.X, point2D.Y, WorkspaceController.Workspace.WorkingPlane);
            if (snapInfo.Mode != SnapModes.Grid)
            {
                if (_HintLine == null)
                {
                    _HintLine = new HintLine(WorkspaceController, HintStyle.ThinDashed);
                    Add(_HintLine);
                }

                _HintLine.Set(snapInfo.Point, _CurrentPoint);
            }
            else
            {
                Remove(_HintLine);
            }
        }
        else
        {
            _CurrentPoint = data.PointOnPlane;
            Remove(_HintLine);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseMove(MouseEventData data)
    {
        if (!IsFinished)
        {
            _EnsureMarker();

            ProcessMouseInput(data);

            EventArgs args = new()
            {
                Point = _CurrentPoint,
                PointOnPlane = ProjLib.Project(WorkspaceController.Workspace.WorkingPlane, _CurrentPoint),
                MarkerPosition = _CurrentPoint,
                MouseEventData = data
            };
            Preview?.Invoke(this, args);

            _Marker.Set(args.MarkerPosition);
            WorkspaceController.Invalidate();

            return base.OnMouseMove(data);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (!IsFinished)
        {
            ProcessMouseInput(data);
            WorkspaceController.Invalidate();
            IsFinished = true;

            EventArgs args = new()
            {
                Point = _CurrentPoint,
                PointOnPlane = ProjLib.Project(WorkspaceController.Workspace.WorkingPlane, _CurrentPoint),
                MarkerPosition = _CurrentPoint,
                MouseEventData = data
            };
            Finished?.Invoke(this, args);
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseDown(MouseEventData data)
    {
        return true; // Supress Rubberband Selection
    }

    //--------------------------------------------------------------------------------------------------

}