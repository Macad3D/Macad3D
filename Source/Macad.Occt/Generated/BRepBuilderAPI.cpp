// Generated wrapper code for package BRepBuilderAPI

#include "OcctPCH.h"
#include "BRepBuilderAPI.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Geom.h"
#include "Standard.h"
#include "BRepBuilderAPI.h"
#include "gp.h"
#include "TColStd.h"
#include "NCollection.h"
#include "TopoDS.h"
#include "TopTools.h"
#include "BRepPrimAPI.h"
#include "BRepAlgoAPI.h"
#include "BRepFeat.h"
#include "ShapeConstruct.h"
#include "BRepFilletAPI.h"
#include "BRepOffsetAPI.h"
#include "Message.h"
#include "BRepTools.h"
#include "Geom2d.h"
#include "TopLoc.h"
#include "TColgp.h"


//---------------------------------------------------------------------
//  Class  BRepBuilderAPI
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI::BRepBuilderAPI()
	: BaseClass<::BRepBuilderAPI>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI();
}

Macad::Occt::BRepBuilderAPI::BRepBuilderAPI(Macad::Occt::BRepBuilderAPI^ parameter1)
	: BaseClass<::BRepBuilderAPI>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI(*(::BRepBuilderAPI*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI::Plane(Macad::Occt::Geom_Plane^ P)
{
	Handle(::Geom_Plane) h_P = P->NativeInstance;
	::BRepBuilderAPI::Plane(h_P);
	P->NativeInstance = h_P.get();
}

Macad::Occt::Geom_Plane^ Macad::Occt::BRepBuilderAPI::Plane()
{
	Handle(::Geom_Plane) _result;
	_result = ::BRepBuilderAPI::Plane();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Plane::CreateDowncasted( _result.get());
}

void Macad::Occt::BRepBuilderAPI::Precision(double P)
{
	::BRepBuilderAPI::Precision(P);
}

double Macad::Occt::BRepBuilderAPI::Precision()
{
	return ::BRepBuilderAPI::Precision();
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_VertexInspector
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_VertexInspector::BRepBuilderAPI_VertexInspector(double theTol)
	: BaseClass<::BRepBuilderAPI_VertexInspector>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_VertexInspector(theTol);
}

Macad::Occt::BRepBuilderAPI_VertexInspector::BRepBuilderAPI_VertexInspector(Macad::Occt::BRepBuilderAPI_VertexInspector^ parameter1)
	: BaseClass<::BRepBuilderAPI_VertexInspector>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_VertexInspector(*(::BRepBuilderAPI_VertexInspector*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_VertexInspector::Add(Macad::Occt::XYZ thePnt)
{
	pin_ptr<Macad::Occt::XYZ> pp_thePnt = &thePnt;
	((::BRepBuilderAPI_VertexInspector*)_NativeInstance)->Add(*(gp_XYZ*)pp_thePnt);
}

void Macad::Occt::BRepBuilderAPI_VertexInspector::ClearResList()
{
	((::BRepBuilderAPI_VertexInspector*)_NativeInstance)->ClearResList();
}

void Macad::Occt::BRepBuilderAPI_VertexInspector::SetCurrent(Macad::Occt::XYZ theCurPnt)
{
	pin_ptr<Macad::Occt::XYZ> pp_theCurPnt = &theCurPnt;
	((::BRepBuilderAPI_VertexInspector*)_NativeInstance)->SetCurrent(*(gp_XYZ*)pp_theCurPnt);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::BRepBuilderAPI_VertexInspector::ResInd()
{
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	*_result =  (::TColStd_ListOfInteger)((::BRepBuilderAPI_VertexInspector*)_NativeInstance)->ResInd();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

Macad::Occt::NCollection_CellFilter_Action Macad::Occt::BRepBuilderAPI_VertexInspector::Inspect(int theTarget)
{
	return (Macad::Occt::NCollection_CellFilter_Action)((::BRepBuilderAPI_VertexInspector*)_NativeInstance)->Inspect(theTarget);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Command
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_Command::BRepBuilderAPI_Command(Macad::Occt::BRepBuilderAPI_Command^ parameter1)
	: BaseClass<::BRepBuilderAPI_Command>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_Command(*(::BRepBuilderAPI_Command*)parameter1->NativeInstance);
}

bool Macad::Occt::BRepBuilderAPI_Command::IsDone()
{
	return ((::BRepBuilderAPI_Command*)_NativeInstance)->IsDone();
}

void Macad::Occt::BRepBuilderAPI_Command::Check()
{
	((::BRepBuilderAPI_Command*)_NativeInstance)->Check();
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Collect
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_Collect::BRepBuilderAPI_Collect()
	: BaseClass<::BRepBuilderAPI_Collect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_Collect();
}

Macad::Occt::BRepBuilderAPI_Collect::BRepBuilderAPI_Collect(Macad::Occt::BRepBuilderAPI_Collect^ parameter1)
	: BaseClass<::BRepBuilderAPI_Collect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_Collect(*(::BRepBuilderAPI_Collect*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_Collect::Add(Macad::Occt::TopoDS_Shape^ SI, Macad::Occt::BRepBuilderAPI_MakeShape^ MKS)
{
	((::BRepBuilderAPI_Collect*)_NativeInstance)->Add(*(::TopoDS_Shape*)SI->NativeInstance, *(::BRepBuilderAPI_MakeShape*)MKS->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_Collect::AddGenerated(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Shape^ Gen)
{
	((::BRepBuilderAPI_Collect*)_NativeInstance)->AddGenerated(*(::TopoDS_Shape*)S->NativeInstance, *(::TopoDS_Shape*)Gen->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_Collect::AddModif(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopoDS_Shape^ Mod)
{
	((::BRepBuilderAPI_Collect*)_NativeInstance)->AddModif(*(::TopoDS_Shape*)S->NativeInstance, *(::TopoDS_Shape*)Mod->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_Collect::Filter(Macad::Occt::TopoDS_Shape^ SF)
{
	((::BRepBuilderAPI_Collect*)_NativeInstance)->Filter(*(::TopoDS_Shape*)SF->NativeInstance);
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::BRepBuilderAPI_Collect::Modification()
{
	::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
	*_result =  (::TopTools_DataMapOfShapeListOfShape)((::BRepBuilderAPI_Collect*)_NativeInstance)->Modification();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape(_result);
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::BRepBuilderAPI_Collect::Generated()
{
	::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
	*_result =  (::TopTools_DataMapOfShapeListOfShape)((::BRepBuilderAPI_Collect*)_NativeInstance)->Generated();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape(_result);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeShape
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_MakeShape::BRepBuilderAPI_MakeShape(Macad::Occt::BRepBuilderAPI_MakeShape^ parameter1)
	: Macad::Occt::BRepBuilderAPI_Command(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeShape(*(::BRepBuilderAPI_MakeShape*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_MakeShape::Build(Macad::Occt::Message_ProgressRange^ theRange)
{
	((::BRepBuilderAPI_MakeShape*)_NativeInstance)->Build(*(::Message_ProgressRange*)theRange->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_MakeShape::Build()
{
	((::BRepBuilderAPI_MakeShape*)_NativeInstance)->Build(::Message_ProgressRange());
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepBuilderAPI_MakeShape::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepBuilderAPI_MakeShape*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepBuilderAPI_MakeShape::Generated(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepBuilderAPI_MakeShape*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepBuilderAPI_MakeShape::Modified(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepBuilderAPI_MakeShape*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepBuilderAPI_MakeShape::IsDeleted(Macad::Occt::TopoDS_Shape^ S)
{
	return ((::BRepBuilderAPI_MakeShape*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_ModifyShape
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_ModifyShape::BRepBuilderAPI_ModifyShape(Macad::Occt::BRepBuilderAPI_ModifyShape^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_ModifyShape(*(::BRepBuilderAPI_ModifyShape*)parameter1->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepBuilderAPI_ModifyShape::Modified(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepBuilderAPI_ModifyShape*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepBuilderAPI_ModifyShape::ModifiedShape(Macad::Occt::TopoDS_Shape^ S)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepBuilderAPI_ModifyShape*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Copy
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_Copy::BRepBuilderAPI_Copy()
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_Copy();
}

Macad::Occt::BRepBuilderAPI_Copy::BRepBuilderAPI_Copy(Macad::Occt::TopoDS_Shape^ S, bool copyGeom, bool copyMesh)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_Copy(*(::TopoDS_Shape*)S->NativeInstance, copyGeom, copyMesh);
}

Macad::Occt::BRepBuilderAPI_Copy::BRepBuilderAPI_Copy(Macad::Occt::TopoDS_Shape^ S, bool copyGeom)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_Copy(*(::TopoDS_Shape*)S->NativeInstance, copyGeom, false);
}

Macad::Occt::BRepBuilderAPI_Copy::BRepBuilderAPI_Copy(Macad::Occt::TopoDS_Shape^ S)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_Copy(*(::TopoDS_Shape*)S->NativeInstance, true, false);
}

Macad::Occt::BRepBuilderAPI_Copy::BRepBuilderAPI_Copy(Macad::Occt::BRepBuilderAPI_Copy^ parameter1)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_Copy(*(::BRepBuilderAPI_Copy*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_Copy::Perform(Macad::Occt::TopoDS_Shape^ S, bool copyGeom, bool copyMesh)
{
	((::BRepBuilderAPI_Copy*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, copyGeom, copyMesh);
}

void Macad::Occt::BRepBuilderAPI_Copy::Perform(Macad::Occt::TopoDS_Shape^ S, bool copyGeom)
{
	((::BRepBuilderAPI_Copy*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, copyGeom, false);
}

void Macad::Occt::BRepBuilderAPI_Copy::Perform(Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepBuilderAPI_Copy*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, true, false);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_FastSewing
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_FastSewing::BRepBuilderAPI_FastSewing(double theTolerance)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepBuilderAPI_FastSewing(theTolerance);
}

Macad::Occt::BRepBuilderAPI_FastSewing::BRepBuilderAPI_FastSewing(Macad::Occt::BRepBuilderAPI_FastSewing^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepBuilderAPI_FastSewing(*(::BRepBuilderAPI_FastSewing*)parameter1->NativeInstance);
}

bool Macad::Occt::BRepBuilderAPI_FastSewing::Add(Macad::Occt::TopoDS_Shape^ theShape)
{
	return ((::BRepBuilderAPI_FastSewing*)_NativeInstance)->Add(*(::TopoDS_Shape*)theShape->NativeInstance);
}

bool Macad::Occt::BRepBuilderAPI_FastSewing::Add(Macad::Occt::Geom_Surface^ theSurface)
{
	Handle(::Geom_Surface) h_theSurface = theSurface->NativeInstance;
	return ((::BRepBuilderAPI_FastSewing*)_NativeInstance)->Add(h_theSurface);
	theSurface->NativeInstance = h_theSurface.get();
}

void Macad::Occt::BRepBuilderAPI_FastSewing::Perform()
{
	((::BRepBuilderAPI_FastSewing*)_NativeInstance)->Perform();
}

void Macad::Occt::BRepBuilderAPI_FastSewing::SetTolerance(double theToler)
{
	((::BRepBuilderAPI_FastSewing*)_NativeInstance)->SetTolerance(theToler);
}

double Macad::Occt::BRepBuilderAPI_FastSewing::GetTolerance()
{
	return ((::BRepBuilderAPI_FastSewing*)_NativeInstance)->GetTolerance();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepBuilderAPI_FastSewing::GetResult()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepBuilderAPI_FastSewing*)_NativeInstance)->GetResult();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

unsigned int Macad::Occt::BRepBuilderAPI_FastSewing::GetStatuses()
{
	return ((::BRepBuilderAPI_FastSewing*)_NativeInstance)->GetStatuses(0);
}


Macad::Occt::BRepBuilderAPI_FastSewing^ Macad::Occt::BRepBuilderAPI_FastSewing::CreateDowncasted(::BRepBuilderAPI_FastSewing* instance)
{
	return gcnew Macad::Occt::BRepBuilderAPI_FastSewing( instance );
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_FindPlane
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_FindPlane::BRepBuilderAPI_FindPlane()
	: BaseClass<::BRepBuilderAPI_FindPlane>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_FindPlane();
}

Macad::Occt::BRepBuilderAPI_FindPlane::BRepBuilderAPI_FindPlane(Macad::Occt::TopoDS_Shape^ S, double Tol)
	: BaseClass<::BRepBuilderAPI_FindPlane>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_FindPlane(*(::TopoDS_Shape*)S->NativeInstance, Tol);
}

Macad::Occt::BRepBuilderAPI_FindPlane::BRepBuilderAPI_FindPlane(Macad::Occt::TopoDS_Shape^ S)
	: BaseClass<::BRepBuilderAPI_FindPlane>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_FindPlane(*(::TopoDS_Shape*)S->NativeInstance, -1);
}

Macad::Occt::BRepBuilderAPI_FindPlane::BRepBuilderAPI_FindPlane(Macad::Occt::BRepBuilderAPI_FindPlane^ parameter1)
	: BaseClass<::BRepBuilderAPI_FindPlane>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_FindPlane(*(::BRepBuilderAPI_FindPlane*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_FindPlane::Init(Macad::Occt::TopoDS_Shape^ S, double Tol)
{
	((::BRepBuilderAPI_FindPlane*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, Tol);
}

void Macad::Occt::BRepBuilderAPI_FindPlane::Init(Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepBuilderAPI_FindPlane*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, -1);
}

bool Macad::Occt::BRepBuilderAPI_FindPlane::Found()
{
	return ((::BRepBuilderAPI_FindPlane*)_NativeInstance)->Found();
}

Macad::Occt::Geom_Plane^ Macad::Occt::BRepBuilderAPI_FindPlane::Plane()
{
	Handle(::Geom_Plane) _result;
	_result = ((::BRepBuilderAPI_FindPlane*)_NativeInstance)->Plane();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Plane::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_GTransform
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_GTransform::BRepBuilderAPI_GTransform(Macad::Occt::gp_GTrsf^ T)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_GTransform(*(::gp_GTrsf*)T->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_GTransform::BRepBuilderAPI_GTransform(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::gp_GTrsf^ T, bool Copy)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_GTransform(*(::TopoDS_Shape*)S->NativeInstance, *(::gp_GTrsf*)T->NativeInstance, Copy);
}

Macad::Occt::BRepBuilderAPI_GTransform::BRepBuilderAPI_GTransform(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::gp_GTrsf^ T)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_GTransform(*(::TopoDS_Shape*)S->NativeInstance, *(::gp_GTrsf*)T->NativeInstance, false);
}

Macad::Occt::BRepBuilderAPI_GTransform::BRepBuilderAPI_GTransform(Macad::Occt::BRepBuilderAPI_GTransform^ parameter1)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_GTransform(*(::BRepBuilderAPI_GTransform*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_GTransform::Perform(Macad::Occt::TopoDS_Shape^ S, bool Copy)
{
	((::BRepBuilderAPI_GTransform*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, Copy);
}

void Macad::Occt::BRepBuilderAPI_GTransform::Perform(Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepBuilderAPI_GTransform*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, false);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepBuilderAPI_GTransform::Modified(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepBuilderAPI_GTransform*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepBuilderAPI_GTransform::ModifiedShape(Macad::Occt::TopoDS_Shape^ S)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepBuilderAPI_GTransform*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeEdge
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge()
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge();
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Lin^ L)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Lin*)L->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Lin^ L, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Lin*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Lin^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Lin*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Lin^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Lin*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Circ^ L)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Circ*)L->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Circ^ L, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Circ*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Circ^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Circ*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Circ^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Circ*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Elips^ L)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Elips*)L->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Elips^ L, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Elips*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Elips^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Elips*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Elips^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Elips*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Hypr^ L)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Hypr*)L->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Hypr^ L, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Hypr*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Hypr^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Hypr*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Hypr^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Hypr*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Parab^ L)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Parab*)L->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Parab^ L, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Parab*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Parab^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Parab*)L->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::gp_Parab^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::gp_Parab*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(h_L);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(h_L, p1, p2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_L = L->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(h_L, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(h_L, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_L = L->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(h_L, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::Geom_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(h_L, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(h_L, h_S);
	L->NativeInstance = h_L.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(h_L, h_S, p1, p2);
	L->NativeInstance = h_L.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(h_L, h_S, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	L->NativeInstance = h_L.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(h_L, h_S, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
	L->NativeInstance = h_L.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(h_L, h_S, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
	L->NativeInstance = h_L.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(h_L, h_S, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
	L->NativeInstance = h_L.get();
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge::BRepBuilderAPI_MakeEdge(Macad::Occt::BRepBuilderAPI_MakeEdge^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge(*(::BRepBuilderAPI_MakeEdge*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_MakeEdge::Init(Macad::Occt::Geom_Curve^ C)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, double p1, double p2)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(h_C, p1, p2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(h_C, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(h_C, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(h_C, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge::Init(Macad::Occt::Geom_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(h_C, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(h_C, h_S);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, double p1, double p2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(h_C, h_S, p1, p2);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(h_C, h_S, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(h_C, h_S, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double p1, double p2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(h_C, h_S, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, p1, p2);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Init(h_C, h_S, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
	C->NativeInstance = h_C.get();
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::BRepBuilderAPI_MakeEdge::IsDone()
{
	return ((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->IsDone();
}

Macad::Occt::BRepBuilderAPI_EdgeError Macad::Occt::BRepBuilderAPI_MakeEdge::Error()
{
	return (Macad::Occt::BRepBuilderAPI_EdgeError)((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Error();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepBuilderAPI_MakeEdge::Edge()
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Edge();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepBuilderAPI_MakeEdge::Vertex1()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Vertex1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepBuilderAPI_MakeEdge::Vertex2()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepBuilderAPI_MakeEdge*)_NativeInstance)->Vertex2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeEdge2d
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Lin2d^ L)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Lin2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Lin2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Circ2d^ L)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Circ2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Circ2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Elips2d^ L)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Elips2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Elips2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Hypr2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Hypr2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Parab2d^ L)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance, p1, p2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::gp_Parab2d^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::gp_Parab2d*)L->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(h_L);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(h_L, p1, p2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(h_L, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(h_L, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(h_L, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, p1, p2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::Geom2d_Curve^ L, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom2d_Curve) h_L = L->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(h_L, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
	L->NativeInstance = h_L.get();
}

Macad::Occt::BRepBuilderAPI_MakeEdge2d::BRepBuilderAPI_MakeEdge2d(Macad::Occt::BRepBuilderAPI_MakeEdge2d^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeEdge2d(*(::BRepBuilderAPI_MakeEdge2d*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Init(h_C);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, double p1, double p2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Init(h_C, p1, p2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Init(h_C, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Init(h_C, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, double p1, double p2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Init(h_C, *(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2, p1, p2);
	C->NativeInstance = h_C.get();
}

void Macad::Occt::BRepBuilderAPI_MakeEdge2d::Init(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, double p1, double p2)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Init(h_C, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, p1, p2);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::BRepBuilderAPI_MakeEdge2d::IsDone()
{
	return ((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->IsDone();
}

Macad::Occt::BRepBuilderAPI_EdgeError Macad::Occt::BRepBuilderAPI_MakeEdge2d::Error()
{
	return (Macad::Occt::BRepBuilderAPI_EdgeError)((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Error();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepBuilderAPI_MakeEdge2d::Edge()
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Edge();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepBuilderAPI_MakeEdge2d::Vertex1()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Vertex1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepBuilderAPI_MakeEdge2d::Vertex2()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepBuilderAPI_MakeEdge2d*)_NativeInstance)->Vertex2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeFace
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace()
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace();
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::TopoDS_Face^ F)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::Pln P)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(gp_Pln*)pp_P);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cylinder^ C)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cylinder*)C->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cone^ C)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cone*)C->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Sphere^ S)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Sphere*)S->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Torus^ C)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Torus*)C->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::Geom_Surface^ S, double TolDegen)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(h_S, TolDegen);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::Pln P, double UMin, double UMax, double VMin, double VMax)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(gp_Pln*)pp_P, UMin, UMax, VMin, VMax);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cylinder^ C, double UMin, double UMax, double VMin, double VMax)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cylinder*)C->NativeInstance, UMin, UMax, VMin, VMax);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cone^ C, double UMin, double UMax, double VMin, double VMax)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cone*)C->NativeInstance, UMin, UMax, VMin, VMax);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Sphere^ S, double UMin, double UMax, double VMin, double VMax)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Sphere*)S->NativeInstance, UMin, UMax, VMin, VMax);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Torus^ C, double UMin, double UMax, double VMin, double VMax)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Torus*)C->NativeInstance, UMin, UMax, VMin, VMax);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(h_S, UMin, UMax, VMin, VMax, TolDegen);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::TopoDS_Wire^ W, bool OnlyPlane)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::TopoDS_Wire*)W->NativeInstance, OnlyPlane);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::TopoDS_Wire^ W)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::TopoDS_Wire*)W->NativeInstance, false);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::Pln P, Macad::Occt::TopoDS_Wire^ W, bool Inside)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(gp_Pln*)pp_P, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::Pln P, Macad::Occt::TopoDS_Wire^ W)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(gp_Pln*)pp_P, *(::TopoDS_Wire*)W->NativeInstance, true);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cylinder^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cylinder*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cylinder^ C, Macad::Occt::TopoDS_Wire^ W)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cylinder*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cone^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cone*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Cone^ C, Macad::Occt::TopoDS_Wire^ W)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Cone*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Sphere^ S, Macad::Occt::TopoDS_Wire^ W, bool Inside)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Sphere*)S->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Sphere^ S, Macad::Occt::TopoDS_Wire^ W)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Sphere*)S->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Torus^ C, Macad::Occt::TopoDS_Wire^ W, bool Inside)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Torus*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, Inside);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::gp_Torus^ C, Macad::Occt::TopoDS_Wire^ W)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::gp_Torus*)C->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance, true);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Wire^ W, bool Inside)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(h_S, *(::TopoDS_Wire*)W->NativeInstance, Inside);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::Geom_Surface^ S, Macad::Occt::TopoDS_Wire^ W)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(h_S, *(::TopoDS_Wire*)W->NativeInstance, true);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Wire^ W)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Wire*)W->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeFace::BRepBuilderAPI_MakeFace(Macad::Occt::BRepBuilderAPI_MakeFace^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeFace(*(::BRepBuilderAPI_MakeFace*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_MakeFace::Init(Macad::Occt::TopoDS_Face^ F)
{
	((::BRepBuilderAPI_MakeFace*)_NativeInstance)->Init(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_MakeFace::Init(Macad::Occt::Geom_Surface^ S, bool Bound, double TolDegen)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepBuilderAPI_MakeFace*)_NativeInstance)->Init(h_S, Bound, TolDegen);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepBuilderAPI_MakeFace::Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, double TolDegen)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepBuilderAPI_MakeFace*)_NativeInstance)->Init(h_S, UMin, UMax, VMin, VMax, TolDegen);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepBuilderAPI_MakeFace::Add(Macad::Occt::TopoDS_Wire^ W)
{
	((::BRepBuilderAPI_MakeFace*)_NativeInstance)->Add(*(::TopoDS_Wire*)W->NativeInstance);
}

bool Macad::Occt::BRepBuilderAPI_MakeFace::IsDone()
{
	return ((::BRepBuilderAPI_MakeFace*)_NativeInstance)->IsDone();
}

Macad::Occt::BRepBuilderAPI_FaceError Macad::Occt::BRepBuilderAPI_MakeFace::Error()
{
	return (Macad::Occt::BRepBuilderAPI_FaceError)((::BRepBuilderAPI_MakeFace*)_NativeInstance)->Error();
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepBuilderAPI_MakeFace::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::BRepBuilderAPI_MakeFace*)_NativeInstance)->Face();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakePolygon
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon()
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakePolygon();
}

