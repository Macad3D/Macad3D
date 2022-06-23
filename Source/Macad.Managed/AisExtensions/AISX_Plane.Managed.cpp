#include "ManagedPCH.h"

#include "AISX_Plane.h"

#using "Macad.Occt.dll" as_friend

namespace Macad
{
	namespace Occt
	{
		namespace Extensions
		{
			public ref class AISX_Plane sealed : public AIS_InteractiveObject
			{
			public:
				IMPLEMENT_TRANSIENT(AISX_Plane, AIS_InteractiveObject)

			    AISX_Plane()
					: AIS_InteractiveObject(InitMode::Uninitialized)
				{
					NativeInstance = new ::AISX_Plane();
				}

			public:
				void SetColor(Quantity_Color^ theColor, bool theIncludeHilight)
				{
				    NativeInstance->SetColor(*theColor->NativeInstance, theIncludeHilight);
				}

				void SetPlane(Pln plane)
				{
					STRUCT_PIN(plane, Pln, gp_Pln);
				    NativeInstance->SetPlane(*plane_ptr);
				}

                void SetSize(double sizeX, double sizeY)
                {
                    NativeInstance->SetSize(sizeX, sizeY);
                }

				void SetTexture(Image_PixMap^ thePixMap)
				{
					NativeInstance->SetTexture(thePixMap->NativeInstance);
				}
			};
		};
	}
}
