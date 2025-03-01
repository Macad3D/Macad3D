using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction;

public class SelectSubshapeTool : Tool
{
    public delegate void SelectedFunc(SubshapeReference subshapeReferenceRef);

    //--------------------------------------------------------------------------------------------------

    readonly Body _TargetBody;
    readonly Shape _TargetShape;
    readonly SelectedFunc _SelectedFunc;
    readonly string _StatusText;
    readonly SubshapeType _SubshapeType;
    readonly ISelectionFilter _SelectionFilter;

    //--------------------------------------------------------------------------------------------------

    public SelectSubshapeTool(SubshapeType subshapeType, Shape shape, string id, string statusText, 
                              SelectedFunc selectedFunc, ISelectionFilter selectionFilter = null)
    {
        _SubshapeType = subshapeType;
        _TargetShape = shape;
        _TargetBody = shape.Body;
        _StatusText = statusText;
        _SelectionFilter = selectionFilter;
        Id = id;
        Debug.Assert(_TargetShape != null);
        _SelectedFunc = selectedFunc;
        Debug.Assert(_SelectedFunc != null);
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        if (_TargetShape != _TargetBody?.Shape)
        {
            OverrideVisualShape(_TargetBody, _TargetShape.GetTransformedBRep());
        }

        var toolAction = new SelectSubshapeAction(SubshapeTypeHelper.GetTypes(_SubshapeType), _TargetBody, _SelectionFilter);
        if (!StartAction(toolAction))
        {
            return false;
        }
        toolAction.Finished += _ToolAction_Finished;

        SetHintMessage(_StatusText);

        switch (_SubshapeType)
        {
            case SubshapeType.Vertex:
                SetCursor(Cursors.SelectVertex);
                break;
            case SubshapeType.Edge:
                SetCursor(Cursors.SelectEdge);
                break;
            case SubshapeType.Wire:
                SetCursor(Cursors.SelectWire);
                break;
            case SubshapeType.Face:
                SetCursor(Cursors.SelectFace);
                break;
        }
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
                WorkspaceController.HudManager?.SetHintMessage(this, "Selected face is not a plane type surface.");
            }

            finished = true;
        }

        if(finished)
        {
            var subshapeReference = _TargetShape.GetSubshapeReference(_TargetShape.GetTransformedBRep(), args.SelectedSubshape);
            StopAction(action);
            Stop();

            if (subshapeReference == null)
            {
                Messages.Error("A subshape reference could not be produced for this subshape.");
                return;
            }

            _SelectedFunc.Invoke(subshapeReference);
        }
        else
        {
            action.Reset();
        }

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------
        
    public override bool OnEntitySelectionChanging(IEnumerable<InteractiveEntity> entitiesToSelect, IEnumerable<InteractiveEntity> entitiesToUnSelect)
    {
        return entitiesToSelect.Any();
    }

    //--------------------------------------------------------------------------------------------------

}