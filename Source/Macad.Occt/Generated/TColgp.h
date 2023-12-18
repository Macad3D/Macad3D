// Generated wrapper code for package TColgp

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TColgp_Array1OfCirc2d
//---------------------------------------------------------------------
public ref class TColgp_Array1OfCirc2d sealed
    : public Macad::Occt::BaseClass<::TColgp_Array1OfCirc2d>
    , public IIndexEnumerable<Macad::Occt::gp_Circ2d^>
{

#ifdef Include_TColgp_Array1OfCirc2d_h
public:
    Include_TColgp_Array1OfCirc2d_h
#endif

public:
    TColgp_Array1OfCirc2d(::TColgp_Array1OfCirc2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfCirc2d>( nativeInstance, true )
    {}

    TColgp_Array1OfCirc2d(::TColgp_Array1OfCirc2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfCirc2d>( &nativeInstance, false )
    {}

    property ::TColgp_Array1OfCirc2d* NativeInstance
    {
        ::TColgp_Array1OfCirc2d* get()
        {
            return static_cast<::TColgp_Array1OfCirc2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array1OfCirc2d::Iterator>
    {

#ifdef Include_TColgp_Array1OfCirc2d_Iterator_h
    public:
        Include_TColgp_Array1OfCirc2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array1OfCirc2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfCirc2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array1OfCirc2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfCirc2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array1OfCirc2d::Iterator* NativeInstance
        {
            ::TColgp_Array1OfCirc2d::Iterator* get()
            {
                return static_cast<::TColgp_Array1OfCirc2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array1OfCirc2d();
    TColgp_Array1OfCirc2d(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array1OfCirc2d(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColgp_Array1OfCirc2d(Macad::Occt::gp_Circ2d^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColgp_Array1OfCirc2d(Macad::Occt::gp_Circ2d^ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::gp_Circ2d^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_Array1OfCirc2d^ Assign(Macad::Occt::TColgp_Array1OfCirc2d^ theOther);
    Macad::Occt::TColgp_Array1OfCirc2d^ Move(Macad::Occt::TColgp_Array1OfCirc2d^ theOther);
    Macad::Occt::gp_Circ2d^ First();
    Macad::Occt::gp_Circ2d^ ChangeFirst();
    Macad::Occt::gp_Circ2d^ Last();
    Macad::Occt::gp_Circ2d^ ChangeLast();
    virtual Macad::Occt::gp_Circ2d^ Value(int theIndex);
    Macad::Occt::gp_Circ2d^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::gp_Circ2d^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::gp_Circ2d^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_Array1OfCirc2d

//---------------------------------------------------------------------
//  Class  TColgp_Array1OfDir
//---------------------------------------------------------------------
public ref class TColgp_Array1OfDir sealed
    : public Macad::Occt::BaseClass<::TColgp_Array1OfDir>
    , public IIndexEnumerable<Macad::Occt::Dir>
{

#ifdef Include_TColgp_Array1OfDir_h
public:
    Include_TColgp_Array1OfDir_h
#endif

public:
    TColgp_Array1OfDir(::TColgp_Array1OfDir* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfDir>( nativeInstance, true )
    {}

    TColgp_Array1OfDir(::TColgp_Array1OfDir& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfDir>( &nativeInstance, false )
    {}

    property ::TColgp_Array1OfDir* NativeInstance
    {
        ::TColgp_Array1OfDir* get()
        {
            return static_cast<::TColgp_Array1OfDir*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array1OfDir::Iterator>
    {

#ifdef Include_TColgp_Array1OfDir_Iterator_h
    public:
        Include_TColgp_Array1OfDir_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array1OfDir::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfDir::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array1OfDir::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfDir::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array1OfDir::Iterator* NativeInstance
        {
            ::TColgp_Array1OfDir::Iterator* get()
            {
                return static_cast<::TColgp_Array1OfDir::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array1OfDir();
    TColgp_Array1OfDir(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array1OfDir(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColgp_Array1OfDir(Macad::Occt::Dir theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColgp_Array1OfDir(Macad::Occt::Dir theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Dir theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_Array1OfDir^ Assign(Macad::Occt::TColgp_Array1OfDir^ theOther);
    Macad::Occt::TColgp_Array1OfDir^ Move(Macad::Occt::TColgp_Array1OfDir^ theOther);
    Macad::Occt::Dir First();
    Macad::Occt::Dir ChangeFirst();
    Macad::Occt::Dir Last();
    Macad::Occt::Dir ChangeLast();
    virtual Macad::Occt::Dir Value(int theIndex);
    Macad::Occt::Dir ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Dir theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Dir>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_Array1OfDir

//---------------------------------------------------------------------
//  Class  TColgp_Array1OfDir2d
//---------------------------------------------------------------------
public ref class TColgp_Array1OfDir2d sealed
    : public Macad::Occt::BaseClass<::TColgp_Array1OfDir2d>
    , public IIndexEnumerable<Macad::Occt::Dir2d>
{

#ifdef Include_TColgp_Array1OfDir2d_h
public:
    Include_TColgp_Array1OfDir2d_h
#endif

public:
    TColgp_Array1OfDir2d(::TColgp_Array1OfDir2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfDir2d>( nativeInstance, true )
    {}

    TColgp_Array1OfDir2d(::TColgp_Array1OfDir2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfDir2d>( &nativeInstance, false )
    {}

    property ::TColgp_Array1OfDir2d* NativeInstance
    {
        ::TColgp_Array1OfDir2d* get()
        {
            return static_cast<::TColgp_Array1OfDir2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array1OfDir2d::Iterator>
    {

#ifdef Include_TColgp_Array1OfDir2d_Iterator_h
    public:
        Include_TColgp_Array1OfDir2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array1OfDir2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfDir2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array1OfDir2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfDir2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array1OfDir2d::Iterator* NativeInstance
        {
            ::TColgp_Array1OfDir2d::Iterator* get()
            {
                return static_cast<::TColgp_Array1OfDir2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array1OfDir2d();
    TColgp_Array1OfDir2d(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array1OfDir2d(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColgp_Array1OfDir2d(Macad::Occt::Dir2d theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColgp_Array1OfDir2d(Macad::Occt::Dir2d theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Dir2d theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_Array1OfDir2d^ Assign(Macad::Occt::TColgp_Array1OfDir2d^ theOther);
    Macad::Occt::TColgp_Array1OfDir2d^ Move(Macad::Occt::TColgp_Array1OfDir2d^ theOther);
    Macad::Occt::Dir2d First();
    Macad::Occt::Dir2d ChangeFirst();
    Macad::Occt::Dir2d Last();
    Macad::Occt::Dir2d ChangeLast();
    virtual Macad::Occt::Dir2d Value(int theIndex);
    Macad::Occt::Dir2d ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Dir2d theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Dir2d>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_Array1OfDir2d

//---------------------------------------------------------------------
//  Class  TColgp_Array1OfLin2d
//---------------------------------------------------------------------
public ref class TColgp_Array1OfLin2d sealed
    : public Macad::Occt::BaseClass<::TColgp_Array1OfLin2d>
    , public IIndexEnumerable<Macad::Occt::gp_Lin2d^>
{

#ifdef Include_TColgp_Array1OfLin2d_h
public:
    Include_TColgp_Array1OfLin2d_h
#endif

public:
    TColgp_Array1OfLin2d(::TColgp_Array1OfLin2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfLin2d>( nativeInstance, true )
    {}

    TColgp_Array1OfLin2d(::TColgp_Array1OfLin2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfLin2d>( &nativeInstance, false )
    {}

    property ::TColgp_Array1OfLin2d* NativeInstance
    {
        ::TColgp_Array1OfLin2d* get()
        {
            return static_cast<::TColgp_Array1OfLin2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array1OfLin2d::Iterator>
    {

#ifdef Include_TColgp_Array1OfLin2d_Iterator_h
    public:
        Include_TColgp_Array1OfLin2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array1OfLin2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfLin2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array1OfLin2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfLin2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array1OfLin2d::Iterator* NativeInstance
        {
            ::TColgp_Array1OfLin2d::Iterator* get()
            {
                return static_cast<::TColgp_Array1OfLin2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array1OfLin2d();
    TColgp_Array1OfLin2d(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array1OfLin2d(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColgp_Array1OfLin2d(Macad::Occt::gp_Lin2d^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColgp_Array1OfLin2d(Macad::Occt::gp_Lin2d^ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::gp_Lin2d^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_Array1OfLin2d^ Assign(Macad::Occt::TColgp_Array1OfLin2d^ theOther);
    Macad::Occt::TColgp_Array1OfLin2d^ Move(Macad::Occt::TColgp_Array1OfLin2d^ theOther);
    Macad::Occt::gp_Lin2d^ First();
    Macad::Occt::gp_Lin2d^ ChangeFirst();
    Macad::Occt::gp_Lin2d^ Last();
    Macad::Occt::gp_Lin2d^ ChangeLast();
    virtual Macad::Occt::gp_Lin2d^ Value(int theIndex);
    Macad::Occt::gp_Lin2d^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::gp_Lin2d^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::gp_Lin2d^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_Array1OfLin2d

//---------------------------------------------------------------------
//  Class  TColgp_Array1OfPnt
//---------------------------------------------------------------------
public ref class TColgp_Array1OfPnt sealed
    : public Macad::Occt::BaseClass<::TColgp_Array1OfPnt>
    , public IIndexEnumerable<Macad::Occt::Pnt>
{

#ifdef Include_TColgp_Array1OfPnt_h
public:
    Include_TColgp_Array1OfPnt_h
#endif

public:
    TColgp_Array1OfPnt(::TColgp_Array1OfPnt* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfPnt>( nativeInstance, true )
    {}

    TColgp_Array1OfPnt(::TColgp_Array1OfPnt& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfPnt>( &nativeInstance, false )
    {}

    property ::TColgp_Array1OfPnt* NativeInstance
    {
        ::TColgp_Array1OfPnt* get()
        {
            return static_cast<::TColgp_Array1OfPnt*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array1OfPnt::Iterator>
    {

#ifdef Include_TColgp_Array1OfPnt_Iterator_h
    public:
        Include_TColgp_Array1OfPnt_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array1OfPnt::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfPnt::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array1OfPnt::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfPnt::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array1OfPnt::Iterator* NativeInstance
        {
            ::TColgp_Array1OfPnt::Iterator* get()
            {
                return static_cast<::TColgp_Array1OfPnt::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array1OfPnt();
    TColgp_Array1OfPnt(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array1OfPnt(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColgp_Array1OfPnt(Macad::Occt::Pnt theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColgp_Array1OfPnt(Macad::Occt::Pnt theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Pnt theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_Array1OfPnt^ Assign(Macad::Occt::TColgp_Array1OfPnt^ theOther);
    Macad::Occt::TColgp_Array1OfPnt^ Move(Macad::Occt::TColgp_Array1OfPnt^ theOther);
    Macad::Occt::Pnt First();
    Macad::Occt::Pnt ChangeFirst();
    Macad::Occt::Pnt Last();
    Macad::Occt::Pnt ChangeLast();
    virtual Macad::Occt::Pnt Value(int theIndex);
    Macad::Occt::Pnt ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Pnt theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Pnt>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_Array1OfPnt

//---------------------------------------------------------------------
//  Class  TColgp_Array1OfPnt2d
//---------------------------------------------------------------------
public ref class TColgp_Array1OfPnt2d sealed
    : public Macad::Occt::BaseClass<::TColgp_Array1OfPnt2d>
    , public IIndexEnumerable<Macad::Occt::Pnt2d>
{

#ifdef Include_TColgp_Array1OfPnt2d_h
public:
    Include_TColgp_Array1OfPnt2d_h
#endif

public:
    TColgp_Array1OfPnt2d(::TColgp_Array1OfPnt2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfPnt2d>( nativeInstance, true )
    {}

    TColgp_Array1OfPnt2d(::TColgp_Array1OfPnt2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfPnt2d>( &nativeInstance, false )
    {}

    property ::TColgp_Array1OfPnt2d* NativeInstance
    {
        ::TColgp_Array1OfPnt2d* get()
        {
            return static_cast<::TColgp_Array1OfPnt2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array1OfPnt2d::Iterator>
    {

#ifdef Include_TColgp_Array1OfPnt2d_Iterator_h
    public:
        Include_TColgp_Array1OfPnt2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array1OfPnt2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfPnt2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array1OfPnt2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfPnt2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array1OfPnt2d::Iterator* NativeInstance
        {
            ::TColgp_Array1OfPnt2d::Iterator* get()
            {
                return static_cast<::TColgp_Array1OfPnt2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array1OfPnt2d();
    TColgp_Array1OfPnt2d(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array1OfPnt2d(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColgp_Array1OfPnt2d(Macad::Occt::Pnt2d theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColgp_Array1OfPnt2d(Macad::Occt::Pnt2d theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Pnt2d theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_Array1OfPnt2d^ Assign(Macad::Occt::TColgp_Array1OfPnt2d^ theOther);
    Macad::Occt::TColgp_Array1OfPnt2d^ Move(Macad::Occt::TColgp_Array1OfPnt2d^ theOther);
    Macad::Occt::Pnt2d First();
    Macad::Occt::Pnt2d ChangeFirst();
    Macad::Occt::Pnt2d Last();
    Macad::Occt::Pnt2d ChangeLast();
    virtual Macad::Occt::Pnt2d Value(int theIndex);
    Macad::Occt::Pnt2d ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Pnt2d theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Pnt2d>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_Array1OfPnt2d

//---------------------------------------------------------------------
//  Class  TColgp_Array1OfVec
//---------------------------------------------------------------------
public ref class TColgp_Array1OfVec sealed
    : public Macad::Occt::BaseClass<::TColgp_Array1OfVec>
    , public IIndexEnumerable<Macad::Occt::Vec>
{

#ifdef Include_TColgp_Array1OfVec_h
public:
    Include_TColgp_Array1OfVec_h
#endif

public:
    TColgp_Array1OfVec(::TColgp_Array1OfVec* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfVec>( nativeInstance, true )
    {}

    TColgp_Array1OfVec(::TColgp_Array1OfVec& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfVec>( &nativeInstance, false )
    {}

    property ::TColgp_Array1OfVec* NativeInstance
    {
        ::TColgp_Array1OfVec* get()
        {
            return static_cast<::TColgp_Array1OfVec*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array1OfVec::Iterator>
    {

#ifdef Include_TColgp_Array1OfVec_Iterator_h
    public:
        Include_TColgp_Array1OfVec_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array1OfVec::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfVec::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array1OfVec::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfVec::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array1OfVec::Iterator* NativeInstance
        {
            ::TColgp_Array1OfVec::Iterator* get()
            {
                return static_cast<::TColgp_Array1OfVec::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array1OfVec();
    TColgp_Array1OfVec(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array1OfVec(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColgp_Array1OfVec(Macad::Occt::Vec theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColgp_Array1OfVec(Macad::Occt::Vec theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Vec theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_Array1OfVec^ Assign(Macad::Occt::TColgp_Array1OfVec^ theOther);
    Macad::Occt::TColgp_Array1OfVec^ Move(Macad::Occt::TColgp_Array1OfVec^ theOther);
    Macad::Occt::Vec First();
    Macad::Occt::Vec ChangeFirst();
    Macad::Occt::Vec Last();
    Macad::Occt::Vec ChangeLast();
    virtual Macad::Occt::Vec Value(int theIndex);
    Macad::Occt::Vec ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Vec theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Vec>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_Array1OfVec

//---------------------------------------------------------------------
//  Class  TColgp_Array1OfVec2d
//---------------------------------------------------------------------
public ref class TColgp_Array1OfVec2d sealed
    : public Macad::Occt::BaseClass<::TColgp_Array1OfVec2d>
    , public IIndexEnumerable<Macad::Occt::Vec2d>
{

#ifdef Include_TColgp_Array1OfVec2d_h
public:
    Include_TColgp_Array1OfVec2d_h
#endif

public:
    TColgp_Array1OfVec2d(::TColgp_Array1OfVec2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfVec2d>( nativeInstance, true )
    {}

    TColgp_Array1OfVec2d(::TColgp_Array1OfVec2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfVec2d>( &nativeInstance, false )
    {}

    property ::TColgp_Array1OfVec2d* NativeInstance
    {
        ::TColgp_Array1OfVec2d* get()
        {
            return static_cast<::TColgp_Array1OfVec2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array1OfVec2d::Iterator>
    {

#ifdef Include_TColgp_Array1OfVec2d_Iterator_h
    public:
        Include_TColgp_Array1OfVec2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array1OfVec2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfVec2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array1OfVec2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfVec2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array1OfVec2d::Iterator* NativeInstance
        {
            ::TColgp_Array1OfVec2d::Iterator* get()
            {
                return static_cast<::TColgp_Array1OfVec2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array1OfVec2d();
    TColgp_Array1OfVec2d(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array1OfVec2d(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColgp_Array1OfVec2d(Macad::Occt::Vec2d theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColgp_Array1OfVec2d(Macad::Occt::Vec2d theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Vec2d theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_Array1OfVec2d^ Assign(Macad::Occt::TColgp_Array1OfVec2d^ theOther);
    Macad::Occt::TColgp_Array1OfVec2d^ Move(Macad::Occt::TColgp_Array1OfVec2d^ theOther);
    Macad::Occt::Vec2d First();
    Macad::Occt::Vec2d ChangeFirst();
    Macad::Occt::Vec2d Last();
    Macad::Occt::Vec2d ChangeLast();
    virtual Macad::Occt::Vec2d Value(int theIndex);
    Macad::Occt::Vec2d ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Vec2d theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Vec2d>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_Array1OfVec2d

//---------------------------------------------------------------------
//  Class  TColgp_Array1OfXY
//---------------------------------------------------------------------
public ref class TColgp_Array1OfXY sealed
    : public Macad::Occt::BaseClass<::TColgp_Array1OfXY>
    , public IIndexEnumerable<Macad::Occt::XY>
{

#ifdef Include_TColgp_Array1OfXY_h
public:
    Include_TColgp_Array1OfXY_h
#endif

public:
    TColgp_Array1OfXY(::TColgp_Array1OfXY* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfXY>( nativeInstance, true )
    {}

    TColgp_Array1OfXY(::TColgp_Array1OfXY& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfXY>( &nativeInstance, false )
    {}

    property ::TColgp_Array1OfXY* NativeInstance
    {
        ::TColgp_Array1OfXY* get()
        {
            return static_cast<::TColgp_Array1OfXY*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array1OfXY::Iterator>
    {

#ifdef Include_TColgp_Array1OfXY_Iterator_h
    public:
        Include_TColgp_Array1OfXY_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array1OfXY::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfXY::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array1OfXY::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfXY::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array1OfXY::Iterator* NativeInstance
        {
            ::TColgp_Array1OfXY::Iterator* get()
            {
                return static_cast<::TColgp_Array1OfXY::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array1OfXY();
    TColgp_Array1OfXY(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array1OfXY(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColgp_Array1OfXY(Macad::Occt::XY theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColgp_Array1OfXY(Macad::Occt::XY theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::XY theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_Array1OfXY^ Assign(Macad::Occt::TColgp_Array1OfXY^ theOther);
    Macad::Occt::TColgp_Array1OfXY^ Move(Macad::Occt::TColgp_Array1OfXY^ theOther);
    Macad::Occt::XY First();
    Macad::Occt::XY ChangeFirst();
    Macad::Occt::XY Last();
    Macad::Occt::XY ChangeLast();
    virtual Macad::Occt::XY Value(int theIndex);
    Macad::Occt::XY ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::XY theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::XY>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_Array1OfXY

//---------------------------------------------------------------------
//  Class  TColgp_Array1OfXYZ
//---------------------------------------------------------------------
public ref class TColgp_Array1OfXYZ sealed
    : public Macad::Occt::BaseClass<::TColgp_Array1OfXYZ>
    , public IIndexEnumerable<Macad::Occt::XYZ>
{

#ifdef Include_TColgp_Array1OfXYZ_h
public:
    Include_TColgp_Array1OfXYZ_h
#endif

public:
    TColgp_Array1OfXYZ(::TColgp_Array1OfXYZ* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfXYZ>( nativeInstance, true )
    {}

    TColgp_Array1OfXYZ(::TColgp_Array1OfXYZ& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array1OfXYZ>( &nativeInstance, false )
    {}

    property ::TColgp_Array1OfXYZ* NativeInstance
    {
        ::TColgp_Array1OfXYZ* get()
        {
            return static_cast<::TColgp_Array1OfXYZ*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array1OfXYZ::Iterator>
    {

#ifdef Include_TColgp_Array1OfXYZ_Iterator_h
    public:
        Include_TColgp_Array1OfXYZ_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array1OfXYZ::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfXYZ::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array1OfXYZ::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array1OfXYZ::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array1OfXYZ::Iterator* NativeInstance
        {
            ::TColgp_Array1OfXYZ::Iterator* get()
            {
                return static_cast<::TColgp_Array1OfXYZ::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array1OfXYZ();
    TColgp_Array1OfXYZ(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array1OfXYZ(allocator_type theAlloc, int theLower, int theUpper, ) */
    TColgp_Array1OfXYZ(Macad::Occt::XYZ theBegin, int theLower, int theUpper, bool theUseBuffer);
    TColgp_Array1OfXYZ(Macad::Occt::XYZ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::XYZ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_Array1OfXYZ^ Assign(Macad::Occt::TColgp_Array1OfXYZ^ theOther);
    Macad::Occt::TColgp_Array1OfXYZ^ Move(Macad::Occt::TColgp_Array1OfXYZ^ theOther);
    Macad::Occt::XYZ First();
    Macad::Occt::XYZ ChangeFirst();
    Macad::Occt::XYZ Last();
    Macad::Occt::XYZ ChangeLast();
    virtual Macad::Occt::XYZ Value(int theIndex);
    Macad::Occt::XYZ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::XYZ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::XYZ>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_Array1OfXYZ

//---------------------------------------------------------------------
//  Class  TColgp_Array2OfCirc2d
//---------------------------------------------------------------------
public ref class TColgp_Array2OfCirc2d sealed
    : public Macad::Occt::BaseClass<::TColgp_Array2OfCirc2d>
{

#ifdef Include_TColgp_Array2OfCirc2d_h
public:
    Include_TColgp_Array2OfCirc2d_h
#endif

public:
    TColgp_Array2OfCirc2d(::TColgp_Array2OfCirc2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfCirc2d>( nativeInstance, true )
    {}

    TColgp_Array2OfCirc2d(::TColgp_Array2OfCirc2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfCirc2d>( &nativeInstance, false )
    {}

    property ::TColgp_Array2OfCirc2d* NativeInstance
    {
        ::TColgp_Array2OfCirc2d* get()
        {
            return static_cast<::TColgp_Array2OfCirc2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array2OfCirc2d::Iterator>
    {

#ifdef Include_TColgp_Array2OfCirc2d_Iterator_h
    public:
        Include_TColgp_Array2OfCirc2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array2OfCirc2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfCirc2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array2OfCirc2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfCirc2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array2OfCirc2d::Iterator* NativeInstance
        {
            ::TColgp_Array2OfCirc2d::Iterator* get()
            {
                return static_cast<::TColgp_Array2OfCirc2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array2OfCirc2d();
    TColgp_Array2OfCirc2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array2OfCirc2d(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColgp_Array2OfCirc2d(Macad::Occt::gp_Circ2d^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::TColgp_Array2OfCirc2d^ Assign(Macad::Occt::TColgp_Array2OfCirc2d^ theOther);
    Macad::Occt::TColgp_Array2OfCirc2d^ Move(Macad::Occt::TColgp_Array2OfCirc2d^ theOther);
    Macad::Occt::gp_Circ2d^ Value(int theRow, int theCol);
    Macad::Occt::gp_Circ2d^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::gp_Circ2d^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::gp_Circ2d^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::gp_Circ2d^ First();
    Macad::Occt::gp_Circ2d^ ChangeFirst();
    Macad::Occt::gp_Circ2d^ Last();
    Macad::Occt::gp_Circ2d^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColgp_Array2OfCirc2d

//---------------------------------------------------------------------
//  Class  TColgp_Array2OfDir
//---------------------------------------------------------------------
public ref class TColgp_Array2OfDir sealed
    : public Macad::Occt::BaseClass<::TColgp_Array2OfDir>
{

#ifdef Include_TColgp_Array2OfDir_h
public:
    Include_TColgp_Array2OfDir_h
#endif

public:
    TColgp_Array2OfDir(::TColgp_Array2OfDir* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfDir>( nativeInstance, true )
    {}

    TColgp_Array2OfDir(::TColgp_Array2OfDir& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfDir>( &nativeInstance, false )
    {}

    property ::TColgp_Array2OfDir* NativeInstance
    {
        ::TColgp_Array2OfDir* get()
        {
            return static_cast<::TColgp_Array2OfDir*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array2OfDir::Iterator>
    {

#ifdef Include_TColgp_Array2OfDir_Iterator_h
    public:
        Include_TColgp_Array2OfDir_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array2OfDir::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfDir::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array2OfDir::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfDir::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array2OfDir::Iterator* NativeInstance
        {
            ::TColgp_Array2OfDir::Iterator* get()
            {
                return static_cast<::TColgp_Array2OfDir::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array2OfDir();
    TColgp_Array2OfDir(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array2OfDir(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColgp_Array2OfDir(Macad::Occt::Dir theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::TColgp_Array2OfDir^ Assign(Macad::Occt::TColgp_Array2OfDir^ theOther);
    Macad::Occt::TColgp_Array2OfDir^ Move(Macad::Occt::TColgp_Array2OfDir^ theOther);
    Macad::Occt::Dir Value(int theRow, int theCol);
    Macad::Occt::Dir ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Dir theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Dir theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Dir First();
    Macad::Occt::Dir ChangeFirst();
    Macad::Occt::Dir Last();
    Macad::Occt::Dir ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColgp_Array2OfDir

//---------------------------------------------------------------------
//  Class  TColgp_Array2OfDir2d
//---------------------------------------------------------------------
public ref class TColgp_Array2OfDir2d sealed
    : public Macad::Occt::BaseClass<::TColgp_Array2OfDir2d>
{

#ifdef Include_TColgp_Array2OfDir2d_h
public:
    Include_TColgp_Array2OfDir2d_h
#endif

public:
    TColgp_Array2OfDir2d(::TColgp_Array2OfDir2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfDir2d>( nativeInstance, true )
    {}

    TColgp_Array2OfDir2d(::TColgp_Array2OfDir2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfDir2d>( &nativeInstance, false )
    {}

    property ::TColgp_Array2OfDir2d* NativeInstance
    {
        ::TColgp_Array2OfDir2d* get()
        {
            return static_cast<::TColgp_Array2OfDir2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array2OfDir2d::Iterator>
    {

#ifdef Include_TColgp_Array2OfDir2d_Iterator_h
    public:
        Include_TColgp_Array2OfDir2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array2OfDir2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfDir2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array2OfDir2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfDir2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array2OfDir2d::Iterator* NativeInstance
        {
            ::TColgp_Array2OfDir2d::Iterator* get()
            {
                return static_cast<::TColgp_Array2OfDir2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array2OfDir2d();
    TColgp_Array2OfDir2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array2OfDir2d(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColgp_Array2OfDir2d(Macad::Occt::Dir2d theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::TColgp_Array2OfDir2d^ Assign(Macad::Occt::TColgp_Array2OfDir2d^ theOther);
    Macad::Occt::TColgp_Array2OfDir2d^ Move(Macad::Occt::TColgp_Array2OfDir2d^ theOther);
    Macad::Occt::Dir2d Value(int theRow, int theCol);
    Macad::Occt::Dir2d ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Dir2d theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Dir2d theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Dir2d First();
    Macad::Occt::Dir2d ChangeFirst();
    Macad::Occt::Dir2d Last();
    Macad::Occt::Dir2d ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColgp_Array2OfDir2d

//---------------------------------------------------------------------
//  Class  TColgp_Array2OfLin2d
//---------------------------------------------------------------------
public ref class TColgp_Array2OfLin2d sealed
    : public Macad::Occt::BaseClass<::TColgp_Array2OfLin2d>
{

#ifdef Include_TColgp_Array2OfLin2d_h
public:
    Include_TColgp_Array2OfLin2d_h
#endif

public:
    TColgp_Array2OfLin2d(::TColgp_Array2OfLin2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfLin2d>( nativeInstance, true )
    {}

    TColgp_Array2OfLin2d(::TColgp_Array2OfLin2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfLin2d>( &nativeInstance, false )
    {}

    property ::TColgp_Array2OfLin2d* NativeInstance
    {
        ::TColgp_Array2OfLin2d* get()
        {
            return static_cast<::TColgp_Array2OfLin2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array2OfLin2d::Iterator>
    {

#ifdef Include_TColgp_Array2OfLin2d_Iterator_h
    public:
        Include_TColgp_Array2OfLin2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array2OfLin2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfLin2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array2OfLin2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfLin2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array2OfLin2d::Iterator* NativeInstance
        {
            ::TColgp_Array2OfLin2d::Iterator* get()
            {
                return static_cast<::TColgp_Array2OfLin2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array2OfLin2d();
    TColgp_Array2OfLin2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array2OfLin2d(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColgp_Array2OfLin2d(Macad::Occt::gp_Lin2d^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::TColgp_Array2OfLin2d^ Assign(Macad::Occt::TColgp_Array2OfLin2d^ theOther);
    Macad::Occt::TColgp_Array2OfLin2d^ Move(Macad::Occt::TColgp_Array2OfLin2d^ theOther);
    Macad::Occt::gp_Lin2d^ Value(int theRow, int theCol);
    Macad::Occt::gp_Lin2d^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::gp_Lin2d^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::gp_Lin2d^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::gp_Lin2d^ First();
    Macad::Occt::gp_Lin2d^ ChangeFirst();
    Macad::Occt::gp_Lin2d^ Last();
    Macad::Occt::gp_Lin2d^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColgp_Array2OfLin2d

//---------------------------------------------------------------------
//  Class  TColgp_Array2OfPnt
//---------------------------------------------------------------------
public ref class TColgp_Array2OfPnt sealed
    : public Macad::Occt::BaseClass<::TColgp_Array2OfPnt>
{

#ifdef Include_TColgp_Array2OfPnt_h
public:
    Include_TColgp_Array2OfPnt_h
#endif

public:
    TColgp_Array2OfPnt(::TColgp_Array2OfPnt* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfPnt>( nativeInstance, true )
    {}

    TColgp_Array2OfPnt(::TColgp_Array2OfPnt& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfPnt>( &nativeInstance, false )
    {}

    property ::TColgp_Array2OfPnt* NativeInstance
    {
        ::TColgp_Array2OfPnt* get()
        {
            return static_cast<::TColgp_Array2OfPnt*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array2OfPnt::Iterator>
    {

#ifdef Include_TColgp_Array2OfPnt_Iterator_h
    public:
        Include_TColgp_Array2OfPnt_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array2OfPnt::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfPnt::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array2OfPnt::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfPnt::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array2OfPnt::Iterator* NativeInstance
        {
            ::TColgp_Array2OfPnt::Iterator* get()
            {
                return static_cast<::TColgp_Array2OfPnt::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array2OfPnt();
    TColgp_Array2OfPnt(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array2OfPnt(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColgp_Array2OfPnt(Macad::Occt::Pnt theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::TColgp_Array2OfPnt^ Assign(Macad::Occt::TColgp_Array2OfPnt^ theOther);
    Macad::Occt::TColgp_Array2OfPnt^ Move(Macad::Occt::TColgp_Array2OfPnt^ theOther);
    Macad::Occt::Pnt Value(int theRow, int theCol);
    Macad::Occt::Pnt ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Pnt theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Pnt theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Pnt First();
    Macad::Occt::Pnt ChangeFirst();
    Macad::Occt::Pnt Last();
    Macad::Occt::Pnt ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColgp_Array2OfPnt

//---------------------------------------------------------------------
//  Class  TColgp_Array2OfPnt2d
//---------------------------------------------------------------------
public ref class TColgp_Array2OfPnt2d sealed
    : public Macad::Occt::BaseClass<::TColgp_Array2OfPnt2d>
{

#ifdef Include_TColgp_Array2OfPnt2d_h
public:
    Include_TColgp_Array2OfPnt2d_h
#endif

public:
    TColgp_Array2OfPnt2d(::TColgp_Array2OfPnt2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfPnt2d>( nativeInstance, true )
    {}

    TColgp_Array2OfPnt2d(::TColgp_Array2OfPnt2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfPnt2d>( &nativeInstance, false )
    {}

    property ::TColgp_Array2OfPnt2d* NativeInstance
    {
        ::TColgp_Array2OfPnt2d* get()
        {
            return static_cast<::TColgp_Array2OfPnt2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array2OfPnt2d::Iterator>
    {

#ifdef Include_TColgp_Array2OfPnt2d_Iterator_h
    public:
        Include_TColgp_Array2OfPnt2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array2OfPnt2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfPnt2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array2OfPnt2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfPnt2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array2OfPnt2d::Iterator* NativeInstance
        {
            ::TColgp_Array2OfPnt2d::Iterator* get()
            {
                return static_cast<::TColgp_Array2OfPnt2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array2OfPnt2d();
    TColgp_Array2OfPnt2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array2OfPnt2d(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColgp_Array2OfPnt2d(Macad::Occt::Pnt2d theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::TColgp_Array2OfPnt2d^ Assign(Macad::Occt::TColgp_Array2OfPnt2d^ theOther);
    Macad::Occt::TColgp_Array2OfPnt2d^ Move(Macad::Occt::TColgp_Array2OfPnt2d^ theOther);
    Macad::Occt::Pnt2d Value(int theRow, int theCol);
    Macad::Occt::Pnt2d ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Pnt2d theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Pnt2d theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Pnt2d First();
    Macad::Occt::Pnt2d ChangeFirst();
    Macad::Occt::Pnt2d Last();
    Macad::Occt::Pnt2d ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColgp_Array2OfPnt2d

//---------------------------------------------------------------------
//  Class  TColgp_Array2OfVec
//---------------------------------------------------------------------
public ref class TColgp_Array2OfVec sealed
    : public Macad::Occt::BaseClass<::TColgp_Array2OfVec>
{

#ifdef Include_TColgp_Array2OfVec_h
public:
    Include_TColgp_Array2OfVec_h
#endif

public:
    TColgp_Array2OfVec(::TColgp_Array2OfVec* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfVec>( nativeInstance, true )
    {}

    TColgp_Array2OfVec(::TColgp_Array2OfVec& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfVec>( &nativeInstance, false )
    {}

    property ::TColgp_Array2OfVec* NativeInstance
    {
        ::TColgp_Array2OfVec* get()
        {
            return static_cast<::TColgp_Array2OfVec*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array2OfVec::Iterator>
    {

#ifdef Include_TColgp_Array2OfVec_Iterator_h
    public:
        Include_TColgp_Array2OfVec_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array2OfVec::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfVec::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array2OfVec::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfVec::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array2OfVec::Iterator* NativeInstance
        {
            ::TColgp_Array2OfVec::Iterator* get()
            {
                return static_cast<::TColgp_Array2OfVec::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array2OfVec();
    TColgp_Array2OfVec(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array2OfVec(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColgp_Array2OfVec(Macad::Occt::Vec theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::TColgp_Array2OfVec^ Assign(Macad::Occt::TColgp_Array2OfVec^ theOther);
    Macad::Occt::TColgp_Array2OfVec^ Move(Macad::Occt::TColgp_Array2OfVec^ theOther);
    Macad::Occt::Vec Value(int theRow, int theCol);
    Macad::Occt::Vec ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Vec theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Vec theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Vec First();
    Macad::Occt::Vec ChangeFirst();
    Macad::Occt::Vec Last();
    Macad::Occt::Vec ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColgp_Array2OfVec

//---------------------------------------------------------------------
//  Class  TColgp_Array2OfVec2d
//---------------------------------------------------------------------
public ref class TColgp_Array2OfVec2d sealed
    : public Macad::Occt::BaseClass<::TColgp_Array2OfVec2d>
{

#ifdef Include_TColgp_Array2OfVec2d_h
public:
    Include_TColgp_Array2OfVec2d_h
#endif

public:
    TColgp_Array2OfVec2d(::TColgp_Array2OfVec2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfVec2d>( nativeInstance, true )
    {}

    TColgp_Array2OfVec2d(::TColgp_Array2OfVec2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfVec2d>( &nativeInstance, false )
    {}

    property ::TColgp_Array2OfVec2d* NativeInstance
    {
        ::TColgp_Array2OfVec2d* get()
        {
            return static_cast<::TColgp_Array2OfVec2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array2OfVec2d::Iterator>
    {

#ifdef Include_TColgp_Array2OfVec2d_Iterator_h
    public:
        Include_TColgp_Array2OfVec2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array2OfVec2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfVec2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array2OfVec2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfVec2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array2OfVec2d::Iterator* NativeInstance
        {
            ::TColgp_Array2OfVec2d::Iterator* get()
            {
                return static_cast<::TColgp_Array2OfVec2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array2OfVec2d();
    TColgp_Array2OfVec2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array2OfVec2d(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColgp_Array2OfVec2d(Macad::Occt::Vec2d theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::TColgp_Array2OfVec2d^ Assign(Macad::Occt::TColgp_Array2OfVec2d^ theOther);
    Macad::Occt::TColgp_Array2OfVec2d^ Move(Macad::Occt::TColgp_Array2OfVec2d^ theOther);
    Macad::Occt::Vec2d Value(int theRow, int theCol);
    Macad::Occt::Vec2d ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Vec2d theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Vec2d theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Vec2d First();
    Macad::Occt::Vec2d ChangeFirst();
    Macad::Occt::Vec2d Last();
    Macad::Occt::Vec2d ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColgp_Array2OfVec2d

//---------------------------------------------------------------------
//  Class  TColgp_Array2OfXY
//---------------------------------------------------------------------
public ref class TColgp_Array2OfXY sealed
    : public Macad::Occt::BaseClass<::TColgp_Array2OfXY>
{

#ifdef Include_TColgp_Array2OfXY_h
public:
    Include_TColgp_Array2OfXY_h
#endif

public:
    TColgp_Array2OfXY(::TColgp_Array2OfXY* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfXY>( nativeInstance, true )
    {}

    TColgp_Array2OfXY(::TColgp_Array2OfXY& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfXY>( &nativeInstance, false )
    {}

    property ::TColgp_Array2OfXY* NativeInstance
    {
        ::TColgp_Array2OfXY* get()
        {
            return static_cast<::TColgp_Array2OfXY*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array2OfXY::Iterator>
    {

#ifdef Include_TColgp_Array2OfXY_Iterator_h
    public:
        Include_TColgp_Array2OfXY_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array2OfXY::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfXY::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array2OfXY::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfXY::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array2OfXY::Iterator* NativeInstance
        {
            ::TColgp_Array2OfXY::Iterator* get()
            {
                return static_cast<::TColgp_Array2OfXY::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array2OfXY();
    TColgp_Array2OfXY(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array2OfXY(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColgp_Array2OfXY(Macad::Occt::XY theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::TColgp_Array2OfXY^ Assign(Macad::Occt::TColgp_Array2OfXY^ theOther);
    Macad::Occt::TColgp_Array2OfXY^ Move(Macad::Occt::TColgp_Array2OfXY^ theOther);
    Macad::Occt::XY Value(int theRow, int theCol);
    Macad::Occt::XY ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::XY theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::XY theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::XY First();
    Macad::Occt::XY ChangeFirst();
    Macad::Occt::XY Last();
    Macad::Occt::XY ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColgp_Array2OfXY

//---------------------------------------------------------------------
//  Class  TColgp_Array2OfXYZ
//---------------------------------------------------------------------
public ref class TColgp_Array2OfXYZ sealed
    : public Macad::Occt::BaseClass<::TColgp_Array2OfXYZ>
{

#ifdef Include_TColgp_Array2OfXYZ_h
public:
    Include_TColgp_Array2OfXYZ_h
#endif

public:
    TColgp_Array2OfXYZ(::TColgp_Array2OfXYZ* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfXYZ>( nativeInstance, true )
    {}

    TColgp_Array2OfXYZ(::TColgp_Array2OfXYZ& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_Array2OfXYZ>( &nativeInstance, false )
    {}

    property ::TColgp_Array2OfXYZ* NativeInstance
    {
        ::TColgp_Array2OfXYZ* get()
        {
            return static_cast<::TColgp_Array2OfXYZ*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_Array2OfXYZ::Iterator>
    {

#ifdef Include_TColgp_Array2OfXYZ_Iterator_h
    public:
        Include_TColgp_Array2OfXYZ_Iterator_h
#endif

    public:
        Iterator(::TColgp_Array2OfXYZ::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfXYZ::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_Array2OfXYZ::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_Array2OfXYZ::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_Array2OfXYZ::Iterator* NativeInstance
        {
            ::TColgp_Array2OfXYZ::Iterator* get()
            {
                return static_cast<::TColgp_Array2OfXYZ::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_Array2OfXYZ();
    TColgp_Array2OfXYZ(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TColgp_Array2OfXYZ(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TColgp_Array2OfXYZ(Macad::Occt::XYZ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::TColgp_Array2OfXYZ^ Assign(Macad::Occt::TColgp_Array2OfXYZ^ theOther);
    Macad::Occt::TColgp_Array2OfXYZ^ Move(Macad::Occt::TColgp_Array2OfXYZ^ theOther);
    Macad::Occt::XYZ Value(int theRow, int theCol);
    Macad::Occt::XYZ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::XYZ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::XYZ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::XYZ First();
    Macad::Occt::XYZ ChangeFirst();
    Macad::Occt::XYZ Last();
    Macad::Occt::XYZ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TColgp_Array2OfXYZ

//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfDir
//---------------------------------------------------------------------
public ref class TColgp_SequenceOfDir sealed
    : public Macad::Occt::BaseClass<::TColgp_SequenceOfDir>
    , public IIndexEnumerable<Macad::Occt::Dir>
{

#ifdef Include_TColgp_SequenceOfDir_h
public:
    Include_TColgp_SequenceOfDir_h
#endif

public:
    TColgp_SequenceOfDir(::TColgp_SequenceOfDir* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfDir>( nativeInstance, true )
    {}

    TColgp_SequenceOfDir(::TColgp_SequenceOfDir& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfDir>( &nativeInstance, false )
    {}

    property ::TColgp_SequenceOfDir* NativeInstance
    {
        ::TColgp_SequenceOfDir* get()
        {
            return static_cast<::TColgp_SequenceOfDir*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_SequenceOfDir::Iterator>
    {

#ifdef Include_TColgp_SequenceOfDir_Iterator_h
    public:
        Include_TColgp_SequenceOfDir_Iterator_h
#endif

    public:
        Iterator(::TColgp_SequenceOfDir::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfDir::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_SequenceOfDir::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfDir::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_SequenceOfDir::Iterator* NativeInstance
        {
            ::TColgp_SequenceOfDir::Iterator* get()
            {
                return static_cast<::TColgp_SequenceOfDir::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Dir Value();
        Macad::Occt::Dir ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_SequenceOfDir::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_SequenceOfDir();
    TColgp_SequenceOfDir(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::TColgp_SequenceOfDir^ Assign(Macad::Occt::TColgp_SequenceOfDir^ theOther);
    void Remove(Macad::Occt::TColgp_SequenceOfDir::Iterator^ thePosition);
    void Append(Macad::Occt::Dir theItem);
    void Prepend(Macad::Occt::Dir theItem);
    void InsertBefore(int theIndex, Macad::Occt::Dir theItem);
    void InsertAfter(Macad::Occt::TColgp_SequenceOfDir::Iterator^ thePosition, Macad::Occt::Dir theItem);
    void Split(int theIndex, Macad::Occt::TColgp_SequenceOfDir^ theSeq);
    Macad::Occt::Dir First();
    Macad::Occt::Dir ChangeFirst();
    Macad::Occt::Dir Last();
    Macad::Occt::Dir ChangeLast();
    virtual Macad::Occt::Dir Value(int theIndex);
    Macad::Occt::Dir ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Dir theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Dir>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_SequenceOfDir

//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfDir2d
//---------------------------------------------------------------------
public ref class TColgp_SequenceOfDir2d sealed
    : public Macad::Occt::BaseClass<::TColgp_SequenceOfDir2d>
    , public IIndexEnumerable<Macad::Occt::Dir2d>
{

#ifdef Include_TColgp_SequenceOfDir2d_h
public:
    Include_TColgp_SequenceOfDir2d_h
#endif

public:
    TColgp_SequenceOfDir2d(::TColgp_SequenceOfDir2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfDir2d>( nativeInstance, true )
    {}

    TColgp_SequenceOfDir2d(::TColgp_SequenceOfDir2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfDir2d>( &nativeInstance, false )
    {}

    property ::TColgp_SequenceOfDir2d* NativeInstance
    {
        ::TColgp_SequenceOfDir2d* get()
        {
            return static_cast<::TColgp_SequenceOfDir2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_SequenceOfDir2d::Iterator>
    {

#ifdef Include_TColgp_SequenceOfDir2d_Iterator_h
    public:
        Include_TColgp_SequenceOfDir2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_SequenceOfDir2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfDir2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_SequenceOfDir2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfDir2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_SequenceOfDir2d::Iterator* NativeInstance
        {
            ::TColgp_SequenceOfDir2d::Iterator* get()
            {
                return static_cast<::TColgp_SequenceOfDir2d::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Dir2d Value();
        Macad::Occt::Dir2d ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_SequenceOfDir2d::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_SequenceOfDir2d();
    TColgp_SequenceOfDir2d(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::TColgp_SequenceOfDir2d^ Assign(Macad::Occt::TColgp_SequenceOfDir2d^ theOther);
    void Remove(Macad::Occt::TColgp_SequenceOfDir2d::Iterator^ thePosition);
    void Append(Macad::Occt::Dir2d theItem);
    void Prepend(Macad::Occt::Dir2d theItem);
    void InsertBefore(int theIndex, Macad::Occt::Dir2d theItem);
    void InsertAfter(Macad::Occt::TColgp_SequenceOfDir2d::Iterator^ thePosition, Macad::Occt::Dir2d theItem);
    void Split(int theIndex, Macad::Occt::TColgp_SequenceOfDir2d^ theSeq);
    Macad::Occt::Dir2d First();
    Macad::Occt::Dir2d ChangeFirst();
    Macad::Occt::Dir2d Last();
    Macad::Occt::Dir2d ChangeLast();
    virtual Macad::Occt::Dir2d Value(int theIndex);
    Macad::Occt::Dir2d ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Dir2d theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Dir2d>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_SequenceOfDir2d

//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfPnt
//---------------------------------------------------------------------
public ref class TColgp_SequenceOfPnt sealed
    : public Macad::Occt::BaseClass<::TColgp_SequenceOfPnt>
    , public IIndexEnumerable<Macad::Occt::Pnt>
{

#ifdef Include_TColgp_SequenceOfPnt_h
public:
    Include_TColgp_SequenceOfPnt_h
#endif

public:
    TColgp_SequenceOfPnt(::TColgp_SequenceOfPnt* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfPnt>( nativeInstance, true )
    {}

    TColgp_SequenceOfPnt(::TColgp_SequenceOfPnt& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfPnt>( &nativeInstance, false )
    {}

    property ::TColgp_SequenceOfPnt* NativeInstance
    {
        ::TColgp_SequenceOfPnt* get()
        {
            return static_cast<::TColgp_SequenceOfPnt*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_SequenceOfPnt::Iterator>
    {

#ifdef Include_TColgp_SequenceOfPnt_Iterator_h
    public:
        Include_TColgp_SequenceOfPnt_Iterator_h
#endif

    public:
        Iterator(::TColgp_SequenceOfPnt::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfPnt::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_SequenceOfPnt::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfPnt::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_SequenceOfPnt::Iterator* NativeInstance
        {
            ::TColgp_SequenceOfPnt::Iterator* get()
            {
                return static_cast<::TColgp_SequenceOfPnt::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Pnt Value();
        Macad::Occt::Pnt ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_SequenceOfPnt::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_SequenceOfPnt();
    TColgp_SequenceOfPnt(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::TColgp_SequenceOfPnt^ Assign(Macad::Occt::TColgp_SequenceOfPnt^ theOther);
    void Remove(Macad::Occt::TColgp_SequenceOfPnt::Iterator^ thePosition);
    void Append(Macad::Occt::Pnt theItem);
    void Prepend(Macad::Occt::Pnt theItem);
    void InsertBefore(int theIndex, Macad::Occt::Pnt theItem);
    void InsertAfter(Macad::Occt::TColgp_SequenceOfPnt::Iterator^ thePosition, Macad::Occt::Pnt theItem);
    void Split(int theIndex, Macad::Occt::TColgp_SequenceOfPnt^ theSeq);
    Macad::Occt::Pnt First();
    Macad::Occt::Pnt ChangeFirst();
    Macad::Occt::Pnt Last();
    Macad::Occt::Pnt ChangeLast();
    virtual Macad::Occt::Pnt Value(int theIndex);
    Macad::Occt::Pnt ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Pnt theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Pnt>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_SequenceOfPnt

//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfPnt2d
//---------------------------------------------------------------------
public ref class TColgp_SequenceOfPnt2d sealed
    : public Macad::Occt::BaseClass<::TColgp_SequenceOfPnt2d>
    , public IIndexEnumerable<Macad::Occt::Pnt2d>
{

#ifdef Include_TColgp_SequenceOfPnt2d_h
public:
    Include_TColgp_SequenceOfPnt2d_h
#endif

public:
    TColgp_SequenceOfPnt2d(::TColgp_SequenceOfPnt2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfPnt2d>( nativeInstance, true )
    {}

    TColgp_SequenceOfPnt2d(::TColgp_SequenceOfPnt2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfPnt2d>( &nativeInstance, false )
    {}

    property ::TColgp_SequenceOfPnt2d* NativeInstance
    {
        ::TColgp_SequenceOfPnt2d* get()
        {
            return static_cast<::TColgp_SequenceOfPnt2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_SequenceOfPnt2d::Iterator>
    {

#ifdef Include_TColgp_SequenceOfPnt2d_Iterator_h
    public:
        Include_TColgp_SequenceOfPnt2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_SequenceOfPnt2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfPnt2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_SequenceOfPnt2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfPnt2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_SequenceOfPnt2d::Iterator* NativeInstance
        {
            ::TColgp_SequenceOfPnt2d::Iterator* get()
            {
                return static_cast<::TColgp_SequenceOfPnt2d::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Pnt2d Value();
        Macad::Occt::Pnt2d ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_SequenceOfPnt2d::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_SequenceOfPnt2d();
    TColgp_SequenceOfPnt2d(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::TColgp_SequenceOfPnt2d^ Assign(Macad::Occt::TColgp_SequenceOfPnt2d^ theOther);
    void Remove(Macad::Occt::TColgp_SequenceOfPnt2d::Iterator^ thePosition);
    void Append(Macad::Occt::Pnt2d theItem);
    void Prepend(Macad::Occt::Pnt2d theItem);
    void InsertBefore(int theIndex, Macad::Occt::Pnt2d theItem);
    void InsertAfter(Macad::Occt::TColgp_SequenceOfPnt2d::Iterator^ thePosition, Macad::Occt::Pnt2d theItem);
    void Split(int theIndex, Macad::Occt::TColgp_SequenceOfPnt2d^ theSeq);
    Macad::Occt::Pnt2d First();
    Macad::Occt::Pnt2d ChangeFirst();
    Macad::Occt::Pnt2d Last();
    Macad::Occt::Pnt2d ChangeLast();
    virtual Macad::Occt::Pnt2d Value(int theIndex);
    Macad::Occt::Pnt2d ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Pnt2d theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Pnt2d>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_SequenceOfPnt2d

//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfVec
//---------------------------------------------------------------------
public ref class TColgp_SequenceOfVec sealed
    : public Macad::Occt::BaseClass<::TColgp_SequenceOfVec>
    , public IIndexEnumerable<Macad::Occt::Vec>
{

#ifdef Include_TColgp_SequenceOfVec_h
public:
    Include_TColgp_SequenceOfVec_h
#endif

public:
    TColgp_SequenceOfVec(::TColgp_SequenceOfVec* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfVec>( nativeInstance, true )
    {}

    TColgp_SequenceOfVec(::TColgp_SequenceOfVec& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfVec>( &nativeInstance, false )
    {}

    property ::TColgp_SequenceOfVec* NativeInstance
    {
        ::TColgp_SequenceOfVec* get()
        {
            return static_cast<::TColgp_SequenceOfVec*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_SequenceOfVec::Iterator>
    {

#ifdef Include_TColgp_SequenceOfVec_Iterator_h
    public:
        Include_TColgp_SequenceOfVec_Iterator_h
#endif

    public:
        Iterator(::TColgp_SequenceOfVec::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfVec::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_SequenceOfVec::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfVec::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_SequenceOfVec::Iterator* NativeInstance
        {
            ::TColgp_SequenceOfVec::Iterator* get()
            {
                return static_cast<::TColgp_SequenceOfVec::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Vec Value();
        Macad::Occt::Vec ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_SequenceOfVec::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_SequenceOfVec();
    TColgp_SequenceOfVec(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::TColgp_SequenceOfVec^ Assign(Macad::Occt::TColgp_SequenceOfVec^ theOther);
    void Remove(Macad::Occt::TColgp_SequenceOfVec::Iterator^ thePosition);
    void Append(Macad::Occt::Vec theItem);
    void Prepend(Macad::Occt::Vec theItem);
    void InsertBefore(int theIndex, Macad::Occt::Vec theItem);
    void InsertAfter(Macad::Occt::TColgp_SequenceOfVec::Iterator^ thePosition, Macad::Occt::Vec theItem);
    void Split(int theIndex, Macad::Occt::TColgp_SequenceOfVec^ theSeq);
    Macad::Occt::Vec First();
    Macad::Occt::Vec ChangeFirst();
    Macad::Occt::Vec Last();
    Macad::Occt::Vec ChangeLast();
    virtual Macad::Occt::Vec Value(int theIndex);
    Macad::Occt::Vec ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Vec theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Vec>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_SequenceOfVec

//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfVec2d
//---------------------------------------------------------------------
public ref class TColgp_SequenceOfVec2d sealed
    : public Macad::Occt::BaseClass<::TColgp_SequenceOfVec2d>
    , public IIndexEnumerable<Macad::Occt::Vec2d>
{

#ifdef Include_TColgp_SequenceOfVec2d_h
public:
    Include_TColgp_SequenceOfVec2d_h
#endif

public:
    TColgp_SequenceOfVec2d(::TColgp_SequenceOfVec2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfVec2d>( nativeInstance, true )
    {}

    TColgp_SequenceOfVec2d(::TColgp_SequenceOfVec2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfVec2d>( &nativeInstance, false )
    {}

    property ::TColgp_SequenceOfVec2d* NativeInstance
    {
        ::TColgp_SequenceOfVec2d* get()
        {
            return static_cast<::TColgp_SequenceOfVec2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_SequenceOfVec2d::Iterator>
    {

#ifdef Include_TColgp_SequenceOfVec2d_Iterator_h
    public:
        Include_TColgp_SequenceOfVec2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_SequenceOfVec2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfVec2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_SequenceOfVec2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfVec2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_SequenceOfVec2d::Iterator* NativeInstance
        {
            ::TColgp_SequenceOfVec2d::Iterator* get()
            {
                return static_cast<::TColgp_SequenceOfVec2d::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Vec2d Value();
        Macad::Occt::Vec2d ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_SequenceOfVec2d::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_SequenceOfVec2d();
    TColgp_SequenceOfVec2d(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::TColgp_SequenceOfVec2d^ Assign(Macad::Occt::TColgp_SequenceOfVec2d^ theOther);
    void Remove(Macad::Occt::TColgp_SequenceOfVec2d::Iterator^ thePosition);
    void Append(Macad::Occt::Vec2d theItem);
    void Prepend(Macad::Occt::Vec2d theItem);
    void InsertBefore(int theIndex, Macad::Occt::Vec2d theItem);
    void InsertAfter(Macad::Occt::TColgp_SequenceOfVec2d::Iterator^ thePosition, Macad::Occt::Vec2d theItem);
    void Split(int theIndex, Macad::Occt::TColgp_SequenceOfVec2d^ theSeq);
    Macad::Occt::Vec2d First();
    Macad::Occt::Vec2d ChangeFirst();
    Macad::Occt::Vec2d Last();
    Macad::Occt::Vec2d ChangeLast();
    virtual Macad::Occt::Vec2d Value(int theIndex);
    Macad::Occt::Vec2d ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Vec2d theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Vec2d>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_SequenceOfVec2d

//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfXY
//---------------------------------------------------------------------
public ref class TColgp_SequenceOfXY sealed
    : public Macad::Occt::BaseClass<::TColgp_SequenceOfXY>
    , public IIndexEnumerable<Macad::Occt::XY>
{

#ifdef Include_TColgp_SequenceOfXY_h
public:
    Include_TColgp_SequenceOfXY_h
#endif

public:
    TColgp_SequenceOfXY(::TColgp_SequenceOfXY* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfXY>( nativeInstance, true )
    {}

    TColgp_SequenceOfXY(::TColgp_SequenceOfXY& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfXY>( &nativeInstance, false )
    {}

    property ::TColgp_SequenceOfXY* NativeInstance
    {
        ::TColgp_SequenceOfXY* get()
        {
            return static_cast<::TColgp_SequenceOfXY*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_SequenceOfXY::Iterator>
    {

#ifdef Include_TColgp_SequenceOfXY_Iterator_h
    public:
        Include_TColgp_SequenceOfXY_Iterator_h
#endif

    public:
        Iterator(::TColgp_SequenceOfXY::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfXY::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_SequenceOfXY::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfXY::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_SequenceOfXY::Iterator* NativeInstance
        {
            ::TColgp_SequenceOfXY::Iterator* get()
            {
                return static_cast<::TColgp_SequenceOfXY::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::XY Value();
        Macad::Occt::XY ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_SequenceOfXY::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_SequenceOfXY();
    TColgp_SequenceOfXY(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::TColgp_SequenceOfXY^ Assign(Macad::Occt::TColgp_SequenceOfXY^ theOther);
    void Remove(Macad::Occt::TColgp_SequenceOfXY::Iterator^ thePosition);
    void Append(Macad::Occt::XY theItem);
    void Prepend(Macad::Occt::XY theItem);
    void InsertBefore(int theIndex, Macad::Occt::XY theItem);
    void InsertAfter(Macad::Occt::TColgp_SequenceOfXY::Iterator^ thePosition, Macad::Occt::XY theItem);
    void Split(int theIndex, Macad::Occt::TColgp_SequenceOfXY^ theSeq);
    Macad::Occt::XY First();
    Macad::Occt::XY ChangeFirst();
    Macad::Occt::XY Last();
    Macad::Occt::XY ChangeLast();
    virtual Macad::Occt::XY Value(int theIndex);
    Macad::Occt::XY ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::XY theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::XY>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_SequenceOfXY

//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfXYZ
//---------------------------------------------------------------------
public ref class TColgp_SequenceOfXYZ sealed
    : public Macad::Occt::BaseClass<::TColgp_SequenceOfXYZ>
    , public IIndexEnumerable<Macad::Occt::XYZ>
{

#ifdef Include_TColgp_SequenceOfXYZ_h
public:
    Include_TColgp_SequenceOfXYZ_h
#endif

public:
    TColgp_SequenceOfXYZ(::TColgp_SequenceOfXYZ* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfXYZ>( nativeInstance, true )
    {}

    TColgp_SequenceOfXYZ(::TColgp_SequenceOfXYZ& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfXYZ>( &nativeInstance, false )
    {}

    property ::TColgp_SequenceOfXYZ* NativeInstance
    {
        ::TColgp_SequenceOfXYZ* get()
        {
            return static_cast<::TColgp_SequenceOfXYZ*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_SequenceOfXYZ::Iterator>
    {

#ifdef Include_TColgp_SequenceOfXYZ_Iterator_h
    public:
        Include_TColgp_SequenceOfXYZ_Iterator_h
#endif

    public:
        Iterator(::TColgp_SequenceOfXYZ::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfXYZ::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_SequenceOfXYZ::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfXYZ::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_SequenceOfXYZ::Iterator* NativeInstance
        {
            ::TColgp_SequenceOfXYZ::Iterator* get()
            {
                return static_cast<::TColgp_SequenceOfXYZ::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::XYZ Value();
        Macad::Occt::XYZ ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_SequenceOfXYZ::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_SequenceOfXYZ();
    TColgp_SequenceOfXYZ(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::TColgp_SequenceOfXYZ^ Assign(Macad::Occt::TColgp_SequenceOfXYZ^ theOther);
    void Remove(Macad::Occt::TColgp_SequenceOfXYZ::Iterator^ thePosition);
    void Append(Macad::Occt::XYZ theItem);
    void Prepend(Macad::Occt::XYZ theItem);
    void InsertBefore(int theIndex, Macad::Occt::XYZ theItem);
    void InsertAfter(Macad::Occt::TColgp_SequenceOfXYZ::Iterator^ thePosition, Macad::Occt::XYZ theItem);
    void Split(int theIndex, Macad::Occt::TColgp_SequenceOfXYZ^ theSeq);
    Macad::Occt::XYZ First();
    Macad::Occt::XYZ ChangeFirst();
    Macad::Occt::XYZ Last();
    Macad::Occt::XYZ ChangeLast();
    virtual Macad::Occt::XYZ Value(int theIndex);
    Macad::Occt::XYZ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::XYZ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::XYZ>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_SequenceOfXYZ

//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfArray1OfPnt2d
//---------------------------------------------------------------------
public ref class TColgp_SequenceOfArray1OfPnt2d sealed
    : public Macad::Occt::BaseClass<::TColgp_SequenceOfArray1OfPnt2d>
    , public IIndexEnumerable<Macad::Occt::TColgp_HArray1OfPnt2d^>
{

#ifdef Include_TColgp_SequenceOfArray1OfPnt2d_h
public:
    Include_TColgp_SequenceOfArray1OfPnt2d_h
#endif

public:
    TColgp_SequenceOfArray1OfPnt2d(::TColgp_SequenceOfArray1OfPnt2d* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfArray1OfPnt2d>( nativeInstance, true )
    {}

    TColgp_SequenceOfArray1OfPnt2d(::TColgp_SequenceOfArray1OfPnt2d& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfArray1OfPnt2d>( &nativeInstance, false )
    {}

    property ::TColgp_SequenceOfArray1OfPnt2d* NativeInstance
    {
        ::TColgp_SequenceOfArray1OfPnt2d* get()
        {
            return static_cast<::TColgp_SequenceOfArray1OfPnt2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_SequenceOfArray1OfPnt2d::Iterator>
    {

#ifdef Include_TColgp_SequenceOfArray1OfPnt2d_Iterator_h
    public:
        Include_TColgp_SequenceOfArray1OfPnt2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_SequenceOfArray1OfPnt2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfArray1OfPnt2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_SequenceOfArray1OfPnt2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfArray1OfPnt2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_SequenceOfArray1OfPnt2d::Iterator* NativeInstance
        {
            ::TColgp_SequenceOfArray1OfPnt2d::Iterator* get()
            {
                return static_cast<::TColgp_SequenceOfArray1OfPnt2d::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TColgp_HArray1OfPnt2d^ Value();
        Macad::Occt::TColgp_HArray1OfPnt2d^ ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_SequenceOfArray1OfPnt2d();
    TColgp_SequenceOfArray1OfPnt2d(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::TColgp_SequenceOfArray1OfPnt2d^ Assign(Macad::Occt::TColgp_SequenceOfArray1OfPnt2d^ theOther);
    void Remove(Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Iterator^ thePosition);
    void Append(Macad::Occt::TColgp_HArray1OfPnt2d^ theItem);
    void Prepend(Macad::Occt::TColgp_HArray1OfPnt2d^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TColgp_HArray1OfPnt2d^ theItem);
    void InsertAfter(Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Iterator^ thePosition, Macad::Occt::TColgp_HArray1OfPnt2d^ theItem);
    void Split(int theIndex, Macad::Occt::TColgp_SequenceOfArray1OfPnt2d^ theSeq);
    Macad::Occt::TColgp_HArray1OfPnt2d^ First();
    Macad::Occt::TColgp_HArray1OfPnt2d^ ChangeFirst();
    Macad::Occt::TColgp_HArray1OfPnt2d^ Last();
    Macad::Occt::TColgp_HArray1OfPnt2d^ ChangeLast();
    virtual Macad::Occt::TColgp_HArray1OfPnt2d^ Value(int theIndex);
    Macad::Occt::TColgp_HArray1OfPnt2d^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::TColgp_HArray1OfPnt2d^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TColgp_HArray1OfPnt2d^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_SequenceOfArray1OfPnt2d

//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfAx1
//---------------------------------------------------------------------
public ref class TColgp_SequenceOfAx1 sealed
    : public Macad::Occt::BaseClass<::TColgp_SequenceOfAx1>
    , public IIndexEnumerable<Macad::Occt::Ax1>
{

#ifdef Include_TColgp_SequenceOfAx1_h
public:
    Include_TColgp_SequenceOfAx1_h
#endif

public:
    TColgp_SequenceOfAx1(::TColgp_SequenceOfAx1* nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfAx1>( nativeInstance, true )
    {}

    TColgp_SequenceOfAx1(::TColgp_SequenceOfAx1& nativeInstance)
        : Macad::Occt::BaseClass<::TColgp_SequenceOfAx1>( &nativeInstance, false )
    {}

    property ::TColgp_SequenceOfAx1* NativeInstance
    {
        ::TColgp_SequenceOfAx1* get()
        {
            return static_cast<::TColgp_SequenceOfAx1*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_SequenceOfAx1::Iterator>
    {

#ifdef Include_TColgp_SequenceOfAx1_Iterator_h
    public:
        Include_TColgp_SequenceOfAx1_Iterator_h
#endif

    public:
        Iterator(::TColgp_SequenceOfAx1::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfAx1::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_SequenceOfAx1::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_SequenceOfAx1::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_SequenceOfAx1::Iterator* NativeInstance
        {
            ::TColgp_SequenceOfAx1::Iterator* get()
            {
                return static_cast<::TColgp_SequenceOfAx1::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Ax1 Value();
        Macad::Occt::Ax1 ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_SequenceOfAx1::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_SequenceOfAx1();
    TColgp_SequenceOfAx1(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::TColgp_SequenceOfAx1^ Assign(Macad::Occt::TColgp_SequenceOfAx1^ theOther);
    void Remove(Macad::Occt::TColgp_SequenceOfAx1::Iterator^ thePosition);
    void Append(Macad::Occt::Ax1 theItem);
    void Prepend(Macad::Occt::Ax1 theItem);
    void InsertBefore(int theIndex, Macad::Occt::Ax1 theItem);
    void InsertAfter(Macad::Occt::TColgp_SequenceOfAx1::Iterator^ thePosition, Macad::Occt::Ax1 theItem);
    void Split(int theIndex, Macad::Occt::TColgp_SequenceOfAx1^ theSeq);
    Macad::Occt::Ax1 First();
    Macad::Occt::Ax1 ChangeFirst();
    Macad::Occt::Ax1 Last();
    Macad::Occt::Ax1 ChangeLast();
    virtual Macad::Occt::Ax1 Value(int theIndex);
    Macad::Occt::Ax1 ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Ax1 theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Ax1>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_SequenceOfAx1

//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfCirc2d
//---------------------------------------------------------------------
public ref class TColgp_HArray1OfCirc2d sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::gp_Circ2d^>
{

#ifdef Include_TColgp_HArray1OfCirc2d_h
public:
    Include_TColgp_HArray1OfCirc2d_h
#endif

public:
    TColgp_HArray1OfCirc2d(::TColgp_HArray1OfCirc2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray1OfCirc2d(::TColgp_HArray1OfCirc2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray1OfCirc2d* NativeInstance
    {
        ::TColgp_HArray1OfCirc2d* get()
        {
            return static_cast<::TColgp_HArray1OfCirc2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray1OfCirc2d::Iterator>
    {

#ifdef Include_TColgp_HArray1OfCirc2d_Iterator_h
    public:
        Include_TColgp_HArray1OfCirc2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray1OfCirc2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfCirc2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray1OfCirc2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfCirc2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray1OfCirc2d::Iterator* NativeInstance
        {
            ::TColgp_HArray1OfCirc2d::Iterator* get()
            {
                return static_cast<::TColgp_HArray1OfCirc2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray1OfCirc2d();
    TColgp_HArray1OfCirc2d(int theLower, int theUpper);
    TColgp_HArray1OfCirc2d(int theLower, int theUpper, Macad::Occt::gp_Circ2d^ theValue);
    TColgp_HArray1OfCirc2d(Macad::Occt::gp_Circ2d^ theBegin, int theLower, int theUpper, bool parameter1);
    TColgp_HArray1OfCirc2d(Macad::Occt::TColgp_Array1OfCirc2d^ theOther);
    Macad::Occt::TColgp_Array1OfCirc2d^ Array1();
    Macad::Occt::TColgp_Array1OfCirc2d^ ChangeArray1();
    void Init(Macad::Occt::gp_Circ2d^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_HArray1OfCirc2d^ Assign(Macad::Occt::TColgp_HArray1OfCirc2d^ theOther);
    Macad::Occt::TColgp_HArray1OfCirc2d^ Move(Macad::Occt::TColgp_HArray1OfCirc2d^ theOther);
    Macad::Occt::gp_Circ2d^ First();
    Macad::Occt::gp_Circ2d^ ChangeFirst();
    Macad::Occt::gp_Circ2d^ Last();
    Macad::Occt::gp_Circ2d^ ChangeLast();
    virtual Macad::Occt::gp_Circ2d^ Value(int theIndex);
    Macad::Occt::gp_Circ2d^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::gp_Circ2d^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray1OfCirc2d^ CreateDowncasted(::TColgp_HArray1OfCirc2d* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::gp_Circ2d^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HArray1OfCirc2d

//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfDir
//---------------------------------------------------------------------
public ref class TColgp_HArray1OfDir sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Dir>
{

#ifdef Include_TColgp_HArray1OfDir_h
public:
    Include_TColgp_HArray1OfDir_h
#endif

public:
    TColgp_HArray1OfDir(::TColgp_HArray1OfDir* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray1OfDir(::TColgp_HArray1OfDir& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray1OfDir* NativeInstance
    {
        ::TColgp_HArray1OfDir* get()
        {
            return static_cast<::TColgp_HArray1OfDir*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray1OfDir::Iterator>
    {

#ifdef Include_TColgp_HArray1OfDir_Iterator_h
    public:
        Include_TColgp_HArray1OfDir_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray1OfDir::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfDir::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray1OfDir::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfDir::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray1OfDir::Iterator* NativeInstance
        {
            ::TColgp_HArray1OfDir::Iterator* get()
            {
                return static_cast<::TColgp_HArray1OfDir::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray1OfDir();
    TColgp_HArray1OfDir(int theLower, int theUpper);
    TColgp_HArray1OfDir(int theLower, int theUpper, Macad::Occt::Dir theValue);
    TColgp_HArray1OfDir(Macad::Occt::Dir theBegin, int theLower, int theUpper, bool parameter1);
    TColgp_HArray1OfDir(Macad::Occt::TColgp_Array1OfDir^ theOther);
    Macad::Occt::TColgp_Array1OfDir^ Array1();
    Macad::Occt::TColgp_Array1OfDir^ ChangeArray1();
    void Init(Macad::Occt::Dir theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_HArray1OfDir^ Assign(Macad::Occt::TColgp_HArray1OfDir^ theOther);
    Macad::Occt::TColgp_HArray1OfDir^ Move(Macad::Occt::TColgp_HArray1OfDir^ theOther);
    Macad::Occt::Dir First();
    Macad::Occt::Dir ChangeFirst();
    Macad::Occt::Dir Last();
    Macad::Occt::Dir ChangeLast();
    virtual Macad::Occt::Dir Value(int theIndex);
    Macad::Occt::Dir ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Dir theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray1OfDir^ CreateDowncasted(::TColgp_HArray1OfDir* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Dir>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HArray1OfDir

//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfDir2d
//---------------------------------------------------------------------
public ref class TColgp_HArray1OfDir2d sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Dir2d>
{

#ifdef Include_TColgp_HArray1OfDir2d_h
public:
    Include_TColgp_HArray1OfDir2d_h
#endif

public:
    TColgp_HArray1OfDir2d(::TColgp_HArray1OfDir2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray1OfDir2d(::TColgp_HArray1OfDir2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray1OfDir2d* NativeInstance
    {
        ::TColgp_HArray1OfDir2d* get()
        {
            return static_cast<::TColgp_HArray1OfDir2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray1OfDir2d::Iterator>
    {

#ifdef Include_TColgp_HArray1OfDir2d_Iterator_h
    public:
        Include_TColgp_HArray1OfDir2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray1OfDir2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfDir2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray1OfDir2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfDir2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray1OfDir2d::Iterator* NativeInstance
        {
            ::TColgp_HArray1OfDir2d::Iterator* get()
            {
                return static_cast<::TColgp_HArray1OfDir2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray1OfDir2d();
    TColgp_HArray1OfDir2d(int theLower, int theUpper);
    TColgp_HArray1OfDir2d(int theLower, int theUpper, Macad::Occt::Dir2d theValue);
    TColgp_HArray1OfDir2d(Macad::Occt::Dir2d theBegin, int theLower, int theUpper, bool parameter1);
    TColgp_HArray1OfDir2d(Macad::Occt::TColgp_Array1OfDir2d^ theOther);
    Macad::Occt::TColgp_Array1OfDir2d^ Array1();
    Macad::Occt::TColgp_Array1OfDir2d^ ChangeArray1();
    void Init(Macad::Occt::Dir2d theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_HArray1OfDir2d^ Assign(Macad::Occt::TColgp_HArray1OfDir2d^ theOther);
    Macad::Occt::TColgp_HArray1OfDir2d^ Move(Macad::Occt::TColgp_HArray1OfDir2d^ theOther);
    Macad::Occt::Dir2d First();
    Macad::Occt::Dir2d ChangeFirst();
    Macad::Occt::Dir2d Last();
    Macad::Occt::Dir2d ChangeLast();
    virtual Macad::Occt::Dir2d Value(int theIndex);
    Macad::Occt::Dir2d ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Dir2d theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray1OfDir2d^ CreateDowncasted(::TColgp_HArray1OfDir2d* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Dir2d>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HArray1OfDir2d

//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfLin2d
//---------------------------------------------------------------------
public ref class TColgp_HArray1OfLin2d sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::gp_Lin2d^>
{

#ifdef Include_TColgp_HArray1OfLin2d_h
public:
    Include_TColgp_HArray1OfLin2d_h
#endif

public:
    TColgp_HArray1OfLin2d(::TColgp_HArray1OfLin2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray1OfLin2d(::TColgp_HArray1OfLin2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray1OfLin2d* NativeInstance
    {
        ::TColgp_HArray1OfLin2d* get()
        {
            return static_cast<::TColgp_HArray1OfLin2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray1OfLin2d::Iterator>
    {

#ifdef Include_TColgp_HArray1OfLin2d_Iterator_h
    public:
        Include_TColgp_HArray1OfLin2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray1OfLin2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfLin2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray1OfLin2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfLin2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray1OfLin2d::Iterator* NativeInstance
        {
            ::TColgp_HArray1OfLin2d::Iterator* get()
            {
                return static_cast<::TColgp_HArray1OfLin2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray1OfLin2d();
    TColgp_HArray1OfLin2d(int theLower, int theUpper);
    TColgp_HArray1OfLin2d(int theLower, int theUpper, Macad::Occt::gp_Lin2d^ theValue);
    TColgp_HArray1OfLin2d(Macad::Occt::gp_Lin2d^ theBegin, int theLower, int theUpper, bool parameter1);
    TColgp_HArray1OfLin2d(Macad::Occt::TColgp_Array1OfLin2d^ theOther);
    Macad::Occt::TColgp_Array1OfLin2d^ Array1();
    Macad::Occt::TColgp_Array1OfLin2d^ ChangeArray1();
    void Init(Macad::Occt::gp_Lin2d^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_HArray1OfLin2d^ Assign(Macad::Occt::TColgp_HArray1OfLin2d^ theOther);
    Macad::Occt::TColgp_HArray1OfLin2d^ Move(Macad::Occt::TColgp_HArray1OfLin2d^ theOther);
    Macad::Occt::gp_Lin2d^ First();
    Macad::Occt::gp_Lin2d^ ChangeFirst();
    Macad::Occt::gp_Lin2d^ Last();
    Macad::Occt::gp_Lin2d^ ChangeLast();
    virtual Macad::Occt::gp_Lin2d^ Value(int theIndex);
    Macad::Occt::gp_Lin2d^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::gp_Lin2d^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray1OfLin2d^ CreateDowncasted(::TColgp_HArray1OfLin2d* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::gp_Lin2d^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HArray1OfLin2d

//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfPnt
//---------------------------------------------------------------------
public ref class TColgp_HArray1OfPnt sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Pnt>
{

#ifdef Include_TColgp_HArray1OfPnt_h
public:
    Include_TColgp_HArray1OfPnt_h
#endif

public:
    TColgp_HArray1OfPnt(::TColgp_HArray1OfPnt* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray1OfPnt(::TColgp_HArray1OfPnt& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray1OfPnt* NativeInstance
    {
        ::TColgp_HArray1OfPnt* get()
        {
            return static_cast<::TColgp_HArray1OfPnt*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray1OfPnt::Iterator>
    {

#ifdef Include_TColgp_HArray1OfPnt_Iterator_h
    public:
        Include_TColgp_HArray1OfPnt_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray1OfPnt::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfPnt::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray1OfPnt::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfPnt::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray1OfPnt::Iterator* NativeInstance
        {
            ::TColgp_HArray1OfPnt::Iterator* get()
            {
                return static_cast<::TColgp_HArray1OfPnt::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray1OfPnt();
    TColgp_HArray1OfPnt(int theLower, int theUpper);
    TColgp_HArray1OfPnt(int theLower, int theUpper, Macad::Occt::Pnt theValue);
    TColgp_HArray1OfPnt(Macad::Occt::Pnt theBegin, int theLower, int theUpper, bool parameter1);
    TColgp_HArray1OfPnt(Macad::Occt::TColgp_Array1OfPnt^ theOther);
    Macad::Occt::TColgp_Array1OfPnt^ Array1();
    Macad::Occt::TColgp_Array1OfPnt^ ChangeArray1();
    void Init(Macad::Occt::Pnt theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_HArray1OfPnt^ Assign(Macad::Occt::TColgp_HArray1OfPnt^ theOther);
    Macad::Occt::TColgp_HArray1OfPnt^ Move(Macad::Occt::TColgp_HArray1OfPnt^ theOther);
    Macad::Occt::Pnt First();
    Macad::Occt::Pnt ChangeFirst();
    Macad::Occt::Pnt Last();
    Macad::Occt::Pnt ChangeLast();
    virtual Macad::Occt::Pnt Value(int theIndex);
    Macad::Occt::Pnt ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Pnt theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray1OfPnt^ CreateDowncasted(::TColgp_HArray1OfPnt* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Pnt>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HArray1OfPnt

//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfPnt2d
//---------------------------------------------------------------------
public ref class TColgp_HArray1OfPnt2d sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Pnt2d>
{

#ifdef Include_TColgp_HArray1OfPnt2d_h
public:
    Include_TColgp_HArray1OfPnt2d_h
#endif

public:
    TColgp_HArray1OfPnt2d(::TColgp_HArray1OfPnt2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray1OfPnt2d(::TColgp_HArray1OfPnt2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray1OfPnt2d* NativeInstance
    {
        ::TColgp_HArray1OfPnt2d* get()
        {
            return static_cast<::TColgp_HArray1OfPnt2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray1OfPnt2d::Iterator>
    {

#ifdef Include_TColgp_HArray1OfPnt2d_Iterator_h
    public:
        Include_TColgp_HArray1OfPnt2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray1OfPnt2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfPnt2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray1OfPnt2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfPnt2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray1OfPnt2d::Iterator* NativeInstance
        {
            ::TColgp_HArray1OfPnt2d::Iterator* get()
            {
                return static_cast<::TColgp_HArray1OfPnt2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray1OfPnt2d();
    TColgp_HArray1OfPnt2d(int theLower, int theUpper);
    TColgp_HArray1OfPnt2d(int theLower, int theUpper, Macad::Occt::Pnt2d theValue);
    TColgp_HArray1OfPnt2d(Macad::Occt::Pnt2d theBegin, int theLower, int theUpper, bool parameter1);
    TColgp_HArray1OfPnt2d(Macad::Occt::TColgp_Array1OfPnt2d^ theOther);
    Macad::Occt::TColgp_Array1OfPnt2d^ Array1();
    Macad::Occt::TColgp_Array1OfPnt2d^ ChangeArray1();
    void Init(Macad::Occt::Pnt2d theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_HArray1OfPnt2d^ Assign(Macad::Occt::TColgp_HArray1OfPnt2d^ theOther);
    Macad::Occt::TColgp_HArray1OfPnt2d^ Move(Macad::Occt::TColgp_HArray1OfPnt2d^ theOther);
    Macad::Occt::Pnt2d First();
    Macad::Occt::Pnt2d ChangeFirst();
    Macad::Occt::Pnt2d Last();
    Macad::Occt::Pnt2d ChangeLast();
    virtual Macad::Occt::Pnt2d Value(int theIndex);
    Macad::Occt::Pnt2d ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Pnt2d theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray1OfPnt2d^ CreateDowncasted(::TColgp_HArray1OfPnt2d* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Pnt2d>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HArray1OfPnt2d

//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfVec
//---------------------------------------------------------------------
public ref class TColgp_HArray1OfVec sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Vec>
{

#ifdef Include_TColgp_HArray1OfVec_h
public:
    Include_TColgp_HArray1OfVec_h
#endif

public:
    TColgp_HArray1OfVec(::TColgp_HArray1OfVec* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray1OfVec(::TColgp_HArray1OfVec& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray1OfVec* NativeInstance
    {
        ::TColgp_HArray1OfVec* get()
        {
            return static_cast<::TColgp_HArray1OfVec*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray1OfVec::Iterator>
    {

#ifdef Include_TColgp_HArray1OfVec_Iterator_h
    public:
        Include_TColgp_HArray1OfVec_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray1OfVec::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfVec::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray1OfVec::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfVec::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray1OfVec::Iterator* NativeInstance
        {
            ::TColgp_HArray1OfVec::Iterator* get()
            {
                return static_cast<::TColgp_HArray1OfVec::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray1OfVec();
    TColgp_HArray1OfVec(int theLower, int theUpper);
    TColgp_HArray1OfVec(int theLower, int theUpper, Macad::Occt::Vec theValue);
    TColgp_HArray1OfVec(Macad::Occt::Vec theBegin, int theLower, int theUpper, bool parameter1);
    TColgp_HArray1OfVec(Macad::Occt::TColgp_Array1OfVec^ theOther);
    Macad::Occt::TColgp_Array1OfVec^ Array1();
    Macad::Occt::TColgp_Array1OfVec^ ChangeArray1();
    void Init(Macad::Occt::Vec theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_HArray1OfVec^ Assign(Macad::Occt::TColgp_HArray1OfVec^ theOther);
    Macad::Occt::TColgp_HArray1OfVec^ Move(Macad::Occt::TColgp_HArray1OfVec^ theOther);
    Macad::Occt::Vec First();
    Macad::Occt::Vec ChangeFirst();
    Macad::Occt::Vec Last();
    Macad::Occt::Vec ChangeLast();
    virtual Macad::Occt::Vec Value(int theIndex);
    Macad::Occt::Vec ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Vec theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray1OfVec^ CreateDowncasted(::TColgp_HArray1OfVec* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Vec>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HArray1OfVec

//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfVec2d
//---------------------------------------------------------------------
public ref class TColgp_HArray1OfVec2d sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Vec2d>
{

#ifdef Include_TColgp_HArray1OfVec2d_h
public:
    Include_TColgp_HArray1OfVec2d_h
#endif

public:
    TColgp_HArray1OfVec2d(::TColgp_HArray1OfVec2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray1OfVec2d(::TColgp_HArray1OfVec2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray1OfVec2d* NativeInstance
    {
        ::TColgp_HArray1OfVec2d* get()
        {
            return static_cast<::TColgp_HArray1OfVec2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray1OfVec2d::Iterator>
    {

#ifdef Include_TColgp_HArray1OfVec2d_Iterator_h
    public:
        Include_TColgp_HArray1OfVec2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray1OfVec2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfVec2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray1OfVec2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfVec2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray1OfVec2d::Iterator* NativeInstance
        {
            ::TColgp_HArray1OfVec2d::Iterator* get()
            {
                return static_cast<::TColgp_HArray1OfVec2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray1OfVec2d();
    TColgp_HArray1OfVec2d(int theLower, int theUpper);
    TColgp_HArray1OfVec2d(int theLower, int theUpper, Macad::Occt::Vec2d theValue);
    TColgp_HArray1OfVec2d(Macad::Occt::Vec2d theBegin, int theLower, int theUpper, bool parameter1);
    TColgp_HArray1OfVec2d(Macad::Occt::TColgp_Array1OfVec2d^ theOther);
    Macad::Occt::TColgp_Array1OfVec2d^ Array1();
    Macad::Occt::TColgp_Array1OfVec2d^ ChangeArray1();
    void Init(Macad::Occt::Vec2d theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_HArray1OfVec2d^ Assign(Macad::Occt::TColgp_HArray1OfVec2d^ theOther);
    Macad::Occt::TColgp_HArray1OfVec2d^ Move(Macad::Occt::TColgp_HArray1OfVec2d^ theOther);
    Macad::Occt::Vec2d First();
    Macad::Occt::Vec2d ChangeFirst();
    Macad::Occt::Vec2d Last();
    Macad::Occt::Vec2d ChangeLast();
    virtual Macad::Occt::Vec2d Value(int theIndex);
    Macad::Occt::Vec2d ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Vec2d theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray1OfVec2d^ CreateDowncasted(::TColgp_HArray1OfVec2d* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Vec2d>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HArray1OfVec2d

//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfXY
//---------------------------------------------------------------------
public ref class TColgp_HArray1OfXY sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::XY>
{

#ifdef Include_TColgp_HArray1OfXY_h
public:
    Include_TColgp_HArray1OfXY_h
#endif

public:
    TColgp_HArray1OfXY(::TColgp_HArray1OfXY* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray1OfXY(::TColgp_HArray1OfXY& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray1OfXY* NativeInstance
    {
        ::TColgp_HArray1OfXY* get()
        {
            return static_cast<::TColgp_HArray1OfXY*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray1OfXY::Iterator>
    {

#ifdef Include_TColgp_HArray1OfXY_Iterator_h
    public:
        Include_TColgp_HArray1OfXY_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray1OfXY::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfXY::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray1OfXY::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfXY::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray1OfXY::Iterator* NativeInstance
        {
            ::TColgp_HArray1OfXY::Iterator* get()
            {
                return static_cast<::TColgp_HArray1OfXY::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray1OfXY();
    TColgp_HArray1OfXY(int theLower, int theUpper);
    TColgp_HArray1OfXY(int theLower, int theUpper, Macad::Occt::XY theValue);
    TColgp_HArray1OfXY(Macad::Occt::XY theBegin, int theLower, int theUpper, bool parameter1);
    TColgp_HArray1OfXY(Macad::Occt::TColgp_Array1OfXY^ theOther);
    Macad::Occt::TColgp_Array1OfXY^ Array1();
    Macad::Occt::TColgp_Array1OfXY^ ChangeArray1();
    void Init(Macad::Occt::XY theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_HArray1OfXY^ Assign(Macad::Occt::TColgp_HArray1OfXY^ theOther);
    Macad::Occt::TColgp_HArray1OfXY^ Move(Macad::Occt::TColgp_HArray1OfXY^ theOther);
    Macad::Occt::XY First();
    Macad::Occt::XY ChangeFirst();
    Macad::Occt::XY Last();
    Macad::Occt::XY ChangeLast();
    virtual Macad::Occt::XY Value(int theIndex);
    Macad::Occt::XY ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::XY theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray1OfXY^ CreateDowncasted(::TColgp_HArray1OfXY* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::XY>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HArray1OfXY

//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfXYZ
//---------------------------------------------------------------------
public ref class TColgp_HArray1OfXYZ sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::XYZ>
{

#ifdef Include_TColgp_HArray1OfXYZ_h
public:
    Include_TColgp_HArray1OfXYZ_h
#endif

public:
    TColgp_HArray1OfXYZ(::TColgp_HArray1OfXYZ* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray1OfXYZ(::TColgp_HArray1OfXYZ& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray1OfXYZ* NativeInstance
    {
        ::TColgp_HArray1OfXYZ* get()
        {
            return static_cast<::TColgp_HArray1OfXYZ*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray1OfXYZ::Iterator>
    {

#ifdef Include_TColgp_HArray1OfXYZ_Iterator_h
    public:
        Include_TColgp_HArray1OfXYZ_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray1OfXYZ::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfXYZ::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray1OfXYZ::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray1OfXYZ::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray1OfXYZ::Iterator* NativeInstance
        {
            ::TColgp_HArray1OfXYZ::Iterator* get()
            {
                return static_cast<::TColgp_HArray1OfXYZ::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray1OfXYZ();
    TColgp_HArray1OfXYZ(int theLower, int theUpper);
    TColgp_HArray1OfXYZ(int theLower, int theUpper, Macad::Occt::XYZ theValue);
    TColgp_HArray1OfXYZ(Macad::Occt::XYZ theBegin, int theLower, int theUpper, bool parameter1);
    TColgp_HArray1OfXYZ(Macad::Occt::TColgp_Array1OfXYZ^ theOther);
    Macad::Occt::TColgp_Array1OfXYZ^ Array1();
    Macad::Occt::TColgp_Array1OfXYZ^ ChangeArray1();
    void Init(Macad::Occt::XYZ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TColgp_HArray1OfXYZ^ Assign(Macad::Occt::TColgp_HArray1OfXYZ^ theOther);
    Macad::Occt::TColgp_HArray1OfXYZ^ Move(Macad::Occt::TColgp_HArray1OfXYZ^ theOther);
    Macad::Occt::XYZ First();
    Macad::Occt::XYZ ChangeFirst();
    Macad::Occt::XYZ Last();
    Macad::Occt::XYZ ChangeLast();
    virtual Macad::Occt::XYZ Value(int theIndex);
    Macad::Occt::XYZ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::XYZ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray1OfXYZ^ CreateDowncasted(::TColgp_HArray1OfXYZ* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::XYZ>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HArray1OfXYZ

//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfCirc2d
//---------------------------------------------------------------------
public ref class TColgp_HArray2OfCirc2d sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColgp_HArray2OfCirc2d_h
public:
    Include_TColgp_HArray2OfCirc2d_h
#endif

public:
    TColgp_HArray2OfCirc2d(::TColgp_HArray2OfCirc2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray2OfCirc2d(::TColgp_HArray2OfCirc2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray2OfCirc2d* NativeInstance
    {
        ::TColgp_HArray2OfCirc2d* get()
        {
            return static_cast<::TColgp_HArray2OfCirc2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray2OfCirc2d::Iterator>
    {

#ifdef Include_TColgp_HArray2OfCirc2d_Iterator_h
    public:
        Include_TColgp_HArray2OfCirc2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray2OfCirc2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfCirc2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray2OfCirc2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfCirc2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray2OfCirc2d::Iterator* NativeInstance
        {
            ::TColgp_HArray2OfCirc2d::Iterator* get()
            {
                return static_cast<::TColgp_HArray2OfCirc2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray2OfCirc2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColgp_HArray2OfCirc2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::gp_Circ2d^ theValue);
    TColgp_HArray2OfCirc2d(Macad::Occt::TColgp_Array2OfCirc2d^ theOther);
    Macad::Occt::TColgp_Array2OfCirc2d^ Array2();
    Macad::Occt::TColgp_Array2OfCirc2d^ ChangeArray2();
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
    Macad::Occt::TColgp_HArray2OfCirc2d^ Assign(Macad::Occt::TColgp_HArray2OfCirc2d^ theOther);
    Macad::Occt::TColgp_HArray2OfCirc2d^ Move(Macad::Occt::TColgp_HArray2OfCirc2d^ theOther);
    Macad::Occt::gp_Circ2d^ Value(int theRow, int theCol);
    Macad::Occt::gp_Circ2d^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::gp_Circ2d^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::gp_Circ2d^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::gp_Circ2d^ First();
    Macad::Occt::gp_Circ2d^ ChangeFirst();
    Macad::Occt::gp_Circ2d^ Last();
    Macad::Occt::gp_Circ2d^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray2OfCirc2d^ CreateDowncasted(::TColgp_HArray2OfCirc2d* instance);
}; // class TColgp_HArray2OfCirc2d

//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfDir
//---------------------------------------------------------------------
public ref class TColgp_HArray2OfDir sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColgp_HArray2OfDir_h
public:
    Include_TColgp_HArray2OfDir_h
#endif

public:
    TColgp_HArray2OfDir(::TColgp_HArray2OfDir* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray2OfDir(::TColgp_HArray2OfDir& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray2OfDir* NativeInstance
    {
        ::TColgp_HArray2OfDir* get()
        {
            return static_cast<::TColgp_HArray2OfDir*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray2OfDir::Iterator>
    {

#ifdef Include_TColgp_HArray2OfDir_Iterator_h
    public:
        Include_TColgp_HArray2OfDir_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray2OfDir::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfDir::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray2OfDir::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfDir::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray2OfDir::Iterator* NativeInstance
        {
            ::TColgp_HArray2OfDir::Iterator* get()
            {
                return static_cast<::TColgp_HArray2OfDir::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray2OfDir(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColgp_HArray2OfDir(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Dir theValue);
    TColgp_HArray2OfDir(Macad::Occt::TColgp_Array2OfDir^ theOther);
    Macad::Occt::TColgp_Array2OfDir^ Array2();
    Macad::Occt::TColgp_Array2OfDir^ ChangeArray2();
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
    Macad::Occt::TColgp_HArray2OfDir^ Assign(Macad::Occt::TColgp_HArray2OfDir^ theOther);
    Macad::Occt::TColgp_HArray2OfDir^ Move(Macad::Occt::TColgp_HArray2OfDir^ theOther);
    Macad::Occt::Dir Value(int theRow, int theCol);
    Macad::Occt::Dir ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Dir theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Dir theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Dir First();
    Macad::Occt::Dir ChangeFirst();
    Macad::Occt::Dir Last();
    Macad::Occt::Dir ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray2OfDir^ CreateDowncasted(::TColgp_HArray2OfDir* instance);
}; // class TColgp_HArray2OfDir

//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfDir2d
//---------------------------------------------------------------------
public ref class TColgp_HArray2OfDir2d sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColgp_HArray2OfDir2d_h
public:
    Include_TColgp_HArray2OfDir2d_h
#endif

public:
    TColgp_HArray2OfDir2d(::TColgp_HArray2OfDir2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray2OfDir2d(::TColgp_HArray2OfDir2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray2OfDir2d* NativeInstance
    {
        ::TColgp_HArray2OfDir2d* get()
        {
            return static_cast<::TColgp_HArray2OfDir2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray2OfDir2d::Iterator>
    {

#ifdef Include_TColgp_HArray2OfDir2d_Iterator_h
    public:
        Include_TColgp_HArray2OfDir2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray2OfDir2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfDir2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray2OfDir2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfDir2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray2OfDir2d::Iterator* NativeInstance
        {
            ::TColgp_HArray2OfDir2d::Iterator* get()
            {
                return static_cast<::TColgp_HArray2OfDir2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray2OfDir2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColgp_HArray2OfDir2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Dir2d theValue);
    TColgp_HArray2OfDir2d(Macad::Occt::TColgp_Array2OfDir2d^ theOther);
    Macad::Occt::TColgp_Array2OfDir2d^ Array2();
    Macad::Occt::TColgp_Array2OfDir2d^ ChangeArray2();
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
    Macad::Occt::TColgp_HArray2OfDir2d^ Assign(Macad::Occt::TColgp_HArray2OfDir2d^ theOther);
    Macad::Occt::TColgp_HArray2OfDir2d^ Move(Macad::Occt::TColgp_HArray2OfDir2d^ theOther);
    Macad::Occt::Dir2d Value(int theRow, int theCol);
    Macad::Occt::Dir2d ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Dir2d theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Dir2d theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Dir2d First();
    Macad::Occt::Dir2d ChangeFirst();
    Macad::Occt::Dir2d Last();
    Macad::Occt::Dir2d ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray2OfDir2d^ CreateDowncasted(::TColgp_HArray2OfDir2d* instance);
}; // class TColgp_HArray2OfDir2d

//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfLin2d
//---------------------------------------------------------------------
public ref class TColgp_HArray2OfLin2d sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColgp_HArray2OfLin2d_h
public:
    Include_TColgp_HArray2OfLin2d_h
#endif

public:
    TColgp_HArray2OfLin2d(::TColgp_HArray2OfLin2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray2OfLin2d(::TColgp_HArray2OfLin2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray2OfLin2d* NativeInstance
    {
        ::TColgp_HArray2OfLin2d* get()
        {
            return static_cast<::TColgp_HArray2OfLin2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray2OfLin2d::Iterator>
    {

#ifdef Include_TColgp_HArray2OfLin2d_Iterator_h
    public:
        Include_TColgp_HArray2OfLin2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray2OfLin2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfLin2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray2OfLin2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfLin2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray2OfLin2d::Iterator* NativeInstance
        {
            ::TColgp_HArray2OfLin2d::Iterator* get()
            {
                return static_cast<::TColgp_HArray2OfLin2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray2OfLin2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColgp_HArray2OfLin2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::gp_Lin2d^ theValue);
    TColgp_HArray2OfLin2d(Macad::Occt::TColgp_Array2OfLin2d^ theOther);
    Macad::Occt::TColgp_Array2OfLin2d^ Array2();
    Macad::Occt::TColgp_Array2OfLin2d^ ChangeArray2();
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
    Macad::Occt::TColgp_HArray2OfLin2d^ Assign(Macad::Occt::TColgp_HArray2OfLin2d^ theOther);
    Macad::Occt::TColgp_HArray2OfLin2d^ Move(Macad::Occt::TColgp_HArray2OfLin2d^ theOther);
    Macad::Occt::gp_Lin2d^ Value(int theRow, int theCol);
    Macad::Occt::gp_Lin2d^ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::gp_Lin2d^ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::gp_Lin2d^ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::gp_Lin2d^ First();
    Macad::Occt::gp_Lin2d^ ChangeFirst();
    Macad::Occt::gp_Lin2d^ Last();
    Macad::Occt::gp_Lin2d^ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray2OfLin2d^ CreateDowncasted(::TColgp_HArray2OfLin2d* instance);
}; // class TColgp_HArray2OfLin2d

//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfPnt
//---------------------------------------------------------------------
public ref class TColgp_HArray2OfPnt sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColgp_HArray2OfPnt_h
public:
    Include_TColgp_HArray2OfPnt_h
#endif

public:
    TColgp_HArray2OfPnt(::TColgp_HArray2OfPnt* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray2OfPnt(::TColgp_HArray2OfPnt& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray2OfPnt* NativeInstance
    {
        ::TColgp_HArray2OfPnt* get()
        {
            return static_cast<::TColgp_HArray2OfPnt*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray2OfPnt::Iterator>
    {

#ifdef Include_TColgp_HArray2OfPnt_Iterator_h
    public:
        Include_TColgp_HArray2OfPnt_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray2OfPnt::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfPnt::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray2OfPnt::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfPnt::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray2OfPnt::Iterator* NativeInstance
        {
            ::TColgp_HArray2OfPnt::Iterator* get()
            {
                return static_cast<::TColgp_HArray2OfPnt::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray2OfPnt(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColgp_HArray2OfPnt(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Pnt theValue);
    TColgp_HArray2OfPnt(Macad::Occt::TColgp_Array2OfPnt^ theOther);
    Macad::Occt::TColgp_Array2OfPnt^ Array2();
    Macad::Occt::TColgp_Array2OfPnt^ ChangeArray2();
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
    Macad::Occt::TColgp_HArray2OfPnt^ Assign(Macad::Occt::TColgp_HArray2OfPnt^ theOther);
    Macad::Occt::TColgp_HArray2OfPnt^ Move(Macad::Occt::TColgp_HArray2OfPnt^ theOther);
    Macad::Occt::Pnt Value(int theRow, int theCol);
    Macad::Occt::Pnt ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Pnt theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Pnt theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Pnt First();
    Macad::Occt::Pnt ChangeFirst();
    Macad::Occt::Pnt Last();
    Macad::Occt::Pnt ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray2OfPnt^ CreateDowncasted(::TColgp_HArray2OfPnt* instance);
}; // class TColgp_HArray2OfPnt

//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfPnt2d
//---------------------------------------------------------------------
public ref class TColgp_HArray2OfPnt2d sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColgp_HArray2OfPnt2d_h
public:
    Include_TColgp_HArray2OfPnt2d_h
#endif

public:
    TColgp_HArray2OfPnt2d(::TColgp_HArray2OfPnt2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray2OfPnt2d(::TColgp_HArray2OfPnt2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray2OfPnt2d* NativeInstance
    {
        ::TColgp_HArray2OfPnt2d* get()
        {
            return static_cast<::TColgp_HArray2OfPnt2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray2OfPnt2d::Iterator>
    {

#ifdef Include_TColgp_HArray2OfPnt2d_Iterator_h
    public:
        Include_TColgp_HArray2OfPnt2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray2OfPnt2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfPnt2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray2OfPnt2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfPnt2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray2OfPnt2d::Iterator* NativeInstance
        {
            ::TColgp_HArray2OfPnt2d::Iterator* get()
            {
                return static_cast<::TColgp_HArray2OfPnt2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray2OfPnt2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColgp_HArray2OfPnt2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Pnt2d theValue);
    TColgp_HArray2OfPnt2d(Macad::Occt::TColgp_Array2OfPnt2d^ theOther);
    Macad::Occt::TColgp_Array2OfPnt2d^ Array2();
    Macad::Occt::TColgp_Array2OfPnt2d^ ChangeArray2();
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
    Macad::Occt::TColgp_HArray2OfPnt2d^ Assign(Macad::Occt::TColgp_HArray2OfPnt2d^ theOther);
    Macad::Occt::TColgp_HArray2OfPnt2d^ Move(Macad::Occt::TColgp_HArray2OfPnt2d^ theOther);
    Macad::Occt::Pnt2d Value(int theRow, int theCol);
    Macad::Occt::Pnt2d ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Pnt2d theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Pnt2d theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Pnt2d First();
    Macad::Occt::Pnt2d ChangeFirst();
    Macad::Occt::Pnt2d Last();
    Macad::Occt::Pnt2d ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray2OfPnt2d^ CreateDowncasted(::TColgp_HArray2OfPnt2d* instance);
}; // class TColgp_HArray2OfPnt2d

//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfVec
//---------------------------------------------------------------------
public ref class TColgp_HArray2OfVec sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColgp_HArray2OfVec_h
public:
    Include_TColgp_HArray2OfVec_h
#endif

public:
    TColgp_HArray2OfVec(::TColgp_HArray2OfVec* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray2OfVec(::TColgp_HArray2OfVec& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray2OfVec* NativeInstance
    {
        ::TColgp_HArray2OfVec* get()
        {
            return static_cast<::TColgp_HArray2OfVec*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray2OfVec::Iterator>
    {

#ifdef Include_TColgp_HArray2OfVec_Iterator_h
    public:
        Include_TColgp_HArray2OfVec_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray2OfVec::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfVec::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray2OfVec::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfVec::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray2OfVec::Iterator* NativeInstance
        {
            ::TColgp_HArray2OfVec::Iterator* get()
            {
                return static_cast<::TColgp_HArray2OfVec::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray2OfVec(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColgp_HArray2OfVec(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Vec theValue);
    TColgp_HArray2OfVec(Macad::Occt::TColgp_Array2OfVec^ theOther);
    Macad::Occt::TColgp_Array2OfVec^ Array2();
    Macad::Occt::TColgp_Array2OfVec^ ChangeArray2();
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
    Macad::Occt::TColgp_HArray2OfVec^ Assign(Macad::Occt::TColgp_HArray2OfVec^ theOther);
    Macad::Occt::TColgp_HArray2OfVec^ Move(Macad::Occt::TColgp_HArray2OfVec^ theOther);
    Macad::Occt::Vec Value(int theRow, int theCol);
    Macad::Occt::Vec ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Vec theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Vec theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Vec First();
    Macad::Occt::Vec ChangeFirst();
    Macad::Occt::Vec Last();
    Macad::Occt::Vec ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray2OfVec^ CreateDowncasted(::TColgp_HArray2OfVec* instance);
}; // class TColgp_HArray2OfVec

//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfVec2d
//---------------------------------------------------------------------
public ref class TColgp_HArray2OfVec2d sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColgp_HArray2OfVec2d_h
public:
    Include_TColgp_HArray2OfVec2d_h
#endif

public:
    TColgp_HArray2OfVec2d(::TColgp_HArray2OfVec2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray2OfVec2d(::TColgp_HArray2OfVec2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray2OfVec2d* NativeInstance
    {
        ::TColgp_HArray2OfVec2d* get()
        {
            return static_cast<::TColgp_HArray2OfVec2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray2OfVec2d::Iterator>
    {

#ifdef Include_TColgp_HArray2OfVec2d_Iterator_h
    public:
        Include_TColgp_HArray2OfVec2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray2OfVec2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfVec2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray2OfVec2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfVec2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray2OfVec2d::Iterator* NativeInstance
        {
            ::TColgp_HArray2OfVec2d::Iterator* get()
            {
                return static_cast<::TColgp_HArray2OfVec2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray2OfVec2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColgp_HArray2OfVec2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Vec2d theValue);
    TColgp_HArray2OfVec2d(Macad::Occt::TColgp_Array2OfVec2d^ theOther);
    Macad::Occt::TColgp_Array2OfVec2d^ Array2();
    Macad::Occt::TColgp_Array2OfVec2d^ ChangeArray2();
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
    Macad::Occt::TColgp_HArray2OfVec2d^ Assign(Macad::Occt::TColgp_HArray2OfVec2d^ theOther);
    Macad::Occt::TColgp_HArray2OfVec2d^ Move(Macad::Occt::TColgp_HArray2OfVec2d^ theOther);
    Macad::Occt::Vec2d Value(int theRow, int theCol);
    Macad::Occt::Vec2d ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::Vec2d theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::Vec2d theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Vec2d First();
    Macad::Occt::Vec2d ChangeFirst();
    Macad::Occt::Vec2d Last();
    Macad::Occt::Vec2d ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray2OfVec2d^ CreateDowncasted(::TColgp_HArray2OfVec2d* instance);
}; // class TColgp_HArray2OfVec2d

//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfXY
//---------------------------------------------------------------------
public ref class TColgp_HArray2OfXY sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColgp_HArray2OfXY_h
public:
    Include_TColgp_HArray2OfXY_h
#endif

public:
    TColgp_HArray2OfXY(::TColgp_HArray2OfXY* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray2OfXY(::TColgp_HArray2OfXY& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray2OfXY* NativeInstance
    {
        ::TColgp_HArray2OfXY* get()
        {
            return static_cast<::TColgp_HArray2OfXY*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray2OfXY::Iterator>
    {

#ifdef Include_TColgp_HArray2OfXY_Iterator_h
    public:
        Include_TColgp_HArray2OfXY_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray2OfXY::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfXY::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray2OfXY::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfXY::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray2OfXY::Iterator* NativeInstance
        {
            ::TColgp_HArray2OfXY::Iterator* get()
            {
                return static_cast<::TColgp_HArray2OfXY::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray2OfXY(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColgp_HArray2OfXY(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::XY theValue);
    TColgp_HArray2OfXY(Macad::Occt::TColgp_Array2OfXY^ theOther);
    Macad::Occt::TColgp_Array2OfXY^ Array2();
    Macad::Occt::TColgp_Array2OfXY^ ChangeArray2();
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
    Macad::Occt::TColgp_HArray2OfXY^ Assign(Macad::Occt::TColgp_HArray2OfXY^ theOther);
    Macad::Occt::TColgp_HArray2OfXY^ Move(Macad::Occt::TColgp_HArray2OfXY^ theOther);
    Macad::Occt::XY Value(int theRow, int theCol);
    Macad::Occt::XY ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::XY theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::XY theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::XY First();
    Macad::Occt::XY ChangeFirst();
    Macad::Occt::XY Last();
    Macad::Occt::XY ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray2OfXY^ CreateDowncasted(::TColgp_HArray2OfXY* instance);
}; // class TColgp_HArray2OfXY

//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfXYZ
//---------------------------------------------------------------------
public ref class TColgp_HArray2OfXYZ sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColgp_HArray2OfXYZ_h
public:
    Include_TColgp_HArray2OfXYZ_h
#endif

public:
    TColgp_HArray2OfXYZ(::TColgp_HArray2OfXYZ* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HArray2OfXYZ(::TColgp_HArray2OfXYZ& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HArray2OfXYZ* NativeInstance
    {
        ::TColgp_HArray2OfXYZ* get()
        {
            return static_cast<::TColgp_HArray2OfXYZ*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HArray2OfXYZ::Iterator>
    {

#ifdef Include_TColgp_HArray2OfXYZ_Iterator_h
    public:
        Include_TColgp_HArray2OfXYZ_Iterator_h
#endif

    public:
        Iterator(::TColgp_HArray2OfXYZ::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfXYZ::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HArray2OfXYZ::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HArray2OfXYZ::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HArray2OfXYZ::Iterator* NativeInstance
        {
            ::TColgp_HArray2OfXYZ::Iterator* get()
            {
                return static_cast<::TColgp_HArray2OfXYZ::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    TColgp_HArray2OfXYZ(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TColgp_HArray2OfXYZ(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::XYZ theValue);
    TColgp_HArray2OfXYZ(Macad::Occt::TColgp_Array2OfXYZ^ theOther);
    Macad::Occt::TColgp_Array2OfXYZ^ Array2();
    Macad::Occt::TColgp_Array2OfXYZ^ ChangeArray2();
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
    Macad::Occt::TColgp_HArray2OfXYZ^ Assign(Macad::Occt::TColgp_HArray2OfXYZ^ theOther);
    Macad::Occt::TColgp_HArray2OfXYZ^ Move(Macad::Occt::TColgp_HArray2OfXYZ^ theOther);
    Macad::Occt::XYZ Value(int theRow, int theCol);
    Macad::Occt::XYZ ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, Macad::Occt::XYZ theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(Macad::Occt::XYZ theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::XYZ First();
    Macad::Occt::XYZ ChangeFirst();
    Macad::Occt::XYZ Last();
    Macad::Occt::XYZ ChangeLast();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::TColgp_HArray2OfXYZ^ CreateDowncasted(::TColgp_HArray2OfXYZ* instance);
}; // class TColgp_HArray2OfXYZ

//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfDir
//---------------------------------------------------------------------
public ref class TColgp_HSequenceOfDir sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Dir>
{

#ifdef Include_TColgp_HSequenceOfDir_h
public:
    Include_TColgp_HSequenceOfDir_h
#endif

public:
    TColgp_HSequenceOfDir(::TColgp_HSequenceOfDir* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HSequenceOfDir(::TColgp_HSequenceOfDir& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HSequenceOfDir* NativeInstance
    {
        ::TColgp_HSequenceOfDir* get()
        {
            return static_cast<::TColgp_HSequenceOfDir*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HSequenceOfDir::Iterator>
    {

#ifdef Include_TColgp_HSequenceOfDir_Iterator_h
    public:
        Include_TColgp_HSequenceOfDir_Iterator_h
#endif

    public:
        Iterator(::TColgp_HSequenceOfDir::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfDir::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HSequenceOfDir::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfDir::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HSequenceOfDir::Iterator* NativeInstance
        {
            ::TColgp_HSequenceOfDir::Iterator* get()
            {
                return static_cast<::TColgp_HSequenceOfDir::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Dir Value();
        Macad::Occt::Dir ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_HSequenceOfDir::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_HSequenceOfDir();
    TColgp_HSequenceOfDir(Macad::Occt::TColgp_SequenceOfDir^ theOther);
    Macad::Occt::TColgp_SequenceOfDir^ Sequence();
    void Append(Macad::Occt::Dir theItem);
    void Append(Macad::Occt::TColgp_SequenceOfDir^ theSequence);
    Macad::Occt::TColgp_SequenceOfDir^ ChangeSequence();
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
    Macad::Occt::TColgp_HSequenceOfDir^ Assign(Macad::Occt::TColgp_HSequenceOfDir^ theOther);
    void Remove(Macad::Occt::TColgp_HSequenceOfDir::Iterator^ thePosition);
    void Prepend(Macad::Occt::Dir theItem);
    void InsertBefore(int theIndex, Macad::Occt::Dir theItem);
    void InsertAfter(Macad::Occt::TColgp_HSequenceOfDir::Iterator^ thePosition, Macad::Occt::Dir theItem);
    void Split(int theIndex, Macad::Occt::TColgp_HSequenceOfDir^ theSeq);
    Macad::Occt::Dir First();
    Macad::Occt::Dir ChangeFirst();
    Macad::Occt::Dir Last();
    Macad::Occt::Dir ChangeLast();
    virtual Macad::Occt::Dir Value(int theIndex);
    Macad::Occt::Dir ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Dir theItem);
    static Macad::Occt::TColgp_HSequenceOfDir^ CreateDowncasted(::TColgp_HSequenceOfDir* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Dir>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HSequenceOfDir

//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfDir2d
//---------------------------------------------------------------------
public ref class TColgp_HSequenceOfDir2d sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Dir2d>
{

#ifdef Include_TColgp_HSequenceOfDir2d_h
public:
    Include_TColgp_HSequenceOfDir2d_h
#endif

public:
    TColgp_HSequenceOfDir2d(::TColgp_HSequenceOfDir2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HSequenceOfDir2d(::TColgp_HSequenceOfDir2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HSequenceOfDir2d* NativeInstance
    {
        ::TColgp_HSequenceOfDir2d* get()
        {
            return static_cast<::TColgp_HSequenceOfDir2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HSequenceOfDir2d::Iterator>
    {

#ifdef Include_TColgp_HSequenceOfDir2d_Iterator_h
    public:
        Include_TColgp_HSequenceOfDir2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_HSequenceOfDir2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfDir2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HSequenceOfDir2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfDir2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HSequenceOfDir2d::Iterator* NativeInstance
        {
            ::TColgp_HSequenceOfDir2d::Iterator* get()
            {
                return static_cast<::TColgp_HSequenceOfDir2d::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Dir2d Value();
        Macad::Occt::Dir2d ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_HSequenceOfDir2d::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_HSequenceOfDir2d();
    TColgp_HSequenceOfDir2d(Macad::Occt::TColgp_SequenceOfDir2d^ theOther);
    Macad::Occt::TColgp_SequenceOfDir2d^ Sequence();
    void Append(Macad::Occt::Dir2d theItem);
    void Append(Macad::Occt::TColgp_SequenceOfDir2d^ theSequence);
    Macad::Occt::TColgp_SequenceOfDir2d^ ChangeSequence();
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
    Macad::Occt::TColgp_HSequenceOfDir2d^ Assign(Macad::Occt::TColgp_HSequenceOfDir2d^ theOther);
    void Remove(Macad::Occt::TColgp_HSequenceOfDir2d::Iterator^ thePosition);
    void Prepend(Macad::Occt::Dir2d theItem);
    void InsertBefore(int theIndex, Macad::Occt::Dir2d theItem);
    void InsertAfter(Macad::Occt::TColgp_HSequenceOfDir2d::Iterator^ thePosition, Macad::Occt::Dir2d theItem);
    void Split(int theIndex, Macad::Occt::TColgp_HSequenceOfDir2d^ theSeq);
    Macad::Occt::Dir2d First();
    Macad::Occt::Dir2d ChangeFirst();
    Macad::Occt::Dir2d Last();
    Macad::Occt::Dir2d ChangeLast();
    virtual Macad::Occt::Dir2d Value(int theIndex);
    Macad::Occt::Dir2d ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Dir2d theItem);
    static Macad::Occt::TColgp_HSequenceOfDir2d^ CreateDowncasted(::TColgp_HSequenceOfDir2d* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Dir2d>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HSequenceOfDir2d

//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfPnt
//---------------------------------------------------------------------
public ref class TColgp_HSequenceOfPnt sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Pnt>
{

#ifdef Include_TColgp_HSequenceOfPnt_h
public:
    Include_TColgp_HSequenceOfPnt_h
#endif

public:
    TColgp_HSequenceOfPnt(::TColgp_HSequenceOfPnt* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HSequenceOfPnt(::TColgp_HSequenceOfPnt& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HSequenceOfPnt* NativeInstance
    {
        ::TColgp_HSequenceOfPnt* get()
        {
            return static_cast<::TColgp_HSequenceOfPnt*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HSequenceOfPnt::Iterator>
    {

#ifdef Include_TColgp_HSequenceOfPnt_Iterator_h
    public:
        Include_TColgp_HSequenceOfPnt_Iterator_h
#endif

    public:
        Iterator(::TColgp_HSequenceOfPnt::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfPnt::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HSequenceOfPnt::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfPnt::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HSequenceOfPnt::Iterator* NativeInstance
        {
            ::TColgp_HSequenceOfPnt::Iterator* get()
            {
                return static_cast<::TColgp_HSequenceOfPnt::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Pnt Value();
        Macad::Occt::Pnt ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_HSequenceOfPnt::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_HSequenceOfPnt();
    TColgp_HSequenceOfPnt(Macad::Occt::TColgp_SequenceOfPnt^ theOther);
    Macad::Occt::TColgp_SequenceOfPnt^ Sequence();
    void Append(Macad::Occt::Pnt theItem);
    void Append(Macad::Occt::TColgp_SequenceOfPnt^ theSequence);
    Macad::Occt::TColgp_SequenceOfPnt^ ChangeSequence();
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
    Macad::Occt::TColgp_HSequenceOfPnt^ Assign(Macad::Occt::TColgp_HSequenceOfPnt^ theOther);
    void Remove(Macad::Occt::TColgp_HSequenceOfPnt::Iterator^ thePosition);
    void Prepend(Macad::Occt::Pnt theItem);
    void InsertBefore(int theIndex, Macad::Occt::Pnt theItem);
    void InsertAfter(Macad::Occt::TColgp_HSequenceOfPnt::Iterator^ thePosition, Macad::Occt::Pnt theItem);
    void Split(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theSeq);
    Macad::Occt::Pnt First();
    Macad::Occt::Pnt ChangeFirst();
    Macad::Occt::Pnt Last();
    Macad::Occt::Pnt ChangeLast();
    virtual Macad::Occt::Pnt Value(int theIndex);
    Macad::Occt::Pnt ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Pnt theItem);
    static Macad::Occt::TColgp_HSequenceOfPnt^ CreateDowncasted(::TColgp_HSequenceOfPnt* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Pnt>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HSequenceOfPnt

//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfPnt2d
//---------------------------------------------------------------------
public ref class TColgp_HSequenceOfPnt2d sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Pnt2d>
{

#ifdef Include_TColgp_HSequenceOfPnt2d_h
public:
    Include_TColgp_HSequenceOfPnt2d_h
#endif

public:
    TColgp_HSequenceOfPnt2d(::TColgp_HSequenceOfPnt2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HSequenceOfPnt2d(::TColgp_HSequenceOfPnt2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HSequenceOfPnt2d* NativeInstance
    {
        ::TColgp_HSequenceOfPnt2d* get()
        {
            return static_cast<::TColgp_HSequenceOfPnt2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HSequenceOfPnt2d::Iterator>
    {

#ifdef Include_TColgp_HSequenceOfPnt2d_Iterator_h
    public:
        Include_TColgp_HSequenceOfPnt2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_HSequenceOfPnt2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfPnt2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HSequenceOfPnt2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfPnt2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HSequenceOfPnt2d::Iterator* NativeInstance
        {
            ::TColgp_HSequenceOfPnt2d::Iterator* get()
            {
                return static_cast<::TColgp_HSequenceOfPnt2d::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Pnt2d Value();
        Macad::Occt::Pnt2d ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_HSequenceOfPnt2d::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_HSequenceOfPnt2d();
    TColgp_HSequenceOfPnt2d(Macad::Occt::TColgp_SequenceOfPnt2d^ theOther);
    Macad::Occt::TColgp_SequenceOfPnt2d^ Sequence();
    void Append(Macad::Occt::Pnt2d theItem);
    void Append(Macad::Occt::TColgp_SequenceOfPnt2d^ theSequence);
    Macad::Occt::TColgp_SequenceOfPnt2d^ ChangeSequence();
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
    Macad::Occt::TColgp_HSequenceOfPnt2d^ Assign(Macad::Occt::TColgp_HSequenceOfPnt2d^ theOther);
    void Remove(Macad::Occt::TColgp_HSequenceOfPnt2d::Iterator^ thePosition);
    void Prepend(Macad::Occt::Pnt2d theItem);
    void InsertBefore(int theIndex, Macad::Occt::Pnt2d theItem);
    void InsertAfter(Macad::Occt::TColgp_HSequenceOfPnt2d::Iterator^ thePosition, Macad::Occt::Pnt2d theItem);
    void Split(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt2d^ theSeq);
    Macad::Occt::Pnt2d First();
    Macad::Occt::Pnt2d ChangeFirst();
    Macad::Occt::Pnt2d Last();
    Macad::Occt::Pnt2d ChangeLast();
    virtual Macad::Occt::Pnt2d Value(int theIndex);
    Macad::Occt::Pnt2d ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Pnt2d theItem);
    static Macad::Occt::TColgp_HSequenceOfPnt2d^ CreateDowncasted(::TColgp_HSequenceOfPnt2d* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Pnt2d>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HSequenceOfPnt2d

//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfVec
//---------------------------------------------------------------------
public ref class TColgp_HSequenceOfVec sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Vec>
{

#ifdef Include_TColgp_HSequenceOfVec_h
public:
    Include_TColgp_HSequenceOfVec_h
#endif

public:
    TColgp_HSequenceOfVec(::TColgp_HSequenceOfVec* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HSequenceOfVec(::TColgp_HSequenceOfVec& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HSequenceOfVec* NativeInstance
    {
        ::TColgp_HSequenceOfVec* get()
        {
            return static_cast<::TColgp_HSequenceOfVec*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HSequenceOfVec::Iterator>
    {

#ifdef Include_TColgp_HSequenceOfVec_Iterator_h
    public:
        Include_TColgp_HSequenceOfVec_Iterator_h
#endif

    public:
        Iterator(::TColgp_HSequenceOfVec::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfVec::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HSequenceOfVec::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfVec::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HSequenceOfVec::Iterator* NativeInstance
        {
            ::TColgp_HSequenceOfVec::Iterator* get()
            {
                return static_cast<::TColgp_HSequenceOfVec::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Vec Value();
        Macad::Occt::Vec ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_HSequenceOfVec::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_HSequenceOfVec();
    TColgp_HSequenceOfVec(Macad::Occt::TColgp_SequenceOfVec^ theOther);
    Macad::Occt::TColgp_SequenceOfVec^ Sequence();
    void Append(Macad::Occt::Vec theItem);
    void Append(Macad::Occt::TColgp_SequenceOfVec^ theSequence);
    Macad::Occt::TColgp_SequenceOfVec^ ChangeSequence();
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
    Macad::Occt::TColgp_HSequenceOfVec^ Assign(Macad::Occt::TColgp_HSequenceOfVec^ theOther);
    void Remove(Macad::Occt::TColgp_HSequenceOfVec::Iterator^ thePosition);
    void Prepend(Macad::Occt::Vec theItem);
    void InsertBefore(int theIndex, Macad::Occt::Vec theItem);
    void InsertAfter(Macad::Occt::TColgp_HSequenceOfVec::Iterator^ thePosition, Macad::Occt::Vec theItem);
    void Split(int theIndex, Macad::Occt::TColgp_HSequenceOfVec^ theSeq);
    Macad::Occt::Vec First();
    Macad::Occt::Vec ChangeFirst();
    Macad::Occt::Vec Last();
    Macad::Occt::Vec ChangeLast();
    virtual Macad::Occt::Vec Value(int theIndex);
    Macad::Occt::Vec ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Vec theItem);
    static Macad::Occt::TColgp_HSequenceOfVec^ CreateDowncasted(::TColgp_HSequenceOfVec* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Vec>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HSequenceOfVec

//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfVec2d
//---------------------------------------------------------------------
public ref class TColgp_HSequenceOfVec2d sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Vec2d>
{

#ifdef Include_TColgp_HSequenceOfVec2d_h
public:
    Include_TColgp_HSequenceOfVec2d_h
#endif

public:
    TColgp_HSequenceOfVec2d(::TColgp_HSequenceOfVec2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HSequenceOfVec2d(::TColgp_HSequenceOfVec2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HSequenceOfVec2d* NativeInstance
    {
        ::TColgp_HSequenceOfVec2d* get()
        {
            return static_cast<::TColgp_HSequenceOfVec2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HSequenceOfVec2d::Iterator>
    {

#ifdef Include_TColgp_HSequenceOfVec2d_Iterator_h
    public:
        Include_TColgp_HSequenceOfVec2d_Iterator_h
#endif

    public:
        Iterator(::TColgp_HSequenceOfVec2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfVec2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HSequenceOfVec2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfVec2d::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HSequenceOfVec2d::Iterator* NativeInstance
        {
            ::TColgp_HSequenceOfVec2d::Iterator* get()
            {
                return static_cast<::TColgp_HSequenceOfVec2d::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Vec2d Value();
        Macad::Occt::Vec2d ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_HSequenceOfVec2d::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_HSequenceOfVec2d();
    TColgp_HSequenceOfVec2d(Macad::Occt::TColgp_SequenceOfVec2d^ theOther);
    Macad::Occt::TColgp_SequenceOfVec2d^ Sequence();
    void Append(Macad::Occt::Vec2d theItem);
    void Append(Macad::Occt::TColgp_SequenceOfVec2d^ theSequence);
    Macad::Occt::TColgp_SequenceOfVec2d^ ChangeSequence();
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
    Macad::Occt::TColgp_HSequenceOfVec2d^ Assign(Macad::Occt::TColgp_HSequenceOfVec2d^ theOther);
    void Remove(Macad::Occt::TColgp_HSequenceOfVec2d::Iterator^ thePosition);
    void Prepend(Macad::Occt::Vec2d theItem);
    void InsertBefore(int theIndex, Macad::Occt::Vec2d theItem);
    void InsertAfter(Macad::Occt::TColgp_HSequenceOfVec2d::Iterator^ thePosition, Macad::Occt::Vec2d theItem);
    void Split(int theIndex, Macad::Occt::TColgp_HSequenceOfVec2d^ theSeq);
    Macad::Occt::Vec2d First();
    Macad::Occt::Vec2d ChangeFirst();
    Macad::Occt::Vec2d Last();
    Macad::Occt::Vec2d ChangeLast();
    virtual Macad::Occt::Vec2d Value(int theIndex);
    Macad::Occt::Vec2d ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Vec2d theItem);
    static Macad::Occt::TColgp_HSequenceOfVec2d^ CreateDowncasted(::TColgp_HSequenceOfVec2d* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Vec2d>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HSequenceOfVec2d

//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfXY
//---------------------------------------------------------------------
public ref class TColgp_HSequenceOfXY sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::XY>
{

#ifdef Include_TColgp_HSequenceOfXY_h
public:
    Include_TColgp_HSequenceOfXY_h
#endif

public:
    TColgp_HSequenceOfXY(::TColgp_HSequenceOfXY* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HSequenceOfXY(::TColgp_HSequenceOfXY& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HSequenceOfXY* NativeInstance
    {
        ::TColgp_HSequenceOfXY* get()
        {
            return static_cast<::TColgp_HSequenceOfXY*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HSequenceOfXY::Iterator>
    {

#ifdef Include_TColgp_HSequenceOfXY_Iterator_h
    public:
        Include_TColgp_HSequenceOfXY_Iterator_h
#endif

    public:
        Iterator(::TColgp_HSequenceOfXY::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfXY::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HSequenceOfXY::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfXY::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HSequenceOfXY::Iterator* NativeInstance
        {
            ::TColgp_HSequenceOfXY::Iterator* get()
            {
                return static_cast<::TColgp_HSequenceOfXY::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::XY Value();
        Macad::Occt::XY ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_HSequenceOfXY::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_HSequenceOfXY();
    TColgp_HSequenceOfXY(Macad::Occt::TColgp_SequenceOfXY^ theOther);
    Macad::Occt::TColgp_SequenceOfXY^ Sequence();
    void Append(Macad::Occt::XY theItem);
    void Append(Macad::Occt::TColgp_SequenceOfXY^ theSequence);
    Macad::Occt::TColgp_SequenceOfXY^ ChangeSequence();
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
    Macad::Occt::TColgp_HSequenceOfXY^ Assign(Macad::Occt::TColgp_HSequenceOfXY^ theOther);
    void Remove(Macad::Occt::TColgp_HSequenceOfXY::Iterator^ thePosition);
    void Prepend(Macad::Occt::XY theItem);
    void InsertBefore(int theIndex, Macad::Occt::XY theItem);
    void InsertAfter(Macad::Occt::TColgp_HSequenceOfXY::Iterator^ thePosition, Macad::Occt::XY theItem);
    void Split(int theIndex, Macad::Occt::TColgp_HSequenceOfXY^ theSeq);
    Macad::Occt::XY First();
    Macad::Occt::XY ChangeFirst();
    Macad::Occt::XY Last();
    Macad::Occt::XY ChangeLast();
    virtual Macad::Occt::XY Value(int theIndex);
    Macad::Occt::XY ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::XY theItem);
    static Macad::Occt::TColgp_HSequenceOfXY^ CreateDowncasted(::TColgp_HSequenceOfXY* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::XY>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HSequenceOfXY

//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfXYZ
//---------------------------------------------------------------------
public ref class TColgp_HSequenceOfXYZ sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::XYZ>
{

#ifdef Include_TColgp_HSequenceOfXYZ_h
public:
    Include_TColgp_HSequenceOfXYZ_h
#endif

public:
    TColgp_HSequenceOfXYZ(::TColgp_HSequenceOfXYZ* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TColgp_HSequenceOfXYZ(::TColgp_HSequenceOfXYZ& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TColgp_HSequenceOfXYZ* NativeInstance
    {
        ::TColgp_HSequenceOfXYZ* get()
        {
            return static_cast<::TColgp_HSequenceOfXYZ*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TColgp_HSequenceOfXYZ::Iterator>
    {

#ifdef Include_TColgp_HSequenceOfXYZ_Iterator_h
    public:
        Include_TColgp_HSequenceOfXYZ_Iterator_h
#endif

    public:
        Iterator(::TColgp_HSequenceOfXYZ::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfXYZ::Iterator>( nativeInstance, true )
        {}

        Iterator(::TColgp_HSequenceOfXYZ::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TColgp_HSequenceOfXYZ::Iterator>( &nativeInstance, false )
        {}

        property ::TColgp_HSequenceOfXYZ::Iterator* NativeInstance
        {
            ::TColgp_HSequenceOfXYZ::Iterator* get()
            {
                return static_cast<::TColgp_HSequenceOfXYZ::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::XYZ Value();
        Macad::Occt::XYZ ChangeValue();
        bool IsEqual(Macad::Occt::TColgp_HSequenceOfXYZ::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    TColgp_HSequenceOfXYZ();
    TColgp_HSequenceOfXYZ(Macad::Occt::TColgp_SequenceOfXYZ^ theOther);
    Macad::Occt::TColgp_SequenceOfXYZ^ Sequence();
    void Append(Macad::Occt::XYZ theItem);
    void Append(Macad::Occt::TColgp_SequenceOfXYZ^ theSequence);
    Macad::Occt::TColgp_SequenceOfXYZ^ ChangeSequence();
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
    Macad::Occt::TColgp_HSequenceOfXYZ^ Assign(Macad::Occt::TColgp_HSequenceOfXYZ^ theOther);
    void Remove(Macad::Occt::TColgp_HSequenceOfXYZ::Iterator^ thePosition);
    void Prepend(Macad::Occt::XYZ theItem);
    void InsertBefore(int theIndex, Macad::Occt::XYZ theItem);
    void InsertAfter(Macad::Occt::TColgp_HSequenceOfXYZ::Iterator^ thePosition, Macad::Occt::XYZ theItem);
    void Split(int theIndex, Macad::Occt::TColgp_HSequenceOfXYZ^ theSeq);
    Macad::Occt::XYZ First();
    Macad::Occt::XYZ ChangeFirst();
    Macad::Occt::XYZ Last();
    Macad::Occt::XYZ ChangeLast();
    virtual Macad::Occt::XYZ Value(int theIndex);
    Macad::Occt::XYZ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::XYZ theItem);
    static Macad::Occt::TColgp_HSequenceOfXYZ^ CreateDowncasted(::TColgp_HSequenceOfXYZ* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::XYZ>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TColgp_HSequenceOfXYZ

}; // namespace Occt
}; // namespace Macad
