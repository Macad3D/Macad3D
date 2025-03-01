// Generated wrapper code for package Aspect

#pragma once

#include "Standard.h"

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
    Lines = 0,
    Points = 1,
    None = 2
}; // enum  class Aspect_GridDrawMode

//---------------------------------------------------------------------
//  Enum  Aspect_ColorSpace
//---------------------------------------------------------------------
/// <summary>
/// Texture color spaces accepted by XR composer.
/// </summary>
public enum class Aspect_ColorSpace
{
    sRGB = 0,
    Linear = 1
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
    DELETE_WINDOW = 0
}; // enum  class Aspect_XAtom

//---------------------------------------------------------------------
//  Enum  Aspect_Eye
//---------------------------------------------------------------------
/// <summary>
/// Camera eye index within stereoscopic pair.
/// </summary>
public enum class Aspect_Eye
{
    Left = 0,
    Right = 1
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
    NONE = 0,
    CENTERED = 1,
    TILED = 2,
    STRETCH = 3
}; // enum  class Aspect_FillMethod

//---------------------------------------------------------------------
//  Enum  Aspect_GradientFillMethod
//---------------------------------------------------------------------
/// <summary>
/// Defines the fill methods to write gradient background in a window.
/// </summary>
public enum class Aspect_GradientFillMethod
{
    None = 0,
    Horizontal = 1,
    Vertical = 2,
    Diagonal1 = 3,
    Diagonal2 = 4,
    Corner1 = 5,
    Corner2 = 6,
    Corner3 = 7,
    Corner4 = 8,
    Elliptical = 9,
    NONE = 0,
    HOR = 1,
    VER = 2,
    DIAG1 = 3,
    DIAG2 = 4,
    CORNER1 = 5,
    CORNER2 = 6,
    CORNER3 = 7,
    CORNER4 = 8
}; // enum  class Aspect_GradientFillMethod

//---------------------------------------------------------------------
//  Enum  Aspect_GraphicsLibrary
//---------------------------------------------------------------------
/// <summary>
/// Graphics API enumeration.
/// </summary>
public enum class Aspect_GraphicsLibrary
{
    OpenGL = 0,
    OpenGLES = 1
}; // enum  class Aspect_GraphicsLibrary

//---------------------------------------------------------------------
//  Enum  Aspect_GridType
//---------------------------------------------------------------------
/// <summary>
/// Defines the grid type : Rectangular or Circular.
/// </summary>
public enum class Aspect_GridType
{
    Rectangular = 0,
    Circular = 1
}; // enum  class Aspect_GridType

//---------------------------------------------------------------------
//  Enum  Aspect_HatchStyle
//---------------------------------------------------------------------
/// <summary>
/// Definition of all available hatch styles.
/// </summary>
public enum class Aspect_HatchStyle
{
    SOLID = 0,
    HORIZONTAL = 7,
    HORIZONTAL_WIDE = 11,
    VERTICAL = 8,
    VERTICAL_WIDE = 12,
    DIAGONAL_45 = 5,
    DIAGONAL_45_WIDE = 9,
    DIAGONAL_135 = 6,
    DIAGONAL_135_WIDE = 10,
    GRID = 3,
    GRID_WIDE = 4,
    GRID_DIAGONAL = 1,
    GRID_DIAGONAL_WIDE = 2,
    NB = 13
}; // enum  class Aspect_HatchStyle

//---------------------------------------------------------------------
//  Enum  Aspect_InteriorStyle
//---------------------------------------------------------------------
/// <summary>
/// Interior types for primitive faces.
/// </summary>
public enum class Aspect_InteriorStyle
{
    EMPTY = -1,
    SOLID = 0,
    HATCH = 1,
    HIDDENLINE = 2,
    POINT = 3,
    HOLLOW = -1
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
    UNKNOWN = 0,
    NO_BORDER = 1,
    TOP_BORDER = 2,
    RIGHT_BORDER = 3,
    BOTTOM_BORDER = 4,
    LEFT_BORDER = 5,
    TOP_AND_RIGHT_BORDER = 6,
    RIGHT_AND_BOTTOM_BORDER = 7,
    BOTTOM_AND_LEFT_BORDER = 8,
    LEFT_AND_TOP_BORDER = 9
}; // enum  class Aspect_TypeOfResize

//---------------------------------------------------------------------
//  Enum  Aspect_XRActionType
//---------------------------------------------------------------------
/// <summary>
/// XR action type.
/// </summary>
public enum class Aspect_XRActionType
{
    InputDigital = 0,
    InputAnalog = 1,
    InputPose = 2,
    InputSkeletal = 3,
    OutputHaptic = 4
}; // enum  class Aspect_XRActionType

//---------------------------------------------------------------------
//  Enum  Aspect_XRGenericAction
//---------------------------------------------------------------------
/// <summary>
/// Generic XR action.
/// </summary>
public enum class Aspect_XRGenericAction
{
    IsHeadsetOn = 0,
    InputAppMenu = 1,
    InputSysMenu = 2,
    InputTriggerPull = 3,
    InputTriggerClick = 4,
    InputGripClick = 5,
    InputTrackPadPosition = 6,
    InputTrackPadTouch = 7,
    InputTrackPadClick = 8,
    InputThumbstickPosition = 9,
    InputThumbstickTouch = 10,
    InputThumbstickClick = 11,
    InputPoseBase = 12,
    InputPoseFront = 13,
    InputPoseHandGrip = 14,
    InputPoseFingerTip = 15,
    OutputHaptic = 16
}; // enum  class Aspect_XRGenericAction

//---------------------------------------------------------------------
//  Enum  Aspect_XRTrackedDeviceRole
//---------------------------------------------------------------------
/// <summary>
/// Predefined tracked devices.
/// </summary>
public enum class Aspect_XRTrackedDeviceRole
{
    Head = 0,
    LeftHand = 1,
    RightHand = 2,
    Other = 3
}; // enum  class Aspect_XRTrackedDeviceRole

//---------------------------------------------------------------------
//  Enum  Aspect_PolygonOffsetMode
//---------------------------------------------------------------------
public enum class Aspect_PolygonOffsetMode
{
    Off = 0,
    Fill = 1,
    Line = 2,
    Point = 4,
    All = 7,
    None = 8,
    Mask = 15
}; // enum  class Aspect_PolygonOffsetMode

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfColorScaleData
//---------------------------------------------------------------------
/// <summary>
/// Defines the using type of colors and labels
/// </summary>
public enum class Aspect_TypeOfColorScaleData
{
    AUTO = 0,
    USER = 1
}; // enum  class Aspect_TypeOfColorScaleData

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfColorScaleOrientation
//---------------------------------------------------------------------
/// <summary>
/// Defines the type of color scale orientation
/// </summary>
public enum class Aspect_TypeOfColorScaleOrientation
{
    NONE = 0,
    LEFT = 1,
    RIGHT = 2,
    CENTER = 3
}; // enum  class Aspect_TypeOfColorScaleOrientation

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfColorScalePosition
//---------------------------------------------------------------------
/// <summary>
/// Defines the type of position for color scale labels
/// </summary>
public enum class Aspect_TypeOfColorScalePosition
{
    NONE = 0,
    LEFT = 1,
    RIGHT = 2,
    CENTER = 3
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
    RELATIVE = 0,
    ABSOLUTE = 1
}; // enum  class Aspect_TypeOfDeflection

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfDisplayText
//---------------------------------------------------------------------
/// <summary>
/// Define the display type of the text.
/// </summary>
public enum class Aspect_TypeOfDisplayText
{
    NORMAL = 0,
    SUBTITLE = 1,
    DEKALE = 2,
    BLEND = 3,
    DIMENSION = 4,
    SHADOW = 5
}; // enum  class Aspect_TypeOfDisplayText

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfFacingModel
//---------------------------------------------------------------------
public enum class Aspect_TypeOfFacingModel
{
    BOTH_SIDE = 0,
    BACK_SIDE = 1,
    FRONT_SIDE = 2
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
    COLOR = 0,
    BOUNDBOX = 1
}; // enum  class Aspect_TypeOfHighlightMethod

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfLine
//---------------------------------------------------------------------
/// <summary>
/// Definition of line types
/// </summary>
public enum class Aspect_TypeOfLine
{
    EMPTY = -1,
    SOLID = 0,
    DASH = 1,
    DOT = 2,
    DOTDASH = 3,
    USERDEFINED = 4
}; // enum  class Aspect_TypeOfLine

