
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
				static Macad::Occt::Graphic3d_GraphicDriver^ CreateOpenGlDriver()
				{
					Handle(::Aspect_DisplayConnection) aDisplayConnection;
					::OpenGl_GraphicDriver* Driver = new ::OpenGl_GraphicDriver(aDisplayConnection);
					// contextCompatible is needed to support line thickness
					Driver->ChangeOptions().contextCompatible = true;
					Driver->ChangeOptions().ffpEnable = false;
					return gcnew Macad::Occt::Graphic3d_GraphicDriver(Driver);
				}
			};
		}
	}
}