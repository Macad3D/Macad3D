#include "ManagedPCH.h"

#include "AISX_Circle.h"

IMPLEMENT_STANDARD_RTTIEXT(AISX_Circle, AIS_InteractiveObject)

//--------------------------------------------------------------------------------------------------

AISX_Circle::AISX_Circle()
    : _Circle(gp::XOY(), 10)
    , _LimitStartParam(0.0)
    , _LimitEndParam(0.0)
    , _SectorStartParam(0.0)
    , _SectorEndParam(0.0)
{
    myOwnWidth = 3.0f;
    _InitDrawerAttributes();
    SetAutoHilight(Standard_False);
}

//--------------------------------------------------------------------------------------------------

void AISX_Circle::SetCircle(const gp_Circ& theCircle)
{
    _Circle = theCircle;
    UpdatePresentations(true);
    UpdateSelection();
    SetToUpdate();
}

//--------------------------------------------------------------------------------------------------

void AISX_Circle::SetLimits(double theStartParam, double theEndParam)
{
    _LimitStartParam = theStartParam;
    _LimitEndParam = theEndParam;

    if(_LimitStartParam > _LimitEndParam)
    {
        std::swap(_LimitStartParam, _LimitEndParam);
    }

    UpdatePresentations(true);
    UpdateSelection();
    SetToUpdate();
}

//--------------------------------------------------------------------------------------------------

void AISX_Circle::SetSector(double theStartParam, double theEndParam)
{
    _SectorStartParam = theStartParam;
    _SectorEndParam = theEndParam;

    if(_SectorStartParam > _SectorEndParam)
    {
        std::swap(_SectorStartParam, _SectorEndParam);
    }

    UpdatePresentations(true);
    SetToUpdate();
}

//--------------------------------------------------------------------------------------------------

void AISX_Circle::SetColor(const Quantity_Color& theColor)
{
    __super::SetColor(theColor);

    myDrawer->SetColor(theColor);
    myDrawer->LineAspect()->SetColor(theColor);
    myDrawer->FaceBoundaryAspect()->SetColor(theColor);
    myDrawer->ShadingAspect()->SetColor(theColor);

    Graphic3d_Vec3 hlsColor = Quantity_Color::Convert_LinearRGB_To_HLS(Graphic3d_Vec3((float)theColor.Red(), (float)theColor.Green(), (float)theColor.Blue()));
    hlsColor.y() = __min(hlsColor.y() + 0.2f, 1.0f);
    myHilightDrawer->SetColor(Quantity_Color(hlsColor.x(), hlsColor.y(), hlsColor.z(), Quantity_TOC_HLS));

    SynchronizeAspects();
    SetToUpdate();
}

//--------------------------------------------------------------------------------------------------

void AISX_Circle::SetWidth(double theWidth)
{
    myOwnWidth = (float)theWidth;
    myDrawer->LineAspect()->SetWidth(theWidth);

    SynchronizeAspects();
    UpdatePresentations(true);
    UpdateSelection();
    SetToUpdate();
}

//--------------------------------------------------------------------------------------------------

void AISX_Circle::_ComputeSector(const Handle(Prs3d_Presentation)& thePrs, const Handle(Prs3d_Drawer)& theDrawer)
{
    if(_SectorStartParam == _SectorEndParam)
        return;

    gp_Trsf aTransform;
    aTransform.SetTransformation(gp_Ax3(_Circle.Position()), gp_Ax3(gp::XOY()));

    int nbFacettes = __max((int)(abs(_SectorEndParam - _SectorStartParam) * 10.0), 3);
    Handle(Graphic3d_ArrayOfTriangles) aTriArray = new Graphic3d_ArrayOfTriangles(Prs3d_ToolDisk::VerticesNb(nbFacettes, 1), 
                                                                                  Prs3d_ToolDisk::TrianglesNb(nbFacettes, 1) * 3, 
                                                                                  Graphic3d_ArrayFlags_None);
    Prs3d_ToolDisk aTool(0.0, _Circle.Radius(), nbFacettes, 1);
    aTool.SetAngleRange(_SectorStartParam, _SectorEndParam);
    aTool.FillArray(aTriArray, aTransform);

    Handle(Graphic3d_Group) aGroup = thePrs->CurrentGroup();
    aGroup->SetPrimitivesAspect(theDrawer->ShadingAspect()->Aspect());
    aGroup->AddPrimitiveArray(aTriArray);

    // Edges
    Handle(Graphic3d_ArrayOfSegments) aSegArray = new Graphic3d_ArrayOfSegments(3, 4);
    aSegArray->AddVertex(_Circle.Location());
    aSegArray->AddVertex(ElCLib::Value(_SectorStartParam, _Circle));
    aSegArray->AddVertex(ElCLib::Value(_SectorEndParam, _Circle));
    aSegArray->AddEdges(1,2);
    aSegArray->AddEdges(1,3);
    aGroup->SetPrimitivesAspect(theDrawer->FaceBoundaryAspect()->Aspect());
    aGroup->AddPrimitiveArray(aSegArray);
}

