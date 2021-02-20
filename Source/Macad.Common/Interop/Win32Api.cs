// ReSharper disable InconsistentNaming

using System;
using System.Runtime.InteropServices;
using System.Text;

namespace Macad.Common.Interop
{
    public static class Win32Api
    {
        #region Constants

        public const int
            CS_OWNDC = 0x0020;

        //--------------------------------------------------------------------------------------------------

        public const uint
            WS_DISABLED = 0x08000000,
            WS_VISIBLE = 0x10000000,
            WS_CHILD = 0x40000000,
            WS_POPUP = 0x80000000;

        //--------------------------------------------------------------------------------------------------

        public const int
            SW_SHOWNORMAL = 1,
            SW_SHOWMINIMIZED = 2;

        //--------------------------------------------------------------------------------------------------

        public const int
            WM_SETFOCUS = 0x0007,
            WM_PAINT = 0x000f,
            WM_ENABLE = 0x000a,
            WM_SHOWWINDOW = 0x0018,
            WM_KEYDOWN = 0x0100,
            WM_MOUSEMOVE = 0x0200,
            WM_LBUTTONDOWN = 0x0201,
            WM_LBUTTONUP = 0x0202,
            WM_RBUTTONDOWN = 0x0204,
            WM_RBUTTONUP = 0x0205,
            WM_MBUTTONDOWN = 0x0207,
            WM_MBUTTONUP = 0x0208,
            WM_MOUSEWHEEL = 0x020a,
            WM_MOUSELEAVE = 0x02a3,
            WM_NCHITTEST = 0x0084,
            WM_DROPFILES = 0x0233;

        //--------------------------------------------------------------------------------------------------

        public const int 
            HTNOWHERE = 0,
            HTTRANSPARENT = -1;

        //--------------------------------------------------------------------------------------------------

        public const int
            GMEM_FIXED = 0x0000,
            GMEM_SHARE = 0x2000,
            GWL_WNDPROC = -4,
            GWL_HWNDPARENT = -8,
            GWL_STYLE = -16,
            GWL_EXSTYLE = -20,
            GWL_ID = -12;


        //--------------------------------------------------------------------------------------------------

        [Flags]
        public enum RedrawWindowFlags : uint
        {
            Invalidate = 0x1,
            InternalPaint = 0x2,
            Erase = 0x4,
            Validate = 0x8,
            NoInternalPaint = 0x10,
            NoErase = 0x20,
            NoChildren = 0x40,
            AllChildren = 0x80,
            UpdateNow = 0x100,
            EraseNow = 0x200,
            Frame = 0x400,
            NoFrame = 0x800
        }

        //--------------------------------------------------------------------------------------------------

        [Flags]
        public enum MINIDUMP_TYPE : uint
        {
            MiniDumpNormal = 0x00000000,
            MiniDumpWithDataSegs = 0x00000001,
            MiniDumpWithFullMemory = 0x00000002,
            MiniDumpWithHandleData = 0x00000004,
            MiniDumpFilterMemory = 0x00000008,
            MiniDumpScanMemory = 0x00000010,
            MiniDumpWithUnloadedModules = 0x00000020,
            MiniDumpWithIndirectlyReferencedMemory = 0x00000040,
            MiniDumpFilterModulePaths = 0x00000080,
            MiniDumpWithProcessThreadData = 0x00000100,
            MiniDumpWithPrivateReadWriteMemory = 0x00000200,
            MiniDumpWithoutOptionalData = 0x00000400,
            MiniDumpWithFullMemoryInfo = 0x00000800,
            MiniDumpWithThreadInfo = 0x00001000,
            MiniDumpWithCodeSegs = 0x00002000,
            MiniDumpWithoutManagedState = 0x00004000,
        };

        //--------------------------------------------------------------------------------------------------

        public const uint SECURITY_DESCRIPTOR_REVISION = 1;

        //--------------------------------------------------------------------------------------------------

        /// http://msdn.microsoft.com/library/default.asp?url=/library/en-us/dllproc/base/synchronization_object_security_and_access_rights.asp
        [Flags]
        public enum SyncObjectAccess : uint
        {
            DELETE            = 0x00010000,
            READ_CONTROL        = 0x00020000,
            WRITE_DAC        = 0x00040000,
            WRITE_OWNER        = 0x00080000,
            SYNCHRONIZE        = 0x00100000,
            EVENT_ALL_ACCESS    = 0x001F0003,
            EVENT_MODIFY_STATE    = 0x00000002,
            MUTEX_ALL_ACCESS    = 0x001F0001,
            MUTEX_MODIFY_STATE    = 0x00000001,
            SEMAPHORE_ALL_ACCESS    = 0x001F0003,
            SEMAPHORE_MODIFY_STATE    = 0x00000002,
            TIMER_ALL_ACCESS    = 0x001F0003,
            TIMER_MODIFY_STATE    = 0x00000002,
            TIMER_QUERY_STATE    = 0x00000001
        }

