#include "ManagedPCH.h"

#include "AIS_CircleEx.h"


IMPLEMENT_STANDARD_RTTIEXT(AIS_CircleEx, AIS_InteractiveObject)

//=======================================================================
//function : AIS_Circle
//purpose  : 
//=======================================================================
AIS_CircleEx::AIS_CircleEx(const Handle(Geom_Circle)& aComponent) :
AIS_InteractiveObject(PrsMgr_TOP_AllView),
myComponent(aComponent),
myUStart(0.),
myUEnd(2 * M_PI),
myCircleIsArc(Standard_False),
myIsFilledCircleSens(Standard_False)
{
	SetAutoHilight(false);
}

//=======================================================================
//function : AIS_Circle
//purpose  : 
//=======================================================================
AIS_CircleEx::AIS_CircleEx(const Handle(Geom_Circle)& theComponent,
	const Standard_Real theUStart,
	const Standard_Real theUEnd,
	const Standard_Boolean theIsFilledCircleSens)
	: AIS_InteractiveObject(PrsMgr_TOP_AllView),
	myComponent(theComponent),
	myUStart(theUStart),
	myUEnd(theUEnd),
	myCircleIsArc(Standard_True),
	myIsFilledCircleSens(theIsFilledCircleSens)
{
	SetAutoHilight(false);
}

//=======================================================================
//function : Compute
//purpose  : 
//=======================================================================
void AIS_CircleEx::Compute(const Handle(PrsMgr_PresentationManager3d)& /*aPresentationManager*/,
	const Handle(Prs3d_Presentation)& aPresentation,
	const Standard_Integer /*aMode*/)
{
	aPresentation->Clear();

	aPresentation->SetDisplayPriority(5);

	if (myCircleIsArc) ComputeArc(aPresentation, myDrawer);
	else ComputeCircle(aPresentation, myDrawer);

}


//=======================================================================
//function : HilightOwnerWithColor
//purpose  : 
//=======================================================================
void AIS_CircleEx::HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager3d)& PM,
	const Handle(Prs3d_Drawer) &theStyle,
	const Handle(SelectMgr_EntityOwner)& Owner)
{
	Handle(Prs3d_Presentation) aPresentation;
	aPresentation = GetHilightPresentation(PM);

	aPresentation->Clear();

	aPresentation->SetInfiniteState(myInfiniteState);

	aPresentation->SetDisplayPriority(5);

	if (myCircleIsArc) ComputeArc(aPresentation, myHilightDrawer);
	else ComputeCircle(aPresentation, myHilightDrawer);

	aPresentation->SetZLayer(Graphic3d_ZLayerId_Topmost);
	aPresentation->SetTransformPersistence(TransformPersistence());

	if (PM->IsImmediateModeOn())
	{
		PM->AddToImmediateList(aPresentation);
	}
}

void AIS_CircleEx::HilightSelected(const Handle(PrsMgr_PresentationManager3d)& thePM,
	const SelectMgr_SequenceOfOwner& theOwners)
{
}

//=======================================================================
//function : Compute
//purpose  : 
//=======================================================================

void AIS_CircleEx::Compute(const Handle(Prs3d_Projector)& aProjector,
	const Handle(Geom_Transformation)& aTransformation,
	const Handle(Prs3d_Presentation)& aPresentation)
{
	// Standard_NotImplemented::Raise("AIS_Circle::Compute(const Handle(Prs3d_Projector)&, const Handle(Geom_Transformation)&, const Handle(Prs3d_Presentation)&)");
	PrsMgr_PresentableObject::Compute(aProjector, aTransformation, aPresentation);
}

//=======================================================================
//function : ComputeSelection
//purpose  : 
//=======================================================================

void AIS_CircleEx::ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,
	const Standard_Integer /*aMode*/)
{

	if (myCircleIsArc) ComputeArcSelection(aSelection);
	else ComputeCircleSelection(aSelection);

}


//=======================================================================
//function : SetColor
//purpose  : 
//=======================================================================

void AIS_CircleEx::SetColor(const Quantity_Color &aCol)
{
	hasOwnColor = Standard_True;

	Standard_Real WW = HasWidth() ? myOwnWidth :
		myDrawer->HasLink() ?
		AIS_GraphicTool::GetLineWidth(myDrawer->Link(), AIS_TOA_Line) :
		1.;

	if (!myDrawer->HasOwnLineAspect())
		myDrawer->SetLineAspect(new Prs3d_LineAspect(aCol, Aspect_TOL_SOLID, WW));
	else
		myDrawer->LineAspect()->SetColor(aCol);
}



