#include "ManagedPCH.h"

#include "AIS_PlaneEx.h"

IMPLEMENT_STANDARD_RTTIEXT(AIS_PlaneEx, AIS_InteractiveObject)


//=======================================================================
//function : AIS_Plane
//purpose  : 
//=======================================================================
AIS_PlaneEx::AIS_PlaneEx(const Handle(Geom_Plane)& aComponent,
const Standard_Boolean aCurrentMode) :
myComponent(aComponent),
myCenterOffset(gp_XY(0., 0.)),
myCurrentMode(aCurrentMode),
myAutomaticPosition(Standard_True),
myTypeOfSensitivity(Select3D_TOS_BOUNDARY)
{
	InitDrawerAttributes();
	UpdateFace();
}

//=======================================================================
//function : AIS_Plane 
//purpose  : avec une position
//=======================================================================
AIS_PlaneEx::AIS_PlaneEx(const Handle(Geom_Plane)& aComponent,
	const gp_XY& aCenterOffset,
	const Standard_Boolean aCurrentMode) :
	myComponent(aComponent),
	myCenterOffset(aCenterOffset),
	myCurrentMode(aCurrentMode),
	myAutomaticPosition(Standard_True),
	myTypeOfSensitivity(Select3D_TOS_BOUNDARY)
{
	InitDrawerAttributes();
	UpdateFace();
}


//=======================================================================
//function : SetComponent
//purpose  : 
//=======================================================================

void AIS_PlaneEx::SetComponent(const Handle(Geom_Plane)& aComponent)
{
	myComponent = aComponent;
	//myCenter = gp_Pnt(0.,0.,0.);
	myAutomaticPosition = Standard_True;
	UpdateFace();
}

//=======================================================================
//function : Type
//purpose  : 
//=======================================================================

AIS_KindOfInteractive AIS_PlaneEx::Type() const
{
	return AIS_KOI_Datum;
}


//=======================================================================
//function : Signature
//purpose  : 
//=======================================================================

Standard_Integer AIS_PlaneEx::Signature() const
{
	return 7;
}

//=======================================================================
//function : Compute
//purpose  : 
//=======================================================================
void AIS_PlaneEx::Compute(const Handle(PrsMgr_PresentationManager3d)&,
	const Handle(Prs3d_Presentation)& aPresentation,
	const Standard_Integer aMode)
{
	aPresentation->Clear();

	aPresentation->SetInfiniteState(myInfiniteState);
	myDrawer->PlaneAspect()->EdgesAspect()->SetWidth(myCurrentMode == 0 ? 1 : 3);

	switch (aMode)
	{
		case 0:
		{
			ComputeFrame();
			const Handle(Geom_Plane)& pl = myComponent;
			const Handle(Geom_Plane)& thegoodpl = Handle(Geom_Plane)::DownCast(pl->Translated(pl->Location(), gp_Pnt(myCenterOffset.X(), myCenterOffset.Y(), 0.0)));
			GeomAdaptor_Surface surf(thegoodpl);
			StdPrs_Plane::Add(aPresentation, surf, myDrawer);
			break;
		}
		case 1:
		{

			StdPrs_ShadedShape::Add(aPresentation, myFace, myDrawer);

			break;
		}
	}
}

void AIS_PlaneEx::Compute(const Handle(Prs3d_Projector)& aProjector, const Handle(Geom_Transformation)& aTransformation, const Handle(Prs3d_Presentation)& aPresentation)
{
	PrsMgr_PresentableObject::Compute(aProjector, aTransformation, aPresentation);
}


//=======================================================================
//function : HilightOwnerWithColor
//purpose  : 
//=======================================================================
void AIS_PlaneEx::HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager3d)& PM,
	const Handle(Prs3d_Drawer) &theStyle,
	const Handle(SelectMgr_EntityOwner)& Owner)
{
	Handle(Prs3d_Presentation) aPresentation;
	aPresentation = GetHilightPresentation(PM);

	aPresentation->Clear();

	aPresentation->SetInfiniteState(myInfiniteState);
	myHilightDrawer->PlaneAspect()->EdgesAspect()->SetWidth(myCurrentMode == 0 ? 1 : 3);

	int aMode = myCurrentMode ? 1 : 0;
	switch (aMode)
	{
	case 0:
		{
			ComputeFrame();
			const Handle(Geom_Plane)& pl = myComponent;
			const Handle(Geom_Plane)& thegoodpl = Handle(Geom_Plane)::DownCast(pl->Translated(pl->Location(), gp_Pnt(myCenterOffset.X(), myCenterOffset.Y(), 0.0)));
			GeomAdaptor_Surface surf(thegoodpl);
			StdPrs_Plane::Add(aPresentation, surf, myHilightDrawer);
			break;
		}
	case 1:
		{
			StdPrs_ShadedShape::Add(aPresentation, myFace, myHilightDrawer);
			break;
		}
	}

	aPresentation->SetZLayer(Graphic3d_ZLayerId_Topmost);
	aPresentation->SetTransformPersistence(TransformPersistence());

	if (PM->IsImmediateModeOn())
	{
		PM->AddToImmediateList(aPresentation);
	}
}

