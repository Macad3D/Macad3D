// Generated wrapper code for package BRepLib

#include "OcctPCH.h"
#include "BRepLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "BRepLib.h"
#include "Standard.h"
#include "TopoDS.h"
#include "TopTools.h"
#include "gp.h"
#include "Geom.h"
#include "Geom2d.h"
#include "NCollection.h"
#include "TopLoc.h"
#include "GeomAbs.h"
#include "BRepTools.h"
#include "Adaptor3d.h"


//---------------------------------------------------------------------
//  Class  BRepLib_Command
//---------------------------------------------------------------------

Macad::Occt::BRepLib_Command::BRepLib_Command(Macad::Occt::BRepLib_Command^ parameter1)
	: BaseClass<::BRepLib_Command>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_Command(*(::BRepLib_Command*)parameter1->NativeInstance);
}

bool Macad::Occt::BRepLib_Command::IsDone()
{
	return ((::BRepLib_Command*)_NativeInstance)->IsDone();
}

void Macad::Occt::BRepLib_Command::Check()
{
	((::BRepLib_Command*)_NativeInstance)->Check();
}




//---------------------------------------------------------------------
//  Class  BRepLib_MakeShape
//---------------------------------------------------------------------

Macad::Occt::BRepLib_MakeShape::BRepLib_MakeShape(Macad::Occt::BRepLib_MakeShape^ parameter1)
	: Macad::Occt::BRepLib_Command(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_MakeShape(*(::BRepLib_MakeShape*)parameter1->NativeInstance);
}

