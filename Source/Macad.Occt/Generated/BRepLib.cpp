// Generated wrapper code for package BRepLib

#include "OcctPCH.h"
#include "BRepLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "TopoDS.h"
#include "GeomAbs.h"
#include "Geom2d.h"
#include "BRepTools.h"
#include "TopTools.h"
#include "gp.h"
#include "Adaptor3d.h"
#include "TopLoc.h"


//---------------------------------------------------------------------
//  Class  BRepLib
//---------------------------------------------------------------------

Macad::Occt::BRepLib::BRepLib()
    : Macad::Occt::BaseClass<::BRepLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib();
}

void Macad::Occt::BRepLib::Precision(double P)
{
    ::BRepLib::Precision(P);
}

double Macad::Occt::BRepLib::Precision()
{
    double _result = ::BRepLib::Precision();
    return _result;
}

void Macad::Occt::BRepLib::Plane(Macad::Occt::Geom_Plane^ P)
{
    ::BRepLib::Plane(Handle(::Geom_Plane)(P->NativeInstance));
}

Macad::Occt::Geom_Plane^ Macad::Occt::BRepLib::Plane()
{
    Handle(::Geom_Plane) _result = ::BRepLib::Plane();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Plane::CreateDowncasted(_result.get());
}

bool Macad::Occt::BRepLib::CheckSameRange(Macad::Occt::TopoDS_Edge^ E, double Confusion)
{
    bool _result = ::BRepLib::CheckSameRange(*(::TopoDS_Edge*)E->NativeInstance, Confusion);
    return _result;
}

bool Macad::Occt::BRepLib::CheckSameRange(Macad::Occt::TopoDS_Edge^ E)
{
    bool _result = ::BRepLib::CheckSameRange(*(::TopoDS_Edge*)E->NativeInstance, 9.9999999999999998E-13);
    return _result;
}

void Macad::Occt::BRepLib::SameRange(Macad::Occt::TopoDS_Edge^ E, double Tolerance)
{
    ::BRepLib::SameRange(*(::TopoDS_Edge*)E->NativeInstance, Tolerance);
}

void Macad::Occt::BRepLib::SameRange(Macad::Occt::TopoDS_Edge^ E)
{
    ::BRepLib::SameRange(*(::TopoDS_Edge*)E->NativeInstance, 1.0000000000000001E-5);
}

bool Macad::Occt::BRepLib::BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree, int MaxSegment)
{
    bool _result = ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, MaxDegree, MaxSegment);
    return _result;
}

bool Macad::Occt::BRepLib::BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree)
{
    bool _result = ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, MaxDegree, 0);
    return _result;
}

bool Macad::Occt::BRepLib::BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity)
{
    bool _result = ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, 14, 0);
    return _result;
}

bool Macad::Occt::BRepLib::BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance)
{
    bool _result = ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, Tolerance, GeomAbs_C1, 14, 0);
    return _result;
}

bool Macad::Occt::BRepLib::BuildCurve3d(Macad::Occt::TopoDS_Edge^ E)
{
    bool _result = ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, 1.0000000000000001E-5, GeomAbs_C1, 14, 0);
    return _result;
}

bool Macad::Occt::BRepLib::BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree, int MaxSegment)
{
    bool _result = ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, MaxDegree, MaxSegment);
    return _result;
}

bool Macad::Occt::BRepLib::BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree)
{
    bool _result = ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, MaxDegree, 0);
    return _result;
}

bool Macad::Occt::BRepLib::BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity)
{
    bool _result = ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, 14, 0);
    return _result;
}

bool Macad::Occt::BRepLib::BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance)
{
    bool _result = ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, GeomAbs_C1, 14, 0);
    return _result;
}

bool Macad::Occt::BRepLib::BuildCurves3d(Macad::Occt::TopoDS_Shape^ S)
{
    bool _result = ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

void Macad::Occt::BRepLib::BuildPCurveForEdgeOnPlane(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::TopoDS_Face^ theF)
{
    ::BRepLib::BuildPCurveForEdgeOnPlane(*(::TopoDS_Edge*)theE->NativeInstance, *(::TopoDS_Face*)theF->NativeInstance);
}

void Macad::Occt::BRepLib::BuildPCurveForEdgeOnPlane(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::TopoDS_Face^ theF, Macad::Occt::Geom2d_Curve^ aC2D, bool% bToUpdate)
{
    Handle(::Geom2d_Curve) h_aC2D = aC2D->NativeInstance;
    pin_ptr<bool> pp_bToUpdate = &bToUpdate;
    ::BRepLib::BuildPCurveForEdgeOnPlane(*(::TopoDS_Edge*)theE->NativeInstance, *(::TopoDS_Face*)theF->NativeInstance, h_aC2D, *(bool*)pp_bToUpdate);
    aC2D->NativeInstance = h_aC2D.get();
}

bool Macad::Occt::BRepLib::UpdateEdgeTol(Macad::Occt::TopoDS_Edge^ E, double MinToleranceRequest, double MaxToleranceToCheck)
{
    bool _result = ::BRepLib::UpdateEdgeTol(*(::TopoDS_Edge*)E->NativeInstance, MinToleranceRequest, MaxToleranceToCheck);
    return _result;
}

bool Macad::Occt::BRepLib::UpdateEdgeTolerance(Macad::Occt::TopoDS_Shape^ S, double MinToleranceRequest, double MaxToleranceToCheck)
{
    bool _result = ::BRepLib::UpdateEdgeTolerance(*(::TopoDS_Shape*)S->NativeInstance, MinToleranceRequest, MaxToleranceToCheck);
    return _result;
}

void Macad::Occt::BRepLib::SameParameter(Macad::Occt::TopoDS_Edge^ theEdge, double Tolerance)
{
    ::BRepLib::SameParameter(*(::TopoDS_Edge*)theEdge->NativeInstance, Tolerance);
}

void Macad::Occt::BRepLib::SameParameter(Macad::Occt::TopoDS_Edge^ theEdge)
{
    ::BRepLib::SameParameter(*(::TopoDS_Edge*)theEdge->NativeInstance, 1.0000000000000001E-5);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepLib::SameParameter(Macad::Occt::TopoDS_Edge^ theEdge, double theTolerance, double% theNewTol, bool IsUseOldEdge)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    pin_ptr<double> pp_theNewTol = &theNewTol;
    *_result = ::BRepLib::SameParameter(*(::TopoDS_Edge*)theEdge->NativeInstance, theTolerance, *(double*)pp_theNewTol, IsUseOldEdge);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

void Macad::Occt::BRepLib::SameParameter(Macad::Occt::TopoDS_Shape^ S, double Tolerance, bool forced)
{
    ::BRepLib::SameParameter(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, forced);
}

void Macad::Occt::BRepLib::SameParameter(Macad::Occt::TopoDS_Shape^ S, double Tolerance)
{
    ::BRepLib::SameParameter(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, false);
}

void Macad::Occt::BRepLib::SameParameter(Macad::Occt::TopoDS_Shape^ S)
{
    ::BRepLib::SameParameter(*(::TopoDS_Shape*)S->NativeInstance, 1.0000000000000001E-5, false);
}

void Macad::Occt::BRepLib::SameParameter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper, double Tolerance, bool forced)
{
    ::BRepLib::SameParameter(*(::TopoDS_Shape*)S->NativeInstance, *(::BRepTools_ReShape*)theReshaper->NativeInstance, Tolerance, forced);
}

void Macad::Occt::BRepLib::SameParameter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper, double Tolerance)
{
    ::BRepLib::SameParameter(*(::TopoDS_Shape*)S->NativeInstance, *(::BRepTools_ReShape*)theReshaper->NativeInstance, Tolerance, false);
}