void AIS_PlaneEx::HilightSelected(const Handle(PrsMgr_PresentationManager3d)& thePM,
	const SelectMgr_SequenceOfOwner& theOwners)
{
}


void AIS_PlaneEx::UpdateFace()
{
	ComputeFrame();
	Handle(Prs3d_PlaneAspect) theaspect = myDrawer->PlaneAspect();

	const Standard_Real Xmax = theaspect->PlaneXLength() * myCenterOffset.X();
	const Standard_Real Ymax = theaspect->PlaneYLength() * myCenterOffset.Y();
	const Standard_Real Xmin = Xmax - theaspect->PlaneXLength();
	const Standard_Real Ymin = Ymax - theaspect->PlaneYLength();

	gp_Pnt points[4];
	myComponent->D0(Xmin, Ymax, points[0]);
	myComponent->D0(Xmax, Ymax, points[1]);
	myComponent->D0(Xmax, Ymin, points[2]);
	myComponent->D0(Xmin, Ymin, points[3]);

	BRepBuilderAPI_MakeEdge anEdgeMaker1(points[0], points[1]),
		anEdgeMaker2(points[1], points[2]),
		anEdgeMaker3(points[2], points[3]),
		anEdgeMaker4(points[3], points[0]);

	TopoDS_Edge anEdge1 = anEdgeMaker1.Edge(),
		anEdge2 = anEdgeMaker2.Edge(),
		anEdge3 = anEdgeMaker3.Edge(),
		anEdge4 = anEdgeMaker4.Edge();
	if (anEdge1.IsNull() || anEdge2.IsNull() || anEdge3.IsNull() || anEdge4.IsNull())
		return;

	BRepBuilderAPI_MakeWire aWireMaker(anEdge1, anEdge2, anEdge3, anEdge4);
	TopoDS_Wire aWire = aWireMaker.Wire();
	if (aWire.IsNull()) return;

	BRepBuilderAPI_MakeFace aFaceMaker(aWire);
	TopoDS_Face aFace = aFaceMaker.Face();
	if (aFace.IsNull()) return;

	myFace = aFace;
}


//=======================================================================
//function : ComputeSelection
//purpose  : 
//=======================================================================
void AIS_PlaneEx::ComputeSelection(const Handle(SelectMgr_Selection)& theSelection, const Standard_Integer /*theMode*/)
{
	theSelection->Clear();
	Handle(SelectMgr_EntityOwner) aSensitiveOwner = new SelectMgr_EntityOwner(this, 10);
	Handle(Poly_Triangulation) aSensitivePoly;

	// plane representing rectangle
	//Standard_Real aLengthX = myDrawer->PlaneAspect()->PlaneXLength() / 2.0;
	//Standard_Real aLengthY = myDrawer->PlaneAspect()->PlaneYLength() / 2.0;
	//Handle(Geom_Plane) aPlane =
	//	Handle(Geom_Plane)::DownCast(myComponent->Translated(myComponent->Location(), myCenter));

	const Standard_Real Xmax = myDrawer->PlaneAspect()->PlaneXLength() * myCenterOffset.X();
	const Standard_Real Ymax = myDrawer->PlaneAspect()->PlaneYLength() * myCenterOffset.Y();
	const Standard_Real Xmin = Xmax - myDrawer->PlaneAspect()->PlaneXLength();
	const Standard_Real Ymin = Ymax - myDrawer->PlaneAspect()->PlaneYLength();

	TColgp_Array1OfPnt aRectanglePoints(1, 4);
	myComponent->D0(Xmax, Ymax, aRectanglePoints.ChangeValue(1));
	myComponent->D0(Xmax, Ymin, aRectanglePoints.ChangeValue(2));
	myComponent->D0(Xmin, Ymin, aRectanglePoints.ChangeValue(3));
	myComponent->D0(Xmin, Ymax, aRectanglePoints.ChangeValue(4));

	Poly_Array1OfTriangle aTriangles(1, 2);
	aTriangles.ChangeValue(1) = Poly_Triangle(1, 2, 3);
	aTriangles.ChangeValue(2) = Poly_Triangle(1, 3, 4);

	aSensitivePoly = new Poly_Triangulation(aRectanglePoints, aTriangles);

	Standard_Boolean isSensitiveInterior = myTypeOfSensitivity == Select3D_TOS_INTERIOR;

	Handle(Select3D_SensitiveTriangulation) aSensitive =
		new Select3D_SensitiveTriangulation(aSensitiveOwner,
		aSensitivePoly,
		TopLoc_Location(),
		isSensitiveInterior);

	theSelection->Add(aSensitive);
}


