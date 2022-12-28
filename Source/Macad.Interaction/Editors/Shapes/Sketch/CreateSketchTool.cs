﻿using System.Diagnostics;
using Macad.Common;
using Macad.Core;
using Macad.Core.Auxiliary;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
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
            WorkplaneYZ,
        }

        //--------------------------------------------------------------------------------------------------

        readonly CreateMode _InitialCreateMode;
        Pln _Plane = Pln.XOY;
        Pln _SavedWorkingPlane;

        //--------------------------------------------------------------------------------------------------

        public CreateSketchTool(CreateMode createMode = CreateMode.Interactive)
        {
            _InitialCreateMode = createMode;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(null);
            _SavedWorkingPlane = WorkspaceController.Workspace.WorkingPlane;

            if (_InitialCreateMode == CreateMode.Interactive)
            {
                var selectionFilter = new OrSelectionFilter(new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane),
                                                            new SignatureSelectionFilter(VisualPlane.SelectionSignature));
                var toolAction = new SelectSubshapeAction(this, SubshapeTypes.Face, null, selectionFilter);
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
                    _Plane = _SavedWorkingPlane;
                    break;

                case CreateMode.WorkplaneXZ:
                    _Plane =new Pln(new Ax3(_SavedWorkingPlane.Location, _SavedWorkingPlane.YAxis.Direction.Reversed(), _SavedWorkingPlane.XAxis.Direction));
                    break;

                case CreateMode.WorkplaneYZ:
                    _Plane = new Pln(new Ax3(_SavedWorkingPlane.Location, _SavedWorkingPlane.XAxis.Direction, _SavedWorkingPlane.YAxis.Direction));
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

            if (selectAction.SelectedEntity is DatumPlane datumPlane)
            {
                _Plane = new Pln(datumPlane.GetCoordinateSystem());
                finished = true;
            }
            else if (selectAction.SelectedSubshapeType == SubshapeTypes.Face)
            {
                var face = TopoDS.Face(selectAction.SelectedSubshape);
                var brepAdaptor = new BRepAdaptor_Surface(face, true);
                if (brepAdaptor.GetGeomType() != GeomAbs_SurfaceType.GeomAbs_Plane)
                {
                    StatusText = "Selected face is not a plane type surface.";
                }
                else
                {
                    FaceAlgo.GetCenteredPlaneFromFace(face, out _Plane);
                    finished = true;
                }
            }

            if (finished)
            {
                selectAction.Stop();
                Stop();
                CreateSketch();
            }
            else
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
            InteractiveContext.Current.Document.Add(body);
            InteractiveContext.Current.UndoHandler.Commit();

            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(body);
            WorkspaceController.StartTool(new SketchEditorTool(sketch));
        }

        //--------------------------------------------------------------------------------------------------
    }
}