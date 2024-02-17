using System.Collections.Generic;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;
//--------------------------------------------------------------------------------------------------

public interface IShapeDependent
{
    void OnShapeInvalidated(IShapeOperand operand);
    void OnTransformInvalidated(Body body);
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
public interface IShapeOperand
{
    ShapeType GetShapeType();

    void AddDependent(IShapeDependent dependent);
    void RemoveDependent(IShapeDependent dependent);
    void Remove();

    TopoDS_Shape GetBRep(Ax3 targetFrame);
    bool BindToPlane(Ax3 targetFrame, Entity boundTo, Pln? plane);

    SubshapeReference GetSubshapeReference(TopoDS_Shape ocSubshape, Ax3? sourceFrame);
    List<TopoDS_Shape> FindSubshape(SubshapeReference reference, Ax3? targetFrame);

    void GetReferencedBodies(List<Body> bodyList);
    void GetLinkedBodies(List<Body> bodyList);

    Shape Collapse(Ax3 targetFrame);
}

//--------------------------------------------------------------------------------------------------