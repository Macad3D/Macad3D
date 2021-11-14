// Generated wrapper code for package BRepLProp

#include "OcctPCH.h"
#include "BRepLProp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "GeomAbs.h"
#include "BRepAdaptor.h"
#include "Standard.h"
#include "BRepLProp.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  BRepLProp
//---------------------------------------------------------------------

Macad::Occt::BRepLProp::BRepLProp()
	: BaseClass<::BRepLProp>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp();
}

Macad::Occt::BRepLProp::BRepLProp(Macad::Occt::BRepLProp^ parameter1)
	: BaseClass<::BRepLProp>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp(*(::BRepLProp*)parameter1->NativeInstance);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepLProp::Continuity(Macad::Occt::BRepAdaptor_Curve^ C1, Macad::Occt::BRepAdaptor_Curve^ C2, double u1, double u2, double tl, double ta)
{
	return (Macad::Occt::GeomAbs_Shape)::BRepLProp::Continuity(*(::BRepAdaptor_Curve*)C1->NativeInstance, *(::BRepAdaptor_Curve*)C2->NativeInstance, u1, u2, tl, ta);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepLProp::Continuity(Macad::Occt::BRepAdaptor_Curve^ C1, Macad::Occt::BRepAdaptor_Curve^ C2, double u1, double u2)
{
	return (Macad::Occt::GeomAbs_Shape)::BRepLProp::Continuity(*(::BRepAdaptor_Curve*)C1->NativeInstance, *(::BRepAdaptor_Curve*)C2->NativeInstance, u1, u2);
}




//---------------------------------------------------------------------
//  Class  BRepLProp_CurveTool
//---------------------------------------------------------------------

Macad::Occt::BRepLProp_CurveTool::BRepLProp_CurveTool()
	: BaseClass<::BRepLProp_CurveTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_CurveTool();
}

Macad::Occt::BRepLProp_CurveTool::BRepLProp_CurveTool(Macad::Occt::BRepLProp_CurveTool^ parameter1)
	: BaseClass<::BRepLProp_CurveTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_CurveTool(*(::BRepLProp_CurveTool*)parameter1->NativeInstance);
}

void Macad::Occt::BRepLProp_CurveTool::Value(Macad::Occt::BRepAdaptor_Curve^ C, double U, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::BRepLProp_CurveTool::Value(*(::BRepAdaptor_Curve*)C->NativeInstance, U, *(gp_Pnt*)pp_P);
}

