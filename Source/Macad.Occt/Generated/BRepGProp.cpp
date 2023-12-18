// Generated wrapper code for package BRepGProp

#include "OcctPCH.h"
#include "BRepGProp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "GProp.h"
#include "gp.h"
#include "BRepAdaptor.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "TColgp.h"
#include "TopLoc.h"
#include "TopAbs.h"


//---------------------------------------------------------------------
//  Class  BRepGProp
//---------------------------------------------------------------------

Macad::Occt::BRepGProp::BRepGProp()
    : Macad::Occt::BaseClass<::BRepGProp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp();
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
    double _result = ::BRepGProp::SurfaceProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)SProps->NativeInstance, Eps, SkipShared);
    return _result;
}

double Macad::Occt::BRepGProp::SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps, double Eps)
{
    double _result = ::BRepGProp::SurfaceProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)SProps->NativeInstance, Eps, false);
    return _result;
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
    double _result = ::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, SkipShared);
    return _result;
}

double Macad::Occt::BRepGProp::VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed)
{
    double _result = ::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, false);
    return _result;
}

double Macad::Occt::BRepGProp::VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps)
{
    double _result = ::BRepGProp::VolumeProperties(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, false, false);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag, bool SkipShared)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, IsUseSpan, CGFlag, IFlag, SkipShared);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, IsUseSpan, CGFlag, IFlag, false);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, IsUseSpan, CGFlag, false, false);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, IsUseSpan, false, false, false);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, OnlyClosed, false, false, false, false);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, Eps, false, false, false, false, false);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps)
{
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, 0.001, false, false, false, false, false);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag, bool SkipShared)
{
    pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, IsUseSpan, CGFlag, IFlag, SkipShared);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag)
{
    pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, IsUseSpan, CGFlag, IFlag, false);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag)
{
    pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, IsUseSpan, CGFlag, false, false);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan)
{
    pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, IsUseSpan, false, false, false);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed)
{
    pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, OnlyClosed, false, false, false, false);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps)
{
    pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, Eps, false, false, false, false, false);
    return _result;
}

double Macad::Occt::BRepGProp::VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln)
{
    pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
    double _result = ::BRepGProp::VolumePropertiesGK(*(::TopoDS_Shape*)S->NativeInstance, *(::GProp_GProps*)VProps->NativeInstance, *(gp_Pln*)pp_thePln, 0.001, false, false, false, false, false);
    return _result;
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
//  Class  BRepGProp_Domain
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_Domain::BRepGProp_Domain()
    : Macad::Occt::BaseClass<::BRepGProp_Domain>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Domain();
}

Macad::Occt::BRepGProp_Domain::BRepGProp_Domain(Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::BaseClass<::BRepGProp_Domain>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Domain(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepGProp_Domain::Init(Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepGProp_Domain*)_NativeInstance)->Init(*(::TopoDS_Face*)F->NativeInstance);
}

