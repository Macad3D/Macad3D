// Generated wrapper code for package GeomAdaptor

#include "OcctPCH.h"
#include "GeomAdaptor.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "Standard.h"
#include "GeomAdaptor.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "Adaptor3d.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  GeomAdaptor_Curve
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_Curve::GeomAdaptor_Curve()
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAdaptor_Curve();
}

Macad::Occt::GeomAdaptor_Curve::GeomAdaptor_Curve(Macad::Occt::Geom_Curve^ C)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	_NativeInstance = new ::GeomAdaptor_Curve(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::GeomAdaptor_Curve::GeomAdaptor_Curve(Macad::Occt::Geom_Curve^ C, double UFirst, double ULast)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	_NativeInstance = new ::GeomAdaptor_Curve(h_C, UFirst, ULast);
	C->NativeInstance = h_C.get();
}

Macad::Occt::GeomAdaptor_Curve::GeomAdaptor_Curve(Macad::Occt::GeomAdaptor_Curve^ parameter1)
	: Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAdaptor_Curve(*(::GeomAdaptor_Curve*)parameter1->NativeInstance);
}

void Macad::Occt::GeomAdaptor_Curve::Reset()
{
	((::GeomAdaptor_Curve*)_NativeInstance)->Reset();
}

void Macad::Occt::GeomAdaptor_Curve::Load(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::GeomAdaptor_Curve*)_NativeInstance)->Load(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::GeomAdaptor_Curve::Load(Macad::Occt::Geom_Curve^ C, double UFirst, double ULast)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::GeomAdaptor_Curve*)_NativeInstance)->Load(h_C, UFirst, ULast);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomAdaptor_Curve::Curve()
{
	Handle(::Geom_Curve) _result;
	_result = ((::GeomAdaptor_Curve*)_NativeInstance)->Curve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

double Macad::Occt::GeomAdaptor_Curve::FirstParameter()
{
	return ((::GeomAdaptor_Curve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::GeomAdaptor_Curve::LastParameter()
{
	return ((::GeomAdaptor_Curve*)_NativeInstance)->LastParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_Curve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::GeomAdaptor_Curve*)_NativeInstance)->Continuity();
}

int Macad::Occt::GeomAdaptor_Curve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::GeomAdaptor_Curve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::GeomAdaptor_Curve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::GeomAdaptor_Curve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_HCurve^ Macad::Occt::GeomAdaptor_Curve::Trim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_HCurve) _result;
	_result = ((::GeomAdaptor_Curve*)_NativeInstance)->Trim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HCurve::CreateDowncasted( _result.get());
}

