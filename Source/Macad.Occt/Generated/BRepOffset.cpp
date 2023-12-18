// Generated wrapper code for package BRepOffset

#include "OcctPCH.h"
#include "BRepOffset.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "GeomAbs.h"
#include "Message.h"
#include "TopTools.h"


//---------------------------------------------------------------------
//  Class  BRepOffset_MakeOffset
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset()
    : Macad::Occt::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset();
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges, Macad::Occt::Message_ProgressRange^ theRange)
    : Macad::Occt::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, RemoveIntEdges, *(::Message_ProgressRange*)theRange->NativeInstance);
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges)
    : Macad::Occt::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, RemoveIntEdges, ::Message_ProgressRange());
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening)
    : Macad::Occt::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, false, ::Message_ProgressRange());
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join)
    : Macad::Occt::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, false, false, ::Message_ProgressRange());
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter)
    : Macad::Occt::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, GeomAbs_Arc, false, false, ::Message_ProgressRange());
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection)
    : Macad::Occt::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, false, GeomAbs_Arc, false, false, ::Message_ProgressRange());
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode)
    : Macad::Occt::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, false, false, GeomAbs_Arc, false, false, ::Message_ProgressRange());
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol)
    : Macad::Occt::BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, BRepOffset_Skin, false, false, GeomAbs_Arc, false, false, ::Message_ProgressRange());
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, RemoveIntEdges);
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, false);
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, false, false);
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, GeomAbs_Arc, false, false);
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, false, GeomAbs_Arc, false, false);
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, false, false, GeomAbs_Arc, false, false);
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, BRepOffset_Skin, false, false, GeomAbs_Arc, false, false);
}

void Macad::Occt::BRepOffset_MakeOffset::Clear()
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->Clear();
}

void Macad::Occt::BRepOffset_MakeOffset::AllowLinearization(bool theIsAllowed)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->AllowLinearization(theIsAllowed);
}

void Macad::Occt::BRepOffset_MakeOffset::AddFace(Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->AddFace(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepOffset_MakeOffset::SetOffsetOnFace(Macad::Occt::TopoDS_Face^ F, double Off)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->SetOffsetOnFace(*(::TopoDS_Face*)F->NativeInstance, Off);
}

void Macad::Occt::BRepOffset_MakeOffset::MakeOffsetShape(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->MakeOffsetShape(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffset_MakeOffset::MakeOffsetShape()
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->MakeOffsetShape(::Message_ProgressRange());
}

void Macad::Occt::BRepOffset_MakeOffset::MakeThickSolid(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->MakeThickSolid(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepOffset_MakeOffset::MakeThickSolid()
{
    ((::BRepOffset_MakeOffset*)_NativeInstance)->MakeThickSolid(::Message_ProgressRange());
}

bool Macad::Occt::BRepOffset_MakeOffset::IsDone()
{
    bool _result = ((::BRepOffset_MakeOffset*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffset_MakeOffset::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepOffset_MakeOffset*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffset_MakeOffset::InitShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepOffset_MakeOffset*)_NativeInstance)->InitShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::BRepOffset_Error Macad::Occt::BRepOffset_MakeOffset::Error()
{
    ::BRepOffset_Error _result = ((::BRepOffset_MakeOffset*)_NativeInstance)->Error();
    return (Macad::Occt::BRepOffset_Error)_result;
}

Macad::Occt::GeomAbs_JoinType Macad::Occt::BRepOffset_MakeOffset::GetJoinType()
{
    ::GeomAbs_JoinType _result = ((::BRepOffset_MakeOffset*)_NativeInstance)->GetJoinType();
    return (Macad::Occt::GeomAbs_JoinType)_result;
}

Macad::Occt::TopTools_IndexedMapOfShape^ Macad::Occt::BRepOffset_MakeOffset::ClosingFaces()
{
    ::TopTools_IndexedMapOfShape* _result = new ::TopTools_IndexedMapOfShape();
    *_result = (::TopTools_IndexedMapOfShape)((::BRepOffset_MakeOffset*)_NativeInstance)->ClosingFaces();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_IndexedMapOfShape(_result);
}

bool Macad::Occt::BRepOffset_MakeOffset::CheckInputData(Macad::Occt::Message_ProgressRange^ theRange)
{
    bool _result = ((::BRepOffset_MakeOffset*)_NativeInstance)->CheckInputData(*(::Message_ProgressRange*)theRange->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffset_MakeOffset::GetBadShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepOffset_MakeOffset*)_NativeInstance)->GetBadShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffset_MakeOffset::Generated(Macad::Occt::TopoDS_Shape^ theS)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepOffset_MakeOffset*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theS->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffset_MakeOffset::Modified(Macad::Occt::TopoDS_Shape^ theS)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepOffset_MakeOffset*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theS->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepOffset_MakeOffset::IsDeleted(Macad::Occt::TopoDS_Shape^ S)
{
    bool _result = ((::BRepOffset_MakeOffset*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}


