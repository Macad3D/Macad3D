using System;
using System.Diagnostics;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Core.Topology;

namespace Macad.Interaction.Editors.Shapes;

public class CreateUnfoldSheetTool : Tool
{
    [Flags]
    public enum Flags
    {
        None = 0,
        ForceManualSelect = 1
    }

    //--------------------------------------------------------------------------------------------------

    readonly Body _TargetBody;
    readonly Flags _Flags;

    //--------------------------------------------------------------------------------------------------

    public CreateUnfoldSheetTool(Body targetBody, Flags flags = Flags.None) 
    {
        _TargetBody = targetBody;
        Debug.Assert(_TargetBody != null);
        _Flags = flags;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        if (!_Flags.HasFlag(Flags.ForceManualSelect)
            && UnfoldSheet.CanFindStartFace(_TargetBody.GetBRep()))
        {
            // Auto mode for start face can be used
            var unfoldSheet = UnfoldSheet.Create(_TargetBody);
            if (unfoldSheet != null)
            {
                Stop();
                CommitChanges();
                WorkspaceController.Selection.SelectEntity(_TargetBody);
                WorkspaceController.Invalidate();
                return false;
            }
        }

        var toolAction = new SelectSubshapeAction(SubshapeTypes.Face, _TargetBody, new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane));
        if (!StartAction(toolAction))
            return false;
        toolAction.Finished += _ToolAction_Finished;

        SetHintMessage("__Select start face__ for unfolding.");
        SetCursor(Cursors.SelectFace);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Finished(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
    {
        bool finished = false;
        if (args.SelectedSubshapeType == SubshapeTypes.Face)
        {
            var face = args.SelectedSubshape.ToFace();
            var brepAdaptor = new BRepAdaptor_Surface(face, true);
            if (brepAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Plane)
            {
                SetHintMessage("Selected face is not a plane type surface.");
            }
            else
            {
                StopAction(action);
                Stop();
                finished = true;

                // We have found a plane
                var startFaceRef = _TargetBody.Shape.GetSubshapeReference(_TargetBody.GetTransformedBRep(), face);
                var unfoldSheet = UnfoldSheet.Create(_TargetBody, startFaceRef);
                if (unfoldSheet != null)
                {
                    CommitChanges();
                    WorkspaceController.Selection.SelectEntity(_TargetBody);
                }
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