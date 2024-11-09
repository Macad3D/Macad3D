#include "ManagedPCH.h"
#include "AIS_PointEx.h"

IMPLEMENT_STANDARD_RTTIEXT(AIS_PointEx,AIS_Point)

//--------------------------------------------------------------------------------------------------

AIS_PointEx::SetMultisamplingElement::SetMultisamplingElement(bool bEnableMultisampling)
    : m_bEnableMultisampling(bEnableMultisampling)
{
}

//--------------------------------------------------------------------------------------------------

void AIS_PointEx::SetMultisamplingElement::Render(const opencascade::handle<OpenGl_Workspace>& theWorkspace) const
{
    Handle(OpenGl_Context) aContext = theWorkspace->GetGlContext();

    if (m_bEnableMultisampling)
    {
        aContext->core11fwd->glEnable(GL_MULTISAMPLE);
    }
    else
    {
        aContext->core11fwd->glDisable(GL_MULTISAMPLE);
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

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

void AIS_PointEx::Compute(const Handle(PrsMgr_PresentationManager)& thePresentationMgr,
                        const Handle(Prs3d_Presentation)& thePresentation, 
                        const Standard_Integer theMode)
{
    thePresentation->SetInfiniteState(myInfiniteState);
    Handle(Graphic3d_Group) aGroup = thePresentation->CurrentGroup();
    Handle(OpenGl_Group) aOpenGlGroup = Handle(OpenGl_Group)::DownCast(thePresentation->CurrentGroup());

    // Disable MSAA due to a bug(?) in AMD driver to always render a smooth point, which has round edges
    bool isUserdefined = myDrawer->HasOwnPointAspect() && myDrawer->PointAspect()->Aspect()->Type() == Aspect_TOM_USERDEFINED;
    if (isUserdefined)
    {
        aOpenGlGroup->AddElement(new SetMultisamplingElement(false));
    }

    if (theMode==0 && !myBackgroundDrawer.IsNull())
    {
        StdPrs_Point::Add(thePresentation, Component(), myBackgroundDrawer);
    }
    AIS_Point::Compute(thePresentationMgr, thePresentation, theMode);

    if (isUserdefined)
    {
        aOpenGlGroup->AddElement(new SetMultisamplingElement(true));
    }
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
