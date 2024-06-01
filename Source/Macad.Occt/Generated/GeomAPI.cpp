// Generated wrapper code for package GeomAPI

#include "OcctPCH.h"
#include "GeomAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "Geom.h"
#include "gp.h"
#include "Extrema.h"
#include "TColgp.h"
#include "TColStd.h"
#include "GeomAbs.h"


//---------------------------------------------------------------------
//  Class  GeomAPI
//---------------------------------------------------------------------

Macad::Occt::GeomAPI::GeomAPI()
    : Macad::Occt::BaseClass<::GeomAPI>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI();
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomAPI::To2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pln P)
{
    pin_ptr<Macad::Occt::Pln> pp_P = &P;
    Handle(::Geom2d_Curve) _result = ::GeomAPI::To2d(Handle(::Geom_Curve)(C->NativeInstance), *(gp_Pln*)pp_P);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomAPI::To3d(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pln P)
{
    pin_ptr<Macad::Occt::Pln> pp_P = &P;
    Handle(::Geom_Curve) _result = ::GeomAPI::To3d(Handle(::Geom2d_Curve)(C->NativeInstance), *(gp_Pln*)pp_P);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaCurveCurve
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_ExtremaCurveCurve::GeomAPI_ExtremaCurveCurve()
    : Macad::Occt::BaseClass<::GeomAPI_ExtremaCurveCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaCurveCurve();
}

Macad::Occt::GeomAPI_ExtremaCurveCurve::GeomAPI_ExtremaCurveCurve(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2)
    : Macad::Occt::BaseClass<::GeomAPI_ExtremaCurveCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaCurveCurve(Handle(::Geom_Curve)(C1->NativeInstance), Handle(::Geom_Curve)(C2->NativeInstance));
}

Macad::Occt::GeomAPI_ExtremaCurveCurve::GeomAPI_ExtremaCurveCurve(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2, double U1min, double U1max, double U2min, double U2max)
    : Macad::Occt::BaseClass<::GeomAPI_ExtremaCurveCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaCurveCurve(Handle(::Geom_Curve)(C1->NativeInstance), Handle(::Geom_Curve)(C2->NativeInstance), U1min, U1max, U2min, U2max);
}

void Macad::Occt::GeomAPI_ExtremaCurveCurve::Init(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2)
{
    ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Init(Handle(::Geom_Curve)(C1->NativeInstance), Handle(::Geom_Curve)(C2->NativeInstance));
}

void Macad::Occt::GeomAPI_ExtremaCurveCurve::Init(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2, double U1min, double U1max, double U2min, double U2max)
{
    ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Init(Handle(::Geom_Curve)(C1->NativeInstance), Handle(::Geom_Curve)(C2->NativeInstance), U1min, U1max, U2min, U2max);
}

int Macad::Occt::GeomAPI_ExtremaCurveCurve::NbExtrema()
{
    int _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->NbExtrema();
    return _result;
}

