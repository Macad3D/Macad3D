#pragma once

class AISX_Circle : public AIS_InteractiveObject
{
public:
    AISX_Circle();

    //--------------------------------------------------------------------------------------------------

    void SetCircle(const gp_Circ& theCircle);
    void SetColor(const Quantity_Color& theColor) override;
    void SetWidth(double theWidth) override;
    void SetLimits(double theStartParam, double theEndParam);
    void SetSector(double theStartParam, double theEndParam);
    void SetKnobPosition(double theParam);

    void Compute(const Handle(PrsMgr_PresentationManager)& thePrsMgr,
                 const Handle(Prs3d_Presentation)& thePrs, const Standard_Integer theMode) override;
    void HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const Handle(Prs3d_Drawer)& theStyle, 
                               const Handle(SelectMgr_EntityOwner)& theOwner) override;
    void HilightSelected(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const SelectMgr_SequenceOfOwner& theSeq) override;
    void ComputeSelection(const Handle(SelectMgr_Selection)& theSelection, const Standard_Integer theMode) override;

    //--------------------------------------------------------------------------------------------------

    Standard_Boolean AcceptDisplayMode(const Standard_Integer theMode) const override
    {
        return theMode<=1;
    }

    Standard_Integer Signature() const override
    {
        return 6; /* Circle */
    }

	AIS_KindOfInteractive Type() const override
    {
        return AIS_KOI_Datum;
    }

    //--------------------------------------------------------------------------------------------------

    DEFINE_STANDARD_RTTIEXT(AISX_Circle, AIS_InteractiveObject)

    //--------------------------------------------------------------------------------------------------

private:
    void _ComputeCircle(const Handle(Prs3d_Presentation)& thePrs, const Handle(Prs3d_Drawer)& theDrawer);
    void _ComputeSector(const Handle(Prs3d_Presentation)& thePrs, const Handle(Prs3d_Drawer)& theDrawer);
    void _ComputeKnob(const Handle(Prs3d_Presentation)& thePrs, const Handle(Prs3d_Drawer)& theDrawer);
    void _InitDrawerAttributes();

    gp_Circ _Circle;
    double _LimitStartParam;
    double _LimitEndParam;
    double _SectorStartParam;
    double _SectorEndParam;
    double _KnobPosition;

    Handle(Prs3d_ShadingAspect) _SectorAspect;
};