void Macad::Occt::BRepLProp_CurveTool::D1(Macad::Occt::BRepAdaptor_Curve^ C, double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	::BRepLProp_CurveTool::D1(*(::BRepAdaptor_Curve*)C->NativeInstance, U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void Macad::Occt::BRepLProp_CurveTool::D2(Macad::Occt::BRepAdaptor_Curve^ C, double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	::BRepLProp_CurveTool::D2(*(::BRepAdaptor_Curve*)C->NativeInstance, U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::BRepLProp_CurveTool::D3(Macad::Occt::BRepAdaptor_Curve^ C, double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	::BRepLProp_CurveTool::D3(*(::BRepAdaptor_Curve*)C->NativeInstance, U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

int Macad::Occt::BRepLProp_CurveTool::Continuity(Macad::Occt::BRepAdaptor_Curve^ C)
{
	return ::BRepLProp_CurveTool::Continuity(*(::BRepAdaptor_Curve*)C->NativeInstance);
}

double Macad::Occt::BRepLProp_CurveTool::FirstParameter(Macad::Occt::BRepAdaptor_Curve^ C)
{
	return ::BRepLProp_CurveTool::FirstParameter(*(::BRepAdaptor_Curve*)C->NativeInstance);
}

double Macad::Occt::BRepLProp_CurveTool::LastParameter(Macad::Occt::BRepAdaptor_Curve^ C)
{
	return ::BRepLProp_CurveTool::LastParameter(*(::BRepAdaptor_Curve*)C->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepLProp_CLProps
//---------------------------------------------------------------------

Macad::Occt::BRepLProp_CLProps::BRepLProp_CLProps(Macad::Occt::BRepAdaptor_Curve^ C, int N, double Resolution)
	: BaseClass<::BRepLProp_CLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_CLProps(*(::BRepAdaptor_Curve*)C->NativeInstance, N, Resolution);
}

Macad::Occt::BRepLProp_CLProps::BRepLProp_CLProps(Macad::Occt::BRepAdaptor_Curve^ C, double U, int N, double Resolution)
	: BaseClass<::BRepLProp_CLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_CLProps(*(::BRepAdaptor_Curve*)C->NativeInstance, U, N, Resolution);
}

Macad::Occt::BRepLProp_CLProps::BRepLProp_CLProps(int N, double Resolution)
	: BaseClass<::BRepLProp_CLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_CLProps(N, Resolution);
}

Macad::Occt::BRepLProp_CLProps::BRepLProp_CLProps(Macad::Occt::BRepLProp_CLProps^ parameter1)
	: BaseClass<::BRepLProp_CLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_CLProps(*(::BRepLProp_CLProps*)parameter1->NativeInstance);
}

void Macad::Occt::BRepLProp_CLProps::SetParameter(double U)
{
	((::BRepLProp_CLProps*)_NativeInstance)->SetParameter(U);
}

void Macad::Occt::BRepLProp_CLProps::SetCurve(Macad::Occt::BRepAdaptor_Curve^ C)
{
	((::BRepLProp_CLProps*)_NativeInstance)->SetCurve(*(::BRepAdaptor_Curve*)C->NativeInstance);
}

Macad::Occt::Pnt Macad::Occt::BRepLProp_CLProps::Value()
{
	return Macad::Occt::Pnt(((::BRepLProp_CLProps*)_NativeInstance)->Value());
}

Macad::Occt::Vec Macad::Occt::BRepLProp_CLProps::D1()
{
	return Macad::Occt::Vec(((::BRepLProp_CLProps*)_NativeInstance)->D1());
}

Macad::Occt::Vec Macad::Occt::BRepLProp_CLProps::D2()
{
	return Macad::Occt::Vec(((::BRepLProp_CLProps*)_NativeInstance)->D2());
}

Macad::Occt::Vec Macad::Occt::BRepLProp_CLProps::D3()
{
	return Macad::Occt::Vec(((::BRepLProp_CLProps*)_NativeInstance)->D3());
}

bool Macad::Occt::BRepLProp_CLProps::IsTangentDefined()
{
	return ((::BRepLProp_CLProps*)_NativeInstance)->IsTangentDefined();
}

void Macad::Occt::BRepLProp_CLProps::Tangent(Macad::Occt::Dir% D)
{
	pin_ptr<Macad::Occt::Dir> pp_D = &D;
	((::BRepLProp_CLProps*)_NativeInstance)->Tangent(*(gp_Dir*)pp_D);
}

double Macad::Occt::BRepLProp_CLProps::Curvature()
{
	return ((::BRepLProp_CLProps*)_NativeInstance)->Curvature();
}

void Macad::Occt::BRepLProp_CLProps::Normal(Macad::Occt::Dir% N)
{
	pin_ptr<Macad::Occt::Dir> pp_N = &N;
	((::BRepLProp_CLProps*)_NativeInstance)->Normal(*(gp_Dir*)pp_N);
}

void Macad::Occt::BRepLProp_CLProps::CentreOfCurvature(Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::BRepLProp_CLProps*)_NativeInstance)->CentreOfCurvature(*(gp_Pnt*)pp_P);
}




//---------------------------------------------------------------------
//  Class  BRepLProp_SurfaceTool
//---------------------------------------------------------------------

Macad::Occt::BRepLProp_SurfaceTool::BRepLProp_SurfaceTool()
	: BaseClass<::BRepLProp_SurfaceTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_SurfaceTool();
}

Macad::Occt::BRepLProp_SurfaceTool::BRepLProp_SurfaceTool(Macad::Occt::BRepLProp_SurfaceTool^ parameter1)
	: BaseClass<::BRepLProp_SurfaceTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_SurfaceTool(*(::BRepLProp_SurfaceTool*)parameter1->NativeInstance);
}