void Macad::Occt::GeomAPI_ExtremaCurveCurve::Points(int Index, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Points(Index, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void Macad::Occt::GeomAPI_ExtremaCurveCurve::Parameters(int Index, double% U1, double% U2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_U2 = &U2;
    ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Parameters(Index, *(double*)pp_U1, *(double*)pp_U2);
}

double Macad::Occt::GeomAPI_ExtremaCurveCurve::Distance(int Index)
{
    double _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Distance(Index);
    return _result;
}

bool Macad::Occt::GeomAPI_ExtremaCurveCurve::IsParallel()
{
    bool _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->IsParallel();
    return _result;
}

void Macad::Occt::GeomAPI_ExtremaCurveCurve::NearestPoints(Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->NearestPoints(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void Macad::Occt::GeomAPI_ExtremaCurveCurve::LowerDistanceParameters(double% U1, double% U2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_U2 = &U2;
    ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->LowerDistanceParameters(*(double*)pp_U1, *(double*)pp_U2);
}

double Macad::Occt::GeomAPI_ExtremaCurveCurve::LowerDistance()
{
    double _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->LowerDistance();
    return _result;
}

bool Macad::Occt::GeomAPI_ExtremaCurveCurve::TotalNearestPoints(Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    bool _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->TotalNearestPoints(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
    return _result;
}

bool Macad::Occt::GeomAPI_ExtremaCurveCurve::TotalLowerDistanceParameters(double% U1, double% U2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_U2 = &U2;
    bool _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->TotalLowerDistanceParameters(*(double*)pp_U1, *(double*)pp_U2);
    return _result;
}

double Macad::Occt::GeomAPI_ExtremaCurveCurve::TotalLowerDistance()
{
    double _result = ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->TotalLowerDistance();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaCurveSurface
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_ExtremaCurveSurface::GeomAPI_ExtremaCurveSurface()
    : Macad::Occt::BaseClass<::GeomAPI_ExtremaCurveSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaCurveSurface();
}

Macad::Occt::GeomAPI_ExtremaCurveSurface::GeomAPI_ExtremaCurveSurface(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface)
    : Macad::Occt::BaseClass<::GeomAPI_ExtremaCurveSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaCurveSurface(Handle(::Geom_Curve)(Curve->NativeInstance), Handle(::Geom_Surface)(Surface->NativeInstance));
}

Macad::Occt::GeomAPI_ExtremaCurveSurface::GeomAPI_ExtremaCurveSurface(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface, double Wmin, double Wmax, double Umin, double Umax, double Vmin, double Vmax)
    : Macad::Occt::BaseClass<::GeomAPI_ExtremaCurveSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaCurveSurface(Handle(::Geom_Curve)(Curve->NativeInstance), Handle(::Geom_Surface)(Surface->NativeInstance), Wmin, Wmax, Umin, Umax, Vmin, Vmax);
}

void Macad::Occt::GeomAPI_ExtremaCurveSurface::Init(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface)
{
    ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Init(Handle(::Geom_Curve)(Curve->NativeInstance), Handle(::Geom_Surface)(Surface->NativeInstance));
}

void Macad::Occt::GeomAPI_ExtremaCurveSurface::Init(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface, double Wmin, double Wmax, double Umin, double Umax, double Vmin, double Vmax)
{
    ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Init(Handle(::Geom_Curve)(Curve->NativeInstance), Handle(::Geom_Surface)(Surface->NativeInstance), Wmin, Wmax, Umin, Umax, Vmin, Vmax);
}

int Macad::Occt::GeomAPI_ExtremaCurveSurface::NbExtrema()
{
    int _result = ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->NbExtrema();
    return _result;
}

void Macad::Occt::GeomAPI_ExtremaCurveSurface::Points(int Index, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Points(Index, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void Macad::Occt::GeomAPI_ExtremaCurveSurface::Parameters(int Index, double% W, double% U, double% V)
{
    pin_ptr<double> pp_W = &W;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Parameters(Index, *(double*)pp_W, *(double*)pp_U, *(double*)pp_V);
}

double Macad::Occt::GeomAPI_ExtremaCurveSurface::Distance(int Index)
{
    double _result = ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Distance(Index);
    return _result;
}

bool Macad::Occt::GeomAPI_ExtremaCurveSurface::IsParallel()
{
    bool _result = ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->IsParallel();
    return _result;
}

void Macad::Occt::GeomAPI_ExtremaCurveSurface::NearestPoints(Macad::Occt::Pnt% PC, Macad::Occt::Pnt% PS)
{
    pin_ptr<Macad::Occt::Pnt> pp_PC = &PC;
    pin_ptr<Macad::Occt::Pnt> pp_PS = &PS;
    ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->NearestPoints(*(gp_Pnt*)pp_PC, *(gp_Pnt*)pp_PS);
}

void Macad::Occt::GeomAPI_ExtremaCurveSurface::LowerDistanceParameters(double% W, double% U, double% V)
{
    pin_ptr<double> pp_W = &W;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->LowerDistanceParameters(*(double*)pp_W, *(double*)pp_U, *(double*)pp_V);
}

double Macad::Occt::GeomAPI_ExtremaCurveSurface::LowerDistance()
{
    double _result = ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->LowerDistance();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaSurfaceSurface
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_ExtremaSurfaceSurface::GeomAPI_ExtremaSurfaceSurface()
    : Macad::Occt::BaseClass<::GeomAPI_ExtremaSurfaceSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaSurfaceSurface();
}

Macad::Occt::GeomAPI_ExtremaSurfaceSurface::GeomAPI_ExtremaSurfaceSurface(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2)
    : Macad::Occt::BaseClass<::GeomAPI_ExtremaSurfaceSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaSurfaceSurface(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance));
}

Macad::Occt::GeomAPI_ExtremaSurfaceSurface::GeomAPI_ExtremaSurfaceSurface(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double U1min, double U1max, double V1min, double V1max, double U2min, double U2max, double V2min, double V2max)
    : Macad::Occt::BaseClass<::GeomAPI_ExtremaSurfaceSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ExtremaSurfaceSurface(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), U1min, U1max, V1min, V1max, U2min, U2max, V2min, V2max);
}

void Macad::Occt::GeomAPI_ExtremaSurfaceSurface::Init(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2)
{
    ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Init(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance));
}

