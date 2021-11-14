#include "ManagedPCH.h"

#include "AIS_AxisEx.h"

IMPLEMENT_STANDARD_RTTIEXT(AIS_AxisEx, AIS_InteractiveObject)

//=======================================================================
//function : AIS_AxisEx
//purpose  :
//=======================================================================
AIS_AxisEx::AIS_AxisEx(const Handle(Geom_Line)& aComponent) 
	: myComponent(aComponent)
	, myText("")

{
	InitDrawer();
	ComputePoints();
}

//=======================================================================
//function : AIS_AxisEx
//purpose  : 
//=======================================================================
AIS_AxisEx::AIS_AxisEx(const Handle(Geom_Axis1Placement)& anAxis)
	:myComponent(new Geom_Line(anAxis->Ax1()))
{
	InitDrawer();
	ComputePoints();
}


//=======================================================================
//function : SetComponent
//purpose  : 
//=======================================================================

void AIS_AxisEx::SetComponent(const Handle(Geom_Line)& aComponent)
{
	myComponent = aComponent;
	ComputePoints();
}


//=======================================================================
//function : SetAxis1Placement
//purpose  : 
//=======================================================================

void AIS_AxisEx::SetAxis1Placement(const Handle(Geom_Axis1Placement)& anAxis)
{
	SetComponent(new Geom_Line(anAxis->Ax1()));
}

//=======================================================================
//function : Compute
//purpose  : 
//=======================================================================
void AIS_AxisEx::Compute(const Handle(PrsMgr_PresentationManager)&,
	const Handle(Prs3d_Presentation)& aPresentation,
	const Standard_Integer)
{
	aPresentation->Clear();

	aPresentation->SetInfiniteState(myInfiniteState);

	aPresentation->SetDisplayPriority(5);
	Standard_Real arrowLength = myDrawer->DatumAspect()->AxisLength(Prs3d_DP_XAxis) * 2.0; // will be divided by 10.0 in DsgPrs_XYZAxisPresentation::Add
	DsgPrs_XYZAxisPresentation::Add(aPresentation, myDrawer->DatumAspect()->LineAspect(Prs3d_DP_XAxis), myDir, arrowLength, myText, myPfirst, myPlast);
}


//=======================================================================
//function : HilightOwnerWithColor
//purpose  : 
//=======================================================================
void AIS_AxisEx::HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager)& PM,
	const Handle(Prs3d_Drawer) &theStyle,
	const Handle(SelectMgr_EntityOwner)& Owner)
{
	Handle(Prs3d_Presentation) aPresentation;
	aPresentation = GetHilightPresentation(PM);

	aPresentation->Clear();

	aPresentation->SetInfiniteState(myInfiniteState);

	aPresentation->SetDisplayPriority(5);
	Standard_Real arrowLength = myDrawer->DatumAspect()->AxisLength(Prs3d_DP_XAxis) * 2.0; // will be divided by 10.0 in DsgPrs_XYZAxisPresentation::Add
	DsgPrs_XYZAxisPresentation::Add(aPresentation, myDrawer->DatumAspect()->LineAspect(Prs3d_DP_YAxis), myDir, arrowLength, myText, myPfirst, myPlast);

	aPresentation->SetZLayer(Graphic3d_ZLayerId_Topmost);
	aPresentation->SetTransformPersistence(TransformPersistence());

	if (PM->IsImmediateModeOn())
	{
		PM->AddToImmediateList(aPresentation);
	}
}

void AIS_AxisEx::HilightSelected(const Handle(PrsMgr_PresentationManager)& thePM,
	const SelectMgr_SequenceOfOwner& theOwners)
{
}

void AIS_AxisEx::computeHLR(const Handle(Graphic3d_Camera)& theProjector, const Handle(TopLoc_Datum3D)& theTrsf, const Handle(Prs3d_Presentation)& aPresentation)
{
	PrsMgr_PresentableObject::computeHLR(theProjector, theTrsf, aPresentation);
}


//=======================================================================
//function : ComputeSelection
//purpose  : 
//=======================================================================

