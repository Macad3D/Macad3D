using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public sealed class SketchSegmentEllipseCenterCreator : SketchSegmentCreator
{
    SketchPointAction _PointAction;
    SketchSegmentEllipse _Segment;
    SketchEditorSegmentElement _Element;
    Coord2DHudElement _Coord2DHudElement;
    ValueHudElement _ValueHudElement;
    HintCircle _HintCircle;
    HintLine _HintLine;
    readonly Marker[] _Marker = new Marker[2];
    readonly Dictionary<int, Pnt2d> _Points = new(3);
    readonly int[] _MergePointIndices = new int[3];
    int _PointsCompleted = 0;

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

        SetHintMessage("__Select center point__ of the ellipse.");
            
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
            case 1:
                if (_HintCircle == null)
                {
                    _HintCircle = new HintCircle(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                    Add(_HintCircle);
                }
                if (_HintLine == null)
                {
                    _HintLine = new HintLine(SketchEditorTool.WorkspaceController, HintStyle.ThinDashed | HintStyle.Topmost);
                    Add(_HintLine);
                }
                var p1 = _Points[0];
                var p2 = args.Point;
                var circ = new gce_MakeCirc2d(p1, p2).Value();
                _HintCircle.Set(circ, SketchEditorTool.Sketch.Plane);
                _HintLine.Set(p1, p2, SketchEditorTool.Sketch.Plane);
                    
                if (_ValueHudElement == null)
                {
                    _ValueHudElement = new ValueHudElement
                    {
                        Label = "Distance:",
                        Units = ValueUnits.Length
                    };
                    Add(_ValueHudElement);
                    _ValueHudElement.ValueEntered += _ValueHudElement_ValueEntered;
                }
                _ValueHudElement.SetValue(_Points[0].Distance(args.Point));
                _Points[1] = p2;
                break;

            case 2:
                if (_Segment != null)
                {
                    _Points[2] = args.Point;
                    _Element.OnPointsChanged(_Points, null);
                }
                _ValueHudElement.SetValue(_Points[0].Distance(args.Point));
                _Points[2] = args.Point;
                break;
        }
            
        _Coord2DHudElement.SetValues(args.PointOnWorkingPlane.X, args.PointOnWorkingPlane.Y);
    }

    //--------------------------------------------------------------------------------------------------

    void _PointAction_Finished(SketchPointAction sender, SketchPointAction.EventArgs args)
    {
        switch (_PointsCompleted)
        {
            case 0:
                _SetCenterPoint(args.Point, args.MergeCandidateIndex);
                break;

            case 1:
                _SetFirstRimPoint(args.Point, args.MergeCandidateIndex);
                break;

            case 2:
                _SetSecondRimPoint(args.Point, args.MergeCandidateIndex);
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _SetCenterPoint(Pnt2d point, int mergeCandidateIndex)
    {
        _Points[0] = point;
        _MergePointIndices[0] = mergeCandidateIndex;
        _PointsCompleted++;

        _Marker[0] = new Marker(SketchEditorTool.WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, Marker.BallImage);
        _Marker[0].Set(point, SketchEditorTool.Sketch.Plane);
        Add(_Marker[0]);

        SetHintMessage("__Select first rim point__ of the ellipse.");

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

        StopAction(_PointAction);

        SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] {_Segment}, null);
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

        Remove(_HintCircle);
        _HintCircle = null;
        Remove(_HintLine);
        _HintLine = null;

        _Points[1] = point;
        _MergePointIndices[1] = mergeCandidateIndex;
        _PointsCompleted++;

        _Marker[1] = new Marker(SketchEditorTool.WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, Marker.BallImage);
        _Marker[1].Set(point, SketchEditorTool.Sketch.Plane);
        Add(_Marker[1]);

        _Points[2] = point;
        _Segment = new SketchSegmentEllipse(0, 1, 2);

        _Element = new SketchEditorSegmentElement(SketchEditorTool, -1, _Segment, SketchEditorTool.Transform, SketchEditorTool.Sketch.Plane)
        {
            IsCreating = true
        };
        _Element.OnPointsChanged(_Points, null);

        SetHintMessage("__Select second rim point__ of the ellipse.");
        _PointAction.Reset();
        SketchEditorTool.WorkspaceController.Invalidate();
        SketchEditorTool.WorkspaceController.UpdateSelection();
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