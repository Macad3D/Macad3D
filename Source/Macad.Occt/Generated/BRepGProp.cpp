// Generated wrapper code for package BRepGProp

#include "OcctPCH.h"
#include "BRepGProp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "BRepGProp.h"
#include "Standard.h"
#include "BRepAdaptor.h"
#include "gp.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "TopoDS.h"
#include "GProp.h"
#include "NCollection.h"
#include "TColgp.h"
#include "TopLoc.h"
#include "TopAbs.h"


//---------------------------------------------------------------------
//  Class  BRepGProp_EdgeTool
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_EdgeTool::BRepGProp_EdgeTool()
	: BaseClass<::BRepGProp_EdgeTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_EdgeTool();
}

Macad::Occt::BRepGProp_EdgeTool::BRepGProp_EdgeTool(Macad::Occt::BRepGProp_EdgeTool^ parameter1)
	: BaseClass<::BRepGProp_EdgeTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_EdgeTool(*(::BRepGProp_EdgeTool*)parameter1->NativeInstance);
}

double Macad::Occt::BRepGProp_EdgeTool::FirstParameter(Macad::Occt::BRepAdaptor_Curve^ C)
{
	return ::BRepGProp_EdgeTool::FirstParameter(*(::BRepAdaptor_Curve*)C->NativeInstance);
}

double Macad::Occt::BRepGProp_EdgeTool::LastParameter(Macad::Occt::BRepAdaptor_Curve^ C)
{
	return ::BRepGProp_EdgeTool::LastParameter(*(::BRepAdaptor_Curve*)C->NativeInstance);
}

int Macad::Occt::BRepGProp_EdgeTool::IntegrationOrder(Macad::Occt::BRepAdaptor_Curve^ C)
{
	return ::BRepGProp_EdgeTool::IntegrationOrder(*(::BRepAdaptor_Curve*)C->NativeInstance);
}

Macad::Occt::Pnt Macad::Occt::BRepGProp_EdgeTool::Value(Macad::Occt::BRepAdaptor_Curve^ C, double U)
{
	return Macad::Occt::Pnt(::BRepGProp_EdgeTool::Value(*(::BRepAdaptor_Curve*)C->NativeInstance, U));
}

void Macad::Occt::BRepGProp_EdgeTool::D1(Macad::Occt::BRepAdaptor_Curve^ C, double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	::BRepGProp_EdgeTool::D1(*(::BRepAdaptor_Curve*)C->NativeInstance, U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

int Macad::Occt::BRepGProp_EdgeTool::NbIntervals(Macad::Occt::BRepAdaptor_Curve^ C, Macad::Occt::GeomAbs_Shape S)
{
	return ::BRepGProp_EdgeTool::NbIntervals(*(::BRepAdaptor_Curve*)C->NativeInstance, (::GeomAbs_Shape)S);
}

void Macad::Occt::BRepGProp_EdgeTool::Intervals(Macad::Occt::BRepAdaptor_Curve^ C, Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
	::BRepGProp_EdgeTool::Intervals(*(::BRepAdaptor_Curve*)C->NativeInstance, *(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}




//---------------------------------------------------------------------
//  Class  BRepGProp_Face
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_Face::BRepGProp_Face(bool IsUseSpan)
	: BaseClass<::BRepGProp_Face>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Face(IsUseSpan);
}

Macad::Occt::BRepGProp_Face::BRepGProp_Face(Macad::Occt::TopoDS_Face^ F, bool IsUseSpan)
	: BaseClass<::BRepGProp_Face>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Face(*(::TopoDS_Face*)F->NativeInstance, IsUseSpan);
}

Macad::Occt::BRepGProp_Face::BRepGProp_Face(Macad::Occt::TopoDS_Face^ F)
	: BaseClass<::BRepGProp_Face>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Face(*(::TopoDS_Face*)F->NativeInstance, false);
}

Macad::Occt::BRepGProp_Face::BRepGProp_Face(Macad::Occt::BRepGProp_Face^ parameter1)
	: BaseClass<::BRepGProp_Face>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Face(*(::BRepGProp_Face*)parameter1->NativeInstance);
}

