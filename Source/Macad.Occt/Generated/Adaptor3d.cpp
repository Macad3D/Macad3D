// Generated wrapper code for package Adaptor3d

#include "OcctPCH.h"
#include "Adaptor3d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Adaptor3d.h"
#include "GeomAdaptor.h"
#include "ProjLib.h"
#include "BRepAdaptor.h"
#include "Standard.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "gp.h"
#include "Geom.h"
#include "Adaptor2d.h"
#include "TopAbs.h"


//---------------------------------------------------------------------
//  Class  Adaptor3d_Curve
//---------------------------------------------------------------------

Macad::Occt::Adaptor3d_Curve::Adaptor3d_Curve(Macad::Occt::Adaptor3d_Curve^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor3d_Curve(*(::Adaptor3d_Curve*)parameter1->NativeInstance);
}

Macad::Occt::Adaptor3d_Curve::Adaptor3d_Curve()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor3d_Curve();
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::Adaptor3d_Curve::ShallowCopy()
{
	Handle(::Adaptor3d_Curve) _result;
	_result = ((::Adaptor3d_Curve*)_NativeInstance)->ShallowCopy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted( _result.get());
}

double Macad::Occt::Adaptor3d_Curve::FirstParameter()
{
	return ((::Adaptor3d_Curve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Adaptor3d_Curve::LastParameter()
{
	return ((::Adaptor3d_Curve*)_NativeInstance)->LastParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Adaptor3d_Curve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Adaptor3d_Curve*)_NativeInstance)->Continuity();
}

int Macad::Occt::Adaptor3d_Curve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::Adaptor3d_Curve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::Adaptor3d_Curve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::Adaptor3d_Curve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::Adaptor3d_Curve::Trim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_Curve) _result;
	_result = ((::Adaptor3d_Curve*)_NativeInstance)->Trim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted( _result.get());
}

bool Macad::Occt::Adaptor3d_Curve::IsClosed()
{
	return ((::Adaptor3d_Curve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Adaptor3d_Curve::IsPeriodic()
{
	return ((::Adaptor3d_Curve*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::Adaptor3d_Curve::Period()
{
	return ((::Adaptor3d_Curve*)_NativeInstance)->Period();
}

Macad::Occt::Pnt Macad::Occt::Adaptor3d_Curve::Value(double U)
{
	return Macad::Occt::Pnt(((::Adaptor3d_Curve*)_NativeInstance)->Value(U));
}

void Macad::Occt::Adaptor3d_Curve::D0(double U, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::Adaptor3d_Curve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void Macad::Occt::Adaptor3d_Curve::D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::Adaptor3d_Curve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void Macad::Occt::Adaptor3d_Curve::D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	((::Adaptor3d_Curve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::Adaptor3d_Curve::D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	((::Adaptor3d_Curve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

Macad::Occt::Vec Macad::Occt::Adaptor3d_Curve::DN(double U, int N)
{
	return Macad::Occt::Vec(((::Adaptor3d_Curve*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::Adaptor3d_Curve::Resolution(double R3d)
{
	return ((::Adaptor3d_Curve*)_NativeInstance)->Resolution(R3d);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Adaptor3d_Curve::GetGeomType()
{
	return (Macad::Occt::GeomAbs_CurveType)((::Adaptor3d_Curve*)_NativeInstance)->GetType();
}

Macad::Occt::gp_Lin^ Macad::Occt::Adaptor3d_Curve::Line()
{
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::Adaptor3d_Curve*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::Adaptor3d_Curve::Circle()
{
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::Adaptor3d_Curve*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::Adaptor3d_Curve::Ellipse()
{
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::Adaptor3d_Curve*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::Adaptor3d_Curve::Hyperbola()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::Adaptor3d_Curve*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::Adaptor3d_Curve::Parabola()
{
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::Adaptor3d_Curve*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

int Macad::Occt::Adaptor3d_Curve::Degree()
{
	return ((::Adaptor3d_Curve*)_NativeInstance)->Degree();
}

bool Macad::Occt::Adaptor3d_Curve::IsRational()
{
	return ((::Adaptor3d_Curve*)_NativeInstance)->IsRational();
}

int Macad::Occt::Adaptor3d_Curve::NbPoles()
{
	return ((::Adaptor3d_Curve*)_NativeInstance)->NbPoles();
}

int Macad::Occt::Adaptor3d_Curve::NbKnots()
{
	return ((::Adaptor3d_Curve*)_NativeInstance)->NbKnots();
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::Adaptor3d_Curve::Bezier()
{
	Handle(::Geom_BezierCurve) _result;
	_result = ((::Adaptor3d_Curve*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::Adaptor3d_Curve::BSpline()
{
	Handle(::Geom_BSplineCurve) _result;
	_result = ((::Adaptor3d_Curve*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_OffsetCurve^ Macad::Occt::Adaptor3d_Curve::OffsetCurve()
{
	Handle(::Geom_OffsetCurve) _result;
	_result = ((::Adaptor3d_Curve*)_NativeInstance)->OffsetCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_OffsetCurve::CreateDowncasted( _result.get());
}


Macad::Occt::Adaptor3d_Curve^ Macad::Occt::Adaptor3d_Curve::CreateDowncasted(::Adaptor3d_Curve* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Adaptor3d_CurveOnSurface)))
		return Macad::Occt::Adaptor3d_CurveOnSurface::CreateDowncasted((::Adaptor3d_CurveOnSurface*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Adaptor3d_IsoCurve)))
		return Macad::Occt::Adaptor3d_IsoCurve::CreateDowncasted((::Adaptor3d_IsoCurve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::GeomAdaptor_Curve)))
		return Macad::Occt::GeomAdaptor_Curve::CreateDowncasted((::GeomAdaptor_Curve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ProjLib_ProjectOnPlane)))
		return Macad::Occt::ProjLib_ProjectOnPlane::CreateDowncasted((::ProjLib_ProjectOnPlane*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepAdaptor_Curve)))
		return Macad::Occt::BRepAdaptor_Curve::CreateDowncasted((::BRepAdaptor_Curve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepAdaptor_CompCurve)))
		return Macad::Occt::BRepAdaptor_CompCurve::CreateDowncasted((::BRepAdaptor_CompCurve*)instance);

	return gcnew Macad::Occt::Adaptor3d_Curve( instance );
}



//---------------------------------------------------------------------
//  Class  Adaptor3d_Surface
//---------------------------------------------------------------------

Macad::Occt::Adaptor3d_Surface::Adaptor3d_Surface(Macad::Occt::Adaptor3d_Surface^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor3d_Surface(*(::Adaptor3d_Surface*)parameter1->NativeInstance);
}

Macad::Occt::Adaptor3d_Surface::Adaptor3d_Surface()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor3d_Surface();
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::Adaptor3d_Surface::ShallowCopy()
{
	Handle(::Adaptor3d_Surface) _result;
	_result = ((::Adaptor3d_Surface*)_NativeInstance)->ShallowCopy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

double Macad::Occt::Adaptor3d_Surface::FirstUParameter()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->FirstUParameter();
}

double Macad::Occt::Adaptor3d_Surface::LastUParameter()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->LastUParameter();
}

double Macad::Occt::Adaptor3d_Surface::FirstVParameter()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->FirstVParameter();
}

double Macad::Occt::Adaptor3d_Surface::LastVParameter()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->LastVParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Adaptor3d_Surface::UContinuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Adaptor3d_Surface*)_NativeInstance)->UContinuity();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Adaptor3d_Surface::VContinuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Adaptor3d_Surface*)_NativeInstance)->VContinuity();
}

int Macad::Occt::Adaptor3d_Surface::NbUIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->NbUIntervals((::GeomAbs_Shape)S);
}

int Macad::Occt::Adaptor3d_Surface::NbVIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->NbVIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::Adaptor3d_Surface::UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::Adaptor3d_Surface*)_NativeInstance)->UIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

void Macad::Occt::Adaptor3d_Surface::VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::Adaptor3d_Surface*)_NativeInstance)->VIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::Adaptor3d_Surface::UTrim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_Surface) _result;
	_result = ((::Adaptor3d_Surface*)_NativeInstance)->UTrim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::Adaptor3d_Surface::VTrim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_Surface) _result;
	_result = ((::Adaptor3d_Surface*)_NativeInstance)->VTrim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

bool Macad::Occt::Adaptor3d_Surface::IsUClosed()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->IsUClosed();
}

bool Macad::Occt::Adaptor3d_Surface::IsVClosed()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->IsVClosed();
}

bool Macad::Occt::Adaptor3d_Surface::IsUPeriodic()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->IsUPeriodic();
}

double Macad::Occt::Adaptor3d_Surface::UPeriod()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->UPeriod();
}

bool Macad::Occt::Adaptor3d_Surface::IsVPeriodic()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->IsVPeriodic();
}

