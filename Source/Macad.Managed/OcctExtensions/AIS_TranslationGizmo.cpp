#include "ManagedPCH.h"

#include "AIS_TranslationGizmo.h"
#include "AIS_AxisEx.h"

IMPLEMENT_STANDARD_RTTIEXT(AIS_TranslationGizmo, AIS_InteractiveObject)


//=======================================================================
//function : AIS_PlaneTrihedron
//purpose  : 
//=======================================================================
AIS_TranslationGizmo::AIS_TranslationGizmo(const gp_Ax3& aCoordinateSystem)
:myCoordinateSystem(aCoordinateSystem)
{
	Handle(Prs3d_DatumAspect) DA = new Prs3d_DatumAspect();
	Standard_Real aLength = UnitsAPI::AnyToLS(100., "mm");
	DA->SetAxisLength(aLength, aLength, aLength);
	myDrawer->SetDatumAspect(DA); // odl - specific is created because it is modified

	SetZLayer(Graphic3d_ZLayerId_TopOSD);

	InitSubObjects();
}


//=======================================================================
//function : Component
//purpose  : 
//=======================================================================

const gp_Ax3 AIS_TranslationGizmo::Component()
{
	return myCoordinateSystem;
}


//=======================================================================
//function : SetComponent
//purpose  : 
//=======================================================================

void AIS_TranslationGizmo::SetComponent(const gp_Ax3& aCoordinateSystem)
{
	myCoordinateSystem = aCoordinateSystem;

	InitSubObjects();

	Handle(AIS_InteractiveContext) anAISContext = GetContext();
	if (!anAISContext.IsNull())
	{
		for (int i = 0; i < PartCount; i++)
		{
			anAISContext->RecomputeSelectionOnly(myShapes[i]);
			anAISContext->RecomputePrsOnly(myShapes[i], false, true);
		}
	}
}

void AIS_TranslationGizmo::InitSubObjects()
{
	myShapes[Part::Part_XAxis] = Axis(Part::Part_XAxis);
	myShapes[Part::Part_YAxis] = Axis(Part::Part_YAxis);
	myShapes[Part::Part_ZAxis] = Axis(Part::Part_ZAxis);
	myShapes[Part::Part_XYPlane] = Plane(Part::Part_XYPlane);
	myShapes[Part::Part_XZPlane] = Plane(Part::Part_XZPlane);
	myShapes[Part::Part_YZPlane] = Plane(Part::Part_YZPlane);
}


Handle(AIS_AxisEx) AIS_TranslationGizmo::Axis(Part part) const
{
	gp_Dir dir;
	Quantity_NameOfColor color;
	Quantity_NameOfColor color2;
	switch (part)
	{
	case Part_XAxis:
		dir = myCoordinateSystem.XDirection();
		color = Quantity_NOC_RED2;
		color2 = Quantity_NOC_RED;
		break;
	case Part_YAxis:
		dir = myCoordinateSystem.YDirection();
		color = Quantity_NOC_GREEN3;
		color2 = Quantity_NOC_GREEN;
		break;
	case Part_ZAxis:
		dir = myCoordinateSystem.Direction();
		color = Quantity_NOC_BLUE2;
		color2 = Quantity_NOC_BLUE1;
		break;
	default:
		return nullptr;
	}
	auto aGLine = new Geom_Line(gp_Pnt(0, 0, 0), dir);

	auto aAxis = Handle(AIS_AxisEx)::DownCast(myShapes[part]);
	if (aAxis.IsNull())
	{
		aAxis = new AIS_AxisEx(aGLine);
		aAxis->SetColor(color);

		aAxis->Attributes()->DatumAspect()->LineAspect(Prs3d_DP_XAxis)->SetWidth(1);
		aAxis->Attributes()->DatumAspect()->LineAspect(Prs3d_DP_YAxis)->SetWidth(3);
		aAxis->Attributes()->DatumAspect()->LineAspect(Prs3d_DP_YAxis)->SetColor(color2);

		aAxis->SetZLayer(ZLayer());

		Standard_Real length = GetLength();
		aAxis->SetLength(length);
		aAxis->SetZLayer(ZLayer());
	} else
	{
		aAxis->SetComponent(aGLine);
	}

	Handle(Graphic3d_TransformPers) transformPers = new Graphic3d_TransformPers(Graphic3d_TMF_ZoomPers, myCoordinateSystem.Location());
	aAxis->SetTransformPersistence(transformPers);
	return aAxis;
}