void Macad::Occt::BRepGProp_Face::Load(Macad::Occt::TopoDS_Face^ F)
{
	((::BRepGProp_Face*)_NativeInstance)->Load(*(::TopoDS_Face*)F->NativeInstance);
}

int Macad::Occt::BRepGProp_Face::VIntegrationOrder()
{
	return ((::BRepGProp_Face*)_NativeInstance)->VIntegrationOrder();
}

bool Macad::Occt::BRepGProp_Face::NaturalRestriction()
{
	return ((::BRepGProp_Face*)_NativeInstance)->NaturalRestriction();
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepGProp_Face::GetFace()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::BRepGProp_Face*)_NativeInstance)->GetFace();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::Pnt2d Macad::Occt::BRepGProp_Face::Value2d(double U)
{
	return Macad::Occt::Pnt2d(((::BRepGProp_Face*)_NativeInstance)->Value2d(U));
}

int Macad::Occt::BRepGProp_Face::SIntOrder(double Eps)
{
	return ((::BRepGProp_Face*)_NativeInstance)->SIntOrder(Eps);
}

int Macad::Occt::BRepGProp_Face::SVIntSubs()
{
	return ((::BRepGProp_Face*)_NativeInstance)->SVIntSubs();
}

int Macad::Occt::BRepGProp_Face::SUIntSubs()
{
	return ((::BRepGProp_Face*)_NativeInstance)->SUIntSubs();
}

void Macad::Occt::BRepGProp_Face::UKnots(Macad::Occt::TColStd_Array1OfReal^ Knots)
{
	((::BRepGProp_Face*)_NativeInstance)->UKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance);
}

void Macad::Occt::BRepGProp_Face::VKnots(Macad::Occt::TColStd_Array1OfReal^ Knots)
{
	((::BRepGProp_Face*)_NativeInstance)->VKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance);
}

int Macad::Occt::BRepGProp_Face::LIntOrder(double Eps)
{
	return ((::BRepGProp_Face*)_NativeInstance)->LIntOrder(Eps);
}

int Macad::Occt::BRepGProp_Face::LIntSubs()
{
	return ((::BRepGProp_Face*)_NativeInstance)->LIntSubs();
}

void Macad::Occt::BRepGProp_Face::LKnots(Macad::Occt::TColStd_Array1OfReal^ Knots)
{
	((::BRepGProp_Face*)_NativeInstance)->LKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance);
}

int Macad::Occt::BRepGProp_Face::UIntegrationOrder()
{
	return ((::BRepGProp_Face*)_NativeInstance)->UIntegrationOrder();
}

void Macad::Occt::BRepGProp_Face::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::BRepGProp_Face*)_NativeInstance)->Bounds(*(Standard_Real*)pp_U1, *(Standard_Real*)pp_U2, *(Standard_Real*)pp_V1, *(Standard_Real*)pp_V2);
}

void Macad::Occt::BRepGProp_Face::Normal(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% VNor)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_VNor = &VNor;
	((::BRepGProp_Face*)_NativeInstance)->Normal(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_VNor);
}

bool Macad::Occt::BRepGProp_Face::Load(Macad::Occt::TopoDS_Edge^ E)
{
	return ((::BRepGProp_Face*)_NativeInstance)->Load(*(::TopoDS_Edge*)E->NativeInstance);
}

