#pragma once

class AIS_PointEx : public AIS_Point
{
	DEFINE_STANDARD_RTTIEXT(AIS_PointEx, AIS_Point)

public:
	AIS_PointEx(const Handle(Geom_Point)& aComponent);

    void EnableBackground(double theTransparency);
	void SetBackgroundColor(const Quantity_Color& theColor);
    void Compute(const opencascade::handle<PrsMgr_PresentationManager>&,
                 const opencascade::handle<Prs3d_Presentation>& aPresentation, Standard_Integer aMode) override;

private:
    Handle(Prs3d_Drawer) myBackgroundDrawer;
};

DEFINE_STANDARD_HANDLE(AIS_PointEx, AIS_Point)