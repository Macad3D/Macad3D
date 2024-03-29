
#include "ManagedPCH.h"
#include "OpenGl_GraphicDriver.hxx"

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
					Driver->ChangeOptions().ffpEnable = false;
					Driver->ChangeOptions().contextDebug = false;
					return gcnew Macad::Occt::Graphic3d_GraphicDriver(Driver);
				}
			};
		}
	}
}