double Macad::Occt::BRepGProp_Face::FirstParameter()
{
	return ((::BRepGProp_Face*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::BRepGProp_Face::LastParameter()
{
	return ((::BRepGProp_Face*)_NativeInstance)->LastParameter();
}

int Macad::Occt::BRepGProp_Face::IntegrationOrder()
{
	return ((::BRepGProp_Face*)_NativeInstance)->IntegrationOrder();
}

void Macad::Occt::BRepGProp_Face::D12d(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	((::BRepGProp_Face*)_NativeInstance)->D12d(U, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::BRepGProp_Face::Load(bool IsFirstParam, Macad::Occt::GeomAbs_IsoType theIsoType)
{
	((::BRepGProp_Face*)_NativeInstance)->Load(IsFirstParam, (::GeomAbs_IsoType)theIsoType);
}

void Macad::Occt::BRepGProp_Face::GetUKnots(double theUMin, double theUMax, Macad::Occt::TColStd_HArray1OfReal^ theUKnots)
{
	Handle(::TColStd_HArray1OfReal) h_theUKnots = theUKnots->NativeInstance;
	((::BRepGProp_Face*)_NativeInstance)->GetUKnots(theUMin, theUMax, h_theUKnots);
	theUKnots->NativeInstance = h_theUKnots.get();
}

void Macad::Occt::BRepGProp_Face::GetTKnots(double theTMin, double theTMax, Macad::Occt::TColStd_HArray1OfReal^ theTKnots)
{
	Handle(::TColStd_HArray1OfReal) h_theTKnots = theTKnots->NativeInstance;
	((::BRepGProp_Face*)_NativeInstance)->GetTKnots(theTMin, theTMax, h_theTKnots);
	theTKnots->NativeInstance = h_theTKnots.get();
}




//---------------------------------------------------------------------
//  Class  BRepGProp_Domain
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_Domain::BRepGProp_Domain()
	: BaseClass<::BRepGProp_Domain>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Domain();
}

Macad::Occt::BRepGProp_Domain::BRepGProp_Domain(Macad::Occt::TopoDS_Face^ F)
	: BaseClass<::BRepGProp_Domain>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Domain(*(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::BRepGProp_Domain::BRepGProp_Domain(Macad::Occt::BRepGProp_Domain^ parameter1)
	: BaseClass<::BRepGProp_Domain>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Domain(*(::BRepGProp_Domain*)parameter1->NativeInstance);
}

void Macad::Occt::BRepGProp_Domain::Init(Macad::Occt::TopoDS_Face^ F)
{
	((::BRepGProp_Domain*)_NativeInstance)->Init(*(::TopoDS_Face*)F->NativeInstance);
}

bool Macad::Occt::BRepGProp_Domain::More()
{
	return ((::BRepGProp_Domain*)_NativeInstance)->More();
}

void Macad::Occt::BRepGProp_Domain::Init()
{
	((::BRepGProp_Domain*)_NativeInstance)->Init();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepGProp_Domain::Value()
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepGProp_Domain*)_NativeInstance)->Value();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

void Macad::Occt::BRepGProp_Domain::Next()
{
	((::BRepGProp_Domain*)_NativeInstance)->Next();
}




//---------------------------------------------------------------------
//  Class  BRepGProp_Cinert
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_Cinert::BRepGProp_Cinert()
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Cinert();
}

Macad::Occt::BRepGProp_Cinert::BRepGProp_Cinert(Macad::Occt::BRepAdaptor_Curve^ C, Macad::Occt::Pnt CLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_CLocation = &CLocation;
	_NativeInstance = new ::BRepGProp_Cinert(*(::BRepAdaptor_Curve*)C->NativeInstance, *(gp_Pnt*)pp_CLocation);
}

Macad::Occt::BRepGProp_Cinert::BRepGProp_Cinert(Macad::Occt::BRepGProp_Cinert^ parameter1)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Cinert(*(::BRepGProp_Cinert*)parameter1->NativeInstance);
}

void Macad::Occt::BRepGProp_Cinert::SetLocation(Macad::Occt::Pnt CLocation)
{
	pin_ptr<Macad::Occt::Pnt> pp_CLocation = &CLocation;
	((::BRepGProp_Cinert*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_CLocation);
}

void Macad::Occt::BRepGProp_Cinert::Perform(Macad::Occt::BRepAdaptor_Curve^ C)
{
	((::BRepGProp_Cinert*)_NativeInstance)->Perform(*(::BRepAdaptor_Curve*)C->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepGProp_Sinert
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_Sinert::BRepGProp_Sinert()
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Sinert();
}

Macad::Occt::BRepGProp_Sinert::BRepGProp_Sinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt SLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_SLocation = &SLocation;
	_NativeInstance = new ::BRepGProp_Sinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_SLocation);
}

Macad::Occt::BRepGProp_Sinert::BRepGProp_Sinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt SLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_SLocation = &SLocation;
	_NativeInstance = new ::BRepGProp_Sinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_SLocation);
}

