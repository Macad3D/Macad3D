// Generated wrapper code for package AIS

#pragma once

#include "NCollection.h"
#include "SelectMgr.h"
#include "Prs3d.h"
#include "Standard.h"
#include "Aspect.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  AIS_SelectionScheme
//---------------------------------------------------------------------
/// <summary>
/// Sets selection schemes for interactive contexts.
/// </summary>
public enum class AIS_SelectionScheme
{
    UNKNOWN = -1,
    Replace = 0,
    Add = 1,
    Remove = 2,
    XOR = 3,
    Clear = 4,
    ReplaceExtra = 5
}; // enum  class AIS_SelectionScheme

//---------------------------------------------------------------------
//  Enum  AIS_KindOfInteractive
//---------------------------------------------------------------------
/// <summary>
/// Declares the type of Interactive Object.
/// This type can be used for fast pre-filtering of objects of specific group.
/// </summary>
public enum class AIS_KindOfInteractive
{
    None = 0,
    Datum = 1,
    Shape = 2,
    Object = 3,
    Relation = 4,
    Dimension = 5,
    LightSource = 6
}; // enum  class AIS_KindOfInteractive

//---------------------------------------------------------------------
//  Enum  AIS_DragAction
//---------------------------------------------------------------------
/// <summary>
/// Dragging action.
/// </summary>
public enum class AIS_DragAction
{
    Start = 0,
    Confirmed = 1,
    Update = 2,
    Stop = 3,
    Abort = 4
}; // enum  class AIS_DragAction

//---------------------------------------------------------------------
//  Enum  AIS_DisplayMode
//---------------------------------------------------------------------
/// <summary>
/// Sets display modes other than neutral point ones,
/// for interactive objects. The possibilities include:
/// -   wireframe,
/// -   shaded,
/// </summary>
public enum class AIS_DisplayMode
{
    WireFrame = 0,
    Shaded = 1
}; // enum  class AIS_DisplayMode

//---------------------------------------------------------------------
//  Enum  AIS_SelectStatus
//---------------------------------------------------------------------
public enum class AIS_SelectStatus
{
    Added = 0,
    Removed = 1,
    NotDone = 2
}; // enum  class AIS_SelectStatus

//---------------------------------------------------------------------
//  Enum  AIS_SelectionModesConcurrency
//---------------------------------------------------------------------
/// <summary>
/// The mode specifying how multiple active Selection Modes should be treated during activation of
/// new one.
/// </summary>
public enum class AIS_SelectionModesConcurrency
{
    Single = 0,
    GlobalOrLocal = 1,
    Multiple = 2
}; // enum  class AIS_SelectionModesConcurrency

//---------------------------------------------------------------------
//  Enum  AIS_StatusOfDetection
//---------------------------------------------------------------------
public enum class AIS_StatusOfDetection
{
    Error = 0,
    Nothing = 1,
    AllBad = 2,
    Selected = 3,
    OnlyOneDetected = 4,
    OnlyOneGood = 5,
    SeveralGood = 6
}; // enum  class AIS_StatusOfDetection

//---------------------------------------------------------------------
//  Enum  AIS_StatusOfPick
//---------------------------------------------------------------------
public enum class AIS_StatusOfPick
{
    Error = 0,
    NothingSelected = 1,
    Removed = 2,
    OneSelected = 3,
    SeveralSelected = 4
}; // enum  class AIS_StatusOfPick

//---------------------------------------------------------------------
//  Enum  AIS_TypeOfIso
//---------------------------------------------------------------------
/// <summary>
/// Declares the type of isoparameter displayed.
/// </summary>
public enum class AIS_TypeOfIso
{
    IsoU = 0,
    IsoV = 1,
    Both = 2
}; // enum  class AIS_TypeOfIso

//---------------------------------------------------------------------
//  Enum  AIS_TypeOfAxis
//---------------------------------------------------------------------
/// <summary>
/// Declares the type of axis.
/// </summary>
public enum class AIS_TypeOfAxis
{
    TOAX_Unknown = 0,
    TOAX_XAxis = 1,
    TOAX_YAxis = 2,
    TOAX_ZAxis = 3
}; // enum  class AIS_TypeOfAxis

//---------------------------------------------------------------------
//  Enum  AIS_TypeOfAttribute
//---------------------------------------------------------------------
public enum class AIS_TypeOfAttribute
{
    Line = 0,
    Dimension = 1,
    Wire = 2,
    Plane = 3,
    Vector = 4,
    UIso = 5,
    VIso = 6,
    Free = 7,
    UnFree = 8,
    Section = 9,
    Hidden = 10,
    Seen = 11,
    FaceBoundary = 12,
    FirstAxis = 13,
    SecondAxis = 14,
    ThirdAxis = 15
}; // enum  class AIS_TypeOfAttribute

//---------------------------------------------------------------------
//  Enum  AIS_ManipulatorMode
//---------------------------------------------------------------------
/// <summary>
/// Mode to make definite kind of transformations with AIS_Manipulator object.
/// </summary>
public enum class AIS_ManipulatorMode
{
    None = 0,
    Translation = 1,
    Rotation = 2,
    Scaling = 3,
    TranslationPlane = 4
}; // enum  class AIS_ManipulatorMode

//---------------------------------------------------------------------
//  Enum  AIS_MouseGesture
//---------------------------------------------------------------------
/// <summary>
/// Mouse gesture - only one can be active at one moment.
/// </summary>
public enum class AIS_MouseGesture
{
    NONE = 0,
    SelectRectangle = 1,
    SelectLasso = 2,
    Zoom = 3,
    ZoomVertical = 4,
    ZoomWindow = 5,
    Pan = 6,
    RotateOrbit = 7,
    RotateView = 8,
    Drag = 9
}; // enum  class AIS_MouseGesture

//---------------------------------------------------------------------
//  Enum  AIS_NavigationMode
//---------------------------------------------------------------------
/// <summary>
/// Camera navigation mode.
/// </summary>
public enum class AIS_NavigationMode
{
    Orbit = 0,
    FirstPersonFlight = 1,
    FirstPersonWalk = 2
}; // enum  class AIS_NavigationMode

//---------------------------------------------------------------------
//  Enum  AIS_TypeOfPlane
//---------------------------------------------------------------------
/// <summary>
/// Declares the type of plane.
/// </summary>
public enum class AIS_TypeOfPlane
{
    TOPL_Unknown = 0,
    TOPL_XYPlane = 1,
    TOPL_XZPlane = 2,
    TOPL_YZPlane = 3
}; // enum  class AIS_TypeOfPlane

//---------------------------------------------------------------------
//  Enum  AIS_RotationMode
//---------------------------------------------------------------------
/// <summary>
/// Camera rotation mode.
/// </summary>
public enum class AIS_RotationMode
{
    BndBoxActive = 0,
    PickLast = 1,
    PickCenter = 2,
    CameraAt = 3,
    BndBoxScene = 4
}; // enum  class AIS_RotationMode

//---------------------------------------------------------------------
//  Enum  AIS_TrihedronSelectionMode
//---------------------------------------------------------------------
/// <summary>
/// Enumeration defining selection modes supported by AIS_Trihedron.
/// </summary>
public enum class AIS_TrihedronSelectionMode
{
    EntireObject = 0,
    Origin = 1,
    Axes = 2,
    MainPlanes = 3
}; // enum  class AIS_TrihedronSelectionMode

//---------------------------------------------------------------------
//  Enum  AIS_ViewSelectionTool
//---------------------------------------------------------------------
/// <summary>
/// Selection mode
/// </summary>
public enum class AIS_ViewSelectionTool
{
    Picking = 0,
    RubberBand = 1,
    Polygon = 2,
    ZoomWindow = 3
}; // enum  class AIS_ViewSelectionTool

//---------------------------------------------------------------------
//  Enum  AIS_ViewInputBufferType
//---------------------------------------------------------------------
/// <summary>
/// Input buffer type.
/// </summary>
public enum class AIS_ViewInputBufferType
{
    UI = 0,
    GL = 1
}; // enum  class AIS_ViewInputBufferType

//---------------------------------------------------------------------
//  Enum  AIS_WalkTranslation
//---------------------------------------------------------------------
/// <summary>
/// Walking translation components.
/// </summary>
public enum class AIS_WalkTranslation
{
    Forward = 0,
    Side = 1,
    Up = 2
}; // enum  class AIS_WalkTranslation

//---------------------------------------------------------------------
//  Enum  AIS_WalkRotation
//---------------------------------------------------------------------
/// <summary>
/// Walking rotation components.
/// </summary>
public enum class AIS_WalkRotation
{
    Yaw = 0,
    Pitch = 1,
    Roll = 2
}; // enum  class AIS_WalkRotation

//---------------------------------------------------------------------
//  Class  AIS_DataMapOfIOStatus
//---------------------------------------------------------------------
public ref class AIS_DataMapOfIOStatus sealed
    : public Macad::Occt::BaseClass<::AIS_DataMapOfIOStatus>
{

#ifdef Include_AIS_DataMapOfIOStatus_h
public:
    Include_AIS_DataMapOfIOStatus_h
#endif

public:
    AIS_DataMapOfIOStatus(::AIS_DataMapOfIOStatus* nativeInstance)
        : Macad::Occt::BaseClass<::AIS_DataMapOfIOStatus>( nativeInstance, true )
    {}

    AIS_DataMapOfIOStatus(::AIS_DataMapOfIOStatus& nativeInstance)
        : Macad::Occt::BaseClass<::AIS_DataMapOfIOStatus>( &nativeInstance, false )
    {}

    property ::AIS_DataMapOfIOStatus* NativeInstance
    {
        ::AIS_DataMapOfIOStatus* get()
        {
            return static_cast<::AIS_DataMapOfIOStatus*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::AIS_DataMapOfIOStatus::Iterator>
    {

#ifdef Include_AIS_DataMapOfIOStatus_Iterator_h
    public:
        Include_AIS_DataMapOfIOStatus_Iterator_h
#endif

    public:
        Iterator(::AIS_DataMapOfIOStatus::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::AIS_DataMapOfIOStatus::Iterator>( nativeInstance, true )
        {}

        Iterator(::AIS_DataMapOfIOStatus::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::AIS_DataMapOfIOStatus::Iterator>( &nativeInstance, false )
        {}

        property ::AIS_DataMapOfIOStatus::Iterator* NativeInstance
        {
            ::AIS_DataMapOfIOStatus::Iterator* get()
            {
                return static_cast<::AIS_DataMapOfIOStatus::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::AIS_GlobalStatus^ Value();
        Macad::Occt::AIS_GlobalStatus^ ChangeValue();
        Macad::Occt::AIS_InteractiveObject^ Key();
    }; // class Iterator

    AIS_DataMapOfIOStatus();
    AIS_DataMapOfIOStatus(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    AIS_DataMapOfIOStatus(int theNbBuckets);
    void Exchange(Macad::Occt::AIS_DataMapOfIOStatus^ theOther);
    Macad::Occt::AIS_DataMapOfIOStatus^ Assign(Macad::Occt::AIS_DataMapOfIOStatus^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::AIS_InteractiveObject^ theKey, Macad::Occt::AIS_GlobalStatus^ theItem);
    Macad::Occt::AIS_GlobalStatus^ Bound(Macad::Occt::AIS_InteractiveObject^ theKey, Macad::Occt::AIS_GlobalStatus^ theItem);
    bool IsBound(Macad::Occt::AIS_InteractiveObject^ theKey);
    bool UnBind(Macad::Occt::AIS_InteractiveObject^ theKey);
    Macad::Occt::AIS_GlobalStatus^ Seek(Macad::Occt::AIS_InteractiveObject^ theKey);
    Macad::Occt::AIS_GlobalStatus^ Find(Macad::Occt::AIS_InteractiveObject^ theKey);
    Macad::Occt::AIS_GlobalStatus^ ChangeSeek(Macad::Occt::AIS_InteractiveObject^ theKey);
    Macad::Occt::AIS_GlobalStatus^ ChangeFind(Macad::Occt::AIS_InteractiveObject^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class AIS_DataMapOfIOStatus

//---------------------------------------------------------------------
//  Class  AIS_ListOfInteractive
//---------------------------------------------------------------------
public ref class AIS_ListOfInteractive sealed
    : public Macad::Occt::NCollection_BaseList
{

#ifdef Include_AIS_ListOfInteractive_h
public:
    Include_AIS_ListOfInteractive_h
#endif

public:
    AIS_ListOfInteractive(::AIS_ListOfInteractive* nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    AIS_ListOfInteractive(::AIS_ListOfInteractive& nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    property ::AIS_ListOfInteractive* NativeInstance
    {
        ::AIS_ListOfInteractive* get()
        {
            return static_cast<::AIS_ListOfInteractive*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::AIS_ListOfInteractive::Iterator>
    {

#ifdef Include_AIS_ListOfInteractive_Iterator_h
    public:
        Include_AIS_ListOfInteractive_Iterator_h
#endif

    public:
        Iterator(::AIS_ListOfInteractive::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::AIS_ListOfInteractive::Iterator>( nativeInstance, true )
        {}

        Iterator(::AIS_ListOfInteractive::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::AIS_ListOfInteractive::Iterator>( &nativeInstance, false )
        {}

        property ::AIS_ListOfInteractive::Iterator* NativeInstance
        {
            ::AIS_ListOfInteractive::Iterator* get()
            {
                return static_cast<::AIS_ListOfInteractive::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::AIS_InteractiveObject^ Value();
        Macad::Occt::AIS_InteractiveObject^ ChangeValue();
    }; // class Iterator

    AIS_ListOfInteractive();
    AIS_ListOfInteractive(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    Macad::Occt::AIS_ListOfInteractive^ Assign(Macad::Occt::AIS_ListOfInteractive^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::AIS_InteractiveObject^ First();
    Macad::Occt::AIS_InteractiveObject^ Last();
    Macad::Occt::AIS_InteractiveObject^ Append(Macad::Occt::AIS_InteractiveObject^ theItem);
    Macad::Occt::AIS_InteractiveObject^ Prepend(Macad::Occt::AIS_InteractiveObject^ theItem);
    void RemoveFirst();
    void Remove(Macad::Occt::AIS_ListOfInteractive::Iterator^ theIter);
    Macad::Occt::AIS_InteractiveObject^ InsertBefore(Macad::Occt::AIS_InteractiveObject^ theItem, Macad::Occt::AIS_ListOfInteractive::Iterator^ theIter);
    Macad::Occt::AIS_InteractiveObject^ InsertAfter(Macad::Occt::AIS_InteractiveObject^ theItem, Macad::Occt::AIS_ListOfInteractive::Iterator^ theIter);
    void Reverse();
}; // class AIS_ListOfInteractive

//---------------------------------------------------------------------
//  Class  AIS_NArray1OfEntityOwner
//---------------------------------------------------------------------
public ref class AIS_NArray1OfEntityOwner sealed
    : public Macad::Occt::BaseClass<::AIS_NArray1OfEntityOwner>
    , public IIndexEnumerable<Macad::Occt::SelectMgr_EntityOwner^>
{

#ifdef Include_AIS_NArray1OfEntityOwner_h
public:
    Include_AIS_NArray1OfEntityOwner_h
#endif

public:
    AIS_NArray1OfEntityOwner(::AIS_NArray1OfEntityOwner* nativeInstance)
        : Macad::Occt::BaseClass<::AIS_NArray1OfEntityOwner>( nativeInstance, true )
    {}

    AIS_NArray1OfEntityOwner(::AIS_NArray1OfEntityOwner& nativeInstance)
        : Macad::Occt::BaseClass<::AIS_NArray1OfEntityOwner>( &nativeInstance, false )
    {}

    property ::AIS_NArray1OfEntityOwner* NativeInstance
    {
        ::AIS_NArray1OfEntityOwner* get()
        {
            return static_cast<::AIS_NArray1OfEntityOwner*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::AIS_NArray1OfEntityOwner::Iterator>
    {

#ifdef Include_AIS_NArray1OfEntityOwner_Iterator_h
    public:
        Include_AIS_NArray1OfEntityOwner_Iterator_h
#endif

    public:
        Iterator(::AIS_NArray1OfEntityOwner::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::AIS_NArray1OfEntityOwner::Iterator>( nativeInstance, true )
        {}

        Iterator(::AIS_NArray1OfEntityOwner::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::AIS_NArray1OfEntityOwner::Iterator>( &nativeInstance, false )
        {}

        property ::AIS_NArray1OfEntityOwner::Iterator* NativeInstance
        {
            ::AIS_NArray1OfEntityOwner::Iterator* get()
            {
                return static_cast<::AIS_NArray1OfEntityOwner::Iterator*>(_NativeInstance);
            }
        }

    public:
        void Init(Macad::Occt::AIS_NArray1OfEntityOwner^ theList);
        bool More();
        void Initialize(Macad::Occt::AIS_NArray1OfEntityOwner^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::SelectMgr_EntityOwner^ Value();
        Macad::Occt::SelectMgr_EntityOwner^ ChangeValue();
    }; // class Iterator

    AIS_NArray1OfEntityOwner();
    AIS_NArray1OfEntityOwner(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void AIS_NArray1OfEntityOwner(allocator_type theAlloc, int theLower, int theUpper, ) */
    AIS_NArray1OfEntityOwner(Macad::Occt::SelectMgr_EntityOwner^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    AIS_NArray1OfEntityOwner(Macad::Occt::SelectMgr_EntityOwner^ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::SelectMgr_EntityOwner^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::AIS_NArray1OfEntityOwner^ Assign(Macad::Occt::AIS_NArray1OfEntityOwner^ theOther);
    Macad::Occt::AIS_NArray1OfEntityOwner^ Move(Macad::Occt::AIS_NArray1OfEntityOwner^ theOther);
    Macad::Occt::SelectMgr_EntityOwner^ First();
    Macad::Occt::SelectMgr_EntityOwner^ ChangeFirst();
    Macad::Occt::SelectMgr_EntityOwner^ Last();
    Macad::Occt::SelectMgr_EntityOwner^ ChangeLast();
    virtual Macad::Occt::SelectMgr_EntityOwner^ Value(int theIndex);
    Macad::Occt::SelectMgr_EntityOwner^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::SelectMgr_EntityOwner^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class AIS_NArray1OfEntityOwner

//---------------------------------------------------------------------
//  Class  AIS_NListOfEntityOwner
//---------------------------------------------------------------------
public ref class AIS_NListOfEntityOwner sealed
    : public Macad::Occt::NCollection_BaseList
{

#ifdef Include_AIS_NListOfEntityOwner_h
public:
    Include_AIS_NListOfEntityOwner_h
#endif

public:
    AIS_NListOfEntityOwner(::AIS_NListOfEntityOwner* nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    AIS_NListOfEntityOwner(::AIS_NListOfEntityOwner& nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    property ::AIS_NListOfEntityOwner* NativeInstance
    {
        ::AIS_NListOfEntityOwner* get()
        {
            return static_cast<::AIS_NListOfEntityOwner*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::AIS_NListOfEntityOwner::Iterator>
    {

#ifdef Include_AIS_NListOfEntityOwner_Iterator_h
    public:
        Include_AIS_NListOfEntityOwner_Iterator_h
#endif

    public:
        Iterator(::AIS_NListOfEntityOwner::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::AIS_NListOfEntityOwner::Iterator>( nativeInstance, true )
        {}

        Iterator(::AIS_NListOfEntityOwner::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::AIS_NListOfEntityOwner::Iterator>( &nativeInstance, false )
        {}

        property ::AIS_NListOfEntityOwner::Iterator* NativeInstance
        {
            ::AIS_NListOfEntityOwner::Iterator* get()
            {
                return static_cast<::AIS_NListOfEntityOwner::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::SelectMgr_EntityOwner^ Value();
        Macad::Occt::SelectMgr_EntityOwner^ ChangeValue();
    }; // class Iterator

    AIS_NListOfEntityOwner();
    AIS_NListOfEntityOwner(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    Macad::Occt::AIS_NListOfEntityOwner^ Assign(Macad::Occt::AIS_NListOfEntityOwner^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::SelectMgr_EntityOwner^ First();
    Macad::Occt::SelectMgr_EntityOwner^ Last();
    Macad::Occt::SelectMgr_EntityOwner^ Append(Macad::Occt::SelectMgr_EntityOwner^ theItem);
    Macad::Occt::SelectMgr_EntityOwner^ Prepend(Macad::Occt::SelectMgr_EntityOwner^ theItem);
    void RemoveFirst();
    void Remove(Macad::Occt::AIS_NListOfEntityOwner::Iterator^ theIter);
    Macad::Occt::SelectMgr_EntityOwner^ InsertBefore(Macad::Occt::SelectMgr_EntityOwner^ theItem, Macad::Occt::AIS_NListOfEntityOwner::Iterator^ theIter);
    Macad::Occt::SelectMgr_EntityOwner^ InsertAfter(Macad::Occt::SelectMgr_EntityOwner^ theItem, Macad::Occt::AIS_NListOfEntityOwner::Iterator^ theIter);
    void Reverse();
}; // class AIS_NListOfEntityOwner

//---------------------------------------------------------------------
//  Class  AIS_DataMapOfShapeDrawer
//---------------------------------------------------------------------
public ref class AIS_DataMapOfShapeDrawer sealed
    : public Macad::Occt::BaseClass<::AIS_DataMapOfShapeDrawer>
{

#ifdef Include_AIS_DataMapOfShapeDrawer_h
public:
    Include_AIS_DataMapOfShapeDrawer_h
#endif

public:
    AIS_DataMapOfShapeDrawer(::AIS_DataMapOfShapeDrawer* nativeInstance)
        : Macad::Occt::BaseClass<::AIS_DataMapOfShapeDrawer>( nativeInstance, true )
    {}

    AIS_DataMapOfShapeDrawer(::AIS_DataMapOfShapeDrawer& nativeInstance)
        : Macad::Occt::BaseClass<::AIS_DataMapOfShapeDrawer>( &nativeInstance, false )
    {}

    property ::AIS_DataMapOfShapeDrawer* NativeInstance
    {
        ::AIS_DataMapOfShapeDrawer* get()
        {
            return static_cast<::AIS_DataMapOfShapeDrawer*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::AIS_DataMapOfShapeDrawer::Iterator>
    {

#ifdef Include_AIS_DataMapOfShapeDrawer_Iterator_h
    public:
        Include_AIS_DataMapOfShapeDrawer_Iterator_h
#endif

    public:
        Iterator(::AIS_DataMapOfShapeDrawer::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::AIS_DataMapOfShapeDrawer::Iterator>( nativeInstance, true )
        {}

        Iterator(::AIS_DataMapOfShapeDrawer::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::AIS_DataMapOfShapeDrawer::Iterator>( &nativeInstance, false )
        {}

        property ::AIS_DataMapOfShapeDrawer::Iterator* NativeInstance
        {
            ::AIS_DataMapOfShapeDrawer::Iterator* get()
            {
                return static_cast<::AIS_DataMapOfShapeDrawer::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::AIS_ColoredDrawer^ Value();
        Macad::Occt::AIS_ColoredDrawer^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    AIS_DataMapOfShapeDrawer();
    AIS_DataMapOfShapeDrawer(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    AIS_DataMapOfShapeDrawer(int theNbBuckets);
    void Exchange(Macad::Occt::AIS_DataMapOfShapeDrawer^ theOther);
    Macad::Occt::AIS_DataMapOfShapeDrawer^ Assign(Macad::Occt::AIS_DataMapOfShapeDrawer^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::AIS_ColoredDrawer^ theItem);
    Macad::Occt::AIS_ColoredDrawer^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::AIS_ColoredDrawer^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::AIS_ColoredDrawer^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::AIS_ColoredDrawer^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::AIS_ColoredDrawer^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::AIS_ColoredDrawer^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class AIS_DataMapOfShapeDrawer

//---------------------------------------------------------------------
//  Class  AIS_MouseGestureMap
//---------------------------------------------------------------------
/// <summary>
/// Map defining mouse gestures.
/// </summary>
public ref class AIS_MouseGestureMap sealed
    : public Macad::Occt::BaseClass<::AIS_MouseGestureMap>
{

#ifdef Include_AIS_MouseGestureMap_h
public:
    Include_AIS_MouseGestureMap_h
#endif

public:
    AIS_MouseGestureMap(::AIS_MouseGestureMap* nativeInstance)
        : Macad::Occt::BaseClass<::AIS_MouseGestureMap>( nativeInstance, true )
    {}

    AIS_MouseGestureMap(::AIS_MouseGestureMap& nativeInstance)
        : Macad::Occt::BaseClass<::AIS_MouseGestureMap>( &nativeInstance, false )
    {}

    property ::AIS_MouseGestureMap* NativeInstance
    {
        ::AIS_MouseGestureMap* get()
        {
            return static_cast<::AIS_MouseGestureMap*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::AIS_MouseGestureMap::Iterator>
    {

#ifdef Include_AIS_MouseGestureMap_Iterator_h
    public:
        Include_AIS_MouseGestureMap_Iterator_h
#endif

    public:
        Iterator(::AIS_MouseGestureMap::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::AIS_MouseGestureMap::Iterator>( nativeInstance, true )
        {}

        Iterator(::AIS_MouseGestureMap::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::AIS_MouseGestureMap::Iterator>( &nativeInstance, false )
        {}

        property ::AIS_MouseGestureMap::Iterator* NativeInstance
        {
            ::AIS_MouseGestureMap::Iterator* get()
            {
                return static_cast<::AIS_MouseGestureMap::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::AIS_MouseGesture Value();
        Macad::Occt::AIS_MouseGesture ChangeValue();
        unsigned int Key();
    }; // class Iterator

    AIS_MouseGestureMap();
    AIS_MouseGestureMap(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    AIS_MouseGestureMap(int theNbBuckets);
    void Exchange(Macad::Occt::AIS_MouseGestureMap^ theOther);
    Macad::Occt::AIS_MouseGestureMap^ Assign(Macad::Occt::AIS_MouseGestureMap^ theOther);
    void ReSize(int N);
    bool Bind(unsigned int theKey, Macad::Occt::AIS_MouseGesture theItem);
    Macad::Occt::AIS_MouseGesture Bound(unsigned int theKey, Macad::Occt::AIS_MouseGesture theItem);
    bool IsBound(unsigned int theKey);
    bool UnBind(unsigned int theKey);
    Macad::Occt::AIS_MouseGesture Seek(unsigned int theKey);
    Macad::Occt::AIS_MouseGesture Find(unsigned int theKey);
    Macad::Occt::AIS_MouseGesture ChangeSeek(unsigned int theKey);
    Macad::Occt::AIS_MouseGesture ChangeFind(unsigned int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class AIS_MouseGestureMap

//---------------------------------------------------------------------
//  Class  AIS_MouseSelectionSchemeMap
//---------------------------------------------------------------------
public ref class AIS_MouseSelectionSchemeMap sealed
    : public Macad::Occt::BaseClass<::AIS_MouseSelectionSchemeMap>
{

#ifdef Include_AIS_MouseSelectionSchemeMap_h
public:
    Include_AIS_MouseSelectionSchemeMap_h
#endif

public:
    AIS_MouseSelectionSchemeMap(::AIS_MouseSelectionSchemeMap* nativeInstance)
        : Macad::Occt::BaseClass<::AIS_MouseSelectionSchemeMap>( nativeInstance, true )
    {}

    AIS_MouseSelectionSchemeMap(::AIS_MouseSelectionSchemeMap& nativeInstance)
        : Macad::Occt::BaseClass<::AIS_MouseSelectionSchemeMap>( &nativeInstance, false )
    {}

    property ::AIS_MouseSelectionSchemeMap* NativeInstance
    {
        ::AIS_MouseSelectionSchemeMap* get()
        {
            return static_cast<::AIS_MouseSelectionSchemeMap*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::AIS_MouseSelectionSchemeMap::Iterator>
    {

#ifdef Include_AIS_MouseSelectionSchemeMap_Iterator_h
    public:
        Include_AIS_MouseSelectionSchemeMap_Iterator_h
#endif

    public:
        Iterator(::AIS_MouseSelectionSchemeMap::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::AIS_MouseSelectionSchemeMap::Iterator>( nativeInstance, true )
        {}

        Iterator(::AIS_MouseSelectionSchemeMap::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::AIS_MouseSelectionSchemeMap::Iterator>( &nativeInstance, false )
        {}

        property ::AIS_MouseSelectionSchemeMap::Iterator* NativeInstance
        {
            ::AIS_MouseSelectionSchemeMap::Iterator* get()
            {
                return static_cast<::AIS_MouseSelectionSchemeMap::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::AIS_SelectionScheme Value();
        Macad::Occt::AIS_SelectionScheme ChangeValue();
        unsigned int Key();
    }; // class Iterator

    AIS_MouseSelectionSchemeMap();
    AIS_MouseSelectionSchemeMap(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    AIS_MouseSelectionSchemeMap(int theNbBuckets);
    void Exchange(Macad::Occt::AIS_MouseSelectionSchemeMap^ theOther);
    Macad::Occt::AIS_MouseSelectionSchemeMap^ Assign(Macad::Occt::AIS_MouseSelectionSchemeMap^ theOther);
    void ReSize(int N);
    bool Bind(unsigned int theKey, Macad::Occt::AIS_SelectionScheme theItem);
    Macad::Occt::AIS_SelectionScheme Bound(unsigned int theKey, Macad::Occt::AIS_SelectionScheme theItem);
    bool IsBound(unsigned int theKey);
    bool UnBind(unsigned int theKey);
    Macad::Occt::AIS_SelectionScheme Seek(unsigned int theKey);
    Macad::Occt::AIS_SelectionScheme Find(unsigned int theKey);
    Macad::Occt::AIS_SelectionScheme ChangeSeek(unsigned int theKey);
    Macad::Occt::AIS_SelectionScheme ChangeFind(unsigned int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class AIS_MouseSelectionSchemeMap

//---------------------------------------------------------------------
//  Class  AIS_AnimationProgress
//---------------------------------------------------------------------
/// <summary>
/// Structure defining current animation progress.
/// </summary>
public ref class AIS_AnimationProgress sealed
    : public Macad::Occt::BaseClass<::AIS_AnimationProgress>
{

#ifdef Include_AIS_AnimationProgress_h
public:
    Include_AIS_AnimationProgress_h
#endif

public:
    AIS_AnimationProgress(::AIS_AnimationProgress* nativeInstance)
        : Macad::Occt::BaseClass<::AIS_AnimationProgress>( nativeInstance, true )
    {}

    AIS_AnimationProgress(::AIS_AnimationProgress& nativeInstance)
        : Macad::Occt::BaseClass<::AIS_AnimationProgress>( &nativeInstance, false )
    {}

    property ::AIS_AnimationProgress* NativeInstance
    {
        ::AIS_AnimationProgress* get()
        {
            return static_cast<::AIS_AnimationProgress*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// < global presentation timestamp
    /// </summary>
    property double Pts {
        double get() {
            return ((::AIS_AnimationProgress*)_NativeInstance)->Pts;
        }
        void set(double value) {
            ((::AIS_AnimationProgress*)_NativeInstance)->Pts = value;
        }
    }

    /// <summary>
    /// < presentation within current animation
    /// </summary>
    property double LocalPts {
        double get() {
            return ((::AIS_AnimationProgress*)_NativeInstance)->LocalPts;
        }
        void set(double value) {
            ((::AIS_AnimationProgress*)_NativeInstance)->LocalPts = value;
        }
    }

    /// <summary>
    /// < normalized position within current animation within 0..1 range
    /// </summary>
    property double LocalNormalized {
        double get() {
            return ((::AIS_AnimationProgress*)_NativeInstance)->LocalNormalized;
        }
        void set(double value) {
            ((::AIS_AnimationProgress*)_NativeInstance)->LocalNormalized = value;
        }
    }

    AIS_AnimationProgress();
}; // class AIS_AnimationProgress

//---------------------------------------------------------------------
//  Class  AIS_WalkPart
//---------------------------------------------------------------------
/// <summary>
/// Walking value.
/// </summary>
public ref class AIS_WalkPart sealed
    : public Macad::Occt::BaseClass<::AIS_WalkPart>
{

#ifdef Include_AIS_WalkPart_h
public:
    Include_AIS_WalkPart_h
#endif

public:
    AIS_WalkPart(::AIS_WalkPart* nativeInstance)
        : Macad::Occt::BaseClass<::AIS_WalkPart>( nativeInstance, true )
    {}

    AIS_WalkPart(::AIS_WalkPart& nativeInstance)
        : Macad::Occt::BaseClass<::AIS_WalkPart>( &nativeInstance, false )
    {}

    property ::AIS_WalkPart* NativeInstance
    {
        ::AIS_WalkPart* get()
        {
            return static_cast<::AIS_WalkPart*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// < value
    /// </summary>
    property double Value {
        double get() {
            return ((::AIS_WalkPart*)_NativeInstance)->Value;
        }
        void set(double value) {
            ((::AIS_WalkPart*)_NativeInstance)->Value = value;
        }
    }

    /// <summary>
    /// < key pressure
    /// </summary>
    property double Pressure {
        double get() {
            return ((::AIS_WalkPart*)_NativeInstance)->Pressure;
        }
        void set(double value) {
            ((::AIS_WalkPart*)_NativeInstance)->Pressure = value;
        }
    }

    /// <summary>
    /// < duration
    /// </summary>
    property double Duration {
        double get() {
            return ((::AIS_WalkPart*)_NativeInstance)->Duration;
        }
        void set(double value) {
            ((::AIS_WalkPart*)_NativeInstance)->Duration = value;
        }
    }

    /// <summary>
    /// Empty constructor.
    /// </summary>
    AIS_WalkPart();
    /// <summary>
    /// Return TRUE if delta is empty.
    /// </summary>
    bool IsEmpty();
}; // class AIS_WalkPart

//---------------------------------------------------------------------
//  Class  AIS_WalkDelta
//---------------------------------------------------------------------
/// <summary>
/// Walking values.
/// </summary>
public ref class AIS_WalkDelta sealed
    : public Macad::Occt::BaseClass<::AIS_WalkDelta>
{

#ifdef Include_AIS_WalkDelta_h
public:
    Include_AIS_WalkDelta_h
#endif

public:
    AIS_WalkDelta(::AIS_WalkDelta* nativeInstance)
        : Macad::Occt::BaseClass<::AIS_WalkDelta>( nativeInstance, true )
    {}

    AIS_WalkDelta(::AIS_WalkDelta& nativeInstance)
        : Macad::Occt::BaseClass<::AIS_WalkDelta>( &nativeInstance, false )
    {}

    property ::AIS_WalkDelta* NativeInstance
    {
        ::AIS_WalkDelta* get()
        {
            return static_cast<::AIS_WalkDelta*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    AIS_WalkDelta();
    /// <summary>
    /// Return jumping state.
    /// </summary>
    bool IsJumping();
    /// <summary>
    /// Set jumping state.
    /// </summary>
    void SetJumping(bool theIsJumping);
    /// <summary>
    /// Return crouching state.
    /// </summary>
    bool IsCrouching();
    /// <summary>
    /// Set crouching state.
    /// </summary>
    void SetCrouching(bool theIsCrouching);
    /// <summary>
    /// Return running state.
    /// </summary>
    bool IsRunning();
    /// <summary>
    /// Set running state.
    /// </summary>
    void SetRunning(bool theIsRunning);
    /// <summary>
    /// Return TRUE if navigation keys are pressed even if delta from the previous frame is empty.
    /// </summary>
    bool IsDefined();
    /// <summary>
    /// Set if any navigation key is pressed.
    /// </summary>
    void SetDefined(bool theIsDefined);
    /// <summary>
    /// Return TRUE when both Rotation and Translation deltas are empty.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Return TRUE if translation delta is defined.
    /// </summary>
    bool ToMove();
    /// <summary>
    /// Return TRUE if rotation delta is defined.
    /// </summary>
    bool ToRotate();
}; // class AIS_WalkDelta

//---------------------------------------------------------------------
//  Class  AIS
//---------------------------------------------------------------------
/// <summary>
/// Application Interactive Services provide the means to create links between an application GUI
/// viewer and the packages which are used to manage selection and presentation. The tools AIS
/// defined in order to do this include different sorts of entities: both the selectable viewable
/// objects themselves and the context and attribute managers to define their selection and display.
/// To orient the user as he works in a modeling environment, views and selections must be
/// comprehensible. There must be several different sorts of selectable and viewable object defined.
/// These must also be interactive, that is, connecting graphic representation and the underlying
/// reference geometry. These entities are called Interactive Objects, and are divided into four
/// types:
/// -   the Datum
/// -   the Relation
/// -   the Object
/// -   None.
/// The Datum groups together the construction elements such as lines, circles, points, trihedra,
/// plane trihedra, planes and axes. The Relation is made up of constraints on one or more
/// interactive shapes and the corresponding reference geometry. For example, you might want to
/// constrain two edges in a parallel relation. This constraint is considered as an object in its
/// own right, and is shown as a sensitive primitive. This takes the graphic form of a perpendicular
/// arrow marked with the || symbol and lying between the two edges. The Object type includes
/// topological shapes, and connections between shapes. None, in order not to eliminate the object,
/// tells the application to look further until it finds an object definition in its generation
/// which is accepted. Inside these categories, you have the possibility of an additional
/// characterization by means of a signature. The signature provides an index to the further
/// characterization. By default, the Interactive Object has a None type and a signature of 0
/// (equivalent to None.) If you want to give a particular type and signature to your interactive
/// object, you must redefine the two virtual methods: Type and Signature. In the C++ inheritance
/// structure of the package, each class representing a specific Interactive Object inherits
/// AIS_InteractiveObject. Among these inheriting classes, AIS_Relation functions as the abstract
/// mother class for tinheriting classes defining display of specific relational constraints and
/// types of dimension. Some of these include:
/// -   display of constraints based on relations of symmetry, tangency, parallelism and
/// concentricity
/// -   display of dimensions for angles, offsets, diameters, radii and chamfers.
/// No viewer can show everything at once with any coherence or clarity.
/// Views must be managed carefully both sequentially and at any given instant.
/// Another function of the view is that of a context to carry out design in.
/// The design changes are applied to the objects in the view and then extended to the underlying
/// reference geometry by a solver. To make sense of this complicated visual data, several display
/// and selection tools are required. To facilitate management, each object and each construction
/// element has a selection priority. There are also means to modify the default priority. To define
/// an environment of dynamic detection, you can use standard filter classes or create your own. A
/// filter questions the owner of the sensitive primitive to determine if it has the desired
/// qualities. If it answers positively, it is kept. If not, it is rejected. The standard filters
/// supplied in AIS include:
/// - AIS_AttributeFilter
/// - AIS_SignatureFilter
/// - AIS_TypeFilter.
/// A set of functions allows you to choose the interactive objects which you want to act on, the
/// selection modes which you want to activate. An interactive object can have a certain number of
/// graphic attributes which are specific to it, such as visualization mode, color, and material. By
/// the same token, the interactive context has a set of graphic attributes, the Drawer which is
/// valid by default for the objects it controls. When an interactive object is visualized, the
/// required graphic attributes are first taken from the object's own Drawer if one exists, or from
/// the context drawer for the others.
/// </summary>
public ref class AIS sealed
    : public Macad::Occt::BaseClass<::AIS>
{

#ifdef Include_AIS_h
public:
    Include_AIS_h
#endif

public:
    AIS(::AIS* nativeInstance)
        : Macad::Occt::BaseClass<::AIS>( nativeInstance, true )
    {}

    AIS(::AIS& nativeInstance)
        : Macad::Occt::BaseClass<::AIS>( &nativeInstance, false )
    {}

    property ::AIS* NativeInstance
    {
        ::AIS* get()
        {
            return static_cast<::AIS*>(_NativeInstance);
        }
    }

public:
    AIS();
}; // class AIS

//---------------------------------------------------------------------
//  Class  AIS_InteractiveContext
//---------------------------------------------------------------------
/// <summary>
/// The Interactive Context allows you to manage graphic behavior and selection of Interactive
/// Objects in one or more viewers. Class methods make this highly transparent. It is essential to
/// remember that an Interactive Object which is already known by the Interactive Context must be
/// modified using Context methods. You can only directly call the methods available for an
/// Interactive Object if it has not been loaded into an Interactive Context.
/// 
/// Each selectable object must specify the selection mode that is
/// responsible for selection of object as a whole (global selection mode).
/// Interactive context itself supports decomposed object selection with selection filters support.
/// By default, global selection mode is equal to 0, but it might be redefined if needed.
/// </summary>
public ref class AIS_InteractiveContext sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_AIS_InteractiveContext_h
public:
    Include_AIS_InteractiveContext_h
#endif

public:
    AIS_InteractiveContext(::AIS_InteractiveContext* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    AIS_InteractiveContext(::AIS_InteractiveContext& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::AIS_InteractiveContext* NativeInstance
    {
        ::AIS_InteractiveContext* get()
        {
            return static_cast<::AIS_InteractiveContext*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// </summary>
    /// @name object display management
    /// Constructs the interactive context object defined by the principal viewer MainViewer.
    AIS_InteractiveContext(Macad::Occt::V3d_Viewer^ MainViewer);
    /// <summary>
    /// Returns the display status of the entity anIobj.
    /// This will be one of the following:
    /// - AIS_DS_Displayed displayed in main viewer
    /// - AIS_DS_Erased    hidden in main viewer
    /// - AIS_DS_Temporary temporarily displayed
    /// - AIS_DS_None      nowhere displayed.
    /// </summary>
    Macad::Occt::PrsMgr_DisplayStatus DisplayStatus(Macad::Occt::AIS_InteractiveObject^ anIobj);
    /// <summary>
    /// Returns the status of the Interactive Context for the view of the Interactive Object.
    /// </summary>
    void Status(Macad::Occt::AIS_InteractiveObject^ anObj, Macad::Occt::TCollection_ExtendedString^ astatus);
    /// <summary>
    /// Returns true if Object is displayed in the interactive context.
    /// </summary>
    bool IsDisplayed(Macad::Occt::AIS_InteractiveObject^ anIobj);
    bool IsDisplayed(Macad::Occt::AIS_InteractiveObject^ aniobj, int aMode);
    /// <summary>
    /// Enable or disable automatic activation of default selection mode while displaying the object.
    /// </summary>
    void SetAutoActivateSelection(bool theIsAuto);
    /// <summary>
    /// Manages displaying the new object should also automatically activate default selection mode;
    /// TRUE by default.
    /// </summary>
    bool GetAutoActivateSelection();
    /// <summary>
    /// Displays the object in this Context using default Display Mode.
    /// This will be the object's default display mode, if there is one. Otherwise, it will be the
    /// context mode. The Interactive Object's default selection mode is activated if
    /// GetAutoActivateSelection() is TRUE. In general, this is 0.
    /// </summary>
    void Display(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// Sets status, display mode and selection mode for specified Object
    /// If theSelectionMode equals -1, theIObj will not be activated: it will be displayed but will
    /// not be selectable.
    /// </summary>
    void Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, Macad::Occt::PrsMgr_DisplayStatus theDispStatus);
    /// <summary>
    /// Sets status, display mode and selection mode for specified Object
    /// If theSelectionMode equals -1, theIObj will not be activated: it will be displayed but will
    /// not be selectable.
    /// </summary>
    void Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer);
    /// <summary>
    /// Allows you to load the Interactive Object with a given selection mode,
    /// and/or with the desired decomposition option, whether the object is visualized or not.
    /// The loaded objects will be selectable but displayable in highlighting only when detected by
    /// the Selector.
    /// </summary>
    void Load(Macad::Occt::AIS_InteractiveObject^ theObj, int theSelectionMode);
    /// <summary>
    /// Allows you to load the Interactive Object with a given selection mode,
    /// and/or with the desired decomposition option, whether the object is visualized or not.
    /// The loaded objects will be selectable but displayable in highlighting only when detected by
    /// the Selector.
    /// </summary>
    void Load(Macad::Occt::AIS_InteractiveObject^ theObj);
    /// <summary>
    /// Hides the object. The object's presentations are simply flagged as invisible and therefore
    /// excluded from redrawing. To show hidden objects, use Display().
    /// </summary>
    void Erase(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// Hides all objects. The object's presentations are simply flagged as invisible and therefore
    /// excluded from redrawing. To show all hidden objects, use DisplayAll().
    /// </summary>
    void EraseAll(bool theToUpdateViewer);
    /// <summary>
    /// Displays all hidden objects.
    /// </summary>
    void DisplayAll(bool theToUpdateViewer);
    /// <summary>
    /// Hides selected objects. The object's presentations are simply flagged as invisible and
    /// therefore excluded from redrawing. To show hidden objects, use Display().
    /// </summary>
    void EraseSelected(bool theToUpdateViewer);
    /// <summary>
    /// Displays current objects.
    /// </summary>
    void DisplaySelected(bool theToUpdateViewer);
    /// <summary>
    /// Empties the graphic presentation of the mode indexed by aMode.
    /// Warning! Removes theIObj. theIObj is still active if it was previously activated.
    /// </summary>
    void ClearPrs(Macad::Occt::AIS_InteractiveObject^ theIObj, int theMode, bool theToUpdateViewer);
    /// <summary>
    /// Removes Object from every viewer.
    /// </summary>
    void Remove(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// Removes all the objects from Context.
    /// </summary>
    void RemoveAll(bool theToUpdateViewer);
    /// <summary>
    /// Recomputes the seen parts presentation of the Object.
    /// If theAllModes equals true, all presentations are present in the object even if unseen.
    /// </summary>
    void Redisplay(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer, bool theAllModes);
    /// <summary>
    /// Recomputes the seen parts presentation of the Object.
    /// If theAllModes equals true, all presentations are present in the object even if unseen.
    /// </summary>
    void Redisplay(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// Recomputes the Prs/Selection of displayed objects of a given type and a given signature.
    /// if signature = -1  doesn't take signature criterion.
    /// </summary>
    void Redisplay(Macad::Occt::AIS_KindOfInteractive theTypeOfObject, int theSignature, bool theToUpdateViewer);
    /// <summary>
    /// Recomputes the displayed presentations, flags the others.
    /// Doesn't update presentations.
    /// </summary>
    void RecomputePrsOnly(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer, bool theAllModes);
    /// <summary>
    /// Recomputes the displayed presentations, flags the others.
    /// Doesn't update presentations.
    /// </summary>
    void RecomputePrsOnly(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// Recomputes the active selections, flags the others.
    /// Doesn't update presentations.
    /// </summary>
    void RecomputeSelectionOnly(Macad::Occt::AIS_InteractiveObject^ anIObj);
    /// <summary>
    /// Updates displayed interactive object by checking and recomputing its flagged as "to be
    /// recomputed" presentation and selection structures. This method does not force any
    /// recomputation on its own. The method recomputes selections even if they are loaded without
    /// activation in particular selector.
    /// </summary>
    void Update(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theUpdateViewer);
    /// <summary>
    /// </summary>
    /// @name highlighting management
    /// Returns default highlight style settings (could be overridden by PrsMgr_PresentableObject).
    /// 
    /// Tip: although highlighting style is defined by Prs3d_Drawer,
    /// only a small set of properties derived from it's base class Graphic3d_PresentationAttributes
    /// will be actually used in most cases.
    /// 
    /// Default highlight style for all types is Aspect_TOHM_COLOR. Other defaults:
    /// - Prs3d_TypeOfHighlight_Dynamic
    /// * Color: Quantity_NOC_CYAN1;
    /// * Layer: Graphic3d_ZLayerId_Top,
    /// object highlighting is drawn on top of main scene within Immediate Layers,
    /// so that V3d_View::RedrawImmediate() will be enough to see update;
    /// - Prs3d_TypeOfHighlight_LocalDynamic
    /// * Color: Quantity_NOC_CYAN1;
    /// * Layer: Graphic3d_ZLayerId_Topmost,
    /// object parts highlighting is drawn on top of main scene within Immediate Layers
    /// with depth cleared (even overlapped geometry will be revealed);
    /// - Prs3d_TypeOfHighlight_Selected
    /// * Color: Quantity_NOC_GRAY80;
    /// * Layer: Graphic3d_ZLayerId_UNKNOWN,
    /// object highlighting is drawn on top of main scene within the same layer
    /// as object itself (e.g. Graphic3d_ZLayerId_Default by default) and increased
    /// priority.
    /// 
    /// <param name="in]">
    /// theStyleType highlight style to modify
    /// </param>
    /// <returns>
    /// drawer associated to specified highlight type
    /// 
    /// </returns>
    /// @sa MoveTo() using Prs3d_TypeOfHighlight_Dynamic and Prs3d_TypeOfHighlight_LocalDynamic types
    /// @sa SelectDetected() using Prs3d_TypeOfHighlight_Selected and
    /// Prs3d_TypeOfHighlight_LocalSelected types
    /// @sa PrsMgr_PresentableObject::DynamicHilightAttributes() overriding
    /// Prs3d_TypeOfHighlight_Dynamic and Prs3d_TypeOfHighlight_LocalDynamic defaults on object level
    /// @sa PrsMgr_PresentableObject::HilightAttributes() overriding Prs3d_TypeOfHighlight_Selected
    /// and Prs3d_TypeOfHighlight_LocalSelected defaults on object level
    Macad::Occt::Prs3d_Drawer^ HighlightStyle(Macad::Occt::Prs3d_TypeOfHighlight theStyleType);
    /// <summary>
    /// Setup highlight style settings.
    /// Tip: it is better modifying existing style returned by method HighlightStyle()
    /// instead of creating a new Prs3d_Drawer to avoid unexpected results due misconfiguration.
    /// 
    /// If a new highlight style is created, its presentation Zlayer should be checked,
    /// otherwise highlighting might not work as expected.
    /// </summary>
    void SetHighlightStyle(Macad::Occt::Prs3d_TypeOfHighlight theStyleType, Macad::Occt::Prs3d_Drawer^ theStyle);
    /// <summary>
    /// Returns current dynamic highlight style settings corresponding to
    /// Prs3d_TypeOfHighlight_Dynamic. This is just a short-cut to
    /// HighlightStyle(Prs3d_TypeOfHighlight_Dynamic).
    /// </summary>
    Macad::Occt::Prs3d_Drawer^ HighlightStyle();
    /// <summary>
    /// Setup the style of dynamic highlighting corrsponding to Prs3d_TypeOfHighlight_Selected.
    /// This is just a short-cut to SetHighlightStyle(Prs3d_TypeOfHighlight_Dynamic,theStyle).
    /// </summary>
    void SetHighlightStyle(Macad::Occt::Prs3d_Drawer^ theStyle);
    /// <summary>
    /// Returns current selection style settings corrsponding to Prs3d_TypeOfHighlight_Selected.
    /// This is just a short-cut to HighlightStyle(Prs3d_TypeOfHighlight_Selected).
    /// </summary>
    Macad::Occt::Prs3d_Drawer^ SelectionStyle();
    /// <summary>
    /// Setup the style of selection highlighting.
    /// This is just a short-cut to SetHighlightStyle(Prs3d_TypeOfHighlight_Selected,theStyle).
    /// </summary>
    void SetSelectionStyle(Macad::Occt::Prs3d_Drawer^ theStyle);
    /// <summary>
    /// Returns highlight style of the object if it is marked as highlighted via global status
    /// </summary>
    /// <param name="in]">
    /// theObj  the object to check
    /// </param>
    bool HighlightStyle(Macad::Occt::AIS_InteractiveObject^ theObj, Macad::Occt::Prs3d_Drawer^ theStyle);
    /// <summary>
    /// Returns highlight style of the owner if it is selected
    /// </summary>
    /// <param name="in]">
    /// theOwner  the owner to check
    /// </param>
    bool HighlightStyle(Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::Prs3d_Drawer^ theStyle);
    /// <summary>
    /// Returns true if the object is marked as highlighted via its global status
    /// </summary>
    /// <param name="in]">
    /// theObj  the object to check
    /// </param>
    bool IsHilighted(Macad::Occt::AIS_InteractiveObject^ theObj);
    /// <summary>
    /// Returns true if the owner is marked as selected
    /// </summary>
    /// <param name="in]">
    /// theOwner  the owner to check
    /// </param>
    bool IsHilighted(Macad::Occt::SelectMgr_EntityOwner^ theOwner);
    /// <summary>
    /// Changes the color of all the lines of the object in view.
    /// </summary>
    void HilightWithColor(Macad::Occt::AIS_InteractiveObject^ theObj, Macad::Occt::Prs3d_Drawer^ theStyle, bool theToUpdateViewer);
    /// <summary>
    /// Removes hilighting from the Object.
    /// </summary>
    void Unhilight(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// </summary>
    /// @name object presence management (View affinity, Layer, Priority)
    /// Returns the display priority of the Object.
    Macad::Occt::Graphic3d_DisplayPriority DisplayPriority(Macad::Occt::AIS_InteractiveObject^ theIObj);
    /// <summary>
    /// Sets the display priority of the seen parts presentation of the Object.
    /// </summary>
    void SetDisplayPriority(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Graphic3d_DisplayPriority thePriority);
    void SetDisplayPriority(Macad::Occt::AIS_InteractiveObject^ theIObj, int thePriority);
    /// <summary>
    /// Get Z layer id set for displayed interactive object.
    /// </summary>
    int GetZLayer(Macad::Occt::AIS_InteractiveObject^ theIObj);
    /// <summary>
    /// Set Z layer id for interactive object.
    /// The Z layers can be used to display temporarily presentations of some object in front of the
    /// other objects in the scene. The ids for Z layers are generated by V3d_Viewer.
    /// </summary>
    void SetZLayer(Macad::Occt::AIS_InteractiveObject^ theIObj, int theLayerId);
    /// <summary>
    /// Setup object visibility in specified view.
    /// Has no effect if object is not displayed in this context.
    /// </summary>
    void SetViewAffinity(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::V3d_View^ theView, bool theIsVisible);
    /// <summary>
    /// </summary>
    /// @name Display Mode management
    /// Returns the Display Mode setting to be used by default.
    int DisplayMode();
    /// <summary>
    /// Sets the display mode of seen Interactive Objects (which have no overridden Display Mode).
    /// </summary>
    void SetDisplayMode(int theMode, bool theToUpdateViewer);
    /// <summary>
    /// Sets the display mode of seen Interactive Objects.
    /// theMode provides the display mode index of the entity theIObj.
    /// </summary>
    void SetDisplayMode(Macad::Occt::AIS_InteractiveObject^ theIObj, int theMode, bool theToUpdateViewer);
    /// <summary>
    /// Unsets the display mode of seen Interactive Objects.
    /// </summary>
    void UnsetDisplayMode(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// </summary>
    /// @name object local transformation management
    /// Puts the location on the initial graphic representation and the selection for the Object.
    void SetLocation(Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::TopLoc_Location^ theLocation);
    /// <summary>
    /// Puts the Object back into its initial position.
    /// </summary>
    void ResetLocation(Macad::Occt::AIS_InteractiveObject^ theObject);
    /// <summary>
    /// Returns true if the Object has a location.
    /// </summary>
    bool HasLocation(Macad::Occt::AIS_InteractiveObject^ theObject);
    /// <summary>
    /// Returns the location of the Object.
    /// </summary>
    Macad::Occt::TopLoc_Location^ Location(Macad::Occt::AIS_InteractiveObject^ theObject);
    /// <summary>
    /// Sets transform persistence.
    /// </summary>
    void SetTransformPersistence(Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
    /// <summary>
    /// </summary>
    /// @name mouse picking logic (detection and dynamic highlighting of entities under cursor)
    /// Setup pixel tolerance for MoveTo() operation.
    /// @sa MoveTo().
    void SetPixelTolerance(int thePrecision);
    /// <summary>
    /// </summary>
    /// @name mouse picking logic (detection and dynamic highlighting of entities under cursor)
    /// Setup pixel tolerance for MoveTo() operation.
    /// @sa MoveTo().
    void SetPixelTolerance();
    /// <summary>
    /// Returns the pixel tolerance, default is 2.
    /// Pixel Tolerance extends sensitivity within MoveTo() operation (picking by point)
    /// and can be adjusted by application based on user input precision (e.g. screen pixel density,
    /// input device precision, etc.).
    /// </summary>
    int PixelTolerance();
    /// <summary>
    /// Allows to manage sensitivity of a particular selection of interactive object theObject
    /// and changes previous sensitivity value of all sensitive entities in selection with theMode
    /// to the given theNewSensitivity.
    /// </summary>
    void SetSelectionSensitivity(Macad::Occt::AIS_InteractiveObject^ theObject, int theMode, int theNewSensitivity);
    /// <summary>
    /// Returns last active View (argument of MoveTo()/Select() methods).
    /// </summary>
    Macad::Occt::V3d_View^ LastActiveView();
    /// <summary>
    /// Relays mouse position in pixels theXPix and theYPix to the interactive context selectors.
    /// This is done by the view theView passing this position to the main viewer and updating it.
    /// If theToRedrawOnUpdate is set to false, callee should call RedrawImmediate() to highlight
    /// detected object.
    /// </summary>
    /// @sa PickingStrategy()
    /// @sa HighlightStyle() defining default dynamic highlight styles of detected owners
    /// (Prs3d_TypeOfHighlight_Dynamic and Prs3d_TypeOfHighlight_LocalDynamic)
    /// @sa PrsMgr_PresentableObject::DynamicHilightAttributes() defining per-object dynamic highlight
    /// style of detected owners (overrides defaults)
    Macad::Occt::AIS_StatusOfDetection MoveTo(int theXPix, int theYPix, Macad::Occt::V3d_View^ theView, bool theToRedrawOnUpdate);
    /// <summary>
    /// Relays axis theAxis to the interactive context selectors.
    /// This is done by the view theView passing this axis to the main viewer and updating it.
    /// If theToRedrawOnUpdate is set to false, callee should call RedrawImmediate() to highlight
    /// detected object.
    /// </summary>
    /// @sa PickingStrategy()
    Macad::Occt::AIS_StatusOfDetection MoveTo(Macad::Occt::Ax1 theAxis, Macad::Occt::V3d_View^ theView, bool theToRedrawOnUpdate);
    /// <summary>
    /// Clears the list of entities detected by MoveTo() and resets dynamic highlighting.
    /// </summary>
    /// <param name="theToRedrawImmediate">
    /// if TRUE, the main Viewer will be redrawn on update
    /// </param>
    /// <returns>
    /// TRUE if viewer needs to be updated (e.g. there were actually dynamically highlighted
    /// entities)
    /// </returns>
    bool ClearDetected(bool theToRedrawImmediate);
    /// <summary>
    /// Clears the list of entities detected by MoveTo() and resets dynamic highlighting.
    /// </summary>
    /// <param name="theToRedrawImmediate">
    /// if TRUE, the main Viewer will be redrawn on update
    /// </param>
    /// <returns>
    /// TRUE if viewer needs to be updated (e.g. there were actually dynamically highlighted
    /// entities)
    /// </returns>
    bool ClearDetected();
    /// <summary>
    /// Returns true if there is a mouse-detected entity in context.
    /// </summary>
    /// @sa DetectedOwner(), HasNextDetected(), HilightPreviousDetected(), HilightNextDetected().
    bool HasDetected();
    /// <summary>
    /// Returns the owner of the detected sensitive primitive which is currently dynamically
    /// highlighted. WARNING! This method is irrelevant to
    /// InitDetected()/MoreDetected()/NextDetected().
    /// </summary>
    /// @sa HasDetected(), HasNextDetected(), HilightPreviousDetected(), HilightNextDetected().
    Macad::Occt::SelectMgr_EntityOwner^ DetectedOwner();
    /// <summary>
    /// Returns the interactive objects last detected in context.
    /// In general this is just a wrapper for
    /// Handle(AIS_InteractiveObject)::DownCast(DetectedOwner()->Selectable()).
    /// </summary>
    /// @sa DetectedOwner()
    Macad::Occt::AIS_InteractiveObject^ DetectedInteractive();
    /// <summary>
    /// Returns true if there is a detected shape in local context.
    /// </summary>
    /// @sa HasDetected(), DetectedShape()
    bool HasDetectedShape();
    /// <summary>
    /// Returns the shape detected in local context.
    /// </summary>
    /// @sa DetectedOwner()
    Macad::Occt::TopoDS_Shape^ DetectedShape();
    /// <summary>
    /// returns True if other entities were detected in the last mouse detection
    /// </summary>
    /// @sa HilightPreviousDetected(), HilightNextDetected().
    bool HasNextDetected();
    /// <summary>
    /// If more than 1 object is detected by the selector, only the "best" owner is hilighted at the
    /// mouse position. This Method allows the user to hilight one after another the other detected
    /// entities. If The method select is called, the selected entity will be the hilighted one!
    /// WARNING: Loop Method. When all the detected entities have been hilighted, the next call will
    /// hilight the first one again.
    /// </summary>
    /// <returns>
    /// the Rank of hilighted entity
    /// </returns>
    /// @sa HasNextDetected(), HilightPreviousDetected().
    int HilightNextDetected(Macad::Occt::V3d_View^ theView, bool theToRedrawImmediate);
    /// <summary>
    /// If more than 1 object is detected by the selector, only the "best" owner is hilighted at the
    /// mouse position. This Method allows the user to hilight one after another the other detected
    /// entities. If The method select is called, the selected entity will be the hilighted one!
    /// WARNING: Loop Method. When all the detected entities have been hilighted, the next call will
    /// hilight the first one again.
    /// </summary>
    /// <returns>
    /// the Rank of hilighted entity
    /// </returns>
    /// @sa HasNextDetected(), HilightPreviousDetected().
    int HilightNextDetected(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Same as previous methods in reverse direction.
    /// </summary>
    /// @sa HasNextDetected(), HilightNextDetected().
    int HilightPreviousDetected(Macad::Occt::V3d_View^ theView, bool theToRedrawImmediate);
    /// <summary>
    /// Same as previous methods in reverse direction.
    /// </summary>
    /// @sa HasNextDetected(), HilightNextDetected().
    int HilightPreviousDetected(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// </summary>
    /// @name iteration through detected entities
    /// Initialization for iteration through mouse-detected objects in
    /// interactive context or in local context if it is opened.
    /// @sa DetectedCurrentOwner(), MoreDetected(), NextDetected().
    void InitDetected();
    /// <summary>
    /// Return TRUE if there is more mouse-detected objects after the current one
    /// during iteration through mouse-detected interactive objects.
    /// </summary>
    /// @sa DetectedCurrentOwner(), InitDetected(), NextDetected().
    bool MoreDetected();
    /// <summary>
    /// Gets next current object during iteration through mouse-detected interactive objects.
    /// </summary>
    /// @sa DetectedCurrentOwner(), InitDetected(), MoreDetected().
    void NextDetected();
    /// <summary>
    /// Returns the owner from detected list pointed by current iterator position.
    /// WARNING! This method is irrelevant to DetectedOwner() which returns last picked Owner
    /// regardless of iterator position!
    /// </summary>
    /// @sa InitDetected(), MoreDetected(), NextDetected().
    Macad::Occt::SelectMgr_EntityOwner^ DetectedCurrentOwner();
    /// <summary>
    /// </summary>
    /// @name Selection management
    /// Adds object in the selection.
    Macad::Occt::AIS_StatusOfPick AddSelect(Macad::Occt::SelectMgr_EntityOwner^ theObject);
    /// <summary>
    /// Adds object in the selection.
    /// </summary>
    Macad::Occt::AIS_StatusOfPick AddSelect(Macad::Occt::AIS_InteractiveObject^ theObject);
    /// <summary>
    /// Selects objects within the bounding rectangle.
    /// Viewer should be explicitly redrawn after selection.
    /// </summary>
    /// <param name="in]">
    /// thePntMin  rectangle lower point (in pixels)
    /// </param>
    /// <param name="in]">
    /// thePntMax  rectangle upper point (in pixels)
    /// </param>
    /// <param name="in]">
    /// theView    active view where rectangle is defined
    /// </param>
    /// <param name="in]">
    /// theSelScheme  selection scheme
    /// </param>
    /// <returns>
    /// picking status
    /// </returns>
    /// @sa StdSelect_ViewerSelector3d::AllowOverlapDetection()
    Macad::Occt::AIS_StatusOfPick SelectRectangle(Macad::Occt::Graphic3d_Vec2i^ thePntMin, Macad::Occt::Graphic3d_Vec2i^ thePntMax, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_SelectionScheme theSelScheme);
    /// <summary>
    /// Selects objects within the bounding rectangle.
    /// Viewer should be explicitly redrawn after selection.
    /// </summary>
    /// <param name="in]">
    /// thePntMin  rectangle lower point (in pixels)
    /// </param>
    /// <param name="in]">
    /// thePntMax  rectangle upper point (in pixels)
    /// </param>
    /// <param name="in]">
    /// theView    active view where rectangle is defined
    /// </param>
    /// <param name="in]">
    /// theSelScheme  selection scheme
    /// </param>
    /// <returns>
    /// picking status
    /// </returns>
    /// @sa StdSelect_ViewerSelector3d::AllowOverlapDetection()
    Macad::Occt::AIS_StatusOfPick SelectRectangle(Macad::Occt::Graphic3d_Vec2i^ thePntMin, Macad::Occt::Graphic3d_Vec2i^ thePntMax, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Select everything found in the polygon defined by bounding polyline.
    /// Viewer should be explicitly redrawn after selection.
    /// </summary>
    /// <param name="in]">
    /// thePolyline   polyline defining polygon bounds (in pixels)
    /// </param>
    /// <param name="in]">
    /// theView       active view where polyline is defined
    /// </param>
    /// <param name="in]">
    /// theSelScheme  selection scheme
    /// </param>
    /// <returns>
    /// picking status
    /// </returns>
    Macad::Occt::AIS_StatusOfPick SelectPolygon(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_SelectionScheme theSelScheme);
    /// <summary>
    /// Select everything found in the polygon defined by bounding polyline.
    /// Viewer should be explicitly redrawn after selection.
    /// </summary>
    /// <param name="in]">
    /// thePolyline   polyline defining polygon bounds (in pixels)
    /// </param>
    /// <param name="in]">
    /// theView       active view where polyline is defined
    /// </param>
    /// <param name="in]">
    /// theSelScheme  selection scheme
    /// </param>
    /// <returns>
    /// picking status
    /// </returns>
    Macad::Occt::AIS_StatusOfPick SelectPolygon(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Selects the topmost object picked by the point in the view,
    /// Viewer should be explicitly redrawn after selection.
    /// </summary>
    /// <param name="in]">
    /// thePnt   point pixel coordinates within the view
    /// </param>
    /// <param name="in]">
    /// theView  active view where point is defined
    /// </param>
    /// <param name="in]">
    /// theSelScheme  selection scheme
    /// </param>
    /// <returns>
    /// picking status
    /// </returns>
    Macad::Occt::AIS_StatusOfPick SelectPoint(Macad::Occt::Graphic3d_Vec2i^ thePnt, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_SelectionScheme theSelScheme);
    /// <summary>
    /// Selects the topmost object picked by the point in the view,
    /// Viewer should be explicitly redrawn after selection.
    /// </summary>
    /// <param name="in]">
    /// thePnt   point pixel coordinates within the view
    /// </param>
    /// <param name="in]">
    /// theView  active view where point is defined
    /// </param>
    /// <param name="in]">
    /// theSelScheme  selection scheme
    /// </param>
    /// <returns>
    /// picking status
    /// </returns>
    Macad::Occt::AIS_StatusOfPick SelectPoint(Macad::Occt::Graphic3d_Vec2i^ thePnt, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Select and hilights the previous detected via AIS_InteractiveContext::MoveTo() method;
    /// unhilights the previous picked.
    /// Viewer should be explicitly redrawn after selection.
    /// </summary>
    /// <param name="in]">
    /// theSelScheme  selection scheme
    /// </param>
    /// <returns>
    /// picking status
    /// 
    /// </returns>
    /// @sa HighlightStyle() defining default highlight styles of selected owners
    /// (Prs3d_TypeOfHighlight_Selected and Prs3d_TypeOfHighlight_LocalSelected)
    /// @sa PrsMgr_PresentableObject::HilightAttributes() defining per-object highlight style of
    /// selected owners (overrides defaults)
    Macad::Occt::AIS_StatusOfPick SelectDetected(Macad::Occt::AIS_SelectionScheme theSelScheme);
    /// <summary>
    /// Select and hilights the previous detected via AIS_InteractiveContext::MoveTo() method;
    /// unhilights the previous picked.
    /// Viewer should be explicitly redrawn after selection.
    /// </summary>
    /// <param name="in]">
    /// theSelScheme  selection scheme
    /// </param>
    /// <returns>
    /// picking status
    /// 
    /// </returns>
    /// @sa HighlightStyle() defining default highlight styles of selected owners
    /// (Prs3d_TypeOfHighlight_Selected and Prs3d_TypeOfHighlight_LocalSelected)
    /// @sa PrsMgr_PresentableObject::HilightAttributes() defining per-object highlight style of
    /// selected owners (overrides defaults)
    Macad::Occt::AIS_StatusOfPick SelectDetected();
    /// <summary>
    /// Returns bounding box of selected objects.
    /// </summary>
    Macad::Occt::Bnd_Box^ BoundingBoxOfSelection(Macad::Occt::V3d_View^ theView);
    Macad::Occt::Bnd_Box^ BoundingBoxOfSelection();
    /// <summary>
    /// Sets list of owner selected/deselected using specified selection scheme.
    /// </summary>
    /// <param name="theOwners">
    /// owners to change selection state
    /// </param>
    /// <param name="theSelScheme">
    /// selection scheme
    /// </param>
    /// <returns>
    /// picking status
    /// </returns>
    Macad::Occt::AIS_StatusOfPick Select(Macad::Occt::AIS_NArray1OfEntityOwner^ theOwners, Macad::Occt::AIS_SelectionScheme theSelScheme);
    /// <summary>
    /// Fits the view correspondingly to the bounds of selected objects.
    /// Infinite objects are ignored if infinite state of AIS_InteractiveObject is set to true.
    /// </summary>
    void FitSelected(Macad::Occt::V3d_View^ theView, double theMargin, bool theToUpdate);
    /// <summary>
    /// Fits the view correspondingly to the bounds of selected objects.
    /// Infinite objects are ignored if infinite state of AIS_InteractiveObject is set to true.
    /// </summary>
    void FitSelected(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Return value specified whether selected object must be hilighted when mouse cursor is moved
    /// above it
    /// </summary>
    /// @sa MoveTo()
    bool ToHilightSelected();
    /// <summary>
    /// Specify whether selected object must be hilighted when mouse cursor is moved above it (in
    /// MoveTo method). By default this value is false and selected object is not hilighted in this
    /// case.
    /// </summary>
    /// @sa MoveTo()
    void SetToHilightSelected(bool toHilight);
    /// <summary>
    /// Returns true if the automatic highlight mode is active; TRUE by default.
    /// </summary>
    /// @sa MoveTo(), Select(), HilightWithColor(), Unhilight()
    bool AutomaticHilight();
    /// <summary>
    /// Sets the highlighting status of detected and selected entities.
    /// This function allows you to disconnect the automatic mode.
    /// 
    /// MoveTo() will fill the list of detected entities
    /// and Select() will set selected state to detected objects regardless of this flag,
    /// but with disabled AutomaticHiligh() their highlighting state will be left unaffected,
    /// so that application will be able performing custom highlighting in a different way, if needed.
    /// 
    /// This API should be distinguished from SelectMgr_SelectableObject::SetAutoHilight()
    /// that is used to implement custom highlighting logic for a specific interactive object class.
    /// 
    /// </summary>
    /// @sa MoveTo(), Select(), HilightWithColor(), Unhilight()
    void SetAutomaticHilight(bool theStatus);
    /// <summary>
    /// Unhighlights previously selected owners and marks them as not selected.
    /// Marks owner given as selected and highlights it.
    /// Performs selection filters check.
    /// </summary>
    void SetSelected(Macad::Occt::SelectMgr_EntityOwner^ theOwners, bool theToUpdateViewer);
    /// <summary>
    /// Puts the interactive object aniObj in the list of selected objects.
    /// Performs selection filters check.
    /// </summary>
    void SetSelected(Macad::Occt::AIS_InteractiveObject^ theObject, bool theToUpdateViewer);
    /// <summary>
    /// Allows to highlight or unhighlight the owner given depending on its selection status
    /// </summary>
    void AddOrRemoveSelected(Macad::Occt::AIS_InteractiveObject^ theObject, bool theToUpdateViewer);
    /// <summary>
    /// Updates Selected state of specified owner without calling HilightSelected().
    /// Has no effect if Selected state is not changed, and redirects to AddOrRemoveSelected()
    /// otherwise.
    /// </summary>
    /// <param name="theOwner">
    /// owner object to set selected state
    /// </param>
    /// <param name="theIsSelected">
    /// new selected state
    /// </param>
    /// <returns>
    /// TRUE if Selected state has been changed
    /// </returns>
    bool SetSelectedState(Macad::Occt::SelectMgr_EntityOwner^ theOwner, bool theIsSelected);
    /// <summary>
    /// Highlights selected objects.
    /// </summary>
    void HilightSelected(bool theToUpdateViewer);
    /// <summary>
    /// Removes highlighting from selected objects.
    /// </summary>
    void UnhilightSelected(bool theToUpdateViewer);
    /// <summary>
    /// Updates the list of selected objects:
    /// i.e. highlights the newly selected ones and unhighlights previously selected objects.
    /// </summary>
    /// @sa HilightSelected().
    void UpdateSelected(bool theToUpdateViewer);
    /// <summary>
    /// Empties previous selected objects in order to get the selected objects detected by the
    /// selector using UpdateSelected.
    /// </summary>
    void ClearSelected(bool theToUpdateViewer);
    /// <summary>
    /// Allows to highlight or unhighlight the owner given depending on its selection status
    /// </summary>
    void AddOrRemoveSelected(Macad::Occt::SelectMgr_EntityOwner^ theOwner, bool theToUpdateViewer);
    /// <summary>
    /// Returns true is the owner given is selected
    /// </summary>
    bool IsSelected(Macad::Occt::SelectMgr_EntityOwner^ theOwner);
    /// <summary>
    /// Returns true is the object given is selected
    /// </summary>
    bool IsSelected(Macad::Occt::AIS_InteractiveObject^ theObj);
    /// <summary>
    /// Returns the first selected object in the list of current selected.
    /// </summary>
    Macad::Occt::AIS_InteractiveObject^ FirstSelectedObject();
    /// <summary>
    /// Count a number of selected entities using InitSelected()+MoreSelected()+NextSelected()
    /// iterator.
    /// </summary>
    /// @sa SelectedOwner(), InitSelected(), MoreSelected(), NextSelected().
    int NbSelected();
    /// <summary>
    /// Initializes a scan of the selected objects.
    /// </summary>
    /// @sa SelectedOwner(), MoreSelected(), NextSelected().
    void InitSelected();
    /// <summary>
    /// Returns true if there is another object found by the scan of the list of selected objects.
    /// </summary>
    /// @sa SelectedOwner(), InitSelected(), NextSelected().
    bool MoreSelected();
    /// <summary>
    /// Continues the scan to the next object in the list of selected objects.
    /// </summary>
    /// @sa SelectedOwner(), InitSelected(), MoreSelected().
    void NextSelected();
    /// <summary>
    /// Returns the owner of the selected entity.
    /// </summary>
    /// @sa InitSelected(), MoreSelected(), NextSelected().
    Macad::Occt::SelectMgr_EntityOwner^ SelectedOwner();
    /// <summary>
    /// Return Handle(AIS_InteractiveObject)::DownCast (SelectedOwner()->Selectable()).
    /// </summary>
    /// @sa SelectedOwner().
    Macad::Occt::AIS_InteractiveObject^ SelectedInteractive();
    /// <summary>
    /// Returns TRUE if the interactive context has a shape selected.
    /// </summary>
    /// @sa SelectedShape().
    bool HasSelectedShape();
    /// <summary>
    /// Returns the selected shape.
    /// Basically it is just a shape returned stored by StdSelect_BRepOwner with graphic
    /// transformation being applied:
    /// </summary>
    /// @code
    /// const Handle(StdSelect_BRepOwner) aBRepOwner = Handle(StdSelect_BRepOwner)::DownCast
    /// (SelectedOwner()); TopoDS_Shape aSelShape     = aBRepOwner->Shape(); TopoDS_Shape
    /// aLocatedShape = aSelShape.Located (aBRepOwner->Location() * aSelShape.Location());
    /// @endcode
    /// @sa SelectedOwner(), HasSelectedShape().
    Macad::Occt::TopoDS_Shape^ SelectedShape();
    /// <summary>
    /// Returns SelectedInteractive()->HasOwner().
    /// </summary>
    /// @sa SelectedOwner().
    bool HasApplicative();
    /// <summary>
    /// Returns SelectedInteractive()->GetOwner().
    /// </summary>
    /// @sa SelectedOwner().
    Macad::Occt::Standard_Transient^ Applicative();
    /// <summary>
    /// </summary>
    /// @name immediate mode rendering
    /// initializes the list of presentations to be displayed
    /// returns False if no local context is opened.
    bool BeginImmediateDraw();
    /// <summary>
    /// returns True if <anIObj> has been stored in the list.
    /// </summary>
    bool ImmediateAdd(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode);
    /// <summary>
    /// returns True if <anIObj> has been stored in the list.
    /// </summary>
    bool ImmediateAdd(Macad::Occt::AIS_InteractiveObject^ theObj);
    /// <summary>
    /// returns True if the immediate display has been done.
    /// </summary>
    bool EndImmediateDraw(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Uses the First Active View of Main Viewer!
    /// returns True if the immediate display has been done.
    /// </summary>
    bool EndImmediateDraw();
    bool IsImmediateModeOn();
    /// <summary>
    /// Redraws immediate structures in all views of the viewer given taking into account its
    /// visibility.
    /// </summary>
    void RedrawImmediate(Macad::Occt::V3d_Viewer^ theViewer);
    /// <summary>
    /// </summary>
    /// @name management of active Selection Modes
    /// Activates or deactivates the selection mode for specified object.
    /// Has no effect if selection mode was already active/deactivated.
    /// <param name="theObj">
    ///         object to activate/deactivate selection mode
    /// </param>
    /// <param name="theMode">
    ///        selection mode to activate/deactivate;
    /// deactivation of -1 selection mode will effectively deactivate all
    /// selection modes; activation of -1 selection mode with
    /// AIS_SelectionModesConcurrency_Single will deactivate all selection
    /// modes, and will has no effect otherwise
    /// </param>
    /// <param name="theToActivate">
    ///  activation/deactivation flag
    /// </param>
    /// <param name="theConcurrency">
    /// specifies how to handle already activated selection modes;
    /// default value (AIS_SelectionModesConcurrency_Multiple) means active
    /// selection modes should be left as is,
    /// AIS_SelectionModesConcurrency_Single can be used if only one selection
    /// mode is expected to be active and
    /// AIS_SelectionModesConcurrency_GlobalOrLocal can be used if either
    /// AIS_InteractiveObject::GlobalSelectionMode() or any combination of Local
    /// selection modes is acceptable; this value is considered only if
    /// theToActivate set to TRUE
    /// </param>
    /// <param name="theIsForce">
    ///     when set to TRUE, the display status will be ignored while activating
    /// selection mode
    /// </param>
    void SetSelectionModeActive(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate, Macad::Occt::AIS_SelectionModesConcurrency theConcurrency, bool theIsForce);
    /// <summary>
    /// </summary>
    /// @name management of active Selection Modes
    /// Activates or deactivates the selection mode for specified object.
    /// Has no effect if selection mode was already active/deactivated.
    /// <param name="theObj">
    ///         object to activate/deactivate selection mode
    /// </param>
    /// <param name="theMode">
    ///        selection mode to activate/deactivate;
    /// deactivation of -1 selection mode will effectively deactivate all
    /// selection modes; activation of -1 selection mode with
    /// AIS_SelectionModesConcurrency_Single will deactivate all selection
    /// modes, and will has no effect otherwise
    /// </param>
    /// <param name="theToActivate">
    ///  activation/deactivation flag
    /// </param>
    /// <param name="theConcurrency">
    /// specifies how to handle already activated selection modes;
    /// default value (AIS_SelectionModesConcurrency_Multiple) means active
    /// selection modes should be left as is,
    /// AIS_SelectionModesConcurrency_Single can be used if only one selection
    /// mode is expected to be active and
    /// AIS_SelectionModesConcurrency_GlobalOrLocal can be used if either
    /// AIS_InteractiveObject::GlobalSelectionMode() or any combination of Local
    /// selection modes is acceptable; this value is considered only if
    /// theToActivate set to TRUE
    /// </param>
    /// <param name="theIsForce">
    ///     when set to TRUE, the display status will be ignored while activating
    /// selection mode
    /// </param>
    void SetSelectionModeActive(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate, Macad::Occt::AIS_SelectionModesConcurrency theConcurrency);
    /// <summary>
    /// </summary>
    /// @name management of active Selection Modes
    /// Activates or deactivates the selection mode for specified object.
    /// Has no effect if selection mode was already active/deactivated.
    /// <param name="theObj">
    ///         object to activate/deactivate selection mode
    /// </param>
    /// <param name="theMode">
    ///        selection mode to activate/deactivate;
    /// deactivation of -1 selection mode will effectively deactivate all
    /// selection modes; activation of -1 selection mode with
    /// AIS_SelectionModesConcurrency_Single will deactivate all selection
    /// modes, and will has no effect otherwise
    /// </param>
    /// <param name="theToActivate">
    ///  activation/deactivation flag
    /// </param>
    /// <param name="theConcurrency">
    /// specifies how to handle already activated selection modes;
    /// default value (AIS_SelectionModesConcurrency_Multiple) means active
    /// selection modes should be left as is,
    /// AIS_SelectionModesConcurrency_Single can be used if only one selection
    /// mode is expected to be active and
    /// AIS_SelectionModesConcurrency_GlobalOrLocal can be used if either
    /// AIS_InteractiveObject::GlobalSelectionMode() or any combination of Local
    /// selection modes is acceptable; this value is considered only if
    /// theToActivate set to TRUE
    /// </param>
    /// <param name="theIsForce">
    ///     when set to TRUE, the display status will be ignored while activating
    /// selection mode
    /// </param>
    void SetSelectionModeActive(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate);
    /// <summary>
    /// Activates the selection mode aMode whose index is given, for the given interactive entity
    /// anIobj.
    /// </summary>
    void Activate(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theIsForce);
    /// <summary>
    /// Activates the selection mode aMode whose index is given, for the given interactive entity
    /// anIobj.
    /// </summary>
    void Activate(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode);
    /// <summary>
    /// Activates the selection mode aMode whose index is given, for the given interactive entity
    /// anIobj.
    /// </summary>
    void Activate(Macad::Occt::AIS_InteractiveObject^ theObj);
    /// <summary>
    /// Activates the given selection mode for the all displayed objects.
    /// </summary>
    void Activate(int theMode, bool theIsForce);
    /// <summary>
    /// Activates the given selection mode for the all displayed objects.
    /// </summary>
    void Activate(int theMode);
    /// <summary>
    /// Deactivates all the activated selection modes of an object.
    /// </summary>
    void Deactivate(Macad::Occt::AIS_InteractiveObject^ theObj);
    /// <summary>
    /// Deactivates all the activated selection modes of the interactive object anIobj with a given
    /// selection mode aMode.
    /// </summary>
    void Deactivate(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode);
    /// <summary>
    /// Deactivates the given selection mode for all displayed objects.
    /// </summary>
    void Deactivate(int theMode);
    /// <summary>
    /// Deactivates all the activated selection mode at all displayed objects.
    /// </summary>
    void Deactivate();
    /// <summary>
    /// Returns the list of activated selection modes.
    /// </summary>
    void ActivatedModes(Macad::Occt::AIS_InteractiveObject^ anIobj, Macad::Occt::TColStd_ListOfInteger^ theList);
    /* Method skipped due to unknown mapping: void EntityOwners(NCollection_Shared<NCollection_IndexedMap<opencascade::SelectMgr_EntityOwner theOwners, AIS_InteractiveObject theIObj, int theMode, ) */
    /* Method skipped due to unknown mapping: void EntityOwners(NCollection_Shared<NCollection_IndexedMap<opencascade::SelectMgr_EntityOwner theOwners, AIS_InteractiveObject theIObj, int theMode, ) */
    /// <summary>
    /// </summary>
    /// @name Selection Filters management
    /// <returns>
    /// the context selection filter type.
    /// </returns>
    Macad::Occt::SelectMgr_FilterType FilterType();
    /// <summary>
    /// Sets the context selection filter type.
    /// SelectMgr_TypeFilter_OR selection filter is used by default.
    /// </summary>
    /// <param name="theFilterType">
    /// the filter type.
    /// </param>
    void SetFilterType(Macad::Occt::SelectMgr_FilterType theFilterType);
    /// <summary>
    /// Returns the list of filters active in a local context.
    /// </summary>
    Macad::Occt::SelectMgr_ListOfFilter^ Filters();
    /// <summary>
    /// </summary>
    /// <returns>
    /// the context selection global context filter.
    /// </returns>
    Macad::Occt::SelectMgr_AndOrFilter^ GlobalFilter();
    /// <summary>
    /// Allows you to add the filter.
    /// </summary>
    void AddFilter(Macad::Occt::SelectMgr_Filter^ theFilter);
    /// <summary>
    /// Removes a filter from context.
    /// </summary>
    void RemoveFilter(Macad::Occt::SelectMgr_Filter^ theFilter);
    /// <summary>
    /// Remove all filters from context.
    /// </summary>
    void RemoveFilters();
    /// <summary>
    /// Return picking strategy; SelectMgr_PickingStrategy_FirstAcceptable by default.
    /// </summary>
    /// @sa MoveTo(), Filters()
    Macad::Occt::SelectMgr_PickingStrategy PickingStrategy();
    /// <summary>
    /// Setup picking strategy - which entities detected by picking line will be accepted, considering
    /// Selection Filters. By default (SelectMgr_PickingStrategy_FirstAcceptable), Selection Filters
    /// reduce the list of entities so that the context accepts topmost in remaining.
    /// 
    /// This means that entities behind non-selectable (by filters) parts can be picked by user.
    /// If this behavior is undesirable, and user wants that non-selectable (by filters) parts
    /// should remain an obstacle for picking, SelectMgr_PickingStrategy_OnlyTopmost can be set
    /// instead.
    /// 
    /// Notice, that since Selection Manager operates only objects registered in it,
    /// SelectMgr_PickingStrategy_OnlyTopmost will NOT prevent picking entities behind
    /// visible by unregistered in Selection Manager presentations (e.g. deactivated).
    /// Hence, SelectMgr_PickingStrategy_OnlyTopmost changes behavior only with Selection Filters
    /// enabled.
    /// </summary>
    void SetPickingStrategy(Macad::Occt::SelectMgr_PickingStrategy theStrategy);
    /// <summary>
    /// </summary>
    /// @name common properties
    /// Returns the default attribute manager.
    /// This contains all the color and line attributes which can be used by interactive objects which
    /// do not have their own attributes.
    Macad::Occt::Prs3d_Drawer^ DefaultDrawer();
    /// <summary>
    /// Sets the default attribute manager; should be set at context creation time.
    /// Warning - this setter doesn't update links to the default drawer of already displayed objects!
    /// </summary>
    void SetDefaultDrawer(Macad::Occt::Prs3d_Drawer^ theDrawer);
    /// <summary>
    /// Returns the current viewer.
    /// </summary>
    Macad::Occt::V3d_Viewer^ CurrentViewer();
    Macad::Occt::SelectMgr_SelectionManager^ SelectionManager();
    Macad::Occt::PrsMgr_PresentationManager^ MainPrsMgr();
    Macad::Occt::SelectMgr_ViewerSelector^ MainSelector();
    /// <summary>
    /// Updates the current viewer.
    /// </summary>
    void UpdateCurrentViewer();
    /// <summary>
    /// Returns the list of displayed objects of a particular Type WhichKind and Signature
    /// WhichSignature. By Default, WhichSignature equals -1. This means that there is a check on type
    /// only.
    /// </summary>
    void DisplayedObjects(Macad::Occt::AIS_ListOfInteractive^ aListOfIO);
    /// <summary>
    /// gives the list of displayed objects of a particular Type and signature.
    /// by Default, <WhichSignature> = -1 means control only on <WhichKind>.
    /// </summary>
    void DisplayedObjects(Macad::Occt::AIS_KindOfInteractive theWhichKind, int theWhichSignature, Macad::Occt::AIS_ListOfInteractive^ theListOfIO);
    /// <summary>
    /// Returns the list theListOfIO of erased objects (hidden objects) particular Type WhichKind and
    /// Signature WhichSignature. By Default, WhichSignature equals 1. This means that there is a
    /// check on type only.
    /// </summary>
    void ErasedObjects(Macad::Occt::AIS_ListOfInteractive^ theListOfIO);
    /// <summary>
    /// gives the list of erased objects (hidden objects)
    /// Type and signature by Default, <WhichSignature> = -1 means control only on <WhichKind>.
    /// </summary>
    void ErasedObjects(Macad::Occt::AIS_KindOfInteractive theWhichKind, int theWhichSignature, Macad::Occt::AIS_ListOfInteractive^ theListOfIO);
    /// <summary>
    /// Returns the list theListOfIO of objects with indicated display status particular Type
    /// WhichKind and Signature WhichSignature. By Default, WhichSignature equals 1. This means that
    /// there is a check on type only.
    /// </summary>
    void ObjectsByDisplayStatus(Macad::Occt::PrsMgr_DisplayStatus theStatus, Macad::Occt::AIS_ListOfInteractive^ theListOfIO);
    /// <summary>
    /// gives the list of objects with indicated display status
    /// Type and signature by Default, <WhichSignature> = -1 means control only on <WhichKind>.
    /// </summary>
    void ObjectsByDisplayStatus(Macad::Occt::AIS_KindOfInteractive WhichKind, int WhichSignature, Macad::Occt::PrsMgr_DisplayStatus theStatus, Macad::Occt::AIS_ListOfInteractive^ theListOfIO);
    /// <summary>
    /// fills <aListOfIO> with objects of a particular Type and Signature with no consideration of
    /// display status. by Default, <WhichSignature> = -1 means control only on <WhichKind>. if
    /// <WhichKind> = AIS_KindOfInteractive_None and <WhichSignature> = -1, all the objects are put
    /// into the list.
    /// </summary>
    void ObjectsInside(Macad::Occt::AIS_ListOfInteractive^ aListOfIO, Macad::Occt::AIS_KindOfInteractive WhichKind, int WhichSignature);
    /// <summary>
    /// fills <aListOfIO> with objects of a particular Type and Signature with no consideration of
    /// display status. by Default, <WhichSignature> = -1 means control only on <WhichKind>. if
    /// <WhichKind> = AIS_KindOfInteractive_None and <WhichSignature> = -1, all the objects are put
    /// into the list.
    /// </summary>
    void ObjectsInside(Macad::Occt::AIS_ListOfInteractive^ aListOfIO, Macad::Occt::AIS_KindOfInteractive WhichKind);
    /// <summary>
    /// fills <aListOfIO> with objects of a particular Type and Signature with no consideration of
    /// display status. by Default, <WhichSignature> = -1 means control only on <WhichKind>. if
    /// <WhichKind> = AIS_KindOfInteractive_None and <WhichSignature> = -1, all the objects are put
    /// into the list.
    /// </summary>
    void ObjectsInside(Macad::Occt::AIS_ListOfInteractive^ aListOfIO);
    /* Method skipped due to unknown mapping: Iterator ObjectIterator() */
    /// <summary>
    /// Rebuilds 1st level of BVH selection forcibly
    /// </summary>
    void RebuildSelectionStructs();
    /// <summary>
    /// Disconnects theObjToDisconnect from theAssembly and removes dependent selection structures
    /// </summary>
    void Disconnect(Macad::Occt::AIS_InteractiveObject^ theAssembly, Macad::Occt::AIS_InteractiveObject^ theObjToDisconnect);
    /// <summary>
    /// Disconnects theObjToDisconnect from theAssembly and removes dependent selection structures
    /// </summary>
    void Disconnect(Macad::Occt::AIS_InteractiveObject^ theAssembly);
    /// <summary>
    /// Query objects visible or hidden in specified view due to affinity mask.
    /// </summary>
    void ObjectsForView(Macad::Occt::AIS_ListOfInteractive^ theListOfIO, Macad::Occt::V3d_View^ theView, bool theIsVisibleInView, Macad::Occt::PrsMgr_DisplayStatus theStatus);
    /// <summary>
    /// Query objects visible or hidden in specified view due to affinity mask.
    /// </summary>
    void ObjectsForView(Macad::Occt::AIS_ListOfInteractive^ theListOfIO, Macad::Occt::V3d_View^ theView, bool theIsVisibleInView);
    /// <summary>
    /// Return rotation gravity point.
    /// </summary>
    Macad::Occt::Pnt GravityPoint(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// </summary>
    /// @name debug visualization
    /// Visualization of sensitives - for debugging purposes!
    void DisplayActiveSensitive(Macad::Occt::V3d_View^ aView);
    /// <summary>
    /// Clear visualization of sensitives.
    /// </summary>
    void ClearActiveSensitive(Macad::Occt::V3d_View^ aView);
    /// <summary>
    /// Visualization of sensitives - for debugging purposes!
    /// </summary>
    void DisplayActiveSensitive(Macad::Occt::AIS_InteractiveObject^ anObject, Macad::Occt::V3d_View^ aView);
    /// <summary>
    /// </summary>
    /// @name common object display attributes
    /// Sets the graphic attributes of the interactive object, such as visualization mode, color, and
    /// material.
    void SetLocalAttributes(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Prs3d_Drawer^ theDrawer, bool theToUpdateViewer);
    /// <summary>
    /// Removes the settings for local attributes of the Object and returns to defaults.
    /// </summary>
    void UnsetLocalAttributes(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// change the current facing model apply on polygons for SetColor(), SetTransparency(),
    /// SetMaterial() methods default facing model is Aspect_TOFM_TWO_SIDE. This mean that attributes
    /// is applying both on the front and back face.
    /// </summary>
    void SetCurrentFacingModel(Macad::Occt::AIS_InteractiveObject^ aniobj, Macad::Occt::Aspect_TypeOfFacingModel aModel);
    /// <summary>
    /// change the current facing model apply on polygons for SetColor(), SetTransparency(),
    /// SetMaterial() methods default facing model is Aspect_TOFM_TWO_SIDE. This mean that attributes
    /// is applying both on the front and back face.
    /// </summary>
    void SetCurrentFacingModel(Macad::Occt::AIS_InteractiveObject^ aniobj);
    /// <summary>
    /// Returns true if a view of the Interactive Object has color.
    /// </summary>
    bool HasColor(Macad::Occt::AIS_InteractiveObject^ aniobj);
    /// <summary>
    /// Returns the color of the Object in the interactive context.
    /// </summary>
    void Color(Macad::Occt::AIS_InteractiveObject^ aniobj, Macad::Occt::Quantity_Color^ acolor);
    /// <summary>
    /// Sets the color of the selected entity.
    /// </summary>
    void SetColor(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Quantity_Color^ theColor, bool theToUpdateViewer);
    /// <summary>
    /// Removes the color selection for the selected entity.
    /// </summary>
    void UnsetColor(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// Returns the width of the Interactive Object in the interactive context.
    /// </summary>
    double Width(Macad::Occt::AIS_InteractiveObject^ aniobj);
    /// <summary>
    /// Sets the width of the Object.
    /// </summary>
    void SetWidth(Macad::Occt::AIS_InteractiveObject^ theIObj, double theValue, bool theToUpdateViewer);
    /// <summary>
    /// Removes the width setting of the Object.
    /// </summary>
    void UnsetWidth(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// Provides the type of material setting for the view of the Object.
    /// </summary>
    void SetMaterial(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Graphic3d_MaterialAspect^ theMaterial, bool theToUpdateViewer);
    /// <summary>
    /// Removes the type of material setting for viewing the Object.
    /// </summary>
    void UnsetMaterial(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// Provides the transparency settings for viewing the Object.
    /// The transparency value aValue may be between 0.0, opaque, and 1.0, fully transparent.
    /// </summary>
    void SetTransparency(Macad::Occt::AIS_InteractiveObject^ theIObj, double theValue, bool theToUpdateViewer);
    /// <summary>
    /// Removes the transparency settings for viewing the Object.
    /// </summary>
    void UnsetTransparency(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// Sets up polygon offsets for the given AIS_InteractiveObject.
    /// It simply calls AIS_InteractiveObject::SetPolygonOffsets().
    /// </summary>
    void SetPolygonOffsets(Macad::Occt::AIS_InteractiveObject^ theIObj, int theMode, float theFactor, float theUnits, bool theToUpdateViewer);
    /// <summary>
    /// Simply calls AIS_InteractiveObject::HasPolygonOffsets().
    /// </summary>
    bool HasPolygonOffsets(Macad::Occt::AIS_InteractiveObject^ anObj);
    /// <summary>
    /// Retrieves current polygon offsets settings for Object.
    /// </summary>
    void PolygonOffsets(Macad::Occt::AIS_InteractiveObject^ anObj, int% aMode, float% aFactor, float% aUnits);
    /// <summary>
    /// </summary>
    /// @name trihedron display attributes
    /// Sets the size aSize of the trihedron.
    /// Is used to change the default value 100 mm for display of trihedra.
    /// Use of this function in one of your own interactive objects requires a call to the Compute
    /// function of the new class. This will recalculate the presentation for every trihedron
    /// displayed.
    void SetTrihedronSize(double theSize, bool theToUpdateViewer);
    /// <summary>
    /// returns the current value of trihedron size.
    /// </summary>
    double TrihedronSize();
    /// <summary>
    /// </summary>
    /// @name plane display attributes
    /// Sets the plane size defined by the length in the X direction XSize and that in the Y direction
    /// YSize.
    void SetPlaneSize(double theSizeX, double theSizeY, bool theToUpdateViewer);
    /// <summary>
    /// Sets the plane size aSize.
    /// </summary>
    void SetPlaneSize(double theSize, bool theToUpdateViewer);
    /// <summary>
    /// Returns true if the length in the X direction XSize is the same as that in the Y direction
    /// YSize.
    /// </summary>
    bool PlaneSize(double% XSize, double% YSize);
    /// <summary>
    /// </summary>
    /// @name tessellation deviation properties for automatic triangulation
    /// Sets the deviation coefficient theCoefficient.
    /// Drawings of curves or patches are made with respect to a maximal chordal deviation.
    /// A Deviation coefficient is used in the shading display mode.
    /// The shape is seen decomposed into triangles.
    /// These are used to calculate reflection of light from the surface of the object.
    /// The triangles are formed from chords of the curves in the shape.
    /// The deviation coefficient theCoefficient gives the highest value of the angle with which a
    /// chord can deviate from a tangent to a curve. If this limit is reached, a new triangle is
    /// begun. This deviation is absolute and is set through the method: SetMaximalChordialDeviation.
    /// The default value is 0.001.
    /// In drawing shapes, however, you are allowed to ask for a relative deviation.
    /// This deviation will be: SizeOfObject * DeviationCoefficient.
    void SetDeviationCoefficient(Macad::Occt::AIS_InteractiveObject^ theIObj, double theCoefficient, bool theToUpdateViewer);
    void SetDeviationAngle(Macad::Occt::AIS_InteractiveObject^ theIObj, double theAngle, bool theToUpdateViewer);
    /// <summary>
    /// Calls the AIS_Shape SetAngleAndDeviation to set both Angle and Deviation coefficients
    /// </summary>
    void SetAngleAndDeviation(Macad::Occt::AIS_InteractiveObject^ theIObj, double theAngle, bool theToUpdateViewer);
    /// <summary>
    /// Sets the deviation coefficient theCoefficient.
    /// Drawings of curves or patches are made with respect to a maximal chordal deviation.
    /// A Deviation coefficient is used in the shading display mode.
    /// The shape is seen decomposed into triangles.
    /// These are used to calculate reflection of light from the surface of the object.
    /// The triangles are formed from chords of the curves in the shape.
    /// The deviation coefficient theCoefficient gives the highest value of the angle with which a
    /// chord can deviate from a tangent to a curve. If this limit is reached, a new triangle is
    /// begun. This deviation is absolute and is set through the method: SetMaximalChordialDeviation.
    /// The default value is 0.001.
    /// In drawing shapes, however, you are allowed to ask for a relative deviation.
    /// This deviation will be: SizeOfObject * DeviationCoefficient.
    /// </summary>
    void SetDeviationCoefficient(double theCoefficient);
    /// <summary>
    /// Returns the deviation coefficient.
    /// Drawings of curves or patches are made with respect to a maximal chordal deviation.
    /// A Deviation coefficient is used in the shading display mode.
    /// The shape is seen decomposed into triangles.
    /// These are used to calculate reflection of light from the surface of the object.
    /// The triangles are formed from chords of the curves in the shape.
    /// The deviation coefficient gives the highest value of the angle with which a chord can deviate
    /// from a tangent to a curve. If this limit is reached, a new triangle is begun. This deviation
    /// is absolute and is set through Prs3d_Drawer::SetMaximalChordialDeviation. The default value is
    /// 0.001. In drawing shapes, however, you are allowed to ask for a relative deviation. This
    /// deviation will be: SizeOfObject * DeviationCoefficient.
    /// </summary>
    double DeviationCoefficient();
    /// <summary>
    /// default 20 degrees
    /// </summary>
    void SetDeviationAngle(double theAngle);
    double DeviationAngle();
    /// <summary>
    /// </summary>
    /// @name HLR (Hidden Line Removal) display attributes
    /// Initializes hidden line aspect in the default drawing tool, or Drawer.
    /// The default values are:
    /// Color: Quantity_NOC_YELLOW
    /// Type of line: Aspect_TOL_DASH
    /// Width: 1.
    Macad::Occt::Prs3d_LineAspect^ HiddenLineAspect();
    /// <summary>
    /// Sets the hidden line aspect anAspect.
    /// Aspect defines display attributes for hidden lines in HLR projections.
    /// </summary>
    void SetHiddenLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect);
    /// <summary>
    /// returns Standard_True if the hidden lines are to be drawn.
    /// By default the hidden lines are not drawn.
    /// </summary>
    bool DrawHiddenLine();
    void EnableDrawHiddenLine();
    void DisableDrawHiddenLine();
    /// <summary>
    /// </summary>
    /// @name iso-line display attributes
    /// Sets the number of U and V isoparameters displayed.
    void SetIsoNumber(int NbIsos, Macad::Occt::AIS_TypeOfIso WhichIsos);
    /// <summary>
    /// </summary>
    /// @name iso-line display attributes
    /// Sets the number of U and V isoparameters displayed.
    void SetIsoNumber(int NbIsos);
    /// <summary>
    /// Returns the number of U and V isoparameters displayed.
    /// </summary>
    int IsoNumber(Macad::Occt::AIS_TypeOfIso WhichIsos);
    /// <summary>
    /// Returns the number of U and V isoparameters displayed.
    /// </summary>
    int IsoNumber();
    /// <summary>
    /// Returns True if drawing isoparameters on planes is enabled.
    /// </summary>
    void IsoOnPlane(bool theToSwitchOn);
    /// <summary>
    /// Returns True if drawing isoparameters on planes is enabled.
    /// if <forUIsos> = False,
    /// </summary>
    bool IsoOnPlane();
    /// <summary>
    /// Enables or disables on-triangulation build for isolines for a particular object.
    /// In case if on-triangulation builder is disabled, default on-plane builder will compute
    /// isolines for the object given.
    /// </summary>
    void IsoOnTriangulation(bool theIsEnabled, Macad::Occt::AIS_InteractiveObject^ theObject);
    /// <summary>
    /// Enables or disables on-triangulation build for isolines for default drawer.
    /// In case if on-triangulation builder is disabled, default on-plane builder will compute
    /// isolines for the object given.
    /// </summary>
    void IsoOnTriangulation(bool theToSwitchOn);
    /// <summary>
    /// Returns true if drawing isolines on triangulation algorithm is enabled.
    /// </summary>
    bool IsoOnTriangulation();
    /// <summary>
    /// </summary>
    /// @name obsolete methods
    void Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, bool theToAllowDecomposition, Macad::Occt::PrsMgr_DisplayStatus theDispStatus);
    /// <summary>
    /// </summary>
    /// @name obsolete methods
    void Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, bool theToAllowDecomposition);
    void Load(Macad::Occt::AIS_InteractiveObject^ theObj, int theSelectionMode, bool parameter1);
    /// <summary>
    /// Updates the display in the viewer to take dynamic detection into account.
    /// On dynamic detection by the mouse cursor, sensitive primitives are highlighted.
    /// The highlight color of entities detected by mouse movement is white by default.
    /// </summary>
    void Hilight(Macad::Occt::AIS_InteractiveObject^ theObj, bool theIsToUpdateViewer);
    /// <summary>
    /// Sets the graphic basic aspect to the current presentation of ALL selected objects.
    /// </summary>
    void SetSelectedAspect(Macad::Occt::Prs3d_BasicAspect^ theAspect, bool theToUpdateViewer);
    /// <summary>
    /// Selects everything found in the bounding rectangle defined by the pixel minima and maxima,
    /// XPMin, YPMin, XPMax, and YPMax in the view. The objects detected are passed to the main
    /// viewer, which is then updated.
    /// </summary>
    Macad::Occt::AIS_StatusOfPick Select(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer);
    /// <summary>
    /// polyline selection; clears the previous picked list
    /// </summary>
    Macad::Occt::AIS_StatusOfPick Select(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer);
    /// <summary>
    /// Stores and hilights the previous detected; Unhilights the previous picked.
    /// </summary>
    /// @sa MoveTo().
    Macad::Occt::AIS_StatusOfPick Select(bool theToUpdateViewer);
    /// <summary>
    /// Adds the last detected to the list of previous picked.
    /// If the last detected was already declared as picked, removes it from the Picked List.
    /// </summary>
    /// @sa MoveTo().
    Macad::Occt::AIS_StatusOfPick ShiftSelect(bool theToUpdateViewer);
    /// <summary>
    /// Adds the last detected to the list of previous picked.
    /// If the last detected was already declared as picked, removes it from the Picked List.
    /// </summary>
    Macad::Occt::AIS_StatusOfPick ShiftSelect(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer);
    /// <summary>
    /// Rectangle of selection; adds new detected entities into the picked list,
    /// removes the detected entities that were already stored.
    /// </summary>
    Macad::Occt::AIS_StatusOfPick ShiftSelect(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer);
    /// <summary>
    /// Updates the view of the current object in open context.
    /// Objects selected when there is no open local context are called current objects; those
    /// selected in open local context, selected objects.
    /// </summary>
    void SetCurrentObject(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// Allows to add or remove the object given to the list of current and highlight/unhighlight it
    /// correspondingly. Is valid for global context only; for local context use method
    /// AddOrRemoveSelected. Since this method makes sense only for neutral point selection of a whole
    /// object, if 0 selection of the object is empty this method simply does nothing.
    /// </summary>
    void AddOrRemoveCurrentObject(Macad::Occt::AIS_InteractiveObject^ theObj, bool theIsToUpdateViewer);
    /// <summary>
    /// Updates the list of current objects, i.e. hilights new current objects, removes hilighting
    /// from former current objects. Objects selected when there is no open local context are called
    /// current objects; those selected in open local context, selected objects.
    /// </summary>
    void UpdateCurrent();
    /// <summary>
    /// Returns true if there is a non-null interactive object in Neutral Point.
    /// Objects selected when there is no open local context are called current objects;
    /// those selected in open local context, selected objects.
    /// </summary>
    bool IsCurrent(Macad::Occt::AIS_InteractiveObject^ theObject);
    /// <summary>
    /// Initializes a scan of the current selected objects in Neutral Point.
    /// Objects selected when there is no open local context are called current objects; those
    /// selected in open local context, selected objects.
    /// </summary>
    void InitCurrent();
    /// <summary>
    /// Returns true if there is another object found by the scan of the list of current objects.
    /// Objects selected when there is no open local context are called current objects; those
    /// selected in open local context, selected objects.
    /// </summary>
    bool MoreCurrent();
    /// <summary>
    /// Continues the scan to the next object in the list of current objects.
    /// Objects selected when there is no open local context are called current objects; those
    /// selected in open local context, selected objects.
    /// </summary>
    void NextCurrent();
    /// <summary>
    /// Returns the current interactive object.
    /// Objects selected when there is no open local context are called current objects; those
    /// selected in open local context, selected objects.
    /// </summary>
    Macad::Occt::AIS_InteractiveObject^ Current();
    int NbCurrents();
    /// <summary>
    /// Highlights current objects.
    /// Objects selected when there is no open local context are called current objects; those
    /// selected in open local context, selected objects.
    /// </summary>
    void HilightCurrents(bool theToUpdateViewer);
    /// <summary>
    /// Removes highlighting from current objects.
    /// Objects selected when there is no open local context are called current objects; those
    /// selected in open local context, selected objects.
    /// </summary>
    void UnhilightCurrents(bool theToUpdateViewer);
    /// <summary>
    /// Empties previous current objects in order to get the current objects detected by the selector
    /// using UpdateCurrent. Objects selected when there is no open local context are called current
    /// objects; those selected in open local context, selected objects.
    /// </summary>
    void ClearCurrents(bool theToUpdateViewer);
    /// <summary>
    /// </summary>
    /// <returns>
    /// current mouse-detected shape or empty (null) shape, if current interactive object
    /// is not a shape (AIS_Shape) or there is no current mouse-detected interactive object at all.
    /// </returns>
    /// @sa DetectedCurrentOwner(), InitDetected(), MoreDetected(), NextDetected().
    Macad::Occt::TopoDS_Shape^ DetectedCurrentShape();
    /// <summary>
    /// </summary>
    /// <returns>
    /// current mouse-detected interactive object or null object, if there is no currently
    /// detected interactives
    /// </returns>
    /// @sa DetectedCurrentOwner(), InitDetected(), MoreDetected(), NextDetected().
    Macad::Occt::AIS_InteractiveObject^ DetectedCurrentObject();
    /// <summary>
    /// </summary>
    /// @name sub-intensity management (deprecated)
    /// Sub-intensity allows temporary highlighting of particular objects with specified color in a
    /// manner of selection highlight, but without actual selection (e.g., global status and owner's
    /// selection state will not be updated). The method returns the color of such highlighting. By
    /// default, it is Quantity_NOC_GRAY40.
    Macad::Occt::Quantity_Color^ SubIntensityColor();
    /// <summary>
    /// Sub-intensity allows temporary highlighting of particular objects with specified color in a
    /// manner of selection highlight, but without actual selection (e.g., global status and owner's
    /// selection state will not be updated). The method sets up the color for such highlighting. By
    /// default, this is Quantity_NOC_GRAY40.
    /// </summary>
    void SetSubIntensityColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Highlights, and removes highlights from, the displayed object which is displayed at Neutral
    /// Point with subintensity color. Available only for active local context. There is no effect if
    /// there is no local context. If a local context is open, the presentation of the Interactive
    /// Object activates the selection mode.
    /// </summary>
    void SubIntensityOn(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// Removes the subintensity option for the entity.
    /// If a local context is open, the presentation of the Interactive Object activates the selection
    /// mode.
    /// </summary>
    void SubIntensityOff(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer);
    /// <summary>
    /// Returns selection instance
    /// </summary>
    Macad::Occt::AIS_Selection^ Selection();
    /// <summary>
    /// Sets selection instance to manipulate a container of selected owners
    /// </summary>
    /// <param name="theSelection">
    /// an instance of the selection
    /// </param>
    void SetSelection(Macad::Occt::AIS_Selection^ theSelection);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::AIS_InteractiveContext^ CreateDowncasted(::AIS_InteractiveContext* instance);
}; // class AIS_InteractiveContext

//---------------------------------------------------------------------
//  Class  AIS_InteractiveObject
//---------------------------------------------------------------------
/// <summary>
/// Defines a class of objects with display and selection services.
/// Entities which are visualized and selected are Interactive Objects.
/// Specific attributes of entities such as arrow aspect for dimensions must be loaded in a
/// Prs3d_Drawer.
/// 
/// You can make use of classes of standard Interactive Objects for which all necessary methods have
/// already been programmed, or you can implement your own classes of Interactive Objects. Key
/// interface methods to be implemented by every Interactive Object:
/// * Presentable Object (PrsMgr_PresentableObject)
/// Consider defining an enumeration of supported Display Mode indexes for particular Interactive
/// Object or class of Interactive Objects.
/// - AcceptDisplayMode() accepting display modes implemented by this object;
/// - Compute() computing presentation for the given display mode index;
/// * Selectable Object (SelectMgr_SelectableObject)
/// Consider defining an enumeration of supported Selection Mode indexes for particular
/// Interactive Object or class of Interactive Objects.
/// - ComputeSelection() computing selectable entities for the given selection mode index.
/// </summary>
public ref class AIS_InteractiveObject
    : public Macad::Occt::SelectMgr_SelectableObject
{

#ifdef Include_AIS_InteractiveObject_h
public:
    Include_AIS_InteractiveObject_h
#endif

protected:
    AIS_InteractiveObject(InitMode init)
        : Macad::Occt::SelectMgr_SelectableObject( init )
    {}

public:
    AIS_InteractiveObject(::AIS_InteractiveObject* nativeInstance)
        : Macad::Occt::SelectMgr_SelectableObject( nativeInstance )
    {}

    AIS_InteractiveObject(::AIS_InteractiveObject& nativeInstance)
        : Macad::Occt::SelectMgr_SelectableObject( nativeInstance )
    {}

    property ::AIS_InteractiveObject* NativeInstance
    {
        ::AIS_InteractiveObject* get()
        {
            return static_cast<::AIS_InteractiveObject*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns the kind of Interactive Object; AIS_KindOfInteractive_None by default.
    /// </summary>
    Macad::Occt::AIS_KindOfInteractive Type();
    /// <summary>
    /// Specifies additional characteristics of Interactive Object of Type(); -1 by default.
    /// Among the datums, this signature is attributed to the shape.
    /// The remaining datums have the following default signatures:
    /// - Point          signature 1
    /// - Axis           signature 2
    /// - Trihedron      signature 3
    /// - PlaneTrihedron signature 4
    /// - Line           signature 5
    /// - Circle         signature 6
    /// - Plane          signature 7.
    /// </summary>
    int Signature();
    /// <summary>
    /// Updates the active presentation; if <AllModes> = Standard_True
    /// all the presentations inside are recomputed.
    /// IMPORTANT: It is preferable to call Redisplay method of
    /// corresponding AIS_InteractiveContext instance for cases when it
    /// is accessible. This method just redirects call to myCTXPtr,
    /// so this class field must be up to date for proper result.
    /// </summary>
    void Redisplay(bool AllModes);
    /// <summary>
    /// Updates the active presentation; if <AllModes> = Standard_True
    /// all the presentations inside are recomputed.
    /// IMPORTANT: It is preferable to call Redisplay method of
    /// corresponding AIS_InteractiveContext instance for cases when it
    /// is accessible. This method just redirects call to myCTXPtr,
    /// so this class field must be up to date for proper result.
    /// </summary>
    void Redisplay();
    /// <summary>
    /// Indicates whether the Interactive Object has a pointer to an interactive context.
    /// </summary>
    bool HasInteractiveContext();
    /// <summary>
    /// Returns the context pointer to the interactive context.
    /// </summary>
    Macad::Occt::AIS_InteractiveContext^ InteractiveContext();
    /// <summary>
    /// Sets the interactive context aCtx and provides a link
    /// to the default drawing tool or "Drawer" if there is none.
    /// </summary>
    void SetContext(Macad::Occt::AIS_InteractiveContext^ aCtx);
    /// <summary>
    /// Returns true if the object has an owner attributed to it.
    /// The owner can be a shape for a set of sub-shapes or a sub-shape for sub-shapes which it is
    /// composed of, and takes the form of a transient.
    /// </summary>
    bool HasOwner();
    /// <summary>
    /// Returns the owner of the Interactive Object.
    /// The owner can be a shape for a set of sub-shapes or
    /// a sub-shape for sub-shapes which it is composed of,
    /// and takes the form of a transient.
    /// There are two types of owners:
    /// -   Direct owners, decomposition shapes such as
    /// edges, wires, and faces.
    /// -   Users, presentable objects connecting to sensitive
    /// primitives, or a shape which has been decomposed.
    /// </summary>
    Macad::Occt::Standard_Transient^ GetOwner();
    /// <summary>
    /// Allows you to attribute the owner theApplicativeEntity to
    /// an Interactive Object. This can be a shape for a set of
    /// sub-shapes or a sub-shape for sub-shapes which it
    /// is composed of. The owner takes the form of a transient.
    /// </summary>
    void SetOwner(Macad::Occt::Standard_Transient^ theApplicativeEntity);
    /// <summary>
    /// Each Interactive Object has methods which allow us to attribute an Owner to it in the form of
    /// a Transient. This method removes the owner from the graphic entity.
    /// </summary>
    void ClearOwner();
    /// <summary>
    /// Drag object in the viewer.
    /// </summary>
    /// <param name="in]">
    /// theCtx       interactive context
    /// </param>
    /// <param name="in]">
    /// theView      active View
    /// </param>
    /// <param name="in]">
    /// theOwner     the owner of detected entity
    /// </param>
    /// <param name="in]">
    /// theDragFrom  drag start point
    /// </param>
    /// <param name="in]">
    /// theDragTo    drag end point
    /// </param>
    /// <param name="in]">
    /// theAction    drag action
    /// </param>
    /// <returns>
    /// FALSE if object rejects dragging action (e.g. AIS_DragAction_Start)
    /// </returns>
    bool ProcessDragging(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::Graphic3d_Vec2i^ theDragFrom, Macad::Occt::Graphic3d_Vec2i^ theDragTo, Macad::Occt::AIS_DragAction theAction);
    /// <summary>
    /// Returns the context pointer to the interactive context.
    /// </summary>
    Macad::Occt::AIS_InteractiveContext^ GetContext();
    /// <summary>
    /// Returns TRUE when this object has a presentation in the current DisplayMode()
    /// </summary>
    bool HasPresentation();
    /// <summary>
    /// Returns the current presentation of this object according to the current DisplayMode()
    /// </summary>
    Macad::Occt::Graphic3d_Structure^ Presentation();
    /// <summary>
    /// Sets the graphic basic aspect to the current presentation.
    /// </summary>
    void SetAspect(Macad::Occt::Prs3d_BasicAspect^ anAspect);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::AIS_InteractiveObject^ CreateDowncasted(::AIS_InteractiveObject* instance);
}; // class AIS_InteractiveObject

//---------------------------------------------------------------------
//  Class  AIS_Animation
//---------------------------------------------------------------------
/// <summary>
/// Class represents a basic animation class.
/// AIS_Animation can be used as:
/// 
/// - Animation Implementor
/// Sub-classes should override method AIS_Animation::update() to perform specific animation.
/// AIS package provides limited number of such animation atoms - classes AIS_AnimationObject and
/// AIS_AnimationCamera, which could be enough for defining a simple animation. In general case,
/// application is expected defining own AIS_Animation sub-classes implementing
/// application-specific animation logic (e.g. another interpolation or another kind of
/// transformations - like color transition and others). The basic conception of
/// AIS_Animation::update() is defining an exact scene state for the current presentation
/// timestamp, providing a smooth and continuous animation well defined at any time step and in
/// any direction. So that a time difference between two sequential drawn Viewer frames can vary
/// from frame to frame without visual artifacts, increasing rendering framerate would not lead to
/// animation being executed too fast and low framerate (on slow hardware) would not lead to
/// animation played longer than defined duration. Hence, implementation should avoid usage of
/// incremental step logic or should apply it very carefully.
/// 
/// - Animation Container
/// AIS_Animation (no sub-classing) can be used to aggregate a sequence of Animation items
/// (children). Each children should be defined with its own duration and start time (presentation
/// timestamp). It is possible defining collection of nested AIS_Animation items, so that within
/// each container level children define start playback time relative to its holder.
/// 
/// - Animation playback Controller
/// It is suggested that application would define a single AIS_Animation instance (optional
/// sub-classing) for controlling animation playback as whole. Such controller should be filled in
/// by other AIS_Animation as children objects, and will be managed by application by calling
/// StartTimer(), UpdateTimer() and IsStopped() methods.
/// 
/// Note, that AIS_Animation::StartTimer() defines a timer calculating an elapsed time, not a
/// multimedia timer executing Viewer updates at specific intervals! Application should avoid using
/// implicit and immediate Viewer updates to ensure that AIS_Animation::UpdateTimer() is called
/// before each redrawing of a Viewer content. Redrawing logic should be also managed at application
/// level for managing a smooth animation (by defining a multimedia timer provided by used GUI
/// framework executing updates at desired framerate, or as continuous redraws in loop).
/// </summary>
public ref class AIS_Animation
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_AIS_Animation_h
public:
    Include_AIS_Animation_h
#endif

protected:
    AIS_Animation(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    AIS_Animation(::AIS_Animation* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    AIS_Animation(::AIS_Animation& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::AIS_Animation* NativeInstance
    {
        ::AIS_Animation* get()
        {
            return static_cast<::AIS_Animation*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  AnimationState
    //---------------------------------------------------------------------
    /// <summary>
    /// Defines animation state.
    /// </summary>
    enum class AnimationState
    {
        Started = 0,
        Stopped = 1,
        Paused = 2
    }; // enum  class AnimationState

    /// <summary>
    /// Creates empty animation.
    /// </summary>
    AIS_Animation(Macad::Occt::TCollection_AsciiString^ theAnimationName);
    /// <summary>
    /// Animation name.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Name();
    /// <summary>
    /// </summary>
    /// <returns>
    /// start time of the animation in the timeline
    /// </returns>
    double StartPts();
    /// <summary>
    /// Sets time limits for animation in the animation timeline
    /// </summary>
    void SetStartPts(double thePtsStart);
    /// <summary>
    /// </summary>
    /// <returns>
    /// duration of the animation in the timeline
    /// </returns>
    double Duration();
    /// <summary>
    /// Update total duration considering all animations on timeline.
    /// </summary>
    void UpdateTotalDuration();
    /// <summary>
    /// Return true if duration is defined.
    /// </summary>
    bool HasOwnDuration();
    /// <summary>
    /// </summary>
    /// <returns>
    /// own duration of the animation in the timeline
    /// </returns>
    double OwnDuration();
    /// <summary>
    /// Defines duration of the animation.
    /// </summary>
    void SetOwnDuration(double theDuration);
    /// <summary>
    /// Add single animation to the timeline.
    /// </summary>
    /// <param name="theAnimation">
    /// input animation
    /// </param>
    void Add(Macad::Occt::AIS_Animation^ theAnimation);
    /// <summary>
    /// Clear animation timeline - remove all animations from it.
    /// </summary>
    void Clear();
    /// <summary>
    /// Return the child animation with the given name.
    /// </summary>
    Macad::Occt::AIS_Animation^ Find(Macad::Occt::TCollection_AsciiString^ theAnimationName);
    /// <summary>
    /// Remove the child animation.
    /// </summary>
    bool Remove(Macad::Occt::AIS_Animation^ theAnimation);
    /// <summary>
    /// Replace the child animation.
    /// </summary>
    bool Replace(Macad::Occt::AIS_Animation^ theAnimationOld, Macad::Occt::AIS_Animation^ theAnimationNew);
    /// <summary>
    /// Clears own children and then copy child animations from another object.
    /// Copy also Start Time and Duration values.
    /// </summary>
    void CopyFrom(Macad::Occt::AIS_Animation^ theOther);
    /* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<AIS_Animation>> Children() */
    /// <summary>
    /// Start animation with internally defined timer instance.
    /// Calls ::Start() internally.
    /// 
    /// Note, that this method initializes a timer calculating an elapsed time (presentation
    /// timestamps within AIS_Animation::UpdateTimer()), not a multimedia timer executing Viewer
    /// updates at specific intervals! Viewer redrawing should be managed at application level, so
    /// that AIS_Animation::UpdateTimer() is called once right before each redrawing of a Viewer
    /// content.
    /// 
    /// </summary>
    /// <param name="theStartPts">
    ///    starting timer position (presentation timestamp)
    /// </param>
    /// <param name="thePlaySpeed">
    ///   playback speed (1.0 means normal speed)
    /// </param>
    /// <param name="theToUpdate">
    ///    flag to update defined animations to specified start position
    /// </param>
    /// <param name="theToStopTimer">
    /// flag to pause timer at the starting position
    /// </param>
    void StartTimer(double theStartPts, double thePlaySpeed, bool theToUpdate, bool theToStopTimer);
    /// <summary>
    /// Start animation with internally defined timer instance.
    /// Calls ::Start() internally.
    /// 
    /// Note, that this method initializes a timer calculating an elapsed time (presentation
    /// timestamps within AIS_Animation::UpdateTimer()), not a multimedia timer executing Viewer
    /// updates at specific intervals! Viewer redrawing should be managed at application level, so
    /// that AIS_Animation::UpdateTimer() is called once right before each redrawing of a Viewer
    /// content.
    /// 
    /// </summary>
    /// <param name="theStartPts">
    ///    starting timer position (presentation timestamp)
    /// </param>
    /// <param name="thePlaySpeed">
    ///   playback speed (1.0 means normal speed)
    /// </param>
    /// <param name="theToUpdate">
    ///    flag to update defined animations to specified start position
    /// </param>
    /// <param name="theToStopTimer">
    /// flag to pause timer at the starting position
    /// </param>
    void StartTimer(double theStartPts, double thePlaySpeed, bool theToUpdate);
    /// <summary>
    /// Update single frame of animation, update timer state
    /// </summary>
    /// <returns>
    /// current time of timeline progress.
    /// </returns>
    double UpdateTimer();
    /// <summary>
    /// Return elapsed time.
    /// </summary>
    double ElapsedTime();
    /* Method skipped due to unknown mapping: Media_Timer Timer() */
    /* Method skipped due to unknown mapping: void SetTimer(Media_Timer theTimer, ) */
    /// <summary>
    /// Start animation. This method changes status of the animation to Started.
    /// This status defines whether animation is to be performed in the timeline or not.
    /// </summary>
    /// <param name="theToUpdate">
    /// call Update() method
    /// </param>
    void Start(bool theToUpdate);
    /// <summary>
    /// Pause the process timeline.
    /// </summary>
    void Pause();
    /// <summary>
    /// Stop animation. This method changed status of the animation to Stopped.
    /// This status shows that animation will not be performed in the timeline or it is finished.
    /// </summary>
    void Stop();
    /// <summary>
    /// Check if animation is to be performed in the animation timeline.
    /// </summary>
    /// <returns>
    /// True if it is stopped of finished.
    /// </returns>
    bool IsStopped();
    /// <summary>
    /// Update single frame of animation, update timer state
    /// </summary>
    /// <param name="in]">
    /// thePts  the time moment within [0; Duration()]
    /// </param>
    /// <returns>
    /// True if timeline is in progress
    /// </returns>
    bool Update(double thePts);
    static Macad::Occt::AIS_Animation^ CreateDowncasted(::AIS_Animation* instance);
}; // class AIS_Animation

//---------------------------------------------------------------------
//  Class  AIS_GlobalStatus
//---------------------------------------------------------------------
/// <summary>
/// Stores information about objects in graphic context:
/// </summary>
public ref class AIS_GlobalStatus sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_AIS_GlobalStatus_h
public:
    Include_AIS_GlobalStatus_h
#endif

public:
    AIS_GlobalStatus(::AIS_GlobalStatus* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    AIS_GlobalStatus(::AIS_GlobalStatus& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::AIS_GlobalStatus* NativeInstance
    {
        ::AIS_GlobalStatus* get()
        {
            return static_cast<::AIS_GlobalStatus*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    AIS_GlobalStatus();
    /// <summary>
    /// Returns the display mode.
    /// </summary>
    int DisplayMode();
    /// <summary>
    /// Sets display mode.
    /// </summary>
    void SetDisplayMode(int theMode);
    /// <summary>
    /// Returns TRUE if object is highlighted
    /// </summary>
    bool IsHilighted();
    /// <summary>
    /// Sets highlighted state.
    /// </summary>
    void SetHilightStatus(bool theStatus);
    /// <summary>
    /// Changes applied highlight style for a particular object
    /// </summary>
    void SetHilightStyle(Macad::Occt::Prs3d_Drawer^ theStyle);
    /// <summary>
    /// Returns applied highlight style for a particular object
    /// </summary>
    Macad::Occt::Prs3d_Drawer^ HilightStyle();
    /// <summary>
    /// Returns active selection modes of the object.
    /// </summary>
    Macad::Occt::TColStd_ListOfInteger^ SelectionModes();
    /// <summary>
    /// Return TRUE if selection mode was registered.
    /// </summary>
    bool IsSModeIn(int theMode);
    /// <summary>
    /// Add selection mode.
    /// </summary>
    bool AddSelectionMode(int theMode);
    /// <summary>
    /// Remove selection mode.
    /// </summary>
    bool RemoveSelectionMode(int theMode);
    /// <summary>
    /// Remove all selection modes.
    /// </summary>
    void ClearSelectionModes();
    bool IsSubIntensityOn();
    void SetSubIntensity(bool theIsOn);
    static Macad::Occt::AIS_GlobalStatus^ CreateDowncasted(::AIS_GlobalStatus* instance);
}; // class AIS_GlobalStatus

//---------------------------------------------------------------------
//  Class  AIS_Selection
//---------------------------------------------------------------------
/// <summary>
/// Class holding the list of selected owners.
/// </summary>
public ref class AIS_Selection sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_AIS_Selection_h
public:
    Include_AIS_Selection_h
#endif

public:
    AIS_Selection(::AIS_Selection* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    AIS_Selection(::AIS_Selection& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::AIS_Selection* NativeInstance
    {
        ::AIS_Selection* get()
        {
            return static_cast<::AIS_Selection*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// creates a new selection.
    /// </summary>
    AIS_Selection();
    /// <summary>
    /// removes all the object of the selection.
    /// </summary>
    void Clear();
    /// <summary>
    /// if the object is not yet in the selection, it will be added.
    /// if the object is already in the selection, it will be removed.
    /// </summary>
    /// <param name="in]">
    /// theOwner element to change selection state
    /// </param>
    /// <param name="in]">
    /// theFilter context filter
    /// </param>
    /// <param name="in]">
    /// theSelScheme selection scheme
    /// </param>
    /// <param name="in]">
    /// theIsDetected flag of object detection
    /// </param>
    /// <returns>
    /// result of selection
    /// </returns>
    Macad::Occt::AIS_SelectStatus Select(Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::SelectMgr_Filter^ theFilter, Macad::Occt::AIS_SelectionScheme theSelScheme, bool theIsDetected);
    /// <summary>
    /// the object is always add int the selection.
    /// faster when the number of objects selected is great.
    /// </summary>
    Macad::Occt::AIS_SelectStatus AddSelect(Macad::Occt::SelectMgr_EntityOwner^ theObject);
    /// <summary>
    /// clears the selection and adds the object in the selection.
    /// </summary>
    /// <param name="in]">
    /// theObject element to change selection state
    /// </param>
    /// <param name="in]">
    /// theFilter context filter
    /// </param>
    /// <param name="in]">
    /// theIsDetected flag of object detection
    /// </param>
    void ClearAndSelect(Macad::Occt::SelectMgr_EntityOwner^ theObject, Macad::Occt::SelectMgr_Filter^ theFilter, bool theIsDetected);
    /// <summary>
    /// checks if the object is in the selection.
    /// </summary>
    bool IsSelected(Macad::Occt::SelectMgr_EntityOwner^ theObject);
    /// <summary>
    /// Return the list of selected objects.
    /// </summary>
    Macad::Occt::AIS_NListOfEntityOwner^ Objects();
    /// <summary>
    /// Return the number of selected objects.
    /// </summary>
    int Extent();
    /// <summary>
    /// Return true if list of selected objects is empty.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Start iteration through selected objects.
    /// </summary>
    void Init();
    /// <summary>
    /// Return true if iterator points to selected object.
    /// </summary>
    bool More();
    /// <summary>
    /// Continue iteration through selected objects.
    /// </summary>
    void Next();
    /// <summary>
    /// Return selected object at iterator position.
    /// </summary>
    Macad::Occt::SelectMgr_EntityOwner^ Value();
    /// <summary>
    /// Select or deselect owners depending on the selection scheme.
    /// </summary>
    /// <param name="in]">
    /// thePickedOwners elements to change selection state
    /// </param>
    /// <param name="in]">
    /// theSelScheme selection scheme, defines how owner is selected
    /// </param>
    /// <param name="in]">
    /// theToAllowSelOverlap selection flag, if true - overlapped entities are allowed
    /// </param>
    /// <param name="in]">
    /// theFilter context filter to skip not acceptable owners
    /// </param>
    void SelectOwners(Macad::Occt::AIS_NArray1OfEntityOwner^ thePickedOwners, Macad::Occt::AIS_SelectionScheme theSelScheme, bool theToAllowSelOverlap, Macad::Occt::SelectMgr_Filter^ theFilter);
    static Macad::Occt::AIS_Selection^ CreateDowncasted(::AIS_Selection* instance);
}; // class AIS_Selection

//---------------------------------------------------------------------
//  Class  AIS_BaseAnimationObject
//---------------------------------------------------------------------
/// <summary>
/// Animation defining object transformation.
/// </summary>
public ref class AIS_BaseAnimationObject
    : public Macad::Occt::AIS_Animation
{

#ifdef Include_AIS_BaseAnimationObject_h
public:
    Include_AIS_BaseAnimationObject_h
#endif

protected:
    AIS_BaseAnimationObject(InitMode init)
        : Macad::Occt::AIS_Animation( init )
    {}

public:
    AIS_BaseAnimationObject(::AIS_BaseAnimationObject* nativeInstance)
        : Macad::Occt::AIS_Animation( nativeInstance )
    {}

    AIS_BaseAnimationObject(::AIS_BaseAnimationObject& nativeInstance)
        : Macad::Occt::AIS_Animation( nativeInstance )
    {}

    property ::AIS_BaseAnimationObject* NativeInstance
    {
        ::AIS_BaseAnimationObject* get()
        {
            return static_cast<::AIS_BaseAnimationObject*>(_NativeInstance);
        }
    }

public:
    static Macad::Occt::AIS_BaseAnimationObject^ CreateDowncasted(::AIS_BaseAnimationObject* instance);
}; // class AIS_BaseAnimationObject

//---------------------------------------------------------------------
//  Class  AIS_AnimationAxisRotation
//---------------------------------------------------------------------
/// <summary>
/// Animation defining object transformation.
/// </summary>
public ref class AIS_AnimationAxisRotation sealed
    : public Macad::Occt::AIS_BaseAnimationObject
{

#ifdef Include_AIS_AnimationAxisRotation_h
public:
    Include_AIS_AnimationAxisRotation_h
#endif

public:
    AIS_AnimationAxisRotation(::AIS_AnimationAxisRotation* nativeInstance)
        : Macad::Occt::AIS_BaseAnimationObject( nativeInstance )
    {}

    AIS_AnimationAxisRotation(::AIS_AnimationAxisRotation& nativeInstance)
        : Macad::Occt::AIS_BaseAnimationObject( nativeInstance )
    {}

    property ::AIS_AnimationAxisRotation* NativeInstance
    {
        ::AIS_AnimationAxisRotation* get()
        {
            return static_cast<::AIS_AnimationAxisRotation*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor with initialization.
    /// </summary>
    /// <param name="in]">
    /// theAnimationName animation identifier
    /// </param>
    /// <param name="in]">
    /// theContext       interactive context where object have been displayed
    /// </param>
    /// <param name="in]">
    /// theObject        object to apply rotation
    /// </param>
    /// <param name="in]">
    /// theAxis          rotation axis
    /// </param>
    /// <param name="in]">
    /// theAngleStart    rotation angle at the start of animation
    /// </param>
    /// <param name="in]">
    /// theAngleEnd      rotation angle at the end   of animation
    /// </param>
    AIS_AnimationAxisRotation(Macad::Occt::TCollection_AsciiString^ theAnimationName, Macad::Occt::AIS_InteractiveContext^ theContext, Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::Ax1 theAxis, double theAngleStart, double theAngleEnd);
    static Macad::Occt::AIS_AnimationAxisRotation^ CreateDowncasted(::AIS_AnimationAxisRotation* instance);
}; // class AIS_AnimationAxisRotation

//---------------------------------------------------------------------
//  Class  AIS_AnimationCamera
//---------------------------------------------------------------------
/// <summary>
/// Camera animation.
/// </summary>
public ref class AIS_AnimationCamera sealed
    : public Macad::Occt::AIS_Animation
{

#ifdef Include_AIS_AnimationCamera_h
public:
    Include_AIS_AnimationCamera_h
#endif

public:
    AIS_AnimationCamera(::AIS_AnimationCamera* nativeInstance)
        : Macad::Occt::AIS_Animation( nativeInstance )
    {}

    AIS_AnimationCamera(::AIS_AnimationCamera& nativeInstance)
        : Macad::Occt::AIS_Animation( nativeInstance )
    {}

    property ::AIS_AnimationCamera* NativeInstance
    {
        ::AIS_AnimationCamera* get()
        {
            return static_cast<::AIS_AnimationCamera*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Main constructor.
    /// </summary>
    AIS_AnimationCamera(Macad::Occt::TCollection_AsciiString^ theAnimationName, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Return the target view.
    /// </summary>
    Macad::Occt::V3d_View^ View();
    /// <summary>
    /// Set target view.
    /// </summary>
    void SetView(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Return camera start position.
    /// </summary>
    Macad::Occt::Graphic3d_Camera^ CameraStart();
    /// <summary>
    /// Define camera start position.
    /// </summary>
    void SetCameraStart(Macad::Occt::Graphic3d_Camera^ theCameraStart);
    /// <summary>
    /// Return camera end position.
    /// </summary>
    Macad::Occt::Graphic3d_Camera^ CameraEnd();
    /// <summary>
    /// Define camera end position.
    /// </summary>
    void SetCameraEnd(Macad::Occt::Graphic3d_Camera^ theCameraEnd);
    static Macad::Occt::AIS_AnimationCamera^ CreateDowncasted(::AIS_AnimationCamera* instance);
}; // class AIS_AnimationCamera

//---------------------------------------------------------------------
//  Class  AIS_AnimationObject
//---------------------------------------------------------------------
/// <summary>
/// Animation defining object transformation.
/// </summary>
public ref class AIS_AnimationObject sealed
    : public Macad::Occt::AIS_BaseAnimationObject
{

#ifdef Include_AIS_AnimationObject_h
public:
    Include_AIS_AnimationObject_h
#endif

public:
    AIS_AnimationObject(::AIS_AnimationObject* nativeInstance)
        : Macad::Occt::AIS_BaseAnimationObject( nativeInstance )
    {}

    AIS_AnimationObject(::AIS_AnimationObject& nativeInstance)
        : Macad::Occt::AIS_BaseAnimationObject( nativeInstance )
    {}

    property ::AIS_AnimationObject* NativeInstance
    {
        ::AIS_AnimationObject* get()
        {
            return static_cast<::AIS_AnimationObject*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor with initialization.
    /// Note that start/end transformations specify exactly local transformation of the object,
    /// not the transformation to be applied to existing local transformation.
    /// </summary>
    /// <param name="in]">
    /// theAnimationName animation identifier
    /// </param>
    /// <param name="in]">
    /// theContext       interactive context where object have been displayed
    /// </param>
    /// <param name="in]">
    /// theObject        object to apply local transformation
    /// </param>
    /// <param name="in]">
    /// theTrsfStart     local transformation at the start of animation (e.g.
    /// theObject->LocalTransformation())
    /// </param>
    /// <param name="in]">
    /// theTrsfEnd       local transformation at the end   of animation
    /// </param>
    AIS_AnimationObject(Macad::Occt::TCollection_AsciiString^ theAnimationName, Macad::Occt::AIS_InteractiveContext^ theContext, Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::Trsf theTrsfStart, Macad::Occt::Trsf theTrsfEnd);
    static Macad::Occt::AIS_AnimationObject^ CreateDowncasted(::AIS_AnimationObject* instance);
}; // class AIS_AnimationObject

//---------------------------------------------------------------------
//  Class  AIS_AttributeFilter
//---------------------------------------------------------------------
/// <summary>
/// Selects Interactive Objects, which have the desired width or color.
/// The filter questions each Interactive Object in local
/// context to determine whether it has an non-null
/// owner, and if so, whether it has the required color
/// and width attributes. If the object returns true in each
/// case, it is kept. If not, it is rejected.
/// This filter is used only in an open local context.
/// In the Collector viewer, you can only locate
/// Interactive Objects, which answer positively to the
/// filters, which are in position when a local context is open.
/// </summary>
public ref class AIS_AttributeFilter sealed
    : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_AIS_AttributeFilter_h
public:
    Include_AIS_AttributeFilter_h
#endif

public:
    AIS_AttributeFilter(::AIS_AttributeFilter* nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    AIS_AttributeFilter(::AIS_AttributeFilter& nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    property ::AIS_AttributeFilter* NativeInstance
    {
        ::AIS_AttributeFilter* get()
        {
            return static_cast<::AIS_AttributeFilter*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty attribute filter object.
    /// This filter object determines whether selectable
    /// interactive objects have a non-null owner.
    /// </summary>
    AIS_AttributeFilter();
    /// <summary>
    /// Constructs an attribute filter object defined by the
    /// color attribute aCol.
    /// </summary>
    AIS_AttributeFilter(Macad::Occt::Quantity_NameOfColor aCol);
    /// <summary>
    /// Constructs an attribute filter object defined by the line
    /// width attribute aWidth.
    /// </summary>
    AIS_AttributeFilter(double aWidth);
    /// <summary>
    /// Indicates that the Interactive Object has the color
    /// setting specified by the argument aCol at construction time.
    /// </summary>
    bool HasColor();
    /// <summary>
    /// Indicates that the Interactive Object has the width
    /// setting specified by the argument aWidth at
    /// construction time.
    /// </summary>
    bool HasWidth();
    /// <summary>
    /// Sets the color.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_NameOfColor theCol);
    /// <summary>
    /// Sets the line width.
    /// </summary>
    void SetWidth(double theWidth);
    /// <summary>
    /// Removes the setting for color from the filter.
    /// </summary>
    void UnsetColor();
    /// <summary>
    /// Removes the setting for width from the filter.
    /// </summary>
    void UnsetWidth();
    /// <summary>
    /// Indicates that the selected Interactive Object passes
    /// the filter. The owner, anObj, can be either direct or
    /// user. A direct owner is the corresponding
    /// construction element, whereas a user is the
    /// compound shape of which the entity forms a part.
    /// If the Interactive Object returns Standard_True
    /// when detected by the Local Context selector through
    /// the mouse, the object is kept; if not, it is rejected.
    /// </summary>
    bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anObj);
    static Macad::Occt::AIS_AttributeFilter^ CreateDowncasted(::AIS_AttributeFilter* instance);
}; // class AIS_AttributeFilter

//---------------------------------------------------------------------
//  Class  AIS_Axis
//---------------------------------------------------------------------
/// <summary>
/// Locates the x, y and z axes in an Interactive Object.
/// These are used to orient it correctly in presentations
/// from different viewpoints, or to construct a revolved
/// shape, for example, from one of the axes. Conversely,
/// an axis can be created to build a revolved shape and
/// then situated relative to one of the axes of the view.
/// </summary>
public ref class AIS_Axis sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Axis_h
public:
    Include_AIS_Axis_h
#endif

public:
    AIS_Axis(::AIS_Axis* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_Axis(::AIS_Axis& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_Axis* NativeInstance
    {
        ::AIS_Axis* get()
        {
            return static_cast<::AIS_Axis*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the line aComponent
    /// </summary>
    AIS_Axis(Macad::Occt::Geom_Line^ aComponent);
    /// <summary>
    /// initializes the axis2 position
    /// aComponent. The coordinate system used is right-handed.
    /// </summary>
    AIS_Axis(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfAxis anAxisType);
    /// <summary>
    /// Initializes the axis1 position anAxis.
    /// </summary>
    AIS_Axis(Macad::Occt::Geom_Axis1Placement^ anAxis);
    /// <summary>
    /// Initializes the ray as axis with start point and direction
    /// </summary>
    /// <param name="in]">
    /// theAxis Start point and direction of the ray
    /// </param>
    /// <param name="in]">
    /// theLength Optional length of the ray (ray is infinite by default).
    /// </param>
    AIS_Axis(Macad::Occt::Ax1 theAxis, double theLength);
    /// <summary>
    /// Initializes the ray as axis with start point and direction
    /// </summary>
    /// <param name="in]">
    /// theAxis Start point and direction of the ray
    /// </param>
    /// <param name="in]">
    /// theLength Optional length of the ray (ray is infinite by default).
    /// </param>
    AIS_Axis(Macad::Occt::Ax1 theAxis);
    /// <summary>
    /// Returns the axis entity aComponent and identifies it
    /// as a component of a shape.
    /// </summary>
    Macad::Occt::Geom_Line^ Component();
    /// <summary>
    /// Sets the coordinates of the lin aComponent.
    /// </summary>
    void SetComponent(Macad::Occt::Geom_Line^ aComponent);
    /// <summary>
    /// Returns the position of axis2 and   positions it by
    /// identifying it as the x, y, or z axis and giving its
    /// direction in 3D space. The coordinate system used is right-handed.
    /// </summary>
    Macad::Occt::Geom_Axis2Placement^ Axis2Placement();
    /// <summary>
    /// Allows you to provide settings for aComponent:the
    /// position and direction of an axis in 3D space. The
    /// coordinate system used is right-handed.
    /// </summary>
    void SetAxis2Placement(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfAxis anAxisType);
    /// <summary>
    /// Constructs a new line to serve as the axis anAxis in 3D space.
    /// </summary>
    void SetAxis1Placement(Macad::Occt::Geom_Axis1Placement^ anAxis);
    /// <summary>
    /// Returns the type of axis.
    /// </summary>
    Macad::Occt::AIS_TypeOfAxis TypeOfAxis();
    /// <summary>
    /// Constructs the entity theTypeAxis to stock information
    /// concerning type of axis.
    /// </summary>
    void SetTypeOfAxis(Macad::Occt::AIS_TypeOfAxis theTypeAxis);
    /// <summary>
    /// Returns a signature of 2 for axis datums. When you
    /// activate mode 2 by a signature, you pick AIS objects
    /// of type AIS_Axis.
    /// </summary>
    bool IsXYZAxis();
    /// <summary>
    /// Returns true if the interactive object accepts the display mode aMode.
    /// </summary>
    bool AcceptDisplayMode(int aMode);
    int Signature();
    Macad::Occt::AIS_KindOfInteractive Type();
    void SetColor(Macad::Occt::Quantity_Color^ aColor);
    void SetWidth(double aValue);
    /// <summary>
    /// Set required visualization parameters.
    /// </summary>
    void SetDisplayAspect(Macad::Occt::Prs3d_LineAspect^ theNewDatumAspect);
    void UnsetColor();
    void UnsetWidth();
    static Macad::Occt::AIS_Axis^ CreateDowncasted(::AIS_Axis* instance);
}; // class AIS_Axis

//---------------------------------------------------------------------
//  Class  AIS_BadEdgeFilter
//---------------------------------------------------------------------
/// <summary>
/// A Class
/// </summary>
public ref class AIS_BadEdgeFilter sealed
    : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_AIS_BadEdgeFilter_h
public:
    Include_AIS_BadEdgeFilter_h
#endif

public:
    AIS_BadEdgeFilter(::AIS_BadEdgeFilter* nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    AIS_BadEdgeFilter(::AIS_BadEdgeFilter& nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    property ::AIS_BadEdgeFilter* NativeInstance
    {
        ::AIS_BadEdgeFilter* get()
        {
            return static_cast<::AIS_BadEdgeFilter*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty filter object for bad edges.
    /// </summary>
    AIS_BadEdgeFilter();
    bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aType);
    bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ EO);
    /// <summary>
    /// sets  <myContour> with  current  contour. used  by
    /// IsOk.
    /// </summary>
    void SetContour(int Index);
    /// <summary>
    /// Adds an  edge  to the list  of non-selectionnable
    /// edges.
    /// </summary>
    void AddEdge(Macad::Occt::TopoDS_Edge^ anEdge, int Index);
    /// <summary>
    /// removes from the  list of non-selectionnable edges
    /// all edges in the contour <Index>.
    /// </summary>
    void RemoveEdges(int Index);
    static Macad::Occt::AIS_BadEdgeFilter^ CreateDowncasted(::AIS_BadEdgeFilter* instance);
}; // class AIS_BadEdgeFilter

//---------------------------------------------------------------------
//  Class  AIS_C0RegularityFilter
//---------------------------------------------------------------------
public ref class AIS_C0RegularityFilter sealed
    : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_AIS_C0RegularityFilter_h
public:
    Include_AIS_C0RegularityFilter_h
#endif

public:
    AIS_C0RegularityFilter(::AIS_C0RegularityFilter* nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    AIS_C0RegularityFilter(::AIS_C0RegularityFilter& nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    property ::AIS_C0RegularityFilter* NativeInstance
    {
        ::AIS_C0RegularityFilter* get()
        {
            return static_cast<::AIS_C0RegularityFilter*>(_NativeInstance);
        }
    }

public:
    AIS_C0RegularityFilter(Macad::Occt::TopoDS_Shape^ aShape);
    bool ActsOn(Macad::Occt::TopAbs_ShapeEnum aType);
    bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ EO);
    static Macad::Occt::AIS_C0RegularityFilter^ CreateDowncasted(::AIS_C0RegularityFilter* instance);
}; // class AIS_C0RegularityFilter

//---------------------------------------------------------------------
//  Class  AIS_CameraFrustum
//---------------------------------------------------------------------
/// <summary>
/// Presentation for drawing camera frustum.
/// Default configuration is built with filling and some transparency.
/// </summary>
public ref class AIS_CameraFrustum sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_CameraFrustum_h
public:
    Include_AIS_CameraFrustum_h
#endif

public:
    AIS_CameraFrustum(::AIS_CameraFrustum* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_CameraFrustum(::AIS_CameraFrustum& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_CameraFrustum* NativeInstance
    {
        ::AIS_CameraFrustum* get()
        {
            return static_cast<::AIS_CameraFrustum*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  SelectionMode
    //---------------------------------------------------------------------
    /// <summary>
    /// Selection modes supported by this object
    /// </summary>
    enum class SelectionMode
    {
        Edges = 0,
        Volume = 1
    }; // enum  class SelectionMode

    /// <summary>
    /// Constructs camera frustum with default configuration.
    /// </summary>
    AIS_CameraFrustum();
    /// <summary>
    /// Sets camera frustum.
    /// </summary>
    void SetCameraFrustum(Macad::Occt::Graphic3d_Camera^ theCamera);
    /// <summary>
    /// Setup custom color.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Restore default color.
    /// </summary>
    void UnsetColor();
    /// <summary>
    /// Restore transparency setting.
    /// </summary>
    void UnsetTransparency();
    /// <summary>
    /// Return true if specified display mode is supported.
    /// </summary>
    bool AcceptDisplayMode(int theMode);
    static Macad::Occt::AIS_CameraFrustum^ CreateDowncasted(::AIS_CameraFrustum* instance);
}; // class AIS_CameraFrustum

//---------------------------------------------------------------------
//  Class  AIS_Circle
//---------------------------------------------------------------------
/// <summary>
/// Constructs circle datums to be used in construction of
/// composite shapes.
/// </summary>
public ref class AIS_Circle sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Circle_h
public:
    Include_AIS_Circle_h
#endif

public:
    AIS_Circle(::AIS_Circle* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_Circle(::AIS_Circle& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_Circle* NativeInstance
    {
        ::AIS_Circle* get()
        {
            return static_cast<::AIS_Circle*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes this algorithm for constructing AIS circle
    /// datums initializes the circle aCircle
    /// </summary>
    AIS_Circle(Macad::Occt::Geom_Circle^ aCircle);
    /// <summary>
    /// Initializes this algorithm for constructing AIS circle datums.
    /// Initializes the circle theCircle, the arc
    /// starting point theUStart, the arc ending point theUEnd,
    /// and the type of sensitivity theIsFilledCircleSens.
    /// </summary>
    AIS_Circle(Macad::Occt::Geom_Circle^ theCircle, double theUStart, double theUEnd, bool theIsFilledCircleSens);
    /// <summary>
    /// Initializes this algorithm for constructing AIS circle datums.
    /// Initializes the circle theCircle, the arc
    /// starting point theUStart, the arc ending point theUEnd,
    /// and the type of sensitivity theIsFilledCircleSens.
    /// </summary>
    AIS_Circle(Macad::Occt::Geom_Circle^ theCircle, double theUStart, double theUEnd);
    /// <summary>
    /// Returns index 6 by default.
    /// </summary>
    int Signature();
    /// <summary>
    /// Indicates that the type of Interactive Object is a datum.
    /// </summary>
    Macad::Occt::AIS_KindOfInteractive Type();
    /// <summary>
    /// Returns the circle component defined in SetCircle.
    /// </summary>
    Macad::Occt::Geom_Circle^ Circle();
    /// <summary>
    /// Constructs instances of the starting point and the end
    /// point parameters, theU1 and theU2.
    /// </summary>
    void Parameters(double% theU1, double% theU2);
    /// <summary>
    /// Allows you to provide settings for the circle datum aCircle.
    /// </summary>
    void SetCircle(Macad::Occt::Geom_Circle^ theCircle);
    /// <summary>
    /// Allows you to set the parameter theU for the starting point of an arc.
    /// </summary>
    void SetFirstParam(double theU);
    /// <summary>
    /// Allows you to provide the parameter theU for the end point of an arc.
    /// </summary>
    void SetLastParam(double theU);
    void SetColor(Macad::Occt::Quantity_Color^ aColor);
    /// <summary>
    /// Assigns the width aValue to the solid line boundary of the circle datum.
    /// </summary>
    void SetWidth(double aValue);
    /// <summary>
    /// Removes color from the solid line boundary of the circle datum.
    /// </summary>
    void UnsetColor();
    /// <summary>
    /// Removes width settings from the solid line boundary of the circle datum.
    /// </summary>
    void UnsetWidth();
    /// <summary>
    /// Returns the type of sensitivity for the circle;
    /// </summary>
    bool IsFilledCircleSens();
    /// <summary>
    /// Sets the type of sensitivity for the circle. If theIsFilledCircleSens set to Standard_True
    /// then the whole circle will be detectable, otherwise only the boundary of the circle.
    /// </summary>
    void SetFilledCircleSens(bool theIsFilledCircleSens);
    static Macad::Occt::AIS_Circle^ CreateDowncasted(::AIS_Circle* instance);
}; // class AIS_Circle

//---------------------------------------------------------------------
//  Class  AIS_ColoredDrawer
//---------------------------------------------------------------------
/// <summary>
/// Customizable properties.
/// </summary>
public ref class AIS_ColoredDrawer sealed
    : public Macad::Occt::Prs3d_Drawer
{

#ifdef Include_AIS_ColoredDrawer_h
public:
    Include_AIS_ColoredDrawer_h
#endif

public:
    AIS_ColoredDrawer(::AIS_ColoredDrawer* nativeInstance)
        : Macad::Occt::Prs3d_Drawer( nativeInstance )
    {}

    AIS_ColoredDrawer(::AIS_ColoredDrawer& nativeInstance)
        : Macad::Occt::Prs3d_Drawer( nativeInstance )
    {}

    property ::AIS_ColoredDrawer* NativeInstance
    {
        ::AIS_ColoredDrawer* get()
        {
            return static_cast<::AIS_ColoredDrawer*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// </summary>
    /// @name list of overridden properties
    property bool myIsHidden {
        bool get() {
            return ((::AIS_ColoredDrawer*)_NativeInstance)->myIsHidden;
        }
        void set(bool value) {
            ((::AIS_ColoredDrawer*)_NativeInstance)->myIsHidden = value;
        }
    }

    property bool myHasOwnMaterial {
        bool get() {
            return ((::AIS_ColoredDrawer*)_NativeInstance)->myHasOwnMaterial;
        }
        void set(bool value) {
            ((::AIS_ColoredDrawer*)_NativeInstance)->myHasOwnMaterial = value;
        }
    }

    property bool myHasOwnColor {
        bool get() {
            return ((::AIS_ColoredDrawer*)_NativeInstance)->myHasOwnColor;
        }
        void set(bool value) {
            ((::AIS_ColoredDrawer*)_NativeInstance)->myHasOwnColor = value;
        }
    }

    property bool myHasOwnTransp {
        bool get() {
            return ((::AIS_ColoredDrawer*)_NativeInstance)->myHasOwnTransp;
        }
        void set(bool value) {
            ((::AIS_ColoredDrawer*)_NativeInstance)->myHasOwnTransp = value;
        }
    }

    property bool myHasOwnWidth {
        bool get() {
            return ((::AIS_ColoredDrawer*)_NativeInstance)->myHasOwnWidth;
        }
        void set(bool value) {
            ((::AIS_ColoredDrawer*)_NativeInstance)->myHasOwnWidth = value;
        }
    }

    /// <summary>
    /// Default constructor.
    /// </summary>
    AIS_ColoredDrawer(Macad::Occt::Prs3d_Drawer^ theLink);
    bool IsHidden();
    void SetHidden(bool theToHide);
    bool HasOwnMaterial();
    void UnsetOwnMaterial();
    void SetOwnMaterial();
    bool HasOwnColor();
    void UnsetOwnColor();
    void SetOwnColor(Macad::Occt::Quantity_Color^ parameter1);
    bool HasOwnTransparency();
    void UnsetOwnTransparency();
    void SetOwnTransparency(double parameter1);
    bool HasOwnWidth();
    void UnsetOwnWidth();
    void SetOwnWidth(double parameter1);
    static Macad::Occt::AIS_ColoredDrawer^ CreateDowncasted(::AIS_ColoredDrawer* instance);
}; // class AIS_ColoredDrawer

//---------------------------------------------------------------------
//  Class  AIS_Shape
//---------------------------------------------------------------------
/// <summary>
/// A framework to manage presentation and selection of shapes.
/// AIS_Shape is the interactive object which is used the
/// most by   applications. There are standard functions
/// available which allow you to prepare selection
/// operations on the constituent elements of shapes -
/// vertices, edges, faces etc - in an open local context.
/// The selection modes specific to "Shape" type objects
/// are referred to as Standard Activation Mode. These
/// modes are only taken into account in open local
/// context and only act on Interactive Objects which
/// have redefined the virtual method
/// AcceptShapeDecomposition so that it returns true.
/// Several advanced functions are also available. These
/// include functions to manage deviation angle and
/// deviation coefficient - both HLR and non-HLR - of
/// an inheriting shape class. These services allow you to
/// select one type of shape interactive object for higher
/// precision drawing. When you do this, the
/// Prs3d_Drawer::IsOwn... functions corresponding to the
/// above deviation angle and coefficient functions return
/// true indicating that there is a local setting available
/// for the specific object.
/// 
/// This class allows to map textures on shapes using native UV parametric space of underlying
/// surface of each Face (this means that texture will be visually duplicated on all Faces). To
/// generate texture coordinates, appropriate shading attribute should be set before computing
/// presentation in AIS_Shaded display mode:
/// </summary>
/// @code
/// Handle(AIS_Shape) aPrs = new AIS_Shape();
/// aPrs->Attributes()->SetupOwnShadingAspect();
/// aPrs->Attributes()->ShadingAspect()->Aspect()->SetTextureMapOn();
/// aPrs->Attributes()->ShadingAspect()->Aspect()->SetTextureMap (new Graphic3d_Texture2Dmanual
/// (Graphic3d_NOT_2D_ALUMINUM));
/// @endcode
/// The texture itself is parametrized in (0,1)x(0,1).
public ref class AIS_Shape
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Shape_h
public:
    Include_AIS_Shape_h
#endif

protected:
    AIS_Shape(InitMode init)
        : Macad::Occt::AIS_InteractiveObject( init )
    {}

public:
    AIS_Shape(::AIS_Shape* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_Shape(::AIS_Shape& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_Shape* NativeInstance
    {
        ::AIS_Shape* get()
        {
            return static_cast<::AIS_Shape*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes construction of the shape shap from wires,
    /// edges and vertices.
    /// </summary>
    AIS_Shape(Macad::Occt::TopoDS_Shape^ shap);
    /// <summary>
    /// Returns index 0. This value refers to SHAPE from TopAbs_ShapeEnum
    /// </summary>
    int Signature();
    /// <summary>
    /// Returns Object as the type of Interactive Object.
    /// </summary>
    Macad::Occt::AIS_KindOfInteractive Type();
    /// <summary>
    /// Returns true if the Interactive Object accepts shape decomposition.
    /// </summary>
    bool AcceptShapeDecomposition();
    /// <summary>
    /// Return true if specified display mode is supported.
    /// </summary>
    bool AcceptDisplayMode(int theMode);
    /// <summary>
    /// Returns this shape object.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// Constructs an instance of the shape object theShape.
    /// </summary>
    void SetShape(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Alias for ::SetShape().
    /// </summary>
    void Set(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Sets a local value for deviation coefficient for this specific shape.
    /// </summary>
    bool SetOwnDeviationCoefficient();
    /// <summary>
    /// Sets a local value for deviation angle for this specific shape.
    /// </summary>
    bool SetOwnDeviationAngle();
    /// <summary>
    /// Sets a local value for deviation coefficient for this specific shape.
    /// </summary>
    void SetOwnDeviationCoefficient(double aCoefficient);
    /// <summary>
    /// this compute a new angle and Deviation from the value anAngle
    /// and set the values stored in myDrawer with these that become local to the shape
    /// </summary>
    void SetAngleAndDeviation(double anAngle);
    /// <summary>
    /// gives back the angle initial value put by the User.
    /// </summary>
    double UserAngle();
    /// <summary>
    /// sets myOwnDeviationAngle field in Prs3d_Drawer & recomputes presentation
    /// </summary>
    void SetOwnDeviationAngle(double anAngle);
    /// <summary>
    /// Returns true and the values of the deviation
    /// coefficient aCoefficient and the previous deviation
    /// coefficient aPreviousCoefficient. If these values are
    /// not already set, false is returned.
    /// </summary>
    bool OwnDeviationCoefficient(double% aCoefficient, double% aPreviousCoefficient);
    /// <summary>
    /// Returns true and the values of the deviation angle
    /// anAngle and the previous deviation angle aPreviousAngle.
    /// If these values are not already set, false is returned.
    /// </summary>
    bool OwnDeviationAngle(double% anAngle, double% aPreviousAngle);
    /// <summary>
    /// Sets the type of HLR algorithm used by the shape
    /// </summary>
    void SetTypeOfHLR(Macad::Occt::Prs3d_TypeOfHLR theTypeOfHLR);
    /// <summary>
    /// Gets the type of HLR algorithm
    /// </summary>
    Macad::Occt::Prs3d_TypeOfHLR TypeOfHLR();
    /// <summary>
    /// Sets the color aColor in the reconstructed
    /// compound shape. Acts via the Drawer methods below on the appearance of:
    /// -   free boundaries:
    /// Prs3d_Drawer_FreeBoundaryAspect,
    /// -   isos: Prs3d_Drawer_UIsoAspect,
    /// Prs3dDrawer_VIsoAspect,
    /// -   shared boundaries:
    /// Prs3d_Drawer_UnFreeBoundaryAspect,
    /// -   shading: Prs3d_Drawer_ShadingAspect,
    /// -   visible line color in hidden line mode:
    /// Prs3d_Drawer_SeenLineAspect
    /// -   hidden line color in hidden line mode:
    /// Prs3d_Drawer_HiddenLineAspect.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Removes settings for color in the reconstructed compound shape.
    /// </summary>
    void UnsetColor();
    /// <summary>
    /// Sets the value aValue for line width in the reconstructed compound shape.
    /// Changes line aspects for lines presentation.
    /// </summary>
    void SetWidth(double aValue);
    /// <summary>
    /// Removes the setting for line width in the reconstructed compound shape.
    /// </summary>
    void UnsetWidth();
    /// <summary>
    /// Allows you to provide settings for the material aName
    /// in the reconstructed compound shape.
    /// </summary>
    void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ aName);
    /// <summary>
    /// Removes settings for material in the reconstructed compound shape.
    /// </summary>
    void UnsetMaterial();
    /// <summary>
    /// Sets the value aValue for transparency in the reconstructed compound shape.
    /// </summary>
    void SetTransparency(double aValue);
    /// <summary>
    /// Sets the value aValue for transparency in the reconstructed compound shape.
    /// </summary>
    void SetTransparency();
    /// <summary>
    /// Removes the setting for transparency in the reconstructed compound shape.
    /// </summary>
    void UnsetTransparency();
    /// <summary>
    /// Constructs a bounding box with which to reconstruct
    /// compound topological shapes for presentation.
    /// </summary>
    Macad::Occt::Bnd_Box^ BoundingBox();
    /// <summary>
    /// Returns the Color attributes of the shape accordingly to
    /// the current facing model;
    /// </summary>
    void Color(Macad::Occt::Quantity_Color^ aColor);
    /// <summary>
    /// Returns the NameOfMaterial attributes of the shape accordingly to
    /// the current facing model;
    /// </summary>
    Macad::Occt::Graphic3d_NameOfMaterial Material();
    /// <summary>
    /// Returns the transparency attributes of the shape accordingly to
    /// the current facing model;
    /// </summary>
    double Transparency();
    /// <summary>
    /// Return shape type for specified selection mode.
    /// </summary>
    static Macad::Occt::TopAbs_ShapeEnum SelectionType(int theSelMode);
    /// <summary>
    /// Return selection mode for specified shape type.
    /// </summary>
    static int SelectionMode(Macad::Occt::TopAbs_ShapeEnum theShapeType);
    /// <summary>
    /// </summary>
    /// @name methods to alter texture mapping properties
    /// Return texture repeat UV values; (1, 1) by default.
    Macad::Occt::Pnt2d TextureRepeatUV();
    /// <summary>
    /// Sets the number of occurrences of the texture on each face. The texture itself is
    /// parameterized in (0,1) by (0,1). Each face of the shape to be textured is parameterized in UV
    /// space (Umin,Umax) by (Vmin,Vmax).
    /// </summary>
    void SetTextureRepeatUV(Macad::Occt::Pnt2d theRepeatUV);
    /// <summary>
    /// Return texture origin UV position; (0, 0) by default.
    /// </summary>
    Macad::Occt::Pnt2d TextureOriginUV();
    /// <summary>
    /// Use this method to change the origin of the texture.
    /// The texel (0,0) will be mapped to the surface (myUVOrigin.X(), myUVOrigin.Y()).
    /// </summary>
    void SetTextureOriginUV(Macad::Occt::Pnt2d theOriginUV);
    /// <summary>
    /// Return scale factor for UV coordinates; (1, 1) by default.
    /// </summary>
    Macad::Occt::Pnt2d TextureScaleUV();
    /// <summary>
    /// Use this method to scale the texture (percent of the face).
    /// You can specify a scale factor for both U and V.
    /// Example: if you set ScaleU and ScaleV to 0.5 and you enable texture repeat,
    /// the texture will appear twice on the face in each direction.
    /// </summary>
    void SetTextureScaleUV(Macad::Occt::Pnt2d theScaleUV);
    /// <summary>
    /// Compute HLR presentation for specified shape.
    /// </summary>
    static void computeHlrPresentation(Macad::Occt::Graphic3d_Camera^ theProjector, Macad::Occt::Graphic3d_Structure^ thePrs, Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Prs3d_Drawer^ theDrawer);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::AIS_Shape^ CreateDowncasted(::AIS_Shape* instance);
}; // class AIS_Shape

//---------------------------------------------------------------------
//  Class  AIS_ColoredShape
//---------------------------------------------------------------------
/// <summary>
/// Presentation of the shape with customizable sub-shapes properties.
/// </summary>
public ref class AIS_ColoredShape sealed
    : public Macad::Occt::AIS_Shape
{

#ifdef Include_AIS_ColoredShape_h
public:
    Include_AIS_ColoredShape_h
#endif

public:
    AIS_ColoredShape(::AIS_ColoredShape* nativeInstance)
        : Macad::Occt::AIS_Shape( nativeInstance )
    {}

    AIS_ColoredShape(::AIS_ColoredShape& nativeInstance)
        : Macad::Occt::AIS_Shape( nativeInstance )
    {}

    property ::AIS_ColoredShape* NativeInstance
    {
        ::AIS_ColoredShape* get()
        {
            return static_cast<::AIS_ColoredShape*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Default constructor
    /// </summary>
    AIS_ColoredShape(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Copy constructor
    /// </summary>
    AIS_ColoredShape(Macad::Occt::AIS_Shape^ theShape);
    /// <summary>
    /// </summary>
    /// @name sub-shape aspects
    /// Customize properties of specified sub-shape.
    /// The shape will be stored in the map but ignored, if it is not sub-shape of main Shape!
    /// This method can be used to mark sub-shapes with customizable properties.
    Macad::Occt::AIS_ColoredDrawer^ CustomAspects(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Reset the map of custom sub-shape aspects.
    /// </summary>
    void ClearCustomAspects();
    /// <summary>
    /// Reset custom properties of specified sub-shape.
    /// </summary>
    /// <param name="theToUnregister">
    /// unregister or not sub-shape from the map
    /// </param>
    void UnsetCustomAspects(Macad::Occt::TopoDS_Shape^ theShape, bool theToUnregister);
    /// <summary>
    /// Reset custom properties of specified sub-shape.
    /// </summary>
    /// <param name="theToUnregister">
    /// unregister or not sub-shape from the map
    /// </param>
    void UnsetCustomAspects(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Customize color of specified sub-shape
    /// </summary>
    void SetCustomColor(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Customize transparency of specified sub-shape
    /// </summary>
    void SetCustomTransparency(Macad::Occt::TopoDS_Shape^ theShape, double theTransparency);
    /// <summary>
    /// Customize line width of specified sub-shape
    /// </summary>
    void SetCustomWidth(Macad::Occt::TopoDS_Shape^ theShape, double theLineWidth);
    /// <summary>
    /// Return the map of custom aspects.
    /// </summary>
    Macad::Occt::AIS_DataMapOfShapeDrawer^ CustomAspectsMap();
    /// <summary>
    /// Return the map of custom aspects.
    /// </summary>
    Macad::Occt::AIS_DataMapOfShapeDrawer^ ChangeCustomAspectsMap();
    /// <summary>
    /// </summary>
    /// @name global aspects
    /// Setup color of entire shape.
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Setup line width of entire shape.
    /// </summary>
    void SetWidth(double theLineWidth);
    /// <summary>
    /// Sets transparency value.
    /// </summary>
    void SetTransparency(double theValue);
    /// <summary>
    /// Sets the material aspect.
    /// </summary>
    void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theAspect);
    /// <summary>
    /// Removes the setting for transparency in the reconstructed compound shape.
    /// </summary>
    void UnsetTransparency();
    /// <summary>
    /// Setup line width of entire shape.
    /// </summary>
    void UnsetWidth();
    static Macad::Occt::AIS_ColoredShape^ CreateDowncasted(::AIS_ColoredShape* instance);
}; // class AIS_ColoredShape

//---------------------------------------------------------------------
//  Class  AIS_ColorScale
//---------------------------------------------------------------------
/// <summary>
/// Class for drawing a custom color scale.
/// 
/// The color scale consists of rectangular color bar (composed of fixed
/// number of color intervals), optional labels, and title.
/// The labels can be positioned either at the boundaries of the intervals,
/// or at the middle of each interval.
/// Colors and labels can be either defined automatically or set by the user.
/// Automatic labels are calculated from numerical limits of the scale,
/// its type (logarithmic or plain), and formatted by specified format string.
/// </summary>
public ref class AIS_ColorScale sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_ColorScale_h
public:
    Include_AIS_ColorScale_h
#endif

public:
    AIS_ColorScale(::AIS_ColorScale* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_ColorScale(::AIS_ColorScale& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_ColorScale* NativeInstance
    {
        ::AIS_ColorScale* get()
        {
            return static_cast<::AIS_ColorScale*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    AIS_ColorScale();
    /// <summary>
    /// Calculate color according passed value; returns true if value is in range or false, if isn't
    /// </summary>
    static bool FindColor(double theValue, double theMin, double theMax, int theColorsCount, Macad::Occt::Graphic3d_Vec3d^ theColorHlsMin, Macad::Occt::Graphic3d_Vec3d^ theColorHlsMax, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Calculate color according passed value; returns true if value is in range or false, if isn't
    /// </summary>
    static bool FindColor(double theValue, double theMin, double theMax, int theColorsCount, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Shift hue into valid range.
    /// Lightness and Saturation should be specified in valid range [0.0, 1.0],
    /// however Hue might be given out of Quantity_Color range to specify desired range for
    /// interpolation.
    /// </summary>
    static double hueToValidRange(double theHue);
    /// <summary>
    /// Calculate color according passed value; returns true if value is in range or false, if isn't
    /// </summary>
    bool FindColor(double theValue, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Returns minimal value of color scale, 0.0 by default.
    /// </summary>
    double GetMin();
    /// <summary>
    /// Sets the minimal value of color scale.
    /// </summary>
    void SetMin(double theMin);
    /// <summary>
    /// Returns maximal value of color scale, 1.0 by default.
    /// </summary>
    double GetMax();
    /// <summary>
    /// Sets the maximal value of color scale.
    /// </summary>
    void SetMax(double theMax);
    /// <summary>
    /// Returns minimal and maximal values of color scale, 0.0 to 1.0 by default.
    /// </summary>
    void GetRange(double% theMin, double% theMax);
    /// <summary>
    /// Sets the minimal and maximal value of color scale.
    /// Note that values order will be ignored - the minimum and maximum values will be swapped if
    /// needed.
    /// ::SetReversed() should be called to swap displaying order.
    /// </summary>
    void SetRange(double theMin, double theMax);
    /// <summary>
    /// Returns the hue angle corresponding to minimum value, 230 by default (blue).
    /// </summary>
    double HueMin();
    /// <summary>
    /// Returns the hue angle corresponding to maximum value, 0 by default (red).
    /// </summary>
    double HueMax();
    /// <summary>
    /// Returns the hue angle range corresponding to minimum and maximum values, 230 to 0 by default
    /// (blue to red).
    /// </summary>
    void HueRange(double% theMinAngle, double% theMaxAngle);
    /// <summary>
    /// Sets hue angle range corresponding to minimum and maximum values.
    /// The valid angle range is [0, 360], see Quantity_Color and Quantity_TOC_HLS for more details.
    /// </summary>
    void SetHueRange(double theMinAngle, double theMaxAngle);
    /// <summary>
    /// Returns color range corresponding to minimum and maximum values, blue to red by default.
    /// </summary>
    void ColorRange(Macad::Occt::Quantity_Color^ theMinColor, Macad::Occt::Quantity_Color^ theMaxColor);
    /// <summary>
    /// Sets color range corresponding to minimum and maximum values.
    /// </summary>
    void SetColorRange(Macad::Occt::Quantity_Color^ theMinColor, Macad::Occt::Quantity_Color^ theMaxColor);
    /// <summary>
    /// Returns the type of labels, Aspect_TOCSD_AUTO by default.
    /// Aspect_TOCSD_AUTO - labels as boundary values for intervals
    /// Aspect_TOCSD_USER - user specified label is used
    /// </summary>
    Macad::Occt::Aspect_TypeOfColorScaleData GetLabelType();
    /// <summary>
    /// Sets the type of labels.
    /// Aspect_TOCSD_AUTO - labels as boundary values for intervals
    /// Aspect_TOCSD_USER - user specified label is used
    /// </summary>
    void SetLabelType(Macad::Occt::Aspect_TypeOfColorScaleData theType);
    /// <summary>
    /// Returns the type of colors, Aspect_TOCSD_AUTO by default.
    /// Aspect_TOCSD_AUTO - value between Red and Blue
    /// Aspect_TOCSD_USER - user specified color from color map
    /// </summary>
    Macad::Occt::Aspect_TypeOfColorScaleData GetColorType();
    /// <summary>
    /// Sets the type of colors.
    /// Aspect_TOCSD_AUTO - value between Red and Blue
    /// Aspect_TOCSD_USER - user specified color from color map
    /// </summary>
    void SetColorType(Macad::Occt::Aspect_TypeOfColorScaleData theType);
    /// <summary>
    /// Returns the number of color scale intervals, 10 by default.
    /// </summary>
    int GetNumberOfIntervals();
    /// <summary>
    /// Sets the number of color scale intervals.
    /// </summary>
    void SetNumberOfIntervals(int theNum);
    /// <summary>
    /// Returns the color scale title string, empty string by default.
    /// </summary>
    Macad::Occt::TCollection_ExtendedString^ GetTitle();
    /// <summary>
    /// Sets the color scale title string.
    /// </summary>
    void SetTitle(Macad::Occt::TCollection_ExtendedString^ theTitle);
    /// <summary>
    /// Returns the format for numbers, "%.4g" by default.
    /// The same like format for function printf().
    /// Used if GetLabelType() is TOCSD_AUTO;
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ GetFormat();
    /// <summary>
    /// Returns the format of text.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ Format();
    /// <summary>
    /// Sets the color scale auto label format specification.
    /// </summary>
    void SetFormat(Macad::Occt::TCollection_AsciiString^ theFormat);
    /// <summary>
    /// Returns the user specified label with index theIndex.
    /// Index is in range from 1 to GetNumberOfIntervals() or to
    /// GetNumberOfIntervals() + 1 if IsLabelAtBorder() is true.
    /// Returns empty string if label not defined.
    /// </summary>
    Macad::Occt::TCollection_ExtendedString^ GetLabel(int theIndex);
    /// <summary>
    /// Returns the user specified color from color map with index (starts at 1).
    /// Returns default color if index is out of range in color map.
    /// </summary>
    Macad::Occt::Quantity_Color^ GetIntervalColor(int theIndex);
    /// <summary>
    /// Sets the color of the specified interval.
    /// Note that list is automatically resized to include specified index.
    /// </summary>
    /// <param name="theColor">
    /// color value to set
    /// </param>
    /// <param name="theIndex">
    /// index in range [1, GetNumberOfIntervals()];
    /// appended to the end of list if -1 is specified
    /// </param>
    void SetIntervalColor(Macad::Occt::Quantity_Color^ theColor, int theIndex);
    /// <summary>
    /// Returns the user specified labels.
    /// </summary>
    void GetLabels(Macad::Occt::TColStd_SequenceOfExtendedString^ theLabels);
    /// <summary>
    /// Returns the user specified labels.
    /// </summary>
    Macad::Occt::TColStd_SequenceOfExtendedString^ Labels();
    /// <summary>
    /// Sets the color scale labels.
    /// The length of the sequence should be equal to GetNumberOfIntervals() or to
    /// GetNumberOfIntervals() + 1 if IsLabelAtBorder() is true. If length of the sequence does not
    /// much the number of intervals, then these labels will be considered as "free" and will be
    /// located at the virtual intervals corresponding to the number of labels (with flag
    /// IsLabelAtBorder() having the same effect as in normal case).
    /// </summary>
    void SetLabels(Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
    /// <summary>
    /// Returns the user specified colors.
    /// </summary>
    void GetColors(Macad::Occt::Aspect_SequenceOfColor^ theColors);
    /// <summary>
    /// Returns the user specified colors.
    /// </summary>
    Macad::Occt::Aspect_SequenceOfColor^ GetColors();
    /// <summary>
    /// Sets the color scale colors.
    /// The length of the sequence should be equal to GetNumberOfIntervals().
    /// </summary>
    void SetColors(Macad::Occt::Aspect_SequenceOfColor^ theSeq);
    /// <summary>
    /// Populates colors scale by colors of the same lightness value in CIE Lch
    /// color space, distributed by hue, with perceptually uniform differences
    /// between consequent colors.
    /// See MakeUniformColors() for description of parameters.
    /// </summary>
    void SetUniformColors(double theLightness, double theHueFrom, double theHueTo);
    /// <summary>
    /// Generates sequence of colors of the same lightness value in CIE Lch
    /// color space (see #Quantity_TOC_CIELch), with hue values in the specified range.
    /// The colors are distributed across the range such as to have perceptually
    /// same difference between neighbour colors.
    /// For each color, maximal chroma value fitting in sRGB gamut is used.
    /// 
    /// </summary>
    /// <param name="theNbColors">
    /// - number of colors to generate
    /// </param>
    /// <param name="theLightness">
    /// - lightness to be used (0 is black, 100 is white, 32 is
    /// lightness of pure blue)
    /// </param>
    /// <param name="theHueFrom">
    /// - hue value at the start of the scale
    /// </param>
    /// <param name="theHueTo">
    /// - hue value defining the end of the scale
    /// 
    /// Hue value can be out of the range [0, 360], interpreted as modulo 360.
    /// The colors of the scale will be in the order of increasing hue if
    /// theHueTo > theHueFrom, and decreasing otherwise.
    /// </param>
    static Macad::Occt::Aspect_SequenceOfColor^ MakeUniformColors(int theNbColors, double theLightness, double theHueFrom, double theHueTo);
    /// <summary>
    /// Returns the position of labels concerning color filled rectangles, Aspect_TOCSP_RIGHT by
    /// default.
    /// </summary>
    Macad::Occt::Aspect_TypeOfColorScalePosition GetLabelPosition();
    /// <summary>
    /// Sets the color scale labels position relative to color bar.
    /// </summary>
    void SetLabelPosition(Macad::Occt::Aspect_TypeOfColorScalePosition thePos);
    /// <summary>
    /// Returns the position of color scale title, Aspect_TOCSP_LEFT by default.
    /// </summary>
    Macad::Occt::Aspect_TypeOfColorScalePosition GetTitlePosition();
    /// <summary>
    /// Sets the color scale title position.
    /// </summary>
    void SetTitlePosition(Macad::Occt::Aspect_TypeOfColorScalePosition thePos);
    /// <summary>
    /// Returns TRUE if the labels and colors used in reversed order, FALSE by default.
    /// - Normal,   bottom-up order with Minimal value on the Bottom and Maximum value on Top.
    /// - Reversed, top-down  order with Maximum value on the Bottom and Minimum value on Top.
    /// </summary>
    bool IsReversed();
    /// <summary>
    /// Sets true if the labels and colors used in reversed order.
    /// </summary>
    void SetReversed(bool theReverse);
    /// <summary>
    /// Return TRUE if color transition between neighbor intervals
    /// should be linearly interpolated, FALSE by default.
    /// </summary>
    bool IsSmoothTransition();
    /// <summary>
    /// Setup smooth color transition.
    /// </summary>
    void SetSmoothTransition(bool theIsSmooth);
    /// <summary>
    /// Returns TRUE if the labels are placed at border of color intervals, TRUE by default.
    /// The automatically generated label will show value exactly on the current position:
    /// - value connecting two neighbor intervals (TRUE)
    /// - value in the middle of interval (FALSE)
    /// </summary>
    bool IsLabelAtBorder();
    /// <summary>
    /// Sets true if the labels are placed at border of color intervals (TRUE by default).
    /// If set to False, labels will be drawn at color intervals rather than at borders.
    /// </summary>
    void SetLabelAtBorder(bool theOn);
    /// <summary>
    /// Returns TRUE if the color scale has logarithmic intervals, FALSE by default.
    /// </summary>
    bool IsLogarithmic();
    /// <summary>
    /// Sets true if the color scale has logarithmic intervals.
    /// </summary>
    void SetLogarithmic(bool isLogarithmic);
    /// <summary>
    /// Sets the color scale label at index.
    /// Note that list is automatically resized to include specified index.
    /// </summary>
    /// <param name="theLabel">
    /// new label text
    /// </param>
    /// <param name="theIndex">
    /// index in range [1, GetNumberOfIntervals()] or [1, GetNumberOfIntervals() + 1]
    /// if IsLabelAtBorder() is true;
    /// label is appended to the end of list if negative index is specified
    /// </param>
    void SetLabel(Macad::Occt::TCollection_ExtendedString^ theLabel, int theIndex);
    /// <summary>
    /// Returns the size of color bar, 0 and 0 by default
    /// (e.g. should be set by user explicitly before displaying).
    /// </summary>
    void GetSize(int% theBreadth, int% theHeight);
    /// <summary>
    /// Sets the size of color bar.
    /// </summary>
    void SetSize(int theBreadth, int theHeight);
    /// <summary>
    /// Returns the breadth of color bar, 0 by default
    /// (e.g. should be set by user explicitly before displaying).
    /// </summary>
    int GetBreadth();
    /// <summary>
    /// Sets the width of color bar.
    /// </summary>
    void SetBreadth(int theBreadth);
    /// <summary>
    /// Returns the height of color bar, 0 by default
    /// (e.g. should be set by user explicitly before displaying).
    /// </summary>
    int GetHeight();
    /// <summary>
    /// Sets the height of color bar.
    /// </summary>
    void SetHeight(int theHeight);
    /// <summary>
    /// Returns the bottom-left position of color scale, 0x0 by default.
    /// </summary>
    void GetPosition(double% theX, double% theY);
    /// <summary>
    /// Sets the position of color scale.
    /// </summary>
    void SetPosition(int theX, int theY);
    /// <summary>
    /// Returns the left position of color scale, 0 by default.
    /// </summary>
    int GetXPosition();
    /// <summary>
    /// Sets the left position of color scale.
    /// </summary>
    void SetXPosition(int theX);
    /// <summary>
    /// Returns the bottom position of color scale, 0 by default.
    /// </summary>
    int GetYPosition();
    /// <summary>
    /// Sets the bottom position of color scale.
    /// </summary>
    void SetYPosition(int theY);
    /// <summary>
    /// Returns the font height of text labels, 20 by default.
    /// </summary>
    int GetTextHeight();
    /// <summary>
    /// Sets the height of text of color scale.
    /// </summary>
    void SetTextHeight(int theHeight);
    /// <summary>
    /// Returns the width of text.
    /// </summary>
    /// <param name="in]">
    /// theText  the text of which to calculate width.
    /// </param>
    int TextWidth(Macad::Occt::TCollection_ExtendedString^ theText);
    /// <summary>
    /// Returns the height of text.
    /// </summary>
    /// <param name="in]">
    /// theText  the text of which to calculate height.
    /// </param>
    int TextHeight(Macad::Occt::TCollection_ExtendedString^ theText);
    void TextSize(Macad::Occt::TCollection_ExtendedString^ theText, int theHeight, int% theWidth, int% theAscent, int% theDescent);
    /// <summary>
    /// Return true if specified display mode is supported.
    /// </summary>
    bool AcceptDisplayMode(int theMode);
    /// <summary>
    /// Compute presentation.
    /// </summary>
    void Compute(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Graphic3d_Structure^ thePresentation, int theMode);
    /// <summary>
    /// Compute selection - not implemented for color scale.
    /// </summary>
    void ComputeSelection(Macad::Occt::SelectMgr_Selection^ parameter1, int parameter2);
    static Macad::Occt::AIS_ColorScale^ CreateDowncasted(::AIS_ColorScale* instance);
}; // class AIS_ColorScale

//---------------------------------------------------------------------
//  Class  AIS_ConnectedInteractive
//---------------------------------------------------------------------
/// <summary>
/// Creates an arbitrary located instance of another Interactive Object,
/// which serves as a reference.
/// This allows you to use the Connected Interactive
/// Object without having to recalculate presentation,
/// selection or graphic structure. These are deduced
/// from your reference object.
/// The relation between the connected interactive object
/// and its source is generally one of geometric transformation.
/// AIS_ConnectedInteractive class supports selection mode 0 for any InteractiveObject and
/// all standard modes if its reference based on AIS_Shape.
/// Descendants may redefine ComputeSelection() though.
/// Also ConnectedInteractive will handle HLR if its reference based on AIS_Shape.
/// </summary>
public ref class AIS_ConnectedInteractive sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_ConnectedInteractive_h
public:
    Include_AIS_ConnectedInteractive_h
#endif

public:
    AIS_ConnectedInteractive(::AIS_ConnectedInteractive* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_ConnectedInteractive(::AIS_ConnectedInteractive& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_ConnectedInteractive* NativeInstance
    {
        ::AIS_ConnectedInteractive* get()
        {
            return static_cast<::AIS_ConnectedInteractive*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Disconnects the previous view and sets highlight
    /// mode to 0. This highlights the wireframe presentation
    /// aTypeOfPresentation3d.
    /// Top_AllView deactivates hidden line removal.
    /// </summary>
    AIS_ConnectedInteractive(Macad::Occt::PrsMgr_TypeOfPresentation3d aTypeOfPresentation3d);
    /// <summary>
    /// Disconnects the previous view and sets highlight
    /// mode to 0. This highlights the wireframe presentation
    /// aTypeOfPresentation3d.
    /// Top_AllView deactivates hidden line removal.
    /// </summary>
    AIS_ConnectedInteractive();
    /// <summary>
    /// Returns KOI_Object
    /// </summary>
    Macad::Occt::AIS_KindOfInteractive Type();
    /// <summary>
    /// Returns 0
    /// </summary>
    int Signature();
    /// <summary>
    /// Establishes the connection between the Connected
    /// Interactive Object, anotherIobj, and its reference.
    /// </summary>
    void Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj);
    /// <summary>
    /// Establishes the connection between the Connected
    /// Interactive Object, anotherIobj, and its reference.
    /// Locates instance in aLocation.
    /// </summary>
    void Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation);
    /// <summary>
    /// Establishes the connection between the Connected
    /// Interactive Object, anotherIobj, and its reference.
    /// Locates instance in aLocation.
    /// </summary>
    void Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::TopLoc_Datum3D^ theLocation);
    /// <summary>
    /// Returns true if there is a connection established
    /// between the presentation and its source reference.
    /// </summary>
    bool HasConnection();
    /// <summary>
    /// Returns the connection with the reference Interactive Object.
    /// </summary>
    Macad::Occt::AIS_InteractiveObject^ ConnectedTo();
    /// <summary>
    /// Clears the connection with a source reference. The
    /// presentation will no longer be displayed.
    /// Warning Must be done before deleting the presentation.
    /// </summary>
    void Disconnect();
    /// <summary>
    /// Informs the graphic context that the interactive Object
    /// may be decomposed into sub-shapes for dynamic selection.
    /// </summary>
    bool AcceptShapeDecomposition();
    /// <summary>
    /// Return true if reference presentation accepts specified display mode.
    /// </summary>
    bool AcceptDisplayMode(int theMode);
    static Macad::Occt::AIS_ConnectedInteractive^ CreateDowncasted(::AIS_ConnectedInteractive* instance);
}; // class AIS_ConnectedInteractive

//---------------------------------------------------------------------
//  Class  AIS_ExclusionFilter
//---------------------------------------------------------------------
/// <summary>
/// A framework to reject or to accept only objects of
/// given types and/or signatures.
/// Objects are stored, and the stored objects - along
/// with the flag settings - are used to define the filter.
/// Objects to be filtered are compared with the stored
/// objects added to the filter, and are accepted or
/// rejected according to the exclusion flag setting.
/// -   Exclusion flag on
/// -   the function IsOk answers true for all objects,
/// except those of the types and signatures stored
/// in the filter framework
/// -   Exclusion flag off
/// -   the function IsOk answers true for all objects
/// which have the same type and signature as the stored ones.
/// </summary>
public ref class AIS_ExclusionFilter sealed
    : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_AIS_ExclusionFilter_h
public:
    Include_AIS_ExclusionFilter_h
#endif

public:
    AIS_ExclusionFilter(::AIS_ExclusionFilter* nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    AIS_ExclusionFilter(::AIS_ExclusionFilter& nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    property ::AIS_ExclusionFilter* NativeInstance
    {
        ::AIS_ExclusionFilter* get()
        {
            return static_cast<::AIS_ExclusionFilter*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty exclusion filter object defined by
    /// the flag setting ExclusionFlagOn.
    /// By default, the flag is set to true.
    /// </summary>
    AIS_ExclusionFilter(bool ExclusionFlagOn);
    /// <summary>
    /// Constructs an empty exclusion filter object defined by
    /// the flag setting ExclusionFlagOn.
    /// By default, the flag is set to true.
    /// </summary>
    AIS_ExclusionFilter();
    /// <summary>
    /// All the AIS objects of <TypeToExclude>
    /// Will be rejected by the IsOk Method.
    /// </summary>
    AIS_ExclusionFilter(Macad::Occt::AIS_KindOfInteractive TypeToExclude, bool ExclusionFlagOn);
    /// <summary>
    /// All the AIS objects of <TypeToExclude>
    /// Will be rejected by the IsOk Method.
    /// </summary>
    AIS_ExclusionFilter(Macad::Occt::AIS_KindOfInteractive TypeToExclude);
    /// <summary>
    /// Constructs an exclusion filter object defined by the
    /// enumeration value TypeToExclude, the signature
    /// SignatureInType, and the flag setting ExclusionFlagOn.
    /// By default, the flag is set to true.
    /// </summary>
    AIS_ExclusionFilter(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType, bool ExclusionFlagOn);
    /// <summary>
    /// Constructs an exclusion filter object defined by the
    /// enumeration value TypeToExclude, the signature
    /// SignatureInType, and the flag setting ExclusionFlagOn.
    /// By default, the flag is set to true.
    /// </summary>
    AIS_ExclusionFilter(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType);
    bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anObj);
    /// <summary>
    /// Adds the type TypeToExclude to the list of types.
    /// </summary>
    bool Add(Macad::Occt::AIS_KindOfInteractive TypeToExclude);
    bool Add(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType);
    bool Remove(Macad::Occt::AIS_KindOfInteractive TypeToExclude);
    bool Remove(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType);
    void Clear();
    bool IsExclusionFlagOn();
    void SetExclusionFlag(bool theStatus);
    bool IsStored(Macad::Occt::AIS_KindOfInteractive aType);
    void ListOfStoredTypes(Macad::Occt::TColStd_ListOfInteger^ TheList);
    void ListOfSignature(Macad::Occt::AIS_KindOfInteractive aType, Macad::Occt::TColStd_ListOfInteger^ TheStoredList);
    static Macad::Occt::AIS_ExclusionFilter^ CreateDowncasted(::AIS_ExclusionFilter* instance);
}; // class AIS_ExclusionFilter

//---------------------------------------------------------------------
//  Class  AIS_GraphicTool
//---------------------------------------------------------------------
public ref class AIS_GraphicTool sealed
    : public Macad::Occt::BaseClass<::AIS_GraphicTool>
{

#ifdef Include_AIS_GraphicTool_h
public:
    Include_AIS_GraphicTool_h
#endif

public:
    AIS_GraphicTool(::AIS_GraphicTool* nativeInstance)
        : Macad::Occt::BaseClass<::AIS_GraphicTool>( nativeInstance, true )
    {}

    AIS_GraphicTool(::AIS_GraphicTool& nativeInstance)
        : Macad::Occt::BaseClass<::AIS_GraphicTool>( &nativeInstance, false )
    {}

    property ::AIS_GraphicTool* NativeInstance
    {
        ::AIS_GraphicTool* get()
        {
            return static_cast<::AIS_GraphicTool*>(_NativeInstance);
        }
    }

public:
    AIS_GraphicTool();
    static Macad::Occt::Quantity_NameOfColor GetLineColor(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes);
    static void GetLineColor(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes, Macad::Occt::Quantity_Color^ TheLineColor);
    static double GetLineWidth(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes);
    static Macad::Occt::Aspect_TypeOfLine GetLineType(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes);
    static void GetLineAtt(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes, Macad::Occt::Quantity_NameOfColor% aCol, double% aWidth, Macad::Occt::Aspect_TypeOfLine% aTyp);
    static Macad::Occt::Quantity_NameOfColor GetInteriorColor(Macad::Occt::Prs3d_Drawer^ aDrawer);
    static void GetInteriorColor(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::Quantity_Color^ aColor);
    static Macad::Occt::Graphic3d_MaterialAspect^ GetMaterial(Macad::Occt::Prs3d_Drawer^ aDrawer);
}; // class AIS_GraphicTool

//---------------------------------------------------------------------
//  Class  AIS_LightSource
//---------------------------------------------------------------------
/// <summary>
/// Interactive object for a light source.
/// Each type of light source has it's own presentation:
/// - Ambient light is displayed as a sphere at view corner;
/// - Positional light is represented by a sphere or marker;
/// - Spot light is represented by a cone;
/// - Directional light is represented by a set of arrows at the corner of view.
/// In addition, light source name could be displayed, and clicking on presentation will
/// enable/disable light.
/// </summary>
public ref class AIS_LightSource sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_LightSource_h
public:
    Include_AIS_LightSource_h
#endif

public:
    AIS_LightSource(::AIS_LightSource* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_LightSource(::AIS_LightSource& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_LightSource* NativeInstance
    {
        ::AIS_LightSource* get()
        {
            return static_cast<::AIS_LightSource*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the light source by copying Graphic3d_CLight settings.
    /// </summary>
    AIS_LightSource(Macad::Occt::Graphic3d_CLight^ theLightSource);
    /// <summary>
    /// Returns the light.
    /// </summary>
    Macad::Occt::Graphic3d_CLight^ Light();
    /// <summary>
    /// Set the light.
    /// </summary>
    void SetLight(Macad::Occt::Graphic3d_CLight^ theLight);
    /// <summary>
    /// </summary>
    /// @name Light properties
    /// Returns TRUE if the light source name should be displayed; TRUE by default.
    bool ToDisplayName();
    /// <summary>
    /// Show/hide light source name.
    /// </summary>
    void SetDisplayName(bool theToDisplay);
    /// <summary>
    /// Returns TRUE to display light source range as sphere (positional light) or cone (spot light);
    /// TRUE by default. Has no effect for non-zoomable presentation.
    /// </summary>
    bool ToDisplayRange();
    /// <summary>
    /// Show/hide light source range shaded presentation.
    /// </summary>
    void SetDisplayRange(bool theToDisplay);
    /// <summary>
    /// Returns the size of presentation; 50 by default.
    /// </summary>
    double Size();
    /// <summary>
    /// Sets the size of presentation.
    /// </summary>
    void SetSize(double theSize);
    /// <summary>
    /// Returns Sensitive sphere arc size in pixels; 20 by default.
    /// </summary>
    int ArcSize();
    /// <summary>
    /// Sets the size of sensitive sphere arc.
    /// </summary>
    void SetArcSize(int theSize);
    /// <summary>
    /// Returns TRUE if transform-persistence is allowed;
    /// TRUE by default for Ambient and Directional lights
    /// and FALSE by default for Positional and Spot lights.
    /// </summary>
    bool IsZoomable();
    /// <summary>
    /// Sets if transform-persistence is allowed.
    /// </summary>
    void SetZoomable(bool theIsZoomable);
    /// <summary>
    /// Sets if dragging is allowed.
    /// </summary>
    void SetDraggable(bool theIsDraggable);
    /// <summary>
    /// Returns TRUE if mouse click will turn light on/off; TRUE by default.
    /// </summary>
    bool ToSwitchOnClick();
    /// <summary>
    /// Sets if mouse click should turn light on/off.
    /// </summary>
    void SetSwitchOnClick(bool theToHandle);
    /// <summary>
    /// Returns a number of directional light arrows to display; 5 by default.
    /// </summary>
    int NbArrows();
    /// <summary>
    /// Returns a number of directional light arrows to display (supported values: 1, 3, 5, 9).
    /// </summary>
    void SetNbArrows(int theNbArrows);
    /// <summary>
    /// Returns light source icon.
    /// </summary>
    /// <param name="in]">
    /// theIsEnabled  marker index for enabled/disabled light source states
    /// </param>
    Macad::Occt::Graphic3d_MarkerImage^ MarkerImage(bool theIsEnabled);
    /// <summary>
    /// Returns light source icon.
    /// </summary>
    /// <param name="in]">
    /// theIsEnabled  marker index for enabled/disabled light source states
    /// </param>
    Macad::Occt::Aspect_TypeOfMarker MarkerType(bool theIsEnabled);
    /// <summary>
    /// Sets custom icon to light source.
    /// </summary>
    void SetMarkerImage(Macad::Occt::Graphic3d_MarkerImage^ theImage, bool theIsEnabled);
    /// <summary>
    /// Sets standard icon to light source.
    /// </summary>
    void SetMarkerType(Macad::Occt::Aspect_TypeOfMarker theType, bool theIsEnabled);
    /// <summary>
    /// Returns tessellation level for quadric surfaces; 30 by default.
    /// </summary>
    int NbSplitsQuadric();
    /// <summary>
    /// Sets tessellation level for quadric surfaces.
    /// </summary>
    void SetNbSplitsQuadric(int theNbSplits);
    /// <summary>
    /// Returns tessellation level for arrows; 20 by default.
    /// </summary>
    int NbSplitsArrow();
    /// <summary>
    /// Sets tessellation level for arrows.
    /// </summary>
    void SetNbSplitsArrow(int theNbSplits);
    /// <summary>
    /// Returns kind of the object.
    /// </summary>
    Macad::Occt::AIS_KindOfInteractive Type();
    static Macad::Occt::AIS_LightSource^ CreateDowncasted(::AIS_LightSource* instance);
}; // class AIS_LightSource

//---------------------------------------------------------------------
//  Class  AIS_LightSourceOwner
//---------------------------------------------------------------------
/// <summary>
/// Owner of AIS_LightSource presentation.
/// </summary>
public ref class AIS_LightSourceOwner sealed
    : public Macad::Occt::SelectMgr_EntityOwner
{

#ifdef Include_AIS_LightSourceOwner_h
public:
    Include_AIS_LightSourceOwner_h
#endif

public:
    AIS_LightSourceOwner(::AIS_LightSourceOwner* nativeInstance)
        : Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
    {}

    AIS_LightSourceOwner(::AIS_LightSourceOwner& nativeInstance)
        : Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
    {}

    property ::AIS_LightSourceOwner* NativeInstance
    {
        ::AIS_LightSourceOwner* get()
        {
            return static_cast<::AIS_LightSourceOwner*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Main constructor.
    /// </summary>
    AIS_LightSourceOwner(Macad::Occt::AIS_LightSource^ theObject, int thePriority);
    /// <summary>
    /// Main constructor.
    /// </summary>
    AIS_LightSourceOwner(Macad::Occt::AIS_LightSource^ theObject);
    /// <summary>
    /// Handle mouse button click event.
    /// </summary>
    bool HandleMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick);
    /// <summary>
    /// Highlights selectable object's presentation with display mode in presentation manager with
    /// given highlight style. Also a check for auto-highlight is performed - if selectable object
    /// manages highlighting on its own, execution will be passed to
    /// SelectMgr_SelectableObject::HilightOwnerWithColor method.
    /// </summary>
    void HilightWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode);
    /// <summary>
    /// Always update dynamic highlighting.
    /// </summary>
    bool IsForcedHilight();
    static Macad::Occt::AIS_LightSourceOwner^ CreateDowncasted(::AIS_LightSourceOwner* instance);
}; // class AIS_LightSourceOwner

//---------------------------------------------------------------------
//  Class  AIS_Line
//---------------------------------------------------------------------
/// <summary>
/// Constructs line datums to be used in construction of
/// composite shapes.
/// </summary>
public ref class AIS_Line sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Line_h
public:
    Include_AIS_Line_h
#endif

public:
    AIS_Line(::AIS_Line* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_Line(::AIS_Line& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_Line* NativeInstance
    {
        ::AIS_Line* get()
        {
            return static_cast<::AIS_Line*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the line aLine.
    /// </summary>
    AIS_Line(Macad::Occt::Geom_Line^ aLine);
    /// <summary>
    /// Initializes a starting point aStartPoint
    /// and a finishing point aEndPoint for the line.
    /// </summary>
    AIS_Line(Macad::Occt::Geom_Point^ aStartPoint, Macad::Occt::Geom_Point^ aEndPoint);
    /// <summary>
    /// Returns the signature 5.
    /// </summary>
    int Signature();
    /// <summary>
    /// Returns the type Datum.
    /// </summary>
    Macad::Occt::AIS_KindOfInteractive Type();
    /// <summary>
    /// Constructs an infinite line.
    /// </summary>
    Macad::Occt::Geom_Line^ Line();
    /// <summary>
    /// Returns the starting point thePStart and the end point thePEnd of the line set by SetPoints.
    /// </summary>
    void Points(Macad::Occt::Geom_Point^ thePStart, Macad::Occt::Geom_Point^ thePEnd);
    /// <summary>
    /// instantiates an infinite line.
    /// </summary>
    void SetLine(Macad::Occt::Geom_Line^ theLine);
    /// <summary>
    /// Sets the starting point thePStart and ending point thePEnd of the
    /// infinite line to create a finite line segment.
    /// </summary>
    void SetPoints(Macad::Occt::Geom_Point^ thePStart, Macad::Occt::Geom_Point^ thePEnd);
    /// <summary>
    /// Provides a new color setting aColor for the line in the drawing tool, or "Drawer".
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ aColor);
    /// <summary>
    /// Provides the new width setting aValue for the line in
    /// the drawing tool, or "Drawer".
    /// </summary>
    void SetWidth(double aValue);
    /// <summary>
    /// Removes the color setting and returns the original color.
    /// </summary>
    void UnsetColor();
    /// <summary>
    /// Removes the width setting and returns the original width.
    /// </summary>
    void UnsetWidth();
    static Macad::Occt::AIS_Line^ CreateDowncasted(::AIS_Line* instance);
}; // class AIS_Line

//---------------------------------------------------------------------
//  Class  AIS_ManipulatorObjectSequence
//---------------------------------------------------------------------
public ref class AIS_ManipulatorObjectSequence sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::AIS_InteractiveObject^>
{

#ifdef Include_AIS_ManipulatorObjectSequence_h
public:
    Include_AIS_ManipulatorObjectSequence_h
#endif

public:
    AIS_ManipulatorObjectSequence(::AIS_ManipulatorObjectSequence* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    AIS_ManipulatorObjectSequence(::AIS_ManipulatorObjectSequence& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::AIS_ManipulatorObjectSequence* NativeInstance
    {
        ::AIS_ManipulatorObjectSequence* get()
        {
            return static_cast<::AIS_ManipulatorObjectSequence*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::AIS_ManipulatorObjectSequence::Iterator>
    {

#ifdef Include_AIS_ManipulatorObjectSequence_Iterator_h
    public:
        Include_AIS_ManipulatorObjectSequence_Iterator_h
#endif

    public:
        Iterator(::AIS_ManipulatorObjectSequence::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::AIS_ManipulatorObjectSequence::Iterator>( nativeInstance, true )
        {}

        Iterator(::AIS_ManipulatorObjectSequence::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::AIS_ManipulatorObjectSequence::Iterator>( &nativeInstance, false )
        {}

        property ::AIS_ManipulatorObjectSequence::Iterator* NativeInstance
        {
            ::AIS_ManipulatorObjectSequence::Iterator* get()
            {
                return static_cast<::AIS_ManipulatorObjectSequence::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::AIS_InteractiveObject^ Value();
        Macad::Occt::AIS_InteractiveObject^ ChangeValue();
        bool IsEqual(Macad::Occt::AIS_ManipulatorObjectSequence::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    AIS_ManipulatorObjectSequence();
    /* Method skipped due to unknown mapping: void AIS_ManipulatorObjectSequence(NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> theOther, ) */
    /* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> Sequence() */
    void Append(Macad::Occt::AIS_InteractiveObject^ theItem);
    /* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> theSequence, ) */
    /* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<AIS_InteractiveObject>> ChangeSequence() */
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
    Macad::Occt::AIS_ManipulatorObjectSequence^ Assign(Macad::Occt::AIS_ManipulatorObjectSequence^ theOther);
    void Remove(Macad::Occt::AIS_ManipulatorObjectSequence::Iterator^ thePosition);
    void Prepend(Macad::Occt::AIS_InteractiveObject^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem);
    void InsertAfter(Macad::Occt::AIS_ManipulatorObjectSequence::Iterator^ thePosition, Macad::Occt::AIS_InteractiveObject^ theItem);
    void Split(int theIndex, Macad::Occt::AIS_ManipulatorObjectSequence^ theSeq);
    Macad::Occt::AIS_InteractiveObject^ First();
    Macad::Occt::AIS_InteractiveObject^ ChangeFirst();
    Macad::Occt::AIS_InteractiveObject^ Last();
    Macad::Occt::AIS_InteractiveObject^ ChangeLast();
    virtual Macad::Occt::AIS_InteractiveObject^ Value(int theIndex);
    Macad::Occt::AIS_InteractiveObject^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem);
    static Macad::Occt::AIS_ManipulatorObjectSequence^ CreateDowncasted(::AIS_ManipulatorObjectSequence* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::AIS_InteractiveObject^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class AIS_ManipulatorObjectSequence

//---------------------------------------------------------------------
//  Class  AIS_ManipulatorOwner
//---------------------------------------------------------------------
/// <summary>
/// Entity owner for selection management of AIS_Manipulator object.
/// </summary>
public ref class AIS_ManipulatorOwner sealed
    : public Macad::Occt::SelectMgr_EntityOwner
{

#ifdef Include_AIS_ManipulatorOwner_h
public:
    Include_AIS_ManipulatorOwner_h
#endif

public:
    AIS_ManipulatorOwner(::AIS_ManipulatorOwner* nativeInstance)
        : Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
    {}

    AIS_ManipulatorOwner(::AIS_ManipulatorOwner& nativeInstance)
        : Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
    {}

    property ::AIS_ManipulatorOwner* NativeInstance
    {
        ::AIS_ManipulatorOwner* get()
        {
            return static_cast<::AIS_ManipulatorOwner*>(_NativeInstance);
        }
    }

public:
    AIS_ManipulatorOwner(Macad::Occt::SelectMgr_SelectableObject^ theSelObject, int theIndex, Macad::Occt::AIS_ManipulatorMode theMode, int thePriority);
    AIS_ManipulatorOwner(Macad::Occt::SelectMgr_SelectableObject^ theSelObject, int theIndex, Macad::Occt::AIS_ManipulatorMode theMode);
    void HilightWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode);
    bool IsHilighted(Macad::Occt::PrsMgr_PresentationManager^ thePM, int theMode);
    void Unhilight(Macad::Occt::PrsMgr_PresentationManager^ thePM, int theMode);
    Macad::Occt::AIS_ManipulatorMode Mode();
    /// <summary>
    /// </summary>
    /// <returns>
    /// index of manipulator axis.
    /// </returns>
    int Index();
    static Macad::Occt::AIS_ManipulatorOwner^ CreateDowncasted(::AIS_ManipulatorOwner* instance);
}; // class AIS_ManipulatorOwner

//---------------------------------------------------------------------
//  Class  AIS_MediaPlayer
//---------------------------------------------------------------------
/// <summary>
/// Presentation for video playback.
/// </summary>
public ref class AIS_MediaPlayer sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_MediaPlayer_h
public:
    Include_AIS_MediaPlayer_h
#endif

public:
    AIS_MediaPlayer(::AIS_MediaPlayer* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_MediaPlayer(::AIS_MediaPlayer& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_MediaPlayer* NativeInstance
    {
        ::AIS_MediaPlayer* get()
        {
            return static_cast<::AIS_MediaPlayer*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    AIS_MediaPlayer();
    /// <summary>
    /// Open specified file.
    /// </summary>
    void OpenInput(Macad::Occt::TCollection_AsciiString^ thePath, bool theToWait);
    /// <summary>
    /// Display new frame.
    /// </summary>
    bool PresentFrame(Macad::Occt::Graphic3d_Vec2i^ theLeftCorner, Macad::Occt::Graphic3d_Vec2i^ theMaxSize);
    /* Method skipped due to unknown mapping: Media_PlayerContext PlayerContext() */
    /// <summary>
    /// Switch playback state.
    /// </summary>
    void PlayPause();
    /// <summary>
    /// Schedule player to be closed.
    /// </summary>
    void SetClosePlayer();
    /// <summary>
    /// Return duration.
    /// </summary>
    double Duration();
    static Macad::Occt::AIS_MediaPlayer^ CreateDowncasted(::AIS_MediaPlayer* instance);
}; // class AIS_MediaPlayer

//---------------------------------------------------------------------
//  Class  AIS_MultipleConnectedInteractive
//---------------------------------------------------------------------
/// <summary>
/// Defines an Interactive Object by gathering together
/// several object presentations. This is done through a
/// list of interactive objects. These can also be
/// Connected objects. That way memory-costly
/// calculations of presentation are avoided.
/// </summary>
public ref class AIS_MultipleConnectedInteractive sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_MultipleConnectedInteractive_h
public:
    Include_AIS_MultipleConnectedInteractive_h
#endif

public:
    AIS_MultipleConnectedInteractive(::AIS_MultipleConnectedInteractive* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_MultipleConnectedInteractive(::AIS_MultipleConnectedInteractive& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_MultipleConnectedInteractive* NativeInstance
    {
        ::AIS_MultipleConnectedInteractive* get()
        {
            return static_cast<::AIS_MultipleConnectedInteractive*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the Interactive Object with multiple
    /// connections to AIS_Interactive objects.
    /// </summary>
    AIS_MultipleConnectedInteractive();
    /// <summary>
    /// Establishes the connection between the Connected Interactive Object, theInteractive, and its
    /// reference. Locates instance in theLocation and applies specified transformation persistence
    /// mode.
    /// </summary>
    /// <returns>
    /// created instance object (AIS_ConnectedInteractive or AIS_MultipleConnectedInteractive)
    /// </returns>
    Macad::Occt::AIS_InteractiveObject^ Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::TopLoc_Datum3D^ theLocation, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
    Macad::Occt::AIS_KindOfInteractive Type();
    int Signature();
    /// <summary>
    /// Returns true if the object is connected to others.
    /// </summary>
    bool HasConnection();
    /// <summary>
    /// Removes the connection with theInteractive.
    /// </summary>
    void Disconnect(Macad::Occt::AIS_InteractiveObject^ theInteractive);
    /// <summary>
    /// Clears all the connections to objects.
    /// </summary>
    void DisconnectAll();
    /// <summary>
    /// Informs the graphic context that the interactive Object
    /// may be decomposed into sub-shapes for dynamic selection.
    /// </summary>
    bool AcceptShapeDecomposition();
    /// <summary>
    /// Returns common entity owner if the object is an assembly
    /// </summary>
    Macad::Occt::SelectMgr_EntityOwner^ GetAssemblyOwner();
    /// <summary>
    /// Returns the owner of mode for selection of object as a whole
    /// </summary>
    Macad::Occt::SelectMgr_EntityOwner^ GlobalSelOwner();
    /// <summary>
    /// Assigns interactive context.
    /// </summary>
    void SetContext(Macad::Occt::AIS_InteractiveContext^ theCtx);
    /// <summary>
    /// Establishes the connection between the Connected Interactive Object, theInteractive, and its
    /// reference. Copies local transformation and transformation persistence mode from
    /// theInteractive.
    /// </summary>
    /// <returns>
    /// created instance object (AIS_ConnectedInteractive or AIS_MultipleConnectedInteractive)
    /// </returns>
    Macad::Occt::AIS_InteractiveObject^ Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj);
    /// <summary>
    /// Establishes the connection between the Connected Interactive Object, theInteractive, and its
    /// reference. Locates instance in theLocation and copies transformation persistence mode from
    /// theInteractive.
    /// </summary>
    /// <returns>
    /// created instance object (AIS_ConnectedInteractive or AIS_MultipleConnectedInteractive)
    /// </returns>
    Macad::Occt::AIS_InteractiveObject^ Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation);
    /// <summary>
    /// Establishes the connection between the Connected Interactive Object, theInteractive, and its
    /// reference. Locates instance in theLocation and applies specified transformation persistence
    /// mode.
    /// </summary>
    /// <returns>
    /// created instance object (AIS_ConnectedInteractive or AIS_MultipleConnectedInteractive)
    /// </returns>
    Macad::Occt::AIS_InteractiveObject^ Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers);
    static Macad::Occt::AIS_MultipleConnectedInteractive^ CreateDowncasted(::AIS_MultipleConnectedInteractive* instance);
}; // class AIS_MultipleConnectedInteractive

//---------------------------------------------------------------------
//  Class  AIS_Plane
//---------------------------------------------------------------------
/// <summary>
/// Constructs plane datums to be used in construction of
/// composite shapes.
/// </summary>
public ref class AIS_Plane sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Plane_h
public:
    Include_AIS_Plane_h
#endif

public:
    AIS_Plane(::AIS_Plane* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_Plane(::AIS_Plane& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_Plane* NativeInstance
    {
        ::AIS_Plane* get()
        {
            return static_cast<::AIS_Plane*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// initializes the plane aComponent. If
    /// the mode aCurrentMode equals true, the drawing
    /// tool, "Drawer" is not initialized.
    /// </summary>
    AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, bool aCurrentMode);
    /// <summary>
    /// initializes the plane aComponent. If
    /// the mode aCurrentMode equals true, the drawing
    /// tool, "Drawer" is not initialized.
    /// </summary>
    AIS_Plane(Macad::Occt::Geom_Plane^ aComponent);
    /// <summary>
    /// initializes the plane aComponent and
    /// the point aCenter. If the mode aCurrentMode
    /// equals true, the drawing tool, "Drawer" is not
    /// initialized. aCurrentMode equals true, the drawing
    /// tool, "Drawer" is not initialized.
    /// </summary>
    AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, bool aCurrentMode);
    /// <summary>
    /// initializes the plane aComponent and
    /// the point aCenter. If the mode aCurrentMode
    /// equals true, the drawing tool, "Drawer" is not
    /// initialized. aCurrentMode equals true, the drawing
    /// tool, "Drawer" is not initialized.
    /// </summary>
    AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter);
    /// <summary>
    /// initializes the plane aComponent, the
    /// point aCenter, and the minimum and maximum
    /// points, aPmin and aPmax. If the mode
    /// aCurrentMode equals true, the drawing tool, "Drawer" is not initialized.
    /// </summary>
    AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, Macad::Occt::Pnt aPmin, Macad::Occt::Pnt aPmax, bool aCurrentMode);
    /// <summary>
    /// initializes the plane aComponent, the
    /// point aCenter, and the minimum and maximum
    /// points, aPmin and aPmax. If the mode
    /// aCurrentMode equals true, the drawing tool, "Drawer" is not initialized.
    /// </summary>
    AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, Macad::Occt::Pnt aPmin, Macad::Occt::Pnt aPmax);
    AIS_Plane(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfPlane aPlaneType, bool aCurrentMode);
    AIS_Plane(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfPlane aPlaneType);
    /// <summary>
    /// Same value for x and y directions
    /// </summary>
    void SetSize(double aValue);
    /// <summary>
    /// Sets the size defined by the length along the X axis
    /// XVal and the length along the Y axis YVal.
    /// </summary>
    void SetSize(double Xval, double YVal);
    void UnsetSize();
    bool Size(double% X, double% Y);
    bool HasOwnSize();
    /// <summary>
    /// Sets transform persistence for zoom with value of minimum size
    /// </summary>
    void SetMinimumSize(double theValue);
    /// <summary>
    /// Unsets transform persistence zoom
    /// </summary>
    void UnsetMinimumSize();
    /// <summary>
    /// Returns true if transform persistence for zoom is set
    /// </summary>
    bool HasMinimumSize();
    int Signature();
    Macad::Occt::AIS_KindOfInteractive Type();
    /// <summary>
    /// Returns the component specified in SetComponent.
    /// </summary>
    Macad::Occt::Geom_Plane^ Component();
    /// <summary>
    /// Creates an instance of the plane aComponent.
    /// </summary>
    void SetComponent(Macad::Occt::Geom_Plane^ aComponent);
    /// <summary>
    /// Returns the settings for the selected plane
    /// aComponent, provided in SetPlaneAttributes.
    /// These include the points aCenter, aPmin, and aPmax
    /// </summary>
    bool PlaneAttributes(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt% aCenter, Macad::Occt::Pnt% aPmin, Macad::Occt::Pnt% aPmax);
    /// <summary>
    /// Allows you to provide settings other than default ones
    /// for the selected plane. These include: center point
    /// aCenter, maximum aPmax and minimum aPmin.
    /// </summary>
    void SetPlaneAttributes(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, Macad::Occt::Pnt aPmin, Macad::Occt::Pnt aPmax);
    /// <summary>
    /// Returns the coordinates of the center point.
    /// </summary>
    Macad::Occt::Pnt Center();
    /// <summary>
    /// Provides settings for the center theCenter other than (0, 0, 0).
    /// </summary>
    void SetCenter(Macad::Occt::Pnt theCenter);
    /// <summary>
    /// Allows you to provide settings for the position and
    /// direction of one of the plane's axes, aComponent, in
    /// 3D space. The coordinate system used is
    /// right-handed, and the type of plane aPlaneType is one of:
    /// -   AIS_ TOPL_Unknown
    /// -   AIS_ TOPL_XYPlane
    /// -   AIS_ TOPL_XZPlane
    /// -   AIS_ TOPL_YZPlane}.
    /// </summary>
    void SetAxis2Placement(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfPlane aPlaneType);
    /// <summary>
    /// Returns the position of the plane's axis2 system
    /// identifying the x, y, or z axis and giving the plane a
    /// direction in 3D space. An axis2 system is a right-handed coordinate system.
    /// </summary>
    Macad::Occt::Geom_Axis2Placement^ Axis2Placement();
    /// <summary>
    /// Returns the type of plane - xy, yz, xz or unknown.
    /// </summary>
    Macad::Occt::AIS_TypeOfPlane TypeOfPlane();
    /// <summary>
    /// Returns the type of plane - xy, yz, or xz.
    /// </summary>
    bool IsXYZPlane();
    /// <summary>
    /// Returns the non-default current display mode set by SetCurrentMode.
    /// </summary>
    bool CurrentMode();
    /// <summary>
    /// Allows you to provide settings for a non-default
    /// current display mode.
    /// </summary>
    void SetCurrentMode(bool theCurrentMode);
    /// <summary>
    /// Returns true if the display mode selected, aMode, is valid for planes.
    /// </summary>
    bool AcceptDisplayMode(int aMode);
    /// <summary>
    /// connection to <aCtx> default drawer implies a recomputation of Frame values.
    /// </summary>
    void SetContext(Macad::Occt::AIS_InteractiveContext^ aCtx);
    /* Method skipped due to unknown mapping: Select3D_TypeOfSensitivity TypeOfSensitivity() */
    /* Method skipped due to unknown mapping: void SetTypeOfSensitivity(Select3D_TypeOfSensitivity theTypeOfSensitivity, ) */
    void ComputeSelection(Macad::Occt::SelectMgr_Selection^ theSelection, int theMode);
    void SetColor(Macad::Occt::Quantity_Color^ aColor);
    void UnsetColor();
    static Macad::Occt::AIS_Plane^ CreateDowncasted(::AIS_Plane* instance);
}; // class AIS_Plane

//---------------------------------------------------------------------
//  Class  AIS_Point
//---------------------------------------------------------------------
/// <summary>
/// Constructs point datums to be used in construction of
/// composite shapes. The datum is displayed as the plus marker +.
/// </summary>
public ref class AIS_Point
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Point_h
public:
    Include_AIS_Point_h
#endif

protected:
    AIS_Point(InitMode init)
        : Macad::Occt::AIS_InteractiveObject( init )
    {}

public:
    AIS_Point(::AIS_Point* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_Point(::AIS_Point& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_Point* NativeInstance
    {
        ::AIS_Point* get()
        {
            return static_cast<::AIS_Point*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the point aComponent from which the point
    /// datum will be built.
    /// </summary>
    AIS_Point(Macad::Occt::Geom_Point^ aComponent);
    /// <summary>
    /// Returns index 1, the default index for a point.
    /// </summary>
    int Signature();
    /// <summary>
    /// Indicates that a point is a datum.
    /// </summary>
    Macad::Occt::AIS_KindOfInteractive Type();
    /// <summary>
    /// Returns the component specified in SetComponent.
    /// </summary>
    Macad::Occt::Geom_Point^ Component();
    /// <summary>
    /// Constructs an instance of the point aComponent.
    /// </summary>
    void SetComponent(Macad::Occt::Geom_Point^ aComponent);
    /// <summary>
    /// Returns true if the display mode selected is valid for point datums.
    /// </summary>
    bool AcceptDisplayMode(int aMode);
    /// <summary>
    /// Allows you to provide settings for the Color.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Allows you to remove color settings.
    /// </summary>
    void UnsetColor();
    /// <summary>
    /// Allows you to provide settings for a marker. These include
    /// -   type of marker,
    /// -   marker color,
    /// -   scale factor.
    /// </summary>
    void SetMarker(Macad::Occt::Aspect_TypeOfMarker aType);
    /// <summary>
    /// Removes the marker settings.
    /// </summary>
    void UnsetMarker();
    /// <summary>
    /// Returns true if the point datum has a marker.
    /// </summary>
    bool HasMarker();
    /// <summary>
    /// Converts a point into a vertex.
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex();
    static Macad::Occt::AIS_Point^ CreateDowncasted(::AIS_Point* instance);
}; // class AIS_Point

//---------------------------------------------------------------------
//  Class  AIS_PlaneTrihedron
//---------------------------------------------------------------------
/// <summary>
/// To construct a selectable 2d axis system in a 3d
/// drawing. This can be placed anywhere in the 3d
/// system, and provides a coordinate system for
/// drawing curves and shapes in a plane.
/// There are 3 selection modes:
/// -   mode 0   selection of the whole plane "trihedron"
/// -   mode 1   selection of the origin of the plane "trihedron"
/// -   mode 2   selection of the axes.
/// Warning
/// For the presentation of planes and trihedra, the
/// millimetre is default unit of length, and 100 the default
/// value for the representation of the axes. If you modify
/// these dimensions, you must temporarily recover the
/// Drawer object. From inside it, take the Aspects in
/// which   the values for length are stocked, for example,
/// PlaneAspect for planes and LineAspect for
/// trihedra. Change these values and recalculate the presentation.
/// </summary>
public ref class AIS_PlaneTrihedron sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_PlaneTrihedron_h
public:
    Include_AIS_PlaneTrihedron_h
#endif

public:
    AIS_PlaneTrihedron(::AIS_PlaneTrihedron* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_PlaneTrihedron(::AIS_PlaneTrihedron& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_PlaneTrihedron* NativeInstance
    {
        ::AIS_PlaneTrihedron* get()
        {
            return static_cast<::AIS_PlaneTrihedron*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the plane aPlane. The plane trihedron is
    /// constructed from this and an axis.
    /// </summary>
    AIS_PlaneTrihedron(Macad::Occt::Geom_Plane^ aPlane);
    /// <summary>
    /// Returns the component specified in SetComponent.
    /// </summary>
    Macad::Occt::Geom_Plane^ Component();
    /// <summary>
    /// Creates an instance of the component object aPlane.
    /// </summary>
    void SetComponent(Macad::Occt::Geom_Plane^ aPlane);
    /// <summary>
    /// Returns the "XAxis".
    /// </summary>
    Macad::Occt::AIS_Line^ XAxis();
    /// <summary>
    /// Returns the "YAxis".
    /// </summary>
    Macad::Occt::AIS_Line^ YAxis();
    /// <summary>
    /// Returns the point of origin of the plane trihedron.
    /// </summary>
    Macad::Occt::AIS_Point^ Position();
    /// <summary>
    /// Sets the length of the X and Y axes.
    /// </summary>
    void SetLength(double theLength);
    /// <summary>
    /// Returns the length of X and Y axes.
    /// </summary>
    double GetLength();
    /// <summary>
    /// Returns true if the display mode selected, aMode, is valid.
    /// </summary>
    bool AcceptDisplayMode(int aMode);
    int Signature();
    /// <summary>
    /// Returns datum as the type of Interactive Object.
    /// </summary>
    Macad::Occt::AIS_KindOfInteractive Type();
    /// <summary>
    /// Allows you to provide settings for the color aColor.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    void SetXLabel(Macad::Occt::TCollection_AsciiString^ theLabel);
    void SetYLabel(Macad::Occt::TCollection_AsciiString^ theLabel);
    static Macad::Occt::AIS_PlaneTrihedron^ CreateDowncasted(::AIS_PlaneTrihedron* instance);
}; // class AIS_PlaneTrihedron

//---------------------------------------------------------------------
//  Class  AIS_PointCloud
//---------------------------------------------------------------------
/// <summary>
/// Interactive object for set of points.
/// The presentation supports two display modes:
/// - Points.
/// - Bounding box for highlighting.
/// Presentation provides selection by bounding box.
/// Selection and consequently highlighting can disabled by
/// setting default selection mode to -1. There will be no way
/// to select object from interactive view. Any calls to
/// AIS_InteractiveContext::AddOrRemoveSelected should be also prohibited,
/// to avoid programmatic highlighting (workaround is setting non-supported
/// hilight mode, e.g. 100);
/// </summary>
public ref class AIS_PointCloud sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_PointCloud_h
public:
    Include_AIS_PointCloud_h
#endif

public:
    AIS_PointCloud(::AIS_PointCloud* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_PointCloud(::AIS_PointCloud& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_PointCloud* NativeInstance
    {
        ::AIS_PointCloud* get()
        {
            return static_cast<::AIS_PointCloud*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  DisplayMode
    //---------------------------------------------------------------------
    /// <summary>
    /// Display modes supported by this Point Cloud object
    /// </summary>
    enum class DisplayMode
    {
        Points = 0,
        BndBox = 2
    }; // enum  class DisplayMode

    //---------------------------------------------------------------------
    //  Enum  SelectionMode
    //---------------------------------------------------------------------
    /// <summary>
    /// Selection modes supported by this Point Cloud object
    /// </summary>
    enum class SelectionMode
    {
        Points = 0,
        SubsetOfPoints = 1,
        BndBox = 2
    }; // enum  class SelectionMode

    /// <summary>
    /// Constructor.
    /// </summary>
    AIS_PointCloud();
    /// <summary>
    /// Sets the points from array of points.
    /// Method will not copy the input data - array will be stored as handle.
    /// </summary>
    /// <param name="in]">
    /// thePoints  the array of points
    /// </param>
    void SetPoints(Macad::Occt::Graphic3d_ArrayOfPoints^ thePoints);
    /// <summary>
    /// Sets the points with optional colors.
    /// The input data will be copied into internal buffer.
    /// The input arrays should have equal length, otherwise
    /// the presentation will not be computed and displayed.
    /// </summary>
    /// <param name="in]">
    /// theCoords   the array of coordinates
    /// </param>
    /// <param name="in]">
    /// theColors   optional array of colors
    /// </param>
    /// <param name="in]">
    /// theNormals  optional array of normals
    /// </param>
    void SetPoints(Macad::Occt::TColgp_HArray1OfPnt^ theCoords, Macad::Occt::Quantity_HArray1OfColor^ theColors, Macad::Occt::TColgp_HArray1OfDir^ theNormals);
    /// <summary>
    /// Sets the points with optional colors.
    /// The input data will be copied into internal buffer.
    /// The input arrays should have equal length, otherwise
    /// the presentation will not be computed and displayed.
    /// </summary>
    /// <param name="in]">
    /// theCoords   the array of coordinates
    /// </param>
    /// <param name="in]">
    /// theColors   optional array of colors
    /// </param>
    /// <param name="in]">
    /// theNormals  optional array of normals
    /// </param>
    void SetPoints(Macad::Occt::TColgp_HArray1OfPnt^ theCoords, Macad::Occt::Quantity_HArray1OfColor^ theColors);
    /// <summary>
    /// Sets the points with optional colors.
    /// The input data will be copied into internal buffer.
    /// The input arrays should have equal length, otherwise
    /// the presentation will not be computed and displayed.
    /// </summary>
    /// <param name="in]">
    /// theCoords   the array of coordinates
    /// </param>
    /// <param name="in]">
    /// theColors   optional array of colors
    /// </param>
    /// <param name="in]">
    /// theNormals  optional array of normals
    /// </param>
    void SetPoints(Macad::Occt::TColgp_HArray1OfPnt^ theCoords);
    /// <summary>
    /// Get the points array.
    /// Method might be overridden to fill in points array dynamically from application data
    /// structures.
    /// </summary>
    /// <returns>
    /// the array of points
    /// </returns>
    Macad::Occt::Graphic3d_ArrayOfPoints^ GetPoints();
    /// <summary>
    /// Get bounding box for presentation.
    /// </summary>
    Macad::Occt::Bnd_Box^ GetBoundingBox();
    /// <summary>
    /// Setup custom color. Affects presentation only when no per-point color attribute has been
    /// assigned.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Restore default color.
    /// </summary>
    void UnsetColor();
    /// <summary>
    /// Setup custom material. Affects presentation only when normals are defined.
    /// </summary>
    void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMat);
    /// <summary>
    /// Restore default material.
    /// </summary>
    void UnsetMaterial();
    static Macad::Occt::AIS_PointCloud^ CreateDowncasted(::AIS_PointCloud* instance);
}; // class AIS_PointCloud

//---------------------------------------------------------------------
//  Class  AIS_PointCloudOwner
//---------------------------------------------------------------------
/// <summary>
/// Custom owner for highlighting selected points.
/// </summary>
public ref class AIS_PointCloudOwner sealed
    : public Macad::Occt::SelectMgr_EntityOwner
{

#ifdef Include_AIS_PointCloudOwner_h
public:
    Include_AIS_PointCloudOwner_h
#endif

public:
    AIS_PointCloudOwner(::AIS_PointCloudOwner* nativeInstance)
        : Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
    {}

    AIS_PointCloudOwner(::AIS_PointCloudOwner& nativeInstance)
        : Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
    {}

    property ::AIS_PointCloudOwner* NativeInstance
    {
        ::AIS_PointCloudOwner* get()
        {
            return static_cast<::AIS_PointCloudOwner*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Main constructor.
    /// </summary>
    AIS_PointCloudOwner(Macad::Occt::AIS_PointCloud^ theOrigin);
    /// <summary>
    /// Return selected points.
    /// WARNING! Indexation starts with 0 (shifted by -1 comparing to
    /// Graphic3d_ArrayOfPoints::Vertice()).
    /// </summary>
    Macad::Occt::TColStd_HPackedMapOfInteger^ SelectedPoints();
    /// <summary>
    /// Return last detected points.
    /// WARNING! Indexation starts with 0 (shifted by -1 comparing to
    /// Graphic3d_ArrayOfPoints::Vertice()).
    /// </summary>
    Macad::Occt::TColStd_HPackedMapOfInteger^ DetectedPoints();
    /// <summary>
    /// Always update dynamic highlighting.
    /// </summary>
    bool IsForcedHilight();
    /// <summary>
    /// Handle dynamic highlighting.
    /// </summary>
    void HilightWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode);
    /// <summary>
    /// Removes highlighting.
    /// </summary>
    void Unhilight(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, int theMode);
    /// <summary>
    /// Clears presentation.
    /// </summary>
    void Clear(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, int theMode);
    static Macad::Occt::AIS_PointCloudOwner^ CreateDowncasted(::AIS_PointCloudOwner* instance);
}; // class AIS_PointCloudOwner

//---------------------------------------------------------------------
//  Class  AIS_RubberBand
//---------------------------------------------------------------------
/// <summary>
/// Presentation for drawing rubber band selection.
/// It supports rectangle and polygonal selection.
/// It is constructed in 2d overlay.
/// Default configuration is built without filling.
/// For rectangle selection use SetRectangle() method.
/// For polygonal selection use AddPoint() and GetPoints() methods.
/// </summary>
public ref class AIS_RubberBand sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_RubberBand_h
public:
    Include_AIS_RubberBand_h
#endif

public:
    AIS_RubberBand(::AIS_RubberBand* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_RubberBand(::AIS_RubberBand& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_RubberBand* NativeInstance
    {
        ::AIS_RubberBand* get()
        {
            return static_cast<::AIS_RubberBand*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs rubber band with default configuration: empty filling and white solid lines.
    /// </summary>
    /// @warning It binds this object with Graphic3d_ZLayerId_TopOSD layer.
    AIS_RubberBand();
    /// <summary>
    /// Constructs the rubber band with empty filling and defined line style.
    /// </summary>
    /// <param name="in]">
    /// theLineColor  color of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theType  type of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theLineWidth  width of rubber band line. By default it is 1.
    /// </param>
    /// @warning It binds this object with Graphic3d_ZLayerId_TopOSD layer.
    AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, double theLineWidth, bool theIsPolygonClosed);
    /// <summary>
    /// Constructs the rubber band with empty filling and defined line style.
    /// </summary>
    /// <param name="in]">
    /// theLineColor  color of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theType  type of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theLineWidth  width of rubber band line. By default it is 1.
    /// </param>
    /// @warning It binds this object with Graphic3d_ZLayerId_TopOSD layer.
    AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, double theLineWidth);
    /// <summary>
    /// Constructs the rubber band with empty filling and defined line style.
    /// </summary>
    /// <param name="in]">
    /// theLineColor  color of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theType  type of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theLineWidth  width of rubber band line. By default it is 1.
    /// </param>
    /// @warning It binds this object with Graphic3d_ZLayerId_TopOSD layer.
    AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType);
    /// <summary>
    /// Constructs the rubber band with defined filling and line parameters.
    /// </summary>
    /// <param name="in]">
    /// theLineColor  color of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theType  type of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theFillColor  color of rubber band filling
    /// </param>
    /// <param name="in]">
    /// theTransparency  transparency of the filling. 0 is for opaque filling. By default
    /// it is transparent.
    /// </param>
    /// <param name="in]">
    /// theLineWidth  width of rubber band line. By default it is 1.
    /// </param>
    /// @warning It binds this object with Graphic3d_ZLayerId_TopOSD layer.
    AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, Macad::Occt::Quantity_Color^ theFillColor, double theTransparency, double theLineWidth, bool theIsPolygonClosed);
    /// <summary>
    /// Constructs the rubber band with defined filling and line parameters.
    /// </summary>
    /// <param name="in]">
    /// theLineColor  color of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theType  type of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theFillColor  color of rubber band filling
    /// </param>
    /// <param name="in]">
    /// theTransparency  transparency of the filling. 0 is for opaque filling. By default
    /// it is transparent.
    /// </param>
    /// <param name="in]">
    /// theLineWidth  width of rubber band line. By default it is 1.
    /// </param>
    /// @warning It binds this object with Graphic3d_ZLayerId_TopOSD layer.
    AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, Macad::Occt::Quantity_Color^ theFillColor, double theTransparency, double theLineWidth);
    /// <summary>
    /// Constructs the rubber band with defined filling and line parameters.
    /// </summary>
    /// <param name="in]">
    /// theLineColor  color of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theType  type of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theFillColor  color of rubber band filling
    /// </param>
    /// <param name="in]">
    /// theTransparency  transparency of the filling. 0 is for opaque filling. By default
    /// it is transparent.
    /// </param>
    /// <param name="in]">
    /// theLineWidth  width of rubber band line. By default it is 1.
    /// </param>
    /// @warning It binds this object with Graphic3d_ZLayerId_TopOSD layer.
    AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, Macad::Occt::Quantity_Color^ theFillColor, double theTransparency);
    /// <summary>
    /// Constructs the rubber band with defined filling and line parameters.
    /// </summary>
    /// <param name="in]">
    /// theLineColor  color of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theType  type of rubber band lines
    /// </param>
    /// <param name="in]">
    /// theFillColor  color of rubber band filling
    /// </param>
    /// <param name="in]">
    /// theTransparency  transparency of the filling. 0 is for opaque filling. By default
    /// it is transparent.
    /// </param>
    /// <param name="in]">
    /// theLineWidth  width of rubber band line. By default it is 1.
    /// </param>
    /// @warning It binds this object with Graphic3d_ZLayerId_TopOSD layer.
    AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, Macad::Occt::Quantity_Color^ theFillColor);
    /// <summary>
    /// Sets rectangle bounds.
    /// </summary>
    void SetRectangle(int theMinX, int theMinY, int theMaxX, int theMaxY);
    /// <summary>
    /// Adds last point to the list of points. They are used to build polygon for rubber band.
    /// </summary>
    /// @sa RemoveLastPoint(), GetPoints()
    void AddPoint(Macad::Occt::Graphic3d_Vec2i^ thePoint);
    /// <summary>
    /// Remove last point from the list of points for the rubber band polygon.
    /// </summary>
    /// @sa AddPoint(), GetPoints()
    void RemoveLastPoint();
    /* Method skipped due to unknown mapping: NCollection_Sequence<NCollection_Vec2<int>> Points() */
    /// <summary>
    /// Remove all points for the rubber band polygon.
    /// </summary>
    void ClearPoints();
    /// <summary>
    /// </summary>
    /// <returns>
    /// the Color attributes.
    /// </returns>
    Macad::Occt::Quantity_Color^ LineColor();
    /// <summary>
    /// Sets color of lines for rubber band presentation.
    /// </summary>
    void SetLineColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// </summary>
    /// <returns>
    /// the color of rubber band filling.
    /// </returns>
    Macad::Occt::Quantity_Color^ FillColor();
    /// <summary>
    /// Sets color of rubber band filling.
    /// </summary>
    void SetFillColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Sets width of line for rubber band presentation.
    /// </summary>
    void SetLineWidth(double theWidth);
    /// <summary>
    /// </summary>
    /// <returns>
    /// width of lines.
    /// </returns>
    double LineWidth();
    /// <summary>
    /// Sets type of line for rubber band presentation.
    /// </summary>
    void SetLineType(Macad::Occt::Aspect_TypeOfLine theType);
    /// <summary>
    /// </summary>
    /// <returns>
    /// type of lines.
    /// </returns>
    Macad::Occt::Aspect_TypeOfLine LineType();
    /// <summary>
    /// Sets fill transparency.
    /// </summary>
    /// <param name="in]">
    /// theValue  the transparency value. 1.0 is for transparent background
    /// </param>
    void SetFillTransparency(double theValue);
    /// <summary>
    /// </summary>
    /// <returns>
    /// fill transparency.
    /// </returns>
    double FillTransparency();
    /// <summary>
    /// Enable or disable filling of rubber band.
    /// </summary>
    void SetFilling(bool theIsFilling);
    /// <summary>
    /// Enable filling of rubber band with defined parameters.
    /// </summary>
    /// <param name="in]">
    /// theColor  color of filling
    /// </param>
    /// <param name="in]">
    /// theTransparency  transparency of the filling. 0 is for opaque filling.
    /// </param>
    void SetFilling(Macad::Occt::Quantity_Color^ theColor, double theTransparency);
    /// <summary>
    /// </summary>
    /// <returns>
    /// true if filling of rubber band is enabled.
    /// </returns>
    bool IsFilling();
    /// <summary>
    /// </summary>
    /// <returns>
    /// true if automatic closing of rubber band is enabled.
    /// </returns>
    bool IsPolygonClosed();
    /// <summary>
    /// Automatically create an additional line connecting the first and
    /// the last screen points to close the boundary polyline
    /// </summary>
    void SetPolygonClosed(bool theIsPolygonClosed);
    static Macad::Occt::AIS_RubberBand^ CreateDowncasted(::AIS_RubberBand* instance);
}; // class AIS_RubberBand

//---------------------------------------------------------------------
//  Class  AIS_TypeFilter
//---------------------------------------------------------------------
/// <summary>
/// Selects Interactive Objects through their types. The
/// filter questions each Interactive Object in local context
/// to determine whether it has an non-null owner, and if
/// so, whether it is of the desired type. If the object
/// returns true in each case, it is kept. If not, it is rejected.
/// By default, the   interactive object has a None   type
/// and a signature of 0. A filter for type specifies a
/// choice of type out of a range at any level enumerated
/// for type or kind. The choice could be for kind of
/// interactive object, of dimension, of unit, or type of axis,
/// plane or attribute.
/// If you want to give a particular type and signature to
/// your Interactive Object, you must redefine two virtual
/// methods:   Type and Signature.
/// This filter is used in both Neutral Point and open local contexts.
/// In the Collector viewer, you can only locate
/// Interactive Objects which answer positively to the
/// positioned filters when a local context is open.
/// Warning
/// When you close a local context, all temporary
/// interactive objects are deleted, all selection modes
/// concerning the context are cancelled, and all content
/// filters are emptied.
/// </summary>
public ref class AIS_TypeFilter
    : public Macad::Occt::SelectMgr_Filter
{

#ifdef Include_AIS_TypeFilter_h
public:
    Include_AIS_TypeFilter_h
#endif

protected:
    AIS_TypeFilter(InitMode init)
        : Macad::Occt::SelectMgr_Filter( init )
    {}

public:
    AIS_TypeFilter(::AIS_TypeFilter* nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    AIS_TypeFilter(::AIS_TypeFilter& nativeInstance)
        : Macad::Occt::SelectMgr_Filter( nativeInstance )
    {}

    property ::AIS_TypeFilter* NativeInstance
    {
        ::AIS_TypeFilter* get()
        {
            return static_cast<::AIS_TypeFilter*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes filter for type, aGivenKind.
    /// </summary>
    AIS_TypeFilter(Macad::Occt::AIS_KindOfInteractive aGivenKind);
    /// <summary>
    /// Returns False if the transient is not an Interactive
    /// Object, or if the type of the Interactive Object is not
    /// the same as that stored in the filter.
    /// </summary>
    bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
    static Macad::Occt::AIS_TypeFilter^ CreateDowncasted(::AIS_TypeFilter* instance);
}; // class AIS_TypeFilter

//---------------------------------------------------------------------
//  Class  AIS_SignatureFilter
//---------------------------------------------------------------------
/// <summary>
/// Selects Interactive Objects through their signatures
/// and types. The signature provides an
/// additional   characterization of an object's type, and
/// takes the form of an index. The filter questions each
/// Interactive Object in local context to determine
/// whether it has an non-null owner, and if so, whether
/// it has the desired signature. If the object returns true
/// in each case, it is kept. If not, it is rejected.
/// By default, the   interactive object has a None   type
/// and a signature of 0. If you want to give a particular
/// type and signature to your Interactive Object, you
/// must redefine two virtual methods:   Type and Signature.
/// This filter is only used in an open local contexts.
/// In the Collector viewer, you can only locate
/// Interactive Objects which answer positively to the
/// positioned filters when a local context is open.
/// Warning
/// Some signatures have already been used by standard
/// objects delivered in AIS. These include:
/// -   signature 0 - Shape
/// -   signature 1 - Point
/// -   signature 2 - Axis
/// -   signature 3 - Trihedron
/// -   signature 4 - PlaneTrihedron
/// -   signature 5 - Line
/// -   signature 6 - Circle
/// -   signature 7 - Plane
/// </summary>
public ref class AIS_SignatureFilter sealed
    : public Macad::Occt::AIS_TypeFilter
{

#ifdef Include_AIS_SignatureFilter_h
public:
    Include_AIS_SignatureFilter_h
#endif

public:
    AIS_SignatureFilter(::AIS_SignatureFilter* nativeInstance)
        : Macad::Occt::AIS_TypeFilter( nativeInstance )
    {}

    AIS_SignatureFilter(::AIS_SignatureFilter& nativeInstance)
        : Macad::Occt::AIS_TypeFilter( nativeInstance )
    {}

    property ::AIS_SignatureFilter* NativeInstance
    {
        ::AIS_SignatureFilter* get()
        {
            return static_cast<::AIS_SignatureFilter*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes the signature filter, adding the signature
    /// specification, aGivenSignature, to that for type,
    /// aGivenKind, in AIS_TypeFilter.
    /// </summary>
    AIS_SignatureFilter(Macad::Occt::AIS_KindOfInteractive aGivenKind, int aGivenSignature);
    /// <summary>
    /// Returns False if the transient is not an AIS_InteractiveObject.
    /// Returns False if the signature of InteractiveObject
    /// is not the same as the stored one in the filter...
    /// </summary>
    bool IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj);
    static Macad::Occt::AIS_SignatureFilter^ CreateDowncasted(::AIS_SignatureFilter* instance);
}; // class AIS_SignatureFilter

//---------------------------------------------------------------------
//  Class  AIS_TextLabel
//---------------------------------------------------------------------
/// <summary>
/// Presentation of the text.
/// </summary>
public ref class AIS_TextLabel sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_TextLabel_h
public:
    Include_AIS_TextLabel_h
#endif

public:
    AIS_TextLabel(::AIS_TextLabel* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_TextLabel(::AIS_TextLabel& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_TextLabel* NativeInstance
    {
        ::AIS_TextLabel* get()
        {
            return static_cast<::AIS_TextLabel*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Default constructor
    /// </summary>
    AIS_TextLabel();
    /// <summary>
    /// Return TRUE for supported display mode.
    /// </summary>
    bool AcceptDisplayMode(int theMode);
    /// <summary>
    /// Setup color of entire text.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Setup transparency within [0, 1] range.
    /// </summary>
    void SetTransparency(double theValue);
    /// <summary>
    /// Removes the transparency setting.
    /// </summary>
    void UnsetTransparency();
    /// <summary>
    /// Material has no effect for text label.
    /// </summary>
    void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ parameter1);
    /// <summary>
    /// Setup text.
    /// </summary>
    void SetText(Macad::Occt::TCollection_ExtendedString^ theText);
    /// <summary>
    /// Setup position.
    /// </summary>
    void SetPosition(Macad::Occt::Pnt thePosition);
    /// <summary>
    /// Setup horizontal justification.
    /// </summary>
    void SetHJustification(Macad::Occt::Graphic3d_HorizontalTextAlignment theHJust);
    /// <summary>
    /// Setup vertical justification.
    /// </summary>
    void SetVJustification(Macad::Occt::Graphic3d_VerticalTextAlignment theVJust);
    /// <summary>
    /// Setup angle.
    /// </summary>
    void SetAngle(double theAngle);
    /// <summary>
    /// Setup zoomable property.
    /// </summary>
    void SetZoomable(bool theIsZoomable);
    /// <summary>
    /// Setup height.
    /// </summary>
    void SetHeight(double theHeight);
    /* Method skipped due to unknown mapping: void SetFontAspect(Font_FontAspect theFontAspect, ) */
    /// <summary>
    /// Setup font.
    /// </summary>
    void SetFont(System::String^ theFont);
    /// <summary>
    /// Setup label orientation in the model 3D space.
    /// </summary>
    void SetOrientation3D(Macad::Occt::Ax2 theOrientation);
    /// <summary>
    /// Reset label orientation in the model 3D space.
    /// </summary>
    void UnsetOrientation3D();
    /// <summary>
    /// Returns position.
    /// </summary>
    Macad::Occt::Pnt Position();
    /// <summary>
    /// Returns the label text.
    /// </summary>
    Macad::Occt::TCollection_ExtendedString^ Text();
    /// <summary>
    /// Returns the font of the label text.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ FontName();
    /* Method skipped due to unknown mapping: Font_FontAspect FontAspect() */
    /// <summary>
    /// Returns label orientation in the model 3D space.
    /// </summary>
    Macad::Occt::Ax2 Orientation3D();
    /// <summary>
    /// Returns true if the current text placement mode uses text orientation in the model 3D space.
    /// </summary>
    bool HasOrientation3D();
    void SetFlipping(bool theIsFlipping);
    bool HasFlipping();
    /// <summary>
    /// Returns flag if text uses position as point of attach
    /// </summary>
    bool HasOwnAnchorPoint();
    /// <summary>
    /// Set flag if text uses position as point of attach
    /// </summary>
    void SetOwnAnchorPoint(bool theOwnAnchorPoint);
    /// <summary>
    /// Define the display type of the text.
    /// 
    /// TODT_NORMAL     Default display. Text only.
    /// TODT_SUBTITLE   There is a subtitle under the text.
    /// TODT_DEKALE     The text is displayed with a 3D style.
    /// TODT_BLEND      The text is displayed in XOR.
    /// TODT_DIMENSION  Dimension line under text will be invisible.
    /// </summary>
    void SetDisplayType(Macad::Occt::Aspect_TypeOfDisplayText theDisplayType);
    /// <summary>
    /// Modifies the colour of the subtitle for the TODT_SUBTITLE TextDisplayType
    /// and the colour of backgroubd for the TODT_DEKALE TextDisplayType.
    /// </summary>
    void SetColorSubTitle(Macad::Occt::Quantity_Color^ theColor);
    /* Method skipped due to unknown mapping: Font_TextFormatter TextFormatter() */
    /* Method skipped due to unknown mapping: void SetTextFormatter(Font_TextFormatter theFormatter, ) */
    static Macad::Occt::AIS_TextLabel^ CreateDowncasted(::AIS_TextLabel* instance);
}; // class AIS_TextLabel

//---------------------------------------------------------------------
//  Class  AIS_TexturedShape
//---------------------------------------------------------------------
/// <summary>
/// This class allows to map textures on shapes.
/// Presentations modes AIS_WireFrame (0) and AIS_Shaded (1) behave in the same manner as in
/// AIS_Shape, whilst new modes 2 (bounding box) and 3 (texture mapping) extends it functionality.
/// 
/// The texture itself is parametrized in (0,1)x(0,1).
/// Each face of a shape located in UV space is provided with these parameters:
/// - Umin - starting position in U
/// - Umax - ending   position in U
/// - Vmin - starting position in V
/// - Vmax - ending   position in V
/// Each face is triangulated and a texel is assigned to each node.
/// Facets are then filled using a linear interpolation of texture between each 'three texels'.
/// User can act on:
/// - the number of occurrences of the texture on the face
/// - the position of the origin of the texture
/// - the scale factor of the texture
/// </summary>
public ref class AIS_TexturedShape sealed
    : public Macad::Occt::AIS_Shape
{

#ifdef Include_AIS_TexturedShape_h
public:
    Include_AIS_TexturedShape_h
#endif

public:
    AIS_TexturedShape(::AIS_TexturedShape* nativeInstance)
        : Macad::Occt::AIS_Shape( nativeInstance )
    {}

    AIS_TexturedShape(::AIS_TexturedShape& nativeInstance)
        : Macad::Occt::AIS_Shape( nativeInstance )
    {}

    property ::AIS_TexturedShape* NativeInstance
    {
        ::AIS_TexturedShape* get()
        {
            return static_cast<::AIS_TexturedShape*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// </summary>
    /// @name main methods
    /// Initializes the textured shape.
    AIS_TexturedShape(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Sets the texture source. <theTextureFileName> can specify path to texture image or one of the
    /// standard predefined textures. The accepted file types are those used in Image_AlienPixMap with
    /// extensions such as rgb, png, jpg and more. To specify the standard predefined texture, the
    /// <theTextureFileName> should contain integer - the Graphic3d_NameOfTexture2D enumeration index.
    /// Setting texture source using this method resets the source pixmap (if was set previously).
    /// </summary>
    void SetTextureFileName(Macad::Occt::TCollection_AsciiString^ theTextureFileName);
    /// <summary>
    /// Sets the texture source. <theTexturePixMap> specifies image data.
    /// Please note that the data should be in Bottom-Up order, the flag of Image_PixMap::IsTopDown()
    /// will be ignored by graphic driver. Setting texture source using this method resets the source
    /// by filename (if was set previously).
    /// </summary>
    void SetTexturePixMap(Macad::Occt::Image_PixMap^ theTexturePixMap);
    /// <summary>
    /// </summary>
    /// <returns>
    /// flag to control texture mapping (for presentation mode 3)
    /// </returns>
    bool TextureMapState();
    /// <summary>
    /// Enables texture mapping
    /// </summary>
    void SetTextureMapOn();
    /// <summary>
    /// Disables texture mapping
    /// </summary>
    void SetTextureMapOff();
    /// <summary>
    /// </summary>
    /// <returns>
    /// path to the texture file
    /// </returns>
    System::String^ TextureFile();
    /// <summary>
    /// </summary>
    /// <returns>
    /// the source pixmap for texture map
    /// </returns>
    Macad::Occt::Image_PixMap^ TexturePixMap();
    /// <summary>
    /// </summary>
    /// @name methods to alter texture mapping properties
    /// Use this method to display the textured shape without recomputing the whole presentation.
    /// Use this method when ONLY the texture content has been changed.
    /// If other parameters (ie: scale factors, texture origin, texture repeat...) have changed, the
    /// whole presentation has to be recomputed:
    /// @code
    /// if (myShape->DisplayMode() == 3)
    /// {
    /// myAISContext->RecomputePrsOnly (myShape);
    /// }
    /// else
    /// {
    /// myAISContext->SetDisplayMode (myShape, 3, Standard_False);
    /// myAISContext->Display        (myShape, Standard_True);
    /// }
    /// @endcode
    void UpdateAttributes();
    /// <summary>
    /// Sets the color.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Removes settings for the color.
    /// </summary>
    void UnsetColor();
    /// <summary>
    /// Sets the material aspect.
    /// </summary>
    void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theAspect);
    /// <summary>
    /// Removes settings for material aspect.
    /// </summary>
    void UnsetMaterial();
    /// <summary>
    /// Enables texture modulation
    /// </summary>
    void EnableTextureModulate();
    /// <summary>
    /// Disables texture modulation
    /// </summary>
    void DisableTextureModulate();
    /// <summary>
    /// </summary>
    /// <returns>
    /// texture repeat flag
    /// </returns>
    bool TextureRepeat();
    /// <summary>
    /// </summary>
    /// <returns>
    /// texture repeat U value
    /// </returns>
    double URepeat();
    /// <summary>
    /// </summary>
    /// <returns>
    /// texture repeat V value
    /// </returns>
    double VRepeat();
    /// <summary>
    /// Sets the number of occurrences of the texture on each face. The texture itself is
    /// parameterized in (0,1) by (0,1). Each face of the shape to be textured is parameterized in UV
    /// space (Umin,Umax) by (Vmin,Vmax). If RepeatYN is set to false, texture coordinates are clamped
    /// in the range (0,1)x(0,1) of the face.
    /// </summary>
    void SetTextureRepeat(bool theToRepeat, double theURepeat, double theVRepeat);
    /// <summary>
    /// Sets the number of occurrences of the texture on each face. The texture itself is
    /// parameterized in (0,1) by (0,1). Each face of the shape to be textured is parameterized in UV
    /// space (Umin,Umax) by (Vmin,Vmax). If RepeatYN is set to false, texture coordinates are clamped
    /// in the range (0,1)x(0,1) of the face.
    /// </summary>
    void SetTextureRepeat(bool theToRepeat, double theURepeat);
    /// <summary>
    /// Sets the number of occurrences of the texture on each face. The texture itself is
    /// parameterized in (0,1) by (0,1). Each face of the shape to be textured is parameterized in UV
    /// space (Umin,Umax) by (Vmin,Vmax). If RepeatYN is set to false, texture coordinates are clamped
    /// in the range (0,1)x(0,1) of the face.
    /// </summary>
    void SetTextureRepeat(bool theToRepeat);
    /// <summary>
    /// </summary>
    /// <returns>
    /// true if texture UV origin has been modified
    /// </returns>
    bool TextureOrigin();
    /// <summary>
    /// </summary>
    /// <returns>
    /// texture origin U position (0.0 by default)
    /// </returns>
    double TextureUOrigin();
    /// <summary>
    /// </summary>
    /// <returns>
    /// texture origin V position (0.0 by default)
    /// </returns>
    double TextureVOrigin();
    /// <summary>
    /// Use this method to change the origin of the texture. The texel (0,0) will be mapped to the
    /// surface (UOrigin,VOrigin)
    /// </summary>
    void SetTextureOrigin(bool theToSetTextureOrigin, double theUOrigin, double theVOrigin);
    /// <summary>
    /// Use this method to change the origin of the texture. The texel (0,0) will be mapped to the
    /// surface (UOrigin,VOrigin)
    /// </summary>
    void SetTextureOrigin(bool theToSetTextureOrigin, double theUOrigin);
    /// <summary>
    /// Use this method to change the origin of the texture. The texel (0,0) will be mapped to the
    /// surface (UOrigin,VOrigin)
    /// </summary>
    void SetTextureOrigin(bool theToSetTextureOrigin);
    /// <summary>
    /// </summary>
    /// <returns>
    /// true if scale factor should be applied to texture mapping
    /// </returns>
    bool TextureScale();
    /// <summary>
    /// </summary>
    /// <returns>
    /// scale factor for U coordinate (1.0 by default)
    /// </returns>
    double TextureScaleU();
    /// <summary>
    /// </summary>
    /// <returns>
    /// scale factor for V coordinate (1.0 by default)
    /// </returns>
    double TextureScaleV();
    /// <summary>
    /// Use this method to scale the texture (percent of the face).
    /// You can specify a scale factor for both U and V.
    /// Example: if you set ScaleU and ScaleV to 0.5 and you enable texture repeat,
    /// the texture will appear twice on the face in each direction.
    /// </summary>
    void SetTextureScale(bool theToSetTextureScale, double theScaleU, double theScaleV);
    /// <summary>
    /// Use this method to scale the texture (percent of the face).
    /// You can specify a scale factor for both U and V.
    /// Example: if you set ScaleU and ScaleV to 0.5 and you enable texture repeat,
    /// the texture will appear twice on the face in each direction.
    /// </summary>
    void SetTextureScale(bool theToSetTextureScale, double theScaleU);
    /// <summary>
    /// Use this method to scale the texture (percent of the face).
    /// You can specify a scale factor for both U and V.
    /// Example: if you set ScaleU and ScaleV to 0.5 and you enable texture repeat,
    /// the texture will appear twice on the face in each direction.
    /// </summary>
    void SetTextureScale(bool theToSetTextureScale);
    /// <summary>
    /// </summary>
    /// <returns>
    /// true if displaying of triangles is requested
    /// </returns>
    bool ShowTriangles();
    /// <summary>
    /// Use this method to show the triangulation of the shape (for debugging etc.).
    /// </summary>
    void ShowTriangles(bool theToShowTriangles);
    /// <summary>
    /// </summary>
    /// <returns>
    /// true if texture color modulation is turned on
    /// </returns>
    bool TextureModulate();
    /// <summary>
    /// Return true if specified display mode is supported (extends AIS_Shape with Display Mode 3).
    /// </summary>
    bool AcceptDisplayMode(int theMode);
    static Macad::Occt::AIS_TexturedShape^ CreateDowncasted(::AIS_TexturedShape* instance);
}; // class AIS_TexturedShape

//---------------------------------------------------------------------
//  Class  AIS_Triangulation
//---------------------------------------------------------------------
/// <summary>
/// Interactive object that draws data from  Poly_Triangulation, optionally with colors associated
/// with each triangulation vertex. For maximum efficiency colors are represented as 32-bit integers
/// instead of classic Quantity_Color values.
/// Interactive selection of triangles and vertices is not yet implemented.
/// </summary>
public ref class AIS_Triangulation sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Triangulation_h
public:
    Include_AIS_Triangulation_h
#endif

public:
    AIS_Triangulation(::AIS_Triangulation* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_Triangulation(::AIS_Triangulation& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_Triangulation* NativeInstance
    {
        ::AIS_Triangulation* get()
        {
            return static_cast<::AIS_Triangulation*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void AIS_Triangulation(Poly_Triangulation aTriangulation, ) */
    /// <summary>
    /// Set the color for each node.
    /// Each 32-bit color is Alpha << 24 + Blue << 16 + Green << 8 + Red
    /// Order of color components is essential for further usage by OpenGL
    /// </summary>
    void SetColors(Macad::Occt::TColStd_HArray1OfInteger^ aColor);
    /// <summary>
    /// Get the color for each node.
    /// Each 32-bit color is Alpha << 24 + Blue << 16 + Green << 8 + Red
    /// </summary>
    Macad::Occt::TColStd_HArray1OfInteger^ GetColors();
    /// <summary>
    /// Returns true if triangulation has vertex colors.
    /// </summary>
    bool HasVertexColors();
    /* Method skipped due to unknown mapping: void SetTriangulation(Poly_Triangulation aTriangulation, ) */
    /* Method skipped due to unknown mapping: Poly_Triangulation GetTriangulation() */
    /// <summary>
    /// Sets the value aValue for transparency in the reconstructed compound shape.
    /// </summary>
    void SetTransparency(double aValue);
    /// <summary>
    /// Sets the value aValue for transparency in the reconstructed compound shape.
    /// </summary>
    void SetTransparency();
    /// <summary>
    /// Removes the setting for transparency in the reconstructed compound shape.
    /// </summary>
    void UnsetTransparency();
    static Macad::Occt::AIS_Triangulation^ CreateDowncasted(::AIS_Triangulation* instance);
}; // class AIS_Triangulation

//---------------------------------------------------------------------
//  Class  AIS_Trihedron
//---------------------------------------------------------------------
/// <summary>
/// Create a selectable trihedron
/// The trihedron includes 1 origin, 3 axes and 3 labels.
/// Default text of labels are "X", "Y", "Z".
/// Color of origin and any axis, color of arrows and labels may be changed.
/// Visual presentation might be shown in two, shaded and wireframe modes, wireframe by default).
/// There are 4 modes of selection:
/// - AIS_TrihedronSelectionMode_EntireObject to select trihedron,  priority = 1
/// - AIS_TrihedronSelectionMode_Origin       to select its origin, priority = 5
/// - AIS_TrihedronSelectionMode_Axes         to select its axis,   priority = 3
/// - AIS_TrihedronSelectionMode_MainPlanes   to select its planes, priority = 2
/// 
/// Warning!
/// For the presentation of trihedron, the default unit of length is the millimetre,
/// and the default value for the representation of the axes is 100.
/// If you modify these dimensions, you must temporarily recover the Drawer.
/// From inside it, you take the aspect in which the values for length are stocked.
/// For trihedron, this is Prs3d_Drawer_LineAspect.
/// You change the values inside this Aspect and recalculate the presentation.
/// </summary>
public ref class AIS_Trihedron sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_Trihedron_h
public:
    Include_AIS_Trihedron_h
#endif

public:
    AIS_Trihedron(::AIS_Trihedron* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_Trihedron(::AIS_Trihedron& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_Trihedron* NativeInstance
    {
        ::AIS_Trihedron* get()
        {
            return static_cast<::AIS_Trihedron*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes a trihedron entity.
    /// </summary>
    AIS_Trihedron(Macad::Occt::Geom_Axis2Placement^ theComponent);
    /// <summary>
    /// Returns datum display mode.
    /// </summary>
    Macad::Occt::Prs3d_DatumMode DatumDisplayMode();
    /// <summary>
    /// Sets Shading or Wireframe display mode, triangle or segment graphic group is used relatively.
    /// </summary>
    void SetDatumDisplayMode(Macad::Occt::Prs3d_DatumMode theMode);
    /// <summary>
    /// Returns the right-handed coordinate system set in SetComponent.
    /// </summary>
    Macad::Occt::Geom_Axis2Placement^ Component();
    /// <summary>
    /// Constructs the right-handed coordinate system aComponent.
    /// </summary>
    void SetComponent(Macad::Occt::Geom_Axis2Placement^ theComponent);
    /// <summary>
    /// Returns true if the trihedron object has a size other
    /// than the default size of 100 mm. along each axis.
    /// </summary>
    bool HasOwnSize();
    /// <summary>
    /// Returns the size of trihedron object; 100.0 by DEFAULT.
    /// </summary>
    double Size();
    /// <summary>
    /// Sets the size of trihedron object.
    /// </summary>
    void SetSize(double theValue);
    /// <summary>
    /// Removes any non-default settings for size of this trihedron object.
    /// If the object has 1 color, the default size of the
    /// drawer is reproduced, otherwise DatumAspect becomes null.
    /// </summary>
    void UnsetSize();
    /// <summary>
    /// Returns true if trihedron has own text color
    /// </summary>
    bool HasTextColor();
    /// <summary>
    /// Returns trihedron text color
    /// </summary>
    Macad::Occt::Quantity_Color^ TextColor();
    /// <summary>
    /// Sets color of label of trihedron axes.
    /// </summary>
    void SetTextColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Sets color of label of trihedron axis.
    /// </summary>
    void SetTextColor(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Returns true if trihedron has own arrow color
    /// </summary>
    bool HasArrowColor();
    /// <summary>
    /// Returns trihedron arrow color
    /// </summary>
    Macad::Occt::Quantity_Color^ ArrowColor();
    /// <summary>
    /// Sets color of arrow of trihedron axes.
    /// </summary>
    void SetArrowColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Sets color of arrow of trihedron axes.
    /// </summary>
    void SetArrowColor(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Returns color of datum part: origin or some of trihedron axes.
    /// </summary>
    Macad::Occt::Quantity_Color^ DatumPartColor(Macad::Occt::Prs3d_DatumParts thePart);
    /// <summary>
    /// Sets color of datum part: origin or some of trihedron axes.
    /// If presentation is shading mode, this color is set for both sides of facing model
    /// </summary>
    void SetDatumPartColor(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Sets color of origin.
    /// Standard_DEPRECATED("This method is deprecated - SetColor() should be called instead")
    /// </summary>
    void SetOriginColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Sets color of x-axis.
    /// Standard_DEPRECATED("This method is deprecated - SetColor() should be called instead")
    /// </summary>
    void SetXAxisColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Sets color of y-axis.
    /// Standard_DEPRECATED("This method is deprecated - SetColor() should be called instead")
    /// </summary>
    void SetYAxisColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Sets color of z-axis.
    /// Standard_DEPRECATED("This method is deprecated - SetColor() should be called instead")
    /// </summary>
    void SetAxisColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Returns true if arrows are to be drawn
    /// </summary>
    bool ToDrawArrows();
    /// <summary>
    /// Sets whether to draw the arrows in visualization
    /// </summary>
    void SetDrawArrows(bool theToDraw);
    /// <summary>
    /// Returns priority of selection for owner of the given type
    /// </summary>
    int SelectionPriority(Macad::Occt::Prs3d_DatumParts thePart);
    /// <summary>
    /// Sets priority of selection for owner of the given type
    /// </summary>
    void SetSelectionPriority(Macad::Occt::Prs3d_DatumParts thePart, int thePriority);
    /// <summary>
    /// Returns text of axis. Parameter thePart should be XAxis, YAxis or ZAxis
    /// </summary>
    Macad::Occt::TCollection_ExtendedString^ Label(Macad::Occt::Prs3d_DatumParts thePart);
    /// <summary>
    /// Sets text label for trihedron axis. Parameter thePart should be XAxis, YAxis or ZAxis
    /// </summary>
    void SetLabel(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::TCollection_ExtendedString^ theName);
    /// <summary>
    /// Sets the color theColor for this trihedron object, it changes color of axes.
    /// </summary>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Returns true if the display mode selected, aMode, is valid for trihedron datums.
    /// </summary>
    bool AcceptDisplayMode(int theMode);
    /// <summary>
    /// Returns index 3, selection of the planes XOY, YOZ, XOZ.
    /// </summary>
    int Signature();
    /// <summary>
    /// Indicates that the type of Interactive Object is datum.
    /// </summary>
    Macad::Occt::AIS_KindOfInteractive Type();
    /// <summary>
    /// Removes the settings for color.
    /// </summary>
    void UnsetColor();
    /// <summary>
    /// Method which clear all selected owners belonging
    /// to this selectable object ( for fast presentation draw ).
    /// </summary>
    void ClearSelected();
    /// <summary>
    /// Method which draws selected owners ( for fast presentation draw ).
    /// </summary>
    void HilightSelected(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::SelectMgr_SequenceOfOwner^ theOwners);
    /// <summary>
    /// Method which hilight an owner belonging to
    /// this selectable object  ( for fast presentation draw ).
    /// </summary>
    void HilightOwnerWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::Prs3d_Drawer^ theStyle, Macad::Occt::SelectMgr_EntityOwner^ theOwner);
    static Macad::Occt::AIS_Trihedron^ CreateDowncasted(::AIS_Trihedron* instance);
}; // class AIS_Trihedron

//---------------------------------------------------------------------
//  Class  AIS_TrihedronOwner
//---------------------------------------------------------------------
/// <summary>
/// Entity owner for selection management of AIS_Trihedron object.
/// </summary>
public ref class AIS_TrihedronOwner sealed
    : public Macad::Occt::SelectMgr_EntityOwner
{

#ifdef Include_AIS_TrihedronOwner_h
public:
    Include_AIS_TrihedronOwner_h
#endif

public:
    AIS_TrihedronOwner(::AIS_TrihedronOwner* nativeInstance)
        : Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
    {}

    AIS_TrihedronOwner(::AIS_TrihedronOwner& nativeInstance)
        : Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
    {}

    property ::AIS_TrihedronOwner* NativeInstance
    {
        ::AIS_TrihedronOwner* get()
        {
            return static_cast<::AIS_TrihedronOwner*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an owner of AIS_Trihedron object.
    /// </summary>
    AIS_TrihedronOwner(Macad::Occt::SelectMgr_SelectableObject^ theSelObject, Macad::Occt::Prs3d_DatumParts theDatumPart, int thePriority);
    /// <summary>
    /// Returns the datum part identifier.
    /// </summary>
    Macad::Occt::Prs3d_DatumParts DatumPart();
    /// <summary>
    /// Highlights selectable object's presentation.
    /// </summary>
    void HilightWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode);
    /// <summary>
    /// Returns true if the presentation manager thePM
    /// highlights selections corresponding to the selection mode aMode.
    /// </summary>
    bool IsHilighted(Macad::Occt::PrsMgr_PresentationManager^ thePM, int theMode);
    /// <summary>
    /// Removes highlighting from the owner of a detected
    /// selectable object in the presentation manager thePM.
    /// </summary>
    void Unhilight(Macad::Occt::PrsMgr_PresentationManager^ thePM, int theMode);
    static Macad::Occt::AIS_TrihedronOwner^ CreateDowncasted(::AIS_TrihedronOwner* instance);
}; // class AIS_TrihedronOwner

//---------------------------------------------------------------------
//  Class  AIS_ViewInputBuffer
//---------------------------------------------------------------------
/// <summary>
/// Auxiliary structure defining viewer events
/// </summary>
public ref class AIS_ViewInputBuffer sealed
    : public Macad::Occt::BaseClass<::AIS_ViewInputBuffer>
{

#ifdef Include_AIS_ViewInputBuffer_h
public:
    Include_AIS_ViewInputBuffer_h
#endif

public:
    AIS_ViewInputBuffer(::AIS_ViewInputBuffer* nativeInstance)
        : Macad::Occt::BaseClass<::AIS_ViewInputBuffer>( nativeInstance, true )
    {}

    AIS_ViewInputBuffer(::AIS_ViewInputBuffer& nativeInstance)
        : Macad::Occt::BaseClass<::AIS_ViewInputBuffer>( &nativeInstance, false )
    {}

    property ::AIS_ViewInputBuffer* NativeInstance
    {
        ::AIS_ViewInputBuffer* get()
        {
            return static_cast<::AIS_ViewInputBuffer*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// < transition from one action to another
    /// </summary>
    property bool IsNewGesture {
        bool get() {
            return ((::AIS_ViewInputBuffer*)_NativeInstance)->IsNewGesture;
        }
        void set(bool value) {
            ((::AIS_ViewInputBuffer*)_NativeInstance)->IsNewGesture = value;
        }
    }

    AIS_ViewInputBuffer();
    /// <summary>
    /// Reset events buffer.
    /// </summary>
    void Reset();
}; // class AIS_ViewInputBuffer

//---------------------------------------------------------------------
//  Class  AIS_XRTrackedDevice
//---------------------------------------------------------------------
/// <summary>
/// Auxiliary textured mesh presentation of tracked XR device.
/// </summary>
public ref class AIS_XRTrackedDevice sealed
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_XRTrackedDevice_h
public:
    Include_AIS_XRTrackedDevice_h
#endif

public:
    AIS_XRTrackedDevice(::AIS_XRTrackedDevice* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_XRTrackedDevice(::AIS_XRTrackedDevice& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_XRTrackedDevice* NativeInstance
    {
        ::AIS_XRTrackedDevice* get()
        {
            return static_cast<::AIS_XRTrackedDevice*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Main constructor.
    /// </summary>
    AIS_XRTrackedDevice(Macad::Occt::Graphic3d_ArrayOfTriangles^ theTris, Macad::Occt::Image_Texture^ theTexture);
    /// <summary>
    /// Empty constructor.
    /// </summary>
    AIS_XRTrackedDevice();
    /// <summary>
    /// Return device role.
    /// </summary>
    Macad::Occt::Aspect_XRTrackedDeviceRole Role();
    /// <summary>
    /// Set device role.
    /// </summary>
    void SetRole(Macad::Occt::Aspect_XRTrackedDeviceRole theRole);
    /// <summary>
    /// Return laser color.
    /// </summary>
    Macad::Occt::Quantity_Color^ LaserColor();
    /// <summary>
    /// Set laser color.
    /// </summary>
    void SetLaserColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Return laser length.
    /// </summary>
    float LaserLength();
    /// <summary>
    /// Set laser length.
    /// </summary>
    void SetLaserLength(float theLength);
    /// <summary>
    /// Return unit scale factor.
    /// </summary>
    float UnitFactor();
    /// <summary>
    /// Set unit scale factor.
    /// </summary>
    void SetUnitFactor(float theFactor);
    static Macad::Occt::AIS_XRTrackedDevice^ CreateDowncasted(::AIS_XRTrackedDevice* instance);
}; // class AIS_XRTrackedDevice

//---------------------------------------------------------------------
//  Class  AIS_ViewController
//---------------------------------------------------------------------
/// <summary>
/// Auxiliary structure for handling viewer events between GUI and Rendering threads.
/// 
/// Class implements the following features:
/// - Buffers storing the state of user input (mouse, touches and keyboard).
/// - Mapping mouse/multi-touch input to View camera manipulations (panning/rotating/zooming).
/// - Input events are not applied immediately but queued for separate processing from two working
/// threads
/// UI thread receiving user input and Rendering thread for OCCT 3D Viewer drawing.
/// </summary>
public ref class AIS_ViewController sealed
    : public Macad::Occt::Aspect_WindowInputListener
{

#ifdef Include_AIS_ViewController_h
public:
    Include_AIS_ViewController_h
#endif

public:
    AIS_ViewController(::AIS_ViewController* nativeInstance)
        : Macad::Occt::Aspect_WindowInputListener( nativeInstance )
    {}

    AIS_ViewController(::AIS_ViewController& nativeInstance)
        : Macad::Occt::Aspect_WindowInputListener( nativeInstance )
    {}

    property ::AIS_ViewController* NativeInstance
    {
        ::AIS_ViewController* get()
        {
            return static_cast<::AIS_ViewController*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    AIS_ViewController();
    /// <summary>
    /// Return input buffer.
    /// </summary>
    Macad::Occt::AIS_ViewInputBuffer^ InputBuffer(Macad::Occt::AIS_ViewInputBufferType theType);
    /// <summary>
    /// Return input buffer.
    /// </summary>
    Macad::Occt::AIS_ViewInputBuffer^ ChangeInputBuffer(Macad::Occt::AIS_ViewInputBufferType theType);
    /// <summary>
    /// Return view animation; empty (but not NULL) animation by default.
    /// </summary>
    Macad::Occt::AIS_AnimationCamera^ ViewAnimation();
    /// <summary>
    /// Set view animation to be handled within handleViewRedraw().
    /// </summary>
    void SetViewAnimation(Macad::Occt::AIS_AnimationCamera^ theAnimation);
    /// <summary>
    /// Interrupt active view animation.
    /// </summary>
    void AbortViewAnimation();
    /// <summary>
    /// Return objects animation; empty (but not NULL) animation by default.
    /// </summary>
    Macad::Occt::AIS_Animation^ ObjectsAnimation();
    /// <summary>
    /// Set object animation to be handled within handleViewRedraw().
    /// </summary>
    void SetObjectsAnimation(Macad::Occt::AIS_Animation^ theAnimation);
    /// <summary>
    /// Return TRUE if object animation should be paused on mouse click; FALSE by default.
    /// </summary>
    bool ToPauseObjectsAnimation();
    /// <summary>
    /// Set if object animation should be paused on mouse click.
    /// </summary>
    void SetPauseObjectsAnimation(bool theToPause);
    /// <summary>
    /// Return TRUE if continuous redrawing is enabled; FALSE by default.
    /// This option would request a next viewer frame to be completely redrawn right after current
    /// frame is finished.
    /// </summary>
    bool IsContinuousRedraw();
    /// <summary>
    /// Enable or disable continuous updates.
    /// </summary>
    void SetContinuousRedraw(bool theToEnable);
    /// <summary>
    /// </summary>
    /// @name global parameters
    /// Return camera rotation mode, AIS_RotationMode_BndBoxActive by default.
    Macad::Occt::AIS_RotationMode RotationMode();
    /// <summary>
    /// Set camera rotation mode.
    /// </summary>
    void SetRotationMode(Macad::Occt::AIS_RotationMode theMode);
    /// <summary>
    /// Return camera navigation mode; AIS_NavigationMode_Orbit by default.
    /// </summary>
    Macad::Occt::AIS_NavigationMode NavigationMode();
    /// <summary>
    /// Set camera navigation mode.
    /// </summary>
    void SetNavigationMode(Macad::Occt::AIS_NavigationMode theMode);
    /// <summary>
    /// Return mouse input acceleration ratio in First Person mode; 1.0 by default.
    /// </summary>
    float MouseAcceleration();
    /// <summary>
    /// Set mouse input acceleration ratio.
    /// </summary>
    void SetMouseAcceleration(float theRatio);
    /// <summary>
    /// Return orbit rotation acceleration ratio; 1.0 by default.
    /// </summary>
    float OrbitAcceleration();
    /// <summary>
    /// Set orbit rotation acceleration ratio.
    /// </summary>
    void SetOrbitAcceleration(float theRatio);
    /// <summary>
    /// Return TRUE if panning anchor point within perspective projection should be displayed in 3D
    /// Viewer; TRUE by default.
    /// </summary>
    bool ToShowPanAnchorPoint();
    /// <summary>
    /// Set if panning anchor point within perspective projection should be displayed in 3D Viewer.
    /// </summary>
    void SetShowPanAnchorPoint(bool theToShow);
    /// <summary>
    /// Return TRUE if rotation point should be displayed in 3D Viewer; TRUE by default.
    /// </summary>
    bool ToShowRotateCenter();
    /// <summary>
    /// Set if rotation point should be displayed in 3D Viewer.
    /// </summary>
    void SetShowRotateCenter(bool theToShow);
    /// <summary>
    /// Return TRUE if camera up orientation within AIS_NavigationMode_Orbit rotation mode should be
    /// forced Z up; FALSE by default.
    /// </summary>
    bool ToLockOrbitZUp();
    /// <summary>
    /// Set if camera up orientation within AIS_NavigationMode_Orbit rotation mode should be forced Z
    /// up.
    /// </summary>
    void SetLockOrbitZUp(bool theToForceUp);
    /// <summary>
    /// Return TRUE if z-rotation via two-touches gesture is enabled; FALSE by default.
    /// </summary>
    bool ToAllowTouchZRotation();
    /// <summary>
    /// Set if z-rotation via two-touches gesture is enabled.
    /// </summary>
    void SetAllowTouchZRotation(bool theToEnable);
    /// <summary>
    /// Return TRUE if camera rotation is allowed; TRUE by default.
    /// </summary>
    bool ToAllowRotation();
    /// <summary>
    /// Set if camera rotation is allowed.
    /// </summary>
    void SetAllowRotation(bool theToEnable);
    /// <summary>
    /// Return TRUE if panning is allowed; TRUE by default.
    /// </summary>
    bool ToAllowPanning();
    /// <summary>
    /// Set if panning is allowed.
    /// </summary>
    void SetAllowPanning(bool theToEnable);
    /// <summary>
    /// Return TRUE if zooming is allowed; TRUE by default.
    /// </summary>
    bool ToAllowZooming();
    /// <summary>
    /// Set if zooming is allowed.
    /// </summary>
    void SetAllowZooming(bool theToEnable);
    /// <summary>
    /// Return TRUE if ZFocus change is allowed; TRUE by default.
    /// </summary>
    bool ToAllowZFocus();
    /// <summary>
    /// Set if ZFocus change is allowed.
    /// </summary>
    void SetAllowZFocus(bool theToEnable);
    /// <summary>
    /// Return TRUE if dynamic highlight on mouse move is allowed; TRUE by default.
    /// </summary>
    bool ToAllowHighlight();
    /// <summary>
    /// Set if dragging object is allowed.
    /// </summary>
    void SetAllowHighlight(bool theToEnable);
    /// <summary>
    /// Return TRUE if dragging object is allowed; TRUE by default.
    /// </summary>
    bool ToAllowDragging();
    /// <summary>
    /// Set if dynamic highlight on mouse move is allowed.
    /// </summary>
    void SetAllowDragging(bool theToEnable);
    /// <summary>
    /// Return TRUE if picked point should be projected to picking ray on zooming at point; TRUE by
    /// default.
    /// </summary>
    bool ToStickToRayOnZoom();
    /// <summary>
    /// Set if picked point should be projected to picking ray on zooming at point.
    /// </summary>
    void SetStickToRayOnZoom(bool theToEnable);
    /// <summary>
    /// Return TRUE if picked point should be projected to picking ray on rotating around point; TRUE
    /// by default.
    /// </summary>
    bool ToStickToRayOnRotation();
    /// <summary>
    /// Set if picked point should be projected to picking ray on rotating around point.
    /// </summary>
    void SetStickToRayOnRotation(bool theToEnable);
    /// <summary>
    /// Return TRUE if pitch direction should be inverted while processing
    /// Aspect_VKey_NavLookUp/Aspect_VKey_NavLookDown; FALSE by default.
    /// </summary>
    bool ToInvertPitch();
    /// <summary>
    /// Set flag inverting pitch direction.
    /// </summary>
    void SetInvertPitch(bool theToInvert);
    /// <summary>
    /// Return normal walking speed, in m/s; 1.5 by default.
    /// </summary>
    float WalkSpeedAbsolute();
    /// <summary>
    /// Set normal walking speed, in m/s; 1.5 by default.
    /// </summary>
    void SetWalkSpeedAbsolute(float theSpeed);
    /// <summary>
    /// Return walking speed relative to scene bounding box; 0.1 by default.
    /// </summary>
    float WalkSpeedRelative();
    /// <summary>
    /// Set walking speed relative to scene bounding box.
    /// </summary>
    void SetWalkSpeedRelative(float theFactor);
    /// <summary>
    /// Return active thrust value; 0.0f by default.
    /// </summary>
    float ThrustSpeed();
    /// <summary>
    /// Set active thrust value.
    /// </summary>
    void SetThrustSpeed(float theSpeed);
    /// <summary>
    /// Return TRUE if previous position of MoveTo has been defined.
    /// </summary>
    bool HasPreviousMoveTo();
    /// <summary>
    /// Return previous position of MoveTo event in 3D viewer.
    /// </summary>
    Macad::Occt::Graphic3d_Vec2i^ PreviousMoveTo();
    /// <summary>
    /// Reset previous position of MoveTo.
    /// </summary>
    void ResetPreviousMoveTo();
    /// <summary>
    /// Return TRUE to display auxiliary tracked XR devices (like tracking stations).
    /// </summary>
    bool ToDisplayXRAuxDevices();
    /// <summary>
    /// Set if auxiliary tracked XR devices should be displayed.
    /// </summary>
    void SetDisplayXRAuxDevices(bool theToDisplay);
    /// <summary>
    /// Return TRUE to display XR hand controllers.
    /// </summary>
    bool ToDisplayXRHands();
    /// <summary>
    /// Set if tracked XR hand controllers should be displayed.
    /// </summary>
    void SetDisplayXRHands(bool theToDisplay);
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
    /// Fetch active navigation actions.
    /// </summary>
    Macad::Occt::AIS_WalkDelta^ FetchNavigationKeys(double theCrouchRatio, double theRunRatio);
    /// <summary>
    /// </summary>
    /// @name mouse input
    /// Return map defining mouse gestures.
    Macad::Occt::AIS_MouseGestureMap^ MouseGestureMap();
    /// <summary>
    /// Return map defining mouse gestures.
    /// </summary>
    Macad::Occt::AIS_MouseGestureMap^ ChangeMouseGestureMap();
    /// <summary>
    /// Return map defining mouse selection schemes.
    /// </summary>
    Macad::Occt::AIS_MouseSelectionSchemeMap^ MouseSelectionSchemes();
    /// <summary>
    /// Return map defining mouse gestures.
    /// </summary>
    Macad::Occt::AIS_MouseSelectionSchemeMap^ ChangeMouseSelectionSchemes();
    /// <summary>
    /// Return double click interval in seconds; 0.4 by default.
    /// </summary>
    double MouseDoubleClickInterval();
    /// <summary>
    /// Set double click interval in seconds.
    /// </summary>
    void SetMouseDoubleClickInterval(double theSeconds);
    /// <summary>
    /// Perform selection in 3D viewer.
    /// This method is expected to be called from UI thread.
    /// </summary>
    /// <param name="thePnt">
    /// picking point
    /// </param>
    /// <param name="theScheme">
    /// selection scheme
    /// </param>
    void SelectInViewer(Macad::Occt::Graphic3d_Vec2i^ thePnt, Macad::Occt::AIS_SelectionScheme theScheme);
    /// <summary>
    /// Perform selection in 3D viewer.
    /// This method is expected to be called from UI thread.
    /// </summary>
    /// <param name="thePnt">
    /// picking point
    /// </param>
    /// <param name="theScheme">
    /// selection scheme
    /// </param>
    void SelectInViewer(Macad::Occt::Graphic3d_Vec2i^ thePnt);
    /* Method skipped due to unknown mapping: void SelectInViewer(NCollection_Sequence<NCollection_Vec2<int>> thePnts, AIS_SelectionScheme theScheme, ) */
    /* Method skipped due to unknown mapping: void SelectInViewer(NCollection_Sequence<NCollection_Vec2<int>> thePnts, AIS_SelectionScheme theScheme, ) */
    /// <summary>
    /// Update rectangle selection tool.
    /// This method is expected to be called from UI thread.
    /// </summary>
    /// <param name="thePntFrom">
    /// rectangle first   corner
    /// </param>
    /// <param name="thePntTo">
    ///   rectangle another corner
    /// </param>
    void UpdateRubberBand(Macad::Occt::Graphic3d_Vec2i^ thePntFrom, Macad::Occt::Graphic3d_Vec2i^ thePntTo);
    /// <summary>
    /// Update polygonal selection tool.
    /// This method is expected to be called from UI thread.
    /// </summary>
    /// <param name="thePnt">
    /// new point to add to polygon
    /// </param>
    /// <param name="theToAppend">
    /// append new point or update the last point
    /// </param>
    void UpdatePolySelection(Macad::Occt::Graphic3d_Vec2i^ thePnt, bool theToAppend);
    /// <summary>
    /// Update zoom event (e.g. from mouse scroll).
    /// This method is expected to be called from UI thread.
    /// </summary>
    /// <param name="theDelta">
    /// mouse cursor position to zoom at and zoom delta
    /// </param>
    /// <returns>
    /// TRUE if new zoom event has been created or FALSE if existing one has been updated
    /// </returns>
    bool UpdateZoom(Macad::Occt::Aspect_ScrollDelta^ theDelta);
    /// <summary>
    /// Update Z rotation event.
    /// </summary>
    /// <param name="theAngle">
    /// rotation angle, in radians.
    /// </param>
    /// <returns>
    /// TRUE if new zoom event has been created or FALSE if existing one has been updated
    /// </returns>
    bool UpdateZRotation(double theAngle);
    /// <summary>
    /// Update mouse scroll event; redirects to UpdateZoom by default.
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
    /// TRUE if View should be redrawn
    /// </returns>
    bool UpdateMouseButtons(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated);
    /// <summary>
    /// Handle mouse cursor movement event.
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
    /// TRUE if View should be redrawn
    /// </returns>
    bool UpdateMousePosition(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated);
    /// <summary>
    /// Handle mouse button click event (emulated by UpdateMouseButtons() while releasing single
    /// button). Note that as this method is called by UpdateMouseButtons(), it should be executed
    /// from UI thread. Default implementation redirects to SelectInViewer(). This method is expected
    /// to be called from UI thread.
    /// </summary>
    /// <param name="thePoint">
    ///      mouse cursor position
    /// </param>
    /// <param name="theButton">
    ///     clicked button
    /// </param>
    /// <param name="theModifiers">
    ///  key modifiers
    /// </param>
    /// <param name="theIsDoubleClick">
    /// flag indicating double mouse click
    /// </param>
    /// <returns>
    /// TRUE if View should be redrawn
    /// </returns>
    bool UpdateMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick);
    /// <summary>
    /// </summary>
    /// @name multi-touch input
    /// Return scale factor for adjusting tolerances for starting multi-touch gestures; 1.0 by default
    /// This scale factor is expected to be computed from touch screen resolution.
    float TouchToleranceScale();
    /// <summary>
    /// Set scale factor for adjusting tolerances for starting multi-touch gestures.
    /// </summary>
    void SetTouchToleranceScale(float theTolerance);
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
    /* Method skipped due to unknown mapping: bool Update3dMouse(WNT_HIDSpaceMouse theEvent, ) */
    /// <summary>
    /// </summary>
    /// @name resize events
    /// Handle expose event (window content has been invalidation and should be redrawn).
    /// Default implementation does nothing.
    void ProcessExpose();
    /// <summary>
    /// Handle window resize event.
    /// Default implementation does nothing.
    /// </summary>
    void ProcessConfigure(bool theIsResized);
    /// <summary>
    /// Handle window input event immediately.
    /// Default implementation does nothing - input events are accumulated in internal buffer until
    /// explicit FlushViewEvents() call.
    /// </summary>
    void ProcessInput();
    /// <summary>
    /// Handle focus event.
    /// Default implementation resets cached input state (pressed keys).
    /// </summary>
    void ProcessFocus(bool theIsActivated);
    /// <summary>
    /// Handle window close event.
    /// Default implementation does nothing.
    /// </summary>
    void ProcessClose();
    /// <summary>
    /// Reset input state (pressed keys, mouse buttons, etc.) e.g. on window focus loss.
    /// This method is expected to be called from UI thread.
    /// </summary>
    void ResetViewInput();
    /// <summary>
    /// Reset view orientation.
    /// This method is expected to be called from UI thread.
    /// </summary>
    void UpdateViewOrientation(Macad::Occt::V3d_TypeOfOrientation theOrientation, bool theToFitAll);
    /// <summary>
    /// Update buffer for rendering thread.
    /// This method is expected to be called within synchronization barrier between GUI
    /// and Rendering threads (e.g. GUI thread should be locked beforehand to avoid data races).
    /// </summary>
    /// <param name="theCtx">
    /// interactive context
    /// </param>
    /// <param name="theView">
    /// active view
    /// </param>
    /// <param name="theToHandle">
    /// if TRUE, the HandleViewEvents() will be called
    /// </param>
    void FlushViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, bool theToHandle);
    /// <summary>
    /// Update buffer for rendering thread.
    /// This method is expected to be called within synchronization barrier between GUI
    /// and Rendering threads (e.g. GUI thread should be locked beforehand to avoid data races).
    /// </summary>
    /// <param name="theCtx">
    /// interactive context
    /// </param>
    /// <param name="theView">
    /// active view
    /// </param>
    /// <param name="theToHandle">
    /// if TRUE, the HandleViewEvents() will be called
    /// </param>
    void FlushViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Process events within rendering thread.
    /// </summary>
    void HandleViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Callback called by handleMoveTo() on Selection in 3D Viewer.
    /// This method is expected to be called from rendering thread.
    /// </summary>
    void OnSelectionChanged(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Callback called by handleMoveTo() on dragging object in 3D Viewer.
    /// This method is expected to be called from rendering thread.
    /// </summary>
    void OnObjectDragged(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_DragAction theAction);
    /// <summary>
    /// Callback called by HandleViewEvents() on Selection of another (sub)view.
    /// This method is expected to be called from rendering thread.
    /// </summary>
    void OnSubviewChanged(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theOldView, Macad::Occt::V3d_View^ theNewView);
    /// <summary>
    /// Pick closest point under mouse cursor.
    /// This method is expected to be called from rendering thread.
    /// </summary>
    /// <param name="out]">
    /// thePnt    result point
    /// </param>
    /// <param name="in]">
    /// theCtx     interactive context
    /// </param>
    /// <param name="in]">
    /// theView    active view
    /// </param>
    /// <param name="in]">
    /// theCursor  mouse cursor
    /// </param>
    /// <param name="in]">
    /// theToStickToPickRay  when TRUE, the result point will lie on picking ray
    /// </param>
    /// <returns>
    /// TRUE if result has been found
    /// </returns>
    bool PickPoint(Macad::Occt::Pnt% thePnt, Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::Graphic3d_Vec2i^ theCursor, bool theToStickToPickRay);
    /// <summary>
    /// Pick closest point by axis.
    /// This method is expected to be called from rendering thread.
    /// </summary>
    /// <param name="out]">
    /// theTopPnt  result point
    /// </param>
    /// <param name="in]">
    /// theCtx     interactive context
    /// </param>
    /// <param name="in]">
    /// theView    active view
    /// </param>
    /// <param name="in]">
    /// theAxis    selection axis
    /// </param>
    /// <returns>
    /// TRUE if result has been found
    /// </returns>
    bool PickAxis(Macad::Occt::Pnt% theTopPnt, Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::Ax1 theAxis);
    /// <summary>
    /// Compute rotation gravity center point depending on rotation mode.
    /// This method is expected to be called from rendering thread.
    /// </summary>
    Macad::Occt::Pnt GravityPoint(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Modify view camera to fit all objects.
    /// Default implementation fits either all visible and all selected objects (swapped on each
    /// call).
    /// </summary>
    void FitAllAuto(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Handle hot-keys defining new camera orientation (Aspect_VKey_ViewTop and similar keys).
    /// Default implementation starts an animated transaction from the current to the target camera
    /// orientation, when specific action key was pressed. This method is expected to be called from
    /// rendering thread.
    /// </summary>
    void handleViewOrientationKeys(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Perform navigation (Aspect_VKey_NavForward and similar keys).
    /// This method is expected to be called from rendering thread.
    /// </summary>
    Macad::Occt::AIS_WalkDelta^ handleNavigationKeys(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Perform immediate camera actions (rotate/zoom/pan) on gesture progress.
    /// This method is expected to be called from rendering thread.
    /// </summary>
    void handleCameraActions(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_WalkDelta^ theWalk);
    /// <summary>
    /// Perform moveto/selection/dragging.
    /// This method is expected to be called from rendering thread.
    /// </summary>
    void handleMoveTo(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Return TRUE if another frame should be drawn right after this one.
    /// </summary>
    bool toAskNextFrame();
    /// <summary>
    /// Set if another frame should be drawn right after this one.
    /// </summary>
    void setAskNextFrame(bool theToDraw);
    /// <summary>
    /// Set if another frame should be drawn right after this one.
    /// </summary>
    void setAskNextFrame();
    /// <summary>
    /// Return if panning anchor point has been defined.
    /// </summary>
    bool hasPanningAnchorPoint();
    /// <summary>
    /// Return active panning anchor point.
    /// </summary>
    Macad::Occt::Pnt panningAnchorPoint();
    /// <summary>
    /// Set active panning anchor point.
    /// </summary>
    void setPanningAnchorPoint(Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Handle panning event myGL.Panning.
    /// </summary>
    void handlePanning(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Handle Z rotation event myGL.ZRotate.
    /// </summary>
    void handleZRotate(Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Return minimal camera distance for zoom operation.
    /// </summary>
    double MinZoomDistance();
    /// <summary>
    /// Set minimal camera distance for zoom operation.
    /// </summary>
    void SetMinZoomDistance(double theDist);
    /// <summary>
    /// Handle zoom event myGL.ZoomActions.
    /// This method is expected to be called from rendering thread.
    /// </summary>
    void handleZoom(Macad::Occt::V3d_View^ theView, Macad::Occt::Aspect_ScrollDelta^ theParams, Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Handle ZScroll event myGL.ZoomActions.
    /// This method is expected to be called from rendering thread.
    /// </summary>
    void handleZFocusScroll(Macad::Occt::V3d_View^ theView, Macad::Occt::Aspect_ScrollDelta^ theParams);
    /// <summary>
    /// Handle orbital rotation events myGL.OrbitRotation.
    /// </summary>
    /// <param name="theView">
    /// view to modify
    /// </param>
    /// <param name="thePnt">
    /// 3D point to rotate around
    /// </param>
    /// <param name="theToLockZUp">
    /// amend camera to exclude roll angle (put camera Up vector to plane
    /// containing global Z and view direction)
    /// </param>
    void handleOrbitRotation(Macad::Occt::V3d_View^ theView, Macad::Occt::Pnt thePnt, bool theToLockZUp);
    /// <summary>
    /// Handle view direction rotation events myGL.ViewRotation.
    /// This method is expected to be called from rendering thread.
    /// </summary>
    /// <param name="theView">
    ///       camera to modify
    /// </param>
    /// <param name="theYawExtra">
    ///   extra yaw increment
    /// </param>
    /// <param name="thePitchExtra">
    /// extra pitch increment
    /// </param>
    /// <param name="theRoll">
    ///       roll value
    /// </param>
    /// <param name="theToRestartOnIncrement">
    /// flag indicating flight mode
    /// </param>
    void handleViewRotation(Macad::Occt::V3d_View^ theView, double theYawExtra, double thePitchExtra, double theRoll, bool theToRestartOnIncrement);
    /// <summary>
    /// Handle view redraw.
    /// This method is expected to be called from rendering thread.
    /// </summary>
    void handleViewRedraw(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Perform XR input.
    /// This method is expected to be called from rendering thread.
    /// </summary>
    void handleXRInput(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_WalkDelta^ theWalk);
    /// <summary>
    /// Handle trackpad view turn action.
    /// </summary>
    void handleXRTurnPad(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Handle trackpad teleportation action.
    /// </summary>
    void handleXRTeleport(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Handle picking on trigger click.
    /// </summary>
    void handleXRPicking(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Perform dynamic highlighting for active hand.
    /// </summary>
    void handleXRHighlight(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Display auxiliary XR presentations.
    /// </summary>
    void handleXRPresentations(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView);
    /// <summary>
    /// Perform picking with/without dynamic highlighting for XR pose.
    /// </summary>
    int handleXRMoveTo(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::Trsf thePose, bool theToHighlight);
}; // class AIS_ViewController

//---------------------------------------------------------------------
//  Class  AIS_ViewCubeOwner
//---------------------------------------------------------------------
/// <summary>
/// Redefined entity owner that is highlighted when owner is detected,
/// even if Interactive Context highlighted on last detection procedure.
/// </summary>
public ref class AIS_ViewCubeOwner sealed
    : public Macad::Occt::SelectMgr_EntityOwner
{

#ifdef Include_AIS_ViewCubeOwner_h
public:
    Include_AIS_ViewCubeOwner_h
#endif

public:
    AIS_ViewCubeOwner(::AIS_ViewCubeOwner* nativeInstance)
        : Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
    {}

    AIS_ViewCubeOwner(::AIS_ViewCubeOwner& nativeInstance)
        : Macad::Occt::SelectMgr_EntityOwner( nativeInstance )
    {}

    property ::AIS_ViewCubeOwner* NativeInstance
    {
        ::AIS_ViewCubeOwner* get()
        {
            return static_cast<::AIS_ViewCubeOwner*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Main constructor.
    /// </summary>
    AIS_ViewCubeOwner(Macad::Occt::AIS_ViewCube^ theObject, Macad::Occt::V3d_TypeOfOrientation theOrient, int thePriority);
    /// <summary>
    /// Main constructor.
    /// </summary>
    AIS_ViewCubeOwner(Macad::Occt::AIS_ViewCube^ theObject, Macad::Occt::V3d_TypeOfOrientation theOrient);
    /// <summary>
    /// </summary>
    /// <returns>
    /// TRUE. This owner will always call method
    /// Hilight for its Selectable Object when the owner is detected.
    /// </returns>
    bool IsForcedHilight();
    /// <summary>
    /// Return new orientation to set.
    /// </summary>
    Macad::Occt::V3d_TypeOfOrientation MainOrientation();
    /// <summary>
    /// Handle mouse button click event.
    /// </summary>
    bool HandleMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick);
    static Macad::Occt::AIS_ViewCubeOwner^ CreateDowncasted(::AIS_ViewCubeOwner* instance);
}; // class AIS_ViewCubeOwner

//---------------------------------------------------------------------
//  Class  AIS_ViewCube
//---------------------------------------------------------------------
/// <summary>
/// Interactive object for displaying the view manipulation cube.
/// 
/// View cube consists of several parts that are responsible for different camera manipulations:
/// </summary>
/// @li Cube sides represent main views: top, bottom, left, right, front and back.
/// @li Edges represent rotation of one of main views on 45 degrees.
/// @li Vertices represent rotation of one of man views in two directions.
/// 
/// The object is expected to behave like a trihedron in the view corner,
/// therefore its position should be defined using transformation persistence flags:
/// @code SetTransformPersistence (new Graphic3d_TransformPers (Graphic3d_TMF_TriedronPers,
/// Aspect_TOTP_LEFT_LOWER, Graphic3d_Vec2i (100, 100)); @endcode
/// 
/// View Cube parts are sensitive to detection, or dynamic highlighting (but not selection),
/// and every its owner AIS_ViewCubeOwner corresponds to camera transformation.
/// @code
/// for (aViewCube->StartAnimation (aDetectedOwner); aViewCube->HasAnimation(); )
/// {
/// aViewCube->UpdateAnimation();
/// ... // updating of application window
/// }
/// @endcode
/// or
/// @code aViewCube->HandleClick (aDetectedOwner); @endcode
/// that includes transformation loop.
/// This loop allows external actions like application updating. For this purpose AIS_ViewCube has
/// virtual interface onAfterAnimation(), that is to be redefined on application level.
public ref class AIS_ViewCube
    : public Macad::Occt::AIS_InteractiveObject
{

#ifdef Include_AIS_ViewCube_h
public:
    Include_AIS_ViewCube_h
#endif

protected:
    AIS_ViewCube(InitMode init)
        : Macad::Occt::AIS_InteractiveObject( init )
    {}

public:
    AIS_ViewCube(::AIS_ViewCube* nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    AIS_ViewCube(::AIS_ViewCube& nativeInstance)
        : Macad::Occt::AIS_InteractiveObject( nativeInstance )
    {}

    property ::AIS_ViewCube* NativeInstance
    {
        ::AIS_ViewCube* get()
        {
            return static_cast<::AIS_ViewCube*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    AIS_ViewCube();
    /// <summary>
    /// Return TRUE if specified orientation belongs to box side.
    /// </summary>
    static bool IsBoxSide(Macad::Occt::V3d_TypeOfOrientation theOrient);
    /// <summary>
    /// Return TRUE if specified orientation belongs to box edge.
    /// </summary>
    static bool IsBoxEdge(Macad::Occt::V3d_TypeOfOrientation theOrient);
    /// <summary>
    /// Return TRUE if specified orientation belongs to box corner (vertex).
    /// </summary>
    static bool IsBoxCorner(Macad::Occt::V3d_TypeOfOrientation theOrient);
    /// <summary>
    /// Return view animation.
    /// </summary>
    Macad::Occt::AIS_AnimationCamera^ ViewAnimation();
    /// <summary>
    /// Set view animation.
    /// </summary>
    void SetViewAnimation(Macad::Occt::AIS_AnimationCamera^ theAnimation);
    /// <summary>
    /// Return TRUE if automatic camera transformation on selection (highlighting) is enabled; TRUE by
    /// default.
    /// </summary>
    bool ToAutoStartAnimation();
    /// <summary>
    /// Enable/disable automatic camera transformation on selection (highlighting).
    /// The automatic logic can be disabled if application wants performing action manually
    /// basing on picking results (AIS_ViewCubeOwner).
    /// </summary>
    void SetAutoStartAnimation(bool theToEnable);
    /// <summary>
    /// Return TRUE if camera animation should be done in uninterruptible loop; TRUE by default.
    /// </summary>
    bool IsFixedAnimationLoop();
    /// <summary>
    /// Set if camera animation should be done in uninterruptible loop.
    /// </summary>
    void SetFixedAnimationLoop(bool theToEnable);
    /// <summary>
    /// Reset all size and style parameters to default.
    /// </summary>
    /// @warning It doesn't reset position of View Cube
    void ResetStyles();
    /// <summary>
    /// </summary>
    /// @name Geometry management API
    /// <returns>
    /// size (width and height) of View cube sides; 100 by default.
    /// </returns>
    double Size();
    /// <summary>
    /// Sets size (width and height) of View cube sides.
    /// </summary>
    /// <param name="theToAdaptAnother">
    /// if TRUE, then other parameters will be adapted to specified size
    /// </param>
    void SetSize(double theValue, bool theToAdaptAnother);
    /// <summary>
    /// Sets size (width and height) of View cube sides.
    /// </summary>
    /// <param name="theToAdaptAnother">
    /// if TRUE, then other parameters will be adapted to specified size
    /// </param>
    void SetSize(double theValue);
    /// <summary>
    /// Return box facet extension to edge/corner facet split; 10 by default.
    /// </summary>
    double BoxFacetExtension();
    /// <summary>
    /// Set new value of box facet extension.
    /// </summary>
    void SetBoxFacetExtension(double theValue);
    /// <summary>
    /// Return padding between axes and 3D part (box); 10 by default.
    /// </summary>
    double AxesPadding();
    /// <summary>
    /// Set new value of padding between axes and 3D part (box).
    /// </summary>
    void SetAxesPadding(double theValue);
    /// <summary>
    /// Return gap between box edges and box sides; 0 by default.
    /// </summary>
    double BoxEdgeGap();
    /// <summary>
    /// Set new value of box edges gap.
    /// </summary>
    void SetBoxEdgeGap(double theValue);
    /// <summary>
    /// Return minimal size of box edge; 2 by default.
    /// </summary>
    double BoxEdgeMinSize();
    /// <summary>
    /// Set new value of box edge minimal size.
    /// </summary>
    void SetBoxEdgeMinSize(double theValue);
    /// <summary>
    /// Return minimal size of box corner; 2 by default.
    /// </summary>
    double BoxCornerMinSize();
    /// <summary>
    /// Set new value of box corner minimal size.
    /// </summary>
    void SetBoxCornerMinSize(double theValue);
    /// <summary>
    /// Return relative radius of side corners (round rectangle); 0.0 by default.
    /// The value in within [0, 0.5] range meaning absolute radius = RoundRadius() / Size().
    /// </summary>
    double RoundRadius();
    /// <summary>
    /// Set relative radius of View Cube sides corners (round rectangle).
    /// The value should be within [0, 0.5] range.
    /// </summary>
    void SetRoundRadius(double theValue);
    /// <summary>
    /// Returns radius of axes of the trihedron; 1.0 by default.
    /// </summary>
    double AxesRadius();
    /// <summary>
    /// Sets radius of axes of the trihedron.
    /// </summary>
    void SetAxesRadius(double theRadius);
    /// <summary>
    /// Returns radius of cone of axes of the trihedron; 3.0 by default.
    /// </summary>
    double AxesConeRadius();
    /// <summary>
    /// Sets radius of cone of axes of the trihedron.
    /// </summary>
    void SetAxesConeRadius(double theRadius);
    /// <summary>
    /// Returns radius of sphere (central point) of the trihedron; 4.0 by default.
    /// </summary>
    double AxesSphereRadius();
    /// <summary>
    /// Sets radius of sphere (central point) of the trihedron.
    /// </summary>
    void SetAxesSphereRadius(double theRadius);
    /// <summary>
    /// </summary>
    /// <returns>
    /// TRUE if trihedron is drawn; TRUE by default.
    /// </returns>
    bool ToDrawAxes();
    /// <summary>
    /// Enable/disable drawing of trihedron.
    /// </summary>
    void SetDrawAxes(bool theValue);
    /// <summary>
    /// </summary>
    /// <returns>
    /// TRUE if edges of View Cube is drawn; TRUE by default.
    /// </returns>
    bool ToDrawEdges();
    /// <summary>
    /// Enable/disable drawing of edges of View Cube.
    /// </summary>
    void SetDrawEdges(bool theValue);
    /// <summary>
    /// Return TRUE if vertices (vertex) of View Cube is drawn; TRUE by default.
    /// </summary>
    bool ToDrawVertices();
    /// <summary>
    /// Enable/disable drawing of vertices (corners) of View Cube.
    /// </summary>
    void SetDrawVertices(bool theValue);
    /// <summary>
    /// Return TRUE if application expects Y-up viewer orientation instead of Z-up; FALSE by default.
    /// </summary>
    bool IsYup();
    /// <summary>
    /// Set if application expects Y-up viewer orientation instead of Z-up.
    /// </summary>
    void SetYup(bool theIsYup, bool theToUpdateLabels);
    /// <summary>
    /// Set if application expects Y-up viewer orientation instead of Z-up.
    /// </summary>
    void SetYup(bool theIsYup);
    /// <summary>
    /// </summary>
    /// @name Style management API
    /// Return shading style of box sides.
    Macad::Occt::Prs3d_ShadingAspect^ BoxSideStyle();
    /// <summary>
    /// Return shading style of box edges.
    /// </summary>
    Macad::Occt::Prs3d_ShadingAspect^ BoxEdgeStyle();
    /// <summary>
    /// Return shading style of box corners.
    /// </summary>
    Macad::Occt::Prs3d_ShadingAspect^ BoxCornerStyle();
    /// <summary>
    /// Return value of front color for the 3D part of object.
    /// </summary>
    Macad::Occt::Quantity_Color^ BoxColor();
    /// <summary>
    /// Set new value of front color for the 3D part of object.
    /// </summary>
    /// <param name="in]">
    /// theColor  input color value.
    /// </param>
    void SetBoxColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Return transparency for 3D part of object.
    /// </summary>
    double BoxTransparency();
    /// <summary>
    /// Set new value of transparency for 3D part of object.
    /// </summary>
    /// <param name="in]">
    /// theValue  input transparency value
    /// </param>
    void SetBoxTransparency(double theValue);
    /// <summary>
    /// Return color of sides back material.
    /// </summary>
    Macad::Occt::Quantity_Color^ InnerColor();
    /// <summary>
    /// Set color of sides back material. Alias for:
    /// </summary>
    /// @code Attributes()->ShadingAspect()->Aspect()->ChangeBackMaterial().SetColor() @endcode
    void SetInnerColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Return box side label or empty string if undefined.
    /// Default labels: FRONT, BACK, LEFT, RIGHT, TOP, BOTTOM.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ BoxSideLabel(Macad::Occt::V3d_TypeOfOrientation theSide);
    /// <summary>
    /// Set box side label.
    /// </summary>
    void SetBoxSideLabel(Macad::Occt::V3d_TypeOfOrientation theSide, Macad::Occt::TCollection_AsciiString^ theLabel);
    /// <summary>
    /// Return text color of labels of box sides; BLACK by default.
    /// </summary>
    Macad::Occt::Quantity_Color^ TextColor();
    /// <summary>
    /// Set color of text labels on box sides. Alias for:
    /// </summary>
    /// @code Attributes()->TextAspect()->SetColor() @endcode
    void SetTextColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Return font name that is used for displaying of sides and axes text. Alias for:
    /// </summary>
    /// @code Attributes()->TextAspect()->Aspect()->SetFont() @endcode
    Macad::Occt::TCollection_AsciiString^ Font();
    /// <summary>
    /// Set font name that is used for displaying of sides and axes text. Alias for:
    /// </summary>
    /// @code Attributes()->TextAspect()->SetFont() @endcode
    void SetFont(Macad::Occt::TCollection_AsciiString^ theFont);
    /// <summary>
    /// Return height of font
    /// </summary>
    double FontHeight();
    /// <summary>
    /// Change font height. Alias for:
    /// </summary>
    /// @code Attributes()->TextAspect()->SetHeight() @endcode
    void SetFontHeight(double theValue);
    /// <summary>
    /// Return axes labels or empty string if undefined.
    /// Default labels: X, Y, Z.
    /// </summary>
    Macad::Occt::TCollection_AsciiString^ AxisLabel(Macad::Occt::Prs3d_DatumParts theAxis);
    /// <summary>
    /// Set axes labels.
    /// </summary>
    void SetAxesLabels(Macad::Occt::TCollection_AsciiString^ theX, Macad::Occt::TCollection_AsciiString^ theY, Macad::Occt::TCollection_AsciiString^ theZ);
    /// <summary>
    /// Set new value of color for the whole object.
    /// </summary>
    /// <param name="in]">
    /// theColor  input color value.
    /// </param>
    void SetColor(Macad::Occt::Quantity_Color^ theColor);
    /// <summary>
    /// Reset color for the whole object.
    /// </summary>
    void UnsetColor();
    /// <summary>
    /// Set new value of transparency for the whole object.
    /// </summary>
    /// <param name="in]">
    /// theValue  input transparency value.
    /// </param>
    void SetTransparency(double theValue);
    /// <summary>
    /// Reset transparency for the whole object.
    /// </summary>
    void UnsetTransparency();
    /// <summary>
    /// Sets the material for the interactive object.
    /// </summary>
    void SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMat);
    /// <summary>
    /// Sets the material for the interactive object.
    /// </summary>
    void UnsetMaterial();
    /// <summary>
    /// </summary>
    /// @name animation methods
    /// Return duration of animation in seconds; 0.5 sec by default
    double Duration();
    /// <summary>
    /// Set duration of animation.
    /// </summary>
    /// <param name="in]">
    /// theValue  input value of duration in seconds
    /// </param>
    void SetDuration(double theValue);
    /// <summary>
    /// Return TRUE if new camera Up direction should be always set to default value for a new camera
    /// Direction; FALSE by default. When this flag is FALSE, the new camera Up will be set as current
    /// Up orthogonalized to the new camera Direction, and will set to default Up on second click.
    /// </summary>
    bool ToResetCameraUp();
    /// <summary>
    /// Set if new camera Up direction should be always set to default value for a new camera
    /// Direction.
    /// </summary>
    void SetResetCamera(bool theToReset);
    /// <summary>
    /// Return TRUE if animation should fit selected objects and FALSE to fit entire scene; TRUE by
    /// default.
    /// </summary>
    bool ToFitSelected();
    /// <summary>
    /// Set if animation should fit selected objects or to fit entire scene.
    /// </summary>
    void SetFitSelected(bool theToFitSelected);
    /// <summary>
    /// </summary>
    /// <returns>
    /// TRUE if View Cube has unfinished animation of view camera.
    /// </returns>
    bool HasAnimation();
    /// <summary>
    /// Start camera transformation corresponding to the input detected owner.
    /// </summary>
    /// <param name="in]">
    /// theOwner  detected owner.
    /// </param>
    void StartAnimation(Macad::Occt::AIS_ViewCubeOwner^ theOwner);
    /// <summary>
    /// Perform one step of current camera transformation.
    /// theToUpdate[in]  enable/disable update of view.
    /// </summary>
    /// <returns>
    /// TRUE if animation is not stopped.
    /// </returns>
    bool UpdateAnimation(bool theToUpdate);
    /// <summary>
    /// Perform camera transformation corresponding to the input detected owner.
    /// </summary>
    void HandleClick(Macad::Occt::AIS_ViewCubeOwner^ theOwner);
    /// <summary>
    /// </summary>
    /// @name Presentation computation
    /// Return TRUE for supported display mode.
    bool AcceptDisplayMode(int theMode);
    /// <summary>
    /// Global selection has no meaning for this class.
    /// </summary>
    Macad::Occt::SelectMgr_EntityOwner^ GlobalSelOwner();
    /// <summary>
    /// Compute 3D part of View Cube.
    /// </summary>
    /// <param name="in]">
    /// thePrsMgr  presentation manager.
    /// </param>
    /// <param name="in]">
    /// thePrs  input presentation that is to be filled with flat presentation primitives.
    /// </param>
    /// <param name="in]">
    /// theMode  display mode.
    /// </param>
    /// @warning this object accept only 0 display mode.
    void Compute(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Graphic3d_Structure^ thePrs, int theMode);
    /// <summary>
    /// Compute 3D part of View Cube.
    /// </summary>
    /// <param name="in]">
    /// thePrsMgr  presentation manager.
    /// </param>
    /// <param name="in]">
    /// thePrs  input presentation that is to be filled with flat presentation primitives.
    /// </param>
    /// <param name="in]">
    /// theMode  display mode.
    /// </param>
    /// @warning this object accept only 0 display mode.
    void Compute(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Graphic3d_Structure^ thePrs);
    /// <summary>
    /// Redefine computing of sensitive entities for View Cube.
    /// </summary>
    /// <param name="in]">
    /// theSelection  input selection object that is to be filled with sensitive entities.
    /// </param>
    /// <param name="in]">
    /// theMode  selection mode.
    /// </param>
    /// @warning object accepts only 0 selection mode.
    void ComputeSelection(Macad::Occt::SelectMgr_Selection^ theSelection, int theMode);
    /// <summary>
    /// Disables auto highlighting to use HilightSelected() and HilightOwnerWithColor() overridden
    /// methods.
    /// </summary>
    bool IsAutoHilight();
    /// <summary>
    /// Method which clear all selected owners belonging to this selectable object.
    /// </summary>
    /// @warning this object does not support selection.
    void ClearSelected();
    /// <summary>
    /// Method which highlights input owner belonging to this selectable object.
    /// </summary>
    /// <param name="in]">
    /// thePM  presentation manager
    /// </param>
    /// <param name="in]">
    /// theStyle  style for dynamic highlighting.
    /// </param>
    /// <param name="in]">
    /// theOwner  input entity owner.
    /// </param>
    void HilightOwnerWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::Prs3d_Drawer^ theStyle, Macad::Occt::SelectMgr_EntityOwner^ theOwner);
    /// <summary>
    /// Method which draws selected owners.
    /// </summary>
    void HilightSelected(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq);
    /// <summary>
    /// Set default parameters for visual attributes
    /// </summary>
    /// @sa Attributes()
    void UnsetAttributes();
    /// <summary>
    /// Set default parameters for dynamic highlighting attributes, reset highlight attributes
    /// </summary>
    void UnsetHilightAttributes();
    static Macad::Occt::AIS_ViewCube^ CreateDowncasted(::AIS_ViewCube* instance);
}; // class AIS_ViewCube

}; // namespace Occt
}; // namespace Macad
