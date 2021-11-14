// Generated wrapper code for package Message

#include "OcctPCH.h"
#include "Message.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Message.h"
#include "Standard.h"
#include "TCollection.h"
#include "TopoDS.h"
#include "TColStd.h"


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

void Macad::Occt::Message_Printer::Send(Macad::Occt::TCollection_ExtendedString^ theString, Macad::Occt::Message_Gravity theGravity)
{
	((::Message_Printer*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, (::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Printer::Send(System::String^ theString, Macad::Occt::Message_Gravity theGravity)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	((::Message_Printer*)_NativeInstance)->Send(sz_theString, (::Message_Gravity)theGravity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::Message_Printer::Send(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::Message_Gravity theGravity)
{
	((::Message_Printer*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, (::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Printer::SendObject(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Message_Gravity theGravity)
{
	Handle(::Standard_Transient) h_theObject = theObject->NativeInstance;
	((::Message_Printer*)_NativeInstance)->SendObject(h_theObject, (::Message_Gravity)theGravity);
	theObject->NativeInstance = h_theObject.get();
}


Macad::Occt::Message_Printer^ Macad::Occt::Message_Printer::CreateDowncasted(::Message_Printer* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Message_PrinterOStream)))
		return Macad::Occt::Message_PrinterOStream::CreateDowncasted((::Message_PrinterOStream*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Message_PrinterSystemLog)))
		return Macad::Occt::Message_PrinterSystemLog::CreateDowncasted((::Message_PrinterSystemLog*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Message_PrinterToReport)))
		return Macad::Occt::Message_PrinterToReport::CreateDowncasted((::Message_PrinterToReport*)instance);

	return gcnew Macad::Occt::Message_Printer( instance );
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

void Macad::Occt::Message_Messenger::Send(System::String^ theString, Macad::Occt::Message_Gravity theGravity)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	((::Message_Messenger*)_NativeInstance)->Send(sz_theString, (::Message_Gravity)theGravity);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::Message_Messenger::Send(System::String^ theString)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	((::Message_Messenger*)_NativeInstance)->Send(sz_theString, Message_Warning);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::Message_Gravity theGravity)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, (::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_AsciiString^ theString)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, Message_Warning);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_ExtendedString^ theString, Macad::Occt::Message_Gravity theGravity)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, (::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_ExtendedString^ theString)
{
	((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, Message_Warning);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Message_Gravity theGravity)
{
	Handle(::Standard_Transient) h_theObject = theObject->NativeInstance;
	((::Message_Messenger*)_NativeInstance)->Send(h_theObject, (::Message_Gravity)theGravity);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::Standard_Transient^ theObject)
{
	Handle(::Standard_Transient) h_theObject = theObject->NativeInstance;
	((::Message_Messenger*)_NativeInstance)->Send(h_theObject, Message_Warning);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::Message_Messenger::SendFail(Macad::Occt::TCollection_AsciiString^ theMessage)
{
	((::Message_Messenger*)_NativeInstance)->SendFail(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message_Messenger::SendAlarm(Macad::Occt::TCollection_AsciiString^ theMessage)
{
	((::Message_Messenger*)_NativeInstance)->SendAlarm(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message_Messenger::SendWarning(Macad::Occt::TCollection_AsciiString^ theMessage)
{
	((::Message_Messenger*)_NativeInstance)->SendWarning(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message_Messenger::SendInfo(Macad::Occt::TCollection_AsciiString^ theMessage)
{
	((::Message_Messenger*)_NativeInstance)->SendInfo(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message_Messenger::SendTrace(Macad::Occt::TCollection_AsciiString^ theMessage)
{
	((::Message_Messenger*)_NativeInstance)->SendTrace(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}


Macad::Occt::Message_Messenger^ Macad::Occt::Message_Messenger::CreateDowncasted(::Message_Messenger* instance)
{
	return gcnew Macad::Occt::Message_Messenger( instance );
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

bool Macad::Occt::Message_Report::IsActiveInMessenger(Macad::Occt::Message_Messenger^ theMessenger)
{
	Handle(::Message_Messenger) h_theMessenger = theMessenger->NativeInstance;
	return ((::Message_Report*)_NativeInstance)->IsActiveInMessenger(h_theMessenger);
	theMessenger->NativeInstance = h_theMessenger.get();
}

bool Macad::Occt::Message_Report::IsActiveInMessenger()
{
	return ((::Message_Report*)_NativeInstance)->IsActiveInMessenger(0);
}

void Macad::Occt::Message_Report::ActivateInMessenger(bool toActivate, Macad::Occt::Message_Messenger^ theMessenger)
{
	Handle(::Message_Messenger) h_theMessenger = theMessenger->NativeInstance;
	((::Message_Report*)_NativeInstance)->ActivateInMessenger(toActivate, h_theMessenger);
	theMessenger->NativeInstance = h_theMessenger.get();
}

void Macad::Occt::Message_Report::ActivateInMessenger(bool toActivate)
{
	((::Message_Report*)_NativeInstance)->ActivateInMessenger(toActivate, 0);
}

void Macad::Occt::Message_Report::UpdateActiveInMessenger(Macad::Occt::Message_Messenger^ theMessenger)
{
	Handle(::Message_Messenger) h_theMessenger = theMessenger->NativeInstance;
	((::Message_Report*)_NativeInstance)->UpdateActiveInMessenger(h_theMessenger);
	theMessenger->NativeInstance = h_theMessenger.get();
}

void Macad::Occt::Message_Report::UpdateActiveInMessenger()
{
	((::Message_Report*)_NativeInstance)->UpdateActiveInMessenger(0);
}

void Macad::Occt::Message_Report::AddLevel(Macad::Occt::Message_Level^ theLevel, Macad::Occt::TCollection_AsciiString^ theName)
{
	((::Message_Report*)_NativeInstance)->AddLevel((::Message_Level*)theLevel->NativeInstance, *(::TCollection_AsciiString*)theName->NativeInstance);
}

void Macad::Occt::Message_Report::RemoveLevel(Macad::Occt::Message_Level^ theLevel)
{
	((::Message_Report*)_NativeInstance)->RemoveLevel((::Message_Level*)theLevel->NativeInstance);
}

void Macad::Occt::Message_Report::Clear()
{
	((::Message_Report*)_NativeInstance)->Clear();
}

void Macad::Occt::Message_Report::Clear(Macad::Occt::Message_Gravity theGravity)
{
	((::Message_Report*)_NativeInstance)->Clear((::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Report::SetActiveMetric(Macad::Occt::Message_MetricType theMetricType, bool theActivate)
{
	((::Message_Report*)_NativeInstance)->SetActiveMetric((::Message_MetricType)theMetricType, theActivate);
}

void Macad::Occt::Message_Report::ClearMetrics()
{
	((::Message_Report*)_NativeInstance)->ClearMetrics();
}

int Macad::Occt::Message_Report::Limit()
{
	return ((::Message_Report*)_NativeInstance)->Limit();
}

void Macad::Occt::Message_Report::SetLimit(int theLimit)
{
	((::Message_Report*)_NativeInstance)->SetLimit(theLimit);
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

void Macad::Occt::Message::Send(Macad::Occt::TCollection_AsciiString^ theMessage, Macad::Occt::Message_Gravity theGravity)
{
	::Message::Send(*(::TCollection_AsciiString*)theMessage->NativeInstance, (::Message_Gravity)theGravity);
}

void Macad::Occt::Message::SendFail(Macad::Occt::TCollection_AsciiString^ theMessage)
{
	::Message::SendFail(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message::SendAlarm(Macad::Occt::TCollection_AsciiString^ theMessage)
{
	::Message::SendAlarm(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message::SendWarning(Macad::Occt::TCollection_AsciiString^ theMessage)
{
	::Message::SendWarning(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message::SendInfo(Macad::Occt::TCollection_AsciiString^ theMessage)
{
	::Message::SendInfo(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message::SendTrace(Macad::Occt::TCollection_AsciiString^ theMessage)
{
	::Message::SendTrace(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Message::FillTime(int Hour, int Minute, double Second)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Message::FillTime(Hour, Minute, Second);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Message_Report^ Macad::Occt::Message::DefaultReport(bool theToCreate)
{
	Handle(::Message_Report) _result;
	_result = ::Message::DefaultReport(theToCreate);
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Report::CreateDowncasted( _result.get());
}

Macad::Occt::Message_Report^ Macad::Occt::Message::DefaultReport()
{
	Handle(::Message_Report) _result;
	_result = ::Message::DefaultReport(false);
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Report::CreateDowncasted( _result.get());
}

bool Macad::Occt::Message::MetricFromString(System::String^ theString, Macad::Occt::Message_MetricType% theType)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	pin_ptr<Macad::Occt::Message_MetricType> pp_theType = &theType;
	return ::Message::MetricFromString(sz_theString, *(::Message_MetricType*)pp_theType);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

System::String^ Macad::Occt::Message::MetricToString(Macad::Occt::Message_MetricType theType)
{
	Standard_CString _result;
	_result = ::Message::MetricToString((::Message_MetricType)theType);
	return gcnew System::String(_result);
}

Macad::Occt::Message_MetricType Macad::Occt::Message::MetricFromString(System::String^ theString)
{
	const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
	return (Macad::Occt::Message_MetricType)::Message::MetricFromString(sz_theString);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
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

	if (instance->IsKind(STANDARD_TYPE(::Message_AlertExtended)))
		return Macad::Occt::Message_AlertExtended::CreateDowncasted((::Message_AlertExtended*)instance);
	if (instance->IsKind(STANDARD_TYPE(::TopoDS_AlertWithShape)))
		return Macad::Occt::TopoDS_AlertWithShape::CreateDowncasted((::TopoDS_AlertWithShape*)instance);

	return gcnew Macad::Occt::Message_Alert( instance );
}



//---------------------------------------------------------------------
//  Class  Message_Attribute
//---------------------------------------------------------------------

Macad::Occt::Message_Attribute::Message_Attribute(Macad::Occt::TCollection_AsciiString^ theName)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_Attribute(*(::TCollection_AsciiString*)theName->NativeInstance);
}

Macad::Occt::Message_Attribute::Message_Attribute(Macad::Occt::Message_Attribute^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_Attribute(*(::Message_Attribute*)parameter1->NativeInstance);
}

System::String^ Macad::Occt::Message_Attribute::GetMessageKey()
{
	Standard_CString _result;
	_result = ((::Message_Attribute*)_NativeInstance)->GetMessageKey();
	return gcnew System::String(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Message_Attribute::GetName()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Message_Attribute*)_NativeInstance)->GetName();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Message_Attribute::SetName(Macad::Occt::TCollection_AsciiString^ theName)
{
	((::Message_Attribute*)_NativeInstance)->SetName(*(::TCollection_AsciiString*)theName->NativeInstance);
}


Macad::Occt::Message_Attribute^ Macad::Occt::Message_Attribute::CreateDowncasted(::Message_Attribute* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Message_AttributeMeter)))
		return Macad::Occt::Message_AttributeMeter::CreateDowncasted((::Message_AttributeMeter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Message_AttributeObject)))
		return Macad::Occt::Message_AttributeObject::CreateDowncasted((::Message_AttributeObject*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Message_AttributeStream)))
		return Macad::Occt::Message_AttributeStream::CreateDowncasted((::Message_AttributeStream*)instance);

	return gcnew Macad::Occt::Message_Attribute( instance );
}



//---------------------------------------------------------------------
//  Class  Message_CompositeAlerts
//---------------------------------------------------------------------

Macad::Occt::Message_CompositeAlerts::Message_CompositeAlerts()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_CompositeAlerts();
}

Macad::Occt::Message_CompositeAlerts::Message_CompositeAlerts(Macad::Occt::Message_CompositeAlerts^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_CompositeAlerts(*(::Message_CompositeAlerts*)parameter1->NativeInstance);
}

Macad::Occt::Message_ListOfAlert^ Macad::Occt::Message_CompositeAlerts::Alerts(Macad::Occt::Message_Gravity theGravity)
{
	::Message_ListOfAlert* _result = new ::Message_ListOfAlert();
	*_result =  (::Message_ListOfAlert)((::Message_CompositeAlerts*)_NativeInstance)->Alerts((::Message_Gravity)theGravity);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ListOfAlert(_result);
}

bool Macad::Occt::Message_CompositeAlerts::AddAlert(Macad::Occt::Message_Gravity theGravity, Macad::Occt::Message_Alert^ theAlert)
{
	Handle(::Message_Alert) h_theAlert = theAlert->NativeInstance;
	return ((::Message_CompositeAlerts*)_NativeInstance)->AddAlert((::Message_Gravity)theGravity, h_theAlert);
	theAlert->NativeInstance = h_theAlert.get();
}

bool Macad::Occt::Message_CompositeAlerts::RemoveAlert(Macad::Occt::Message_Gravity theGravity, Macad::Occt::Message_Alert^ theAlert)
{
	Handle(::Message_Alert) h_theAlert = theAlert->NativeInstance;
	return ((::Message_CompositeAlerts*)_NativeInstance)->RemoveAlert((::Message_Gravity)theGravity, h_theAlert);
	theAlert->NativeInstance = h_theAlert.get();
}

bool Macad::Occt::Message_CompositeAlerts::HasAlert(Macad::Occt::Message_Alert^ theAlert)
{
	Handle(::Message_Alert) h_theAlert = theAlert->NativeInstance;
	return ((::Message_CompositeAlerts*)_NativeInstance)->HasAlert(h_theAlert);
	theAlert->NativeInstance = h_theAlert.get();
}

void Macad::Occt::Message_CompositeAlerts::Clear()
{
	((::Message_CompositeAlerts*)_NativeInstance)->Clear();
}

void Macad::Occt::Message_CompositeAlerts::Clear(Macad::Occt::Message_Gravity theGravity)
{
	((::Message_CompositeAlerts*)_NativeInstance)->Clear((::Message_Gravity)theGravity);
}


Macad::Occt::Message_CompositeAlerts^ Macad::Occt::Message_CompositeAlerts::CreateDowncasted(::Message_CompositeAlerts* instance)
{
	return gcnew Macad::Occt::Message_CompositeAlerts( instance );
}



//---------------------------------------------------------------------
//  Class  Message_AlertExtended
//---------------------------------------------------------------------

Macad::Occt::Message_AlertExtended::Message_AlertExtended()
	: Macad::Occt::Message_Alert(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_AlertExtended();
}

Macad::Occt::Message_AlertExtended::Message_AlertExtended(Macad::Occt::Message_AlertExtended^ parameter1)
	: Macad::Occt::Message_Alert(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_AlertExtended(*(::Message_AlertExtended*)parameter1->NativeInstance);
}

Macad::Occt::Message_Alert^ Macad::Occt::Message_AlertExtended::AddAlert(Macad::Occt::Message_Report^ theReport, Macad::Occt::Message_Attribute^ theAttribute, Macad::Occt::Message_Gravity theGravity)
{
	Handle(::Message_Report) h_theReport = theReport->NativeInstance;
	Handle(::Message_Attribute) h_theAttribute = theAttribute->NativeInstance;
	Handle(::Message_Alert) _result;
	_result = ::Message_AlertExtended::AddAlert(h_theReport, h_theAttribute, (::Message_Gravity)theGravity);
	theReport->NativeInstance = h_theReport.get();
	theAttribute->NativeInstance = h_theAttribute.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Alert::CreateDowncasted( _result.get());
}

System::String^ Macad::Occt::Message_AlertExtended::GetMessageKey()
{
	Standard_CString _result;
	_result = ((::Message_AlertExtended*)_NativeInstance)->GetMessageKey();
	return gcnew System::String(_result);
}

Macad::Occt::Message_Attribute^ Macad::Occt::Message_AlertExtended::Attribute()
{
	Handle(::Message_Attribute) _result;
	_result = ((::Message_AlertExtended*)_NativeInstance)->Attribute();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Attribute::CreateDowncasted( _result.get());
}

void Macad::Occt::Message_AlertExtended::SetAttribute(Macad::Occt::Message_Attribute^ theAttribute)
{
	Handle(::Message_Attribute) h_theAttribute = theAttribute->NativeInstance;
	((::Message_AlertExtended*)_NativeInstance)->SetAttribute(h_theAttribute);
	theAttribute->NativeInstance = h_theAttribute.get();
}

Macad::Occt::Message_CompositeAlerts^ Macad::Occt::Message_AlertExtended::CompositeAlerts(bool theToCreate)
{
	Handle(::Message_CompositeAlerts) _result;
	_result = ((::Message_AlertExtended*)_NativeInstance)->CompositeAlerts(theToCreate);
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_CompositeAlerts::CreateDowncasted( _result.get());
}

Macad::Occt::Message_CompositeAlerts^ Macad::Occt::Message_AlertExtended::CompositeAlerts()
{
	Handle(::Message_CompositeAlerts) _result;
	_result = ((::Message_AlertExtended*)_NativeInstance)->CompositeAlerts(false);
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_CompositeAlerts::CreateDowncasted( _result.get());
}

bool Macad::Occt::Message_AlertExtended::SupportsMerge()
{
	return ((::Message_AlertExtended*)_NativeInstance)->SupportsMerge();
}

bool Macad::Occt::Message_AlertExtended::Merge(Macad::Occt::Message_Alert^ theTarget)
{
	Handle(::Message_Alert) h_theTarget = theTarget->NativeInstance;
	return ((::Message_AlertExtended*)_NativeInstance)->Merge(h_theTarget);
	theTarget->NativeInstance = h_theTarget.get();
}


Macad::Occt::Message_AlertExtended^ Macad::Occt::Message_AlertExtended::CreateDowncasted(::Message_AlertExtended* instance)
{
	return gcnew Macad::Occt::Message_AlertExtended( instance );
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
//  Class  Message_AttributeMeter
//---------------------------------------------------------------------

Macad::Occt::Message_AttributeMeter::Message_AttributeMeter(Macad::Occt::TCollection_AsciiString^ theName)
	: Macad::Occt::Message_Attribute(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_AttributeMeter(*(::TCollection_AsciiString*)theName->NativeInstance);
}

Macad::Occt::Message_AttributeMeter::Message_AttributeMeter(Macad::Occt::Message_AttributeMeter^ parameter1)
	: Macad::Occt::Message_Attribute(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_AttributeMeter(*(::Message_AttributeMeter*)parameter1->NativeInstance);
}

double Macad::Occt::Message_AttributeMeter::UndefinedMetricValue()
{
	return ::Message_AttributeMeter::UndefinedMetricValue();
}

bool Macad::Occt::Message_AttributeMeter::HasMetric(Macad::Occt::Message_MetricType% theMetric)
{
	pin_ptr<Macad::Occt::Message_MetricType> pp_theMetric = &theMetric;
	return ((::Message_AttributeMeter*)_NativeInstance)->HasMetric(*(::Message_MetricType*)pp_theMetric);
}

bool Macad::Occt::Message_AttributeMeter::IsMetricValid(Macad::Occt::Message_MetricType% theMetric)
{
	pin_ptr<Macad::Occt::Message_MetricType> pp_theMetric = &theMetric;
	return ((::Message_AttributeMeter*)_NativeInstance)->IsMetricValid(*(::Message_MetricType*)pp_theMetric);
}

double Macad::Occt::Message_AttributeMeter::StartValue(Macad::Occt::Message_MetricType% theMetric)
{
	pin_ptr<Macad::Occt::Message_MetricType> pp_theMetric = &theMetric;
	return ((::Message_AttributeMeter*)_NativeInstance)->StartValue(*(::Message_MetricType*)pp_theMetric);
}

void Macad::Occt::Message_AttributeMeter::SetStartValue(Macad::Occt::Message_MetricType% theMetric, double theValue)
{
	pin_ptr<Macad::Occt::Message_MetricType> pp_theMetric = &theMetric;
	((::Message_AttributeMeter*)_NativeInstance)->SetStartValue(*(::Message_MetricType*)pp_theMetric, theValue);
}

double Macad::Occt::Message_AttributeMeter::StopValue(Macad::Occt::Message_MetricType% theMetric)
{
	pin_ptr<Macad::Occt::Message_MetricType> pp_theMetric = &theMetric;
	return ((::Message_AttributeMeter*)_NativeInstance)->StopValue(*(::Message_MetricType*)pp_theMetric);
}

void Macad::Occt::Message_AttributeMeter::SetStopValue(Macad::Occt::Message_MetricType% theMetric, double theValue)
{
	pin_ptr<Macad::Occt::Message_MetricType> pp_theMetric = &theMetric;
	((::Message_AttributeMeter*)_NativeInstance)->SetStopValue(*(::Message_MetricType*)pp_theMetric, theValue);
}

void Macad::Occt::Message_AttributeMeter::StartAlert(Macad::Occt::Message_AlertExtended^ theAlert)
{
	Handle(::Message_AlertExtended) h_theAlert = theAlert->NativeInstance;
	::Message_AttributeMeter::StartAlert(h_theAlert);
	theAlert->NativeInstance = h_theAlert.get();
}

void Macad::Occt::Message_AttributeMeter::StopAlert(Macad::Occt::Message_AlertExtended^ theAlert)
{
	Handle(::Message_AlertExtended) h_theAlert = theAlert->NativeInstance;
	::Message_AttributeMeter::StopAlert(h_theAlert);
	theAlert->NativeInstance = h_theAlert.get();
}

void Macad::Occt::Message_AttributeMeter::SetAlertMetrics(Macad::Occt::Message_AlertExtended^ theAlert, bool theStartValue)
{
	Handle(::Message_AlertExtended) h_theAlert = theAlert->NativeInstance;
	::Message_AttributeMeter::SetAlertMetrics(h_theAlert, theStartValue);
	theAlert->NativeInstance = h_theAlert.get();
}


Macad::Occt::Message_AttributeMeter^ Macad::Occt::Message_AttributeMeter::CreateDowncasted(::Message_AttributeMeter* instance)
{
	return gcnew Macad::Occt::Message_AttributeMeter( instance );
}



//---------------------------------------------------------------------
//  Class  Message_AttributeObject
//---------------------------------------------------------------------

Macad::Occt::Message_AttributeObject::Message_AttributeObject(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::TCollection_AsciiString^ theName)
	: Macad::Occt::Message_Attribute(BaseClass::InitMode::Uninitialized)
{
	Handle(::Standard_Transient) h_theObject = theObject->NativeInstance;
	NativeInstance = new ::Message_AttributeObject(h_theObject, *(::TCollection_AsciiString*)theName->NativeInstance);
	theObject->NativeInstance = h_theObject.get();
}

Macad::Occt::Message_AttributeObject::Message_AttributeObject(Macad::Occt::Standard_Transient^ theObject)
	: Macad::Occt::Message_Attribute(BaseClass::InitMode::Uninitialized)
{
	Handle(::Standard_Transient) h_theObject = theObject->NativeInstance;
	NativeInstance = new ::Message_AttributeObject(h_theObject, ::TCollection_AsciiString());
	theObject->NativeInstance = h_theObject.get();
}

Macad::Occt::Message_AttributeObject::Message_AttributeObject(Macad::Occt::Message_AttributeObject^ parameter1)
	: Macad::Occt::Message_Attribute(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_AttributeObject(*(::Message_AttributeObject*)parameter1->NativeInstance);
}

Macad::Occt::Standard_Transient^ Macad::Occt::Message_AttributeObject::Object()
{
	Handle(::Standard_Transient) _result;
	_result = ((::Message_AttributeObject*)_NativeInstance)->Object();
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted( _result.get());
}

void Macad::Occt::Message_AttributeObject::SetObject(Macad::Occt::Standard_Transient^ theObject)
{
	Handle(::Standard_Transient) h_theObject = theObject->NativeInstance;
	((::Message_AttributeObject*)_NativeInstance)->SetObject(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}


Macad::Occt::Message_AttributeObject^ Macad::Occt::Message_AttributeObject::CreateDowncasted(::Message_AttributeObject* instance)
{
	return gcnew Macad::Occt::Message_AttributeObject( instance );
}



//---------------------------------------------------------------------
//  Class  Message_AttributeStream
//---------------------------------------------------------------------


Macad::Occt::Message_AttributeStream^ Macad::Occt::Message_AttributeStream::CreateDowncasted(::Message_AttributeStream* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::TopoDS_AlertAttribute)))
		return Macad::Occt::TopoDS_AlertAttribute::CreateDowncasted((::TopoDS_AlertAttribute*)instance);

	return gcnew Macad::Occt::Message_AttributeStream( instance );
}



//---------------------------------------------------------------------
//  Class  Message_ProgressRange
//---------------------------------------------------------------------

Macad::Occt::Message_ProgressRange::Message_ProgressRange()
	: BaseClass<::Message_ProgressRange>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ProgressRange();
}

Macad::Occt::Message_ProgressRange::Message_ProgressRange(Macad::Occt::Message_ProgressRange^ theOther)
	: BaseClass<::Message_ProgressRange>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ProgressRange(*(::Message_ProgressRange*)theOther->NativeInstance);
}

bool Macad::Occt::Message_ProgressRange::UserBreak()
{
	return ((::Message_ProgressRange*)_NativeInstance)->UserBreak();
}

bool Macad::Occt::Message_ProgressRange::More()
{
	return ((::Message_ProgressRange*)_NativeInstance)->More();
}

bool Macad::Occt::Message_ProgressRange::IsActive()
{
	return ((::Message_ProgressRange*)_NativeInstance)->IsActive();
}

void Macad::Occt::Message_ProgressRange::Close()
{
	((::Message_ProgressRange*)_NativeInstance)->Close();
}




//---------------------------------------------------------------------
//  Class  Message_ProgressScope
//---------------------------------------------------------------------

Macad::Occt::Message_ProgressScope::Message_ProgressScope()
	: BaseClass<::Message_ProgressScope>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ProgressScope();
}

Macad::Occt::Message_ProgressScope::Message_ProgressScope(Macad::Occt::Message_ProgressRange^ theRange, Macad::Occt::TCollection_AsciiString^ theName, double theMax, bool isInfinite)
	: BaseClass<::Message_ProgressScope>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ProgressScope(*(::Message_ProgressRange*)theRange->NativeInstance, *(::TCollection_AsciiString*)theName->NativeInstance, theMax, isInfinite);
}

Macad::Occt::Message_ProgressScope::Message_ProgressScope(Macad::Occt::Message_ProgressRange^ theRange, Macad::Occt::TCollection_AsciiString^ theName, double theMax)
	: BaseClass<::Message_ProgressScope>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_ProgressScope(*(::Message_ProgressRange*)theRange->NativeInstance, *(::TCollection_AsciiString*)theName->NativeInstance, theMax, false);
}

void Macad::Occt::Message_ProgressScope::SetName(Macad::Occt::TCollection_AsciiString^ theName)
{
	((::Message_ProgressScope*)_NativeInstance)->SetName(*(::TCollection_AsciiString*)theName->NativeInstance);
}

bool Macad::Occt::Message_ProgressScope::UserBreak()
{
	return ((::Message_ProgressScope*)_NativeInstance)->UserBreak();
}

bool Macad::Occt::Message_ProgressScope::More()
{
	return ((::Message_ProgressScope*)_NativeInstance)->More();
}

Macad::Occt::Message_ProgressRange^ Macad::Occt::Message_ProgressScope::Next(double theStep)
{
	::Message_ProgressRange* _result = new ::Message_ProgressRange();
	*_result = ((::Message_ProgressScope*)_NativeInstance)->Next(theStep);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ProgressRange(_result);
}

Macad::Occt::Message_ProgressRange^ Macad::Occt::Message_ProgressScope::Next()
{
	::Message_ProgressRange* _result = new ::Message_ProgressRange();
	*_result = ((::Message_ProgressScope*)_NativeInstance)->Next(1.);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ProgressRange(_result);
}

void Macad::Occt::Message_ProgressScope::Show()
{
	((::Message_ProgressScope*)_NativeInstance)->Show();
}

bool Macad::Occt::Message_ProgressScope::IsActive()
{
	return ((::Message_ProgressScope*)_NativeInstance)->IsActive();
}

System::String^ Macad::Occt::Message_ProgressScope::Name()
{
	Standard_CString _result;
	_result = ((::Message_ProgressScope*)_NativeInstance)->Name();
	return gcnew System::String(_result);
}

Macad::Occt::Message_ProgressScope^ Macad::Occt::Message_ProgressScope::Parent()
{
	::Message_ProgressScope* _result;
	_result = (::Message_ProgressScope*)((::Message_ProgressScope*)_NativeInstance)->Parent();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ProgressScope(_result);
}

double Macad::Occt::Message_ProgressScope::MaxValue()
{
	return ((::Message_ProgressScope*)_NativeInstance)->MaxValue();
}

double Macad::Occt::Message_ProgressScope::Value()
{
	return ((::Message_ProgressScope*)_NativeInstance)->Value();
}

bool Macad::Occt::Message_ProgressScope::IsInfinite()
{
	return ((::Message_ProgressScope*)_NativeInstance)->IsInfinite();
}

double Macad::Occt::Message_ProgressScope::GetPortion()
{
	return ((::Message_ProgressScope*)_NativeInstance)->GetPortion();
}

void Macad::Occt::Message_ProgressScope::Close()
{
	((::Message_ProgressScope*)_NativeInstance)->Close();
}




//---------------------------------------------------------------------
//  Class  Message_Level
//---------------------------------------------------------------------

Macad::Occt::Message_Level::Message_Level(Macad::Occt::TCollection_AsciiString^ theName)
	: BaseClass<::Message_Level>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_Level(*(::TCollection_AsciiString*)theName->NativeInstance);
}

Macad::Occt::Message_Level::Message_Level(Macad::Occt::Message_Level^ parameter1)
	: BaseClass<::Message_Level>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Message_Level(*(::Message_Level*)parameter1->NativeInstance);
}

Macad::Occt::Message_AlertExtended^ Macad::Occt::Message_Level::RootAlert()
{
	Handle(::Message_AlertExtended) _result;
	_result = ((::Message_Level*)_NativeInstance)->RootAlert();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_AlertExtended::CreateDowncasted( _result.get());
}

void Macad::Occt::Message_Level::SetRootAlert(Macad::Occt::Message_AlertExtended^ theAlert, bool isRequiredToStart)
{
	Handle(::Message_AlertExtended) h_theAlert = theAlert->NativeInstance;
	((::Message_Level*)_NativeInstance)->SetRootAlert(h_theAlert, isRequiredToStart);
	theAlert->NativeInstance = h_theAlert.get();
}

bool Macad::Occt::Message_Level::AddAlert(Macad::Occt::Message_Gravity theGravity, Macad::Occt::Message_Alert^ theAlert)
{
	Handle(::Message_Alert) h_theAlert = theAlert->NativeInstance;
	return ((::Message_Level*)_NativeInstance)->AddAlert((::Message_Gravity)theGravity, h_theAlert);
	theAlert->NativeInstance = h_theAlert.get();
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

bool Macad::Occt::Message_PrinterOStream::ToColorize()
{
	return ((::Message_PrinterOStream*)_NativeInstance)->ToColorize();
}

void Macad::Occt::Message_PrinterOStream::SetToColorize(bool theToColorize)
{
	((::Message_PrinterOStream*)_NativeInstance)->SetToColorize(theToColorize);
}


Macad::Occt::Message_PrinterOStream^ Macad::Occt::Message_PrinterOStream::CreateDowncasted(::Message_PrinterOStream* instance)
{
	return gcnew Macad::Occt::Message_PrinterOStream( instance );
}



//---------------------------------------------------------------------
//  Class  Message_PrinterSystemLog
//---------------------------------------------------------------------

Macad::Occt::Message_PrinterSystemLog::Message_PrinterSystemLog(Macad::Occt::TCollection_AsciiString^ theEventSourceName, Macad::Occt::Message_Gravity theTraceLevel)
	: Macad::Occt::Message_Printer(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_PrinterSystemLog(*(::TCollection_AsciiString*)theEventSourceName->NativeInstance, (::Message_Gravity)theTraceLevel);
}

Macad::Occt::Message_PrinterSystemLog::Message_PrinterSystemLog(Macad::Occt::TCollection_AsciiString^ theEventSourceName)
	: Macad::Occt::Message_Printer(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_PrinterSystemLog(*(::TCollection_AsciiString*)theEventSourceName->NativeInstance, Message_Info);
}

Macad::Occt::Message_PrinterSystemLog::Message_PrinterSystemLog(Macad::Occt::Message_PrinterSystemLog^ parameter1)
	: Macad::Occt::Message_Printer(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_PrinterSystemLog(*(::Message_PrinterSystemLog*)parameter1->NativeInstance);
}


Macad::Occt::Message_PrinterSystemLog^ Macad::Occt::Message_PrinterSystemLog::CreateDowncasted(::Message_PrinterSystemLog* instance)
{
	return gcnew Macad::Occt::Message_PrinterSystemLog( instance );
}



//---------------------------------------------------------------------
//  Class  Message_PrinterToReport
//---------------------------------------------------------------------

Macad::Occt::Message_PrinterToReport::Message_PrinterToReport()
	: Macad::Occt::Message_Printer(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_PrinterToReport();
}

Macad::Occt::Message_PrinterToReport::Message_PrinterToReport(Macad::Occt::Message_PrinterToReport^ parameter1)
	: Macad::Occt::Message_Printer(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Message_PrinterToReport(*(::Message_PrinterToReport*)parameter1->NativeInstance);
}

Macad::Occt::Message_Report^ Macad::Occt::Message_PrinterToReport::Report()
{
	Handle(::Message_Report) _result;
	_result = ((::Message_PrinterToReport*)_NativeInstance)->Report();
	 return _result.IsNull() ? nullptr : Macad::Occt::Message_Report::CreateDowncasted( _result.get());
}

void Macad::Occt::Message_PrinterToReport::SetReport(Macad::Occt::Message_Report^ theReport)
{
	Handle(::Message_Report) h_theReport = theReport->NativeInstance;
	((::Message_PrinterToReport*)_NativeInstance)->SetReport(h_theReport);
	theReport->NativeInstance = h_theReport.get();
}

void Macad::Occt::Message_PrinterToReport::SendObject(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Message_Gravity theGravity)
{
	Handle(::Standard_Transient) h_theObject = theObject->NativeInstance;
	((::Message_PrinterToReport*)_NativeInstance)->SendObject(h_theObject, (::Message_Gravity)theGravity);
	theObject->NativeInstance = h_theObject.get();
}


Macad::Occt::Message_PrinterToReport^ Macad::Occt::Message_PrinterToReport::CreateDowncasted(::Message_PrinterToReport* instance)
{
	return gcnew Macad::Occt::Message_PrinterToReport( instance );
}


