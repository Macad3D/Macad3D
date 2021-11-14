
#pragma once

DEFINE_STANDARD_HANDLE(AIS_RotationGizmo, AIS_InteractiveObject)

class AIS_CircleEx;

class AIS_RotationGizmo : public AIS_InteractiveObject
{
public:
	enum Part
	{
		Part_XAxis,
		Part_YAxis,
		Part_ZAxis
	};

	const int PartCount = 3;

	//! Initializes the plane aPlane. The plane trihedron is
	//! constructed from this and an axis.
	AIS_RotationGizmo(const gp_Ax3& aCoordinateSystem);

	//! Returns the component specified in SetComponent.
	const gp_Ax3 Component();

	//! Creates an instance of the component object aPlane.
	void SetComponent(const gp_Ax3& aCoordinateSystem);

	//! Sets the length of the X and Y axes.
	void SetLength(const Standard_Real theLength);

	//! Returns the length of X and Y axes.
	Standard_Real GetLength()  const;

	//! Returns true if the display mode selected, aMode, is valid.
	Standard_Boolean AcceptDisplayMode(const Standard_Integer aMode)  const;

	void SetZLayer(const Graphic3d_ZLayerId  theLayerId) override;

	Standard_EXPORT void computeHLR(const Handle(Graphic3d_Camera)& theProjector, const Handle(TopLoc_Datum3D)& theTrsf, const Handle(Prs3d_Presentation)& aPresentation) override;

	virtual   Standard_Integer Signature()  const
	{
		return 4;
	}

	//! Returns datum as the type of Interactive Object.
	virtual   AIS_KindOfInteractive Type()  const
	{
		return AIS_KOI_Datum;
	}

	Standard_EXPORT virtual void SetContext(const Handle(AIS_InteractiveContext)& aCtx);

	void Remove();

	bool IsPartDetected(Part part);

	void ForcePartHilighting(Part part);

	DEFINE_STANDARD_RTTIEXT(AIS_RotationGizmo, AIS_InteractiveObject)

protected:


	Standard_EXPORT virtual   void Compute(const Handle(PrsMgr_PresentationManager)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0);



private:
	Handle(AIS_CircleEx) Circle(Part part)  const;

	void InitSubObjects();

	Standard_EXPORT   void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode);

	gp_Ax3 myCoordinateSystem;
	Handle(AIS_InteractiveObject) myShapes[3];
};



