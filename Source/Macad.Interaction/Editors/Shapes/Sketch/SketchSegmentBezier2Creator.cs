using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SketchSegmentBezier2Creator : ISketchSegmentCreator
    {
        SketchEditorTool _SketchEditorTool;
        SketchPointAction _PointAction;
        SketchSegmentBezier _Segment;
        SketchEditorSegmentElement _Element;
        Coord2DHudElement _Coord2DHudElement;
        ValueHudElement _ValueHudElement;
        readonly Dictionary<int, Pnt2d> _Points = new Dictionary<int, Pnt2d>(3);
        readonly int[] _MergePointIndices = new int[3];
        HintLine _HintLine;
        int pointsFinished = 0;

        //--------------------------------------------------------------------------------------------------

        public bool Start(SketchEditorTool sketchEditorTool)
        {
            _SketchEditorTool = sketchEditorTool;

            _PointAction = new SketchPointAction(sketchEditorTool);
            if (!_SketchEditorTool.WorkspaceController.StartToolAction(_PointAction, false))
                return false;
            _PointAction.Previewed += _OnActionPreview;
            _PointAction.Finished += _OnActionFinished;

            _Coord2DHudElement = _SketchEditorTool.WorkspaceController.HudManager?.CreateElement<Coord2DHudElement>(this);

            _SketchEditorTool.StatusText = "Select start point for line.";

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public void Stop()
        {
            _Element?.Remove();
            _PointAction.Stop();
            _SketchEditorTool.WorkspaceController.HudManager?.RemoveElement(_Coord2DHudElement);
            _Coord2DHudElement = null;
            _SketchEditorTool.WorkspaceController.HudManager?.RemoveElement(_ValueHudElement);
            _ValueHudElement = null;
        }

        //--------------------------------------------------------------------------------------------------

        public bool Continue(int continueWithPoint)
        {
            // Start the next line with the first point already catched
            _Points[0] = _SketchEditorTool.Sketch.Points[continueWithPoint];
            _MergePointIndices[0] = continueWithPoint;
            _Element?.Remove();

            _Segment = null;
            _HintLine = new HintLine(_SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
            _HintLine.Set(_Points[0], _Points[0], _SketchEditorTool.Sketch.Plane);

            _PointAction = new SketchPointAction(_SketchEditorTool);
            if (!_SketchEditorTool.WorkspaceController.StartToolAction(_PointAction, false))
                return false;

            pointsFinished = 1;
            _SketchEditorTool.StatusText = "Select end point for line.";
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionPreview(ToolAction toolAction)
        {
            if (toolAction == _PointAction)
            {
                switch (pointsFinished)
                {
                    case 1:
                        _Points[2] = _PointAction.Point;
                        _HintLine?.Set(_Points[0], _PointAction.Point, _SketchEditorTool.Sketch.Plane);
                        _ValueHudElement?.SetValue(_Points[0].Distance(_Points[2]));
                        break;

                    case 2:
                        _Points[1] = _PointAction.Point;
                        _Element?.OnPointsChanged(_Points, null);
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
                switch (pointsFinished)
                {
                    case 0:
                        // Start point
                        _Points[0] = _PointAction.Point;
                        _MergePointIndices[0] = _PointAction.MergeCandidateIndex;

                        _HintLine = new HintLine(_SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                        _HintLine.Set(_PointAction.Point, _PointAction.Point, _SketchEditorTool.Sketch.Plane);

                        _SketchEditorTool.StatusText = "Select end point for line.";

                        if (_ValueHudElement == null && _SketchEditorTool.WorkspaceController.HudManager != null)
                        {
                            _ValueHudElement = _SketchEditorTool.WorkspaceController.HudManager?.CreateElement<ValueHudElement>(this);
                            _ValueHudElement.Label = "Distance:";
                            _ValueHudElement.Units = ValueUnits.Length;
                            _ValueHudElement.ValueEntered += _ValueHudElement_ValueEntered;
                        }

                        _PointAction.Reset();
                        pointsFinished++;
                        break;

                    case 1:
                        _SetEndPoint(_PointAction.Point, _PointAction.MergeCandidateIndex);
                        break;

                    case 2:
                        // Control point, finished
                        _PointAction.Stop();

                        _Points[1] = _PointAction.Point;
                        _MergePointIndices[1] = _PointAction.MergeCandidateIndex;

                        _SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] {_Segment}, null, _MergePointIndices[1] >= 0 ? -1 : 2);
                        pointsFinished++;
                        break;
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _SetEndPoint(Pnt2d point, int mergeCandidateIndex)
        {
            // End point
            if (_Points[0].Distance(point) < 0.001)
            {
                // Minimum length not met
                _PointAction.Reset();
                return;
            }

            _Points[1] = point;
            _Points[2] = point;
            _MergePointIndices[2] = mergeCandidateIndex;

            _Segment = new SketchSegmentBezier(0, 1, 2);

            _Element = new SketchEditorSegmentElement(_SketchEditorTool, -1, _Segment, _SketchEditorTool.Transform, _SketchEditorTool.Sketch.Plane);
            _Element.IsCreating = true;
            _Element.OnPointsChanged(_Points, null);

            _HintLine.Remove();
            _HintLine = null;

            _SketchEditorTool.WorkspaceController.HudManager?.RemoveElement(_ValueHudElement);
            _ValueHudElement = null;

            _SketchEditorTool.StatusText = "Select control point for line.";

            _PointAction.Reset();
            pointsFinished++;

            _SketchEditorTool.WorkspaceController.Invalidate();
            _SketchEditorTool.WorkspaceController.UpdateSelection();
        }

        //--------------------------------------------------------------------------------------------------

        void _ValueHudElement_ValueEntered(ValueHudElement hudElement, double newValue)
        {
            if (newValue <= 0)
                return;

            Vec2d vec = new(_Points[0], _Points[2]);
            if (vec.Magnitude() == 0)
                return;

            _SetEndPoint(_Points[0].Translated(vec.Normalized().Scaled(newValue)), -1);
        }

        //--------------------------------------------------------------------------------------------------

    }
}