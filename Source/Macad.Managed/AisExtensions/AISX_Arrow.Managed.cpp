#include "ManagedPCH.h"

#include "AISX_Arrow.h"

#using "Macad.Occt.dll" as_friend

namespace Macad
{
	namespace Occt
	{
		namespace Extensions
		{
			public ref class AISX_Arrow sealed : public AIS_InteractiveObject
			{
			public:
				IMPLEMENT_TRANSIENT(AISX_Arrow, AIS_InteractiveObject)

			    AISX_Arrow()
					: AIS_InteractiveObject(InitMode::Uninitialized)
				{
					NativeInstance = new ::AISX_Arrow();
				}

			public:
				void SetAxis(Ax1 axis)
				{
					STRUCT_PIN(axis, Ax1, gp_Ax1);
				    NativeInstance->SetAxis(*axis_ptr);
				}

                void SetSize(double length, double thickness)
                {
                    NativeInstance->SetSize(length, thickness);
                }
			};
		};
	}
}
