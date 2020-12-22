// Generated wrapper code for package StdSelect

#include "OcctPCH.h"
#include "StdSelect.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "StdSelect.h"
#include "SelectMgr.h"
#include "TopoDS.h"
#include "TopAbs.h"
#include "Standard.h"
#include "PrsMgr.h"
#include "Prs3d.h"
#include "TopLoc.h"
#include "V3d.h"
#include "Graphic3d.h"
#include "Geom.h"
#include "TColgp.h"
#include "Image.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  StdSelect_BRepSelectionTool
//---------------------------------------------------------------------

Macad::Occt::StdSelect_BRepSelectionTool::StdSelect_BRepSelectionTool()
	: BaseClass<::StdSelect_BRepSelectionTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::StdSelect_BRepSelectionTool();
}

Macad::Occt::StdSelect_BRepSelectionTool::StdSelect_BRepSelectionTool(Macad::Occt::StdSelect_BRepSelectionTool^ parameter1)
	: BaseClass<::StdSelect_BRepSelectionTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::StdSelect_BRepSelectionTool(*(::StdSelect_BRepSelectionTool*)parameter1->NativeInstance);
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge, double MaximalParameter)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	::StdSelect_BRepSelectionTool::Load(h_aSelection, *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, NbPOnEdge, MaximalParameter);
	aSelection->NativeInstance = h_aSelection.get();
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	::StdSelect_BRepSelectionTool::Load(h_aSelection, *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, NbPOnEdge, 500);
	aSelection->NativeInstance = h_aSelection.get();
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	::StdSelect_BRepSelectionTool::Load(h_aSelection, *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, 9, 500);
	aSelection->NativeInstance = h_aSelection.get();
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	::StdSelect_BRepSelectionTool::Load(h_aSelection, *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, -1, 9, 500);
	aSelection->NativeInstance = h_aSelection.get();
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	::StdSelect_BRepSelectionTool::Load(h_aSelection, *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, true, -1, 9, 500);
	aSelection->NativeInstance = h_aSelection.get();
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge, double MaximalParameter)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	Handle(::SelectMgr_SelectableObject) h_Origin = Origin->NativeInstance;
	::StdSelect_BRepSelectionTool::Load(h_aSelection, h_Origin, *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, NbPOnEdge, MaximalParameter);
	aSelection->NativeInstance = h_aSelection.get();
	Origin->NativeInstance = h_Origin.get();
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	Handle(::SelectMgr_SelectableObject) h_Origin = Origin->NativeInstance;
	::StdSelect_BRepSelectionTool::Load(h_aSelection, h_Origin, *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, NbPOnEdge, 500);
	aSelection->NativeInstance = h_aSelection.get();
	Origin->NativeInstance = h_Origin.get();
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	Handle(::SelectMgr_SelectableObject) h_Origin = Origin->NativeInstance;
	::StdSelect_BRepSelectionTool::Load(h_aSelection, h_Origin, *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, 9, 500);
	aSelection->NativeInstance = h_aSelection.get();
	Origin->NativeInstance = h_Origin.get();
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	Handle(::SelectMgr_SelectableObject) h_Origin = Origin->NativeInstance;
	::StdSelect_BRepSelectionTool::Load(h_aSelection, h_Origin, *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, -1, 9, 500);
	aSelection->NativeInstance = h_aSelection.get();
	Origin->NativeInstance = h_Origin.get();
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	Handle(::SelectMgr_SelectableObject) h_Origin = Origin->NativeInstance;
	::StdSelect_BRepSelectionTool::Load(h_aSelection, h_Origin, *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, true, -1, 9, 500);
	aSelection->NativeInstance = h_aSelection.get();
	Origin->NativeInstance = h_Origin.get();
}

int Macad::Occt::StdSelect_BRepSelectionTool::GetStandardPriority(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopAbs_ShapeEnum theType)
{
	return ::StdSelect_BRepSelectionTool::GetStandardPriority(*(::TopoDS_Shape*)theShape->NativeInstance, (::TopAbs_ShapeEnum)theType);
}