bool Macad::Occt::BRepGProp_Domain::More()
{
    bool _result = ((::BRepGProp_Domain*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepGProp_Domain::Init()
{
    ((::BRepGProp_Domain*)_NativeInstance)->Init();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepGProp_Domain::Value()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepGProp_Domain*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

void Macad::Occt::BRepGProp_Domain::Next()
{
    ((::BRepGProp_Domain*)_NativeInstance)->Next();
}



//---------------------------------------------------------------------
//  Class  BRepGProp_EdgeTool
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_EdgeTool::BRepGProp_EdgeTool()
    : Macad::Occt::BaseClass<::BRepGProp_EdgeTool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_EdgeTool();
}

double Macad::Occt::BRepGProp_EdgeTool::FirstParameter(Macad::Occt::BRepAdaptor_Curve^ C)
{
    double _result = ::BRepGProp_EdgeTool::FirstParameter(*(::BRepAdaptor_Curve*)C->NativeInstance);
    return _result;
}

double Macad::Occt::BRepGProp_EdgeTool::LastParameter(Macad::Occt::BRepAdaptor_Curve^ C)
{
    double _result = ::BRepGProp_EdgeTool::LastParameter(*(::BRepAdaptor_Curve*)C->NativeInstance);
    return _result;
}

int Macad::Occt::BRepGProp_EdgeTool::IntegrationOrder(Macad::Occt::BRepAdaptor_Curve^ C)
{
    int _result = ::BRepGProp_EdgeTool::IntegrationOrder(*(::BRepAdaptor_Curve*)C->NativeInstance);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::BRepGProp_EdgeTool::Value(Macad::Occt::BRepAdaptor_Curve^ C, double U)
{
    ::gp_Pnt _nativeResult = ::BRepGProp_EdgeTool::Value(*(::BRepAdaptor_Curve*)C->NativeInstance, U);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::BRepGProp_EdgeTool::D1(Macad::Occt::BRepAdaptor_Curve^ C, double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
    ::BRepGProp_EdgeTool::D1(*(::BRepAdaptor_Curve*)C->NativeInstance, U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

int Macad::Occt::BRepGProp_EdgeTool::NbIntervals(Macad::Occt::BRepAdaptor_Curve^ C, Macad::Occt::GeomAbs_Shape S)
{
    int _result = ::BRepGProp_EdgeTool::NbIntervals(*(::BRepAdaptor_Curve*)C->NativeInstance, (::GeomAbs_Shape)S);
    return _result;
}

void Macad::Occt::BRepGProp_EdgeTool::Intervals(Macad::Occt::BRepAdaptor_Curve^ C, Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ::BRepGProp_EdgeTool::Intervals(*(::BRepAdaptor_Curve*)C->NativeInstance, *(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}



//---------------------------------------------------------------------
//  Class  BRepGProp_Face
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_Face::BRepGProp_Face(bool IsUseSpan)
    : Macad::Occt::BaseClass<::BRepGProp_Face>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Face(IsUseSpan);
}

Macad::Occt::BRepGProp_Face::BRepGProp_Face()
    : Macad::Occt::BaseClass<::BRepGProp_Face>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Face(false);
}

Macad::Occt::BRepGProp_Face::BRepGProp_Face(Macad::Occt::TopoDS_Face^ F, bool IsUseSpan)
    : Macad::Occt::BaseClass<::BRepGProp_Face>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Face(*(::TopoDS_Face*)F->NativeInstance, IsUseSpan);
}

Macad::Occt::BRepGProp_Face::BRepGProp_Face(Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::BaseClass<::BRepGProp_Face>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Face(*(::TopoDS_Face*)F->NativeInstance, false);
}

void Macad::Occt::BRepGProp_Face::Load(Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepGProp_Face*)_NativeInstance)->Load(*(::TopoDS_Face*)F->NativeInstance);
}

int Macad::Occt::BRepGProp_Face::VIntegrationOrder()
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->VIntegrationOrder();
    return _result;
}

bool Macad::Occt::BRepGProp_Face::NaturalRestriction()
{
    bool _result = ((::BRepGProp_Face*)_NativeInstance)->NaturalRestriction();
    return _result;
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepGProp_Face::GetFace()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepGProp_Face*)_NativeInstance)->GetFace();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::Pnt2d Macad::Occt::BRepGProp_Face::Value2d(double U)
{
    ::gp_Pnt2d _nativeResult = ((::BRepGProp_Face*)_NativeInstance)->Value2d(U);
    return Macad::Occt::Pnt2d(_nativeResult);
}

int Macad::Occt::BRepGProp_Face::SIntOrder(double Eps)
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->SIntOrder(Eps);
    return _result;
}

int Macad::Occt::BRepGProp_Face::SVIntSubs()
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->SVIntSubs();
    return _result;
}

int Macad::Occt::BRepGProp_Face::SUIntSubs()
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->SUIntSubs();
    return _result;
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
    int _result = ((::BRepGProp_Face*)_NativeInstance)->LIntOrder(Eps);
    return _result;
}

int Macad::Occt::BRepGProp_Face::LIntSubs()
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->LIntSubs();
    return _result;
}

