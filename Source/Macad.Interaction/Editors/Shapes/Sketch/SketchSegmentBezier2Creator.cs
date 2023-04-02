using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SketchSegmentBezier2Creator : SketchSegmentCreator
    {
        SketchPointAction _PointAction;
        SketchSegmentBezier _Segment;
        SketchEditorSegmentElement _Element;
        Coord2DHudElement _Coord2DHudElement;
        ValueHudElement _ValueHudElement;
        readonly Dictionary<int, Pnt2d> _Points = new(3);
        readonly int[] _MergePointIndices = new int[3];
        HintLine _HintLine;
        int pointsFinished = 0;

        //--------------------------------------------------------------------------------------------------

        protected override bool OnStart()
        {
            _PointAction = new SketchPointAction(SketchEditorTool);
            if (!StartAction(_PointAction))
                return false;
            _PointAction.Previewed += _OnActionPreview;
            _PointAction.Finished += _OnActionFinished;

            _Coord2DHudElement = new Coord2DHudElement();
            Add(_Coord2DHudElement);

            SetHintMessage("Select start point for line.");

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        protected override void Cleanup()
        {
            _Element?.Remove();
            base.Cleanup();
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Continue(int continueWithPoint)
        {
            // Start the next line with the first point already catched
            _Points[0] = SketchEditorTool.Sketch.Points[continueWithPoint];
            _MergePointIndices[0] = continueWithPoint;
            _Element?.Remove();

            _Segment = null;
            _HintLine = new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
            _HintLine.Set(_Points[0], _Points[0], SketchEditorTool.Sketch.Plane);
            Add(_HintLine);

            _PointAction = new SketchPointAction(SketchEditorTool);
            if (!StartAction(_PointAction))
                return false;

            pointsFinished = 1;
            SetHintMessage("Select end point for line.");
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
                        _HintLine?.Set(_Points[0], _PointAction.Point, SketchEditorTool.Sketch.Plane);
                        _ValueHudElement.SetValue(_Points[0].Distance(_Points[2]));
                        break;

                    case 2:
                        _Points[1] = _PointAction.Point;
                        _Element?.OnPointsChanged(_Points, null);
                        break;
                }

                _Coord2DHudElement.SetValues(_PointAction.PointOnWorkingPlane.X, _PointAction.PointOnWorkingPlane.Y);
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

                        _HintLine = new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                        _HintLine.Set(_PointAction.Point, _PointAction.Point, SketchEditorTool.Sketch.Plane);
                        Add(_HintLine);

                        SetHintMessage("Select end point for line.");

                        if (_ValueHudElement == null)
                        {
                            _ValueHudElement = new ValueHudElement
                            {
                                Label = "Distance:",
                                Units = ValueUnits.Length
                            };
                            _ValueHudElement.ValueEntered += _ValueHudElement_ValueEntered;
                            Add(_ValueHudElement);
                        }

                        _PointAction.Reset();
                        pointsFinished++;
                        break;

                    case 1:
                        _SetEndPoint(_PointAction.Point, _PointAction.MergeCandidateIndex);
                        break;

                    case 2:
                        // Control point, finished
                        StopAction(_PointAction);

                        _Points[1] = _PointAction.Point;
                        _MergePointIndices[1] = _PointAction.MergeCandidateIndex;

                        SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] {_Segment}, null, _MergePointIndices[1] >= 0 ? -1 : 2);
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

            _Element = new SketchEditorSegmentElement(SketchEditorTool, -1, _Segment, SketchEditorTool.Transform, SketchEditorTool.Sketch.Plane)
            {
                IsCreating = true
            };
            _Element.OnPointsChanged(_Points, null);

            Remove(_HintLine);
            _HintLine = null;

            Remove(_ValueHudElement);
            _ValueHudElement = null;

            SetHintMessage("Select control point for line.");

            _PointAction.Reset();
            pointsFinished++;

            SketchEditorTool.WorkspaceController.Invalidate();
            SketchEditorTool.WorkspaceController.UpdateSelection();
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