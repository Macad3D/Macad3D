// Generated wrapper code for package BRepFill

#pragma once

#include "NCollection.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BRepFill_ThruSectionErrorStatus
//---------------------------------------------------------------------
/// <summary>
/// Errors that can occur at thrusection algorithm.
/// </summary>
public enum class BRepFill_ThruSectionErrorStatus
{
    Done = 0,
    NotDone = 1,
    NotSameTopology = 2,
    ProfilesInconsistent = 3,
    WrongUsage = 4,
    Null3DCurve = 5,
    Failed = 6
}; // enum  class BRepFill_ThruSectionErrorStatus

//---------------------------------------------------------------------
//  Enum  BRepFill_TransitionStyle
//---------------------------------------------------------------------
public enum class BRepFill_TransitionStyle
{
    Modified = 0,
    Right = 1,
    Round = 2
}; // enum  class BRepFill_TransitionStyle

//---------------------------------------------------------------------
//  Enum  BRepFill_TypeOfContact
//---------------------------------------------------------------------
/// <summary>
/// A pair of bound shapes with the result.
/// </summary>
public enum class BRepFill_TypeOfContact
{
    NoContact = 0,
    Contact = 1,
    ContactOnBorder = 2
}; // enum  class BRepFill_TypeOfContact

//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfNodeDataMapOfShapeShape
//---------------------------------------------------------------------
public ref class BRepFill_DataMapOfNodeDataMapOfShapeShape sealed
    : public Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeDataMapOfShapeShape>
{

#ifdef Include_BRepFill_DataMapOfNodeDataMapOfShapeShape_h
public:
    Include_BRepFill_DataMapOfNodeDataMapOfShapeShape_h
#endif

public:
    BRepFill_DataMapOfNodeDataMapOfShapeShape(::BRepFill_DataMapOfNodeDataMapOfShapeShape* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeDataMapOfShapeShape>( nativeInstance, true )
    {}

    BRepFill_DataMapOfNodeDataMapOfShapeShape(::BRepFill_DataMapOfNodeDataMapOfShapeShape& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeDataMapOfShapeShape>( &nativeInstance, false )
    {}

    property ::BRepFill_DataMapOfNodeDataMapOfShapeShape* NativeInstance
    {
        ::BRepFill_DataMapOfNodeDataMapOfShapeShape* get()
        {
            return static_cast<::BRepFill_DataMapOfNodeDataMapOfShapeShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator>
    {

#ifdef Include_BRepFill_DataMapOfNodeDataMapOfShapeShape_Iterator_h
    public:
        Include_BRepFill_DataMapOfNodeDataMapOfShapeShape_Iterator_h
#endif

    public:
        Iterator(::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator>( &nativeInstance, false )
        {}

        property ::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator* NativeInstance
        {
            ::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator* get()
            {
                return static_cast<::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TopTools_DataMapOfShapeShape^ Value();
        Macad::Occt::TopTools_DataMapOfShapeShape^ ChangeValue();
        /* Method skipped due to unknown mapping: MAT_Node Key() */
    }; // class Iterator

    BRepFill_DataMapOfNodeDataMapOfShapeShape();
    BRepFill_DataMapOfNodeDataMapOfShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    BRepFill_DataMapOfNodeDataMapOfShapeShape(int theNbBuckets);
    void Exchange(Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape^ theOther);
    Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape^ Assign(Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape^ theOther);
    void ReSize(int N);
    /* Method skipped due to unknown mapping: bool Bind(MAT_Node theKey, TopTools_DataMapOfShapeShape theItem, ) */
    /* Method skipped due to unknown mapping: TopTools_DataMapOfShapeShape Bound(MAT_Node theKey, TopTools_DataMapOfShapeShape theItem, ) */
    /* Method skipped due to unknown mapping: bool IsBound(MAT_Node theKey, ) */
    /* Method skipped due to unknown mapping: bool UnBind(MAT_Node theKey, ) */
    /* Method skipped due to unknown mapping: TopTools_DataMapOfShapeShape Seek(MAT_Node theKey, ) */
    /* Method skipped due to unknown mapping: TopTools_DataMapOfShapeShape Find(MAT_Node theKey, ) */
    /* Method skipped due to unknown mapping: TopTools_DataMapOfShapeShape ChangeSeek(MAT_Node theKey, ) */
    /* Method skipped due to unknown mapping: TopTools_DataMapOfShapeShape ChangeFind(MAT_Node theKey, ) */
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class BRepFill_DataMapOfNodeDataMapOfShapeShape

//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfNodeShape
//---------------------------------------------------------------------
public ref class BRepFill_DataMapOfNodeShape sealed
    : public Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeShape>
{

#ifdef Include_BRepFill_DataMapOfNodeShape_h
public:
    Include_BRepFill_DataMapOfNodeShape_h
#endif

public:
    BRepFill_DataMapOfNodeShape(::BRepFill_DataMapOfNodeShape* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeShape>( nativeInstance, true )
    {}

    BRepFill_DataMapOfNodeShape(::BRepFill_DataMapOfNodeShape& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeShape>( &nativeInstance, false )
    {}

    property ::BRepFill_DataMapOfNodeShape* NativeInstance
    {
        ::BRepFill_DataMapOfNodeShape* get()
        {
            return static_cast<::BRepFill_DataMapOfNodeShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeShape::Iterator>
    {

#ifdef Include_BRepFill_DataMapOfNodeShape_Iterator_h
    public:
        Include_BRepFill_DataMapOfNodeShape_Iterator_h
#endif

    public:
        Iterator(::BRepFill_DataMapOfNodeShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepFill_DataMapOfNodeShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeShape::Iterator>( &nativeInstance, false )
        {}

        property ::BRepFill_DataMapOfNodeShape::Iterator* NativeInstance
        {
            ::BRepFill_DataMapOfNodeShape::Iterator* get()
            {
                return static_cast<::BRepFill_DataMapOfNodeShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TopoDS_Shape^ Value();
        Macad::Occt::TopoDS_Shape^ ChangeValue();
        /* Method skipped due to unknown mapping: MAT_Node Key() */
    }; // class Iterator

    BRepFill_DataMapOfNodeShape();
    BRepFill_DataMapOfNodeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    BRepFill_DataMapOfNodeShape(int theNbBuckets);
    void Exchange(Macad::Occt::BRepFill_DataMapOfNodeShape^ theOther);
    Macad::Occt::BRepFill_DataMapOfNodeShape^ Assign(Macad::Occt::BRepFill_DataMapOfNodeShape^ theOther);
    void ReSize(int N);
    /* Method skipped due to unknown mapping: bool Bind(MAT_Node theKey, TopoDS_Shape theItem, ) */
    /* Method skipped due to unknown mapping: TopoDS_Shape Bound(MAT_Node theKey, TopoDS_Shape theItem, ) */
    /* Method skipped due to unknown mapping: bool IsBound(MAT_Node theKey, ) */
    /* Method skipped due to unknown mapping: bool UnBind(MAT_Node theKey, ) */
    /* Method skipped due to unknown mapping: TopoDS_Shape Seek(MAT_Node theKey, ) */
    /* Method skipped due to unknown mapping: TopoDS_Shape Find(MAT_Node theKey, ) */
    /* Method skipped due to unknown mapping: TopoDS_Shape ChangeSeek(MAT_Node theKey, ) */
    /* Method skipped due to unknown mapping: TopoDS_Shape ChangeFind(MAT_Node theKey, ) */
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class BRepFill_DataMapOfNodeShape

//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfOrientedShapeListOfShape
//---------------------------------------------------------------------
public ref class BRepFill_DataMapOfOrientedShapeListOfShape sealed
    : public Macad::Occt::BaseClass<::BRepFill_DataMapOfOrientedShapeListOfShape>
{

#ifdef Include_BRepFill_DataMapOfOrientedShapeListOfShape_h
public:
    Include_BRepFill_DataMapOfOrientedShapeListOfShape_h
#endif

public:
    BRepFill_DataMapOfOrientedShapeListOfShape(::BRepFill_DataMapOfOrientedShapeListOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfOrientedShapeListOfShape>( nativeInstance, true )
    {}

    BRepFill_DataMapOfOrientedShapeListOfShape(::BRepFill_DataMapOfOrientedShapeListOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfOrientedShapeListOfShape>( &nativeInstance, false )
    {}

    property ::BRepFill_DataMapOfOrientedShapeListOfShape* NativeInstance
    {
        ::BRepFill_DataMapOfOrientedShapeListOfShape* get()
        {
            return static_cast<::BRepFill_DataMapOfOrientedShapeListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator>
    {

#ifdef Include_BRepFill_DataMapOfOrientedShapeListOfShape_Iterator_h
    public:
        Include_BRepFill_DataMapOfOrientedShapeListOfShape_Iterator_h
#endif

    public:
        Iterator(::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator* NativeInstance
        {
            ::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator* get()
            {
                return static_cast<::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TopoDS_ListOfShape^ Value();
        Macad::Occt::TopoDS_ListOfShape^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    BRepFill_DataMapOfOrientedShapeListOfShape();
    BRepFill_DataMapOfOrientedShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    BRepFill_DataMapOfOrientedShapeListOfShape(int theNbBuckets);
    void Exchange(Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape^ theOther);
    Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape^ Assign(Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_ListOfShape^ theItem);
    Macad::Occt::TopoDS_ListOfShape^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_ListOfShape^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopoDS_ListOfShape^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopoDS_ListOfShape^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopoDS_ListOfShape^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopoDS_ListOfShape^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class BRepFill_DataMapOfOrientedShapeListOfShape

//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfShapeDataMapOfShapeListOfShape
//---------------------------------------------------------------------
public ref class BRepFill_DataMapOfShapeDataMapOfShapeListOfShape sealed
    : public Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape>
{

#ifdef Include_BRepFill_DataMapOfShapeDataMapOfShapeListOfShape_h
public:
    Include_BRepFill_DataMapOfShapeDataMapOfShapeListOfShape_h
#endif

public:
    BRepFill_DataMapOfShapeDataMapOfShapeListOfShape(::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape>( nativeInstance, true )
    {}

    BRepFill_DataMapOfShapeDataMapOfShapeListOfShape(::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape>( &nativeInstance, false )
    {}

    property ::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape* NativeInstance
    {
        ::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape* get()
        {
            return static_cast<::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator>
    {

#ifdef Include_BRepFill_DataMapOfShapeDataMapOfShapeListOfShape_Iterator_h
    public:
        Include_BRepFill_DataMapOfShapeDataMapOfShapeListOfShape_Iterator_h
#endif

    public:
        Iterator(::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator* NativeInstance
        {
            ::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator* get()
            {
                return static_cast<::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Value();
        Macad::Occt::TopTools_DataMapOfShapeListOfShape^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    BRepFill_DataMapOfShapeDataMapOfShapeListOfShape();
    BRepFill_DataMapOfShapeDataMapOfShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    BRepFill_DataMapOfShapeDataMapOfShapeListOfShape(int theNbBuckets);
    void Exchange(Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape^ theOther);
    Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape^ Assign(Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theItem);
    Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopTools_DataMapOfShapeListOfShape^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopTools_DataMapOfShapeListOfShape^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class BRepFill_DataMapOfShapeDataMapOfShapeListOfShape

//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfShapeHArray2OfShape
//---------------------------------------------------------------------
public ref class BRepFill_DataMapOfShapeHArray2OfShape sealed
    : public Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeHArray2OfShape>
{

#ifdef Include_BRepFill_DataMapOfShapeHArray2OfShape_h
public:
    Include_BRepFill_DataMapOfShapeHArray2OfShape_h
#endif

public:
    BRepFill_DataMapOfShapeHArray2OfShape(::BRepFill_DataMapOfShapeHArray2OfShape* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeHArray2OfShape>( nativeInstance, true )
    {}

    BRepFill_DataMapOfShapeHArray2OfShape(::BRepFill_DataMapOfShapeHArray2OfShape& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeHArray2OfShape>( &nativeInstance, false )
    {}

    property ::BRepFill_DataMapOfShapeHArray2OfShape* NativeInstance
    {
        ::BRepFill_DataMapOfShapeHArray2OfShape* get()
        {
            return static_cast<::BRepFill_DataMapOfShapeHArray2OfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeHArray2OfShape::Iterator>
    {

#ifdef Include_BRepFill_DataMapOfShapeHArray2OfShape_Iterator_h
    public:
        Include_BRepFill_DataMapOfShapeHArray2OfShape_Iterator_h
#endif

    public:
        Iterator(::BRepFill_DataMapOfShapeHArray2OfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeHArray2OfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepFill_DataMapOfShapeHArray2OfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeHArray2OfShape::Iterator>( &nativeInstance, false )
        {}

        property ::BRepFill_DataMapOfShapeHArray2OfShape::Iterator* NativeInstance
        {
            ::BRepFill_DataMapOfShapeHArray2OfShape::Iterator* get()
            {
                return static_cast<::BRepFill_DataMapOfShapeHArray2OfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TopTools_HArray2OfShape^ Value();
        Macad::Occt::TopTools_HArray2OfShape^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    BRepFill_DataMapOfShapeHArray2OfShape();
    BRepFill_DataMapOfShapeHArray2OfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    BRepFill_DataMapOfShapeHArray2OfShape(int theNbBuckets);
    void Exchange(Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ theOther);
    Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Assign(Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopTools_HArray2OfShape^ theItem);
    Macad::Occt::TopTools_HArray2OfShape^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopTools_HArray2OfShape^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopTools_HArray2OfShape^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopTools_HArray2OfShape^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopTools_HArray2OfShape^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopTools_HArray2OfShape^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class BRepFill_DataMapOfShapeHArray2OfShape

//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfShapeSequenceOfPnt
//---------------------------------------------------------------------
public ref class BRepFill_DataMapOfShapeSequenceOfPnt sealed
    : public Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfPnt>
{

#ifdef Include_BRepFill_DataMapOfShapeSequenceOfPnt_h
public:
    Include_BRepFill_DataMapOfShapeSequenceOfPnt_h
#endif

public:
    BRepFill_DataMapOfShapeSequenceOfPnt(::BRepFill_DataMapOfShapeSequenceOfPnt* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfPnt>( nativeInstance, true )
    {}

    BRepFill_DataMapOfShapeSequenceOfPnt(::BRepFill_DataMapOfShapeSequenceOfPnt& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfPnt>( &nativeInstance, false )
    {}

    property ::BRepFill_DataMapOfShapeSequenceOfPnt* NativeInstance
    {
        ::BRepFill_DataMapOfShapeSequenceOfPnt* get()
        {
            return static_cast<::BRepFill_DataMapOfShapeSequenceOfPnt*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator>
    {

#ifdef Include_BRepFill_DataMapOfShapeSequenceOfPnt_Iterator_h
    public:
        Include_BRepFill_DataMapOfShapeSequenceOfPnt_Iterator_h
#endif

    public:
        Iterator(::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator>( &nativeInstance, false )
        {}

        property ::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator* NativeInstance
        {
            ::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator* get()
            {
                return static_cast<::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TColgp_SequenceOfPnt^ Value();
        Macad::Occt::TColgp_SequenceOfPnt^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    BRepFill_DataMapOfShapeSequenceOfPnt();
    BRepFill_DataMapOfShapeSequenceOfPnt(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    BRepFill_DataMapOfShapeSequenceOfPnt(int theNbBuckets);
    void Exchange(Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt^ theOther);
    Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt^ Assign(Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColgp_SequenceOfPnt^ theItem);
    Macad::Occt::TColgp_SequenceOfPnt^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColgp_SequenceOfPnt^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColgp_SequenceOfPnt^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColgp_SequenceOfPnt^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColgp_SequenceOfPnt^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColgp_SequenceOfPnt^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class BRepFill_DataMapOfShapeSequenceOfPnt

//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfShapeSequenceOfReal
//---------------------------------------------------------------------
public ref class BRepFill_DataMapOfShapeSequenceOfReal sealed
    : public Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfReal>
{

#ifdef Include_BRepFill_DataMapOfShapeSequenceOfReal_h
public:
    Include_BRepFill_DataMapOfShapeSequenceOfReal_h
#endif

public:
    BRepFill_DataMapOfShapeSequenceOfReal(::BRepFill_DataMapOfShapeSequenceOfReal* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfReal>( nativeInstance, true )
    {}

    BRepFill_DataMapOfShapeSequenceOfReal(::BRepFill_DataMapOfShapeSequenceOfReal& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfReal>( &nativeInstance, false )
    {}

    property ::BRepFill_DataMapOfShapeSequenceOfReal* NativeInstance
    {
        ::BRepFill_DataMapOfShapeSequenceOfReal* get()
        {
            return static_cast<::BRepFill_DataMapOfShapeSequenceOfReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfReal::Iterator>
    {

#ifdef Include_BRepFill_DataMapOfShapeSequenceOfReal_Iterator_h
    public:
        Include_BRepFill_DataMapOfShapeSequenceOfReal_Iterator_h
#endif

    public:
        Iterator(::BRepFill_DataMapOfShapeSequenceOfReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepFill_DataMapOfShapeSequenceOfReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfReal::Iterator>( &nativeInstance, false )
        {}

        property ::BRepFill_DataMapOfShapeSequenceOfReal::Iterator* NativeInstance
        {
            ::BRepFill_DataMapOfShapeSequenceOfReal::Iterator* get()
            {
                return static_cast<::BRepFill_DataMapOfShapeSequenceOfReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TColStd_SequenceOfReal^ Value();
        Macad::Occt::TColStd_SequenceOfReal^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    BRepFill_DataMapOfShapeSequenceOfReal();
    BRepFill_DataMapOfShapeSequenceOfReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    BRepFill_DataMapOfShapeSequenceOfReal(int theNbBuckets);
    void Exchange(Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal^ theOther);
    Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal^ Assign(Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColStd_SequenceOfReal^ theItem);
    Macad::Occt::TColStd_SequenceOfReal^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColStd_SequenceOfReal^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColStd_SequenceOfReal^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColStd_SequenceOfReal^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColStd_SequenceOfReal^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColStd_SequenceOfReal^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class BRepFill_DataMapOfShapeSequenceOfReal

//---------------------------------------------------------------------
//  Class  BRepFill_SequenceOfEdgeFaceAndOrder
//---------------------------------------------------------------------
public ref class BRepFill_SequenceOfEdgeFaceAndOrder sealed
    : public Macad::Occt::BaseClass<::BRepFill_SequenceOfEdgeFaceAndOrder>
    , public IIndexEnumerable<Macad::Occt::BRepFill_EdgeFaceAndOrder^>
{

#ifdef Include_BRepFill_SequenceOfEdgeFaceAndOrder_h
public:
    Include_BRepFill_SequenceOfEdgeFaceAndOrder_h
#endif

public:
    BRepFill_SequenceOfEdgeFaceAndOrder(::BRepFill_SequenceOfEdgeFaceAndOrder* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_SequenceOfEdgeFaceAndOrder>( nativeInstance, true )
    {}

    BRepFill_SequenceOfEdgeFaceAndOrder(::BRepFill_SequenceOfEdgeFaceAndOrder& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_SequenceOfEdgeFaceAndOrder>( &nativeInstance, false )
    {}

    property ::BRepFill_SequenceOfEdgeFaceAndOrder* NativeInstance
    {
        ::BRepFill_SequenceOfEdgeFaceAndOrder* get()
        {
            return static_cast<::BRepFill_SequenceOfEdgeFaceAndOrder*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator>
    {

#ifdef Include_BRepFill_SequenceOfEdgeFaceAndOrder_Iterator_h
    public:
        Include_BRepFill_SequenceOfEdgeFaceAndOrder_Iterator_h
#endif

    public:
        Iterator(::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator>( &nativeInstance, false )
        {}

        property ::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator* NativeInstance
        {
            ::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator* get()
            {
                return static_cast<::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::BRepFill_EdgeFaceAndOrder^ Value();
        Macad::Occt::BRepFill_EdgeFaceAndOrder^ ChangeValue();
        bool IsEqual(Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    BRepFill_SequenceOfEdgeFaceAndOrder();
    BRepFill_SequenceOfEdgeFaceAndOrder(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder^ Assign(Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder^ theOther);
    void Remove(Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator^ thePosition);
    void Append(Macad::Occt::BRepFill_EdgeFaceAndOrder^ theItem);
    void Prepend(Macad::Occt::BRepFill_EdgeFaceAndOrder^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::BRepFill_EdgeFaceAndOrder^ theItem);
    void InsertAfter(Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator^ thePosition, Macad::Occt::BRepFill_EdgeFaceAndOrder^ theItem);
    void Split(int theIndex, Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder^ theSeq);
    Macad::Occt::BRepFill_EdgeFaceAndOrder^ First();
    Macad::Occt::BRepFill_EdgeFaceAndOrder^ ChangeFirst();
    Macad::Occt::BRepFill_EdgeFaceAndOrder^ Last();
    Macad::Occt::BRepFill_EdgeFaceAndOrder^ ChangeLast();
    virtual Macad::Occt::BRepFill_EdgeFaceAndOrder^ Value(int theIndex);
    Macad::Occt::BRepFill_EdgeFaceAndOrder^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::BRepFill_EdgeFaceAndOrder^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::BRepFill_EdgeFaceAndOrder^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class BRepFill_SequenceOfEdgeFaceAndOrder

//---------------------------------------------------------------------
//  Class  BRepFill_SequenceOfFaceAndOrder
//---------------------------------------------------------------------
public ref class BRepFill_SequenceOfFaceAndOrder sealed
    : public Macad::Occt::BaseClass<::BRepFill_SequenceOfFaceAndOrder>
    , public IIndexEnumerable<Macad::Occt::BRepFill_FaceAndOrder^>
{

#ifdef Include_BRepFill_SequenceOfFaceAndOrder_h
public:
    Include_BRepFill_SequenceOfFaceAndOrder_h
#endif

public:
    BRepFill_SequenceOfFaceAndOrder(::BRepFill_SequenceOfFaceAndOrder* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_SequenceOfFaceAndOrder>( nativeInstance, true )
    {}

    BRepFill_SequenceOfFaceAndOrder(::BRepFill_SequenceOfFaceAndOrder& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_SequenceOfFaceAndOrder>( &nativeInstance, false )
    {}

    property ::BRepFill_SequenceOfFaceAndOrder* NativeInstance
    {
        ::BRepFill_SequenceOfFaceAndOrder* get()
        {
            return static_cast<::BRepFill_SequenceOfFaceAndOrder*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepFill_SequenceOfFaceAndOrder::Iterator>
    {

#ifdef Include_BRepFill_SequenceOfFaceAndOrder_Iterator_h
    public:
        Include_BRepFill_SequenceOfFaceAndOrder_Iterator_h
#endif

    public:
        Iterator(::BRepFill_SequenceOfFaceAndOrder::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_SequenceOfFaceAndOrder::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepFill_SequenceOfFaceAndOrder::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_SequenceOfFaceAndOrder::Iterator>( &nativeInstance, false )
        {}

        property ::BRepFill_SequenceOfFaceAndOrder::Iterator* NativeInstance
        {
            ::BRepFill_SequenceOfFaceAndOrder::Iterator* get()
            {
                return static_cast<::BRepFill_SequenceOfFaceAndOrder::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::BRepFill_FaceAndOrder^ Value();
        Macad::Occt::BRepFill_FaceAndOrder^ ChangeValue();
        bool IsEqual(Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    BRepFill_SequenceOfFaceAndOrder();
    BRepFill_SequenceOfFaceAndOrder(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::BRepFill_SequenceOfFaceAndOrder^ Assign(Macad::Occt::BRepFill_SequenceOfFaceAndOrder^ theOther);
    void Remove(Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator^ thePosition);
    void Append(Macad::Occt::BRepFill_FaceAndOrder^ theItem);
    void Prepend(Macad::Occt::BRepFill_FaceAndOrder^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::BRepFill_FaceAndOrder^ theItem);
    void InsertAfter(Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator^ thePosition, Macad::Occt::BRepFill_FaceAndOrder^ theItem);
    void Split(int theIndex, Macad::Occt::BRepFill_SequenceOfFaceAndOrder^ theSeq);
    Macad::Occt::BRepFill_FaceAndOrder^ First();
    Macad::Occt::BRepFill_FaceAndOrder^ ChangeFirst();
    Macad::Occt::BRepFill_FaceAndOrder^ Last();
    Macad::Occt::BRepFill_FaceAndOrder^ ChangeLast();
    virtual Macad::Occt::BRepFill_FaceAndOrder^ Value(int theIndex);
    Macad::Occt::BRepFill_FaceAndOrder^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::BRepFill_FaceAndOrder^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::BRepFill_FaceAndOrder^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class BRepFill_SequenceOfFaceAndOrder

//---------------------------------------------------------------------
//  Class  BRepFill_IndexedDataMapOfOrientedShapeListOfShape
//---------------------------------------------------------------------
public ref class BRepFill_IndexedDataMapOfOrientedShapeListOfShape sealed
    : public Macad::Occt::BaseClass<::BRepFill_IndexedDataMapOfOrientedShapeListOfShape>
{

#ifdef Include_BRepFill_IndexedDataMapOfOrientedShapeListOfShape_h
public:
    Include_BRepFill_IndexedDataMapOfOrientedShapeListOfShape_h
#endif

public:
    BRepFill_IndexedDataMapOfOrientedShapeListOfShape(::BRepFill_IndexedDataMapOfOrientedShapeListOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_IndexedDataMapOfOrientedShapeListOfShape>( nativeInstance, true )
    {}

    BRepFill_IndexedDataMapOfOrientedShapeListOfShape(::BRepFill_IndexedDataMapOfOrientedShapeListOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_IndexedDataMapOfOrientedShapeListOfShape>( &nativeInstance, false )
    {}

    property ::BRepFill_IndexedDataMapOfOrientedShapeListOfShape* NativeInstance
    {
        ::BRepFill_IndexedDataMapOfOrientedShapeListOfShape* get()
        {
            return static_cast<::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Iterator>
    {

#ifdef Include_BRepFill_IndexedDataMapOfOrientedShapeListOfShape_Iterator_h
    public:
        Include_BRepFill_IndexedDataMapOfOrientedShapeListOfShape_Iterator_h
#endif

    public:
        Iterator(::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Iterator* NativeInstance
        {
            ::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Iterator* get()
            {
                return static_cast<::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    BRepFill_IndexedDataMapOfOrientedShapeListOfShape();
    BRepFill_IndexedDataMapOfOrientedShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    BRepFill_IndexedDataMapOfOrientedShapeListOfShape(int theNbBuckets);
    void Exchange(Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape^ theOther);
    Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape^ Assign(Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape^ theOther);
    void ReSize(int N);
    int Add(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_ListOfShape^ theItem);
    bool Contains(Macad::Occt::TopoDS_Shape^ theKey1);
    void Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_ListOfShape^ theItem);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    void RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_Shape^ FindKey(int theIndex);
    Macad::Occt::TopoDS_ListOfShape^ FindFromIndex(int theIndex);
    Macad::Occt::TopoDS_ListOfShape^ ChangeFromIndex(int theIndex);
    int FindIndex(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_ListOfShape^ FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_ListOfShape^ ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_ListOfShape^ Seek(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_ListOfShape^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
}; // class BRepFill_IndexedDataMapOfOrientedShapeListOfShape

//---------------------------------------------------------------------
//  Class  BRepFill_ListOfOffsetWire
//---------------------------------------------------------------------
public ref class BRepFill_ListOfOffsetWire sealed
    : public Macad::Occt::NCollection_BaseList
    , public IEnumerable<Macad::Occt::BRepFill_OffsetWire^>
{

#ifdef Include_BRepFill_ListOfOffsetWire_h
public:
    Include_BRepFill_ListOfOffsetWire_h
#endif

public:
    BRepFill_ListOfOffsetWire(::BRepFill_ListOfOffsetWire* nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    BRepFill_ListOfOffsetWire(::BRepFill_ListOfOffsetWire& nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    property ::BRepFill_ListOfOffsetWire* NativeInstance
    {
        ::BRepFill_ListOfOffsetWire* get()
        {
            return static_cast<::BRepFill_ListOfOffsetWire*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::BRepFill_OffsetWire^, ::BRepFill_ListOfOffsetWire::Iterator>
    {

#ifdef Include_BRepFill_ListOfOffsetWire_Iterator_h
    public:
        Include_BRepFill_ListOfOffsetWire_Iterator_h
#endif

    public:
        Iterator(::BRepFill_ListOfOffsetWire::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::BRepFill_OffsetWire^, ::BRepFill_ListOfOffsetWire::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepFill_ListOfOffsetWire::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::BRepFill_OffsetWire^, ::BRepFill_ListOfOffsetWire::Iterator>( &nativeInstance, false )
        {}

        property ::BRepFill_ListOfOffsetWire::Iterator* NativeInstance
        {
            ::BRepFill_ListOfOffsetWire::Iterator* get()
            {
                return static_cast<::BRepFill_ListOfOffsetWire::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More() override;
        void Next() override;
        Macad::Occt::BRepFill_OffsetWire^ Value() override;
        Macad::Occt::BRepFill_OffsetWire^ ChangeValue();
    }; // class Iterator

    BRepFill_ListOfOffsetWire();
    BRepFill_ListOfOffsetWire(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    Macad::Occt::BRepFill_ListOfOffsetWire^ Assign(Macad::Occt::BRepFill_ListOfOffsetWire^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::BRepFill_OffsetWire^ First();
    Macad::Occt::BRepFill_OffsetWire^ Last();
    Macad::Occt::BRepFill_OffsetWire^ Append(Macad::Occt::BRepFill_OffsetWire^ theItem);
    Macad::Occt::BRepFill_OffsetWire^ Prepend(Macad::Occt::BRepFill_OffsetWire^ theItem);
    void RemoveFirst();
    void Remove(Macad::Occt::BRepFill_ListOfOffsetWire::Iterator^ theIter);
    Macad::Occt::BRepFill_OffsetWire^ InsertBefore(Macad::Occt::BRepFill_OffsetWire^ theItem, Macad::Occt::BRepFill_ListOfOffsetWire::Iterator^ theIter);
    Macad::Occt::BRepFill_OffsetWire^ InsertAfter(Macad::Occt::BRepFill_OffsetWire^ theItem, Macad::Occt::BRepFill_ListOfOffsetWire::Iterator^ theIter);
    void Reverse();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::BRepFill_OffsetWire^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class BRepFill_ListOfOffsetWire

//---------------------------------------------------------------------
//  Class  BRepFill_SequenceOfSection
//---------------------------------------------------------------------
public ref class BRepFill_SequenceOfSection sealed
    : public Macad::Occt::BaseClass<::BRepFill_SequenceOfSection>
    , public IIndexEnumerable<Macad::Occt::BRepFill_Section^>
{

#ifdef Include_BRepFill_SequenceOfSection_h
public:
    Include_BRepFill_SequenceOfSection_h
#endif

public:
    BRepFill_SequenceOfSection(::BRepFill_SequenceOfSection* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_SequenceOfSection>( nativeInstance, true )
    {}

    BRepFill_SequenceOfSection(::BRepFill_SequenceOfSection& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_SequenceOfSection>( &nativeInstance, false )
    {}

    property ::BRepFill_SequenceOfSection* NativeInstance
    {
        ::BRepFill_SequenceOfSection* get()
        {
            return static_cast<::BRepFill_SequenceOfSection*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::BRepFill_SequenceOfSection::Iterator>
    {

#ifdef Include_BRepFill_SequenceOfSection_Iterator_h
    public:
        Include_BRepFill_SequenceOfSection_Iterator_h
#endif

    public:
        Iterator(::BRepFill_SequenceOfSection::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_SequenceOfSection::Iterator>( nativeInstance, true )
        {}

        Iterator(::BRepFill_SequenceOfSection::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::BRepFill_SequenceOfSection::Iterator>( &nativeInstance, false )
        {}

        property ::BRepFill_SequenceOfSection::Iterator* NativeInstance
        {
            ::BRepFill_SequenceOfSection::Iterator* get()
            {
                return static_cast<::BRepFill_SequenceOfSection::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::BRepFill_Section^ Value();
        Macad::Occt::BRepFill_Section^ ChangeValue();
        bool IsEqual(Macad::Occt::BRepFill_SequenceOfSection::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    BRepFill_SequenceOfSection();
    BRepFill_SequenceOfSection(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::BRepFill_SequenceOfSection^ Assign(Macad::Occt::BRepFill_SequenceOfSection^ theOther);
    void Remove(Macad::Occt::BRepFill_SequenceOfSection::Iterator^ thePosition);
    void Append(Macad::Occt::BRepFill_Section^ theItem);
    void Prepend(Macad::Occt::BRepFill_Section^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::BRepFill_Section^ theItem);
    void InsertAfter(Macad::Occt::BRepFill_SequenceOfSection::Iterator^ thePosition, Macad::Occt::BRepFill_Section^ theItem);
    void Split(int theIndex, Macad::Occt::BRepFill_SequenceOfSection^ theSeq);
    Macad::Occt::BRepFill_Section^ First();
    Macad::Occt::BRepFill_Section^ ChangeFirst();
    Macad::Occt::BRepFill_Section^ Last();
    Macad::Occt::BRepFill_Section^ ChangeLast();
    virtual Macad::Occt::BRepFill_Section^ Value(int theIndex);
    Macad::Occt::BRepFill_Section^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::BRepFill_Section^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::BRepFill_Section^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class BRepFill_SequenceOfSection

//---------------------------------------------------------------------
//  Class  BRepFill
//---------------------------------------------------------------------
public ref class BRepFill sealed
    : public Macad::Occt::BaseClass<::BRepFill>
{

#ifdef Include_BRepFill_h
public:
    Include_BRepFill_h
#endif

public:
    BRepFill(::BRepFill* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill>( nativeInstance, true )
    {}

    BRepFill(::BRepFill& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill>( &nativeInstance, false )
    {}

    property ::BRepFill* NativeInstance
    {
        ::BRepFill* get()
        {
            return static_cast<::BRepFill*>(_NativeInstance);
        }
    }

public:
    BRepFill();
    /// <summary>
    /// Computes a ruled surface between two edges.
    /// </summary>
    static Macad::Occt::TopoDS_Face^ Face(Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2);
    /// <summary>
    /// Computes a ruled surface between two wires.
    /// The wires must have the same number of edges.
    /// </summary>
    static Macad::Occt::TopoDS_Shell^ Shell(Macad::Occt::TopoDS_Wire^ Wire1, Macad::Occt::TopoDS_Wire^ Wire2);
    /// <summary>
    /// Computes  <AxeProf>  as Follow. <Location> is
    /// the Position of the nearest vertex V  of <Profile>
    /// to <Spine>.<XDirection> is confused with the tangent
    /// to <Spine> at the projected point of V on the Spine.
    /// <Direction> is normal to <Spine>.
    /// <Spine> is a plane wire or a plane face.
    /// </summary>
    static void Axe(Macad::Occt::TopoDS_Shape^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3% AxeProf, bool% ProfOnSpine, double Tol);
    /// <summary>
    /// Compute ACR on a  wire
    /// </summary>
    static void ComputeACR(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TColStd_Array1OfReal^ ACR);
    /// <summary>
    /// Insert ACR on a  wire
    /// </summary>
    static Macad::Occt::TopoDS_Wire^ InsertACR(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TColStd_Array1OfReal^ ACRcuts, double prec);
}; // class BRepFill

//---------------------------------------------------------------------
//  Class  BRepFill_LocationLaw
//---------------------------------------------------------------------
/// <summary>
/// Location Law on a  Wire.
/// </summary>
public ref class BRepFill_LocationLaw
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepFill_LocationLaw_h
public:
    Include_BRepFill_LocationLaw_h
#endif

protected:
    BRepFill_LocationLaw(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    BRepFill_LocationLaw(::BRepFill_LocationLaw* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BRepFill_LocationLaw(::BRepFill_LocationLaw& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BRepFill_LocationLaw* NativeInstance
    {
        ::BRepFill_LocationLaw* get()
        {
            return static_cast<::BRepFill_LocationLaw*>(_NativeInstance);
        }
    }

public:
    BRepFill_LocationLaw();
    /* Method skipped due to unknown mapping: GeomFill_PipeError GetStatus() */
    /// <summary>
    /// Apply a linear   transformation  on each law, to  have
    /// continuity of the global law between the edges.
    /// </summary>
    void TransformInG0Law();
    /// <summary>
    /// Apply a linear transformation on each law, to reduce
    /// the   dicontinuities  of law at one  rotation.
    /// </summary>
    void TransformInCompatibleLaw(double AngularTolerance);
    void DeleteTransform();
    int NbHoles(double Tol);
    int NbHoles();
    void Holes(Macad::Occt::TColStd_Array1OfInteger^ Interval);
    /// <summary>
    /// Return the number of elementary Law
    /// </summary>
    int NbLaw();
    /* Method skipped due to unknown mapping: GeomFill_LocationLaw Law(int Index, ) */
    /// <summary>
    /// return the path
    /// </summary>
    Macad::Occt::TopoDS_Wire^ Wire();
    /// <summary>
    /// Return the Edge of rank <Index> in the path
    /// <Index> have to be in [1, NbLaw()]
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge(int Index);
    /// <summary>
    /// Return the vertex of rank <Index> in the path
    /// <Index> have to be in [0, NbLaw()]
    /// </summary>
    Macad::Occt::TopoDS_Vertex^ Vertex(int Index);
    /// <summary>
    /// Compute <OutputVertex> like a transformation of
    /// <InputVertex>  the  transformation   is given by
    /// evaluation of the location law   in the vertex of
    /// rank   <Index>.
    /// <Location> is used to manage discontinuities :
    /// - -1 : The law before the vertex is used.
    /// -  1 : The law after the vertex is used.
    /// -  0 : Average of the both laws is used.
    /// </summary>
    void PerformVertex(int Index, Macad::Occt::TopoDS_Vertex^ InputVertex, double TolMin, Macad::Occt::TopoDS_Vertex^ OutputVertex, int Location);
    /// <summary>
    /// Compute <OutputVertex> like a transformation of
    /// <InputVertex>  the  transformation   is given by
    /// evaluation of the location law   in the vertex of
    /// rank   <Index>.
    /// <Location> is used to manage discontinuities :
    /// - -1 : The law before the vertex is used.
    /// -  1 : The law after the vertex is used.
    /// -  0 : Average of the both laws is used.
    /// </summary>
    void PerformVertex(int Index, Macad::Occt::TopoDS_Vertex^ InputVertex, double TolMin, Macad::Occt::TopoDS_Vertex^ OutputVertex);
    /// <summary>
    /// Return the Curvilinear Bounds of the <Index> Law
    /// </summary>
    void CurvilinearBounds(int Index, double% First, double% Last);
    bool IsClosed();
    /// <summary>
    /// Compute the Law's continuity between 2 edges of the path
    /// The result can be :
    /// -1 : Case Not connex
    /// 0  : It is connex (G0)
    /// 1  : It is tangent (G1)
    /// </summary>
    int IsG1(int Index, double SpatialTolerance, double AngularTolerance);
    /// <summary>
    /// Compute the Law's continuity between 2 edges of the path
    /// The result can be :
    /// -1 : Case Not connex
    /// 0  : It is connex (G0)
    /// 1  : It is tangent (G1)
    /// </summary>
    int IsG1(int Index, double SpatialTolerance);
    /// <summary>
    /// Compute the Law's continuity between 2 edges of the path
    /// The result can be :
    /// -1 : Case Not connex
    /// 0  : It is connex (G0)
    /// 1  : It is tangent (G1)
    /// </summary>
    int IsG1(int Index);
    /// <summary>
    /// Apply the Law to a shape, for a given Curvilinear abscissa
    /// </summary>
    void D0(double Abscissa, Macad::Occt::TopoDS_Shape^ Section);
    /// <summary>
    /// Find the index Law and the parameter, for a given Curvilinear abscissa
    /// </summary>
    void Parameter(double Abscissa, int% Index, double% Param);
    /// <summary>
    /// Return the curvilinear abscissa  corresponding to a point
    /// of  the path, defined by  <Index>  of  Edge and a
    /// parameter on the edge.
    /// </summary>
    double Abscissa(int Index, double Param);
    static Macad::Occt::BRepFill_LocationLaw^ CreateDowncasted(::BRepFill_LocationLaw* instance);
}; // class BRepFill_LocationLaw

//---------------------------------------------------------------------
//  Class  BRepFill_ACRLaw
//---------------------------------------------------------------------
/// <summary>
/// Build Location Law,  with a Wire.   In the case
/// of guided contour and trihedron by reduced
/// curvilinear abscissa
/// </summary>
public ref class BRepFill_ACRLaw sealed
    : public Macad::Occt::BRepFill_LocationLaw
{

#ifdef Include_BRepFill_ACRLaw_h
public:
    Include_BRepFill_ACRLaw_h
#endif

public:
    BRepFill_ACRLaw(::BRepFill_ACRLaw* nativeInstance)
        : Macad::Occt::BRepFill_LocationLaw( nativeInstance )
    {}

    BRepFill_ACRLaw(::BRepFill_ACRLaw& nativeInstance)
        : Macad::Occt::BRepFill_LocationLaw( nativeInstance )
    {}

    property ::BRepFill_ACRLaw* NativeInstance
    {
        ::BRepFill_ACRLaw* get()
        {
            return static_cast<::BRepFill_ACRLaw*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void BRepFill_ACRLaw(TopoDS_Wire Path, GeomFill_LocationGuide Law, ) */
    static Macad::Occt::BRepFill_ACRLaw^ CreateDowncasted(::BRepFill_ACRLaw* instance);
}; // class BRepFill_ACRLaw

//---------------------------------------------------------------------
//  Class  BRepFill_AdvancedEvolved
//---------------------------------------------------------------------
/// <summary>
/// Constructs an evolved volume from a spine (wire or face)
/// and  a profile ( wire).
/// </summary>
public ref class BRepFill_AdvancedEvolved sealed
    : public Macad::Occt::BaseClass<::BRepFill_AdvancedEvolved>
{

#ifdef Include_BRepFill_AdvancedEvolved_h
public:
    Include_BRepFill_AdvancedEvolved_h
#endif

public:
    BRepFill_AdvancedEvolved(::BRepFill_AdvancedEvolved* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_AdvancedEvolved>( nativeInstance, true )
    {}

    BRepFill_AdvancedEvolved(::BRepFill_AdvancedEvolved& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_AdvancedEvolved>( &nativeInstance, false )
    {}

    property ::BRepFill_AdvancedEvolved* NativeInstance
    {
        ::BRepFill_AdvancedEvolved* get()
        {
            return static_cast<::BRepFill_AdvancedEvolved*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor
    /// </summary>
    BRepFill_AdvancedEvolved();
    void Perform(Macad::Occt::TopoDS_Wire^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, double theTolerance, bool theSolidReq);
    void Perform(Macad::Occt::TopoDS_Wire^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, double theTolerance);
    bool IsDone(unsigned int% theErrorCode);
    bool IsDone();
    /// <summary>
    /// returns the resulting shape.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// Sets directory where the debug shapes will be saved
    /// </summary>
    void SetTemporaryDirectory(System::String^ thePath);
    /// <summary>
    /// Sets/Unsets computation in parallel mode
    /// </summary>
    void SetParallelMode(bool theVal);
}; // class BRepFill_AdvancedEvolved

//---------------------------------------------------------------------
//  Class  BRepFill_ApproxSeewing
//---------------------------------------------------------------------
/// <summary>
/// Evaluate the 3dCurve and the PCurves described in a MultiLine from BRepFill.
/// The parametrization of those curves is not imposed by the Bissectrice.
/// The parametrization is given approximately by the abscissa of the curve3d.
/// </summary>
public ref class BRepFill_ApproxSeewing sealed
    : public Macad::Occt::BaseClass<::BRepFill_ApproxSeewing>
{

#ifdef Include_BRepFill_ApproxSeewing_h
public:
    Include_BRepFill_ApproxSeewing_h
#endif

public:
    BRepFill_ApproxSeewing(::BRepFill_ApproxSeewing* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_ApproxSeewing>( nativeInstance, true )
    {}

    BRepFill_ApproxSeewing(::BRepFill_ApproxSeewing& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_ApproxSeewing>( &nativeInstance, false )
    {}

    property ::BRepFill_ApproxSeewing* NativeInstance
    {
        ::BRepFill_ApproxSeewing* get()
        {
            return static_cast<::BRepFill_ApproxSeewing*>(_NativeInstance);
        }
    }

public:
    BRepFill_ApproxSeewing();
    /* Method skipped due to unknown mapping: void BRepFill_ApproxSeewing(BRepFill_MultiLine ML, ) */
    /* Method skipped due to unknown mapping: void Perform(BRepFill_MultiLine ML, ) */
    bool IsDone();
    /// <summary>
    /// returns the approximation of the 3d Curve
    /// </summary>
    Macad::Occt::Geom_Curve^ Curve();
    /// <summary>
    /// returns the  approximation  of the  PCurve  on the
    /// first face of the MultiLine
    /// </summary>
    Macad::Occt::Geom2d_Curve^ CurveOnF1();
    /// <summary>
    /// returns the  approximation  of the  PCurve  on the
    /// first face of the MultiLine
    /// </summary>
    Macad::Occt::Geom2d_Curve^ CurveOnF2();
}; // class BRepFill_ApproxSeewing

//---------------------------------------------------------------------
//  Class  BRepFill_CompatibleWires
//---------------------------------------------------------------------
/// <summary>
/// Constructs a sequence of Wires (with good orientation
/// and origin) agreed each other so that the surface passing
/// through these sections is not twisted
/// </summary>
public ref class BRepFill_CompatibleWires sealed
    : public Macad::Occt::BaseClass<::BRepFill_CompatibleWires>
{

#ifdef Include_BRepFill_CompatibleWires_h
public:
    Include_BRepFill_CompatibleWires_h
#endif

public:
    BRepFill_CompatibleWires(::BRepFill_CompatibleWires* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_CompatibleWires>( nativeInstance, true )
    {}

    BRepFill_CompatibleWires(::BRepFill_CompatibleWires& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_CompatibleWires>( &nativeInstance, false )
    {}

    property ::BRepFill_CompatibleWires* NativeInstance
    {
        ::BRepFill_CompatibleWires* get()
        {
            return static_cast<::BRepFill_CompatibleWires*>(_NativeInstance);
        }
    }

public:
    BRepFill_CompatibleWires();
    BRepFill_CompatibleWires(Macad::Occt::TopTools_SequenceOfShape^ Sections);
    void Init(Macad::Occt::TopTools_SequenceOfShape^ Sections);
    void SetPercent(double percent);
    void SetPercent();
    /// <summary>
    /// Performs  CompatibleWires According  to  the orientation
    /// and the origin of  each other
    /// </summary>
    void Perform(bool WithRotation);
    /// <summary>
    /// Performs  CompatibleWires According  to  the orientation
    /// and the origin of  each other
    /// </summary>
    void Perform();
    bool IsDone();
    Macad::Occt::BRepFill_ThruSectionErrorStatus GetStatus();
    /// <summary>
    /// returns the generated sequence.
    /// </summary>
    Macad::Occt::TopTools_SequenceOfShape^ Shape();
    /// <summary>
    /// Returns   the  shapes  created  from   a  subshape
    /// <SubSection> of a section.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ GeneratedShapes(Macad::Occt::TopoDS_Edge^ SubSection);
    Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Generated();
    bool IsDegeneratedFirstSection();
    bool IsDegeneratedLastSection();
}; // class BRepFill_CompatibleWires

//---------------------------------------------------------------------
//  Class  BRepFill_ComputeCLine
//---------------------------------------------------------------------
public ref class BRepFill_ComputeCLine sealed
    : public Macad::Occt::BaseClass<::BRepFill_ComputeCLine>
{

#ifdef Include_BRepFill_ComputeCLine_h
public:
    Include_BRepFill_ComputeCLine_h
#endif

public:
    BRepFill_ComputeCLine(::BRepFill_ComputeCLine* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_ComputeCLine>( nativeInstance, true )
    {}

    BRepFill_ComputeCLine(::BRepFill_ComputeCLine& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_ComputeCLine>( &nativeInstance, false )
    {}

    property ::BRepFill_ComputeCLine* NativeInstance
    {
        ::BRepFill_ComputeCLine* get()
        {
            return static_cast<::BRepFill_ComputeCLine*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void BRepFill_ComputeCLine(BRepFill_MultiLine Line, int degreemin, int degreemax, double Tolerance3d, double Tolerance2d, bool cutting, AppParCurves_Constraint FirstC, AppParCurves_Constraint LastC, ) */
    /* Method skipped due to unknown mapping: void BRepFill_ComputeCLine(BRepFill_MultiLine Line, int degreemin, int degreemax, double Tolerance3d, double Tolerance2d, bool cutting, AppParCurves_Constraint FirstC, AppParCurves_Constraint LastC, ) */
    /* Method skipped due to unknown mapping: void BRepFill_ComputeCLine(BRepFill_MultiLine Line, int degreemin, int degreemax, double Tolerance3d, double Tolerance2d, bool cutting, AppParCurves_Constraint FirstC, AppParCurves_Constraint LastC, ) */
    /* Method skipped due to unknown mapping: void BRepFill_ComputeCLine(BRepFill_MultiLine Line, int degreemin, int degreemax, double Tolerance3d, double Tolerance2d, bool cutting, AppParCurves_Constraint FirstC, AppParCurves_Constraint LastC, ) */
    /* Method skipped due to unknown mapping: void BRepFill_ComputeCLine(BRepFill_MultiLine Line, int degreemin, int degreemax, double Tolerance3d, double Tolerance2d, bool cutting, AppParCurves_Constraint FirstC, AppParCurves_Constraint LastC, ) */
    /* Method skipped due to unknown mapping: void BRepFill_ComputeCLine(BRepFill_MultiLine Line, int degreemin, int degreemax, double Tolerance3d, double Tolerance2d, bool cutting, AppParCurves_Constraint FirstC, AppParCurves_Constraint LastC, ) */
    /* Method skipped due to unknown mapping: void BRepFill_ComputeCLine(BRepFill_MultiLine Line, int degreemin, int degreemax, double Tolerance3d, double Tolerance2d, bool cutting, AppParCurves_Constraint FirstC, AppParCurves_Constraint LastC, ) */
    /* Method skipped due to unknown mapping: void BRepFill_ComputeCLine(BRepFill_MultiLine Line, int degreemin, int degreemax, double Tolerance3d, double Tolerance2d, bool cutting, AppParCurves_Constraint FirstC, AppParCurves_Constraint LastC, ) */
    /* Method skipped due to unknown mapping: void BRepFill_ComputeCLine(int degreemin, int degreemax, double Tolerance3d, double Tolerance2d, bool cutting, AppParCurves_Constraint FirstC, AppParCurves_Constraint LastC, ) */
    /* Method skipped due to unknown mapping: void BRepFill_ComputeCLine(int degreemin, int degreemax, double Tolerance3d, double Tolerance2d, bool cutting, AppParCurves_Constraint FirstC, AppParCurves_Constraint LastC, ) */
    /// <summary>
    /// Initializes the fields of the algorithm.
    /// </summary>
    BRepFill_ComputeCLine(int degreemin, int degreemax, double Tolerance3d, double Tolerance2d, bool cutting);
    /// <summary>
    /// Initializes the fields of the algorithm.
    /// </summary>
    BRepFill_ComputeCLine(int degreemin, int degreemax, double Tolerance3d, double Tolerance2d);
    /// <summary>
    /// Initializes the fields of the algorithm.
    /// </summary>
    BRepFill_ComputeCLine(int degreemin, int degreemax, double Tolerance3d);
    /// <summary>
    /// Initializes the fields of the algorithm.
    /// </summary>
    BRepFill_ComputeCLine(int degreemin, int degreemax);
    /// <summary>
    /// Initializes the fields of the algorithm.
    /// </summary>
    BRepFill_ComputeCLine(int degreemin);
    /// <summary>
    /// Initializes the fields of the algorithm.
    /// </summary>
    BRepFill_ComputeCLine();
    /* Method skipped due to unknown mapping: void Perform(BRepFill_MultiLine Line, ) */
    /// <summary>
    /// changes the degrees of the approximation.
    /// </summary>
    void SetDegrees(int degreemin, int degreemax);
    /// <summary>
    /// Changes the tolerances of the approximation.
    /// </summary>
    void SetTolerances(double Tolerance3d, double Tolerance2d);
    /* Method skipped due to unknown mapping: void SetConstraints(AppParCurves_Constraint FirstC, AppParCurves_Constraint LastC, ) */
    /// <summary>
    /// Changes the max number of segments, which is allowed for cutting.
    /// </summary>
    void SetMaxSegments(int theMaxSegments);
    /// <summary>
    /// Set inverse order of degree selection:
    /// if theInvOrdr = true, current degree is chosen by inverse order -
    /// from maxdegree to mindegree.
    /// By default inverse order is used.
    /// </summary>
    void SetInvOrder(bool theInvOrder);
    /// <summary>
    /// Set value of hang checking flag
    /// if this flag = true, possible hang of algorithm is checked
    /// and algorithm is forced to stop.
    /// By default hang checking is used.
    /// </summary>
    void SetHangChecking(bool theHangChecking);
    /// <summary>
    /// returns False if at a moment of the approximation,
    /// the status NoApproximation has been sent by the user
    /// when more points were needed.
    /// </summary>
    bool IsAllApproximated();
    /// <summary>
    /// returns False if the status NoPointsAdded has been sent.
    /// </summary>
    bool IsToleranceReached();
    /// <summary>
    /// returns the tolerances 2d and 3d of the <Index> MultiCurve.
    /// </summary>
    void Error(int Index, double% tol3d, double% tol2d);
    /// <summary>
    /// Returns the number of MultiCurve doing the approximation
    /// of the MultiLine.
    /// </summary>
    int NbMultiCurves();
    /* Method skipped due to unknown mapping: AppParCurves_MultiCurve Value(int Index, ) */
    /* Method skipped due to unknown mapping: AppParCurves_MultiCurve Value(int Index, ) */
    void Parameters(int Index, double% firstp, double% lastp);
}; // class BRepFill_ComputeCLine

//---------------------------------------------------------------------
//  Class  BRepFill_Edge3DLaw
//---------------------------------------------------------------------
/// <summary>
/// Build Location Law, with a  Wire.
/// </summary>
public ref class BRepFill_Edge3DLaw
    : public Macad::Occt::BRepFill_LocationLaw
{

#ifdef Include_BRepFill_Edge3DLaw_h
public:
    Include_BRepFill_Edge3DLaw_h
#endif

protected:
    BRepFill_Edge3DLaw(InitMode init)
        : Macad::Occt::BRepFill_LocationLaw( init )
    {}

public:
    BRepFill_Edge3DLaw(::BRepFill_Edge3DLaw* nativeInstance)
        : Macad::Occt::BRepFill_LocationLaw( nativeInstance )
    {}

    BRepFill_Edge3DLaw(::BRepFill_Edge3DLaw& nativeInstance)
        : Macad::Occt::BRepFill_LocationLaw( nativeInstance )
    {}

    property ::BRepFill_Edge3DLaw* NativeInstance
    {
        ::BRepFill_Edge3DLaw* get()
        {
            return static_cast<::BRepFill_Edge3DLaw*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void BRepFill_Edge3DLaw(TopoDS_Wire Path, GeomFill_LocationLaw Law, ) */
    static Macad::Occt::BRepFill_Edge3DLaw^ CreateDowncasted(::BRepFill_Edge3DLaw* instance);
}; // class BRepFill_Edge3DLaw

//---------------------------------------------------------------------
//  Class  BRepFill_SectionLaw
//---------------------------------------------------------------------
/// <summary>
/// Build Section Law, with an Vertex, or an Wire
/// </summary>
public ref class BRepFill_SectionLaw
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepFill_SectionLaw_h
public:
    Include_BRepFill_SectionLaw_h
#endif

protected:
    BRepFill_SectionLaw(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    BRepFill_SectionLaw(::BRepFill_SectionLaw* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BRepFill_SectionLaw(::BRepFill_SectionLaw& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BRepFill_SectionLaw* NativeInstance
    {
        ::BRepFill_SectionLaw* get()
        {
            return static_cast<::BRepFill_SectionLaw*>(_NativeInstance);
        }
    }

public:
    BRepFill_SectionLaw();
    int NbLaw();
    /* Method skipped due to unknown mapping: GeomFill_SectionLaw Law(int Index, ) */
    int IndexOfEdge(Macad::Occt::TopoDS_Shape^ anEdge);
    bool IsConstant();
    bool IsUClosed();
    bool IsVClosed();
    bool IsDone();
    /// <summary>
    /// Say if the input shape is a  vertex.
    /// </summary>
    bool IsVertex();
    /* Method skipped due to unknown mapping: GeomFill_SectionLaw ConcatenedLaw() */
    Macad::Occt::GeomAbs_Shape Continuity(int Index, double TolAngular);
    double VertexTol(int Index, double Param);
    Macad::Occt::TopoDS_Vertex^ Vertex(int Index, double Param);
    void D0(double U, Macad::Occt::TopoDS_Shape^ S);
    void Init(Macad::Occt::TopoDS_Wire^ W);
    Macad::Occt::TopoDS_Edge^ CurrentEdge();
    static Macad::Occt::BRepFill_SectionLaw^ CreateDowncasted(::BRepFill_SectionLaw* instance);
}; // class BRepFill_SectionLaw

//---------------------------------------------------------------------
//  Class  BRepFill_Draft
//---------------------------------------------------------------------
public ref class BRepFill_Draft sealed
    : public Macad::Occt::BaseClass<::BRepFill_Draft>
{

#ifdef Include_BRepFill_Draft_h
public:
    Include_BRepFill_Draft_h
#endif

public:
    BRepFill_Draft(::BRepFill_Draft* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Draft>( nativeInstance, true )
    {}

    BRepFill_Draft(::BRepFill_Draft& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Draft>( &nativeInstance, false )
    {}

    property ::BRepFill_Draft* NativeInstance
    {
        ::BRepFill_Draft* get()
        {
            return static_cast<::BRepFill_Draft*>(_NativeInstance);
        }
    }

public:
    BRepFill_Draft(Macad::Occt::TopoDS_Shape^ Shape, Macad::Occt::Dir Dir, double Angle);
    void SetOptions(Macad::Occt::BRepFill_TransitionStyle Style, double AngleMin, double AngleMax);
    void SetOptions(Macad::Occt::BRepFill_TransitionStyle Style, double AngleMin);
    void SetOptions(Macad::Occt::BRepFill_TransitionStyle Style);
    void SetOptions();
    void SetDraft(bool IsInternal);
    void SetDraft();
    void Perform(double LengthMax);
    void Perform(Macad::Occt::Geom_Surface^ Surface, bool KeepInsideSurface);
    void Perform(Macad::Occt::Geom_Surface^ Surface);
    void Perform(Macad::Occt::TopoDS_Shape^ StopShape, bool KeepOutSide);
    void Perform(Macad::Occt::TopoDS_Shape^ StopShape);
    bool IsDone();
    /// <summary>
    /// Returns the draft surface
    /// To have the complete shape
    /// you have to use the Shape() methode.
    /// </summary>
    Macad::Occt::TopoDS_Shell^ Shell();
    /// <summary>
    /// Returns the  list   of shapes generated   from the
    /// shape <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
    Macad::Occt::TopoDS_Shape^ Shape();
}; // class BRepFill_Draft

//---------------------------------------------------------------------
//  Class  BRepFill_DraftLaw
//---------------------------------------------------------------------
/// <summary>
/// Build Location Law, with a  Wire.
/// </summary>
public ref class BRepFill_DraftLaw sealed
    : public Macad::Occt::BRepFill_Edge3DLaw
{

#ifdef Include_BRepFill_DraftLaw_h
public:
    Include_BRepFill_DraftLaw_h
#endif

public:
    BRepFill_DraftLaw(::BRepFill_DraftLaw* nativeInstance)
        : Macad::Occt::BRepFill_Edge3DLaw( nativeInstance )
    {}

    BRepFill_DraftLaw(::BRepFill_DraftLaw& nativeInstance)
        : Macad::Occt::BRepFill_Edge3DLaw( nativeInstance )
    {}

    property ::BRepFill_DraftLaw* NativeInstance
    {
        ::BRepFill_DraftLaw* get()
        {
            return static_cast<::BRepFill_DraftLaw*>(_NativeInstance);
        }
    }

public:
    /* Method skipped due to unknown mapping: void BRepFill_DraftLaw(TopoDS_Wire Path, GeomFill_LocationDraft Law, ) */
    /// <summary>
    /// To clean the little discontinuities.
    /// </summary>
    void CleanLaw(double TolAngular);
    static Macad::Occt::BRepFill_DraftLaw^ CreateDowncasted(::BRepFill_DraftLaw* instance);
}; // class BRepFill_DraftLaw

//---------------------------------------------------------------------
//  Class  BRepFill_EdgeFaceAndOrder
//---------------------------------------------------------------------
public ref class BRepFill_EdgeFaceAndOrder sealed
    : public Macad::Occt::BaseClass<::BRepFill_EdgeFaceAndOrder>
{

#ifdef Include_BRepFill_EdgeFaceAndOrder_h
public:
    Include_BRepFill_EdgeFaceAndOrder_h
#endif

public:
    BRepFill_EdgeFaceAndOrder(::BRepFill_EdgeFaceAndOrder* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_EdgeFaceAndOrder>( nativeInstance, true )
    {}

    BRepFill_EdgeFaceAndOrder(::BRepFill_EdgeFaceAndOrder& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_EdgeFaceAndOrder>( &nativeInstance, false )
    {}

    property ::BRepFill_EdgeFaceAndOrder* NativeInstance
    {
        ::BRepFill_EdgeFaceAndOrder* get()
        {
            return static_cast<::BRepFill_EdgeFaceAndOrder*>(_NativeInstance);
        }
    }

public:
    BRepFill_EdgeFaceAndOrder();
    BRepFill_EdgeFaceAndOrder(Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::TopoDS_Face^ aFace, Macad::Occt::GeomAbs_Shape anOrder);
}; // class BRepFill_EdgeFaceAndOrder

//---------------------------------------------------------------------
//  Class  BRepFill_EdgeOnSurfLaw
//---------------------------------------------------------------------
/// <summary>
/// Build Location Law, with a Wire and a  Surface.
/// </summary>
public ref class BRepFill_EdgeOnSurfLaw sealed
    : public Macad::Occt::BRepFill_LocationLaw
{

#ifdef Include_BRepFill_EdgeOnSurfLaw_h
public:
    Include_BRepFill_EdgeOnSurfLaw_h
#endif

public:
    BRepFill_EdgeOnSurfLaw(::BRepFill_EdgeOnSurfLaw* nativeInstance)
        : Macad::Occt::BRepFill_LocationLaw( nativeInstance )
    {}

    BRepFill_EdgeOnSurfLaw(::BRepFill_EdgeOnSurfLaw& nativeInstance)
        : Macad::Occt::BRepFill_LocationLaw( nativeInstance )
    {}

    property ::BRepFill_EdgeOnSurfLaw* NativeInstance
    {
        ::BRepFill_EdgeOnSurfLaw* get()
        {
            return static_cast<::BRepFill_EdgeOnSurfLaw*>(_NativeInstance);
        }
    }

public:
    BRepFill_EdgeOnSurfLaw(Macad::Occt::TopoDS_Wire^ Path, Macad::Occt::TopoDS_Shape^ Surf);
    /// <summary>
    /// returns <False> if one  Edge of <Path> do not have
    /// representation on  <Surf>.   In this  case  it is
    /// impossible to use this object.
    /// </summary>
    bool HasResult();
    static Macad::Occt::BRepFill_EdgeOnSurfLaw^ CreateDowncasted(::BRepFill_EdgeOnSurfLaw* instance);
}; // class BRepFill_EdgeOnSurfLaw

//---------------------------------------------------------------------
//  Class  BRepFill_Evolved
//---------------------------------------------------------------------
/// <summary>
/// Constructs an evolved volume from a spine (wire or face)
/// and  a profile ( wire).
/// </summary>
public ref class BRepFill_Evolved sealed
    : public Macad::Occt::BaseClass<::BRepFill_Evolved>
{

#ifdef Include_BRepFill_Evolved_h
public:
    Include_BRepFill_Evolved_h
#endif

public:
    BRepFill_Evolved(::BRepFill_Evolved* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Evolved>( nativeInstance, true )
    {}

    BRepFill_Evolved(::BRepFill_Evolved& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Evolved>( &nativeInstance, false )
    {}

    property ::BRepFill_Evolved* NativeInstance
    {
        ::BRepFill_Evolved* get()
        {
            return static_cast<::BRepFill_Evolved*>(_NativeInstance);
        }
    }

public:
    BRepFill_Evolved();
    /// <summary>
    /// Creates an evolved shape by sweeping the <Profile>
    /// along the  <Spine>.  <AxeProf> is  used to set the
    /// position of <Profile> along  <Spine> as  follows:
    /// <AxeProf> slides on the profile with direction
    /// colinear to the normal to <Spine>, and its
    /// <XDirection> mixed with the tangent to <Spine>.
    /// </summary>
    BRepFill_Evolved(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join, bool Solid);
    /// <summary>
    /// Creates an evolved shape by sweeping the <Profile>
    /// along the  <Spine>.  <AxeProf> is  used to set the
    /// position of <Profile> along  <Spine> as  follows:
    /// <AxeProf> slides on the profile with direction
    /// colinear to the normal to <Spine>, and its
    /// <XDirection> mixed with the tangent to <Spine>.
    /// </summary>
    BRepFill_Evolved(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join);
    /// <summary>
    /// Creates an evolved shape by sweeping the <Profile>
    /// along the  <Spine>.  <AxeProf> is  used to set the
    /// position of <Profile> along  <Spine> as  follows:
    /// <AxeProf> slides on the profile with direction
    /// colinear to the normal to <Spine>, and its
    /// <XDirection> mixed with the tangent to <Spine>.
    /// </summary>
    BRepFill_Evolved(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf);
    /// <summary>
    /// Creates an  evolved shape  by sweeping the <Profile>
    /// along the <Spine>
    /// </summary>
    BRepFill_Evolved(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join, bool Solid);
    /// <summary>
    /// Creates an  evolved shape  by sweeping the <Profile>
    /// along the <Spine>
    /// </summary>
    BRepFill_Evolved(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join);
    /// <summary>
    /// Creates an  evolved shape  by sweeping the <Profile>
    /// along the <Spine>
    /// </summary>
    BRepFill_Evolved(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf);
    /// <summary>
    /// Performs an  evolved shape  by sweeping the <Profile>
    /// along the <Spine>
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join, bool Solid);
    /// <summary>
    /// Performs an  evolved shape  by sweeping the <Profile>
    /// along the <Spine>
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join);
    /// <summary>
    /// Performs an  evolved shape  by sweeping the <Profile>
    /// along the <Spine>
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf);
    /// <summary>
    /// Performs an  evolved shape  by sweeping the <Profile>
    /// along the <Spine>
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join, bool Solid);
    /// <summary>
    /// Performs an  evolved shape  by sweeping the <Profile>
    /// along the <Spine>
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join);
    /// <summary>
    /// Performs an  evolved shape  by sweeping the <Profile>
    /// along the <Spine>
    /// </summary>
    void Perform(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf);
    bool IsDone();
    /// <summary>
    /// returns the generated shape.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// Returns   the  shapes  created  from   a  subshape
    /// <SpineShape>  of     the  spine   and   a subshape
    /// <ProfShape> on the profile.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ GeneratedShapes(Macad::Occt::TopoDS_Shape^ SpineShape, Macad::Occt::TopoDS_Shape^ ProfShape);
    Macad::Occt::GeomAbs_JoinType JoinType();
    /// <summary>
    /// Return the face Top if <Solid> is True in the constructor.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Top();
    /// <summary>
    /// Return the face Bottom  if <Solid> is True in the constructor.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Bottom();
}; // class BRepFill_Evolved

//---------------------------------------------------------------------
//  Class  BRepFill_FaceAndOrder
//---------------------------------------------------------------------
/// <summary>
/// A structure containing Face and Order of constraint
/// </summary>
public ref class BRepFill_FaceAndOrder sealed
    : public Macad::Occt::BaseClass<::BRepFill_FaceAndOrder>
{

#ifdef Include_BRepFill_FaceAndOrder_h
public:
    Include_BRepFill_FaceAndOrder_h
#endif

public:
    BRepFill_FaceAndOrder(::BRepFill_FaceAndOrder* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_FaceAndOrder>( nativeInstance, true )
    {}

    BRepFill_FaceAndOrder(::BRepFill_FaceAndOrder& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_FaceAndOrder>( &nativeInstance, false )
    {}

    property ::BRepFill_FaceAndOrder* NativeInstance
    {
        ::BRepFill_FaceAndOrder* get()
        {
            return static_cast<::BRepFill_FaceAndOrder*>(_NativeInstance);
        }
    }

public:
    BRepFill_FaceAndOrder();
    BRepFill_FaceAndOrder(Macad::Occt::TopoDS_Face^ aFace, Macad::Occt::GeomAbs_Shape anOrder);
}; // class BRepFill_FaceAndOrder

//---------------------------------------------------------------------
//  Class  BRepFill_Filling
//---------------------------------------------------------------------
/// <summary>
/// N-Side Filling
/// This algorithm avoids to build a face from:
/// * a set of edges defining the bounds of the face and some
/// constraints the surface support has to satisfy
/// * a set of edges and points defining some constraints
/// the support surface has to satisfy
/// * an initial surface to deform for satisfying the constraints
/// * a set of parameters to control the constraints.
/// 
/// The support surface of the face is computed by deformation
/// of the initial surface in order to satisfy the given constraints.
/// The set of bounding edges defines the wire of the face.
/// 
/// If no initial surface is given, the algorithm computes it
/// automatically.
/// If the set of edges is not connected (Free constraint)
/// missing edges are automatically computed.
/// 
/// Limitations:
/// * If some constraints are not compatible
/// The algorithm does not take them into account.
/// So the constraints will not be satisfied in an area containing
/// the incompatibilities.
/// * The constraints defining the bound of the face have to be
/// entered in order to have a continuous wire.
/// 
/// Other Applications:
/// * Deformation of a face to satisfy internal constraints
/// * Deformation of a face to improve Gi continuity with
/// connected faces
/// </summary>
public ref class BRepFill_Filling sealed
    : public Macad::Occt::BaseClass<::BRepFill_Filling>
{

#ifdef Include_BRepFill_Filling_h
public:
    Include_BRepFill_Filling_h
#endif

public:
    BRepFill_Filling(::BRepFill_Filling* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Filling>( nativeInstance, true )
    {}

    BRepFill_Filling(::BRepFill_Filling& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Filling>( &nativeInstance, false )
    {}

    property ::BRepFill_Filling* NativeInstance
    {
        ::BRepFill_Filling* get()
        {
            return static_cast<::BRepFill_Filling*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor
    /// </summary>
    BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv, int MaxDeg, int MaxSegments);
    /// <summary>
    /// Constructor
    /// </summary>
    BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv, int MaxDeg);
    /// <summary>
    /// Constructor
    /// </summary>
    BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv);
    /// <summary>
    /// Constructor
    /// </summary>
    BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng);
    /// <summary>
    /// Constructor
    /// </summary>
    BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d);
    /// <summary>
    /// Constructor
    /// </summary>
    BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d);
    /// <summary>
    /// Constructor
    /// </summary>
    BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie);
    /// <summary>
    /// Constructor
    /// </summary>
    BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter);
    /// <summary>
    /// Constructor
    /// </summary>
    BRepFill_Filling(int Degree, int NbPtsOnCur);
    /// <summary>
    /// Constructor
    /// </summary>
    BRepFill_Filling(int Degree);
    /// <summary>
    /// Constructor
    /// </summary>
    BRepFill_Filling();
    /// <summary>
    /// Sets the values of Tolerances used to control the constraint.
    /// Tol2d:
    /// Tol3d:   it is the maximum distance allowed between the support surface
    /// and the constraints
    /// TolAng:  it is the maximum angle allowed between the normal of the surface
    /// and the constraints
    /// TolCurv: it is the maximum difference of curvature allowed between
    /// the surface and the constraint
    /// </summary>
    void SetConstrParam(double Tol2d, double Tol3d, double TolAng, double TolCurv);
    /// <summary>
    /// Sets the values of Tolerances used to control the constraint.
    /// Tol2d:
    /// Tol3d:   it is the maximum distance allowed between the support surface
    /// and the constraints
    /// TolAng:  it is the maximum angle allowed between the normal of the surface
    /// and the constraints
    /// TolCurv: it is the maximum difference of curvature allowed between
    /// the surface and the constraint
    /// </summary>
    void SetConstrParam(double Tol2d, double Tol3d, double TolAng);
    /// <summary>
    /// Sets the values of Tolerances used to control the constraint.
    /// Tol2d:
    /// Tol3d:   it is the maximum distance allowed between the support surface
    /// and the constraints
    /// TolAng:  it is the maximum angle allowed between the normal of the surface
    /// and the constraints
    /// TolCurv: it is the maximum difference of curvature allowed between
    /// the surface and the constraint
    /// </summary>
    void SetConstrParam(double Tol2d, double Tol3d);
    /// <summary>
    /// Sets the values of Tolerances used to control the constraint.
    /// Tol2d:
    /// Tol3d:   it is the maximum distance allowed between the support surface
    /// and the constraints
    /// TolAng:  it is the maximum angle allowed between the normal of the surface
    /// and the constraints
    /// TolCurv: it is the maximum difference of curvature allowed between
    /// the surface and the constraint
    /// </summary>
    void SetConstrParam(double Tol2d);
    /// <summary>
    /// Sets the values of Tolerances used to control the constraint.
    /// Tol2d:
    /// Tol3d:   it is the maximum distance allowed between the support surface
    /// and the constraints
    /// TolAng:  it is the maximum angle allowed between the normal of the surface
    /// and the constraints
    /// TolCurv: it is the maximum difference of curvature allowed between
    /// the surface and the constraint
    /// </summary>
    void SetConstrParam();
    /// <summary>
    /// Sets the parameters used for resolution.
    /// The default values of these parameters have been chosen for a good
    /// ratio quality/performance.
    /// Degree:      it is the order of energy criterion to minimize for computing
    /// the deformation of the surface.
    /// The default value is 3
    /// The recommended value is i+2 where i is the maximum order of the
    /// constraints.
    /// NbPtsOnCur:  it is the average number of points for discretisation
    /// of the edges.
    /// NbIter:      it is the maximum number of iterations of the process.
    /// For each iteration the number of discretisation points is
    /// increased.
    /// Anisotropie:
    /// </summary>
    void SetResolParam(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie);
    /// <summary>
    /// Sets the parameters used for resolution.
    /// The default values of these parameters have been chosen for a good
    /// ratio quality/performance.
    /// Degree:      it is the order of energy criterion to minimize for computing
    /// the deformation of the surface.
    /// The default value is 3
    /// The recommended value is i+2 where i is the maximum order of the
    /// constraints.
    /// NbPtsOnCur:  it is the average number of points for discretisation
    /// of the edges.
    /// NbIter:      it is the maximum number of iterations of the process.
    /// For each iteration the number of discretisation points is
    /// increased.
    /// Anisotropie:
    /// </summary>
    void SetResolParam(int Degree, int NbPtsOnCur, int NbIter);
    /// <summary>
    /// Sets the parameters used for resolution.
    /// The default values of these parameters have been chosen for a good
    /// ratio quality/performance.
    /// Degree:      it is the order of energy criterion to minimize for computing
    /// the deformation of the surface.
    /// The default value is 3
    /// The recommended value is i+2 where i is the maximum order of the
    /// constraints.
    /// NbPtsOnCur:  it is the average number of points for discretisation
    /// of the edges.
    /// NbIter:      it is the maximum number of iterations of the process.
    /// For each iteration the number of discretisation points is
    /// increased.
    /// Anisotropie:
    /// </summary>
    void SetResolParam(int Degree, int NbPtsOnCur);
    /// <summary>
    /// Sets the parameters used for resolution.
    /// The default values of these parameters have been chosen for a good
    /// ratio quality/performance.
    /// Degree:      it is the order of energy criterion to minimize for computing
    /// the deformation of the surface.
    /// The default value is 3
    /// The recommended value is i+2 where i is the maximum order of the
    /// constraints.
    /// NbPtsOnCur:  it is the average number of points for discretisation
    /// of the edges.
    /// NbIter:      it is the maximum number of iterations of the process.
    /// For each iteration the number of discretisation points is
    /// increased.
    /// Anisotropie:
    /// </summary>
    void SetResolParam(int Degree);
    /// <summary>
    /// Sets the parameters used for resolution.
    /// The default values of these parameters have been chosen for a good
    /// ratio quality/performance.
    /// Degree:      it is the order of energy criterion to minimize for computing
    /// the deformation of the surface.
    /// The default value is 3
    /// The recommended value is i+2 where i is the maximum order of the
    /// constraints.
    /// NbPtsOnCur:  it is the average number of points for discretisation
    /// of the edges.
    /// NbIter:      it is the maximum number of iterations of the process.
    /// For each iteration the number of discretisation points is
    /// increased.
    /// Anisotropie:
    /// </summary>
    void SetResolParam();
    /// <summary>
    /// Sets the parameters used for approximation of the surface
    /// </summary>
    void SetApproxParam(int MaxDeg, int MaxSegments);
    /// <summary>
    /// Sets the parameters used for approximation of the surface
    /// </summary>
    void SetApproxParam(int MaxDeg);
    /// <summary>
    /// Sets the parameters used for approximation of the surface
    /// </summary>
    void SetApproxParam();
    /// <summary>
    /// Loads the initial Surface
    /// The initial surface must have orthogonal local coordinates,
    /// i.e. partial derivatives dS/du and dS/dv must be orthogonal
    /// at each point of surface.
    /// If this condition breaks, distortions of resulting surface
    /// are possible.
    /// </summary>
    void LoadInitSurface(Macad::Occt::TopoDS_Face^ aFace);
    /// <summary>
    /// Adds a new constraint which also defines an edge of the wire
    /// of the face
    /// Order: Order of the constraint:
    /// GeomAbs_C0 : the surface has to pass by 3D representation
    /// of the edge
    /// GeomAbs_G1 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency with the first
    /// face of the edge
    /// GeomAbs_G2 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency and curvature
    /// with the first face of the edge.
    /// </summary>
    int Add(Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::GeomAbs_Shape Order, bool IsBound);
    /// <summary>
    /// Adds a new constraint which also defines an edge of the wire
    /// of the face
    /// Order: Order of the constraint:
    /// GeomAbs_C0 : the surface has to pass by 3D representation
    /// of the edge
    /// GeomAbs_G1 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency with the first
    /// face of the edge
    /// GeomAbs_G2 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency and curvature
    /// with the first face of the edge.
    /// </summary>
    int Add(Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::GeomAbs_Shape Order);
    /// <summary>
    /// Adds a new constraint which also defines an edge of the wire
    /// of the face
    /// Order: Order of the constraint:
    /// GeomAbs_C0 : the surface has to pass by 3D representation
    /// of the edge
    /// GeomAbs_G1 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency with the
    /// given face
    /// GeomAbs_G2 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency and curvature
    /// with the given face.
    /// </summary>
    int Add(Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order, bool IsBound);
    /// <summary>
    /// Adds a new constraint which also defines an edge of the wire
    /// of the face
    /// Order: Order of the constraint:
    /// GeomAbs_C0 : the surface has to pass by 3D representation
    /// of the edge
    /// GeomAbs_G1 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency with the
    /// given face
    /// GeomAbs_G2 : the surface has to pass by 3D representation
    /// of the edge and to respect tangency and curvature
    /// with the given face.
    /// </summary>
    int Add(Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order);
    /// <summary>
    /// Adds a free constraint on a face. The corresponding edge has to
    /// be automatically recomputed.
    /// It is always a bound.
    /// </summary>
    int Add(Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order);
    /// <summary>
    /// Adds a punctual constraint
    /// </summary>
    int Add(Macad::Occt::Pnt Point);
    /// <summary>
    /// Adds a punctual constraint.
    /// </summary>
    int Add(double U, double V, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order);
    /// <summary>
    /// Builds the resulting faces
    /// </summary>
    void Build();
    bool IsDone();
    Macad::Occt::TopoDS_Face^ Face();
    /// <summary>
    /// Returns the list of shapes generated from the
    /// shape <S>.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
    double G0Error();
    double G1Error();
    double G2Error();
    double G0Error(int Index);
    double G1Error(int Index);
    double G2Error(int Index);
}; // class BRepFill_Filling

//---------------------------------------------------------------------
//  Class  BRepFill_Generator
//---------------------------------------------------------------------
/// <summary>
/// Compute a topological surface ( a  shell) using
/// generating wires. The face of the shell will be
/// ruled surfaces passing by the wires.
/// The wires must have the same number of edges.
/// </summary>
public ref class BRepFill_Generator sealed
    : public Macad::Occt::BaseClass<::BRepFill_Generator>
{

#ifdef Include_BRepFill_Generator_h
public:
    Include_BRepFill_Generator_h
#endif

public:
    BRepFill_Generator(::BRepFill_Generator* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Generator>( nativeInstance, true )
    {}

    BRepFill_Generator(::BRepFill_Generator& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Generator>( &nativeInstance, false )
    {}

    property ::BRepFill_Generator* NativeInstance
    {
        ::BRepFill_Generator* get()
        {
            return static_cast<::BRepFill_Generator*>(_NativeInstance);
        }
    }

public:
    BRepFill_Generator();
    void AddWire(Macad::Occt::TopoDS_Wire^ Wire);
    /// <summary>
    /// Compute the  shell.
    /// </summary>
    void Perform();
    Macad::Occt::TopoDS_Shell^ Shell();
    /// <summary>
    /// Returns  all   the shapes created
    /// </summary>
    Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Generated();
    /// <summary>
    /// Returns   the  shapes  created  from   a  subshape
    /// <SSection>  of a  section.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ GeneratedShapes(Macad::Occt::TopoDS_Shape^ SSection);
    /// <summary>
    /// Returns a modified shape in the constructed shell,
    /// If shape is not changed (replaced) during operation => returns the same shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ ResultShape(Macad::Occt::TopoDS_Shape^ theShape);
    /// <summary>
    /// Sets the mutable input state
    /// If true then the input profile can be modified
    /// inside the operation. Default value is true.
    /// </summary>
    void SetMutableInput(bool theIsMutableInput);
    /// <summary>
    /// Returns the current mutable input state
    /// </summary>
    bool IsMutableInput();
    /// <summary>
    /// Returns status of the operation
    /// </summary>
    Macad::Occt::BRepFill_ThruSectionErrorStatus GetStatus();
}; // class BRepFill_Generator

//---------------------------------------------------------------------
//  Class  BRepFill_TrimEdgeTool
//---------------------------------------------------------------------
/// <summary>
/// Geometric Tool using to construct Offset Wires.
/// </summary>
public ref class BRepFill_TrimEdgeTool sealed
    : public Macad::Occt::BaseClass<::BRepFill_TrimEdgeTool>
{

#ifdef Include_BRepFill_TrimEdgeTool_h
public:
    Include_BRepFill_TrimEdgeTool_h
#endif

public:
    BRepFill_TrimEdgeTool(::BRepFill_TrimEdgeTool* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_TrimEdgeTool>( nativeInstance, true )
    {}

    BRepFill_TrimEdgeTool(::BRepFill_TrimEdgeTool& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_TrimEdgeTool>( &nativeInstance, false )
    {}

    property ::BRepFill_TrimEdgeTool* NativeInstance
    {
        ::BRepFill_TrimEdgeTool* get()
        {
            return static_cast<::BRepFill_TrimEdgeTool*>(_NativeInstance);
        }
    }

public:
    BRepFill_TrimEdgeTool();
    /* Method skipped due to unknown mapping: void BRepFill_TrimEdgeTool(Bisector_Bisec Bisec, Geom2d_Geometry S1, Geom2d_Geometry S2, double Offset, ) */
    void IntersectWith(Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, Macad::Occt::TopoDS_Shape^ InitShape1, Macad::Occt::TopoDS_Shape^ InitShape2, Macad::Occt::TopoDS_Vertex^ End1, Macad::Occt::TopoDS_Vertex^ End2, Macad::Occt::GeomAbs_JoinType theJoinType, bool IsOpenResult, Macad::Occt::TColgp_SequenceOfPnt^ Params);
    void AddOrConfuse(bool Start, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, Macad::Occt::TColgp_SequenceOfPnt^ Params);
    bool IsInside(Macad::Occt::Pnt2d P);
}; // class BRepFill_TrimEdgeTool

//---------------------------------------------------------------------
//  Class  BRepFill_OffsetWire
//---------------------------------------------------------------------
/// <summary>
/// Constructs a Offset Wire to a spine (wire or face).
/// Offset direction will be to outer region in case of
/// positive offset value and to inner region in case of
/// negative offset value.
/// Inner/Outer region for open wire is defined by the
/// following rule: when we go along the wire (taking into
/// account of edges orientation) then outer region will be
/// on the right side, inner region will be on the left side.
/// In case of closed wire, inner region will always be
/// inside the wire (at that, edges orientation is not taken
/// into account).
/// The Wire or the Face must be planar and oriented correctly.
/// </summary>
public ref class BRepFill_OffsetWire sealed
    : public Macad::Occt::BaseClass<::BRepFill_OffsetWire>
{

#ifdef Include_BRepFill_OffsetWire_h
public:
    Include_BRepFill_OffsetWire_h
#endif

public:
    BRepFill_OffsetWire(::BRepFill_OffsetWire* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_OffsetWire>( nativeInstance, true )
    {}

    BRepFill_OffsetWire(::BRepFill_OffsetWire& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_OffsetWire>( &nativeInstance, false )
    {}

    property ::BRepFill_OffsetWire* NativeInstance
    {
        ::BRepFill_OffsetWire* get()
        {
            return static_cast<::BRepFill_OffsetWire*>(_NativeInstance);
        }
    }

public:
    BRepFill_OffsetWire();
    BRepFill_OffsetWire(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult);
    BRepFill_OffsetWire(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join);
    BRepFill_OffsetWire(Macad::Occt::TopoDS_Face^ Spine);
    /// <summary>
    /// Initialize the evaluation of Offsetting.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult);
    /// <summary>
    /// Initialize the evaluation of Offsetting.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join);
    /// <summary>
    /// Initialize the evaluation of Offsetting.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Face^ Spine);
    /// <summary>
    /// Performs  an OffsetWire at  an altitude <Alt> from
    /// the  face ( According  to  the orientation of  the
    /// face)
    /// </summary>
    void Perform(double Offset, double Alt);
    /// <summary>
    /// Performs  an OffsetWire at  an altitude <Alt> from
    /// the  face ( According  to  the orientation of  the
    /// face)
    /// </summary>
    void Perform(double Offset);
    /* Method skipped due to unknown mapping: void PerformWithBiLo(TopoDS_Face WSP, double Offset, BRepMAT2d_BisectingLocus Locus, BRepMAT2d_LinkTopoBilo Link, GeomAbs_JoinType Join, double Alt, ) */
    /* Method skipped due to unknown mapping: void PerformWithBiLo(TopoDS_Face WSP, double Offset, BRepMAT2d_BisectingLocus Locus, BRepMAT2d_LinkTopoBilo Link, GeomAbs_JoinType Join, double Alt, ) */
    /* Method skipped due to unknown mapping: void PerformWithBiLo(TopoDS_Face WSP, double Offset, BRepMAT2d_BisectingLocus Locus, BRepMAT2d_LinkTopoBilo Link, GeomAbs_JoinType Join, double Alt, ) */
    bool IsDone();
    Macad::Occt::TopoDS_Face^ Spine();
    /// <summary>
    /// returns the generated shape.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// Returns   the  shapes  created  from   a  subshape
    /// <SpineShape> of the spine.
    /// Returns the last computed Offset.
    /// </summary>
    Macad::Occt::TopTools_ListOfShape^ GeneratedShapes(Macad::Occt::TopoDS_Shape^ SpineShape);
    Macad::Occt::GeomAbs_JoinType JoinType();
}; // class BRepFill_OffsetWire

//---------------------------------------------------------------------
//  Class  BRepFill_NSections
//---------------------------------------------------------------------
/// <summary>
/// Build Section Law, with N Sections
/// </summary>
public ref class BRepFill_NSections sealed
    : public Macad::Occt::BRepFill_SectionLaw
{

#ifdef Include_BRepFill_NSections_h
public:
    Include_BRepFill_NSections_h
#endif

public:
    BRepFill_NSections(::BRepFill_NSections* nativeInstance)
        : Macad::Occt::BRepFill_SectionLaw( nativeInstance )
    {}

    BRepFill_NSections(::BRepFill_NSections& nativeInstance)
        : Macad::Occt::BRepFill_SectionLaw( nativeInstance )
    {}

    property ::BRepFill_NSections* NativeInstance
    {
        ::BRepFill_NSections* get()
        {
            return static_cast<::BRepFill_NSections*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Construct
    /// </summary>
    BRepFill_NSections(Macad::Occt::TopTools_SequenceOfShape^ S, bool Build);
    /// <summary>
    /// Construct
    /// </summary>
    BRepFill_NSections(Macad::Occt::TopTools_SequenceOfShape^ S);
    /* Method skipped due to unknown mapping: void BRepFill_NSections(TopTools_SequenceOfShape S, GeomFill_SequenceOfTrsf Trsfs, TColStd_SequenceOfReal P, double VF, double VL, bool Build, ) */
    /* Method skipped due to unknown mapping: void BRepFill_NSections(TopTools_SequenceOfShape S, GeomFill_SequenceOfTrsf Trsfs, TColStd_SequenceOfReal P, double VF, double VL, bool Build, ) */
    /// <summary>
    /// Say if the input shape is a  vertex.
    /// </summary>
    bool IsVertex();
    /// <summary>
    /// Say if the Law is  Constant.
    /// </summary>
    bool IsConstant();
    /* Method skipped due to unknown mapping: GeomFill_SectionLaw ConcatenedLaw() */
    Macad::Occt::GeomAbs_Shape Continuity(int Index, double TolAngular);
    double VertexTol(int Index, double Param);
    Macad::Occt::TopoDS_Vertex^ Vertex(int Index, double Param);
    void D0(double Param, Macad::Occt::TopoDS_Shape^ S);
    static Macad::Occt::BRepFill_NSections^ CreateDowncasted(::BRepFill_NSections* instance);
}; // class BRepFill_NSections

//---------------------------------------------------------------------
//  Class  BRepFill_OffsetAncestors
//---------------------------------------------------------------------
/// <summary>
/// this class is used to find the generating shapes
/// of an OffsetWire.
/// </summary>
public ref class BRepFill_OffsetAncestors sealed
    : public Macad::Occt::BaseClass<::BRepFill_OffsetAncestors>
{

#ifdef Include_BRepFill_OffsetAncestors_h
public:
    Include_BRepFill_OffsetAncestors_h
#endif

public:
    BRepFill_OffsetAncestors(::BRepFill_OffsetAncestors* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_OffsetAncestors>( nativeInstance, true )
    {}

    BRepFill_OffsetAncestors(::BRepFill_OffsetAncestors& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_OffsetAncestors>( &nativeInstance, false )
    {}

    property ::BRepFill_OffsetAncestors* NativeInstance
    {
        ::BRepFill_OffsetAncestors* get()
        {
            return static_cast<::BRepFill_OffsetAncestors*>(_NativeInstance);
        }
    }

public:
    BRepFill_OffsetAncestors();
    BRepFill_OffsetAncestors(Macad::Occt::BRepFill_OffsetWire^ Paral);
    void Perform(Macad::Occt::BRepFill_OffsetWire^ Paral);
    bool IsDone();
    bool HasAncestor(Macad::Occt::TopoDS_Edge^ S1);
    /// <summary>
    /// may return a Null Shape if S1 is not a subShape
    /// of <Paral>;
    /// if Perform is not done.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Ancestor(Macad::Occt::TopoDS_Edge^ S1);
}; // class BRepFill_OffsetAncestors

//---------------------------------------------------------------------
//  Class  BRepFill_Sweep
//---------------------------------------------------------------------
/// <summary>
/// Topological Sweep Algorithm
/// Computes an  Sweep  shell using a  generating
/// wire, an SectionLaw and an LocationLaw.
/// </summary>
public ref class BRepFill_Sweep sealed
    : public Macad::Occt::BaseClass<::BRepFill_Sweep>
{

#ifdef Include_BRepFill_Sweep_h
public:
    Include_BRepFill_Sweep_h
#endif

public:
    BRepFill_Sweep(::BRepFill_Sweep* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Sweep>( nativeInstance, true )
    {}

    BRepFill_Sweep(::BRepFill_Sweep& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Sweep>( &nativeInstance, false )
    {}

    property ::BRepFill_Sweep* NativeInstance
    {
        ::BRepFill_Sweep* get()
        {
            return static_cast<::BRepFill_Sweep*>(_NativeInstance);
        }
    }

public:
    BRepFill_Sweep(Macad::Occt::BRepFill_SectionLaw^ Section, Macad::Occt::BRepFill_LocationLaw^ Location, bool WithKPart);
    void SetBounds(Macad::Occt::TopoDS_Wire^ FirstShape, Macad::Occt::TopoDS_Wire^ LastShape);
    /// <summary>
    /// Set Approximation Tolerance
    /// Tol3d : Tolerance to surface approximation
    /// Tol2d : Tolerance used to perform curve approximation
    /// Normally the 2d curve are approximated with a
    /// tolerance given by the resolution on support surfaces,
    /// but if this tolerance is too large Tol2d is used.
    /// TolAngular : Tolerance (in radian) to control the angle
    /// between tangents on the section law and
    /// tangent of iso-v on approximated surface
    /// </summary>
    void SetTolerance(double Tol3d, double BoundTol, double Tol2d, double TolAngular);
    /// <summary>
    /// Set Approximation Tolerance
    /// Tol3d : Tolerance to surface approximation
    /// Tol2d : Tolerance used to perform curve approximation
    /// Normally the 2d curve are approximated with a
    /// tolerance given by the resolution on support surfaces,
    /// but if this tolerance is too large Tol2d is used.
    /// TolAngular : Tolerance (in radian) to control the angle
    /// between tangents on the section law and
    /// tangent of iso-v on approximated surface
    /// </summary>
    void SetTolerance(double Tol3d, double BoundTol, double Tol2d);
    /// <summary>
    /// Set Approximation Tolerance
    /// Tol3d : Tolerance to surface approximation
    /// Tol2d : Tolerance used to perform curve approximation
    /// Normally the 2d curve are approximated with a
    /// tolerance given by the resolution on support surfaces,
    /// but if this tolerance is too large Tol2d is used.
    /// TolAngular : Tolerance (in radian) to control the angle
    /// between tangents on the section law and
    /// tangent of iso-v on approximated surface
    /// </summary>
    void SetTolerance(double Tol3d, double BoundTol);
    /// <summary>
    /// Set Approximation Tolerance
    /// Tol3d : Tolerance to surface approximation
    /// Tol2d : Tolerance used to perform curve approximation
    /// Normally the 2d curve are approximated with a
    /// tolerance given by the resolution on support surfaces,
    /// but if this tolerance is too large Tol2d is used.
    /// TolAngular : Tolerance (in radian) to control the angle
    /// between tangents on the section law and
    /// tangent of iso-v on approximated surface
    /// </summary>
    void SetTolerance(double Tol3d);
    /// <summary>
    /// Tolerance  To controle Corner management.
    /// 
    /// If the discontinuity is lesser than <AngleMin> in radian The
    /// Transition Performed will be always "Modified"
    /// </summary>
    void SetAngularControl(double AngleMin, double AngleMax);
    /// <summary>
    /// Tolerance  To controle Corner management.
    /// 
    /// If the discontinuity is lesser than <AngleMin> in radian The
    /// Transition Performed will be always "Modified"
    /// </summary>
    void SetAngularControl(double AngleMin);
    /// <summary>
    /// Tolerance  To controle Corner management.
    /// 
    /// If the discontinuity is lesser than <AngleMin> in radian The
    /// Transition Performed will be always "Modified"
    /// </summary>
    void SetAngularControl();
    /// <summary>
    /// Set the flag that indicates attempt to approximate
    /// a C1-continuous surface if a swept surface proved
    /// to be C0.
    /// </summary>
    void SetForceApproxC1(bool ForceApproxC1);
    /* Method skipped due to unknown mapping: void Build(TopTools_MapOfShape ReversedEdges, BRepFill_DataMapOfShapeHArray2OfShape Tapes, BRepFill_DataMapOfShapeHArray2OfShape Rails, BRepFill_TransitionStyle Transition, GeomAbs_Shape Continuity, GeomFill_ApproxStyle Approx, int Degmax, int Segmax, ) */
    /* Method skipped due to unknown mapping: void Build(TopTools_MapOfShape ReversedEdges, BRepFill_DataMapOfShapeHArray2OfShape Tapes, BRepFill_DataMapOfShapeHArray2OfShape Rails, BRepFill_TransitionStyle Transition, GeomAbs_Shape Continuity, GeomFill_ApproxStyle Approx, int Degmax, int Segmax, ) */
    /* Method skipped due to unknown mapping: void Build(TopTools_MapOfShape ReversedEdges, BRepFill_DataMapOfShapeHArray2OfShape Tapes, BRepFill_DataMapOfShapeHArray2OfShape Rails, BRepFill_TransitionStyle Transition, GeomAbs_Shape Continuity, GeomFill_ApproxStyle Approx, int Degmax, int Segmax, ) */
    /// <summary>
    /// Build the Sweep Surface
    /// Transition define Transition strategy
    /// Approx define Approximation Strategy
    /// - GeomFill_Section : The composed Function Location X Section
    /// is directly approximated.
    /// - GeomFill_Location : The location law is approximated, and the
    /// SweepSurface builds an algebraic composition
    /// of approximated location law and section law
    /// This option is Ok, if Section.Surface() methode
    /// is effective.
    /// Continuity : The continuity in v waiting on the surface
    /// Degmax     : The maximum degree in v required on the surface
    /// Segmax     : The maximum number of span in v required on
    /// the surface.
    /// </summary>
    void Build(Macad::Occt::TopTools_MapOfShape^ ReversedEdges, Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Tapes, Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Rails, Macad::Occt::BRepFill_TransitionStyle Transition, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Build the Sweep Surface
    /// Transition define Transition strategy
    /// Approx define Approximation Strategy
    /// - GeomFill_Section : The composed Function Location X Section
    /// is directly approximated.
    /// - GeomFill_Location : The location law is approximated, and the
    /// SweepSurface builds an algebraic composition
    /// of approximated location law and section law
    /// This option is Ok, if Section.Surface() methode
    /// is effective.
    /// Continuity : The continuity in v waiting on the surface
    /// Degmax     : The maximum degree in v required on the surface
    /// Segmax     : The maximum number of span in v required on
    /// the surface.
    /// </summary>
    void Build(Macad::Occt::TopTools_MapOfShape^ ReversedEdges, Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Tapes, Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Rails, Macad::Occt::BRepFill_TransitionStyle Transition);
    /// <summary>
    /// Build the Sweep Surface
    /// Transition define Transition strategy
    /// Approx define Approximation Strategy
    /// - GeomFill_Section : The composed Function Location X Section
    /// is directly approximated.
    /// - GeomFill_Location : The location law is approximated, and the
    /// SweepSurface builds an algebraic composition
    /// of approximated location law and section law
    /// This option is Ok, if Section.Surface() methode
    /// is effective.
    /// Continuity : The continuity in v waiting on the surface
    /// Degmax     : The maximum degree in v required on the surface
    /// Segmax     : The maximum number of span in v required on
    /// the surface.
    /// </summary>
    void Build(Macad::Occt::TopTools_MapOfShape^ ReversedEdges, Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Tapes, Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Rails);
    /// <summary>
    /// Say if the Shape is Build.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// returns the Sweeping Shape
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    /// <summary>
    /// Get the Approximation  error.
    /// </summary>
    double ErrorOnSurface();
    Macad::Occt::TopTools_HArray2OfShape^ SubShape();
    Macad::Occt::TopTools_HArray2OfShape^ InterFaces();
    Macad::Occt::TopTools_HArray2OfShape^ Sections();
    /// <summary>
    /// returns the Tape corresponding to Index-th edge of section
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Tape(int Index);
}; // class BRepFill_Sweep

//---------------------------------------------------------------------
//  Class  BRepFill_Pipe
//---------------------------------------------------------------------
/// <summary>
/// Create a  shape by sweeping a shape  (the profile)
/// along a wire (the spine).
/// 
/// For each edge  or vertex from the spine  the  user
/// may ask for the shape generated from each subshape
/// of the profile.
/// </summary>
public ref class BRepFill_Pipe sealed
    : public Macad::Occt::BaseClass<::BRepFill_Pipe>
{

#ifdef Include_BRepFill_Pipe_h
public:
    Include_BRepFill_Pipe_h
#endif

public:
    BRepFill_Pipe(::BRepFill_Pipe* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Pipe>( nativeInstance, true )
    {}

    BRepFill_Pipe(::BRepFill_Pipe& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Pipe>( &nativeInstance, false )
    {}

    property ::BRepFill_Pipe* NativeInstance
    {
        ::BRepFill_Pipe* get()
        {
            return static_cast<::BRepFill_Pipe*>(_NativeInstance);
        }
    }

public:
    BRepFill_Pipe();
    /* Method skipped due to unknown mapping: void BRepFill_Pipe(TopoDS_Wire Spine, TopoDS_Shape Profile, GeomFill_Trihedron aMode, bool ForceApproxC1, bool GeneratePartCase, ) */
    /* Method skipped due to unknown mapping: void BRepFill_Pipe(TopoDS_Wire Spine, TopoDS_Shape Profile, GeomFill_Trihedron aMode, bool ForceApproxC1, bool GeneratePartCase, ) */
    /* Method skipped due to unknown mapping: void BRepFill_Pipe(TopoDS_Wire Spine, TopoDS_Shape Profile, GeomFill_Trihedron aMode, bool ForceApproxC1, bool GeneratePartCase, ) */
    BRepFill_Pipe(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Shape^ Profile);
    void Perform(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Shape^ Profile, bool GeneratePartCase);
    void Perform(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Shape^ Profile);
    Macad::Occt::TopoDS_Shape^ Spine();
    Macad::Occt::TopoDS_Shape^ Profile();
    Macad::Occt::TopoDS_Shape^ Shape();
    double ErrorOnSurface();
    Macad::Occt::TopoDS_Shape^ FirstShape();
    Macad::Occt::TopoDS_Shape^ LastShape();
    /// <summary>
    /// Returns the  list   of shapes generated   from the
    /// shape <S>.
    /// </summary>
    void Generated(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ L);
    /// <summary>
    /// Returns the face created from an edge of the spine
    /// and an edge of the profile.
    /// if the edges are not in the spine or the profile
    /// </summary>
    Macad::Occt::TopoDS_Face^ Face(Macad::Occt::TopoDS_Edge^ ESpine, Macad::Occt::TopoDS_Edge^ EProfile);
    /// <summary>
    /// Returns the edge created from an edge of the spine
    /// and a vertex of the profile.
    /// if the edge or the vertex are not in  the spine or
    /// the profile.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Edge(Macad::Occt::TopoDS_Edge^ ESpine, Macad::Occt::TopoDS_Vertex^ VProfile);
    /// <summary>
    /// Returns  the shape created from the profile at the
    /// position of the vertex VSpine.
    /// if the vertex is not in the Spine
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Section(Macad::Occt::TopoDS_Vertex^ VSpine);
    /// <summary>
    /// Create a Wire by sweeping the Point along the <spine>
    /// if the <Spine> is undefined
    /// </summary>
    Macad::Occt::TopoDS_Wire^ PipeLine(Macad::Occt::Pnt Point);
}; // class BRepFill_Pipe

//---------------------------------------------------------------------
//  Class  BRepFill_Section
//---------------------------------------------------------------------
/// <summary>
/// To store section definition
/// </summary>
public ref class BRepFill_Section sealed
    : public Macad::Occt::BaseClass<::BRepFill_Section>
{

#ifdef Include_BRepFill_Section_h
public:
    Include_BRepFill_Section_h
#endif

public:
    BRepFill_Section(::BRepFill_Section* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Section>( nativeInstance, true )
    {}

    BRepFill_Section(::BRepFill_Section& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_Section>( &nativeInstance, false )
    {}

    property ::BRepFill_Section* NativeInstance
    {
        ::BRepFill_Section* get()
        {
            return static_cast<::BRepFill_Section*>(_NativeInstance);
        }
    }

public:
    BRepFill_Section();
    BRepFill_Section(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ V, bool WithContact, bool WithCorrection);
    void Set(bool IsLaw);
    Macad::Occt::TopoDS_Shape^ OriginalShape();
    Macad::Occt::TopoDS_Wire^ Wire();
    Macad::Occt::TopoDS_Vertex^ Vertex();
    Macad::Occt::TopoDS_Shape^ ModifiedShape(Macad::Occt::TopoDS_Shape^ theShape);
    bool IsLaw();
    bool IsPunctual();
    bool WithContact();
    bool WithCorrection();
}; // class BRepFill_Section

//---------------------------------------------------------------------
//  Class  BRepFill_PipeShell
//---------------------------------------------------------------------
/// <summary>
/// Computes a topological shell using some wires
/// (spines and profiles) and displacement option
/// Perform general sweeping construction
/// </summary>
public ref class BRepFill_PipeShell sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BRepFill_PipeShell_h
public:
    Include_BRepFill_PipeShell_h
#endif

public:
    BRepFill_PipeShell(::BRepFill_PipeShell* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BRepFill_PipeShell(::BRepFill_PipeShell& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BRepFill_PipeShell* NativeInstance
    {
        ::BRepFill_PipeShell* get()
        {
            return static_cast<::BRepFill_PipeShell*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Set an sweep's mode
    /// If no mode are set, the mode used in MakePipe is used
    /// </summary>
    BRepFill_PipeShell(Macad::Occt::TopoDS_Wire^ Spine);
    /// <summary>
    /// Set an Frenet or an CorrectedFrenet trihedron
    /// to  perform  the  sweeping
    /// </summary>
    void Set(bool Frenet);
    /// <summary>
    /// Set an Frenet or an CorrectedFrenet trihedron
    /// to  perform  the  sweeping
    /// </summary>
    void Set();
    /// <summary>
    /// Set a Discrete trihedron
    /// to  perform  the  sweeping
    /// </summary>
    void SetDiscrete();
    /// <summary>
    /// Set  an  fixed  trihedron  to  perform  the  sweeping
    /// all sections will be parallel.
    /// </summary>
    void Set(Macad::Occt::Ax2 Axe);
    /// <summary>
    /// Set an fixed  BiNormal  direction to  perform
    /// the sweeping
    /// </summary>
    void Set(Macad::Occt::Dir BiNormal);
    /// <summary>
    /// Set support to the spine to define the BiNormal
    /// at   the spine, like    the  normal the surfaces.
    /// Warning: To  be  effective,  Each  edge  of  the  <spine>  must
    /// have an  representation  on   one   face  of<SpineSupport>
    /// </summary>
    bool Set(Macad::Occt::TopoDS_Shape^ SpineSupport);
    /// <summary>
    /// Set  an  auxiliary  spine  to  define  the Normal
    /// For  each  Point  of  the  Spine  P,  an  Point  Q  is  evalued
    /// on  <AuxiliarySpine>
    /// If <CurvilinearEquivalence>
    /// Q split <AuxiliarySpine> with  the  same  length ratio
    /// than P split  <Spline>.
    /// Else  the  plan  define  by  P  and  the  tangent  to  the  <Spine>
    /// intersect <AuxiliarySpine> in Q.
    /// If <KeepContact> equals BRepFill_NoContact: The Normal is defined
    /// by the vector PQ.
    /// If <KeepContact> equals BRepFill_Contact: The Normal is defined to
    /// achieve that the sweeped section is in contact to the
    /// auxiliarySpine. The width of section is constant all along the path.
    /// In other words, the auxiliary spine lies on the swept surface,
    /// but not necessarily is a boundary of this surface. However,
    /// the auxiliary spine has to be close enough to the main spine
    /// to provide intersection with any section all along the path.
    /// If <KeepContact> equals BRepFill_ContactOnBorder: The auxiliary spine
    /// becomes a boundary of the swept surface and the width of section varies
    /// along the path.
    /// </summary>
    void Set(Macad::Occt::TopoDS_Wire^ AuxiliarySpine, bool CurvilinearEquivalence, Macad::Occt::BRepFill_TypeOfContact KeepContact);
    /// <summary>
    /// Set  an  auxiliary  spine  to  define  the Normal
    /// For  each  Point  of  the  Spine  P,  an  Point  Q  is  evalued
    /// on  <AuxiliarySpine>
    /// If <CurvilinearEquivalence>
    /// Q split <AuxiliarySpine> with  the  same  length ratio
    /// than P split  <Spline>.
    /// Else  the  plan  define  by  P  and  the  tangent  to  the  <Spine>
    /// intersect <AuxiliarySpine> in Q.
    /// If <KeepContact> equals BRepFill_NoContact: The Normal is defined
    /// by the vector PQ.
    /// If <KeepContact> equals BRepFill_Contact: The Normal is defined to
    /// achieve that the sweeped section is in contact to the
    /// auxiliarySpine. The width of section is constant all along the path.
    /// In other words, the auxiliary spine lies on the swept surface,
    /// but not necessarily is a boundary of this surface. However,
    /// the auxiliary spine has to be close enough to the main spine
    /// to provide intersection with any section all along the path.
    /// If <KeepContact> equals BRepFill_ContactOnBorder: The auxiliary spine
    /// becomes a boundary of the swept surface and the width of section varies
    /// along the path.
    /// </summary>
    void Set(Macad::Occt::TopoDS_Wire^ AuxiliarySpine, bool CurvilinearEquivalence);
    /// <summary>
    /// Set  an  auxiliary  spine  to  define  the Normal
    /// For  each  Point  of  the  Spine  P,  an  Point  Q  is  evalued
    /// on  <AuxiliarySpine>
    /// If <CurvilinearEquivalence>
    /// Q split <AuxiliarySpine> with  the  same  length ratio
    /// than P split  <Spline>.
    /// Else  the  plan  define  by  P  and  the  tangent  to  the  <Spine>
    /// intersect <AuxiliarySpine> in Q.
    /// If <KeepContact> equals BRepFill_NoContact: The Normal is defined
    /// by the vector PQ.
    /// If <KeepContact> equals BRepFill_Contact: The Normal is defined to
    /// achieve that the sweeped section is in contact to the
    /// auxiliarySpine. The width of section is constant all along the path.
    /// In other words, the auxiliary spine lies on the swept surface,
    /// but not necessarily is a boundary of this surface. However,
    /// the auxiliary spine has to be close enough to the main spine
    /// to provide intersection with any section all along the path.
    /// If <KeepContact> equals BRepFill_ContactOnBorder: The auxiliary spine
    /// becomes a boundary of the swept surface and the width of section varies
    /// along the path.
    /// </summary>
    void Set(Macad::Occt::TopoDS_Wire^ AuxiliarySpine);
    /// <summary>
    /// Define the maximum V degree of resulting surface
    /// </summary>
    void SetMaxDegree(int NewMaxDegree);
    /// <summary>
    /// Define the maximum number of spans in V-direction
    /// on resulting surface
    /// </summary>
    void SetMaxSegments(int NewMaxSegments);
    /// <summary>
    /// Set the flag that indicates attempt to approximate
    /// a C1-continuous surface if a swept surface proved
    /// to be C0.
    /// Give section to sweep.
    /// Possibilities are :
    /// - Give one or several profile
    /// - Give one profile and an homotetic law.
    /// - Automatic compute of correspondence between profile, and section on the sweeped shape
    /// - correspondence between profile, and section on the sweeped shape defined by a vertex of the
    /// spine
    /// </summary>
    void SetForceApproxC1(bool ForceApproxC1);
    /// <summary>
    /// Set an section. The correspondence with the spine, will be automatically performed.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ Profile, bool WithContact, bool WithCorrection);
    /// <summary>
    /// Set an section. The correspondence with the spine, will be automatically performed.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ Profile, bool WithContact);
    /// <summary>
    /// Set an section. The correspondence with the spine, will be automatically performed.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ Profile);
    /// <summary>
    /// Set an section. The correspondence with the spine, is given by Location.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location, bool WithContact, bool WithCorrection);
    /// <summary>
    /// Set an section. The correspondence with the spine, is given by Location.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location, bool WithContact);
    /// <summary>
    /// Set an section. The correspondence with the spine, is given by Location.
    /// </summary>
    void Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location);
    /* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, bool WithContact, bool WithCorrection, ) */
    /* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, bool WithContact, bool WithCorrection, ) */
    /* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, bool WithContact, bool WithCorrection, ) */
    /* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, TopoDS_Vertex Location, bool WithContact, bool WithCorrection, ) */
    /* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, TopoDS_Vertex Location, bool WithContact, bool WithCorrection, ) */
    /* Method skipped due to unknown mapping: void SetLaw(TopoDS_Shape Profile, Law_Function L, TopoDS_Vertex Location, bool WithContact, bool WithCorrection, ) */
    /// <summary>
    /// Delete an section.
    /// </summary>
    void DeleteProfile(Macad::Occt::TopoDS_Shape^ Profile);
    /// <summary>
    /// Say if <me> is ready to build the shape
    /// return False if <me> do not have section definition
    /// </summary>
    bool IsReady();
    /* Method skipped due to unknown mapping: GeomFill_PipeError GetStatus() */
    void SetTolerance(double Tol3d, double BoundTol, double TolAngular);
    void SetTolerance(double Tol3d, double BoundTol);
    void SetTolerance(double Tol3d);
    void SetTolerance();
    /// <summary>
    /// Set the  Transition Mode to manage discontinuities
    /// on the sweep.
    /// </summary>
    void SetTransition(Macad::Occt::BRepFill_TransitionStyle Mode, double Angmin, double Angmax);
    /// <summary>
    /// Set the  Transition Mode to manage discontinuities
    /// on the sweep.
    /// </summary>
    void SetTransition(Macad::Occt::BRepFill_TransitionStyle Mode, double Angmin);
    /// <summary>
    /// Set the  Transition Mode to manage discontinuities
    /// on the sweep.
    /// </summary>
    void SetTransition(Macad::Occt::BRepFill_TransitionStyle Mode);
    /// <summary>
    /// Set the  Transition Mode to manage discontinuities
    /// on the sweep.
    /// </summary>
    void SetTransition();
    /// <summary>
    /// Perform simulation of the sweep :
    /// Some Section are returned.
    /// </summary>
    void Simulate(int NumberOfSection, Macad::Occt::TopTools_ListOfShape^ Sections);
    /// <summary>
    /// Builds the resulting shape (redefined from MakeShape).
    /// </summary>
    bool Build();
    /// <summary>
    /// Transform the sweeping Shell in Solid.
    /// If the section are not closed returns False
    /// </summary>
    bool MakeSolid();
    /// <summary>
    /// Returns the result Shape.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape();
    double ErrorOnSurface();
    /// <summary>
    /// Returns the  TopoDS  Shape of the bottom of the sweep.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ FirstShape();
    /// <summary>
    /// Returns the TopoDS Shape of the top of the sweep.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ LastShape();
    /// <summary>
    /// Returns the list of original profiles
    /// </summary>
    void Profiles(Macad::Occt::TopTools_ListOfShape^ theProfiles);
    /// <summary>
    /// Returns the spine
    /// </summary>
    Macad::Occt::TopoDS_Wire^ Spine();
    /// <summary>
    /// Returns the  list   of shapes generated   from the
    /// shape <S>.
    /// </summary>
    void Generated(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ L);
    static Macad::Occt::BRepFill_PipeShell^ CreateDowncasted(::BRepFill_PipeShell* instance);
}; // class BRepFill_PipeShell

//---------------------------------------------------------------------
//  Class  BRepFill_SectionPlacement
//---------------------------------------------------------------------
/// <summary>
/// Place a shape in a local axis coordinate
/// </summary>
public ref class BRepFill_SectionPlacement sealed
    : public Macad::Occt::BaseClass<::BRepFill_SectionPlacement>
{

#ifdef Include_BRepFill_SectionPlacement_h
public:
    Include_BRepFill_SectionPlacement_h
#endif

public:
    BRepFill_SectionPlacement(::BRepFill_SectionPlacement* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_SectionPlacement>( nativeInstance, true )
    {}

    BRepFill_SectionPlacement(::BRepFill_SectionPlacement& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_SectionPlacement>( &nativeInstance, false )
    {}

    property ::BRepFill_SectionPlacement* NativeInstance
    {
        ::BRepFill_SectionPlacement* get()
        {
            return static_cast<::BRepFill_SectionPlacement*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Automatic placement
    /// </summary>
    BRepFill_SectionPlacement(Macad::Occt::BRepFill_LocationLaw^ Law, Macad::Occt::TopoDS_Shape^ Section, bool WithContact, bool WithCorrection);
    /// <summary>
    /// Automatic placement
    /// </summary>
    BRepFill_SectionPlacement(Macad::Occt::BRepFill_LocationLaw^ Law, Macad::Occt::TopoDS_Shape^ Section, bool WithContact);
    /// <summary>
    /// Automatic placement
    /// </summary>
    BRepFill_SectionPlacement(Macad::Occt::BRepFill_LocationLaw^ Law, Macad::Occt::TopoDS_Shape^ Section);
    /// <summary>
    /// Placement on vertex
    /// </summary>
    BRepFill_SectionPlacement(Macad::Occt::BRepFill_LocationLaw^ Law, Macad::Occt::TopoDS_Shape^ Section, Macad::Occt::TopoDS_Shape^ Vertex, bool WithContact, bool WithCorrection);
    /// <summary>
    /// Placement on vertex
    /// </summary>
    BRepFill_SectionPlacement(Macad::Occt::BRepFill_LocationLaw^ Law, Macad::Occt::TopoDS_Shape^ Section, Macad::Occt::TopoDS_Shape^ Vertex, bool WithContact);
    /// <summary>
    /// Placement on vertex
    /// </summary>
    BRepFill_SectionPlacement(Macad::Occt::BRepFill_LocationLaw^ Law, Macad::Occt::TopoDS_Shape^ Section, Macad::Occt::TopoDS_Shape^ Vertex);
    Macad::Occt::Trsf Transformation();
    double AbscissaOnPath();
}; // class BRepFill_SectionPlacement

//---------------------------------------------------------------------
//  Class  BRepFill_ShapeLaw
//---------------------------------------------------------------------
/// <summary>
/// Build Section Law, with an Vertex, or an Wire
/// </summary>
public ref class BRepFill_ShapeLaw sealed
    : public Macad::Occt::BRepFill_SectionLaw
{

#ifdef Include_BRepFill_ShapeLaw_h
public:
    Include_BRepFill_ShapeLaw_h
#endif

public:
    BRepFill_ShapeLaw(::BRepFill_ShapeLaw* nativeInstance)
        : Macad::Occt::BRepFill_SectionLaw( nativeInstance )
    {}

    BRepFill_ShapeLaw(::BRepFill_ShapeLaw& nativeInstance)
        : Macad::Occt::BRepFill_SectionLaw( nativeInstance )
    {}

    property ::BRepFill_ShapeLaw* NativeInstance
    {
        ::BRepFill_ShapeLaw* get()
        {
            return static_cast<::BRepFill_ShapeLaw*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Construct an constant Law
    /// </summary>
    BRepFill_ShapeLaw(Macad::Occt::TopoDS_Vertex^ V, bool Build);
    /// <summary>
    /// Construct an constant Law
    /// </summary>
    BRepFill_ShapeLaw(Macad::Occt::TopoDS_Vertex^ V);
    /// <summary>
    /// Construct an constant Law
    /// </summary>
    BRepFill_ShapeLaw(Macad::Occt::TopoDS_Wire^ W, bool Build);
    /// <summary>
    /// Construct an constant Law
    /// </summary>
    BRepFill_ShapeLaw(Macad::Occt::TopoDS_Wire^ W);
    /* Method skipped due to unknown mapping: void BRepFill_ShapeLaw(TopoDS_Wire W, Law_Function L, bool Build, ) */
    /* Method skipped due to unknown mapping: void BRepFill_ShapeLaw(TopoDS_Wire W, Law_Function L, bool Build, ) */
    /// <summary>
    /// Say if the input shape is a  vertex.
    /// </summary>
    bool IsVertex();
    /// <summary>
    /// Say if the Law is  Constant.
    /// </summary>
    bool IsConstant();
    /* Method skipped due to unknown mapping: GeomFill_SectionLaw ConcatenedLaw() */
    Macad::Occt::GeomAbs_Shape Continuity(int Index, double TolAngular);
    double VertexTol(int Index, double Param);
    Macad::Occt::TopoDS_Vertex^ Vertex(int Index, double Param);
    void D0(double Param, Macad::Occt::TopoDS_Shape^ S);
    Macad::Occt::TopoDS_Edge^ Edge(int Index);
    static Macad::Occt::BRepFill_ShapeLaw^ CreateDowncasted(::BRepFill_ShapeLaw* instance);
}; // class BRepFill_ShapeLaw

//---------------------------------------------------------------------
//  Class  BRepFill_TrimShellCorner
//---------------------------------------------------------------------
/// <summary>
/// Trims sets of faces in the corner to make proper parts of pipe
/// </summary>
public ref class BRepFill_TrimShellCorner sealed
    : public Macad::Occt::BaseClass<::BRepFill_TrimShellCorner>
{

#ifdef Include_BRepFill_TrimShellCorner_h
public:
    Include_BRepFill_TrimShellCorner_h
#endif

public:
    BRepFill_TrimShellCorner(::BRepFill_TrimShellCorner* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_TrimShellCorner>( nativeInstance, true )
    {}

    BRepFill_TrimShellCorner(::BRepFill_TrimShellCorner& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_TrimShellCorner>( &nativeInstance, false )
    {}

    property ::BRepFill_TrimShellCorner* NativeInstance
    {
        ::BRepFill_TrimShellCorner* get()
        {
            return static_cast<::BRepFill_TrimShellCorner*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor: takes faces to intersect,
    /// type of transition (it can be RightCorner or RoundCorner)
    /// and axis of bisector plane
    /// theIntersectPointCrossDirection : prev path direction at the origin point of theAxeOfBisPlane
    /// cross next path direction at the origin point of theAxeOfBisPlane. used when EE has more than
    /// one vertices
    /// </summary>
    BRepFill_TrimShellCorner(Macad::Occt::TopTools_HArray2OfShape^ theFaces, Macad::Occt::BRepFill_TransitionStyle theTransition, Macad::Occt::Ax2 theAxeOfBisPlane, Macad::Occt::Vec theIntPointCrossDir);
    void AddBounds(Macad::Occt::TopTools_HArray2OfShape^ Bounds);
    void AddUEdges(Macad::Occt::TopTools_HArray2OfShape^ theUEdges);
    void AddVEdges(Macad::Occt::TopTools_HArray2OfShape^ theVEdges, int theIndex);
    void Perform();
    bool IsDone();
    bool HasSection();
    void Modified(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ theModified);
}; // class BRepFill_TrimShellCorner

//---------------------------------------------------------------------
//  Class  BRepFill_TrimSurfaceTool
//---------------------------------------------------------------------
/// <summary>
/// Compute the Pcurves and  the 3d curves resulting
/// of the trimming of a face by an extruded surface.
/// </summary>
public ref class BRepFill_TrimSurfaceTool sealed
    : public Macad::Occt::BaseClass<::BRepFill_TrimSurfaceTool>
{

#ifdef Include_BRepFill_TrimSurfaceTool_h
public:
    Include_BRepFill_TrimSurfaceTool_h
#endif

public:
    BRepFill_TrimSurfaceTool(::BRepFill_TrimSurfaceTool* nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_TrimSurfaceTool>( nativeInstance, true )
    {}

    BRepFill_TrimSurfaceTool(::BRepFill_TrimSurfaceTool& nativeInstance)
        : Macad::Occt::BaseClass<::BRepFill_TrimSurfaceTool>( &nativeInstance, false )
    {}

    property ::BRepFill_TrimSurfaceTool* NativeInstance
    {
        ::BRepFill_TrimSurfaceTool* get()
        {
            return static_cast<::BRepFill_TrimSurfaceTool*>(_NativeInstance);
        }
    }

public:
    BRepFill_TrimSurfaceTool(Macad::Occt::Geom2d_Curve^ Bis, Macad::Occt::TopoDS_Face^ Face1, Macad::Occt::TopoDS_Face^ Face2, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, bool Inv1, bool Inv2);
    /// <summary>
    /// Intersect <Bis>  with the  projection of the edges
    /// <EdgeOnFi> and returns the intersecting parameters
    /// on Bis and on the edges
    /// P.X() : Parameter on Bis
    /// P.Y() : Parameter on EdgeOnF1
    /// P.Z() : Parameter on EdgeOnF2
    /// raises if <Edge> is not a edge of Face1 or Face2.
    /// </summary>
    void IntersectWith(Macad::Occt::TopoDS_Edge^ EdgeOnF1, Macad::Occt::TopoDS_Edge^ EdgeOnF2, Macad::Occt::TColgp_SequenceOfPnt^ Points);
    /// <summary>
    /// returns True if the Line (P, DZ) intersect the Faces
    /// </summary>
    bool IsOnFace(Macad::Occt::Pnt2d Point);
    /// <summary>
    /// returns the parameter of the  point <Point> on the
    /// Edge <Edge>, assuming that the point is on the edge.
    /// </summary>
    double ProjOn(Macad::Occt::Pnt2d Point, Macad::Occt::TopoDS_Edge^ Edge);
    void Project(double U1, double U2, Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom2d_Curve^ PCurve1, Macad::Occt::Geom2d_Curve^ PCurve2, Macad::Occt::GeomAbs_Shape% myCont);
}; // class BRepFill_TrimSurfaceTool

}; // namespace Occt
}; // namespace Macad