bool Macad::Occt::GeomAdaptor_Curve::IsClosed()
{
	return ((::GeomAdaptor_Curve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::GeomAdaptor_Curve::IsPeriodic()
{
	return ((::GeomAdaptor_Curve*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::GeomAdaptor_Curve::Period()
{
	return ((::GeomAdaptor_Curve*)_NativeInstance)->Period();
}

Macad::Occt::Pnt Macad::Occt::GeomAdaptor_Curve::Value(double U)
{
	return Macad::Occt::Pnt(((::GeomAdaptor_Curve*)_NativeInstance)->Value(U));
}

void Macad::Occt::GeomAdaptor_Curve::D0(double U, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::GeomAdaptor_Curve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void Macad::Occt::GeomAdaptor_Curve::D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::GeomAdaptor_Curve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void Macad::Occt::GeomAdaptor_Curve::D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	((::GeomAdaptor_Curve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::GeomAdaptor_Curve::D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	((::GeomAdaptor_Curve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

Macad::Occt::Vec Macad::Occt::GeomAdaptor_Curve::DN(double U, int N)
{
	return Macad::Occt::Vec(((::GeomAdaptor_Curve*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::GeomAdaptor_Curve::Resolution(double R3d)
{
	return ((::GeomAdaptor_Curve*)_NativeInstance)->Resolution(R3d);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::GeomAdaptor_Curve::GetGeomType()
{
	return (Macad::Occt::GeomAbs_CurveType)((::GeomAdaptor_Curve*)_NativeInstance)->GetType();
}

Macad::Occt::gp_Lin^ Macad::Occt::GeomAdaptor_Curve::Line()
{
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::GeomAdaptor_Curve*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::GeomAdaptor_Curve::Circle()
{
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::GeomAdaptor_Curve*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::GeomAdaptor_Curve::Ellipse()
{
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::GeomAdaptor_Curve*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::GeomAdaptor_Curve::Hyperbola()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::GeomAdaptor_Curve*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::GeomAdaptor_Curve::Parabola()
{
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::GeomAdaptor_Curve*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

int Macad::Occt::GeomAdaptor_Curve::Degree()
{
	return ((::GeomAdaptor_Curve*)_NativeInstance)->Degree();
}

bool Macad::Occt::GeomAdaptor_Curve::IsRational()
{
	return ((::GeomAdaptor_Curve*)_NativeInstance)->IsRational();
}

int Macad::Occt::GeomAdaptor_Curve::NbPoles()
{
	return ((::GeomAdaptor_Curve*)_NativeInstance)->NbPoles();
}

int Macad::Occt::GeomAdaptor_Curve::NbKnots()
{
	return ((::GeomAdaptor_Curve*)_NativeInstance)->NbKnots();
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::GeomAdaptor_Curve::Bezier()
{
	Handle(::Geom_BezierCurve) _result;
	_result = ((::GeomAdaptor_Curve*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomAdaptor_Curve::BSpline()
{
	Handle(::Geom_BSplineCurve) _result;
	_result = ((::GeomAdaptor_Curve*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_OffsetCurve^ Macad::Occt::GeomAdaptor_Curve::OffsetCurve()
{
	Handle(::Geom_OffsetCurve) _result;
	_result = ((::GeomAdaptor_Curve*)_NativeInstance)->OffsetCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_OffsetCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GeomAdaptor_Surface
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_Surface::GeomAdaptor_Surface()
	: Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAdaptor_Surface();
}

Macad::Occt::GeomAdaptor_Surface::GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ S)
	: Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::GeomAdaptor_Surface(h_S);
	S->NativeInstance = h_S.get();
}

Macad::Occt::GeomAdaptor_Surface::GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double TolU, double TolV)
	: Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::GeomAdaptor_Surface(h_S, UFirst, ULast, VFirst, VLast, TolU, TolV);
	S->NativeInstance = h_S.get();
}

Macad::Occt::GeomAdaptor_Surface::GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double TolU)
	: Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::GeomAdaptor_Surface(h_S, UFirst, ULast, VFirst, VLast, TolU, 0.);
	S->NativeInstance = h_S.get();
}

Macad::Occt::GeomAdaptor_Surface::GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast)
	: Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::GeomAdaptor_Surface(h_S, UFirst, ULast, VFirst, VLast, 0., 0.);
	S->NativeInstance = h_S.get();
}

Macad::Occt::GeomAdaptor_Surface::GeomAdaptor_Surface(Macad::Occt::GeomAdaptor_Surface^ parameter1)
	: Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAdaptor_Surface(*(::GeomAdaptor_Surface*)parameter1->NativeInstance);
}

void Macad::Occt::GeomAdaptor_Surface::Load(Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::GeomAdaptor_Surface*)_NativeInstance)->Load(h_S);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::GeomAdaptor_Surface::Load(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double TolU, double TolV)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::GeomAdaptor_Surface*)_NativeInstance)->Load(h_S, UFirst, ULast, VFirst, VLast, TolU, TolV);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::GeomAdaptor_Surface::Load(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double TolU)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::GeomAdaptor_Surface*)_NativeInstance)->Load(h_S, UFirst, ULast, VFirst, VLast, TolU, 0.);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::GeomAdaptor_Surface::Load(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::GeomAdaptor_Surface*)_NativeInstance)->Load(h_S, UFirst, ULast, VFirst, VLast, 0., 0.);
	S->NativeInstance = h_S.get();
}

Macad::Occt::Geom_Surface^ Macad::Occt::GeomAdaptor_Surface::Surface()
{
	Handle(::Geom_Surface) _result;
	_result = ((::GeomAdaptor_Surface*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

double Macad::Occt::GeomAdaptor_Surface::FirstUParameter()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->FirstUParameter();
}

double Macad::Occt::GeomAdaptor_Surface::LastUParameter()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->LastUParameter();
}

double Macad::Occt::GeomAdaptor_Surface::FirstVParameter()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->FirstVParameter();
}

double Macad::Occt::GeomAdaptor_Surface::LastVParameter()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->LastVParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_Surface::UContinuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::GeomAdaptor_Surface*)_NativeInstance)->UContinuity();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_Surface::VContinuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::GeomAdaptor_Surface*)_NativeInstance)->VContinuity();
}

int Macad::Occt::GeomAdaptor_Surface::NbUIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->NbUIntervals((::GeomAbs_Shape)S);
}

int Macad::Occt::GeomAdaptor_Surface::NbVIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->NbVIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::GeomAdaptor_Surface::UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::GeomAdaptor_Surface*)_NativeInstance)->UIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

void Macad::Occt::GeomAdaptor_Surface::VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::GeomAdaptor_Surface*)_NativeInstance)->VIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_HSurface^ Macad::Occt::GeomAdaptor_Surface::UTrim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_HSurface) _result;
	_result = ((::GeomAdaptor_Surface*)_NativeInstance)->UTrim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_HSurface^ Macad::Occt::GeomAdaptor_Surface::VTrim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_HSurface) _result;
	_result = ((::GeomAdaptor_Surface*)_NativeInstance)->VTrim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HSurface::CreateDowncasted( _result.get());
}

bool Macad::Occt::GeomAdaptor_Surface::IsUClosed()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->IsUClosed();
}

bool Macad::Occt::GeomAdaptor_Surface::IsVClosed()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->IsVClosed();
}

