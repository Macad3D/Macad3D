// Generated wrapper code for package PrsMgr

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  PrsMgr_PresentableObject
//---------------------------------------------------------------------
/// <summary>
/// A framework to supply the Graphic3d structure of the object to be presented.
/// On the first display request, this structure is created by calling the appropriate algorithm and retaining this framework for further display.
/// This abstract framework is inherited in Application Interactive Services (AIS), notably by AIS_InteractiveObject.
/// Consequently, 3D presentation should be handled by the relevant daughter classes and their member functions in AIS.
/// This is particularly true in the creation of new interactive objects.
/// 
/// Key interface methods to be implemented by every Selectable Object:
/// - AcceptDisplayMode() accepting display modes implemented by this object;
/// - Compute() computing presentation for the given display mode index.
/// 
/// Warning! Methods managing standard attributes (SetColor(), SetWidth(), SetMaterial()) have different meaning for objects of different type (or no meaning at all).
/// Sub-classes might override these methods to modify Prs3d_Drawer or class properties providing a convenient short-cut depending on application needs.
/// For more sophisticated configuring, Prs3d_Drawer should be modified directly, while short-cuts might be left unimplemented.
/// </summary>
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
	/// <summary>
	/// Return presentations.
	/// </summary>
	/* Method skipped due to unknown mapping: PrsMgr_Presentations Presentations() */
	/// <summary>
	/// Get ID of Z layer for main presentation.
	/// </summary>
	int ZLayer();
	/// <summary>
	/// Set Z layer ID and update all presentations of the presentable object.
	/// The layers mechanism allows drawing objects in higher layers in overlay of objects in lower layers.
	/// </summary>
	void SetZLayer(int theLayerId);
	/// <summary>
	/// Returns true if object has mutable nature (content or location are be changed regularly).
	/// Mutable object will be managed in different way than static onces (another optimizations).
	/// </summary>
	bool IsMutable();
	/// <summary>
	/// Sets if the object has mutable nature (content or location will be changed regularly).
	/// This method should be called before object displaying to take effect.
	/// </summary>
	void SetMutable(bool theIsMutable);
	/// <summary>
	/// Returns true if the Interactive Object has display mode setting overriding global setting (within Interactive Context).
	/// </summary>
	bool HasDisplayMode();
	/// <summary>
	/// Returns the display mode setting of the Interactive Object.
	/// The range of supported display mode indexes should be specified within object definition and filtered by AccepDisplayMode().
	/// </summary>
	/// @sa AcceptDisplayMode()
	int DisplayMode();
	/// <summary>
	/// Sets the display mode for the interactive object.
	/// An object can have its own temporary display mode, which is different from that proposed by the interactive context.
	/// </summary>
	/// @sa AcceptDisplayMode()
	void SetDisplayMode(int theMode);
	/// <summary>
	/// Removes display mode settings from the interactive object.
	/// </summary>
	void UnsetDisplayMode();
	/// <summary>
	/// Returns true if the Interactive Object is in highlight mode.
	/// </summary>
	/// @sa HilightAttributes()
	bool HasHilightMode();
	/// <summary>
	/// Returns highlight display mode.
	/// This is obsolete method for backward compatibility - use ::HilightAttributes() and ::DynamicHilightAttributes() instead.
	/// </summary>
	/// @sa HilightAttributes()
	int HilightMode();
	/// <summary>
	/// Sets highlight display mode.
	/// This is obsolete method for backward compatibility - use ::HilightAttributes() and ::DynamicHilightAttributes() instead.
	/// </summary>
	/// @sa HilightAttributes()
	void SetHilightMode(int theMode);
	/// <summary>
	/// Unsets highlight display mode.
	/// </summary>
	/// @sa HilightAttributes()
	void UnsetHilightMode();
	/// <summary>
	/// Returns true if the class of objects accepts specified display mode index.
	/// The interactive context can have a default mode of representation for the set of Interactive Objects.
	/// This mode may not be accepted by a given class of objects.
	/// Consequently, this virtual method allowing us to get information about the class in question must be implemented.
	/// At least one display mode index should be accepted by this method.
	/// Although subclass can leave default implementation, it is highly desired defining exact list of supported modes instead,
	/// which is usually an enumeration for one object or objects class sharing similar list of display modes.
	/// </summary>
	bool AcceptDisplayMode(int theMode);
	/// <summary>
	/// Returns the default display mode.
	/// </summary>
	int DefaultDisplayMode();
	/// <summary>
	/// Returns TRUE if any active presentation has invalidation flag.
	/// </summary>
	/// <param name="theToIncludeHidden">
	/// when TRUE, also checks hidden presentations
	/// </param>
	bool ToBeUpdated(bool theToIncludeHidden);
	/// <summary>
	/// Returns TRUE if any active presentation has invalidation flag.
	/// </summary>
	/// <param name="theToIncludeHidden">
	/// when TRUE, also checks hidden presentations
	/// </param>
	bool ToBeUpdated();
	/// <summary>
	/// Flags presentation to be updated; UpdatePresentations() will recompute these presentations.
	/// </summary>
	/// <param name="theMode">
	/// presentation (display mode) to invalidate, or -1 to invalidate them all
	/// </param>
	void SetToUpdate(int theMode);
	/// <summary>
	/// flags all the Presentations to be Updated.
	/// </summary>
	void SetToUpdate();
	/// <summary>
	/// Returns true if the interactive object is infinite; FALSE by default.
	/// This flag affects various operations operating on bounding box of graphic presentations of this object.
	/// For instance, infinite objects are not taken in account for View FitAll.
	/// This does not necessarily means that object is actually infinite,
	/// auxiliary objects might be also marked with this flag to achieve desired behavior.
	/// </summary>
	bool IsInfinite();
	/// <summary>
	/// Sets if object should be considered as infinite.
	/// </summary>
	void SetInfiniteState(bool theFlag);
	/// <summary>
	/// Sets if object should be considered as infinite.
	/// </summary>
	void SetInfiniteState();
	/// <summary>
	/// Returns information on whether the object accepts display in HLR mode or not.
	/// </summary>
	/* Method skipped due to unknown mapping: PrsMgr_TypeOfPresentation3d TypeOfPresentation3d() */
	/// <summary>
	/// Set type of presentation.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetTypeOfPresentation(PrsMgr_TypeOfPresentation3d theType, ) */
	/// <summary>
	/// Return presentation display status; PrsMgr_DisplayStatus_None by default.
	/// </summary>
	/* Method skipped due to unknown mapping: PrsMgr_DisplayStatus DisplayStatus() */
	/// <summary>
	/// Returns the attributes settings.
	/// </summary>
	Macad::Occt::Prs3d_Drawer^ Attributes();
	/// <summary>
	/// Initializes the drawing tool theDrawer.
	/// </summary>
	void SetAttributes(Macad::Occt::Prs3d_Drawer^ theDrawer);
	/// <summary>
	/// Returns the hilight attributes settings.
	/// When not NULL, overrides both Prs3d_TypeOfHighlight_LocalSelected and Prs3d_TypeOfHighlight_Selected defined within AIS_InteractiveContext::HighlightStyle().
	/// </summary>
	/// @sa AIS_InteractiveContext::HighlightStyle()
	Macad::Occt::Prs3d_Drawer^ HilightAttributes();
	/// <summary>
	/// Initializes the hilight drawing tool theDrawer.
	/// </summary>
	void SetHilightAttributes(Macad::Occt::Prs3d_Drawer^ theDrawer);
	/// <summary>
	/// Returns the hilight attributes settings.
	/// When not NULL, overrides both Prs3d_TypeOfHighlight_LocalDynamic and Prs3d_TypeOfHighlight_Dynamic defined within AIS_InteractiveContext::HighlightStyle().
	/// </summary>
	/// @sa AIS_InteractiveContext::HighlightStyle()
	Macad::Occt::Prs3d_Drawer^ DynamicHilightAttributes();
	/// <summary>
	/// Initializes the dynamic hilight drawing tool.
	/// </summary>
	void SetDynamicHilightAttributes(Macad::Occt::Prs3d_Drawer^ theDrawer);
	/// <summary>
	/// Clears settings provided by the hilight drawing tool theDrawer.
	/// </summary>
	void UnsetHilightAttributes();
	/// <summary>
	/// Synchronize presentation aspects after their modification.
	/// 
	/// This method should be called after modifying primitive aspect properties (material, texture, shader)
	/// so that modifications will take effect on already computed presentation groups (thus avoiding re-displaying the object).
	/// </summary>
	void SynchronizeAspects();
	/// <summary>
	/// Returns Transformation Persistence defining a special Local Coordinate system where this presentable object is located or NULL handle if not defined.
	/// Position of the object having Transformation Persistence is mutable and depends on camera position.
	/// The same applies to a bounding box of the object.
	/// </summary>
	/// @sa Graphic3d_TransformPers class description
	Macad::Occt::Graphic3d_TransformPers^ TransformPersistence();
	/// <summary>
	/// Sets up Transform Persistence defining a special Local Coordinate system where this object should be located.
	/// Note that management of Transform Persistence object is more expensive than of the normal one,
	/// because it requires its position being recomputed basing on camera position within each draw call / traverse.
	/// </summary>
	/// @sa Graphic3d_TransformPers class description
	void SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
	/// <summary>
	/// Return the local transformation.
	/// Note that the local transformation of the object having Transformation Persistence
	/// is applied within Local Coordinate system defined by this Persistence.
	/// </summary>
	Macad::Occt::TopLoc_Datum3D^ LocalTransformationGeom();
	/// <summary>
	/// Sets local transformation to theTransformation.
	/// Note that the local transformation of the object having Transformation Persistence
	/// is applied within Local Coordinate system defined by this Persistence.
	/// </summary>
	void SetLocalTransformation(Macad::Occt::Trsf theTrsf);
	/// <summary>
	/// Sets local transformation to theTransformation.
	/// Note that the local transformation of the object having Transformation Persistence
	/// is applied within Local Coordinate system defined by this Persistence.
	/// </summary>
	void SetLocalTransformation(Macad::Occt::TopLoc_Datum3D^ theTrsf);
	/// <summary>
	/// Returns true if object has a transformation that is different from the identity.
	/// </summary>
	bool HasTransformation();
	/// <summary>
	/// Return the transformation taking into account transformation of parent object(s).
	/// Note that the local transformation of the object having Transformation Persistence
	/// is applied within Local Coordinate system defined by this Persistence.
	/// </summary>
	Macad::Occt::TopLoc_Datum3D^ TransformationGeom();
	/// <summary>
	/// Return the local transformation.
	/// Note that the local transformation of the object having Transformation Persistence
	/// is applied within Local Coordinate system defined by this Persistence.
	/// </summary>
	Macad::Occt::Trsf LocalTransformation();
	/// <summary>
	/// Return the transformation taking into account transformation of parent object(s).
	/// Note that the local transformation of the object having Transformation Persistence
	/// is applied within Local Coordinate system defined by this Persistence.
	/// </summary>
	Macad::Occt::Trsf Transformation();
	/// <summary>
	/// Return inversed transformation.
	/// </summary>
	Macad::Occt::gp_GTrsf^ InversedTransformation();
	/// <summary>
	/// Return combined parent transformation.
	/// </summary>
	Macad::Occt::TopLoc_Datum3D^ CombinedParentTransformation();
	/// <summary>
	/// resets local transformation to identity.
	/// </summary>
	void ResetTransformation();
	/// <summary>
	/// Updates final transformation (parent + local) of presentable object and its presentations.
	/// </summary>
	void UpdateTransformation();
	/// <summary>
	/// Get clip planes.
	/// </summary>
	/// <returns>
	/// set of previously added clip planes for all display mode presentations.
	/// </returns>
	Macad::Occt::Graphic3d_SequenceOfHClipPlane^ ClipPlanes();
	/// <summary>
	/// Set clip planes for graphical clipping for all display mode presentations.
	/// The composition of clip planes truncates the rendering space to convex volume.
	/// Please be aware that number of supported clip plane is limited.
	/// The planes which exceed the limit are ignored.
	/// Besides of this, some planes can be already set in view where the object is shown:
	/// the number of these planes should be subtracted from limit to predict the maximum
	/// possible number of object clipping planes.
	/// </summary>
	void SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes);
	/// <summary>
	/// Adds clip plane for graphical clipping for all display mode
	/// presentations. The composition of clip planes truncates the rendering
	/// space to convex volume. Please be aware that number of supported
	/// clip plane is limited. The planes which exceed the limit are ignored.
	/// Besides of this, some planes can be already set in view where the object
	/// is shown: the number of these planes should be subtracted from limit
	/// to predict the maximum possible number of object clipping planes.
	/// </summary>
	/// <param name="thePlane">
	/// [in] the clip plane to be appended to map of clip planes.
	/// </param>
	void AddClipPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane);
	/// <summary>
	/// Removes previously added clip plane.
	/// </summary>
	/// <param name="thePlane">
	/// [in] the clip plane to be removed from map of clip planes.
	/// </param>
	void RemoveClipPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane);
	/// <summary>
	/// Returns parent of current object in scene hierarchy.
	/// </summary>
	Macad::Occt::PrsMgr_PresentableObject^ Parent();
	/// <summary>
	/// Returns children of the current object.
	/// </summary>
	/* Method skipped due to unknown mapping: PrsMgr_ListOfPresentableObjects Children() */
	/// <summary>
	/// Makes theObject child of current object in scene hierarchy.
	/// </summary>
	void AddChild(Macad::Occt::PrsMgr_PresentableObject^ theObject);
	/// <summary>
	/// Makes theObject child of current object in scene hierarchy with keeping the current global transformation
	/// So the object keeps the same position/orientation in the global CS.
	/// </summary>
	void AddChildWithCurrentTransformation(Macad::Occt::PrsMgr_PresentableObject^ theObject);
	/// <summary>
	/// Removes theObject from children of current object in scene hierarchy.
	/// </summary>
	void RemoveChild(Macad::Occt::PrsMgr_PresentableObject^ theObject);
	/// <summary>
	/// Removes theObject from children of current object in scene hierarchy with keeping the current global transformation.
	/// So the object keeps the same position/orientation in the global CS.
	/// </summary>
	void RemoveChildWithRestoreTransformation(Macad::Occt::PrsMgr_PresentableObject^ theObject);
	/// <summary>
	/// Returns true if object should have own presentations.
	/// </summary>
	bool HasOwnPresentations();
	/// <summary>
	/// Returns bounding box of object correspondingly to its current display mode.
	/// This method requires presentation to be already computed, since it relies on bounding box of presentation structures,
	/// which are supposed to be same/close amongst different display modes of this object.
	/// </summary>
	void BoundingBox(Macad::Occt::Bnd_Box^ theBndBox);
	/// <summary>
	/// Enables or disables on-triangulation build of isolines according to the flag given.
	/// </summary>
	void SetIsoOnTriangulation(bool theIsEnabled);
	/// <summary>
	/// Returns the current facing model which is in effect.
	/// </summary>
	Macad::Occt::Aspect_TypeOfFacingModel CurrentFacingModel();
	/// <summary>
	/// change the current facing model apply on polygons for SetColor(), SetTransparency(), SetMaterial() methods default facing model is Aspect_TOFM_TWO_SIDE.
	/// This mean that attributes is applying both on the front and back face.
	/// </summary>
	void SetCurrentFacingModel(Macad::Occt::Aspect_TypeOfFacingModel theModel);
	/// <summary>
	/// change the current facing model apply on polygons for SetColor(), SetTransparency(), SetMaterial() methods default facing model is Aspect_TOFM_TWO_SIDE.
	/// This mean that attributes is applying both on the front and back face.
	/// </summary>
	void SetCurrentFacingModel();
	/// <summary>
	/// Returns true if the Interactive Object has color.
	/// </summary>
	bool HasColor();
	/// <summary>
	/// Returns the color setting of the Interactive Object.
	/// </summary>
	void Color(Macad::Occt::Quantity_Color^ theColor);
	/// <summary>
	/// Only the interactive object knowns which Drawer attribute is affected by the color, if any
	/// (ex: for a wire,it's the wireaspect field of the drawer, but for a vertex, only the point aspect field is affected by the color).
	/// WARNING : Do not forget to set the corresponding fields here (hasOwnColor and myDrawer->SetColor())
	/// </summary>
	void SetColor(Macad::Occt::Quantity_Color^ theColor);
	/// <summary>
	/// Removes color settings. Only the Interactive Object
	/// knows which Drawer attribute is   affected by the color
	/// setting. For a wire, for example, wire aspect is the
	/// attribute affected. For a vertex, however, only point
	/// aspect is affected by the color setting.
	/// </summary>
	void UnsetColor();
	/// <summary>
	/// Returns true if the Interactive Object has width.
	/// </summary>
	bool HasWidth();
	/// <summary>
	/// Returns the width setting of the Interactive Object.
	/// </summary>
	double Width();
	/// <summary>
	/// Allows you to provide the setting aValue for width.
	/// Only the Interactive Object knows which Drawer attribute is affected by the width setting.
	/// </summary>
	void SetWidth(double theWidth);
	/// <summary>
	/// Reset width to default value.
	/// </summary>
	void UnsetWidth();
	/// <summary>
	/// Returns true if the Interactive Object has a setting for material.
	/// </summary>
	bool HasMaterial();
	/// <summary>
	/// Returns the current material setting as enumeration value.
	/// </summary>
	Macad::Occt::Graphic3d_NameOfMaterial Material();
	/// <summary>
	/// Sets the material aMat defining this display attribute
	/// for the interactive object.
	/// Material aspect determines shading aspect, color and
	/// transparency of visible entities.
	/// </summary>
	void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ aName);
	/// <summary>
	/// Removes the setting for material.
	/// </summary>
	void UnsetMaterial();
	/// <summary>
	/// Returns true if there is a transparency setting.
	/// </summary>
	bool IsTransparent();
	/// <summary>
	/// Returns the transparency setting.
	/// This will be between 0.0 and 1.0.
	/// At 0.0 an object will be totally opaque, and at 1.0, fully transparent.
	/// </summary>
	double Transparency();
	/// <summary>
	/// Attributes a setting aValue for transparency.
	/// The transparency value should be between 0.0 and 1.0.
	/// At 0.0 an object will be totally opaque, and at 1.0, fully transparent.
	/// Warning At a value of 1.0, there may be nothing visible.
	/// </summary>
	void SetTransparency(double aValue);
	/// <summary>
	/// Attributes a setting aValue for transparency.
	/// The transparency value should be between 0.0 and 1.0.
	/// At 0.0 an object will be totally opaque, and at 1.0, fully transparent.
	/// Warning At a value of 1.0, there may be nothing visible.
	/// </summary>
	void SetTransparency();
	/// <summary>
	/// Removes the transparency setting. The object is opaque by default.
	/// </summary>
	void UnsetTransparency();
	/// <summary>
	/// Returns Standard_True if <myDrawer> has non-null shading aspect
	/// </summary>
	bool HasPolygonOffsets();
	/// <summary>
	/// Retrieves current polygon offsets settings from <myDrawer>.
	/// </summary>
	void PolygonOffsets(int% aMode, float% aFactor, float% aUnits);
	/// <summary>
	/// Sets up polygon offsets for this object.
	/// </summary>
	/// @sa Graphic3d_Aspects::SetPolygonOffsets()
	void SetPolygonOffsets(int aMode, float aFactor, float aUnits);
	/// <summary>
	/// Sets up polygon offsets for this object.
	/// </summary>
	/// @sa Graphic3d_Aspects::SetPolygonOffsets()
	void SetPolygonOffsets(int aMode, float aFactor);
	/// <summary>
	/// Sets up polygon offsets for this object.
	/// </summary>
	/// @sa Graphic3d_Aspects::SetPolygonOffsets()
	void SetPolygonOffsets(int aMode);
	/// <summary>
	/// Clears settings provided by the drawing tool aDrawer.
	/// </summary>
	void UnsetAttributes();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// gives the list of modes which are flagged "to be updated".
	/// </summary>
	void ToBeUpdated(Macad::Occt::TColStd_ListOfInteger^ ListOfMode);
	/// <summary>
	/// Get value of the flag "propagate visual state"
	/// It means that the display/erase/color visual state is propagated automatically to all children;
	/// by default, the flag is true
	/// </summary>
	bool ToPropagateVisualState();
	/// <summary>
	/// Change the value of the flag "propagate visual state"
	/// </summary>
	void SetPropagateVisualState(bool theFlag);
}; // class PrsMgr_PresentableObject

}; // namespace Occt
}; // namespace Macad