void Macad::Occt::StdSelect_BRepSelectionTool::ComputeSensitive(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::SelectMgr_Selection^ theSelection, double theDeflection, double theDeflAngle, int theNbPOnEdge, double theMaxiParam, bool theAutoTriang)
{
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	::StdSelect_BRepSelectionTool::ComputeSensitive(*(::TopoDS_Shape*)theShape->NativeInstance, h_theOwner, h_theSelection, theDeflection, theDeflAngle, theNbPOnEdge, theMaxiParam, theAutoTriang);
	theOwner->NativeInstance = h_theOwner.get();
	theSelection->NativeInstance = h_theSelection.get();
}

void Macad::Occt::StdSelect_BRepSelectionTool::ComputeSensitive(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::SelectMgr_Selection^ theSelection, double theDeflection, double theDeflAngle, int theNbPOnEdge, double theMaxiParam)
{
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	::StdSelect_BRepSelectionTool::ComputeSensitive(*(::TopoDS_Shape*)theShape->NativeInstance, h_theOwner, h_theSelection, theDeflection, theDeflAngle, theNbPOnEdge, theMaxiParam, true);
	theOwner->NativeInstance = h_theOwner.get();
	theSelection->NativeInstance = h_theSelection.get();
}

void Macad::Occt::StdSelect_BRepSelectionTool::PreBuildBVH(Macad::Occt::SelectMgr_Selection^ theSelection)
{
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	::StdSelect_BRepSelectionTool::PreBuildBVH(h_theSelection);
	theSelection->NativeInstance = h_theSelection.get();
}




//---------------------------------------------------------------------
//  Class  StdSelect_BRepOwner
//---------------------------------------------------------------------

Macad::Occt::StdSelect_BRepOwner::StdSelect_BRepOwner(int aPriority)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_BRepOwner(aPriority);
}

Macad::Occt::StdSelect_BRepOwner::StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, int aPriority, bool ComesFromDecomposition)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, aPriority, ComesFromDecomposition);
}

Macad::Occt::StdSelect_BRepOwner::StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, int aPriority)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, aPriority, false);
}

Macad::Occt::StdSelect_BRepOwner::StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, 0, false);
}

Macad::Occt::StdSelect_BRepOwner::StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::SelectMgr_SelectableObject^ theOrigin, int aPriority, bool FromDecomposition)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	Handle(::SelectMgr_SelectableObject) h_theOrigin = theOrigin->NativeInstance;
	NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, h_theOrigin, aPriority, FromDecomposition);
	theOrigin->NativeInstance = h_theOrigin.get();
}

Macad::Occt::StdSelect_BRepOwner::StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::SelectMgr_SelectableObject^ theOrigin, int aPriority)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	Handle(::SelectMgr_SelectableObject) h_theOrigin = theOrigin->NativeInstance;
	NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, h_theOrigin, aPriority, false);
	theOrigin->NativeInstance = h_theOrigin.get();
}

Macad::Occt::StdSelect_BRepOwner::StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::SelectMgr_SelectableObject^ theOrigin)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	Handle(::SelectMgr_SelectableObject) h_theOrigin = theOrigin->NativeInstance;
	NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, h_theOrigin, 0, false);
	theOrigin->NativeInstance = h_theOrigin.get();
}

Macad::Occt::StdSelect_BRepOwner::StdSelect_BRepOwner(Macad::Occt::StdSelect_BRepOwner^ parameter1)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_BRepOwner(*(::StdSelect_BRepOwner*)parameter1->NativeInstance);
}