void Macad::Occt::BRepLib::SameParameter(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper)
{
    ::BRepLib::SameParameter(*(::TopoDS_Shape*)S->NativeInstance, *(::BRepTools_ReShape*)theReshaper->NativeInstance, 1.0000000000000001E-5, false);
}

void Macad::Occt::BRepLib::UpdateTolerances(Macad::Occt::TopoDS_Shape^ S, bool verifyFaceTolerance)
{
    ::BRepLib::UpdateTolerances(*(::TopoDS_Shape*)S->NativeInstance, verifyFaceTolerance);
}

void Macad::Occt::BRepLib::UpdateTolerances(Macad::Occt::TopoDS_Shape^ S)
{
    ::BRepLib::UpdateTolerances(*(::TopoDS_Shape*)S->NativeInstance, false);
}

void Macad::Occt::BRepLib::UpdateTolerances(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper, bool verifyFaceTolerance)
{
    ::BRepLib::UpdateTolerances(*(::TopoDS_Shape*)S->NativeInstance, *(::BRepTools_ReShape*)theReshaper->NativeInstance, verifyFaceTolerance);
}

void Macad::Occt::BRepLib::UpdateTolerances(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::BRepTools_ReShape^ theReshaper)
{
    ::BRepLib::UpdateTolerances(*(::TopoDS_Shape*)S->NativeInstance, *(::BRepTools_ReShape*)theReshaper->NativeInstance, false);
}

void Macad::Occt::BRepLib::UpdateInnerTolerances(Macad::Occt::TopoDS_Shape^ S)
{
    ::BRepLib::UpdateInnerTolerances(*(::TopoDS_Shape*)S->NativeInstance);
}

bool Macad::Occt::BRepLib::OrientClosedSolid(Macad::Occt::TopoDS_Solid^ solid)
{
    bool _result = ::BRepLib::OrientClosedSolid(*(::TopoDS_Solid*)solid->NativeInstance);
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepLib::ContinuityOfFaces(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace1, Macad::Occt::TopoDS_Face^ theFace2, double theAngleTol)
{
    ::GeomAbs_Shape _result = ::BRepLib::ContinuityOfFaces(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace1->NativeInstance, *(::TopoDS_Face*)theFace2->NativeInstance, theAngleTol);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

void Macad::Occt::BRepLib::EncodeRegularity(Macad::Occt::TopoDS_Shape^ S, double TolAng)
{
    ::BRepLib::EncodeRegularity(*(::TopoDS_Shape*)S->NativeInstance, TolAng);
}

void Macad::Occt::BRepLib::EncodeRegularity(Macad::Occt::TopoDS_Shape^ S)
{
    ::BRepLib::EncodeRegularity(*(::TopoDS_Shape*)S->NativeInstance, 1.0E-10);
}

void Macad::Occt::BRepLib::EncodeRegularity(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ LE, double TolAng)
{
    ::BRepLib::EncodeRegularity(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)LE->NativeInstance, TolAng);
}

void Macad::Occt::BRepLib::EncodeRegularity(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ LE)
{
    ::BRepLib::EncodeRegularity(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)LE->NativeInstance, 1.0E-10);
}

void Macad::Occt::BRepLib::EncodeRegularity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, double TolAng)
{
    ::BRepLib::EncodeRegularity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, TolAng);
}

void Macad::Occt::BRepLib::EncodeRegularity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2)
{
    ::BRepLib::EncodeRegularity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, 1.0E-10);
}

void Macad::Occt::BRepLib::SortFaces(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ LF)
{
    ::BRepLib::SortFaces(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)LF->NativeInstance);
}

void Macad::Occt::BRepLib::ReverseSortFaces(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ LF)
{
    ::BRepLib::ReverseSortFaces(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)LF->NativeInstance);
}

bool Macad::Occt::BRepLib::EnsureNormalConsistency(Macad::Occt::TopoDS_Shape^ S, double theAngTol, bool ForceComputeNormals)
{
    bool _result = ::BRepLib::EnsureNormalConsistency(*(::TopoDS_Shape*)S->NativeInstance, theAngTol, ForceComputeNormals);
    return _result;
}