Macad::Occt::BRepGProp_Sinert::BRepGProp_Sinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt SLocation, double Eps)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_SLocation = &SLocation;
	_NativeInstance = new ::BRepGProp_Sinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_SLocation, Eps);
}

Macad::Occt::BRepGProp_Sinert::BRepGProp_Sinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt SLocation, double Eps)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_SLocation = &SLocation;
	_NativeInstance = new ::BRepGProp_Sinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_SLocation, Eps);
}

Macad::Occt::BRepGProp_Sinert::BRepGProp_Sinert(Macad::Occt::BRepGProp_Sinert^ parameter1)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Sinert(*(::BRepGProp_Sinert*)parameter1->NativeInstance);
}

void Macad::Occt::BRepGProp_Sinert::SetLocation(Macad::Occt::Pnt SLocation)
{
	pin_ptr<Macad::Occt::Pnt> pp_SLocation = &SLocation;
	((::BRepGProp_Sinert*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_SLocation);
}

void Macad::Occt::BRepGProp_Sinert::Perform(Macad::Occt::BRepGProp_Face^ S)
{
	((::BRepGProp_Sinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance);
}

void Macad::Occt::BRepGProp_Sinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D)
{
	((::BRepGProp_Sinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance);
}

double Macad::Occt::BRepGProp_Sinert::Perform(Macad::Occt::BRepGProp_Face^ S, double Eps)
{
	return ((::BRepGProp_Sinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, Eps);
}

double Macad::Occt::BRepGProp_Sinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, double Eps)
{
	return ((::BRepGProp_Sinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, Eps);
}

double Macad::Occt::BRepGProp_Sinert::GetEpsilon()
{
	return ((::BRepGProp_Sinert*)_NativeInstance)->GetEpsilon();
}




//---------------------------------------------------------------------
//  Class  BRepGProp_Vinert
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert()
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Vinert();
}

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt VLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
	_NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_VLocation);
}

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt VLocation, double Eps)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
	_NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_VLocation, Eps);
}

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O, Macad::Occt::Pnt VLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_O = &O;
	pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
	_NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_O, *(gp_Pnt*)pp_VLocation);
}

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O, Macad::Occt::Pnt VLocation, double Eps)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_O = &O;
	pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
	_NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_O, *(gp_Pnt*)pp_VLocation, Eps);
}

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl, Macad::Occt::Pnt VLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
	_NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_VLocation);
}

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl, Macad::Occt::Pnt VLocation, double Eps)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
	_NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_VLocation, Eps);
}

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt VLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
	_NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_VLocation);
}

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt VLocation, double Eps)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
	_NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_VLocation, Eps);
}

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O, Macad::Occt::Pnt VLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_O = &O;
	pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
	_NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_O, *(gp_Pnt*)pp_VLocation);
}

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O, Macad::Occt::Pnt VLocation, double Eps)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_O = &O;
	pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
	_NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_O, *(gp_Pnt*)pp_VLocation, Eps);
}

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl, Macad::Occt::Pnt VLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
	_NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_VLocation);
}

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl, Macad::Occt::Pnt VLocation, double Eps)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
	_NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_VLocation, Eps);
}

Macad::Occt::BRepGProp_Vinert::BRepGProp_Vinert(Macad::Occt::BRepGProp_Vinert^ parameter1)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Vinert(*(::BRepGProp_Vinert*)parameter1->NativeInstance);
}