void Macad::Occt::BRepGProp_Face::LKnots(Macad::Occt::TColStd_Array1OfReal^ Knots)
{
    ((::BRepGProp_Face*)_NativeInstance)->LKnots(*(::TColStd_Array1OfReal*)Knots->NativeInstance);
}

int Macad::Occt::BRepGProp_Face::UIntegrationOrder()
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->UIntegrationOrder();
    return _result;
}

void Macad::Occt::BRepGProp_Face::Bounds(double% U1, double% U2, double% V1, double% V2)
{
    pin_ptr<double> pp_U1 = &U1;
    pin_ptr<double> pp_U2 = &U2;
    pin_ptr<double> pp_V1 = &V1;
    pin_ptr<double> pp_V2 = &V2;
    ((::BRepGProp_Face*)_NativeInstance)->Bounds(*(double*)pp_U1, *(double*)pp_U2, *(double*)pp_V1, *(double*)pp_V2);
}

void Macad::Occt::BRepGProp_Face::Normal(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% VNor)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_VNor = &VNor;
    ((::BRepGProp_Face*)_NativeInstance)->Normal(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_VNor);
}

bool Macad::Occt::BRepGProp_Face::Load(Macad::Occt::TopoDS_Edge^ E)
{
    bool _result = ((::BRepGProp_Face*)_NativeInstance)->Load(*(::TopoDS_Edge*)E->NativeInstance);
    return _result;
}

double Macad::Occt::BRepGProp_Face::FirstParameter()
{
    double _result = ((::BRepGProp_Face*)_NativeInstance)->FirstParameter();
    return _result;
}

double Macad::Occt::BRepGProp_Face::LastParameter()
{
    double _result = ((::BRepGProp_Face*)_NativeInstance)->LastParameter();
    return _result;
}

int Macad::Occt::BRepGProp_Face::IntegrationOrder()
{
    int _result = ((::BRepGProp_Face*)_NativeInstance)->IntegrationOrder();
    return _result;
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
//  Class  BRepGProp_Gauss
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_Gauss::BRepGProp_Gauss(Macad::Occt::BRepGProp_Gauss::BRepGProp_GaussType theType)
    : Macad::Occt::BaseClass<::BRepGProp_Gauss>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_Gauss((::BRepGProp_Gauss::BRepGProp_GaussType)theType);
}

void Macad::Occt::BRepGProp_Gauss::Compute(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation, double theCoeff, bool theIsByPoint, double% theOutMass, Macad::Occt::Pnt% theOutGravityCenter, Macad::Occt::Mat% theOutInertia)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
    pin_ptr<double> pp_theCoeff = &theCoeff;
    pin_ptr<double> pp_theOutMass = &theOutMass;
    pin_ptr<Macad::Occt::Pnt> pp_theOutGravityCenter = &theOutGravityCenter;
    pin_ptr<Macad::Occt::Mat> pp_theOutInertia = &theOutInertia;
    ((::BRepGProp_Gauss*)_NativeInstance)->Compute(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_theLocation, (double*)pp_theCoeff, theIsByPoint, *(double*)pp_theOutMass, *(gp_Pnt*)pp_theOutGravityCenter, *(gp_Mat*)pp_theOutInertia);
}

void Macad::Occt::BRepGProp_Gauss::Compute(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation, double% theOutMass, Macad::Occt::Pnt% theOutGravityCenter, Macad::Occt::Mat% theOutInertia)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
    pin_ptr<double> pp_theOutMass = &theOutMass;
    pin_ptr<Macad::Occt::Pnt> pp_theOutGravityCenter = &theOutGravityCenter;
    pin_ptr<Macad::Occt::Mat> pp_theOutInertia = &theOutInertia;
    ((::BRepGProp_Gauss*)_NativeInstance)->Compute(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_theLocation, *(double*)pp_theOutMass, *(gp_Pnt*)pp_theOutGravityCenter, *(gp_Mat*)pp_theOutInertia);
}

