using Macad.Common;
using Macad.Core;
using Macad.Core.Auxiliary;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

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
    Trihedron _DefaultPlanes;

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
            _DefaultPlanes = new(WorkspaceController, _SavedWorkingPlane.Position, Trihedron.Components.Planes);
            Add(_DefaultPlanes);
            var selectionFilter = new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane)
                .Or(new SignatureSelectionFilter(VisualPlane.SelectionSignature));
            var toolAction = new SelectSubshapeAction(SubshapeTypes.Face, null, selectionFilter);
            if (!StartAction(toolAction))
                return false;
            toolAction.Finished += _ToolAction_Finished;
            toolAction.Preview += _ToolActionPreview;

            SetHintMessage("__Select face or plane__ to which the new sketch should be aligned.");
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
        _CreateSketch();
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        if (WorkspaceController.Workspace.WorkingPlane != _SavedWorkingPlane)
        {
            WorkspaceController.Workspace.WorkingPlane = _SavedWorkingPlane;
        }

        base.Cleanup();
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
            var face = args.SelectedSubshape.ToFace();
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
            switch(_DefaultPlanes.GetComponent(args.SelectedAisObject))
            {
                case Trihedron.Components.PlaneXY:
                    _Plane = _SavedWorkingPlane;
                    break;
                case Trihedron.Components.PlaneZX:
                    _Plane = new Pln(new Ax3(_SavedWorkingPlane.Location, _SavedWorkingPlane.YAxis.Direction.Reversed(), _SavedWorkingPlane.XAxis.Direction));
                    break;
                case Trihedron.Components.PlaneYZ:
                    _Plane = new Pln(new Ax3(_SavedWorkingPlane.Location, _SavedWorkingPlane.XAxis.Direction, _SavedWorkingPlane.YAxis.Direction));
                    break;
                default:
                    return false;
            };

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
        
    void _ToolActionPreview(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
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
            _CreateSketch();
        }
        else
        {
            action.Reset();
        }

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateSketch()
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