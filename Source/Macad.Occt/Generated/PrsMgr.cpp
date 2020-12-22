// Generated wrapper code for package PrsMgr

#include "OcctPCH.h"
#include "PrsMgr.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "SelectMgr.h"
#include "StdSelect.h"
#include "PrsMgr.h"
#include "Standard.h"
#include "Prs3d.h"
#include "Graphic3d.h"
#include "Geom.h"
#include "gp.h"
#include "Bnd.h"
#include "Aspect.h"
#include "Quantity.h"
#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  PrsMgr_PresentableObject
//---------------------------------------------------------------------

Macad::Occt::PrsMgr_PresentableObject::PrsMgr_PresentableObject(Macad::Occt::PrsMgr_PresentableObject^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

int Macad::Occt::PrsMgr_PresentableObject::ZLayer()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->ZLayer();
}

void Macad::Occt::PrsMgr_PresentableObject::SetZLayer(int theLayerId)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetZLayer(theLayerId);
}

bool Macad::Occt::PrsMgr_PresentableObject::IsMutable()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->IsMutable();
}

void Macad::Occt::PrsMgr_PresentableObject::SetMutable(bool theIsMutable)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetMutable(theIsMutable);
}

bool Macad::Occt::PrsMgr_PresentableObject::HasDisplayMode()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->HasDisplayMode();
}

int Macad::Occt::PrsMgr_PresentableObject::DisplayMode()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->DisplayMode();
}

void Macad::Occt::PrsMgr_PresentableObject::SetDisplayMode(int theMode)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetDisplayMode(theMode);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetDisplayMode()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetDisplayMode();
}

bool Macad::Occt::PrsMgr_PresentableObject::HasHilightMode()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->HasHilightMode();
}

int Macad::Occt::PrsMgr_PresentableObject::HilightMode()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->HilightMode();
}

void Macad::Occt::PrsMgr_PresentableObject::SetHilightMode(int theMode)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetHilightMode(theMode);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetHilightMode()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetHilightMode();
}

bool Macad::Occt::PrsMgr_PresentableObject::AcceptDisplayMode(int theMode)
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->AcceptDisplayMode(theMode);
}

int Macad::Occt::PrsMgr_PresentableObject::DefaultDisplayMode()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->DefaultDisplayMode();
}

bool Macad::Occt::PrsMgr_PresentableObject::ToBeUpdated(bool theToIncludeHidden)
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->ToBeUpdated(theToIncludeHidden);
}

bool Macad::Occt::PrsMgr_PresentableObject::ToBeUpdated()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->ToBeUpdated(false);
}

void Macad::Occt::PrsMgr_PresentableObject::SetToUpdate(int theMode)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetToUpdate(theMode);
}

void Macad::Occt::PrsMgr_PresentableObject::SetToUpdate()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetToUpdate();
}

bool Macad::Occt::PrsMgr_PresentableObject::IsInfinite()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->IsInfinite();
}

void Macad::Occt::PrsMgr_PresentableObject::SetInfiniteState(bool theFlag)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetInfiniteState(theFlag);
}

