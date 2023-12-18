// Generated wrapper code for package Adaptor2d

#include "OcctPCH.h"
#include "Adaptor2d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2dAdaptor.h"
#include "ProjLib.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "gp.h"
#include "Geom2d.h"


//---------------------------------------------------------------------
//  Class  Adaptor2d_Curve2d
//---------------------------------------------------------------------

Macad::Occt::Adaptor2d_Curve2d::Adaptor2d_Curve2d()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Adaptor2d_Curve2d();
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor2d_Curve2d::ShallowCopy()
{
    Handle(::Adaptor2d_Curve2d) _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

double Macad::Occt::Adaptor2d_Curve2d::FirstParameter()
{
    double _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->FirstParameter();
    return _result;
}

double Macad::Occt::Adaptor2d_Curve2d::LastParameter()
{
    double _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->LastParameter();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Adaptor2d_Curve2d::Continuity()
{
    ::GeomAbs_Shape _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->Continuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::Adaptor2d_Curve2d::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void Macad::Occt::Adaptor2d_Curve2d::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::Adaptor2d_Curve2d*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor2d_Curve2d::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor2d_Curve2d) _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

bool Macad::Occt::Adaptor2d_Curve2d::IsClosed()
{
    bool _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->IsClosed();
    return _result;
}

bool Macad::Occt::Adaptor2d_Curve2d::IsPeriodic()
{
    bool _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->IsPeriodic();
    return _result;
}

double Macad::Occt::Adaptor2d_Curve2d::Period()
{
    double _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->Period();
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::Adaptor2d_Curve2d::Value(double U)
{
    ::gp_Pnt2d _nativeResult = ((::Adaptor2d_Curve2d*)_NativeInstance)->Value(U);
    return Macad::Occt::Pnt2d(_nativeResult);
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
    ::gp_Vec2d _nativeResult = ((::Adaptor2d_Curve2d*)_NativeInstance)->DN(U, N);
    return Macad::Occt::Vec2d(_nativeResult);
}

double Macad::Occt::Adaptor2d_Curve2d::Resolution(double R3d)
{
    double _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->Resolution(R3d);
    return _result;
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Adaptor2d_Curve2d::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->GetType();
    return (Macad::Occt::GeomAbs_CurveType)_result;
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
    int _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->Degree();
    return _result;
}

bool Macad::Occt::Adaptor2d_Curve2d::IsRational()
{
    bool _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->IsRational();
    return _result;
}

int Macad::Occt::Adaptor2d_Curve2d::NbPoles()
{
    int _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->NbPoles();
    return _result;
}

int Macad::Occt::Adaptor2d_Curve2d::NbKnots()
{
    int _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->NbKnots();
    return _result;
}

int Macad::Occt::Adaptor2d_Curve2d::NbSamples()
{
    int _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->NbSamples();
    return _result;
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Adaptor2d_Curve2d::Bezier()
{
    Handle(::Geom2d_BezierCurve) _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Adaptor2d_Curve2d::BSpline()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::Adaptor2d_Curve2d*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted(::Adaptor2d_Curve2d* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Adaptor2d_Line2d)))
        return Macad::Occt::Adaptor2d_Line2d::CreateDowncasted((::Adaptor2d_Line2d*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Adaptor2d_OffsetCurve)))
        return Macad::Occt::Adaptor2d_OffsetCurve::CreateDowncasted((::Adaptor2d_OffsetCurve*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2dAdaptor_Curve)))
        return Macad::Occt::Geom2dAdaptor_Curve::CreateDowncasted((::Geom2dAdaptor_Curve*)instance);
    if (instance->IsKind(STANDARD_TYPE(::ProjLib_ProjectedCurve)))
        return Macad::Occt::ProjLib_ProjectedCurve::CreateDowncasted((::ProjLib_ProjectedCurve*)instance);
    if (instance->IsKind(STANDARD_TYPE(::ProjLib_CompProjectedCurve)))
        return Macad::Occt::ProjLib_CompProjectedCurve::CreateDowncasted((::ProjLib_CompProjectedCurve*)instance);
    
    return gcnew Macad::Occt::Adaptor2d_Curve2d( instance );
}



//---------------------------------------------------------------------
//  Class  Adaptor2d_Line2d
//---------------------------------------------------------------------

Macad::Occt::Adaptor2d_Line2d::Adaptor2d_Line2d()
    : Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Adaptor2d_Line2d();
}

