// Generated wrapper code for package BRepClass3d

#include "OcctPCH.h"
#include "BRepClass3d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "BRepClass3d.h"
#include "gp.h"
#include "Standard.h"
#include "TopAbs.h"
#include "BRepAdaptor.h"
#include "Bnd.h"
#include "IntCurvesFace.h"
#include "TopTools.h"


//---------------------------------------------------------------------
//  Class  BRepClass3d
//---------------------------------------------------------------------

Macad::Occt::BRepClass3d::BRepClass3d()
	: BaseClass<::BRepClass3d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d();
}

Macad::Occt::BRepClass3d::BRepClass3d(Macad::Occt::BRepClass3d^ parameter1)
	: BaseClass<::BRepClass3d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d(*(::BRepClass3d*)parameter1->NativeInstance);
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::BRepClass3d::OuterShell(Macad::Occt::TopoDS_Solid^ S)
{
	::TopoDS_Shell* _result = new ::TopoDS_Shell();
	*_result = ::BRepClass3d::OuterShell(*(::TopoDS_Solid*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
}




//---------------------------------------------------------------------
//  Class  BRepClass3d_Intersector3d
//---------------------------------------------------------------------

Macad::Occt::BRepClass3d_Intersector3d::BRepClass3d_Intersector3d()
	: BaseClass<::BRepClass3d_Intersector3d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_Intersector3d();
}

Macad::Occt::BRepClass3d_Intersector3d::BRepClass3d_Intersector3d(Macad::Occt::BRepClass3d_Intersector3d^ parameter1)
	: BaseClass<::BRepClass3d_Intersector3d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_Intersector3d(*(::BRepClass3d_Intersector3d*)parameter1->NativeInstance);
}

void Macad::Occt::BRepClass3d_Intersector3d::Perform(Macad::Occt::gp_Lin^ L, double Prm, double Tol, Macad::Occt::TopoDS_Face^ F)
{
	((::BRepClass3d_Intersector3d*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, Prm, Tol, *(::TopoDS_Face*)F->NativeInstance);
}

bool Macad::Occt::BRepClass3d_Intersector3d::IsDone()
{
	return ((::BRepClass3d_Intersector3d*)_NativeInstance)->IsDone();
}

bool Macad::Occt::BRepClass3d_Intersector3d::HasAPoint()
{
	return ((::BRepClass3d_Intersector3d*)_NativeInstance)->HasAPoint();
}

double Macad::Occt::BRepClass3d_Intersector3d::UParameter()
{
	return ((::BRepClass3d_Intersector3d*)_NativeInstance)->UParameter();
}

double Macad::Occt::BRepClass3d_Intersector3d::VParameter()
{
	return ((::BRepClass3d_Intersector3d*)_NativeInstance)->VParameter();
}

double Macad::Occt::BRepClass3d_Intersector3d::WParameter()
{
	return ((::BRepClass3d_Intersector3d*)_NativeInstance)->WParameter();
}

Macad::Occt::Pnt Macad::Occt::BRepClass3d_Intersector3d::Pnt()
{
	return Macad::Occt::Pnt(((::BRepClass3d_Intersector3d*)_NativeInstance)->Pnt());
}

Macad::Occt::TopAbs_State Macad::Occt::BRepClass3d_Intersector3d::State()
{
	return (Macad::Occt::TopAbs_State)((::BRepClass3d_Intersector3d*)_NativeInstance)->State();
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepClass3d_Intersector3d::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::BRepClass3d_Intersector3d*)_NativeInstance)->Face();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}




//---------------------------------------------------------------------
//  Class  BRepClass3d_SolidExplorer
//---------------------------------------------------------------------

Macad::Occt::BRepClass3d_SolidExplorer::BRepClass3d_SolidExplorer()
	: BaseClass<::BRepClass3d_SolidExplorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SolidExplorer();
}