bool Macad::Occt::GeomAdaptor_Surface::IsUPeriodic()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->IsUPeriodic();
}

double Macad::Occt::GeomAdaptor_Surface::UPeriod()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->UPeriod();
}

bool Macad::Occt::GeomAdaptor_Surface::IsVPeriodic()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->IsVPeriodic();
}

double Macad::Occt::GeomAdaptor_Surface::VPeriod()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->VPeriod();
}

Macad::Occt::Pnt Macad::Occt::GeomAdaptor_Surface::Value(double U, double V)
{
	return Macad::Occt::Pnt(((::GeomAdaptor_Surface*)_NativeInstance)->Value(U, V));
}

void Macad::Occt::GeomAdaptor_Surface::D0(double U, double V, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::GeomAdaptor_Surface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void Macad::Occt::GeomAdaptor_Surface::D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
	pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
	((::GeomAdaptor_Surface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void Macad::Occt::GeomAdaptor_Surface::D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
	pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
	pin_ptr<Macad::Occt::Vec> pp_D2U = &D2U;
	pin_ptr<Macad::Occt::Vec> pp_D2V = &D2V;
	pin_ptr<Macad::Occt::Vec> pp_D2UV = &D2UV;
	((::GeomAdaptor_Surface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void Macad::Occt::GeomAdaptor_Surface::D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV)
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
	((::GeomAdaptor_Surface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

Macad::Occt::Vec Macad::Occt::GeomAdaptor_Surface::DN(double U, double V, int Nu, int Nv)
{
	return Macad::Occt::Vec(((::GeomAdaptor_Surface*)_NativeInstance)->DN(U, V, Nu, Nv));
}

double Macad::Occt::GeomAdaptor_Surface::UResolution(double R3d)
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->UResolution(R3d);
}

double Macad::Occt::GeomAdaptor_Surface::VResolution(double R3d)
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->VResolution(R3d);
}

Macad::Occt::GeomAbs_SurfaceType Macad::Occt::GeomAdaptor_Surface::GetGeomType()
{
	return (Macad::Occt::GeomAbs_SurfaceType)((::GeomAdaptor_Surface*)_NativeInstance)->GetType();
}

Macad::Occt::Pln Macad::Occt::GeomAdaptor_Surface::Plane()
{
	return Macad::Occt::Pln(((::GeomAdaptor_Surface*)_NativeInstance)->Plane());
}

Macad::Occt::gp_Cylinder^ Macad::Occt::GeomAdaptor_Surface::Cylinder()
{
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::GeomAdaptor_Surface*)_NativeInstance)->Cylinder();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

Macad::Occt::gp_Cone^ Macad::Occt::GeomAdaptor_Surface::Cone()
{
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::GeomAdaptor_Surface*)_NativeInstance)->Cone();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

Macad::Occt::gp_Sphere^ Macad::Occt::GeomAdaptor_Surface::Sphere()
{
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::GeomAdaptor_Surface*)_NativeInstance)->Sphere();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

Macad::Occt::gp_Torus^ Macad::Occt::GeomAdaptor_Surface::Torus()
{
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::GeomAdaptor_Surface*)_NativeInstance)->Torus();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

int Macad::Occt::GeomAdaptor_Surface::UDegree()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->UDegree();
}

int Macad::Occt::GeomAdaptor_Surface::NbUPoles()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->NbUPoles();
}

int Macad::Occt::GeomAdaptor_Surface::VDegree()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->VDegree();
}

int Macad::Occt::GeomAdaptor_Surface::NbVPoles()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->NbVPoles();
}

int Macad::Occt::GeomAdaptor_Surface::NbUKnots()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->NbUKnots();
}

int Macad::Occt::GeomAdaptor_Surface::NbVKnots()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->NbVKnots();
}

bool Macad::Occt::GeomAdaptor_Surface::IsURational()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->IsURational();
}

bool Macad::Occt::GeomAdaptor_Surface::IsVRational()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->IsVRational();
}

