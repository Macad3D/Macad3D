using System;
using System.Collections.Generic;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public sealed class SketchSegmentRectangleCreator : SketchSegmentCreator
{
    SketchPointAction _PointAction;
    SketchSegmentLine[] _Segments;
    SketchEditorSegmentElement[] _Elements;
    Coord2DHudElement _Coord2DHudElement;
    MultiValueHudElement _ValueHudElement;
    readonly Dictionary<int, Pnt2d> _Points = new(4);
    readonly int[] _MergePointIndices = new int[4];

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
        SetHintMessage("__Select first corner__ of the rectangle.");

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        if (_Elements != null)
        {
            foreach (var element in _Elements)
                element.Remove();
        }
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    void _PointAction_Preview(SketchPointAction sender, SketchPointAction.EventArgs args)
    {
        if (_Segments != null)
        {
            _UpdateCornerPoints(args.Point);
            foreach (var component in _Elements)
            {
                component.OnPointsChanged(_Points, null);
            }

            if (_ValueHudElement == null)
            {
                _ValueHudElement = new MultiValueHudElement
                {
                    Label1 = "Size X:",
                    Units1 = ValueUnits.Length,
                    Label2 = "Size Y:",
                    Units2 = ValueUnits.Length
                };
                _ValueHudElement.MultiValueEntered += _ValueHudElement_MultiValueEntered;
                Add(_ValueHudElement);
            }
            _ValueHudElement.SetValue1(_Points[2].X - _Points[0].X);
            _ValueHudElement.SetValue2(_Points[2].Y - _Points[0].Y);
        }

        _Coord2DHudElement.SetValues(args.PointOnWorkingPlane.X, args.PointOnWorkingPlane.Y);
    }

    //--------------------------------------------------------------------------------------------------

    void _PointAction_Finished(SketchPointAction sender, SketchPointAction.EventArgs args)
    {
        if (_Segments == null)
        {
            _Points.Add(0, args.Point);
            _MergePointIndices[0] = args.MergeCandidateIndex;
            _UpdateCornerPoints(args.Point);

            _Segments = new SketchSegmentLine[4];
            _Segments[0] = new SketchSegmentLine(0, 1);
            _Segments[1] = new SketchSegmentLine(1, 2);
            _Segments[2] = new SketchSegmentLine(2, 3);
            _Segments[3] = new SketchSegmentLine(3, 0);

            _Elements = new SketchEditorSegmentElement[4];
            for (int i = 0; i < _Elements.Length; i++)
            {
                _Elements[i] = new SketchEditorSegmentElement(SketchEditorTool, -1, _Segments[i], SketchEditorTool.Transform, SketchEditorTool.Sketch.Plane);
                _Elements[i].IsCreating = true;
                _Elements[i].OnPointsChanged(_Points, null);
            }

            SetHintMessage("__Select second corner__ or the rectangle.");
            _PointAction.Reset();
        } 
        else
        {
            _SetSecondPoint(args.Point, args.MergeCandidateIndex);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _SetSecondPoint(Pnt2d point, int mergeCandidateIndex)
    {
        if (Math.Abs(_Points[0].X - point.X) < 0.001
            || Math.Abs(_Points[0].Y - point.Y) < 0.001)
        {
            // Minimum length not met
            _PointAction.Reset();
            return;
        }

        _PointAction.Stop();

        _UpdateCornerPoints(point);
        _MergePointIndices[1] = -1;
        _MergePointIndices[2] = mergeCandidateIndex;
        _MergePointIndices[3] = -1;

        SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, _Segments, null);
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateCornerPoints(Pnt2d second)
    {
        var first = _Points[0];
        _Points[1] = new Pnt2d(first.X, second.Y);
        _Points[2] = new Pnt2d(second.X, second.Y);
        _Points[3] = new Pnt2d(second.X, first.Y);
    }

    //--------------------------------------------------------------------------------------------------

    void _ValueHudElement_MultiValueEntered(MultiValueHudElement hudelement, double newvalue1, double newvalue2)
    {
        if (newvalue1 == 0 || newvalue2 == 0)
            return;

        _SetSecondPoint(_Points[0].Translated(new Vec2d(newvalue1, newvalue2)), -1);
    }
}