void Macad::Occt::BRepGProp_Vinert::SetLocation(Macad::Occt::Pnt VLocation)
{
	pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
	((::BRepGProp_Vinert*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_VLocation);
}

void Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S)
{
	((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance);
}

double Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, double Eps)
{
	return ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, Eps);
}

void Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O)
{
	pin_ptr<Macad::Occt::Pnt> pp_O = &O;
	((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_O);
}

double Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O, double Eps)
{
	pin_ptr<Macad::Occt::Pnt> pp_O = &O;
	return ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_O, Eps);
}

void Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pln*)pp_Pl);
}

double Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl, double Eps)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	return ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pln*)pp_Pl, Eps);
}

void Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D)
{
	((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance);
}

double Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, double Eps)
{
	return ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, Eps);
}

void Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O)
{
	pin_ptr<Macad::Occt::Pnt> pp_O = &O;
	((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_O);
}

double Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O, double Eps)
{
	pin_ptr<Macad::Occt::Pnt> pp_O = &O;
	return ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_O, Eps);
}

void Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pln*)pp_Pl);
}

double Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl, double Eps)
{
	pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
	return ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pln*)pp_Pl, Eps);
}

double Macad::Occt::BRepGProp_Vinert::GetEpsilon()
{
	return ((::BRepGProp_Vinert*)_NativeInstance)->GetEpsilon();
}




//---------------------------------------------------------------------
//  Class  BRepGProp_VinertGK
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK()
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_VinertGK();
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, theIFlag);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation, double theTolerance)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_theLocation, theTolerance, false, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_theLocation, 0.001, false, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, theIFlag);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, theTolerance, false, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, 0.001, false, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, theIFlag);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theTolerance)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, theTolerance, false, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, 0.001, false, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, theIFlag);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, theTolerance, false, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, *(gp_Pnt*)pp_theLocation, 0.001, false, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, theIFlag);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, theTolerance, false, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, 0.001, false, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, theIFlag);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, theTolerance, theCGFlag, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, theTolerance, false, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, *(gp_Pnt*)pp_theLocation, 0.001, false, false);
}

Macad::Occt::BRepGProp_VinertGK::BRepGProp_VinertGK(Macad::Occt::BRepGProp_VinertGK^ parameter1)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_VinertGK(*(::BRepGProp_VinertGK*)parameter1->NativeInstance);
}

void Macad::Occt::BRepGProp_VinertGK::SetLocation(Macad::Occt::Pnt theLocation)
{
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	((::BRepGProp_VinertGK*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLocation);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, double theTolerance, bool theCGFlag, bool theIFlag)
{
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, theTolerance, theCGFlag, theIFlag);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, double theTolerance, bool theCGFlag)
{
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, theTolerance, theCGFlag, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, double theTolerance)
{
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, theTolerance, false, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface)
{
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, 0.001, false, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag, bool theIFlag)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, theCGFlag, theIFlag);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, theCGFlag, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, double theTolerance)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, false, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, 0.001, false, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, double theTolerance, bool theCGFlag, bool theIFlag)
{
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, theTolerance, theCGFlag, theIFlag);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, double theTolerance, bool theCGFlag)
{
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, theTolerance, theCGFlag, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, double theTolerance)
{
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, theTolerance, false, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain)
{
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, 0.001, false, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag, bool theIFlag)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, theCGFlag, theIFlag);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, theCGFlag, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, double theTolerance)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, false, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, 0.001, false, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag, bool theIFlag)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, theCGFlag, theIFlag);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, theCGFlag, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, double theTolerance)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, false, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, 0.001, false, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag, bool theIFlag)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, theCGFlag, theIFlag);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, theCGFlag, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, double theTolerance)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, false, false);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane)
{
	pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
	return ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, 0.001, false, false);
}

double Macad::Occt::BRepGProp_VinertGK::GetErrorReached()
{
	return ((::BRepGProp_VinertGK*)_NativeInstance)->GetErrorReached();
}

double Macad::Occt::BRepGProp_VinertGK::GetAbsolutError()
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}




