// Generated wrapper code for package StdSelect

#include "OcctPCH.h"
#include "StdSelect.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "SelectMgr.h"
#include "Prs3d.h"
#include "TopoDS.h"
#include "PrsMgr.h"
#include "Graphic3d.h"
#include "TopLoc.h"
#include "V3d.h"
#include "TopAbs.h"
#include "TopTools.h"


//---------------------------------------------------------------------
//  Class  StdSelect
//---------------------------------------------------------------------

Macad::Occt::StdSelect::StdSelect()
    : Macad::Occt::BaseClass<::StdSelect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::StdSelect();
}

void Macad::Occt::StdSelect::SetDrawerForBRepOwner(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::Prs3d_Drawer^ aDrawer)
{
    ::StdSelect::SetDrawerForBRepOwner(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), Handle(::Prs3d_Drawer)(aDrawer->NativeInstance));
}



//---------------------------------------------------------------------
//  Class  StdSelect_Shape
//---------------------------------------------------------------------

Macad::Occt::StdSelect_Shape::StdSelect_Shape(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Prs3d_Drawer^ theDrawer)
    : Macad::Occt::PrsMgr_PresentableObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::StdSelect_Shape(*(::TopoDS_Shape*)theShape->NativeInstance, Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

Macad::Occt::StdSelect_Shape::StdSelect_Shape(Macad::Occt::TopoDS_Shape^ theShape)
    : Macad::Occt::PrsMgr_PresentableObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::StdSelect_Shape(*(::TopoDS_Shape*)theShape->NativeInstance, ::opencascade::handle<::Prs3d_Drawer>());
}

void Macad::Occt::StdSelect_Shape::Compute(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Graphic3d_Structure^ thePrs, int theMode)
{
    ((::StdSelect_Shape*)_NativeInstance)->Compute(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Graphic3d_Structure)(thePrs->NativeInstance), theMode);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::StdSelect_Shape::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::StdSelect_Shape*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::StdSelect_Shape::Shape(Macad::Occt::TopoDS_Shape^ theShape)
{
    ((::StdSelect_Shape*)_NativeInstance)->Shape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void Macad::Occt::StdSelect_Shape::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::StdSelect_Shape*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::StdSelect_Shape::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::StdSelect_Shape*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::StdSelect_Shape^ Macad::Occt::StdSelect_Shape::CreateDowncasted(::StdSelect_Shape* instance)
{
    return gcnew Macad::Occt::StdSelect_Shape( instance );
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
    NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, Handle(::SelectMgr_SelectableObject)(theOrigin->NativeInstance), aPriority, FromDecomposition);
}

Macad::Occt::StdSelect_BRepOwner::StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::SelectMgr_SelectableObject^ theOrigin, int aPriority)
    : Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, Handle(::SelectMgr_SelectableObject)(theOrigin->NativeInstance), aPriority, false);
}

Macad::Occt::StdSelect_BRepOwner::StdSelect_BRepOwner(Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::SelectMgr_SelectableObject^ theOrigin)
    : Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::StdSelect_BRepOwner(*(::TopoDS_Shape*)aShape->NativeInstance, Handle(::SelectMgr_SelectableObject)(theOrigin->NativeInstance), 0, false);
}

bool Macad::Occt::StdSelect_BRepOwner::HasShape()
{
    bool _result = ((::StdSelect_BRepOwner*)_NativeInstance)->HasShape();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::StdSelect_BRepOwner::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::StdSelect_BRepOwner*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::StdSelect_BRepOwner::HasHilightMode()
{
    bool _result = ((::StdSelect_BRepOwner*)_NativeInstance)->HasHilightMode();
    return _result;
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
    int _result = ((::StdSelect_BRepOwner*)_NativeInstance)->HilightMode();
    return _result;
}

bool Macad::Occt::StdSelect_BRepOwner::IsHilighted(Macad::Occt::PrsMgr_PresentationManager^ aPM, int aMode)
{
    bool _result = ((::StdSelect_BRepOwner*)_NativeInstance)->IsHilighted(Handle(::PrsMgr_PresentationManager)(aPM->NativeInstance), aMode);
    return _result;
}

bool Macad::Occt::StdSelect_BRepOwner::IsHilighted(Macad::Occt::PrsMgr_PresentationManager^ aPM)
{
    bool _result = ((::StdSelect_BRepOwner*)_NativeInstance)->IsHilighted(Handle(::PrsMgr_PresentationManager)(aPM->NativeInstance), 0);
    return _result;
}

void Macad::Occt::StdSelect_BRepOwner::HilightWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode)
{
    ((::StdSelect_BRepOwner*)_NativeInstance)->HilightWithColor(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode);
}

void Macad::Occt::StdSelect_BRepOwner::Unhilight(Macad::Occt::PrsMgr_PresentationManager^ aPM, int aMode)
{
    ((::StdSelect_BRepOwner*)_NativeInstance)->Unhilight(Handle(::PrsMgr_PresentationManager)(aPM->NativeInstance), aMode);
}

