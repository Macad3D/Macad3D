using System.Diagnostics;
using System.Linq;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction;

public class SplitSketchElementAction : ToolAction
{
    #region Events

    public class EventArgs
    {
        public Sketch.ElementType SelectedElementType { get; init; }
        public SketchSegment SelectedSegment { get; init; }
        public double SelectedParameter { get; init; }
        public int SelectedPointIndex { get; init; }
        public MouseEventData MouseEventData { get; init; }
    }

    public delegate void EventHandler(SplitSketchElementAction sender, EventArgs args);
    public event EventHandler Preview;
    public event EventHandler Finished;
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    Sketch.ElementType _SelectedElementType;
    SketchSegment _SelectedSegment;
    double _SelectedParameter;
    int _SelectedPointIndex;
    readonly SketchEditorTool _SketchEditorTool;
    Marker _Marker;
    Sketch.ElementType _MarkerType;
    Pnt _SelectedPoint;

    //--------------------------------------------------------------------------------------------------

    public SplitSketchElementAction(SketchEditorTool sketchEditorTool)
        : base()
    {
        _SketchEditorTool = sketchEditorTool;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        Debug.Assert(_SketchEditorTool != null);

        OpenSelectionContext();
        _SketchEditorTool.Elements.Activate(true, true, false);

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

    void ProcessMouseInput(MouseEventData data)
    {
        _SelectedSegment = null;
        _SelectedPointIndex = -1;
        _SelectedElementType = Sketch.ElementType.None;

        var element = _SketchEditorTool.Elements.FindOwner(data.DetectedAisInteractives.FirstOrDefault());
        if(element == null)
            return;

        if (element is SketchEditorSegmentElement segmentElement)
        {
            //
            // Segment
            //
            var segment = segmentElement.Segment;
            if (!SketchUtils.CanSplitSegment(_SketchEditorTool.Sketch, segment))
                return;

            var curve = segment.CachedCurve ?? segment.MakeCurve(_SketchEditorTool.Sketch.Points);
            if (curve == null)
                return;

            // Get new point from parameters
            double u = 0, v = 0;
            ElSLib.Parameters(_SketchEditorTool.Sketch.Plane, data.PointOnPlane, ref u, ref v);
            var sketchPoint = new Pnt2d(u, v);
            var pointOnCurve = new Geom2dAPI_ProjectPointOnCurve(sketchPoint, curve);

            if (pointOnCurve.NbPoints() < 1)
                return;

            _SelectedParameter = pointOnCurve.LowerDistanceParameter();
            _SelectedSegment = segment;
            _SelectedPoint = _SketchEditorTool.Sketch.Plane.Value(curve.Value(_SelectedParameter));
            _SelectedElementType = Sketch.ElementType.Segment;
        }
        else if (element is SketchEditorPointElement pointElement)
        {
            //
            // Point
            //
            var pointIndex = pointElement.PointIndex;
            if (!SketchUtils.CanSplitPoint(_SketchEditorTool.Sketch, pointIndex))
                return;

            _SelectedPointIndex = pointIndex;
            _SelectedPoint = _SketchEditorTool.Sketch.Plane.Value(_SketchEditorTool.Sketch.Points[pointIndex]);
            _SelectedElementType = Sketch.ElementType.Point;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseMove(MouseEventData data)
    {
        if (!IsFinished)
        {
            ProcessMouseInput(data);

            if (_MarkerType != _SelectedElementType)
            {
                Remove(_Marker);
                _Marker = null;
                _MarkerType = Sketch.ElementType.None;
            }

            if (_SelectedElementType != Sketch.ElementType.None)
            {
                if (_Marker == null )
                {
                    _Marker = new Marker(WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, 
                                         _SelectedElementType == Sketch.ElementType.Segment ? Marker.XImage : Marker.RingImage)
                    {
                        Color = Colors.BallMarker
                    };
                    Add(_Marker);
                    _MarkerType = _SelectedElementType;
                }
                _Marker.Set(_SelectedPoint);
            }

            WorkspaceController.Invalidate();

            EventArgs args = new()
            {
                SelectedElementType = _SelectedElementType,
                SelectedSegment = _SelectedSegment,
                SelectedParameter = _SelectedParameter,
                SelectedPointIndex = _SelectedPointIndex,
                MouseEventData = data
            };
            Preview?.Invoke(this, args);
        }
        return base.OnMouseMove(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (!IsFinished)
        {
            ProcessMouseInput(data);
            IsFinished = true;
            EventArgs args = new()
            {
                SelectedElementType = _SelectedElementType,
                SelectedSegment = _SelectedSegment,
                SelectedParameter = _SelectedParameter,
                SelectedPointIndex = _SelectedPointIndex,
                MouseEventData = data
            };
            Finished?.Invoke(this, args);
            data.ForceReDetection = true;
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override void Reset()
    {
        base.Reset();
        _SelectedElementType = Sketch.ElementType.None;
        Remove(_Marker);
        _Marker = null;
        _MarkerType = Sketch.ElementType.None;
    }

    //--------------------------------------------------------------------------------------------------

}