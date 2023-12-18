// Generated wrapper code for package GeomAdaptor

#include "OcctPCH.h"
#include "GeomAdaptor.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "Adaptor3d.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  GeomAdaptor
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor::GeomAdaptor()
    : Macad::Occt::BaseClass<::GeomAdaptor>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAdaptor();
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomAdaptor::MakeCurve(Macad::Occt::Adaptor3d_Curve^ C)
{
    Handle(::Geom_Curve) _result = ::GeomAdaptor::MakeCurve(*(::Adaptor3d_Curve*)C->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::GeomAdaptor::MakeSurface(Macad::Occt::Adaptor3d_Surface^ theS, bool theTrimFlag)
{
    Handle(::Geom_Surface) _result = ::GeomAdaptor::MakeSurface(*(::Adaptor3d_Surface*)theS->NativeInstance, theTrimFlag);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::GeomAdaptor::MakeSurface(Macad::Occt::Adaptor3d_Surface^ theS)
{
    Handle(::Geom_Surface) _result = ::GeomAdaptor::MakeSurface(*(::Adaptor3d_Surface*)theS->NativeInstance, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  GeomAdaptor_Curve
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_Curve::GeomAdaptor_Curve()
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Curve();
}

Macad::Occt::GeomAdaptor_Curve::GeomAdaptor_Curve(Macad::Occt::Geom_Curve^ theCurve)
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Curve(Handle(::Geom_Curve)(theCurve->NativeInstance));
}

Macad::Occt::GeomAdaptor_Curve::GeomAdaptor_Curve(Macad::Occt::Geom_Curve^ theCurve, double theUFirst, double theULast)
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Curve(Handle(::Geom_Curve)(theCurve->NativeInstance), theUFirst, theULast);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::GeomAdaptor_Curve::ShallowCopy()
{
    Handle(::Adaptor3d_Curve) _result = ((::GeomAdaptor_Curve*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::GeomAdaptor_Curve::Reset()
{
    ((::GeomAdaptor_Curve*)_NativeInstance)->Reset();
}

void Macad::Occt::GeomAdaptor_Curve::Load(Macad::Occt::Geom_Curve^ theCurve)
{
    ((::GeomAdaptor_Curve*)_NativeInstance)->Load(Handle(::Geom_Curve)(theCurve->NativeInstance));
}

void Macad::Occt::GeomAdaptor_Curve::Load(Macad::Occt::Geom_Curve^ theCurve, double theUFirst, double theULast)
{
    ((::GeomAdaptor_Curve*)_NativeInstance)->Load(Handle(::Geom_Curve)(theCurve->NativeInstance), theUFirst, theULast);
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomAdaptor_Curve::Curve()
{
    Handle(::Geom_Curve) _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

double Macad::Occt::GeomAdaptor_Curve::FirstParameter()
{
    double _result = ((::GeomAdaptor_Curve*)_NativeInstance)->FirstParameter();
    return _result;
}

double Macad::Occt::GeomAdaptor_Curve::LastParameter()
{
    double _result = ((::GeomAdaptor_Curve*)_NativeInstance)->LastParameter();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_Curve::Continuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Continuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::GeomAdaptor_Curve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_Curve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void Macad::Occt::GeomAdaptor_Curve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::GeomAdaptor_Curve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::GeomAdaptor_Curve::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Curve) _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

bool Macad::Occt::GeomAdaptor_Curve::IsClosed()
{
    bool _result = ((::GeomAdaptor_Curve*)_NativeInstance)->IsClosed();
    return _result;
}

bool Macad::Occt::GeomAdaptor_Curve::IsPeriodic()
{
    bool _result = ((::GeomAdaptor_Curve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double Macad::Occt::GeomAdaptor_Curve::Period()
{
    double _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Period();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::GeomAdaptor_Curve::Value(double U)
{
    ::gp_Pnt _nativeResult = ((::GeomAdaptor_Curve*)_NativeInstance)->Value(U);
    return Macad::Occt::Pnt(_nativeResult);
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
    ::gp_Vec _nativeResult = ((::GeomAdaptor_Curve*)_NativeInstance)->DN(U, N);
    return Macad::Occt::Vec(_nativeResult);
}

double Macad::Occt::GeomAdaptor_Curve::Resolution(double R3d)
{
    double _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Resolution(R3d);
    return _result;
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::GeomAdaptor_Curve::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::GeomAdaptor_Curve*)_NativeInstance)->GetType();
    return (Macad::Occt::GeomAbs_CurveType)_result;
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
    int _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Degree();
    return _result;
}

bool Macad::Occt::GeomAdaptor_Curve::IsRational()
{
    bool _result = ((::GeomAdaptor_Curve*)_NativeInstance)->IsRational();
    return _result;
}

int Macad::Occt::GeomAdaptor_Curve::NbPoles()
{
    int _result = ((::GeomAdaptor_Curve*)_NativeInstance)->NbPoles();
    return _result;
}

int Macad::Occt::GeomAdaptor_Curve::NbKnots()
{
    int _result = ((::GeomAdaptor_Curve*)_NativeInstance)->NbKnots();
    return _result;
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::GeomAdaptor_Curve::Bezier()
{
    Handle(::Geom_BezierCurve) _result = ((::GeomAdaptor_Curve*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomAdaptor_Curve::BSpline()
{
    Handle(::Geom_BSplineCurve) _result = ((::GeomAdaptor_Curve*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_OffsetCurve^ Macad::Occt::GeomAdaptor_Curve::OffsetCurve()
{
    Handle(::Geom_OffsetCurve) _result = ((::GeomAdaptor_Curve*)_NativeInstance)->OffsetCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_OffsetCurve::CreateDowncasted(_result.get());
}

Macad::Occt::GeomAdaptor_Curve^ Macad::Occt::GeomAdaptor_Curve::CreateDowncasted(::GeomAdaptor_Curve* instance)
{
    return gcnew Macad::Occt::GeomAdaptor_Curve( instance );
}



//---------------------------------------------------------------------
//  Class  GeomAdaptor_Surface
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_Surface::GeomAdaptor_Surface()
    : Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Surface();
}

Macad::Occt::GeomAdaptor_Surface::GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf)
    : Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Surface(Handle(::Geom_Surface)(theSurf->NativeInstance));
}

Macad::Occt::GeomAdaptor_Surface::GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU, double theTolV)
    : Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Surface(Handle(::Geom_Surface)(theSurf->NativeInstance), theUFirst, theULast, theVFirst, theVLast, theTolU, theTolV);
}

Macad::Occt::GeomAdaptor_Surface::GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU)
    : Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Surface(Handle(::Geom_Surface)(theSurf->NativeInstance), theUFirst, theULast, theVFirst, theVLast, theTolU, 0.);
}

Macad::Occt::GeomAdaptor_Surface::GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast)
    : Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_Surface(Handle(::Geom_Surface)(theSurf->NativeInstance), theUFirst, theULast, theVFirst, theVLast, 0., 0.);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::GeomAdaptor_Surface::ShallowCopy()
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

void Macad::Occt::GeomAdaptor_Surface::Load(Macad::Occt::Geom_Surface^ theSurf)
{
    ((::GeomAdaptor_Surface*)_NativeInstance)->Load(Handle(::Geom_Surface)(theSurf->NativeInstance));
}

void Macad::Occt::GeomAdaptor_Surface::Load(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU, double theTolV)
{
    ((::GeomAdaptor_Surface*)_NativeInstance)->Load(Handle(::Geom_Surface)(theSurf->NativeInstance), theUFirst, theULast, theVFirst, theVLast, theTolU, theTolV);
}

void Macad::Occt::GeomAdaptor_Surface::Load(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU)
{
    ((::GeomAdaptor_Surface*)_NativeInstance)->Load(Handle(::Geom_Surface)(theSurf->NativeInstance), theUFirst, theULast, theVFirst, theVLast, theTolU, 0.);
}

void Macad::Occt::GeomAdaptor_Surface::Load(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast)
{
    ((::GeomAdaptor_Surface*)_NativeInstance)->Load(Handle(::Geom_Surface)(theSurf->NativeInstance), theUFirst, theULast, theVFirst, theVLast, 0., 0.);
}

Macad::Occt::Geom_Surface^ Macad::Occt::GeomAdaptor_Surface::Surface()
{
    Handle(::Geom_Surface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

double Macad::Occt::GeomAdaptor_Surface::FirstUParameter()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->FirstUParameter();
    return _result;
}

double Macad::Occt::GeomAdaptor_Surface::LastUParameter()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->LastUParameter();
    return _result;
}

double Macad::Occt::GeomAdaptor_Surface::FirstVParameter()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->FirstVParameter();
    return _result;
}

double Macad::Occt::GeomAdaptor_Surface::LastVParameter()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->LastVParameter();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_Surface::UContinuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_Surface*)_NativeInstance)->UContinuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_Surface::VContinuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_Surface*)_NativeInstance)->VContinuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::GeomAdaptor_Surface::NbUIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->NbUIntervals((::GeomAbs_Shape)S);
    return _result;
}

int Macad::Occt::GeomAdaptor_Surface::NbVIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->NbVIntervals((::GeomAbs_Shape)S);
    return _result;
}

void Macad::Occt::GeomAdaptor_Surface::UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::GeomAdaptor_Surface*)_NativeInstance)->UIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

