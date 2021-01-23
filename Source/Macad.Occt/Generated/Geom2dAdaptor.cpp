// Generated wrapper code for package Geom2dAdaptor

#include "OcctPCH.h"
#include "Geom2dAdaptor.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "BRepAdaptor.h"
#include "Geom2d.h"
#include "Standard.h"
#include "Geom2dAdaptor.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "Adaptor2d.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  Geom2dAdaptor_Curve
//---------------------------------------------------------------------

Macad::Occt::Geom2dAdaptor_Curve::Geom2dAdaptor_Curve()
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAdaptor_Curve();
}

Macad::Occt::Geom2dAdaptor_Curve::Geom2dAdaptor_Curve(Macad::Occt::Geom2d_Curve^ C)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	_NativeInstance = new ::Geom2dAdaptor_Curve(h_C);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom2dAdaptor_Curve::Geom2dAdaptor_Curve(Macad::Occt::Geom2d_Curve^ C, double UFirst, double ULast)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	_NativeInstance = new ::Geom2dAdaptor_Curve(h_C, UFirst, ULast);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom2dAdaptor_Curve::Geom2dAdaptor_Curve(Macad::Occt::Geom2dAdaptor_Curve^ parameter1)
	: Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAdaptor_Curve(*(::Geom2dAdaptor_Curve*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2dAdaptor_Curve::Reset()
{
	((::Geom2dAdaptor_Curve*)_NativeInstance)->Reset();
}

void Macad::Occt::Geom2dAdaptor_Curve::Load(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::Geom2dAdaptor_Curve*)_NativeInstance)->Load(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::Geom2dAdaptor_Curve::Load(Macad::Occt::Geom2d_Curve^ C, double UFirst, double ULast)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::Geom2dAdaptor_Curve*)_NativeInstance)->Load(h_C, UFirst, ULast);
	C->NativeInstance = h_C.get();
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::Geom2dAdaptor_Curve::Curve()
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Curve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

