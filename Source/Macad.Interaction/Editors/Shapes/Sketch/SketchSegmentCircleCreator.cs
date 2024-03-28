using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

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
        base.OnStart();

        _PointAction = new SketchPointAction(SketchEditorTool);
        if (!StartAction(_PointAction))
            return false;
        _PointAction.Preview += _PointAction_Preview;
        _PointAction.Finished += _PointAction_Finished;

        _Coord2DHudElement = new Coord2DHudElement();
        Add(_Coord2DHudElement);

        SetHintMessage("__Select center point__ of the circle.");

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
        if (_Segment != null)
        {
            _Points[1] = args.Point;
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

        _Coord2DHudElement.SetValues(args.PointOnWorkingPlane.X, args.PointOnWorkingPlane.Y);
    }

    //--------------------------------------------------------------------------------------------------

    void _PointAction_Finished(SketchPointAction sender, SketchPointAction.EventArgs args)
    {
        if (_Segment == null)
        {
            _Points.Add(0, args.Point);
            _MergePointIndices[0] = args.MergeCandidateIndex;
            _Points.Add(1, args.Point);
            _Segment = new SketchSegmentCircle(0, 1);

            _Marker = new Marker(SketchEditorTool.WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, Marker.BallImage);
            _Marker.Set(args.Point, SketchEditorTool.Sketch.Plane);
            Add(_Marker);

            _Element = new SketchEditorSegmentElement(SketchEditorTool, -1, _Segment, SketchEditorTool.Transform, SketchEditorTool.Sketch.Plane)
            {
                IsCreating = true
            };
            _Element.OnPointsChanged(_Points, null);

            SketchEditorTool.WorkspaceController.Invalidate();
                
            SetHintMessage("__Select any rim point__ of the circle.");
            _PointAction.Reset();
        } 
        else
        {
            if (_Points[0].Distance(args.Point) < 0.001)
            {
                // Minimum length not met
                _PointAction.Reset();
                return;
            }

            _Points[1] = args.Point;
            _MergePointIndices[1] = args.MergeCandidateIndex;

            StopAction(_PointAction);

            SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, new SketchSegment[] { _Segment }, null);
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