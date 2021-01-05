// Generated wrapper code for package SelectBasics

#include "OcctPCH.h"
#include "SelectBasics.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "gp.h"
#include "SelectBasics.h"
#include "NCollection.h"
#include "TColgp.h"


//---------------------------------------------------------------------
//  Class  SelectBasics_PickResult
//---------------------------------------------------------------------

Macad::Occt::SelectBasics_PickResult::SelectBasics_PickResult()
	: BaseClass<::SelectBasics_PickResult>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectBasics_PickResult();
}

Macad::Occt::SelectBasics_PickResult::SelectBasics_PickResult(double theDepth, double theDistToCenter, Macad::Occt::Pnt theObjPickedPnt)
	: BaseClass<::SelectBasics_PickResult>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theObjPickedPnt = &theObjPickedPnt;
	_NativeInstance = new ::SelectBasics_PickResult(theDepth, theDistToCenter, *(gp_Pnt*)pp_theObjPickedPnt);
}

Macad::Occt::SelectBasics_PickResult::SelectBasics_PickResult(Macad::Occt::SelectBasics_PickResult^ parameter1)
	: BaseClass<::SelectBasics_PickResult>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectBasics_PickResult(*(::SelectBasics_PickResult*)parameter1->NativeInstance);
}

Macad::Occt::SelectBasics_PickResult^ Macad::Occt::SelectBasics_PickResult::Min(Macad::Occt::SelectBasics_PickResult^ thePickResult1, Macad::Occt::SelectBasics_PickResult^ thePickResult2)
{
	::SelectBasics_PickResult* _result = new ::SelectBasics_PickResult();
	*_result =  (::SelectBasics_PickResult)::SelectBasics_PickResult::Min(*(::SelectBasics_PickResult*)thePickResult1->NativeInstance, *(::SelectBasics_PickResult*)thePickResult2->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectBasics_PickResult(_result);
}

bool Macad::Occt::SelectBasics_PickResult::IsValid()
{
	return ((::SelectBasics_PickResult*)_NativeInstance)->IsValid();
}

void Macad::Occt::SelectBasics_PickResult::Invalidate()
{
	((::SelectBasics_PickResult*)_NativeInstance)->Invalidate();
}

double Macad::Occt::SelectBasics_PickResult::Depth()
{
	return ((::SelectBasics_PickResult*)_NativeInstance)->Depth();
}

void Macad::Occt::SelectBasics_PickResult::SetDepth(double theDepth)
{
	((::SelectBasics_PickResult*)_NativeInstance)->SetDepth(theDepth);
}

bool Macad::Occt::SelectBasics_PickResult::HasPickedPoint()
{
	return ((::SelectBasics_PickResult*)_NativeInstance)->HasPickedPoint();
}

Macad::Occt::Pnt Macad::Occt::SelectBasics_PickResult::PickedPoint()
{
	return Macad::Occt::Pnt(((::SelectBasics_PickResult*)_NativeInstance)->PickedPoint());
}

void Macad::Occt::SelectBasics_PickResult::SetPickedPoint(Macad::Occt::Pnt theObjPickedPnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_theObjPickedPnt = &theObjPickedPnt;
	((::SelectBasics_PickResult*)_NativeInstance)->SetPickedPoint(*(gp_Pnt*)pp_theObjPickedPnt);
}

double Macad::Occt::SelectBasics_PickResult::DistToGeomCenter()
{
	return ((::SelectBasics_PickResult*)_NativeInstance)->DistToGeomCenter();
}

void Macad::Occt::SelectBasics_PickResult::SetDistToGeomCenter(double theDistToCenter)
{
	((::SelectBasics_PickResult*)_NativeInstance)->SetDistToGeomCenter(theDistToCenter);
}

void Macad::Occt::SelectBasics_PickResult::SetSurfaceNormal(Macad::Occt::Vec theNormal)
{
	pin_ptr<Macad::Occt::Vec> pp_theNormal = &theNormal;
	((::SelectBasics_PickResult*)_NativeInstance)->SetSurfaceNormal(*(gp_Vec*)pp_theNormal);
}




//---------------------------------------------------------------------
//  Class  SelectBasics
//---------------------------------------------------------------------

Macad::Occt::SelectBasics::SelectBasics()
	: BaseClass<::SelectBasics>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectBasics();
}

