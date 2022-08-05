using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class RecenterGridSketchTool : ISketchTool
    {
        SketchPointAction _PointAction;
        SketchEditorTool _SketchEditorTool;
        HintLine _HintLineH;
        HintLine _HintLineV;
        Marker _OriginMarker;

        //--------------------------------------------------------------------------------------------------

        public bool Start(SketchEditorTool sketchEditorTool)
        {
            _SketchEditorTool = sketchEditorTool;

            _PointAction = new SketchPointAction(_SketchEditorTool);
            if (!_SketchEditorTool.WorkspaceController.StartToolAction(_PointAction, false))
            {
                return false;
            }

            _PointAction.EnablePointMerge = false;
            _PointAction.AdditionalSnapPoints = new List<Pnt2d> {Pnt2d.Origin};
            _PointAction.Previewed += _PointAction_Previewed;
            _PointAction.Finished += _PointAction_OnFinished;

            // Re-enable elements for snapping
            _SketchEditorTool.Elements.Activate(true, false, false);

            _SketchEditorTool.WorkspaceController.HudManager?.SetHintMessage(this, "Select new workspace center position.");
            _SketchEditorTool.WorkspaceController.HudManager?.SetCursor(Cursors.WorkingPlane);

            _OriginMarker = new Marker(_SketchEditorTool.WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, Marker.BallImage)
            {
                IsSelectable = true
            };
            _OriginMarker.Set(_SketchEditorTool.Sketch.Plane.Location);
            _OriginMarker.Color = Quantity_NameOfColor.Quantity_NOC_WHITE.ToColor();

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _PointAction_Previewed(ToolAction toolAction)
        {
            var workingPlane = _SketchEditorTool.WorkspaceController.Workspace.WorkingPlane;
            var point = _SketchEditorTool.Sketch.Plane.Value(_PointAction.Point);

            _HintLineH ??= new HintLine(_SketchEditorTool.WorkspaceController, HintStyle.WorkingAxis);
            _HintLineH.Set(new Ax1(point, workingPlane.XAxis.Direction));

            _HintLineV ??= new HintLine(_SketchEditorTool.WorkspaceController, HintStyle.WorkingAxis);
            _HintLineV.Set(new Ax1(point, workingPlane.YAxis.Direction));
        }

        //--------------------------------------------------------------------------------------------------

        void _PointAction_OnFinished(ToolAction toolaction)
        {
            var workingPlane = _SketchEditorTool.WorkspaceController.Workspace.WorkingPlane;
            workingPlane.Location = _SketchEditorTool.Sketch.Plane.Value(_PointAction.Point);
            _SketchEditorTool.WorkspaceController.Workspace.WorkingPlane = workingPlane;
            _SketchEditorTool.StopTool();
        }

        //--------------------------------------------------------------------------------------------------

        public void Stop()
        {
            _PointAction?.Cancel(true);
            _SketchEditorTool.WorkspaceController.HudManager?.SetCursor(null);
            _HintLineH?.Remove();
            _HintLineV?.Remove();
            _OriginMarker?.Remove();

            _SketchEditorTool.WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

    }
}