void Macad::Occt::PrsMgr_PresentableObject::SetInfiniteState()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetInfiniteState(true);
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::PrsMgr_PresentableObject::Attributes()
{
	Handle(::Prs3d_Drawer) _result;
	_result = ((::PrsMgr_PresentableObject*)_NativeInstance)->Attributes();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted( _result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::SetAttributes(Macad::Occt::Prs3d_Drawer^ theDrawer)
{
	Handle(::Prs3d_Drawer) h_theDrawer = theDrawer->NativeInstance;
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetAttributes(h_theDrawer);
	theDrawer->NativeInstance = h_theDrawer.get();
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::PrsMgr_PresentableObject::HilightAttributes()
{
	Handle(::Prs3d_Drawer) _result;
	_result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HilightAttributes();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted( _result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::SetHilightAttributes(Macad::Occt::Prs3d_Drawer^ theDrawer)
{
	Handle(::Prs3d_Drawer) h_theDrawer = theDrawer->NativeInstance;
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetHilightAttributes(h_theDrawer);
	theDrawer->NativeInstance = h_theDrawer.get();
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::PrsMgr_PresentableObject::DynamicHilightAttributes()
{
	Handle(::Prs3d_Drawer) _result;
	_result = ((::PrsMgr_PresentableObject*)_NativeInstance)->DynamicHilightAttributes();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted( _result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::SetDynamicHilightAttributes(Macad::Occt::Prs3d_Drawer^ theDrawer)
{
	Handle(::Prs3d_Drawer) h_theDrawer = theDrawer->NativeInstance;
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetDynamicHilightAttributes(h_theDrawer);
	theDrawer->NativeInstance = h_theDrawer.get();
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetHilightAttributes()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetHilightAttributes();
}

void Macad::Occt::PrsMgr_PresentableObject::SynchronizeAspects()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SynchronizeAspects();
}

Macad::Occt::Graphic3d_TransformPers^ Macad::Occt::PrsMgr_PresentableObject::TransformPersistence()
{
	Handle(::Graphic3d_TransformPers) _result;
	_result = ((::PrsMgr_PresentableObject*)_NativeInstance)->TransformPersistence();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TransformPers::CreateDowncasted( _result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
	Handle(::Graphic3d_TransformPers) h_theTrsfPers = theTrsfPers->NativeInstance;
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetTransformPersistence(h_theTrsfPers);
	theTrsfPers->NativeInstance = h_theTrsfPers.get();
}

Macad::Occt::Geom_Transformation^ Macad::Occt::PrsMgr_PresentableObject::LocalTransformationGeom()
{
	Handle(::Geom_Transformation) _result;
	_result = ((::PrsMgr_PresentableObject*)_NativeInstance)->LocalTransformationGeom();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Transformation::CreateDowncasted( _result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::SetLocalTransformation(Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetLocalTransformation(*(gp_Trsf*)pp_theTrsf);
}

void Macad::Occt::PrsMgr_PresentableObject::SetLocalTransformation(Macad::Occt::Geom_Transformation^ theTrsf)
{
	Handle(::Geom_Transformation) h_theTrsf = theTrsf->NativeInstance;
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetLocalTransformation(h_theTrsf);
	theTrsf->NativeInstance = h_theTrsf.get();
}

bool Macad::Occt::PrsMgr_PresentableObject::HasTransformation()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->HasTransformation();
}

Macad::Occt::Geom_Transformation^ Macad::Occt::PrsMgr_PresentableObject::TransformationGeom()
{
	Handle(::Geom_Transformation) _result;
	_result = ((::PrsMgr_PresentableObject*)_NativeInstance)->TransformationGeom();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Transformation::CreateDowncasted( _result.get());
}

Macad::Occt::Trsf Macad::Occt::PrsMgr_PresentableObject::LocalTransformation()
{
	return Macad::Occt::Trsf(((::PrsMgr_PresentableObject*)_NativeInstance)->LocalTransformation());
}

Macad::Occt::Trsf Macad::Occt::PrsMgr_PresentableObject::Transformation()
{
	return Macad::Occt::Trsf(((::PrsMgr_PresentableObject*)_NativeInstance)->Transformation());
}

Macad::Occt::gp_GTrsf^ Macad::Occt::PrsMgr_PresentableObject::InversedTransformation()
{
	::gp_GTrsf* _result = new ::gp_GTrsf();
	*_result =  (::gp_GTrsf)((::PrsMgr_PresentableObject*)_NativeInstance)->InversedTransformation();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf(_result);
}

Macad::Occt::Geom_Transformation^ Macad::Occt::PrsMgr_PresentableObject::CombinedParentTransformation()
{
	Handle(::Geom_Transformation) _result;
	_result = ((::PrsMgr_PresentableObject*)_NativeInstance)->CombinedParentTransformation();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Transformation::CreateDowncasted( _result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::ResetTransformation()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->ResetTransformation();
}

void Macad::Occt::PrsMgr_PresentableObject::UpdateTransformation()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->UpdateTransformation();
}

Macad::Occt::Graphic3d_SequenceOfHClipPlane^ Macad::Occt::PrsMgr_PresentableObject::ClipPlanes()
{
	Handle(::Graphic3d_SequenceOfHClipPlane) _result;
	_result = ((::PrsMgr_PresentableObject*)_NativeInstance)->ClipPlanes();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_SequenceOfHClipPlane::CreateDowncasted( _result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes)
{
	Handle(::Graphic3d_SequenceOfHClipPlane) h_thePlanes = thePlanes->NativeInstance;
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetClipPlanes(h_thePlanes);
	thePlanes->NativeInstance = h_thePlanes.get();
}

void Macad::Occt::PrsMgr_PresentableObject::AddClipPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane)
{
	Handle(::Graphic3d_ClipPlane) h_thePlane = thePlane->NativeInstance;
	((::PrsMgr_PresentableObject*)_NativeInstance)->AddClipPlane(h_thePlane);
	thePlane->NativeInstance = h_thePlane.get();
}

void Macad::Occt::PrsMgr_PresentableObject::RemoveClipPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane)
{
	Handle(::Graphic3d_ClipPlane) h_thePlane = thePlane->NativeInstance;
	((::PrsMgr_PresentableObject*)_NativeInstance)->RemoveClipPlane(h_thePlane);
	thePlane->NativeInstance = h_thePlane.get();
}

Macad::Occt::PrsMgr_PresentableObject^ Macad::Occt::PrsMgr_PresentableObject::Parent()
{
	::PrsMgr_PresentableObject* _result;
	_result = (::PrsMgr_PresentableObject*)((::PrsMgr_PresentableObject*)_NativeInstance)->Parent();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::PrsMgr_PresentableObject(_result);
}

void Macad::Occt::PrsMgr_PresentableObject::AddChild(Macad::Occt::PrsMgr_PresentableObject^ theObject)
{
	Handle(::PrsMgr_PresentableObject) h_theObject = theObject->NativeInstance;
	((::PrsMgr_PresentableObject*)_NativeInstance)->AddChild(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::PrsMgr_PresentableObject::AddChildWithCurrentTransformation(Macad::Occt::PrsMgr_PresentableObject^ theObject)
{
	Handle(::PrsMgr_PresentableObject) h_theObject = theObject->NativeInstance;
	((::PrsMgr_PresentableObject*)_NativeInstance)->AddChildWithCurrentTransformation(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::PrsMgr_PresentableObject::RemoveChild(Macad::Occt::PrsMgr_PresentableObject^ theObject)
{
	Handle(::PrsMgr_PresentableObject) h_theObject = theObject->NativeInstance;
	((::PrsMgr_PresentableObject*)_NativeInstance)->RemoveChild(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::PrsMgr_PresentableObject::RemoveChildWithRestoreTransformation(Macad::Occt::PrsMgr_PresentableObject^ theObject)
{
	Handle(::PrsMgr_PresentableObject) h_theObject = theObject->NativeInstance;
	((::PrsMgr_PresentableObject*)_NativeInstance)->RemoveChildWithRestoreTransformation(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::PrsMgr_PresentableObject::HasOwnPresentations()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->HasOwnPresentations();
}

void Macad::Occt::PrsMgr_PresentableObject::BoundingBox(Macad::Occt::Bnd_Box^ theBndBox)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->BoundingBox(*(::Bnd_Box*)theBndBox->NativeInstance);
}

void Macad::Occt::PrsMgr_PresentableObject::SetIsoOnTriangulation(bool theIsEnabled)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetIsoOnTriangulation(theIsEnabled);
}

Macad::Occt::Aspect_TypeOfFacingModel Macad::Occt::PrsMgr_PresentableObject::CurrentFacingModel()
{
	return (Macad::Occt::Aspect_TypeOfFacingModel)((::PrsMgr_PresentableObject*)_NativeInstance)->CurrentFacingModel();
}

void Macad::Occt::PrsMgr_PresentableObject::SetCurrentFacingModel(Macad::Occt::Aspect_TypeOfFacingModel theModel)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetCurrentFacingModel((::Aspect_TypeOfFacingModel)theModel);
}

void Macad::Occt::PrsMgr_PresentableObject::SetCurrentFacingModel()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetCurrentFacingModel(Aspect_TOFM_BOTH_SIDE);
}

bool Macad::Occt::PrsMgr_PresentableObject::HasColor()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->HasColor();
}

void Macad::Occt::PrsMgr_PresentableObject::Color(Macad::Occt::Quantity_Color^ theColor)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->Color(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::PrsMgr_PresentableObject::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetColor()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetColor();
}

bool Macad::Occt::PrsMgr_PresentableObject::HasWidth()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->HasWidth();
}

double Macad::Occt::PrsMgr_PresentableObject::Width()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->Width();
}

void Macad::Occt::PrsMgr_PresentableObject::SetWidth(double theWidth)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetWidth(theWidth);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetWidth()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetWidth();
}

bool Macad::Occt::PrsMgr_PresentableObject::HasMaterial()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->HasMaterial();
}

Macad::Occt::Graphic3d_NameOfMaterial Macad::Occt::PrsMgr_PresentableObject::Material()
{
	return (Macad::Occt::Graphic3d_NameOfMaterial)((::PrsMgr_PresentableObject*)_NativeInstance)->Material();
}

void Macad::Occt::PrsMgr_PresentableObject::SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ aName)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)aName->NativeInstance);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetMaterial()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetMaterial();
}

bool Macad::Occt::PrsMgr_PresentableObject::IsTransparent()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->IsTransparent();
}

double Macad::Occt::PrsMgr_PresentableObject::Transparency()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->Transparency();
}