bool Macad::Occt::StdSelect_BRepOwner::HasShape()
{
	return ((::StdSelect_BRepOwner*)_NativeInstance)->HasShape();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::StdSelect_BRepOwner::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::StdSelect_BRepOwner*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::StdSelect_BRepOwner::HasHilightMode()
{
	return ((::StdSelect_BRepOwner*)_NativeInstance)->HasHilightMode();
}

void Macad::Occt::StdSelect_BRepOwner::SetHilightMode(int theMode)
{
	((::StdSelect_BRepOwner*)_NativeInstance)->SetHilightMode(theMode);
}

void Macad::Occt::StdSelect_BRepOwner::ResetHilightMode()
{
	((::StdSelect_BRepOwner*)_NativeInstance)->ResetHilightMode();
}

int Macad::Occt::StdSelect_BRepOwner::HilightMode()
{
	return ((::StdSelect_BRepOwner*)_NativeInstance)->HilightMode();
}

void Macad::Occt::StdSelect_BRepOwner::SetLocation(Macad::Occt::TopLoc_Location^ aLoc)
{
	((::StdSelect_BRepOwner*)_NativeInstance)->SetLocation(*(::TopLoc_Location*)aLoc->NativeInstance);
}


Macad::Occt::StdSelect_BRepOwner^ Macad::Occt::StdSelect_BRepOwner::CreateDowncasted(::StdSelect_BRepOwner* instance)
{
	return gcnew Macad::Occt::StdSelect_BRepOwner( instance );
}



//---------------------------------------------------------------------
//  Class  StdSelect_EdgeFilter
//---------------------------------------------------------------------

Macad::Occt::StdSelect_EdgeFilter::StdSelect_EdgeFilter(Macad::Occt::StdSelect_TypeOfEdge Edge)
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_EdgeFilter((::StdSelect_TypeOfEdge)Edge);
}

Macad::Occt::StdSelect_EdgeFilter::StdSelect_EdgeFilter(Macad::Occt::StdSelect_EdgeFilter^ parameter1)
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_EdgeFilter(*(::StdSelect_EdgeFilter*)parameter1->NativeInstance);
}

void Macad::Occt::StdSelect_EdgeFilter::SetType(Macad::Occt::StdSelect_TypeOfEdge aNewType)
{
	((::StdSelect_EdgeFilter*)_NativeInstance)->SetType((::StdSelect_TypeOfEdge)aNewType);
}

Macad::Occt::StdSelect_TypeOfEdge Macad::Occt::StdSelect_EdgeFilter::Type()
{
	return (Macad::Occt::StdSelect_TypeOfEdge)((::StdSelect_EdgeFilter*)_NativeInstance)->Type();
}

bool Macad::Occt::StdSelect_EdgeFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
	Handle(::SelectMgr_EntityOwner) h_anobj = anobj->NativeInstance;
	return ((::StdSelect_EdgeFilter*)_NativeInstance)->IsOk(h_anobj);
	anobj->NativeInstance = h_anobj.get();
}

bool Macad::Occt::StdSelect_EdgeFilter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode)
{
	return ((::StdSelect_EdgeFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
}


Macad::Occt::StdSelect_EdgeFilter^ Macad::Occt::StdSelect_EdgeFilter::CreateDowncasted(::StdSelect_EdgeFilter* instance)
{
	return gcnew Macad::Occt::StdSelect_EdgeFilter( instance );
}



//---------------------------------------------------------------------
//  Class  StdSelect_FaceFilter
//---------------------------------------------------------------------

Macad::Occt::StdSelect_FaceFilter::StdSelect_FaceFilter(Macad::Occt::StdSelect_TypeOfFace aTypeOfFace)
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_FaceFilter((::StdSelect_TypeOfFace)aTypeOfFace);
}

Macad::Occt::StdSelect_FaceFilter::StdSelect_FaceFilter(Macad::Occt::StdSelect_FaceFilter^ parameter1)
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_FaceFilter(*(::StdSelect_FaceFilter*)parameter1->NativeInstance);
}

void Macad::Occt::StdSelect_FaceFilter::SetType(Macad::Occt::StdSelect_TypeOfFace aNewType)
{
	((::StdSelect_FaceFilter*)_NativeInstance)->SetType((::StdSelect_TypeOfFace)aNewType);
}

