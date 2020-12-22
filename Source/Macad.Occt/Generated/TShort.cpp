// Generated wrapper code for package TShort

#include "OcctPCH.h"
#include "TShort.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "TShort.h"
#include "NCollection.h"


//---------------------------------------------------------------------
//  Class  TShort_Array1OfShortReal
//---------------------------------------------------------------------

Macad::Occt::TShort_Array1OfShortReal::TShort_Array1OfShortReal()
	: BaseClass<::TShort_Array1OfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_Array1OfShortReal();
}

Macad::Occt::TShort_Array1OfShortReal::TShort_Array1OfShortReal(int theLower, int theUpper)
	: BaseClass<::TShort_Array1OfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_Array1OfShortReal(theLower, theUpper);
}

Macad::Occt::TShort_Array1OfShortReal::TShort_Array1OfShortReal(Macad::Occt::TShort_Array1OfShortReal^ theOther)
	: BaseClass<::TShort_Array1OfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_Array1OfShortReal(*(::TShort_Array1OfShortReal*)theOther->NativeInstance);
}

Macad::Occt::TShort_Array1OfShortReal::TShort_Array1OfShortReal(float theBegin, int theLower, int theUpper)
	: BaseClass<::TShort_Array1OfShortReal>(BaseClass::InitMode::Uninitialized)
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
	return ((::TShort_Array1OfShortReal*)_NativeInstance)->Size();
}

int Macad::Occt::TShort_Array1OfShortReal::Length()
{
	return ((::TShort_Array1OfShortReal*)_NativeInstance)->Length();
}

