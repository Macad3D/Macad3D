// Generated wrapper code for package Units

#include "OcctPCH.h"
#include "Units.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Units.h"
#include "Standard.h"
#include "TCollection.h"
#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  Units_UtsSequence
//---------------------------------------------------------------------

Macad::Occt::Units_UtsSequence::Units_UtsSequence()
	: BaseClass<::Units_UtsSequence>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units_UtsSequence();
}

Macad::Occt::Units_UtsSequence::Units_UtsSequence(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Units_UtsSequence>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Units_UtsSequence(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Units_UtsSequence::Units_UtsSequence(Macad::Occt::Units_UtsSequence^ theOther)
	: BaseClass<::Units_UtsSequence>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units_UtsSequence(*(::Units_UtsSequence*)theOther->NativeInstance);
}

int Macad::Occt::Units_UtsSequence::Size()
{
	return ((::Units_UtsSequence*)_NativeInstance)->Size();
}

int Macad::Occt::Units_UtsSequence::Length()
{
	return ((::Units_UtsSequence*)_NativeInstance)->Length();
}

int Macad::Occt::Units_UtsSequence::Lower()
{
	return ((::Units_UtsSequence*)_NativeInstance)->Lower();
}

int Macad::Occt::Units_UtsSequence::Upper()
{
	return ((::Units_UtsSequence*)_NativeInstance)->Upper();
}

bool Macad::Occt::Units_UtsSequence::IsEmpty()
{
	return ((::Units_UtsSequence*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Units_UtsSequence::Reverse()
{
	((::Units_UtsSequence*)_NativeInstance)->Reverse();
}

void Macad::Occt::Units_UtsSequence::Exchange(int I, int J)
{
	((::Units_UtsSequence*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Units_UtsSequence::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Units_UtsSequence*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Units_UtsSequence::Clear()
{
	((::Units_UtsSequence*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Units_UtsSequence^ Macad::Occt::Units_UtsSequence::Assign(Macad::Occt::Units_UtsSequence^ theOther)
{
	::Units_UtsSequence* _result = new ::Units_UtsSequence();
	*_result = ((::Units_UtsSequence*)_NativeInstance)->Assign(*(::Units_UtsSequence*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_UtsSequence(_result);
}

void Macad::Occt::Units_UtsSequence::Remove(int theIndex)
{
	((::Units_UtsSequence*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Units_UtsSequence::Remove(int theFromIndex, int theToIndex)
{
	((::Units_UtsSequence*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Units_UtsSequence::Append(Macad::Occt::Units_Unit^ theItem)
{
	Handle(::Units_Unit) h_theItem = theItem->NativeInstance;
	((::Units_UtsSequence*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_UtsSequence::Append(Macad::Occt::Units_UtsSequence^ theSeq)
{
	((::Units_UtsSequence*)_NativeInstance)->Append(*(::Units_UtsSequence*)theSeq->NativeInstance);
}

void Macad::Occt::Units_UtsSequence::Prepend(Macad::Occt::Units_Unit^ theItem)
{
	Handle(::Units_Unit) h_theItem = theItem->NativeInstance;
	((::Units_UtsSequence*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_UtsSequence::Prepend(Macad::Occt::Units_UtsSequence^ theSeq)
{
	((::Units_UtsSequence*)_NativeInstance)->Prepend(*(::Units_UtsSequence*)theSeq->NativeInstance);
}

void Macad::Occt::Units_UtsSequence::InsertBefore(int theIndex, Macad::Occt::Units_Unit^ theItem)
{
	Handle(::Units_Unit) h_theItem = theItem->NativeInstance;
	((::Units_UtsSequence*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_UtsSequence::InsertBefore(int theIndex, Macad::Occt::Units_UtsSequence^ theSeq)
{
	((::Units_UtsSequence*)_NativeInstance)->InsertBefore(theIndex, *(::Units_UtsSequence*)theSeq->NativeInstance);
}

void Macad::Occt::Units_UtsSequence::InsertAfter(int theIndex, Macad::Occt::Units_UtsSequence^ theSeq)
{
	((::Units_UtsSequence*)_NativeInstance)->InsertAfter(theIndex, *(::Units_UtsSequence*)theSeq->NativeInstance);
}

void Macad::Occt::Units_UtsSequence::InsertAfter(int theIndex, Macad::Occt::Units_Unit^ theItem)
{
	Handle(::Units_Unit) h_theItem = theItem->NativeInstance;
	((::Units_UtsSequence*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_UtsSequence::Split(int theIndex, Macad::Occt::Units_UtsSequence^ theSeq)
{
	((::Units_UtsSequence*)_NativeInstance)->Split(theIndex, *(::Units_UtsSequence*)theSeq->NativeInstance);
}

Macad::Occt::Units_Unit^ Macad::Occt::Units_UtsSequence::First()
{
	Handle(::Units_Unit) _result;
	_result = ((::Units_UtsSequence*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Unit::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Unit^ Macad::Occt::Units_UtsSequence::ChangeFirst()
{
	Handle(::Units_Unit) _result;
	_result = ((::Units_UtsSequence*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Unit::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Unit^ Macad::Occt::Units_UtsSequence::Last()
{
	Handle(::Units_Unit) _result;
	_result = ((::Units_UtsSequence*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Unit::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Unit^ Macad::Occt::Units_UtsSequence::ChangeLast()
{
	Handle(::Units_Unit) _result;
	_result = ((::Units_UtsSequence*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Unit::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Unit^ Macad::Occt::Units_UtsSequence::Value(int theIndex)
{
	Handle(::Units_Unit) _result;
	_result = ((::Units_UtsSequence*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Unit::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Unit^ Macad::Occt::Units_UtsSequence::ChangeValue(int theIndex)
{
	Handle(::Units_Unit) _result;
	_result = ((::Units_UtsSequence*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Unit::CreateDowncasted( _result.get());
}

void Macad::Occt::Units_UtsSequence::SetValue(int theIndex, Macad::Occt::Units_Unit^ theItem)
{
	Handle(::Units_Unit) h_theItem = theItem->NativeInstance;
	((::Units_UtsSequence*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  Units_QtsSequence
//---------------------------------------------------------------------

Macad::Occt::Units_QtsSequence::Units_QtsSequence()
	: BaseClass<::Units_QtsSequence>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units_QtsSequence();
}

Macad::Occt::Units_QtsSequence::Units_QtsSequence(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Units_QtsSequence>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Units_QtsSequence(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Units_QtsSequence::Units_QtsSequence(Macad::Occt::Units_QtsSequence^ theOther)
	: BaseClass<::Units_QtsSequence>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units_QtsSequence(*(::Units_QtsSequence*)theOther->NativeInstance);
}

int Macad::Occt::Units_QtsSequence::Size()
{
	return ((::Units_QtsSequence*)_NativeInstance)->Size();
}

int Macad::Occt::Units_QtsSequence::Length()
{
	return ((::Units_QtsSequence*)_NativeInstance)->Length();
}

int Macad::Occt::Units_QtsSequence::Lower()
{
	return ((::Units_QtsSequence*)_NativeInstance)->Lower();
}

int Macad::Occt::Units_QtsSequence::Upper()
{
	return ((::Units_QtsSequence*)_NativeInstance)->Upper();
}

bool Macad::Occt::Units_QtsSequence::IsEmpty()
{
	return ((::Units_QtsSequence*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Units_QtsSequence::Reverse()
{
	((::Units_QtsSequence*)_NativeInstance)->Reverse();
}

void Macad::Occt::Units_QtsSequence::Exchange(int I, int J)
{
	((::Units_QtsSequence*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Units_QtsSequence::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Units_QtsSequence*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Units_QtsSequence::Clear()
{
	((::Units_QtsSequence*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Units_QtsSequence^ Macad::Occt::Units_QtsSequence::Assign(Macad::Occt::Units_QtsSequence^ theOther)
{
	::Units_QtsSequence* _result = new ::Units_QtsSequence();
	*_result = ((::Units_QtsSequence*)_NativeInstance)->Assign(*(::Units_QtsSequence*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_QtsSequence(_result);
}

void Macad::Occt::Units_QtsSequence::Remove(int theIndex)
{
	((::Units_QtsSequence*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Units_QtsSequence::Remove(int theFromIndex, int theToIndex)
{
	((::Units_QtsSequence*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Units_QtsSequence::Append(Macad::Occt::Units_Quantity^ theItem)
{
	Handle(::Units_Quantity) h_theItem = theItem->NativeInstance;
	((::Units_QtsSequence*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_QtsSequence::Append(Macad::Occt::Units_QtsSequence^ theSeq)
{
	((::Units_QtsSequence*)_NativeInstance)->Append(*(::Units_QtsSequence*)theSeq->NativeInstance);
}

void Macad::Occt::Units_QtsSequence::Prepend(Macad::Occt::Units_Quantity^ theItem)
{
	Handle(::Units_Quantity) h_theItem = theItem->NativeInstance;
	((::Units_QtsSequence*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_QtsSequence::Prepend(Macad::Occt::Units_QtsSequence^ theSeq)
{
	((::Units_QtsSequence*)_NativeInstance)->Prepend(*(::Units_QtsSequence*)theSeq->NativeInstance);
}

void Macad::Occt::Units_QtsSequence::InsertBefore(int theIndex, Macad::Occt::Units_Quantity^ theItem)
{
	Handle(::Units_Quantity) h_theItem = theItem->NativeInstance;
	((::Units_QtsSequence*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_QtsSequence::InsertBefore(int theIndex, Macad::Occt::Units_QtsSequence^ theSeq)
{
	((::Units_QtsSequence*)_NativeInstance)->InsertBefore(theIndex, *(::Units_QtsSequence*)theSeq->NativeInstance);
}

void Macad::Occt::Units_QtsSequence::InsertAfter(int theIndex, Macad::Occt::Units_QtsSequence^ theSeq)
{
	((::Units_QtsSequence*)_NativeInstance)->InsertAfter(theIndex, *(::Units_QtsSequence*)theSeq->NativeInstance);
}

void Macad::Occt::Units_QtsSequence::InsertAfter(int theIndex, Macad::Occt::Units_Quantity^ theItem)
{
	Handle(::Units_Quantity) h_theItem = theItem->NativeInstance;
	((::Units_QtsSequence*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_QtsSequence::Split(int theIndex, Macad::Occt::Units_QtsSequence^ theSeq)
{
	((::Units_QtsSequence*)_NativeInstance)->Split(theIndex, *(::Units_QtsSequence*)theSeq->NativeInstance);
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units_QtsSequence::First()
{
	Handle(::Units_Quantity) _result;
	_result = ((::Units_QtsSequence*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units_QtsSequence::ChangeFirst()
{
	Handle(::Units_Quantity) _result;
	_result = ((::Units_QtsSequence*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units_QtsSequence::Last()
{
	Handle(::Units_Quantity) _result;
	_result = ((::Units_QtsSequence*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units_QtsSequence::ChangeLast()
{
	Handle(::Units_Quantity) _result;
	_result = ((::Units_QtsSequence*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units_QtsSequence::Value(int theIndex)
{
	Handle(::Units_Quantity) _result;
	_result = ((::Units_QtsSequence*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units_QtsSequence::ChangeValue(int theIndex)
{
	Handle(::Units_Quantity) _result;
	_result = ((::Units_QtsSequence*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

void Macad::Occt::Units_QtsSequence::SetValue(int theIndex, Macad::Occt::Units_Quantity^ theItem)
{
	Handle(::Units_Quantity) h_theItem = theItem->NativeInstance;
	((::Units_QtsSequence*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  Units_TksSequence
//---------------------------------------------------------------------

Macad::Occt::Units_TksSequence::Units_TksSequence()
	: BaseClass<::Units_TksSequence>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units_TksSequence();
}

Macad::Occt::Units_TksSequence::Units_TksSequence(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Units_TksSequence>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Units_TksSequence(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Units_TksSequence::Units_TksSequence(Macad::Occt::Units_TksSequence^ theOther)
	: BaseClass<::Units_TksSequence>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units_TksSequence(*(::Units_TksSequence*)theOther->NativeInstance);
}

int Macad::Occt::Units_TksSequence::Size()
{
	return ((::Units_TksSequence*)_NativeInstance)->Size();
}

int Macad::Occt::Units_TksSequence::Length()
{
	return ((::Units_TksSequence*)_NativeInstance)->Length();
}

int Macad::Occt::Units_TksSequence::Lower()
{
	return ((::Units_TksSequence*)_NativeInstance)->Lower();
}

int Macad::Occt::Units_TksSequence::Upper()
{
	return ((::Units_TksSequence*)_NativeInstance)->Upper();
}

bool Macad::Occt::Units_TksSequence::IsEmpty()
{
	return ((::Units_TksSequence*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Units_TksSequence::Reverse()
{
	((::Units_TksSequence*)_NativeInstance)->Reverse();
}

void Macad::Occt::Units_TksSequence::Exchange(int I, int J)
{
	((::Units_TksSequence*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Units_TksSequence::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Units_TksSequence*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Units_TksSequence::Clear()
{
	((::Units_TksSequence*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Units_TksSequence^ Macad::Occt::Units_TksSequence::Assign(Macad::Occt::Units_TksSequence^ theOther)
{
	::Units_TksSequence* _result = new ::Units_TksSequence();
	*_result = ((::Units_TksSequence*)_NativeInstance)->Assign(*(::Units_TksSequence*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_TksSequence(_result);
}

void Macad::Occt::Units_TksSequence::Remove(int theIndex)
{
	((::Units_TksSequence*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Units_TksSequence::Remove(int theFromIndex, int theToIndex)
{
	((::Units_TksSequence*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Units_TksSequence::Append(Macad::Occt::Units_Token^ theItem)
{
	Handle(::Units_Token) h_theItem = theItem->NativeInstance;
	((::Units_TksSequence*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_TksSequence::Append(Macad::Occt::Units_TksSequence^ theSeq)
{
	((::Units_TksSequence*)_NativeInstance)->Append(*(::Units_TksSequence*)theSeq->NativeInstance);
}

void Macad::Occt::Units_TksSequence::Prepend(Macad::Occt::Units_Token^ theItem)
{
	Handle(::Units_Token) h_theItem = theItem->NativeInstance;
	((::Units_TksSequence*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_TksSequence::Prepend(Macad::Occt::Units_TksSequence^ theSeq)
{
	((::Units_TksSequence*)_NativeInstance)->Prepend(*(::Units_TksSequence*)theSeq->NativeInstance);
}

void Macad::Occt::Units_TksSequence::InsertBefore(int theIndex, Macad::Occt::Units_Token^ theItem)
{
	Handle(::Units_Token) h_theItem = theItem->NativeInstance;
	((::Units_TksSequence*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_TksSequence::InsertBefore(int theIndex, Macad::Occt::Units_TksSequence^ theSeq)
{
	((::Units_TksSequence*)_NativeInstance)->InsertBefore(theIndex, *(::Units_TksSequence*)theSeq->NativeInstance);
}

void Macad::Occt::Units_TksSequence::InsertAfter(int theIndex, Macad::Occt::Units_TksSequence^ theSeq)
{
	((::Units_TksSequence*)_NativeInstance)->InsertAfter(theIndex, *(::Units_TksSequence*)theSeq->NativeInstance);
}

void Macad::Occt::Units_TksSequence::InsertAfter(int theIndex, Macad::Occt::Units_Token^ theItem)
{
	Handle(::Units_Token) h_theItem = theItem->NativeInstance;
	((::Units_TksSequence*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_TksSequence::Split(int theIndex, Macad::Occt::Units_TksSequence^ theSeq)
{
	((::Units_TksSequence*)_NativeInstance)->Split(theIndex, *(::Units_TksSequence*)theSeq->NativeInstance);
}

Macad::Occt::Units_Token^ Macad::Occt::Units_TksSequence::First()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_TksSequence*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_TksSequence::ChangeFirst()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_TksSequence*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_TksSequence::Last()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_TksSequence*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_TksSequence::ChangeLast()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_TksSequence*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_TksSequence::Value(int theIndex)
{
	Handle(::Units_Token) _result;
	_result = ((::Units_TksSequence*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_TksSequence::ChangeValue(int theIndex)
{
	Handle(::Units_Token) _result;
	_result = ((::Units_TksSequence*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

void Macad::Occt::Units_TksSequence::SetValue(int theIndex, Macad::Occt::Units_Token^ theItem)
{
	Handle(::Units_Token) h_theItem = theItem->NativeInstance;
	((::Units_TksSequence*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  Units_UnitsDictionary
//---------------------------------------------------------------------

Macad::Occt::Units_UnitsDictionary::Units_UnitsDictionary()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_UnitsDictionary();
}

Macad::Occt::Units_UnitsDictionary::Units_UnitsDictionary(Macad::Occt::Units_UnitsDictionary^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_UnitsDictionary(*(::Units_UnitsDictionary*)parameter1->NativeInstance);
}

void Macad::Occt::Units_UnitsDictionary::Creates()
{
	((::Units_UnitsDictionary*)_NativeInstance)->Creates();
}

Macad::Occt::Units_QuantitiesSequence^ Macad::Occt::Units_UnitsDictionary::Sequence()
{
	Handle(::Units_QuantitiesSequence) _result;
	_result = ((::Units_UnitsDictionary*)_NativeInstance)->Sequence();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_QuantitiesSequence::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Units_UnitsDictionary::ActiveUnit(System::String^ aquantity)
{
	const char* sz_aquantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aquantity);
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::Units_UnitsDictionary*)_NativeInstance)->ActiveUnit(sz_aquantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aquantity);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Units_UnitsDictionary::Dump(int alevel)
{
	((::Units_UnitsDictionary*)_NativeInstance)->Dump(alevel);
}

void Macad::Occt::Units_UnitsDictionary::Dump(Macad::Occt::Units_Dimensions^ adimensions)
{
	Handle(::Units_Dimensions) h_adimensions = adimensions->NativeInstance;
	((::Units_UnitsDictionary*)_NativeInstance)->Dump(h_adimensions);
	adimensions->NativeInstance = h_adimensions.get();
}


Macad::Occt::Units_UnitsDictionary^ Macad::Occt::Units_UnitsDictionary::CreateDowncasted(::Units_UnitsDictionary* instance)
{
	return gcnew Macad::Occt::Units_UnitsDictionary( instance );
}



//---------------------------------------------------------------------
//  Class  Units_Quantity
//---------------------------------------------------------------------

Macad::Occt::Units_Quantity::Units_Quantity(System::String^ aname, Macad::Occt::Units_Dimensions^ adimensions, Macad::Occt::Units_UnitsSequence^ aunitssequence)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aname = (char*)(void*)Marshal::StringToHGlobalAnsi(aname);
	Handle(::Units_Dimensions) h_adimensions = adimensions->NativeInstance;
	Handle(::Units_UnitsSequence) h_aunitssequence = aunitssequence->NativeInstance;
	NativeInstance = new ::Units_Quantity(sz_aname, h_adimensions, h_aunitssequence);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aname);
	adimensions->NativeInstance = h_adimensions.get();
	aunitssequence->NativeInstance = h_aunitssequence.get();
}

Macad::Occt::Units_Quantity::Units_Quantity(Macad::Occt::Units_Quantity^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_Quantity(*(::Units_Quantity*)parameter1->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Units_Quantity::Name()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::Units_Quantity*)_NativeInstance)->Name();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Quantity::Dimensions()
{
	Handle(::Units_Dimensions) _result;
	_result = ((::Units_Quantity*)_NativeInstance)->Dimensions();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_UnitsSequence^ Macad::Occt::Units_Quantity::Sequence()
{
	Handle(::Units_UnitsSequence) _result;
	_result = ((::Units_Quantity*)_NativeInstance)->Sequence();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_UnitsSequence::CreateDowncasted( _result.get());
}

bool Macad::Occt::Units_Quantity::IsEqual(System::String^ astring)
{
	const char* sz_astring = (char*)(void*)Marshal::StringToHGlobalAnsi(astring);
	return ((::Units_Quantity*)_NativeInstance)->IsEqual(sz_astring);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_astring);
}

void Macad::Occt::Units_Quantity::Dump(int ashift, int alevel)
{
	((::Units_Quantity*)_NativeInstance)->Dump(ashift, alevel);
}


Macad::Occt::Units_Quantity^ Macad::Occt::Units_Quantity::CreateDowncasted(::Units_Quantity* instance)
{
	return gcnew Macad::Occt::Units_Quantity( instance );
}



//---------------------------------------------------------------------
//  Class  Units_Lexicon
//---------------------------------------------------------------------

Macad::Occt::Units_Lexicon::Units_Lexicon()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_Lexicon();
}

Macad::Occt::Units_Lexicon::Units_Lexicon(Macad::Occt::Units_Lexicon^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_Lexicon(*(::Units_Lexicon*)parameter1->NativeInstance);
}

void Macad::Occt::Units_Lexicon::Creates()
{
	((::Units_Lexicon*)_NativeInstance)->Creates();
}

Macad::Occt::Units_TokensSequence^ Macad::Occt::Units_Lexicon::Sequence()
{
	Handle(::Units_TokensSequence) _result;
	_result = ((::Units_Lexicon*)_NativeInstance)->Sequence();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_TokensSequence::CreateDowncasted( _result.get());
}

void Macad::Occt::Units_Lexicon::AddToken(System::String^ aword, System::String^ amean, double avalue)
{
	const char* sz_aword = (char*)(void*)Marshal::StringToHGlobalAnsi(aword);
	const char* sz_amean = (char*)(void*)Marshal::StringToHGlobalAnsi(amean);
	((::Units_Lexicon*)_NativeInstance)->AddToken(sz_aword, sz_amean, avalue);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aword);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_amean);
}

void Macad::Occt::Units_Lexicon::Dump()
{
	((::Units_Lexicon*)_NativeInstance)->Dump();
}


Macad::Occt::Units_Lexicon^ Macad::Occt::Units_Lexicon::CreateDowncasted(::Units_Lexicon* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Units_UnitsLexicon)))
		return Macad::Occt::Units_UnitsLexicon::CreateDowncasted((::Units_UnitsLexicon*)instance);

	return gcnew Macad::Occt::Units_Lexicon( instance );
}



//---------------------------------------------------------------------
//  Class  Units_Dimensions
//---------------------------------------------------------------------

Macad::Occt::Units_Dimensions::Units_Dimensions(double amass, double alength, double atime, double anelectriccurrent, double athermodynamictemperature, double anamountofsubstance, double aluminousintensity, double aplaneangle, double asolidangle)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_Dimensions(amass, alength, atime, anelectriccurrent, athermodynamictemperature, anamountofsubstance, aluminousintensity, aplaneangle, asolidangle);
}

Macad::Occt::Units_Dimensions::Units_Dimensions(Macad::Occt::Units_Dimensions^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_Dimensions(*(::Units_Dimensions*)parameter1->NativeInstance);
}

double Macad::Occt::Units_Dimensions::Mass()
{
	return ((::Units_Dimensions*)_NativeInstance)->Mass();
}

double Macad::Occt::Units_Dimensions::Length()
{
	return ((::Units_Dimensions*)_NativeInstance)->Length();
}

double Macad::Occt::Units_Dimensions::Time()
{
	return ((::Units_Dimensions*)_NativeInstance)->Time();
}

double Macad::Occt::Units_Dimensions::ElectricCurrent()
{
	return ((::Units_Dimensions*)_NativeInstance)->ElectricCurrent();
}

double Macad::Occt::Units_Dimensions::ThermodynamicTemperature()
{
	return ((::Units_Dimensions*)_NativeInstance)->ThermodynamicTemperature();
}

double Macad::Occt::Units_Dimensions::AmountOfSubstance()
{
	return ((::Units_Dimensions*)_NativeInstance)->AmountOfSubstance();
}

double Macad::Occt::Units_Dimensions::LuminousIntensity()
{
	return ((::Units_Dimensions*)_NativeInstance)->LuminousIntensity();
}

double Macad::Occt::Units_Dimensions::PlaneAngle()
{
	return ((::Units_Dimensions*)_NativeInstance)->PlaneAngle();
}

double Macad::Occt::Units_Dimensions::SolidAngle()
{
	return ((::Units_Dimensions*)_NativeInstance)->SolidAngle();
}

System::String^ Macad::Occt::Units_Dimensions::Quantity()
{
	Standard_CString _result;
	_result = ((::Units_Dimensions*)_NativeInstance)->Quantity();
	return gcnew System::String(_result);
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::Multiply(Macad::Occt::Units_Dimensions^ adimensions)
{
	Handle(::Units_Dimensions) h_adimensions = adimensions->NativeInstance;
	Handle(::Units_Dimensions) _result;
	_result = ((::Units_Dimensions*)_NativeInstance)->Multiply(h_adimensions);
	adimensions->NativeInstance = h_adimensions.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::Divide(Macad::Occt::Units_Dimensions^ adimensions)
{
	Handle(::Units_Dimensions) h_adimensions = adimensions->NativeInstance;
	Handle(::Units_Dimensions) _result;
	_result = ((::Units_Dimensions*)_NativeInstance)->Divide(h_adimensions);
	adimensions->NativeInstance = h_adimensions.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::Power(double anexponent)
{
	Handle(::Units_Dimensions) _result;
	_result = ((::Units_Dimensions*)_NativeInstance)->Power(anexponent);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

bool Macad::Occt::Units_Dimensions::IsEqual(Macad::Occt::Units_Dimensions^ adimensions)
{
	Handle(::Units_Dimensions) h_adimensions = adimensions->NativeInstance;
	return ((::Units_Dimensions*)_NativeInstance)->IsEqual(h_adimensions);
	adimensions->NativeInstance = h_adimensions.get();
}

bool Macad::Occt::Units_Dimensions::IsNotEqual(Macad::Occt::Units_Dimensions^ adimensions)
{
	Handle(::Units_Dimensions) h_adimensions = adimensions->NativeInstance;
	return ((::Units_Dimensions*)_NativeInstance)->IsNotEqual(h_adimensions);
	adimensions->NativeInstance = h_adimensions.get();
}

void Macad::Occt::Units_Dimensions::Dump(int ashift)
{
	((::Units_Dimensions*)_NativeInstance)->Dump(ashift);
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::ALess()
{
	Handle(::Units_Dimensions) _result;
	_result = ::Units_Dimensions::ALess();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::AMass()
{
	Handle(::Units_Dimensions) _result;
	_result = ::Units_Dimensions::AMass();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::ALength()
{
	Handle(::Units_Dimensions) _result;
	_result = ::Units_Dimensions::ALength();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::ATime()
{
	Handle(::Units_Dimensions) _result;
	_result = ::Units_Dimensions::ATime();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::AElectricCurrent()
{
	Handle(::Units_Dimensions) _result;
	_result = ::Units_Dimensions::AElectricCurrent();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::AThermodynamicTemperature()
{
	Handle(::Units_Dimensions) _result;
	_result = ::Units_Dimensions::AThermodynamicTemperature();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::AAmountOfSubstance()
{
	Handle(::Units_Dimensions) _result;
	_result = ::Units_Dimensions::AAmountOfSubstance();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::ALuminousIntensity()
{
	Handle(::Units_Dimensions) _result;
	_result = ::Units_Dimensions::ALuminousIntensity();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::APlaneAngle()
{
	Handle(::Units_Dimensions) _result;
	_result = ::Units_Dimensions::APlaneAngle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::ASolidAngle()
{
	Handle(::Units_Dimensions) _result;
	_result = ::Units_Dimensions::ASolidAngle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}


Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Dimensions::CreateDowncasted(::Units_Dimensions* instance)
{
	return gcnew Macad::Occt::Units_Dimensions( instance );
}



//---------------------------------------------------------------------
//  Class  Units_Unit
//---------------------------------------------------------------------

Macad::Occt::Units_Unit::Units_Unit(System::String^ aname, System::String^ asymbol, double avalue, Macad::Occt::Units_Quantity^ aquantity)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aname = (char*)(void*)Marshal::StringToHGlobalAnsi(aname);
	const char* sz_asymbol = (char*)(void*)Marshal::StringToHGlobalAnsi(asymbol);
	Handle(::Units_Quantity) h_aquantity = aquantity->NativeInstance;
	NativeInstance = new ::Units_Unit(sz_aname, sz_asymbol, avalue, h_aquantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aname);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_asymbol);
	aquantity->NativeInstance = h_aquantity.get();
}

Macad::Occt::Units_Unit::Units_Unit(System::String^ aname, System::String^ asymbol)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aname = (char*)(void*)Marshal::StringToHGlobalAnsi(aname);
	const char* sz_asymbol = (char*)(void*)Marshal::StringToHGlobalAnsi(asymbol);
	NativeInstance = new ::Units_Unit(sz_aname, sz_asymbol);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aname);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_asymbol);
}

Macad::Occt::Units_Unit::Units_Unit(System::String^ aname)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aname = (char*)(void*)Marshal::StringToHGlobalAnsi(aname);
	NativeInstance = new ::Units_Unit(sz_aname);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aname);
}

Macad::Occt::Units_Unit::Units_Unit(Macad::Occt::Units_Unit^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_Unit(*(::Units_Unit*)parameter1->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Units_Unit::Name()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::Units_Unit*)_NativeInstance)->Name();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Units_Unit::Symbol(System::String^ asymbol)
{
	const char* sz_asymbol = (char*)(void*)Marshal::StringToHGlobalAnsi(asymbol);
	((::Units_Unit*)_NativeInstance)->Symbol(sz_asymbol);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_asymbol);
}

double Macad::Occt::Units_Unit::Value()
{
	return ((::Units_Unit*)_NativeInstance)->Value();
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units_Unit::Quantity()
{
	Handle(::Units_Quantity) _result;
	_result = ((::Units_Unit*)_NativeInstance)->Quantity();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HSequenceOfHAsciiString^ Macad::Occt::Units_Unit::SymbolsSequence()
{
	Handle(::TColStd_HSequenceOfHAsciiString) _result;
	_result = ((::Units_Unit*)_NativeInstance)->SymbolsSequence();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfHAsciiString::CreateDowncasted( _result.get());
}

void Macad::Occt::Units_Unit::Value(double avalue)
{
	((::Units_Unit*)_NativeInstance)->Value(avalue);
}

void Macad::Occt::Units_Unit::Quantity(Macad::Occt::Units_Quantity^ aquantity)
{
	Handle(::Units_Quantity) h_aquantity = aquantity->NativeInstance;
	((::Units_Unit*)_NativeInstance)->Quantity(h_aquantity);
	aquantity->NativeInstance = h_aquantity.get();
}

Macad::Occt::Units_Token^ Macad::Occt::Units_Unit::Token()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_Unit*)_NativeInstance)->Token();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

bool Macad::Occt::Units_Unit::IsEqual(System::String^ astring)
{
	const char* sz_astring = (char*)(void*)Marshal::StringToHGlobalAnsi(astring);
	return ((::Units_Unit*)_NativeInstance)->IsEqual(sz_astring);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_astring);
}

void Macad::Occt::Units_Unit::Dump(int ashift, int alevel)
{
	((::Units_Unit*)_NativeInstance)->Dump(ashift, alevel);
}


Macad::Occt::Units_Unit^ Macad::Occt::Units_Unit::CreateDowncasted(::Units_Unit* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Units_ShiftedUnit)))
		return Macad::Occt::Units_ShiftedUnit::CreateDowncasted((::Units_ShiftedUnit*)instance);

	return gcnew Macad::Occt::Units_Unit( instance );
}



//---------------------------------------------------------------------
//  Class  Units_ShiftedUnit
//---------------------------------------------------------------------

Macad::Occt::Units_ShiftedUnit::Units_ShiftedUnit(System::String^ aname, System::String^ asymbol, double avalue, double amove, Macad::Occt::Units_Quantity^ aquantity)
	: Macad::Occt::Units_Unit(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aname = (char*)(void*)Marshal::StringToHGlobalAnsi(aname);
	const char* sz_asymbol = (char*)(void*)Marshal::StringToHGlobalAnsi(asymbol);
	Handle(::Units_Quantity) h_aquantity = aquantity->NativeInstance;
	NativeInstance = new ::Units_ShiftedUnit(sz_aname, sz_asymbol, avalue, amove, h_aquantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aname);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_asymbol);
	aquantity->NativeInstance = h_aquantity.get();
}

Macad::Occt::Units_ShiftedUnit::Units_ShiftedUnit(System::String^ aname, System::String^ asymbol)
	: Macad::Occt::Units_Unit(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aname = (char*)(void*)Marshal::StringToHGlobalAnsi(aname);
	const char* sz_asymbol = (char*)(void*)Marshal::StringToHGlobalAnsi(asymbol);
	NativeInstance = new ::Units_ShiftedUnit(sz_aname, sz_asymbol);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aname);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_asymbol);
}

Macad::Occt::Units_ShiftedUnit::Units_ShiftedUnit(System::String^ aname)
	: Macad::Occt::Units_Unit(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aname = (char*)(void*)Marshal::StringToHGlobalAnsi(aname);
	NativeInstance = new ::Units_ShiftedUnit(sz_aname);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aname);
}

Macad::Occt::Units_ShiftedUnit::Units_ShiftedUnit(Macad::Occt::Units_ShiftedUnit^ parameter1)
	: Macad::Occt::Units_Unit(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_ShiftedUnit(*(::Units_ShiftedUnit*)parameter1->NativeInstance);
}

void Macad::Occt::Units_ShiftedUnit::Move(double amove)
{
	((::Units_ShiftedUnit*)_NativeInstance)->Move(amove);
}

double Macad::Occt::Units_ShiftedUnit::Move()
{
	return ((::Units_ShiftedUnit*)_NativeInstance)->Move();
}

Macad::Occt::Units_Token^ Macad::Occt::Units_ShiftedUnit::Token()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_ShiftedUnit*)_NativeInstance)->Token();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

void Macad::Occt::Units_ShiftedUnit::Dump(int ashift, int alevel)
{
	((::Units_ShiftedUnit*)_NativeInstance)->Dump(ashift, alevel);
}


Macad::Occt::Units_ShiftedUnit^ Macad::Occt::Units_ShiftedUnit::CreateDowncasted(::Units_ShiftedUnit* instance)
{
	return gcnew Macad::Occt::Units_ShiftedUnit( instance );
}



//---------------------------------------------------------------------
//  Class  Units_Token
//---------------------------------------------------------------------

Macad::Occt::Units_Token::Units_Token()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_Token();
}

Macad::Occt::Units_Token::Units_Token(System::String^ aword)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aword = (char*)(void*)Marshal::StringToHGlobalAnsi(aword);
	NativeInstance = new ::Units_Token(sz_aword);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aword);
}

Macad::Occt::Units_Token::Units_Token(Macad::Occt::Units_Token^ atoken)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::Units_Token) h_atoken = atoken->NativeInstance;
	NativeInstance = new ::Units_Token(h_atoken);
	atoken->NativeInstance = h_atoken.get();
}

Macad::Occt::Units_Token::Units_Token(System::String^ aword, System::String^ amean)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aword = (char*)(void*)Marshal::StringToHGlobalAnsi(aword);
	const char* sz_amean = (char*)(void*)Marshal::StringToHGlobalAnsi(amean);
	NativeInstance = new ::Units_Token(sz_aword, sz_amean);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aword);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_amean);
}

Macad::Occt::Units_Token::Units_Token(System::String^ aword, System::String^ amean, double avalue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aword = (char*)(void*)Marshal::StringToHGlobalAnsi(aword);
	const char* sz_amean = (char*)(void*)Marshal::StringToHGlobalAnsi(amean);
	NativeInstance = new ::Units_Token(sz_aword, sz_amean, avalue);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aword);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_amean);
}

Macad::Occt::Units_Token::Units_Token(System::String^ aword, System::String^ amean, double avalue, Macad::Occt::Units_Dimensions^ adimension)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aword = (char*)(void*)Marshal::StringToHGlobalAnsi(aword);
	const char* sz_amean = (char*)(void*)Marshal::StringToHGlobalAnsi(amean);
	Handle(::Units_Dimensions) h_adimension = adimension->NativeInstance;
	NativeInstance = new ::Units_Token(sz_aword, sz_amean, avalue, h_adimension);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aword);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_amean);
	adimension->NativeInstance = h_adimension.get();
}

Macad::Occt::Units_Token^ Macad::Occt::Units_Token::Creates()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_Token*)_NativeInstance)->Creates();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

int Macad::Occt::Units_Token::Length()
{
	return ((::Units_Token*)_NativeInstance)->Length();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Units_Token::Word()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::Units_Token*)_NativeInstance)->Word();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Units_Token::Word(System::String^ aword)
{
	const char* sz_aword = (char*)(void*)Marshal::StringToHGlobalAnsi(aword);
	((::Units_Token*)_NativeInstance)->Word(sz_aword);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aword);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Units_Token::Mean()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::Units_Token*)_NativeInstance)->Mean();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Units_Token::Mean(System::String^ amean)
{
	const char* sz_amean = (char*)(void*)Marshal::StringToHGlobalAnsi(amean);
	((::Units_Token*)_NativeInstance)->Mean(sz_amean);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_amean);
}

double Macad::Occt::Units_Token::Value()
{
	return ((::Units_Token*)_NativeInstance)->Value();
}

void Macad::Occt::Units_Token::Value(double avalue)
{
	((::Units_Token*)_NativeInstance)->Value(avalue);
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units_Token::Dimensions()
{
	Handle(::Units_Dimensions) _result;
	_result = ((::Units_Token*)_NativeInstance)->Dimensions();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

void Macad::Occt::Units_Token::Dimensions(Macad::Occt::Units_Dimensions^ adimensions)
{
	Handle(::Units_Dimensions) h_adimensions = adimensions->NativeInstance;
	((::Units_Token*)_NativeInstance)->Dimensions(h_adimensions);
	adimensions->NativeInstance = h_adimensions.get();
}

void Macad::Occt::Units_Token::Update(System::String^ amean)
{
	const char* sz_amean = (char*)(void*)Marshal::StringToHGlobalAnsi(amean);
	((::Units_Token*)_NativeInstance)->Update(sz_amean);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_amean);
}

Macad::Occt::Units_Token^ Macad::Occt::Units_Token::Add(int aninteger)
{
	Handle(::Units_Token) _result;
	_result = ((::Units_Token*)_NativeInstance)->Add(aninteger);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_Token::Add(Macad::Occt::Units_Token^ atoken)
{
	Handle(::Units_Token) h_atoken = atoken->NativeInstance;
	Handle(::Units_Token) _result;
	_result = ((::Units_Token*)_NativeInstance)->Add(h_atoken);
	atoken->NativeInstance = h_atoken.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_Token::Subtract(Macad::Occt::Units_Token^ atoken)
{
	Handle(::Units_Token) h_atoken = atoken->NativeInstance;
	Handle(::Units_Token) _result;
	_result = ((::Units_Token*)_NativeInstance)->Subtract(h_atoken);
	atoken->NativeInstance = h_atoken.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_Token::Multiply(Macad::Occt::Units_Token^ atoken)
{
	Handle(::Units_Token) h_atoken = atoken->NativeInstance;
	Handle(::Units_Token) _result;
	_result = ((::Units_Token*)_NativeInstance)->Multiply(h_atoken);
	atoken->NativeInstance = h_atoken.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

double Macad::Occt::Units_Token::Multiplied(double avalue)
{
	return ((::Units_Token*)_NativeInstance)->Multiplied(avalue);
}

Macad::Occt::Units_Token^ Macad::Occt::Units_Token::Divide(Macad::Occt::Units_Token^ atoken)
{
	Handle(::Units_Token) h_atoken = atoken->NativeInstance;
	Handle(::Units_Token) _result;
	_result = ((::Units_Token*)_NativeInstance)->Divide(h_atoken);
	atoken->NativeInstance = h_atoken.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

double Macad::Occt::Units_Token::Divided(double avalue)
{
	return ((::Units_Token*)_NativeInstance)->Divided(avalue);
}

Macad::Occt::Units_Token^ Macad::Occt::Units_Token::Power(Macad::Occt::Units_Token^ atoken)
{
	Handle(::Units_Token) h_atoken = atoken->NativeInstance;
	Handle(::Units_Token) _result;
	_result = ((::Units_Token*)_NativeInstance)->Power(h_atoken);
	atoken->NativeInstance = h_atoken.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_Token::Power(double anexponent)
{
	Handle(::Units_Token) _result;
	_result = ((::Units_Token*)_NativeInstance)->Power(anexponent);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

bool Macad::Occt::Units_Token::IsEqual(System::String^ astring)
{
	const char* sz_astring = (char*)(void*)Marshal::StringToHGlobalAnsi(astring);
	return ((::Units_Token*)_NativeInstance)->IsEqual(sz_astring);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_astring);
}

bool Macad::Occt::Units_Token::IsEqual(Macad::Occt::Units_Token^ atoken)
{
	Handle(::Units_Token) h_atoken = atoken->NativeInstance;
	return ((::Units_Token*)_NativeInstance)->IsEqual(h_atoken);
	atoken->NativeInstance = h_atoken.get();
}

bool Macad::Occt::Units_Token::IsNotEqual(System::String^ astring)
{
	const char* sz_astring = (char*)(void*)Marshal::StringToHGlobalAnsi(astring);
	return ((::Units_Token*)_NativeInstance)->IsNotEqual(sz_astring);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_astring);
}

bool Macad::Occt::Units_Token::IsNotEqual(Macad::Occt::Units_Token^ atoken)
{
	Handle(::Units_Token) h_atoken = atoken->NativeInstance;
	return ((::Units_Token*)_NativeInstance)->IsNotEqual(h_atoken);
	atoken->NativeInstance = h_atoken.get();
}

bool Macad::Occt::Units_Token::IsLessOrEqual(System::String^ astring)
{
	const char* sz_astring = (char*)(void*)Marshal::StringToHGlobalAnsi(astring);
	return ((::Units_Token*)_NativeInstance)->IsLessOrEqual(sz_astring);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_astring);
}

bool Macad::Occt::Units_Token::IsGreater(System::String^ astring)
{
	const char* sz_astring = (char*)(void*)Marshal::StringToHGlobalAnsi(astring);
	return ((::Units_Token*)_NativeInstance)->IsGreater(sz_astring);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_astring);
}

bool Macad::Occt::Units_Token::IsGreater(Macad::Occt::Units_Token^ atoken)
{
	Handle(::Units_Token) h_atoken = atoken->NativeInstance;
	return ((::Units_Token*)_NativeInstance)->IsGreater(h_atoken);
	atoken->NativeInstance = h_atoken.get();
}

bool Macad::Occt::Units_Token::IsGreaterOrEqual(Macad::Occt::Units_Token^ atoken)
{
	Handle(::Units_Token) h_atoken = atoken->NativeInstance;
	return ((::Units_Token*)_NativeInstance)->IsGreaterOrEqual(h_atoken);
	atoken->NativeInstance = h_atoken.get();
}

void Macad::Occt::Units_Token::Dump(int ashift, int alevel)
{
	((::Units_Token*)_NativeInstance)->Dump(ashift, alevel);
}


Macad::Occt::Units_Token^ Macad::Occt::Units_Token::CreateDowncasted(::Units_Token* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Units_ShiftedToken)))
		return Macad::Occt::Units_ShiftedToken::CreateDowncasted((::Units_ShiftedToken*)instance);

	return gcnew Macad::Occt::Units_Token( instance );
}



//---------------------------------------------------------------------
//  Class  Units_ShiftedToken
//---------------------------------------------------------------------

Macad::Occt::Units_ShiftedToken::Units_ShiftedToken(System::String^ aword, System::String^ amean, double avalue, double amove, Macad::Occt::Units_Dimensions^ adimensions)
	: Macad::Occt::Units_Token(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aword = (char*)(void*)Marshal::StringToHGlobalAnsi(aword);
	const char* sz_amean = (char*)(void*)Marshal::StringToHGlobalAnsi(amean);
	Handle(::Units_Dimensions) h_adimensions = adimensions->NativeInstance;
	NativeInstance = new ::Units_ShiftedToken(sz_aword, sz_amean, avalue, amove, h_adimensions);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aword);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_amean);
	adimensions->NativeInstance = h_adimensions.get();
}

Macad::Occt::Units_ShiftedToken::Units_ShiftedToken(Macad::Occt::Units_ShiftedToken^ parameter1)
	: Macad::Occt::Units_Token(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_ShiftedToken(*(::Units_ShiftedToken*)parameter1->NativeInstance);
}

Macad::Occt::Units_Token^ Macad::Occt::Units_ShiftedToken::Creates()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_ShiftedToken*)_NativeInstance)->Creates();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

double Macad::Occt::Units_ShiftedToken::Move()
{
	return ((::Units_ShiftedToken*)_NativeInstance)->Move();
}

double Macad::Occt::Units_ShiftedToken::Multiplied(double avalue)
{
	return ((::Units_ShiftedToken*)_NativeInstance)->Multiplied(avalue);
}

double Macad::Occt::Units_ShiftedToken::Divided(double avalue)
{
	return ((::Units_ShiftedToken*)_NativeInstance)->Divided(avalue);
}

void Macad::Occt::Units_ShiftedToken::Dump(int ashift, int alevel)
{
	((::Units_ShiftedToken*)_NativeInstance)->Dump(ashift, alevel);
}


Macad::Occt::Units_ShiftedToken^ Macad::Occt::Units_ShiftedToken::CreateDowncasted(::Units_ShiftedToken* instance)
{
	return gcnew Macad::Occt::Units_ShiftedToken( instance );
}



//---------------------------------------------------------------------
//  Class  Units_UnitsSystem
//---------------------------------------------------------------------

Macad::Occt::Units_UnitsSystem::Units_UnitsSystem()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_UnitsSystem();
}

Macad::Occt::Units_UnitsSystem::Units_UnitsSystem(System::String^ aName, bool Verbose)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aName = (char*)(void*)Marshal::StringToHGlobalAnsi(aName);
	NativeInstance = new ::Units_UnitsSystem(sz_aName, Verbose);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aName);
}

Macad::Occt::Units_UnitsSystem::Units_UnitsSystem(System::String^ aName)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aName = (char*)(void*)Marshal::StringToHGlobalAnsi(aName);
	NativeInstance = new ::Units_UnitsSystem(sz_aName, false);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aName);
}

Macad::Occt::Units_UnitsSystem::Units_UnitsSystem(Macad::Occt::Units_UnitsSystem^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_UnitsSystem(*(::Units_UnitsSystem*)parameter1->NativeInstance);
}

Macad::Occt::Units_QuantitiesSequence^ Macad::Occt::Units_UnitsSystem::QuantitiesSequence()
{
	Handle(::Units_QuantitiesSequence) _result;
	_result = ((::Units_UnitsSystem*)_NativeInstance)->QuantitiesSequence();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_QuantitiesSequence::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HSequenceOfInteger^ Macad::Occt::Units_UnitsSystem::ActiveUnitsSequence()
{
	Handle(::TColStd_HSequenceOfInteger) _result;
	_result = ((::Units_UnitsSystem*)_NativeInstance)->ActiveUnitsSequence();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfInteger::CreateDowncasted( _result.get());
}

void Macad::Occt::Units_UnitsSystem::Specify(System::String^ aquantity, System::String^ aunit)
{
	const char* sz_aquantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aquantity);
	const char* sz_aunit = (char*)(void*)Marshal::StringToHGlobalAnsi(aunit);
	((::Units_UnitsSystem*)_NativeInstance)->Specify(sz_aquantity, sz_aunit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aquantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aunit);
}

void Macad::Occt::Units_UnitsSystem::Remove(System::String^ aquantity, System::String^ aunit)
{
	const char* sz_aquantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aquantity);
	const char* sz_aunit = (char*)(void*)Marshal::StringToHGlobalAnsi(aunit);
	((::Units_UnitsSystem*)_NativeInstance)->Remove(sz_aquantity, sz_aunit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aquantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aunit);
}

void Macad::Occt::Units_UnitsSystem::Activate(System::String^ aquantity, System::String^ aunit)
{
	const char* sz_aquantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aquantity);
	const char* sz_aunit = (char*)(void*)Marshal::StringToHGlobalAnsi(aunit);
	((::Units_UnitsSystem*)_NativeInstance)->Activate(sz_aquantity, sz_aunit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aquantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aunit);
}

void Macad::Occt::Units_UnitsSystem::Activates()
{
	((::Units_UnitsSystem*)_NativeInstance)->Activates();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Units_UnitsSystem::ActiveUnit(System::String^ aquantity)
{
	const char* sz_aquantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aquantity);
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::Units_UnitsSystem*)_NativeInstance)->ActiveUnit(sz_aquantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aquantity);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

double Macad::Occt::Units_UnitsSystem::ConvertValueToUserSystem(System::String^ aquantity, double avalue, System::String^ aunit)
{
	const char* sz_aquantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aquantity);
	const char* sz_aunit = (char*)(void*)Marshal::StringToHGlobalAnsi(aunit);
	return ((::Units_UnitsSystem*)_NativeInstance)->ConvertValueToUserSystem(sz_aquantity, avalue, sz_aunit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aquantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aunit);
}

double Macad::Occt::Units_UnitsSystem::ConvertSIValueToUserSystem(System::String^ aquantity, double avalue)
{
	const char* sz_aquantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aquantity);
	return ((::Units_UnitsSystem*)_NativeInstance)->ConvertSIValueToUserSystem(sz_aquantity, avalue);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aquantity);
}

double Macad::Occt::Units_UnitsSystem::ConvertUserSystemValueToSI(System::String^ aquantity, double avalue)
{
	const char* sz_aquantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aquantity);
	return ((::Units_UnitsSystem*)_NativeInstance)->ConvertUserSystemValueToSI(sz_aquantity, avalue);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aquantity);
}

void Macad::Occt::Units_UnitsSystem::Dump()
{
	((::Units_UnitsSystem*)_NativeInstance)->Dump();
}

bool Macad::Occt::Units_UnitsSystem::IsEmpty()
{
	return ((::Units_UnitsSystem*)_NativeInstance)->IsEmpty();
}


Macad::Occt::Units_UnitsSystem^ Macad::Occt::Units_UnitsSystem::CreateDowncasted(::Units_UnitsSystem* instance)
{
	return gcnew Macad::Occt::Units_UnitsSystem( instance );
}



//---------------------------------------------------------------------
//  Class  Units_Explorer
//---------------------------------------------------------------------

Macad::Occt::Units_Explorer::Units_Explorer()
	: BaseClass<::Units_Explorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units_Explorer();
}

Macad::Occt::Units_Explorer::Units_Explorer(Macad::Occt::Units_UnitsSystem^ aunitssystem)
	: BaseClass<::Units_Explorer>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Units_UnitsSystem) h_aunitssystem = aunitssystem->NativeInstance;
	_NativeInstance = new ::Units_Explorer(h_aunitssystem);
	aunitssystem->NativeInstance = h_aunitssystem.get();
}

Macad::Occt::Units_Explorer::Units_Explorer(Macad::Occt::Units_UnitsDictionary^ aunitsdictionary)
	: BaseClass<::Units_Explorer>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Units_UnitsDictionary) h_aunitsdictionary = aunitsdictionary->NativeInstance;
	_NativeInstance = new ::Units_Explorer(h_aunitsdictionary);
	aunitsdictionary->NativeInstance = h_aunitsdictionary.get();
}

Macad::Occt::Units_Explorer::Units_Explorer(Macad::Occt::Units_UnitsSystem^ aunitssystem, System::String^ aquantity)
	: BaseClass<::Units_Explorer>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Units_UnitsSystem) h_aunitssystem = aunitssystem->NativeInstance;
	const char* sz_aquantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aquantity);
	_NativeInstance = new ::Units_Explorer(h_aunitssystem, sz_aquantity);
	aunitssystem->NativeInstance = h_aunitssystem.get();
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aquantity);
}

Macad::Occt::Units_Explorer::Units_Explorer(Macad::Occt::Units_UnitsDictionary^ aunitsdictionary, System::String^ aquantity)
	: BaseClass<::Units_Explorer>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Units_UnitsDictionary) h_aunitsdictionary = aunitsdictionary->NativeInstance;
	const char* sz_aquantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aquantity);
	_NativeInstance = new ::Units_Explorer(h_aunitsdictionary, sz_aquantity);
	aunitsdictionary->NativeInstance = h_aunitsdictionary.get();
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aquantity);
}

Macad::Occt::Units_Explorer::Units_Explorer(Macad::Occt::Units_Explorer^ parameter1)
	: BaseClass<::Units_Explorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units_Explorer(*(::Units_Explorer*)parameter1->NativeInstance);
}

void Macad::Occt::Units_Explorer::Init(Macad::Occt::Units_UnitsSystem^ aunitssystem)
{
	Handle(::Units_UnitsSystem) h_aunitssystem = aunitssystem->NativeInstance;
	((::Units_Explorer*)_NativeInstance)->Init(h_aunitssystem);
	aunitssystem->NativeInstance = h_aunitssystem.get();
}

void Macad::Occt::Units_Explorer::Init(Macad::Occt::Units_UnitsDictionary^ aunitsdictionary)
{
	Handle(::Units_UnitsDictionary) h_aunitsdictionary = aunitsdictionary->NativeInstance;
	((::Units_Explorer*)_NativeInstance)->Init(h_aunitsdictionary);
	aunitsdictionary->NativeInstance = h_aunitsdictionary.get();
}

void Macad::Occt::Units_Explorer::Init(Macad::Occt::Units_UnitsSystem^ aunitssystem, System::String^ aquantity)
{
	Handle(::Units_UnitsSystem) h_aunitssystem = aunitssystem->NativeInstance;
	const char* sz_aquantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aquantity);
	((::Units_Explorer*)_NativeInstance)->Init(h_aunitssystem, sz_aquantity);
	aunitssystem->NativeInstance = h_aunitssystem.get();
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aquantity);
}

void Macad::Occt::Units_Explorer::Init(Macad::Occt::Units_UnitsDictionary^ aunitsdictionary, System::String^ aquantity)
{
	Handle(::Units_UnitsDictionary) h_aunitsdictionary = aunitsdictionary->NativeInstance;
	const char* sz_aquantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aquantity);
	((::Units_Explorer*)_NativeInstance)->Init(h_aunitsdictionary, sz_aquantity);
	aunitsdictionary->NativeInstance = h_aunitsdictionary.get();
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aquantity);
}

bool Macad::Occt::Units_Explorer::MoreQuantity()
{
	return ((::Units_Explorer*)_NativeInstance)->MoreQuantity();
}

void Macad::Occt::Units_Explorer::NextQuantity()
{
	((::Units_Explorer*)_NativeInstance)->NextQuantity();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Units_Explorer::Quantity()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::Units_Explorer*)_NativeInstance)->Quantity();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::Units_Explorer::MoreUnit()
{
	return ((::Units_Explorer*)_NativeInstance)->MoreUnit();
}

void Macad::Occt::Units_Explorer::NextUnit()
{
	((::Units_Explorer*)_NativeInstance)->NextUnit();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Units_Explorer::Unit()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::Units_Explorer*)_NativeInstance)->Unit();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::Units_Explorer::IsActive()
{
	return ((::Units_Explorer*)_NativeInstance)->IsActive();
}




//---------------------------------------------------------------------
//  Class  Units_Sentence
//---------------------------------------------------------------------

Macad::Occt::Units_Sentence::Units_Sentence(Macad::Occt::Units_Lexicon^ alexicon, System::String^ astring)
	: BaseClass<::Units_Sentence>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Units_Lexicon) h_alexicon = alexicon->NativeInstance;
	const char* sz_astring = (char*)(void*)Marshal::StringToHGlobalAnsi(astring);
	_NativeInstance = new ::Units_Sentence(h_alexicon, sz_astring);
	alexicon->NativeInstance = h_alexicon.get();
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_astring);
}

Macad::Occt::Units_Sentence::Units_Sentence(Macad::Occt::Units_Sentence^ parameter1)
	: BaseClass<::Units_Sentence>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units_Sentence(*(::Units_Sentence*)parameter1->NativeInstance);
}

void Macad::Occt::Units_Sentence::SetConstants()
{
	((::Units_Sentence*)_NativeInstance)->SetConstants();
}

Macad::Occt::Units_TokensSequence^ Macad::Occt::Units_Sentence::Sequence()
{
	Handle(::Units_TokensSequence) _result;
	_result = ((::Units_Sentence*)_NativeInstance)->Sequence();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_TokensSequence::CreateDowncasted( _result.get());
}

void Macad::Occt::Units_Sentence::Sequence(Macad::Occt::Units_TokensSequence^ asequenceoftokens)
{
	Handle(::Units_TokensSequence) h_asequenceoftokens = asequenceoftokens->NativeInstance;
	((::Units_Sentence*)_NativeInstance)->Sequence(h_asequenceoftokens);
	asequenceoftokens->NativeInstance = h_asequenceoftokens.get();
}

Macad::Occt::Units_Token^ Macad::Occt::Units_Sentence::Evaluate()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_Sentence*)_NativeInstance)->Evaluate();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

bool Macad::Occt::Units_Sentence::IsDone()
{
	return ((::Units_Sentence*)_NativeInstance)->IsDone();
}

void Macad::Occt::Units_Sentence::Dump()
{
	((::Units_Sentence*)_NativeInstance)->Dump();
}




//---------------------------------------------------------------------
//  Class  Units_MathSentence
//---------------------------------------------------------------------

Macad::Occt::Units_MathSentence::Units_MathSentence(System::String^ astring)
	: Macad::Occt::Units_Sentence(BaseClass::InitMode::Uninitialized)
{
	const char* sz_astring = (char*)(void*)Marshal::StringToHGlobalAnsi(astring);
	_NativeInstance = new ::Units_MathSentence(sz_astring);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_astring);
}

Macad::Occt::Units_MathSentence::Units_MathSentence(Macad::Occt::Units_MathSentence^ parameter1)
	: Macad::Occt::Units_Sentence(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units_MathSentence(*(::Units_MathSentence*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Units_UnitSentence
//---------------------------------------------------------------------

Macad::Occt::Units_UnitSentence::Units_UnitSentence(System::String^ astring)
	: Macad::Occt::Units_Sentence(BaseClass::InitMode::Uninitialized)
{
	const char* sz_astring = (char*)(void*)Marshal::StringToHGlobalAnsi(astring);
	_NativeInstance = new ::Units_UnitSentence(sz_astring);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_astring);
}

Macad::Occt::Units_UnitSentence::Units_UnitSentence(System::String^ astring, Macad::Occt::Units_QuantitiesSequence^ aquantitiessequence)
	: Macad::Occt::Units_Sentence(BaseClass::InitMode::Uninitialized)
{
	const char* sz_astring = (char*)(void*)Marshal::StringToHGlobalAnsi(astring);
	Handle(::Units_QuantitiesSequence) h_aquantitiessequence = aquantitiessequence->NativeInstance;
	_NativeInstance = new ::Units_UnitSentence(sz_astring, h_aquantitiessequence);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_astring);
	aquantitiessequence->NativeInstance = h_aquantitiessequence.get();
}

Macad::Occt::Units_UnitSentence::Units_UnitSentence(Macad::Occt::Units_UnitSentence^ parameter1)
	: Macad::Occt::Units_Sentence(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units_UnitSentence(*(::Units_UnitSentence*)parameter1->NativeInstance);
}

void Macad::Occt::Units_UnitSentence::Analyse()
{
	((::Units_UnitSentence*)_NativeInstance)->Analyse();
}

void Macad::Occt::Units_UnitSentence::SetUnits(Macad::Occt::Units_QuantitiesSequence^ aquantitiessequence)
{
	Handle(::Units_QuantitiesSequence) h_aquantitiessequence = aquantitiessequence->NativeInstance;
	((::Units_UnitSentence*)_NativeInstance)->SetUnits(h_aquantitiessequence);
	aquantitiessequence->NativeInstance = h_aquantitiessequence.get();
}




//---------------------------------------------------------------------
//  Class  Units_UnitsLexicon
//---------------------------------------------------------------------

Macad::Occt::Units_UnitsLexicon::Units_UnitsLexicon()
	: Macad::Occt::Units_Lexicon(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_UnitsLexicon();
}

Macad::Occt::Units_UnitsLexicon::Units_UnitsLexicon(Macad::Occt::Units_UnitsLexicon^ parameter1)
	: Macad::Occt::Units_Lexicon(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_UnitsLexicon(*(::Units_UnitsLexicon*)parameter1->NativeInstance);
}

void Macad::Occt::Units_UnitsLexicon::Creates(bool amode)
{
	((::Units_UnitsLexicon*)_NativeInstance)->Creates(amode);
}

void Macad::Occt::Units_UnitsLexicon::Creates()
{
	((::Units_UnitsLexicon*)_NativeInstance)->Creates(true);
}

void Macad::Occt::Units_UnitsLexicon::Dump()
{
	((::Units_UnitsLexicon*)_NativeInstance)->Dump();
}


Macad::Occt::Units_UnitsLexicon^ Macad::Occt::Units_UnitsLexicon::CreateDowncasted(::Units_UnitsLexicon* instance)
{
	return gcnew Macad::Occt::Units_UnitsLexicon( instance );
}



//---------------------------------------------------------------------
//  Class  Units_Measurement
//---------------------------------------------------------------------

Macad::Occt::Units_Measurement::Units_Measurement()
	: BaseClass<::Units_Measurement>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units_Measurement();
}

Macad::Occt::Units_Measurement::Units_Measurement(double avalue, Macad::Occt::Units_Token^ atoken)
	: BaseClass<::Units_Measurement>(BaseClass::InitMode::Uninitialized)
{
	Handle(::Units_Token) h_atoken = atoken->NativeInstance;
	_NativeInstance = new ::Units_Measurement(avalue, h_atoken);
	atoken->NativeInstance = h_atoken.get();
}

Macad::Occt::Units_Measurement::Units_Measurement(double avalue, System::String^ aunit)
	: BaseClass<::Units_Measurement>(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aunit = (char*)(void*)Marshal::StringToHGlobalAnsi(aunit);
	_NativeInstance = new ::Units_Measurement(avalue, sz_aunit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aunit);
}

Macad::Occt::Units_Measurement::Units_Measurement(Macad::Occt::Units_Measurement^ parameter1)
	: BaseClass<::Units_Measurement>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units_Measurement(*(::Units_Measurement*)parameter1->NativeInstance);
}

void Macad::Occt::Units_Measurement::Convert(System::String^ aunit)
{
	const char* sz_aunit = (char*)(void*)Marshal::StringToHGlobalAnsi(aunit);
	((::Units_Measurement*)_NativeInstance)->Convert(sz_aunit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aunit);
}

Macad::Occt::Units_Measurement^ Macad::Occt::Units_Measurement::Integer()
{
	::Units_Measurement* _result = new ::Units_Measurement();
	*_result = ((::Units_Measurement*)_NativeInstance)->Integer();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_Measurement(_result);
}

Macad::Occt::Units_Measurement^ Macad::Occt::Units_Measurement::Fractional()
{
	::Units_Measurement* _result = new ::Units_Measurement();
	*_result = ((::Units_Measurement*)_NativeInstance)->Fractional();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_Measurement(_result);
}

double Macad::Occt::Units_Measurement::Measurement()
{
	return ((::Units_Measurement*)_NativeInstance)->Measurement();
}

Macad::Occt::Units_Token^ Macad::Occt::Units_Measurement::Token()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_Measurement*)_NativeInstance)->Token();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Measurement^ Macad::Occt::Units_Measurement::Add(Macad::Occt::Units_Measurement^ ameasurement)
{
	::Units_Measurement* _result = new ::Units_Measurement();
	*_result = ((::Units_Measurement*)_NativeInstance)->Add(*(::Units_Measurement*)ameasurement->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_Measurement(_result);
}

Macad::Occt::Units_Measurement^ Macad::Occt::Units_Measurement::Subtract(Macad::Occt::Units_Measurement^ ameasurement)
{
	::Units_Measurement* _result = new ::Units_Measurement();
	*_result = ((::Units_Measurement*)_NativeInstance)->Subtract(*(::Units_Measurement*)ameasurement->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_Measurement(_result);
}

Macad::Occt::Units_Measurement^ Macad::Occt::Units_Measurement::Multiply(Macad::Occt::Units_Measurement^ ameasurement)
{
	::Units_Measurement* _result = new ::Units_Measurement();
	*_result = ((::Units_Measurement*)_NativeInstance)->Multiply(*(::Units_Measurement*)ameasurement->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_Measurement(_result);
}

Macad::Occt::Units_Measurement^ Macad::Occt::Units_Measurement::Multiply(double avalue)
{
	::Units_Measurement* _result = new ::Units_Measurement();
	*_result = ((::Units_Measurement*)_NativeInstance)->Multiply(avalue);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_Measurement(_result);
}

Macad::Occt::Units_Measurement^ Macad::Occt::Units_Measurement::Divide(Macad::Occt::Units_Measurement^ ameasurement)
{
	::Units_Measurement* _result = new ::Units_Measurement();
	*_result = ((::Units_Measurement*)_NativeInstance)->Divide(*(::Units_Measurement*)ameasurement->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_Measurement(_result);
}

Macad::Occt::Units_Measurement^ Macad::Occt::Units_Measurement::Divide(double avalue)
{
	::Units_Measurement* _result = new ::Units_Measurement();
	*_result = ((::Units_Measurement*)_NativeInstance)->Divide(avalue);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_Measurement(_result);
}

Macad::Occt::Units_Measurement^ Macad::Occt::Units_Measurement::Power(double anexponent)
{
	::Units_Measurement* _result = new ::Units_Measurement();
	*_result = ((::Units_Measurement*)_NativeInstance)->Power(anexponent);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_Measurement(_result);
}

bool Macad::Occt::Units_Measurement::HasToken()
{
	return ((::Units_Measurement*)_NativeInstance)->HasToken();
}

void Macad::Occt::Units_Measurement::Dump()
{
	((::Units_Measurement*)_NativeInstance)->Dump();
}




//---------------------------------------------------------------------
//  Class  Units
//---------------------------------------------------------------------

Macad::Occt::Units::Units()
	: BaseClass<::Units>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units();
}

Macad::Occt::Units::Units(Macad::Occt::Units^ parameter1)
	: BaseClass<::Units>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Units(*(::Units*)parameter1->NativeInstance);
}

void Macad::Occt::Units::UnitsFile(System::String^ afile)
{
	const char* sz_afile = (char*)(void*)Marshal::StringToHGlobalAnsi(afile);
	::Units::UnitsFile(sz_afile);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_afile);
}

void Macad::Occt::Units::LexiconFile(System::String^ afile)
{
	const char* sz_afile = (char*)(void*)Marshal::StringToHGlobalAnsi(afile);
	::Units::LexiconFile(sz_afile);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_afile);
}

Macad::Occt::Units_UnitsDictionary^ Macad::Occt::Units::DictionaryOfUnits(bool amode)
{
	Handle(::Units_UnitsDictionary) _result;
	_result = ::Units::DictionaryOfUnits(amode);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_UnitsDictionary::CreateDowncasted( _result.get());
}

Macad::Occt::Units_UnitsDictionary^ Macad::Occt::Units::DictionaryOfUnits()
{
	Handle(::Units_UnitsDictionary) _result;
	_result = ::Units::DictionaryOfUnits(false);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_UnitsDictionary::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units::Quantity(System::String^ aquantity)
{
	const char* sz_aquantity = (char*)(void*)Marshal::StringToHGlobalAnsi(aquantity);
	Handle(::Units_Quantity) _result;
	_result = ::Units::Quantity(sz_aquantity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aquantity);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

System::String^ Macad::Occt::Units::FirstQuantity(System::String^ aunit)
{
	const char* sz_aunit = (char*)(void*)Marshal::StringToHGlobalAnsi(aunit);
	Standard_CString _result;
	_result = ::Units::FirstQuantity(sz_aunit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aunit);
	return gcnew System::String(_result);
}

Macad::Occt::Units_Lexicon^ Macad::Occt::Units::LexiconUnits(bool amode)
{
	Handle(::Units_Lexicon) _result;
	_result = ::Units::LexiconUnits(amode);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Lexicon::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Lexicon^ Macad::Occt::Units::LexiconUnits()
{
	Handle(::Units_Lexicon) _result;
	_result = ::Units::LexiconUnits(true);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Lexicon::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Lexicon^ Macad::Occt::Units::LexiconFormula()
{
	Handle(::Units_Lexicon) _result;
	_result = ::Units::LexiconFormula();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Lexicon::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units::NullDimensions()
{
	Handle(::Units_Dimensions) _result;
	_result = ::Units::NullDimensions();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}

double Macad::Occt::Units::Convert(double avalue, System::String^ afirstunit, System::String^ asecondunit)
{
	const char* sz_afirstunit = (char*)(void*)Marshal::StringToHGlobalAnsi(afirstunit);
	const char* sz_asecondunit = (char*)(void*)Marshal::StringToHGlobalAnsi(asecondunit);
	return ::Units::Convert(avalue, sz_afirstunit, sz_asecondunit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_afirstunit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_asecondunit);
}

double Macad::Occt::Units::ToSI(double aData, System::String^ aUnit)
{
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	return ::Units::ToSI(aData, sz_aUnit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
}

double Macad::Occt::Units::ToSI(double aData, System::String^ aUnit, Macad::Occt::Units_Dimensions^ aDim)
{
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	Handle(::Units_Dimensions) h_aDim = aDim->NativeInstance;
	return ::Units::ToSI(aData, sz_aUnit, h_aDim);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
	aDim->NativeInstance = h_aDim.get();
}

double Macad::Occt::Units::FromSI(double aData, System::String^ aUnit)
{
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	return ::Units::FromSI(aData, sz_aUnit);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
}

double Macad::Occt::Units::FromSI(double aData, System::String^ aUnit, Macad::Occt::Units_Dimensions^ aDim)
{
	const char* sz_aUnit = (char*)(void*)Marshal::StringToHGlobalAnsi(aUnit);
	Handle(::Units_Dimensions) h_aDim = aDim->NativeInstance;
	return ::Units::FromSI(aData, sz_aUnit, h_aDim);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aUnit);
	aDim->NativeInstance = h_aDim.get();
}

Macad::Occt::Units_Dimensions^ Macad::Occt::Units::Dimensions(System::String^ aType)
{
	const char* sz_aType = (char*)(void*)Marshal::StringToHGlobalAnsi(aType);
	Handle(::Units_Dimensions) _result;
	_result = ::Units::Dimensions(sz_aType);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aType);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Dimensions::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  Units_UnitsSequence
//---------------------------------------------------------------------

Macad::Occt::Units_UnitsSequence::Units_UnitsSequence()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_UnitsSequence();
}

Macad::Occt::Units_UnitsSequence::Units_UnitsSequence(Macad::Occt::Units_UtsSequence^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_UnitsSequence(*(::Units_UtsSequence*)theOther->NativeInstance);
}

Macad::Occt::Units_UnitsSequence::Units_UnitsSequence(Macad::Occt::Units_UnitsSequence^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_UnitsSequence(*(::Units_UnitsSequence*)parameter1->NativeInstance);
}

Macad::Occt::Units_UtsSequence^ Macad::Occt::Units_UnitsSequence::Sequence()
{
	::Units_UtsSequence* _result = new ::Units_UtsSequence();
	*_result =  (::Units_UtsSequence)((::Units_UnitsSequence*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_UtsSequence(_result);
}

void Macad::Occt::Units_UnitsSequence::Append(Macad::Occt::Units_Unit^ theItem)
{
	Handle(::Units_Unit) h_theItem = theItem->NativeInstance;
	((::Units_UnitsSequence*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_UnitsSequence::Append(Macad::Occt::Units_UtsSequence^ theSequence)
{
	((::Units_UnitsSequence*)_NativeInstance)->Append(*(::Units_UtsSequence*)theSequence->NativeInstance);
}

Macad::Occt::Units_UtsSequence^ Macad::Occt::Units_UnitsSequence::ChangeSequence()
{
	::Units_UtsSequence* _result = new ::Units_UtsSequence();
	*_result = ((::Units_UnitsSequence*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_UtsSequence(_result);
}

int Macad::Occt::Units_UnitsSequence::Size()
{
	return ((::Units_UnitsSequence*)_NativeInstance)->Size();
}

int Macad::Occt::Units_UnitsSequence::Length()
{
	return ((::Units_UnitsSequence*)_NativeInstance)->Length();
}

int Macad::Occt::Units_UnitsSequence::Lower()
{
	return ((::Units_UnitsSequence*)_NativeInstance)->Lower();
}

int Macad::Occt::Units_UnitsSequence::Upper()
{
	return ((::Units_UnitsSequence*)_NativeInstance)->Upper();
}

bool Macad::Occt::Units_UnitsSequence::IsEmpty()
{
	return ((::Units_UnitsSequence*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Units_UnitsSequence::Reverse()
{
	((::Units_UnitsSequence*)_NativeInstance)->Reverse();
}

void Macad::Occt::Units_UnitsSequence::Exchange(int I, int J)
{
	((::Units_UnitsSequence*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Units_UnitsSequence::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Units_UnitsSequence*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Units_UnitsSequence::Clear()
{
	((::Units_UnitsSequence*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::Units_UnitsSequence::Remove(int theIndex)
{
	((::Units_UnitsSequence*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Units_UnitsSequence::Remove(int theFromIndex, int theToIndex)
{
	((::Units_UnitsSequence*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Units_UnitsSequence::Prepend(Macad::Occt::Units_Unit^ theItem)
{
	Handle(::Units_Unit) h_theItem = theItem->NativeInstance;
	((::Units_UnitsSequence*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_UnitsSequence::InsertBefore(int theIndex, Macad::Occt::Units_Unit^ theItem)
{
	Handle(::Units_Unit) h_theItem = theItem->NativeInstance;
	((::Units_UnitsSequence*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_UnitsSequence::InsertAfter(int theIndex, Macad::Occt::Units_Unit^ theItem)
{
	Handle(::Units_Unit) h_theItem = theItem->NativeInstance;
	((::Units_UnitsSequence*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

Macad::Occt::Units_Unit^ Macad::Occt::Units_UnitsSequence::First()
{
	Handle(::Units_Unit) _result;
	_result = ((::Units_UnitsSequence*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Unit::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Unit^ Macad::Occt::Units_UnitsSequence::ChangeFirst()
{
	Handle(::Units_Unit) _result;
	_result = ((::Units_UnitsSequence*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Unit::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Unit^ Macad::Occt::Units_UnitsSequence::Last()
{
	Handle(::Units_Unit) _result;
	_result = ((::Units_UnitsSequence*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Unit::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Unit^ Macad::Occt::Units_UnitsSequence::ChangeLast()
{
	Handle(::Units_Unit) _result;
	_result = ((::Units_UnitsSequence*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Unit::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Unit^ Macad::Occt::Units_UnitsSequence::Value(int theIndex)
{
	Handle(::Units_Unit) _result;
	_result = ((::Units_UnitsSequence*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Unit::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Unit^ Macad::Occt::Units_UnitsSequence::ChangeValue(int theIndex)
{
	Handle(::Units_Unit) _result;
	_result = ((::Units_UnitsSequence*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Unit::CreateDowncasted( _result.get());
}

void Macad::Occt::Units_UnitsSequence::SetValue(int theIndex, Macad::Occt::Units_Unit^ theItem)
{
	Handle(::Units_Unit) h_theItem = theItem->NativeInstance;
	((::Units_UnitsSequence*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}


Macad::Occt::Units_UnitsSequence^ Macad::Occt::Units_UnitsSequence::CreateDowncasted(::Units_UnitsSequence* instance)
{
	return gcnew Macad::Occt::Units_UnitsSequence( instance );
}



//---------------------------------------------------------------------
//  Class  Units_QuantitiesSequence
//---------------------------------------------------------------------

Macad::Occt::Units_QuantitiesSequence::Units_QuantitiesSequence()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_QuantitiesSequence();
}

Macad::Occt::Units_QuantitiesSequence::Units_QuantitiesSequence(Macad::Occt::Units_QtsSequence^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_QuantitiesSequence(*(::Units_QtsSequence*)theOther->NativeInstance);
}

Macad::Occt::Units_QuantitiesSequence::Units_QuantitiesSequence(Macad::Occt::Units_QuantitiesSequence^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_QuantitiesSequence(*(::Units_QuantitiesSequence*)parameter1->NativeInstance);
}

Macad::Occt::Units_QtsSequence^ Macad::Occt::Units_QuantitiesSequence::Sequence()
{
	::Units_QtsSequence* _result = new ::Units_QtsSequence();
	*_result =  (::Units_QtsSequence)((::Units_QuantitiesSequence*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_QtsSequence(_result);
}

void Macad::Occt::Units_QuantitiesSequence::Append(Macad::Occt::Units_Quantity^ theItem)
{
	Handle(::Units_Quantity) h_theItem = theItem->NativeInstance;
	((::Units_QuantitiesSequence*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_QuantitiesSequence::Append(Macad::Occt::Units_QtsSequence^ theSequence)
{
	((::Units_QuantitiesSequence*)_NativeInstance)->Append(*(::Units_QtsSequence*)theSequence->NativeInstance);
}

Macad::Occt::Units_QtsSequence^ Macad::Occt::Units_QuantitiesSequence::ChangeSequence()
{
	::Units_QtsSequence* _result = new ::Units_QtsSequence();
	*_result = ((::Units_QuantitiesSequence*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_QtsSequence(_result);
}

int Macad::Occt::Units_QuantitiesSequence::Size()
{
	return ((::Units_QuantitiesSequence*)_NativeInstance)->Size();
}

int Macad::Occt::Units_QuantitiesSequence::Length()
{
	return ((::Units_QuantitiesSequence*)_NativeInstance)->Length();
}

int Macad::Occt::Units_QuantitiesSequence::Lower()
{
	return ((::Units_QuantitiesSequence*)_NativeInstance)->Lower();
}

int Macad::Occt::Units_QuantitiesSequence::Upper()
{
	return ((::Units_QuantitiesSequence*)_NativeInstance)->Upper();
}

bool Macad::Occt::Units_QuantitiesSequence::IsEmpty()
{
	return ((::Units_QuantitiesSequence*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Units_QuantitiesSequence::Reverse()
{
	((::Units_QuantitiesSequence*)_NativeInstance)->Reverse();
}

void Macad::Occt::Units_QuantitiesSequence::Exchange(int I, int J)
{
	((::Units_QuantitiesSequence*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Units_QuantitiesSequence::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Units_QuantitiesSequence*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Units_QuantitiesSequence::Clear()
{
	((::Units_QuantitiesSequence*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::Units_QuantitiesSequence::Remove(int theIndex)
{
	((::Units_QuantitiesSequence*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Units_QuantitiesSequence::Remove(int theFromIndex, int theToIndex)
{
	((::Units_QuantitiesSequence*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Units_QuantitiesSequence::Prepend(Macad::Occt::Units_Quantity^ theItem)
{
	Handle(::Units_Quantity) h_theItem = theItem->NativeInstance;
	((::Units_QuantitiesSequence*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_QuantitiesSequence::InsertBefore(int theIndex, Macad::Occt::Units_Quantity^ theItem)
{
	Handle(::Units_Quantity) h_theItem = theItem->NativeInstance;
	((::Units_QuantitiesSequence*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_QuantitiesSequence::InsertAfter(int theIndex, Macad::Occt::Units_Quantity^ theItem)
{
	Handle(::Units_Quantity) h_theItem = theItem->NativeInstance;
	((::Units_QuantitiesSequence*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units_QuantitiesSequence::First()
{
	Handle(::Units_Quantity) _result;
	_result = ((::Units_QuantitiesSequence*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units_QuantitiesSequence::ChangeFirst()
{
	Handle(::Units_Quantity) _result;
	_result = ((::Units_QuantitiesSequence*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units_QuantitiesSequence::Last()
{
	Handle(::Units_Quantity) _result;
	_result = ((::Units_QuantitiesSequence*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units_QuantitiesSequence::ChangeLast()
{
	Handle(::Units_Quantity) _result;
	_result = ((::Units_QuantitiesSequence*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units_QuantitiesSequence::Value(int theIndex)
{
	Handle(::Units_Quantity) _result;
	_result = ((::Units_QuantitiesSequence*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Quantity^ Macad::Occt::Units_QuantitiesSequence::ChangeValue(int theIndex)
{
	Handle(::Units_Quantity) _result;
	_result = ((::Units_QuantitiesSequence*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Quantity::CreateDowncasted( _result.get());
}

void Macad::Occt::Units_QuantitiesSequence::SetValue(int theIndex, Macad::Occt::Units_Quantity^ theItem)
{
	Handle(::Units_Quantity) h_theItem = theItem->NativeInstance;
	((::Units_QuantitiesSequence*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}


Macad::Occt::Units_QuantitiesSequence^ Macad::Occt::Units_QuantitiesSequence::CreateDowncasted(::Units_QuantitiesSequence* instance)
{
	return gcnew Macad::Occt::Units_QuantitiesSequence( instance );
}



//---------------------------------------------------------------------
//  Class  Units_TokensSequence
//---------------------------------------------------------------------

Macad::Occt::Units_TokensSequence::Units_TokensSequence()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_TokensSequence();
}

Macad::Occt::Units_TokensSequence::Units_TokensSequence(Macad::Occt::Units_TksSequence^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_TokensSequence(*(::Units_TksSequence*)theOther->NativeInstance);
}

Macad::Occt::Units_TokensSequence::Units_TokensSequence(Macad::Occt::Units_TokensSequence^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_TokensSequence(*(::Units_TokensSequence*)parameter1->NativeInstance);
}

Macad::Occt::Units_TksSequence^ Macad::Occt::Units_TokensSequence::Sequence()
{
	::Units_TksSequence* _result = new ::Units_TksSequence();
	*_result =  (::Units_TksSequence)((::Units_TokensSequence*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_TksSequence(_result);
}

void Macad::Occt::Units_TokensSequence::Append(Macad::Occt::Units_Token^ theItem)
{
	Handle(::Units_Token) h_theItem = theItem->NativeInstance;
	((::Units_TokensSequence*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_TokensSequence::Append(Macad::Occt::Units_TksSequence^ theSequence)
{
	((::Units_TokensSequence*)_NativeInstance)->Append(*(::Units_TksSequence*)theSequence->NativeInstance);
}

Macad::Occt::Units_TksSequence^ Macad::Occt::Units_TokensSequence::ChangeSequence()
{
	::Units_TksSequence* _result = new ::Units_TksSequence();
	*_result = ((::Units_TokensSequence*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Units_TksSequence(_result);
}

int Macad::Occt::Units_TokensSequence::Size()
{
	return ((::Units_TokensSequence*)_NativeInstance)->Size();
}

int Macad::Occt::Units_TokensSequence::Length()
{
	return ((::Units_TokensSequence*)_NativeInstance)->Length();
}

int Macad::Occt::Units_TokensSequence::Lower()
{
	return ((::Units_TokensSequence*)_NativeInstance)->Lower();
}

int Macad::Occt::Units_TokensSequence::Upper()
{
	return ((::Units_TokensSequence*)_NativeInstance)->Upper();
}

bool Macad::Occt::Units_TokensSequence::IsEmpty()
{
	return ((::Units_TokensSequence*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Units_TokensSequence::Reverse()
{
	((::Units_TokensSequence*)_NativeInstance)->Reverse();
}

void Macad::Occt::Units_TokensSequence::Exchange(int I, int J)
{
	((::Units_TokensSequence*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Units_TokensSequence::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Units_TokensSequence*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Units_TokensSequence::Clear()
{
	((::Units_TokensSequence*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::Units_TokensSequence::Remove(int theIndex)
{
	((::Units_TokensSequence*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Units_TokensSequence::Remove(int theFromIndex, int theToIndex)
{
	((::Units_TokensSequence*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Units_TokensSequence::Prepend(Macad::Occt::Units_Token^ theItem)
{
	Handle(::Units_Token) h_theItem = theItem->NativeInstance;
	((::Units_TokensSequence*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_TokensSequence::InsertBefore(int theIndex, Macad::Occt::Units_Token^ theItem)
{
	Handle(::Units_Token) h_theItem = theItem->NativeInstance;
	((::Units_TokensSequence*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Units_TokensSequence::InsertAfter(int theIndex, Macad::Occt::Units_Token^ theItem)
{
	Handle(::Units_Token) h_theItem = theItem->NativeInstance;
	((::Units_TokensSequence*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

Macad::Occt::Units_Token^ Macad::Occt::Units_TokensSequence::First()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_TokensSequence*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_TokensSequence::ChangeFirst()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_TokensSequence*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_TokensSequence::Last()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_TokensSequence*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_TokensSequence::ChangeLast()
{
	Handle(::Units_Token) _result;
	_result = ((::Units_TokensSequence*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_TokensSequence::Value(int theIndex)
{
	Handle(::Units_Token) _result;
	_result = ((::Units_TokensSequence*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

Macad::Occt::Units_Token^ Macad::Occt::Units_TokensSequence::ChangeValue(int theIndex)
{
	Handle(::Units_Token) _result;
	_result = ((::Units_TokensSequence*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_Token::CreateDowncasted( _result.get());
}

void Macad::Occt::Units_TokensSequence::SetValue(int theIndex, Macad::Occt::Units_Token^ theItem)
{
	Handle(::Units_Token) h_theItem = theItem->NativeInstance;
	((::Units_TokensSequence*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}


Macad::Occt::Units_TokensSequence^ Macad::Occt::Units_TokensSequence::CreateDowncasted(::Units_TokensSequence* instance)
{
	return gcnew Macad::Occt::Units_TokensSequence( instance );
}



//---------------------------------------------------------------------
//  Class  Units_NoSuchType
//---------------------------------------------------------------------

Macad::Occt::Units_NoSuchType::Units_NoSuchType()
	: Macad::Occt::Standard_NoSuchObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_NoSuchType();
}

Macad::Occt::Units_NoSuchType::Units_NoSuchType(System::String^ theMessage)
	: Macad::Occt::Standard_NoSuchObject(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Units_NoSuchType(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Units_NoSuchType::Units_NoSuchType(System::String^ theMessage, System::String^ theStackTrace)
	: Macad::Occt::Standard_NoSuchObject(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Units_NoSuchType(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

Macad::Occt::Units_NoSuchType::Units_NoSuchType(Macad::Occt::Units_NoSuchType^ parameter1)
	: Macad::Occt::Standard_NoSuchObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_NoSuchType(*(::Units_NoSuchType*)parameter1->NativeInstance);
}

void Macad::Occt::Units_NoSuchType::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Units_NoSuchType::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Units_NoSuchType::Raise()
{
	::Units_NoSuchType::Raise("");
}

Macad::Occt::Units_NoSuchType^ Macad::Occt::Units_NoSuchType::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Units_NoSuchType) _result;
	_result = ::Units_NoSuchType::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_NoSuchType::CreateDowncasted( _result.get());
}

Macad::Occt::Units_NoSuchType^ Macad::Occt::Units_NoSuchType::NewInstance()
{
	Handle(::Units_NoSuchType) _result;
	_result = ::Units_NoSuchType::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_NoSuchType::CreateDowncasted( _result.get());
}

Macad::Occt::Units_NoSuchType^ Macad::Occt::Units_NoSuchType::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Units_NoSuchType) _result;
	_result = ::Units_NoSuchType::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_NoSuchType::CreateDowncasted( _result.get());
}


Macad::Occt::Units_NoSuchType^ Macad::Occt::Units_NoSuchType::CreateDowncasted(::Units_NoSuchType* instance)
{
	return gcnew Macad::Occt::Units_NoSuchType( instance );
}



//---------------------------------------------------------------------
//  Class  Units_NoSuchUnit
//---------------------------------------------------------------------

Macad::Occt::Units_NoSuchUnit::Units_NoSuchUnit()
	: Macad::Occt::Standard_NoSuchObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_NoSuchUnit();
}

Macad::Occt::Units_NoSuchUnit::Units_NoSuchUnit(System::String^ theMessage)
	: Macad::Occt::Standard_NoSuchObject(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Units_NoSuchUnit(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Units_NoSuchUnit::Units_NoSuchUnit(System::String^ theMessage, System::String^ theStackTrace)
	: Macad::Occt::Standard_NoSuchObject(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Units_NoSuchUnit(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

Macad::Occt::Units_NoSuchUnit::Units_NoSuchUnit(Macad::Occt::Units_NoSuchUnit^ parameter1)
	: Macad::Occt::Standard_NoSuchObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Units_NoSuchUnit(*(::Units_NoSuchUnit*)parameter1->NativeInstance);
}

void Macad::Occt::Units_NoSuchUnit::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Units_NoSuchUnit::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Units_NoSuchUnit::Raise()
{
	::Units_NoSuchUnit::Raise("");
}

Macad::Occt::Units_NoSuchUnit^ Macad::Occt::Units_NoSuchUnit::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Units_NoSuchUnit) _result;
	_result = ::Units_NoSuchUnit::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_NoSuchUnit::CreateDowncasted( _result.get());
}

Macad::Occt::Units_NoSuchUnit^ Macad::Occt::Units_NoSuchUnit::NewInstance()
{
	Handle(::Units_NoSuchUnit) _result;
	_result = ::Units_NoSuchUnit::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_NoSuchUnit::CreateDowncasted( _result.get());
}

Macad::Occt::Units_NoSuchUnit^ Macad::Occt::Units_NoSuchUnit::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Units_NoSuchUnit) _result;
	_result = ::Units_NoSuchUnit::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	 return _result.IsNull() ? nullptr : Macad::Occt::Units_NoSuchUnit::CreateDowncasted( _result.get());
}


Macad::Occt::Units_NoSuchUnit^ Macad::Occt::Units_NoSuchUnit::CreateDowncasted(::Units_NoSuchUnit* instance)
{
	return gcnew Macad::Occt::Units_NoSuchUnit( instance );
}


