// Generated wrapper code for package WNT

#include "OcctPCH.h"
#include "WNT.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TCollection.h"
#include "Quantity.h"
#include "Aspect.h"


//---------------------------------------------------------------------
//  Class  WNT_WClass
//---------------------------------------------------------------------

Macad::Occt::WNT_WClass::WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor, System::IntPtr theIcon, Macad::Occt::TCollection_AsciiString^ theMenuName)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, theWindowExtra, theCursor.ToPointer(), theIcon.ToPointer(), *(::TCollection_AsciiString*)theMenuName->NativeInstance);
}

Macad::Occt::WNT_WClass::WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor, System::IntPtr theIcon)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, theWindowExtra, theCursor.ToPointer(), theIcon.ToPointer(), ::TCollection_AsciiString());
}

Macad::Occt::WNT_WClass::WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, theWindowExtra, theCursor.ToPointer(), nullptr, ::TCollection_AsciiString());
}

Macad::Occt::WNT_WClass::WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, theWindowExtra, nullptr, nullptr, ::TCollection_AsciiString());
}

Macad::Occt::WNT_WClass::WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, 0, nullptr, nullptr, ::TCollection_AsciiString());
}

Macad::Occt::WNT_WClass::WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, 0, 0, nullptr, nullptr, ::TCollection_AsciiString());
}

System::IntPtr Macad::Occt::WNT_WClass::WndProc()
{
    void* _result = ((::WNT_WClass*)_NativeInstance)->WndProc();
    return System::IntPtr(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::WNT_WClass::Name()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::WNT_WClass*)_NativeInstance)->Name();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

System::IntPtr Macad::Occt::WNT_WClass::Instance()
{
    void* _result = ((::WNT_WClass*)_NativeInstance)->Instance();
    return System::IntPtr(_result);
}

Macad::Occt::WNT_WClass^ Macad::Occt::WNT_WClass::CreateDowncasted(::WNT_WClass* instance)
{
    return gcnew Macad::Occt::WNT_WClass( instance );
}



//---------------------------------------------------------------------
//  Class  WNT_Window
//---------------------------------------------------------------------

Macad::Occt::WNT_Window::WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor, System::IntPtr theParent, System::IntPtr theMenu, System::IntPtr theClientStruct)
    : Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
    pin_ptr<long unsigned int> pp_theStyle = &theStyle;
    NativeInstance = new ::WNT_Window(sz_theTitle, Handle(::WNT_WClass)(theClass->NativeInstance), *(long unsigned int*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, (::Quantity_NameOfColor)theBackColor, theParent.ToPointer(), theMenu.ToPointer(), theClientStruct.ToPointer());
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
}

Macad::Occt::WNT_Window::WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor, System::IntPtr theParent, System::IntPtr theMenu)
    : Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
    pin_ptr<long unsigned int> pp_theStyle = &theStyle;
    NativeInstance = new ::WNT_Window(sz_theTitle, Handle(::WNT_WClass)(theClass->NativeInstance), *(long unsigned int*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, (::Quantity_NameOfColor)theBackColor, theParent.ToPointer(), theMenu.ToPointer(), nullptr);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
}

Macad::Occt::WNT_Window::WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor, System::IntPtr theParent)
    : Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
    pin_ptr<long unsigned int> pp_theStyle = &theStyle;
    NativeInstance = new ::WNT_Window(sz_theTitle, Handle(::WNT_WClass)(theClass->NativeInstance), *(long unsigned int*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, (::Quantity_NameOfColor)theBackColor, theParent.ToPointer(), nullptr, nullptr);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
}

Macad::Occt::WNT_Window::WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor)
    : Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
    pin_ptr<long unsigned int> pp_theStyle = &theStyle;
    NativeInstance = new ::WNT_Window(sz_theTitle, Handle(::WNT_WClass)(theClass->NativeInstance), *(long unsigned int*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, (::Quantity_NameOfColor)theBackColor, nullptr, nullptr, nullptr);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
}

Macad::Occt::WNT_Window::WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, long unsigned int theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight)
    : Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
    pin_ptr<long unsigned int> pp_theStyle = &theStyle;
    NativeInstance = new ::WNT_Window(sz_theTitle, Handle(::WNT_WClass)(theClass->NativeInstance), *(long unsigned int*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, Quantity_NOC_MATRAGRAY, nullptr, nullptr, nullptr);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
}

Macad::Occt::WNT_Window::WNT_Window(System::IntPtr theHandle, Macad::Occt::Quantity_NameOfColor theBackColor)
    : Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::WNT_Window(theHandle.ToPointer(), (::Quantity_NameOfColor)theBackColor);
}

Macad::Occt::WNT_Window::WNT_Window(System::IntPtr theHandle)
    : Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::WNT_Window(theHandle.ToPointer(), Quantity_NOC_MATRAGRAY);
}

unsigned int Macad::Occt::WNT_Window::VirtualKeyFromNative(int theKey)
{
    unsigned int _result = ::WNT_Window::VirtualKeyFromNative(theKey);
    return _result;
}

