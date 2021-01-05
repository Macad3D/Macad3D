// Generated wrapper code for package ShapeAnalysis

#include "OcctPCH.h"
#include "ShapeAnalysis.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "NCollection.h"
#include "ShapeAnalysis.h"
#include "TopoDS.h"
#include "TColgp.h"
#include "gp.h"
#include "TColStd.h"
#include "Geom.h"
#include "Adaptor3d.h"
#include "Geom2d.h"
#include "Bnd.h"
#include "GeomAdaptor.h"
#include "TopLoc.h"
#include "ShapeExtend.h"
#include "TopTools.h"
#include "TopAbs.h"


//---------------------------------------------------------------------
//  Class  ShapeAnalysis_DataMapOfShapeListOfReal
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::ShapeAnalysis_DataMapOfShapeListOfReal()
	: BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_DataMapOfShapeListOfReal();
}

Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::ShapeAnalysis_DataMapOfShapeListOfReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::ShapeAnalysis_DataMapOfShapeListOfReal(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::ShapeAnalysis_DataMapOfShapeListOfReal(int theNbBuckets)
	: BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_DataMapOfShapeListOfReal(theNbBuckets, 0L);
}

Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::ShapeAnalysis_DataMapOfShapeListOfReal(Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ theOther)
	: BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_DataMapOfShapeListOfReal(*(::ShapeAnalysis_DataMapOfShapeListOfReal*)theOther->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Exchange(Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ theOther)
{
	((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Exchange(*(::ShapeAnalysis_DataMapOfShapeListOfReal*)theOther->NativeInstance);
}

Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Assign(Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ theOther)
{
	::ShapeAnalysis_DataMapOfShapeListOfReal* _result = new ::ShapeAnalysis_DataMapOfShapeListOfReal();
	*_result = ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Assign(*(::ShapeAnalysis_DataMapOfShapeListOfReal*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal(_result);
}

bool Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Clear(bool doReleaseMemory)
{
	((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Clear()
{
	((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Clear(true);
}

void Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Size()
{
	return ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_SequenceOfFreeBounds
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::ShapeAnalysis_SequenceOfFreeBounds()
	: BaseClass<::ShapeAnalysis_SequenceOfFreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_SequenceOfFreeBounds();
}

Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::ShapeAnalysis_SequenceOfFreeBounds(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::ShapeAnalysis_SequenceOfFreeBounds>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::ShapeAnalysis_SequenceOfFreeBounds(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::ShapeAnalysis_SequenceOfFreeBounds(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theOther)
	: BaseClass<::ShapeAnalysis_SequenceOfFreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_SequenceOfFreeBounds(*(::ShapeAnalysis_SequenceOfFreeBounds*)theOther->NativeInstance);
}

int Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Size()
{
	return ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Size();
}

int Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Length()
{
	return ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Length();
}

int Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Lower()
{
	return ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Lower();
}

int Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Upper()
{
	return ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Upper();
}

bool Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::IsEmpty()
{
	return ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Reverse()
{
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Reverse();
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Exchange(int I, int J)
{
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Clear()
{
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Clear(0L);
}

Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Assign(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theOther)
{
	::ShapeAnalysis_SequenceOfFreeBounds* _result = new ::ShapeAnalysis_SequenceOfFreeBounds();
	*_result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Assign(*(::ShapeAnalysis_SequenceOfFreeBounds*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds(_result);
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Remove(int theIndex)
{
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Remove(int theFromIndex, int theToIndex)
{
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Append(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_theItem = theItem->NativeInstance;
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Append(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSeq)
{
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Append(*(::ShapeAnalysis_SequenceOfFreeBounds*)theSeq->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Prepend(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_theItem = theItem->NativeInstance;
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Prepend(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSeq)
{
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Prepend(*(::ShapeAnalysis_SequenceOfFreeBounds*)theSeq->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::InsertBefore(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_theItem = theItem->NativeInstance;
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::InsertBefore(int theIndex, Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSeq)
{
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->InsertBefore(theIndex, *(::ShapeAnalysis_SequenceOfFreeBounds*)theSeq->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::InsertAfter(int theIndex, Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSeq)
{
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->InsertAfter(theIndex, *(::ShapeAnalysis_SequenceOfFreeBounds*)theSeq->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::InsertAfter(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_theItem = theItem->NativeInstance;
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Split(int theIndex, Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSeq)
{
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Split(theIndex, *(::ShapeAnalysis_SequenceOfFreeBounds*)theSeq->NativeInstance);
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::First()
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::ChangeFirst()
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Last()
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::ChangeLast()
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Value(int theIndex)
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::ChangeValue(int theIndex)
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::SetValue(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_theItem = theItem->NativeInstance;
	((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Geom
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_Geom::ShapeAnalysis_Geom()
	: BaseClass<::ShapeAnalysis_Geom>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_Geom();
}

Macad::Occt::ShapeAnalysis_Geom::ShapeAnalysis_Geom(Macad::Occt::ShapeAnalysis_Geom^ parameter1)
	: BaseClass<::ShapeAnalysis_Geom>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_Geom(*(::ShapeAnalysis_Geom*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_Geom::NearestPlane(Macad::Occt::TColgp_Array1OfPnt^ Pnts, Macad::Occt::Pln% aPln, double% Dmax)
{
	pin_ptr<Macad::Occt::Pln> pp_aPln = &aPln;
	pin_ptr<double> pp_Dmax = &Dmax;
	return ::ShapeAnalysis_Geom::NearestPlane(*(::TColgp_Array1OfPnt*)Pnts->NativeInstance, *(gp_Pln*)pp_aPln, *(Standard_Real*)pp_Dmax);
}

bool Macad::Occt::ShapeAnalysis_Geom::PositionTrsf(Macad::Occt::TColStd_HArray2OfReal^ coefs, Macad::Occt::Trsf% trsf, double unit, double prec)
{
	Handle(::TColStd_HArray2OfReal) h_coefs = coefs->NativeInstance;
	pin_ptr<Macad::Occt::Trsf> pp_trsf = &trsf;
	return ::ShapeAnalysis_Geom::PositionTrsf(h_coefs, *(gp_Trsf*)pp_trsf, unit, prec);
	coefs->NativeInstance = h_coefs.get();
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Curve
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_Curve::ShapeAnalysis_Curve()
	: BaseClass<::ShapeAnalysis_Curve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_Curve();
}

Macad::Occt::ShapeAnalysis_Curve::ShapeAnalysis_Curve(Macad::Occt::ShapeAnalysis_Curve^ parameter1)
	: BaseClass<::ShapeAnalysis_Curve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_Curve(*(::ShapeAnalysis_Curve*)parameter1->NativeInstance);
}

double Macad::Occt::ShapeAnalysis_Curve::Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, bool AdjustToEnds)
{
	Handle(::Geom_Curve) h_C3D = C3D->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
	pin_ptr<double> pp_param = &param;
	return ((::ShapeAnalysis_Curve*)_NativeInstance)->Project(h_C3D, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(Standard_Real*)pp_param, AdjustToEnds);
	C3D->NativeInstance = h_C3D.get();
}

double Macad::Occt::ShapeAnalysis_Curve::Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param)
{
	Handle(::Geom_Curve) h_C3D = C3D->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
	pin_ptr<double> pp_param = &param;
	return ((::ShapeAnalysis_Curve*)_NativeInstance)->Project(h_C3D, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(Standard_Real*)pp_param, true);
	C3D->NativeInstance = h_C3D.get();
}

double Macad::Occt::ShapeAnalysis_Curve::Project(Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, bool AdjustToEnds)
{
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
	pin_ptr<double> pp_param = &param;
	return ((::ShapeAnalysis_Curve*)_NativeInstance)->Project(*(::Adaptor3d_Curve*)C3D->NativeInstance, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(Standard_Real*)pp_param, AdjustToEnds);
}

double Macad::Occt::ShapeAnalysis_Curve::Project(Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param)
{
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
	pin_ptr<double> pp_param = &param;
	return ((::ShapeAnalysis_Curve*)_NativeInstance)->Project(*(::Adaptor3d_Curve*)C3D->NativeInstance, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(Standard_Real*)pp_param, true);
}

double Macad::Occt::ShapeAnalysis_Curve::Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl, bool AdjustToEnds)
{
	Handle(::Geom_Curve) h_C3D = C3D->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
	pin_ptr<double> pp_param = &param;
	return ((::ShapeAnalysis_Curve*)_NativeInstance)->Project(h_C3D, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(Standard_Real*)pp_param, cf, cl, AdjustToEnds);
	C3D->NativeInstance = h_C3D.get();
}

double Macad::Occt::ShapeAnalysis_Curve::Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl)
{
	Handle(::Geom_Curve) h_C3D = C3D->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
	pin_ptr<double> pp_param = &param;
	return ((::ShapeAnalysis_Curve*)_NativeInstance)->Project(h_C3D, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(Standard_Real*)pp_param, cf, cl, true);
	C3D->NativeInstance = h_C3D.get();
}

double Macad::Occt::ShapeAnalysis_Curve::ProjectAct(Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param)
{
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
	pin_ptr<double> pp_param = &param;
	return ((::ShapeAnalysis_Curve*)_NativeInstance)->ProjectAct(*(::Adaptor3d_Curve*)C3D->NativeInstance, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(Standard_Real*)pp_param);
}

double Macad::Occt::ShapeAnalysis_Curve::NextProject(double paramPrev, Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl, bool AdjustToEnds)
{
	Handle(::Geom_Curve) h_C3D = C3D->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
	pin_ptr<double> pp_param = &param;
	return ((::ShapeAnalysis_Curve*)_NativeInstance)->NextProject(paramPrev, h_C3D, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(Standard_Real*)pp_param, cf, cl, AdjustToEnds);
	C3D->NativeInstance = h_C3D.get();
}

double Macad::Occt::ShapeAnalysis_Curve::NextProject(double paramPrev, Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl)
{
	Handle(::Geom_Curve) h_C3D = C3D->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
	pin_ptr<double> pp_param = &param;
	return ((::ShapeAnalysis_Curve*)_NativeInstance)->NextProject(paramPrev, h_C3D, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(Standard_Real*)pp_param, cf, cl, true);
	C3D->NativeInstance = h_C3D.get();
}

double Macad::Occt::ShapeAnalysis_Curve::NextProject(double paramPrev, Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param)
{
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
	pin_ptr<double> pp_param = &param;
	return ((::ShapeAnalysis_Curve*)_NativeInstance)->NextProject(paramPrev, *(::Adaptor3d_Curve*)C3D->NativeInstance, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(Standard_Real*)pp_param);
}

bool Macad::Occt::ShapeAnalysis_Curve::ValidateRange(Macad::Occt::Geom_Curve^ Crv, double% First, double% Last, double prec)
{
	Handle(::Geom_Curve) h_Crv = Crv->NativeInstance;
	pin_ptr<double> pp_First = &First;
	pin_ptr<double> pp_Last = &Last;
	return ((::ShapeAnalysis_Curve*)_NativeInstance)->ValidateRange(h_Crv, *(Standard_Real*)pp_First, *(Standard_Real*)pp_Last, prec);
	Crv->NativeInstance = h_Crv.get();
}

void Macad::Occt::ShapeAnalysis_Curve::FillBndBox(Macad::Occt::Geom2d_Curve^ C2d, double First, double Last, int NPoints, bool Exact, Macad::Occt::Bnd_Box2d^ Box)
{
	Handle(::Geom2d_Curve) h_C2d = C2d->NativeInstance;
	((::ShapeAnalysis_Curve*)_NativeInstance)->FillBndBox(h_C2d, First, Last, NPoints, Exact, *(::Bnd_Box2d*)Box->NativeInstance);
	C2d->NativeInstance = h_C2d.get();
}

int Macad::Occt::ShapeAnalysis_Curve::SelectForwardSeam(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom2d_Curve) h_C2 = C2->NativeInstance;
	return ((::ShapeAnalysis_Curve*)_NativeInstance)->SelectForwardSeam(h_C1, h_C2);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
}

bool Macad::Occt::ShapeAnalysis_Curve::IsPlanar(Macad::Occt::TColgp_Array1OfPnt^ pnts, Macad::Occt::XYZ% Normal, double preci)
{
	pin_ptr<Macad::Occt::XYZ> pp_Normal = &Normal;
	return ::ShapeAnalysis_Curve::IsPlanar(*(::TColgp_Array1OfPnt*)pnts->NativeInstance, *(gp_XYZ*)pp_Normal, preci);
}

bool Macad::Occt::ShapeAnalysis_Curve::IsPlanar(Macad::Occt::TColgp_Array1OfPnt^ pnts, Macad::Occt::XYZ% Normal)
{
	pin_ptr<Macad::Occt::XYZ> pp_Normal = &Normal;
	return ::ShapeAnalysis_Curve::IsPlanar(*(::TColgp_Array1OfPnt*)pnts->NativeInstance, *(gp_XYZ*)pp_Normal, 0);
}

bool Macad::Occt::ShapeAnalysis_Curve::IsPlanar(Macad::Occt::Geom_Curve^ curve, Macad::Occt::XYZ% Normal, double preci)
{
	Handle(::Geom_Curve) h_curve = curve->NativeInstance;
	pin_ptr<Macad::Occt::XYZ> pp_Normal = &Normal;
	return ::ShapeAnalysis_Curve::IsPlanar(h_curve, *(gp_XYZ*)pp_Normal, preci);
	curve->NativeInstance = h_curve.get();
}

bool Macad::Occt::ShapeAnalysis_Curve::IsPlanar(Macad::Occt::Geom_Curve^ curve, Macad::Occt::XYZ% Normal)
{
	Handle(::Geom_Curve) h_curve = curve->NativeInstance;
	pin_ptr<Macad::Occt::XYZ> pp_Normal = &Normal;
	return ::ShapeAnalysis_Curve::IsPlanar(h_curve, *(gp_XYZ*)pp_Normal, 0);
	curve->NativeInstance = h_curve.get();
}

bool Macad::Occt::ShapeAnalysis_Curve::GetSamplePoints(Macad::Occt::Geom2d_Curve^ curve, double first, double last, Macad::Occt::TColgp_SequenceOfPnt2d^ seq)
{
	Handle(::Geom2d_Curve) h_curve = curve->NativeInstance;
	return ::ShapeAnalysis_Curve::GetSamplePoints(h_curve, first, last, *(::TColgp_SequenceOfPnt2d*)seq->NativeInstance);
	curve->NativeInstance = h_curve.get();
}

bool Macad::Occt::ShapeAnalysis_Curve::GetSamplePoints(Macad::Occt::Geom_Curve^ curve, double first, double last, Macad::Occt::TColgp_SequenceOfPnt^ seq)
{
	Handle(::Geom_Curve) h_curve = curve->NativeInstance;
	return ::ShapeAnalysis_Curve::GetSamplePoints(h_curve, first, last, *(::TColgp_SequenceOfPnt*)seq->NativeInstance);
	curve->NativeInstance = h_curve.get();
}

bool Macad::Occt::ShapeAnalysis_Curve::IsClosed(Macad::Occt::Geom_Curve^ curve, double preci)
{
	Handle(::Geom_Curve) h_curve = curve->NativeInstance;
	return ::ShapeAnalysis_Curve::IsClosed(h_curve, preci);
	curve->NativeInstance = h_curve.get();
}

bool Macad::Occt::ShapeAnalysis_Curve::IsClosed(Macad::Occt::Geom_Curve^ curve)
{
	Handle(::Geom_Curve) h_curve = curve->NativeInstance;
	return ::ShapeAnalysis_Curve::IsClosed(h_curve, -1);
	curve->NativeInstance = h_curve.get();
}

bool Macad::Occt::ShapeAnalysis_Curve::IsPeriodic(Macad::Occt::Geom_Curve^ curve)
{
	Handle(::Geom_Curve) h_curve = curve->NativeInstance;
	return ::ShapeAnalysis_Curve::IsPeriodic(h_curve);
	curve->NativeInstance = h_curve.get();
}

bool Macad::Occt::ShapeAnalysis_Curve::IsPeriodic(Macad::Occt::Geom2d_Curve^ curve)
{
	Handle(::Geom2d_Curve) h_curve = curve->NativeInstance;
	return ::ShapeAnalysis_Curve::IsPeriodic(h_curve);
	curve->NativeInstance = h_curve.get();
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Surface
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_Surface::ShapeAnalysis_Surface(Macad::Occt::Geom_Surface^ S)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	NativeInstance = new ::ShapeAnalysis_Surface(h_S);
	S->NativeInstance = h_S.get();
}

Macad::Occt::ShapeAnalysis_Surface::ShapeAnalysis_Surface(Macad::Occt::ShapeAnalysis_Surface^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_Surface(*(::ShapeAnalysis_Surface*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_Surface::Init(Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::ShapeAnalysis_Surface*)_NativeInstance)->Init(h_S);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::ShapeAnalysis_Surface::Init(Macad::Occt::ShapeAnalysis_Surface^ other)
{
	Handle(::ShapeAnalysis_Surface) h_other = other->NativeInstance;
	((::ShapeAnalysis_Surface*)_NativeInstance)->Init(h_other);
	other->NativeInstance = h_other.get();
}

void Macad::Occt::ShapeAnalysis_Surface::SetDomain(double U1, double U2, double V1, double V2)
{
	((::ShapeAnalysis_Surface*)_NativeInstance)->SetDomain(U1, U2, V1, V2);
}

Macad::Occt::Geom_Surface^ Macad::Occt::ShapeAnalysis_Surface::Surface()
{
	Handle(::Geom_Surface) _result;
	_result = ((::ShapeAnalysis_Surface*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::GeomAdaptor_HSurface^ Macad::Occt::ShapeAnalysis_Surface::Adaptor3d()
{
	Handle(::GeomAdaptor_HSurface) _result;
	_result = ((::ShapeAnalysis_Surface*)_NativeInstance)->Adaptor3d();
	 return _result.IsNull() ? nullptr : Macad::Occt::GeomAdaptor_HSurface::CreateDowncasted( _result.get());
}

Macad::Occt::GeomAdaptor_HSurface^ Macad::Occt::ShapeAnalysis_Surface::TrueAdaptor3d()
{
	Handle(::GeomAdaptor_HSurface) _result;
	_result = ((::ShapeAnalysis_Surface*)_NativeInstance)->TrueAdaptor3d();
	 return _result.IsNull() ? nullptr : Macad::Occt::GeomAdaptor_HSurface::CreateDowncasted( _result.get());
}

double Macad::Occt::ShapeAnalysis_Surface::Gap()
{
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->Gap();
}

Macad::Occt::Pnt Macad::Occt::ShapeAnalysis_Surface::Value(double u, double v)
{
	return Macad::Occt::Pnt(((::ShapeAnalysis_Surface*)_NativeInstance)->Value(u, v));
}

Macad::Occt::Pnt Macad::Occt::ShapeAnalysis_Surface::Value(Macad::Occt::Pnt2d p2d)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_p2d = &p2d;
	return Macad::Occt::Pnt(((::ShapeAnalysis_Surface*)_NativeInstance)->Value(*(gp_Pnt2d*)pp_p2d));
}

bool Macad::Occt::ShapeAnalysis_Surface::HasSingularities(double preci)
{
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->HasSingularities(preci);
}

int Macad::Occt::ShapeAnalysis_Surface::NbSingularities(double preci)
{
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->NbSingularities(preci);
}

bool Macad::Occt::ShapeAnalysis_Surface::Singularity(int num, double% preci, Macad::Occt::Pnt% P3d, Macad::Occt::Pnt2d% firstP2d, Macad::Occt::Pnt2d% lastP2d, double% firstpar, double% lastpar, bool% uisodeg)
{
	pin_ptr<double> pp_preci = &preci;
	pin_ptr<Macad::Occt::Pnt> pp_P3d = &P3d;
	pin_ptr<Macad::Occt::Pnt2d> pp_firstP2d = &firstP2d;
	pin_ptr<Macad::Occt::Pnt2d> pp_lastP2d = &lastP2d;
	pin_ptr<double> pp_firstpar = &firstpar;
	pin_ptr<double> pp_lastpar = &lastpar;
	pin_ptr<bool> pp_uisodeg = &uisodeg;
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->Singularity(num, *(Standard_Real*)pp_preci, *(gp_Pnt*)pp_P3d, *(gp_Pnt2d*)pp_firstP2d, *(gp_Pnt2d*)pp_lastP2d, *(Standard_Real*)pp_firstpar, *(Standard_Real*)pp_lastpar, *(Standard_Boolean*)pp_uisodeg);
}

bool Macad::Occt::ShapeAnalysis_Surface::IsDegenerated(Macad::Occt::Pnt P3d, double preci)
{
	pin_ptr<Macad::Occt::Pnt> pp_P3d = &P3d;
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->IsDegenerated(*(gp_Pnt*)pp_P3d, preci);
}

bool Macad::Occt::ShapeAnalysis_Surface::DegeneratedValues(Macad::Occt::Pnt P3d, double preci, Macad::Occt::Pnt2d% firstP2d, Macad::Occt::Pnt2d% lastP2d, double% firstpar, double% lastpar, bool forward)
{
	pin_ptr<Macad::Occt::Pnt> pp_P3d = &P3d;
	pin_ptr<Macad::Occt::Pnt2d> pp_firstP2d = &firstP2d;
	pin_ptr<Macad::Occt::Pnt2d> pp_lastP2d = &lastP2d;
	pin_ptr<double> pp_firstpar = &firstpar;
	pin_ptr<double> pp_lastpar = &lastpar;
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->DegeneratedValues(*(gp_Pnt*)pp_P3d, preci, *(gp_Pnt2d*)pp_firstP2d, *(gp_Pnt2d*)pp_lastP2d, *(Standard_Real*)pp_firstpar, *(Standard_Real*)pp_lastpar, forward);
}

bool Macad::Occt::ShapeAnalysis_Surface::DegeneratedValues(Macad::Occt::Pnt P3d, double preci, Macad::Occt::Pnt2d% firstP2d, Macad::Occt::Pnt2d% lastP2d, double% firstpar, double% lastpar)
{
	pin_ptr<Macad::Occt::Pnt> pp_P3d = &P3d;
	pin_ptr<Macad::Occt::Pnt2d> pp_firstP2d = &firstP2d;
	pin_ptr<Macad::Occt::Pnt2d> pp_lastP2d = &lastP2d;
	pin_ptr<double> pp_firstpar = &firstpar;
	pin_ptr<double> pp_lastpar = &lastpar;
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->DegeneratedValues(*(gp_Pnt*)pp_P3d, preci, *(gp_Pnt2d*)pp_firstP2d, *(gp_Pnt2d*)pp_lastP2d, *(Standard_Real*)pp_firstpar, *(Standard_Real*)pp_lastpar, true);
}

bool Macad::Occt::ShapeAnalysis_Surface::ProjectDegenerated(Macad::Occt::Pnt P3d, double preci, Macad::Occt::Pnt2d neighbour, Macad::Occt::Pnt2d% result)
{
	pin_ptr<Macad::Occt::Pnt> pp_P3d = &P3d;
	pin_ptr<Macad::Occt::Pnt2d> pp_neighbour = &neighbour;
	pin_ptr<Macad::Occt::Pnt2d> pp_result = &result;
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->ProjectDegenerated(*(gp_Pnt*)pp_P3d, preci, *(gp_Pnt2d*)pp_neighbour, *(gp_Pnt2d*)pp_result);
}

bool Macad::Occt::ShapeAnalysis_Surface::ProjectDegenerated(int nbrPnt, Macad::Occt::TColgp_SequenceOfPnt^ points, Macad::Occt::TColgp_SequenceOfPnt2d^ pnt2d, double preci, bool direct)
{
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->ProjectDegenerated(nbrPnt, *(::TColgp_SequenceOfPnt*)points->NativeInstance, *(::TColgp_SequenceOfPnt2d*)pnt2d->NativeInstance, preci, direct);
}

bool Macad::Occt::ShapeAnalysis_Surface::IsDegenerated(Macad::Occt::Pnt2d p2d1, Macad::Occt::Pnt2d p2d2, double tol, double ratio)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_p2d1 = &p2d1;
	pin_ptr<Macad::Occt::Pnt2d> pp_p2d2 = &p2d2;
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->IsDegenerated(*(gp_Pnt2d*)pp_p2d1, *(gp_Pnt2d*)pp_p2d2, tol, ratio);
}

void Macad::Occt::ShapeAnalysis_Surface::Bounds(double% ufirst, double% ulast, double% vfirst, double% vlast)
{
	pin_ptr<double> pp_ufirst = &ufirst;
	pin_ptr<double> pp_ulast = &ulast;
	pin_ptr<double> pp_vfirst = &vfirst;
	pin_ptr<double> pp_vlast = &vlast;
	((::ShapeAnalysis_Surface*)_NativeInstance)->Bounds(*(Standard_Real*)pp_ufirst, *(Standard_Real*)pp_ulast, *(Standard_Real*)pp_vfirst, *(Standard_Real*)pp_vlast);
}

void Macad::Occt::ShapeAnalysis_Surface::ComputeBoundIsos()
{
	((::ShapeAnalysis_Surface*)_NativeInstance)->ComputeBoundIsos();
}

Macad::Occt::Geom_Curve^ Macad::Occt::ShapeAnalysis_Surface::UIso(double U)
{
	Handle(::Geom_Curve) _result;
	_result = ((::ShapeAnalysis_Surface*)_NativeInstance)->UIso(U);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::ShapeAnalysis_Surface::VIso(double V)
{
	Handle(::Geom_Curve) _result;
	_result = ((::ShapeAnalysis_Surface*)_NativeInstance)->VIso(V);
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

bool Macad::Occt::ShapeAnalysis_Surface::IsUClosed(double preci)
{
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->IsUClosed(preci);
}

bool Macad::Occt::ShapeAnalysis_Surface::IsUClosed()
{
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->IsUClosed(-1);
}

bool Macad::Occt::ShapeAnalysis_Surface::IsVClosed(double preci)
{
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->IsVClosed(preci);
}

bool Macad::Occt::ShapeAnalysis_Surface::IsVClosed()
{
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->IsVClosed(-1);
}

Macad::Occt::Pnt2d Macad::Occt::ShapeAnalysis_Surface::ValueOfUV(Macad::Occt::Pnt P3D, double preci)
{
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	return Macad::Occt::Pnt2d(((::ShapeAnalysis_Surface*)_NativeInstance)->ValueOfUV(*(gp_Pnt*)pp_P3D, preci));
}

Macad::Occt::Pnt2d Macad::Occt::ShapeAnalysis_Surface::NextValueOfUV(Macad::Occt::Pnt2d p2dPrev, Macad::Occt::Pnt P3D, double preci, double maxpreci)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_p2dPrev = &p2dPrev;
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	return Macad::Occt::Pnt2d(((::ShapeAnalysis_Surface*)_NativeInstance)->NextValueOfUV(*(gp_Pnt2d*)pp_p2dPrev, *(gp_Pnt*)pp_P3D, preci, maxpreci));
}

Macad::Occt::Pnt2d Macad::Occt::ShapeAnalysis_Surface::NextValueOfUV(Macad::Occt::Pnt2d p2dPrev, Macad::Occt::Pnt P3D, double preci)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_p2dPrev = &p2dPrev;
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	return Macad::Occt::Pnt2d(((::ShapeAnalysis_Surface*)_NativeInstance)->NextValueOfUV(*(gp_Pnt2d*)pp_p2dPrev, *(gp_Pnt*)pp_P3D, preci, -1.));
}

double Macad::Occt::ShapeAnalysis_Surface::UVFromIso(Macad::Occt::Pnt P3D, double preci, double% U, double% V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->UVFromIso(*(gp_Pnt*)pp_P3D, preci, *(Standard_Real*)pp_U, *(Standard_Real*)pp_V);
}

double Macad::Occt::ShapeAnalysis_Surface::UCloseVal()
{
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->UCloseVal();
}

double Macad::Occt::ShapeAnalysis_Surface::VCloseVal()
{
	return ((::ShapeAnalysis_Surface*)_NativeInstance)->VCloseVal();
}

Macad::Occt::Bnd_Box^ Macad::Occt::ShapeAnalysis_Surface::GetBoxUF()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::ShapeAnalysis_Surface*)_NativeInstance)->GetBoxUF();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::ShapeAnalysis_Surface::GetBoxUL()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::ShapeAnalysis_Surface*)_NativeInstance)->GetBoxUL();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::ShapeAnalysis_Surface::GetBoxVF()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::ShapeAnalysis_Surface*)_NativeInstance)->GetBoxVF();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::ShapeAnalysis_Surface::GetBoxVL()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::ShapeAnalysis_Surface*)_NativeInstance)->GetBoxVL();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}


Macad::Occt::ShapeAnalysis_Surface^ Macad::Occt::ShapeAnalysis_Surface::CreateDowncasted(::ShapeAnalysis_Surface* instance)
{
	return gcnew Macad::Occt::ShapeAnalysis_Surface( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Edge
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_Edge::ShapeAnalysis_Edge()
	: BaseClass<::ShapeAnalysis_Edge>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_Edge();
}

Macad::Occt::ShapeAnalysis_Edge::ShapeAnalysis_Edge(Macad::Occt::ShapeAnalysis_Edge^ parameter1)
	: BaseClass<::ShapeAnalysis_Edge>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_Edge(*(::ShapeAnalysis_Edge*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_Edge::HasCurve3d(Macad::Occt::TopoDS_Edge^ edge)
{
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->HasCurve3d(*(::TopoDS_Edge*)edge->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_Edge::Curve3d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Curve^ C3d, double% cf, double% cl, bool orient)
{
	Handle(::Geom_Curve) h_C3d = C3d->NativeInstance;
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->Curve3d(*(::TopoDS_Edge*)edge->NativeInstance, h_C3d, *(Standard_Real*)pp_cf, *(Standard_Real*)pp_cl, orient);
	C3d->NativeInstance = h_C3d.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::Curve3d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Curve^ C3d, double% cf, double% cl)
{
	Handle(::Geom_Curve) h_C3d = C3d->NativeInstance;
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->Curve3d(*(::TopoDS_Edge*)edge->NativeInstance, h_C3d, *(Standard_Real*)pp_cf, *(Standard_Real*)pp_cl, true);
	C3d->NativeInstance = h_C3d.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::IsClosed3d(Macad::Occt::TopoDS_Edge^ edge)
{
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->IsClosed3d(*(::TopoDS_Edge*)edge->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_Edge::HasPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face)
{
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->HasPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_Edge::HasPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->HasPCurve(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance);
	surface->NativeInstance = h_surface.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl, bool orient)
{
	Handle(::Geom2d_Curve) h_C2d = C2d->NativeInstance;
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->PCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, h_C2d, *(Standard_Real*)pp_cf, *(Standard_Real*)pp_cl, orient);
	C2d->NativeInstance = h_C2d.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl)
{
	Handle(::Geom2d_Curve) h_C2d = C2d->NativeInstance;
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->PCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, h_C2d, *(Standard_Real*)pp_cf, *(Standard_Real*)pp_cl, true);
	C2d->NativeInstance = h_C2d.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl, bool orient)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	Handle(::Geom2d_Curve) h_C2d = C2d->NativeInstance;
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->PCurve(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance, h_C2d, *(Standard_Real*)pp_cf, *(Standard_Real*)pp_cl, orient);
	surface->NativeInstance = h_surface.get();
	C2d->NativeInstance = h_C2d.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	Handle(::Geom2d_Curve) h_C2d = C2d->NativeInstance;
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->PCurve(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance, h_C2d, *(Standard_Real*)pp_cf, *(Standard_Real*)pp_cl, true);
	surface->NativeInstance = h_surface.get();
	C2d->NativeInstance = h_C2d.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::BoundUV(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, Macad::Occt::Pnt2d% first, Macad::Occt::Pnt2d% last)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_first = &first;
	pin_ptr<Macad::Occt::Pnt2d> pp_last = &last;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->BoundUV(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, *(gp_Pnt2d*)pp_first, *(gp_Pnt2d*)pp_last);
}

bool Macad::Occt::ShapeAnalysis_Edge::BoundUV(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, Macad::Occt::Pnt2d% first, Macad::Occt::Pnt2d% last)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_first = &first;
	pin_ptr<Macad::Occt::Pnt2d> pp_last = &last;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->BoundUV(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance, *(gp_Pnt2d*)pp_first, *(gp_Pnt2d*)pp_last);
	surface->NativeInstance = h_surface.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::IsSeam(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face)
{
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->IsSeam(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_Edge::IsSeam(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->IsSeam(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance);
	surface->NativeInstance = h_surface.get();
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeAnalysis_Edge::FirstVertex(Macad::Occt::TopoDS_Edge^ edge)
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ((::ShapeAnalysis_Edge*)_NativeInstance)->FirstVertex(*(::TopoDS_Edge*)edge->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeAnalysis_Edge::LastVertex(Macad::Occt::TopoDS_Edge^ edge)
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ((::ShapeAnalysis_Edge*)_NativeInstance)->LastVertex(*(::TopoDS_Edge*)edge->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

bool Macad::Occt::ShapeAnalysis_Edge::GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang, double dparam)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_pos = &pos;
	pin_ptr<Macad::Occt::Vec2d> pp_tang = &tang;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->GetEndTangent2d(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, atEnd, *(gp_Pnt2d*)pp_pos, *(gp_Vec2d*)pp_tang, dparam);
}

bool Macad::Occt::ShapeAnalysis_Edge::GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_pos = &pos;
	pin_ptr<Macad::Occt::Vec2d> pp_tang = &tang;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->GetEndTangent2d(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, atEnd, *(gp_Pnt2d*)pp_pos, *(gp_Vec2d*)pp_tang, 0.);
}

bool Macad::Occt::ShapeAnalysis_Edge::GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang, double dparam)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_pos = &pos;
	pin_ptr<Macad::Occt::Vec2d> pp_tang = &tang;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->GetEndTangent2d(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance, atEnd, *(gp_Pnt2d*)pp_pos, *(gp_Vec2d*)pp_tang, dparam);
	surface->NativeInstance = h_surface.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_pos = &pos;
	pin_ptr<Macad::Occt::Vec2d> pp_tang = &tang;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->GetEndTangent2d(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance, atEnd, *(gp_Pnt2d*)pp_pos, *(gp_Vec2d*)pp_tang, 0.);
	surface->NativeInstance = h_surface.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithCurve3d(Macad::Occt::TopoDS_Edge^ edge, double preci, int vtx)
{
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithCurve3d(*(::TopoDS_Edge*)edge->NativeInstance, preci, vtx);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithCurve3d(Macad::Occt::TopoDS_Edge^ edge, double preci)
{
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithCurve3d(*(::TopoDS_Edge*)edge->NativeInstance, preci, 0);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithCurve3d(Macad::Occt::TopoDS_Edge^ edge)
{
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithCurve3d(*(::TopoDS_Edge*)edge->NativeInstance, -1, 0);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double preci, int vtx)
{
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, preci, vtx);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double preci)
{
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, preci, 0);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face)
{
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, -1, 0);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, double preci, int vtx)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance, preci, vtx);
	surface->NativeInstance = h_surface.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, double preci)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance, preci, 0);
	surface->NativeInstance = h_surface.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance, -1, 0);
	surface->NativeInstance = h_surface.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVertexTolerance(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double% toler1, double% toler2)
{
	pin_ptr<double> pp_toler1 = &toler1;
	pin_ptr<double> pp_toler2 = &toler2;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVertexTolerance(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, *(Standard_Real*)pp_toler1, *(Standard_Real*)pp_toler2);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVertexTolerance(Macad::Occt::TopoDS_Edge^ edge, double% toler1, double% toler2)
{
	pin_ptr<double> pp_toler1 = &toler1;
	pin_ptr<double> pp_toler2 = &toler2;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVertexTolerance(*(::TopoDS_Edge*)edge->NativeInstance, *(Standard_Real*)pp_toler1, *(Standard_Real*)pp_toler2);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckCurve3dWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face)
{
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckCurve3dWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckCurve3dWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckCurve3dWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance);
	surface->NativeInstance = h_surface.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckSameParameter(Macad::Occt::TopoDS_Edge^ edge, double% maxdev, int NbControl)
{
	pin_ptr<double> pp_maxdev = &maxdev;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckSameParameter(*(::TopoDS_Edge*)edge->NativeInstance, *(Standard_Real*)pp_maxdev, NbControl);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckSameParameter(Macad::Occt::TopoDS_Edge^ edge, double% maxdev)
{
	pin_ptr<double> pp_maxdev = &maxdev;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckSameParameter(*(::TopoDS_Edge*)edge->NativeInstance, *(Standard_Real*)pp_maxdev, 23);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckSameParameter(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace, double% theMaxdev, int theNbControl)
{
	pin_ptr<double> pp_theMaxdev = &theMaxdev;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckSameParameter(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance, *(Standard_Real*)pp_theMaxdev, theNbControl);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckSameParameter(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace, double% theMaxdev)
{
	pin_ptr<double> pp_theMaxdev = &theMaxdev;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckSameParameter(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance, *(Standard_Real*)pp_theMaxdev, 23);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckPCurveRange(double theFirst, double theLast, Macad::Occt::Geom2d_Curve^ thePC)
{
	Handle(::Geom2d_Curve) h_thePC = thePC->NativeInstance;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckPCurveRange(theFirst, theLast, h_thePC);
	thePC->NativeInstance = h_thePC.get();
}

bool Macad::Occt::ShapeAnalysis_Edge::ComputeDeviation(Macad::Occt::Adaptor3d_Curve^ CRef, Macad::Occt::Adaptor3d_Curve^ Other, bool SameParameter, double% dev, int NCONTROL)
{
	pin_ptr<double> pp_dev = &dev;
	return ::ShapeAnalysis_Edge::ComputeDeviation(*(::Adaptor3d_Curve*)CRef->NativeInstance, *(::Adaptor3d_Curve*)Other->NativeInstance, SameParameter, *(Standard_Real*)pp_dev, NCONTROL);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckOverlapping(Macad::Occt::TopoDS_Edge^ theEdge1, Macad::Occt::TopoDS_Edge^ theEdge2, double% theTolOverlap, double theDomainDist)
{
	pin_ptr<double> pp_theTolOverlap = &theTolOverlap;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckOverlapping(*(::TopoDS_Edge*)theEdge1->NativeInstance, *(::TopoDS_Edge*)theEdge2->NativeInstance, *(Standard_Real*)pp_theTolOverlap, theDomainDist);
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckOverlapping(Macad::Occt::TopoDS_Edge^ theEdge1, Macad::Occt::TopoDS_Edge^ theEdge2, double% theTolOverlap)
{
	pin_ptr<double> pp_theTolOverlap = &theTolOverlap;
	return ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckOverlapping(*(::TopoDS_Edge*)theEdge1->NativeInstance, *(::TopoDS_Edge*)theEdge2->NativeInstance, *(Standard_Real*)pp_theTolOverlap, 0.);
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Wire
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_Wire::ShapeAnalysis_Wire()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_Wire();
}

Macad::Occt::ShapeAnalysis_Wire::ShapeAnalysis_Wire(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double precision)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_Wire(*(::TopoDS_Wire*)wire->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, precision);
}

Macad::Occt::ShapeAnalysis_Wire::ShapeAnalysis_Wire(Macad::Occt::ShapeExtend_WireData^ sbwd, Macad::Occt::TopoDS_Face^ face, double precision)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::ShapeExtend_WireData) h_sbwd = sbwd->NativeInstance;
	NativeInstance = new ::ShapeAnalysis_Wire(h_sbwd, *(::TopoDS_Face*)face->NativeInstance, precision);
	sbwd->NativeInstance = h_sbwd.get();
}

Macad::Occt::ShapeAnalysis_Wire::ShapeAnalysis_Wire(Macad::Occt::ShapeAnalysis_Wire^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_Wire(*(::ShapeAnalysis_Wire*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_Wire::Init(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double precision)
{
	((::ShapeAnalysis_Wire*)_NativeInstance)->Init(*(::TopoDS_Wire*)wire->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, precision);
}

void Macad::Occt::ShapeAnalysis_Wire::Init(Macad::Occt::ShapeExtend_WireData^ sbwd, Macad::Occt::TopoDS_Face^ face, double precision)
{
	Handle(::ShapeExtend_WireData) h_sbwd = sbwd->NativeInstance;
	((::ShapeAnalysis_Wire*)_NativeInstance)->Init(h_sbwd, *(::TopoDS_Face*)face->NativeInstance, precision);
	sbwd->NativeInstance = h_sbwd.get();
}

void Macad::Occt::ShapeAnalysis_Wire::Load(Macad::Occt::TopoDS_Wire^ wire)
{
	((::ShapeAnalysis_Wire*)_NativeInstance)->Load(*(::TopoDS_Wire*)wire->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_Wire::Load(Macad::Occt::ShapeExtend_WireData^ sbwd)
{
	Handle(::ShapeExtend_WireData) h_sbwd = sbwd->NativeInstance;
	((::ShapeAnalysis_Wire*)_NativeInstance)->Load(h_sbwd);
	sbwd->NativeInstance = h_sbwd.get();
}

void Macad::Occt::ShapeAnalysis_Wire::SetFace(Macad::Occt::TopoDS_Face^ face)
{
	((::ShapeAnalysis_Wire*)_NativeInstance)->SetFace(*(::TopoDS_Face*)face->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_Wire::SetSurface(Macad::Occt::Geom_Surface^ surface)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	((::ShapeAnalysis_Wire*)_NativeInstance)->SetSurface(h_surface);
	surface->NativeInstance = h_surface.get();
}

void Macad::Occt::ShapeAnalysis_Wire::SetSurface(Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	((::ShapeAnalysis_Wire*)_NativeInstance)->SetSurface(h_surface, *(::TopLoc_Location*)location->NativeInstance);
	surface->NativeInstance = h_surface.get();
}

void Macad::Occt::ShapeAnalysis_Wire::SetPrecision(double precision)
{
	((::ShapeAnalysis_Wire*)_NativeInstance)->SetPrecision(precision);
}

void Macad::Occt::ShapeAnalysis_Wire::ClearStatuses()
{
	((::ShapeAnalysis_Wire*)_NativeInstance)->ClearStatuses();
}

bool Macad::Occt::ShapeAnalysis_Wire::IsLoaded()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->IsLoaded();
}

bool Macad::Occt::ShapeAnalysis_Wire::IsReady()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->IsReady();
}

double Macad::Occt::ShapeAnalysis_Wire::Precision()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->Precision();
}

Macad::Occt::ShapeExtend_WireData^ Macad::Occt::ShapeAnalysis_Wire::WireData()
{
	Handle(::ShapeExtend_WireData) _result;
	_result = ((::ShapeAnalysis_Wire*)_NativeInstance)->WireData();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeExtend_WireData::CreateDowncasted( _result.get());
}

int Macad::Occt::ShapeAnalysis_Wire::NbEdges()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->NbEdges();
}

Macad::Occt::TopoDS_Face^ Macad::Occt::ShapeAnalysis_Wire::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::ShapeAnalysis_Wire*)_NativeInstance)->Face();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::ShapeAnalysis_Surface^ Macad::Occt::ShapeAnalysis_Wire::Surface()
{
	Handle(::ShapeAnalysis_Surface) _result;
	_result = ((::ShapeAnalysis_Wire*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_Surface::CreateDowncasted( _result.get());
}

bool Macad::Occt::ShapeAnalysis_Wire::Perform()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->Perform();
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOrder(bool isClosed, bool mode3d)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOrder(isClosed, mode3d);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOrder(bool isClosed)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOrder(isClosed, true);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOrder()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOrder(true, true);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckConnected(double prec)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckConnected(prec);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckConnected()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckConnected(0.);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSmall(double precsmall)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSmall(precsmall);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSmall()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSmall(0.);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckEdgeCurves()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckEdgeCurves();
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckDegenerated()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckDegenerated();
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckClosed(double prec)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckClosed(prec);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckClosed()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckClosed(0.);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSelfIntersection()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSelfIntersection();
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckLacking()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckLacking();
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckGaps3d()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckGaps3d();
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckGaps2d()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckGaps2d();
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckCurveGaps()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckCurveGaps();
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo, bool isClosed, bool mode3d)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOrder(*(::ShapeAnalysis_WireOrder*)sawo->NativeInstance, isClosed, mode3d);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo, bool isClosed)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOrder(*(::ShapeAnalysis_WireOrder*)sawo->NativeInstance, isClosed, true);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOrder(*(::ShapeAnalysis_WireOrder*)sawo->NativeInstance, true, true);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckConnected(int num, double prec)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckConnected(num, prec);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckConnected(int num)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckConnected(num, 0.);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSmall(int num, double precsmall)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSmall(num, precsmall);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSmall(int num)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSmall(num, 0.);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSeam(int num, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double% cf, double% cl)
{
	Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
	Handle(::Geom2d_Curve) h_C2 = C2->NativeInstance;
	pin_ptr<double> pp_cf = &cf;
	pin_ptr<double> pp_cl = &cl;
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSeam(num, h_C1, h_C2, *(Standard_Real*)pp_cf, *(Standard_Real*)pp_cl);
	C1->NativeInstance = h_C1.get();
	C2->NativeInstance = h_C2.get();
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSeam(int num)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSeam(num);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckDegenerated(int num, Macad::Occt::Pnt2d% dgnr1, Macad::Occt::Pnt2d% dgnr2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_dgnr1 = &dgnr1;
	pin_ptr<Macad::Occt::Pnt2d> pp_dgnr2 = &dgnr2;
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckDegenerated(num, *(gp_Pnt2d*)pp_dgnr1, *(gp_Pnt2d*)pp_dgnr2);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckDegenerated(int num)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckDegenerated(num);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckGap3d(int num)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckGap3d(num);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckGap3d()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckGap3d(0);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckGap2d(int num)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckGap2d(num);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckGap2d()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckGap2d(0);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckCurveGap(int num)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckCurveGap(num);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckCurveGap()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckCurveGap(0);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSelfIntersectingEdge(int num)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSelfIntersectingEdge(num);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckIntersectingEdges(int num)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckIntersectingEdges(num);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckIntersectingEdges(int num1, int num2)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckIntersectingEdges(num1, num2);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckLacking(int num, double Tolerance, Macad::Occt::Pnt2d% p2d1, Macad::Occt::Pnt2d% p2d2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_p2d1 = &p2d1;
	pin_ptr<Macad::Occt::Pnt2d> pp_p2d2 = &p2d2;
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckLacking(num, Tolerance, *(gp_Pnt2d*)pp_p2d1, *(gp_Pnt2d*)pp_p2d2);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckLacking(int num, double Tolerance)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckLacking(num, Tolerance);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckLacking(int num)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckLacking(num, 0.);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOuterBound(bool APIMake)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOuterBound(APIMake);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOuterBound()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOuterBound(true);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckNotchedEdges(int num, int% shortNum, double% param, double Tolerance)
{
	pin_ptr<int> pp_shortNum = &shortNum;
	pin_ptr<double> pp_param = &param;
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckNotchedEdges(num, *(Standard_Integer*)pp_shortNum, *(Standard_Real*)pp_param, Tolerance);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckNotchedEdges(int num, int% shortNum, double% param)
{
	pin_ptr<int> pp_shortNum = &shortNum;
	pin_ptr<double> pp_param = &param;
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckNotchedEdges(num, *(Standard_Integer*)pp_shortNum, *(Standard_Real*)pp_param, 0.);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSmallArea(Macad::Occt::TopoDS_Wire^ theWire)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSmallArea(*(::TopoDS_Wire*)theWire->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckShapeConnect(Macad::Occt::TopoDS_Shape^ shape, double prec)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckShapeConnect(*(::TopoDS_Shape*)shape->NativeInstance, prec);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckShapeConnect(Macad::Occt::TopoDS_Shape^ shape)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckShapeConnect(*(::TopoDS_Shape*)shape->NativeInstance, 0.);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckShapeConnect(double% tailhead, double% tailtail, double% headtail, double% headhead, Macad::Occt::TopoDS_Shape^ shape, double prec)
{
	pin_ptr<double> pp_tailhead = &tailhead;
	pin_ptr<double> pp_tailtail = &tailtail;
	pin_ptr<double> pp_headtail = &headtail;
	pin_ptr<double> pp_headhead = &headhead;
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckShapeConnect(*(Standard_Real*)pp_tailhead, *(Standard_Real*)pp_tailtail, *(Standard_Real*)pp_headtail, *(Standard_Real*)pp_headhead, *(::TopoDS_Shape*)shape->NativeInstance, prec);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckShapeConnect(double% tailhead, double% tailtail, double% headtail, double% headhead, Macad::Occt::TopoDS_Shape^ shape)
{
	pin_ptr<double> pp_tailhead = &tailhead;
	pin_ptr<double> pp_tailtail = &tailtail;
	pin_ptr<double> pp_headtail = &headtail;
	pin_ptr<double> pp_headhead = &headhead;
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckShapeConnect(*(Standard_Real*)pp_tailhead, *(Standard_Real*)pp_tailtail, *(Standard_Real*)pp_headtail, *(Standard_Real*)pp_headhead, *(::TopoDS_Shape*)shape->NativeInstance, 0.);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckLoop(Macad::Occt::TopTools_IndexedMapOfShape^ aMapLoopVertices, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ aMapVertexEdges, Macad::Occt::TopTools_MapOfShape^ aMapSmallEdges, Macad::Occt::TopTools_MapOfShape^ aMapSeemEdges)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckLoop(*(::TopTools_IndexedMapOfShape*)aMapLoopVertices->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)aMapVertexEdges->NativeInstance, *(::TopTools_MapOfShape*)aMapSmallEdges->NativeInstance, *(::TopTools_MapOfShape*)aMapSeemEdges->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckTail(Macad::Occt::TopoDS_Edge^ theEdge1, Macad::Occt::TopoDS_Edge^ theEdge2, double theMaxSine, double theMaxWidth, double theMaxTolerance, Macad::Occt::TopoDS_Edge^ theEdge11, Macad::Occt::TopoDS_Edge^ theEdge12, Macad::Occt::TopoDS_Edge^ theEdge21, Macad::Occt::TopoDS_Edge^ theEdge22)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckTail(*(::TopoDS_Edge*)theEdge1->NativeInstance, *(::TopoDS_Edge*)theEdge2->NativeInstance, theMaxSine, theMaxWidth, theMaxTolerance, *(::TopoDS_Edge*)theEdge11->NativeInstance, *(::TopoDS_Edge*)theEdge12->NativeInstance, *(::TopoDS_Edge*)theEdge21->NativeInstance, *(::TopoDS_Edge*)theEdge22->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_Wire::StatusOrder(Macad::Occt::ShapeExtend_Status Status)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->StatusOrder((::ShapeExtend_Status)Status);
}

bool Macad::Occt::ShapeAnalysis_Wire::StatusConnected(Macad::Occt::ShapeExtend_Status Status)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->StatusConnected((::ShapeExtend_Status)Status);
}

bool Macad::Occt::ShapeAnalysis_Wire::StatusEdgeCurves(Macad::Occt::ShapeExtend_Status Status)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->StatusEdgeCurves((::ShapeExtend_Status)Status);
}

bool Macad::Occt::ShapeAnalysis_Wire::StatusDegenerated(Macad::Occt::ShapeExtend_Status Status)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->StatusDegenerated((::ShapeExtend_Status)Status);
}

bool Macad::Occt::ShapeAnalysis_Wire::StatusClosed(Macad::Occt::ShapeExtend_Status Status)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->StatusClosed((::ShapeExtend_Status)Status);
}

bool Macad::Occt::ShapeAnalysis_Wire::StatusSmall(Macad::Occt::ShapeExtend_Status Status)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->StatusSmall((::ShapeExtend_Status)Status);
}

bool Macad::Occt::ShapeAnalysis_Wire::StatusSelfIntersection(Macad::Occt::ShapeExtend_Status Status)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->StatusSelfIntersection((::ShapeExtend_Status)Status);
}

bool Macad::Occt::ShapeAnalysis_Wire::StatusLacking(Macad::Occt::ShapeExtend_Status Status)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->StatusLacking((::ShapeExtend_Status)Status);
}

bool Macad::Occt::ShapeAnalysis_Wire::StatusGaps3d(Macad::Occt::ShapeExtend_Status Status)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->StatusGaps3d((::ShapeExtend_Status)Status);
}

bool Macad::Occt::ShapeAnalysis_Wire::StatusGaps2d(Macad::Occt::ShapeExtend_Status Status)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->StatusGaps2d((::ShapeExtend_Status)Status);
}

bool Macad::Occt::ShapeAnalysis_Wire::StatusCurveGaps(Macad::Occt::ShapeExtend_Status Status)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->StatusCurveGaps((::ShapeExtend_Status)Status);
}

bool Macad::Occt::ShapeAnalysis_Wire::StatusLoop(Macad::Occt::ShapeExtend_Status Status)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->StatusLoop((::ShapeExtend_Status)Status);
}

bool Macad::Occt::ShapeAnalysis_Wire::LastCheckStatus(Macad::Occt::ShapeExtend_Status Status)
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->LastCheckStatus((::ShapeExtend_Status)Status);
}

double Macad::Occt::ShapeAnalysis_Wire::MinDistance3d()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->MinDistance3d();
}

double Macad::Occt::ShapeAnalysis_Wire::MinDistance2d()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->MinDistance2d();
}

double Macad::Occt::ShapeAnalysis_Wire::MaxDistance3d()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->MaxDistance3d();
}

double Macad::Occt::ShapeAnalysis_Wire::MaxDistance2d()
{
	return ((::ShapeAnalysis_Wire*)_NativeInstance)->MaxDistance2d();
}


Macad::Occt::ShapeAnalysis_Wire^ Macad::Occt::ShapeAnalysis_Wire::CreateDowncasted(::ShapeAnalysis_Wire* instance)
{
	return gcnew Macad::Occt::ShapeAnalysis_Wire( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_WireOrder
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_WireOrder::ShapeAnalysis_WireOrder()
	: BaseClass<::ShapeAnalysis_WireOrder>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_WireOrder();
}

Macad::Occt::ShapeAnalysis_WireOrder::ShapeAnalysis_WireOrder(bool mode3d, double tol)
	: BaseClass<::ShapeAnalysis_WireOrder>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_WireOrder(mode3d, tol);
}

Macad::Occt::ShapeAnalysis_WireOrder::ShapeAnalysis_WireOrder(Macad::Occt::ShapeAnalysis_WireOrder^ parameter1)
	: BaseClass<::ShapeAnalysis_WireOrder>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_WireOrder(*(::ShapeAnalysis_WireOrder*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_WireOrder::SetMode(bool mode3d, double tol)
{
	((::ShapeAnalysis_WireOrder*)_NativeInstance)->SetMode(mode3d, tol);
}

double Macad::Occt::ShapeAnalysis_WireOrder::Tolerance()
{
	return ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Tolerance();
}

void Macad::Occt::ShapeAnalysis_WireOrder::Clear()
{
	((::ShapeAnalysis_WireOrder*)_NativeInstance)->Clear();
}

void Macad::Occt::ShapeAnalysis_WireOrder::Add(Macad::Occt::XYZ start3d, Macad::Occt::XYZ end3d)
{
	pin_ptr<Macad::Occt::XYZ> pp_start3d = &start3d;
	pin_ptr<Macad::Occt::XYZ> pp_end3d = &end3d;
	((::ShapeAnalysis_WireOrder*)_NativeInstance)->Add(*(gp_XYZ*)pp_start3d, *(gp_XYZ*)pp_end3d);
}

void Macad::Occt::ShapeAnalysis_WireOrder::Add(Macad::Occt::XY start2d, Macad::Occt::XY end2d)
{
	pin_ptr<Macad::Occt::XY> pp_start2d = &start2d;
	pin_ptr<Macad::Occt::XY> pp_end2d = &end2d;
	((::ShapeAnalysis_WireOrder*)_NativeInstance)->Add(*(gp_XY*)pp_start2d, *(gp_XY*)pp_end2d);
}

int Macad::Occt::ShapeAnalysis_WireOrder::NbEdges()
{
	return ((::ShapeAnalysis_WireOrder*)_NativeInstance)->NbEdges();
}

bool Macad::Occt::ShapeAnalysis_WireOrder::KeepLoopsMode()
{
	return ((::ShapeAnalysis_WireOrder*)_NativeInstance)->KeepLoopsMode();
}

void Macad::Occt::ShapeAnalysis_WireOrder::Perform(bool closed)
{
	((::ShapeAnalysis_WireOrder*)_NativeInstance)->Perform(closed);
}

void Macad::Occt::ShapeAnalysis_WireOrder::Perform()
{
	((::ShapeAnalysis_WireOrder*)_NativeInstance)->Perform(true);
}

bool Macad::Occt::ShapeAnalysis_WireOrder::IsDone()
{
	return ((::ShapeAnalysis_WireOrder*)_NativeInstance)->IsDone();
}

int Macad::Occt::ShapeAnalysis_WireOrder::Status()
{
	return ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Status();
}

int Macad::Occt::ShapeAnalysis_WireOrder::Ordered(int n)
{
	return ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Ordered(n);
}

void Macad::Occt::ShapeAnalysis_WireOrder::XYZ(int num, Macad::Occt::XYZ% start3d, Macad::Occt::XYZ% end3d)
{
	pin_ptr<Macad::Occt::XYZ> pp_start3d = &start3d;
	pin_ptr<Macad::Occt::XYZ> pp_end3d = &end3d;
	((::ShapeAnalysis_WireOrder*)_NativeInstance)->XYZ(num, *(gp_XYZ*)pp_start3d, *(gp_XYZ*)pp_end3d);
}

void Macad::Occt::ShapeAnalysis_WireOrder::XY(int num, Macad::Occt::XY% start2d, Macad::Occt::XY% end2d)
{
	pin_ptr<Macad::Occt::XY> pp_start2d = &start2d;
	pin_ptr<Macad::Occt::XY> pp_end2d = &end2d;
	((::ShapeAnalysis_WireOrder*)_NativeInstance)->XY(num, *(gp_XY*)pp_start2d, *(gp_XY*)pp_end2d);
}

double Macad::Occt::ShapeAnalysis_WireOrder::Gap(int num)
{
	return ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Gap(num);
}

double Macad::Occt::ShapeAnalysis_WireOrder::Gap()
{
	return ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Gap(0);
}

void Macad::Occt::ShapeAnalysis_WireOrder::SetChains(double gap)
{
	((::ShapeAnalysis_WireOrder*)_NativeInstance)->SetChains(gap);
}

int Macad::Occt::ShapeAnalysis_WireOrder::NbChains()
{
	return ((::ShapeAnalysis_WireOrder*)_NativeInstance)->NbChains();
}

void Macad::Occt::ShapeAnalysis_WireOrder::Chain(int num, int% n1, int% n2)
{
	pin_ptr<int> pp_n1 = &n1;
	pin_ptr<int> pp_n2 = &n2;
	((::ShapeAnalysis_WireOrder*)_NativeInstance)->Chain(num, *(Standard_Integer*)pp_n1, *(Standard_Integer*)pp_n2);
}

void Macad::Occt::ShapeAnalysis_WireOrder::SetCouples(double gap)
{
	((::ShapeAnalysis_WireOrder*)_NativeInstance)->SetCouples(gap);
}

int Macad::Occt::ShapeAnalysis_WireOrder::NbCouples()
{
	return ((::ShapeAnalysis_WireOrder*)_NativeInstance)->NbCouples();
}

void Macad::Occt::ShapeAnalysis_WireOrder::Couple(int num, int% n1, int% n2)
{
	pin_ptr<int> pp_n1 = &n1;
	pin_ptr<int> pp_n2 = &n2;
	((::ShapeAnalysis_WireOrder*)_NativeInstance)->Couple(num, *(Standard_Integer*)pp_n1, *(Standard_Integer*)pp_n2);
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_WireVertex
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_WireVertex::ShapeAnalysis_WireVertex()
	: BaseClass<::ShapeAnalysis_WireVertex>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_WireVertex();
}

Macad::Occt::ShapeAnalysis_WireVertex::ShapeAnalysis_WireVertex(Macad::Occt::ShapeAnalysis_WireVertex^ parameter1)
	: BaseClass<::ShapeAnalysis_WireVertex>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_WireVertex(*(::ShapeAnalysis_WireVertex*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_WireVertex::Init(Macad::Occt::TopoDS_Wire^ wire, double preci)
{
	((::ShapeAnalysis_WireVertex*)_NativeInstance)->Init(*(::TopoDS_Wire*)wire->NativeInstance, preci);
}

void Macad::Occt::ShapeAnalysis_WireVertex::Init(Macad::Occt::ShapeExtend_WireData^ swbd, double preci)
{
	Handle(::ShapeExtend_WireData) h_swbd = swbd->NativeInstance;
	((::ShapeAnalysis_WireVertex*)_NativeInstance)->Init(h_swbd, preci);
	swbd->NativeInstance = h_swbd.get();
}

void Macad::Occt::ShapeAnalysis_WireVertex::Load(Macad::Occt::TopoDS_Wire^ wire)
{
	((::ShapeAnalysis_WireVertex*)_NativeInstance)->Load(*(::TopoDS_Wire*)wire->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_WireVertex::Load(Macad::Occt::ShapeExtend_WireData^ sbwd)
{
	Handle(::ShapeExtend_WireData) h_sbwd = sbwd->NativeInstance;
	((::ShapeAnalysis_WireVertex*)_NativeInstance)->Load(h_sbwd);
	sbwd->NativeInstance = h_sbwd.get();
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetPrecision(double preci)
{
	((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetPrecision(preci);
}

void Macad::Occt::ShapeAnalysis_WireVertex::Analyze()
{
	((::ShapeAnalysis_WireVertex*)_NativeInstance)->Analyze();
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetSameVertex(int num)
{
	((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetSameVertex(num);
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetSameCoords(int num)
{
	((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetSameCoords(num);
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetClose(int num)
{
	((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetClose(num);
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetEnd(int num, Macad::Occt::XYZ pos, double ufol)
{
	pin_ptr<Macad::Occt::XYZ> pp_pos = &pos;
	((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetEnd(num, *(gp_XYZ*)pp_pos, ufol);
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetStart(int num, Macad::Occt::XYZ pos, double upre)
{
	pin_ptr<Macad::Occt::XYZ> pp_pos = &pos;
	((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetStart(num, *(gp_XYZ*)pp_pos, upre);
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetInters(int num, Macad::Occt::XYZ pos, double upre, double ufol)
{
	pin_ptr<Macad::Occt::XYZ> pp_pos = &pos;
	((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetInters(num, *(gp_XYZ*)pp_pos, upre, ufol);
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetDisjoined(int num)
{
	((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetDisjoined(num);
}

bool Macad::Occt::ShapeAnalysis_WireVertex::IsDone()
{
	return ((::ShapeAnalysis_WireVertex*)_NativeInstance)->IsDone();
}

double Macad::Occt::ShapeAnalysis_WireVertex::Precision()
{
	return ((::ShapeAnalysis_WireVertex*)_NativeInstance)->Precision();
}

int Macad::Occt::ShapeAnalysis_WireVertex::NbEdges()
{
	return ((::ShapeAnalysis_WireVertex*)_NativeInstance)->NbEdges();
}

Macad::Occt::ShapeExtend_WireData^ Macad::Occt::ShapeAnalysis_WireVertex::WireData()
{
	Handle(::ShapeExtend_WireData) _result;
	_result = ((::ShapeAnalysis_WireVertex*)_NativeInstance)->WireData();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeExtend_WireData::CreateDowncasted( _result.get());
}

int Macad::Occt::ShapeAnalysis_WireVertex::Status(int num)
{
	return ((::ShapeAnalysis_WireVertex*)_NativeInstance)->Status(num);
}

Macad::Occt::XYZ Macad::Occt::ShapeAnalysis_WireVertex::Position(int num)
{
	return Macad::Occt::XYZ(((::ShapeAnalysis_WireVertex*)_NativeInstance)->Position(num));
}

double Macad::Occt::ShapeAnalysis_WireVertex::UPrevious(int num)
{
	return ((::ShapeAnalysis_WireVertex*)_NativeInstance)->UPrevious(num);
}

double Macad::Occt::ShapeAnalysis_WireVertex::UFollowing(int num)
{
	return ((::ShapeAnalysis_WireVertex*)_NativeInstance)->UFollowing(num);
}

int Macad::Occt::ShapeAnalysis_WireVertex::Data(int num, Macad::Occt::XYZ% pos, double% upre, double% ufol)
{
	pin_ptr<Macad::Occt::XYZ> pp_pos = &pos;
	pin_ptr<double> pp_upre = &upre;
	pin_ptr<double> pp_ufol = &ufol;
	return ((::ShapeAnalysis_WireVertex*)_NativeInstance)->Data(num, *(gp_XYZ*)pp_pos, *(Standard_Real*)pp_upre, *(Standard_Real*)pp_ufol);
}

int Macad::Occt::ShapeAnalysis_WireVertex::NextStatus(int stat, int num)
{
	return ((::ShapeAnalysis_WireVertex*)_NativeInstance)->NextStatus(stat, num);
}

int Macad::Occt::ShapeAnalysis_WireVertex::NextStatus(int stat)
{
	return ((::ShapeAnalysis_WireVertex*)_NativeInstance)->NextStatus(stat, 0);
}

int Macad::Occt::ShapeAnalysis_WireVertex::NextCriter(int crit, int num)
{
	return ((::ShapeAnalysis_WireVertex*)_NativeInstance)->NextCriter(crit, num);
}

int Macad::Occt::ShapeAnalysis_WireVertex::NextCriter(int crit)
{
	return ((::ShapeAnalysis_WireVertex*)_NativeInstance)->NextCriter(crit, 0);
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_CheckSmallFace
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_CheckSmallFace::ShapeAnalysis_CheckSmallFace()
	: BaseClass<::ShapeAnalysis_CheckSmallFace>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_CheckSmallFace();
}

Macad::Occt::ShapeAnalysis_CheckSmallFace::ShapeAnalysis_CheckSmallFace(Macad::Occt::ShapeAnalysis_CheckSmallFace^ parameter1)
	: BaseClass<::ShapeAnalysis_CheckSmallFace>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_CheckSmallFace(*(::ShapeAnalysis_CheckSmallFace*)parameter1->NativeInstance);
}

int Macad::Occt::ShapeAnalysis_CheckSmallFace::IsSpotFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% spot, double% spotol, double tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_spot = &spot;
	pin_ptr<double> pp_spotol = &spotol;
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->IsSpotFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_spot, *(Standard_Real*)pp_spotol, tol);
}

int Macad::Occt::ShapeAnalysis_CheckSmallFace::IsSpotFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% spot, double% spotol)
{
	pin_ptr<Macad::Occt::Pnt> pp_spot = &spot;
	pin_ptr<double> pp_spotol = &spotol;
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->IsSpotFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_spot, *(Standard_Real*)pp_spotol, -1.);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckSpotFace(Macad::Occt::TopoDS_Face^ F, double tol)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckSpotFace(*(::TopoDS_Face*)F->NativeInstance, tol);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckSpotFace(Macad::Occt::TopoDS_Face^ F)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckSpotFace(*(::TopoDS_Face*)F->NativeInstance, -1.);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::IsStripSupport(Macad::Occt::TopoDS_Face^ F, double tol)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->IsStripSupport(*(::TopoDS_Face*)F->NativeInstance, tol);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::IsStripSupport(Macad::Occt::TopoDS_Face^ F)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->IsStripSupport(*(::TopoDS_Face*)F->NativeInstance, -1.);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckStripEdges(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol, double% dmax)
{
	pin_ptr<double> pp_dmax = &dmax;
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckStripEdges(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, tol, *(Standard_Real*)pp_dmax);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::FindStripEdges(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol, double% dmax)
{
	pin_ptr<double> pp_dmax = &dmax;
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->FindStripEdges(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, tol, *(Standard_Real*)pp_dmax);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckSingleStrip(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckSingleStrip(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, tol);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckSingleStrip(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckSingleStrip(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, -1.);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckStripFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckStripFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, tol);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckStripFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckStripFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, -1.);
}

int Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckSplittingVertices(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ MapEdges, Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ MapParam, Macad::Occt::TopoDS_Compound^ theAllVert)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckSplittingVertices(*(::TopoDS_Face*)F->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)MapEdges->NativeInstance, *(::ShapeAnalysis_DataMapOfShapeListOfReal*)MapParam->NativeInstance, *(::TopoDS_Compound*)theAllVert->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckPin(Macad::Occt::TopoDS_Face^ F, int% whatrow, int% sence)
{
	pin_ptr<int> pp_whatrow = &whatrow;
	pin_ptr<int> pp_sence = &sence;
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckPin(*(::TopoDS_Face*)F->NativeInstance, *(Standard_Integer*)pp_whatrow, *(Standard_Integer*)pp_sence);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckTwisted(Macad::Occt::TopoDS_Face^ F, double% paramu, double% paramv)
{
	pin_ptr<double> pp_paramu = &paramu;
	pin_ptr<double> pp_paramv = &paramv;
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckTwisted(*(::TopoDS_Face*)F->NativeInstance, *(Standard_Real*)pp_paramu, *(Standard_Real*)pp_paramv);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckPinFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ mapEdges, double toler)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckPinFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopTools_DataMapOfShapeShape*)mapEdges->NativeInstance, toler);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckPinFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ mapEdges)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckPinFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopTools_DataMapOfShapeShape*)mapEdges->NativeInstance, -1.);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckPinEdges(Macad::Occt::TopoDS_Edge^ theFirstEdge, Macad::Occt::TopoDS_Edge^ theSecondEdge, double coef1, double coef2, double toler)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckPinEdges(*(::TopoDS_Edge*)theFirstEdge->NativeInstance, *(::TopoDS_Edge*)theSecondEdge->NativeInstance, coef1, coef2, toler);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}

void Macad::Occt::ShapeAnalysis_CheckSmallFace::SetTolerance(double tol)
{
	((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->SetTolerance(tol);
}

double Macad::Occt::ShapeAnalysis_CheckSmallFace::Tolerance()
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->Tolerance();
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::StatusSpot(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->StatusSpot((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::StatusStrip(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->StatusStrip((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::StatusPin(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->StatusPin((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::StatusTwisted(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->StatusTwisted((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::StatusSplitVert(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->StatusSplitVert((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::StatusPinFace(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->StatusPinFace((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::StatusPinEdges(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->StatusPinEdges((::ShapeExtend_Status)status);
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Shell
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_Shell::ShapeAnalysis_Shell()
	: BaseClass<::ShapeAnalysis_Shell>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_Shell();
}

Macad::Occt::ShapeAnalysis_Shell::ShapeAnalysis_Shell(Macad::Occt::ShapeAnalysis_Shell^ parameter1)
	: BaseClass<::ShapeAnalysis_Shell>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_Shell(*(::ShapeAnalysis_Shell*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_Shell::Clear()
{
	((::ShapeAnalysis_Shell*)_NativeInstance)->Clear();
}

void Macad::Occt::ShapeAnalysis_Shell::LoadShells(Macad::Occt::TopoDS_Shape^ shape)
{
	((::ShapeAnalysis_Shell*)_NativeInstance)->LoadShells(*(::TopoDS_Shape*)shape->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_Shell::CheckOrientedShells(Macad::Occt::TopoDS_Shape^ shape, bool alsofree, bool checkinternaledges)
{
	return ((::ShapeAnalysis_Shell*)_NativeInstance)->CheckOrientedShells(*(::TopoDS_Shape*)shape->NativeInstance, alsofree, checkinternaledges);
}

bool Macad::Occt::ShapeAnalysis_Shell::CheckOrientedShells(Macad::Occt::TopoDS_Shape^ shape, bool alsofree)
{
	return ((::ShapeAnalysis_Shell*)_NativeInstance)->CheckOrientedShells(*(::TopoDS_Shape*)shape->NativeInstance, alsofree, false);
}

bool Macad::Occt::ShapeAnalysis_Shell::CheckOrientedShells(Macad::Occt::TopoDS_Shape^ shape)
{
	return ((::ShapeAnalysis_Shell*)_NativeInstance)->CheckOrientedShells(*(::TopoDS_Shape*)shape->NativeInstance, false, false);
}

bool Macad::Occt::ShapeAnalysis_Shell::IsLoaded(Macad::Occt::TopoDS_Shape^ shape)
{
	return ((::ShapeAnalysis_Shell*)_NativeInstance)->IsLoaded(*(::TopoDS_Shape*)shape->NativeInstance);
}

int Macad::Occt::ShapeAnalysis_Shell::NbLoaded()
{
	return ((::ShapeAnalysis_Shell*)_NativeInstance)->NbLoaded();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeAnalysis_Shell::Loaded(int num)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeAnalysis_Shell*)_NativeInstance)->Loaded(num);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::ShapeAnalysis_Shell::HasBadEdges()
{
	return ((::ShapeAnalysis_Shell*)_NativeInstance)->HasBadEdges();
}

Macad::Occt::TopoDS_Compound^ Macad::Occt::ShapeAnalysis_Shell::BadEdges()
{
	::TopoDS_Compound* _result = new ::TopoDS_Compound();
	*_result = ((::ShapeAnalysis_Shell*)_NativeInstance)->BadEdges();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Compound(_result);
}

bool Macad::Occt::ShapeAnalysis_Shell::HasFreeEdges()
{
	return ((::ShapeAnalysis_Shell*)_NativeInstance)->HasFreeEdges();
}

Macad::Occt::TopoDS_Compound^ Macad::Occt::ShapeAnalysis_Shell::FreeEdges()
{
	::TopoDS_Compound* _result = new ::TopoDS_Compound();
	*_result = ((::ShapeAnalysis_Shell*)_NativeInstance)->FreeEdges();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Compound(_result);
}

bool Macad::Occt::ShapeAnalysis_Shell::HasConnectedEdges()
{
	return ((::ShapeAnalysis_Shell*)_NativeInstance)->HasConnectedEdges();
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_ShapeTolerance
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_ShapeTolerance::ShapeAnalysis_ShapeTolerance()
	: BaseClass<::ShapeAnalysis_ShapeTolerance>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_ShapeTolerance();
}

Macad::Occt::ShapeAnalysis_ShapeTolerance::ShapeAnalysis_ShapeTolerance(Macad::Occt::ShapeAnalysis_ShapeTolerance^ parameter1)
	: BaseClass<::ShapeAnalysis_ShapeTolerance>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_ShapeTolerance(*(::ShapeAnalysis_ShapeTolerance*)parameter1->NativeInstance);
}

double Macad::Occt::ShapeAnalysis_ShapeTolerance::Tolerance(Macad::Occt::TopoDS_Shape^ shape, int mode, Macad::Occt::TopAbs_ShapeEnum type)
{
	return ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->Tolerance(*(::TopoDS_Shape*)shape->NativeInstance, mode, (::TopAbs_ShapeEnum)type);
}

double Macad::Occt::ShapeAnalysis_ShapeTolerance::Tolerance(Macad::Occt::TopoDS_Shape^ shape, int mode)
{
	return ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->Tolerance(*(::TopoDS_Shape*)shape->NativeInstance, mode, TopAbs_SHAPE);
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeTolerance::OverTolerance(Macad::Occt::TopoDS_Shape^ shape, double value, Macad::Occt::TopAbs_ShapeEnum type)
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->OverTolerance(*(::TopoDS_Shape*)shape->NativeInstance, value, (::TopAbs_ShapeEnum)type);
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeTolerance::OverTolerance(Macad::Occt::TopoDS_Shape^ shape, double value)
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->OverTolerance(*(::TopoDS_Shape*)shape->NativeInstance, value, TopAbs_SHAPE);
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeTolerance::InTolerance(Macad::Occt::TopoDS_Shape^ shape, double valmin, double valmax, Macad::Occt::TopAbs_ShapeEnum type)
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->InTolerance(*(::TopoDS_Shape*)shape->NativeInstance, valmin, valmax, (::TopAbs_ShapeEnum)type);
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeTolerance::InTolerance(Macad::Occt::TopoDS_Shape^ shape, double valmin, double valmax)
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->InTolerance(*(::TopoDS_Shape*)shape->NativeInstance, valmin, valmax, TopAbs_SHAPE);
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeAnalysis_ShapeTolerance::InitTolerance()
{
	((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->InitTolerance();
}

void Macad::Occt::ShapeAnalysis_ShapeTolerance::AddTolerance(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopAbs_ShapeEnum type)
{
	((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->AddTolerance(*(::TopoDS_Shape*)shape->NativeInstance, (::TopAbs_ShapeEnum)type);
}

void Macad::Occt::ShapeAnalysis_ShapeTolerance::AddTolerance(Macad::Occt::TopoDS_Shape^ shape)
{
	((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->AddTolerance(*(::TopoDS_Shape*)shape->NativeInstance, TopAbs_SHAPE);
}

double Macad::Occt::ShapeAnalysis_ShapeTolerance::GlobalTolerance(int mode)
{
	return ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->GlobalTolerance(mode);
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_ShapeContents
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_ShapeContents::ShapeAnalysis_ShapeContents()
	: BaseClass<::ShapeAnalysis_ShapeContents>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_ShapeContents();
}

Macad::Occt::ShapeAnalysis_ShapeContents::ShapeAnalysis_ShapeContents(Macad::Occt::ShapeAnalysis_ShapeContents^ parameter1)
	: BaseClass<::ShapeAnalysis_ShapeContents>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_ShapeContents(*(::ShapeAnalysis_ShapeContents*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_ShapeContents::Clear()
{
	((::ShapeAnalysis_ShapeContents*)_NativeInstance)->Clear();
}

void Macad::Occt::ShapeAnalysis_ShapeContents::ClearFlags()
{
	((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ClearFlags();
}

void Macad::Occt::ShapeAnalysis_ShapeContents::Perform(Macad::Occt::TopoDS_Shape^ shape)
{
	((::ShapeAnalysis_ShapeContents*)_NativeInstance)->Perform(*(::TopoDS_Shape*)shape->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_ShapeContents::ModifyBigSplineMode()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyBigSplineMode();
}

bool Macad::Occt::ShapeAnalysis_ShapeContents::ModifyIndirectMode()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyIndirectMode();
}

bool Macad::Occt::ShapeAnalysis_ShapeContents::ModifyOffestSurfaceMode()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyOffestSurfaceMode();
}

bool Macad::Occt::ShapeAnalysis_ShapeContents::ModifyTrimmed3dMode()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyTrimmed3dMode();
}

bool Macad::Occt::ShapeAnalysis_ShapeContents::ModifyOffsetCurveMode()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyOffsetCurveMode();
}

bool Macad::Occt::ShapeAnalysis_ShapeContents::ModifyTrimmed2dMode()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ModifyTrimmed2dMode();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSolids()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSolids();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbShells()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbShells();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbFaces()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbFaces();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbWires()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbWires();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbEdges()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbEdges();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbVertices()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbVertices();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSolidsWithVoids()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSolidsWithVoids();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbBigSplines()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbBigSplines();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbC0Surfaces()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbC0Surfaces();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbC0Curves()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbC0Curves();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbOffsetSurf()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbOffsetSurf();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbIndirectSurf()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbIndirectSurf();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbOffsetCurves()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbOffsetCurves();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbTrimmedCurve2d()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbTrimmedCurve2d();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbTrimmedCurve3d()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbTrimmedCurve3d();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbBSplibeSurf()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbBSplibeSurf();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbBezierSurf()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbBezierSurf();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbTrimSurf()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbTrimSurf();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbWireWitnSeam()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbWireWitnSeam();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbWireWithSevSeams()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbWireWithSevSeams();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbFaceWithSevWires()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbFaceWithSevWires();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbNoPCurve()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbNoPCurve();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbFreeFaces()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbFreeFaces();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbFreeWires()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbFreeWires();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbFreeEdges()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbFreeEdges();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedSolids()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedSolids();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedShells()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedShells();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedFaces()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedFaces();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedWires()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedWires();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedFreeWires()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedFreeWires();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedFreeEdges()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedFreeEdges();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedEdges()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedEdges();
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedVertices()
{
	return ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedVertices();
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeContents::BigSplineSec()
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->BigSplineSec();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeContents::IndirectSec()
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->IndirectSec();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeContents::OffsetSurfaceSec()
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->OffsetSurfaceSec();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeContents::Trimmed3dSec()
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->Trimmed3dSec();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeContents::OffsetCurveSec()
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->OffsetCurveSec();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeContents::Trimmed2dSec()
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->Trimmed2dSec();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_FreeBounds
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds()
	: BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBounds();
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double toler, bool splitclosed, bool splitopen)
	: BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, toler, splitclosed, splitopen);
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double toler, bool splitclosed)
	: BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, toler, splitclosed, true);
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double toler)
	: BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, toler, false, true);
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen, bool checkinternaledges)
	: BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, splitopen, checkinternaledges);
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen)
	: BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, splitopen, false);
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed)
	: BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, true, false);
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape)
	: BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, false, true, false);
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::ShapeAnalysis_FreeBounds^ parameter1)
	: BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::ShapeAnalysis_FreeBounds*)parameter1->NativeInstance);
}

Macad::Occt::TopoDS_Compound^ Macad::Occt::ShapeAnalysis_FreeBounds::GetClosedWires()
{
	::TopoDS_Compound* _result = new ::TopoDS_Compound();
	*_result =  (::TopoDS_Compound)((::ShapeAnalysis_FreeBounds*)_NativeInstance)->GetClosedWires();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Compound(_result);
}

Macad::Occt::TopoDS_Compound^ Macad::Occt::ShapeAnalysis_FreeBounds::GetOpenWires()
{
	::TopoDS_Compound* _result = new ::TopoDS_Compound();
	*_result =  (::TopoDS_Compound)((::ShapeAnalysis_FreeBounds*)_NativeInstance)->GetOpenWires();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Compound(_result);
}

void Macad::Occt::ShapeAnalysis_FreeBounds::ConnectEdgesToWires(Macad::Occt::TopTools_HSequenceOfShape^ edges, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ wires)
{
	Handle(::TopTools_HSequenceOfShape) h_edges = edges->NativeInstance;
	Handle(::TopTools_HSequenceOfShape) h_wires = wires->NativeInstance;
	::ShapeAnalysis_FreeBounds::ConnectEdgesToWires(h_edges, toler, shared, h_wires);
	edges->NativeInstance = h_edges.get();
	wires->NativeInstance = h_wires.get();
}

void Macad::Occt::ShapeAnalysis_FreeBounds::ConnectWiresToWires(Macad::Occt::TopTools_HSequenceOfShape^ iwires, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ owires)
{
	Handle(::TopTools_HSequenceOfShape) h_iwires = iwires->NativeInstance;
	Handle(::TopTools_HSequenceOfShape) h_owires = owires->NativeInstance;
	::ShapeAnalysis_FreeBounds::ConnectWiresToWires(h_iwires, toler, shared, h_owires);
	iwires->NativeInstance = h_iwires.get();
	owires->NativeInstance = h_owires.get();
}

void Macad::Occt::ShapeAnalysis_FreeBounds::ConnectWiresToWires(Macad::Occt::TopTools_HSequenceOfShape^ iwires, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ owires, Macad::Occt::TopTools_DataMapOfShapeShape^ vertices)
{
	Handle(::TopTools_HSequenceOfShape) h_iwires = iwires->NativeInstance;
	Handle(::TopTools_HSequenceOfShape) h_owires = owires->NativeInstance;
	::ShapeAnalysis_FreeBounds::ConnectWiresToWires(h_iwires, toler, shared, h_owires, *(::TopTools_DataMapOfShapeShape*)vertices->NativeInstance);
	iwires->NativeInstance = h_iwires.get();
	owires->NativeInstance = h_owires.get();
}

void Macad::Occt::ShapeAnalysis_FreeBounds::SplitWires(Macad::Occt::TopTools_HSequenceOfShape^ wires, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ closed, Macad::Occt::TopTools_HSequenceOfShape^ open)
{
	Handle(::TopTools_HSequenceOfShape) h_wires = wires->NativeInstance;
	Handle(::TopTools_HSequenceOfShape) h_closed = closed->NativeInstance;
	Handle(::TopTools_HSequenceOfShape) h_open = open->NativeInstance;
	::ShapeAnalysis_FreeBounds::SplitWires(h_wires, toler, shared, h_closed, h_open);
	wires->NativeInstance = h_wires.get();
	closed->NativeInstance = h_closed.get();
	open->NativeInstance = h_open.get();
}

void Macad::Occt::ShapeAnalysis_FreeBounds::DispatchWires(Macad::Occt::TopTools_HSequenceOfShape^ wires, Macad::Occt::TopoDS_Compound^ closed, Macad::Occt::TopoDS_Compound^ open)
{
	Handle(::TopTools_HSequenceOfShape) h_wires = wires->NativeInstance;
	::ShapeAnalysis_FreeBounds::DispatchWires(h_wires, *(::TopoDS_Compound*)closed->NativeInstance, *(::TopoDS_Compound*)open->NativeInstance);
	wires->NativeInstance = h_wires.get();
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_FreeBoundData
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_FreeBoundData::ShapeAnalysis_FreeBoundData()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_FreeBoundData();
}

Macad::Occt::ShapeAnalysis_FreeBoundData::ShapeAnalysis_FreeBoundData(Macad::Occt::TopoDS_Wire^ freebound)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_FreeBoundData(*(::TopoDS_Wire*)freebound->NativeInstance);
}

Macad::Occt::ShapeAnalysis_FreeBoundData::ShapeAnalysis_FreeBoundData(Macad::Occt::ShapeAnalysis_FreeBoundData^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_FreeBoundData(*(::ShapeAnalysis_FreeBoundData*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::Clear()
{
	((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Clear();
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::SetFreeBound(Macad::Occt::TopoDS_Wire^ freebound)
{
	((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->SetFreeBound(*(::TopoDS_Wire*)freebound->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::SetArea(double area)
{
	((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->SetArea(area);
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::SetPerimeter(double perimeter)
{
	((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->SetPerimeter(perimeter);
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::SetRatio(double ratio)
{
	((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->SetRatio(ratio);
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::SetWidth(double width)
{
	((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->SetWidth(width);
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::AddNotch(Macad::Occt::TopoDS_Wire^ notch, double width)
{
	((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->AddNotch(*(::TopoDS_Wire*)notch->NativeInstance, width);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::ShapeAnalysis_FreeBoundData::FreeBound()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->FreeBound();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

double Macad::Occt::ShapeAnalysis_FreeBoundData::Area()
{
	return ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Area();
}

double Macad::Occt::ShapeAnalysis_FreeBoundData::Perimeter()
{
	return ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Perimeter();
}

double Macad::Occt::ShapeAnalysis_FreeBoundData::Ratio()
{
	return ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Ratio();
}

double Macad::Occt::ShapeAnalysis_FreeBoundData::Width()
{
	return ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Width();
}

int Macad::Occt::ShapeAnalysis_FreeBoundData::NbNotches()
{
	return ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->NbNotches();
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_FreeBoundData::Notches()
{
	Handle(::TopTools_HSequenceOfShape) _result;
	_result = ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Notches();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted( _result.get());
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::ShapeAnalysis_FreeBoundData::Notch(int index)
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Notch(index);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

double Macad::Occt::ShapeAnalysis_FreeBoundData::NotchWidth(int index)
{
	return ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->NotchWidth(index);
}

double Macad::Occt::ShapeAnalysis_FreeBoundData::NotchWidth(Macad::Occt::TopoDS_Wire^ notch)
{
	return ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->NotchWidth(*(::TopoDS_Wire*)notch->NativeInstance);
}


Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(::ShapeAnalysis_FreeBoundData* instance)
{
	return gcnew Macad::Occt::ShapeAnalysis_FreeBoundData( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_FreeBoundsProperties
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties()
	: BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties();
}

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed, bool splitopen)
	: BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties(*(::TopoDS_Shape*)shape->NativeInstance, tolerance, splitclosed, splitopen);
}

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed)
	: BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties(*(::TopoDS_Shape*)shape->NativeInstance, tolerance, splitclosed, false);
}

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, double tolerance)
	: BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties(*(::TopoDS_Shape*)shape->NativeInstance, tolerance, false, false);
}

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen)
	: BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, splitopen);
}

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed)
	: BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, false);
}

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape)
	: BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties(*(::TopoDS_Shape*)shape->NativeInstance, false, false);
}

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties(Macad::Occt::ShapeAnalysis_FreeBoundsProperties^ parameter1)
	: BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties(*(::ShapeAnalysis_FreeBoundsProperties*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Init(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed, bool splitopen)
{
	((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance, tolerance, splitclosed, splitopen);
}

void Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Init(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed)
{
	((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance, tolerance, splitclosed, false);
}

void Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Init(Macad::Occt::TopoDS_Shape^ shape, double tolerance)
{
	((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance, tolerance, false, false);
}

void Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Init(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen)
{
	((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, splitopen);
}

void Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Init(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed)
{
	((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, false);
}

void Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Init(Macad::Occt::TopoDS_Shape^ shape)
{
	((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance, false, false);
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Perform()
{
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Perform();
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::IsLoaded()
{
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->IsLoaded();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

double Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Tolerance()
{
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Tolerance();
}

int Macad::Occt::ShapeAnalysis_FreeBoundsProperties::NbFreeBounds()
{
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->NbFreeBounds();
}

int Macad::Occt::ShapeAnalysis_FreeBoundsProperties::NbClosedFreeBounds()
{
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->NbClosedFreeBounds();
}

int Macad::Occt::ShapeAnalysis_FreeBoundsProperties::NbOpenFreeBounds()
{
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->NbOpenFreeBounds();
}

Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ClosedFreeBounds()
{
	Handle(::ShapeAnalysis_HSequenceOfFreeBounds) _result;
	_result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->ClosedFreeBounds();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ Macad::Occt::ShapeAnalysis_FreeBoundsProperties::OpenFreeBounds()
{
	Handle(::ShapeAnalysis_HSequenceOfFreeBounds) _result;
	_result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->OpenFreeBounds();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ClosedFreeBound(int index)
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->ClosedFreeBound(index);
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_FreeBoundsProperties::OpenFreeBound(int index)
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->OpenFreeBound(index);
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::DispatchBounds()
{
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->DispatchBounds();
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckContours(double prec)
{
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckContours(prec);
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckContours()
{
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckContours(0.);
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckNotches(double prec)
{
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckNotches(prec);
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckNotches()
{
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckNotches(0.);
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckNotches(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData, double prec)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_fbData = fbData->NativeInstance;
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckNotches(h_fbData, prec);
	fbData->NativeInstance = h_fbData.get();
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckNotches(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_fbData = fbData->NativeInstance;
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckNotches(h_fbData, 0.);
	fbData->NativeInstance = h_fbData.get();
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckNotches(Macad::Occt::TopoDS_Wire^ freebound, int num, Macad::Occt::TopoDS_Wire^ notch, double% distMax, double prec)
{
	pin_ptr<double> pp_distMax = &distMax;
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckNotches(*(::TopoDS_Wire*)freebound->NativeInstance, num, *(::TopoDS_Wire*)notch->NativeInstance, *(Standard_Real*)pp_distMax, prec);
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckNotches(Macad::Occt::TopoDS_Wire^ freebound, int num, Macad::Occt::TopoDS_Wire^ notch, double% distMax)
{
	pin_ptr<double> pp_distMax = &distMax;
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckNotches(*(::TopoDS_Wire*)freebound->NativeInstance, num, *(::TopoDS_Wire*)notch->NativeInstance, *(Standard_Real*)pp_distMax, 0.);
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::FillProperties(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData, double prec)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_fbData = fbData->NativeInstance;
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->FillProperties(h_fbData, prec);
	fbData->NativeInstance = h_fbData.get();
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::FillProperties(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_fbData = fbData->NativeInstance;
	return ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->FillProperties(h_fbData, 0.);
	fbData->NativeInstance = h_fbData.get();
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_TransferParameters
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_TransferParameters::ShapeAnalysis_TransferParameters()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_TransferParameters();
}

Macad::Occt::ShapeAnalysis_TransferParameters::ShapeAnalysis_TransferParameters(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_TransferParameters(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::ShapeAnalysis_TransferParameters::ShapeAnalysis_TransferParameters(Macad::Occt::ShapeAnalysis_TransferParameters^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_TransferParameters(*(::ShapeAnalysis_TransferParameters*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_TransferParameters::Init(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
	((::ShapeAnalysis_TransferParameters*)_NativeInstance)->Init(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_TransferParameters::SetMaxTolerance(double maxtol)
{
	((::ShapeAnalysis_TransferParameters*)_NativeInstance)->SetMaxTolerance(maxtol);
}

Macad::Occt::TColStd_HSequenceOfReal^ Macad::Occt::ShapeAnalysis_TransferParameters::Perform(Macad::Occt::TColStd_HSequenceOfReal^ Params, bool To2d)
{
	Handle(::TColStd_HSequenceOfReal) h_Params = Params->NativeInstance;
	Handle(::TColStd_HSequenceOfReal) _result;
	_result = ((::ShapeAnalysis_TransferParameters*)_NativeInstance)->Perform(h_Params, To2d);
	Params->NativeInstance = h_Params.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfReal::CreateDowncasted( _result.get());
}

double Macad::Occt::ShapeAnalysis_TransferParameters::Perform(double Param, bool To2d)
{
	return ((::ShapeAnalysis_TransferParameters*)_NativeInstance)->Perform(Param, To2d);
}

void Macad::Occt::ShapeAnalysis_TransferParameters::TransferRange(Macad::Occt::TopoDS_Edge^ newEdge, double prevPar, double currPar, bool To2d)
{
	((::ShapeAnalysis_TransferParameters*)_NativeInstance)->TransferRange(*(::TopoDS_Edge*)newEdge->NativeInstance, prevPar, currPar, To2d);
}

bool Macad::Occt::ShapeAnalysis_TransferParameters::IsSameRange()
{
	return ((::ShapeAnalysis_TransferParameters*)_NativeInstance)->IsSameRange();
}


Macad::Occt::ShapeAnalysis_TransferParameters^ Macad::Occt::ShapeAnalysis_TransferParameters::CreateDowncasted(::ShapeAnalysis_TransferParameters* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeAnalysis_TransferParametersProj)))
		return Macad::Occt::ShapeAnalysis_TransferParametersProj::CreateDowncasted((::ShapeAnalysis_TransferParametersProj*)instance);

	return gcnew Macad::Occt::ShapeAnalysis_TransferParameters( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_TransferParametersProj
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_TransferParametersProj::ShapeAnalysis_TransferParametersProj()
	: Macad::Occt::ShapeAnalysis_TransferParameters(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_TransferParametersProj();
}

Macad::Occt::ShapeAnalysis_TransferParametersProj::ShapeAnalysis_TransferParametersProj(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
	: Macad::Occt::ShapeAnalysis_TransferParameters(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_TransferParametersProj(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::ShapeAnalysis_TransferParametersProj::ShapeAnalysis_TransferParametersProj(Macad::Occt::ShapeAnalysis_TransferParametersProj^ parameter1)
	: Macad::Occt::ShapeAnalysis_TransferParameters(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_TransferParametersProj(*(::ShapeAnalysis_TransferParametersProj*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_TransferParametersProj::Init(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
	((::ShapeAnalysis_TransferParametersProj*)_NativeInstance)->Init(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::TColStd_HSequenceOfReal^ Macad::Occt::ShapeAnalysis_TransferParametersProj::Perform(Macad::Occt::TColStd_HSequenceOfReal^ Papams, bool To2d)
{
	Handle(::TColStd_HSequenceOfReal) h_Papams = Papams->NativeInstance;
	Handle(::TColStd_HSequenceOfReal) _result;
	_result = ((::ShapeAnalysis_TransferParametersProj*)_NativeInstance)->Perform(h_Papams, To2d);
	Papams->NativeInstance = h_Papams.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfReal::CreateDowncasted( _result.get());
}

double Macad::Occt::ShapeAnalysis_TransferParametersProj::Perform(double Param, bool To2d)
{
	return ((::ShapeAnalysis_TransferParametersProj*)_NativeInstance)->Perform(Param, To2d);
}

bool Macad::Occt::ShapeAnalysis_TransferParametersProj::ForceProjection()
{
	return ((::ShapeAnalysis_TransferParametersProj*)_NativeInstance)->ForceProjection();
}

void Macad::Occt::ShapeAnalysis_TransferParametersProj::TransferRange(Macad::Occt::TopoDS_Edge^ newEdge, double prevPar, double currPar, bool Is2d)
{
	((::ShapeAnalysis_TransferParametersProj*)_NativeInstance)->TransferRange(*(::TopoDS_Edge*)newEdge->NativeInstance, prevPar, currPar, Is2d);
}

bool Macad::Occt::ShapeAnalysis_TransferParametersProj::IsSameRange()
{
	return ((::ShapeAnalysis_TransferParametersProj*)_NativeInstance)->IsSameRange();
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeAnalysis_TransferParametersProj::CopyNMVertex(Macad::Occt::TopoDS_Vertex^ theVert, Macad::Occt::TopoDS_Edge^ toedge, Macad::Occt::TopoDS_Edge^ fromedge)
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ::ShapeAnalysis_TransferParametersProj::CopyNMVertex(*(::TopoDS_Vertex*)theVert->NativeInstance, *(::TopoDS_Edge*)toedge->NativeInstance, *(::TopoDS_Edge*)fromedge->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeAnalysis_TransferParametersProj::CopyNMVertex(Macad::Occt::TopoDS_Vertex^ theVert, Macad::Occt::TopoDS_Face^ toFace, Macad::Occt::TopoDS_Face^ fromFace)
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ::ShapeAnalysis_TransferParametersProj::CopyNMVertex(*(::TopoDS_Vertex*)theVert->NativeInstance, *(::TopoDS_Face*)toFace->NativeInstance, *(::TopoDS_Face*)fromFace->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}


Macad::Occt::ShapeAnalysis_TransferParametersProj^ Macad::Occt::ShapeAnalysis_TransferParametersProj::CreateDowncasted(::ShapeAnalysis_TransferParametersProj* instance)
{
	return gcnew Macad::Occt::ShapeAnalysis_TransferParametersProj( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis::ShapeAnalysis()
	: BaseClass<::ShapeAnalysis>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis();
}

Macad::Occt::ShapeAnalysis::ShapeAnalysis(Macad::Occt::ShapeAnalysis^ parameter1)
	: BaseClass<::ShapeAnalysis>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeAnalysis(*(::ShapeAnalysis*)parameter1->NativeInstance);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::ShapeAnalysis::OuterWire(Macad::Occt::TopoDS_Face^ face)
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = ::ShapeAnalysis::OuterWire(*(::TopoDS_Face*)face->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

double Macad::Occt::ShapeAnalysis::TotCross2D(Macad::Occt::ShapeExtend_WireData^ sewd, Macad::Occt::TopoDS_Face^ aFace)
{
	Handle(::ShapeExtend_WireData) h_sewd = sewd->NativeInstance;
	return ::ShapeAnalysis::TotCross2D(h_sewd, *(::TopoDS_Face*)aFace->NativeInstance);
	sewd->NativeInstance = h_sewd.get();
}

double Macad::Occt::ShapeAnalysis::ContourArea(Macad::Occt::TopoDS_Wire^ theWire)
{
	return ::ShapeAnalysis::ContourArea(*(::TopoDS_Wire*)theWire->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis::IsOuterBound(Macad::Occt::TopoDS_Face^ face)
{
	return ::ShapeAnalysis::IsOuterBound(*(::TopoDS_Face*)face->NativeInstance);
}

double Macad::Occt::ShapeAnalysis::AdjustByPeriod(double Val, double ToVal, double Period)
{
	return ::ShapeAnalysis::AdjustByPeriod(Val, ToVal, Period);
}

double Macad::Occt::ShapeAnalysis::AdjustToPeriod(double Val, double ValMin, double ValMax)
{
	return ::ShapeAnalysis::AdjustToPeriod(Val, ValMin, ValMax);
}

void Macad::Occt::ShapeAnalysis::FindBounds(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
	::ShapeAnalysis::FindBounds(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

void Macad::Occt::ShapeAnalysis::GetFaceUVBounds(Macad::Occt::TopoDS_Face^ F, double% Umin, double% Umax, double% Vmin, double% Vmax)
{
	pin_ptr<double> pp_Umin = &Umin;
	pin_ptr<double> pp_Umax = &Umax;
	pin_ptr<double> pp_Vmin = &Vmin;
	pin_ptr<double> pp_Vmax = &Vmax;
	::ShapeAnalysis::GetFaceUVBounds(*(::TopoDS_Face*)F->NativeInstance, *(Standard_Real*)pp_Umin, *(Standard_Real*)pp_Umax, *(Standard_Real*)pp_Vmin, *(Standard_Real*)pp_Vmax);
}




//---------------------------------------------------------------------
//  Class  ShapeAnalysis_HSequenceOfFreeBounds
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::ShapeAnalysis_HSequenceOfFreeBounds()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_HSequenceOfFreeBounds();
}

Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::ShapeAnalysis_HSequenceOfFreeBounds(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_HSequenceOfFreeBounds(*(::ShapeAnalysis_SequenceOfFreeBounds*)theOther->NativeInstance);
}

Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::ShapeAnalysis_HSequenceOfFreeBounds(Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeAnalysis_HSequenceOfFreeBounds(*(::ShapeAnalysis_HSequenceOfFreeBounds*)parameter1->NativeInstance);
}

Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Sequence()
{
	::ShapeAnalysis_SequenceOfFreeBounds* _result = new ::ShapeAnalysis_SequenceOfFreeBounds();
	*_result =  (::ShapeAnalysis_SequenceOfFreeBounds)((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds(_result);
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Append(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_theItem = theItem->NativeInstance;
	((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Append(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSequence)
{
	((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Append(*(::ShapeAnalysis_SequenceOfFreeBounds*)theSequence->NativeInstance);
}

Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::ChangeSequence()
{
	::ShapeAnalysis_SequenceOfFreeBounds* _result = new ::ShapeAnalysis_SequenceOfFreeBounds();
	*_result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds(_result);
}

int Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Size()
{
	return ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Size();
}

int Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Length()
{
	return ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Length();
}

int Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Lower()
{
	return ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Lower();
}

int Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Upper()
{
	return ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Upper();
}

bool Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::IsEmpty()
{
	return ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Reverse()
{
	((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Reverse();
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Exchange(int I, int J)
{
	((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Clear()
{
	((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Remove(int theIndex)
{
	((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Remove(int theFromIndex, int theToIndex)
{
	((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Prepend(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_theItem = theItem->NativeInstance;
	((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::InsertBefore(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_theItem = theItem->NativeInstance;
	((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::InsertAfter(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_theItem = theItem->NativeInstance;
	((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::First()
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::ChangeFirst()
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Last()
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::ChangeLast()
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Value(int theIndex)
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::ChangeValue(int theIndex)
{
	Handle(::ShapeAnalysis_FreeBoundData) _result;
	_result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::SetValue(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
	Handle(::ShapeAnalysis_FreeBoundData) h_theItem = theItem->NativeInstance;
	((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}


Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::CreateDowncasted(::ShapeAnalysis_HSequenceOfFreeBounds* instance)
{
	return gcnew Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds( instance );
}