Macad::Occt::BRepClass3d_SolidExplorer::BRepClass3d_SolidExplorer(Macad::Occt::TopoDS_Shape^ S)
	: BaseClass<::BRepClass3d_SolidExplorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SolidExplorer(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepClass3d_SolidExplorer::InitShape(Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->InitShape(*(::TopoDS_Shape*)S->NativeInstance);
}

bool Macad::Occt::BRepClass3d_SolidExplorer::Reject(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ((::BRepClass3d_SolidExplorer*)_NativeInstance)->Reject(*(gp_Pnt*)pp_P);
}

bool Macad::Occt::BRepClass3d_SolidExplorer::FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% Param)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Param = &Param;
	return ::BRepClass3d_SolidExplorer::FindAPointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_Param);
}

bool Macad::Occt::BRepClass3d_SolidExplorer::FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	pin_ptr<double> pp_Param = &Param;
	return ::BRepClass3d_SolidExplorer::FindAPointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_u, *(Standard_Real*)pp_v, *(Standard_Real*)pp_Param);
}

bool Macad::Occt::BRepClass3d_SolidExplorer::FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param, Macad::Occt::Vec% theVecD1U, Macad::Occt::Vec% theVecD1V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	pin_ptr<double> pp_Param = &Param;
	pin_ptr<Macad::Occt::Vec> pp_theVecD1U = &theVecD1U;
	pin_ptr<Macad::Occt::Vec> pp_theVecD1V = &theVecD1V;
	return ::BRepClass3d_SolidExplorer::FindAPointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_u, *(Standard_Real*)pp_v, *(Standard_Real*)pp_Param, *(gp_Vec*)pp_theVecD1U, *(gp_Vec*)pp_theVecD1V);
}

bool Macad::Occt::BRepClass3d_SolidExplorer::FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	return ::BRepClass3d_SolidExplorer::FindAPointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_u, *(Standard_Real*)pp_v);
}

bool Macad::Occt::BRepClass3d_SolidExplorer::FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ::BRepClass3d_SolidExplorer::FindAPointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P);
}

bool Macad::Occt::BRepClass3d_SolidExplorer::FindAPointInTheFace(Macad::Occt::TopoDS_Face^ F, double% u, double% v)
{
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	return ::BRepClass3d_SolidExplorer::FindAPointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(Standard_Real*)pp_u, *(Standard_Real*)pp_v);
}

bool Macad::Occt::BRepClass3d_SolidExplorer::PointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param, int% Index)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	pin_ptr<double> pp_Param = &Param;
	pin_ptr<int> pp_Index = &Index;
	return ((::BRepClass3d_SolidExplorer*)_NativeInstance)->PointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_u, *(Standard_Real*)pp_v, *(Standard_Real*)pp_Param, *(Standard_Integer*)pp_Index);
}

bool Macad::Occt::BRepClass3d_SolidExplorer::PointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param, int% Index, Macad::Occt::BRepAdaptor_Surface^ surf, double u1, double v1, double u2, double v2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	pin_ptr<double> pp_Param = &Param;
	pin_ptr<int> pp_Index = &Index;
	Handle(::BRepAdaptor_Surface) h_surf = surf->NativeInstance;
	return ((::BRepClass3d_SolidExplorer*)_NativeInstance)->PointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_u, *(Standard_Real*)pp_v, *(Standard_Real*)pp_Param, *(Standard_Integer*)pp_Index, h_surf, u1, v1, u2, v2);
	surf->NativeInstance = h_surf.get();
}

