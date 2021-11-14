// Generated wrapper code for package GeomConvert

#include "OcctPCH.h"
#include "GeomConvert.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "Standard.h"
#include "Convert.h"
#include "TColStd.h"
#include "GeomAbs.h"
#include "Adaptor3d.h"
#include "GeomConvert.h"
#include "TColgp.h"
#include "Geom2d.h"


//---------------------------------------------------------------------
//  Class  GeomConvert
//---------------------------------------------------------------------

Macad::Occt::GeomConvert::GeomConvert()
	: BaseClass<::GeomConvert>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert();
}

Macad::Occt::GeomConvert::GeomConvert(Macad::Occt::GeomConvert^ parameter1)
	: BaseClass<::GeomConvert>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert(*(::GeomConvert*)parameter1->NativeInstance);
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert::SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, int FromK1, int ToK2, bool SameOrientation)
{
	Handle(::Geom_BSplineCurve) h_C = C->NativeInstance;
	Handle(::Geom_BSplineCurve) _result;
	_result = ::GeomConvert::SplitBSplineCurve(h_C, FromK1, ToK2, SameOrientation);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert::SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, int FromK1, int ToK2)
{
	Handle(::Geom_BSplineCurve) h_C = C->NativeInstance;
	Handle(::Geom_BSplineCurve) _result;
	_result = ::GeomConvert::SplitBSplineCurve(h_C, FromK1, ToK2, true);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert::SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance, bool SameOrientation)
{
	Handle(::Geom_BSplineCurve) h_C = C->NativeInstance;
	Handle(::Geom_BSplineCurve) _result;
	_result = ::GeomConvert::SplitBSplineCurve(h_C, FromU1, ToU2, ParametricTolerance, SameOrientation);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert::SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance)
{
	Handle(::Geom_BSplineCurve) h_C = C->NativeInstance;
	Handle(::Geom_BSplineCurve) _result;
	_result = ::GeomConvert::SplitBSplineCurve(h_C, FromU1, ToU2, ParametricTolerance, true);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2, bool SameUOrientation, bool SameVOrientation)
{
	Handle(::Geom_BSplineSurface) h_S = S->NativeInstance;
	Handle(::Geom_BSplineSurface) _result;
	_result = ::GeomConvert::SplitBSplineSurface(h_S, FromUK1, ToUK2, FromVK1, ToVK2, SameUOrientation, SameVOrientation);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2, bool SameUOrientation)
{
	Handle(::Geom_BSplineSurface) h_S = S->NativeInstance;
	Handle(::Geom_BSplineSurface) _result;
	_result = ::GeomConvert::SplitBSplineSurface(h_S, FromUK1, ToUK2, FromVK1, ToVK2, SameUOrientation, true);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2)
{
	Handle(::Geom_BSplineSurface) h_S = S->NativeInstance;
	Handle(::Geom_BSplineSurface) _result;
	_result = ::GeomConvert::SplitBSplineSurface(h_S, FromUK1, ToUK2, FromVK1, ToVK2, true, true);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromK1, int ToK2, bool USplit, bool SameOrientation)
{
	Handle(::Geom_BSplineSurface) h_S = S->NativeInstance;
	Handle(::Geom_BSplineSurface) _result;
	_result = ::GeomConvert::SplitBSplineSurface(h_S, FromK1, ToK2, USplit, SameOrientation);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromK1, int ToK2, bool USplit)
{
	Handle(::Geom_BSplineSurface) h_S = S->NativeInstance;
	Handle(::Geom_BSplineSurface) _result;
	_result = ::GeomConvert::SplitBSplineSurface(h_S, FromK1, ToK2, USplit, true);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance, bool SameUOrientation, bool SameVOrientation)
{
	Handle(::Geom_BSplineSurface) h_S = S->NativeInstance;
	Handle(::Geom_BSplineSurface) _result;
	_result = ::GeomConvert::SplitBSplineSurface(h_S, FromU1, ToU2, FromV1, ToV2, ParametricTolerance, SameUOrientation, SameVOrientation);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance, bool SameUOrientation)
{
	Handle(::Geom_BSplineSurface) h_S = S->NativeInstance;
	Handle(::Geom_BSplineSurface) _result;
	_result = ::GeomConvert::SplitBSplineSurface(h_S, FromU1, ToU2, FromV1, ToV2, ParametricTolerance, SameUOrientation, true);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance)
{
	Handle(::Geom_BSplineSurface) h_S = S->NativeInstance;
	Handle(::Geom_BSplineSurface) _result;
	_result = ::GeomConvert::SplitBSplineSurface(h_S, FromU1, ToU2, FromV1, ToV2, ParametricTolerance, true, true);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromParam1, double ToParam2, bool USplit, double ParametricTolerance, bool SameOrientation)
{
	Handle(::Geom_BSplineSurface) h_S = S->NativeInstance;
	Handle(::Geom_BSplineSurface) _result;
	_result = ::GeomConvert::SplitBSplineSurface(h_S, FromParam1, ToParam2, USplit, ParametricTolerance, SameOrientation);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromParam1, double ToParam2, bool USplit, double ParametricTolerance)
{
	Handle(::Geom_BSplineSurface) h_S = S->NativeInstance;
	Handle(::Geom_BSplineSurface) _result;
	_result = ::GeomConvert::SplitBSplineSurface(h_S, FromParam1, ToParam2, USplit, ParametricTolerance, true);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert::CurveToBSplineCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::Convert_ParameterisationType Parameterisation)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	Handle(::Geom_BSplineCurve) _result;
	_result = ::GeomConvert::CurveToBSplineCurve(h_C, (::Convert_ParameterisationType)Parameterisation);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert::CurveToBSplineCurve(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	Handle(::Geom_BSplineCurve) _result;
	_result = ::GeomConvert::CurveToBSplineCurve(h_C, Convert_TgtThetaOver2);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert::SurfaceToBSplineSurface(Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	Handle(::Geom_BSplineSurface) _result;
	_result = ::GeomConvert::SurfaceToBSplineSurface(h_S);
	S->NativeInstance = h_S.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
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
	: BaseClass<::GeomConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_Curve = Curve->NativeInstance;
	_NativeInstance = new ::GeomConvert_ApproxCurve(h_Curve, Tol3d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
	Curve->NativeInstance = h_Curve.get();
}

Macad::Occt::GeomConvert_ApproxCurve::GeomConvert_ApproxCurve(Macad::Occt::Adaptor3d_Curve^ Curve, double Tol3d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree)
	: BaseClass<::GeomConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_Curve) h_Curve = Curve->NativeInstance;
	_NativeInstance = new ::GeomConvert_ApproxCurve(h_Curve, Tol3d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
	Curve->NativeInstance = h_Curve.get();
}

Macad::Occt::GeomConvert_ApproxCurve::GeomConvert_ApproxCurve(Macad::Occt::GeomConvert_ApproxCurve^ parameter1)
	: BaseClass<::GeomConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_ApproxCurve(*(::GeomConvert_ApproxCurve*)parameter1->NativeInstance);
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert_ApproxCurve::Curve()
{
	Handle(::Geom_BSplineCurve) _result;
	_result = ((::GeomConvert_ApproxCurve*)_NativeInstance)->Curve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}

bool Macad::Occt::GeomConvert_ApproxCurve::IsDone()
{
	return ((::GeomConvert_ApproxCurve*)_NativeInstance)->IsDone();
}

bool Macad::Occt::GeomConvert_ApproxCurve::HasResult()
{
	return ((::GeomConvert_ApproxCurve*)_NativeInstance)->HasResult();
}

double Macad::Occt::GeomConvert_ApproxCurve::MaxError()
{
	return ((::GeomConvert_ApproxCurve*)_NativeInstance)->MaxError();
}




//---------------------------------------------------------------------
//  Class  GeomConvert_ApproxSurface
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_ApproxSurface::GeomConvert_ApproxSurface(Macad::Occt::Geom_Surface^ Surf, double Tol3d, Macad::Occt::GeomAbs_Shape UContinuity, Macad::Occt::GeomAbs_Shape VContinuity, int MaxDegU, int MaxDegV, int MaxSegments, int PrecisCode)
	: BaseClass<::GeomConvert_ApproxSurface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_Surf = Surf->NativeInstance;
	_NativeInstance = new ::GeomConvert_ApproxSurface(h_Surf, Tol3d, (::GeomAbs_Shape)UContinuity, (::GeomAbs_Shape)VContinuity, MaxDegU, MaxDegV, MaxSegments, PrecisCode);
	Surf->NativeInstance = h_Surf.get();
}

