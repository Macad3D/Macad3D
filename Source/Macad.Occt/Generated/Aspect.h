// Generated wrapper code for package Aspect

#pragma once

#include "Standard.h"
#include "Aspect.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  Aspect_GridDrawMode
//---------------------------------------------------------------------
public enum class Aspect_GridDrawMode
{
	Aspect_GDM_Lines = 0,
	Aspect_GDM_Points = 1,
	Aspect_GDM_None = 2
}; // enum  class Aspect_GridDrawMode

//---------------------------------------------------------------------
//  Enum  Aspect_GraphicsLibrary
//---------------------------------------------------------------------
public enum class Aspect_GraphicsLibrary
{
	Aspect_GraphicsLibrary_OpenGL = 0,
	Aspect_GraphicsLibrary_OpenGLES = 1
}; // enum  class Aspect_GraphicsLibrary

//---------------------------------------------------------------------
//  Enum  Aspect_ColorSpace
//---------------------------------------------------------------------
public enum class Aspect_ColorSpace
{
	Aspect_ColorSpace_sRGB = 0,
	Aspect_ColorSpace_Linear = 1
}; // enum  class Aspect_ColorSpace

//---------------------------------------------------------------------
//  Enum  Aspect_XAtom
//---------------------------------------------------------------------
public enum class Aspect_XAtom
{
	Aspect_XA_DELETE_WINDOW = 0
}; // enum  class Aspect_XAtom

//---------------------------------------------------------------------
//  Enum  Aspect_Eye
//---------------------------------------------------------------------
public enum class Aspect_Eye
{
	Aspect_Eye_Left = 0,
	Aspect_Eye_Right = 1
}; // enum  class Aspect_Eye

//---------------------------------------------------------------------
//  Enum  Aspect_FillMethod
//---------------------------------------------------------------------
public enum class Aspect_FillMethod
{
	Aspect_FM_NONE = 0,
	Aspect_FM_CENTERED = 1,
	Aspect_FM_TILED = 2,
	Aspect_FM_STRETCH = 3
}; // enum  class Aspect_FillMethod

//---------------------------------------------------------------------
//  Enum  Aspect_GradientFillMethod
//---------------------------------------------------------------------
public enum class Aspect_GradientFillMethod
{
	Aspect_GFM_NONE = 0,
	Aspect_GFM_HOR = 1,
	Aspect_GFM_VER = 2,
	Aspect_GFM_DIAG1 = 3,
	Aspect_GFM_DIAG2 = 4,
	Aspect_GFM_CORNER1 = 5,
	Aspect_GFM_CORNER2 = 6,
	Aspect_GFM_CORNER3 = 7,
	Aspect_GFM_CORNER4 = 8
}; // enum  class Aspect_GradientFillMethod

//---------------------------------------------------------------------
//  Enum  Aspect_GridType
//---------------------------------------------------------------------
public enum class Aspect_GridType
{
	Aspect_GT_Rectangular = 0,
	Aspect_GT_Circular = 1
}; // enum  class Aspect_GridType

//---------------------------------------------------------------------
//  Enum  Aspect_HatchStyle
//---------------------------------------------------------------------
public enum class Aspect_HatchStyle
{
	Aspect_HS_SOLID = 0,
	Aspect_HS_HORIZONTAL = 7,
	Aspect_HS_HORIZONTAL_WIDE = 11,
	Aspect_HS_VERTICAL = 8,
	Aspect_HS_VERTICAL_WIDE = 12,
	Aspect_HS_DIAGONAL_45 = 5,
	Aspect_HS_DIAGONAL_45_WIDE = 9,
	Aspect_HS_DIAGONAL_135 = 6,
	Aspect_HS_DIAGONAL_135_WIDE = 10,
	Aspect_HS_GRID = 3,
	Aspect_HS_GRID_WIDE = 4,
	Aspect_HS_GRID_DIAGONAL = 1,
	Aspect_HS_GRID_DIAGONAL_WIDE = 2,
	Aspect_HS_NB = 13
}; // enum  class Aspect_HatchStyle

//---------------------------------------------------------------------
//  Enum  Aspect_InteriorStyle
//---------------------------------------------------------------------
public enum class Aspect_InteriorStyle
{
	Aspect_IS_EMPTY = -1,
	Aspect_IS_SOLID = 0,
	Aspect_IS_HATCH = 1,
	Aspect_IS_HIDDENLINE = 2,
	Aspect_IS_POINT = 3,
	Aspect_IS_HOLLOW = -1
}; // enum  class Aspect_InteriorStyle

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfResize
//---------------------------------------------------------------------
public enum class Aspect_TypeOfResize
{
	Aspect_TOR_UNKNOWN = 0,
	Aspect_TOR_NO_BORDER = 1,
	Aspect_TOR_TOP_BORDER = 2,
	Aspect_TOR_RIGHT_BORDER = 3,
	Aspect_TOR_BOTTOM_BORDER = 4,
	Aspect_TOR_LEFT_BORDER = 5,
	Aspect_TOR_TOP_AND_RIGHT_BORDER = 6,
	Aspect_TOR_RIGHT_AND_BOTTOM_BORDER = 7,
	Aspect_TOR_BOTTOM_AND_LEFT_BORDER = 8,
	Aspect_TOR_LEFT_AND_TOP_BORDER = 9
}; // enum  class Aspect_TypeOfResize

//---------------------------------------------------------------------
//  Enum  Aspect_XRActionType
//---------------------------------------------------------------------
public enum class Aspect_XRActionType
{
	Aspect_XRActionType_InputDigital = 0,
	Aspect_XRActionType_InputAnalog = 1,
	Aspect_XRActionType_InputPose = 2,
	Aspect_XRActionType_InputSkeletal = 3,
	Aspect_XRActionType_OutputHaptic = 4
}; // enum  class Aspect_XRActionType

//---------------------------------------------------------------------
//  Enum  Aspect_XRGenericAction
//---------------------------------------------------------------------
public enum class Aspect_XRGenericAction
{
	Aspect_XRGenericAction_IsHeadsetOn = 0,
	Aspect_XRGenericAction_InputAppMenu = 1,
	Aspect_XRGenericAction_InputSysMenu = 2,
	Aspect_XRGenericAction_InputTriggerPull = 3,
	Aspect_XRGenericAction_InputTriggerClick = 4,
	Aspect_XRGenericAction_InputGripClick = 5,
	Aspect_XRGenericAction_InputTrackPadPosition = 6,
	Aspect_XRGenericAction_InputTrackPadTouch = 7,
	Aspect_XRGenericAction_InputTrackPadClick = 8,
	Aspect_XRGenericAction_InputThumbstickPosition = 9,
	Aspect_XRGenericAction_InputThumbstickTouch = 10,
	Aspect_XRGenericAction_InputThumbstickClick = 11,
	Aspect_XRGenericAction_InputPoseBase = 12,
	Aspect_XRGenericAction_InputPoseFront = 13,
	Aspect_XRGenericAction_InputPoseHandGrip = 14,
	Aspect_XRGenericAction_InputPoseFingerTip = 15,
	Aspect_XRGenericAction_OutputHaptic = 16
}; // enum  class Aspect_XRGenericAction

//---------------------------------------------------------------------
//  Enum  Aspect_XRTrackedDeviceRole
//---------------------------------------------------------------------
public enum class Aspect_XRTrackedDeviceRole
{
	Aspect_XRTrackedDeviceRole_Head = 0,
	Aspect_XRTrackedDeviceRole_LeftHand = 1,
	Aspect_XRTrackedDeviceRole_RightHand = 2,
	Aspect_XRTrackedDeviceRole_Other = 3
}; // enum  class Aspect_XRTrackedDeviceRole

