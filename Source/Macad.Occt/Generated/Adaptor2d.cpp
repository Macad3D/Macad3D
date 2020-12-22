// Generated wrapper code for package Adaptor2d

#include "OcctPCH.h"
#include "Adaptor2d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Adaptor2d.h"
#include "Geom2dAdaptor.h"
#include "ProjLib.h"
#include "BRepAdaptor.h"
#include "Standard.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "gp.h"
#include "Geom2d.h"


//---------------------------------------------------------------------
//  Class  Adaptor2d_HCurve2d
//---------------------------------------------------------------------

Macad::Occt::Adaptor2d_HCurve2d::Adaptor2d_HCurve2d(Macad::Occt::Adaptor2d_HCurve2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Adaptor2d_HCurve2d::Adaptor2d_HCurve2d()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor2d_HCurve2d::Curve2d()
{
	::Adaptor2d_Curve2d* _result = new ::Adaptor2d_Curve2d();
	*_result =  (::Adaptor2d_Curve2d)((::Adaptor2d_HCurve2d*)_NativeInstance)->Curve2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor2d_Curve2d(_result);
}

double Macad::Occt::Adaptor2d_HCurve2d::FirstParameter()
{
	return ((::Adaptor2d_HCurve2d*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Adaptor2d_HCurve2d::LastParameter()
{
	return ((::Adaptor2d_HCurve2d*)_NativeInstance)->LastParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Adaptor2d_HCurve2d::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Adaptor2d_HCurve2d*)_NativeInstance)->Continuity();
}

int Macad::Occt::Adaptor2d_HCurve2d::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::Adaptor2d_HCurve2d*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::Adaptor2d_HCurve2d::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::Adaptor2d_HCurve2d*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor2d_HCurve2d^ Macad::Occt::Adaptor2d_HCurve2d::Trim(double First, double Last, double Tol)
{
	Handle(::Adaptor2d_HCurve2d) _result;
	_result = ((::Adaptor2d_HCurve2d*)_NativeInstance)->Trim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_HCurve2d::CreateDowncasted( _result.get());
}

bool Macad::Occt::Adaptor2d_HCurve2d::IsClosed()
{
	return ((::Adaptor2d_HCurve2d*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Adaptor2d_HCurve2d::IsPeriodic()
{
	return ((::Adaptor2d_HCurve2d*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::Adaptor2d_HCurve2d::Period()
{
	return ((::Adaptor2d_HCurve2d*)_NativeInstance)->Period();
}

Macad::Occt::Pnt2d Macad::Occt::Adaptor2d_HCurve2d::Value(double U)
{
	return Macad::Occt::Pnt2d(((::Adaptor2d_HCurve2d*)_NativeInstance)->Value(U));
}

void Macad::Occt::Adaptor2d_HCurve2d::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Adaptor2d_HCurve2d*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Adaptor2d_HCurve2d::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::Adaptor2d_HCurve2d*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V);
}

void Macad::Occt::Adaptor2d_HCurve2d::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Adaptor2d_HCurve2d*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Adaptor2d_HCurve2d::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Adaptor2d_HCurve2d*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Adaptor2d_HCurve2d::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Adaptor2d_HCurve2d*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::Adaptor2d_HCurve2d::Resolution(double R3d)
{
	return ((::Adaptor2d_HCurve2d*)_NativeInstance)->Resolution(R3d);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Adaptor2d_HCurve2d::GetTypeOcc()
{
	return (Macad::Occt::GeomAbs_CurveType)((::Adaptor2d_HCurve2d*)_NativeInstance)->GetType();
}

Macad::Occt::gp_Lin2d^ Macad::Occt::Adaptor2d_HCurve2d::Line()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::Adaptor2d_HCurve2d*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::Adaptor2d_HCurve2d::Circle()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::Adaptor2d_HCurve2d*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::Adaptor2d_HCurve2d::Ellipse()
{
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::Adaptor2d_HCurve2d*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::Adaptor2d_HCurve2d::Hyperbola()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::Adaptor2d_HCurve2d*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::Adaptor2d_HCurve2d::Parabola()
{
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::Adaptor2d_HCurve2d*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

int Macad::Occt::Adaptor2d_HCurve2d::Degree()
{
	return ((::Adaptor2d_HCurve2d*)_NativeInstance)->Degree();
}

bool Macad::Occt::Adaptor2d_HCurve2d::IsRational()
{
	return ((::Adaptor2d_HCurve2d*)_NativeInstance)->IsRational();
}

int Macad::Occt::Adaptor2d_HCurve2d::NbPoles()
{
	return ((::Adaptor2d_HCurve2d*)_NativeInstance)->NbPoles();
}

int Macad::Occt::Adaptor2d_HCurve2d::NbKnots()
{
	return ((::Adaptor2d_HCurve2d*)_NativeInstance)->NbKnots();
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Adaptor2d_HCurve2d::Bezier()
{
	Handle(::Geom2d_BezierCurve) _result;
	_result = ((::Adaptor2d_HCurve2d*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Adaptor2d_HCurve2d::BSpline()
{
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::Adaptor2d_HCurve2d*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}


Macad::Occt::Adaptor2d_HCurve2d^ Macad::Occt::Adaptor2d_HCurve2d::CreateDowncasted(::Adaptor2d_HCurve2d* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Adaptor2d_HLine2d)))
		return Macad::Occt::Adaptor2d_HLine2d::CreateDowncasted((::Adaptor2d_HLine2d*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Adaptor2d_HOffsetCurve)))
		return Macad::Occt::Adaptor2d_HOffsetCurve::CreateDowncasted((::Adaptor2d_HOffsetCurve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Geom2dAdaptor_GHCurve)))
		return Macad::Occt::Geom2dAdaptor_GHCurve::CreateDowncasted((::Geom2dAdaptor_GHCurve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ProjLib_HProjectedCurve)))
		return Macad::Occt::ProjLib_HProjectedCurve::CreateDowncasted((::ProjLib_HProjectedCurve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ProjLib_HCompProjectedCurve)))
		return Macad::Occt::ProjLib_HCompProjectedCurve::CreateDowncasted((::ProjLib_HCompProjectedCurve*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepAdaptor_HCurve2d)))
		return Macad::Occt::BRepAdaptor_HCurve2d::CreateDowncasted((::BRepAdaptor_HCurve2d*)instance);

	return gcnew Macad::Occt::Adaptor2d_HCurve2d( instance );
}



//---------------------------------------------------------------------
//  Class  Adaptor2d_Curve2d
//---------------------------------------------------------------------

Macad::Occt::Adaptor2d_Curve2d::Adaptor2d_Curve2d(Macad::Occt::Adaptor2d_Curve2d^ parameter1)
	: BaseClass<::Adaptor2d_Curve2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Adaptor2d_Curve2d(*(::Adaptor2d_Curve2d*)parameter1->NativeInstance);
}

Macad::Occt::Adaptor2d_Curve2d::Adaptor2d_Curve2d()
	: BaseClass<::Adaptor2d_Curve2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Adaptor2d_Curve2d();
}

double Macad::Occt::Adaptor2d_Curve2d::FirstParameter()
{
	return ((::Adaptor2d_Curve2d*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Adaptor2d_Curve2d::LastParameter()
{
	return ((::Adaptor2d_Curve2d*)_NativeInstance)->LastParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Adaptor2d_Curve2d::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Adaptor2d_Curve2d*)_NativeInstance)->Continuity();
}

int Macad::Occt::Adaptor2d_Curve2d::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::Adaptor2d_Curve2d*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::Adaptor2d_Curve2d::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::Adaptor2d_Curve2d*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor2d_HCurve2d^ Macad::Occt::Adaptor2d_Curve2d::Trim(double First, double Last, double Tol)
{
	Handle(::Adaptor2d_HCurve2d) _result;
	_result = ((::Adaptor2d_Curve2d*)_NativeInstance)->Trim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_HCurve2d::CreateDowncasted( _result.get());
}

bool Macad::Occt::Adaptor2d_Curve2d::IsClosed()
{
	return ((::Adaptor2d_Curve2d*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Adaptor2d_Curve2d::IsPeriodic()
{
	return ((::Adaptor2d_Curve2d*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::Adaptor2d_Curve2d::Period()
{
	return ((::Adaptor2d_Curve2d*)_NativeInstance)->Period();
}

Macad::Occt::Pnt2d Macad::Occt::Adaptor2d_Curve2d::Value(double U)
{
	return Macad::Occt::Pnt2d(((::Adaptor2d_Curve2d*)_NativeInstance)->Value(U));
}

void Macad::Occt::Adaptor2d_Curve2d::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Adaptor2d_Curve2d*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Adaptor2d_Curve2d::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::Adaptor2d_Curve2d*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V);
}

void Macad::Occt::Adaptor2d_Curve2d::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Adaptor2d_Curve2d*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Adaptor2d_Curve2d::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Adaptor2d_Curve2d*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Adaptor2d_Curve2d::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Adaptor2d_Curve2d*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::Adaptor2d_Curve2d::Resolution(double R3d)
{
	return ((::Adaptor2d_Curve2d*)_NativeInstance)->Resolution(R3d);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Adaptor2d_Curve2d::GetTypeOcc()
{
	return (Macad::Occt::GeomAbs_CurveType)((::Adaptor2d_Curve2d*)_NativeInstance)->GetType();
}

Macad::Occt::gp_Lin2d^ Macad::Occt::Adaptor2d_Curve2d::Line()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::Adaptor2d_Curve2d*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::Adaptor2d_Curve2d::Circle()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::Adaptor2d_Curve2d*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::Adaptor2d_Curve2d::Ellipse()
{
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::Adaptor2d_Curve2d*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::Adaptor2d_Curve2d::Hyperbola()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::Adaptor2d_Curve2d*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::Adaptor2d_Curve2d::Parabola()
{
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::Adaptor2d_Curve2d*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

int Macad::Occt::Adaptor2d_Curve2d::Degree()
{
	return ((::Adaptor2d_Curve2d*)_NativeInstance)->Degree();
}

bool Macad::Occt::Adaptor2d_Curve2d::IsRational()
{
	return ((::Adaptor2d_Curve2d*)_NativeInstance)->IsRational();
}

int Macad::Occt::Adaptor2d_Curve2d::NbPoles()
{
	return ((::Adaptor2d_Curve2d*)_NativeInstance)->NbPoles();
}

int Macad::Occt::Adaptor2d_Curve2d::NbKnots()
{
	return ((::Adaptor2d_Curve2d*)_NativeInstance)->NbKnots();
}

int Macad::Occt::Adaptor2d_Curve2d::NbSamples()
{
	return ((::Adaptor2d_Curve2d*)_NativeInstance)->NbSamples();
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Adaptor2d_Curve2d::Bezier()
{
	Handle(::Geom2d_BezierCurve) _result;
	_result = ((::Adaptor2d_Curve2d*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Adaptor2d_Curve2d::BSpline()
{
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::Adaptor2d_Curve2d*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  Adaptor2d_Line2d
//---------------------------------------------------------------------

Macad::Occt::Adaptor2d_Line2d::Adaptor2d_Line2d()
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Adaptor2d_Line2d();
}

Macad::Occt::Adaptor2d_Line2d::Adaptor2d_Line2d(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d D, double UFirst, double ULast)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Dir2d> pp_D = &D;
	_NativeInstance = new ::Adaptor2d_Line2d(*(gp_Pnt2d*)pp_P, *(gp_Dir2d*)pp_D, UFirst, ULast);
}

Macad::Occt::Adaptor2d_Line2d::Adaptor2d_Line2d(Macad::Occt::Adaptor2d_Line2d^ parameter1)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Adaptor2d_Line2d(*(::Adaptor2d_Line2d*)parameter1->NativeInstance);
}

void Macad::Occt::Adaptor2d_Line2d::Load(Macad::Occt::gp_Lin2d^ L)
{
	((::Adaptor2d_Line2d*)_NativeInstance)->Load(*(::gp_Lin2d*)L->NativeInstance);
}

void Macad::Occt::Adaptor2d_Line2d::Load(Macad::Occt::gp_Lin2d^ L, double UFirst, double ULast)
{
	((::Adaptor2d_Line2d*)_NativeInstance)->Load(*(::gp_Lin2d*)L->NativeInstance, UFirst, ULast);
}

double Macad::Occt::Adaptor2d_Line2d::FirstParameter()
{
	return ((::Adaptor2d_Line2d*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Adaptor2d_Line2d::LastParameter()
{
	return ((::Adaptor2d_Line2d*)_NativeInstance)->LastParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Adaptor2d_Line2d::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Adaptor2d_Line2d*)_NativeInstance)->Continuity();
}

int Macad::Occt::Adaptor2d_Line2d::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::Adaptor2d_Line2d*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::Adaptor2d_Line2d::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::Adaptor2d_Line2d*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor2d_HCurve2d^ Macad::Occt::Adaptor2d_Line2d::Trim(double First, double Last, double Tol)
{
	Handle(::Adaptor2d_HCurve2d) _result;
	_result = ((::Adaptor2d_Line2d*)_NativeInstance)->Trim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_HCurve2d::CreateDowncasted( _result.get());
}

bool Macad::Occt::Adaptor2d_Line2d::IsClosed()
{
	return ((::Adaptor2d_Line2d*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Adaptor2d_Line2d::IsPeriodic()
{
	return ((::Adaptor2d_Line2d*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::Adaptor2d_Line2d::Period()
{
	return ((::Adaptor2d_Line2d*)_NativeInstance)->Period();
}

Macad::Occt::Pnt2d Macad::Occt::Adaptor2d_Line2d::Value(double X)
{
	return Macad::Occt::Pnt2d(((::Adaptor2d_Line2d*)_NativeInstance)->Value(X));
}

void Macad::Occt::Adaptor2d_Line2d::D0(double X, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Adaptor2d_Line2d*)_NativeInstance)->D0(X, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Adaptor2d_Line2d::D1(double X, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::Adaptor2d_Line2d*)_NativeInstance)->D1(X, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V);
}

void Macad::Occt::Adaptor2d_Line2d::D2(double X, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Adaptor2d_Line2d*)_NativeInstance)->D2(X, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Adaptor2d_Line2d::D3(double X, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Adaptor2d_Line2d*)_NativeInstance)->D3(X, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Adaptor2d_Line2d::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Adaptor2d_Line2d*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::Adaptor2d_Line2d::Resolution(double R3d)
{
	return ((::Adaptor2d_Line2d*)_NativeInstance)->Resolution(R3d);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Adaptor2d_Line2d::GetTypeOcc()
{
	return (Macad::Occt::GeomAbs_CurveType)((::Adaptor2d_Line2d*)_NativeInstance)->GetType();
}

Macad::Occt::gp_Lin2d^ Macad::Occt::Adaptor2d_Line2d::Line()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::Adaptor2d_Line2d*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::Adaptor2d_Line2d::Circle()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::Adaptor2d_Line2d*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::Adaptor2d_Line2d::Ellipse()
{
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::Adaptor2d_Line2d*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::Adaptor2d_Line2d::Hyperbola()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::Adaptor2d_Line2d*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::Adaptor2d_Line2d::Parabola()
{
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::Adaptor2d_Line2d*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

int Macad::Occt::Adaptor2d_Line2d::Degree()
{
	return ((::Adaptor2d_Line2d*)_NativeInstance)->Degree();
}

bool Macad::Occt::Adaptor2d_Line2d::IsRational()
{
	return ((::Adaptor2d_Line2d*)_NativeInstance)->IsRational();
}

int Macad::Occt::Adaptor2d_Line2d::NbPoles()
{
	return ((::Adaptor2d_Line2d*)_NativeInstance)->NbPoles();
}

int Macad::Occt::Adaptor2d_Line2d::NbKnots()
{
	return ((::Adaptor2d_Line2d*)_NativeInstance)->NbKnots();
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Adaptor2d_Line2d::Bezier()
{
	Handle(::Geom2d_BezierCurve) _result;
	_result = ((::Adaptor2d_Line2d*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Adaptor2d_Line2d::BSpline()
{
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::Adaptor2d_Line2d*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  Adaptor2d_HLine2d
//---------------------------------------------------------------------

Macad::Occt::Adaptor2d_HLine2d::Adaptor2d_HLine2d()
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor2d_HLine2d();
}

Macad::Occt::Adaptor2d_HLine2d::Adaptor2d_HLine2d(Macad::Occt::Adaptor2d_Line2d^ C)
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor2d_HLine2d(*(::Adaptor2d_Line2d*)C->NativeInstance);
}

Macad::Occt::Adaptor2d_HLine2d::Adaptor2d_HLine2d(Macad::Occt::Adaptor2d_HLine2d^ parameter1)
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor2d_HLine2d(*(::Adaptor2d_HLine2d*)parameter1->NativeInstance);
}

void Macad::Occt::Adaptor2d_HLine2d::Set(Macad::Occt::Adaptor2d_Line2d^ C)
{
	((::Adaptor2d_HLine2d*)_NativeInstance)->Set(*(::Adaptor2d_Line2d*)C->NativeInstance);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor2d_HLine2d::Curve2d()
{
	::Adaptor2d_Curve2d* _result = new ::Adaptor2d_Curve2d();
	*_result =  (::Adaptor2d_Curve2d)((::Adaptor2d_HLine2d*)_NativeInstance)->Curve2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor2d_Curve2d(_result);
}

Macad::Occt::Adaptor2d_Line2d^ Macad::Occt::Adaptor2d_HLine2d::ChangeCurve2d()
{
	::Adaptor2d_Line2d* _result = new ::Adaptor2d_Line2d();
	*_result = ((::Adaptor2d_HLine2d*)_NativeInstance)->ChangeCurve2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor2d_Line2d(_result);
}


Macad::Occt::Adaptor2d_HLine2d^ Macad::Occt::Adaptor2d_HLine2d::CreateDowncasted(::Adaptor2d_HLine2d* instance)
{
	return gcnew Macad::Occt::Adaptor2d_HLine2d( instance );
}



//---------------------------------------------------------------------
//  Class  Adaptor2d_OffsetCurve
//---------------------------------------------------------------------

Macad::Occt::Adaptor2d_OffsetCurve::Adaptor2d_OffsetCurve()
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Adaptor2d_OffsetCurve();
}

Macad::Occt::Adaptor2d_OffsetCurve::Adaptor2d_OffsetCurve(Macad::Occt::Adaptor2d_HCurve2d^ C)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor2d_HCurve2d) h_C = C->NativeInstance;
	_NativeInstance = new ::Adaptor2d_OffsetCurve(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Adaptor2d_OffsetCurve::Adaptor2d_OffsetCurve(Macad::Occt::Adaptor2d_HCurve2d^ C, double Offset)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor2d_HCurve2d) h_C = C->NativeInstance;
	_NativeInstance = new ::Adaptor2d_OffsetCurve(h_C, Offset);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Adaptor2d_OffsetCurve::Adaptor2d_OffsetCurve(Macad::Occt::Adaptor2d_HCurve2d^ C, double Offset, double WFirst, double WLast)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor2d_HCurve2d) h_C = C->NativeInstance;
	_NativeInstance = new ::Adaptor2d_OffsetCurve(h_C, Offset, WFirst, WLast);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Adaptor2d_OffsetCurve::Adaptor2d_OffsetCurve(Macad::Occt::Adaptor2d_OffsetCurve^ parameter1)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Adaptor2d_OffsetCurve(*(::Adaptor2d_OffsetCurve*)parameter1->NativeInstance);
}

void Macad::Occt::Adaptor2d_OffsetCurve::Load(Macad::Occt::Adaptor2d_HCurve2d^ S)
{
	Handle(::Adaptor2d_HCurve2d) h_S = S->NativeInstance;
	((::Adaptor2d_OffsetCurve*)_NativeInstance)->Load(h_S);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::Adaptor2d_OffsetCurve::Load(double Offset)
{
	((::Adaptor2d_OffsetCurve*)_NativeInstance)->Load(Offset);
}

void Macad::Occt::Adaptor2d_OffsetCurve::Load(double Offset, double WFirst, double WLast)
{
	((::Adaptor2d_OffsetCurve*)_NativeInstance)->Load(Offset, WFirst, WLast);
}

Macad::Occt::Adaptor2d_HCurve2d^ Macad::Occt::Adaptor2d_OffsetCurve::Curve()
{
	Handle(::Adaptor2d_HCurve2d) _result;
	_result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Curve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_HCurve2d::CreateDowncasted( _result.get());
}

double Macad::Occt::Adaptor2d_OffsetCurve::Offset()
{
	return ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Offset();
}

double Macad::Occt::Adaptor2d_OffsetCurve::FirstParameter()
{
	return ((::Adaptor2d_OffsetCurve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Adaptor2d_OffsetCurve::LastParameter()
{
	return ((::Adaptor2d_OffsetCurve*)_NativeInstance)->LastParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Adaptor2d_OffsetCurve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Adaptor2d_OffsetCurve*)_NativeInstance)->Continuity();
}

int Macad::Occt::Adaptor2d_OffsetCurve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::Adaptor2d_OffsetCurve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::Adaptor2d_OffsetCurve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::Adaptor2d_OffsetCurve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor2d_HCurve2d^ Macad::Occt::Adaptor2d_OffsetCurve::Trim(double First, double Last, double Tol)
{
	Handle(::Adaptor2d_HCurve2d) _result;
	_result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Trim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_HCurve2d::CreateDowncasted( _result.get());
}

bool Macad::Occt::Adaptor2d_OffsetCurve::IsClosed()
{
	return ((::Adaptor2d_OffsetCurve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Adaptor2d_OffsetCurve::IsPeriodic()
{
	return ((::Adaptor2d_OffsetCurve*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::Adaptor2d_OffsetCurve::Period()
{
	return ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Period();
}

Macad::Occt::Pnt2d Macad::Occt::Adaptor2d_OffsetCurve::Value(double U)
{
	return Macad::Occt::Pnt2d(((::Adaptor2d_OffsetCurve*)_NativeInstance)->Value(U));
}

void Macad::Occt::Adaptor2d_OffsetCurve::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Adaptor2d_OffsetCurve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Adaptor2d_OffsetCurve::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::Adaptor2d_OffsetCurve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V);
}

void Macad::Occt::Adaptor2d_OffsetCurve::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Adaptor2d_OffsetCurve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Adaptor2d_OffsetCurve::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Adaptor2d_OffsetCurve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Adaptor2d_OffsetCurve::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Adaptor2d_OffsetCurve*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::Adaptor2d_OffsetCurve::Resolution(double R3d)
{
	return ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Resolution(R3d);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Adaptor2d_OffsetCurve::GetTypeOcc()
{
	return (Macad::Occt::GeomAbs_CurveType)((::Adaptor2d_OffsetCurve*)_NativeInstance)->GetType();
}

Macad::Occt::gp_Lin2d^ Macad::Occt::Adaptor2d_OffsetCurve::Line()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::Adaptor2d_OffsetCurve::Circle()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::Adaptor2d_OffsetCurve::Ellipse()
{
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::Adaptor2d_OffsetCurve::Hyperbola()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::Adaptor2d_OffsetCurve::Parabola()
{
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

int Macad::Occt::Adaptor2d_OffsetCurve::Degree()
{
	return ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Degree();
}

bool Macad::Occt::Adaptor2d_OffsetCurve::IsRational()
{
	return ((::Adaptor2d_OffsetCurve*)_NativeInstance)->IsRational();
}

int Macad::Occt::Adaptor2d_OffsetCurve::NbPoles()
{
	return ((::Adaptor2d_OffsetCurve*)_NativeInstance)->NbPoles();
}

int Macad::Occt::Adaptor2d_OffsetCurve::NbKnots()
{
	return ((::Adaptor2d_OffsetCurve*)_NativeInstance)->NbKnots();
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Adaptor2d_OffsetCurve::Bezier()
{
	Handle(::Geom2d_BezierCurve) _result;
	_result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Adaptor2d_OffsetCurve::BSpline()
{
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

int Macad::Occt::Adaptor2d_OffsetCurve::NbSamples()
{
	return ((::Adaptor2d_OffsetCurve*)_NativeInstance)->NbSamples();
}




//---------------------------------------------------------------------
//  Class  Adaptor2d_HOffsetCurve
//---------------------------------------------------------------------

Macad::Occt::Adaptor2d_HOffsetCurve::Adaptor2d_HOffsetCurve()
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor2d_HOffsetCurve();
}

Macad::Occt::Adaptor2d_HOffsetCurve::Adaptor2d_HOffsetCurve(Macad::Occt::Adaptor2d_OffsetCurve^ C)
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor2d_HOffsetCurve(*(::Adaptor2d_OffsetCurve*)C->NativeInstance);
}

Macad::Occt::Adaptor2d_HOffsetCurve::Adaptor2d_HOffsetCurve(Macad::Occt::Adaptor2d_HOffsetCurve^ parameter1)
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Adaptor2d_HOffsetCurve(*(::Adaptor2d_HOffsetCurve*)parameter1->NativeInstance);
}

void Macad::Occt::Adaptor2d_HOffsetCurve::Set(Macad::Occt::Adaptor2d_OffsetCurve^ C)
{
	((::Adaptor2d_HOffsetCurve*)_NativeInstance)->Set(*(::Adaptor2d_OffsetCurve*)C->NativeInstance);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor2d_HOffsetCurve::Curve2d()
{
	::Adaptor2d_Curve2d* _result = new ::Adaptor2d_Curve2d();
	*_result =  (::Adaptor2d_Curve2d)((::Adaptor2d_HOffsetCurve*)_NativeInstance)->Curve2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor2d_Curve2d(_result);
}

Macad::Occt::Adaptor2d_OffsetCurve^ Macad::Occt::Adaptor2d_HOffsetCurve::ChangeCurve2d()
{
	::Adaptor2d_OffsetCurve* _result = new ::Adaptor2d_OffsetCurve();
	*_result = ((::Adaptor2d_HOffsetCurve*)_NativeInstance)->ChangeCurve2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor2d_OffsetCurve(_result);
}


Macad::Occt::Adaptor2d_HOffsetCurve^ Macad::Occt::Adaptor2d_HOffsetCurve::CreateDowncasted(::Adaptor2d_HOffsetCurve* instance)
{
	return gcnew Macad::Occt::Adaptor2d_HOffsetCurve( instance );
}


