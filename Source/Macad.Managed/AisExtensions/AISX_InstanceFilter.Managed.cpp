#include "ManagedPCH.h"

#include "AISX_InstanceFilter.h"

#using "Macad.Occt.dll" as_friend
using namespace System;

namespace Macad
{
	namespace Occt
	{
		namespace Extensions
		{
			public ref class AISX_InstanceFilter sealed : public SelectMgr_Filter
			{
			public:
				IMPLEMENT_TRANSIENT(AISX_InstanceFilter, SelectMgr_Filter)

                //--------------------------------------------------------------------------------------------------

			    AISX_InstanceFilter()
			        : SelectMgr_Filter(new ::AISX_InstanceFilter())
				{
				}

                //--------------------------------------------------------------------------------------------------

				void Add(AIS_InteractiveObject^ hInstance)
				{
				    NativeInstance->Add(hInstance->NativeInstance);
				}

                //--------------------------------------------------------------------------------------------------
			};
		};
	}
}
