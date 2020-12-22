// Generated wrapper code for package Message

#include "OcctPCH.h"
#include "Message.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "Message.h"
#include "NCollection.h"
#include "TCollection.h"
#include "TColStd.h"
#include "TopoDS.h"


//---------------------------------------------------------------------
//  Class  Message_ArrayOfMsg
//---------------------------------------------------------------------

Macad::Occt::Message_ArrayOfMsg::Message_ArrayOfMsg()
	: BaseClass<::Message_ArrayOfMsg>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ArrayOfMsg();
}

Macad::Occt::Message_ArrayOfMsg::Message_ArrayOfMsg(int theLower, int theUpper)
	: BaseClass<::Message_ArrayOfMsg>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ArrayOfMsg(theLower, theUpper);
}

Macad::Occt::Message_ArrayOfMsg::Message_ArrayOfMsg(Macad::Occt::Message_ArrayOfMsg^ theOther)
	: BaseClass<::Message_ArrayOfMsg>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ArrayOfMsg(*(::Message_ArrayOfMsg*)theOther->NativeInstance);
}

int Macad::Occt::Message_ArrayOfMsg::Size()
{
	return ((::Message_ArrayOfMsg*)_NativeInstance)->Size();
}

int Macad::Occt::Message_ArrayOfMsg::Length()
{
	return ((::Message_ArrayOfMsg*)_NativeInstance)->Length();
}