double Macad::Occt::Adaptor3d_Surface::VPeriod()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->VPeriod();
}

Macad::Occt::Pnt Macad::Occt::Adaptor3d_Surface::Value(double U, double V)
{
	return Macad::Occt::Pnt(((::Adaptor3d_Surface*)_NativeInstance)->Value(U, V));
}

void Macad::Occt::Adaptor3d_Surface::D0(double U, double V, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::Adaptor3d_Surface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void Macad::Occt::Adaptor3d_Surface::D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
	pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
	((::Adaptor3d_Surface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void Macad::Occt::Adaptor3d_Surface::D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
	pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
	pin_ptr<Macad::Occt::Vec> pp_D2U = &D2U;
	pin_ptr<Macad::Occt::Vec> pp_D2V = &D2V;
	pin_ptr<Macad::Occt::Vec> pp_D2UV = &D2UV;
	((::Adaptor3d_Surface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void Macad::Occt::Adaptor3d_Surface::D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV)
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
	((::Adaptor3d_Surface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

Macad::Occt::Vec Macad::Occt::Adaptor3d_Surface::DN(double U, double V, int Nu, int Nv)
{
	return Macad::Occt::Vec(((::Adaptor3d_Surface*)_NativeInstance)->DN(U, V, Nu, Nv));
}

double Macad::Occt::Adaptor3d_Surface::UResolution(double R3d)
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->UResolution(R3d);
}

double Macad::Occt::Adaptor3d_Surface::VResolution(double R3d)
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->VResolution(R3d);
}

Macad::Occt::GeomAbs_SurfaceType Macad::Occt::Adaptor3d_Surface::GetGeomType()
{
	return (Macad::Occt::GeomAbs_SurfaceType)((::Adaptor3d_Surface*)_NativeInstance)->GetType();
}

Macad::Occt::Pln Macad::Occt::Adaptor3d_Surface::Plane()
{
	return Macad::Occt::Pln(((::Adaptor3d_Surface*)_NativeInstance)->Plane());
}

Macad::Occt::gp_Cylinder^ Macad::Occt::Adaptor3d_Surface::Cylinder()
{
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::Adaptor3d_Surface*)_NativeInstance)->Cylinder();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

Macad::Occt::gp_Cone^ Macad::Occt::Adaptor3d_Surface::Cone()
{
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::Adaptor3d_Surface*)_NativeInstance)->Cone();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

Macad::Occt::gp_Sphere^ Macad::Occt::Adaptor3d_Surface::Sphere()
{
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::Adaptor3d_Surface*)_NativeInstance)->Sphere();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

Macad::Occt::gp_Torus^ Macad::Occt::Adaptor3d_Surface::Torus()
{
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::Adaptor3d_Surface*)_NativeInstance)->Torus();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

int Macad::Occt::Adaptor3d_Surface::UDegree()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->UDegree();
}

int Macad::Occt::Adaptor3d_Surface::NbUPoles()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->NbUPoles();
}

int Macad::Occt::Adaptor3d_Surface::VDegree()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->VDegree();
}

int Macad::Occt::Adaptor3d_Surface::NbVPoles()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->NbVPoles();
}

int Macad::Occt::Adaptor3d_Surface::NbUKnots()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->NbUKnots();
}

int Macad::Occt::Adaptor3d_Surface::NbVKnots()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->NbVKnots();
}

bool Macad::Occt::Adaptor3d_Surface::IsURational()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->IsURational();
}

bool Macad::Occt::Adaptor3d_Surface::IsVRational()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->IsVRational();
}