double Macad::Occt::Geom2dAdaptor_Curve::FirstParameter()
{
	return ((::Geom2dAdaptor_Curve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::Geom2dAdaptor_Curve::LastParameter()
{
	return ((::Geom2dAdaptor_Curve*)_NativeInstance)->LastParameter();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Geom2dAdaptor_Curve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::Geom2dAdaptor_Curve*)_NativeInstance)->Continuity();
}

int Macad::Occt::Geom2dAdaptor_Curve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
	return ((::Geom2dAdaptor_Curve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
}

void Macad::Occt::Geom2dAdaptor_Curve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	((::Geom2dAdaptor_Curve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor2d_HCurve2d^ Macad::Occt::Geom2dAdaptor_Curve::Trim(double First, double Last, double Tol)
{
	Handle(::Adaptor2d_HCurve2d) _result;
	_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Trim(First, Last, Tol);
	 return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_HCurve2d::CreateDowncasted( _result.get());
}

bool Macad::Occt::Geom2dAdaptor_Curve::IsClosed()
{
	return ((::Geom2dAdaptor_Curve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::Geom2dAdaptor_Curve::IsPeriodic()
{
	return ((::Geom2dAdaptor_Curve*)_NativeInstance)->IsPeriodic();
}

double Macad::Occt::Geom2dAdaptor_Curve::Period()
{
	return ((::Geom2dAdaptor_Curve*)_NativeInstance)->Period();
}

Macad::Occt::Pnt2d Macad::Occt::Geom2dAdaptor_Curve::Value(double U)
{
	return Macad::Occt::Pnt2d(((::Geom2dAdaptor_Curve*)_NativeInstance)->Value(U));
}

void Macad::Occt::Geom2dAdaptor_Curve::D0(double U, Macad::Occt::Pnt2d% P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::Geom2dAdaptor_Curve*)_NativeInstance)->D0(U, *(gp_Pnt2d*)pp_P);
}

void Macad::Occt::Geom2dAdaptor_Curve::D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::Geom2dAdaptor_Curve*)_NativeInstance)->D1(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V);
}

void Macad::Occt::Geom2dAdaptor_Curve::D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	((::Geom2dAdaptor_Curve*)_NativeInstance)->D2(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::Geom2dAdaptor_Curve::D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	((::Geom2dAdaptor_Curve*)_NativeInstance)->D3(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::Geom2dAdaptor_Curve::DN(double U, int N)
{
	return Macad::Occt::Vec2d(((::Geom2dAdaptor_Curve*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::Geom2dAdaptor_Curve::Resolution(double Ruv)
{
	return ((::Geom2dAdaptor_Curve*)_NativeInstance)->Resolution(Ruv);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Geom2dAdaptor_Curve::GetGeomType()
{
	return (Macad::Occt::GeomAbs_CurveType)((::Geom2dAdaptor_Curve*)_NativeInstance)->GetType();
}

Macad::Occt::gp_Lin2d^ Macad::Occt::Geom2dAdaptor_Curve::Line()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Line();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::Geom2dAdaptor_Curve::Circle()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Circle();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::Geom2dAdaptor_Curve::Ellipse()
{
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Ellipse();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::Geom2dAdaptor_Curve::Hyperbola()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Hyperbola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::Geom2dAdaptor_Curve::Parabola()
{
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Parabola();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

int Macad::Occt::Geom2dAdaptor_Curve::Degree()
{
	return ((::Geom2dAdaptor_Curve*)_NativeInstance)->Degree();
}

bool Macad::Occt::Geom2dAdaptor_Curve::IsRational()
{
	return ((::Geom2dAdaptor_Curve*)_NativeInstance)->IsRational();
}

int Macad::Occt::Geom2dAdaptor_Curve::NbPoles()
{
	return ((::Geom2dAdaptor_Curve*)_NativeInstance)->NbPoles();
}

int Macad::Occt::Geom2dAdaptor_Curve::NbKnots()
{
	return ((::Geom2dAdaptor_Curve*)_NativeInstance)->NbKnots();
}

int Macad::Occt::Geom2dAdaptor_Curve::NbSamples()
{
	return ((::Geom2dAdaptor_Curve*)_NativeInstance)->NbSamples();
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Geom2dAdaptor_Curve::Bezier()
{
	Handle(::Geom2d_BezierCurve) _result;
	_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Bezier();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dAdaptor_Curve::BSpline()
{
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->BSpline();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  Geom2dAdaptor_GHCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dAdaptor_GHCurve::Geom2dAdaptor_GHCurve()
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2dAdaptor_GHCurve();
}

Macad::Occt::Geom2dAdaptor_GHCurve::Geom2dAdaptor_GHCurve(Macad::Occt::Geom2dAdaptor_Curve^ C)
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2dAdaptor_GHCurve(*(::Geom2dAdaptor_Curve*)C->NativeInstance);
}

Macad::Occt::Geom2dAdaptor_GHCurve::Geom2dAdaptor_GHCurve(Macad::Occt::Geom2dAdaptor_GHCurve^ parameter1)
	: Macad::Occt::Adaptor2d_HCurve2d(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2dAdaptor_GHCurve(*(::Geom2dAdaptor_GHCurve*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2dAdaptor_GHCurve::Set(Macad::Occt::Geom2dAdaptor_Curve^ C)
{
	((::Geom2dAdaptor_GHCurve*)_NativeInstance)->Set(*(::Geom2dAdaptor_Curve*)C->NativeInstance);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Geom2dAdaptor_GHCurve::Curve2d()
{
	::Adaptor2d_Curve2d* _result = new ::Adaptor2d_Curve2d();
	*_result =  (::Adaptor2d_Curve2d)((::Geom2dAdaptor_GHCurve*)_NativeInstance)->Curve2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Adaptor2d_Curve2d(_result);
}

Macad::Occt::Geom2dAdaptor_Curve^ Macad::Occt::Geom2dAdaptor_GHCurve::ChangeCurve2d()
{
	::Geom2dAdaptor_Curve* _result = new ::Geom2dAdaptor_Curve();
	*_result = ((::Geom2dAdaptor_GHCurve*)_NativeInstance)->ChangeCurve2d();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Geom2dAdaptor_Curve(_result);
}


Macad::Occt::Geom2dAdaptor_GHCurve^ Macad::Occt::Geom2dAdaptor_GHCurve::CreateDowncasted(::Geom2dAdaptor_GHCurve* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Geom2dAdaptor_HCurve)))
		return Macad::Occt::Geom2dAdaptor_HCurve::CreateDowncasted((::Geom2dAdaptor_HCurve*)instance);

	return gcnew Macad::Occt::Geom2dAdaptor_GHCurve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2dAdaptor_HCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dAdaptor_HCurve::Geom2dAdaptor_HCurve()
	: Macad::Occt::Geom2dAdaptor_GHCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2dAdaptor_HCurve();
}

Macad::Occt::Geom2dAdaptor_HCurve::Geom2dAdaptor_HCurve(Macad::Occt::Geom2dAdaptor_Curve^ AS)
	: Macad::Occt::Geom2dAdaptor_GHCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2dAdaptor_HCurve(*(::Geom2dAdaptor_Curve*)AS->NativeInstance);
}

Macad::Occt::Geom2dAdaptor_HCurve::Geom2dAdaptor_HCurve(Macad::Occt::Geom2d_Curve^ S)
	: Macad::Occt::Geom2dAdaptor_GHCurve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_S = S->NativeInstance;
	NativeInstance = new ::Geom2dAdaptor_HCurve(h_S);
	S->NativeInstance = h_S.get();
}

Macad::Occt::Geom2dAdaptor_HCurve::Geom2dAdaptor_HCurve(Macad::Occt::Geom2d_Curve^ S, double UFirst, double ULast)
	: Macad::Occt::Geom2dAdaptor_GHCurve(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_S = S->NativeInstance;
	NativeInstance = new ::Geom2dAdaptor_HCurve(h_S, UFirst, ULast);
	S->NativeInstance = h_S.get();
}

Macad::Occt::Geom2dAdaptor_HCurve::Geom2dAdaptor_HCurve(Macad::Occt::Geom2dAdaptor_HCurve^ parameter1)
	: Macad::Occt::Geom2dAdaptor_GHCurve(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Geom2dAdaptor_HCurve(*(::Geom2dAdaptor_HCurve*)parameter1->NativeInstance);
}


Macad::Occt::Geom2dAdaptor_HCurve^ Macad::Occt::Geom2dAdaptor_HCurve::CreateDowncasted(::Geom2dAdaptor_HCurve* instance)
{
	return gcnew Macad::Occt::Geom2dAdaptor_HCurve( instance );
}



//---------------------------------------------------------------------
//  Class  Geom2dAdaptor
//---------------------------------------------------------------------

Macad::Occt::Geom2dAdaptor::Geom2dAdaptor()
	: BaseClass<::Geom2dAdaptor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAdaptor();
}

Macad::Occt::Geom2dAdaptor::Geom2dAdaptor(Macad::Occt::Geom2dAdaptor^ parameter1)
	: BaseClass<::Geom2dAdaptor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAdaptor(*(::Geom2dAdaptor*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::Geom2dAdaptor::MakeCurve(Macad::Occt::Adaptor2d_Curve2d^ HC)
{
	Handle(::Geom2d_Curve) _result;
	_result = ::Geom2dAdaptor::MakeCurve(*(::Adaptor2d_Curve2d*)HC->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}