Macad::Occt::GeomConvert_ApproxSurface::GeomConvert_ApproxSurface(Macad::Occt::Adaptor3d_Surface^ Surf, double Tol3d, Macad::Occt::GeomAbs_Shape UContinuity, Macad::Occt::GeomAbs_Shape VContinuity, int MaxDegU, int MaxDegV, int MaxSegments, int PrecisCode)
	: BaseClass<::GeomConvert_ApproxSurface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor3d_Surface) h_Surf = Surf->NativeInstance;
	_NativeInstance = new ::GeomConvert_ApproxSurface(h_Surf, Tol3d, (::GeomAbs_Shape)UContinuity, (::GeomAbs_Shape)VContinuity, MaxDegU, MaxDegV, MaxSegments, PrecisCode);
	Surf->NativeInstance = h_Surf.get();
}

Macad::Occt::GeomConvert_ApproxSurface::GeomConvert_ApproxSurface(Macad::Occt::GeomConvert_ApproxSurface^ parameter1)
	: BaseClass<::GeomConvert_ApproxSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_ApproxSurface(*(::GeomConvert_ApproxSurface*)parameter1->NativeInstance);
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::GeomConvert_ApproxSurface::Surface()
{
	Handle(::Geom_BSplineSurface) _result;
	_result = ((::GeomConvert_ApproxSurface*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

bool Macad::Occt::GeomConvert_ApproxSurface::IsDone()
{
	return ((::GeomConvert_ApproxSurface*)_NativeInstance)->IsDone();
}

bool Macad::Occt::GeomConvert_ApproxSurface::HasResult()
{
	return ((::GeomConvert_ApproxSurface*)_NativeInstance)->HasResult();
}

double Macad::Occt::GeomConvert_ApproxSurface::MaxError()
{
	return ((::GeomConvert_ApproxSurface*)_NativeInstance)->MaxError();
}




//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineCurveKnotSplitting
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_BSplineCurveKnotSplitting::GeomConvert_BSplineCurveKnotSplitting(Macad::Occt::Geom_BSplineCurve^ BasisCurve, int ContinuityRange)
	: BaseClass<::GeomConvert_BSplineCurveKnotSplitting>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_BSplineCurve) h_BasisCurve = BasisCurve->NativeInstance;
	_NativeInstance = new ::GeomConvert_BSplineCurveKnotSplitting(h_BasisCurve, ContinuityRange);
	BasisCurve->NativeInstance = h_BasisCurve.get();
}

Macad::Occt::GeomConvert_BSplineCurveKnotSplitting::GeomConvert_BSplineCurveKnotSplitting(Macad::Occt::GeomConvert_BSplineCurveKnotSplitting^ parameter1)
	: BaseClass<::GeomConvert_BSplineCurveKnotSplitting>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_BSplineCurveKnotSplitting(*(::GeomConvert_BSplineCurveKnotSplitting*)parameter1->NativeInstance);
}

