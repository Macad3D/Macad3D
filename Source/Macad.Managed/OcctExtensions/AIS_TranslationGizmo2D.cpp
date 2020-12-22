#include "ManagedPCH.h"

#include "AIS_TranslationGizmo2D.h"
#include "AIS_AxisEx.h"

IMPLEMENT_STANDARD_RTTIEXT(AIS_TranslationGizmo2D, AIS_InteractiveObject)


//=======================================================================
//function : AIS_PlaneTrihedron
//purpose  : 
//=======================================================================
AIS_TranslationGizmo2D::AIS_TranslationGizmo2D(const Handle(Geom_Plane)& aPlane)
	:myPlane(aPlane)
{
	Handle(Prs3d_DatumAspect) DA = new Prs3d_DatumAspect();
	Standard_Real aLength = UnitsAPI::AnyToLS(100., "mm");
	DA->SetAxisLength(aLength, aLength, aLength);
	myDrawer->SetDatumAspect(DA); // odl - specific is created because it is modified

	SetZLayer(Graphic3d_ZLayerId_TopOSD);

	InitSubObjects();
}

void AIS_TranslationGizmo2D::InitSubObjects()
{
	myShapes[Part::Part_XAxis] = XAxis();
	myShapes[Part::Part_YAxis] = YAxis();
	myShapes[Part::Part_Plane] = Plane();
	UpdateTransformPersistence();
}

void AIS_TranslationGizmo2D::UpdateTransformPersistence()
{
	Handle(Graphic3d_TransformPers) transformPers = new Graphic3d_TransformPers(Graphic3d_TMF_ZoomPers, myPlane->Location());

	auto plane = Plane();
	plane->SetComponent(new Geom_Plane(gp_Ax3(gp_Pnt(0, 0, 0), myPlane->Axis().Direction(), myPlane->Pln().XAxis().Direction())));
	plane->SetTransformPersistence(transformPers);

	auto xaxis = XAxis();
	xaxis->SetComponent(new Geom_Line(gp_Pnt(0, 0, 0), myPlane->Pln().XAxis().Direction()));
	xaxis->SetTransformPersistence(transformPers);

	auto yaxis = YAxis();
	yaxis->SetComponent(new Geom_Line(gp_Pnt(0, 0, 0), myPlane->Pln().YAxis().Direction()));
	yaxis->SetTransformPersistence(transformPers);
}

//=======================================================================
//function : Component
//purpose  : 
//=======================================================================

Handle(Geom_Plane) AIS_TranslationGizmo2D::Component()
{
	return myPlane;
}


//=======================================================================
//function : SetComponent
//purpose  : 
//=======================================================================

void AIS_TranslationGizmo2D::SetComponent(const Handle(Geom_Plane)& aPlane)
{
	myPlane = aPlane;
	UpdateTransformPersistence();

	Handle(AIS_InteractiveContext) anAISContext = GetContext();
	if (!anAISContext.IsNull())
	{
		for (int i = 0; i < 3; i++)
		{
			anAISContext->RecomputeSelectionOnly(myShapes[i]);
			anAISContext->RecomputePrsOnly(myShapes[i], false, true);
		}
	}
}

//=======================================================================
//function : XAxis
//purpose  : 
//=======================================================================
Handle(AIS_AxisEx) AIS_TranslationGizmo2D::XAxis() const
{
	Handle(AIS_AxisEx) aLine = Handle(AIS_AxisEx)::DownCast(myShapes[Part::Part_XAxis]);
	if (aLine.IsNull())
	{
		Handle(Geom_Line) aGLine = new Geom_Line(gp_Pnt(0,0,0), myPlane->Pln().XAxis().Direction());
		aLine = new AIS_AxisEx(aGLine);
		aLine->SetColor(Quantity_NOC_RED2);
		aLine->Attributes()->DatumAspect()->LineAspect(Prs3d_DP_YAxis)->SetWidth(2);
		aLine->Attributes()->DatumAspect()->LineAspect(Prs3d_DP_YAxis)->SetColor(Quantity_NOC_RED1);

		Standard_Real length = GetLength();
		aLine->SetLength(length);
		aLine->SetZLayer(ZLayer());
	}
	return aLine;
}

