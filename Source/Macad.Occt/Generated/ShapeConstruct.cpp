// Generated wrapper code for package ShapeConstruct

#include "OcctPCH.h"
#include "ShapeConstruct.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "GeomAbs.h"
#include "Geom2d.h"
#include "TopTools.h"
#include "TopoDS.h"
#include "TopAbs.h"
#include "gp.h"
#include "TColStd.h"
#include "TColgp.h"
#include "Message.h"
#include "ShapeAnalysis.h"


//---------------------------------------------------------------------
//  Class  ShapeConstruct
//---------------------------------------------------------------------

Macad::Occt::ShapeConstruct::ShapeConstruct()
    : Macad::Occt::BaseClass<::ShapeConstruct>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeConstruct();
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::ShapeConstruct::ConvertCurveToBSpline(Macad::Occt::Geom_Curve^ C3D, double First, double Last, double Tol3d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree)
{
    Handle(::Geom_BSplineCurve) _result = ::ShapeConstruct::ConvertCurveToBSpline(Handle(::Geom_Curve)(C3D->NativeInstance), First, Last, Tol3d, (::GeomAbs_Shape)Continuity, MaxSegments, MaxDegree);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::ShapeConstruct::ConvertCurveToBSpline(Macad::Occt::Geom2d_Curve^ C2D, double First, double Last, double Tol2d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree)
{
    Handle(::Geom2d_BSplineCurve) _result = ::ShapeConstruct::ConvertCurveToBSpline(Handle(::Geom2d_Curve)(C2D->NativeInstance), First, Last, Tol2d, (::GeomAbs_Shape)Continuity, MaxSegments, MaxDegree);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::ShapeConstruct::ConvertSurfaceToBSpline(Macad::Occt::Geom_Surface^ surf, double UF, double UL, double VF, double VL, double Tol3d, Macad::Occt::GeomAbs_Shape Continuity, int MaxSegments, int MaxDegree)
{
    Handle(::Geom_BSplineSurface) _result = ::ShapeConstruct::ConvertSurfaceToBSpline(Handle(::Geom_Surface)(surf->NativeInstance), UF, UL, VF, VL, Tol3d, (::GeomAbs_Shape)Continuity, MaxSegments, MaxDegree);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

bool Macad::Occt::ShapeConstruct::JoinPCurves(Macad::Occt::TopTools_HSequenceOfShape^ theEdges, Macad::Occt::TopoDS_Face^ theFace, Macad::Occt::TopoDS_Edge^ theEdge)
{
    bool _result = ::ShapeConstruct::JoinPCurves(Handle(::TopTools_HSequenceOfShape)(theEdges->NativeInstance), *(::TopoDS_Face*)theFace->NativeInstance, *(::TopoDS_Edge*)theEdge->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeConstruct::JoinCurves(Macad::Occt::Geom_Curve^ c3d1, Macad::Occt::Geom_Curve^ ac3d2, Macad::Occt::TopAbs_Orientation Orient1, Macad::Occt::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, Macad::Occt::Geom_Curve^ c3dOut, bool% isRev1, bool% isRev2)
{
    pin_ptr<double> pp_first1 = &first1;
    pin_ptr<double> pp_last1 = &last1;
    pin_ptr<double> pp_first2 = &first2;
    pin_ptr<double> pp_last2 = &last2;
    Handle(::Geom_Curve) h_c3dOut = c3dOut->NativeInstance;
    pin_ptr<bool> pp_isRev1 = &isRev1;
    pin_ptr<bool> pp_isRev2 = &isRev2;
    bool _result = ::ShapeConstruct::JoinCurves(Handle(::Geom_Curve)(c3d1->NativeInstance), Handle(::Geom_Curve)(ac3d2->NativeInstance), (::TopAbs_Orientation)Orient1, (::TopAbs_Orientation)Orient2, *(double*)pp_first1, *(double*)pp_last1, *(double*)pp_first2, *(double*)pp_last2, h_c3dOut, *(bool*)pp_isRev1, *(bool*)pp_isRev2);
    c3dOut->NativeInstance = h_c3dOut.get();
    return _result;
}

bool Macad::Occt::ShapeConstruct::JoinCurves(Macad::Occt::Geom2d_Curve^ c2d1, Macad::Occt::Geom2d_Curve^ ac2d2, Macad::Occt::TopAbs_Orientation Orient1, Macad::Occt::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, Macad::Occt::Geom2d_Curve^ c2dOut, bool% isRev1, bool% isRev2, bool isError)
{
    pin_ptr<double> pp_first1 = &first1;
    pin_ptr<double> pp_last1 = &last1;
    pin_ptr<double> pp_first2 = &first2;
    pin_ptr<double> pp_last2 = &last2;
    Handle(::Geom2d_Curve) h_c2dOut = c2dOut->NativeInstance;
    pin_ptr<bool> pp_isRev1 = &isRev1;
    pin_ptr<bool> pp_isRev2 = &isRev2;
    bool _result = ::ShapeConstruct::JoinCurves(Handle(::Geom2d_Curve)(c2d1->NativeInstance), Handle(::Geom2d_Curve)(ac2d2->NativeInstance), (::TopAbs_Orientation)Orient1, (::TopAbs_Orientation)Orient2, *(double*)pp_first1, *(double*)pp_last1, *(double*)pp_first2, *(double*)pp_last2, h_c2dOut, *(bool*)pp_isRev1, *(bool*)pp_isRev2, isError);
    c2dOut->NativeInstance = h_c2dOut.get();
    return _result;
}

bool Macad::Occt::ShapeConstruct::JoinCurves(Macad::Occt::Geom2d_Curve^ c2d1, Macad::Occt::Geom2d_Curve^ ac2d2, Macad::Occt::TopAbs_Orientation Orient1, Macad::Occt::TopAbs_Orientation Orient2, double% first1, double% last1, double% first2, double% last2, Macad::Occt::Geom2d_Curve^ c2dOut, bool% isRev1, bool% isRev2)
{
    pin_ptr<double> pp_first1 = &first1;
    pin_ptr<double> pp_last1 = &last1;
    pin_ptr<double> pp_first2 = &first2;
    pin_ptr<double> pp_last2 = &last2;
    Handle(::Geom2d_Curve) h_c2dOut = c2dOut->NativeInstance;
    pin_ptr<bool> pp_isRev1 = &isRev1;
    pin_ptr<bool> pp_isRev2 = &isRev2;
    bool _result = ::ShapeConstruct::JoinCurves(Handle(::Geom2d_Curve)(c2d1->NativeInstance), Handle(::Geom2d_Curve)(ac2d2->NativeInstance), (::TopAbs_Orientation)Orient1, (::TopAbs_Orientation)Orient2, *(double*)pp_first1, *(double*)pp_last1, *(double*)pp_first2, *(double*)pp_last2, h_c2dOut, *(bool*)pp_isRev1, *(bool*)pp_isRev2, false);
    c2dOut->NativeInstance = h_c2dOut.get();
    return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeConstruct_Curve
//---------------------------------------------------------------------

Macad::Occt::ShapeConstruct_Curve::ShapeConstruct_Curve()
    : Macad::Occt::BaseClass<::ShapeConstruct_Curve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeConstruct_Curve();
}

bool Macad::Occt::ShapeConstruct_Curve::AdjustCurve(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool take1, bool take2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurve(Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, take1, take2);
    return _result;
}

bool Macad::Occt::ShapeConstruct_Curve::AdjustCurve(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, bool take1)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurve(Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, take1, true);
    return _result;
}

bool Macad::Occt::ShapeConstruct_Curve::AdjustCurve(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurve(Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, true, true);
    return _result;
}

bool Macad::Occt::ShapeConstruct_Curve::AdjustCurveSegment(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double U1, double U2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurveSegment(Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, U1, U2);
    return _result;
}

bool Macad::Occt::ShapeConstruct_Curve::AdjustCurve2d(Macad::Occt::Geom2d_Curve^ C2D, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool take1, bool take2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurve2d(Handle(::Geom2d_Curve)(C2D->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, take1, take2);
    return _result;
}

bool Macad::Occt::ShapeConstruct_Curve::AdjustCurve2d(Macad::Occt::Geom2d_Curve^ C2D, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, bool take1)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurve2d(Handle(::Geom2d_Curve)(C2D->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, take1, true);
    return _result;
}

bool Macad::Occt::ShapeConstruct_Curve::AdjustCurve2d(Macad::Occt::Geom2d_Curve^ C2D, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
    bool _result = ((::ShapeConstruct_Curve*)_NativeInstance)->AdjustCurve2d(Handle(::Geom2d_Curve)(C2D->NativeInstance), *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, true, true);
    return _result;
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::ShapeConstruct_Curve::ConvertToBSpline(Macad::Occt::Geom_Curve^ C, double first, double last, double prec)
{
    Handle(::Geom_BSplineCurve) _result = ((::ShapeConstruct_Curve*)_NativeInstance)->ConvertToBSpline(Handle(::Geom_Curve)(C->NativeInstance), first, last, prec);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::ShapeConstruct_Curve::ConvertToBSpline(Macad::Occt::Geom2d_Curve^ C, double first, double last, double prec)
{
    Handle(::Geom2d_BSplineCurve) _result = ((::ShapeConstruct_Curve*)_NativeInstance)->ConvertToBSpline(Handle(::Geom2d_Curve)(C->NativeInstance), first, last, prec);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

bool Macad::Occt::ShapeConstruct_Curve::FixKnots(Macad::Occt::TColStd_HArray1OfReal^ knots)
{
    Handle(::TColStd_HArray1OfReal) h_knots = knots->NativeInstance;
    bool _result = ::ShapeConstruct_Curve::FixKnots(h_knots);
    knots->NativeInstance = h_knots.get();
    return _result;
}

bool Macad::Occt::ShapeConstruct_Curve::FixKnots(Macad::Occt::TColStd_Array1OfReal^ knots)
{
    bool _result = ::ShapeConstruct_Curve::FixKnots(*(::TColStd_Array1OfReal*)knots->NativeInstance);
    return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeConstruct_MakeTriangulation
//---------------------------------------------------------------------

Macad::Occt::ShapeConstruct_MakeTriangulation::ShapeConstruct_MakeTriangulation(Macad::Occt::TColgp_Array1OfPnt^ pnts, double prec)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeConstruct_MakeTriangulation(*(::TColgp_Array1OfPnt*)pnts->NativeInstance, prec);
}

Macad::Occt::ShapeConstruct_MakeTriangulation::ShapeConstruct_MakeTriangulation(Macad::Occt::TColgp_Array1OfPnt^ pnts)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeConstruct_MakeTriangulation(*(::TColgp_Array1OfPnt*)pnts->NativeInstance, 0.);
}

Macad::Occt::ShapeConstruct_MakeTriangulation::ShapeConstruct_MakeTriangulation(Macad::Occt::TopoDS_Wire^ wire, double prec)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeConstruct_MakeTriangulation(*(::TopoDS_Wire*)wire->NativeInstance, prec);
}

Macad::Occt::ShapeConstruct_MakeTriangulation::ShapeConstruct_MakeTriangulation(Macad::Occt::TopoDS_Wire^ wire)
    : Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeConstruct_MakeTriangulation(*(::TopoDS_Wire*)wire->NativeInstance, 0.);
}

void Macad::Occt::ShapeConstruct_MakeTriangulation::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
    ((::ShapeConstruct_MakeTriangulation*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::ShapeConstruct_MakeTriangulation::Build()
{
    ((::ShapeConstruct_MakeTriangulation*)_NativeInstance)->Build(::Message_ProgressRange());
}

bool Macad::Occt::ShapeConstruct_MakeTriangulation::IsDone()
{
    bool _result = ((::ShapeConstruct_MakeTriangulation*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeConstruct_ProjectCurveOnSurface
//---------------------------------------------------------------------

Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::ShapeConstruct_ProjectCurveOnSurface()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeConstruct_ProjectCurveOnSurface();
}

void Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::Init(Macad::Occt::Geom_Surface^ surf, double preci)
{
    ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->Init(Handle(::Geom_Surface)(surf->NativeInstance), preci);
}

void Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::Init(Macad::Occt::ShapeAnalysis_Surface^ surf, double preci)
{
    ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->Init(Handle(::ShapeAnalysis_Surface)(surf->NativeInstance), preci);
}

void Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::SetSurface(Macad::Occt::Geom_Surface^ surf)
{
    ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->SetSurface(Handle(::Geom_Surface)(surf->NativeInstance));
}

void Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::SetSurface(Macad::Occt::ShapeAnalysis_Surface^ surf)
{
    ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->SetSurface(Handle(::ShapeAnalysis_Surface)(surf->NativeInstance));
}

void Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::SetPrecision(double preci)
{
    ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->SetPrecision(preci);
}

bool Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::Perform(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, double TolFirst, double TolLast)
{
    Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
    Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
    bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->Perform(h_c3d, First, Last, h_c2d, TolFirst, TolLast);
    c3d->NativeInstance = h_c3d.get();
    c2d->NativeInstance = h_c2d.get();
    return _result;
}

bool Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::Perform(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, double TolFirst)
{
    Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
    Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
    bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->Perform(h_c3d, First, Last, h_c2d, TolFirst, -1);
    c3d->NativeInstance = h_c3d.get();
    c2d->NativeInstance = h_c2d.get();
    return _result;
}

bool Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::Perform(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d)
{
    Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
    Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
    bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->Perform(h_c3d, First, Last, h_c2d, -1, -1);
    c3d->NativeInstance = h_c3d.get();
    c2d->NativeInstance = h_c2d.get();
    return _result;
}

bool Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::PerformByProjLib(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, Macad::Occt::GeomAbs_Shape continuity, int maxdeg, int nbinterval)
{
    Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
    Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
    bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->PerformByProjLib(h_c3d, First, Last, h_c2d, (::GeomAbs_Shape)continuity, maxdeg, nbinterval);
    c3d->NativeInstance = h_c3d.get();
    c2d->NativeInstance = h_c2d.get();
    return _result;
}

bool Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::PerformByProjLib(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, Macad::Occt::GeomAbs_Shape continuity, int maxdeg)
{
    Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
    Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
    bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->PerformByProjLib(h_c3d, First, Last, h_c2d, (::GeomAbs_Shape)continuity, maxdeg, -1);
    c3d->NativeInstance = h_c3d.get();
    c2d->NativeInstance = h_c2d.get();
    return _result;
}

bool Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::PerformByProjLib(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d, Macad::Occt::GeomAbs_Shape continuity)
{
    Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
    Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
    bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->PerformByProjLib(h_c3d, First, Last, h_c2d, (::GeomAbs_Shape)continuity, 12, -1);
    c3d->NativeInstance = h_c3d.get();
    c2d->NativeInstance = h_c2d.get();
    return _result;
}

bool Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::PerformByProjLib(Macad::Occt::Geom_Curve^ c3d, double First, double Last, Macad::Occt::Geom2d_Curve^ c2d)
{
    Handle(::Geom_Curve) h_c3d = c3d->NativeInstance;
    Handle(::Geom2d_Curve) h_c2d = c2d->NativeInstance;
    bool _result = ((::ShapeConstruct_ProjectCurveOnSurface*)_NativeInstance)->PerformByProjLib(h_c3d, First, Last, h_c2d, GeomAbs_C1, 12, -1);
    c3d->NativeInstance = h_c3d.get();
    c2d->NativeInstance = h_c2d.get();
    return _result;
}

Macad::Occt::ShapeConstruct_ProjectCurveOnSurface^ Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::CreateDowncasted(::ShapeConstruct_ProjectCurveOnSurface* instance)
{
    return gcnew Macad::Occt::ShapeConstruct_ProjectCurveOnSurface( instance );
}


