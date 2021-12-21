#include "ManagedPCH.h"

#include "AIS_ViewCubeEx.h"

#using "Macad.Occt.dll" as_friend

namespace Macad
{
	namespace Occt
	{
		namespace Ext
		{
			public ref class AIS_ViewCubeEx sealed : public Macad::Occt::AIS_ViewCube
			{
			public:
				IMPLEMENT_TRANSIENT(AIS_ViewCubeEx, AIS_ViewCube);

			    AIS_ViewCubeEx()
					: Macad::Occt::AIS_ViewCube(InitMode::Uninitialized)
				{
					NativeInstance = new ::AIS_ViewCubeEx();
				}

			public:
				void SetTexture(Image_PixMap^ thePixMap)
				{
					NativeInstance->SetTexture(thePixMap->NativeInstance);
				}

			};
		};
	}
}