bool Macad::Occt::BRepLib::EnsureNormalConsistency(Macad::Occt::TopoDS_Shape^ S, double theAngTol)
{
    bool _result = ::BRepLib::EnsureNormalConsistency(*(::TopoDS_Shape*)S->NativeInstance, theAngTol, false);
    return _result;
}

bool Macad::Occt::BRepLib::EnsureNormalConsistency(Macad::Occt::TopoDS_Shape^ S)
{
    bool _result = ::BRepLib::EnsureNormalConsistency(*(::TopoDS_Shape*)S->NativeInstance, 0.001, false);
    return _result;
}

void Macad::Occt::BRepLib::UpdateDeflection(Macad::Occt::TopoDS_Shape^ S)
{
    ::BRepLib::UpdateDeflection(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepLib::BoundingVertex(Macad::Occt::TopoDS_ListOfShape^ theLV, Macad::Occt::Pnt% theNewCenter, double% theNewTol)
{
    pin_ptr<Macad::Occt::Pnt> pp_theNewCenter = &theNewCenter;
    pin_ptr<double> pp_theNewTol = &theNewTol;
    ::BRepLib::BoundingVertex(*(::TopoDS_ListOfShape*)theLV->NativeInstance, *(gp_Pnt*)pp_theNewCenter, *(double*)pp_theNewTol);
}

bool Macad::Occt::BRepLib::FindValidRange(Macad::Occt::Adaptor3d_Curve^ theCurve, double theTolE, double theParV1, Macad::Occt::Pnt thePntV1, double theTolV1, double theParV2, Macad::Occt::Pnt thePntV2, double theTolV2, double% theFirst, double% theLast)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePntV1 = &thePntV1;
    pin_ptr<Macad::Occt::Pnt> pp_thePntV2 = &thePntV2;
    pin_ptr<double> pp_theFirst = &theFirst;
    pin_ptr<double> pp_theLast = &theLast;
    bool _result = ::BRepLib::FindValidRange(*(::Adaptor3d_Curve*)theCurve->NativeInstance, theTolE, theParV1, *(gp_Pnt*)pp_thePntV1, theTolV1, theParV2, *(gp_Pnt*)pp_thePntV2, theTolV2, *(double*)pp_theFirst, *(double*)pp_theLast);
    return _result;
}

bool Macad::Occt::BRepLib::FindValidRange(Macad::Occt::TopoDS_Edge^ theEdge, double% theFirst, double% theLast)
{
    pin_ptr<double> pp_theFirst = &theFirst;
    pin_ptr<double> pp_theLast = &theLast;
    bool _result = ::BRepLib::FindValidRange(*(::TopoDS_Edge*)theEdge->NativeInstance, *(double*)pp_theFirst, *(double*)pp_theLast);
    return _result;
}

void Macad::Occt::BRepLib::ExtendFace(Macad::Occt::TopoDS_Face^ theF, double theExtVal, bool theExtUMin, bool theExtUMax, bool theExtVMin, bool theExtVMax, Macad::Occt::TopoDS_Face^ theFExtended)
{
    ::BRepLib::ExtendFace(*(::TopoDS_Face*)theF->NativeInstance, theExtVal, theExtUMin, theExtUMax, theExtVMin, theExtVMax, *(::TopoDS_Face*)theFExtended->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BRepLib_CheckCurveOnSurface
//---------------------------------------------------------------------

Macad::Occt::BRepLib_CheckCurveOnSurface::BRepLib_CheckCurveOnSurface()
    : Macad::Occt::BaseClass<::BRepLib_CheckCurveOnSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_CheckCurveOnSurface();
}

Macad::Occt::BRepLib_CheckCurveOnSurface::BRepLib_CheckCurveOnSurface(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace)
    : Macad::Occt::BaseClass<::BRepLib_CheckCurveOnSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_CheckCurveOnSurface(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance);
}

void Macad::Occt::BRepLib_CheckCurveOnSurface::Init(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace)
{
    ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->Init(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance);
}

void Macad::Occt::BRepLib_CheckCurveOnSurface::Perform()
{
    ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->Perform();
}

bool Macad::Occt::BRepLib_CheckCurveOnSurface::IsDone()
{
    bool _result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->IsDone();
    return _result;
}

void Macad::Occt::BRepLib_CheckCurveOnSurface::SetParallel(bool theIsParallel)
{
    ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->SetParallel(theIsParallel);
}

bool Macad::Occt::BRepLib_CheckCurveOnSurface::IsParallel()
{
    bool _result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->IsParallel();
    return _result;
}

int Macad::Occt::BRepLib_CheckCurveOnSurface::ErrorStatus()
{
    int _result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->ErrorStatus();
    return _result;
}

double Macad::Occt::BRepLib_CheckCurveOnSurface::MaxDistance()
{
    double _result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->MaxDistance();
    return _result;
}

double Macad::Occt::BRepLib_CheckCurveOnSurface::MaxParameter()
{
    double _result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->MaxParameter();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepLib_Command
//---------------------------------------------------------------------

bool Macad::Occt::BRepLib_Command::IsDone()
{
    bool _result = ((::BRepLib_Command*)_NativeInstance)->IsDone();
    return _result;
}

void Macad::Occt::BRepLib_Command::Check()
{
    ((::BRepLib_Command*)_NativeInstance)->Check();
}



//---------------------------------------------------------------------
//  Class  BRepLib_FindSurface
//---------------------------------------------------------------------

Macad::Occt::BRepLib_FindSurface::BRepLib_FindSurface()
    : Macad::Occt::BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FindSurface();
}

Macad::Occt::BRepLib_FindSurface::BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane, bool OnlyClosed)
    : Macad::Occt::BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FindSurface(*(::TopoDS_Shape*)S->NativeInstance, Tol, OnlyPlane, OnlyClosed);
}

