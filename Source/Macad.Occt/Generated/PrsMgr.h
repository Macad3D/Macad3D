// Generated wrapper code for package PrsMgr

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  PrsMgr_PresentableObject
//---------------------------------------------------------------------
public ref class PrsMgr_PresentableObject : public Macad::Occt::Standard_Transient
{

#ifdef Include_PrsMgr_PresentableObject_h
public:
	Include_PrsMgr_PresentableObject_h
#endif

protected:
	PrsMgr_PresentableObject(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	PrsMgr_PresentableObject(::PrsMgr_PresentableObject* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	PrsMgr_PresentableObject(::PrsMgr_PresentableObject& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::PrsMgr_PresentableObject* NativeInstance
	{
		::PrsMgr_PresentableObject* get()
		{
			return static_cast<::PrsMgr_PresentableObject*>(_NativeInstance);
		}
	}

	static Macad::Occt::PrsMgr_PresentableObject^ CreateDowncasted(::PrsMgr_PresentableObject* instance);

public:
	PrsMgr_PresentableObject(Macad::Occt::PrsMgr_PresentableObject^ parameter1);
	/* Method skipped due to unknown mapping: PrsMgr_Presentations Presentations() */
	int ZLayer();
	void SetZLayer(int theLayerId);
	bool IsMutable();
	void SetMutable(bool theIsMutable);
	bool HasDisplayMode();
	int DisplayMode();
	void SetDisplayMode(int theMode);
	void UnsetDisplayMode();
	bool HasHilightMode();
	int HilightMode();
	void SetHilightMode(int theMode);
	void UnsetHilightMode();
	bool AcceptDisplayMode(int theMode);
	int DefaultDisplayMode();
	bool ToBeUpdated(bool theToIncludeHidden);
	bool ToBeUpdated();
	void SetToUpdate(int theMode);
	void SetToUpdate();
	bool IsInfinite();
	void SetInfiniteState(bool theFlag);
	void SetInfiniteState();
	/* Method skipped due to unknown mapping: PrsMgr_TypeOfPresentation3d TypeOfPresentation3d() */
	/* Method skipped due to unknown mapping: void SetTypeOfPresentation(PrsMgr_TypeOfPresentation3d theType, ) */
	Macad::Occt::Prs3d_Drawer^ Attributes();
	void SetAttributes(Macad::Occt::Prs3d_Drawer^ theDrawer);
	Macad::Occt::Prs3d_Drawer^ HilightAttributes();
	void SetHilightAttributes(Macad::Occt::Prs3d_Drawer^ theDrawer);
	Macad::Occt::Prs3d_Drawer^ DynamicHilightAttributes();
	void SetDynamicHilightAttributes(Macad::Occt::Prs3d_Drawer^ theDrawer);
	void UnsetHilightAttributes();
	void SynchronizeAspects();
	Macad::Occt::Graphic3d_TransformPers^ TransformPersistence();
	void SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
	Macad::Occt::Geom_Transformation^ LocalTransformationGeom();
	void SetLocalTransformation(Macad::Occt::Trsf theTrsf);
	void SetLocalTransformation(Macad::Occt::Geom_Transformation^ theTrsf);
	bool HasTransformation();
	Macad::Occt::Geom_Transformation^ TransformationGeom();
	Macad::Occt::Trsf LocalTransformation();
	Macad::Occt::Trsf Transformation();
	Macad::Occt::gp_GTrsf^ InversedTransformation();
	Macad::Occt::Geom_Transformation^ CombinedParentTransformation();
	void ResetTransformation();
	void UpdateTransformation();
	Macad::Occt::Graphic3d_SequenceOfHClipPlane^ ClipPlanes();
	void SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes);
	void AddClipPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane);
	void RemoveClipPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane);
	Macad::Occt::PrsMgr_PresentableObject^ Parent();
	/* Method skipped due to unknown mapping: PrsMgr_ListOfPresentableObjects Children() */
	void AddChild(Macad::Occt::PrsMgr_PresentableObject^ theObject);
	void AddChildWithCurrentTransformation(Macad::Occt::PrsMgr_PresentableObject^ theObject);
	void RemoveChild(Macad::Occt::PrsMgr_PresentableObject^ theObject);
	void RemoveChildWithRestoreTransformation(Macad::Occt::PrsMgr_PresentableObject^ theObject);
	bool HasOwnPresentations();
	void BoundingBox(Macad::Occt::Bnd_Box^ theBndBox);
	void SetIsoOnTriangulation(bool theIsEnabled);
	Macad::Occt::Aspect_TypeOfFacingModel CurrentFacingModel();
	void SetCurrentFacingModel(Macad::Occt::Aspect_TypeOfFacingModel theModel);
	void SetCurrentFacingModel();
	bool HasColor();
	void Color(Macad::Occt::Quantity_Color^ theColor);
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	void UnsetColor();
	bool HasWidth();
	double Width();
	void SetWidth(double theWidth);
	void UnsetWidth();
	bool HasMaterial();
	Macad::Occt::Graphic3d_NameOfMaterial Material();
	void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ aName);
	void UnsetMaterial();
	bool IsTransparent();
	double Transparency();
	void SetTransparency(double aValue);
	void SetTransparency();
	void UnsetTransparency();
	bool HasPolygonOffsets();
	void PolygonOffsets(int% aMode, float% aFactor, float% aUnits);
	void SetPolygonOffsets(int aMode, float aFactor, float aUnits);
	void SetPolygonOffsets(int aMode, float aFactor);
	void SetPolygonOffsets(int aMode);
	void UnsetAttributes();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	void ToBeUpdated(Macad::Occt::TColStd_ListOfInteger^ ListOfMode);
	void SetTransformPersistence(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Pnt thePoint);
	void SetTransformPersistence(Macad::Occt::Graphic3d_TransModeFlags theMode);
	Macad::Occt::Graphic3d_TransModeFlags GetTransformPersistenceMode();
	bool ToPropagateVisualState();
	void SetPropagateVisualState(bool theFlag);
}; // class PrsMgr_PresentableObject

}; // namespace Occt
}; // namespace Macad
