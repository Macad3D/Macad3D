using System.Diagnostics;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class CreateFlangeSheetTool : Tool
{
    enum ToolMode
    {
        CreateNew,
        ReselectFace
    }

    //--------------------------------------------------------------------------------------------------

    readonly ToolMode _Mode;

    readonly Body _TargetBody;
    readonly Shape _TargetShape;
        
    readonly FlangeSheet _FlangeToChange;

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Create a new flange by selecting a target face.
    /// </summary>
    public CreateFlangeSheetTool(Body targetBody) 
    {
        _TargetBody = targetBody;
        _TargetShape = _TargetBody?.Shape;
        Debug.Assert(_TargetShape != null);
    }
        
    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Reselect target face of an flange shape.
    /// </summary>
    public CreateFlangeSheetTool(FlangeSheet flangeToChange)
    {
        _FlangeToChange = flangeToChange;
        Debug.Assert(_FlangeToChange != null);
        _TargetBody = _FlangeToChange.Body;
        Debug.Assert(_TargetBody != null);
        _TargetShape = _FlangeToChange.Operands[0] as Shape;
        Debug.Assert(_TargetShape != null);

        _Mode = ToolMode.ReselectFace;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        if (_Mode == ToolMode.ReselectFace)
        {
            OverrideVisualShape(_TargetBody, _TargetShape.GetTransformedBRep());
        }

        var toolAction = new SelectSubshapeAction(SubshapeTypes.Face, _TargetBody, new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane));
        if (!StartAction(toolAction))
        {
            return false;
        }
        toolAction.Finished += _ToolAction_Finished;

        SetHintMessage("__Select face__ to create flange to.");
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

                var faceRef = _TargetShape.GetSubshapeReference(_TargetShape.GetTransformedBRep(), face);
                if (faceRef == null)
                {
                    Messages.Error("A subshape reference could not be produced for this face.");
                    return;
                }

                if (_Mode == ToolMode.CreateNew)
                {
                    // Create new
                    var flangeSheet = FlangeSheet.Create(_TargetBody, faceRef);
                    if (flangeSheet != null)
                    {
                        CommitChanges();
                        WorkspaceController.Selection.SelectEntity(_TargetBody);
                    }
                }
                else if(_Mode == ToolMode.ReselectFace)
                {
                    // Reselected face
                    _FlangeToChange.Face = faceRef;
                    _FlangeToChange.Invalidate();
                    CommitChanges();
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