bool Macad::Occt::TShort_Array1OfShortReal::IsEmpty()
{
	return ((::TShort_Array1OfShortReal*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TShort_Array1OfShortReal::Lower()
{
	return ((::TShort_Array1OfShortReal*)_NativeInstance)->Lower();
}

int Macad::Occt::TShort_Array1OfShortReal::Upper()
{
	return ((::TShort_Array1OfShortReal*)_NativeInstance)->Upper();
}

bool Macad::Occt::TShort_Array1OfShortReal::IsDeletable()
{
	return ((::TShort_Array1OfShortReal*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TShort_Array1OfShortReal::IsAllocated()
{
	return ((::TShort_Array1OfShortReal*)_NativeInstance)->IsAllocated();
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
	return ((::TShort_Array1OfShortReal*)_NativeInstance)->First();
}

float Macad::Occt::TShort_Array1OfShortReal::ChangeFirst()
{
	return ((::TShort_Array1OfShortReal*)_NativeInstance)->ChangeFirst();
}

float Macad::Occt::TShort_Array1OfShortReal::Last()
{
	return ((::TShort_Array1OfShortReal*)_NativeInstance)->Last();
}

float Macad::Occt::TShort_Array1OfShortReal::ChangeLast()
{
	return ((::TShort_Array1OfShortReal*)_NativeInstance)->ChangeLast();
}

float Macad::Occt::TShort_Array1OfShortReal::Value(int theIndex)
{
	return ((::TShort_Array1OfShortReal*)_NativeInstance)->Value(theIndex);
}

float Macad::Occt::TShort_Array1OfShortReal::ChangeValue(int theIndex)
{
	return ((::TShort_Array1OfShortReal*)_NativeInstance)->ChangeValue(theIndex);
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




//---------------------------------------------------------------------
//  Class  TShort_Array2OfShortReal
//---------------------------------------------------------------------

Macad::Occt::TShort_Array2OfShortReal::TShort_Array2OfShortReal()
	: BaseClass<::TShort_Array2OfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_Array2OfShortReal();
}

Macad::Occt::TShort_Array2OfShortReal::TShort_Array2OfShortReal(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TShort_Array2OfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_Array2OfShortReal(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TShort_Array2OfShortReal::TShort_Array2OfShortReal(Macad::Occt::TShort_Array2OfShortReal^ theOther)
	: BaseClass<::TShort_Array2OfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_Array2OfShortReal(*(::TShort_Array2OfShortReal*)theOther->NativeInstance);
}

Macad::Occt::TShort_Array2OfShortReal::TShort_Array2OfShortReal(float theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TShort_Array2OfShortReal>(BaseClass::InitMode::Uninitialized)
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
	return ((::TShort_Array2OfShortReal*)_NativeInstance)->Size();
}

int Macad::Occt::TShort_Array2OfShortReal::Length()
{
	return ((::TShort_Array2OfShortReal*)_NativeInstance)->Length();
}

int Macad::Occt::TShort_Array2OfShortReal::NbRows()
{
	return ((::TShort_Array2OfShortReal*)_NativeInstance)->NbRows();
}

int Macad::Occt::TShort_Array2OfShortReal::NbColumns()
{
	return ((::TShort_Array2OfShortReal*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TShort_Array2OfShortReal::RowLength()
{
	return ((::TShort_Array2OfShortReal*)_NativeInstance)->RowLength();
}

int Macad::Occt::TShort_Array2OfShortReal::ColLength()
{
	return ((::TShort_Array2OfShortReal*)_NativeInstance)->ColLength();
}

int Macad::Occt::TShort_Array2OfShortReal::LowerRow()
{
	return ((::TShort_Array2OfShortReal*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TShort_Array2OfShortReal::UpperRow()
{
	return ((::TShort_Array2OfShortReal*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TShort_Array2OfShortReal::LowerCol()
{
	return ((::TShort_Array2OfShortReal*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TShort_Array2OfShortReal::UpperCol()
{
	return ((::TShort_Array2OfShortReal*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TShort_Array2OfShortReal::IsDeletable()
{
	return ((::TShort_Array2OfShortReal*)_NativeInstance)->IsDeletable();
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
	return ((::TShort_Array2OfShortReal*)_NativeInstance)->Value(theRow, theCol);
}

float Macad::Occt::TShort_Array2OfShortReal::ChangeValue(int theRow, int theCol)
{
	return ((::TShort_Array2OfShortReal*)_NativeInstance)->ChangeValue(theRow, theCol);
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




//---------------------------------------------------------------------
//  Class  TShort_SequenceOfShortReal
//---------------------------------------------------------------------

Macad::Occt::TShort_SequenceOfShortReal::TShort_SequenceOfShortReal()
	: BaseClass<::TShort_SequenceOfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_SequenceOfShortReal();
}

Macad::Occt::TShort_SequenceOfShortReal::TShort_SequenceOfShortReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TShort_SequenceOfShortReal>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TShort_SequenceOfShortReal(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TShort_SequenceOfShortReal::TShort_SequenceOfShortReal(Macad::Occt::TShort_SequenceOfShortReal^ theOther)
	: BaseClass<::TShort_SequenceOfShortReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TShort_SequenceOfShortReal(*(::TShort_SequenceOfShortReal*)theOther->NativeInstance);
}

int Macad::Occt::TShort_SequenceOfShortReal::Size()
{
	return ((::TShort_SequenceOfShortReal*)_NativeInstance)->Size();
}

int Macad::Occt::TShort_SequenceOfShortReal::Length()
{
	return ((::TShort_SequenceOfShortReal*)_NativeInstance)->Length();
}

int Macad::Occt::TShort_SequenceOfShortReal::Lower()
{
	return ((::TShort_SequenceOfShortReal*)_NativeInstance)->Lower();
}

int Macad::Occt::TShort_SequenceOfShortReal::Upper()
{
	return ((::TShort_SequenceOfShortReal*)_NativeInstance)->Upper();
}

bool Macad::Occt::TShort_SequenceOfShortReal::IsEmpty()
{
	return ((::TShort_SequenceOfShortReal*)_NativeInstance)->IsEmpty();
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
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TShort_SequenceOfShortReal*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
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
	return ((::TShort_SequenceOfShortReal*)_NativeInstance)->First();
}

float Macad::Occt::TShort_SequenceOfShortReal::ChangeFirst()
{
	return ((::TShort_SequenceOfShortReal*)_NativeInstance)->ChangeFirst();
}

float Macad::Occt::TShort_SequenceOfShortReal::Last()
{
	return ((::TShort_SequenceOfShortReal*)_NativeInstance)->Last();
}

float Macad::Occt::TShort_SequenceOfShortReal::ChangeLast()
{
	return ((::TShort_SequenceOfShortReal*)_NativeInstance)->ChangeLast();
}

float Macad::Occt::TShort_SequenceOfShortReal::Value(int theIndex)
{
	return ((::TShort_SequenceOfShortReal*)_NativeInstance)->Value(theIndex);
}

float Macad::Occt::TShort_SequenceOfShortReal::ChangeValue(int theIndex)
{
	return ((::TShort_SequenceOfShortReal*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TShort_SequenceOfShortReal::SetValue(int theIndex, float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_SequenceOfShortReal*)_NativeInstance)->SetValue(theIndex, *(float*)pp_theItem);
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
	*_result =  (::TShort_Array1OfShortReal)((::TShort_HArray1OfShortReal*)_NativeInstance)->Array1();
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
	return ((::TShort_HArray1OfShortReal*)_NativeInstance)->Size();
}

int Macad::Occt::TShort_HArray1OfShortReal::Length()
{
	return ((::TShort_HArray1OfShortReal*)_NativeInstance)->Length();
}

bool Macad::Occt::TShort_HArray1OfShortReal::IsEmpty()
{
	return ((::TShort_HArray1OfShortReal*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TShort_HArray1OfShortReal::Lower()
{
	return ((::TShort_HArray1OfShortReal*)_NativeInstance)->Lower();
}

int Macad::Occt::TShort_HArray1OfShortReal::Upper()
{
	return ((::TShort_HArray1OfShortReal*)_NativeInstance)->Upper();
}

bool Macad::Occt::TShort_HArray1OfShortReal::IsDeletable()
{
	return ((::TShort_HArray1OfShortReal*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TShort_HArray1OfShortReal::IsAllocated()
{
	return ((::TShort_HArray1OfShortReal*)_NativeInstance)->IsAllocated();
}

float Macad::Occt::TShort_HArray1OfShortReal::First()
{
	return ((::TShort_HArray1OfShortReal*)_NativeInstance)->First();
}

float Macad::Occt::TShort_HArray1OfShortReal::ChangeFirst()
{
	return ((::TShort_HArray1OfShortReal*)_NativeInstance)->ChangeFirst();
}

float Macad::Occt::TShort_HArray1OfShortReal::Last()
{
	return ((::TShort_HArray1OfShortReal*)_NativeInstance)->Last();
}

float Macad::Occt::TShort_HArray1OfShortReal::ChangeLast()
{
	return ((::TShort_HArray1OfShortReal*)_NativeInstance)->ChangeLast();
}

float Macad::Occt::TShort_HArray1OfShortReal::Value(int theIndex)
{
	return ((::TShort_HArray1OfShortReal*)_NativeInstance)->Value(theIndex);
}

float Macad::Occt::TShort_HArray1OfShortReal::ChangeValue(int theIndex)
{
	return ((::TShort_HArray1OfShortReal*)_NativeInstance)->ChangeValue(theIndex);
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
	*_result =  (::TShort_Array2OfShortReal)((::TShort_HArray2OfShortReal*)_NativeInstance)->Array2();
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
	return ((::TShort_HArray2OfShortReal*)_NativeInstance)->Size();
}

int Macad::Occt::TShort_HArray2OfShortReal::Length()
{
	return ((::TShort_HArray2OfShortReal*)_NativeInstance)->Length();
}

int Macad::Occt::TShort_HArray2OfShortReal::NbRows()
{
	return ((::TShort_HArray2OfShortReal*)_NativeInstance)->NbRows();
}

int Macad::Occt::TShort_HArray2OfShortReal::NbColumns()
{
	return ((::TShort_HArray2OfShortReal*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TShort_HArray2OfShortReal::RowLength()
{
	return ((::TShort_HArray2OfShortReal*)_NativeInstance)->RowLength();
}

int Macad::Occt::TShort_HArray2OfShortReal::ColLength()
{
	return ((::TShort_HArray2OfShortReal*)_NativeInstance)->ColLength();
}

int Macad::Occt::TShort_HArray2OfShortReal::LowerRow()
{
	return ((::TShort_HArray2OfShortReal*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TShort_HArray2OfShortReal::UpperRow()
{
	return ((::TShort_HArray2OfShortReal*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TShort_HArray2OfShortReal::LowerCol()
{
	return ((::TShort_HArray2OfShortReal*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TShort_HArray2OfShortReal::UpperCol()
{
	return ((::TShort_HArray2OfShortReal*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TShort_HArray2OfShortReal::IsDeletable()
{
	return ((::TShort_HArray2OfShortReal*)_NativeInstance)->IsDeletable();
}

float Macad::Occt::TShort_HArray2OfShortReal::Value(int theRow, int theCol)
{
	return ((::TShort_HArray2OfShortReal*)_NativeInstance)->Value(theRow, theCol);
}

float Macad::Occt::TShort_HArray2OfShortReal::ChangeValue(int theRow, int theCol)
{
	return ((::TShort_HArray2OfShortReal*)_NativeInstance)->ChangeValue(theRow, theCol);
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
	*_result =  (::TShort_SequenceOfShortReal)((::TShort_HSequenceOfShortReal*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TShort_SequenceOfShortReal(_result);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Append(float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Append(*(float*)pp_theItem);
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
	return ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Size();
}

int Macad::Occt::TShort_HSequenceOfShortReal::Length()
{
	return ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Length();
}

int Macad::Occt::TShort_HSequenceOfShortReal::Lower()
{
	return ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Lower();
}

int Macad::Occt::TShort_HSequenceOfShortReal::Upper()
{
	return ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Upper();
}

bool Macad::Occt::TShort_HSequenceOfShortReal::IsEmpty()
{
	return ((::TShort_HSequenceOfShortReal*)_NativeInstance)->IsEmpty();
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
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TShort_HSequenceOfShortReal::Clear()
{
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Remove(int theIndex)
{
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Remove(int theFromIndex, int theToIndex)
{
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TShort_HSequenceOfShortReal::Prepend(float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->Prepend(*(float*)pp_theItem);
}

void Macad::Occt::TShort_HSequenceOfShortReal::InsertBefore(int theIndex, float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->InsertBefore(theIndex, *(float*)pp_theItem);
}

void Macad::Occt::TShort_HSequenceOfShortReal::InsertAfter(int theIndex, float theItem)
{
	pin_ptr<float> pp_theItem = &theItem;
	((::TShort_HSequenceOfShortReal*)_NativeInstance)->InsertAfter(theIndex, *(float*)pp_theItem);
}

float Macad::Occt::TShort_HSequenceOfShortReal::First()
{
	return ((::TShort_HSequenceOfShortReal*)_NativeInstance)->First();
}

float Macad::Occt::TShort_HSequenceOfShortReal::ChangeFirst()
{
	return ((::TShort_HSequenceOfShortReal*)_NativeInstance)->ChangeFirst();
}

float Macad::Occt::TShort_HSequenceOfShortReal::Last()
{
	return ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Last();
}

float Macad::Occt::TShort_HSequenceOfShortReal::ChangeLast()
{
	return ((::TShort_HSequenceOfShortReal*)_NativeInstance)->ChangeLast();
}

float Macad::Occt::TShort_HSequenceOfShortReal::Value(int theIndex)
{
	return ((::TShort_HSequenceOfShortReal*)_NativeInstance)->Value(theIndex);
}

float Macad::Occt::TShort_HSequenceOfShortReal::ChangeValue(int theIndex)
{
	return ((::TShort_HSequenceOfShortReal*)_NativeInstance)->ChangeValue(theIndex);
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


