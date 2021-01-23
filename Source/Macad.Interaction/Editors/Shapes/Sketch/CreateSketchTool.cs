using System.Diagnostics;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class CreateSketchTool : Tool
    {
        public enum CreateMode
        {
            Interactive,
            WorkplaneXY,
            WorkplaneXZ,
            WorkplaneYZ
        }

        //--------------------------------------------------------------------------------------------------

        readonly CreateMode _InitialCreateMode;
        Pln _Plane = Pln.XOY;

        //--------------------------------------------------------------------------------------------------

        public CreateSketchTool(CreateMode createMode = CreateMode.Interactive)
        {
            _InitialCreateMode = createMode;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(null, true);

            if (_InitialCreateMode == CreateMode.Interactive)
            {

                var toolAction = new SelectSubshapeAction(this, SubshapeTypes.Face, null, new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane));
                if (!WorkspaceController.StartToolAction(toolAction))
                    return false;
                toolAction.Finished += _OnActionFinished;

                StatusText = "Select face to which the new sketch should be aligned.";
                WorkspaceController.HudManager?.SetCursor(Cursors.SelectFace);
                return true;
            }

            switch (_InitialCreateMode)
            {
                case CreateMode.WorkplaneXY:
                    _Plane = InteractiveContext.Current.Workspace.WorkingPlane;
                    break;

                case CreateMode.WorkplaneXZ:
                    _Plane = new Pln(InteractiveContext.Current.Workspace.WorkingPlane.Location, 
                        InteractiveContext.Current.Workspace.WorkingPlane.YAxis.Direction.Reversed());
                    break;

                case CreateMode.WorkplaneYZ:
                    _Plane = new Pln(InteractiveContext.Current.Workspace.WorkingPlane.Location,
                        InteractiveContext.Current.Workspace.WorkingPlane.XAxis.Direction.Reversed());
                    break;
            }

            Stop();
            CreateSketch();
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            bool finished = false;
            var selectAction = toolAction as SelectSubshapeAction;
            Debug.Assert(selectAction != null);

            if (selectAction.SelectedSubshapeType == SubshapeTypes.Face)
            {
                var face = TopoDS.Face(selectAction.SelectedSubshape);
                var brepAdaptor = new BRepAdaptor_Surface(face, true);
                if (brepAdaptor.GetGeomType() != GeomAbs_SurfaceType.GeomAbs_Plane)
                {
                    StatusText = "Selected face is not a plane type surface.";
                }
                else
                {
                    selectAction.Stop();
                    Stop();
                    finished = true;

                    FaceAlgo.GetCenteredPlaneFromFace(face, out _Plane);
                    CreateSketch();
                }
            }

            if (!finished)
            {
                selectAction.Reset();
            }

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        void CreateSketch()
        {
            var sketch = new Sketch();
            var body = Body.Create(sketch);
            body.Position = _Plane.Location;
            body.Rotation = _Plane.Rotation();
            InteractiveContext.Current.Document.AddChild(body);
            InteractiveContext.Current.UndoHandler.Commit();

            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(body);
            WorkspaceController.StartTool(new SketchEditorTool(sketch));
        }

        //--------------------------------------------------------------------------------------------------

    }
}