void Macad::Occt::StdSelect_BRepOwner::Unhilight(Macad::Occt::PrsMgr_PresentationManager^ aPM)
{
    ((::StdSelect_BRepOwner*)_NativeInstance)->Unhilight(Handle(::PrsMgr_PresentationManager)(aPM->NativeInstance), 0);
}

void Macad::Occt::StdSelect_BRepOwner::Clear(Macad::Occt::PrsMgr_PresentationManager^ aPM, int aMode)
{
    ((::StdSelect_BRepOwner*)_NativeInstance)->Clear(Handle(::PrsMgr_PresentationManager)(aPM->NativeInstance), aMode);
}

void Macad::Occt::StdSelect_BRepOwner::Clear(Macad::Occt::PrsMgr_PresentationManager^ aPM)
{
    ((::StdSelect_BRepOwner*)_NativeInstance)->Clear(Handle(::PrsMgr_PresentationManager)(aPM->NativeInstance), 0);
}

void Macad::Occt::StdSelect_BRepOwner::SetLocation(Macad::Occt::TopLoc_Location^ aLoc)
{
    ((::StdSelect_BRepOwner*)_NativeInstance)->SetLocation(*(::TopLoc_Location*)aLoc->NativeInstance);
}

void Macad::Occt::StdSelect_BRepOwner::UpdateHighlightTrsf(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::PrsMgr_PresentationManager^ theManager, int theDispMode)
{
    ((::StdSelect_BRepOwner*)_NativeInstance)->UpdateHighlightTrsf(Handle(::V3d_Viewer)(theViewer->NativeInstance), Handle(::PrsMgr_PresentationManager)(theManager->NativeInstance), theDispMode);
}

void Macad::Occt::StdSelect_BRepOwner::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::StdSelect_BRepOwner*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::StdSelect_BRepOwner::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::StdSelect_BRepOwner*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::StdSelect_BRepOwner^ Macad::Occt::StdSelect_BRepOwner::CreateDowncasted(::StdSelect_BRepOwner* instance)
{
    return gcnew Macad::Occt::StdSelect_BRepOwner( instance );
}



//---------------------------------------------------------------------
//  Class  StdSelect_BRepSelectionTool
//---------------------------------------------------------------------

Macad::Occt::StdSelect_BRepSelectionTool::StdSelect_BRepSelectionTool()
    : Macad::Occt::BaseClass<::StdSelect_BRepSelectionTool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::StdSelect_BRepSelectionTool();
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge, double MaximalParameter)
{
    ::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, NbPOnEdge, MaximalParameter);
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge)
{
    ::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, NbPOnEdge, 500);
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority)
{
    ::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, 9, 500);
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation)
{
    ::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, -1, 9, 500);
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle)
{
    ::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, true, -1, 9, 500);
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge, double MaximalParameter)
{
    ::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), Handle(::SelectMgr_SelectableObject)(Origin->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, NbPOnEdge, MaximalParameter);
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority, int NbPOnEdge)
{
    ::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), Handle(::SelectMgr_SelectableObject)(Origin->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, NbPOnEdge, 500);
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation, int aPriority)
{
    ::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), Handle(::SelectMgr_SelectableObject)(Origin->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, aPriority, 9, 500);
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle, bool AutoTriangulation)
{
    ::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), Handle(::SelectMgr_SelectableObject)(Origin->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, AutoTriangulation, -1, 9, 500);
}

void Macad::Occt::StdSelect_BRepSelectionTool::Load(Macad::Occt::SelectMgr_Selection^ aSelection, Macad::Occt::SelectMgr_SelectableObject^ Origin, Macad::Occt::TopoDS_Shape^ aShape, Macad::Occt::TopAbs_ShapeEnum aType, double theDeflection, double theDeviationAngle)
{
    ::StdSelect_BRepSelectionTool::Load(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), Handle(::SelectMgr_SelectableObject)(Origin->NativeInstance), *(::TopoDS_Shape*)aShape->NativeInstance, (::TopAbs_ShapeEnum)aType, theDeflection, theDeviationAngle, true, -1, 9, 500);
}

int Macad::Occt::StdSelect_BRepSelectionTool::GetStandardPriority(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopAbs_ShapeEnum theType)
{
    int _result = ::StdSelect_BRepSelectionTool::GetStandardPriority(*(::TopoDS_Shape*)theShape->NativeInstance, (::TopAbs_ShapeEnum)theType);
    return _result;
}

