// Generated wrapper code for package GeomAPI

#include "OcctPCH.h"
#include "GeomAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom2d.h"
#include "Geom.h"
#include "gp.h"
#include "Standard.h"
#include "Extrema.h"
#include "GeomAPI.h"
#include "TColgp.h"
#include "TColStd.h"
#include "GeomAbs.h"


//---------------------------------------------------------------------
//  Class  GeomAPI
//---------------------------------------------------------------------

Macad::Occt::GeomAPI::GeomAPI()
	: BaseClass<::GeomAPI>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI();
}

Macad::Occt::GeomAPI::GeomAPI(Macad::Occt::GeomAPI^ parameter1)
	: BaseClass<::GeomAPI>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI(*(::GeomAPI*)parameter1->NativeInstance);
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::GeomAPI::To2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pln P)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	Handle(::Geom2d_Curve) _result;
	_result = ::GeomAPI::To2d(h_C, *(gp_Pln*)pp_P);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomAPI::To3d(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pln P)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	Handle(::Geom_Curve) _result;
	_result = ::GeomAPI::To3d(h_C, *(gp_Pln*)pp_P);
	C->NativeInstance = h_C.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaCurveCurve
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_ExtremaCurveCurve::GeomAPI_ExtremaCurveCurve()
	: BaseClass<::GeomAPI_ExtremaCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_ExtremaCurveCurve();
}

Macad::Occt::GeomAPI_ExtremaCurveCurve::GeomAPI_ExtremaCurveCurve(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2)
	: BaseClass<::GeomAPI_ExtremaCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom_Curve) h_C2 = C2->NativeInstance;
	_NativeInstance = new ::GeomAPI_ExtremaCurveCurve(h_C1, h_C2);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
}

Macad::Occt::GeomAPI_ExtremaCurveCurve::GeomAPI_ExtremaCurveCurve(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2, double U1min, double U1max, double U2min, double U2max)
	: BaseClass<::GeomAPI_ExtremaCurveCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom_Curve) h_C2 = C2->NativeInstance;
	_NativeInstance = new ::GeomAPI_ExtremaCurveCurve(h_C1, h_C2, U1min, U1max, U2min, U2max);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
}