void Macad::Occt::GeomAdaptor_Surface::VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::GeomAdaptor_Surface*)_NativeInstance)->VIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::GeomAdaptor_Surface::UTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->UTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::GeomAdaptor_Surface::VTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->VTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

bool Macad::Occt::GeomAdaptor_Surface::IsUClosed()
{
    bool _result = ((::GeomAdaptor_Surface*)_NativeInstance)->IsUClosed();
    return _result;
}

bool Macad::Occt::GeomAdaptor_Surface::IsVClosed()
{
    bool _result = ((::GeomAdaptor_Surface*)_NativeInstance)->IsVClosed();
    return _result;
}

bool Macad::Occt::GeomAdaptor_Surface::IsUPeriodic()
{
    bool _result = ((::GeomAdaptor_Surface*)_NativeInstance)->IsUPeriodic();
    return _result;
}

double Macad::Occt::GeomAdaptor_Surface::UPeriod()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->UPeriod();
    return _result;
}

bool Macad::Occt::GeomAdaptor_Surface::IsVPeriodic()
{
    bool _result = ((::GeomAdaptor_Surface*)_NativeInstance)->IsVPeriodic();
    return _result;
}

double Macad::Occt::GeomAdaptor_Surface::VPeriod()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->VPeriod();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::GeomAdaptor_Surface::Value(double U, double V)
{
    ::gp_Pnt _nativeResult = ((::GeomAdaptor_Surface*)_NativeInstance)->Value(U, V);
    return Macad::Occt::Pnt(_nativeResult);
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
    ::gp_Vec _nativeResult = ((::GeomAdaptor_Surface*)_NativeInstance)->DN(U, V, Nu, Nv);
    return Macad::Occt::Vec(_nativeResult);
}

