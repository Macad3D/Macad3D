// Generated wrapper code for package SelectBasics

#include "OcctPCH.h"
#include "SelectBasics.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "SelectMgr.h"
#include "Graphic3d.h"
#include "TColgp.h"


//---------------------------------------------------------------------
//  Class  SelectBasics_PickResult
//---------------------------------------------------------------------

Macad::Occt::SelectBasics_PickResult::SelectBasics_PickResult()
    : Macad::Occt::BaseClass<::SelectBasics_PickResult>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectBasics_PickResult();
}

Macad::Occt::SelectBasics_PickResult::SelectBasics_PickResult(double theDepth, double theDistToCenter, Macad::Occt::Pnt theObjPickedPnt)
    : Macad::Occt::BaseClass<::SelectBasics_PickResult>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theObjPickedPnt = &theObjPickedPnt;
    _NativeInstance = new ::SelectBasics_PickResult(theDepth, theDistToCenter, *(gp_Pnt*)pp_theObjPickedPnt);
}

Macad::Occt::SelectBasics_PickResult^ Macad::Occt::SelectBasics_PickResult::Min(Macad::Occt::SelectBasics_PickResult^ thePickResult1, Macad::Occt::SelectBasics_PickResult^ thePickResult2)
{
    ::SelectBasics_PickResult* _result = new ::SelectBasics_PickResult();
    *_result = (::SelectBasics_PickResult)::SelectBasics_PickResult::Min(*(::SelectBasics_PickResult*)thePickResult1->NativeInstance, *(::SelectBasics_PickResult*)thePickResult2->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectBasics_PickResult(_result);
}

bool Macad::Occt::SelectBasics_PickResult::IsValid()
{
    bool _result = ((::SelectBasics_PickResult*)_NativeInstance)->IsValid();
    return _result;
}

void Macad::Occt::SelectBasics_PickResult::Invalidate()
{
    ((::SelectBasics_PickResult*)_NativeInstance)->Invalidate();
}

double Macad::Occt::SelectBasics_PickResult::Depth()
{
    double _result = ((::SelectBasics_PickResult*)_NativeInstance)->Depth();
    return _result;
}

void Macad::Occt::SelectBasics_PickResult::SetDepth(double theDepth)
{
    ((::SelectBasics_PickResult*)_NativeInstance)->SetDepth(theDepth);
}

bool Macad::Occt::SelectBasics_PickResult::HasPickedPoint()
{
    bool _result = ((::SelectBasics_PickResult*)_NativeInstance)->HasPickedPoint();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::SelectBasics_PickResult::PickedPoint()
{
    ::gp_Pnt _nativeResult = ((::SelectBasics_PickResult*)_NativeInstance)->PickedPoint();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::SelectBasics_PickResult::SetPickedPoint(Macad::Occt::Pnt theObjPickedPnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_theObjPickedPnt = &theObjPickedPnt;
    ((::SelectBasics_PickResult*)_NativeInstance)->SetPickedPoint(*(gp_Pnt*)pp_theObjPickedPnt);
}

double Macad::Occt::SelectBasics_PickResult::DistToGeomCenter()
{
    double _result = ((::SelectBasics_PickResult*)_NativeInstance)->DistToGeomCenter();
    return _result;
}

void Macad::Occt::SelectBasics_PickResult::SetDistToGeomCenter(double theDistToCenter)
{
    ((::SelectBasics_PickResult*)_NativeInstance)->SetDistToGeomCenter(theDistToCenter);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::SelectBasics_PickResult::SurfaceNormal()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::SelectBasics_PickResult*)_NativeInstance)->SurfaceNormal();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

void Macad::Occt::SelectBasics_PickResult::SetSurfaceNormal(Macad::Occt::gp_Vec3f^ theNormal)
{
    ((::SelectBasics_PickResult*)_NativeInstance)->SetSurfaceNormal(*(::gp_Vec3f*)theNormal->NativeInstance);
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
    : Macad::Occt::BaseClass<::SelectBasics>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectBasics();
}

int Macad::Occt::SelectBasics::MaxOwnerPriority()
{
    int _result = ::SelectBasics::MaxOwnerPriority();
    return _result;
}

int Macad::Occt::SelectBasics::MinOwnerPriority()
{
    int _result = ::SelectBasics::MinOwnerPriority();
    return _result;
}



//---------------------------------------------------------------------
//  Class  SelectBasics_SelectingVolumeManager
//---------------------------------------------------------------------

Macad::Occt::SelectBasics_SelectingVolumeManager::SelectBasics_SelectingVolumeManager()
    : Macad::Occt::BaseClass<::SelectBasics_SelectingVolumeManager>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

int Macad::Occt::SelectBasics_SelectingVolumeManager::GetActiveSelectionType()
{
    int _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetActiveSelectionType();
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsBox(Macad::Occt::Graphic3d_Vec3d^ theBoxMin, Macad::Occt::Graphic3d_Vec3d^ theBoxMax, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsBox(*(::Graphic3d_Vec3d*)theBoxMin->NativeInstance, *(::Graphic3d_Vec3d*)theBoxMax->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsBox(Macad::Occt::Graphic3d_Vec3d^ theBoxMin, Macad::Occt::Graphic3d_Vec3d^ theBoxMax, bool% theInside)
{
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsBox(*(::Graphic3d_Vec3d*)theBoxMin->NativeInstance, *(::Graphic3d_Vec3d*)theBoxMax->NativeInstance, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsBox(Macad::Occt::Graphic3d_Vec3d^ theBoxMin, Macad::Occt::Graphic3d_Vec3d^ theBoxMax)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsBox(*(::Graphic3d_Vec3d*)theBoxMin->NativeInstance, *(::Graphic3d_Vec3d*)theBoxMax->NativeInstance, nullptr);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsPoint(Macad::Occt::Pnt thePnt, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsPoint(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsPolygon(Macad::Occt::TColgp_Array1OfPnt^ theArrayOfPts, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsPolygon(*(::TColgp_Array1OfPnt*)theArrayOfPts->NativeInstance, theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsSegment(Macad::Occt::Pnt thePt1, Macad::Occt::Pnt thePt2, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePt1 = &thePt1;
    pin_ptr<Macad::Occt::Pnt> pp_thePt2 = &thePt2;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsSegment(*(gp_Pnt*)pp_thePt1, *(gp_Pnt*)pp_thePt2, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsTriangle(Macad::Occt::Pnt thePt1, Macad::Occt::Pnt thePt2, Macad::Occt::Pnt thePt3, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePt1 = &thePt1;
    pin_ptr<Macad::Occt::Pnt> pp_thePt2 = &thePt2;
    pin_ptr<Macad::Occt::Pnt> pp_thePt3 = &thePt3;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsTriangle(*(gp_Pnt*)pp_thePt1, *(gp_Pnt*)pp_thePt2, *(gp_Pnt*)pp_thePt3, theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, bool% theInside)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, nullptr);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow, bool% theInside)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, nullptr);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsCircle(double theRadius, Macad::Occt::Trsf theTrsf, bool theIsFilled, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsCircle(theRadius, *(gp_Trsf*)pp_theTrsf, theIsFilled, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsCircle(double theRadius, Macad::Occt::Trsf theTrsf, bool theIsFilled, bool% theInside)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsCircle(theRadius, *(gp_Trsf*)pp_theTrsf, theIsFilled, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::OverlapsCircle(double theRadius, Macad::Occt::Trsf theTrsf, bool theIsFilled)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->OverlapsCircle(theRadius, *(gp_Trsf*)pp_theTrsf, theIsFilled, nullptr);
    return _result;
}

double Macad::Occt::SelectBasics_SelectingVolumeManager::DistToGeometryCenter(Macad::Occt::Pnt theCOG)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCOG = &theCOG;
    double _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->DistToGeometryCenter(*(gp_Pnt*)pp_theCOG);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::SelectBasics_SelectingVolumeManager::DetectedPoint(double theDepth)
{
    ::gp_Pnt _nativeResult = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->DetectedPoint(theDepth);
    return Macad::Occt::Pnt(_nativeResult);
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::IsOverlapAllowed()
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->IsOverlapAllowed();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::SelectBasics_SelectingVolumeManager::GetNearPickedPnt()
{
    ::gp_Pnt _nativeResult = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetNearPickedPnt();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::SelectBasics_SelectingVolumeManager::GetFarPickedPnt()
{
    ::gp_Pnt _nativeResult = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetFarPickedPnt();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Dir Macad::Occt::SelectBasics_SelectingVolumeManager::GetViewRayDirection()
{
    ::gp_Dir _nativeResult = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetViewRayDirection();
    return Macad::Occt::Dir(_nativeResult);
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::IsScalableActiveVolume()
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->IsScalableActiveVolume();
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::SelectBasics_SelectingVolumeManager::GetMousePosition()
{
    ::gp_Pnt2d _nativeResult = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->GetMousePosition();
    return Macad::Occt::Pnt2d(_nativeResult);
}

void Macad::Occt::SelectBasics_SelectingVolumeManager::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectBasics_SelectingVolumeManager::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::Graphic3d_Vec3d^ theBoxMin, Macad::Occt::Graphic3d_Vec3d^ theBoxMax, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(::Graphic3d_Vec3d*)theBoxMin->NativeInstance, *(::Graphic3d_Vec3d*)theBoxMax->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::Graphic3d_Vec3d^ theBoxMin, Macad::Occt::Graphic3d_Vec3d^ theBoxMax, bool% theInside)
{
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(::Graphic3d_Vec3d*)theBoxMin->NativeInstance, *(::Graphic3d_Vec3d*)theBoxMax->NativeInstance, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::Graphic3d_Vec3d^ theBoxMin, Macad::Occt::Graphic3d_Vec3d^ theBoxMax)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(::Graphic3d_Vec3d*)theBoxMin->NativeInstance, *(::Graphic3d_Vec3d*)theBoxMax->NativeInstance, nullptr);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::Pnt thePnt, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(gp_Pnt*)pp_thePnt, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(gp_Pnt*)pp_thePnt);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::TColgp_HArray1OfPnt^ theArrayOfPts, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(Handle(::TColgp_HArray1OfPnt)(theArrayOfPts->NativeInstance), theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::TColgp_Array1OfPnt^ theArrayOfPts, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(::TColgp_Array1OfPnt*)theArrayOfPts->NativeInstance, theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt1 = &thePnt1;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt2 = &thePnt2;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectBasics_SelectingVolumeManager::Overlaps(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::Pnt thePnt3, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt1 = &thePnt1;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt2 = &thePnt2;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt3 = &thePnt3;
    bool _result = ((::SelectBasics_SelectingVolumeManager*)_NativeInstance)->Overlaps(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2, *(gp_Pnt*)pp_thePnt3, theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}