//=======================================================================
//function : SetSize
//purpose  : 
//=======================================================================
void AIS_PlaneEx::SetSize(const Standard_Real aLength)
{
	SetSize(aLength, aLength);
}

void AIS_PlaneEx::SetSize(const Standard_Real aXLength,
	const Standard_Real aYLength)
{
	//if the plane already has a proper color or size, 
	//there is already a specific PlaneAspect and DatumAspect 

	Handle(Prs3d_PlaneAspect) PA;
	Handle(Prs3d_DatumAspect) DA;

	PA = myDrawer->PlaneAspect();
	DA = myDrawer->DatumAspect();

	Standard_Boolean yenavaitPA(Standard_True), yenavaitDA(Standard_True);
	if (myDrawer->HasLink() && myDrawer->Link()->PlaneAspect() == PA){
		yenavaitPA = Standard_False;
		PA = new Prs3d_PlaneAspect();
	}
	if (myDrawer->HasLink() && myDrawer->Link()->DatumAspect() == DA){
		yenavaitDA = Standard_False;
		DA = new Prs3d_DatumAspect();
	}

	PA->SetPlaneLength(aXLength, aYLength);
	DA->SetAxisLength(aXLength, aYLength, aXLength);

	if (!yenavaitPA)
		myDrawer->SetPlaneAspect(PA);
	if (!yenavaitDA)
		myDrawer->SetDatumAspect(DA);

	UpdateFace();

	myHasOwnSize = Standard_True;
	SetToUpdate();
	UpdatePresentations();
	UpdateSelection();
}


//=======================================================================
//function : UnsetSize
//purpose  : If there is a color, the size is restaured from the drawer of the context...
//=======================================================================
void AIS_PlaneEx::UnsetSize()
{

	if (!myHasOwnSize) return;
	if (!hasOwnColor)
	{
		myDrawer->SetPlaneAspect(Handle(Prs3d_PlaneAspect)());
		myDrawer->SetDatumAspect(Handle(Prs3d_DatumAspect)());
	}
	else{
		const Handle(Prs3d_PlaneAspect) PA = myDrawer->HasLink() ? myDrawer->Link()->PlaneAspect() :
			new Prs3d_PlaneAspect();
		const Handle(Prs3d_DatumAspect) DA = myDrawer->HasLink() ? myDrawer->Link()->DatumAspect() :
			new Prs3d_DatumAspect();

		myDrawer->PlaneAspect()->SetPlaneLength(PA->PlaneXLength(), PA->PlaneYLength());
		myDrawer->DatumAspect()->SetAxisLength(DA->AxisLength(Prs3d_DP_XAxis),
			DA->AxisLength(Prs3d_DP_YAxis),
			DA->AxisLength(Prs3d_DP_ZAxis));
	}

	UpdateFace();

	myHasOwnSize = Standard_False;
	SetToUpdate();
	UpdatePresentations();
	UpdateSelection();

}

//=======================================================================
//function : Size
//purpose  : 
//=======================================================================

Standard_Boolean AIS_PlaneEx::Size(Standard_Real& X, Standard_Real& Y) const
{
	X = myDrawer->PlaneAspect()->PlaneXLength();
	Y = myDrawer->PlaneAspect()->PlaneYLength();
	return Abs(X - Y) <= Precision::Confusion();
}


//=======================================================================
//function : SetColor
//purpose  : 
//=======================================================================


void AIS_PlaneEx::SetColor(const Quantity_NameOfColor aCol)
{
	SetColor(Quantity_Color(aCol));
}

