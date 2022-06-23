#include "ManagedPCH.h"

#include "AISX_Axis.h"

#using "Macad.Occt.dll" as_friend

namespace Macad
{
	namespace Occt
	{
		namespace Extensions
		{
			public ref class AISX_Axis sealed : public AIS_InteractiveObject
			{
			public:
				IMPLEMENT_TRANSIENT(AISX_Axis, AIS_InteractiveObject)

			    AISX_Axis()
					: AIS_InteractiveObject(InitMode::Uninitialized)
				{
					NativeInstance = new ::AISX_Axis();
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
