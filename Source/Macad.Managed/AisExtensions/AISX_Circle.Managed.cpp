#include "ManagedPCH.h"

#include "AISX_Circle.h"

#using "Macad.Occt.dll" as_friend

namespace Macad
{
	namespace Occt
	{
		namespace Extensions
		{
			public ref class AISX_Circle sealed : public AIS_InteractiveObject
			{
			public:
				IMPLEMENT_TRANSIENT(AISX_Circle, AIS_InteractiveObject)

			    AISX_Circle()
					: AIS_InteractiveObject(InitMode::Uninitialized)
				{
					NativeInstance = new ::AISX_Circle();
				}

			public:
				void SetCircle(gp_Circ^ circle)
				{
				    NativeInstance->SetCircle(*circle->NativeInstance);
				}

				void SetLimits(double startParam, double endParam)
				{
				    NativeInstance->SetLimits(startParam, endParam);
				}
				
				void SetSector(double startParam, double endParam)
				{
				    NativeInstance->SetSector(startParam, endParam);
				}
			};
		};
	}
}
