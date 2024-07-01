using System.Diagnostics;
using System.Linq;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction;

public class PointOnSketchElementAction : ToolAction
{
    #region Events

    public class EventArgs
    {
        public Sketch.ElementType ElementType { get; init; }
        public SketchSegment Segment { get; init; }
        public double Parameter { get; init; }
        public int PointIndex { get; init; }
        public MouseEventData MouseEventData { get; init; }
    }

    public class PreviewEventArgs : EventArgs
    {
        public bool Cancel { get; set; }
    }

    public delegate void PreviewEventHandler(PointOnSketchElementAction sender, PreviewEventArgs args);
    public event PreviewEventHandler Preview;
    public delegate void EventHandler(PointOnSketchElementAction sender, EventArgs args);
    public event EventHandler Finished;
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Properties

    public bool AllowPoints { get; init; } = true;
    public bool SelectedElementsOnly { get; init; }

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

    public PointOnSketchElementAction(SketchEditorTool sketchEditorTool)
        : base()
    {
        _SketchEditorTool = sketchEditorTool;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        Debug.Assert(_SketchEditorTool != null);

        if (SelectedElementsOnly)
        {
            _SketchEditorTool.Elements.Activate(false, false, false);
            _SketchEditorTool.Elements.SegmentElements.Where(element => element.IsSelected)
                                                      .ForEach(element => element.Activate(true));
            if (AllowPoints)
            {
                _SketchEditorTool.Elements.PointElements.Where(element => element.IsSelected)
                                                        .ForEach(element => element.Activate(true));
            }
        }
        else
        {
            _SketchEditorTool.Elements.Activate(AllowPoints, true, false);
        }

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

    void _ProcessMouseInput(MouseEventData data)
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
            _ProcessMouseInput(data);

            PreviewEventArgs args = new()
            {
                ElementType = _SelectedElementType,
                Segment = _SelectedSegment,
                Parameter = _SelectedParameter,
                PointIndex = _SelectedPointIndex,
                MouseEventData = data,
                Cancel = false,
            };
            Preview?.Invoke(this, args);

            if (args.Cancel)
            {
                _SelectedSegment = null;
                _SelectedPointIndex = -1;
                _SelectedElementType = Sketch.ElementType.None;
            }

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
                        Color = Colors.Marker
                    };
                    Add(_Marker);
                    _MarkerType = _SelectedElementType;
                }
                _Marker.Set(_SelectedPoint);
            }

            WorkspaceController.Invalidate();
        }
        return base.OnMouseMove(data);
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (!IsFinished)
        {
            _ProcessMouseInput(data);
            if (_SelectedElementType != Sketch.ElementType.None)
            {
                IsFinished = true;
                EventArgs args = new()
                {
                    ElementType = _SelectedElementType,
                    Segment = _SelectedSegment,
                    Parameter = _SelectedParameter,
                    PointIndex = _SelectedPointIndex,
                    MouseEventData = data
                };
                Finished?.Invoke(this, args);
                data.ForceReDetection = true;
            }
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