Macad::Occt::Geom_BezierSurface^ Macad::Occt::GeomAdaptor_Surface::Bezier()
{
	Handle(::Geom_BezierSurface) _result;
	_result = ((::GeomAdaptor_Surface*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomAdaptor_Surface::BSpline()
{
	Handle(::Geom_BSplineSurface) _result;
	_result = ((::GeomAdaptor_Surface*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Ax1 Macad::Occt::GeomAdaptor_Surface::AxeOfRevolution()
{
	return Macad::Occt::Ax1(((::GeomAdaptor_Surface*)_NativeInstance)->AxeOfRevolution());
}

Macad::Occt::Dir Macad::Occt::GeomAdaptor_Surface::Direction()
{
	return Macad::Occt::Dir(((::GeomAdaptor_Surface*)_NativeInstance)->Direction());
}

Macad::Occt::Adaptor3d_HCurve^ Macad::Occt::GeomAdaptor_Surface::BasisCurve()
{
	Handle(::Adaptor3d_HCurve) _result;
	_result = ((::GeomAdaptor_Surface*)_NativeInstance)->BasisCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_HSurface^ Macad::Occt::GeomAdaptor_Surface::BasisSurface()
{
	Handle(::Adaptor3d_HSurface) _result;
	_result = ((::GeomAdaptor_Surface*)_NativeInstance)->BasisSurface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HSurface::CreateDowncasted( _result.get());
}

double Macad::Occt::GeomAdaptor_Surface::OffsetValue()
{
	return ((::GeomAdaptor_Surface*)_NativeInstance)->OffsetValue();
}




//---------------------------------------------------------------------
//  Class  GeomAdaptor_GHSurface
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_GHSurface::GeomAdaptor_GHSurface()
	: Macad::Occt::Adaptor3d_HSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_GHSurface();
}

Macad::Occt::GeomAdaptor_GHSurface::GeomAdaptor_GHSurface(Macad::Occt::GeomAdaptor_Surface^ S)
	: Macad::Occt::Adaptor3d_HSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_GHSurface(*(::GeomAdaptor_Surface*)S->NativeInstance);
}

Macad::Occt::GeomAdaptor_GHSurface::GeomAdaptor_GHSurface(Macad::Occt::GeomAdaptor_GHSurface^ parameter1)
	: Macad::Occt::Adaptor3d_HSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_GHSurface(*(::GeomAdaptor_GHSurface*)parameter1->NativeInstance);
}

void Macad::Occt::GeomAdaptor_GHSurface::Set(Macad::Occt::GeomAdaptor_Surface^ S)
{
	((::GeomAdaptor_GHSurface*)_NativeInstance)->Set(*(::GeomAdaptor_Surface*)S->NativeInstance);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::GeomAdaptor_GHSurface::Surface()
{
	::Adaptor3d_Surface* _result = new ::Adaptor3d_Surface();
	*_result =  (::Adaptor3d_Surface)((::GeomAdaptor_GHSurface*)_NativeInstance)->Surface();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor3d_Surface(_result);
}

Macad::Occt::GeomAdaptor_Surface^ Macad::Occt::GeomAdaptor_GHSurface::ChangeSurface()
{
	::GeomAdaptor_Surface* _result = new ::GeomAdaptor_Surface();
	*_result = ((::GeomAdaptor_GHSurface*)_NativeInstance)->ChangeSurface();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::GeomAdaptor_Surface(_result);
}


Macad::Occt::GeomAdaptor_GHSurface^ Macad::Occt::GeomAdaptor_GHSurface::CreateDowncasted(::GeomAdaptor_GHSurface* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::GeomAdaptor_HSurface)))
		return Macad::Occt::GeomAdaptor_HSurface::CreateDowncasted((::GeomAdaptor_HSurface*)instance);

	return gcnew Macad::Occt::GeomAdaptor_GHSurface( instance );
}



//---------------------------------------------------------------------
//  Class  GeomAdaptor_HSurface
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_HSurface::GeomAdaptor_HSurface()
	: Macad::Occt::GeomAdaptor_GHSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_HSurface();
}

Macad::Occt::GeomAdaptor_HSurface::GeomAdaptor_HSurface(Macad::Occt::GeomAdaptor_Surface^ AS)
	: Macad::Occt::GeomAdaptor_GHSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_HSurface(*(::GeomAdaptor_Surface*)AS->NativeInstance);
}

Macad::Occt::GeomAdaptor_HSurface::GeomAdaptor_HSurface(Macad::Occt::Geom_Surface^ S)
	: Macad::Occt::GeomAdaptor_GHSurface(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::GeomAdaptor_HSurface(h_S);
	S->NativeInstance = h_S.get();
}

Macad::Occt::GeomAdaptor_HSurface::GeomAdaptor_HSurface(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double TolU, double TolV)
	: Macad::Occt::GeomAdaptor_GHSurface(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::GeomAdaptor_HSurface(h_S, UFirst, ULast, VFirst, VLast, TolU, TolV);
	S->NativeInstance = h_S.get();
}

Macad::Occt::GeomAdaptor_HSurface::GeomAdaptor_HSurface(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double TolU)
	: Macad::Occt::GeomAdaptor_GHSurface(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::GeomAdaptor_HSurface(h_S, UFirst, ULast, VFirst, VLast, TolU, 0.);
	S->NativeInstance = h_S.get();
}

Macad::Occt::GeomAdaptor_HSurface::GeomAdaptor_HSurface(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast)
	: Macad::Occt::GeomAdaptor_GHSurface(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::GeomAdaptor_HSurface(h_S, UFirst, ULast, VFirst, VLast, 0., 0.);
	S->NativeInstance = h_S.get();
}

Macad::Occt::GeomAdaptor_HSurface::GeomAdaptor_HSurface(Macad::Occt::GeomAdaptor_HSurface^ parameter1)
	: Macad::Occt::GeomAdaptor_GHSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_HSurface(*(::GeomAdaptor_HSurface*)parameter1->NativeInstance);
}


