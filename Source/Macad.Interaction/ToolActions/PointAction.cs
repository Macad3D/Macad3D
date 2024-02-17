using Macad.Interaction.Visual;
using Macad.Occt;

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

    //--------------------------------------------------------------------------------------------------

    public override SnapMode SupportedSnapModes => SnapMode.Grid | SnapMode.Vertex | SnapMode.Edge;

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
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
        var snapInfo = WorkspaceController.SnapHandler.Snap(data);
        var snapPoint = WorkspaceController.SnapHandler.SnapOnPlane(snapInfo);
        if (snapPoint != null)
        {
            // Point is snapped
            _CurrentPoint = ElSLib.Value(snapPoint.Value.X, snapPoint.Value.Y, WorkspaceController.Workspace.WorkingPlane);
            if (snapInfo.SnapMode != SnapMode.Grid)
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