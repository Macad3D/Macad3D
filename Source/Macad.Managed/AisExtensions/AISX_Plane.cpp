#include "ManagedPCH.h"

#include "AISX_Plane.h"

IMPLEMENT_STANDARD_RTTIEXT(AISX_Plane, AIS_InteractiveObject)

//--------------------------------------------------------------------------------------------------

AISX_Plane::AISX_Plane()
    : _SizeX(100)
    , _SizeY(100)
{
    _InitDrawerAttributes();
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::SetPlane(const Handle(Geom_Plane)& thePlane)
{
    _Plane = thePlane;
    SetToUpdate();
    UpdatePresentations();
    UpdateSelection();
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::SetColor(const Quantity_Color& theColor)
{
    __super::SetColor(theColor);
    myDrawer->ShadingAspect()->SetColor(theColor);
    myDrawer->ShadingAspect()->Aspect()->SetEdgeColor(theColor);
    myDrawer->ShadingAspect()->Aspect()->SetShadingModel(Graphic3d_TOSM_UNLIT);
    SynchronizeAspects();
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::SetSize(double sizeX, double sizeY)
{
    _SizeX = sizeX;
    _SizeY = sizeY;
    SetToUpdate();
    UpdatePresentations();
    UpdateSelection();
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::SetTexture(const Handle(Image_PixMap)& thePixMap)
{
	Handle(Graphic3d_Texture2Dmanual) aTexture = new Graphic3d_Texture2Dmanual(thePixMap);
	aTexture->SetAnisoFilter(Graphic3d_LOTA_QUALITY);

	myDrawer->ShadingAspect()->Aspect()->SetTextureMap(aTexture);
	myDrawer->ShadingAspect()->Aspect()->SetTextureMapOn(true);
    myDrawer->ShadingAspect()->Aspect()->SetColor(Quantity_NOC_WHITE);
    myDrawer->SetFaceBoundaryDraw(false);

	//_HilightDrawer->ShadingAspect()->Aspect()->SetTextureMap(aTexture);
	//_HilightDrawer->ShadingAspect()->Aspect()->SetTextureMapOn(true);

	SynchronizeAspects();
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::Compute(const Handle(PrsMgr_PresentationManager)& thePrsMgr,
                         const Handle(Prs3d_Presentation)& thePrs, const Standard_Integer theMode)
{
    if(_Plane.IsNull())
        return;

    Handle(Graphic3d_ArrayOfTriangles) aTriArray;
    Handle(Graphic3d_ArrayOfSegments) aSegArray;
    _CreateQuad(aTriArray, aSegArray);

    Handle(Graphic3d_Group) aGroup = thePrs->CurrentGroup();
    aGroup->SetPrimitivesAspect(myDrawer->ShadingAspect()->Aspect());
    aGroup->AddPrimitiveArray(aTriArray);
    if(myDrawer->FaceBoundaryDraw())
    {
        aGroup->AddPrimitiveArray(aSegArray);
    }
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const Handle(Prs3d_Drawer)& theStyle, 
                                       const Handle(SelectMgr_EntityOwner)& theOwner)
{
    if(theOwner.IsNull() || _Plane.IsNull())
    {
        return;
    }

    Handle(Prs3d_Presentation) aHiPrs = GetHilightPresentation(thePrsMgr);
    if(aHiPrs.IsNull())
    {
        return;
    }

	aHiPrs->Clear();
	aHiPrs->SetZLayer(theStyle->ZLayer() != Graphic3d_ZLayerId_UNKNOWN ? theStyle->ZLayer() : myDrawer->ZLayer());

    Handle(Graphic3d_ArrayOfTriangles) aTriArray;
    Handle(Graphic3d_ArrayOfSegments) aSegArray;
    _CreateQuad(aTriArray, aSegArray);

    Handle(Graphic3d_Group) aGroup = aHiPrs->NewGroup();
    _HilightDrawer->ShadingAspect()->Aspect()->SetColor(theStyle->Color());
    aGroup->SetPrimitivesAspect(_HilightDrawer->ShadingAspect()->Aspect());
    aGroup->AddPrimitiveArray(aTriArray);
    aGroup->AddPrimitiveArray(aSegArray);

    if(thePrsMgr->IsImmediateModeOn())
    {
        thePrsMgr->AddToImmediateList(aHiPrs);
    }
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::HilightSelected(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const SelectMgr_SequenceOfOwner& theSeq)
{
    thePrsMgr->Color(this, GetContext()->SelectionStyle(), 0);
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::_CreateQuad(Handle(Graphic3d_ArrayOfTriangles)& theTris, Handle(Graphic3d_ArrayOfSegments)& theSegs)
{
    const Standard_Real halfX = 0.5*_SizeX;
    const Standard_Real halfY = 0.5*_SizeY;

    gp_Pnt p1, p2, p3, p4;
    _Plane->D0(-halfX,  halfY, p1);
    _Plane->D0( halfX,  halfY, p2);
    _Plane->D0( halfX, -halfY, p3);
    _Plane->D0(-halfX, -halfY, p4);

    gp_Pnt2d uv1, uv2, uv3, uv4;
    uv1 = gp_Pnt2d(0, 1);
    uv2 = gp_Pnt2d(1, 1);
    uv3 = gp_Pnt2d(1, 0);
    uv4 = gp_Pnt2d(0, 0);

    theTris = new Graphic3d_ArrayOfTriangles(4, 6, Graphic3d_ArrayFlags_VertexTexel);
    theTris->AddVertex(p1, uv1);
    theTris->AddVertex(p2, uv2);
    theTris->AddVertex(p3, uv3);
    theTris->AddVertex(p4, uv4);
    theTris->AddEdges(1, 3, 4);
    theTris->AddEdges(3, 1, 2);

    theSegs = new Graphic3d_ArrayOfSegments(4, 8);
    theSegs->AddVertex(p1);
    theSegs->AddVertex(p2);
    theSegs->AddVertex(p3);
    theSegs->AddVertex(p4);
    theSegs->AddEdges(1, 2);
    theSegs->AddEdges(2, 3);
    theSegs->AddEdges(3, 4);
    theSegs->AddEdges(4, 1);
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::ComputeSelection(const Handle(SelectMgr_Selection)& theSelection, const Standard_Integer theMode)
{
    theSelection->Clear();

    if(_Plane.IsNull())
        return;

    Handle(Poly_Triangulation) sensitivePoly;
    const Standard_Real halfX = 0.5*_SizeX;
    const Standard_Real halfY = 0.5*_SizeY;

    TColgp_Array1OfPnt rectanglePoints(1, 4);
    _Plane->D0 ( halfX,  halfY, rectanglePoints.ChangeValue(1));
    _Plane->D0 ( halfX, -halfY, rectanglePoints.ChangeValue(2));
    _Plane->D0 (-halfX, -halfY, rectanglePoints.ChangeValue(3));
    _Plane->D0 (-halfX,  halfY, rectanglePoints.ChangeValue(4));

    Poly_Array1OfTriangle triangles(1, 2);
    triangles.ChangeValue(1) = Poly_Triangle(1, 2, 3);
    triangles.ChangeValue(2) = Poly_Triangle(1, 3, 4);

    sensitivePoly = new Poly_Triangulation(rectanglePoints, triangles);
  
    Handle(SelectMgr_EntityOwner) sensitiveOwner = new SelectMgr_EntityOwner(this, 10);
    Handle(Select3D_SensitiveTriangulation) sensitive = new Select3D_SensitiveTriangulation(sensitiveOwner, sensitivePoly, TopLoc_Location(), true);
    theSelection->Add(sensitive);
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::_InitDrawerAttributes()
{
	Handle(Prs3d_ShadingAspect) shasp = new Prs3d_ShadingAspect();
    shasp->SetMaterial(Graphic3d_NOM_PLASTIC);
    shasp->SetColor(Quantity_NOC_GRAY40);
    shasp->SetTransparency(0.8f);
    shasp->Aspect()->SetEdgeWidth(2);
    shasp->Aspect()->SetPolygonOffsets(Aspect_POM_Fill, 1.0f, -3);
    myDrawer->SetShadingAspect(shasp);
    myDrawer->SetFaceBoundaryDraw(true);

	shasp = new Prs3d_ShadingAspect();
    shasp->SetTransparency(0.33f);
    shasp->Aspect()->SetEdgeWidth(2);
    shasp->Aspect()->SetPolygonOffsets(Aspect_POM_Fill, 1.0f, -3);
    _HilightDrawer = new Prs3d_Drawer();
    _HilightDrawer->Link(myDrawer);
    _HilightDrawer->SetShadingAspect(shasp);
    _HilightDrawer->SetFaceBoundaryDraw(true);
}

//--------------------------------------------------------------------------------------------------
