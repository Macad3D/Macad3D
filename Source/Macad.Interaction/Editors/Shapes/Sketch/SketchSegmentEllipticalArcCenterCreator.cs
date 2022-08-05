using System;
using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public sealed class SketchSegmentEllipticalArcCenterCreator : ISketchSegmentCreator
    {
        SketchEditorTool _SketchEditorTool;
        SketchPointAction _PointAction;
        SketchSegmentEllipticalArc _Segment;
        readonly HintLine[] _HintLines = new HintLine[2];
        Coord2DHudElement _Coord2DHudElement;
        SketchEditorSegmentElement _Element;
        readonly Dictionary<int, Pnt2d> _Points = new Dictionary<int, Pnt2d>(3);
        readonly int[] _MergePointIndices = new int[3];
        int _StartPointMergeIndex = -1;
        int _PointsCompleted = 0;
        Pnt2d _CenterPoint, _StartPoint;
        double _LastEndParameter = 0;
        bool _LastParameterWasEnd;
        bool _ArcDirection = false;

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

            _SketchEditorTool.WorkspaceController.HudManager?.SetHintMessage(this, "Select center point for elliptical arc.");

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public void Stop()
        {
            for (int i = 0; i < _HintLines.Length; i++)
            {
                _HintLines[i]?.Remove();
                _HintLines[i] = null;
            }

            _Element?.Remove();
            _PointAction.Stop();
            _SketchEditorTool.WorkspaceController.HudManager?.RemoveElement(_Coord2DHudElement);
            _Coord2DHudElement = null;
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
                        _HintLines[0] ??= new HintLine(_SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                        _HintLines[0].Set(_CenterPoint, _PointAction.Point, _SketchEditorTool.Sketch.Plane);
                        break;

                    case 2:
                        _HintLines[1] ??= new HintLine(_SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                        _HintLines[1].Set(_CenterPoint, _PointAction.Point, _SketchEditorTool.Sketch.Plane);

                        if (_Segment != null)
                        {
                            if (_CalcArcRimPoints(_PointAction.Point))
                            {
                                _Element.OnPointsChanged(_Points, null);
                            }
                            else
                            {
                                _Element.Remove();
                            }
                        }
                        break;
                }

                _Coord2DHudElement?.SetValues(_PointAction.PointOnWorkingPlane.X, _PointAction.PointOnWorkingPlane.Y);
            }
        }

        //--------------------------------------------------------------------------------------------------

        bool _CalcArcRimPoints(Pnt2d endPoint, int mergeCandidateIndex = -1)
        {
            // Project end point on circle
            if ((_StartPoint.Distance(endPoint) <= 0) || (endPoint.Distance(_CenterPoint) <= 0) || (_StartPoint.Distance(_CenterPoint) <= 0))
                return false;

            var ellipse = Core.Geom.Geom2dUtils.MakeEllipse(_CenterPoint, _StartPoint, endPoint, _ArcDirection);
            if (ellipse == null)
                return false;

            // If the last parameter was small (a*0.25), and the current is  high (a*0.5), toggle direction
            var startParameter = ElCLib.Parameter(ellipse, _StartPoint);
            var endParameter = ElCLib.Parameter(ellipse, endPoint);
            var maxParameter = Math.Max(startParameter, endParameter);
            if (((startParameter > endParameter) && _LastParameterWasEnd)
                || ((startParameter < endParameter) && !_LastParameterWasEnd))
            {
                _LastEndParameter = maxParameter;
                _LastParameterWasEnd = !_LastParameterWasEnd;
            }
            else
            {
                if (maxParameter > 0.0001)
                {
                    var qa = ellipse.MajorRadius()/4;
                    if (((_LastEndParameter < qa) && (maxParameter > qa * 2))
                        || ((maxParameter < qa) && (_LastEndParameter > qa * 2)))
                    {
                        _ArcDirection = !_ArcDirection;
                        ellipse = Core.Geom.Geom2dUtils.MakeEllipse(_CenterPoint, _StartPoint, endPoint, _ArcDirection);
                        // Debug.WriteLine("Toggle direction");
                    }
                    // Debug.WriteLine("New: {0}     Last: {1}", maxParameter, _LastEndParameter);
                    _LastEndParameter = maxParameter;
                }
            }

            // Catch points
            if (_ArcDirection)
            {
                _Points[1] = _StartPoint;
                _MergePointIndices[1] = _StartPointMergeIndex;
                _Points[2] = endPoint;
                _MergePointIndices[2] = mergeCandidateIndex;
            }
            else
            {
                _Points[1] = endPoint;
                _MergePointIndices[1] = mergeCandidateIndex;
                _Points[2] = _StartPoint;
                _MergePointIndices[2] = _StartPointMergeIndex;
            }
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            if (toolAction == _PointAction)
            {
                switch (_PointsCompleted)
                {
                    case 0:
                        _CenterPoint = _PointAction.Point;
                        _Points.Add(0, _PointAction.Point);
                        _MergePointIndices[0] = _PointAction.MergeCandidateIndex;
                        _PointsCompleted++;

                        _SketchEditorTool.WorkspaceController.HudManager?.SetHintMessage(this, "Select start point for elliptical arc.");

                        _PointAction.Reset();
                        break;

                    case 1:
                        if (_CenterPoint.Distance(_PointAction.Point) < 0.001)
                        {
                            // Minimum distance not met
                            _PointAction.Reset();
                            return;
                        }

                        _StartPoint = _PointAction.Point;
                        _StartPointMergeIndex = _PointAction.MergeCandidateIndex;
                        _PointsCompleted++;

                        _Points.Add(1, _PointAction.Point);
                        _Points.Add(2, _PointAction.Point);
                        _Segment = new SketchSegmentEllipticalArc(1, 2, 0);

                        _Element = new SketchEditorSegmentElement(_SketchEditorTool, -1, _Segment, _SketchEditorTool.Transform, _SketchEditorTool.Sketch.Plane);
                        _Element.IsCreating = true;
                        _Element.OnPointsChanged(_Points, null);

                        _SketchEditorTool.WorkspaceController.HudManager?.SetHintMessage(this, "Select end point for elliptical arc.");

                        _PointAction.Reset();
                        break;

                    case 2:
                        if (!_CalcArcRimPoints(_PointAction.Point, _PointAction.MergeCandidateIndex))
                        {
                            // Minimum length not met
                            _PointAction.Reset();
                            return;
                        }

                        _PointAction.Stop();

                        _SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] { _Segment }, null);
                        break;
                }
            }
        }

    }

}