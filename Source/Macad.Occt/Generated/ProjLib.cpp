// Generated wrapper code for package ProjLib

#include "OcctPCH.h"
#include "ProjLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "ProjLib.h"
#include "Standard.h"
#include "TColgp.h"
#include "gp.h"
#include "Adaptor3d.h"
#include "GeomAdaptor.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "Geom.h"
#include "Geom2d.h"
#include "Adaptor2d.h"


//---------------------------------------------------------------------
//  Class  ProjLib_SequenceOfHSequenceOfPnt
//---------------------------------------------------------------------

Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::ProjLib_SequenceOfHSequenceOfPnt()
	: BaseClass<::ProjLib_SequenceOfHSequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_SequenceOfHSequenceOfPnt();
}

Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::ProjLib_SequenceOfHSequenceOfPnt(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::ProjLib_SequenceOfHSequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::ProjLib_SequenceOfHSequenceOfPnt(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::ProjLib_SequenceOfHSequenceOfPnt(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theOther)
	: BaseClass<::ProjLib_SequenceOfHSequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_SequenceOfHSequenceOfPnt(*(::ProjLib_SequenceOfHSequenceOfPnt*)theOther->NativeInstance);
}

int Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Size()
{
	return ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Size();
}

int Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Length()
{
	return ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Length();
}

int Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Lower()
{
	return ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Lower();
}

int Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Upper()
{
	return ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Upper();
}

bool Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::IsEmpty()
{
	return ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Reverse()
{
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Reverse();
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Exchange(int I, int J)
{
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Clear()
{
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Clear(0L);
}

Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Assign(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theOther)
{
	::ProjLib_SequenceOfHSequenceOfPnt* _result = new ::ProjLib_SequenceOfHSequenceOfPnt();
	*_result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Assign(*(::ProjLib_SequenceOfHSequenceOfPnt*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt(_result);
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Remove(int theIndex)
{
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Remove(int theFromIndex, int theToIndex)
{
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Append(Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
	Handle(::TColgp_HSequenceOfPnt) h_theItem = theItem->NativeInstance;
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Append(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSeq)
{
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Append(*(::ProjLib_SequenceOfHSequenceOfPnt*)theSeq->NativeInstance);
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Prepend(Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
	Handle(::TColgp_HSequenceOfPnt) h_theItem = theItem->NativeInstance;
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Prepend(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSeq)
{
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Prepend(*(::ProjLib_SequenceOfHSequenceOfPnt*)theSeq->NativeInstance);
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::InsertBefore(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
	Handle(::TColgp_HSequenceOfPnt) h_theItem = theItem->NativeInstance;
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::InsertBefore(int theIndex, Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSeq)
{
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->InsertBefore(theIndex, *(::ProjLib_SequenceOfHSequenceOfPnt*)theSeq->NativeInstance);
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::InsertAfter(int theIndex, Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSeq)
{
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->InsertAfter(theIndex, *(::ProjLib_SequenceOfHSequenceOfPnt*)theSeq->NativeInstance);
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::InsertAfter(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
	Handle(::TColgp_HSequenceOfPnt) h_theItem = theItem->NativeInstance;
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Split(int theIndex, Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSeq)
{
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Split(theIndex, *(::ProjLib_SequenceOfHSequenceOfPnt*)theSeq->NativeInstance);
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::First()
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::ChangeFirst()
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Last()
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::ChangeLast()
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Value(int theIndex)
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::ChangeValue(int theIndex)
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

void Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::SetValue(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
	Handle(::TColgp_HSequenceOfPnt) h_theItem = theItem->NativeInstance;
	((::ProjLib_SequenceOfHSequenceOfPnt*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  ProjLib_ProjectOnPlane
//---------------------------------------------------------------------

Macad::Occt::ProjLib_ProjectOnPlane::ProjLib_ProjectOnPlane()
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_ProjectOnPlane();
}

Macad::Occt::ProjLib_ProjectOnPlane::ProjLib_ProjectOnPlane(Macad::Occt::Ax3 Pl)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax3> pp_Pl = &Pl;
	_NativeInstance = new ::ProjLib_ProjectOnPlane(*(gp_Ax3*)pp_Pl);
}

Macad::Occt::ProjLib_ProjectOnPlane::ProjLib_ProjectOnPlane(Macad::Occt::Ax3 Pl, Macad::Occt::Dir D)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax3> pp_Pl = &Pl;
	pin_ptr<Macad::Occt::Dir> pp_D = &D;
	_NativeInstance = new ::ProjLib_ProjectOnPlane(*(gp_Ax3*)pp_Pl, *(gp_Dir*)pp_D);
}

Macad::Occt::ProjLib_ProjectOnPlane::ProjLib_ProjectOnPlane(Macad::Occt::ProjLib_ProjectOnPlane^ parameter1)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_ProjectOnPlane(*(::ProjLib_ProjectOnPlane*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_ProjectOnPlane::Load(Macad::Occt::Adaptor3d_HCurve^ C, double Tolerance, bool KeepParametrization)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	((::ProjLib_ProjectOnPlane*)_NativeInstance)->Load(h_C, Tolerance, KeepParametrization);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::ProjLib_ProjectOnPlane::Load(Macad::Occt::Adaptor3d_HCurve^ C, double Tolerance)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	((::ProjLib_ProjectOnPlane*)_NativeInstance)->Load(h_C, Tolerance, true);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Ax3 Macad::Occt::ProjLib_ProjectOnPlane::GetPlane()
{
	return Macad::Occt::Ax3(((::ProjLib_ProjectOnPlane*)_NativeInstance)->GetPlane());
}

Macad::Occt::Dir Macad::Occt::ProjLib_ProjectOnPlane::GetDirection()
{
	return Macad::Occt::Dir(((::ProjLib_ProjectOnPlane*)_NativeInstance)->GetDirection());
}

Macad::Occt::Adaptor3d_HCurve^ Macad::Occt::ProjLib_ProjectOnPlane::GetCurve()
{
	Handle(::Adaptor3d_HCurve) _result;
	_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->GetCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HCurve::CreateDowncasted( _result.get());
}

Macad::Occt::GeomAdaptor_HCurve^ Macad::Occt::ProjLib_ProjectOnPlane::GetResult()
{
	Handle(::GeomAdaptor_HCurve) _result;
	_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->GetResult();
	 return _result.IsNull() ? nullptr : Macad::Occt::GeomAdaptor_HCurve::CreateDowncasted( _result.get());
}

double Macad::Occt::ProjLib_ProjectOnPlane::FirstParameter()
{
	return ((::ProjLib_ProjectOnPlane*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::ProjLib_ProjectOnPlane::LastParameter()
{
	return ((::ProjLib_ProjectOnPlane*)_NativeInstance)->LastParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::ProjLib_ProjectOnPlane::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::ProjLib_ProjectOnPlane*)_NativeInstance)->Continuity();
}

int Macad::Occt::ProjLib_ProjectOnPlane::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::ProjLib_ProjectOnPlane*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::ProjLib_ProjectOnPlane::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::ProjLib_ProjectOnPlane*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_HCurve^ Macad::Occt::ProjLib_ProjectOnPlane::Trim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_HCurve) _result;
	_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Trim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HCurve::CreateDowncasted( _result.get());
}

bool Macad::Occt::ProjLib_ProjectOnPlane::IsClosed()
{
	return ((::ProjLib_ProjectOnPlane*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::ProjLib_ProjectOnPlane::IsPeriodic()
{
	return ((::ProjLib_ProjectOnPlane*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::ProjLib_ProjectOnPlane::Period()
{
	return ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Period();
}

Macad::Occt::Pnt Macad::Occt::ProjLib_ProjectOnPlane::Value(double U)
{
	return Macad::Occt::Pnt(((::ProjLib_ProjectOnPlane*)_NativeInstance)->Value(U));
}

void Macad::Occt::ProjLib_ProjectOnPlane::D0(double U, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::ProjLib_ProjectOnPlane*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void Macad::Occt::ProjLib_ProjectOnPlane::D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::ProjLib_ProjectOnPlane*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void Macad::Occt::ProjLib_ProjectOnPlane::D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	((::ProjLib_ProjectOnPlane*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::ProjLib_ProjectOnPlane::D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	((::ProjLib_ProjectOnPlane*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

Macad::Occt::Vec Macad::Occt::ProjLib_ProjectOnPlane::DN(double U, int N)
{
	return Macad::Occt::Vec(((::ProjLib_ProjectOnPlane*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::ProjLib_ProjectOnPlane::Resolution(double R3d)
{
	return ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Resolution(R3d);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::ProjLib_ProjectOnPlane::GetGeomType()
{
	return (Macad::Occt::GeomAbs_CurveType)((::ProjLib_ProjectOnPlane*)_NativeInstance)->GetType();
}

Macad::Occt::gp_Lin^ Macad::Occt::ProjLib_ProjectOnPlane::Line()
{
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::ProjLib_ProjectOnPlane::Circle()
{
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::ProjLib_ProjectOnPlane::Ellipse()
{
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::ProjLib_ProjectOnPlane::Hyperbola()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::ProjLib_ProjectOnPlane::Parabola()
{
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

int Macad::Occt::ProjLib_ProjectOnPlane::Degree()
{
	return ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Degree();
}

bool Macad::Occt::ProjLib_ProjectOnPlane::IsRational()
{
	return ((::ProjLib_ProjectOnPlane*)_NativeInstance)->IsRational();
}

int Macad::Occt::ProjLib_ProjectOnPlane::NbPoles()
{
	return ((::ProjLib_ProjectOnPlane*)_NativeInstance)->NbPoles();
}

int Macad::Occt::ProjLib_ProjectOnPlane::NbKnots()
{
	return ((::ProjLib_ProjectOnPlane*)_NativeInstance)->NbKnots();
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::ProjLib_ProjectOnPlane::Bezier()
{
	Handle(::Geom_BezierCurve) _result;
	_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::ProjLib_ProjectOnPlane::BSpline()
{
	Handle(::Geom_BSplineCurve) _result;
	_result = ((::ProjLib_ProjectOnPlane*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  ProjLib_ProjectOnSurface
//---------------------------------------------------------------------

Macad::Occt::ProjLib_ProjectOnSurface::ProjLib_ProjectOnSurface()
	: BaseClass<::ProjLib_ProjectOnSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_ProjectOnSurface();
}

Macad::Occt::ProjLib_ProjectOnSurface::ProjLib_ProjectOnSurface(Macad::Occt::Adaptor3d_HSurface^ S)
	: BaseClass<::ProjLib_ProjectOnSurface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	_NativeInstance = new ::ProjLib_ProjectOnSurface(h_S);
	S->NativeInstance = h_S.get();
}

Macad::Occt::ProjLib_ProjectOnSurface::ProjLib_ProjectOnSurface(Macad::Occt::ProjLib_ProjectOnSurface^ parameter1)
	: BaseClass<::ProjLib_ProjectOnSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_ProjectOnSurface(*(::ProjLib_ProjectOnSurface*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_ProjectOnSurface::Load(Macad::Occt::Adaptor3d_HSurface^ S)
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}

void Macad::Occt::ProjLib_ProjectOnSurface::Load(Macad::Occt::Adaptor3d_HCurve^ C, double Tolerance)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	((::ProjLib_ProjectOnSurface*)_NativeInstance)->Load(h_C, Tolerance);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::ProjLib_ProjectOnSurface::IsDone()
{
	return ((::ProjLib_ProjectOnSurface*)_NativeInstance)->IsDone();
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::ProjLib_ProjectOnSurface::BSpline()
{
	Handle(::Geom_BSplineCurve) _result;
	_result = ((::ProjLib_ProjectOnSurface*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  ProjLib_ComputeApprox
//---------------------------------------------------------------------

Macad::Occt::ProjLib_ComputeApprox::ProjLib_ComputeApprox()
	: BaseClass<::ProjLib_ComputeApprox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_ComputeApprox();
}

Macad::Occt::ProjLib_ComputeApprox::ProjLib_ComputeApprox(Macad::Occt::Adaptor3d_HCurve^ C, Macad::Occt::Adaptor3d_HSurface^ S, double Tol)
	: BaseClass<::ProjLib_ComputeApprox>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	_NativeInstance = new ::ProjLib_ComputeApprox(h_C, h_S, Tol);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::ProjLib_ComputeApprox::ProjLib_ComputeApprox(Macad::Occt::ProjLib_ComputeApprox^ parameter1)
	: BaseClass<::ProjLib_ComputeApprox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_ComputeApprox(*(::ProjLib_ComputeApprox*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_ComputeApprox::Perform(Macad::Occt::Adaptor3d_HCurve^ C, Macad::Occt::Adaptor3d_HSurface^ S)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	((::ProjLib_ComputeApprox*)_NativeInstance)->Perform(h_C, h_S);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::ProjLib_ComputeApprox::SetTolerance(double theTolerance)
{
	((::ProjLib_ComputeApprox*)_NativeInstance)->SetTolerance(theTolerance);
}

void Macad::Occt::ProjLib_ComputeApprox::SetDegree(int theDegMin, int theDegMax)
{
	((::ProjLib_ComputeApprox*)_NativeInstance)->SetDegree(theDegMin, theDegMax);
}

void Macad::Occt::ProjLib_ComputeApprox::SetMaxSegments(int theMaxSegments)
{
	((::ProjLib_ComputeApprox*)_NativeInstance)->SetMaxSegments(theMaxSegments);
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::ProjLib_ComputeApprox::BSpline()
{
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::ProjLib_ComputeApprox*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::ProjLib_ComputeApprox::Bezier()
{
	Handle(::Geom2d_BezierCurve) _result;
	_result = ((::ProjLib_ComputeApprox*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted( _result.get());
}

double Macad::Occt::ProjLib_ComputeApprox::Tolerance()
{
	return ((::ProjLib_ComputeApprox*)_NativeInstance)->Tolerance();
}




//---------------------------------------------------------------------
//  Class  ProjLib_ComputeApproxOnPolarSurface
//---------------------------------------------------------------------

Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::ProjLib_ComputeApproxOnPolarSurface()
	: BaseClass<::ProjLib_ComputeApproxOnPolarSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_ComputeApproxOnPolarSurface();
}

Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::Adaptor3d_HCurve^ C, Macad::Occt::Adaptor3d_HSurface^ S, double Tol)
	: BaseClass<::ProjLib_ComputeApproxOnPolarSurface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	_NativeInstance = new ::ProjLib_ComputeApproxOnPolarSurface(h_C, h_S, Tol);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::Adaptor3d_HCurve^ C, Macad::Occt::Adaptor3d_HSurface^ S)
	: BaseClass<::ProjLib_ComputeApproxOnPolarSurface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	_NativeInstance = new ::ProjLib_ComputeApproxOnPolarSurface(h_C, h_S, 1.0E-4);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::Adaptor2d_HCurve2d^ InitCurve2d, Macad::Occt::Adaptor3d_HCurve^ C, Macad::Occt::Adaptor3d_HSurface^ S, double Tol)
	: BaseClass<::ProjLib_ComputeApproxOnPolarSurface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor2d_HCurve2d) h_InitCurve2d = InitCurve2d->NativeInstance;
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	_NativeInstance = new ::ProjLib_ComputeApproxOnPolarSurface(h_InitCurve2d, h_C, h_S, Tol);
	InitCurve2d->NativeInstance = h_InitCurve2d.get();
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::Adaptor2d_HCurve2d^ InitCurve2d, Macad::Occt::Adaptor2d_HCurve2d^ InitCurve2dBis, Macad::Occt::Adaptor3d_HCurve^ C, Macad::Occt::Adaptor3d_HSurface^ S, double Tol)
	: BaseClass<::ProjLib_ComputeApproxOnPolarSurface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor2d_HCurve2d) h_InitCurve2d = InitCurve2d->NativeInstance;
	Handle(::Adaptor2d_HCurve2d) h_InitCurve2dBis = InitCurve2dBis->NativeInstance;
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	_NativeInstance = new ::ProjLib_ComputeApproxOnPolarSurface(h_InitCurve2d, h_InitCurve2dBis, h_C, h_S, Tol);
	InitCurve2d->NativeInstance = h_InitCurve2d.get();
	InitCurve2dBis->NativeInstance = h_InitCurve2dBis.get();
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::ProjLib_ComputeApproxOnPolarSurface^ parameter1)
	: BaseClass<::ProjLib_ComputeApproxOnPolarSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_ComputeApproxOnPolarSurface(*(::ProjLib_ComputeApproxOnPolarSurface*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::SetDegree(int theDegMin, int theDegMax)
{
	((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->SetDegree(theDegMin, theDegMax);
}

void Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::SetMaxSegments(int theMaxSegments)
{
	((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->SetMaxSegments(theMaxSegments);
}

void Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::SetMaxDist(double theMaxDist)
{
	((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->SetMaxDist(theMaxDist);
}

void Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::SetTolerance(double theTolerance)
{
	((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->SetTolerance(theTolerance);
}

void Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::Perform(Macad::Occt::Adaptor3d_HCurve^ C, Macad::Occt::Adaptor3d_HSurface^ S)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->Perform(h_C, h_S);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::Perform(Macad::Occt::Adaptor2d_HCurve2d^ InitCurve2d, Macad::Occt::Adaptor3d_HCurve^ C, Macad::Occt::Adaptor3d_HSurface^ S)
{
	Handle(::Adaptor2d_HCurve2d) h_InitCurve2d = InitCurve2d->NativeInstance;
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->Perform(h_InitCurve2d, h_C, h_S);
	InitCurve2d->NativeInstance = h_InitCurve2d.get();
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor2d_HCurve2d^ Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::BuildInitialCurve2d(Macad::Occt::Adaptor3d_HCurve^ Curve, Macad::Occt::Adaptor3d_HSurface^ S)
{
	Handle(::Adaptor3d_HCurve) h_Curve = Curve->NativeInstance;
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	Handle(::Adaptor2d_HCurve2d) _result;
	_result = ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->BuildInitialCurve2d(h_Curve, h_S);
	Curve->NativeInstance = h_Curve.get();
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_HCurve2d::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::ProjectUsingInitialCurve2d(Macad::Occt::Adaptor3d_HCurve^ Curve, Macad::Occt::Adaptor3d_HSurface^ S, Macad::Occt::Adaptor2d_HCurve2d^ InitCurve2d)
{
	Handle(::Adaptor3d_HCurve) h_Curve = Curve->NativeInstance;
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	Handle(::Adaptor2d_HCurve2d) h_InitCurve2d = InitCurve2d->NativeInstance;
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->ProjectUsingInitialCurve2d(h_Curve, h_S, h_InitCurve2d);
	Curve->NativeInstance = h_Curve.get();
	S->NativeInstance = h_S.get();
	InitCurve2d->NativeInstance = h_InitCurve2d.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::BSpline()
{
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::Curve2d()
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->Curve2d();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

bool Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::IsDone()
{
	return ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->IsDone();
}

double Macad::Occt::ProjLib_ComputeApproxOnPolarSurface::Tolerance()
{
	return ((::ProjLib_ComputeApproxOnPolarSurface*)_NativeInstance)->Tolerance();
}




//---------------------------------------------------------------------
//  Class  ProjLib_ProjectedCurve
//---------------------------------------------------------------------

Macad::Occt::ProjLib_ProjectedCurve::ProjLib_ProjectedCurve()
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_ProjectedCurve();
}

Macad::Occt::ProjLib_ProjectedCurve::ProjLib_ProjectedCurve(Macad::Occt::Adaptor3d_HSurface^ S)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	_NativeInstance = new ::ProjLib_ProjectedCurve(h_S);
	S->NativeInstance = h_S.get();
}

Macad::Occt::ProjLib_ProjectedCurve::ProjLib_ProjectedCurve(Macad::Occt::Adaptor3d_HSurface^ S, Macad::Occt::Adaptor3d_HCurve^ C)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	_NativeInstance = new ::ProjLib_ProjectedCurve(h_S, h_C);
	S->NativeInstance = h_S.get();
	C->NativeInstance = h_C.get();
}

Macad::Occt::ProjLib_ProjectedCurve::ProjLib_ProjectedCurve(Macad::Occt::Adaptor3d_HSurface^ S, Macad::Occt::Adaptor3d_HCurve^ C, double Tol)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	_NativeInstance = new ::ProjLib_ProjectedCurve(h_S, h_C, Tol);
	S->NativeInstance = h_S.get();
	C->NativeInstance = h_C.get();
}

Macad::Occt::ProjLib_ProjectedCurve::ProjLib_ProjectedCurve(Macad::Occt::ProjLib_ProjectedCurve^ parameter1)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_ProjectedCurve(*(::ProjLib_ProjectedCurve*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_ProjectedCurve::Load(double Tolerance)
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}

void Macad::Occt::ProjLib_ProjectedCurve::Load(Macad::Occt::Adaptor3d_HSurface^ S)
{
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	((::ProjLib_ProjectedCurve*)_NativeInstance)->Load(h_S);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::ProjLib_ProjectedCurve::Perform(Macad::Occt::Adaptor3d_HCurve^ C)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	((::ProjLib_ProjectedCurve*)_NativeInstance)->Perform(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::ProjLib_ProjectedCurve::SetDegree(int theDegMin, int theDegMax)
{
	((::ProjLib_ProjectedCurve*)_NativeInstance)->SetDegree(theDegMin, theDegMax);
}

void Macad::Occt::ProjLib_ProjectedCurve::SetMaxSegments(int theMaxSegments)
{
	((::ProjLib_ProjectedCurve*)_NativeInstance)->SetMaxSegments(theMaxSegments);
}

void Macad::Occt::ProjLib_ProjectedCurve::SetMaxDist(double theMaxDist)
{
	((::ProjLib_ProjectedCurve*)_NativeInstance)->SetMaxDist(theMaxDist);
}

Macad::Occt::Adaptor3d_HSurface^ Macad::Occt::ProjLib_ProjectedCurve::GetSurface()
{
	Handle(::Adaptor3d_HSurface) _result;
	_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->GetSurface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_HCurve^ Macad::Occt::ProjLib_ProjectedCurve::GetCurve()
{
	Handle(::Adaptor3d_HCurve) _result;
	_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->GetCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HCurve::CreateDowncasted( _result.get());
}

double Macad::Occt::ProjLib_ProjectedCurve::GetTolerance()
{
	return ((::ProjLib_ProjectedCurve*)_NativeInstance)->GetTolerance();
}

double Macad::Occt::ProjLib_ProjectedCurve::FirstParameter()
{
	return ((::ProjLib_ProjectedCurve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::ProjLib_ProjectedCurve::LastParameter()
{
	return ((::ProjLib_ProjectedCurve*)_NativeInstance)->LastParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::ProjLib_ProjectedCurve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::ProjLib_ProjectedCurve*)_NativeInstance)->Continuity();
}

int Macad::Occt::ProjLib_ProjectedCurve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::ProjLib_ProjectedCurve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::ProjLib_ProjectedCurve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::ProjLib_ProjectedCurve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor2d_HCurve2d^ Macad::Occt::ProjLib_ProjectedCurve::Trim(double First, double Last, double Tol)
{
	Handle(::Adaptor2d_HCurve2d) _result;
	_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Trim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_HCurve2d::CreateDowncasted( _result.get());
}

bool Macad::Occt::ProjLib_ProjectedCurve::IsClosed()
{
	return ((::ProjLib_ProjectedCurve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::ProjLib_ProjectedCurve::IsPeriodic()
{
	return ((::ProjLib_ProjectedCurve*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::ProjLib_ProjectedCurve::Period()
{
	return ((::ProjLib_ProjectedCurve*)_NativeInstance)->Period();
}

Macad::Occt::Pnt2d Macad::Occt::ProjLib_ProjectedCurve::Value(double U)
{
	return Macad::Occt::Pnt2d(((::ProjLib_ProjectedCurve*)_NativeInstance)->Value(U));
}

void Macad::Occt::ProjLib_ProjectedCurve::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::ProjLib_ProjectedCurve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::ProjLib_ProjectedCurve::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::ProjLib_ProjectedCurve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V);
}

void Macad::Occt::ProjLib_ProjectedCurve::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::ProjLib_ProjectedCurve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::ProjLib_ProjectedCurve::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::ProjLib_ProjectedCurve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::ProjLib_ProjectedCurve::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::ProjLib_ProjectedCurve*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::ProjLib_ProjectedCurve::Resolution(double R3d)
{
	return ((::ProjLib_ProjectedCurve*)_NativeInstance)->Resolution(R3d);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::ProjLib_ProjectedCurve::GetGeomType()
{
	return (Macad::Occt::GeomAbs_CurveType)((::ProjLib_ProjectedCurve*)_NativeInstance)->GetType();
}

Macad::Occt::gp_Lin2d^ Macad::Occt::ProjLib_ProjectedCurve::Line()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::ProjLib_ProjectedCurve::Circle()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::ProjLib_ProjectedCurve::Ellipse()
{
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::ProjLib_ProjectedCurve::Hyperbola()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::ProjLib_ProjectedCurve::Parabola()
{
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

int Macad::Occt::ProjLib_ProjectedCurve::Degree()
{
	return ((::ProjLib_ProjectedCurve*)_NativeInstance)->Degree();
}

bool Macad::Occt::ProjLib_ProjectedCurve::IsRational()
{
	return ((::ProjLib_ProjectedCurve*)_NativeInstance)->IsRational();
}

int Macad::Occt::ProjLib_ProjectedCurve::NbPoles()
{
	return ((::ProjLib_ProjectedCurve*)_NativeInstance)->NbPoles();
}

int Macad::Occt::ProjLib_ProjectedCurve::NbKnots()
{
	return ((::ProjLib_ProjectedCurve*)_NativeInstance)->NbKnots();
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::ProjLib_ProjectedCurve::Bezier()
{
	Handle(::Geom2d_BezierCurve) _result;
	_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::ProjLib_ProjectedCurve::BSpline()
{
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::ProjLib_ProjectedCurve*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  ProjLib_HProjectedCurve
//---------------------------------------------------------------------

Macad::Occt::ProjLib_HProjectedCurve::ProjLib_HProjectedCurve()
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ProjLib_HProjectedCurve();
}

Macad::Occt::ProjLib_HProjectedCurve::ProjLib_HProjectedCurve(Macad::Occt::ProjLib_ProjectedCurve^ C)
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ProjLib_HProjectedCurve(*(::ProjLib_ProjectedCurve*)C->NativeInstance);
}

Macad::Occt::ProjLib_HProjectedCurve::ProjLib_HProjectedCurve(Macad::Occt::ProjLib_HProjectedCurve^ parameter1)
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ProjLib_HProjectedCurve(*(::ProjLib_HProjectedCurve*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_HProjectedCurve::Set(Macad::Occt::ProjLib_ProjectedCurve^ C)
{
	((::ProjLib_HProjectedCurve*)_NativeInstance)->Set(*(::ProjLib_ProjectedCurve*)C->NativeInstance);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::ProjLib_HProjectedCurve::Curve2d()
{
	::Adaptor2d_Curve2d* _result = new ::Adaptor2d_Curve2d();
	*_result =  (::Adaptor2d_Curve2d)((::ProjLib_HProjectedCurve*)_NativeInstance)->Curve2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor2d_Curve2d(_result);
}

Macad::Occt::ProjLib_ProjectedCurve^ Macad::Occt::ProjLib_HProjectedCurve::ChangeCurve2d()
{
	::ProjLib_ProjectedCurve* _result = new ::ProjLib_ProjectedCurve();
	*_result = ((::ProjLib_HProjectedCurve*)_NativeInstance)->ChangeCurve2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ProjLib_ProjectedCurve(_result);
}


Macad::Occt::ProjLib_HProjectedCurve^ Macad::Occt::ProjLib_HProjectedCurve::CreateDowncasted(::ProjLib_HProjectedCurve* instance)
{
	return gcnew Macad::Occt::ProjLib_HProjectedCurve( instance );
}



//---------------------------------------------------------------------
//  Class  ProjLib_CompProjectedCurve
//---------------------------------------------------------------------

Macad::Occt::ProjLib_CompProjectedCurve::ProjLib_CompProjectedCurve()
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_CompProjectedCurve();
}

Macad::Occt::ProjLib_CompProjectedCurve::ProjLib_CompProjectedCurve(Macad::Occt::Adaptor3d_HSurface^ S, Macad::Occt::Adaptor3d_HCurve^ C, double TolU, double TolV)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	_NativeInstance = new ::ProjLib_CompProjectedCurve(h_S, h_C, TolU, TolV);
	S->NativeInstance = h_S.get();
	C->NativeInstance = h_C.get();
}

Macad::Occt::ProjLib_CompProjectedCurve::ProjLib_CompProjectedCurve(Macad::Occt::Adaptor3d_HSurface^ S, Macad::Occt::Adaptor3d_HCurve^ C, double TolU, double TolV, double MaxDist)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	_NativeInstance = new ::ProjLib_CompProjectedCurve(h_S, h_C, TolU, TolV, MaxDist);
	S->NativeInstance = h_S.get();
	C->NativeInstance = h_C.get();
}

Macad::Occt::ProjLib_CompProjectedCurve::ProjLib_CompProjectedCurve(Macad::Occt::ProjLib_CompProjectedCurve^ parameter1)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_CompProjectedCurve(*(::ProjLib_CompProjectedCurve*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_CompProjectedCurve::Init()
{
	((::ProjLib_CompProjectedCurve*)_NativeInstance)->Init();
}

void Macad::Occt::ProjLib_CompProjectedCurve::Load(Macad::Occt::Adaptor3d_HSurface^ S)
{
	Handle(::Adaptor3d_HSurface) h_S = S->NativeInstance;
	((::ProjLib_CompProjectedCurve*)_NativeInstance)->Load(h_S);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::ProjLib_CompProjectedCurve::Load(Macad::Occt::Adaptor3d_HCurve^ C)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	((::ProjLib_CompProjectedCurve*)_NativeInstance)->Load(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Adaptor3d_HSurface^ Macad::Occt::ProjLib_CompProjectedCurve::GetSurface()
{
	Handle(::Adaptor3d_HSurface) _result;
	_result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetSurface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_HCurve^ Macad::Occt::ProjLib_CompProjectedCurve::GetCurve()
{
	Handle(::Adaptor3d_HCurve) _result;
	_result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HCurve::CreateDowncasted( _result.get());
}

void Macad::Occt::ProjLib_CompProjectedCurve::GetTolerance(double% TolU, double% TolV)
{
	pin_ptr<double> pp_TolU = &TolU;
	pin_ptr<double> pp_TolV = &TolV;
	((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetTolerance(*(Standard_Real*)pp_TolU, *(Standard_Real*)pp_TolV);
}

int Macad::Occt::ProjLib_CompProjectedCurve::NbCurves()
{
	return ((::ProjLib_CompProjectedCurve*)_NativeInstance)->NbCurves();
}

void Macad::Occt::ProjLib_CompProjectedCurve::Bounds(int Index, double% Udeb, double% Ufin)
{
	pin_ptr<double> pp_Udeb = &Udeb;
	pin_ptr<double> pp_Ufin = &Ufin;
	((::ProjLib_CompProjectedCurve*)_NativeInstance)->Bounds(Index, *(Standard_Real*)pp_Udeb, *(Standard_Real*)pp_Ufin);
}

bool Macad::Occt::ProjLib_CompProjectedCurve::IsSinglePnt(int Index, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ((::ProjLib_CompProjectedCurve*)_NativeInstance)->IsSinglePnt(Index, *(gp_Pnt2d*)pp_P);
}

bool Macad::Occt::ProjLib_CompProjectedCurve::IsUIso(int Index, double% U)
{
	pin_ptr<double> pp_U = &U;
	return ((::ProjLib_CompProjectedCurve*)_NativeInstance)->IsUIso(Index, *(Standard_Real*)pp_U);
}

bool Macad::Occt::ProjLib_CompProjectedCurve::IsVIso(int Index, double% V)
{
	pin_ptr<double> pp_V = &V;
	return ((::ProjLib_CompProjectedCurve*)_NativeInstance)->IsVIso(Index, *(Standard_Real*)pp_V);
}

Macad::Occt::Pnt2d Macad::Occt::ProjLib_CompProjectedCurve::Value(double U)
{
	return Macad::Occt::Pnt2d(((::ProjLib_CompProjectedCurve*)_NativeInstance)->Value(U));
}

void Macad::Occt::ProjLib_CompProjectedCurve::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::ProjLib_CompProjectedCurve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::ProjLib_CompProjectedCurve::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::ProjLib_CompProjectedCurve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V);
}

void Macad::Occt::ProjLib_CompProjectedCurve::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::ProjLib_CompProjectedCurve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

Macad::Occt::Vec2d Macad::Occt::ProjLib_CompProjectedCurve::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::ProjLib_CompProjectedCurve*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::ProjLib_CompProjectedCurve::FirstParameter()
{
	return ((::ProjLib_CompProjectedCurve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::ProjLib_CompProjectedCurve::LastParameter()
{
	return ((::ProjLib_CompProjectedCurve*)_NativeInstance)->LastParameter();
}

int Macad::Occt::ProjLib_CompProjectedCurve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::ProjLib_CompProjectedCurve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor2d_HCurve2d^ Macad::Occt::ProjLib_CompProjectedCurve::Trim(double FirstParam, double LastParam, double Tol)
{
	Handle(::Adaptor2d_HCurve2d) _result;
	_result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->Trim(FirstParam, LastParam, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_HCurve2d::CreateDowncasted( _result.get());
}

void Macad::Occt::ProjLib_CompProjectedCurve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::ProjLib_CompProjectedCurve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

double Macad::Occt::ProjLib_CompProjectedCurve::MaxDistance(int Index)
{
	return ((::ProjLib_CompProjectedCurve*)_NativeInstance)->MaxDistance(Index);
}

Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt^ Macad::Occt::ProjLib_CompProjectedCurve::GetSequence()
{
	Handle(::ProjLib_HSequenceOfHSequenceOfPnt) _result;
	_result = ((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetSequence();
	 return _result.IsNull() ? nullptr : Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::ProjLib_CompProjectedCurve::GetGeomType()
{
	return (Macad::Occt::GeomAbs_CurveType)((::ProjLib_CompProjectedCurve*)_NativeInstance)->GetType();
}




//---------------------------------------------------------------------
//  Class  ProjLib_HCompProjectedCurve
//---------------------------------------------------------------------

Macad::Occt::ProjLib_HCompProjectedCurve::ProjLib_HCompProjectedCurve()
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ProjLib_HCompProjectedCurve();
}

Macad::Occt::ProjLib_HCompProjectedCurve::ProjLib_HCompProjectedCurve(Macad::Occt::ProjLib_CompProjectedCurve^ C)
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ProjLib_HCompProjectedCurve(*(::ProjLib_CompProjectedCurve*)C->NativeInstance);
}

Macad::Occt::ProjLib_HCompProjectedCurve::ProjLib_HCompProjectedCurve(Macad::Occt::ProjLib_HCompProjectedCurve^ parameter1)
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ProjLib_HCompProjectedCurve(*(::ProjLib_HCompProjectedCurve*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_HCompProjectedCurve::Set(Macad::Occt::ProjLib_CompProjectedCurve^ C)
{
	((::ProjLib_HCompProjectedCurve*)_NativeInstance)->Set(*(::ProjLib_CompProjectedCurve*)C->NativeInstance);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::ProjLib_HCompProjectedCurve::Curve2d()
{
	::Adaptor2d_Curve2d* _result = new ::Adaptor2d_Curve2d();
	*_result =  (::Adaptor2d_Curve2d)((::ProjLib_HCompProjectedCurve*)_NativeInstance)->Curve2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor2d_Curve2d(_result);
}

Macad::Occt::ProjLib_CompProjectedCurve^ Macad::Occt::ProjLib_HCompProjectedCurve::ChangeCurve2d()
{
	::ProjLib_CompProjectedCurve* _result = new ::ProjLib_CompProjectedCurve();
	*_result = ((::ProjLib_HCompProjectedCurve*)_NativeInstance)->ChangeCurve2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ProjLib_CompProjectedCurve(_result);
}


Macad::Occt::ProjLib_HCompProjectedCurve^ Macad::Occt::ProjLib_HCompProjectedCurve::CreateDowncasted(::ProjLib_HCompProjectedCurve* instance)
{
	return gcnew Macad::Occt::ProjLib_HCompProjectedCurve( instance );
}



//---------------------------------------------------------------------
//  Class  ProjLib_PrjResolve
//---------------------------------------------------------------------

Macad::Occt::ProjLib_PrjResolve::ProjLib_PrjResolve(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, int Fix)
	: BaseClass<::ProjLib_PrjResolve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_PrjResolve(*(::Adaptor3d_Curve*)C->NativeInstance, *(::Adaptor3d_Surface*)S->NativeInstance, Fix);
}

Macad::Occt::ProjLib_PrjResolve::ProjLib_PrjResolve(Macad::Occt::ProjLib_PrjResolve^ parameter1)
	: BaseClass<::ProjLib_PrjResolve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_PrjResolve(*(::ProjLib_PrjResolve*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_PrjResolve::Perform(double t, double U, double V, Macad::Occt::Pnt2d Tol, Macad::Occt::Pnt2d Inf, Macad::Occt::Pnt2d Sup, double FTol, bool StrictInside)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Tol = &Tol;
	pin_ptr<Macad::Occt::Pnt2d> pp_Inf = &Inf;
	pin_ptr<Macad::Occt::Pnt2d> pp_Sup = &Sup;
	((::ProjLib_PrjResolve*)_NativeInstance)->Perform(t, U, V, *(gp_Pnt2d*)pp_Tol, *(gp_Pnt2d*)pp_Inf, *(gp_Pnt2d*)pp_Sup, FTol, StrictInside);
}

void Macad::Occt::ProjLib_PrjResolve::Perform(double t, double U, double V, Macad::Occt::Pnt2d Tol, Macad::Occt::Pnt2d Inf, Macad::Occt::Pnt2d Sup, double FTol)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Tol = &Tol;
	pin_ptr<Macad::Occt::Pnt2d> pp_Inf = &Inf;
	pin_ptr<Macad::Occt::Pnt2d> pp_Sup = &Sup;
	((::ProjLib_PrjResolve*)_NativeInstance)->Perform(t, U, V, *(gp_Pnt2d*)pp_Tol, *(gp_Pnt2d*)pp_Inf, *(gp_Pnt2d*)pp_Sup, FTol, false);
}

void Macad::Occt::ProjLib_PrjResolve::Perform(double t, double U, double V, Macad::Occt::Pnt2d Tol, Macad::Occt::Pnt2d Inf, Macad::Occt::Pnt2d Sup)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Tol = &Tol;
	pin_ptr<Macad::Occt::Pnt2d> pp_Inf = &Inf;
	pin_ptr<Macad::Occt::Pnt2d> pp_Sup = &Sup;
	((::ProjLib_PrjResolve*)_NativeInstance)->Perform(t, U, V, *(gp_Pnt2d*)pp_Tol, *(gp_Pnt2d*)pp_Inf, *(gp_Pnt2d*)pp_Sup, -1, false);
}

bool Macad::Occt::ProjLib_PrjResolve::IsDone()
{
	return ((::ProjLib_PrjResolve*)_NativeInstance)->IsDone();
}

Macad::Occt::Pnt2d Macad::Occt::ProjLib_PrjResolve::Solution()
{
	return Macad::Occt::Pnt2d(((::ProjLib_PrjResolve*)_NativeInstance)->Solution());
}




//---------------------------------------------------------------------
//  Class  ProjLib_Projector
//---------------------------------------------------------------------

Macad::Occt::ProjLib_Projector::ProjLib_Projector()
	: BaseClass<::ProjLib_Projector>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Projector();
}

Macad::Occt::ProjLib_Projector::ProjLib_Projector(Macad::Occt::ProjLib_Projector^ parameter1)
	: BaseClass<::ProjLib_Projector>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Projector(*(::ProjLib_Projector*)parameter1->NativeInstance);
}

bool Macad::Occt::ProjLib_Projector::IsDone()
{
	return ((::ProjLib_Projector*)_NativeInstance)->IsDone();
}

void Macad::Occt::ProjLib_Projector::Done()
{
	((::ProjLib_Projector*)_NativeInstance)->Done();
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::ProjLib_Projector::GetGeomType()
{
	return (Macad::Occt::GeomAbs_CurveType)((::ProjLib_Projector*)_NativeInstance)->GetType();
}

void Macad::Occt::ProjLib_Projector::SetBSpline(Macad::Occt::Geom2d_BSplineCurve^ C)
{
	Handle(::Geom2d_BSplineCurve) h_C = C->NativeInstance;
	((::ProjLib_Projector*)_NativeInstance)->SetBSpline(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::ProjLib_Projector::SetBezier(Macad::Occt::Geom2d_BezierCurve^ C)
{
	Handle(::Geom2d_BezierCurve) h_C = C->NativeInstance;
	((::ProjLib_Projector*)_NativeInstance)->SetBezier(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::ProjLib_Projector::SetType(Macad::Occt::GeomAbs_CurveType Type)
{
	((::ProjLib_Projector*)_NativeInstance)->SetType((::GeomAbs_CurveType)Type);
}

bool Macad::Occt::ProjLib_Projector::IsPeriodic()
{
	return ((::ProjLib_Projector*)_NativeInstance)->IsPeriodic();
}

void Macad::Occt::ProjLib_Projector::SetPeriodic()
{
	((::ProjLib_Projector*)_NativeInstance)->SetPeriodic();
}

Macad::Occt::gp_Lin2d^ Macad::Occt::ProjLib_Projector::Line()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result =  (::gp_Lin2d)((::ProjLib_Projector*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::ProjLib_Projector::Circle()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result =  (::gp_Circ2d)((::ProjLib_Projector*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::ProjLib_Projector::Ellipse()
{
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result =  (::gp_Elips2d)((::ProjLib_Projector*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::ProjLib_Projector::Hyperbola()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result =  (::gp_Hypr2d)((::ProjLib_Projector*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::ProjLib_Projector::Parabola()
{
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result =  (::gp_Parab2d)((::ProjLib_Projector*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::ProjLib_Projector::Bezier()
{
	Handle(::Geom2d_BezierCurve) _result;
	_result = ((::ProjLib_Projector*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::ProjLib_Projector::BSpline()
{
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::ProjLib_Projector*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

void Macad::Occt::ProjLib_Projector::Project(Macad::Occt::gp_Lin^ L)
{
	((::ProjLib_Projector*)_NativeInstance)->Project(*(::gp_Lin*)L->NativeInstance);
}

void Macad::Occt::ProjLib_Projector::Project(Macad::Occt::gp_Circ^ C)
{
	((::ProjLib_Projector*)_NativeInstance)->Project(*(::gp_Circ*)C->NativeInstance);
}

void Macad::Occt::ProjLib_Projector::Project(Macad::Occt::gp_Elips^ E)
{
	((::ProjLib_Projector*)_NativeInstance)->Project(*(::gp_Elips*)E->NativeInstance);
}

void Macad::Occt::ProjLib_Projector::Project(Macad::Occt::gp_Parab^ P)
{
	((::ProjLib_Projector*)_NativeInstance)->Project(*(::gp_Parab*)P->NativeInstance);
}

void Macad::Occt::ProjLib_Projector::Project(Macad::Occt::gp_Hypr^ H)
{
	((::ProjLib_Projector*)_NativeInstance)->Project(*(::gp_Hypr*)H->NativeInstance);
}

void Macad::Occt::ProjLib_Projector::UFrame(double CFirst, double CLast, double UFirst, double Period)
{
	((::ProjLib_Projector*)_NativeInstance)->UFrame(CFirst, CLast, UFirst, Period);
}

void Macad::Occt::ProjLib_Projector::VFrame(double CFirst, double CLast, double VFirst, double Period)
{
	((::ProjLib_Projector*)_NativeInstance)->VFrame(CFirst, CLast, VFirst, Period);
}




//---------------------------------------------------------------------
//  Class  ProjLib_Plane
//---------------------------------------------------------------------

Macad::Occt::ProjLib_Plane::ProjLib_Plane()
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Plane();
}

Macad::Occt::ProjLib_Plane::ProjLib_Plane(Macad::Occt::Pln Pl)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	_NativeInstance = new ::ProjLib_Plane(*(gp_Pln*)pp_Pl);
}

Macad::Occt::ProjLib_Plane::ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Lin^ L)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	_NativeInstance = new ::ProjLib_Plane(*(gp_Pln*)pp_Pl, *(::gp_Lin*)L->NativeInstance);
}

Macad::Occt::ProjLib_Plane::ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Circ^ C)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	_NativeInstance = new ::ProjLib_Plane(*(gp_Pln*)pp_Pl, *(::gp_Circ*)C->NativeInstance);
}

Macad::Occt::ProjLib_Plane::ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Elips^ E)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	_NativeInstance = new ::ProjLib_Plane(*(gp_Pln*)pp_Pl, *(::gp_Elips*)E->NativeInstance);
}

Macad::Occt::ProjLib_Plane::ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Parab^ P)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	_NativeInstance = new ::ProjLib_Plane(*(gp_Pln*)pp_Pl, *(::gp_Parab*)P->NativeInstance);
}

Macad::Occt::ProjLib_Plane::ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Hypr^ H)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	_NativeInstance = new ::ProjLib_Plane(*(gp_Pln*)pp_Pl, *(::gp_Hypr*)H->NativeInstance);
}

Macad::Occt::ProjLib_Plane::ProjLib_Plane(Macad::Occt::ProjLib_Plane^ parameter1)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Plane(*(::ProjLib_Plane*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_Plane::Init(Macad::Occt::Pln Pl)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	((::ProjLib_Plane*)_NativeInstance)->Init(*(gp_Pln*)pp_Pl);
}

void Macad::Occt::ProjLib_Plane::Project(Macad::Occt::gp_Lin^ L)
{
	((::ProjLib_Plane*)_NativeInstance)->Project(*(::gp_Lin*)L->NativeInstance);
}

void Macad::Occt::ProjLib_Plane::Project(Macad::Occt::gp_Circ^ C)
{
	((::ProjLib_Plane*)_NativeInstance)->Project(*(::gp_Circ*)C->NativeInstance);
}

void Macad::Occt::ProjLib_Plane::Project(Macad::Occt::gp_Elips^ E)
{
	((::ProjLib_Plane*)_NativeInstance)->Project(*(::gp_Elips*)E->NativeInstance);
}

void Macad::Occt::ProjLib_Plane::Project(Macad::Occt::gp_Parab^ P)
{
	((::ProjLib_Plane*)_NativeInstance)->Project(*(::gp_Parab*)P->NativeInstance);
}

void Macad::Occt::ProjLib_Plane::Project(Macad::Occt::gp_Hypr^ H)
{
	((::ProjLib_Plane*)_NativeInstance)->Project(*(::gp_Hypr*)H->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  ProjLib_Cylinder
//---------------------------------------------------------------------

Macad::Occt::ProjLib_Cylinder::ProjLib_Cylinder()
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Cylinder();
}

Macad::Occt::ProjLib_Cylinder::ProjLib_Cylinder(Macad::Occt::gp_Cylinder^ Cyl)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Cylinder(*(::gp_Cylinder*)Cyl->NativeInstance);
}

Macad::Occt::ProjLib_Cylinder::ProjLib_Cylinder(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Lin^ L)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Cylinder(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Lin*)L->NativeInstance);
}

Macad::Occt::ProjLib_Cylinder::ProjLib_Cylinder(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Circ^ C)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Cylinder(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Circ*)C->NativeInstance);
}

Macad::Occt::ProjLib_Cylinder::ProjLib_Cylinder(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Elips^ E)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Cylinder(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Elips*)E->NativeInstance);
}

Macad::Occt::ProjLib_Cylinder::ProjLib_Cylinder(Macad::Occt::ProjLib_Cylinder^ parameter1)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Cylinder(*(::ProjLib_Cylinder*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_Cylinder::Init(Macad::Occt::gp_Cylinder^ Cyl)
{
	((::ProjLib_Cylinder*)_NativeInstance)->Init(*(::gp_Cylinder*)Cyl->NativeInstance);
}

void Macad::Occt::ProjLib_Cylinder::Project(Macad::Occt::gp_Lin^ L)
{
	((::ProjLib_Cylinder*)_NativeInstance)->Project(*(::gp_Lin*)L->NativeInstance);
}

void Macad::Occt::ProjLib_Cylinder::Project(Macad::Occt::gp_Circ^ C)
{
	((::ProjLib_Cylinder*)_NativeInstance)->Project(*(::gp_Circ*)C->NativeInstance);
}

void Macad::Occt::ProjLib_Cylinder::Project(Macad::Occt::gp_Elips^ E)
{
	((::ProjLib_Cylinder*)_NativeInstance)->Project(*(::gp_Elips*)E->NativeInstance);
}

void Macad::Occt::ProjLib_Cylinder::Project(Macad::Occt::gp_Parab^ P)
{
	((::ProjLib_Cylinder*)_NativeInstance)->Project(*(::gp_Parab*)P->NativeInstance);
}

void Macad::Occt::ProjLib_Cylinder::Project(Macad::Occt::gp_Hypr^ H)
{
	((::ProjLib_Cylinder*)_NativeInstance)->Project(*(::gp_Hypr*)H->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  ProjLib_Cone
//---------------------------------------------------------------------

Macad::Occt::ProjLib_Cone::ProjLib_Cone()
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Cone();
}

Macad::Occt::ProjLib_Cone::ProjLib_Cone(Macad::Occt::gp_Cone^ Co)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Cone(*(::gp_Cone*)Co->NativeInstance);
}

Macad::Occt::ProjLib_Cone::ProjLib_Cone(Macad::Occt::gp_Cone^ Co, Macad::Occt::gp_Lin^ L)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Cone(*(::gp_Cone*)Co->NativeInstance, *(::gp_Lin*)L->NativeInstance);
}

Macad::Occt::ProjLib_Cone::ProjLib_Cone(Macad::Occt::gp_Cone^ Co, Macad::Occt::gp_Circ^ C)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Cone(*(::gp_Cone*)Co->NativeInstance, *(::gp_Circ*)C->NativeInstance);
}

Macad::Occt::ProjLib_Cone::ProjLib_Cone(Macad::Occt::ProjLib_Cone^ parameter1)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Cone(*(::ProjLib_Cone*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_Cone::Init(Macad::Occt::gp_Cone^ Co)
{
	((::ProjLib_Cone*)_NativeInstance)->Init(*(::gp_Cone*)Co->NativeInstance);
}

void Macad::Occt::ProjLib_Cone::Project(Macad::Occt::gp_Lin^ L)
{
	((::ProjLib_Cone*)_NativeInstance)->Project(*(::gp_Lin*)L->NativeInstance);
}

void Macad::Occt::ProjLib_Cone::Project(Macad::Occt::gp_Circ^ C)
{
	((::ProjLib_Cone*)_NativeInstance)->Project(*(::gp_Circ*)C->NativeInstance);
}

void Macad::Occt::ProjLib_Cone::Project(Macad::Occt::gp_Elips^ E)
{
	((::ProjLib_Cone*)_NativeInstance)->Project(*(::gp_Elips*)E->NativeInstance);
}

void Macad::Occt::ProjLib_Cone::Project(Macad::Occt::gp_Parab^ P)
{
	((::ProjLib_Cone*)_NativeInstance)->Project(*(::gp_Parab*)P->NativeInstance);
}

void Macad::Occt::ProjLib_Cone::Project(Macad::Occt::gp_Hypr^ H)
{
	((::ProjLib_Cone*)_NativeInstance)->Project(*(::gp_Hypr*)H->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  ProjLib_Sphere
//---------------------------------------------------------------------

Macad::Occt::ProjLib_Sphere::ProjLib_Sphere()
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Sphere();
}

Macad::Occt::ProjLib_Sphere::ProjLib_Sphere(Macad::Occt::gp_Sphere^ Sp)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Sphere(*(::gp_Sphere*)Sp->NativeInstance);
}

Macad::Occt::ProjLib_Sphere::ProjLib_Sphere(Macad::Occt::gp_Sphere^ Sp, Macad::Occt::gp_Circ^ C)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Sphere(*(::gp_Sphere*)Sp->NativeInstance, *(::gp_Circ*)C->NativeInstance);
}

Macad::Occt::ProjLib_Sphere::ProjLib_Sphere(Macad::Occt::ProjLib_Sphere^ parameter1)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Sphere(*(::ProjLib_Sphere*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_Sphere::Init(Macad::Occt::gp_Sphere^ Sp)
{
	((::ProjLib_Sphere*)_NativeInstance)->Init(*(::gp_Sphere*)Sp->NativeInstance);
}

void Macad::Occt::ProjLib_Sphere::Project(Macad::Occt::gp_Lin^ L)
{
	((::ProjLib_Sphere*)_NativeInstance)->Project(*(::gp_Lin*)L->NativeInstance);
}

void Macad::Occt::ProjLib_Sphere::Project(Macad::Occt::gp_Circ^ C)
{
	((::ProjLib_Sphere*)_NativeInstance)->Project(*(::gp_Circ*)C->NativeInstance);
}

void Macad::Occt::ProjLib_Sphere::Project(Macad::Occt::gp_Elips^ E)
{
	((::ProjLib_Sphere*)_NativeInstance)->Project(*(::gp_Elips*)E->NativeInstance);
}

void Macad::Occt::ProjLib_Sphere::Project(Macad::Occt::gp_Parab^ P)
{
	((::ProjLib_Sphere*)_NativeInstance)->Project(*(::gp_Parab*)P->NativeInstance);
}

void Macad::Occt::ProjLib_Sphere::Project(Macad::Occt::gp_Hypr^ H)
{
	((::ProjLib_Sphere*)_NativeInstance)->Project(*(::gp_Hypr*)H->NativeInstance);
}

void Macad::Occt::ProjLib_Sphere::SetInBounds(double U)
{
	((::ProjLib_Sphere*)_NativeInstance)->SetInBounds(U);
}




//---------------------------------------------------------------------
//  Class  ProjLib_Torus
//---------------------------------------------------------------------

Macad::Occt::ProjLib_Torus::ProjLib_Torus()
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Torus();
}

Macad::Occt::ProjLib_Torus::ProjLib_Torus(Macad::Occt::gp_Torus^ To)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Torus(*(::gp_Torus*)To->NativeInstance);
}

Macad::Occt::ProjLib_Torus::ProjLib_Torus(Macad::Occt::gp_Torus^ To, Macad::Occt::gp_Circ^ C)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Torus(*(::gp_Torus*)To->NativeInstance, *(::gp_Circ*)C->NativeInstance);
}

Macad::Occt::ProjLib_Torus::ProjLib_Torus(Macad::Occt::ProjLib_Torus^ parameter1)
	: Macad::Occt::ProjLib_Projector(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib_Torus(*(::ProjLib_Torus*)parameter1->NativeInstance);
}

void Macad::Occt::ProjLib_Torus::Init(Macad::Occt::gp_Torus^ To)
{
	((::ProjLib_Torus*)_NativeInstance)->Init(*(::gp_Torus*)To->NativeInstance);
}

void Macad::Occt::ProjLib_Torus::Project(Macad::Occt::gp_Lin^ L)
{
	((::ProjLib_Torus*)_NativeInstance)->Project(*(::gp_Lin*)L->NativeInstance);
}

void Macad::Occt::ProjLib_Torus::Project(Macad::Occt::gp_Circ^ C)
{
	((::ProjLib_Torus*)_NativeInstance)->Project(*(::gp_Circ*)C->NativeInstance);
}

void Macad::Occt::ProjLib_Torus::Project(Macad::Occt::gp_Elips^ E)
{
	((::ProjLib_Torus*)_NativeInstance)->Project(*(::gp_Elips*)E->NativeInstance);
}

void Macad::Occt::ProjLib_Torus::Project(Macad::Occt::gp_Parab^ P)
{
	((::ProjLib_Torus*)_NativeInstance)->Project(*(::gp_Parab*)P->NativeInstance);
}

void Macad::Occt::ProjLib_Torus::Project(Macad::Occt::gp_Hypr^ H)
{
	((::ProjLib_Torus*)_NativeInstance)->Project(*(::gp_Hypr*)H->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  ProjLib
//---------------------------------------------------------------------

Macad::Occt::ProjLib::ProjLib()
	: BaseClass<::ProjLib>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib();
}

Macad::Occt::ProjLib::ProjLib(Macad::Occt::ProjLib^ parameter1)
	: BaseClass<::ProjLib>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ProjLib(*(::ProjLib*)parameter1->NativeInstance);
}

Macad::Occt::Pnt2d Macad::Occt::ProjLib::Project(Macad::Occt::Pln Pl, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return Macad::Occt::Pnt2d(::ProjLib::Project(*(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_P));
}

Macad::Occt::gp_Lin2d^ Macad::Occt::ProjLib::Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Lin^ L)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ::ProjLib::Project(*(gp_Pln*)pp_Pl, *(::gp_Lin*)L->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::ProjLib::Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Circ^ C)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ::ProjLib::Project(*(gp_Pln*)pp_Pl, *(::gp_Circ*)C->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::ProjLib::Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Elips^ E)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ::ProjLib::Project(*(gp_Pln*)pp_Pl, *(::gp_Elips*)E->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::ProjLib::Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Parab^ P)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ::ProjLib::Project(*(gp_Pln*)pp_Pl, *(::gp_Parab*)P->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::ProjLib::Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Hypr^ H)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ::ProjLib::Project(*(gp_Pln*)pp_Pl, *(::gp_Hypr*)H->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::Pnt2d Macad::Occt::ProjLib::Project(Macad::Occt::gp_Cylinder^ Cy, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return Macad::Occt::Pnt2d(::ProjLib::Project(*(::gp_Cylinder*)Cy->NativeInstance, *(gp_Pnt*)pp_P));
}

Macad::Occt::gp_Lin2d^ Macad::Occt::ProjLib::Project(Macad::Occt::gp_Cylinder^ Cy, Macad::Occt::gp_Lin^ L)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ::ProjLib::Project(*(::gp_Cylinder*)Cy->NativeInstance, *(::gp_Lin*)L->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::ProjLib::Project(Macad::Occt::gp_Cylinder^ Cy, Macad::Occt::gp_Circ^ Ci)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ::ProjLib::Project(*(::gp_Cylinder*)Cy->NativeInstance, *(::gp_Circ*)Ci->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::Pnt2d Macad::Occt::ProjLib::Project(Macad::Occt::gp_Cone^ Co, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return Macad::Occt::Pnt2d(::ProjLib::Project(*(::gp_Cone*)Co->NativeInstance, *(gp_Pnt*)pp_P));
}

Macad::Occt::gp_Lin2d^ Macad::Occt::ProjLib::Project(Macad::Occt::gp_Cone^ Co, Macad::Occt::gp_Lin^ L)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ::ProjLib::Project(*(::gp_Cone*)Co->NativeInstance, *(::gp_Lin*)L->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::ProjLib::Project(Macad::Occt::gp_Cone^ Co, Macad::Occt::gp_Circ^ Ci)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ::ProjLib::Project(*(::gp_Cone*)Co->NativeInstance, *(::gp_Circ*)Ci->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::Pnt2d Macad::Occt::ProjLib::Project(Macad::Occt::gp_Sphere^ Sp, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return Macad::Occt::Pnt2d(::ProjLib::Project(*(::gp_Sphere*)Sp->NativeInstance, *(gp_Pnt*)pp_P));
}

Macad::Occt::gp_Lin2d^ Macad::Occt::ProjLib::Project(Macad::Occt::gp_Sphere^ Sp, Macad::Occt::gp_Circ^ Ci)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ::ProjLib::Project(*(::gp_Sphere*)Sp->NativeInstance, *(::gp_Circ*)Ci->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::Pnt2d Macad::Occt::ProjLib::Project(Macad::Occt::gp_Torus^ To, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return Macad::Occt::Pnt2d(::ProjLib::Project(*(::gp_Torus*)To->NativeInstance, *(gp_Pnt*)pp_P));
}

Macad::Occt::gp_Lin2d^ Macad::Occt::ProjLib::Project(Macad::Occt::gp_Torus^ To, Macad::Occt::gp_Circ^ Ci)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ::ProjLib::Project(*(::gp_Torus*)To->NativeInstance, *(::gp_Circ*)Ci->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::ProjLib::MakePCurveOfType(Macad::Occt::ProjLib_ProjectedCurve^ PC, Macad::Occt::Geom2d_Curve^ aC)
{
	Handle(::Geom2d_Curve) h_aC = aC->NativeInstance;
	::ProjLib::MakePCurveOfType(*(::ProjLib_ProjectedCurve*)PC->NativeInstance, h_aC);
	aC->NativeInstance = h_aC.get();
}

bool Macad::Occt::ProjLib::IsAnaSurf(Macad::Occt::Adaptor3d_HSurface^ theAS)
{
	Handle(::Adaptor3d_HSurface) h_theAS = theAS->NativeInstance;
	return ::ProjLib::IsAnaSurf(h_theAS);
	theAS->NativeInstance = h_theAS.get();
}




//---------------------------------------------------------------------
//  Class  ProjLib_HSequenceOfHSequenceOfPnt
//---------------------------------------------------------------------

Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::ProjLib_HSequenceOfHSequenceOfPnt()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ProjLib_HSequenceOfHSequenceOfPnt();
}

Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::ProjLib_HSequenceOfHSequenceOfPnt(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ProjLib_HSequenceOfHSequenceOfPnt(*(::ProjLib_SequenceOfHSequenceOfPnt*)theOther->NativeInstance);
}

Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::ProjLib_HSequenceOfHSequenceOfPnt(Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ProjLib_HSequenceOfHSequenceOfPnt(*(::ProjLib_HSequenceOfHSequenceOfPnt*)parameter1->NativeInstance);
}

Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Sequence()
{
	::ProjLib_SequenceOfHSequenceOfPnt* _result = new ::ProjLib_SequenceOfHSequenceOfPnt();
	*_result =  (::ProjLib_SequenceOfHSequenceOfPnt)((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt(_result);
}

void Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Append(Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
	Handle(::TColgp_HSequenceOfPnt) h_theItem = theItem->NativeInstance;
	((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Append(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSequence)
{
	((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Append(*(::ProjLib_SequenceOfHSequenceOfPnt*)theSequence->NativeInstance);
}

Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::ChangeSequence()
{
	::ProjLib_SequenceOfHSequenceOfPnt* _result = new ::ProjLib_SequenceOfHSequenceOfPnt();
	*_result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt(_result);
}

int Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Size()
{
	return ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Size();
}

int Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Length()
{
	return ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Length();
}

int Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Lower()
{
	return ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Lower();
}

int Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Upper()
{
	return ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Upper();
}

bool Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::IsEmpty()
{
	return ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Reverse()
{
	((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Reverse();
}

void Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Exchange(int I, int J)
{
	((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Clear()
{
	((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Remove(int theIndex)
{
	((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Remove(int theFromIndex, int theToIndex)
{
	((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Prepend(Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
	Handle(::TColgp_HSequenceOfPnt) h_theItem = theItem->NativeInstance;
	((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::InsertBefore(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
	Handle(::TColgp_HSequenceOfPnt) h_theItem = theItem->NativeInstance;
	((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::InsertAfter(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
	Handle(::TColgp_HSequenceOfPnt) h_theItem = theItem->NativeInstance;
	((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::First()
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::ChangeFirst()
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Last()
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::ChangeLast()
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Value(int theIndex)
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::ChangeValue(int theIndex)
{
	Handle(::TColgp_HSequenceOfPnt) _result;
	_result = ((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted( _result.get());
}

void Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::SetValue(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem)
{
	Handle(::TColgp_HSequenceOfPnt) h_theItem = theItem->NativeInstance;
	((::ProjLib_HSequenceOfHSequenceOfPnt*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}


Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt^ Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::CreateDowncasted(::ProjLib_HSequenceOfHSequenceOfPnt* instance)
{
	return gcnew Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt( instance );
}


