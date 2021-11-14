// Generated wrapper code for package IntCurvesFace

#include "OcctPCH.h"
#include "IntCurvesFace.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "Standard.h"
#include "IntCurvesFace.h"
#include "gp.h"
#include "Adaptor3d.h"
#include "GeomAbs.h"
#include "TopAbs.h"
#include "Bnd.h"


//---------------------------------------------------------------------
//  Class  IntCurvesFace_Intersector
//---------------------------------------------------------------------

Macad::Occt::IntCurvesFace_Intersector::IntCurvesFace_Intersector(Macad::Occt::TopoDS_Face^ F, double aTol, bool aRestr, bool UseBToler)
	: BaseClass<::IntCurvesFace_Intersector>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntCurvesFace_Intersector(*(::TopoDS_Face*)F->NativeInstance, aTol, aRestr, UseBToler);
}

Macad::Occt::IntCurvesFace_Intersector::IntCurvesFace_Intersector(Macad::Occt::TopoDS_Face^ F, double aTol, bool aRestr)
	: BaseClass<::IntCurvesFace_Intersector>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntCurvesFace_Intersector(*(::TopoDS_Face*)F->NativeInstance, aTol, aRestr, true);
}

Macad::Occt::IntCurvesFace_Intersector::IntCurvesFace_Intersector(Macad::Occt::TopoDS_Face^ F, double aTol)
	: BaseClass<::IntCurvesFace_Intersector>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntCurvesFace_Intersector(*(::TopoDS_Face*)F->NativeInstance, aTol, true, true);
}

Macad::Occt::IntCurvesFace_Intersector::IntCurvesFace_Intersector(Macad::Occt::IntCurvesFace_Intersector^ parameter1)
	: BaseClass<::IntCurvesFace_Intersector>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntCurvesFace_Intersector(*(::IntCurvesFace_Intersector*)parameter1->NativeInstance);
}

void Macad::Occt::IntCurvesFace_Intersector::Perform(Macad::Occt::gp_Lin^ L, double PInf, double PSup)
{
	((::IntCurvesFace_Intersector*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, PInf, PSup);
}

void Macad::Occt::IntCurvesFace_Intersector::Perform(Macad::Occt::Adaptor3d_Curve^ HCu, double PInf, double PSup)
{
	Handle(::Adaptor3d_Curve) h_HCu = HCu->NativeInstance;
	((::IntCurvesFace_Intersector*)_NativeInstance)->Perform(h_HCu, PInf, PSup);
	HCu->NativeInstance = h_HCu.get();
}

Macad::Occt::GeomAbs_SurfaceType Macad::Occt::IntCurvesFace_Intersector::SurfaceType()
{
	return (Macad::Occt::GeomAbs_SurfaceType)((::IntCurvesFace_Intersector*)_NativeInstance)->SurfaceType();
}

bool Macad::Occt::IntCurvesFace_Intersector::IsDone()
{
	return ((::IntCurvesFace_Intersector*)_NativeInstance)->IsDone();
}

int Macad::Occt::IntCurvesFace_Intersector::NbPnt()
{
	return ((::IntCurvesFace_Intersector*)_NativeInstance)->NbPnt();
}

double Macad::Occt::IntCurvesFace_Intersector::UParameter(int I)
{
	return ((::IntCurvesFace_Intersector*)_NativeInstance)->UParameter(I);
}

double Macad::Occt::IntCurvesFace_Intersector::VParameter(int I)
{
	return ((::IntCurvesFace_Intersector*)_NativeInstance)->VParameter(I);
}

double Macad::Occt::IntCurvesFace_Intersector::WParameter(int I)
{
	return ((::IntCurvesFace_Intersector*)_NativeInstance)->WParameter(I);
}

Macad::Occt::Pnt Macad::Occt::IntCurvesFace_Intersector::Pnt(int I)
{
	return Macad::Occt::Pnt(((::IntCurvesFace_Intersector*)_NativeInstance)->Pnt(I));
}

Macad::Occt::TopAbs_State Macad::Occt::IntCurvesFace_Intersector::State(int I)
{
	return (Macad::Occt::TopAbs_State)((::IntCurvesFace_Intersector*)_NativeInstance)->State(I);
}

bool Macad::Occt::IntCurvesFace_Intersector::IsParallel()
{
	return ((::IntCurvesFace_Intersector*)_NativeInstance)->IsParallel();
}

Macad::Occt::TopoDS_Face^ Macad::Occt::IntCurvesFace_Intersector::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::IntCurvesFace_Intersector*)_NativeInstance)->Face();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopAbs_State Macad::Occt::IntCurvesFace_Intersector::ClassifyUVPoint(Macad::Occt::Pnt2d Puv)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_Puv = &Puv;
	return (Macad::Occt::TopAbs_State)((::IntCurvesFace_Intersector*)_NativeInstance)->ClassifyUVPoint(*(gp_Pnt2d*)pp_Puv);
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
	return ((::IntCurvesFace_Intersector*)_NativeInstance)->GetUseBoundToler();
}

void Macad::Occt::IntCurvesFace_Intersector::Destroy()
{
	((::IntCurvesFace_Intersector*)_NativeInstance)->Destroy();
}




//---------------------------------------------------------------------
//  Class  IntCurvesFace_ShapeIntersector
//---------------------------------------------------------------------

Macad::Occt::IntCurvesFace_ShapeIntersector::IntCurvesFace_ShapeIntersector()
	: BaseClass<::IntCurvesFace_ShapeIntersector>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntCurvesFace_ShapeIntersector();
}

Macad::Occt::IntCurvesFace_ShapeIntersector::IntCurvesFace_ShapeIntersector(Macad::Occt::IntCurvesFace_ShapeIntersector^ parameter1)
	: BaseClass<::IntCurvesFace_ShapeIntersector>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntCurvesFace_ShapeIntersector(*(::IntCurvesFace_ShapeIntersector*)parameter1->NativeInstance);
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
	Handle(::Adaptor3d_Curve) h_HCu = HCu->NativeInstance;
	((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Perform(h_HCu, PInf, PSup);
	HCu->NativeInstance = h_HCu.get();
}

bool Macad::Occt::IntCurvesFace_ShapeIntersector::IsDone()
{
	return ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->IsDone();
}

int Macad::Occt::IntCurvesFace_ShapeIntersector::NbPnt()
{
	return ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->NbPnt();
}

double Macad::Occt::IntCurvesFace_ShapeIntersector::UParameter(int I)
{
	return ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->UParameter(I);
}

double Macad::Occt::IntCurvesFace_ShapeIntersector::VParameter(int I)
{
	return ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->VParameter(I);
}

double Macad::Occt::IntCurvesFace_ShapeIntersector::WParameter(int I)
{
	return ((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->WParameter(I);
}

Macad::Occt::Pnt Macad::Occt::IntCurvesFace_ShapeIntersector::Pnt(int I)
{
	return Macad::Occt::Pnt(((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Pnt(I));
}

Macad::Occt::TopAbs_State Macad::Occt::IntCurvesFace_ShapeIntersector::State(int I)
{
	return (Macad::Occt::TopAbs_State)((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->State(I);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::IntCurvesFace_ShapeIntersector::Face(int I)
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Face(I);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

void Macad::Occt::IntCurvesFace_ShapeIntersector::SortResult()
{
	((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->SortResult();
}

void Macad::Occt::IntCurvesFace_ShapeIntersector::Destroy()
{
	((::IntCurvesFace_ShapeIntersector*)_NativeInstance)->Destroy();
}