Handle(AIS_PlaneEx) AIS_TranslationGizmo::Plane(Part part) const
{
	gp_Dir dir, dir2;
	Quantity_NameOfColor color;
	switch (part)
	{
	case Part_XYPlane:
		dir = myCoordinateSystem.Direction();
		dir2 = myCoordinateSystem.XDirection();
		color = Quantity_NOC_BLUE2;
		break;
	case Part_XZPlane:
		dir = myCoordinateSystem.YDirection();
		dir2 = myCoordinateSystem.Direction();
		color = Quantity_NOC_GREEN3;
		break;
	case Part_YZPlane:
		dir = myCoordinateSystem.XDirection();
		dir2 = myCoordinateSystem.YDirection();
		color = Quantity_NOC_RED2;
		break;
	default:
		return nullptr;
	}

	auto aPlane = Handle(AIS_PlaneEx)::DownCast(myShapes[part]);
	auto aGeomPlane = new Geom_Plane(gp_Ax3(gp_Pnt(0, 0, 0), dir, dir2));
	if (aPlane.IsNull())
	{
		aPlane = new AIS_PlaneEx(aGeomPlane, gp_XY(1.25, 1.25), true);
		aPlane->Attributes()->SetPlaneAspect(new Prs3d_PlaneAspect());
		aPlane->SetTypeOfSensitivity(Select3D_TOS_INTERIOR);
		aPlane->SetSize(GetLength() / 2);
		aPlane->SetTransparency(1.0f);
		aPlane->SetColor(color);
		aPlane->SetHilightMode(1);
		aPlane->Attributes()->SetFaceBoundaryDraw(true);
		aPlane->Attributes()->SetFaceBoundaryAspect(new Prs3d_LineAspect(color, Aspect_TOL_SOLID, 1));

		Graphic3d_MaterialAspect material(Graphic3d_NameOfMaterial::Graphic3d_NOM_PLASTIC);
		material.SetEmissiveColor(Quantity_NameOfColor::Quantity_NOC_WHITE);
		auto shadingAspect = new Prs3d_ShadingAspect();
		shadingAspect->SetMaterial(material);
		shadingAspect->SetTransparency(0.5f);
		shadingAspect->SetColor(color);
		aPlane->HilightAttributes()->SetShadingAspect(shadingAspect);
		aPlane->SetZLayer(ZLayer());
	} else
	{
		aPlane->SetComponent(aGeomPlane);
	}

	Handle(Graphic3d_TransformPers) transformPers = new Graphic3d_TransformPers(Graphic3d_TMF_ZoomPers, myCoordinateSystem.Location());
	aPlane->SetTransformPersistence(transformPers);
	return aPlane;
}

void AIS_TranslationGizmo::SetLength(const Standard_Real theLength) {
	myDrawer->DatumAspect()->SetAxisLength(theLength, theLength, theLength);

	//gp_Pnt centerPoint;
	//myPlane->D0(theLength / 4, theLength / 4, centerPoint);

	//Handle(AIS_PlaneEx) aPlaneShape = Plane();
	//aPlaneShape->SetSize(theLength / 2);

	//Handle(AIS_AxisEx) aAxisShape = XAxis();
	//aAxisShape->SetLength(theLength);

	//aAxisShape = YAxis();
	//aAxisShape->SetLength(theLength);

	SetToUpdate();
}

Standard_Real AIS_TranslationGizmo::GetLength() const {
	return myDrawer->DatumAspect()->AxisLength(Prs3d_DP_XAxis);
}

void AIS_TranslationGizmo::SetZLayer(const Graphic3d_ZLayerId  theLayerId)
{
	__super::SetZLayer(theLayerId);
	for (Standard_Integer i = 0; i < PartCount; i++)
	{
		if (!myShapes[i].IsNull())
			myShapes[i]->SetZLayer(theLayerId);
	}
}

