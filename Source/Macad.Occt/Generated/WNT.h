// Generated wrapper code for package WNT

#pragma once

#include "Standard.h"
#include "Aspect.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  WNT_OrientationType
//---------------------------------------------------------------------
public enum class WNT_OrientationType
{
	WNT_OT_PORTRAIT = 0,
	WNT_OT_LANDSCAPE = 1
}; // enum  class WNT_OrientationType

//---------------------------------------------------------------------
//  Class  WNT_ClassDefinitionError
//---------------------------------------------------------------------
public ref class WNT_ClassDefinitionError sealed : public Macad::Occt::Standard_ConstructionError
{

#ifdef Include_WNT_ClassDefinitionError_h
public:
	Include_WNT_ClassDefinitionError_h
#endif

public:
	WNT_ClassDefinitionError(::WNT_ClassDefinitionError* nativeInstance)
		: Macad::Occt::Standard_ConstructionError( nativeInstance )
	{}

	WNT_ClassDefinitionError(::WNT_ClassDefinitionError& nativeInstance)
		: Macad::Occt::Standard_ConstructionError( nativeInstance )
	{}

	property ::WNT_ClassDefinitionError* NativeInstance
	{
		::WNT_ClassDefinitionError* get()
		{
			return static_cast<::WNT_ClassDefinitionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::WNT_ClassDefinitionError^ CreateDowncasted(::WNT_ClassDefinitionError* instance);

public:
	WNT_ClassDefinitionError();
	WNT_ClassDefinitionError(System::String^ theMessage);
	WNT_ClassDefinitionError(Macad::Occt::WNT_ClassDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::WNT_ClassDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::WNT_ClassDefinitionError^ NewInstance();
}; // class WNT_ClassDefinitionError

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
	WNT_Window(System::IntPtr aHandle, Macad::Occt::Quantity_NameOfColor aBackColor);
	WNT_Window(System::IntPtr aHandle);
	WNT_Window(Macad::Occt::WNT_Window^ parameter1);
	static unsigned int VirtualKeyFromNative(int theKey);
	/* Method skipped due to unknown mapping: unsigned int MouseKeyFlagsFromEvent(long long unsigned int theKeys, ) */
	/* Method skipped due to unknown mapping: unsigned int MouseButtonsFromEvent(long long unsigned int theKeys, ) */
	static unsigned int MouseKeyFlagsAsync();
	static unsigned int MouseButtonsAsync();
	void SetCursor(System::IntPtr aCursor);
	void Map();
	void Map(int aMapMode);
	void Unmap();
	Macad::Occt::Aspect_TypeOfResize DoResize();
	bool DoMapping();
	void SetPos(int X, int Y, int X1, int Y1);
	bool IsMapped();
	double Ratio();
	void Position(int% X1, int% Y1, int% X2, int% Y2);
	void Size(int% Width, int% Height);
	System::IntPtr HWindow();
	System::IntPtr HParentWindow();
	System::IntPtr NativeHandle();
	System::IntPtr NativeParentHandle();
	System::IntPtr NativeFBConfig();
	void SetTitle(Macad::Occt::TCollection_AsciiString^ theTitle);
	void InvalidateContent(Macad::Occt::Aspect_DisplayConnection^ theDisp);
	void InvalidateContent();
}; // class WNT_Window

}; // namespace Occt
}; // namespace Macad
