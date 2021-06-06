#pragma once

class AISX_Guid : public Standard_Transient
{
public:
    AISX_Guid(_GUID guid);
    _GUID GetGuid() const;

    DEFINE_STANDARD_RTTIEXT(AISX_Guid, Standard_Transient)

private:
    _GUID _Guid;
};