Macad::Occt::StdSelect_TypeOfFace Macad::Occt::StdSelect_FaceFilter::Type()
{
	return (Macad::Occt::StdSelect_TypeOfFace)((::StdSelect_FaceFilter*)_NativeInstance)->Type();
}

bool Macad::Occt::StdSelect_FaceFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
	Handle(::SelectMgr_EntityOwner) h_anobj = anobj->NativeInstance;
	return ((::StdSelect_FaceFilter*)_NativeInstance)->IsOk(h_anobj);
	anobj->NativeInstance = h_anobj.get();
}

bool Macad::Occt::StdSelect_FaceFilter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode)
{
	return ((::StdSelect_FaceFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
}


Macad::Occt::StdSelect_FaceFilter^ Macad::Occt::StdSelect_FaceFilter::CreateDowncasted(::StdSelect_FaceFilter* instance)
{
	return gcnew Macad::Occt::StdSelect_FaceFilter( instance );
}



//---------------------------------------------------------------------
//  Class  StdSelect_ShapeTypeFilter
//---------------------------------------------------------------------

Macad::Occt::StdSelect_ShapeTypeFilter::StdSelect_ShapeTypeFilter(Macad::Occt::TopAbs_ShapeEnum aType)
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_ShapeTypeFilter((::TopAbs_ShapeEnum)aType);
}

Macad::Occt::StdSelect_ShapeTypeFilter::StdSelect_ShapeTypeFilter(Macad::Occt::StdSelect_ShapeTypeFilter^ parameter1)
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_ShapeTypeFilter(*(::StdSelect_ShapeTypeFilter*)parameter1->NativeInstance);
}

bool Macad::Occt::StdSelect_ShapeTypeFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
	Handle(::SelectMgr_EntityOwner) h_anobj = anobj->NativeInstance;
	return ((::StdSelect_ShapeTypeFilter*)_NativeInstance)->IsOk(h_anobj);
	anobj->NativeInstance = h_anobj.get();
}

Macad::Occt::TopAbs_ShapeEnum Macad::Occt::StdSelect_ShapeTypeFilter::Type()
{
	return (Macad::Occt::TopAbs_ShapeEnum)((::StdSelect_ShapeTypeFilter*)_NativeInstance)->Type();
}

bool Macad::Occt::StdSelect_ShapeTypeFilter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode)
{
	return ((::StdSelect_ShapeTypeFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
}


Macad::Occt::StdSelect_ShapeTypeFilter^ Macad::Occt::StdSelect_ShapeTypeFilter::CreateDowncasted(::StdSelect_ShapeTypeFilter* instance)
{
	return gcnew Macad::Occt::StdSelect_ShapeTypeFilter( instance );
}



//---------------------------------------------------------------------
//  Class  StdSelect_Prs
//---------------------------------------------------------------------

Macad::Occt::StdSelect_Prs::StdSelect_Prs(Macad::Occt::Graphic3d_StructureManager^ aStructureManager)
	: Macad::Occt::Graphic3d_Structure(BaseClass::InitMode::Uninitialized)
{
	Handle(::Graphic3d_StructureManager) h_aStructureManager = aStructureManager->NativeInstance;
	NativeInstance = new ::StdSelect_Prs(h_aStructureManager);
	aStructureManager->NativeInstance = h_aStructureManager.get();
}

Macad::Occt::StdSelect_Prs::StdSelect_Prs(Macad::Occt::StdSelect_Prs^ parameter1)
	: Macad::Occt::Graphic3d_Structure(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_Prs(*(::StdSelect_Prs*)parameter1->NativeInstance);
}

Macad::Occt::Graphic3d_StructureManager^ Macad::Occt::StdSelect_Prs::Manager()
{
	Handle(::Graphic3d_StructureManager) _result;
	_result = ((::StdSelect_Prs*)_NativeInstance)->Manager();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_StructureManager::CreateDowncasted( _result.get());
}


Macad::Occt::StdSelect_Prs^ Macad::Occt::StdSelect_Prs::CreateDowncasted(::StdSelect_Prs* instance)
{
	return gcnew Macad::Occt::StdSelect_Prs( instance );
}



//---------------------------------------------------------------------
//  Class  StdSelect_Shape
//---------------------------------------------------------------------

Macad::Occt::StdSelect_Shape::StdSelect_Shape(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Prs3d_Drawer^ theDrawer)
	: Macad::Occt::PrsMgr_PresentableObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Prs3d_Drawer) h_theDrawer = theDrawer->NativeInstance;
	NativeInstance = new ::StdSelect_Shape(*(::TopoDS_Shape*)theShape->NativeInstance, h_theDrawer);
	theDrawer->NativeInstance = h_theDrawer.get();
}

