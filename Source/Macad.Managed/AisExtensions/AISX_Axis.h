#pragma once

class AISX_Axis : public AIS_InteractiveObject
{
public:
    AISX_Axis();

    //--------------------------------------------------------------------------------------------------

    void SetAxis(const gp_Ax1& theAxis);
    void SetColor(const Quantity_Color& theColor) override;
    void SetWidth(double theWidth) override;
    void SetSize(double length, double thickness);

    void Compute(const Handle(PrsMgr_PresentationManager)& thePrsMgr,
                 const Handle(Prs3d_Presentation)& thePrs, const Standard_Integer theMode) override;
    void HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const Handle(Prs3d_Drawer)& theStyle, 
                               const Handle(SelectMgr_EntityOwner)& theOwner) override;
    void HilightSelected(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const SelectMgr_SequenceOfOwner& theSeq) override;
    void ComputeSelection(const Handle(SelectMgr_Selection)& theSelection, const Standard_Integer theMode) override;

    //--------------------------------------------------------------------------------------------------

    Standard_Boolean AcceptDisplayMode(const Standard_Integer theMode) const override
    {
        return theMode >= 0 && theMode <= 2;
    }

    Standard_Integer Signature() const override
    {
        return 2; /* Axis */
    }

	AIS_KindOfInteractive Type() const override
    {
        return AIS_KOI_Datum;
    }

    //--------------------------------------------------------------------------------------------------

    DEFINE_STANDARD_RTTIEXT(AISX_Axis, AIS_InteractiveObject)

    //--------------------------------------------------------------------------------------------------

private:
    void _ComputeArrow(const Handle(Graphic3d_Group)& theGroup);
    void _ComputeLine(const Handle(Graphic3d_Group)& theGroup);
    void _ComputeKnob(const Handle(Graphic3d_Group)& theGroup);
    void _InitDrawerAttributes();

    gp_Ax1 _Axis;
    double _Length, _Thickness;
};