Macad::Occt::BRepLib_FindSurface::BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane)
    : Macad::Occt::BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FindSurface(*(::TopoDS_Shape*)S->NativeInstance, Tol, OnlyPlane, false);
}

Macad::Occt::BRepLib_FindSurface::BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S, double Tol)
    : Macad::Occt::BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FindSurface(*(::TopoDS_Shape*)S->NativeInstance, Tol, false, false);
}

Macad::Occt::BRepLib_FindSurface::BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S)
    : Macad::Occt::BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FindSurface(*(::TopoDS_Shape*)S->NativeInstance, -1, false, false);
}

void Macad::Occt::BRepLib_FindSurface::Init(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane, bool OnlyClosed)
{
    ((::BRepLib_FindSurface*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, Tol, OnlyPlane, OnlyClosed);
}

void Macad::Occt::BRepLib_FindSurface::Init(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane)
{
    ((::BRepLib_FindSurface*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, Tol, OnlyPlane, false);
}

void Macad::Occt::BRepLib_FindSurface::Init(Macad::Occt::TopoDS_Shape^ S, double Tol)
{
    ((::BRepLib_FindSurface*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, Tol, false, false);
}

void Macad::Occt::BRepLib_FindSurface::Init(Macad::Occt::TopoDS_Shape^ S)
{
    ((::BRepLib_FindSurface*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, -1, false, false);
}

bool Macad::Occt::BRepLib_FindSurface::Found()
{
    bool _result = ((::BRepLib_FindSurface*)_NativeInstance)->Found();
    return _result;
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRepLib_FindSurface::Surface()
{
    Handle(::Geom_Surface) _result = ((::BRepLib_FindSurface*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

double Macad::Occt::BRepLib_FindSurface::Tolerance()
{
    double _result = ((::BRepLib_FindSurface*)_NativeInstance)->Tolerance();
    return _result;
}

double Macad::Occt::BRepLib_FindSurface::ToleranceReached()
{
    double _result = ((::BRepLib_FindSurface*)_NativeInstance)->ToleranceReached();
    return _result;
}

bool Macad::Occt::BRepLib_FindSurface::Existed()
{
    bool _result = ((::BRepLib_FindSurface*)_NativeInstance)->Existed();
    return _result;
}

Macad::Occt::TopLoc_Location^ Macad::Occt::BRepLib_FindSurface::Location()
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::BRepLib_FindSurface*)_NativeInstance)->Location();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_FuseEdges
//---------------------------------------------------------------------

Macad::Occt::BRepLib_FuseEdges::BRepLib_FuseEdges(Macad::Occt::TopoDS_Shape^ theShape, bool PerformNow)
    : Macad::Occt::BaseClass<::BRepLib_FuseEdges>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FuseEdges(*(::TopoDS_Shape*)theShape->NativeInstance, PerformNow);
}

Macad::Occt::BRepLib_FuseEdges::BRepLib_FuseEdges(Macad::Occt::TopoDS_Shape^ theShape)
    : Macad::Occt::BaseClass<::BRepLib_FuseEdges>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_FuseEdges(*(::TopoDS_Shape*)theShape->NativeInstance, false);
}

void Macad::Occt::BRepLib_FuseEdges::AvoidEdges(Macad::Occt::TopTools_IndexedMapOfShape^ theMapEdg)
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->AvoidEdges(*(::TopTools_IndexedMapOfShape*)theMapEdg->NativeInstance);
}

void Macad::Occt::BRepLib_FuseEdges::SetConcatBSpl(bool theConcatBSpl)
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->SetConcatBSpl(theConcatBSpl);
}

void Macad::Occt::BRepLib_FuseEdges::SetConcatBSpl()
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->SetConcatBSpl(true);
}

void Macad::Occt::BRepLib_FuseEdges::Edges(Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ theMapLstEdg)
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->Edges(*(::TopTools_DataMapOfIntegerListOfShape*)theMapLstEdg->NativeInstance);
}

void Macad::Occt::BRepLib_FuseEdges::ResultEdges(Macad::Occt::TopTools_DataMapOfIntegerShape^ theMapEdg)
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->ResultEdges(*(::TopTools_DataMapOfIntegerShape*)theMapEdg->NativeInstance);
}

