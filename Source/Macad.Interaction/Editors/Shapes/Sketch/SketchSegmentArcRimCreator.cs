using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SketchSegmentArcRimCreator : ISketchSegmentCreator
    {
        SketchEditorTool _SketchEditorTool;
        SketchPointAction _PointAction;
        SketchSegmentArc _Segment;
        HintLine _PreviewLine;
        Coord2DHudElement _Coord2DHudElement;
        ValueHudElement _ValueHudElement;
        SketchEditorSegmentElement _Element;
        readonly Dictionary<int, Pnt2d> _Points = new Dictionary<int, Pnt2d>(3);
        readonly int[] _MergePointIndices = new int[3];
        int _PointsCompleted = 0;

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

            _SketchEditorTool.StatusText = "Select start point for circular arc.";

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public void Stop()
        {
            _PreviewLine?.Remove();
            _PreviewLine = null;

            _PointAction.Stop();
            _Element?.Remove();

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
                        var p1 = _Points[0];
                        var p2 = _PointAction.Point;
                        _PreviewLine ??= new HintLine(_SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                        _PreviewLine.Set(p1, p2, _SketchEditorTool.Sketch.Plane);
                        break;

                    case 2:
                        if (_Segment != null)
                        {
                            _Points[2] = _PointAction.Point;
                            _Element.OnPointsChanged(_Points, null);

                            if (_ValueHudElement == null && _SketchEditorTool.WorkspaceController.HudManager != null)
                            {
                                _ValueHudElement = _SketchEditorTool.WorkspaceController.HudManager?.CreateElement<ValueHudElement>(this);
                                _ValueHudElement.Label = "Radius:";
                                _ValueHudElement.Units = ValueUnits.Length;
                                _ValueHudElement.ValueEntered += _ValueHudElement_RadiusEntered;
                            }
                            _ValueHudElement?.SetValue(_Segment.Radius(_Points));
                        }
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

                        _SketchEditorTool.StatusText = "Select end point for circular arc.";

                        _PointAction.Reset();
                        break;

                    case 1:
                        if (_Points[0].Distance(_PointAction.Point) < 0.001)
                        {
                            // Minimum length not met
                            _PointAction.Reset();
                            return;
                        }

                        _Points.Add(1, _PointAction.Point);
                        _MergePointIndices[1] = _PointAction.MergeCandidateIndex;
                        _PointsCompleted++;

                        _Points.Add(2, _PointAction.Point);
                        _Segment = new SketchSegmentArc(0, 1, 2);

                        _Element = new SketchEditorSegmentElement(_SketchEditorTool, -1, _Segment, _SketchEditorTool.Transform, _SketchEditorTool.Sketch.Plane);
                        _Element.IsCreating = true;
                        _Element.OnPointsChanged(_Points, null);

                        _SketchEditorTool.StatusText = "Select rim point for circular arc.";

                        _PointAction.Reset();
                        break;

                    case 2:
                        if (_Points[0].Distance(_PointAction.Point) < 0.001
                            || _Points[1].Distance(_PointAction.Point) < 0.001)
                        {
                            // Minimum length not met
                            _PointAction.Reset();
                            return;
                        }

                        _PointAction.Stop();

                        _Points[2] = _PointAction.Point;
                        _MergePointIndices[2] = _PointAction.MergeCandidateIndex;

                        _SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] { _Segment }, null);
                        break;
                }
            }
        }

        //--------------------------------------------------------------------------------------------------
        
        void _ValueHudElement_RadiusEntered(ValueHudElement hudElement, double newValue)
        {
            if (newValue == 0)
                return;

            if (_Points[0].Distance(_Points[1]) == 0)
                return;
            
            var center = Geom2dUtils.FindEllipseCenterFromEndpoints(_Points[0], _Points[1], newValue, newValue, 0, newValue > 0);
            var xAxis = new Ax2d(center, new Dir2d(new Vec2d(center, _Points[0])));
            var radius = center.Distance(_Points[0]);
            var circ = new gp_Circ2d(xAxis, radius, newValue < 0);
            var endParameter = ElCLib.Parameter(circ, _Points[1]);
            _Points[2] = ElCLib.Value(endParameter/2, circ);

            _MergePointIndices[2] = -1;
            _PointAction.Stop();
            _SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] { _Segment }, null);
        }

        //--------------------------------------------------------------------------------------------------

    }
}