void Macad::Occt::BRepLProp_SurfaceTool::Value(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::BRepLProp_SurfaceTool::Value(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, *(gp_Pnt*)pp_P);
}

void Macad::Occt::BRepLProp_SurfaceTool::D1(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
	pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
	::BRepLProp_SurfaceTool::D1(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void Macad::Occt::BRepLProp_SurfaceTool::D2(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% DUV)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
	pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
	pin_ptr<Macad::Occt::Vec> pp_D2U = &D2U;
	pin_ptr<Macad::Occt::Vec> pp_D2V = &D2V;
	pin_ptr<Macad::Occt::Vec> pp_DUV = &DUV;
	::BRepLProp_SurfaceTool::D2(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_DUV);
}

Macad::Occt::Vec Macad::Occt::BRepLProp_SurfaceTool::DN(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, int IU, int IV)
{
	return Macad::Occt::Vec(::BRepLProp_SurfaceTool::DN(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, IU, IV));
}

int Macad::Occt::BRepLProp_SurfaceTool::Continuity(Macad::Occt::BRepAdaptor_Surface^ S)
{
	return ::BRepLProp_SurfaceTool::Continuity(*(::BRepAdaptor_Surface*)S->NativeInstance);
}

void Macad::Occt::BRepLProp_SurfaceTool::Bounds(Macad::Occt::BRepAdaptor_Surface^ S, double% U1, double% V1, double% U2, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V2 = &V2;
	::BRepLProp_SurfaceTool::Bounds(*(::BRepAdaptor_Surface*)S->NativeInstance, *(Standard_Real*)pp_U1, *(Standard_Real*)pp_V1, *(Standard_Real*)pp_U2, *(Standard_Real*)pp_V2);
}




//---------------------------------------------------------------------
//  Class  BRepLProp_SLProps
//---------------------------------------------------------------------

Macad::Occt::BRepLProp_SLProps::BRepLProp_SLProps(Macad::Occt::BRepAdaptor_Surface^ S, double U, double V, int N, double Resolution)
	: BaseClass<::BRepLProp_SLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_SLProps(*(::BRepAdaptor_Surface*)S->NativeInstance, U, V, N, Resolution);
}

Macad::Occt::BRepLProp_SLProps::BRepLProp_SLProps(Macad::Occt::BRepAdaptor_Surface^ S, int N, double Resolution)
	: BaseClass<::BRepLProp_SLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_SLProps(*(::BRepAdaptor_Surface*)S->NativeInstance, N, Resolution);
}

Macad::Occt::BRepLProp_SLProps::BRepLProp_SLProps(int N, double Resolution)
	: BaseClass<::BRepLProp_SLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_SLProps(N, Resolution);
}

Macad::Occt::BRepLProp_SLProps::BRepLProp_SLProps(Macad::Occt::BRepLProp_SLProps^ parameter1)
	: BaseClass<::BRepLProp_SLProps>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLProp_SLProps(*(::BRepLProp_SLProps*)parameter1->NativeInstance);
}

void Macad::Occt::BRepLProp_SLProps::SetSurface(Macad::Occt::BRepAdaptor_Surface^ S)
{
	((::BRepLProp_SLProps*)_NativeInstance)->SetSurface(*(::BRepAdaptor_Surface*)S->NativeInstance);
}

void Macad::Occt::BRepLProp_SLProps::SetParameters(double U, double V)
{
	((::BRepLProp_SLProps*)_NativeInstance)->SetParameters(U, V);
}

Macad::Occt::Pnt Macad::Occt::BRepLProp_SLProps::Value()
{
	return Macad::Occt::Pnt(((::BRepLProp_SLProps*)_NativeInstance)->Value());
}