void Macad::Occt::BRepLib_FuseEdges::Faces(Macad::Occt::TopTools_DataMapOfShapeShape^ theMapFac)
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->Faces(*(::TopTools_DataMapOfShapeShape*)theMapFac->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepLib_FuseEdges::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepLib_FuseEdges*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::BRepLib_FuseEdges::NbVertices()
{
    int _result = ((::BRepLib_FuseEdges*)_NativeInstance)->NbVertices();
    return _result;
}

void Macad::Occt::BRepLib_FuseEdges::Perform()
{
    ((::BRepLib_FuseEdges*)_NativeInstance)->Perform();
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeShape
//---------------------------------------------------------------------

void Macad::Occt::BRepLib_MakeShape::Build()
{
    ((::BRepLib_MakeShape*)_NativeInstance)->Build();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepLib_MakeShape::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepLib_MakeShape*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::BRepLib_ShapeModification Macad::Occt::BRepLib_MakeShape::FaceStatus(Macad::Occt::TopoDS_Face^ F)
{
    ::BRepLib_ShapeModification _result = ((::BRepLib_MakeShape*)_NativeInstance)->FaceStatus(*(::TopoDS_Face*)F->NativeInstance);
    return (Macad::Occt::BRepLib_ShapeModification)_result;
}

bool Macad::Occt::BRepLib_MakeShape::HasDescendants(Macad::Occt::TopoDS_Face^ F)
{
    bool _result = ((::BRepLib_MakeShape*)_NativeInstance)->HasDescendants(*(::TopoDS_Face*)F->NativeInstance);
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepLib_MakeShape::DescendantFaces(Macad::Occt::TopoDS_Face^ F)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepLib_MakeShape*)_NativeInstance)->DescendantFaces(*(::TopoDS_Face*)F->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

int Macad::Occt::BRepLib_MakeShape::NbSurfaces()
{
    int _result = ((::BRepLib_MakeShape*)_NativeInstance)->NbSurfaces();
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepLib_MakeShape::NewFaces(int I)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepLib_MakeShape*)_NativeInstance)->NewFaces(I);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepLib_MakeShape::FacesFromEdges(Macad::Occt::TopoDS_Edge^ E)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepLib_MakeShape*)_NativeInstance)->FacesFromEdges(*(::TopoDS_Edge*)E->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeEdge
//---------------------------------------------------------------------

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge()
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge();
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Lin^ L)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Lin*)L->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Lin^ L, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Lin*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Lin^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Lin*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Lin^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Lin*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Circ^ L)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Circ*)L->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Circ^ L, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Circ*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Circ^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Circ*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Circ^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Circ*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Elips^ L)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Elips*)L->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Elips^ L, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Elips*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Elips^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Elips*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Elips^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Elips*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Hypr^ L)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Hypr*)L->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Hypr^ L, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Hypr*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Hypr^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Hypr*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Hypr^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Hypr*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Parab^ L)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Parab*)L->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Parab^ L, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Parab*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Parab^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Parab*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::gp_Parab^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(*(::gp_Parab*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance));
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), p1, p2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom_Curve)(L->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), p1, p2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge(Handle(::Geom2d_Curve)(L->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom_Curve^ C)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance));
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, double p1, double p2)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), p1, p2);
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom_Curve)(C->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance));
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, double p1, double p2)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), p1, p2);
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
{
    ((::BRepLib_MakeEdge*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

Macad::Occt::BRepLib_EdgeError Macad::Occt::BRepLib_MakeEdge::Error()
{
    ::BRepLib_EdgeError _result = ((::BRepLib_MakeEdge*)_NativeInstance)->Error();
    return (Macad::Occt::BRepLib_EdgeError)_result;
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepLib_MakeEdge::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepLib_MakeEdge*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakeEdge::Vertex1()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakeEdge*)_NativeInstance)->Vertex1();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakeEdge::Vertex2()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakeEdge*)_NativeInstance)->Vertex2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeEdge2d
//---------------------------------------------------------------------

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Lin2d^ L)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Circ2d^ L)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Elips2d^ L)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Parab2d^ L)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance));
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), p1, p2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, p1, p2);
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeEdge2d(Handle(::Geom2d_Curve)(L->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

void Macad::Occt::BRepLib_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C)
{
    ((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance));
}

void Macad::Occt::BRepLib_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, double p1, double p2)
{
    ((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), p1, p2);
}

void Macad::Occt::BRepLib_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    ((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

void Macad::Occt::BRepLib_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
    ((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

void Macad::Occt::BRepLib_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    ((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, p1, p2);
}

void Macad::Occt::BRepLib_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
{
    ((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(Handle(::Geom2d_Curve)(C->NativeInstance), *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
}

Macad::Occt::BRepLib_EdgeError Macad::Occt::BRepLib_MakeEdge2d::Error()
{
    ::BRepLib_EdgeError _result = ((::BRepLib_MakeEdge2d*)_NativeInstance)->Error();
    return (Macad::Occt::BRepLib_EdgeError)_result;
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepLib_MakeEdge2d::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepLib_MakeEdge2d*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakeEdge2d::Vertex1()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakeEdge2d*)_NativeInstance)->Vertex1();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakeEdge2d::Vertex2()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakeEdge2d*)_NativeInstance)->Vertex2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeFace
//---------------------------------------------------------------------

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace()
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace();
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::Pln P)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pln> pp_P = &P;
    _NativeInstance = new ::BRepLib_MakeFace(*(gp_Pln*)pp_P);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Cylinder^ C)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cylinder*)C->NativeInstance);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Cone^ C)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cone*)C->NativeInstance);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Sphere^ S)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Sphere*)S->NativeInstance);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Torus^ C)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Torus*)C->NativeInstance);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::Geom_Surface^ S, double TolDegen)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(Handle(::Geom_Surface)(S->NativeInstance), TolDegen);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::Pln P, double UMin, double UMax, double VMin, double VMax)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pln> pp_P = &P;
    _NativeInstance = new ::BRepLib_MakeFace(*(gp_Pln*)pp_P, UMin, UMax, VMin, VMax);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Cylinder^ C, double UMin, double UMax, double VMin, double VMax)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cylinder*)C->NativeInstance, UMin, UMax, VMin, VMax);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Cone^ C, double UMin, double UMax, double VMin, double VMax)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cone*)C->NativeInstance, UMin, UMax, VMin, VMax);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Sphere^ S, double UMin, double UMax, double VMin, double VMax)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Sphere*)S->NativeInstance, UMin, UMax, VMin, VMax);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Torus^ C, double UMin, double UMax, double VMin, double VMax)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Torus*)C->NativeInstance, UMin, UMax, VMin, VMax);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, TolDegen);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::TopoDS_Wire^ W, bool OnlyPlane)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::TopoDS_Wire*)W->NativeInstance, OnlyPlane);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::TopoDS_Wire*)W->NativeInstance, false);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::Pln P, Macad::Occt::TopoDS_Wire^ W, bool Inside)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pln> pp_P = &P;
    _NativeInstance = new ::BRepLib_MakeFace(*(gp_Pln*)pp_P, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::Pln P, Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pln> pp_P = &P;
    _NativeInstance = new ::BRepLib_MakeFace(*(gp_Pln*)pp_P, *(::TopoDS_Wire*)W->NativeInstance, true);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Cylinder^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cylinder*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Cylinder^ C, Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cylinder*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Cone^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cone*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Cone^ C, Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Cone*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Sphere^ S, Macad::Occt::TopoDS_Wire^ W, bool Inside)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Sphere*)S->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Sphere^ S, Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Sphere*)S->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Torus^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Torus*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::gp_Torus^ C, Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::gp_Torus*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Wire^ W, bool Inside)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(Handle(::Geom_Surface)(S->NativeInstance), *(::TopoDS_Wire*)W->NativeInstance, true);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance);
}