void Macad::Occt::BRepGProp_Gauss::Compute(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theCoeff, bool theIsByPoint, double% theOutMass, Macad::Occt::Pnt% theOutGravityCenter, Macad::Occt::Mat% theOutInertia)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
    pin_ptr<double> pp_theCoeff = &theCoeff;
    pin_ptr<double> pp_theOutMass = &theOutMass;
    pin_ptr<Macad::Occt::Pnt> pp_theOutGravityCenter = &theOutGravityCenter;
    pin_ptr<Macad::Occt::Mat> pp_theOutInertia = &theOutInertia;
    ((::BRepGProp_Gauss*)_NativeInstance)->Compute(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, (double*)pp_theCoeff, theIsByPoint, *(double*)pp_theOutMass, *(gp_Pnt*)pp_theOutGravityCenter, *(gp_Mat*)pp_theOutInertia);
}

void Macad::Occt::BRepGProp_Gauss::Compute(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double% theOutMass, Macad::Occt::Pnt% theOutGravityCenter, Macad::Occt::Mat% theOutInertia)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
    pin_ptr<double> pp_theOutMass = &theOutMass;
    pin_ptr<Macad::Occt::Pnt> pp_theOutGravityCenter = &theOutGravityCenter;
    pin_ptr<Macad::Occt::Mat> pp_theOutInertia = &theOutInertia;
    ((::BRepGProp_Gauss*)_NativeInstance)->Compute(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, *(double*)pp_theOutMass, *(gp_Pnt*)pp_theOutGravityCenter, *(gp_Mat*)pp_theOutInertia);
}

double Macad::Occt::BRepGProp_Gauss::Compute(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theEps, double theCoeff, bool theByPoint, double% theOutMass, Macad::Occt::Pnt% theOutGravityCenter, Macad::Occt::Mat% theOutInertia)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
    pin_ptr<double> pp_theCoeff = &theCoeff;
    pin_ptr<double> pp_theOutMass = &theOutMass;
    pin_ptr<Macad::Occt::Pnt> pp_theOutGravityCenter = &theOutGravityCenter;
    pin_ptr<Macad::Occt::Mat> pp_theOutInertia = &theOutInertia;
    double _result = ((::BRepGProp_Gauss*)_NativeInstance)->Compute(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, theEps, (double*)pp_theCoeff, theByPoint, *(double*)pp_theOutMass, *(gp_Pnt*)pp_theOutGravityCenter, *(gp_Mat*)pp_theOutInertia);
    return _result;
}

double Macad::Occt::BRepGProp_Gauss::Compute(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theEps, double% theOutMass, Macad::Occt::Pnt% theOutGravityCenter, Macad::Occt::Mat% theOutInertia)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
    pin_ptr<double> pp_theOutMass = &theOutMass;
    pin_ptr<Macad::Occt::Pnt> pp_theOutGravityCenter = &theOutGravityCenter;
    pin_ptr<Macad::Occt::Mat> pp_theOutInertia = &theOutInertia;
    double _result = ((::BRepGProp_Gauss*)_NativeInstance)->Compute(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_theLocation, theEps, *(double*)pp_theOutMass, *(gp_Pnt*)pp_theOutGravityCenter, *(gp_Mat*)pp_theOutInertia);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepGProp_MeshCinert
//---------------------------------------------------------------------

Macad::Occt::BRepGProp_MeshCinert::BRepGProp_MeshCinert()
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepGProp_MeshCinert();
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
    ::BRepGProp_MeshProps::CalculateProps(*(gp_Pnt*)pp_p1, *(gp_Pnt*)pp_p2, *(gp_Pnt*)pp_p3, *(gp_Pnt*)pp_Apex, isVolume, (double*)pp_GProps, NbGaussPoints, (double*)pp_GaussPnts);
}

