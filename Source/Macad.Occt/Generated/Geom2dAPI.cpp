// Generated wrapper code for package Geom2dAPI

#include "OcctPCH.h"
#include "Geom2dAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "Standard.h"
#include "Geom2dAPI.h"
#include "gp.h"
#include "Extrema.h"
#include "TColgp.h"
#include "TColStd.h"
#include "GeomAbs.h"


//---------------------------------------------------------------------
//  Class  Geom2dAPI_ExtremaCurveCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dAPI_ExtremaCurveCurve::Geom2dAPI_ExtremaCurveCurve(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double U1min, double U1max, double U2min, double U2max)
	: BaseClass<::Geom2dAPI_ExtremaCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom2d_Curve) h_C2 = C2->NativeInstance;
	_NativeInstance = new ::Geom2dAPI_ExtremaCurveCurve(h_C1, h_C2, U1min, U1max, U2min, U2max);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
}

Macad::Occt::Geom2dAPI_ExtremaCurveCurve::Geom2dAPI_ExtremaCurveCurve(Macad::Occt::Geom2dAPI_ExtremaCurveCurve^ parameter1)
	: BaseClass<::Geom2dAPI_ExtremaCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_ExtremaCurveCurve(*(::Geom2dAPI_ExtremaCurveCurve*)parameter1->NativeInstance);
}

int Macad::Occt::Geom2dAPI_ExtremaCurveCurve::NbExtrema()
{
	return ((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->NbExtrema();
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
	((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->Parameters(Index, *(Standard_Real*)pp_U1, *(Standard_Real*)pp_U2);
}

double Macad::Occt::Geom2dAPI_ExtremaCurveCurve::Distance(int Index)
{
	return ((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->Distance(Index);
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
	((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->LowerDistanceParameters(*(Standard_Real*)pp_U1, *(Standard_Real*)pp_U2);
}

double Macad::Occt::Geom2dAPI_ExtremaCurveCurve::LowerDistance()
{
	return ((::Geom2dAPI_ExtremaCurveCurve*)_NativeInstance)->LowerDistance();
}




//---------------------------------------------------------------------
//  Class  Geom2dAPI_InterCurveCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve()
	: BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_InterCurveCurve();
}

Macad::Occt::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double Tol)
	: BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom2d_Curve) h_C2 = C2->NativeInstance;
	_NativeInstance = new ::Geom2dAPI_InterCurveCurve(h_C1, h_C2, Tol);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
}

Macad::Occt::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2)
	: BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom2d_Curve) h_C2 = C2->NativeInstance;
	_NativeInstance = new ::Geom2dAPI_InterCurveCurve(h_C1, h_C2, 9.9999999999999995E-7);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
}

Macad::Occt::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1, double Tol)
	: BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	_NativeInstance = new ::Geom2dAPI_InterCurveCurve(h_C1, Tol);
	C1->NativeInstance = h_C1.get();
}

Macad::Occt::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1)
	: BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	_NativeInstance = new ::Geom2dAPI_InterCurveCurve(h_C1, 9.9999999999999995E-7);
	C1->NativeInstance = h_C1.get();
}