void Macad::Occt::BRepLib_MakeShape::Build()
{
	((::BRepLib_MakeShape*)_NativeInstance)->Build();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepLib_MakeShape::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepLib_MakeShape*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::BRepLib_ShapeModification Macad::Occt::BRepLib_MakeShape::FaceStatus(Macad::Occt::TopoDS_Face^ F)
{
	return (Macad::Occt::BRepLib_ShapeModification)((::BRepLib_MakeShape*)_NativeInstance)->FaceStatus(*(::TopoDS_Face*)F->NativeInstance);
}

bool Macad::Occt::BRepLib_MakeShape::HasDescendants(Macad::Occt::TopoDS_Face^ F)
{
	return ((::BRepLib_MakeShape*)_NativeInstance)->HasDescendants(*(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepLib_MakeShape::DescendantFaces(Macad::Occt::TopoDS_Face^ F)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepLib_MakeShape*)_NativeInstance)->DescendantFaces(*(::TopoDS_Face*)F->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

int Macad::Occt::BRepLib_MakeShape::NbSurfaces()
{
	return ((::BRepLib_MakeShape*)_NativeInstance)->NbSurfaces();
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepLib_MakeShape::NewFaces(int I)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepLib_MakeShape*)_NativeInstance)->NewFaces(I);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepLib_MakeShape::FacesFromEdges(Macad::Occt::TopoDS_Edge^ E)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepLib_MakeShape*)_NativeInstance)->FacesFromEdges(*(::TopoDS_Edge*)E->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
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

Macad::Occt::BRepLib_MakeVertex::BRepLib_MakeVertex(Macad::Occt::BRepLib_MakeVertex^ parameter1)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_MakeVertex(*(::BRepLib_MakeVertex*)parameter1->NativeInstance);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakeVertex::Vertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepLib_MakeVertex*)_NativeInstance)->Vertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
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
	Handle(::Geom_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeEdge(h_L);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, double p1, double p2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeEdge(h_L, p1, p2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_L = L->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepLib_MakeEdge(h_L, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeEdge(h_L, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_L = L->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepLib_MakeEdge(h_L, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeEdge(h_L, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeEdge(h_L, h_S);
	L->NativeInstance = h_L.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, double p1, double p2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeEdge(h_L, h_S, p1, p2);
	L->NativeInstance = h_L.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepLib_MakeEdge(h_L, h_S, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	L->NativeInstance = h_L.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeEdge(h_L, h_S, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
	L->NativeInstance = h_L.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepLib_MakeEdge(h_L, h_S, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
	L->NativeInstance = h_L.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeEdge(h_L, h_S, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
	L->NativeInstance = h_L.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_MakeEdge::BRepLib_MakeEdge(Macad::Occt::BRepLib_MakeEdge^ parameter1)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_MakeEdge(*(::BRepLib_MakeEdge*)parameter1->NativeInstance);
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRepLib_MakeEdge*)_NativeInstance)->Init(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, double p1, double p2)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRepLib_MakeEdge*)_NativeInstance)->Init(h_C, p1, p2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::BRepLib_MakeEdge*)_NativeInstance)->Init(h_C, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRepLib_MakeEdge*)_NativeInstance)->Init(h_C, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::BRepLib_MakeEdge*)_NativeInstance)->Init(h_C, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRepLib_MakeEdge*)_NativeInstance)->Init(h_C, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepLib_MakeEdge*)_NativeInstance)->Init(h_C, h_S);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, double p1, double p2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepLib_MakeEdge*)_NativeInstance)->Init(h_C, h_S, p1, p2);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::BRepLib_MakeEdge*)_NativeInstance)->Init(h_C, h_S, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepLib_MakeEdge*)_NativeInstance)->Init(h_C, h_S, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::BRepLib_MakeEdge*)_NativeInstance)->Init(h_C, h_S, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepLib_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepLib_MakeEdge*)_NativeInstance)->Init(h_C, h_S, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_EdgeError Macad::Occt::BRepLib_MakeEdge::Error()
{
	return (Macad::Occt::BRepLib_EdgeError)((::BRepLib_MakeEdge*)_NativeInstance)->Error();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepLib_MakeEdge::Edge()
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepLib_MakeEdge*)_NativeInstance)->Edge();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakeEdge::Vertex1()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepLib_MakeEdge*)_NativeInstance)->Vertex1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakeEdge::Vertex2()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepLib_MakeEdge*)_NativeInstance)->Vertex2();
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
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeEdge2d(h_L);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, double p1, double p2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeEdge2d(h_L, p1, p2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::BRepLib_MakeEdge2d(h_L, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeEdge2d(h_L, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::BRepLib_MakeEdge2d(h_L, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, p1, p2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeEdge2d(h_L, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepLib_MakeEdge2d::BRepLib_MakeEdge2d(Macad::Occt::BRepLib_MakeEdge2d^ parameter1)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_MakeEdge2d(*(::BRepLib_MakeEdge2d*)parameter1->NativeInstance);
}

void Macad::Occt::BRepLib_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepLib_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, double p1, double p2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(h_C, p1, p2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepLib_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(h_C, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepLib_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(h_C, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepLib_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(h_C, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, p1, p2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepLib_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRepLib_MakeEdge2d*)_NativeInstance)->Init(h_C, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
	C->NativeInstance = h_C.get();
}

Macad::Occt::BRepLib_EdgeError Macad::Occt::BRepLib_MakeEdge2d::Error()
{
	return (Macad::Occt::BRepLib_EdgeError)((::BRepLib_MakeEdge2d*)_NativeInstance)->Error();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepLib_MakeEdge2d::Edge()
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepLib_MakeEdge2d*)_NativeInstance)->Edge();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakeEdge2d::Vertex1()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepLib_MakeEdge2d*)_NativeInstance)->Vertex1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakeEdge2d::Vertex2()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepLib_MakeEdge2d*)_NativeInstance)->Vertex2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
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

Macad::Occt::BRepLib_MakePolygon::BRepLib_MakePolygon(Macad::Occt::BRepLib_MakePolygon^ parameter1)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_MakePolygon(*(::BRepLib_MakePolygon*)parameter1->NativeInstance);
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
	return ((::BRepLib_MakePolygon*)_NativeInstance)->Added();
}