void AIS_TranslationGizmo::ForcePartHilighting(Part part)
{
	myShapes[part]->SetWidth(3);

	Handle(AIS_InteractiveContext) anAISContext = GetContext();
	if (!anAISContext.IsNull())
	{
		for (Standard_Integer i = 0; i < PartCount; i++)
		{
			if (!myShapes[i].IsNull())
				anAISContext->Deactivate(myShapes[i]);
		}

		anAISContext->RecomputePrsOnly(myShapes[part], false);
	}
}

//=======================================================================
//function : Compute
//purpose  : 
//=======================================================================
void AIS_TranslationGizmo::Compute(const Handle(PrsMgr_PresentationManager3d)& PM,
	const Handle(Prs3d_Presentation)& aPresentation,
	const Standard_Integer mode)
{
}

void AIS_TranslationGizmo::Compute(const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTransformation, const Handle(Prs3d_Presentation)& aPresentation)
{
	// Standard_NotImplemented::Raise("AIS_PlaneTrihedron::Compute(const Handle(Prs3d_Projector)&, const Handle(Geom_Transformation)&, const Handle(Prs3d_Presentation)&)");
	PrsMgr_PresentableObject::Compute(aProjector, aTransformation, aPresentation);
}

//=======================================================================
//function : ComputeSelection
//purpose  : 
//=======================================================================

void AIS_TranslationGizmo::ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,
	const Standard_Integer aMode)
{
	// Display shapes
	Handle(AIS_InteractiveContext) anAISContext = GetContext();
	if (!anAISContext.IsNull())
	{
		for (Standard_Integer i = 0; i < PartCount; i++)
		{
			// Deselect object
			if (anAISContext->IsSelected(myShapes[i]))
				anAISContext->AddOrRemoveSelected(myShapes[i], Standard_False);

			anAISContext->Remove(myShapes[i], Standard_False);

			anAISContext->Display(myShapes[i], 1, Standard_True, Standard_False);
		}
	}
}


void AIS_TranslationGizmo::Compute(const Handle(Prs3d_Projector)&,
	const Handle(Prs3d_Presentation)&)
{
}


//=======================================================================
//function : AcceptDisplayMode
//purpose  : 
//=======================================================================
Standard_Boolean  AIS_TranslationGizmo::AcceptDisplayMode(const Standard_Integer aMode) const
{
	return aMode == 0;
}


//=======================================================================
//function : SetContext
//purpose  : 
//=======================================================================

void AIS_TranslationGizmo::SetContext(const Handle(AIS_InteractiveContext)& ctx)
{
	//  Standard_Boolean same_DA = myDrawer->Link() == Ctx->DefaultDrawer();

	if (ctx.IsNull())
	{
		for (Standard_Integer i = 0; i < PartCount; i++)
		{
			myShapes[i]->SetContext(ctx);
		}
		AIS_InteractiveObject::SetContext(ctx);
		return;
	}
	// Remove subobjects from current context
	Handle(AIS_InteractiveContext) anAISContext = GetContext();

	Standard_Boolean hasContext = (anAISContext.IsNull() == Standard_False);
	for (Standard_Integer i = 0; i < PartCount; i++)
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
		for (Standard_Integer i = 0; i < PartCount; i++)
			myShapes[i]->SetContext(ctx);
	}
}


void AIS_TranslationGizmo::Remove()
{
	// Display shapes
	Handle(AIS_InteractiveContext) anAISContext = GetContext();
	if (!anAISContext.IsNull())
	{
		// Deselect object
		for (Standard_Integer i = 0; i < PartCount; i++)
		{
			if (anAISContext->IsSelected(myShapes[i]))
				anAISContext->AddOrRemoveSelected(myShapes[i], Standard_False);

			anAISContext->Remove(myShapes[i], Standard_False);
		}
		anAISContext->Remove(this, Standard_False);
	}
}


bool AIS_TranslationGizmo::IsPartDetected(Part part)
{
	Handle(AIS_InteractiveContext) anAISContext = GetContext();
	if (!anAISContext.IsNull())
	{
		return (anAISContext->DetectedInteractive() == myShapes[part]) == Standard_True;
	}
	return false;
}