Macad::Occt::Adaptor2d_Line2d::Adaptor2d_Line2d(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d D, double UFirst, double ULast)
    : Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    pin_ptr<Macad::Occt::Dir2d> pp_D = &D;
    NativeInstance = new ::Adaptor2d_Line2d(*(gp_Pnt2d*)pp_P, *(gp_Dir2d*)pp_D, UFirst, ULast);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor2d_Line2d::ShallowCopy()
{
    Handle(::Adaptor2d_Curve2d) _result = ((::Adaptor2d_Line2d*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
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
    double _result = ((::Adaptor2d_Line2d*)_NativeInstance)->FirstParameter();
    return _result;
}

double Macad::Occt::Adaptor2d_Line2d::LastParameter()
{
    double _result = ((::Adaptor2d_Line2d*)_NativeInstance)->LastParameter();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Adaptor2d_Line2d::Continuity()
{
    ::GeomAbs_Shape _result = ((::Adaptor2d_Line2d*)_NativeInstance)->Continuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::Adaptor2d_Line2d::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::Adaptor2d_Line2d*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void Macad::Occt::Adaptor2d_Line2d::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::Adaptor2d_Line2d*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor2d_Line2d::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor2d_Curve2d) _result = ((::Adaptor2d_Line2d*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

bool Macad::Occt::Adaptor2d_Line2d::IsClosed()
{
    bool _result = ((::Adaptor2d_Line2d*)_NativeInstance)->IsClosed();
    return _result;
}

bool Macad::Occt::Adaptor2d_Line2d::IsPeriodic()
{
    bool _result = ((::Adaptor2d_Line2d*)_NativeInstance)->IsPeriodic();
    return _result;
}

double Macad::Occt::Adaptor2d_Line2d::Period()
{
    double _result = ((::Adaptor2d_Line2d*)_NativeInstance)->Period();
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::Adaptor2d_Line2d::Value(double X)
{
    ::gp_Pnt2d _nativeResult = ((::Adaptor2d_Line2d*)_NativeInstance)->Value(X);
    return Macad::Occt::Pnt2d(_nativeResult);
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
    ::gp_Vec2d _nativeResult = ((::Adaptor2d_Line2d*)_NativeInstance)->DN(U, N);
    return Macad::Occt::Vec2d(_nativeResult);
}

double Macad::Occt::Adaptor2d_Line2d::Resolution(double R3d)
{
    double _result = ((::Adaptor2d_Line2d*)_NativeInstance)->Resolution(R3d);
    return _result;
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Adaptor2d_Line2d::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::Adaptor2d_Line2d*)_NativeInstance)->GetType();
    return (Macad::Occt::GeomAbs_CurveType)_result;
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
    int _result = ((::Adaptor2d_Line2d*)_NativeInstance)->Degree();
    return _result;
}

bool Macad::Occt::Adaptor2d_Line2d::IsRational()
{
    bool _result = ((::Adaptor2d_Line2d*)_NativeInstance)->IsRational();
    return _result;
}

int Macad::Occt::Adaptor2d_Line2d::NbPoles()
{
    int _result = ((::Adaptor2d_Line2d*)_NativeInstance)->NbPoles();
    return _result;
}

int Macad::Occt::Adaptor2d_Line2d::NbKnots()
{
    int _result = ((::Adaptor2d_Line2d*)_NativeInstance)->NbKnots();
    return _result;
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Adaptor2d_Line2d::Bezier()
{
    Handle(::Geom2d_BezierCurve) _result = ((::Adaptor2d_Line2d*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Adaptor2d_Line2d::BSpline()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::Adaptor2d_Line2d*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Adaptor2d_Line2d^ Macad::Occt::Adaptor2d_Line2d::CreateDowncasted(::Adaptor2d_Line2d* instance)
{
    return gcnew Macad::Occt::Adaptor2d_Line2d( instance );
}



//---------------------------------------------------------------------
//  Class  Adaptor2d_OffsetCurve
//---------------------------------------------------------------------

Macad::Occt::Adaptor2d_OffsetCurve::Adaptor2d_OffsetCurve()
    : Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Adaptor2d_OffsetCurve();
}

Macad::Occt::Adaptor2d_OffsetCurve::Adaptor2d_OffsetCurve(Macad::Occt::Adaptor2d_Curve2d^ C)
    : Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Adaptor2d_OffsetCurve(Handle(::Adaptor2d_Curve2d)(C->NativeInstance));
}

Macad::Occt::Adaptor2d_OffsetCurve::Adaptor2d_OffsetCurve(Macad::Occt::Adaptor2d_Curve2d^ C, double Offset)
    : Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Adaptor2d_OffsetCurve(Handle(::Adaptor2d_Curve2d)(C->NativeInstance), Offset);
}

Macad::Occt::Adaptor2d_OffsetCurve::Adaptor2d_OffsetCurve(Macad::Occt::Adaptor2d_Curve2d^ C, double Offset, double WFirst, double WLast)
    : Macad::Occt::Adaptor2d_Curve2d(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Adaptor2d_OffsetCurve(Handle(::Adaptor2d_Curve2d)(C->NativeInstance), Offset, WFirst, WLast);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor2d_OffsetCurve::ShallowCopy()
{
    Handle(::Adaptor2d_Curve2d) _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

void Macad::Occt::Adaptor2d_OffsetCurve::Load(Macad::Occt::Adaptor2d_Curve2d^ S)
{
    ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Load(Handle(::Adaptor2d_Curve2d)(S->NativeInstance));
}

void Macad::Occt::Adaptor2d_OffsetCurve::Load(double Offset)
{
    ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Load(Offset);
}

void Macad::Occt::Adaptor2d_OffsetCurve::Load(double Offset, double WFirst, double WLast)
{
    ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Load(Offset, WFirst, WLast);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor2d_OffsetCurve::Curve()
{
    Handle(::Adaptor2d_Curve2d) _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

double Macad::Occt::Adaptor2d_OffsetCurve::Offset()
{
    double _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Offset();
    return _result;
}

double Macad::Occt::Adaptor2d_OffsetCurve::FirstParameter()
{
    double _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->FirstParameter();
    return _result;
}

double Macad::Occt::Adaptor2d_OffsetCurve::LastParameter()
{
    double _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->LastParameter();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::Adaptor2d_OffsetCurve::Continuity()
{
    ::GeomAbs_Shape _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Continuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::Adaptor2d_OffsetCurve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void Macad::Occt::Adaptor2d_OffsetCurve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::Adaptor2d_OffsetCurve::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor2d_Curve2d) _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

bool Macad::Occt::Adaptor2d_OffsetCurve::IsClosed()
{
    bool _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->IsClosed();
    return _result;
}

bool Macad::Occt::Adaptor2d_OffsetCurve::IsPeriodic()
{
    bool _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double Macad::Occt::Adaptor2d_OffsetCurve::Period()
{
    double _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Period();
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::Adaptor2d_OffsetCurve::Value(double U)
{
    ::gp_Pnt2d _nativeResult = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Value(U);
    return Macad::Occt::Pnt2d(_nativeResult);
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
    ::gp_Vec2d _nativeResult = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->DN(U, N);
    return Macad::Occt::Vec2d(_nativeResult);
}

double Macad::Occt::Adaptor2d_OffsetCurve::Resolution(double R3d)
{
    double _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Resolution(R3d);
    return _result;
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::Adaptor2d_OffsetCurve::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->GetType();
    return (Macad::Occt::GeomAbs_CurveType)_result;
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
    int _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Degree();
    return _result;
}

bool Macad::Occt::Adaptor2d_OffsetCurve::IsRational()
{
    bool _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->IsRational();
    return _result;
}

int Macad::Occt::Adaptor2d_OffsetCurve::NbPoles()
{
    int _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->NbPoles();
    return _result;
}

int Macad::Occt::Adaptor2d_OffsetCurve::NbKnots()
{
    int _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->NbKnots();
    return _result;
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Adaptor2d_OffsetCurve::Bezier()
{
    Handle(::Geom2d_BezierCurve) _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Adaptor2d_OffsetCurve::BSpline()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

int Macad::Occt::Adaptor2d_OffsetCurve::NbSamples()
{
    int _result = ((::Adaptor2d_OffsetCurve*)_NativeInstance)->NbSamples();
    return _result;
}

Macad::Occt::Adaptor2d_OffsetCurve^ Macad::Occt::Adaptor2d_OffsetCurve::CreateDowncasted(::Adaptor2d_OffsetCurve* instance)
{
    return gcnew Macad::Occt::Adaptor2d_OffsetCurve( instance );
}