unsigned int Macad::Occt::WNT_Window::MouseKeyFlagsFromEvent(long long unsigned int theKeys)
{
    unsigned int _result = ::WNT_Window::MouseKeyFlagsFromEvent(theKeys);
    return _result;
}

unsigned int Macad::Occt::WNT_Window::MouseButtonsFromEvent(long long unsigned int theKeys)
{
    unsigned int _result = ::WNT_Window::MouseButtonsFromEvent(theKeys);
    return _result;
}

unsigned int Macad::Occt::WNT_Window::MouseKeyFlagsAsync()
{
    unsigned int _result = ::WNT_Window::MouseKeyFlagsAsync();
    return _result;
}

unsigned int Macad::Occt::WNT_Window::MouseButtonsAsync()
{
    unsigned int _result = ::WNT_Window::MouseButtonsAsync();
    return _result;
}

void Macad::Occt::WNT_Window::SetCursor(System::IntPtr theCursor)
{
    ((::WNT_Window*)_NativeInstance)->SetCursor(theCursor.ToPointer());
}

void Macad::Occt::WNT_Window::Map()
{
    ((::WNT_Window*)_NativeInstance)->Map();
}

void Macad::Occt::WNT_Window::Map(int theMapMode)
{
    ((::WNT_Window*)_NativeInstance)->Map(theMapMode);
}

void Macad::Occt::WNT_Window::Unmap()
{
    ((::WNT_Window*)_NativeInstance)->Unmap();
}

Macad::Occt::Aspect_TypeOfResize Macad::Occt::WNT_Window::DoResize()
{
    ::Aspect_TypeOfResize _result = ((::WNT_Window*)_NativeInstance)->DoResize();
    return (Macad::Occt::Aspect_TypeOfResize)_result;
}

bool Macad::Occt::WNT_Window::DoMapping()
{
    bool _result = ((::WNT_Window*)_NativeInstance)->DoMapping();
    return _result;
}

void Macad::Occt::WNT_Window::SetPos(int X, int Y, int X1, int Y1)
{
    ((::WNT_Window*)_NativeInstance)->SetPos(X, Y, X1, Y1);
}

bool Macad::Occt::WNT_Window::IsMapped()
{
    bool _result = ((::WNT_Window*)_NativeInstance)->IsMapped();
    return _result;
}

double Macad::Occt::WNT_Window::Ratio()
{
    double _result = ((::WNT_Window*)_NativeInstance)->Ratio();
    return _result;
}

void Macad::Occt::WNT_Window::Position(int% X1, int% Y1, int% X2, int% Y2)
{
    pin_ptr<int> pp_X1 = &X1;
    pin_ptr<int> pp_Y1 = &Y1;
    pin_ptr<int> pp_X2 = &X2;
    pin_ptr<int> pp_Y2 = &Y2;
    ((::WNT_Window*)_NativeInstance)->Position(*(int*)pp_X1, *(int*)pp_Y1, *(int*)pp_X2, *(int*)pp_Y2);
}

void Macad::Occt::WNT_Window::Size(int% Width, int% Height)
{
    pin_ptr<int> pp_Width = &Width;
    pin_ptr<int> pp_Height = &Height;
    ((::WNT_Window*)_NativeInstance)->Size(*(int*)pp_Width, *(int*)pp_Height);
}

System::IntPtr Macad::Occt::WNT_Window::NativeHandle()
{
    void* _result = ((::WNT_Window*)_NativeInstance)->NativeHandle();
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::WNT_Window::NativeParentHandle()
{
    void* _result = ((::WNT_Window*)_NativeInstance)->NativeParentHandle();
    return System::IntPtr(_result);
}

void Macad::Occt::WNT_Window::SetTitle(Macad::Occt::TCollection_AsciiString^ theTitle)
{
    ((::WNT_Window*)_NativeInstance)->SetTitle(*(::TCollection_AsciiString*)theTitle->NativeInstance);
}

void Macad::Occt::WNT_Window::InvalidateContent()
{
    ((::WNT_Window*)_NativeInstance)->InvalidateContent(::opencascade::handle<::Aspect_DisplayConnection>());
}

System::IntPtr Macad::Occt::WNT_Window::HWindow()
{
    void* _result = ((::WNT_Window*)_NativeInstance)->HWindow();
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::WNT_Window::HParentWindow()
{
    void* _result = ((::WNT_Window*)_NativeInstance)->HParentWindow();
    return System::IntPtr(_result);
}

int Macad::Occt::WNT_Window::RegisterRawInputDevices(unsigned int theRawDeviceMask)
{
    int _result = ((::WNT_Window*)_NativeInstance)->RegisterRawInputDevices(theRawDeviceMask);
    return _result;
}

Macad::Occt::WNT_Window^ Macad::Occt::WNT_Window::CreateDowncasted(::WNT_Window* instance)
{
    return gcnew Macad::Occt::WNT_Window( instance );
}