Macad::Occt::GeomAdaptor_HSurface^ Macad::Occt::GeomAdaptor_HSurface::CreateDowncasted(::GeomAdaptor_HSurface* instance)
{
	return gcnew Macad::Occt::GeomAdaptor_HSurface( instance );
}



//---------------------------------------------------------------------
//  Class  GeomAdaptor_GHCurve
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_GHCurve::GeomAdaptor_GHCurve()
	: Macad::Occt::Adaptor3d_HCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_GHCurve();
}

Macad::Occt::GeomAdaptor_GHCurve::GeomAdaptor_GHCurve(Macad::Occt::GeomAdaptor_Curve^ C)
	: Macad::Occt::Adaptor3d_HCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_GHCurve(*(::GeomAdaptor_Curve*)C->NativeInstance);
}

Macad::Occt::GeomAdaptor_GHCurve::GeomAdaptor_GHCurve(Macad::Occt::GeomAdaptor_GHCurve^ parameter1)
	: Macad::Occt::Adaptor3d_HCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_GHCurve(*(::GeomAdaptor_GHCurve*)parameter1->NativeInstance);
}

void Macad::Occt::GeomAdaptor_GHCurve::Set(Macad::Occt::GeomAdaptor_Curve^ C)
{
	((::GeomAdaptor_GHCurve*)_NativeInstance)->Set(*(::GeomAdaptor_Curve*)C->NativeInstance);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::GeomAdaptor_GHCurve::Curve()
{
	::Adaptor3d_Curve* _result = new ::Adaptor3d_Curve();
	*_result =  (::Adaptor3d_Curve)((::GeomAdaptor_GHCurve*)_NativeInstance)->Curve();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor3d_Curve(_result);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::GeomAdaptor_GHCurve::GetCurve()
{
	::Adaptor3d_Curve* _result = new ::Adaptor3d_Curve();
	*_result = ((::GeomAdaptor_GHCurve*)_NativeInstance)->GetCurve();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor3d_Curve(_result);
}

Macad::Occt::GeomAdaptor_Curve^ Macad::Occt::GeomAdaptor_GHCurve::ChangeCurve()
{
	::GeomAdaptor_Curve* _result = new ::GeomAdaptor_Curve();
	*_result = ((::GeomAdaptor_GHCurve*)_NativeInstance)->ChangeCurve();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::GeomAdaptor_Curve(_result);
}


Macad::Occt::GeomAdaptor_GHCurve^ Macad::Occt::GeomAdaptor_GHCurve::CreateDowncasted(::GeomAdaptor_GHCurve* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::GeomAdaptor_HCurve)))
		return Macad::Occt::GeomAdaptor_HCurve::CreateDowncasted((::GeomAdaptor_HCurve*)instance);

	return gcnew Macad::Occt::GeomAdaptor_GHCurve( instance );
}



//---------------------------------------------------------------------
//  Class  GeomAdaptor_HCurve
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_HCurve::GeomAdaptor_HCurve()
	: Macad::Occt::GeomAdaptor_GHCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_HCurve();
}

Macad::Occt::GeomAdaptor_HCurve::GeomAdaptor_HCurve(Macad::Occt::GeomAdaptor_Curve^ AS)
	: Macad::Occt::GeomAdaptor_GHCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_HCurve(*(::GeomAdaptor_Curve*)AS->NativeInstance);
}

Macad::Occt::GeomAdaptor_HCurve::GeomAdaptor_HCurve(Macad::Occt::Geom_Curve^ S)
	: Macad::Occt::GeomAdaptor_GHCurve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_S = S->NativeInstance;
	NativeInstance = new ::GeomAdaptor_HCurve(h_S);
	S->NativeInstance = h_S.get();
}

Macad::Occt::GeomAdaptor_HCurve::GeomAdaptor_HCurve(Macad::Occt::Geom_Curve^ S, double UFirst, double ULast)
	: Macad::Occt::GeomAdaptor_GHCurve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_S = S->NativeInstance;
	NativeInstance = new ::GeomAdaptor_HCurve(h_S, UFirst, ULast);
	S->NativeInstance = h_S.get();
}

Macad::Occt::GeomAdaptor_HCurve::GeomAdaptor_HCurve(Macad::Occt::GeomAdaptor_HCurve^ parameter1)
	: Macad::Occt::GeomAdaptor_GHCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_HCurve(*(::GeomAdaptor_HCurve*)parameter1->NativeInstance);
}


Macad::Occt::GeomAdaptor_HCurve^ Macad::Occt::GeomAdaptor_HCurve::CreateDowncasted(::GeomAdaptor_HCurve* instance)
{
	return gcnew Macad::Occt::GeomAdaptor_HCurve( instance );
}



//---------------------------------------------------------------------
//  Class  GeomAdaptor
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor::GeomAdaptor()
	: BaseClass<::GeomAdaptor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAdaptor();
}

