using System;
using System.Diagnostics;
using System.Linq;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction
{
    public class SplitSketchElementAction : ToolAction
    {
        public Sketch.ElementType SelectedElementType { get; private set; }
        public SketchSegment SelectedSegment { get; private set; }
        public double SelectedParameter { get; private set; }
        public int SelectedPointIndex { get; private set; }

        //--------------------------------------------------------------------------------------------------

        readonly SketchEditorTool _SketchEditorTool;
        Marker _Marker;
        Sketch.ElementType _MarkerType;
        SelectionContext _SelectionContext;
        Pnt _SelectedPoint;

        //--------------------------------------------------------------------------------------------------

        public SplitSketchElementAction(SketchEditorTool sketchEditorTool)
            : base(sketchEditorTool)
        {
            _SketchEditorTool = sketchEditorTool;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            Debug.Assert(_SketchEditorTool != null);

            _SelectionContext = WorkspaceController.Selection.OpenContext();
            _SketchEditorTool.Elements.Activate(true, true, false);

            return true;
        }
        
        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            if (_Marker != null)
            {
                _Marker.Remove();
                _Marker = null;
            }

            WorkspaceController.Selection.CloseContext(_SelectionContext);
            _SelectionContext = null;

            WorkspaceController.Invalidate();

            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------
                
        void ProcessMouseInput(MouseEventData data)
        {
            SelectedSegment = null;
            SelectedPointIndex = -1;
            SelectedElementType = Sketch.ElementType.None;

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

                SelectedParameter = pointOnCurve.LowerDistanceParameter();
                SelectedSegment = segment;
                _SelectedPoint = _SketchEditorTool.Sketch.Plane.Value(curve.Value(SelectedParameter));
                SelectedElementType = Sketch.ElementType.Segment;
            }
            else if (element is SketchEditorPointElement pointElement)
            {
                //
                // Point
                //
                var pointIndex = pointElement.PointIndex;
                if (!SketchUtils.CanSplitPoint(_SketchEditorTool.Sketch, pointIndex))
                    return;

                SelectedPointIndex = pointIndex;
                _SelectedPoint = _SketchEditorTool.Sketch.Plane.Value(_SketchEditorTool.Sketch.Points[pointIndex]);
                SelectedElementType = Sketch.ElementType.Point;
            }
        }
        
        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseMove(MouseEventData data)
        {
            if (!IsFinished)
            {
                ProcessMouseInput(data);

                if (_MarkerType != SelectedElementType)
                {
                    _Marker?.Remove();
                    _Marker = null;
                    _MarkerType = Sketch.ElementType.None;
                }

                if (SelectedElementType != Sketch.ElementType.None)
                {
                    if (_Marker == null )
                    {
                        _Marker = new Marker(WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, 
                                             SelectedElementType == Sketch.ElementType.Segment ? Marker.XImage : Marker.RingImage);
                        _Marker.Color = Colors.BallMarker;
                        _MarkerType = SelectedElementType;
                    }
                    _Marker.Set(_SelectedPoint);
                }

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
                IsFinished = true;
                data.ForceReDetection = true;
            }
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public override void Reset()
        {
            base.Reset();
            SelectedElementType = Sketch.ElementType.None;
            _Marker?.Remove();
            _Marker = null;
            _MarkerType = Sketch.ElementType.None;
        }

        //--------------------------------------------------------------------------------------------------

    }
}