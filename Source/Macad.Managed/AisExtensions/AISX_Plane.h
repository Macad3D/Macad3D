#pragma once

class AISX_Plane : public AIS_InteractiveObject
{
public:
    AISX_Plane();

    //--------------------------------------------------------------------------------------------------

    void SetPlane(const Handle(Geom_Plane)& thePlane);
    void SetColor(const Quantity_Color& theColor) override;
    void SetSize(double sizeX, double sizeY);
    void SetTexture(const Handle(Image_PixMap)& thePixMap);

    void Compute(const Handle(PrsMgr_PresentationManager)& thePrsMgr,
                 const Handle(Prs3d_Presentation)& thePrs, const Standard_Integer theMode) override;
    void ComputeSelection(const Handle(SelectMgr_Selection)& theSelection, const Standard_Integer theMode) override;
    void HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const Handle(Prs3d_Drawer)& theStyle, 
                               const Handle(SelectMgr_EntityOwner)& theOwner) override;
    void HilightSelected(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const SelectMgr_SequenceOfOwner& theSeq) override;

    //--------------------------------------------------------------------------------------------------

    virtual Standard_Boolean IsAutoHilight() const override
    {
        return Standard_False;
    }

    Standard_Boolean AcceptDisplayMode(const Standard_Integer theMode) const override
    {
        return theMode==0;
    }

    Standard_Integer Signature() const override
    {
        return 7; /* Plane */
    }

	AIS_KindOfInteractive Type() const override
    {
        return AIS_KOI_Datum;
    }

    //--------------------------------------------------------------------------------------------------

    DEFINE_STANDARD_RTTIEXT(AISX_Plane, AIS_InteractiveObject)

    //--------------------------------------------------------------------------------------------------

private:
    void _CreateQuad(Handle(Graphic3d_ArrayOfTriangles)& theTris, Handle(Graphic3d_ArrayOfSegments)& theSegs);
    void _InitDrawerAttributes();

    Handle(Geom_Plane) _Plane;
    double _SizeX, _SizeY;

    Handle(Prs3d_Drawer) _HilightDrawer;
};