//---------------------------------------------------------------------
//  Enum  Aspect_PolygonOffsetMode
//---------------------------------------------------------------------
public enum class Aspect_PolygonOffsetMode
{
	Aspect_POM_Off = 0,
	Aspect_POM_Fill = 1,
	Aspect_POM_Line = 2,
	Aspect_POM_Point = 4,
	Aspect_POM_All = 7,
	Aspect_POM_None = 8,
	Aspect_POM_Mask = 15
}; // enum  class Aspect_PolygonOffsetMode

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfColorScaleData
//---------------------------------------------------------------------
public enum class Aspect_TypeOfColorScaleData
{
	Aspect_TOCSD_AUTO = 0,
	Aspect_TOCSD_USER = 1
}; // enum  class Aspect_TypeOfColorScaleData

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfColorScaleOrientation
//---------------------------------------------------------------------
public enum class Aspect_TypeOfColorScaleOrientation
{
	Aspect_TOCSO_NONE = 0,
	Aspect_TOCSO_LEFT = 1,
	Aspect_TOCSO_RIGHT = 2,
	Aspect_TOCSO_CENTER = 3
}; // enum  class Aspect_TypeOfColorScaleOrientation

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfColorScalePosition
//---------------------------------------------------------------------
public enum class Aspect_TypeOfColorScalePosition
{
	Aspect_TOCSP_NONE = 0,
	Aspect_TOCSP_LEFT = 1,
	Aspect_TOCSP_RIGHT = 2,
	Aspect_TOCSP_CENTER = 3
}; // enum  class Aspect_TypeOfColorScalePosition

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfDeflection
//---------------------------------------------------------------------
public enum class Aspect_TypeOfDeflection
{
	Aspect_TOD_RELATIVE = 0,
	Aspect_TOD_ABSOLUTE = 1
}; // enum  class Aspect_TypeOfDeflection

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfDisplayText
//---------------------------------------------------------------------
public enum class Aspect_TypeOfDisplayText
{
	Aspect_TODT_NORMAL = 0,
	Aspect_TODT_SUBTITLE = 1,
	Aspect_TODT_DEKALE = 2,
	Aspect_TODT_BLEND = 3,
	Aspect_TODT_DIMENSION = 4,
	Aspect_TODT_SHADOW = 5
}; // enum  class Aspect_TypeOfDisplayText

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfFacingModel
//---------------------------------------------------------------------
public enum class Aspect_TypeOfFacingModel
{
	Aspect_TOFM_BOTH_SIDE = 0,
	Aspect_TOFM_BACK_SIDE = 1,
	Aspect_TOFM_FRONT_SIDE = 2
}; // enum  class Aspect_TypeOfFacingModel

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfHighlightMethod
//---------------------------------------------------------------------
public enum class Aspect_TypeOfHighlightMethod
{
	Aspect_TOHM_COLOR = 0,
	Aspect_TOHM_BOUNDBOX = 1
}; // enum  class Aspect_TypeOfHighlightMethod

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfLine
//---------------------------------------------------------------------
public enum class Aspect_TypeOfLine
{
	Aspect_TOL_EMPTY = -1,
	Aspect_TOL_SOLID = 0,
	Aspect_TOL_DASH = 1,
	Aspect_TOL_DOT = 2,
	Aspect_TOL_DOTDASH = 3,
	Aspect_TOL_USERDEFINED = 4
}; // enum  class Aspect_TypeOfLine

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfMarker
//---------------------------------------------------------------------
public enum class Aspect_TypeOfMarker
{
	Aspect_TOM_EMPTY = -1,
	Aspect_TOM_POINT = 0,
	Aspect_TOM_PLUS = 1,
	Aspect_TOM_STAR = 2,
	Aspect_TOM_X = 3,
	Aspect_TOM_O = 4,
	Aspect_TOM_O_POINT = 5,
	Aspect_TOM_O_PLUS = 6,
	Aspect_TOM_O_STAR = 7,
	Aspect_TOM_O_X = 8,
	Aspect_TOM_RING1 = 9,
	Aspect_TOM_RING2 = 10,
	Aspect_TOM_RING3 = 11,
	Aspect_TOM_BALL = 12,
	Aspect_TOM_USERDEFINED = 13
}; // enum  class Aspect_TypeOfMarker

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfStyleText
//---------------------------------------------------------------------
public enum class Aspect_TypeOfStyleText
{
	Aspect_TOST_NORMAL = 0,
	Aspect_TOST_ANNOTATION = 1
}; // enum  class Aspect_TypeOfStyleText

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfTriedronPosition
//---------------------------------------------------------------------
public enum class Aspect_TypeOfTriedronPosition
{
	Aspect_TOTP_CENTER = 0,
	Aspect_TOTP_TOP = 1,
	Aspect_TOTP_BOTTOM = 2,
	Aspect_TOTP_LEFT = 4,
	Aspect_TOTP_RIGHT = 8,
	Aspect_TOTP_LEFT_LOWER = 6,
	Aspect_TOTP_LEFT_UPPER = 5,
	Aspect_TOTP_RIGHT_LOWER = 10,
	Aspect_TOTP_RIGHT_UPPER = 9
}; // enum  class Aspect_TypeOfTriedronPosition

//---------------------------------------------------------------------
//  Enum  Aspect_VKeyBasic
//---------------------------------------------------------------------
public enum class Aspect_VKeyBasic
{
	Aspect_VKey_UNKNOWN = 0,
	Aspect_VKey_A = 1,
	Aspect_VKey_B = 2,
	Aspect_VKey_C = 3,
	Aspect_VKey_D = 4,
	Aspect_VKey_E = 5,
	Aspect_VKey_F = 6,
	Aspect_VKey_G = 7,
	Aspect_VKey_H = 8,
	Aspect_VKey_I = 9,
	Aspect_VKey_J = 10,
	Aspect_VKey_K = 11,
	Aspect_VKey_L = 12,
	Aspect_VKey_M = 13,
	Aspect_VKey_N = 14,
	Aspect_VKey_O = 15,
	Aspect_VKey_P = 16,
	Aspect_VKey_Q = 17,
	Aspect_VKey_R = 18,
	Aspect_VKey_S = 19,
	Aspect_VKey_T = 20,
	Aspect_VKey_U = 21,
	Aspect_VKey_V = 22,
	Aspect_VKey_W = 23,
	Aspect_VKey_X = 24,
	Aspect_VKey_Y = 25,
	Aspect_VKey_Z = 26,
	Aspect_VKey_0 = 27,
	Aspect_VKey_1 = 28,
	Aspect_VKey_2 = 29,
	Aspect_VKey_3 = 30,
	Aspect_VKey_4 = 31,
	Aspect_VKey_5 = 32,
	Aspect_VKey_6 = 33,
	Aspect_VKey_7 = 34,
	Aspect_VKey_8 = 35,
	Aspect_VKey_9 = 36,
	Aspect_VKey_F1 = 37,
	Aspect_VKey_F2 = 38,
	Aspect_VKey_F3 = 39,
	Aspect_VKey_F4 = 40,
	Aspect_VKey_F5 = 41,
	Aspect_VKey_F6 = 42,
	Aspect_VKey_F7 = 43,
	Aspect_VKey_F8 = 44,
	Aspect_VKey_F9 = 45,
	Aspect_VKey_F10 = 46,
	Aspect_VKey_F11 = 47,
	Aspect_VKey_F12 = 48,
	Aspect_VKey_Up = 49,
	Aspect_VKey_Down = 50,
	Aspect_VKey_Left = 51,
	Aspect_VKey_Right = 52,
	Aspect_VKey_Plus = 53,
	Aspect_VKey_Minus = 54,
	Aspect_VKey_Equal = 55,
	Aspect_VKey_PageUp = 56,
	Aspect_VKey_PageDown = 57,
	Aspect_VKey_Home = 58,
	Aspect_VKey_End = 59,
	Aspect_VKey_Escape = 60,
	Aspect_VKey_Back = 61,
	Aspect_VKey_Enter = 62,
	Aspect_VKey_Backspace = 63,
	Aspect_VKey_Space = 64,
	Aspect_VKey_Delete = 65,
	Aspect_VKey_Tilde = 66,
	Aspect_VKey_Tab = 67,
	Aspect_VKey_Comma = 68,
	Aspect_VKey_Period = 69,
	Aspect_VKey_Semicolon = 70,
	Aspect_VKey_Slash = 71,
	Aspect_VKey_BracketLeft = 72,
	Aspect_VKey_Backslash = 73,
	Aspect_VKey_BracketRight = 74,
	Aspect_VKey_Apostrophe = 75,
	Aspect_VKey_Numlock = 76,
	Aspect_VKey_Scroll = 77,
	Aspect_VKey_Numpad0 = 78,
	Aspect_VKey_Numpad1 = 79,
	Aspect_VKey_Numpad2 = 80,
	Aspect_VKey_Numpad3 = 81,
	Aspect_VKey_Numpad4 = 82,
	Aspect_VKey_Numpad5 = 83,
	Aspect_VKey_Numpad6 = 84,
	Aspect_VKey_Numpad7 = 85,
	Aspect_VKey_Numpad8 = 86,
	Aspect_VKey_Numpad9 = 87,
	Aspect_VKey_NumpadMultiply = 88,
	Aspect_VKey_NumpadAdd = 89,
	Aspect_VKey_NumpadSubtract = 90,
	Aspect_VKey_NumpadDivide = 91,
	Aspect_VKey_MediaNextTrack = 92,
	Aspect_VKey_MediaPreviousTrack = 93,
	Aspect_VKey_MediaStop = 94,
	Aspect_VKey_MediaPlayPause = 95,
	Aspect_VKey_VolumeMute = 96,
	Aspect_VKey_VolumeDown = 97,
	Aspect_VKey_VolumeUp = 98,
	Aspect_VKey_BrowserBack = 99,
	Aspect_VKey_BrowserForward = 100,
	Aspect_VKey_BrowserRefresh = 101,
	Aspect_VKey_BrowserStop = 102,
	Aspect_VKey_BrowserSearch = 103,
	Aspect_VKey_BrowserFavorites = 104,
	Aspect_VKey_BrowserHome = 105,
	Aspect_VKey_ViewTop = 106,
	Aspect_VKey_ViewBottom = 107,
	Aspect_VKey_ViewLeft = 108,
	Aspect_VKey_ViewRight = 109,
	Aspect_VKey_ViewFront = 110,
	Aspect_VKey_ViewBack = 111,
	Aspect_VKey_ViewAxoLeftProj = 112,
	Aspect_VKey_ViewAxoRightProj = 113,
	Aspect_VKey_ViewFitAll = 114,
	Aspect_VKey_ViewRoll90CW = 115,
	Aspect_VKey_ViewRoll90CCW = 116,
	Aspect_VKey_ViewSwitchRotate = 117,
	Aspect_VKey_Shift = 118,
	Aspect_VKey_Control = 119,
	Aspect_VKey_Alt = 120,
	Aspect_VKey_Menu = 121,
	Aspect_VKey_Meta = 122,
	Aspect_VKey_NavInteract = 123,
	Aspect_VKey_NavForward = 124,
	Aspect_VKey_NavBackward = 125,
	Aspect_VKey_NavSlideLeft = 126,
	Aspect_VKey_NavSlideRight = 127,
	Aspect_VKey_NavSlideUp = 128,
	Aspect_VKey_NavSlideDown = 129,
	Aspect_VKey_NavRollCCW = 130,
	Aspect_VKey_NavRollCW = 131,
	Aspect_VKey_NavLookLeft = 132,
	Aspect_VKey_NavLookRight = 133,
	Aspect_VKey_NavLookUp = 134,
	Aspect_VKey_NavLookDown = 135,
	Aspect_VKey_NavCrouch = 136,
	Aspect_VKey_NavJump = 137,
	Aspect_VKey_NavThrustForward = 138,
	Aspect_VKey_NavThrustBackward = 139,
	Aspect_VKey_NavThrustStop = 140,
	Aspect_VKey_NavSpeedIncrease = 141,
	Aspect_VKey_NavSpeedDecrease = 142
}; // enum  class Aspect_VKeyBasic