        //--------------------------------------------------------------------------------------------------

        [Flags]
        public enum HtmlHelpCommand : uint
        {
            HH_DISPLAY_TOPIC = 0,
            HH_DISPLAY_TOC = 1,
            HH_DISPLAY_INDEX = 2,
            HH_DISPLAY_SEARCH = 3,
            HH_DISPLAY_TEXT_POPUP = 0x000E,
            HH_HELP_CONTEXT = 0x000F,
            HH_CLOSE_ALL = 0x0012
        }

        //--------------------------------------------------------------------------------------------------

        [Flags]
        public enum Stgm : uint
        {
            STGM_READ = 0x0,
            STGM_WRITE = 0x1,
            STGM_READWRITE = 0x2,
            STGM_SHARE_DENY_NONE = 0x40,
            STGM_SHARE_DENY_READ = 0x30,
            STGM_SHARE_DENY_WRITE = 0x20,
            STGM_SHARE_EXCLUSIVE = 0x10,
            STGM_PRIORITY = 0x40000,
            STGM_CREATE = 0x1000,
            STGM_CONVERT = 0x20000,
            STGM_FAILIFTHERE = 0x0,
            STGM_DIRECT = 0x0,
            STGM_TRANSACTED = 0x10000,
            STGM_NOSCRATCH = 0x100000,
            STGM_NOSNAPSHOT = 0x200000,
            STGM_SIMPLE = 0x8000000,
            STGM_DIRECT_SWMR = 0x400000,
            STGM_DELETEONRELEASE = 0x4000000
        }

        //--------------------------------------------------------------------------------------------------

        public enum MapVirtualKeyMapTypes
        {
            MAPVK_VK_TO_VSC = 0x00,
            MAPVK_VSC_TO_VK = 0x01,
            MAPVK_VK_TO_CHAR = 0x02,
            MAPVK_VSC_TO_VK_EX = 0x03,
            MAPVK_VK_TO_VSC_EX = 0x04
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Structures

        [StructLayout(LayoutKind.Sequential)]
        public struct POINT
        {
            public int x;
            public int y;

            public POINT(int x, int y)
            {
                this.x = x;
                this.y = y;
            }
        }

        //--------------------------------------------------------------------------------------------------

        [StructLayout(LayoutKind.Sequential)]
        public struct RECT
        {
            public int Left;
            public int Top;
            public int Right;
            public int Bottom;

            public RECT(int left, int top, int right, int bottom)
            {
                Left = left;
                Top = top;
                Right = right;
                Bottom = bottom;
            }
        }

        //--------------------------------------------------------------------------------------------------

        [StructLayout(LayoutKind.Sequential)]
        public struct WINDOWPLACEMENT
        {
            public int length;
            public int flags;
            public int showCmd;
            public POINT minPosition;
            public POINT maxPosition;
            public RECT normalPosition;
        }

        //--------------------------------------------------------------------------------------------------

        [StructLayout(LayoutKind.Sequential)]
        public struct DROPFILES
        {
            public int pFiles;
            public POINT pt;
            public bool fNC;
            public bool fWide;
        }

        //--------------------------------------------------------------------------------------------------

        [StructLayout(LayoutKind.Sequential, Pack = 4)]
        public struct MINIDUMP_EXCEPTION_INFORMATION
        {
            public uint ThreadId;
            public IntPtr ExceptionPointers;
            public int ClientPointers;
        }

        //--------------------------------------------------------------------------------------------------

        [StructLayout(LayoutKind.Sequential)]
        public struct SECURITY_DESCRIPTOR
        {
            public byte revision;
            public byte size;
            public short control;
            public IntPtr owner;
            public IntPtr group;
            public IntPtr sacl;
            public IntPtr dacl;
        }

        //--------------------------------------------------------------------------------------------------

        [StructLayout(LayoutKind.Sequential)]
        public struct SECURITY_ATTRIBUTES
        {
            public int nLength;
            public IntPtr lpSecurityDescriptor;
            public bool bInheritHandle;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Methods

        [DllImport("kernel32.dll", SetLastError = true)]
        public static extern IntPtr GlobalLock(IntPtr Handle);

