// Generated wrapper code for package WNT

#pragma once

#include "Aspect.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  WNT_WClass
//---------------------------------------------------------------------
/// <summary>
/// This class defines a Windows NT window class.
/// A window in Windows NT is always created based on a
/// window class. The window class identifies the window
/// procedure that processes messages to the window. Each
/// window class has unique name ( character string ). More
/// than one window can be created based on a single window
/// class. For example, all button windows in Windows NT
/// are created based on the same window class. The window
/// class defines the window procedure and some other
/// characteristics ( background, mouse cursor shape etc. )
/// of the windows that are created based on that class.
/// When we create a window, we define additional
/// characteristics of the window that are unique to that
/// window. So, we have to create and register window
/// class before creation of any window. Of course, it's possible
/// to create a new window class for each window inside
/// the Window class and do not use the WClass at all.
/// We implemented this class for sake of flexibility of
/// event processing.
/// </summary>
public ref class WNT_WClass sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_WNT_WClass_h
public:
    Include_WNT_WClass_h
#endif

public:
    WNT_WClass(::WNT_WClass* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    WNT_WClass(::WNT_WClass& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::WNT_WClass* NativeInstance
    {
        ::WNT_WClass* get()
        {
            return static_cast<::WNT_WClass*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a Windows NT window class and registers it.
    /// </summary>
    WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor, System::IntPtr theIcon, Macad::Occt::TCollection_AsciiString^ theMenuName);
    /// <summary>
    /// Creates a Windows NT window class and registers it.
    /// </summary>
    WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor, System::IntPtr theIcon);
    /// <summary>
    /// Creates a Windows NT window class and registers it.
    /// </summary>
    WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor);
    /// <summary>
    /// Creates a Windows NT window class and registers it.
    /// </summary>
    WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra);
    /// <summary>
    /// Creates a Windows NT window class and registers it.
    /// </summary>
    WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra);
    /// <summary>
    /// Creates a Windows NT window class and registers it.
    /// </summary>
    WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle);
    /// <summary>
    /// Returns address of window procedure.
    /// </summary>
    System::IntPtr WndProc();
    /// <summary>
    /// Returns a class name.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Name();
    /// <summary>
    /// Returns a program instance handle.
    /// </summary>
    System::IntPtr Instance();
    static Macad::Occt::WNT_WClass^ CreateDowncasted(::WNT_WClass* instance);
}; // class WNT_WClass