Macad::Occt::BRepGProp_MeshProps::BRepGProp_MeshObjType Macad::Occt::BRepGProp_MeshProps::GetMeshObjType()
{
    ::BRepGProp_MeshProps::BRepGProp_MeshObjType _result = ((::BRepGProp_MeshProps*)_NativeInstance)->GetMeshObjType();
    return (Macad::Occt::BRepGProp_MeshProps::BRepGProp_MeshObjType)_result;
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
    double _result = ((::BRepGProp_Sinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, Eps);
    return _result;
}

double Macad::Occt::BRepGProp_Sinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, double Eps)
{
    double _result = ((::BRepGProp_Sinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, Eps);
    return _result;
}

double Macad::Occt::BRepGProp_Sinert::GetEpsilon()
{
    double _result = ((::BRepGProp_Sinert*)_NativeInstance)->GetEpsilon();
    return _result;
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
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, Eps);
    return _result;
}

void Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O)
{
    pin_ptr<Macad::Occt::Pnt> pp_O = &O;
    ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_O);
}

double Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O, double Eps)
{
    pin_ptr<Macad::Occt::Pnt> pp_O = &O;
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pnt*)pp_O, Eps);
    return _result;
}

void Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl)
{
    pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
    ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pln*)pp_Pl);
}

double Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl, double Eps)
{
    pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(gp_Pln*)pp_Pl, Eps);
    return _result;
}

void Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D)
{
    ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance);
}

double Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, double Eps)
{
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, Eps);
    return _result;
}

void Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O)
{
    pin_ptr<Macad::Occt::Pnt> pp_O = &O;
    ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_O);
}

double Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O, double Eps)
{
    pin_ptr<Macad::Occt::Pnt> pp_O = &O;
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pnt*)pp_O, Eps);
    return _result;
}

void Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl)
{
    pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
    ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pln*)pp_Pl);
}

double Macad::Occt::BRepGProp_Vinert::Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl, double Eps)
{
    pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->Perform(*(::BRepGProp_Face*)S->NativeInstance, *(::BRepGProp_Domain*)D->NativeInstance, *(gp_Pln*)pp_Pl, Eps);
    return _result;
}

double Macad::Occt::BRepGProp_Vinert::GetEpsilon()
{
    double _result = ((::BRepGProp_Vinert*)_NativeInstance)->GetEpsilon();
    return _result;
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

void Macad::Occt::BRepGProp_VinertGK::SetLocation(Macad::Occt::Pnt theLocation)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLocation = &theLocation;
    ((::BRepGProp_VinertGK*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLocation);
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, double theTolerance, bool theCGFlag, bool theIFlag)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, theTolerance, theCGFlag, theIFlag);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, double theTolerance, bool theCGFlag)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, theTolerance, theCGFlag, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, double theTolerance)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, theTolerance, false, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, 0.001, false, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag, bool theIFlag)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, theCGFlag, theIFlag);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, theCGFlag, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, double theTolerance)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, false, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pnt*)pp_thePoint, 0.001, false, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, double theTolerance, bool theCGFlag, bool theIFlag)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, theTolerance, theCGFlag, theIFlag);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, double theTolerance, bool theCGFlag)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, theTolerance, theCGFlag, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, double theTolerance)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, theTolerance, false, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain)
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, 0.001, false, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag, bool theIFlag)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, theCGFlag, theIFlag);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, theCGFlag, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, double theTolerance)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, theTolerance, false, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pnt*)pp_thePoint, 0.001, false, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag, bool theIFlag)
{
    pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, theCGFlag, theIFlag);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag)
{
    pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, theCGFlag, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, double theTolerance)
{
    pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, false, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane)
{
    pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(gp_Pln*)pp_thePlane, 0.001, false, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag, bool theIFlag)
{
    pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, theCGFlag, theIFlag);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag)
{
    pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, theCGFlag, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, double theTolerance)
{
    pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, theTolerance, false, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane)
{
    pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->Perform(*(::BRepGProp_Face*)theSurface->NativeInstance, *(::BRepGProp_Domain*)theDomain->NativeInstance, *(gp_Pln*)pp_thePlane, 0.001, false, false);
    return _result;
}

double Macad::Occt::BRepGProp_VinertGK::GetErrorReached()
{
    double _result = ((::BRepGProp_VinertGK*)_NativeInstance)->GetErrorReached();
    return _result;
}