void Macad::Occt::BRepLib_MakeFace::Init(Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepLib_MakeFace*)_NativeInstance)->Init(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepLib_MakeFace::Init(Macad::Occt::Geom_Surface^ S, bool Bound, double TolDegen)
{
    ((::BRepLib_MakeFace*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), Bound, TolDegen);
}

void Macad::Occt::BRepLib_MakeFace::Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen)
{
    ((::BRepLib_MakeFace*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, TolDegen);
}

void Macad::Occt::BRepLib_MakeFace::Add(Macad::Occt::TopoDS_Wire^ W)
{
    ((::BRepLib_MakeFace*)_NativeInstance)->Add(*(::TopoDS_Wire*)W->NativeInstance);
}

Macad::Occt::BRepLib_FaceError Macad::Occt::BRepLib_MakeFace::Error()
{
    ::BRepLib_FaceError _result = ((::BRepLib_MakeFace*)_NativeInstance)->Error();
    return (Macad::Occt::BRepLib_FaceError)_result;
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepLib_MakeFace::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepLib_MakeFace*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

bool Macad::Occt::BRepLib_MakeFace::IsDegenerated(Macad::Occt::Geom_Curve^ theCurve, double theMaxTol, double% theActTol)
{
    pin_ptr<double> pp_theActTol = &theActTol;
    bool _result = ::BRepLib_MakeFace::IsDegenerated(Handle(::Geom_Curve)(theCurve->NativeInstance), theMaxTol, *(double*)pp_theActTol);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakePolygon
//---------------------------------------------------------------------

Macad::Occt::BRepLib_MakePolygon::BRepLib_MakePolygon()
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakePolygon();
}

Macad::Occt::BRepLib_MakePolygon::BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    _NativeInstance = new ::BRepLib_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepLib_MakePolygon::BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, bool Close)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
    _NativeInstance = new ::BRepLib_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, Close);
}

Macad::Occt::BRepLib_MakePolygon::BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
    _NativeInstance = new ::BRepLib_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, false);
}

Macad::Occt::BRepLib_MakePolygon::BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4, bool Close)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
    pin_ptr<Macad::Occt::Pnt> pp_P4 = &P4;
    _NativeInstance = new ::BRepLib_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, *(gp_Pnt*)pp_P4, Close);
}

Macad::Occt::BRepLib_MakePolygon::BRepLib_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
    pin_ptr<Macad::Occt::Pnt> pp_P4 = &P4;
    _NativeInstance = new ::BRepLib_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, *(gp_Pnt*)pp_P4, false);
}

Macad::Occt::BRepLib_MakePolygon::BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepLib_MakePolygon::BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, bool Close)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, Close);
}

Macad::Occt::BRepLib_MakePolygon::BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, false);
}

Macad::Occt::BRepLib_MakePolygon::BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, Macad::Occt::TopoDS_Vertex^ V4, bool Close)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, *(::TopoDS_Vertex*)V4->NativeInstance, Close);
}

Macad::Occt::BRepLib_MakePolygon::BRepLib_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, Macad::Occt::TopoDS_Vertex^ V4)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, *(::TopoDS_Vertex*)V4->NativeInstance, false);
}

void Macad::Occt::BRepLib_MakePolygon::Add(Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::BRepLib_MakePolygon*)_NativeInstance)->Add(*(gp_Pnt*)pp_P);
}

void Macad::Occt::BRepLib_MakePolygon::Add(Macad::Occt::TopoDS_Vertex^ V)
{
    ((::BRepLib_MakePolygon*)_NativeInstance)->Add(*(::TopoDS_Vertex*)V->NativeInstance);
}

bool Macad::Occt::BRepLib_MakePolygon::Added()
{
    bool _result = ((::BRepLib_MakePolygon*)_NativeInstance)->Added();
    return _result;
}

void Macad::Occt::BRepLib_MakePolygon::Close()
{
    ((::BRepLib_MakePolygon*)_NativeInstance)->Close();
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakePolygon::FirstVertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakePolygon*)_NativeInstance)->FirstVertex();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakePolygon::LastVertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakePolygon*)_NativeInstance)->LastVertex();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepLib_MakePolygon::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepLib_MakePolygon*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepLib_MakePolygon::Wire()
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = (::TopoDS_Wire)((::BRepLib_MakePolygon*)_NativeInstance)->Wire();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeShell
//---------------------------------------------------------------------

Macad::Occt::BRepLib_MakeShell::BRepLib_MakeShell()
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeShell();
}

Macad::Occt::BRepLib_MakeShell::BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S, bool Segment)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeShell(Handle(::Geom_Surface)(S->NativeInstance), Segment);
}

Macad::Occt::BRepLib_MakeShell::BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeShell(Handle(::Geom_Surface)(S->NativeInstance), false);
}

Macad::Occt::BRepLib_MakeShell::BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeShell(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, Segment);
}

Macad::Occt::BRepLib_MakeShell::BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeShell(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, false);
}

void Macad::Occt::BRepLib_MakeShell::Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment)
{
    ((::BRepLib_MakeShell*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, Segment);
}

void Macad::Occt::BRepLib_MakeShell::Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax)
{
    ((::BRepLib_MakeShell*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance), UMin, UMax, VMin, VMax, false);
}

