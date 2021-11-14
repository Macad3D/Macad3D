// Generated wrapper code for package BRepAdaptor

#include "OcctPCH.h"
#include "BRepAdaptor.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "BRepAdaptor.h"
#include "TopoDS.h"
#include "Adaptor3d.h"
#include "gp.h"
#include "GeomAdaptor.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "Geom.h"
#include "NCollection.h"
#include "Adaptor2d.h"


//---------------------------------------------------------------------
//  Class  BRepAdaptor_Array1OfCurve
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve()
	: BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAdaptor_Array1OfCurve();
}

Macad::Occt::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve(int theLower, int theUpper)
	: BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAdaptor_Array1OfCurve(theLower, theUpper);
}

Macad::Occt::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve(Macad::Occt::BRepAdaptor_Array1OfCurve^ theOther)
	: BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAdaptor_Array1OfCurve(*(::BRepAdaptor_Array1OfCurve*)theOther->NativeInstance);
}

Macad::Occt::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve(Macad::Occt::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper)
	: BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepAdaptor_Array1OfCurve(*(::BRepAdaptor_Curve*)theBegin->NativeInstance, theLower, theUpper);
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::Init(Macad::Occt::BRepAdaptor_Curve^ theValue)
{
	((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Init(*(::BRepAdaptor_Curve*)theValue->NativeInstance);
}

int Macad::Occt::BRepAdaptor_Array1OfCurve::Size()
{
	return ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Size();
}

int Macad::Occt::BRepAdaptor_Array1OfCurve::Length()
{
	return ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Length();
}

bool Macad::Occt::BRepAdaptor_Array1OfCurve::IsEmpty()
{
	return ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::BRepAdaptor_Array1OfCurve::Lower()
{
	return ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Lower();
}

int Macad::Occt::BRepAdaptor_Array1OfCurve::Upper()
{
	return ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Upper();
}

bool Macad::Occt::BRepAdaptor_Array1OfCurve::IsDeletable()
{
	return ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::BRepAdaptor_Array1OfCurve::IsAllocated()
{
	return ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->IsAllocated();
}

Macad::Occt::BRepAdaptor_Array1OfCurve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Assign(Macad::Occt::BRepAdaptor_Array1OfCurve^ theOther)
{
	::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
	*_result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Assign(*(::BRepAdaptor_Array1OfCurve*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Array1OfCurve(_result);
}

Macad::Occt::BRepAdaptor_Array1OfCurve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Move(Macad::Occt::BRepAdaptor_Array1OfCurve^ theOther)
{
	::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
	*_result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Move(*(::BRepAdaptor_Array1OfCurve*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Array1OfCurve(_result);
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::First()
{
	::BRepAdaptor_Curve* _result = new ::BRepAdaptor_Curve();
	*_result =  (::BRepAdaptor_Curve)((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Curve(_result);
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::ChangeFirst()
{
	::BRepAdaptor_Curve* _result = new ::BRepAdaptor_Curve();
	*_result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Curve(_result);
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Last()
{
	::BRepAdaptor_Curve* _result = new ::BRepAdaptor_Curve();
	*_result =  (::BRepAdaptor_Curve)((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Curve(_result);
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::ChangeLast()
{
	::BRepAdaptor_Curve* _result = new ::BRepAdaptor_Curve();
	*_result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Curve(_result);
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Value(int theIndex)
{
	::BRepAdaptor_Curve* _result = new ::BRepAdaptor_Curve();
	*_result =  (::BRepAdaptor_Curve)((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Curve(_result);
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::ChangeValue(int theIndex)
{
	::BRepAdaptor_Curve* _result = new ::BRepAdaptor_Curve();
	*_result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Curve(_result);
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::SetValue(int theIndex, Macad::Occt::BRepAdaptor_Curve^ theItem)
{
	((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->SetValue(theIndex, *(::BRepAdaptor_Curve*)theItem->NativeInstance);
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  BRepAdaptor_Curve
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_Curve::BRepAdaptor_Curve()
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_Curve();
}

Macad::Occt::BRepAdaptor_Curve::BRepAdaptor_Curve(Macad::Occt::TopoDS_Edge^ E)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_Curve(*(::TopoDS_Edge*)E->NativeInstance);
}

Macad::Occt::BRepAdaptor_Curve::BRepAdaptor_Curve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_Curve(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::BRepAdaptor_Curve::BRepAdaptor_Curve(Macad::Occt::BRepAdaptor_Curve^ parameter1)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_Curve(*(::BRepAdaptor_Curve*)parameter1->NativeInstance);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_Curve::ShallowCopy()
{
	Handle(::Adaptor3d_Curve) _result;
	_result = ((::BRepAdaptor_Curve*)_NativeInstance)->ShallowCopy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::BRepAdaptor_Curve::Reset()
{
	((::BRepAdaptor_Curve*)_NativeInstance)->Reset();
}

void Macad::Occt::BRepAdaptor_Curve::Initialize(Macad::Occt::TopoDS_Edge^ E)
{
	((::BRepAdaptor_Curve*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepAdaptor_Curve::Initialize(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
	((::BRepAdaptor_Curve*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::Trsf Macad::Occt::BRepAdaptor_Curve::Trsf()
{
	return Macad::Occt::Trsf(((::BRepAdaptor_Curve*)_NativeInstance)->Trsf());
}

bool Macad::Occt::BRepAdaptor_Curve::Is3DCurve()
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->Is3DCurve();
}

bool Macad::Occt::BRepAdaptor_Curve::IsCurveOnSurface()
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->IsCurveOnSurface();
}

Macad::Occt::GeomAdaptor_Curve^ Macad::Occt::BRepAdaptor_Curve::Curve()
{
	::GeomAdaptor_Curve* _result = new ::GeomAdaptor_Curve();
	*_result =  (::GeomAdaptor_Curve)((::BRepAdaptor_Curve*)_NativeInstance)->Curve();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::GeomAdaptor_Curve(_result);
}

Macad::Occt::Adaptor3d_CurveOnSurface^ Macad::Occt::BRepAdaptor_Curve::CurveOnSurface()
{
	::Adaptor3d_CurveOnSurface* _result = new ::Adaptor3d_CurveOnSurface();
	*_result =  (::Adaptor3d_CurveOnSurface)((::BRepAdaptor_Curve*)_NativeInstance)->CurveOnSurface();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor3d_CurveOnSurface(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepAdaptor_Curve::Edge()
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepAdaptor_Curve*)_NativeInstance)->Edge();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

double Macad::Occt::BRepAdaptor_Curve::Tolerance()
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->Tolerance();
}

double Macad::Occt::BRepAdaptor_Curve::FirstParameter()
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::BRepAdaptor_Curve::LastParameter()
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->LastParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepAdaptor_Curve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::BRepAdaptor_Curve*)_NativeInstance)->Continuity();
}

int Macad::Occt::BRepAdaptor_Curve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::BRepAdaptor_Curve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::BRepAdaptor_Curve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_Curve::Trim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_Curve) _result;
	_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Trim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted( _result.get());
}

bool Macad::Occt::BRepAdaptor_Curve::IsClosed()
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::BRepAdaptor_Curve::IsPeriodic()
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::BRepAdaptor_Curve::Period()
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->Period();
}

Macad::Occt::Pnt Macad::Occt::BRepAdaptor_Curve::Value(double U)
{
	return Macad::Occt::Pnt(((::BRepAdaptor_Curve*)_NativeInstance)->Value(U));
}

void Macad::Occt::BRepAdaptor_Curve::D0(double U, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::BRepAdaptor_Curve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void Macad::Occt::BRepAdaptor_Curve::D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::BRepAdaptor_Curve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void Macad::Occt::BRepAdaptor_Curve::D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	((::BRepAdaptor_Curve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::BRepAdaptor_Curve::D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	((::BRepAdaptor_Curve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

Macad::Occt::Vec Macad::Occt::BRepAdaptor_Curve::DN(double U, int N)
{
	return Macad::Occt::Vec(((::BRepAdaptor_Curve*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::BRepAdaptor_Curve::Resolution(double R3d)
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->Resolution(R3d);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::BRepAdaptor_Curve::GetGeomType()
{
	return (Macad::Occt::GeomAbs_CurveType)((::BRepAdaptor_Curve*)_NativeInstance)->GetType();
}

Macad::Occt::gp_Lin^ Macad::Occt::BRepAdaptor_Curve::Line()
{
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::BRepAdaptor_Curve::Circle()
{
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::BRepAdaptor_Curve::Ellipse()
{
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::BRepAdaptor_Curve::Hyperbola()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::BRepAdaptor_Curve::Parabola()
{
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

int Macad::Occt::BRepAdaptor_Curve::Degree()
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->Degree();
}

bool Macad::Occt::BRepAdaptor_Curve::IsRational()
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->IsRational();
}

int Macad::Occt::BRepAdaptor_Curve::NbPoles()
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->NbPoles();
}

int Macad::Occt::BRepAdaptor_Curve::NbKnots()
{
	return ((::BRepAdaptor_Curve*)_NativeInstance)->NbKnots();
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::BRepAdaptor_Curve::Bezier()
{
	Handle(::Geom_BezierCurve) _result;
	_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::BRepAdaptor_Curve::BSpline()
{
	Handle(::Geom_BSplineCurve) _result;
	_result = ((::BRepAdaptor_Curve*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_OffsetCurve^ Macad::Occt::BRepAdaptor_Curve::OffsetCurve()
{
	Handle(::Geom_OffsetCurve) _result;
	_result = ((::BRepAdaptor_Curve*)_NativeInstance)->OffsetCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_OffsetCurve::CreateDowncasted( _result.get());
}


Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Curve::CreateDowncasted(::BRepAdaptor_Curve* instance)
{
	return gcnew Macad::Occt::BRepAdaptor_Curve( instance );
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_HArray1OfCurve
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_HArray1OfCurve();
}

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_HArray1OfCurve(theLower, theUpper);
}

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(int theLower, int theUpper, Macad::Occt::BRepAdaptor_Curve^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_HArray1OfCurve(theLower, theUpper, *(::BRepAdaptor_Curve*)theValue->NativeInstance);
}

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(Macad::Occt::BRepAdaptor_Array1OfCurve^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_HArray1OfCurve(*(::BRepAdaptor_Array1OfCurve*)theOther->NativeInstance);
}

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(Macad::Occt::BRepAdaptor_HArray1OfCurve^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_HArray1OfCurve(*(::BRepAdaptor_HArray1OfCurve*)parameter1->NativeInstance);
}

Macad::Occt::BRepAdaptor_Array1OfCurve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::Array1()
{
	::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
	*_result =  (::BRepAdaptor_Array1OfCurve)((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Array1OfCurve(_result);
}

Macad::Occt::BRepAdaptor_Array1OfCurve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::ChangeArray1()
{
	::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
	*_result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Array1OfCurve(_result);
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::Init(Macad::Occt::BRepAdaptor_Curve^ theValue)
{
	((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Init(*(::BRepAdaptor_Curve*)theValue->NativeInstance);
}

int Macad::Occt::BRepAdaptor_HArray1OfCurve::Size()
{
	return ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Size();
}

int Macad::Occt::BRepAdaptor_HArray1OfCurve::Length()
{
	return ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Length();
}

bool Macad::Occt::BRepAdaptor_HArray1OfCurve::IsEmpty()
{
	return ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::BRepAdaptor_HArray1OfCurve::Lower()
{
	return ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Lower();
}

int Macad::Occt::BRepAdaptor_HArray1OfCurve::Upper()
{
	return ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Upper();
}

bool Macad::Occt::BRepAdaptor_HArray1OfCurve::IsDeletable()
{
	return ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::BRepAdaptor_HArray1OfCurve::IsAllocated()
{
	return ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->IsAllocated();
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::First()
{
	::BRepAdaptor_Curve* _result = new ::BRepAdaptor_Curve();
	*_result =  (::BRepAdaptor_Curve)((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Curve(_result);
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::ChangeFirst()
{
	::BRepAdaptor_Curve* _result = new ::BRepAdaptor_Curve();
	*_result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Curve(_result);
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::Last()
{
	::BRepAdaptor_Curve* _result = new ::BRepAdaptor_Curve();
	*_result =  (::BRepAdaptor_Curve)((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Curve(_result);
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::ChangeLast()
{
	::BRepAdaptor_Curve* _result = new ::BRepAdaptor_Curve();
	*_result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Curve(_result);
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::Value(int theIndex)
{
	::BRepAdaptor_Curve* _result = new ::BRepAdaptor_Curve();
	*_result =  (::BRepAdaptor_Curve)((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Curve(_result);
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::ChangeValue(int theIndex)
{
	::BRepAdaptor_Curve* _result = new ::BRepAdaptor_Curve();
	*_result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Curve(_result);
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::SetValue(int theIndex, Macad::Occt::BRepAdaptor_Curve^ theItem)
{
	((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->SetValue(theIndex, *(::BRepAdaptor_Curve*)theItem->NativeInstance);
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::BRepAdaptor_HArray1OfCurve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::CreateDowncasted(::BRepAdaptor_HArray1OfCurve* instance)
{
	return gcnew Macad::Occt::BRepAdaptor_HArray1OfCurve( instance );
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_CompCurve
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve()
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_CompCurve();
}

Macad::Occt::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_CompCurve(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa);
}

Macad::Occt::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(Macad::Occt::TopoDS_Wire^ W)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_CompCurve(*(::TopoDS_Wire*)W->NativeInstance, false);
}

Macad::Occt::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa, double First, double Last, double Tol)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_CompCurve(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa, First, Last, Tol);
}

Macad::Occt::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(Macad::Occt::BRepAdaptor_CompCurve^ parameter1)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_CompCurve(*(::BRepAdaptor_CompCurve*)parameter1->NativeInstance);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_CompCurve::ShallowCopy()
{
	Handle(::Adaptor3d_Curve) _result;
	_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->ShallowCopy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::BRepAdaptor_CompCurve::Initialize(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa)
{
	((::BRepAdaptor_CompCurve*)_NativeInstance)->Initialize(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa);
}

void Macad::Occt::BRepAdaptor_CompCurve::Initialize(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa, double First, double Last, double Tol)
{
	((::BRepAdaptor_CompCurve*)_NativeInstance)->Initialize(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa, First, Last, Tol);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepAdaptor_CompCurve::Wire()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result =  (::TopoDS_Wire)((::BRepAdaptor_CompCurve*)_NativeInstance)->Wire();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

void Macad::Occt::BRepAdaptor_CompCurve::Edge(double U, Macad::Occt::TopoDS_Edge^ E, double% UonE)
{
	pin_ptr<double> pp_UonE = &UonE;
	((::BRepAdaptor_CompCurve*)_NativeInstance)->Edge(U, *(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_UonE);
}

double Macad::Occt::BRepAdaptor_CompCurve::FirstParameter()
{
	return ((::BRepAdaptor_CompCurve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::BRepAdaptor_CompCurve::LastParameter()
{
	return ((::BRepAdaptor_CompCurve*)_NativeInstance)->LastParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepAdaptor_CompCurve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::BRepAdaptor_CompCurve*)_NativeInstance)->Continuity();
}

int Macad::Occt::BRepAdaptor_CompCurve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::BRepAdaptor_CompCurve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::BRepAdaptor_CompCurve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::BRepAdaptor_CompCurve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_CompCurve::Trim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_Curve) _result;
	_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Trim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted( _result.get());
}

bool Macad::Occt::BRepAdaptor_CompCurve::IsClosed()
{
	return ((::BRepAdaptor_CompCurve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::BRepAdaptor_CompCurve::IsPeriodic()
{
	return ((::BRepAdaptor_CompCurve*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::BRepAdaptor_CompCurve::Period()
{
	return ((::BRepAdaptor_CompCurve*)_NativeInstance)->Period();
}

Macad::Occt::Pnt Macad::Occt::BRepAdaptor_CompCurve::Value(double U)
{
	return Macad::Occt::Pnt(((::BRepAdaptor_CompCurve*)_NativeInstance)->Value(U));
}

void Macad::Occt::BRepAdaptor_CompCurve::D0(double U, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::BRepAdaptor_CompCurve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void Macad::Occt::BRepAdaptor_CompCurve::D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::BRepAdaptor_CompCurve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void Macad::Occt::BRepAdaptor_CompCurve::D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	((::BRepAdaptor_CompCurve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::BRepAdaptor_CompCurve::D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	((::BRepAdaptor_CompCurve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

Macad::Occt::Vec Macad::Occt::BRepAdaptor_CompCurve::DN(double U, int N)
{
	return Macad::Occt::Vec(((::BRepAdaptor_CompCurve*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::BRepAdaptor_CompCurve::Resolution(double R3d)
{
	return ((::BRepAdaptor_CompCurve*)_NativeInstance)->Resolution(R3d);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::BRepAdaptor_CompCurve::GetGeomType()
{
	return (Macad::Occt::GeomAbs_CurveType)((::BRepAdaptor_CompCurve*)_NativeInstance)->GetType();
}

Macad::Occt::gp_Lin^ Macad::Occt::BRepAdaptor_CompCurve::Line()
{
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::BRepAdaptor_CompCurve::Circle()
{
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::BRepAdaptor_CompCurve::Ellipse()
{
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::BRepAdaptor_CompCurve::Hyperbola()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::BRepAdaptor_CompCurve::Parabola()
{
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

int Macad::Occt::BRepAdaptor_CompCurve::Degree()
{
	return ((::BRepAdaptor_CompCurve*)_NativeInstance)->Degree();
}

bool Macad::Occt::BRepAdaptor_CompCurve::IsRational()
{
	return ((::BRepAdaptor_CompCurve*)_NativeInstance)->IsRational();
}

int Macad::Occt::BRepAdaptor_CompCurve::NbPoles()
{
	return ((::BRepAdaptor_CompCurve*)_NativeInstance)->NbPoles();
}

int Macad::Occt::BRepAdaptor_CompCurve::NbKnots()
{
	return ((::BRepAdaptor_CompCurve*)_NativeInstance)->NbKnots();
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::BRepAdaptor_CompCurve::Bezier()
{
	Handle(::Geom_BezierCurve) _result;
	_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::BRepAdaptor_CompCurve::BSpline()
{
	Handle(::Geom_BSplineCurve) _result;
	_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}


Macad::Occt::BRepAdaptor_CompCurve^ Macad::Occt::BRepAdaptor_CompCurve::CreateDowncasted(::BRepAdaptor_CompCurve* instance)
{
	return gcnew Macad::Occt::BRepAdaptor_CompCurve( instance );
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Curve2d
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_Curve2d::BRepAdaptor_Curve2d()
	: Macad::Occt::Geom2dAdaptor_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_Curve2d();
}

Macad::Occt::BRepAdaptor_Curve2d::BRepAdaptor_Curve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
	: Macad::Occt::Geom2dAdaptor_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_Curve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::BRepAdaptor_Curve2d::BRepAdaptor_Curve2d(Macad::Occt::BRepAdaptor_Curve2d^ parameter1)
	: Macad::Occt::Geom2dAdaptor_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_Curve2d(*(::BRepAdaptor_Curve2d*)parameter1->NativeInstance);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::BRepAdaptor_Curve2d::ShallowCopy()
{
	Handle(::Adaptor2d_Curve2d) _result;
	_result = ((::BRepAdaptor_Curve2d*)_NativeInstance)->ShallowCopy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted( _result.get());
}

void Macad::Occt::BRepAdaptor_Curve2d::Initialize(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
	((::BRepAdaptor_Curve2d*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepAdaptor_Curve2d::Edge()
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepAdaptor_Curve2d*)_NativeInstance)->Edge();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepAdaptor_Curve2d::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::BRepAdaptor_Curve2d*)_NativeInstance)->Face();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}


Macad::Occt::BRepAdaptor_Curve2d^ Macad::Occt::BRepAdaptor_Curve2d::CreateDowncasted(::BRepAdaptor_Curve2d* instance)
{
	return gcnew Macad::Occt::BRepAdaptor_Curve2d( instance );
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Surface
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_Surface::BRepAdaptor_Surface()
	: Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_Surface();
}

Macad::Occt::BRepAdaptor_Surface::BRepAdaptor_Surface(Macad::Occt::TopoDS_Face^ F, bool R)
	: Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_Surface(*(::TopoDS_Face*)F->NativeInstance, R);
}

Macad::Occt::BRepAdaptor_Surface::BRepAdaptor_Surface(Macad::Occt::TopoDS_Face^ F)
	: Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_Surface(*(::TopoDS_Face*)F->NativeInstance, true);
}

Macad::Occt::BRepAdaptor_Surface::BRepAdaptor_Surface(Macad::Occt::BRepAdaptor_Surface^ parameter1)
	: Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepAdaptor_Surface(*(::BRepAdaptor_Surface*)parameter1->NativeInstance);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::BRepAdaptor_Surface::ShallowCopy()
{
	Handle(::Adaptor3d_Surface) _result;
	_result = ((::BRepAdaptor_Surface*)_NativeInstance)->ShallowCopy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

void Macad::Occt::BRepAdaptor_Surface::Initialize(Macad::Occt::TopoDS_Face^ F, bool Restriction)
{
	((::BRepAdaptor_Surface*)_NativeInstance)->Initialize(*(::TopoDS_Face*)F->NativeInstance, Restriction);
}

void Macad::Occt::BRepAdaptor_Surface::Initialize(Macad::Occt::TopoDS_Face^ F)
{
	((::BRepAdaptor_Surface*)_NativeInstance)->Initialize(*(::TopoDS_Face*)F->NativeInstance, true);
}

Macad::Occt::GeomAdaptor_Surface^ Macad::Occt::BRepAdaptor_Surface::Surface()
{
	::GeomAdaptor_Surface* _result = new ::GeomAdaptor_Surface();
	*_result =  (::GeomAdaptor_Surface)((::BRepAdaptor_Surface*)_NativeInstance)->Surface();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::GeomAdaptor_Surface(_result);
}

Macad::Occt::GeomAdaptor_Surface^ Macad::Occt::BRepAdaptor_Surface::ChangeSurface()
{
	::GeomAdaptor_Surface* _result = new ::GeomAdaptor_Surface();
	*_result = ((::BRepAdaptor_Surface*)_NativeInstance)->ChangeSurface();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::GeomAdaptor_Surface(_result);
}

Macad::Occt::Trsf Macad::Occt::BRepAdaptor_Surface::Trsf()
{
	return Macad::Occt::Trsf(((::BRepAdaptor_Surface*)_NativeInstance)->Trsf());
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepAdaptor_Surface::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::BRepAdaptor_Surface*)_NativeInstance)->Face();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

double Macad::Occt::BRepAdaptor_Surface::Tolerance()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->Tolerance();
}

double Macad::Occt::BRepAdaptor_Surface::FirstUParameter()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->FirstUParameter();
}

double Macad::Occt::BRepAdaptor_Surface::LastUParameter()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->LastUParameter();
}

double Macad::Occt::BRepAdaptor_Surface::FirstVParameter()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->FirstVParameter();
}

double Macad::Occt::BRepAdaptor_Surface::LastVParameter()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->LastVParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepAdaptor_Surface::UContinuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::BRepAdaptor_Surface*)_NativeInstance)->UContinuity();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepAdaptor_Surface::VContinuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::BRepAdaptor_Surface*)_NativeInstance)->VContinuity();
}

int Macad::Occt::BRepAdaptor_Surface::NbUIntervals(Macad::Occt::GeomAbs_Shape theSh)
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->NbUIntervals((::GeomAbs_Shape)theSh);
}

int Macad::Occt::BRepAdaptor_Surface::NbVIntervals(Macad::Occt::GeomAbs_Shape theSh)
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->NbVIntervals((::GeomAbs_Shape)theSh);
}

void Macad::Occt::BRepAdaptor_Surface::UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::BRepAdaptor_Surface*)_NativeInstance)->UIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

void Macad::Occt::BRepAdaptor_Surface::VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::BRepAdaptor_Surface*)_NativeInstance)->VIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::BRepAdaptor_Surface::UTrim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_Surface) _result;
	_result = ((::BRepAdaptor_Surface*)_NativeInstance)->UTrim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::BRepAdaptor_Surface::VTrim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_Surface) _result;
	_result = ((::BRepAdaptor_Surface*)_NativeInstance)->VTrim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

bool Macad::Occt::BRepAdaptor_Surface::IsUClosed()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->IsUClosed();
}

bool Macad::Occt::BRepAdaptor_Surface::IsVClosed()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->IsVClosed();
}

bool Macad::Occt::BRepAdaptor_Surface::IsUPeriodic()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->IsUPeriodic();
}

double Macad::Occt::BRepAdaptor_Surface::UPeriod()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->UPeriod();
}

bool Macad::Occt::BRepAdaptor_Surface::IsVPeriodic()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->IsVPeriodic();
}

double Macad::Occt::BRepAdaptor_Surface::VPeriod()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->VPeriod();
}

Macad::Occt::Pnt Macad::Occt::BRepAdaptor_Surface::Value(double U, double V)
{
	return Macad::Occt::Pnt(((::BRepAdaptor_Surface*)_NativeInstance)->Value(U, V));
}

void Macad::Occt::BRepAdaptor_Surface::D0(double U, double V, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::BRepAdaptor_Surface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void Macad::Occt::BRepAdaptor_Surface::D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
	pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
	((::BRepAdaptor_Surface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void Macad::Occt::BRepAdaptor_Surface::D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
	pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
	pin_ptr<Macad::Occt::Vec> pp_D2U = &D2U;
	pin_ptr<Macad::Occt::Vec> pp_D2V = &D2V;
	pin_ptr<Macad::Occt::Vec> pp_D2UV = &D2UV;
	((::BRepAdaptor_Surface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void Macad::Occt::BRepAdaptor_Surface::D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
	pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
	pin_ptr<Macad::Occt::Vec> pp_D2U = &D2U;
	pin_ptr<Macad::Occt::Vec> pp_D2V = &D2V;
	pin_ptr<Macad::Occt::Vec> pp_D2UV = &D2UV;
	pin_ptr<Macad::Occt::Vec> pp_D3U = &D3U;
	pin_ptr<Macad::Occt::Vec> pp_D3V = &D3V;
	pin_ptr<Macad::Occt::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<Macad::Occt::Vec> pp_D3UVV = &D3UVV;
	((::BRepAdaptor_Surface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

Macad::Occt::Vec Macad::Occt::BRepAdaptor_Surface::DN(double U, double V, int Nu, int Nv)
{
	return Macad::Occt::Vec(((::BRepAdaptor_Surface*)_NativeInstance)->DN(U, V, Nu, Nv));
}

double Macad::Occt::BRepAdaptor_Surface::UResolution(double theR3d)
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->UResolution(theR3d);
}

double Macad::Occt::BRepAdaptor_Surface::VResolution(double theR3d)
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->VResolution(theR3d);
}

Macad::Occt::GeomAbs_SurfaceType Macad::Occt::BRepAdaptor_Surface::GetGeomType()
{
	return (Macad::Occt::GeomAbs_SurfaceType)((::BRepAdaptor_Surface*)_NativeInstance)->GetType();
}

Macad::Occt::Pln Macad::Occt::BRepAdaptor_Surface::Plane()
{
	return Macad::Occt::Pln(((::BRepAdaptor_Surface*)_NativeInstance)->Plane());
}

Macad::Occt::gp_Cylinder^ Macad::Occt::BRepAdaptor_Surface::Cylinder()
{
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::BRepAdaptor_Surface*)_NativeInstance)->Cylinder();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

Macad::Occt::gp_Cone^ Macad::Occt::BRepAdaptor_Surface::Cone()
{
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::BRepAdaptor_Surface*)_NativeInstance)->Cone();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

Macad::Occt::gp_Sphere^ Macad::Occt::BRepAdaptor_Surface::Sphere()
{
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::BRepAdaptor_Surface*)_NativeInstance)->Sphere();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

Macad::Occt::gp_Torus^ Macad::Occt::BRepAdaptor_Surface::Torus()
{
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::BRepAdaptor_Surface*)_NativeInstance)->Torus();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

int Macad::Occt::BRepAdaptor_Surface::UDegree()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->UDegree();
}

int Macad::Occt::BRepAdaptor_Surface::NbUPoles()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->NbUPoles();
}

int Macad::Occt::BRepAdaptor_Surface::VDegree()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->VDegree();
}

int Macad::Occt::BRepAdaptor_Surface::NbVPoles()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->NbVPoles();
}

int Macad::Occt::BRepAdaptor_Surface::NbUKnots()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->NbUKnots();
}

int Macad::Occt::BRepAdaptor_Surface::NbVKnots()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->NbVKnots();
}

bool Macad::Occt::BRepAdaptor_Surface::IsURational()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->IsURational();
}

bool Macad::Occt::BRepAdaptor_Surface::IsVRational()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->IsVRational();
}

Macad::Occt::Geom_BezierSurface^ Macad::Occt::BRepAdaptor_Surface::Bezier()
{
	Handle(::Geom_BezierSurface) _result;
	_result = ((::BRepAdaptor_Surface*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::BRepAdaptor_Surface::BSpline()
{
	Handle(::Geom_BSplineSurface) _result;
	_result = ((::BRepAdaptor_Surface*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Ax1 Macad::Occt::BRepAdaptor_Surface::AxeOfRevolution()
{
	return Macad::Occt::Ax1(((::BRepAdaptor_Surface*)_NativeInstance)->AxeOfRevolution());
}

Macad::Occt::Dir Macad::Occt::BRepAdaptor_Surface::Direction()
{
	return Macad::Occt::Dir(((::BRepAdaptor_Surface*)_NativeInstance)->Direction());
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_Surface::BasisCurve()
{
	Handle(::Adaptor3d_Curve) _result;
	_result = ((::BRepAdaptor_Surface*)_NativeInstance)->BasisCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::BRepAdaptor_Surface::BasisSurface()
{
	Handle(::Adaptor3d_Surface) _result;
	_result = ((::BRepAdaptor_Surface*)_NativeInstance)->BasisSurface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

double Macad::Occt::BRepAdaptor_Surface::OffsetValue()
{
	return ((::BRepAdaptor_Surface*)_NativeInstance)->OffsetValue();
}


Macad::Occt::BRepAdaptor_Surface^ Macad::Occt::BRepAdaptor_Surface::CreateDowncasted(::BRepAdaptor_Surface* instance)
{
	return gcnew Macad::Occt::BRepAdaptor_Surface( instance );
}