//---------------------------------------------------------------------
//  Enum  Aspect_TypeOfMarker
//---------------------------------------------------------------------
/// <summary>
/// Definition of types of markers
/// </summary>
public enum class Aspect_TypeOfMarker
{
    EMPTY = -1,
    POINT = 0,
    PLUS = 1,
    STAR = 2,
    X = 3,
    O = 4,
    O_POINT = 5,
    O_PLUS = 6,
    O_STAR = 7,
    O_X = 8,
    RING1 = 9,
    RING2 = 10,
    RING3 = 11,
    BALL = 12,
    USERDEFINED = 13
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
    NORMAL = 0,
    ANNOTATION = 1
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
    CENTER = 0,
    TOP = 1,
    BOTTOM = 2,
    LEFT = 4,
    RIGHT = 8,
    LEFT_LOWER = 6,
    LEFT_UPPER = 5,
    RIGHT_LOWER = 10,
    RIGHT_UPPER = 9
}; // enum  class Aspect_TypeOfTriedronPosition

//---------------------------------------------------------------------
//  Enum  Aspect_VKeyBasic
//---------------------------------------------------------------------
/// <summary>
/// Enumeration defining virtual keys irrelevant to current keyboard layout for simplified hot-keys
/// management logic.
/// </summary>
public enum class Aspect_VKeyBasic
{
    VKey_UNKNOWN = 0,
    VKey_A = 1,
    VKey_B = 2,
    VKey_C = 3,
    VKey_D = 4,
    VKey_E = 5,
    VKey_F = 6,
    VKey_G = 7,
    VKey_H = 8,
    VKey_I = 9,
    VKey_J = 10,
    VKey_K = 11,
    VKey_L = 12,
    VKey_M = 13,
    VKey_N = 14,
    VKey_O = 15,
    VKey_P = 16,
    VKey_Q = 17,
    VKey_R = 18,
    VKey_S = 19,
    VKey_T = 20,
    VKey_U = 21,
    VKey_V = 22,
    VKey_W = 23,
    VKey_X = 24,
    VKey_Y = 25,
    VKey_Z = 26,
    VKey_0 = 27,
    VKey_1 = 28,
    VKey_2 = 29,
    VKey_3 = 30,
    VKey_4 = 31,
    VKey_5 = 32,
    VKey_6 = 33,
    VKey_7 = 34,
    VKey_8 = 35,
    VKey_9 = 36,
    VKey_F1 = 37,
    VKey_F2 = 38,
    VKey_F3 = 39,
    VKey_F4 = 40,
    VKey_F5 = 41,
    VKey_F6 = 42,
    VKey_F7 = 43,
    VKey_F8 = 44,
    VKey_F9 = 45,
    VKey_F10 = 46,
    VKey_F11 = 47,
    VKey_F12 = 48,
    VKey_Up = 49,
    VKey_Down = 50,
    VKey_Left = 51,
    VKey_Right = 52,
    VKey_Plus = 53,
    VKey_Minus = 54,
    VKey_Equal = 55,
    VKey_PageUp = 56,
    VKey_PageDown = 57,
    VKey_Home = 58,
    VKey_End = 59,
    VKey_Escape = 60,
    VKey_Back = 61,
    VKey_Enter = 62,
    VKey_Backspace = 63,
    VKey_Space = 64,
    VKey_Delete = 65,
    VKey_Tilde = 66,
    VKey_Tab = 67,
    VKey_Comma = 68,
    VKey_Period = 69,
    VKey_Semicolon = 70,
    VKey_Slash = 71,
    VKey_BracketLeft = 72,
    VKey_Backslash = 73,
    VKey_BracketRight = 74,
    VKey_Apostrophe = 75,
    VKey_Numlock = 76,
    VKey_Scroll = 77,
    VKey_Numpad0 = 78,
    VKey_Numpad1 = 79,
    VKey_Numpad2 = 80,
    VKey_Numpad3 = 81,
    VKey_Numpad4 = 82,
    VKey_Numpad5 = 83,
    VKey_Numpad6 = 84,
    VKey_Numpad7 = 85,
    VKey_Numpad8 = 86,
    VKey_Numpad9 = 87,
    VKey_NumpadMultiply = 88,
    VKey_NumpadAdd = 89,
    VKey_NumpadSubtract = 90,
    VKey_NumpadDivide = 91,
    VKey_MediaNextTrack = 92,
    VKey_MediaPreviousTrack = 93,
    VKey_MediaStop = 94,
    VKey_MediaPlayPause = 95,
    VKey_VolumeMute = 96,
    VKey_VolumeDown = 97,
    VKey_VolumeUp = 98,
    VKey_BrowserBack = 99,
    VKey_BrowserForward = 100,
    VKey_BrowserRefresh = 101,
    VKey_BrowserStop = 102,
    VKey_BrowserSearch = 103,
    VKey_BrowserFavorites = 104,
    VKey_BrowserHome = 105,
    VKey_ViewTop = 106,
    VKey_ViewBottom = 107,
    VKey_ViewLeft = 108,
    VKey_ViewRight = 109,
    VKey_ViewFront = 110,
    VKey_ViewBack = 111,
    VKey_ViewAxoLeftProj = 112,
    VKey_ViewAxoRightProj = 113,
    VKey_ViewFitAll = 114,
    VKey_ViewRoll90CW = 115,
    VKey_ViewRoll90CCW = 116,
    VKey_ViewSwitchRotate = 117,
    VKey_Shift = 118,
    VKey_Control = 119,
    VKey_Alt = 120,
    VKey_Menu = 121,
    VKey_Meta = 122,
    VKey_NavInteract = 123,
    VKey_NavForward = 124,
    VKey_NavBackward = 125,
    VKey_NavSlideLeft = 126,
    VKey_NavSlideRight = 127,
    VKey_NavSlideUp = 128,
    VKey_NavSlideDown = 129,
    VKey_NavRollCCW = 130,
    VKey_NavRollCW = 131,
    VKey_NavLookLeft = 132,
    VKey_NavLookRight = 133,
    VKey_NavLookUp = 134,
    VKey_NavLookDown = 135,
    VKey_NavCrouch = 136,
    VKey_NavJump = 137,
    VKey_NavThrustForward = 138,
    VKey_NavThrustBackward = 139,
    VKey_NavThrustStop = 140,
    VKey_NavSpeedIncrease = 141,
    VKey_NavSpeedDecrease = 142
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
    THIN = 0,
    MEDIUM = 1,
    THICK = 2,
    VERYTHICK = 3,
    USERDEFINED = 4
}; // enum  class Aspect_WidthOfLine

