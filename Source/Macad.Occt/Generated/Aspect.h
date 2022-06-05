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
/// <summary>
/// Defines the grid draw mode. The grid may be drawn
/// by using lines or points.
/// </summary>
public enum class Aspect_GridDrawMode
{
	Aspect_GDM_Lines = 0,
	Aspect_GDM_Points = 1,
	Aspect_GDM_None = 2
}; // enum  class Aspect_GridDrawMode

//---------------------------------------------------------------------
//  Enum  Aspect_GraphicsLibrary
//---------------------------------------------------------------------
/// <summary>
/// Graphics API enumeration.
/// </summary>
public enum class Aspect_GraphicsLibrary
{
	Aspect_GraphicsLibrary_OpenGL = 0,
	Aspect_GraphicsLibrary_OpenGLES = 1
}; // enum  class Aspect_GraphicsLibrary

//---------------------------------------------------------------------
//  Enum  Aspect_ColorSpace
//---------------------------------------------------------------------
/// <summary>
/// Texture color spaces accepted by XR composer.
/// </summary>
public enum class Aspect_ColorSpace
{
	Aspect_ColorSpace_sRGB = 0,
	Aspect_ColorSpace_Linear = 1
}; // enum  class Aspect_ColorSpace

//---------------------------------------------------------------------
//  Enum  Aspect_XAtom
//---------------------------------------------------------------------
/// <summary>
/// Defines custom identifiers(atoms) for X window custom named properties
/// 
/// Category: Instantiated classes
/// </summary>
public enum class Aspect_XAtom
{
	Aspect_XA_DELETE_WINDOW = 0
}; // enum  class Aspect_XAtom

//---------------------------------------------------------------------
//  Enum  Aspect_Eye
//---------------------------------------------------------------------
/// <summary>
/// Camera eye index within stereoscopic pair.
/// </summary>
public enum class Aspect_Eye
{
	Aspect_Eye_Left = 0,
	Aspect_Eye_Right = 1
}; // enum  class Aspect_Eye

//---------------------------------------------------------------------
//  Enum  Aspect_FillMethod
//---------------------------------------------------------------------
/// <summary>
/// Defines the fill methods to
/// write bitmaps in a window.
/// </summary>
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
/// <summary>
/// Defines the fill methods to write gradient background in a window.
/// </summary>
public enum class Aspect_GradientFillMethod
{
	Aspect_GradientFillMethod_None = 0,
	Aspect_GradientFillMethod_Horizontal = 1,
	Aspect_GradientFillMethod_Vertical = 2,
	Aspect_GradientFillMethod_Diagonal1 = 3,
	Aspect_GradientFillMethod_Diagonal2 = 4,
	Aspect_GradientFillMethod_Corner1 = 5,
	Aspect_GradientFillMethod_Corner2 = 6,
	Aspect_GradientFillMethod_Corner3 = 7,
	Aspect_GradientFillMethod_Corner4 = 8,
	Aspect_GradientFillMethod_Elliptical = 9,
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
/// <summary>
/// Defines the grid type : Rectangular or Circular.
/// </summary>
public enum class Aspect_GridType
{
	Aspect_GT_Rectangular = 0,
	Aspect_GT_Circular = 1
}; // enum  class Aspect_GridType

//---------------------------------------------------------------------
//  Enum  Aspect_HatchStyle
//---------------------------------------------------------------------
/// <summary>
/// Definition of all available hatch styles.
/// </summary>
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
/// <summary>
/// Interior types for primitive faces.
/// </summary>
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
/// <summary>
/// Defines the type of Resize Window method applied
/// by the user.
/// </summary>
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
/// <summary>
/// XR action type.
/// </summary>
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
/// <summary>
/// Generic XR action.
/// </summary>
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
/// <summary>
/// Predefined tracked devices.
/// </summary>
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
/// <summary>
/// Defines the using type of colors and labels
/// </summary>
public enum class Aspect_TypeOfColorScaleData
{
	Aspect_TOCSD_AUTO = 0,
	Aspect_TOCSD_USER = 1
}; // enum  class Aspect_TypeOfColorScaleData

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfColorScaleOrientation
//---------------------------------------------------------------------
/// <summary>
/// Defines the type of color scale orientation
/// </summary>
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
/// <summary>
/// Defines the type of position for color scale labels
/// </summary>
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
/// <summary>
/// Defines if the maximal chordial deflection used when
/// drawing an object is absolute  or relative to the size
/// of the object.
/// </summary>
public enum class Aspect_TypeOfDeflection
{
	Aspect_TOD_RELATIVE = 0,
	Aspect_TOD_ABSOLUTE = 1
}; // enum  class Aspect_TypeOfDeflection

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfDisplayText
//---------------------------------------------------------------------
/// <summary>
/// Define the display type of the text.
/// </summary>
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
/// <summary>
/// Definition of a highlight method
/// 
/// TOHM_COLOR          drawn in the highlight color
/// (default white)
/// TOHM_BOUNDBOX       enclosed by the boundary box
/// (default white)
/// </summary>
public enum class Aspect_TypeOfHighlightMethod
{
	Aspect_TOHM_COLOR = 0,
	Aspect_TOHM_BOUNDBOX = 1
}; // enum  class Aspect_TypeOfHighlightMethod

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfLine
//---------------------------------------------------------------------
/// <summary>
/// Definition of line types
/// </summary>
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
/// <summary>
/// Definition of types of markers
/// </summary>
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
/// <summary>
/// Define the style of the text.
/// 
/// TOST_NORMAL         Default text. The text is displayed like any other graphic object.
/// This text can be hidden by another object that is nearest from the
/// point of view.
/// TOST_ANNOTATION     The text is always visible. The texte is displayed
/// over the other object according to the priority.
/// </summary>
public enum class Aspect_TypeOfStyleText
{
	Aspect_TOST_NORMAL = 0,
	Aspect_TOST_ANNOTATION = 1
}; // enum  class Aspect_TypeOfStyleText

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfTriedronPosition
//---------------------------------------------------------------------
/// <summary>
/// Definition of the Trihedron position in the views.
/// It is defined as a bitmask to simplify handling vertical and horizontal alignment independently.
/// </summary>
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
/// <summary>
/// Enumeration defining virtual keys irrelevant to current keyboard layout for simplified hot-keys management logic.
/// </summary>
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
/// <summary>
/// Definition of line types
/// 
/// WOL_THIN            thin line (1 pixel width)
/// WOL_MEDIUM          medium width of 0.5 MM
/// WOL_THICK           thick width of 0.7 MM
/// WOL_VERYTHICK       very thick width of 1.5 MM
/// WOL_USERDEFINED     defined by Users
/// </summary>
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
/// <summary>
/// Analog input XR action data.
/// </summary>
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
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Aspect_XRAnalogActionData();
	Aspect_XRAnalogActionData(Macad::Occt::Aspect_XRAnalogActionData^ parameter1);
	/// <summary>
	/// Return TRUE if delta is non-zero.
	/// </summary>
	bool IsChanged();
}; // class Aspect_XRAnalogActionData

