// Generated wrapper code for package V3d

#pragma once

#include "NCollection.h"
#include "Graphic3d.h"
#include "Standard.h"
#include "Aspect.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  V3d_TypeOfOrientation
//---------------------------------------------------------------------
/// <summary>
/// Determines the type of orientation as a combination of standard DX/DY/DZ directions.
/// This enumeration defines a model orientation looking towards the user's eye, which is an
/// opposition to Camera main direction. For example, V3d_Xneg defines +X Camera main direction.
/// 
/// This enumeration defines only main Camera direction, so that the Camera up direction should be
/// defined elsewhere for unambiguous Camera definition. Open CASCADE does not force application
/// using specific coordinate system, although Draw Harness and samples define +Z-up +Y-forward
/// coordinate system for camera view manipulation. Therefore, this enumeration also defines
/// V3d_TypeOfOrientation_Zup_* aliases defining front/back/left/top camera orientations for +Z-up
/// convention as well as V3d_TypeOfOrientation_Yup_* aliases for another commonly used in other
/// systems +Y-up convention. Applications using other coordinate system can define their own
/// enumeration, when found suitable.
/// </summary>
public enum class V3d_TypeOfOrientation
{
    Xpos = 0,
    Ypos = 1,
    Zpos = 2,
    Xneg = 3,
    Yneg = 4,
    Zneg = 5,
    XposYpos = 6,
    XposZpos = 7,
    YposZpos = 8,
    XnegYneg = 9,
    XnegYpos = 10,
    XnegZneg = 11,
    XnegZpos = 12,
    YnegZneg = 13,
    YnegZpos = 14,
    XposYneg = 15,
    XposZneg = 16,
    YposZneg = 17,
    XposYposZpos = 18,
    XposYnegZpos = 19,
    XposYposZneg = 20,
    XnegYposZpos = 21,
    XposYnegZneg = 22,
    XnegYposZneg = 23,
    XnegYnegZpos = 24,
    XnegYnegZneg = 25,
    Zup_AxoLeft = 24,
    Zup_AxoRight = 19,
    Zup_Front = 4,
    Zup_Back = 1,
    Zup_Top = 2,
    Zup_Bottom = 5,
    Zup_Left = 3,
    Zup_Right = 0,
    Yup_AxoLeft = 21,
    Yup_AxoRight = 18,
    Yup_Front = 2,
    Yup_Back = 5,
    Yup_Top = 1,
    Yup_Bottom = 4,
    Yup_Left = 0,
    Yup_Right = 3
}; // enum  class V3d_TypeOfOrientation

//---------------------------------------------------------------------
//  Enum  V3d_StereoDumpOptions
//---------------------------------------------------------------------
/// <summary>
/// Options to be used with image dumping.
/// Notice that the value will have no effect with disabled stereo output.
/// </summary>
public enum class V3d_StereoDumpOptions
{
    MONO = 0,
    LEFT_EYE = 1,
    RIGHT_EYE = 2,
    BLENDED = 3
}; // enum  class V3d_StereoDumpOptions

//---------------------------------------------------------------------
//  Enum  V3d_TypeOfView
//---------------------------------------------------------------------
/// <summary>
/// Defines the type of projection of the view.
/// </summary>
public enum class V3d_TypeOfView
{
    ORTHOGRAPHIC = 0,
    PERSPECTIVE = 1
}; // enum  class V3d_TypeOfView

//---------------------------------------------------------------------
//  Enum  V3d_TypeOfVisualization
//---------------------------------------------------------------------
/// <summary>
/// Determines the type of visualization in the view, either
/// WIREFRAME or ZBUFFER (shading).
/// </summary>
public enum class V3d_TypeOfVisualization
{
    WIREFRAME = 0,
    ZBUFFER = 1
}; // enum  class V3d_TypeOfVisualization

//---------------------------------------------------------------------
//  Enum  V3d_TypeOfAxe
//---------------------------------------------------------------------
/// <summary>
/// Determines the axis type through the coordinates X, Y, Z.
/// </summary>
public enum class V3d_TypeOfAxe
{
    X = 0,
    Y = 1,
    Z = 2
}; // enum  class V3d_TypeOfAxe

