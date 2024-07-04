using System.Collections.Generic;
using System.Linq;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class MirrorElementSketchTool : SketchTool
{
    const string _MessageFirst = "__Select first point__ to define the mirror axis.";
    const string _MessageSecond = "__Select second point__ to define the mirror axis, press `k:Ctrl` to round orientation to 5°.";
    int[] _OriginalPoints;
    SketchSegment[] _OriginalSegments;
    readonly Dictionary<int, Pnt2d> _TempPoints = new();
    Dictionary<int, SketchSegment> _TempSegments;
    readonly Dictionary<int, SketchEditorPointElement> _PreviewPointElements = new();
    readonly Dictionary<int, SketchEditorSegmentElement> _PreviewSegmentElements = new();
    Ax2d? _MirrorAxis;
    HintLine _AxisHint;
    bool _PreviewIsValid;
    LabelHudElement _AxisInfoHudElement;

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        SketchEditorTool.Elements.ConstraintsVisible = false;

        _OriginalSegments = SketchEditorTool.SelectedSegments.ToArray();
        if (_OriginalSegments.Length == 0)
            return false;
        _OriginalPoints = _OriginalSegments.SelectMany(seg => seg.Points).Distinct().ToArray();
        _TempSegments = _OriginalSegments.Select(seg => seg.Clone()).ToIndexedDictionary();
       
        // Mirror coordinates of Elliptical Arc to get the major/minor axis swapped.
        _TempSegments.Values.OfType<SketchSegmentEllipticalArc>().ForEach(seg =>(seg.Points[0], seg.Points[1]) = (seg.Points[1], seg.Points[0]));

        // Start action
        SketchPointAction toolAction = new(SketchEditorTool)
        {
            EnablePointMerge = false
        };
        toolAction.Preview += _ToolAction_Preview;
        toolAction.Finished += _ToolAction_Finished;
        if (!StartAction(toolAction))
            return false;
        SketchEditorTool.Elements.Activate(false, false, false);

        SetHintMessage(_MessageFirst);
        SetCursor(Cursors.SetPoint);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        _PreviewPointElements.Values.ForEach(element => element.Remove());
        _PreviewPointElements.Clear();
        _PreviewSegmentElements.Values.ForEach(element => element.Remove());
        _PreviewSegmentElements.Clear();

        _UpdateSegmentElementsVisibility(true);

        _AxisInfoHudElement = null;
        
        base.Cleanup();
    }
    
    //--------------------------------------------------------------------------------------------------

    void _UpdateSegmentElementsVisibility(bool show)
    {
        if (_OriginalSegments == null)
            return; 

        SketchEditorTool.Elements.SegmentElements.IntersectBy(_OriginalSegments, element => element.Segment)
                        .ForEach(element => element.IsVisible = show);

        // Hide orphan points
        foreach (var pointIndex in _OriginalSegments.SelectMany(segment => segment.Points).Distinct())
        {
            var segmentsWithPoint = Sketch.Segments.Values.Where(seg => seg.Points.Contains(pointIndex));
            if(_OriginalSegments.ContainsAll(segmentsWithPoint))
            {
                SketchEditorTool.Elements.PointElements.First(element => element.PointIndex == pointIndex).IsVisible = show;
            }
        }

        if (show)
        {
            SketchEditorTool.Elements.OnPointsChanged(Sketch.Points, Sketch.Segments);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Preview(SketchPointAction sender, SketchPointAction.EventArgs args)
    {
        if(_MirrorAxis.HasValue)
        {
            // Update mirror axis
            Vec2d p2p = new(_MirrorAxis.Value.Location, args.Point);
            if (p2p.SquareMagnitude() < 1e-5)
                return;

            var orientation = Dir2d.DY.Angle(p2p.ToDir());
            if (args.MouseEventData.ModifierKeys.Has(ModifierKeys.Control))
            {
                orientation = Maths.RoundToNearest(orientation, 5.0.ToRad());
            }
            _MirrorAxis = new Ax2d(_MirrorAxis.Value.Location, Dir2d.DY.Rotated(orientation));
            _AxisHint.Set(_MirrorAxis.Value, Sketch.Plane);

            if (_AxisInfoHudElement == null)
            {
                _AxisInfoHudElement = new LabelHudElement();
                Add(_AxisInfoHudElement);
            }
            _AxisInfoHudElement.Text = $"Orientation: {Maths.NormalizeAngleDegree(orientation.ToDeg(), -180, 180).ToRoundedInt()}°";

            // Create preview structures
            _UpdateElements();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Finished(SketchPointAction sender, SketchPointAction.EventArgs args)
    {
        if(_MirrorAxis.HasValue)
        {
            // Do mirror
            _UpdateElements();
            _OriginalSegments.ForEach(Sketch.DeleteSegment);
            SketchEditorTool.SelectedPoints.Clear();
            Sketch.AddElements(_TempPoints, null, _TempSegments, null);
            _OriginalSegments = null;
            Sketch.Body?.Model?.UndoHandler?.Commit();
            Stop();
        }
        else
        {
            // Select first point
            _MirrorAxis = new Ax2d(args.Point, Dir2d.DY);
            _AxisHint = new HintLine(WorkspaceController, HintStyle.WorkingAxis);
            _AxisHint.Set(_MirrorAxis.Value, Sketch.Plane);
            Add(_AxisHint);
            sender.Reset();
            SetHintMessage(_MessageSecond);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateElements()
    {
        if (!_PreviewIsValid)
        {
            _UpdateSegmentElementsVisibility(false);

            foreach (var point in _OriginalPoints)
            {
                _PreviewPointElements[point] = new SketchEditorPointElement(SketchEditorTool, point, Pnt2d.Origin, Sketch.GetTransformation(), Sketch.Plane);
            }

            foreach (var (index, segment) in _TempSegments)
            {
                _PreviewSegmentElements[index] = new SketchEditorSegmentElement(SketchEditorTool, index, segment, Sketch.GetTransformation(), Sketch.Plane);
            }

            _PreviewIsValid = true;
        }

        var sketchPoints = Sketch.Points;
        foreach (var point in _OriginalPoints)
        {
            _TempPoints[point] = sketchPoints[point].Mirrored(_MirrorAxis.Value);
            _PreviewPointElements[point].OnPointsChanged(_TempPoints, null);
        }

        _PreviewSegmentElements.Values.ForEach(element => element.OnPointsChanged(_TempPoints, null));
    }
}