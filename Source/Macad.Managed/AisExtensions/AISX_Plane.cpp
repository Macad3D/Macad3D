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

void AISX_Plane::SetPlane(const gp_Pln& thePlane)
{
    _Plane = thePlane;
    SetToUpdate();
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

void AISX_Plane::SetColor(const Quantity_Color& theColor, bool theIncludeHilight)
{
    SetColor(theColor);

    if(theIncludeHilight)
    {
        Graphic3d_Vec3 hlsColor = Quantity_Color::Convert_LinearRGB_To_HLS(Graphic3d_Vec3((float)theColor.Red(), (float)theColor.Green(), (float)theColor.Blue()));
        hlsColor.y() = __min(hlsColor.y() + 0.2f, 1.0f);
        myHilightDrawer->SetColor(Quantity_Color(hlsColor.x(), hlsColor.y(), hlsColor.z(), Quantity_TOC_HLS));
    }

    SynchronizeAspects();
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::SetTransparency(const Standard_Real theValue)
{
    __super::SetTransparency(theValue);
    myDrawer->ShadingAspect()->SetTransparency(theValue);

    SynchronizeAspects();
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::SetSize(double theSizeX, double theSizeY)
{
    _SizeX = theSizeX;
    _SizeY = theSizeY;
    SetToUpdate();
    UpdateSelection();
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::SetTexture(const Handle(Image_PixMap)& thePixMap)
{
	Handle(Graphic3d_Texture2D) aTexture = new Graphic3d_Texture2D(thePixMap);
	aTexture->SetAnisoFilter(Graphic3d_LOTA_QUALITY);

	myDrawer->ShadingAspect()->Aspect()->SetTextureMap(aTexture);
	myDrawer->ShadingAspect()->Aspect()->SetTextureMapOn(true);
    myDrawer->ShadingAspect()->Aspect()->SetColor(Quantity_NOC_WHITE);
    myDrawer->SetFaceBoundaryDraw(false);

	SynchronizeAspects();
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::Compute(const Handle(PrsMgr_PresentationManager)& thePrsMgr,
                         const Handle(Prs3d_Presentation)& thePrs, const Standard_Integer theMode)
{
    Handle(Graphic3d_ArrayOfTriangles) aTriArray;
    Handle(Graphic3d_ArrayOfSegments) aSegArray;
    _CreateQuad(aTriArray, aSegArray);

    Handle(Graphic3d_Group) aGroup = thePrs->CurrentGroup();
    aGroup->SetPrimitivesAspect(myDrawer->ShadingAspect()->Aspect());

    if(theMode == 0)
    {
        aGroup->AddPrimitiveArray(aTriArray);
        if(myDrawer->FaceBoundaryDraw())
        {
            aGroup->AddPrimitiveArray(aSegArray);
        }
    }
    else if(theMode == 1)
    {
        aGroup->AddPrimitiveArray(aSegArray);
    }
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const Handle(Prs3d_Drawer)& theStyle, 
                                       const Handle(SelectMgr_EntityOwner)& theOwner)
{
    thePrsMgr->Color(this, GetContext()->HighlightStyle(Prs3d_TypeOfHighlight_Dynamic), myDynHilightDrawer->DisplayMode());
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::HilightSelected(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const SelectMgr_SequenceOfOwner& theSeq)
{
    thePrsMgr->Color(this, myHilightDrawer, myHilightDrawer->DisplayMode());
}

//--------------------------------------------------------------------------------------------------

void AISX_Plane::_CreateQuad(Handle(Graphic3d_ArrayOfTriangles)& theTris, Handle(Graphic3d_ArrayOfSegments)& theSegs)
{
    const Standard_Real halfX = 0.5*_SizeX;
    const Standard_Real halfY = 0.5*_SizeY;

    gp_Pnt p1, p2, p3, p4;
    ElSLib::PlaneD0(-halfX,  halfY, _Plane.Position(), p1);
    ElSLib::PlaneD0( halfX,  halfY, _Plane.Position(), p2);
    ElSLib::PlaneD0( halfX, -halfY, _Plane.Position(), p3);
    ElSLib::PlaneD0(-halfX, -halfY, _Plane.Position(), p4);

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

    Handle(Poly_Triangulation) sensitivePoly;
    const Standard_Real halfX = 0.5*_SizeX;
    const Standard_Real halfY = 0.5*_SizeY;

    TColgp_Array1OfPnt rectanglePoints(1, 4);
    ElSLib::PlaneD0( halfX,  halfY, _Plane.Position(), rectanglePoints.ChangeValue(1));
    ElSLib::PlaneD0( halfX, -halfY, _Plane.Position(), rectanglePoints.ChangeValue(2));
    ElSLib::PlaneD0(-halfX, -halfY, _Plane.Position(), rectanglePoints.ChangeValue(3));
    ElSLib::PlaneD0(-halfX,  halfY, _Plane.Position(), rectanglePoints.ChangeValue(4));

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
    myDrawer->SetDisplayMode(0);

	shasp = new Prs3d_ShadingAspect();
    shasp->Aspect()->SetEdgeWidth(2);
    shasp->Aspect()->SetPolygonOffsets(Aspect_POM_Fill, 1.0f, -3);
    myDynHilightDrawer = new Prs3d_Drawer();
    myDynHilightDrawer->Link(myDrawer);
    myDynHilightDrawer->SetFaceBoundaryDraw(true);
    myDynHilightDrawer->SetDisplayMode(1);

    myHilightDrawer = new Prs3d_Drawer();
    myHilightDrawer->Link(myDrawer);
    myHilightDrawer->SetShadingAspect(shasp);
    myHilightDrawer->SetFaceBoundaryDraw(true);
    myHilightDrawer->SetDisplayMode(1);
}

//--------------------------------------------------------------------------------------------------