bool Macad::Occt::Message_ArrayOfMsg::IsEmpty()
{
	return ((::Message_ArrayOfMsg*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Message_ArrayOfMsg::Lower()
{
	return ((::Message_ArrayOfMsg*)_NativeInstance)->Lower();
}

int Macad::Occt::Message_ArrayOfMsg::Upper()
{
	return ((::Message_ArrayOfMsg*)_NativeInstance)->Upper();
}

bool Macad::Occt::Message_ArrayOfMsg::IsDeletable()
{
	return ((::Message_ArrayOfMsg*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::Message_ArrayOfMsg::IsAllocated()
{
	return ((::Message_ArrayOfMsg*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Message_ArrayOfMsg^ Macad::Occt::Message_ArrayOfMsg::Assign(Macad::Occt::Message_ArrayOfMsg^ theOther)
{
	::Message_ArrayOfMsg* _result = new ::Message_ArrayOfMsg();
	*_result = ((::Message_ArrayOfMsg*)_NativeInstance)->Assign(*(::Message_ArrayOfMsg*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ArrayOfMsg(_result);
}

Macad::Occt::Message_ArrayOfMsg^ Macad::Occt::Message_ArrayOfMsg::Move(Macad::Occt::Message_ArrayOfMsg^ theOther)
{
	::Message_ArrayOfMsg* _result = new ::Message_ArrayOfMsg();
	*_result = ((::Message_ArrayOfMsg*)_NativeInstance)->Move(*(::Message_ArrayOfMsg*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ArrayOfMsg(_result);
}

void Macad::Occt::Message_ArrayOfMsg::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Message_ArrayOfMsg*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  Message_ListOfMsg
//---------------------------------------------------------------------

Macad::Occt::Message_ListOfMsg::Message_ListOfMsg()
	: BaseClass<::Message_ListOfMsg>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ListOfMsg();
}

Macad::Occt::Message_ListOfMsg::Message_ListOfMsg(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Message_ListOfMsg>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Message_ListOfMsg(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Message_ListOfMsg::Message_ListOfMsg(Macad::Occt::Message_ListOfMsg^ theOther)
	: BaseClass<::Message_ListOfMsg>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ListOfMsg(*(::Message_ListOfMsg*)theOther->NativeInstance);
}

int Macad::Occt::Message_ListOfMsg::Size()
{
	return ((::Message_ListOfMsg*)_NativeInstance)->Size();
}

Macad::Occt::Message_ListOfMsg^ Macad::Occt::Message_ListOfMsg::Assign(Macad::Occt::Message_ListOfMsg^ theOther)
{
	::Message_ListOfMsg* _result = new ::Message_ListOfMsg();
	*_result = ((::Message_ListOfMsg*)_NativeInstance)->Assign(*(::Message_ListOfMsg*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ListOfMsg(_result);
}

void Macad::Occt::Message_ListOfMsg::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Message_ListOfMsg*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Message_ListOfMsg::Clear()
{
	((::Message_ListOfMsg*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Message_Msg^ Macad::Occt::Message_ListOfMsg::First()
{
	::Message_Msg* _result = new ::Message_Msg();
	*_result =  (::Message_Msg)((::Message_ListOfMsg*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_Msg(_result);
}

Macad::Occt::Message_Msg^ Macad::Occt::Message_ListOfMsg::Last()
{
	::Message_Msg* _result = new ::Message_Msg();
	*_result =  (::Message_Msg)((::Message_ListOfMsg*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_Msg(_result);
}

Macad::Occt::Message_Msg^ Macad::Occt::Message_ListOfMsg::Append(Macad::Occt::Message_Msg^ theItem)
{
	::Message_Msg* _result = new ::Message_Msg();
	*_result = ((::Message_ListOfMsg*)_NativeInstance)->Append(*(::Message_Msg*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_Msg(_result);
}

void Macad::Occt::Message_ListOfMsg::Append(Macad::Occt::Message_ListOfMsg^ theOther)
{
	((::Message_ListOfMsg*)_NativeInstance)->Append(*(::Message_ListOfMsg*)theOther->NativeInstance);
}

Macad::Occt::Message_Msg^ Macad::Occt::Message_ListOfMsg::Prepend(Macad::Occt::Message_Msg^ theItem)
{
	::Message_Msg* _result = new ::Message_Msg();
	*_result = ((::Message_ListOfMsg*)_NativeInstance)->Prepend(*(::Message_Msg*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_Msg(_result);
}

void Macad::Occt::Message_ListOfMsg::Prepend(Macad::Occt::Message_ListOfMsg^ theOther)
{
	((::Message_ListOfMsg*)_NativeInstance)->Prepend(*(::Message_ListOfMsg*)theOther->NativeInstance);
}

void Macad::Occt::Message_ListOfMsg::RemoveFirst()
{
	((::Message_ListOfMsg*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::Message_ListOfMsg::Reverse()
{
	((::Message_ListOfMsg*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  Message_ListOfAlert
//---------------------------------------------------------------------

Macad::Occt::Message_ListOfAlert::Message_ListOfAlert()
	: BaseClass<::Message_ListOfAlert>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ListOfAlert();
}

Macad::Occt::Message_ListOfAlert::Message_ListOfAlert(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Message_ListOfAlert>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Message_ListOfAlert(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Message_ListOfAlert::Message_ListOfAlert(Macad::Occt::Message_ListOfAlert^ theOther)
	: BaseClass<::Message_ListOfAlert>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ListOfAlert(*(::Message_ListOfAlert*)theOther->NativeInstance);
}

int Macad::Occt::Message_ListOfAlert::Size()
{
	return ((::Message_ListOfAlert*)_NativeInstance)->Size();
}

Macad::Occt::Message_ListOfAlert^ Macad::Occt::Message_ListOfAlert::Assign(Macad::Occt::Message_ListOfAlert^ theOther)
{
	::Message_ListOfAlert* _result = new ::Message_ListOfAlert();
	*_result = ((::Message_ListOfAlert*)_NativeInstance)->Assign(*(::Message_ListOfAlert*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ListOfAlert(_result);
}

void Macad::Occt::Message_ListOfAlert::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Message_ListOfAlert*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Message_ListOfAlert::Clear()
{
	((::Message_ListOfAlert*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Message_Alert^ Macad::Occt::Message_ListOfAlert::First()
{
	Handle(::Message_Alert) _result;
	_result = ((::Message_ListOfAlert*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Alert::CreateDowncasted( _result.get());
}

Macad::Occt::Message_Alert^ Macad::Occt::Message_ListOfAlert::Last()
{
	Handle(::Message_Alert) _result;
	_result = ((::Message_ListOfAlert*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Alert::CreateDowncasted( _result.get());
}

Macad::Occt::Message_Alert^ Macad::Occt::Message_ListOfAlert::Append(Macad::Occt::Message_Alert^ theItem)
{
	Handle(::Message_Alert) h_theItem = theItem->NativeInstance;
	Handle(::Message_Alert) _result;
	_result = ((::Message_ListOfAlert*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Alert::CreateDowncasted( _result.get());
}

void Macad::Occt::Message_ListOfAlert::Append(Macad::Occt::Message_ListOfAlert^ theOther)
{
	((::Message_ListOfAlert*)_NativeInstance)->Append(*(::Message_ListOfAlert*)theOther->NativeInstance);
}

Macad::Occt::Message_Alert^ Macad::Occt::Message_ListOfAlert::Prepend(Macad::Occt::Message_Alert^ theItem)
{
	Handle(::Message_Alert) h_theItem = theItem->NativeInstance;
	Handle(::Message_Alert) _result;
	_result = ((::Message_ListOfAlert*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Alert::CreateDowncasted( _result.get());
}

void Macad::Occt::Message_ListOfAlert::Prepend(Macad::Occt::Message_ListOfAlert^ theOther)
{
	((::Message_ListOfAlert*)_NativeInstance)->Prepend(*(::Message_ListOfAlert*)theOther->NativeInstance);
}

void Macad::Occt::Message_ListOfAlert::RemoveFirst()
{
	((::Message_ListOfAlert*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::Message_ListOfAlert::Reverse()
{
	((::Message_ListOfAlert*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  Message_SequenceOfPrinters
//---------------------------------------------------------------------

Macad::Occt::Message_SequenceOfPrinters::Message_SequenceOfPrinters()
	: BaseClass<::Message_SequenceOfPrinters>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_SequenceOfPrinters();
}

Macad::Occt::Message_SequenceOfPrinters::Message_SequenceOfPrinters(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Message_SequenceOfPrinters>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Message_SequenceOfPrinters(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Message_SequenceOfPrinters::Message_SequenceOfPrinters(Macad::Occt::Message_SequenceOfPrinters^ theOther)
	: BaseClass<::Message_SequenceOfPrinters>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_SequenceOfPrinters(*(::Message_SequenceOfPrinters*)theOther->NativeInstance);
}

int Macad::Occt::Message_SequenceOfPrinters::Size()
{
	return ((::Message_SequenceOfPrinters*)_NativeInstance)->Size();
}

int Macad::Occt::Message_SequenceOfPrinters::Length()
{
	return ((::Message_SequenceOfPrinters*)_NativeInstance)->Length();
}

int Macad::Occt::Message_SequenceOfPrinters::Lower()
{
	return ((::Message_SequenceOfPrinters*)_NativeInstance)->Lower();
}

int Macad::Occt::Message_SequenceOfPrinters::Upper()
{
	return ((::Message_SequenceOfPrinters*)_NativeInstance)->Upper();
}

bool Macad::Occt::Message_SequenceOfPrinters::IsEmpty()
{
	return ((::Message_SequenceOfPrinters*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Message_SequenceOfPrinters::Reverse()
{
	((::Message_SequenceOfPrinters*)_NativeInstance)->Reverse();
}

void Macad::Occt::Message_SequenceOfPrinters::Exchange(int I, int J)
{
	((::Message_SequenceOfPrinters*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Message_SequenceOfPrinters::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Message_SequenceOfPrinters*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Message_SequenceOfPrinters::Clear()
{
	((::Message_SequenceOfPrinters*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Message_SequenceOfPrinters^ Macad::Occt::Message_SequenceOfPrinters::Assign(Macad::Occt::Message_SequenceOfPrinters^ theOther)
{
	::Message_SequenceOfPrinters* _result = new ::Message_SequenceOfPrinters();
	*_result = ((::Message_SequenceOfPrinters*)_NativeInstance)->Assign(*(::Message_SequenceOfPrinters*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_SequenceOfPrinters(_result);
}

void Macad::Occt::Message_SequenceOfPrinters::Remove(int theIndex)
{
	((::Message_SequenceOfPrinters*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Message_SequenceOfPrinters::Remove(int theFromIndex, int theToIndex)
{
	((::Message_SequenceOfPrinters*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Message_SequenceOfPrinters::Append(Macad::Occt::Message_Printer^ theItem)
{
	Handle(::Message_Printer) h_theItem = theItem->NativeInstance;
	((::Message_SequenceOfPrinters*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Message_SequenceOfPrinters::Append(Macad::Occt::Message_SequenceOfPrinters^ theSeq)
{
	((::Message_SequenceOfPrinters*)_NativeInstance)->Append(*(::Message_SequenceOfPrinters*)theSeq->NativeInstance);
}

void Macad::Occt::Message_SequenceOfPrinters::Prepend(Macad::Occt::Message_Printer^ theItem)
{
	Handle(::Message_Printer) h_theItem = theItem->NativeInstance;
	((::Message_SequenceOfPrinters*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Message_SequenceOfPrinters::Prepend(Macad::Occt::Message_SequenceOfPrinters^ theSeq)
{
	((::Message_SequenceOfPrinters*)_NativeInstance)->Prepend(*(::Message_SequenceOfPrinters*)theSeq->NativeInstance);
}

void Macad::Occt::Message_SequenceOfPrinters::InsertBefore(int theIndex, Macad::Occt::Message_Printer^ theItem)
{
	Handle(::Message_Printer) h_theItem = theItem->NativeInstance;
	((::Message_SequenceOfPrinters*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Message_SequenceOfPrinters::InsertBefore(int theIndex, Macad::Occt::Message_SequenceOfPrinters^ theSeq)
{
	((::Message_SequenceOfPrinters*)_NativeInstance)->InsertBefore(theIndex, *(::Message_SequenceOfPrinters*)theSeq->NativeInstance);
}

void Macad::Occt::Message_SequenceOfPrinters::InsertAfter(int theIndex, Macad::Occt::Message_SequenceOfPrinters^ theSeq)
{
	((::Message_SequenceOfPrinters*)_NativeInstance)->InsertAfter(theIndex, *(::Message_SequenceOfPrinters*)theSeq->NativeInstance);
}

void Macad::Occt::Message_SequenceOfPrinters::InsertAfter(int theIndex, Macad::Occt::Message_Printer^ theItem)
{
	Handle(::Message_Printer) h_theItem = theItem->NativeInstance;
	((::Message_SequenceOfPrinters*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Message_SequenceOfPrinters::Split(int theIndex, Macad::Occt::Message_SequenceOfPrinters^ theSeq)
{
	((::Message_SequenceOfPrinters*)_NativeInstance)->Split(theIndex, *(::Message_SequenceOfPrinters*)theSeq->NativeInstance);
}

Macad::Occt::Message_Printer^ Macad::Occt::Message_SequenceOfPrinters::First()
{
	Handle(::Message_Printer) _result;
	_result = ((::Message_SequenceOfPrinters*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Printer::CreateDowncasted( _result.get());
}

Macad::Occt::Message_Printer^ Macad::Occt::Message_SequenceOfPrinters::ChangeFirst()
{
	Handle(::Message_Printer) _result;
	_result = ((::Message_SequenceOfPrinters*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Printer::CreateDowncasted( _result.get());
}

Macad::Occt::Message_Printer^ Macad::Occt::Message_SequenceOfPrinters::Last()
{
	Handle(::Message_Printer) _result;
	_result = ((::Message_SequenceOfPrinters*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Printer::CreateDowncasted( _result.get());
}

Macad::Occt::Message_Printer^ Macad::Occt::Message_SequenceOfPrinters::ChangeLast()
{
	Handle(::Message_Printer) _result;
	_result = ((::Message_SequenceOfPrinters*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Printer::CreateDowncasted( _result.get());
}

Macad::Occt::Message_Printer^ Macad::Occt::Message_SequenceOfPrinters::Value(int theIndex)
{
	Handle(::Message_Printer) _result;
	_result = ((::Message_SequenceOfPrinters*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Printer::CreateDowncasted( _result.get());
}

Macad::Occt::Message_Printer^ Macad::Occt::Message_SequenceOfPrinters::ChangeValue(int theIndex)
{
	Handle(::Message_Printer) _result;
	_result = ((::Message_SequenceOfPrinters*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Printer::CreateDowncasted( _result.get());
}

void Macad::Occt::Message_SequenceOfPrinters::SetValue(int theIndex, Macad::Occt::Message_Printer^ theItem)
{
	Handle(::Message_Printer) h_theItem = theItem->NativeInstance;
	((::Message_SequenceOfPrinters*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  Message_SequenceOfProgressScale
//---------------------------------------------------------------------

Macad::Occt::Message_SequenceOfProgressScale::Message_SequenceOfProgressScale()
	: BaseClass<::Message_SequenceOfProgressScale>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_SequenceOfProgressScale();
}

Macad::Occt::Message_SequenceOfProgressScale::Message_SequenceOfProgressScale(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Message_SequenceOfProgressScale>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Message_SequenceOfProgressScale(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Message_SequenceOfProgressScale::Message_SequenceOfProgressScale(Macad::Occt::Message_SequenceOfProgressScale^ theOther)
	: BaseClass<::Message_SequenceOfProgressScale>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_SequenceOfProgressScale(*(::Message_SequenceOfProgressScale*)theOther->NativeInstance);
}

int Macad::Occt::Message_SequenceOfProgressScale::Size()
{
	return ((::Message_SequenceOfProgressScale*)_NativeInstance)->Size();
}

int Macad::Occt::Message_SequenceOfProgressScale::Length()
{
	return ((::Message_SequenceOfProgressScale*)_NativeInstance)->Length();
}

int Macad::Occt::Message_SequenceOfProgressScale::Lower()
{
	return ((::Message_SequenceOfProgressScale*)_NativeInstance)->Lower();
}

int Macad::Occt::Message_SequenceOfProgressScale::Upper()
{
	return ((::Message_SequenceOfProgressScale*)_NativeInstance)->Upper();
}

bool Macad::Occt::Message_SequenceOfProgressScale::IsEmpty()
{
	return ((::Message_SequenceOfProgressScale*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Message_SequenceOfProgressScale::Reverse()
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->Reverse();
}

void Macad::Occt::Message_SequenceOfProgressScale::Exchange(int I, int J)
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Message_SequenceOfProgressScale::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Message_SequenceOfProgressScale*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Message_SequenceOfProgressScale::Clear()
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Message_SequenceOfProgressScale^ Macad::Occt::Message_SequenceOfProgressScale::Assign(Macad::Occt::Message_SequenceOfProgressScale^ theOther)
{
	::Message_SequenceOfProgressScale* _result = new ::Message_SequenceOfProgressScale();
	*_result = ((::Message_SequenceOfProgressScale*)_NativeInstance)->Assign(*(::Message_SequenceOfProgressScale*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_SequenceOfProgressScale(_result);
}

void Macad::Occt::Message_SequenceOfProgressScale::Remove(int theIndex)
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Message_SequenceOfProgressScale::Remove(int theFromIndex, int theToIndex)
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Message_SequenceOfProgressScale::Append(Macad::Occt::Message_ProgressScale^ theItem)
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->Append(*(::Message_ProgressScale*)theItem->NativeInstance);
}

void Macad::Occt::Message_SequenceOfProgressScale::Append(Macad::Occt::Message_SequenceOfProgressScale^ theSeq)
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->Append(*(::Message_SequenceOfProgressScale*)theSeq->NativeInstance);
}

void Macad::Occt::Message_SequenceOfProgressScale::Prepend(Macad::Occt::Message_ProgressScale^ theItem)
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->Prepend(*(::Message_ProgressScale*)theItem->NativeInstance);
}

void Macad::Occt::Message_SequenceOfProgressScale::Prepend(Macad::Occt::Message_SequenceOfProgressScale^ theSeq)
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->Prepend(*(::Message_SequenceOfProgressScale*)theSeq->NativeInstance);
}

void Macad::Occt::Message_SequenceOfProgressScale::InsertBefore(int theIndex, Macad::Occt::Message_ProgressScale^ theItem)
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->InsertBefore(theIndex, *(::Message_ProgressScale*)theItem->NativeInstance);
}

void Macad::Occt::Message_SequenceOfProgressScale::InsertBefore(int theIndex, Macad::Occt::Message_SequenceOfProgressScale^ theSeq)
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->InsertBefore(theIndex, *(::Message_SequenceOfProgressScale*)theSeq->NativeInstance);
}

void Macad::Occt::Message_SequenceOfProgressScale::InsertAfter(int theIndex, Macad::Occt::Message_SequenceOfProgressScale^ theSeq)
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->InsertAfter(theIndex, *(::Message_SequenceOfProgressScale*)theSeq->NativeInstance);
}

void Macad::Occt::Message_SequenceOfProgressScale::InsertAfter(int theIndex, Macad::Occt::Message_ProgressScale^ theItem)
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->InsertAfter(theIndex, *(::Message_ProgressScale*)theItem->NativeInstance);
}

void Macad::Occt::Message_SequenceOfProgressScale::Split(int theIndex, Macad::Occt::Message_SequenceOfProgressScale^ theSeq)
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->Split(theIndex, *(::Message_SequenceOfProgressScale*)theSeq->NativeInstance);
}

Macad::Occt::Message_ProgressScale^ Macad::Occt::Message_SequenceOfProgressScale::First()
{
	::Message_ProgressScale* _result = new ::Message_ProgressScale();
	*_result =  (::Message_ProgressScale)((::Message_SequenceOfProgressScale*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ProgressScale(_result);
}

Macad::Occt::Message_ProgressScale^ Macad::Occt::Message_SequenceOfProgressScale::ChangeFirst()
{
	::Message_ProgressScale* _result = new ::Message_ProgressScale();
	*_result = ((::Message_SequenceOfProgressScale*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ProgressScale(_result);
}

Macad::Occt::Message_ProgressScale^ Macad::Occt::Message_SequenceOfProgressScale::Last()
{
	::Message_ProgressScale* _result = new ::Message_ProgressScale();
	*_result =  (::Message_ProgressScale)((::Message_SequenceOfProgressScale*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ProgressScale(_result);
}

Macad::Occt::Message_ProgressScale^ Macad::Occt::Message_SequenceOfProgressScale::ChangeLast()
{
	::Message_ProgressScale* _result = new ::Message_ProgressScale();
	*_result = ((::Message_SequenceOfProgressScale*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ProgressScale(_result);
}

Macad::Occt::Message_ProgressScale^ Macad::Occt::Message_SequenceOfProgressScale::Value(int theIndex)
{
	::Message_ProgressScale* _result = new ::Message_ProgressScale();
	*_result =  (::Message_ProgressScale)((::Message_SequenceOfProgressScale*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ProgressScale(_result);
}

Macad::Occt::Message_ProgressScale^ Macad::Occt::Message_SequenceOfProgressScale::ChangeValue(int theIndex)
{
	::Message_ProgressScale* _result = new ::Message_ProgressScale();
	*_result = ((::Message_SequenceOfProgressScale*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ProgressScale(_result);
}

void Macad::Occt::Message_SequenceOfProgressScale::SetValue(int theIndex, Macad::Occt::Message_ProgressScale^ theItem)
{
	((::Message_SequenceOfProgressScale*)_NativeInstance)->SetValue(theIndex, *(::Message_ProgressScale*)theItem->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Message_Messenger
//---------------------------------------------------------------------

Macad::Occt::Message_Messenger::Message_Messenger()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_Messenger();
}

Macad::Occt::Message_Messenger::Message_Messenger(Macad::Occt::Message_Printer^ thePrinter)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::Message_Printer) h_thePrinter = thePrinter->NativeInstance;
	NativeInstance = new ::Message_Messenger(h_thePrinter);
	thePrinter->NativeInstance = h_thePrinter.get();
}

Macad::Occt::Message_Messenger::Message_Messenger(Macad::Occt::Message_Messenger^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_Messenger(*(::Message_Messenger*)parameter1->NativeInstance);
}

bool Macad::Occt::Message_Messenger::AddPrinter(Macad::Occt::Message_Printer^ thePrinter)
{
	Handle(::Message_Printer) h_thePrinter = thePrinter->NativeInstance;
	return ((::Message_Messenger*)_NativeInstance)->AddPrinter(h_thePrinter);
	thePrinter->NativeInstance = h_thePrinter.get();
}

bool Macad::Occt::Message_Messenger::RemovePrinter(Macad::Occt::Message_Printer^ thePrinter)
{
	Handle(::Message_Printer) h_thePrinter = thePrinter->NativeInstance;
	return ((::Message_Messenger*)_NativeInstance)->RemovePrinter(h_thePrinter);
	thePrinter->NativeInstance = h_thePrinter.get();
}

Macad::Occt::Message_SequenceOfPrinters^ Macad::Occt::Message_Messenger::Printers()
{
	::Message_SequenceOfPrinters* _result = new ::Message_SequenceOfPrinters();
	*_result =  (::Message_SequenceOfPrinters)((::Message_Messenger*)_NativeInstance)->Printers();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_SequenceOfPrinters(_result);
}

Macad::Occt::Message_SequenceOfPrinters^ Macad::Occt::Message_Messenger::ChangePrinters()
{
	::Message_SequenceOfPrinters* _result = new ::Message_SequenceOfPrinters();
	*_result = ((::Message_Messenger*)_NativeInstance)->ChangePrinters();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_SequenceOfPrinters(_result);
}

void Macad::Occt::Message_Messenger::Send(System::String^ theString, Macad::Occt::Message_Gravity theGravity, bool putEndl)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	((::Message_Messenger*)_NativeInstance)->Send(sz_theString, (::Message_Gravity)theGravity, putEndl);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::Message_Messenger::Send(System::String^ theString, Macad::Occt::Message_Gravity theGravity)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	((::Message_Messenger*)_NativeInstance)->Send(sz_theString, (::Message_Gravity)theGravity, true);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::Message_Messenger::Send(System::String^ theString)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	((::Message_Messenger*)_NativeInstance)->Send(sz_theString, Message_Warning, true);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::Message_Gravity theGravity, bool putEndl)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, (::Message_Gravity)theGravity, putEndl);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::Message_Gravity theGravity)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, (::Message_Gravity)theGravity, true);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_AsciiString^ theString)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, Message_Warning, true);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_ExtendedString^ theString, Macad::Occt::Message_Gravity theGravity, bool putEndl)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, (::Message_Gravity)theGravity, putEndl);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_ExtendedString^ theString, Macad::Occt::Message_Gravity theGravity)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, (::Message_Gravity)theGravity, true);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_ExtendedString^ theString)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, Message_Warning, true);
}


Macad::Occt::Message_Messenger^ Macad::Occt::Message_Messenger::CreateDowncasted(::Message_Messenger* instance)
{
	return gcnew Macad::Occt::Message_Messenger( instance );
}



//---------------------------------------------------------------------
//  Class  Message_Msg
//---------------------------------------------------------------------

Macad::Occt::Message_Msg::Message_Msg()
	: BaseClass<::Message_Msg>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_Msg();
}

Macad::Occt::Message_Msg::Message_Msg(Macad::Occt::Message_Msg^ theMsg)
	: BaseClass<::Message_Msg>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_Msg(*(::Message_Msg*)theMsg->NativeInstance);
}

Macad::Occt::Message_Msg::Message_Msg(System::String^ theKey)
	: BaseClass<::Message_Msg>(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theKey = (char*)(void*)Marshal::StringToHGlobalAnsi(theKey);
	_NativeInstance = new ::Message_Msg(sz_theKey);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theKey);
}

Macad::Occt::Message_Msg::Message_Msg(Macad::Occt::TCollection_ExtendedString^ theKey)
	: BaseClass<::Message_Msg>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_Msg(*(::TCollection_ExtendedString*)theKey->NativeInstance);
}

void Macad::Occt::Message_Msg::Set(System::String^ theMsg)
{
	const char* sz_theMsg = (char*)(void*)Marshal::StringToHGlobalAnsi(theMsg);
	((::Message_Msg*)_NativeInstance)->Set(sz_theMsg);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMsg);
}

void Macad::Occt::Message_Msg::Set(Macad::Occt::TCollection_ExtendedString^ theMsg)
{
	((::Message_Msg*)_NativeInstance)->Set(*(::TCollection_ExtendedString*)theMsg->NativeInstance);
}

Macad::Occt::Message_Msg^ Macad::Occt::Message_Msg::Arg(System::String^ theString)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	::Message_Msg* _result = new ::Message_Msg();
	*_result = ((::Message_Msg*)_NativeInstance)->Arg(sz_theString);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_Msg(_result);
}

Macad::Occt::Message_Msg^ Macad::Occt::Message_Msg::Arg(Macad::Occt::TCollection_AsciiString^ theString)
{
	::Message_Msg* _result = new ::Message_Msg();
	*_result = ((::Message_Msg*)_NativeInstance)->Arg(*(::TCollection_AsciiString*)theString->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_Msg(_result);
}

Macad::Occt::Message_Msg^ Macad::Occt::Message_Msg::Arg(Macad::Occt::TCollection_HAsciiString^ theString)
{
	Handle(::TCollection_HAsciiString) h_theString = theString->NativeInstance;
	::Message_Msg* _result = new ::Message_Msg();
	*_result = ((::Message_Msg*)_NativeInstance)->Arg(h_theString);
	theString->NativeInstance = h_theString.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_Msg(_result);
}

Macad::Occt::Message_Msg^ Macad::Occt::Message_Msg::Arg(Macad::Occt::TCollection_ExtendedString^ theString)
{
	::Message_Msg* _result = new ::Message_Msg();
	*_result = ((::Message_Msg*)_NativeInstance)->Arg(*(::TCollection_ExtendedString*)theString->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_Msg(_result);
}

Macad::Occt::Message_Msg^ Macad::Occt::Message_Msg::Arg(Macad::Occt::TCollection_HExtendedString^ theString)
{
	Handle(::TCollection_HExtendedString) h_theString = theString->NativeInstance;
	::Message_Msg* _result = new ::Message_Msg();
	*_result = ((::Message_Msg*)_NativeInstance)->Arg(h_theString);
	theString->NativeInstance = h_theString.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_Msg(_result);
}

Macad::Occt::Message_Msg^ Macad::Occt::Message_Msg::Arg(int theInt)
{
	::Message_Msg* _result = new ::Message_Msg();
	*_result = ((::Message_Msg*)_NativeInstance)->Arg(theInt);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_Msg(_result);
}

Macad::Occt::Message_Msg^ Macad::Occt::Message_Msg::Arg(double theReal)
{
	::Message_Msg* _result = new ::Message_Msg();
	*_result = ((::Message_Msg*)_NativeInstance)->Arg(theReal);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_Msg(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::Message_Msg::Original()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::Message_Msg*)_NativeInstance)->Original();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::Message_Msg::Value()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::Message_Msg*)_NativeInstance)->Value();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

bool Macad::Occt::Message_Msg::IsEdited()
{
	return ((::Message_Msg*)_NativeInstance)->IsEdited();
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::Message_Msg::Get()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::Message_Msg*)_NativeInstance)->Get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}




//---------------------------------------------------------------------
//  Class  Message_MsgFile
//---------------------------------------------------------------------

Macad::Occt::Message_MsgFile::Message_MsgFile()
	: BaseClass<::Message_MsgFile>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_MsgFile();
}

Macad::Occt::Message_MsgFile::Message_MsgFile(Macad::Occt::Message_MsgFile^ parameter1)
	: BaseClass<::Message_MsgFile>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_MsgFile(*(::Message_MsgFile*)parameter1->NativeInstance);
}

bool Macad::Occt::Message_MsgFile::Load(System::String^ theDirName, System::String^ theFileName)
{
	const char* sz_theDirName = (char*)(void*)Marshal::StringToHGlobalAnsi(theDirName);
	const char* sz_theFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(theFileName);
	return ::Message_MsgFile::Load(sz_theDirName, sz_theFileName);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theDirName);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFileName);
}

bool Macad::Occt::Message_MsgFile::LoadFile(System::String^ theFName)
{
	const char* sz_theFName = (char*)(void*)Marshal::StringToHGlobalAnsi(theFName);
	return ::Message_MsgFile::LoadFile(sz_theFName);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFName);
}

bool Macad::Occt::Message_MsgFile::LoadFromEnv(System::String^ theEnvName, System::String^ theFileName, System::String^ theLangExt)
{
	const char* sz_theEnvName = (char*)(void*)Marshal::StringToHGlobalAnsi(theEnvName);
	const char* sz_theFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(theFileName);
	const char* sz_theLangExt = (char*)(void*)Marshal::StringToHGlobalAnsi(theLangExt);
	return ::Message_MsgFile::LoadFromEnv(sz_theEnvName, sz_theFileName, sz_theLangExt);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theEnvName);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFileName);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theLangExt);
}

bool Macad::Occt::Message_MsgFile::LoadFromEnv(System::String^ theEnvName, System::String^ theFileName)
{
	const char* sz_theEnvName = (char*)(void*)Marshal::StringToHGlobalAnsi(theEnvName);
	const char* sz_theFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(theFileName);
	return ::Message_MsgFile::LoadFromEnv(sz_theEnvName, sz_theFileName, "");
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theEnvName);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFileName);
}

bool Macad::Occt::Message_MsgFile::LoadFromString(System::String^ theContent, int theLength)
{
	const char* sz_theContent = (char*)(void*)Marshal::StringToHGlobalAnsi(theContent);
	return ::Message_MsgFile::LoadFromString(sz_theContent, theLength);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theContent);
}

bool Macad::Occt::Message_MsgFile::LoadFromString(System::String^ theContent)
{
	const char* sz_theContent = (char*)(void*)Marshal::StringToHGlobalAnsi(theContent);
	return ::Message_MsgFile::LoadFromString(sz_theContent, -1);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theContent);
}

bool Macad::Occt::Message_MsgFile::AddMsg(Macad::Occt::TCollection_AsciiString^ key, Macad::Occt::TCollection_ExtendedString^ text)
{
	return ::Message_MsgFile::AddMsg(*(::TCollection_AsciiString*)key->NativeInstance, *(::TCollection_ExtendedString*)text->NativeInstance);
}

bool Macad::Occt::Message_MsgFile::HasMsg(Macad::Occt::TCollection_AsciiString^ key)
{
	return ::Message_MsgFile::HasMsg(*(::TCollection_AsciiString*)key->NativeInstance);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::Message_MsgFile::Msg(System::String^ key)
{
	const char* sz_key = (char*)(void*)Marshal::StringToHGlobalAnsi(key);
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)::Message_MsgFile::Msg(sz_key);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_key);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::Message_MsgFile::Msg(Macad::Occt::TCollection_AsciiString^ key)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)::Message_MsgFile::Msg(*(::TCollection_AsciiString*)key->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}




//---------------------------------------------------------------------
//  Class  Message_Algorithm
//---------------------------------------------------------------------

Macad::Occt::Message_Algorithm::Message_Algorithm()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_Algorithm();
}

Macad::Occt::Message_Algorithm::Message_Algorithm(Macad::Occt::Message_Algorithm^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_Algorithm(*(::Message_Algorithm*)parameter1->NativeInstance);
}

void Macad::Occt::Message_Algorithm::SetStatus(Macad::Occt::Message_Status% theStat)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStat = &theStat;
	((::Message_Algorithm*)_NativeInstance)->SetStatus(*(::Message_Status*)pp_theStat);
}

void Macad::Occt::Message_Algorithm::SetStatus(Macad::Occt::Message_Status% theStat, int theInt)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStat = &theStat;
	((::Message_Algorithm*)_NativeInstance)->SetStatus(*(::Message_Status*)pp_theStat, theInt);
}

void Macad::Occt::Message_Algorithm::SetStatus(Macad::Occt::Message_Status% theStat, System::String^ theStr, bool noRepetitions)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStat = &theStat;
	const char* sz_theStr = (char*)(void*)Marshal::StringToHGlobalAnsi(theStr);
	((::Message_Algorithm*)_NativeInstance)->SetStatus(*(::Message_Status*)pp_theStat, sz_theStr, noRepetitions);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStr);
}

void Macad::Occt::Message_Algorithm::SetStatus(Macad::Occt::Message_Status% theStat, System::String^ theStr)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStat = &theStat;
	const char* sz_theStr = (char*)(void*)Marshal::StringToHGlobalAnsi(theStr);
	((::Message_Algorithm*)_NativeInstance)->SetStatus(*(::Message_Status*)pp_theStat, sz_theStr, true);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStr);
}

void Macad::Occt::Message_Algorithm::SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_AsciiString^ theStr, bool noRepetitions)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStat = &theStat;
	((::Message_Algorithm*)_NativeInstance)->SetStatus(*(::Message_Status*)pp_theStat, *(::TCollection_AsciiString*)theStr->NativeInstance, noRepetitions);
}

void Macad::Occt::Message_Algorithm::SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_AsciiString^ theStr)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStat = &theStat;
	((::Message_Algorithm*)_NativeInstance)->SetStatus(*(::Message_Status*)pp_theStat, *(::TCollection_AsciiString*)theStr->NativeInstance, true);
}

void Macad::Occt::Message_Algorithm::SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_HAsciiString^ theStr, bool noRepetitions)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStat = &theStat;
	Handle(::TCollection_HAsciiString) h_theStr = theStr->NativeInstance;
	((::Message_Algorithm*)_NativeInstance)->SetStatus(*(::Message_Status*)pp_theStat, h_theStr, noRepetitions);
	theStr->NativeInstance = h_theStr.get();
}

void Macad::Occt::Message_Algorithm::SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_HAsciiString^ theStr)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStat = &theStat;
	Handle(::TCollection_HAsciiString) h_theStr = theStr->NativeInstance;
	((::Message_Algorithm*)_NativeInstance)->SetStatus(*(::Message_Status*)pp_theStat, h_theStr, true);
	theStr->NativeInstance = h_theStr.get();
}

void Macad::Occt::Message_Algorithm::SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_ExtendedString^ theStr, bool noRepetitions)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStat = &theStat;
	((::Message_Algorithm*)_NativeInstance)->SetStatus(*(::Message_Status*)pp_theStat, *(::TCollection_ExtendedString*)theStr->NativeInstance, noRepetitions);
}

void Macad::Occt::Message_Algorithm::SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_ExtendedString^ theStr)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStat = &theStat;
	((::Message_Algorithm*)_NativeInstance)->SetStatus(*(::Message_Status*)pp_theStat, *(::TCollection_ExtendedString*)theStr->NativeInstance, true);
}

void Macad::Occt::Message_Algorithm::SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_HExtendedString^ theStr, bool noRepetitions)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStat = &theStat;
	Handle(::TCollection_HExtendedString) h_theStr = theStr->NativeInstance;
	((::Message_Algorithm*)_NativeInstance)->SetStatus(*(::Message_Status*)pp_theStat, h_theStr, noRepetitions);
	theStr->NativeInstance = h_theStr.get();
}

void Macad::Occt::Message_Algorithm::SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_HExtendedString^ theStr)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStat = &theStat;
	Handle(::TCollection_HExtendedString) h_theStr = theStr->NativeInstance;
	((::Message_Algorithm*)_NativeInstance)->SetStatus(*(::Message_Status*)pp_theStat, h_theStr, true);
	theStr->NativeInstance = h_theStr.get();
}

void Macad::Occt::Message_Algorithm::SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::Message_Msg^ theMsg)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStat = &theStat;
	((::Message_Algorithm*)_NativeInstance)->SetStatus(*(::Message_Status*)pp_theStat, *(::Message_Msg*)theMsg->NativeInstance);
}

Macad::Occt::Message_ExecStatus^ Macad::Occt::Message_Algorithm::GetStatus()
{
	::Message_ExecStatus* _result = new ::Message_ExecStatus();
	*_result =  (::Message_ExecStatus)((::Message_Algorithm*)_NativeInstance)->GetStatus();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ExecStatus(_result);
}

Macad::Occt::Message_ExecStatus^ Macad::Occt::Message_Algorithm::ChangeStatus()
{
	::Message_ExecStatus* _result = new ::Message_ExecStatus();
	*_result = ((::Message_Algorithm*)_NativeInstance)->ChangeStatus();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ExecStatus(_result);
}

void Macad::Occt::Message_Algorithm::ClearStatus()
{
	((::Message_Algorithm*)_NativeInstance)->ClearStatus();
}

void Macad::Occt::Message_Algorithm::SetMessenger(Macad::Occt::Message_Messenger^ theMsgr)
{
	Handle(::Message_Messenger) h_theMsgr = theMsgr->NativeInstance;
	((::Message_Algorithm*)_NativeInstance)->SetMessenger(h_theMsgr);
	theMsgr->NativeInstance = h_theMsgr.get();
}

Macad::Occt::Message_Messenger^ Macad::Occt::Message_Algorithm::GetMessenger()
{
	Handle(::Message_Messenger) _result;
	_result = ((::Message_Algorithm*)_NativeInstance)->GetMessenger();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Messenger::CreateDowncasted( _result.get());
}

void Macad::Occt::Message_Algorithm::SendStatusMessages(Macad::Occt::Message_ExecStatus^ theFilter, Macad::Occt::Message_Gravity theTraceLevel, int theMaxCount)
{
	((::Message_Algorithm*)_NativeInstance)->SendStatusMessages(*(::Message_ExecStatus*)theFilter->NativeInstance, (::Message_Gravity)theTraceLevel, theMaxCount);
}

void Macad::Occt::Message_Algorithm::SendStatusMessages(Macad::Occt::Message_ExecStatus^ theFilter, Macad::Occt::Message_Gravity theTraceLevel)
{
	((::Message_Algorithm*)_NativeInstance)->SendStatusMessages(*(::Message_ExecStatus*)theFilter->NativeInstance, (::Message_Gravity)theTraceLevel, 20);
}

void Macad::Occt::Message_Algorithm::SendStatusMessages(Macad::Occt::Message_ExecStatus^ theFilter)
{
	((::Message_Algorithm*)_NativeInstance)->SendStatusMessages(*(::Message_ExecStatus*)theFilter->NativeInstance, Message_Warning, 20);
}

void Macad::Occt::Message_Algorithm::SendMessages(Macad::Occt::Message_Gravity theTraceLevel, int theMaxCount)
{
	((::Message_Algorithm*)_NativeInstance)->SendMessages((::Message_Gravity)theTraceLevel, theMaxCount);
}

void Macad::Occt::Message_Algorithm::SendMessages(Macad::Occt::Message_Gravity theTraceLevel)
{
	((::Message_Algorithm*)_NativeInstance)->SendMessages((::Message_Gravity)theTraceLevel, 20);
}

void Macad::Occt::Message_Algorithm::SendMessages()
{
	((::Message_Algorithm*)_NativeInstance)->SendMessages(Message_Warning, 20);
}

void Macad::Occt::Message_Algorithm::AddStatus(Macad::Occt::Message_Algorithm^ theOther)
{
	Handle(::Message_Algorithm) h_theOther = theOther->NativeInstance;
	((::Message_Algorithm*)_NativeInstance)->AddStatus(h_theOther);
	theOther->NativeInstance = h_theOther.get();
}

void Macad::Occt::Message_Algorithm::AddStatus(Macad::Occt::Message_ExecStatus^ theStatus, Macad::Occt::Message_Algorithm^ theOther)
{
	Handle(::Message_Algorithm) h_theOther = theOther->NativeInstance;
	((::Message_Algorithm*)_NativeInstance)->AddStatus(*(::Message_ExecStatus*)theStatus->NativeInstance, h_theOther);
	theOther->NativeInstance = h_theOther.get();
}

Macad::Occt::TColStd_HPackedMapOfInteger^ Macad::Occt::Message_Algorithm::GetMessageNumbers(Macad::Occt::Message_Status% theStatus)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStatus = &theStatus;
	Handle(::TColStd_HPackedMapOfInteger) _result;
	_result = ((::Message_Algorithm*)_NativeInstance)->GetMessageNumbers(*(::Message_Status*)pp_theStatus);
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HPackedMapOfInteger::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HSequenceOfHExtendedString^ Macad::Occt::Message_Algorithm::GetMessageStrings(Macad::Occt::Message_Status% theStatus)
{
	pin_ptr<Macad::Occt::Message_Status> pp_theStatus = &theStatus;
	Handle(::TColStd_HSequenceOfHExtendedString) _result;
	_result = ((::Message_Algorithm*)_NativeInstance)->GetMessageStrings(*(::Message_Status*)pp_theStatus);
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfHExtendedString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::Message_Algorithm::PrepareReport(Macad::Occt::TColStd_HPackedMapOfInteger^ theError, int theMaxCount)
{
	Handle(::TColStd_HPackedMapOfInteger) h_theError = theError->NativeInstance;
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ::Message_Algorithm::PrepareReport(h_theError, theMaxCount);
	theError->NativeInstance = h_theError.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::Message_Algorithm::PrepareReport(Macad::Occt::TColStd_SequenceOfHExtendedString^ theReportSeq, int theMaxCount)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ::Message_Algorithm::PrepareReport(*(::TColStd_SequenceOfHExtendedString*)theReportSeq->NativeInstance, theMaxCount);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}


Macad::Occt::Message_Algorithm^ Macad::Occt::Message_Algorithm::CreateDowncasted(::Message_Algorithm* instance)
{
	return gcnew Macad::Occt::Message_Algorithm( instance );
}



//---------------------------------------------------------------------
//  Class  Message_Printer
//---------------------------------------------------------------------

Macad::Occt::Message_Printer::Message_Printer(Macad::Occt::Message_Printer^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Message_Gravity Macad::Occt::Message_Printer::GetTraceLevel()
{
	return (Macad::Occt::Message_Gravity)((::Message_Printer*)_NativeInstance)->GetTraceLevel();
}

void Macad::Occt::Message_Printer::SetTraceLevel(Macad::Occt::Message_Gravity theTraceLevel)
{
	((::Message_Printer*)_NativeInstance)->SetTraceLevel((::Message_Gravity)theTraceLevel);
}

void Macad::Occt::Message_Printer::Send(Macad::Occt::TCollection_ExtendedString^ theString, Macad::Occt::Message_Gravity theGravity, bool theToPutEol)
{
	((::Message_Printer*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, (::Message_Gravity)theGravity, theToPutEol);
}

void Macad::Occt::Message_Printer::Send(System::String^ theString, Macad::Occt::Message_Gravity theGravity, bool theToPutEol)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	((::Message_Printer*)_NativeInstance)->Send(sz_theString, (::Message_Gravity)theGravity, theToPutEol);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::Message_Printer::Send(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::Message_Gravity theGravity, bool theToPutEol)
{
	((::Message_Printer*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, (::Message_Gravity)theGravity, theToPutEol);
}


Macad::Occt::Message_Printer^ Macad::Occt::Message_Printer::CreateDowncasted(::Message_Printer* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Message_PrinterOStream)))
		return Macad::Occt::Message_PrinterOStream::CreateDowncasted((::Message_PrinterOStream*)instance);

	return gcnew Macad::Occt::Message_Printer( instance );
}



//---------------------------------------------------------------------
//  Class  Message_PrinterOStream
//---------------------------------------------------------------------

Macad::Occt::Message_PrinterOStream::Message_PrinterOStream(Macad::Occt::Message_Gravity theTraceLevel)
	: Macad::Occt::Message_Printer(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_PrinterOStream((::Message_Gravity)theTraceLevel);
}

Macad::Occt::Message_PrinterOStream::Message_PrinterOStream(System::String^ theFileName, bool theDoAppend, Macad::Occt::Message_Gravity theTraceLevel)
	: Macad::Occt::Message_Printer(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(theFileName);
	NativeInstance = new ::Message_PrinterOStream(sz_theFileName, theDoAppend, (::Message_Gravity)theTraceLevel);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFileName);
}

Macad::Occt::Message_PrinterOStream::Message_PrinterOStream(System::String^ theFileName, bool theDoAppend)
	: Macad::Occt::Message_Printer(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theFileName = (char*)(void*)Marshal::StringToHGlobalAnsi(theFileName);
	NativeInstance = new ::Message_PrinterOStream(sz_theFileName, theDoAppend, Message_Info);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFileName);
}

Macad::Occt::Message_PrinterOStream::Message_PrinterOStream(Macad::Occt::Message_PrinterOStream^ parameter1)
	: Macad::Occt::Message_Printer(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_PrinterOStream(*(::Message_PrinterOStream*)parameter1->NativeInstance);
}

void Macad::Occt::Message_PrinterOStream::Close()
{
	((::Message_PrinterOStream*)_NativeInstance)->Close();
}

bool Macad::Occt::Message_PrinterOStream::GetUseUtf8()
{
	return ((::Message_PrinterOStream*)_NativeInstance)->GetUseUtf8();
}

void Macad::Occt::Message_PrinterOStream::SetUseUtf8(bool useUtf8)
{
	((::Message_PrinterOStream*)_NativeInstance)->SetUseUtf8(useUtf8);
}

void Macad::Occt::Message_PrinterOStream::Send(System::String^ theString, Macad::Occt::Message_Gravity theGravity, bool putEndl)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	((::Message_PrinterOStream*)_NativeInstance)->Send(sz_theString, (::Message_Gravity)theGravity, putEndl);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::Message_PrinterOStream::Send(System::String^ theString, Macad::Occt::Message_Gravity theGravity)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	((::Message_PrinterOStream*)_NativeInstance)->Send(sz_theString, (::Message_Gravity)theGravity, true);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::Message_PrinterOStream::Send(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::Message_Gravity theGravity, bool putEndl)
{
	((::Message_PrinterOStream*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, (::Message_Gravity)theGravity, putEndl);
}

void Macad::Occt::Message_PrinterOStream::Send(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::Message_Gravity theGravity)
{
	((::Message_PrinterOStream*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, (::Message_Gravity)theGravity, true);
}

void Macad::Occt::Message_PrinterOStream::Send(Macad::Occt::TCollection_ExtendedString^ theString, Macad::Occt::Message_Gravity theGravity, bool putEndl)
{
	((::Message_PrinterOStream*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, (::Message_Gravity)theGravity, putEndl);
}

void Macad::Occt::Message_PrinterOStream::Send(Macad::Occt::TCollection_ExtendedString^ theString, Macad::Occt::Message_Gravity theGravity)
{
	((::Message_PrinterOStream*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, (::Message_Gravity)theGravity, true);
}


Macad::Occt::Message_PrinterOStream^ Macad::Occt::Message_PrinterOStream::CreateDowncasted(::Message_PrinterOStream* instance)
{
	return gcnew Macad::Occt::Message_PrinterOStream( instance );
}



//---------------------------------------------------------------------
//  Class  Message_ProgressScale
//---------------------------------------------------------------------

Macad::Occt::Message_ProgressScale::Message_ProgressScale()
	: BaseClass<::Message_ProgressScale>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ProgressScale();
}

Macad::Occt::Message_ProgressScale::Message_ProgressScale(Macad::Occt::Message_ProgressScale^ parameter1)
	: BaseClass<::Message_ProgressScale>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ProgressScale(*(::Message_ProgressScale*)parameter1->NativeInstance);
}

void Macad::Occt::Message_ProgressScale::SetName(System::String^ theName)
{
	const char* sz_theName = (char*)(void*)Marshal::StringToHGlobalAnsi(theName);
	((::Message_ProgressScale*)_NativeInstance)->SetName(sz_theName);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theName);
}

void Macad::Occt::Message_ProgressScale::SetName(Macad::Occt::TCollection_HAsciiString^ theName)
{
	Handle(::TCollection_HAsciiString) h_theName = theName->NativeInstance;
	((::Message_ProgressScale*)_NativeInstance)->SetName(h_theName);
	theName->NativeInstance = h_theName.get();
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::Message_ProgressScale::GetName()
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::Message_ProgressScale*)_NativeInstance)->GetName();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

void Macad::Occt::Message_ProgressScale::SetMin(double theMin)
{
	((::Message_ProgressScale*)_NativeInstance)->SetMin(theMin);
}

double Macad::Occt::Message_ProgressScale::GetMin()
{
	return ((::Message_ProgressScale*)_NativeInstance)->GetMin();
}

void Macad::Occt::Message_ProgressScale::SetMax(double theMax)
{
	((::Message_ProgressScale*)_NativeInstance)->SetMax(theMax);
}

double Macad::Occt::Message_ProgressScale::GetMax()
{
	return ((::Message_ProgressScale*)_NativeInstance)->GetMax();
}

void Macad::Occt::Message_ProgressScale::SetRange(double min, double max)
{
	((::Message_ProgressScale*)_NativeInstance)->SetRange(min, max);
}

void Macad::Occt::Message_ProgressScale::SetStep(double theStep)
{
	((::Message_ProgressScale*)_NativeInstance)->SetStep(theStep);
}

double Macad::Occt::Message_ProgressScale::GetStep()
{
	return ((::Message_ProgressScale*)_NativeInstance)->GetStep();
}

void Macad::Occt::Message_ProgressScale::SetInfinite(bool theInfinite)
{
	((::Message_ProgressScale*)_NativeInstance)->SetInfinite(theInfinite);
}

void Macad::Occt::Message_ProgressScale::SetInfinite()
{
	((::Message_ProgressScale*)_NativeInstance)->SetInfinite(true);
}

bool Macad::Occt::Message_ProgressScale::GetInfinite()
{
	return ((::Message_ProgressScale*)_NativeInstance)->GetInfinite();
}

void Macad::Occt::Message_ProgressScale::SetScale(double min, double max, double step, bool theInfinite)
{
	((::Message_ProgressScale*)_NativeInstance)->SetScale(min, max, step, theInfinite);
}

void Macad::Occt::Message_ProgressScale::SetScale(double min, double max, double step)
{
	((::Message_ProgressScale*)_NativeInstance)->SetScale(min, max, step, true);
}

void Macad::Occt::Message_ProgressScale::SetSpan(double first, double last)
{
	((::Message_ProgressScale*)_NativeInstance)->SetSpan(first, last);
}

double Macad::Occt::Message_ProgressScale::GetFirst()
{
	return ((::Message_ProgressScale*)_NativeInstance)->GetFirst();
}

double Macad::Occt::Message_ProgressScale::GetLast()
{
	return ((::Message_ProgressScale*)_NativeInstance)->GetLast();
}

double Macad::Occt::Message_ProgressScale::LocalToBase(double val)
{
	return ((::Message_ProgressScale*)_NativeInstance)->LocalToBase(val);
}

double Macad::Occt::Message_ProgressScale::BaseToLocal(double val)
{
	return ((::Message_ProgressScale*)_NativeInstance)->BaseToLocal(val);
}




//---------------------------------------------------------------------
//  Class  Message
//---------------------------------------------------------------------

Macad::Occt::Message::Message()
	: BaseClass<::Message>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message();
}

Macad::Occt::Message::Message(Macad::Occt::Message^ parameter1)
	: BaseClass<::Message>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message(*(::Message*)parameter1->NativeInstance);
}

Macad::Occt::Message_Messenger^ Macad::Occt::Message::DefaultMessenger()
{
	Handle(::Message_Messenger) _result;
	_result = ::Message::DefaultMessenger();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Messenger::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Message::FillTime(int Hour, int Minute, double Second)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Message::FillTime(Hour, Minute, Second);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}




//---------------------------------------------------------------------
//  Class  Message_Alert
//---------------------------------------------------------------------

Macad::Occt::Message_Alert::Message_Alert(Macad::Occt::Message_Alert^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_Alert(*(::Message_Alert*)parameter1->NativeInstance);
}

Macad::Occt::Message_Alert::Message_Alert()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_Alert();
}

System::String^ Macad::Occt::Message_Alert::GetMessageKey()
{
	Standard_CString _result;
	_result = ((::Message_Alert*)_NativeInstance)->GetMessageKey();
	return gcnew System::String(_result);
}

bool Macad::Occt::Message_Alert::SupportsMerge()
{
	return ((::Message_Alert*)_NativeInstance)->SupportsMerge();
}

bool Macad::Occt::Message_Alert::Merge(Macad::Occt::Message_Alert^ theTarget)
{
	Handle(::Message_Alert) h_theTarget = theTarget->NativeInstance;
	return ((::Message_Alert*)_NativeInstance)->Merge(h_theTarget);
	theTarget->NativeInstance = h_theTarget.get();
}


Macad::Occt::Message_Alert^ Macad::Occt::Message_Alert::CreateDowncasted(::Message_Alert* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::TopoDS_AlertWithShape)))
		return Macad::Occt::TopoDS_AlertWithShape::CreateDowncasted((::TopoDS_AlertWithShape*)instance);

	return gcnew Macad::Occt::Message_Alert( instance );
}



//---------------------------------------------------------------------
//  Class  Message_ExecStatus
//---------------------------------------------------------------------

Macad::Occt::Message_ExecStatus::Message_ExecStatus()
	: BaseClass<::Message_ExecStatus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ExecStatus();
}

Macad::Occt::Message_ExecStatus::Message_ExecStatus(Macad::Occt::Message_Status status)
	: BaseClass<::Message_ExecStatus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ExecStatus((::Message_Status)status);
}

Macad::Occt::Message_ExecStatus::Message_ExecStatus(Macad::Occt::Message_ExecStatus^ parameter1)
	: BaseClass<::Message_ExecStatus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ExecStatus(*(::Message_ExecStatus*)parameter1->NativeInstance);
}

void Macad::Occt::Message_ExecStatus::Set(Macad::Occt::Message_Status status)
{
	((::Message_ExecStatus*)_NativeInstance)->Set((::Message_Status)status);
}

bool Macad::Occt::Message_ExecStatus::IsSet(Macad::Occt::Message_Status status)
{
	return ((::Message_ExecStatus*)_NativeInstance)->IsSet((::Message_Status)status);
}

void Macad::Occt::Message_ExecStatus::Clear(Macad::Occt::Message_Status status)
{
	((::Message_ExecStatus*)_NativeInstance)->Clear((::Message_Status)status);
}

bool Macad::Occt::Message_ExecStatus::IsDone()
{
	return ((::Message_ExecStatus*)_NativeInstance)->IsDone();
}

bool Macad::Occt::Message_ExecStatus::IsFail()
{
	return ((::Message_ExecStatus*)_NativeInstance)->IsFail();
}

bool Macad::Occt::Message_ExecStatus::IsWarn()
{
	return ((::Message_ExecStatus*)_NativeInstance)->IsWarn();
}

bool Macad::Occt::Message_ExecStatus::IsAlarm()
{
	return ((::Message_ExecStatus*)_NativeInstance)->IsAlarm();
}

void Macad::Occt::Message_ExecStatus::SetAllDone()
{
	((::Message_ExecStatus*)_NativeInstance)->SetAllDone();
}

void Macad::Occt::Message_ExecStatus::SetAllWarn()
{
	((::Message_ExecStatus*)_NativeInstance)->SetAllWarn();
}

void Macad::Occt::Message_ExecStatus::SetAllAlarm()
{
	((::Message_ExecStatus*)_NativeInstance)->SetAllAlarm();
}

void Macad::Occt::Message_ExecStatus::SetAllFail()
{
	((::Message_ExecStatus*)_NativeInstance)->SetAllFail();
}

void Macad::Occt::Message_ExecStatus::ClearAllDone()
{
	((::Message_ExecStatus*)_NativeInstance)->ClearAllDone();
}

void Macad::Occt::Message_ExecStatus::ClearAllWarn()
{
	((::Message_ExecStatus*)_NativeInstance)->ClearAllWarn();
}

void Macad::Occt::Message_ExecStatus::ClearAllAlarm()
{
	((::Message_ExecStatus*)_NativeInstance)->ClearAllAlarm();
}

void Macad::Occt::Message_ExecStatus::ClearAllFail()
{
	((::Message_ExecStatus*)_NativeInstance)->ClearAllFail();
}

void Macad::Occt::Message_ExecStatus::Clear()
{
	((::Message_ExecStatus*)_NativeInstance)->Clear();
}

void Macad::Occt::Message_ExecStatus::Add(Macad::Occt::Message_ExecStatus^ theOther)
{
	((::Message_ExecStatus*)_NativeInstance)->Add(*(::Message_ExecStatus*)theOther->NativeInstance);
}

void Macad::Occt::Message_ExecStatus::And(Macad::Occt::Message_ExecStatus^ theOther)
{
	((::Message_ExecStatus*)_NativeInstance)->And(*(::Message_ExecStatus*)theOther->NativeInstance);
}

int Macad::Occt::Message_ExecStatus::StatusIndex(Macad::Occt::Message_Status status)
{
	return ::Message_ExecStatus::StatusIndex((::Message_Status)status);
}

int Macad::Occt::Message_ExecStatus::LocalStatusIndex(Macad::Occt::Message_Status status)
{
	return ::Message_ExecStatus::LocalStatusIndex((::Message_Status)status);
}

Macad::Occt::Message_StatusType Macad::Occt::Message_ExecStatus::TypeOfStatus(Macad::Occt::Message_Status status)
{
	return (Macad::Occt::Message_StatusType)::Message_ExecStatus::TypeOfStatus((::Message_Status)status);
}

Macad::Occt::Message_Status Macad::Occt::Message_ExecStatus::StatusByIndex(int theIndex)
{
	return (Macad::Occt::Message_Status)::Message_ExecStatus::StatusByIndex(theIndex);
}




//---------------------------------------------------------------------
//  Class  Message_Report
//---------------------------------------------------------------------

Macad::Occt::Message_Report::Message_Report()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_Report();
}

void Macad::Occt::Message_Report::AddAlert(Macad::Occt::Message_Gravity theGravity, Macad::Occt::Message_Alert^ theAlert)
{
	Handle(::Message_Alert) h_theAlert = theAlert->NativeInstance;
	((::Message_Report*)_NativeInstance)->AddAlert((::Message_Gravity)theGravity, h_theAlert);
	theAlert->NativeInstance = h_theAlert.get();
}

Macad::Occt::Message_ListOfAlert^ Macad::Occt::Message_Report::GetAlerts(Macad::Occt::Message_Gravity theGravity)
{
	::Message_ListOfAlert* _result = new ::Message_ListOfAlert();
	*_result =  (::Message_ListOfAlert)((::Message_Report*)_NativeInstance)->GetAlerts((::Message_Gravity)theGravity);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ListOfAlert(_result);
}

void Macad::Occt::Message_Report::Clear()
{
	((::Message_Report*)_NativeInstance)->Clear();
}

void Macad::Occt::Message_Report::Clear(Macad::Occt::Message_Gravity theGravity)
{
	((::Message_Report*)_NativeInstance)->Clear((::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Report::SendMessages(Macad::Occt::Message_Messenger^ theMessenger)
{
	Handle(::Message_Messenger) h_theMessenger = theMessenger->NativeInstance;
	((::Message_Report*)_NativeInstance)->SendMessages(h_theMessenger);
	theMessenger->NativeInstance = h_theMessenger.get();
}

void Macad::Occt::Message_Report::SendMessages(Macad::Occt::Message_Messenger^ theMessenger, Macad::Occt::Message_Gravity theGravity)
{
	Handle(::Message_Messenger) h_theMessenger = theMessenger->NativeInstance;
	((::Message_Report*)_NativeInstance)->SendMessages(h_theMessenger, (::Message_Gravity)theGravity);
	theMessenger->NativeInstance = h_theMessenger.get();
}

void Macad::Occt::Message_Report::Merge(Macad::Occt::Message_Report^ theOther)
{
	Handle(::Message_Report) h_theOther = theOther->NativeInstance;
	((::Message_Report*)_NativeInstance)->Merge(h_theOther);
	theOther->NativeInstance = h_theOther.get();
}

void Macad::Occt::Message_Report::Merge(Macad::Occt::Message_Report^ theOther, Macad::Occt::Message_Gravity theGravity)
{
	Handle(::Message_Report) h_theOther = theOther->NativeInstance;
	((::Message_Report*)_NativeInstance)->Merge(h_theOther, (::Message_Gravity)theGravity);
	theOther->NativeInstance = h_theOther.get();
}


Macad::Occt::Message_Report^ Macad::Occt::Message_Report::CreateDowncasted(::Message_Report* instance)
{
	return gcnew Macad::Occt::Message_Report( instance );
}