bool Macad::Occt::BRepClass3d_SolidExplorer::PointInTheFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% P, double% u, double% v, double% Param, int% Index, Macad::Occt::BRepAdaptor_Surface^ surf, double u1, double v1, double u2, double v2, Macad::Occt::Vec% theVecD1U, Macad::Occt::Vec% theVecD1V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	pin_ptr<double> pp_Param = &Param;
	pin_ptr<int> pp_Index = &Index;
	Handle(::BRepAdaptor_Surface) h_surf = surf->NativeInstance;
	pin_ptr<Macad::Occt::Vec> pp_theVecD1U = &theVecD1U;
	pin_ptr<Macad::Occt::Vec> pp_theVecD1V = &theVecD1V;
	return ((::BRepClass3d_SolidExplorer*)_NativeInstance)->PointInTheFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_u, *(Standard_Real*)pp_v, *(Standard_Real*)pp_Param, *(Standard_Integer*)pp_Index, h_surf, u1, v1, u2, v2, *(gp_Vec*)pp_theVecD1U, *(gp_Vec*)pp_theVecD1V);
	surf->NativeInstance = h_surf.get();
}

void Macad::Occt::BRepClass3d_SolidExplorer::InitShell()
{
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->InitShell();
}

bool Macad::Occt::BRepClass3d_SolidExplorer::MoreShell()
{
	return ((::BRepClass3d_SolidExplorer*)_NativeInstance)->MoreShell();
}

void Macad::Occt::BRepClass3d_SolidExplorer::NextShell()
{
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->NextShell();
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::BRepClass3d_SolidExplorer::CurrentShell()
{
	::TopoDS_Shell* _result = new ::TopoDS_Shell();
	*_result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->CurrentShell();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
}

bool Macad::Occt::BRepClass3d_SolidExplorer::RejectShell(Macad::Occt::gp_Lin^ L)
{
	return ((::BRepClass3d_SolidExplorer*)_NativeInstance)->RejectShell(*(::gp_Lin*)L->NativeInstance);
}

void Macad::Occt::BRepClass3d_SolidExplorer::InitFace()
{
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->InitFace();
}

bool Macad::Occt::BRepClass3d_SolidExplorer::MoreFace()
{
	return ((::BRepClass3d_SolidExplorer*)_NativeInstance)->MoreFace();
}

void Macad::Occt::BRepClass3d_SolidExplorer::NextFace()
{
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->NextFace();
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepClass3d_SolidExplorer::CurrentFace()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = ((::BRepClass3d_SolidExplorer*)_NativeInstance)->CurrentFace();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

bool Macad::Occt::BRepClass3d_SolidExplorer::RejectFace(Macad::Occt::gp_Lin^ L)
{
	return ((::BRepClass3d_SolidExplorer*)_NativeInstance)->RejectFace(*(::gp_Lin*)L->NativeInstance);
}

int Macad::Occt::BRepClass3d_SolidExplorer::Segment(Macad::Occt::Pnt P, Macad::Occt::gp_Lin^ L, double% Par)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Par = &Par;
	return ((::BRepClass3d_SolidExplorer*)_NativeInstance)->Segment(*(gp_Pnt*)pp_P, *(::gp_Lin*)L->NativeInstance, *(Standard_Real*)pp_Par);
}

int Macad::Occt::BRepClass3d_SolidExplorer::OtherSegment(Macad::Occt::Pnt P, Macad::Occt::gp_Lin^ L, double% Par)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Par = &Par;
	return ((::BRepClass3d_SolidExplorer*)_NativeInstance)->OtherSegment(*(gp_Pnt*)pp_P, *(::gp_Lin*)L->NativeInstance, *(Standard_Real*)pp_Par);
}

int Macad::Occt::BRepClass3d_SolidExplorer::GetFaceSegmentIndex()
{
	return ((::BRepClass3d_SolidExplorer*)_NativeInstance)->GetFaceSegmentIndex();
}

void Macad::Occt::BRepClass3d_SolidExplorer::DumpSegment(Macad::Occt::Pnt P, Macad::Occt::gp_Lin^ L, double Par, Macad::Occt::TopAbs_State S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->DumpSegment(*(gp_Pnt*)pp_P, *(::gp_Lin*)L->NativeInstance, Par, (::TopAbs_State)S);
}

