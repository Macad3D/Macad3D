using System.Diagnostics;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class CreateImprintTool : Tool
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
    TopoDS_Shape _TargetBrep;
    readonly Imprint.ImprintMode _ImprintMode;

    readonly Imprint _ImprintToChange;

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Create a new imprint by selecting a target face.
    /// </summary>
    public CreateImprintTool(Body targetBody, Imprint.ImprintMode initialMode = Imprint.ImprintMode.Default) 
    {
        _TargetBody = targetBody;
        _TargetShape = _TargetBody?.Shape;
        Debug.Assert(_TargetShape != null);

        _ImprintMode = initialMode;
        if (_ImprintMode == Imprint.ImprintMode.Default)
            _ImprintMode = Imprint.ImprintMode.Raise;

        _Mode = ToolMode.CreateNew;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Reselect target face of an imprint shape.
    /// </summary>
    public CreateImprintTool(Imprint imprintToChange)
    {
        _ImprintToChange = imprintToChange;
        Debug.Assert(_ImprintToChange != null);
        _TargetBody = _ImprintToChange.Body;
        Debug.Assert(_TargetBody != null);
        _TargetShape = _ImprintToChange.Operands[0] as Shape;
        Debug.Assert(_TargetShape != null);

        _Mode = ToolMode.ReselectFace;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        _TargetBrep = _TargetShape.GetTransformedBRep();
        if (_TargetBrep == null)
            return false;
            
        if (_Mode == ToolMode.ReselectFace)
        {
            OverrideVisualShape(_TargetBody, _TargetBrep);
        }

        var toolAction = new SelectSubshapeAction(SubshapeTypes.Face, _TargetBody, new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane));
        if (!StartAction(toolAction))
            return false;
        toolAction.Finished += _ToolAction_Finished;

        SetHintMessage("__Select face__ to imprint.");
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
                var faceRef = _TargetShape.GetSubshapeReference(_TargetBrep, face);
                if (faceRef == null)
                {
                    Messages.Error("A subshape reference could not be produced for this face.");
                    return;
                }

                if (_Mode == ToolMode.CreateNew)
                {
                    // Create new
                    var sketch = new Sketch
                    {
                        Body = _TargetBody,
                    };

                    var imprint = Imprint.Create(_TargetBody, faceRef, sketch);
                    if (imprint != null)
                    {
                        imprint.Mode = _ImprintMode;
                        CommitChanges();
                        WorkspaceController.Selection.SelectEntity(_TargetBody);
                        WorkspaceController.StartTool(new SketchEditorTool(sketch));
                    }
                }
                else if(_Mode == ToolMode.ReselectFace)
                {
                    // Reselected face
                    _ImprintToChange.Face = faceRef;
                    _ImprintToChange.Invalidate();
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