void Macad::Occt::GeomAPI_ExtremaCurveCurve::Init(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2)
{
	Handle(::Geom_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom_Curve) h_C2 = C2->NativeInstance;
	((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Init(h_C1, h_C2);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
}

void Macad::Occt::GeomAPI_ExtremaCurveCurve::Init(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2, double U1min, double U1max, double U2min, double U2max)
{
	Handle(::Geom_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom_Curve) h_C2 = C2->NativeInstance;
	((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Init(h_C1, h_C2, U1min, U1max, U2min, U2max);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
}

int Macad::Occt::GeomAPI_ExtremaCurveCurve::NbExtrema()
{
	return ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->NbExtrema();
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
	((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Parameters(Index, *(Standard_Real*)pp_U1, *(Standard_Real*)pp_U2);
}

double Macad::Occt::GeomAPI_ExtremaCurveCurve::Distance(int Index)
{
	return ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->Distance(Index);
}

bool Macad::Occt::GeomAPI_ExtremaCurveCurve::IsParallel()
{
	return ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->IsParallel();
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
	((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->LowerDistanceParameters(*(Standard_Real*)pp_U1, *(Standard_Real*)pp_U2);
}

double Macad::Occt::GeomAPI_ExtremaCurveCurve::LowerDistance()
{
	return ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->LowerDistance();
}

bool Macad::Occt::GeomAPI_ExtremaCurveCurve::TotalNearestPoints(Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	return ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->TotalNearestPoints(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

bool Macad::Occt::GeomAPI_ExtremaCurveCurve::TotalLowerDistanceParameters(double% U1, double% U2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	return ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->TotalLowerDistanceParameters(*(Standard_Real*)pp_U1, *(Standard_Real*)pp_U2);
}

double Macad::Occt::GeomAPI_ExtremaCurveCurve::TotalLowerDistance()
{
	return ((::GeomAPI_ExtremaCurveCurve*)_NativeInstance)->TotalLowerDistance();
}




//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaCurveSurface
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_ExtremaCurveSurface::GeomAPI_ExtremaCurveSurface()
	: BaseClass<::GeomAPI_ExtremaCurveSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_ExtremaCurveSurface();
}

Macad::Occt::GeomAPI_ExtremaCurveSurface::GeomAPI_ExtremaCurveSurface(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface)
	: BaseClass<::GeomAPI_ExtremaCurveSurface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_Curve = Curve->NativeInstance;
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	_NativeInstance = new ::GeomAPI_ExtremaCurveSurface(h_Curve, h_Surface);
	Curve->NativeInstance = h_Curve.get();
	Surface->NativeInstance = h_Surface.get();
}

Macad::Occt::GeomAPI_ExtremaCurveSurface::GeomAPI_ExtremaCurveSurface(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface, double Wmin, double Wmax, double Umin, double Umax, double Vmin, double Vmax)
	: BaseClass<::GeomAPI_ExtremaCurveSurface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_Curve = Curve->NativeInstance;
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	_NativeInstance = new ::GeomAPI_ExtremaCurveSurface(h_Curve, h_Surface, Wmin, Wmax, Umin, Umax, Vmin, Vmax);
	Curve->NativeInstance = h_Curve.get();
	Surface->NativeInstance = h_Surface.get();
}

void Macad::Occt::GeomAPI_ExtremaCurveSurface::Init(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface)
{
	Handle(::Geom_Curve) h_Curve = Curve->NativeInstance;
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Init(h_Curve, h_Surface);
	Curve->NativeInstance = h_Curve.get();
	Surface->NativeInstance = h_Surface.get();
}

void Macad::Occt::GeomAPI_ExtremaCurveSurface::Init(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface, double Wmin, double Wmax, double Umin, double Umax, double Vmin, double Vmax)
{
	Handle(::Geom_Curve) h_Curve = Curve->NativeInstance;
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Init(h_Curve, h_Surface, Wmin, Wmax, Umin, Umax, Vmin, Vmax);
	Curve->NativeInstance = h_Curve.get();
	Surface->NativeInstance = h_Surface.get();
}

int Macad::Occt::GeomAPI_ExtremaCurveSurface::NbExtrema()
{
	return ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->NbExtrema();
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
	((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Parameters(Index, *(Standard_Real*)pp_W, *(Standard_Real*)pp_U, *(Standard_Real*)pp_V);
}

double Macad::Occt::GeomAPI_ExtremaCurveSurface::Distance(int Index)
{
	return ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->Distance(Index);
}

bool Macad::Occt::GeomAPI_ExtremaCurveSurface::IsParallel()
{
	return ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->IsParallel();
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
	((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->LowerDistanceParameters(*(Standard_Real*)pp_W, *(Standard_Real*)pp_U, *(Standard_Real*)pp_V);
}

double Macad::Occt::GeomAPI_ExtremaCurveSurface::LowerDistance()
{
	return ((::GeomAPI_ExtremaCurveSurface*)_NativeInstance)->LowerDistance();
}




//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaSurfaceSurface
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_ExtremaSurfaceSurface::GeomAPI_ExtremaSurfaceSurface()
	: BaseClass<::GeomAPI_ExtremaSurfaceSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_ExtremaSurfaceSurface();
}

Macad::Occt::GeomAPI_ExtremaSurfaceSurface::GeomAPI_ExtremaSurfaceSurface(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2)
	: BaseClass<::GeomAPI_ExtremaSurfaceSurface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S1 = S1->NativeInstance;
	Handle(::Geom_Surface) h_S2 = S2->NativeInstance;
	_NativeInstance = new ::GeomAPI_ExtremaSurfaceSurface(h_S1, h_S2);
	S1->NativeInstance = h_S1.get();
	S2->NativeInstance = h_S2.get();
}

Macad::Occt::GeomAPI_ExtremaSurfaceSurface::GeomAPI_ExtremaSurfaceSurface(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double U1min, double U1max, double V1min, double V1max, double U2min, double U2max, double V2min, double V2max)
	: BaseClass<::GeomAPI_ExtremaSurfaceSurface>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S1 = S1->NativeInstance;
	Handle(::Geom_Surface) h_S2 = S2->NativeInstance;
	_NativeInstance = new ::GeomAPI_ExtremaSurfaceSurface(h_S1, h_S2, U1min, U1max, V1min, V1max, U2min, U2max, V2min, V2max);
	S1->NativeInstance = h_S1.get();
	S2->NativeInstance = h_S2.get();
}

Macad::Occt::GeomAPI_ExtremaSurfaceSurface::GeomAPI_ExtremaSurfaceSurface(Macad::Occt::GeomAPI_ExtremaSurfaceSurface^ parameter1)
	: BaseClass<::GeomAPI_ExtremaSurfaceSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_ExtremaSurfaceSurface(*(::GeomAPI_ExtremaSurfaceSurface*)parameter1->NativeInstance);
}

void Macad::Occt::GeomAPI_ExtremaSurfaceSurface::Init(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2)
{
	Handle(::Geom_Surface) h_S1 = S1->NativeInstance;
	Handle(::Geom_Surface) h_S2 = S2->NativeInstance;
	((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Init(h_S1, h_S2);
	S1->NativeInstance = h_S1.get();
	S2->NativeInstance = h_S2.get();
}

void Macad::Occt::GeomAPI_ExtremaSurfaceSurface::Init(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double U1min, double U1max, double V1min, double V1max, double U2min, double U2max, double V2min, double V2max)
{
	Handle(::Geom_Surface) h_S1 = S1->NativeInstance;
	Handle(::Geom_Surface) h_S2 = S2->NativeInstance;
	((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Init(h_S1, h_S2, U1min, U1max, V1min, V1max, U2min, U2max, V2min, V2max);
	S1->NativeInstance = h_S1.get();
	S2->NativeInstance = h_S2.get();
}

int Macad::Occt::GeomAPI_ExtremaSurfaceSurface::NbExtrema()
{
	return ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->NbExtrema();
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
	((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Parameters(Index, *(Standard_Real*)pp_U1, *(Standard_Real*)pp_V1, *(Standard_Real*)pp_U2, *(Standard_Real*)pp_V2);
}

double Macad::Occt::GeomAPI_ExtremaSurfaceSurface::Distance(int Index)
{
	return ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->Distance(Index);
}

bool Macad::Occt::GeomAPI_ExtremaSurfaceSurface::IsParallel()
{
	return ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->IsParallel();
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
	((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->LowerDistanceParameters(*(Standard_Real*)pp_U1, *(Standard_Real*)pp_V1, *(Standard_Real*)pp_U2, *(Standard_Real*)pp_V2);
}

double Macad::Occt::GeomAPI_ExtremaSurfaceSurface::LowerDistance()
{
	return ((::GeomAPI_ExtremaSurfaceSurface*)_NativeInstance)->LowerDistance();
}




//---------------------------------------------------------------------
//  Class  GeomAPI_IntCS
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_IntCS::GeomAPI_IntCS()
	: BaseClass<::GeomAPI_IntCS>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_IntCS();
}

Macad::Occt::GeomAPI_IntCS::GeomAPI_IntCS(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S)
	: BaseClass<::GeomAPI_IntCS>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::GeomAPI_IntCS(h_C, h_S);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::GeomAPI_IntCS::GeomAPI_IntCS(Macad::Occt::GeomAPI_IntCS^ parameter1)
	: BaseClass<::GeomAPI_IntCS>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_IntCS(*(::GeomAPI_IntCS*)parameter1->NativeInstance);
}

void Macad::Occt::GeomAPI_IntCS::Perform(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::GeomAPI_IntCS*)_NativeInstance)->Perform(h_C, h_S);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::GeomAPI_IntCS::IsDone()
{
	return ((::GeomAPI_IntCS*)_NativeInstance)->IsDone();
}

int Macad::Occt::GeomAPI_IntCS::NbPoints()
{
	return ((::GeomAPI_IntCS*)_NativeInstance)->NbPoints();
}

Macad::Occt::Pnt Macad::Occt::GeomAPI_IntCS::Point(int Index)
{
	return Macad::Occt::Pnt(((::GeomAPI_IntCS*)_NativeInstance)->Point(Index));
}

void Macad::Occt::GeomAPI_IntCS::Parameters(int Index, double% U, double% V, double% W)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	pin_ptr<double> pp_W = &W;
	((::GeomAPI_IntCS*)_NativeInstance)->Parameters(Index, *(Standard_Real*)pp_U, *(Standard_Real*)pp_V, *(Standard_Real*)pp_W);
}

int Macad::Occt::GeomAPI_IntCS::NbSegments()
{
	return ((::GeomAPI_IntCS*)_NativeInstance)->NbSegments();
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomAPI_IntCS::Segment(int Index)
{
	Handle(::Geom_Curve) _result;
	_result = ((::GeomAPI_IntCS*)_NativeInstance)->Segment(Index);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

void Macad::Occt::GeomAPI_IntCS::Parameters(int Index, double% U1, double% V1, double% U2, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V2 = &V2;
	((::GeomAPI_IntCS*)_NativeInstance)->Parameters(Index, *(Standard_Real*)pp_U1, *(Standard_Real*)pp_V1, *(Standard_Real*)pp_U2, *(Standard_Real*)pp_V2);
}




//---------------------------------------------------------------------
//  Class  GeomAPI_Interpolate
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_Interpolate::GeomAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt^ Points, bool PeriodicFlag, double Tolerance)
	: BaseClass<::GeomAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
	Handle(::TColgp_HArray1OfPnt) h_Points = Points->NativeInstance;
	_NativeInstance = new ::GeomAPI_Interpolate(h_Points, PeriodicFlag, Tolerance);
	Points->NativeInstance = h_Points.get();
}

Macad::Occt::GeomAPI_Interpolate::GeomAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt^ Points, Macad::Occt::TColStd_HArray1OfReal^ Parameters, bool PeriodicFlag, double Tolerance)
	: BaseClass<::GeomAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
	Handle(::TColgp_HArray1OfPnt) h_Points = Points->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_Parameters = Parameters->NativeInstance;
	_NativeInstance = new ::GeomAPI_Interpolate(h_Points, h_Parameters, PeriodicFlag, Tolerance);
	Points->NativeInstance = h_Points.get();
	Parameters->NativeInstance = h_Parameters.get();
}

Macad::Occt::GeomAPI_Interpolate::GeomAPI_Interpolate(Macad::Occt::GeomAPI_Interpolate^ parameter1)
	: BaseClass<::GeomAPI_Interpolate>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_Interpolate(*(::GeomAPI_Interpolate*)parameter1->NativeInstance);
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
	Handle(::TColStd_HArray1OfBoolean) h_TangentFlags = TangentFlags->NativeInstance;
	((::GeomAPI_Interpolate*)_NativeInstance)->Load(*(::TColgp_Array1OfVec*)Tangents->NativeInstance, h_TangentFlags, Scale);
	TangentFlags->NativeInstance = h_TangentFlags.get();
}

void Macad::Occt::GeomAPI_Interpolate::Load(Macad::Occt::TColgp_Array1OfVec^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags)
{
	Handle(::TColStd_HArray1OfBoolean) h_TangentFlags = TangentFlags->NativeInstance;
	((::GeomAPI_Interpolate*)_NativeInstance)->Load(*(::TColgp_Array1OfVec*)Tangents->NativeInstance, h_TangentFlags, true);
	TangentFlags->NativeInstance = h_TangentFlags.get();
}

void Macad::Occt::GeomAPI_Interpolate::ClearTangents()
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}

void Macad::Occt::GeomAPI_Interpolate::Perform()
{
	((::GeomAPI_Interpolate*)_NativeInstance)->Perform();
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::GeomAPI_Interpolate::Curve()
{
	Handle(::Geom_BSplineCurve) _result;
	_result = ((::GeomAPI_Interpolate*)_NativeInstance)->Curve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}

bool Macad::Occt::GeomAPI_Interpolate::IsDone()
{
	return ((::GeomAPI_Interpolate*)_NativeInstance)->IsDone();
}




//---------------------------------------------------------------------
//  Class  GeomAPI_IntSS
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_IntSS::GeomAPI_IntSS()
	: BaseClass<::GeomAPI_IntSS>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_IntSS();
}

Macad::Occt::GeomAPI_IntSS::GeomAPI_IntSS(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double Tol)
	: BaseClass<::GeomAPI_IntSS>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S1 = S1->NativeInstance;
	Handle(::Geom_Surface) h_S2 = S2->NativeInstance;
	_NativeInstance = new ::GeomAPI_IntSS(h_S1, h_S2, Tol);
	S1->NativeInstance = h_S1.get();
	S2->NativeInstance = h_S2.get();
}

Macad::Occt::GeomAPI_IntSS::GeomAPI_IntSS(Macad::Occt::GeomAPI_IntSS^ parameter1)
	: BaseClass<::GeomAPI_IntSS>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_IntSS(*(::GeomAPI_IntSS*)parameter1->NativeInstance);
}

void Macad::Occt::GeomAPI_IntSS::Perform(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double Tol)
{
	Handle(::Geom_Surface) h_S1 = S1->NativeInstance;
	Handle(::Geom_Surface) h_S2 = S2->NativeInstance;
	((::GeomAPI_IntSS*)_NativeInstance)->Perform(h_S1, h_S2, Tol);
	S1->NativeInstance = h_S1.get();
	S2->NativeInstance = h_S2.get();
}

bool Macad::Occt::GeomAPI_IntSS::IsDone()
{
	return ((::GeomAPI_IntSS*)_NativeInstance)->IsDone();
}

int Macad::Occt::GeomAPI_IntSS::NbLines()
{
	return ((::GeomAPI_IntSS*)_NativeInstance)->NbLines();
}

Macad::Occt::Geom_Curve^ Macad::Occt::GeomAPI_IntSS::Line(int Index)
{
	Handle(::Geom_Curve) _result;
	_result = ((::GeomAPI_IntSS*)_NativeInstance)->Line(Index);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  GeomAPI_PointsToBSpline
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline()
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline();
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, *(::TColStd_Array1OfReal*)Parameters->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::TColgp_Array1OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSpline::GeomAPI_PointsToBSpline(Macad::Occt::GeomAPI_PointsToBSpline^ parameter1)
	: BaseClass<::GeomAPI_PointsToBSpline>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSpline(*(::GeomAPI_PointsToBSpline*)parameter1->NativeInstance);
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
	Handle(::Geom_BSplineCurve) _result;
	_result = ((::GeomAPI_PointsToBSpline*)_NativeInstance)->Curve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted( _result.get());
}

bool Macad::Occt::GeomAPI_PointsToBSpline::IsDone()
{
	return ((::GeomAPI_PointsToBSpline*)_NativeInstance)->IsDone();
}




//---------------------------------------------------------------------
//  Class  GeomAPI_PointsToBSplineSurface
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface()
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface();
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, DegMin, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, 3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColgp_Array2OfPnt*)Points->NativeInstance, Weight1, Weight2, Weight3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, (::GeomAbs_Shape)Continuity, Tol3D);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, (::GeomAbs_Shape)Continuity, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, DegMax, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, DegMin, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::TColStd_Array2OfReal*)ZPoints->NativeInstance, X0, dX, Y0, dY, 3, 8, GeomAbs_C2, 0.001);
}

