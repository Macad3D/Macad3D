#pragma once

DEFINE_STANDARD_HANDLE(AIS_AxisEx, AIS_InteractiveObject)


//! Locates the x, y and z axes in an Interactive Object.
//! These are used to orient it correctly in presentations
//! from different viewpoints, or to construct a revolved
//! shape, for example, from one of the axes. Conversely,
//! an axis can be created to build a revolved shape and
//! then situated relative to one of the axes of the view.
class AIS_AxisEx : public AIS_InteractiveObject
{

public:


	//! Initializes the line aComponent
	Standard_EXPORT AIS_AxisEx(const Handle(Geom_Line)& aComponent);

	//! Initializes the axis1 position anAxis.
	Standard_EXPORT AIS_AxisEx(const Handle(Geom_Axis1Placement)& anAxis);

	//! Returns the axis entity aComponent and identifies it
	//! as a component of a shape.
	const  Handle(Geom_Line)& Component() const
	{
		return myComponent;
	}

	//! Sets the coordinates of the lin aComponent.
	Standard_EXPORT   void SetComponent(const Handle(Geom_Line)& aComponent);

	//! Constructs a new line to serve as the axis anAxis in 3D space.
	Standard_EXPORT   void SetAxis1Placement(const Handle(Geom_Axis1Placement)& anAxis);

	//! Returns true if the interactive object accepts the display mode aMode.
	Standard_EXPORT   Standard_Boolean AcceptDisplayMode(const Standard_Integer aMode)  const;

	//! computes the presentation according to a point of view
	//! given by <aProjector>.
	//! To be Used when the associated degenerated Presentations
	//! have been transformed by <aTrsf> which is not a Pure
	//! Translation. The HLR Prs can't be deducted automatically
	//! WARNING :<aTrsf> must be applied
	//! to the object to display before computation  !!!
	Standard_EXPORT void Compute(const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTrsf, const Handle(Prs3d_Presentation)& aPresentation)  override;

	virtual   Standard_Integer Signature() const
	{
		return 2;
	}

	virtual   AIS_KindOfInteractive Type() const
	{
		return AIS_KOI_Datum;
	}


	Standard_EXPORT   void SetColor(const Quantity_NameOfColor aColor);

	Standard_EXPORT   void SetColor(const Quantity_Color& aColor);

	Standard_EXPORT   void SetWidth(const Standard_Real aValue);

	//! Sets the length of the X and Y axes.
	void SetLength(const Standard_Real theLength);

	//! Returns the length of X and Y axes.
	Standard_Real GetLength()  const;

	Standard_EXPORT   void UnsetColor();

	Standard_EXPORT   void UnsetWidth();


	//! Draw hilighted owner presentation
	Standard_EXPORT void HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager3d)& PM, const Handle(Prs3d_Drawer) &theStyle, const Handle(SelectMgr_EntityOwner)& Owner) override;

	Standard_EXPORT void HilightSelected(const Handle(PrsMgr_PresentationManager3d)& PM, const SelectMgr_SequenceOfOwner& Owners) override;

	
	DEFINE_STANDARD_RTTIEXT(AIS_AxisEx, AIS_InteractiveObject)

protected:




private:


	Standard_EXPORT   void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) override;

	Standard_EXPORT   void Compute(const Handle(Prs3d_Projector)& aProjector, const Handle(Prs3d_Presentation)& aPresentation) override;

	Standard_EXPORT   void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode) override;

	void InitDrawer();
	void ComputePoints();

	Handle(Geom_Line) myComponent;
	Handle(Geom_Axis2Placement) myAx2;
	gp_Pnt myPfirst;
	gp_Pnt myPlast;
	gp_Dir myDir;
	Standard_Real myVal;
	Standard_CString myText;
	Handle(Prs3d_LineAspect) myLineAspect;
};