Macad::Occt::GeomAdaptor::GeomAdaptor(Macad::Occt::GeomAdaptor^ parameter1)
	: BaseClass<::GeomAdaptor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAdaptor(*(::GeomAdaptor*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomAdaptor::MakeCurve(Macad::Occt::Adaptor3d_Curve^ C)
{
	Handle(::Geom_Curve) _result;
	_result = ::GeomAdaptor::MakeCurve(*(::Adaptor3d_Curve*)C->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::GeomAdaptor::MakeSurface(Macad::Occt::Adaptor3d_Surface^ theS, bool theTrimFlag)
{
	Handle(::Geom_Surface) _result;
	_result = ::GeomAdaptor::MakeSurface(*(::Adaptor3d_Surface*)theS->NativeInstance, theTrimFlag);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::GeomAdaptor::MakeSurface(Macad::Occt::Adaptor3d_Surface^ theS)
{
	Handle(::Geom_Surface) _result;
	_result = ::GeomAdaptor::MakeSurface(*(::Adaptor3d_Surface*)theS->NativeInstance, true);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GeomAdaptor_SurfaceOfLinearExtrusion
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::GeomAdaptor_SurfaceOfLinearExtrusion()
	: Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAdaptor_SurfaceOfLinearExtrusion();
}

Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::Adaptor3d_HCurve^ C)
	: Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	_NativeInstance = new ::GeomAdaptor_SurfaceOfLinearExtrusion(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::Adaptor3d_HCurve^ C, Macad::Occt::Dir V)
	: Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	pin_ptr<Macad::Occt::Dir> pp_V = &V;
	_NativeInstance = new ::GeomAdaptor_SurfaceOfLinearExtrusion(h_C, *(gp_Dir*)pp_V);
	C->NativeInstance = h_C.get();
}

Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ parameter1)
	: Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAdaptor_SurfaceOfLinearExtrusion(*(::GeomAdaptor_SurfaceOfLinearExtrusion*)parameter1->NativeInstance);
}

void Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Load(Macad::Occt::Adaptor3d_HCurve^ C)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Load(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Load(Macad::Occt::Dir V)
{
	pin_ptr<Macad::Occt::Dir> pp_V = &V;
	((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Load(*(gp_Dir*)pp_V);
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::FirstUParameter()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->FirstUParameter();
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::LastUParameter()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->LastUParameter();
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::FirstVParameter()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->FirstVParameter();
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::LastVParameter()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->LastVParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::UContinuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UContinuity();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::VContinuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VContinuity();
}

int Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::NbUIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->NbUIntervals((::GeomAbs_Shape)S);
}

int Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::NbVIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->NbVIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

void Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_HSurface^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::UTrim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_HSurface) _result;
	_result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UTrim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_HSurface^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::VTrim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_HSurface) _result;
	_result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VTrim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HSurface::CreateDowncasted( _result.get());
}

bool Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::IsUClosed()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsUClosed();
}

bool Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::IsVClosed()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsVClosed();
}

bool Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::IsUPeriodic()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsUPeriodic();
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::UPeriod()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UPeriod();
}

bool Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::IsVPeriodic()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsVPeriodic();
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::VPeriod()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VPeriod();
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::UResolution(double R3d)
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UResolution(R3d);
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::VResolution(double R3d)
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VResolution(R3d);
}

