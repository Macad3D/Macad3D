#include "ManagedPCH.h"

using namespace System;

namespace Macad {
	namespace Interop
	{
		public ref struct ExceptionInfo
		{
		public:
			enum class ExceptionSource
			{
				OCCT,
				STL
			};

			//--------------------------------------------------------------------------------------------------

			property ExceptionSource Source 
			{
				ExceptionSource get() { return _Source; }
			}

			//--------------------------------------------------------------------------------------------------

			property String^ Message
			{
				String^ get() { return _Message; }
			}

			//--------------------------------------------------------------------------------------------------

		internal:
			ExceptionInfo(ExceptionSource source, const char * message)
			{
				_Source = source;
				_Message = gcnew String(message);
			}

			//--------------------------------------------------------------------------------------------------

		private:
			ExceptionSource _Source;
			String^ _Message;

		};

		//--------------------------------------------------------------------------------------------------

		public ref class ExceptionHelper
		{
			static const DWORD CppExceptionCode = 0xe06d7363;
			static const DWORD ClrExceptionCode = 0xe0434352;

			//--------------------------------------------------------------------------------------------------

		public:
			static ExceptionInfo^ GetNativeExceptionInfo(IntPtr^ ptr)
			{
				try {
					auto eptr = (EXCEPTION_POINTERS*)(ptr->ToPointer());
					if (eptr->ExceptionRecord->ExceptionCode == CppExceptionCode)
					{
						const EXCEPTION_RECORD & er = *eptr->ExceptionRecord;
						void* object = (void*)eptr->ExceptionRecord->ExceptionInformation[1];

						auto occtException = dynamic_cast<::Standard_Failure*>(reinterpret_cast<Standard_Transient*>(object));
						if (occtException != nullptr)
						{
							const char* message = occtException->GetMessageString();
							if (message == nullptr || strlen(message) == 0)
							{
							   message = occtException->DynamicType()->Name();
							}
							return gcnew ExceptionInfo(ExceptionInfo::ExceptionSource::OCCT, message);
						}

						auto stdException = dynamic_cast<std::exception*>(reinterpret_cast<std::exception*>(object));
						if (stdException != nullptr)
						{
							return gcnew ExceptionInfo(ExceptionInfo::ExceptionSource::STL, stdException->what());
						}
					}
					return nullptr;
				}
				catch (...)
				{
					return nullptr;
				}
			}

			//--------------------------------------------------------------------------------------------------

			static void RaiseOcctException()
			{
				::Standard_Failure::Raise("This is a OCCT exception of type Standard_Failure.");
			}

			//--------------------------------------------------------------------------------------------------

			static void RaiseStlException()
			{
				throw std::exception("This is a STL exception of type std::exception.");
			}

			//--------------------------------------------------------------------------------------------------

			static void RaiseUnknownException()
			{
				throw "This is an unknown exception.";
			}

			//--------------------------------------------------------------------------------------------------
		};
	}
}