Macad::Occt::Bnd_Box^ Macad::Occt::BRepClass3d_SolidExplorer::Box()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::BRepClass3d_SolidExplorer*)_NativeInstance)->Box();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepClass3d_SolidExplorer::GetShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepClass3d_SolidExplorer*)_NativeInstance)->GetShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::IntCurvesFace_Intersector^ Macad::Occt::BRepClass3d_SolidExplorer::Intersector(Macad::Occt::TopoDS_Face^ F)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::TopTools_IndexedMapOfShape^ Macad::Occt::BRepClass3d_SolidExplorer::GetMapEV()
{
	::TopTools_IndexedMapOfShape* _result = new ::TopTools_IndexedMapOfShape();
	*_result =  (::TopTools_IndexedMapOfShape)((::BRepClass3d_SolidExplorer*)_NativeInstance)->GetMapEV();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_IndexedMapOfShape(_result);
}

void Macad::Occt::BRepClass3d_SolidExplorer::Destroy()
{
	((::BRepClass3d_SolidExplorer*)_NativeInstance)->Destroy();
}




//---------------------------------------------------------------------
//  Class  BRepClass3d_SClassifier
//---------------------------------------------------------------------

Macad::Occt::BRepClass3d_SClassifier::BRepClass3d_SClassifier()
	: BaseClass<::BRepClass3d_SClassifier>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SClassifier();
}

Macad::Occt::BRepClass3d_SClassifier::BRepClass3d_SClassifier(Macad::Occt::BRepClass3d_SolidExplorer^ S, Macad::Occt::Pnt P, double Tol)
	: BaseClass<::BRepClass3d_SClassifier>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	_NativeInstance = new ::BRepClass3d_SClassifier(*(::BRepClass3d_SolidExplorer*)S->NativeInstance, *(gp_Pnt*)pp_P, Tol);
}

Macad::Occt::BRepClass3d_SClassifier::BRepClass3d_SClassifier(Macad::Occt::BRepClass3d_SClassifier^ parameter1)
	: BaseClass<::BRepClass3d_SClassifier>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SClassifier(*(::BRepClass3d_SClassifier*)parameter1->NativeInstance);
}

void Macad::Occt::BRepClass3d_SClassifier::Perform(Macad::Occt::BRepClass3d_SolidExplorer^ S, Macad::Occt::Pnt P, double Tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::BRepClass3d_SClassifier*)_NativeInstance)->Perform(*(::BRepClass3d_SolidExplorer*)S->NativeInstance, *(gp_Pnt*)pp_P, Tol);
}

void Macad::Occt::BRepClass3d_SClassifier::PerformInfinitePoint(Macad::Occt::BRepClass3d_SolidExplorer^ S, double Tol)
{
	((::BRepClass3d_SClassifier*)_NativeInstance)->PerformInfinitePoint(*(::BRepClass3d_SolidExplorer*)S->NativeInstance, Tol);
}

bool Macad::Occt::BRepClass3d_SClassifier::Rejected()
{
	return ((::BRepClass3d_SClassifier*)_NativeInstance)->Rejected();
}

Macad::Occt::TopAbs_State Macad::Occt::BRepClass3d_SClassifier::State()
{
	return (Macad::Occt::TopAbs_State)((::BRepClass3d_SClassifier*)_NativeInstance)->State();
}

bool Macad::Occt::BRepClass3d_SClassifier::IsOnAFace()
{
	return ((::BRepClass3d_SClassifier*)_NativeInstance)->IsOnAFace();
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepClass3d_SClassifier::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = ((::BRepClass3d_SClassifier*)_NativeInstance)->Face();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}




//---------------------------------------------------------------------
//  Class  BRepClass3d_SolidClassifier
//---------------------------------------------------------------------