Macad::Occt::StdSelect_Shape::StdSelect_Shape(Macad::Occt::TopoDS_Shape^ theShape)
	: Macad::Occt::PrsMgr_PresentableObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_Shape(*(::TopoDS_Shape*)theShape->NativeInstance, ::opencascade::handle<::Prs3d_Drawer>());
}

Macad::Occt::StdSelect_Shape::StdSelect_Shape(Macad::Occt::StdSelect_Shape^ parameter1)
	: Macad::Occt::PrsMgr_PresentableObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_Shape(*(::StdSelect_Shape*)parameter1->NativeInstance);
}

void Macad::Occt::StdSelect_Shape::Compute(Macad::Occt::Prs3d_Projector^ aProjector, Macad::Occt::Geom_Transformation^ aTrsf, Macad::Occt::Graphic3d_Structure^ aPresentation)
{
	Handle(::Prs3d_Projector) h_aProjector = aProjector->NativeInstance;
	Handle(::Geom_Transformation) h_aTrsf = aTrsf->NativeInstance;
	Handle(::Graphic3d_Structure) h_aPresentation = aPresentation->NativeInstance;
	((::StdSelect_Shape*)_NativeInstance)->Compute(h_aProjector, h_aTrsf, h_aPresentation);
	aProjector->NativeInstance = h_aProjector.get();
	aTrsf->NativeInstance = h_aTrsf.get();
	aPresentation->NativeInstance = h_aPresentation.get();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::StdSelect_Shape::Shape()
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}

void Macad::Occt::StdSelect_Shape::Shape(Macad::Occt::TopoDS_Shape^ theShape)
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}


Macad::Occt::StdSelect_Shape^ Macad::Occt::StdSelect_Shape::CreateDowncasted(::StdSelect_Shape* instance)
{
	return gcnew Macad::Occt::StdSelect_Shape( instance );
}



//---------------------------------------------------------------------
//  Class  StdSelect
//---------------------------------------------------------------------

Macad::Occt::StdSelect::StdSelect()
	: BaseClass<::StdSelect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::StdSelect();
}

Macad::Occt::StdSelect::StdSelect(Macad::Occt::StdSelect^ parameter1)
	: BaseClass<::StdSelect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::StdSelect(*(::StdSelect*)parameter1->NativeInstance);
}

void Macad::Occt::StdSelect::SetDrawerForBRepOwner(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::Prs3d_Drawer^ aDrawer)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	Handle(::Prs3d_Drawer) h_aDrawer = aDrawer->NativeInstance;
	::StdSelect::SetDrawerForBRepOwner(h_aSelection, h_aDrawer);
	aSelection->NativeInstance = h_aSelection.get();
	aDrawer->NativeInstance = h_aDrawer.get();
}




//---------------------------------------------------------------------
//  Class  StdSelect_ViewerSelector3d
//---------------------------------------------------------------------

Macad::Occt::StdSelect_ViewerSelector3d::StdSelect_ViewerSelector3d()
	: Macad::Occt::SelectMgr_ViewerSelector(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_ViewerSelector3d();
}