double Macad::Occt::GeomAdaptor_Surface::UResolution(double R3d)
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->UResolution(R3d);
    return _result;
}

double Macad::Occt::GeomAdaptor_Surface::VResolution(double R3d)
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->VResolution(R3d);
    return _result;
}

Macad::Occt::GeomAbs_SurfaceType Macad::Occt::GeomAdaptor_Surface::GetSurfaceType()
{
    ::GeomAbs_SurfaceType _result = ((::GeomAdaptor_Surface*)_NativeInstance)->GetType();
    return (Macad::Occt::GeomAbs_SurfaceType)_result;
}

Macad::Occt::Pln Macad::Occt::GeomAdaptor_Surface::Plane()
{
    ::gp_Pln _nativeResult = ((::GeomAdaptor_Surface*)_NativeInstance)->Plane();
    return Macad::Occt::Pln(_nativeResult);
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
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->UDegree();
    return _result;
}

int Macad::Occt::GeomAdaptor_Surface::NbUPoles()
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->NbUPoles();
    return _result;
}

int Macad::Occt::GeomAdaptor_Surface::VDegree()
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->VDegree();
    return _result;
}

int Macad::Occt::GeomAdaptor_Surface::NbVPoles()
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->NbVPoles();
    return _result;
}

int Macad::Occt::GeomAdaptor_Surface::NbUKnots()
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->NbUKnots();
    return _result;
}