//---------------------------------------------------------------------
//  Class  BRepGProp
//---------------------------------------------------------------------

Macad::Occt::BRepGProp::BRepGProp()
	: BaseClass<::BRepGProp>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp();
}

Macad::Occt::BRepGProp::BRepGProp(Macad::Occt::BRepGProp^ parameter1)
	: BaseClass<::BRepGProp>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp(*(::BRepGProp*)parameter1->NativeInstance);
}

void Macad::Occt::BRepGProp::LinearProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ LProps, bool SkipShared, bool UseTriangulation)
{
	::BRepGProp::LinearProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)LProps->NativeInstance, SkipShared, UseTriangulation);
}

void Macad::Occt::BRepGProp::LinearProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ LProps, bool SkipShared)
{
	::BRepGProp::LinearProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)LProps->NativeInstance, SkipShared, false);
}

void Macad::Occt::BRepGProp::LinearProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ LProps)
{
	::BRepGProp::LinearProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)LProps->NativeInstance, false, false);
}

void Macad::Occt::BRepGProp::SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps, bool SkipShared, bool UseTriangulation)
{
	::BRepGProp::SurfaceProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)SProps->NativeInstance, SkipShared, UseTriangulation);
}

void Macad::Occt::BRepGProp::SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps, bool SkipShared)
{
	::BRepGProp::SurfaceProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)SProps->NativeInstance, SkipShared, false);
}

void Macad::Occt::BRepGProp::SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps)
{
	::BRepGProp::SurfaceProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)SProps->NativeInstance, false, false);
}

double Macad::Occt::BRepGProp::SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps, double Eps, bool SkipShared)
{
	return ::BRepGProp::SurfaceProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)SProps->NativeInstance, Eps, SkipShared);
}

double Macad::Occt::BRepGProp::SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps, double Eps)
{
	return ::BRepGProp::SurfaceProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)SProps->NativeInstance, Eps, false);
}

void Macad::Occt::BRepGProp::VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, bool OnlyClosed, bool SkipShared, bool UseTriangulation)
{
	::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, OnlyClosed, SkipShared, UseTriangulation);
}

void Macad::Occt::BRepGProp::VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, bool OnlyClosed, bool SkipShared)
{
	::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, OnlyClosed, SkipShared, false);
}

void Macad::Occt::BRepGProp::VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, bool OnlyClosed)
{
	::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, OnlyClosed, false, false);
}

void Macad::Occt::BRepGProp::VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps)
{
	::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, false, false, false);
}

double Macad::Occt::BRepGProp::VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool SkipShared)
{
	return ::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, SkipShared);
}

double Macad::Occt::BRepGProp::VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed)
{
	return ::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, false);
}

double Macad::Occt::BRepGProp::VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps)
{
	return ::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, false, false);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag, bool SkipShared)
{
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, IsUseSpan, CGFlag, IFlag, SkipShared);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag)
{
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, IsUseSpan, CGFlag, IFlag, false);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag)
{
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, IsUseSpan, CGFlag, false, false);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan)
{
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, IsUseSpan, false, false, false);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed)
{
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, false, false, false, false);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps)
{
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, false, false, false, false, false);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps)
{
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, 0.001, false, false, false, false, false);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag, bool SkipShared)
{
	pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, IsUseSpan, CGFlag, IFlag, SkipShared);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag)
{
	pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, IsUseSpan, CGFlag, IFlag, false);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag)
{
	pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, IsUseSpan, CGFlag, false, false);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan)
{
	pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, IsUseSpan, false, false, false);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed)
{
	pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, false, false, false, false);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps)
{
	pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, false, false, false, false, false);
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln)
{
	pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
	return ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, 0.001, false, false, false, false, false);
}




