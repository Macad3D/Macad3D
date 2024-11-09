#pragma once

class AIS_PointEx : public AIS_Point
{
	DEFINE_STANDARD_RTTIEXT(AIS_PointEx, AIS_Point)

public:
	AIS_PointEx(const Handle(Geom_Point)& aComponent);

    void EnableBackground(double theTransparency);
	void SetBackgroundColor(const Quantity_Color& theColor);
    void Compute(const opencascade::handle<PrsMgr_PresentationManager>&,
                 const opencascade::handle<Prs3d_Presentation>& thePresentation, Standard_Integer theMode) override;

private:
    Handle(Prs3d_Drawer) myBackgroundDrawer;

    //--------------------------------------------------------------------------------------------------

    class SetMultisamplingElement : public OpenGl_Element
    {
    public:
        SetMultisamplingElement(bool bEnableMultisampling);

        void Render(const opencascade::handle<OpenGl_Workspace>& theWorkspace) const override;
        void Release(OpenGl_Context* theContext) override {}

        bool m_bEnableMultisampling = false;
    };

    //--------------------------------------------------------------------------------------------------
};

DEFINE_STANDARD_HANDLE(AIS_PointEx, AIS_Point)