Macad::Occt::BRepClass3d_SolidClassifier::BRepClass3d_SolidClassifier()
	: Macad::Occt::BRepClass3d_SClassifier(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SolidClassifier();
}

Macad::Occt::BRepClass3d_SolidClassifier::BRepClass3d_SolidClassifier(Macad::Occt::TopoDS_Shape^ S)
	: Macad::Occt::BRepClass3d_SClassifier(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SolidClassifier(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::BRepClass3d_SolidClassifier::BRepClass3d_SolidClassifier(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Pnt P, double Tol)
	: Macad::Occt::BRepClass3d_SClassifier(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	_NativeInstance = new ::BRepClass3d_SolidClassifier(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Pnt*)pp_P, Tol);
}

void Macad::Occt::BRepClass3d_SolidClassifier::Load(Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepClass3d_SolidClassifier*)_NativeInstance)->Load(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepClass3d_SolidClassifier::Perform(Macad::Occt::Pnt P, double Tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::BRepClass3d_SolidClassifier*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P, Tol);
}

void Macad::Occt::BRepClass3d_SolidClassifier::PerformInfinitePoint(double Tol)
{
	((::BRepClass3d_SolidClassifier*)_NativeInstance)->PerformInfinitePoint(Tol);
}

void Macad::Occt::BRepClass3d_SolidClassifier::Destroy()
{
	((::BRepClass3d_SolidClassifier*)_NativeInstance)->Destroy();
}




//---------------------------------------------------------------------
//  Class  BRepClass3d_SolidPassiveClassifier
//---------------------------------------------------------------------

Macad::Occt::BRepClass3d_SolidPassiveClassifier::BRepClass3d_SolidPassiveClassifier()
	: BaseClass<::BRepClass3d_SolidPassiveClassifier>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SolidPassiveClassifier();
}

Macad::Occt::BRepClass3d_SolidPassiveClassifier::BRepClass3d_SolidPassiveClassifier(Macad::Occt::BRepClass3d_SolidPassiveClassifier^ parameter1)
	: BaseClass<::BRepClass3d_SolidPassiveClassifier>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepClass3d_SolidPassiveClassifier(*(::BRepClass3d_SolidPassiveClassifier*)parameter1->NativeInstance);
}

void Macad::Occt::BRepClass3d_SolidPassiveClassifier::Reset(Macad::Occt::gp_Lin^ L, double P, double Tol)
{
	((::BRepClass3d_SolidPassiveClassifier*)_NativeInstance)->Reset(*(::gp_Lin*)L->NativeInstance, P, Tol);
}

void Macad::Occt::BRepClass3d_SolidPassiveClassifier::Compare(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopAbs_Orientation Or)
{
	((::BRepClass3d_SolidPassiveClassifier*)_NativeInstance)->Compare(*(::TopoDS_Face*)F->NativeInstance, (::TopAbs_Orientation)Or);
}

double Macad::Occt::BRepClass3d_SolidPassiveClassifier::Parameter()
{
	return ((::BRepClass3d_SolidPassiveClassifier*)_NativeInstance)->Parameter();
}

bool Macad::Occt::BRepClass3d_SolidPassiveClassifier::HasIntersection()
{
	return ((::BRepClass3d_SolidPassiveClassifier*)_NativeInstance)->HasIntersection();
}

Macad::Occt::BRepClass3d_Intersector3d^ Macad::Occt::BRepClass3d_SolidPassiveClassifier::Intersector()
{
	::BRepClass3d_Intersector3d* _result = new ::BRepClass3d_Intersector3d();
	*_result = ((::BRepClass3d_SolidPassiveClassifier*)_NativeInstance)->Intersector();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepClass3d_Intersector3d(_result);
}

Macad::Occt::TopAbs_State Macad::Occt::BRepClass3d_SolidPassiveClassifier::State()
{
	return (Macad::Occt::TopAbs_State)((::BRepClass3d_SolidPassiveClassifier*)_NativeInstance)->State();
}



