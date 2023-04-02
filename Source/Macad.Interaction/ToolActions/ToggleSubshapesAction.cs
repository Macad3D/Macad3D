using System.Collections.Generic;
using System.Linq;
using Macad.Core;
using Macad.Occt;

namespace Macad.Interaction
{
    public class ToggleSubshapesAction : ToolAction
    {
        public class Subshape
        {
            public TopoDS_Shape Shape;
            public AIS_Shape AisShape;
            public bool IsSelected;
            public int RefId;
        }

        //--------------------------------------------------------------------------------------------------

        public List<Subshape> Subshapes { get; } = new();
        public Subshape ChangedSubshape { get; private set; }

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
            base.Cleanup();
        }

        //--------------------------------------------------------------------------------------------------

        public void AddSubshape(TopoDS_Shape shape, Trsf trsf, bool isSelected, int refId)
        {
            var subshape = new Subshape()
            {
                Shape = shape,
                IsSelected = isSelected,
                AisShape = new AIS_Shape(shape),
                RefId = refId
            };

            //Debug.WriteLine(string.Format("Added component to sum: {0}", Subshapes.Count));

            subshape.AisShape.SetLocalTransformation(trsf);
            subshape.AisShape.SetColor(isSelected ? Colors.FilteredSubshapesHot : Colors.FilteredSubshapes);

            subshape.AisShape.Attributes().WireAspect().SetWidth(2);
            subshape.AisShape.SetZLayer(-2);
            WorkspaceController.Workspace.AisContext.Display(subshape.AisShape, false);
            WorkspaceController.Workspace.AisContext.Activate(subshape.AisShape, 0, false);
            WorkspaceController.Workspace.AisContext.SetSelectionSensitivity(subshape.AisShape, 0, 10);

            Subshapes.Add(subshape);
        }

        //--------------------------------------------------------------------------------------------------

        public void ClearSubshapes()
        {
            foreach (var subshape in Subshapes)
            {
                if (subshape.AisShape != null)
                {
                    WorkspaceController.Workspace.AisContext.Remove(subshape.AisShape, false);
                }
            }
            Subshapes.Clear();
        }

        //--------------------------------------------------------------------------------------------------

        void _ProcessMouseSelect(MouseEventData data)
        {
            foreach (var detectedShape in data.DetectedShapes)
            {
                var subshape = Subshapes.FirstOrDefault(sh => sh.Shape.IsEqual(detectedShape));
                if (subshape != null)
                {
                    subshape.IsSelected = !subshape.IsSelected;
                    subshape.AisShape.SetColor(subshape.IsSelected ? Quantity_NameOfColor.RED.ToColor() : Quantity_NameOfColor.BLUE1.ToColor());
                    ChangedSubshape = subshape;
                    RaiseFinished();
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
} 