Macad::Occt::SelectBasics::SelectBasics(Macad::Occt::SelectBasics^ parameter1)
	: BaseClass<::SelectBasics>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectBasics(*(::SelectBasics*)parameter1->NativeInstance);
}

int Macad::Occt::SelectBasics::MaxOwnerPriority()
{
	return ::SelectBasics::MaxOwnerPriority();
}

int Macad::Occt::SelectBasics::MinOwnerPriority()
{
	return ::SelectBasics::MinOwnerPriority();
}




//---------------------------------------------------------------------
//  Class  SelectBasics_SelectingVolumeManager
//---------------------------------------------------------------------

Macad::Occt::SelectBasics_SelectingVolumeManager::SelectBasics_SelectingVolumeManager()
	: BaseClass<::SelectBasics_SelectingVolumeManager>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::SelectBasics_SelectingVolumeManager::SelectBasics_SelectingVolumeManager(Macad::Occt::SelectBasics_SelectingVolumeManager^ parameter1)
	: BaseClass<::SelectBasics_SelectingVolumeManager>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

int Macad::Occt::SelectBasics_SelectingVolumeManager::GetActiveSelectionType()
{
	return ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetActiveSelectionType();
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::Pnt thePnt, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	return ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(gp_Pnt*)pp_thePnt, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	return ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(gp_Pnt*)pp_thePnt);
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::TColgp_HArray1OfPnt^ theArrayOfPts, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
	Handle(::TColgp_HArray1OfPnt) h_theArrayOfPts = theArrayOfPts->NativeInstance;
	return ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(h_theArrayOfPts, theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
	theArrayOfPts->NativeInstance = h_theArrayOfPts.get();
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::TColgp_Array1OfPnt^ theArrayOfPts, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
	return ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(::TColgp_Array1OfPnt*)theArrayOfPts->NativeInstance, theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::Pnt thePt1, Macad::Occt::Pnt thePt2, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePt1 = &thePt1;
	pin_ptr<Macad::Occt::Pnt> pp_thePt2 = &thePt2;
	return ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(gp_Pnt*)pp_thePt1, *(gp_Pnt*)pp_thePt2, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::Pnt thePt1, Macad::Occt::Pnt thePt2, Macad::Occt::Pnt thePt3, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePt1 = &thePt1;
	pin_ptr<Macad::Occt::Pnt> pp_thePt2 = &thePt2;
	pin_ptr<Macad::Occt::Pnt> pp_thePt3 = &thePt3;
	return ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(gp_Pnt*)pp_thePt1, *(gp_Pnt*)pp_thePt2, *(gp_Pnt*)pp_thePt3, theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
}

double Macad::Occt::SelectBasics_SelectingVolumeManager::DistToGeometryCenter(Macad::Occt::Pnt theCOG)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCOG = &theCOG;
	return ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->DistToGeometryCenter(*(gp_Pnt*)pp_theCOG);
}

Macad::Occt::Pnt Macad::Occt::SelectBasics_SelectingVolumeManager::DetectedPoint(double theDepth)
{
	return Macad::Occt::Pnt(((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->DetectedPoint(theDepth));
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::IsOverlapAllowed()
{
	return ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->IsOverlapAllowed();
}

Macad::Occt::Pnt Macad::Occt::SelectBasics_SelectingVolumeManager::GetNearPickedPnt()
{
	return Macad::Occt::Pnt(((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetNearPickedPnt());
}

Macad::Occt::Pnt Macad::Occt::SelectBasics_SelectingVolumeManager::GetFarPickedPnt()
{
	return Macad::Occt::Pnt(((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetFarPickedPnt());
}

Macad::Occt::Pnt2d Macad::Occt::SelectBasics_SelectingVolumeManager::GetMousePosition()
{
	return Macad::Occt::Pnt2d(((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetMousePosition());
}



