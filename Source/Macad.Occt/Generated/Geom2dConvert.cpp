// Generated wrapper code for package Geom2dConvert

#include "OcctPCH.h"
#include "Geom2dConvert.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "Standard.h"
#include "Convert.h"
#include "TColStd.h"
#include "GeomAbs.h"
#include "Adaptor2d.h"
#include "Geom2dConvert.h"


//---------------------------------------------------------------------
//  Class  Geom2dConvert
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert::Geom2dConvert()
	: BaseClass<::Geom2dConvert>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert();
}

Macad::Occt::Geom2dConvert::Geom2dConvert(Macad::Occt::Geom2dConvert^ parameter1)
	: BaseClass<::Geom2dConvert>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert(*(::Geom2dConvert*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, int FromK1, int ToK2, bool SameOrientation)
{
	Handle(::Geom2d_BSplineCurve) h_C = C->NativeInstance;
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ::Geom2dConvert::SplitBSplineCurve(h_C, FromK1, ToK2, SameOrientation);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, int FromK1, int ToK2)
{
	Handle(::Geom2d_BSplineCurve) h_C = C->NativeInstance;
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ::Geom2dConvert::SplitBSplineCurve(h_C, FromK1, ToK2, true);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance, bool SameOrientation)
{
	Handle(::Geom2d_BSplineCurve) h_C = C->NativeInstance;
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ::Geom2dConvert::SplitBSplineCurve(h_C, FromU1, ToU2, ParametricTolerance, SameOrientation);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance)
{
	Handle(::Geom2d_BSplineCurve) h_C = C->NativeInstance;
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ::Geom2dConvert::SplitBSplineCurve(h_C, FromU1, ToU2, ParametricTolerance, true);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::CurveToBSplineCurve(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Convert_ParameterisationType Parameterisation)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ::Geom2dConvert::CurveToBSplineCurve(h_C, (::Convert_ParameterisationType)Parameterisation);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::CurveToBSplineCurve(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ::Geom2dConvert::CurveToBSplineCurve(h_C, Convert_TgtThetaOver2);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

void Macad::Occt::Geom2dConvert::C0BSplineToC1BSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ BS, double Tolerance)
{
	Handle(::Geom2d_BSplineCurve) h_BS = BS->NativeInstance;
	::Geom2dConvert::C0BSplineToC1BSplineCurve(h_BS, Tolerance);
	BS->NativeInstance = h_BS.get();
}




//---------------------------------------------------------------------
//  Class  Geom2dConvert_ApproxCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_ApproxCurve::Geom2dConvert_ApproxCurve(Macad::Occt::Geom2d_Curve^ Curve, double Tol2d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree)
	: BaseClass<::Geom2dConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_Curve = Curve->NativeInstance;
	_NativeInstance = new ::Geom2dConvert_ApproxCurve(h_Curve, Tol2d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
	Curve->NativeInstance = h_Curve.get();
}

Macad::Occt::Geom2dConvert_ApproxCurve::Geom2dConvert_ApproxCurve(Macad::Occt::Adaptor2d_Curve2d^ Curve, double Tol2d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree)
	: BaseClass<::Geom2dConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Adaptor2d_Curve2d) h_Curve = Curve->NativeInstance;
	_NativeInstance = new ::Geom2dConvert_ApproxCurve(h_Curve, Tol2d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
	Curve->NativeInstance = h_Curve.get();
}

Macad::Occt::Geom2dConvert_ApproxCurve::Geom2dConvert_ApproxCurve(Macad::Occt::Geom2dConvert_ApproxCurve^ parameter1)
	: BaseClass<::Geom2dConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_ApproxCurve(*(::Geom2dConvert_ApproxCurve*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert_ApproxCurve::Curve()
{
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->Curve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

bool Macad::Occt::Geom2dConvert_ApproxCurve::IsDone()
{
	return ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->IsDone();
}

bool Macad::Occt::Geom2dConvert_ApproxCurve::HasResult()
{
	return ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->HasResult();
}

double Macad::Occt::Geom2dConvert_ApproxCurve::MaxError()
{
	return ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->MaxError();
}




//---------------------------------------------------------------------
//  Class  Geom2dConvert_BSplineCurveKnotSplitting
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting::Geom2dConvert_BSplineCurveKnotSplitting(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve, int ContinuityRange)
	: BaseClass<::Geom2dConvert_BSplineCurveKnotSplitting>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_BSplineCurve) h_BasisCurve = BasisCurve->NativeInstance;
	_NativeInstance = new ::Geom2dConvert_BSplineCurveKnotSplitting(h_BasisCurve, ContinuityRange);
	BasisCurve->NativeInstance = h_BasisCurve.get();
}

Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting::Geom2dConvert_BSplineCurveKnotSplitting(Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting^ parameter1)
	: BaseClass<::Geom2dConvert_BSplineCurveKnotSplitting>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_BSplineCurveKnotSplitting(*(::Geom2dConvert_BSplineCurveKnotSplitting*)parameter1->NativeInstance);
}

int Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting::NbSplits()
{
	return ((::Geom2dConvert_BSplineCurveKnotSplitting*)_NativeInstance)->NbSplits();
}

void Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting::Splitting(Macad::Occt::TColStd_Array1OfInteger^ SplitValues)
{
	((::Geom2dConvert_BSplineCurveKnotSplitting*)_NativeInstance)->Splitting(*(::TColStd_Array1OfInteger*)SplitValues->NativeInstance);
}

int Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting::SplitValue(int Index)
{
	return ((::Geom2dConvert_BSplineCurveKnotSplitting*)_NativeInstance)->SplitValue(Index);
}




//---------------------------------------------------------------------
//  Class  Geom2dConvert_BSplineCurveToBezierCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::Geom2dConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve)
	: BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_BSplineCurve) h_BasisCurve = BasisCurve->NativeInstance;
	_NativeInstance = new ::Geom2dConvert_BSplineCurveToBezierCurve(h_BasisCurve);
	BasisCurve->NativeInstance = h_BasisCurve.get();
}

Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::Geom2dConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve, double U1, double U2, double ParametricTolerance)
	: BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_BSplineCurve) h_BasisCurve = BasisCurve->NativeInstance;
	_NativeInstance = new ::Geom2dConvert_BSplineCurveToBezierCurve(h_BasisCurve, U1, U2, ParametricTolerance);
	BasisCurve->NativeInstance = h_BasisCurve.get();
}

Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::Geom2dConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve^ parameter1)
	: BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_BSplineCurveToBezierCurve(*(::Geom2dConvert_BSplineCurveToBezierCurve*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::Arc(int Index)
{
	Handle(::Geom2d_BezierCurve) _result;
	_result = ((::Geom2dConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Arc(Index);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted( _result.get());
}

void Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::Knots(Macad::Occt::TColStd_Array1OfReal^ TKnots)
{
	((::Geom2dConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Knots(*(::TColStd_Array1OfReal*)TKnots->NativeInstance);
}

int Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::NbArcs()
{
	return ((::Geom2dConvert_BSplineCurveToBezierCurve*)_NativeInstance)->NbArcs();
}




//---------------------------------------------------------------------
//  Class  Geom2dConvert_CompCurveToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Convert_ParameterisationType Parameterisation)
	: BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve((::Convert_ParameterisationType)Parameterisation);
}

Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Geom2d_BoundedCurve^ BasisCurve, Macad::Occt::Convert_ParameterisationType Parameterisation)
	: BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_BoundedCurve) h_BasisCurve = BasisCurve->NativeInstance;
	_NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve(h_BasisCurve, (::Convert_ParameterisationType)Parameterisation);
	BasisCurve->NativeInstance = h_BasisCurve.get();
}

Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Geom2d_BoundedCurve^ BasisCurve)
	: BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_BoundedCurve) h_BasisCurve = BasisCurve->NativeInstance;
	_NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve(h_BasisCurve, Convert_TgtThetaOver2);
	BasisCurve->NativeInstance = h_BasisCurve.get();
}

Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve^ parameter1)
	: BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve(*(::Geom2dConvert_CompCurveToBSplineCurve*)parameter1->NativeInstance);
}

bool Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom2d_BoundedCurve^ NewCurve, double Tolerance, bool After)
{
	Handle(::Geom2d_BoundedCurve) h_NewCurve = NewCurve->NativeInstance;
	return ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(h_NewCurve, Tolerance, After);
	NewCurve->NativeInstance = h_NewCurve.get();
}

bool Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom2d_BoundedCurve^ NewCurve, double Tolerance)
{
	Handle(::Geom2d_BoundedCurve) h_NewCurve = NewCurve->NativeInstance;
	return ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(h_NewCurve, Tolerance, false);
	NewCurve->NativeInstance = h_NewCurve.get();
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::BSplineCurve()
{
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->BSplineCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

void Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Clear()
{
	((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->Clear();
}



