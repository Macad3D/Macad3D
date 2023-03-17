#include "ManagedPCH.h"
#include <Interface_Static.hxx>
#include <IGESControl_Writer.hxx>
#include <IGESControl_Controller.hxx>
#include <IGESControl_Reader.hxx>

#using "Macad.Occt.dll" as_friend

using namespace System;
using namespace System::Runtime::InteropServices;

namespace Macad
{
	namespace Occt
	{
		namespace Helper
		{
			public ref class IgesWriter
			{
				IGESControl_Writer* _Writer;

				//--------------------------------------------------------------------------------------------------

			public:
				IgesWriter()
				{
					IGESControl_Controller::Init(); 
					_Writer = new IGESControl_Writer("MM", 1);
				}

				//--------------------------------------------------------------------------------------------------

				bool AddShape(Macad::Occt::TopoDS_Shape^ shape)
				{
					return _Writer->AddShape(*shape->NativeInstance);
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
			
			public ref class IgesReader
			{
				IGESControl_Reader* _Reader;

				//--------------------------------------------------------------------------------------------------

			public:
				IgesReader()
				{
					IGESControl_Controller::Init();
					Interface_Static::SetIVal ("read.iges.bspline.continuity",2);
					_Reader = new IGESControl_Reader();
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