        [DllImport("kernel32.dll", SetLastError = true)]
        public static extern int GlobalUnlock(IntPtr Handle);

        [DllImport("kernel32.dll")]
        public static extern IntPtr GetCurrentProcess();

        [DllImport("kernel32.dll")]
        public static extern uint GetCurrentProcessId();

        [DllImport("kernel32.dll")]
        public static extern uint GetCurrentThreadId();

        [DllImport("kernel32.dll")]
        public static extern IntPtr CreateMutex(ref SECURITY_ATTRIBUTES lpMutexAttributes, bool bInitialOwner, string lpName);
        
        [DllImport("kernel32.dll")]
        public static extern IntPtr OpenMutex(uint dwDesiredAccess, bool bInheritHandle, string lpName);

        [DllImport("kernel32.dll")]
        public static extern bool ReleaseMutex(IntPtr hMutex);

        [DllImport("kernel32.dll", CharSet = CharSet.Unicode)]
        public static extern IntPtr LoadLibrary([MarshalAs(UnmanagedType.LPWStr)] string lpFileName);

        [DllImport("kernel32.dll")]
        public static extern bool FreeLibrary(IntPtr hLibModule);
 
        [DllImport("kernel32.dll", CharSet = CharSet.Ansi)]
        public static extern IntPtr GetProcAddress(IntPtr hModule, [MarshalAs(UnmanagedType.LPStr)] string lpProcName);

