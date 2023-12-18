// Generated wrapper code for package GeomConvert

#include "OcctPCH.h"
#include "GeomConvert.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "Convert.h"
#include "TColStd.h"
#include "GeomAbs.h"
#include "Adaptor3d.h"
#include "TColgp.h"
#include "gp.h"
#include "Geom2d.h"


//---------------------------------------------------------------------
//  Class  GeomConvert
//---------------------------------------------------------------------

Macad::Occt::GeomConvert::GeomConvert()
    : Macad::Occt::BaseClass<::GeomConvert>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert();
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert::SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, int FromK1, int ToK2, bool SameOrientation)
{
    Handle(::Geom_BSplineCurve) _result = ::GeomConvert::SplitBSplineCurve(Handle(::Geom_BSplineCurve)(C->NativeInstance), FromK1, ToK2, SameOrientation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert::SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, int FromK1, int ToK2)
{
    Handle(::Geom_BSplineCurve) _result = ::GeomConvert::SplitBSplineCurve(Handle(::Geom_BSplineCurve)(C->NativeInstance), FromK1, ToK2, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert::SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance, bool SameOrientation)
{
    Handle(::Geom_BSplineCurve) _result = ::GeomConvert::SplitBSplineCurve(Handle(::Geom_BSplineCurve)(C->NativeInstance), FromU1, ToU2, ParametricTolerance, SameOrientation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert::SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance)
{
    Handle(::Geom_BSplineCurve) _result = ::GeomConvert::SplitBSplineCurve(Handle(::Geom_BSplineCurve)(C->NativeInstance), FromU1, ToU2, ParametricTolerance, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2, bool SameUOrientation, bool SameVOrientation)
{
    Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromUK1, ToUK2, FromVK1, ToVK2, SameUOrientation, SameVOrientation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2, bool SameUOrientation)
{
    Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromUK1, ToUK2, FromVK1, ToVK2, SameUOrientation, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2)
{
    Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromUK1, ToUK2, FromVK1, ToVK2, true, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromK1, int ToK2, bool USplit, bool SameOrientation)
{
    Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromK1, ToK2, USplit, SameOrientation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromK1, int ToK2, bool USplit)
{
    Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromK1, ToK2, USplit, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance, bool SameUOrientation, bool SameVOrientation)
{
    Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromU1, ToU2, FromV1, ToV2, ParametricTolerance, SameUOrientation, SameVOrientation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance, bool SameUOrientation)
{
    Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromU1, ToU2, FromV1, ToV2, ParametricTolerance, SameUOrientation, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance)
{
    Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromU1, ToU2, FromV1, ToV2, ParametricTolerance, true, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromParam1, double ToParam2, bool USplit, double ParametricTolerance, bool SameOrientation)
{
    Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromParam1, ToParam2, USplit, ParametricTolerance, SameOrientation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromParam1, double ToParam2, bool USplit, double ParametricTolerance)
{
    Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SplitBSplineSurface(Handle(::Geom_BSplineSurface)(S->NativeInstance), FromParam1, ToParam2, USplit, ParametricTolerance, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert::CurveToBSplineCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::Convert_ParameterisationType Parameterisation)
{
    Handle(::Geom_BSplineCurve) _result = ::GeomConvert::CurveToBSplineCurve(Handle(::Geom_Curve)(C->NativeInstance), (::Convert_ParameterisationType)Parameterisation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert::CurveToBSplineCurve(Macad::Occt::Geom_Curve^ C)
{
    Handle(::Geom_BSplineCurve) _result = ::GeomConvert::CurveToBSplineCurve(Handle(::Geom_Curve)(C->NativeInstance), Convert_TgtThetaOver2);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SurfaceToBSplineSurface(Macad::Occt::Geom_Surface^ S)
{
    Handle(::Geom_BSplineSurface) _result = ::GeomConvert::SurfaceToBSplineSurface(Handle(::Geom_Surface)(S->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

void Macad::Occt::GeomConvert::C0BSplineToC1BSplineCurve(Macad::Occt::Geom_BSplineCurve^ BS, double tolerance, double AngularTolerance)
{
    Handle(::Geom_BSplineCurve) h_BS = BS->NativeInstance;
    ::GeomConvert::C0BSplineToC1BSplineCurve(h_BS, tolerance, AngularTolerance);
    BS->NativeInstance = h_BS.get();
}

void Macad::Occt::GeomConvert::C0BSplineToC1BSplineCurve(Macad::Occt::Geom_BSplineCurve^ BS, double tolerance)
{
    Handle(::Geom_BSplineCurve) h_BS = BS->NativeInstance;
    ::GeomConvert::C0BSplineToC1BSplineCurve(h_BS, tolerance, 9.9999999999999995E-8);
    BS->NativeInstance = h_BS.get();
}



//---------------------------------------------------------------------
//  Class  GeomConvert_ApproxCurve
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_ApproxCurve::GeomConvert_ApproxCurve(Macad::Occt::Geom_Curve^ Curve, double Tol3d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree)
    : Macad::Occt::BaseClass<::GeomConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_ApproxCurve(Handle(::Geom_Curve)(Curve->NativeInstance), Tol3d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
}

Macad::Occt::GeomConvert_ApproxCurve::GeomConvert_ApproxCurve(Macad::Occt::Adaptor3d_Curve^ Curve, double Tol3d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree)
    : Macad::Occt::BaseClass<::GeomConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_ApproxCurve(Handle(::Adaptor3d_Curve)(Curve->NativeInstance), Tol3d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert_ApproxCurve::Curve()
{
    Handle(::Geom_BSplineCurve) _result = ((::GeomConvert_ApproxCurve*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

bool Macad::Occt::GeomConvert_ApproxCurve::IsDone()
{
    bool _result = ((::GeomConvert_ApproxCurve*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::GeomConvert_ApproxCurve::HasResult()
{
    bool _result = ((::GeomConvert_ApproxCurve*)_NativeInstance)->HasResult();
    return _result;
}

double Macad::Occt::GeomConvert_ApproxCurve::MaxError()
{
    double _result = ((::GeomConvert_ApproxCurve*)_NativeInstance)->MaxError();
    return _result;
}

void Macad::Occt::GeomConvert_ApproxCurve::Dump(System::IO::TextWriter^ o)
{
    std::ostringstream oss_o;
    ((::GeomConvert_ApproxCurve*)_NativeInstance)->Dump(oss_o);
    o->Write(gcnew System::String(oss_o.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  GeomConvert_ApproxSurface
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_ApproxSurface::GeomConvert_ApproxSurface(Macad::Occt::Geom_Surface^ Surf, double Tol3d, Macad::Occt::GeomAbs_Shape UContinuity, Macad::Occt::GeomAbs_Shape VContinuity, int MaxDegU, int MaxDegV, int MaxSegments, int PrecisCode)
    : Macad::Occt::BaseClass<::GeomConvert_ApproxSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_ApproxSurface(Handle(::Geom_Surface)(Surf->NativeInstance), Tol3d, (::GeomAbs_Shape)UContinuity, (::GeomAbs_Shape)VContinuity, MaxDegU, MaxDegV, MaxSegments, PrecisCode);
}

Macad::Occt::GeomConvert_ApproxSurface::GeomConvert_ApproxSurface(Macad::Occt::Adaptor3d_Surface^ Surf, double Tol3d, Macad::Occt::GeomAbs_Shape UContinuity, Macad::Occt::GeomAbs_Shape VContinuity, int MaxDegU, int MaxDegV, int MaxSegments, int PrecisCode)
    : Macad::Occt::BaseClass<::GeomConvert_ApproxSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_ApproxSurface(Handle(::Adaptor3d_Surface)(Surf->NativeInstance), Tol3d, (::GeomAbs_Shape)UContinuity, (::GeomAbs_Shape)VContinuity, MaxDegU, MaxDegV, MaxSegments, PrecisCode);
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert_ApproxSurface::Surface()
{
    Handle(::Geom_BSplineSurface) _result = ((::GeomConvert_ApproxSurface*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

bool Macad::Occt::GeomConvert_ApproxSurface::IsDone()
{
    bool _result = ((::GeomConvert_ApproxSurface*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::GeomConvert_ApproxSurface::HasResult()
{
    bool _result = ((::GeomConvert_ApproxSurface*)_NativeInstance)->HasResult();
    return _result;
}

double Macad::Occt::GeomConvert_ApproxSurface::MaxError()
{
    double _result = ((::GeomConvert_ApproxSurface*)_NativeInstance)->MaxError();
    return _result;
}

void Macad::Occt::GeomConvert_ApproxSurface::Dump(System::IO::TextWriter^ o)
{
    std::ostringstream oss_o;
    ((::GeomConvert_ApproxSurface*)_NativeInstance)->Dump(oss_o);
    o->Write(gcnew System::String(oss_o.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineCurveKnotSplitting
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_BSplineCurveKnotSplitting::GeomConvert_BSplineCurveKnotSplitting(Macad::Occt::Geom_BSplineCurve^ BasisCurve, int ContinuityRange)
    : Macad::Occt::BaseClass<::GeomConvert_BSplineCurveKnotSplitting>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_BSplineCurveKnotSplitting(Handle(::Geom_BSplineCurve)(BasisCurve->NativeInstance), ContinuityRange);
}

int Macad::Occt::GeomConvert_BSplineCurveKnotSplitting::NbSplits()
{
    int _result = ((::GeomConvert_BSplineCurveKnotSplitting*)_NativeInstance)->NbSplits();
    return _result;
}

void Macad::Occt::GeomConvert_BSplineCurveKnotSplitting::Splitting(Macad::Occt::TColStd_Array1OfInteger^ SplitValues)
{
    ((::GeomConvert_BSplineCurveKnotSplitting*)_NativeInstance)->Splitting(*(::TColStd_Array1OfInteger*)SplitValues->NativeInstance);
}

int Macad::Occt::GeomConvert_BSplineCurveKnotSplitting::SplitValue(int Index)
{
    int _result = ((::GeomConvert_BSplineCurveKnotSplitting*)_NativeInstance)->SplitValue(Index);
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineCurveToBezierCurve
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_BSplineCurveToBezierCurve::GeomConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom_BSplineCurve^ BasisCurve)
    : Macad::Occt::BaseClass<::GeomConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_BSplineCurveToBezierCurve(Handle(::Geom_BSplineCurve)(BasisCurve->NativeInstance));
}

Macad::Occt::GeomConvert_BSplineCurveToBezierCurve::GeomConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom_BSplineCurve^ BasisCurve, double U1, double U2, double ParametricTolerance)
    : Macad::Occt::BaseClass<::GeomConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_BSplineCurveToBezierCurve(Handle(::Geom_BSplineCurve)(BasisCurve->NativeInstance), U1, U2, ParametricTolerance);
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::GeomConvert_BSplineCurveToBezierCurve::Arc(int Index)
{
    Handle(::Geom_BezierCurve) _result = ((::GeomConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Arc(Index);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted(_result.get());
}

void Macad::Occt::GeomConvert_BSplineCurveToBezierCurve::Knots(Macad::Occt::TColStd_Array1OfReal^ TKnots)
{
    ((::GeomConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Knots(*(::TColStd_Array1OfReal*)TKnots->NativeInstance);
}

int Macad::Occt::GeomConvert_BSplineCurveToBezierCurve::NbArcs()
{
    int _result = ((::GeomConvert_BSplineCurveToBezierCurve*)_NativeInstance)->NbArcs();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineSurfaceKnotSplitting
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting::GeomConvert_BSplineSurfaceKnotSplitting(Macad::Occt::Geom_BSplineSurface^ BasisSurface, int UContinuityRange, int VContinuityRange)
    : Macad::Occt::BaseClass<::GeomConvert_BSplineSurfaceKnotSplitting>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_BSplineSurfaceKnotSplitting(Handle(::Geom_BSplineSurface)(BasisSurface->NativeInstance), UContinuityRange, VContinuityRange);
}

int Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting::NbUSplits()
{
    int _result = ((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->NbUSplits();
    return _result;
}

int Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting::NbVSplits()
{
    int _result = ((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->NbVSplits();
    return _result;
}

void Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting::Splitting(Macad::Occt::TColStd_Array1OfInteger^ USplit, Macad::Occt::TColStd_Array1OfInteger^ VSplit)
{
    ((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->Splitting(*(::TColStd_Array1OfInteger*)USplit->NativeInstance, *(::TColStd_Array1OfInteger*)VSplit->NativeInstance);
}

int Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting::USplitValue(int UIndex)
{
    int _result = ((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->USplitValue(UIndex);
    return _result;
}

int Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting::VSplitValue(int VIndex)
{
    int _result = ((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->VSplitValue(VIndex);
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineSurfaceToBezierSurface
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface::GeomConvert_BSplineSurfaceToBezierSurface(Macad::Occt::Geom_BSplineSurface^ BasisSurface)
    : Macad::Occt::BaseClass<::GeomConvert_BSplineSurfaceToBezierSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_BSplineSurfaceToBezierSurface(Handle(::Geom_BSplineSurface)(BasisSurface->NativeInstance));
}

Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface::GeomConvert_BSplineSurfaceToBezierSurface(Macad::Occt::Geom_BSplineSurface^ BasisSurface, double U1, double U2, double V1, double V2, double ParametricTolerance)
    : Macad::Occt::BaseClass<::GeomConvert_BSplineSurfaceToBezierSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_BSplineSurfaceToBezierSurface(Handle(::Geom_BSplineSurface)(BasisSurface->NativeInstance), U1, U2, V1, V2, ParametricTolerance);
}

Macad::Occt::Geom_BezierSurface^ Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface::Patch(int UIndex, int VIndex)
{
    Handle(::Geom_BezierSurface) _result = ((::GeomConvert_BSplineSurfaceToBezierSurface*)_NativeInstance)->Patch(UIndex, VIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierSurface::CreateDowncasted(_result.get());
}

void Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface::UKnots(Macad::Occt::TColStd_Array1OfReal^ TKnots)
{
    ((::GeomConvert_BSplineSurfaceToBezierSurface*)_NativeInstance)->UKnots(*(::TColStd_Array1OfReal*)TKnots->NativeInstance);
}

void Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface::VKnots(Macad::Occt::TColStd_Array1OfReal^ TKnots)
{
    ((::GeomConvert_BSplineSurfaceToBezierSurface*)_NativeInstance)->VKnots(*(::TColStd_Array1OfReal*)TKnots->NativeInstance);
}

int Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface::NbUPatches()
{
    int _result = ((::GeomConvert_BSplineSurfaceToBezierSurface*)_NativeInstance)->NbUPatches();
    return _result;
}

int Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface::NbVPatches()
{
    int _result = ((::GeomConvert_BSplineSurfaceToBezierSurface*)_NativeInstance)->NbVPatches();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomConvert_CompBezierSurfacesToBSplineSurface
//---------------------------------------------------------------------

int Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::NbUKnots()
{
    int _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->NbUKnots();
    return _result;
}

int Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::NbUPoles()
{
    int _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->NbUPoles();
    return _result;
}

int Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::NbVKnots()
{
    int _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->NbVKnots();
    return _result;
}

int Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::NbVPoles()
{
    int _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->NbVPoles();
    return _result;
}

Macad::Occt::TColgp_HArray2OfPnt^ Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::Poles()
{
    Handle(::TColgp_HArray2OfPnt) _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->Poles();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray2OfPnt::CreateDowncasted(_result.get());
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::UKnots()
{
    Handle(::TColStd_HArray1OfReal) _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->UKnots();
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted(_result.get());
}

int Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::UDegree()
{
    int _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->UDegree();
    return _result;
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::VKnots()
{
    Handle(::TColStd_HArray1OfReal) _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->VKnots();
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted(_result.get());
}

int Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::VDegree()
{
    int _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->VDegree();
    return _result;
}

Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::UMultiplicities()
{
    Handle(::TColStd_HArray1OfInteger) _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->UMultiplicities();
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfInteger::CreateDowncasted(_result.get());
}

Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::VMultiplicities()
{
    Handle(::TColStd_HArray1OfInteger) _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->VMultiplicities();
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfInteger::CreateDowncasted(_result.get());
}

bool Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::IsDone()
{
    bool _result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomConvert_CompCurveToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_CompCurveToBSplineCurve::GeomConvert_CompCurveToBSplineCurve(Macad::Occt::Convert_ParameterisationType Parameterisation)
    : Macad::Occt::BaseClass<::GeomConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_CompCurveToBSplineCurve((::Convert_ParameterisationType)Parameterisation);
}

Macad::Occt::GeomConvert_CompCurveToBSplineCurve::GeomConvert_CompCurveToBSplineCurve()
    : Macad::Occt::BaseClass<::GeomConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_CompCurveToBSplineCurve(Convert_TgtThetaOver2);
}

Macad::Occt::GeomConvert_CompCurveToBSplineCurve::GeomConvert_CompCurveToBSplineCurve(Macad::Occt::Geom_BoundedCurve^ BasisCurve, Macad::Occt::Convert_ParameterisationType Parameterisation)
    : Macad::Occt::BaseClass<::GeomConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_CompCurveToBSplineCurve(Handle(::Geom_BoundedCurve)(BasisCurve->NativeInstance), (::Convert_ParameterisationType)Parameterisation);
}

Macad::Occt::GeomConvert_CompCurveToBSplineCurve::GeomConvert_CompCurveToBSplineCurve(Macad::Occt::Geom_BoundedCurve^ BasisCurve)
    : Macad::Occt::BaseClass<::GeomConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_CompCurveToBSplineCurve(Handle(::Geom_BoundedCurve)(BasisCurve->NativeInstance), Convert_TgtThetaOver2);
}

bool Macad::Occt::GeomConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After, bool WithRatio, int MinM)
{
    bool _result = ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom_BoundedCurve)(NewCurve->NativeInstance), Tolerance, After, WithRatio, MinM);
    return _result;
}

bool Macad::Occt::GeomConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After, bool WithRatio)
{
    bool _result = ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom_BoundedCurve)(NewCurve->NativeInstance), Tolerance, After, WithRatio, 0);
    return _result;
}

bool Macad::Occt::GeomConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After)
{
    bool _result = ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom_BoundedCurve)(NewCurve->NativeInstance), Tolerance, After, true, 0);
    return _result;
}

bool Macad::Occt::GeomConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance)
{
    bool _result = ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom_BoundedCurve)(NewCurve->NativeInstance), Tolerance, false, true, 0);
    return _result;
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert_CompCurveToBSplineCurve::BSplineCurve()
{
    Handle(::Geom_BSplineCurve) _result = ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->BSplineCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

void Macad::Occt::GeomConvert_CompCurveToBSplineCurve::Clear()
{
    ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Clear();
}



//---------------------------------------------------------------------
//  Class  GeomConvert_CurveToAnaCurve
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_CurveToAnaCurve::GeomConvert_CurveToAnaCurve()
    : Macad::Occt::BaseClass<::GeomConvert_CurveToAnaCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_CurveToAnaCurve();
}

Macad::Occt::GeomConvert_CurveToAnaCurve::GeomConvert_CurveToAnaCurve(Macad::Occt::Geom_Curve^ C)
    : Macad::Occt::BaseClass<::GeomConvert_CurveToAnaCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_CurveToAnaCurve(Handle(::Geom_Curve)(C->NativeInstance));
}

void Macad::Occt::GeomConvert_CurveToAnaCurve::Init(Macad::Occt::Geom_Curve^ C)
{
    ((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance));
}

bool Macad::Occt::GeomConvert_CurveToAnaCurve::ConvertToAnalytical(double theTol, Macad::Occt::Geom_Curve^ theResultCurve, double F, double L, double% newF, double% newL)
{
    Handle(::Geom_Curve) h_theResultCurve = theResultCurve->NativeInstance;
    pin_ptr<double> pp_newF = &newF;
    pin_ptr<double> pp_newL = &newL;
    bool _result = ((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->ConvertToAnalytical(theTol, h_theResultCurve, F, L, *(double*)pp_newF, *(double*)pp_newL);
    theResultCurve->NativeInstance = h_theResultCurve.get();
    return _result;
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomConvert_CurveToAnaCurve::ComputeCurve(Macad::Occt::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% theGap, Macad::Occt::GeomConvert_ConvType theCurvType, Macad::Occt::GeomAbs_CurveType theTarget)
{
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    pin_ptr<double> pp_theGap = &theGap;
    Handle(::Geom_Curve) _result = ::GeomConvert_CurveToAnaCurve::ComputeCurve(Handle(::Geom_Curve)(curve->NativeInstance), tolerance, c1, c2, *(double*)pp_cf, *(double*)pp_cl, *(double*)pp_theGap, (::GeomConvert_ConvType)theCurvType, (::GeomAbs_CurveType)theTarget);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomConvert_CurveToAnaCurve::ComputeCurve(Macad::Occt::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% theGap, Macad::Occt::GeomConvert_ConvType theCurvType)
{
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    pin_ptr<double> pp_theGap = &theGap;
    Handle(::Geom_Curve) _result = ::GeomConvert_CurveToAnaCurve::ComputeCurve(Handle(::Geom_Curve)(curve->NativeInstance), tolerance, c1, c2, *(double*)pp_cf, *(double*)pp_cl, *(double*)pp_theGap, (::GeomConvert_ConvType)theCurvType, GeomAbs_Line);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomConvert_CurveToAnaCurve::ComputeCurve(Macad::Occt::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% theGap)
{
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    pin_ptr<double> pp_theGap = &theGap;
    Handle(::Geom_Curve) _result = ::GeomConvert_CurveToAnaCurve::ComputeCurve(Handle(::Geom_Curve)(curve->NativeInstance), tolerance, c1, c2, *(double*)pp_cf, *(double*)pp_cl, *(double*)pp_theGap, GeomConvert_MinGap, GeomAbs_Line);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomConvert_CurveToAnaCurve::ComputeCircle(Macad::Occt::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% Deviation)
{
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    pin_ptr<double> pp_Deviation = &Deviation;
    Handle(::Geom_Curve) _result = ::GeomConvert_CurveToAnaCurve::ComputeCircle(Handle(::Geom_Curve)(curve->NativeInstance), tolerance, c1, c2, *(double*)pp_cf, *(double*)pp_cl, *(double*)pp_Deviation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomConvert_CurveToAnaCurve::ComputeEllipse(Macad::Occt::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% Deviation)
{
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    pin_ptr<double> pp_Deviation = &Deviation;
    Handle(::Geom_Curve) _result = ::GeomConvert_CurveToAnaCurve::ComputeEllipse(Handle(::Geom_Curve)(curve->NativeInstance), tolerance, c1, c2, *(double*)pp_cf, *(double*)pp_cl, *(double*)pp_Deviation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Line^ Macad::Occt::GeomConvert_CurveToAnaCurve::ComputeLine(Macad::Occt::Geom_Curve^ curve, double tolerance, double c1, double c2, double% cf, double% cl, double% Deviation)
{
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    pin_ptr<double> pp_Deviation = &Deviation;
    Handle(::Geom_Line) _result = ::GeomConvert_CurveToAnaCurve::ComputeLine(Handle(::Geom_Curve)(curve->NativeInstance), tolerance, c1, c2, *(double*)pp_cf, *(double*)pp_cl, *(double*)pp_Deviation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Line::CreateDowncasted(_result.get());
}

bool Macad::Occt::GeomConvert_CurveToAnaCurve::IsLinear(Macad::Occt::TColgp_Array1OfPnt^ aPoints, double tolerance, double% Deviation)
{
    pin_ptr<double> pp_Deviation = &Deviation;
    bool _result = ::GeomConvert_CurveToAnaCurve::IsLinear(*(::TColgp_Array1OfPnt*)aPoints->NativeInstance, tolerance, *(double*)pp_Deviation);
    return _result;
}

Macad::Occt::gp_Lin^ Macad::Occt::GeomConvert_CurveToAnaCurve::GetLine(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double% cf, double% cl)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    *_result = ::GeomConvert_CurveToAnaCurve::GetLine(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(double*)pp_cf, *(double*)pp_cl);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

bool Macad::Occt::GeomConvert_CurveToAnaCurve::GetCircle(Macad::Occt::gp_Circ^ Circ, Macad::Occt::Pnt P0, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P0 = &P0;
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    bool _result = ::GeomConvert_CurveToAnaCurve::GetCircle(*(::gp_Circ*)Circ->NativeInstance, *(gp_Pnt*)pp_P0, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
    return _result;
}

double Macad::Occt::GeomConvert_CurveToAnaCurve::Gap()
{
    double _result = ((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->Gap();
    return _result;
}

Macad::Occt::GeomConvert_ConvType Macad::Occt::GeomConvert_CurveToAnaCurve::GetConvType()
{
    ::GeomConvert_ConvType _result = ((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->GetConvType();
    return (Macad::Occt::GeomConvert_ConvType)_result;
}

void Macad::Occt::GeomConvert_CurveToAnaCurve::SetConvType(Macad::Occt::GeomConvert_ConvType theConvType)
{
    ((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->SetConvType((::GeomConvert_ConvType)theConvType);
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::GeomConvert_CurveToAnaCurve::GetTarget()
{
    ::GeomAbs_CurveType _result = ((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->GetTarget();
    return (Macad::Occt::GeomAbs_CurveType)_result;
}

void Macad::Occt::GeomConvert_CurveToAnaCurve::SetTarget(Macad::Occt::GeomAbs_CurveType theTarget)
{
    ((::GeomConvert_CurveToAnaCurve*)_NativeInstance)->SetTarget((::GeomAbs_CurveType)theTarget);
}



//---------------------------------------------------------------------
//  Class  GeomConvert_SurfToAnaSurf
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_SurfToAnaSurf::GeomConvert_SurfToAnaSurf()
    : Macad::Occt::BaseClass<::GeomConvert_SurfToAnaSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_SurfToAnaSurf();
}

Macad::Occt::GeomConvert_SurfToAnaSurf::GeomConvert_SurfToAnaSurf(Macad::Occt::Geom_Surface^ S)
    : Macad::Occt::BaseClass<::GeomConvert_SurfToAnaSurf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_SurfToAnaSurf(Handle(::Geom_Surface)(S->NativeInstance));
}

void Macad::Occt::GeomConvert_SurfToAnaSurf::Init(Macad::Occt::Geom_Surface^ S)
{
    ((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance));
}

void Macad::Occt::GeomConvert_SurfToAnaSurf::SetConvType(Macad::Occt::GeomConvert_ConvType theConvType)
{
    ((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->SetConvType((::GeomConvert_ConvType)theConvType);
}

void Macad::Occt::GeomConvert_SurfToAnaSurf::SetConvType()
{
    ((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->SetConvType(GeomConvert_Simplest);
}

void Macad::Occt::GeomConvert_SurfToAnaSurf::SetTarget(Macad::Occt::GeomAbs_SurfaceType theSurfType)
{
    ((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->SetTarget((::GeomAbs_SurfaceType)theSurfType);
}

void Macad::Occt::GeomConvert_SurfToAnaSurf::SetTarget()
{
    ((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->SetTarget(GeomAbs_Plane);
}

double Macad::Occt::GeomConvert_SurfToAnaSurf::Gap()
{
    double _result = ((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->Gap();
    return _result;
}

Macad::Occt::Geom_Surface^ Macad::Occt::GeomConvert_SurfToAnaSurf::ConvertToAnalytical(double InitialToler)
{
    Handle(::Geom_Surface) _result = ((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->ConvertToAnalytical(InitialToler);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::GeomConvert_SurfToAnaSurf::ConvertToAnalytical(double InitialToler, double Umin, double Umax, double Vmin, double Vmax)
{
    Handle(::Geom_Surface) _result = ((::GeomConvert_SurfToAnaSurf*)_NativeInstance)->ConvertToAnalytical(InitialToler, Umin, Umax, Vmin, Vmax);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

bool Macad::Occt::GeomConvert_SurfToAnaSurf::IsSame(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double tol)
{
    bool _result = ::GeomConvert_SurfToAnaSurf::IsSame(Handle(::Geom_Surface)(S1->NativeInstance), Handle(::Geom_Surface)(S2->NativeInstance), tol);
    return _result;
}

bool Macad::Occt::GeomConvert_SurfToAnaSurf::IsCanonical(Macad::Occt::Geom_Surface^ S)
{
    bool _result = ::GeomConvert_SurfToAnaSurf::IsCanonical(Handle(::Geom_Surface)(S->NativeInstance));
    return _result;
}



//---------------------------------------------------------------------
//  Class  GeomConvert_Units
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_Units::GeomConvert_Units()
    : Macad::Occt::BaseClass<::GeomConvert_Units>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GeomConvert_Units();
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomConvert_Units::RadianToDegree(Macad::Occt::Geom2d_Curve^ theCurve, Macad::Occt::Geom_Surface^ theSurface, double theLengthFactor, double theFactorRadianDegree)
{
    Handle(::Geom2d_Curve) _result = ::GeomConvert_Units::RadianToDegree(Handle(::Geom2d_Curve)(theCurve->NativeInstance), Handle(::Geom_Surface)(theSurface->NativeInstance), theLengthFactor, theFactorRadianDegree);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomConvert_Units::DegreeToRadian(Macad::Occt::Geom2d_Curve^ theCurve, Macad::Occt::Geom_Surface^ theSurface, double theLengthFactor, double theFactorRadianDegree)
{
    Handle(::Geom2d_Curve) _result = ::GeomConvert_Units::DegreeToRadian(Handle(::Geom2d_Curve)(theCurve->NativeInstance), Handle(::Geom_Surface)(theSurface->NativeInstance), theLengthFactor, theFactorRadianDegree);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomConvert_Units::MirrorPCurve(Macad::Occt::Geom2d_Curve^ theCurve)
{
    Handle(::Geom2d_Curve) _result = ::GeomConvert_Units::MirrorPCurve(Handle(::Geom2d_Curve)(theCurve->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}


