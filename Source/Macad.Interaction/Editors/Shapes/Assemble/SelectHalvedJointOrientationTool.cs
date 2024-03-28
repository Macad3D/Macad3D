using System.Collections.Generic;
using System.Linq;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class SelectHalvedJointOrientationTool : Tool
{
    readonly HalvedJoint _TargetShape;

    //--------------------------------------------------------------------------------------------------

    public SelectHalvedJointOrientationTool(HalvedJoint targetShape)
    {
        _TargetShape = targetShape;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        var candidates = _TargetShape.GetOrientationCandidates();
        List<TopoDS_Shape> faces = null;
        if (candidates.Length != 0)
        {
            faces = candidates.SelectMany(candFaces => candFaces)
                              .Cast<TopoDS_Shape>()
                              .ToList();
        }

        if(faces == null || faces.Count == 0)
        {
            return false;
        }

        var action = new SelectSubshapeAction(faces, _TargetShape.GetTransformation());
        action.Finished += _Action_OnFinished;
        StartAction(action);
        SetCursor(Cursors.SelectFace);
        SetHintMessage("__Select side__ to define orientation and direction of the half-cut.");

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _Action_OnFinished(SelectSubshapeAction sender, SelectSubshapeAction.EventArgs args)
    {
        if (args.SelectedSubshapeType == SubshapeTypes.Face
            && args.SelectedSubshape != null)
        {
            var face = args.SelectedSubshape.ToFace();
            _TargetShape.SetOrientationReference(face);
            Stop();
        }
    }

    //--------------------------------------------------------------------------------------------------

}