Macad::Occt::BRepLib_ShellError Macad::Occt::BRepLib_MakeShell::Error()
{
    ::BRepLib_ShellError _result = ((::BRepLib_MakeShell*)_NativeInstance)->Error();
    return (Macad::Occt::BRepLib_ShellError)_result;
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::BRepLib_MakeShell::Shell()
{
    ::TopoDS_Shell* _result = new ::TopoDS_Shell();
    *_result = (::TopoDS_Shell)((::BRepLib_MakeShell*)_NativeInstance)->Shell();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeSolid
//---------------------------------------------------------------------

Macad::Occt::BRepLib_MakeSolid::BRepLib_MakeSolid()
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid();
}

Macad::Occt::BRepLib_MakeSolid::BRepLib_MakeSolid(Macad::Occt::TopoDS_CompSolid^ S)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid(*(::TopoDS_CompSolid*)S->NativeInstance);
}

Macad::Occt::BRepLib_MakeSolid::BRepLib_MakeSolid(Macad::Occt::TopoDS_Shell^ S)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid(*(::TopoDS_Shell*)S->NativeInstance);
}

Macad::Occt::BRepLib_MakeSolid::BRepLib_MakeSolid(Macad::Occt::TopoDS_Shell^ S1, Macad::Occt::TopoDS_Shell^ S2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid(*(::TopoDS_Shell*)S1->NativeInstance, *(::TopoDS_Shell*)S2->NativeInstance);
}

Macad::Occt::BRepLib_MakeSolid::BRepLib_MakeSolid(Macad::Occt::TopoDS_Shell^ S1, Macad::Occt::TopoDS_Shell^ S2, Macad::Occt::TopoDS_Shell^ S3)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid(*(::TopoDS_Shell*)S1->NativeInstance, *(::TopoDS_Shell*)S2->NativeInstance, *(::TopoDS_Shell*)S3->NativeInstance);
}

Macad::Occt::BRepLib_MakeSolid::BRepLib_MakeSolid(Macad::Occt::TopoDS_Solid^ So)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid(*(::TopoDS_Solid*)So->NativeInstance);
}

Macad::Occt::BRepLib_MakeSolid::BRepLib_MakeSolid(Macad::Occt::TopoDS_Solid^ So, Macad::Occt::TopoDS_Shell^ S)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeSolid(*(::TopoDS_Solid*)So->NativeInstance, *(::TopoDS_Shell*)S->NativeInstance);
}

void Macad::Occt::BRepLib_MakeSolid::Add(Macad::Occt::TopoDS_Shell^ S)
{
    ((::BRepLib_MakeSolid*)_NativeInstance)->Add(*(::TopoDS_Shell*)S->NativeInstance);
}

Macad::Occt::TopoDS_Solid^ Macad::Occt::BRepLib_MakeSolid::Solid()
{
    ::TopoDS_Solid* _result = new ::TopoDS_Solid();
    *_result = (::TopoDS_Solid)((::BRepLib_MakeSolid*)_NativeInstance)->Solid();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Solid(_result);
}

Macad::Occt::BRepLib_ShapeModification Macad::Occt::BRepLib_MakeSolid::FaceStatus(Macad::Occt::TopoDS_Face^ F)
{
    ::BRepLib_ShapeModification _result = ((::BRepLib_MakeSolid*)_NativeInstance)->FaceStatus(*(::TopoDS_Face*)F->NativeInstance);
    return (Macad::Occt::BRepLib_ShapeModification)_result;
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeVertex
//---------------------------------------------------------------------

Macad::Occt::BRepLib_MakeVertex::BRepLib_MakeVertex(Macad::Occt::Pnt P)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::BRepLib_MakeVertex(*(gp_Pnt*)pp_P);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakeVertex::Vertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakeVertex*)_NativeInstance)->Vertex();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_MakeWire
//---------------------------------------------------------------------

Macad::Occt::BRepLib_MakeWire::BRepLib_MakeWire()
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire();
}

Macad::Occt::BRepLib_MakeWire::BRepLib_MakeWire(Macad::Occt::TopoDS_Edge^ E)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire(*(::TopoDS_Edge*)E->NativeInstance);
}

Macad::Occt::BRepLib_MakeWire::BRepLib_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance);
}

Macad::Occt::BRepLib_MakeWire::BRepLib_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Edge^ E3)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopoDS_Edge*)E3->NativeInstance);
}

Macad::Occt::BRepLib_MakeWire::BRepLib_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Edge^ E3, Macad::Occt::TopoDS_Edge^ E4)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopoDS_Edge*)E3->NativeInstance, *(::TopoDS_Edge*)E4->NativeInstance);
}

Macad::Occt::BRepLib_MakeWire::BRepLib_MakeWire(Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire(*(::TopoDS_Wire*)W->NativeInstance);
}

Macad::Occt::BRepLib_MakeWire::BRepLib_MakeWire(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Edge^ E)
    : Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_MakeWire(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepLib_MakeWire::Add(Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepLib_MakeWire*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepLib_MakeWire::Add(Macad::Occt::TopoDS_Wire^ W)
{
    ((::BRepLib_MakeWire*)_NativeInstance)->Add(*(::TopoDS_Wire*)W->NativeInstance);
}

void Macad::Occt::BRepLib_MakeWire::Add(Macad::Occt::TopTools_ListOfShape^ L)
{
    ((::BRepLib_MakeWire*)_NativeInstance)->Add(*(::TopTools_ListOfShape*)L->NativeInstance);
}

Macad::Occt::BRepLib_WireError Macad::Occt::BRepLib_MakeWire::Error()
{
    ::BRepLib_WireError _result = ((::BRepLib_MakeWire*)_NativeInstance)->Error();
    return (Macad::Occt::BRepLib_WireError)_result;
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepLib_MakeWire::Wire()
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = (::TopoDS_Wire)((::BRepLib_MakeWire*)_NativeInstance)->Wire();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepLib_MakeWire::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepLib_MakeWire*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakeWire::Vertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepLib_MakeWire*)_NativeInstance)->Vertex();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}



