using System.Diagnostics;
using System.Linq;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public abstract class EdgeModifierTool : Tool
{
    protected readonly EdgeModifierBase ModifierShape;
    protected TopoDS_Shape EdgeSourceShape;
    protected TopoDS_Edge[] ContourEdges;
    protected TopoDS_Edge[] ValidEdges;

    ToggleSubshapesAction _ToggleAction;

    //--------------------------------------------------------------------------------------------------

    protected EdgeModifierTool(EdgeModifierBase modifierShape)
    {
        ModifierShape = modifierShape;
        Debug.Assert(ModifierShape != null);
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        Shape.ShapeChanged += _EdgeModifierBase_ShapeChanged;

        if (ModifierShape.Operands.Count == 0)
            return false;

        if (!_UpdateShapeProperties() || !UpdateActions())
            return false;

        WorkspaceController.Invalidate();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnStop()
    {
        Shape.ShapeChanged -= _EdgeModifierBase_ShapeChanged;
        _StopAction();
        base.OnStop();
    }

    //--------------------------------------------------------------------------------------------------

    void _StopAction()
    {
        if (_ToggleAction != null)
        {
            _ToggleAction.Finished -= _ToggleAction_Finished;
        }
        StopAction(_ToggleAction);
    }

    //--------------------------------------------------------------------------------------------------

    bool _UpdateShapeProperties()
    {
        ContourEdges = null;
        ValidEdges = null;

        var sourceShape = ModifierShape.Predecessor as Shape;
        EdgeSourceShape = sourceShape?.GetBRep(); 
        if (EdgeSourceShape == null) return false;

        ContourEdges = ModifierShape.GetAllContourEdges().ToArray();
        ValidEdges = ModifierShape.FindValidEdges(EdgeSourceShape).ToArray();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool UpdateActions()
    {
        _StopAction();

        _ToggleAction = new ToggleSubshapesAction();
        if (!StartAction(_ToggleAction, true))
            return false;
        _ToggleAction.Finished += _ToggleAction_Finished;
            
        // Create all edges
        var trsf = ModifierShape.GetTransformation();
        foreach (var edge in ValidEdges)
        {
            if (ContourEdges.Any(sel => sel.IsSame(edge)))
                continue;

            _ToggleAction.AddSubshape(edge, trsf, false);
        }

        // Create all faces
        foreach (var contourEdge in ContourEdges)
        {
            foreach (var face in ModifierShape.GetCreatedFaces(contourEdge))
            {
                _ToggleAction.AddSubshape(face, trsf, true);
            }
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _ToggleAction_Finished(ToggleSubshapesAction sender, ToggleSubshapesAction.EventArgs args)
    {
        var sourceShape = ModifierShape.Predecessor as Shape;
        if (sourceShape == null) return;

        if (args.ChangedSubshape.Shape.ShapeType() == TopAbs_ShapeEnum.FACE)
        {
            // Removed, find reference in original contour
            var reference = ModifierShape.FindContourReference(args.ChangedSubshape.Shape.ToFace());
            if (reference == null) return;
            ModifierShape.RemoveEdge(reference);
        }
        else if (args.ChangedSubshape.Shape.ShapeType() == TopAbs_ShapeEnum.EDGE)
        {
            // Added, find reference in original shape (modified edges are automatically mapped)
            var reference = ModifierShape.GetSubshapeReference(args.ChangedSubshape.Shape);
            if (reference == null) return;
            ModifierShape.AddEdge(reference);
        }

        CommitChanges();
    }

    //--------------------------------------------------------------------------------------------------

    void _EdgeModifierBase_ShapeChanged(Shape shape)
    {
        if (shape == ModifierShape 
            && _ToggleAction != null 
            && WorkspaceController.CurrentTool?.CurrentAction == _ToggleAction)
        {
            if (_UpdateShapeProperties())
            {
                UpdateActions();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

}