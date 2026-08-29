using System.Collections.Generic;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public sealed class SketchSegmentLineCreator : SketchSegmentCreator
{
    SketchPointAction _PointAction;
    SketchSegmentLine _Segment;
    SketchEditorSegmentElement _Element;
    Coord2DHudElement _Coord2DHudElement;
    ValueHudElement _ValueHudElement;
    readonly Dictionary<int, Pnt2d> _Points = new(2);
    readonly int[] _MergePointIndices = new int[2];

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

        SetHintMessage("__Select start point__ for line.");

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        _Element?.Remove();
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    public override bool Continue(int continueWithPoint)
    {
        // Start the next line with the first point already caught
        _Points[0] = SketchEditorTool.Sketch.Points[continueWithPoint];
        _Points[1] = _Points[0];
        _MergePointIndices[0] = continueWithPoint;

        _Element?.Remove();
        _Segment = new SketchSegmentLine(0, 1);
        _Element = new SketchEditorSegmentElement(SketchEditorTool, -1, _Segment, SketchEditorTool.Transform, SketchEditorTool.Sketch.Plane)
        {
            IsCreating = true
        };
        _Element.OnPointsChanged(_Points, null);

        _PointAction.Reset();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _PointAction_Preview(SketchPointAction sender, SketchPointAction.EventArgs args)
    {
        if (_Segment != null)
        {
            _Points[1] = args.Point;
            _Element.OnPointsChanged(_Points, null);

            if (_ValueHudElement == null)
            {
                _ValueHudElement = new ValueHudElement
                {
                    Label = "Length:",
                    Units = ValueUnits.Length
                };
                _ValueHudElement.Label = "Length:";
                _ValueHudElement.Units = ValueUnits.Length;
                _ValueHudElement.ValueEntered += _ValueHudElement_ValueEntered;
                Add(_ValueHudElement);
            }
            _ValueHudElement.SetValue(_Segment.Length(_Points));
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
            _Segment = new SketchSegmentLine(0, 1);

            _Element = new SketchEditorSegmentElement(SketchEditorTool, -1, _Segment, SketchEditorTool.Transform, SketchEditorTool.Sketch.Plane)
            {
                IsCreating = true
            };
            _Element.OnPointsChanged(_Points, null);

            SetHintMessage("__Select end point__ for line.");
            _PointAction.Reset();
            _PointAction.GetSnapHandler().AddSnapAuxiliaryFunction(SnapAuxiliaryCategories.TangentPoint, _SnapAuxFunction_Tangent);
        } 
        else
        {
            if (_Points[0].Distance(args.Point) < 0.001)
            {
                _PointAction.Reset();
                return;
            }

            _Points[1] = args.Point;
            _MergePointIndices[1] = args.MergeCandidateIndex;

            // Accept point
            SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, [_Segment], null, _MergePointIndices[1] >= 0 ? -1 : 1);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _SnapAuxFunction_Tangent(SnapAuxiliaryContext context)
    {
        if (context.Curve == null)
        {
            return;
        }

        Geom2d_Curve curve2d = GeomProjLib.Curve2d(context.Curve, context.UMin, context.UMax, new Geom_Plane(Sketch.Plane));
        if (curve2d is Geom2d_Line)
        {
            return;
        }

        var tangentParams = Geom2dUtils.FindAllTangentsThroughPoint(curve2d, _Points[0], context.UMin, context.UMax);
        if (tangentParams.Count == 0)
        {
            return;
        }

        foreach (var tangentParam in tangentParams)
        {
            Pnt2d pnt2d = curve2d.Value(tangentParam);
            Pnt pnt = ElSLib.PlaneValue(pnt2d.X, pnt2d.Y, Sketch.Plane.Position);
            SnapAuxiliaryFunctions.AddAuxMarker(context, "Tangent", pnt);
            Pnt sourcePnt = ElSLib.PlaneValue(_Points[0].X, _Points[0].Y, Sketch.Plane.Position);
            SnapAuxiliaryFunctions.AddHintLine(context, sourcePnt, pnt);
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

        var segment = _Segment;
        _Segment = null; // Needed to suppress next preview called in FinishSegmentCreation
        _Points[1] = _Points[0].Translated(vec.Normalized().Scaled(newValue));
        _MergePointIndices[1] = -1;
        SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, [segment], null, 1);
    }

    //--------------------------------------------------------------------------------------------------

}