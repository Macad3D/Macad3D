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
        ModifierShape.PropertyChanged += _EdgeModifierBase_PropertyChanged;

        if (ModifierShape.Operands.Count == 0)
            return false;

        if (!UpdateActions())
            return false;

        WorkspaceController.Invalidate();

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnStop()
    {
        ModifierShape.PropertyChanged -= _EdgeModifierBase_PropertyChanged;
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
            StopAction(_ToggleAction);
            _ToggleAction = null;
        }
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

        if (!_UpdateShapeProperties())
            return false;

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

        if (ModifierShape.IsValid)
        {
            // Create all faces
            foreach (var contourEdge in ContourEdges)
            {
                foreach (var face in ModifierShape.GetCreatedFaces(contourEdge))
                {
                    _ToggleAction.AddSubshape(face, trsf, true);
                }
            }
        }
        else
        {
            // Create all source edges to be able to deselect
            foreach (var contourEdge in ContourEdges)
            {
                _ToggleAction.AddSubshape(contourEdge, trsf, true);
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
            if (!ModifierShape.IsValid && ContourEdges.ContainsSame(args.ChangedSubshape.Shape))
            {
                ModifierShape.RemoveEdge(reference);
            }
            else
            {
                ModifierShape.AddEdge(reference);
            } 
        }

        CommitChanges();
    }

    //--------------------------------------------------------------------------------------------------

    void _EdgeModifierBase_ShapeChanged(Shape shape)
    {
        if (shape == ModifierShape && _ToggleAction != null)
        {
            UpdateActions();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _EdgeModifierBase_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(EdgeModifierBase.HasErrors))
        {
            if (ModifierShape.HasErrors)
            {
                _UpdateShapeProperties();
                UpdateActions();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

}