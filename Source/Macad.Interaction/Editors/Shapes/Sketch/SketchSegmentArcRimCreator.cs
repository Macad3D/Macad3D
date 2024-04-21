using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

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
        base.OnStart();

        _PointAction = new SketchPointAction(SketchEditorTool);
        if (!StartAction(_PointAction))
            return false;
        _PointAction.Preview += _PointAction_Preview;
        _PointAction.Finished += _PointAction_Finished;

        _Coord2DHudElement = new Coord2DHudElement();
        Add(_Coord2DHudElement);

        SetHintMessage("__Select start point__ for circular arc.");

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
        // Start the next line with the first point already catched
        _Points[0] = SketchEditorTool.Sketch.Points[continueWithPoint];
        _MergePointIndices[0] = continueWithPoint;

        _Element?.Remove();
        _Element = null;
        _Segment = null;
        _PointAction.Reset();
        _PointsCompleted = 1;
        SetHintMessage("\"__Select end point__ for circular arc.");
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _PointAction_Preview(SketchPointAction sender, SketchPointAction.EventArgs args)
    {
        switch (_PointsCompleted)
        {
            case 1:
                var p1 = _Points[0];
                var p2 = args.Point;
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
                    _Points[2] = args.Point;
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

        _Coord2DHudElement?.SetValues(args.PointOnWorkingPlane.X, args.PointOnWorkingPlane.Y);
    }

    //--------------------------------------------------------------------------------------------------

    void _PointAction_Finished(SketchPointAction sender, SketchPointAction.EventArgs args)
    {
        switch (_PointsCompleted)
        {
            case 0:
                _Points[0] = args.Point;
                _MergePointIndices[0] = args.MergeCandidateIndex;
                _PointsCompleted++;
                SetHintMessage("__Select end point__ for circular arc.");
                _PointAction.Reset();
                break;

            case 1:
                if (_Points[0].Distance(args.Point) < 0.001)
                {
                    // Minimum length not met
                    _PointAction.Reset();
                    return;
                }

                _Points[1] = args.Point;
                _MergePointIndices[1] = args.MergeCandidateIndex;
                _PointsCompleted++;

                _Points[2] = args.Point;
                _Segment = new SketchSegmentArc(0, 1, 2);

                _Element = new SketchEditorSegmentElement(SketchEditorTool, -1, _Segment, SketchEditorTool.Transform, SketchEditorTool.Sketch.Plane)
                {
                    IsCreating = true
                };
                _Element.OnPointsChanged(_Points, null);

                SetHintMessage("__Select rim point__ for circular arc.");
                _PointAction.Reset();
                break;

            case 2:
                if (_Points[0].Distance(args.Point) < 0.001
                    || _Points[1].Distance(args.Point) < 0.001)
                {
                    // Minimum length not met
                    _PointAction.Reset();
                    return;
                }
                
                Remove(_ValueHudElement);
                _ValueHudElement = null;

                _Points[2] = args.Point;
                _MergePointIndices[2] = args.MergeCandidateIndex;
                SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, [_Segment], null, _MergePointIndices[1] >= 0 ? -1 : 1);
                break;
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
                
        Remove(_ValueHudElement);
        _ValueHudElement = null;
        _PointsCompleted++;
        SketchEditorTool.FinishSegmentCreation(_Points, _MergePointIndices, [_Segment], null, _MergePointIndices[1] >= 0 ? -1 : 1);
    }

    //--------------------------------------------------------------------------------------------------

}