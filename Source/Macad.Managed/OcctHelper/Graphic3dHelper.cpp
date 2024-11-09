
#include "ManagedPCH.h"

#using "Macad.Occt.dll" as_friend

namespace Macad
{
	namespace Occt
	{
		namespace Helper
		{
			public ref class Graphic3d
			{
			public:
				static Macad::Occt::Graphic3d_GraphicDriver^ CreateOpenGlDriver(bool bEnableDebug)
				{
					Handle(::Aspect_DisplayConnection) aDisplayConnection;
					::OpenGl_GraphicDriver* Driver = new ::OpenGl_GraphicDriver(aDisplayConnection);
					// contextCompatible is needed to support line thickness
					Driver->ChangeOptions().contextCompatible = !bEnableDebug;
					Driver->ChangeOptions().ffpEnable = false;
					Driver->ChangeOptions().contextDebug = bEnableDebug;
					Driver->ChangeOptions().contextSyncDebug = bEnableDebug;
					return gcnew Macad::Occt::Graphic3d_GraphicDriver(Driver);
				}
			};
		}
	}
}