Macad::Occt::Geom_BezierSurface^ Macad::Occt::Adaptor3d_Surface::Bezier()
{
	Handle(::Geom_BezierSurface) _result;
	_result = ((::Adaptor3d_Surface*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::Adaptor3d_Surface::BSpline()
{
	Handle(::Geom_BSplineSurface) _result;
	_result = ((::Adaptor3d_Surface*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Ax1 Macad::Occt::Adaptor3d_Surface::AxeOfRevolution()
{
	return Macad::Occt::Ax1(((::Adaptor3d_Surface*)_NativeInstance)->AxeOfRevolution());
}

Macad::Occt::Dir Macad::Occt::Adaptor3d_Surface::Direction()
{
	return Macad::Occt::Dir(((::Adaptor3d_Surface*)_NativeInstance)->Direction());
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::Adaptor3d_Surface::BasisCurve()
{
	Handle(::Adaptor3d_Curve) _result;
	_result = ((::Adaptor3d_Surface*)_NativeInstance)->BasisCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::Adaptor3d_Surface::BasisSurface()
{
	Handle(::Adaptor3d_Surface) _result;
	_result = ((::Adaptor3d_Surface*)_NativeInstance)->BasisSurface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

double Macad::Occt::Adaptor3d_Surface::OffsetValue()
{
	return ((::Adaptor3d_Surface*)_NativeInstance)->OffsetValue();
}


Macad::Occt::Adaptor3d_Surface^ Macad::Occt::Adaptor3d_Surface::CreateDowncasted(::Adaptor3d_Surface* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::GeomAdaptor_Surface)))
		return Macad::Occt::GeomAdaptor_Surface::CreateDowncasted((::GeomAdaptor_Surface*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepAdaptor_Surface)))
		return Macad::Occt::BRepAdaptor_Surface::CreateDowncasted((::BRepAdaptor_Surface*)instance);

	return gcnew Macad::Occt::Adaptor3d_Surface( instance );
}



//---------------------------------------------------------------------
//  Class  Adaptor3d_CurveOnSurface
//---------------------------------------------------------------------

Macad::Occt::Adaptor3d_CurveOnSurface::Adaptor3d_CurveOnSurface()
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor3d_CurveOnSurface();
}

Macad::Occt::Adaptor3d_CurveOnSurface::Adaptor3d_CurveOnSurface(Macad::Occt::Adaptor3d_Surface^ S)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::Adaptor3d_CurveOnSurface(h_S);
	S->NativeInstance = h_S.get();
}

Macad::Occt::Adaptor3d_CurveOnSurface::Adaptor3d_CurveOnSurface(Macad::Occt::Adaptor2d_Curve2d^ C, Macad::Occt::Adaptor3d_Surface^ S)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor2d_Curve2d) h_C = C->NativeInstance;
	Handle(::Adaptor3d_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::Adaptor3d_CurveOnSurface(h_C, h_S);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::Adaptor3d_CurveOnSurface::Adaptor3d_CurveOnSurface(Macad::Occt::Adaptor3d_CurveOnSurface^ parameter1)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor3d_CurveOnSurface(*(::Adaptor3d_CurveOnSurface*)parameter1->NativeInstance);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::Adaptor3d_CurveOnSurface::ShallowCopy()
{
	Handle(::Adaptor3d_Curve) _result;
	_result = ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->ShallowCopy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::Adaptor3d_CurveOnSurface::Load(Macad::Occt::Adaptor3d_Surface^ S)
{
	Handle(::Adaptor3d_Surface) h_S = S->NativeInstance;
	((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Load(h_S);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::Adaptor3d_CurveOnSurface::Load(Macad::Occt::Adaptor2d_Curve2d^ C)
{
	Handle(::Adaptor2d_Curve2d) h_C = C->NativeInstance;
	((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Load(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::Adaptor3d_CurveOnSurface::Load(Macad::Occt::Adaptor2d_Curve2d^ C, Macad::Occt::Adaptor3d_Surface^ S)
{
	Handle(::Adaptor2d_Curve2d) h_C = C->NativeInstance;
	Handle(::Adaptor3d_Surface) h_S = S->NativeInstance;
	((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Load(h_C, h_S);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor3d_CurveOnSurface::GetCurve()
{
	Handle(::Adaptor2d_Curve2d) _result;
	_result = ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->GetCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::Adaptor3d_CurveOnSurface::GetSurface()
{
	Handle(::Adaptor3d_Surface) _result;
	_result = ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->GetSurface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor3d_CurveOnSurface::ChangeCurve()
{
	Handle(::Adaptor2d_Curve2d) _result;
	_result = ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->ChangeCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::Adaptor3d_CurveOnSurface::ChangeSurface()
{
	Handle(::Adaptor3d_Surface) _result;
	_result = ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->ChangeSurface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

double Macad::Occt::Adaptor3d_CurveOnSurface::FirstParameter()
{
	return ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Adaptor3d_CurveOnSurface::LastParameter()
{
	return ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->LastParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Adaptor3d_CurveOnSurface::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Continuity();
}

int Macad::Occt::Adaptor3d_CurveOnSurface::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::Adaptor3d_CurveOnSurface::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::Adaptor3d_CurveOnSurface::Trim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_Curve) _result;
	_result = ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Trim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted( _result.get());
}

bool Macad::Occt::Adaptor3d_CurveOnSurface::IsClosed()
{
	return ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Adaptor3d_CurveOnSurface::IsPeriodic()
{
	return ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::Adaptor3d_CurveOnSurface::Period()
{
	return ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Period();
}

Macad::Occt::Pnt Macad::Occt::Adaptor3d_CurveOnSurface::Value(double U)
{
	return Macad::Occt::Pnt(((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Value(U));
}

void Macad::Occt::Adaptor3d_CurveOnSurface::D0(double U, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::Adaptor3d_CurveOnSurface*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void Macad::Occt::Adaptor3d_CurveOnSurface::D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::Adaptor3d_CurveOnSurface*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void Macad::Occt::Adaptor3d_CurveOnSurface::D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	((::Adaptor3d_CurveOnSurface*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::Adaptor3d_CurveOnSurface::D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	((::Adaptor3d_CurveOnSurface*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

Macad::Occt::Vec Macad::Occt::Adaptor3d_CurveOnSurface::DN(double U, int N)
{
	return Macad::Occt::Vec(((::Adaptor3d_CurveOnSurface*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::Adaptor3d_CurveOnSurface::Resolution(double R3d)
{
	return ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Resolution(R3d);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Adaptor3d_CurveOnSurface::GetGeomType()
{
	return (Macad::Occt::GeomAbs_CurveType)((::Adaptor3d_CurveOnSurface*)_NativeInstance)->GetType();
}

Macad::Occt::gp_Lin^ Macad::Occt::Adaptor3d_CurveOnSurface::Line()
{
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::Adaptor3d_CurveOnSurface::Circle()
{
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::Adaptor3d_CurveOnSurface::Ellipse()
{
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::Adaptor3d_CurveOnSurface::Hyperbola()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::Adaptor3d_CurveOnSurface::Parabola()
{
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

int Macad::Occt::Adaptor3d_CurveOnSurface::Degree()
{
	return ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Degree();
}

bool Macad::Occt::Adaptor3d_CurveOnSurface::IsRational()
{
	return ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->IsRational();
}

int Macad::Occt::Adaptor3d_CurveOnSurface::NbPoles()
{
	return ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->NbPoles();
}

int Macad::Occt::Adaptor3d_CurveOnSurface::NbKnots()
{
	return ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->NbKnots();
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::Adaptor3d_CurveOnSurface::Bezier()
{
	Handle(::Geom_BezierCurve) _result;
	_result = ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::Adaptor3d_CurveOnSurface::BSpline()
{
	Handle(::Geom_BSplineCurve) _result;
	_result = ((::Adaptor3d_CurveOnSurface*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}


Macad::Occt::Adaptor3d_CurveOnSurface^ Macad::Occt::Adaptor3d_CurveOnSurface::CreateDowncasted(::Adaptor3d_CurveOnSurface* instance)
{
	return gcnew Macad::Occt::Adaptor3d_CurveOnSurface( instance );
}



//---------------------------------------------------------------------
//  Class  Adaptor3d_HSurfaceTool
//---------------------------------------------------------------------

Macad::Occt::Adaptor3d_HSurfaceTool::Adaptor3d_HSurfaceTool()
	: BaseClass<::Adaptor3d_HSurfaceTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Adaptor3d_HSurfaceTool();
}

Macad::Occt::Adaptor3d_HSurfaceTool::Adaptor3d_HSurfaceTool(Macad::Occt::Adaptor3d_HSurfaceTool^ parameter1)
	: BaseClass<::Adaptor3d_HSurfaceTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Adaptor3d_HSurfaceTool(*(::Adaptor3d_HSurfaceTool*)parameter1->NativeInstance);
}

double Macad::Occt::Adaptor3d_HSurfaceTool::FirstUParameter(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::FirstUParameter(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
}

double Macad::Occt::Adaptor3d_HSurfaceTool::FirstVParameter(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::FirstVParameter(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
}

double Macad::Occt::Adaptor3d_HSurfaceTool::LastUParameter(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::LastUParameter(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
}

double Macad::Occt::Adaptor3d_HSurfaceTool::LastVParameter(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::LastVParameter(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
}

int Macad::Occt::Adaptor3d_HSurfaceTool::NbUIntervals(Macad::Occt::Adaptor3d_Surface^ theSurf, Macad::Occt::GeomAbs_Shape theSh)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::NbUIntervals(h_theSurf, (::GeomAbs_Shape)theSh);
	theSurf->NativeInstance = h_theSurf.get();
}

int Macad::Occt::Adaptor3d_HSurfaceTool::NbVIntervals(Macad::Occt::Adaptor3d_Surface^ theSurf, Macad::Occt::GeomAbs_Shape theSh)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::NbVIntervals(h_theSurf, (::GeomAbs_Shape)theSh);
	theSurf->NativeInstance = h_theSurf.get();
}

void Macad::Occt::Adaptor3d_HSurfaceTool::UIntervals(Macad::Occt::Adaptor3d_Surface^ theSurf, Macad::Occt::TColStd_Array1OfReal^ theTab, Macad::Occt::GeomAbs_Shape theSh)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	::Adaptor3d_HSurfaceTool::UIntervals(h_theSurf, *(::TColStd_Array1OfReal*)theTab->NativeInstance, (::GeomAbs_Shape)theSh);
	theSurf->NativeInstance = h_theSurf.get();
}

void Macad::Occt::Adaptor3d_HSurfaceTool::VIntervals(Macad::Occt::Adaptor3d_Surface^ theSurf, Macad::Occt::TColStd_Array1OfReal^ theTab, Macad::Occt::GeomAbs_Shape theSh)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	::Adaptor3d_HSurfaceTool::VIntervals(h_theSurf, *(::TColStd_Array1OfReal*)theTab->NativeInstance, (::GeomAbs_Shape)theSh);
	theSurf->NativeInstance = h_theSurf.get();
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::Adaptor3d_HSurfaceTool::UTrim(Macad::Occt::Adaptor3d_Surface^ theSurf, double theFirst, double theLast, double theTol)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	Handle(::Adaptor3d_Surface) _result;
	_result = ::Adaptor3d_HSurfaceTool::UTrim(h_theSurf, theFirst, theLast, theTol);
	theSurf->NativeInstance = h_theSurf.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::Adaptor3d_HSurfaceTool::VTrim(Macad::Occt::Adaptor3d_Surface^ theSurf, double theFirst, double theLast, double theTol)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	Handle(::Adaptor3d_Surface) _result;
	_result = ::Adaptor3d_HSurfaceTool::VTrim(h_theSurf, theFirst, theLast, theTol);
	theSurf->NativeInstance = h_theSurf.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

bool Macad::Occt::Adaptor3d_HSurfaceTool::IsUClosed(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::IsUClosed(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
}

bool Macad::Occt::Adaptor3d_HSurfaceTool::IsVClosed(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::IsVClosed(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
}

bool Macad::Occt::Adaptor3d_HSurfaceTool::IsUPeriodic(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::IsUPeriodic(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
}

double Macad::Occt::Adaptor3d_HSurfaceTool::UPeriod(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::UPeriod(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
}

bool Macad::Occt::Adaptor3d_HSurfaceTool::IsVPeriodic(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::IsVPeriodic(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
}

double Macad::Occt::Adaptor3d_HSurfaceTool::VPeriod(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::VPeriod(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
}

Macad::Occt::Pnt Macad::Occt::Adaptor3d_HSurfaceTool::Value(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return Macad::Occt::Pnt(::Adaptor3d_HSurfaceTool::Value(h_theSurf, theU, theV));
	theSurf->NativeInstance = h_theSurf.get();
}

void Macad::Occt::Adaptor3d_HSurfaceTool::D0(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, Macad::Occt::Pnt% thePnt)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	::Adaptor3d_HSurfaceTool::D0(h_theSurf, theU, theV, *(gp_Pnt*)pp_thePnt);
	theSurf->NativeInstance = h_theSurf.get();
}

void Macad::Occt::Adaptor3d_HSurfaceTool::D1(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, Macad::Occt::Pnt% thePnt, Macad::Occt::Vec% theD1U, Macad::Occt::Vec% theD1V)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	pin_ptr<Macad::Occt::Vec> pp_theD1U = &theD1U;
	pin_ptr<Macad::Occt::Vec> pp_theD1V = &theD1V;
	::Adaptor3d_HSurfaceTool::D1(h_theSurf, theU, theV, *(gp_Pnt*)pp_thePnt, *(gp_Vec*)pp_theD1U, *(gp_Vec*)pp_theD1V);
	theSurf->NativeInstance = h_theSurf.get();
}

void Macad::Occt::Adaptor3d_HSurfaceTool::D2(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, Macad::Occt::Pnt% thePnt, Macad::Occt::Vec% theD1U, Macad::Occt::Vec% theD1V, Macad::Occt::Vec% theD2U, Macad::Occt::Vec% theD2V, Macad::Occt::Vec% theD2UV)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	pin_ptr<Macad::Occt::Vec> pp_theD1U = &theD1U;
	pin_ptr<Macad::Occt::Vec> pp_theD1V = &theD1V;
	pin_ptr<Macad::Occt::Vec> pp_theD2U = &theD2U;
	pin_ptr<Macad::Occt::Vec> pp_theD2V = &theD2V;
	pin_ptr<Macad::Occt::Vec> pp_theD2UV = &theD2UV;
	::Adaptor3d_HSurfaceTool::D2(h_theSurf, theU, theV, *(gp_Pnt*)pp_thePnt, *(gp_Vec*)pp_theD1U, *(gp_Vec*)pp_theD1V, *(gp_Vec*)pp_theD2U, *(gp_Vec*)pp_theD2V, *(gp_Vec*)pp_theD2UV);
	theSurf->NativeInstance = h_theSurf.get();
}

void Macad::Occt::Adaptor3d_HSurfaceTool::D3(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, Macad::Occt::Pnt% thePnt, Macad::Occt::Vec% theD1U, Macad::Occt::Vec% theD1V, Macad::Occt::Vec% theD2U, Macad::Occt::Vec% theD2V, Macad::Occt::Vec% theD2UV, Macad::Occt::Vec% theD3U, Macad::Occt::Vec% theD3V, Macad::Occt::Vec% theD3UUV, Macad::Occt::Vec% theD3UVV)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	pin_ptr<Macad::Occt::Vec> pp_theD1U = &theD1U;
	pin_ptr<Macad::Occt::Vec> pp_theD1V = &theD1V;
	pin_ptr<Macad::Occt::Vec> pp_theD2U = &theD2U;
	pin_ptr<Macad::Occt::Vec> pp_theD2V = &theD2V;
	pin_ptr<Macad::Occt::Vec> pp_theD2UV = &theD2UV;
	pin_ptr<Macad::Occt::Vec> pp_theD3U = &theD3U;
	pin_ptr<Macad::Occt::Vec> pp_theD3V = &theD3V;
	pin_ptr<Macad::Occt::Vec> pp_theD3UUV = &theD3UUV;
	pin_ptr<Macad::Occt::Vec> pp_theD3UVV = &theD3UVV;
	::Adaptor3d_HSurfaceTool::D3(h_theSurf, theU, theV, *(gp_Pnt*)pp_thePnt, *(gp_Vec*)pp_theD1U, *(gp_Vec*)pp_theD1V, *(gp_Vec*)pp_theD2U, *(gp_Vec*)pp_theD2V, *(gp_Vec*)pp_theD2UV, *(gp_Vec*)pp_theD3U, *(gp_Vec*)pp_theD3V, *(gp_Vec*)pp_theD3UUV, *(gp_Vec*)pp_theD3UVV);
	theSurf->NativeInstance = h_theSurf.get();
}

Macad::Occt::Vec Macad::Occt::Adaptor3d_HSurfaceTool::DN(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, int theNU, int theNV)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return Macad::Occt::Vec(::Adaptor3d_HSurfaceTool::DN(h_theSurf, theU, theV, theNU, theNV));
	theSurf->NativeInstance = h_theSurf.get();
}

double Macad::Occt::Adaptor3d_HSurfaceTool::UResolution(Macad::Occt::Adaptor3d_Surface^ theSurf, double theR3d)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::UResolution(h_theSurf, theR3d);
	theSurf->NativeInstance = h_theSurf.get();
}

double Macad::Occt::Adaptor3d_HSurfaceTool::VResolution(Macad::Occt::Adaptor3d_Surface^ theSurf, double theR3d)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::VResolution(h_theSurf, theR3d);
	theSurf->NativeInstance = h_theSurf.get();
}

Macad::Occt::GeomAbs_SurfaceType Macad::Occt::Adaptor3d_HSurfaceTool::GetGeomType(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return (Macad::Occt::GeomAbs_SurfaceType)::Adaptor3d_HSurfaceTool::GetType(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
}

Macad::Occt::Pln Macad::Occt::Adaptor3d_HSurfaceTool::Plane(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return Macad::Occt::Pln(::Adaptor3d_HSurfaceTool::Plane(h_theSurf));
	theSurf->NativeInstance = h_theSurf.get();
}

Macad::Occt::gp_Cylinder^ Macad::Occt::Adaptor3d_HSurfaceTool::Cylinder(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ::Adaptor3d_HSurfaceTool::Cylinder(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

Macad::Occt::gp_Cone^ Macad::Occt::Adaptor3d_HSurfaceTool::Cone(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ::Adaptor3d_HSurfaceTool::Cone(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

Macad::Occt::gp_Torus^ Macad::Occt::Adaptor3d_HSurfaceTool::Torus(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ::Adaptor3d_HSurfaceTool::Torus(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

Macad::Occt::gp_Sphere^ Macad::Occt::Adaptor3d_HSurfaceTool::Sphere(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ::Adaptor3d_HSurfaceTool::Sphere(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

Macad::Occt::Geom_BezierSurface^ Macad::Occt::Adaptor3d_HSurfaceTool::Bezier(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	Handle(::Geom_BezierSurface) _result;
	_result = ::Adaptor3d_HSurfaceTool::Bezier(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::Adaptor3d_HSurfaceTool::BSpline(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	Handle(::Geom_BSplineSurface) _result;
	_result = ::Adaptor3d_HSurfaceTool::BSpline(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Ax1 Macad::Occt::Adaptor3d_HSurfaceTool::AxeOfRevolution(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return Macad::Occt::Ax1(::Adaptor3d_HSurfaceTool::AxeOfRevolution(h_theSurf));
	theSurf->NativeInstance = h_theSurf.get();
}

Macad::Occt::Dir Macad::Occt::Adaptor3d_HSurfaceTool::Direction(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return Macad::Occt::Dir(::Adaptor3d_HSurfaceTool::Direction(h_theSurf));
	theSurf->NativeInstance = h_theSurf.get();
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::Adaptor3d_HSurfaceTool::BasisCurve(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	Handle(::Adaptor3d_Curve) _result;
	_result = ::Adaptor3d_HSurfaceTool::BasisCurve(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::Adaptor3d_HSurfaceTool::BasisSurface(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	Handle(::Adaptor3d_Surface) _result;
	_result = ::Adaptor3d_HSurfaceTool::BasisSurface(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

double Macad::Occt::Adaptor3d_HSurfaceTool::OffsetValue(Macad::Occt::Adaptor3d_Surface^ theSurf)
{
	Handle(::Adaptor3d_Surface) h_theSurf = theSurf->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::OffsetValue(h_theSurf);
	theSurf->NativeInstance = h_theSurf.get();
}

int Macad::Occt::Adaptor3d_HSurfaceTool::NbSamplesU(Macad::Occt::Adaptor3d_Surface^ S)
{
	Handle(::Adaptor3d_Surface) h_S = S->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::NbSamplesU(h_S);
	S->NativeInstance = h_S.get();
}

int Macad::Occt::Adaptor3d_HSurfaceTool::NbSamplesV(Macad::Occt::Adaptor3d_Surface^ S)
{
	Handle(::Adaptor3d_Surface) h_S = S->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::NbSamplesV(h_S);
	S->NativeInstance = h_S.get();
}

int Macad::Occt::Adaptor3d_HSurfaceTool::NbSamplesU(Macad::Occt::Adaptor3d_Surface^ S, double u1, double u2)
{
	Handle(::Adaptor3d_Surface) h_S = S->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::NbSamplesU(h_S, u1, u2);
	S->NativeInstance = h_S.get();
}

int Macad::Occt::Adaptor3d_HSurfaceTool::NbSamplesV(Macad::Occt::Adaptor3d_Surface^ parameter1, double v1, double v2)
{
	Handle(::Adaptor3d_Surface) h_parameter1 = parameter1->NativeInstance;
	return ::Adaptor3d_HSurfaceTool::NbSamplesV(h_parameter1, v1, v2);
	parameter1->NativeInstance = h_parameter1.get();
}




//---------------------------------------------------------------------
//  Class  Adaptor3d_HVertex
//---------------------------------------------------------------------

Macad::Occt::Adaptor3d_HVertex::Adaptor3d_HVertex()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor3d_HVertex();
}

Macad::Occt::Adaptor3d_HVertex::Adaptor3d_HVertex(Macad::Occt::Pnt2d P, Macad::Occt::TopAbs_Orientation Ori, double Resolution)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	NativeInstance = new ::Adaptor3d_HVertex(*(gp_Pnt2d*)pp_P, (::TopAbs_Orientation)Ori, Resolution);
}

Macad::Occt::Adaptor3d_HVertex::Adaptor3d_HVertex(Macad::Occt::Adaptor3d_HVertex^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor3d_HVertex(*(::Adaptor3d_HVertex*)parameter1->NativeInstance);
}

Macad::Occt::Pnt2d Macad::Occt::Adaptor3d_HVertex::Value()
{
	return Macad::Occt::Pnt2d(((::Adaptor3d_HVertex*)_NativeInstance)->Value());
}

double Macad::Occt::Adaptor3d_HVertex::Parameter(Macad::Occt::Adaptor2d_Curve2d^ C)
{
	Handle(::Adaptor2d_Curve2d) h_C = C->NativeInstance;
	return ((::Adaptor3d_HVertex*)_NativeInstance)->Parameter(h_C);
	C->NativeInstance = h_C.get();
}

double Macad::Occt::Adaptor3d_HVertex::Resolution(Macad::Occt::Adaptor2d_Curve2d^ C)
{
	Handle(::Adaptor2d_Curve2d) h_C = C->NativeInstance;
	return ((::Adaptor3d_HVertex*)_NativeInstance)->Resolution(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::TopAbs_Orientation Macad::Occt::Adaptor3d_HVertex::Orientation()
{
	return (Macad::Occt::TopAbs_Orientation)((::Adaptor3d_HVertex*)_NativeInstance)->Orientation();
}

bool Macad::Occt::Adaptor3d_HVertex::IsSame(Macad::Occt::Adaptor3d_HVertex^ Other)
{
	Handle(::Adaptor3d_HVertex) h_Other = Other->NativeInstance;
	return ((::Adaptor3d_HVertex*)_NativeInstance)->IsSame(h_Other);
	Other->NativeInstance = h_Other.get();
}


Macad::Occt::Adaptor3d_HVertex^ Macad::Occt::Adaptor3d_HVertex::CreateDowncasted(::Adaptor3d_HVertex* instance)
{
	return gcnew Macad::Occt::Adaptor3d_HVertex( instance );
}



//---------------------------------------------------------------------
//  Class  Adaptor3d_IsoCurve
//---------------------------------------------------------------------

Macad::Occt::Adaptor3d_IsoCurve::Adaptor3d_IsoCurve()
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor3d_IsoCurve();
}

Macad::Occt::Adaptor3d_IsoCurve::Adaptor3d_IsoCurve(Macad::Occt::Adaptor3d_Surface^ S)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::Adaptor3d_IsoCurve(h_S);
	S->NativeInstance = h_S.get();
}

Macad::Occt::Adaptor3d_IsoCurve::Adaptor3d_IsoCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::GeomAbs_IsoType Iso, double Param)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::Adaptor3d_IsoCurve(h_S, (::GeomAbs_IsoType)Iso, Param);
	S->NativeInstance = h_S.get();
}

Macad::Occt::Adaptor3d_IsoCurve::Adaptor3d_IsoCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::GeomAbs_IsoType Iso, double Param, double WFirst, double WLast)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::Adaptor3d_IsoCurve(h_S, (::GeomAbs_IsoType)Iso, Param, WFirst, WLast);
	S->NativeInstance = h_S.get();
}

Macad::Occt::Adaptor3d_IsoCurve::Adaptor3d_IsoCurve(Macad::Occt::Adaptor3d_IsoCurve^ parameter1)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor3d_IsoCurve(*(::Adaptor3d_IsoCurve*)parameter1->NativeInstance);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::Adaptor3d_IsoCurve::ShallowCopy()
{
	Handle(::Adaptor3d_Curve) _result;
	_result = ((::Adaptor3d_IsoCurve*)_NativeInstance)->ShallowCopy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::Adaptor3d_IsoCurve::Load(Macad::Occt::Adaptor3d_Surface^ S)
{
	Handle(::Adaptor3d_Surface) h_S = S->NativeInstance;
	((::Adaptor3d_IsoCurve*)_NativeInstance)->Load(h_S);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::Adaptor3d_IsoCurve::Load(Macad::Occt::GeomAbs_IsoType Iso, double Param)
{
	((::Adaptor3d_IsoCurve*)_NativeInstance)->Load((::GeomAbs_IsoType)Iso, Param);
}

void Macad::Occt::Adaptor3d_IsoCurve::Load(Macad::Occt::GeomAbs_IsoType Iso, double Param, double WFirst, double WLast)
{
	((::Adaptor3d_IsoCurve*)_NativeInstance)->Load((::GeomAbs_IsoType)Iso, Param, WFirst, WLast);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::Adaptor3d_IsoCurve::Surface()
{
	Handle(::Adaptor3d_Surface) _result;
	_result = ((::Adaptor3d_IsoCurve*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::GeomAbs_IsoType Macad::Occt::Adaptor3d_IsoCurve::Iso()
{
	return (Macad::Occt::GeomAbs_IsoType)((::Adaptor3d_IsoCurve*)_NativeInstance)->Iso();
}

double Macad::Occt::Adaptor3d_IsoCurve::Parameter()
{
	return ((::Adaptor3d_IsoCurve*)_NativeInstance)->Parameter();
}

double Macad::Occt::Adaptor3d_IsoCurve::FirstParameter()
{
	return ((::Adaptor3d_IsoCurve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Adaptor3d_IsoCurve::LastParameter()
{
	return ((::Adaptor3d_IsoCurve*)_NativeInstance)->LastParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Adaptor3d_IsoCurve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Adaptor3d_IsoCurve*)_NativeInstance)->Continuity();
}

int Macad::Occt::Adaptor3d_IsoCurve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::Adaptor3d_IsoCurve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::Adaptor3d_IsoCurve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::Adaptor3d_IsoCurve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::Adaptor3d_IsoCurve::Trim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_Curve) _result;
	_result = ((::Adaptor3d_IsoCurve*)_NativeInstance)->Trim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted( _result.get());
}

bool Macad::Occt::Adaptor3d_IsoCurve::IsClosed()
{
	return ((::Adaptor3d_IsoCurve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Adaptor3d_IsoCurve::IsPeriodic()
{
	return ((::Adaptor3d_IsoCurve*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::Adaptor3d_IsoCurve::Period()
{
	return ((::Adaptor3d_IsoCurve*)_NativeInstance)->Period();
}

Macad::Occt::Pnt Macad::Occt::Adaptor3d_IsoCurve::Value(double U)
{
	return Macad::Occt::Pnt(((::Adaptor3d_IsoCurve*)_NativeInstance)->Value(U));
}

void Macad::Occt::Adaptor3d_IsoCurve::D0(double U, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::Adaptor3d_IsoCurve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void Macad::Occt::Adaptor3d_IsoCurve::D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::Adaptor3d_IsoCurve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void Macad::Occt::Adaptor3d_IsoCurve::D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	((::Adaptor3d_IsoCurve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::Adaptor3d_IsoCurve::D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	((::Adaptor3d_IsoCurve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

Macad::Occt::Vec Macad::Occt::Adaptor3d_IsoCurve::DN(double U, int N)
{
	return Macad::Occt::Vec(((::Adaptor3d_IsoCurve*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::Adaptor3d_IsoCurve::Resolution(double R3d)
{
	return ((::Adaptor3d_IsoCurve*)_NativeInstance)->Resolution(R3d);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Adaptor3d_IsoCurve::GetGeomType()
{
	return (Macad::Occt::GeomAbs_CurveType)((::Adaptor3d_IsoCurve*)_NativeInstance)->GetType();
}

Macad::Occt::gp_Lin^ Macad::Occt::Adaptor3d_IsoCurve::Line()
{
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::Adaptor3d_IsoCurve*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::Adaptor3d_IsoCurve::Circle()
{
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::Adaptor3d_IsoCurve*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::Adaptor3d_IsoCurve::Ellipse()
{
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::Adaptor3d_IsoCurve*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::Adaptor3d_IsoCurve::Hyperbola()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::Adaptor3d_IsoCurve*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::Adaptor3d_IsoCurve::Parabola()
{
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::Adaptor3d_IsoCurve*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

int Macad::Occt::Adaptor3d_IsoCurve::Degree()
{
	return ((::Adaptor3d_IsoCurve*)_NativeInstance)->Degree();
}

bool Macad::Occt::Adaptor3d_IsoCurve::IsRational()
{
	return ((::Adaptor3d_IsoCurve*)_NativeInstance)->IsRational();
}

int Macad::Occt::Adaptor3d_IsoCurve::NbPoles()
{
	return ((::Adaptor3d_IsoCurve*)_NativeInstance)->NbPoles();
}

int Macad::Occt::Adaptor3d_IsoCurve::NbKnots()
{
	return ((::Adaptor3d_IsoCurve*)_NativeInstance)->NbKnots();
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::Adaptor3d_IsoCurve::Bezier()
{
	Handle(::Geom_BezierCurve) _result;
	_result = ((::Adaptor3d_IsoCurve*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::Adaptor3d_IsoCurve::BSpline()
{
	Handle(::Geom_BSplineCurve) _result;
	_result = ((::Adaptor3d_IsoCurve*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}


Macad::Occt::Adaptor3d_IsoCurve^ Macad::Occt::Adaptor3d_IsoCurve::CreateDowncasted(::Adaptor3d_IsoCurve* instance)
{
	return gcnew Macad::Occt::Adaptor3d_IsoCurve( instance );
}



//---------------------------------------------------------------------
//  Class  Adaptor3d_TopolTool
//---------------------------------------------------------------------

Macad::Occt::Adaptor3d_TopolTool::Adaptor3d_TopolTool()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor3d_TopolTool();
}

Macad::Occt::Adaptor3d_TopolTool::Adaptor3d_TopolTool(Macad::Occt::Adaptor3d_Surface^ Surface)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_Surface) h_Surface = Surface->NativeInstance;
	NativeInstance = new ::Adaptor3d_TopolTool(h_Surface);
	Surface->NativeInstance = h_Surface.get();
}

Macad::Occt::Adaptor3d_TopolTool::Adaptor3d_TopolTool(Macad::Occt::Adaptor3d_TopolTool^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor3d_TopolTool(*(::Adaptor3d_TopolTool*)parameter1->NativeInstance);
}

void Macad::Occt::Adaptor3d_TopolTool::Initialize()
{
	((::Adaptor3d_TopolTool*)_NativeInstance)->Initialize();
}

void Macad::Occt::Adaptor3d_TopolTool::Initialize(Macad::Occt::Adaptor3d_Surface^ S)
{
	Handle(::Adaptor3d_Surface) h_S = S->NativeInstance;
	((::Adaptor3d_TopolTool*)_NativeInstance)->Initialize(h_S);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::Adaptor3d_TopolTool::Initialize(Macad::Occt::Adaptor2d_Curve2d^ Curve)
{
	Handle(::Adaptor2d_Curve2d) h_Curve = Curve->NativeInstance;
	((::Adaptor3d_TopolTool*)_NativeInstance)->Initialize(h_Curve);
	Curve->NativeInstance = h_Curve.get();
}

void Macad::Occt::Adaptor3d_TopolTool::Init()
{
	((::Adaptor3d_TopolTool*)_NativeInstance)->Init();
}

bool Macad::Occt::Adaptor3d_TopolTool::More()
{
	return ((::Adaptor3d_TopolTool*)_NativeInstance)->More();
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor3d_TopolTool::Value()
{
	Handle(::Adaptor2d_Curve2d) _result;
	_result = ((::Adaptor3d_TopolTool*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted( _result.get());
}

void Macad::Occt::Adaptor3d_TopolTool::Next()
{
	((::Adaptor3d_TopolTool*)_NativeInstance)->Next();
}

void Macad::Occt::Adaptor3d_TopolTool::InitVertexIterator()
{
	((::Adaptor3d_TopolTool*)_NativeInstance)->InitVertexIterator();
}

bool Macad::Occt::Adaptor3d_TopolTool::MoreVertex()
{
	return ((::Adaptor3d_TopolTool*)_NativeInstance)->MoreVertex();
}

Macad::Occt::Adaptor3d_HVertex^ Macad::Occt::Adaptor3d_TopolTool::Vertex()
{
	Handle(::Adaptor3d_HVertex) _result;
	_result = ((::Adaptor3d_TopolTool*)_NativeInstance)->Vertex();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HVertex::CreateDowncasted( _result.get());
}

void Macad::Occt::Adaptor3d_TopolTool::NextVertex()
{
	((::Adaptor3d_TopolTool*)_NativeInstance)->NextVertex();
}

Macad::Occt::TopAbs_State Macad::Occt::Adaptor3d_TopolTool::Classify(Macad::Occt::Pnt2d P, double Tol, bool ReacdreOnPeriodic)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return (Macad::Occt::TopAbs_State)((::Adaptor3d_TopolTool*)_NativeInstance)->Classify(*(gp_Pnt2d*)pp_P, Tol, ReacdreOnPeriodic);
}

Macad::Occt::TopAbs_State Macad::Occt::Adaptor3d_TopolTool::Classify(Macad::Occt::Pnt2d P, double Tol)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return (Macad::Occt::TopAbs_State)((::Adaptor3d_TopolTool*)_NativeInstance)->Classify(*(gp_Pnt2d*)pp_P, Tol, true);
}

bool Macad::Occt::Adaptor3d_TopolTool::IsThePointOn(Macad::Occt::Pnt2d P, double Tol, bool ReacdreOnPeriodic)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ((::Adaptor3d_TopolTool*)_NativeInstance)->IsThePointOn(*(gp_Pnt2d*)pp_P, Tol, ReacdreOnPeriodic);
}

bool Macad::Occt::Adaptor3d_TopolTool::IsThePointOn(Macad::Occt::Pnt2d P, double Tol)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ((::Adaptor3d_TopolTool*)_NativeInstance)->IsThePointOn(*(gp_Pnt2d*)pp_P, Tol, true);
}

Macad::Occt::TopAbs_Orientation Macad::Occt::Adaptor3d_TopolTool::Orientation(Macad::Occt::Adaptor2d_Curve2d^ C)
{
	Handle(::Adaptor2d_Curve2d) h_C = C->NativeInstance;
	return (Macad::Occt::TopAbs_Orientation)((::Adaptor3d_TopolTool*)_NativeInstance)->Orientation(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::TopAbs_Orientation Macad::Occt::Adaptor3d_TopolTool::Orientation(Macad::Occt::Adaptor3d_HVertex^ V)
{
	Handle(::Adaptor3d_HVertex) h_V = V->NativeInstance;
	return (Macad::Occt::TopAbs_Orientation)((::Adaptor3d_TopolTool*)_NativeInstance)->Orientation(h_V);
	V->NativeInstance = h_V.get();
}

bool Macad::Occt::Adaptor3d_TopolTool::Identical(Macad::Occt::Adaptor3d_HVertex^ V1, Macad::Occt::Adaptor3d_HVertex^ V2)
{
	Handle(::Adaptor3d_HVertex) h_V1 = V1->NativeInstance;
	Handle(::Adaptor3d_HVertex) h_V2 = V2->NativeInstance;
	return ((::Adaptor3d_TopolTool*)_NativeInstance)->Identical(h_V1, h_V2);
	V1->NativeInstance = h_V1.get();
	V2->NativeInstance = h_V2.get();
}

bool Macad::Occt::Adaptor3d_TopolTool::Has3d()
{
	return ((::Adaptor3d_TopolTool*)_NativeInstance)->Has3d();
}

double Macad::Occt::Adaptor3d_TopolTool::Tol3d(Macad::Occt::Adaptor2d_Curve2d^ C)
{
	Handle(::Adaptor2d_Curve2d) h_C = C->NativeInstance;
	return ((::Adaptor3d_TopolTool*)_NativeInstance)->Tol3d(h_C);
	C->NativeInstance = h_C.get();
}

double Macad::Occt::Adaptor3d_TopolTool::Tol3d(Macad::Occt::Adaptor3d_HVertex^ V)
{
	Handle(::Adaptor3d_HVertex) h_V = V->NativeInstance;
	return ((::Adaptor3d_TopolTool*)_NativeInstance)->Tol3d(h_V);
	V->NativeInstance = h_V.get();
}

Macad::Occt::Pnt Macad::Occt::Adaptor3d_TopolTool::Pnt(Macad::Occt::Adaptor3d_HVertex^ V)
{
	Handle(::Adaptor3d_HVertex) h_V = V->NativeInstance;
	return Macad::Occt::Pnt(((::Adaptor3d_TopolTool*)_NativeInstance)->Pnt(h_V));
	V->NativeInstance = h_V.get();
}

void Macad::Occt::Adaptor3d_TopolTool::ComputeSamplePoints()
{
	((::Adaptor3d_TopolTool*)_NativeInstance)->ComputeSamplePoints();
}

int Macad::Occt::Adaptor3d_TopolTool::NbSamplesU()
{
	return ((::Adaptor3d_TopolTool*)_NativeInstance)->NbSamplesU();
}

int Macad::Occt::Adaptor3d_TopolTool::NbSamplesV()
{
	return ((::Adaptor3d_TopolTool*)_NativeInstance)->NbSamplesV();
}

int Macad::Occt::Adaptor3d_TopolTool::NbSamples()
{
	return ((::Adaptor3d_TopolTool*)_NativeInstance)->NbSamples();
}

void Macad::Occt::Adaptor3d_TopolTool::UParameters(Macad::Occt::TColStd_Array1OfReal^ theArray)
{
	((::Adaptor3d_TopolTool*)_NativeInstance)->UParameters(*(::TColStd_Array1OfReal*)theArray->NativeInstance);
}

void Macad::Occt::Adaptor3d_TopolTool::VParameters(Macad::Occt::TColStd_Array1OfReal^ theArray)
{
	((::Adaptor3d_TopolTool*)_NativeInstance)->VParameters(*(::TColStd_Array1OfReal*)theArray->NativeInstance);
}

void Macad::Occt::Adaptor3d_TopolTool::SamplePoint(int Index, Macad::Occt::Pnt2d% P2d, Macad::Occt::Pnt% P3d)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P2d = &P2d;
	pin_ptr<Macad::Occt::Pnt> pp_P3d = &P3d;
	((::Adaptor3d_TopolTool*)_NativeInstance)->SamplePoint(Index, *(gp_Pnt2d*)pp_P2d, *(gp_Pnt*)pp_P3d);
}

bool Macad::Occt::Adaptor3d_TopolTool::DomainIsInfinite()
{
	return ((::Adaptor3d_TopolTool*)_NativeInstance)->DomainIsInfinite();
}

System::IntPtr Macad::Occt::Adaptor3d_TopolTool::Edge()
{
	return System::IntPtr(((::Adaptor3d_TopolTool*)_NativeInstance)->Edge());
}

void Macad::Occt::Adaptor3d_TopolTool::SamplePnts(double theDefl, int theNUmin, int theNVmin)
{
	((::Adaptor3d_TopolTool*)_NativeInstance)->SamplePnts(theDefl, theNUmin, theNVmin);
}

void Macad::Occt::Adaptor3d_TopolTool::BSplSamplePnts(double theDefl, int theNUmin, int theNVmin)
{
	((::Adaptor3d_TopolTool*)_NativeInstance)->BSplSamplePnts(theDefl, theNUmin, theNVmin);
}

bool Macad::Occt::Adaptor3d_TopolTool::IsUniformSampling()
{
	return ((::Adaptor3d_TopolTool*)_NativeInstance)->IsUniformSampling();
}


Macad::Occt::Adaptor3d_TopolTool^ Macad::Occt::Adaptor3d_TopolTool::CreateDowncasted(::Adaptor3d_TopolTool* instance)
{
	return gcnew Macad::Occt::Adaptor3d_TopolTool( instance );
}


