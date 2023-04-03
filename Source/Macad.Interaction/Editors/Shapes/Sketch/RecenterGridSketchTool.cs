using System.Collections.Generic;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class RecenterGridSketchTool : SketchTool
    {
        SketchPointAction _PointAction;
        HintLine _HintLineH;
        HintLine _HintLineV;
        Marker _OriginMarker;

        //--------------------------------------------------------------------------------------------------

        protected override bool OnStart()
        {
            _PointAction = new SketchPointAction(SketchEditorTool);
            if (!StartAction(_PointAction))
            {
                return false;
            }

            _PointAction.EnablePointMerge = false;
            _PointAction.AdditionalSnapPoints = new List<Pnt2d> {Pnt2d.Origin};
            _PointAction.Preview += _PointAction_Preview;
            _PointAction.Finished += _PointAction_Finished;

            // Re-enable elements for snapping
            SketchEditorTool.Elements.Activate(true, false, false);

            SetHintMessage("Select new workspace center position.");
            SetCursor(Cursors.WorkingPlane);

            _OriginMarker = new Marker(WorkspaceController, Marker.Styles.Bitmap | Marker.Styles.Topmost, Marker.BallImage)
            {
                IsSelectable = true
            };
            _OriginMarker.Set(SketchEditorTool.Sketch.Plane.Location);
            _OriginMarker.Color = Quantity_NameOfColor.WHITE.ToColor();
            Add(_OriginMarker);

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _PointAction_Preview(SketchPointAction sender, SketchPointAction.EventArgs args)
        {
            var workingPlane = WorkspaceController.Workspace.WorkingPlane;
            var point = Sketch.Plane.Value(args.Point);

            _HintLineH ??= new HintLine(WorkspaceController, HintStyle.WorkingAxis);
            _HintLineH.Set(new Ax1(point, workingPlane.XAxis.Direction));
            Add(_HintLineH);

            _HintLineV ??= new HintLine(WorkspaceController, HintStyle.WorkingAxis);
            _HintLineV.Set(new Ax1(point, workingPlane.YAxis.Direction));
            Add(_HintLineV);
        }

        //--------------------------------------------------------------------------------------------------

        void _PointAction_Finished(SketchPointAction sender, SketchPointAction.EventArgs args)
        {
            var workingPlane = WorkspaceController.Workspace.WorkingPlane;
            workingPlane.Location = Sketch.Plane.Value(args.Point);
            WorkspaceController.Workspace.WorkingPlane = workingPlane;
            Stop();
        }

        //--------------------------------------------------------------------------------------------------

    }
}