void Macad::Occt::GeomAPI_ExtremaSurfaceSurface::Init(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double U1min, double U1max, double V1min, double V1max, double U2min, double U2max, double V2min, double V2max)
{
    ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Init(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), U1min, U1max, V1min, V1max, U2min, U2max, V2min, V2max);
}

int Macad::Occt::GeomAPI_ExtremaSurfaceSurface::NbExtrema()
{
    int _result = ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->NbExtrema();
    return _result;
}

void Macad::Occt::GeomAPI_ExtremaSurfaceSurface::Points(int Index, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Points(Index, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void Macad::Occt::GeomAPI_ExtremaSurfaceSurface::Parameters(int Index, double% U1, double% V1, double% U2, double% V2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_V1 = &V1;
    pin_ptr<double> pp_U2 = &U2;
    pin_ptr<double> pp_V2 = &V2;
    ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Parameters(Index, *(double*)pp_U1, *(double*)pp_V1, *(double*)pp_U2, *(double*)pp_V2);
}

double Macad::Occt::GeomAPI_ExtremaSurfaceSurface::Distance(int Index)
{
    double _result = ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Distance(Index);
    return _result;
}

bool Macad::Occt::GeomAPI_ExtremaSurfaceSurface::IsParallel()
{
    bool _result = ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->IsParallel();
    return _result;
}

void Macad::Occt::GeomAPI_ExtremaSurfaceSurface::NearestPoints(Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->NearestPoints(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void Macad::Occt::GeomAPI_ExtremaSurfaceSurface::LowerDistanceParameters(double% U1, double% V1, double% U2, double% V2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_V1 = &V1;
    pin_ptr<double> pp_U2 = &U2;
    pin_ptr<double> pp_V2 = &V2;
    ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->LowerDistanceParameters(*(double*)pp_U1, *(double*)pp_V1, *(double*)pp_U2, *(double*)pp_V2);
}

double Macad::Occt::GeomAPI_ExtremaSurfaceSurface::LowerDistance()
{
    double _result = ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->LowerDistance();
    return _result;
}

Macad::Occt::Extrema_ExtSS^ Macad::Occt::GeomAPI_ExtremaSurfaceSurface::Extrema()
{
    ::Extrema_ExtSS* _result = new ::Extrema_ExtSS();
    *_result = (::Extrema_ExtSS)((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Extrema();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_ExtSS(_result);
}



//---------------------------------------------------------------------
//  Class  GeomAPI_IntCS
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_IntCS::GeomAPI_IntCS()
    : Macad::Occt::BaseClass<::GeomAPI_IntCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_IntCS();
}

Macad::Occt::GeomAPI_IntCS::GeomAPI_IntCS(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S)
    : Macad::Occt::BaseClass<::GeomAPI_IntCS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_IntCS(Handle(::Geom_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
}

void Macad::Occt::GeomAPI_IntCS::Perform(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S)
{
    ((::GeomAPI_IntCS*)_NativeInstance)->Perform(Handle(::Geom_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
}

bool Macad::Occt::GeomAPI_IntCS::IsDone()
{
    bool _result = ((::GeomAPI_IntCS*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::GeomAPI_IntCS::NbPoints()
{
    int _result = ((::GeomAPI_IntCS*)_NativeInstance)->NbPoints();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::GeomAPI_IntCS::Point(int Index)
{
    ::gp_Pnt _nativeResult = ((::GeomAPI_IntCS*)_NativeInstance)->Point(Index);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::GeomAPI_IntCS::Parameters(int Index, double% U, double% V, double% W)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    pin_ptr<double> pp_W = &W;
    ((::GeomAPI_IntCS*)_NativeInstance)->Parameters(Index, *(double*)pp_U, *(double*)pp_V, *(double*)pp_W);
}

int Macad::Occt::GeomAPI_IntCS::NbSegments()
{
    int _result = ((::GeomAPI_IntCS*)_NativeInstance)->NbSegments();
    return _result;
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomAPI_IntCS::Segment(int Index)
{
    Handle(::Geom_Curve) _result = ((::GeomAPI_IntCS*)_NativeInstance)->Segment(Index);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::GeomAPI_IntCS::Parameters(int Index, double% U1, double% V1, double% U2, double% V2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_V1 = &V1;
    pin_ptr<double> pp_U2 = &U2;
    pin_ptr<double> pp_V2 = &V2;
    ((::GeomAPI_IntCS*)_NativeInstance)->Parameters(Index, *(double*)pp_U1, *(double*)pp_V1, *(double*)pp_U2, *(double*)pp_V2);
}



//---------------------------------------------------------------------
//  Class  GeomAPI_Interpolate
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_Interpolate::GeomAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt^ Points, bool PeriodicFlag, double Tolerance)
    : Macad::Occt::BaseClass<::GeomAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_Interpolate(Handle(::TColgp_HArray1OfPnt)(Points->NativeInstance), PeriodicFlag, Tolerance);
}

Macad::Occt::GeomAPI_Interpolate::GeomAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt^ Points, Macad::Occt::TColStd_HArray1OfReal^ Parameters, bool PeriodicFlag, double Tolerance)
    : Macad::Occt::BaseClass<::GeomAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_Interpolate(Handle(::TColgp_HArray1OfPnt)(Points->NativeInstance), Handle(::TColStd_HArray1OfReal)(Parameters->NativeInstance), PeriodicFlag, Tolerance);
}

void Macad::Occt::GeomAPI_Interpolate::Load(Macad::Occt::Vec InitialTangent, Macad::Occt::Vec FinalTangent, bool Scale)
{
    pin_ptr<Macad::Occt::Vec> pp_InitialTangent = &InitialTangent;
    pin_ptr<Macad::Occt::Vec> pp_FinalTangent = &FinalTangent;
    ((::GeomAPI_Interpolate*)_NativeInstance)->Load(*(gp_Vec*)pp_InitialTangent, *(gp_Vec*)pp_FinalTangent, Scale);
}

void Macad::Occt::GeomAPI_Interpolate::Load(Macad::Occt::Vec InitialTangent, Macad::Occt::Vec FinalTangent)
{
    pin_ptr<Macad::Occt::Vec> pp_InitialTangent = &InitialTangent;
    pin_ptr<Macad::Occt::Vec> pp_FinalTangent = &FinalTangent;
    ((::GeomAPI_Interpolate*)_NativeInstance)->Load(*(gp_Vec*)pp_InitialTangent, *(gp_Vec*)pp_FinalTangent, true);
}

void Macad::Occt::GeomAPI_Interpolate::Load(Macad::Occt::TColgp_Array1OfVec^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags, bool Scale)
{
    ((::GeomAPI_Interpolate*)_NativeInstance)->Load(*(::TColgp_Array1OfVec*)Tangents->NativeInstance, Handle(::TColStd_HArray1OfBoolean)(TangentFlags->NativeInstance), Scale);
}

void Macad::Occt::GeomAPI_Interpolate::Load(Macad::Occt::TColgp_Array1OfVec^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags)
{
    ((::GeomAPI_Interpolate*)_NativeInstance)->Load(*(::TColgp_Array1OfVec*)Tangents->NativeInstance, Handle(::TColStd_HArray1OfBoolean)(TangentFlags->NativeInstance), true);
}

void Macad::Occt::GeomAPI_Interpolate::Perform()
{
    ((::GeomAPI_Interpolate*)_NativeInstance)->Perform();
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomAPI_Interpolate::Curve()
{
    Handle(::Geom_BSplineCurve) _result = ((::GeomAPI_Interpolate*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

bool Macad::Occt::GeomAPI_Interpolate::IsDone()
{
    bool _result = ((::GeomAPI_Interpolate*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomAPI_IntSS
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_IntSS::GeomAPI_IntSS()
    : Macad::Occt::BaseClass<::GeomAPI_IntSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_IntSS();
}

Macad::Occt::GeomAPI_IntSS::GeomAPI_IntSS(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double Tol)
    : Macad::Occt::BaseClass<::GeomAPI_IntSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_IntSS(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), Tol);
}

void Macad::Occt::GeomAPI_IntSS::Perform(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double Tol)
{
    ((::GeomAPI_IntSS*)_NativeInstance)->Perform(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), Tol);
}

bool Macad::Occt::GeomAPI_IntSS::IsDone()
{
    bool _result = ((::GeomAPI_IntSS*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::GeomAPI_IntSS::NbLines()
{
    int _result = ((::GeomAPI_IntSS*)_NativeInstance)->NbLines();
    return _result;
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomAPI_IntSS::Line(int Index)
{
    Handle(::Geom_Curve) _result = ((::GeomAPI_IntSS*)_NativeInstance)->Line(Index);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  GeomAPI_PointsToBSpline
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline()
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline();
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3)
{
    ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomAPI_PointsToBSpline::Curve()
{
    Handle(::Geom_BSplineCurve) _result = ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

bool Macad::Occt::GeomAPI_PointsToBSpline::IsDone()
{
    bool _result = ((::GeomAPI_PointsToBSpline*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomAPI_PointsToBSplineSurface
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface()
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface();
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY)
    : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, 3, 8, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColgp_Array2OfPnt^ Points)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Interpolate(Macad::Occt::TColgp_Array2OfPnt^ Points, bool thePeriodic)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Interpolate(*(::TColgp_Array2OfPnt*)Points->NativeInstance, thePeriodic);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Interpolate(Macad::Occt::TColgp_Array2OfPnt^ Points)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Interpolate(*(::TColgp_Array2OfPnt*)Points->NativeInstance, false);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, 8, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, 3, 8, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Interpolate(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Interpolate(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

void Macad::Occt::GeomAPI_PointsToBSplineSurface::Init(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3)
{
    ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Init(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomAPI_PointsToBSplineSurface::Surface()
{
    Handle(::Geom_BSplineSurface) _result = ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

bool Macad::Occt::GeomAPI_PointsToBSplineSurface::IsDone()
{
    bool _result = ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomAPI_ProjectPointOnCurve
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_ProjectPointOnCurve::GeomAPI_ProjectPointOnCurve()
    : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ProjectPointOnCurve();
}

Macad::Occt::GeomAPI_ProjectPointOnCurve::GeomAPI_ProjectPointOnCurve(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve)
    : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnCurve(*(gp_Pnt*)pp_P, Handle(::Geom_Curve)(Curve->NativeInstance));
}

Macad::Occt::GeomAPI_ProjectPointOnCurve::GeomAPI_ProjectPointOnCurve(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve, double Umin, double Usup)
    : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnCurve(*(gp_Pnt*)pp_P, Handle(::Geom_Curve)(Curve->NativeInstance), Umin, Usup);
}

void Macad::Occt::GeomAPI_ProjectPointOnCurve::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Curve)(Curve->NativeInstance));
}

void Macad::Occt::GeomAPI_ProjectPointOnCurve::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve, double Umin, double Usup)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Curve)(Curve->NativeInstance), Umin, Usup);
}

void Macad::Occt::GeomAPI_ProjectPointOnCurve::Init(Macad::Occt::Geom_Curve^ Curve, double Umin, double Usup)
{
    ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Init(Handle(::Geom_Curve)(Curve->NativeInstance), Umin, Usup);
}

void Macad::Occt::GeomAPI_ProjectPointOnCurve::Perform(Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P);
}

int Macad::Occt::GeomAPI_ProjectPointOnCurve::NbPoints()
{
    int _result = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->NbPoints();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::GeomAPI_ProjectPointOnCurve::Point(int Index)
{
    ::gp_Pnt _nativeResult = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Point(Index);
    return Macad::Occt::Pnt(_nativeResult);
}

double Macad::Occt::GeomAPI_ProjectPointOnCurve::Parameter(int Index)
{
    double _result = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Parameter(Index);
    return _result;
}

void Macad::Occt::GeomAPI_ProjectPointOnCurve::Parameter(int Index, double% U)
{
    pin_ptr<double> pp_U = &U;
    ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Parameter(Index, *(double*)pp_U);
}

double Macad::Occt::GeomAPI_ProjectPointOnCurve::Distance(int Index)
{
    double _result = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Distance(Index);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::GeomAPI_ProjectPointOnCurve::NearestPoint()
{
    ::gp_Pnt _nativeResult = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->NearestPoint();
    return Macad::Occt::Pnt(_nativeResult);
}

double Macad::Occt::GeomAPI_ProjectPointOnCurve::LowerDistanceParameter()
{
    double _result = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->LowerDistanceParameter();
    return _result;
}

double Macad::Occt::GeomAPI_ProjectPointOnCurve::LowerDistance()
{
    double _result = ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->LowerDistance();
    return _result;
}

Macad::Occt::Extrema_ExtPC^ Macad::Occt::GeomAPI_ProjectPointOnCurve::Extrema()
{
    ::Extrema_ExtPC* _result = new ::Extrema_ExtPC();
    *_result = (::Extrema_ExtPC)((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Extrema();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_ExtPC(_result);
}



//---------------------------------------------------------------------
//  Class  GeomAPI_ProjectPointOnSurf
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf()
    : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf();
}

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, Macad::Occt::Extrema_ExtAlgo Algo)
    : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), (::Extrema_ExtAlgo)Algo);
}

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface)
    : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Extrema_ExtAlgo_Grad);
}

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Tolerance, Macad::Occt::Extrema_ExtAlgo Algo)
    : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Tolerance, (::Extrema_ExtAlgo)Algo);
}

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Tolerance)
    : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Tolerance, Extrema_ExtAlgo_Grad);
}

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance, Macad::Occt::Extrema_ExtAlgo Algo)
    : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Tolerance, (::Extrema_ExtAlgo)Algo);
}

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance)
    : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Tolerance, Extrema_ExtAlgo_Grad);
}

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, Macad::Occt::Extrema_ExtAlgo Algo)
    : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, (::Extrema_ExtAlgo)Algo);
}

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup)
    : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Extrema_ExtAlgo_Grad);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Tolerance, Macad::Occt::Extrema_ExtAlgo Algo)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Tolerance, (::Extrema_ExtAlgo)Algo);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Tolerance)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Tolerance, Extrema_ExtAlgo_Grad);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, Macad::Occt::Extrema_ExtAlgo Algo)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), (::Extrema_ExtAlgo)Algo);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Extrema_ExtAlgo_Grad);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance, Macad::Occt::Extrema_ExtAlgo Algo)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Tolerance, (::Extrema_ExtAlgo)Algo);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Tolerance, Extrema_ExtAlgo_Grad);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, Macad::Occt::Extrema_ExtAlgo Algo)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, (::Extrema_ExtAlgo)Algo);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Extrema_ExtAlgo_Grad);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance, Macad::Occt::Extrema_ExtAlgo Algo)
{
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Tolerance, (::Extrema_ExtAlgo)Algo);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance)
{
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Tolerance, Extrema_ExtAlgo_Grad);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, Macad::Occt::Extrema_ExtAlgo Algo)
{
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, (::Extrema_ExtAlgo)Algo);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup)
{
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(Handle(::Geom_Surface)(Surface->NativeInstance), Umin, Usup, Vmin, Vsup, Extrema_ExtAlgo_Grad);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::SetExtremaAlgo(Macad::Occt::Extrema_ExtAlgo theAlgo)
{
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->SetExtremaAlgo((::Extrema_ExtAlgo)theAlgo);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::SetExtremaFlag(Macad::Occt::Extrema_ExtFlag theExtFlag)
{
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->SetExtremaFlag((::Extrema_ExtFlag)theExtFlag);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Perform(Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P);
}

bool Macad::Occt::GeomAPI_ProjectPointOnSurf::IsDone()
{
    bool _result = ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::GeomAPI_ProjectPointOnSurf::NbPoints()
{
    int _result = ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->NbPoints();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::GeomAPI_ProjectPointOnSurf::Point(int Index)
{
    ::gp_Pnt _nativeResult = ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Point(Index);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Parameters(int Index, double% U, double% V)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Parameters(Index, *(double*)pp_U, *(double*)pp_V);
}

double Macad::Occt::GeomAPI_ProjectPointOnSurf::Distance(int Index)
{
    double _result = ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Distance(Index);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::GeomAPI_ProjectPointOnSurf::NearestPoint()
{
    ::gp_Pnt _nativeResult = ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->NearestPoint();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::LowerDistanceParameters(double% U, double% V)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->LowerDistanceParameters(*(double*)pp_U, *(double*)pp_V);
}

double Macad::Occt::GeomAPI_ProjectPointOnSurf::LowerDistance()
{
    double _result = ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->LowerDistance();
    return _result;
}


