#pragma once

namespace Macad
{
	namespace Occt
	{
		template<typename T>
		public ref class BaseClass abstract
	    {
		protected:
			enum class InitMode
			{
				Uninitialized
			};

            //--------------------------------------------------------------------------------------------------

            T* _NativeInstance = nullptr;
	        bool _DeleteOnFinalize = true;

            //--------------------------------------------------------------------------------------------------

	        virtual void DeleteInstance()
	        {
	            if(_NativeInstance != nullptr)
		        {
			        delete _NativeInstance;
					_NativeInstance = nullptr;
		        }
	        }

            //--------------------------------------------------------------------------------------------------

		public:

			// Derived classes mostly define own default constructors which create
			// a new native instance. We need another default c'tor which does nothing.
			BaseClass(InitMode init)
		    {};

            //--------------------------------------------------------------------------------------------------

			BaseClass(T* instance, bool deleteOnFinalize)
	        {
		        _NativeInstance = instance;
				_DeleteOnFinalize = deleteOnFinalize;
			}

            //--------------------------------------------------------------------------------------------------

	        virtual ~BaseClass()
	        {
				this->!BaseClass();
	        }

            //--------------------------------------------------------------------------------------------------

	        !BaseClass()
	        {
		        if(!IsDisposed())
		        {
			        if(_DeleteOnFinalize)
			        {
                        DeleteInstance();
			        }
			        _NativeInstance = nullptr;
		        }
	        }

            //--------------------------------------------------------------------------------------------------

			bool IsDisposed()
        	{
		        return this == nullptr || _NativeInstance == nullptr;
        	}

            //--------------------------------------------------------------------------------------------------

			bool Equals( System::Object^ obj ) override
	        {
		        if(this->GetType()->IsInstanceOfType( obj ))
		        {
			        return _NativeInstance == ((BaseClass^)obj)->_NativeInstance;
		        }
		        return false;
	        }

            //--------------------------------------------------------------------------------------------------

	        int GetHashCode() override
	        {
		        return (int)(unsigned long long)_NativeInstance;
	        }

            //--------------------------------------------------------------------------------------------------

		};

	}; // Occt
}; // Macad
