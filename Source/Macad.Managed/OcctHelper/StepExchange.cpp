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

				bool AddSolid(Macad::Occt::TopoDS_Shape^ shape)
				{
					return _Writer->Transfer(*shape->NativeInstance, STEPControl_AsIs) == IFSelect_RetDone;
				}

				//--------------------------------------------------------------------------------------------------

				bool WriteToFile(String^ path)
				{
					char* pathCString = static_cast<char*>(Marshal::StringToHGlobalAnsi(path).ToPointer());
					bool result = _Writer->Write(pathCString);
					Marshal::FreeHGlobal((IntPtr)pathCString);
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

				Macad::Occt::TopoDS_Shape^ GetRootShape()
				{
					if(_Reader->TransferRoots()==0)
						return nullptr;

					return gcnew TopoDS_Shape(new ::TopoDS_Shape(_Reader->OneShape()));
				}

				//--------------------------------------------------------------------------------------------------

				bool ReadFromFile(String^ path)
				{
					char* pathCString = static_cast<char*>(Marshal::StringToHGlobalAnsi(path).ToPointer());
					bool result = _Reader->ReadFile(pathCString) == IFSelect_RetDone;
					Marshal::FreeHGlobal((IntPtr)pathCString);
					return result;
				}
			};
		}
	}
}