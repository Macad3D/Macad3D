using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SketchSegmentEllipseCenterCreator : ISketchSegmentCreator
    {
        SketchEditorTool _SketchEditorTool;
        SketchPointAction _PointAction;
        SketchSegmentEllipse _Segment;
        SketchEditorSegmentElement _Element;
        Coord2DHudElement _Coord2DHudElement;
        LabelHudElement _LabelHudElement;
        HintCircle _HintCircle;
        HintLine _HintLine;
        readonly Marker[] _Marker = new Marker[2];
        readonly Dictionary<int, Pnt2d> _Points = new Dictionary<int, Pnt2d>(3);
        readonly int[] _MergePointIndices = new int[3];
        int _PointsCompleted = 0;

        //--------------------------------------------------------------------------------------------------

        public bool Start(SketchEditorTool sketchEditorTool)
        {
            _SketchEditorTool = sketchEditorTool;

            _PointAction = new SketchPointAction(_SketchEditorTool);
            if (!_SketchEditorTool.WorkspaceController.StartToolAction(_PointAction, false))
                return false;
            _PointAction.Previewed += _OnActionPreview;
            _PointAction.Finished += _OnActionFinished;

            _Coord2DHudElement = _SketchEditorTool.WorkspaceController.HudManager?.CreateElement<Coord2DHudElement>(this);

            _SketchEditorTool.StatusText = "Select center point of the ellipse.";

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public void Stop()
        {
            if (_HintCircle != null)
            {
                _HintCircle.Remove();
                _HintCircle = null;
            }
            if (_HintLine != null)
            {
                _HintLine.Remove();
                _HintLine = null;
            }
            for (int i = 0; i < _Marker.Length; i++)
            {
                if (_Marker[i] != null)
                    _Marker[i].Remove();
                _Marker[i] = null;
            }

            _Element?.Remove();
            _PointAction?.Stop();

            _SketchEditorTool.WorkspaceController.HudManager?.RemoveElement(_Coord2DHudElement);
            _Coord2DHudElement = null;
            _SketchEditorTool.WorkspaceController.HudManager?.RemoveElement(_LabelHudElement);
            _LabelHudElement = null;
        }

        //--------------------------------------------------------------------------------------------------

        public bool Continue(int continueWithPoint)
        {
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionPreview(ToolAction toolAction)
        {
            if (toolAction == _PointAction)
            {
                switch (_PointsCompleted)
                {
                    case 1:
                        _HintCircle ??= new HintCircle(_SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                        _HintLine ??= new HintLine(_SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                        var p1 = _Points[0];
                        var p2 = _PointAction.Point;
                        var circ = new gce_MakeCirc2d(p1, p2).Value();
                        _HintCircle.Set(circ, _SketchEditorTool.Sketch.Plane);
                        _HintLine.Set(p1, p2, _SketchEditorTool.Sketch.Plane);
                        
                        _LabelHudElement ??= _SketchEditorTool.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
                        _LabelHudElement?.SetValue("Distance: " + _Points[0].Distance(_PointAction.Point).ToRoundedString());
                        break;

                    case 2:
                        if (_Segment != null)
                        {
                            _Points[2] = _PointAction.Point;
                            _Element.OnPointsChanged(_Points, null);
                        }
                        _LabelHudElement?.SetValue("Distance: " + _Points[0].Distance(_PointAction.Point).ToRoundedString());
                        break;
                }
                
                _Coord2DHudElement?.SetValues(_PointAction.PointOnWorkingPlane.X, _PointAction.PointOnWorkingPlane.Y);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            if (toolAction == _PointAction)
            {
                switch (_PointsCompleted)
                {
                    case 0:
                        _Points.Add(0, _PointAction.Point);
                        _MergePointIndices[0] = _PointAction.MergeCandidateIndex;
                        _PointsCompleted++;

                        _Marker[0] = new Marker(_SketchEditorTool.WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, Marker.BallImage);
                        _Marker[0].Set(_PointAction.Point, _SketchEditorTool.Sketch.Plane);

                        _SketchEditorTool.StatusText = "Select first rim point of the ellipse.";

                        _PointAction.Reset();
                        break;

                    case 1:
                        if (_Points[0].Distance(_PointAction.Point) < 0.001)
                        {
                            // Min distance not met
                            _PointAction.Reset();
                            return;
                        }

                        if (_HintCircle != null)
                        {
                            _HintCircle.Remove();
                            _HintCircle = null;
                        }
                        if (_HintLine != null)
                        {
                            _HintLine.Remove();
                            _HintLine = null;
                        }

                        _Points.Add(1, _PointAction.Point);
                        _MergePointIndices[1] = _PointAction.MergeCandidateIndex;
                        _PointsCompleted++;

                        _Marker[1] = new Marker(_SketchEditorTool.WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, Marker.BallImage);
                        _Marker[1].Set(_PointAction.Point, _SketchEditorTool.Sketch.Plane);

                        _Points.Add(2, _PointAction.Point);
                        _Segment = new SketchSegmentEllipse(0, 1, 2);

                        _Element = new SketchEditorSegmentElement(_SketchEditorTool, -1, _Segment, _SketchEditorTool.Transform, _SketchEditorTool.Sketch.Plane);
                        _Element.IsCreating = true;
                        _Element.OnPointsChanged(_Points, null);

                        _SketchEditorTool.StatusText = "Select second rim point of the ellipse.";

                        _PointAction.Reset();
                        break;

                    case 2:
                        if (_Points[0].Distance(_PointAction.Point) < 0.001
                            || _Points[1].Distance(_PointAction.Point) < 0.001)
                        {
                            // Min distance not met
                            _PointAction.Reset();
                            return;
                        }

                        _Points[2] = _PointAction.Point;
                        _MergePointIndices[2] = _PointAction.MergeCandidateIndex;

                        _PointAction.Stop();

                        _SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] { _Segment }, null);
                        break;
                }
            }
        }
    }
}