#include "ManagedPCH.h"

#include "AISX_Plane.h"

namespace Macad
{
	namespace Occt
	{
		namespace Extensions
		{
			public ref class AISX_Plane sealed : public AIS_InteractiveObject
			{
			public:
				IMPLEMENT_TRANSIENT(AISX_Plane, AIS_InteractiveObject);

			    AISX_Plane()
					: AIS_InteractiveObject(InitMode::Uninitialized)
				{
					NativeInstance = new ::AISX_Plane();
				}

			public:
				void SetPlane(Geom_Plane^ plane)
				{
				    NativeInstance->SetPlane(plane->NativeInstance);
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