Macad::Occt::GeomAPI_PointsToBSplineSurface::GeomAPI_PointsToBSplineSurface(Macad::Occt::GeomAPI_PointsToBSplineSurface^ parameter1)
	: BaseClass<::GeomAPI_PointsToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_PointsToBSplineSurface(*(::GeomAPI_PointsToBSplineSurface*)parameter1->NativeInstance);
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
	Handle(::Geom_BSplineSurface) _result;
	_result = ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted( _result.get());
}

bool Macad::Occt::GeomAPI_PointsToBSplineSurface::IsDone()
{
	return ((::GeomAPI_PointsToBSplineSurface*)_NativeInstance)->IsDone();
}




//---------------------------------------------------------------------
//  Class  GeomAPI_ProjectPointOnCurve
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_ProjectPointOnCurve::GeomAPI_ProjectPointOnCurve()
	: BaseClass<::GeomAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_ProjectPointOnCurve();
}

Macad::Occt::GeomAPI_ProjectPointOnCurve::GeomAPI_ProjectPointOnCurve(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve)
	: BaseClass<::GeomAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	Handle(::Geom_Curve) h_Curve = Curve->NativeInstance;
	_NativeInstance = new ::GeomAPI_ProjectPointOnCurve(*(gp_Pnt*)pp_P, h_Curve);
	Curve->NativeInstance = h_Curve.get();
}

