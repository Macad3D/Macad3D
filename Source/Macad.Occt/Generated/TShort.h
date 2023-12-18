// Generated wrapper code for package TShort

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TShort_Array1OfShortReal
//---------------------------------------------------------------------
public ref class TShort_Array1OfShortReal sealed
    : public Macad::Occt::BaseClass<::TShort_Array1OfShortReal>
    , public IIndexEnumerable<float>
{

#ifdef Include_TShort_Array1OfShortReal_h
public:
    Include_TShort_Array1OfShortReal_h
#endif

public:
    TShort_Array1OfShortReal(::TShort_Array1OfShortReal* nativeInstance)
        : Macad::Occt::BaseClass<::TShort_Array1OfShortReal>( nativeInstance, true )
    {}

    TShort_Array1OfShortReal(::TShort_Array1OfShortReal& nativeInstance)
        : Macad::Occt::BaseClass<::TShort_Array1OfShortReal>( &nativeInstance, false )
    {}

    property ::TShort_Array1OfShortReal* NativeInstance
    {
        ::TShort_Array1OfShortReal* get()
        {
            return static_cast<::TShort_Array1OfShortReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TShort_Array1OfShortReal::Iterator>
    {

#ifdef Include_TShort_Array1OfShortReal_Iterator_h
    public:
        Include_TShort_Array1OfShortReal_Iterator_h
#endif

    public:
        Iterator(::TShort_Array1OfShortReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TShort_Array1OfShortReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TShort_Array1OfShortReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TShort_Array1OfShortReal::Iterator>( &nativeInstance, false )
        {}

        property ::TShort_Array1OfShortReal::Iterator* NativeInstance
        {
            ::TShort_Array1OfShortReal::Iterator* get()
            {
                return static_cast<::TShort_Array1OfShortReal::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property float ChangeFirst {
        float get() {
            return ((::TShort_Array1OfShortReal*)_NativeInstance)->ChangeFirst();
        }
        void set(float value) {
            ((::TShort_Array1OfShortReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property float ChangeLast {
        float get() {
            return ((::TShort_Array1OfShortReal*)_NativeInstance)->ChangeLast();
        }
        void set(float value) {
            ((::TShort_Array1OfShortReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TShort_Array1OfShortReal();
    TShort_Array1OfShortReal(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void TShort_Array1OfShortReal(allocator_type theAlloc, int theLower, int theUpper, ) */
    TShort_Array1OfShortReal(float theBegin, int theLower, int theUpper, bool theUseBuffer);
    TShort_Array1OfShortReal(float theBegin, int theLower, int theUpper);
    void Init(float theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TShort_Array1OfShortReal^ Assign(Macad::Occt::TShort_Array1OfShortReal^ theOther);
    Macad::Occt::TShort_Array1OfShortReal^ Move(Macad::Occt::TShort_Array1OfShortReal^ theOther);
    float First();
    float Last();
    virtual float Value(int theIndex);
    float ChangeValue(int theIndex);
    void SetValue(int theIndex, float theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<float>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TShort_Array1OfShortReal

//---------------------------------------------------------------------
//  Class  TShort_Array2OfShortReal
//---------------------------------------------------------------------
public ref class TShort_Array2OfShortReal sealed
    : public Macad::Occt::BaseClass<::TShort_Array2OfShortReal>
{

#ifdef Include_TShort_Array2OfShortReal_h
public:
    Include_TShort_Array2OfShortReal_h
#endif

public:
    TShort_Array2OfShortReal(::TShort_Array2OfShortReal* nativeInstance)
        : Macad::Occt::BaseClass<::TShort_Array2OfShortReal>( nativeInstance, true )
    {}

    TShort_Array2OfShortReal(::TShort_Array2OfShortReal& nativeInstance)
        : Macad::Occt::BaseClass<::TShort_Array2OfShortReal>( &nativeInstance, false )
    {}

    property ::TShort_Array2OfShortReal* NativeInstance
    {
        ::TShort_Array2OfShortReal* get()
        {
            return static_cast<::TShort_Array2OfShortReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TShort_Array2OfShortReal::Iterator>
    {

#ifdef Include_TShort_Array2OfShortReal_Iterator_h
    public:
        Include_TShort_Array2OfShortReal_Iterator_h
#endif

    public:
        Iterator(::TShort_Array2OfShortReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TShort_Array2OfShortReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TShort_Array2OfShortReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TShort_Array2OfShortReal::Iterator>( &nativeInstance, false )
        {}

        property ::TShort_Array2OfShortReal::Iterator* NativeInstance
        {
            ::TShort_Array2OfShortReal::Iterator* get()
            {
                return static_cast<::TShort_Array2OfShortReal::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property float ChangeFirst {
        float get() {
            return ((::TShort_Array2OfShortReal*)_NativeInstance)->ChangeFirst();
        }
        void set(float value) {
            ((::TShort_Array2OfShortReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property float ChangeLast {
        float get() {
            return ((::TShort_Array2OfShortReal*)_NativeInstance)->ChangeLast();
        }
        void set(float value) {
            ((::TShort_Array2OfShortReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TShort_Array2OfShortReal();
    TShort_Array2OfShortReal(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
    /* Method skipped due to unknown mapping: void TShort_Array2OfShortReal(allocator_type theAlloc, int theRowLower, int theRowUpper, int theColLower, int theColUpper, ) */
    TShort_Array2OfShortReal(float theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
    Macad::Occt::TShort_Array2OfShortReal^ Assign(Macad::Occt::TShort_Array2OfShortReal^ theOther);
    Macad::Occt::TShort_Array2OfShortReal^ Move(Macad::Occt::TShort_Array2OfShortReal^ theOther);
    float Value(int theRow, int theCol);
    float ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, float theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(float theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    float First();
    float Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
}; // class TShort_Array2OfShortReal

//---------------------------------------------------------------------
//  Class  TShort_SequenceOfShortReal
//---------------------------------------------------------------------
public ref class TShort_SequenceOfShortReal sealed
    : public Macad::Occt::BaseClass<::TShort_SequenceOfShortReal>
    , public IIndexEnumerable<float>
{

#ifdef Include_TShort_SequenceOfShortReal_h
public:
    Include_TShort_SequenceOfShortReal_h
#endif

public:
    TShort_SequenceOfShortReal(::TShort_SequenceOfShortReal* nativeInstance)
        : Macad::Occt::BaseClass<::TShort_SequenceOfShortReal>( nativeInstance, true )
    {}

    TShort_SequenceOfShortReal(::TShort_SequenceOfShortReal& nativeInstance)
        : Macad::Occt::BaseClass<::TShort_SequenceOfShortReal>( &nativeInstance, false )
    {}

    property ::TShort_SequenceOfShortReal* NativeInstance
    {
        ::TShort_SequenceOfShortReal* get()
        {
            return static_cast<::TShort_SequenceOfShortReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TShort_SequenceOfShortReal::Iterator>
    {

#ifdef Include_TShort_SequenceOfShortReal_Iterator_h
    public:
        Include_TShort_SequenceOfShortReal_Iterator_h
#endif

    public:
        Iterator(::TShort_SequenceOfShortReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TShort_SequenceOfShortReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TShort_SequenceOfShortReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TShort_SequenceOfShortReal::Iterator>( &nativeInstance, false )
        {}

        property ::TShort_SequenceOfShortReal::Iterator* NativeInstance
        {
            ::TShort_SequenceOfShortReal::Iterator* get()
            {
                return static_cast<::TShort_SequenceOfShortReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property float ChangeValue {
            float get() {
                return ((::TShort_SequenceOfShortReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(float value) {
                ((::TShort_SequenceOfShortReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        float Value();
        bool IsEqual(Macad::Occt::TShort_SequenceOfShortReal::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    property float ChangeFirst {
        float get() {
            return ((::TShort_SequenceOfShortReal*)_NativeInstance)->ChangeFirst();
        }
        void set(float value) {
            ((::TShort_SequenceOfShortReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property float ChangeLast {
        float get() {
            return ((::TShort_SequenceOfShortReal*)_NativeInstance)->ChangeLast();
        }
        void set(float value) {
            ((::TShort_SequenceOfShortReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TShort_SequenceOfShortReal();
    TShort_SequenceOfShortReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::TShort_SequenceOfShortReal^ Assign(Macad::Occt::TShort_SequenceOfShortReal^ theOther);
    void Remove(Macad::Occt::TShort_SequenceOfShortReal::Iterator^ thePosition);
    void Append(float theItem);
    void Prepend(float theItem);
    void InsertBefore(int theIndex, float theItem);
    void InsertAfter(Macad::Occt::TShort_SequenceOfShortReal::Iterator^ thePosition, float theItem);
    void Split(int theIndex, Macad::Occt::TShort_SequenceOfShortReal^ theSeq);
    float First();
    float Last();
    virtual float Value(int theIndex);
    float ChangeValue(int theIndex);
    void SetValue(int theIndex, float theItem);
    virtual System::Collections::Generic::IEnumerator<float>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TShort_SequenceOfShortReal

//---------------------------------------------------------------------
//  Class  TShort_HArray1OfShortReal
//---------------------------------------------------------------------
public ref class TShort_HArray1OfShortReal sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<float>
{

#ifdef Include_TShort_HArray1OfShortReal_h
public:
    Include_TShort_HArray1OfShortReal_h
#endif

public:
    TShort_HArray1OfShortReal(::TShort_HArray1OfShortReal* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TShort_HArray1OfShortReal(::TShort_HArray1OfShortReal& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TShort_HArray1OfShortReal* NativeInstance
    {
        ::TShort_HArray1OfShortReal* get()
        {
            return static_cast<::TShort_HArray1OfShortReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TShort_HArray1OfShortReal::Iterator>
    {

#ifdef Include_TShort_HArray1OfShortReal_Iterator_h
    public:
        Include_TShort_HArray1OfShortReal_Iterator_h
#endif

    public:
        Iterator(::TShort_HArray1OfShortReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TShort_HArray1OfShortReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TShort_HArray1OfShortReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TShort_HArray1OfShortReal::Iterator>( &nativeInstance, false )
        {}

        property ::TShort_HArray1OfShortReal::Iterator* NativeInstance
        {
            ::TShort_HArray1OfShortReal::Iterator* get()
            {
                return static_cast<::TShort_HArray1OfShortReal::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property float ChangeFirst {
        float get() {
            return ((::TShort_HArray1OfShortReal*)_NativeInstance)->ChangeFirst();
        }
        void set(float value) {
            ((::TShort_HArray1OfShortReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property float ChangeLast {
        float get() {
            return ((::TShort_HArray1OfShortReal*)_NativeInstance)->ChangeLast();
        }
        void set(float value) {
            ((::TShort_HArray1OfShortReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TShort_HArray1OfShortReal();
    TShort_HArray1OfShortReal(int theLower, int theUpper);
    TShort_HArray1OfShortReal(int theLower, int theUpper, float theValue);
    TShort_HArray1OfShortReal(float theBegin, int theLower, int theUpper, bool parameter1);
    TShort_HArray1OfShortReal(Macad::Occt::TShort_Array1OfShortReal^ theOther);
    Macad::Occt::TShort_Array1OfShortReal^ Array1();
    Macad::Occt::TShort_Array1OfShortReal^ ChangeArray1();
    void Init(float theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::TShort_HArray1OfShortReal^ Assign(Macad::Occt::TShort_HArray1OfShortReal^ theOther);
    Macad::Occt::TShort_HArray1OfShortReal^ Move(Macad::Occt::TShort_HArray1OfShortReal^ theOther);
    float First();
    float Last();
    virtual float Value(int theIndex);
    float ChangeValue(int theIndex);
    void SetValue(int theIndex, float theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::TShort_HArray1OfShortReal^ CreateDowncasted(::TShort_HArray1OfShortReal* instance);
    virtual System::Collections::Generic::IEnumerator<float>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TShort_HArray1OfShortReal

//---------------------------------------------------------------------
//  Class  TShort_HArray2OfShortReal
//---------------------------------------------------------------------
public ref class TShort_HArray2OfShortReal sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_TShort_HArray2OfShortReal_h
public:
    Include_TShort_HArray2OfShortReal_h
#endif

public:
    TShort_HArray2OfShortReal(::TShort_HArray2OfShortReal* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TShort_HArray2OfShortReal(::TShort_HArray2OfShortReal& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TShort_HArray2OfShortReal* NativeInstance
    {
        ::TShort_HArray2OfShortReal* get()
        {
            return static_cast<::TShort_HArray2OfShortReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TShort_HArray2OfShortReal::Iterator>
    {

#ifdef Include_TShort_HArray2OfShortReal_Iterator_h
    public:
        Include_TShort_HArray2OfShortReal_Iterator_h
#endif

    public:
        Iterator(::TShort_HArray2OfShortReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TShort_HArray2OfShortReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TShort_HArray2OfShortReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TShort_HArray2OfShortReal::Iterator>( &nativeInstance, false )
        {}

        property ::TShort_HArray2OfShortReal::Iterator* NativeInstance
        {
            ::TShort_HArray2OfShortReal::Iterator* get()
            {
                return static_cast<::TShort_HArray2OfShortReal::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    property float ChangeFirst {
        float get() {
            return ((::TShort_HArray2OfShortReal*)_NativeInstance)->ChangeFirst();
        }
        void set(float value) {
            ((::TShort_HArray2OfShortReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property float ChangeLast {
        float get() {
            return ((::TShort_HArray2OfShortReal*)_NativeInstance)->ChangeLast();
        }
        void set(float value) {
            ((::TShort_HArray2OfShortReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TShort_HArray2OfShortReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
    TShort_HArray2OfShortReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp, float theValue);
    TShort_HArray2OfShortReal(Macad::Occt::TShort_Array2OfShortReal^ theOther);
    Macad::Occt::TShort_Array2OfShortReal^ Array2();
    Macad::Occt::TShort_Array2OfShortReal^ ChangeArray2();
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
    Macad::Occt::TShort_HArray2OfShortReal^ Assign(Macad::Occt::TShort_HArray2OfShortReal^ theOther);
    Macad::Occt::TShort_HArray2OfShortReal^ Move(Macad::Occt::TShort_HArray2OfShortReal^ theOther);
    float Value(int theRow, int theCol);
    float ChangeValue(int theRow, int theCol);
    void SetValue(int theRow, int theCol, float theItem);
    void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
    void Init(float theValue);
    bool IsEmpty();
    int Lower();
    int Upper();
    float First();
    float Last();
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    bool IsDeletable();
    static Macad::Occt::TShort_HArray2OfShortReal^ CreateDowncasted(::TShort_HArray2OfShortReal* instance);
}; // class TShort_HArray2OfShortReal

//---------------------------------------------------------------------
//  Class  TShort_HSequenceOfShortReal
//---------------------------------------------------------------------
public ref class TShort_HSequenceOfShortReal sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<float>
{

#ifdef Include_TShort_HSequenceOfShortReal_h
public:
    Include_TShort_HSequenceOfShortReal_h
#endif

public:
    TShort_HSequenceOfShortReal(::TShort_HSequenceOfShortReal* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    TShort_HSequenceOfShortReal(::TShort_HSequenceOfShortReal& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::TShort_HSequenceOfShortReal* NativeInstance
    {
        ::TShort_HSequenceOfShortReal* get()
        {
            return static_cast<::TShort_HSequenceOfShortReal*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::TShort_HSequenceOfShortReal::Iterator>
    {

#ifdef Include_TShort_HSequenceOfShortReal_Iterator_h
    public:
        Include_TShort_HSequenceOfShortReal_Iterator_h
#endif

    public:
        Iterator(::TShort_HSequenceOfShortReal::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::TShort_HSequenceOfShortReal::Iterator>( nativeInstance, true )
        {}

        Iterator(::TShort_HSequenceOfShortReal::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::TShort_HSequenceOfShortReal::Iterator>( &nativeInstance, false )
        {}

        property ::TShort_HSequenceOfShortReal::Iterator* NativeInstance
        {
            ::TShort_HSequenceOfShortReal::Iterator* get()
            {
                return static_cast<::TShort_HSequenceOfShortReal::Iterator*>(_NativeInstance);
            }
        }

    public:
        property float ChangeValue {
            float get() {
                return ((::TShort_HSequenceOfShortReal::Iterator*)_NativeInstance)->ChangeValue();
            }
            void set(float value) {
                ((::TShort_HSequenceOfShortReal::Iterator*)_NativeInstance)->ChangeValue() = value;
            }
        }

        Iterator();
        bool More();
        void Next();
        float Value();
        bool IsEqual(Macad::Occt::TShort_HSequenceOfShortReal::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    property float ChangeFirst {
        float get() {
            return ((::TShort_HSequenceOfShortReal*)_NativeInstance)->ChangeFirst();
        }
        void set(float value) {
            ((::TShort_HSequenceOfShortReal*)_NativeInstance)->ChangeFirst() = value;
        }
    }

    property float ChangeLast {
        float get() {
            return ((::TShort_HSequenceOfShortReal*)_NativeInstance)->ChangeLast();
        }
        void set(float value) {
            ((::TShort_HSequenceOfShortReal*)_NativeInstance)->ChangeLast() = value;
        }
    }

    TShort_HSequenceOfShortReal();
    TShort_HSequenceOfShortReal(Macad::Occt::TShort_SequenceOfShortReal^ theOther);
    Macad::Occt::TShort_SequenceOfShortReal^ Sequence();
    void Append(float theItem);
    void Append(Macad::Occt::TShort_SequenceOfShortReal^ theSequence);
    Macad::Occt::TShort_SequenceOfShortReal^ ChangeSequence();
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
    Macad::Occt::TShort_HSequenceOfShortReal^ Assign(Macad::Occt::TShort_HSequenceOfShortReal^ theOther);
    void Remove(Macad::Occt::TShort_HSequenceOfShortReal::Iterator^ thePosition);
    void Prepend(float theItem);
    void InsertBefore(int theIndex, float theItem);
    void InsertAfter(Macad::Occt::TShort_HSequenceOfShortReal::Iterator^ thePosition, float theItem);
    void Split(int theIndex, Macad::Occt::TShort_HSequenceOfShortReal^ theSeq);
    float First();
    float Last();
    virtual float Value(int theIndex);
    float ChangeValue(int theIndex);
    void SetValue(int theIndex, float theItem);
    static Macad::Occt::TShort_HSequenceOfShortReal^ CreateDowncasted(::TShort_HSequenceOfShortReal* instance);
    virtual System::Collections::Generic::IEnumerator<float>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class TShort_HSequenceOfShortReal

}; // namespace Occt
}; // namespace Macad