int Macad::Occt::GeomAdaptor_Surface::NbVKnots()
{
    int _result = ((::GeomAdaptor_Surface*)_NativeInstance)->NbVKnots();
    return _result;
}

bool Macad::Occt::GeomAdaptor_Surface::IsURational()
{
    bool _result = ((::GeomAdaptor_Surface*)_NativeInstance)->IsURational();
    return _result;
}

bool Macad::Occt::GeomAdaptor_Surface::IsVRational()
{
    bool _result = ((::GeomAdaptor_Surface*)_NativeInstance)->IsVRational();
    return _result;
}

Macad::Occt::Geom_BezierSurface^ Macad::Occt::GeomAdaptor_Surface::Bezier()
{
    Handle(::Geom_BezierSurface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomAdaptor_Surface::BSpline()
{
    Handle(::Geom_BSplineSurface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Ax1 Macad::Occt::GeomAdaptor_Surface::AxeOfRevolution()
{
    ::gp_Ax1 _nativeResult = ((::GeomAdaptor_Surface*)_NativeInstance)->AxeOfRevolution();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Dir Macad::Occt::GeomAdaptor_Surface::Direction()
{
    ::gp_Dir _nativeResult = ((::GeomAdaptor_Surface*)_NativeInstance)->Direction();
    return Macad::Occt::Dir(_nativeResult);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::GeomAdaptor_Surface::BasisCurve()
{
    Handle(::Adaptor3d_Curve) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->BasisCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::GeomAdaptor_Surface::BasisSurface()
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_Surface*)_NativeInstance)->BasisSurface();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

double Macad::Occt::GeomAdaptor_Surface::OffsetValue()
{
    double _result = ((::GeomAdaptor_Surface*)_NativeInstance)->OffsetValue();
    return _result;
}

Macad::Occt::GeomAdaptor_Surface^ Macad::Occt::GeomAdaptor_Surface::CreateDowncasted(::GeomAdaptor_Surface* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::GeomAdaptor_SurfaceOfLinearExtrusion)))
        return Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::CreateDowncasted((::GeomAdaptor_SurfaceOfLinearExtrusion*)instance);
    if (instance->IsKind(STANDARD_TYPE(::GeomAdaptor_SurfaceOfRevolution)))
        return Macad::Occt::GeomAdaptor_SurfaceOfRevolution::CreateDowncasted((::GeomAdaptor_SurfaceOfRevolution*)instance);
    
    return gcnew Macad::Occt::GeomAdaptor_Surface( instance );
}



//---------------------------------------------------------------------
//  Class  GeomAdaptor_SurfaceOfLinearExtrusion
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::GeomAdaptor_SurfaceOfLinearExtrusion()
    : Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_SurfaceOfLinearExtrusion();
}

Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::Adaptor3d_Curve^ C)
    : Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_SurfaceOfLinearExtrusion(Handle(::Adaptor3d_Curve)(C->NativeInstance));
}

Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Dir V)
    : Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Dir> pp_V = &V;
    NativeInstance = new ::GeomAdaptor_SurfaceOfLinearExtrusion(Handle(::Adaptor3d_Curve)(C->NativeInstance), *(gp_Dir*)pp_V);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::ShallowCopy()
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

void Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Load(Macad::Occt::Adaptor3d_Curve^ C)
{
    ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Load(Handle(::Adaptor3d_Curve)(C->NativeInstance));
}

void Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Load(Macad::Occt::Dir V)
{
    pin_ptr<Macad::Occt::Dir> pp_V = &V;
    ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Load(*(gp_Dir*)pp_V);
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::FirstUParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->FirstUParameter();
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::LastUParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->LastUParameter();
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::FirstVParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->FirstVParameter();
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::LastVParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->LastVParameter();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::UContinuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UContinuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::VContinuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VContinuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::NbUIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->NbUIntervals((::GeomAbs_Shape)S);
    return _result;
}

int Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::NbVIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->NbVIntervals((::GeomAbs_Shape)S);
    return _result;
}

void Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

void Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::UTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::VTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

bool Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::IsUClosed()
{
    bool _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsUClosed();
    return _result;
}

bool Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::IsVClosed()
{
    bool _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsVClosed();
    return _result;
}

bool Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::IsUPeriodic()
{
    bool _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsUPeriodic();
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::UPeriod()
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UPeriod();
    return _result;
}

bool Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::IsVPeriodic()
{
    bool _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsVPeriodic();
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::VPeriod()
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VPeriod();
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::UResolution(double R3d)
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UResolution(R3d);
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::VResolution(double R3d)
{
    double _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->VResolution(R3d);
    return _result;
}

Macad::Occt::GeomAbs_SurfaceType Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::GetSurfaceType()
{
    ::GeomAbs_SurfaceType _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->GetType();
    return (Macad::Occt::GeomAbs_SurfaceType)_result;
}

Macad::Occt::Pln Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Plane()
{
    ::gp_Pln _nativeResult = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Plane();
    return Macad::Occt::Pln(_nativeResult);
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
    int _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->UDegree();
    return _result;
}

int Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::NbUPoles()
{
    int _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->NbUPoles();
    return _result;
}

bool Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::IsURational()
{
    bool _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsURational();
    return _result;
}

bool Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::IsVRational()
{
    bool _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->IsVRational();
    return _result;
}

Macad::Occt::Geom_BezierSurface^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Bezier()
{
    Handle(::Geom_BezierSurface) _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::BSpline()
{
    Handle(::Geom_BSplineSurface) _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Ax1 Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::AxeOfRevolution()
{
    ::gp_Ax1 _nativeResult = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->AxeOfRevolution();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Dir Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::Direction()
{
    ::gp_Dir _nativeResult = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->Direction();
    return Macad::Occt::Dir(_nativeResult);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::BasisCurve()
{
    Handle(::Adaptor3d_Curve) _result = ((::GeomAdaptor_SurfaceOfLinearExtrusion*)_NativeInstance)->BasisCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion::CreateDowncasted(::GeomAdaptor_SurfaceOfLinearExtrusion* instance)
{
    return gcnew Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion( instance );
}



//---------------------------------------------------------------------
//  Class  GeomAdaptor_SurfaceOfRevolution
//---------------------------------------------------------------------

Macad::Occt::GeomAdaptor_SurfaceOfRevolution::GeomAdaptor_SurfaceOfRevolution()
    : Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_SurfaceOfRevolution();
}

Macad::Occt::GeomAdaptor_SurfaceOfRevolution::GeomAdaptor_SurfaceOfRevolution(Macad::Occt::Adaptor3d_Curve^ C)
    : Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GeomAdaptor_SurfaceOfRevolution(Handle(::Adaptor3d_Curve)(C->NativeInstance));
}

Macad::Occt::GeomAdaptor_SurfaceOfRevolution::GeomAdaptor_SurfaceOfRevolution(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Ax1 V)
    : Macad::Occt::GeomAdaptor_Surface(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_V = &V;
    NativeInstance = new ::GeomAdaptor_SurfaceOfRevolution(Handle(::Adaptor3d_Curve)(C->NativeInstance), *(gp_Ax1*)pp_V);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::ShallowCopy()
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

void Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Load(Macad::Occt::Adaptor3d_Curve^ C)
{
    ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Load(Handle(::Adaptor3d_Curve)(C->NativeInstance));
}

void Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Load(Macad::Occt::Ax1 V)
{
    pin_ptr<Macad::Occt::Ax1> pp_V = &V;
    ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Load(*(gp_Ax1*)pp_V);
}

Macad::Occt::Ax1 Macad::Occt::GeomAdaptor_SurfaceOfRevolution::AxeOfRevolution()
{
    ::gp_Ax1 _nativeResult = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->AxeOfRevolution();
    return Macad::Occt::Ax1(_nativeResult);
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::FirstUParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->FirstUParameter();
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::LastUParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->LastUParameter();
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::FirstVParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->FirstVParameter();
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::LastVParameter()
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->LastVParameter();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_SurfaceOfRevolution::UContinuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UContinuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::GeomAdaptor_SurfaceOfRevolution::VContinuity()
{
    ::GeomAbs_Shape _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VContinuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::GeomAdaptor_SurfaceOfRevolution::NbUIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->NbUIntervals((::GeomAbs_Shape)S);
    return _result;
}

int Macad::Occt::GeomAdaptor_SurfaceOfRevolution::NbVIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->NbVIntervals((::GeomAbs_Shape)S);
    return _result;
}

void Macad::Occt::GeomAdaptor_SurfaceOfRevolution::UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

void Macad::Occt::GeomAdaptor_SurfaceOfRevolution::VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::UTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::VTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

bool Macad::Occt::GeomAdaptor_SurfaceOfRevolution::IsUClosed()
{
    bool _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsUClosed();
    return _result;
}

bool Macad::Occt::GeomAdaptor_SurfaceOfRevolution::IsVClosed()
{
    bool _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsVClosed();
    return _result;
}

bool Macad::Occt::GeomAdaptor_SurfaceOfRevolution::IsUPeriodic()
{
    bool _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsUPeriodic();
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::UPeriod()
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UPeriod();
    return _result;
}

bool Macad::Occt::GeomAdaptor_SurfaceOfRevolution::IsVPeriodic()
{
    bool _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsVPeriodic();
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::VPeriod()
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VPeriod();
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::UResolution(double R3d)
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->UResolution(R3d);
    return _result;
}

double Macad::Occt::GeomAdaptor_SurfaceOfRevolution::VResolution(double R3d)
{
    double _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VResolution(R3d);
    return _result;
}

Macad::Occt::GeomAbs_SurfaceType Macad::Occt::GeomAdaptor_SurfaceOfRevolution::GetSurfaceType()
{
    ::GeomAbs_SurfaceType _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->GetType();
    return (Macad::Occt::GeomAbs_SurfaceType)_result;
}

Macad::Occt::Pln Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Plane()
{
    ::gp_Pln _nativeResult = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Plane();
    return Macad::Occt::Pln(_nativeResult);
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
    int _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->VDegree();
    return _result;
}

int Macad::Occt::GeomAdaptor_SurfaceOfRevolution::NbVPoles()
{
    int _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->NbVPoles();
    return _result;
}

int Macad::Occt::GeomAdaptor_SurfaceOfRevolution::NbVKnots()
{
    int _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->NbVKnots();
    return _result;
}

bool Macad::Occt::GeomAdaptor_SurfaceOfRevolution::IsURational()
{
    bool _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsURational();
    return _result;
}

bool Macad::Occt::GeomAdaptor_SurfaceOfRevolution::IsVRational()
{
    bool _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->IsVRational();
    return _result;
}

Macad::Occt::Geom_BezierSurface^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Bezier()
{
    Handle(::Geom_BezierSurface) _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::BSpline()
{
    Handle(::Geom_BSplineSurface) _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Ax3 Macad::Occt::GeomAdaptor_SurfaceOfRevolution::Axis()
{
    ::gp_Ax3 _nativeResult = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->Axis();
    return Macad::Occt::Ax3(_nativeResult);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::BasisCurve()
{
    Handle(::Adaptor3d_Curve) _result = ((::GeomAdaptor_SurfaceOfRevolution*)_NativeInstance)->BasisCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ Macad::Occt::GeomAdaptor_SurfaceOfRevolution::CreateDowncasted(::GeomAdaptor_SurfaceOfRevolution* instance)
{
    return gcnew Macad::Occt::GeomAdaptor_SurfaceOfRevolution( instance );
}


