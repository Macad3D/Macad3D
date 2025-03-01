using System.Diagnostics;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class CreateMirrorTool : Tool
{
    enum ToolMode
    {
        CreateNew,
        Reselect
    }

    //--------------------------------------------------------------------------------------------------

    readonly ToolMode _Mode;
    Trihedron _DefaultPlanes;

    readonly Body _TargetBody;
    readonly Shape _TargetShape;

    readonly Mirror _ModifierToChange;

    //--------------------------------------------------------------------------------------------------

    public CreateMirrorTool(Body targetBody)
    {
        _TargetBody = targetBody;
        _TargetShape = _TargetBody?.Shape;
        Debug.Assert(_TargetBody != null);

        _Mode = ToolMode.CreateNew;
    }
        
    //--------------------------------------------------------------------------------------------------

    public CreateMirrorTool(Mirror modifierToChange)
    {
        _ModifierToChange = modifierToChange;
        Debug.Assert(_ModifierToChange != null);
        _TargetBody = _ModifierToChange.Body;
        Debug.Assert(_TargetBody != null);
        _TargetShape = _ModifierToChange.Operands[0] as Shape;
        Debug.Assert(_TargetShape != null);

        _Mode = ToolMode.Reselect;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        if (_Mode == ToolMode.Reselect)
        {
            OverrideVisualShape(_TargetBody, _TargetShape.GetTransformedBRep());
        }

        SelectSubshapeAction toolAction;
        switch (_TargetShape.ShapeType)
        {
            case ShapeType.Sketch:
                toolAction = new SelectSubshapeAction(SubshapeTypes.Edge, _TargetBody);
                SetHintMessage("__Select edge__ as reference for the mirror axis.");
                SetCursor(Cursors.SelectEdge);
                break;

            case ShapeType.Solid:
                _DefaultPlanes = new(WorkspaceController, WorkspaceController.Workspace.WorkingPlane.Position, Trihedron.Components.Planes);
                Add(_DefaultPlanes);
                var selectionFilter = new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane)
                    .Or(_DefaultPlanes.GetSelectionFilter());
                toolAction = new SelectSubshapeAction(SubshapeTypes.Face, _TargetBody, selectionFilter);
                SetHintMessage("__Select plane or face__ as reference for the mirror plane.");
                SetCursor(Cursors.SelectFace);
                break;

            default:
                Messages.Error("MultiplyMirror works only on sketch or solid.");
                return false;
        }
           
        if (!StartAction(toolAction))
            return false;
        toolAction.Finished += _ToolAction_Finished;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _ToolAction_Finished_DefaultPlane(SelectSubshapeAction.EventArgs args)
    {
        var coordinateSystem = _DefaultPlanes?.GetCoordinateSystem(args.SelectedAisObject);
        if (coordinateSystem == null)
            return false;
        var bodySpaceCS = coordinateSystem.Value.Transformed(_TargetBody.GetTransformation().Inverted());

        if (_Mode == ToolMode.CreateNew)
        {
            var mirror = Mirror.Create(_TargetBody, bodySpaceCS.ToAx2());
            if (mirror != null)
            {
                CommitChanges();
            }
        }
        else if (_Mode == ToolMode.Reselect)
        {
            // Reselected face or edge
            _ModifierToChange.Mode = Mirror.MirrorMode.Axis;
            _ModifierToChange.MirrorAxis = bodySpaceCS.ToAx2();
            _ModifierToChange.Invalidate();
            CommitChanges();
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _ToolAction_Finished_Subshape(SelectSubshapeAction.EventArgs args)
    {
        SubshapeReference subshapeRef = null;
        switch (_TargetShape.ShapeType)
        {
            case ShapeType.Sketch:
                if (args.SelectedSubshapeType == SubshapeTypes.Edge)
                {
                    subshapeRef = _TargetShape.GetSubshapeReference(_TargetShape.GetTransformedBRep(), args.SelectedSubshape.ToEdge());
                }
                break;

            case ShapeType.Solid:
                if (args.SelectedSubshapeType == SubshapeTypes.Face)
                {
                    subshapeRef = _TargetShape.GetSubshapeReference(_TargetShape.GetTransformedBRep(), args.SelectedSubshape.ToFace());
                }
                break;

            default:
                return false;
        }
        if (_Mode == ToolMode.CreateNew)
        {
            var mirror = Mirror.Create(_TargetBody, subshapeRef);
            if (mirror != null)
            {
                CommitChanges();
            }
        }
        else if (_Mode == ToolMode.Reselect)
        {
            // Reselected face or edge
            _ModifierToChange.Mode = Mirror.MirrorMode.EdgeOrFace;
            _ModifierToChange.ReferenceShape = subshapeRef;
            _ModifierToChange.Invalidate();
            CommitChanges();
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Finished(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
    {
        if (_ToolAction_Finished_DefaultPlane(args)
            || _ToolAction_Finished_Subshape(args))
        {
            StopAction(action);
            Stop();
        }
        else
        {
            action.Reset();
        }

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

}