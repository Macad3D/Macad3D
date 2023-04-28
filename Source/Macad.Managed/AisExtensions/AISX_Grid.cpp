#include "ManagedPCH.h"

#include "AISX_Grid.h"

IMPLEMENT_STANDARD_RTTIEXT(AISX_Grid, AIS_InteractiveObject)

//--------------------------------------------------------------------------------------------------

AISX_Grid::AISX_Grid()
    : _Position(gp::XOY())
    , _Extents(100.0, 100.0)
    , _LinearStep(10.0)
    , _AngularCount(8)
{
    _InitAttributes();
}

//--------------------------------------------------------------------------------------------------

void AISX_Grid::SetExtents(double x, double y)
{
    _Extents = gp_XY(x, y);
    SetToUpdate();
}

//--------------------------------------------------------------------------------------------------

void AISX_Grid::SetPosition(const gp_Ax3& position)
{
    _Position = position;
    SetToUpdate();
}

//--------------------------------------------------------------------------------------------------

void AISX_Grid::SetDivisions(double linearStep, int angularCount)
{
    _LinearStep = linearStep;
    _AngularCount = angularCount;
    SetToUpdate();
}

//--------------------------------------------------------------------------------------------------

void AISX_Grid::Compute(const Handle(PrsMgr_PresentationManager)& thePrsMgr,
    const Handle(Prs3d_Presentation)& thePrs, const Standard_Integer theMode)
{
    thePrs->Clear();
    if (theMode == 0)
    {
        return;
    }

    Handle(Graphic3d_Group) aGroup = thePrs->CurrentGroup();
    thePrs->SetMutable(true);
    thePrs->SetInfiniteState(true);

    switch (theMode)
    {
    case 1: // Rect
        _ComputeAxes(aGroup);
        _ComputeRectangular(aGroup);
        break;
    case 2: // Circ
        _ComputeAxes(aGroup);
        _ComputeCircular(aGroup);
        break;
    }
}

//--------------------------------------------------------------------------------------------------

void AISX_Grid::_ComputeAxes(const Handle(Graphic3d_Group)& theGroup)
{
    gp_Pnt p1 = _Position.Location().Translated(gp_Vec(_Position.XDirection()).Multiplied(_Extents.X()));
    gp_Pnt p2 = _Position.Location().Translated(gp_Vec(_Position.XDirection()).Multiplied(-_Extents.X()));
    Handle(Graphic3d_ArrayOfSegments) aSegArray = new Graphic3d_ArrayOfSegments(2);
    aSegArray->AddVertex(p1);
    aSegArray->AddVertex(p2);
    theGroup->SetPrimitivesAspect(_XAxisAspect);
    theGroup->AddPrimitiveArray(aSegArray);

    p1 = _Position.Location().Translated(gp_Vec(_Position.YDirection()).Multiplied(_Extents.Y()));
    p2 = _Position.Location().Translated(gp_Vec(_Position.YDirection()).Multiplied(-_Extents.Y()));
    aSegArray = new Graphic3d_ArrayOfSegments(2);
    aSegArray->AddVertex(p1);
    aSegArray->AddVertex(p2);
    theGroup->SetPrimitivesAspect(_YAxisAspect);
    theGroup->AddPrimitiveArray(aSegArray);
}

//--------------------------------------------------------------------------------------------------

void AISX_Grid::_ComputeRectangular(const Handle(Graphic3d_Group)& theGroup)
{
    int lineCountX = (int)(_Extents.X() / _LinearStep);
    int lineCountY = (int)(_Extents.Y() / _LinearStep);
    gp_Vec xStep = gp_Vec(_Position.XDirection()).Multiplied(_LinearStep);
    gp_Vec yStep = gp_Vec(_Position.YDirection()).Multiplied(_LinearStep);
    int majorSegCount = (lineCountX / 10 + lineCountY / 10) * 2;
    int minorSegCount = (lineCountX + lineCountY) * 2 - majorSegCount;
    Handle(Graphic3d_ArrayOfSegments) aSegArrayMajor = new Graphic3d_ArrayOfSegments(majorSegCount * 2);
    Handle(Graphic3d_ArrayOfSegments) aSegArrayMinor = new Graphic3d_ArrayOfSegments(minorSegCount * 2);

    gp_Pnt p1 = _Position.Location().Translated(yStep * -lineCountY);
    gp_Pnt p2 = _Position.Location().Translated(yStep * lineCountY);
    for (int i = -lineCountX; i <= lineCountX; i++)
    {
        if (i == 0)
            continue; // Axis line

        gp_Pnt p1t = p1.Translated(xStep * i);
        gp_Pnt p2t = p2.Translated(xStep * i);

        if (i % 10 == 0)
        {
            aSegArrayMajor->AddVertex(p1t);
            aSegArrayMajor->AddVertex(p2t);
        }
        else
        {
            aSegArrayMinor->AddVertex(p1t);
            aSegArrayMinor->AddVertex(p2t);
        }
    }

    p1 = _Position.Location().Translated(xStep * -lineCountX);
    p2 = _Position.Location().Translated(xStep * lineCountX);
    for (int i = -lineCountY; i <= lineCountY; i++)
    {
        if (i == 0)
            continue; // Axis line

        gp_Pnt p1t = p1.Translated(yStep * i);
        gp_Pnt p2t = p2.Translated(yStep * i);

        if (i % 10 == 0)
        {
            aSegArrayMajor->AddVertex(p1t);
            aSegArrayMajor->AddVertex(p2t);
        }
        else
        {
            aSegArrayMinor->AddVertex(p1t);
            aSegArrayMinor->AddVertex(p2t);
        }
    }

    theGroup->SetPrimitivesAspect(_MajorAspect);
    theGroup->AddPrimitiveArray(aSegArrayMajor);
    theGroup->SetPrimitivesAspect(_MinorAspect);
    theGroup->AddPrimitiveArray(aSegArrayMinor);
}

