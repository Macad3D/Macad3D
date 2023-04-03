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

            _Subshapes.Add(subshape);
        }

        //--------------------------------------------------------------------------------------------------

        public void ClearSubshapes()
        {
            foreach (var subshape in _Subshapes)
            {
                if (subshape.AisShape != null)
                {
                    WorkspaceController.Workspace.AisContext.Remove(subshape.AisShape, false);
                }
            }
            _Subshapes.Clear();
        }

        //--------------------------------------------------------------------------------------------------

        void _ProcessMouseSelect(MouseEventData data)
        {
            foreach (var detectedShape in data.DetectedShapes)
            {
                var subshape = _Subshapes.FirstOrDefault(sh => sh.Shape.IsEqual(detectedShape));
                if (subshape != null)
                {
                    subshape.IsSelected = !subshape.IsSelected;
                    subshape.AisShape.SetColor(subshape.IsSelected ? Quantity_NameOfColor.RED.ToColor() : Quantity_NameOfColor.BLUE1.ToColor());
                    _ChangedSubshape = subshape;

                    EventArgs args = new()
                    {
                        ChangedSubshape = _ChangedSubshape,
                        MouseEventData = data
                    };
                    Finished?.Invoke(this, args);
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