//---------------------------------------------------------------------
//  Class  BRepGProp_Gauss
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_Gauss::BRepGProp_Gauss(Macad::Occt::BRepGProp_Gauss::BRepGProp_GaussType theType)
	: BaseClass<::BRepGProp_Gauss>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_Gauss((::BRepGProp_Gauss::BRepGProp_GaussType)theType);
}




//---------------------------------------------------------------------
//  Class  BRepGProp_MeshCinert
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_MeshCinert::BRepGProp_MeshCinert()
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_MeshCinert();
}

Macad::Occt::BRepGProp_MeshCinert::BRepGProp_MeshCinert(Macad::Occt::BRepGProp_MeshCinert^ parameter1)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_MeshCinert(*(::BRepGProp_MeshCinert*)parameter1->NativeInstance);
}

void Macad::Occt::BRepGProp_MeshCinert::SetLocation(Macad::Occt::Pnt CLocation)
{
	pin_ptr<Macad::Occt::Pnt> pp_CLocation = &CLocation;
	((::BRepGProp_MeshCinert*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_CLocation);
}

void Macad::Occt::BRepGProp_MeshCinert::Perform(Macad::Occt::TColgp_Array1OfPnt^ theNodes)
{
	((::BRepGProp_MeshCinert*)_NativeInstance)->Perform(*(::TColgp_Array1OfPnt*)theNodes->NativeInstance);
}

void Macad::Occt::BRepGProp_MeshCinert::PreparePolygon(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::TColgp_HArray1OfPnt^ thePolyg)
{
	Handle(::TColgp_HArray1OfPnt) h_thePolyg = thePolyg->NativeInstance;
	::BRepGProp_MeshCinert::PreparePolygon(*(::TopoDS_Edge*)theE->NativeInstance, h_thePolyg);
	thePolyg->NativeInstance = h_thePolyg.get();
}




//---------------------------------------------------------------------
//  Class  BRepGProp_MeshProps
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_MeshProps::BRepGProp_MeshProps(Macad::Occt::BRepGProp_MeshProps::BRepGProp_MeshObjType theType)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_MeshProps((::BRepGProp_MeshProps::BRepGProp_MeshObjType)theType);
}

Macad::Occt::BRepGProp_MeshProps::BRepGProp_MeshProps(Macad::Occt::BRepGProp_MeshProps^ parameter1)
	: Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepGProp_MeshProps(*(::BRepGProp_MeshProps*)parameter1->NativeInstance);
}

void Macad::Occt::BRepGProp_MeshProps::SetLocation(Macad::Occt::Pnt theLocation)
{
	pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
	((::BRepGProp_MeshProps*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLocation);
}

void Macad::Occt::BRepGProp_MeshProps::CalculateProps(Macad::Occt::Pnt p1, Macad::Occt::Pnt p2, Macad::Occt::Pnt p3, Macad::Occt::Pnt Apex, bool isVolume, double% GProps, int NbGaussPoints, double GaussPnts)
{
	pin_ptr<Macad::Occt::Pnt> pp_p1 = &p1;
	pin_ptr<Macad::Occt::Pnt> pp_p2 = &p2;
	pin_ptr<Macad::Occt::Pnt> pp_p3 = &p3;
	pin_ptr<Macad::Occt::Pnt> pp_Apex = &Apex;
	pin_ptr<double> pp_GProps = &GProps;
	pin_ptr<double> pp_GaussPnts = &GaussPnts;
	::BRepGProp_MeshProps::CalculateProps(*(gp_Pnt*)pp_p1, *(gp_Pnt*)pp_p2, *(gp_Pnt*)pp_p3, *(gp_Pnt*)pp_Apex, isVolume, (Standard_Real*)pp_GProps, NbGaussPoints, (Standard_Real*)pp_GaussPnts);
}

Macad::Occt::BRepGProp_MeshProps::BRepGProp_MeshObjType Macad::Occt::BRepGProp_MeshProps::GetMeshObjType()
{
	return (Macad::Occt::BRepGProp_MeshProps::BRepGProp_MeshObjType)((::BRepGProp_MeshProps*)_NativeInstance)->GetMeshObjType();
}



