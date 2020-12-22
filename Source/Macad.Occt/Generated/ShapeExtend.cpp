// Generated wrapper code for package ShapeExtend

#include "OcctPCH.h"
#include "ShapeExtend.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "NCollection.h"
#include "ShapeExtend.h"
#include "TopoDS.h"
#include "Geom.h"
#include "gp.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "TopTools.h"
#include "Message.h"
#include "TopAbs.h"


//---------------------------------------------------------------------
//  Class  ShapeExtend_DataMapOfShapeListOfMsg
//---------------------------------------------------------------------

Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg::ShapeExtend_DataMapOfShapeListOfMsg()
	: BaseClass<::ShapeExtend_DataMapOfShapeListOfMsg>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeExtend_DataMapOfShapeListOfMsg();
}

Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg::ShapeExtend_DataMapOfShapeListOfMsg(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::ShapeExtend_DataMapOfShapeListOfMsg>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::ShapeExtend_DataMapOfShapeListOfMsg(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg::ShapeExtend_DataMapOfShapeListOfMsg(int theNbBuckets)
	: BaseClass<::ShapeExtend_DataMapOfShapeListOfMsg>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeExtend_DataMapOfShapeListOfMsg(theNbBuckets, 0L);
}

Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg::ShapeExtend_DataMapOfShapeListOfMsg(Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg^ theOther)
	: BaseClass<::ShapeExtend_DataMapOfShapeListOfMsg>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeExtend_DataMapOfShapeListOfMsg(*(::ShapeExtend_DataMapOfShapeListOfMsg*)theOther->NativeInstance);
}

void Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg::Exchange(Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg^ theOther)
{
	((::ShapeExtend_DataMapOfShapeListOfMsg*)_NativeInstance)->Exchange(*(::ShapeExtend_DataMapOfShapeListOfMsg*)theOther->NativeInstance);
}

Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg^ Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg::Assign(Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg^ theOther)
{
	::ShapeExtend_DataMapOfShapeListOfMsg* _result = new ::ShapeExtend_DataMapOfShapeListOfMsg();
	*_result = ((::ShapeExtend_DataMapOfShapeListOfMsg*)_NativeInstance)->Assign(*(::ShapeExtend_DataMapOfShapeListOfMsg*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg(_result);
}

bool Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::ShapeExtend_DataMapOfShapeListOfMsg*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::ShapeExtend_DataMapOfShapeListOfMsg*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

void Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg::Clear(bool doReleaseMemory)
{
	((::ShapeExtend_DataMapOfShapeListOfMsg*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg::Clear()
{
	((::ShapeExtend_DataMapOfShapeListOfMsg*)_NativeInstance)->Clear(true);
}

void Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::ShapeExtend_DataMapOfShapeListOfMsg*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg::Size()
{
	return ((::ShapeExtend_DataMapOfShapeListOfMsg*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  ShapeExtend_ComplexCurve
//---------------------------------------------------------------------

Macad::Occt::ShapeExtend_ComplexCurve::ShapeExtend_ComplexCurve(Macad::Occt::ShapeExtend_ComplexCurve^ parameter1)
	: Macad::Occt::Geom_Curve(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

int Macad::Occt::ShapeExtend_ComplexCurve::NbCurves()
{
	return ((::ShapeExtend_ComplexCurve*)_NativeInstance)->NbCurves();
}

Macad::Occt::Geom_Curve^ Macad::Occt::ShapeExtend_ComplexCurve::Curve(int index)
{
	Handle(::Geom_Curve) _result;
	_result = ((::ShapeExtend_ComplexCurve*)_NativeInstance)->Curve(index);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

int Macad::Occt::ShapeExtend_ComplexCurve::LocateParameter(double U, double% UOut)
{
	pin_ptr<double> pp_UOut = &UOut;
	return ((::ShapeExtend_ComplexCurve*)_NativeInstance)->LocateParameter(U, *(Standard_Real*)pp_UOut);
}

double Macad::Occt::ShapeExtend_ComplexCurve::LocalToGlobal(int index, double Ulocal)
{
	return ((::ShapeExtend_ComplexCurve*)_NativeInstance)->LocalToGlobal(index, Ulocal);
}

void Macad::Occt::ShapeExtend_ComplexCurve::Transform(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	((::ShapeExtend_ComplexCurve*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

double Macad::Occt::ShapeExtend_ComplexCurve::ReversedParameter(double U)
{
	return ((::ShapeExtend_ComplexCurve*)_NativeInstance)->ReversedParameter(U);
}

double Macad::Occt::ShapeExtend_ComplexCurve::FirstParameter()
{
	return ((::ShapeExtend_ComplexCurve*)_NativeInstance)->FirstParameter();
}

double Macad::Occt::ShapeExtend_ComplexCurve::LastParameter()
{
	return ((::ShapeExtend_ComplexCurve*)_NativeInstance)->LastParameter();
}

bool Macad::Occt::ShapeExtend_ComplexCurve::IsClosed()
{
	return ((::ShapeExtend_ComplexCurve*)_NativeInstance)->IsClosed();
}

bool Macad::Occt::ShapeExtend_ComplexCurve::IsPeriodic()
{
	return ((::ShapeExtend_ComplexCurve*)_NativeInstance)->IsPeriodic();
}

Macad::Occt::GeomAbs_Shape Macad::Occt::ShapeExtend_ComplexCurve::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::ShapeExtend_ComplexCurve*)_NativeInstance)->Continuity();
}

bool Macad::Occt::ShapeExtend_ComplexCurve::IsCN(int N)
{
	return ((::ShapeExtend_ComplexCurve*)_NativeInstance)->IsCN(N);
}

void Macad::Occt::ShapeExtend_ComplexCurve::D0(double U, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::ShapeExtend_ComplexCurve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void Macad::Occt::ShapeExtend_ComplexCurve::D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	((::ShapeExtend_ComplexCurve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void Macad::Occt::ShapeExtend_ComplexCurve::D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	((::ShapeExtend_ComplexCurve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::ShapeExtend_ComplexCurve::D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	((::ShapeExtend_ComplexCurve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

Macad::Occt::Vec Macad::Occt::ShapeExtend_ComplexCurve::DN(double U, int N)
{
	return Macad::Occt::Vec(((::ShapeExtend_ComplexCurve*)_NativeInstance)->DN(U, N));
}

double Macad::Occt::ShapeExtend_ComplexCurve::GetScaleFactor(int ind)
{
	return ((::ShapeExtend_ComplexCurve*)_NativeInstance)->GetScaleFactor(ind);
}

bool Macad::Occt::ShapeExtend_ComplexCurve::CheckConnectivity(double Preci)
{
	return ((::ShapeExtend_ComplexCurve*)_NativeInstance)->CheckConnectivity(Preci);
}


Macad::Occt::ShapeExtend_ComplexCurve^ Macad::Occt::ShapeExtend_ComplexCurve::CreateDowncasted(::ShapeExtend_ComplexCurve* instance)
{
	return gcnew Macad::Occt::ShapeExtend_ComplexCurve( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeExtend_CompositeSurface
//---------------------------------------------------------------------

Macad::Occt::ShapeExtend_CompositeSurface::ShapeExtend_CompositeSurface()
	: Macad::Occt::Geom_Surface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeExtend_CompositeSurface();
}

Macad::Occt::ShapeExtend_CompositeSurface::ShapeExtend_CompositeSurface(Macad::Occt::ShapeExtend_CompositeSurface^ parameter1)
	: Macad::Occt::Geom_Surface(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeExtend_CompositeSurface(*(::ShapeExtend_CompositeSurface*)parameter1->NativeInstance);
}

int Macad::Occt::ShapeExtend_CompositeSurface::NbUPatches()
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->NbUPatches();
}

int Macad::Occt::ShapeExtend_CompositeSurface::NbVPatches()
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->NbVPatches();
}

Macad::Occt::Geom_Surface^ Macad::Occt::ShapeExtend_CompositeSurface::Patch(int i, int j)
{
	Handle(::Geom_Surface) _result;
	_result = ((::ShapeExtend_CompositeSurface*)_NativeInstance)->Patch(i, j);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::ShapeExtend_CompositeSurface::UJointValues()
{
	Handle(::TColStd_HArray1OfReal) _result;
	_result = ((::ShapeExtend_CompositeSurface*)_NativeInstance)->UJointValues();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::ShapeExtend_CompositeSurface::VJointValues()
{
	Handle(::TColStd_HArray1OfReal) _result;
	_result = ((::ShapeExtend_CompositeSurface*)_NativeInstance)->VJointValues();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted( _result.get());
}

double Macad::Occt::ShapeExtend_CompositeSurface::UJointValue(int i)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->UJointValue(i);
}

double Macad::Occt::ShapeExtend_CompositeSurface::VJointValue(int j)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->VJointValue(j);
}

bool Macad::Occt::ShapeExtend_CompositeSurface::SetUJointValues(Macad::Occt::TColStd_Array1OfReal^ UJoints)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->SetUJointValues(*(::TColStd_Array1OfReal*)UJoints->NativeInstance);
}

bool Macad::Occt::ShapeExtend_CompositeSurface::SetVJointValues(Macad::Occt::TColStd_Array1OfReal^ VJoints)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->SetVJointValues(*(::TColStd_Array1OfReal*)VJoints->NativeInstance);
}

void Macad::Occt::ShapeExtend_CompositeSurface::SetUFirstValue(double UFirst)
{
	((::ShapeExtend_CompositeSurface*)_NativeInstance)->SetUFirstValue(UFirst);
}

void Macad::Occt::ShapeExtend_CompositeSurface::SetVFirstValue(double VFirst)
{
	((::ShapeExtend_CompositeSurface*)_NativeInstance)->SetVFirstValue(VFirst);
}

int Macad::Occt::ShapeExtend_CompositeSurface::LocateUParameter(double U)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->LocateUParameter(U);
}

int Macad::Occt::ShapeExtend_CompositeSurface::LocateVParameter(double V)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->LocateVParameter(V);
}

void Macad::Occt::ShapeExtend_CompositeSurface::LocateUVPoint(Macad::Occt::Pnt2d pnt, int% i, int% j)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_pnt = &pnt;
	pin_ptr<int> pp_i = &i;
	pin_ptr<int> pp_j = &j;
	((::ShapeExtend_CompositeSurface*)_NativeInstance)->LocateUVPoint(*(gp_Pnt2d*)pp_pnt, *(Standard_Integer*)pp_i, *(Standard_Integer*)pp_j);
}

Macad::Occt::Geom_Surface^ Macad::Occt::ShapeExtend_CompositeSurface::Patch(double U, double V)
{
	Handle(::Geom_Surface) _result;
	_result = ((::ShapeExtend_CompositeSurface*)_NativeInstance)->Patch(U, V);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::ShapeExtend_CompositeSurface::Patch(Macad::Occt::Pnt2d pnt)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_pnt = &pnt;
	Handle(::Geom_Surface) _result;
	_result = ((::ShapeExtend_CompositeSurface*)_NativeInstance)->Patch(*(gp_Pnt2d*)pp_pnt);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

double Macad::Occt::ShapeExtend_CompositeSurface::ULocalToGlobal(int i, int j, double u)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->ULocalToGlobal(i, j, u);
}

double Macad::Occt::ShapeExtend_CompositeSurface::VLocalToGlobal(int i, int j, double v)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->VLocalToGlobal(i, j, v);
}

Macad::Occt::Pnt2d Macad::Occt::ShapeExtend_CompositeSurface::LocalToGlobal(int i, int j, Macad::Occt::Pnt2d uv)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_uv = &uv;
	return Macad::Occt::Pnt2d(((::ShapeExtend_CompositeSurface*)_NativeInstance)->LocalToGlobal(i, j, *(gp_Pnt2d*)pp_uv));
}

double Macad::Occt::ShapeExtend_CompositeSurface::UGlobalToLocal(int i, int j, double U)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->UGlobalToLocal(i, j, U);
}

double Macad::Occt::ShapeExtend_CompositeSurface::VGlobalToLocal(int i, int j, double V)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->VGlobalToLocal(i, j, V);
}

Macad::Occt::Pnt2d Macad::Occt::ShapeExtend_CompositeSurface::GlobalToLocal(int i, int j, Macad::Occt::Pnt2d UV)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_UV = &UV;
	return Macad::Occt::Pnt2d(((::ShapeExtend_CompositeSurface*)_NativeInstance)->GlobalToLocal(i, j, *(gp_Pnt2d*)pp_UV));
}

bool Macad::Occt::ShapeExtend_CompositeSurface::GlobalToLocalTransformation(int i, int j, double% uFact, Macad::Occt::Trsf2d% Trsf)
{
	pin_ptr<double> pp_uFact = &uFact;
	pin_ptr<Macad::Occt::Trsf2d> pp_Trsf = &Trsf;
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->GlobalToLocalTransformation(i, j, *(Standard_Real*)pp_uFact, *(gp_Trsf2d*)pp_Trsf);
}

void Macad::Occt::ShapeExtend_CompositeSurface::Transform(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	((::ShapeExtend_CompositeSurface*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

Macad::Occt::Geom_Geometry^ Macad::Occt::ShapeExtend_CompositeSurface::Copy()
{
	Handle(::Geom_Geometry) _result;
	_result = ((::ShapeExtend_CompositeSurface*)_NativeInstance)->Copy();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Geometry::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeExtend_CompositeSurface::UReverse()
{
	((::ShapeExtend_CompositeSurface*)_NativeInstance)->UReverse();
}

double Macad::Occt::ShapeExtend_CompositeSurface::UReversedParameter(double U)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->UReversedParameter(U);
}

void Macad::Occt::ShapeExtend_CompositeSurface::VReverse()
{
	((::ShapeExtend_CompositeSurface*)_NativeInstance)->VReverse();
}

double Macad::Occt::ShapeExtend_CompositeSurface::VReversedParameter(double V)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->VReversedParameter(V);
}

void Macad::Occt::ShapeExtend_CompositeSurface::Bounds(double% U1, double% U2, double% V1, double% V2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	pin_ptr<double> pp_V1 = &V1;
	pin_ptr<double> pp_V2 = &V2;
	((::ShapeExtend_CompositeSurface*)_NativeInstance)->Bounds(*(Standard_Real*)pp_U1, *(Standard_Real*)pp_U2, *(Standard_Real*)pp_V1, *(Standard_Real*)pp_V2);
}

bool Macad::Occt::ShapeExtend_CompositeSurface::IsUClosed()
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->IsUClosed();
}

bool Macad::Occt::ShapeExtend_CompositeSurface::IsVClosed()
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->IsVClosed();
}

bool Macad::Occt::ShapeExtend_CompositeSurface::IsUPeriodic()
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->IsUPeriodic();
}

bool Macad::Occt::ShapeExtend_CompositeSurface::IsVPeriodic()
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->IsVPeriodic();
}

Macad::Occt::Geom_Curve^ Macad::Occt::ShapeExtend_CompositeSurface::UIso(double U)
{
	Handle(::Geom_Curve) _result;
	_result = ((::ShapeExtend_CompositeSurface*)_NativeInstance)->UIso(U);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::ShapeExtend_CompositeSurface::VIso(double V)
{
	Handle(::Geom_Curve) _result;
	_result = ((::ShapeExtend_CompositeSurface*)_NativeInstance)->VIso(V);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::GeomAbs_Shape Macad::Occt::ShapeExtend_CompositeSurface::Continuity()
{
	return (Macad::Occt::GeomAbs_Shape)((::ShapeExtend_CompositeSurface*)_NativeInstance)->Continuity();
}

bool Macad::Occt::ShapeExtend_CompositeSurface::IsCNu(int N)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->IsCNu(N);
}

bool Macad::Occt::ShapeExtend_CompositeSurface::IsCNv(int N)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->IsCNv(N);
}

void Macad::Occt::ShapeExtend_CompositeSurface::D0(double U, double V, Macad::Occt::Pnt% P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::ShapeExtend_CompositeSurface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void Macad::Occt::ShapeExtend_CompositeSurface::D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
	pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
	((::ShapeExtend_CompositeSurface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void Macad::Occt::ShapeExtend_CompositeSurface::D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
	pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
	pin_ptr<Macad::Occt::Vec> pp_D2U = &D2U;
	pin_ptr<Macad::Occt::Vec> pp_D2V = &D2V;
	pin_ptr<Macad::Occt::Vec> pp_D2UV = &D2UV;
	((::ShapeExtend_CompositeSurface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void Macad::Occt::ShapeExtend_CompositeSurface::D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
	pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
	pin_ptr<Macad::Occt::Vec> pp_D2U = &D2U;
	pin_ptr<Macad::Occt::Vec> pp_D2V = &D2V;
	pin_ptr<Macad::Occt::Vec> pp_D2UV = &D2UV;
	pin_ptr<Macad::Occt::Vec> pp_D3U = &D3U;
	pin_ptr<Macad::Occt::Vec> pp_D3V = &D3V;
	pin_ptr<Macad::Occt::Vec> pp_D3UUV = &D3UUV;
	pin_ptr<Macad::Occt::Vec> pp_D3UVV = &D3UVV;
	((::ShapeExtend_CompositeSurface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

Macad::Occt::Vec Macad::Occt::ShapeExtend_CompositeSurface::DN(double U, double V, int Nu, int Nv)
{
	return Macad::Occt::Vec(((::ShapeExtend_CompositeSurface*)_NativeInstance)->DN(U, V, Nu, Nv));
}

Macad::Occt::Pnt Macad::Occt::ShapeExtend_CompositeSurface::Value(Macad::Occt::Pnt2d pnt)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_pnt = &pnt;
	return Macad::Occt::Pnt(((::ShapeExtend_CompositeSurface*)_NativeInstance)->Value(*(gp_Pnt2d*)pp_pnt));
}

void Macad::Occt::ShapeExtend_CompositeSurface::ComputeJointValues(Macad::Occt::ShapeExtend_Parametrisation param)
{
	((::ShapeExtend_CompositeSurface*)_NativeInstance)->ComputeJointValues((::ShapeExtend_Parametrisation)param);
}

void Macad::Occt::ShapeExtend_CompositeSurface::ComputeJointValues()
{
	((::ShapeExtend_CompositeSurface*)_NativeInstance)->ComputeJointValues(ShapeExtend_Natural);
}

bool Macad::Occt::ShapeExtend_CompositeSurface::CheckConnectivity(double prec)
{
	return ((::ShapeExtend_CompositeSurface*)_NativeInstance)->CheckConnectivity(prec);
}


Macad::Occt::ShapeExtend_CompositeSurface^ Macad::Occt::ShapeExtend_CompositeSurface::CreateDowncasted(::ShapeExtend_CompositeSurface* instance)
{
	return gcnew Macad::Occt::ShapeExtend_CompositeSurface( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeExtend_WireData
//---------------------------------------------------------------------

Macad::Occt::ShapeExtend_WireData::ShapeExtend_WireData()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeExtend_WireData();
}

Macad::Occt::ShapeExtend_WireData::ShapeExtend_WireData(Macad::Occt::TopoDS_Wire^ wire, bool chained, bool theManifoldMode)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeExtend_WireData(*(::TopoDS_Wire*)wire->NativeInstance, chained, theManifoldMode);
}

Macad::Occt::ShapeExtend_WireData::ShapeExtend_WireData(Macad::Occt::TopoDS_Wire^ wire, bool chained)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeExtend_WireData(*(::TopoDS_Wire*)wire->NativeInstance, chained, true);
}

Macad::Occt::ShapeExtend_WireData::ShapeExtend_WireData(Macad::Occt::TopoDS_Wire^ wire)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeExtend_WireData(*(::TopoDS_Wire*)wire->NativeInstance, true, true);
}

Macad::Occt::ShapeExtend_WireData::ShapeExtend_WireData(Macad::Occt::ShapeExtend_WireData^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeExtend_WireData(*(::ShapeExtend_WireData*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeExtend_WireData::Init(Macad::Occt::ShapeExtend_WireData^ other)
{
	Handle(::ShapeExtend_WireData) h_other = other->NativeInstance;
	((::ShapeExtend_WireData*)_NativeInstance)->Init(h_other);
	other->NativeInstance = h_other.get();
}

bool Macad::Occt::ShapeExtend_WireData::Init(Macad::Occt::TopoDS_Wire^ wire, bool chained, bool theManifoldMode)
{
	return ((::ShapeExtend_WireData*)_NativeInstance)->Init(*(::TopoDS_Wire*)wire->NativeInstance, chained, theManifoldMode);
}

bool Macad::Occt::ShapeExtend_WireData::Init(Macad::Occt::TopoDS_Wire^ wire, bool chained)
{
	return ((::ShapeExtend_WireData*)_NativeInstance)->Init(*(::TopoDS_Wire*)wire->NativeInstance, chained, true);
}

bool Macad::Occt::ShapeExtend_WireData::Init(Macad::Occt::TopoDS_Wire^ wire)
{
	return ((::ShapeExtend_WireData*)_NativeInstance)->Init(*(::TopoDS_Wire*)wire->NativeInstance, true, true);
}

void Macad::Occt::ShapeExtend_WireData::Clear()
{
	((::ShapeExtend_WireData*)_NativeInstance)->Clear();
}

void Macad::Occt::ShapeExtend_WireData::ComputeSeams(bool enforce)
{
	((::ShapeExtend_WireData*)_NativeInstance)->ComputeSeams(enforce);
}

void Macad::Occt::ShapeExtend_WireData::ComputeSeams()
{
	((::ShapeExtend_WireData*)_NativeInstance)->ComputeSeams(true);
}

void Macad::Occt::ShapeExtend_WireData::SetLast(int num)
{
	((::ShapeExtend_WireData*)_NativeInstance)->SetLast(num);
}

void Macad::Occt::ShapeExtend_WireData::SetDegeneratedLast()
{
	((::ShapeExtend_WireData*)_NativeInstance)->SetDegeneratedLast();
}

void Macad::Occt::ShapeExtend_WireData::Add(Macad::Occt::TopoDS_Edge^ edge, int atnum)
{
	((::ShapeExtend_WireData*)_NativeInstance)->Add(*(::TopoDS_Edge*)edge->NativeInstance, atnum);
}

void Macad::Occt::ShapeExtend_WireData::Add(Macad::Occt::TopoDS_Edge^ edge)
{
	((::ShapeExtend_WireData*)_NativeInstance)->Add(*(::TopoDS_Edge*)edge->NativeInstance, 0);
}

void Macad::Occt::ShapeExtend_WireData::Add(Macad::Occt::TopoDS_Wire^ wire, int atnum)
{
	((::ShapeExtend_WireData*)_NativeInstance)->Add(*(::TopoDS_Wire*)wire->NativeInstance, atnum);
}

void Macad::Occt::ShapeExtend_WireData::Add(Macad::Occt::TopoDS_Wire^ wire)
{
	((::ShapeExtend_WireData*)_NativeInstance)->Add(*(::TopoDS_Wire*)wire->NativeInstance, 0);
}

void Macad::Occt::ShapeExtend_WireData::Add(Macad::Occt::ShapeExtend_WireData^ wire, int atnum)
{
	Handle(::ShapeExtend_WireData) h_wire = wire->NativeInstance;
	((::ShapeExtend_WireData*)_NativeInstance)->Add(h_wire, atnum);
	wire->NativeInstance = h_wire.get();
}

void Macad::Occt::ShapeExtend_WireData::Add(Macad::Occt::ShapeExtend_WireData^ wire)
{
	Handle(::ShapeExtend_WireData) h_wire = wire->NativeInstance;
	((::ShapeExtend_WireData*)_NativeInstance)->Add(h_wire, 0);
	wire->NativeInstance = h_wire.get();
}

void Macad::Occt::ShapeExtend_WireData::Add(Macad::Occt::TopoDS_Shape^ shape, int atnum)
{
	((::ShapeExtend_WireData*)_NativeInstance)->Add(*(::TopoDS_Shape*)shape->NativeInstance, atnum);
}

void Macad::Occt::ShapeExtend_WireData::Add(Macad::Occt::TopoDS_Shape^ shape)
{
	((::ShapeExtend_WireData*)_NativeInstance)->Add(*(::TopoDS_Shape*)shape->NativeInstance, 0);
}

void Macad::Occt::ShapeExtend_WireData::AddOriented(Macad::Occt::TopoDS_Edge^ edge, int mode)
{
	((::ShapeExtend_WireData*)_NativeInstance)->AddOriented(*(::TopoDS_Edge*)edge->NativeInstance, mode);
}

void Macad::Occt::ShapeExtend_WireData::AddOriented(Macad::Occt::TopoDS_Wire^ wire, int mode)
{
	((::ShapeExtend_WireData*)_NativeInstance)->AddOriented(*(::TopoDS_Wire*)wire->NativeInstance, mode);
}

void Macad::Occt::ShapeExtend_WireData::AddOriented(Macad::Occt::TopoDS_Shape^ shape, int mode)
{
	((::ShapeExtend_WireData*)_NativeInstance)->AddOriented(*(::TopoDS_Shape*)shape->NativeInstance, mode);
}

void Macad::Occt::ShapeExtend_WireData::Remove(int num)
{
	((::ShapeExtend_WireData*)_NativeInstance)->Remove(num);
}

void Macad::Occt::ShapeExtend_WireData::Remove()
{
	((::ShapeExtend_WireData*)_NativeInstance)->Remove(0);
}

void Macad::Occt::ShapeExtend_WireData::Set(Macad::Occt::TopoDS_Edge^ edge, int num)
{
	((::ShapeExtend_WireData*)_NativeInstance)->Set(*(::TopoDS_Edge*)edge->NativeInstance, num);
}

void Macad::Occt::ShapeExtend_WireData::Set(Macad::Occt::TopoDS_Edge^ edge)
{
	((::ShapeExtend_WireData*)_NativeInstance)->Set(*(::TopoDS_Edge*)edge->NativeInstance, 0);
}

void Macad::Occt::ShapeExtend_WireData::Reverse()
{
	((::ShapeExtend_WireData*)_NativeInstance)->Reverse();
}

void Macad::Occt::ShapeExtend_WireData::Reverse(Macad::Occt::TopoDS_Face^ face)
{
	((::ShapeExtend_WireData*)_NativeInstance)->Reverse(*(::TopoDS_Face*)face->NativeInstance);
}

int Macad::Occt::ShapeExtend_WireData::NbEdges()
{
	return ((::ShapeExtend_WireData*)_NativeInstance)->NbEdges();
}

int Macad::Occt::ShapeExtend_WireData::NbNonManifoldEdges()
{
	return ((::ShapeExtend_WireData*)_NativeInstance)->NbNonManifoldEdges();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::ShapeExtend_WireData::NonmanifoldEdge(int num)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result = ((::ShapeExtend_WireData*)_NativeInstance)->NonmanifoldEdge(num);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeExtend_WireData::NonmanifoldEdges()
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeExtend_WireData*)_NativeInstance)->NonmanifoldEdges();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}

bool Macad::Occt::ShapeExtend_WireData::ManifoldMode()
{
	return ((::ShapeExtend_WireData*)_NativeInstance)->ManifoldMode();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::ShapeExtend_WireData::Edge(int num)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result = ((::ShapeExtend_WireData*)_NativeInstance)->Edge(num);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

int Macad::Occt::ShapeExtend_WireData::Index(Macad::Occt::TopoDS_Edge^ edge)
{
	return ((::ShapeExtend_WireData*)_NativeInstance)->Index(*(::TopoDS_Edge*)edge->NativeInstance);
}

bool Macad::Occt::ShapeExtend_WireData::IsSeam(int num)
{
	return ((::ShapeExtend_WireData*)_NativeInstance)->IsSeam(num);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::ShapeExtend_WireData::Wire()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = ((::ShapeExtend_WireData*)_NativeInstance)->Wire();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::ShapeExtend_WireData::WireAPIMake()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = ((::ShapeExtend_WireData*)_NativeInstance)->WireAPIMake();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}


Macad::Occt::ShapeExtend_WireData^ Macad::Occt::ShapeExtend_WireData::CreateDowncasted(::ShapeExtend_WireData* instance)
{
	return gcnew Macad::Occt::ShapeExtend_WireData( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeExtend_BasicMsgRegistrator
//---------------------------------------------------------------------

Macad::Occt::ShapeExtend_BasicMsgRegistrator::ShapeExtend_BasicMsgRegistrator()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeExtend_BasicMsgRegistrator();
}

Macad::Occt::ShapeExtend_BasicMsgRegistrator::ShapeExtend_BasicMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeExtend_BasicMsgRegistrator(*(::ShapeExtend_BasicMsgRegistrator*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeExtend_BasicMsgRegistrator::Send(Macad::Occt::Standard_Transient^ object, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::ShapeExtend_BasicMsgRegistrator::Send(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity)
{
	((::ShapeExtend_BasicMsgRegistrator*)_NativeInstance)->Send(*(::TopoDS_Shape*)shape->NativeInstance, *(::Message_Msg*)message->NativeInstance, (::Message_Gravity)gravity);
}

void Macad::Occt::ShapeExtend_BasicMsgRegistrator::Send(Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity)
{
	((::ShapeExtend_BasicMsgRegistrator*)_NativeInstance)->Send(*(::Message_Msg*)message->NativeInstance, (::Message_Gravity)gravity);
}


Macad::Occt::ShapeExtend_BasicMsgRegistrator^ Macad::Occt::ShapeExtend_BasicMsgRegistrator::CreateDowncasted(::ShapeExtend_BasicMsgRegistrator* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeExtend_MsgRegistrator)))
		return Macad::Occt::ShapeExtend_MsgRegistrator::CreateDowncasted((::ShapeExtend_MsgRegistrator*)instance);

	return gcnew Macad::Occt::ShapeExtend_BasicMsgRegistrator( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeExtend_MsgRegistrator
//---------------------------------------------------------------------

Macad::Occt::ShapeExtend_MsgRegistrator::ShapeExtend_MsgRegistrator()
	: Macad::Occt::ShapeExtend_BasicMsgRegistrator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeExtend_MsgRegistrator();
}

Macad::Occt::ShapeExtend_MsgRegistrator::ShapeExtend_MsgRegistrator(Macad::Occt::ShapeExtend_MsgRegistrator^ parameter1)
	: Macad::Occt::ShapeExtend_BasicMsgRegistrator(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeExtend_MsgRegistrator(*(::ShapeExtend_MsgRegistrator*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeExtend_MsgRegistrator::Send(Macad::Occt::Standard_Transient^ object, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::ShapeExtend_MsgRegistrator::Send(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity)
{
	((::ShapeExtend_MsgRegistrator*)_NativeInstance)->Send(*(::TopoDS_Shape*)shape->NativeInstance, *(::Message_Msg*)message->NativeInstance, (::Message_Gravity)gravity);
}

Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg^ Macad::Occt::ShapeExtend_MsgRegistrator::MapShape()
{
	::ShapeExtend_DataMapOfShapeListOfMsg* _result = new ::ShapeExtend_DataMapOfShapeListOfMsg();
	*_result =  (::ShapeExtend_DataMapOfShapeListOfMsg)((::ShapeExtend_MsgRegistrator*)_NativeInstance)->MapShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeExtend_DataMapOfShapeListOfMsg(_result);
}


Macad::Occt::ShapeExtend_MsgRegistrator^ Macad::Occt::ShapeExtend_MsgRegistrator::CreateDowncasted(::ShapeExtend_MsgRegistrator* instance)
{
	return gcnew Macad::Occt::ShapeExtend_MsgRegistrator( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeExtend_Explorer
//---------------------------------------------------------------------

Macad::Occt::ShapeExtend_Explorer::ShapeExtend_Explorer()
	: BaseClass<::ShapeExtend_Explorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeExtend_Explorer();
}

Macad::Occt::ShapeExtend_Explorer::ShapeExtend_Explorer(Macad::Occt::ShapeExtend_Explorer^ parameter1)
	: BaseClass<::ShapeExtend_Explorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeExtend_Explorer(*(::ShapeExtend_Explorer*)parameter1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeExtend_Explorer::CompoundFromSeq(Macad::Occt::TopTools_HSequenceOfShape^ seqval)
{
	Handle(::TopTools_HSequenceOfShape) h_seqval = seqval->NativeInstance;
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeExtend_Explorer*)_NativeInstance)->CompoundFromSeq(h_seqval);
	seqval->NativeInstance = h_seqval.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeExtend_Explorer::SeqFromCompound(Macad::Occt::TopoDS_Shape^ comp, bool expcomp)
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeExtend_Explorer*)_NativeInstance)->SeqFromCompound(*(::TopoDS_Shape*)comp->NativeInstance, expcomp);
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeExtend_Explorer::ListFromSeq(Macad::Occt::TopTools_HSequenceOfShape^ seqval, Macad::Occt::TopTools_ListOfShape^ lisval, bool clear)
{
	Handle(::TopTools_HSequenceOfShape) h_seqval = seqval->NativeInstance;
	((::ShapeExtend_Explorer*)_NativeInstance)->ListFromSeq(h_seqval, *(::TopTools_ListOfShape*)lisval->NativeInstance, clear);
	seqval->NativeInstance = h_seqval.get();
}

void Macad::Occt::ShapeExtend_Explorer::ListFromSeq(Macad::Occt::TopTools_HSequenceOfShape^ seqval, Macad::Occt::TopTools_ListOfShape^ lisval)
{
	Handle(::TopTools_HSequenceOfShape) h_seqval = seqval->NativeInstance;
	((::ShapeExtend_Explorer*)_NativeInstance)->ListFromSeq(h_seqval, *(::TopTools_ListOfShape*)lisval->NativeInstance, true);
	seqval->NativeInstance = h_seqval.get();
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeExtend_Explorer::SeqFromList(Macad::Occt::TopTools_ListOfShape^ lisval)
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeExtend_Explorer*)_NativeInstance)->SeqFromList(*(::TopTools_ListOfShape*)lisval->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}

Macad::Occt::TopAbs_ShapeEnum Macad::Occt::ShapeExtend_Explorer::ShapeType(Macad::Occt::TopoDS_Shape^ shape, bool compound)
{
	return (Macad::Occt::TopAbs_ShapeEnum)((::ShapeExtend_Explorer*)_NativeInstance)->ShapeType(*(::TopoDS_Shape*)shape->NativeInstance, compound);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeExtend_Explorer::SortedCompound(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopAbs_ShapeEnum type, bool explore, bool compound)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeExtend_Explorer*)_NativeInstance)->SortedCompound(*(::TopoDS_Shape*)shape->NativeInstance, (::TopAbs_ShapeEnum)type, explore, compound);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::ShapeExtend_Explorer::DispatchList(Macad::Occt::TopTools_HSequenceOfShape^ list, Macad::Occt::TopTools_HSequenceOfShape^ vertices, Macad::Occt::TopTools_HSequenceOfShape^ edges, Macad::Occt::TopTools_HSequenceOfShape^ wires, Macad::Occt::TopTools_HSequenceOfShape^ faces, Macad::Occt::TopTools_HSequenceOfShape^ shells, Macad::Occt::TopTools_HSequenceOfShape^ solids, Macad::Occt::TopTools_HSequenceOfShape^ compsols, Macad::Occt::TopTools_HSequenceOfShape^ compounds)
{
	Handle(::TopTools_HSequenceOfShape) h_list = list->NativeInstance;
	Handle(::TopTools_HSequenceOfShape) h_vertices = vertices->NativeInstance;
	Handle(::TopTools_HSequenceOfShape) h_edges = edges->NativeInstance;
	Handle(::TopTools_HSequenceOfShape) h_wires = wires->NativeInstance;
	Handle(::TopTools_HSequenceOfShape) h_faces = faces->NativeInstance;
	Handle(::TopTools_HSequenceOfShape) h_shells = shells->NativeInstance;
	Handle(::TopTools_HSequenceOfShape) h_solids = solids->NativeInstance;
	Handle(::TopTools_HSequenceOfShape) h_compsols = compsols->NativeInstance;
	Handle(::TopTools_HSequenceOfShape) h_compounds = compounds->NativeInstance;
	((::ShapeExtend_Explorer*)_NativeInstance)->DispatchList(h_list, h_vertices, h_edges, h_wires, h_faces, h_shells, h_solids, h_compsols, h_compounds);
	list->NativeInstance = h_list.get();
	vertices->NativeInstance = h_vertices.get();
	edges->NativeInstance = h_edges.get();
	wires->NativeInstance = h_wires.get();
	faces->NativeInstance = h_faces.get();
	shells->NativeInstance = h_shells.get();
	solids->NativeInstance = h_solids.get();
	compsols->NativeInstance = h_compsols.get();
	compounds->NativeInstance = h_compounds.get();
}




//---------------------------------------------------------------------
//  Class  ShapeExtend
//---------------------------------------------------------------------

Macad::Occt::ShapeExtend::ShapeExtend()
	: BaseClass<::ShapeExtend>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeExtend();
}

Macad::Occt::ShapeExtend::ShapeExtend(Macad::Occt::ShapeExtend^ parameter1)
	: BaseClass<::ShapeExtend>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeExtend(*(::ShapeExtend*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeExtend::Init()
{
	::ShapeExtend::Init();
}

int Macad::Occt::ShapeExtend::EncodeStatus(Macad::Occt::ShapeExtend_Status status)
{
	return ::ShapeExtend::EncodeStatus((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeExtend::DecodeStatus(int flag, Macad::Occt::ShapeExtend_Status status)
{
	return ::ShapeExtend::DecodeStatus(flag, (::ShapeExtend_Status)status);
}



