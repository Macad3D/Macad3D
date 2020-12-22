using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SketchSegmentBezier3Creator : ISketchSegmentCreator
    {
        SketchEditorTool _SketchEditorTool;
        SketchPointAction _PointAction;
        SketchSegmentBezier _Segment;
        SketchEditorSegmentElement _Element;
        Coord2DHudElement _Coord2DHudElement;
        readonly Dictionary<int, Pnt2d> _Points = new Dictionary<int, Pnt2d>(4);
        readonly int[] _MergePointIndices = new int[4];
        HintLine _HintLine;
        int _PointsFinished = 0;

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

            sketchEditorTool.StatusText = "Select start point for line.";

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public void Stop()
        {
            _Element?.Remove();
            _PointAction.Stop();
            _SketchEditorTool.WorkspaceController.HudManager?.RemoveElement(_Coord2DHudElement);
            _Coord2DHudElement = null;
        }

        //--------------------------------------------------------------------------------------------------

        public bool Continue(int continueWithPoint)
        {
            // Start the next line with the first point already catched
            _Points[0] = _SketchEditorTool.Sketch.Points[continueWithPoint];
            _MergePointIndices[0] = continueWithPoint;

            _Segment = null;
            _Element?.Remove();
            _Element = null;
            _HintLine = new HintLine(_SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
            _HintLine.Set(_Points[0], _Points[0], _SketchEditorTool.Sketch.Plane);

            _PointAction = new SketchPointAction(_SketchEditorTool);
            if (!_SketchEditorTool.WorkspaceController.StartToolAction(_PointAction, false))
                return false;

            _PointsFinished = 1;
            _SketchEditorTool.StatusText = "Select end point for line.";
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionPreview(ToolAction toolAction)
        {
            if (toolAction == _PointAction)
            {
                switch (_PointsFinished)
                {
                    case 1:
                        _HintLine.Set(_Points[0], _PointAction.Point, _SketchEditorTool.Sketch.Plane);
                        break;

                    case 2:
                        _Points[1] = _PointAction.Point;
                        _Points[2] = _PointAction.Point;
                        _Element.OnPointsChanged(_Points, null);
                        break;

                    case 3:
                        _Points[2] = _PointAction.Point;
                        _Element.OnPointsChanged(_Points, null);
                        break;
                }

                _Coord2DHudElement?.SetValues(_PointAction.Point.X, _PointAction.Point.Y);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            if (toolAction == _PointAction)
            {
                switch (_PointsFinished)
                {
                    case 0:
                        // Start point
                        _Points.Add(0, _PointAction.Point);
                        _MergePointIndices[0] = _PointAction.MergeCandidateIndex;

                        _HintLine = new HintLine(_SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                        _HintLine.Set(_PointAction.Point, _PointAction.Point, _SketchEditorTool.Sketch.Plane);

                        _SketchEditorTool.StatusText = "Select end point for line.";

                        _PointAction.Reset();
                        _PointsFinished++;
                        break;

                    case 1:
                        // End point
                        if (_Points[0].Distance(_PointAction.Point) < 0.001)
                        {
                            // Minimum length not met
                            _PointAction.Reset();
                            return;
                        }

                        _Points.Add(1, _PointAction.Point);
                        _Points.Add(2, _PointAction.Point);
                        _Points.Add(3, _PointAction.Point);
                        _MergePointIndices[3] = _PointAction.MergeCandidateIndex;

                        _Segment = new SketchSegmentBezier(0, 1, 2, 3);

                        _Element = new SketchEditorSegmentElement(_SketchEditorTool, -1, _Segment, _SketchEditorTool.Transform, _SketchEditorTool.Sketch.Plane);
                        _Element.IsCreating = true;
                        _Element.OnPointsChanged(_Points, null);

                        _HintLine.Remove();
                        _HintLine = null;

                        _SketchEditorTool.StatusText = "Select first control point for line.";

                        _PointAction.Reset();
                        _PointsFinished++;
                        break;

                    case 2:
                        // First control point, finished
                        _Points[1] = _PointAction.Point;
                        _MergePointIndices[1] = _PointAction.MergeCandidateIndex;

                        _Element.OnPointsChanged(_Points, null);

                        _SketchEditorTool.StatusText = "Select second control point for line.";

                        _PointAction.Reset();
                        _PointsFinished++;
                        break;

                    case 3:
                        // Second control point, finished
                        _PointAction.Stop();

                        _Points[2] = _PointAction.Point;
                        _MergePointIndices[2] = _PointAction.MergeCandidateIndex;

                        _SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] { _Segment }, null, _MergePointIndices[1] >= 0 ? -1 : 3);
                        _PointsFinished++;
                        break;
                }
            }
        }
    }
}