Macad::Occt::GeomAPI_ProjectPointOnCurve::GeomAPI_ProjectPointOnCurve(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve, double Umin, double Usup)
	: BaseClass<::GeomAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	Handle(::Geom_Curve) h_Curve = Curve->NativeInstance;
	_NativeInstance = new ::GeomAPI_ProjectPointOnCurve(*(gp_Pnt*)pp_P, h_Curve, Umin, Usup);
	Curve->NativeInstance = h_Curve.get();
}

Macad::Occt::GeomAPI_ProjectPointOnCurve::GeomAPI_ProjectPointOnCurve(Macad::Occt::GeomAPI_ProjectPointOnCurve^ parameter1)
	: BaseClass<::GeomAPI_ProjectPointOnCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_ProjectPointOnCurve(*(::GeomAPI_ProjectPointOnCurve*)parameter1->NativeInstance);
}

void Macad::Occt::GeomAPI_ProjectPointOnCurve::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	Handle(::Geom_Curve) h_Curve = Curve->NativeInstance;
	((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, h_Curve);
	Curve->NativeInstance = h_Curve.get();
}

void Macad::Occt::GeomAPI_ProjectPointOnCurve::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve, double Umin, double Usup)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	Handle(::Geom_Curve) h_Curve = Curve->NativeInstance;
	((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, h_Curve, Umin, Usup);
	Curve->NativeInstance = h_Curve.get();
}

