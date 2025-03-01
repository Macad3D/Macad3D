// Generated wrapper code for package Extrema

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  Extrema_ElementType
//---------------------------------------------------------------------
public enum class Extrema_ElementType
{
    Node = 0,
    UIsoEdge = 1,
    VIsoEdge = 2,
    Face = 3
}; // enum  class Extrema_ElementType

//---------------------------------------------------------------------
//  Enum  Extrema_ExtAlgo
//---------------------------------------------------------------------
public enum class Extrema_ExtAlgo
{
    Grad = 0,
    Tree = 1
}; // enum  class Extrema_ExtAlgo

//---------------------------------------------------------------------
//  Enum  Extrema_ExtFlag
//---------------------------------------------------------------------
public enum class Extrema_ExtFlag
{
    MIN = 0,
    MAX = 1,
    MINMAX = 2
}; // enum  class Extrema_ExtFlag

//---------------------------------------------------------------------
//  Class  Extrema_Array1OfPOnCurv
//---------------------------------------------------------------------
public ref class Extrema_Array1OfPOnCurv sealed
    : public Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv>
    , public IIndexEnumerable<Macad::Occt::Extrema_POnCurv^>
{

#ifdef Include_Extrema_Array1OfPOnCurv_h
public:
    Include_Extrema_Array1OfPOnCurv_h
#endif

public:
    Extrema_Array1OfPOnCurv(::Extrema_Array1OfPOnCurv* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv>( nativeInstance, true )
    {}

    Extrema_Array1OfPOnCurv(::Extrema_Array1OfPOnCurv& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv>( &nativeInstance, false )
    {}

    property ::Extrema_Array1OfPOnCurv* NativeInstance
    {
        ::Extrema_Array1OfPOnCurv* get()
        {
            return static_cast<::Extrema_Array1OfPOnCurv*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv::Iterator>
    {

#ifdef Include_Extrema_Array1OfPOnCurv_Iterator_h
    public:
        Include_Extrema_Array1OfPOnCurv_Iterator_h
#endif

    public:
        Iterator(::Extrema_Array1OfPOnCurv::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_Array1OfPOnCurv::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_Array1OfPOnCurv::Iterator* NativeInstance
        {
            ::Extrema_Array1OfPOnCurv::Iterator* get()
            {
                return static_cast<::Extrema_Array1OfPOnCurv::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Extrema_Array1OfPOnCurv();
    Extrema_Array1OfPOnCurv(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void Extrema_Array1OfPOnCurv(allocator_type theAlloc, int theLower, int theUpper, ) */
    Extrema_Array1OfPOnCurv(Macad::Occt::Extrema_POnCurv^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    Extrema_Array1OfPOnCurv(Macad::Occt::Extrema_POnCurv^ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Extrema_POnCurv^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Extrema_Array1OfPOnCurv^ Assign(Macad::Occt::Extrema_Array1OfPOnCurv^ theOther);
    Macad::Occt::Extrema_Array1OfPOnCurv^ Move(Macad::Occt::Extrema_Array1OfPOnCurv^ theOther);
    Macad::Occt::Extrema_POnCurv^ First();
    Macad::Occt::Extrema_POnCurv^ ChangeFirst();
    Macad::Occt::Extrema_POnCurv^ Last();
    Macad::Occt::Extrema_POnCurv^ ChangeLast();
    virtual Macad::Occt::Extrema_POnCurv^ Value(int theIndex);
    Macad::Occt::Extrema_POnCurv^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Extrema_POnCurv^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnCurv^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Extrema_Array1OfPOnCurv

//---------------------------------------------------------------------
//  Class  Extrema_Array1OfPOnCurv2d
//---------------------------------------------------------------------
public ref class Extrema_Array1OfPOnCurv2d sealed
    : public Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv2d>
    , public IIndexEnumerable<Macad::Occt::Extrema_POnCurv2d^>
{

#ifdef Include_Extrema_Array1OfPOnCurv2d_h
public:
    Include_Extrema_Array1OfPOnCurv2d_h
#endif

public:
    Extrema_Array1OfPOnCurv2d(::Extrema_Array1OfPOnCurv2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv2d>( nativeInstance, true )
    {}

    Extrema_Array1OfPOnCurv2d(::Extrema_Array1OfPOnCurv2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv2d>( &nativeInstance, false )
    {}

    property ::Extrema_Array1OfPOnCurv2d* NativeInstance
    {
        ::Extrema_Array1OfPOnCurv2d* get()
        {
            return static_cast<::Extrema_Array1OfPOnCurv2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv2d::Iterator>
    {

#ifdef Include_Extrema_Array1OfPOnCurv2d_Iterator_h
    public:
        Include_Extrema_Array1OfPOnCurv2d_Iterator_h
#endif

    public:
        Iterator(::Extrema_Array1OfPOnCurv2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_Array1OfPOnCurv2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array1OfPOnCurv2d::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_Array1OfPOnCurv2d::Iterator* NativeInstance
        {
            ::Extrema_Array1OfPOnCurv2d::Iterator* get()
            {
                return static_cast<::Extrema_Array1OfPOnCurv2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Extrema_Array1OfPOnCurv2d();
    Extrema_Array1OfPOnCurv2d(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void Extrema_Array1OfPOnCurv2d(allocator_type theAlloc, int theLower, int theUpper, ) */
    Extrema_Array1OfPOnCurv2d(Macad::Occt::Extrema_POnCurv2d^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    Extrema_Array1OfPOnCurv2d(Macad::Occt::Extrema_POnCurv2d^ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Extrema_POnCurv2d^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Extrema_Array1OfPOnCurv2d^ Assign(Macad::Occt::Extrema_Array1OfPOnCurv2d^ theOther);
    Macad::Occt::Extrema_Array1OfPOnCurv2d^ Move(Macad::Occt::Extrema_Array1OfPOnCurv2d^ theOther);
    Macad::Occt::Extrema_POnCurv2d^ First();
    Macad::Occt::Extrema_POnCurv2d^ ChangeFirst();
    Macad::Occt::Extrema_POnCurv2d^ Last();
    Macad::Occt::Extrema_POnCurv2d^ ChangeLast();
    virtual Macad::Occt::Extrema_POnCurv2d^ Value(int theIndex);
    Macad::Occt::Extrema_POnCurv2d^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Extrema_POnCurv2d^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnCurv2d^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Extrema_Array1OfPOnCurv2d

//---------------------------------------------------------------------
//  Class  Extrema_Array1OfPOnSurf
//---------------------------------------------------------------------
public ref class Extrema_Array1OfPOnSurf sealed
    : public Macad::Occt::BaseClass<::Extrema_Array1OfPOnSurf>
    , public IIndexEnumerable<Macad::Occt::Extrema_POnSurf^>
{

#ifdef Include_Extrema_Array1OfPOnSurf_h
public:
    Include_Extrema_Array1OfPOnSurf_h
#endif

public:
    Extrema_Array1OfPOnSurf(::Extrema_Array1OfPOnSurf* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array1OfPOnSurf>( nativeInstance, true )
    {}

    Extrema_Array1OfPOnSurf(::Extrema_Array1OfPOnSurf& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array1OfPOnSurf>( &nativeInstance, false )
    {}

    property ::Extrema_Array1OfPOnSurf* NativeInstance
    {
        ::Extrema_Array1OfPOnSurf* get()
        {
            return static_cast<::Extrema_Array1OfPOnSurf*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_Array1OfPOnSurf::Iterator>
    {

#ifdef Include_Extrema_Array1OfPOnSurf_Iterator_h
    public:
        Include_Extrema_Array1OfPOnSurf_Iterator_h
#endif

    public:
        Iterator(::Extrema_Array1OfPOnSurf::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array1OfPOnSurf::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_Array1OfPOnSurf::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array1OfPOnSurf::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_Array1OfPOnSurf::Iterator* NativeInstance
        {
            ::Extrema_Array1OfPOnSurf::Iterator* get()
            {
                return static_cast<::Extrema_Array1OfPOnSurf::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Extrema_Array1OfPOnSurf();
    Extrema_Array1OfPOnSurf(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void Extrema_Array1OfPOnSurf(allocator_type theAlloc, int theLower, int theUpper, ) */
    Extrema_Array1OfPOnSurf(Macad::Occt::Extrema_POnSurf^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    Extrema_Array1OfPOnSurf(Macad::Occt::Extrema_POnSurf^ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Extrema_POnSurf^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Extrema_Array1OfPOnSurf^ Assign(Macad::Occt::Extrema_Array1OfPOnSurf^ theOther);
    Macad::Occt::Extrema_Array1OfPOnSurf^ Move(Macad::Occt::Extrema_Array1OfPOnSurf^ theOther);
    Macad::Occt::Extrema_POnSurf^ First();
    Macad::Occt::Extrema_POnSurf^ ChangeFirst();
    Macad::Occt::Extrema_POnSurf^ Last();
    Macad::Occt::Extrema_POnSurf^ ChangeLast();
    virtual Macad::Occt::Extrema_POnSurf^ Value(int theIndex);
    Macad::Occt::Extrema_POnSurf^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Extrema_POnSurf^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnSurf^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Extrema_Array1OfPOnSurf

//---------------------------------------------------------------------
//  Class  Extrema_Array2OfPOnCurv
//---------------------------------------------------------------------
public ref class Extrema_Array2OfPOnCurv sealed
    : public Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv>
{

#ifdef Include_Extrema_Array2OfPOnCurv_h
public:
    Include_Extrema_Array2OfPOnCurv_h
#endif

public:
    Extrema_Array2OfPOnCurv(::Extrema_Array2OfPOnCurv* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv>( nativeInstance, true )
    {}

    Extrema_Array2OfPOnCurv(::Extrema_Array2OfPOnCurv& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv>( &nativeInstance, false )
    {}

    property ::Extrema_Array2OfPOnCurv* NativeInstance
    {
        ::Extrema_Array2OfPOnCurv* get()
        {
            return static_cast<::Extrema_Array2OfPOnCurv*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv::Iterator>
    {

#ifdef Include_Extrema_Array2OfPOnCurv_Iterator_h
    public:
        Include_Extrema_Array2OfPOnCurv_Iterator_h
#endif

    public:
        Iterator(::Extrema_Array2OfPOnCurv::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_Array2OfPOnCurv::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_Array2OfPOnCurv::Iterator* NativeInstance
        {
            ::Extrema_Array2OfPOnCurv::Iterator* get()
            {
                return static_cast<::Extrema_Array2OfPOnCurv::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Extrema_Array2OfPOnCurv();
    Extrema_Array2OfPOnCurv(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void Extrema_Array2OfPOnCurv(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    Extrema_Array2OfPOnCurv(Macad::Occt::Extrema_POnCurv^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::Extrema_Array2OfPOnCurv^ Assign(Macad::Occt::Extrema_Array2OfPOnCurv^ theOther);
    Macad::Occt::Extrema_Array2OfPOnCurv^ Move(Macad::Occt::Extrema_Array2OfPOnCurv^ theOther);
    Macad::Occt::Extrema_POnCurv^ Value(int theRow, int theCol);
    Macad::Occt::Extrema_POnCurv^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnCurv^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Extrema_POnCurv^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Extrema_POnCurv^ First();
    Macad::Occt::Extrema_POnCurv^ ChangeFirst();
    Macad::Occt::Extrema_POnCurv^ Last();
    Macad::Occt::Extrema_POnCurv^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class Extrema_Array2OfPOnCurv

//---------------------------------------------------------------------
//  Class  Extrema_Array2OfPOnCurv2d
//---------------------------------------------------------------------
public ref class Extrema_Array2OfPOnCurv2d sealed
    : public Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv2d>
{

#ifdef Include_Extrema_Array2OfPOnCurv2d_h
public:
    Include_Extrema_Array2OfPOnCurv2d_h
#endif

public:
    Extrema_Array2OfPOnCurv2d(::Extrema_Array2OfPOnCurv2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv2d>( nativeInstance, true )
    {}

    Extrema_Array2OfPOnCurv2d(::Extrema_Array2OfPOnCurv2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv2d>( &nativeInstance, false )
    {}

    property ::Extrema_Array2OfPOnCurv2d* NativeInstance
    {
        ::Extrema_Array2OfPOnCurv2d* get()
        {
            return static_cast<::Extrema_Array2OfPOnCurv2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv2d::Iterator>
    {

#ifdef Include_Extrema_Array2OfPOnCurv2d_Iterator_h
    public:
        Include_Extrema_Array2OfPOnCurv2d_Iterator_h
#endif

    public:
        Iterator(::Extrema_Array2OfPOnCurv2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_Array2OfPOnCurv2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array2OfPOnCurv2d::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_Array2OfPOnCurv2d::Iterator* NativeInstance
        {
            ::Extrema_Array2OfPOnCurv2d::Iterator* get()
            {
                return static_cast<::Extrema_Array2OfPOnCurv2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Extrema_Array2OfPOnCurv2d();
    Extrema_Array2OfPOnCurv2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void Extrema_Array2OfPOnCurv2d(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    Extrema_Array2OfPOnCurv2d(Macad::Occt::Extrema_POnCurv2d^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::Extrema_Array2OfPOnCurv2d^ Assign(Macad::Occt::Extrema_Array2OfPOnCurv2d^ theOther);
    Macad::Occt::Extrema_Array2OfPOnCurv2d^ Move(Macad::Occt::Extrema_Array2OfPOnCurv2d^ theOther);
    Macad::Occt::Extrema_POnCurv2d^ Value(int theRow, int theCol);
    Macad::Occt::Extrema_POnCurv2d^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnCurv2d^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Extrema_POnCurv2d^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Extrema_POnCurv2d^ First();
    Macad::Occt::Extrema_POnCurv2d^ ChangeFirst();
    Macad::Occt::Extrema_POnCurv2d^ Last();
    Macad::Occt::Extrema_POnCurv2d^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class Extrema_Array2OfPOnCurv2d

//---------------------------------------------------------------------
//  Class  Extrema_Array2OfPOnSurf
//---------------------------------------------------------------------
public ref class Extrema_Array2OfPOnSurf sealed
    : public Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurf>
{

#ifdef Include_Extrema_Array2OfPOnSurf_h
public:
    Include_Extrema_Array2OfPOnSurf_h
#endif

public:
    Extrema_Array2OfPOnSurf(::Extrema_Array2OfPOnSurf* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurf>( nativeInstance, true )
    {}

    Extrema_Array2OfPOnSurf(::Extrema_Array2OfPOnSurf& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurf>( &nativeInstance, false )
    {}

    property ::Extrema_Array2OfPOnSurf* NativeInstance
    {
        ::Extrema_Array2OfPOnSurf* get()
        {
            return static_cast<::Extrema_Array2OfPOnSurf*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurf::Iterator>
    {

#ifdef Include_Extrema_Array2OfPOnSurf_Iterator_h
    public:
        Include_Extrema_Array2OfPOnSurf_Iterator_h
#endif

    public:
        Iterator(::Extrema_Array2OfPOnSurf::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurf::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_Array2OfPOnSurf::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurf::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_Array2OfPOnSurf::Iterator* NativeInstance
        {
            ::Extrema_Array2OfPOnSurf::Iterator* get()
            {
                return static_cast<::Extrema_Array2OfPOnSurf::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Extrema_Array2OfPOnSurf();
    Extrema_Array2OfPOnSurf(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void Extrema_Array2OfPOnSurf(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    Extrema_Array2OfPOnSurf(Macad::Occt::Extrema_POnSurf^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::Extrema_Array2OfPOnSurf^ Assign(Macad::Occt::Extrema_Array2OfPOnSurf^ theOther);
    Macad::Occt::Extrema_Array2OfPOnSurf^ Move(Macad::Occt::Extrema_Array2OfPOnSurf^ theOther);
    Macad::Occt::Extrema_POnSurf^ Value(int theRow, int theCol);
    Macad::Occt::Extrema_POnSurf^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnSurf^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Extrema_POnSurf^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Extrema_POnSurf^ First();
    Macad::Occt::Extrema_POnSurf^ ChangeFirst();
    Macad::Occt::Extrema_POnSurf^ Last();
    Macad::Occt::Extrema_POnSurf^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class Extrema_Array2OfPOnSurf

//---------------------------------------------------------------------
//  Class  Extrema_Array2OfPOnSurfParams
//---------------------------------------------------------------------
public ref class Extrema_Array2OfPOnSurfParams sealed
    : public Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurfParams>
{

#ifdef Include_Extrema_Array2OfPOnSurfParams_h
public:
    Include_Extrema_Array2OfPOnSurfParams_h
#endif

public:
    Extrema_Array2OfPOnSurfParams(::Extrema_Array2OfPOnSurfParams* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurfParams>( nativeInstance, true )
    {}

    Extrema_Array2OfPOnSurfParams(::Extrema_Array2OfPOnSurfParams& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurfParams>( &nativeInstance, false )
    {}

    property ::Extrema_Array2OfPOnSurfParams* NativeInstance
    {
        ::Extrema_Array2OfPOnSurfParams* get()
        {
            return static_cast<::Extrema_Array2OfPOnSurfParams*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurfParams::Iterator>
    {

#ifdef Include_Extrema_Array2OfPOnSurfParams_Iterator_h
    public:
        Include_Extrema_Array2OfPOnSurfParams_Iterator_h
#endif

    public:
        Iterator(::Extrema_Array2OfPOnSurfParams::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurfParams::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_Array2OfPOnSurfParams::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_Array2OfPOnSurfParams::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_Array2OfPOnSurfParams::Iterator* NativeInstance
        {
            ::Extrema_Array2OfPOnSurfParams::Iterator* get()
            {
                return static_cast<::Extrema_Array2OfPOnSurfParams::Iterator*>(_NativeInstance);
            }
        }

    public:
        void Init(Macad::Occt::Extrema_Array2OfPOnSurfParams^ theList);
        bool More();
        void Initialize(Macad::Occt::Extrema_Array2OfPOnSurfParams^ theList);
        /* Method skipped due to unknown mapping: iterator ValueIter() */
        /* Method skipped due to unknown mapping: iterator ChangeValueIter() */
        /* Method skipped due to unknown mapping: iterator EndIter() */
        /* Method skipped due to unknown mapping: iterator ChangeEndIter() */
        void Next();
        Macad::Occt::Extrema_POnSurfParams^ Value();
        Macad::Occt::Extrema_POnSurfParams^ ChangeValue();
    }; // class Iterator

    Extrema_Array2OfPOnSurfParams();
    Extrema_Array2OfPOnSurfParams(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void Extrema_Array2OfPOnSurfParams(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    Extrema_Array2OfPOnSurfParams(Macad::Occt::Extrema_POnSurfParams^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::Extrema_Array2OfPOnSurfParams^ Assign(Macad::Occt::Extrema_Array2OfPOnSurfParams^ theOther);
    Macad::Occt::Extrema_Array2OfPOnSurfParams^ Move(Macad::Occt::Extrema_Array2OfPOnSurfParams^ theOther);
    Macad::Occt::Extrema_POnSurfParams^ Value(int theRow, int theCol);
    Macad::Occt::Extrema_POnSurfParams^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnSurfParams^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Extrema_POnSurfParams^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Extrema_POnSurfParams^ First();
    Macad::Occt::Extrema_POnSurfParams^ ChangeFirst();
    Macad::Occt::Extrema_POnSurfParams^ Last();
    Macad::Occt::Extrema_POnSurfParams^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class Extrema_Array2OfPOnSurfParams

//---------------------------------------------------------------------
//  Class  Extrema_SequenceOfPOnCurv
//---------------------------------------------------------------------
public ref class Extrema_SequenceOfPOnCurv sealed
    : public Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv>
    , public IIndexEnumerable<Macad::Occt::Extrema_POnCurv^>
{

#ifdef Include_Extrema_SequenceOfPOnCurv_h
public:
    Include_Extrema_SequenceOfPOnCurv_h
#endif

public:
    Extrema_SequenceOfPOnCurv(::Extrema_SequenceOfPOnCurv* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv>( nativeInstance, true )
    {}

    Extrema_SequenceOfPOnCurv(::Extrema_SequenceOfPOnCurv& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv>( &nativeInstance, false )
    {}

    property ::Extrema_SequenceOfPOnCurv* NativeInstance
    {
        ::Extrema_SequenceOfPOnCurv* get()
        {
            return static_cast<::Extrema_SequenceOfPOnCurv*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv::Iterator>
    {

#ifdef Include_Extrema_SequenceOfPOnCurv_Iterator_h
    public:
        Include_Extrema_SequenceOfPOnCurv_Iterator_h
#endif

    public:
        Iterator(::Extrema_SequenceOfPOnCurv::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_SequenceOfPOnCurv::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_SequenceOfPOnCurv::Iterator* NativeInstance
        {
            ::Extrema_SequenceOfPOnCurv::Iterator* get()
            {
                return static_cast<::Extrema_SequenceOfPOnCurv::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Extrema_POnCurv^ Value();
        Macad::Occt::Extrema_POnCurv^ ChangeValue();
        bool IsEqual(Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Extrema_SequenceOfPOnCurv();
    Extrema_SequenceOfPOnCurv(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::Extrema_SequenceOfPOnCurv^ Assign(Macad::Occt::Extrema_SequenceOfPOnCurv^ theOther);
    void Remove(Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator^ thePosition);
    void Append(Macad::Occt::Extrema_POnCurv^ theItem);
    void Prepend(Macad::Occt::Extrema_POnCurv^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Extrema_POnCurv^ theItem);
    void InsertAfter(Macad::Occt::Extrema_SequenceOfPOnCurv::Iterator^ thePosition, Macad::Occt::Extrema_POnCurv^ theItem);
    void Split(int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv^ theSeq);
    Macad::Occt::Extrema_POnCurv^ First();
    Macad::Occt::Extrema_POnCurv^ ChangeFirst();
    Macad::Occt::Extrema_POnCurv^ Last();
    Macad::Occt::Extrema_POnCurv^ ChangeLast();
    virtual Macad::Occt::Extrema_POnCurv^ Value(int theIndex);
    Macad::Occt::Extrema_POnCurv^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Extrema_POnCurv^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnCurv^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Extrema_SequenceOfPOnCurv

//---------------------------------------------------------------------
//  Class  Extrema_SequenceOfPOnCurv2d
//---------------------------------------------------------------------
public ref class Extrema_SequenceOfPOnCurv2d sealed
    : public Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv2d>
    , public IIndexEnumerable<Macad::Occt::Extrema_POnCurv2d^>
{

#ifdef Include_Extrema_SequenceOfPOnCurv2d_h
public:
    Include_Extrema_SequenceOfPOnCurv2d_h
#endif

public:
    Extrema_SequenceOfPOnCurv2d(::Extrema_SequenceOfPOnCurv2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv2d>( nativeInstance, true )
    {}

    Extrema_SequenceOfPOnCurv2d(::Extrema_SequenceOfPOnCurv2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv2d>( &nativeInstance, false )
    {}

    property ::Extrema_SequenceOfPOnCurv2d* NativeInstance
    {
        ::Extrema_SequenceOfPOnCurv2d* get()
        {
            return static_cast<::Extrema_SequenceOfPOnCurv2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv2d::Iterator>
    {

#ifdef Include_Extrema_SequenceOfPOnCurv2d_Iterator_h
    public:
        Include_Extrema_SequenceOfPOnCurv2d_Iterator_h
#endif

    public:
        Iterator(::Extrema_SequenceOfPOnCurv2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_SequenceOfPOnCurv2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnCurv2d::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_SequenceOfPOnCurv2d::Iterator* NativeInstance
        {
            ::Extrema_SequenceOfPOnCurv2d::Iterator* get()
            {
                return static_cast<::Extrema_SequenceOfPOnCurv2d::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Extrema_POnCurv2d^ Value();
        Macad::Occt::Extrema_POnCurv2d^ ChangeValue();
        bool IsEqual(Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Extrema_SequenceOfPOnCurv2d();
    Extrema_SequenceOfPOnCurv2d(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::Extrema_SequenceOfPOnCurv2d^ Assign(Macad::Occt::Extrema_SequenceOfPOnCurv2d^ theOther);
    void Remove(Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator^ thePosition);
    void Append(Macad::Occt::Extrema_POnCurv2d^ theItem);
    void Prepend(Macad::Occt::Extrema_POnCurv2d^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Extrema_POnCurv2d^ theItem);
    void InsertAfter(Macad::Occt::Extrema_SequenceOfPOnCurv2d::Iterator^ thePosition, Macad::Occt::Extrema_POnCurv2d^ theItem);
    void Split(int theIndex, Macad::Occt::Extrema_SequenceOfPOnCurv2d^ theSeq);
    Macad::Occt::Extrema_POnCurv2d^ First();
    Macad::Occt::Extrema_POnCurv2d^ ChangeFirst();
    Macad::Occt::Extrema_POnCurv2d^ Last();
    Macad::Occt::Extrema_POnCurv2d^ ChangeLast();
    virtual Macad::Occt::Extrema_POnCurv2d^ Value(int theIndex);
    Macad::Occt::Extrema_POnCurv2d^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Extrema_POnCurv2d^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnCurv2d^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Extrema_SequenceOfPOnCurv2d

//---------------------------------------------------------------------
//  Class  Extrema_SequenceOfPOnSurf
//---------------------------------------------------------------------
public ref class Extrema_SequenceOfPOnSurf sealed
    : public Macad::Occt::BaseClass<::Extrema_SequenceOfPOnSurf>
    , public IIndexEnumerable<Macad::Occt::Extrema_POnSurf^>
{

#ifdef Include_Extrema_SequenceOfPOnSurf_h
public:
    Include_Extrema_SequenceOfPOnSurf_h
#endif

public:
    Extrema_SequenceOfPOnSurf(::Extrema_SequenceOfPOnSurf* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnSurf>( nativeInstance, true )
    {}

    Extrema_SequenceOfPOnSurf(::Extrema_SequenceOfPOnSurf& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnSurf>( &nativeInstance, false )
    {}

    property ::Extrema_SequenceOfPOnSurf* NativeInstance
    {
        ::Extrema_SequenceOfPOnSurf* get()
        {
            return static_cast<::Extrema_SequenceOfPOnSurf*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_SequenceOfPOnSurf::Iterator>
    {

#ifdef Include_Extrema_SequenceOfPOnSurf_Iterator_h
    public:
        Include_Extrema_SequenceOfPOnSurf_Iterator_h
#endif

    public:
        Iterator(::Extrema_SequenceOfPOnSurf::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnSurf::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_SequenceOfPOnSurf::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_SequenceOfPOnSurf::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_SequenceOfPOnSurf::Iterator* NativeInstance
        {
            ::Extrema_SequenceOfPOnSurf::Iterator* get()
            {
                return static_cast<::Extrema_SequenceOfPOnSurf::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Extrema_POnSurf^ Value();
        Macad::Occt::Extrema_POnSurf^ ChangeValue();
        bool IsEqual(Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Extrema_SequenceOfPOnSurf();
    Extrema_SequenceOfPOnSurf(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::Extrema_SequenceOfPOnSurf^ Assign(Macad::Occt::Extrema_SequenceOfPOnSurf^ theOther);
    void Remove(Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator^ thePosition);
    void Append(Macad::Occt::Extrema_POnSurf^ theItem);
    void Prepend(Macad::Occt::Extrema_POnSurf^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Extrema_POnSurf^ theItem);
    void InsertAfter(Macad::Occt::Extrema_SequenceOfPOnSurf::Iterator^ thePosition, Macad::Occt::Extrema_POnSurf^ theItem);
    void Split(int theIndex, Macad::Occt::Extrema_SequenceOfPOnSurf^ theSeq);
    Macad::Occt::Extrema_POnSurf^ First();
    Macad::Occt::Extrema_POnSurf^ ChangeFirst();
    Macad::Occt::Extrema_POnSurf^ Last();
    Macad::Occt::Extrema_POnSurf^ ChangeLast();
    virtual Macad::Occt::Extrema_POnSurf^ Value(int theIndex);
    Macad::Occt::Extrema_POnSurf^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Extrema_POnSurf^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnSurf^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Extrema_SequenceOfPOnSurf

//---------------------------------------------------------------------
//  Class  Extrema_HUBTreeOfSphere
//---------------------------------------------------------------------
public ref class Extrema_HUBTreeOfSphere sealed
    : public Macad::Occt::BaseClass<::Extrema_HUBTreeOfSphere>
{

#ifdef Include_Extrema_HUBTreeOfSphere_h
public:
    Include_Extrema_HUBTreeOfSphere_h
#endif

public:
    Extrema_HUBTreeOfSphere(::Extrema_HUBTreeOfSphere* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_HUBTreeOfSphere>( nativeInstance, true )
    {}

    Extrema_HUBTreeOfSphere(::Extrema_HUBTreeOfSphere& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_HUBTreeOfSphere>( &nativeInstance, false )
    {}

    property ::Extrema_HUBTreeOfSphere* NativeInstance
    {
        ::Extrema_HUBTreeOfSphere* get()
        {
            return static_cast<::Extrema_HUBTreeOfSphere*>(_NativeInstance);
        }
    }

public:
    Extrema_HUBTreeOfSphere();
    /* Method skipped due to unknown mapping: void Extrema_HUBTreeOfSphere(Extrema_UBTreeOfSphere theObject, ) */
    /* Method skipped due to unknown mapping: Extrema_UBTreeOfSphere get() */
    static Macad::Occt::Extrema_HUBTreeOfSphere^ DownCast(Macad::Occt::Standard_Transient^ theOther);
}; // class Extrema_HUBTreeOfSphere

//---------------------------------------------------------------------
//  Class  Extrema_POnCurv
//---------------------------------------------------------------------
public ref class Extrema_POnCurv sealed
    : public Macad::Occt::BaseClass<::Extrema_POnCurv>
{

#ifdef Include_Extrema_POnCurv_h
public:
    Include_Extrema_POnCurv_h
#endif

public:
    Extrema_POnCurv(::Extrema_POnCurv* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_POnCurv>( nativeInstance, true )
    {}

    Extrema_POnCurv(::Extrema_POnCurv& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_POnCurv>( &nativeInstance, false )
    {}

    property ::Extrema_POnCurv* NativeInstance
    {
        ::Extrema_POnCurv* get()
        {
            return static_cast<::Extrema_POnCurv*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creation of an indefinite point on curve.
    /// </summary>
    Extrema_POnCurv();
    /// <summary>
    /// Creation of a point on curve with a parameter
    /// value on the curve and a Pnt from gp.
    /// </summary>
    Extrema_POnCurv(double U, Macad::Occt::Pnt P);
    /// <summary>
    /// sets the point and parameter values.
    /// </summary>
    void SetValues(double U, Macad::Occt::Pnt P);
    /// <summary>
    /// Returns the point.
    /// </summary>
    Macad::Occt::Pnt Value();
    /// <summary>
    /// Returns the parameter on the curve.
    /// </summary>
    double Parameter();
}; // class Extrema_POnCurv

//---------------------------------------------------------------------
//  Class  Extrema_POnCurv2d
//---------------------------------------------------------------------
public ref class Extrema_POnCurv2d sealed
    : public Macad::Occt::BaseClass<::Extrema_POnCurv2d>
{

#ifdef Include_Extrema_POnCurv2d_h
public:
    Include_Extrema_POnCurv2d_h
#endif

public:
    Extrema_POnCurv2d(::Extrema_POnCurv2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_POnCurv2d>( nativeInstance, true )
    {}

    Extrema_POnCurv2d(::Extrema_POnCurv2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_POnCurv2d>( &nativeInstance, false )
    {}

    property ::Extrema_POnCurv2d* NativeInstance
    {
        ::Extrema_POnCurv2d* get()
        {
            return static_cast<::Extrema_POnCurv2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creation of an indefinite point on curve.
    /// </summary>
    Extrema_POnCurv2d();
    /// <summary>
    /// Creation of a point on curve with a parameter
    /// value on the curve and a Pnt from gp.
    /// </summary>
    Extrema_POnCurv2d(double U, Macad::Occt::Pnt2d P);
    /// <summary>
    /// sets the point and parameter values.
    /// </summary>
    void SetValues(double U, Macad::Occt::Pnt2d P);
    /// <summary>
    /// Returns the point.
    /// </summary>
    Macad::Occt::Pnt2d Value();
    /// <summary>
    /// Returns the parameter on the curve.
    /// </summary>
    double Parameter();
}; // class Extrema_POnCurv2d

//---------------------------------------------------------------------
//  Class  Extrema_POnSurf
//---------------------------------------------------------------------
/// <summary>
/// Definition of a point on surface.
/// </summary>
public ref class Extrema_POnSurf
    : public Macad::Occt::BaseClass<::Extrema_POnSurf>
{

#ifdef Include_Extrema_POnSurf_h
public:
    Include_Extrema_POnSurf_h
#endif

protected:
    Extrema_POnSurf(InitMode init)
        : Macad::Occt::BaseClass<::Extrema_POnSurf>( init )
    {}

public:
    Extrema_POnSurf(::Extrema_POnSurf* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_POnSurf>( nativeInstance, true )
    {}

    Extrema_POnSurf(::Extrema_POnSurf& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_POnSurf>( &nativeInstance, false )
    {}

    property ::Extrema_POnSurf* NativeInstance
    {
        ::Extrema_POnSurf* get()
        {
            return static_cast<::Extrema_POnSurf*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creation of an indefinite point on surface.
    /// </summary>
    Extrema_POnSurf();
    /// <summary>
    /// Creation of a point on surface with parameter
    /// values on the surface and a Pnt from gp.
    /// </summary>
    Extrema_POnSurf(double U, double V, Macad::Occt::Pnt P);
    /// <summary>
    /// Returns the 3d point.
    /// </summary>
    Macad::Occt::Pnt Value();
    /// <summary>
    /// Sets the params of current POnSurf instance.
    /// (e.g. to the point to be projected).
    /// </summary>
    void SetParameters(double theU, double theV, Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Returns the parameter values on the surface.
    /// </summary>
    void Parameter(double% U, double% V);
}; // class Extrema_POnSurf

//---------------------------------------------------------------------
//  Class  Extrema_POnSurfParams
//---------------------------------------------------------------------
/// <summary>
/// Data container for point on surface parameters. These parameters
/// are required to compute an initial approximation for extrema
/// computation.
/// </summary>
public ref class Extrema_POnSurfParams sealed
    : public Macad::Occt::Extrema_POnSurf
{

#ifdef Include_Extrema_POnSurfParams_h
public:
    Include_Extrema_POnSurfParams_h
#endif

public:
    Extrema_POnSurfParams(::Extrema_POnSurfParams* nativeInstance)
        : Macad::Occt::Extrema_POnSurf( nativeInstance )
    {}

    Extrema_POnSurfParams(::Extrema_POnSurfParams& nativeInstance)
        : Macad::Occt::Extrema_POnSurf( nativeInstance )
    {}

    property ::Extrema_POnSurfParams* NativeInstance
    {
        ::Extrema_POnSurfParams* get()
        {
            return static_cast<::Extrema_POnSurfParams*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// empty constructor
    /// </summary>
    Extrema_POnSurfParams();
    /// <summary>
    /// Creation of a point on surface with parameter
    /// values on the surface and a Pnt from gp.
    /// </summary>
    Extrema_POnSurfParams(double theU, double theV, Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Sets the square distance from this point to another one
    /// (e.g. to the point to be projected).
    /// </summary>
    void SetSqrDistance(double theSqrDistance);
    /// <summary>
    /// Query the square distance from this point to another one.
    /// </summary>
    double GetSqrDistance();
    /// <summary>
    /// Sets the element type on which this point is situated.
    /// </summary>
    void SetElementType(Macad::Occt::Extrema_ElementType theElementType);
    /// <summary>
    /// Query the element type on which this point is situated.
    /// </summary>
    Macad::Occt::Extrema_ElementType GetElementType();
    /// <summary>
    /// Sets the U and V indices of an element that contains
    /// this point.
    /// </summary>
    void SetIndices(int theIndexU, int theIndexV);
    /// <summary>
    /// Query the U and V indices of an element that contains
    /// this point.
    /// </summary>
    void GetIndices(int% theIndexU, int% theIndexV);
}; // class Extrema_POnSurfParams

//---------------------------------------------------------------------
//  Class  Extrema_CurveTool
//---------------------------------------------------------------------
public ref class Extrema_CurveTool sealed
    : public Macad::Occt::BaseClass<::Extrema_CurveTool>
{

#ifdef Include_Extrema_CurveTool_h
public:
    Include_Extrema_CurveTool_h
#endif

public:
    Extrema_CurveTool(::Extrema_CurveTool* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_CurveTool>( nativeInstance, true )
    {}

    Extrema_CurveTool(::Extrema_CurveTool& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_CurveTool>( &nativeInstance, false )
    {}

    property ::Extrema_CurveTool* NativeInstance
    {
        ::Extrema_CurveTool* get()
        {
            return static_cast<::Extrema_CurveTool*>(_NativeInstance);
        }
    }

public:
    Extrema_CurveTool();
    static double FirstParameter(Macad::Occt::Adaptor3d_Curve^ C);
    static double LastParameter(Macad::Occt::Adaptor3d_Curve^ C);
    static Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// Returns  the number  of  intervals for  continuity
    /// <S>. May be one if Continuity(me) >= <S>
    /// </summary>
    static int NbIntervals(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the  parameters bounding the intervals
    /// of continuity <S>.
    /// 
    /// The array must provide  enough room to  accommodate
    /// for the parameters. i.e. T.Length() > NbIntervals()
    /// </summary>
    static void Intervals(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the parameters bounding the intervals of subdivision of curve
    /// according to Curvature deflection. Value of deflection is defined in method.
    /// 
    /// </summary>
    static Macad::Occt::TColStd_HArray1OfReal^ DeflCurvIntervals(Macad::Occt::Adaptor3d_Curve^ C);
    static bool IsPeriodic(Macad::Occt::Adaptor3d_Curve^ C);
    static double Period(Macad::Occt::Adaptor3d_Curve^ C);
    static double Resolution(Macad::Occt::Adaptor3d_Curve^ C, double R3d);
    static Macad::Occt::GeomAbs_CurveType GetCurveType(Macad::Occt::Adaptor3d_Curve^ C);
    static Macad::Occt::Pnt Value(Macad::Occt::Adaptor3d_Curve^ C, double U);
    static void D0(Macad::Occt::Adaptor3d_Curve^ C, double U, Macad::Occt::Pnt% P);
    static void D1(Macad::Occt::Adaptor3d_Curve^ C, double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V);
    static void D2(Macad::Occt::Adaptor3d_Curve^ C, double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    static void D3(Macad::Occt::Adaptor3d_Curve^ C, double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    static Macad::Occt::Vec DN(Macad::Occt::Adaptor3d_Curve^ C, double U, int N);
    static Macad::Occt::gp_Lin^ Line(Macad::Occt::Adaptor3d_Curve^ C);
    static Macad::Occt::gp_Circ^ Circle(Macad::Occt::Adaptor3d_Curve^ C);
    static Macad::Occt::gp_Elips^ Ellipse(Macad::Occt::Adaptor3d_Curve^ C);
    static Macad::Occt::gp_Hypr^ Hyperbola(Macad::Occt::Adaptor3d_Curve^ C);
    static Macad::Occt::gp_Parab^ Parabola(Macad::Occt::Adaptor3d_Curve^ C);
    static int Degree(Macad::Occt::Adaptor3d_Curve^ C);
    static bool IsRational(Macad::Occt::Adaptor3d_Curve^ C);
    static int NbPoles(Macad::Occt::Adaptor3d_Curve^ C);
    static int NbKnots(Macad::Occt::Adaptor3d_Curve^ C);
    static Macad::Occt::Geom_BezierCurve^ Bezier(Macad::Occt::Adaptor3d_Curve^ C);
    static Macad::Occt::Geom_BSplineCurve^ BSpline(Macad::Occt::Adaptor3d_Curve^ C);
}; // class Extrema_CurveTool

//---------------------------------------------------------------------
//  Class  Extrema_Curve2dTool
//---------------------------------------------------------------------
public ref class Extrema_Curve2dTool sealed
    : public Macad::Occt::BaseClass<::Extrema_Curve2dTool>
{

#ifdef Include_Extrema_Curve2dTool_h
public:
    Include_Extrema_Curve2dTool_h
#endif

public:
    Extrema_Curve2dTool(::Extrema_Curve2dTool* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Curve2dTool>( nativeInstance, true )
    {}

    Extrema_Curve2dTool(::Extrema_Curve2dTool& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_Curve2dTool>( &nativeInstance, false )
    {}

    property ::Extrema_Curve2dTool* NativeInstance
    {
        ::Extrema_Curve2dTool* get()
        {
            return static_cast<::Extrema_Curve2dTool*>(_NativeInstance);
        }
    }

public:
    Extrema_Curve2dTool();
    static double FirstParameter(Macad::Occt::Adaptor2d_Curve2d^ C);
    static double LastParameter(Macad::Occt::Adaptor2d_Curve2d^ C);
    static Macad::Occt::GeomAbs_Shape Continuity(Macad::Occt::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// If necessary,   breaks the curve  in  intervals of
    /// continuity <S>.     And   returns  the  number  of
    /// intervals.
    /// </summary>
    static int NbIntervals(Macad::Occt::Adaptor2d_Curve2d^ C, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the  parameters bounding the intervals
    /// of continuity <S>.
    /// </summary>
    static void Intervals(Macad::Occt::Adaptor2d_Curve2d^ C, Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the parameters bounding the intervals of subdivision of curve
    /// according to Curvature deflection. Value of deflection is defined in method.
    /// 
    /// </summary>
    static Macad::Occt::TColStd_HArray1OfReal^ DeflCurvIntervals(Macad::Occt::Adaptor2d_Curve2d^ C);
    static bool IsClosed(Macad::Occt::Adaptor2d_Curve2d^ C);
    static bool IsPeriodic(Macad::Occt::Adaptor2d_Curve2d^ C);
    static double Period(Macad::Occt::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    static Macad::Occt::Pnt2d Value(Macad::Occt::Adaptor2d_Curve2d^ C, double U);
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    static void D0(Macad::Occt::Adaptor2d_Curve2d^ C, double U, Macad::Occt::Pnt2d% P);
    /// <summary>
    /// Computes the point of parameter U on the curve with its
    /// first derivative.
    /// </summary>
    static void D1(Macad::Occt::Adaptor2d_Curve2d^ C, double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// </summary>
    static void D2(Macad::Occt::Adaptor2d_Curve2d^ C, double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
    /// <summary>
    /// Returns the point P of parameter U, the first, the second
    /// and the third derivative.
    /// </summary>
    static void D3(Macad::Occt::Adaptor2d_Curve2d^ C, double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// </summary>
    static Macad::Occt::Vec2d DN(Macad::Occt::Adaptor2d_Curve2d^ C, double U, int N);
    /// <summary>
    /// Returns the parametric  resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    static double Resolution(Macad::Occt::Adaptor2d_Curve2d^ C, double R3d);
    /// <summary>
    /// Returns  the  type of the   curve  in the  current
    /// interval :   Line,   Circle,   Ellipse, Hyperbola,
    /// Parabola, BezierCurve, BSplineCurve, OtherCurve.
    /// </summary>
    static Macad::Occt::GeomAbs_CurveType GetCurveType(Macad::Occt::Adaptor2d_Curve2d^ C);
    static Macad::Occt::gp_Lin2d^ Line(Macad::Occt::Adaptor2d_Curve2d^ C);
    static Macad::Occt::gp_Circ2d^ Circle(Macad::Occt::Adaptor2d_Curve2d^ C);
    static Macad::Occt::gp_Elips2d^ Ellipse(Macad::Occt::Adaptor2d_Curve2d^ C);
    static Macad::Occt::gp_Hypr2d^ Hyperbola(Macad::Occt::Adaptor2d_Curve2d^ C);
    static Macad::Occt::gp_Parab2d^ Parabola(Macad::Occt::Adaptor2d_Curve2d^ C);
    static int Degree(Macad::Occt::Adaptor2d_Curve2d^ C);
    static bool IsRational(Macad::Occt::Adaptor2d_Curve2d^ C);
    static int NbPoles(Macad::Occt::Adaptor2d_Curve2d^ C);
    static int NbKnots(Macad::Occt::Adaptor2d_Curve2d^ C);
    static Macad::Occt::Geom2d_BezierCurve^ Bezier(Macad::Occt::Adaptor2d_Curve2d^ C);
    static Macad::Occt::Geom2d_BSplineCurve^ BSpline(Macad::Occt::Adaptor2d_Curve2d^ C);
}; // class Extrema_Curve2dTool

//---------------------------------------------------------------------
//  Class  Extrema_ECC
//---------------------------------------------------------------------
public ref class Extrema_ECC sealed
    : public Macad::Occt::BaseClass<::Extrema_ECC>
{

#ifdef Include_Extrema_ECC_h
public:
    Include_Extrema_ECC_h
#endif

public:
    Extrema_ECC(::Extrema_ECC* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ECC>( nativeInstance, true )
    {}

    Extrema_ECC(::Extrema_ECC& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ECC>( &nativeInstance, false )
    {}

    property ::Extrema_ECC* NativeInstance
    {
        ::Extrema_ECC* get()
        {
            return static_cast<::Extrema_ECC*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Calculates all the distances as above
    /// between Uinf and Usup for C1 and  between Vinf and Vsup
    /// for C2.
    /// </summary>
    Extrema_ECC();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u,v)=distance(C1(u),C2(v)) has an
    /// extremum when gradient(f)=0. The algorithm uses
    /// Evtushenko's global optimization solver.
    /// </summary>
    Extrema_ECC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2);
    /// <summary>
    /// Calculates all the distances as above
    /// between Uinf and Usup for C1 and  between Vinf and Vsup
    /// for C2.
    /// </summary>
    Extrema_ECC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double Uinf, double Usup, double Vinf, double Vsup);
    /// <summary>
    /// Set params in case of empty constructor is usage.
    /// </summary>
    void SetParams(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double Uinf, double Usup, double Vinf, double Vsup);
    void SetTolerance(double Tol);
    /// <summary>
    /// Set flag for single extrema computation. Works on parametric solver only.
    /// </summary>
    void SetSingleSolutionFlag(bool theSingleSolutionFlag);
    /// <summary>
    /// Get flag for single extrema computation. Works on parametric solver only.
    /// </summary>
    bool GetSingleSolutionFlag();
    /// <summary>
    /// Performs calculations.
    /// </summary>
    void Perform();
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns state of myParallel flag.
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth square extremum distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the value of the Nth square extremum distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the points of the Nth extremum distance.
    /// P1 is on the first curve, P2 on the second one.
    /// </summary>
    void Points(int N, Macad::Occt::Extrema_POnCurv^ P1, Macad::Occt::Extrema_POnCurv^ P2);
}; // class Extrema_ECC

//---------------------------------------------------------------------
//  Class  Extrema_ECC2d
//---------------------------------------------------------------------
public ref class Extrema_ECC2d sealed
    : public Macad::Occt::BaseClass<::Extrema_ECC2d>
{

#ifdef Include_Extrema_ECC2d_h
public:
    Include_Extrema_ECC2d_h
#endif

public:
    Extrema_ECC2d(::Extrema_ECC2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ECC2d>( nativeInstance, true )
    {}

    Extrema_ECC2d(::Extrema_ECC2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ECC2d>( &nativeInstance, false )
    {}

    property ::Extrema_ECC2d* NativeInstance
    {
        ::Extrema_ECC2d* get()
        {
            return static_cast<::Extrema_ECC2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Calculates all the distances as above
    /// between Uinf and Usup for C1 and  between Vinf and Vsup
    /// for C2.
    /// </summary>
    Extrema_ECC2d();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u,v)=distance(C1(u),C2(v)) has an
    /// extremum when gradient(f)=0. The algorithm uses
    /// Evtushenko's global optimization solver.
    /// </summary>
    Extrema_ECC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2);
    /// <summary>
    /// Calculates all the distances as above
    /// between Uinf and Usup for C1 and  between Vinf and Vsup
    /// for C2.
    /// </summary>
    Extrema_ECC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double Uinf, double Usup, double Vinf, double Vsup);
    /// <summary>
    /// Set params in case of empty constructor is usage.
    /// </summary>
    void SetParams(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double Uinf, double Usup, double Vinf, double Vsup);
    void SetTolerance(double Tol);
    /// <summary>
    /// Set flag for single extrema computation. Works on parametric solver only.
    /// </summary>
    void SetSingleSolutionFlag(bool theSingleSolutionFlag);
    /// <summary>
    /// Get flag for single extrema computation. Works on parametric solver only.
    /// </summary>
    bool GetSingleSolutionFlag();
    /// <summary>
    /// Performs calculations.
    /// </summary>
    void Perform();
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns state of myParallel flag.
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth square extremum distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the value of the Nth square extremum distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the points of the Nth extremum distance.
    /// P1 is on the first curve, P2 on the second one.
    /// </summary>
    void Points(int N, Macad::Occt::Extrema_POnCurv2d^ P1, Macad::Occt::Extrema_POnCurv2d^ P2);
}; // class Extrema_ECC2d

//---------------------------------------------------------------------
//  Class  Extrema_ExtPElC
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the distances between a point
/// and an elementary curve.
/// These distances can be minimum or maximum.
/// </summary>
public ref class Extrema_ExtPElC sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtPElC>
{

#ifdef Include_Extrema_ExtPElC_h
public:
    Include_Extrema_ExtPElC_h
#endif

public:
    Extrema_ExtPElC(::Extrema_ExtPElC* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtPElC>( nativeInstance, true )
    {}

    Extrema_ExtPElC(::Extrema_ExtPElC& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtPElC>( &nativeInstance, false )
    {}

    property ::Extrema_ExtPElC* NativeInstance
    {
        ::Extrema_ExtPElC* get()
        {
            return static_cast<::Extrema_ExtPElC*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtPElC();
    /// <summary>
    /// Calculates the extremum distance between the
    /// point P and the segment [Uinf,Usup] of the line C.
    /// </summary>
    Extrema_ExtPElC(Macad::Occt::Pnt P, Macad::Occt::gp_Lin^ C, double Tol, double Uinf, double Usup);
    /// <summary>
    /// Calculates the 2 extremum distances between the
    /// point P and the segment [Uinf,Usup] of the circle C.
    /// Tol is used to determine
    /// if P is on the axis of the circle or
    /// if an extremum is on an endpoint of the segment.
    /// If P is on the axis of the circle,
    /// there are infinite solution then IsDone(me)=False.
    /// The conditions on the Uinf and Usup are:
    /// 0. <= Uinf <= 2.*PI and Usup > Uinf.
    /// If Usup > Uinf + 2.*PI, then only the solutions in
    /// the range [Uinf,Uinf+2.*PI[ are computed.
    /// </summary>
    Extrema_ExtPElC(Macad::Occt::Pnt P, Macad::Occt::gp_Circ^ C, double Tol, double Uinf, double Usup);
    /// <summary>
    /// Calculates the 4 extremum distances between the
    /// point P and the segment [Uinf,Usup] of the ellipse C.
    /// Tol is used to determine
    /// if the point is on the axis of the ellipse and
    /// if the major radius is equal to the minor radius or
    /// if an extremum is on an endpoint of the segment.
    /// If P is on the axis of the ellipse,
    /// there are infinite solution then IsDone(me)=False.
    /// The conditions on the Uinf and Usup are:
    /// 0. <= Uinf <= 2.*PI and Usup > Uinf.
    /// If Usup > Uinf + 2.*PI, then only the solutions in
    /// the range [Uinf,Uinf+2.*PI[ are computed.
    /// </summary>
    Extrema_ExtPElC(Macad::Occt::Pnt P, Macad::Occt::gp_Elips^ C, double Tol, double Uinf, double Usup);
    /// <summary>
    /// Calculates the extremum distances between the
    /// point P and the segment [Uinf,Usup] of the hyperbola
    /// C.
    /// Tol is used to determine if two solutions u and v
    /// are identical; the condition is:
    /// dist(C(u),C(v)) < Tol.
    /// </summary>
    Extrema_ExtPElC(Macad::Occt::Pnt P, Macad::Occt::gp_Hypr^ C, double Tol, double Uinf, double Usup);
    /// <summary>
    /// Calculates the 4 extremum distances between the
    /// point P and the segment [Uinf,Usup] of the parabola
    /// C.
    /// Tol is used to determine if two solutions u and v
    /// are identical; the condition is:
    /// dist(C(u),C(v)) < Tol.
    /// </summary>
    Extrema_ExtPElC(Macad::Occt::Pnt P, Macad::Occt::gp_Parab^ C, double Tol, double Uinf, double Usup);
    void Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Lin^ C, double Tol, double Uinf, double Usup);
    void Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Circ^ C, double Tol, double Uinf, double Usup);
    void Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Elips^ C, double Tol, double Uinf, double Usup);
    void Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Hypr^ C, double Tol, double Uinf, double Usup);
    void Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Parab^ C, double Tol, double Uinf, double Usup);
    /// <summary>
    /// True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns True if the Nth extremum distance is a
    /// minimum.
    /// </summary>
    bool IsMin(int N);
    /// <summary>
    /// Returns the point of the Nth extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv^ Point(int N);
}; // class Extrema_ExtPElC

//---------------------------------------------------------------------
//  Class  Extrema_EPCOfELPCOfLocateExtPC
//---------------------------------------------------------------------
public ref class Extrema_EPCOfELPCOfLocateExtPC sealed
    : public Macad::Occt::BaseClass<::Extrema_EPCOfELPCOfLocateExtPC>
{

#ifdef Include_Extrema_EPCOfELPCOfLocateExtPC_h
public:
    Include_Extrema_EPCOfELPCOfLocateExtPC_h
#endif

public:
    Extrema_EPCOfELPCOfLocateExtPC(::Extrema_EPCOfELPCOfLocateExtPC* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_EPCOfELPCOfLocateExtPC>( nativeInstance, true )
    {}

    Extrema_EPCOfELPCOfLocateExtPC(::Extrema_EPCOfELPCOfLocateExtPC& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_EPCOfELPCOfLocateExtPC>( &nativeInstance, false )
    {}

    property ::Extrema_EPCOfELPCOfLocateExtPC* NativeInstance
    {
        ::Extrema_EPCOfELPCOfLocateExtPC* get()
        {
            return static_cast<::Extrema_EPCOfELPCOfLocateExtPC*>(_NativeInstance);
        }
    }

public:
    Extrema_EPCOfELPCOfLocateExtPC();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// NbU is used to locate the close points to
    /// find the zeros.
    /// Tol and TolU are used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// abs(Un-Un-1) < TolU and abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_EPCOfELPCOfLocateExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, int NbU, double TolU, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// NbU is used to locate the close points to
    /// find the zeros.
    /// Zeros are searched between umin and usup.
    /// Tol and TolU are used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// abs(Un-Un-1) < TolU and abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_EPCOfELPCOfLocateExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, int NbU, double Umin, double Usup, double TolU, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C, int NbU, double TolU, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C, int NbU, double Umin, double Usup, double TolU, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(int NbU, double Umin, double Usup, double TolU, double TolF);
    /// <summary>
    /// the algorithm is done with the point P.
    /// An exception is raised if the fields have not
    /// been initialized.
    /// </summary>
    void Perform(Macad::Occt::Pnt P);
    /// <summary>
    /// True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns True if the Nth extremum distance is a
    /// minimum.
    /// </summary>
    bool IsMin(int N);
    /// <summary>
    /// Returns the point of the Nth extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv^ Point(int N);
}; // class Extrema_EPCOfELPCOfLocateExtPC

//---------------------------------------------------------------------
//  Class  Extrema_ELPCOfLocateExtPC
//---------------------------------------------------------------------
public ref class Extrema_ELPCOfLocateExtPC sealed
    : public Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC>
{

#ifdef Include_Extrema_ELPCOfLocateExtPC_h
public:
    Include_Extrema_ELPCOfLocateExtPC_h
#endif

public:
    Extrema_ELPCOfLocateExtPC(::Extrema_ELPCOfLocateExtPC* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC>( nativeInstance, true )
    {}

    Extrema_ELPCOfLocateExtPC(::Extrema_ELPCOfLocateExtPC& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC>( &nativeInstance, false )
    {}

    property ::Extrema_ELPCOfLocateExtPC* NativeInstance
    {
        ::Extrema_ELPCOfLocateExtPC* get()
        {
            return static_cast<::Extrema_ELPCOfLocateExtPC*>(_NativeInstance);
        }
    }

public:
    Extrema_ELPCOfLocateExtPC();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Zeros are searched between uinf and usup.
    /// Tol  is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ELPCOfLocateExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Zeros are searched between uinf and usup.
    /// Tol  is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ELPCOfLocateExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Tol is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ELPCOfLocateExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Tol is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ELPCOfLocateExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// initializes the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF);
    /// <summary>
    /// initializes the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup);
    /// <summary>
    /// An exception is raised if the fields have not been
    /// initialized.
    /// </summary>
    void Perform(Macad::Occt::Pnt P);
    /// <summary>
    /// True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the <N>th extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns True if the <N>th extremum distance is a
    /// minimum.
    /// </summary>
    bool IsMin(int N);
    /// <summary>
    /// Returns the point of the <N>th extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv^ Point(int N);
    /// <summary>
    /// if the curve is a trimmed curve,
    /// dist1 is a square distance between <P> and the point
    /// of parameter FirstParameter <P1> and
    /// dist2 is a square distance between <P> and the point
    /// of parameter LastParameter <P2>.
    /// </summary>
    void TrimmedSquareDistances(double% dist1, double% dist2, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
}; // class Extrema_ELPCOfLocateExtPC

//---------------------------------------------------------------------
//  Class  Extrema_ExtPElC2d
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the distances between a point
/// and an elementary curve.
/// These distances can be minimum or maximum.
/// </summary>
public ref class Extrema_ExtPElC2d sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtPElC2d>
{

#ifdef Include_Extrema_ExtPElC2d_h
public:
    Include_Extrema_ExtPElC2d_h
#endif

public:
    Extrema_ExtPElC2d(::Extrema_ExtPElC2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtPElC2d>( nativeInstance, true )
    {}

    Extrema_ExtPElC2d(::Extrema_ExtPElC2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtPElC2d>( &nativeInstance, false )
    {}

    property ::Extrema_ExtPElC2d* NativeInstance
    {
        ::Extrema_ExtPElC2d* get()
        {
            return static_cast<::Extrema_ExtPElC2d*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtPElC2d();
    /// <summary>
    /// Calculates the extremum distance between the
    /// point P and the segment [Uinf,Usup] of the line L.
    /// </summary>
    Extrema_ExtPElC2d(Macad::Occt::Pnt2d P, Macad::Occt::gp_Lin2d^ C, double Tol, double Uinf, double Usup);
    /// <summary>
    /// Calculates the 2 extremum distances between the
    /// point P and the segment [Uinf,Usup] of the circle C.
    /// Tol is used to determine
    /// if P is on the axis of the circle or
    /// if an extremum is on an endpoint of the segment.
    /// If P is on the axis of the circle,
    /// there are infinite solution then IsDone(me)=False.
    /// The conditions on the Uinf and Usup are:
    /// 0. <= Uinf <= 2.*PI and Usup > Uinf.
    /// If Usup > Uinf + 2.*PI, then only the solutions in
    /// the range [Uinf,Uinf+2.*PI[ are computed.
    /// </summary>
    Extrema_ExtPElC2d(Macad::Occt::Pnt2d P, Macad::Occt::gp_Circ2d^ C, double Tol, double Uinf, double Usup);
    /// <summary>
    /// Calculates the 4 extremum distances between the
    /// point P and the segment [Uinf,Usup] of the ellipse C.
    /// Tol is used to determine
    /// if the point is on the axis of the ellipse and
    /// if the major radius is equal to the minor radius or
    /// if an extremum is on an endpoint of the segment.
    /// If P is on the axis of the ellipse,
    /// there are infinite solution then IsDone(me)=False.
    /// The conditions on the Uinf and Usup are:
    /// 0. <= Uinf <= 2.*PI and Usup > Uinf.
    /// If Usup > Uinf + 2.*PI, then only the solutions in
    /// the range [Uinf,Uinf+2.*PI[ are computed.
    /// </summary>
    Extrema_ExtPElC2d(Macad::Occt::Pnt2d P, Macad::Occt::gp_Elips2d^ C, double Tol, double Uinf, double Usup);
    /// <summary>
    /// Calculates the extremum distances between the
    /// point P and the segment [Uinf,Usup] of the hyperbola
    /// C.
    /// Tol is used to determine if two solutions u and v
    /// are identical; the condition is:
    /// dist(C(u),C(v)) < Tol.
    /// </summary>
    Extrema_ExtPElC2d(Macad::Occt::Pnt2d P, Macad::Occt::gp_Hypr2d^ C, double Tol, double Uinf, double Usup);
    /// <summary>
    /// Calculates the 4 extremum distances between the
    /// point P and the segment [Uinf,Usup] of the parabola
    /// C.
    /// Tol is used to determine if two solutions u and v
    /// are identical; the condition is:
    /// dist(C(u),C(v)) < Tol.
    /// </summary>
    Extrema_ExtPElC2d(Macad::Occt::Pnt2d P, Macad::Occt::gp_Parab2d^ C, double Tol, double Uinf, double Usup);
    void Perform(Macad::Occt::Pnt2d P, Macad::Occt::gp_Lin2d^ L, double Tol, double Uinf, double Usup);
    void Perform(Macad::Occt::Pnt2d P, Macad::Occt::gp_Circ2d^ C, double Tol, double Uinf, double Usup);
    void Perform(Macad::Occt::Pnt2d P, Macad::Occt::gp_Elips2d^ C, double Tol, double Uinf, double Usup);
    void Perform(Macad::Occt::Pnt2d P, Macad::Occt::gp_Hypr2d^ C, double Tol, double Uinf, double Usup);
    void Perform(Macad::Occt::Pnt2d P, Macad::Occt::gp_Parab2d^ C, double Tol, double Uinf, double Usup);
    /// <summary>
    /// True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns True if the Nth extremum distance is a
    /// minimum.
    /// </summary>
    bool IsMin(int N);
    /// <summary>
    /// Returns the point of the Nth extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv2d^ Point(int N);
}; // class Extrema_ExtPElC2d

//---------------------------------------------------------------------
//  Class  Extrema_EPCOfELPCOfLocateExtPC2d
//---------------------------------------------------------------------
public ref class Extrema_EPCOfELPCOfLocateExtPC2d sealed
    : public Macad::Occt::BaseClass<::Extrema_EPCOfELPCOfLocateExtPC2d>
{

#ifdef Include_Extrema_EPCOfELPCOfLocateExtPC2d_h
public:
    Include_Extrema_EPCOfELPCOfLocateExtPC2d_h
#endif

public:
    Extrema_EPCOfELPCOfLocateExtPC2d(::Extrema_EPCOfELPCOfLocateExtPC2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_EPCOfELPCOfLocateExtPC2d>( nativeInstance, true )
    {}

    Extrema_EPCOfELPCOfLocateExtPC2d(::Extrema_EPCOfELPCOfLocateExtPC2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_EPCOfELPCOfLocateExtPC2d>( &nativeInstance, false )
    {}

    property ::Extrema_EPCOfELPCOfLocateExtPC2d* NativeInstance
    {
        ::Extrema_EPCOfELPCOfLocateExtPC2d* get()
        {
            return static_cast<::Extrema_EPCOfELPCOfLocateExtPC2d*>(_NativeInstance);
        }
    }

public:
    Extrema_EPCOfELPCOfLocateExtPC2d();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// NbU is used to locate the close points to
    /// find the zeros.
    /// Tol and TolU are used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// abs(Un-Un-1) < TolU and abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_EPCOfELPCOfLocateExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, int NbU, double TolU, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// NbU is used to locate the close points to
    /// find the zeros.
    /// Zeros are searched between umin and usup.
    /// Tol and TolU are used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// abs(Un-Un-1) < TolU and abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_EPCOfELPCOfLocateExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, int NbU, double Umin, double Usup, double TolU, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C, int NbU, double TolU, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C, int NbU, double Umin, double Usup, double TolU, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(int NbU, double Umin, double Usup, double TolU, double TolF);
    /// <summary>
    /// the algorithm is done with the point P.
    /// An exception is raised if the fields have not
    /// been initialized.
    /// </summary>
    void Perform(Macad::Occt::Pnt2d P);
    /// <summary>
    /// True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns True if the Nth extremum distance is a
    /// minimum.
    /// </summary>
    bool IsMin(int N);
    /// <summary>
    /// Returns the point of the Nth extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv2d^ Point(int N);
}; // class Extrema_EPCOfELPCOfLocateExtPC2d

//---------------------------------------------------------------------
//  Class  Extrema_ELPCOfLocateExtPC2d
//---------------------------------------------------------------------
public ref class Extrema_ELPCOfLocateExtPC2d sealed
    : public Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC2d>
{

#ifdef Include_Extrema_ELPCOfLocateExtPC2d_h
public:
    Include_Extrema_ELPCOfLocateExtPC2d_h
#endif

public:
    Extrema_ELPCOfLocateExtPC2d(::Extrema_ELPCOfLocateExtPC2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC2d>( nativeInstance, true )
    {}

    Extrema_ELPCOfLocateExtPC2d(::Extrema_ELPCOfLocateExtPC2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ELPCOfLocateExtPC2d>( &nativeInstance, false )
    {}

    property ::Extrema_ELPCOfLocateExtPC2d* NativeInstance
    {
        ::Extrema_ELPCOfLocateExtPC2d* get()
        {
            return static_cast<::Extrema_ELPCOfLocateExtPC2d*>(_NativeInstance);
        }
    }

public:
    Extrema_ELPCOfLocateExtPC2d();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Zeros are searched between uinf and usup.
    /// Tol  is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ELPCOfLocateExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, double Uinf, double Usup, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Zeros are searched between uinf and usup.
    /// Tol  is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ELPCOfLocateExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, double Uinf, double Usup);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Tol is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ELPCOfLocateExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Tol is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ELPCOfLocateExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// initializes the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C, double Uinf, double Usup, double TolF);
    /// <summary>
    /// initializes the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C, double Uinf, double Usup);
    /// <summary>
    /// An exception is raised if the fields have not been
    /// initialized.
    /// </summary>
    void Perform(Macad::Occt::Pnt2d P);
    /// <summary>
    /// True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the <N>th extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns True if the <N>th extremum distance is a
    /// minimum.
    /// </summary>
    bool IsMin(int N);
    /// <summary>
    /// Returns the point of the <N>th extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv2d^ Point(int N);
    /// <summary>
    /// if the curve is a trimmed curve,
    /// dist1 is a square distance between <P> and the point
    /// of parameter FirstParameter <P1> and
    /// dist2 is a square distance between <P> and the point
    /// of parameter LastParameter <P2>.
    /// </summary>
    void TrimmedSquareDistances(double% dist1, double% dist2, Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2);
}; // class Extrema_ELPCOfLocateExtPC2d

//---------------------------------------------------------------------
//  Class  Extrema_EPCOfExtPC
//---------------------------------------------------------------------
public ref class Extrema_EPCOfExtPC sealed
    : public Macad::Occt::BaseClass<::Extrema_EPCOfExtPC>
{

#ifdef Include_Extrema_EPCOfExtPC_h
public:
    Include_Extrema_EPCOfExtPC_h
#endif

public:
    Extrema_EPCOfExtPC(::Extrema_EPCOfExtPC* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_EPCOfExtPC>( nativeInstance, true )
    {}

    Extrema_EPCOfExtPC(::Extrema_EPCOfExtPC& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_EPCOfExtPC>( &nativeInstance, false )
    {}

    property ::Extrema_EPCOfExtPC* NativeInstance
    {
        ::Extrema_EPCOfExtPC* get()
        {
            return static_cast<::Extrema_EPCOfExtPC*>(_NativeInstance);
        }
    }

public:
    Extrema_EPCOfExtPC();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// NbU is used to locate the close points to
    /// find the zeros.
    /// Tol and TolU are used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// abs(Un-Un-1) < TolU and abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_EPCOfExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, int NbU, double TolU, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// NbU is used to locate the close points to
    /// find the zeros.
    /// Zeros are searched between umin and usup.
    /// Tol and TolU are used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// abs(Un-Un-1) < TolU and abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_EPCOfExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, int NbU, double Umin, double Usup, double TolU, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C, int NbU, double TolU, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C, int NbU, double Umin, double Usup, double TolU, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(int NbU, double Umin, double Usup, double TolU, double TolF);
    /// <summary>
    /// the algorithm is done with the point P.
    /// An exception is raised if the fields have not
    /// been initialized.
    /// </summary>
    void Perform(Macad::Occt::Pnt P);
    /// <summary>
    /// True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns True if the Nth extremum distance is a
    /// minimum.
    /// </summary>
    bool IsMin(int N);
    /// <summary>
    /// Returns the point of the Nth extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv^ Point(int N);
}; // class Extrema_EPCOfExtPC

//---------------------------------------------------------------------
//  Class  Extrema_EPCOfExtPC2d
//---------------------------------------------------------------------
public ref class Extrema_EPCOfExtPC2d sealed
    : public Macad::Occt::BaseClass<::Extrema_EPCOfExtPC2d>
{

#ifdef Include_Extrema_EPCOfExtPC2d_h
public:
    Include_Extrema_EPCOfExtPC2d_h
#endif

public:
    Extrema_EPCOfExtPC2d(::Extrema_EPCOfExtPC2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_EPCOfExtPC2d>( nativeInstance, true )
    {}

    Extrema_EPCOfExtPC2d(::Extrema_EPCOfExtPC2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_EPCOfExtPC2d>( &nativeInstance, false )
    {}

    property ::Extrema_EPCOfExtPC2d* NativeInstance
    {
        ::Extrema_EPCOfExtPC2d* get()
        {
            return static_cast<::Extrema_EPCOfExtPC2d*>(_NativeInstance);
        }
    }

public:
    Extrema_EPCOfExtPC2d();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// NbU is used to locate the close points to
    /// find the zeros.
    /// Tol and TolU are used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// abs(Un-Un-1) < TolU and abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_EPCOfExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, int NbU, double TolU, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// NbU is used to locate the close points to
    /// find the zeros.
    /// Zeros are searched between umin and usup.
    /// Tol and TolU are used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// abs(Un-Un-1) < TolU and abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_EPCOfExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, int NbU, double Umin, double Usup, double TolU, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C, int NbU, double TolU, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C, int NbU, double Umin, double Usup, double TolU, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(int NbU, double Umin, double Usup, double TolU, double TolF);
    /// <summary>
    /// the algorithm is done with the point P.
    /// An exception is raised if the fields have not
    /// been initialized.
    /// </summary>
    void Perform(Macad::Occt::Pnt2d P);
    /// <summary>
    /// True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns True if the Nth extremum distance is a
    /// minimum.
    /// </summary>
    bool IsMin(int N);
    /// <summary>
    /// Returns the point of the Nth extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv2d^ Point(int N);
}; // class Extrema_EPCOfExtPC2d

//---------------------------------------------------------------------
//  Class  Extrema_ExtElC
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the distance between two elementary
/// curves.
/// These distances can be maximum or minimum.
/// </summary>
public ref class Extrema_ExtElC sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtElC>
{

#ifdef Include_Extrema_ExtElC_h
public:
    Include_Extrema_ExtElC_h
#endif

public:
    Extrema_ExtElC(::Extrema_ExtElC* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtElC>( nativeInstance, true )
    {}

    Extrema_ExtElC(::Extrema_ExtElC& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtElC>( &nativeInstance, false )
    {}

    property ::Extrema_ExtElC* NativeInstance
    {
        ::Extrema_ExtElC* get()
        {
            return static_cast<::Extrema_ExtElC*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtElC();
    /// <summary>
    /// Calculates the distance between two lines.
    /// AngTol is used to test if the lines are parallel:
    /// Angle(C1,C2) < AngTol.
    /// </summary>
    Extrema_ExtElC(Macad::Occt::gp_Lin^ C1, Macad::Occt::gp_Lin^ C2, double AngTol);
    /// <summary>
    /// Calculates the distance between a line and a
    /// circle.
    /// </summary>
    Extrema_ExtElC(Macad::Occt::gp_Lin^ C1, Macad::Occt::gp_Circ^ C2, double Tol);
    /// <summary>
    /// Calculates the distance between a line and an
    /// ellipse.
    /// </summary>
    Extrema_ExtElC(Macad::Occt::gp_Lin^ C1, Macad::Occt::gp_Elips^ C2);
    /// <summary>
    /// Calculates the distance between a line and a
    /// hyperbola.
    /// </summary>
    Extrema_ExtElC(Macad::Occt::gp_Lin^ C1, Macad::Occt::gp_Hypr^ C2);
    /// <summary>
    /// Calculates the distance between a line and a
    /// parabola.
    /// </summary>
    Extrema_ExtElC(Macad::Occt::gp_Lin^ C1, Macad::Occt::gp_Parab^ C2);
    /// <summary>
    /// Calculates the distance between two circles.
    /// The circles can be parallel or identical.
    /// </summary>
    Extrema_ExtElC(Macad::Occt::gp_Circ^ C1, Macad::Occt::gp_Circ^ C2);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns True if the two curves are parallel.
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the points of the Nth extremum distance.
    /// P1 is on the first curve, P2 on the second one.
    /// </summary>
    void Points(int N, Macad::Occt::Extrema_POnCurv^ P1, Macad::Occt::Extrema_POnCurv^ P2);
}; // class Extrema_ExtElC

//---------------------------------------------------------------------
//  Class  Extrema_ExtCC
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the distance between two curves.
/// These distances can be maximum or minimum.
/// </summary>
public ref class Extrema_ExtCC sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtCC>
{

#ifdef Include_Extrema_ExtCC_h
public:
    Include_Extrema_ExtCC_h
#endif

public:
    Extrema_ExtCC(::Extrema_ExtCC* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtCC>( nativeInstance, true )
    {}

    Extrema_ExtCC(::Extrema_ExtCC& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtCC>( &nativeInstance, false )
    {}

    property ::Extrema_ExtCC* NativeInstance
    {
        ::Extrema_ExtCC* get()
        {
            return static_cast<::Extrema_ExtCC*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtCC(double TolC1, double TolC2);
    Extrema_ExtCC(double TolC1);
    Extrema_ExtCC();
    /// <summary>
    /// It calculates all the distances.
    /// </summary>
    Extrema_ExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double TolC1, double TolC2);
    /// <summary>
    /// It calculates all the distances.
    /// </summary>
    Extrema_ExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double TolC1);
    /// <summary>
    /// It calculates all the distances.
    /// </summary>
    Extrema_ExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2);
    /// <summary>
    /// It calculates all the distances.
    /// </summary>
    Extrema_ExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U1, double U2, double V1, double V2, double TolC1, double TolC2);
    /// <summary>
    /// It calculates all the distances.
    /// </summary>
    Extrema_ExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U1, double U2, double V1, double V2, double TolC1);
    /// <summary>
    /// It calculates all the distances.
    /// </summary>
    Extrema_ExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U1, double U2, double V1, double V2);
    /// <summary>
    /// Initializes but does not perform algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double TolC1, double TolC2);
    /// <summary>
    /// Initializes but does not perform algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double TolC1);
    /// <summary>
    /// Initializes but does not perform algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2);
    /// <summary>
    /// Initializes but does not perform algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U1, double U2, double V1, double V2, double TolC1, double TolC2);
    /// <summary>
    /// Initializes but does not perform algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U1, double U2, double V1, double V2, double TolC1);
    /// <summary>
    /// Initializes but does not perform algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U1, double U2, double V1, double V2);
    void SetCurve(int theRank, Macad::Occt::Adaptor3d_Curve^ C);
    void SetCurve(int theRank, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup);
    void SetRange(int theRank, double Uinf, double Usup);
    void SetTolerance(int theRank, double Tol);
    void Perform();
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns True if the two curves are parallel.
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the points of the Nth extremum distance.
    /// P1 is on the first curve, P2 on the second one.
    /// </summary>
    void Points(int N, Macad::Occt::Extrema_POnCurv^ P1, Macad::Occt::Extrema_POnCurv^ P2);
    /// <summary>
    /// if the curve is a trimmed curve,
    /// dist11 is a square distance between the point on C1
    /// of parameter FirstParameter and the point of
    /// parameter FirstParameter on C2.
    /// </summary>
    void TrimmedSquareDistances(double% dist11, double% distP12, double% distP21, double% distP22, Macad::Occt::Pnt% P11, Macad::Occt::Pnt% P12, Macad::Occt::Pnt% P21, Macad::Occt::Pnt% P22);
    /// <summary>
    /// Set flag for single extrema computation. Works on parametric solver only.
    /// </summary>
    void SetSingleSolutionFlag(bool theSingleSolutionFlag);
    /// <summary>
    /// Get flag for single extrema computation. Works on parametric solver only.
    /// </summary>
    bool GetSingleSolutionFlag();
}; // class Extrema_ExtCC

//---------------------------------------------------------------------
//  Class  Extrema_ExtElC2d
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the distance between two elementary
/// curves.
/// These distances can be maximum or minimum.
/// </summary>
public ref class Extrema_ExtElC2d sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtElC2d>
{

#ifdef Include_Extrema_ExtElC2d_h
public:
    Include_Extrema_ExtElC2d_h
#endif

public:
    Extrema_ExtElC2d(::Extrema_ExtElC2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtElC2d>( nativeInstance, true )
    {}

    Extrema_ExtElC2d(::Extrema_ExtElC2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtElC2d>( &nativeInstance, false )
    {}

    property ::Extrema_ExtElC2d* NativeInstance
    {
        ::Extrema_ExtElC2d* get()
        {
            return static_cast<::Extrema_ExtElC2d*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtElC2d();
    /// <summary>
    /// Calculates the distance between two lines.
    /// AngTol is used to test if the lines are parallel:
    /// Angle(C1,C2) < AngTol.
    /// </summary>
    Extrema_ExtElC2d(Macad::Occt::gp_Lin2d^ C1, Macad::Occt::gp_Lin2d^ C2, double AngTol);
    /// <summary>
    /// Calculates the distance between a line and a
    /// circle.
    /// </summary>
    Extrema_ExtElC2d(Macad::Occt::gp_Lin2d^ C1, Macad::Occt::gp_Circ2d^ C2, double Tol);
    /// <summary>
    /// Calculates the distance between a line and an
    /// ellipse.
    /// </summary>
    Extrema_ExtElC2d(Macad::Occt::gp_Lin2d^ C1, Macad::Occt::gp_Elips2d^ C2);
    /// <summary>
    /// Calculates the distance between a line and a
    /// hyperbola.
    /// </summary>
    Extrema_ExtElC2d(Macad::Occt::gp_Lin2d^ C1, Macad::Occt::gp_Hypr2d^ C2);
    /// <summary>
    /// Calculates the distance between a line and a
    /// parabola.
    /// </summary>
    Extrema_ExtElC2d(Macad::Occt::gp_Lin2d^ C1, Macad::Occt::gp_Parab2d^ C2);
    /// <summary>
    /// Calculates the distance between two circles.
    /// The circles can be parallel or identical.
    /// </summary>
    Extrema_ExtElC2d(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Circ2d^ C2);
    /// <summary>
    /// Calculates the distance between a circle and an
    /// ellipse.
    /// </summary>
    Extrema_ExtElC2d(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Elips2d^ C2);
    /// <summary>
    /// Calculates the distance between a circle and a
    /// hyperbola.
    /// </summary>
    Extrema_ExtElC2d(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Hypr2d^ C2);
    /// <summary>
    /// Calculates the distance between a circle and a
    /// parabola.
    /// </summary>
    Extrema_ExtElC2d(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Parab2d^ C2);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns True if the two curves are parallel.
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the points of the Nth extremum distance.
    /// P1 is on the first curve, P2 on the second one.
    /// </summary>
    void Points(int N, Macad::Occt::Extrema_POnCurv2d^ P1, Macad::Occt::Extrema_POnCurv2d^ P2);
}; // class Extrema_ExtElC2d

//---------------------------------------------------------------------
//  Class  Extrema_ExtCC2d
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the distance between two curves.
/// These distances can be maximum or minimum.
/// </summary>
public ref class Extrema_ExtCC2d sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtCC2d>
{

#ifdef Include_Extrema_ExtCC2d_h
public:
    Include_Extrema_ExtCC2d_h
#endif

public:
    Extrema_ExtCC2d(::Extrema_ExtCC2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtCC2d>( nativeInstance, true )
    {}

    Extrema_ExtCC2d(::Extrema_ExtCC2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtCC2d>( &nativeInstance, false )
    {}

    property ::Extrema_ExtCC2d* NativeInstance
    {
        ::Extrema_ExtCC2d* get()
        {
            return static_cast<::Extrema_ExtCC2d*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtCC2d();
    /// <summary>
    /// It calculates all the distances.
    /// </summary>
    Extrema_ExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double TolC1, double TolC2);
    /// <summary>
    /// It calculates all the distances.
    /// </summary>
    Extrema_ExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double TolC1);
    /// <summary>
    /// It calculates all the distances.
    /// </summary>
    Extrema_ExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2);
    /// <summary>
    /// It calculates all the distances.
    /// </summary>
    Extrema_ExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double U1, double U2, double V1, double V2, double TolC1, double TolC2);
    /// <summary>
    /// It calculates all the distances.
    /// </summary>
    Extrema_ExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double U1, double U2, double V1, double V2, double TolC1);
    /// <summary>
    /// It calculates all the distances.
    /// </summary>
    Extrema_ExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double U1, double U2, double V1, double V2);
    /// <summary>
    /// initializes the fields.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C2, double V1, double V2, double TolC1, double TolC2);
    /// <summary>
    /// initializes the fields.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C2, double V1, double V2, double TolC1);
    /// <summary>
    /// initializes the fields.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C2, double V1, double V2);
    void Perform(Macad::Occt::Adaptor2d_Curve2d^ C1, double U1, double U2);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns True if the two curves are parallel.
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the points of the Nth extremum distance.
    /// P1 is on the first curve, P2 on the second one.
    /// </summary>
    void Points(int N, Macad::Occt::Extrema_POnCurv2d^ P1, Macad::Occt::Extrema_POnCurv2d^ P2);
    /// <summary>
    /// if the curve is a trimmed curve,
    /// dist11 is a square distance between the point on C1
    /// of parameter FirstParameter and the point of
    /// parameter FirstParameter on C2.
    /// </summary>
    void TrimmedSquareDistances(double% dist11, double% distP12, double% distP21, double% distP22, Macad::Occt::Pnt2d% P11, Macad::Occt::Pnt2d% P12, Macad::Occt::Pnt2d% P21, Macad::Occt::Pnt2d% P22);
    /// <summary>
    /// Set flag for single extrema computation. Works on parametric solver only.
    /// </summary>
    void SetSingleSolutionFlag(bool theSingleSolutionFlag);
    /// <summary>
    /// Get flag for single extrema computation. Works on parametric solver only.
    /// </summary>
    bool GetSingleSolutionFlag();
}; // class Extrema_ExtCC2d

//---------------------------------------------------------------------
//  Class  Extrema_HArray1OfPOnCurv
//---------------------------------------------------------------------
public ref class Extrema_HArray1OfPOnCurv sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Extrema_POnCurv^>
{

#ifdef Include_Extrema_HArray1OfPOnCurv_h
public:
    Include_Extrema_HArray1OfPOnCurv_h
#endif

public:
    Extrema_HArray1OfPOnCurv(::Extrema_HArray1OfPOnCurv* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Extrema_HArray1OfPOnCurv(::Extrema_HArray1OfPOnCurv& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Extrema_HArray1OfPOnCurv* NativeInstance
    {
        ::Extrema_HArray1OfPOnCurv* get()
        {
            return static_cast<::Extrema_HArray1OfPOnCurv*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_HArray1OfPOnCurv::Iterator>
    {

#ifdef Include_Extrema_HArray1OfPOnCurv_Iterator_h
    public:
        Include_Extrema_HArray1OfPOnCurv_Iterator_h
#endif

    public:
        Iterator(::Extrema_HArray1OfPOnCurv::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_HArray1OfPOnCurv::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_HArray1OfPOnCurv::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_HArray1OfPOnCurv::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_HArray1OfPOnCurv::Iterator* NativeInstance
        {
            ::Extrema_HArray1OfPOnCurv::Iterator* get()
            {
                return static_cast<::Extrema_HArray1OfPOnCurv::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Extrema_HArray1OfPOnCurv();
    Extrema_HArray1OfPOnCurv(int theLower, int theUpper);
    Extrema_HArray1OfPOnCurv(int theLower, int theUpper, Macad::Occt::Extrema_POnCurv^ theValue);
    Extrema_HArray1OfPOnCurv(Macad::Occt::Extrema_POnCurv^ theBegin, int theLower, int theUpper, bool parameter1);
    Extrema_HArray1OfPOnCurv(Macad::Occt::Extrema_Array1OfPOnCurv^ theOther);
    Macad::Occt::Extrema_Array1OfPOnCurv^ Array1();
    Macad::Occt::Extrema_Array1OfPOnCurv^ ChangeArray1();
    void Init(Macad::Occt::Extrema_POnCurv^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Extrema_HArray1OfPOnCurv^ Assign(Macad::Occt::Extrema_HArray1OfPOnCurv^ theOther);
    Macad::Occt::Extrema_HArray1OfPOnCurv^ Move(Macad::Occt::Extrema_HArray1OfPOnCurv^ theOther);
    Macad::Occt::Extrema_POnCurv^ First();
    Macad::Occt::Extrema_POnCurv^ ChangeFirst();
    Macad::Occt::Extrema_POnCurv^ Last();
    Macad::Occt::Extrema_POnCurv^ ChangeLast();
    virtual Macad::Occt::Extrema_POnCurv^ Value(int theIndex);
    Macad::Occt::Extrema_POnCurv^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Extrema_POnCurv^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::Extrema_HArray1OfPOnCurv^ CreateDowncasted(::Extrema_HArray1OfPOnCurv* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnCurv^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Extrema_HArray1OfPOnCurv

//---------------------------------------------------------------------
//  Class  Extrema_HArray1OfPOnSurf
//---------------------------------------------------------------------
public ref class Extrema_HArray1OfPOnSurf sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Extrema_POnSurf^>
{

#ifdef Include_Extrema_HArray1OfPOnSurf_h
public:
    Include_Extrema_HArray1OfPOnSurf_h
#endif

public:
    Extrema_HArray1OfPOnSurf(::Extrema_HArray1OfPOnSurf* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Extrema_HArray1OfPOnSurf(::Extrema_HArray1OfPOnSurf& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Extrema_HArray1OfPOnSurf* NativeInstance
    {
        ::Extrema_HArray1OfPOnSurf* get()
        {
            return static_cast<::Extrema_HArray1OfPOnSurf*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_HArray1OfPOnSurf::Iterator>
    {

#ifdef Include_Extrema_HArray1OfPOnSurf_Iterator_h
    public:
        Include_Extrema_HArray1OfPOnSurf_Iterator_h
#endif

    public:
        Iterator(::Extrema_HArray1OfPOnSurf::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_HArray1OfPOnSurf::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_HArray1OfPOnSurf::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_HArray1OfPOnSurf::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_HArray1OfPOnSurf::Iterator* NativeInstance
        {
            ::Extrema_HArray1OfPOnSurf::Iterator* get()
            {
                return static_cast<::Extrema_HArray1OfPOnSurf::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Extrema_HArray1OfPOnSurf();
    Extrema_HArray1OfPOnSurf(int theLower, int theUpper);
    Extrema_HArray1OfPOnSurf(int theLower, int theUpper, Macad::Occt::Extrema_POnSurf^ theValue);
    Extrema_HArray1OfPOnSurf(Macad::Occt::Extrema_POnSurf^ theBegin, int theLower, int theUpper, bool parameter1);
    Extrema_HArray1OfPOnSurf(Macad::Occt::Extrema_Array1OfPOnSurf^ theOther);
    Macad::Occt::Extrema_Array1OfPOnSurf^ Array1();
    Macad::Occt::Extrema_Array1OfPOnSurf^ ChangeArray1();
    void Init(Macad::Occt::Extrema_POnSurf^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Extrema_HArray1OfPOnSurf^ Assign(Macad::Occt::Extrema_HArray1OfPOnSurf^ theOther);
    Macad::Occt::Extrema_HArray1OfPOnSurf^ Move(Macad::Occt::Extrema_HArray1OfPOnSurf^ theOther);
    Macad::Occt::Extrema_POnSurf^ First();
    Macad::Occt::Extrema_POnSurf^ ChangeFirst();
    Macad::Occt::Extrema_POnSurf^ Last();
    Macad::Occt::Extrema_POnSurf^ ChangeLast();
    virtual Macad::Occt::Extrema_POnSurf^ Value(int theIndex);
    Macad::Occt::Extrema_POnSurf^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Extrema_POnSurf^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::Extrema_HArray1OfPOnSurf^ CreateDowncasted(::Extrema_HArray1OfPOnSurf* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnSurf^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Extrema_HArray1OfPOnSurf

//---------------------------------------------------------------------
//  Class  Extrema_ExtElCS
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the distances between a curve and
/// a surface.
/// These distances can be maximum or minimum.
/// </summary>
public ref class Extrema_ExtElCS sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtElCS>
{

#ifdef Include_Extrema_ExtElCS_h
public:
    Include_Extrema_ExtElCS_h
#endif

public:
    Extrema_ExtElCS(::Extrema_ExtElCS* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtElCS>( nativeInstance, true )
    {}

    Extrema_ExtElCS(::Extrema_ExtElCS& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtElCS>( &nativeInstance, false )
    {}

    property ::Extrema_ExtElCS* NativeInstance
    {
        ::Extrema_ExtElCS* get()
        {
            return static_cast<::Extrema_ExtElCS*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtElCS();
    /// <summary>
    /// Calculates the distances between a line and a
    /// plane. The line can be on the plane or on a parallel
    /// plane.
    /// </summary>
    Extrema_ExtElCS(Macad::Occt::gp_Lin^ C, Macad::Occt::Pln S);
    /// <summary>
    /// Calculates the distances between a line and a
    /// cylinder.
    /// </summary>
    Extrema_ExtElCS(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Cylinder^ S);
    /// <summary>
    /// Calculates the distances between a line and a cone.
    /// </summary>
    Extrema_ExtElCS(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Cone^ S);
    /// <summary>
    /// Calculates the distances between a line and a
    /// sphere.
    /// </summary>
    Extrema_ExtElCS(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Sphere^ S);
    /// <summary>
    /// Calculates the distances between a line and a
    /// torus.
    /// </summary>
    Extrema_ExtElCS(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Torus^ S);
    /// <summary>
    /// Calculates the distances between a circle and a
    /// plane.
    /// </summary>
    Extrema_ExtElCS(Macad::Occt::gp_Circ^ C, Macad::Occt::Pln S);
    /// <summary>
    /// Calculates the distances between a circle and a
    /// cylinder.
    /// </summary>
    Extrema_ExtElCS(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Cylinder^ S);
    /// <summary>
    /// Calculates the distances between a circle and a
    /// cone.
    /// </summary>
    Extrema_ExtElCS(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Cone^ S);
    /// <summary>
    /// Calculates the distances between a circle and a
    /// sphere.
    /// </summary>
    Extrema_ExtElCS(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Sphere^ S);
    /// <summary>
    /// Calculates the distances between a circle and a
    /// torus.
    /// </summary>
    Extrema_ExtElCS(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Torus^ S);
    /// <summary>
    /// Calculates the distances between a hyperbola and a
    /// plane.
    /// </summary>
    Extrema_ExtElCS(Macad::Occt::gp_Hypr^ C, Macad::Occt::Pln S);
    void Perform(Macad::Occt::gp_Lin^ C, Macad::Occt::Pln S);
    void Perform(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Cylinder^ S);
    void Perform(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Cone^ S);
    void Perform(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Sphere^ S);
    void Perform(Macad::Occt::gp_Lin^ C, Macad::Occt::gp_Torus^ S);
    void Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::Pln S);
    void Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Cylinder^ S);
    void Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Cone^ S);
    void Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Sphere^ S);
    void Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::gp_Torus^ S);
    void Perform(Macad::Occt::gp_Hypr^ C, Macad::Occt::Pln S);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns True if the curve is on a parallel surface.
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the points of the Nth extremum distance.
    /// P1 is on the curve, P2 on the surface.
    /// </summary>
    void Points(int N, Macad::Occt::Extrema_POnCurv^ P1, Macad::Occt::Extrema_POnSurf^ P2);
}; // class Extrema_ExtElCS

//---------------------------------------------------------------------
//  Class  Extrema_ExtCS
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the extremum distances
/// between a curve and a surface.
/// These distances can be minimum or maximum.
/// </summary>
public ref class Extrema_ExtCS sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtCS>
{

#ifdef Include_Extrema_ExtCS_h
public:
    Include_Extrema_ExtCS_h
#endif

public:
    Extrema_ExtCS(::Extrema_ExtCS* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtCS>( nativeInstance, true )
    {}

    Extrema_ExtCS(::Extrema_ExtCS& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtCS>( &nativeInstance, false )
    {}

    property ::Extrema_ExtCS* NativeInstance
    {
        ::Extrema_ExtCS* get()
        {
            return static_cast<::Extrema_ExtCS*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtCS();
    /// <summary>
    /// It calculates all the distances between C and S.
    /// </summary>
    Extrema_ExtCS(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double TolC, double TolS);
    /// <summary>
    /// It calculates all the distances between C and S.
    /// UCinf and UCmax are the start and end parameters
    /// of the curve.
    /// </summary>
    Extrema_ExtCS(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double UCinf, double UCsup, double Uinf, double Usup, double Vinf, double Vsup, double TolC, double TolS);
    /// <summary>
    /// Initializes the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Surface^ S, double TolC, double TolS);
    /// <summary>
    /// Initializes the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Surface^ S, double Uinf, double Usup, double Vinf, double Vsup, double TolC, double TolS);
    /// <summary>
    /// Computes the distances.
    /// An exception is raised if the fields have not been
    /// initialized.
    /// </summary>
    void Perform(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns True if the curve is on a parallel surface.
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth resulting square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the point of the Nth resulting distance.
    /// </summary>
    void Points(int N, Macad::Occt::Extrema_POnCurv^ P1, Macad::Occt::Extrema_POnSurf^ P2);
}; // class Extrema_ExtCS

//---------------------------------------------------------------------
//  Class  Extrema_ExtElSS
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the distances between 2 elementary
/// surfaces.
/// These distances can be maximum or minimum.
/// </summary>
public ref class Extrema_ExtElSS sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtElSS>
{

#ifdef Include_Extrema_ExtElSS_h
public:
    Include_Extrema_ExtElSS_h
#endif

public:
    Extrema_ExtElSS(::Extrema_ExtElSS* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtElSS>( nativeInstance, true )
    {}

    Extrema_ExtElSS(::Extrema_ExtElSS& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtElSS>( &nativeInstance, false )
    {}

    property ::Extrema_ExtElSS* NativeInstance
    {
        ::Extrema_ExtElSS* get()
        {
            return static_cast<::Extrema_ExtElSS*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtElSS();
    /// <summary>
    /// Calculates the distances between 2 planes.
    /// These planes can be parallel.
    /// </summary>
    Extrema_ExtElSS(Macad::Occt::Pln S1, Macad::Occt::Pln S2);
    /// <summary>
    /// Calculates the distances between a plane
    /// and a sphere.
    /// </summary>
    Extrema_ExtElSS(Macad::Occt::Pln S1, Macad::Occt::gp_Sphere^ S2);
    /// <summary>
    /// Calculates the distances between 2 spheres.
    /// These spheres can be parallel.
    /// </summary>
    Extrema_ExtElSS(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Sphere^ S2);
    /// <summary>
    /// Calculates the distances between a sphere
    /// and a cylinder.
    /// </summary>
    Extrema_ExtElSS(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Cylinder^ S2);
    /// <summary>
    /// Calculates the distances between a sphere
    /// and a cone.
    /// </summary>
    Extrema_ExtElSS(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Cone^ S2);
    /// <summary>
    /// Calculates the distances between a sphere
    /// and a torus.
    /// </summary>
    Extrema_ExtElSS(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Torus^ S2);
    void Perform(Macad::Occt::Pln S1, Macad::Occt::Pln S2);
    void Perform(Macad::Occt::Pln S1, Macad::Occt::gp_Sphere^ S2);
    void Perform(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Sphere^ S2);
    void Perform(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Cylinder^ S2);
    void Perform(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Cone^ S2);
    void Perform(Macad::Occt::gp_Sphere^ S1, Macad::Occt::gp_Torus^ S2);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns True if the two surfaces are parallel.
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the value of the Nth extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the points for the Nth resulting distance.
    /// P1 is on the first surface, P2 on the second one.
    /// </summary>
    void Points(int N, Macad::Occt::Extrema_POnSurf^ P1, Macad::Occt::Extrema_POnSurf^ P2);
}; // class Extrema_ExtElSS

//---------------------------------------------------------------------
//  Class  Extrema_ExtPC
//---------------------------------------------------------------------
public ref class Extrema_ExtPC sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtPC>
{

#ifdef Include_Extrema_ExtPC_h
public:
    Include_Extrema_ExtPC_h
#endif

public:
    Extrema_ExtPC(::Extrema_ExtPC* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtPC>( nativeInstance, true )
    {}

    Extrema_ExtPC(::Extrema_ExtPC& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtPC>( &nativeInstance, false )
    {}

    property ::Extrema_ExtPC* NativeInstance
    {
        ::Extrema_ExtPC* get()
        {
            return static_cast<::Extrema_ExtPC*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtPC();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Zeros are searched between uinf and usup.
    /// Tol  is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Zeros are searched between uinf and usup.
    /// Tol  is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Tol is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Tol is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// initializes the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF);
    /// <summary>
    /// initializes the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup);
    /// <summary>
    /// An exception is raised if the fields have not been
    /// initialized.
    /// </summary>
    void Perform(Macad::Occt::Pnt P);
    /// <summary>
    /// True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the <N>th extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns True if the <N>th extremum distance is a
    /// minimum.
    /// </summary>
    bool IsMin(int N);
    /// <summary>
    /// Returns the point of the <N>th extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv^ Point(int N);
    /// <summary>
    /// if the curve is a trimmed curve,
    /// dist1 is a square distance between <P> and the point
    /// of parameter FirstParameter <P1> and
    /// dist2 is a square distance between <P> and the point
    /// of parameter LastParameter <P2>.
    /// </summary>
    void TrimmedSquareDistances(double% dist1, double% dist2, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
}; // class Extrema_ExtPC

//---------------------------------------------------------------------
//  Class  Extrema_ExtPC2d
//---------------------------------------------------------------------
public ref class Extrema_ExtPC2d sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtPC2d>
{

#ifdef Include_Extrema_ExtPC2d_h
public:
    Include_Extrema_ExtPC2d_h
#endif

public:
    Extrema_ExtPC2d(::Extrema_ExtPC2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtPC2d>( nativeInstance, true )
    {}

    Extrema_ExtPC2d(::Extrema_ExtPC2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtPC2d>( &nativeInstance, false )
    {}

    property ::Extrema_ExtPC2d* NativeInstance
    {
        ::Extrema_ExtPC2d* get()
        {
            return static_cast<::Extrema_ExtPC2d*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtPC2d();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Zeros are searched between uinf and usup.
    /// Tol  is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, double Uinf, double Usup, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Zeros are searched between uinf and usup.
    /// Tol  is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, double Uinf, double Usup);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Tol is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, double TolF);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches all the
    /// zeros inside the definition range of the curve.
    /// Tol is used to decide to stop the
    /// iterations according to the following condition:
    /// if n is the number of iterations,
    /// the algorithm stops when abs(F(Un)-F(Un-1)) < Tol.
    /// </summary>
    Extrema_ExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// initializes the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C, double Uinf, double Usup, double TolF);
    /// <summary>
    /// initializes the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C, double Uinf, double Usup);
    /// <summary>
    /// An exception is raised if the fields have not been
    /// initialized.
    /// </summary>
    void Perform(Macad::Occt::Pnt2d P);
    /// <summary>
    /// True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the <N>th extremum square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns True if the <N>th extremum distance is a
    /// minimum.
    /// </summary>
    bool IsMin(int N);
    /// <summary>
    /// Returns the point of the <N>th extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv2d^ Point(int N);
    /// <summary>
    /// if the curve is a trimmed curve,
    /// dist1 is a square distance between <P> and the point
    /// of parameter FirstParameter <P1> and
    /// dist2 is a square distance between <P> and the point
    /// of parameter LastParameter <P2>.
    /// </summary>
    void TrimmedSquareDistances(double% dist1, double% dist2, Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2);
}; // class Extrema_ExtPC2d

//---------------------------------------------------------------------
//  Class  Extrema_ExtPElS
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the extremum distances
/// between a point and a surface.
/// These distances can be minimum or maximum.
/// </summary>
public ref class Extrema_ExtPElS sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtPElS>
{

#ifdef Include_Extrema_ExtPElS_h
public:
    Include_Extrema_ExtPElS_h
#endif

public:
    Extrema_ExtPElS(::Extrema_ExtPElS* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtPElS>( nativeInstance, true )
    {}

    Extrema_ExtPElS(::Extrema_ExtPElS& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtPElS>( &nativeInstance, false )
    {}

    property ::Extrema_ExtPElS* NativeInstance
    {
        ::Extrema_ExtPElS* get()
        {
            return static_cast<::Extrema_ExtPElS*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtPElS();
    /// <summary>
    /// It calculates all the distances between a point
    /// and a cylinder from gp.
    /// Tol is used to test if the point is on the axis.
    /// </summary>
    Extrema_ExtPElS(Macad::Occt::Pnt P, Macad::Occt::gp_Cylinder^ S, double Tol);
    /// <summary>
    /// It calculates all the distances between a point
    /// and a plane from gp.
    /// Tol is used to test if the point is on the plane.
    /// </summary>
    Extrema_ExtPElS(Macad::Occt::Pnt P, Macad::Occt::Pln S, double Tol);
    /// <summary>
    /// It calculates all the distances between a point
    /// and a cone from gp.
    /// Tol is used to test if the point is at the apex or
    /// on the axis.
    /// </summary>
    Extrema_ExtPElS(Macad::Occt::Pnt P, Macad::Occt::gp_Cone^ S, double Tol);
    /// <summary>
    /// It calculates all the distances between a point
    /// and a torus from gp.
    /// Tol is used to test if the point is on the axis.
    /// </summary>
    Extrema_ExtPElS(Macad::Occt::Pnt P, Macad::Occt::gp_Torus^ S, double Tol);
    /// <summary>
    /// It calculates all the distances between a point
    /// and a sphere from gp.
    /// Tol is used to test if the point is at the center.
    /// </summary>
    Extrema_ExtPElS(Macad::Occt::Pnt P, Macad::Occt::gp_Sphere^ S, double Tol);
    void Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Cylinder^ S, double Tol);
    void Perform(Macad::Occt::Pnt P, Macad::Occt::Pln S, double Tol);
    void Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Cone^ S, double Tol);
    void Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Torus^ S, double Tol);
    void Perform(Macad::Occt::Pnt P, Macad::Occt::gp_Sphere^ S, double Tol);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth resulting square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the point of the Nth resulting distance.
    /// </summary>
    Macad::Occt::Extrema_POnSurf^ Point(int N);
}; // class Extrema_ExtPElS

//---------------------------------------------------------------------
//  Class  Extrema_GenExtPS
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the extremum distances
/// between a point and a surface.
/// These distances can be minimum or maximum.
/// </summary>
public ref class Extrema_GenExtPS sealed
    : public Macad::Occt::BaseClass<::Extrema_GenExtPS>
{

#ifdef Include_Extrema_GenExtPS_h
public:
    Include_Extrema_GenExtPS_h
#endif

public:
    Extrema_GenExtPS(::Extrema_GenExtPS* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_GenExtPS>( nativeInstance, true )
    {}

    Extrema_GenExtPS(::Extrema_GenExtPS& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_GenExtPS>( &nativeInstance, false )
    {}

    property ::Extrema_GenExtPS* NativeInstance
    {
        ::Extrema_GenExtPS* get()
        {
            return static_cast<::Extrema_GenExtPS*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Extrema_GenExtPS();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u,v)=distance(P,S(u,v)) has an
    /// extremum when gradient(F)=0. The algorithm searches
    /// all the zeros inside the definition ranges of the
    /// surface.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros. They must be great enough
    /// such that if there is N extrema, there will
    /// be N extrema between P and the grid.
    /// TolU et TolV are used to determine the conditions
    /// to stop the iterations; at the iteration number n:
    /// (Un - Un-1) < TolU and (Vn - Vn-1) < TolV .
    /// </summary>
    Extrema_GenExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u,v)=distance(P,S(u,v)) has an
    /// extremum when gradient(F)=0. The algorithm searches
    /// all the zeros inside the definition ranges of the
    /// surface.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros. They must be great enough
    /// such that if there is N extrema, there will
    /// be N extrema between P and the grid.
    /// TolU et TolV are used to determine the conditions
    /// to stop the iterations; at the iteration number n:
    /// (Un - Un-1) < TolU and (Vn - Vn-1) < TolV .
    /// </summary>
    Extrema_GenExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u,v)=distance(P,S(u,v)) has an
    /// extremum when gradient(F)=0. The algorithm searches
    /// all the zeros inside the definition ranges of the
    /// surface.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros. They must be great enough
    /// such that if there is N extrema, there will
    /// be N extrema between P and the grid.
    /// TolU et TolV are used to determine the conditions
    /// to stop the iterations; at the iteration number n:
    /// (Un - Un-1) < TolU and (Vn - Vn-1) < TolV .
    /// </summary>
    Extrema_GenExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double TolU, double TolV);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u,v)=distance(P,S(u,v)) has an
    /// extremum when gradient(F)=0. The algorithm searches
    /// all the zeros inside the definition ranges of the
    /// surface.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros. They must be great enough
    /// such that if there is N extrema, there will
    /// be N extrema between P and the grid.
    /// TolU et TolV are used to determine the conditions
    /// to stop the iterations; at the iteration number n:
    /// (Un - Un-1) < TolU and (Vn - Vn-1) < TolV .
    /// </summary>
    Extrema_GenExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u,v)=distance(P,S(u,v)) has an
    /// extremum when gradient(F)=0. The algorithm searches
    /// all the zeros inside the definition ranges of the
    /// surface.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros. They must be great enough
    /// such that if there is N extrema, there will
    /// be N extrema between P and the grid.
    /// TolU et TolV are used to determine the conditions
    /// to stop the iterations; at the iteration number n:
    /// (Un - Un-1) < TolU and (Vn - Vn-1) < TolV .
    /// </summary>
    Extrema_GenExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u,v)=distance(P,S(u,v)) has an
    /// extremum when gradient(F)=0. The algorithm searches
    /// all the zeros inside the definition ranges of the
    /// surface.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros. They must be great enough
    /// such that if there is N extrema, there will
    /// be N extrema between P and the grid.
    /// TolU et TolV are used to determine the conditions
    /// to stop the iterations; at the iteration number n:
    /// (Un - Un-1) < TolU and (Vn - Vn-1) < TolV .
    /// </summary>
    Extrema_GenExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV);
    void Initialize(Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double TolU, double TolV);
    void Initialize(Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV);
    /// <summary>
    /// the algorithm is done with the point P.
    /// An exception is raised if the fields have not
    /// been initialized.
    /// </summary>
    void Perform(Macad::Occt::Pnt P);
    void SetFlag(Macad::Occt::Extrema_ExtFlag F);
    void SetAlgo(Macad::Occt::Extrema_ExtAlgo A);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth resulting square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the point of the Nth resulting distance.
    /// </summary>
    Macad::Occt::Extrema_POnSurf^ Point(int N);
}; // class Extrema_GenExtPS

//---------------------------------------------------------------------
//  Class  Extrema_ExtPExtS
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the extremum (minimum and
/// maximum) distances between a point and a linear
/// extrusion surface.
/// </summary>
public ref class Extrema_ExtPExtS sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Extrema_ExtPExtS_h
public:
    Include_Extrema_ExtPExtS_h
#endif

public:
    Extrema_ExtPExtS(::Extrema_ExtPExtS* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Extrema_ExtPExtS(::Extrema_ExtPExtS& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Extrema_ExtPExtS* NativeInstance
    {
        ::Extrema_ExtPExtS* get()
        {
            return static_cast<::Extrema_ExtPExtS*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtPExtS();
    /// <summary>
    /// It calculates all the distances between a point
    /// from gp and a Surface.
    /// </summary>
    Extrema_ExtPExtS(Macad::Occt::Pnt P, Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ S, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV);
    /// <summary>
    /// It calculates all the distances between a point
    /// from gp and a Surface.
    /// </summary>
    Extrema_ExtPExtS(Macad::Occt::Pnt P, Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ S, double TolU, double TolV);
    /// <summary>
    /// Initializes the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ S, double Uinf, double Usup, double Vinf, double Vsup, double TolU, double TolV);
    void Perform(Macad::Occt::Pnt P);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth resulting square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the point of the Nth resulting distance.
    /// </summary>
    Macad::Occt::Extrema_POnSurf^ Point(int N);
    static Macad::Occt::Extrema_ExtPExtS^ CreateDowncasted(::Extrema_ExtPExtS* instance);
}; // class Extrema_ExtPExtS

//---------------------------------------------------------------------
//  Class  Extrema_ExtPRevS
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the extremum (minimum and
/// maximum) distances between a point and a surface
/// of revolution.
/// </summary>
public ref class Extrema_ExtPRevS sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Extrema_ExtPRevS_h
public:
    Include_Extrema_ExtPRevS_h
#endif

public:
    Extrema_ExtPRevS(::Extrema_ExtPRevS* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Extrema_ExtPRevS(::Extrema_ExtPRevS& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Extrema_ExtPRevS* NativeInstance
    {
        ::Extrema_ExtPRevS* get()
        {
            return static_cast<::Extrema_ExtPRevS*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtPRevS();
    /// <summary>
    /// It calculates all the distances between a point
    /// from gp and a SurfacePtr from Adaptor3d.
    /// </summary>
    Extrema_ExtPRevS(Macad::Occt::Pnt P, Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ S, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV);
    /// <summary>
    /// It calculates all the distances between a point
    /// from gp and a SurfacePtr from Adaptor3d.
    /// </summary>
    Extrema_ExtPRevS(Macad::Occt::Pnt P, Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ S, double TolU, double TolV);
    void Initialize(Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ S, double Umin, double Usup, double Vmin, double Vsup, double TolU, double TolV);
    void Perform(Macad::Occt::Pnt P);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth resulting square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the point of the Nth resulting distance.
    /// </summary>
    Macad::Occt::Extrema_POnSurf^ Point(int N);
    static Macad::Occt::Extrema_ExtPRevS^ CreateDowncasted(::Extrema_ExtPRevS* instance);
}; // class Extrema_ExtPRevS

//---------------------------------------------------------------------
//  Class  Extrema_ExtPS
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the extremum distances
/// between a point and a surface.
/// These distances can be minimum or maximum.
/// </summary>
public ref class Extrema_ExtPS sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtPS>
{

#ifdef Include_Extrema_ExtPS_h
public:
    Include_Extrema_ExtPS_h
#endif

public:
    Extrema_ExtPS(::Extrema_ExtPS* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtPS>( nativeInstance, true )
    {}

    Extrema_ExtPS(::Extrema_ExtPS& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtPS>( &nativeInstance, false )
    {}

    property ::Extrema_ExtPS* NativeInstance
    {
        ::Extrema_ExtPS* get()
        {
            return static_cast<::Extrema_ExtPS*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtPS();
    /// <summary>
    /// It calculates all the distances.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros. They must be great enough
    /// such that if there is N extrema, there will
    /// be N extrema between P and the grid.
    /// TolU et TolV are used to determine the conditions
    /// to stop the iterations; at the iteration number n:
    /// (Un - Un-1) < TolU and (Vn - Vn-1) < TolV .
    /// </summary>
    Extrema_ExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A);
    /// <summary>
    /// It calculates all the distances.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros. They must be great enough
    /// such that if there is N extrema, there will
    /// be N extrema between P and the grid.
    /// TolU et TolV are used to determine the conditions
    /// to stop the iterations; at the iteration number n:
    /// (Un - Un-1) < TolU and (Vn - Vn-1) < TolV .
    /// </summary>
    Extrema_ExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F);
    /// <summary>
    /// It calculates all the distances.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros. They must be great enough
    /// such that if there is N extrema, there will
    /// be N extrema between P and the grid.
    /// TolU et TolV are used to determine the conditions
    /// to stop the iterations; at the iteration number n:
    /// (Un - Un-1) < TolU and (Vn - Vn-1) < TolV .
    /// </summary>
    Extrema_ExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, double TolU, double TolV);
    /// <summary>
    /// It calculates all the distances.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros. They must be great enough
    /// such that if there is N extrema, there will
    /// be N extrema between P and the grid.
    /// TolU et TolV are used to determine the conditions
    /// to stop the iterations; at the iteration number n:
    /// (Un - Un-1) < TolU and (Vn - Vn-1) < TolV .
    /// </summary>
    Extrema_ExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, double Uinf, double Usup, double Vinf, double Vsup, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A);
    /// <summary>
    /// It calculates all the distances.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros. They must be great enough
    /// such that if there is N extrema, there will
    /// be N extrema between P and the grid.
    /// TolU et TolV are used to determine the conditions
    /// to stop the iterations; at the iteration number n:
    /// (Un - Un-1) < TolU and (Vn - Vn-1) < TolV .
    /// </summary>
    Extrema_ExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, double Uinf, double Usup, double Vinf, double Vsup, double TolU, double TolV, Macad::Occt::Extrema_ExtFlag F);
    /// <summary>
    /// It calculates all the distances.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros. They must be great enough
    /// such that if there is N extrema, there will
    /// be N extrema between P and the grid.
    /// TolU et TolV are used to determine the conditions
    /// to stop the iterations; at the iteration number n:
    /// (Un - Un-1) < TolU and (Vn - Vn-1) < TolV .
    /// </summary>
    Extrema_ExtPS(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Surface^ S, double Uinf, double Usup, double Vinf, double Vsup, double TolU, double TolV);
    /// <summary>
    /// Initializes the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Surface^ S, double Uinf, double Usup, double Vinf, double Vsup, double TolU, double TolV);
    /// <summary>
    /// Computes the distances.
    /// An exception is raised if the fields have not been
    /// initialized.
    /// </summary>
    void Perform(Macad::Occt::Pnt P);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth resulting square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the point of the Nth resulting distance.
    /// </summary>
    Macad::Occt::Extrema_POnSurf^ Point(int N);
    /// <summary>
    /// if the surface is a trimmed surface,
    /// dUfVf is a square distance between <P> and the point
    /// of parameter FirstUParameter and FirstVParameter <PUfVf>.
    /// dUfVl is a square distance between <P> and the point
    /// of parameter FirstUParameter and LastVParameter <PUfVl>.
    /// dUlVf is a square distance between <P> and the point
    /// of parameter LastUParameter and FirstVParameter <PUlVf>.
    /// dUlVl is a square distance between <P> and the point
    /// of parameter LastUParameter and LastVParameter <PUlVl>.
    /// </summary>
    void TrimmedSquareDistances(double% dUfVf, double% dUfVl, double% dUlVf, double% dUlVl, Macad::Occt::Pnt% PUfVf, Macad::Occt::Pnt% PUfVl, Macad::Occt::Pnt% PUlVf, Macad::Occt::Pnt% PUlVl);
    void SetFlag(Macad::Occt::Extrema_ExtFlag F);
    void SetAlgo(Macad::Occt::Extrema_ExtAlgo A);
}; // class Extrema_ExtPS

//---------------------------------------------------------------------
//  Class  Extrema_ExtSS
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the extremum distances
/// between two surfaces.
/// These distances can be minimum or maximum.
/// </summary>
public ref class Extrema_ExtSS sealed
    : public Macad::Occt::BaseClass<::Extrema_ExtSS>
{

#ifdef Include_Extrema_ExtSS_h
public:
    Include_Extrema_ExtSS_h
#endif

public:
    Extrema_ExtSS(::Extrema_ExtSS* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtSS>( nativeInstance, true )
    {}

    Extrema_ExtSS(::Extrema_ExtSS& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_ExtSS>( &nativeInstance, false )
    {}

    property ::Extrema_ExtSS* NativeInstance
    {
        ::Extrema_ExtSS* get()
        {
            return static_cast<::Extrema_ExtSS*>(_NativeInstance);
        }
    }

public:
    Extrema_ExtSS();
    /// <summary>
    /// It calculates all the distances between S1 and S2.
    /// </summary>
    Extrema_ExtSS(Macad::Occt::Adaptor3d_Surface^ S1, Macad::Occt::Adaptor3d_Surface^ S2, double TolS1, double TolS2);
    /// <summary>
    /// It calculates all the distances between S1 and S2.
    /// </summary>
    Extrema_ExtSS(Macad::Occt::Adaptor3d_Surface^ S1, Macad::Occt::Adaptor3d_Surface^ S2, double Uinf1, double Usup1, double Vinf1, double Vsup1, double Uinf2, double Usup2, double Vinf2, double Vsup2, double TolS1, double TolS2);
    /// <summary>
    /// Initializes the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Surface^ S2, double Uinf2, double Usup2, double Vinf2, double Vsup2, double TolS1);
    /// <summary>
    /// Computes the distances.
    /// An exception is raised if the fields have not been
    /// initialized.
    /// </summary>
    void Perform(Macad::Occt::Adaptor3d_Surface^ S1, double Uinf1, double Usup1, double Vinf1, double Vsup1, double TolS1);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns True if the surfaces are parallel
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth resulting square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the point of the Nth resulting distance.
    /// </summary>
    void Points(int N, Macad::Occt::Extrema_POnSurf^ P1, Macad::Occt::Extrema_POnSurf^ P2);
}; // class Extrema_ExtSS

//---------------------------------------------------------------------
//  Class  Extrema_GenExtCS
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the extremum distances
/// between acurve and a surface.
/// These distances can be minimum or maximum.
/// </summary>
public ref class Extrema_GenExtCS sealed
    : public Macad::Occt::BaseClass<::Extrema_GenExtCS>
{

#ifdef Include_Extrema_GenExtCS_h
public:
    Include_Extrema_GenExtCS_h
#endif

public:
    Extrema_GenExtCS(::Extrema_GenExtCS* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_GenExtCS>( nativeInstance, true )
    {}

    Extrema_GenExtCS(::Extrema_GenExtCS& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_GenExtCS>( &nativeInstance, false )
    {}

    property ::Extrema_GenExtCS* NativeInstance
    {
        ::Extrema_GenExtCS* get()
        {
            return static_cast<::Extrema_GenExtCS*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Extrema_GenExtCS();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u,v)=distance(S1(u1,v1),S2(u2,v2)) has an
    /// extremum when gradient(F)=0. The algorithm searches
    /// all the zeros inside the definition ranges of the
    /// surfaces.
    /// NbU and NbV are used to locate the close points on the
    /// surface and NbT on the curve to find the zeros.
    /// </summary>
    Extrema_GenExtCS(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, int NbT, int NbU, int NbV, double Tol1, double Tol2);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u,v)=distance(P,S(u,v)) has an
    /// extremum when gradient(F)=0. The algorithm searches
    /// all the zeros inside the definition ranges of the
    /// surface.
    /// NbT,NbU and NbV are used to locate the close points
    /// to find the zeros.
    /// </summary>
    Extrema_GenExtCS(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, int NbT, int NbU, int NbV, double tmin, double tsup, double Umin, double Usup, double Vmin, double Vsup, double Tol1, double Tol2);
    void Initialize(Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double Tol2);
    void Initialize(Macad::Occt::Adaptor3d_Surface^ S, int NbU, int NbV, double Umin, double Usup, double Vmin, double Vsup, double Tol2);
    /// <summary>
    /// the algorithm is done with S
    /// An exception is raised if the fields have not
    /// been initialized.
    /// </summary>
    void Perform(Macad::Occt::Adaptor3d_Curve^ C, int NbT, double Tol1);
    /// <summary>
    /// the algorithm is done with C
    /// An exception is raised if the fields have not
    /// been initialized.
    /// </summary>
    void Perform(Macad::Occt::Adaptor3d_Curve^ C, int NbT, double tmin, double tsup, double Tol1);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth resulting square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the point of the Nth resulting distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv^ PointOnCurve(int N);
    /// <summary>
    /// Returns the point of the Nth resulting distance.
    /// </summary>
    Macad::Occt::Extrema_POnSurf^ PointOnSurface(int N);
}; // class Extrema_GenExtCS

//---------------------------------------------------------------------
//  Class  Extrema_GenExtSS
//---------------------------------------------------------------------
/// <summary>
/// It calculates all the extremum distances
/// between two surfaces.
/// These distances can be minimum or maximum.
/// </summary>
public ref class Extrema_GenExtSS sealed
    : public Macad::Occt::BaseClass<::Extrema_GenExtSS>
{

#ifdef Include_Extrema_GenExtSS_h
public:
    Include_Extrema_GenExtSS_h
#endif

public:
    Extrema_GenExtSS(::Extrema_GenExtSS* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_GenExtSS>( nativeInstance, true )
    {}

    Extrema_GenExtSS(::Extrema_GenExtSS& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_GenExtSS>( &nativeInstance, false )
    {}

    property ::Extrema_GenExtSS* NativeInstance
    {
        ::Extrema_GenExtSS* get()
        {
            return static_cast<::Extrema_GenExtSS*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Extrema_GenExtSS();
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u,v)=distance(S1(u1,v1),S2(u2,v2)) has an
    /// extremum when gradient(F)=0. The algorithm searches
    /// all the zeros inside the definition ranges of the
    /// surfaces.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros.
    /// </summary>
    Extrema_GenExtSS(Macad::Occt::Adaptor3d_Surface^ S1, Macad::Occt::Adaptor3d_Surface^ S2, int NbU, int NbV, double Tol1, double Tol2);
    /// <summary>
    /// It calculates all the distances.
    /// The function F(u,v)=distance(P,S(u,v)) has an
    /// extremum when gradient(F)=0. The algorithm searches
    /// all the zeros inside the definition ranges of the
    /// surface.
    /// NbU and NbV are used to locate the close points
    /// to find the zeros.
    /// </summary>
    Extrema_GenExtSS(Macad::Occt::Adaptor3d_Surface^ S1, Macad::Occt::Adaptor3d_Surface^ S2, int NbU, int NbV, double U1min, double U1sup, double V1min, double V1sup, double U2min, double U2sup, double V2min, double V2sup, double Tol1, double Tol2);
    void Initialize(Macad::Occt::Adaptor3d_Surface^ S2, int NbU, int NbV, double Tol2);
    void Initialize(Macad::Occt::Adaptor3d_Surface^ S2, int NbU, int NbV, double U2min, double U2sup, double V2min, double V2sup, double Tol2);
    /// <summary>
    /// the algorithm is done with S1
    /// An exception is raised if the fields have not
    /// been initialized.
    /// </summary>
    void Perform(Macad::Occt::Adaptor3d_Surface^ S1, double Tol1);
    /// <summary>
    /// the algorithm is done withS1
    /// An exception is raised if the fields have not
    /// been initialized.
    /// </summary>
    void Perform(Macad::Occt::Adaptor3d_Surface^ S1, double U1min, double U1sup, double V1min, double V1sup, double Tol1);
    /// <summary>
    /// Returns True if the distances are found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of extremum distances.
    /// </summary>
    int NbExt();
    /// <summary>
    /// Returns the value of the Nth resulting square distance.
    /// </summary>
    double SquareDistance(int N);
    /// <summary>
    /// Returns the point of the Nth resulting distance.
    /// </summary>
    Macad::Occt::Extrema_POnSurf^ PointOnS1(int N);
    /// <summary>
    /// Returns the point of the Nth resulting distance.
    /// </summary>
    Macad::Occt::Extrema_POnSurf^ PointOnS2(int N);
}; // class Extrema_GenExtSS

//---------------------------------------------------------------------
//  Class  Extrema_GenLocateExtCS
//---------------------------------------------------------------------
/// <summary>
/// With two close points it calculates the distance
/// between two surfaces.
/// This distance can be a minimum or a maximum.
/// </summary>
public ref class Extrema_GenLocateExtCS sealed
    : public Macad::Occt::BaseClass<::Extrema_GenLocateExtCS>
{

#ifdef Include_Extrema_GenLocateExtCS_h
public:
    Include_Extrema_GenLocateExtCS_h
#endif

public:
    Extrema_GenLocateExtCS(::Extrema_GenLocateExtCS* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_GenLocateExtCS>( nativeInstance, true )
    {}

    Extrema_GenLocateExtCS(::Extrema_GenLocateExtCS& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_GenLocateExtCS>( &nativeInstance, false )
    {}

    property ::Extrema_GenLocateExtCS* NativeInstance
    {
        ::Extrema_GenLocateExtCS* get()
        {
            return static_cast<::Extrema_GenLocateExtCS*>(_NativeInstance);
        }
    }

public:
    Extrema_GenLocateExtCS();
    /// <summary>
    /// Calculates the distance with two close points.
    /// The close points are defined by the parameter values
    /// T for C and (U,V) for S.
    /// The function F(t,u,v)=distance(C(t),S(u,v))
    /// has an extremun when gradient(F)=0. The algorithm searches
    /// a zero near the close points.
    /// </summary>
    Extrema_GenLocateExtCS(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double T, double U, double V, double Tol1, double Tol2);
    void Perform(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double T, double U, double V, double Tol1, double Tol2);
    /// <summary>
    /// Returns True if the distance is found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the point of the extremum distance on C.
    /// </summary>
    Macad::Occt::Extrema_POnCurv^ PointOnCurve();
    /// <summary>
    /// Returns the point of the extremum distance on S.
    /// </summary>
    Macad::Occt::Extrema_POnSurf^ PointOnSurface();
}; // class Extrema_GenLocateExtCS

//---------------------------------------------------------------------
//  Class  Extrema_GenLocateExtPS
//---------------------------------------------------------------------
/// <summary>
/// With a close point, it calculates the distance
/// between a point and a surface.
/// Criteria type is defined in "Perform" method.
/// </summary>
public ref class Extrema_GenLocateExtPS sealed
    : public Macad::Occt::BaseClass<::Extrema_GenLocateExtPS>
{

#ifdef Include_Extrema_GenLocateExtPS_h
public:
    Include_Extrema_GenLocateExtPS_h
#endif

public:
    Extrema_GenLocateExtPS(::Extrema_GenLocateExtPS* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_GenLocateExtPS>( nativeInstance, true )
    {}

    Extrema_GenLocateExtPS(::Extrema_GenLocateExtPS& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_GenLocateExtPS>( &nativeInstance, false )
    {}

    property ::Extrema_GenLocateExtPS* NativeInstance
    {
        ::Extrema_GenLocateExtPS* get()
        {
            return static_cast<::Extrema_GenLocateExtPS*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor.
    /// </summary>
    Extrema_GenLocateExtPS(Macad::Occt::Adaptor3d_Surface^ theS, double theTolU, double theTolV);
    /// <summary>
    /// Constructor.
    /// </summary>
    Extrema_GenLocateExtPS(Macad::Occt::Adaptor3d_Surface^ theS, double theTolU);
    /// <summary>
    /// Constructor.
    /// </summary>
    Extrema_GenLocateExtPS(Macad::Occt::Adaptor3d_Surface^ theS);
    /// <summary>
    /// Calculates the extrema between the point and the surface using a close point.
    /// The close point is defined by the parameter values theU0 and theV0.
    /// Type of the algorithm depends on the isDistanceCriteria flag.
    /// If flag value is false - normal projection criteria will be used.
    /// If flag value is true - distance criteria will be used.
    /// </summary>
    void Perform(Macad::Occt::Pnt theP, double theU0, double theV0, bool isDistanceCriteria);
    /// <summary>
    /// Calculates the extrema between the point and the surface using a close point.
    /// The close point is defined by the parameter values theU0 and theV0.
    /// Type of the algorithm depends on the isDistanceCriteria flag.
    /// If flag value is false - normal projection criteria will be used.
    /// If flag value is true - distance criteria will be used.
    /// </summary>
    void Perform(Macad::Occt::Pnt theP, double theU0, double theV0);
    /// <summary>
    /// Returns True if the distance is found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the point of the extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnSurf^ Point();
    /// <summary>
    /// Returns True if UV point theU0, theV0 is point of local minimum of square distance between
    /// point theP and points theS(U, V), U, V are in small area around theU0, theV0
    /// </summary>
    static bool IsMinDist(Macad::Occt::Pnt theP, Macad::Occt::Adaptor3d_Surface^ theS, double theU0, double theV0);
}; // class Extrema_GenLocateExtPS

//---------------------------------------------------------------------
//  Class  Extrema_GenLocateExtSS
//---------------------------------------------------------------------
/// <summary>
/// With two close points it calculates the distance
/// between two surfaces.
/// This distance can be a minimum or a maximum.
/// </summary>
public ref class Extrema_GenLocateExtSS sealed
    : public Macad::Occt::BaseClass<::Extrema_GenLocateExtSS>
{

#ifdef Include_Extrema_GenLocateExtSS_h
public:
    Include_Extrema_GenLocateExtSS_h
#endif

public:
    Extrema_GenLocateExtSS(::Extrema_GenLocateExtSS* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_GenLocateExtSS>( nativeInstance, true )
    {}

    Extrema_GenLocateExtSS(::Extrema_GenLocateExtSS& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_GenLocateExtSS>( &nativeInstance, false )
    {}

    property ::Extrema_GenLocateExtSS* NativeInstance
    {
        ::Extrema_GenLocateExtSS* get()
        {
            return static_cast<::Extrema_GenLocateExtSS*>(_NativeInstance);
        }
    }

public:
    Extrema_GenLocateExtSS();
    /// <summary>
    /// Calculates the distance with two close points.
    /// The close points are defined by the parameter values
    /// (U1,V1) for S1 and (U2,V2) for S2.
    /// The function F(u1,v1,u2,v2)=distance(S1(u1,v1),S2(u2,v2))
    /// has an extremun when gradient(F)=0. The algorithm searches
    /// a zero near the close points.
    /// </summary>
    Extrema_GenLocateExtSS(Macad::Occt::Adaptor3d_Surface^ S1, Macad::Occt::Adaptor3d_Surface^ S2, double U1, double V1, double U2, double V2, double Tol1, double Tol2);
    void Perform(Macad::Occt::Adaptor3d_Surface^ S1, Macad::Occt::Adaptor3d_Surface^ S2, double U1, double V1, double U2, double V2, double Tol1, double Tol2);
    /// <summary>
    /// Returns True if the distance is found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the point of the extremum distance on S1.
    /// </summary>
    Macad::Occt::Extrema_POnSurf^ PointOnS1();
    /// <summary>
    /// Returns the point of the extremum distance on S2.
    /// </summary>
    Macad::Occt::Extrema_POnSurf^ PointOnS2();
}; // class Extrema_GenLocateExtSS

//---------------------------------------------------------------------
//  Class  Extrema_HArray1OfPOnCurv2d
//---------------------------------------------------------------------
public ref class Extrema_HArray1OfPOnCurv2d sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Extrema_POnCurv2d^>
{

#ifdef Include_Extrema_HArray1OfPOnCurv2d_h
public:
    Include_Extrema_HArray1OfPOnCurv2d_h
#endif

public:
    Extrema_HArray1OfPOnCurv2d(::Extrema_HArray1OfPOnCurv2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Extrema_HArray1OfPOnCurv2d(::Extrema_HArray1OfPOnCurv2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Extrema_HArray1OfPOnCurv2d* NativeInstance
    {
        ::Extrema_HArray1OfPOnCurv2d* get()
        {
            return static_cast<::Extrema_HArray1OfPOnCurv2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_HArray1OfPOnCurv2d::Iterator>
    {

#ifdef Include_Extrema_HArray1OfPOnCurv2d_Iterator_h
    public:
        Include_Extrema_HArray1OfPOnCurv2d_Iterator_h
#endif

    public:
        Iterator(::Extrema_HArray1OfPOnCurv2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_HArray1OfPOnCurv2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_HArray1OfPOnCurv2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_HArray1OfPOnCurv2d::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_HArray1OfPOnCurv2d::Iterator* NativeInstance
        {
            ::Extrema_HArray1OfPOnCurv2d::Iterator* get()
            {
                return static_cast<::Extrema_HArray1OfPOnCurv2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Extrema_HArray1OfPOnCurv2d();
    Extrema_HArray1OfPOnCurv2d(int theLower, int theUpper);
    Extrema_HArray1OfPOnCurv2d(int theLower, int theUpper, Macad::Occt::Extrema_POnCurv2d^ theValue);
    Extrema_HArray1OfPOnCurv2d(Macad::Occt::Extrema_POnCurv2d^ theBegin, int theLower, int theUpper, bool parameter1);
    Extrema_HArray1OfPOnCurv2d(Macad::Occt::Extrema_Array1OfPOnCurv2d^ theOther);
    Macad::Occt::Extrema_Array1OfPOnCurv2d^ Array1();
    Macad::Occt::Extrema_Array1OfPOnCurv2d^ ChangeArray1();
    void Init(Macad::Occt::Extrema_POnCurv2d^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Extrema_HArray1OfPOnCurv2d^ Assign(Macad::Occt::Extrema_HArray1OfPOnCurv2d^ theOther);
    Macad::Occt::Extrema_HArray1OfPOnCurv2d^ Move(Macad::Occt::Extrema_HArray1OfPOnCurv2d^ theOther);
    Macad::Occt::Extrema_POnCurv2d^ First();
    Macad::Occt::Extrema_POnCurv2d^ ChangeFirst();
    Macad::Occt::Extrema_POnCurv2d^ Last();
    Macad::Occt::Extrema_POnCurv2d^ ChangeLast();
    virtual Macad::Occt::Extrema_POnCurv2d^ Value(int theIndex);
    Macad::Occt::Extrema_POnCurv2d^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Extrema_POnCurv2d^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::Extrema_HArray1OfPOnCurv2d^ CreateDowncasted(::Extrema_HArray1OfPOnCurv2d* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Extrema_POnCurv2d^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Extrema_HArray1OfPOnCurv2d

//---------------------------------------------------------------------
//  Class  Extrema_HArray2OfPOnCurv
//---------------------------------------------------------------------
public ref class Extrema_HArray2OfPOnCurv sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Extrema_HArray2OfPOnCurv_h
public:
    Include_Extrema_HArray2OfPOnCurv_h
#endif

public:
    Extrema_HArray2OfPOnCurv(::Extrema_HArray2OfPOnCurv* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Extrema_HArray2OfPOnCurv(::Extrema_HArray2OfPOnCurv& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Extrema_HArray2OfPOnCurv* NativeInstance
    {
        ::Extrema_HArray2OfPOnCurv* get()
        {
            return static_cast<::Extrema_HArray2OfPOnCurv*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_HArray2OfPOnCurv::Iterator>
    {

#ifdef Include_Extrema_HArray2OfPOnCurv_Iterator_h
    public:
        Include_Extrema_HArray2OfPOnCurv_Iterator_h
#endif

    public:
        Iterator(::Extrema_HArray2OfPOnCurv::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_HArray2OfPOnCurv::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_HArray2OfPOnCurv::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_HArray2OfPOnCurv::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_HArray2OfPOnCurv::Iterator* NativeInstance
        {
            ::Extrema_HArray2OfPOnCurv::Iterator* get()
            {
                return static_cast<::Extrema_HArray2OfPOnCurv::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Extrema_HArray2OfPOnCurv(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    Extrema_HArray2OfPOnCurv(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Extrema_POnCurv^ theValue);
    Extrema_HArray2OfPOnCurv(Macad::Occt::Extrema_Array2OfPOnCurv^ theOther);
    Macad::Occt::Extrema_Array2OfPOnCurv^ Array2();
    Macad::Occt::Extrema_Array2OfPOnCurv^ ChangeArray2();
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::Extrema_HArray2OfPOnCurv^ Assign(Macad::Occt::Extrema_HArray2OfPOnCurv^ theOther);
    Macad::Occt::Extrema_HArray2OfPOnCurv^ Move(Macad::Occt::Extrema_HArray2OfPOnCurv^ theOther);
    Macad::Occt::Extrema_POnCurv^ Value(int theRow, int theCol);
    Macad::Occt::Extrema_POnCurv^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnCurv^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Extrema_POnCurv^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Extrema_POnCurv^ First();
    Macad::Occt::Extrema_POnCurv^ ChangeFirst();
    Macad::Occt::Extrema_POnCurv^ Last();
    Macad::Occt::Extrema_POnCurv^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::Extrema_HArray2OfPOnCurv^ CreateDowncasted(::Extrema_HArray2OfPOnCurv* instance);
}; // class Extrema_HArray2OfPOnCurv

//---------------------------------------------------------------------
//  Class  Extrema_HArray2OfPOnCurv2d
//---------------------------------------------------------------------
public ref class Extrema_HArray2OfPOnCurv2d sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Extrema_HArray2OfPOnCurv2d_h
public:
    Include_Extrema_HArray2OfPOnCurv2d_h
#endif

public:
    Extrema_HArray2OfPOnCurv2d(::Extrema_HArray2OfPOnCurv2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Extrema_HArray2OfPOnCurv2d(::Extrema_HArray2OfPOnCurv2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Extrema_HArray2OfPOnCurv2d* NativeInstance
    {
        ::Extrema_HArray2OfPOnCurv2d* get()
        {
            return static_cast<::Extrema_HArray2OfPOnCurv2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_HArray2OfPOnCurv2d::Iterator>
    {

#ifdef Include_Extrema_HArray2OfPOnCurv2d_Iterator_h
    public:
        Include_Extrema_HArray2OfPOnCurv2d_Iterator_h
#endif

    public:
        Iterator(::Extrema_HArray2OfPOnCurv2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_HArray2OfPOnCurv2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_HArray2OfPOnCurv2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_HArray2OfPOnCurv2d::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_HArray2OfPOnCurv2d::Iterator* NativeInstance
        {
            ::Extrema_HArray2OfPOnCurv2d::Iterator* get()
            {
                return static_cast<::Extrema_HArray2OfPOnCurv2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Extrema_HArray2OfPOnCurv2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    Extrema_HArray2OfPOnCurv2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Extrema_POnCurv2d^ theValue);
    Extrema_HArray2OfPOnCurv2d(Macad::Occt::Extrema_Array2OfPOnCurv2d^ theOther);
    Macad::Occt::Extrema_Array2OfPOnCurv2d^ Array2();
    Macad::Occt::Extrema_Array2OfPOnCurv2d^ ChangeArray2();
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::Extrema_HArray2OfPOnCurv2d^ Assign(Macad::Occt::Extrema_HArray2OfPOnCurv2d^ theOther);
    Macad::Occt::Extrema_HArray2OfPOnCurv2d^ Move(Macad::Occt::Extrema_HArray2OfPOnCurv2d^ theOther);
    Macad::Occt::Extrema_POnCurv2d^ Value(int theRow, int theCol);
    Macad::Occt::Extrema_POnCurv2d^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnCurv2d^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Extrema_POnCurv2d^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Extrema_POnCurv2d^ First();
    Macad::Occt::Extrema_POnCurv2d^ ChangeFirst();
    Macad::Occt::Extrema_POnCurv2d^ Last();
    Macad::Occt::Extrema_POnCurv2d^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::Extrema_HArray2OfPOnCurv2d^ CreateDowncasted(::Extrema_HArray2OfPOnCurv2d* instance);
}; // class Extrema_HArray2OfPOnCurv2d

//---------------------------------------------------------------------
//  Class  Extrema_HArray2OfPOnSurf
//---------------------------------------------------------------------
public ref class Extrema_HArray2OfPOnSurf sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Extrema_HArray2OfPOnSurf_h
public:
    Include_Extrema_HArray2OfPOnSurf_h
#endif

public:
    Extrema_HArray2OfPOnSurf(::Extrema_HArray2OfPOnSurf* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Extrema_HArray2OfPOnSurf(::Extrema_HArray2OfPOnSurf& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Extrema_HArray2OfPOnSurf* NativeInstance
    {
        ::Extrema_HArray2OfPOnSurf* get()
        {
            return static_cast<::Extrema_HArray2OfPOnSurf*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Extrema_HArray2OfPOnSurf::Iterator>
    {

#ifdef Include_Extrema_HArray2OfPOnSurf_Iterator_h
    public:
        Include_Extrema_HArray2OfPOnSurf_Iterator_h
#endif

    public:
        Iterator(::Extrema_HArray2OfPOnSurf::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_HArray2OfPOnSurf::Iterator>( nativeInstance, true )
        {}

        Iterator(::Extrema_HArray2OfPOnSurf::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Extrema_HArray2OfPOnSurf::Iterator>( &nativeInstance, false )
        {}

        property ::Extrema_HArray2OfPOnSurf::Iterator* NativeInstance
        {
            ::Extrema_HArray2OfPOnSurf::Iterator* get()
            {
                return static_cast<::Extrema_HArray2OfPOnSurf::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Extrema_HArray2OfPOnSurf(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    Extrema_HArray2OfPOnSurf(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Extrema_POnSurf^ theValue);
    Extrema_HArray2OfPOnSurf(Macad::Occt::Extrema_Array2OfPOnSurf^ theOther);
    Macad::Occt::Extrema_Array2OfPOnSurf^ Array2();
    Macad::Occt::Extrema_Array2OfPOnSurf^ ChangeArray2();
    static int BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper);
    static int LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::Extrema_HArray2OfPOnSurf^ Assign(Macad::Occt::Extrema_HArray2OfPOnSurf^ theOther);
    Macad::Occt::Extrema_HArray2OfPOnSurf^ Move(Macad::Occt::Extrema_HArray2OfPOnSurf^ theOther);
    Macad::Occt::Extrema_POnSurf^ Value(int theRow, int theCol);
    Macad::Occt::Extrema_POnSurf^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Extrema_POnSurf^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Extrema_POnSurf^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Extrema_POnSurf^ First();
    Macad::Occt::Extrema_POnSurf^ ChangeFirst();
    Macad::Occt::Extrema_POnSurf^ Last();
    Macad::Occt::Extrema_POnSurf^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::Extrema_HArray2OfPOnSurf^ CreateDowncasted(::Extrema_HArray2OfPOnSurf* instance);
}; // class Extrema_HArray2OfPOnSurf

//---------------------------------------------------------------------
//  Class  Extrema_LocateExtCC
//---------------------------------------------------------------------
/// <summary>
/// It calculates the distance between two curves with
/// a close point; these distances can be maximum or
/// minimum.
/// </summary>
public ref class Extrema_LocateExtCC sealed
    : public Macad::Occt::BaseClass<::Extrema_LocateExtCC>
{

#ifdef Include_Extrema_LocateExtCC_h
public:
    Include_Extrema_LocateExtCC_h
#endif

public:
    Extrema_LocateExtCC(::Extrema_LocateExtCC* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocateExtCC>( nativeInstance, true )
    {}

    Extrema_LocateExtCC(::Extrema_LocateExtCC& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocateExtCC>( &nativeInstance, false )
    {}

    property ::Extrema_LocateExtCC* NativeInstance
    {
        ::Extrema_LocateExtCC* get()
        {
            return static_cast<::Extrema_LocateExtCC*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Calculates the distance with a close point. The
    /// close point is defined by a parameter value on each
    /// curve.
    /// The function F(u,v)=distance(C1(u),C2(v)) has an
    /// extremun when gradient(f)=0. The algorithm searches
    /// the zero near the close point.
    /// </summary>
    Extrema_LocateExtCC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U0, double V0);
    /// <summary>
    /// Returns True if the distance is found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the points of the extremum distance.
    /// P1 is on the first curve, P2 on the second one.
    /// </summary>
    void Point(Macad::Occt::Extrema_POnCurv^ P1, Macad::Occt::Extrema_POnCurv^ P2);
}; // class Extrema_LocateExtCC

//---------------------------------------------------------------------
//  Class  Extrema_LocateExtCC2d
//---------------------------------------------------------------------
/// <summary>
/// It calculates the distance between two curves with
/// a close point; these distances can be maximum or
/// minimum.
/// </summary>
public ref class Extrema_LocateExtCC2d sealed
    : public Macad::Occt::BaseClass<::Extrema_LocateExtCC2d>
{

#ifdef Include_Extrema_LocateExtCC2d_h
public:
    Include_Extrema_LocateExtCC2d_h
#endif

public:
    Extrema_LocateExtCC2d(::Extrema_LocateExtCC2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocateExtCC2d>( nativeInstance, true )
    {}

    Extrema_LocateExtCC2d(::Extrema_LocateExtCC2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocateExtCC2d>( &nativeInstance, false )
    {}

    property ::Extrema_LocateExtCC2d* NativeInstance
    {
        ::Extrema_LocateExtCC2d* get()
        {
            return static_cast<::Extrema_LocateExtCC2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Calculates the distance with a close point. The
    /// close point is defined by a parameter value on each
    /// curve.
    /// The function F(u,v)=distance(C1(u),C2(v)) has an
    /// extremun when gradient(f)=0. The algorithm searches
    /// the zero near the close point.
    /// </summary>
    Extrema_LocateExtCC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double U0, double V0);
    /// <summary>
    /// Returns True if the distance is found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the points of the extremum distance.
    /// P1 is on the first curve, P2 on the second one.
    /// </summary>
    void Point(Macad::Occt::Extrema_POnCurv2d^ P1, Macad::Occt::Extrema_POnCurv2d^ P2);
}; // class Extrema_LocateExtCC2d

//---------------------------------------------------------------------
//  Class  Extrema_LocEPCOfLocateExtPC
//---------------------------------------------------------------------
public ref class Extrema_LocEPCOfLocateExtPC sealed
    : public Macad::Occt::BaseClass<::Extrema_LocEPCOfLocateExtPC>
{

#ifdef Include_Extrema_LocEPCOfLocateExtPC_h
public:
    Include_Extrema_LocEPCOfLocateExtPC_h
#endif

public:
    Extrema_LocEPCOfLocateExtPC(::Extrema_LocEPCOfLocateExtPC* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocEPCOfLocateExtPC>( nativeInstance, true )
    {}

    Extrema_LocEPCOfLocateExtPC(::Extrema_LocEPCOfLocateExtPC& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocEPCOfLocateExtPC>( &nativeInstance, false )
    {}

    property ::Extrema_LocEPCOfLocateExtPC* NativeInstance
    {
        ::Extrema_LocEPCOfLocateExtPC* get()
        {
            return static_cast<::Extrema_LocEPCOfLocateExtPC*>(_NativeInstance);
        }
    }

public:
    Extrema_LocEPCOfLocateExtPC();
    /// <summary>
    /// Calculates the distance with a close point.
    /// The close point is defined by the parameter value
    /// U0.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches a zero
    /// near the close point.
    /// TolU is used to decide to stop the iterations.
    /// At the nth iteration, the criteria is:
    /// abs(Un - Un-1) < TolU.
    /// </summary>
    Extrema_LocEPCOfLocateExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double U0, double TolU);
    /// <summary>
    /// Calculates the distance with a close point.
    /// The close point is defined by the parameter value
    /// U0.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches a zero
    /// near the close point.
    /// Zeros are searched between Umin et Usup.
    /// TolU is used to decide to stop the iterations.
    /// At the nth iteration, the criteria is:
    /// abs(Un - Un-1) < TolU.
    /// </summary>
    Extrema_LocEPCOfLocateExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double U0, double Umin, double Usup, double TolU);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Umin, double Usup, double TolU);
    /// <summary>
    /// the algorithm is done with the point P.
    /// An exception is raised if the fields have not
    /// been initialized.
    /// </summary>
    void Perform(Macad::Occt::Pnt P, double U0);
    /// <summary>
    /// Returns True if the distance is found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns True if the extremum distance is a minimum.
    /// </summary>
    bool IsMin();
    /// <summary>
    /// Returns the point of the extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv^ Point();
}; // class Extrema_LocEPCOfLocateExtPC

//---------------------------------------------------------------------
//  Class  Extrema_LocateExtPC
//---------------------------------------------------------------------
public ref class Extrema_LocateExtPC sealed
    : public Macad::Occt::BaseClass<::Extrema_LocateExtPC>
{

#ifdef Include_Extrema_LocateExtPC_h
public:
    Include_Extrema_LocateExtPC_h
#endif

public:
    Extrema_LocateExtPC(::Extrema_LocateExtPC* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocateExtPC>( nativeInstance, true )
    {}

    Extrema_LocateExtPC(::Extrema_LocateExtPC& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocateExtPC>( &nativeInstance, false )
    {}

    property ::Extrema_LocateExtPC* NativeInstance
    {
        ::Extrema_LocateExtPC* get()
        {
            return static_cast<::Extrema_LocateExtPC*>(_NativeInstance);
        }
    }

public:
    Extrema_LocateExtPC();
    /// <summary>
    /// Calculates the distance with a close point.
    /// The close point is defined by the parameter value
    /// U0.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches a zero
    /// near the close point.
    /// TolF is used to decide to stop the iterations.
    /// At the nth iteration, the criteria is:
    /// abs(Un - Un-1) < TolF.
    /// </summary>
    Extrema_LocateExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double U0, double TolF);
    /// <summary>
    /// Calculates the distance with a close point.
    /// The close point is defined by the parameter value
    /// U0.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches a zero
    /// near the close point.
    /// Zeros are searched between Umin et Usup.
    /// TolF is used to decide to stop the iterations.
    /// At the nth iteration, the criteria is:
    /// abs(Un - Un-1) < TolF.
    /// </summary>
    Extrema_LocateExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double U0, double Umin, double Usup, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Umin, double Usup, double TolF);
    void Perform(Macad::Occt::Pnt P, double U0);
    /// <summary>
    /// Returns True if the distance is found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns True if the extremum distance is a minimum.
    /// </summary>
    bool IsMin();
    /// <summary>
    /// Returns the point of the extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv^ Point();
}; // class Extrema_LocateExtPC

//---------------------------------------------------------------------
//  Class  Extrema_LocEPCOfLocateExtPC2d
//---------------------------------------------------------------------
public ref class Extrema_LocEPCOfLocateExtPC2d sealed
    : public Macad::Occt::BaseClass<::Extrema_LocEPCOfLocateExtPC2d>
{

#ifdef Include_Extrema_LocEPCOfLocateExtPC2d_h
public:
    Include_Extrema_LocEPCOfLocateExtPC2d_h
#endif

public:
    Extrema_LocEPCOfLocateExtPC2d(::Extrema_LocEPCOfLocateExtPC2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocEPCOfLocateExtPC2d>( nativeInstance, true )
    {}

    Extrema_LocEPCOfLocateExtPC2d(::Extrema_LocEPCOfLocateExtPC2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocEPCOfLocateExtPC2d>( &nativeInstance, false )
    {}

    property ::Extrema_LocEPCOfLocateExtPC2d* NativeInstance
    {
        ::Extrema_LocEPCOfLocateExtPC2d* get()
        {
            return static_cast<::Extrema_LocEPCOfLocateExtPC2d*>(_NativeInstance);
        }
    }

public:
    Extrema_LocEPCOfLocateExtPC2d();
    /// <summary>
    /// Calculates the distance with a close point.
    /// The close point is defined by the parameter value
    /// U0.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches a zero
    /// near the close point.
    /// TolU is used to decide to stop the iterations.
    /// At the nth iteration, the criteria is:
    /// abs(Un - Un-1) < TolU.
    /// </summary>
    Extrema_LocEPCOfLocateExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, double U0, double TolU);
    /// <summary>
    /// Calculates the distance with a close point.
    /// The close point is defined by the parameter value
    /// U0.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches a zero
    /// near the close point.
    /// Zeros are searched between Umin et Usup.
    /// TolU is used to decide to stop the iterations.
    /// At the nth iteration, the criteria is:
    /// abs(Un - Un-1) < TolU.
    /// </summary>
    Extrema_LocEPCOfLocateExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, double U0, double Umin, double Usup, double TolU);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C, double Umin, double Usup, double TolU);
    /// <summary>
    /// the algorithm is done with the point P.
    /// An exception is raised if the fields have not
    /// been initialized.
    /// </summary>
    void Perform(Macad::Occt::Pnt2d P, double U0);
    /// <summary>
    /// Returns True if the distance is found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns True if the extremum distance is a minimum.
    /// </summary>
    bool IsMin();
    /// <summary>
    /// Returns the point of the extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv2d^ Point();
}; // class Extrema_LocEPCOfLocateExtPC2d

//---------------------------------------------------------------------
//  Class  Extrema_LocateExtPC2d
//---------------------------------------------------------------------
public ref class Extrema_LocateExtPC2d sealed
    : public Macad::Occt::BaseClass<::Extrema_LocateExtPC2d>
{

#ifdef Include_Extrema_LocateExtPC2d_h
public:
    Include_Extrema_LocateExtPC2d_h
#endif

public:
    Extrema_LocateExtPC2d(::Extrema_LocateExtPC2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocateExtPC2d>( nativeInstance, true )
    {}

    Extrema_LocateExtPC2d(::Extrema_LocateExtPC2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocateExtPC2d>( &nativeInstance, false )
    {}

    property ::Extrema_LocateExtPC2d* NativeInstance
    {
        ::Extrema_LocateExtPC2d* get()
        {
            return static_cast<::Extrema_LocateExtPC2d*>(_NativeInstance);
        }
    }

public:
    Extrema_LocateExtPC2d();
    /// <summary>
    /// Calculates the distance with a close point.
    /// The close point is defined by the parameter value
    /// U0.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches a zero
    /// near the close point.
    /// TolF is used to decide to stop the iterations.
    /// At the nth iteration, the criteria is:
    /// abs(Un - Un-1) < TolF.
    /// </summary>
    Extrema_LocateExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, double U0, double TolF);
    /// <summary>
    /// Calculates the distance with a close point.
    /// The close point is defined by the parameter value
    /// U0.
    /// The function F(u)=distance(P,C(u)) has an extremum
    /// when g(u)=dF/du=0. The algorithm searches a zero
    /// near the close point.
    /// Zeros are searched between Umin et Usup.
    /// TolF is used to decide to stop the iterations.
    /// At the nth iteration, the criteria is:
    /// abs(Un - Un-1) < TolF.
    /// </summary>
    Extrema_LocateExtPC2d(Macad::Occt::Pnt2d P, Macad::Occt::Adaptor2d_Curve2d^ C, double U0, double Umin, double Usup, double TolF);
    /// <summary>
    /// sets the fields of the algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ C, double Umin, double Usup, double TolF);
    void Perform(Macad::Occt::Pnt2d P, double U0);
    /// <summary>
    /// Returns True if the distance is found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns True if the extremum distance is a minimum.
    /// </summary>
    bool IsMin();
    /// <summary>
    /// Returns the point of the extremum distance.
    /// </summary>
    Macad::Occt::Extrema_POnCurv2d^ Point();
}; // class Extrema_LocateExtPC2d

//---------------------------------------------------------------------
//  Class  Extrema_LocECC
//---------------------------------------------------------------------
public ref class Extrema_LocECC sealed
    : public Macad::Occt::BaseClass<::Extrema_LocECC>
{

#ifdef Include_Extrema_LocECC_h
public:
    Include_Extrema_LocECC_h
#endif

public:
    Extrema_LocECC(::Extrema_LocECC* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocECC>( nativeInstance, true )
    {}

    Extrema_LocECC(::Extrema_LocECC& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocECC>( &nativeInstance, false )
    {}

    property ::Extrema_LocECC* NativeInstance
    {
        ::Extrema_LocECC* get()
        {
            return static_cast<::Extrema_LocECC*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Calculates the distance with a close point. The
    /// close point is defined by a parameter value on each
    /// curve.
    /// The function F(u,v)=distance(C1(u),C2(v)) has an
    /// extremun when gradient(f)=0. The algorithm searches
    /// the zero near the close point.
    /// </summary>
    Extrema_LocECC(Macad::Occt::Adaptor3d_Curve^ C1, Macad::Occt::Adaptor3d_Curve^ C2, double U0, double V0, double TolU, double TolV);
    /// <summary>
    /// Returns True if the distance is found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the points of the extremum distance.
    /// P1 is on the first curve, P2 on the second one.
    /// </summary>
    void Point(Macad::Occt::Extrema_POnCurv^ P1, Macad::Occt::Extrema_POnCurv^ P2);
}; // class Extrema_LocECC

//---------------------------------------------------------------------
//  Class  Extrema_LocECC2d
//---------------------------------------------------------------------
public ref class Extrema_LocECC2d sealed
    : public Macad::Occt::BaseClass<::Extrema_LocECC2d>
{

#ifdef Include_Extrema_LocECC2d_h
public:
    Include_Extrema_LocECC2d_h
#endif

public:
    Extrema_LocECC2d(::Extrema_LocECC2d* nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocECC2d>( nativeInstance, true )
    {}

    Extrema_LocECC2d(::Extrema_LocECC2d& nativeInstance)
        : Macad::Occt::BaseClass<::Extrema_LocECC2d>( &nativeInstance, false )
    {}

    property ::Extrema_LocECC2d* NativeInstance
    {
        ::Extrema_LocECC2d* get()
        {
            return static_cast<::Extrema_LocECC2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Calculates the distance with a close point. The
    /// close point is defined by a parameter value on each
    /// curve.
    /// The function F(u,v)=distance(C1(u),C2(v)) has an
    /// extremun when gradient(f)=0. The algorithm searches
    /// the zero near the close point.
    /// </summary>
    Extrema_LocECC2d(Macad::Occt::Adaptor2d_Curve2d^ C1, Macad::Occt::Adaptor2d_Curve2d^ C2, double U0, double V0, double TolU, double TolV);
    /// <summary>
    /// Returns True if the distance is found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the value of the extremum square distance.
    /// </summary>
    double SquareDistance();
    /// <summary>
    /// Returns the points of the extremum distance.
    /// P1 is on the first curve, P2 on the second one.
    /// </summary>
    void Point(Macad::Occt::Extrema_POnCurv2d^ P1, Macad::Occt::Extrema_POnCurv2d^ P2);
}; // class Extrema_LocECC2d

}; // namespace Occt
}; // namespace Macad
