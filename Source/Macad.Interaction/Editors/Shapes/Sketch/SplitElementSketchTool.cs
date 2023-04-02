using Macad.Core.Shapes;

namespace Macad.Interaction.Editors.Shapes
{
    public class SplitElementSketchTool : SketchTool
    {
        SplitSketchElementAction _PointAction;
        const string _Message = "Select a shared point or a position on a segment to split.";

        //--------------------------------------------------------------------------------------------------

        protected override bool OnStart()
        {
            _PointAction = new SplitSketchElementAction(SketchEditorTool);
            if (!StartAction(_PointAction))
                return false;
            _PointAction.Finished += _PointAction_Finished;

            SetHintMessage(_Message);
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _PointAction_Finished(ToolAction toolAction)
        {
            if (_PointAction.SelectedElementType == Sketch.ElementType.Segment && _PointAction.SelectedSegment != null)
            {
                Sketch.SaveUndo(Sketch.ElementType.All);
                if (SketchUtils.SplitSegment(Sketch, _PointAction.SelectedSegment, _PointAction.SelectedParameter) != SketchUtils.SplitSegmentFailed)
                {
                    CommitChanges();
                }
            }
            else if (_PointAction.SelectedElementType == Sketch.ElementType.Point && _PointAction.SelectedPointIndex > -1)
            {
                Sketch.SaveUndo(Sketch.ElementType.Point | Sketch.ElementType.Segment);
                if (SketchUtils.SplitPoint(Sketch, _PointAction.SelectedPointIndex) != SketchUtils.SplitPointFailed)
                {
                    CommitChanges();
                }
            }

            _PointAction.Reset();
            SetHintMessage(_Message);
        }

        //--------------------------------------------------------------------------------------------------

    }
}