void Macad::Occt::PrsMgr_PresentableObject::SetTransparency(double aValue)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetTransparency(aValue);
}

void Macad::Occt::PrsMgr_PresentableObject::SetTransparency()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetTransparency(0.59999999999999998);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetTransparency()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetTransparency();
}

bool Macad::Occt::PrsMgr_PresentableObject::HasPolygonOffsets()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->HasPolygonOffsets();
}

void Macad::Occt::PrsMgr_PresentableObject::PolygonOffsets(int% aMode, float% aFactor, float% aUnits)
{
	pin_ptr<int> pp_aMode = &aMode;
	pin_ptr<float> pp_aFactor = &aFactor;
	pin_ptr<float> pp_aUnits = &aUnits;
	((::PrsMgr_PresentableObject*)_NativeInstance)->PolygonOffsets(*(Standard_Integer*)pp_aMode, *(Standard_ShortReal*)pp_aFactor, *(Standard_ShortReal*)pp_aUnits);
}

void Macad::Occt::PrsMgr_PresentableObject::SetPolygonOffsets(int aMode, float aFactor, float aUnits)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetPolygonOffsets(aMode, aFactor, aUnits);
}

void Macad::Occt::PrsMgr_PresentableObject::SetPolygonOffsets(int aMode, float aFactor)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetPolygonOffsets(aMode, aFactor, 0.);
}