//=======================================================================
//function : YAxis
//purpose  : 
//=======================================================================
Handle(AIS_AxisEx) AIS_TranslationGizmo2D::YAxis() const
{
	Handle(AIS_AxisEx) aLine = Handle(AIS_AxisEx)::DownCast(myShapes[Part::Part_YAxis]);
	if (aLine.IsNull())
	{
		Handle(Geom_Line) aGLine = new Geom_Line(gp_Pnt(0, 0, 0), myPlane->Pln().YAxis().Direction());
		aLine = new AIS_AxisEx(aGLine);
		aLine->SetColor(Quantity_NOC_GREEN3);
		aLine->Attributes()->DatumAspect()->LineAspect(Prs3d_DP_YAxis)->SetWidth(2);
		aLine->Attributes()->DatumAspect()->LineAspect(Prs3d_DP_YAxis)->SetColor(Quantity_NOC_GREEN2);

		Standard_Real length = GetLength();
		aLine->SetLength(length);
		aLine->SetZLayer(ZLayer());
	}
	return aLine;
}

//=======================================================================
//function : Plane
//purpose  : 
//=======================================================================
Handle(AIS_PlaneEx) AIS_TranslationGizmo2D::Plane() const
{
	Handle(AIS_PlaneEx) aPlane = Handle(AIS_PlaneEx)::DownCast(myShapes[Part::Part_Plane]);
	if (aPlane.IsNull())
	{
		Standard_Real length = GetLength();
		gp_Pnt centerPoint;
		myPlane->D0(length / 4, length / 4, centerPoint);
		aPlane = new AIS_PlaneEx(new Geom_Plane(gp_Ax3( gp_Pnt(0, 0, 0), myPlane->Axis().Direction(), myPlane->Pln().XAxis().Direction())), gp_XY(1.0, 1.0), true);
		aPlane->Attributes()->SetPlaneAspect(new Prs3d_PlaneAspect());
		aPlane->SetTypeOfSensitivity(Select3D_TOS_INTERIOR);
		aPlane->SetSize(length / 2);
		aPlane->SetTransparency(0.9f);
		aPlane->SetColor(Quantity_NOC_LIGHTGRAY);
		aPlane->SetHilightMode(1);

		aPlane->HilightAttributes()->ShadingAspect()->SetTransparency(0.9f);
		aPlane->SetZLayer(ZLayer());
	}
	return aPlane;
}

void AIS_TranslationGizmo2D::SetLength(const Standard_Real theLength) {
	myDrawer->DatumAspect()->SetAxisLength(theLength, theLength, theLength);

	gp_Pnt centerPoint;
	myPlane->D0(theLength / 4, theLength / 4, centerPoint);

	Handle(AIS_PlaneEx) aPlaneShape = Plane();
	aPlaneShape->SetSize(theLength / 2);

	Handle(AIS_AxisEx) aAxisShape = XAxis();
	aAxisShape->SetLength(theLength);

	aAxisShape = YAxis();
	aAxisShape->SetLength(theLength);

	SetToUpdate();
}

Standard_Real AIS_TranslationGizmo2D::GetLength() const {
	return myDrawer->DatumAspect()->AxisLength(Prs3d_DP_XAxis);
}

void AIS_TranslationGizmo2D::SetZLayer(const Graphic3d_ZLayerId  theLayerId)
{
	__super::SetZLayer(theLayerId);
	for (Standard_Integer i = 0; i < 3; i++)
	{
		if (!myShapes[i].IsNull())
			myShapes[i]->SetZLayer(theLayerId);
	}
}


//=======================================================================
//function : Compute
//purpose  : 
//=======================================================================
void AIS_TranslationGizmo2D::Compute(const Handle(PrsMgr_PresentationManager3d)& PM,
	const Handle(Prs3d_Presentation)& aPresentation,
	const Standard_Integer mode)
{
}