int Macad::Occt::GeomConvert_BSplineCurveKnotSplitting::NbSplits()
{
	return ((::GeomConvert_BSplineCurveKnotSplitting*)_NativeInstance)->NbSplits();
}

void Macad::Occt::GeomConvert_BSplineCurveKnotSplitting::Splitting(Macad::Occt::TColStd_Array1OfInteger^ SplitValues)
{
	((::GeomConvert_BSplineCurveKnotSplitting*)_NativeInstance)->Splitting(*(::TColStd_Array1OfInteger*)SplitValues->NativeInstance);
}

int Macad::Occt::GeomConvert_BSplineCurveKnotSplitting::SplitValue(int Index)
{
	return ((::GeomConvert_BSplineCurveKnotSplitting*)_NativeInstance)->SplitValue(Index);
}




//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineCurveToBezierCurve
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_BSplineCurveToBezierCurve::GeomConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom_BSplineCurve^ BasisCurve)
	: BaseClass<::GeomConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_BSplineCurve) h_BasisCurve = BasisCurve->NativeInstance;
	_NativeInstance = new ::GeomConvert_BSplineCurveToBezierCurve(h_BasisCurve);
	BasisCurve->NativeInstance = h_BasisCurve.get();
}

Macad::Occt::GeomConvert_BSplineCurveToBezierCurve::GeomConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom_BSplineCurve^ BasisCurve, double U1, double U2, double ParametricTolerance)
	: BaseClass<::GeomConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_BSplineCurve) h_BasisCurve = BasisCurve->NativeInstance;
	_NativeInstance = new ::GeomConvert_BSplineCurveToBezierCurve(h_BasisCurve, U1, U2, ParametricTolerance);
	BasisCurve->NativeInstance = h_BasisCurve.get();
}