void Macad::Occt::BRepLib_MakePolygon::Close()
{
	((::BRepLib_MakePolygon*)_NativeInstance)->Close();
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakePolygon::FirstVertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepLib_MakePolygon*)_NativeInstance)->FirstVertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakePolygon::LastVertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepLib_MakePolygon*)_NativeInstance)->LastVertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepLib_MakePolygon::Edge()
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepLib_MakePolygon*)_NativeInstance)->Edge();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepLib_MakePolygon::Wire()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result =  (::TopoDS_Wire)((::BRepLib_MakePolygon*)_NativeInstance)->Wire();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
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
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeFace(h_S, TolDegen);
	S->NativeInstance = h_S.get();
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
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeFace(h_S, UMin, UMax, VMin, VMax, TolDegen);
	S->NativeInstance = h_S.get();
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
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeFace(h_S, *(::TopoDS_Wire*)W->NativeInstance, Inside);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Wire^ W)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeFace(h_S, *(::TopoDS_Wire*)W->NativeInstance, true);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_MakeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance);
}

Macad::Occt::BRepLib_MakeFace::BRepLib_MakeFace(Macad::Occt::BRepLib_MakeFace^ parameter1)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_MakeFace(*(::BRepLib_MakeFace*)parameter1->NativeInstance);
}

void Macad::Occt::BRepLib_MakeFace::Init(Macad::Occt::TopoDS_Face^ F)
{
	((::BRepLib_MakeFace*)_NativeInstance)->Init(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepLib_MakeFace::Init(Macad::Occt::Geom_Surface^ S, bool Bound, double TolDegen)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepLib_MakeFace*)_NativeInstance)->Init(h_S, Bound, TolDegen);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepLib_MakeFace::Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepLib_MakeFace*)_NativeInstance)->Init(h_S, UMin, UMax, VMin, VMax, TolDegen);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepLib_MakeFace::Add(Macad::Occt::TopoDS_Wire^ W)
{
	((::BRepLib_MakeFace*)_NativeInstance)->Add(*(::TopoDS_Wire*)W->NativeInstance);
}

Macad::Occt::BRepLib_FaceError Macad::Occt::BRepLib_MakeFace::Error()
{
	return (Macad::Occt::BRepLib_FaceError)((::BRepLib_MakeFace*)_NativeInstance)->Error();
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepLib_MakeFace::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::BRepLib_MakeFace*)_NativeInstance)->Face();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

bool Macad::Occt::BRepLib_MakeFace::IsDegenerated(Macad::Occt::Geom_Curve^ theCurve, double theMaxTol, double% theActTol)
{
	Handle(::Geom_Curve) h_theCurve = theCurve->NativeInstance;
	pin_ptr<double> pp_theActTol = &theActTol;
	return ::BRepLib_MakeFace::IsDegenerated(h_theCurve, theMaxTol, *(Standard_Real*)pp_theActTol);
	theCurve->NativeInstance = h_theCurve.get();
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

Macad::Occt::BRepLib_MakeWire::BRepLib_MakeWire(Macad::Occt::BRepLib_MakeWire^ parameter1)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_MakeWire(*(::BRepLib_MakeWire*)parameter1->NativeInstance);
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
	return (Macad::Occt::BRepLib_WireError)((::BRepLib_MakeWire*)_NativeInstance)->Error();
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepLib_MakeWire::Wire()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result =  (::TopoDS_Wire)((::BRepLib_MakeWire*)_NativeInstance)->Wire();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepLib_MakeWire::Edge()
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepLib_MakeWire*)_NativeInstance)->Edge();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepLib_MakeWire::Vertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepLib_MakeWire*)_NativeInstance)->Vertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
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
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeShell(h_S, Segment);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_MakeShell::BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeShell(h_S, false);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_MakeShell::BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeShell(h_S, UMin, UMax, VMin, VMax, Segment);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_MakeShell::BRepLib_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepLib_MakeShell(h_S, UMin, UMax, VMin, VMax, false);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_MakeShell::BRepLib_MakeShell(Macad::Occt::BRepLib_MakeShell^ parameter1)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_MakeShell(*(::BRepLib_MakeShell*)parameter1->NativeInstance);
}