//--------------------------------------------------------------------------------------------------

void AISX_Grid::_ComputeCircular(const Handle(Graphic3d_Group)& theGroup)
{
    double extents = _Extents.Modulus();
    int circCount = (int)(extents / _LinearStep);
    int divCount = _AngularCount * 2;
    while(divCount < 16)
        divCount *= 2;

    int axisPosY = _AngularCount % 2 == 0 ? _AngularCount / 2 : 0;
    int skippedLines = 1 + (axisPosY > 0);
    int lineSegCount = _AngularCount - skippedLines;
    int majorSegCount = circCount / 10 * divCount;
    int minorSegCount = lineSegCount + divCount * circCount - majorSegCount;
    Handle(Graphic3d_ArrayOfSegments) aSegArrayMajor = new Graphic3d_ArrayOfSegments(majorSegCount * 2);
    Handle(Graphic3d_ArrayOfSegments) aSegArrayMinor = new Graphic3d_ArrayOfSegments(minorSegCount * 2);

    // Circs
    double angStep = 2 * M_PI / divCount;
    for (int i = 0; i < divCount; i++)
    {
        gp_Vec vec = gp_Vec(_Position.XDirection().Rotated(_Position.Axis(), angStep * i));
        gp_Vec vecNext = gp_Vec(_Position.XDirection().Rotated(_Position.Axis(), angStep * (i + 1)));

        for (int j = 1; j <= circCount; j++)
        {
            gp_Pnt p1 = _Position.Location().Translated(vec.Multiplied(j * _LinearStep));
            gp_Pnt p2 = _Position.Location().Translated(vecNext.Multiplied(j * _LinearStep));
            if (j % 10 == 0)
            {
                aSegArrayMajor->AddVertex(p1);
                aSegArrayMajor->AddVertex(p2);
            }
            else
            {
                aSegArrayMinor->AddVertex(p1);
                aSegArrayMinor->AddVertex(p2);
            }
        }
    }

    // Lines
    angStep = M_PI / _AngularCount;
    for (int i = 0; i < _AngularCount; i++)
    {
        gp_Vec vec = gp_Vec(_Position.XDirection().Rotated(_Position.Axis(), angStep * i));
        if (i == 0 || i == axisPosY )
            continue; // Axis line
        aSegArrayMinor->AddVertex(_Position.Location().Translated(vec.Multiplied(-extents)));
        aSegArrayMinor->AddVertex(_Position.Location().Translated(vec.Multiplied(extents)));
    }

    theGroup->SetPrimitivesAspect(_MajorAspect);
    theGroup->AddPrimitiveArray(aSegArrayMajor);
    theGroup->SetPrimitivesAspect(_MinorAspect);
    theGroup->AddPrimitiveArray(aSegArrayMinor);
}

//--------------------------------------------------------------------------------------------------

void AISX_Grid::ComputeSelection(const Handle(SelectMgr_Selection)& theSelection, const Standard_Integer theMode)
{
    // Grid is not selectable
}

//--------------------------------------------------------------------------------------------------

void AISX_Grid::_InitAttributes()
{
    _MinorAspect = new Graphic3d_AspectLine3d(Quantity_NameOfColor::Quantity_NOC_GRAY45, Aspect_TOL_SOLID, 1.0);
    _MajorAspect = new Graphic3d_AspectLine3d(Quantity_NameOfColor::Quantity_NOC_GRAY30, Aspect_TOL_SOLID, 1.0);
    _XAxisAspect = new Graphic3d_AspectLine3d(Quantity_Color(0.5, 0.0, 0.0, Quantity_TypeOfColor::Quantity_TOC_RGB), Aspect_TOL_SOLID, 1.0);
    _YAxisAspect = new Graphic3d_AspectLine3d(Quantity_Color(0.0, 0.6, 0.0, Quantity_TypeOfColor::Quantity_TOC_RGB), Aspect_TOL_SOLID, 1.0);

    // Disable clipping planes
    Handle(Graphic3d_SequenceOfHClipPlane) aPlanes = new Graphic3d_SequenceOfHClipPlane();
    aPlanes->SetOverrideGlobal(true);
    SetClipPlanes(aPlanes);
}

//--------------------------------------------------------------------------------------------------