//---------------------------------------------------------------------
//  Class  Aspect_XRDigitalActionData
//---------------------------------------------------------------------
/// <summary>
/// Digital input XR action data.
/// </summary>
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
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Aspect_XRDigitalActionData();
	Aspect_XRDigitalActionData(Macad::Occt::Aspect_XRDigitalActionData^ parameter1);
}; // class Aspect_XRDigitalActionData

//---------------------------------------------------------------------
//  Class  Aspect_XRHapticActionData
//---------------------------------------------------------------------
/// <summary>
/// Haptic output XR action data.
/// </summary>
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
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Aspect_XRHapticActionData();
	Aspect_XRHapticActionData(Macad::Occt::Aspect_XRHapticActionData^ parameter1);
	/// <summary>
	/// Return TRUE if data is not empty.
	/// </summary>
	bool IsValid();
}; // class Aspect_XRHapticActionData

//---------------------------------------------------------------------
//  Class  Aspect_TrackedDevicePose
//---------------------------------------------------------------------
/// <summary>
/// Describes a single pose for a tracked object (for XR).
/// </summary>
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
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Aspect_TrackedDevicePose();
	Aspect_TrackedDevicePose(Macad::Occt::Aspect_TrackedDevicePose^ parameter1);
}; // class Aspect_TrackedDevicePose

//---------------------------------------------------------------------
//  Class  Aspect_XRPoseActionData
//---------------------------------------------------------------------
/// <summary>
/// Pose input XR action data.
/// </summary>
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
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Aspect_XRPoseActionData();
	Aspect_XRPoseActionData(Macad::Occt::Aspect_XRPoseActionData^ parameter1);
}; // class Aspect_XRPoseActionData

