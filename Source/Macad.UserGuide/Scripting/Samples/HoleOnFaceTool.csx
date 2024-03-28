using System.Linq;
using Macad.Interaction;

// Get selected body
var body = Selection.SelectedEntities.FirstOrDefault() as Body;
if (body == null)
{
    Messages.Error("Please select a body.");
    return;
}

// Start Tool
WorkspaceController.StartTool(new HoleOnFaceTool(body));


//--------------------------------------------------------------------------------------------------
// Tool for creating a hole on a face
//--------------------------------------------------------------------------------------------------
public class HoleOnFaceTool : Tool
{
    readonly Body _TargetBody;

    // C'tor to init with target body
    public HoleOnFaceTool(Body targetBody)
    {
        _TargetBody = targetBody;
    }

    // Start is called when the tool gets started
    protected override bool OnStart()
    {
        // Initialize ToolAction to select subshape from type Face
        var toolAction = new SelectSubshapeAction(SubshapeTypes.Face, _TargetBody);
        if (!StartAction(toolAction))
        {
            return false;
        }
        toolAction.Finished += _OnActionFinished;

        // Set some UI hints
        SetHintMessage("__Select face.__");
        SetCursor(Cursors.SelectFace);
        return true;
    }

    // _OnActionFinished is called by the ToolAction when a face has been selected
    void _OnActionFinished(SelectSubshapeAction toolAction, SelectSubshapeAction.EventArgs args)
    {
        if (args.SelectedSubshapeType == SubshapeTypes.Face)
        {
            // Stop Tool
            Stop();

            // Create face reference
            var faceRef = _TargetBody.Shape.GetSubshapeReference(_TargetBody.Shape.GetTransformedBRep(), args.SelectedSubshape);
            if (faceRef == null)
            {
                Messages.Error("A subshape reference could not be produced for this face.");
                return;
            }

            // Create imprint
            var imprint = Imprint.Create(_TargetBody, faceRef);
            imprint.Mode = Imprint.ImprintMode.Cutout;

            // Fill sketch
            var sketch = imprint.Operands[1] as Sketch;
            sketch.Points.Add(0, new Pnt2d(0.0, 0.0));
            sketch.Points.Add(1, new Pnt2d(0.0, 0.5));
            sketch.Segments.Add(0, new SketchSegmentCircle(0, 1));

            // Commit changes manually
            CommitChanges();
        }
    }
}