//---------------------------------------------------------------------
//  Class  Aspect_XRActionMap
//---------------------------------------------------------------------
/// <summary>
/// Map of actions with action Id as a key.
/// </summary>
public ref class Aspect_XRActionMap sealed
    : public Macad::Occt::BaseClass<::Aspect_XRActionMap>
{

#ifdef Include_Aspect_XRActionMap_h
public:
    Include_Aspect_XRActionMap_h
#endif

public:
    Aspect_XRActionMap(::Aspect_XRActionMap* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_XRActionMap>( nativeInstance, true )
    {}

    Aspect_XRActionMap(::Aspect_XRActionMap& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_XRActionMap>( &nativeInstance, false )
    {}

    property ::Aspect_XRActionMap* NativeInstance
    {
        ::Aspect_XRActionMap* get()
        {
            return static_cast<::Aspect_XRActionMap*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Aspect_XRActionMap::Iterator>
    {

#ifdef Include_Aspect_XRActionMap_Iterator_h
    public:
        Include_Aspect_XRActionMap_Iterator_h
#endif

    public:
        Iterator(::Aspect_XRActionMap::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Aspect_XRActionMap::Iterator>( nativeInstance, true )
        {}

        Iterator(::Aspect_XRActionMap::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Aspect_XRActionMap::Iterator>( &nativeInstance, false )
        {}

        property ::Aspect_XRActionMap::Iterator* NativeInstance
        {
            ::Aspect_XRActionMap::Iterator* get()
            {
                return static_cast<::Aspect_XRActionMap::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Aspect_XRActionMap();
    Aspect_XRActionMap(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    Aspect_XRActionMap(int theNbBuckets);
    void Exchange(Macad::Occt::Aspect_XRActionMap^ theOther);
    Macad::Occt::Aspect_XRActionMap^ Assign(Macad::Occt::Aspect_XRActionMap^ theOther);
    void ReSize(int N);
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
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class Aspect_XRActionMap

//---------------------------------------------------------------------
//  Class  Aspect_XRActionSetMap
//---------------------------------------------------------------------
public ref class Aspect_XRActionSetMap sealed
    : public Macad::Occt::BaseClass<::Aspect_XRActionSetMap>
{

#ifdef Include_Aspect_XRActionSetMap_h
public:
    Include_Aspect_XRActionSetMap_h
#endif

public:
    Aspect_XRActionSetMap(::Aspect_XRActionSetMap* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_XRActionSetMap>( nativeInstance, true )
    {}

    Aspect_XRActionSetMap(::Aspect_XRActionSetMap& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_XRActionSetMap>( &nativeInstance, false )
    {}

    property ::Aspect_XRActionSetMap* NativeInstance
    {
        ::Aspect_XRActionSetMap* get()
        {
            return static_cast<::Aspect_XRActionSetMap*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Aspect_XRActionSetMap::Iterator>
    {

#ifdef Include_Aspect_XRActionSetMap_Iterator_h
    public:
        Include_Aspect_XRActionSetMap_Iterator_h
#endif

    public:
        Iterator(::Aspect_XRActionSetMap::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Aspect_XRActionSetMap::Iterator>( nativeInstance, true )
        {}

        Iterator(::Aspect_XRActionSetMap::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Aspect_XRActionSetMap::Iterator>( &nativeInstance, false )
        {}

        property ::Aspect_XRActionSetMap::Iterator* NativeInstance
        {
            ::Aspect_XRActionSetMap::Iterator* get()
            {
                return static_cast<::Aspect_XRActionSetMap::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Aspect_XRActionSetMap();
    Aspect_XRActionSetMap(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    Aspect_XRActionSetMap(int theNbBuckets);
    void Exchange(Macad::Occt::Aspect_XRActionSetMap^ theOther);
    Macad::Occt::Aspect_XRActionSetMap^ Assign(Macad::Occt::Aspect_XRActionSetMap^ theOther);
    void ReSize(int N);
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
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class Aspect_XRActionSetMap

//---------------------------------------------------------------------
//  Class  Aspect_TrackedDevicePoseArray
//---------------------------------------------------------------------
/// <summary>
/// Array of tracked poses.
/// </summary>
public ref class Aspect_TrackedDevicePoseArray sealed
    : public Macad::Occt::BaseClass<::Aspect_TrackedDevicePoseArray>
    , public IIndexEnumerable<Macad::Occt::Aspect_TrackedDevicePose^>
{

#ifdef Include_Aspect_TrackedDevicePoseArray_h
public:
    Include_Aspect_TrackedDevicePoseArray_h
#endif

public:
    Aspect_TrackedDevicePoseArray(::Aspect_TrackedDevicePoseArray* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_TrackedDevicePoseArray>( nativeInstance, true )
    {}

    Aspect_TrackedDevicePoseArray(::Aspect_TrackedDevicePoseArray& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_TrackedDevicePoseArray>( &nativeInstance, false )
    {}

    property ::Aspect_TrackedDevicePoseArray* NativeInstance
    {
        ::Aspect_TrackedDevicePoseArray* get()
        {
            return static_cast<::Aspect_TrackedDevicePoseArray*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Aspect_TrackedDevicePoseArray::Iterator>
    {

#ifdef Include_Aspect_TrackedDevicePoseArray_Iterator_h
    public:
        Include_Aspect_TrackedDevicePoseArray_Iterator_h
#endif

    public:
        Iterator(::Aspect_TrackedDevicePoseArray::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Aspect_TrackedDevicePoseArray::Iterator>( nativeInstance, true )
        {}

        Iterator(::Aspect_TrackedDevicePoseArray::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Aspect_TrackedDevicePoseArray::Iterator>( &nativeInstance, false )
        {}

        property ::Aspect_TrackedDevicePoseArray::Iterator* NativeInstance
        {
            ::Aspect_TrackedDevicePoseArray::Iterator* get()
            {
                return static_cast<::Aspect_TrackedDevicePoseArray::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Aspect_TrackedDevicePoseArray();
    Aspect_TrackedDevicePoseArray(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void Aspect_TrackedDevicePoseArray(allocator_type theAlloc, int theLower, int theUpper, ) */
    Aspect_TrackedDevicePoseArray(Macad::Occt::Aspect_TrackedDevicePose^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    Aspect_TrackedDevicePoseArray(Macad::Occt::Aspect_TrackedDevicePose^ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Aspect_TrackedDevicePose^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Aspect_TrackedDevicePoseArray^ Assign(Macad::Occt::Aspect_TrackedDevicePoseArray^ theOther);
    Macad::Occt::Aspect_TrackedDevicePoseArray^ Move(Macad::Occt::Aspect_TrackedDevicePoseArray^ theOther);
    Macad::Occt::Aspect_TrackedDevicePose^ First();
    Macad::Occt::Aspect_TrackedDevicePose^ ChangeFirst();
    Macad::Occt::Aspect_TrackedDevicePose^ Last();
    Macad::Occt::Aspect_TrackedDevicePose^ ChangeLast();
    virtual Macad::Occt::Aspect_TrackedDevicePose^ Value(int theIndex);
    Macad::Occt::Aspect_TrackedDevicePose^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Aspect_TrackedDevicePose^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Aspect_TrackedDevicePose^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Aspect_TrackedDevicePoseArray

//---------------------------------------------------------------------
//  Class  Aspect_SequenceOfColor
//---------------------------------------------------------------------
public ref class Aspect_SequenceOfColor sealed
    : public Macad::Occt::BaseClass<::Aspect_SequenceOfColor>
    , public IIndexEnumerable<Macad::Occt::Quantity_Color^>
{

#ifdef Include_Aspect_SequenceOfColor_h
public:
    Include_Aspect_SequenceOfColor_h
#endif

public:
    Aspect_SequenceOfColor(::Aspect_SequenceOfColor* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_SequenceOfColor>( nativeInstance, true )
    {}

    Aspect_SequenceOfColor(::Aspect_SequenceOfColor& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_SequenceOfColor>( &nativeInstance, false )
    {}

    property ::Aspect_SequenceOfColor* NativeInstance
    {
        ::Aspect_SequenceOfColor* get()
        {
            return static_cast<::Aspect_SequenceOfColor*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Aspect_SequenceOfColor::Iterator>
    {

#ifdef Include_Aspect_SequenceOfColor_Iterator_h
    public:
        Include_Aspect_SequenceOfColor_Iterator_h
#endif

    public:
        Iterator(::Aspect_SequenceOfColor::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Aspect_SequenceOfColor::Iterator>( nativeInstance, true )
        {}

        Iterator(::Aspect_SequenceOfColor::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Aspect_SequenceOfColor::Iterator>( &nativeInstance, false )
        {}

        property ::Aspect_SequenceOfColor::Iterator* NativeInstance
        {
            ::Aspect_SequenceOfColor::Iterator* get()
            {
                return static_cast<::Aspect_SequenceOfColor::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Quantity_Color^ Value();
        Macad::Occt::Quantity_Color^ ChangeValue();
        bool IsEqual(Macad::Occt::Aspect_SequenceOfColor::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Aspect_SequenceOfColor();
    Aspect_SequenceOfColor(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    void Remove(Macad::Occt::Aspect_SequenceOfColor::Iterator^ thePosition);
    void Append(Macad::Occt::Quantity_Color^ theItem);
    void Prepend(Macad::Occt::Quantity_Color^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Quantity_Color^ theItem);
    void InsertAfter(Macad::Occt::Aspect_SequenceOfColor::Iterator^ thePosition, Macad::Occt::Quantity_Color^ theItem);
    void Split(int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq);
    Macad::Occt::Quantity_Color^ First();
    Macad::Occt::Quantity_Color^ ChangeFirst();
    Macad::Occt::Quantity_Color^ Last();
    Macad::Occt::Quantity_Color^ ChangeLast();
    virtual Macad::Occt::Quantity_Color^ Value(int theIndex);
    Macad::Occt::Quantity_Color^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Quantity_Color^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Quantity_Color^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Aspect_SequenceOfColor

//---------------------------------------------------------------------
//  Class  Aspect_TouchMap
//---------------------------------------------------------------------
public ref class Aspect_TouchMap sealed
    : public Macad::Occt::BaseClass<::Aspect_TouchMap>
{

#ifdef Include_Aspect_TouchMap_h
public:
    Include_Aspect_TouchMap_h
#endif

public:
    Aspect_TouchMap(::Aspect_TouchMap* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_TouchMap>( nativeInstance, true )
    {}

    Aspect_TouchMap(::Aspect_TouchMap& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_TouchMap>( &nativeInstance, false )
    {}

    property ::Aspect_TouchMap* NativeInstance
    {
        ::Aspect_TouchMap* get()
        {
            return static_cast<::Aspect_TouchMap*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Aspect_TouchMap::Iterator>
    {

#ifdef Include_Aspect_TouchMap_Iterator_h
    public:
        Include_Aspect_TouchMap_Iterator_h
#endif

    public:
        Iterator(::Aspect_TouchMap::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Aspect_TouchMap::Iterator>( nativeInstance, true )
        {}

        Iterator(::Aspect_TouchMap::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Aspect_TouchMap::Iterator>( &nativeInstance, false )
        {}

        property ::Aspect_TouchMap::Iterator* NativeInstance
        {
            ::Aspect_TouchMap::Iterator* get()
            {
                return static_cast<::Aspect_TouchMap::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Aspect_TouchMap();
    Aspect_TouchMap(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    Aspect_TouchMap(int theNbBuckets);
    void Exchange(Macad::Occt::Aspect_TouchMap^ theOther);
    Macad::Occt::Aspect_TouchMap^ Assign(Macad::Occt::Aspect_TouchMap^ theOther);
    void ReSize(int N);
    int Add(long long unsigned int theKey1, Macad::Occt::Aspect_Touch^ theItem);
    bool Contains(long long unsigned int theKey1);
    void Substitute(int theIndex, long long unsigned int theKey1, Macad::Occt::Aspect_Touch^ theItem);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    void RemoveKey(long long unsigned int theKey1);
    long long unsigned int FindKey(int theIndex);
    Macad::Occt::Aspect_Touch^ FindFromIndex(int theIndex);
    Macad::Occt::Aspect_Touch^ ChangeFromIndex(int theIndex);
    int FindIndex(long long unsigned int theKey1);
    Macad::Occt::Aspect_Touch^ FindFromKey(long long unsigned int theKey1);
    Macad::Occt::Aspect_Touch^ ChangeFromKey(long long unsigned int theKey1);
    Macad::Occt::Aspect_Touch^ Seek(long long unsigned int theKey1);
    Macad::Occt::Aspect_Touch^ ChangeSeek(long long unsigned int theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class Aspect_TouchMap

//---------------------------------------------------------------------
//  Class  Aspect_XRAnalogActionData
//---------------------------------------------------------------------
/// <summary>
/// Analog input XR action data.
/// </summary>
public ref class Aspect_XRAnalogActionData sealed
    : public Macad::Occt::BaseClass<::Aspect_XRAnalogActionData>
{

#ifdef Include_Aspect_XRAnalogActionData_h
public:
    Include_Aspect_XRAnalogActionData_h
#endif

public:
    Aspect_XRAnalogActionData(::Aspect_XRAnalogActionData* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_XRAnalogActionData>( nativeInstance, true )
    {}

    Aspect_XRAnalogActionData(::Aspect_XRAnalogActionData& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_XRAnalogActionData>( &nativeInstance, false )
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
    /// < The origin that caused this action's current state
    /// </summary>
    property long long unsigned int ActiveOrigin {
        long long unsigned int get() {
            return ((::Aspect_XRAnalogActionData*)_NativeInstance)->ActiveOrigin;
        }
        void set(long long unsigned int value) {
            ((::Aspect_XRAnalogActionData*)_NativeInstance)->ActiveOrigin = value;
        }
    }

    /// <summary>
    /// < Time relative to now when this event happened. Will be negative to indicate a past time
    /// </summary>
    property float UpdateTime {
        float get() {
            return ((::Aspect_XRAnalogActionData*)_NativeInstance)->UpdateTime;
        }
        void set(float value) {
            ((::Aspect_XRAnalogActionData*)_NativeInstance)->UpdateTime = value;
        }
    }

    /// <summary>
    /// < whether or not this action is currently available to be bound in the active action set
    /// </summary>
    property bool IsActive {
        bool get() {
            return ((::Aspect_XRAnalogActionData*)_NativeInstance)->IsActive;
        }
        void set(bool value) {
            ((::Aspect_XRAnalogActionData*)_NativeInstance)->IsActive = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    Aspect_XRAnalogActionData();
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
public ref class Aspect_XRDigitalActionData sealed
    : public Macad::Occt::BaseClass<::Aspect_XRDigitalActionData>
{

#ifdef Include_Aspect_XRDigitalActionData_h
public:
    Include_Aspect_XRDigitalActionData_h
#endif

public:
    Aspect_XRDigitalActionData(::Aspect_XRDigitalActionData* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_XRDigitalActionData>( nativeInstance, true )
    {}

    Aspect_XRDigitalActionData(::Aspect_XRDigitalActionData& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_XRDigitalActionData>( &nativeInstance, false )
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
    /// < The origin that caused this action's current state
    /// </summary>
    property long long unsigned int ActiveOrigin {
        long long unsigned int get() {
            return ((::Aspect_XRDigitalActionData*)_NativeInstance)->ActiveOrigin;
        }
        void set(long long unsigned int value) {
            ((::Aspect_XRDigitalActionData*)_NativeInstance)->ActiveOrigin = value;
        }
    }

    /// <summary>
    /// < Time relative to now when this event happened. Will be negative to indicate a past time
    /// </summary>
    property float UpdateTime {
        float get() {
            return ((::Aspect_XRDigitalActionData*)_NativeInstance)->UpdateTime;
        }
        void set(float value) {
            ((::Aspect_XRDigitalActionData*)_NativeInstance)->UpdateTime = value;
        }
    }

    /// <summary>
    /// < whether or not this action is currently available to be bound in the active action set
    /// </summary>
    property bool IsActive {
        bool get() {
            return ((::Aspect_XRDigitalActionData*)_NativeInstance)->IsActive;
        }
        void set(bool value) {
            ((::Aspect_XRDigitalActionData*)_NativeInstance)->IsActive = value;
        }
    }

    /// <summary>
    /// < Aspect_InputActionType_Digital state - The current state of this action; will be true if currently pressed
    /// </summary>
    property bool IsPressed {
        bool get() {
            return ((::Aspect_XRDigitalActionData*)_NativeInstance)->IsPressed;
        }
        void set(bool value) {
            ((::Aspect_XRDigitalActionData*)_NativeInstance)->IsPressed = value;
        }
    }

    /// <summary>
    /// < Aspect_InputActionType_Digital state - this is true if the state has changed since the last frame
    /// </summary>
    property bool IsChanged {
        bool get() {
            return ((::Aspect_XRDigitalActionData*)_NativeInstance)->IsChanged;
        }
        void set(bool value) {
            ((::Aspect_XRDigitalActionData*)_NativeInstance)->IsChanged = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    Aspect_XRDigitalActionData();
}; // class Aspect_XRDigitalActionData

//---------------------------------------------------------------------
//  Class  Aspect_XRHapticActionData
//---------------------------------------------------------------------
/// <summary>
/// Haptic output XR action data.
/// </summary>
public ref class Aspect_XRHapticActionData sealed
    : public Macad::Occt::BaseClass<::Aspect_XRHapticActionData>
{

#ifdef Include_Aspect_XRHapticActionData_h
public:
    Include_Aspect_XRHapticActionData_h
#endif

public:
    Aspect_XRHapticActionData(::Aspect_XRHapticActionData* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_XRHapticActionData>( nativeInstance, true )
    {}

    Aspect_XRHapticActionData(::Aspect_XRHapticActionData& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_XRHapticActionData>( &nativeInstance, false )
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
    /// < delay in seconds before start
    /// </summary>
    property float Delay {
        float get() {
            return ((::Aspect_XRHapticActionData*)_NativeInstance)->Delay;
        }
        void set(float value) {
            ((::Aspect_XRHapticActionData*)_NativeInstance)->Delay = value;
        }
    }

    /// <summary>
    /// < duration in seconds
    /// </summary>
    property float Duration {
        float get() {
            return ((::Aspect_XRHapticActionData*)_NativeInstance)->Duration;
        }
        void set(float value) {
            ((::Aspect_XRHapticActionData*)_NativeInstance)->Duration = value;
        }
    }

    /// <summary>
    /// < vibration frequency
    /// </summary>
    property float Frequency {
        float get() {
            return ((::Aspect_XRHapticActionData*)_NativeInstance)->Frequency;
        }
        void set(float value) {
            ((::Aspect_XRHapticActionData*)_NativeInstance)->Frequency = value;
        }
    }

    /// <summary>
    /// < vibration amplitude
    /// </summary>
    property float Amplitude {
        float get() {
            return ((::Aspect_XRHapticActionData*)_NativeInstance)->Amplitude;
        }
        void set(float value) {
            ((::Aspect_XRHapticActionData*)_NativeInstance)->Amplitude = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    Aspect_XRHapticActionData();
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
public ref class Aspect_TrackedDevicePose sealed
    : public Macad::Occt::BaseClass<::Aspect_TrackedDevicePose>
{

#ifdef Include_Aspect_TrackedDevicePose_h
public:
    Include_Aspect_TrackedDevicePose_h
#endif

public:
    Aspect_TrackedDevicePose(::Aspect_TrackedDevicePose* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_TrackedDevicePose>( nativeInstance, true )
    {}

    Aspect_TrackedDevicePose(::Aspect_TrackedDevicePose& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_TrackedDevicePose>( &nativeInstance, false )
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
    /// < indicates valid pose
    /// </summary>
    property bool IsValidPose {
        bool get() {
            return ((::Aspect_TrackedDevicePose*)_NativeInstance)->IsValidPose;
        }
        void set(bool value) {
            ((::Aspect_TrackedDevicePose*)_NativeInstance)->IsValidPose = value;
        }
    }

    /// <summary>
    /// < indicates connected state
    /// </summary>
    property bool IsConnectedDevice {
        bool get() {
            return ((::Aspect_TrackedDevicePose*)_NativeInstance)->IsConnectedDevice;
        }
        void set(bool value) {
            ((::Aspect_TrackedDevicePose*)_NativeInstance)->IsConnectedDevice = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    Aspect_TrackedDevicePose();
}; // class Aspect_TrackedDevicePose

//---------------------------------------------------------------------
//  Class  Aspect_XRPoseActionData
//---------------------------------------------------------------------
/// <summary>
/// Pose input XR action data.
/// </summary>
public ref class Aspect_XRPoseActionData sealed
    : public Macad::Occt::BaseClass<::Aspect_XRPoseActionData>
{

#ifdef Include_Aspect_XRPoseActionData_h
public:
    Include_Aspect_XRPoseActionData_h
#endif

public:
    Aspect_XRPoseActionData(::Aspect_XRPoseActionData* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_XRPoseActionData>( nativeInstance, true )
    {}

    Aspect_XRPoseActionData(::Aspect_XRPoseActionData& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_XRPoseActionData>( &nativeInstance, false )
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
    /// < The origin that caused this action's current state
    /// </summary>
    property long long unsigned int ActiveOrigin {
        long long unsigned int get() {
            return ((::Aspect_XRPoseActionData*)_NativeInstance)->ActiveOrigin;
        }
        void set(long long unsigned int value) {
            ((::Aspect_XRPoseActionData*)_NativeInstance)->ActiveOrigin = value;
        }
    }

    /// <summary>
    /// < whether or not this action is currently available to be bound in the active action set
    /// </summary>
    property bool IsActive {
        bool get() {
            return ((::Aspect_XRPoseActionData*)_NativeInstance)->IsActive;
        }
        void set(bool value) {
            ((::Aspect_XRPoseActionData*)_NativeInstance)->IsActive = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    Aspect_XRPoseActionData();
}; // class Aspect_XRPoseActionData

//---------------------------------------------------------------------
//  Class  Aspect_ScrollDelta
//---------------------------------------------------------------------
/// <summary>
/// Parameters for mouse scroll action.
/// </summary>
public ref class Aspect_ScrollDelta sealed
    : public Macad::Occt::BaseClass<::Aspect_ScrollDelta>
{

#ifdef Include_Aspect_ScrollDelta_h
public:
    Include_Aspect_ScrollDelta_h
#endif

public:
    Aspect_ScrollDelta(::Aspect_ScrollDelta* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_ScrollDelta>( nativeInstance, true )
    {}

    Aspect_ScrollDelta(::Aspect_ScrollDelta& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_ScrollDelta>( &nativeInstance, false )
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
    /// < delta in pixels
    /// </summary>
    property double Delta {
        double get() {
            return ((::Aspect_ScrollDelta*)_NativeInstance)->Delta;
        }
        void set(double value) {
            ((::Aspect_ScrollDelta*)_NativeInstance)->Delta = value;
        }
    }

    /// <summary>
    /// < key flags
    /// </summary>
    property unsigned int Flags {
        unsigned int get() {
            return ((::Aspect_ScrollDelta*)_NativeInstance)->Flags;
        }
        void set(unsigned int value) {
            ((::Aspect_ScrollDelta*)_NativeInstance)->Flags = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    Aspect_ScrollDelta();
    /// <summary>
    /// Constructor.
    /// </summary>
    Aspect_ScrollDelta(Macad::Occt::Graphic3d_Vec2i^ thePnt, double theValue, unsigned int theFlags);
    /// <summary>
    /// Constructor.
    /// </summary>
    Aspect_ScrollDelta(Macad::Occt::Graphic3d_Vec2i^ thePnt, double theValue);
    /// <summary>
    /// Constructor with undefined point.
    /// </summary>
    Aspect_ScrollDelta(double theValue, unsigned int theFlags);
    /// <summary>
    /// Constructor with undefined point.
    /// </summary>
    Aspect_ScrollDelta(double theValue);
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
public ref class Aspect_AspectFillAreaDefinitionError sealed
    : public Macad::Occt::Standard_OutOfRange
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

public:
    Aspect_AspectFillAreaDefinitionError();
    Aspect_AspectFillAreaDefinitionError(System::String^ theMessage);
    Aspect_AspectFillAreaDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Aspect_AspectFillAreaDefinitionError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Aspect_AspectFillAreaDefinitionError^ NewInstance();
    static Macad::Occt::Aspect_AspectFillAreaDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Aspect_AspectFillAreaDefinitionError^ CreateDowncasted(::Aspect_AspectFillAreaDefinitionError* instance);
}; // class Aspect_AspectFillAreaDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_AspectLineDefinitionError
//---------------------------------------------------------------------
public ref class Aspect_AspectLineDefinitionError sealed
    : public Macad::Occt::Standard_OutOfRange
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

public:
    Aspect_AspectLineDefinitionError();
    Aspect_AspectLineDefinitionError(System::String^ theMessage);
    Aspect_AspectLineDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Aspect_AspectLineDefinitionError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Aspect_AspectLineDefinitionError^ NewInstance();
    static Macad::Occt::Aspect_AspectLineDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Aspect_AspectLineDefinitionError^ CreateDowncasted(::Aspect_AspectLineDefinitionError* instance);
}; // class Aspect_AspectLineDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_AspectMarkerDefinitionError
//---------------------------------------------------------------------
public ref class Aspect_AspectMarkerDefinitionError sealed
    : public Macad::Occt::Standard_OutOfRange
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

public:
    Aspect_AspectMarkerDefinitionError();
    Aspect_AspectMarkerDefinitionError(System::String^ theMessage);
    Aspect_AspectMarkerDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Aspect_AspectMarkerDefinitionError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Aspect_AspectMarkerDefinitionError^ NewInstance();
    static Macad::Occt::Aspect_AspectMarkerDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Aspect_AspectMarkerDefinitionError^ CreateDowncasted(::Aspect_AspectMarkerDefinitionError* instance);
}; // class Aspect_AspectMarkerDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_Background
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition of
/// a window background.
/// </summary>
public ref class Aspect_Background
    : public Macad::Occt::BaseClass<::Aspect_Background>
{

#ifdef Include_Aspect_Background_h
public:
    Include_Aspect_Background_h
#endif

protected:
    Aspect_Background(InitMode init)
        : Macad::Occt::BaseClass<::Aspect_Background>( init )
    {}

public:
    Aspect_Background(::Aspect_Background* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_Background>( nativeInstance, true )
    {}

    Aspect_Background(::Aspect_Background& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_Background>( &nativeInstance, false )
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
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Aspect_Background

//---------------------------------------------------------------------
//  Class  Aspect_Grid
//---------------------------------------------------------------------
public ref class Aspect_Grid
    : public Macad::Occt::Standard_Transient
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

public:
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
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Aspect_Grid^ CreateDowncasted(::Aspect_Grid* instance);
}; // class Aspect_Grid

//---------------------------------------------------------------------
//  Class  Aspect_CircularGrid
//---------------------------------------------------------------------
public ref class Aspect_CircularGrid
    : public Macad::Occt::Aspect_Grid
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
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Aspect_CircularGrid^ CreateDowncasted(::Aspect_CircularGrid* instance);
}; // class Aspect_CircularGrid

//---------------------------------------------------------------------
//  Class  Aspect_DisplayConnectionDefinitionError
//---------------------------------------------------------------------
public ref class Aspect_DisplayConnectionDefinitionError sealed
    : public Macad::Occt::Standard_OutOfRange
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

public:
    Aspect_DisplayConnectionDefinitionError();
    Aspect_DisplayConnectionDefinitionError(System::String^ theMessage);
    Aspect_DisplayConnectionDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Aspect_DisplayConnectionDefinitionError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Aspect_DisplayConnectionDefinitionError^ NewInstance();
    static Macad::Occt::Aspect_DisplayConnectionDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Aspect_DisplayConnectionDefinitionError^ CreateDowncasted(::Aspect_DisplayConnectionDefinitionError* instance);
}; // class Aspect_DisplayConnectionDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_GenId
//---------------------------------------------------------------------
/// <summary>
/// This class permits the creation and control of integer identifiers.
/// </summary>
public ref class Aspect_GenId sealed
    : public Macad::Occt::BaseClass<::Aspect_GenId>
{

#ifdef Include_Aspect_GenId_h
public:
    Include_Aspect_GenId_h
#endif

public:
    Aspect_GenId(::Aspect_GenId* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_GenId>( nativeInstance, true )
    {}

    Aspect_GenId(::Aspect_GenId& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_GenId>( &nativeInstance, false )
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
    /// Creates an available set of identifiers with the lower bound 0 and the upper bound INT_MAX
    /// / 2.
    /// </summary>
    Aspect_GenId();
    /// <summary>
    /// Creates an available set of identifiers with specified range.
    /// Raises IdentDefinitionError if theUpper is less than theLow.
    /// </summary>
    Aspect_GenId(int theLow, int theUpper);
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
    /// <param name="out]">
    /// theId  generated identifier
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
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Aspect_GenId

//---------------------------------------------------------------------
//  Class  Aspect_GradientBackground
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition of a window gradient background.
/// </summary>
public ref class Aspect_GradientBackground sealed
    : public Macad::Occt::Aspect_Background
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
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Aspect_GradientBackground

//---------------------------------------------------------------------
//  Class  Aspect_GraphicDeviceDefinitionError
//---------------------------------------------------------------------
public ref class Aspect_GraphicDeviceDefinitionError sealed
    : public Macad::Occt::Standard_OutOfRange
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

public:
    Aspect_GraphicDeviceDefinitionError();
    Aspect_GraphicDeviceDefinitionError(System::String^ theMessage);
    Aspect_GraphicDeviceDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Aspect_GraphicDeviceDefinitionError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Aspect_GraphicDeviceDefinitionError^ NewInstance();
    static Macad::Occt::Aspect_GraphicDeviceDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Aspect_GraphicDeviceDefinitionError^ CreateDowncasted(::Aspect_GraphicDeviceDefinitionError* instance);
}; // class Aspect_GraphicDeviceDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_IdentDefinitionError
//---------------------------------------------------------------------
public ref class Aspect_IdentDefinitionError sealed
    : public Macad::Occt::Standard_OutOfRange
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

public:
    Aspect_IdentDefinitionError();
    Aspect_IdentDefinitionError(System::String^ theMessage);
    Aspect_IdentDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Aspect_IdentDefinitionError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Aspect_IdentDefinitionError^ NewInstance();
    static Macad::Occt::Aspect_IdentDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Aspect_IdentDefinitionError^ CreateDowncasted(::Aspect_IdentDefinitionError* instance);
}; // class Aspect_IdentDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_Window
//---------------------------------------------------------------------
/// <summary>
/// Defines a window.
/// </summary>
public ref class Aspect_Window
    : public Macad::Occt::Standard_Transient
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

public:
    /// <summary>
    /// Returns True if the window <me> is virtual
    /// </summary>
    bool IsVirtual();
    /// <summary>
    /// Setup the virtual state
    /// </summary>
    void SetVirtual(bool theVirtual);
    /// <summary>
    /// Returns window top-left corner.
    /// </summary>
    Macad::Occt::Graphic3d_Vec2i^ TopLeft();
    /// <summary>
    /// Returns window dimensions.
    /// </summary>
    Macad::Occt::Graphic3d_Vec2i^ Dimensions();
    /* Method skipped due to unknown mapping: Aspect_DisplayConnection DisplayConnection() */
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
    /// Modifies the window background.
    /// </summary>
    void SetBackground(Macad::Occt::Aspect_Background^ theBack);
    /// <summary>
    /// Modifies the window background.
    /// </summary>
    void SetBackground(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Modifies the window gradient background.
    /// </summary>
    void SetBackground(Macad::Occt::Aspect_GradientBackground^ theBackground);
    /// <summary>
    /// Modifies the window gradient background.
    /// </summary>
    void SetBackground(Macad::Occt::Quantity_Color^ theFirstColor, Macad::Occt::Quantity_Color^ theSecondColor, Macad::Occt::Aspect_GradientFillMethod theFillMethod);
    /// <summary>
    /// Returns True if the window <me> is opened
    /// and False if the window is closed.
    /// </summary>
    bool IsMapped();
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
    /* Method skipped due to unknown mapping: __GLXFBConfigRec NativeFBConfig() */
    /// <summary>
    /// Sets window title.
    /// </summary>
    void SetTitle(Macad::Occt::TCollection_AsciiString^ theTitle);
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
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Aspect_Window^ CreateDowncasted(::Aspect_Window* instance);
}; // class Aspect_Window

//---------------------------------------------------------------------
//  Class  Aspect_XRAction
//---------------------------------------------------------------------
/// <summary>
/// XR action definition.
/// </summary>
public ref class Aspect_XRAction sealed
    : public Macad::Occt::Standard_Transient
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

public:
    /// <summary>
    /// Main constructor.
    /// </summary>
    Aspect_XRAction(Macad::Occt::TCollection_AsciiString^ theId, Macad::Occt::Aspect_XRActionType theType);
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
    long long unsigned int RawHandle();
    /// <summary>
    /// Set action handle.
    /// </summary>
    void SetRawHandle(long long unsigned int theHande);
    static Macad::Occt::Aspect_XRAction^ CreateDowncasted(::Aspect_XRAction* instance);
}; // class Aspect_XRAction

//---------------------------------------------------------------------
//  Class  Aspect_XRActionSet
//---------------------------------------------------------------------
/// <summary>
/// XR action set.
/// </summary>
public ref class Aspect_XRActionSet sealed
    : public Macad::Occt::Standard_Transient
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

public:
    /// <summary>
    /// Main constructor.
    /// </summary>
    Aspect_XRActionSet(Macad::Occt::TCollection_AsciiString^ theId);
    /// <summary>
    /// Return action id.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Id();
    /// <summary>
    /// Return action handle.
    /// </summary>
    long long unsigned int RawHandle();
    /// <summary>
    /// Set action handle.
    /// </summary>
    void SetRawHandle(long long unsigned int theHande);
    /// <summary>
    /// Add action.
    /// </summary>
    void AddAction(Macad::Occt::Aspect_XRAction^ theAction);
    /// <summary>
    /// Return map of actions.
    /// </summary>
    Macad::Occt::Aspect_XRActionMap^ Actions();
    static Macad::Occt::Aspect_XRActionSet^ CreateDowncasted(::Aspect_XRActionSet* instance);
}; // class Aspect_XRActionSet

//---------------------------------------------------------------------
//  Class  Aspect_XRSession
//---------------------------------------------------------------------
/// <summary>
/// Extended Reality (XR) Session interface.
/// </summary>
public ref class Aspect_XRSession
    : public Macad::Occt::Standard_Transient
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

public:
    //---------------------------------------------------------------------
    //  Enum  TrackingUniverseOrigin
    //---------------------------------------------------------------------
    /// <summary>
    /// Identifies which style of tracking origin the application wants to use for the poses it is
    /// requesting.
    /// </summary>
    enum class TrackingUniverseOrigin
    {
        Seated = 0,
        Standing = 1
    }; // enum  class TrackingUniverseOrigin

    //---------------------------------------------------------------------
    //  Enum  InfoString
    //---------------------------------------------------------------------
    /// <summary>
    /// Info string enumeration.
    /// </summary>
    enum class InfoString
    {
        Vendor = 0,
        Device = 1,
        Tracker = 2,
        SerialNumber = 3
    }; // enum  class InfoString

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
    Macad::Occt::Graphic3d_Vec2i^ RecommendedViewport();
    /// <summary>
    /// Return transformation from eye to head.
    /// </summary>
    Macad::Occt::Graphic3d_Mat4d^ EyeToHeadTransform(Macad::Occt::Aspect_Eye theEye);
    /// <summary>
    /// Return transformation from head to eye.
    /// </summary>
    Macad::Occt::Graphic3d_Mat4d^ HeadToEyeTransform(Macad::Occt::Aspect_Eye theEye);
    /// <summary>
    /// Return projection matrix.
    /// </summary>
    Macad::Occt::Graphic3d_Mat4d^ ProjectionMatrix(Macad::Occt::Aspect_Eye theEye, double theZNear, double theZFar);
    /// <summary>
    /// Return FALSE if projection frustums are unsupported and general 4x4 projection matrix should
    /// be fetched instead
    /// </summary>
    bool HasProjectionFrustums();
    /// <summary>
    /// Receive XR events.
    /// </summary>
    void ProcessEvents();
    /// <summary>
    /// Submit texture eye to XR Composer.
    /// </summary>
    /// <param name="in]">
    /// theTexture      texture handle
    /// </param>
    /// <param name="in]">
    /// theGraphicsLib  graphics library in which texture handle is defined
    /// </param>
    /// <param name="in]">
    /// theColorSpace   texture color space;
    /// sRGB means no color conversion by composer;
    /// Linear means to sRGB color conversion by composer
    /// </param>
    /// <param name="in]">
    /// theEye  eye to display
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
    /// <param name="in]">
    /// theDevice   device index
    /// </param>
    /// <param name="out]">
    /// theTexture  texture source
    /// </param>
    /// <returns>
    /// model triangulation or NULL if not found
    /// </returns>
    Macad::Occt::Graphic3d_ArrayOfTriangles^ LoadRenderModel(int theDevice, Macad::Occt::Image_Texture^ theTexture);
    /// <summary>
    /// Load model for displaying device.
    /// </summary>
    /// <param name="in]">
    /// theDevice   device index
    /// </param>
    /// <param name="in]">
    /// theToApplyUnitFactor  flag to apply unit scale factor
    /// </param>
    /// <param name="out]">
    /// theTexture  texture source
    /// </param>
    /// <returns>
    /// model triangulation or NULL if not found
    /// </returns>
    Macad::Occt::Graphic3d_ArrayOfTriangles^ LoadRenderModel(int theDevice, bool theToApplyUnitFactor, Macad::Occt::Image_Texture^ theTexture);
    /// <summary>
    /// Fetch data for digital input action (like button).
    /// </summary>
    /// <param name="in]">
    /// theAction  action of Aspect_XRActionType_InputDigital type
    /// </param>
    Macad::Occt::Aspect_XRDigitalActionData^ GetDigitalActionData(Macad::Occt::Aspect_XRAction^ theAction);
    /// <summary>
    /// Fetch data for digital input action (like axis).
    /// </summary>
    /// <param name="in]">
    /// theAction  action of Aspect_XRActionType_InputAnalog type
    /// </param>
    Macad::Occt::Aspect_XRAnalogActionData^ GetAnalogActionData(Macad::Occt::Aspect_XRAction^ theAction);
    /// <summary>
    /// Fetch data for pose input action (like fingertip position).
    /// The returned values will match the values returned by the last call to WaitPoses().
    /// </summary>
    /// <param name="in]">
    /// theAction  action of Aspect_XRActionType_InputPose type
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
    static Macad::Occt::Aspect_XRSession^ CreateDowncasted(::Aspect_XRSession* instance);
}; // class Aspect_XRSession

//---------------------------------------------------------------------
//  Class  Aspect_OpenVRSession
//---------------------------------------------------------------------
/// <summary>
/// OpenVR wrapper implementing Aspect_XRSession interface.
/// </summary>
public ref class Aspect_OpenVRSession sealed
    : public Macad::Occt::Aspect_XRSession
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

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Aspect_OpenVRSession();
    /// <summary>
    /// Return TRUE if an HMD may be presented on the system (e.g. to show VR checkbox in application
    /// GUI). This is fast check, and even if it returns TRUE, opening session may fail.
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
    Macad::Occt::Graphic3d_Vec2i^ RecommendedViewport();
    /// <summary>
    /// Return transformation from eye to head.
    /// vr::GetEyeToHeadTransform() wrapper.
    /// </summary>
    Macad::Occt::Graphic3d_Mat4d^ EyeToHeadTransform(Macad::Occt::Aspect_Eye theEye);
    /// <summary>
    /// Return projection matrix.
    /// </summary>
    Macad::Occt::Graphic3d_Mat4d^ ProjectionMatrix(Macad::Occt::Aspect_Eye theEye, double theZNear, double theZFar);
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
    /// <param name="in]">
    /// theTexture      texture handle
    /// </param>
    /// <param name="in]">
    /// theGraphicsLib  graphics library in which texture handle is defined
    /// </param>
    /// <param name="in]">
    /// theColorSpace   texture color space;
    /// sRGB means no color conversion by composer;
    /// Linear means to sRGB color conversion by composer
    /// </param>
    /// <param name="in]">
    /// theEye  eye to display
    /// </param>
    /// <returns>
    /// FALSE on error
    /// </returns>
    bool SubmitEye(System::IntPtr theTexture, Macad::Occt::Aspect_GraphicsLibrary theGraphicsLib, Macad::Occt::Aspect_ColorSpace theColorSpace, Macad::Occt::Aspect_Eye theEye);
    /// <summary>
    /// Query information.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ GetString(Macad::Occt::Aspect_XRSession::InfoString theInfo);
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
    void SetTrackingOrigin(Macad::Occt::Aspect_XRSession::TrackingUniverseOrigin theOrigin);
    static Macad::Occt::Aspect_OpenVRSession^ CreateDowncasted(::Aspect_OpenVRSession* instance);
}; // class Aspect_OpenVRSession

//---------------------------------------------------------------------
//  Class  Aspect_RectangularGrid
//---------------------------------------------------------------------
public ref class Aspect_RectangularGrid
    : public Macad::Occt::Aspect_Grid
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
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Aspect_RectangularGrid^ CreateDowncasted(::Aspect_RectangularGrid* instance);
}; // class Aspect_RectangularGrid

//---------------------------------------------------------------------
//  Class  Aspect_SkydomeBackground
//---------------------------------------------------------------------
/// <summary>
/// This class allows the definition of a window skydome background.
/// </summary>
public ref class Aspect_SkydomeBackground sealed
    : public Macad::Occt::BaseClass<::Aspect_SkydomeBackground>
{

#ifdef Include_Aspect_SkydomeBackground_h
public:
    Include_Aspect_SkydomeBackground_h
#endif

public:
    Aspect_SkydomeBackground(::Aspect_SkydomeBackground* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_SkydomeBackground>( nativeInstance, true )
    {}

    Aspect_SkydomeBackground(::Aspect_SkydomeBackground& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_SkydomeBackground>( &nativeInstance, false )
    {}

    property ::Aspect_SkydomeBackground* NativeInstance
    {
        ::Aspect_SkydomeBackground* get()
        {
            return static_cast<::Aspect_SkydomeBackground*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a window skydome background.
    /// By default skydome is initialized with sun at its zenith (0.0, 1.0, 0.0),
    /// average clody (0.2), zero time parameter, zero fogginess, 512x512 texture size.
    /// </summary>
    Aspect_SkydomeBackground();
    /// <summary>
    /// Creates a window skydome background with given parameters.
    /// </summary>
    /// <param name="in]">
    /// theSunDirection direction to the sun (moon). Sun direction with negative Y
    /// component
    /// represents moon with (-X, -Y, -Z) direction.
    /// </param>
    /// <param name="in]">
    /// theCloudiness   cloud intensity, 0.0 means no clouds at all and 1.0 - high clody.
    /// </param>
    /// <param name="in]">
    /// theTime         time parameter of simulation. Might be tweaked to slightly change
    /// appearance.
    /// </param>
    /// <param name="in]">
    /// theFogginess    fog intensity, 0.0 means no fog and 1.0 - high fogginess
    /// </param>
    /// <param name="in]">
    /// theSize         size of cubemap side in pixels.
    /// </param>
    Aspect_SkydomeBackground(Macad::Occt::Dir theSunDirection, float theCloudiness, float theTime, float theFogginess, int theSize);
    /// <summary>
    /// Get sun direction. By default this value is (0, 1, 0)
    /// Sun direction with negative Y component represents moon with (-X, -Y, -Z) direction.
    /// </summary>
    Macad::Occt::Dir SunDirection();
    /// <summary>
    /// Get cloud intensity. By default this value is 0.2
    /// 0.0 means no clouds at all and 1.0 - high clody.
    /// </summary>
    float Cloudiness();
    /// <summary>
    /// Get time of cloud simulation. By default this value is 0.0
    /// This value might be tweaked to slightly change appearance of clouds.
    /// </summary>
    float TimeParameter();
    /// <summary>
    /// Get fog intensity. By default this value is 0.0
    /// 0.0 means no fog and 1.0 - high fogginess
    /// </summary>
    float Fogginess();
    /// <summary>
    /// Get size of cubemap. By default this value is 512
    /// </summary>
    int Size();
    /// <summary>
    /// Set sun direction. By default this value is (0, 1, 0)
    /// Sun direction with negative Y component represents moon with (-X, -Y, -Z) direction.
    /// </summary>
    void SetSunDirection(Macad::Occt::Dir theSunDirection);
    /// <summary>
    /// Set cloud intensity. By default this value is 0.2
    /// 0.0 means no clouds at all and 1.0 - high clody.
    /// </summary>
    void SetCloudiness(float theCloudiness);
    /// <summary>
    /// Set time of cloud simulation. By default this value is 0.0
    /// This value might be tweaked to slightly change appearance of clouds.
    /// </summary>
    void SetTimeParameter(float theTime);
    /// <summary>
    /// Set fog intensity. By default this value is 0.0
    /// 0.0 means no fog and 1.0 - high fogginess
    /// </summary>
    void SetFogginess(float theFogginess);
    /// <summary>
    /// Set size of cubemap. By default this value is 512
    /// </summary>
    void SetSize(int theSize);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Aspect_SkydomeBackground

//---------------------------------------------------------------------
//  Class  Aspect_Touch
//---------------------------------------------------------------------
/// <summary>
/// Structure holding touch position - original and current location.
/// </summary>
public ref class Aspect_Touch sealed
    : public Macad::Occt::BaseClass<::Aspect_Touch>
{

#ifdef Include_Aspect_Touch_h
public:
    Include_Aspect_Touch_h
#endif

public:
    Aspect_Touch(::Aspect_Touch* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_Touch>( nativeInstance, true )
    {}

    Aspect_Touch(::Aspect_Touch& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_Touch>( &nativeInstance, false )
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
    /// < precise device input (e.g. mouse cursor, NOT emulated from touch screen)
    /// </summary>
    property bool IsPreciseDevice {
        bool get() {
            return ((::Aspect_Touch*)_NativeInstance)->IsPreciseDevice;
        }
        void set(bool value) {
            ((::Aspect_Touch*)_NativeInstance)->IsPreciseDevice = value;
        }
    }

    /// <summary>
    /// Empty constructor
    /// </summary>
    Aspect_Touch();
    /// <summary>
    /// Constructor with initialization.
    /// </summary>
    Aspect_Touch(Macad::Occt::Graphic3d_Vec2d^ thePnt, bool theIsPreciseDevice);
    /// <summary>
    /// Constructor with initialization.
    /// </summary>
    Aspect_Touch(double theX, double theY, bool theIsPreciseDevice);
    /// <summary>
    /// Return values delta.
    /// </summary>
    Macad::Occt::Graphic3d_Vec2d^ Delta();
}; // class Aspect_Touch

//---------------------------------------------------------------------
//  Class  Aspect_WindowDefinitionError
//---------------------------------------------------------------------
public ref class Aspect_WindowDefinitionError sealed
    : public Macad::Occt::Standard_OutOfRange
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

public:
    Aspect_WindowDefinitionError();
    Aspect_WindowDefinitionError(System::String^ theMessage);
    Aspect_WindowDefinitionError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Aspect_WindowDefinitionError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Aspect_WindowDefinitionError^ NewInstance();
    static Macad::Occt::Aspect_WindowDefinitionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Aspect_WindowDefinitionError^ CreateDowncasted(::Aspect_WindowDefinitionError* instance);
}; // class Aspect_WindowDefinitionError

//---------------------------------------------------------------------
//  Class  Aspect_WindowError
//---------------------------------------------------------------------
public ref class Aspect_WindowError sealed
    : public Macad::Occt::Standard_OutOfRange
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

public:
    Aspect_WindowError();
    Aspect_WindowError(System::String^ theMessage);
    Aspect_WindowError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Aspect_WindowError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Aspect_WindowError^ NewInstance();
    static Macad::Occt::Aspect_WindowError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Aspect_WindowError^ CreateDowncasted(::Aspect_WindowError* instance);
}; // class Aspect_WindowError

//---------------------------------------------------------------------
//  Class  Aspect_WindowInputListener
//---------------------------------------------------------------------
/// <summary>
/// Defines a listener for window input events.
/// </summary>
public ref class Aspect_WindowInputListener
    : public Macad::Occt::BaseClass<::Aspect_WindowInputListener>
{

#ifdef Include_Aspect_WindowInputListener_h
public:
    Include_Aspect_WindowInputListener_h
#endif

protected:
    Aspect_WindowInputListener(InitMode init)
        : Macad::Occt::BaseClass<::Aspect_WindowInputListener>( init )
    {}

public:
    Aspect_WindowInputListener(::Aspect_WindowInputListener* nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_WindowInputListener>( nativeInstance, true )
    {}

    Aspect_WindowInputListener(::Aspect_WindowInputListener& nativeInstance)
        : Macad::Occt::BaseClass<::Aspect_WindowInputListener>( &nativeInstance, false )
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
    /* Method skipped due to unknown mapping: Aspect_VKeySet Keys() */
    /* Method skipped due to unknown mapping: Aspect_VKeySet ChangeKeys() */
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
    /// </summary>
    /// @name mouse input
    /// Update mouse scroll event.
    /// This method is expected to be called from UI thread.
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
    /// </summary>
    /// @name multi-touch input
    /// Return TRUE if touches map is not empty.
    bool HasTouchPoints();
    /// <summary>
    /// Return map of active touches.
    /// </summary>
    Macad::Occt::Aspect_TouchMap^ TouchPoints();
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
    void AddTouchPoint(long long unsigned int theId, Macad::Occt::Graphic3d_Vec2d^ thePnt, bool theClearBefore);
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
    void AddTouchPoint(long long unsigned int theId, Macad::Occt::Graphic3d_Vec2d^ thePnt);
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
    bool RemoveTouchPoint(long long unsigned int theId, bool theClearSelectPnts);
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
    bool RemoveTouchPoint(long long unsigned int theId);
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
    void UpdateTouchPoint(long long unsigned int theId, Macad::Occt::Graphic3d_Vec2d^ thePnt);
    /// <summary>
    /// </summary>
    /// @name 3d mouse input
    /// Return acceleration ratio for translation event; 2.0 by default.
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
    /* Method skipped due to unknown mapping: NCollection_Vec3<bool> Get3dMouseIsNoRotate() */
    /* Method skipped due to unknown mapping: NCollection_Vec3<bool> Change3dMouseIsNoRotate() */
    /* Method skipped due to unknown mapping: NCollection_Vec3<bool> Get3dMouseToReverse() */
    /* Method skipped due to unknown mapping: NCollection_Vec3<bool> Change3dMouseToReverse() */
    /* Method skipped due to unknown mapping: bool Update3dMouse(WNT_HIDSpaceMouse theEvent, ) */
    /* Method skipped due to unknown mapping: bool update3dMouseTranslation(WNT_HIDSpaceMouse theEvent, ) */
    /* Method skipped due to unknown mapping: bool update3dMouseRotation(WNT_HIDSpaceMouse theEvent, ) */
    /* Method skipped due to unknown mapping: bool update3dMouseKeys(WNT_HIDSpaceMouse theEvent, ) */
}; // class Aspect_WindowInputListener

}; // namespace Occt
}; // namespace Macad