void Macad::Occt::BRepLib_MakeShell::Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepLib_MakeShell*)_NativeInstance)->Init(h_S, UMin, UMax, VMin, VMax, Segment);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepLib_MakeShell::Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepLib_MakeShell*)_NativeInstance)->Init(h_S, UMin, UMax, VMin, VMax, false);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepLib_ShellError Macad::Occt::BRepLib_MakeShell::Error()
{
	return (Macad::Occt::BRepLib_ShellError)((::BRepLib_MakeShell*)_NativeInstance)->Error();
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::BRepLib_MakeShell::Shell()
{
	::TopoDS_Shell* _result = new ::TopoDS_Shell();
	*_result =  (::TopoDS_Shell)((::BRepLib_MakeShell*)_NativeInstance)->Shell();
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

Macad::Occt::BRepLib_MakeSolid::BRepLib_MakeSolid(Macad::Occt::BRepLib_MakeSolid^ parameter1)
	: Macad::Occt::BRepLib_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_MakeSolid(*(::BRepLib_MakeSolid*)parameter1->NativeInstance);
}

void Macad::Occt::BRepLib_MakeSolid::Add(Macad::Occt::TopoDS_Shell^ S)
{
	((::BRepLib_MakeSolid*)_NativeInstance)->Add(*(::TopoDS_Shell*)S->NativeInstance);
}

Macad::Occt::TopoDS_Solid^ Macad::Occt::BRepLib_MakeSolid::Solid()
{
	::TopoDS_Solid* _result = new ::TopoDS_Solid();
	*_result =  (::TopoDS_Solid)((::BRepLib_MakeSolid*)_NativeInstance)->Solid();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Solid(_result);
}

Macad::Occt::BRepLib_ShapeModification Macad::Occt::BRepLib_MakeSolid::FaceStatus(Macad::Occt::TopoDS_Face^ F)
{
	return (Macad::Occt::BRepLib_ShapeModification)((::BRepLib_MakeSolid*)_NativeInstance)->FaceStatus(*(::TopoDS_Face*)F->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepLib_FindSurface
//---------------------------------------------------------------------

Macad::Occt::BRepLib_FindSurface::BRepLib_FindSurface()
	: BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_FindSurface();
}

Macad::Occt::BRepLib_FindSurface::BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane, bool OnlyClosed)
	: BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_FindSurface(*(::TopoDS_Shape*)S->NativeInstance, Tol, OnlyPlane, OnlyClosed);
}

Macad::Occt::BRepLib_FindSurface::BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S, double Tol, bool OnlyPlane)
	: BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_FindSurface(*(::TopoDS_Shape*)S->NativeInstance, Tol, OnlyPlane, false);
}

Macad::Occt::BRepLib_FindSurface::BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S, double Tol)
	: BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_FindSurface(*(::TopoDS_Shape*)S->NativeInstance, Tol, false, false);
}

Macad::Occt::BRepLib_FindSurface::BRepLib_FindSurface(Macad::Occt::TopoDS_Shape^ S)
	: BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_FindSurface(*(::TopoDS_Shape*)S->NativeInstance, -1, false, false);
}

