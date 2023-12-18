// Generated wrapper code for package ShapeBuild

#include "OcctPCH.h"
#include "ShapeBuild.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "TopoDS.h"
#include "TopLoc.h"
#include "Geom2d.h"
#include "gp.h"
#include "TopAbs.h"


//---------------------------------------------------------------------
//  Class  ShapeBuild
//---------------------------------------------------------------------

Macad::Occt::ShapeBuild::ShapeBuild()
    : Macad::Occt::BaseClass<::ShapeBuild>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeBuild();
}

Macad::Occt::Geom_Plane^ Macad::Occt::ShapeBuild::PlaneXOY()
{
    Handle(::Geom_Plane) _result = ::ShapeBuild::PlaneXOY();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Plane::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  ShapeBuild_Edge
//---------------------------------------------------------------------

Macad::Occt::ShapeBuild_Edge::ShapeBuild_Edge()
    : Macad::Occt::BaseClass<::ShapeBuild_Edge>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeBuild_Edge();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::ShapeBuild_Edge::CopyReplaceVertices(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::ShapeBuild_Edge*)_NativeInstance)->CopyReplaceVertices(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

void Macad::Occt::ShapeBuild_Edge::CopyRanges(Macad::Occt::TopoDS_Edge^ toedge, Macad::Occt::TopoDS_Edge^ fromedge, double alpha, double beta)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->CopyRanges(*(::TopoDS_Edge*)toedge->NativeInstance, *(::TopoDS_Edge*)fromedge->NativeInstance, alpha, beta);
}

void Macad::Occt::ShapeBuild_Edge::CopyRanges(Macad::Occt::TopoDS_Edge^ toedge, Macad::Occt::TopoDS_Edge^ fromedge, double alpha)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->CopyRanges(*(::TopoDS_Edge*)toedge->NativeInstance, *(::TopoDS_Edge*)fromedge->NativeInstance, alpha, 1);
}

void Macad::Occt::ShapeBuild_Edge::CopyRanges(Macad::Occt::TopoDS_Edge^ toedge, Macad::Occt::TopoDS_Edge^ fromedge)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->CopyRanges(*(::TopoDS_Edge*)toedge->NativeInstance, *(::TopoDS_Edge*)fromedge->NativeInstance, 0.0, 1);
}

void Macad::Occt::ShapeBuild_Edge::SetRange3d(Macad::Occt::TopoDS_Edge^ edge, double first, double last)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->SetRange3d(*(::TopoDS_Edge*)edge->NativeInstance, first, last);
}

void Macad::Occt::ShapeBuild_Edge::CopyPCurves(Macad::Occt::TopoDS_Edge^ toedge, Macad::Occt::TopoDS_Edge^ fromedge)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->CopyPCurves(*(::TopoDS_Edge*)toedge->NativeInstance, *(::TopoDS_Edge*)fromedge->NativeInstance);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::ShapeBuild_Edge::Copy(Macad::Occt::TopoDS_Edge^ edge, bool sharepcurves)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::ShapeBuild_Edge*)_NativeInstance)->Copy(*(::TopoDS_Edge*)edge->NativeInstance, sharepcurves);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::ShapeBuild_Edge::Copy(Macad::Occt::TopoDS_Edge^ edge)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::ShapeBuild_Edge*)_NativeInstance)->Copy(*(::TopoDS_Edge*)edge->NativeInstance, true);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

void Macad::Occt::ShapeBuild_Edge::RemovePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->RemovePCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
}

void Macad::Occt::ShapeBuild_Edge::RemovePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surf)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->RemovePCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surf->NativeInstance));
}

void Macad::Occt::ShapeBuild_Edge::RemovePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surf, Macad::Occt::TopLoc_Location^ loc)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->RemovePCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surf->NativeInstance), *(::TopLoc_Location*)loc->NativeInstance);
}

void Macad::Occt::ShapeBuild_Edge::ReplacePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom2d_Curve^ pcurve, Macad::Occt::TopoDS_Face^ face)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->ReplacePCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom2d_Curve)(pcurve->NativeInstance), *(::TopoDS_Face*)face->NativeInstance);
}

bool Macad::Occt::ShapeBuild_Edge::ReassignPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ old, Macad::Occt::TopoDS_Face^ sub)
{
    bool _result = ((::ShapeBuild_Edge*)_NativeInstance)->ReassignPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)old->NativeInstance, *(::TopoDS_Face*)sub->NativeInstance);
    return _result;
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::ShapeBuild_Edge::TransformPCurve(Macad::Occt::Geom2d_Curve^ pcurve, Macad::Occt::Trsf2d trans, double uFact, double% aFirst, double% aLast)
{
    pin_ptr<Macad::Occt::Trsf2d> pp_trans = &trans;
    pin_ptr<double> pp_aFirst = &aFirst;
    pin_ptr<double> pp_aLast = &aLast;
    Handle(::Geom2d_Curve) _result = ((::ShapeBuild_Edge*)_NativeInstance)->TransformPCurve(Handle(::Geom2d_Curve)(pcurve->NativeInstance), *(gp_Trsf2d*)pp_trans, uFact, *(double*)pp_aFirst, *(double*)pp_aLast);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::ShapeBuild_Edge::RemoveCurve3d(Macad::Occt::TopoDS_Edge^ edge)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->RemoveCurve3d(*(::TopoDS_Edge*)edge->NativeInstance);
}

