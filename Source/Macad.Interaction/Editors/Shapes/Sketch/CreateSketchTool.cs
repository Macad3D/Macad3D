using System.Diagnostics;
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
        readonly Plane[] _DefaultPlanes = new Plane[3];

        //--------------------------------------------------------------------------------------------------

        public CreateSketchTool(CreateMode createMode = CreateMode.Interactive)
        {
            _InitialCreateMode = createMode;
        }

        //--------------------------------------------------------------------------------------------------

        protected override bool OnStart()
        {
            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(null);
            _SavedWorkingPlane = WorkspaceController.Workspace.WorkingPlane;

            if (_InitialCreateMode == CreateMode.Interactive)
            {
                _CreateDefaultPlanes();

                var selectionFilter = new OrSelectionFilter(new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane),
                                                            new SignatureSelectionFilter(VisualPlane.SelectionSignature));
                var toolAction = new SelectSubshapeAction(this, SubshapeTypes.Face, null, selectionFilter);
                if (!StartAction(toolAction))
                    return false;
                toolAction.Finished += _ToolAction_Finished;
                toolAction.Preview += ToolActionPreview;

                SetHintMessage("Select face or plane to which the new sketch should be aligned.");
                SetCursor(Cursors.SelectFace);
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

        protected override void OnStop()
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
            _DefaultPlanes[1].Set(new Pln(new Ax3(workingPlane.Location, workingPlane.YAxis.Direction, workingPlane.Axis.Direction)));

            _DefaultPlanes[2] = new Plane(WorkspaceController, Plane.Style.Topmost | Plane.Style.NoResize)
            {
                IsSelectable = true,
                Size = new XY(2,2),
                Margin = new Vec2d(1, -1),
                Color = Colors.ActionRed
            };
            _DefaultPlanes[2].Set(new Pln(new Ax3(workingPlane.Location, workingPlane.XAxis.Direction, workingPlane.Axis.Direction)));
        }

        //--------------------------------------------------------------------------------------------------

        bool _GetPlaneFromAction(SelectSubshapeAction.EventArgs args)
        {
            if (args.SelectedEntity is DatumPlane datumPlane)
            {
                _Plane = new Pln(datumPlane.GetCoordinateSystem());
                return true;
            }
            else if (args.SelectedSubshapeType == SubshapeTypes.Face)
            {
                var face = TopoDS.Face(args.SelectedSubshape);
                var brepAdaptor = new BRepAdaptor_Surface(face, true);
                if (brepAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Plane)
                {
                    SetHintMessage("Selected face is not a plane type surface.");
                }
                else
                {
                    FaceAlgo.GetCenteredPlaneFromFace(face, out _Plane);
                    return true;
                }
            }
            else if (args.SelectedAisObject != null)
            {
                if (args.SelectedAisObject.Equals(_DefaultPlanes[0].AisObject))
                {
                    _Plane = _SavedWorkingPlane;
                }
                else if (args.SelectedAisObject.Equals(_DefaultPlanes[1].AisObject))
                {
                    _Plane = new Pln(new Ax3(_SavedWorkingPlane.Location, _SavedWorkingPlane.YAxis.Direction.Reversed(), _SavedWorkingPlane.XAxis.Direction));
                }
                else if (args.SelectedAisObject.Equals(_DefaultPlanes[2].AisObject))
                {
                    _Plane = new Pln(new Ax3(_SavedWorkingPlane.Location, _SavedWorkingPlane.XAxis.Direction, _SavedWorkingPlane.YAxis.Direction));
                }
                else
                {
                    return false;
                }

                bool flip = !args.MouseEventData.PickAxis.IsOpposite(_Plane.Axis, Maths.HalfPI);
                if (flip)
                {
                    _Plane = new Pln(new Ax3(_Plane.Location, _Plane.Axis.Direction.Reversed(), _Plane.XAxis.Direction.Reversed()));
                }

                return true;
            }

            return false;
        }

        //--------------------------------------------------------------------------------------------------
        
        void ToolActionPreview(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
        {
            WorkspaceController.Workspace.WorkingPlane = _GetPlaneFromAction(args) ? _Plane : _SavedWorkingPlane;
        }

        //--------------------------------------------------------------------------------------------------

        void _ToolAction_Finished(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
        {
            if (_GetPlaneFromAction(args))
            {
                StopAction(action);
                Stop();
                CreateSketch();
            }
            else
            {
                action.Reset();
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