void Macad::Occt::GeomAPI_ProjectPointOnCurve::Init(Macad::Occt::Geom_Curve^ Curve, double Umin, double Usup)
{
	Handle(::Geom_Curve) h_Curve = Curve->NativeInstance;
	((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Init(h_Curve, Umin, Usup);
	Curve->NativeInstance = h_Curve.get();
}

void Macad::Occt::GeomAPI_ProjectPointOnCurve::Perform(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P);
}

int Macad::Occt::GeomAPI_ProjectPointOnCurve::NbPoints()
{
	return ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->NbPoints();
}

Macad::Occt::Pnt Macad::Occt::GeomAPI_ProjectPointOnCurve::Point(int Index)
{
	return Macad::Occt::Pnt(((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Point(Index));
}

double Macad::Occt::GeomAPI_ProjectPointOnCurve::Parameter(int Index)
{
	return ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Parameter(Index);
}

void Macad::Occt::GeomAPI_ProjectPointOnCurve::Parameter(int Index, double% U)
{
	pin_ptr<double> pp_U = &U;
	((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Parameter(Index, *(Standard_Real*)pp_U);
}

double Macad::Occt::GeomAPI_ProjectPointOnCurve::Distance(int Index)
{
	return ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Distance(Index);
}

Macad::Occt::Pnt Macad::Occt::GeomAPI_ProjectPointOnCurve::NearestPoint()
{
	return Macad::Occt::Pnt(((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->NearestPoint());
}

double Macad::Occt::GeomAPI_ProjectPointOnCurve::LowerDistanceParameter()
{
	return ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->LowerDistanceParameter();
}

double Macad::Occt::GeomAPI_ProjectPointOnCurve::LowerDistance()
{
	return ((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->LowerDistance();
}

Macad::Occt::Extrema_ExtPC^ Macad::Occt::GeomAPI_ProjectPointOnCurve::Extrema()
{
	::Extrema_ExtPC* _result = new ::Extrema_ExtPC();
	*_result =  (::Extrema_ExtPC)((::GeomAPI_ProjectPointOnCurve*)_NativeInstance)->Extrema();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_ExtPC(_result);
}




//---------------------------------------------------------------------
//  Class  GeomAPI_ProjectPointOnSurf
//---------------------------------------------------------------------

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf()
	: BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::GeomAPI_ProjectPointOnSurf();
}

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface)
	: BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	_NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, h_Surface, Extrema_ExtAlgo_Grad);
	Surface->NativeInstance = h_Surface.get();
}

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Tolerance)
	: BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	_NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, h_Surface, Tolerance, Extrema_ExtAlgo_Grad);
	Surface->NativeInstance = h_Surface.get();
}

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance)
	: BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	_NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, h_Surface, Umin, Usup, Vmin, Vsup, Tolerance, Extrema_ExtAlgo_Grad);
	Surface->NativeInstance = h_Surface.get();
}

