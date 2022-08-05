using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SketchSegmentEllipseCenterCreator : ISketchSegmentCreator
    {
        SketchEditorTool _SketchEditorTool;
        SketchPointAction _PointAction;
        SketchSegmentEllipse _Segment;
        SketchEditorSegmentElement _Element;
        Coord2DHudElement _Coord2DHudElement;
        ValueHudElement _ValueHudElement;
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

            _SketchEditorTool.WorkspaceController.HudManager?.SetHintMessage(this, "Select center point of the ellipse.");

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
            _SketchEditorTool.WorkspaceController.HudManager?.RemoveElement(_ValueHudElement);
            _ValueHudElement = null;
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
                        
                        if (_ValueHudElement == null && _SketchEditorTool.WorkspaceController.HudManager != null)
                        {
                            _ValueHudElement = _SketchEditorTool.WorkspaceController.HudManager?.CreateElement<ValueHudElement>(this);
                            _ValueHudElement.Label = "Distance:";
                            _ValueHudElement.Units = ValueUnits.Length;
                            _ValueHudElement.ValueEntered += _ValueHudElement_ValueEntered;
                        }
                        _ValueHudElement?.SetValue(_Points[0].Distance(_PointAction.Point));
                        _Points[1] = p2;
                        break;

                    case 2:
                        if (_Segment != null)
                        {
                            _Points[2] = _PointAction.Point;
                            _Element.OnPointsChanged(_Points, null);
                        }
                        _ValueHudElement?.SetValue(_Points[0].Distance(_PointAction.Point));
                        _Points[2] = _PointAction.Point;
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
                        _SetCenterPoint(_PointAction.Point, _PointAction.MergeCandidateIndex);
                        break;

                    case 1:
                        _SetFirstRimPoint(_PointAction.Point, _PointAction.MergeCandidateIndex);
                        break;

                    case 2:
                        _SetSecondRimPoint(_PointAction.Point, _PointAction.MergeCandidateIndex);
                        break;
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _SetCenterPoint(Pnt2d point, int mergeCandidateIndex)
        {
            _Points[0] = point;
            _MergePointIndices[0] = mergeCandidateIndex;
            _PointsCompleted++;

            _Marker[0] = new Marker(_SketchEditorTool.WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, Marker.BallImage);
            _Marker[0].Set(point, _SketchEditorTool.Sketch.Plane);

            _SketchEditorTool.WorkspaceController.HudManager?.SetHintMessage(this, "Select first rim point of the ellipse.");

            _PointAction.Reset();
        }

        //--------------------------------------------------------------------------------------------------

        void _SetSecondRimPoint(Pnt2d point, int mergeCandidateIndex)
        {
            if (_Points[0].Distance(point) < 0.001
                || _Points[1].Distance(point) < 0.001)
            {
                // Min distance not met
                _PointAction.Reset();
                return;
            }

            _Points[2] = point;
            _MergePointIndices[2] = mergeCandidateIndex;

            _PointAction.Stop();

            _SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] {_Segment}, null);
        }

        //--------------------------------------------------------------------------------------------------

        void _SetFirstRimPoint(Pnt2d point, int mergeCandidateIndex)
        {
            if (_Points[0].Distance(point) < 0.001)
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

            _Points[1] = point;
            _MergePointIndices[1] = mergeCandidateIndex;
            _PointsCompleted++;

            _Marker[1] = new Marker(_SketchEditorTool.WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, Marker.BallImage);
            _Marker[1].Set(point, _SketchEditorTool.Sketch.Plane);

            _Points[2] = point;
            _Segment = new SketchSegmentEllipse(0, 1, 2);

            _Element = new SketchEditorSegmentElement(_SketchEditorTool, -1, _Segment, _SketchEditorTool.Transform, _SketchEditorTool.Sketch.Plane);
            _Element.IsCreating = true;
            _Element.OnPointsChanged(_Points, null);

            _SketchEditorTool.WorkspaceController.HudManager?.SetHintMessage(this, "Select second rim point of the ellipse.");
            _PointAction.Reset();
            _SketchEditorTool.WorkspaceController.Invalidate();
            _SketchEditorTool.WorkspaceController.UpdateSelection();
        }

        //--------------------------------------------------------------------------------------------------

        void _ValueHudElement_ValueEntered(ValueHudElement hudelement, double newValue)
        {
            if (newValue <= 0)
                return;

            switch (_PointsCompleted)
            {
                case 1:
                {
                    Vec2d vec = new(_Points[0], _Points[1]);
                    if (vec.Magnitude() == 0)
                        return;

                    _SetFirstRimPoint(_Points[0].Translated(vec.Normalized().Scaled(newValue)), -1);
                }
                break;

                case 2:
                {
                    Vec2d vec = new(_Points[0], _Points[2]);
                    if (vec.Magnitude() == 0)
                        return;

                    _SetSecondRimPoint(_Points[0].Translated(vec.Normalized().Scaled(newValue)), -1);
                }
                break;
            }
        }

    }
}