void AIS_TranslationGizmo2D::Compute(const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTransformation, const Handle(Prs3d_Presentation)& aPresentation)
{
	// Standard_NotImplemented::Raise("AIS_PlaneTrihedron::Compute(const Handle(Prs3d_Projector)&, const Handle(Geom_Transformation)&, const Handle(Prs3d_Presentation)&)");
	PrsMgr_PresentableObject::Compute(aProjector, aTransformation, aPresentation);
}

//=======================================================================
//function : ComputeSelection
//purpose  : 
//=======================================================================

void AIS_TranslationGizmo2D::ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,
	const Standard_Integer aMode)
{
	// Display shapes
	Handle(AIS_InteractiveContext) anAISContext = GetContext();
	if (!anAISContext.IsNull())
	{
		for (Standard_Integer i = 0; i < 3; i++)
		{
			// Deselect object
			if (anAISContext->IsSelected(myShapes[i]))
				anAISContext->AddOrRemoveSelected(myShapes[i], Standard_False);

			anAISContext->Remove(myShapes[i], Standard_False);

			anAISContext->Display(myShapes[i], 1, Standard_True, Standard_False);
		}
	}
}


void AIS_TranslationGizmo2D::Compute(const Handle(Prs3d_Projector)&,
	const Handle(Prs3d_Presentation)&)
{
}


//=======================================================================
//function : AcceptDisplayMode
//purpose  : 
//=======================================================================
Standard_Boolean  AIS_TranslationGizmo2D::AcceptDisplayMode(const Standard_Integer aMode) const
{
	return aMode == 0;
}


//=======================================================================
//function : SetContext
//purpose  : 
//=======================================================================

void AIS_TranslationGizmo2D::SetContext(const Handle(AIS_InteractiveContext)& ctx)
{
	//  Standard_Boolean same_DA = myDrawer->Link() == Ctx->DefaultDrawer();

	if (ctx.IsNull())
	{
		for (Standard_Integer i = 0; i < 3; i++)
		{
			myShapes[i]->SetContext(ctx);
		}
		AIS_InteractiveObject::SetContext(ctx);
		return;
	}
	// Remove subobjects from current context
	Handle(AIS_InteractiveContext) anAISContext = GetContext();

	Standard_Boolean hasContext = (anAISContext.IsNull() == Standard_False);
	 for (Standard_Integer i = 0; i < 3; i++)
	{
		// Deselect object
		if (hasContext)
		{
			if (anAISContext->IsSelected(myShapes[i]))
				anAISContext->AddOrRemoveSelected(myShapes[i], false);

			anAISContext->Remove(myShapes[i], Standard_False);
		}
		myShapes[i].Nullify();
	}

	if (!ctx.IsNull())
	{
		AIS_InteractiveObject::SetContext(ctx);
		InitSubObjects();
		for (Standard_Integer i = 0; i < 3; i++)
			myShapes[i]->SetContext(ctx);
	}
}


void AIS_TranslationGizmo2D::Remove()
{
	// Display shapes
	Handle(AIS_InteractiveContext) anAISContext = GetContext();
	if (!anAISContext.IsNull())
	{
		// Deselect object
		for (Standard_Integer i = 0; i < 3; i++)
		{
			if (anAISContext->IsSelected(myShapes[i]))
				anAISContext->AddOrRemoveSelected(myShapes[i], Standard_False);

			anAISContext->Remove(myShapes[i], Standard_False);
		}
		anAISContext->Remove(this, Standard_False);
	}
}


bool AIS_TranslationGizmo2D::IsPartDetected(Part part)
{
	Handle(AIS_InteractiveContext) anAISContext = GetContext();
	if (!anAISContext.IsNull() && anAISContext->HasDetected())
	{
		return (anAISContext->DetectedInteractive() == myShapes[part]) == Standard_True;
	}
	return false;
}