Macad::Occt::GeomConvert_BSplineCurveToBezierCurve::GeomConvert_BSplineCurveToBezierCurve(Macad::Occt::GeomConvert_BSplineCurveToBezierCurve^ parameter1)
	: BaseClass<::GeomConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_BSplineCurveToBezierCurve(*(::GeomConvert_BSplineCurveToBezierCurve*)parameter1->NativeInstance);
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::GeomConvert_BSplineCurveToBezierCurve::Arc(int Index)
{
	Handle(::Geom_BezierCurve) _result;
	_result = ((::GeomConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Arc(Index);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted( _result.get());
}

void Macad::Occt::GeomConvert_BSplineCurveToBezierCurve::Knots(Macad::Occt::TColStd_Array1OfReal^ TKnots)
{
	((::GeomConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Knots(*(::TColStd_Array1OfReal*)TKnots->NativeInstance);
}

int Macad::Occt::GeomConvert_BSplineCurveToBezierCurve::NbArcs()
{
	return ((::GeomConvert_BSplineCurveToBezierCurve*)_NativeInstance)->NbArcs();
}




//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineSurfaceKnotSplitting
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting::GeomConvert_BSplineSurfaceKnotSplitting(Macad::Occt::Geom_BSplineSurface^ BasisSurface, int UContinuityRange, int VContinuityRange)
	: BaseClass<::GeomConvert_BSplineSurfaceKnotSplitting>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_BSplineSurface) h_BasisSurface = BasisSurface->NativeInstance;
	_NativeInstance = new ::GeomConvert_BSplineSurfaceKnotSplitting(h_BasisSurface, UContinuityRange, VContinuityRange);
	BasisSurface->NativeInstance = h_BasisSurface.get();
}

Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting::GeomConvert_BSplineSurfaceKnotSplitting(Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting^ parameter1)
	: BaseClass<::GeomConvert_BSplineSurfaceKnotSplitting>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_BSplineSurfaceKnotSplitting(*(::GeomConvert_BSplineSurfaceKnotSplitting*)parameter1->NativeInstance);
}

int Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting::NbUSplits()
{
	return ((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->NbUSplits();
}

int Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting::NbVSplits()
{
	return ((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->NbVSplits();
}

void Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting::Splitting(Macad::Occt::TColStd_Array1OfInteger^ USplit, Macad::Occt::TColStd_Array1OfInteger^ VSplit)
{
	((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->Splitting(*(::TColStd_Array1OfInteger*)USplit->NativeInstance, *(::TColStd_Array1OfInteger*)VSplit->NativeInstance);
}

int Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting::USplitValue(int UIndex)
{
	return ((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->USplitValue(UIndex);
}

int Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting::VSplitValue(int VIndex)
{
	return ((::GeomConvert_BSplineSurfaceKnotSplitting*)_NativeInstance)->VSplitValue(VIndex);
}




//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineSurfaceToBezierSurface
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface::GeomConvert_BSplineSurfaceToBezierSurface(Macad::Occt::Geom_BSplineSurface^ BasisSurface)
	: BaseClass<::GeomConvert_BSplineSurfaceToBezierSurface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_BSplineSurface) h_BasisSurface = BasisSurface->NativeInstance;
	_NativeInstance = new ::GeomConvert_BSplineSurfaceToBezierSurface(h_BasisSurface);
	BasisSurface->NativeInstance = h_BasisSurface.get();
}

Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface::GeomConvert_BSplineSurfaceToBezierSurface(Macad::Occt::Geom_BSplineSurface^ BasisSurface, double U1, double U2, double V1, double V2, double ParametricTolerance)
	: BaseClass<::GeomConvert_BSplineSurfaceToBezierSurface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_BSplineSurface) h_BasisSurface = BasisSurface->NativeInstance;
	_NativeInstance = new ::GeomConvert_BSplineSurfaceToBezierSurface(h_BasisSurface, U1, U2, V1, V2, ParametricTolerance);
	BasisSurface->NativeInstance = h_BasisSurface.get();
}

Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface::GeomConvert_BSplineSurfaceToBezierSurface(Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface^ parameter1)
	: BaseClass<::GeomConvert_BSplineSurfaceToBezierSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_BSplineSurfaceToBezierSurface(*(::GeomConvert_BSplineSurfaceToBezierSurface*)parameter1->NativeInstance);
}

Macad::Occt::Geom_BezierSurface^ Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface::Patch(int UIndex, int VIndex)
{
	Handle(::Geom_BezierSurface) _result;
	_result = ((::GeomConvert_BSplineSurfaceToBezierSurface*)_NativeInstance)->Patch(UIndex, VIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierSurface::CreateDowncasted( _result.get());
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
	return ((::GeomConvert_BSplineSurfaceToBezierSurface*)_NativeInstance)->NbUPatches();
}

int Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface::NbVPatches()
{
	return ((::GeomConvert_BSplineSurfaceToBezierSurface*)_NativeInstance)->NbVPatches();
}




//---------------------------------------------------------------------
//  Class  GeomConvert_CompBezierSurfacesToBSplineSurface
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::GeomConvert_CompBezierSurfacesToBSplineSurface(Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface^ parameter1)
	: BaseClass<::GeomConvert_CompBezierSurfacesToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_CompBezierSurfacesToBSplineSurface(*(::GeomConvert_CompBezierSurfacesToBSplineSurface*)parameter1->NativeInstance);
}

int Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::NbUKnots()
{
	return ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->NbUKnots();
}

int Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::NbUPoles()
{
	return ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->NbUPoles();
}

int Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::NbVKnots()
{
	return ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->NbVKnots();
}

int Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::NbVPoles()
{
	return ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->NbVPoles();
}

Macad::Occt::TColgp_HArray2OfPnt^ Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::Poles()
{
	Handle(::TColgp_HArray2OfPnt) _result;
	_result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->Poles();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray2OfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::UKnots()
{
	Handle(::TColStd_HArray1OfReal) _result;
	_result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->UKnots();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted( _result.get());
}

int Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::UDegree()
{
	return ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->UDegree();
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::VKnots()
{
	Handle(::TColStd_HArray1OfReal) _result;
	_result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->VKnots();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted( _result.get());
}

int Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::VDegree()
{
	return ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->VDegree();
}

Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::UMultiplicities()
{
	Handle(::TColStd_HArray1OfInteger) _result;
	_result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->UMultiplicities();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfInteger::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::VMultiplicities()
{
	Handle(::TColStd_HArray1OfInteger) _result;
	_result = ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->VMultiplicities();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfInteger::CreateDowncasted( _result.get());
}

bool Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface::IsDone()
{
	return ((::GeomConvert_CompBezierSurfacesToBSplineSurface*)_NativeInstance)->IsDone();
}




//---------------------------------------------------------------------
//  Class  GeomConvert_CompCurveToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_CompCurveToBSplineCurve::GeomConvert_CompCurveToBSplineCurve(Macad::Occt::Convert_ParameterisationType Parameterisation)
	: BaseClass<::GeomConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_CompCurveToBSplineCurve((::Convert_ParameterisationType)Parameterisation);
}

Macad::Occt::GeomConvert_CompCurveToBSplineCurve::GeomConvert_CompCurveToBSplineCurve(Macad::Occt::Geom_BoundedCurve^ BasisCurve, Macad::Occt::Convert_ParameterisationType Parameterisation)
	: BaseClass<::GeomConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_BoundedCurve) h_BasisCurve = BasisCurve->NativeInstance;
	_NativeInstance = new ::GeomConvert_CompCurveToBSplineCurve(h_BasisCurve, (::Convert_ParameterisationType)Parameterisation);
	BasisCurve->NativeInstance = h_BasisCurve.get();
}

Macad::Occt::GeomConvert_CompCurveToBSplineCurve::GeomConvert_CompCurveToBSplineCurve(Macad::Occt::Geom_BoundedCurve^ BasisCurve)
	: BaseClass<::GeomConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_BoundedCurve) h_BasisCurve = BasisCurve->NativeInstance;
	_NativeInstance = new ::GeomConvert_CompCurveToBSplineCurve(h_BasisCurve, Convert_TgtThetaOver2);
	BasisCurve->NativeInstance = h_BasisCurve.get();
}

Macad::Occt::GeomConvert_CompCurveToBSplineCurve::GeomConvert_CompCurveToBSplineCurve(Macad::Occt::GeomConvert_CompCurveToBSplineCurve^ parameter1)
	: BaseClass<::GeomConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_CompCurveToBSplineCurve(*(::GeomConvert_CompCurveToBSplineCurve*)parameter1->NativeInstance);
}

bool Macad::Occt::GeomConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After, bool WithRatio, int MinM)
{
	Handle(::Geom_BoundedCurve) h_NewCurve = NewCurve->NativeInstance;
	return ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(h_NewCurve, Tolerance, After, WithRatio, MinM);
	NewCurve->NativeInstance = h_NewCurve.get();
}