Macad::Occt::GeomAPI_ProjectPointOnSurf::GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup)
	: BaseClass<::GeomAPI_ProjectPointOnSurf>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	_NativeInstance = new ::GeomAPI_ProjectPointOnSurf(*(gp_Pnt*)pp_P, h_Surface, Umin, Usup, Vmin, Vsup, Extrema_ExtAlgo_Grad);
	Surface->NativeInstance = h_Surface.get();
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Tolerance)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, h_Surface, Tolerance, Extrema_ExtAlgo_Grad);
	Surface->NativeInstance = h_Surface.get();
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, h_Surface, Extrema_ExtAlgo_Grad);
	Surface->NativeInstance = h_Surface.get();
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, h_Surface, Umin, Usup, Vmin, Vsup, Tolerance, Extrema_ExtAlgo_Grad);
	Surface->NativeInstance = h_Surface.get();
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(*(gp_Pnt*)pp_P, h_Surface, Umin, Usup, Vmin, Vsup, Extrema_ExtAlgo_Grad);
	Surface->NativeInstance = h_Surface.get();
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance)
{
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(h_Surface, Umin, Usup, Vmin, Vsup, Tolerance, Extrema_ExtAlgo_Grad);
	Surface->NativeInstance = h_Surface.get();
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Init(Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup)
{
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Init(h_Surface, Umin, Usup, Vmin, Vsup, Extrema_ExtAlgo_Grad);
	Surface->NativeInstance = h_Surface.get();
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Perform(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P);
}

bool Macad::Occt::GeomAPI_ProjectPointOnSurf::IsDone()
{
	return ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->IsDone();
}

int Macad::Occt::GeomAPI_ProjectPointOnSurf::NbPoints()
{
	return ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->NbPoints();
}

Macad::Occt::Pnt Macad::Occt::GeomAPI_ProjectPointOnSurf::Point(int Index)
{
	return Macad::Occt::Pnt(((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Point(Index));
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::Parameters(int Index, double% U, double% V)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Parameters(Index, *(Standard_Real*)pp_U, *(Standard_Real*)pp_V);
}

double Macad::Occt::GeomAPI_ProjectPointOnSurf::Distance(int Index)
{
	return ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->Distance(Index);
}

Macad::Occt::Pnt Macad::Occt::GeomAPI_ProjectPointOnSurf::NearestPoint()
{
	return Macad::Occt::Pnt(((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->NearestPoint());
}

void Macad::Occt::GeomAPI_ProjectPointOnSurf::LowerDistanceParameters(double% U, double% V)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->LowerDistanceParameters(*(Standard_Real*)pp_U, *(Standard_Real*)pp_V);
}

double Macad::Occt::GeomAPI_ProjectPointOnSurf::LowerDistance()
{
	return ((::GeomAPI_ProjectPointOnSurf*)_NativeInstance)->LowerDistance();
}



