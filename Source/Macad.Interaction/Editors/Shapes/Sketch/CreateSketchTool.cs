using System.Diagnostics;
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
        readonly Plane[] _DefaultPlanes = new Plane[3];

        //--------------------------------------------------------------------------------------------------

        public CreateSketchTool(CreateMode createMode = CreateMode.Interactive)
        {
            _InitialCreateMode = createMode;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(null, true);
            _SavedWorkingPlane = WorkspaceController.Workspace.WorkingPlane;

            if (_InitialCreateMode == CreateMode.Interactive)
            {
                _CreateDefaultPlanes();

                var selectionFilter = new OrSelectionFilter(new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane),
                                                            new SignatureSelectionFilter(VisualPlane.SelectionSignature));
                var toolAction = new SelectSubshapeAction(this, SubshapeTypes.Face, null, selectionFilter);
                if (!WorkspaceController.StartToolAction(toolAction))
                    return false;
                toolAction.Finished += _OnActionFinished;
                toolAction.Previewed += _OnActionPreviewed;

                StatusText = "Select face or plane to which the new sketch should be aligned.";
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

        public override void Stop()
        {
            if (WorkspaceController.Workspace.WorkingPlane != _SavedWorkingPlane)
            {
                WorkspaceController.Workspace.WorkingPlane = _SavedWorkingPlane;
            }

            for (var i = 0; i < _DefaultPlanes.Length; i++)
            {
                _DefaultPlanes[i]?.Remove();
                _DefaultPlanes[i] = null;
            }

            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------

        void _CreateDefaultPlanes()
        {
            var workingPlane = WorkspaceController.Workspace.WorkingPlane;

            _DefaultPlanes[0] = new Plane(WorkspaceController, Plane.Style.Topmost | Plane.Style.NoResize)
            {
                IsSelectable = true,
                Size = new XY(2,2),
                Margin = new Vec2d(1, 1),
                Color = Colors.ActionBlue
            };
            _DefaultPlanes[0].Set(workingPlane);

            _DefaultPlanes[1] = new Plane(WorkspaceController, Plane.Style.Topmost | Plane.Style.NoResize)
            {
                IsSelectable = true,
                Size = new XY(2,2),
                Margin = new Vec2d(1, 1),
                Color = Colors.ActionGreen
            };
            _DefaultPlanes[1].Set(new Pln(workingPlane.Location, workingPlane.YAxis.Direction));

            _DefaultPlanes[2] = new Plane(WorkspaceController, Plane.Style.Topmost | Plane.Style.NoResize)
            {
                IsSelectable = true,
                Size = new XY(2,2),
                Margin = new Vec2d(1, -1),
                Color = Colors.ActionRed
            };
            _DefaultPlanes[2].Set(new Pln(workingPlane.Location, workingPlane.XAxis.Direction));
        }

        //--------------------------------------------------------------------------------------------------

        bool _GetPlaneFromAction(SelectSubshapeAction selectAction)
        {
            if (selectAction.SelectedEntity is DatumPlane datumPlane)
            {
                _Plane = new Pln(datumPlane.GetCoordinateSystem());
                return true;
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
                    return true;
                }
            }
            else if (selectAction.SelectedAisObject != null)
            {
                if (selectAction.SelectedAisObject.Equals(_DefaultPlanes[0].AisObject))
                {
                    _Plane = _SavedWorkingPlane;
                    return true;
                }
                else if (selectAction.SelectedAisObject.Equals(_DefaultPlanes[1].AisObject))
                {
                    _Plane = new Pln(_SavedWorkingPlane.Location, _SavedWorkingPlane.YAxis.Direction.Reversed());
                    return true;
                }
                else if (selectAction.SelectedAisObject.Equals(_DefaultPlanes[2].AisObject))
                {
                    _Plane = new Pln(_SavedWorkingPlane.Location, _SavedWorkingPlane.XAxis.Direction.Reversed());
                    return true;
                }
            }

            return false;
        }

        //--------------------------------------------------------------------------------------------------
        
        void _OnActionPreviewed(ToolAction toolAction)
        {
            var selectAction = toolAction as SelectSubshapeAction;
            Debug.Assert(selectAction != null);

            WorkspaceController.Workspace.WorkingPlane = _GetPlaneFromAction(selectAction) ? _Plane : _SavedWorkingPlane;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            var selectAction = toolAction as SelectSubshapeAction;
            Debug.Assert(selectAction != null);

            if (_GetPlaneFromAction(selectAction))
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