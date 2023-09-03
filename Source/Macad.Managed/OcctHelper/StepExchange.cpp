#include "ManagedPCH.h"

#include <STEPControl_StepModelType.hxx>
#include <STEPControl_Writer.hxx>
#include <STEPControl_Reader.hxx>

#using "Macad.Occt.dll" as_friend

using namespace System;
using namespace System::Runtime::InteropServices;

namespace Macad
{
namespace Occt
{
namespace Helper
{
	public ref class StepWriter
	{
		STEPControl_Writer* _Writer;

		//--------------------------------------------------------------------------------------------------

	public:
		StepWriter()
		{
			_Writer = new STEPControl_Writer();
		}
				
		//--------------------------------------------------------------------------------------------------
					        
		virtual ~StepWriter()
		{
			this->!StepWriter();
		}

		//--------------------------------------------------------------------------------------------------

		!StepWriter()
		{
			if(_Writer != nullptr)
			{
				delete _Writer;
				_Writer = nullptr;
			}
		}

		//--------------------------------------------------------------------------------------------------

		bool AddSolid(Macad::Occt::TopoDS_Shape^ shape)
		{
			return _Writer->Transfer(*shape->NativeInstance, STEPControl_AsIs) == IFSelect_RetDone;
		}

		//--------------------------------------------------------------------------------------------------

		bool WriteToFile(String^ path)
		{
			char* pathCString = static_cast<char*>(Marshal::StringToCoTaskMemUTF8(path).ToPointer());
			bool result = _Writer->Write(pathCString);
			Marshal::FreeCoTaskMem((IntPtr)pathCString);
			return result;
		}
	};

	//--------------------------------------------------------------------------------------------------
	//--------------------------------------------------------------------------------------------------
			
	public ref class StepReader
	{
		STEPControl_Reader* _Reader;

		//--------------------------------------------------------------------------------------------------

	public:
		StepReader()
		{
			_Reader = new STEPControl_Reader();
		}

		//--------------------------------------------------------------------------------------------------
					        
		virtual ~StepReader()
		{
			this->!StepReader();
		}

		//--------------------------------------------------------------------------------------------------

		!StepReader()
		{
			if(_Reader != nullptr)
			{
				delete _Reader;
				_Reader = nullptr;
			}
		}

		//--------------------------------------------------------------------------------------------------

		Macad::Occt::TopoDS_Shape^ GetRootShape()
		{
			if(_Reader->TransferRoots()==0)
				return nullptr;

			return gcnew TopoDS_Shape(new ::TopoDS_Shape(_Reader->OneShape()));
		}

		//--------------------------------------------------------------------------------------------------

		bool ReadFromFile(String^ path)
		{
			char* pathCString = static_cast<char*>(Marshal::StringToCoTaskMemUTF8(path).ToPointer());
			bool result = _Reader->ReadFile(pathCString) == IFSelect_RetDone;
			Marshal::FreeCoTaskMem((IntPtr)pathCString);
			return result;
		}
	};
}
}
}