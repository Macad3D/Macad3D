#pragma once

#include <AIS_Plane.hxx>

#include <TopoDS_Face.hxx>

//! Constructs plane datums to be used in construction of
//! composite shapes.
class AIS_PlaneEx : public AIS_InteractiveObject
{

public:


	//! initializes the plane aComponent. If
	//! the mode aCurrentMode equals true, the drawing
	//! tool, "Drawer" is not initialized.
	Standard_EXPORT AIS_PlaneEx(const Handle(Geom_Plane)& aComponent, const Standard_Boolean aCurrentMode = Standard_False);

	//! initializes the plane aComponent and
	//! the point aCenter. If the mode aCurrentMode
	//! equals true, the drawing tool, "Drawer" is not
	//! initialized. aCurrentMode equals true, the drawing
	//! tool, "Drawer" is not initialized.
	Standard_EXPORT AIS_PlaneEx(const Handle(Geom_Plane)& aComponent, const gp_XY& aCenterOffset, const Standard_Boolean aCurrentMode = Standard_False);

	//! Same value for x and y directions
	Standard_EXPORT   void SetSize(const Standard_Real aValue);

	//! Sets the size defined by the length along the X axis
	//! XVal and the length along the Y axis YVal.
	Standard_EXPORT   void SetSize(const Standard_Real Xval, const Standard_Real YVal);

	Standard_EXPORT   void UnsetSize();

	Standard_EXPORT   Standard_Boolean Size(Standard_Real& X, Standard_Real& Y)  const;

	inline Standard_Boolean HasOwnSize()  const
	{
		return myHasOwnSize;
	}

	Standard_EXPORT virtual   Standard_Integer Signature()  const;

	Standard_EXPORT virtual   AIS_KindOfInteractive Type()  const;

	//! Returns the component specified in SetComponent.
	inline const  Handle(Geom_Plane)& Component()
	{
		return myComponent;
	}

	//! Creates an instance of the plane aComponent.
	Standard_EXPORT   void SetComponent(const Handle(Geom_Plane)& aComponent);

	//! Returns the coordinates of the center point.
	inline const  gp_XY& CenterOffset()  const
	{
		return myCenterOffset;
	}


	//! Provides settings for the center aCenter other than (0, 0, 0).
	inline void SetCenterOffset(const gp_XY& aCenterOffset)
	{
		myCenterOffset = aCenterOffset;
	}

	//! Returns the non-default current display mode set by SetCurrentMode.
	inline Standard_Boolean CurrentMode()
	{
		return myCurrentMode;
	}

	//! Allows you to provide settings for a non-default
	//! current display mode.
	inline void SetCurrentMode(const Standard_Boolean aCurrentMode)
	{
		myCurrentMode = aCurrentMode;
	}

	//! Returns true if the display mode selected, aMode, is valid for planes.
	Standard_EXPORT Standard_Boolean AcceptDisplayMode(const Standard_Integer aMode)  const override;

	//! connection to <aCtx> default drawer implies a recomputation of Frame values.
	Standard_EXPORT void SetContext(const Handle(AIS_InteractiveContext)& aCtx) override;

	//! Returns the type of sensitivity for the plane;
	inline Select3D_TypeOfSensitivity TypeOfSensitivity()  const
	{
		return myTypeOfSensitivity;
	}

	//! Sets the type of sensitivity for the plane.
	inline void SetTypeOfSensitivity(const Select3D_TypeOfSensitivity& theTypeOfSensitivity)
	{
		myTypeOfSensitivity = theTypeOfSensitivity;
	}

	//! computes the presentation according to a point of view
	//! given by <aProjector>.
	//! To be Used when the associated degenerated Presentations
	//! have been transformed by <aTrsf> which is not a Pure
	//! Translation. The HLR Prs can't be deducted automatically
	//! WARNING :<aTrsf> must be applied
	//! to the object to display before computation  !!!
	Standard_EXPORT void Compute(const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTrsf, const Handle(Prs3d_Presentation)& aPresentation) override;

	Standard_EXPORT void ComputeSelection(const Handle(SelectMgr_Selection)& theSelection, const Standard_Integer theMode) override;

	Standard_EXPORT   void SetColor(const Quantity_NameOfColor aColor);

	Standard_EXPORT   void SetColor(const Quantity_Color& aColor);

	Standard_EXPORT   void UnsetColor();

	//! Draw hilighted owner presentation
	Standard_EXPORT void HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager3d)& PM, const Handle(Prs3d_Drawer) &theStyle, const Handle(SelectMgr_EntityOwner)& Owner) override;

	Standard_EXPORT void HilightSelected(const Handle(PrsMgr_PresentationManager3d)& PM, const SelectMgr_SequenceOfOwner& Owners) override;

	DEFINE_STANDARD_RTTIEXT(AIS_PlaneEx, AIS_InteractiveObject)

protected:




private:


	Standard_EXPORT void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) override;

	Standard_EXPORT void Compute(const Handle(Prs3d_Projector)& aProjector, const Handle(Prs3d_Presentation)& aPresentation) override;

	Standard_EXPORT   void ComputeFrame();

	Standard_EXPORT   void InitDrawerAttributes();

	void UpdateFace();

	Handle(Geom_Plane) myComponent;
	gp_XY myCenterOffset;
	Standard_Boolean myCurrentMode;
	Standard_Boolean myAutomaticPosition;
	Standard_Boolean myHasOwnSize;
	Select3D_TypeOfSensitivity myTypeOfSensitivity;

	TopoDS_Face myFace;
};


DEFINE_STANDARD_HANDLE(AIS_PlaneEx, AIS_InteractiveObject)