Macad::Occt::GeomAbs_SurfaceType Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::GetGeomType()
{
	return (Macad::Occt::GeomAbs_SurfaceType)((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->GetType();
}

Macad::Occt::Pln Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Plane()
{
	return Macad::Occt::Pln(((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Plane());
}

Macad::Occt::gp_Cylinder^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Cylinder()
{
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Cylinder();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

Macad::Occt::gp_Cone^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Cone()
{
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Cone();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

Macad::Occt::gp_Sphere^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Sphere()
{
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Sphere();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

Macad::Occt::gp_Torus^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Torus()
{
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Torus();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

int Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::UDegree()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UDegree();
}

int Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::NbUPoles()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->NbUPoles();
}

bool Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::IsURational()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsURational();
}

bool Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::IsVRational()
{
	return ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsVRational();
}

Macad::Occt::Geom_BezierSurface^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Bezier()
{
	Handle(::Geom_BezierSurface) _result;
	_result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::BSpline()
{
	Handle(::Geom_BSplineSurface) _result;
	_result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Ax1 Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::AxeOfRevolution()
{
	return Macad::Occt::Ax1(((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->AxeOfRevolution());
}

Macad::Occt::Dir Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Direction()
{
	return Macad::Occt::Dir(((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Direction());
}

Macad::Occt::Adaptor3d_HCurve^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::BasisCurve()
{
	Handle(::Adaptor3d_HCurve) _result;
	_result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->BasisCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GeomAdaptor_HSurfaceOfLinearExtrusion
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_HSurfaceOfLinearExtrusion::GeomAdaptor_HSurfaceOfLinearExtrusion()
	: Macad::Occt::Adaptor3d_HSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_HSurfaceOfLinearExtrusion();
}

Macad::Occt::GeomAdaptor_HSurfaceOfLinearExtrusion::GeomAdaptor_HSurfaceOfLinearExtrusion(Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ S)
	: Macad::Occt::Adaptor3d_HSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_HSurfaceOfLinearExtrusion(*(::GeomAdaptor_SurfaceOfLinearExtrusion*)S->NativeInstance);
}

Macad::Occt::GeomAdaptor_HSurfaceOfLinearExtrusion::GeomAdaptor_HSurfaceOfLinearExtrusion(Macad::Occt::GeomAdaptor_HSurfaceOfLinearExtrusion^ parameter1)
	: Macad::Occt::Adaptor3d_HSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_HSurfaceOfLinearExtrusion(*(::GeomAdaptor_HSurfaceOfLinearExtrusion*)parameter1->NativeInstance);
}

void Macad::Occt::GeomAdaptor_HSurfaceOfLinearExtrusion::Set(Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ S)
{
	((::GeomAdaptor_HSurfaceOfLinearExtrusion*)_NativeInstance)->Set(*(::GeomAdaptor_SurfaceOfLinearExtrusion*)S->NativeInstance);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::GeomAdaptor_HSurfaceOfLinearExtrusion::Surface()
{
	::Adaptor3d_Surface* _result = new ::Adaptor3d_Surface();
	*_result =  (::Adaptor3d_Surface)((::GeomAdaptor_HSurfaceOfLinearExtrusion*)_NativeInstance)->Surface();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor3d_Surface(_result);
}

Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ Macad::Occt::GeomAdaptor_HSurfaceOfLinearExtrusion::ChangeSurface()
{
	::GeomAdaptor_SurfaceOfLinearExtrusion* _result = new ::GeomAdaptor_SurfaceOfLinearExtrusion();
	*_result = ((::GeomAdaptor_HSurfaceOfLinearExtrusion*)_NativeInstance)->ChangeSurface();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion(_result);
}


Macad::Occt::GeomAdaptor_HSurfaceOfLinearExtrusion^ Macad::Occt::GeomAdaptor_HSurfaceOfLinearExtrusion::CreateDowncasted(::GeomAdaptor_HSurfaceOfLinearExtrusion* instance)
{
	return gcnew Macad::Occt::GeomAdaptor_HSurfaceOfLinearExtrusion( instance );
}



//---------------------------------------------------------------------
//  Class  GeomAdaptor_SurfaceOfRevolution
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_SurfaceOfRevolution::GeomAdaptor_SurfaceOfRevolution()
	: Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAdaptor_SurfaceOfRevolution();
}

Macad::Occt::GeomAdaptor_SurfaceOfRevolution::GeomAdaptor_SurfaceOfRevolution(Macad::Occt::Adaptor3d_HCurve^ C)
	: Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	_NativeInstance = new ::GeomAdaptor_SurfaceOfRevolution(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::GeomAdaptor_SurfaceOfRevolution::GeomAdaptor_SurfaceOfRevolution(Macad::Occt::Adaptor3d_HCurve^ C, Macad::Occt::Ax1 V)
	: Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	pin_ptr<Macad::Occt::Ax1> pp_V = &V;
	_NativeInstance = new ::GeomAdaptor_SurfaceOfRevolution(h_C, *(gp_Ax1*)pp_V);
	C->NativeInstance = h_C.get();
}

Macad::Occt::GeomAdaptor_SurfaceOfRevolution::GeomAdaptor_SurfaceOfRevolution(Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ parameter1)
	: Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAdaptor_SurfaceOfRevolution(*(::GeomAdaptor_SurfaceOfRevolution*)parameter1->NativeInstance);
}

void Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Load(Macad::Occt::Adaptor3d_HCurve^ C)
{
	Handle(::Adaptor3d_HCurve) h_C = C->NativeInstance;
	((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Load(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Load(Macad::Occt::Ax1 V)
{
	pin_ptr<Macad::Occt::Ax1> pp_V = &V;
	((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Load(*(gp_Ax1*)pp_V);
}

Macad::Occt::Ax1 Macad::Occt::GeomAdaptor_SurfaceOfRevolution::AxeOfRevolution()
{
	return Macad::Occt::Ax1(((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->AxeOfRevolution());
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::FirstUParameter()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->FirstUParameter();
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::LastUParameter()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->LastUParameter();
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::FirstVParameter()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->FirstVParameter();
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::LastVParameter()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->LastVParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_SurfaceOfRevolution::UContinuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UContinuity();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_SurfaceOfRevolution::VContinuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VContinuity();
}

int Macad::Occt::GeomAdaptor_SurfaceOfRevolution::NbUIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->NbUIntervals((::GeomAbs_Shape)S);
}

int Macad::Occt::GeomAdaptor_SurfaceOfRevolution::NbVIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->NbVIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::GeomAdaptor_SurfaceOfRevolution::UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

void Macad::Occt::GeomAdaptor_SurfaceOfRevolution::VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_HSurface^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::UTrim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_HSurface) _result;
	_result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UTrim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Adaptor3d_HSurface^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::VTrim(double First, double Last, double Tol)
{
	Handle(::Adaptor3d_HSurface) _result;
	_result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VTrim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HSurface::CreateDowncasted( _result.get());
}

bool Macad::Occt::GeomAdaptor_SurfaceOfRevolution::IsUClosed()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsUClosed();
}

bool Macad::Occt::GeomAdaptor_SurfaceOfRevolution::IsVClosed()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsVClosed();
}

bool Macad::Occt::GeomAdaptor_SurfaceOfRevolution::IsUPeriodic()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsUPeriodic();
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::UPeriod()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UPeriod();
}

bool Macad::Occt::GeomAdaptor_SurfaceOfRevolution::IsVPeriodic()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsVPeriodic();
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::VPeriod()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VPeriod();
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::UResolution(double R3d)
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UResolution(R3d);
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::VResolution(double R3d)
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VResolution(R3d);
}

Macad::Occt::GeomAbs_SurfaceType Macad::Occt::GeomAdaptor_SurfaceOfRevolution::GetGeomType()
{
	return (Macad::Occt::GeomAbs_SurfaceType)((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->GetType();
}

Macad::Occt::Pln Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Plane()
{
	return Macad::Occt::Pln(((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Plane());
}

Macad::Occt::gp_Cylinder^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Cylinder()
{
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Cylinder();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

Macad::Occt::gp_Cone^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Cone()
{
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Cone();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

Macad::Occt::gp_Sphere^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Sphere()
{
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Sphere();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

Macad::Occt::gp_Torus^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Torus()
{
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Torus();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

int Macad::Occt::GeomAdaptor_SurfaceOfRevolution::VDegree()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VDegree();
}

int Macad::Occt::GeomAdaptor_SurfaceOfRevolution::NbVPoles()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->NbVPoles();
}

int Macad::Occt::GeomAdaptor_SurfaceOfRevolution::NbVKnots()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->NbVKnots();
}

bool Macad::Occt::GeomAdaptor_SurfaceOfRevolution::IsURational()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsURational();
}

bool Macad::Occt::GeomAdaptor_SurfaceOfRevolution::IsVRational()
{
	return ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsVRational();
}

Macad::Occt::Geom_BezierSurface^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Bezier()
{
	Handle(::Geom_BezierSurface) _result;
	_result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::BSpline()
{
	Handle(::Geom_BSplineSurface) _result;
	_result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Ax3 Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Axis()
{
	return Macad::Occt::Ax3(((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Axis());
}

Macad::Occt::Adaptor3d_HCurve^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::BasisCurve()
{
	Handle(::Adaptor3d_HCurve) _result;
	_result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->BasisCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_HCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GeomAdaptor_HSurfaceOfRevolution
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_HSurfaceOfRevolution::GeomAdaptor_HSurfaceOfRevolution()
	: Macad::Occt::Adaptor3d_HSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_HSurfaceOfRevolution();
}

Macad::Occt::GeomAdaptor_HSurfaceOfRevolution::GeomAdaptor_HSurfaceOfRevolution(Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ S)
	: Macad::Occt::Adaptor3d_HSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_HSurfaceOfRevolution(*(::GeomAdaptor_SurfaceOfRevolution*)S->NativeInstance);
}

Macad::Occt::GeomAdaptor_HSurfaceOfRevolution::GeomAdaptor_HSurfaceOfRevolution(Macad::Occt::GeomAdaptor_HSurfaceOfRevolution^ parameter1)
	: Macad::Occt::Adaptor3d_HSurface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::GeomAdaptor_HSurfaceOfRevolution(*(::GeomAdaptor_HSurfaceOfRevolution*)parameter1->NativeInstance);
}

void Macad::Occt::GeomAdaptor_HSurfaceOfRevolution::Set(Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ S)
{
	((::GeomAdaptor_HSurfaceOfRevolution*)_NativeInstance)->Set(*(::GeomAdaptor_SurfaceOfRevolution*)S->NativeInstance);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::GeomAdaptor_HSurfaceOfRevolution::Surface()
{
	::Adaptor3d_Surface* _result = new ::Adaptor3d_Surface();
	*_result =  (::Adaptor3d_Surface)((::GeomAdaptor_HSurfaceOfRevolution*)_NativeInstance)->Surface();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor3d_Surface(_result);
}

Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ Macad::Occt::GeomAdaptor_HSurfaceOfRevolution::ChangeSurface()
{
	::GeomAdaptor_SurfaceOfRevolution* _result = new ::GeomAdaptor_SurfaceOfRevolution();
	*_result = ((::GeomAdaptor_HSurfaceOfRevolution*)_NativeInstance)->ChangeSurface();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::GeomAdaptor_SurfaceOfRevolution(_result);
}


Macad::Occt::GeomAdaptor_HSurfaceOfRevolution^ Macad::Occt::GeomAdaptor_HSurfaceOfRevolution::CreateDowncasted(::GeomAdaptor_HSurfaceOfRevolution* instance)
{
	return gcnew Macad::Occt::GeomAdaptor_HSurfaceOfRevolution( instance );
}


