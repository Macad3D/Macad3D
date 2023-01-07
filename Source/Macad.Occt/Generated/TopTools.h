// Generated wrapper code for package TopTools

#pragma once

#include "NCollection.h"
#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  TopTools_FormatVersion
//---------------------------------------------------------------------
/// <summary>
/// Defined TopTools format version
/// </summary>
public enum class TopTools_FormatVersion
{
    VERSION_1 = 1,
    VERSION_2 = 2,
    VERSION_3 = 3,
    CURRENT = 3
}; // enum  class TopTools_FormatVersion

//---------------------------------------------------------------------
//  Class  TopTools_ListOfShape
//---------------------------------------------------------------------
public ref class TopTools_ListOfShape sealed
    : public Macad::Occt::NCollection_BaseList
    , public IEnumerable<Macad::Occt::TopoDS_Shape^>
{

#ifdef Include_TopTools_ListOfShape_h
public:
    Include_TopTools_ListOfShape_h
#endif

public:
    TopTools_ListOfShape(::TopTools_ListOfShape* nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    TopTools_ListOfShape(::TopTools_ListOfShape& nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    property ::TopTools_ListOfShape* NativeInstance
    {
        ::TopTools_ListOfShape* get()
        {
            return static_cast<::TopTools_ListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_ListOfShape::Iterator>
    {

#ifdef Include_TopTools_ListOfShape_Iterator_h
    public:
        Include_TopTools_ListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_ListOfShape::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_ListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_ListOfShape::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_ListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_ListOfShape::Iterator* NativeInstance
        {
            ::TopTools_ListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_ListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::NCollection_BaseList^ theList);
        Iterator(Macad::Occt::TopTools_ListOfShape::Iterator^ parameter1);
        bool More() override;
        void Next() override;
        Macad::Occt::TopoDS_Shape^ Value() override;
        Macad::Occt::TopoDS_Shape^ ChangeValue();
    }; // class Iterator

    TopTools_ListOfShape();
    TopTools_ListOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_ListOfShape(Macad::Occt::TopTools_ListOfShape^ theOther);
    int Size();
    Macad::Occt::TopTools_ListOfShape^ Assign(Macad::Occt::TopTools_ListOfShape^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::TopoDS_Shape^ First();
    Macad::Occt::TopoDS_Shape^ Last();
    Macad::Occt::TopoDS_Shape^ Append(Macad::Occt::TopoDS_Shape^ theItem);
    void Append(Macad::Occt::TopoDS_Shape^ theItem, Macad::Occt::TopTools_ListOfShape::Iterator^ theIter);
    void Append(Macad::Occt::TopTools_ListOfShape^ theOther);
    Macad::Occt::TopoDS_Shape^ Prepend(Macad::Occt::TopoDS_Shape^ theItem);
    void Prepend(Macad::Occt::TopTools_ListOfShape^ theOther);
    void RemoveFirst();
    void Remove(Macad::Occt::TopTools_ListOfShape::Iterator^ theIter);
    Macad::Occt::TopoDS_Shape^ InsertBefore(Macad::Occt::TopoDS_Shape^ theItem, Macad::Occt::TopTools_ListOfShape::Iterator^ theIter);
    void InsertBefore(Macad::Occt::TopTools_ListOfShape^ theOther, Macad::Occt::TopTools_ListOfShape::Iterator^ theIter);
    Macad::Occt::TopoDS_Shape^ InsertAfter(Macad::Occt::TopoDS_Shape^ theItem, Macad::Occt::TopTools_ListOfShape::Iterator^ theIter);
    void InsertAfter(Macad::Occt::TopTools_ListOfShape^ theOther, Macad::Occt::TopTools_ListOfShape::Iterator^ theIter);
    void Reverse();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_ListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_ListIteratorOfListOfShape
//---------------------------------------------------------------------
public ref class TopTools_ListIteratorOfListOfShape sealed
    : public Macad::Occt::BaseClass<::TopTools_ListIteratorOfListOfShape>
{

#ifdef Include_TopTools_ListIteratorOfListOfShape_h
public:
    Include_TopTools_ListIteratorOfListOfShape_h
#endif

public:
    TopTools_ListIteratorOfListOfShape(::TopTools_ListIteratorOfListOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_ListIteratorOfListOfShape>( nativeInstance, true )
    {}

    TopTools_ListIteratorOfListOfShape(::TopTools_ListIteratorOfListOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_ListIteratorOfListOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_ListIteratorOfListOfShape* NativeInstance
    {
        ::TopTools_ListIteratorOfListOfShape* get()
        {
            return static_cast<::TopTools_ListIteratorOfListOfShape*>(_NativeInstance);
        }
    }

public:
    TopTools_ListIteratorOfListOfShape();
    TopTools_ListIteratorOfListOfShape(Macad::Occt::NCollection_BaseList^ theList);
    TopTools_ListIteratorOfListOfShape(Macad::Occt::TopTools_ListIteratorOfListOfShape^ parameter1);
    bool More();
    void Next();
    Macad::Occt::TopoDS_Shape^ Value();
    Macad::Occt::TopoDS_Shape^ ChangeValue();
}; // class TopTools_ListIteratorOfListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_Array1OfListOfShape
//---------------------------------------------------------------------
public ref class TopTools_Array1OfListOfShape sealed
    : public Macad::Occt::BaseClass<::TopTools_Array1OfListOfShape>
    , public IIndexEnumerable<Macad::Occt::TopoDS_ListOfShape^>
{

#ifdef Include_TopTools_Array1OfListOfShape_h
public:
    Include_TopTools_Array1OfListOfShape_h
#endif

public:
    TopTools_Array1OfListOfShape(::TopTools_Array1OfListOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_Array1OfListOfShape>( nativeInstance, true )
    {}

    TopTools_Array1OfListOfShape(::TopTools_Array1OfListOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_Array1OfListOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_Array1OfListOfShape* NativeInstance
    {
        ::TopTools_Array1OfListOfShape* get()
        {
            return static_cast<::TopTools_Array1OfListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_Array1OfListOfShape::Iterator>
    {

#ifdef Include_TopTools_Array1OfListOfShape_Iterator_h
    public:
        Include_TopTools_Array1OfListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_Array1OfListOfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_Array1OfListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_Array1OfListOfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_Array1OfListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_Array1OfListOfShape::Iterator* NativeInstance
        {
            ::TopTools_Array1OfListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_Array1OfListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_Array1OfListOfShape^ theArray, bool theToEnd);
        Iterator(Macad::Occt::TopTools_Array1OfListOfShape^ theArray);
        Iterator(Macad::Occt::TopTools_Array1OfListOfShape::Iterator^ parameter1);
        void Init(Macad::Occt::TopTools_Array1OfListOfShape^ theArray);
        bool More();
        void Next();
        void Previous();
        void Offset(long long int theOffset);
        long long int Differ(Macad::Occt::TopTools_Array1OfListOfShape::Iterator^ theOther);
        Macad::Occt::TopoDS_ListOfShape^ Value();
        Macad::Occt::TopoDS_ListOfShape^ ChangeValue();
        bool IsEqual(Macad::Occt::TopTools_Array1OfListOfShape::Iterator^ theOther);
    }; // class Iterator

    TopTools_Array1OfListOfShape();
    TopTools_Array1OfListOfShape(int theLower, int theUpper);
    TopTools_Array1OfListOfShape(Macad::Occt::TopTools_Array1OfListOfShape^ theOther);
    TopTools_Array1OfListOfShape(Macad::Occt::TopoDS_ListOfShape^ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::TopoDS_ListOfShape^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    bool IsDeletable();
    bool IsAllocated();
    Macad::Occt::TopTools_Array1OfListOfShape^ Assign(Macad::Occt::TopTools_Array1OfListOfShape^ theOther);
    Macad::Occt::TopTools_Array1OfListOfShape^ Move(Macad::Occt::TopTools_Array1OfListOfShape^ theOther);
    Macad::Occt::TopoDS_ListOfShape^ First();
    Macad::Occt::TopoDS_ListOfShape^ ChangeFirst();
    Macad::Occt::TopoDS_ListOfShape^ Last();
    Macad::Occt::TopoDS_ListOfShape^ ChangeLast();
    virtual Macad::Occt::TopoDS_ListOfShape^ Value(int theIndex);
    Macad::Occt::TopoDS_ListOfShape^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::TopoDS_ListOfShape^ theItem);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_ListOfShape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_Array1OfListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_Array1OfShape
//---------------------------------------------------------------------
public ref class TopTools_Array1OfShape sealed
    : public Macad::Occt::BaseClass<::TopTools_Array1OfShape>
    , public IIndexEnumerable<Macad::Occt::TopoDS_Shape^>
{

#ifdef Include_TopTools_Array1OfShape_h
public:
    Include_TopTools_Array1OfShape_h
#endif

public:
    TopTools_Array1OfShape(::TopTools_Array1OfShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_Array1OfShape>( nativeInstance, true )
    {}

    TopTools_Array1OfShape(::TopTools_Array1OfShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_Array1OfShape>( &nativeInstance, false )
    {}

    property ::TopTools_Array1OfShape* NativeInstance
    {
        ::TopTools_Array1OfShape* get()
        {
            return static_cast<::TopTools_Array1OfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_Array1OfShape::Iterator>
    {

#ifdef Include_TopTools_Array1OfShape_Iterator_h
    public:
        Include_TopTools_Array1OfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_Array1OfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_Array1OfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_Array1OfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_Array1OfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_Array1OfShape::Iterator* NativeInstance
        {
            ::TopTools_Array1OfShape::Iterator* get()
            {
                return static_cast<::TopTools_Array1OfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_Array1OfShape^ theArray, bool theToEnd);
        Iterator(Macad::Occt::TopTools_Array1OfShape^ theArray);
        Iterator(Macad::Occt::TopTools_Array1OfShape::Iterator^ parameter1);
        void Init(Macad::Occt::TopTools_Array1OfShape^ theArray);
        bool More();
        void Next();
        void Previous();
        void Offset(long long int theOffset);
        long long int Differ(Macad::Occt::TopTools_Array1OfShape::Iterator^ theOther);
        Macad::Occt::TopoDS_Shape^ Value();
        Macad::Occt::TopoDS_Shape^ ChangeValue();
        bool IsEqual(Macad::Occt::TopTools_Array1OfShape::Iterator^ theOther);
    }; // class Iterator

    TopTools_Array1OfShape();
    TopTools_Array1OfShape(int theLower, int theUpper);
    TopTools_Array1OfShape(Macad::Occt::TopTools_Array1OfShape^ theOther);
    TopTools_Array1OfShape(Macad::Occt::TopoDS_Shape^ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::TopoDS_Shape^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    bool IsDeletable();
    bool IsAllocated();
    Macad::Occt::TopTools_Array1OfShape^ Assign(Macad::Occt::TopTools_Array1OfShape^ theOther);
    Macad::Occt::TopTools_Array1OfShape^ Move(Macad::Occt::TopTools_Array1OfShape^ theOther);
    Macad::Occt::TopoDS_Shape^ First();
    Macad::Occt::TopoDS_Shape^ ChangeFirst();
    Macad::Occt::TopoDS_Shape^ Last();
    Macad::Occt::TopoDS_Shape^ ChangeLast();
    virtual Macad::Occt::TopoDS_Shape^ Value(int theIndex);
    Macad::Occt::TopoDS_Shape^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_Array1OfShape

//---------------------------------------------------------------------
//  Class  TopTools_Array2OfShape
//---------------------------------------------------------------------
public ref class TopTools_Array2OfShape sealed
    : public Macad::Occt::BaseClass<::TopTools_Array2OfShape>
    , public IEnumerable<Macad::Occt::TopoDS_Shape^>
{

#ifdef Include_TopTools_Array2OfShape_h
public:
    Include_TopTools_Array2OfShape_h
#endif

public:
    TopTools_Array2OfShape(::TopTools_Array2OfShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_Array2OfShape>( nativeInstance, true )
    {}

    TopTools_Array2OfShape(::TopTools_Array2OfShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_Array2OfShape>( &nativeInstance, false )
    {}

    property ::TopTools_Array2OfShape* NativeInstance
    {
        ::TopTools_Array2OfShape* get()
        {
            return static_cast<::TopTools_Array2OfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_Array2OfShape::Iterator>
    {

#ifdef Include_TopTools_Array2OfShape_Iterator_h
    public:
        Include_TopTools_Array2OfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_Array2OfShape::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_Array2OfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_Array2OfShape::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_Array2OfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_Array2OfShape::Iterator* NativeInstance
        {
            ::TopTools_Array2OfShape::Iterator* get()
            {
                return static_cast<::TopTools_Array2OfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_Array2OfShape^ theArray);
        Iterator(Macad::Occt::TopTools_Array2OfShape::Iterator^ parameter1);
        void Init(Macad::Occt::TopTools_Array2OfShape^ theArray);
        bool More() override;
        void Next() override;
        Macad::Occt::TopoDS_Shape^ Value() override;
        Macad::Occt::TopoDS_Shape^ ChangeValue();
    }; // class Iterator

    TopTools_Array2OfShape();
    TopTools_Array2OfShape(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    TopTools_Array2OfShape(Macad::Occt::TopTools_Array2OfShape^ theOther);
    TopTools_Array2OfShape(Macad::Occt::TopoDS_Shape^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    void Init(Macad::Occt::TopoDS_Shape^ theValue);
    int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    bool IsDeletable();
    Macad::Occt::TopTools_Array2OfShape^ Assign(Macad::Occt::TopTools_Array2OfShape^ theOther);
    Macad::Occt::TopTools_Array2OfShape^ Move(Macad::Occt::TopTools_Array2OfShape^ theOther);
    Macad::Occt::TopoDS_Shape^ Value(int theRow, int theCol);
    Macad::Occt::TopoDS_Shape^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::TopoDS_Shape^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_Array2OfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfIntegerListOfShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfIntegerListOfShape sealed
    : public Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerListOfShape>
{

#ifdef Include_TopTools_DataMapOfIntegerListOfShape_h
public:
    Include_TopTools_DataMapOfIntegerListOfShape_h
#endif

public:
    TopTools_DataMapOfIntegerListOfShape(::TopTools_DataMapOfIntegerListOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerListOfShape>( nativeInstance, true )
    {}

    TopTools_DataMapOfIntegerListOfShape(::TopTools_DataMapOfIntegerListOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerListOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfIntegerListOfShape* NativeInstance
    {
        ::TopTools_DataMapOfIntegerListOfShape* get()
        {
            return static_cast<::TopTools_DataMapOfIntegerListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerListOfShape::Iterator>
    {

#ifdef Include_TopTools_DataMapOfIntegerListOfShape_Iterator_h
    public:
        Include_TopTools_DataMapOfIntegerListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfIntegerListOfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfIntegerListOfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfIntegerListOfShape::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfIntegerListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfIntegerListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ theMap);
        Iterator(Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Iterator^ parameter1);
        bool More();
        void Next();
        Macad::Occt::TopoDS_ListOfShape^ Value();
        Macad::Occt::TopoDS_ListOfShape^ ChangeValue();
        int Key();
    }; // class Iterator

    TopTools_DataMapOfIntegerListOfShape();
    TopTools_DataMapOfIntegerListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfIntegerListOfShape(int theNbBuckets);
    TopTools_DataMapOfIntegerListOfShape(Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ theOther);
    void Exchange(Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ theOther);
    Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ Assign(Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ theOther);
    void ReSize(int N);
    bool Bind(int theKey, Macad::Occt::TopoDS_ListOfShape^ theItem);
    Macad::Occt::TopoDS_ListOfShape^ Bound(int theKey, Macad::Occt::TopoDS_ListOfShape^ theItem);
    bool IsBound(int theKey);
    bool UnBind(int theKey);
    Macad::Occt::TopoDS_ListOfShape^ Seek(int theKey);
    Macad::Occt::TopoDS_ListOfShape^ Find(int theKey);
    bool Find(int theKey, Macad::Occt::TopoDS_ListOfShape^ theValue);
    Macad::Occt::TopoDS_ListOfShape^ ChangeSeek(int theKey);
    Macad::Occt::TopoDS_ListOfShape^ ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_DataMapOfIntegerListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfIntegerShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfIntegerShape sealed
    : public Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerShape>
{

#ifdef Include_TopTools_DataMapOfIntegerShape_h
public:
    Include_TopTools_DataMapOfIntegerShape_h
#endif

public:
    TopTools_DataMapOfIntegerShape(::TopTools_DataMapOfIntegerShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerShape>( nativeInstance, true )
    {}

    TopTools_DataMapOfIntegerShape(::TopTools_DataMapOfIntegerShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerShape>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfIntegerShape* NativeInstance
    {
        ::TopTools_DataMapOfIntegerShape* get()
        {
            return static_cast<::TopTools_DataMapOfIntegerShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerShape::Iterator>
    {

#ifdef Include_TopTools_DataMapOfIntegerShape_Iterator_h
    public:
        Include_TopTools_DataMapOfIntegerShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfIntegerShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfIntegerShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfIntegerShape::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfIntegerShape::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfIntegerShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_DataMapOfIntegerShape^ theMap);
        Iterator(Macad::Occt::TopTools_DataMapOfIntegerShape::Iterator^ parameter1);
        bool More();
        void Next();
        Macad::Occt::TopoDS_Shape^ Value();
        Macad::Occt::TopoDS_Shape^ ChangeValue();
        int Key();
    }; // class Iterator

    TopTools_DataMapOfIntegerShape();
    TopTools_DataMapOfIntegerShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfIntegerShape(int theNbBuckets);
    TopTools_DataMapOfIntegerShape(Macad::Occt::TopTools_DataMapOfIntegerShape^ theOther);
    void Exchange(Macad::Occt::TopTools_DataMapOfIntegerShape^ theOther);
    Macad::Occt::TopTools_DataMapOfIntegerShape^ Assign(Macad::Occt::TopTools_DataMapOfIntegerShape^ theOther);
    void ReSize(int N);
    bool Bind(int theKey, Macad::Occt::TopoDS_Shape^ theItem);
    Macad::Occt::TopoDS_Shape^ Bound(int theKey, Macad::Occt::TopoDS_Shape^ theItem);
    bool IsBound(int theKey);
    bool UnBind(int theKey);
    Macad::Occt::TopoDS_Shape^ Seek(int theKey);
    Macad::Occt::TopoDS_Shape^ Find(int theKey);
    bool Find(int theKey, Macad::Occt::TopoDS_Shape^ theValue);
    Macad::Occt::TopoDS_Shape^ ChangeSeek(int theKey);
    Macad::Occt::TopoDS_Shape^ ChangeFind(int theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_DataMapOfIntegerShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfOrientedShapeInteger
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfOrientedShapeInteger sealed
    : public Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeInteger>
{

#ifdef Include_TopTools_DataMapOfOrientedShapeInteger_h
public:
    Include_TopTools_DataMapOfOrientedShapeInteger_h
#endif

public:
    TopTools_DataMapOfOrientedShapeInteger(::TopTools_DataMapOfOrientedShapeInteger* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeInteger>( nativeInstance, true )
    {}

    TopTools_DataMapOfOrientedShapeInteger(::TopTools_DataMapOfOrientedShapeInteger& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeInteger>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfOrientedShapeInteger* NativeInstance
    {
        ::TopTools_DataMapOfOrientedShapeInteger* get()
        {
            return static_cast<::TopTools_DataMapOfOrientedShapeInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeInteger::Iterator>
    {

#ifdef Include_TopTools_DataMapOfOrientedShapeInteger_Iterator_h
    public:
        Include_TopTools_DataMapOfOrientedShapeInteger_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfOrientedShapeInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfOrientedShapeInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfOrientedShapeInteger::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfOrientedShapeInteger::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfOrientedShapeInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TopTools_DataMapOfOrientedShapeInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TopTools_DataMapOfOrientedShapeInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        Iterator(Macad::Occt::TopTools_DataMapOfOrientedShapeInteger^ theMap);
        Iterator(Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Iterator^ parameter1);
        bool More();
        void Next();
        int Value();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfOrientedShapeInteger();
    TopTools_DataMapOfOrientedShapeInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfOrientedShapeInteger(int theNbBuckets);
    TopTools_DataMapOfOrientedShapeInteger(Macad::Occt::TopTools_DataMapOfOrientedShapeInteger^ theOther);
    void Exchange(Macad::Occt::TopTools_DataMapOfOrientedShapeInteger^ theOther);
    Macad::Occt::TopTools_DataMapOfOrientedShapeInteger^ Assign(Macad::Occt::TopTools_DataMapOfOrientedShapeInteger^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, int theItem);
    int Bound(Macad::Occt::TopoDS_Shape^ theKey, int theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    int Seek(Macad::Occt::TopoDS_Shape^ theKey);
    int Find(Macad::Occt::TopoDS_Shape^ theKey);
    bool Find(Macad::Occt::TopoDS_Shape^ theKey, int% theValue);
    int ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    int ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_DataMapOfOrientedShapeInteger

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfOrientedShapeShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfOrientedShapeShape sealed
    : public Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeShape>
{

#ifdef Include_TopTools_DataMapOfOrientedShapeShape_h
public:
    Include_TopTools_DataMapOfOrientedShapeShape_h
#endif

public:
    TopTools_DataMapOfOrientedShapeShape(::TopTools_DataMapOfOrientedShapeShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeShape>( nativeInstance, true )
    {}

    TopTools_DataMapOfOrientedShapeShape(::TopTools_DataMapOfOrientedShapeShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeShape>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfOrientedShapeShape* NativeInstance
    {
        ::TopTools_DataMapOfOrientedShapeShape* get()
        {
            return static_cast<::TopTools_DataMapOfOrientedShapeShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeShape::Iterator>
    {

#ifdef Include_TopTools_DataMapOfOrientedShapeShape_Iterator_h
    public:
        Include_TopTools_DataMapOfOrientedShapeShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfOrientedShapeShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfOrientedShapeShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfOrientedShapeShape::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfOrientedShapeShape::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfOrientedShapeShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_DataMapOfOrientedShapeShape^ theMap);
        Iterator(Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Iterator^ parameter1);
        bool More();
        void Next();
        Macad::Occt::TopoDS_Shape^ Value();
        Macad::Occt::TopoDS_Shape^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfOrientedShapeShape();
    TopTools_DataMapOfOrientedShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfOrientedShapeShape(int theNbBuckets);
    TopTools_DataMapOfOrientedShapeShape(Macad::Occt::TopTools_DataMapOfOrientedShapeShape^ theOther);
    void Exchange(Macad::Occt::TopTools_DataMapOfOrientedShapeShape^ theOther);
    Macad::Occt::TopTools_DataMapOfOrientedShapeShape^ Assign(Macad::Occt::TopTools_DataMapOfOrientedShapeShape^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theItem);
    Macad::Occt::TopoDS_Shape^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopoDS_Shape^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopoDS_Shape^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    bool Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theValue);
    Macad::Occt::TopoDS_Shape^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopoDS_Shape^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_DataMapOfOrientedShapeShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeInteger
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeInteger sealed
    : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeInteger>
{

#ifdef Include_TopTools_DataMapOfShapeInteger_h
public:
    Include_TopTools_DataMapOfShapeInteger_h
#endif

public:
    TopTools_DataMapOfShapeInteger(::TopTools_DataMapOfShapeInteger* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeInteger>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeInteger(::TopTools_DataMapOfShapeInteger& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeInteger>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeInteger* NativeInstance
    {
        ::TopTools_DataMapOfShapeInteger* get()
        {
            return static_cast<::TopTools_DataMapOfShapeInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeInteger::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeInteger_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeInteger_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeInteger::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeInteger::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        property int ChangeValue {
            int get() {
                return ((::TopTools_DataMapOfShapeInteger::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(int value) {
                ((::TopTools_DataMapOfShapeInteger::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        Iterator(Macad::Occt::TopTools_DataMapOfShapeInteger^ theMap);
        Iterator(Macad::Occt::TopTools_DataMapOfShapeInteger::Iterator^ parameter1);
        bool More();
        void Next();
        int Value();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeInteger();
    TopTools_DataMapOfShapeInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeInteger(int theNbBuckets);
    TopTools_DataMapOfShapeInteger(Macad::Occt::TopTools_DataMapOfShapeInteger^ theOther);
    void Exchange(Macad::Occt::TopTools_DataMapOfShapeInteger^ theOther);
    Macad::Occt::TopTools_DataMapOfShapeInteger^ Assign(Macad::Occt::TopTools_DataMapOfShapeInteger^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, int theItem);
    int Bound(Macad::Occt::TopoDS_Shape^ theKey, int theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    int Seek(Macad::Occt::TopoDS_Shape^ theKey);
    int Find(Macad::Occt::TopoDS_Shape^ theKey);
    bool Find(Macad::Occt::TopoDS_Shape^ theKey, int% theValue);
    int ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    int ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_DataMapOfShapeInteger

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeListOfInteger
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeListOfInteger sealed
    : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfInteger>
{

#ifdef Include_TopTools_DataMapOfShapeListOfInteger_h
public:
    Include_TopTools_DataMapOfShapeListOfInteger_h
#endif

public:
    TopTools_DataMapOfShapeListOfInteger(::TopTools_DataMapOfShapeListOfInteger* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfInteger>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeListOfInteger(::TopTools_DataMapOfShapeListOfInteger& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfInteger>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeListOfInteger* NativeInstance
    {
        ::TopTools_DataMapOfShapeListOfInteger* get()
        {
            return static_cast<::TopTools_DataMapOfShapeListOfInteger*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfInteger::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeListOfInteger_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeListOfInteger_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeListOfInteger::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfInteger::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeListOfInteger::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfInteger::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeListOfInteger::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeListOfInteger::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeListOfInteger::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_DataMapOfShapeListOfInteger^ theMap);
        Iterator(Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Iterator^ parameter1);
        bool More();
        void Next();
        Macad::Occt::TColStd_ListOfInteger^ Value();
        Macad::Occt::TColStd_ListOfInteger^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeListOfInteger();
    TopTools_DataMapOfShapeListOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeListOfInteger(int theNbBuckets);
    TopTools_DataMapOfShapeListOfInteger(Macad::Occt::TopTools_DataMapOfShapeListOfInteger^ theOther);
    void Exchange(Macad::Occt::TopTools_DataMapOfShapeListOfInteger^ theOther);
    Macad::Occt::TopTools_DataMapOfShapeListOfInteger^ Assign(Macad::Occt::TopTools_DataMapOfShapeListOfInteger^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColStd_ListOfInteger^ theItem);
    Macad::Occt::TColStd_ListOfInteger^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColStd_ListOfInteger^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColStd_ListOfInteger^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColStd_ListOfInteger^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    bool Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColStd_ListOfInteger^ theValue);
    Macad::Occt::TColStd_ListOfInteger^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TColStd_ListOfInteger^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_DataMapOfShapeListOfInteger

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeListOfShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeListOfShape sealed
    : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfShape>
{

#ifdef Include_TopTools_DataMapOfShapeListOfShape_h
public:
    Include_TopTools_DataMapOfShapeListOfShape_h
#endif

public:
    TopTools_DataMapOfShapeListOfShape(::TopTools_DataMapOfShapeListOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfShape>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeListOfShape(::TopTools_DataMapOfShapeListOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeListOfShape* NativeInstance
    {
        ::TopTools_DataMapOfShapeListOfShape* get()
        {
            return static_cast<::TopTools_DataMapOfShapeListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfShape::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeListOfShape_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeListOfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeListOfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeListOfShape::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theMap);
        Iterator(Macad::Occt::TopTools_DataMapOfShapeListOfShape::Iterator^ parameter1);
        bool More();
        void Next();
        Macad::Occt::TopoDS_ListOfShape^ Value();
        Macad::Occt::TopoDS_ListOfShape^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeListOfShape();
    TopTools_DataMapOfShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeListOfShape(int theNbBuckets);
    TopTools_DataMapOfShapeListOfShape(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theOther);
    void Exchange(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theOther);
    Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Assign(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_ListOfShape^ theItem);
    Macad::Occt::TopoDS_ListOfShape^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_ListOfShape^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopoDS_ListOfShape^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopoDS_ListOfShape^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    bool Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_ListOfShape^ theValue);
    Macad::Occt::TopoDS_ListOfShape^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopoDS_ListOfShape^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_DataMapOfShapeListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeReal
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeReal sealed
    : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeReal>
{

#ifdef Include_TopTools_DataMapOfShapeReal_h
public:
    Include_TopTools_DataMapOfShapeReal_h
#endif

public:
    TopTools_DataMapOfShapeReal(::TopTools_DataMapOfShapeReal* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeReal>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeReal(::TopTools_DataMapOfShapeReal& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeReal>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeReal* NativeInstance
    {
        ::TopTools_DataMapOfShapeReal* get()
        {
            return static_cast<::TopTools_DataMapOfShapeReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeReal::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeReal_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeReal_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeReal::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeReal::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeReal::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TopTools_DataMapOfShapeReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TopTools_DataMapOfShapeReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        Iterator(Macad::Occt::TopTools_DataMapOfShapeReal^ theMap);
        Iterator(Macad::Occt::TopTools_DataMapOfShapeReal::Iterator^ parameter1);
        bool More();
        void Next();
        double Value();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeReal();
    TopTools_DataMapOfShapeReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeReal(int theNbBuckets);
    TopTools_DataMapOfShapeReal(Macad::Occt::TopTools_DataMapOfShapeReal^ theOther);
    void Exchange(Macad::Occt::TopTools_DataMapOfShapeReal^ theOther);
    Macad::Occt::TopTools_DataMapOfShapeReal^ Assign(Macad::Occt::TopTools_DataMapOfShapeReal^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, double theItem);
    double Bound(Macad::Occt::TopoDS_Shape^ theKey, double theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    double Seek(Macad::Occt::TopoDS_Shape^ theKey);
    double Find(Macad::Occt::TopoDS_Shape^ theKey);
    bool Find(Macad::Occt::TopoDS_Shape^ theKey, double% theValue);
    double ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    double ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_DataMapOfShapeReal

//---------------------------------------------------------------------
//  Class  TopTools_SequenceOfShape
//---------------------------------------------------------------------
public ref class TopTools_SequenceOfShape sealed
    : public Macad::Occt::BaseClass<::TopTools_SequenceOfShape>
    , public IIndexEnumerable<Macad::Occt::TopoDS_Shape^>
{

#ifdef Include_TopTools_SequenceOfShape_h
public:
    Include_TopTools_SequenceOfShape_h
#endif

public:
    TopTools_SequenceOfShape(::TopTools_SequenceOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_SequenceOfShape>( nativeInstance, true )
    {}

    TopTools_SequenceOfShape(::TopTools_SequenceOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_SequenceOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_SequenceOfShape* NativeInstance
    {
        ::TopTools_SequenceOfShape* get()
        {
            return static_cast<::TopTools_SequenceOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_SequenceOfShape::Iterator>
    {

#ifdef Include_TopTools_SequenceOfShape_Iterator_h
    public:
        Include_TopTools_SequenceOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_SequenceOfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_SequenceOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_SequenceOfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_SequenceOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_SequenceOfShape::Iterator* NativeInstance
        {
            ::TopTools_SequenceOfShape::Iterator* get()
            {
                return static_cast<::TopTools_SequenceOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_SequenceOfShape^ theSeq, bool isStart);
        Iterator(Macad::Occt::TopTools_SequenceOfShape^ theSeq);
        Iterator(Macad::Occt::TopTools_SequenceOfShape::Iterator^ parameter1);
        bool More();
        void Next();
        Macad::Occt::TopoDS_Shape^ Value();
        Macad::Occt::TopoDS_Shape^ ChangeValue();
        bool IsEqual(Macad::Occt::TopTools_SequenceOfShape::Iterator^ theOther);
    }; // class Iterator

    TopTools_SequenceOfShape();
    TopTools_SequenceOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_SequenceOfShape(Macad::Occt::TopTools_SequenceOfShape^ theOther);
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
    Macad::Occt::TopTools_SequenceOfShape^ Assign(Macad::Occt::TopTools_SequenceOfShape^ theOther);
    void Remove(Macad::Occt::TopTools_SequenceOfShape::Iterator^ thePosition);
    void Remove(int theIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Append(Macad::Occt::TopoDS_Shape^ theItem);
    void Append(Macad::Occt::TopTools_SequenceOfShape^ theSeq);
    void Prepend(Macad::Occt::TopoDS_Shape^ theItem);
    void Prepend(Macad::Occt::TopTools_SequenceOfShape^ theSeq);
    void InsertBefore(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TopTools_SequenceOfShape^ theSeq);
    void InsertAfter(Macad::Occt::TopTools_SequenceOfShape::Iterator^ thePosition, Macad::Occt::TopoDS_Shape^ theItem);
    void InsertAfter(int theIndex, Macad::Occt::TopTools_SequenceOfShape^ theSeq);
    void InsertAfter(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
    void Split(int theIndex, Macad::Occt::TopTools_SequenceOfShape^ theSeq);
    Macad::Occt::TopoDS_Shape^ First();
    Macad::Occt::TopoDS_Shape^ ChangeFirst();
    Macad::Occt::TopoDS_Shape^ Last();
    Macad::Occt::TopoDS_Shape^ ChangeLast();
    virtual Macad::Occt::TopoDS_Shape^ Value(int theIndex);
    Macad::Occt::TopoDS_Shape^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_SequenceOfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeSequenceOfShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeSequenceOfShape sealed
    : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>
{

#ifdef Include_TopTools_DataMapOfShapeSequenceOfShape_h
public:
    Include_TopTools_DataMapOfShapeSequenceOfShape_h
#endif

public:
    TopTools_DataMapOfShapeSequenceOfShape(::TopTools_DataMapOfShapeSequenceOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeSequenceOfShape(::TopTools_DataMapOfShapeSequenceOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeSequenceOfShape* NativeInstance
    {
        ::TopTools_DataMapOfShapeSequenceOfShape* get()
        {
            return static_cast<::TopTools_DataMapOfShapeSequenceOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeSequenceOfShape_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeSequenceOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeSequenceOfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeSequenceOfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeSequenceOfShape::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeSequenceOfShape::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeSequenceOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape^ theMap);
        Iterator(Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Iterator^ parameter1);
        bool More();
        void Next();
        Macad::Occt::TopTools_SequenceOfShape^ Value();
        Macad::Occt::TopTools_SequenceOfShape^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeSequenceOfShape();
    TopTools_DataMapOfShapeSequenceOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeSequenceOfShape(int theNbBuckets);
    TopTools_DataMapOfShapeSequenceOfShape(Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape^ theOther);
    void Exchange(Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape^ theOther);
    Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape^ Assign(Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopTools_SequenceOfShape^ theItem);
    Macad::Occt::TopTools_SequenceOfShape^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopTools_SequenceOfShape^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopTools_SequenceOfShape^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopTools_SequenceOfShape^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    bool Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopTools_SequenceOfShape^ theValue);
    Macad::Occt::TopTools_SequenceOfShape^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopTools_SequenceOfShape^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_DataMapOfShapeSequenceOfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeShape sealed
    : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeShape>
{

#ifdef Include_TopTools_DataMapOfShapeShape_h
public:
    Include_TopTools_DataMapOfShapeShape_h
#endif

public:
    TopTools_DataMapOfShapeShape(::TopTools_DataMapOfShapeShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeShape>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeShape(::TopTools_DataMapOfShapeShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeShape>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeShape* NativeInstance
    {
        ::TopTools_DataMapOfShapeShape* get()
        {
            return static_cast<::TopTools_DataMapOfShapeShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeShape::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeShape_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeShape::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeShape::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_DataMapOfShapeShape^ theMap);
        Iterator(Macad::Occt::TopTools_DataMapOfShapeShape::Iterator^ parameter1);
        bool More();
        void Next();
        Macad::Occt::TopoDS_Shape^ Value();
        Macad::Occt::TopoDS_Shape^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeShape();
    TopTools_DataMapOfShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeShape(int theNbBuckets);
    TopTools_DataMapOfShapeShape(Macad::Occt::TopTools_DataMapOfShapeShape^ theOther);
    void Exchange(Macad::Occt::TopTools_DataMapOfShapeShape^ theOther);
    Macad::Occt::TopTools_DataMapOfShapeShape^ Assign(Macad::Occt::TopTools_DataMapOfShapeShape^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theItem);
    Macad::Occt::TopoDS_Shape^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopoDS_Shape^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopoDS_Shape^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    bool Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theValue);
    Macad::Occt::TopoDS_Shape^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::TopoDS_Shape^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_DataMapOfShapeShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeBox
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeBox sealed
    : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeBox>
{

#ifdef Include_TopTools_DataMapOfShapeBox_h
public:
    Include_TopTools_DataMapOfShapeBox_h
#endif

public:
    TopTools_DataMapOfShapeBox(::TopTools_DataMapOfShapeBox* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeBox>( nativeInstance, true )
    {}

    TopTools_DataMapOfShapeBox(::TopTools_DataMapOfShapeBox& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeBox>( &nativeInstance, false )
    {}

    property ::TopTools_DataMapOfShapeBox* NativeInstance
    {
        ::TopTools_DataMapOfShapeBox* get()
        {
            return static_cast<::TopTools_DataMapOfShapeBox*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_DataMapOfShapeBox::Iterator>
    {

#ifdef Include_TopTools_DataMapOfShapeBox_Iterator_h
    public:
        Include_TopTools_DataMapOfShapeBox_Iterator_h
#endif

    public:
        Iterator(::TopTools_DataMapOfShapeBox::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeBox::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_DataMapOfShapeBox::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeBox::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_DataMapOfShapeBox::Iterator* NativeInstance
        {
            ::TopTools_DataMapOfShapeBox::Iterator* get()
            {
                return static_cast<::TopTools_DataMapOfShapeBox::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_DataMapOfShapeBox^ theMap);
        Iterator(Macad::Occt::TopTools_DataMapOfShapeBox::Iterator^ parameter1);
        bool More();
        void Next();
        Macad::Occt::Bnd_Box^ Value();
        Macad::Occt::Bnd_Box^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_DataMapOfShapeBox();
    TopTools_DataMapOfShapeBox(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_DataMapOfShapeBox(int theNbBuckets);
    TopTools_DataMapOfShapeBox(Macad::Occt::TopTools_DataMapOfShapeBox^ theOther);
    void Exchange(Macad::Occt::TopTools_DataMapOfShapeBox^ theOther);
    Macad::Occt::TopTools_DataMapOfShapeBox^ Assign(Macad::Occt::TopTools_DataMapOfShapeBox^ theOther);
    void ReSize(int N);
    bool Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box^ theItem);
    Macad::Occt::Bnd_Box^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box^ theItem);
    bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
    bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::Bnd_Box^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::Bnd_Box^ Find(Macad::Occt::TopoDS_Shape^ theKey);
    bool Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box^ theValue);
    Macad::Occt::Bnd_Box^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
    Macad::Occt::Bnd_Box^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_DataMapOfShapeBox

//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeAddress
//---------------------------------------------------------------------
public ref class TopTools_IndexedDataMapOfShapeAddress sealed
    : public Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeAddress>
{

#ifdef Include_TopTools_IndexedDataMapOfShapeAddress_h
public:
    Include_TopTools_IndexedDataMapOfShapeAddress_h
#endif

public:
    TopTools_IndexedDataMapOfShapeAddress(::TopTools_IndexedDataMapOfShapeAddress* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeAddress>( nativeInstance, true )
    {}

    TopTools_IndexedDataMapOfShapeAddress(::TopTools_IndexedDataMapOfShapeAddress& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeAddress>( &nativeInstance, false )
    {}

    property ::TopTools_IndexedDataMapOfShapeAddress* NativeInstance
    {
        ::TopTools_IndexedDataMapOfShapeAddress* get()
        {
            return static_cast<::TopTools_IndexedDataMapOfShapeAddress*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeAddress::Iterator>
    {

#ifdef Include_TopTools_IndexedDataMapOfShapeAddress_Iterator_h
    public:
        Include_TopTools_IndexedDataMapOfShapeAddress_Iterator_h
#endif

    public:
        Iterator(::TopTools_IndexedDataMapOfShapeAddress::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeAddress::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_IndexedDataMapOfShapeAddress::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeAddress::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_IndexedDataMapOfShapeAddress::Iterator* NativeInstance
        {
            ::TopTools_IndexedDataMapOfShapeAddress::Iterator* get()
            {
                return static_cast<::TopTools_IndexedDataMapOfShapeAddress::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_IndexedDataMapOfShapeAddress^ theMap);
        Iterator(Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Iterator^ parameter1);
        bool More();
        void Next();
        /* Method skipped due to unknown mapping: void * Value() */
        /* Method skipped due to unknown mapping: void * ChangeValue() */
        Macad::Occt::TopoDS_Shape^ Key();
        bool IsEqual(Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Iterator^ theOther);
    }; // class Iterator

    TopTools_IndexedDataMapOfShapeAddress();
    TopTools_IndexedDataMapOfShapeAddress(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_IndexedDataMapOfShapeAddress(int theNbBuckets);
    TopTools_IndexedDataMapOfShapeAddress(Macad::Occt::TopTools_IndexedDataMapOfShapeAddress^ theOther);
    void Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeAddress^ theOther);
    /* Method skipped due to unknown mapping: int Add(TopoDS_Shape theKey1, void * theItem, ) */
    bool Contains(Macad::Occt::TopoDS_Shape^ theKey1);
    /* Method skipped due to unknown mapping: void Substitute(int theIndex, TopoDS_Shape theKey1, void * theItem, ) */
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    void RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_Shape^ FindKey(int theIndex);
    /* Method skipped due to unknown mapping: void * FindFromIndex(int theIndex, ) */
    /* Method skipped due to unknown mapping: void * ChangeFromIndex(int theIndex, ) */
    int FindIndex(Macad::Occt::TopoDS_Shape^ theKey1);
    /* Method skipped due to unknown mapping: void * FindFromKey(TopoDS_Shape theKey1, ) */
    /* Method skipped due to unknown mapping: void * ChangeFromKey(TopoDS_Shape theKey1, ) */
    /* Method skipped due to unknown mapping: void * Seek(TopoDS_Shape theKey1, ) */
    /* Method skipped due to unknown mapping: void * ChangeSeek(TopoDS_Shape theKey1, ) */
    /* Method skipped due to unknown mapping: bool FindFromKey(TopoDS_Shape theKey1, void * theValue, ) */
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_IndexedDataMapOfShapeAddress

//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeListOfShape
//---------------------------------------------------------------------
public ref class TopTools_IndexedDataMapOfShapeListOfShape sealed
    : public Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>
{

#ifdef Include_TopTools_IndexedDataMapOfShapeListOfShape_h
public:
    Include_TopTools_IndexedDataMapOfShapeListOfShape_h
#endif

public:
    TopTools_IndexedDataMapOfShapeListOfShape(::TopTools_IndexedDataMapOfShapeListOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>( nativeInstance, true )
    {}

    TopTools_IndexedDataMapOfShapeListOfShape(::TopTools_IndexedDataMapOfShapeListOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_IndexedDataMapOfShapeListOfShape* NativeInstance
    {
        ::TopTools_IndexedDataMapOfShapeListOfShape* get()
        {
            return static_cast<::TopTools_IndexedDataMapOfShapeListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape::Iterator>
    {

#ifdef Include_TopTools_IndexedDataMapOfShapeListOfShape_Iterator_h
    public:
        Include_TopTools_IndexedDataMapOfShapeListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_IndexedDataMapOfShapeListOfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_IndexedDataMapOfShapeListOfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_IndexedDataMapOfShapeListOfShape::Iterator* NativeInstance
        {
            ::TopTools_IndexedDataMapOfShapeListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_IndexedDataMapOfShapeListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ theMap);
        Iterator(Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Iterator^ parameter1);
        bool More();
        void Next();
        Macad::Occt::TopoDS_ListOfShape^ Value();
        Macad::Occt::TopoDS_ListOfShape^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
        bool IsEqual(Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Iterator^ theOther);
    }; // class Iterator

    TopTools_IndexedDataMapOfShapeListOfShape();
    TopTools_IndexedDataMapOfShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_IndexedDataMapOfShapeListOfShape(int theNbBuckets);
    TopTools_IndexedDataMapOfShapeListOfShape(Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ theOther);
    void Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ theOther);
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
    bool FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_ListOfShape^ theValue);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_IndexedDataMapOfShapeListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeReal
//---------------------------------------------------------------------
public ref class TopTools_IndexedDataMapOfShapeReal sealed
    : public Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeReal>
{

#ifdef Include_TopTools_IndexedDataMapOfShapeReal_h
public:
    Include_TopTools_IndexedDataMapOfShapeReal_h
#endif

public:
    TopTools_IndexedDataMapOfShapeReal(::TopTools_IndexedDataMapOfShapeReal* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeReal>( nativeInstance, true )
    {}

    TopTools_IndexedDataMapOfShapeReal(::TopTools_IndexedDataMapOfShapeReal& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeReal>( &nativeInstance, false )
    {}

    property ::TopTools_IndexedDataMapOfShapeReal* NativeInstance
    {
        ::TopTools_IndexedDataMapOfShapeReal* get()
        {
            return static_cast<::TopTools_IndexedDataMapOfShapeReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeReal::Iterator>
    {

#ifdef Include_TopTools_IndexedDataMapOfShapeReal_Iterator_h
    public:
        Include_TopTools_IndexedDataMapOfShapeReal_Iterator_h
#endif

    public:
        Iterator(::TopTools_IndexedDataMapOfShapeReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_IndexedDataMapOfShapeReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeReal::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_IndexedDataMapOfShapeReal::Iterator* NativeInstance
        {
            ::TopTools_IndexedDataMapOfShapeReal::Iterator* get()
            {
                return static_cast<::TopTools_IndexedDataMapOfShapeReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property double ChangeValue {
            double get() {
                return ((::TopTools_IndexedDataMapOfShapeReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(double value) {
                ((::TopTools_IndexedDataMapOfShapeReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        Iterator(Macad::Occt::TopTools_IndexedDataMapOfShapeReal^ theMap);
        Iterator(Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Iterator^ parameter1);
        bool More();
        void Next();
        double Value();
        Macad::Occt::TopoDS_Shape^ Key();
        bool IsEqual(Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Iterator^ theOther);
    }; // class Iterator

    TopTools_IndexedDataMapOfShapeReal();
    TopTools_IndexedDataMapOfShapeReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_IndexedDataMapOfShapeReal(int theNbBuckets);
    TopTools_IndexedDataMapOfShapeReal(Macad::Occt::TopTools_IndexedDataMapOfShapeReal^ theOther);
    void Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeReal^ theOther);
    int Add(Macad::Occt::TopoDS_Shape^ theKey1, double theItem);
    bool Contains(Macad::Occt::TopoDS_Shape^ theKey1);
    void Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, double theItem);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    void RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_Shape^ FindKey(int theIndex);
    double FindFromIndex(int theIndex);
    double ChangeFromIndex(int theIndex);
    int FindIndex(Macad::Occt::TopoDS_Shape^ theKey1);
    double FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
    double ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
    double Seek(Macad::Occt::TopoDS_Shape^ theKey1);
    double ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1);
    bool FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1, double% theValue);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_IndexedDataMapOfShapeReal

//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeShape
//---------------------------------------------------------------------
public ref class TopTools_IndexedDataMapOfShapeShape sealed
    : public Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeShape>
{

#ifdef Include_TopTools_IndexedDataMapOfShapeShape_h
public:
    Include_TopTools_IndexedDataMapOfShapeShape_h
#endif

public:
    TopTools_IndexedDataMapOfShapeShape(::TopTools_IndexedDataMapOfShapeShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeShape>( nativeInstance, true )
    {}

    TopTools_IndexedDataMapOfShapeShape(::TopTools_IndexedDataMapOfShapeShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeShape>( &nativeInstance, false )
    {}

    property ::TopTools_IndexedDataMapOfShapeShape* NativeInstance
    {
        ::TopTools_IndexedDataMapOfShapeShape* get()
        {
            return static_cast<::TopTools_IndexedDataMapOfShapeShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeShape::Iterator>
    {

#ifdef Include_TopTools_IndexedDataMapOfShapeShape_Iterator_h
    public:
        Include_TopTools_IndexedDataMapOfShapeShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_IndexedDataMapOfShapeShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_IndexedDataMapOfShapeShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_IndexedDataMapOfShapeShape::Iterator* NativeInstance
        {
            ::TopTools_IndexedDataMapOfShapeShape::Iterator* get()
            {
                return static_cast<::TopTools_IndexedDataMapOfShapeShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_IndexedDataMapOfShapeShape^ theMap);
        Iterator(Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Iterator^ parameter1);
        bool More();
        void Next();
        Macad::Occt::TopoDS_Shape^ Value();
        Macad::Occt::TopoDS_Shape^ ChangeValue();
        Macad::Occt::TopoDS_Shape^ Key();
        bool IsEqual(Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Iterator^ theOther);
    }; // class Iterator

    TopTools_IndexedDataMapOfShapeShape();
    TopTools_IndexedDataMapOfShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_IndexedDataMapOfShapeShape(int theNbBuckets);
    TopTools_IndexedDataMapOfShapeShape(Macad::Occt::TopTools_IndexedDataMapOfShapeShape^ theOther);
    void Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeShape^ theOther);
    int Add(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_Shape^ theItem);
    bool Contains(Macad::Occt::TopoDS_Shape^ theKey1);
    void Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_Shape^ theItem);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    void RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_Shape^ FindKey(int theIndex);
    Macad::Occt::TopoDS_Shape^ FindFromIndex(int theIndex);
    Macad::Occt::TopoDS_Shape^ ChangeFromIndex(int theIndex);
    int FindIndex(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_Shape^ FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_Shape^ ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_Shape^ Seek(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_Shape^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1);
    bool FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_Shape^ theValue);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
}; // class TopTools_IndexedDataMapOfShapeShape

//---------------------------------------------------------------------
//  Class  TopTools_IndexedMapOfOrientedShape
//---------------------------------------------------------------------
public ref class TopTools_IndexedMapOfOrientedShape sealed
    : public Macad::Occt::BaseClass<::TopTools_IndexedMapOfOrientedShape>
    , public IEnumerable<Macad::Occt::TopoDS_Shape^>
{

#ifdef Include_TopTools_IndexedMapOfOrientedShape_h
public:
    Include_TopTools_IndexedMapOfOrientedShape_h
#endif

public:
    TopTools_IndexedMapOfOrientedShape(::TopTools_IndexedMapOfOrientedShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_IndexedMapOfOrientedShape>( nativeInstance, true )
    {}

    TopTools_IndexedMapOfOrientedShape(::TopTools_IndexedMapOfOrientedShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_IndexedMapOfOrientedShape>( &nativeInstance, false )
    {}

    property ::TopTools_IndexedMapOfOrientedShape* NativeInstance
    {
        ::TopTools_IndexedMapOfOrientedShape* get()
        {
            return static_cast<::TopTools_IndexedMapOfOrientedShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_IndexedMapOfOrientedShape::Iterator>
    {

#ifdef Include_TopTools_IndexedMapOfOrientedShape_Iterator_h
    public:
        Include_TopTools_IndexedMapOfOrientedShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_IndexedMapOfOrientedShape::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_IndexedMapOfOrientedShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_IndexedMapOfOrientedShape::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_IndexedMapOfOrientedShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_IndexedMapOfOrientedShape::Iterator* NativeInstance
        {
            ::TopTools_IndexedMapOfOrientedShape::Iterator* get()
            {
                return static_cast<::TopTools_IndexedMapOfOrientedShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_IndexedMapOfOrientedShape^ theMap);
        Iterator(Macad::Occt::TopTools_IndexedMapOfOrientedShape::Iterator^ parameter1);
        bool More() override;
        void Next() override;
        Macad::Occt::TopoDS_Shape^ Value() override;
        bool IsEqual(Macad::Occt::TopTools_IndexedMapOfOrientedShape::Iterator^ theOther);
    }; // class Iterator

    TopTools_IndexedMapOfOrientedShape();
    TopTools_IndexedMapOfOrientedShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_IndexedMapOfOrientedShape(int theNbBuckets);
    TopTools_IndexedMapOfOrientedShape(Macad::Occt::TopTools_IndexedMapOfOrientedShape^ theOther);
    void Exchange(Macad::Occt::TopTools_IndexedMapOfOrientedShape^ theOther);
    int Add(Macad::Occt::TopoDS_Shape^ theKey1);
    bool Contains(Macad::Occt::TopoDS_Shape^ theKey1);
    void Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    bool RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_Shape^ FindKey(int theIndex);
    int FindIndex(Macad::Occt::TopoDS_Shape^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_IndexedMapOfOrientedShape

//---------------------------------------------------------------------
//  Class  TopTools_IndexedMapOfShape
//---------------------------------------------------------------------
public ref class TopTools_IndexedMapOfShape sealed
    : public Macad::Occt::BaseClass<::TopTools_IndexedMapOfShape>
    , public IEnumerable<Macad::Occt::TopoDS_Shape^>
{

#ifdef Include_TopTools_IndexedMapOfShape_h
public:
    Include_TopTools_IndexedMapOfShape_h
#endif

public:
    TopTools_IndexedMapOfShape(::TopTools_IndexedMapOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_IndexedMapOfShape>( nativeInstance, true )
    {}

    TopTools_IndexedMapOfShape(::TopTools_IndexedMapOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_IndexedMapOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_IndexedMapOfShape* NativeInstance
    {
        ::TopTools_IndexedMapOfShape* get()
        {
            return static_cast<::TopTools_IndexedMapOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_IndexedMapOfShape::Iterator>
    {

#ifdef Include_TopTools_IndexedMapOfShape_Iterator_h
    public:
        Include_TopTools_IndexedMapOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_IndexedMapOfShape::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_IndexedMapOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_IndexedMapOfShape::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_IndexedMapOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_IndexedMapOfShape::Iterator* NativeInstance
        {
            ::TopTools_IndexedMapOfShape::Iterator* get()
            {
                return static_cast<::TopTools_IndexedMapOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_IndexedMapOfShape^ theMap);
        Iterator(Macad::Occt::TopTools_IndexedMapOfShape::Iterator^ parameter1);
        bool More() override;
        void Next() override;
        Macad::Occt::TopoDS_Shape^ Value() override;
        bool IsEqual(Macad::Occt::TopTools_IndexedMapOfShape::Iterator^ theOther);
    }; // class Iterator

    TopTools_IndexedMapOfShape();
    TopTools_IndexedMapOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_IndexedMapOfShape(int theNbBuckets);
    TopTools_IndexedMapOfShape(Macad::Occt::TopTools_IndexedMapOfShape^ theOther);
    void Exchange(Macad::Occt::TopTools_IndexedMapOfShape^ theOther);
    Macad::Occt::TopTools_IndexedMapOfShape^ Assign(Macad::Occt::TopTools_IndexedMapOfShape^ theOther);
    void ReSize(int theExtent);
    int Add(Macad::Occt::TopoDS_Shape^ theKey1);
    bool Contains(Macad::Occt::TopoDS_Shape^ theKey1);
    void Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1);
    void Swap(int theIndex1, int theIndex2);
    void RemoveLast();
    void RemoveFromIndex(int theIndex);
    bool RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1);
    Macad::Occt::TopoDS_Shape^ FindKey(int theIndex);
    int FindIndex(Macad::Occt::TopoDS_Shape^ theKey1);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_IndexedMapOfShape

//---------------------------------------------------------------------
//  Class  TopTools_ListOfListOfShape
//---------------------------------------------------------------------
public ref class TopTools_ListOfListOfShape sealed
    : public Macad::Occt::NCollection_BaseList
    , public IEnumerable<Macad::Occt::TopoDS_ListOfShape^>
{

#ifdef Include_TopTools_ListOfListOfShape_h
public:
    Include_TopTools_ListOfListOfShape_h
#endif

public:
    TopTools_ListOfListOfShape(::TopTools_ListOfListOfShape* nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    TopTools_ListOfListOfShape(::TopTools_ListOfListOfShape& nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    property ::TopTools_ListOfListOfShape* NativeInstance
    {
        ::TopTools_ListOfListOfShape* get()
        {
            return static_cast<::TopTools_ListOfListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_ListOfShape^, ::TopTools_ListOfListOfShape::Iterator>
    {

#ifdef Include_TopTools_ListOfListOfShape_Iterator_h
    public:
        Include_TopTools_ListOfListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_ListOfListOfShape::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_ListOfShape^, ::TopTools_ListOfListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_ListOfListOfShape::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_ListOfShape^, ::TopTools_ListOfListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_ListOfListOfShape::Iterator* NativeInstance
        {
            ::TopTools_ListOfListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_ListOfListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::NCollection_BaseList^ theList);
        Iterator(Macad::Occt::TopTools_ListOfListOfShape::Iterator^ parameter1);
        bool More() override;
        void Next() override;
        Macad::Occt::TopoDS_ListOfShape^ Value() override;
        Macad::Occt::TopoDS_ListOfShape^ ChangeValue();
    }; // class Iterator

    TopTools_ListOfListOfShape();
    TopTools_ListOfListOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_ListOfListOfShape(Macad::Occt::TopTools_ListOfListOfShape^ theOther);
    int Size();
    Macad::Occt::TopTools_ListOfListOfShape^ Assign(Macad::Occt::TopTools_ListOfListOfShape^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::TopoDS_ListOfShape^ First();
    Macad::Occt::TopoDS_ListOfShape^ Last();
    Macad::Occt::TopoDS_ListOfShape^ Append(Macad::Occt::TopoDS_ListOfShape^ theItem);
    void Append(Macad::Occt::TopoDS_ListOfShape^ theItem, Macad::Occt::TopTools_ListOfListOfShape::Iterator^ theIter);
    void Append(Macad::Occt::TopTools_ListOfListOfShape^ theOther);
    Macad::Occt::TopoDS_ListOfShape^ Prepend(Macad::Occt::TopoDS_ListOfShape^ theItem);
    void Prepend(Macad::Occt::TopTools_ListOfListOfShape^ theOther);
    void RemoveFirst();
    void Remove(Macad::Occt::TopTools_ListOfListOfShape::Iterator^ theIter);
    Macad::Occt::TopoDS_ListOfShape^ InsertBefore(Macad::Occt::TopoDS_ListOfShape^ theItem, Macad::Occt::TopTools_ListOfListOfShape::Iterator^ theIter);
    void InsertBefore(Macad::Occt::TopTools_ListOfListOfShape^ theOther, Macad::Occt::TopTools_ListOfListOfShape::Iterator^ theIter);
    Macad::Occt::TopoDS_ListOfShape^ InsertAfter(Macad::Occt::TopoDS_ListOfShape^ theItem, Macad::Occt::TopTools_ListOfListOfShape::Iterator^ theIter);
    void InsertAfter(Macad::Occt::TopTools_ListOfListOfShape^ theOther, Macad::Occt::TopTools_ListOfListOfShape::Iterator^ theIter);
    void Reverse();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_ListOfShape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_ListOfListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_ListIteratorOfListOfListOfShape
//---------------------------------------------------------------------
public ref class TopTools_ListIteratorOfListOfListOfShape sealed
    : public Macad::Occt::BaseClass<::TopTools_ListIteratorOfListOfListOfShape>
{

#ifdef Include_TopTools_ListIteratorOfListOfListOfShape_h
public:
    Include_TopTools_ListIteratorOfListOfListOfShape_h
#endif

public:
    TopTools_ListIteratorOfListOfListOfShape(::TopTools_ListIteratorOfListOfListOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_ListIteratorOfListOfListOfShape>( nativeInstance, true )
    {}

    TopTools_ListIteratorOfListOfListOfShape(::TopTools_ListIteratorOfListOfListOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_ListIteratorOfListOfListOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_ListIteratorOfListOfListOfShape* NativeInstance
    {
        ::TopTools_ListIteratorOfListOfListOfShape* get()
        {
            return static_cast<::TopTools_ListIteratorOfListOfListOfShape*>(_NativeInstance);
        }
    }

public:
    TopTools_ListIteratorOfListOfListOfShape();
    TopTools_ListIteratorOfListOfListOfShape(Macad::Occt::NCollection_BaseList^ theList);
    TopTools_ListIteratorOfListOfListOfShape(Macad::Occt::TopTools_ListIteratorOfListOfListOfShape^ parameter1);
    bool More();
    void Next();
    Macad::Occt::TopoDS_ListOfShape^ Value();
    Macad::Occt::TopoDS_ListOfShape^ ChangeValue();
}; // class TopTools_ListIteratorOfListOfListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_MapOfOrientedShape
//---------------------------------------------------------------------
public ref class TopTools_MapOfOrientedShape sealed
    : public Macad::Occt::BaseClass<::TopTools_MapOfOrientedShape>
    , public IEnumerable<Macad::Occt::TopoDS_Shape^>
{

#ifdef Include_TopTools_MapOfOrientedShape_h
public:
    Include_TopTools_MapOfOrientedShape_h
#endif

public:
    TopTools_MapOfOrientedShape(::TopTools_MapOfOrientedShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_MapOfOrientedShape>( nativeInstance, true )
    {}

    TopTools_MapOfOrientedShape(::TopTools_MapOfOrientedShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_MapOfOrientedShape>( &nativeInstance, false )
    {}

    property ::TopTools_MapOfOrientedShape* NativeInstance
    {
        ::TopTools_MapOfOrientedShape* get()
        {
            return static_cast<::TopTools_MapOfOrientedShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_MapOfOrientedShape::Iterator>
    {

#ifdef Include_TopTools_MapOfOrientedShape_Iterator_h
    public:
        Include_TopTools_MapOfOrientedShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_MapOfOrientedShape::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_MapOfOrientedShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_MapOfOrientedShape::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_MapOfOrientedShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_MapOfOrientedShape::Iterator* NativeInstance
        {
            ::TopTools_MapOfOrientedShape::Iterator* get()
            {
                return static_cast<::TopTools_MapOfOrientedShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_MapOfOrientedShape^ theMap);
        Iterator(Macad::Occt::TopTools_MapOfOrientedShape::Iterator^ parameter1);
        bool More() override;
        void Next() override;
        Macad::Occt::TopoDS_Shape^ Value() override;
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_MapOfOrientedShape();
    TopTools_MapOfOrientedShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_MapOfOrientedShape(int theNbBuckets);
    TopTools_MapOfOrientedShape(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
    void Exchange(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
    Macad::Occt::TopTools_MapOfOrientedShape^ Assign(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
    void ReSize(int N);
    bool Add(Macad::Occt::TopoDS_Shape^ K);
    Macad::Occt::TopoDS_Shape^ Added(Macad::Occt::TopoDS_Shape^ K);
    bool Contains(Macad::Occt::TopoDS_Shape^ K);
    bool Remove(Macad::Occt::TopoDS_Shape^ K);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    bool IsEqual(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
    bool Contains(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
    void Union(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight);
    bool Unite(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
    bool HasIntersection(Macad::Occt::TopTools_MapOfOrientedShape^ theMap);
    void Intersection(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight);
    bool Intersect(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
    void Subtraction(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight);
    bool Subtract(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
    void Difference(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight);
    bool Differ(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_MapOfOrientedShape

//---------------------------------------------------------------------
//  Class  TopTools_MapOfShape
//---------------------------------------------------------------------
public ref class TopTools_MapOfShape sealed
    : public Macad::Occt::BaseClass<::TopTools_MapOfShape>
    , public IEnumerable<Macad::Occt::TopoDS_Shape^>
{

#ifdef Include_TopTools_MapOfShape_h
public:
    Include_TopTools_MapOfShape_h
#endif

public:
    TopTools_MapOfShape(::TopTools_MapOfShape* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_MapOfShape>( nativeInstance, true )
    {}

    TopTools_MapOfShape(::TopTools_MapOfShape& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_MapOfShape>( &nativeInstance, false )
    {}

    property ::TopTools_MapOfShape* NativeInstance
    {
        ::TopTools_MapOfShape* get()
        {
            return static_cast<::TopTools_MapOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_MapOfShape::Iterator>
    {

#ifdef Include_TopTools_MapOfShape_Iterator_h
    public:
        Include_TopTools_MapOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_MapOfShape::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_MapOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_MapOfShape::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_MapOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_MapOfShape::Iterator* NativeInstance
        {
            ::TopTools_MapOfShape::Iterator* get()
            {
                return static_cast<::TopTools_MapOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_MapOfShape^ theMap);
        Iterator(Macad::Occt::TopTools_MapOfShape::Iterator^ parameter1);
        bool More() override;
        void Next() override;
        Macad::Occt::TopoDS_Shape^ Value() override;
        Macad::Occt::TopoDS_Shape^ Key();
    }; // class Iterator

    TopTools_MapOfShape();
    TopTools_MapOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopTools_MapOfShape(int theNbBuckets);
    TopTools_MapOfShape(Macad::Occt::TopTools_MapOfShape^ theOther);
    void Exchange(Macad::Occt::TopTools_MapOfShape^ theOther);
    Macad::Occt::TopTools_MapOfShape^ Assign(Macad::Occt::TopTools_MapOfShape^ theOther);
    void ReSize(int N);
    bool Add(Macad::Occt::TopoDS_Shape^ K);
    Macad::Occt::TopoDS_Shape^ Added(Macad::Occt::TopoDS_Shape^ K);
    bool Contains(Macad::Occt::TopoDS_Shape^ K);
    bool Remove(Macad::Occt::TopoDS_Shape^ K);
    void Clear(bool doReleaseMemory);
    void Clear();
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    bool IsEqual(Macad::Occt::TopTools_MapOfShape^ theOther);
    bool Contains(Macad::Occt::TopTools_MapOfShape^ theOther);
    void Union(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight);
    bool Unite(Macad::Occt::TopTools_MapOfShape^ theOther);
    bool HasIntersection(Macad::Occt::TopTools_MapOfShape^ theMap);
    void Intersection(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight);
    bool Intersect(Macad::Occt::TopTools_MapOfShape^ theOther);
    void Subtraction(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight);
    bool Subtract(Macad::Occt::TopTools_MapOfShape^ theOther);
    void Difference(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight);
    bool Differ(Macad::Occt::TopTools_MapOfShape^ theOther);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_MapOfShape

//---------------------------------------------------------------------
//  Class  TopTools
//---------------------------------------------------------------------
/// <summary>
/// The  TopTools package provides   utilities for the
/// topological data structure.
/// 
/// * ShapeMapHasher. Hash a  Shape base on the TShape
/// and the Location. The Orientation is not used.
/// 
/// * OrientedShapeMapHasher. Hash a Shape base on the
/// TShape ,the Location and the Orientation.
/// 
/// * Instantiations of TCollection for Shapes :
/// MapOfShape
/// IndexedMapOfShape
/// DataMapOfIntegerShape
/// DataMapOfShapeInteger
/// DataMapOfShapeReal
/// Array1OfShape
/// HArray1OfShape
/// SequenceOfShape
/// HSequenceOfShape
/// ListOfShape
/// Array1OfListShape
/// HArray1OfListShape
/// DataMapOfIntegerListOfShape
/// DataMapOfShapeListOfShape
/// DataMapOfShapeListOfInteger
/// IndexedDataMapOfShapeShape
/// IndexedDataMapOfShapeListOfShape
/// DataMapOfShapeShape
/// IndexedMapOfOrientedShape
/// DataMapOfShapeSequenceOfShape
/// IndexedDataMapOfShapeAddress
/// DataMapOfOrientedShapeShape
/// 
/// * LocationSet : to write sets of locations.
/// 
/// * ShapeSet : to writes sets of TShapes.
/// 
/// Package Methods :
/// 
/// Dump : To dump the topology of a Shape.
/// </summary>
public ref class TopTools sealed
    : public Macad::Occt::BaseClass<::TopTools>
{

#ifdef Include_TopTools_h
public:
    Include_TopTools_h
#endif

public:
    TopTools(::TopTools* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools>( nativeInstance, true )
    {}

    TopTools(::TopTools& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools>( &nativeInstance, false )
    {}

    property ::TopTools* NativeInstance
    {
        ::TopTools* get()
        {
            return static_cast<::TopTools*>(_NativeInstance);
        }
    }

public:
    TopTools();
    TopTools(Macad::Occt::TopTools^ parameter1);
    /// <summary>
    /// A set of Shapes. Can be dump, wrote or read.
    /// Dumps the topological structure  of <Sh>  on the
    /// stream <S>.
    /// </summary>
    static void Dump(Macad::Occt::TopoDS_Shape^ Sh, System::IO::TextWriter^ S);
    /// <summary>
    /// This is to bypass an extraction bug. It will force
    /// the  inclusion    of  Standard_Integer.hxx  itself
    /// including Standard_OStream.hxx  at   the   correct
    /// position.
    /// </summary>
    static void Dummy(int I);
}; // class TopTools

//---------------------------------------------------------------------
//  Class  TopTools_OrientedShapeMapHasher
//---------------------------------------------------------------------
public ref class TopTools_OrientedShapeMapHasher sealed
    : public Macad::Occt::BaseClass<::TopTools_OrientedShapeMapHasher>
{

#ifdef Include_TopTools_OrientedShapeMapHasher_h
public:
    Include_TopTools_OrientedShapeMapHasher_h
#endif

public:
    TopTools_OrientedShapeMapHasher(::TopTools_OrientedShapeMapHasher* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_OrientedShapeMapHasher>( nativeInstance, true )
    {}

    TopTools_OrientedShapeMapHasher(::TopTools_OrientedShapeMapHasher& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_OrientedShapeMapHasher>( &nativeInstance, false )
    {}

    property ::TopTools_OrientedShapeMapHasher* NativeInstance
    {
        ::TopTools_OrientedShapeMapHasher* get()
        {
            return static_cast<::TopTools_OrientedShapeMapHasher*>(_NativeInstance);
        }
    }

public:
    TopTools_OrientedShapeMapHasher();
    TopTools_OrientedShapeMapHasher(Macad::Occt::TopTools_OrientedShapeMapHasher^ parameter1);
    /// <summary>
    /// Computes a hash code for the given shape, in the range [1, theUpperBound]
    /// </summary>
    /// <param name="theShape">
    /// the shape which hash code is to be computed
    /// </param>
    /// <param name="theUpperBound">
    /// the upper bound of the range a computing hash code must be within
    /// </param>
    /// <returns>
    /// a computed hash code, in the range [1, theUpperBound]
    /// </returns>
    static int HashCode(Macad::Occt::TopoDS_Shape^ theShape, int theUpperBound);
    /// <summary>
    /// Returns True when the two keys are equal. Two same
    /// keys must have the same hashcode,  the contrary is
    /// not necessary.
    /// </summary>
    static bool IsEqual(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
}; // class TopTools_OrientedShapeMapHasher

//---------------------------------------------------------------------
//  Class  TopTools_ShapeMapHasher
//---------------------------------------------------------------------
/// <summary>
/// Hash tool, used for generating maps of shapes in topology.
/// </summary>
public ref class TopTools_ShapeMapHasher sealed
    : public Macad::Occt::BaseClass<::TopTools_ShapeMapHasher>
{

#ifdef Include_TopTools_ShapeMapHasher_h
public:
    Include_TopTools_ShapeMapHasher_h
#endif

public:
    TopTools_ShapeMapHasher(::TopTools_ShapeMapHasher* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_ShapeMapHasher>( nativeInstance, true )
    {}

    TopTools_ShapeMapHasher(::TopTools_ShapeMapHasher& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_ShapeMapHasher>( &nativeInstance, false )
    {}

    property ::TopTools_ShapeMapHasher* NativeInstance
    {
        ::TopTools_ShapeMapHasher* get()
        {
            return static_cast<::TopTools_ShapeMapHasher*>(_NativeInstance);
        }
    }

public:
    TopTools_ShapeMapHasher();
    TopTools_ShapeMapHasher(Macad::Occt::TopTools_ShapeMapHasher^ parameter1);
    /// <summary>
    /// Computes a hash code for the given shape, in the range [1, theUpperBound]
    /// </summary>
    /// <param name="theShape">
    /// the shape which hash code is to be computed
    /// </param>
    /// <param name="theUpperBound">
    /// the upper bound of the range a computing hash code must be within
    /// </param>
    /// <returns>
    /// a computed hash code, in the range [1, theUpperBound]
    /// </returns>
    static int HashCode(Macad::Occt::TopoDS_Shape^ theShape, int theUpperBound);
    /// <summary>
    /// Returns True  when the two  keys are the same. Two
    /// same  keys  must   have  the  same  hashcode,  the
    /// contrary is not necessary.
    /// </summary>
    static bool IsEqual(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
}; // class TopTools_ShapeMapHasher

//---------------------------------------------------------------------
//  Class  TopTools_HArray1OfListOfShape
//---------------------------------------------------------------------
public ref class TopTools_HArray1OfListOfShape sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::TopoDS_ListOfShape^>
{

#ifdef Include_TopTools_HArray1OfListOfShape_h
public:
    Include_TopTools_HArray1OfListOfShape_h
#endif

public:
    TopTools_HArray1OfListOfShape(::TopTools_HArray1OfListOfShape* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TopTools_HArray1OfListOfShape(::TopTools_HArray1OfListOfShape& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TopTools_HArray1OfListOfShape* NativeInstance
    {
        ::TopTools_HArray1OfListOfShape* get()
        {
            return static_cast<::TopTools_HArray1OfListOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_HArray1OfListOfShape::Iterator>
    {

#ifdef Include_TopTools_HArray1OfListOfShape_Iterator_h
    public:
        Include_TopTools_HArray1OfListOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_HArray1OfListOfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_HArray1OfListOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_HArray1OfListOfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_HArray1OfListOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_HArray1OfListOfShape::Iterator* NativeInstance
        {
            ::TopTools_HArray1OfListOfShape::Iterator* get()
            {
                return static_cast<::TopTools_HArray1OfListOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_HArray1OfListOfShape^ theArray, bool theToEnd);
        Iterator(Macad::Occt::TopTools_HArray1OfListOfShape^ theArray);
        Iterator(Macad::Occt::TopTools_HArray1OfListOfShape::Iterator^ parameter1);
        void Init(Macad::Occt::TopTools_HArray1OfListOfShape^ theArray);
        bool More();
        void Next();
        void Previous();
        void Offset(long long int theOffset);
        long long int Differ(Macad::Occt::TopTools_HArray1OfListOfShape::Iterator^ theOther);
        Macad::Occt::TopoDS_ListOfShape^ Value();
        Macad::Occt::TopoDS_ListOfShape^ ChangeValue();
        bool IsEqual(Macad::Occt::TopTools_HArray1OfListOfShape::Iterator^ theOther);
    }; // class Iterator

    TopTools_HArray1OfListOfShape();
    TopTools_HArray1OfListOfShape(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TopTools_HArray1OfListOfShape(int theLower, int theUpper, value_type theValue, ) */
    TopTools_HArray1OfListOfShape(Macad::Occt::TopTools_Array1OfListOfShape^ theOther);
    TopTools_HArray1OfListOfShape(Macad::Occt::TopTools_HArray1OfListOfShape^ parameter1);
    Macad::Occt::TopTools_Array1OfListOfShape^ Array1();
    Macad::Occt::TopTools_Array1OfListOfShape^ ChangeArray1();
    void Init(Macad::Occt::TopoDS_ListOfShape^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    bool IsDeletable();
    bool IsAllocated();
    Macad::Occt::TopTools_HArray1OfListOfShape^ Assign(Macad::Occt::TopTools_HArray1OfListOfShape^ theOther);
    Macad::Occt::TopTools_HArray1OfListOfShape^ Move(Macad::Occt::TopTools_HArray1OfListOfShape^ theOther);
    Macad::Occt::TopoDS_ListOfShape^ First();
    Macad::Occt::TopoDS_ListOfShape^ ChangeFirst();
    Macad::Occt::TopoDS_ListOfShape^ Last();
    Macad::Occt::TopoDS_ListOfShape^ ChangeLast();
    virtual Macad::Occt::TopoDS_ListOfShape^ Value(int theIndex);
    Macad::Occt::TopoDS_ListOfShape^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::TopoDS_ListOfShape^ theItem);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    static Macad::Occt::TopTools_HArray1OfListOfShape^ CreateDowncasted(::TopTools_HArray1OfListOfShape* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_ListOfShape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_HArray1OfListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_HArray1OfShape
//---------------------------------------------------------------------
public ref class TopTools_HArray1OfShape sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::TopoDS_Shape^>
{

#ifdef Include_TopTools_HArray1OfShape_h
public:
    Include_TopTools_HArray1OfShape_h
#endif

public:
    TopTools_HArray1OfShape(::TopTools_HArray1OfShape* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TopTools_HArray1OfShape(::TopTools_HArray1OfShape& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TopTools_HArray1OfShape* NativeInstance
    {
        ::TopTools_HArray1OfShape* get()
        {
            return static_cast<::TopTools_HArray1OfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_HArray1OfShape::Iterator>
    {

#ifdef Include_TopTools_HArray1OfShape_Iterator_h
    public:
        Include_TopTools_HArray1OfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_HArray1OfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_HArray1OfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_HArray1OfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_HArray1OfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_HArray1OfShape::Iterator* NativeInstance
        {
            ::TopTools_HArray1OfShape::Iterator* get()
            {
                return static_cast<::TopTools_HArray1OfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_HArray1OfShape^ theArray, bool theToEnd);
        Iterator(Macad::Occt::TopTools_HArray1OfShape^ theArray);
        Iterator(Macad::Occt::TopTools_HArray1OfShape::Iterator^ parameter1);
        void Init(Macad::Occt::TopTools_HArray1OfShape^ theArray);
        bool More();
        void Next();
        void Previous();
        void Offset(long long int theOffset);
        long long int Differ(Macad::Occt::TopTools_HArray1OfShape::Iterator^ theOther);
        Macad::Occt::TopoDS_Shape^ Value();
        Macad::Occt::TopoDS_Shape^ ChangeValue();
        bool IsEqual(Macad::Occt::TopTools_HArray1OfShape::Iterator^ theOther);
    }; // class Iterator

    TopTools_HArray1OfShape();
    TopTools_HArray1OfShape(int theLower, int theUpper);
    TopTools_HArray1OfShape(int theLower, int theUpper, Macad::Occt::TopoDS_Shape^ theValue);
    TopTools_HArray1OfShape(Macad::Occt::TopTools_Array1OfShape^ theOther);
    TopTools_HArray1OfShape(Macad::Occt::TopTools_HArray1OfShape^ parameter1);
    Macad::Occt::TopTools_Array1OfShape^ Array1();
    Macad::Occt::TopTools_Array1OfShape^ ChangeArray1();
    void Init(Macad::Occt::TopoDS_Shape^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    bool IsDeletable();
    bool IsAllocated();
    Macad::Occt::TopTools_HArray1OfShape^ Assign(Macad::Occt::TopTools_HArray1OfShape^ theOther);
    Macad::Occt::TopTools_HArray1OfShape^ Move(Macad::Occt::TopTools_HArray1OfShape^ theOther);
    Macad::Occt::TopoDS_Shape^ First();
    Macad::Occt::TopoDS_Shape^ ChangeFirst();
    Macad::Occt::TopoDS_Shape^ Last();
    Macad::Occt::TopoDS_Shape^ ChangeLast();
    virtual Macad::Occt::TopoDS_Shape^ Value(int theIndex);
    Macad::Occt::TopoDS_Shape^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    static Macad::Occt::TopTools_HArray1OfShape^ CreateDowncasted(::TopTools_HArray1OfShape* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_HArray1OfShape

//---------------------------------------------------------------------
//  Class  TopTools_HArray2OfShape
//---------------------------------------------------------------------
public ref class TopTools_HArray2OfShape sealed
    : public Macad::Occt::Standard_Transient
    , public IEnumerable<Macad::Occt::TopoDS_Shape^>
{

#ifdef Include_TopTools_HArray2OfShape_h
public:
    Include_TopTools_HArray2OfShape_h
#endif

public:
    TopTools_HArray2OfShape(::TopTools_HArray2OfShape* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TopTools_HArray2OfShape(::TopTools_HArray2OfShape& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TopTools_HArray2OfShape* NativeInstance
    {
        ::TopTools_HArray2OfShape* get()
        {
            return static_cast<::TopTools_HArray2OfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_HArray2OfShape::Iterator>
    {

#ifdef Include_TopTools_HArray2OfShape_Iterator_h
    public:
        Include_TopTools_HArray2OfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_HArray2OfShape::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_HArray2OfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_HArray2OfShape::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_HArray2OfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_HArray2OfShape::Iterator* NativeInstance
        {
            ::TopTools_HArray2OfShape::Iterator* get()
            {
                return static_cast<::TopTools_HArray2OfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_HArray2OfShape^ theArray);
        Iterator(Macad::Occt::TopTools_HArray2OfShape::Iterator^ parameter1);
        void Init(Macad::Occt::TopTools_HArray2OfShape^ theArray);
        bool More() override;
        void Next() override;
        Macad::Occt::TopoDS_Shape^ Value() override;
        Macad::Occt::TopoDS_Shape^ ChangeValue();
    }; // class Iterator

    TopTools_HArray2OfShape(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TopTools_HArray2OfShape(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::TopoDS_Shape^ theValue);
    TopTools_HArray2OfShape(Macad::Occt::TopTools_Array2OfShape^ theOther);
    TopTools_HArray2OfShape(Macad::Occt::TopTools_HArray2OfShape^ parameter1);
    Macad::Occt::TopTools_Array2OfShape^ Array2();
    Macad::Occt::TopTools_Array2OfShape^ ChangeArray2();
    void Init(Macad::Occt::TopoDS_Shape^ theValue);
    int Size();
    int Length();
    int NbRows();
    int NbColumns();
    int RowLength();
    int ColLength();
    int LowerRow();
    int UpperRow();
    int LowerCol();
    int UpperCol();
    bool IsDeletable();
    Macad::Occt::TopTools_HArray2OfShape^ Assign(Macad::Occt::TopTools_HArray2OfShape^ theOther);
    Macad::Occt::TopTools_HArray2OfShape^ Move(Macad::Occt::TopTools_HArray2OfShape^ theOther);
    Macad::Occt::TopoDS_Shape^ Value(int theRow, int theCol);
    Macad::Occt::TopoDS_Shape^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::TopoDS_Shape^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    static Macad::Occt::TopTools_HArray2OfShape^ CreateDowncasted(::TopTools_HArray2OfShape* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_HArray2OfShape

//---------------------------------------------------------------------
//  Class  TopTools_HSequenceOfShape
//---------------------------------------------------------------------
public ref class TopTools_HSequenceOfShape sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::TopoDS_Shape^>
{

#ifdef Include_TopTools_HSequenceOfShape_h
public:
    Include_TopTools_HSequenceOfShape_h
#endif

public:
    TopTools_HSequenceOfShape(::TopTools_HSequenceOfShape* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TopTools_HSequenceOfShape(::TopTools_HSequenceOfShape& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TopTools_HSequenceOfShape* NativeInstance
    {
        ::TopTools_HSequenceOfShape* get()
        {
            return static_cast<::TopTools_HSequenceOfShape*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TopTools_HSequenceOfShape::Iterator>
    {

#ifdef Include_TopTools_HSequenceOfShape_Iterator_h
    public:
        Include_TopTools_HSequenceOfShape_Iterator_h
#endif

    public:
        Iterator(::TopTools_HSequenceOfShape::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_HSequenceOfShape::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopTools_HSequenceOfShape::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TopTools_HSequenceOfShape::Iterator>( &nativeInstance, false )
        {}

        property ::TopTools_HSequenceOfShape::Iterator* NativeInstance
        {
            ::TopTools_HSequenceOfShape::Iterator* get()
            {
                return static_cast<::TopTools_HSequenceOfShape::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        Iterator(Macad::Occt::TopTools_HSequenceOfShape^ theSeq, bool isStart);
        Iterator(Macad::Occt::TopTools_HSequenceOfShape^ theSeq);
        Iterator(Macad::Occt::TopTools_HSequenceOfShape::Iterator^ parameter1);
        bool More();
        void Next();
        Macad::Occt::TopoDS_Shape^ Value();
        Macad::Occt::TopoDS_Shape^ ChangeValue();
        bool IsEqual(Macad::Occt::TopTools_HSequenceOfShape::Iterator^ theOther);
    }; // class Iterator

    TopTools_HSequenceOfShape();
    TopTools_HSequenceOfShape(Macad::Occt::TopTools_SequenceOfShape^ theOther);
    TopTools_HSequenceOfShape(Macad::Occt::TopTools_HSequenceOfShape^ parameter1);
    Macad::Occt::TopTools_SequenceOfShape^ Sequence();
    void Append(Macad::Occt::TopTools_SequenceOfShape^ theSequence);
    Macad::Occt::TopTools_SequenceOfShape^ ChangeSequence();
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
    Macad::Occt::TopTools_HSequenceOfShape^ Assign(Macad::Occt::TopTools_HSequenceOfShape^ theOther);
    void Remove(Macad::Occt::TopTools_HSequenceOfShape::Iterator^ thePosition);
    void Remove(int theIndex);
    void Remove(int theFromIndex, int theToIndex);
    void Append(Macad::Occt::TopoDS_Shape^ theItem);
    void Append(Macad::Occt::TopTools_HSequenceOfShape^ theSeq);
    void Prepend(Macad::Occt::TopoDS_Shape^ theItem);
    void Prepend(Macad::Occt::TopTools_HSequenceOfShape^ theSeq);
    void InsertBefore(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TopTools_HSequenceOfShape^ theSeq);
    void InsertAfter(Macad::Occt::TopTools_HSequenceOfShape::Iterator^ thePosition, Macad::Occt::TopoDS_Shape^ theItem);
    void InsertAfter(int theIndex, Macad::Occt::TopTools_HSequenceOfShape^ theSeq);
    void InsertAfter(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
    void Split(int theIndex, Macad::Occt::TopTools_HSequenceOfShape^ theSeq);
    Macad::Occt::TopoDS_Shape^ First();
    Macad::Occt::TopoDS_Shape^ ChangeFirst();
    Macad::Occt::TopoDS_Shape^ Last();
    Macad::Occt::TopoDS_Shape^ ChangeLast();
    virtual Macad::Occt::TopoDS_Shape^ Value(int theIndex);
    Macad::Occt::TopoDS_Shape^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
    static Macad::Occt::TopTools_HSequenceOfShape^ CreateDowncasted(::TopTools_HSequenceOfShape* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TopTools_HSequenceOfShape

//---------------------------------------------------------------------
//  Class  TopTools_LocationSet
//---------------------------------------------------------------------
/// <summary>
/// The class LocationSet stores a set of location in
/// a relocatable state.
/// 
/// It can be created from Locations.
/// 
/// It can create Locations.
/// 
/// It can be write and read from a stream.
/// </summary>
public ref class TopTools_LocationSet sealed
    : public Macad::Occt::BaseClass<::TopTools_LocationSet>
{

#ifdef Include_TopTools_LocationSet_h
public:
    Include_TopTools_LocationSet_h
#endif

public:
    TopTools_LocationSet(::TopTools_LocationSet* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_LocationSet>( nativeInstance, true )
    {}

    TopTools_LocationSet(::TopTools_LocationSet& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_LocationSet>( &nativeInstance, false )
    {}

    property ::TopTools_LocationSet* NativeInstance
    {
        ::TopTools_LocationSet* get()
        {
            return static_cast<::TopTools_LocationSet*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns an empty set of locations.
    /// </summary>
    TopTools_LocationSet();
    TopTools_LocationSet(Macad::Occt::TopTools_LocationSet^ parameter1);
    /// <summary>
    /// Clears the content of the set.
    /// </summary>
    void Clear();
    /// <summary>
    /// Incorporate a new Location in the  set and returns
    /// its index.
    /// </summary>
    int Add(Macad::Occt::TopLoc_Location^ L);
    /// <summary>
    /// Returns the location of index <I>.
    /// </summary>
    Macad::Occt::TopLoc_Location^ Location(int I);
    /// <summary>
    /// Returns the index of <L>.
    /// </summary>
    int Index(Macad::Occt::TopLoc_Location^ L);
    /// <summary>
    /// Dumps the content of me on the stream <OS>.
    /// </summary>
    void Dump(System::IO::TextWriter^ OS);
    /// <summary>
    /// Writes the content of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void Write(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the content of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void Write(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theProgress, ) */
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theProgress, ) */
}; // class TopTools_LocationSet

//---------------------------------------------------------------------
//  Class  TopTools_MutexForShapeProvider
//---------------------------------------------------------------------
/// <summary>
/// Class TopTools_MutexForShapeProvider
/// This class is used to create and store mutexes associated with shapes.
/// </summary>
public ref class TopTools_MutexForShapeProvider sealed
    : public Macad::Occt::BaseClass<::TopTools_MutexForShapeProvider>
{

#ifdef Include_TopTools_MutexForShapeProvider_h
public:
    Include_TopTools_MutexForShapeProvider_h
#endif

public:
    TopTools_MutexForShapeProvider(::TopTools_MutexForShapeProvider* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_MutexForShapeProvider>( nativeInstance, true )
    {}

    TopTools_MutexForShapeProvider(::TopTools_MutexForShapeProvider& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_MutexForShapeProvider>( &nativeInstance, false )
    {}

    property ::TopTools_MutexForShapeProvider* NativeInstance
    {
        ::TopTools_MutexForShapeProvider* get()
        {
            return static_cast<::TopTools_MutexForShapeProvider*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor
    /// </summary>
    TopTools_MutexForShapeProvider();
    /// <summary>
    /// Creates and associates mutexes with each sub-shape of type theType in theShape.
    /// </summary>
    void CreateMutexesForSubShapes(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopAbs_ShapeEnum theType);
    /// <summary>
    /// Creates and associates mutex with theShape
    /// </summary>
    void CreateMutexForShape(Macad::Occt::TopoDS_Shape^ theShape);
    /* Method skipped due to unknown mapping: Standard_Mutex GetMutex(TopoDS_Shape theShape, ) */
    /// <summary>
    /// Removes all mutexes
    /// </summary>
    void RemoveAllMutexes();
}; // class TopTools_MutexForShapeProvider

//---------------------------------------------------------------------
//  Class  TopTools_ShapeSet
//---------------------------------------------------------------------
/// <summary>
/// A ShapeSets    contains  a  Shape    and all   its
/// sub-shapes and locations.  It  can be dump,  write
/// and read.
/// 
/// Methods to handle the geometry can be redefined.
/// </summary>
public ref class TopTools_ShapeSet
    : public Macad::Occt::BaseClass<::TopTools_ShapeSet>
{

#ifdef Include_TopTools_ShapeSet_h
public:
    Include_TopTools_ShapeSet_h
#endif

protected:
    TopTools_ShapeSet(InitMode init)
        : Macad::Occt::BaseClass<::TopTools_ShapeSet>( init )
    {}

public:
    TopTools_ShapeSet(::TopTools_ShapeSet* nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_ShapeSet>( nativeInstance, true )
    {}

    TopTools_ShapeSet(::TopTools_ShapeSet& nativeInstance)
        : Macad::Occt::BaseClass<::TopTools_ShapeSet>( &nativeInstance, false )
    {}

    property ::TopTools_ShapeSet* NativeInstance
    {
        ::TopTools_ShapeSet* get()
        {
            return static_cast<::TopTools_ShapeSet*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Builds an empty ShapeSet.
    /// </summary>
    TopTools_ShapeSet();
    TopTools_ShapeSet(Macad::Occt::TopTools_ShapeSet^ parameter1);
    /// <summary>
    /// Sets the TopTools_FormatVersion
    /// </summary>
    void SetFormatNb(int theFormatNb);
    /// <summary>
    /// Returns the TopTools_FormatVersion
    /// </summary>
    int FormatNb();
    /// <summary>
    /// Clears the content of the set.  This method can be
    /// redefined.
    /// </summary>
    void Clear();
    /// <summary>
    /// Stores <S> and its sub-shape. Returns the index of <S>.
    /// The method AddGeometry is called on each sub-shape.
    /// </summary>
    int Add(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns the sub-shape of index <I>.
    /// </summary>
    Macad::Occt::TopoDS_Shape^ Shape(int I);
    /// <summary>
    /// Returns the index of <S>.
    /// </summary>
    int Index(Macad::Occt::TopoDS_Shape^ S);
    Macad::Occt::TopTools_LocationSet^ Locations();
    Macad::Occt::TopTools_LocationSet^ ChangeLocations();
    /// <summary>
    /// Dumps the number of objects in me on the stream <OS>.
    /// (Number of shapes of each type)
    /// </summary>
    System::IO::TextWriter^ DumpExtent(System::IO::TextWriter^ OS);
    /// <summary>
    /// Dumps the number of objects in me in the string S
    /// (Number of shapes of each type)
    /// </summary>
    void DumpExtent(Macad::Occt::TCollection_AsciiString^ S);
    /// <summary>
    /// Dumps the content of me on the stream <OS>.
    /// 
    /// Dumps the shapes from first to last.
    /// For each Shape
    /// Dump the type, the flags, the subshapes
    /// calls DumpGeometry(S)
    /// 
    /// Dumps the geometry calling DumpGeometry.
    /// 
    /// Dumps the locations.
    /// </summary>
    void Dump(System::IO::TextWriter^ OS);
    /// <summary>
    /// Writes the content of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// 
    /// Writes the locations.
    /// 
    /// Writes the geometry calling WriteGeometry.
    /// 
    /// Dumps the shapes from last to first.
    /// For each shape  :
    /// Write the type.
    /// calls WriteGeometry(S).
    /// Write the flags, the subshapes.
    /// </summary>
    void Write(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the content of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// 
    /// Writes the locations.
    /// 
    /// Writes the geometry calling WriteGeometry.
    /// 
    /// Dumps the shapes from last to first.
    /// For each shape  :
    /// Write the type.
    /// calls WriteGeometry(S).
    /// Write the flags, the subshapes.
    /// </summary>
    void Write(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theProgress, ) */
    /* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theProgress, ) */
    /// <summary>
    /// Dumps   on  <OS>    the  shape  <S>.   Dumps   the
    /// orientation, the index of the TShape and the index
    /// of the Location.
    /// </summary>
    void Dump(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS);
    /// <summary>
    /// Writes   on  <OS>   the shape   <S>.    Writes the
    /// orientation, the index of the TShape and the index
    /// of the Location.
    /// </summary>
    void Write(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void Read(TopoDS_Shape S, istream IS, ) */
    /// <summary>
    /// Stores the geometry of <S>.
    /// </summary>
    void AddGeometry(Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Dumps the geometry of me on the stream <OS>.
    /// </summary>
    void DumpGeometry(System::IO::TextWriter^ OS);
    /// <summary>
    /// Writes the geometry of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void WriteGeometry(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theProgress);
    /// <summary>
    /// Writes the geometry of  me  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void WriteGeometry(System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theProgress, ) */
    /* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theProgress, ) */
    /// <summary>
    /// Dumps the geometry of <S> on the stream <OS>.
    /// </summary>
    void DumpGeometry(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS);
    /// <summary>
    /// Writes the geometry of <S>  on the stream <OS> in a
    /// format that can be read back by Read.
    /// </summary>
    void WriteGeometry(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS);
    /* Method skipped due to unknown mapping: void ReadGeometry(TopAbs_ShapeEnum T, istream IS, TopoDS_Shape S, ) */
    /// <summary>
    /// Inserts  the shape <S2> in  the  shape <S1>.  This
    /// method must be   redefined  to  use   the  correct
    /// builder.
    /// </summary>
    void AddShapes(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
    /// <summary>
    /// This method is   called after  each  new  completed
    /// shape. <T> is the  type. <S> is  the shape. In this
    /// class it does nothing, but it gives the opportunity
    /// in derived  classes to perform  extra  treatment on
    /// shapes.
    /// </summary>
    void Check(Macad::Occt::TopAbs_ShapeEnum T, Macad::Occt::TopoDS_Shape^ S);
    /// <summary>
    /// Returns number of shapes read from file.
    /// </summary>
    int NbShapes();
}; // class TopTools_ShapeSet

}; // namespace Occt
}; // namespace Macad