Macad::Occt::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	_NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, bool Close)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
	_NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, Close);
}

Macad::Occt::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
	_NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, false);
}

Macad::Occt::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4, bool Close)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
	pin_ptr<Macad::Occt::Pnt> pp_P4 = &P4;
	_NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, *(gp_Pnt*)pp_P4, Close);
}

Macad::Occt::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pnt> pp_P3 = &P3;
	pin_ptr<Macad::Occt::Pnt> pp_P4 = &P4;
	_NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Pnt*)pp_P3, *(gp_Pnt*)pp_P4, false);
}

Macad::Occt::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, bool Close)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, Close);
}

Macad::Occt::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, false);
}

Macad::Occt::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, Macad::Occt::TopoDS_Vertex^ V4, bool Close)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, *(::TopoDS_Vertex*)V4->NativeInstance, Close);
}

Macad::Occt::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Vertex^ V3, Macad::Occt::TopoDS_Vertex^ V4)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Vertex*)V3->NativeInstance, *(::TopoDS_Vertex*)V4->NativeInstance, false);
}

Macad::Occt::BRepBuilderAPI_MakePolygon::BRepBuilderAPI_MakePolygon(Macad::Occt::BRepBuilderAPI_MakePolygon^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakePolygon(*(::BRepBuilderAPI_MakePolygon*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_MakePolygon::Add(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->Add(*(gp_Pnt*)pp_P);
}

void Macad::Occt::BRepBuilderAPI_MakePolygon::Add(Macad::Occt::TopoDS_Vertex^ V)
{
	((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->Add(*(::TopoDS_Vertex*)V->NativeInstance);
}

bool Macad::Occt::BRepBuilderAPI_MakePolygon::Added()
{
	return ((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->Added();
}

void Macad::Occt::BRepBuilderAPI_MakePolygon::Close()
{
	((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->Close();
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepBuilderAPI_MakePolygon::FirstVertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->FirstVertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepBuilderAPI_MakePolygon::LastVertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->LastVertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

bool Macad::Occt::BRepBuilderAPI_MakePolygon::IsDone()
{
	return ((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->IsDone();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepBuilderAPI_MakePolygon::Edge()
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->Edge();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepBuilderAPI_MakePolygon::Wire()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result =  (::TopoDS_Wire)((::BRepBuilderAPI_MakePolygon*)_NativeInstance)->Wire();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeShell
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_MakeShell::BRepBuilderAPI_MakeShell()
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeShell();
}

Macad::Occt::BRepBuilderAPI_MakeShell::BRepBuilderAPI_MakeShell(Macad::Occt::Geom_Surface^ S, bool Segment)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeShell(h_S, Segment);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeShell::BRepBuilderAPI_MakeShell(Macad::Occt::Geom_Surface^ S)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeShell(h_S, false);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeShell::BRepBuilderAPI_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeShell(h_S, UMin, UMax, VMin, VMax, Segment);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeShell::BRepBuilderAPI_MakeShell(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	_NativeInstance = new ::BRepBuilderAPI_MakeShell(h_S, UMin, UMax, VMin, VMax, false);
	S->NativeInstance = h_S.get();
}

Macad::Occt::BRepBuilderAPI_MakeShell::BRepBuilderAPI_MakeShell(Macad::Occt::BRepBuilderAPI_MakeShell^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeShell(*(::BRepBuilderAPI_MakeShell*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_MakeShell::Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax, bool Segment)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepBuilderAPI_MakeShell*)_NativeInstance)->Init(h_S, UMin, UMax, VMin, VMax, Segment);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::BRepBuilderAPI_MakeShell::Init(Macad::Occt::Geom_Surface^ S, double UMin, double UMax, double VMin, double VMax)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	((::BRepBuilderAPI_MakeShell*)_NativeInstance)->Init(h_S, UMin, UMax, VMin, VMax, false);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::BRepBuilderAPI_MakeShell::IsDone()
{
	return ((::BRepBuilderAPI_MakeShell*)_NativeInstance)->IsDone();
}

Macad::Occt::BRepBuilderAPI_ShellError Macad::Occt::BRepBuilderAPI_MakeShell::Error()
{
	return (Macad::Occt::BRepBuilderAPI_ShellError)((::BRepBuilderAPI_MakeShell*)_NativeInstance)->Error();
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::BRepBuilderAPI_MakeShell::Shell()
{
	::TopoDS_Shell* _result = new ::TopoDS_Shell();
	*_result =  (::TopoDS_Shell)((::BRepBuilderAPI_MakeShell*)_NativeInstance)->Shell();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeSolid
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid()
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeSolid();
}

Macad::Occt::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_CompSolid^ S)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeSolid(*(::TopoDS_CompSolid*)S->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Shell^ S)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeSolid(*(::TopoDS_Shell*)S->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Shell^ S1, Macad::Occt::TopoDS_Shell^ S2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeSolid(*(::TopoDS_Shell*)S1->NativeInstance, *(::TopoDS_Shell*)S2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Shell^ S1, Macad::Occt::TopoDS_Shell^ S2, Macad::Occt::TopoDS_Shell^ S3)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeSolid(*(::TopoDS_Shell*)S1->NativeInstance, *(::TopoDS_Shell*)S2->NativeInstance, *(::TopoDS_Shell*)S3->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Solid^ So)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeSolid(*(::TopoDS_Solid*)So->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid(Macad::Occt::TopoDS_Solid^ So, Macad::Occt::TopoDS_Shell^ S)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeSolid(*(::TopoDS_Solid*)So->NativeInstance, *(::TopoDS_Shell*)S->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeSolid::BRepBuilderAPI_MakeSolid(Macad::Occt::BRepBuilderAPI_MakeSolid^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeSolid(*(::BRepBuilderAPI_MakeSolid*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_MakeSolid::Add(Macad::Occt::TopoDS_Shell^ S)
{
	((::BRepBuilderAPI_MakeSolid*)_NativeInstance)->Add(*(::TopoDS_Shell*)S->NativeInstance);
}

bool Macad::Occt::BRepBuilderAPI_MakeSolid::IsDone()
{
	return ((::BRepBuilderAPI_MakeSolid*)_NativeInstance)->IsDone();
}

Macad::Occt::TopoDS_Solid^ Macad::Occt::BRepBuilderAPI_MakeSolid::Solid()
{
	::TopoDS_Solid* _result = new ::TopoDS_Solid();
	*_result =  (::TopoDS_Solid)((::BRepBuilderAPI_MakeSolid*)_NativeInstance)->Solid();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Solid(_result);
}

bool Macad::Occt::BRepBuilderAPI_MakeSolid::IsDeleted(Macad::Occt::TopoDS_Shape^ S)
{
	return ((::BRepBuilderAPI_MakeSolid*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeVertex
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_MakeVertex::BRepBuilderAPI_MakeVertex(Macad::Occt::Pnt P)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	_NativeInstance = new ::BRepBuilderAPI_MakeVertex(*(gp_Pnt*)pp_P);
}

Macad::Occt::BRepBuilderAPI_MakeVertex::BRepBuilderAPI_MakeVertex(Macad::Occt::BRepBuilderAPI_MakeVertex^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeVertex(*(::BRepBuilderAPI_MakeVertex*)parameter1->NativeInstance);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepBuilderAPI_MakeVertex::Vertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepBuilderAPI_MakeVertex*)_NativeInstance)->Vertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_MakeWire
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire()
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeWire();
}

Macad::Occt::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Edge^ E)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeWire(*(::TopoDS_Edge*)E->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeWire(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Edge^ E3)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeWire(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopoDS_Edge*)E3->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Edge^ E3, Macad::Occt::TopoDS_Edge^ E4)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeWire(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopoDS_Edge*)E3->NativeInstance, *(::TopoDS_Edge*)E4->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Wire^ W)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeWire(*(::TopoDS_Wire*)W->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Edge^ E)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeWire(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
}

Macad::Occt::BRepBuilderAPI_MakeWire::BRepBuilderAPI_MakeWire(Macad::Occt::BRepBuilderAPI_MakeWire^ parameter1)
	: Macad::Occt::BRepBuilderAPI_MakeShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_MakeWire(*(::BRepBuilderAPI_MakeWire*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_MakeWire::Add(Macad::Occt::TopoDS_Edge^ E)
{
	((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Add(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_MakeWire::Add(Macad::Occt::TopoDS_Wire^ W)
{
	((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Add(*(::TopoDS_Wire*)W->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_MakeWire::Add(Macad::Occt::TopTools_ListOfShape^ L)
{
	((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Add(*(::TopTools_ListOfShape*)L->NativeInstance);
}

bool Macad::Occt::BRepBuilderAPI_MakeWire::IsDone()
{
	return ((::BRepBuilderAPI_MakeWire*)_NativeInstance)->IsDone();
}

Macad::Occt::BRepBuilderAPI_WireError Macad::Occt::BRepBuilderAPI_MakeWire::Error()
{
	return (Macad::Occt::BRepBuilderAPI_WireError)((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Error();
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepBuilderAPI_MakeWire::Wire()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result =  (::TopoDS_Wire)((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Wire();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepBuilderAPI_MakeWire::Edge()
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Edge();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepBuilderAPI_MakeWire::Vertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepBuilderAPI_MakeWire*)_NativeInstance)->Vertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_NurbsConvert
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_NurbsConvert::BRepBuilderAPI_NurbsConvert()
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_NurbsConvert();
}

Macad::Occt::BRepBuilderAPI_NurbsConvert::BRepBuilderAPI_NurbsConvert(Macad::Occt::TopoDS_Shape^ S, bool Copy)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_NurbsConvert(*(::TopoDS_Shape*)S->NativeInstance, Copy);
}

Macad::Occt::BRepBuilderAPI_NurbsConvert::BRepBuilderAPI_NurbsConvert(Macad::Occt::TopoDS_Shape^ S)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_NurbsConvert(*(::TopoDS_Shape*)S->NativeInstance, false);
}

Macad::Occt::BRepBuilderAPI_NurbsConvert::BRepBuilderAPI_NurbsConvert(Macad::Occt::BRepBuilderAPI_NurbsConvert^ parameter1)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_NurbsConvert(*(::BRepBuilderAPI_NurbsConvert*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_NurbsConvert::Perform(Macad::Occt::TopoDS_Shape^ S, bool Copy)
{
	((::BRepBuilderAPI_NurbsConvert*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, Copy);
}

void Macad::Occt::BRepBuilderAPI_NurbsConvert::Perform(Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepBuilderAPI_NurbsConvert*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, false);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepBuilderAPI_NurbsConvert::Modified(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepBuilderAPI_NurbsConvert*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepBuilderAPI_NurbsConvert::ModifiedShape(Macad::Occt::TopoDS_Shape^ S)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepBuilderAPI_NurbsConvert*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}




//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Sewing
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_Sewing::BRepBuilderAPI_Sewing(double tolerance, bool option1, bool option2, bool option3, bool option4)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepBuilderAPI_Sewing(tolerance, option1, option2, option3, option4);
}

Macad::Occt::BRepBuilderAPI_Sewing::BRepBuilderAPI_Sewing(double tolerance, bool option1, bool option2, bool option3)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepBuilderAPI_Sewing(tolerance, option1, option2, option3, false);
}

Macad::Occt::BRepBuilderAPI_Sewing::BRepBuilderAPI_Sewing(double tolerance, bool option1, bool option2)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepBuilderAPI_Sewing(tolerance, option1, option2, true, false);
}

Macad::Occt::BRepBuilderAPI_Sewing::BRepBuilderAPI_Sewing(double tolerance, bool option1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepBuilderAPI_Sewing(tolerance, option1, true, true, false);
}

Macad::Occt::BRepBuilderAPI_Sewing::BRepBuilderAPI_Sewing(double tolerance)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepBuilderAPI_Sewing(tolerance, true, true, true, false);
}

Macad::Occt::BRepBuilderAPI_Sewing::BRepBuilderAPI_Sewing(Macad::Occt::BRepBuilderAPI_Sewing^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepBuilderAPI_Sewing(*(::BRepBuilderAPI_Sewing*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_Sewing::Init(double tolerance, bool option1, bool option2, bool option3, bool option4)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->Init(tolerance, option1, option2, option3, option4);
}

void Macad::Occt::BRepBuilderAPI_Sewing::Init(double tolerance, bool option1, bool option2, bool option3)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->Init(tolerance, option1, option2, option3, false);
}

void Macad::Occt::BRepBuilderAPI_Sewing::Init(double tolerance, bool option1, bool option2)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->Init(tolerance, option1, option2, true, false);
}

void Macad::Occt::BRepBuilderAPI_Sewing::Init(double tolerance, bool option1)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->Init(tolerance, option1, true, true, false);
}

void Macad::Occt::BRepBuilderAPI_Sewing::Init(double tolerance)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->Init(tolerance, true, true, true, false);
}

void Macad::Occt::BRepBuilderAPI_Sewing::Init()
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->Init(9.9999999999999995E-7, true, true, true, false);
}

void Macad::Occt::BRepBuilderAPI_Sewing::Load(Macad::Occt::TopoDS_Shape^ shape)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->Load(*(::TopoDS_Shape*)shape->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_Sewing::Add(Macad::Occt::TopoDS_Shape^ shape)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->Add(*(::TopoDS_Shape*)shape->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_Sewing::Perform(Macad::Occt::Message_ProgressRange^ theProgress)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theProgress->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_Sewing::Perform()
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->Perform(::Message_ProgressRange());
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepBuilderAPI_Sewing::SewedShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepBuilderAPI_Sewing*)_NativeInstance)->SewedShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepBuilderAPI_Sewing::SetContext(Macad::Occt::BRepTools_ReShape^ theContext)
{
	Handle(::BRepTools_ReShape) h_theContext = theContext->NativeInstance;
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetContext(h_theContext);
	theContext->NativeInstance = h_theContext.get();
}

Macad::Occt::BRepTools_ReShape^ Macad::Occt::BRepBuilderAPI_Sewing::GetContext()
{
	Handle(::BRepTools_ReShape) _result;
	_result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->GetContext();
	 return _result.IsNull() ? nullptr : Macad::Occt::BRepTools_ReShape::CreateDowncasted( _result.get());
}

int Macad::Occt::BRepBuilderAPI_Sewing::NbFreeEdges()
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->NbFreeEdges();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepBuilderAPI_Sewing::FreeEdge(int index)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepBuilderAPI_Sewing*)_NativeInstance)->FreeEdge(index);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

int Macad::Occt::BRepBuilderAPI_Sewing::NbMultipleEdges()
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->NbMultipleEdges();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepBuilderAPI_Sewing::MultipleEdge(int index)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepBuilderAPI_Sewing*)_NativeInstance)->MultipleEdge(index);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

int Macad::Occt::BRepBuilderAPI_Sewing::NbContigousEdges()
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->NbContigousEdges();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepBuilderAPI_Sewing::ContigousEdge(int index)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepBuilderAPI_Sewing*)_NativeInstance)->ContigousEdge(index);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepBuilderAPI_Sewing::ContigousEdgeCouple(int index)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepBuilderAPI_Sewing*)_NativeInstance)->ContigousEdgeCouple(index);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepBuilderAPI_Sewing::IsSectionBound(Macad::Occt::TopoDS_Edge^ section)
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->IsSectionBound(*(::TopoDS_Edge*)section->NativeInstance);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepBuilderAPI_Sewing::SectionToBoundary(Macad::Occt::TopoDS_Edge^ section)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepBuilderAPI_Sewing*)_NativeInstance)->SectionToBoundary(*(::TopoDS_Edge*)section->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

int Macad::Occt::BRepBuilderAPI_Sewing::NbDegeneratedShapes()
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->NbDegeneratedShapes();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepBuilderAPI_Sewing::DegeneratedShape(int index)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepBuilderAPI_Sewing*)_NativeInstance)->DegeneratedShape(index);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::BRepBuilderAPI_Sewing::IsDegenerated(Macad::Occt::TopoDS_Shape^ shape)
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->IsDegenerated(*(::TopoDS_Shape*)shape->NativeInstance);
}

bool Macad::Occt::BRepBuilderAPI_Sewing::IsModified(Macad::Occt::TopoDS_Shape^ shape)
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->IsModified(*(::TopoDS_Shape*)shape->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepBuilderAPI_Sewing::Modified(Macad::Occt::TopoDS_Shape^ shape)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepBuilderAPI_Sewing*)_NativeInstance)->Modified(*(::TopoDS_Shape*)shape->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::BRepBuilderAPI_Sewing::IsModifiedSubShape(Macad::Occt::TopoDS_Shape^ shape)
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->IsModifiedSubShape(*(::TopoDS_Shape*)shape->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepBuilderAPI_Sewing::ModifiedSubShape(Macad::Occt::TopoDS_Shape^ shape)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->ModifiedSubShape(*(::TopoDS_Shape*)shape->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepBuilderAPI_Sewing::Dump()
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->Dump();
}

int Macad::Occt::BRepBuilderAPI_Sewing::NbDeletedFaces()
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->NbDeletedFaces();
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepBuilderAPI_Sewing::DeletedFace(int index)
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::BRepBuilderAPI_Sewing*)_NativeInstance)->DeletedFace(index);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepBuilderAPI_Sewing::WhichFace(Macad::Occt::TopoDS_Edge^ theEdg, int index)
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->WhichFace(*(::TopoDS_Edge*)theEdg->NativeInstance, index);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepBuilderAPI_Sewing::WhichFace(Macad::Occt::TopoDS_Edge^ theEdg)
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = ((::BRepBuilderAPI_Sewing*)_NativeInstance)->WhichFace(*(::TopoDS_Edge*)theEdg->NativeInstance, 1);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

bool Macad::Occt::BRepBuilderAPI_Sewing::SameParameterMode()
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->SameParameterMode();
}

void Macad::Occt::BRepBuilderAPI_Sewing::SetSameParameterMode(bool SameParameterMode)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetSameParameterMode(SameParameterMode);
}

double Macad::Occt::BRepBuilderAPI_Sewing::Tolerance()
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->Tolerance();
}

void Macad::Occt::BRepBuilderAPI_Sewing::SetTolerance(double theToler)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetTolerance(theToler);
}

double Macad::Occt::BRepBuilderAPI_Sewing::MinTolerance()
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->MinTolerance();
}

void Macad::Occt::BRepBuilderAPI_Sewing::SetMinTolerance(double theMinToler)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetMinTolerance(theMinToler);
}

double Macad::Occt::BRepBuilderAPI_Sewing::MaxTolerance()
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->MaxTolerance();
}

void Macad::Occt::BRepBuilderAPI_Sewing::SetMaxTolerance(double theMaxToler)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetMaxTolerance(theMaxToler);
}

bool Macad::Occt::BRepBuilderAPI_Sewing::FaceMode()
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->FaceMode();
}

void Macad::Occt::BRepBuilderAPI_Sewing::SetFaceMode(bool theFaceMode)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetFaceMode(theFaceMode);
}

bool Macad::Occt::BRepBuilderAPI_Sewing::FloatingEdgesMode()
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->FloatingEdgesMode();
}

