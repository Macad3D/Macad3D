#pragma once

#include "Standard_Transient.h"

namespace Macad
{
namespace Occt
{

	public ref class Standard_Transient : public BaseClass<::Standard_Transient>
    {
    protected:
	    Standard_Transient(InitMode init)
            : BaseClass(init)
        {}

        //--------------------------------------------------------------------------------------------------

    public:
	    Standard_Transient(::Standard_Transient* instance)
		    : BaseClass(instance, true)
	    {
			instance->IncrementRefCounter();
	    }

        //--------------------------------------------------------------------------------------------------

        Standard_Transient(::Standard_Transient& instance)
		    : BaseClass(&instance, true)
	    {
			instance.IncrementRefCounter();
	    }

        //--------------------------------------------------------------------------------------------------

	    Standard_Transient(Macad::Occt::Standard_Transient^ instance)
		    : BaseClass(InitMode::Uninitialized)
	    {
	        _NativeInstance = instance->_NativeInstance;
			_NativeInstance->IncrementRefCounter();
	    }
    
        //--------------------------------------------------------------------------------------------------

	    void DeleteInstance() override
	    {
			if(_NativeInstance != nullptr)
			{
				if(_NativeInstance->DecrementRefCounter() == 0)
				{
				    _NativeInstance->Delete();
				}
			}
	    }

        //--------------------------------------------------------------------------------------------------
		
	    property ::Standard_Transient* NativeInstance
	    {
		    ::Standard_Transient* get()
		    {
			    return static_cast<::Standard_Transient*>(_NativeInstance);
		    }
		    void set(::Standard_Transient* instance)
		    {
				if(instance != _NativeInstance)
				{
				    DeleteInstance();
				    _NativeInstance = instance;
				    instance->IncrementRefCounter();
				}
		    }
	    }

        //--------------------------------------------------------------------------------------------------

		static Standard_Transient^ CreateDowncasted(::Standard_Transient* instance)
        {
			return gcnew Standard_Transient(instance);
		}

    }; // class Standard_Transient
		
}; // namespace Occt
}; // namespace Macad
