#include "ManagedPCH.h"

#include "AISX_Axis.h"
#include "AISX_PrsTool.h"

IMPLEMENT_STANDARD_RTTIEXT(AISX_Axis, AIS_InteractiveObject)

//--------------------------------------------------------------------------------------------------

AISX_Axis::AISX_Axis()
    : _Length(10)
    , _Thickness(1)
{
    myOwnWidth = 3.0f;
    _InitDrawerAttributes();
    SetAutoHilight(Standard_False);
}

//--------------------------------------------------------------------------------------------------

void AISX_Axis::SetAxis(const gp_Ax1& theAxis)
{
    _Axis = theAxis;
    SetToUpdate();
    UpdateSelection();
}

//--------------------------------------------------------------------------------------------------

void AISX_Axis::SetColor(const Quantity_Color& theColor)
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

void AISX_Axis::SetWidth(double theWidth)
{
    myOwnWidth = (float)theWidth;
    myDrawer->LineAspect()->SetWidth(theWidth);
    SynchronizeAspects();
    UpdateSelection();
    SetToUpdate();
}

//--------------------------------------------------------------------------------------------------

void AISX_Axis::SetSize(double length, double thickness)
{
    _Length = length;
    _Thickness = thickness;
    SetToUpdate();
    UpdateSelection();
}

//--------------------------------------------------------------------------------------------------

void AISX_Axis::_ComputeArrow(const Handle(Graphic3d_Group)& theGroup)
{
    Handle(Graphic3d_ArrayOfTriangles) aTriArray = 
        Prs3d_Arrow::DrawShaded(_Axis, _Thickness*0.5, _Length, _Thickness*2.0, _Thickness*6.0, 20);
    theGroup->AddPrimitiveArray(aTriArray);
}

//--------------------------------------------------------------------------------------------------

void AISX_Axis::_ComputeLine(const Handle(Graphic3d_Group)& theGroup)
{
    theGroup->SetPrimitivesAspect(myDrawer->LineAspect()->Aspect());

    gp_Pnt p1 = _Axis.Location();
    gp_Pnt p2 = _Axis.Location().Translated(gp_Vec(_Axis.Direction()).Multiplied(_Length));

    Handle(Graphic3d_ArrayOfSegments) aPrims = new Graphic3d_ArrayOfSegments(2);
    aPrims->AddVertex(p1);
    aPrims->AddVertex(p2);
    theGroup->AddPrimitiveArray(aPrims);
}

//--------------------------------------------------------------------------------------------------

void AISX_Axis::_ComputeKnob(const Handle(Graphic3d_Group)& theGroup)
{
    gp_Pnt p2 = _Axis.Location().Translated(gp_Vec(_Axis.Direction()).Multiplied(_Length));
    gp_Dir dir = _Length < 0 ? _Axis.Direction().Reversed() : _Axis.Direction();
	Handle(Graphic3d_ArrayOfTriangles) aTriArray = AISX_PrsTool::CreateCylinder(gp_Ax1(p2, dir), _Thickness, _Thickness*1.5, 10);
    theGroup->AddPrimitiveArray(aTriArray);
}
    
//--------------------------------------------------------------------------------------------------

void AISX_Axis::Compute(const Handle(PrsMgr_PresentationManager)& thePrsMgr,
                         const Handle(Prs3d_Presentation)& thePrs, const Standard_Integer theMode)
{
    thePrs->Clear();

    Handle(Graphic3d_Group) aGroup = thePrs->CurrentGroup();
    aGroup->SetPrimitivesAspect(myDrawer->ShadingAspect()->Aspect());

    switch(theMode)
    {
    case 0: // Headless
        _ComputeLine(aGroup);
        break;
    case 1: // Arrow
        _ComputeArrow(aGroup);
        break;
    case 2: // Knob
        _ComputeLine(aGroup);
        _ComputeKnob(aGroup);
        break;
    }
}

//--------------------------------------------------------------------------------------------------

void AISX_Axis::HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const Handle(Prs3d_Drawer)& theStyle, 
                                       const Handle(SelectMgr_EntityOwner)& theOwner)
{
    myDynHilightDrawer->SetColor(GetContext()->HighlightStyle()->Color());
    thePrsMgr->Color(this, myDynHilightDrawer, myDrawer->DisplayMode(), nullptr, myDrawer->ZLayer());
}

//--------------------------------------------------------------------------------------------------

void AISX_Axis::HilightSelected(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const SelectMgr_SequenceOfOwner& theSeq)
{
    thePrsMgr->Color(this, myHilightDrawer, myDrawer->DisplayMode());
}

//--------------------------------------------------------------------------------------------------

void AISX_Axis::ComputeSelection(const Handle(SelectMgr_Selection)& theSelection, const Standard_Integer theMode)
{
    theSelection->Clear();

    Handle(SelectMgr_EntityOwner) sensitiveOwner = new SelectMgr_EntityOwner(this, 10);

    if(myDrawer->DisplayMode()==1) // Arrow
    {
        gp_Trsf trsf;
        trsf.SetTransformation(gp_Ax3(), gp_Ax3(_Axis.Location(), _Axis.Direction()));
        Handle(Select3D_SensitiveCylinder) sensitive = new Select3D_SensitiveCylinder(sensitiveOwner, _Thickness, _Thickness, _Length, trsf);
        theSelection->Add(sensitive);
    }
    else
    {
        gp_Pnt endPoint = _Axis.Location().Translated(gp_Vec(_Axis.Direction()).Multiplied(_Length));
        Handle(Select3D_SensitiveSegment) sensitive = new Select3D_SensitiveSegment(sensitiveOwner, _Axis.Location(), endPoint);
        sensitive->SetSensitivityFactor(10);
        theSelection->Add(sensitive);
    }
}

//--------------------------------------------------------------------------------------------------

void AISX_Axis::_InitDrawerAttributes()
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