void Macad::Occt::StdSelect_BRepSelectionTool::ComputeSensitive(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::SelectMgr_Selection^ theSelection, double theDeflection, double theDeflAngle, int theNbPOnEdge, double theMaxiParam, bool theAutoTriang)
{
    ::StdSelect_BRepSelectionTool::ComputeSensitive(*(::TopoDS_Shape*)theShape->NativeInstance, Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), Handle(::SelectMgr_Selection)(theSelection->NativeInstance), theDeflection, theDeflAngle, theNbPOnEdge, theMaxiParam, theAutoTriang);
}

void Macad::Occt::StdSelect_BRepSelectionTool::ComputeSensitive(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::SelectMgr_Selection^ theSelection, double theDeflection, double theDeflAngle, int theNbPOnEdge, double theMaxiParam)
{
    ::StdSelect_BRepSelectionTool::ComputeSensitive(*(::TopoDS_Shape*)theShape->NativeInstance, Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), Handle(::SelectMgr_Selection)(theSelection->NativeInstance), theDeflection, theDeflAngle, theNbPOnEdge, theMaxiParam, true);
}

bool Macad::Occt::StdSelect_BRepSelectionTool::GetSensitiveForCylinder(Macad::Occt::TopTools_IndexedMapOfShape^ theSubfacesMap, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::SelectMgr_Selection^ theSelection)
{
    bool _result = ::StdSelect_BRepSelectionTool::GetSensitiveForCylinder(*(::TopTools_IndexedMapOfShape*)theSubfacesMap->NativeInstance, Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), Handle(::SelectMgr_Selection)(theSelection->NativeInstance));
    return _result;
}

void Macad::Occt::StdSelect_BRepSelectionTool::PreBuildBVH(Macad::Occt::SelectMgr_Selection^ theSelection)
{
    ::StdSelect_BRepSelectionTool::PreBuildBVH(Handle(::SelectMgr_Selection)(theSelection->NativeInstance));
}



//---------------------------------------------------------------------
//  Class  StdSelect_EdgeFilter
//---------------------------------------------------------------------

Macad::Occt::StdSelect_EdgeFilter::StdSelect_EdgeFilter(Macad::Occt::StdSelect_TypeOfEdge Edge)
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::StdSelect_EdgeFilter((::StdSelect_TypeOfEdge)Edge);
}

void Macad::Occt::StdSelect_EdgeFilter::SetType(Macad::Occt::StdSelect_TypeOfEdge aNewType)
{
    ((::StdSelect_EdgeFilter*)_NativeInstance)->SetType((::StdSelect_TypeOfEdge)aNewType);
}

Macad::Occt::StdSelect_TypeOfEdge Macad::Occt::StdSelect_EdgeFilter::Type()
{
    ::StdSelect_TypeOfEdge _result = ((::StdSelect_EdgeFilter*)_NativeInstance)->Type();
    return (Macad::Occt::StdSelect_TypeOfEdge)_result;
}

bool Macad::Occt::StdSelect_EdgeFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
    bool _result = ((::StdSelect_EdgeFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anobj->NativeInstance));
    return _result;
}

bool Macad::Occt::StdSelect_EdgeFilter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode)
{
    bool _result = ((::StdSelect_EdgeFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
    return _result;
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

void Macad::Occt::StdSelect_FaceFilter::SetType(Macad::Occt::StdSelect_TypeOfFace aNewType)
{
    ((::StdSelect_FaceFilter*)_NativeInstance)->SetType((::StdSelect_TypeOfFace)aNewType);
}

Macad::Occt::StdSelect_TypeOfFace Macad::Occt::StdSelect_FaceFilter::Type()
{
    ::StdSelect_TypeOfFace _result = ((::StdSelect_FaceFilter*)_NativeInstance)->Type();
    return (Macad::Occt::StdSelect_TypeOfFace)_result;
}

bool Macad::Occt::StdSelect_FaceFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
    bool _result = ((::StdSelect_FaceFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anobj->NativeInstance));
    return _result;
}

bool Macad::Occt::StdSelect_FaceFilter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode)
{
    bool _result = ((::StdSelect_FaceFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
    return _result;
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

Macad::Occt::TopAbs_ShapeEnum Macad::Occt::StdSelect_ShapeTypeFilter::Type()
{
    ::TopAbs_ShapeEnum _result = ((::StdSelect_ShapeTypeFilter*)_NativeInstance)->Type();
    return (Macad::Occt::TopAbs_ShapeEnum)_result;
}

bool Macad::Occt::StdSelect_ShapeTypeFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
    bool _result = ((::StdSelect_ShapeTypeFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anobj->NativeInstance));
    return _result;
}

bool Macad::Occt::StdSelect_ShapeTypeFilter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode)
{
    bool _result = ((::StdSelect_ShapeTypeFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
    return _result;
}

Macad::Occt::StdSelect_ShapeTypeFilter^ Macad::Occt::StdSelect_ShapeTypeFilter::CreateDowncasted(::StdSelect_ShapeTypeFilter* instance)
{
    return gcnew Macad::Occt::StdSelect_ShapeTypeFilter( instance );
}


