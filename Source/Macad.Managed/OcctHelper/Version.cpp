#include "ManagedPCH.h"
#include <Standard_Version.hxx>

using namespace System::Runtime::InteropServices;

namespace Macad
{
	namespace Occt
	{
		namespace Helper
		{
			public ref class Version sealed
			{
			public:
				static property int Major
				{
					int get()
					{
						return OCC_VERSION_MAJOR;
					}
				}

				static property int Minor
				{
					int get()
					{
						return OCC_VERSION_MINOR;
					}
				}

				static property int Maintenance
				{
					int get()
					{
						return OCC_VERSION_MAINTENANCE;
					}
				}

				static property String^ Development
				{
					String^ get()
					{
						#ifdef OCC_VERSION_DEVELOPMENT
							return gcnew String( OCC_VERSION_DEVELOPMENT );
						#else
							return gcnew String("");
						#endif;
					}
				}
			};
		}
	}
}