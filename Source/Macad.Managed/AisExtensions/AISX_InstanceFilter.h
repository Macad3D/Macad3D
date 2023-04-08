#pragma once

class AISX_InstanceFilter : public SelectMgr_Filter
{
public:

    void Add(Handle(AIS_InteractiveObject) hInstance);
    virtual Standard_Boolean IsOk (const Handle(SelectMgr_EntityOwner)& anObj) const override;

    //--------------------------------------------------------------------------------------------------

    DEFINE_STANDARD_RTTIEXT(AISX_InstanceFilter,SelectMgr_Filter)

private:
    AIS_ListOfInteractive m_kInstanceList;
};

