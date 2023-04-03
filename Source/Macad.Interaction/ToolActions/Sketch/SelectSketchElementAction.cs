using System.Windows.Input;
using Macad.Common;
using Macad.Interaction.Editors.Shapes;

namespace Macad.Interaction
{
    public sealed class SelectSketchElementAction : ToolAction
    {
        #region Events

        public delegate void EventHandler(SelectSketchElementAction sender);
        public event EventHandler Finished;
        
        //--------------------------------------------------------------------------------------------------

        #endregion

        readonly SketchEditorTool _SketchEditorTool;

        //--------------------------------------------------------------------------------------------------

        public SelectSketchElementAction(SketchEditorTool sketchEditorTool) 
            : base()
        {
            _SketchEditorTool = sketchEditorTool;
        }

        //--------------------------------------------------------------------------------------------------

        protected override bool OnStart()
        {
            return _SketchEditorTool != null;
        }

        //--------------------------------------------------------------------------------------------------

        protected override void Cleanup()
        {
            Finished = null;
            base.Cleanup();
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseMove(MouseEventData data)
        {
            if (!IsFinished)
            {
                return base.OnMouseMove(data);
            }
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseUp(MouseEventData data)
        {
            if (!IsFinished)
            {
                if (!data.ModifierKeys.Has(ModifierKeys.Shift))
                {
                    _SketchEditorTool.Elements.DeselectAll();
                }

                foreach (var detectedObject in data.DetectedAisInteractives)
                {
                    _SketchEditorTool.Elements.Select(detectedObject);
                }

                Finished?.Invoke(this);
            }
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnKeyPressed(Key key)
        {
            if (key == Key.Delete)
            {
                var selectedCons = _SketchEditorTool.SelectedConstraints.ToArray();
                foreach (var constraint in selectedCons)
                {
                    _SketchEditorTool.Sketch.DeleteConstraint(constraint);
                }

                var selectedSegs = _SketchEditorTool.SelectedSegments.ToArray();
                foreach (var segment in selectedSegs)
                {
                    _SketchEditorTool.Sketch.DeleteSegment(segment);
                }

                var selectedPoints = _SketchEditorTool.SelectedPoints.ToArray();
                foreach (var point in selectedPoints)
                {
                    _SketchEditorTool.Sketch.DeletePoint(point);
                }

                CommitChanges();
                Finished?.Invoke(this);
                return true;
            }
            return base.OnKeyPressed(key);
        }

        //--------------------------------------------------------------------------------------------------

    }
}