Macad::Occt::BRepLib_FindSurface::BRepLib_FindSurface(Macad::Occt::BRepLib_FindSurface^ parameter1)
	: BaseClass<::BRepLib_FindSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_FindSurface(*(::BRepLib_FindSurface*)parameter1->NativeInstance);
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
	return ((::BRepLib_FindSurface*)_NativeInstance)->Found();
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRepLib_FindSurface::Surface()
{
	Handle(::Geom_Surface) _result;
	_result = ((::BRepLib_FindSurface*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

double Macad::Occt::BRepLib_FindSurface::Tolerance()
{
	return ((::BRepLib_FindSurface*)_NativeInstance)->Tolerance();
}

double Macad::Occt::BRepLib_FindSurface::ToleranceReached()
{
	return ((::BRepLib_FindSurface*)_NativeInstance)->ToleranceReached();
}

bool Macad::Occt::BRepLib_FindSurface::Existed()
{
	return ((::BRepLib_FindSurface*)_NativeInstance)->Existed();
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
	: BaseClass<::BRepLib_FuseEdges>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_FuseEdges(*(::TopoDS_Shape*)theShape->NativeInstance, PerformNow);
}

Macad::Occt::BRepLib_FuseEdges::BRepLib_FuseEdges(Macad::Occt::TopoDS_Shape^ theShape)
	: BaseClass<::BRepLib_FuseEdges>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_FuseEdges(*(::TopoDS_Shape*)theShape->NativeInstance, false);
}

Macad::Occt::BRepLib_FuseEdges::BRepLib_FuseEdges(Macad::Occt::BRepLib_FuseEdges^ parameter1)
	: BaseClass<::BRepLib_FuseEdges>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_FuseEdges(*(::BRepLib_FuseEdges*)parameter1->NativeInstance);
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
	return ((::BRepLib_FuseEdges*)_NativeInstance)->NbVertices();
}

void Macad::Occt::BRepLib_FuseEdges::Perform()
{
	((::BRepLib_FuseEdges*)_NativeInstance)->Perform();
}




//---------------------------------------------------------------------
//  Class  BRepLib_CheckCurveOnSurface
//---------------------------------------------------------------------

Macad::Occt::BRepLib_CheckCurveOnSurface::BRepLib_CheckCurveOnSurface()
	: BaseClass<::BRepLib_CheckCurveOnSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_CheckCurveOnSurface();
}

Macad::Occt::BRepLib_CheckCurveOnSurface::BRepLib_CheckCurveOnSurface(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace)
	: BaseClass<::BRepLib_CheckCurveOnSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_CheckCurveOnSurface(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance);
}

Macad::Occt::BRepLib_CheckCurveOnSurface::BRepLib_CheckCurveOnSurface(Macad::Occt::BRepLib_CheckCurveOnSurface^ parameter1)
	: BaseClass<::BRepLib_CheckCurveOnSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib_CheckCurveOnSurface(*(::BRepLib_CheckCurveOnSurface*)parameter1->NativeInstance);
}