//---------------------------------------------------------------------
//  Class  Aspect_ScrollDelta
//---------------------------------------------------------------------
/// <summary>
/// Parameters for mouse scroll action.
/// </summary>
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
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Aspect_ScrollDelta();
	/// <summary>
	/// Constructor.
	/// </summary>
	/* Method skipped due to unknown mapping: void Aspect_ScrollDelta(NCollection_Vec2<int> thePnt, Standard_Real theValue, unsigned int theFlags, ) */
	/// <summary>
	/// Constructor.
	/// </summary>
	/* Method skipped due to unknown mapping: void Aspect_ScrollDelta(NCollection_Vec2<int> thePnt, Standard_Real theValue, unsigned int theFlags, ) */
	/// <summary>
	/// Constructor with undefined point.
	/// </summary>
	Aspect_ScrollDelta(double theValue, unsigned int theFlags);
	/// <summary>
	/// Constructor with undefined point.
	/// </summary>
	Aspect_ScrollDelta(double theValue);
	Aspect_ScrollDelta(Macad::Occt::Aspect_ScrollDelta^ parameter1);
	/// <summary>
	/// Return true if action has point defined.
	/// </summary>
	bool HasPoint();
	/// <summary>
	/// Reset at point.
	/// </summary>
	void ResetPoint();
}; // class Aspect_ScrollDelta

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
	Aspect_AspectFillAreaDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Aspect_AspectFillAreaDefinitionError(Macad::Occt::Aspect_AspectFillAreaDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_AspectFillAreaDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_AspectFillAreaDefinitionError^ NewInstance();
	static Macad::Occt::Aspect_AspectFillAreaDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Aspect_AspectLineDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Aspect_AspectLineDefinitionError(Macad::Occt::Aspect_AspectLineDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_AspectLineDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_AspectLineDefinitionError^ NewInstance();
	static Macad::Occt::Aspect_AspectLineDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Aspect_AspectMarkerDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Aspect_AspectMarkerDefinitionError(Macad::Occt::Aspect_AspectMarkerDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_AspectMarkerDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_AspectMarkerDefinitionError^ NewInstance();
	static Macad::Occt::Aspect_AspectMarkerDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Aspect_AspectMarkerDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_Background
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition of
/// a window background.
/// </summary>
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
	/// <summary>
	/// Creates a window background.
	/// Default color : NOC_MATRAGRAY.
	/// </summary>
	Aspect_Background();
	/// <summary>
	/// Creates a window background with the colour <AColor>.
	/// </summary>
	Aspect_Background(Macad::Occt::Quantity_Color^ AColor);
	Aspect_Background(Macad::Occt::Aspect_Background^ parameter1);
	/// <summary>
	/// Modifies the colour of the window background <me>.
	/// </summary>
	void SetColor(Macad::Occt::Quantity_Color^ AColor);
	/// <summary>
	/// Returns the colour of the window background <me>.
	/// </summary>
	Macad::Occt::Quantity_Color^ Color();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
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
	/// <summary>
	/// defines the x Origin of the grid.
	/// </summary>
	void SetXOrigin(double anOrigin);
	/// <summary>
	/// defines the y Origin of the grid.
	/// </summary>
	void SetYOrigin(double anOrigin);
	/// <summary>
	/// defines the orientation of the grid.
	/// </summary>
	void SetRotationAngle(double anAngle);
	/// <summary>
	/// Rotate the grid from a relative angle.
	/// </summary>
	void Rotate(double anAngle);
	/// <summary>
	/// Translate the grid from a relative distance.
	/// </summary>
	void Translate(double aDx, double aDy);
	/// <summary>
	/// Change the colors of the grid
	/// </summary>
	void SetColors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor);
	/// <summary>
	/// returns the point of the grid the closest to the point X,Y
	/// if the grid is active. If the grid is not active returns
	/// X,Y.
	/// </summary>
	void Hit(double X, double Y, double% gridX, double% gridY);
	/// <summary>
	/// returns the point of the grid the closest to the point X,Y
	/// </summary>
	void Compute(double X, double Y, double% gridX, double% gridY);
	/// <summary>
	/// activates the grid. The Hit method will return
	/// gridx and gridx computed according to the steps
	/// of the grid.
	/// </summary>
	void Activate();
	/// <summary>
	/// deactivates the grid. The hit method will return
	/// gridx and gridx as the enter value X & Y.
	/// </summary>
	void Deactivate();
	/// <summary>
	/// returns the x Origin of the grid.
	/// </summary>
	double XOrigin();
	/// <summary>
	/// returns the x Origin of the grid.
	/// </summary>
	double YOrigin();
	/// <summary>
	/// returns the x Angle of the grid.
	/// </summary>
	double RotationAngle();
	/// <summary>
	/// Returns TRUE when the grid is active.
	/// </summary>
	bool IsActive();
	/// <summary>
	/// Returns the colors of the grid.
	/// </summary>
	void Colors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor);
	/// <summary>
	/// Change the grid aspect.
	/// </summary>
	void SetDrawMode(Macad::Occt::Aspect_GridDrawMode aDrawMode);
	/// <summary>
	/// Returns the grid aspect.
	/// </summary>
	Macad::Occt::Aspect_GridDrawMode DrawMode();
	/// <summary>
	/// Display the grid at screen.
	/// </summary>
	void Display();
	/// <summary>
	/// Erase the grid from screen.
	/// </summary>
	void Erase();
	/// <summary>
	/// Returns TRUE when the grid is displayed at screen.
	/// </summary>
	bool IsDisplayed();
	void Init();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
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
	/// <summary>
	/// creates a new grid. By default this grid is not
	/// active.
	/// </summary>
	Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin, double anYOrigin, double aRotationAngle);
	/// <summary>
	/// creates a new grid. By default this grid is not
	/// active.
	/// </summary>
	Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin, double anYOrigin);
	/// <summary>
	/// creates a new grid. By default this grid is not
	/// active.
	/// </summary>
	Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin);
	/// <summary>
	/// creates a new grid. By default this grid is not
	/// active.
	/// </summary>
	Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber);
	Aspect_CircularGrid(Macad::Occt::Aspect_CircularGrid^ parameter1);
	/// <summary>
	/// defines the x step of the grid.
	/// </summary>
	void SetRadiusStep(double aStep);
	/// <summary>
	/// defines the step of the grid.
	/// </summary>
	void SetDivisionNumber(int aNumber);
	void SetGridValues(double XOrigin, double YOrigin, double RadiusStep, int DivisionNumber, double RotationAngle);
	/// <summary>
	/// returns the point of the grid the closest to the point X,Y
	/// </summary>
	void Compute(double X, double Y, double% gridX, double% gridY);
	/// <summary>
	/// returns the x step of the grid.
	/// </summary>
	double RadiusStep();
	/// <summary>
	/// returns the x step of the grid.
	/// </summary>
	int DivisionNumber();
	void Init();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Aspect_CircularGrid

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
	Aspect_DisplayConnectionDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Aspect_DisplayConnectionDefinitionError(Macad::Occt::Aspect_DisplayConnectionDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_DisplayConnectionDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_DisplayConnectionDefinitionError^ NewInstance();
	static Macad::Occt::Aspect_DisplayConnectionDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Aspect_DisplayConnectionDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_GenId
//---------------------------------------------------------------------
/// <summary>
/// This class permits the creation and control of integer identifiers.
/// </summary>
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
	/// <summary>
	/// Creates an available set of identifiers with the lower bound 0 and the upper bound INT_MAX / 2.
	/// </summary>
	Aspect_GenId();
	/// <summary>
	/// Creates an available set of identifiers with specified range.
	/// Raises IdentDefinitionError if theUpper is less than theLow.
	/// </summary>
	Aspect_GenId(int theLow, int theUpper);
	Aspect_GenId(Macad::Occt::Aspect_GenId^ parameter1);
	/// <summary>
	/// Free all identifiers - make the whole range available again.
	/// </summary>
	void Free();
	/// <summary>
	/// Free specified identifier. Warning - method has no protection against double-freeing!
	/// </summary>
	void Free(int theId);
	/// <summary>
	/// Returns true if there are available identifiers in range.
	/// </summary>
	bool HasFree();
	/// <summary>
	/// Returns the number of available identifiers.
	/// </summary>
	int Available();
	/// <summary>
	/// Returns the lower identifier in range.
	/// </summary>
	int Lower();
	/// <summary>
	/// Returns the next available identifier.
	/// Warning: Raises IdentDefinitionError if all identifiers are busy.
	/// </summary>
	int Next();
	/// <summary>
	/// Generates the next available identifier.
	/// </summary>
	/// <param name="theId">
	/// [out] generated identifier
	/// </param>
	/// <returns>
	/// FALSE if all identifiers are busy.
	/// </returns>
	bool Next(int% theId);
	/// <summary>
	/// Returns the upper identifier in range.
	/// </summary>
	int Upper();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Aspect_GenId

//---------------------------------------------------------------------
//  Class  Aspect_GradientBackground
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition of a window gradient background.
/// </summary>
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
	/// <summary>
	/// Creates a window gradient background.
	/// Default color is Quantity_NOC_BLACK.
	/// Default fill method is Aspect_GradientFillMethod_None.
	/// </summary>
	Aspect_GradientBackground();
	/// <summary>
	/// Creates a window gradient background with two colours.
	/// </summary>
	Aspect_GradientBackground(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2, Macad::Occt::Aspect_GradientFillMethod theMethod);
	/// <summary>
	/// Creates a window gradient background with two colours.
	/// </summary>
	Aspect_GradientBackground(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2);
	Aspect_GradientBackground(Macad::Occt::Aspect_GradientBackground^ parameter1);
	/// <summary>
	/// Modifies the colours of the window gradient background.
	/// </summary>
	void SetColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2, Macad::Occt::Aspect_GradientFillMethod theMethod);
	/// <summary>
	/// Modifies the colours of the window gradient background.
	/// </summary>
	void SetColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2);
	/// <summary>
	/// Returns colours of the window gradient background.
	/// </summary>
	void Colors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2);
	/// <summary>
	/// Returns the current gradient background fill mode.
	/// </summary>
	Macad::Occt::Aspect_GradientFillMethod BgGradientFillMethod();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
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
	Aspect_GraphicDeviceDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Aspect_GraphicDeviceDefinitionError(Macad::Occt::Aspect_GraphicDeviceDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_GraphicDeviceDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_GraphicDeviceDefinitionError^ NewInstance();
	static Macad::Occt::Aspect_GraphicDeviceDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Aspect_GraphicDeviceDefinitionError

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
	Aspect_IdentDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Aspect_IdentDefinitionError(Macad::Occt::Aspect_IdentDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_IdentDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_IdentDefinitionError^ NewInstance();
	static Macad::Occt::Aspect_IdentDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Aspect_IdentDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_Window
//---------------------------------------------------------------------
/// <summary>
/// Defines a window.
/// </summary>
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
	/// <summary>
	/// Modifies the window background.
	/// </summary>
	void SetBackground(Macad::Occt::Aspect_Background^ ABack);
	/// <summary>
	/// Modifies the window background.
	/// </summary>
	void SetBackground(Macad::Occt::Quantity_Color^ color);
	/// <summary>
	/// Modifies the window gradient background.
	/// </summary>
	void SetBackground(Macad::Occt::Aspect_GradientBackground^ ABackground);
	/// <summary>
	/// Modifies the window gradient background.
	/// </summary>
	void SetBackground(Macad::Occt::Quantity_Color^ theFirstColor, Macad::Occt::Quantity_Color^ theSecondColor, Macad::Occt::Aspect_GradientFillMethod theFillMethod);
	/// <summary>
	/// Opens the window <me>.
	/// </summary>
	void Map();
	/// <summary>
	/// Closes the window <me>.
	/// </summary>
	void Unmap();
	/// <summary>
	/// Apply the resizing to the window <me>.
	/// </summary>
	Macad::Occt::Aspect_TypeOfResize DoResize();
	/// <summary>
	/// Apply the mapping change to the window <me>.
	/// and returns TRUE if the window is mapped at screen.
	/// </summary>
	bool DoMapping();
	/// <summary>
	/// Returns the window background.
	/// </summary>
	Macad::Occt::Aspect_Background^ Background();
	/// <summary>
	/// Returns the current image background fill mode.
	/// </summary>
	Macad::Occt::Aspect_FillMethod BackgroundFillMethod();
	/// <summary>
	/// Returns the window gradient background.
	/// </summary>
	Macad::Occt::Aspect_GradientBackground^ GradientBackground();
	/// <summary>
	/// Returns True if the window <me> is opened
	/// and False if the window is closed.
	/// </summary>
	bool IsMapped();
	/// <summary>
	/// Returns True if the window <me> is virtual
	/// </summary>
	bool IsVirtual();
	/// <summary>
	/// Setup the virtual state
	/// </summary>
	void SetVirtual(bool theVirtual);
	/// <summary>
	/// Returns The Window RATIO equal to the physical
	/// WIDTH/HEIGHT dimensions
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
	/// Returns native Window handle (HWND on Windows, Window with Xlib, and so on)
	/// </summary>
	System::IntPtr NativeHandle();
	/// <summary>
	/// Returns parent of native Window handle (HWND on Windows, Window with Xlib, and so on)
	/// </summary>
	System::IntPtr NativeParentHandle();
	/// <summary>
	/// Returns native Window FB config (GLXFBConfig on Xlib)
	/// </summary>
	/* Method skipped due to unknown mapping: __GLXFBConfigRec NativeFBConfig() */
	/// <summary>
	/// Returns connection to Display or NULL.
	/// </summary>
	/* Method skipped due to unknown mapping: Aspect_DisplayConnection DisplayConnection() */
	/// <summary>
	/// Sets window title.
	/// </summary>
	void SetTitle(Macad::Occt::TCollection_AsciiString^ theTitle);
	/// <summary>
	/// Invalidate entire window content.
	/// 
	/// Implementation is expected to allow calling this method from non-GUI thread,
	/// e.g. by queuing exposure event into window message queue or in other thread-safe manner.
	/// 
	/// Optional display argument should be passed when called from non-GUI thread
	/// on platforms implementing thread-unsafe connections to display.
	/// NULL can be passed instead otherwise.
	/// </summary>
	/* Method skipped due to unknown mapping: void InvalidateContent(Aspect_DisplayConnection theDisp, ) */
	/// <summary>
	/// Return device pixel ratio (logical to backing store scale factor).
	/// </summary>
	double DevicePixelRatio();
	/// <summary>
	/// Convert point from logical units into backing store units.
	/// </summary>
	Macad::Occt::Graphic3d_Vec2d^ ConvertPointToBacking(Macad::Occt::Graphic3d_Vec2d^ thePnt);
	/// <summary>
	/// Convert point from backing store units to logical units.
	/// </summary>
	Macad::Occt::Graphic3d_Vec2d^ ConvertPointFromBacking(Macad::Occt::Graphic3d_Vec2d^ thePnt);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Aspect_Window

//---------------------------------------------------------------------
//  Class  Aspect_XRAction
//---------------------------------------------------------------------
/// <summary>
/// XR action definition.
/// </summary>
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
	/// <summary>
	/// Main constructor.
	/// </summary>
	Aspect_XRAction(Macad::Occt::TCollection_AsciiString^ theId, Macad::Occt::Aspect_XRActionType theType);
	Aspect_XRAction(Macad::Occt::Aspect_XRAction^ parameter1);
	/// <summary>
	/// Return action id.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ Id();
	/// <summary>
	/// Return action type.
	/// </summary>
	Macad::Occt::Aspect_XRActionType Type();
	/// <summary>
	/// Return TRUE if action is defined.
	/// </summary>
	bool IsValid();
	/// <summary>
	/// Return action handle.
	/// </summary>
	/* Method skipped due to unknown mapping: long long unsigned int RawHandle() */
	/// <summary>
	/// Set action handle.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetRawHandle(long long unsigned int theHande, ) */
}; // class Aspect_XRAction

//---------------------------------------------------------------------
//  Class  Aspect_XRActionSet
//---------------------------------------------------------------------
/// <summary>
/// XR action set.
/// </summary>
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
	/// <summary>
	/// Main constructor.
	/// </summary>
	Aspect_XRActionSet(Macad::Occt::TCollection_AsciiString^ theId);
	Aspect_XRActionSet(Macad::Occt::Aspect_XRActionSet^ parameter1);
	/// <summary>
	/// Return action id.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ Id();
	/// <summary>
	/// Return action handle.
	/// </summary>
	/* Method skipped due to unknown mapping: long long unsigned int RawHandle() */
	/// <summary>
	/// Set action handle.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetRawHandle(long long unsigned int theHande, ) */
	/// <summary>
	/// Add action.
	/// </summary>
	void AddAction(Macad::Occt::Aspect_XRAction^ theAction);
	/// <summary>
	/// Return map of actions.
	/// </summary>
	Macad::Occt::Aspect_XRActionMap^ Actions();
}; // class Aspect_XRActionSet

