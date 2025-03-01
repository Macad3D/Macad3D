#include "OcctPCH.h"
#include "..\Generated\TopoDS.h"

//--------------------------------------------------------------------------------------------------
// TopoDS
//--------------------------------------------------------------------------------------------------

namespace Macad
{
namespace Occt
{
/// <summary>
/// Provides methods to cast objects of class
/// TopoDS_Shape to be objects of more specialized
/// sub-classes. Types are verified, thus in the example
/// below, the first two blocks are correct but the third is
/// rejected by the compiler.
/// </summary>
public ref class TopoDS sealed
{
public:
    /// <summary>
    /// Basic tool to access the data structure.
    /// Casts shape S to the more specialized return type, Vertex.
    /// Exceptions
    /// Standard_TypeMismatch if S cannot be cast to this return type.
    /// </summary>
    static Macad::Occt::TopoDS_Vertex^ Vertex(Macad::Occt::TopoDS_Shape^ S)
    {
        ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
        *_result = (::TopoDS_Vertex)::TopoDS::Vertex(*(::TopoDS_Shape*)S->NativeInstance);
        return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
    }
    /// <summary>
    /// Casts shape S to the more specialized return type, Edge
    /// Exceptions
    /// Standard_TypeMismatch if S cannot be cast to this return type.
    /// </summary>
    static Macad::Occt::TopoDS_Edge^ Edge(Macad::Occt::TopoDS_Shape^ S)
    {
        ::TopoDS_Edge* _result = new ::TopoDS_Edge();
        *_result = (::TopoDS_Edge)::TopoDS::Edge(*(::TopoDS_Shape*)S->NativeInstance);
        return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
    }
    /// <summary>
    /// Casts shape S to the more specialized return type, Wire.
    /// Exceptions
    /// Standard_TypeMismatch if S cannot be cast to this return type.
    /// </summary>
    static Macad::Occt::TopoDS_Wire^ Wire(Macad::Occt::TopoDS_Shape^ S)
    {
        ::TopoDS_Wire* _result = new ::TopoDS_Wire();
        *_result = (::TopoDS_Wire)::TopoDS::Wire(*(::TopoDS_Shape*)S->NativeInstance);
        return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
    }
    /// <summary>
    /// Casts shape S to the more specialized return type, Face.
    /// Exceptions
    /// Standard_TypeMismatch if S cannot be cast to this return type.
    /// </summary>
    static Macad::Occt::TopoDS_Face^ Face(Macad::Occt::TopoDS_Shape^ S)
    {
        ::TopoDS_Face* _result = new ::TopoDS_Face();
        *_result = (::TopoDS_Face)::TopoDS::Face(*(::TopoDS_Shape*)S->NativeInstance);
        return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
    }
    /// <summary>
    /// Casts shape S to the more specialized return type, Shell.
    /// Exceptions
    /// Standard_TypeMismatch if S cannot be cast to this return type.
    /// </summary>
    static Macad::Occt::TopoDS_Shell^ Shell(Macad::Occt::TopoDS_Shape^ S)
    {
        ::TopoDS_Shell* _result = new ::TopoDS_Shell();
        *_result = (::TopoDS_Shell)::TopoDS::Shell(*(::TopoDS_Shape*)S->NativeInstance);
        return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
    }
    /// <summary>
    /// Casts shape S to the more specialized return type, Solid.
    /// Exceptions
    /// Standard_TypeMismatch if S cannot be cast to this return type.
    /// </summary>
    static Macad::Occt::TopoDS_Solid^ Solid(Macad::Occt::TopoDS_Shape^ S)
    {
        ::TopoDS_Solid* _result = new ::TopoDS_Solid();
        *_result = (::TopoDS_Solid)::TopoDS::Solid(*(::TopoDS_Shape*)S->NativeInstance);
        return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Solid(_result);
    }
    /// <summary>
    /// Casts shape S to the more specialized return type, CompSolid.
    /// Exceptions
    /// Standard_TypeMismatch if S cannot be cast to this return type.
    /// </summary>
    static Macad::Occt::TopoDS_CompSolid^ CompSolid(Macad::Occt::TopoDS_Shape^ S)
    {
        ::TopoDS_CompSolid* _result = new ::TopoDS_CompSolid();
        *_result = (::TopoDS_CompSolid)::TopoDS::CompSolid(*(::TopoDS_Shape*)S->NativeInstance);
        return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_CompSolid(_result);
    }
    /// <summary>
    /// Casts shape S to the more specialized return type, Compound.
    /// Exceptions
    /// Standard_TypeMismatch if S cannot be cast to this return type.
    /// </summary>
    static Macad::Occt::TopoDS_Compound^ Compound(Macad::Occt::TopoDS_Shape^ S)
    {
        ::TopoDS_Compound* _result = new ::TopoDS_Compound();
        *_result = (::TopoDS_Compound)::TopoDS::Compound(*(::TopoDS_Shape*)S->NativeInstance);
        return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Compound(_result);
    }
}; // class TopoDS
} // namespace Occt
} // namespace Macad

