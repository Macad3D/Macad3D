
#pragma once

#include "AIS_PlaneEx.h"
#include "AIS_AxisEx.h"


DEFINE_STANDARD_HANDLE(AIS_TranslationGizmo2D, AIS_InteractiveObject)


class AIS_TranslationGizmo2D : public AIS_InteractiveObject
{
public:

	enum Part
	{
		Part_XAxis,
		Part_YAxis,
		Part_Plane
	};

	//! Initializes the plane aPlane. The plane trihedron is
	//! constructed from this and an axis.
	AIS_TranslationGizmo2D(const Handle(Geom_Plane)& aPlane);

	//! Returns the component specified in SetComponent.
	Handle(Geom_Plane) Component();

	//! Creates an instance of the component object aPlane.
	void SetComponent(const Handle(Geom_Plane)& aPlane);

	//! Returns the "XAxis".
	Handle(AIS_AxisEx) XAxis()  const;

	//! Returns the "YAxis".
	Handle(AIS_AxisEx) YAxis()  const;

	//! Returns the "Plane".
	Handle(AIS_PlaneEx) Plane()  const;

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

	Standard_EXPORT void SetContext(const Handle(AIS_InteractiveContext)& aCtx) override;

	void Remove();

	bool IsPartDetected(Part part);

	DEFINE_STANDARD_RTTIEXT(AIS_TranslationGizmo2D, AIS_InteractiveObject)

protected:


	Standard_EXPORT void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) override;



private:

	void InitSubObjects();
	void UpdateTransformPersistence();

	Standard_EXPORT   void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode) override;

	Handle(Geom_Plane) myPlane;
	Handle(AIS_InteractiveObject) myShapes[3];
};



