#include "ManagedPCH.h"

#include "AISX_Guid.h"

IMPLEMENT_STANDARD_RTTIEXT(AISX_Guid, Standard_Transient)

//--------------------------------------------------------------------------------------------------

AISX_Guid::AISX_Guid(_GUID guid)
    : _Guid(guid)
{
}

//--------------------------------------------------------------------------------------------------

_GUID AISX_Guid::GetGuid() const
{
	return _Guid;
}
