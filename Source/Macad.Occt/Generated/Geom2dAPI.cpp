// Generated wrapper code for package Geom2dAPI

#include "OcctPCH.h"
#include "Geom2dAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "gp.h"
#include "Extrema.h"
#include "TColgp.h"
#include "TColStd.h"
#include "GeomAbs.h"


//---------------------------------------------------------------------
//  Class  Geom2dAPI_ExtremaCurveCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dAPI_ExtremaCurveCurve::Geom2dAPI_ExtremaCurveCurve(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double U1min, double U1max, double U2min, double U2max)
    : Macad::Occt::BaseClass<::Geom2dAPI_ExtremaCurveCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_ExtremaCurveCurve(Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance), U1min, U1max, U2min, U2max);
}

int Macad::Occt::Geom2dAPI_ExtremaCurveCurve::NbExtrema()
{
    int _result = ((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->NbExtrema();
    return _result;
}

void Macad::Occt::Geom2dAPI_ExtremaCurveCurve::Points(int Index, Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    ((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->Points(Index, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void Macad::Occt::Geom2dAPI_ExtremaCurveCurve::Parameters(int Index, double% U1, double% U2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_U2 = &U2;
    ((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->Parameters(Index, *(double*)pp_U1, *(double*)pp_U2);
}

double Macad::Occt::Geom2dAPI_ExtremaCurveCurve::Distance(int Index)
{
    double _result = ((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->Distance(Index);
    return _result;
}

void Macad::Occt::Geom2dAPI_ExtremaCurveCurve::NearestPoints(Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    ((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->NearestPoints(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void Macad::Occt::Geom2dAPI_ExtremaCurveCurve::LowerDistanceParameters(double% U1, double% U2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_U2 = &U2;
    ((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->LowerDistanceParameters(*(double*)pp_U1, *(double*)pp_U2);
}

double Macad::Occt::Geom2dAPI_ExtremaCurveCurve::LowerDistance()
{
    double _result = ((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->LowerDistance();
    return _result;
}

Macad::Occt::Extrema_ExtCC2d^ Macad::Occt::Geom2dAPI_ExtremaCurveCurve::Extrema()
{
    ::Extrema_ExtCC2d* _result = new ::Extrema_ExtCC2d();
    *_result = (::Extrema_ExtCC2d)((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->Extrema();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_ExtCC2d(_result);
}



//---------------------------------------------------------------------
//  Class  Geom2dAPI_InterCurveCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve()
    : Macad::Occt::BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_InterCurveCurve();
}

Macad::Occt::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double Tol)
    : Macad::Occt::BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_InterCurveCurve(Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance), Tol);
}

Macad::Occt::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2)
    : Macad::Occt::BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_InterCurveCurve(Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance), 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1, double Tol)
    : Macad::Occt::BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_InterCurveCurve(Handle(::Geom2d_Curve)(C1->NativeInstance), Tol);
}

Macad::Occt::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1)
    : Macad::Occt::BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_InterCurveCurve(Handle(::Geom2d_Curve)(C1->NativeInstance), 9.9999999999999995E-7);
}

void Macad::Occt::Geom2dAPI_InterCurveCurve::Init(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double Tol)
{
    ((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance), Tol);
}

void Macad::Occt::Geom2dAPI_InterCurveCurve::Init(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2)
{
    ((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance), 9.9999999999999995E-7);
}

void Macad::Occt::Geom2dAPI_InterCurveCurve::Init(Macad::Occt::Geom2d_Curve^ C1, double Tol)
{
    ((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C1->NativeInstance), Tol);
}

void Macad::Occt::Geom2dAPI_InterCurveCurve::Init(Macad::Occt::Geom2d_Curve^ C1)
{
    ((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C1->NativeInstance), 9.9999999999999995E-7);
}

int Macad::Occt::Geom2dAPI_InterCurveCurve::NbPoints()
{
    int _result = ((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->NbPoints();
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::Geom2dAPI_InterCurveCurve::Point(int Index)
{
    ::gp_Pnt2d _nativeResult = ((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Point(Index);
    return Macad::Occt::Pnt2d(_nativeResult);
}

int Macad::Occt::Geom2dAPI_InterCurveCurve::NbSegments()
{
    int _result = ((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->NbSegments();
    return _result;
}

void Macad::Occt::Geom2dAPI_InterCurveCurve::Segment(int Index, Macad::Occt::Geom2d_Curve^ Curve1, Macad::Occt::Geom2d_Curve^ Curve2)
{
    Handle(::Geom2d_Curve) h_Curve1 = Curve1->NativeInstance;
    Handle(::Geom2d_Curve) h_Curve2 = Curve2->NativeInstance;
    ((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Segment(Index, h_Curve1, h_Curve2);
    Curve1->NativeInstance = h_Curve1.get();
    Curve2->NativeInstance = h_Curve2.get();
}



//---------------------------------------------------------------------
//  Class  Geom2dAPI_Interpolate
//---------------------------------------------------------------------

Macad::Occt::Geom2dAPI_Interpolate::Geom2dAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt2d^ Points, bool PeriodicFlag, double Tolerance)
    : Macad::Occt::BaseClass<::Geom2dAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_Interpolate(Handle(::TColgp_HArray1OfPnt2d)(Points->NativeInstance), PeriodicFlag, Tolerance);
}

Macad::Occt::Geom2dAPI_Interpolate::Geom2dAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt2d^ Points, Macad::Occt::TColStd_HArray1OfReal^ Parameters, bool PeriodicFlag, double Tolerance)
    : Macad::Occt::BaseClass<::Geom2dAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_Interpolate(Handle(::TColgp_HArray1OfPnt2d)(Points->NativeInstance), Handle(::TColStd_HArray1OfReal)(Parameters->NativeInstance), PeriodicFlag, Tolerance);
}

void Macad::Occt::Geom2dAPI_Interpolate::Load(Macad::Occt::Vec2d InitialTangent, Macad::Occt::Vec2d FinalTangent, bool Scale)
{
    pin_ptr<Macad::Occt::Vec2d> pp_InitialTangent = &InitialTangent;
    pin_ptr<Macad::Occt::Vec2d> pp_FinalTangent = &FinalTangent;
    ((::Geom2dAPI_Interpolate*)_NativeInstance)->Load(*(gp_Vec2d*)pp_InitialTangent, *(gp_Vec2d*)pp_FinalTangent, Scale);
}

void Macad::Occt::Geom2dAPI_Interpolate::Load(Macad::Occt::Vec2d InitialTangent, Macad::Occt::Vec2d FinalTangent)
{
    pin_ptr<Macad::Occt::Vec2d> pp_InitialTangent = &InitialTangent;
    pin_ptr<Macad::Occt::Vec2d> pp_FinalTangent = &FinalTangent;
    ((::Geom2dAPI_Interpolate*)_NativeInstance)->Load(*(gp_Vec2d*)pp_InitialTangent, *(gp_Vec2d*)pp_FinalTangent, true);
}

void Macad::Occt::Geom2dAPI_Interpolate::Load(Macad::Occt::TColgp_Array1OfVec2d^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags, bool Scale)
{
    ((::Geom2dAPI_Interpolate*)_NativeInstance)->Load(*(::TColgp_Array1OfVec2d*)Tangents->NativeInstance, Handle(::TColStd_HArray1OfBoolean)(TangentFlags->NativeInstance), Scale);
}

void Macad::Occt::Geom2dAPI_Interpolate::Load(Macad::Occt::TColgp_Array1OfVec2d^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags)
{
    ((::Geom2dAPI_Interpolate*)_NativeInstance)->Load(*(::TColgp_Array1OfVec2d*)Tangents->NativeInstance, Handle(::TColStd_HArray1OfBoolean)(TangentFlags->NativeInstance), true);
}

void Macad::Occt::Geom2dAPI_Interpolate::Perform()
{
    ((::Geom2dAPI_Interpolate*)_NativeInstance)->Perform();
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dAPI_Interpolate::Curve()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::Geom2dAPI_Interpolate*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

bool Macad::Occt::Geom2dAPI_Interpolate::IsDone()
{
    bool _result = ((::Geom2dAPI_Interpolate*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Geom2dAPI_PointsToBSpline
//---------------------------------------------------------------------

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline()
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline();
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, 3, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, GeomAbs_C2, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, 3, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3)
    : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 9.9999999999999995E-7);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 9.9999999999999995E-7);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, 3, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 9.9999999999999995E-7);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, GeomAbs_C2, 9.9999999999999995E-7);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, 3, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

void Macad::Occt::Geom2dAPI_PointsToBSpline::Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3)
{
    ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Init(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dAPI_PointsToBSpline::Curve()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

bool Macad::Occt::Geom2dAPI_PointsToBSpline::IsDone()
{
    bool _result = ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Geom2dAPI_ProjectPointOnCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Geom2dAPI_ProjectPointOnCurve()
    : Macad::Occt::BaseClass<::Geom2dAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dAPI_ProjectPointOnCurve();
}

Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Geom2dAPI_ProjectPointOnCurve(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve)
    : Macad::Occt::BaseClass<::Geom2dAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    _NativeInstance = new ::Geom2dAPI_ProjectPointOnCurve(*(gp_Pnt2d*)pp_P, Handle(::Geom2d_Curve)(Curve->NativeInstance));
}

Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Geom2dAPI_ProjectPointOnCurve(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve, double Umin, double Usup)
    : Macad::Occt::BaseClass<::Geom2dAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    _NativeInstance = new ::Geom2dAPI_ProjectPointOnCurve(*(gp_Pnt2d*)pp_P, Handle(::Geom2d_Curve)(Curve->NativeInstance), Umin, Usup);
}

void Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Init(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_P, Handle(::Geom2d_Curve)(Curve->NativeInstance));
}

void Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Init(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve, double Umin, double Usup)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_P, Handle(::Geom2d_Curve)(Curve->NativeInstance), Umin, Usup);
}

int Macad::Occt::Geom2dAPI_ProjectPointOnCurve::NbPoints()
{
    int _result = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->NbPoints();
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Point(int Index)
{
    ::gp_Pnt2d _nativeResult = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Point(Index);
    return Macad::Occt::Pnt2d(_nativeResult);
}

double Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Parameter(int Index)
{
    double _result = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Parameter(Index);
    return _result;
}

void Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Parameter(int Index, double% U)
{
    pin_ptr<double> pp_U = &U;
    ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Parameter(Index, *(double*)pp_U);
}

double Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Distance(int Index)
{
    double _result = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Distance(Index);
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::Geom2dAPI_ProjectPointOnCurve::NearestPoint()
{
    ::gp_Pnt2d _nativeResult = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->NearestPoint();
    return Macad::Occt::Pnt2d(_nativeResult);
}

double Macad::Occt::Geom2dAPI_ProjectPointOnCurve::LowerDistanceParameter()
{
    double _result = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->LowerDistanceParameter();
    return _result;
}

double Macad::Occt::Geom2dAPI_ProjectPointOnCurve::LowerDistance()
{
    double _result = ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->LowerDistance();
    return _result;
}

Macad::Occt::Extrema_ExtPC2d^ Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Extrema()
{
    ::Extrema_ExtPC2d* _result = new ::Extrema_ExtPC2d();
    *_result = (::Extrema_ExtPC2d)((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Extrema();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_ExtPC2d(_result);
}