//---------------------------------------------------------------------
//  Class  V3d_ListOfLight
//---------------------------------------------------------------------
public ref class V3d_ListOfLight sealed
    : public Macad::Occt::NCollection_BaseList
{

#ifdef Include_V3d_ListOfLight_h
public:
    Include_V3d_ListOfLight_h
#endif

public:
    V3d_ListOfLight(::V3d_ListOfLight* nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    V3d_ListOfLight(::V3d_ListOfLight& nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    property ::V3d_ListOfLight* NativeInstance
    {
        ::V3d_ListOfLight* get()
        {
            return static_cast<::V3d_ListOfLight*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::V3d_ListOfLight::Iterator>
    {

#ifdef Include_V3d_ListOfLight_Iterator_h
    public:
        Include_V3d_ListOfLight_Iterator_h
#endif

    public:
        Iterator(::V3d_ListOfLight::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::V3d_ListOfLight::Iterator>( nativeInstance, true )
        {}

        Iterator(::V3d_ListOfLight::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::V3d_ListOfLight::Iterator>( &nativeInstance, false )
        {}

        property ::V3d_ListOfLight::Iterator* NativeInstance
        {
            ::V3d_ListOfLight::Iterator* get()
            {
                return static_cast<::V3d_ListOfLight::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Graphic3d_CLight^ Value();
        Macad::Occt::Graphic3d_CLight^ ChangeValue();
    }; // class Iterator

    V3d_ListOfLight();
    V3d_ListOfLight(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    Macad::Occt::V3d_ListOfLight^ Assign(Macad::Occt::V3d_ListOfLight^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::Graphic3d_CLight^ First();
    Macad::Occt::Graphic3d_CLight^ Last();
    Macad::Occt::Graphic3d_CLight^ Append(Macad::Occt::Graphic3d_CLight^ theItem);
    Macad::Occt::Graphic3d_CLight^ Prepend(Macad::Occt::Graphic3d_CLight^ theItem);
    void RemoveFirst();
    void Remove(Macad::Occt::V3d_ListOfLight::Iterator^ theIter);
    Macad::Occt::Graphic3d_CLight^ InsertBefore(Macad::Occt::Graphic3d_CLight^ theItem, Macad::Occt::V3d_ListOfLight::Iterator^ theIter);
    Macad::Occt::Graphic3d_CLight^ InsertAfter(Macad::Occt::Graphic3d_CLight^ theItem, Macad::Occt::V3d_ListOfLight::Iterator^ theIter);
    void Reverse();
}; // class V3d_ListOfLight

//---------------------------------------------------------------------
//  Class  V3d_ListOfView
//---------------------------------------------------------------------
public ref class V3d_ListOfView sealed
    : public Macad::Occt::NCollection_BaseList
{

#ifdef Include_V3d_ListOfView_h
public:
    Include_V3d_ListOfView_h
#endif

public:
    V3d_ListOfView(::V3d_ListOfView* nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    V3d_ListOfView(::V3d_ListOfView& nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    property ::V3d_ListOfView* NativeInstance
    {
        ::V3d_ListOfView* get()
        {
            return static_cast<::V3d_ListOfView*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::V3d_ListOfView::Iterator>
    {

#ifdef Include_V3d_ListOfView_Iterator_h
    public:
        Include_V3d_ListOfView_Iterator_h
#endif

    public:
        Iterator(::V3d_ListOfView::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::V3d_ListOfView::Iterator>( nativeInstance, true )
        {}

        Iterator(::V3d_ListOfView::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::V3d_ListOfView::Iterator>( &nativeInstance, false )
        {}

        property ::V3d_ListOfView::Iterator* NativeInstance
        {
            ::V3d_ListOfView::Iterator* get()
            {
                return static_cast<::V3d_ListOfView::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::V3d_View^ Value();
        Macad::Occt::V3d_View^ ChangeValue();
    }; // class Iterator

    V3d_ListOfView();
    V3d_ListOfView(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    Macad::Occt::V3d_ListOfView^ Assign(Macad::Occt::V3d_ListOfView^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::V3d_View^ First();
    Macad::Occt::V3d_View^ Last();
    Macad::Occt::V3d_View^ Append(Macad::Occt::V3d_View^ theItem);
    Macad::Occt::V3d_View^ Prepend(Macad::Occt::V3d_View^ theItem);
    void RemoveFirst();
    void Remove(Macad::Occt::V3d_ListOfView::Iterator^ theIter);
    Macad::Occt::V3d_View^ InsertBefore(Macad::Occt::V3d_View^ theItem, Macad::Occt::V3d_ListOfView::Iterator^ theIter);
    Macad::Occt::V3d_View^ InsertAfter(Macad::Occt::V3d_View^ theItem, Macad::Occt::V3d_ListOfView::Iterator^ theIter);
    void Reverse();
}; // class V3d_ListOfView

//---------------------------------------------------------------------
//  Class  V3d_ImageDumpOptions
//---------------------------------------------------------------------
/// <summary>
/// The structure defines options for image dump functionality.
/// </summary>
public ref class V3d_ImageDumpOptions sealed
    : public Macad::Occt::BaseClass<::V3d_ImageDumpOptions>
{

#ifdef Include_V3d_ImageDumpOptions_h
public:
    Include_V3d_ImageDumpOptions_h
#endif

public:
    V3d_ImageDumpOptions(::V3d_ImageDumpOptions* nativeInstance)
        : Macad::Occt::BaseClass<::V3d_ImageDumpOptions>( nativeInstance, true )
    {}

    V3d_ImageDumpOptions(::V3d_ImageDumpOptions& nativeInstance)
        : Macad::Occt::BaseClass<::V3d_ImageDumpOptions>( &nativeInstance, false )
    {}

    property ::V3d_ImageDumpOptions* NativeInstance
    {
        ::V3d_ImageDumpOptions* get()
        {
            return static_cast<::V3d_ImageDumpOptions*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// < Width  of image dump to allocate an image, 0 by default (meaning that image should be already allocated).
    /// </summary>
    property int Width {
        int get() {
            return ((::V3d_ImageDumpOptions*)_NativeInstance)->Width;
        }
        void set(int value) {
            ((::V3d_ImageDumpOptions*)_NativeInstance)->Width = value;
        }
    }

    /// <summary>
    /// < Height of image dump to allocate an image, 0 by default (meaning that image should be already allocated).
    /// </summary>
    property int Height {
        int get() {
            return ((::V3d_ImageDumpOptions*)_NativeInstance)->Height;
        }
        void set(int value) {
            ((::V3d_ImageDumpOptions*)_NativeInstance)->Height = value;
        }
    }

    /// <summary>
    /// < Which buffer to dump (color / depth), Graphic3d_BT_RGB by default.
    /// </summary>
    property Macad::Occt::Graphic3d_BufferType BufferType {
        Macad::Occt::Graphic3d_BufferType get() {
            return (Macad::Occt::Graphic3d_BufferType)(((::V3d_ImageDumpOptions*)_NativeInstance)->BufferType);
        }
        void set(Macad::Occt::Graphic3d_BufferType value) {
            ((::V3d_ImageDumpOptions*)_NativeInstance)->BufferType = (::Graphic3d_BufferType)value;
        }
    }

    /// <summary>
    /// < Dumping stereoscopic camera, V3d_SDO_MONO by default (middle-point monographic projection).
    /// </summary>
    property Macad::Occt::V3d_StereoDumpOptions StereoOptions {
        Macad::Occt::V3d_StereoDumpOptions get() {
            return (Macad::Occt::V3d_StereoDumpOptions)(((::V3d_ImageDumpOptions*)_NativeInstance)->StereoOptions);
        }
        void set(Macad::Occt::V3d_StereoDumpOptions value) {
            ((::V3d_ImageDumpOptions*)_NativeInstance)->StereoOptions = (::V3d_StereoDumpOptions)value;
        }
    }

    /// <summary>
    /// < The view dimension limited for tiled dump, 0 by default (automatic tiling depending on hardware capabilities).
    /// </summary>
    property int TileSize {
        int get() {
            return ((::V3d_ImageDumpOptions*)_NativeInstance)->TileSize;
        }
        void set(int value) {
            ((::V3d_ImageDumpOptions*)_NativeInstance)->TileSize = value;
        }
    }

    /// <summary>
    /// < Flag to override active view aspect ratio by (Width / Height) defined for image dump (TRUE by default).
    /// </summary>
    property bool ToAdjustAspect {
        bool get() {
            return ((::V3d_ImageDumpOptions*)_NativeInstance)->ToAdjustAspect;
        }
        void set(bool value) {
            ((::V3d_ImageDumpOptions*)_NativeInstance)->ToAdjustAspect = value;
        }
    }

    /// <summary>
    /// < Target z layer id which defines the last layer to be drawn before image dump.
    /// </summary>
    property int TargetZLayerId {
        int get() {
            return ((::V3d_ImageDumpOptions*)_NativeInstance)->TargetZLayerId;
        }
        void set(int value) {
            ((::V3d_ImageDumpOptions*)_NativeInstance)->TargetZLayerId = value;
        }
    }

    property bool IsSingleLayer {
        bool get() {
            return ((::V3d_ImageDumpOptions*)_NativeInstance)->IsSingleLayer;
        }
        void set(bool value) {
            ((::V3d_ImageDumpOptions*)_NativeInstance)->IsSingleLayer = value;
        }
    }

    /// <summary>
    /// Default constructor.
    /// </summary>
    V3d_ImageDumpOptions();
}; // class V3d_ImageDumpOptions

//---------------------------------------------------------------------
//  Class  V3d_View
//---------------------------------------------------------------------
/// <summary>
/// Defines the application object VIEW for the
/// VIEWER application.
/// The methods of this class allow the editing
/// and inquiring the parameters linked to the view.
/// Provides a set of services common to all types of view.
/// Warning: The default parameters are defined by the class
/// Viewer (Example : SetDefaultViewSize()).
/// Certain methods are mouse oriented, and it is
/// necessary to know the difference between the start and
/// the continuation of this gesture in putting the method
/// into operation.
/// Example : Shifting the eye-view along the screen axes.
/// 
/// View->Move(10.,20.,0.,True)     (Starting motion)
/// View->Move(15.,-5.,0.,False)    (Next motion)
/// </summary>
public ref class V3d_View sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_V3d_View_h
public:
    Include_V3d_View_h
#endif

public:
    V3d_View(::V3d_View* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    V3d_View(::V3d_View& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::V3d_View* NativeInstance
    {
        ::V3d_View* get()
        {
            return static_cast<::V3d_View*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the view.
    /// </summary>
    V3d_View(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::V3d_TypeOfView theType);
    /// <summary>
    /// Initializes the view.
    /// </summary>
    V3d_View(Macad::Occt::V3d_Viewer^ theViewer);
    /// <summary>
    /// Initializes the view by copying.
    /// </summary>
    V3d_View(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Activates the view in the specified Window
    /// If <aContext> is not NULL the graphic context is used
    /// to draw something in this view.
    /// Otherwise an internal graphic context is created.
    /// Warning: The view is centered and resized to preserve
    /// the height/width ratio of the window.
    /// </summary>
    void SetWindow(Macad::Occt::Aspect_Window^ theWindow, System::IntPtr theContext);
    /// <summary>
    /// Activates the view in the specified Window
    /// If <aContext> is not NULL the graphic context is used
    /// to draw something in this view.
    /// Otherwise an internal graphic context is created.
    /// Warning: The view is centered and resized to preserve
    /// the height/width ratio of the window.
    /// </summary>
    void SetWindow(Macad::Occt::Aspect_Window^ theWindow);
    /// <summary>
    /// Activates the view as subview of another view.
    /// </summary>
    /// <param name="in]">
    /// theParentView parent view to put subview into
    /// </param>
    /// <param name="in]">
    /// theSize subview dimensions;
    /// values >= 2   define size in pixels,
    /// values <= 1.0 define size as a fraction of parent view
    /// </param>
    /// <param name="in]">
    /// theCorner corner within parent view
    /// </param>
    /// <param name="in]">
    /// theOffset offset from the corner;
    /// values >= 1   define offset in pixels,
    /// values <  1.0 define offset as a fraction of parent view
    /// </param>
    /// <param name="in]">
    /// theMargins subview margins in pixels
    /// 
    /// Example: to split parent view horizontally into 2 subview,
    /// define one subview with Size=(0.5,1.0),Offset=(0.0,0.0), and 2nd with
    /// Size=(0.5,1.0),Offset=(5.0,0.0);
    /// </param>
    void SetWindow(Macad::Occt::V3d_View^ theParentView, Macad::Occt::Graphic3d_Vec2d^ theSize, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner, Macad::Occt::Graphic3d_Vec2d^ theOffset, Macad::Occt::Graphic3d_Vec2i^ theMargins);
    /// <summary>
    /// Activates the view as subview of another view.
    /// </summary>
    /// <param name="in]">
    /// theParentView parent view to put subview into
    /// </param>
    /// <param name="in]">
    /// theSize subview dimensions;
    /// values >= 2   define size in pixels,
    /// values <= 1.0 define size as a fraction of parent view
    /// </param>
    /// <param name="in]">
    /// theCorner corner within parent view
    /// </param>
    /// <param name="in]">
    /// theOffset offset from the corner;
    /// values >= 1   define offset in pixels,
    /// values <  1.0 define offset as a fraction of parent view
    /// </param>
    /// <param name="in]">
    /// theMargins subview margins in pixels
    /// 
    /// Example: to split parent view horizontally into 2 subview,
    /// define one subview with Size=(0.5,1.0),Offset=(0.0,0.0), and 2nd with
    /// Size=(0.5,1.0),Offset=(5.0,0.0);
    /// </param>
    void SetWindow(Macad::Occt::V3d_View^ theParentView, Macad::Occt::Graphic3d_Vec2d^ theSize, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner, Macad::Occt::Graphic3d_Vec2d^ theOffset);
    /// <summary>
    /// Activates the view as subview of another view.
    /// </summary>
    /// <param name="in]">
    /// theParentView parent view to put subview into
    /// </param>
    /// <param name="in]">
    /// theSize subview dimensions;
    /// values >= 2   define size in pixels,
    /// values <= 1.0 define size as a fraction of parent view
    /// </param>
    /// <param name="in]">
    /// theCorner corner within parent view
    /// </param>
    /// <param name="in]">
    /// theOffset offset from the corner;
    /// values >= 1   define offset in pixels,
    /// values <  1.0 define offset as a fraction of parent view
    /// </param>
    /// <param name="in]">
    /// theMargins subview margins in pixels
    /// 
    /// Example: to split parent view horizontally into 2 subview,
    /// define one subview with Size=(0.5,1.0),Offset=(0.0,0.0), and 2nd with
    /// Size=(0.5,1.0),Offset=(5.0,0.0);
    /// </param>
    void SetWindow(Macad::Occt::V3d_View^ theParentView, Macad::Occt::Graphic3d_Vec2d^ theSize, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner);
    /// <summary>
    /// Activates the view as subview of another view.
    /// </summary>
    /// <param name="in]">
    /// theParentView parent view to put subview into
    /// </param>
    /// <param name="in]">
    /// theSize subview dimensions;
    /// values >= 2   define size in pixels,
    /// values <= 1.0 define size as a fraction of parent view
    /// </param>
    /// <param name="in]">
    /// theCorner corner within parent view
    /// </param>
    /// <param name="in]">
    /// theOffset offset from the corner;
    /// values >= 1   define offset in pixels,
    /// values <  1.0 define offset as a fraction of parent view
    /// </param>
    /// <param name="in]">
    /// theMargins subview margins in pixels
    /// 
    /// Example: to split parent view horizontally into 2 subview,
    /// define one subview with Size=(0.5,1.0),Offset=(0.0,0.0), and 2nd with
    /// Size=(0.5,1.0),Offset=(5.0,0.0);
    /// </param>
    void SetWindow(Macad::Occt::V3d_View^ theParentView, Macad::Occt::Graphic3d_Vec2d^ theSize);
    void SetMagnify(Macad::Occt::Aspect_Window^ theWindow, Macad::Occt::V3d_View^ thePreviousView, int theX1, int theY1, int theX2, int theY2);
    /// <summary>
    /// Destroys the view.
    /// </summary>
    void Remove();
    /// <summary>
    /// Deprecated, Redraw() should be used instead.
    /// </summary>
    void Update();
    /// <summary>
    /// Redisplays the view even if there has not
    /// been any modification.
    /// Must be called if the view is shown.
    /// (Ex: DeIconification ) .
    /// </summary>
    void Redraw();
    /// <summary>
    /// Updates layer of immediate presentations.
    /// </summary>
    void RedrawImmediate();
    /// <summary>
    /// Invalidates view content but does not redraw it.
    /// </summary>
    void Invalidate();
    /// <summary>
    /// Returns true if cached view content has been invalidated.
    /// </summary>
    bool IsInvalidated();
    /// <summary>
    /// Returns true if immediate layer content has been invalidated.
    /// </summary>
    bool IsInvalidatedImmediate();
    /// <summary>
    /// Invalidates view content within immediate layer but does not redraw it.
    /// </summary>
    void InvalidateImmediate();
    /// <summary>
    /// Must be called when the window supporting the
    /// view changes size.
    /// if the view is not mapped on a window.
    /// Warning: The view is centered and resized to preserve
    /// the height/width ratio of the window.
    /// </summary>
    void MustBeResized();
    /// <summary>
    /// Must be called when the window supporting the
    /// view is mapped or unmapped.
    /// </summary>
    void DoMapping();
    /// <summary>
    /// Returns the status of the view regarding
    /// the displayed structures inside
    /// Returns True is The View is empty
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Updates the lights of the view.
    /// </summary>
    void UpdateLights();
    /// <summary>
    /// Sets the automatic z-fit mode and its parameters.
    /// The auto z-fit has extra parameters which can controlled from application level
    /// to ensure that the size of viewing volume will be sufficiently large to cover
    /// the depth of unmanaged objects, for example, transformation persistent ones.
    /// </summary>
    /// <param name="in]">
    /// theScaleFactor  the scale factor for Z-range.
    /// The range between Z-min, Z-max projection volume planes
    /// evaluated by z fitting method will be scaled using this coefficient.
    /// Program error exception is thrown if negative or zero value
    /// is passed.
    /// </param>
    void SetAutoZFitMode(bool theIsOn, double theScaleFactor);
    /// <summary>
    /// Sets the automatic z-fit mode and its parameters.
    /// The auto z-fit has extra parameters which can controlled from application level
    /// to ensure that the size of viewing volume will be sufficiently large to cover
    /// the depth of unmanaged objects, for example, transformation persistent ones.
    /// </summary>
    /// <param name="in]">
    /// theScaleFactor  the scale factor for Z-range.
    /// The range between Z-min, Z-max projection volume planes
    /// evaluated by z fitting method will be scaled using this coefficient.
    /// Program error exception is thrown if negative or zero value
    /// is passed.
    /// </param>
    void SetAutoZFitMode(bool theIsOn);
    /// <summary>
    /// returns TRUE if automatic z-fit mode is turned on.
    /// </summary>
    bool AutoZFitMode();
    /// <summary>
    /// returns scale factor parameter of automatic z-fit mode.
    /// </summary>
    double AutoZFitScaleFactor();
    /// <summary>
    /// If automatic z-range fitting is turned on, adjusts Z-min and Z-max
    /// projection volume planes with call to ZFitAll.
    /// </summary>
    void AutoZFit();
    /// <summary>
    /// Change Z-min and Z-max planes of projection volume to match the
    /// displayed objects.
    /// </summary>
    void ZFitAll(double theScaleFactor);
    /// <summary>
    /// Change Z-min and Z-max planes of projection volume to match the
    /// displayed objects.
    /// </summary>
    void ZFitAll();
    /// <summary>
    /// Defines the background color of the view by the color definition type and the three
    /// corresponding values.
    /// </summary>
    void SetBackgroundColor(Macad::Occt::Quantity_TypeOfColor theType, double theV1, double theV2, double theV3);
    /// <summary>
    /// Defines the background color of the view.
    /// </summary>
    void SetBackgroundColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Defines the gradient background colors of the view by supplying the colors
    /// and the fill method (horizontal by default).
    /// </summary>
    void SetBgGradientColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2, Macad::Occt::Aspect_GradientFillMethod theFillStyle, bool theToUpdate);
    /// <summary>
    /// Defines the gradient background colors of the view by supplying the colors
    /// and the fill method (horizontal by default).
    /// </summary>
    void SetBgGradientColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2, Macad::Occt::Aspect_GradientFillMethod theFillStyle);
    /// <summary>
    /// Defines the gradient background colors of the view by supplying the colors
    /// and the fill method (horizontal by default).
    /// </summary>
    void SetBgGradientColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2);
    /// <summary>
    /// Defines the gradient background fill method of the view.
    /// </summary>
    void SetBgGradientStyle(Macad::Occt::Aspect_GradientFillMethod theMethod, bool theToUpdate);
    /// <summary>
    /// Defines the gradient background fill method of the view.
    /// </summary>
    void SetBgGradientStyle(Macad::Occt::Aspect_GradientFillMethod theMethod);
    /// <summary>
    /// Defines the gradient background fill method of the view.
    /// </summary>
    void SetBgGradientStyle();
    /// <summary>
    /// Defines the background texture of the view by supplying the texture image file name
    /// and fill method (centered by default).
    /// </summary>
    void SetBackgroundImage(System::String^ theFileName, Macad::Occt::Aspect_FillMethod theFillStyle, bool theToUpdate);
    /// <summary>
    /// Defines the background texture of the view by supplying the texture image file name
    /// and fill method (centered by default).
    /// </summary>
    void SetBackgroundImage(System::String^ theFileName, Macad::Occt::Aspect_FillMethod theFillStyle);
    /// <summary>
    /// Defines the background texture of the view by supplying the texture image file name
    /// and fill method (centered by default).
    /// </summary>
    void SetBackgroundImage(System::String^ theFileName);
    /// <summary>
    /// Defines the background texture of the view by supplying the texture and fill method (centered
    /// by default)
    /// </summary>
    void SetBackgroundImage(Macad::Occt::Graphic3d_Texture2D^ theTexture, Macad::Occt::Aspect_FillMethod theFillStyle, bool theToUpdate);
    /// <summary>
    /// Defines the background texture of the view by supplying the texture and fill method (centered
    /// by default)
    /// </summary>
    void SetBackgroundImage(Macad::Occt::Graphic3d_Texture2D^ theTexture, Macad::Occt::Aspect_FillMethod theFillStyle);
    /// <summary>
    /// Defines the background texture of the view by supplying the texture and fill method (centered
    /// by default)
    /// </summary>
    void SetBackgroundImage(Macad::Occt::Graphic3d_Texture2D^ theTexture);
    /// <summary>
    /// Defines the textured background fill method of the view.
    /// </summary>
    void SetBgImageStyle(Macad::Occt::Aspect_FillMethod theFillStyle, bool theToUpdate);
    /// <summary>
    /// Defines the textured background fill method of the view.
    /// </summary>
    void SetBgImageStyle(Macad::Occt::Aspect_FillMethod theFillStyle);
    /// <summary>
    /// Sets environment cubemap as background.
    /// </summary>
    /// <param name="theCubeMap">
    /// cubemap source to be set as background
    /// </param>
    /// <param name="theToUpdatePBREnv">
    /// defines whether IBL maps will be generated or not (see
    /// 'GeneratePBREnvironment')
    /// </param>
    void SetBackgroundCubeMap(Macad::Occt::Graphic3d_CubeMap^ theCubeMap, bool theToUpdatePBREnv, bool theToUpdate);
    /// <summary>
    /// Sets environment cubemap as background.
    /// </summary>
    /// <param name="theCubeMap">
    /// cubemap source to be set as background
    /// </param>
    /// <param name="theToUpdatePBREnv">
    /// defines whether IBL maps will be generated or not (see
    /// 'GeneratePBREnvironment')
    /// </param>
    void SetBackgroundCubeMap(Macad::Occt::Graphic3d_CubeMap^ theCubeMap, bool theToUpdatePBREnv);
    /// <summary>
    /// Sets environment cubemap as background.
    /// </summary>
    /// <param name="theCubeMap">
    /// cubemap source to be set as background
    /// </param>
    /// <param name="theToUpdatePBREnv">
    /// defines whether IBL maps will be generated or not (see
    /// 'GeneratePBREnvironment')
    /// </param>
    void SetBackgroundCubeMap(Macad::Occt::Graphic3d_CubeMap^ theCubeMap);
    /// <summary>
    /// Returns skydome aspect;
    /// </summary>
    Macad::Occt::Aspect_SkydomeBackground^ BackgroundSkydome();
    /// <summary>
    /// Sets skydome aspect
    /// </summary>
    /// <param name="theAspect">
    /// cubemap generation parameters
    /// </param>
    /// <param name="theToUpdatePBREnv">
    /// defines whether IBL maps will be generated or not
    /// </param>
    void SetBackgroundSkydome(Macad::Occt::Aspect_SkydomeBackground^ theAspect, bool theToUpdatePBREnv);
    /// <summary>
    /// Sets skydome aspect
    /// </summary>
    /// <param name="theAspect">
    /// cubemap generation parameters
    /// </param>
    /// <param name="theToUpdatePBREnv">
    /// defines whether IBL maps will be generated or not
    /// </param>
    void SetBackgroundSkydome(Macad::Occt::Aspect_SkydomeBackground^ theAspect);
    /// <summary>
    /// Returns TRUE if IBL (Image Based Lighting) from background cubemap is enabled.
    /// </summary>
    bool IsImageBasedLighting();
    /// <summary>
    /// Enables or disables IBL (Image Based Lighting) from background cubemap.
    /// Has no effect if PBR is not used.
    /// </summary>
    /// <param name="in]">
    /// theToEnableIBL enable or disable IBL from background cubemap
    /// </param>
    /// <param name="in]">
    /// theToUpdate redraw the view
    /// </param>
    void SetImageBasedLighting(bool theToEnableIBL, bool theToUpdate);
    /// <summary>
    /// Enables or disables IBL (Image Based Lighting) from background cubemap.
    /// Has no effect if PBR is not used.
    /// </summary>
    /// <param name="in]">
    /// theToEnableIBL enable or disable IBL from background cubemap
    /// </param>
    /// <param name="in]">
    /// theToUpdate redraw the view
    /// </param>
    void SetImageBasedLighting(bool theToEnableIBL);
    /// <summary>
    /// Activates IBL from background cubemap.
    /// </summary>
    void GeneratePBREnvironment(bool theToUpdate);
    /// <summary>
    /// Activates IBL from background cubemap.
    /// </summary>
    void GeneratePBREnvironment();
    /// <summary>
    /// Disables IBL from background cubemap; fills PBR specular probe and irradiance map with white
    /// color.
    /// </summary>
    void ClearPBREnvironment(bool theToUpdate);
    /// <summary>
    /// Disables IBL from background cubemap; fills PBR specular probe and irradiance map with white
    /// color.
    /// </summary>
    void ClearPBREnvironment();
    /// <summary>
    /// Sets the environment texture to use. No environment texture by default.
    /// </summary>
    void SetTextureEnv(Macad::Occt::Graphic3d_TextureEnv^ theTexture);
    /// <summary>
    /// Definition of an axis from its origin and
    /// its orientation .
    /// This will be the current axis for rotations and movements.
    /// Warning! raises BadValue from V3d if the vector normal is NULL. .
    /// </summary>
    void SetAxis(double X, double Y, double Z, double Vx, double Vy, double Vz);
    /// <summary>
    /// Defines the visualization type in the view.
    /// </summary>
    void SetVisualization(Macad::Occt::V3d_TypeOfVisualization theType);
    /// <summary>
    /// Activates theLight in the view.
    /// </summary>
    void SetLightOn(Macad::Occt::Graphic3d_CLight^ theLight);
    /// <summary>
    /// Activates all the lights defined in this view.
    /// </summary>
    void SetLightOn();
    /// <summary>
    /// Deactivate theLight in this view.
    /// </summary>
    void SetLightOff(Macad::Occt::Graphic3d_CLight^ theLight);
    /// <summary>
    /// Deactivate all the Lights defined in this view.
    /// </summary>
    void SetLightOff();
    /// <summary>
    /// Returns TRUE when the light is active in this view.
    /// </summary>
    bool IsActiveLight(Macad::Occt::Graphic3d_CLight^ theLight);
    /// <summary>
    /// sets the immediate update mode and returns the previous one.
    /// </summary>
    bool SetImmediateUpdate(bool theImmediateUpdate);
    /// <summary>
    /// Returns trihedron object.
    /// </summary>
    Macad::Occt::V3d_Trihedron^ Trihedron(bool theToCreate);
    /// <summary>
    /// Returns trihedron object.
    /// </summary>
    Macad::Occt::V3d_Trihedron^ Trihedron();
    /// <summary>
    /// Customization of the ZBUFFER Triedron.
    /// XColor,YColor,ZColor - colors of axis
    /// SizeRatio - ratio of decreasing of the trihedron size when its physical
    /// position comes out of the view
    /// AxisDiametr - diameter relatively to axis length
    /// NbFacettes - number of facets of cylinders and cones
    /// </summary>
    void ZBufferTriedronSetup(Macad::Occt::Quantity_Color^ theXColor, Macad::Occt::Quantity_Color^ theYColor, Macad::Occt::Quantity_Color^ theZColor, double theSizeRatio, double theAxisDiametr, int theNbFacettes);
    /// <summary>
    /// Customization of the ZBUFFER Triedron.
    /// XColor,YColor,ZColor - colors of axis
    /// SizeRatio - ratio of decreasing of the trihedron size when its physical
    /// position comes out of the view
    /// AxisDiametr - diameter relatively to axis length
    /// NbFacettes - number of facets of cylinders and cones
    /// </summary>
    void ZBufferTriedronSetup(Macad::Occt::Quantity_Color^ theXColor, Macad::Occt::Quantity_Color^ theYColor, Macad::Occt::Quantity_Color^ theZColor, double theSizeRatio, double theAxisDiametr);
    /// <summary>
    /// Customization of the ZBUFFER Triedron.
    /// XColor,YColor,ZColor - colors of axis
    /// SizeRatio - ratio of decreasing of the trihedron size when its physical
    /// position comes out of the view
    /// AxisDiametr - diameter relatively to axis length
    /// NbFacettes - number of facets of cylinders and cones
    /// </summary>
    void ZBufferTriedronSetup(Macad::Occt::Quantity_Color^ theXColor, Macad::Occt::Quantity_Color^ theYColor, Macad::Occt::Quantity_Color^ theZColor, double theSizeRatio);
    /// <summary>
    /// Customization of the ZBUFFER Triedron.
    /// XColor,YColor,ZColor - colors of axis
    /// SizeRatio - ratio of decreasing of the trihedron size when its physical
    /// position comes out of the view
    /// AxisDiametr - diameter relatively to axis length
    /// NbFacettes - number of facets of cylinders and cones
    /// </summary>
    void ZBufferTriedronSetup(Macad::Occt::Quantity_Color^ theXColor, Macad::Occt::Quantity_Color^ theYColor, Macad::Occt::Quantity_Color^ theZColor);
    /// <summary>
    /// Customization of the ZBUFFER Triedron.
    /// XColor,YColor,ZColor - colors of axis
    /// SizeRatio - ratio of decreasing of the trihedron size when its physical
    /// position comes out of the view
    /// AxisDiametr - diameter relatively to axis length
    /// NbFacettes - number of facets of cylinders and cones
    /// </summary>
    void ZBufferTriedronSetup(Macad::Occt::Quantity_Color^ theXColor, Macad::Occt::Quantity_Color^ theYColor);
    /// <summary>
    /// Customization of the ZBUFFER Triedron.
    /// XColor,YColor,ZColor - colors of axis
    /// SizeRatio - ratio of decreasing of the trihedron size when its physical
    /// position comes out of the view
    /// AxisDiametr - diameter relatively to axis length
    /// NbFacettes - number of facets of cylinders and cones
    /// </summary>
    void ZBufferTriedronSetup(Macad::Occt::Quantity_Color^ theXColor);
    /// <summary>
    /// Customization of the ZBUFFER Triedron.
    /// XColor,YColor,ZColor - colors of axis
    /// SizeRatio - ratio of decreasing of the trihedron size when its physical
    /// position comes out of the view
    /// AxisDiametr - diameter relatively to axis length
    /// NbFacettes - number of facets of cylinders and cones
    /// </summary>
    void ZBufferTriedronSetup();
    /// <summary>
    /// Display of the Triedron.
    /// Initialize position, color and length of Triedron axes.
    /// The scale is a percent of the window width.
    /// </summary>
    void TriedronDisplay(Macad::Occt::Aspect_TypeOfTriedronPosition thePosition, Macad::Occt::Quantity_Color^ theColor, double theScale, Macad::Occt::V3d_TypeOfVisualization theMode);
    /// <summary>
    /// Display of the Triedron.
    /// Initialize position, color and length of Triedron axes.
    /// The scale is a percent of the window width.
    /// </summary>
    void TriedronDisplay(Macad::Occt::Aspect_TypeOfTriedronPosition thePosition, Macad::Occt::Quantity_Color^ theColor, double theScale);
    /// <summary>
    /// Display of the Triedron.
    /// Initialize position, color and length of Triedron axes.
    /// The scale is a percent of the window width.
    /// </summary>
    void TriedronDisplay(Macad::Occt::Aspect_TypeOfTriedronPosition thePosition, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Display of the Triedron.
    /// Initialize position, color and length of Triedron axes.
    /// The scale is a percent of the window width.
    /// </summary>
    void TriedronDisplay(Macad::Occt::Aspect_TypeOfTriedronPosition thePosition);
    /// <summary>
    /// Display of the Triedron.
    /// Initialize position, color and length of Triedron axes.
    /// The scale is a percent of the window width.
    /// </summary>
    void TriedronDisplay();
    /// <summary>
    /// Erases the Triedron.
    /// </summary>
    void TriedronErase();
    /// <summary>
    /// Returns data of a graduated trihedron.
    /// </summary>
    Macad::Occt::Graphic3d_GraduatedTrihedron^ GetGraduatedTrihedron();
    /// <summary>
    /// Displays a graduated trihedron.
    /// </summary>
    void GraduatedTrihedronDisplay(Macad::Occt::Graphic3d_GraduatedTrihedron^ theTrihedronData);
    /// <summary>
    /// Erases a graduated trihedron from the view.
    /// </summary>
    void GraduatedTrihedronErase();
    /// <summary>
    /// modify the Projection of the view perpendicularly to
    /// the privileged plane of the viewer.
    /// </summary>
    void SetFront();
    /// <summary>
    /// Rotates the eye about the coordinate system of
    /// reference of the screen
    /// for which the origin is the view point of the projection,
    /// with a relative angular value in RADIANS with respect to
    /// the initial position expressed by Start = Standard_True
    /// Warning! raises BadValue from V3d
    /// If the eye, the view point, or the high point are
    /// aligned or confused.
    /// </summary>
    void Rotate(double Ax, double Ay, double Az, bool Start);
    /// <summary>
    /// Rotates the eye about the coordinate system of
    /// reference of the screen
    /// for which the origin is the view point of the projection,
    /// with a relative angular value in RADIANS with respect to
    /// the initial position expressed by Start = Standard_True
    /// Warning! raises BadValue from V3d
    /// If the eye, the view point, or the high point are
    /// aligned or confused.
    /// </summary>
    void Rotate(double Ax, double Ay, double Az);
    /// <summary>
    /// Rotates the eye about the coordinate system of
    /// reference of the screen
    /// for which the origin is Gravity point {X,Y,Z},
    /// with a relative angular value in RADIANS with respect to
    /// the initial position expressed by Start = Standard_True
    /// If the eye, the view point, or the high point are
    /// aligned or confused.
    /// </summary>
    void Rotate(double Ax, double Ay, double Az, double X, double Y, double Z, bool Start);
    /// <summary>
    /// Rotates the eye about the coordinate system of
    /// reference of the screen
    /// for which the origin is Gravity point {X,Y,Z},
    /// with a relative angular value in RADIANS with respect to
    /// the initial position expressed by Start = Standard_True
    /// If the eye, the view point, or the high point are
    /// aligned or confused.
    /// </summary>
    void Rotate(double Ax, double Ay, double Az, double X, double Y, double Z);
    /// <summary>
    /// Rotates the eye about one of the coordinate axes of
    /// of the view for which the origin is the Gravity point{X,Y,Z}
    /// with an relative angular value in RADIANS with
    /// respect to the initial position expressed by
    /// Start = Standard_True
    /// </summary>
    void Rotate(Macad::Occt::V3d_TypeOfAxe Axe, double Angle, double X, double Y, double Z, bool Start);
    /// <summary>
    /// Rotates the eye about one of the coordinate axes of
    /// of the view for which the origin is the Gravity point{X,Y,Z}
    /// with an relative angular value in RADIANS with
    /// respect to the initial position expressed by
    /// Start = Standard_True
    /// </summary>
    void Rotate(Macad::Occt::V3d_TypeOfAxe Axe, double Angle, double X, double Y, double Z);
    /// <summary>
    /// Rotates the eye about one of the coordinate axes of
    /// of the view for which the origin is the view point of the
    /// projection with an relative angular value in RADIANS with
    /// respect to the initial position expressed by
    /// Start = Standard_True
    /// </summary>
    void Rotate(Macad::Occt::V3d_TypeOfAxe Axe, double Angle, bool Start);
    /// <summary>
    /// Rotates the eye about one of the coordinate axes of
    /// of the view for which the origin is the view point of the
    /// projection with an relative angular value in RADIANS with
    /// respect to the initial position expressed by
    /// Start = Standard_True
    /// </summary>
    void Rotate(Macad::Occt::V3d_TypeOfAxe Axe, double Angle);
    /// <summary>
    /// Rotates the eye around the current axis a relative
    /// angular value in RADIANS with respect to the initial
    /// position expressed by Start = Standard_True
    /// </summary>
    void Rotate(double Angle, bool Start);
    /// <summary>
    /// Rotates the eye around the current axis a relative
    /// angular value in RADIANS with respect to the initial
    /// position expressed by Start = Standard_True
    /// </summary>
    void Rotate(double Angle);
    /// <summary>
    /// Movement of the eye parallel to the coordinate system
    /// of reference of the screen a distance relative to the
    /// initial position expressed by Start = Standard_True.
    /// </summary>
    void Move(double Dx, double Dy, double Dz, bool Start);
    /// <summary>
    /// Movement of the eye parallel to the coordinate system
    /// of reference of the screen a distance relative to the
    /// initial position expressed by Start = Standard_True.
    /// </summary>
    void Move(double Dx, double Dy, double Dz);
    /// <summary>
    /// Movement of the eye parallel to one of the axes of the
    /// coordinate system of reference of the view a distance
    /// relative to the initial position expressed by
    /// Start = Standard_True.
    /// </summary>
    void Move(Macad::Occt::V3d_TypeOfAxe Axe, double Length, bool Start);
    /// <summary>
    /// Movement of the eye parallel to one of the axes of the
    /// coordinate system of reference of the view a distance
    /// relative to the initial position expressed by
    /// Start = Standard_True.
    /// </summary>
    void Move(Macad::Occt::V3d_TypeOfAxe Axe, double Length);
    /// <summary>
    /// Movement of the eye parllel to the current axis
    /// a distance relative to the initial position
    /// expressed by Start = Standard_True
    /// </summary>
    void Move(double Length, bool Start);
    /// <summary>
    /// Movement of the eye parllel to the current axis
    /// a distance relative to the initial position
    /// expressed by Start = Standard_True
    /// </summary>
    void Move(double Length);
    /// <summary>
    /// Movement of the ye and the view point parallel to the
    /// frame of reference of the screen a distance relative
    /// to the initial position expressed by
    /// Start = Standard_True
    /// </summary>
    void Translate(double Dx, double Dy, double Dz, bool Start);
    /// <summary>
    /// Movement of the ye and the view point parallel to the
    /// frame of reference of the screen a distance relative
    /// to the initial position expressed by
    /// Start = Standard_True
    /// </summary>
    void Translate(double Dx, double Dy, double Dz);
    /// <summary>
    /// Movement of the eye and the view point parallel to one
    /// of the axes of the fame of reference of the view a
    /// distance relative to the initial position
    /// expressed by Start = Standard_True
    /// </summary>
    void Translate(Macad::Occt::V3d_TypeOfAxe Axe, double Length, bool Start);
    /// <summary>
    /// Movement of the eye and the view point parallel to one
    /// of the axes of the fame of reference of the view a
    /// distance relative to the initial position
    /// expressed by Start = Standard_True
    /// </summary>
    void Translate(Macad::Occt::V3d_TypeOfAxe Axe, double Length);
    /// <summary>
    /// Movement of the eye and view point parallel to
    /// the current axis a distance relative to the initial
    /// position expressed by Start = Standard_True
    /// </summary>
    void Translate(double Length, bool Start);
    /// <summary>
    /// Movement of the eye and view point parallel to
    /// the current axis a distance relative to the initial
    /// position expressed by Start = Standard_True
    /// </summary>
    void Translate(double Length);
    /// <summary>
    /// places the point of the view corresponding
    /// at the pixel position x,y at the center of the window
    /// and updates the view.
    /// </summary>
    void Place(int theXp, int theYp, double theZoomFactor);
    /// <summary>
    /// places the point of the view corresponding
    /// at the pixel position x,y at the center of the window
    /// and updates the view.
    /// </summary>
    void Place(int theXp, int theYp);
    /// <summary>
    /// Rotation of the view point around the frame of reference
    /// of the screen for which the origin is the eye of the
    /// projection with a relative angular value in RADIANS
    /// with respect to the initial position expressed by
    /// Start = Standard_True
    /// </summary>
    void Turn(double Ax, double Ay, double Az, bool Start);
    /// <summary>
    /// Rotation of the view point around the frame of reference
    /// of the screen for which the origin is the eye of the
    /// projection with a relative angular value in RADIANS
    /// with respect to the initial position expressed by
    /// Start = Standard_True
    /// </summary>
    void Turn(double Ax, double Ay, double Az);
    /// <summary>
    /// Rotation of the view point around one of the axes of the
    /// frame of reference of the view for which the origin is
    /// the eye of the projection with an angular value in
    /// RADIANS relative to the initial position expressed by
    /// Start = Standard_True
    /// </summary>
    void Turn(Macad::Occt::V3d_TypeOfAxe Axe, double Angle, bool Start);
    /// <summary>
    /// Rotation of the view point around one of the axes of the
    /// frame of reference of the view for which the origin is
    /// the eye of the projection with an angular value in
    /// RADIANS relative to the initial position expressed by
    /// Start = Standard_True
    /// </summary>
    void Turn(Macad::Occt::V3d_TypeOfAxe Axe, double Angle);
    /// <summary>
    /// Rotation of the view point around the current axis an
    /// angular value in RADIANS relative to the initial
    /// position expressed by Start = Standard_True
    /// </summary>
    void Turn(double Angle, bool Start);
    /// <summary>
    /// Rotation of the view point around the current axis an
    /// angular value in RADIANS relative to the initial
    /// position expressed by Start = Standard_True
    /// </summary>
    void Turn(double Angle);
    /// <summary>
    /// Defines the angular position of the high point of
    /// the reference frame of the view with respect to the
    /// Y screen axis with an absolute angular value in
    /// RADIANS.
    /// </summary>
    void SetTwist(double Angle);
    /// <summary>
    /// Defines the position of the eye..
    /// </summary>
    void SetEye(double X, double Y, double Z);
    /// <summary>
    /// Defines the Depth of the eye from the view point
    /// without update the projection .
    /// </summary>
    void SetDepth(double Depth);
    /// <summary>
    /// Defines the orientation of the projection.
    /// </summary>
    void SetProj(double Vx, double Vy, double Vz);
    /// <summary>
    /// Defines the orientation of the projection .
    /// </summary>
    /// <param name="theOrientation">
    /// camera direction
    /// </param>
    /// <param name="theIsYup">
    ///       flag indicating Y-up (TRUE) or Z-up (FALSE) convention
    /// </param>
    void SetProj(Macad::Occt::V3d_TypeOfOrientation theOrientation, bool theIsYup);
    /// <summary>
    /// Defines the orientation of the projection .
    /// </summary>
    /// <param name="theOrientation">
    /// camera direction
    /// </param>
    /// <param name="theIsYup">
    ///       flag indicating Y-up (TRUE) or Z-up (FALSE) convention
    /// </param>
    void SetProj(Macad::Occt::V3d_TypeOfOrientation theOrientation);
    /// <summary>
    /// Defines the position of the view point.
    /// </summary>
    void SetAt(double X, double Y, double Z);
    /// <summary>
    /// Defines the orientation of the high point.
    /// </summary>
    void SetUp(double Vx, double Vy, double Vz);
    /// <summary>
    /// Defines the orientation(SO) of the high point.
    /// </summary>
    void SetUp(Macad::Occt::V3d_TypeOfOrientation Orientation);
    /// <summary>
    /// Saves the current state of the orientation of the view
    /// which will be the return state at ResetViewOrientation.
    /// </summary>
    void SetViewOrientationDefault();
    /// <summary>
    /// Resets the orientation of the view.
    /// Updates the view
    /// </summary>
    void ResetViewOrientation();
    /// <summary>
    /// Translates the center of the view along "x" and "y" axes of
    /// view projection. Can be used to perform interactive panning operation.
    /// In that case the DXv, DXy parameters specify panning relative to the
    /// point where the operation is started.
    /// </summary>
    /// <param name="in]">
    /// theDXv  the relative panning on "x" axis of view projection, in view space
    /// coordinates.
    /// </param>
    /// <param name="in]">
    /// theDYv  the relative panning on "y" axis of view projection, in view space
    /// coordinates.
    /// </param>
    /// <param name="in]">
    /// theZoomFactor  the zooming factor.
    /// </param>
    /// <param name="in]">
    /// theToStart  pass TRUE when starting panning to remember view
    /// state prior to panning for relative arguments. If panning is started,
    /// passing {0, 0} for {theDXv, theDYv} will return view to initial state.
    /// Performs update of view.
    /// </param>
    void Panning(double theDXv, double theDYv, double theZoomFactor, bool theToStart);
    /// <summary>
    /// Translates the center of the view along "x" and "y" axes of
    /// view projection. Can be used to perform interactive panning operation.
    /// In that case the DXv, DXy parameters specify panning relative to the
    /// point where the operation is started.
    /// </summary>
    /// <param name="in]">
    /// theDXv  the relative panning on "x" axis of view projection, in view space
    /// coordinates.
    /// </param>
    /// <param name="in]">
    /// theDYv  the relative panning on "y" axis of view projection, in view space
    /// coordinates.
    /// </param>
    /// <param name="in]">
    /// theZoomFactor  the zooming factor.
    /// </param>
    /// <param name="in]">
    /// theToStart  pass TRUE when starting panning to remember view
    /// state prior to panning for relative arguments. If panning is started,
    /// passing {0, 0} for {theDXv, theDYv} will return view to initial state.
    /// Performs update of view.
    /// </param>
    void Panning(double theDXv, double theDYv, double theZoomFactor);
    /// <summary>
    /// Translates the center of the view along "x" and "y" axes of
    /// view projection. Can be used to perform interactive panning operation.
    /// In that case the DXv, DXy parameters specify panning relative to the
    /// point where the operation is started.
    /// </summary>
    /// <param name="in]">
    /// theDXv  the relative panning on "x" axis of view projection, in view space
    /// coordinates.
    /// </param>
    /// <param name="in]">
    /// theDYv  the relative panning on "y" axis of view projection, in view space
    /// coordinates.
    /// </param>
    /// <param name="in]">
    /// theZoomFactor  the zooming factor.
    /// </param>
    /// <param name="in]">
    /// theToStart  pass TRUE when starting panning to remember view
    /// state prior to panning for relative arguments. If panning is started,
    /// passing {0, 0} for {theDXv, theDYv} will return view to initial state.
    /// Performs update of view.
    /// </param>
    void Panning(double theDXv, double theDYv);
    /// <summary>
    /// Relocates center of screen to the point, determined by
    /// {Xp, Yp} pixel coordinates relative to the bottom-left corner of
    /// screen. To calculate pixel coordinates for any point from world
    /// coordinate space, it can be projected using "Project".
    /// </summary>
    /// <param name="in]">
    /// theXp  the x coordinate.
    /// </param>
    /// <param name="in]">
    /// theYp  the y coordinate.
    /// </param>
    void SetCenter(int theXp, int theYp);
    /// <summary>
    /// Defines the view projection size in its maximum dimension,
    /// keeping the initial height/width ratio unchanged.
    /// </summary>
    void SetSize(double theSize);
    /// <summary>
    /// Defines the Depth size of the view
    /// Front Plane will be set to Size/2.
    /// Back  Plane will be set to -Size/2.
    /// Any Object located Above the Front Plane or
    /// behind the Back Plane will be Clipped .
    /// NOTE than the XY Size of the View is NOT modified .
    /// </summary>
    void SetZSize(double SetZSize);
    /// <summary>
    /// Zooms the view by a factor relative to the initial
    /// value expressed by Start = Standard_True
    /// Updates the view.
    /// </summary>
    void SetZoom(double Coef, bool Start);
    /// <summary>
    /// Zooms the view by a factor relative to the initial
    /// value expressed by Start = Standard_True
    /// Updates the view.
    /// </summary>
    void SetZoom(double Coef);
    /// <summary>
    /// Zooms the view by a factor relative to the value
    /// initialised by SetViewMappingDefault().
    /// Updates the view.
    /// </summary>
    void SetScale(double Coef);
    /// <summary>
    /// Sets  anisotropic (axial)  scale  factors  <Sx>, <Sy>, <Sz>  for  view <me>.
    /// Anisotropic  scaling  operation  is  performed  through  multiplying
    /// the current view  orientation  matrix  by  a  scaling  matrix:
    /// || Sx  0   0   0 ||
    /// || 0   Sy  0   0 ||
    /// || 0   0   Sz  0 ||
    /// || 0   0   0   1 ||
    /// Updates the view.
    /// </summary>
    void SetAxialScale(double Sx, double Sy, double Sz);
    /// <summary>
    /// Adjust view parameters to fit the displayed scene, respecting height / width ratio.
    /// The Z clipping range (depth range) is fitted if AutoZFit flag is TRUE.
    /// Throws program error exception if margin coefficient is < 0 or >= 1.
    /// Updates the view.
    /// </summary>
    /// <param name="in]">
    /// theMargin  the margin coefficient for view borders.
    /// </param>
    /// <param name="in]">
    /// theToUpdate  flag to perform view update.
    /// </param>
    void FitAll(double theMargin, bool theToUpdate);
    /// <summary>
    /// Adjust view parameters to fit the displayed scene, respecting height / width ratio.
    /// The Z clipping range (depth range) is fitted if AutoZFit flag is TRUE.
    /// Throws program error exception if margin coefficient is < 0 or >= 1.
    /// Updates the view.
    /// </summary>
    /// <param name="in]">
    /// theMargin  the margin coefficient for view borders.
    /// </param>
    /// <param name="in]">
    /// theToUpdate  flag to perform view update.
    /// </param>
    void FitAll(double theMargin);
    /// <summary>
    /// Adjust view parameters to fit the displayed scene, respecting height / width ratio.
    /// The Z clipping range (depth range) is fitted if AutoZFit flag is TRUE.
    /// Throws program error exception if margin coefficient is < 0 or >= 1.
    /// Updates the view.
    /// </summary>
    /// <param name="in]">
    /// theMargin  the margin coefficient for view borders.
    /// </param>
    /// <param name="in]">
    /// theToUpdate  flag to perform view update.
    /// </param>
    void FitAll();
    /// <summary>
    /// Adjust view parameters to fit the displayed scene, respecting height / width ratio
    /// according to the custom bounding box given.
    /// Throws program error exception if margin coefficient is < 0 or >= 1.
    /// Updates the view.
    /// </summary>
    /// <param name="in]">
    /// theBox  the custom bounding box to fit.
    /// </param>
    /// <param name="in]">
    /// theMargin  the margin coefficient for view borders.
    /// </param>
    /// <param name="in]">
    /// theToUpdate  flag to perform view update.
    /// </param>
    void FitAll(Macad::Occt::Bnd_Box^ theBox, double theMargin, bool theToUpdate);
    /// <summary>
    /// Adjust view parameters to fit the displayed scene, respecting height / width ratio
    /// according to the custom bounding box given.
    /// Throws program error exception if margin coefficient is < 0 or >= 1.
    /// Updates the view.
    /// </summary>
    /// <param name="in]">
    /// theBox  the custom bounding box to fit.
    /// </param>
    /// <param name="in]">
    /// theMargin  the margin coefficient for view borders.
    /// </param>
    /// <param name="in]">
    /// theToUpdate  flag to perform view update.
    /// </param>
    void FitAll(Macad::Occt::Bnd_Box^ theBox, double theMargin);
    /// <summary>
    /// Adjust view parameters to fit the displayed scene, respecting height / width ratio
    /// according to the custom bounding box given.
    /// Throws program error exception if margin coefficient is < 0 or >= 1.
    /// Updates the view.
    /// </summary>
    /// <param name="in]">
    /// theBox  the custom bounding box to fit.
    /// </param>
    /// <param name="in]">
    /// theMargin  the margin coefficient for view borders.
    /// </param>
    /// <param name="in]">
    /// theToUpdate  flag to perform view update.
    /// </param>
    void FitAll(Macad::Occt::Bnd_Box^ theBox);
    /// <summary>
    /// Adjusts the viewing volume so as not to clip the displayed objects by front and back
    /// and back clipping planes. Also sets depth value automatically depending on the
    /// calculated Z size and Aspect parameter.
    /// NOTE than the original XY size of the view is NOT modified .
    /// </summary>
    void DepthFitAll(double Aspect, double Margin);
    /// <summary>
    /// Adjusts the viewing volume so as not to clip the displayed objects by front and back
    /// and back clipping planes. Also sets depth value automatically depending on the
    /// calculated Z size and Aspect parameter.
    /// NOTE than the original XY size of the view is NOT modified .
    /// </summary>
    void DepthFitAll(double Aspect);
    /// <summary>
    /// Adjusts the viewing volume so as not to clip the displayed objects by front and back
    /// and back clipping planes. Also sets depth value automatically depending on the
    /// calculated Z size and Aspect parameter.
    /// NOTE than the original XY size of the view is NOT modified .
    /// </summary>
    void DepthFitAll();
    /// <summary>
    /// Centers the defined projection window so that it occupies
    /// the maximum space while respecting the initial
    /// height/width ratio.
    /// NOTE than the original Z size of the view is NOT modified .
    /// </summary>
    void FitAll(double theMinXv, double theMinYv, double theMaxXv, double theMaxYv);
    /// <summary>
    /// Centers the defined PIXEL window so that it occupies
    /// the maximum space while respecting the initial height/width ratio.
    /// NOTE than the original Z size of the view is NOT modified.
    /// </summary>
    /// <param name="in]">
    /// theMinXp  pixel coordinates of minimal corner on x screen axis.
    /// </param>
    /// <param name="in]">
    /// theMinYp  pixel coordinates of minimal corner on y screen axis.
    /// </param>
    /// <param name="in]">
    /// theMaxXp  pixel coordinates of maximal corner on x screen axis.
    /// </param>
    /// <param name="in]">
    /// theMaxYp  pixel coordinates of maximal corner on y screen axis.
    /// </param>
    void WindowFit(int theMinXp, int theMinYp, int theMaxXp, int theMaxYp);
    /// <summary>
    /// Saves the current view mapping. This will be the
    /// state returned from ResetViewmapping.
    /// </summary>
    void SetViewMappingDefault();
    /// <summary>
    /// Resets the centering of the view.
    /// Updates the view
    /// </summary>
    void ResetViewMapping();
    /// <summary>
    /// Resets the centering and the orientation of the view.
    /// </summary>
    void Reset(bool theToUpdate);
    /// <summary>
    /// Resets the centering and the orientation of the view.
    /// </summary>
    void Reset();
    /// <summary>
    /// Converts the PIXEL value
    /// to a value in the projection plane.
    /// </summary>
    double Convert(int Vp);
    /// <summary>
    /// Converts the point PIXEL into a point projected
    /// in the reference frame of the projection plane.
    /// </summary>
    void Convert(int Xp, int Yp, double% Xv, double% Yv);
    /// <summary>
    /// Converts tha value of the projection plane into
    /// a PIXEL value.
    /// </summary>
    int Convert(double Vv);
    /// <summary>
    /// Converts the point defined in the reference frame
    /// of the projection plane into a point PIXEL.
    /// </summary>
    void Convert(double Xv, double Yv, int% Xp, int% Yp);
    /// <summary>
    /// Converts the projected point into a point
    /// in the reference frame of the view corresponding
    /// to the intersection with the projection plane
    /// of the eye/view point vector.
    /// </summary>
    void Convert(int Xp, int Yp, double% X, double% Y, double% Z);
    /// <summary>
    /// Converts the projected point into a point
    /// in the reference frame of the view corresponding
    /// to the intersection with the projection plane
    /// of the eye/view point vector and returns the
    /// projection ray for further computations.
    /// </summary>
    void ConvertWithProj(int Xp, int Yp, double% X, double% Y, double% Z, double% Vx, double% Vy, double% Vz);
    /// <summary>
    /// Converts the projected point into the nearest grid point
    /// in the reference frame of the view corresponding
    /// to the intersection with the projection plane
    /// of the eye/view point vector and display the grid marker.
    /// Warning: When the grid is not active the result is identical to the above Convert() method.
    /// How to use:
    /// 1) Enable the grid echo display
    /// myViewer->SetGridEcho(Standard_True);
    /// 2) When application receive a move event:
    /// 2.1) Check if any object is detected
    /// if( myInteractiveContext->MoveTo(x,y) == AIS_SOD_Nothing ) {
    /// 2.2) Check if the grid is active
    /// if( myViewer->Grid()->IsActive() ) {
    /// 2.3) Display the grid echo and gets the grid point
    /// myView->ConvertToGrid(x,y,X,Y,Z);
    /// myView->Viewer()->ShowGridEcho (myView, Graphic3d_Vertex (X,Y,Z));
    /// myView->RedrawImmediate();
    /// 2.4) Else this is the standard case
    /// } else myView->Convert(x,y,X,Y,Z);
    /// </summary>
    void ConvertToGrid(int Xp, int Yp, double% Xg, double% Yg, double% Zg);
    /// <summary>
    /// Converts the point into the nearest grid point
    /// and display the grid marker.
    /// </summary>
    void ConvertToGrid(double X, double Y, double Z, double% Xg, double% Yg, double% Zg);
    /// <summary>
    /// Projects the point defined in the reference frame of
    /// the view into the projected point in the associated window.
    /// </summary>
    void Convert(double X, double Y, double Z, int% Xp, int% Yp);
    /// <summary>
    /// Converts the point defined in the user space of
    /// the view to the projection plane at the depth
    /// relative to theZ.
    /// </summary>
    void Project(double theX, double theY, double theZ, double% theXp, double% theYp);
    /// <summary>
    /// Converts the point defined in the user space of
    /// the view to the projection plane at the depth
    /// relative to theZ.
    /// </summary>
    void Project(double theX, double theY, double theZ, double% theXp, double% theYp, double% theZp);
    /// <summary>
    /// Returns the Background color values of the view
    /// depending of the color Type.
    /// </summary>
    void BackgroundColor(Macad::Occt::Quantity_TypeOfColor Type, double% V1, double% V2, double% V3);
    /// <summary>
    /// Returns the Background color object of the view.
    /// </summary>
    Macad::Occt::Quantity_Color^ BackgroundColor();
    /// <summary>
    /// Returns the gradient background colors of the view.
    /// </summary>
    void GradientBackgroundColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2);
    /// <summary>
    /// Returns the gradient background of the view.
    /// </summary>
    Macad::Occt::Aspect_GradientBackground^ GradientBackground();
    /// <summary>
    /// Returns the current value of the zoom expressed with
    /// respect to SetViewMappingDefault().
    /// </summary>
    double Scale();
    /// <summary>
    /// Returns the current values of the anisotropic (axial) scale factors.
    /// </summary>
    void AxialScale(double% Sx, double% Sy, double% Sz);
    /// <summary>
    /// Returns the height and width of the view.
    /// </summary>
    void Size(double% Width, double% Height);
    /// <summary>
    /// Returns the Depth of the view .
    /// </summary>
    double ZSize();
    /// <summary>
    /// Returns the position of the eye.
    /// </summary>
    void Eye(double% X, double% Y, double% Z);
    /// <summary>
    /// Returns the position of point which emanating the projections.
    /// </summary>
    void FocalReferencePoint(double% X, double% Y, double% Z);
    /// <summary>
    /// Returns the coordinate of the point (Xpix,Ypix)
    /// in the view (XP,YP,ZP), and the projection vector of the
    /// view passing by the point (for PerspectiveView).
    /// </summary>
    void ProjReferenceAxe(int Xpix, int Ypix, double% XP, double% YP, double% ZP, double% VX, double% VY, double% VZ);
    /// <summary>
    /// Returns the Distance between the Eye and View Point.
    /// </summary>
    double Depth();
    /// <summary>
    /// Returns the projection vector.
    /// </summary>
    void Proj(double% Vx, double% Vy, double% Vz);
    /// <summary>
    /// Returns the position of the view point.
    /// </summary>
    void At(double% X, double% Y, double% Z);
    /// <summary>
    /// Returns the vector giving the position of the high point.
    /// </summary>
    void Up(double% Vx, double% Vy, double% Vz);
    /// <summary>
    /// Returns in RADIANS the orientation of the view around
    /// the visual axis measured from the Y axis of the screen.
    /// </summary>
    double Twist();
    /// <summary>
    /// Returns the current shading model; Graphic3d_TypeOfShadingModel_Phong by default.
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfShadingModel ShadingModel();
    /// <summary>
    /// Defines the shading model for the visualization.
    /// </summary>
    void SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theShadingModel);
    Macad::Occt::Graphic3d_TextureEnv^ TextureEnv();
    /// <summary>
    /// Returns the current visualisation mode.
    /// </summary>
    Macad::Occt::V3d_TypeOfVisualization Visualization();
    /// <summary>
    /// Returns a list of active lights.
    /// </summary>
    Macad::Occt::V3d_ListOfLight^ ActiveLights();
    /* Method skipped due to unknown mapping: Iterator ActiveLightIterator() */
    /// <summary>
    /// Returns the MAX number of light associated to the view.
    /// </summary>
    int LightLimit();
    /// <summary>
    /// Returns the viewer in which the view has been created.
    /// </summary>
    Macad::Occt::V3d_Viewer^ Viewer();
    /// <summary>
    /// Returns True if MyView is associated with a window .
    /// </summary>
    bool IfWindow();
    /// <summary>
    /// Returns the Aspect Window associated with the view.
    /// </summary>
    Macad::Occt::Aspect_Window^ Window();
    /// <summary>
    /// Returns the Type of the View
    /// </summary>
    Macad::Occt::V3d_TypeOfView Type();
    /// <summary>
    /// Translates the center of the view along "x" and "y" axes of
    /// view projection. Can be used to perform interactive panning operation.
    /// In that case the DXp, DXp parameters specify panning relative to the
    /// point where the operation is started.
    /// </summary>
    /// <param name="in]">
    /// theDXp  the relative panning on "x" axis of view projection, in pixels.
    /// </param>
    /// <param name="in]">
    /// theDYp  the relative panning on "y" axis of view projection, in pixels.
    /// </param>
    /// <param name="in]">
    /// theZoomFactor  the zooming factor.
    /// </param>
    /// <param name="in]">
    /// theToStart  pass TRUE when starting panning to remember view
    /// state prior to panning for relative arguments. Passing 0 for relative
    /// panning parameter should return view panning to initial state.
    /// Performs update of view.
    /// </param>
    void Pan(int theDXp, int theDYp, double theZoomFactor, bool theToStart);
    /// <summary>
    /// Translates the center of the view along "x" and "y" axes of
    /// view projection. Can be used to perform interactive panning operation.
    /// In that case the DXp, DXp parameters specify panning relative to the
    /// point where the operation is started.
    /// </summary>
    /// <param name="in]">
    /// theDXp  the relative panning on "x" axis of view projection, in pixels.
    /// </param>
    /// <param name="in]">
    /// theDYp  the relative panning on "y" axis of view projection, in pixels.
    /// </param>
    /// <param name="in]">
    /// theZoomFactor  the zooming factor.
    /// </param>
    /// <param name="in]">
    /// theToStart  pass TRUE when starting panning to remember view
    /// state prior to panning for relative arguments. Passing 0 for relative
    /// panning parameter should return view panning to initial state.
    /// Performs update of view.
    /// </param>
    void Pan(int theDXp, int theDYp, double theZoomFactor);
    /// <summary>
    /// Translates the center of the view along "x" and "y" axes of
    /// view projection. Can be used to perform interactive panning operation.
    /// In that case the DXp, DXp parameters specify panning relative to the
    /// point where the operation is started.
    /// </summary>
    /// <param name="in]">
    /// theDXp  the relative panning on "x" axis of view projection, in pixels.
    /// </param>
    /// <param name="in]">
    /// theDYp  the relative panning on "y" axis of view projection, in pixels.
    /// </param>
    /// <param name="in]">
    /// theZoomFactor  the zooming factor.
    /// </param>
    /// <param name="in]">
    /// theToStart  pass TRUE when starting panning to remember view
    /// state prior to panning for relative arguments. Passing 0 for relative
    /// panning parameter should return view panning to initial state.
    /// Performs update of view.
    /// </param>
    void Pan(int theDXp, int theDYp);
    /// <summary>
    /// Zoom the view according to a zoom factor computed
    /// from the distance between the 2 mouse position.
    /// </summary>
    /// <param name="in]">
    /// theXp1  the x coordinate of first mouse position, in pixels.
    /// </param>
    /// <param name="in]">
    /// theYp1  the y coordinate of first mouse position, in pixels.
    /// </param>
    /// <param name="in]">
    /// theXp2  the x coordinate of second mouse position, in pixels.
    /// </param>
    /// <param name="in]">
    /// theYp2  the y coordinate of second mouse position, in pixels.
    /// </param>
    void Zoom(int theXp1, int theYp1, int theXp2, int theYp2);
    /// <summary>
    /// Defines starting point for ZoomAtPoint view operation.
    /// </summary>
    /// <param name="in]">
    /// theXp  the x mouse coordinate, in pixels.
    /// </param>
    /// <param name="in]">
    /// theYp  the y mouse coordinate, in pixels.
    /// </param>
    void StartZoomAtPoint(int theXp, int theYp);
    /// <summary>
    /// Zooms the model at a pixel defined by the method StartZoomAtPoint().
    /// </summary>
    void ZoomAtPoint(int theMouseStartX, int theMouseStartY, int theMouseEndX, int theMouseEndY);
    /// <summary>
    /// Performs  anisotropic scaling  of  <me>  view  along  the  given  <Axis>.
    /// The  scale  factor  is  calculated on a basis of
    /// the mouse pointer displacement <Dx,Dy>.
    /// The  calculated  scale  factor  is  then  passed  to  SetAxialScale(Sx,  Sy,  Sz)  method.
    /// </summary>
    void AxialScale(int Dx, int Dy, Macad::Occt::V3d_TypeOfAxe Axis);
    /// <summary>
    /// Begin the rotation of the view around the screen axis
    /// according to the mouse position <X,Y>.
    /// Warning: Enable rotation around the Z screen axis when <zRotationThreshold>
    /// factor is > 0 soon the distance from the start point and the center
    /// of the view is > (medium viewSize * <zRotationThreshold> ).
    /// Generally a value of 0.4 is usable to rotate around XY screen axis
    /// inside the circular threshold area and to rotate around Z screen axis
    /// outside this area.
    /// </summary>
    void StartRotation(int X, int Y, double zRotationThreshold);
    /// <summary>
    /// Begin the rotation of the view around the screen axis
    /// according to the mouse position <X,Y>.
    /// Warning: Enable rotation around the Z screen axis when <zRotationThreshold>
    /// factor is > 0 soon the distance from the start point and the center
    /// of the view is > (medium viewSize * <zRotationThreshold> ).
    /// Generally a value of 0.4 is usable to rotate around XY screen axis
    /// inside the circular threshold area and to rotate around Z screen axis
    /// outside this area.
    /// </summary>
    void StartRotation(int X, int Y);
    /// <summary>
    /// Continues the rotation of the view
    /// with an angle computed from the last and new mouse position <X,Y>.
    /// </summary>
    void Rotation(int X, int Y);
    /// <summary>
    /// Change View Plane Distance for Perspective Views
    /// Warning! raises TypeMismatch from Standard if the view
    /// is not a perspective view.
    /// </summary>
    void SetFocale(double Focale);
    /// <summary>
    /// Returns the View Plane Distance for Perspective Views
    /// </summary>
    double Focale();
    /// <summary>
    /// Returns the associated Graphic3d view.
    /// </summary>
    Macad::Occt::Graphic3d_CView^ View();
    /// <summary>
    /// Switches computed HLR mode in the view.
    /// </summary>
    void SetComputedMode(bool theMode);
    /// <summary>
    /// Returns the computed HLR mode state.
    /// </summary>
    bool ComputedMode();
    /// <summary>
    /// idem than WindowFit
    /// </summary>
    void WindowFitAll(int Xmin, int Ymin, int Xmax, int Ymax);
    /// <summary>
    /// Transform camera eye, center and scale to fit in the passed bounding box specified in WCS.
    /// </summary>
    /// <param name="in]">
    /// theCamera  the camera
    /// </param>
    /// <param name="in]">
    /// theBox     the bounding box
    /// </param>
    /// <param name="in]">
    /// theMargin  the margin coefficient for view borders
    /// </param>
    /// <param name="in]">
    /// theResolution  the minimum size of projection of bounding box in Xv or Yv direction
    /// when it considered to be a thin plane or point (without a volume);
    /// in this case only the center of camera is adjusted
    /// </param>
    /// <param name="in]">
    /// theToEnlargeIfLine  when TRUE - in cases when the whole bounding box projected into
    /// thin line going along Z-axis of screen,
    /// the view plane is enlarged such thatwe see the whole line on
    /// rotation, otherwise only the center of camera is adjusted.
    /// </param>
    /// <returns>
    /// TRUE if the fit all operation can be done
    /// </returns>
    bool FitMinMax(Macad::Occt::Graphic3d_Camera^ theCamera, Macad::Occt::Bnd_Box^ theBox, double theMargin, double theResolution, bool theToEnlargeIfLine);
    /// <summary>
    /// Transform camera eye, center and scale to fit in the passed bounding box specified in WCS.
    /// </summary>
    /// <param name="in]">
    /// theCamera  the camera
    /// </param>
    /// <param name="in]">
    /// theBox     the bounding box
    /// </param>
    /// <param name="in]">
    /// theMargin  the margin coefficient for view borders
    /// </param>
    /// <param name="in]">
    /// theResolution  the minimum size of projection of bounding box in Xv or Yv direction
    /// when it considered to be a thin plane or point (without a volume);
    /// in this case only the center of camera is adjusted
    /// </param>
    /// <param name="in]">
    /// theToEnlargeIfLine  when TRUE - in cases when the whole bounding box projected into
    /// thin line going along Z-axis of screen,
    /// the view plane is enlarged such thatwe see the whole line on
    /// rotation, otherwise only the center of camera is adjusted.
    /// </param>
    /// <returns>
    /// TRUE if the fit all operation can be done
    /// </returns>
    bool FitMinMax(Macad::Occt::Graphic3d_Camera^ theCamera, Macad::Occt::Bnd_Box^ theBox, double theMargin, double theResolution);
    /// <summary>
    /// Transform camera eye, center and scale to fit in the passed bounding box specified in WCS.
    /// </summary>
    /// <param name="in]">
    /// theCamera  the camera
    /// </param>
    /// <param name="in]">
    /// theBox     the bounding box
    /// </param>
    /// <param name="in]">
    /// theMargin  the margin coefficient for view borders
    /// </param>
    /// <param name="in]">
    /// theResolution  the minimum size of projection of bounding box in Xv or Yv direction
    /// when it considered to be a thin plane or point (without a volume);
    /// in this case only the center of camera is adjusted
    /// </param>
    /// <param name="in]">
    /// theToEnlargeIfLine  when TRUE - in cases when the whole bounding box projected into
    /// thin line going along Z-axis of screen,
    /// the view plane is enlarged such thatwe see the whole line on
    /// rotation, otherwise only the center of camera is adjusted.
    /// </param>
    /// <returns>
    /// TRUE if the fit all operation can be done
    /// </returns>
    bool FitMinMax(Macad::Occt::Graphic3d_Camera^ theCamera, Macad::Occt::Bnd_Box^ theBox, double theMargin);
    /// <summary>
    /// Defines or Updates the definition of the
    /// grid in <me>
    /// </summary>
    void SetGrid(Macad::Occt::Ax3 aPlane, Macad::Occt::Aspect_Grid^ aGrid);
    /// <summary>
    /// Defines or Updates the activity of the
    /// grid in <me>
    /// </summary>
    void SetGridActivity(bool aFlag);
    /// <summary>
    /// Dumps the full contents of the View into the image file. This is an alias for ToPixMap() with
    /// Image_AlienPixMap.
    /// </summary>
    /// <param name="theFile">
    /// destination image file (image format is determined by file extension like .png,
    /// .bmp, .jpg)
    /// </param>
    /// <param name="theBufferType">
    /// buffer to dump
    /// </param>
    /// <returns>
    /// FALSE when the dump has failed
    /// </returns>
    bool Dump(System::String^ theFile, Macad::Occt::Graphic3d_BufferType theBufferType);
    /// <summary>
    /// Dumps the full contents of the View into the image file. This is an alias for ToPixMap() with
    /// Image_AlienPixMap.
    /// </summary>
    /// <param name="theFile">
    /// destination image file (image format is determined by file extension like .png,
    /// .bmp, .jpg)
    /// </param>
    /// <param name="theBufferType">
    /// buffer to dump
    /// </param>
    /// <returns>
    /// FALSE when the dump has failed
    /// </returns>
    bool Dump(System::String^ theFile);
    /// <summary>
    /// Dumps the full contents of the view to a pixmap with specified parameters.
    /// Internally this method calls Redraw() with an offscreen render buffer of requested target size
    /// (theWidth x theHeight), so that there is no need resizing a window control for making a dump
    /// of different size.
    /// </summary>
    bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::V3d_ImageDumpOptions^ theParams);
    /// <summary>
    /// Dumps the full contents of the view to a pixmap.
    /// Internally this method calls Redraw() with an offscreen render buffer of requested target size
    /// (theWidth x theHeight), so that there is no need resizing a window control for making a dump
    /// of different size.
    /// </summary>
    /// <param name="theImage">
    ///          target image, will be re-allocated to match theWidth x theHeight
    /// </param>
    /// <param name="theWidth">
    ///          target image width
    /// </param>
    /// <param name="theHeight">
    ///         target image height
    /// </param>
    /// <param name="theBufferType">
    ///     type of the view buffer to dump (color / depth)
    /// </param>
    /// <param name="theToAdjustAspect">
    /// when true, active view aspect ratio will be overridden by (theWidth /
    /// theHeight)
    /// </param>
    /// <param name="theStereoOptions">
    ///  how to dump stereographic camera
    /// </param>
    bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, int theWidth, int theHeight, Macad::Occt::Graphic3d_BufferType theBufferType, bool theToAdjustAspect, int theTargetZLayerId, int theIsSingleLayer, Macad::Occt::V3d_StereoDumpOptions theStereoOptions, System::String^ theLightName);
    /// <summary>
    /// Dumps the full contents of the view to a pixmap.
    /// Internally this method calls Redraw() with an offscreen render buffer of requested target size
    /// (theWidth x theHeight), so that there is no need resizing a window control for making a dump
    /// of different size.
    /// </summary>
    /// <param name="theImage">
    ///          target image, will be re-allocated to match theWidth x theHeight
    /// </param>
    /// <param name="theWidth">
    ///          target image width
    /// </param>
    /// <param name="theHeight">
    ///         target image height
    /// </param>
    /// <param name="theBufferType">
    ///     type of the view buffer to dump (color / depth)
    /// </param>
    /// <param name="theToAdjustAspect">
    /// when true, active view aspect ratio will be overridden by (theWidth /
    /// theHeight)
    /// </param>
    /// <param name="theStereoOptions">
    ///  how to dump stereographic camera
    /// </param>
    bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, int theWidth, int theHeight, Macad::Occt::Graphic3d_BufferType theBufferType, bool theToAdjustAspect, int theTargetZLayerId, int theIsSingleLayer, Macad::Occt::V3d_StereoDumpOptions theStereoOptions);
    /// <summary>
    /// Dumps the full contents of the view to a pixmap.
    /// Internally this method calls Redraw() with an offscreen render buffer of requested target size
    /// (theWidth x theHeight), so that there is no need resizing a window control for making a dump
    /// of different size.
    /// </summary>
    /// <param name="theImage">
    ///          target image, will be re-allocated to match theWidth x theHeight
    /// </param>
    /// <param name="theWidth">
    ///          target image width
    /// </param>
    /// <param name="theHeight">
    ///         target image height
    /// </param>
    /// <param name="theBufferType">
    ///     type of the view buffer to dump (color / depth)
    /// </param>
    /// <param name="theToAdjustAspect">
    /// when true, active view aspect ratio will be overridden by (theWidth /
    /// theHeight)
    /// </param>
    /// <param name="theStereoOptions">
    ///  how to dump stereographic camera
    /// </param>
    bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, int theWidth, int theHeight, Macad::Occt::Graphic3d_BufferType theBufferType, bool theToAdjustAspect, int theTargetZLayerId, int theIsSingleLayer);
    /// <summary>
    /// Dumps the full contents of the view to a pixmap.
    /// Internally this method calls Redraw() with an offscreen render buffer of requested target size
    /// (theWidth x theHeight), so that there is no need resizing a window control for making a dump
    /// of different size.
    /// </summary>
    /// <param name="theImage">
    ///          target image, will be re-allocated to match theWidth x theHeight
    /// </param>
    /// <param name="theWidth">
    ///          target image width
    /// </param>
    /// <param name="theHeight">
    ///         target image height
    /// </param>
    /// <param name="theBufferType">
    ///     type of the view buffer to dump (color / depth)
    /// </param>
    /// <param name="theToAdjustAspect">
    /// when true, active view aspect ratio will be overridden by (theWidth /
    /// theHeight)
    /// </param>
    /// <param name="theStereoOptions">
    ///  how to dump stereographic camera
    /// </param>
    bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, int theWidth, int theHeight, Macad::Occt::Graphic3d_BufferType theBufferType, bool theToAdjustAspect, int theTargetZLayerId);
    /// <summary>
    /// Dumps the full contents of the view to a pixmap.
    /// Internally this method calls Redraw() with an offscreen render buffer of requested target size
    /// (theWidth x theHeight), so that there is no need resizing a window control for making a dump
    /// of different size.
    /// </summary>
    /// <param name="theImage">
    ///          target image, will be re-allocated to match theWidth x theHeight
    /// </param>
    /// <param name="theWidth">
    ///          target image width
    /// </param>
    /// <param name="theHeight">
    ///         target image height
    /// </param>
    /// <param name="theBufferType">
    ///     type of the view buffer to dump (color / depth)
    /// </param>
    /// <param name="theToAdjustAspect">
    /// when true, active view aspect ratio will be overridden by (theWidth /
    /// theHeight)
    /// </param>
    /// <param name="theStereoOptions">
    ///  how to dump stereographic camera
    /// </param>
    bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, int theWidth, int theHeight, Macad::Occt::Graphic3d_BufferType theBufferType, bool theToAdjustAspect);
    /// <summary>
    /// Dumps the full contents of the view to a pixmap.
    /// Internally this method calls Redraw() with an offscreen render buffer of requested target size
    /// (theWidth x theHeight), so that there is no need resizing a window control for making a dump
    /// of different size.
    /// </summary>
    /// <param name="theImage">
    ///          target image, will be re-allocated to match theWidth x theHeight
    /// </param>
    /// <param name="theWidth">
    ///          target image width
    /// </param>
    /// <param name="theHeight">
    ///         target image height
    /// </param>
    /// <param name="theBufferType">
    ///     type of the view buffer to dump (color / depth)
    /// </param>
    /// <param name="theToAdjustAspect">
    /// when true, active view aspect ratio will be overridden by (theWidth /
    /// theHeight)
    /// </param>
    /// <param name="theStereoOptions">
    ///  how to dump stereographic camera
    /// </param>
    bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, int theWidth, int theHeight, Macad::Occt::Graphic3d_BufferType theBufferType);
    /// <summary>
    /// Dumps the full contents of the view to a pixmap.
    /// Internally this method calls Redraw() with an offscreen render buffer of requested target size
    /// (theWidth x theHeight), so that there is no need resizing a window control for making a dump
    /// of different size.
    /// </summary>
    /// <param name="theImage">
    ///          target image, will be re-allocated to match theWidth x theHeight
    /// </param>
    /// <param name="theWidth">
    ///          target image width
    /// </param>
    /// <param name="theHeight">
    ///         target image height
    /// </param>
    /// <param name="theBufferType">
    ///     type of the view buffer to dump (color / depth)
    /// </param>
    /// <param name="theToAdjustAspect">
    /// when true, active view aspect ratio will be overridden by (theWidth /
    /// theHeight)
    /// </param>
    /// <param name="theStereoOptions">
    ///  how to dump stereographic camera
    /// </param>
    bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, int theWidth, int theHeight);
    /// <summary>
    /// Manages display of the back faces
    /// </summary>
    void SetBackFacingModel(Macad::Occt::Graphic3d_TypeOfBackfacingModel theModel);
    /// <summary>
    /// Manages display of the back faces
    /// </summary>
    void SetBackFacingModel();
    /// <summary>
    /// Returns current state of the back faces display; Graphic3d_TypeOfBackfacingModel_Auto by
    /// default, which means that backface culling is defined by each presentation.
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfBackfacingModel BackFacingModel();
    /// <summary>
    /// Adds clip plane to the view. The composition of clip planes truncates the
    /// rendering space to convex volume. Number of supported clip planes can be consulted
    /// by PlaneLimit method of associated Graphic3d_GraphicDriver.
    /// Please be aware that the planes which exceed the limit are ignored during rendering.
    /// </summary>
    /// <param name="in]">
    /// thePlane  the clip plane to be added to view.
    /// </param>
    void AddClipPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane);
    /// <summary>
    /// Removes clip plane from the view.
    /// </summary>
    /// <param name="in]">
    /// thePlane  the clip plane to be removed from view.
    /// </param>
    void RemoveClipPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane);
    /// <summary>
    /// Get clip planes.
    /// </summary>
    /// <returns>
    /// sequence clip planes that have been set for the view
    /// </returns>
    Macad::Occt::Graphic3d_SequenceOfHClipPlane^ ClipPlanes();
    /// <summary>
    /// Sets sequence of clip planes to the view. The planes that have been set
    /// before are removed from the view. The composition of clip planes
    /// truncates the rendering space to convex volume. Number of supported
    /// clip planes can be consulted by InquirePlaneLimit method of
    /// Graphic3d_GraphicDriver. Please be aware that the planes that
    /// exceed the limit are ignored during rendering.
    /// </summary>
    /// <param name="in]">
    /// thePlanes  the clip planes to set.
    /// </param>
    void SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes);
    /// <summary>
    /// Returns the MAX number of clipping planes associated to the view.
    /// </summary>
    int PlaneLimit();
    /// <summary>
    /// Change camera used by view.
    /// </summary>
    void SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera);
    /// <summary>
    /// Returns camera object of the view.
    /// </summary>
    /// <returns>
    ///  handle to camera object, or NULL if 3D view does not use
    /// the camera approach.
    /// </returns>
    Macad::Occt::Graphic3d_Camera^ Camera();
    /// <summary>
    /// Return default camera.
    /// </summary>
    Macad::Occt::Graphic3d_Camera^ DefaultCamera();
    /// <summary>
    /// Returns current rendering parameters and effect settings.
    /// By default it returns default parameters of current viewer.
    /// To define view-specific settings use method V3d_View::ChangeRenderingParams().
    /// </summary>
    /// @sa V3d_Viewer::DefaultRenderingParams()
    Macad::Occt::Graphic3d_RenderingParams^ RenderingParams();
    /// <summary>
    /// </summary>
    /// <returns>
    /// flag value of objects culling mechanism
    /// </returns>
    bool IsCullingEnabled();
    /// <summary>
    /// Turn on/off automatic culling of objects outside frustum (ON by default)
    /// </summary>
    void SetFrustumCulling(bool theMode);
    /* Method skipped due to unknown mapping: void DiagnosticInformation(TColStd_IndexedDataMapOfStringString theDict, Graphic3d_DiagnosticInfo theFlags, ) */
    /// <summary>
    /// Returns string with statistic performance info.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ StatisticInformation();
    /* Method skipped due to unknown mapping: void StatisticInformation(TColStd_IndexedDataMapOfStringString theDict, ) */
    /// <summary>
    /// Returns the Objects number and the gravity center of ALL viewable points in the view
    /// </summary>
    Macad::Occt::Pnt GravityPoint();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /// <summary>
    /// </summary>
    /// @name subvew management
    /// Return TRUE if this is a subview of another view.
    bool IsSubview();
    /// <summary>
    /// Return parent View or NULL if this is not a subview.
    /// </summary>
    Macad::Occt::V3d_View^ ParentView();
    /* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<V3d_View>> Subviews() */
    /// <summary>
    /// Pick subview from the given 2D point.
    /// </summary>
    Macad::Occt::V3d_View^ PickSubview(Macad::Occt::Graphic3d_Vec2i^ thePnt);
    /// <summary>
    /// Add subview to the list.
    /// </summary>
    void AddSubview(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Remove subview from the list.
    /// </summary>
    bool RemoveSubview(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// </summary>
    /// @name deprecated methods
    /// Returns True if One light more can be
    /// activated in this View.
    bool IfMoreLights();
    /// <summary>
    /// initializes an iteration on the active Lights.
    /// </summary>
    void InitActiveLights();
    /// <summary>
    /// returns true if there are more active Light(s) to return.
    /// </summary>
    bool MoreActiveLights();
    /// <summary>
    /// Go to the next active Light (if there is not, ActiveLight will raise an exception)
    /// </summary>
    void NextActiveLights();
    Macad::Occt::Graphic3d_CLight^ ActiveLight();
    static Macad::Occt::V3d_View^ CreateDowncasted(::V3d_View* instance);
}; // class V3d_View

//---------------------------------------------------------------------
//  Class  V3d
//---------------------------------------------------------------------
/// <summary>
/// This package contains the set of commands and services
/// of the 3D Viewer. It provides a set of high level commands
/// to control the views and viewing modes.
/// </summary>
public ref class V3d sealed
    : public Macad::Occt::BaseClass<::V3d>
{

#ifdef Include_V3d_h
public:
    Include_V3d_h
#endif

public:
    V3d(::V3d* nativeInstance)
        : Macad::Occt::BaseClass<::V3d>( nativeInstance, true )
    {}

    V3d(::V3d& nativeInstance)
        : Macad::Occt::BaseClass<::V3d>( &nativeInstance, false )
    {}

    property ::V3d* NativeInstance
    {
        ::V3d* get()
        {
            return static_cast<::V3d*>(_NativeInstance);
        }
    }

public:
    V3d();
    /// <summary>
    /// Determines the orientation vector corresponding to the predefined orientation type.
    /// </summary>
    static Macad::Occt::Dir GetProjAxis(Macad::Occt::V3d_TypeOfOrientation theOrientation);
    /// <summary>
    /// Compute the graphic structure of arrow.
    /// X0,Y0,Z0 : coordinate of the arrow.
    /// DX,DY,DZ : Direction of the arrow.
    /// Alpha    : Angle of arrow.
    /// Lng      : Length of arrow.
    /// </summary>
    static void ArrowOfRadius(Macad::Occt::Graphic3d_Group^ garrow, double X0, double Y0, double Z0, double DX, double DY, double DZ, double Alpha, double Lng);
    /// <summary>
    /// Compute the graphic structure of circle.
    /// X0,Y0,Z0 : Center of circle.
    /// VX,VY,VZ : Axis of circle.
    /// Radius   : Radius of circle.
    /// </summary>
    static void CircleInPlane(Macad::Occt::Graphic3d_Group^ gcircle, double X0, double Y0, double Z0, double VX, double VY, double VZ, double Radius);
    static void SwitchViewsinWindow(Macad::Occt::V3d_View^ aPreviousView, Macad::Occt::V3d_View^ aNextView);
    /// <summary>
    /// Returns the string name for a given orientation type.
    /// </summary>
    /// <param name="theType">
    /// orientation type
    /// </param>
    /// <returns>
    /// string identifier from the list Xpos, Ypos, Zpos and others
    /// </returns>
    static System::String^ TypeOfOrientationToString(Macad::Occt::V3d_TypeOfOrientation theType);
    /// <summary>
    /// Returns the orientation type from the given string identifier (using case-insensitive
    /// comparison).
    /// </summary>
    /// <param name="theTypeString">
    /// string identifier
    /// </param>
    /// <returns>
    /// orientation type or V3d_TypeOfOrientation if string identifier is invalid
    /// </returns>
    static Macad::Occt::V3d_TypeOfOrientation TypeOfOrientationFromString(System::String^ theTypeString);
    /// <summary>
    /// Determines the shape type from the given string identifier (using case-insensitive
    /// comparison).
    /// </summary>
    /// <param name="theTypeString">
    /// string identifier
    /// </param>
    /// <param name="theType">
    /// detected shape type
    /// </param>
    /// <returns>
    /// TRUE if string identifier is known
    /// </returns>
    static bool TypeOfOrientationFromString(System::String^ theTypeString, Macad::Occt::V3d_TypeOfOrientation% theType);
}; // class V3d

//---------------------------------------------------------------------
//  Class  V3d_AmbientLight
//---------------------------------------------------------------------
/// <summary>
/// Creation of an ambient light source in a viewer.
/// </summary>
public ref class V3d_AmbientLight sealed
    : public Macad::Occt::Graphic3d_CLight
{

#ifdef Include_V3d_AmbientLight_h
public:
    Include_V3d_AmbientLight_h
#endif

public:
    V3d_AmbientLight(::V3d_AmbientLight* nativeInstance)
        : Macad::Occt::Graphic3d_CLight( nativeInstance )
    {}

    V3d_AmbientLight(::V3d_AmbientLight& nativeInstance)
        : Macad::Occt::Graphic3d_CLight( nativeInstance )
    {}

    property ::V3d_AmbientLight* NativeInstance
    {
        ::V3d_AmbientLight* get()
        {
            return static_cast<::V3d_AmbientLight*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an ambient light source in the viewer.
    /// The default Color of this light source is WHITE.
    /// </summary>
    V3d_AmbientLight(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Constructs an ambient light source in the viewer.
    /// The default Color of this light source is WHITE.
    /// </summary>
    V3d_AmbientLight();
    static Macad::Occt::V3d_AmbientLight^ CreateDowncasted(::V3d_AmbientLight* instance);
}; // class V3d_AmbientLight

//---------------------------------------------------------------------
//  Class  V3d_BadValue
//---------------------------------------------------------------------
public ref class V3d_BadValue sealed
    : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_V3d_BadValue_h
public:
    Include_V3d_BadValue_h
#endif

public:
    V3d_BadValue(::V3d_BadValue* nativeInstance)
        : Macad::Occt::Standard_OutOfRange( nativeInstance )
    {}

    V3d_BadValue(::V3d_BadValue& nativeInstance)
        : Macad::Occt::Standard_OutOfRange( nativeInstance )
    {}

    property ::V3d_BadValue* NativeInstance
    {
        ::V3d_BadValue* get()
        {
            return static_cast<::V3d_BadValue*>(_NativeInstance);
        }
    }

public:
    V3d_BadValue();
    V3d_BadValue(System::String^ theMessage);
    V3d_BadValue(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::V3d_BadValue^ NewInstance(System::String^ theMessage);
    static Macad::Occt::V3d_BadValue^ NewInstance();
    static Macad::Occt::V3d_BadValue^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::V3d_BadValue^ CreateDowncasted(::V3d_BadValue* instance);
}; // class V3d_BadValue

//---------------------------------------------------------------------
//  Class  V3d_Viewer
//---------------------------------------------------------------------
/// <summary>
/// Defines services on Viewer type objects.
/// The methods of this class allow editing and
/// interrogation of the parameters linked to the viewer
/// its friend classes (View,light,plane).
/// </summary>
public ref class V3d_Viewer sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_V3d_Viewer_h
public:
    Include_V3d_Viewer_h
#endif

public:
    V3d_Viewer(::V3d_Viewer* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    V3d_Viewer(::V3d_Viewer& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::V3d_Viewer* NativeInstance
    {
        ::V3d_Viewer* get()
        {
            return static_cast<::V3d_Viewer*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Create a Viewer with the given graphic driver and with default parameters:
    /// - View orientation: V3d_XposYnegZpos
    /// - View background: Quantity_NOC_GRAY30
    /// - Shading model: V3d_GOURAUD
    /// </summary>
    V3d_Viewer(Macad::Occt::Graphic3d_GraphicDriver^ theDriver);
    /// <summary>
    /// Returns True if One View more can be defined in this Viewer.
    /// </summary>
    bool IfMoreViews();
    /// <summary>
    /// Creates a view in the viewer according to its default parameters.
    /// </summary>
    Macad::Occt::V3d_View^ CreateView();
    /// <summary>
    /// Activates all of the views of a viewer attached to a window.
    /// </summary>
    void SetViewOn();
    /// <summary>
    /// Activates a particular view in the Viewer.
    /// Must be call if the Window attached to the view has been Deiconified.
    /// </summary>
    void SetViewOn(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Deactivates all the views of a Viewer
    /// attached to a window.
    /// </summary>
    void SetViewOff();
    /// <summary>
    /// Deactivates a particular view in the Viewer.
    /// Must be call if the Window attached to the view
    /// has been Iconified .
    /// </summary>
    void SetViewOff(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Deprecated, Redraw() should be used instead.
    /// </summary>
    void Update();
    /// <summary>
    /// Redraws all the views of the Viewer even if no
    /// modification has taken place. Must be called if
    /// all the views of the Viewer are exposed, as for
    /// example in a global DeIconification.
    /// </summary>
    void Redraw();
    /// <summary>
    /// Updates layer of immediate presentations.
    /// </summary>
    void RedrawImmediate();
    /// <summary>
    /// Invalidates viewer content but does not redraw it.
    /// </summary>
    void Invalidate();
    /// <summary>
    /// Suppresses the Viewer.
    /// </summary>
    void Remove();
    /// <summary>
    /// Return Graphic Driver instance.
    /// </summary>
    Macad::Occt::Graphic3d_GraphicDriver^ Driver();
    /// <summary>
    /// Returns the structure manager associated to this viewer.
    /// </summary>
    Macad::Occt::Graphic3d_StructureManager^ StructureManager();
    /// <summary>
    /// Return default Rendering Parameters.
    /// By default these parameters are set in a new V3d_View.
    /// </summary>
    Macad::Occt::Graphic3d_RenderingParams^ DefaultRenderingParams();
    /// <summary>
    /// Set default Rendering Parameters.
    /// </summary>
    void SetDefaultRenderingParams(Macad::Occt::Graphic3d_RenderingParams^ theParams);
    /// <summary>
    /// Defines the default background colour of views
    /// attached to the viewer by supplying the color object
    /// </summary>
    void SetDefaultBackgroundColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Returns the gradient background of the view.
    /// </summary>
    Macad::Occt::Aspect_GradientBackground^ GetGradientBackground();
    /// <summary>
    /// Defines the default gradient background colours of views
    /// attached to the viewer by supplying the colour objects
    /// </summary>
    void SetDefaultBgGradientColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2, Macad::Occt::Aspect_GradientFillMethod theFillStyle);
    /// <summary>
    /// Defines the default gradient background colours of views
    /// attached to the viewer by supplying the colour objects
    /// </summary>
    void SetDefaultBgGradientColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2);
    /// <summary>
    /// Returns the default size of the view.
    /// </summary>
    double DefaultViewSize();
    /// <summary>
    /// Gives a default size for the creation of views of the viewer.
    /// </summary>
    void SetDefaultViewSize(double theSize);
    /// <summary>
    /// Returns the default Projection.
    /// </summary>
    Macad::Occt::V3d_TypeOfOrientation DefaultViewProj();
    /// <summary>
    /// Sets the default projection for creating views in the viewer.
    /// </summary>
    void SetDefaultViewProj(Macad::Occt::V3d_TypeOfOrientation theOrientation);
    /// <summary>
    /// Returns the default type of Visualization.
    /// </summary>
    Macad::Occt::V3d_TypeOfVisualization DefaultVisualization();
    /// <summary>
    /// Gives the default visualization mode.
    /// </summary>
    void SetDefaultVisualization(Macad::Occt::V3d_TypeOfVisualization theType);
    /// <summary>
    /// Returns the default type of Shading; Graphic3d_TypeOfShadingModel_Phong by default.
    /// </summary>
    Macad::Occt::Graphic3d_TypeOfShadingModel DefaultShadingModel();
    /// <summary>
    /// Gives the default type of SHADING.
    /// </summary>
    void SetDefaultShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theType);
    /// <summary>
    /// Returns the default type of View (orthographic or perspective projection) to be returned by
    /// CreateView() method.
    /// </summary>
    Macad::Occt::V3d_TypeOfView DefaultTypeOfView();
    /// <summary>
    /// Set the default type of View (orthographic or perspective projection) to be returned by
    /// CreateView() method.
    /// </summary>
    void SetDefaultTypeOfView(Macad::Occt::V3d_TypeOfView theType);
    /// <summary>
    /// Returns the default background colour object.
    /// </summary>
    Macad::Occt::Quantity_Color^ DefaultBackgroundColor();
    /// <summary>
    /// Returns the gradient background colour objects of the view.
    /// </summary>
    void DefaultBgGradientColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2);
    /// <summary>
    /// Return all Z layer ids in sequence ordered by overlay level from lowest layer to highest (
    /// foreground ). The first layer ID in sequence is the default layer that can't be removed.
    /// </summary>
    void GetAllZLayers(Macad::Occt::TColStd_SequenceOfInteger^ theLayerSeq);
    /// <summary>
    /// Add a new top-level Z layer to all managed views and get its ID as <theLayerId> value.
    /// The Z layers are controlled entirely by viewer, it is not possible to add a layer to a
    /// particular view. Custom layers will be inserted before Graphic3d_ZLayerId_Top (e.g. between
    /// Graphic3d_ZLayerId_Default and before Graphic3d_ZLayerId_Top).
    /// </summary>
    /// <param name="out]">
    /// theLayerId  id of created layer
    /// </param>
    /// <param name="in]">
    /// theSettings  new layer settings
    /// </param>
    /// <returns>
    /// FALSE if the layer can not be created
    /// </returns>
    bool AddZLayer(int% theLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings);
    /// <summary>
    /// Add a new top-level Z layer to all managed views and get its ID as <theLayerId> value.
    /// The Z layers are controlled entirely by viewer, it is not possible to add a layer to a
    /// particular view. Custom layers will be inserted before Graphic3d_ZLayerId_Top (e.g. between
    /// Graphic3d_ZLayerId_Default and before Graphic3d_ZLayerId_Top).
    /// </summary>
    /// <param name="out]">
    /// theLayerId  id of created layer
    /// </param>
    /// <param name="in]">
    /// theSettings  new layer settings
    /// </param>
    /// <returns>
    /// FALSE if the layer can not be created
    /// </returns>
    bool AddZLayer(int% theLayerId);
    /// <summary>
    /// Add a new top-level Z layer to all managed views and get its ID as <theLayerId> value.
    /// The Z layers are controlled entirely by viewer, it is not possible to add a layer to a
    /// particular view. Layer rendering order is defined by its position in list (altered by
    /// theLayerAfter) and IsImmediate() flag (all layers with IsImmediate() flag are drawn
    /// afterwards);
    /// </summary>
    /// <param name="out]">
    /// theNewLayerId  id of created layer; layer id is arbitrary and does not depend on
    /// layer position in the list
    /// </param>
    /// <param name="in]">
    /// theSettings     new layer settings
    /// </param>
    /// <param name="in]">
    /// theLayerAfter   id of layer to append new layer before
    /// </param>
    /// <returns>
    /// FALSE if the layer can not be created
    /// </returns>
    bool InsertLayerBefore(int% theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerAfter);
    /// <summary>
    /// Add a new top-level Z layer to all managed views and get its ID as <theLayerId> value.
    /// The Z layers are controlled entirely by viewer, it is not possible to add a layer to a
    /// particular view. Layer rendering order is defined by its position in list (altered by
    /// theLayerAfter) and IsImmediate() flag (all layers with IsImmediate() flag are drawn
    /// afterwards);
    /// </summary>
    /// <param name="out]">
    /// theNewLayerId  id of created layer; layer id is arbitrary and does not depend on
    /// layer position in the list
    /// </param>
    /// <param name="in]">
    /// theSettings     new layer settings
    /// </param>
    /// <param name="in]">
    /// theLayerBefore  id of layer to append new layer after
    /// </param>
    /// <returns>
    /// FALSE if the layer can not be created
    /// </returns>
    bool InsertLayerAfter(int% theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerBefore);
    /// <summary>
    /// Remove Z layer with ID <theLayerId>.
    /// Method returns Standard_False if the layer can not be removed or doesn't exists.
    /// By default, there are always default bottom-level layer that can't be removed.
    /// </summary>
    bool RemoveZLayer(int theLayerId);
    /// <summary>
    /// Returns the settings of a single Z layer.
    /// </summary>
    Macad::Occt::Graphic3d_ZLayerSettings^ ZLayerSettings(int theLayerId);
    /// <summary>
    /// Sets the settings for a single Z layer.
    /// </summary>
    void SetZLayerSettings(int theLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings);
    /// <summary>
    /// Return a list of active views.
    /// </summary>
    Macad::Occt::V3d_ListOfView^ ActiveViews();
    /* Method skipped due to unknown mapping: Iterator ActiveViewIterator() */
    /// <summary>
    /// returns true if there is only one active view.
    /// </summary>
    bool LastActiveView();
    /// <summary>
    /// Return a list of defined views.
    /// </summary>
    Macad::Occt::V3d_ListOfView^ DefinedViews();
    /* Method skipped due to unknown mapping: Iterator DefinedViewIterator() */
    /// <summary>
    /// </summary>
    /// @name lights management
    /// Defines default lights:
    /// positional-light 0.3 0. 0.
    /// directional-light V3d_XnegYposZpos
    /// directional-light V3d_XnegYneg
    /// ambient-light
    void SetDefaultLights();
    /// <summary>
    /// Activates MyLight in the viewer.
    /// </summary>
    void SetLightOn(Macad::Occt::Graphic3d_CLight^ theLight);
    /// <summary>
    /// Activates all the lights defined in this viewer.
    /// </summary>
    void SetLightOn();
    /// <summary>
    /// Deactivates MyLight in this viewer.
    /// </summary>
    void SetLightOff(Macad::Occt::Graphic3d_CLight^ theLight);
    /// <summary>
    /// Deactivate all the Lights defined in this viewer.
    /// </summary>
    void SetLightOff();
    /// <summary>
    /// Adds Light in Sequence Of Lights.
    /// </summary>
    void AddLight(Macad::Occt::Graphic3d_CLight^ theLight);
    /// <summary>
    /// Delete Light in Sequence Of Lights.
    /// </summary>
    void DelLight(Macad::Occt::Graphic3d_CLight^ theLight);
    /// <summary>
    /// Updates the lights of all the views of a viewer.
    /// </summary>
    void UpdateLights();
    bool IsGlobalLight(Macad::Occt::Graphic3d_CLight^ TheLight);
    /// <summary>
    /// Return a list of active lights.
    /// </summary>
    Macad::Occt::V3d_ListOfLight^ ActiveLights();
    /* Method skipped due to unknown mapping: Iterator ActiveLightIterator() */
    /// <summary>
    /// Return a list of defined lights.
    /// </summary>
    Macad::Occt::V3d_ListOfLight^ DefinedLights();
    /* Method skipped due to unknown mapping: Iterator DefinedLightIterator() */
    /// <summary>
    /// </summary>
    /// @name objects management
    /// Erase all Objects in All the views.
    void Erase();
    /// <summary>
    /// UnHighlight all Objects in All the views.
    /// </summary>
    void UnHighlight();
    /// <summary>
    /// returns true if the computed mode can be used.
    /// </summary>
    bool ComputedMode();
    /// <summary>
    /// Set if the computed mode can be used.
    /// </summary>
    void SetComputedMode(bool theMode);
    /// <summary>
    /// returns true if by default the computed mode must be used.
    /// </summary>
    bool DefaultComputedMode();
    /// <summary>
    /// Set if by default the computed mode must be used.
    /// </summary>
    void SetDefaultComputedMode(bool theMode);
    /// <summary>
    /// </summary>
    /// @name privileged plane management
    Macad::Occt::Ax3 PrivilegedPlane();
    void SetPrivilegedPlane(Macad::Occt::Ax3 thePlane);
    void DisplayPrivilegedPlane(bool theOnOff, double theSize);
    void DisplayPrivilegedPlane(bool theOnOff);
    /// <summary>
    /// </summary>
    /// @name grid management
    /// Activates the grid in all views of <me>.
    void ActivateGrid(Macad::Occt::Aspect_GridType aGridType, Macad::Occt::Aspect_GridDrawMode aGridDrawMode);
    /// <summary>
    /// Deactivates the grid in all views of <me>.
    /// </summary>
    void DeactivateGrid();
    /// <summary>
    /// Show/Don't show grid echo to the hit point.
    /// If TRUE,the grid echo will be shown at ConvertToGrid() time.
    /// </summary>
    void SetGridEcho(bool showGrid);
    /// <summary>
    /// Show/Don't show grid echo to the hit point.
    /// If TRUE,the grid echo will be shown at ConvertToGrid() time.
    /// </summary>
    void SetGridEcho();
    /// <summary>
    /// Show grid echo <aMarker> to the hit point.
    /// Warning: When the grid echo marker is not set,
    /// a default marker is build with the attributes:
    /// marker type : Aspect_TOM_STAR
    /// marker color : Quantity_NOC_GRAY90
    /// marker size : 3.0
    /// </summary>
    void SetGridEcho(Macad::Occt::Graphic3d_AspectMarker3d^ aMarker);
    /// <summary>
    /// Returns TRUE when grid echo must be displayed at hit point.
    /// </summary>
    bool GridEcho();
    /// <summary>
    /// Returns Standard_True if a grid is activated in <me>.
    /// </summary>
    bool IsGridActive();
    /// <summary>
    /// Returns the defined grid in <me>.
    /// </summary>
    Macad::Occt::Aspect_Grid^ Grid(bool theToCreate);
    /// <summary>
    /// Returns the defined grid in <me>.
    /// </summary>
    Macad::Occt::Aspect_Grid^ Grid();
    /// <summary>
    /// Returns the defined grid in <me>.
    /// </summary>
    Macad::Occt::Aspect_Grid^ Grid(Macad::Occt::Aspect_GridType theGridType, bool theToCreate);
    /// <summary>
    /// Returns the defined grid in <me>.
    /// </summary>
    Macad::Occt::Aspect_Grid^ Grid(Macad::Occt::Aspect_GridType theGridType);
    /// <summary>
    /// Returns the current grid type defined in <me>.
    /// </summary>
    Macad::Occt::Aspect_GridType GridType();
    /// <summary>
    /// Returns the current grid draw mode defined in <me>.
    /// </summary>
    Macad::Occt::Aspect_GridDrawMode GridDrawMode();
    /// <summary>
    /// Returns the definition of the rectangular grid.
    /// </summary>
    void RectangularGridValues(double% theXOrigin, double% theYOrigin, double% theXStep, double% theYStep, double% theRotationAngle);
    /// <summary>
    /// Sets the definition of the rectangular grid.
    /// <XOrigin>, <YOrigin> defines the origin of the grid.
    /// <XStep> defines the interval between 2 vertical lines.
    /// <YStep> defines the interval between 2 horizontal lines.
    /// <RotationAngle> defines the rotation angle of the grid.
    /// </summary>
    void SetRectangularGridValues(double XOrigin, double YOrigin, double XStep, double YStep, double RotationAngle);
    /// <summary>
    /// Returns the definition of the circular grid.
    /// </summary>
    void CircularGridValues(double% theXOrigin, double% theYOrigin, double% theRadiusStep, int% theDivisionNumber, double% theRotationAngle);
    /// <summary>
    /// Sets the definition of the circular grid.
    /// <XOrigin>, <YOrigin> defines the origin of the grid.
    /// <RadiusStep> defines the interval between 2 circles.
    /// <DivisionNumber> defines the section number of one half circle.
    /// <RotationAngle> defines the rotation angle of the grid.
    /// </summary>
    void SetCircularGridValues(double XOrigin, double YOrigin, double RadiusStep, int DivisionNumber, double RotationAngle);
    /// <summary>
    /// Returns the location and the size of the grid.
    /// </summary>
    void CircularGridGraphicValues(double% theRadius, double% theOffSet);
    /// <summary>
    /// Sets the location and the size of the grid.
    /// <XSize> defines the width of the grid.
    /// <YSize> defines the height of the grid.
    /// <OffSet> defines the displacement along the plane normal.
    /// </summary>
    void SetCircularGridGraphicValues(double Radius, double OffSet);
    /// <summary>
    /// Returns the location and the size of the grid.
    /// </summary>
    void RectangularGridGraphicValues(double% theXSize, double% theYSize, double% theOffSet);
    /// <summary>
    /// Sets the location and the size of the grid.
    /// <XSize> defines the width of the grid.
    /// <YSize> defines the height of the grid.
    /// <OffSet> defines the displacement along the plane normal.
    /// </summary>
    void SetRectangularGridGraphicValues(double XSize, double YSize, double OffSet);
    /// <summary>
    /// Display grid echo at requested point in the view.
    /// </summary>
    void ShowGridEcho(Macad::Occt::V3d_View^ theView, Macad::Occt::Graphic3d_Vertex^ thePoint);
    /// <summary>
    /// Temporarily hide grid echo.
    /// </summary>
    void HideGridEcho(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// </summary>
    /// @name deprecated methods
    /// Returns Standard_True if a grid is activated in <me>.
    bool IsActive();
    /// <summary>
    /// Initializes an internal iterator on the active views.
    /// </summary>
    void InitActiveViews();
    /// <summary>
    /// Returns true if there are more active view(s) to return.
    /// </summary>
    bool MoreActiveViews();
    /// <summary>
    /// Go to the next active view (if there is not, ActiveView will raise an exception)
    /// </summary>
    void NextActiveViews();
    Macad::Occt::V3d_View^ ActiveView();
    /// <summary>
    /// Initializes an internal iterator on the Defined views.
    /// </summary>
    void InitDefinedViews();
    /// <summary>
    /// returns true if there are more Defined view(s) to return.
    /// </summary>
    bool MoreDefinedViews();
    /// <summary>
    /// Go to the next Defined view (if there is not, DefinedView will raise an exception)
    /// </summary>
    void NextDefinedViews();
    Macad::Occt::V3d_View^ DefinedView();
    /// <summary>
    /// Initializes an internal iteratator on the active Lights.
    /// </summary>
    void InitActiveLights();
    /// <summary>
    /// returns true if there are more active Light(s) to return.
    /// </summary>
    bool MoreActiveLights();
    /// <summary>
    /// Go to the next active Light (if there is not, ActiveLight() will raise an exception)
    /// </summary>
    void NextActiveLights();
    Macad::Occt::Graphic3d_CLight^ ActiveLight();
    /// <summary>
    /// Initializes an internal iterattor on the Defined Lights.
    /// </summary>
    void InitDefinedLights();
    /// <summary>
    /// Returns true if there are more Defined Light(s) to return.
    /// </summary>
    bool MoreDefinedLights();
    /// <summary>
    /// Go to the next Defined Light (if there is not, DefinedLight() will raise an exception)
    /// </summary>
    void NextDefinedLights();
    Macad::Occt::Graphic3d_CLight^ DefinedLight();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::V3d_Viewer^ CreateDowncasted(::V3d_Viewer* instance);
}; // class V3d_Viewer

//---------------------------------------------------------------------
//  Class  V3d_CircularGrid
//---------------------------------------------------------------------
public ref class V3d_CircularGrid sealed
    : public Macad::Occt::Aspect_CircularGrid
{

#ifdef Include_V3d_CircularGrid_h
public:
    Include_V3d_CircularGrid_h
#endif

public:
    V3d_CircularGrid(::V3d_CircularGrid* nativeInstance)
        : Macad::Occt::Aspect_CircularGrid( nativeInstance )
    {}

    V3d_CircularGrid(::V3d_CircularGrid& nativeInstance)
        : Macad::Occt::Aspect_CircularGrid( nativeInstance )
    {}

    property ::V3d_CircularGrid* NativeInstance
    {
        ::V3d_CircularGrid* get()
        {
            return static_cast<::V3d_CircularGrid*>(_NativeInstance);
        }
    }

public:
    V3d_CircularGrid(Macad::Occt::V3d_Viewer^ aViewer, Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor);
    void SetColors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor);
    void Display();
    void Erase();
    bool IsDisplayed();
    void GraphicValues(double% Radius, double% OffSet);
    void SetGraphicValues(double Radius, double OffSet);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::V3d_CircularGrid^ CreateDowncasted(::V3d_CircularGrid* instance);
}; // class V3d_CircularGrid

//---------------------------------------------------------------------
//  Class  V3d_PositionLight
//---------------------------------------------------------------------
/// <summary>
/// Base class for Positional, Spot and Directional Light classes.
/// </summary>
public ref class V3d_PositionLight
    : public Macad::Occt::Graphic3d_CLight
{

#ifdef Include_V3d_PositionLight_h
public:
    Include_V3d_PositionLight_h
#endif

protected:
    V3d_PositionLight(InitMode init)
        : Macad::Occt::Graphic3d_CLight( init )
    {}

public:
    V3d_PositionLight(::V3d_PositionLight* nativeInstance)
        : Macad::Occt::Graphic3d_CLight( nativeInstance )
    {}

    V3d_PositionLight(::V3d_PositionLight& nativeInstance)
        : Macad::Occt::Graphic3d_CLight( nativeInstance )
    {}

    property ::V3d_PositionLight* NativeInstance
    {
        ::V3d_PositionLight* get()
        {
            return static_cast<::V3d_PositionLight*>(_NativeInstance);
        }
    }

public:
    static Macad::Occt::V3d_PositionLight^ CreateDowncasted(::V3d_PositionLight* instance);
}; // class V3d_PositionLight

//---------------------------------------------------------------------
//  Class  V3d_DirectionalLight
//---------------------------------------------------------------------
/// <summary>
/// Directional light source for a viewer.
/// </summary>
public ref class V3d_DirectionalLight sealed
    : public Macad::Occt::V3d_PositionLight
{

#ifdef Include_V3d_DirectionalLight_h
public:
    Include_V3d_DirectionalLight_h
#endif

public:
    V3d_DirectionalLight(::V3d_DirectionalLight* nativeInstance)
        : Macad::Occt::V3d_PositionLight( nativeInstance )
    {}

    V3d_DirectionalLight(::V3d_DirectionalLight& nativeInstance)
        : Macad::Occt::V3d_PositionLight( nativeInstance )
    {}

    property ::V3d_DirectionalLight* NativeInstance
    {
        ::V3d_DirectionalLight* get()
        {
            return static_cast<::V3d_DirectionalLight*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a directional light source in the viewer.
    /// </summary>
    V3d_DirectionalLight(Macad::Occt::V3d_TypeOfOrientation theDirection, Macad::Occt::Quantity_Color^ theColor, bool theIsHeadlight);
    /// <summary>
    /// Creates a directional light source in the viewer.
    /// </summary>
    V3d_DirectionalLight(Macad::Occt::V3d_TypeOfOrientation theDirection, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Creates a directional light source in the viewer.
    /// </summary>
    V3d_DirectionalLight(Macad::Occt::V3d_TypeOfOrientation theDirection);
    /// <summary>
    /// Creates a directional light source in the viewer.
    /// </summary>
    V3d_DirectionalLight();
    /// <summary>
    /// Creates a directional light source in the viewer.
    /// </summary>
    V3d_DirectionalLight(Macad::Occt::Dir theDirection, Macad::Occt::Quantity_Color^ theColor, bool theIsHeadlight);
    /// <summary>
    /// Creates a directional light source in the viewer.
    /// </summary>
    V3d_DirectionalLight(Macad::Occt::Dir theDirection, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Creates a directional light source in the viewer.
    /// </summary>
    V3d_DirectionalLight(Macad::Occt::Dir theDirection);
    /// <summary>
    /// Defines the direction of the light source by a predefined orientation.
    /// </summary>
    void SetDirection(Macad::Occt::V3d_TypeOfOrientation theDirection);
    static Macad::Occt::V3d_DirectionalLight^ CreateDowncasted(::V3d_DirectionalLight* instance);
}; // class V3d_DirectionalLight

//---------------------------------------------------------------------
//  Class  V3d_RectangularGrid
//---------------------------------------------------------------------
public ref class V3d_RectangularGrid sealed
    : public Macad::Occt::Aspect_RectangularGrid
{

#ifdef Include_V3d_RectangularGrid_h
public:
    Include_V3d_RectangularGrid_h
#endif

public:
    V3d_RectangularGrid(::V3d_RectangularGrid* nativeInstance)
        : Macad::Occt::Aspect_RectangularGrid( nativeInstance )
    {}

    V3d_RectangularGrid(::V3d_RectangularGrid& nativeInstance)
        : Macad::Occt::Aspect_RectangularGrid( nativeInstance )
    {}

    property ::V3d_RectangularGrid* NativeInstance
    {
        ::V3d_RectangularGrid* get()
        {
            return static_cast<::V3d_RectangularGrid*>(_NativeInstance);
        }
    }

public:
    V3d_RectangularGrid(Macad::Occt::V3d_Viewer^ aViewer, Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor);
    void SetColors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor);
    void Display();
    void Erase();
    bool IsDisplayed();
    void GraphicValues(double% XSize, double% YSize, double% OffSet);
    void SetGraphicValues(double XSize, double YSize, double OffSet);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::V3d_RectangularGrid^ CreateDowncasted(::V3d_RectangularGrid* instance);
}; // class V3d_RectangularGrid

//---------------------------------------------------------------------
//  Class  V3d_Trihedron
//---------------------------------------------------------------------
/// <summary>
/// Class for presentation of trihedron object.
/// </summary>
public ref class V3d_Trihedron sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_V3d_Trihedron_h
public:
    Include_V3d_Trihedron_h
#endif

public:
    V3d_Trihedron(::V3d_Trihedron* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    V3d_Trihedron(::V3d_Trihedron& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::V3d_Trihedron* NativeInstance
    {
        ::V3d_Trihedron* get()
        {
            return static_cast<::V3d_Trihedron*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a default trihedron.
    /// </summary>
    V3d_Trihedron();
    /// <summary>
    /// Return TRUE if wireframe presentation is set; FALSE by default.
    /// </summary>
    bool IsWireframe();
    /// <summary>
    /// Switch wireframe / shaded trihedron.
    /// </summary>
    void SetWireframe(bool theAsWireframe);
    /// <summary>
    /// Return trihedron position.
    /// </summary>
    Macad::Occt::Graphic3d_TransformPers^ TransformPersistence();
    /// <summary>
    /// Setup the corner to draw the trihedron.
    /// </summary>
    void SetPosition(Macad::Occt::Aspect_TypeOfTriedronPosition thePosition);
    /// <summary>
    /// Return scale factor.
    /// </summary>
    double Scale();
    /// <summary>
    /// Setup the scale factor.
    /// </summary>
    void SetScale(double theScale);
    /// <summary>
    /// Return size ratio factor.
    /// </summary>
    double SizeRatio();
    /// <summary>
    /// Setup the size ratio factor.
    /// </summary>
    void SetSizeRatio(double theRatio);
    /// <summary>
    /// Return arrow diameter.
    /// </summary>
    double ArrowDiameter();
    /// <summary>
    /// Setup the arrow diameter.
    /// </summary>
    void SetArrowDiameter(double theDiam);
    /// <summary>
    /// Return number of facets for tessellation.
    /// </summary>
    int NbFacets();
    /// <summary>
    /// Setup the number of facets for tessellation.
    /// </summary>
    void SetNbFacets(int theNbFacets);
    /// <summary>
    /// Return text aspect for specified axis.
    /// </summary>
    /// <param name="in]">
    /// theAxis  axis index
    /// </param>
    /// <returns>
    /// text aspect
    /// </returns>
    Macad::Occt::Prs3d_TextAspect^ LabelAspect(Macad::Occt::V3d_TypeOfAxe theAxis);
    /// <summary>
    /// Setup per-label color.
    /// </summary>
    void SetLabelsColor(Macad::Occt::Quantity_Color^ theXColor, Macad::Occt::Quantity_Color^ theYColor, Macad::Occt::Quantity_Color^ theZColor);
    /// <summary>
    /// Setup color of text labels.
    /// </summary>
    void SetLabelsColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Return shading aspect for specified axis.
    /// </summary>
    /// <param name="in]">
    /// theAxis  axis index
    /// </param>
    /// <returns>
    /// shading aspect
    /// </returns>
    Macad::Occt::Prs3d_ShadingAspect^ ArrowAspect(Macad::Occt::V3d_TypeOfAxe theAxis);
    /// <summary>
    /// Setup colors of arrows.
    /// </summary>
    void SetArrowsColor(Macad::Occt::Quantity_Color^ theXColor, Macad::Occt::Quantity_Color^ theYColor, Macad::Occt::Quantity_Color^ theZColor);
    /// <summary>
    /// Return shading aspect of origin sphere.
    /// </summary>
    Macad::Occt::Prs3d_ShadingAspect^ OriginAspect();
    /// <summary>
    /// Return axis text.
    /// </summary>
    /// <param name="in]">
    /// theAxis  axis index
    /// </param>
    /// <returns>
    /// text of the label
    /// </returns>
    Macad::Occt::TCollection_AsciiString^ Label(Macad::Occt::V3d_TypeOfAxe theAxis);
    /// <summary>
    /// Setup per-axis text.
    /// </summary>
    void SetLabels(Macad::Occt::TCollection_AsciiString^ theX, Macad::Occt::TCollection_AsciiString^ theY, Macad::Occt::TCollection_AsciiString^ theZ);
    /// <summary>
    /// Display trihedron.
    /// </summary>
    void Display(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Erase trihedron.
    /// </summary>
    void Erase();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::V3d_Trihedron^ CreateDowncasted(::V3d_Trihedron* instance);
}; // class V3d_Trihedron

//---------------------------------------------------------------------
//  Class  V3d_Plane
//---------------------------------------------------------------------
/// <summary>
/// Obsolete clip plane presentation class.
/// Ported on new core of Graphic3d_ClipPlane approach.
/// Please access Graphic3d_ClipPlane via ClipPlane() method
/// to use it for standard clipping workflow.
/// Example of use:
/// </summary>
/// @code
/// 
/// Handle(V3d_Plane) aPlane (0, 1, 0, -20);
/// Handle(V3d_View) aView;
/// aView->AddClipPlane (aPlane->ClipPlane());
/// 
/// aPlane->Display (aView);
/// aPlane->SetPlane (0, 1, 0, -30);
/// aView->RemoveClipPlane (aPlane->ClipPlane());
/// 
/// @endcode
/// Use interface of this class to modify plane equation synchronously
/// with clipping equation.
public ref class V3d_Plane sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_V3d_Plane_h
public:
    Include_V3d_Plane_h
#endif

public:
    V3d_Plane(::V3d_Plane* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    V3d_Plane(::V3d_Plane& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::V3d_Plane* NativeInstance
    {
        ::V3d_Plane* get()
        {
            return static_cast<::V3d_Plane*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a clipping plane from plane coefficients.
    /// </summary>
    V3d_Plane(double theA, double theB, double theC, double theD);
    /// <summary>
    /// Creates a clipping plane from plane coefficients.
    /// </summary>
    V3d_Plane(double theA, double theB, double theC);
    /// <summary>
    /// Creates a clipping plane from plane coefficients.
    /// </summary>
    V3d_Plane(double theA, double theB);
    /// <summary>
    /// Creates a clipping plane from plane coefficients.
    /// </summary>
    V3d_Plane(double theA);
    /// <summary>
    /// Creates a clipping plane from plane coefficients.
    /// </summary>
    V3d_Plane();
    /// <summary>
    /// Change plane equation.
    /// </summary>
    void SetPlane(double theA, double theB, double theC, double theD);
    /// <summary>
    /// Display the plane representation in the chosen view.
    /// </summary>
    void Display(Macad::Occt::V3d_View^ theView, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Display the plane representation in the chosen view.
    /// </summary>
    void Display(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Erase the plane representation.
    /// </summary>
    void Erase();
    /// <summary>
    /// Returns the parameters of the plane.
    /// </summary>
    void Plane(double% theA, double% theB, double% theC, double% theD);
    /// <summary>
    /// Returns TRUE when the plane representation is displayed.
    /// </summary>
    bool IsDisplayed();
    /// <summary>
    /// Use this method to pass clipping plane implementation for
    /// standard clipping workflow.
    /// </summary>
    /// <returns>
    /// clipping plane implementation handle.
    /// </returns>
    Macad::Occt::Graphic3d_ClipPlane^ ClipPlane();
    static Macad::Occt::V3d_Plane^ CreateDowncasted(::V3d_Plane* instance);
}; // class V3d_Plane

//---------------------------------------------------------------------
//  Class  V3d_PositionalLight
//---------------------------------------------------------------------
/// <summary>
/// Creation and modification of an isolated (positional) light source.
/// It is also defined by the color and two attenuation factors ConstAttentuation() and
/// LinearAttentuation(). The resulting attenuation factor determining the illumination of a surface
/// depends on the following formula:
/// </summary>
/// @code
/// F = 1 / (ConstAttenuation() + LinearAttenuation() * Distance)
/// @endcode
/// Where Distance is the distance of the isolated source from the surface.
public ref class V3d_PositionalLight sealed
    : public Macad::Occt::V3d_PositionLight
{

#ifdef Include_V3d_PositionalLight_h
public:
    Include_V3d_PositionalLight_h
#endif

public:
    V3d_PositionalLight(::V3d_PositionalLight* nativeInstance)
        : Macad::Occt::V3d_PositionLight( nativeInstance )
    {}

    V3d_PositionalLight(::V3d_PositionalLight& nativeInstance)
        : Macad::Occt::V3d_PositionLight( nativeInstance )
    {}

    property ::V3d_PositionalLight* NativeInstance
    {
        ::V3d_PositionalLight* get()
        {
            return static_cast<::V3d_PositionalLight*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an isolated light source in the viewer with default attenuation factors (1.0, 0.0).
    /// </summary>
    V3d_PositionalLight(Macad::Occt::Pnt thePos, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Creates an isolated light source in the viewer with default attenuation factors (1.0, 0.0).
    /// </summary>
    V3d_PositionalLight(Macad::Occt::Pnt thePos);
    static Macad::Occt::V3d_PositionalLight^ CreateDowncasted(::V3d_PositionalLight* instance);
}; // class V3d_PositionalLight

//---------------------------------------------------------------------
//  Class  V3d_SpotLight
//---------------------------------------------------------------------
/// <summary>
/// Creation and modification of a spot.
/// The attenuation factor F determines the illumination of a surface:
/// </summary>
/// @code
/// F = 1/(ConstAttenuation() + LinearAttenuation() * Distance)
/// @endcode
/// Where Distance is the distance from the source to the surface.
/// The default values (1.0, 0.0) correspond to a minimum of attenuation.
/// The concentration factor determines the dispersion of the light on the surface, the default
/// value (1.0) corresponds to a minimum of dispersion.
public ref class V3d_SpotLight sealed
    : public Macad::Occt::V3d_PositionLight
{

#ifdef Include_V3d_SpotLight_h
public:
    Include_V3d_SpotLight_h
#endif

public:
    V3d_SpotLight(::V3d_SpotLight* nativeInstance)
        : Macad::Occt::V3d_PositionLight( nativeInstance )
    {}

    V3d_SpotLight(::V3d_SpotLight& nativeInstance)
        : Macad::Occt::V3d_PositionLight( nativeInstance )
    {}

    property ::V3d_SpotLight* NativeInstance
    {
        ::V3d_SpotLight* get()
        {
            return static_cast<::V3d_SpotLight*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a light source of the Spot type in the viewer with default attenuation factors (1.0,
    /// 0.0), concentration factor 1.0 and spot angle 30 degrees.
    /// </summary>
    V3d_SpotLight(Macad::Occt::Pnt thePos, Macad::Occt::V3d_TypeOfOrientation theDirection, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Creates a light source of the Spot type in the viewer with default attenuation factors (1.0,
    /// 0.0), concentration factor 1.0 and spot angle 30 degrees.
    /// </summary>
    V3d_SpotLight(Macad::Occt::Pnt thePos, Macad::Occt::V3d_TypeOfOrientation theDirection);
    /// <summary>
    /// Creates a light source of the Spot type in the viewer with default attenuation factors (1.0,
    /// 0.0), concentration factor 1.0 and spot angle 30 degrees.
    /// </summary>
    V3d_SpotLight(Macad::Occt::Pnt thePos);
    /// <summary>
    /// Creates a light source of the Spot type in the viewer with default attenuation factors (1.0,
    /// 0.0), concentration factor 1.0 and spot angle 30 degrees.
    /// </summary>
    V3d_SpotLight(Macad::Occt::Pnt thePos, Macad::Occt::Dir theDirection, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Creates a light source of the Spot type in the viewer with default attenuation factors (1.0,
    /// 0.0), concentration factor 1.0 and spot angle 30 degrees.
    /// </summary>
    V3d_SpotLight(Macad::Occt::Pnt thePos, Macad::Occt::Dir theDirection);
    /// <summary>
    /// Defines the direction of the light source
    /// according to a predefined directional vector.
    /// </summary>
    void SetDirection(Macad::Occt::V3d_TypeOfOrientation theOrientation);
    static Macad::Occt::V3d_SpotLight^ CreateDowncasted(::V3d_SpotLight* instance);
}; // class V3d_SpotLight

//---------------------------------------------------------------------
//  Class  V3d_UnMapped
//---------------------------------------------------------------------
public ref class V3d_UnMapped sealed
    : public Macad::Occt::Standard_DomainError
{

#ifdef Include_V3d_UnMapped_h
public:
    Include_V3d_UnMapped_h
#endif

public:
    V3d_UnMapped(::V3d_UnMapped* nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    V3d_UnMapped(::V3d_UnMapped& nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    property ::V3d_UnMapped* NativeInstance
    {
        ::V3d_UnMapped* get()
        {
            return static_cast<::V3d_UnMapped*>(_NativeInstance);
        }
    }

public:
    V3d_UnMapped();
    V3d_UnMapped(System::String^ theMessage);
    V3d_UnMapped(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::V3d_UnMapped^ NewInstance(System::String^ theMessage);
    static Macad::Occt::V3d_UnMapped^ NewInstance();
    static Macad::Occt::V3d_UnMapped^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::V3d_UnMapped^ CreateDowncasted(::V3d_UnMapped* instance);
}; // class V3d_UnMapped

}; // namespace Occt
}; // namespace Macad
