using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SketchSegmentCircleCreator : SketchSegmentCreator
    {
        SketchPointAction _PointAction;
        SketchSegmentCircle _Segment;
        SketchEditorSegmentElement _Element;
        Coord2DHudElement _Coord2DHudElement;
        ValueHudElement _ValueHudElement;
        readonly Dictionary<int, Pnt2d> _Points = new(2);
        readonly int[] _MergePointIndices = new int[2];
        Marker _Marker;

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

            SetHintMessage("Select center point of the circle.");

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        protected override void Cleanup()
        {
            _Element?.Remove();
            base.Cleanup();
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionPreview(ToolAction toolAction)
        {
            if (toolAction == _PointAction)
            {
                if (_Segment != null)
                {
                    _Points[1] = _PointAction.Point;
                    _Element.OnPointsChanged(_Points, null);
                    SketchEditorTool.WorkspaceController.Invalidate();

                    if (_ValueHudElement == null)
                    {
                        _ValueHudElement = new ValueHudElement
                        {
                            Label = "Radius:",
                            Units = ValueUnits.Length
                        };
                        _ValueHudElement.ValueEntered += _ValueHudElement_ValueEntered;
                        Add(_ValueHudElement);
                    }
                    _ValueHudElement.SetValue(_Segment.Radius(_Points));
                }

                _Coord2DHudElement.SetValues(_PointAction.PointOnWorkingPlane.X, _PointAction.PointOnWorkingPlane.Y);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            if (toolAction == _PointAction)
            {
                if (_Segment == null)
                {
                    _Points.Add(0, _PointAction.Point);
                    _MergePointIndices[0] = _PointAction.MergeCandidateIndex;
                    _Points.Add(1, _PointAction.Point);
                    _Segment = new SketchSegmentCircle(0, 1);

                    _Marker = new Marker(SketchEditorTool.WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, Marker.BallImage);
                    _Marker.Set(_PointAction.Point, SketchEditorTool.Sketch.Plane);
                    Add(_Marker);

                    _Element = new SketchEditorSegmentElement(SketchEditorTool, -1, _Segment, SketchEditorTool.Transform, SketchEditorTool.Sketch.Plane)
                    {
                        IsCreating = true
                    };
                    _Element.OnPointsChanged(_Points, null);

                    SketchEditorTool.WorkspaceController.Invalidate();
                    
                    SetHintMessage("Select any rim point of the circle.");
                    _PointAction.Reset();
                } 
                else
                {
                    if (_Points[0].Distance(_PointAction.Point) < 0.001)
                    {
                        // Minimum length not met
                        _PointAction.Reset();
                        return;
                    }

                    _Points[1] = _PointAction.Point;
                    _MergePointIndices[1] = _PointAction.MergeCandidateIndex;

                    StopAction(_PointAction);

                    SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] { _Segment }, null);
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _ValueHudElement_ValueEntered(ValueHudElement hudElement, double newValue)
        {
            if (newValue <= 0)
                return;

            Vec2d vec = new(_Points[0], _Points[1]);
            if (vec.Magnitude() == 0)
                return;

            _Points[1] = _Points[0].Translated(vec.Normalized().Scaled(newValue));
            _MergePointIndices[1] = -1;
            StopAction(_PointAction);
            SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] { _Segment }, null);
        }

        //--------------------------------------------------------------------------------------------------

    }
}