bool Macad::Occt::ShapeBuild_Edge::BuildCurve3d(Macad::Occt::TopoDS_Edge^ edge)
{
    bool _result = ((::ShapeBuild_Edge*)_NativeInstance)->BuildCurve3d(*(::TopoDS_Edge*)edge->NativeInstance);
    return _result;
}

void Macad::Occt::ShapeBuild_Edge::MakeEdge(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Curve^ curve, Macad::Occt::TopLoc_Location^ L)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Curve)(curve->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
}

void Macad::Occt::ShapeBuild_Edge::MakeEdge(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Curve^ curve, Macad::Occt::TopLoc_Location^ L, double p1, double p2)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Curve)(curve->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, p1, p2);
}

void Macad::Occt::ShapeBuild_Edge::MakeEdge(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom2d_Curve^ pcurve, Macad::Occt::TopoDS_Face^ face)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom2d_Curve)(pcurve->NativeInstance), *(::TopoDS_Face*)face->NativeInstance);
}

void Macad::Occt::ShapeBuild_Edge::MakeEdge(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom2d_Curve^ pcurve, Macad::Occt::TopoDS_Face^ face, double p1, double p2)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom2d_Curve)(pcurve->NativeInstance), *(::TopoDS_Face*)face->NativeInstance, p1, p2);
}

void Macad::Occt::ShapeBuild_Edge::MakeEdge(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom2d_Curve^ pcurve, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom2d_Curve)(pcurve->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance);
}

void Macad::Occt::ShapeBuild_Edge::MakeEdge(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom2d_Curve^ pcurve, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double p1, double p2)
{
    ((::ShapeBuild_Edge*)_NativeInstance)->MakeEdge(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom2d_Curve)(pcurve->NativeInstance), Handle(::Geom_Surface)(S->NativeInstance), *(::TopLoc_Location*)L->NativeInstance, p1, p2);
}



//---------------------------------------------------------------------
//  Class  ShapeBuild_ReShape
//---------------------------------------------------------------------

Macad::Occt::ShapeBuild_ReShape::ShapeBuild_ReShape()
    : Macad::Occt::BRepTools_ReShape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeBuild_ReShape();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeBuild_ReShape::Apply(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopAbs_ShapeEnum until, int buildmode)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::ShapeBuild_ReShape*)_NativeInstance)->Apply(*(::TopoDS_Shape*)shape->NativeInstance, (::TopAbs_ShapeEnum)until, buildmode);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeBuild_ReShape::Apply(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopAbs_ShapeEnum until)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::ShapeBuild_ReShape*)_NativeInstance)->Apply(*(::TopoDS_Shape*)shape->NativeInstance, (::TopAbs_ShapeEnum)until);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeBuild_ReShape::Apply(Macad::Occt::TopoDS_Shape^ shape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::ShapeBuild_ReShape*)_NativeInstance)->Apply(*(::TopoDS_Shape*)shape->NativeInstance, TopAbs_SHAPE);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::ShapeBuild_ReShape::Status(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newsh, bool last)
{
    int _result = ((::ShapeBuild_ReShape*)_NativeInstance)->Status(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Shape*)newsh->NativeInstance, last);
    return _result;
}

int Macad::Occt::ShapeBuild_ReShape::Status(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Shape^ newsh)
{
    int _result = ((::ShapeBuild_ReShape*)_NativeInstance)->Status(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Shape*)newsh->NativeInstance, false);
    return _result;
}

Macad::Occt::ShapeBuild_ReShape^ Macad::Occt::ShapeBuild_ReShape::CreateDowncasted(::ShapeBuild_ReShape* instance)
{
    return gcnew Macad::Occt::ShapeBuild_ReShape( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeBuild_Vertex
//---------------------------------------------------------------------

Macad::Occt::ShapeBuild_Vertex::ShapeBuild_Vertex()
    : Macad::Occt::BaseClass<::ShapeBuild_Vertex>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeBuild_Vertex();
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeBuild_Vertex::CombineVertex(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double tolFactor)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::ShapeBuild_Vertex*)_NativeInstance)->CombineVertex(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, tolFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeBuild_Vertex::CombineVertex(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::ShapeBuild_Vertex*)_NativeInstance)->CombineVertex(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, 1.0001);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeBuild_Vertex::CombineVertex(Macad::Occt::Pnt pnt1, Macad::Occt::Pnt pnt2, double tol1, double tol2, double tolFactor)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    pin_ptr<Macad::Occt::Pnt> pp_pnt1 = &pnt1;
    pin_ptr<Macad::Occt::Pnt> pp_pnt2 = &pnt2;
    *_result = ((::ShapeBuild_Vertex*)_NativeInstance)->CombineVertex(*(gp_Pnt*)pp_pnt1, *(gp_Pnt*)pp_pnt2, tol1, tol2, tolFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeBuild_Vertex::CombineVertex(Macad::Occt::Pnt pnt1, Macad::Occt::Pnt pnt2, double tol1, double tol2)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    pin_ptr<Macad::Occt::Pnt> pp_pnt1 = &pnt1;
    pin_ptr<Macad::Occt::Pnt> pp_pnt2 = &pnt2;
    *_result = ((::ShapeBuild_Vertex*)_NativeInstance)->CombineVertex(*(gp_Pnt*)pp_pnt1, *(gp_Pnt*)pp_pnt2, tol1, tol2, 1.0001);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}