bool Macad::Occt::GeomConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After, bool WithRatio)
{
	Handle(::Geom_BoundedCurve) h_NewCurve = NewCurve->NativeInstance;
	return ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(h_NewCurve, Tolerance, After, WithRatio, 0);
	NewCurve->NativeInstance = h_NewCurve.get();
}

bool Macad::Occt::GeomConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After)
{
	Handle(::Geom_BoundedCurve) h_NewCurve = NewCurve->NativeInstance;
	return ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(h_NewCurve, Tolerance, After, true, 0);
	NewCurve->NativeInstance = h_NewCurve.get();
}

bool Macad::Occt::GeomConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance)
{
	Handle(::Geom_BoundedCurve) h_NewCurve = NewCurve->NativeInstance;
	return ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(h_NewCurve, Tolerance, false, true, 0);
	NewCurve->NativeInstance = h_NewCurve.get();
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomConvert_CompCurveToBSplineCurve::BSplineCurve()
{
	Handle(::Geom_BSplineCurve) _result;
	_result = ((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->BSplineCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}

void Macad::Occt::GeomConvert_CompCurveToBSplineCurve::Clear()
{
	((::GeomConvert_CompCurveToBSplineCurve*)_NativeInstance)->Clear();
}




//---------------------------------------------------------------------
//  Class  GeomConvert_Units
//---------------------------------------------------------------------

Macad::Occt::GeomConvert_Units::GeomConvert_Units()
	: BaseClass<::GeomConvert_Units>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_Units();
}

Macad::Occt::GeomConvert_Units::GeomConvert_Units(Macad::Occt::GeomConvert_Units^ parameter1)
	: BaseClass<::GeomConvert_Units>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomConvert_Units(*(::GeomConvert_Units*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomConvert_Units::RadianToDegree(Macad::Occt::Geom2d_Curve^ theCurve, Macad::Occt::Geom_Surface^ theSurface, double theLengthFactor, double theFactorRadianDegree)
{
	Handle(::Geom2d_Curve) h_theCurve = theCurve->NativeInstance;
	Handle(::Geom_Surface) h_theSurface = theSurface->NativeInstance;
	Handle(::Geom2d_Curve) _result;
	_result = ::GeomConvert_Units::RadianToDegree(h_theCurve, h_theSurface, theLengthFactor, theFactorRadianDegree);
	theCurve->NativeInstance = h_theCurve.get();
	theSurface->NativeInstance = h_theSurface.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomConvert_Units::DegreeToRadian(Macad::Occt::Geom2d_Curve^ theCurve, Macad::Occt::Geom_Surface^ theSurface, double theLengthFactor, double theFactorRadianDegree)
{
	Handle(::Geom2d_Curve) h_theCurve = theCurve->NativeInstance;
	Handle(::Geom_Surface) h_theSurface = theSurface->NativeInstance;
	Handle(::Geom2d_Curve) _result;
	_result = ::GeomConvert_Units::DegreeToRadian(h_theCurve, h_theSurface, theLengthFactor, theFactorRadianDegree);
	theCurve->NativeInstance = h_theCurve.get();
	theSurface->NativeInstance = h_theSurface.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomConvert_Units::MirrorPCurve(Macad::Occt::Geom2d_Curve^ theCurve)
{
	Handle(::Geom2d_Curve) h_theCurve = theCurve->NativeInstance;
	Handle(::Geom2d_Curve) _result;
	_result = ::GeomConvert_Units::MirrorPCurve(h_theCurve);
	theCurve->NativeInstance = h_theCurve.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}