void AIS_AxisEx::ComputeSelection(const Handle(SelectMgr_Selection)& aSelection,
	const Standard_Integer)
{
	Handle(SelectMgr_EntityOwner) eown = new SelectMgr_EntityOwner(this);
	eown->SelectBasics_EntityOwner::SetPriority(3);
	Handle(Select3D_SensitiveSegment) seg = new Select3D_SensitiveSegment(eown, myPfirst, myPlast);
	seg->SetSensitivityFactor(20);
	aSelection->Add(seg);
}

//=======================================================================
//function : SetColor
//purpose  : 
//=======================================================================


void AIS_AxisEx::SetColor(const Quantity_NameOfColor aCol)
{
	SetColor(Quantity_Color(aCol));
}

void AIS_AxisEx::SetColor(const Quantity_Color &aCol)
{
	hasOwnColor = Standard_True;
	//myOwnColor = aCol;

	myDrawer->DatumAspect()->LineAspect(Prs3d_DP_XAxis)->SetColor(aCol);

	// Highlight Color
	Quantity_Color hlColor(min(1.0, aCol.Red() + 0.5), min(1.0, aCol.Green() + 0.5), min(1.0, aCol.Blue() + 0.5), Quantity_TOC_RGB);
	myDrawer->DatumAspect()->LineAspect(Prs3d_DP_YAxis)->SetColor(hlColor);
}

//=======================================================================
//function : SetWidth 
//purpose  : 
//=======================================================================
void AIS_AxisEx::SetWidth(const Standard_Real aValue)
{
	if (aValue<0.0) return;
	if (aValue == 0) UnsetWidth();

	myDrawer->DatumAspect()->LineAspect(Prs3d_DP_XAxis)->SetWidth(aValue);
	myDrawer->DatumAspect()->LineAspect(Prs3d_DP_YAxis)->SetWidth(aValue);
}


void AIS_AxisEx::SetLength(const Standard_Real theLength) 
{
	myDrawer->DatumAspect()->SetAxisLength(theLength, theLength, theLength);
	ComputePoints();
}

Standard_Real AIS_AxisEx::GetLength() const 
{
	return myDrawer->DatumAspect()->AxisLength(Prs3d_DP_XAxis);
}

//=======================================================================
//function : AcceptDisplayMode
//purpose  : 
//=======================================================================

Standard_Boolean  AIS_AxisEx::AcceptDisplayMode(const Standard_Integer aMode) const
{
	return aMode == 0;
}

//=======================================================================
//function : UnsetColor
//purpose  : 
//=======================================================================
void AIS_AxisEx::UnsetColor()
{
	hasOwnColor = Standard_False;

	myDrawer->DatumAspect()->LineAspect(Prs3d_DP_XAxis)->SetColor(Quantity_NOC_TURQUOISE);
	myDrawer->DatumAspect()->LineAspect(Prs3d_DP_YAxis)->SetColor(Quantity_NOC_TURQUOISE);
}
//=======================================================================
//function : UnsetWidth
//purpose  : 
//=======================================================================

void AIS_AxisEx::UnsetWidth()
{
	myOwnWidth = 0.0;
	myDrawer->DatumAspect()->LineAspect(Prs3d_DP_XAxis)->SetWidth(1.);
	myDrawer->DatumAspect()->LineAspect(Prs3d_DP_YAxis)->SetWidth(1.);
}

void AIS_AxisEx::ComputePoints()
{
	myDir = myComponent->Position().Direction();
	gp_Pnt loc = myComponent->Position().Location();
	Standard_Real aLength = myDrawer->DatumAspect()->AxisLength(Prs3d_DP_XAxis);
	myPfirst = loc.XYZ();
	myPlast = loc.XYZ() + aLength*myDir.XYZ();
}

void AIS_AxisEx::InitDrawer()
{
	myDrawer->SetLineAspect(new Prs3d_LineAspect(Quantity_NOC_RED, Aspect_TOL_SOLID, 1.));

	Handle(Prs3d_DatumAspect) DA = new Prs3d_DatumAspect();
	DA->SetDrawDatumAxes(Prs3d_DA_XYAxis);
	myDrawer->SetDatumAspect(DA);

	SetAutoHilight(false);

	SetInfiniteState();
}

