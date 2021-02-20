#include "ManagedPCH.h"

namespace Macad
{
	namespace Occt
	{
		namespace Helper
		{
			#pragma unmanaged

			public class NativeMessageRouter : public ::Message_Printer
			{
				DEFINE_STANDARD_RTTIEXT(NativeMessageRouter, ::Message_Printer)

			public:
			    typedef void (__stdcall *MessageCallbackFunc) (const ::TCollection_ExtendedString& theString, const ::Message_Gravity theGravity);

			    NativeMessageRouter(MessageCallbackFunc messageCallback)
				{
					_MessageCallback = messageCallback;
				}

                //--------------------------------------------------------------------------------------------------

				~NativeMessageRouter()
				{
					_MessageCallback = nullptr;
				}

                //--------------------------------------------------------------------------------------------------

			protected:
			    void send (const ::TCollection_AsciiString& theString, const ::Message_Gravity theGravity) const override
			    {
			        if(_MessageCallback != nullptr)
			        {
			            _MessageCallback(theString, theGravity);
			        }
			    }
				
                //--------------------------------------------------------------------------------------------------

			private:

				MessageCallbackFunc _MessageCallback;

			}; // class NativeMessageRouter

		    IMPLEMENT_STANDARD_RTTIEXT(NativeMessageRouter, ::Message_Printer)

            //--------------------------------------------------------------------------------------------------
            //--------------------------------------------------------------------------------------------------

			#pragma managed

			public ref class MessageRouter : Standard_Transient
			{
			public:
				delegate void MessageEvent(String^ text, Message_Gravity gravity);
				MessageEvent^ MessageArrived;

                //--------------------------------------------------------------------------------------------------

				MessageRouter()
				    : Standard_Transient(InitMode::Uninitialized)
				{
					_NativeCallbackDelegate = gcnew NativeCallbackDelegate(this, &MessageRouter::_NativeCallback);
                    Runtime::InteropServices::GCHandle gch = Runtime::InteropServices::GCHandle::Alloc(_NativeCallbackDelegate);
                    IntPtr ip = Runtime::InteropServices::Marshal::GetFunctionPointerForDelegate(_NativeCallbackDelegate);
                    NativeMessageRouter::MessageCallbackFunc cb = static_cast<NativeMessageRouter::MessageCallbackFunc>(ip.ToPointer());

					Handle(NativeMessageRouter) messageRouter = new NativeMessageRouter(cb);
					NativeInstance = (::Standard_Transient*)messageRouter.get();
				    ::Message::DefaultMessenger()->AddPrinter(messageRouter);

					gch.Free();
				}

                //--------------------------------------------------------------------------------------------------

				~MessageRouter()
				{
				    this->!MessageRouter();
				}

                //--------------------------------------------------------------------------------------------------

				!MessageRouter()
				{
					auto messenger = ::Message::DefaultMessenger();
					if(!messenger.IsNull())
					{
					    messenger->RemovePrinter((NativeMessageRouter*)NativeInstance);
					}
				    _NativeCallbackDelegate = nullptr;
				}

                //--------------------------------------------------------------------------------------------------

				property Message_Gravity TraceLevel
				{
				    Message_Gravity get()
				    {
				        return (Message_Gravity)((NativeMessageRouter*)NativeInstance)->GetTraceLevel();
				    }
					void set(Message_Gravity gravity)
				    {
				        ((NativeMessageRouter*)NativeInstance)->SetTraceLevel((::Message_Gravity)gravity);
				    }
				}

                //--------------------------------------------------------------------------------------------------

			private:
			    delegate void NativeCallbackDelegate(const ::TCollection_ExtendedString& theString, const ::Message_Gravity theGravity);

		        NativeCallbackDelegate^ _NativeCallbackDelegate;

		        void _NativeCallback(const ::TCollection_ExtendedString& theString, const ::Message_Gravity theGravity) 
				{
				    if(MessageArrived != nullptr)
				    {
	                    const Standard_ExtString extString = theString.ToExtString();
				        MessageArrived(gcnew System::String((const wchar_t *)extString), (Message_Gravity)theGravity);
				    }
				}

			}; // class MessageRouter

		} // namespace Helper
	} //namespace OCCT
}