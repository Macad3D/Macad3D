
#pragma once

#include "AIS_PlaneEx.h"
#include "AIS_AxisEx.h"


DEFINE_STANDARD_HANDLE(AIS_TranslationGizmo, AIS_InteractiveObject)


class AIS_TranslationGizmo : public AIS_InteractiveObject
{
public:
	enum Part
	{
		Part_XAxis,
		Part_YAxis,
		Part_ZAxis,
		Part_XYPlane,
		Part_XZPlane,
		Part_YZPlane
	};

	const int PartCount = 6;

	//! Initializes the plane aPlane. The plane trihedron is
	//! constructed from this and an axis.
	AIS_TranslationGizmo(const gp_Ax3& aCoordinateSystem);

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

	//! computes the presentation according to a point of view
	//! given by <aProjector>.
	//! To be Used when the associated degenerated Presentations
	//! have been transformed by <aTrsf> which is not a Pure
	//! Translation. The HLR Prs can't be deducted automatically
	//! WARNING :<aTrsf> must be applied
	//! to the object to display before computation  !!!
	Standard_EXPORT virtual   void Compute(const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTrsf, const Handle(Prs3d_Presentation)& aPresentation);

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

	DEFINE_STANDARD_RTTIEXT(AIS_TranslationGizmo, AIS_InteractiveObject)

protected:


	Standard_EXPORT virtual   void Compute(const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0);



private:
	Handle(AIS_AxisEx) Axis(Part part)  const;
	Handle(AIS_PlaneEx) Plane(Part part)  const;

	void InitSubObjects();

	Standard_EXPORT   void Compute(const Handle(Prs3d_Projector)& aProjector, const Handle(Prs3d_Presentation)& aPresentation);

	Standard_EXPORT   void ComputeSelection(const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode);

	gp_Ax3 myCoordinateSystem;
	Handle(AIS_InteractiveObject) myShapes[6];
};



