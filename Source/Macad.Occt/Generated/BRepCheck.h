// Generated wrapper code for package BRepCheck

#pragma once

#include "NCollection.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BRepCheck_Status
//---------------------------------------------------------------------
public enum class BRepCheck_Status
{
    NoError = 0,
    InvalidPointOnCurve = 1,
    InvalidPointOnCurveOnSurface = 2,
    InvalidPointOnSurface = 3,
    No3DCurve = 4,
    Multiple3DCurve = 5,
    Invalid3DCurve = 6,
    NoCurveOnSurface = 7,
    InvalidCurveOnSurface = 8,
    InvalidCurveOnClosedSurface = 9,
    InvalidSameRangeFlag = 10,
    InvalidSameParameterFlag = 11,
    InvalidDegeneratedFlag = 12,
    FreeEdge = 13,
    InvalidMultiConnexity = 14,
    InvalidRange = 15,
    EmptyWire = 16,
    RedundantEdge = 17,
    SelfIntersectingWire = 18,
    NoSurface = 19,
    InvalidWire = 20,
    RedundantWire = 21,
    IntersectingWires = 22,
    InvalidImbricationOfWires = 23,
    EmptyShell = 24,
    RedundantFace = 25,
    InvalidImbricationOfShells = 26,
    UnorientableShape = 27,
    NotClosed = 28,
    NotConnected = 29,
    SubshapeNotInShape = 30,
    BadOrientation = 31,
    BadOrientationOfSubshape = 32,
    InvalidPolygonOnTriangulation = 33,
    InvalidToleranceValue = 34,
    EnclosedRegion = 35,
    CheckFail = 36
}; // enum  class BRepCheck_Status

