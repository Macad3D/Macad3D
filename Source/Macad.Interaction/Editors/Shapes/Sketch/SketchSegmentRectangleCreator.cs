using System;
using System.Collections.Generic;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SketchSegmentRectangleCreator : ISketchSegmentCreator
    {
        SketchEditorTool _SketchEditorTool;
        SketchPointAction _PointAction;
        SketchSegmentLine[] _Segments;
        SketchEditorSegmentElement[] _Elements;
        Coord2DHudElement _Coord2DHudElement;
        LabelHudElement _LabelHudElement;
        readonly Dictionary<int, Pnt2d> _Points = new Dictionary<int, Pnt2d>(4);
        readonly int[] _MergePointIndices = new int[4];

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

            _SketchEditorTool.StatusText = "Select first corner of the rectangle.";

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public void Stop()
        {
            _PointAction.Stop();
            if (_Elements != null)
            {
                foreach (var element in _Elements)
                    element.Remove();
            }

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
                if (_Segments != null)
                {
                    _SetSecondPoint(_PointAction.Point);
                    foreach (var component in _Elements)
                    {
                        component.OnPointsChanged(_Points, null);
                    }

                    if (_LabelHudElement == null)
                        _LabelHudElement = _SketchEditorTool.WorkspaceController.HudManager?.CreateElement<LabelHudElement>(this);
                    if (_LabelHudElement != null)
                    {
                        _LabelHudElement.Text = "Size: " + (_Points[0].X - _Points[2].X).Abs().ToRoundedString()
                                                + " x " + (_Points[0].Y - _Points[2].Y).Abs().ToRoundedString();
                    }
                }

                if (_Coord2DHudElement != null)
                {
                    _Coord2DHudElement.CoordinateX = _PointAction.Point.X;
                    _Coord2DHudElement.CoordinateY = _PointAction.Point.Y;
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            if (toolAction == _PointAction)
            {
                if (_Segments == null)
                {
                    _Points.Add(0, _PointAction.Point);
                    _MergePointIndices[0] = _PointAction.MergeCandidateIndex;
                    _SetSecondPoint(_PointAction.Point);

                    _Segments = new SketchSegmentLine[4];
                    _Segments[0] = new SketchSegmentLine(0, 1);
                    _Segments[1] = new SketchSegmentLine(1, 2);
                    _Segments[2] = new SketchSegmentLine(2, 3);
                    _Segments[3] = new SketchSegmentLine(3, 0);

                    _Elements = new SketchEditorSegmentElement[4];
                    for (int i = 0; i < _Elements.Length; i++)
                    {
                        _Elements[i] = new SketchEditorSegmentElement(_SketchEditorTool, -1, _Segments[i], _SketchEditorTool.Transform, _SketchEditorTool.Sketch.Plane);
                        _Elements[i].IsCreating = true;
                        _Elements[i].OnPointsChanged(_Points, null);
                    }

                    _SketchEditorTool.StatusText = "Select second corner or the rectangle.";

                    _PointAction.Reset();
                } 
                else
                {
                    if (Math.Abs(_Points[0].X - _PointAction.Point.X) < 0.001
                        || Math.Abs(_Points[0].Y - _PointAction.Point.Y) < 0.001)
                    {
                        // Minimum length not met
                        _PointAction.Reset();
                        return;
                    }

                    _PointAction.Stop();

                    _SetSecondPoint(_PointAction.Point);
                    _MergePointIndices[1] = -1;
                    _MergePointIndices[2] = _PointAction.MergeCandidateIndex;
                    _MergePointIndices[3] = -1;

                    var constraints = new SketchConstraintPerpendicular[4];
                    constraints[0] = new SketchConstraintPerpendicular(0, 1);
                    constraints[1] = new SketchConstraintPerpendicular(1, 2);
                    constraints[2] = new SketchConstraintPerpendicular(2, 3);
                    constraints[3] = new SketchConstraintPerpendicular(3, 0);

                    _SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, _Segments, constraints);
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _SetSecondPoint(Pnt2d second)
        {
            var first = _Points[0];
            _Points[1] = new Pnt2d(first.X, second.Y);
            _Points[2] = new Pnt2d(second.X, second.Y);
            _Points[3] = new Pnt2d(second.X, first.Y);
        }
    }
}