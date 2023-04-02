using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SketchSegmentArcRimCreator : SketchSegmentCreator
    {
        SketchPointAction _PointAction;
        SketchSegmentArc _Segment;
        HintLine _PreviewLine;
        Coord2DHudElement _Coord2DHudElement;
        ValueHudElement _ValueHudElement;
        SketchEditorSegmentElement _Element;
        readonly Dictionary<int, Pnt2d> _Points = new(3);
        readonly int[] _MergePointIndices = new int[3];
        int _PointsCompleted = 0;

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

            SetHintMessage("Select start point for circular arc.");

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
                switch (_PointsCompleted)
                {
                    case 1:
                        var p1 = _Points[0];
                        var p2 = _PointAction.Point;
                        if (_PreviewLine == null)
                        {
                            _PreviewLine = new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                            Add(_PreviewLine);
                        }
                        _PreviewLine.Set(p1, p2, SketchEditorTool.Sketch.Plane);
                        break;

                    case 2:
                        if (_Segment != null)
                        {
                            _Points[2] = _PointAction.Point;
                            _Element.OnPointsChanged(_Points, null);

                            if (_ValueHudElement == null)
                            {
                                _ValueHudElement = new ValueHudElement
                                {
                                    Label = "Radius:",
                                    Units = ValueUnits.Length
                                };
                                Add(_ValueHudElement);
                                _ValueHudElement.ValueEntered += _ValueHudElement_RadiusEntered;
                            }
                            _ValueHudElement.SetValue(_Segment.Radius(_Points));
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
                        SetHintMessage("Select end point for circular arc.");
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

                        _Element = new SketchEditorSegmentElement(SketchEditorTool, -1, _Segment, SketchEditorTool.Transform, SketchEditorTool.Sketch.Plane)
                        {
                            IsCreating = true
                        };
                        _Element.OnPointsChanged(_Points, null);

                        SetHintMessage("Select rim point for circular arc.");
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

                        StopAction(_PointAction);

                        _Points[2] = _PointAction.Point;
                        _MergePointIndices[2] = _PointAction.MergeCandidateIndex;

                        SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] { _Segment }, null);
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
            StopAction(_PointAction);
            SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] { _Segment }, null);
        }

        //--------------------------------------------------------------------------------------------------

    }
}