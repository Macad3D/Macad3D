#include "ManagedPCH.h"

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
			static const int CppExceptionCode = 0xe06d7363;

			//--------------------------------------------------------------------------------------------------

		public:
			static ExceptionInfo^ GetNativeExceptionInfo(int code, IntPtr^ ptr)
			{
				try {
					if (code == CppExceptionCode)
					{
						auto eptr = (EXCEPTION_POINTERS*)(ptr->ToPointer());
						const EXCEPTION_RECORD & er = *eptr->ExceptionRecord;
						void* object = (void*)eptr->ExceptionRecord->ExceptionInformation[1];

						auto occtException = dynamic_cast<::Standard_Failure*>(reinterpret_cast<Standard_Transient*>(object));
						if (occtException != nullptr)
						{
							return gcnew ExceptionInfo(ExceptionInfo::ExceptionSource::OCCT, occtException->GetMessageString());
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
