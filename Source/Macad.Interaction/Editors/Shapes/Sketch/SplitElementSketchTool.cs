using System.Linq;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class SplitElementSketchTool : SketchTool
{
    PointOnSketchElementAction _ToolAction;
    const string _Message = "__Select__ a shared point or a position on a segment to split.";

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        SketchEditorTool.Elements.ConstraintsVisible = false;
        SketchEditorTool.Select([], []);

        _ToolAction = new PointOnSketchElementAction(SketchEditorTool);
        if (!StartAction(_ToolAction))
            return false;
        _ToolAction.Preview += _ToolAction_Preview;
        _ToolAction.Finished += _ToolAction_Finished;

        SetHintMessage(_Message);
        SetCursor(Cursors.Plus);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Preview(PointOnSketchElementAction sender, PointOnSketchElementAction.PreviewEventArgs args)
    {
        if (args.ElementType == Sketch.ElementType.Segment)
        {
            args.Cancel = !SketchUtils.CanSplitSegment(SketchEditorTool.Sketch, args.Segment);
            if (args.SecondSegment != null)
            {
                var secondElement = SketchEditorTool.Elements.SegmentElements.FirstOrDefault(element => element.Segment == args.SecondSegment);
                if (secondElement?.AisObject is { } aisObject)
                {
                    args.MouseEventData.Return.AdditionalHighlights.Add(new MouseEventData.Element(aisObject));
                }
            }
        }
        if (args.ElementType == Sketch.ElementType.Point)
        {
            args.Cancel = !SketchUtils.CanSplitPoint(SketchEditorTool.Sketch, args.PointIndex);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Finished(PointOnSketchElementAction sender, PointOnSketchElementAction.EventArgs args)
    {
        if (args.ElementType == Sketch.ElementType.Segment && args.Segment != null)
        {
            Sketch.SaveUndo(Sketch.ElementType.All);
            bool commit = SketchUtils.SplitSegment(Sketch, args.Segment, args.Parameter) != SketchUtils.SplitSegmentFailed;
            if (args.SecondSegment != null)
            {
                commit |= SketchUtils.SplitSegment(Sketch, args.SecondSegment, args.SecondParameter) != SketchUtils.SplitSegmentFailed;
            }
            if(commit)
            {
                CommitChanges();
            }
        }
        else if (args.ElementType == Sketch.ElementType.Point && args.PointIndex > -1)
        {
            Sketch.SaveUndo(Sketch.ElementType.Point | Sketch.ElementType.Segment);
            if (SketchUtils.SplitPoint(Sketch, args.PointIndex) != SketchUtils.SplitPointFailed)
            {
                CommitChanges();
            }
        }

        _ToolAction.Reset();
        SetHintMessage(_Message);
    }

    //--------------------------------------------------------------------------------------------------

}