//---------------------------------------------------------------------
//  Class  Aspect_XRSession
//---------------------------------------------------------------------
/// <summary>
/// Extended Reality (XR) Session interface.
/// </summary>
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
	/// <summary>
	/// Identifies which style of tracking origin the application wants to use for the poses it is requesting.
	/// </summary>
	enum class TrackingUniverseOrigin
	{
		TrackingUniverseOrigin_Seated = 0,
		TrackingUniverseOrigin_Standing = 1
	}; // enum  class TrackingUniverseOrigin

	//---------------------------------------------------------------------
	//  Enum  InfoString
	//---------------------------------------------------------------------
	/// <summary>
	/// Info string enumeration.
	/// </summary>
	enum class InfoString
	{
		InfoString_Vendor = 0,
		InfoString_Device = 1,
		InfoString_Tracker = 2,
		InfoString_SerialNumber = 3
	}; // enum  class InfoString

	Aspect_XRSession(Macad::Occt::Aspect_XRSession^ parameter1);
	/// <summary>
	/// Return TRUE if session is opened.
	/// </summary>
	bool IsOpen();
	/// <summary>
	/// Initialize session.
	/// </summary>
	bool Open();
	/// <summary>
	/// Release session.
	/// </summary>
	void Close();
	/// <summary>
	/// Fetch actual poses of tracked devices.
	/// </summary>
	bool WaitPoses();
	/// <summary>
	/// Return recommended viewport Width x Height for rendering into VR.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Vec2<int> RecommendedViewport() */
	/// <summary>
	/// Return transformation from eye to head.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Mat4<double> EyeToHeadTransform(Aspect_Eye theEye, ) */
	/// <summary>
	/// Return transformation from head to eye.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Mat4<double> HeadToEyeTransform(Aspect_Eye theEye, ) */
	/// <summary>
	/// Return projection matrix.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Mat4<double> ProjectionMatrix(Aspect_Eye theEye, double theZNear, double theZFar, ) */
	/// <summary>
	/// Return FALSE if projection frustums are unsupported and general 4x4 projection matrix should be fetched instead
	/// </summary>
	bool HasProjectionFrustums();
	/// <summary>
	/// Receive XR events.
	/// </summary>
	void ProcessEvents();
	/// <summary>
	/// Submit texture eye to XR Composer.
	/// </summary>
	/// <param name="theTexture">
	///     [in] texture handle
	/// </param>
	/// <param name="theGraphicsLib">
	/// [in] graphics library in which texture handle is defined
	/// </param>
	/// <param name="theColorSpace">
	///  [in] texture color space;
	/// sRGB means no color conversion by composer;
	/// Linear means to sRGB color conversion by composer
	/// </param>
	/// <param name="theEye">
	/// [in] eye to display
	/// </param>
	/// <returns>
	/// FALSE on error
	/// </returns>
	bool SubmitEye(System::IntPtr theTexture, Macad::Occt::Aspect_GraphicsLibrary theGraphicsLib, Macad::Occt::Aspect_ColorSpace theColorSpace, Macad::Occt::Aspect_Eye theEye);
	/// <summary>
	/// Return unit scale factor defined as scale factor for m (meters); 1.0 by default.
	/// </summary>
	double UnitFactor();
	/// <summary>
	/// Set unit scale factor.
	/// </summary>
	void SetUnitFactor(double theFactor);
	/// <summary>
	/// Return aspect ratio.
	/// </summary>
	double Aspect();
	/// <summary>
	/// Return field of view.
	/// </summary>
	double FieldOfView();
	/// <summary>
	/// Return Intra-ocular Distance (IOD); also known as Interpupillary Distance (IPD).
	/// Defined in meters by default (@sa UnitFactor()).
	/// </summary>
	double IOD();
	/// <summary>
	/// Return display frequency or 0 if unknown.
	/// </summary>
	float DisplayFrequency();
	/// <summary>
	/// Return projection frustum.
	/// </summary>
	/// @sa HasProjectionFrustums().
	/* Method skipped due to unknown mapping: Aspect_FrustumLRBT<double> ProjectionFrustum(Aspect_Eye theEye, ) */
	/// <summary>
	/// Return head orientation in right-handed system:
	/// +y is up
	/// +x is to the right
	/// -z is forward
	/// Distance unit is meters by default (@sa UnitFactor()).
	/// </summary>
	Macad::Occt::Trsf HeadPose();
	/// <summary>
	/// Return left hand orientation.
	/// </summary>
	Macad::Occt::Trsf LeftHandPose();
	/// <summary>
	/// Return right hand orientation.
	/// </summary>
	Macad::Occt::Trsf RightHandPose();
	/// <summary>
	/// Return number of tracked poses array.
	/// </summary>
	Macad::Occt::Aspect_TrackedDevicePoseArray^ TrackedPoses();
	/// <summary>
	/// Return TRUE if device orientation is defined.
	/// </summary>
	bool HasTrackedPose(int theDevice);
	/// <summary>
	/// Return index of tracked device of known role, or -1 if undefined.
	/// </summary>
	int NamedTrackedDevice(Macad::Occt::Aspect_XRTrackedDeviceRole theDevice);
	/// <summary>
	/// Load model for displaying device.
	/// </summary>
	/// <param name="theDevice">
	///  [in] device index
	/// </param>
	/// <param name="theTexture">
	/// [out] texture source
	/// </param>
	/// <returns>
	/// model triangulation or NULL if not found
	/// </returns>
	Macad::Occt::Graphic3d_ArrayOfTriangles^ LoadRenderModel(int theDevice, Macad::Occt::Image_Texture^ theTexture);
	/// <summary>
	/// Load model for displaying device.
	/// </summary>
	/// <param name="theDevice">
	///  [in] device index
	/// </param>
	/// <param name="theToApplyUnitFactor">
	/// [in] flag to apply unit scale factor
	/// </param>
	/// <param name="theTexture">
	/// [out] texture source
	/// </param>
	/// <returns>
	/// model triangulation or NULL if not found
	/// </returns>
	Macad::Occt::Graphic3d_ArrayOfTriangles^ LoadRenderModel(int theDevice, bool theToApplyUnitFactor, Macad::Occt::Image_Texture^ theTexture);
	/// <summary>
	/// Fetch data for digital input action (like button).
	/// </summary>
	/// <param name="theAction">
	/// [in] action of Aspect_XRActionType_InputDigital type
	/// </param>
	Macad::Occt::Aspect_XRDigitalActionData^ GetDigitalActionData(Macad::Occt::Aspect_XRAction^ theAction);
	/// <summary>
	/// Fetch data for digital input action (like axis).
	/// </summary>
	/// <param name="theAction">
	/// [in] action of Aspect_XRActionType_InputAnalog type
	/// </param>
	Macad::Occt::Aspect_XRAnalogActionData^ GetAnalogActionData(Macad::Occt::Aspect_XRAction^ theAction);
	/// <summary>
	/// Fetch data for pose input action (like fingertip position).
	/// The returned values will match the values returned by the last call to WaitPoses().
	/// </summary>
	/// <param name="theAction">
	/// [in] action of Aspect_XRActionType_InputPose type
	/// </param>
	Macad::Occt::Aspect_XRPoseActionData^ GetPoseActionDataForNextFrame(Macad::Occt::Aspect_XRAction^ theAction);
	/// <summary>
	/// Trigger vibration.
	/// </summary>
	void TriggerHapticVibrationAction(Macad::Occt::Aspect_XRAction^ theAction, Macad::Occt::Aspect_XRHapticActionData^ theParams);
	/// <summary>
	/// Abort vibration.
	/// </summary>
	void AbortHapticVibrationAction(Macad::Occt::Aspect_XRAction^ theAction);
	/// <summary>
	/// Return tracking origin.
	/// </summary>
	Macad::Occt::Aspect_XRSession::TrackingUniverseOrigin TrackingOrigin();
	/// <summary>
	/// Set tracking origin.
	/// </summary>
	void SetTrackingOrigin(Macad::Occt::Aspect_XRSession::TrackingUniverseOrigin theOrigin);
	/// <summary>
	/// Return generic action for specific hand or NULL if undefined.
	/// </summary>
	Macad::Occt::Aspect_XRAction^ GenericAction(Macad::Occt::Aspect_XRTrackedDeviceRole theDevice, Macad::Occt::Aspect_XRGenericAction theAction);
	/// <summary>
	/// Query information.
	/// </summary>
	Macad::Occt::TCollection_AsciiString^ GetString(Macad::Occt::Aspect_XRSession::InfoString theInfo);
}; // class Aspect_XRSession

