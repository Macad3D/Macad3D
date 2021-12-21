#include "ManagedPCH.h"

#include "AISX_Guid.h"

#using "Macad.Occt.dll" as_friend
using namespace System;

namespace Macad
{
	namespace Occt
	{
		namespace Extensions
		{
			public ref class AISX_Guid sealed : public Standard_Transient
			{
			public:
				IMPLEMENT_TRANSIENT(AISX_Guid, Standard_Transient)

                //--------------------------------------------------------------------------------------------------

			    AISX_Guid(Guid guid)
					: Standard_Transient(InitMode::Uninitialized)
				{
					array<Byte>^ guidBytes = guid.ToByteArray();
                    pin_ptr<Byte> ptr = &guidBytes[0];
					NativeInstance = new ::AISX_Guid(*(_GUID*)ptr);
				}

                //--------------------------------------------------------------------------------------------------

				Guid GetGuid()
			    {
					return _ToGuid(NativeInstance->GetGuid());
			    }

                //--------------------------------------------------------------------------------------------------

				static bool TryGetGuid(Standard_Transient^ obj, [System::Runtime::InteropServices::Out] Guid% guid)
			    {
					if(obj == nullptr || obj->NativeInstance == nullptr)
					{
					    return false;
					}

			        if(obj->NativeInstance->IsKind(STANDARD_TYPE(::AISX_Guid)))
			        {
			            guid = _ToGuid(((::AISX_Guid*)obj->NativeInstance)->GetGuid());
						return true;
			        }
					guid = Guid::Empty;
					return false;
			    }

                //--------------------------------------------------------------------------------------------------

			private:

                static Guid _ToGuid(_GUID guid)
			    {
			        return Guid(guid.Data1, guid.Data2, guid.Data3, 
                                guid.Data4[0], guid.Data4[1], 
                                guid.Data4[2], guid.Data4[3], 
                                guid.Data4[4], guid.Data4[5], 
                                guid.Data4[6], guid.Data4[7] );
			    }
			};
		};
	}
}
