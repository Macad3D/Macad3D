// Generated wrapper code for package BRep

#include "OcctPCH.h"
#include "BRep.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TopoDS.h"
#include "Geom.h"
#include "TopLoc.h"
#include "Geom2d.h"
#include "gp.h"
#include "GeomAbs.h"
#include "TopAbs.h"


//---------------------------------------------------------------------
//  Class  BRep_ListOfPointRepresentation
//---------------------------------------------------------------------

Macad::Occt::BRep_ListOfPointRepresentation::BRep_ListOfPointRepresentation()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRep_ListOfPointRepresentation();
}

Macad::Occt::BRep_ListOfPointRepresentation::BRep_ListOfPointRepresentation(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRep_ListOfPointRepresentation(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::BRep_ListOfPointRepresentation::Size()
{
    int _result = ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::BRep_ListOfPointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::Assign(Macad::Occt::BRep_ListOfPointRepresentation^ theOther)
{
    ::BRep_ListOfPointRepresentation* _result = new ::BRep_ListOfPointRepresentation();
    *_result = ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Assign(*(::BRep_ListOfPointRepresentation*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRep_ListOfPointRepresentation(_result);
}

void Macad::Occt::BRep_ListOfPointRepresentation::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::BRep_ListOfPointRepresentation::Clear()
{
    ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRep_PointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::First()
{
    Handle(::BRep_PointRepresentation) _result = ((::BRep_ListOfPointRepresentation*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_PointRepresentation::CreateDowncasted(_result.get());
}

Macad::Occt::BRep_PointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::Last()
{
    Handle(::BRep_PointRepresentation) _result = ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_PointRepresentation::CreateDowncasted(_result.get());
}

Macad::Occt::BRep_PointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::Append(Macad::Occt::BRep_PointRepresentation^ theItem)
{
    Handle(::BRep_PointRepresentation) _result = ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Append(Handle(::BRep_PointRepresentation)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_PointRepresentation::CreateDowncasted(_result.get());
}

Macad::Occt::BRep_PointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::Prepend(Macad::Occt::BRep_PointRepresentation^ theItem)
{
    Handle(::BRep_PointRepresentation) _result = ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Prepend(Handle(::BRep_PointRepresentation)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_PointRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_ListOfPointRepresentation::RemoveFirst()
{
    ((::BRep_ListOfPointRepresentation*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::BRep_ListOfPointRepresentation::Remove(Macad::Occt::BRep_ListOfPointRepresentation::Iterator^ theIter)
{
    ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Remove(*(::BRep_ListOfPointRepresentation::Iterator*)theIter->NativeInstance);
}

Macad::Occt::BRep_PointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::InsertBefore(Macad::Occt::BRep_PointRepresentation^ theItem, Macad::Occt::BRep_ListOfPointRepresentation::Iterator^ theIter)
{
    Handle(::BRep_PointRepresentation) _result = ((::BRep_ListOfPointRepresentation*)_NativeInstance)->InsertBefore(Handle(::BRep_PointRepresentation)(theItem->NativeInstance), *(::BRep_ListOfPointRepresentation::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_PointRepresentation::CreateDowncasted(_result.get());
}

Macad::Occt::BRep_PointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::InsertAfter(Macad::Occt::BRep_PointRepresentation^ theItem, Macad::Occt::BRep_ListOfPointRepresentation::Iterator^ theIter)
{
    Handle(::BRep_PointRepresentation) _result = ((::BRep_ListOfPointRepresentation*)_NativeInstance)->InsertAfter(Handle(::BRep_PointRepresentation)(theItem->NativeInstance), *(::BRep_ListOfPointRepresentation::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_PointRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_ListOfPointRepresentation::Reverse()
{
    ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  BRep_ListOfPointRepresentation::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRep_ListOfPointRepresentation::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRep_ListOfPointRepresentation::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRep_ListOfPointRepresentation::Iterator();
}

bool Macad::Occt::BRep_ListOfPointRepresentation::Iterator::More()
{
    bool _result = ((::BRep_ListOfPointRepresentation::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRep_ListOfPointRepresentation::Iterator::Next()
{
    ((::BRep_ListOfPointRepresentation::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::BRep_PointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::Iterator::Value()
{
    Handle(::BRep_PointRepresentation) _result = ((::BRep_ListOfPointRepresentation::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_PointRepresentation::CreateDowncasted(_result.get());
}

Macad::Occt::BRep_PointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::Iterator::ChangeValue()
{
    Handle(::BRep_PointRepresentation) _result = ((::BRep_ListOfPointRepresentation::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_PointRepresentation::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRep_ListOfCurveRepresentation
//---------------------------------------------------------------------

Macad::Occt::BRep_ListOfCurveRepresentation::BRep_ListOfCurveRepresentation()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRep_ListOfCurveRepresentation();
}

Macad::Occt::BRep_ListOfCurveRepresentation::BRep_ListOfCurveRepresentation(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRep_ListOfCurveRepresentation(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::BRep_ListOfCurveRepresentation::Size()
{
    int _result = ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::BRep_ListOfCurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::Assign(Macad::Occt::BRep_ListOfCurveRepresentation^ theOther)
{
    ::BRep_ListOfCurveRepresentation* _result = new ::BRep_ListOfCurveRepresentation();
    *_result = ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Assign(*(::BRep_ListOfCurveRepresentation*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRep_ListOfCurveRepresentation(_result);
}

void Macad::Occt::BRep_ListOfCurveRepresentation::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::BRep_ListOfCurveRepresentation::Clear()
{
    ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::First()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::Last()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::Append(Macad::Occt::BRep_CurveRepresentation^ theItem)
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Append(Handle(::BRep_CurveRepresentation)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::Prepend(Macad::Occt::BRep_CurveRepresentation^ theItem)
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Prepend(Handle(::BRep_CurveRepresentation)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_ListOfCurveRepresentation::RemoveFirst()
{
    ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::BRep_ListOfCurveRepresentation::Remove(Macad::Occt::BRep_ListOfCurveRepresentation::Iterator^ theIter)
{
    ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Remove(*(::BRep_ListOfCurveRepresentation::Iterator*)theIter->NativeInstance);
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::InsertBefore(Macad::Occt::BRep_CurveRepresentation^ theItem, Macad::Occt::BRep_ListOfCurveRepresentation::Iterator^ theIter)
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->InsertBefore(Handle(::BRep_CurveRepresentation)(theItem->NativeInstance), *(::BRep_ListOfCurveRepresentation::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::InsertAfter(Macad::Occt::BRep_CurveRepresentation^ theItem, Macad::Occt::BRep_ListOfCurveRepresentation::Iterator^ theIter)
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->InsertAfter(Handle(::BRep_CurveRepresentation)(theItem->NativeInstance), *(::BRep_ListOfCurveRepresentation::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_ListOfCurveRepresentation::Reverse()
{
    ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  BRep_ListOfCurveRepresentation::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRep_ListOfCurveRepresentation::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRep_ListOfCurveRepresentation::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRep_ListOfCurveRepresentation::Iterator();
}

bool Macad::Occt::BRep_ListOfCurveRepresentation::Iterator::More()
{
    bool _result = ((::BRep_ListOfCurveRepresentation::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRep_ListOfCurveRepresentation::Iterator::Next()
{
    ((::BRep_ListOfCurveRepresentation::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::Iterator::Value()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_ListOfCurveRepresentation::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::Iterator::ChangeValue()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_ListOfCurveRepresentation::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRep_Builder
//---------------------------------------------------------------------

Macad::Occt::BRep_Builder::BRep_Builder()
    : Macad::Occt::TopoDS_Builder(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRep_Builder();
}

void Macad::Occt::BRep_Builder::MakeFace(Macad::Occt::TopoDS_Face^ F)
{
    ((::BRep_Builder*)_NativeInstance)->MakeFace(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRep_Builder::MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->MakeFace(*(::TopoDS_Face*)F->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance), Tol);
}

void Macad::Occt::BRep_Builder::MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->MakeFace(*(::TopoDS_Face*)F->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::UpdateFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateFace(*(::TopoDS_Face*)F->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::UpdateFace(Macad::Occt::TopoDS_Face^ F, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateFace(*(::TopoDS_Face*)F->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::NaturalRestriction(Macad::Occt::TopoDS_Face^ F, bool N)
{
    ((::BRep_Builder*)_NativeInstance)->NaturalRestriction(*(::TopoDS_Face*)F->NativeInstance, N);
}

void Macad::Occt::BRep_Builder::MakeEdge(Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRep_Builder*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRep_Builder::MakeEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Curve)(C->NativeInstance), Tol);
}

void Macad::Occt::BRep_Builder::MakeEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Curve)(C->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Curve)(C->NativeInstance), Tol);
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Curve)(C->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Face^ F, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom2d_Curve)(C->NativeInstance), *(::TopoDS_Face*)F->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, Macad::Occt::TopoDS_Face^ F, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance), *(::TopoDS_Face*)F->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol, Macad::Occt::Pnt2d Pf, Macad::Occt::Pnt2d Pl)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Pf = &Pf;
    pin_ptr<Macad::Occt::Pnt2d> pp_Pl = &Pl;
    ((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, Tol, *(gp_Pnt2d*)pp_Pf, *(gp_Pnt2d*)pp_Pl);
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol, Macad::Occt::Pnt2d Pf, Macad::Occt::Pnt2d Pl)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Pf = &Pf;
    pin_ptr<Macad::Occt::Pnt2d> pp_Pl = &Pl;
    ((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, Tol, *(gp_Pnt2d*)pp_Pf, *(gp_Pnt2d*)pp_Pl);
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::GeomAbs_Shape C)
{
    ((::BRep_Builder*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, (::GeomAbs_Shape)C);
}

void Macad::Occt::BRep_Builder::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2, Macad::Occt::GeomAbs_Shape C)
{
    ((::BRep_Builder*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance, (::GeomAbs_Shape)C);
}

void Macad::Occt::BRep_Builder::SameParameter(Macad::Occt::TopoDS_Edge^ E, bool S)
{
    ((::BRep_Builder*)_NativeInstance)->SameParameter(*(::TopoDS_Edge*)E->NativeInstance, S);
}

void Macad::Occt::BRep_Builder::SameRange(Macad::Occt::TopoDS_Edge^ E, bool S)
{
    ((::BRep_Builder*)_NativeInstance)->SameRange(*(::TopoDS_Edge*)E->NativeInstance, S);
}

void Macad::Occt::BRep_Builder::Degenerated(Macad::Occt::TopoDS_Edge^ E, bool D)
{
    ((::BRep_Builder*)_NativeInstance)->Degenerated(*(::TopoDS_Edge*)E->NativeInstance, D);
}

void Macad::Occt::BRep_Builder::Range(Macad::Occt::TopoDS_Edge^ E, double First, double Last, bool Only3d)
{
    ((::BRep_Builder*)_NativeInstance)->Range(*(::TopoDS_Edge*)E->NativeInstance, First, Last, Only3d);
}

void Macad::Occt::BRep_Builder::Range(Macad::Occt::TopoDS_Edge^ E, double First, double Last)
{
    ((::BRep_Builder*)_NativeInstance)->Range(*(::TopoDS_Edge*)E->NativeInstance, First, Last, false);
}

void Macad::Occt::BRep_Builder::Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double First, double Last)
{
    ((::BRep_Builder*)_NativeInstance)->Range(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, First, Last);
}

void Macad::Occt::BRep_Builder::Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double First, double Last)
{
    ((::BRep_Builder*)_NativeInstance)->Range(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, First, Last);
}

void Macad::Occt::BRep_Builder::Transfert(Macad::Occt::TopoDS_Edge^ Ein, Macad::Occt::TopoDS_Edge^ Eout)
{
    ((::BRep_Builder*)_NativeInstance)->Transfert(*(::TopoDS_Edge*)Ein->NativeInstance, *(::TopoDS_Edge*)Eout->NativeInstance);
}

void Macad::Occt::BRep_Builder::MakeVertex(Macad::Occt::TopoDS_Vertex^ V)
{
    ((::BRep_Builder*)_NativeInstance)->MakeVertex(*(::TopoDS_Vertex*)V->NativeInstance);
}

void Macad::Occt::BRep_Builder::MakeVertex(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt P, double Tol)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::BRep_Builder*)_NativeInstance)->MakeVertex(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, Tol);
}

void Macad::Occt::BRep_Builder::UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt P, double Tol)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::BRep_Builder*)_NativeInstance)->UpdateVertex(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, Tol);
}

void Macad::Occt::BRep_Builder::UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, double P, Macad::Occt::TopoDS_Edge^ E, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateVertex(*(::TopoDS_Vertex*)V->NativeInstance, P, *(::TopoDS_Edge*)E->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, double P, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateVertex(*(::TopoDS_Vertex*)V->NativeInstance, P, *(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, double P, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateVertex(*(::TopoDS_Vertex*)V->NativeInstance, P, *(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::UpdateVertex(Macad::Occt::TopoDS_Vertex^ Ve, double U, double V, Macad::Occt::TopoDS_Face^ F, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateVertex(*(::TopoDS_Vertex*)Ve->NativeInstance, U, V, *(::TopoDS_Face*)F->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::UpdateVertex(Macad::Occt::TopoDS_Vertex^ V, double Tol)
{
    ((::BRep_Builder*)_NativeInstance)->UpdateVertex(*(::TopoDS_Vertex*)V->NativeInstance, Tol);
}

void Macad::Occt::BRep_Builder::Transfert(Macad::Occt::TopoDS_Edge^ Ein, Macad::Occt::TopoDS_Edge^ Eout, Macad::Occt::TopoDS_Vertex^ Vin, Macad::Occt::TopoDS_Vertex^ Vout)
{
    ((::BRep_Builder*)_NativeInstance)->Transfert(*(::TopoDS_Edge*)Ein->NativeInstance, *(::TopoDS_Edge*)Eout->NativeInstance, *(::TopoDS_Vertex*)Vin->NativeInstance, *(::TopoDS_Vertex*)Vout->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BRep_TFace
//---------------------------------------------------------------------

Macad::Occt::BRep_TFace::BRep_TFace()
    : Macad::Occt::TopoDS_TFace(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRep_TFace();
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_TFace::Surface()
{
    Handle(::Geom_Surface) _result = ((::BRep_TFace*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_TFace::Surface(Macad::Occt::Geom_Surface^ theSurface)
{
    ((::BRep_TFace*)_NativeInstance)->Surface(Handle(::Geom_Surface)(theSurface->NativeInstance));
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BRep_TFace::Location()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::BRep_TFace*)_NativeInstance)->Location();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

void Macad::Occt::BRep_TFace::Location(Macad::Occt::TopLoc_Location^ theLocation)
{
    ((::BRep_TFace*)_NativeInstance)->Location(*(::TopLoc_Location*)theLocation->NativeInstance);
}

double Macad::Occt::BRep_TFace::Tolerance()
{
    double _result = ((::BRep_TFace*)_NativeInstance)->Tolerance();
    return _result;
}

void Macad::Occt::BRep_TFace::Tolerance(double theTolerance)
{
    ((::BRep_TFace*)_NativeInstance)->Tolerance(theTolerance);
}

bool Macad::Occt::BRep_TFace::NaturalRestriction()
{
    bool _result = ((::BRep_TFace*)_NativeInstance)->NaturalRestriction();
    return _result;
}

void Macad::Occt::BRep_TFace::NaturalRestriction(bool theRestriction)
{
    ((::BRep_TFace*)_NativeInstance)->NaturalRestriction(theRestriction);
}

Macad::Occt::TopoDS_TShape^ Macad::Occt::BRep_TFace::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::BRep_TFace*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_TFace::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_TFace*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_TFace::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_TFace*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

int Macad::Occt::BRep_TFace::NbTriangulations()
{
    int _result = ((::BRep_TFace*)_NativeInstance)->NbTriangulations();
    return _result;
}

Macad::Occt::BRep_TFace^ Macad::Occt::BRep_TFace::CreateDowncasted(::BRep_TFace* instance)
{
    return gcnew Macad::Occt::BRep_TFace( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_PointRepresentation
//---------------------------------------------------------------------

bool Macad::Occt::BRep_PointRepresentation::IsPointOnCurve()
{
    bool _result = ((::BRep_PointRepresentation*)_NativeInstance)->IsPointOnCurve();
    return _result;
}

bool Macad::Occt::BRep_PointRepresentation::IsPointOnCurveOnSurface()
{
    bool _result = ((::BRep_PointRepresentation*)_NativeInstance)->IsPointOnCurveOnSurface();
    return _result;
}

bool Macad::Occt::BRep_PointRepresentation::IsPointOnSurface()
{
    bool _result = ((::BRep_PointRepresentation*)_NativeInstance)->IsPointOnSurface();
    return _result;
}

bool Macad::Occt::BRep_PointRepresentation::IsPointOnCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L)
{
    bool _result = ((::BRep_PointRepresentation*)_NativeInstance)->IsPointOnCurve(Handle(::Geom_Curve)(C->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

bool Macad::Occt::BRep_PointRepresentation::IsPointOnCurveOnSurface(Macad::Occt::Geom2d_Curve^ PC, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
    bool _result = ((::BRep_PointRepresentation*)_NativeInstance)->IsPointOnCurveOnSurface(Handle(::Geom2d_Curve)(PC->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

bool Macad::Occt::BRep_PointRepresentation::IsPointOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
    bool _result = ((::BRep_PointRepresentation*)_NativeInstance)->IsPointOnSurface(Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BRep_PointRepresentation::Location()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::BRep_PointRepresentation*)_NativeInstance)->Location();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

void Macad::Occt::BRep_PointRepresentation::Location(Macad::Occt::TopLoc_Location^ L)
{
    ((::BRep_PointRepresentation*)_NativeInstance)->Location(*(::TopLoc_Location*)L->NativeInstance);
}

double Macad::Occt::BRep_PointRepresentation::Parameter()
{
    double _result = ((::BRep_PointRepresentation*)_NativeInstance)->Parameter();
    return _result;
}

void Macad::Occt::BRep_PointRepresentation::Parameter(double P)
{
    ((::BRep_PointRepresentation*)_NativeInstance)->Parameter(P);
}

double Macad::Occt::BRep_PointRepresentation::Parameter2()
{
    double _result = ((::BRep_PointRepresentation*)_NativeInstance)->Parameter2();
    return _result;
}

void Macad::Occt::BRep_PointRepresentation::Parameter2(double P)
{
    ((::BRep_PointRepresentation*)_NativeInstance)->Parameter2(P);
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRep_PointRepresentation::Curve()
{
    Handle(::Geom_Curve) _result = ((::BRep_PointRepresentation*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_PointRepresentation::Curve(Macad::Occt::Geom_Curve^ C)
{
    ((::BRep_PointRepresentation*)_NativeInstance)->Curve(Handle(::Geom_Curve)(C->NativeInstance));
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_PointRepresentation::PCurve()
{
    Handle(::Geom2d_Curve) _result = ((::BRep_PointRepresentation*)_NativeInstance)->PCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_PointRepresentation::PCurve(Macad::Occt::Geom2d_Curve^ C)
{
    ((::BRep_PointRepresentation*)_NativeInstance)->PCurve(Handle(::Geom2d_Curve)(C->NativeInstance));
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_PointRepresentation::Surface()
{
    Handle(::Geom_Surface) _result = ((::BRep_PointRepresentation*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_PointRepresentation::Surface(Macad::Occt::Geom_Surface^ S)
{
    ((::BRep_PointRepresentation*)_NativeInstance)->Surface(Handle(::Geom_Surface)(S->NativeInstance));
}

void Macad::Occt::BRep_PointRepresentation::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PointRepresentation*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_PointRepresentation::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PointRepresentation*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_PointRepresentation^ Macad::Occt::BRep_PointRepresentation::CreateDowncasted(::BRep_PointRepresentation* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRep_PointOnCurve)))
        return Macad::Occt::BRep_PointOnCurve::CreateDowncasted((::BRep_PointOnCurve*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRep_PointsOnSurface)))
        return Macad::Occt::BRep_PointsOnSurface::CreateDowncasted((::BRep_PointsOnSurface*)instance);
    
    return gcnew Macad::Occt::BRep_PointRepresentation( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_TVertex
//---------------------------------------------------------------------

Macad::Occt::BRep_TVertex::BRep_TVertex()
    : Macad::Occt::TopoDS_TVertex(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRep_TVertex();
}

double Macad::Occt::BRep_TVertex::Tolerance()
{
    double _result = ((::BRep_TVertex*)_NativeInstance)->Tolerance();
    return _result;
}

void Macad::Occt::BRep_TVertex::Tolerance(double T)
{
    ((::BRep_TVertex*)_NativeInstance)->Tolerance(T);
}

void Macad::Occt::BRep_TVertex::UpdateTolerance(double T)
{
    ((::BRep_TVertex*)_NativeInstance)->UpdateTolerance(T);
}

Macad::Occt::Pnt Macad::Occt::BRep_TVertex::Pnt()
{
    ::gp_Pnt _nativeResult = ((::BRep_TVertex*)_NativeInstance)->Pnt();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::BRep_TVertex::Pnt(Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::BRep_TVertex*)_NativeInstance)->Pnt(*(gp_Pnt*)pp_P);
}

Macad::Occt::BRep_ListOfPointRepresentation^ Macad::Occt::BRep_TVertex::Points()
{
    ::BRep_ListOfPointRepresentation* _result = new ::BRep_ListOfPointRepresentation();
    *_result = (::BRep_ListOfPointRepresentation)((::BRep_TVertex*)_NativeInstance)->Points();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRep_ListOfPointRepresentation(_result);
}

Macad::Occt::BRep_ListOfPointRepresentation^ Macad::Occt::BRep_TVertex::ChangePoints()
{
    ::BRep_ListOfPointRepresentation* _result = new ::BRep_ListOfPointRepresentation();
    *_result = ((::BRep_TVertex*)_NativeInstance)->ChangePoints();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRep_ListOfPointRepresentation(_result);
}

Macad::Occt::TopoDS_TShape^ Macad::Occt::BRep_TVertex::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::BRep_TVertex*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_TVertex::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_TVertex*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_TVertex::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_TVertex*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_TVertex^ Macad::Occt::BRep_TVertex::CreateDowncasted(::BRep_TVertex* instance)
{
    return gcnew Macad::Occt::BRep_TVertex( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_Tool
//---------------------------------------------------------------------

Macad::Occt::BRep_Tool::BRep_Tool()
    : Macad::Occt::BaseClass<::BRep_Tool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRep_Tool();
}

bool Macad::Occt::BRep_Tool::IsClosed(Macad::Occt::TopoDS_Shape^ S)
{
    bool _result = ::BRep_Tool::IsClosed(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_Tool::Surface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopLoc_Location^ L)
{
    Handle(::Geom_Surface) _result = ::BRep_Tool::Surface(*(::TopoDS_Face*)F->NativeInstance, *(::TopLoc_Location*)L->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_Tool::Surface(Macad::Occt::TopoDS_Face^ F)
{
    Handle(::Geom_Surface) _result = ::BRep_Tool::Surface(*(::TopoDS_Face*)F->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

double Macad::Occt::BRep_Tool::Tolerance(Macad::Occt::TopoDS_Face^ F)
{
    double _result = ::BRep_Tool::Tolerance(*(::TopoDS_Face*)F->NativeInstance);
    return _result;
}

bool Macad::Occt::BRep_Tool::NaturalRestriction(Macad::Occt::TopoDS_Face^ F)
{
    bool _result = ::BRep_Tool::NaturalRestriction(*(::TopoDS_Face*)F->NativeInstance);
    return _result;
}

bool Macad::Occt::BRep_Tool::IsGeometric(Macad::Occt::TopoDS_Face^ F)
{
    bool _result = ::BRep_Tool::IsGeometric(*(::TopoDS_Face*)F->NativeInstance);
    return _result;
}

bool Macad::Occt::BRep_Tool::IsGeometric(Macad::Occt::TopoDS_Edge^ E)
{
    bool _result = ::BRep_Tool::IsGeometric(*(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRep_Tool::Curve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopLoc_Location^ L, double% First, double% Last)
{
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    Handle(::Geom_Curve) _result = ::BRep_Tool::Curve(*(::TopoDS_Edge*)E->NativeInstance, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_First, *(double*)pp_Last);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRep_Tool::Curve(Macad::Occt::TopoDS_Edge^ E, double% First, double% Last)
{
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    Handle(::Geom_Curve) _result = ::BRep_Tool::Curve(*(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_First, *(double*)pp_Last);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_Tool::CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double% First, double% Last, bool% theIsStored)
{
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    pin_ptr<bool> pp_theIsStored = &theIsStored;
    Handle(::Geom2d_Curve) _result = ::BRep_Tool::CurveOnSurface(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(double*)pp_First, *(double*)pp_Last, (bool*)pp_theIsStored);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_Tool::CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double% First, double% Last)
{
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    Handle(::Geom2d_Curve) _result = ::BRep_Tool::CurveOnSurface(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(double*)pp_First, *(double*)pp_Last, nullptr);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_Tool::CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last, bool% theIsStored)
{
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    pin_ptr<bool> pp_theIsStored = &theIsStored;
    Handle(::Geom2d_Curve) _result = ::BRep_Tool::CurveOnSurface(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_First, *(double*)pp_Last, (bool*)pp_theIsStored);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_Tool::CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last)
{
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    Handle(::Geom2d_Curve) _result = ::BRep_Tool::CurveOnSurface(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_First, *(double*)pp_Last, nullptr);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_Tool::CurveOnPlane(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last)
{
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    Handle(::Geom2d_Curve) _result = ::BRep_Tool::CurveOnPlane(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_First, *(double*)pp_Last);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_Tool::CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last)
{
    Handle(::Geom2d_Curve) h_C = C->NativeInstance;
    Handle(::Geom_Surface) h_S = S->NativeInstance;
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    ::BRep_Tool::CurveOnSurface(*(::TopoDS_Edge*)E->NativeInstance, h_C, h_S, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_First, *(double*)pp_Last);
    C->NativeInstance = h_C.get();
    S->NativeInstance = h_S.get();
}

void Macad::Occt::BRep_Tool::CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last, int Index)
{
    Handle(::Geom2d_Curve) h_C = C->NativeInstance;
    Handle(::Geom_Surface) h_S = S->NativeInstance;
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    ::BRep_Tool::CurveOnSurface(*(::TopoDS_Edge*)E->NativeInstance, h_C, h_S, *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_First, *(double*)pp_Last, Index);
    C->NativeInstance = h_C.get();
    S->NativeInstance = h_S.get();
}

bool Macad::Occt::BRep_Tool::IsClosed(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    bool _result = ::BRep_Tool::IsClosed(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
    return _result;
}

bool Macad::Occt::BRep_Tool::IsClosed(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
    bool _result = ::BRep_Tool::IsClosed(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

double Macad::Occt::BRep_Tool::Tolerance(Macad::Occt::TopoDS_Edge^ E)
{
    double _result = ::BRep_Tool::Tolerance(*(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

bool Macad::Occt::BRep_Tool::SameParameter(Macad::Occt::TopoDS_Edge^ E)
{
    bool _result = ::BRep_Tool::SameParameter(*(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

bool Macad::Occt::BRep_Tool::SameRange(Macad::Occt::TopoDS_Edge^ E)
{
    bool _result = ::BRep_Tool::SameRange(*(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

bool Macad::Occt::BRep_Tool::Degenerated(Macad::Occt::TopoDS_Edge^ E)
{
    bool _result = ::BRep_Tool::Degenerated(*(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

void Macad::Occt::BRep_Tool::Range(Macad::Occt::TopoDS_Edge^ E, double% First, double% Last)
{
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    ::BRep_Tool::Range(*(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_First, *(double*)pp_Last);
}

void Macad::Occt::BRep_Tool::Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last)
{
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    ::BRep_Tool::Range(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, *(double*)pp_First, *(double*)pp_Last);
}

void Macad::Occt::BRep_Tool::Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double% First, double% Last)
{
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    ::BRep_Tool::Range(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(double*)pp_First, *(double*)pp_Last);
}

void Macad::Occt::BRep_Tool::UVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, Macad::Occt::Pnt2d% PFirst, Macad::Occt::Pnt2d% PLast)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_PFirst = &PFirst;
    pin_ptr<Macad::Occt::Pnt2d> pp_PLast = &PLast;
    ::BRep_Tool::UVPoints(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, *(gp_Pnt2d*)pp_PFirst, *(gp_Pnt2d*)pp_PLast);
}

void Macad::Occt::BRep_Tool::UVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt2d% PFirst, Macad::Occt::Pnt2d% PLast)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_PFirst = &PFirst;
    pin_ptr<Macad::Occt::Pnt2d> pp_PLast = &PLast;
    ::BRep_Tool::UVPoints(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt2d*)pp_PFirst, *(gp_Pnt2d*)pp_PLast);
}

void Macad::Occt::BRep_Tool::SetUVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, Macad::Occt::Pnt2d PFirst, Macad::Occt::Pnt2d PLast)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_PFirst = &PFirst;
    pin_ptr<Macad::Occt::Pnt2d> pp_PLast = &PLast;
    ::BRep_Tool::SetUVPoints(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, *(gp_Pnt2d*)pp_PFirst, *(gp_Pnt2d*)pp_PLast);
}

void Macad::Occt::BRep_Tool::SetUVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt2d PFirst, Macad::Occt::Pnt2d PLast)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_PFirst = &PFirst;
    pin_ptr<Macad::Occt::Pnt2d> pp_PLast = &PLast;
    ::BRep_Tool::SetUVPoints(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt2d*)pp_PFirst, *(gp_Pnt2d*)pp_PLast);
}

bool Macad::Occt::BRep_Tool::HasContinuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2)
{
    bool _result = ::BRep_Tool::HasContinuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRep_Tool::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2)
{
    ::GeomAbs_Shape _result = ::BRep_Tool::Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

bool Macad::Occt::BRep_Tool::HasContinuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2)
{
    bool _result = ::BRep_Tool::HasContinuity(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance);
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRep_Tool::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2)
{
    ::GeomAbs_Shape _result = ::BRep_Tool::Continuity(*(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

bool Macad::Occt::BRep_Tool::HasContinuity(Macad::Occt::TopoDS_Edge^ E)
{
    bool _result = ::BRep_Tool::HasContinuity(*(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRep_Tool::MaxContinuity(Macad::Occt::TopoDS_Edge^ theEdge)
{
    ::GeomAbs_Shape _result = ::BRep_Tool::MaxContinuity(*(::TopoDS_Edge*)theEdge->NativeInstance);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

Macad::Occt::Pnt Macad::Occt::BRep_Tool::Pnt(Macad::Occt::TopoDS_Vertex^ V)
{
    ::gp_Pnt _nativeResult = ::BRep_Tool::Pnt(*(::TopoDS_Vertex*)V->NativeInstance);
    return Macad::Occt::Pnt(_nativeResult);
}

double Macad::Occt::BRep_Tool::Tolerance(Macad::Occt::TopoDS_Vertex^ V)
{
    double _result = ::BRep_Tool::Tolerance(*(::TopoDS_Vertex*)V->NativeInstance);
    return _result;
}

bool Macad::Occt::BRep_Tool::Parameter(Macad::Occt::TopoDS_Vertex^ theV, Macad::Occt::TopoDS_Edge^ theE, double% theParam)
{
    pin_ptr<double> pp_theParam = &theParam;
    bool _result = ::BRep_Tool::Parameter(*(::TopoDS_Vertex*)theV->NativeInstance, *(::TopoDS_Edge*)theE->NativeInstance, *(double*)pp_theParam);
    return _result;
}

double Macad::Occt::BRep_Tool::Parameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E)
{
    double _result = ::BRep_Tool::Parameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

double Macad::Occt::BRep_Tool::Parameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    double _result = ::BRep_Tool::Parameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
    return _result;
}

double Macad::Occt::BRep_Tool::Parameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
    double _result = ::BRep_Tool::Parameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::BRep_Tool::Parameters(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Face^ F)
{
    ::gp_Pnt2d _nativeResult = ::BRep_Tool::Parameters(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
    return Macad::Occt::Pnt2d(_nativeResult);
}

double Macad::Occt::BRep_Tool::MaxTolerance(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopAbs_ShapeEnum theSubShape)
{
    double _result = ::BRep_Tool::MaxTolerance(*(::TopoDS_Shape*)theShape->NativeInstance, (::TopAbs_ShapeEnum)theSubShape);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRep_CurveRepresentation
//---------------------------------------------------------------------

bool Macad::Occt::BRep_CurveRepresentation::IsCurve3D()
{
    bool _result = ((::BRep_CurveRepresentation*)_NativeInstance)->IsCurve3D();
    return _result;
}

bool Macad::Occt::BRep_CurveRepresentation::IsCurveOnSurface()
{
    bool _result = ((::BRep_CurveRepresentation*)_NativeInstance)->IsCurveOnSurface();
    return _result;
}

bool Macad::Occt::BRep_CurveRepresentation::IsRegularity()
{
    bool _result = ((::BRep_CurveRepresentation*)_NativeInstance)->IsRegularity();
    return _result;
}

bool Macad::Occt::BRep_CurveRepresentation::IsCurveOnClosedSurface()
{
    bool _result = ((::BRep_CurveRepresentation*)_NativeInstance)->IsCurveOnClosedSurface();
    return _result;
}

bool Macad::Occt::BRep_CurveRepresentation::IsCurveOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
    bool _result = ((::BRep_CurveRepresentation*)_NativeInstance)->IsCurveOnSurface(Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

bool Macad::Occt::BRep_CurveRepresentation::IsRegularity(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2)
{
    bool _result = ((::BRep_CurveRepresentation*)_NativeInstance)->IsRegularity(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance);
    return _result;
}

bool Macad::Occt::BRep_CurveRepresentation::IsPolygon3D()
{
    bool _result = ((::BRep_CurveRepresentation*)_NativeInstance)->IsPolygon3D();
    return _result;
}

bool Macad::Occt::BRep_CurveRepresentation::IsPolygonOnTriangulation()
{
    bool _result = ((::BRep_CurveRepresentation*)_NativeInstance)->IsPolygonOnTriangulation();
    return _result;
}

bool Macad::Occt::BRep_CurveRepresentation::IsPolygonOnClosedTriangulation()
{
    bool _result = ((::BRep_CurveRepresentation*)_NativeInstance)->IsPolygonOnClosedTriangulation();
    return _result;
}

bool Macad::Occt::BRep_CurveRepresentation::IsPolygonOnSurface()
{
    bool _result = ((::BRep_CurveRepresentation*)_NativeInstance)->IsPolygonOnSurface();
    return _result;
}

bool Macad::Occt::BRep_CurveRepresentation::IsPolygonOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
    bool _result = ((::BRep_CurveRepresentation*)_NativeInstance)->IsPolygonOnSurface(Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

bool Macad::Occt::BRep_CurveRepresentation::IsPolygonOnClosedSurface()
{
    bool _result = ((::BRep_CurveRepresentation*)_NativeInstance)->IsPolygonOnClosedSurface();
    return _result;
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BRep_CurveRepresentation::Location()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::BRep_CurveRepresentation*)_NativeInstance)->Location();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

void Macad::Occt::BRep_CurveRepresentation::Location(Macad::Occt::TopLoc_Location^ L)
{
    ((::BRep_CurveRepresentation*)_NativeInstance)->Location(*(::TopLoc_Location*)L->NativeInstance);
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRep_CurveRepresentation::Curve3D()
{
    Handle(::Geom_Curve) _result = ((::BRep_CurveRepresentation*)_NativeInstance)->Curve3D();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_CurveRepresentation::Curve3D(Macad::Occt::Geom_Curve^ C)
{
    ((::BRep_CurveRepresentation*)_NativeInstance)->Curve3D(Handle(::Geom_Curve)(C->NativeInstance));
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_CurveRepresentation::Surface()
{
    Handle(::Geom_Surface) _result = ((::BRep_CurveRepresentation*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_CurveRepresentation::PCurve()
{
    Handle(::Geom2d_Curve) _result = ((::BRep_CurveRepresentation*)_NativeInstance)->PCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_CurveRepresentation::PCurve(Macad::Occt::Geom2d_Curve^ C)
{
    ((::BRep_CurveRepresentation*)_NativeInstance)->PCurve(Handle(::Geom2d_Curve)(C->NativeInstance));
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_CurveRepresentation::PCurve2()
{
    Handle(::Geom2d_Curve) _result = ((::BRep_CurveRepresentation*)_NativeInstance)->PCurve2();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_CurveRepresentation::PCurve2(Macad::Occt::Geom2d_Curve^ C)
{
    ((::BRep_CurveRepresentation*)_NativeInstance)->PCurve2(Handle(::Geom2d_Curve)(C->NativeInstance));
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_CurveRepresentation::Surface2()
{
    Handle(::Geom_Surface) _result = ((::BRep_CurveRepresentation*)_NativeInstance)->Surface2();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BRep_CurveRepresentation::Location2()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::BRep_CurveRepresentation*)_NativeInstance)->Location2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRep_CurveRepresentation::Continuity()
{
    ::GeomAbs_Shape _result = ((::BRep_CurveRepresentation*)_NativeInstance)->Continuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

void Macad::Occt::BRep_CurveRepresentation::Continuity(Macad::Occt::GeomAbs_Shape C)
{
    ((::BRep_CurveRepresentation*)_NativeInstance)->Continuity((::GeomAbs_Shape)C);
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_CurveRepresentation::Copy()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_CurveRepresentation*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_CurveRepresentation::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_CurveRepresentation*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_CurveRepresentation::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_CurveRepresentation*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(::BRep_CurveRepresentation* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRep_GCurve)))
        return Macad::Occt::BRep_GCurve::CreateDowncasted((::BRep_GCurve*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRep_CurveOn2Surfaces)))
        return Macad::Occt::BRep_CurveOn2Surfaces::CreateDowncasted((::BRep_CurveOn2Surfaces*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRep_Polygon3D)))
        return Macad::Occt::BRep_Polygon3D::CreateDowncasted((::BRep_Polygon3D*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRep_PolygonOnSurface)))
        return Macad::Occt::BRep_PolygonOnSurface::CreateDowncasted((::BRep_PolygonOnSurface*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRep_PolygonOnTriangulation)))
        return Macad::Occt::BRep_PolygonOnTriangulation::CreateDowncasted((::BRep_PolygonOnTriangulation*)instance);
    
    return gcnew Macad::Occt::BRep_CurveRepresentation( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_GCurve
//---------------------------------------------------------------------

void Macad::Occt::BRep_GCurve::SetRange(double First, double Last)
{
    ((::BRep_GCurve*)_NativeInstance)->SetRange(First, Last);
}

void Macad::Occt::BRep_GCurve::Range(double% First, double% Last)
{
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    ((::BRep_GCurve*)_NativeInstance)->Range(*(double*)pp_First, *(double*)pp_Last);
}

double Macad::Occt::BRep_GCurve::First()
{
    double _result = ((::BRep_GCurve*)_NativeInstance)->First();
    return _result;
}

double Macad::Occt::BRep_GCurve::Last()
{
    double _result = ((::BRep_GCurve*)_NativeInstance)->Last();
    return _result;
}

void Macad::Occt::BRep_GCurve::First(double F)
{
    ((::BRep_GCurve*)_NativeInstance)->First(F);
}

void Macad::Occt::BRep_GCurve::Last(double L)
{
    ((::BRep_GCurve*)_NativeInstance)->Last(L);
}

void Macad::Occt::BRep_GCurve::D0(double U, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::BRep_GCurve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void Macad::Occt::BRep_GCurve::Update()
{
    ((::BRep_GCurve*)_NativeInstance)->Update();
}

void Macad::Occt::BRep_GCurve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_GCurve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_GCurve::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_GCurve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_GCurve^ Macad::Occt::BRep_GCurve::CreateDowncasted(::BRep_GCurve* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRep_Curve3D)))
        return Macad::Occt::BRep_Curve3D::CreateDowncasted((::BRep_Curve3D*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRep_CurveOnSurface)))
        return Macad::Occt::BRep_CurveOnSurface::CreateDowncasted((::BRep_CurveOnSurface*)instance);
    
    return gcnew Macad::Occt::BRep_GCurve( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_Curve3D
//---------------------------------------------------------------------

Macad::Occt::BRep_Curve3D::BRep_Curve3D(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L)
    : Macad::Occt::BRep_GCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRep_Curve3D(Handle(::Geom_Curve)(C->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
}

void Macad::Occt::BRep_Curve3D::D0(double U, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::BRep_Curve3D*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

bool Macad::Occt::BRep_Curve3D::IsCurve3D()
{
    bool _result = ((::BRep_Curve3D*)_NativeInstance)->IsCurve3D();
    return _result;
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRep_Curve3D::Curve3D()
{
    Handle(::Geom_Curve) _result = ((::BRep_Curve3D*)_NativeInstance)->Curve3D();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_Curve3D::Curve3D(Macad::Occt::Geom_Curve^ C)
{
    ((::BRep_Curve3D*)_NativeInstance)->Curve3D(Handle(::Geom_Curve)(C->NativeInstance));
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_Curve3D::Copy()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_Curve3D*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_Curve3D::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_Curve3D*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_Curve3D::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_Curve3D*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_Curve3D^ Macad::Occt::BRep_Curve3D::CreateDowncasted(::BRep_Curve3D* instance)
{
    return gcnew Macad::Occt::BRep_Curve3D( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_CurveOn2Surfaces
//---------------------------------------------------------------------

Macad::Occt::BRep_CurveOn2Surfaces::BRep_CurveOn2Surfaces(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2, Macad::Occt::GeomAbs_Shape C)
    : Macad::Occt::BRep_CurveRepresentation(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRep_CurveOn2Surfaces(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance, (::GeomAbs_Shape)C);
}

bool Macad::Occt::BRep_CurveOn2Surfaces::IsRegularity()
{
    bool _result = ((::BRep_CurveOn2Surfaces*)_NativeInstance)->IsRegularity();
    return _result;
}

bool Macad::Occt::BRep_CurveOn2Surfaces::IsRegularity(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2)
{
    bool _result = ((::BRep_CurveOn2Surfaces*)_NativeInstance)->IsRegularity(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance);
    return _result;
}

void Macad::Occt::BRep_CurveOn2Surfaces::D0(double U, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::BRep_CurveOn2Surfaces*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_CurveOn2Surfaces::Surface()
{
    Handle(::Geom_Surface) _result = ((::BRep_CurveOn2Surfaces*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_CurveOn2Surfaces::Surface2()
{
    Handle(::Geom_Surface) _result = ((::BRep_CurveOn2Surfaces*)_NativeInstance)->Surface2();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BRep_CurveOn2Surfaces::Location2()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::BRep_CurveOn2Surfaces*)_NativeInstance)->Location2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRep_CurveOn2Surfaces::Continuity()
{
    ::GeomAbs_Shape _result = ((::BRep_CurveOn2Surfaces*)_NativeInstance)->Continuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

void Macad::Occt::BRep_CurveOn2Surfaces::Continuity(Macad::Occt::GeomAbs_Shape C)
{
    ((::BRep_CurveOn2Surfaces*)_NativeInstance)->Continuity((::GeomAbs_Shape)C);
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_CurveOn2Surfaces::Copy()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_CurveOn2Surfaces*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_CurveOn2Surfaces::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_CurveOn2Surfaces*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_CurveOn2Surfaces::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_CurveOn2Surfaces*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_CurveOn2Surfaces^ Macad::Occt::BRep_CurveOn2Surfaces::CreateDowncasted(::BRep_CurveOn2Surfaces* instance)
{
    return gcnew Macad::Occt::BRep_CurveOn2Surfaces( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_CurveOnSurface
//---------------------------------------------------------------------

Macad::Occt::BRep_CurveOnSurface::BRep_CurveOnSurface(Macad::Occt::Geom2d_Curve^ PC, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
    : Macad::Occt::BRep_GCurve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRep_CurveOnSurface(Handle(::Geom2d_Curve)(PC->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
}

void Macad::Occt::BRep_CurveOnSurface::SetUVPoints(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    ((::BRep_CurveOnSurface*)_NativeInstance)->SetUVPoints(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void Macad::Occt::BRep_CurveOnSurface::UVPoints(Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    ((::BRep_CurveOnSurface*)_NativeInstance)->UVPoints(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void Macad::Occt::BRep_CurveOnSurface::D0(double U, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::BRep_CurveOnSurface*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

bool Macad::Occt::BRep_CurveOnSurface::IsCurveOnSurface()
{
    bool _result = ((::BRep_CurveOnSurface*)_NativeInstance)->IsCurveOnSurface();
    return _result;
}

bool Macad::Occt::BRep_CurveOnSurface::IsCurveOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
    bool _result = ((::BRep_CurveOnSurface*)_NativeInstance)->IsCurveOnSurface(Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_CurveOnSurface::Surface()
{
    Handle(::Geom_Surface) _result = ((::BRep_CurveOnSurface*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_CurveOnSurface::PCurve()
{
    Handle(::Geom2d_Curve) _result = ((::BRep_CurveOnSurface*)_NativeInstance)->PCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_CurveOnSurface::PCurve(Macad::Occt::Geom2d_Curve^ C)
{
    ((::BRep_CurveOnSurface*)_NativeInstance)->PCurve(Handle(::Geom2d_Curve)(C->NativeInstance));
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_CurveOnSurface::Copy()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_CurveOnSurface*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_CurveOnSurface::Update()
{
    ((::BRep_CurveOnSurface*)_NativeInstance)->Update();
}

void Macad::Occt::BRep_CurveOnSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_CurveOnSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_CurveOnSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_CurveOnSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_CurveOnSurface^ Macad::Occt::BRep_CurveOnSurface::CreateDowncasted(::BRep_CurveOnSurface* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRep_CurveOnClosedSurface)))
        return Macad::Occt::BRep_CurveOnClosedSurface::CreateDowncasted((::BRep_CurveOnClosedSurface*)instance);
    
    return gcnew Macad::Occt::BRep_CurveOnSurface( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_CurveOnClosedSurface
//---------------------------------------------------------------------

Macad::Occt::BRep_CurveOnClosedSurface::BRep_CurveOnClosedSurface(Macad::Occt::Geom2d_Curve^ PC1, Macad::Occt::Geom2d_Curve^ PC2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, Macad::Occt::GeomAbs_Shape C)
    : Macad::Occt::BRep_CurveOnSurface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRep_CurveOnClosedSurface(Handle(::Geom2d_Curve)(PC1->NativeInstance), Handle(::Geom2d_Curve)(PC2->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, (::GeomAbs_Shape)C);
}

void Macad::Occt::BRep_CurveOnClosedSurface::SetUVPoints2(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    ((::BRep_CurveOnClosedSurface*)_NativeInstance)->SetUVPoints2(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void Macad::Occt::BRep_CurveOnClosedSurface::UVPoints2(Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    ((::BRep_CurveOnClosedSurface*)_NativeInstance)->UVPoints2(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

bool Macad::Occt::BRep_CurveOnClosedSurface::IsCurveOnClosedSurface()
{
    bool _result = ((::BRep_CurveOnClosedSurface*)_NativeInstance)->IsCurveOnClosedSurface();
    return _result;
}

bool Macad::Occt::BRep_CurveOnClosedSurface::IsRegularity()
{
    bool _result = ((::BRep_CurveOnClosedSurface*)_NativeInstance)->IsRegularity();
    return _result;
}

bool Macad::Occt::BRep_CurveOnClosedSurface::IsRegularity(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2)
{
    bool _result = ((::BRep_CurveOnClosedSurface*)_NativeInstance)->IsRegularity(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance);
    return _result;
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_CurveOnClosedSurface::PCurve2()
{
    Handle(::Geom2d_Curve) _result = ((::BRep_CurveOnClosedSurface*)_NativeInstance)->PCurve2();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_CurveOnClosedSurface::Surface2()
{
    Handle(::Geom_Surface) _result = ((::BRep_CurveOnClosedSurface*)_NativeInstance)->Surface2();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BRep_CurveOnClosedSurface::Location2()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::BRep_CurveOnClosedSurface*)_NativeInstance)->Location2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRep_CurveOnClosedSurface::Continuity()
{
    ::GeomAbs_Shape _result = ((::BRep_CurveOnClosedSurface*)_NativeInstance)->Continuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

void Macad::Occt::BRep_CurveOnClosedSurface::Continuity(Macad::Occt::GeomAbs_Shape C)
{
    ((::BRep_CurveOnClosedSurface*)_NativeInstance)->Continuity((::GeomAbs_Shape)C);
}

void Macad::Occt::BRep_CurveOnClosedSurface::PCurve2(Macad::Occt::Geom2d_Curve^ C)
{
    ((::BRep_CurveOnClosedSurface*)_NativeInstance)->PCurve2(Handle(::Geom2d_Curve)(C->NativeInstance));
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_CurveOnClosedSurface::Copy()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_CurveOnClosedSurface*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_CurveOnClosedSurface::Update()
{
    ((::BRep_CurveOnClosedSurface*)_NativeInstance)->Update();
}

void Macad::Occt::BRep_CurveOnClosedSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_CurveOnClosedSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_CurveOnClosedSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_CurveOnClosedSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_CurveOnClosedSurface^ Macad::Occt::BRep_CurveOnClosedSurface::CreateDowncasted(::BRep_CurveOnClosedSurface* instance)
{
    return gcnew Macad::Occt::BRep_CurveOnClosedSurface( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_PointOnCurve
//---------------------------------------------------------------------

Macad::Occt::BRep_PointOnCurve::BRep_PointOnCurve(double P, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L)
    : Macad::Occt::BRep_PointRepresentation(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRep_PointOnCurve(P, Handle(::Geom_Curve)(C->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
}

bool Macad::Occt::BRep_PointOnCurve::IsPointOnCurve()
{
    bool _result = ((::BRep_PointOnCurve*)_NativeInstance)->IsPointOnCurve();
    return _result;
}

bool Macad::Occt::BRep_PointOnCurve::IsPointOnCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L)
{
    bool _result = ((::BRep_PointOnCurve*)_NativeInstance)->IsPointOnCurve(Handle(::Geom_Curve)(C->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRep_PointOnCurve::Curve()
{
    Handle(::Geom_Curve) _result = ((::BRep_PointOnCurve*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_PointOnCurve::Curve(Macad::Occt::Geom_Curve^ C)
{
    ((::BRep_PointOnCurve*)_NativeInstance)->Curve(Handle(::Geom_Curve)(C->NativeInstance));
}

void Macad::Occt::BRep_PointOnCurve::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PointOnCurve*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_PointOnCurve::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PointOnCurve*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_PointOnCurve^ Macad::Occt::BRep_PointOnCurve::CreateDowncasted(::BRep_PointOnCurve* instance)
{
    return gcnew Macad::Occt::BRep_PointOnCurve( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_PointsOnSurface
//---------------------------------------------------------------------

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_PointsOnSurface::Surface()
{
    Handle(::Geom_Surface) _result = ((::BRep_PointsOnSurface*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_PointsOnSurface::Surface(Macad::Occt::Geom_Surface^ S)
{
    ((::BRep_PointsOnSurface*)_NativeInstance)->Surface(Handle(::Geom_Surface)(S->NativeInstance));
}

void Macad::Occt::BRep_PointsOnSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PointsOnSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_PointsOnSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PointsOnSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_PointsOnSurface^ Macad::Occt::BRep_PointsOnSurface::CreateDowncasted(::BRep_PointsOnSurface* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRep_PointOnCurveOnSurface)))
        return Macad::Occt::BRep_PointOnCurveOnSurface::CreateDowncasted((::BRep_PointOnCurveOnSurface*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRep_PointOnSurface)))
        return Macad::Occt::BRep_PointOnSurface::CreateDowncasted((::BRep_PointOnSurface*)instance);
    
    return gcnew Macad::Occt::BRep_PointsOnSurface( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_PointOnCurveOnSurface
//---------------------------------------------------------------------

Macad::Occt::BRep_PointOnCurveOnSurface::BRep_PointOnCurveOnSurface(double P, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
    : Macad::Occt::BRep_PointsOnSurface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRep_PointOnCurveOnSurface(P, Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
}

bool Macad::Occt::BRep_PointOnCurveOnSurface::IsPointOnCurveOnSurface()
{
    bool _result = ((::BRep_PointOnCurveOnSurface*)_NativeInstance)->IsPointOnCurveOnSurface();
    return _result;
}

bool Macad::Occt::BRep_PointOnCurveOnSurface::IsPointOnCurveOnSurface(Macad::Occt::Geom2d_Curve^ PC, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
    bool _result = ((::BRep_PointOnCurveOnSurface*)_NativeInstance)->IsPointOnCurveOnSurface(Handle(::Geom2d_Curve)(PC->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_PointOnCurveOnSurface::PCurve()
{
    Handle(::Geom2d_Curve) _result = ((::BRep_PointOnCurveOnSurface*)_NativeInstance)->PCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_PointOnCurveOnSurface::PCurve(Macad::Occt::Geom2d_Curve^ C)
{
    ((::BRep_PointOnCurveOnSurface*)_NativeInstance)->PCurve(Handle(::Geom2d_Curve)(C->NativeInstance));
}

void Macad::Occt::BRep_PointOnCurveOnSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PointOnCurveOnSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_PointOnCurveOnSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PointOnCurveOnSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_PointOnCurveOnSurface^ Macad::Occt::BRep_PointOnCurveOnSurface::CreateDowncasted(::BRep_PointOnCurveOnSurface* instance)
{
    return gcnew Macad::Occt::BRep_PointOnCurveOnSurface( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_PointOnSurface
//---------------------------------------------------------------------

Macad::Occt::BRep_PointOnSurface::BRep_PointOnSurface(double P1, double P2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
    : Macad::Occt::BRep_PointsOnSurface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRep_PointOnSurface(P1, P2, Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
}

bool Macad::Occt::BRep_PointOnSurface::IsPointOnSurface()
{
    bool _result = ((::BRep_PointOnSurface*)_NativeInstance)->IsPointOnSurface();
    return _result;
}

bool Macad::Occt::BRep_PointOnSurface::IsPointOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
    bool _result = ((::BRep_PointOnSurface*)_NativeInstance)->IsPointOnSurface(Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

double Macad::Occt::BRep_PointOnSurface::Parameter2()
{
    double _result = ((::BRep_PointOnSurface*)_NativeInstance)->Parameter2();
    return _result;
}

void Macad::Occt::BRep_PointOnSurface::Parameter2(double P)
{
    ((::BRep_PointOnSurface*)_NativeInstance)->Parameter2(P);
}

Macad::Occt::BRep_PointOnSurface^ Macad::Occt::BRep_PointOnSurface::CreateDowncasted(::BRep_PointOnSurface* instance)
{
    return gcnew Macad::Occt::BRep_PointOnSurface( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_Polygon3D
//---------------------------------------------------------------------

bool Macad::Occt::BRep_Polygon3D::IsPolygon3D()
{
    bool _result = ((::BRep_Polygon3D*)_NativeInstance)->IsPolygon3D();
    return _result;
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_Polygon3D::Copy()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_Polygon3D*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_Polygon3D::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_Polygon3D*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_Polygon3D::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_Polygon3D*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_Polygon3D^ Macad::Occt::BRep_Polygon3D::CreateDowncasted(::BRep_Polygon3D* instance)
{
    return gcnew Macad::Occt::BRep_Polygon3D( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_PolygonOnSurface
//---------------------------------------------------------------------

bool Macad::Occt::BRep_PolygonOnSurface::IsPolygonOnSurface()
{
    bool _result = ((::BRep_PolygonOnSurface*)_NativeInstance)->IsPolygonOnSurface();
    return _result;
}

bool Macad::Occt::BRep_PolygonOnSurface::IsPolygonOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
    bool _result = ((::BRep_PolygonOnSurface*)_NativeInstance)->IsPolygonOnSurface(Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_PolygonOnSurface::Surface()
{
    Handle(::Geom_Surface) _result = ((::BRep_PolygonOnSurface*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_PolygonOnSurface::Copy()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_PolygonOnSurface*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_PolygonOnSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PolygonOnSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_PolygonOnSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PolygonOnSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_PolygonOnSurface^ Macad::Occt::BRep_PolygonOnSurface::CreateDowncasted(::BRep_PolygonOnSurface* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRep_PolygonOnClosedSurface)))
        return Macad::Occt::BRep_PolygonOnClosedSurface::CreateDowncasted((::BRep_PolygonOnClosedSurface*)instance);
    
    return gcnew Macad::Occt::BRep_PolygonOnSurface( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_PolygonOnClosedSurface
//---------------------------------------------------------------------

bool Macad::Occt::BRep_PolygonOnClosedSurface::IsPolygonOnClosedSurface()
{
    bool _result = ((::BRep_PolygonOnClosedSurface*)_NativeInstance)->IsPolygonOnClosedSurface();
    return _result;
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_PolygonOnClosedSurface::Copy()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_PolygonOnClosedSurface*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_PolygonOnClosedSurface::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PolygonOnClosedSurface*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_PolygonOnClosedSurface::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PolygonOnClosedSurface*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_PolygonOnClosedSurface^ Macad::Occt::BRep_PolygonOnClosedSurface::CreateDowncasted(::BRep_PolygonOnClosedSurface* instance)
{
    return gcnew Macad::Occt::BRep_PolygonOnClosedSurface( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_PolygonOnTriangulation
//---------------------------------------------------------------------

bool Macad::Occt::BRep_PolygonOnTriangulation::IsPolygonOnTriangulation()
{
    bool _result = ((::BRep_PolygonOnTriangulation*)_NativeInstance)->IsPolygonOnTriangulation();
    return _result;
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_PolygonOnTriangulation::Copy()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_PolygonOnTriangulation*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_PolygonOnTriangulation::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PolygonOnTriangulation*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_PolygonOnTriangulation::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PolygonOnTriangulation*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_PolygonOnTriangulation^ Macad::Occt::BRep_PolygonOnTriangulation::CreateDowncasted(::BRep_PolygonOnTriangulation* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRep_PolygonOnClosedTriangulation)))
        return Macad::Occt::BRep_PolygonOnClosedTriangulation::CreateDowncasted((::BRep_PolygonOnClosedTriangulation*)instance);
    
    return gcnew Macad::Occt::BRep_PolygonOnTriangulation( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_PolygonOnClosedTriangulation
//---------------------------------------------------------------------

bool Macad::Occt::BRep_PolygonOnClosedTriangulation::IsPolygonOnClosedTriangulation()
{
    bool _result = ((::BRep_PolygonOnClosedTriangulation*)_NativeInstance)->IsPolygonOnClosedTriangulation();
    return _result;
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_PolygonOnClosedTriangulation::Copy()
{
    Handle(::BRep_CurveRepresentation) _result = ((::BRep_PolygonOnClosedTriangulation*)_NativeInstance)->Copy();
    return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_PolygonOnClosedTriangulation::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PolygonOnClosedTriangulation*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_PolygonOnClosedTriangulation::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_PolygonOnClosedTriangulation*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_PolygonOnClosedTriangulation^ Macad::Occt::BRep_PolygonOnClosedTriangulation::CreateDowncasted(::BRep_PolygonOnClosedTriangulation* instance)
{
    return gcnew Macad::Occt::BRep_PolygonOnClosedTriangulation( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_TEdge
//---------------------------------------------------------------------

Macad::Occt::BRep_TEdge::BRep_TEdge()
    : Macad::Occt::TopoDS_TEdge(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRep_TEdge();
}

double Macad::Occt::BRep_TEdge::Tolerance()
{
    double _result = ((::BRep_TEdge*)_NativeInstance)->Tolerance();
    return _result;
}

void Macad::Occt::BRep_TEdge::Tolerance(double T)
{
    ((::BRep_TEdge*)_NativeInstance)->Tolerance(T);
}

void Macad::Occt::BRep_TEdge::UpdateTolerance(double T)
{
    ((::BRep_TEdge*)_NativeInstance)->UpdateTolerance(T);
}

bool Macad::Occt::BRep_TEdge::SameParameter()
{
    bool _result = ((::BRep_TEdge*)_NativeInstance)->SameParameter();
    return _result;
}

void Macad::Occt::BRep_TEdge::SameParameter(bool S)
{
    ((::BRep_TEdge*)_NativeInstance)->SameParameter(S);
}

bool Macad::Occt::BRep_TEdge::SameRange()
{
    bool _result = ((::BRep_TEdge*)_NativeInstance)->SameRange();
    return _result;
}

void Macad::Occt::BRep_TEdge::SameRange(bool S)
{
    ((::BRep_TEdge*)_NativeInstance)->SameRange(S);
}

bool Macad::Occt::BRep_TEdge::Degenerated()
{
    bool _result = ((::BRep_TEdge*)_NativeInstance)->Degenerated();
    return _result;
}

void Macad::Occt::BRep_TEdge::Degenerated(bool S)
{
    ((::BRep_TEdge*)_NativeInstance)->Degenerated(S);
}

Macad::Occt::BRep_ListOfCurveRepresentation^ Macad::Occt::BRep_TEdge::Curves()
{
    ::BRep_ListOfCurveRepresentation* _result = new ::BRep_ListOfCurveRepresentation();
    *_result = (::BRep_ListOfCurveRepresentation)((::BRep_TEdge*)_NativeInstance)->Curves();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRep_ListOfCurveRepresentation(_result);
}

Macad::Occt::BRep_ListOfCurveRepresentation^ Macad::Occt::BRep_TEdge::ChangeCurves()
{
    ::BRep_ListOfCurveRepresentation* _result = new ::BRep_ListOfCurveRepresentation();
    *_result = ((::BRep_TEdge*)_NativeInstance)->ChangeCurves();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRep_ListOfCurveRepresentation(_result);
}

Macad::Occt::TopoDS_TShape^ Macad::Occt::BRep_TEdge::EmptyCopy()
{
    Handle(::TopoDS_TShape) _result = ((::BRep_TEdge*)_NativeInstance)->EmptyCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted(_result.get());
}

void Macad::Occt::BRep_TEdge::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::BRep_TEdge*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::BRep_TEdge::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::BRep_TEdge*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::BRep_TEdge^ Macad::Occt::BRep_TEdge::CreateDowncasted(::BRep_TEdge* instance)
{
    return gcnew Macad::Occt::BRep_TEdge( instance );
}


