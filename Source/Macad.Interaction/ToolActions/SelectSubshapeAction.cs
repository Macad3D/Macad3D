using System.Collections.Generic;
using System.Linq;
using Macad.Common;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction;

public class SelectSubshapeAction : ToolAction
{
    public bool SelectOnMouseDown { get; set; }

    //--------------------------------------------------------------------------------------------------

    public class EventArgs
    {
        public TopoDS_Shape SelectedSubshape { get; init; }
        public InteractiveEntity SelectedEntity { get; init; }
        public SubshapeTypes SelectedSubshapeType { get; init; }
        public AIS_InteractiveObject SelectedAisObject { get; init; }
        public MouseEventData MouseEventData { get; init; }
    }

    public delegate void EventHandler(SelectSubshapeAction sender, EventArgs args);
    public event EventHandler Preview;
    public event EventHandler Finished;

    //--------------------------------------------------------------------------------------------------

    SelectionContext _SelectionContext;
    readonly InteractiveEntity _SourceEntity;
    readonly SubshapeTypes _SubshapeTypes;
    readonly List<TopoDS_Shape> _Shapes;
    Trsf? _LocalTransformation;
    List<AIS_Shape> _AisShapes;
    readonly ISelectionFilter _SelectionFilter;
    readonly Color _SubshapeColor;

    //--------------------------------------------------------------------------------------------------

    public SelectSubshapeAction(SubshapeTypes subshapeTypes, InteractiveEntity sourceEntity = null, ISelectionFilter selectionFilter = null) 
        : base()
    {
        _SubshapeTypes = subshapeTypes;
        _SourceEntity = sourceEntity;
        _SelectionFilter = selectionFilter;
    }

    //--------------------------------------------------------------------------------------------------

    public SelectSubshapeAction(IEnumerable<TopoDS_Shape> shapes, Trsf? localTransformation = null, Color? color = null)
        : base()
    {
        _SubshapeTypes = SubshapeTypes.All;
        _Shapes = shapes.ToList();
        _LocalTransformation = localTransformation;
        _SubshapeColor = color ?? Colors.FilteredSubshapes;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        if (_SourceEntity != null)
        {
            _SelectionContext = OpenSelectionContext();
            _SelectionContext.Include(_SourceEntity);
        }
        else if (_Shapes != null)
        {
            _SelectionContext = OpenSelectionContext();

            _AisShapes = new List<AIS_Shape>();
            foreach (var shape in _Shapes)
            {
                var aisShape = new AIS_Shape(shape);
                if (_LocalTransformation != null)
                {
                    aisShape.SetLocalTransformation(_LocalTransformation.Value);
                }

                aisShape.SetColor(_SubshapeColor.ToQuantityColor());
                aisShape.Attributes().SetPointAspect(Marker.CreateBitmapPointAspect(Marker.BallImage, _SubshapeColor));
                aisShape.Attributes().WireAspect().SetWidth(2);
                aisShape.SetPolygonOffsets(0, 1.01f, 1.0f);
                aisShape.SetZLayer(-2);
                WorkspaceController.AisContext.Display(aisShape, false);
                WorkspaceController.AisContext.Activate(aisShape, 0, false);
                WorkspaceController.AisContext.SetSelectionSensitivity(aisShape, 0, 10);
                _AisShapes.Add(aisShape);
            }
        }
        else
        {
            _SelectionContext = OpenSelectionContext(SelectionContext.Options.IncludeAll);
        }
        _SelectionContext.SetSubshapeSelection(_SubshapeTypes);
        _SelectionContext.SetSelectionFilter(_SelectionFilter);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        _AisShapes?.ForEach(aisShape => WorkspaceController.AisContext.Remove(aisShape, false));
        Preview = null;
        Finished = null;
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    public void UpdateShapes(IEnumerable<TopoDS_Shape> shapes, Trsf? localTransformation = null)
    {
        if (localTransformation != null)
        {
            _LocalTransformation = localTransformation;
        }

        int index = 0;
        foreach (var shape in shapes)
        {
            if(index > _Shapes.Count)
                return;

            _Shapes[index] = shape;
            _AisShapes[index].SetShape(shape);
            if (_LocalTransformation != null)
            {
                _AisShapes[index].SetLocalTransformation(_LocalTransformation.Value);
            }
            WorkspaceController.AisContext.Redisplay(_AisShapes[index], false, true);
            index++;
        }
    }

    //--------------------------------------------------------------------------------------------------

    EventArgs ProcessMouseInput(MouseEventData data)
    {
        InteractiveEntity selectedEntity = data.DetectedEntity;
        AIS_InteractiveObject selectedAisObject = data.DetectedAisObject;
        TopoDS_Shape selectedSubshape = null;
        SubshapeTypes selectedSubshapeType = SubshapeTypes.None;

        var detectedShape = data.DetectedBrepShape;
        if (detectedShape != null)
        {
            if (_SubshapeTypes.HasFlag(SubshapeTypes.Vertex)
                && detectedShape.ShapeType() == TopAbs_ShapeEnum.VERTEX)
            {
                selectedSubshape = detectedShape;
                selectedSubshapeType = SubshapeTypes.Vertex;
            }
            else if (_SubshapeTypes.HasFlag(SubshapeTypes.Edge)
                     && detectedShape.ShapeType() == TopAbs_ShapeEnum.EDGE)
            {
                selectedSubshape = detectedShape;
                selectedSubshapeType = SubshapeTypes.Edge;
            }
            else if (_SubshapeTypes.HasFlag(SubshapeTypes.Wire)
                     && detectedShape.ShapeType() == TopAbs_ShapeEnum.WIRE)
            {
                selectedSubshape = detectedShape;
                selectedSubshapeType = SubshapeTypes.Wire;
            }
            else if (_SubshapeTypes.HasFlag(SubshapeTypes.Face)
                     && detectedShape.ShapeType() == TopAbs_ShapeEnum.FACE)
            {
                selectedSubshape = detectedShape;
                selectedSubshapeType = SubshapeTypes.Face;
            }
            else if (_SubshapeTypes.HasFlag(SubshapeTypes.All))
            {
                selectedSubshape = detectedShape;
                selectedSubshapeType = SubshapeTypes.All;
            }
        }

        return new EventArgs()
        {
            SelectedSubshape = selectedSubshape,
            SelectedSubshapeType = selectedSubshapeType,
            SelectedAisObject = selectedAisObject,
            SelectedEntity = selectedEntity,
            MouseEventData = data
        };
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseMove(MouseEventData data)
    {
        if (!IsFinished)
        {
            EventArgs args = ProcessMouseInput(data);
            Preview?.Invoke(this, args);
            return base.OnMouseMove(data);
        }
        return false;
    }
        
    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseUp(MouseEventData data)
    {
        if (!IsFinished && !SelectOnMouseDown)
        {
            EventArgs args = ProcessMouseInput(data);
            if (args.SelectedEntity != null || args.SelectedSubshape != null || args.SelectedAisObject != null)
            {
                IsFinished = true;
                Finished?.Invoke(this, args);
            }
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnMouseDown(MouseEventData data)
    {
        if (!IsFinished && SelectOnMouseDown)
        {
            EventArgs args = ProcessMouseInput(data);
            if (args.SelectedEntity != null || args.SelectedSubshape != null || args.SelectedAisObject != null)
            {
                IsFinished = true;
                Finished?.Invoke(this, args);
            }
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}