void AIS_PlaneEx::SetColor(const Quantity_Color &aCol)
{
	// if the plane already has its proper size, there is an already created planeaspect 
	//  Standard_Boolean yenadeja = hasOwnColor || myHasOwnSize;
	Handle(Prs3d_PlaneAspect) PA;
	Handle(Prs3d_DatumAspect) DA;

	PA = myDrawer->PlaneAspect();
	DA = myDrawer->DatumAspect();

	Standard_Boolean yenavaitPA(Standard_True), yenavaitDA(Standard_True);
	if (myDrawer->HasLink() && myDrawer->Link()->PlaneAspect() == PA){
		yenavaitPA = Standard_False;
		PA = new Prs3d_PlaneAspect();
	}
	if (myDrawer->HasLink() && myDrawer->Link()->DatumAspect() == DA){
		yenavaitDA = Standard_False;
		DA = new Prs3d_DatumAspect();
	}

	PA->EdgesAspect()->SetColor(aCol);
	DA->LineAspect(Prs3d_DP_XAxis)->SetColor(aCol);
	DA->LineAspect(Prs3d_DP_YAxis)->SetColor(aCol);
	DA->LineAspect(Prs3d_DP_ZAxis)->SetColor(aCol);

	if (!yenavaitPA)
		myDrawer->SetPlaneAspect(PA);
	if (!yenavaitDA)
		myDrawer->SetDatumAspect(DA);

	myDrawer->ShadingAspect()->SetColor(aCol);

	hasOwnColor = Standard_True;
	//myOwnColor = aCol;
}

//=======================================================================
//function : SetColor
//purpose  : 
//=======================================================================
void AIS_PlaneEx::UnsetColor()
{
	if (!hasOwnColor) return;
	if (!myHasOwnSize)
	{
		myDrawer->SetPlaneAspect(Handle(Prs3d_PlaneAspect)());
		myDrawer->SetDatumAspect(Handle(Prs3d_DatumAspect)());
	}
	else{
		const Handle(Prs3d_PlaneAspect) PA = myDrawer->HasLink() ? myDrawer->Link()->PlaneAspect() :
			new Prs3d_PlaneAspect();
		//    const Handle(Prs3d_DatumAspect)& DA = myDrawer->Link()->DatumAspect();
		Quantity_Color C = PA->EdgesAspect()->Aspect()->Color(); 
		Aspect_TypeOfLine T = PA->EdgesAspect()->Aspect()->Type(); 
		Standard_Real W = PA->EdgesAspect()->Aspect()->Width();
		Quantity_NameOfColor Col = C.Name();
		myDrawer->PlaneAspect()->EdgesAspect()->SetColor(Col);

		myDrawer->DatumAspect()->LineAspect(Prs3d_DP_XAxis)->SetColor(Col);
		myDrawer->DatumAspect()->LineAspect(Prs3d_DP_YAxis)->SetColor(Col);
		myDrawer->DatumAspect()->LineAspect(Prs3d_DP_ZAxis)->SetColor(Col);
	}


	hasOwnColor = Standard_False;

}

//=======================================================================
//function : ComputeFrame
//purpose  : 
//=======================================================================
void AIS_PlaneEx::ComputeFrame()
{

	//const Handle(Geom_Plane)& pl = myComponent;
	//Standard_Real U, V;

	//ElSLib::Parameters(pl->Pln(), myCenter, U, V);
	//pl->D0(U, V, myCenter);
}

//=======================================================================
//function : Compute
//purpose  : to avoid warning
//=======================================================================
void AIS_PlaneEx::Compute(const Handle(Prs3d_Projector)&,
	const Handle(Prs3d_Presentation)&)
{
}

//=======================================================================
//function : InitDrawerAttributes
//purpose  : 
//=======================================================================

void AIS_PlaneEx::InitDrawerAttributes()
{
	Handle(Prs3d_ShadingAspect) shasp = new Prs3d_ShadingAspect();
	shasp->SetMaterial(Graphic3d_NOM_PLASTIC);
	shasp->SetColor(Quantity_NOC_GRAY40);
	myDrawer->SetShadingAspect(shasp);
	Handle(Graphic3d_AspectFillArea3d) asf = shasp->Aspect();
	Graphic3d_MaterialAspect asp = asf->FrontMaterial();
	asp.SetTransparency(0.8f);
	asf->SetFrontMaterial(asp);
	asf->SetBackMaterial(asp);

	SetAutoHilight(false);
}

//=======================================================================
//function : AcceptDisplayMode
//purpose  : 
//=======================================================================

Standard_Boolean  AIS_PlaneEx::AcceptDisplayMode(const Standard_Integer aMode) const
{
	return aMode == 0;
}


//=======================================================================
//function : SetContext
//purpose  : 
//=======================================================================

void AIS_PlaneEx::SetContext(const Handle(AIS_InteractiveContext)& Ctx)
{
	AIS_InteractiveObject::SetContext(Ctx);
}