void Macad::Occt::BRepBuilderAPI_Sewing::SetFloatingEdgesMode(bool theFloatingEdgesMode)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetFloatingEdgesMode(theFloatingEdgesMode);
}

bool Macad::Occt::BRepBuilderAPI_Sewing::LocalTolerancesMode()
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->LocalTolerancesMode();
}

void Macad::Occt::BRepBuilderAPI_Sewing::SetLocalTolerancesMode(bool theLocalTolerancesMode)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetLocalTolerancesMode(theLocalTolerancesMode);
}

void Macad::Occt::BRepBuilderAPI_Sewing::SetNonManifoldMode(bool theNonManifoldMode)
{
	((::BRepBuilderAPI_Sewing*)_NativeInstance)->SetNonManifoldMode(theNonManifoldMode);
}

bool Macad::Occt::BRepBuilderAPI_Sewing::NonManifoldMode()
{
	return ((::BRepBuilderAPI_Sewing*)_NativeInstance)->NonManifoldMode();
}


Macad::Occt::BRepBuilderAPI_Sewing^ Macad::Occt::BRepBuilderAPI_Sewing::CreateDowncasted(::BRepBuilderAPI_Sewing* instance)
{
	return gcnew Macad::Occt::BRepBuilderAPI_Sewing( instance );
}