Macad::Occt::Vec Macad::Occt::BRepLProp_SLProps::D1U()
{
	return Macad::Occt::Vec(((::BRepLProp_SLProps*)_NativeInstance)->D1U());
}

Macad::Occt::Vec Macad::Occt::BRepLProp_SLProps::D1V()
{
	return Macad::Occt::Vec(((::BRepLProp_SLProps*)_NativeInstance)->D1V());
}

Macad::Occt::Vec Macad::Occt::BRepLProp_SLProps::D2U()
{
	return Macad::Occt::Vec(((::BRepLProp_SLProps*)_NativeInstance)->D2U());
}

Macad::Occt::Vec Macad::Occt::BRepLProp_SLProps::D2V()
{
	return Macad::Occt::Vec(((::BRepLProp_SLProps*)_NativeInstance)->D2V());
}

Macad::Occt::Vec Macad::Occt::BRepLProp_SLProps::DUV()
{
	return Macad::Occt::Vec(((::BRepLProp_SLProps*)_NativeInstance)->DUV());
}

bool Macad::Occt::BRepLProp_SLProps::IsTangentUDefined()
{
	return ((::BRepLProp_SLProps*)_NativeInstance)->IsTangentUDefined();
}

void Macad::Occt::BRepLProp_SLProps::TangentU(Macad::Occt::Dir% D)
{
	pin_ptr<Macad::Occt::Dir> pp_D = &D;
	((::BRepLProp_SLProps*)_NativeInstance)->TangentU(*(gp_Dir*)pp_D);
}

bool Macad::Occt::BRepLProp_SLProps::IsTangentVDefined()
{
	return ((::BRepLProp_SLProps*)_NativeInstance)->IsTangentVDefined();
}

void Macad::Occt::BRepLProp_SLProps::TangentV(Macad::Occt::Dir% D)
{
	pin_ptr<Macad::Occt::Dir> pp_D = &D;
	((::BRepLProp_SLProps*)_NativeInstance)->TangentV(*(gp_Dir*)pp_D);
}

bool Macad::Occt::BRepLProp_SLProps::IsNormalDefined()
{
	return ((::BRepLProp_SLProps*)_NativeInstance)->IsNormalDefined();
}

Macad::Occt::Dir Macad::Occt::BRepLProp_SLProps::Normal()
{
	return Macad::Occt::Dir(((::BRepLProp_SLProps*)_NativeInstance)->Normal());
}

bool Macad::Occt::BRepLProp_SLProps::IsCurvatureDefined()
{
	return ((::BRepLProp_SLProps*)_NativeInstance)->IsCurvatureDefined();
}

bool Macad::Occt::BRepLProp_SLProps::IsUmbilic()
{
	return ((::BRepLProp_SLProps*)_NativeInstance)->IsUmbilic();
}

double Macad::Occt::BRepLProp_SLProps::MaxCurvature()
{
	return ((::BRepLProp_SLProps*)_NativeInstance)->MaxCurvature();
}

double Macad::Occt::BRepLProp_SLProps::MinCurvature()
{
	return ((::BRepLProp_SLProps*)_NativeInstance)->MinCurvature();
}

void Macad::Occt::BRepLProp_SLProps::CurvatureDirections(Macad::Occt::Dir% MaxD, Macad::Occt::Dir% MinD)
{
	pin_ptr<Macad::Occt::Dir> pp_MaxD = &MaxD;
	pin_ptr<Macad::Occt::Dir> pp_MinD = &MinD;
	((::BRepLProp_SLProps*)_NativeInstance)->CurvatureDirections(*(gp_Dir*)pp_MaxD, *(gp_Dir*)pp_MinD);
}

double Macad::Occt::BRepLProp_SLProps::MeanCurvature()
{
	return ((::BRepLProp_SLProps*)_NativeInstance)->MeanCurvature();
}

double Macad::Occt::BRepLProp_SLProps::GaussianCurvature()
{
	return ((::BRepLProp_SLProps*)_NativeInstance)->GaussianCurvature();
}



