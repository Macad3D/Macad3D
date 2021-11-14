#include "ManagedPCH.h"
#include "AIS_PointEx.h"

IMPLEMENT_STANDARD_RTTIEXT(AIS_PointEx,AIS_Point)


AIS_PointEx::AIS_PointEx(const Handle(Geom_Point)& aComponent)
	: ::AIS_Point(aComponent)
{
}

//--------------------------------------------------------------------------------------------------

void AIS_PointEx::SetBackgroundColor(const Quantity_Color& theColor)
{
    if(myBackgroundDrawer.IsNull())
        return;

    myBackgroundDrawer->PointAspect()->SetColor(theColor);
    SynchronizeAspects();
}

//--------------------------------------------------------------------------------------------------

void AIS_PointEx::Compute(const Handle(PrsMgr_PresentationManager)& aPresentationManager,
                        const Handle(Prs3d_Presentation)& aPresentation, 
                        const Standard_Integer aMode)
{
    aPresentation->SetInfiniteState(myInfiniteState);

    if (aMode==0 && !myBackgroundDrawer.IsNull())
    {
        StdPrs_Point::Add(aPresentation, Component(), myBackgroundDrawer);
    }

    AIS_Point::Compute(aPresentationManager, aPresentation, aMode);
}

//--------------------------------------------------------------------------------------------------

void AIS_PointEx::EnableBackground(double theTransparency)
{
    if(!myDrawer->HasOwnPointAspect() || myDrawer->PointAspect()->Aspect()->Type() != Aspect_TOM_USERDEFINED)
        return;

    int width, height;
    myDrawer->PointAspect()->Aspect()->GetTextureSize(width, height);

    myBackgroundDrawer = new Prs3d_Drawer();
    Handle(Image_PixMap) myImage = new Image_PixMap();
    myImage->InitZero(Image_Format_Alpha, width, height, 0, (Standard_Byte)(255 * theTransparency) );
    Handle(Graphic3d_AspectMarker3d) aMarkerAspect = new Graphic3d_AspectMarker3d(myImage);
    Handle(Prs3d_PointAspect) aPointAspect = new Prs3d_PointAspect(aMarkerAspect);
    aPointAspect->SetTypeOfMarker(Aspect_TOM_USERDEFINED);
    myBackgroundDrawer->SetPointAspect(aPointAspect);

    myBackgroundDrawer->SetZLayer(ZLayer());

    SetToUpdate();
    UpdatePresentations();
}