void Macad::Occt::BRepLib_CheckCurveOnSurface::Init(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace)
{
	((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->Init(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance);
}

void Macad::Occt::BRepLib_CheckCurveOnSurface::Perform(bool isTheMultyTheradDisabled)
{
	((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->Perform(isTheMultyTheradDisabled);
}

void Macad::Occt::BRepLib_CheckCurveOnSurface::Perform()
{
	((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->Perform(false);
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRepLib_CheckCurveOnSurface::Curve()
{
	Handle(::Geom_Curve) _result;
	_result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->Curve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRepLib_CheckCurveOnSurface::PCurve()
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->PCurve();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRepLib_CheckCurveOnSurface::PCurve2()
{
	Handle(::Geom2d_Curve) _result;
	_result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->PCurve2();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRepLib_CheckCurveOnSurface::Surface()
{
	Handle(::Geom_Surface) _result;
	_result = ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->Surface();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

void Macad::Occt::BRepLib_CheckCurveOnSurface::Range(double% theFirst, double% theLast)
{
	pin_ptr<double> pp_theFirst = &theFirst;
	pin_ptr<double> pp_theLast = &theLast;
	((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->Range(*(Standard_Real*)pp_theFirst, *(Standard_Real*)pp_theLast);
}

bool Macad::Occt::BRepLib_CheckCurveOnSurface::IsDone()
{
	return ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->IsDone();
}

int Macad::Occt::BRepLib_CheckCurveOnSurface::ErrorStatus()
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}

double Macad::Occt::BRepLib_CheckCurveOnSurface::MaxDistance()
{
	return ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->MaxDistance();
}

double Macad::Occt::BRepLib_CheckCurveOnSurface::MaxParameter()
{
	return ((::BRepLib_CheckCurveOnSurface*)_NativeInstance)->MaxParameter();
}




//---------------------------------------------------------------------
//  Class  BRepLib
//---------------------------------------------------------------------

Macad::Occt::BRepLib::BRepLib()
	: BaseClass<::BRepLib>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib();
}

Macad::Occt::BRepLib::BRepLib(Macad::Occt::BRepLib^ parameter1)
	: BaseClass<::BRepLib>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepLib(*(::BRepLib*)parameter1->NativeInstance);
}

void Macad::Occt::BRepLib::Precision(double P)
{
	::BRepLib::Precision(P);
}

double Macad::Occt::BRepLib::Precision()
{
	return ::BRepLib::Precision();
}

void Macad::Occt::BRepLib::Plane(Macad::Occt::Geom_Plane^ P)
{
	Handle(::Geom_Plane) h_P = P->NativeInstance;
	::BRepLib::Plane(h_P);
	P->NativeInstance = h_P.get();
}

Macad::Occt::Geom_Plane^ Macad::Occt::BRepLib::Plane()
{
	Handle(::Geom_Plane) _result;
	_result = ::BRepLib::Plane();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Plane::CreateDowncasted( _result.get());
}

bool Macad::Occt::BRepLib::CheckSameRange(Macad::Occt::TopoDS_Edge^ E, double Confusion)
{
	return ::BRepLib::CheckSameRange(*(::TopoDS_Edge*)E->NativeInstance, Confusion);
}

bool Macad::Occt::BRepLib::CheckSameRange(Macad::Occt::TopoDS_Edge^ E)
{
	return ::BRepLib::CheckSameRange(*(::TopoDS_Edge*)E->NativeInstance, 9.9999999999999998E-13);
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
	return ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, MaxDegree, MaxSegment);
}

bool Macad::Occt::BRepLib::BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree)
{
	return ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, MaxDegree, 0);
}

bool Macad::Occt::BRepLib::BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity)
{
	return ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, 14, 0);
}

bool Macad::Occt::BRepLib::BuildCurve3d(Macad::Occt::TopoDS_Edge^ E, double Tolerance)
{
	return ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, Tolerance, GeomAbs_C1, 14, 0);
}

bool Macad::Occt::BRepLib::BuildCurve3d(Macad::Occt::TopoDS_Edge^ E)
{
	return ::BRepLib::BuildCurve3d(*(::TopoDS_Edge*)E->NativeInstance, 1.0000000000000001E-5, GeomAbs_C1, 14, 0);
}

bool Macad::Occt::BRepLib::BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree, int MaxSegment)
{
	return ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, MaxDegree, MaxSegment);
}

bool Macad::Occt::BRepLib::BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity, int MaxDegree)
{
	return ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, MaxDegree, 0);
}

bool Macad::Occt::BRepLib::BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance, Macad::Occt::GeomAbs_Shape Continuity)
{
	return ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, (::GeomAbs_Shape)Continuity, 14, 0);
}

bool Macad::Occt::BRepLib::BuildCurves3d(Macad::Occt::TopoDS_Shape^ S, double Tolerance)
{
	return ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance, Tolerance, GeomAbs_C1, 14, 0);
}

