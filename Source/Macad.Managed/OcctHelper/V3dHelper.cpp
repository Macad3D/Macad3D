
#include "ManagedPCH.h"

#using "Macad.Occt.dll" as_friend

namespace Macad
{
	namespace Occt
	{
		namespace Helper
		{
			public ref class V3dHelper
			{
			public:

			    static void SetSubviewComposer(Macad::Occt::V3d_View^ view, bool theIsComposer)
				{
					view->NativeInstance->View()->SetSubviewComposer(theIsComposer);
				}

                //--------------------------------------------------------------------------------------------------

				static void SetSubviewMetrics(Macad::Occt::V3d_View^ view, Macad::Occt::Graphic3d_Vec2d^ theSize, Macad::Occt::Graphic3d_Vec2d^ theOffset)
			    {
					const Handle(::Graphic3d_CView)& gview = view->NativeInstance->View();
                    gview->SetSubviewSize(*(::Graphic3d_Vec2d*)theSize->NativeInstance);
					gview->SetSubviewOffset(*(::Graphic3d_Vec2d*)theOffset->NativeInstance);
					gview->Resized();
				}
			};
		}
	}
}