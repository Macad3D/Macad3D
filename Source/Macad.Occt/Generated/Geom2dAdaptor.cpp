// Generated wrapper code for package Geom2dAdaptor

#include "OcctPCH.h"
#include "Geom2dAdaptor.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "Adaptor2d.h"
#include "BRepAdaptor.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  Geom2dAdaptor
//---------------------------------------------------------------------

Macad::Occt::Geom2dAdaptor::Geom2dAdaptor()
    : Macad::Occt::BaseClass<::Geom2dAdaptor>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAdaptor();
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::Geom2dAdaptor::MakeCurve(Macad::Occt::Adaptor2d_Curve2d^ HC)
{
    Handle(::Geom2d_Curve) _result = ::Geom2dAdaptor::MakeCurve(*(::Adaptor2d_Curve2d*)HC->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  Geom2dAdaptor_Curve
//---------------------------------------------------------------------

Macad::Occt::Geom2dAdaptor_Curve::Geom2dAdaptor_Curve()
    : Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2dAdaptor_Curve();
}

Macad::Occt::Geom2dAdaptor_Curve::Geom2dAdaptor_Curve(Macad::Occt::Geom2d_Curve^ C)
    : Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2dAdaptor_Curve(Handle(::Geom2d_Curve)(C->NativeInstance));
}

Macad::Occt::Geom2dAdaptor_Curve::Geom2dAdaptor_Curve(Macad::Occt::Geom2d_Curve^ C, double UFirst, double ULast)
    : Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Geom2dAdaptor_Curve(Handle(::Geom2d_Curve)(C->NativeInstance), UFirst, ULast);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Geom2dAdaptor_Curve::ShallowCopy()
{
    Handle(::Adaptor2d_Curve2d) _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

void Macad::Occt::Geom2dAdaptor_Curve::Reset()
{
    ((::Geom2dAdaptor_Curve*)_NativeInstance)->Reset();
}

void Macad::Occt::Geom2dAdaptor_Curve::Load(Macad::Occt::Geom2d_Curve^ theCurve)
{
    ((::Geom2dAdaptor_Curve*)_NativeInstance)->Load(Handle(::Geom2d_Curve)(theCurve->NativeInstance));
}

void Macad::Occt::Geom2dAdaptor_Curve::Load(Macad::Occt::Geom2d_Curve^ theCurve, double theUFirst, double theULast)
{
    ((::Geom2dAdaptor_Curve*)_NativeInstance)->Load(Handle(::Geom2d_Curve)(theCurve->NativeInstance), theUFirst, theULast);
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::Geom2dAdaptor_Curve::Curve()
{
    Handle(::Geom2d_Curve) _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

double Macad::Occt::Geom2dAdaptor_Curve::FirstParameter()
{
    double _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->FirstParameter();
    return _result;
}

double Macad::Occt::Geom2dAdaptor_Curve::LastParameter()
{
    double _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->LastParameter();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Geom2dAdaptor_Curve::Continuity()
{
    ::GeomAbs_Shape _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Continuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::Geom2dAdaptor_Curve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void Macad::Occt::Geom2dAdaptor_Curve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::Geom2dAdaptor_Curve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Geom2dAdaptor_Curve::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor2d_Curve2d) _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

bool Macad::Occt::Geom2dAdaptor_Curve::IsClosed()
{
    bool _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->IsClosed();
    return _result;
}

bool Macad::Occt::Geom2dAdaptor_Curve::IsPeriodic()
{
    bool _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double Macad::Occt::Geom2dAdaptor_Curve::Period()
{
    double _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Period();
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::Geom2dAdaptor_Curve::Value(double U)
{
    ::gp_Pnt2d _nativeResult = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Value(U);
    return Macad::Occt::Pnt2d(_nativeResult);
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
    ::gp_Vec2d _nativeResult = ((::Geom2dAdaptor_Curve*)_NativeInstance)->DN(U, N);
    return Macad::Occt::Vec2d(_nativeResult);
}

double Macad::Occt::Geom2dAdaptor_Curve::Resolution(double Ruv)
{
    double _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Resolution(Ruv);
    return _result;
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Geom2dAdaptor_Curve::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->GetType();
    return (Macad::Occt::GeomAbs_CurveType)_result;
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
    int _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Degree();
    return _result;
}

bool Macad::Occt::Geom2dAdaptor_Curve::IsRational()
{
    bool _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->IsRational();
    return _result;
}

int Macad::Occt::Geom2dAdaptor_Curve::NbPoles()
{
    int _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->NbPoles();
    return _result;
}

int Macad::Occt::Geom2dAdaptor_Curve::NbKnots()
{
    int _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->NbKnots();
    return _result;
}

int Macad::Occt::Geom2dAdaptor_Curve::NbSamples()
{
    int _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->NbSamples();
    return _result;
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Geom2dAdaptor_Curve::Bezier()
{
    Handle(::Geom2d_BezierCurve) _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dAdaptor_Curve::BSpline()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::Geom2dAdaptor_Curve*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2dAdaptor_Curve^ Macad::Occt::Geom2dAdaptor_Curve::CreateDowncasted(::Geom2dAdaptor_Curve* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRepAdaptor_Curve2d)))
        return Macad::Occt::BRepAdaptor_Curve2d::CreateDowncasted((::BRepAdaptor_Curve2d*)instance);
    
    return gcnew Macad::Occt::Geom2dAdaptor_Curve( instance );
}