//--------------------------------------------------------------------------------------------------
// TopoDS_Shape
//--------------------------------------------------------------------------------------------------

Macad::Occt::TopoDS_Vertex^ Macad::Occt::TopoDS_Shape::ToVertex()
{
    if( NativeInstance->IsNull() || NativeInstance->ShapeType() != TopAbs_VERTEX )
    {
        return nullptr;
    }
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex(*(::TopoDS_Vertex*)NativeInstance);
    return gcnew Macad::Occt::TopoDS_Vertex(_result);
}

//--------------------------------------------------------------------------------------------------

Macad::Occt::TopoDS_Edge^ Macad::Occt::TopoDS_Shape::ToEdge()
{
    if( NativeInstance->IsNull() || NativeInstance->ShapeType() != TopAbs_EDGE )
    {
        return nullptr;
    }
    ::TopoDS_Edge* _result = new ::TopoDS_Edge(*(::TopoDS_Edge*)NativeInstance);
    return gcnew Macad::Occt::TopoDS_Edge(_result);
}

//--------------------------------------------------------------------------------------------------

Macad::Occt::TopoDS_Wire^ Macad::Occt::TopoDS_Shape::ToWire()
{
    if( NativeInstance->IsNull() || NativeInstance->ShapeType() != TopAbs_WIRE )
    {
        return nullptr;
    }
    ::TopoDS_Wire* _result = new ::TopoDS_Wire(*(::TopoDS_Wire*)NativeInstance);
    return gcnew Macad::Occt::TopoDS_Wire(_result);
}

//--------------------------------------------------------------------------------------------------

Macad::Occt::TopoDS_Face^ Macad::Occt::TopoDS_Shape::ToFace()
{
    if( NativeInstance->IsNull() || NativeInstance->ShapeType() != TopAbs_FACE )
    {
        return nullptr;
    }
    ::TopoDS_Face* _result = new ::TopoDS_Face(*(::TopoDS_Face*)NativeInstance);
    return gcnew Macad::Occt::TopoDS_Face(_result);
}

//--------------------------------------------------------------------------------------------------

Macad::Occt::TopoDS_Shell^ Macad::Occt::TopoDS_Shape::ToShell()
{
    if( NativeInstance->IsNull() || NativeInstance->ShapeType() != TopAbs_SHELL )
    {
        return nullptr;
    }
    ::TopoDS_Shell* _result = new ::TopoDS_Shell(*(::TopoDS_Shell*)NativeInstance);
    return gcnew Macad::Occt::TopoDS_Shell(_result);
}

//--------------------------------------------------------------------------------------------------

Macad::Occt::TopoDS_Solid^ Macad::Occt::TopoDS_Shape::ToSolid()
{
    if( NativeInstance->IsNull() || NativeInstance->ShapeType() != TopAbs_SOLID )
    {
        return nullptr;
    }
    ::TopoDS_Solid* _result = new ::TopoDS_Solid(*(::TopoDS_Solid*)NativeInstance);
    return gcnew Macad::Occt::TopoDS_Solid(_result);
}

//--------------------------------------------------------------------------------------------------

Macad::Occt::TopoDS_CompSolid^ Macad::Occt::TopoDS_Shape::ToCompSolid()
{
    if( NativeInstance->IsNull() || NativeInstance->ShapeType() != TopAbs_COMPSOLID )
    {
        return nullptr;
    }
    ::TopoDS_CompSolid* _result = new ::TopoDS_CompSolid(*(::TopoDS_CompSolid*)NativeInstance);
    return gcnew Macad::Occt::TopoDS_CompSolid(_result);
}

//--------------------------------------------------------------------------------------------------

Macad::Occt::TopoDS_Compound^ Macad::Occt::TopoDS_Shape::ToCompound()
{
    if( NativeInstance->IsNull() || NativeInstance->ShapeType() != TopAbs_COMPOUND )
    {
        return nullptr;
    }
    ::TopoDS_Compound* _result = new ::TopoDS_Compound(*(::TopoDS_Compound*)NativeInstance);
    return gcnew Macad::Occt::TopoDS_Compound(_result);
}

//--------------------------------------------------------------------------------------------------