void Macad::Occt::PrsMgr_PresentableObject::SetPolygonOffsets(int aMode)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetPolygonOffsets(aMode, 1., 0.);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetAttributes()
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetAttributes();
}

void Macad::Occt::PrsMgr_PresentableObject::ToBeUpdated(Macad::Occt::TColStd_ListOfInteger^ ListOfMode)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->ToBeUpdated(*(::TColStd_ListOfInteger*)ListOfMode->NativeInstance);
}

void Macad::Occt::PrsMgr_PresentableObject::SetTransformPersistence(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Pnt thePoint)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetTransformPersistence((::Graphic3d_TransModeFlags)theMode, *(gp_Pnt*)pp_thePoint);
}

void Macad::Occt::PrsMgr_PresentableObject::SetTransformPersistence(Macad::Occt::Graphic3d_TransModeFlags theMode)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetTransformPersistence((::Graphic3d_TransModeFlags)theMode, ::gp_Pnt(0., 0., 0.));
}

Macad::Occt::Graphic3d_TransModeFlags Macad::Occt::PrsMgr_PresentableObject::GetTransformPersistenceMode()
{
	return (Macad::Occt::Graphic3d_TransModeFlags)((::PrsMgr_PresentableObject*)_NativeInstance)->GetTransformPersistenceMode();
}

bool Macad::Occt::PrsMgr_PresentableObject::ToPropagateVisualState()
{
	return ((::PrsMgr_PresentableObject*)_NativeInstance)->ToPropagateVisualState();
}

void Macad::Occt::PrsMgr_PresentableObject::SetPropagateVisualState(bool theFlag)
{
	((::PrsMgr_PresentableObject*)_NativeInstance)->SetPropagateVisualState(theFlag);
}


Macad::Occt::PrsMgr_PresentableObject^ Macad::Occt::PrsMgr_PresentableObject::CreateDowncasted(::PrsMgr_PresentableObject* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::SelectMgr_SelectableObject)))
		return Macad::Occt::SelectMgr_SelectableObject::CreateDowncasted((::SelectMgr_SelectableObject*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdSelect_Shape)))
		return Macad::Occt::StdSelect_Shape::CreateDowncasted((::StdSelect_Shape*)instance);

	return gcnew Macad::Occt::PrsMgr_PresentableObject( instance );
}


