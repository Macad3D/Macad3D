#include "ManagedPCH.h"

#include "AISX_Arrow.h"

IMPLEMENT_STANDARD_RTTIEXT(AISX_Arrow, AIS_InteractiveObject)

//--------------------------------------------------------------------------------------------------

AISX_Arrow::AISX_Arrow()
    : _Length(10)
    , _Thickness(1)
{
    myOwnWidth = 3.0f;
    _InitDrawerAttributes();
    SetAutoHilight(Standard_False);
}

//--------------------------------------------------------------------------------------------------

void AISX_Arrow::SetAxis(const gp_Ax1& theAxis)
{
    _Axis = theAxis;
    SetToUpdate();
    UpdatePresentations(true);
    UpdateSelection();
}

//--------------------------------------------------------------------------------------------------

void AISX_Arrow::SetColor(const Quantity_Color& theColor)
{
    __super::SetColor(theColor);

    myDrawer->SetColor(theColor);
    myDrawer->LineAspect()->SetColor(theColor);
    myDrawer->ShadingAspect()->SetColor(theColor);
    myDrawer->ShadingAspect()->Aspect()->SetEdgeColor(theColor);

    Graphic3d_Vec3 hlsColor = Quantity_Color::Convert_LinearRGB_To_HLS(Graphic3d_Vec3((float)theColor.Red(), (float)theColor.Green(), (float)theColor.Blue()));
    hlsColor.y() = __min(hlsColor.y() + 0.2f, 1.0f);
    myHilightDrawer->SetColor(Quantity_Color(hlsColor.x(), hlsColor.y(), hlsColor.z(), Quantity_TOC_HLS));

    SynchronizeAspects();
}

//--------------------------------------------------------------------------------------------------

void AISX_Arrow::SetWidth(double theWidth)
{
    myOwnWidth = (float)theWidth;
    myDrawer->LineAspect()->SetWidth(theWidth);

    SynchronizeAspects();
    UpdatePresentations(true);
    UpdateSelection();
    SetToUpdate();
}

//--------------------------------------------------------------------------------------------------

void AISX_Arrow::SetSize(double length, double thickness)
{
    _Length = length;
    _Thickness = thickness;
    SetToUpdate();
    UpdatePresentations();
    UpdateSelection();
}

//--------------------------------------------------------------------------------------------------

void AISX_Arrow::_ComputeArrow(const Handle(Graphic3d_Group)& theGroup)
{
    Handle(Graphic3d_ArrayOfTriangles) aTriArray = 
        Prs3d_Arrow::DrawShaded(_Axis, _Thickness, _Length, _Thickness*2.0, _Thickness*4, 20);
    theGroup->AddPrimitiveArray(aTriArray);
}

//--------------------------------------------------------------------------------------------------

void AISX_Arrow::_ComputeCylinder(const Handle(Graphic3d_Group)& theGroup)
{
    gp_Trsf trsf;
    trsf.SetTransformation(gp_Ax3(), gp_Ax3(_Axis.Location(), _Axis.Direction()));
    Handle(Graphic3d_ArrayOfTriangles) aTriArray = new Graphic3d_ArrayOfTriangles(Prs3d_ToolCylinder::VerticesNb(20, 2), 
                                                                                  Prs3d_ToolCylinder::TrianglesNb(20, 2) * 3, 
                                                                                  Graphic3d_ArrayFlags_None);
    aTriArray = Prs3d_ToolCylinder::Create(_Thickness, _Thickness, _Length, 20, 2, trsf);
    theGroup->AddPrimitiveArray(aTriArray);
}

//--------------------------------------------------------------------------------------------------

void AISX_Arrow::_ComputeLine(const Handle(Prs3d_Presentation)& thePrs, const Handle(Prs3d_Drawer)& theDrawer)
{
    Handle(Geom_Line) curv = new Geom_Line(_Axis.Location(), _Axis.Direction());
    StdPrs_Curve::Add(thePrs, GeomAdaptor_Curve(curv, 0.0, _Length), theDrawer);
}
    
//--------------------------------------------------------------------------------------------------

void AISX_Arrow::Compute(const Handle(PrsMgr_PresentationManager)& thePrsMgr,
                         const Handle(Prs3d_Presentation)& thePrs, const Standard_Integer theMode)
{
    thePrs->Clear();

    Handle(Graphic3d_Group) aGroup = thePrs->CurrentGroup();
    aGroup->SetPrimitivesAspect(myDrawer->ShadingAspect()->Aspect());

    if(theMode == 1)
        _ComputeLine(thePrs, myDrawer);
    else
        _ComputeArrow(aGroup);
}

//--------------------------------------------------------------------------------------------------

void AISX_Arrow::HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const Handle(Prs3d_Drawer)& theStyle, 
                                       const Handle(SelectMgr_EntityOwner)& theOwner)
{
    myDynHilightDrawer->SetColor(GetContext()->HighlightStyle()->Color());
    thePrsMgr->Color(this, myDynHilightDrawer, myDrawer->DisplayMode(), nullptr, myDrawer->ZLayer());
}

//--------------------------------------------------------------------------------------------------

void AISX_Arrow::HilightSelected(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const SelectMgr_SequenceOfOwner& theSeq)
{
    thePrsMgr->Color(this, myHilightDrawer, myDrawer->DisplayMode());
}

//--------------------------------------------------------------------------------------------------

void AISX_Arrow::ComputeSelection(const Handle(SelectMgr_Selection)& theSelection, const Standard_Integer theMode)
{
    theSelection->Clear();

    Handle(SelectMgr_EntityOwner) sensitiveOwner = new SelectMgr_EntityOwner(this, 10);

    if(myDrawer->DisplayMode()==1)
    {
        gp_Pnt endPoint = _Axis.Location().Translated(gp_Vec(_Axis.Direction()).Multiplied(_Length));
        Handle(Select3D_SensitiveSegment) sensitive = new Select3D_SensitiveSegment(sensitiveOwner, _Axis.Location(), endPoint);
        sensitive->SetSensitivityFactor(10);
        theSelection->Add(sensitive);
    }
    else
    {
        gp_Trsf trsf;
        trsf.SetTransformation(gp_Ax3(), gp_Ax3(_Axis.Location(), _Axis.Direction()));
        Handle(Select3D_SensitiveCylinder) sensitive = new Select3D_SensitiveCylinder(sensitiveOwner, _Thickness, _Thickness, _Length, trsf);
        theSelection->Add(sensitive);
    }
}

//--------------------------------------------------------------------------------------------------

void AISX_Arrow::_InitDrawerAttributes()
{
	Handle(Prs3d_LineAspect) lasp = new Prs3d_LineAspect(Quantity_NOC_GRAY40, Aspect_TypeOfLine::Aspect_TOL_SOLID, myOwnWidth);
    myDrawer->SetLineAspect(lasp);

    Handle(Prs3d_ShadingAspect) shasp = new Prs3d_ShadingAspect();
    shasp->SetMaterial(Graphic3d_NameOfMaterial_DEFAULT);
    shasp->SetTransparency(0.0f);
    myDrawer->SetShadingAspect(shasp);

    myDynHilightDrawer = new Prs3d_Drawer();
    myDynHilightDrawer->Link(myDrawer);

    myHilightDrawer = new Prs3d_Drawer();
    myHilightDrawer->Link(myDrawer);

    SetColor(Quantity_NOC_GRAY40);
}

//--------------------------------------------------------------------------------------------------