//---------------------------------------------------------------------
//  Class  BRepBuilderAPI_Transform
//---------------------------------------------------------------------

Macad::Occt::BRepBuilderAPI_Transform::BRepBuilderAPI_Transform(Macad::Occt::Trsf T)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	_NativeInstance = new ::BRepBuilderAPI_Transform(*(gp_Trsf*)pp_T);
}

Macad::Occt::BRepBuilderAPI_Transform::BRepBuilderAPI_Transform(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Trsf T, bool Copy)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	_NativeInstance = new ::BRepBuilderAPI_Transform(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Trsf*)pp_T, Copy);
}

Macad::Occt::BRepBuilderAPI_Transform::BRepBuilderAPI_Transform(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Trsf T)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	_NativeInstance = new ::BRepBuilderAPI_Transform(*(::TopoDS_Shape*)S->NativeInstance, *(gp_Trsf*)pp_T, false);
}

Macad::Occt::BRepBuilderAPI_Transform::BRepBuilderAPI_Transform(Macad::Occt::BRepBuilderAPI_Transform^ parameter1)
	: Macad::Occt::BRepBuilderAPI_ModifyShape(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepBuilderAPI_Transform(*(::BRepBuilderAPI_Transform*)parameter1->NativeInstance);
}

void Macad::Occt::BRepBuilderAPI_Transform::Perform(Macad::Occt::TopoDS_Shape^ S, bool Copy)
{
	((::BRepBuilderAPI_Transform*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, Copy);
}

void Macad::Occt::BRepBuilderAPI_Transform::Perform(Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepBuilderAPI_Transform*)_NativeInstance)->Perform(*(::TopoDS_Shape*)S->NativeInstance, false);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepBuilderAPI_Transform::ModifiedShape(Macad::Occt::TopoDS_Shape^ S)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepBuilderAPI_Transform*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepBuilderAPI_Transform::Modified(Macad::Occt::TopoDS_Shape^ S)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepBuilderAPI_Transform*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}



