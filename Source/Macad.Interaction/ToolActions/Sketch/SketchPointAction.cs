using System.Collections.Generic;
using System.Diagnostics;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Occt;


namespace Macad.Interaction;

public class SketchPointAction : ToolAction
{
    #region Events

    public class EventArgs
    {
        public Pnt2d Point { get; init; }
        public Pnt2d PointOnWorkingPlane { get; init; }
        public int MergeCandidateIndex { get; init; }
        public MouseEventData MouseEventData { get; init; }
    }

    public delegate void EventHandler(SketchPointAction sender, EventArgs args);
    public event EventHandler Preview;
    public event EventHandler Finished;
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    Pnt2d _Point;
    Pnt2d _PointOnWorkingPlane;
    int _MergeCandidateIndex;
    public bool EnablePointMerge { get; set; }
    public IEnumerable<Pnt2d> AdditionalSnapPoints { get; set; }

    //--------------------------------------------------------------------------------------------------

    readonly SketchEditorTool _SketchEditorTool;
    Marker _Marker;
    Marker _MergePreviewMarker;
    Pnt2d _MergeCandidatePoint;
    Snap2D _SnapHandler;

    //--------------------------------------------------------------------------------------------------

    #region Constraint Point Callback

    public delegate void ConstraintPointCallback(SketchPointAction sender, ref Pnt2d point);

    public event ConstraintPointCallback ConstraintPoint;

    public void OnConstraintPoint(ref Pnt2d point)
    {
        ConstraintPoint?.Invoke(this, ref point);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    public SketchPointAction(SketchEditorTool sketchEditorTool)
        : base()
    {
        _SketchEditorTool = sketchEditorTool;
        EnablePointMerge = true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        Debug.Assert(_SketchEditorTool != null);

        _SnapHandler = SetSnapHandler(new Snap2D());
        _SnapHandler.Plane = _SketchEditorTool.Sketch.Plane;

        OpenSelectionContext();
        _SketchEditorTool.Elements.Activate(true, true, false);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void EnsureMarker()
    {
        if (_Marker == null)
        {
            _Marker = new Marker(WorkspaceController, 
                                 Marker.Styles.Bitmap | Marker.Styles.Topmost | Marker.Styles.NoClipPlane, 
                                 Marker.PlusImage);
            Add(_Marker);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void ProcessMouseInput(MouseEventData data)
    {
        // Get new point from parameters
        double u = 0, v = 0;
        ElSLib.Parameters(_SketchEditorTool.Sketch.Plane, data.PointOnPlane, ref u, ref v);
        var sketchPoint = new Pnt2d(u, v);

        _Point = _Snap(sketchPoint, data);

        // Recalculate point on working plane
        if (_SketchEditorTool.Sketch.Plane.Location.IsEqual(WorkspaceController.Workspace.WorkingPlane.Location, 0.00001))
        {
            _PointOnWorkingPlane = _Point;
        }
        else
        {
            ElSLib.Parameters(WorkspaceController.Workspace.WorkingPlane, _SketchEditorTool.Sketch.Plane.Location, ref u, ref v);
            _PointOnWorkingPlane = _Point.Translated(new Vec2d(u, v));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseMove(MouseEventData data)
    {
        if (!IsFinished)
        {
            EnsureMarker();

            ProcessMouseInput(data);

            _Marker.Set(ElSLib.Value(_Point.X, _Point.Y, _SketchEditorTool.Sketch.Plane));
            WorkspaceController.Invalidate();

            _UpdateMergeMarker();

            EventArgs args = new()
            {
                Point = _Point,
                PointOnWorkingPlane = _PointOnWorkingPlane,
                MergeCandidateIndex = _MergeCandidateIndex,
                MouseEventData = data
            };
            Preview?.Invoke(this, args);

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

            if (_MergeCandidateIndex >= 0)
            {
                _Point = _SketchEditorTool.Sketch.Points[_MergeCandidateIndex];
            }
            IsFinished = true;
                
            EventArgs args = new()
            {
                Point = _Point,
                PointOnWorkingPlane = _PointOnWorkingPlane,
                MergeCandidateIndex = _MergeCandidateIndex,
                MouseEventData = data
            };
            Finished?.Invoke(this, args);

            data.Return.ForceReDetection = true;
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        ConstraintPoint = null;
        Preview = null;
        Finished = null;
        _Marker = null;
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    Pnt2d _Snap(Pnt2d point, MouseEventData data)
    {
        double mergeDistance = _SnapHandler.GetSnapOnPlaneDistanceThreshold();

        // Snap
        var snapInfo = _SnapHandler.Snap(data, AdditionalSnapPoints);
        if (snapInfo.Mode != SnapModes.None)
        {
            point = snapInfo.Point;
            mergeDistance = snapInfo.Distance;
        }

        // Constraint point
        OnConstraintPoint(ref point);

        // Find merge candidate
        _MergeCandidatePoint = point;
        _MergeCandidateIndex = -1;

        if (EnablePointMerge)
        {
            foreach (var pointKvp in _SketchEditorTool.Sketch.Points)
            {
                var distance = pointKvp.Value.Distance(point);
                if (distance <= mergeDistance)
                {
                    _MergeCandidatePoint = pointKvp.Value;
                    _MergeCandidateIndex = pointKvp.Key;
                    mergeDistance = distance;
                }
            }

            point = _MergeCandidatePoint;
        }

        return point;
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateMergeMarker()
    {
        if (_MergeCandidateIndex >= 0)
        {
            var geomPoint = new Geom_CartesianPoint(_MergeCandidatePoint.X, _MergeCandidatePoint.Y, 0);
            geomPoint.Transform(_SketchEditorTool.Transform);
            if (_MergePreviewMarker == null)
            {
                _MergePreviewMarker = new Marker(WorkspaceController, 
                                                 Marker.Styles.Bitmap | Marker.Styles.Topmost | Marker.Styles.NoClipPlane, 
                                                 Marker.RingImage)
                {
                    Color = Colors.Highlight
                };
                Add(_MergePreviewMarker);
            }
            _MergePreviewMarker.Set(geomPoint);
        }
        else
        {
            Remove(_MergePreviewMarker);
            _MergePreviewMarker = null;
        }

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

}