//=======================================================================
//function : SetWidth 
//purpose  : 
//=======================================================================
void AIS_CircleEx::SetWidth(const Standard_Real aValue)
{
	myOwnWidth = (Standard_ShortReal)aValue;

	if (!myDrawer->HasOwnLineAspect()) {
		Quantity_Color CC = Quantity_NOC_YELLOW;
		/*if (HasColor()) CC = myOwnColor;
		else */if (myDrawer->HasLink()) AIS_GraphicTool::GetLineColor(myDrawer->Link(), AIS_TOA_Line, CC);
		myDrawer->SetLineAspect(new Prs3d_LineAspect(CC, Aspect_TOL_SOLID, aValue));
	}
	else
		myDrawer->LineAspect()->SetWidth(aValue);
}


//=======================================================================
//function : UnsetColor 
//purpose  : 
//=======================================================================
void AIS_CircleEx::UnsetColor()
{
	hasOwnColor = Standard_False;

	Handle(Prs3d_LineAspect) NullAsp;

	if (!HasWidth()) myDrawer->SetLineAspect(NullAsp);
	else{
		Quantity_Color CC = Quantity_NOC_YELLOW;;
		/*if (HasColor()) CC = myOwnColor;
		else */if (myDrawer->HasLink()) AIS_GraphicTool::GetLineColor(myDrawer->Link(), AIS_TOA_Line, CC);
		myDrawer->LineAspect()->SetColor(CC);
		//myOwnColor = CC;
	}
}

//=======================================================================
//function : UnsetWidth 
//purpose  : 
//=======================================================================
void AIS_CircleEx::UnsetWidth()
{
	Handle(Prs3d_LineAspect) NullAsp;

	if (!HasColor()) myDrawer->SetLineAspect(NullAsp);
	else{
		Standard_Real WW = myDrawer->HasLink() ? AIS_GraphicTool::GetLineWidth(myDrawer->Link(), AIS_TOA_Line) : 1.;
		myDrawer->LineAspect()->SetWidth(WW);
		myOwnWidth = (Standard_ShortReal)WW;
	}
}

//=======================================================================
//function : ComputeCircle
//purpose  : 
//=======================================================================
void AIS_CircleEx::ComputeCircle(const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)&aDrawer)
{

	GeomAdaptor_Curve curv(myComponent);
	Standard_Real prevdev = aDrawer->DeviationCoefficient();
	aDrawer->SetDeviationCoefficient(1.e-5);
	StdPrs_DeflectionCurve::Add(aPresentation, curv, aDrawer);
	aDrawer->SetDeviationCoefficient(prevdev);

}

//=======================================================================
//function : ComputeArc

//purpose  : 
//=======================================================================
void AIS_CircleEx::ComputeArc(const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)&aDrawer)
{
	GeomAdaptor_Curve curv(myComponent, myUStart, myUEnd);
	Standard_Real prevdev = aDrawer->DeviationCoefficient();
	aDrawer->SetDeviationCoefficient(1.e-5);
	StdPrs_DeflectionCurve::Add(aPresentation, curv, aDrawer);
	aDrawer->SetDeviationCoefficient(prevdev);
}

//=======================================================================
//function : ComputeCircleSelection
//purpose  : 
//=======================================================================

void AIS_CircleEx::ComputeCircleSelection(const Handle(SelectMgr_Selection)& aSelection)
{
	Handle(SelectMgr_EntityOwner) eown = new SelectMgr_EntityOwner(this);
	Handle(Select3D_SensitiveCircle) seg = new Select3D_SensitiveCircle(eown,
		myComponent,
		myIsFilledCircleSens);
	seg->SetSensitivityFactor(10);
	aSelection->Add(seg);
}
//=======================================================================
//function : ComputeArcSelection
//purpose  : 
//=======================================================================

void AIS_CircleEx::ComputeArcSelection(const Handle(SelectMgr_Selection)& aSelection)
{


	Handle(SelectMgr_EntityOwner) eown = new SelectMgr_EntityOwner(this);
	Handle(Select3D_SensitiveCircle) seg = new Select3D_SensitiveCircle(eown,
		myComponent,
		myUStart, myUEnd,
		myIsFilledCircleSens);
	seg->SetSensitivityFactor(20);
	aSelection->Add(seg);
}

//=======================================================================
//function : Compute
//purpose  : to avoid warning
//=======================================================================
void AIS_CircleEx::Compute(const Handle(Prs3d_Projector)&,
	const Handle(Prs3d_Presentation)&)
{
}