        [DllImport("kernel32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
        public static extern bool SetDllDirectory(string lpPathName);

        //--------------------------------------------------------------------------------------------------

        [DllImport("user32.dll")]
        public static extern bool EnableWindow(HandleRef hWnd, bool bEnable);

        //SetWindowLong won't work correctly for 64-bit: we should use SetWindowLongPtr instead.  On
        //32-bit, SetWindowLongPtr is just #defined as SetWindowLong.  SetWindowLong really should 
        //take/return int instead of IntPtr/HandleRef, but since we're running this only for 32-bit
        //it'll be OK.
        public static IntPtr SetWindowLong(HandleRef hWnd, int nIndex, HandleRef dwNewLong) 
        {
            if (IntPtr.Size == 4)
            {
                return SetWindowLongPtr32(hWnd, nIndex, dwNewLong);
            }
            return SetWindowLongPtr64(hWnd, nIndex, dwNewLong);
        }

        [DllImport("user32.dll", CharSet = CharSet.Auto, EntryPoint = "SetWindowLong")]
        public static extern IntPtr SetWindowLongPtr32(HandleRef hWnd, int nIndex, HandleRef dwNewLong);

        [DllImport("user32.dll", CharSet = CharSet.Auto, EntryPoint = "SetWindowLongPtr")]
        public static extern IntPtr SetWindowLongPtr64(HandleRef hWnd, int nIndex, HandleRef dwNewLong);

        [DllImport("user32.dll")]
        public static extern IntPtr SetParent(HandleRef hWnd, HandleRef hWndParent);

        [DllImport("user32.dll")]
        public static extern bool GetWindowPlacement(HandleRef hWnd, out WINDOWPLACEMENT lpwndpl);

        [DllImport("user32.dll")]
        public static extern bool SetWindowPlacement(HandleRef hWnd, [In] ref WINDOWPLACEMENT lpwndpl);
        
        [DllImport("user32.dll")]
        public static extern IntPtr GetForegroundWindow();

        [DllImport("user32.dll")]
        public static extern bool SetForegroundWindow(HandleRef hWnd);
        
        [DllImport("user32.dll", SetLastError = true)]
        public static extern IntPtr SetFocus(HandleRef hWnd);

        [DllImport("user32.dll", SetLastError = true)]
        public static extern int SetWindowRgn(HandleRef hWnd, IntPtr hRgn, bool bRedraw);

        [DllImport("user32.dll")]
        public static extern bool InvalidateRect(HandleRef hWnd, IntPtr lpRect, bool bErase);

        [DllImport("user32.dll")]
        public static extern bool UpdateWindow(HandleRef hWnd);

        [DllImport("user32.dll")]
        public static extern bool RedrawWindow(HandleRef hWnd, IntPtr lprcUpdate, IntPtr hrgnUpdate, RedrawWindowFlags flags);

        [DllImport("user32.dll", SetLastError = true, CharSet = CharSet.Auto)]
        public static extern bool PostMessage(IntPtr hWnd, uint Msg, IntPtr wParam, IntPtr lParam);

        [DllImport("user32.dll")]
        public static extern uint MapVirtualKey(uint uCode, MapVirtualKeyMapTypes uMapType);

        [DllImport("user32.dll")]
        public static extern uint MapVirtualKeyEx(uint uCode, MapVirtualKeyMapTypes uMapType, IntPtr dwhkl);

        [DllImport("user32.dll", CharSet = CharSet.Unicode)]
        public static extern short VkKeyScan(char ch);

        [DllImport("user32.dll", CharSet = CharSet.Unicode)]
        public static extern short VkKeyScanEx(char ch, IntPtr dwhkl);

        [DllImport("user32.dll")]
        public static extern int ToAscii(uint uVirtKey, uint uScanCode, byte [] lpKeyState, [Out] StringBuilder lpChar, uint uFlags);

        [DllImport("user32.dll")]
        public static extern int ToAsciiEx(uint uVirtKey, uint uScanCode, byte [] lpKeyState, [Out] StringBuilder lpChar, uint uFlags, IntPtr hkl);

        [DllImport("user32.dll")]
        public static extern int ToUnicode(uint wVirtKey, uint wScanCode, byte [] lpKeyState, [Out, MarshalAs(UnmanagedType.LPWStr)] StringBuilder pwszBuff,
                                             int cchBuff, uint wFlags);

        [DllImport("user32.dll")]
        public static extern int ToUnicodeEx(uint wVirtKey, uint wScanCode, byte [] lpKeyState, [Out, MarshalAs(UnmanagedType.LPWStr, SizeConst = 64)] StringBuilder pwszBuff,
                                      int cchBuff, uint wFlags, IntPtr dwhkl);

        [DllImport("user32.dll")]
        public static extern bool GetKeyboardState(byte [] lpKeyState);

        //--------------------------------------------------------------------------------------------------

        [DllImport("gdi32.dll", SetLastError = true)]
        public static extern IntPtr CreateRectRgn(int nLeftRect, int nTopRect, int nRightRect, int nBottomRect);

        //--------------------------------------------------------------------------------------------------

        [DllImport("shell32.dll")]
        public static extern void DragAcceptFiles(IntPtr hwnd, bool fAccept);

        [DllImport("shell32.dll")]
        public static extern uint DragQueryFile(IntPtr hDrop, uint iFile, [Out] StringBuilder filename, uint cch);

        [DllImport("shell32.dll")]
        public static extern void DragFinish(IntPtr hDrop);

        [DllImport("shell32.dll", PreserveSig = false)]
        public static extern void SetCurrentProcessExplicitAppUserModelID([MarshalAs(UnmanagedType.LPWStr)] string AppID);

        [DllImport("shell32.dll")]
        public static extern HRESULT GetCurrentProcessExplicitAppUserModelID([MarshalAs(UnmanagedType.LPWStr)] out string AppID);

        //--------------------------------------------------------------------------------------------------

        [DllImport("advapi32.dll", SetLastError=true)]
        public static extern bool InitializeSecurityDescriptor(out SECURITY_DESCRIPTOR SecurityDescriptor, uint dwRevision);

        [DllImport("advapi32.dll", SetLastError=true)]
        public static extern bool SetSecurityDescriptorDacl(ref SECURITY_DESCRIPTOR sd, bool daclPresent, IntPtr dacl, bool daclDefaulted);

        //--------------------------------------------------------------------------------------------------

        [DllImport("dbghelp.dll")]
        public static extern bool MiniDumpWriteDump(IntPtr hProcess, uint ProcessId, IntPtr hFile, MINIDUMP_TYPE DumpType,
            ref MINIDUMP_EXCEPTION_INFORMATION ExceptionParam, IntPtr UserStreamParam, IntPtr CallackParam);

        //--------------------------------------------------------------------------------------------------

        [DllImport("hhctrl.ocx", CharSet=CharSet.Auto)]
        public static extern int HtmlHelp(HandleRef hwndCaller, [MarshalAs(UnmanagedType.LPTStr)]string pszFile, HtmlHelpCommand uCommand, string dwData);

        //--------------------------------------------------------------------------------------------------

        [DllImport("shlwapi.dll", CharSet = CharSet.Unicode, ExactSpelling = true, PreserveSig = false)]
        public static extern void SHCreateStreamOnFileEx(string fileName, Stgm grfmode, uint dwAttributes, bool fCreate, 
            System.Runtime.InteropServices.ComTypes.IStream streamNull, ref System.Runtime.InteropServices.ComTypes.IStream stream);

        #endregion
    }
}