Macad::Occt::Geom2dAPI_InterCurveCurve::Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2dAPI_InterCurveCurve^ parameter1)
	: BaseClass<::Geom2dAPI_InterCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_InterCurveCurve(*(::Geom2dAPI_InterCurveCurve*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2dAPI_InterCurveCurve::Init(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double Tol)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom2d_Curve) h_C2 = C2->NativeInstance;
	((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Init(h_C1, h_C2, Tol);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
}

void Macad::Occt::Geom2dAPI_InterCurveCurve::Init(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom2d_Curve) h_C2 = C2->NativeInstance;
	((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Init(h_C1, h_C2, 9.9999999999999995E-7);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
}

void Macad::Occt::Geom2dAPI_InterCurveCurve::Init(Macad::Occt::Geom2d_Curve^ C1, double Tol)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Init(h_C1, Tol);
	C1->NativeInstance = h_C1.get();
}

void Macad::Occt::Geom2dAPI_InterCurveCurve::Init(Macad::Occt::Geom2d_Curve^ C1)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Init(h_C1, 9.9999999999999995E-7);
	C1->NativeInstance = h_C1.get();
}

int Macad::Occt::Geom2dAPI_InterCurveCurve::NbPoints()
{
	return ((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->NbPoints();
}

Macad::Occt::Pnt2d Macad::Occt::Geom2dAPI_InterCurveCurve::Point(int Index)
{
	return Macad::Occt::Pnt2d(((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->Point(Index));
}

int Macad::Occt::Geom2dAPI_InterCurveCurve::NbSegments()
{
	return ((::Geom2dAPI_InterCurveCurve*)_NativeInstance)->NbSegments();
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
	: BaseClass<::Geom2dAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
	Handle(::TColgp_HArray1OfPnt2d) h_Points = Points->NativeInstance;
	_NativeInstance = new ::Geom2dAPI_Interpolate(h_Points, PeriodicFlag, Tolerance);
	Points->NativeInstance = h_Points.get();
}

Macad::Occt::Geom2dAPI_Interpolate::Geom2dAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt2d^ Points, Macad::Occt::TColStd_HArray1OfReal^ Parameters, bool PeriodicFlag, double Tolerance)
	: BaseClass<::Geom2dAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
	Handle(::TColgp_HArray1OfPnt2d) h_Points = Points->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_Parameters = Parameters->NativeInstance;
	_NativeInstance = new ::Geom2dAPI_Interpolate(h_Points, h_Parameters, PeriodicFlag, Tolerance);
	Points->NativeInstance = h_Points.get();
	Parameters->NativeInstance = h_Parameters.get();
}

Macad::Occt::Geom2dAPI_Interpolate::Geom2dAPI_Interpolate(Macad::Occt::Geom2dAPI_Interpolate^ parameter1)
	: BaseClass<::Geom2dAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_Interpolate(*(::Geom2dAPI_Interpolate*)parameter1->NativeInstance);
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
	Handle(::TColStd_HArray1OfBoolean) h_TangentFlags = TangentFlags->NativeInstance;
	((::Geom2dAPI_Interpolate*)_NativeInstance)->Load(*(::TColgp_Array1OfVec2d*)Tangents->NativeInstance, h_TangentFlags, Scale);
	TangentFlags->NativeInstance = h_TangentFlags.get();
}

void Macad::Occt::Geom2dAPI_Interpolate::Load(Macad::Occt::TColgp_Array1OfVec2d^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags)
{
	Handle(::TColStd_HArray1OfBoolean) h_TangentFlags = TangentFlags->NativeInstance;
	((::Geom2dAPI_Interpolate*)_NativeInstance)->Load(*(::TColgp_Array1OfVec2d*)Tangents->NativeInstance, h_TangentFlags, true);
	TangentFlags->NativeInstance = h_TangentFlags.get();
}

void Macad::Occt::Geom2dAPI_Interpolate::ClearTangents()
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}

void Macad::Occt::Geom2dAPI_Interpolate::Perform()
{
	((::Geom2dAPI_Interpolate*)_NativeInstance)->Perform();
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dAPI_Interpolate::Curve()
{
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::Geom2dAPI_Interpolate*)_NativeInstance)->Curve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

bool Macad::Occt::Geom2dAPI_Interpolate::IsDone()
{
	return ((::Geom2dAPI_Interpolate*)_NativeInstance)->IsDone();
}




//---------------------------------------------------------------------
//  Class  Geom2dAPI_PointsToBSpline
//---------------------------------------------------------------------

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline()
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline();
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, 3, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, DegMax, GeomAbs_C2, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, DegMin, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColStd_Array1OfReal*)YValues->NativeInstance, X0, DX, 3, 8, GeomAbs_C2, 9.9999999999999995E-7);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol2D);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::TColgp_Array1OfPnt2d*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::Geom2dAPI_PointsToBSpline::Geom2dAPI_PointsToBSpline(Macad::Occt::Geom2dAPI_PointsToBSpline^ parameter1)
	: BaseClass<::Geom2dAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_PointsToBSpline(*(::Geom2dAPI_PointsToBSpline*)parameter1->NativeInstance);
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
	Handle(::Geom2d_BSplineCurve) _result;
	_result = ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->Curve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted( _result.get());
}

