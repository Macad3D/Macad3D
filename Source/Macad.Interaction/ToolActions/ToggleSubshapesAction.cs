using System.Collections.Generic;
using System.Linq;
using Macad.Core;
using Macad.Occt;

namespace Macad.Interaction;

public class ToggleSubshapesAction : ToolAction
{
    public class Subshape
    {
        public TopoDS_Shape Shape;
        public AIS_Shape AisShape;
        public bool IsSelected;
    }
        
    //--------------------------------------------------------------------------------------------------
        
    public class EventArgs
    {
        public Subshape ChangedSubshape { get; init; }
        public MouseEventData MouseEventData { get; init; }
    }

    public delegate void EventHandler(ToggleSubshapesAction sender, EventArgs args);
    public event EventHandler Finished;

    //--------------------------------------------------------------------------------------------------

    Subshape _ChangedSubshape;
    readonly List<Subshape> _Subshapes = new();
    Prs3d_Drawer _TopmostHighlightDrawer;

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        OpenSelectionContext(SelectionContext.Options.NewSelectedList);
        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        ClearSubshapes();
        Finished = null;
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    public void AddSubshape(TopoDS_Shape shape, Trsf trsf, bool isSelected)
    {
        var subshape = new Subshape()
        {
            Shape = shape,
            IsSelected = isSelected,
            AisShape = new AIS_Shape(shape)
        };

        //Debug.WriteLine(string.Format("Added component to sum: {0}", Subshapes.Count));

        subshape.AisShape.SetLocalTransformation(trsf);
        subshape.AisShape.SetColor((isSelected ? Colors.FilteredSubshapesHot : Colors.FilteredSubshapes).ToQuantityColor());
        subshape.AisShape.Attributes().WireAspect().SetWidth(4);
        subshape.AisShape.SetMaterial(new Graphic3d_MaterialAspect(Graphic3d_NameOfMaterial.Plastified));
        subshape.AisShape.SetPolygonOffsets(1, 0.999f, -5.0f);
        subshape.AisShape.SetZLayer(-2 /* Top */);

        if (_TopmostHighlightDrawer == null)
        {
            _TopmostHighlightDrawer = new Prs3d_Drawer();
            _TopmostHighlightDrawer.SetLink(WorkspaceController.AisContext.HighlightStyle(Prs3d_TypeOfHighlight.Dynamic));
            _TopmostHighlightDrawer.SetZLayer(-2 /* Top */);
            _TopmostHighlightDrawer.SetDisplayMode(1);
            _TopmostHighlightDrawer.SetColor(Colors.Highlight.ToQuantityColor());
        }
        subshape.AisShape.SetDynamicHilightAttributes(_TopmostHighlightDrawer);

        WorkspaceController.AisContext.Display(subshape.AisShape, false);
        WorkspaceController.AisContext.Activate(subshape.AisShape, 0, false);
        WorkspaceController.AisContext.SetSelectionSensitivity(subshape.AisShape, 0, 10);

        _Subshapes.Add(subshape);
    }

    //--------------------------------------------------------------------------------------------------

    public void ClearSubshapes()
    {
        foreach (var subshape in _Subshapes)
        {
            if (subshape.AisShape != null)
            {
                WorkspaceController.AisContext.Remove(subshape.AisShape, false);
            }
        }
        _Subshapes.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    void _ProcessMouseSelect(MouseEventData data)
    {
        foreach (var detected in data.DetectedElements)
        {
            if(detected.BrepShape == null)
                continue;

            var subshape = _Subshapes.FirstOrDefault(sh => sh.Shape.IsEqual(detected.BrepShape));
            if (subshape != null)
            {
                subshape.IsSelected = !subshape.IsSelected;
                subshape.AisShape.SetColor((subshape.IsSelected ? Colors.FilteredSubshapesHot : Colors.FilteredSubshapes).ToQuantityColor());
                _ChangedSubshape = subshape;

                EventArgs args = new()
                {
                    ChangedSubshape = _ChangedSubshape,
                    MouseEventData = data
                };
                Finished?.Invoke(this, args);
                data.Return.ForceReDetection = true;
                break;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseMove(MouseEventData data)
    {
        if (!IsFinished)
        {
            return base.OnMouseMove(data);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (!IsFinished)
        {
            _ProcessMouseSelect(data);
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}