Macad::Occt::StdSelect_ViewerSelector3d::StdSelect_ViewerSelector3d(Macad::Occt::StdSelect_ViewerSelector3d^ parameter1)
	: Macad::Occt::SelectMgr_ViewerSelector(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::StdSelect_ViewerSelector3d(*(::StdSelect_ViewerSelector3d*)parameter1->NativeInstance);
}

void Macad::Occt::StdSelect_ViewerSelector3d::SetPixelTolerance(int theTolerance)
{
	((::StdSelect_ViewerSelector3d*)_NativeInstance)->SetPixelTolerance(theTolerance);
}

int Macad::Occt::StdSelect_ViewerSelector3d::PixelTolerance()
{
	return ((::StdSelect_ViewerSelector3d*)_NativeInstance)->PixelTolerance();
}

void Macad::Occt::StdSelect_ViewerSelector3d::Pick(int theXPix, int theYPix, Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::StdSelect_ViewerSelector3d*)_NativeInstance)->Pick(theXPix, theYPix, h_theView);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::StdSelect_ViewerSelector3d::Pick(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::StdSelect_ViewerSelector3d*)_NativeInstance)->Pick(theXPMin, theYPMin, theXPMax, theYPMax, h_theView);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::StdSelect_ViewerSelector3d::Pick(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::StdSelect_ViewerSelector3d*)_NativeInstance)->Pick(*(::TColgp_Array1OfPnt2d*)thePolyline->NativeInstance, h_theView);
	theView->NativeInstance = h_theView.get();
}

bool Macad::Occt::StdSelect_ViewerSelector3d::ToPixMap(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::V3d_View^ theView, Macad::Occt::StdSelect_TypeOfSelectionImage theType, int thePickedIndex)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return ((::StdSelect_ViewerSelector3d*)_NativeInstance)->ToPixMap(*(::Image_PixMap*)theImage->NativeInstance, h_theView, (::StdSelect_TypeOfSelectionImage)theType, thePickedIndex);
	theView->NativeInstance = h_theView.get();
}

bool Macad::Occt::StdSelect_ViewerSelector3d::ToPixMap(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::V3d_View^ theView, Macad::Occt::StdSelect_TypeOfSelectionImage theType)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return ((::StdSelect_ViewerSelector3d*)_NativeInstance)->ToPixMap(*(::Image_PixMap*)theImage->NativeInstance, h_theView, (::StdSelect_TypeOfSelectionImage)theType, 1);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::StdSelect_ViewerSelector3d::DisplaySensitive(Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::StdSelect_ViewerSelector3d*)_NativeInstance)->DisplaySensitive(h_theView);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::StdSelect_ViewerSelector3d::ClearSensitive(Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::StdSelect_ViewerSelector3d*)_NativeInstance)->ClearSensitive(h_theView);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::StdSelect_ViewerSelector3d::DisplaySensitive(Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theTrsf, Macad::Occt::V3d_View^ theView, bool theToClearOthers)
{
	Handle(::SelectMgr_Selection) h_theSel = theSel->NativeInstance;
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::StdSelect_ViewerSelector3d*)_NativeInstance)->DisplaySensitive(h_theSel, *(gp_Trsf*)pp_theTrsf, h_theView, theToClearOthers);
	theSel->NativeInstance = h_theSel.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::StdSelect_ViewerSelector3d::DisplaySensitive(Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theTrsf, Macad::Occt::V3d_View^ theView)
{
	Handle(::SelectMgr_Selection) h_theSel = theSel->NativeInstance;
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::StdSelect_ViewerSelector3d*)_NativeInstance)->DisplaySensitive(h_theSel, *(gp_Trsf*)pp_theTrsf, h_theView, true);
	theSel->NativeInstance = h_theSel.get();
	theView->NativeInstance = h_theView.get();
}


Macad::Occt::StdSelect_ViewerSelector3d^ Macad::Occt::StdSelect_ViewerSelector3d::CreateDowncasted(::StdSelect_ViewerSelector3d* instance)
{
	return gcnew Macad::Occt::StdSelect_ViewerSelector3d( instance );
}