bool Macad::Occt::Geom2dAPI_PointsToBSpline::IsDone()
{
	return ((::Geom2dAPI_PointsToBSpline*)_NativeInstance)->IsDone();
}




//---------------------------------------------------------------------
//  Class  Geom2dAPI_ProjectPointOnCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Geom2dAPI_ProjectPointOnCurve()
	: BaseClass<::Geom2dAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_ProjectPointOnCurve();
}

Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Geom2dAPI_ProjectPointOnCurve(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve)
	: BaseClass<::Geom2dAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	Handle(::Geom2d_Curve) h_Curve = Curve->NativeInstance;
	_NativeInstance = new ::Geom2dAPI_ProjectPointOnCurve(*(gp_Pnt2d*)pp_P, h_Curve);
	Curve->NativeInstance = h_Curve.get();
}

Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Geom2dAPI_ProjectPointOnCurve(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve, double Umin, double Usup)
	: BaseClass<::Geom2dAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	Handle(::Geom2d_Curve) h_Curve = Curve->NativeInstance;
	_NativeInstance = new ::Geom2dAPI_ProjectPointOnCurve(*(gp_Pnt2d*)pp_P, h_Curve, Umin, Usup);
	Curve->NativeInstance = h_Curve.get();
}

Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Geom2dAPI_ProjectPointOnCurve(Macad::Occt::Geom2dAPI_ProjectPointOnCurve^ parameter1)
	: BaseClass<::Geom2dAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Geom2dAPI_ProjectPointOnCurve(*(::Geom2dAPI_ProjectPointOnCurve*)parameter1->NativeInstance);
}

void Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Init(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	Handle(::Geom2d_Curve) h_Curve = Curve->NativeInstance;
	((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_P, h_Curve);
	Curve->NativeInstance = h_Curve.get();
}

void Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Init(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve, double Umin, double Usup)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	Handle(::Geom2d_Curve) h_Curve = Curve->NativeInstance;
	((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_P, h_Curve, Umin, Usup);
	Curve->NativeInstance = h_Curve.get();
}

int Macad::Occt::Geom2dAPI_ProjectPointOnCurve::NbPoints()
{
	return ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->NbPoints();
}

Macad::Occt::Pnt2d Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Point(int Index)
{
	return Macad::Occt::Pnt2d(((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Point(Index));
}

double Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Parameter(int Index)
{
	return ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Parameter(Index);
}

void Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Parameter(int Index, double% U)
{
	pin_ptr<double> pp_U = &U;
	((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Parameter(Index, *(Standard_Real*)pp_U);
}

double Macad::Occt::Geom2dAPI_ProjectPointOnCurve::Distance(int Index)
{
	return ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->Distance(Index);
}

Macad::Occt::Pnt2d Macad::Occt::Geom2dAPI_ProjectPointOnCurve::NearestPoint()
{
	return Macad::Occt::Pnt2d(((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->NearestPoint());
}

double Macad::Occt::Geom2dAPI_ProjectPointOnCurve::LowerDistanceParameter()
{
	return ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->LowerDistanceParameter();
}

double Macad::Occt::Geom2dAPI_ProjectPointOnCurve::LowerDistance()
{
	return ((::Geom2dAPI_ProjectPointOnCurve*)_NativeInstance)->LowerDistance();
}



