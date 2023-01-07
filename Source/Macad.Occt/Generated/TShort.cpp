// Generated wrapper code for package TShort

#include "OcctPCH.h"
#include "TShort.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"


//---------------------------------------------------------------------
//  Class  TShort_Array1OfShortReal
//---------------------------------------------------------------------

Macad::Occt::TShort_Array1OfShortReal::TShort_Array1OfShortReal()
    : Macad::Occt::BaseClass<::TShort_Array1OfShortReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_Array1OfShortReal();
}

Macad::Occt::TShort_Array1OfShortReal::TShort_Array1OfShortReal(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TShort_Array1OfShortReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_Array1OfShortReal(theLower, theUpper);
}

Macad::Occt::TShort_Array1OfShortReal::TShort_Array1OfShortReal(Macad::Occt::TShort_Array1OfShortReal^ theOther)
    : Macad::Occt::BaseClass<::TShort_Array1OfShortReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_Array1OfShortReal(*(::TShort_Array1OfShortReal*)theOther->NativeInstance);
}

Macad::Occt::TShort_Array1OfShortReal::TShort_Array1OfShortReal(float theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TShort_Array1OfShortReal>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<float> pp_theBegin = &theBegin;
    _NativeInstance = new ::TShort_Array1OfShortReal(*(float*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TShort_Array1OfShortReal::Init(float theValue)
{
    pin_ptr<float> pp_theValue = &theValue;
    ((::TShort_Array1OfShortReal*)_NativeInstance)->Init(*(float*)pp_theValue);
}

int Macad::Occt::TShort_Array1OfShortReal::Size()
{
    int _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TShort_Array1OfShortReal::Length()
{
    int _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TShort_Array1OfShortReal::IsEmpty()
{
    bool _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TShort_Array1OfShortReal::Lower()
{
    int _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TShort_Array1OfShortReal::Upper()
{
    int _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TShort_Array1OfShortReal::IsDeletable()
{
    bool _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->IsDeletable();
    return _result;
}

bool Macad::Occt::TShort_Array1OfShortReal::IsAllocated()
{
    bool _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->IsAllocated();
    return _result;
}

Macad::Occt::TShort_Array1OfShortReal^ Macad::Occt::TShort_Array1OfShortReal::Assign(Macad::Occt::TShort_Array1OfShortReal^ theOther)
{
    ::TShort_Array1OfShortReal* _result = new ::TShort_Array1OfShortReal();
    *_result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Assign(*(::TShort_Array1OfShortReal*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_Array1OfShortReal(_result);
}

Macad::Occt::TShort_Array1OfShortReal^ Macad::Occt::TShort_Array1OfShortReal::Move(Macad::Occt::TShort_Array1OfShortReal^ theOther)
{
    ::TShort_Array1OfShortReal* _result = new ::TShort_Array1OfShortReal();
    *_result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Move(*(::TShort_Array1OfShortReal*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_Array1OfShortReal(_result);
}

float Macad::Occt::TShort_Array1OfShortReal::First()
{
    float _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->First();
    return _result;
}

float Macad::Occt::TShort_Array1OfShortReal::Last()
{
    float _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Last();
    return _result;
}

float Macad::Occt::TShort_Array1OfShortReal::Value(int theIndex)
{
    float _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->Value(theIndex);
    return _result;
}

float Macad::Occt::TShort_Array1OfShortReal::ChangeValue(int theIndex)
{
    float _result = ((::TShort_Array1OfShortReal*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TShort_Array1OfShortReal::SetValue(int theIndex, float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_Array1OfShortReal*)_NativeInstance)->SetValue(theIndex, *(float*)pp_theItem);
}

void Macad::Occt::TShort_Array1OfShortReal::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TShort_Array1OfShortReal*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

System::Collections::Generic::IEnumerator<float>^ Macad::Occt::TShort_Array1OfShortReal::GetEnumerator()
{
    return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TShort_Array1OfShortReal::GetEnumerator2()
{
    return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TShort_Array1OfShortReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::TShort_Array1OfShortReal::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TShort_Array1OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_Array1OfShortReal::Iterator();
}

Macad::Occt::TShort_Array1OfShortReal::Iterator::Iterator(Macad::Occt::TShort_Array1OfShortReal^ theArray, bool theToEnd)
    : Macad::Occt::BaseClass<::TShort_Array1OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_Array1OfShortReal::Iterator(*(::TShort_Array1OfShortReal*)theArray->NativeInstance, theToEnd);
}

Macad::Occt::TShort_Array1OfShortReal::Iterator::Iterator(Macad::Occt::TShort_Array1OfShortReal^ theArray)
    : Macad::Occt::BaseClass<::TShort_Array1OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_Array1OfShortReal::Iterator(*(::TShort_Array1OfShortReal*)theArray->NativeInstance, false);
}

Macad::Occt::TShort_Array1OfShortReal::Iterator::Iterator(Macad::Occt::TShort_Array1OfShortReal::Iterator^ parameter1)
    : Macad::Occt::BaseClass<::TShort_Array1OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_Array1OfShortReal::Iterator(*(::TShort_Array1OfShortReal::Iterator*)parameter1->NativeInstance);
}

void Macad::Occt::TShort_Array1OfShortReal::Iterator::Init(Macad::Occt::TShort_Array1OfShortReal^ theArray)
{
    ((::TShort_Array1OfShortReal::Iterator*)_NativeInstance)->Init(*(::TShort_Array1OfShortReal*)theArray->NativeInstance);
}

bool Macad::Occt::TShort_Array1OfShortReal::Iterator::More()
{
    bool _result = ((::TShort_Array1OfShortReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TShort_Array1OfShortReal::Iterator::Next()
{
    ((::TShort_Array1OfShortReal::Iterator*)_NativeInstance)->Next();
}

void Macad::Occt::TShort_Array1OfShortReal::Iterator::Previous()
{
    ((::TShort_Array1OfShortReal::Iterator*)_NativeInstance)->Previous();
}

void Macad::Occt::TShort_Array1OfShortReal::Iterator::Offset(long long int theOffset)
{
    ((::TShort_Array1OfShortReal::Iterator*)_NativeInstance)->Offset(theOffset);
}

long long int Macad::Occt::TShort_Array1OfShortReal::Iterator::Differ(Macad::Occt::TShort_Array1OfShortReal::Iterator^ theOther)
{
    long long int _result = ((::TShort_Array1OfShortReal::Iterator*)_NativeInstance)->Differ(*(::TShort_Array1OfShortReal::Iterator*)theOther->NativeInstance);
    return _result;
}

float Macad::Occt::TShort_Array1OfShortReal::Iterator::Value()
{
    float _result = ((::TShort_Array1OfShortReal::Iterator*)_NativeInstance)->Value();
    return _result;
}

bool Macad::Occt::TShort_Array1OfShortReal::Iterator::IsEqual(Macad::Occt::TShort_Array1OfShortReal::Iterator^ theOther)
{
    bool _result = ((::TShort_Array1OfShortReal::Iterator*)_NativeInstance)->IsEqual(*(::TShort_Array1OfShortReal::Iterator*)theOther->NativeInstance);
    return _result;
}



//---------------------------------------------------------------------
//  Class  TShort_Array2OfShortReal
//---------------------------------------------------------------------

Macad::Occt::TShort_Array2OfShortReal::TShort_Array2OfShortReal()
    : Macad::Occt::BaseClass<::TShort_Array2OfShortReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_Array2OfShortReal();
}

Macad::Occt::TShort_Array2OfShortReal::TShort_Array2OfShortReal(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TShort_Array2OfShortReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_Array2OfShortReal(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TShort_Array2OfShortReal::TShort_Array2OfShortReal(Macad::Occt::TShort_Array2OfShortReal^ theOther)
    : Macad::Occt::BaseClass<::TShort_Array2OfShortReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_Array2OfShortReal(*(::TShort_Array2OfShortReal*)theOther->NativeInstance);
}

Macad::Occt::TShort_Array2OfShortReal::TShort_Array2OfShortReal(float theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TShort_Array2OfShortReal>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<float> pp_theBegin = &theBegin;
    _NativeInstance = new ::TShort_Array2OfShortReal(*(float*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TShort_Array2OfShortReal::Init(float theValue)
{
    pin_ptr<float> pp_theValue = &theValue;
    ((::TShort_Array2OfShortReal*)_NativeInstance)->Init(*(float*)pp_theValue);
}

int Macad::Occt::TShort_Array2OfShortReal::Size()
{
    int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TShort_Array2OfShortReal::Length()
{
    int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TShort_Array2OfShortReal::NbRows()
{
    int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TShort_Array2OfShortReal::NbColumns()
{
    int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TShort_Array2OfShortReal::RowLength()
{
    int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TShort_Array2OfShortReal::ColLength()
{
    int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TShort_Array2OfShortReal::LowerRow()
{
    int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TShort_Array2OfShortReal::UpperRow()
{
    int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TShort_Array2OfShortReal::LowerCol()
{
    int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TShort_Array2OfShortReal::UpperCol()
{
    int _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->UpperCol();
    return _result;
}

bool Macad::Occt::TShort_Array2OfShortReal::IsDeletable()
{
    bool _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TShort_Array2OfShortReal^ Macad::Occt::TShort_Array2OfShortReal::Assign(Macad::Occt::TShort_Array2OfShortReal^ theOther)
{
    ::TShort_Array2OfShortReal* _result = new ::TShort_Array2OfShortReal();
    *_result = ((::TShort_Array2OfShortReal*)_NativeInstance)->Assign(*(::TShort_Array2OfShortReal*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_Array2OfShortReal(_result);
}

Macad::Occt::TShort_Array2OfShortReal^ Macad::Occt::TShort_Array2OfShortReal::Move(Macad::Occt::TShort_Array2OfShortReal^ theOther)
{
    ::TShort_Array2OfShortReal* _result = new ::TShort_Array2OfShortReal();
    *_result = ((::TShort_Array2OfShortReal*)_NativeInstance)->Move(*(::TShort_Array2OfShortReal*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_Array2OfShortReal(_result);
}

float Macad::Occt::TShort_Array2OfShortReal::Value(int theRow, int theCol)
{
    float _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

float Macad::Occt::TShort_Array2OfShortReal::ChangeValue(int theRow, int theCol)
{
    float _result = ((::TShort_Array2OfShortReal*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result;
}

void Macad::Occt::TShort_Array2OfShortReal::SetValue(int theRow, int theCol, float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_Array2OfShortReal*)_NativeInstance)->SetValue(theRow, theCol, *(float*)pp_theItem);
}

void Macad::Occt::TShort_Array2OfShortReal::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TShort_Array2OfShortReal*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

System::Collections::Generic::IEnumerator<float>^ Macad::Occt::TShort_Array2OfShortReal::GetEnumerator()
{
    return gcnew Macad::Occt::TShort_Array2OfShortReal::Iterator(this);
}

System::Collections::IEnumerator^ Macad::Occt::TShort_Array2OfShortReal::GetEnumerator2()
{
    return gcnew Macad::Occt::TShort_Array2OfShortReal::Iterator(this);
}



//---------------------------------------------------------------------
//  Class  TShort_Array2OfShortReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::TShort_Array2OfShortReal::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<float, ::TShort_Array2OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_Array2OfShortReal::Iterator();
}

Macad::Occt::TShort_Array2OfShortReal::Iterator::Iterator(Macad::Occt::TShort_Array2OfShortReal^ theArray)
    : Macad::Occt::IteratorEnumerator<float, ::TShort_Array2OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_Array2OfShortReal::Iterator(*(::TShort_Array2OfShortReal*)theArray->NativeInstance);
}

Macad::Occt::TShort_Array2OfShortReal::Iterator::Iterator(Macad::Occt::TShort_Array2OfShortReal::Iterator^ parameter1)
    : Macad::Occt::IteratorEnumerator<float, ::TShort_Array2OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_Array2OfShortReal::Iterator(*(::TShort_Array2OfShortReal::Iterator*)parameter1->NativeInstance);
}

void Macad::Occt::TShort_Array2OfShortReal::Iterator::Init(Macad::Occt::TShort_Array2OfShortReal^ theArray)
{
    ((::TShort_Array2OfShortReal::Iterator*)_NativeInstance)->Init(*(::TShort_Array2OfShortReal*)theArray->NativeInstance);
}

bool Macad::Occt::TShort_Array2OfShortReal::Iterator::More()
{
    bool _result = ((::TShort_Array2OfShortReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TShort_Array2OfShortReal::Iterator::Next()
{
    ((::TShort_Array2OfShortReal::Iterator*)_NativeInstance)->Next();
}

float Macad::Occt::TShort_Array2OfShortReal::Iterator::Value()
{
    float _result = ((::TShort_Array2OfShortReal::Iterator*)_NativeInstance)->Value();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TShort_SequenceOfShortReal
//---------------------------------------------------------------------

Macad::Occt::TShort_SequenceOfShortReal::TShort_SequenceOfShortReal()
    : Macad::Occt::BaseClass<::TShort_SequenceOfShortReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_SequenceOfShortReal();
}

Macad::Occt::TShort_SequenceOfShortReal::TShort_SequenceOfShortReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TShort_SequenceOfShortReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_SequenceOfShortReal(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TShort_SequenceOfShortReal::TShort_SequenceOfShortReal(Macad::Occt::TShort_SequenceOfShortReal^ theOther)
    : Macad::Occt::BaseClass<::TShort_SequenceOfShortReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_SequenceOfShortReal(*(::TShort_SequenceOfShortReal*)theOther->NativeInstance);
}

int Macad::Occt::TShort_SequenceOfShortReal::Size()
{
    int _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TShort_SequenceOfShortReal::Length()
{
    int _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TShort_SequenceOfShortReal::Lower()
{
    int _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TShort_SequenceOfShortReal::Upper()
{
    int _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TShort_SequenceOfShortReal::IsEmpty()
{
    bool _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::TShort_SequenceOfShortReal::Reverse()
{
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->Reverse();
}

void Macad::Occt::TShort_SequenceOfShortReal::Exchange(int I, int J)
{
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TShort_SequenceOfShortReal::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TShort_SequenceOfShortReal::Clear()
{
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TShort_SequenceOfShortReal^ Macad::Occt::TShort_SequenceOfShortReal::Assign(Macad::Occt::TShort_SequenceOfShortReal^ theOther)
{
    ::TShort_SequenceOfShortReal* _result = new ::TShort_SequenceOfShortReal();
    *_result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Assign(*(::TShort_SequenceOfShortReal*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_SequenceOfShortReal(_result);
}

void Macad::Occt::TShort_SequenceOfShortReal::Remove(Macad::Occt::TShort_SequenceOfShortReal::Iterator^ thePosition)
{
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->Remove(*(::TShort_SequenceOfShortReal::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TShort_SequenceOfShortReal::Remove(int theIndex)
{
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TShort_SequenceOfShortReal::Remove(int theFromIndex, int theToIndex)
{
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TShort_SequenceOfShortReal::Append(float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->Append(*(float*)pp_theItem);
}

void Macad::Occt::TShort_SequenceOfShortReal::Append(Macad::Occt::TShort_SequenceOfShortReal^ theSeq)
{
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->Append(*(::TShort_SequenceOfShortReal*)theSeq->NativeInstance);
}

void Macad::Occt::TShort_SequenceOfShortReal::Prepend(float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->Prepend(*(float*)pp_theItem);
}

void Macad::Occt::TShort_SequenceOfShortReal::Prepend(Macad::Occt::TShort_SequenceOfShortReal^ theSeq)
{
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->Prepend(*(::TShort_SequenceOfShortReal*)theSeq->NativeInstance);
}

void Macad::Occt::TShort_SequenceOfShortReal::InsertBefore(int theIndex, float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->InsertBefore(theIndex, *(float*)pp_theItem);
}

void Macad::Occt::TShort_SequenceOfShortReal::InsertBefore(int theIndex, Macad::Occt::TShort_SequenceOfShortReal^ theSeq)
{
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->InsertBefore(theIndex, *(::TShort_SequenceOfShortReal*)theSeq->NativeInstance);
}

void Macad::Occt::TShort_SequenceOfShortReal::InsertAfter(Macad::Occt::TShort_SequenceOfShortReal::Iterator^ thePosition, float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->InsertAfter(*(::TShort_SequenceOfShortReal::Iterator*)thePosition->NativeInstance, *(float*)pp_theItem);
}

void Macad::Occt::TShort_SequenceOfShortReal::InsertAfter(int theIndex, Macad::Occt::TShort_SequenceOfShortReal^ theSeq)
{
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->InsertAfter(theIndex, *(::TShort_SequenceOfShortReal*)theSeq->NativeInstance);
}

void Macad::Occt::TShort_SequenceOfShortReal::InsertAfter(int theIndex, float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->InsertAfter(theIndex, *(float*)pp_theItem);
}

void Macad::Occt::TShort_SequenceOfShortReal::Split(int theIndex, Macad::Occt::TShort_SequenceOfShortReal^ theSeq)
{
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->Split(theIndex, *(::TShort_SequenceOfShortReal*)theSeq->NativeInstance);
}

float Macad::Occt::TShort_SequenceOfShortReal::First()
{
    float _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->First();
    return _result;
}

float Macad::Occt::TShort_SequenceOfShortReal::Last()
{
    float _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Last();
    return _result;
}

float Macad::Occt::TShort_SequenceOfShortReal::Value(int theIndex)
{
    float _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->Value(theIndex);
    return _result;
}

float Macad::Occt::TShort_SequenceOfShortReal::ChangeValue(int theIndex)
{
    float _result = ((::TShort_SequenceOfShortReal*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TShort_SequenceOfShortReal::SetValue(int theIndex, float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_SequenceOfShortReal*)_NativeInstance)->SetValue(theIndex, *(float*)pp_theItem);
}

System::Collections::Generic::IEnumerator<float>^ Macad::Occt::TShort_SequenceOfShortReal::GetEnumerator()
{
    return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TShort_SequenceOfShortReal::GetEnumerator2()
{
    return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TShort_SequenceOfShortReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::TShort_SequenceOfShortReal::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TShort_SequenceOfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_SequenceOfShortReal::Iterator();
}

Macad::Occt::TShort_SequenceOfShortReal::Iterator::Iterator(Macad::Occt::TShort_SequenceOfShortReal^ theSeq, bool isStart)
    : Macad::Occt::BaseClass<::TShort_SequenceOfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_SequenceOfShortReal::Iterator(*(::TShort_SequenceOfShortReal*)theSeq->NativeInstance, isStart);
}

Macad::Occt::TShort_SequenceOfShortReal::Iterator::Iterator(Macad::Occt::TShort_SequenceOfShortReal^ theSeq)
    : Macad::Occt::BaseClass<::TShort_SequenceOfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_SequenceOfShortReal::Iterator(*(::TShort_SequenceOfShortReal*)theSeq->NativeInstance, true);
}

Macad::Occt::TShort_SequenceOfShortReal::Iterator::Iterator(Macad::Occt::TShort_SequenceOfShortReal::Iterator^ parameter1)
    : Macad::Occt::BaseClass<::TShort_SequenceOfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_SequenceOfShortReal::Iterator(*(::TShort_SequenceOfShortReal::Iterator*)parameter1->NativeInstance);
}

bool Macad::Occt::TShort_SequenceOfShortReal::Iterator::More()
{
    bool _result = ((::TShort_SequenceOfShortReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TShort_SequenceOfShortReal::Iterator::Next()
{
    ((::TShort_SequenceOfShortReal::Iterator*)_NativeInstance)->Next();
}

float Macad::Occt::TShort_SequenceOfShortReal::Iterator::Value()
{
    float _result = ((::TShort_SequenceOfShortReal::Iterator*)_NativeInstance)->Value();
    return _result;
}

bool Macad::Occt::TShort_SequenceOfShortReal::Iterator::IsEqual(Macad::Occt::TShort_SequenceOfShortReal::Iterator^ theOther)
{
    bool _result = ((::TShort_SequenceOfShortReal::Iterator*)_NativeInstance)->IsEqual(*(::TShort_SequenceOfShortReal::Iterator*)theOther->NativeInstance);
    return _result;
}



//---------------------------------------------------------------------
//  Class  TShort_HArray1OfShortReal
//---------------------------------------------------------------------

Macad::Occt::TShort_HArray1OfShortReal::TShort_HArray1OfShortReal()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TShort_HArray1OfShortReal();
}

Macad::Occt::TShort_HArray1OfShortReal::TShort_HArray1OfShortReal(int theLower, int theUpper)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TShort_HArray1OfShortReal(theLower, theUpper);
}

Macad::Occt::TShort_HArray1OfShortReal::TShort_HArray1OfShortReal(int theLower, int theUpper, float theValue)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<float> pp_theValue = &theValue;
    NativeInstance = new ::TShort_HArray1OfShortReal(theLower, theUpper, *(float*)pp_theValue);
}

Macad::Occt::TShort_HArray1OfShortReal::TShort_HArray1OfShortReal(Macad::Occt::TShort_Array1OfShortReal^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TShort_HArray1OfShortReal(*(::TShort_Array1OfShortReal*)theOther->NativeInstance);
}

Macad::Occt::TShort_HArray1OfShortReal::TShort_HArray1OfShortReal(Macad::Occt::TShort_HArray1OfShortReal^ parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TShort_HArray1OfShortReal(*(::TShort_HArray1OfShortReal*)parameter1->NativeInstance);
}

Macad::Occt::TShort_Array1OfShortReal^ Macad::Occt::TShort_HArray1OfShortReal::Array1()
{
    ::TShort_Array1OfShortReal* _result = new ::TShort_Array1OfShortReal();
    *_result = (::TShort_Array1OfShortReal)((::TShort_HArray1OfShortReal*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_Array1OfShortReal(_result);
}

Macad::Occt::TShort_Array1OfShortReal^ Macad::Occt::TShort_HArray1OfShortReal::ChangeArray1()
{
    ::TShort_Array1OfShortReal* _result = new ::TShort_Array1OfShortReal();
    *_result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_Array1OfShortReal(_result);
}

void Macad::Occt::TShort_HArray1OfShortReal::Init(float theValue)
{
    pin_ptr<float> pp_theValue = &theValue;
    ((::TShort_HArray1OfShortReal*)_NativeInstance)->Init(*(float*)pp_theValue);
}

int Macad::Occt::TShort_HArray1OfShortReal::Size()
{
    int _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TShort_HArray1OfShortReal::Length()
{
    int _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TShort_HArray1OfShortReal::IsEmpty()
{
    bool _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TShort_HArray1OfShortReal::Lower()
{
    int _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TShort_HArray1OfShortReal::Upper()
{
    int _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TShort_HArray1OfShortReal::IsDeletable()
{
    bool _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->IsDeletable();
    return _result;
}

bool Macad::Occt::TShort_HArray1OfShortReal::IsAllocated()
{
    bool _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->IsAllocated();
    return _result;
}

Macad::Occt::TShort_HArray1OfShortReal^ Macad::Occt::TShort_HArray1OfShortReal::Assign(Macad::Occt::TShort_HArray1OfShortReal^ theOther)
{
    ::TShort_HArray1OfShortReal* _result = new ::TShort_HArray1OfShortReal();
    *_result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Assign(*(::TShort_HArray1OfShortReal*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_HArray1OfShortReal(_result);
}

Macad::Occt::TShort_HArray1OfShortReal^ Macad::Occt::TShort_HArray1OfShortReal::Move(Macad::Occt::TShort_HArray1OfShortReal^ theOther)
{
    ::TShort_HArray1OfShortReal* _result = new ::TShort_HArray1OfShortReal();
    *_result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Move(*(::TShort_HArray1OfShortReal*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_HArray1OfShortReal(_result);
}

float Macad::Occt::TShort_HArray1OfShortReal::First()
{
    float _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->First();
    return _result;
}

float Macad::Occt::TShort_HArray1OfShortReal::Last()
{
    float _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Last();
    return _result;
}

float Macad::Occt::TShort_HArray1OfShortReal::Value(int theIndex)
{
    float _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->Value(theIndex);
    return _result;
}

float Macad::Occt::TShort_HArray1OfShortReal::ChangeValue(int theIndex)
{
    float _result = ((::TShort_HArray1OfShortReal*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TShort_HArray1OfShortReal::SetValue(int theIndex, float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_HArray1OfShortReal*)_NativeInstance)->SetValue(theIndex, *(float*)pp_theItem);
}

void Macad::Occt::TShort_HArray1OfShortReal::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TShort_HArray1OfShortReal*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

Macad::Occt::TShort_HArray1OfShortReal^ Macad::Occt::TShort_HArray1OfShortReal::CreateDowncasted(::TShort_HArray1OfShortReal* instance)
{
    return gcnew Macad::Occt::TShort_HArray1OfShortReal( instance );
}

System::Collections::Generic::IEnumerator<float>^ Macad::Occt::TShort_HArray1OfShortReal::GetEnumerator()
{
    return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TShort_HArray1OfShortReal::GetEnumerator2()
{
    return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TShort_HArray1OfShortReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::TShort_HArray1OfShortReal::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TShort_HArray1OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_HArray1OfShortReal::Iterator();
}

Macad::Occt::TShort_HArray1OfShortReal::Iterator::Iterator(Macad::Occt::TShort_HArray1OfShortReal^ theArray, bool theToEnd)
    : Macad::Occt::BaseClass<::TShort_HArray1OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_HArray1OfShortReal::Iterator(*(::TShort_HArray1OfShortReal*)theArray->NativeInstance, theToEnd);
}

Macad::Occt::TShort_HArray1OfShortReal::Iterator::Iterator(Macad::Occt::TShort_HArray1OfShortReal^ theArray)
    : Macad::Occt::BaseClass<::TShort_HArray1OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_HArray1OfShortReal::Iterator(*(::TShort_HArray1OfShortReal*)theArray->NativeInstance, false);
}

Macad::Occt::TShort_HArray1OfShortReal::Iterator::Iterator(Macad::Occt::TShort_HArray1OfShortReal::Iterator^ parameter1)
    : Macad::Occt::BaseClass<::TShort_HArray1OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_HArray1OfShortReal::Iterator(*(::TShort_HArray1OfShortReal::Iterator*)parameter1->NativeInstance);
}

void Macad::Occt::TShort_HArray1OfShortReal::Iterator::Init(Macad::Occt::TShort_HArray1OfShortReal^ theArray)
{
    ((::TShort_HArray1OfShortReal::Iterator*)_NativeInstance)->Init(*(::TShort_HArray1OfShortReal*)theArray->NativeInstance);
}

bool Macad::Occt::TShort_HArray1OfShortReal::Iterator::More()
{
    bool _result = ((::TShort_HArray1OfShortReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TShort_HArray1OfShortReal::Iterator::Next()
{
    ((::TShort_HArray1OfShortReal::Iterator*)_NativeInstance)->Next();
}

void Macad::Occt::TShort_HArray1OfShortReal::Iterator::Previous()
{
    ((::TShort_HArray1OfShortReal::Iterator*)_NativeInstance)->Previous();
}

void Macad::Occt::TShort_HArray1OfShortReal::Iterator::Offset(long long int theOffset)
{
    ((::TShort_HArray1OfShortReal::Iterator*)_NativeInstance)->Offset(theOffset);
}

long long int Macad::Occt::TShort_HArray1OfShortReal::Iterator::Differ(Macad::Occt::TShort_HArray1OfShortReal::Iterator^ theOther)
{
    long long int _result = ((::TShort_HArray1OfShortReal::Iterator*)_NativeInstance)->Differ(*(::TShort_HArray1OfShortReal::Iterator*)theOther->NativeInstance);
    return _result;
}

float Macad::Occt::TShort_HArray1OfShortReal::Iterator::Value()
{
    float _result = ((::TShort_HArray1OfShortReal::Iterator*)_NativeInstance)->Value();
    return _result;
}

bool Macad::Occt::TShort_HArray1OfShortReal::Iterator::IsEqual(Macad::Occt::TShort_HArray1OfShortReal::Iterator^ theOther)
{
    bool _result = ((::TShort_HArray1OfShortReal::Iterator*)_NativeInstance)->IsEqual(*(::TShort_HArray1OfShortReal::Iterator*)theOther->NativeInstance);
    return _result;
}



//---------------------------------------------------------------------
//  Class  TShort_HArray2OfShortReal
//---------------------------------------------------------------------

Macad::Occt::TShort_HArray2OfShortReal::TShort_HArray2OfShortReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TShort_HArray2OfShortReal(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TShort_HArray2OfShortReal::TShort_HArray2OfShortReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp, float theValue)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<float> pp_theValue = &theValue;
    NativeInstance = new ::TShort_HArray2OfShortReal(theRowLow, theRowUpp, theColLow, theColUpp, *(float*)pp_theValue);
}

Macad::Occt::TShort_HArray2OfShortReal::TShort_HArray2OfShortReal(Macad::Occt::TShort_Array2OfShortReal^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TShort_HArray2OfShortReal(*(::TShort_Array2OfShortReal*)theOther->NativeInstance);
}

Macad::Occt::TShort_HArray2OfShortReal::TShort_HArray2OfShortReal(Macad::Occt::TShort_HArray2OfShortReal^ parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TShort_HArray2OfShortReal(*(::TShort_HArray2OfShortReal*)parameter1->NativeInstance);
}

Macad::Occt::TShort_Array2OfShortReal^ Macad::Occt::TShort_HArray2OfShortReal::Array2()
{
    ::TShort_Array2OfShortReal* _result = new ::TShort_Array2OfShortReal();
    *_result = (::TShort_Array2OfShortReal)((::TShort_HArray2OfShortReal*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_Array2OfShortReal(_result);
}

Macad::Occt::TShort_Array2OfShortReal^ Macad::Occt::TShort_HArray2OfShortReal::ChangeArray2()
{
    ::TShort_Array2OfShortReal* _result = new ::TShort_Array2OfShortReal();
    *_result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_Array2OfShortReal(_result);
}

void Macad::Occt::TShort_HArray2OfShortReal::Init(float theValue)
{
    pin_ptr<float> pp_theValue = &theValue;
    ((::TShort_HArray2OfShortReal*)_NativeInstance)->Init(*(float*)pp_theValue);
}

int Macad::Occt::TShort_HArray2OfShortReal::Size()
{
    int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TShort_HArray2OfShortReal::Length()
{
    int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TShort_HArray2OfShortReal::NbRows()
{
    int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TShort_HArray2OfShortReal::NbColumns()
{
    int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TShort_HArray2OfShortReal::RowLength()
{
    int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TShort_HArray2OfShortReal::ColLength()
{
    int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TShort_HArray2OfShortReal::LowerRow()
{
    int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TShort_HArray2OfShortReal::UpperRow()
{
    int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TShort_HArray2OfShortReal::LowerCol()
{
    int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TShort_HArray2OfShortReal::UpperCol()
{
    int _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->UpperCol();
    return _result;
}

bool Macad::Occt::TShort_HArray2OfShortReal::IsDeletable()
{
    bool _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TShort_HArray2OfShortReal^ Macad::Occt::TShort_HArray2OfShortReal::Assign(Macad::Occt::TShort_HArray2OfShortReal^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TShort_HArray2OfShortReal^ Macad::Occt::TShort_HArray2OfShortReal::Move(Macad::Occt::TShort_HArray2OfShortReal^ theOther)
{
    throw gcnew System::NotImplementedException();
}

float Macad::Occt::TShort_HArray2OfShortReal::Value(int theRow, int theCol)
{
    float _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

float Macad::Occt::TShort_HArray2OfShortReal::ChangeValue(int theRow, int theCol)
{
    float _result = ((::TShort_HArray2OfShortReal*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result;
}

void Macad::Occt::TShort_HArray2OfShortReal::SetValue(int theRow, int theCol, float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_HArray2OfShortReal*)_NativeInstance)->SetValue(theRow, theCol, *(float*)pp_theItem);
}

void Macad::Occt::TShort_HArray2OfShortReal::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TShort_HArray2OfShortReal*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

Macad::Occt::TShort_HArray2OfShortReal^ Macad::Occt::TShort_HArray2OfShortReal::CreateDowncasted(::TShort_HArray2OfShortReal* instance)
{
    return gcnew Macad::Occt::TShort_HArray2OfShortReal( instance );
}

System::Collections::Generic::IEnumerator<float>^ Macad::Occt::TShort_HArray2OfShortReal::GetEnumerator()
{
    return gcnew Macad::Occt::TShort_HArray2OfShortReal::Iterator(this);
}

System::Collections::IEnumerator^ Macad::Occt::TShort_HArray2OfShortReal::GetEnumerator2()
{
    return gcnew Macad::Occt::TShort_HArray2OfShortReal::Iterator(this);
}



//---------------------------------------------------------------------
//  Class  TShort_HArray2OfShortReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::TShort_HArray2OfShortReal::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<float, ::TShort_HArray2OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_HArray2OfShortReal::Iterator();
}

Macad::Occt::TShort_HArray2OfShortReal::Iterator::Iterator(Macad::Occt::TShort_HArray2OfShortReal^ theArray)
    : Macad::Occt::IteratorEnumerator<float, ::TShort_HArray2OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_HArray2OfShortReal::Iterator(*(::TShort_HArray2OfShortReal*)theArray->NativeInstance);
}

Macad::Occt::TShort_HArray2OfShortReal::Iterator::Iterator(Macad::Occt::TShort_HArray2OfShortReal::Iterator^ parameter1)
    : Macad::Occt::IteratorEnumerator<float, ::TShort_HArray2OfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_HArray2OfShortReal::Iterator(*(::TShort_HArray2OfShortReal::Iterator*)parameter1->NativeInstance);
}

void Macad::Occt::TShort_HArray2OfShortReal::Iterator::Init(Macad::Occt::TShort_HArray2OfShortReal^ theArray)
{
    ((::TShort_HArray2OfShortReal::Iterator*)_NativeInstance)->Init(*(::TShort_HArray2OfShortReal*)theArray->NativeInstance);
}

bool Macad::Occt::TShort_HArray2OfShortReal::Iterator::More()
{
    bool _result = ((::TShort_HArray2OfShortReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TShort_HArray2OfShortReal::Iterator::Next()
{
    ((::TShort_HArray2OfShortReal::Iterator*)_NativeInstance)->Next();
}

float Macad::Occt::TShort_HArray2OfShortReal::Iterator::Value()
{
    float _result = ((::TShort_HArray2OfShortReal::Iterator*)_NativeInstance)->Value();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TShort_HSequenceOfShortReal
//---------------------------------------------------------------------

Macad::Occt::TShort_HSequenceOfShortReal::TShort_HSequenceOfShortReal()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TShort_HSequenceOfShortReal();
}

Macad::Occt::TShort_HSequenceOfShortReal::TShort_HSequenceOfShortReal(Macad::Occt::TShort_SequenceOfShortReal^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TShort_HSequenceOfShortReal(*(::TShort_SequenceOfShortReal*)theOther->NativeInstance);
}

Macad::Occt::TShort_HSequenceOfShortReal::TShort_HSequenceOfShortReal(Macad::Occt::TShort_HSequenceOfShortReal^ parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TShort_HSequenceOfShortReal(*(::TShort_HSequenceOfShortReal*)parameter1->NativeInstance);
}

Macad::Occt::TShort_SequenceOfShortReal^ Macad::Occt::TShort_HSequenceOfShortReal::Sequence()
{
    ::TShort_SequenceOfShortReal* _result = new ::TShort_SequenceOfShortReal();
    *_result = (::TShort_SequenceOfShortReal)((::TShort_HSequenceOfShortReal*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_SequenceOfShortReal(_result);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Append(Macad::Occt::TShort_SequenceOfShortReal^ theSequence)
{
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Append(*(::TShort_SequenceOfShortReal*)theSequence->NativeInstance);
}

Macad::Occt::TShort_SequenceOfShortReal^ Macad::Occt::TShort_HSequenceOfShortReal::ChangeSequence()
{
    ::TShort_SequenceOfShortReal* _result = new ::TShort_SequenceOfShortReal();
    *_result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->ChangeSequence();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_SequenceOfShortReal(_result);
}

int Macad::Occt::TShort_HSequenceOfShortReal::Size()
{
    int _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TShort_HSequenceOfShortReal::Length()
{
    int _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TShort_HSequenceOfShortReal::Lower()
{
    int _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TShort_HSequenceOfShortReal::Upper()
{
    int _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TShort_HSequenceOfShortReal::IsEmpty()
{
    bool _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::TShort_HSequenceOfShortReal::Reverse()
{
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Reverse();
}

void Macad::Occt::TShort_HSequenceOfShortReal::Exchange(int I, int J)
{
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TShort_HSequenceOfShortReal::Clear()
{
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TShort_HSequenceOfShortReal^ Macad::Occt::TShort_HSequenceOfShortReal::Assign(Macad::Occt::TShort_HSequenceOfShortReal^ theOther)
{
    ::TShort_HSequenceOfShortReal* _result = new ::TShort_HSequenceOfShortReal();
    *_result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Assign(*(::TShort_HSequenceOfShortReal*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_HSequenceOfShortReal(_result);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Remove(Macad::Occt::TShort_HSequenceOfShortReal::Iterator^ thePosition)
{
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Remove(*(::TShort_HSequenceOfShortReal::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Remove(int theIndex)
{
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Remove(int theFromIndex, int theToIndex)
{
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Append(float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Append(*(float*)pp_theItem);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Append(Macad::Occt::TShort_HSequenceOfShortReal^ theSeq)
{
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Append(*(::TShort_HSequenceOfShortReal*)theSeq->NativeInstance);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Prepend(float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Prepend(*(float*)pp_theItem);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Prepend(Macad::Occt::TShort_HSequenceOfShortReal^ theSeq)
{
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Prepend(*(::TShort_HSequenceOfShortReal*)theSeq->NativeInstance);
}

void Macad::Occt::TShort_HSequenceOfShortReal::InsertBefore(int theIndex, float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->InsertBefore(theIndex, *(float*)pp_theItem);
}

void Macad::Occt::TShort_HSequenceOfShortReal::InsertBefore(int theIndex, Macad::Occt::TShort_HSequenceOfShortReal^ theSeq)
{
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->InsertBefore(theIndex, *(::TShort_HSequenceOfShortReal*)theSeq->NativeInstance);
}

void Macad::Occt::TShort_HSequenceOfShortReal::InsertAfter(Macad::Occt::TShort_HSequenceOfShortReal::Iterator^ thePosition, float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->InsertAfter(*(::TShort_HSequenceOfShortReal::Iterator*)thePosition->NativeInstance, *(float*)pp_theItem);
}

void Macad::Occt::TShort_HSequenceOfShortReal::InsertAfter(int theIndex, Macad::Occt::TShort_HSequenceOfShortReal^ theSeq)
{
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->InsertAfter(theIndex, *(::TShort_HSequenceOfShortReal*)theSeq->NativeInstance);
}

void Macad::Occt::TShort_HSequenceOfShortReal::InsertAfter(int theIndex, float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->InsertAfter(theIndex, *(float*)pp_theItem);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Split(int theIndex, Macad::Occt::TShort_HSequenceOfShortReal^ theSeq)
{
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Split(theIndex, *(::TShort_HSequenceOfShortReal*)theSeq->NativeInstance);
}

float Macad::Occt::TShort_HSequenceOfShortReal::First()
{
    float _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->First();
    return _result;
}

float Macad::Occt::TShort_HSequenceOfShortReal::Last()
{
    float _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Last();
    return _result;
}

float Macad::Occt::TShort_HSequenceOfShortReal::Value(int theIndex)
{
    float _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Value(theIndex);
    return _result;
}

float Macad::Occt::TShort_HSequenceOfShortReal::ChangeValue(int theIndex)
{
    float _result = ((::TShort_HSequenceOfShortReal*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TShort_HSequenceOfShortReal::SetValue(int theIndex, float theItem)
{
    pin_ptr<float> pp_theItem = &theItem;
    ((::TShort_HSequenceOfShortReal*)_NativeInstance)->SetValue(theIndex, *(float*)pp_theItem);
}

Macad::Occt::TShort_HSequenceOfShortReal^ Macad::Occt::TShort_HSequenceOfShortReal::CreateDowncasted(::TShort_HSequenceOfShortReal* instance)
{
    return gcnew Macad::Occt::TShort_HSequenceOfShortReal( instance );
}

System::Collections::Generic::IEnumerator<float>^ Macad::Occt::TShort_HSequenceOfShortReal::GetEnumerator()
{
    return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TShort_HSequenceOfShortReal::GetEnumerator2()
{
    return gcnew IndexEnumerator<float>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TShort_HSequenceOfShortReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::TShort_HSequenceOfShortReal::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TShort_HSequenceOfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_HSequenceOfShortReal::Iterator();
}

Macad::Occt::TShort_HSequenceOfShortReal::Iterator::Iterator(Macad::Occt::TShort_HSequenceOfShortReal^ theSeq, bool isStart)
    : Macad::Occt::BaseClass<::TShort_HSequenceOfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_HSequenceOfShortReal::Iterator(*(::TShort_HSequenceOfShortReal*)theSeq->NativeInstance, isStart);
}

Macad::Occt::TShort_HSequenceOfShortReal::Iterator::Iterator(Macad::Occt::TShort_HSequenceOfShortReal^ theSeq)
    : Macad::Occt::BaseClass<::TShort_HSequenceOfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_HSequenceOfShortReal::Iterator(*(::TShort_HSequenceOfShortReal*)theSeq->NativeInstance, true);
}

Macad::Occt::TShort_HSequenceOfShortReal::Iterator::Iterator(Macad::Occt::TShort_HSequenceOfShortReal::Iterator^ parameter1)
    : Macad::Occt::BaseClass<::TShort_HSequenceOfShortReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TShort_HSequenceOfShortReal::Iterator(*(::TShort_HSequenceOfShortReal::Iterator*)parameter1->NativeInstance);
}

bool Macad::Occt::TShort_HSequenceOfShortReal::Iterator::More()
{
    bool _result = ((::TShort_HSequenceOfShortReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TShort_HSequenceOfShortReal::Iterator::Next()
{
    ((::TShort_HSequenceOfShortReal::Iterator*)_NativeInstance)->Next();
}

float Macad::Occt::TShort_HSequenceOfShortReal::Iterator::Value()
{
    float _result = ((::TShort_HSequenceOfShortReal::Iterator*)_NativeInstance)->Value();
    return _result;
}

bool Macad::Occt::TShort_HSequenceOfShortReal::Iterator::IsEqual(Macad::Occt::TShort_HSequenceOfShortReal::Iterator^ theOther)
{
    bool _result = ((::TShort_HSequenceOfShortReal::Iterator*)_NativeInstance)->IsEqual(*(::TShort_HSequenceOfShortReal::Iterator*)theOther->NativeInstance);
    return _result;
}