//---------------------------------------------------------------------
//  Class  Aspect_OpenVRSession
//---------------------------------------------------------------------
/// <summary>
/// OpenVR wrapper implementing Aspect_XRSession interface.
/// </summary>
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
	/// <summary>
	/// Empty constructor.
	/// </summary>
	Aspect_OpenVRSession();
	Aspect_OpenVRSession(Macad::Occt::Aspect_OpenVRSession^ parameter1);
	/// <summary>
	/// Return TRUE if an HMD may be presented on the system (e.g. to show VR checkbox in application GUI).
	/// This is fast check, and even if it returns TRUE, opening session may fail.
	/// </summary>
	static bool IsHmdPresent();
	/// <summary>
	/// Return TRUE if session is opened.
	/// </summary>
	bool IsOpen();
	/// <summary>
	/// Initialize session.
	/// </summary>
	bool Open();
	/// <summary>
	/// Release session.
	/// </summary>
	void Close();
	/// <summary>
	/// Fetch actual poses of tracked devices.
	/// </summary>
	bool WaitPoses();
	/// <summary>
	/// Return recommended viewport Width x Height for rendering into VR.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Vec2<int> RecommendedViewport() */
	/// <summary>
	/// Return transformation from eye to head.
	/// vr::GetEyeToHeadTransform() wrapper.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Mat4<double> EyeToHeadTransform(Aspect_Eye theEye, ) */
	/// <summary>
	/// Return projection matrix.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Mat4<double> ProjectionMatrix(Aspect_Eye theEye, double theZNear, double theZFar, ) */
	/// <summary>
	/// Return TRUE.
	/// </summary>
	bool HasProjectionFrustums();
	/// <summary>
	/// Receive XR events.
	/// </summary>
	void ProcessEvents();
	/// <summary>
	/// Submit texture eye to XR Composer.
	/// </summary>
	/// <param name="theTexture">
	///     [in] texture handle
	/// </param>
	/// <param name="theGraphicsLib">
	/// [in] graphics library in which texture handle is defined
	/// </param>
	/// <param name="theColorSpace">
	///  [in] texture color space;
	/// sRGB means no color conversion by composer;
	/// Linear means to sRGB color conversion by composer
	/// </param>
	/// <param name="theEye">
	/// [in] eye to display
	/// </param>
	/// <returns>
	/// FALSE on error
	/// </returns>
	bool SubmitEye(System::IntPtr theTexture, Macad::Occt::Aspect_GraphicsLibrary theGraphicsLib, Macad::Occt::Aspect_ColorSpace theColorSpace, Macad::Occt::Aspect_Eye theEye);
	/// <summary>
	/// Query information.
	/// </summary>
	/* Method skipped due to unknown mapping: TCollection_AsciiString GetString(InfoString theInfo, ) */
	/// <summary>
	/// Return index of tracked device of known role.
	/// </summary>
	int NamedTrackedDevice(Macad::Occt::Aspect_XRTrackedDeviceRole theDevice);
	/// <summary>
	/// Fetch data for digital input action (like button).
	/// </summary>
	Macad::Occt::Aspect_XRDigitalActionData^ GetDigitalActionData(Macad::Occt::Aspect_XRAction^ theAction);
	/// <summary>
	/// Fetch data for analog input action (like axis).
	/// </summary>
	Macad::Occt::Aspect_XRAnalogActionData^ GetAnalogActionData(Macad::Occt::Aspect_XRAction^ theAction);
	/// <summary>
	/// Fetch data for pose input action (like fingertip position).
	/// </summary>
	Macad::Occt::Aspect_XRPoseActionData^ GetPoseActionDataForNextFrame(Macad::Occt::Aspect_XRAction^ theAction);
	/// <summary>
	/// Set tracking origin.
	/// </summary>
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
	/// <summary>
	/// creates a new grid. By default this grid is not
	/// active.
	/// The first angle is given relatively to the horizontal.
	/// The second angle is given relatively to the vertical.
	/// </summary>
	Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle, double aSecondAngle, double aRotationAngle);
	/// <summary>
	/// creates a new grid. By default this grid is not
	/// active.
	/// The first angle is given relatively to the horizontal.
	/// The second angle is given relatively to the vertical.
	/// </summary>
	Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle, double aSecondAngle);
	/// <summary>
	/// creates a new grid. By default this grid is not
	/// active.
	/// The first angle is given relatively to the horizontal.
	/// The second angle is given relatively to the vertical.
	/// </summary>
	Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle);
	/// <summary>
	/// creates a new grid. By default this grid is not
	/// active.
	/// The first angle is given relatively to the horizontal.
	/// The second angle is given relatively to the vertical.
	/// </summary>
	Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin);
	/// <summary>
	/// creates a new grid. By default this grid is not
	/// active.
	/// The first angle is given relatively to the horizontal.
	/// The second angle is given relatively to the vertical.
	/// </summary>
	Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin);
	/// <summary>
	/// creates a new grid. By default this grid is not
	/// active.
	/// The first angle is given relatively to the horizontal.
	/// The second angle is given relatively to the vertical.
	/// </summary>
	Aspect_RectangularGrid(double aXStep, double aYStep);
	Aspect_RectangularGrid(Macad::Occt::Aspect_RectangularGrid^ parameter1);
	/// <summary>
	/// defines the x step of the grid.
	/// </summary>
	void SetXStep(double aStep);
	/// <summary>
	/// defines the y step of the grid.
	/// </summary>
	void SetYStep(double aStep);
	/// <summary>
	/// defines the angle of the second network
	/// the fist angle is given relatively to the horizontal.
	/// the second angle is given relatively to the vertical.
	/// </summary>
	void SetAngle(double anAngle1, double anAngle2);
	void SetGridValues(double XOrigin, double YOrigin, double XStep, double YStep, double RotationAngle);
	/// <summary>
	/// returns the point of the grid the closest to the point X,Y
	/// </summary>
	void Compute(double X, double Y, double% gridX, double% gridY);
	/// <summary>
	/// returns the x step of the grid.
	/// </summary>
	double XStep();
	/// <summary>
	/// returns the x step of the grid.
	/// </summary>
	double YStep();
	/// <summary>
	/// returns the x Angle of the grid, relatively to the horizontal.
	/// </summary>
	double FirstAngle();
	/// <summary>
	/// returns the y Angle of the grid, relatively to the vertical.
	/// </summary>
	double SecondAngle();
	void Init();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Aspect_RectangularGrid