//---------------------------------------------------------------------
//  Class  BRepCheck_ListOfStatus
//---------------------------------------------------------------------
public ref class BRepCheck_ListOfStatus sealed
    : public Macad::Occt::NCollection_BaseList
    , public IEnumerable<Macad::Occt::BRepCheck_Status>
{

#ifdef Include_BRepCheck_ListOfStatus_h
public:
    Include_BRepCheck_ListOfStatus_h
#endif

public:
    BRepCheck_ListOfStatus(::BRepCheck_ListOfStatus* nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    BRepCheck_ListOfStatus(::BRepCheck_ListOfStatus& nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    property ::BRepCheck_ListOfStatus* NativeInstance
    {
        ::BRepCheck_ListOfStatus* get()
        {
            return static_cast<::BRepCheck_ListOfStatus*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::BRepCheck_Status, ::BRepCheck_ListOfStatus::Iterator>
    {

#ifdef Include_BRepCheck_ListOfStatus_Iterator_h
    public:
        Include_BRepCheck_ListOfStatus_Iterator_h
#endif

    public:
        Iterator(::BRepCheck_ListOfStatus::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::BRepCheck_Status, ::BRepCheck_ListOfStatus::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepCheck_ListOfStatus::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::BRepCheck_Status, ::BRepCheck_ListOfStatus::Iterator>( &nativeInstance, false )
        {}

        property ::BRepCheck_ListOfStatus::Iterator* NativeInstance
        {
            ::BRepCheck_ListOfStatus::Iterator* get()
            {
                return static_cast<::BRepCheck_ListOfStatus::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More() override;
        void Next() override;
        Macad::Occt::BRepCheck_Status Value() override;
        Macad::Occt::BRepCheck_Status ChangeValue();
    }; // class Iterator

    BRepCheck_ListOfStatus();
    BRepCheck_ListOfStatus(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    Macad::Occt::BRepCheck_ListOfStatus^ Assign(Macad::Occt::BRepCheck_ListOfStatus^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::BRepCheck_Status First();
    Macad::Occt::BRepCheck_Status Last();
    Macad::Occt::BRepCheck_Status Append(Macad::Occt::BRepCheck_Status theItem);
    Macad::Occt::BRepCheck_Status Prepend(Macad::Occt::BRepCheck_Status theItem);
    void RemoveFirst();
    void Remove(Macad::Occt::BRepCheck_ListOfStatus::Iterator^ theIter);
    Macad::Occt::BRepCheck_Status InsertBefore(Macad::Occt::BRepCheck_Status theItem, Macad::Occt::BRepCheck_ListOfStatus::Iterator^ theIter);
    Macad::Occt::BRepCheck_Status InsertAfter(Macad::Occt::BRepCheck_Status theItem, Macad::Occt::BRepCheck_ListOfStatus::Iterator^ theIter);
    void Reverse();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::BRepCheck_Status>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class BRepCheck_ListOfStatus

//---------------------------------------------------------------------
//  Class  BRepCheck_HListOfStatus
//---------------------------------------------------------------------
public ref class BRepCheck_HListOfStatus sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepCheck_HListOfStatus_h
public:
    Include_BRepCheck_HListOfStatus_h
#endif

public:
    BRepCheck_HListOfStatus(::BRepCheck_HListOfStatus* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BRepCheck_HListOfStatus(::BRepCheck_HListOfStatus& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BRepCheck_HListOfStatus* NativeInstance
    {
        ::BRepCheck_HListOfStatus* get()
        {
            return static_cast<::BRepCheck_HListOfStatus*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepCheck_HListOfStatus::Iterator>
    {

#ifdef Include_BRepCheck_HListOfStatus_Iterator_h
    public:
        Include_BRepCheck_HListOfStatus_Iterator_h
#endif

    public:
        Iterator(::BRepCheck_HListOfStatus::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepCheck_HListOfStatus::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepCheck_HListOfStatus::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepCheck_HListOfStatus::Iterator>( &nativeInstance, false )
        {}

        property ::BRepCheck_HListOfStatus::Iterator* NativeInstance
        {
            ::BRepCheck_HListOfStatus::Iterator* get()
            {
                return static_cast<::BRepCheck_HListOfStatus::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::BRepCheck_Status Value();
        Macad::Occt::BRepCheck_Status ChangeValue();
    }; // class Iterator

    int Size();
    Macad::Occt::BRepCheck_ListOfStatus^ Assign(Macad::Occt::BRepCheck_ListOfStatus^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::BRepCheck_Status First();
    Macad::Occt::BRepCheck_Status Last();
    Macad::Occt::BRepCheck_Status Append(Macad::Occt::BRepCheck_Status theItem);
    Macad::Occt::BRepCheck_Status Prepend(Macad::Occt::BRepCheck_Status theItem);
    void RemoveFirst();
    void Remove(Macad::Occt::BRepCheck_HListOfStatus::Iterator^ theIter);
    Macad::Occt::BRepCheck_Status InsertBefore(Macad::Occt::BRepCheck_Status theItem, Macad::Occt::BRepCheck_HListOfStatus::Iterator^ theIter);
    Macad::Occt::BRepCheck_Status InsertAfter(Macad::Occt::BRepCheck_Status theItem, Macad::Occt::BRepCheck_HListOfStatus::Iterator^ theIter);
    void Reverse();
    BRepCheck_HListOfStatus();
    static Macad::Occt::BRepCheck_HListOfStatus^ CreateDowncasted(::BRepCheck_HListOfStatus* instance);
}; // class BRepCheck_HListOfStatus

//---------------------------------------------------------------------
//  Class  BRepCheck_DataMapOfShapeListOfStatus
//---------------------------------------------------------------------
public ref class BRepCheck_DataMapOfShapeListOfStatus sealed
    : public Macad::Occt::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus>
{

#ifdef Include_BRepCheck_DataMapOfShapeListOfStatus_h
public:
    Include_BRepCheck_DataMapOfShapeListOfStatus_h
#endif

public:
    BRepCheck_DataMapOfShapeListOfStatus(::BRepCheck_DataMapOfShapeListOfStatus* nativeInstance)
        : Macad::Occt::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus>( nativeInstance, true )
    {}

    BRepCheck_DataMapOfShapeListOfStatus(::BRepCheck_DataMapOfShapeListOfStatus& nativeInstance)
        : Macad::Occt::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus>( &nativeInstance, false )
    {}

    property ::BRepCheck_DataMapOfShapeListOfStatus* NativeInstance
    {
        ::BRepCheck_DataMapOfShapeListOfStatus* get()
        {
            return static_cast<::BRepCheck_DataMapOfShapeListOfStatus*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus::Iterator>
    {

#ifdef Include_BRepCheck_DataMapOfShapeListOfStatus_Iterator_h
    public:
        Include_BRepCheck_DataMapOfShapeListOfStatus_Iterator_h
#endif

    public:
        Iterator(::BRepCheck_DataMapOfShapeListOfStatus::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepCheck_DataMapOfShapeListOfStatus::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus::Iterator>( &nativeInstance, false )
        {}

        property ::BRepCheck_DataMapOfShapeListOfStatus::Iterator* NativeInstance
        {
            ::BRepCheck_DataMapOfShapeListOfStatus::Iterator* get()
            {
                return static_cast<::BRepCheck_DataMapOfShapeListOfStatus::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        /* Method skipped due to unknown mapping: NCollection_Shared<NCollection_List<BRepCheck_Status Value() */
        /* Method skipped due to unknown mapping: NCollection_Shared<NCollection_List<BRepCheck_Status ChangeValue() */
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    BRepCheck_DataMapOfShapeListOfStatus();
    BRepCheck_DataMapOfShapeListOfStatus(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    BRepCheck_DataMapOfShapeListOfStatus(int theNbBuckets);
    void Exchange(Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus^ theOther);
    Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus^ Assign(Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus^ theOther);
    void ReSize(int N);
    /* Method skipped due to unknown mapping: bool Bind(TopoDS_Shape theKey, NCollection_Shared<NCollection_List<BRepCheck_Status theItem, ) */
    /* Method skipped due to unknown mapping: NCollection_Shared<NCollection_List<BRepCheck_Status Bound(TopoDS_Shape theKey, NCollection_Shared<NCollection_List<BRepCheck_Status theItem, ) */
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    /* Method skipped due to unknown mapping: NCollection_Shared<NCollection_List<BRepCheck_Status Seek(TopoDS_Shape theKey, ) */
    /* Method skipped due to unknown mapping: NCollection_Shared<NCollection_List<BRepCheck_Status Find(TopoDS_Shape theKey, ) */
    /* Method skipped due to unknown mapping: NCollection_Shared<NCollection_List<BRepCheck_Status ChangeSeek(TopoDS_Shape theKey, ) */
    /* Method skipped due to unknown mapping: NCollection_Shared<NCollection_List<BRepCheck_Status ChangeFind(TopoDS_Shape theKey, ) */
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class BRepCheck_DataMapOfShapeListOfStatus

//---------------------------------------------------------------------
//  Class  BRepCheck_IndexedDataMapOfShapeResult
//---------------------------------------------------------------------
public ref class BRepCheck_IndexedDataMapOfShapeResult sealed
    : public Macad::Occt::BaseClass<::BRepCheck_IndexedDataMapOfShapeResult>
{

#ifdef Include_BRepCheck_IndexedDataMapOfShapeResult_h
public:
    Include_BRepCheck_IndexedDataMapOfShapeResult_h
#endif

public:
    BRepCheck_IndexedDataMapOfShapeResult(::BRepCheck_IndexedDataMapOfShapeResult* nativeInstance)
        : Macad::Occt::BaseClass<::BRepCheck_IndexedDataMapOfShapeResult>( nativeInstance, true )
    {}

    BRepCheck_IndexedDataMapOfShapeResult(::BRepCheck_IndexedDataMapOfShapeResult& nativeInstance)
        : Macad::Occt::BaseClass<::BRepCheck_IndexedDataMapOfShapeResult>( &nativeInstance, false )
    {}

    property ::BRepCheck_IndexedDataMapOfShapeResult* NativeInstance
    {
        ::BRepCheck_IndexedDataMapOfShapeResult* get()
        {
            return static_cast<::BRepCheck_IndexedDataMapOfShapeResult*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepCheck_IndexedDataMapOfShapeResult::Iterator>
    {

#ifdef Include_BRepCheck_IndexedDataMapOfShapeResult_Iterator_h
    public:
        Include_BRepCheck_IndexedDataMapOfShapeResult_Iterator_h
#endif

    public:
        Iterator(::BRepCheck_IndexedDataMapOfShapeResult::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepCheck_IndexedDataMapOfShapeResult::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepCheck_IndexedDataMapOfShapeResult::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepCheck_IndexedDataMapOfShapeResult::Iterator>( &nativeInstance, false )
        {}

        property ::BRepCheck_IndexedDataMapOfShapeResult::Iterator* NativeInstance
        {
            ::BRepCheck_IndexedDataMapOfShapeResult::Iterator* get()
            {
                return static_cast<::BRepCheck_IndexedDataMapOfShapeResult::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    BRepCheck_IndexedDataMapOfShapeResult();
    BRepCheck_IndexedDataMapOfShapeResult(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    BRepCheck_IndexedDataMapOfShapeResult(int theNbBuckets);
    void Exchange(Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult^ theOther);
    Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult^ Assign(Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult^ theOther);
    void ReSize(int N);
    int Add(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::BRepCheck_Result^ theItem);
    bool Contains(Macad::Occt::TopoDS_Shape^ theKey1);
    void Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::BRepCheck_Result^ theItem);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    void RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_Shape^ FindKey(int theIndex);
    Macad::Occt::BRepCheck_Result^ FindFromIndex(int theIndex);
    Macad::Occt::BRepCheck_Result^ ChangeFromIndex(int theIndex);
    int FindIndex(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::BRepCheck_Result^ FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::BRepCheck_Result^ ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::BRepCheck_Result^ Seek(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::BRepCheck_Result^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class BRepCheck_IndexedDataMapOfShapeResult

//---------------------------------------------------------------------
//  Class  BRepCheck
//---------------------------------------------------------------------
/// <summary>
/// This package  provides tools to check the validity
/// of the BRep.
/// </summary>
public ref class BRepCheck sealed
    : public Macad::Occt::BaseClass<::BRepCheck>
{

#ifdef Include_BRepCheck_h
public:
    Include_BRepCheck_h
#endif

public:
    BRepCheck(::BRepCheck* nativeInstance)
        : Macad::Occt::BaseClass<::BRepCheck>( nativeInstance, true )
    {}

    BRepCheck(::BRepCheck& nativeInstance)
        : Macad::Occt::BaseClass<::BRepCheck>( &nativeInstance, false )
    {}

    property ::BRepCheck* NativeInstance
    {
        ::BRepCheck* get()
        {
            return static_cast<::BRepCheck*>(_NativeInstance);
        }
    }

public:
    BRepCheck();
    static void Add(Macad::Occt::BRepCheck_ListOfStatus^ List, Macad::Occt::BRepCheck_Status Stat);
    static void Print(Macad::Occt::BRepCheck_Status Stat, System::IO::TextWriter^ OS);
    static bool SelfIntersection(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
    /// <summary>
    /// Returns the resolution on the 3d curve
    /// </summary>
    static double PrecCurve(Macad::Occt::Adaptor3d_Curve^ aAC3D);
    /// <summary>
    /// Returns the resolution on the surface
    /// </summary>
    static double PrecSurface(Macad::Occt::Adaptor3d_Surface^ aAHSurf);
}; // class BRepCheck

//---------------------------------------------------------------------
//  Class  BRepCheck_Result
//---------------------------------------------------------------------
public ref class BRepCheck_Result
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepCheck_Result_h
public:
    Include_BRepCheck_Result_h
#endif

protected:
    BRepCheck_Result(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    BRepCheck_Result(::BRepCheck_Result* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BRepCheck_Result(::BRepCheck_Result& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BRepCheck_Result* NativeInstance
    {
        ::BRepCheck_Result* get()
        {
            return static_cast<::BRepCheck_Result*>(_NativeInstance);
        }
    }

public:
    void Init(Macad::Occt::TopoDS_Shape^ S);
    void InContext(Macad::Occt::TopoDS_Shape^ ContextShape);
    void Minimum();
    void Blind();
    void SetFailStatus(Macad::Occt::TopoDS_Shape^ S);
    Macad::Occt::BRepCheck_ListOfStatus^ Status();
    bool IsMinimum();
    bool IsBlind();
    void InitContextIterator();
    bool MoreShapeInContext();
    Macad::Occt::TopoDS_Shape^ ContextualShape();
    Macad::Occt::BRepCheck_ListOfStatus^ StatusOnShape();
    void NextShapeInContext();
    void SetParallel(bool theIsParallel);
    bool IsStatusOnShape(Macad::Occt::TopoDS_Shape^ theShape);
    Macad::Occt::BRepCheck_ListOfStatus^ StatusOnShape(Macad::Occt::TopoDS_Shape^ theShape);
    static Macad::Occt::BRepCheck_Result^ CreateDowncasted(::BRepCheck_Result* instance);
}; // class BRepCheck_Result

//---------------------------------------------------------------------
//  Class  BRepCheck_Analyzer
//---------------------------------------------------------------------
/// <summary>
/// A framework to check the overall
/// validity of a shape. For a shape to be valid in Open
/// CASCADE, it - or its component subshapes - must respect certain
/// criteria. These criteria are checked by the function IsValid.
/// Once you have determined whether a shape is valid or not, you can
/// diagnose its specific anomalies and correct them using the services of
/// the ShapeAnalysis, ShapeUpgrade, and ShapeFix packages.
/// </summary>
public ref class BRepCheck_Analyzer sealed
    : public Macad::Occt::BaseClass<::BRepCheck_Analyzer>
{

#ifdef Include_BRepCheck_Analyzer_h
public:
    Include_BRepCheck_Analyzer_h
#endif

public:
    BRepCheck_Analyzer(::BRepCheck_Analyzer* nativeInstance)
        : Macad::Occt::BaseClass<::BRepCheck_Analyzer>( nativeInstance, true )
    {}

    BRepCheck_Analyzer(::BRepCheck_Analyzer& nativeInstance)
        : Macad::Occt::BaseClass<::BRepCheck_Analyzer>( &nativeInstance, false )
    {}

    property ::BRepCheck_Analyzer* NativeInstance
    {
        ::BRepCheck_Analyzer* get()
        {
            return static_cast<::BRepCheck_Analyzer*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a shape validation object defined by the shape S.
    /// <S> is the  shape  to control.  <GeomControls>  If
    /// False   only topological informaions  are checked.
    /// The geometricals controls are
    /// For a Vertex :
    /// BRepCheck_InvalidToleranceValue  NYI
    /// For an Edge :
    /// BRepCheck_InvalidCurveOnClosedSurface,
    /// BRepCheck_InvalidCurveOnSurface,
    /// BRepCheck_InvalidSameParameterFlag,
    /// BRepCheck_InvalidToleranceValue  NYI
    /// For a face :
    /// BRepCheck_UnorientableShape,
    /// BRepCheck_IntersectingWires,
    /// BRepCheck_InvalidToleranceValue  NYI
    /// For a wire :
    /// BRepCheck_SelfIntersectingWire
    /// </summary>
    BRepCheck_Analyzer(Macad::Occt::TopoDS_Shape^ S, bool GeomControls, bool theIsParallel, bool theIsExact);
    /// <summary>
    /// Constructs a shape validation object defined by the shape S.
    /// <S> is the  shape  to control.  <GeomControls>  If
    /// False   only topological informaions  are checked.
    /// The geometricals controls are
    /// For a Vertex :
    /// BRepCheck_InvalidToleranceValue  NYI
    /// For an Edge :
    /// BRepCheck_InvalidCurveOnClosedSurface,
    /// BRepCheck_InvalidCurveOnSurface,
    /// BRepCheck_InvalidSameParameterFlag,
    /// BRepCheck_InvalidToleranceValue  NYI
    /// For a face :
    /// BRepCheck_UnorientableShape,
    /// BRepCheck_IntersectingWires,
    /// BRepCheck_InvalidToleranceValue  NYI
    /// For a wire :
    /// BRepCheck_SelfIntersectingWire
    /// </summary>
    BRepCheck_Analyzer(Macad::Occt::TopoDS_Shape^ S, bool GeomControls, bool theIsParallel);
    /// <summary>
    /// Constructs a shape validation object defined by the shape S.
    /// <S> is the  shape  to control.  <GeomControls>  If
    /// False   only topological informaions  are checked.
    /// The geometricals controls are
    /// For a Vertex :
    /// BRepCheck_InvalidToleranceValue  NYI
    /// For an Edge :
    /// BRepCheck_InvalidCurveOnClosedSurface,
    /// BRepCheck_InvalidCurveOnSurface,
    /// BRepCheck_InvalidSameParameterFlag,
    /// BRepCheck_InvalidToleranceValue  NYI
    /// For a face :
    /// BRepCheck_UnorientableShape,
    /// BRepCheck_IntersectingWires,
    /// BRepCheck_InvalidToleranceValue  NYI
    /// For a wire :
    /// BRepCheck_SelfIntersectingWire
    /// </summary>
    BRepCheck_Analyzer(Macad::Occt::TopoDS_Shape^ S, bool GeomControls);
    /// <summary>
    /// Constructs a shape validation object defined by the shape S.
    /// <S> is the  shape  to control.  <GeomControls>  If
    /// False   only topological informaions  are checked.
    /// The geometricals controls are
    /// For a Vertex :
    /// BRepCheck_InvalidToleranceValue  NYI
    /// For an Edge :
    /// BRepCheck_InvalidCurveOnClosedSurface,
    /// BRepCheck_InvalidCurveOnSurface,
    /// BRepCheck_InvalidSameParameterFlag,
    /// BRepCheck_InvalidToleranceValue  NYI
    /// For a face :
    /// BRepCheck_UnorientableShape,
    /// BRepCheck_IntersectingWires,
    /// BRepCheck_InvalidToleranceValue  NYI
    /// For a wire :
    /// BRepCheck_SelfIntersectingWire
    /// </summary>
    BRepCheck_Analyzer(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// <S> is the  shape  to control.  <GeomControls>  If
    /// False   only topological informaions  are checked.
    /// The geometricals controls are
    /// For a Vertex :
    /// BRepCheck_InvalidTolerance  NYI
    /// For an Edge :
    /// BRepCheck_InvalidCurveOnClosedSurface,
    /// BRepCheck_InvalidCurveOnSurface,
    /// BRepCheck_InvalidSameParameterFlag,
    /// BRepCheck_InvalidTolerance  NYI
    /// For a face :
    /// BRepCheck_UnorientableShape,
    /// BRepCheck_IntersectingWires,
    /// BRepCheck_InvalidTolerance  NYI
    /// For a wire :
    /// BRepCheck_SelfIntersectingWire
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S, bool GeomControls);
    /// <summary>
    /// <S> is the  shape  to control.  <GeomControls>  If
    /// False   only topological informaions  are checked.
    /// The geometricals controls are
    /// For a Vertex :
    /// BRepCheck_InvalidTolerance  NYI
    /// For an Edge :
    /// BRepCheck_InvalidCurveOnClosedSurface,
    /// BRepCheck_InvalidCurveOnSurface,
    /// BRepCheck_InvalidSameParameterFlag,
    /// BRepCheck_InvalidTolerance  NYI
    /// For a face :
    /// BRepCheck_UnorientableShape,
    /// BRepCheck_IntersectingWires,
    /// BRepCheck_InvalidTolerance  NYI
    /// For a wire :
    /// BRepCheck_SelfIntersectingWire
    /// </summary>
    void Init(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Sets method to calculate distance: Calculating in finite number of points (if theIsExact
    /// is false, faster, but possible not correct result) or exact calculating by using
    /// BRepLib_CheckCurveOnSurface class (if theIsExact is true, slowly, but more correctly).
    /// Exact method is used only when edge is SameParameter.
    /// Default method is calculating in finite number of points
    /// </summary>
    void SetExactMethod(bool theIsExact);
    /// <summary>
    /// Returns true if exact method selected
    /// </summary>
    bool IsExactMethod();
    /// <summary>
    /// Sets parallel flag
    /// </summary>
    void SetParallel(bool theIsParallel);
    /// <summary>
    /// Returns true if parallel flag is set
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// <S> is a  subshape of the  original shape. Returns
    /// <STandard_True> if no default has been detected on
    /// <S> and any of its subshape.
    /// </summary>
    bool IsValid(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns true if no defect is
    /// detected on the shape S or any of its subshapes.
    /// Returns true if the shape S is valid.
    /// This function checks whether a given shape is valid by checking that:
    /// -      the topology is correct
    /// -      parameterization of edges in particular is correct.
    /// For the topology to be correct, the following conditions must be satisfied:
    /// -      edges should have at least two vertices if they are not
    /// degenerate edges. The vertices should be within the range of
    /// the bounding edges at the tolerance specified in the vertex,
    /// -      edges should share at least one face. The representation of
    /// the edges should be within the tolerance criterion assigned to them.
    /// -      wires defining a face should not self-intersect and should be closed,
    /// - there should be one wire which contains all other wires inside a face,
    /// -      wires should be correctly oriented with respect to each of the edges,
    /// -      faces should be correctly oriented, in particular with
    /// respect to adjacent faces if these faces define a solid,
    /// -      shells defining a solid should be closed. There should
    /// be one enclosing shell if the shape is a solid;
    /// To check parameterization of edge, there are 2 approaches depending on
    /// the edge?s contextual situation.
    /// -      if the edge is either single, or it is in the context
    /// of a wire or a compound, its parameterization is defined by
    /// the parameterization of its 3D curve and is considered as    valid.
    /// -      If the edge is in the context of a face, it should
    /// have SameParameter and SameRange flags set to Standard_True. To
    /// check these flags, you should call the function
    /// BRep_Tool::SameParameter and BRep_Tool::SameRange for an
    /// edge. If at least one of these flags is set to Standard_False,
    /// the edge is considered as invalid without any additional check.
    /// If the edge is contained by a face, and it has SameParameter and
    /// SameRange flags set to Standard_True, IsValid checks
    /// whether representation of the edge on face, in context of which the
    /// edge is considered, has the same parameterization up to the
    /// tolerance value coded on the edge. For a given parameter t on the edge
    /// having C as a 3D curve and one PCurve P on a surface S (base
    /// surface of the reference face), this checks that |C(t) - S(P(t))|
    /// is less than or equal to tolerance, where tolerance is the tolerance
    /// value coded on the edge.
    /// </summary>
    bool IsValid();
    Macad::Occt::BRepCheck_Result^ Result(Macad::Occt::TopoDS_Shape^ theSubS);
}; // class BRepCheck_Analyzer

//---------------------------------------------------------------------
//  Class  BRepCheck_Edge
//---------------------------------------------------------------------
public ref class BRepCheck_Edge sealed
    : public Macad::Occt::BRepCheck_Result
{

#ifdef Include_BRepCheck_Edge_h
public:
    Include_BRepCheck_Edge_h
#endif

public:
    BRepCheck_Edge(::BRepCheck_Edge* nativeInstance)
        : Macad::Occt::BRepCheck_Result( nativeInstance )
    {}

    BRepCheck_Edge(::BRepCheck_Edge& nativeInstance)
        : Macad::Occt::BRepCheck_Result( nativeInstance )
    {}

    property ::BRepCheck_Edge* NativeInstance
    {
        ::BRepCheck_Edge* get()
        {
            return static_cast<::BRepCheck_Edge*>(_NativeInstance);
        }
    }

public:
    BRepCheck_Edge(Macad::Occt::TopoDS_Edge^ E);
    void InContext(Macad::Occt::TopoDS_Shape^ ContextShape);
    void Minimum();
    void Blind();
    bool GeometricControls();
    void GeometricControls(bool B);
    double Tolerance();
    /// <summary>
    /// Sets status of Edge;
    /// </summary>
    void SetStatus(Macad::Occt::BRepCheck_Status theStatus);
    /// <summary>
    /// Sets method to calculate distance: Calculating in finite number of points (if theIsExact
    /// is false, faster, but possible not correct result) or exact calculating by using
    /// BRepLib_CheckCurveOnSurface class (if theIsExact is true, slowly, but more correctly).
    /// Exact method is used only when edge is SameParameter.
    /// Default method is calculating in finite number of points
    /// </summary>
    void SetExactMethod(bool theIsExact);
    /// <summary>
    /// Returns true if exact method selected
    /// </summary>
    bool IsExactMethod();
    /// <summary>
    /// Checks, if polygon on triangulation of heEdge
    /// is out of 3D-curve of this edge.
    /// </summary>
    Macad::Occt::BRepCheck_Status CheckPolygonOnTriangulation(Macad::Occt::TopoDS_Edge^ theEdge);
    static Macad::Occt::BRepCheck_Edge^ CreateDowncasted(::BRepCheck_Edge* instance);
}; // class BRepCheck_Edge

//---------------------------------------------------------------------
//  Class  BRepCheck_Face
//---------------------------------------------------------------------
public ref class BRepCheck_Face sealed
    : public Macad::Occt::BRepCheck_Result
{

#ifdef Include_BRepCheck_Face_h
public:
    Include_BRepCheck_Face_h
#endif

public:
    BRepCheck_Face(::BRepCheck_Face* nativeInstance)
        : Macad::Occt::BRepCheck_Result( nativeInstance )
    {}

    BRepCheck_Face(::BRepCheck_Face& nativeInstance)
        : Macad::Occt::BRepCheck_Result( nativeInstance )
    {}

    property ::BRepCheck_Face* NativeInstance
    {
        ::BRepCheck_Face* get()
        {
            return static_cast<::BRepCheck_Face*>(_NativeInstance);
        }
    }

public:
    BRepCheck_Face(Macad::Occt::TopoDS_Face^ F);
    void InContext(Macad::Occt::TopoDS_Shape^ ContextShape);
    void Minimum();
    void Blind();
    Macad::Occt::BRepCheck_Status IntersectWires(bool Update);
    Macad::Occt::BRepCheck_Status IntersectWires();
    Macad::Occt::BRepCheck_Status ClassifyWires(bool Update);
    Macad::Occt::BRepCheck_Status ClassifyWires();
    Macad::Occt::BRepCheck_Status OrientationOfWires(bool Update);
    Macad::Occt::BRepCheck_Status OrientationOfWires();
    void SetUnorientable();
    /// <summary>
    /// Sets status of Face;
    /// </summary>
    void SetStatus(Macad::Occt::BRepCheck_Status theStatus);
    bool IsUnorientable();
    bool GeometricControls();
    void GeometricControls(bool B);
    static Macad::Occt::BRepCheck_Face^ CreateDowncasted(::BRepCheck_Face* instance);
}; // class BRepCheck_Face

//---------------------------------------------------------------------
//  Class  BRepCheck_Shell
//---------------------------------------------------------------------
public ref class BRepCheck_Shell sealed
    : public Macad::Occt::BRepCheck_Result
{

#ifdef Include_BRepCheck_Shell_h
public:
    Include_BRepCheck_Shell_h
#endif

public:
    BRepCheck_Shell(::BRepCheck_Shell* nativeInstance)
        : Macad::Occt::BRepCheck_Result( nativeInstance )
    {}

    BRepCheck_Shell(::BRepCheck_Shell& nativeInstance)
        : Macad::Occt::BRepCheck_Result( nativeInstance )
    {}

    property ::BRepCheck_Shell* NativeInstance
    {
        ::BRepCheck_Shell* get()
        {
            return static_cast<::BRepCheck_Shell*>(_NativeInstance);
        }
    }

public:
    BRepCheck_Shell(Macad::Occt::TopoDS_Shell^ S);
    void InContext(Macad::Occt::TopoDS_Shape^ ContextShape);
    void Minimum();
    void Blind();
    /// <summary>
    /// Checks if the oriented  faces of the shell  give a
    /// closed shell.    If the  wire is  closed,  returns
    /// BRepCheck_NoError.If      <Update>     is  set  to
    /// Standard_True, registers the status in the list.
    /// </summary>
    Macad::Occt::BRepCheck_Status Closed(bool Update);
    /// <summary>
    /// Checks if the oriented  faces of the shell  give a
    /// closed shell.    If the  wire is  closed,  returns
    /// BRepCheck_NoError.If      <Update>     is  set  to
    /// Standard_True, registers the status in the list.
    /// </summary>
    Macad::Occt::BRepCheck_Status Closed();
    /// <summary>
    /// Checks if the   oriented faces  of  the shell  are
    /// correctly oriented.  An internal  call is  made to
    /// the  method  Closed.   If  <Update>    is set   to
    /// Standard_True, registers the status in the list.
    /// </summary>
    Macad::Occt::BRepCheck_Status Orientation(bool Update);
    /// <summary>
    /// Checks if the   oriented faces  of  the shell  are
    /// correctly oriented.  An internal  call is  made to
    /// the  method  Closed.   If  <Update>    is set   to
    /// Standard_True, registers the status in the list.
    /// </summary>
    Macad::Occt::BRepCheck_Status Orientation();
    void SetUnorientable();
    bool IsUnorientable();
    int NbConnectedSet(Macad::Occt::TopTools_ListOfShape^ theSets);
    static Macad::Occt::BRepCheck_Shell^ CreateDowncasted(::BRepCheck_Shell* instance);
}; // class BRepCheck_Shell

//---------------------------------------------------------------------
//  Class  BRepCheck_Solid
//---------------------------------------------------------------------
/// <summary>
/// The class is to check a solid.
/// </summary>
public ref class BRepCheck_Solid sealed
    : public Macad::Occt::BRepCheck_Result
{

#ifdef Include_BRepCheck_Solid_h
public:
    Include_BRepCheck_Solid_h
#endif

public:
    BRepCheck_Solid(::BRepCheck_Solid* nativeInstance)
        : Macad::Occt::BRepCheck_Result( nativeInstance )
    {}

    BRepCheck_Solid(::BRepCheck_Solid& nativeInstance)
        : Macad::Occt::BRepCheck_Result( nativeInstance )
    {}

    property ::BRepCheck_Solid* NativeInstance
    {
        ::BRepCheck_Solid* get()
        {
            return static_cast<::BRepCheck_Solid*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor
    /// <theS> is the solid to check
    /// </summary>
    BRepCheck_Solid(Macad::Occt::TopoDS_Solid^ theS);
    /// <summary>
    /// Checks the solid in context of
    /// the shape <theContextShape>
    /// </summary>
    void InContext(Macad::Occt::TopoDS_Shape^ theContextShape);
    /// <summary>
    /// Checks the solid per se.
    /// 
    /// The scan area is:
    /// 1.  Shells that overlaps each other
    /// Status:  BRepCheck_InvalidImbricationOfShells
    /// 
    /// 2.  Detached parts of the solid (vertices, edges)
    /// that have non-internal orientation
    /// Status:  BRepCheck_BadOrientationOfSubshape
    /// 
    /// 3.  For closed, non-internal shells:
    /// 3.1 Shells containing entities  of the solid that
    /// are outside towards the shells
    /// Status:  BRepCheck_SubshapeNotInShape
    /// 
    /// 3.2 Shells that encloses other Shells
    /// (for non-holes)
    /// Status:  BRepCheck_EnclosedRegion
    /// </summary>
    void Minimum();
    /// <summary>
    /// see the parent class for more details
    /// </summary>
    void Blind();
    static Macad::Occt::BRepCheck_Solid^ CreateDowncasted(::BRepCheck_Solid* instance);
}; // class BRepCheck_Solid

//---------------------------------------------------------------------
//  Class  BRepCheck_Vertex
//---------------------------------------------------------------------
public ref class BRepCheck_Vertex sealed
    : public Macad::Occt::BRepCheck_Result
{

#ifdef Include_BRepCheck_Vertex_h
public:
    Include_BRepCheck_Vertex_h
#endif

public:
    BRepCheck_Vertex(::BRepCheck_Vertex* nativeInstance)
        : Macad::Occt::BRepCheck_Result( nativeInstance )
    {}

    BRepCheck_Vertex(::BRepCheck_Vertex& nativeInstance)
        : Macad::Occt::BRepCheck_Result( nativeInstance )
    {}

    property ::BRepCheck_Vertex* NativeInstance
    {
        ::BRepCheck_Vertex* get()
        {
            return static_cast<::BRepCheck_Vertex*>(_NativeInstance);
        }
    }

public:
    BRepCheck_Vertex(Macad::Occt::TopoDS_Vertex^ V);
    void InContext(Macad::Occt::TopoDS_Shape^ ContextShape);
    void Minimum();
    void Blind();
    double Tolerance();
    static Macad::Occt::BRepCheck_Vertex^ CreateDowncasted(::BRepCheck_Vertex* instance);
}; // class BRepCheck_Vertex

//---------------------------------------------------------------------
//  Class  BRepCheck_Wire
//---------------------------------------------------------------------
public ref class BRepCheck_Wire sealed
    : public Macad::Occt::BRepCheck_Result
{

#ifdef Include_BRepCheck_Wire_h
public:
    Include_BRepCheck_Wire_h
#endif

public:
    BRepCheck_Wire(::BRepCheck_Wire* nativeInstance)
        : Macad::Occt::BRepCheck_Result( nativeInstance )
    {}

    BRepCheck_Wire(::BRepCheck_Wire& nativeInstance)
        : Macad::Occt::BRepCheck_Result( nativeInstance )
    {}

    property ::BRepCheck_Wire* NativeInstance
    {
        ::BRepCheck_Wire* get()
        {
            return static_cast<::BRepCheck_Wire*>(_NativeInstance);
        }
    }

public:
    BRepCheck_Wire(Macad::Occt::TopoDS_Wire^ W);
    /// <summary>
    /// if <ContextShape> is  a  face, consequently checks
    /// SelfIntersect(),   Closed(),   Orientation()   and
    /// Closed2d until faulty is found
    /// </summary>
    void InContext(Macad::Occt::TopoDS_Shape^ ContextShape);
    /// <summary>
    /// checks that the  wire  is  not empty and "connex".
    /// Called by constructor
    /// </summary>
    void Minimum();
    /// <summary>
    /// Does nothing
    /// </summary>
    void Blind();
    /// <summary>
    /// Checks if the  oriented  edges of the wire  give a
    /// closed  wire.   If the  wire   is closed,  returns
    /// BRepCheck_NoError.    Warning :  if the first  and
    /// last  edge   are  infinite,   the  wire   will  be
    /// considered as a closed one.  If <Update> is set to
    /// Standard_True, registers the status in the list.
    /// May return (and registers):
    /// **BRepCheck_NotConnected,   if    wire    is   not
    /// topologically closed
    /// **BRepCheck_RedundantEdge, if an  edge  is in wire
    /// more than 3 times  or  in  case of 2 occurrences if
    /// not with FORWARD and REVERSED orientation.
    /// **BRepCheck_NoError
    /// </summary>
    Macad::Occt::BRepCheck_Status Closed(bool Update);
    /// <summary>
    /// Checks if the  oriented  edges of the wire  give a
    /// closed  wire.   If the  wire   is closed,  returns
    /// BRepCheck_NoError.    Warning :  if the first  and
    /// last  edge   are  infinite,   the  wire   will  be
    /// considered as a closed one.  If <Update> is set to
    /// Standard_True, registers the status in the list.
    /// May return (and registers):
    /// **BRepCheck_NotConnected,   if    wire    is   not
    /// topologically closed
    /// **BRepCheck_RedundantEdge, if an  edge  is in wire
    /// more than 3 times  or  in  case of 2 occurrences if
    /// not with FORWARD and REVERSED orientation.
    /// **BRepCheck_NoError
    /// </summary>
    Macad::Occt::BRepCheck_Status Closed();
    /// <summary>
    /// Checks if edges of the  wire give a wire closed in
    /// 2d space.
    /// Returns BRepCheck_NoError,  or BRepCheck_NotClosed
    /// If <Update> is set to Standard_True, registers the
    /// status in the list.
    /// </summary>
    Macad::Occt::BRepCheck_Status Closed2d(Macad::Occt::TopoDS_Face^ F, bool Update);
    /// <summary>
    /// Checks if edges of the  wire give a wire closed in
    /// 2d space.
    /// Returns BRepCheck_NoError,  or BRepCheck_NotClosed
    /// If <Update> is set to Standard_True, registers the
    /// status in the list.
    /// </summary>
    Macad::Occt::BRepCheck_Status Closed2d(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Checks   if  the oriented edges   of  the wire are
    /// correctly oriented.  An  internal call is made  to
    /// the  method Closed.   If no face  exists, call the
    /// method with   a  null  face  (TopoDS_face()).   If
    /// <Update> is  set  to Standard_True,  registers the
    /// status in the list.
    /// May return (and registers):
    /// BRepCheck_InvalidDegeneratedFlag,
    /// BRepCheck_BadOrientationOfSubshape,
    /// BRepCheck_NotClosed,
    /// BRepCheck_NoError
    /// </summary>
    Macad::Occt::BRepCheck_Status Orientation(Macad::Occt::TopoDS_Face^ F, bool Update);
    /// <summary>
    /// Checks   if  the oriented edges   of  the wire are
    /// correctly oriented.  An  internal call is made  to
    /// the  method Closed.   If no face  exists, call the
    /// method with   a  null  face  (TopoDS_face()).   If
    /// <Update> is  set  to Standard_True,  registers the
    /// status in the list.
    /// May return (and registers):
    /// BRepCheck_InvalidDegeneratedFlag,
    /// BRepCheck_BadOrientationOfSubshape,
    /// BRepCheck_NotClosed,
    /// BRepCheck_NoError
    /// </summary>
    Macad::Occt::BRepCheck_Status Orientation(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Checks if  the wire intersect   itself on the face
    /// <F>.  <E1>  and <E2>   are the first  intersecting
    /// edges  found.  <E2>  may  be a  null  edge when  a
    /// self-intersecting edge is found.If <Update> is set
    /// to Standard_True,   registers  the  status in  the
    /// list.
    /// May return (and register):
    /// BRepCheck_EmptyWire,
    /// BRepCheck_SelfIntersectingWire,
    /// BRepCheck_NoCurveOnSurface,
    /// BRepCheck_NoError
    /// </summary>
    Macad::Occt::BRepCheck_Status SelfIntersect(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, bool Update);
    /// <summary>
    /// Checks if  the wire intersect   itself on the face
    /// <F>.  <E1>  and <E2>   are the first  intersecting
    /// edges  found.  <E2>  may  be a  null  edge when  a
    /// self-intersecting edge is found.If <Update> is set
    /// to Standard_True,   registers  the  status in  the
    /// list.
    /// May return (and register):
    /// BRepCheck_EmptyWire,
    /// BRepCheck_SelfIntersectingWire,
    /// BRepCheck_NoCurveOnSurface,
    /// BRepCheck_NoError
    /// </summary>
    Macad::Occt::BRepCheck_Status SelfIntersect(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2);
    /// <summary>
    /// report SelfIntersect() check would be (is) done
    /// </summary>
    bool GeometricControls();
    /// <summary>
    /// set SelfIntersect() to be checked
    /// </summary>
    void GeometricControls(bool B);
    /// <summary>
    /// Sets status of Wire;
    /// </summary>
    void SetStatus(Macad::Occt::BRepCheck_Status theStatus);
    static Macad::Occt::BRepCheck_Wire^ CreateDowncasted(::BRepCheck_Wire* instance);
}; // class BRepCheck_Wire

}; // namespace Occt
}; // namespace Macad
