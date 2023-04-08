#include "ManagedPCH.h"

#include "AISX_InstanceFilter.h"


IMPLEMENT_STANDARD_RTTIEXT(AISX_InstanceFilter, SelectMgr_Filter)

//--------------------------------------------------------------------------------------------------

void AISX_InstanceFilter::Add(Handle(AIS_InteractiveObject) hInstance)
{
    m_kInstanceList.Append(hInstance);
}

//--------------------------------------------------------------------------------------------------

Standard_Boolean AISX_InstanceFilter::IsOk (const Handle(SelectMgr_EntityOwner)& anObj) const
{
    Handle(AIS_InteractiveObject) anInstance = Handle(AIS_InteractiveObject)::DownCast(anObj->Selectable());
    if(anInstance.IsNull())
        return false;

    return m_kInstanceList.Contains(anInstance);
}

//--------------------------------------------------------------------------------------------------
