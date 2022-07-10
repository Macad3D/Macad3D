using System.Collections.Generic;
using System.Linq;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction
{
    public class SelectSubshapeAction : ToolAction
    {
        //--------------------------------------------------------------------------------------------------

        public TopoDS_Shape SelectedSubshape { get; private set; }
        public InteractiveEntity SelectedEntity { get; private set; }
        public SubshapeTypes SelectedSubshapeType { get; private set; }
        public AIS_InteractiveObject SelectedAisObject { get; private set; }

        SelectionContext _SelectionContext;
        readonly InteractiveEntity _SourceEntity;
        readonly SubshapeTypes _SubshapeTypes;
        readonly List<TopoDS_Shape> _Shapes;
        List<AIS_Shape> _AisShapes;
        readonly ISelectionFilter _SelectionFilter;

        //--------------------------------------------------------------------------------------------------

        public SelectSubshapeAction(object owner, SubshapeTypes subshapeTypes, InteractiveEntity sourceEntity = null, ISelectionFilter selectionFilter = null) 
            : base(owner)
        {
            _SubshapeTypes = subshapeTypes;
            _SourceEntity = sourceEntity;
            _SelectionFilter = selectionFilter;
        }

        //--------------------------------------------------------------------------------------------------

        public SelectSubshapeAction(object owner, List<TopoDS_Shape> shapes) 
            : base(owner)
        {
            _SubshapeTypes = SubshapeTypes.All;
            _Shapes = shapes;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            if (_SourceEntity != null)
            {
                _SelectionContext = WorkspaceController.Selection.OpenContext();
                _SelectionContext.Include(_SourceEntity);
            }
            else if (_Shapes != null)
            {
                _SelectionContext = WorkspaceController.Selection.OpenContext();

                _AisShapes = new List<AIS_Shape>(_Shapes.Count);
                foreach (var shape in _Shapes)
                {
                    var aisShape = new AIS_Shape(shape);
                    aisShape.SetColor(Colors.FilteredSubshapes);

                    aisShape.Attributes().SetPointAspect(Marker.CreateBitmapPointAspect(Marker.BallImage, Colors.FilteredSubshapes));
                    aisShape.Attributes().WireAspect().SetWidth(2);
                    aisShape.SetZLayer(-2);
                    WorkspaceController.Workspace.AisContext.Display(aisShape, false);
                    WorkspaceController.Workspace.AisContext.Activate(aisShape, 0, false);
                    WorkspaceController.Workspace.AisContext.SetSelectionSensitivity(aisShape, 0, 10);
                    _AisShapes.Add(aisShape);
                }
            }
            else
            {
                _SelectionContext = WorkspaceController.Selection.OpenContext(SelectionContext.Options.IncludeAll);
            }
            _SelectionContext.SetSubshapeSelection(_SubshapeTypes);
            _SelectionContext.SetSelectionFilter(_SelectionFilter);

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void ProcessMouseInput(MouseEventData data)
        {
            SelectedEntity = data.DetectedEntities.FirstOrDefault();
            SelectedAisObject = data.DetectedAisInteractives.FirstOrDefault();

            if (data.DetectedShapes.Count == 0)
            {
                SelectedSubshape = null;
                SelectedSubshapeType = SubshapeTypes.None;
                return;
            }

            var detectedShape = data.DetectedShapes[0];

            if (_SubshapeTypes.HasFlag(SubshapeTypes.Vertex)
                && (detectedShape.ShapeType() == TopAbs_ShapeEnum.TopAbs_VERTEX))
            {
                SelectedSubshape = detectedShape;
                SelectedSubshapeType = SubshapeTypes.Vertex;
            }
            else if (_SubshapeTypes.HasFlag(SubshapeTypes.Edge)
                     && (detectedShape.ShapeType() == TopAbs_ShapeEnum.TopAbs_EDGE))
            {
                SelectedSubshape = detectedShape;
                SelectedSubshapeType = SubshapeTypes.Edge;
            }
            else if (_SubshapeTypes.HasFlag(SubshapeTypes.Wire)
                     && (detectedShape.ShapeType() == TopAbs_ShapeEnum.TopAbs_WIRE))
            {
                SelectedSubshape = detectedShape;
                SelectedSubshapeType = SubshapeTypes.Wire;
            }
            else if (_SubshapeTypes.HasFlag(SubshapeTypes.Face)
                     && (detectedShape.ShapeType() == TopAbs_ShapeEnum.TopAbs_FACE))
            {
                SelectedSubshape = detectedShape;
                SelectedSubshapeType = SubshapeTypes.Face;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseMove(MouseEventData data)
        {
            if (!IsFinished)
            {
                ProcessMouseInput(data);

                return base.OnMouseMove(data);
            }
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnMouseUp(MouseEventData data, bool additive)
        {
            if (!IsFinished)
            {
                ProcessMouseInput(data);
                IsFinished = SelectedEntity != null || SelectedSubshape != null || SelectedAisObject != null;
            }
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            _AisShapes?.ForEach(aisShape => WorkspaceController.Workspace.AisContext.Remove(aisShape, false));
            WorkspaceController.Selection.CloseContext(_SelectionContext);
            _SelectionContext = null;

            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------

    }
}