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
public ref class WNT_WClass sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::WNT_WClass^ CreateDowncasted(::WNT_WClass* instance);

public:
	WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor, System::IntPtr theIcon, Macad::Occt::TCollection_AsciiString^ theMenuName);
	WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor, System::IntPtr theIcon);
	WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor);
	WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra);
	WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra);
	WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle);
	WNT_WClass(Macad::Occt::WNT_WClass^ parameter1);
	System::IntPtr WndProc();
	Macad::Occt::TCollection_AsciiString^ Name();
	System::IntPtr Instance();
}; // class WNT_WClass

//---------------------------------------------------------------------
//  Class  WNT_Window
//---------------------------------------------------------------------
public ref class WNT_Window sealed : public Macad::Occt::Aspect_Window
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

	static Macad::Occt::WNT_Window^ CreateDowncasted(::WNT_Window* instance);

public:
	WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, DWORD theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor, System::IntPtr theParent, System::IntPtr theMenu, System::IntPtr theClientStruct);
	WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, DWORD theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor, System::IntPtr theParent, System::IntPtr theMenu);
	WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, DWORD theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor, System::IntPtr theParent);
	WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, DWORD theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor);
	WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, DWORD theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight);
	WNT_Window(System::IntPtr theHandle, Macad::Occt::Quantity_NameOfColor theBackColor);
	WNT_Window(System::IntPtr theHandle);
	WNT_Window(Macad::Occt::WNT_Window^ parameter1);
	static unsigned int VirtualKeyFromNative(int theKey);
	/* Method skipped due to unknown mapping: unsigned int MouseKeyFlagsFromEvent(long long unsigned int theKeys, ) */
	/* Method skipped due to unknown mapping: unsigned int MouseButtonsFromEvent(long long unsigned int theKeys, ) */
	static unsigned int MouseKeyFlagsAsync();
	static unsigned int MouseButtonsAsync();
	void SetCursor(System::IntPtr theCursor);
	void Map();
	void Map(int theMapMode);
	void Unmap();
	Macad::Occt::Aspect_TypeOfResize DoResize();
	bool DoMapping();
	void SetPos(int X, int Y, int X1, int Y1);
	bool IsMapped();
	double Ratio();
	void Position(int% X1, int% Y1, int% X2, int% Y2);
	void Size(int% Width, int% Height);
	System::IntPtr NativeHandle();
	System::IntPtr NativeParentHandle();
	/* Method skipped due to unknown mapping: __GLXFBConfigRec NativeFBConfig() */
	void SetTitle(Macad::Occt::TCollection_AsciiString^ theTitle);
	/* Method skipped due to unknown mapping: void InvalidateContent(Aspect_DisplayConnection theDisp, ) */
	void InvalidateContent();
	System::IntPtr HWindow();
	System::IntPtr HParentWindow();
	int RegisterRawInputDevices(unsigned int theRawDeviceMask);
	/* Method skipped due to unknown mapping: bool ProcessMessage(Aspect_WindowInputListener theListener, tagMSG theMsg, ) */
}; // class WNT_Window

}; // namespace Occt
}; // namespace Macad