//--------------------------------------------------------------------------------------------------

void AISX_Circle::_ComputeCircle(const Handle(Prs3d_Presentation)& thePrs, const Handle(Prs3d_Drawer)& theDrawer)
{
    Handle(Geom_Circle) curv = new Geom_Circle(_Circle);
    Standard_Real prevdev = theDrawer->DeviationCoefficient();
    theDrawer->SetDeviationCoefficient(1.e-5);

    if(_LimitStartParam != _LimitEndParam)
    {
        double startParam = _LimitStartParam;
        double endParam = _LimitEndParam;
        if(_SectorStartParam != _SectorEndParam)
        {
            startParam = Min(startParam, _SectorStartParam);
            endParam = Max(endParam, _SectorEndParam);
        }
	    StdPrs_DeflectionCurve::Add(thePrs, GeomAdaptor_Curve(curv, startParam, endParam), theDrawer);
    }
    else
    {
	    StdPrs_DeflectionCurve::Add(thePrs, GeomAdaptor_Curve(curv), theDrawer);
    }

	theDrawer->SetDeviationCoefficient(prevdev);
}

//--------------------------------------------------------------------------------------------------

void AISX_Circle::Compute(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const Handle(Prs3d_Presentation)& thePrs, 
                          const Standard_Integer theMode)
{
    thePrs->Clear();

    if(theMode == 0)
    {
        _ComputeSector(thePrs, myDrawer);
    }
    _ComputeCircle(thePrs, myDrawer);
}

//--------------------------------------------------------------------------------------------------

void AISX_Circle::HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const Handle(Prs3d_Drawer)& theStyle, 
                                       const Handle(SelectMgr_EntityOwner)& theOwner)
{
    myDynHilightDrawer->SetColor(GetContext()->HighlightStyle()->Color());
    thePrsMgr->Color(this, myDynHilightDrawer, 1, nullptr, myDrawer->ZLayer());
}

//--------------------------------------------------------------------------------------------------

void AISX_Circle::HilightSelected(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const SelectMgr_SequenceOfOwner& theSeq)
{
    thePrsMgr->Color(this, myHilightDrawer, 1);
}

//--------------------------------------------------------------------------------------------------

void AISX_Circle::ComputeSelection(const Handle(SelectMgr_Selection)& theSelection, const Standard_Integer theMode)
{
    theSelection->Clear();

    Handle(SelectMgr_EntityOwner) sensitiveOwner = new SelectMgr_EntityOwner(this, 10);
    Handle(Select3D_SensitiveCircle) sensitive;
    if(_LimitStartParam != _LimitEndParam)
        sensitive = new Select3D_SensitiveCircle(sensitiveOwner, _Circle, _LimitStartParam, _LimitEndParam, false);
    else
        sensitive = new Select3D_SensitiveCircle(sensitiveOwner, _Circle, false);
	sensitive->SetSensitivityFactor(10);
	theSelection->Add(sensitive);
}

//--------------------------------------------------------------------------------------------------

void AISX_Circle::_InitDrawerAttributes()
{
	Handle(Prs3d_LineAspect) lasp = new Prs3d_LineAspect(Quantity_NOC_GRAY40, Aspect_TypeOfLine::Aspect_TOL_SOLID, myOwnWidth);
    myDrawer->SetLineAspect(lasp);

    lasp = new Prs3d_LineAspect(Quantity_NOC_GRAY40, Aspect_TypeOfLine::Aspect_TOL_SOLID, 1);
    myDrawer->SetFaceBoundaryAspect(lasp);

    Handle(Prs3d_ShadingAspect) shasp = new Prs3d_ShadingAspect();
    shasp->SetMaterial(Graphic3d_NameOfMaterial_DEFAULT);
    shasp->SetTransparency(0.5f);
    myDrawer->SetShadingAspect(shasp);
    
    myDynHilightDrawer = new Prs3d_Drawer();
    myDynHilightDrawer->Link(myDrawer);

    myHilightDrawer = new Prs3d_Drawer();
    myHilightDrawer->Link(myDrawer);

    SetColor(Quantity_NOC_GRAY40);
}

//--------------------------------------------------------------------------------------------------
