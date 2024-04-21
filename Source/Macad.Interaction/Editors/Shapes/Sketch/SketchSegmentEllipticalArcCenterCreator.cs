using System;
using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public sealed class SketchSegmentEllipticalArcCenterCreator : SketchSegmentCreator
{
    SketchPointAction _PointAction;
    SketchSegmentEllipticalArc _Segment;
    readonly HintLine[] _HintLines = new HintLine[2];
    Coord2DHudElement _Coord2DHudElement;
    SketchEditorSegmentElement _Element;
    readonly Dictionary<int, Pnt2d> _Points = new(3);
    readonly int[] _MergePointIndices = new int[3];
    int _StartPointMergeIndex = -1;
    int _EndPointIndex = 1;
    int _PointsCompleted;
    Pnt2d _CenterPoint, _StartPoint;
    double _LastEndParameter;
    bool _LastParameterWasEnd;
    bool _ArcDirection;
    bool _StartPointFirst;

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        base.OnStart();

        _PointAction = new SketchPointAction(SketchEditorTool);
        if (!StartAction(_PointAction))
            return false;
        _PointAction.Preview += _PointAction_Preview;
        _PointAction.Finished += _PointAction_Finished;

        _Coord2DHudElement = new Coord2DHudElement();
        Add(_Coord2DHudElement);

        SetHintMessage("__Select center point__ for elliptical arc.");

        return true;
    }
            
    //--------------------------------------------------------------------------------------------------

    public override bool Continue(int continueWithPoint)
    {
        // Start the next line with the first point already catched
        _Points[1] = SketchEditorTool.Sketch.Points[continueWithPoint];
        _MergePointIndices[1] = continueWithPoint;

        _Element?.Remove();
        _Element = null;
        _Segment = null;
        _PointAction.Reset();
        _PointsCompleted = 0;
        _StartPointFirst = true;
        SetHintMessage("__Select center point__ for elliptical arc.");
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        _Element?.Remove();
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    void _PointAction_Preview(SketchPointAction sender, SketchPointAction.EventArgs args)
    {
        switch (_PointsCompleted)
        {
            case 0:
                if (_StartPointFirst)
                {
                    var p1 = _Points[1];
                    var p2 = args.Point;
                    if (_HintLines[0] == null)
                    {
                        _HintLines[0] = new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                        Add(_HintLines[0]);
                    }

                    _HintLines[0].Set(p1, p2, SketchEditorTool.Sketch.Plane);
                }
                break;

            case 1:
                if (_HintLines[0] == null)
                {
                    _HintLines[0] = new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                    Add(_HintLines[0]);
                }
                _HintLines[0].Set(_CenterPoint, args.Point, SketchEditorTool.Sketch.Plane);
                break;

            case 2:
                if (_HintLines[1] == null)
                {
                    _HintLines[1] = new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                    Add(_HintLines[1]);
                }
                _HintLines[1].Set(_CenterPoint, args.Point, SketchEditorTool.Sketch.Plane);

                if (_Segment != null)
                {
                    if (_CalcArcRimPoints(args.Point))
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

        _Coord2DHudElement.SetValues(args.PointOnWorkingPlane.X, args.PointOnWorkingPlane.Y);
    }

    //--------------------------------------------------------------------------------------------------

    bool _CalcArcRimPoints(Pnt2d endPoint, int mergeCandidateIndex = -1)
    {
        // Project end point on circle
        if (_StartPoint.Distance(endPoint) <= 0 || endPoint.Distance(_CenterPoint) <= 0 || _StartPoint.Distance(_CenterPoint) <= 0)
            return false;

        var ellipse = Core.Geom.Geom2dUtils.MakeEllipse(_CenterPoint, _StartPoint, endPoint, _ArcDirection);
        if (ellipse == null)
            return false;

        // If the last parameter was small (a*0.25), and the current is  high (a*0.5), toggle direction
        var startParameter = ElCLib.Parameter(ellipse, _StartPoint);
        var endParameter = ElCLib.Parameter(ellipse, endPoint);
        var maxParameter = Math.Max(startParameter, endParameter);
        if ((startParameter > endParameter && _LastParameterWasEnd)
            || (startParameter < endParameter && !_LastParameterWasEnd))
        {
            _LastEndParameter = maxParameter;
            _LastParameterWasEnd = !_LastParameterWasEnd;
        }
        else
        {
            if (maxParameter > 0.0001)
            {
                var qa = ellipse.MajorRadius()/4;
                if ((_LastEndParameter < qa && maxParameter > qa * 2)
                    || (maxParameter < qa && _LastEndParameter > qa * 2))
                {
                    _ArcDirection = !_ArcDirection;
                }
                _LastEndParameter = maxParameter;
            }
        }

        // Catch points
        if (_ArcDirection)
        {
            _EndPointIndex = 2;
            _Points[1] = _StartPoint;
            _MergePointIndices[1] = _StartPointMergeIndex;
            _Points[2] = endPoint;
            _MergePointIndices[2] = mergeCandidateIndex;
        }
        else
        {
            _EndPointIndex = 1;
            _Points[1] = endPoint;
            _MergePointIndices[1] = mergeCandidateIndex;
            _Points[2] = _StartPoint;
            _MergePointIndices[2] = _StartPointMergeIndex;
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _PointAction_Finished(SketchPointAction sender, SketchPointAction.EventArgs args)
    {
        switch (_PointsCompleted)
        {
            case 0:
                _CenterPoint = args.Point;
                _Points[0] = args.Point;
                _MergePointIndices[0] = args.MergeCandidateIndex;

                if (_StartPointFirst)
                {
                    if (_Points[1].Distance(_CenterPoint) < 0.001)
                    {
                        // Minimum length not met
                        _PointAction.Reset();
                        return;
                    }

                    _PointsCompleted++;
                    _SetStartPoint(_Points[1], _MergePointIndices[1]);
                }
                else
                {
                    _PointsCompleted++;
                }

                SetHintMessage("__Select start point__ for elliptical arc.");
                _PointAction.Reset();
                break;

            case 1:
                if (_CenterPoint.Distance(args.Point) < 0.001)
                {
                    // Minimum distance not met
                    _PointAction.Reset();
                    return;
                }

                _SetStartPoint(args.Point, args.MergeCandidateIndex);
                break;

            case 2:
                if (!_CalcArcRimPoints(args.Point, args.MergeCandidateIndex))
                {
                    // Minimum length not met
                    _PointAction.Reset();
                    return;
                }

                _PointsCompleted++;

                RemoveVisuals();
                _HintLines[0] = null;
                _HintLines[1] = null;
                
                SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, [_Segment], null, _MergePointIndices[_EndPointIndex] >= 0 ? -1 : _EndPointIndex);
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _SetStartPoint(Pnt2d point, int mergeCandidateIndex)
    {
        _StartPoint = point;
        _StartPointMergeIndex = mergeCandidateIndex;
        _PointsCompleted++;

        if (!_StartPointFirst)
        {
            _Points[1] = point;
        }

        _Points[2] = point;
        _Segment = new SketchSegmentEllipticalArc(1, 2, 0);

        _Element = new SketchEditorSegmentElement(SketchEditorTool, -1, _Segment, SketchEditorTool.Transform, SketchEditorTool.Sketch.Plane)
        {
            IsCreating = true
        };
        _Element.OnPointsChanged(_Points, null);

        SetHintMessage("__Select end point__ for elliptical arc.");
        _PointAction.Reset();
    }

    //--------------------------------------------------------------------------------------------------

}