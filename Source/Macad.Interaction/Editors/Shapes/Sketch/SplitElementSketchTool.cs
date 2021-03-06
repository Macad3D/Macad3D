using Macad.Core.Shapes;

namespace Macad.Interaction.Editors.Shapes
{
    public class SplitElementSketchTool : ISketchTool
    {
        SplitSketchElementAction _PointAction;
        SketchEditorTool _SketchEditorTool;

        const string _Message = "Select a shared point or a position on a segment to split.";

        //--------------------------------------------------------------------------------------------------

        public bool Start(SketchEditorTool sketchEditorTool)
        {
            _SketchEditorTool = sketchEditorTool;

            _PointAction = new SplitSketchElementAction(sketchEditorTool);
            if (!_SketchEditorTool.WorkspaceController.StartToolAction(_PointAction, false))
                return false;
            _PointAction.Finished += _PointAction_Finished;

            _SketchEditorTool.StatusText = _Message;
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _PointAction_Finished(ToolAction toolAction)
        {
            if (_PointAction.SelectedElementType == Sketch.ElementType.Segment && _PointAction.SelectedSegment != null)
            {
                _SketchEditorTool.Sketch.SaveUndo(Sketch.ElementType.All);
                if (SketchUtils.SplitSegment(_SketchEditorTool.Sketch, _PointAction.SelectedSegment, _PointAction.SelectedParameter) != SketchUtils.SplitSegmentFailed)
                {
                    InteractiveContext.Current.UndoHandler.Commit();
                }
            }
            else if (_PointAction.SelectedElementType == Sketch.ElementType.Point && _PointAction.SelectedPointIndex > -1)
            {
                _SketchEditorTool.Sketch.SaveUndo(Sketch.ElementType.Point | Sketch.ElementType.Segment);
                if (SketchUtils.SplitPoint(_SketchEditorTool.Sketch, _PointAction.SelectedPointIndex) != SketchUtils.SplitPointFailed)
                {
                    InteractiveContext.Current.UndoHandler.Commit();
                }
            }

            _PointAction.Reset();
            _SketchEditorTool.StatusText = _Message;
        }

        //--------------------------------------------------------------------------------------------------

        public void Stop()
        {
            _PointAction.Stop();
            _PointAction.Finished -= _PointAction_Finished;
        }

        //--------------------------------------------------------------------------------------------------

    }
}