//---------------------------------------------------------------------
//  Class  WNT_Window
//---------------------------------------------------------------------
/// <summary>
/// This class defines Windows NT window
/// </summary>
public ref class WNT_Window sealed
    : public Macad::Occt::Aspect_Window
{

#ifdef Include_WNT_Window_h
public:
    Include_WNT_Window_h
#endif

public:
    WNT_Window(::WNT_Window* nativeInstance)
        : Macad::Occt::Aspect_Window( nativeInstance )
    {}

    WNT_Window(::WNT_Window& nativeInstance)
        : Macad::Occt::Aspect_Window( nativeInstance )
    {}

    property ::WNT_Window* NativeInstance
    {
        ::WNT_Window* get()
        {
            return static_cast<::WNT_Window*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a Window defined by his position and size in pixels from the Parent Window.
    /// Trigger: Raises WindowDefinitionError if the Position out of the Screen Space or the window
    /// creation failed.
    /// </summary>
    WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor, System::IntPtr theParent, System::IntPtr theMenu, System::IntPtr theClientStruct);
    /// <summary>
    /// Creates a Window defined by his position and size in pixels from the Parent Window.
    /// Trigger: Raises WindowDefinitionError if the Position out of the Screen Space or the window
    /// creation failed.
    /// </summary>
    WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor, System::IntPtr theParent, System::IntPtr theMenu);
    /// <summary>
    /// Creates a Window defined by his position and size in pixels from the Parent Window.
    /// Trigger: Raises WindowDefinitionError if the Position out of the Screen Space or the window
    /// creation failed.
    /// </summary>
    WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor, System::IntPtr theParent);
    /// <summary>
    /// Creates a Window defined by his position and size in pixels from the Parent Window.
    /// Trigger: Raises WindowDefinitionError if the Position out of the Screen Space or the window
    /// creation failed.
    /// </summary>
    WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor);
    /// <summary>
    /// Creates a Window defined by his position and size in pixels from the Parent Window.
    /// Trigger: Raises WindowDefinitionError if the Position out of the Screen Space or the window
    /// creation failed.
    /// </summary>
    WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight);
    /// <summary>
    /// Creates a Window based on the existing window handle.
    /// </summary>
    WNT_Window(System::IntPtr theHandle, Macad::Occt::Quantity_NameOfColor theBackColor);
    /// <summary>
    /// Creates a Window based on the existing window handle.
    /// </summary>
    WNT_Window(System::IntPtr theHandle);
    /// <summary>
    /// Convert WInAPI virtual key (VK_ enumeration) into Aspect_VKey.
    /// </summary>
    static unsigned int VirtualKeyFromNative(int theKey);
    /// <summary>
    /// Convert WPARAM from mouse event to key flags.
    /// </summary>
    static unsigned int MouseKeyFlagsFromEvent(long long unsigned int theKeys);
    /// <summary>
    /// Convert WPARAM from mouse event to mouse buttons bitmask.
    /// </summary>
    static unsigned int MouseButtonsFromEvent(long long unsigned int theKeys);
    /// <summary>
    /// Use GetAsyncKeyState() to fetch actual mouse key flags regardless of event loop.
    /// </summary>
    static unsigned int MouseKeyFlagsAsync();
    /// <summary>
    /// Use GetAsyncKeyState() to fetch actual mouse buttons state regardless of event loop.
    /// </summary>
    static unsigned int MouseButtonsAsync();
    /// <summary>
    /// Sets cursor for ENTIRE WINDOW CLASS to which the Window belongs.
    /// </summary>
    void SetCursor(System::IntPtr theCursor);
    /// <summary>
    /// Opens the window <me>.
    /// </summary>
    void Map();
    /// <summary>
    /// Opens a window according to the map mode.
    /// This method is specific to Windows NT.
    /// </summary>
    /// <param name="in]">
    /// theMapMode  can be one of SW_xxx constants defined in <windows.h>
    /// </param>
    void Map(int theMapMode);
    /// <summary>
    /// Closes the window <me>.
    /// </summary>
    void Unmap();
    /// <summary>
    /// Applies the resizing to the window <me>.
    /// </summary>
    Macad::Occt::Aspect_TypeOfResize DoResize();
    /// <summary>
    /// Does nothing on Windows.
    /// </summary>
    bool DoMapping();
    /// <summary>
    /// Changes variables due to window position.
    /// </summary>
    void SetPos(int X, int Y, int X1, int Y1);
    /// <summary>
    /// Returns True if the window <me> is opened
    /// and False if the window is closed.
    /// </summary>
    bool IsMapped();
    /// <summary>
    /// Returns The Window RATIO equal to the physical
    /// WIDTH/HEIGHT dimensions.
    /// </summary>
    double Ratio();
    /// <summary>
    /// Returns The Window POSITION in PIXEL
    /// </summary>
    void Position(int% X1, int% Y1, int% X2, int% Y2);
    /// <summary>
    /// Returns The Window SIZE in PIXEL
    /// </summary>
    void Size(int% Width, int% Height);
    /// <summary>
    /// Returns native Window handle (HWND)
    /// </summary>
    System::IntPtr NativeHandle();
    /// <summary>
    /// Returns parent of native Window handle (HWND on Windows).
    /// </summary>
    System::IntPtr NativeParentHandle();
    /* Method skipped due to unknown mapping: __GLXFBConfigRec NativeFBConfig() */
    /// <summary>
    /// Sets window title.
    /// </summary>
    void SetTitle(Macad::Occt::TCollection_AsciiString^ theTitle);
    /* Method skipped due to unknown mapping: void InvalidateContent(Aspect_DisplayConnection theDisp, ) */
    /// <summary>
    /// Invalidate entire window content by calling InvalidateRect() WinAPI function, resulting in
    /// WM_PAINT event put into window message loop. Method can be called from non-window thread, and
    /// system will also automatically aggregate multiple events into single one.
    /// </summary>
    void InvalidateContent();
    /// <summary>
    /// Returns the Windows NT handle of the created window <me>.
    /// </summary>
    System::IntPtr HWindow();
    /// <summary>
    /// Returns the Windows NT handle parent of the created window <me>.
    /// </summary>
    System::IntPtr HParentWindow();
    /// <summary>
    /// RegisterRawInputDevices() wrapper.
    /// </summary>
    /// <param name="in]">
    /// theRawDeviceMask  mask of RawInputMask flags
    /// </param>
    /// <returns>
    /// number of actually registered device types
    /// </returns>
    int RegisterRawInputDevices(unsigned int theRawDeviceMask);
    /* Method skipped due to unknown mapping: bool ProcessMessage(Aspect_WindowInputListener theListener, tagMSG theMsg, ) */
    static Macad::Occt::WNT_Window^ CreateDowncasted(::WNT_Window* instance);
}; // class WNT_Window

}; // namespace Occt
}; // namespace Macad
