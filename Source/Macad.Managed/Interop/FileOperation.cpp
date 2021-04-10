
#include "ManagedPCH.h"

using namespace System;
using namespace System::IO;

namespace Macad
{
	namespace Interop
	{
		public ref class FileOperation sealed
		{
		private:
			static bool _SHFileOperation(UINT func, FILEOP_FLAGS flags, String^ pathFrom, String^ pathTo)
			{
				pin_ptr<const wchar_t> pathFromPtr = PtrToStringChars(String::Concat(pathFrom, "\0\0"));
				pin_ptr<const wchar_t> pathToPtr = String::IsNullOrEmpty(pathTo) ? nullptr : PtrToStringChars(String::Concat(pathTo, "\0\0"));

				SHFILEOPSTRUCT shf;
				memset(&shf, 0, sizeof(shf));
				shf.hwnd = (HWND)(void*)(System::Diagnostics::Process::GetCurrentProcess()->MainWindowHandle);
				shf.wFunc = func;
				shf.fFlags = flags;
				shf.pFrom = pathFromPtr;
				shf.pTo = pathToPtr;

				auto res = SHFileOperation(&shf);
				if (res == 0x4c7) // User cancellation
					return false;

				if (res != 0)
					throw gcnew System::ComponentModel::Win32Exception(res);

				return true;
			}

			//--------------------------------------------------------------------------------------------------

		public:
			static bool DeleteFile(String^ path)
			{
				return _SHFileOperation(FO_DELETE, FOF_ALLOWUNDO | FOF_NOCONFIRMATION, path, nullptr);
			}

			//--------------------------------------------------------------------------------------------------

		public:
			static bool MoveFile(String^ pathFrom, String^ pathTo)
			{
				if (File::Exists(pathTo) || Directory::Exists(pathTo))
					throw gcnew IOException("A file or directory with this name already exists.");

				return _SHFileOperation(FO_MOVE, FOF_NOCONFIRMATION, pathFrom, pathTo);
			}

			//--------------------------------------------------------------------------------------------------

		public:
			static bool CopyFile(String^ pathFrom, String^ pathTo)
			{
				if (File::Exists(pathTo))
					throw gcnew IOException("A file or directory with this name already exists.");

				return _SHFileOperation(FO_COPY, FOF_NOCONFIRMATION, pathFrom, pathTo);
			}

			//--------------------------------------------------------------------------------------------------

		};
	}
}