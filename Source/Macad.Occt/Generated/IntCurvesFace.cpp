// Generated wrapper code for package IntCurvesFace

#include "OcctPCH.h"
#include "IntCurvesFace.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "gp.h"
#include "Adaptor3d.h"
#include "GeomAbs.h"
#include "TopAbs.h"
#include "Bnd.h"


//---------------------------------------------------------------------
//  Class  IntCurvesFace_Intersector
//---------------------------------------------------------------------

Macad::Occt::IntCurvesFace_Intersector::IntCurvesFace_Intersector(Macad::Occt::TopoDS_Face^ F, double aTol, bool aRestr, bool UseBToler)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::IntCurvesFace_Intersector(*(::TopoDS_Face*)F->NativeInstance, aTol, aRestr, UseBToler);
}

Macad::Occt::IntCurvesFace_Intersector::IntCurvesFace_Intersector(Macad::Occt::TopoDS_Face^ F, double aTol, bool aRestr)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::IntCurvesFace_Intersector(*(::TopoDS_Face*)F->NativeInstance, aTol, aRestr, true);
}

Macad::Occt::IntCurvesFace_Intersector::IntCurvesFace_Intersector(Macad::Occt::TopoDS_Face^ F, double aTol)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::IntCurvesFace_Intersector(*(::TopoDS_Face*)F->NativeInstance, aTol, true, true);
}

void Macad::Occt::IntCurvesFace_Intersector::Perform(Macad::Occt::gp_Lin^ L, double PInf, double PSup)
{
    ((::IntCurvesFace_Intersector*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, PInf, PSup);
}

void Macad::Occt::IntCurvesFace_Intersector::Perform(Macad::Occt::Adaptor3d_Curve^ HCu, double PInf, double PSup)
{
    ((::IntCurvesFace_Intersector*)_NativeInstance)->Perform(Handle(::Adaptor3d_Curve)(HCu->NativeInstance), PInf, PSup);
}

Macad::Occt::GeomAbs_SurfaceType Macad::Occt::IntCurvesFace_Intersector::SurfaceType()
{
    ::GeomAbs_SurfaceType _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->SurfaceType();
    return (Macad::Occt::GeomAbs_SurfaceType)_result;
}

bool Macad::Occt::IntCurvesFace_Intersector::IsDone()
{
    bool _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::IntCurvesFace_Intersector::NbPnt()
{
    int _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->NbPnt();
    return _result;
}

double Macad::Occt::IntCurvesFace_Intersector::UParameter(int I)
{
    double _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->UParameter(I);
    return _result;
}

double Macad::Occt::IntCurvesFace_Intersector::VParameter(int I)
{
    double _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->VParameter(I);
    return _result;
}

double Macad::Occt::IntCurvesFace_Intersector::WParameter(int I)
{
    double _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->WParameter(I);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::IntCurvesFace_Intersector::Pnt(int I)
{
    ::gp_Pnt _nativeResult = ((::IntCurvesFace_Intersector*)_NativeInstance)->Pnt(I);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::TopAbs_State Macad::Occt::IntCurvesFace_Intersector::State(int I)
{
    ::TopAbs_State _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->State(I);
    return (Macad::Occt::TopAbs_State)_result;
}

bool Macad::Occt::IntCurvesFace_Intersector::IsParallel()
{
    bool _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->IsParallel();
    return _result;
}

Macad::Occt::TopoDS_Face^ Macad::Occt::IntCurvesFace_Intersector::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::IntCurvesFace_Intersector*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopAbs_State Macad::Occt::IntCurvesFace_Intersector::ClassifyUVPoint(Macad::Occt::Pnt2d Puv)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Puv = &Puv;
    ::TopAbs_State _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->ClassifyUVPoint(*(gp_Pnt2d*)pp_Puv);
    return (Macad::Occt::TopAbs_State)_result;
}

Macad::Occt::Bnd_Box^ Macad::Occt::IntCurvesFace_Intersector::Bounding()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::IntCurvesFace_Intersector*)_NativeInstance)->Bounding();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

void Macad::Occt::IntCurvesFace_Intersector::SetUseBoundToler(bool UseBToler)
{
    ((::IntCurvesFace_Intersector*)_NativeInstance)->SetUseBoundToler(UseBToler);
}

bool Macad::Occt::IntCurvesFace_Intersector::GetUseBoundToler()
{
    bool _result = ((::IntCurvesFace_Intersector*)_NativeInstance)->GetUseBoundToler();
    return _result;
}

Macad::Occt::IntCurvesFace_Intersector^ Macad::Occt::IntCurvesFace_Intersector::CreateDowncasted(::IntCurvesFace_Intersector* instance)
{
    return gcnew Macad::Occt::IntCurvesFace_Intersector( instance );
}



//---------------------------------------------------------------------
//  Class  IntCurvesFace_ShapeIntersector
//---------------------------------------------------------------------

Macad::Occt::IntCurvesFace_ShapeIntersector::IntCurvesFace_ShapeIntersector()
    : Macad::Occt::BaseClass<::IntCurvesFace_ShapeIntersector>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::IntCurvesFace_ShapeIntersector();
}

void Macad::Occt::IntCurvesFace_ShapeIntersector::Load(Macad::Occt::TopoDS_Shape^ Sh, double Tol)
{
    ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Load(*(::TopoDS_Shape*)Sh->NativeInstance, Tol);
}

void Macad::Occt::IntCurvesFace_ShapeIntersector::Perform(Macad::Occt::gp_Lin^ L, double PInf, double PSup)
{
    ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, PInf, PSup);
}

void Macad::Occt::IntCurvesFace_ShapeIntersector::PerformNearest(Macad::Occt::gp_Lin^ L, double PInf, double PSup)
{
    ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->PerformNearest(*(::gp_Lin*)L->NativeInstance, PInf, PSup);
}

void Macad::Occt::IntCurvesFace_ShapeIntersector::Perform(Macad::Occt::Adaptor3d_Curve^ HCu, double PInf, double PSup)
{
    ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Perform(Handle(::Adaptor3d_Curve)(HCu->NativeInstance), PInf, PSup);
}

bool Macad::Occt::IntCurvesFace_ShapeIntersector::IsDone()
{
    bool _result = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::IntCurvesFace_ShapeIntersector::NbPnt()
{
    int _result = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->NbPnt();
    return _result;
}

double Macad::Occt::IntCurvesFace_ShapeIntersector::UParameter(int I)
{
    double _result = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->UParameter(I);
    return _result;
}

double Macad::Occt::IntCurvesFace_ShapeIntersector::VParameter(int I)
{
    double _result = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->VParameter(I);
    return _result;
}

double Macad::Occt::IntCurvesFace_ShapeIntersector::WParameter(int I)
{
    double _result = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->WParameter(I);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::IntCurvesFace_ShapeIntersector::Pnt(int I)
{
    ::gp_Pnt _nativeResult = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Pnt(I);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::TopAbs_State Macad::Occt::IntCurvesFace_ShapeIntersector::State(int I)
{
    ::TopAbs_State _result = ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->State(I);
    return (Macad::Occt::TopAbs_State)_result;
}

Macad::Occt::TopoDS_Face^ Macad::Occt::IntCurvesFace_ShapeIntersector::Face(int I)
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Face(I);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

void Macad::Occt::IntCurvesFace_ShapeIntersector::SortResult()
{
    ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->SortResult();
}