//---------------------------------------------------------------------
//  Enum  Aspect_WidthOfLine
//---------------------------------------------------------------------
public enum class Aspect_WidthOfLine
{
	Aspect_WOL_THIN = 0,
	Aspect_WOL_MEDIUM = 1,
	Aspect_WOL_THICK = 2,
	Aspect_WOL_VERYTHICK = 3,
	Aspect_WOL_USERDEFINED = 4
}; // enum  class Aspect_WidthOfLine

//---------------------------------------------------------------------
//  Class  Aspect_XRActionMap
//---------------------------------------------------------------------
public ref class Aspect_XRActionMap sealed : public BaseClass<::Aspect_XRActionMap>
{

#ifdef Include_Aspect_XRActionMap_h
public:
	Include_Aspect_XRActionMap_h
#endif

public:
	Aspect_XRActionMap(::Aspect_XRActionMap* nativeInstance)
		: BaseClass<::Aspect_XRActionMap>( nativeInstance, true )
	{}

	Aspect_XRActionMap(::Aspect_XRActionMap& nativeInstance)
		: BaseClass<::Aspect_XRActionMap>( &nativeInstance, false )
	{}

	property ::Aspect_XRActionMap* NativeInstance
	{
		::Aspect_XRActionMap* get()
		{
			return static_cast<::Aspect_XRActionMap*>(_NativeInstance);
		}
	}

public:
	Aspect_XRActionMap();
	Aspect_XRActionMap(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Aspect_XRActionMap(int theNbBuckets);
	Aspect_XRActionMap(Macad::Occt::Aspect_XRActionMap^ theOther);
	void Exchange(Macad::Occt::Aspect_XRActionMap^ theOther);
	int Add(Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::Aspect_XRAction^ theItem);
	bool Contains(Macad::Occt::TCollection_AsciiString^ theKey1);
	void Substitute(int theIndex, Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::Aspect_XRAction^ theItem);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	void RemoveKey(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::TCollection_AsciiString^ FindKey(int theIndex);
	Macad::Occt::Aspect_XRAction^ FindFromIndex(int theIndex);
	Macad::Occt::Aspect_XRAction^ ChangeFromIndex(int theIndex);
	int FindIndex(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::Aspect_XRAction^ FindFromKey(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::Aspect_XRAction^ ChangeFromKey(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::Aspect_XRAction^ Seek(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::Aspect_XRAction^ ChangeSeek(Macad::Occt::TCollection_AsciiString^ theKey1);
	bool FindFromKey(Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::Aspect_XRAction^ theValue);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class Aspect_XRActionMap

//---------------------------------------------------------------------
//  Class  Aspect_XRActionSetMap
//---------------------------------------------------------------------
public ref class Aspect_XRActionSetMap sealed : public BaseClass<::Aspect_XRActionSetMap>
{

#ifdef Include_Aspect_XRActionSetMap_h
public:
	Include_Aspect_XRActionSetMap_h
#endif

public:
	Aspect_XRActionSetMap(::Aspect_XRActionSetMap* nativeInstance)
		: BaseClass<::Aspect_XRActionSetMap>( nativeInstance, true )
	{}

	Aspect_XRActionSetMap(::Aspect_XRActionSetMap& nativeInstance)
		: BaseClass<::Aspect_XRActionSetMap>( &nativeInstance, false )
	{}

	property ::Aspect_XRActionSetMap* NativeInstance
	{
		::Aspect_XRActionSetMap* get()
		{
			return static_cast<::Aspect_XRActionSetMap*>(_NativeInstance);
		}
	}

public:
	Aspect_XRActionSetMap();
	Aspect_XRActionSetMap(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Aspect_XRActionSetMap(int theNbBuckets);
	Aspect_XRActionSetMap(Macad::Occt::Aspect_XRActionSetMap^ theOther);
	void Exchange(Macad::Occt::Aspect_XRActionSetMap^ theOther);
	int Add(Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::Aspect_XRActionSet^ theItem);
	bool Contains(Macad::Occt::TCollection_AsciiString^ theKey1);
	void Substitute(int theIndex, Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::Aspect_XRActionSet^ theItem);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	void RemoveKey(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::TCollection_AsciiString^ FindKey(int theIndex);
	Macad::Occt::Aspect_XRActionSet^ FindFromIndex(int theIndex);
	Macad::Occt::Aspect_XRActionSet^ ChangeFromIndex(int theIndex);
	int FindIndex(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::Aspect_XRActionSet^ FindFromKey(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::Aspect_XRActionSet^ ChangeFromKey(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::Aspect_XRActionSet^ Seek(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::Aspect_XRActionSet^ ChangeSeek(Macad::Occt::TCollection_AsciiString^ theKey1);
	bool FindFromKey(Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::Aspect_XRActionSet^ theValue);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class Aspect_XRActionSetMap

//---------------------------------------------------------------------
//  Class  Aspect_TrackedDevicePoseArray
//---------------------------------------------------------------------
public ref class Aspect_TrackedDevicePoseArray sealed : public BaseClass<::Aspect_TrackedDevicePoseArray>
{

#ifdef Include_Aspect_TrackedDevicePoseArray_h
public:
	Include_Aspect_TrackedDevicePoseArray_h
#endif

public:
	Aspect_TrackedDevicePoseArray(::Aspect_TrackedDevicePoseArray* nativeInstance)
		: BaseClass<::Aspect_TrackedDevicePoseArray>( nativeInstance, true )
	{}

	Aspect_TrackedDevicePoseArray(::Aspect_TrackedDevicePoseArray& nativeInstance)
		: BaseClass<::Aspect_TrackedDevicePoseArray>( &nativeInstance, false )
	{}

	property ::Aspect_TrackedDevicePoseArray* NativeInstance
	{
		::Aspect_TrackedDevicePoseArray* get()
		{
			return static_cast<::Aspect_TrackedDevicePoseArray*>(_NativeInstance);
		}
	}

public:
	Aspect_TrackedDevicePoseArray();
	Aspect_TrackedDevicePoseArray(int theLower, int theUpper);
	Aspect_TrackedDevicePoseArray(Macad::Occt::Aspect_TrackedDevicePoseArray^ theOther);
	Aspect_TrackedDevicePoseArray(Macad::Occt::Aspect_TrackedDevicePose^ theBegin, int theLower, int theUpper);
	void Init(Macad::Occt::Aspect_TrackedDevicePose^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::Aspect_TrackedDevicePoseArray^ Assign(Macad::Occt::Aspect_TrackedDevicePoseArray^ theOther);
	Macad::Occt::Aspect_TrackedDevicePoseArray^ Move(Macad::Occt::Aspect_TrackedDevicePoseArray^ theOther);
	Macad::Occt::Aspect_TrackedDevicePose^ First();
	Macad::Occt::Aspect_TrackedDevicePose^ ChangeFirst();
	Macad::Occt::Aspect_TrackedDevicePose^ Last();
	Macad::Occt::Aspect_TrackedDevicePose^ ChangeLast();
	Macad::Occt::Aspect_TrackedDevicePose^ Value(int theIndex);
	Macad::Occt::Aspect_TrackedDevicePose^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Aspect_TrackedDevicePose^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class Aspect_TrackedDevicePoseArray

//---------------------------------------------------------------------
//  Class  Aspect_SequenceOfColor
//---------------------------------------------------------------------
public ref class Aspect_SequenceOfColor sealed : public BaseClass<::Aspect_SequenceOfColor>
{

#ifdef Include_Aspect_SequenceOfColor_h
public:
	Include_Aspect_SequenceOfColor_h
#endif

public:
	Aspect_SequenceOfColor(::Aspect_SequenceOfColor* nativeInstance)
		: BaseClass<::Aspect_SequenceOfColor>( nativeInstance, true )
	{}

	Aspect_SequenceOfColor(::Aspect_SequenceOfColor& nativeInstance)
		: BaseClass<::Aspect_SequenceOfColor>( &nativeInstance, false )
	{}

	property ::Aspect_SequenceOfColor* NativeInstance
	{
		::Aspect_SequenceOfColor* get()
		{
			return static_cast<::Aspect_SequenceOfColor*>(_NativeInstance);
		}
	}

public:
	Aspect_SequenceOfColor();
	Aspect_SequenceOfColor(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Aspect_SequenceOfColor(Macad::Occt::Aspect_SequenceOfColor^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::Aspect_SequenceOfColor^ Assign(Macad::Occt::Aspect_SequenceOfColor^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Quantity_Color^ theItem);
	void Append(Macad::Occt::Aspect_SequenceOfColor^ theSeq);
	void Prepend(Macad::Occt::Quantity_Color^ theItem);
	void Prepend(Macad::Occt::Aspect_SequenceOfColor^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Quantity_Color^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Quantity_Color theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Quantity_Color^ theItem);
	void Split(int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq);
	Macad::Occt::Quantity_Color^ First();
	Macad::Occt::Quantity_Color^ ChangeFirst();
	Macad::Occt::Quantity_Color^ Last();
	Macad::Occt::Quantity_Color^ ChangeLast();
	Macad::Occt::Quantity_Color^ Value(int theIndex);
	Macad::Occt::Quantity_Color^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Quantity_Color^ theItem);
}; // class Aspect_SequenceOfColor

//---------------------------------------------------------------------
//  Class  Aspect_XRAnalogActionData
//---------------------------------------------------------------------
public ref class Aspect_XRAnalogActionData sealed : public BaseClass<::Aspect_XRAnalogActionData>
{

#ifdef Include_Aspect_XRAnalogActionData_h
public:
	Include_Aspect_XRAnalogActionData_h
#endif

public:
	Aspect_XRAnalogActionData(::Aspect_XRAnalogActionData* nativeInstance)
		: BaseClass<::Aspect_XRAnalogActionData>( nativeInstance, true )
	{}

	Aspect_XRAnalogActionData(::Aspect_XRAnalogActionData& nativeInstance)
		: BaseClass<::Aspect_XRAnalogActionData>( &nativeInstance, false )
	{}

	property ::Aspect_XRAnalogActionData* NativeInstance
	{
		::Aspect_XRAnalogActionData* get()
		{
			return static_cast<::Aspect_XRAnalogActionData*>(_NativeInstance);
		}
	}

public:
	Aspect_XRAnalogActionData();
	Aspect_XRAnalogActionData(Macad::Occt::Aspect_XRAnalogActionData^ parameter1);
	bool IsChanged();
}; // class Aspect_XRAnalogActionData

//---------------------------------------------------------------------
//  Class  Aspect_XRDigitalActionData
//---------------------------------------------------------------------
public ref class Aspect_XRDigitalActionData sealed : public BaseClass<::Aspect_XRDigitalActionData>
{

#ifdef Include_Aspect_XRDigitalActionData_h
public:
	Include_Aspect_XRDigitalActionData_h
#endif

public:
	Aspect_XRDigitalActionData(::Aspect_XRDigitalActionData* nativeInstance)
		: BaseClass<::Aspect_XRDigitalActionData>( nativeInstance, true )
	{}

	Aspect_XRDigitalActionData(::Aspect_XRDigitalActionData& nativeInstance)
		: BaseClass<::Aspect_XRDigitalActionData>( &nativeInstance, false )
	{}

	property ::Aspect_XRDigitalActionData* NativeInstance
	{
		::Aspect_XRDigitalActionData* get()
		{
			return static_cast<::Aspect_XRDigitalActionData*>(_NativeInstance);
		}
	}

public:
	Aspect_XRDigitalActionData();
	Aspect_XRDigitalActionData(Macad::Occt::Aspect_XRDigitalActionData^ parameter1);
}; // class Aspect_XRDigitalActionData

//---------------------------------------------------------------------
//  Class  Aspect_XRHapticActionData
//---------------------------------------------------------------------
public ref class Aspect_XRHapticActionData sealed : public BaseClass<::Aspect_XRHapticActionData>
{

#ifdef Include_Aspect_XRHapticActionData_h
public:
	Include_Aspect_XRHapticActionData_h
#endif

public:
	Aspect_XRHapticActionData(::Aspect_XRHapticActionData* nativeInstance)
		: BaseClass<::Aspect_XRHapticActionData>( nativeInstance, true )
	{}

	Aspect_XRHapticActionData(::Aspect_XRHapticActionData& nativeInstance)
		: BaseClass<::Aspect_XRHapticActionData>( &nativeInstance, false )
	{}

	property ::Aspect_XRHapticActionData* NativeInstance
	{
		::Aspect_XRHapticActionData* get()
		{
			return static_cast<::Aspect_XRHapticActionData*>(_NativeInstance);
		}
	}

public:
	Aspect_XRHapticActionData();
	Aspect_XRHapticActionData(Macad::Occt::Aspect_XRHapticActionData^ parameter1);
	bool IsValid();
}; // class Aspect_XRHapticActionData

//---------------------------------------------------------------------
//  Class  Aspect_TrackedDevicePose
//---------------------------------------------------------------------
public ref class Aspect_TrackedDevicePose sealed : public BaseClass<::Aspect_TrackedDevicePose>
{

#ifdef Include_Aspect_TrackedDevicePose_h
public:
	Include_Aspect_TrackedDevicePose_h
#endif

public:
	Aspect_TrackedDevicePose(::Aspect_TrackedDevicePose* nativeInstance)
		: BaseClass<::Aspect_TrackedDevicePose>( nativeInstance, true )
	{}

	Aspect_TrackedDevicePose(::Aspect_TrackedDevicePose& nativeInstance)
		: BaseClass<::Aspect_TrackedDevicePose>( &nativeInstance, false )
	{}

	property ::Aspect_TrackedDevicePose* NativeInstance
	{
		::Aspect_TrackedDevicePose* get()
		{
			return static_cast<::Aspect_TrackedDevicePose*>(_NativeInstance);
		}
	}

public:
	Aspect_TrackedDevicePose();
	Aspect_TrackedDevicePose(Macad::Occt::Aspect_TrackedDevicePose^ parameter1);
}; // class Aspect_TrackedDevicePose

//---------------------------------------------------------------------
//  Class  Aspect_XRPoseActionData
//---------------------------------------------------------------------
public ref class Aspect_XRPoseActionData sealed : public BaseClass<::Aspect_XRPoseActionData>
{

#ifdef Include_Aspect_XRPoseActionData_h
public:
	Include_Aspect_XRPoseActionData_h
#endif

public:
	Aspect_XRPoseActionData(::Aspect_XRPoseActionData* nativeInstance)
		: BaseClass<::Aspect_XRPoseActionData>( nativeInstance, true )
	{}

	Aspect_XRPoseActionData(::Aspect_XRPoseActionData& nativeInstance)
		: BaseClass<::Aspect_XRPoseActionData>( &nativeInstance, false )
	{}

	property ::Aspect_XRPoseActionData* NativeInstance
	{
		::Aspect_XRPoseActionData* get()
		{
			return static_cast<::Aspect_XRPoseActionData*>(_NativeInstance);
		}
	}

public:
	Aspect_XRPoseActionData();
	Aspect_XRPoseActionData(Macad::Occt::Aspect_XRPoseActionData^ parameter1);
}; // class Aspect_XRPoseActionData

//---------------------------------------------------------------------
//  Class  Aspect_ScrollDelta
//---------------------------------------------------------------------
public ref class Aspect_ScrollDelta sealed : public BaseClass<::Aspect_ScrollDelta>
{

#ifdef Include_Aspect_ScrollDelta_h
public:
	Include_Aspect_ScrollDelta_h
#endif

public:
	Aspect_ScrollDelta(::Aspect_ScrollDelta* nativeInstance)
		: BaseClass<::Aspect_ScrollDelta>( nativeInstance, true )
	{}

	Aspect_ScrollDelta(::Aspect_ScrollDelta& nativeInstance)
		: BaseClass<::Aspect_ScrollDelta>( &nativeInstance, false )
	{}

	property ::Aspect_ScrollDelta* NativeInstance
	{
		::Aspect_ScrollDelta* get()
		{
			return static_cast<::Aspect_ScrollDelta*>(_NativeInstance);
		}
	}

public:
	Aspect_ScrollDelta();
	/* Method skipped due to unknown mapping: void Aspect_ScrollDelta(NCollection_Vec2<int> thePnt, Standard_Real theValue, unsigned int theFlags, ) */
	/* Method skipped due to unknown mapping: void Aspect_ScrollDelta(NCollection_Vec2<int> thePnt, Standard_Real theValue, unsigned int theFlags, ) */
	Aspect_ScrollDelta(double theValue, unsigned int theFlags);
	Aspect_ScrollDelta(double theValue);
	Aspect_ScrollDelta(Macad::Occt::Aspect_ScrollDelta^ parameter1);
	bool HasPoint();
	void ResetPoint();
}; // class Aspect_ScrollDelta

//---------------------------------------------------------------------
//  Class  _xwd_file_header
//---------------------------------------------------------------------
public ref class _xwd_file_header sealed : public BaseClass<::_xwd_file_header>
{

#ifdef Include__xwd_file_header_h
public:
	Include__xwd_file_header_h
#endif

public:
	_xwd_file_header(::_xwd_file_header* nativeInstance)
		: BaseClass<::_xwd_file_header>( nativeInstance, true )
	{}

	_xwd_file_header(::_xwd_file_header& nativeInstance)
		: BaseClass<::_xwd_file_header>( &nativeInstance, false )
	{}

	property ::_xwd_file_header* NativeInstance
	{
		::_xwd_file_header* get()
		{
			return static_cast<::_xwd_file_header*>(_NativeInstance);
		}
	}

public:
	_xwd_file_header();
	_xwd_file_header(Macad::Occt::_xwd_file_header^ parameter1);
}; // class _xwd_file_header

//---------------------------------------------------------------------
//  Class  _xcolor
//---------------------------------------------------------------------
public ref class _xcolor sealed : public BaseClass<::_xcolor>
{

#ifdef Include__xcolor_h
public:
	Include__xcolor_h
#endif

public:
	_xcolor(::_xcolor* nativeInstance)
		: BaseClass<::_xcolor>( nativeInstance, true )
	{}

	_xcolor(::_xcolor& nativeInstance)
		: BaseClass<::_xcolor>( &nativeInstance, false )
	{}

	property ::_xcolor* NativeInstance
	{
		::_xcolor* get()
		{
			return static_cast<::_xcolor*>(_NativeInstance);
		}
	}

public:
	_xcolor();
	_xcolor(Macad::Occt::_xcolor^ parameter1);
}; // class _xcolor

//---------------------------------------------------------------------
//  Class  Aspect_AspectFillAreaDefinitionError
//---------------------------------------------------------------------
public ref class Aspect_AspectFillAreaDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Aspect_AspectFillAreaDefinitionError_h
public:
	Include_Aspect_AspectFillAreaDefinitionError_h
#endif

public:
	Aspect_AspectFillAreaDefinitionError(::Aspect_AspectFillAreaDefinitionError* nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	Aspect_AspectFillAreaDefinitionError(::Aspect_AspectFillAreaDefinitionError& nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	property ::Aspect_AspectFillAreaDefinitionError* NativeInstance
	{
		::Aspect_AspectFillAreaDefinitionError* get()
		{
			return static_cast<::Aspect_AspectFillAreaDefinitionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_AspectFillAreaDefinitionError^ CreateDowncasted(::Aspect_AspectFillAreaDefinitionError* instance);

public:
	Aspect_AspectFillAreaDefinitionError();
	Aspect_AspectFillAreaDefinitionError(System::String^ theMessage);
	Aspect_AspectFillAreaDefinitionError(Macad::Occt::Aspect_AspectFillAreaDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_AspectFillAreaDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_AspectFillAreaDefinitionError^ NewInstance();
}; // class Aspect_AspectFillAreaDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_AspectLineDefinitionError
//---------------------------------------------------------------------
public ref class Aspect_AspectLineDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Aspect_AspectLineDefinitionError_h
public:
	Include_Aspect_AspectLineDefinitionError_h
#endif

public:
	Aspect_AspectLineDefinitionError(::Aspect_AspectLineDefinitionError* nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	Aspect_AspectLineDefinitionError(::Aspect_AspectLineDefinitionError& nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	property ::Aspect_AspectLineDefinitionError* NativeInstance
	{
		::Aspect_AspectLineDefinitionError* get()
		{
			return static_cast<::Aspect_AspectLineDefinitionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_AspectLineDefinitionError^ CreateDowncasted(::Aspect_AspectLineDefinitionError* instance);

public:
	Aspect_AspectLineDefinitionError();
	Aspect_AspectLineDefinitionError(System::String^ theMessage);
	Aspect_AspectLineDefinitionError(Macad::Occt::Aspect_AspectLineDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_AspectLineDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_AspectLineDefinitionError^ NewInstance();
}; // class Aspect_AspectLineDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_AspectMarkerDefinitionError
//---------------------------------------------------------------------
public ref class Aspect_AspectMarkerDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Aspect_AspectMarkerDefinitionError_h
public:
	Include_Aspect_AspectMarkerDefinitionError_h
#endif

public:
	Aspect_AspectMarkerDefinitionError(::Aspect_AspectMarkerDefinitionError* nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	Aspect_AspectMarkerDefinitionError(::Aspect_AspectMarkerDefinitionError& nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	property ::Aspect_AspectMarkerDefinitionError* NativeInstance
	{
		::Aspect_AspectMarkerDefinitionError* get()
		{
			return static_cast<::Aspect_AspectMarkerDefinitionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_AspectMarkerDefinitionError^ CreateDowncasted(::Aspect_AspectMarkerDefinitionError* instance);

public:
	Aspect_AspectMarkerDefinitionError();
	Aspect_AspectMarkerDefinitionError(System::String^ theMessage);
	Aspect_AspectMarkerDefinitionError(Macad::Occt::Aspect_AspectMarkerDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_AspectMarkerDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_AspectMarkerDefinitionError^ NewInstance();
}; // class Aspect_AspectMarkerDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_Background
//---------------------------------------------------------------------
public ref class Aspect_Background : public BaseClass<::Aspect_Background>
{

#ifdef Include_Aspect_Background_h
public:
	Include_Aspect_Background_h
#endif

protected:
	Aspect_Background(InitMode init)
		: BaseClass<::Aspect_Background>( init )
	{}

public:
	Aspect_Background(::Aspect_Background* nativeInstance)
		: BaseClass<::Aspect_Background>( nativeInstance, true )
	{}

	Aspect_Background(::Aspect_Background& nativeInstance)
		: BaseClass<::Aspect_Background>( &nativeInstance, false )
	{}

	property ::Aspect_Background* NativeInstance
	{
		::Aspect_Background* get()
		{
			return static_cast<::Aspect_Background*>(_NativeInstance);
		}
	}

public:
	Aspect_Background();
	Aspect_Background(Macad::Occt::Quantity_Color^ AColor);
	Aspect_Background(Macad::Occt::Aspect_Background^ parameter1);
	void SetColor(Macad::Occt::Quantity_Color^ AColor);
	Macad::Occt::Quantity_Color^ Color();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Aspect_Background

//---------------------------------------------------------------------
//  Class  Aspect_Grid
//---------------------------------------------------------------------
public ref class Aspect_Grid : public Macad::Occt::Standard_Transient
{

#ifdef Include_Aspect_Grid_h
public:
	Include_Aspect_Grid_h
#endif

protected:
	Aspect_Grid(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Aspect_Grid(::Aspect_Grid* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Aspect_Grid(::Aspect_Grid& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Aspect_Grid* NativeInstance
	{
		::Aspect_Grid* get()
		{
			return static_cast<::Aspect_Grid*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_Grid^ CreateDowncasted(::Aspect_Grid* instance);

public:
	Aspect_Grid(Macad::Occt::Aspect_Grid^ parameter1);
	void SetXOrigin(double anOrigin);
	void SetYOrigin(double anOrigin);
	void SetRotationAngle(double anAngle);
	void Rotate(double anAngle);
	void Translate(double aDx, double aDy);
	void SetColors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor);
	void Hit(double X, double Y, double% gridX, double% gridY);
	void Compute(double X, double Y, double% gridX, double% gridY);
	void Activate();
	void Deactivate();
	double XOrigin();
	double YOrigin();
	double RotationAngle();
	bool IsActive();
	void Colors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor);
	void SetDrawMode(Macad::Occt::Aspect_GridDrawMode aDrawMode);
	Macad::Occt::Aspect_GridDrawMode DrawMode();
	void Display();
	void Erase();
	bool IsDisplayed();
	void Init();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Aspect_Grid

//---------------------------------------------------------------------
//  Class  Aspect_CircularGrid
//---------------------------------------------------------------------
public ref class Aspect_CircularGrid : public Macad::Occt::Aspect_Grid
{

#ifdef Include_Aspect_CircularGrid_h
public:
	Include_Aspect_CircularGrid_h
#endif

protected:
	Aspect_CircularGrid(InitMode init)
		: Macad::Occt::Aspect_Grid( init )
	{}

public:
	Aspect_CircularGrid(::Aspect_CircularGrid* nativeInstance)
		: Macad::Occt::Aspect_Grid( nativeInstance )
	{}

	Aspect_CircularGrid(::Aspect_CircularGrid& nativeInstance)
		: Macad::Occt::Aspect_Grid( nativeInstance )
	{}

	property ::Aspect_CircularGrid* NativeInstance
	{
		::Aspect_CircularGrid* get()
		{
			return static_cast<::Aspect_CircularGrid*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_CircularGrid^ CreateDowncasted(::Aspect_CircularGrid* instance);

public:
	Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin, double anYOrigin, double aRotationAngle);
	Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin, double anYOrigin);
	Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin);
	Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber);
	Aspect_CircularGrid(Macad::Occt::Aspect_CircularGrid^ parameter1);
	void SetRadiusStep(double aStep);
	void SetDivisionNumber(int aNumber);
	void SetGridValues(double XOrigin, double YOrigin, double RadiusStep, int DivisionNumber, double RotationAngle);
	void Compute(double X, double Y, double% gridX, double% gridY);
	double RadiusStep();
	int DivisionNumber();
	void Init();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Aspect_CircularGrid

//---------------------------------------------------------------------
//  Class  Aspect_DisplayConnection
//---------------------------------------------------------------------
public ref class Aspect_DisplayConnection sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Aspect_DisplayConnection_h
public:
	Include_Aspect_DisplayConnection_h
#endif

public:
	Aspect_DisplayConnection(::Aspect_DisplayConnection* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Aspect_DisplayConnection(::Aspect_DisplayConnection& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Aspect_DisplayConnection* NativeInstance
	{
		::Aspect_DisplayConnection* get()
		{
			return static_cast<::Aspect_DisplayConnection*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_DisplayConnection^ CreateDowncasted(::Aspect_DisplayConnection* instance);

public:
	Aspect_DisplayConnection();
}; // class Aspect_DisplayConnection

//---------------------------------------------------------------------
//  Class  Aspect_DisplayConnectionDefinitionError
//---------------------------------------------------------------------
public ref class Aspect_DisplayConnectionDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Aspect_DisplayConnectionDefinitionError_h
public:
	Include_Aspect_DisplayConnectionDefinitionError_h
#endif

public:
	Aspect_DisplayConnectionDefinitionError(::Aspect_DisplayConnectionDefinitionError* nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	Aspect_DisplayConnectionDefinitionError(::Aspect_DisplayConnectionDefinitionError& nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	property ::Aspect_DisplayConnectionDefinitionError* NativeInstance
	{
		::Aspect_DisplayConnectionDefinitionError* get()
		{
			return static_cast<::Aspect_DisplayConnectionDefinitionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_DisplayConnectionDefinitionError^ CreateDowncasted(::Aspect_DisplayConnectionDefinitionError* instance);

public:
	Aspect_DisplayConnectionDefinitionError();
	Aspect_DisplayConnectionDefinitionError(System::String^ theMessage);
	Aspect_DisplayConnectionDefinitionError(Macad::Occt::Aspect_DisplayConnectionDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_DisplayConnectionDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_DisplayConnectionDefinitionError^ NewInstance();
}; // class Aspect_DisplayConnectionDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_IdentDefinitionError
//---------------------------------------------------------------------
public ref class Aspect_IdentDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Aspect_IdentDefinitionError_h
public:
	Include_Aspect_IdentDefinitionError_h
#endif

public:
	Aspect_IdentDefinitionError(::Aspect_IdentDefinitionError* nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	Aspect_IdentDefinitionError(::Aspect_IdentDefinitionError& nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	property ::Aspect_IdentDefinitionError* NativeInstance
	{
		::Aspect_IdentDefinitionError* get()
		{
			return static_cast<::Aspect_IdentDefinitionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_IdentDefinitionError^ CreateDowncasted(::Aspect_IdentDefinitionError* instance);

public:
	Aspect_IdentDefinitionError();
	Aspect_IdentDefinitionError(System::String^ theMessage);
	Aspect_IdentDefinitionError(Macad::Occt::Aspect_IdentDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_IdentDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_IdentDefinitionError^ NewInstance();
}; // class Aspect_IdentDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_GenId
//---------------------------------------------------------------------
public ref class Aspect_GenId sealed : public BaseClass<::Aspect_GenId>
{

#ifdef Include_Aspect_GenId_h
public:
	Include_Aspect_GenId_h
#endif

public:
	Aspect_GenId(::Aspect_GenId* nativeInstance)
		: BaseClass<::Aspect_GenId>( nativeInstance, true )
	{}

	Aspect_GenId(::Aspect_GenId& nativeInstance)
		: BaseClass<::Aspect_GenId>( &nativeInstance, false )
	{}

	property ::Aspect_GenId* NativeInstance
	{
		::Aspect_GenId* get()
		{
			return static_cast<::Aspect_GenId*>(_NativeInstance);
		}
	}

public:
	Aspect_GenId();
	Aspect_GenId(int theLow, int theUpper);
	Aspect_GenId(Macad::Occt::Aspect_GenId^ parameter1);
	void Free();
	void Free(int theId);
	bool HasFree();
	int Available();
	int Lower();
	int Next();
	bool Next(int% theId);
	int Upper();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Aspect_GenId

//---------------------------------------------------------------------
//  Class  Aspect_GradientBackground
//---------------------------------------------------------------------
public ref class Aspect_GradientBackground sealed : public Macad::Occt::Aspect_Background
{

#ifdef Include_Aspect_GradientBackground_h
public:
	Include_Aspect_GradientBackground_h
#endif

public:
	Aspect_GradientBackground(::Aspect_GradientBackground* nativeInstance)
		: Macad::Occt::Aspect_Background( nativeInstance )
	{}

	Aspect_GradientBackground(::Aspect_GradientBackground& nativeInstance)
		: Macad::Occt::Aspect_Background( nativeInstance )
	{}

	property ::Aspect_GradientBackground* NativeInstance
	{
		::Aspect_GradientBackground* get()
		{
			return static_cast<::Aspect_GradientBackground*>(_NativeInstance);
		}
	}

public:
	Aspect_GradientBackground();
	Aspect_GradientBackground(Macad::Occt::Quantity_Color^ AColor1, Macad::Occt::Quantity_Color^ AColor2, Macad::Occt::Aspect_GradientFillMethod AMethod);
	Aspect_GradientBackground(Macad::Occt::Quantity_Color^ AColor1, Macad::Occt::Quantity_Color^ AColor2);
	Aspect_GradientBackground(Macad::Occt::Aspect_GradientBackground^ parameter1);
	void SetColors(Macad::Occt::Quantity_Color^ AColor1, Macad::Occt::Quantity_Color^ AColor2, Macad::Occt::Aspect_GradientFillMethod AMethod);
	void SetColors(Macad::Occt::Quantity_Color^ AColor1, Macad::Occt::Quantity_Color^ AColor2);
	void Colors(Macad::Occt::Quantity_Color^ AColor1, Macad::Occt::Quantity_Color^ AColor2);
	Macad::Occt::Aspect_GradientFillMethod BgGradientFillMethod();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Aspect_GradientBackground

//---------------------------------------------------------------------
//  Class  Aspect_GraphicDeviceDefinitionError
//---------------------------------------------------------------------
public ref class Aspect_GraphicDeviceDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Aspect_GraphicDeviceDefinitionError_h
public:
	Include_Aspect_GraphicDeviceDefinitionError_h
#endif

public:
	Aspect_GraphicDeviceDefinitionError(::Aspect_GraphicDeviceDefinitionError* nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	Aspect_GraphicDeviceDefinitionError(::Aspect_GraphicDeviceDefinitionError& nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	property ::Aspect_GraphicDeviceDefinitionError* NativeInstance
	{
		::Aspect_GraphicDeviceDefinitionError* get()
		{
			return static_cast<::Aspect_GraphicDeviceDefinitionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_GraphicDeviceDefinitionError^ CreateDowncasted(::Aspect_GraphicDeviceDefinitionError* instance);

public:
	Aspect_GraphicDeviceDefinitionError();
	Aspect_GraphicDeviceDefinitionError(System::String^ theMessage);
	Aspect_GraphicDeviceDefinitionError(Macad::Occt::Aspect_GraphicDeviceDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_GraphicDeviceDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_GraphicDeviceDefinitionError^ NewInstance();
}; // class Aspect_GraphicDeviceDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_Window
//---------------------------------------------------------------------
public ref class Aspect_Window : public Macad::Occt::Standard_Transient
{

#ifdef Include_Aspect_Window_h
public:
	Include_Aspect_Window_h
#endif

protected:
	Aspect_Window(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Aspect_Window(::Aspect_Window* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Aspect_Window(::Aspect_Window& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Aspect_Window* NativeInstance
	{
		::Aspect_Window* get()
		{
			return static_cast<::Aspect_Window*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_Window^ CreateDowncasted(::Aspect_Window* instance);

public:
	Aspect_Window(Macad::Occt::Aspect_Window^ parameter1);
	void SetBackground(Macad::Occt::Aspect_Background^ ABack);
	void SetBackground(Macad::Occt::Quantity_Color^ color);
	void SetBackground(Macad::Occt::Aspect_GradientBackground^ ABackground);
	void SetBackground(Macad::Occt::Quantity_Color^ theFirstColor, Macad::Occt::Quantity_Color^ theSecondColor, Macad::Occt::Aspect_GradientFillMethod theFillMethod);
	void Map();
	void Unmap();
	Macad::Occt::Aspect_TypeOfResize DoResize();
	bool DoMapping();
	Macad::Occt::Aspect_Background^ Background();
	Macad::Occt::Aspect_FillMethod BackgroundFillMethod();
	Macad::Occt::Aspect_GradientBackground^ GradientBackground();
	bool IsMapped();
	bool IsVirtual();
	void SetVirtual(bool theVirtual);
	double Ratio();
	void Position(int% X1, int% Y1, int% X2, int% Y2);
	void Size(int% Width, int% Height);
	System::IntPtr NativeHandle();
	System::IntPtr NativeParentHandle();
	System::IntPtr NativeFBConfig();
	void SetTitle(Macad::Occt::TCollection_AsciiString^ theTitle);
	void InvalidateContent(Macad::Occt::Aspect_DisplayConnection^ theDisp);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Aspect_Window

//---------------------------------------------------------------------
//  Class  Aspect_NeutralWindow
//---------------------------------------------------------------------
public ref class Aspect_NeutralWindow sealed : public Macad::Occt::Aspect_Window
{

#ifdef Include_Aspect_NeutralWindow_h
public:
	Include_Aspect_NeutralWindow_h
#endif

public:
	Aspect_NeutralWindow(::Aspect_NeutralWindow* nativeInstance)
		: Macad::Occt::Aspect_Window( nativeInstance )
	{}

	Aspect_NeutralWindow(::Aspect_NeutralWindow& nativeInstance)
		: Macad::Occt::Aspect_Window( nativeInstance )
	{}

	property ::Aspect_NeutralWindow* NativeInstance
	{
		::Aspect_NeutralWindow* get()
		{
			return static_cast<::Aspect_NeutralWindow*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_NeutralWindow^ CreateDowncasted(::Aspect_NeutralWindow* instance);

public:
	Aspect_NeutralWindow();
	Aspect_NeutralWindow(Macad::Occt::Aspect_NeutralWindow^ parameter1);
	System::IntPtr NativeHandle();
	System::IntPtr NativeParentHandle();
	System::IntPtr NativeFBConfig();
	bool SetNativeHandle(System::IntPtr theWindow);
	bool SetNativeHandles(System::IntPtr theWindow, System::IntPtr theParentWindow, System::IntPtr theFbConfig);
	bool IsMapped();
	void Map();
	void Unmap();
	Macad::Occt::Aspect_TypeOfResize DoResize();
	bool DoMapping();
	double Ratio();
	void Position(int% theX1, int% theY1, int% theX2, int% theY2);
	bool SetPosition(int theX1, int theY1);
	bool SetPosition(int theX1, int theY1, int theX2, int theY2);
	void Size(int% theWidth, int% theHeight);
	bool SetSize(int theWidth, int theHeight);
}; // class Aspect_NeutralWindow

//---------------------------------------------------------------------
//  Class  Aspect_XRAction
//---------------------------------------------------------------------
public ref class Aspect_XRAction sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Aspect_XRAction_h
public:
	Include_Aspect_XRAction_h
#endif

public:
	Aspect_XRAction(::Aspect_XRAction* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Aspect_XRAction(::Aspect_XRAction& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Aspect_XRAction* NativeInstance
	{
		::Aspect_XRAction* get()
		{
			return static_cast<::Aspect_XRAction*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_XRAction^ CreateDowncasted(::Aspect_XRAction* instance);

public:
	Aspect_XRAction(Macad::Occt::TCollection_AsciiString^ theId, Macad::Occt::Aspect_XRActionType theType);
	Aspect_XRAction(Macad::Occt::Aspect_XRAction^ parameter1);
	Macad::Occt::TCollection_AsciiString^ Id();
	Macad::Occt::Aspect_XRActionType Type();
	bool IsValid();
	/* Method skipped due to unknown mapping: long long unsigned int RawHandle() */
	/* Method skipped due to unknown mapping: void SetRawHandle(long long unsigned int theHande, ) */
}; // class Aspect_XRAction

//---------------------------------------------------------------------
//  Class  Aspect_XRActionSet
//---------------------------------------------------------------------
public ref class Aspect_XRActionSet sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Aspect_XRActionSet_h
public:
	Include_Aspect_XRActionSet_h
#endif

public:
	Aspect_XRActionSet(::Aspect_XRActionSet* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Aspect_XRActionSet(::Aspect_XRActionSet& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Aspect_XRActionSet* NativeInstance
	{
		::Aspect_XRActionSet* get()
		{
			return static_cast<::Aspect_XRActionSet*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_XRActionSet^ CreateDowncasted(::Aspect_XRActionSet* instance);

public:
	Aspect_XRActionSet(Macad::Occt::TCollection_AsciiString^ theId);
	Aspect_XRActionSet(Macad::Occt::Aspect_XRActionSet^ parameter1);
	Macad::Occt::TCollection_AsciiString^ Id();
	/* Method skipped due to unknown mapping: long long unsigned int RawHandle() */
	/* Method skipped due to unknown mapping: void SetRawHandle(long long unsigned int theHande, ) */
	void AddAction(Macad::Occt::Aspect_XRAction^ theAction);
	Macad::Occt::Aspect_XRActionMap^ Actions();
}; // class Aspect_XRActionSet

//---------------------------------------------------------------------
//  Class  Aspect_XRSession
//---------------------------------------------------------------------
public ref class Aspect_XRSession : public Macad::Occt::Standard_Transient
{

#ifdef Include_Aspect_XRSession_h
public:
	Include_Aspect_XRSession_h
#endif

protected:
	Aspect_XRSession(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Aspect_XRSession(::Aspect_XRSession* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Aspect_XRSession(::Aspect_XRSession& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Aspect_XRSession* NativeInstance
	{
		::Aspect_XRSession* get()
		{
			return static_cast<::Aspect_XRSession*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_XRSession^ CreateDowncasted(::Aspect_XRSession* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  TrackingUniverseOrigin
	//---------------------------------------------------------------------
	enum class TrackingUniverseOrigin
	{
		TrackingUniverseOrigin_Seated = 0,
		TrackingUniverseOrigin_Standing = 1
	}; // enum  class TrackingUniverseOrigin

	//---------------------------------------------------------------------
	//  Enum  InfoString
	//---------------------------------------------------------------------
	enum class InfoString
	{
		InfoString_Vendor = 0,
		InfoString_Device = 1,
		InfoString_Tracker = 2,
		InfoString_SerialNumber = 3
	}; // enum  class InfoString

	Aspect_XRSession(Macad::Occt::Aspect_XRSession^ parameter1);
	bool IsOpen();
	bool Open();
	void Close();
	bool WaitPoses();
	/* Method skipped due to unknown mapping: NCollection_Vec2<int> RecommendedViewport() */
	/* Method skipped due to unknown mapping: NCollection_Mat4<double> EyeToHeadTransform(Aspect_Eye theEye, ) */
	/* Method skipped due to unknown mapping: NCollection_Mat4<double> HeadToEyeTransform(Aspect_Eye theEye, ) */
	/* Method skipped due to unknown mapping: NCollection_Mat4<double> ProjectionMatrix(Aspect_Eye theEye, double theZNear, double theZFar, ) */
	bool HasProjectionFrustums();
	void ProcessEvents();
	bool SubmitEye(System::IntPtr theTexture, Macad::Occt::Aspect_GraphicsLibrary theGraphicsLib, Macad::Occt::Aspect_ColorSpace theColorSpace, Macad::Occt::Aspect_Eye theEye);
	double UnitFactor();
	void SetUnitFactor(double theFactor);
	double Aspect();
	double FieldOfView();
	double IOD();
	float DisplayFrequency();
	/* Method skipped due to unknown mapping: Aspect_FrustumLRBT<double> ProjectionFrustum(Aspect_Eye theEye, ) */
	Macad::Occt::Trsf HeadPose();
	Macad::Occt::Trsf LeftHandPose();
	Macad::Occt::Trsf RightHandPose();
	Macad::Occt::Aspect_TrackedDevicePoseArray^ TrackedPoses();
	bool HasTrackedPose(int theDevice);
	int NamedTrackedDevice(Macad::Occt::Aspect_XRTrackedDeviceRole theDevice);
	Macad::Occt::Graphic3d_ArrayOfTriangles^ LoadRenderModel(int theDevice, Macad::Occt::Image_Texture^ theTexture);
	Macad::Occt::Graphic3d_ArrayOfTriangles^ LoadRenderModel(int theDevice, bool theToApplyUnitFactor, Macad::Occt::Image_Texture^ theTexture);
	Macad::Occt::Aspect_XRDigitalActionData^ GetDigitalActionData(Macad::Occt::Aspect_XRAction^ theAction);
	Macad::Occt::Aspect_XRAnalogActionData^ GetAnalogActionData(Macad::Occt::Aspect_XRAction^ theAction);
	Macad::Occt::Aspect_XRPoseActionData^ GetPoseActionDataForNextFrame(Macad::Occt::Aspect_XRAction^ theAction);
	void TriggerHapticVibrationAction(Macad::Occt::Aspect_XRAction^ theAction, Macad::Occt::Aspect_XRHapticActionData^ theParams);
	void AbortHapticVibrationAction(Macad::Occt::Aspect_XRAction^ theAction);
	Macad::Occt::Aspect_XRSession::TrackingUniverseOrigin TrackingOrigin();
	void SetTrackingOrigin(Macad::Occt::Aspect_XRSession::TrackingUniverseOrigin theOrigin);
	Macad::Occt::Aspect_XRAction^ GenericAction(Macad::Occt::Aspect_XRTrackedDeviceRole theDevice, Macad::Occt::Aspect_XRGenericAction theAction);
	Macad::Occt::TCollection_AsciiString^ GetString(Macad::Occt::Aspect_XRSession::InfoString theInfo);
}; // class Aspect_XRSession

//---------------------------------------------------------------------
//  Class  Aspect_OpenVRSession
//---------------------------------------------------------------------
public ref class Aspect_OpenVRSession sealed : public Macad::Occt::Aspect_XRSession
{

#ifdef Include_Aspect_OpenVRSession_h
public:
	Include_Aspect_OpenVRSession_h
#endif

public:
	Aspect_OpenVRSession(::Aspect_OpenVRSession* nativeInstance)
		: Macad::Occt::Aspect_XRSession( nativeInstance )
	{}

	Aspect_OpenVRSession(::Aspect_OpenVRSession& nativeInstance)
		: Macad::Occt::Aspect_XRSession( nativeInstance )
	{}

	property ::Aspect_OpenVRSession* NativeInstance
	{
		::Aspect_OpenVRSession* get()
		{
			return static_cast<::Aspect_OpenVRSession*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_OpenVRSession^ CreateDowncasted(::Aspect_OpenVRSession* instance);

public:
	Aspect_OpenVRSession();
	Aspect_OpenVRSession(Macad::Occt::Aspect_OpenVRSession^ parameter1);
	static bool IsHmdPresent();
	bool IsOpen();
	bool Open();
	void Close();
	bool WaitPoses();
	/* Method skipped due to unknown mapping: NCollection_Vec2<int> RecommendedViewport() */
	/* Method skipped due to unknown mapping: NCollection_Mat4<double> EyeToHeadTransform(Aspect_Eye theEye, ) */
	/* Method skipped due to unknown mapping: NCollection_Mat4<double> ProjectionMatrix(Aspect_Eye theEye, double theZNear, double theZFar, ) */
	bool HasProjectionFrustums();
	void ProcessEvents();
	bool SubmitEye(System::IntPtr theTexture, Macad::Occt::Aspect_GraphicsLibrary theGraphicsLib, Macad::Occt::Aspect_ColorSpace theColorSpace, Macad::Occt::Aspect_Eye theEye);
	/* Method skipped due to unknown mapping: TCollection_AsciiString GetString(InfoString theInfo, ) */
	int NamedTrackedDevice(Macad::Occt::Aspect_XRTrackedDeviceRole theDevice);
	Macad::Occt::Aspect_XRDigitalActionData^ GetDigitalActionData(Macad::Occt::Aspect_XRAction^ theAction);
	Macad::Occt::Aspect_XRAnalogActionData^ GetAnalogActionData(Macad::Occt::Aspect_XRAction^ theAction);
	Macad::Occt::Aspect_XRPoseActionData^ GetPoseActionDataForNextFrame(Macad::Occt::Aspect_XRAction^ theAction);
	/* Method skipped due to unknown mapping: void SetTrackingOrigin(TrackingUniverseOrigin theOrigin, ) */
}; // class Aspect_OpenVRSession

//---------------------------------------------------------------------
//  Class  Aspect_RectangularGrid
//---------------------------------------------------------------------
public ref class Aspect_RectangularGrid : public Macad::Occt::Aspect_Grid
{

#ifdef Include_Aspect_RectangularGrid_h
public:
	Include_Aspect_RectangularGrid_h
#endif

protected:
	Aspect_RectangularGrid(InitMode init)
		: Macad::Occt::Aspect_Grid( init )
	{}

public:
	Aspect_RectangularGrid(::Aspect_RectangularGrid* nativeInstance)
		: Macad::Occt::Aspect_Grid( nativeInstance )
	{}

	Aspect_RectangularGrid(::Aspect_RectangularGrid& nativeInstance)
		: Macad::Occt::Aspect_Grid( nativeInstance )
	{}

	property ::Aspect_RectangularGrid* NativeInstance
	{
		::Aspect_RectangularGrid* get()
		{
			return static_cast<::Aspect_RectangularGrid*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_RectangularGrid^ CreateDowncasted(::Aspect_RectangularGrid* instance);

public:
	Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle, double aSecondAngle, double aRotationAngle);
	Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle, double aSecondAngle);
	Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle);
	Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin);
	Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin);
	Aspect_RectangularGrid(double aXStep, double aYStep);
	Aspect_RectangularGrid(Macad::Occt::Aspect_RectangularGrid^ parameter1);
	void SetXStep(double aStep);
	void SetYStep(double aStep);
	void SetAngle(double anAngle1, double anAngle2);
	void SetGridValues(double XOrigin, double YOrigin, double XStep, double YStep, double RotationAngle);
	void Compute(double X, double Y, double% gridX, double% gridY);
	double XStep();
	double YStep();
	double FirstAngle();
	double SecondAngle();
	void Init();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Aspect_RectangularGrid

//---------------------------------------------------------------------
//  Class  Aspect_Touch
//---------------------------------------------------------------------
public ref class Aspect_Touch sealed : public BaseClass<::Aspect_Touch>
{

#ifdef Include_Aspect_Touch_h
public:
	Include_Aspect_Touch_h
#endif

public:
	Aspect_Touch(::Aspect_Touch* nativeInstance)
		: BaseClass<::Aspect_Touch>( nativeInstance, true )
	{}

	Aspect_Touch(::Aspect_Touch& nativeInstance)
		: BaseClass<::Aspect_Touch>( &nativeInstance, false )
	{}

	property ::Aspect_Touch* NativeInstance
	{
		::Aspect_Touch* get()
		{
			return static_cast<::Aspect_Touch*>(_NativeInstance);
		}
	}

public:
	Aspect_Touch();
	/* Method skipped due to unknown mapping: void Aspect_Touch(NCollection_Vec2<double> thePnt, Standard_Boolean theIsPreciseDevice, ) */
	Aspect_Touch(double theX, double theY, bool theIsPreciseDevice);
	Aspect_Touch(Macad::Occt::Aspect_Touch^ parameter1);
	/* Method skipped due to unknown mapping: NCollection_Vec2<double> Delta() */
}; // class Aspect_Touch

//---------------------------------------------------------------------
//  Class  Aspect_VKeySet
//---------------------------------------------------------------------
public ref class Aspect_VKeySet sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Aspect_VKeySet_h
public:
	Include_Aspect_VKeySet_h
#endif

public:
	Aspect_VKeySet(::Aspect_VKeySet* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Aspect_VKeySet(::Aspect_VKeySet& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Aspect_VKeySet* NativeInstance
	{
		::Aspect_VKeySet* get()
		{
			return static_cast<::Aspect_VKeySet*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_VKeySet^ CreateDowncasted(::Aspect_VKeySet* instance);

public:
	//---------------------------------------------------------------------
	//  Enum  KeyStatus
	//---------------------------------------------------------------------
	enum class KeyStatus
	{
		KeyStatus_Free = 0,
		KeyStatus_Pressed = 1,
		KeyStatus_Released = 2
	}; // enum  class KeyStatus

	Aspect_VKeySet();
	unsigned int Modifiers();
	double DownTime(unsigned int theKey);
	double TimeUp(unsigned int theKey);
	bool IsFreeKey(unsigned int theKey);
	bool IsKeyDown(unsigned int theKey);
	/* Method skipped due to unknown mapping: Standard_Mutex Mutex() */
	void Reset();
	void KeyDown(unsigned int theKey, double theTime, double thePressure);
	void KeyDown(unsigned int theKey, double theTime);
	void KeyUp(unsigned int theKey, double theTime);
	void KeyFromAxis(unsigned int theNegative, unsigned int thePositive, double theTime, double thePressure);
	bool HoldDuration(unsigned int theKey, double theTime, double% theDuration);
	bool HoldDuration(unsigned int theKey, double theTime, double% theDuration, double% thePressure);
}; // class Aspect_VKeySet

//---------------------------------------------------------------------
//  Class  Aspect_WindowDefinitionError
//---------------------------------------------------------------------
public ref class Aspect_WindowDefinitionError sealed : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Aspect_WindowDefinitionError_h
public:
	Include_Aspect_WindowDefinitionError_h
#endif

public:
	Aspect_WindowDefinitionError(::Aspect_WindowDefinitionError* nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	Aspect_WindowDefinitionError(::Aspect_WindowDefinitionError& nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	property ::Aspect_WindowDefinitionError* NativeInstance
	{
		::Aspect_WindowDefinitionError* get()
		{
			return static_cast<::Aspect_WindowDefinitionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_WindowDefinitionError^ CreateDowncasted(::Aspect_WindowDefinitionError* instance);

public:
	Aspect_WindowDefinitionError();
	Aspect_WindowDefinitionError(System::String^ theMessage);
	Aspect_WindowDefinitionError(Macad::Occt::Aspect_WindowDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_WindowDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_WindowDefinitionError^ NewInstance();
}; // class Aspect_WindowDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_WindowError
//---------------------------------------------------------------------
public ref class Aspect_WindowError sealed : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_Aspect_WindowError_h
public:
	Include_Aspect_WindowError_h
#endif

public:
	Aspect_WindowError(::Aspect_WindowError* nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	Aspect_WindowError(::Aspect_WindowError& nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	property ::Aspect_WindowError* NativeInstance
	{
		::Aspect_WindowError* get()
		{
			return static_cast<::Aspect_WindowError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Aspect_WindowError^ CreateDowncasted(::Aspect_WindowError* instance);

public:
	Aspect_WindowError();
	Aspect_WindowError(System::String^ theMessage);
	Aspect_WindowError(Macad::Occt::Aspect_WindowError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_WindowError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_WindowError^ NewInstance();
}; // class Aspect_WindowError

}; // namespace Occt
}; // namespace Macad