//---------------------------------------------------------------------
//  Class  Aspect_Touch
//---------------------------------------------------------------------
/// <summary>
/// Structure holding touch position - original and current location.
/// </summary>
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
	/// <summary>
	/// Empty constructor
	/// </summary>
	Aspect_Touch();
	/// <summary>
	/// Constructor with initialization.
	/// </summary>
	/* Method skipped due to unknown mapping: void Aspect_Touch(NCollection_Vec2<double> thePnt, Standard_Boolean theIsPreciseDevice, ) */
	/// <summary>
	/// Constructor with initialization.
	/// </summary>
	Aspect_Touch(double theX, double theY, bool theIsPreciseDevice);
	Aspect_Touch(Macad::Occt::Aspect_Touch^ parameter1);
	/// <summary>
	/// Return values delta.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Vec2<double> Delta() */
}; // class Aspect_Touch

//---------------------------------------------------------------------
//  Class  Aspect_VKeySet
//---------------------------------------------------------------------
/// <summary>
/// Structure defining key state.
/// </summary>
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
	/// <summary>
	/// Key state.
	/// </summary>
	enum class KeyStatus
	{
		KeyStatus_Free = 0,
		KeyStatus_Pressed = 1,
		KeyStatus_Released = 2
	}; // enum  class KeyStatus

	/// <summary>
	/// Main constructor.
	/// </summary>
	Aspect_VKeySet();
	/// <summary>
	/// Return active modifiers.
	/// </summary>
	unsigned int Modifiers();
	/// <summary>
	/// Return timestamp of press event.
	/// </summary>
	double DownTime(unsigned int theKey);
	/// <summary>
	/// Return timestamp of release event.
	/// </summary>
	double TimeUp(unsigned int theKey);
	/// <summary>
	/// Return TRUE if key is in Free state.
	/// </summary>
	bool IsFreeKey(unsigned int theKey);
	/// <summary>
	/// Return TRUE if key is in Pressed state.
	/// </summary>
	bool IsKeyDown(unsigned int theKey);
	/// <summary>
	/// Return mutex for thread-safe updates.
	/// All operations in class implicitly locks this mutex,
	/// so this method could be used only for batch processing of keys.
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Mutex Mutex() */
	/// <summary>
	/// Reset the key state into unpressed state.
	/// </summary>
	void Reset();
	/// <summary>
	/// Press key.
	/// </summary>
	/// <param name="theKey">
	/// key pressed
	/// </param>
	/// <param name="theTime">
	/// event timestamp
	/// </param>
	void KeyDown(unsigned int theKey, double theTime, double thePressure);
	/// <summary>
	/// Press key.
	/// </summary>
	/// <param name="theKey">
	/// key pressed
	/// </param>
	/// <param name="theTime">
	/// event timestamp
	/// </param>
	void KeyDown(unsigned int theKey, double theTime);
	/// <summary>
	/// Release key.
	/// </summary>
	/// <param name="theKey">
	/// key pressed
	/// </param>
	/// <param name="theTime">
	/// event timestamp
	/// </param>
	void KeyUp(unsigned int theKey, double theTime);
	/// <summary>
	/// Simulate key up/down events from axis value.
	/// </summary>
	void KeyFromAxis(unsigned int theNegative, unsigned int thePositive, double theTime, double thePressure);
	/// <summary>
	/// Return duration of the button in pressed state.
	/// </summary>
	/// <param name="theKey">
	///      key to check
	/// </param>
	/// <param name="theTime">
	///     current time (for computing duration from key down time)
	/// </param>
	/// <param name="theDuration">
	/// key press duration
	/// </param>
	/// <returns>
	/// TRUE if key was in pressed state
	/// </returns>
	bool HoldDuration(unsigned int theKey, double theTime, double% theDuration);
	/// <summary>
	/// Return duration of the button in pressed state.
	/// </summary>
	/// <param name="theKey">
	///      key to check
	/// </param>
	/// <param name="theTime">
	///     current time (for computing duration from key down time)
	/// </param>
	/// <param name="theDuration">
	/// key press duration
	/// </param>
	/// <param name="thePressure">
	/// key pressure
	/// </param>
	/// <returns>
	/// TRUE if key was in pressed state
	/// </returns>
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
	Aspect_WindowDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
	Aspect_WindowDefinitionError(Macad::Occt::Aspect_WindowDefinitionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_WindowDefinitionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_WindowDefinitionError^ NewInstance();
	static Macad::Occt::Aspect_WindowDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Aspect_WindowError(System::String^ theMessage, System::String^ theStackTrace);
	Aspect_WindowError(Macad::Occt::Aspect_WindowError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Aspect_WindowError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Aspect_WindowError^ NewInstance();
	static Macad::Occt::Aspect_WindowError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Aspect_WindowError

//---------------------------------------------------------------------
//  Class  Aspect_WindowInputListener
//---------------------------------------------------------------------
/// <summary>
/// Defines a listener for window input events.
/// </summary>
public ref class Aspect_WindowInputListener : public BaseClass<::Aspect_WindowInputListener>
{

#ifdef Include_Aspect_WindowInputListener_h
public:
	Include_Aspect_WindowInputListener_h
#endif

protected:
	Aspect_WindowInputListener(InitMode init)
		: BaseClass<::Aspect_WindowInputListener>( init )
	{}

public:
	Aspect_WindowInputListener(::Aspect_WindowInputListener* nativeInstance)
		: BaseClass<::Aspect_WindowInputListener>( nativeInstance, true )
	{}

	Aspect_WindowInputListener(::Aspect_WindowInputListener& nativeInstance)
		: BaseClass<::Aspect_WindowInputListener>( &nativeInstance, false )
	{}

	property ::Aspect_WindowInputListener* NativeInstance
	{
		::Aspect_WindowInputListener* get()
		{
			return static_cast<::Aspect_WindowInputListener*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Return event time (e.g. current time).
	/// </summary>
	double EventTime();
	/// <summary>
	/// Handle expose event (window content has been invalidation and should be redrawn).
	/// </summary>
	void ProcessExpose();
	/// <summary>
	/// Handle window resize event.
	/// </summary>
	void ProcessConfigure(bool theIsResized);
	/// <summary>
	/// Handle window input event immediately (flush input buffer or ignore).
	/// </summary>
	void ProcessInput();
	/// <summary>
	/// Handle focus event.
	/// </summary>
	void ProcessFocus(bool theIsActivated);
	/// <summary>
	/// Handle window close event.
	/// </summary>
	void ProcessClose();
	/// <summary>
	/// Press key.
	/// Default implementation updates internal cache.
	/// </summary>
	/// <param name="theKey">
	/// key pressed
	/// </param>
	/// <param name="theTime">
	/// event timestamp
	/// </param>
	void KeyDown(unsigned int theKey, double theTime, double thePressure);
	/// <summary>
	/// Press key.
	/// Default implementation updates internal cache.
	/// </summary>
	/// <param name="theKey">
	/// key pressed
	/// </param>
	/// <param name="theTime">
	/// event timestamp
	/// </param>
	void KeyDown(unsigned int theKey, double theTime);
	/// <summary>
	/// Release key.
	/// Default implementation updates internal cache.
	/// </summary>
	/// <param name="theKey">
	/// key pressed
	/// </param>
	/// <param name="theTime">
	/// event timestamp
	/// </param>
	void KeyUp(unsigned int theKey, double theTime);
	/// <summary>
	/// Simulate key up/down events from axis value.
	/// Default implementation updates internal cache.
	/// </summary>
	void KeyFromAxis(unsigned int theNegative, unsigned int thePositive, double theTime, double thePressure);
	/// <summary>
	/// Update mouse scroll event.
	/// This method is expected to be called from UI thread.
	/// </summary>
	/// <param name="theDelta">
	/// mouse cursor position and delta
	/// </param>
	/// <returns>
	/// TRUE if new event has been created or FALSE if existing one has been updated
	/// </returns>
	bool UpdateMouseScroll(Macad::Occt::Aspect_ScrollDelta^ theDelta);
	/// <summary>
	/// Handle mouse button press/release event.
	/// This method is expected to be called from UI thread.
	/// </summary>
	/// <param name="thePoint">
	///      mouse cursor position
	/// </param>
	/// <param name="theButtons">
	///    pressed buttons
	/// </param>
	/// <param name="theModifiers">
	///  key modifiers
	/// </param>
	/// <param name="theIsEmulated">
	/// if TRUE then mouse event comes NOT from real mouse
	/// but emulated from non-precise input like touch on screen
	/// </param>
	/// <returns>
	/// TRUE if window content should be redrawn
	/// </returns>
	bool UpdateMouseButtons(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated);
	/// <summary>
	/// Handle mouse cursor movement event.
	/// This method is expected to be called from UI thread.
	/// Default implementation does nothing.
	/// </summary>
	/// <param name="thePoint">
	///      mouse cursor position
	/// </param>
	/// <param name="theButtons">
	///    pressed buttons
	/// </param>
	/// <param name="theModifiers">
	///  key modifiers
	/// </param>
	/// <param name="theIsEmulated">
	/// if TRUE then mouse event comes NOT from real mouse
	/// but emulated from non-precise input like touch on screen
	/// </param>
	/// <returns>
	/// TRUE if window content should be redrawn
	/// </returns>
	bool UpdateMousePosition(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated);
	/// <summary>
	/// Handle mouse button press event.
	/// This method is expected to be called from UI thread.
	/// Default implementation redirects to UpdateMousePosition().
	/// </summary>
	/// <param name="thePoint">
	///      mouse cursor position
	/// </param>
	/// <param name="theButton">
	///     pressed button
	/// </param>
	/// <param name="theModifiers">
	///  key modifiers
	/// </param>
	/// <param name="theIsEmulated">
	/// if TRUE then mouse event comes NOT from real mouse
	/// but emulated from non-precise input like touch on screen
	/// </param>
	/// <returns>
	/// TRUE if window content should be redrawn
	/// </returns>
	bool PressMouseButton(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsEmulated);
	/// <summary>
	/// Handle mouse button release event.
	/// This method is expected to be called from UI thread.
	/// Default implementation redirects to UpdateMousePosition().
	/// </summary>
	/// <param name="thePoint">
	///      mouse cursor position
	/// </param>
	/// <param name="theButton">
	///     released button
	/// </param>
	/// <param name="theModifiers">
	///  key modifiers
	/// </param>
	/// <param name="theIsEmulated">
	/// if TRUE then mouse event comes NOT from real mouse
	/// but emulated from non-precise input like touch on screen
	/// </param>
	/// <returns>
	/// TRUE if window content should be redrawn
	/// </returns>
	bool ReleaseMouseButton(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsEmulated);
	/// <summary>
	/// Return currently pressed mouse buttons.
	/// </summary>
	unsigned int PressedMouseButtons();
	/// <summary>
	/// Return active key modifiers passed with last mouse event.
	/// </summary>
	unsigned int LastMouseFlags();
	/// <summary>
	/// Return last mouse position.
	/// </summary>
	Macad::Occt::Graphic3d_Vec2i^ LastMousePosition();
	/// <summary>
	/// Return TRUE if touches map is not empty.
	/// </summary>
	bool HasTouchPoints();
	/// <summary>
	/// Return map of active touches.
	/// </summary>
	/* Method skipped due to unknown mapping: Aspect_TouchMap TouchPoints() */
	/// <summary>
	/// Add touch point with the given ID.
	/// This method is expected to be called from UI thread.
	/// </summary>
	/// <param name="theId">
	/// touch unique identifier
	/// </param>
	/// <param name="thePnt">
	/// touch coordinates
	/// </param>
	/// <param name="theClearBefore">
	/// if TRUE previously registered touches will be removed
	/// </param>
	void AddTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt, bool theClearBefore);
	/// <summary>
	/// Add touch point with the given ID.
	/// This method is expected to be called from UI thread.
	/// </summary>
	/// <param name="theId">
	/// touch unique identifier
	/// </param>
	/// <param name="thePnt">
	/// touch coordinates
	/// </param>
	/// <param name="theClearBefore">
	/// if TRUE previously registered touches will be removed
	/// </param>
	void AddTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt);
	/// <summary>
	/// Remove touch point with the given ID.
	/// This method is expected to be called from UI thread.
	/// </summary>
	/// <param name="theId">
	/// touch unique identifier
	/// </param>
	/// <param name="theClearSelectPnts">
	/// if TRUE will initiate clearing of selection points
	/// </param>
	/// <returns>
	/// TRUE if point has been removed
	/// </returns>
	bool RemoveTouchPoint(size_t theId, bool theClearSelectPnts);
	/// <summary>
	/// Remove touch point with the given ID.
	/// This method is expected to be called from UI thread.
	/// </summary>
	/// <param name="theId">
	/// touch unique identifier
	/// </param>
	/// <param name="theClearSelectPnts">
	/// if TRUE will initiate clearing of selection points
	/// </param>
	/// <returns>
	/// TRUE if point has been removed
	/// </returns>
	bool RemoveTouchPoint(size_t theId);
	/// <summary>
	/// Update touch point with the given ID.
	/// If point with specified ID was not registered before, it will be added.
	/// This method is expected to be called from UI thread.
	/// </summary>
	/// <param name="theId">
	/// touch unique identifier
	/// </param>
	/// <param name="thePnt">
	/// touch coordinates
	/// </param>
	void UpdateTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt);
	/// <summary>
	/// Return acceleration ratio for translation event; 2.0 by default.
	/// </summary>
	float Get3dMouseTranslationScale();
	/// <summary>
	/// Set acceleration ratio for translation event.
	/// </summary>
	void Set3dMouseTranslationScale(float theScale);
	/// <summary>
	/// Return acceleration ratio for rotation event; 4.0 by default.
	/// </summary>
	float Get3dMouseRotationScale();
	/// <summary>
	/// Set acceleration ratio for rotation event.
	/// </summary>
	void Set3dMouseRotationScale(float theScale);
	/// <summary>
	/// Return quadric acceleration flag; TRUE by default.
	/// </summary>
	bool To3dMousePreciseInput();
	/// <summary>
	/// Set quadric acceleration flag.
	/// </summary>
	void Set3dMousePreciseInput(bool theIsQuadric);
	/// <summary>
	/// Return 3d mouse rotation axes (tilt/roll/spin) ignore flag; (FALSE, FALSE, FALSE) by default.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Vec3<bool> Get3dMouseIsNoRotate() */
	/// <summary>
	/// Return 3d mouse rotation axes (tilt/roll/spin) ignore flag; (FALSE, FALSE, FALSE) by default.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Vec3<bool> Change3dMouseIsNoRotate() */
	/// <summary>
	/// Return 3d mouse rotation axes (tilt/roll/spin) reverse flag; (TRUE, FALSE, FALSE) by default.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Vec3<bool> Get3dMouseToReverse() */
	/// <summary>
	/// Return 3d mouse rotation axes (tilt/roll/spin) reverse flag; (TRUE, FALSE, FALSE) by default.
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_Vec3<bool> Change3dMouseToReverse() */
	/// <summary>
	/// Process 3d mouse input event (redirects to translation, rotation and keys).
	/// </summary>
	/* Method skipped due to unknown mapping: bool Update3dMouse(WNT_HIDSpaceMouse theEvent, ) */
	/// <summary>
	/// Process 3d mouse input translation event.
	/// </summary>
	/* Method skipped due to unknown mapping: bool update3dMouseTranslation(WNT_HIDSpaceMouse theEvent, ) */
	/// <summary>
	/// Process 3d mouse input rotation event.
	/// </summary>
	/* Method skipped due to unknown mapping: bool update3dMouseRotation(WNT_HIDSpaceMouse theEvent, ) */
	/// <summary>
	/// Process 3d mouse input keys event.
	/// </summary>
	/* Method skipped due to unknown mapping: bool update3dMouseKeys(WNT_HIDSpaceMouse theEvent, ) */
}; // class Aspect_WindowInputListener

}; // namespace Occt
}; // namespace Macad
