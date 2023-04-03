using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SketchSegmentBezier3Creator : SketchSegmentCreator
    {
        SketchPointAction _PointAction;
        SketchSegmentBezier _Segment;
        SketchEditorSegmentElement _Element;
        Coord2DHudElement _Coord2DHudElement;
        ValueHudElement _ValueHudElement;
        readonly Dictionary<int, Pnt2d> _Points = new(4);
        readonly int[] _MergePointIndices = new int[4];
        HintLine _HintLine;
        int _PointsFinished = 0;

        //--------------------------------------------------------------------------------------------------

        protected override bool OnStart()
        {
            _PointAction = new SketchPointAction(SketchEditorTool);
            if (!StartAction(_PointAction))
                return false;
            _PointAction.Preview += _PointAction_Preview;
            _PointAction.Finished += _PointAction_Finished;

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

            _Segment = null;
            _Element?.Remove();
            _Element = null;
            _HintLine = new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
            _HintLine.Set(_Points[0], _Points[0], SketchEditorTool.Sketch.Plane);

            _PointAction = new SketchPointAction(SketchEditorTool);
            if (!StartAction(_PointAction))
                return false;

            _PointsFinished = 1;
            SetHintMessage("Select end point for line.");
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _PointAction_Preview(SketchPointAction sender, SketchPointAction.EventArgs args)
        {
            switch (_PointsFinished)
            {
                case 1:
                    _Points[3] = args.Point;
                    _HintLine?.Set(_Points[0], args.Point, SketchEditorTool.Sketch.Plane);
                    _ValueHudElement?.SetValue(_Points[0].Distance(_Points[3]));
                    break;

                case 2:
                    _Points[1] = args.Point;
                    _Points[2] = args.Point;
                    _Element?.OnPointsChanged(_Points, null);
                    break;

                case 3:
                    _Points[2] = args.Point;
                    _Element?.OnPointsChanged(_Points, null);
                    break;
            }

            _Coord2DHudElement.SetValues(args.PointOnWorkingPlane.X, args.PointOnWorkingPlane.Y);
        }

        //--------------------------------------------------------------------------------------------------

        void _PointAction_Finished(SketchPointAction sender, SketchPointAction.EventArgs args)
        {
            switch (_PointsFinished)
            {
                case 0:
                    // Start point
                    _Points[0] = args.Point;
                    _MergePointIndices[0] = args.MergeCandidateIndex;

                    _HintLine = new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                    _HintLine.Set(args.Point, args.Point, SketchEditorTool.Sketch.Plane);
                    Add(_HintLine);

                    SketchEditorTool.WorkspaceController.HudManager?.SetHintMessage(this, "Select end point for line.");

                    if (_ValueHudElement == null && SketchEditorTool.WorkspaceController.HudManager != null)
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
                    _PointsFinished++;
                    break;

                case 1:
                    _SetEndPoint(args.Point, args.MergeCandidateIndex);
                    break;

                case 2:
                    // First control point, finished
                    _Points[1] = args.Point;
                    _MergePointIndices[1] = args.MergeCandidateIndex;

                    _Element.OnPointsChanged(_Points, null);

                    SetHintMessage("Select second control point for line.");

                    _PointAction.Reset();
                    _PointsFinished++;
                    break;

                case 3:
                    // Second control point, finished
                    StopAction(_PointAction);

                    _Points[2] = args.Point;
                    _MergePointIndices[2] = args.MergeCandidateIndex;

                    SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] { _Segment }, null, _MergePointIndices[1] >= 0 ? -1 : 3);
                    _PointsFinished++;
                    break;
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
            _Points[3] = point;
            _MergePointIndices[3] = mergeCandidateIndex;

            _Segment = new SketchSegmentBezier(0, 1, 2, 3);

            _Element = new SketchEditorSegmentElement(SketchEditorTool, -1, _Segment, SketchEditorTool.Transform, SketchEditorTool.Sketch.Plane)
            {
                IsCreating = true
            };
            _Element.OnPointsChanged(_Points, null);

            Remove(_HintLine);
            _HintLine = null;

            Remove(_ValueHudElement);
            _ValueHudElement = null;
            SetHintMessage("Select first control point for line.");

            _PointAction.Reset();
            _PointsFinished++;

            SketchEditorTool.WorkspaceController.Invalidate();
            SketchEditorTool.WorkspaceController.UpdateSelection();
        }

        //--------------------------------------------------------------------------------------------------

        void _ValueHudElement_ValueEntered(ValueHudElement hudElement, double newValue)
        {
            if (newValue <= 0)
                return;

            Vec2d vec = new(_Points[0], _Points[3]);
            if (vec.Magnitude() == 0)
                return;

            _SetEndPoint(_Points[0].Translated(vec.Normalized().Scaled(newValue)), -1);
        }
    }
}