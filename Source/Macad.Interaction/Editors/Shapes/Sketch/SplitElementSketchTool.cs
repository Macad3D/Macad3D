using Macad.Core.Shapes;

namespace Macad.Interaction.Editors.Shapes;

public class SplitElementSketchTool : SketchTool
{
    SplitSketchElementAction _ToolAction;
    const string _Message = "Select a shared point or a position on a segment to split.";

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        _ToolAction = new SplitSketchElementAction(SketchEditorTool);
        if (!StartAction(_ToolAction))
            return false;
        _ToolAction.Finished += _ToolAction_Finished;

        SetHintMessage(_Message);
        SetCursor(Cursors.Plus);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Finished(SplitSketchElementAction sender, SplitSketchElementAction.EventArgs args)
    {
        if (args.SelectedElementType == Sketch.ElementType.Segment && args.SelectedSegment != null)
        {
            Sketch.SaveUndo(Sketch.ElementType.All);
            if (SketchUtils.SplitSegment(Sketch, args.SelectedSegment, args.SelectedParameter) != SketchUtils.SplitSegmentFailed)
            {
                CommitChanges();
            }
        }
        else if (args.SelectedElementType == Sketch.ElementType.Point && args.SelectedPointIndex > -1)
        {
            Sketch.SaveUndo(Sketch.ElementType.Point | Sketch.ElementType.Segment);
            if (SketchUtils.SplitPoint(Sketch, args.SelectedPointIndex) != SketchUtils.SplitPointFailed)
            {
                CommitChanges();
            }
        }

        _ToolAction.Reset();
        SetHintMessage(_Message);
    }

    //--------------------------------------------------------------------------------------------------

}