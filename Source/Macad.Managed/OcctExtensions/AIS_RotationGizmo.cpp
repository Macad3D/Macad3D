#include "ManagedPCH.h"

#include "AIS_RotationGizmo.h"
#include "AIS_CircleEx.h"

IMPLEMENT_STANDARD_RTTIEXT(AIS_RotationGizmo, AIS_InteractiveObject)


//=======================================================================
//function : AIS_RotationGizmo
//purpose  : 
//=======================================================================
AIS_RotationGizmo::AIS_RotationGizmo(const gp_Ax3& aCoordinateSystem)
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

const gp_Ax3 AIS_RotationGizmo::Component()
{
	return myCoordinateSystem;
}


//=======================================================================
//function : SetComponent
//purpose  : 
//=======================================================================

void AIS_RotationGizmo::SetComponent(const gp_Ax3& aCoordinateSystem)
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

void AIS_RotationGizmo::InitSubObjects()
{
	myShapes[Part::Part_XAxis] = Circle(Part::Part_XAxis);
	myShapes[Part::Part_YAxis] = Circle(Part::Part_YAxis);
	myShapes[Part::Part_ZAxis] = Circle(Part::Part_ZAxis);
}


Handle(AIS_CircleEx) AIS_RotationGizmo::Circle(Part part) const
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
	Standard_Real length = GetLength();
	auto aGCircle = new Geom_Circle(gp_Ax2(gp_Pnt(0, 0, 0), dir), length);

	auto aCircle = Handle(AIS_CircleEx)::DownCast(myShapes[part]);
	if (aCircle.IsNull())
	{
		aCircle = new AIS_CircleEx(aGCircle);
		aCircle->SetColor(color);
		aCircle->SetWidth(1);

		auto drawer = new Prs3d_Drawer();
		auto lineAspect = new Prs3d_LineAspect(color, Aspect_TypeOfLine::Aspect_TOL_SOLID, 3);
		drawer->SetLineAspect(lineAspect);
		aCircle->SetHilightAttributes(drawer);
		aCircle->SetZLayer(ZLayer());
	} else
	{
		aCircle->SetCircle(aGCircle);
	}

	Handle(Graphic3d_TransformPers) transformPers = new Graphic3d_TransformPers(Graphic3d_TMF_ZoomPers, myCoordinateSystem.Location());
	aCircle->SetTransformPersistence(transformPers);
	return aCircle;
}

void AIS_RotationGizmo::SetLength(const Standard_Real theLength) {
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

Standard_Real AIS_RotationGizmo::GetLength() const {
	return myDrawer->DatumAspect()->AxisLength(Prs3d_DP_XAxis);
}

void AIS_RotationGizmo::SetZLayer(const Graphic3d_ZLayerId  theLayerId)
{
	__super::SetZLayer(theLayerId);
	for (Standard_Integer i = 0; i < PartCount; i++)
	{
		if (!myShapes[i].IsNull())
			myShapes[i]->SetZLayer(theLayerId);
	}
}

void AIS_RotationGizmo::ForcePartHilighting(Part part)
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
void AIS_RotationGizmo::Compute(const Handle(PrsMgr_PresentationManager)& PM,
	const Handle(Prs3d_Presentation)& aPresentation,
	const Standard_Integer mode)
{
}

void AIS_RotationGizmo::computeHLR(const Handle(Graphic3d_Camera)& theProjector, const Handle(TopLoc_Datum3D)& theTrsf, const Handle(Prs3d_Presentation)& aPresentation)
{
	PrsMgr_PresentableObject::computeHLR(theProjector, theTrsf, aPresentation);
}

//=======================================================================
//function : ComputeSelection
//purpose  : 
//=======================================================================

void AIS_RotationGizmo::ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,
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


//=======================================================================
//function : AcceptDisplayMode
//purpose  : 
//=======================================================================
Standard_Boolean  AIS_RotationGizmo::AcceptDisplayMode(const Standard_Integer aMode) const
{
	return aMode == 0;
}


//=======================================================================
//function : SetContext
//purpose  : 
//=======================================================================

void AIS_RotationGizmo::SetContext(const Handle(AIS_InteractiveContext)& ctx)
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

	Standard_Boolean hasContext = (anAISContext.IsNull() == false);
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


void AIS_RotationGizmo::Remove()
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


bool AIS_RotationGizmo::IsPartDetected(Part part)
{
	Handle(AIS_InteractiveContext) anAISContext = GetContext();
	if (!anAISContext.IsNull())
	{
		return (anAISContext->DetectedInteractive() == myShapes[part]) == Standard_True;
	}
	return false;
}