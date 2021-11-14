// Generated wrapper code for package BRep

#include "OcctPCH.h"
#include "BRep.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "BRep.h"
#include "Standard.h"
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
	: BaseClass<::BRep_ListOfPointRepresentation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRep_ListOfPointRepresentation();
}

Macad::Occt::BRep_ListOfPointRepresentation::BRep_ListOfPointRepresentation(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BRep_ListOfPointRepresentation>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BRep_ListOfPointRepresentation(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BRep_ListOfPointRepresentation::BRep_ListOfPointRepresentation(Macad::Occt::BRep_ListOfPointRepresentation^ theOther)
	: BaseClass<::BRep_ListOfPointRepresentation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRep_ListOfPointRepresentation(*(::BRep_ListOfPointRepresentation*)theOther->NativeInstance);
}

int Macad::Occt::BRep_ListOfPointRepresentation::Size()
{
	return ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Size();
}

Macad::Occt::BRep_ListOfPointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::Assign(Macad::Occt::BRep_ListOfPointRepresentation^ theOther)
{
	::BRep_ListOfPointRepresentation* _result = new ::BRep_ListOfPointRepresentation();
	*_result = ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Assign(*(::BRep_ListOfPointRepresentation*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRep_ListOfPointRepresentation(_result);
}

void Macad::Occt::BRep_ListOfPointRepresentation::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::BRep_ListOfPointRepresentation*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::BRep_ListOfPointRepresentation::Clear()
{
	((::BRep_ListOfPointRepresentation*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRep_PointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::First()
{
	Handle(::BRep_PointRepresentation) _result;
	_result = ((::BRep_ListOfPointRepresentation*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_PointRepresentation::CreateDowncasted( _result.get());
}

Macad::Occt::BRep_PointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::Last()
{
	Handle(::BRep_PointRepresentation) _result;
	_result = ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_PointRepresentation::CreateDowncasted( _result.get());
}

Macad::Occt::BRep_PointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::Append(Macad::Occt::BRep_PointRepresentation^ theItem)
{
	Handle(::BRep_PointRepresentation) h_theItem = theItem->NativeInstance;
	Handle(::BRep_PointRepresentation) _result;
	_result = ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_PointRepresentation::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_ListOfPointRepresentation::Append(Macad::Occt::BRep_ListOfPointRepresentation^ theOther)
{
	((::BRep_ListOfPointRepresentation*)_NativeInstance)->Append(*(::BRep_ListOfPointRepresentation*)theOther->NativeInstance);
}

Macad::Occt::BRep_PointRepresentation^ Macad::Occt::BRep_ListOfPointRepresentation::Prepend(Macad::Occt::BRep_PointRepresentation^ theItem)
{
	Handle(::BRep_PointRepresentation) h_theItem = theItem->NativeInstance;
	Handle(::BRep_PointRepresentation) _result;
	_result = ((::BRep_ListOfPointRepresentation*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_PointRepresentation::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_ListOfPointRepresentation::Prepend(Macad::Occt::BRep_ListOfPointRepresentation^ theOther)
{
	((::BRep_ListOfPointRepresentation*)_NativeInstance)->Prepend(*(::BRep_ListOfPointRepresentation*)theOther->NativeInstance);
}

void Macad::Occt::BRep_ListOfPointRepresentation::RemoveFirst()
{
	((::BRep_ListOfPointRepresentation*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::BRep_ListOfPointRepresentation::Reverse()
{
	((::BRep_ListOfPointRepresentation*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  BRep_ListOfCurveRepresentation
//---------------------------------------------------------------------

Macad::Occt::BRep_ListOfCurveRepresentation::BRep_ListOfCurveRepresentation()
	: BaseClass<::BRep_ListOfCurveRepresentation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRep_ListOfCurveRepresentation();
}

Macad::Occt::BRep_ListOfCurveRepresentation::BRep_ListOfCurveRepresentation(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BRep_ListOfCurveRepresentation>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BRep_ListOfCurveRepresentation(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BRep_ListOfCurveRepresentation::BRep_ListOfCurveRepresentation(Macad::Occt::BRep_ListOfCurveRepresentation^ theOther)
	: BaseClass<::BRep_ListOfCurveRepresentation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRep_ListOfCurveRepresentation(*(::BRep_ListOfCurveRepresentation*)theOther->NativeInstance);
}

int Macad::Occt::BRep_ListOfCurveRepresentation::Size()
{
	return ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Size();
}

Macad::Occt::BRep_ListOfCurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::Assign(Macad::Occt::BRep_ListOfCurveRepresentation^ theOther)
{
	::BRep_ListOfCurveRepresentation* _result = new ::BRep_ListOfCurveRepresentation();
	*_result = ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Assign(*(::BRep_ListOfCurveRepresentation*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRep_ListOfCurveRepresentation(_result);
}

void Macad::Occt::BRep_ListOfCurveRepresentation::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::BRep_ListOfCurveRepresentation::Clear()
{
	((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::First()
{
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::Last()
{
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::Append(Macad::Occt::BRep_CurveRepresentation^ theItem)
{
	Handle(::BRep_CurveRepresentation) h_theItem = theItem->NativeInstance;
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_ListOfCurveRepresentation::Append(Macad::Occt::BRep_ListOfCurveRepresentation^ theOther)
{
	((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Append(*(::BRep_ListOfCurveRepresentation*)theOther->NativeInstance);
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_ListOfCurveRepresentation::Prepend(Macad::Occt::BRep_CurveRepresentation^ theItem)
{
	Handle(::BRep_CurveRepresentation) h_theItem = theItem->NativeInstance;
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_ListOfCurveRepresentation::Prepend(Macad::Occt::BRep_ListOfCurveRepresentation^ theOther)
{
	((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Prepend(*(::BRep_ListOfCurveRepresentation*)theOther->NativeInstance);
}

void Macad::Occt::BRep_ListOfCurveRepresentation::RemoveFirst()
{
	((::BRep_ListOfCurveRepresentation*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::BRep_ListOfCurveRepresentation::Reverse()
{
	((::BRep_ListOfCurveRepresentation*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  BRep_Builder
//---------------------------------------------------------------------

Macad::Occt::BRep_Builder::BRep_Builder()
	: Macad::Occt::TopoDS_Builder(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRep_Builder();
}

Macad::Occt::BRep_Builder::BRep_Builder(Macad::Occt::BRep_Builder^ parameter1)
	: Macad::Occt::TopoDS_Builder(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRep_Builder(*(::BRep_Builder*)parameter1->NativeInstance);
}

void Macad::Occt::BRep_Builder::MakeFace(Macad::Occt::TopoDS_Face^ F)
{
	((::BRep_Builder*)_NativeInstance)->MakeFace(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRep_Builder::MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, double Tol)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->MakeFace(*(::TopoDS_Face*)F->NativeInstance, h_S, Tol);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRep_Builder::MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->MakeFace(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, Tol);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRep_Builder::UpdateFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->UpdateFace(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, Tol);
	S->NativeInstance = h_S.get();
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
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)E->NativeInstance, h_C, Tol);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRep_Builder::MakeEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, Tol);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, double Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, h_C, Tol);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, Tol);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Face^ F, double Tol)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopoDS_Face*)F->NativeInstance, Tol);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, Macad::Occt::TopoDS_Face^ F, double Tol)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom2d_Curve) h_C2 = C2->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, h_C1, h_C2, *(::TopoDS_Face*)F->NativeInstance, Tol);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, h_C, h_S, *(::TopLoc_Location*)L->NativeInstance, Tol);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol, Macad::Occt::Pnt2d Pf, Macad::Occt::Pnt2d Pl)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_Pf = &Pf;
	pin_ptr<Macad::Occt::Pnt2d> pp_Pl = &Pl;
	((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, h_C, h_S, *(::TopLoc_Location*)L->NativeInstance, Tol, *(gp_Pnt2d*)pp_Pf, *(gp_Pnt2d*)pp_Pl);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom2d_Curve) h_C2 = C2->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, h_C1, h_C2, h_S, *(::TopLoc_Location*)L->NativeInstance, Tol);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRep_Builder::UpdateEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double Tol, Macad::Occt::Pnt2d Pf, Macad::Occt::Pnt2d Pl)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom2d_Curve) h_C2 = C2->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_Pf = &Pf;
	pin_ptr<Macad::Occt::Pnt2d> pp_Pl = &Pl;
	((::BRep_Builder*)_NativeInstance)->UpdateEdge(*(::TopoDS_Edge*)E->NativeInstance, h_C1, h_C2, h_S, *(::TopLoc_Location*)L->NativeInstance, Tol, *(gp_Pnt2d*)pp_Pf, *(gp_Pnt2d*)pp_Pl);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
	S->NativeInstance = h_S.get();
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
	Handle(::Geom_Surface) h_S1 = S1->NativeInstance;
	Handle(::Geom_Surface) h_S2 = S2->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, h_S1, h_S2, *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance, (::GeomAbs_Shape)C);
	S1->NativeInstance = h_S1.get();
	S2->NativeInstance = h_S2.get();
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
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->Range(*(::TopoDS_Edge*)E->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, First, Last);
	S->NativeInstance = h_S.get();
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
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRep_Builder*)_NativeInstance)->UpdateVertex(*(::TopoDS_Vertex*)V->NativeInstance, P, *(::TopoDS_Edge*)E->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, Tol);
	S->NativeInstance = h_S.get();
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

Macad::Occt::BRep_TFace::BRep_TFace(Macad::Occt::BRep_TFace^ parameter1)
	: Macad::Occt::TopoDS_TFace(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_TFace(*(::BRep_TFace*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_TFace::Surface()
{
	Handle(::Geom_Surface) _result;
	_result = ((::BRep_TFace*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_TFace::Surface(Macad::Occt::Geom_Surface^ theSurface)
{
	Handle(::Geom_Surface) h_theSurface = theSurface->NativeInstance;
	((::BRep_TFace*)_NativeInstance)->Surface(h_theSurface);
	theSurface->NativeInstance = h_theSurface.get();
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BRep_TFace::Location()
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result =  (::TopLoc_Location)((::BRep_TFace*)_NativeInstance)->Location();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

void Macad::Occt::BRep_TFace::Location(Macad::Occt::TopLoc_Location^ theLocation)
{
	((::BRep_TFace*)_NativeInstance)->Location(*(::TopLoc_Location*)theLocation->NativeInstance);
}

double Macad::Occt::BRep_TFace::Tolerance()
{
	return ((::BRep_TFace*)_NativeInstance)->Tolerance();
}

void Macad::Occt::BRep_TFace::Tolerance(double theTolerance)
{
	((::BRep_TFace*)_NativeInstance)->Tolerance(theTolerance);
}

bool Macad::Occt::BRep_TFace::NaturalRestriction()
{
	return ((::BRep_TFace*)_NativeInstance)->NaturalRestriction();
}

void Macad::Occt::BRep_TFace::NaturalRestriction(bool theRestriction)
{
	((::BRep_TFace*)_NativeInstance)->NaturalRestriction(theRestriction);
}

Macad::Occt::TopoDS_TShape^ Macad::Occt::BRep_TFace::EmptyCopy()
{
	Handle(::TopoDS_TShape) _result;
	_result = ((::BRep_TFace*)_NativeInstance)->EmptyCopy();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted( _result.get());
}

int Macad::Occt::BRep_TFace::NbTriangulations()
{
	return ((::BRep_TFace*)_NativeInstance)->NbTriangulations();
}


Macad::Occt::BRep_TFace^ Macad::Occt::BRep_TFace::CreateDowncasted(::BRep_TFace* instance)
{
	return gcnew Macad::Occt::BRep_TFace( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_PointRepresentation
//---------------------------------------------------------------------

Macad::Occt::BRep_PointRepresentation::BRep_PointRepresentation(Macad::Occt::BRep_PointRepresentation^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_PointRepresentation(*(::BRep_PointRepresentation*)parameter1->NativeInstance);
}

bool Macad::Occt::BRep_PointRepresentation::IsPointOnCurve()
{
	return ((::BRep_PointRepresentation*)_NativeInstance)->IsPointOnCurve();
}

bool Macad::Occt::BRep_PointRepresentation::IsPointOnCurveOnSurface()
{
	return ((::BRep_PointRepresentation*)_NativeInstance)->IsPointOnCurveOnSurface();
}

bool Macad::Occt::BRep_PointRepresentation::IsPointOnSurface()
{
	return ((::BRep_PointRepresentation*)_NativeInstance)->IsPointOnSurface();
}

bool Macad::Occt::BRep_PointRepresentation::IsPointOnCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	return ((::BRep_PointRepresentation*)_NativeInstance)->IsPointOnCurve(h_C, *(::TopLoc_Location*)L->NativeInstance);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::BRep_PointRepresentation::IsPointOnCurveOnSurface(Macad::Occt::Geom2d_Curve^ PC, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom2d_Curve) h_PC = PC->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::BRep_PointRepresentation*)_NativeInstance)->IsPointOnCurveOnSurface(h_PC, h_S, *(::TopLoc_Location*)L->NativeInstance);
	PC->NativeInstance = h_PC.get();
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::BRep_PointRepresentation::IsPointOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::BRep_PointRepresentation*)_NativeInstance)->IsPointOnSurface(h_S, *(::TopLoc_Location*)L->NativeInstance);
	S->NativeInstance = h_S.get();
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BRep_PointRepresentation::Location()
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result =  (::TopLoc_Location)((::BRep_PointRepresentation*)_NativeInstance)->Location();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

void Macad::Occt::BRep_PointRepresentation::Location(Macad::Occt::TopLoc_Location^ L)
{
	((::BRep_PointRepresentation*)_NativeInstance)->Location(*(::TopLoc_Location*)L->NativeInstance);
}

double Macad::Occt::BRep_PointRepresentation::Parameter()
{
	return ((::BRep_PointRepresentation*)_NativeInstance)->Parameter();
}

void Macad::Occt::BRep_PointRepresentation::Parameter(double P)
{
	((::BRep_PointRepresentation*)_NativeInstance)->Parameter(P);
}

double Macad::Occt::BRep_PointRepresentation::Parameter2()
{
	return ((::BRep_PointRepresentation*)_NativeInstance)->Parameter2();
}

void Macad::Occt::BRep_PointRepresentation::Parameter2(double P)
{
	((::BRep_PointRepresentation*)_NativeInstance)->Parameter2(P);
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRep_PointRepresentation::Curve()
{
	Handle(::Geom_Curve) _result;
	_result = ((::BRep_PointRepresentation*)_NativeInstance)->Curve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_PointRepresentation::Curve(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRep_PointRepresentation*)_NativeInstance)->Curve(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_PointRepresentation::PCurve()
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::BRep_PointRepresentation*)_NativeInstance)->PCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_PointRepresentation::PCurve(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRep_PointRepresentation*)_NativeInstance)->PCurve(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_PointRepresentation::Surface()
{
	Handle(::Geom_Surface) _result;
	_result = ((::BRep_PointRepresentation*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_PointRepresentation::Surface(Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRep_PointRepresentation*)_NativeInstance)->Surface(h_S);
	S->NativeInstance = h_S.get();
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

Macad::Occt::BRep_TVertex::BRep_TVertex(Macad::Occt::BRep_TVertex^ parameter1)
	: Macad::Occt::TopoDS_TVertex(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_TVertex(*(::BRep_TVertex*)parameter1->NativeInstance);
}

double Macad::Occt::BRep_TVertex::Tolerance()
{
	return ((::BRep_TVertex*)_NativeInstance)->Tolerance();
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
	return Macad::Occt::Pnt(((::BRep_TVertex*)_NativeInstance)->Pnt());
}

void Macad::Occt::BRep_TVertex::Pnt(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::BRep_TVertex*)_NativeInstance)->Pnt(*(gp_Pnt*)pp_P);
}

Macad::Occt::BRep_ListOfPointRepresentation^ Macad::Occt::BRep_TVertex::Points()
{
	::BRep_ListOfPointRepresentation* _result = new ::BRep_ListOfPointRepresentation();
	*_result =  (::BRep_ListOfPointRepresentation)((::BRep_TVertex*)_NativeInstance)->Points();
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
	Handle(::TopoDS_TShape) _result;
	_result = ((::BRep_TVertex*)_NativeInstance)->EmptyCopy();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted( _result.get());
}


Macad::Occt::BRep_TVertex^ Macad::Occt::BRep_TVertex::CreateDowncasted(::BRep_TVertex* instance)
{
	return gcnew Macad::Occt::BRep_TVertex( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_Tool
//---------------------------------------------------------------------

Macad::Occt::BRep_Tool::BRep_Tool()
	: BaseClass<::BRep_Tool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRep_Tool();
}

Macad::Occt::BRep_Tool::BRep_Tool(Macad::Occt::BRep_Tool^ parameter1)
	: BaseClass<::BRep_Tool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRep_Tool(*(::BRep_Tool*)parameter1->NativeInstance);
}

bool Macad::Occt::BRep_Tool::IsClosed(Macad::Occt::TopoDS_Shape^ S)
{
	return ::BRep_Tool::IsClosed(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_Tool::Surface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom_Surface) _result;
	_result = ::BRep_Tool::Surface(*(::TopoDS_Face*)F->NativeInstance, *(::TopLoc_Location*)L->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_Tool::Surface(Macad::Occt::TopoDS_Face^ F)
{
	Handle(::Geom_Surface) _result;
	_result = ::BRep_Tool::Surface(*(::TopoDS_Face*)F->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

double Macad::Occt::BRep_Tool::Tolerance(Macad::Occt::TopoDS_Face^ F)
{
	return ::BRep_Tool::Tolerance(*(::TopoDS_Face*)F->NativeInstance);
}

bool Macad::Occt::BRep_Tool::NaturalRestriction(Macad::Occt::TopoDS_Face^ F)
{
	return ::BRep_Tool::NaturalRestriction(*(::TopoDS_Face*)F->NativeInstance);
}

bool Macad::Occt::BRep_Tool::IsGeometric(Macad::Occt::TopoDS_Face^ F)
{
	return ::BRep_Tool::IsGeometric(*(::TopoDS_Face*)F->NativeInstance);
}

bool Macad::Occt::BRep_Tool::IsGeometric(Macad::Occt::TopoDS_Edge^ E)
{
	return ::BRep_Tool::IsGeometric(*(::TopoDS_Edge*)E->NativeInstance);
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRep_Tool::Curve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopLoc_Location^ L, double% First, double% Last)
{
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	Handle(::Geom_Curve) _result;
	_result = ::BRep_Tool::Curve(*(::TopoDS_Edge*)E->NativeInstance, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRep_Tool::Curve(Macad::Occt::TopoDS_Edge^ E, double% First, double% Last)
{
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	Handle(::Geom_Curve) _result;
	_result = ::BRep_Tool::Curve(*(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_Tool::CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double% First, double% Last, bool% theIsStored)
{
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	pin_ptr<bool> pp_theIsStored = &theIsStored;
	Handle(::Geom2d_Curve) _result;
	_result = ::BRep_Tool::CurveOnSurface(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last, (Standard_Boolean*)pp_theIsStored);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_Tool::CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double% First, double% Last)
{
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	Handle(::Geom2d_Curve) _result;
	_result = ::BRep_Tool::CurveOnSurface(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last, 0);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_Tool::CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last, bool% theIsStored)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	pin_ptr<bool> pp_theIsStored = &theIsStored;
	Handle(::Geom2d_Curve) _result;
	_result = ::BRep_Tool::CurveOnSurface(*(::TopoDS_Edge*)E->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last, (Standard_Boolean*)pp_theIsStored);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_Tool::CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	Handle(::Geom2d_Curve) _result;
	_result = ::BRep_Tool::CurveOnSurface(*(::TopoDS_Edge*)E->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last, 0);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_Tool::CurveOnPlane(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	Handle(::Geom2d_Curve) _result;
	_result = ::BRep_Tool::CurveOnPlane(*(::TopoDS_Edge*)E->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_Tool::CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	::BRep_Tool::CurveOnSurface(*(::TopoDS_Edge*)E->NativeInstance, h_C, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRep_Tool::CurveOnSurface(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last, int Index)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	::BRep_Tool::CurveOnSurface(*(::TopoDS_Edge*)E->NativeInstance, h_C, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last, Index);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::BRep_Tool::IsClosed(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
	return ::BRep_Tool::IsClosed(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

bool Macad::Occt::BRep_Tool::IsClosed(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ::BRep_Tool::IsClosed(*(::TopoDS_Edge*)E->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance);
	S->NativeInstance = h_S.get();
}

double Macad::Occt::BRep_Tool::Tolerance(Macad::Occt::TopoDS_Edge^ E)
{
	return ::BRep_Tool::Tolerance(*(::TopoDS_Edge*)E->NativeInstance);
}

bool Macad::Occt::BRep_Tool::SameParameter(Macad::Occt::TopoDS_Edge^ E)
{
	return ::BRep_Tool::SameParameter(*(::TopoDS_Edge*)E->NativeInstance);
}

bool Macad::Occt::BRep_Tool::SameRange(Macad::Occt::TopoDS_Edge^ E)
{
	return ::BRep_Tool::SameRange(*(::TopoDS_Edge*)E->NativeInstance);
}

bool Macad::Occt::BRep_Tool::Degenerated(Macad::Occt::TopoDS_Edge^ E)
{
	return ::BRep_Tool::Degenerated(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRep_Tool::Range(Macad::Occt::TopoDS_Edge^ E, double% First, double% Last)
{
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	::BRep_Tool::Range(*(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last);
}

void Macad::Occt::BRep_Tool::Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% First, double% Last)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	::BRep_Tool::Range(*(::TopoDS_Edge*)E->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRep_Tool::Range(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, double% First, double% Last)
{
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	::BRep_Tool::Range(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last);
}

void Macad::Occt::BRep_Tool::UVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, Macad::Occt::Pnt2d% PFirst, Macad::Occt::Pnt2d% PLast)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_PFirst = &PFirst;
	pin_ptr<Macad::Occt::Pnt2d> pp_PLast = &PLast;
	::BRep_Tool::UVPoints(*(::TopoDS_Edge*)E->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(gp_Pnt2d*)pp_PFirst, *(gp_Pnt2d*)pp_PLast);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRep_Tool::UVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt2d% PFirst, Macad::Occt::Pnt2d% PLast)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_PFirst = &PFirst;
	pin_ptr<Macad::Occt::Pnt2d> pp_PLast = &PLast;
	::BRep_Tool::UVPoints(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt2d*)pp_PFirst, *(gp_Pnt2d*)pp_PLast);
}

void Macad::Occt::BRep_Tool::SetUVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, Macad::Occt::Pnt2d PFirst, Macad::Occt::Pnt2d PLast)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_PFirst = &PFirst;
	pin_ptr<Macad::Occt::Pnt2d> pp_PLast = &PLast;
	::BRep_Tool::SetUVPoints(*(::TopoDS_Edge*)E->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(gp_Pnt2d*)pp_PFirst, *(gp_Pnt2d*)pp_PLast);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRep_Tool::SetUVPoints(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt2d PFirst, Macad::Occt::Pnt2d PLast)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_PFirst = &PFirst;
	pin_ptr<Macad::Occt::Pnt2d> pp_PLast = &PLast;
	::BRep_Tool::SetUVPoints(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt2d*)pp_PFirst, *(gp_Pnt2d*)pp_PLast);
}

bool Macad::Occt::BRep_Tool::HasContinuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2)
{
	return ::BRep_Tool::HasContinuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRep_Tool::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2)
{
	return (Macad::Occt::GeomAbs_Shape)::BRep_Tool::Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
}

bool Macad::Occt::BRep_Tool::HasContinuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2)
{
	Handle(::Geom_Surface) h_S1 = S1->NativeInstance;
	Handle(::Geom_Surface) h_S2 = S2->NativeInstance;
	return ::BRep_Tool::HasContinuity(*(::TopoDS_Edge*)E->NativeInstance, h_S1, h_S2, *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance);
	S1->NativeInstance = h_S1.get();
	S2->NativeInstance = h_S2.get();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRep_Tool::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2)
{
	Handle(::Geom_Surface) h_S1 = S1->NativeInstance;
	Handle(::Geom_Surface) h_S2 = S2->NativeInstance;
	return (Macad::Occt::GeomAbs_Shape)::BRep_Tool::Continuity(*(::TopoDS_Edge*)E->NativeInstance, h_S1, h_S2, *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance);
	S1->NativeInstance = h_S1.get();
	S2->NativeInstance = h_S2.get();
}

bool Macad::Occt::BRep_Tool::HasContinuity(Macad::Occt::TopoDS_Edge^ E)
{
	return ::BRep_Tool::HasContinuity(*(::TopoDS_Edge*)E->NativeInstance);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRep_Tool::MaxContinuity(Macad::Occt::TopoDS_Edge^ theEdge)
{
	return (Macad::Occt::GeomAbs_Shape)::BRep_Tool::MaxContinuity(*(::TopoDS_Edge*)theEdge->NativeInstance);
}

Macad::Occt::Pnt Macad::Occt::BRep_Tool::Pnt(Macad::Occt::TopoDS_Vertex^ V)
{
	return Macad::Occt::Pnt(::BRep_Tool::Pnt(*(::TopoDS_Vertex*)V->NativeInstance));
}

double Macad::Occt::BRep_Tool::Tolerance(Macad::Occt::TopoDS_Vertex^ V)
{
	return ::BRep_Tool::Tolerance(*(::TopoDS_Vertex*)V->NativeInstance);
}

bool Macad::Occt::BRep_Tool::Parameter(Macad::Occt::TopoDS_Vertex^ theV, Macad::Occt::TopoDS_Edge^ theE, double% theParam)
{
	pin_ptr<double> pp_theParam = &theParam;
	return ::BRep_Tool::Parameter(*(::TopoDS_Vertex*)theV->NativeInstance, *(::TopoDS_Edge*)theE->NativeInstance, *(Standard_Real*)pp_theParam);
}

double Macad::Occt::BRep_Tool::Parameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E)
{
	return ::BRep_Tool::Parameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
}

double Macad::Occt::BRep_Tool::Parameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
	return ::BRep_Tool::Parameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

double Macad::Occt::BRep_Tool::Parameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ::BRep_Tool::Parameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance);
	S->NativeInstance = h_S.get();
}

Macad::Occt::Pnt2d Macad::Occt::BRep_Tool::Parameters(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Face^ F)
{
	return Macad::Occt::Pnt2d(::BRep_Tool::Parameters(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Face*)F->NativeInstance));
}

double Macad::Occt::BRep_Tool::MaxTolerance(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopAbs_ShapeEnum theSubShape)
{
	return ::BRep_Tool::MaxTolerance(*(::TopoDS_Shape*)theShape->NativeInstance, (::TopAbs_ShapeEnum)theSubShape);
}




//---------------------------------------------------------------------
//  Class  BRep_CurveRepresentation
//---------------------------------------------------------------------

Macad::Occt::BRep_CurveRepresentation::BRep_CurveRepresentation(Macad::Occt::BRep_CurveRepresentation^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

bool Macad::Occt::BRep_CurveRepresentation::IsCurve3D()
{
	return ((::BRep_CurveRepresentation*)_NativeInstance)->IsCurve3D();
}

bool Macad::Occt::BRep_CurveRepresentation::IsCurveOnSurface()
{
	return ((::BRep_CurveRepresentation*)_NativeInstance)->IsCurveOnSurface();
}

bool Macad::Occt::BRep_CurveRepresentation::IsRegularity()
{
	return ((::BRep_CurveRepresentation*)_NativeInstance)->IsRegularity();
}

bool Macad::Occt::BRep_CurveRepresentation::IsCurveOnClosedSurface()
{
	return ((::BRep_CurveRepresentation*)_NativeInstance)->IsCurveOnClosedSurface();
}

bool Macad::Occt::BRep_CurveRepresentation::IsCurveOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::BRep_CurveRepresentation*)_NativeInstance)->IsCurveOnSurface(h_S, *(::TopLoc_Location*)L->NativeInstance);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::BRep_CurveRepresentation::IsRegularity(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2)
{
	Handle(::Geom_Surface) h_S1 = S1->NativeInstance;
	Handle(::Geom_Surface) h_S2 = S2->NativeInstance;
	return ((::BRep_CurveRepresentation*)_NativeInstance)->IsRegularity(h_S1, h_S2, *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance);
	S1->NativeInstance = h_S1.get();
	S2->NativeInstance = h_S2.get();
}

bool Macad::Occt::BRep_CurveRepresentation::IsPolygon3D()
{
	return ((::BRep_CurveRepresentation*)_NativeInstance)->IsPolygon3D();
}

bool Macad::Occt::BRep_CurveRepresentation::IsPolygonOnTriangulation()
{
	return ((::BRep_CurveRepresentation*)_NativeInstance)->IsPolygonOnTriangulation();
}

bool Macad::Occt::BRep_CurveRepresentation::IsPolygonOnClosedTriangulation()
{
	return ((::BRep_CurveRepresentation*)_NativeInstance)->IsPolygonOnClosedTriangulation();
}

bool Macad::Occt::BRep_CurveRepresentation::IsPolygonOnSurface()
{
	return ((::BRep_CurveRepresentation*)_NativeInstance)->IsPolygonOnSurface();
}

bool Macad::Occt::BRep_CurveRepresentation::IsPolygonOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::BRep_CurveRepresentation*)_NativeInstance)->IsPolygonOnSurface(h_S, *(::TopLoc_Location*)L->NativeInstance);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::BRep_CurveRepresentation::IsPolygonOnClosedSurface()
{
	return ((::BRep_CurveRepresentation*)_NativeInstance)->IsPolygonOnClosedSurface();
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BRep_CurveRepresentation::Location()
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result =  (::TopLoc_Location)((::BRep_CurveRepresentation*)_NativeInstance)->Location();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

void Macad::Occt::BRep_CurveRepresentation::Location(Macad::Occt::TopLoc_Location^ L)
{
	((::BRep_CurveRepresentation*)_NativeInstance)->Location(*(::TopLoc_Location*)L->NativeInstance);
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRep_CurveRepresentation::Curve3D()
{
	Handle(::Geom_Curve) _result;
	_result = ((::BRep_CurveRepresentation*)_NativeInstance)->Curve3D();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_CurveRepresentation::Curve3D(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRep_CurveRepresentation*)_NativeInstance)->Curve3D(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_CurveRepresentation::Surface()
{
	Handle(::Geom_Surface) _result;
	_result = ((::BRep_CurveRepresentation*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_CurveRepresentation::PCurve()
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::BRep_CurveRepresentation*)_NativeInstance)->PCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_CurveRepresentation::PCurve(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRep_CurveRepresentation*)_NativeInstance)->PCurve(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_CurveRepresentation::PCurve2()
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::BRep_CurveRepresentation*)_NativeInstance)->PCurve2();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_CurveRepresentation::PCurve2(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRep_CurveRepresentation*)_NativeInstance)->PCurve2(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_CurveRepresentation::Surface2()
{
	Handle(::Geom_Surface) _result;
	_result = ((::BRep_CurveRepresentation*)_NativeInstance)->Surface2();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BRep_CurveRepresentation::Location2()
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result =  (::TopLoc_Location)((::BRep_CurveRepresentation*)_NativeInstance)->Location2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRep_CurveRepresentation::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::BRep_CurveRepresentation*)_NativeInstance)->Continuity();
}

void Macad::Occt::BRep_CurveRepresentation::Continuity(Macad::Occt::GeomAbs_Shape C)
{
	((::BRep_CurveRepresentation*)_NativeInstance)->Continuity((::GeomAbs_Shape)C);
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_CurveRepresentation::Copy()
{
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_CurveRepresentation*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
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

Macad::Occt::BRep_GCurve::BRep_GCurve(Macad::Occt::BRep_GCurve^ parameter1)
	: Macad::Occt::BRep_CurveRepresentation(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::BRep_GCurve::SetRange(double First, double Last)
{
	((::BRep_GCurve*)_NativeInstance)->SetRange(First, Last);
}

void Macad::Occt::BRep_GCurve::Range(double% First, double% Last)
{
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	((::BRep_GCurve*)_NativeInstance)->Range(*(Standard_Real*)pp_First, *(Standard_Real*)pp_Last);
}

double Macad::Occt::BRep_GCurve::First()
{
	return ((::BRep_GCurve*)_NativeInstance)->First();
}

double Macad::Occt::BRep_GCurve::Last()
{
	return ((::BRep_GCurve*)_NativeInstance)->Last();
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
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	NativeInstance = new ::BRep_Curve3D(h_C, *(::TopLoc_Location*)L->NativeInstance);
	C->NativeInstance = h_C.get();
}

Macad::Occt::BRep_Curve3D::BRep_Curve3D(Macad::Occt::BRep_Curve3D^ parameter1)
	: Macad::Occt::BRep_GCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_Curve3D(*(::BRep_Curve3D*)parameter1->NativeInstance);
}

void Macad::Occt::BRep_Curve3D::D0(double U, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::BRep_Curve3D*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

bool Macad::Occt::BRep_Curve3D::IsCurve3D()
{
	return ((::BRep_Curve3D*)_NativeInstance)->IsCurve3D();
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRep_Curve3D::Curve3D()
{
	Handle(::Geom_Curve) _result;
	_result = ((::BRep_Curve3D*)_NativeInstance)->Curve3D();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_Curve3D::Curve3D(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRep_Curve3D*)_NativeInstance)->Curve3D(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_Curve3D::Copy()
{
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_Curve3D*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
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
	Handle(::Geom_Surface) h_S1 = S1->NativeInstance;
	Handle(::Geom_Surface) h_S2 = S2->NativeInstance;
	NativeInstance = new ::BRep_CurveOn2Surfaces(h_S1, h_S2, *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance, (::GeomAbs_Shape)C);
	S1->NativeInstance = h_S1.get();
	S2->NativeInstance = h_S2.get();
}

Macad::Occt::BRep_CurveOn2Surfaces::BRep_CurveOn2Surfaces(Macad::Occt::BRep_CurveOn2Surfaces^ parameter1)
	: Macad::Occt::BRep_CurveRepresentation(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_CurveOn2Surfaces(*(::BRep_CurveOn2Surfaces*)parameter1->NativeInstance);
}

bool Macad::Occt::BRep_CurveOn2Surfaces::IsRegularity()
{
	return ((::BRep_CurveOn2Surfaces*)_NativeInstance)->IsRegularity();
}

bool Macad::Occt::BRep_CurveOn2Surfaces::IsRegularity(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2)
{
	Handle(::Geom_Surface) h_S1 = S1->NativeInstance;
	Handle(::Geom_Surface) h_S2 = S2->NativeInstance;
	return ((::BRep_CurveOn2Surfaces*)_NativeInstance)->IsRegularity(h_S1, h_S2, *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance);
	S1->NativeInstance = h_S1.get();
	S2->NativeInstance = h_S2.get();
}

void Macad::Occt::BRep_CurveOn2Surfaces::D0(double U, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::BRep_CurveOn2Surfaces*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_CurveOn2Surfaces::Surface()
{
	Handle(::Geom_Surface) _result;
	_result = ((::BRep_CurveOn2Surfaces*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_CurveOn2Surfaces::Surface2()
{
	Handle(::Geom_Surface) _result;
	_result = ((::BRep_CurveOn2Surfaces*)_NativeInstance)->Surface2();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BRep_CurveOn2Surfaces::Location2()
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result =  (::TopLoc_Location)((::BRep_CurveOn2Surfaces*)_NativeInstance)->Location2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRep_CurveOn2Surfaces::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::BRep_CurveOn2Surfaces*)_NativeInstance)->Continuity();
}

void Macad::Occt::BRep_CurveOn2Surfaces::Continuity(Macad::Occt::GeomAbs_Shape C)
{
	((::BRep_CurveOn2Surfaces*)_NativeInstance)->Continuity((::GeomAbs_Shape)C);
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_CurveOn2Surfaces::Copy()
{
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_CurveOn2Surfaces*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
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
	Handle(::Geom2d_Curve) h_PC = PC->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::BRep_CurveOnSurface(h_PC, h_S, *(::TopLoc_Location*)L->NativeInstance);
	PC->NativeInstance = h_PC.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRep_CurveOnSurface::BRep_CurveOnSurface(Macad::Occt::BRep_CurveOnSurface^ parameter1)
	: Macad::Occt::BRep_GCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_CurveOnSurface(*(::BRep_CurveOnSurface*)parameter1->NativeInstance);
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
	return ((::BRep_CurveOnSurface*)_NativeInstance)->IsCurveOnSurface();
}

bool Macad::Occt::BRep_CurveOnSurface::IsCurveOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::BRep_CurveOnSurface*)_NativeInstance)->IsCurveOnSurface(h_S, *(::TopLoc_Location*)L->NativeInstance);
	S->NativeInstance = h_S.get();
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_CurveOnSurface::Surface()
{
	Handle(::Geom_Surface) _result;
	_result = ((::BRep_CurveOnSurface*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_CurveOnSurface::PCurve()
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::BRep_CurveOnSurface*)_NativeInstance)->PCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_CurveOnSurface::PCurve(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRep_CurveOnSurface*)_NativeInstance)->PCurve(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_CurveOnSurface::Copy()
{
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_CurveOnSurface*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_CurveOnSurface::Update()
{
	((::BRep_CurveOnSurface*)_NativeInstance)->Update();
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
	Handle(::Geom2d_Curve) h_PC1 = PC1->NativeInstance;
	Handle(::Geom2d_Curve) h_PC2 = PC2->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::BRep_CurveOnClosedSurface(h_PC1, h_PC2, h_S, *(::TopLoc_Location*)L->NativeInstance, (::GeomAbs_Shape)C);
	PC1->NativeInstance = h_PC1.get();
	PC2->NativeInstance = h_PC2.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRep_CurveOnClosedSurface::BRep_CurveOnClosedSurface(Macad::Occt::BRep_CurveOnClosedSurface^ parameter1)
	: Macad::Occt::BRep_CurveOnSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_CurveOnClosedSurface(*(::BRep_CurveOnClosedSurface*)parameter1->NativeInstance);
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
	return ((::BRep_CurveOnClosedSurface*)_NativeInstance)->IsCurveOnClosedSurface();
}

bool Macad::Occt::BRep_CurveOnClosedSurface::IsRegularity()
{
	return ((::BRep_CurveOnClosedSurface*)_NativeInstance)->IsRegularity();
}

bool Macad::Occt::BRep_CurveOnClosedSurface::IsRegularity(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, Macad::Occt::TopLoc_Location^ L1, Macad::Occt::TopLoc_Location^ L2)
{
	Handle(::Geom_Surface) h_S1 = S1->NativeInstance;
	Handle(::Geom_Surface) h_S2 = S2->NativeInstance;
	return ((::BRep_CurveOnClosedSurface*)_NativeInstance)->IsRegularity(h_S1, h_S2, *(::TopLoc_Location*)L1->NativeInstance, *(::TopLoc_Location*)L2->NativeInstance);
	S1->NativeInstance = h_S1.get();
	S2->NativeInstance = h_S2.get();
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_CurveOnClosedSurface::PCurve2()
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::BRep_CurveOnClosedSurface*)_NativeInstance)->PCurve2();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_CurveOnClosedSurface::Surface2()
{
	Handle(::Geom_Surface) _result;
	_result = ((::BRep_CurveOnClosedSurface*)_NativeInstance)->Surface2();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BRep_CurveOnClosedSurface::Location2()
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result =  (::TopLoc_Location)((::BRep_CurveOnClosedSurface*)_NativeInstance)->Location2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRep_CurveOnClosedSurface::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::BRep_CurveOnClosedSurface*)_NativeInstance)->Continuity();
}

void Macad::Occt::BRep_CurveOnClosedSurface::Continuity(Macad::Occt::GeomAbs_Shape C)
{
	((::BRep_CurveOnClosedSurface*)_NativeInstance)->Continuity((::GeomAbs_Shape)C);
}

void Macad::Occt::BRep_CurveOnClosedSurface::PCurve2(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRep_CurveOnClosedSurface*)_NativeInstance)->PCurve2(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_CurveOnClosedSurface::Copy()
{
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_CurveOnClosedSurface*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_CurveOnClosedSurface::Update()
{
	((::BRep_CurveOnClosedSurface*)_NativeInstance)->Update();
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
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	NativeInstance = new ::BRep_PointOnCurve(P, h_C, *(::TopLoc_Location*)L->NativeInstance);
	C->NativeInstance = h_C.get();
}

Macad::Occt::BRep_PointOnCurve::BRep_PointOnCurve(Macad::Occt::BRep_PointOnCurve^ parameter1)
	: Macad::Occt::BRep_PointRepresentation(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_PointOnCurve(*(::BRep_PointOnCurve*)parameter1->NativeInstance);
}

bool Macad::Occt::BRep_PointOnCurve::IsPointOnCurve()
{
	return ((::BRep_PointOnCurve*)_NativeInstance)->IsPointOnCurve();
}

bool Macad::Occt::BRep_PointOnCurve::IsPointOnCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	return ((::BRep_PointOnCurve*)_NativeInstance)->IsPointOnCurve(h_C, *(::TopLoc_Location*)L->NativeInstance);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRep_PointOnCurve::Curve()
{
	Handle(::Geom_Curve) _result;
	_result = ((::BRep_PointOnCurve*)_NativeInstance)->Curve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_PointOnCurve::Curve(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRep_PointOnCurve*)_NativeInstance)->Curve(h_C);
	C->NativeInstance = h_C.get();
}


Macad::Occt::BRep_PointOnCurve^ Macad::Occt::BRep_PointOnCurve::CreateDowncasted(::BRep_PointOnCurve* instance)
{
	return gcnew Macad::Occt::BRep_PointOnCurve( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_PointsOnSurface
//---------------------------------------------------------------------

Macad::Occt::BRep_PointsOnSurface::BRep_PointsOnSurface(Macad::Occt::BRep_PointsOnSurface^ parameter1)
	: Macad::Occt::BRep_PointRepresentation(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_PointsOnSurface(*(::BRep_PointsOnSurface*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_PointsOnSurface::Surface()
{
	Handle(::Geom_Surface) _result;
	_result = ((::BRep_PointsOnSurface*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_PointsOnSurface::Surface(Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRep_PointsOnSurface*)_NativeInstance)->Surface(h_S);
	S->NativeInstance = h_S.get();
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
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::BRep_PointOnCurveOnSurface(P, h_C, h_S, *(::TopLoc_Location*)L->NativeInstance);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRep_PointOnCurveOnSurface::BRep_PointOnCurveOnSurface(Macad::Occt::BRep_PointOnCurveOnSurface^ parameter1)
	: Macad::Occt::BRep_PointsOnSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_PointOnCurveOnSurface(*(::BRep_PointOnCurveOnSurface*)parameter1->NativeInstance);
}

bool Macad::Occt::BRep_PointOnCurveOnSurface::IsPointOnCurveOnSurface()
{
	return ((::BRep_PointOnCurveOnSurface*)_NativeInstance)->IsPointOnCurveOnSurface();
}

bool Macad::Occt::BRep_PointOnCurveOnSurface::IsPointOnCurveOnSurface(Macad::Occt::Geom2d_Curve^ PC, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom2d_Curve) h_PC = PC->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::BRep_PointOnCurveOnSurface*)_NativeInstance)->IsPointOnCurveOnSurface(h_PC, h_S, *(::TopLoc_Location*)L->NativeInstance);
	PC->NativeInstance = h_PC.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRep_PointOnCurveOnSurface::PCurve()
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::BRep_PointOnCurveOnSurface*)_NativeInstance)->PCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::BRep_PointOnCurveOnSurface::PCurve(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRep_PointOnCurveOnSurface*)_NativeInstance)->PCurve(h_C);
	C->NativeInstance = h_C.get();
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
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::BRep_PointOnSurface(P1, P2, h_S, *(::TopLoc_Location*)L->NativeInstance);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRep_PointOnSurface::BRep_PointOnSurface(Macad::Occt::BRep_PointOnSurface^ parameter1)
	: Macad::Occt::BRep_PointsOnSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_PointOnSurface(*(::BRep_PointOnSurface*)parameter1->NativeInstance);
}

bool Macad::Occt::BRep_PointOnSurface::IsPointOnSurface()
{
	return ((::BRep_PointOnSurface*)_NativeInstance)->IsPointOnSurface();
}

bool Macad::Occt::BRep_PointOnSurface::IsPointOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::BRep_PointOnSurface*)_NativeInstance)->IsPointOnSurface(h_S, *(::TopLoc_Location*)L->NativeInstance);
	S->NativeInstance = h_S.get();
}

double Macad::Occt::BRep_PointOnSurface::Parameter2()
{
	return ((::BRep_PointOnSurface*)_NativeInstance)->Parameter2();
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

Macad::Occt::BRep_Polygon3D::BRep_Polygon3D(Macad::Occt::BRep_Polygon3D^ parameter1)
	: Macad::Occt::BRep_CurveRepresentation(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_Polygon3D(*(::BRep_Polygon3D*)parameter1->NativeInstance);
}

bool Macad::Occt::BRep_Polygon3D::IsPolygon3D()
{
	return ((::BRep_Polygon3D*)_NativeInstance)->IsPolygon3D();
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_Polygon3D::Copy()
{
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_Polygon3D*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
}


Macad::Occt::BRep_Polygon3D^ Macad::Occt::BRep_Polygon3D::CreateDowncasted(::BRep_Polygon3D* instance)
{
	return gcnew Macad::Occt::BRep_Polygon3D( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_PolygonOnSurface
//---------------------------------------------------------------------

Macad::Occt::BRep_PolygonOnSurface::BRep_PolygonOnSurface(Macad::Occt::BRep_PolygonOnSurface^ parameter1)
	: Macad::Occt::BRep_CurveRepresentation(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_PolygonOnSurface(*(::BRep_PolygonOnSurface*)parameter1->NativeInstance);
}

bool Macad::Occt::BRep_PolygonOnSurface::IsPolygonOnSurface()
{
	return ((::BRep_PolygonOnSurface*)_NativeInstance)->IsPolygonOnSurface();
}

bool Macad::Occt::BRep_PolygonOnSurface::IsPolygonOnSurface(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	return ((::BRep_PolygonOnSurface*)_NativeInstance)->IsPolygonOnSurface(h_S, *(::TopLoc_Location*)L->NativeInstance);
	S->NativeInstance = h_S.get();
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRep_PolygonOnSurface::Surface()
{
	Handle(::Geom_Surface) _result;
	_result = ((::BRep_PolygonOnSurface*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_PolygonOnSurface::Copy()
{
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_PolygonOnSurface*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
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

Macad::Occt::BRep_PolygonOnClosedSurface::BRep_PolygonOnClosedSurface(Macad::Occt::BRep_PolygonOnClosedSurface^ parameter1)
	: Macad::Occt::BRep_PolygonOnSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_PolygonOnClosedSurface(*(::BRep_PolygonOnClosedSurface*)parameter1->NativeInstance);
}

bool Macad::Occt::BRep_PolygonOnClosedSurface::IsPolygonOnClosedSurface()
{
	return ((::BRep_PolygonOnClosedSurface*)_NativeInstance)->IsPolygonOnClosedSurface();
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_PolygonOnClosedSurface::Copy()
{
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_PolygonOnClosedSurface*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
}


Macad::Occt::BRep_PolygonOnClosedSurface^ Macad::Occt::BRep_PolygonOnClosedSurface::CreateDowncasted(::BRep_PolygonOnClosedSurface* instance)
{
	return gcnew Macad::Occt::BRep_PolygonOnClosedSurface( instance );
}



//---------------------------------------------------------------------
//  Class  BRep_PolygonOnTriangulation
//---------------------------------------------------------------------

Macad::Occt::BRep_PolygonOnTriangulation::BRep_PolygonOnTriangulation(Macad::Occt::BRep_PolygonOnTriangulation^ parameter1)
	: Macad::Occt::BRep_CurveRepresentation(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_PolygonOnTriangulation(*(::BRep_PolygonOnTriangulation*)parameter1->NativeInstance);
}

bool Macad::Occt::BRep_PolygonOnTriangulation::IsPolygonOnTriangulation()
{
	return ((::BRep_PolygonOnTriangulation*)_NativeInstance)->IsPolygonOnTriangulation();
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_PolygonOnTriangulation::Copy()
{
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_PolygonOnTriangulation*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
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

Macad::Occt::BRep_PolygonOnClosedTriangulation::BRep_PolygonOnClosedTriangulation(Macad::Occt::BRep_PolygonOnClosedTriangulation^ parameter1)
	: Macad::Occt::BRep_PolygonOnTriangulation(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_PolygonOnClosedTriangulation(*(::BRep_PolygonOnClosedTriangulation*)parameter1->NativeInstance);
}

bool Macad::Occt::BRep_PolygonOnClosedTriangulation::IsPolygonOnClosedTriangulation()
{
	return ((::BRep_PolygonOnClosedTriangulation*)_NativeInstance)->IsPolygonOnClosedTriangulation();
}

Macad::Occt::BRep_CurveRepresentation^ Macad::Occt::BRep_PolygonOnClosedTriangulation::Copy()
{
	Handle(::BRep_CurveRepresentation) _result;
	_result = ((::BRep_PolygonOnClosedTriangulation*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRep_CurveRepresentation::CreateDowncasted( _result.get());
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

Macad::Occt::BRep_TEdge::BRep_TEdge(Macad::Occt::BRep_TEdge^ parameter1)
	: Macad::Occt::TopoDS_TEdge(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRep_TEdge(*(::BRep_TEdge*)parameter1->NativeInstance);
}

double Macad::Occt::BRep_TEdge::Tolerance()
{
	return ((::BRep_TEdge*)_NativeInstance)->Tolerance();
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
	return ((::BRep_TEdge*)_NativeInstance)->SameParameter();
}

void Macad::Occt::BRep_TEdge::SameParameter(bool S)
{
	((::BRep_TEdge*)_NativeInstance)->SameParameter(S);
}

bool Macad::Occt::BRep_TEdge::SameRange()
{
	return ((::BRep_TEdge*)_NativeInstance)->SameRange();
}

void Macad::Occt::BRep_TEdge::SameRange(bool S)
{
	((::BRep_TEdge*)_NativeInstance)->SameRange(S);
}

bool Macad::Occt::BRep_TEdge::Degenerated()
{
	return ((::BRep_TEdge*)_NativeInstance)->Degenerated();
}

void Macad::Occt::BRep_TEdge::Degenerated(bool S)
{
	((::BRep_TEdge*)_NativeInstance)->Degenerated(S);
}

Macad::Occt::BRep_ListOfCurveRepresentation^ Macad::Occt::BRep_TEdge::Curves()
{
	::BRep_ListOfCurveRepresentation* _result = new ::BRep_ListOfCurveRepresentation();
	*_result =  (::BRep_ListOfCurveRepresentation)((::BRep_TEdge*)_NativeInstance)->Curves();
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
	Handle(::TopoDS_TShape) _result;
	_result = ((::BRep_TEdge*)_NativeInstance)->EmptyCopy();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopoDS_TShape::CreateDowncasted( _result.get());
}


Macad::Occt::BRep_TEdge^ Macad::Occt::BRep_TEdge::CreateDowncasted(::BRep_TEdge* instance)
{
	return gcnew Macad::Occt::BRep_TEdge( instance );
}


