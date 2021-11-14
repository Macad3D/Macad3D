#pragma once

DEFINE_STANDARD_HANDLE(AIS_CircleEx, AIS_InteractiveObject)

//! Constructs circle datums to be used in construction of
//! composite shapes.
class AIS_CircleEx : public AIS_InteractiveObject
{

public:


	//! Initializes this algorithm for constructing AIS circle
	//! datums initializes the circle aCircle
	Standard_EXPORT AIS_CircleEx(const Handle(Geom_Circle)& aCircle);

	//! Initializes this algorithm for constructing AIS circle datums.
	//! Initializes the circle theCircle, the arc
	//! starting point theUStart, the arc ending point theUEnd,
	//! and the type of sensitivity theIsFilledCircleSens.
	Standard_EXPORT AIS_CircleEx(const Handle(Geom_Circle)& theCircle, const Standard_Real theUStart, const Standard_Real theUEnd, const Standard_Boolean theIsFilledCircleSens = Standard_False);
	
	Standard_EXPORT void computeHLR(const Handle(Graphic3d_Camera)& theProjector, const Handle(TopLoc_Datum3D)& theTrsf, const Handle(Prs3d_Presentation)& aPresentation) override;

	//! Returns index 6 by default.
	inline virtual Standard_Integer Signature() const override { return 6; }

	//! Indicates that the type of Interactive Object is a datum.
	inline virtual AIS_KindOfInteractive Type() const override { return AIS_KOI_Datum; }

	//! Returns the circle component defined in SetCircle.
	inline const Handle(Geom_Circle)& Circle() const { return myComponent; }


	//! Constructs instances of the starting point and the end
	//! point parameters, u1 and u2.
	inline void Parameters(Standard_Real& u1, Standard_Real& u2) const { u1 = myUStart; u2 = myUEnd; }

	//! Allows you to provide settings for the circle datum aCircle.
	inline void SetCircle(const Handle(Geom_Circle)& aCircle) { myComponent = aCircle; }

	//! Allows you to set the parameter u for the starting point of an arc.
	inline void SetFirstParam(const Standard_Real u) { myUStart = u; myCircleIsArc = Standard_True; }

	//! Allows you to provide the parameter u for the end point of an arc.
	inline void SetLastParam(const Standard_Real u) { myUEnd = u; myCircleIsArc = Standard_True; }

	//! Assigns the color aColor to the solid line boundary of the circle datum.
	Standard_EXPORT void SetColor(const Quantity_Color& aColor) override;

	//! Assigns the width aValue to the solid line boundary of the circle datum.
	Standard_EXPORT void SetWidth(const Standard_Real aValue) override;

	//! Removes color from the solid line boundary of the circle datum.
	Standard_EXPORT void UnsetColor() override;

	//! Removes width settings from the solid line boundary of the circle datum.
	Standard_EXPORT void UnsetWidth() override;

	//! Returns the type of sensitivity for the circle;
	inline Standard_Boolean IsFilledCircleSens() const { return myIsFilledCircleSens; }


	//! Sets the type of sensitivity for the circle. If theIsFilledCircleSens set to Standard_True
	//! then the whole circle will be detectable, otherwise only the boundary of the circle.
	inline void SetFilledCircleSens(const Standard_Boolean theIsFilledCircleSens) { myIsFilledCircleSens = theIsFilledCircleSens; }


	//! Draw hilighted owner presentation
	Standard_EXPORT void HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager)& PM, const Handle(Prs3d_Drawer) &theStyle, const Handle(SelectMgr_EntityOwner)& Owner) override;

	Standard_EXPORT void HilightSelected(const Handle(PrsMgr_PresentationManager)& PM, const SelectMgr_SequenceOfOwner& Owners) override;



	DEFINE_STANDARD_RTTIEXT(AIS_CircleEx, AIS_InteractiveObject)

protected:




private:


	void Compute(const Handle(PrsMgr_PresentationManager)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) override;

	void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode) override;

	void ComputeCircle(const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)&aDrawer);

	void ComputeArc(const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)&aDrawer);

	void ComputeCircleSelection(const Handle(SelectMgr_Selection)& aSelection);

	void ComputeArcSelection(const Handle(SelectMgr_Selection)& aSelection);

	Handle(Geom_Circle) myComponent;
	Standard_Real myUStart;
	Standard_Real myUEnd;
	Standard_Boolean myCircleIsArc;
	Standard_Boolean myIsFilledCircleSens;


};



