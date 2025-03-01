using System.Diagnostics;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class CreateExtrudeTool : Tool
{
    enum ToolMode
    {
        CreateNew,
        ReselectFace
    }

    //--------------------------------------------------------------------------------------------------

    readonly Body _TargetBody;
    readonly Shape _TargetShape;
    readonly Extrude _ExtrudeToChange;
    readonly ToolMode _Mode;

    //--------------------------------------------------------------------------------------------------

    public CreateExtrudeTool(Body targetBody)
    {
        _TargetBody = targetBody;
        _TargetShape = _TargetBody?.Shape;
        Debug.Assert(_TargetShape != null);

        _Mode = ToolMode.CreateNew;
    }

    //--------------------------------------------------------------------------------------------------

    public CreateExtrudeTool(Extrude extrudeToChange)
    {
        _ExtrudeToChange = extrudeToChange;
        Debug.Assert(_ExtrudeToChange != null);
        _TargetBody = _ExtrudeToChange.Body;
        Debug.Assert(_TargetBody != null);
        _TargetShape = _ExtrudeToChange.Operands[0] as Shape;
        Debug.Assert(_TargetShape != null);

        _Mode = ToolMode.ReselectFace;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        if (_TargetShape.ShapeType == ShapeType.Sketch)
        {
            var modifierShape = Extrude.Create(_TargetBody);
            if (modifierShape != null)
            {
                CommitChanges();
            }

            WorkspaceController.Invalidate();
            Stop();
            return false;
        }
        else
        {
            if (_Mode == ToolMode.ReselectFace)
            {
                OverrideVisualShape(_TargetBody, _TargetShape.GetTransformedBRep());
            }

            var toolAction = new SelectSubshapeAction(SubshapeTypes.Face, _TargetBody);
            if (!StartAction(toolAction))
                return false;
            toolAction.Finished += _ToolAction_Finished;

            SetHintMessage("__Select face__ to extrude.");
            SetCursor(Cursors.SelectFace);
            return true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Finished(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
    {
        bool finished = false;
        if (args.SelectedSubshapeType == SubshapeTypes.Face)
        {
            var face = args.SelectedSubshape.ToFace();
            StopAction(action);
            Stop();
            finished = true;
            var faceRef = _TargetShape.GetSubshapeReference(_TargetShape.GetTransformedBRep(), face);
            if (faceRef == null)
            {
                Messages.Error("A subshape reference could not be produced for this face.");
                return;
            }

            if (_Mode == ToolMode.CreateNew)
            {
                // Create new
                var extrude = Extrude.Create(_TargetBody, faceRef);
                if (extrude != null)
                {
                    CommitChanges();
                    WorkspaceController.Selection.SelectEntity(_TargetBody);
                }
            }
            else if (_Mode == ToolMode.ReselectFace)
            {
                // Reselected face
                _ExtrudeToChange.Face = faceRef;
                _ExtrudeToChange.Invalidate();
                CommitChanges();
            }

        }

        if (!finished)
        {
            action.Reset();
        }

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

}