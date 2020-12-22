#include "ManagedPCH.h"

#if __has_include( "si.h" )
	#define SDK_AVAILABLE
	#include "si.h"
	#include "siapp.h"
	#pragma comment(lib, "siapp.lib")
#else
	#undef SDK_AVAILABLE
#endif

using namespace System;
using namespace System::Collections::Generic;


namespace Macad
{
	namespace Interop
	{
		public ref class SpaceNavigatorInterop sealed
		{
		public:
			ref class Data abstract
			{};

            //--------------------------------------------------------------------------------------------------

			ref class MotionData sealed : Data
			{
			public:
				double Tx, Ty, Tz, Rx, Ry, Rz;
			};

            //--------------------------------------------------------------------------------------------------

#ifdef SDK_AVAILABLE

		private:

			String^ _LastMessage;
			UINT _WindowMessageCode = 0;
			SiHdl _DeviceHandle = nullptr;

            //--------------------------------------------------------------------------------------------------

		public:
			property String^ LastMessage 
			{ 
				String^ get() 
				{
					return _LastMessage; 
				} 
			}

            //--------------------------------------------------------------------------------------------------

			property UINT WindowMessageCode 
			{ 
				UINT get() 
				{ 
					return _WindowMessageCode; 
				} 
			}

            //--------------------------------------------------------------------------------------------------

			bool Initialize(INT64 windowHandle)
			{
				auto result = SiInitialize();
				if (result != SPW_NO_ERROR)
				{
					
					_LastMessage = String::Format("Driver not initialized: {0}", gcnew String(SpwErrorString(result)));
					return false;
				}

				_WindowMessageCode = RegisterWindowMessageA("SpaceWareMessage00");

				SiOpenData openData;
				SiOpenWinInit(&openData, (HWND)windowHandle);
				_DeviceHandle = SiOpen("Macad", SI_ANY_DEVICE, nullptr, SI_EVENT, &openData);
				if (_DeviceHandle == nullptr)
				{
					_LastMessage = "Device could not be opened.";
					return false;
				}

				SiDeviceName devName;
				SiGetDeviceName(_DeviceHandle, &devName);
				_LastMessage = gcnew String(devName.name);

				return true;
			}

            //--------------------------------------------------------------------------------------------------

			Data^ ProcessMessage(IntPtr wparam, IntPtr lparam)
			{
				SiGetEventData eventData;
				SiSpwEvent spwEvent;
				SiGetEventWinInit(&eventData, _WindowMessageCode, (LONG_PTR)wparam, (LONG_PTR)lparam);
				if (SiGetEvent(_DeviceHandle, 0, &eventData, &spwEvent) == SI_IS_EVENT)
				{
					// Get type
					if (spwEvent.type == SI_MOTION_EVENT)
					{
						auto motionData = gcnew MotionData();
						motionData->Tx = spwEvent.u.spwData.mData[SI_TX];
						motionData->Ty = spwEvent.u.spwData.mData[SI_TY];
						motionData->Tz = spwEvent.u.spwData.mData[SI_TZ];
						motionData->Rx = spwEvent.u.spwData.mData[SI_RX];
						motionData->Ry = spwEvent.u.spwData.mData[SI_RY];
						motionData->Rz = spwEvent.u.spwData.mData[SI_RZ];
						return motionData;
					}
				}
				return nullptr;
			}

            //--------------------------------------------------------------------------------------------------

			void Terminate()
			{
				SiTerminate();
			}

#else // SDK_AVAILABLE

		public:
			property String^ LastMessage 
			{ 
				String^ get()
				{ 
					return "3DXWare SDK was not available at compile time."; 
				}
			}

			property UINT WindowMessageCode 
			{ 
				UINT get() 
				{
					return 0; 
				} 
			}

			bool Initialize(INT64 windowHandle)
			{
				return false;
			}

			Data^ ProcessMessage(IntPtr wparam, IntPtr lparam)
			{
				return nullptr;
			}

			void Terminate()
			{}

#endif // SDK_AVAILABLE

		};
	}
}