bool Macad::Occt::BRepLib::BuildCurves3d(Macad::Occt::TopoDS_Shape^ S)
{
	return ::BRepLib::BuildCurves3d(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepLib::BuildPCurveForEdgeOnPlane(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::TopoDS_Face^ theF)
{
	::BRepLib::BuildPCurveForEdgeOnPlane(*(::TopoDS_Edge*)theE->NativeInstance, *(::TopoDS_Face*)theF->NativeInstance);
}

void Macad::Occt::BRepLib::BuildPCurveForEdgeOnPlane(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::TopoDS_Face^ theF, Macad::Occt::Geom2d_Curve^ aC2D, bool% bToUpdate)
{
	Handle(::Geom2d_Curve) h_aC2D = aC2D->NativeInstance;
	pin_ptr<bool> pp_bToUpdate = &bToUpdate;
	::BRepLib::BuildPCurveForEdgeOnPlane(*(::TopoDS_Edge*)theE->NativeInstance, *(::TopoDS_Face*)theF->NativeInstance, h_aC2D, *(Standard_Boolean*)pp_bToUpdate);
	aC2D->NativeInstance = h_aC2D.get();
}

bool Macad::Occt::BRepLib::UpdateEdgeTol(Macad::Occt::TopoDS_Edge^ E, double MinToleranceRequest, double MaxToleranceToCheck)
{
	return ::BRepLib::UpdateEdgeTol(*(::TopoDS_Edge*)E->NativeInstance, MinToleranceRequest, MaxToleranceToCheck);
}

bool Macad::Occt::BRepLib::UpdateEdgeTolerance(Macad::Occt::TopoDS_Shape^ S, double MinToleranceRequest, double MaxToleranceToCheck)
{
	return ::BRepLib::UpdateEdgeTolerance(*(::TopoDS_Shape*)S->NativeInstance, MinToleranceRequest, MaxToleranceToCheck);
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
	pin_ptr<double> pp_theNewTol = &theNewTol;
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result = ::BRepLib::SameParameter(*(::TopoDS_Edge*)theEdge->NativeInstance, theTolerance, *(Standard_Real*)pp_theNewTol, IsUseOldEdge);
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
	return ::BRepLib::OrientClosedSolid(*(::TopoDS_Solid*)solid->NativeInstance);
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
	return ::BRepLib::EnsureNormalConsistency(*(::TopoDS_Shape*)S->NativeInstance, theAngTol, ForceComputeNormals);
}

bool Macad::Occt::BRepLib::EnsureNormalConsistency(Macad::Occt::TopoDS_Shape^ S, double theAngTol)
{
	return ::BRepLib::EnsureNormalConsistency(*(::TopoDS_Shape*)S->NativeInstance, theAngTol, false);
}

bool Macad::Occt::BRepLib::EnsureNormalConsistency(Macad::Occt::TopoDS_Shape^ S)
{
	return ::BRepLib::EnsureNormalConsistency(*(::TopoDS_Shape*)S->NativeInstance, 0.001, false);
}

bool Macad::Occt::BRepLib::FindValidRange(Macad::Occt::Adaptor3d_Curve^ theCurve, double theTolE, double theParV1, Macad::Occt::Pnt thePntV1, double theTolV1, double theParV2, Macad::Occt::Pnt thePntV2, double theTolV2, double% theFirst, double% theLast)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePntV1 = &thePntV1;
	pin_ptr<Macad::Occt::Pnt> pp_thePntV2 = &thePntV2;
	pin_ptr<double> pp_theFirst = &theFirst;
	pin_ptr<double> pp_theLast = &theLast;
	return ::BRepLib::FindValidRange(*(::Adaptor3d_Curve*)theCurve->NativeInstance, theTolE, theParV1, *(gp_Pnt*)pp_thePntV1, theTolV1, theParV2, *(gp_Pnt*)pp_thePntV2, theTolV2, *(Standard_Real*)pp_theFirst, *(Standard_Real*)pp_theLast);
}

bool Macad::Occt::BRepLib::FindValidRange(Macad::Occt::TopoDS_Edge^ theEdge, double% theFirst, double% theLast)
{
	pin_ptr<double> pp_theFirst = &theFirst;
	pin_ptr<double> pp_theLast = &theLast;
	return ::BRepLib::FindValidRange(*(::TopoDS_Edge*)theEdge->NativeInstance, *(Standard_Real*)pp_theFirst, *(Standard_Real*)pp_theLast);
}

void Macad::Occt::BRepLib::ExtendFace(Macad::Occt::TopoDS_Face^ theF, double theExtVal, bool theExtUMin, bool theExtUMax, bool theExtVMin, bool theExtVMax, Macad::Occt::TopoDS_Face^ theFExtended)
{
	::BRepLib::ExtendFace(*(::TopoDS_Face*)theF->NativeInstance, theExtVal, theExtUMin, theExtUMax, theExtVMin, theExtVMax, *(::TopoDS_Face*)theFExtended->NativeInstance);
}



