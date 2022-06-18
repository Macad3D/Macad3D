using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Windows.Input;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;

namespace Macad.Interaction
{
    public sealed class SelectSketchElementAction : ToolAction
    {
        readonly SketchEditorTool _SketchEditorTool;

        //--------------------------------------------------------------------------------------------------

        public SelectSketchElementAction(SketchEditorTool sketchEditorTool) 
            : base(sketchEditorTool)
        {
            _SketchEditorTool = sketchEditorTool;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            return _SketchEditorTool != null;
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

        public override bool OnMouseUp(MouseEventData data, bool additive)
        {
            if (!IsFinished)
            {
                if (!additive)
                {
                    _SketchEditorTool.Elements.DeselectAll();
                }

                foreach (var detectedObject in data.DetectedAisInteractives)
                {
                    _SketchEditorTool.Elements.Select(detectedObject);
                }

                RaiseFinished();
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

                InteractiveContext.Current.UndoHandler.Commit();

                RaiseFinished();
                return true;
            }
            return base.OnKeyPressed(key);
        }

        //--------------------------------------------------------------------------------------------------

    }
}