//---------------------------------------------------------------------
//  Class  BRepLib_PointCloudShape
//---------------------------------------------------------------------

Macad::Occt::BRepLib_PointCloudShape::BRepLib_PointCloudShape(Macad::Occt::TopoDS_Shape^ theShape, double theTol)
    : Macad::Occt::BaseClass<::BRepLib_PointCloudShape>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::BRepLib_PointCloudShape::BRepLib_PointCloudShape(Macad::Occt::TopoDS_Shape^ theShape)
    : Macad::Occt::BaseClass<::BRepLib_PointCloudShape>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::BRepLib_PointCloudShape::BRepLib_PointCloudShape()
    : Macad::Occt::BaseClass<::BRepLib_PointCloudShape>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepLib_PointCloudShape::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepLib_PointCloudShape*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepLib_PointCloudShape::SetShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    ((::BRepLib_PointCloudShape*)_NativeInstance)->SetShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

double Macad::Occt::BRepLib_PointCloudShape::Tolerance()
{
    double _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->Tolerance();
    return _result;
}

void Macad::Occt::BRepLib_PointCloudShape::SetTolerance(double theTol)
{
    ((::BRepLib_PointCloudShape*)_NativeInstance)->SetTolerance(theTol);
}

double Macad::Occt::BRepLib_PointCloudShape::GetDistance()
{
    double _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->GetDistance();
    return _result;
}

void Macad::Occt::BRepLib_PointCloudShape::SetDistance(double theDist)
{
    ((::BRepLib_PointCloudShape*)_NativeInstance)->SetDistance(theDist);
}

int Macad::Occt::BRepLib_PointCloudShape::NbPointsByDensity(double theDensity)
{
    int _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->NbPointsByDensity(theDensity);
    return _result;
}

int Macad::Occt::BRepLib_PointCloudShape::NbPointsByDensity()
{
    int _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->NbPointsByDensity(0.);
    return _result;
}

int Macad::Occt::BRepLib_PointCloudShape::NbPointsByTriangulation()
{
    int _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->NbPointsByTriangulation();
    return _result;
}

bool Macad::Occt::BRepLib_PointCloudShape::GeneratePointsByDensity(double theDensity)
{
    bool _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->GeneratePointsByDensity(theDensity);
    return _result;
}

bool Macad::Occt::BRepLib_PointCloudShape::GeneratePointsByDensity()
{
    bool _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->GeneratePointsByDensity(0.);
    return _result;
}

bool Macad::Occt::BRepLib_PointCloudShape::GeneratePointsByTriangulation()
{
    bool _result = ((::BRepLib_PointCloudShape*)_NativeInstance)->GeneratePointsByTriangulation();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepLib_ToolTriangulatedShape
//---------------------------------------------------------------------

Macad::Occt::BRepLib_ToolTriangulatedShape::BRepLib_ToolTriangulatedShape()
    : Macad::Occt::BaseClass<::BRepLib_ToolTriangulatedShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_ToolTriangulatedShape();
}



//---------------------------------------------------------------------
//  Class  BRepLib_ValidateEdge
//---------------------------------------------------------------------

Macad::Occt::BRepLib_ValidateEdge::BRepLib_ValidateEdge(Macad::Occt::Adaptor3d_Curve^ theReferenceCurve, Macad::Occt::Adaptor3d_CurveOnSurface^ theOtherCurve, bool theSameParameter)
    : Macad::Occt::BaseClass<::BRepLib_ValidateEdge>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepLib_ValidateEdge(Handle(::Adaptor3d_Curve)(theReferenceCurve->NativeInstance), Handle(::Adaptor3d_CurveOnSurface)(theOtherCurve->NativeInstance), theSameParameter);
}

void Macad::Occt::BRepLib_ValidateEdge::SetExactMethod(bool theIsExact)
{
    ((::BRepLib_ValidateEdge*)_NativeInstance)->SetExactMethod(theIsExact);
}

bool Macad::Occt::BRepLib_ValidateEdge::IsExactMethod()
{
    bool _result = ((::BRepLib_ValidateEdge*)_NativeInstance)->IsExactMethod();
    return _result;
}

void Macad::Occt::BRepLib_ValidateEdge::SetParallel(bool theIsMultiThread)
{
    ((::BRepLib_ValidateEdge*)_NativeInstance)->SetParallel(theIsMultiThread);
}

bool Macad::Occt::BRepLib_ValidateEdge::IsParallel()
{
    bool _result = ((::BRepLib_ValidateEdge*)_NativeInstance)->IsParallel();
    return _result;
}

void Macad::Occt::BRepLib_ValidateEdge::SetControlPointsNumber(int theControlPointsNumber)
{
    ((::BRepLib_ValidateEdge*)_NativeInstance)->SetControlPointsNumber(theControlPointsNumber);
}

void Macad::Occt::BRepLib_ValidateEdge::Process()
{
    ((::BRepLib_ValidateEdge*)_NativeInstance)->Process();
}

bool Macad::Occt::BRepLib_ValidateEdge::IsDone()
{
    bool _result = ((::BRepLib_ValidateEdge*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::BRepLib_ValidateEdge::CheckTolerance(double theToleranceToCheck)
{
    bool _result = ((::BRepLib_ValidateEdge*)_NativeInstance)->CheckTolerance(theToleranceToCheck);
    return _result;
}

double Macad::Occt::BRepLib_ValidateEdge::GetMaxDistance()
{
    double _result = ((::BRepLib_ValidateEdge*)_NativeInstance)->GetMaxDistance();
    return _result;
}

void Macad::Occt::BRepLib_ValidateEdge::UpdateTolerance(double% theToleranceToUpdate)
{
    pin_ptr<double> pp_theToleranceToUpdate = &theToleranceToUpdate;
    ((::BRepLib_ValidateEdge*)_NativeInstance)->UpdateTolerance(*(double*)pp_theToleranceToUpdate);
}


