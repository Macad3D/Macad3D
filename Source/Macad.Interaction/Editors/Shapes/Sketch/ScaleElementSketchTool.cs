using System.Collections.Generic;
using System.Linq;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class ScaleElementSketchTool : SketchTool
{
    const string _Message = "__Scale selected elements__ by dragging handles, press `k:Ctrl` to round to 5%, press `k:Shift` to scale relative to center.";

    ScaleSketchElementAction _ToolAction;
    List<int> _SelectedPoints;
    Dictionary<int, Pnt2d> _TempPoints;
    LabelHudElement _HudElement;

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        SketchEditorTool.Elements.ConstraintsVisible = false;

        var segPoints = SketchEditorTool.SelectedSegments.SelectMany(seg => seg.Points);
        _SelectedPoints = SketchEditorTool.SelectedPoints.Union(segPoints).ToList();

        _ToolAction = new(SketchEditorTool);
        if (!_UpdateBoundingBox())
            return false;
        _ToolAction.Preview += _ToolAction_Preview;
        _ToolAction.Finished += _ToolAction_Finished;
        if (!StartAction(_ToolAction))
            return false;
        SketchEditorTool.Elements.Activate(false, false, false);

        SetHintMessage(_Message);
        return true;
    }
    
    //--------------------------------------------------------------------------------------------------

    public override void OnSketchChanged(Sketch sketch, Sketch.ElementType types)
    {
        _UpdateBoundingBox();
    }

    //--------------------------------------------------------------------------------------------------

    bool _UpdateBoundingBox()
    {
        Bnd_Box2d box = new();
        var points = _TempPoints ?? SketchEditorTool.Sketch.Points;
        _SelectedPoints.ForEach(i => box.Add(points[i]));
        SketchEditorTool.SelectedSegments.ForEach(seg =>
        {
            if(seg.CachedCurve != null)
                BndLib_Add2dCurve.Add(seg.CachedCurve, 0.01, box);
        });
        if (box.IsVoid())
            return false;

        _ToolAction.Box = box;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Preview(ScaleSketchElementAction sender, ScaleSketchElementAction.EventArgs args)
    {
        var scale = _UpdatePoints(args);
        SketchEditorTool.Elements.OnPointsChanged(_TempPoints, null);
        _UpdateBoundingBox();

        if (_HudElement == null)
        {
            _HudElement = new LabelHudElement();
            Add(_HudElement);
        }
        _HudElement.Text = $"Scale: {scale:P0}";
    }

    //--------------------------------------------------------------------------------------------------
    
    void _ToolAction_Finished(ScaleSketchElementAction sender, ScaleSketchElementAction.EventArgs args)
    {
        Remove(_HudElement);
        _HudElement = null;

        _UpdatePoints(args);
        Sketch.Points = _TempPoints;
        _TempPoints = null;
        InteractiveContext.Current.UndoHandler.Commit();
    }

    //--------------------------------------------------------------------------------------------------

    double _UpdatePoints(ScaleSketchElementAction.EventArgs args)
    {
        _TempPoints ??= new(Sketch.Points);

        XY scaleCenter = args.Axis.Location.Coord;
        double scaleFactor = args.Scaled / args.Reference;

        if (!args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Shift))
        {
            scaleCenter.Add(args.Axis.Direction.Coord.Multiplied(-args.Reference));
            scaleFactor = (args.Scaled + args.Reference) / (args.Reference * 2.0);
        }
        
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            scaleFactor = Maths.RoundToNearest(scaleFactor, 0.05);
        }

        scaleFactor = scaleFactor.Clamp(0.01, 10000.0);
        XY scale = new(args.Axis.Direction.X == 0 ? 1.0 : scaleFactor,
                       args.Axis.Direction.Y == 0 ? 1.0 : scaleFactor);

        foreach (var i in _SelectedPoints)
        {
            _TempPoints[i] = Sketch.Points[i].Coord
                                   .Subtracted(scaleCenter)
                                   .Multiplied(scale)
                                   .Added(scaleCenter)
                                   .ToPnt();
        }

        return scaleFactor;
    }

}