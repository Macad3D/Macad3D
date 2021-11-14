// Generated wrapper code for package Aspect

#include "OcctPCH.h"
#include "Aspect.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "NCollection.h"
#include "Aspect.h"
#include "TCollection.h"
#include "Quantity.h"
#include "V3d.h"
#include "WNT.h"
#include "Graphic3d.h"
#include "gp.h"
#include "Image.h"
#include "AIS.h"


//---------------------------------------------------------------------
//  Class  Aspect_XRActionMap
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRActionMap::Aspect_XRActionMap()
	: BaseClass<::Aspect_XRActionMap>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRActionMap();
}

Macad::Occt::Aspect_XRActionMap::Aspect_XRActionMap(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Aspect_XRActionMap>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Aspect_XRActionMap(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Aspect_XRActionMap::Aspect_XRActionMap(int theNbBuckets)
	: BaseClass<::Aspect_XRActionMap>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRActionMap(theNbBuckets, 0L);
}

Macad::Occt::Aspect_XRActionMap::Aspect_XRActionMap(Macad::Occt::Aspect_XRActionMap^ theOther)
	: BaseClass<::Aspect_XRActionMap>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRActionMap(*(::Aspect_XRActionMap*)theOther->NativeInstance);
}

void Macad::Occt::Aspect_XRActionMap::Exchange(Macad::Occt::Aspect_XRActionMap^ theOther)
{
	((::Aspect_XRActionMap*)_NativeInstance)->Exchange(*(::Aspect_XRActionMap*)theOther->NativeInstance);
}

int Macad::Occt::Aspect_XRActionMap::Add(Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::Aspect_XRAction^ theItem)
{
	Handle(::Aspect_XRAction) h_theItem = theItem->NativeInstance;
	return ((::Aspect_XRActionMap*)_NativeInstance)->Add(*(::TCollection_AsciiString*)theKey1->NativeInstance, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

bool Macad::Occt::Aspect_XRActionMap::Contains(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	return ((::Aspect_XRActionMap*)_NativeInstance)->Contains(*(::TCollection_AsciiString*)theKey1->NativeInstance);
}

void Macad::Occt::Aspect_XRActionMap::Substitute(int theIndex, Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::Aspect_XRAction^ theItem)
{
	Handle(::Aspect_XRAction) h_theItem = theItem->NativeInstance;
	((::Aspect_XRActionMap*)_NativeInstance)->Substitute(theIndex, *(::TCollection_AsciiString*)theKey1->NativeInstance, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Aspect_XRActionMap::Swap(int theIndex1, int theIndex2)
{
	((::Aspect_XRActionMap*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::Aspect_XRActionMap::RemoveLast()
{
	((::Aspect_XRActionMap*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::Aspect_XRActionMap::RemoveFromIndex(int theIndex)
{
	((::Aspect_XRActionMap*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::Aspect_XRActionMap::RemoveKey(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	((::Aspect_XRActionMap*)_NativeInstance)->RemoveKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Aspect_XRActionMap::FindKey(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Aspect_XRActionMap*)_NativeInstance)->FindKey(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Aspect_XRAction^ Macad::Occt::Aspect_XRActionMap::FindFromIndex(int theIndex)
{
	Handle(::Aspect_XRAction) _result;
	_result = ((::Aspect_XRActionMap*)_NativeInstance)->FindFromIndex(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_XRAction::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_XRAction^ Macad::Occt::Aspect_XRActionMap::ChangeFromIndex(int theIndex)
{
	Handle(::Aspect_XRAction) _result;
	_result = ((::Aspect_XRActionMap*)_NativeInstance)->ChangeFromIndex(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_XRAction::CreateDowncasted( _result.get());
}

int Macad::Occt::Aspect_XRActionMap::FindIndex(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	return ((::Aspect_XRActionMap*)_NativeInstance)->FindIndex(*(::TCollection_AsciiString*)theKey1->NativeInstance);
}

Macad::Occt::Aspect_XRAction^ Macad::Occt::Aspect_XRActionMap::FindFromKey(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	Handle(::Aspect_XRAction) _result;
	_result = ((::Aspect_XRActionMap*)_NativeInstance)->FindFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_XRAction::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_XRAction^ Macad::Occt::Aspect_XRActionMap::ChangeFromKey(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	Handle(::Aspect_XRAction) _result;
	_result = ((::Aspect_XRActionMap*)_NativeInstance)->ChangeFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_XRAction::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_XRAction^ Macad::Occt::Aspect_XRActionMap::Seek(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

Macad::Occt::Aspect_XRAction^ Macad::Occt::Aspect_XRActionMap::ChangeSeek(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::Aspect_XRActionMap::FindFromKey(Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::Aspect_XRAction^ theValue)
{
	Handle(::Aspect_XRAction) h_theValue = theValue->NativeInstance;
	return ((::Aspect_XRActionMap*)_NativeInstance)->FindFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance, h_theValue);
	theValue->NativeInstance = h_theValue.get();
}

void Macad::Occt::Aspect_XRActionMap::Clear(bool doReleaseMemory)
{
	((::Aspect_XRActionMap*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::Aspect_XRActionMap::Clear()
{
	((::Aspect_XRActionMap*)_NativeInstance)->Clear(true);
}

void Macad::Occt::Aspect_XRActionMap::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Aspect_XRActionMap*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::Aspect_XRActionMap::Size()
{
	return ((::Aspect_XRActionMap*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  Aspect_XRActionSetMap
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRActionSetMap::Aspect_XRActionSetMap()
	: BaseClass<::Aspect_XRActionSetMap>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRActionSetMap();
}

Macad::Occt::Aspect_XRActionSetMap::Aspect_XRActionSetMap(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Aspect_XRActionSetMap>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Aspect_XRActionSetMap(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Aspect_XRActionSetMap::Aspect_XRActionSetMap(int theNbBuckets)
	: BaseClass<::Aspect_XRActionSetMap>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRActionSetMap(theNbBuckets, 0L);
}

Macad::Occt::Aspect_XRActionSetMap::Aspect_XRActionSetMap(Macad::Occt::Aspect_XRActionSetMap^ theOther)
	: BaseClass<::Aspect_XRActionSetMap>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRActionSetMap(*(::Aspect_XRActionSetMap*)theOther->NativeInstance);
}

void Macad::Occt::Aspect_XRActionSetMap::Exchange(Macad::Occt::Aspect_XRActionSetMap^ theOther)
{
	((::Aspect_XRActionSetMap*)_NativeInstance)->Exchange(*(::Aspect_XRActionSetMap*)theOther->NativeInstance);
}

int Macad::Occt::Aspect_XRActionSetMap::Add(Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::Aspect_XRActionSet^ theItem)
{
	Handle(::Aspect_XRActionSet) h_theItem = theItem->NativeInstance;
	return ((::Aspect_XRActionSetMap*)_NativeInstance)->Add(*(::TCollection_AsciiString*)theKey1->NativeInstance, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

bool Macad::Occt::Aspect_XRActionSetMap::Contains(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	return ((::Aspect_XRActionSetMap*)_NativeInstance)->Contains(*(::TCollection_AsciiString*)theKey1->NativeInstance);
}

void Macad::Occt::Aspect_XRActionSetMap::Substitute(int theIndex, Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::Aspect_XRActionSet^ theItem)
{
	Handle(::Aspect_XRActionSet) h_theItem = theItem->NativeInstance;
	((::Aspect_XRActionSetMap*)_NativeInstance)->Substitute(theIndex, *(::TCollection_AsciiString*)theKey1->NativeInstance, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Aspect_XRActionSetMap::Swap(int theIndex1, int theIndex2)
{
	((::Aspect_XRActionSetMap*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::Aspect_XRActionSetMap::RemoveLast()
{
	((::Aspect_XRActionSetMap*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::Aspect_XRActionSetMap::RemoveFromIndex(int theIndex)
{
	((::Aspect_XRActionSetMap*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::Aspect_XRActionSetMap::RemoveKey(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	((::Aspect_XRActionSetMap*)_NativeInstance)->RemoveKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Aspect_XRActionSetMap::FindKey(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Aspect_XRActionSetMap*)_NativeInstance)->FindKey(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Aspect_XRActionSet^ Macad::Occt::Aspect_XRActionSetMap::FindFromIndex(int theIndex)
{
	Handle(::Aspect_XRActionSet) _result;
	_result = ((::Aspect_XRActionSetMap*)_NativeInstance)->FindFromIndex(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_XRActionSet::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_XRActionSet^ Macad::Occt::Aspect_XRActionSetMap::ChangeFromIndex(int theIndex)
{
	Handle(::Aspect_XRActionSet) _result;
	_result = ((::Aspect_XRActionSetMap*)_NativeInstance)->ChangeFromIndex(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_XRActionSet::CreateDowncasted( _result.get());
}

int Macad::Occt::Aspect_XRActionSetMap::FindIndex(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	return ((::Aspect_XRActionSetMap*)_NativeInstance)->FindIndex(*(::TCollection_AsciiString*)theKey1->NativeInstance);
}

Macad::Occt::Aspect_XRActionSet^ Macad::Occt::Aspect_XRActionSetMap::FindFromKey(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	Handle(::Aspect_XRActionSet) _result;
	_result = ((::Aspect_XRActionSetMap*)_NativeInstance)->FindFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_XRActionSet::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_XRActionSet^ Macad::Occt::Aspect_XRActionSetMap::ChangeFromKey(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	Handle(::Aspect_XRActionSet) _result;
	_result = ((::Aspect_XRActionSetMap*)_NativeInstance)->ChangeFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_XRActionSet::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_XRActionSet^ Macad::Occt::Aspect_XRActionSetMap::Seek(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

Macad::Occt::Aspect_XRActionSet^ Macad::Occt::Aspect_XRActionSetMap::ChangeSeek(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::Aspect_XRActionSetMap::FindFromKey(Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::Aspect_XRActionSet^ theValue)
{
	Handle(::Aspect_XRActionSet) h_theValue = theValue->NativeInstance;
	return ((::Aspect_XRActionSetMap*)_NativeInstance)->FindFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance, h_theValue);
	theValue->NativeInstance = h_theValue.get();
}

void Macad::Occt::Aspect_XRActionSetMap::Clear(bool doReleaseMemory)
{
	((::Aspect_XRActionSetMap*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::Aspect_XRActionSetMap::Clear()
{
	((::Aspect_XRActionSetMap*)_NativeInstance)->Clear(true);
}

void Macad::Occt::Aspect_XRActionSetMap::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Aspect_XRActionSetMap*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::Aspect_XRActionSetMap::Size()
{
	return ((::Aspect_XRActionSetMap*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  Aspect_TrackedDevicePoseArray
//---------------------------------------------------------------------

Macad::Occt::Aspect_TrackedDevicePoseArray::Aspect_TrackedDevicePoseArray()
	: BaseClass<::Aspect_TrackedDevicePoseArray>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_TrackedDevicePoseArray();
}

Macad::Occt::Aspect_TrackedDevicePoseArray::Aspect_TrackedDevicePoseArray(int theLower, int theUpper)
	: BaseClass<::Aspect_TrackedDevicePoseArray>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_TrackedDevicePoseArray(theLower, theUpper);
}

Macad::Occt::Aspect_TrackedDevicePoseArray::Aspect_TrackedDevicePoseArray(Macad::Occt::Aspect_TrackedDevicePoseArray^ theOther)
	: BaseClass<::Aspect_TrackedDevicePoseArray>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_TrackedDevicePoseArray(*(::Aspect_TrackedDevicePoseArray*)theOther->NativeInstance);
}

Macad::Occt::Aspect_TrackedDevicePoseArray::Aspect_TrackedDevicePoseArray(Macad::Occt::Aspect_TrackedDevicePose^ theBegin, int theLower, int theUpper)
	: BaseClass<::Aspect_TrackedDevicePoseArray>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_TrackedDevicePoseArray(*(::Aspect_TrackedDevicePose*)theBegin->NativeInstance, theLower, theUpper);
}

void Macad::Occt::Aspect_TrackedDevicePoseArray::Init(Macad::Occt::Aspect_TrackedDevicePose^ theValue)
{
	((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Init(*(::Aspect_TrackedDevicePose*)theValue->NativeInstance);
}

int Macad::Occt::Aspect_TrackedDevicePoseArray::Size()
{
	return ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Size();
}

int Macad::Occt::Aspect_TrackedDevicePoseArray::Length()
{
	return ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Length();
}

bool Macad::Occt::Aspect_TrackedDevicePoseArray::IsEmpty()
{
	return ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Aspect_TrackedDevicePoseArray::Lower()
{
	return ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Lower();
}

int Macad::Occt::Aspect_TrackedDevicePoseArray::Upper()
{
	return ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Upper();
}

bool Macad::Occt::Aspect_TrackedDevicePoseArray::IsDeletable()
{
	return ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::Aspect_TrackedDevicePoseArray::IsAllocated()
{
	return ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Aspect_TrackedDevicePoseArray^ Macad::Occt::Aspect_TrackedDevicePoseArray::Assign(Macad::Occt::Aspect_TrackedDevicePoseArray^ theOther)
{
	::Aspect_TrackedDevicePoseArray* _result = new ::Aspect_TrackedDevicePoseArray();
	*_result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Assign(*(::Aspect_TrackedDevicePoseArray*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_TrackedDevicePoseArray(_result);
}

Macad::Occt::Aspect_TrackedDevicePoseArray^ Macad::Occt::Aspect_TrackedDevicePoseArray::Move(Macad::Occt::Aspect_TrackedDevicePoseArray^ theOther)
{
	::Aspect_TrackedDevicePoseArray* _result = new ::Aspect_TrackedDevicePoseArray();
	*_result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Move(*(::Aspect_TrackedDevicePoseArray*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_TrackedDevicePoseArray(_result);
}

Macad::Occt::Aspect_TrackedDevicePose^ Macad::Occt::Aspect_TrackedDevicePoseArray::First()
{
	::Aspect_TrackedDevicePose* _result = new ::Aspect_TrackedDevicePose();
	*_result =  (::Aspect_TrackedDevicePose)((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_TrackedDevicePose(_result);
}

Macad::Occt::Aspect_TrackedDevicePose^ Macad::Occt::Aspect_TrackedDevicePoseArray::ChangeFirst()
{
	::Aspect_TrackedDevicePose* _result = new ::Aspect_TrackedDevicePose();
	*_result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_TrackedDevicePose(_result);
}

Macad::Occt::Aspect_TrackedDevicePose^ Macad::Occt::Aspect_TrackedDevicePoseArray::Last()
{
	::Aspect_TrackedDevicePose* _result = new ::Aspect_TrackedDevicePose();
	*_result =  (::Aspect_TrackedDevicePose)((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_TrackedDevicePose(_result);
}

Macad::Occt::Aspect_TrackedDevicePose^ Macad::Occt::Aspect_TrackedDevicePoseArray::ChangeLast()
{
	::Aspect_TrackedDevicePose* _result = new ::Aspect_TrackedDevicePose();
	*_result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_TrackedDevicePose(_result);
}

Macad::Occt::Aspect_TrackedDevicePose^ Macad::Occt::Aspect_TrackedDevicePoseArray::Value(int theIndex)
{
	::Aspect_TrackedDevicePose* _result = new ::Aspect_TrackedDevicePose();
	*_result =  (::Aspect_TrackedDevicePose)((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_TrackedDevicePose(_result);
}

Macad::Occt::Aspect_TrackedDevicePose^ Macad::Occt::Aspect_TrackedDevicePoseArray::ChangeValue(int theIndex)
{
	::Aspect_TrackedDevicePose* _result = new ::Aspect_TrackedDevicePose();
	*_result = ((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_TrackedDevicePose(_result);
}

void Macad::Occt::Aspect_TrackedDevicePoseArray::SetValue(int theIndex, Macad::Occt::Aspect_TrackedDevicePose^ theItem)
{
	((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->SetValue(theIndex, *(::Aspect_TrackedDevicePose*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_TrackedDevicePoseArray::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Aspect_TrackedDevicePoseArray*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  Aspect_SequenceOfColor
//---------------------------------------------------------------------

Macad::Occt::Aspect_SequenceOfColor::Aspect_SequenceOfColor()
	: BaseClass<::Aspect_SequenceOfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_SequenceOfColor();
}

Macad::Occt::Aspect_SequenceOfColor::Aspect_SequenceOfColor(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Aspect_SequenceOfColor>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Aspect_SequenceOfColor(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Aspect_SequenceOfColor::Aspect_SequenceOfColor(Macad::Occt::Aspect_SequenceOfColor^ theOther)
	: BaseClass<::Aspect_SequenceOfColor>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_SequenceOfColor(*(::Aspect_SequenceOfColor*)theOther->NativeInstance);
}

int Macad::Occt::Aspect_SequenceOfColor::Size()
{
	return ((::Aspect_SequenceOfColor*)_NativeInstance)->Size();
}

int Macad::Occt::Aspect_SequenceOfColor::Length()
{
	return ((::Aspect_SequenceOfColor*)_NativeInstance)->Length();
}

int Macad::Occt::Aspect_SequenceOfColor::Lower()
{
	return ((::Aspect_SequenceOfColor*)_NativeInstance)->Lower();
}

int Macad::Occt::Aspect_SequenceOfColor::Upper()
{
	return ((::Aspect_SequenceOfColor*)_NativeInstance)->Upper();
}

bool Macad::Occt::Aspect_SequenceOfColor::IsEmpty()
{
	return ((::Aspect_SequenceOfColor*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Aspect_SequenceOfColor::Reverse()
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Reverse();
}

void Macad::Occt::Aspect_SequenceOfColor::Exchange(int I, int J)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Aspect_SequenceOfColor::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Aspect_SequenceOfColor*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Aspect_SequenceOfColor::Clear()
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Aspect_SequenceOfColor^ Macad::Occt::Aspect_SequenceOfColor::Assign(Macad::Occt::Aspect_SequenceOfColor^ theOther)
{
	::Aspect_SequenceOfColor* _result = new ::Aspect_SequenceOfColor();
	*_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->Assign(*(::Aspect_SequenceOfColor*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_SequenceOfColor(_result);
}

void Macad::Occt::Aspect_SequenceOfColor::Remove(int theIndex)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Aspect_SequenceOfColor::Remove(int theFromIndex, int theToIndex)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Aspect_SequenceOfColor::Append(Macad::Occt::Quantity_Color^ theItem)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Append(*(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Append(Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Append(*(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Prepend(Macad::Occt::Quantity_Color^ theItem)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Prepend(*(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Prepend(Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Prepend(*(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertBefore(int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->InsertBefore(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertBefore(int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->InsertBefore(theIndex, *(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertAfter(int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->InsertAfter(theIndex, *(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::InsertAfter(int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->InsertAfter(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}

void Macad::Occt::Aspect_SequenceOfColor::Split(int theIndex, Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->Split(theIndex, *(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::First()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::ChangeFirst()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::Last()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::ChangeLast()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::Value(int theIndex)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::Aspect_SequenceOfColor*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_SequenceOfColor::ChangeValue(int theIndex)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Aspect_SequenceOfColor*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Aspect_SequenceOfColor::SetValue(int theIndex, Macad::Occt::Quantity_Color^ theItem)
{
	((::Aspect_SequenceOfColor*)_NativeInstance)->SetValue(theIndex, *(::Quantity_Color*)theItem->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Aspect_XRAnalogActionData
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRAnalogActionData::Aspect_XRAnalogActionData()
	: BaseClass<::Aspect_XRAnalogActionData>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRAnalogActionData();
}

Macad::Occt::Aspect_XRAnalogActionData::Aspect_XRAnalogActionData(Macad::Occt::Aspect_XRAnalogActionData^ parameter1)
	: BaseClass<::Aspect_XRAnalogActionData>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRAnalogActionData(*(::Aspect_XRAnalogActionData*)parameter1->NativeInstance);
}

bool Macad::Occt::Aspect_XRAnalogActionData::IsChanged()
{
	return ((::Aspect_XRAnalogActionData*)_NativeInstance)->IsChanged();
}




//---------------------------------------------------------------------
//  Class  Aspect_XRDigitalActionData
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRDigitalActionData::Aspect_XRDigitalActionData()
	: BaseClass<::Aspect_XRDigitalActionData>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRDigitalActionData();
}

Macad::Occt::Aspect_XRDigitalActionData::Aspect_XRDigitalActionData(Macad::Occt::Aspect_XRDigitalActionData^ parameter1)
	: BaseClass<::Aspect_XRDigitalActionData>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRDigitalActionData(*(::Aspect_XRDigitalActionData*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Aspect_XRHapticActionData
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRHapticActionData::Aspect_XRHapticActionData()
	: BaseClass<::Aspect_XRHapticActionData>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRHapticActionData();
}

Macad::Occt::Aspect_XRHapticActionData::Aspect_XRHapticActionData(Macad::Occt::Aspect_XRHapticActionData^ parameter1)
	: BaseClass<::Aspect_XRHapticActionData>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRHapticActionData(*(::Aspect_XRHapticActionData*)parameter1->NativeInstance);
}

bool Macad::Occt::Aspect_XRHapticActionData::IsValid()
{
	return ((::Aspect_XRHapticActionData*)_NativeInstance)->IsValid();
}




//---------------------------------------------------------------------
//  Class  Aspect_TrackedDevicePose
//---------------------------------------------------------------------

Macad::Occt::Aspect_TrackedDevicePose::Aspect_TrackedDevicePose()
	: BaseClass<::Aspect_TrackedDevicePose>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_TrackedDevicePose();
}

Macad::Occt::Aspect_TrackedDevicePose::Aspect_TrackedDevicePose(Macad::Occt::Aspect_TrackedDevicePose^ parameter1)
	: BaseClass<::Aspect_TrackedDevicePose>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_TrackedDevicePose(*(::Aspect_TrackedDevicePose*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Aspect_XRPoseActionData
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRPoseActionData::Aspect_XRPoseActionData()
	: BaseClass<::Aspect_XRPoseActionData>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRPoseActionData();
}

Macad::Occt::Aspect_XRPoseActionData::Aspect_XRPoseActionData(Macad::Occt::Aspect_XRPoseActionData^ parameter1)
	: BaseClass<::Aspect_XRPoseActionData>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_XRPoseActionData(*(::Aspect_XRPoseActionData*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Aspect_ScrollDelta
//---------------------------------------------------------------------

Macad::Occt::Aspect_ScrollDelta::Aspect_ScrollDelta()
	: BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_ScrollDelta();
}

Macad::Occt::Aspect_ScrollDelta::Aspect_ScrollDelta(double theValue, unsigned int theFlags)
	: BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_ScrollDelta(theValue, theFlags);
}

Macad::Occt::Aspect_ScrollDelta::Aspect_ScrollDelta(double theValue)
	: BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_ScrollDelta(theValue, Aspect_VKeyFlags_NONE);
}

Macad::Occt::Aspect_ScrollDelta::Aspect_ScrollDelta(Macad::Occt::Aspect_ScrollDelta^ parameter1)
	: BaseClass<::Aspect_ScrollDelta>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_ScrollDelta(*(::Aspect_ScrollDelta*)parameter1->NativeInstance);
}

bool Macad::Occt::Aspect_ScrollDelta::HasPoint()
{
	return ((::Aspect_ScrollDelta*)_NativeInstance)->HasPoint();
}

void Macad::Occt::Aspect_ScrollDelta::ResetPoint()
{
	((::Aspect_ScrollDelta*)_NativeInstance)->ResetPoint();
}




//---------------------------------------------------------------------
//  Class  Aspect_AspectFillAreaDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_AspectFillAreaDefinitionError::Aspect_AspectFillAreaDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_AspectFillAreaDefinitionError();
}

Macad::Occt::Aspect_AspectFillAreaDefinitionError::Aspect_AspectFillAreaDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_AspectFillAreaDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_AspectFillAreaDefinitionError::Aspect_AspectFillAreaDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Aspect_AspectFillAreaDefinitionError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

Macad::Occt::Aspect_AspectFillAreaDefinitionError::Aspect_AspectFillAreaDefinitionError(Macad::Occt::Aspect_AspectFillAreaDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_AspectFillAreaDefinitionError(*(::Aspect_AspectFillAreaDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_AspectFillAreaDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_AspectFillAreaDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_AspectFillAreaDefinitionError::Raise()
{
	::Aspect_AspectFillAreaDefinitionError::Raise("");
}

Macad::Occt::Aspect_AspectFillAreaDefinitionError^ Macad::Occt::Aspect_AspectFillAreaDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_AspectFillAreaDefinitionError) _result;
	_result = ::Aspect_AspectFillAreaDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectFillAreaDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_AspectFillAreaDefinitionError^ Macad::Occt::Aspect_AspectFillAreaDefinitionError::NewInstance()
{
	Handle(::Aspect_AspectFillAreaDefinitionError) _result;
	_result = ::Aspect_AspectFillAreaDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectFillAreaDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_AspectFillAreaDefinitionError^ Macad::Occt::Aspect_AspectFillAreaDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Aspect_AspectFillAreaDefinitionError) _result;
	_result = ::Aspect_AspectFillAreaDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectFillAreaDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_AspectFillAreaDefinitionError^ Macad::Occt::Aspect_AspectFillAreaDefinitionError::CreateDowncasted(::Aspect_AspectFillAreaDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_AspectFillAreaDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_AspectLineDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_AspectLineDefinitionError::Aspect_AspectLineDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_AspectLineDefinitionError();
}

Macad::Occt::Aspect_AspectLineDefinitionError::Aspect_AspectLineDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_AspectLineDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_AspectLineDefinitionError::Aspect_AspectLineDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Aspect_AspectLineDefinitionError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

Macad::Occt::Aspect_AspectLineDefinitionError::Aspect_AspectLineDefinitionError(Macad::Occt::Aspect_AspectLineDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_AspectLineDefinitionError(*(::Aspect_AspectLineDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_AspectLineDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_AspectLineDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_AspectLineDefinitionError::Raise()
{
	::Aspect_AspectLineDefinitionError::Raise("");
}

Macad::Occt::Aspect_AspectLineDefinitionError^ Macad::Occt::Aspect_AspectLineDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_AspectLineDefinitionError) _result;
	_result = ::Aspect_AspectLineDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectLineDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_AspectLineDefinitionError^ Macad::Occt::Aspect_AspectLineDefinitionError::NewInstance()
{
	Handle(::Aspect_AspectLineDefinitionError) _result;
	_result = ::Aspect_AspectLineDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectLineDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_AspectLineDefinitionError^ Macad::Occt::Aspect_AspectLineDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Aspect_AspectLineDefinitionError) _result;
	_result = ::Aspect_AspectLineDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectLineDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_AspectLineDefinitionError^ Macad::Occt::Aspect_AspectLineDefinitionError::CreateDowncasted(::Aspect_AspectLineDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_AspectLineDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_AspectMarkerDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_AspectMarkerDefinitionError::Aspect_AspectMarkerDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_AspectMarkerDefinitionError();
}

Macad::Occt::Aspect_AspectMarkerDefinitionError::Aspect_AspectMarkerDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_AspectMarkerDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_AspectMarkerDefinitionError::Aspect_AspectMarkerDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Aspect_AspectMarkerDefinitionError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

Macad::Occt::Aspect_AspectMarkerDefinitionError::Aspect_AspectMarkerDefinitionError(Macad::Occt::Aspect_AspectMarkerDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_AspectMarkerDefinitionError(*(::Aspect_AspectMarkerDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_AspectMarkerDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_AspectMarkerDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_AspectMarkerDefinitionError::Raise()
{
	::Aspect_AspectMarkerDefinitionError::Raise("");
}

Macad::Occt::Aspect_AspectMarkerDefinitionError^ Macad::Occt::Aspect_AspectMarkerDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_AspectMarkerDefinitionError) _result;
	_result = ::Aspect_AspectMarkerDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectMarkerDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_AspectMarkerDefinitionError^ Macad::Occt::Aspect_AspectMarkerDefinitionError::NewInstance()
{
	Handle(::Aspect_AspectMarkerDefinitionError) _result;
	_result = ::Aspect_AspectMarkerDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectMarkerDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_AspectMarkerDefinitionError^ Macad::Occt::Aspect_AspectMarkerDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Aspect_AspectMarkerDefinitionError) _result;
	_result = ::Aspect_AspectMarkerDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_AspectMarkerDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_AspectMarkerDefinitionError^ Macad::Occt::Aspect_AspectMarkerDefinitionError::CreateDowncasted(::Aspect_AspectMarkerDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_AspectMarkerDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_Background
//---------------------------------------------------------------------

Macad::Occt::Aspect_Background::Aspect_Background()
	: BaseClass<::Aspect_Background>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_Background();
}

Macad::Occt::Aspect_Background::Aspect_Background(Macad::Occt::Quantity_Color^ AColor)
	: BaseClass<::Aspect_Background>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_Background(*(::Quantity_Color*)AColor->NativeInstance);
}

Macad::Occt::Aspect_Background::Aspect_Background(Macad::Occt::Aspect_Background^ parameter1)
	: BaseClass<::Aspect_Background>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_Background(*(::Aspect_Background*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_Background::SetColor(Macad::Occt::Quantity_Color^ AColor)
{
	((::Aspect_Background*)_NativeInstance)->SetColor(*(::Quantity_Color*)AColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Aspect_Background::Color()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::Aspect_Background*)_NativeInstance)->Color();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}




//---------------------------------------------------------------------
//  Class  Aspect_Grid
//---------------------------------------------------------------------

Macad::Occt::Aspect_Grid::Aspect_Grid(Macad::Occt::Aspect_Grid^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Aspect_Grid::SetXOrigin(double anOrigin)
{
	((::Aspect_Grid*)_NativeInstance)->SetXOrigin(anOrigin);
}

void Macad::Occt::Aspect_Grid::SetYOrigin(double anOrigin)
{
	((::Aspect_Grid*)_NativeInstance)->SetYOrigin(anOrigin);
}

void Macad::Occt::Aspect_Grid::SetRotationAngle(double anAngle)
{
	((::Aspect_Grid*)_NativeInstance)->SetRotationAngle(anAngle);
}

void Macad::Occt::Aspect_Grid::Rotate(double anAngle)
{
	((::Aspect_Grid*)_NativeInstance)->Rotate(anAngle);
}

void Macad::Occt::Aspect_Grid::Translate(double aDx, double aDy)
{
	((::Aspect_Grid*)_NativeInstance)->Translate(aDx, aDy);
}

void Macad::Occt::Aspect_Grid::SetColors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor)
{
	((::Aspect_Grid*)_NativeInstance)->SetColors(*(::Quantity_Color*)aColor->NativeInstance, *(::Quantity_Color*)aTenthColor->NativeInstance);
}

void Macad::Occt::Aspect_Grid::Hit(double X, double Y, double% gridX, double% gridY)
{
	pin_ptr<double> pp_gridX = &gridX;
	pin_ptr<double> pp_gridY = &gridY;
	((::Aspect_Grid*)_NativeInstance)->Hit(X, Y, *(Standard_Real*)pp_gridX, *(Standard_Real*)pp_gridY);
}

void Macad::Occt::Aspect_Grid::Compute(double X, double Y, double% gridX, double% gridY)
{
	pin_ptr<double> pp_gridX = &gridX;
	pin_ptr<double> pp_gridY = &gridY;
	((::Aspect_Grid*)_NativeInstance)->Compute(X, Y, *(Standard_Real*)pp_gridX, *(Standard_Real*)pp_gridY);
}

void Macad::Occt::Aspect_Grid::Activate()
{
	((::Aspect_Grid*)_NativeInstance)->Activate();
}

void Macad::Occt::Aspect_Grid::Deactivate()
{
	((::Aspect_Grid*)_NativeInstance)->Deactivate();
}

double Macad::Occt::Aspect_Grid::XOrigin()
{
	return ((::Aspect_Grid*)_NativeInstance)->XOrigin();
}

double Macad::Occt::Aspect_Grid::YOrigin()
{
	return ((::Aspect_Grid*)_NativeInstance)->YOrigin();
}

double Macad::Occt::Aspect_Grid::RotationAngle()
{
	return ((::Aspect_Grid*)_NativeInstance)->RotationAngle();
}

bool Macad::Occt::Aspect_Grid::IsActive()
{
	return ((::Aspect_Grid*)_NativeInstance)->IsActive();
}

void Macad::Occt::Aspect_Grid::Colors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor)
{
	((::Aspect_Grid*)_NativeInstance)->Colors(*(::Quantity_Color*)aColor->NativeInstance, *(::Quantity_Color*)aTenthColor->NativeInstance);
}

void Macad::Occt::Aspect_Grid::SetDrawMode(Macad::Occt::Aspect_GridDrawMode aDrawMode)
{
	((::Aspect_Grid*)_NativeInstance)->SetDrawMode((::Aspect_GridDrawMode)aDrawMode);
}

Macad::Occt::Aspect_GridDrawMode Macad::Occt::Aspect_Grid::DrawMode()
{
	return (Macad::Occt::Aspect_GridDrawMode)((::Aspect_Grid*)_NativeInstance)->DrawMode();
}

void Macad::Occt::Aspect_Grid::Display()
{
	((::Aspect_Grid*)_NativeInstance)->Display();
}

void Macad::Occt::Aspect_Grid::Erase()
{
	((::Aspect_Grid*)_NativeInstance)->Erase();
}

bool Macad::Occt::Aspect_Grid::IsDisplayed()
{
	return ((::Aspect_Grid*)_NativeInstance)->IsDisplayed();
}

void Macad::Occt::Aspect_Grid::Init()
{
	((::Aspect_Grid*)_NativeInstance)->Init();
}


Macad::Occt::Aspect_Grid^ Macad::Occt::Aspect_Grid::CreateDowncasted(::Aspect_Grid* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Aspect_CircularGrid)))
		return Macad::Occt::Aspect_CircularGrid::CreateDowncasted((::Aspect_CircularGrid*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Aspect_RectangularGrid)))
		return Macad::Occt::Aspect_RectangularGrid::CreateDowncasted((::Aspect_RectangularGrid*)instance);

	return gcnew Macad::Occt::Aspect_Grid( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_CircularGrid
//---------------------------------------------------------------------

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin, double anYOrigin, double aRotationAngle)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin, double anYOrigin)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber, double XOrigin)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(double aRadiusStep, int aDivisionNumber)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_CircularGrid::Aspect_CircularGrid(Macad::Occt::Aspect_CircularGrid^ parameter1)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Aspect_CircularGrid::SetRadiusStep(double aStep)
{
	((::Aspect_CircularGrid*)_NativeInstance)->SetRadiusStep(aStep);
}

void Macad::Occt::Aspect_CircularGrid::SetDivisionNumber(int aNumber)
{
	((::Aspect_CircularGrid*)_NativeInstance)->SetDivisionNumber(aNumber);
}

void Macad::Occt::Aspect_CircularGrid::SetGridValues(double XOrigin, double YOrigin, double RadiusStep, int DivisionNumber, double RotationAngle)
{
	((::Aspect_CircularGrid*)_NativeInstance)->SetGridValues(XOrigin, YOrigin, RadiusStep, DivisionNumber, RotationAngle);
}

void Macad::Occt::Aspect_CircularGrid::Compute(double X, double Y, double% gridX, double% gridY)
{
	pin_ptr<double> pp_gridX = &gridX;
	pin_ptr<double> pp_gridY = &gridY;
	((::Aspect_CircularGrid*)_NativeInstance)->Compute(X, Y, *(Standard_Real*)pp_gridX, *(Standard_Real*)pp_gridY);
}

double Macad::Occt::Aspect_CircularGrid::RadiusStep()
{
	return ((::Aspect_CircularGrid*)_NativeInstance)->RadiusStep();
}

int Macad::Occt::Aspect_CircularGrid::DivisionNumber()
{
	return ((::Aspect_CircularGrid*)_NativeInstance)->DivisionNumber();
}

void Macad::Occt::Aspect_CircularGrid::Init()
{
	((::Aspect_CircularGrid*)_NativeInstance)->Init();
}


Macad::Occt::Aspect_CircularGrid^ Macad::Occt::Aspect_CircularGrid::CreateDowncasted(::Aspect_CircularGrid* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::V3d_CircularGrid)))
		return Macad::Occt::V3d_CircularGrid::CreateDowncasted((::V3d_CircularGrid*)instance);

	return gcnew Macad::Occt::Aspect_CircularGrid( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_DisplayConnectionDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_DisplayConnectionDefinitionError::Aspect_DisplayConnectionDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_DisplayConnectionDefinitionError();
}

Macad::Occt::Aspect_DisplayConnectionDefinitionError::Aspect_DisplayConnectionDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_DisplayConnectionDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_DisplayConnectionDefinitionError::Aspect_DisplayConnectionDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Aspect_DisplayConnectionDefinitionError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

Macad::Occt::Aspect_DisplayConnectionDefinitionError::Aspect_DisplayConnectionDefinitionError(Macad::Occt::Aspect_DisplayConnectionDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_DisplayConnectionDefinitionError(*(::Aspect_DisplayConnectionDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_DisplayConnectionDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_DisplayConnectionDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_DisplayConnectionDefinitionError::Raise()
{
	::Aspect_DisplayConnectionDefinitionError::Raise("");
}

Macad::Occt::Aspect_DisplayConnectionDefinitionError^ Macad::Occt::Aspect_DisplayConnectionDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_DisplayConnectionDefinitionError) _result;
	_result = ::Aspect_DisplayConnectionDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_DisplayConnectionDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_DisplayConnectionDefinitionError^ Macad::Occt::Aspect_DisplayConnectionDefinitionError::NewInstance()
{
	Handle(::Aspect_DisplayConnectionDefinitionError) _result;
	_result = ::Aspect_DisplayConnectionDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_DisplayConnectionDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_DisplayConnectionDefinitionError^ Macad::Occt::Aspect_DisplayConnectionDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Aspect_DisplayConnectionDefinitionError) _result;
	_result = ::Aspect_DisplayConnectionDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_DisplayConnectionDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_DisplayConnectionDefinitionError^ Macad::Occt::Aspect_DisplayConnectionDefinitionError::CreateDowncasted(::Aspect_DisplayConnectionDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_DisplayConnectionDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_GenId
//---------------------------------------------------------------------

Macad::Occt::Aspect_GenId::Aspect_GenId()
	: BaseClass<::Aspect_GenId>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GenId();
}

Macad::Occt::Aspect_GenId::Aspect_GenId(int theLow, int theUpper)
	: BaseClass<::Aspect_GenId>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GenId(theLow, theUpper);
}

Macad::Occt::Aspect_GenId::Aspect_GenId(Macad::Occt::Aspect_GenId^ parameter1)
	: BaseClass<::Aspect_GenId>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GenId(*(::Aspect_GenId*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_GenId::Free()
{
	((::Aspect_GenId*)_NativeInstance)->Free();
}

void Macad::Occt::Aspect_GenId::Free(int theId)
{
	((::Aspect_GenId*)_NativeInstance)->Free(theId);
}

bool Macad::Occt::Aspect_GenId::HasFree()
{
	return ((::Aspect_GenId*)_NativeInstance)->HasFree();
}

int Macad::Occt::Aspect_GenId::Available()
{
	return ((::Aspect_GenId*)_NativeInstance)->Available();
}

int Macad::Occt::Aspect_GenId::Lower()
{
	return ((::Aspect_GenId*)_NativeInstance)->Lower();
}

int Macad::Occt::Aspect_GenId::Next()
{
	return ((::Aspect_GenId*)_NativeInstance)->Next();
}

bool Macad::Occt::Aspect_GenId::Next(int% theId)
{
	pin_ptr<int> pp_theId = &theId;
	return ((::Aspect_GenId*)_NativeInstance)->Next(*(Standard_Integer*)pp_theId);
}

int Macad::Occt::Aspect_GenId::Upper()
{
	return ((::Aspect_GenId*)_NativeInstance)->Upper();
}




//---------------------------------------------------------------------
//  Class  Aspect_GradientBackground
//---------------------------------------------------------------------

Macad::Occt::Aspect_GradientBackground::Aspect_GradientBackground()
	: Macad::Occt::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GradientBackground();
}

Macad::Occt::Aspect_GradientBackground::Aspect_GradientBackground(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2, Macad::Occt::Aspect_GradientFillMethod theMethod)
	: Macad::Occt::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GradientBackground(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, (::Aspect_GradientFillMethod)theMethod);
}

Macad::Occt::Aspect_GradientBackground::Aspect_GradientBackground(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2)
	: Macad::Occt::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GradientBackground(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, Aspect_GradientFillMethod_Horizontal);
}

Macad::Occt::Aspect_GradientBackground::Aspect_GradientBackground(Macad::Occt::Aspect_GradientBackground^ parameter1)
	: Macad::Occt::Aspect_Background(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_GradientBackground(*(::Aspect_GradientBackground*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_GradientBackground::SetColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2, Macad::Occt::Aspect_GradientFillMethod theMethod)
{
	((::Aspect_GradientBackground*)_NativeInstance)->SetColors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, (::Aspect_GradientFillMethod)theMethod);
}

void Macad::Occt::Aspect_GradientBackground::SetColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2)
{
	((::Aspect_GradientBackground*)_NativeInstance)->SetColors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance, Aspect_GradientFillMethod_Horizontal);
}

void Macad::Occt::Aspect_GradientBackground::Colors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2)
{
	((::Aspect_GradientBackground*)_NativeInstance)->Colors(*(::Quantity_Color*)theColor1->NativeInstance, *(::Quantity_Color*)theColor2->NativeInstance);
}

Macad::Occt::Aspect_GradientFillMethod Macad::Occt::Aspect_GradientBackground::BgGradientFillMethod()
{
	return (Macad::Occt::Aspect_GradientFillMethod)((::Aspect_GradientBackground*)_NativeInstance)->BgGradientFillMethod();
}




//---------------------------------------------------------------------
//  Class  Aspect_GraphicDeviceDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_GraphicDeviceDefinitionError::Aspect_GraphicDeviceDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_GraphicDeviceDefinitionError();
}

Macad::Occt::Aspect_GraphicDeviceDefinitionError::Aspect_GraphicDeviceDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_GraphicDeviceDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_GraphicDeviceDefinitionError::Aspect_GraphicDeviceDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Aspect_GraphicDeviceDefinitionError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

Macad::Occt::Aspect_GraphicDeviceDefinitionError::Aspect_GraphicDeviceDefinitionError(Macad::Occt::Aspect_GraphicDeviceDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_GraphicDeviceDefinitionError(*(::Aspect_GraphicDeviceDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_GraphicDeviceDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_GraphicDeviceDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_GraphicDeviceDefinitionError::Raise()
{
	::Aspect_GraphicDeviceDefinitionError::Raise("");
}

Macad::Occt::Aspect_GraphicDeviceDefinitionError^ Macad::Occt::Aspect_GraphicDeviceDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_GraphicDeviceDefinitionError) _result;
	_result = ::Aspect_GraphicDeviceDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_GraphicDeviceDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_GraphicDeviceDefinitionError^ Macad::Occt::Aspect_GraphicDeviceDefinitionError::NewInstance()
{
	Handle(::Aspect_GraphicDeviceDefinitionError) _result;
	_result = ::Aspect_GraphicDeviceDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_GraphicDeviceDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_GraphicDeviceDefinitionError^ Macad::Occt::Aspect_GraphicDeviceDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Aspect_GraphicDeviceDefinitionError) _result;
	_result = ::Aspect_GraphicDeviceDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_GraphicDeviceDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_GraphicDeviceDefinitionError^ Macad::Occt::Aspect_GraphicDeviceDefinitionError::CreateDowncasted(::Aspect_GraphicDeviceDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_GraphicDeviceDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_IdentDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_IdentDefinitionError::Aspect_IdentDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_IdentDefinitionError();
}

Macad::Occt::Aspect_IdentDefinitionError::Aspect_IdentDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_IdentDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_IdentDefinitionError::Aspect_IdentDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Aspect_IdentDefinitionError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

Macad::Occt::Aspect_IdentDefinitionError::Aspect_IdentDefinitionError(Macad::Occt::Aspect_IdentDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_IdentDefinitionError(*(::Aspect_IdentDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_IdentDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_IdentDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_IdentDefinitionError::Raise()
{
	::Aspect_IdentDefinitionError::Raise("");
}

Macad::Occt::Aspect_IdentDefinitionError^ Macad::Occt::Aspect_IdentDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_IdentDefinitionError) _result;
	_result = ::Aspect_IdentDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_IdentDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_IdentDefinitionError^ Macad::Occt::Aspect_IdentDefinitionError::NewInstance()
{
	Handle(::Aspect_IdentDefinitionError) _result;
	_result = ::Aspect_IdentDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_IdentDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_IdentDefinitionError^ Macad::Occt::Aspect_IdentDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Aspect_IdentDefinitionError) _result;
	_result = ::Aspect_IdentDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_IdentDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_IdentDefinitionError^ Macad::Occt::Aspect_IdentDefinitionError::CreateDowncasted(::Aspect_IdentDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_IdentDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_Window
//---------------------------------------------------------------------

Macad::Occt::Aspect_Window::Aspect_Window(Macad::Occt::Aspect_Window^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Aspect_Window::SetBackground(Macad::Occt::Aspect_Background^ ABack)
{
	((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Aspect_Background*)ABack->NativeInstance);
}

void Macad::Occt::Aspect_Window::SetBackground(Macad::Occt::Quantity_Color^ color)
{
	((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Quantity_Color*)color->NativeInstance);
}

void Macad::Occt::Aspect_Window::SetBackground(Macad::Occt::Aspect_GradientBackground^ ABackground)
{
	((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Aspect_GradientBackground*)ABackground->NativeInstance);
}

void Macad::Occt::Aspect_Window::SetBackground(Macad::Occt::Quantity_Color^ theFirstColor, Macad::Occt::Quantity_Color^ theSecondColor, Macad::Occt::Aspect_GradientFillMethod theFillMethod)
{
	((::Aspect_Window*)_NativeInstance)->SetBackground(*(::Quantity_Color*)theFirstColor->NativeInstance, *(::Quantity_Color*)theSecondColor->NativeInstance, (::Aspect_GradientFillMethod)theFillMethod);
}

void Macad::Occt::Aspect_Window::Map()
{
	((::Aspect_Window*)_NativeInstance)->Map();
}

void Macad::Occt::Aspect_Window::Unmap()
{
	((::Aspect_Window*)_NativeInstance)->Unmap();
}

Macad::Occt::Aspect_TypeOfResize Macad::Occt::Aspect_Window::DoResize()
{
	return (Macad::Occt::Aspect_TypeOfResize)((::Aspect_Window*)_NativeInstance)->DoResize();
}

bool Macad::Occt::Aspect_Window::DoMapping()
{
	return ((::Aspect_Window*)_NativeInstance)->DoMapping();
}

Macad::Occt::Aspect_Background^ Macad::Occt::Aspect_Window::Background()
{
	::Aspect_Background* _result = new ::Aspect_Background();
	*_result = ((::Aspect_Window*)_NativeInstance)->Background();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Background(_result);
}

Macad::Occt::Aspect_FillMethod Macad::Occt::Aspect_Window::BackgroundFillMethod()
{
	return (Macad::Occt::Aspect_FillMethod)((::Aspect_Window*)_NativeInstance)->BackgroundFillMethod();
}

Macad::Occt::Aspect_GradientBackground^ Macad::Occt::Aspect_Window::GradientBackground()
{
	::Aspect_GradientBackground* _result = new ::Aspect_GradientBackground();
	*_result = ((::Aspect_Window*)_NativeInstance)->GradientBackground();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_GradientBackground(_result);
}

bool Macad::Occt::Aspect_Window::IsMapped()
{
	return ((::Aspect_Window*)_NativeInstance)->IsMapped();
}

bool Macad::Occt::Aspect_Window::IsVirtual()
{
	return ((::Aspect_Window*)_NativeInstance)->IsVirtual();
}

void Macad::Occt::Aspect_Window::SetVirtual(bool theVirtual)
{
	((::Aspect_Window*)_NativeInstance)->SetVirtual(theVirtual);
}

double Macad::Occt::Aspect_Window::Ratio()
{
	return ((::Aspect_Window*)_NativeInstance)->Ratio();
}

void Macad::Occt::Aspect_Window::Position(int% X1, int% Y1, int% X2, int% Y2)
{
	pin_ptr<int> pp_X1 = &X1;
	pin_ptr<int> pp_Y1 = &Y1;
	pin_ptr<int> pp_X2 = &X2;
	pin_ptr<int> pp_Y2 = &Y2;
	((::Aspect_Window*)_NativeInstance)->Position(*(Standard_Integer*)pp_X1, *(Standard_Integer*)pp_Y1, *(Standard_Integer*)pp_X2, *(Standard_Integer*)pp_Y2);
}

void Macad::Occt::Aspect_Window::Size(int% Width, int% Height)
{
	pin_ptr<int> pp_Width = &Width;
	pin_ptr<int> pp_Height = &Height;
	((::Aspect_Window*)_NativeInstance)->Size(*(Standard_Integer*)pp_Width, *(Standard_Integer*)pp_Height);
}

System::IntPtr Macad::Occt::Aspect_Window::NativeHandle()
{
	return System::IntPtr(((::Aspect_Window*)_NativeInstance)->NativeHandle());
}

System::IntPtr Macad::Occt::Aspect_Window::NativeParentHandle()
{
	return System::IntPtr(((::Aspect_Window*)_NativeInstance)->NativeParentHandle());
}

void Macad::Occt::Aspect_Window::SetTitle(Macad::Occt::TCollection_AsciiString^ theTitle)
{
	((::Aspect_Window*)_NativeInstance)->SetTitle(*(::TCollection_AsciiString*)theTitle->NativeInstance);
}

double Macad::Occt::Aspect_Window::DevicePixelRatio()
{
	return ((::Aspect_Window*)_NativeInstance)->DevicePixelRatio();
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Aspect_Window::ConvertPointToBacking(Macad::Occt::Graphic3d_Vec2d^ thePnt)
{
	::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d(0.0);
	*_result = ((::Aspect_Window*)_NativeInstance)->ConvertPointToBacking(*(::Graphic3d_Vec2d*)thePnt->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Aspect_Window::ConvertPointFromBacking(Macad::Occt::Graphic3d_Vec2d^ thePnt)
{
	::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d(0.0);
	*_result = ((::Aspect_Window*)_NativeInstance)->ConvertPointFromBacking(*(::Graphic3d_Vec2d*)thePnt->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}


Macad::Occt::Aspect_Window^ Macad::Occt::Aspect_Window::CreateDowncasted(::Aspect_Window* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::WNT_Window)))
		return Macad::Occt::WNT_Window::CreateDowncasted((::WNT_Window*)instance);

	return gcnew Macad::Occt::Aspect_Window( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_XRAction
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRAction::Aspect_XRAction(Macad::Occt::TCollection_AsciiString^ theId, Macad::Occt::Aspect_XRActionType theType)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_XRAction(*(::TCollection_AsciiString*)theId->NativeInstance, (::Aspect_XRActionType)theType);
}

Macad::Occt::Aspect_XRAction::Aspect_XRAction(Macad::Occt::Aspect_XRAction^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_XRAction(*(::Aspect_XRAction*)parameter1->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Aspect_XRAction::Id()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Aspect_XRAction*)_NativeInstance)->Id();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Aspect_XRActionType Macad::Occt::Aspect_XRAction::Type()
{
	return (Macad::Occt::Aspect_XRActionType)((::Aspect_XRAction*)_NativeInstance)->Type();
}

bool Macad::Occt::Aspect_XRAction::IsValid()
{
	return ((::Aspect_XRAction*)_NativeInstance)->IsValid();
}


Macad::Occt::Aspect_XRAction^ Macad::Occt::Aspect_XRAction::CreateDowncasted(::Aspect_XRAction* instance)
{
	return gcnew Macad::Occt::Aspect_XRAction( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_XRActionSet
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRActionSet::Aspect_XRActionSet(Macad::Occt::TCollection_AsciiString^ theId)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_XRActionSet(*(::TCollection_AsciiString*)theId->NativeInstance);
}

Macad::Occt::Aspect_XRActionSet::Aspect_XRActionSet(Macad::Occt::Aspect_XRActionSet^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_XRActionSet(*(::Aspect_XRActionSet*)parameter1->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Aspect_XRActionSet::Id()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::Aspect_XRActionSet*)_NativeInstance)->Id();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Aspect_XRActionSet::AddAction(Macad::Occt::Aspect_XRAction^ theAction)
{
	Handle(::Aspect_XRAction) h_theAction = theAction->NativeInstance;
	((::Aspect_XRActionSet*)_NativeInstance)->AddAction(h_theAction);
	theAction->NativeInstance = h_theAction.get();
}

Macad::Occt::Aspect_XRActionMap^ Macad::Occt::Aspect_XRActionSet::Actions()
{
	::Aspect_XRActionMap* _result = new ::Aspect_XRActionMap();
	*_result =  (::Aspect_XRActionMap)((::Aspect_XRActionSet*)_NativeInstance)->Actions();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_XRActionMap(_result);
}


Macad::Occt::Aspect_XRActionSet^ Macad::Occt::Aspect_XRActionSet::CreateDowncasted(::Aspect_XRActionSet* instance)
{
	return gcnew Macad::Occt::Aspect_XRActionSet( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_XRSession
//---------------------------------------------------------------------

Macad::Occt::Aspect_XRSession::Aspect_XRSession(Macad::Occt::Aspect_XRSession^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

bool Macad::Occt::Aspect_XRSession::IsOpen()
{
	return ((::Aspect_XRSession*)_NativeInstance)->IsOpen();
}

bool Macad::Occt::Aspect_XRSession::Open()
{
	return ((::Aspect_XRSession*)_NativeInstance)->Open();
}

void Macad::Occt::Aspect_XRSession::Close()
{
	((::Aspect_XRSession*)_NativeInstance)->Close();
}

bool Macad::Occt::Aspect_XRSession::WaitPoses()
{
	return ((::Aspect_XRSession*)_NativeInstance)->WaitPoses();
}

bool Macad::Occt::Aspect_XRSession::HasProjectionFrustums()
{
	return ((::Aspect_XRSession*)_NativeInstance)->HasProjectionFrustums();
}

void Macad::Occt::Aspect_XRSession::ProcessEvents()
{
	((::Aspect_XRSession*)_NativeInstance)->ProcessEvents();
}

bool Macad::Occt::Aspect_XRSession::SubmitEye(System::IntPtr theTexture, Macad::Occt::Aspect_GraphicsLibrary theGraphicsLib, Macad::Occt::Aspect_ColorSpace theColorSpace, Macad::Occt::Aspect_Eye theEye)
{
	return ((::Aspect_XRSession*)_NativeInstance)->SubmitEye(theTexture.ToPointer(), (::Aspect_GraphicsLibrary)theGraphicsLib, (::Aspect_ColorSpace)theColorSpace, (::Aspect_Eye)theEye);
}

double Macad::Occt::Aspect_XRSession::UnitFactor()
{
	return ((::Aspect_XRSession*)_NativeInstance)->UnitFactor();
}

void Macad::Occt::Aspect_XRSession::SetUnitFactor(double theFactor)
{
	((::Aspect_XRSession*)_NativeInstance)->SetUnitFactor(theFactor);
}

double Macad::Occt::Aspect_XRSession::Aspect()
{
	return ((::Aspect_XRSession*)_NativeInstance)->Aspect();
}

double Macad::Occt::Aspect_XRSession::FieldOfView()
{
	return ((::Aspect_XRSession*)_NativeInstance)->FieldOfView();
}

double Macad::Occt::Aspect_XRSession::IOD()
{
	return ((::Aspect_XRSession*)_NativeInstance)->IOD();
}

float Macad::Occt::Aspect_XRSession::DisplayFrequency()
{
	return ((::Aspect_XRSession*)_NativeInstance)->DisplayFrequency();
}

Macad::Occt::Trsf Macad::Occt::Aspect_XRSession::HeadPose()
{
	return Macad::Occt::Trsf(((::Aspect_XRSession*)_NativeInstance)->HeadPose());
}

Macad::Occt::Trsf Macad::Occt::Aspect_XRSession::LeftHandPose()
{
	return Macad::Occt::Trsf(((::Aspect_XRSession*)_NativeInstance)->LeftHandPose());
}

Macad::Occt::Trsf Macad::Occt::Aspect_XRSession::RightHandPose()
{
	return Macad::Occt::Trsf(((::Aspect_XRSession*)_NativeInstance)->RightHandPose());
}

Macad::Occt::Aspect_TrackedDevicePoseArray^ Macad::Occt::Aspect_XRSession::TrackedPoses()
{
	::Aspect_TrackedDevicePoseArray* _result = new ::Aspect_TrackedDevicePoseArray();
	*_result =  (::Aspect_TrackedDevicePoseArray)((::Aspect_XRSession*)_NativeInstance)->TrackedPoses();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_TrackedDevicePoseArray(_result);
}

bool Macad::Occt::Aspect_XRSession::HasTrackedPose(int theDevice)
{
	return ((::Aspect_XRSession*)_NativeInstance)->HasTrackedPose(theDevice);
}

int Macad::Occt::Aspect_XRSession::NamedTrackedDevice(Macad::Occt::Aspect_XRTrackedDeviceRole theDevice)
{
	return ((::Aspect_XRSession*)_NativeInstance)->NamedTrackedDevice((::Aspect_XRTrackedDeviceRole)theDevice);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Aspect_XRSession::LoadRenderModel(int theDevice, Macad::Occt::Image_Texture^ theTexture)
{
	Handle(::Image_Texture) h_theTexture = theTexture->NativeInstance;
	Handle(::Graphic3d_ArrayOfTriangles) _result;
	_result = ((::Aspect_XRSession*)_NativeInstance)->LoadRenderModel(theDevice, h_theTexture);
	theTexture->NativeInstance = h_theTexture.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Aspect_XRSession::LoadRenderModel(int theDevice, bool theToApplyUnitFactor, Macad::Occt::Image_Texture^ theTexture)
{
	Handle(::Image_Texture) h_theTexture = theTexture->NativeInstance;
	Handle(::Graphic3d_ArrayOfTriangles) _result;
	_result = ((::Aspect_XRSession*)_NativeInstance)->LoadRenderModel(theDevice, theToApplyUnitFactor, h_theTexture);
	theTexture->NativeInstance = h_theTexture.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_XRDigitalActionData^ Macad::Occt::Aspect_XRSession::GetDigitalActionData(Macad::Occt::Aspect_XRAction^ theAction)
{
	Handle(::Aspect_XRAction) h_theAction = theAction->NativeInstance;
	::Aspect_XRDigitalActionData* _result = new ::Aspect_XRDigitalActionData();
	*_result = ((::Aspect_XRSession*)_NativeInstance)->GetDigitalActionData(h_theAction);
	theAction->NativeInstance = h_theAction.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_XRDigitalActionData(_result);
}

Macad::Occt::Aspect_XRAnalogActionData^ Macad::Occt::Aspect_XRSession::GetAnalogActionData(Macad::Occt::Aspect_XRAction^ theAction)
{
	Handle(::Aspect_XRAction) h_theAction = theAction->NativeInstance;
	::Aspect_XRAnalogActionData* _result = new ::Aspect_XRAnalogActionData();
	*_result = ((::Aspect_XRSession*)_NativeInstance)->GetAnalogActionData(h_theAction);
	theAction->NativeInstance = h_theAction.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_XRAnalogActionData(_result);
}

Macad::Occt::Aspect_XRPoseActionData^ Macad::Occt::Aspect_XRSession::GetPoseActionDataForNextFrame(Macad::Occt::Aspect_XRAction^ theAction)
{
	Handle(::Aspect_XRAction) h_theAction = theAction->NativeInstance;
	::Aspect_XRPoseActionData* _result = new ::Aspect_XRPoseActionData();
	*_result = ((::Aspect_XRSession*)_NativeInstance)->GetPoseActionDataForNextFrame(h_theAction);
	theAction->NativeInstance = h_theAction.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_XRPoseActionData(_result);
}

void Macad::Occt::Aspect_XRSession::TriggerHapticVibrationAction(Macad::Occt::Aspect_XRAction^ theAction, Macad::Occt::Aspect_XRHapticActionData^ theParams)
{
	Handle(::Aspect_XRAction) h_theAction = theAction->NativeInstance;
	((::Aspect_XRSession*)_NativeInstance)->TriggerHapticVibrationAction(h_theAction, *(::Aspect_XRHapticActionData*)theParams->NativeInstance);
	theAction->NativeInstance = h_theAction.get();
}

void Macad::Occt::Aspect_XRSession::AbortHapticVibrationAction(Macad::Occt::Aspect_XRAction^ theAction)
{
	Handle(::Aspect_XRAction) h_theAction = theAction->NativeInstance;
	((::Aspect_XRSession*)_NativeInstance)->AbortHapticVibrationAction(h_theAction);
	theAction->NativeInstance = h_theAction.get();
}

Macad::Occt::Aspect_XRSession::TrackingUniverseOrigin Macad::Occt::Aspect_XRSession::TrackingOrigin()
{
	return (Macad::Occt::Aspect_XRSession::TrackingUniverseOrigin)((::Aspect_XRSession*)_NativeInstance)->TrackingOrigin();
}

void Macad::Occt::Aspect_XRSession::SetTrackingOrigin(Macad::Occt::Aspect_XRSession::TrackingUniverseOrigin theOrigin)
{
	((::Aspect_XRSession*)_NativeInstance)->SetTrackingOrigin((::Aspect_XRSession::TrackingUniverseOrigin)theOrigin);
}

Macad::Occt::Aspect_XRAction^ Macad::Occt::Aspect_XRSession::GenericAction(Macad::Occt::Aspect_XRTrackedDeviceRole theDevice, Macad::Occt::Aspect_XRGenericAction theAction)
{
	Handle(::Aspect_XRAction) _result;
	_result = ((::Aspect_XRSession*)_NativeInstance)->GenericAction((::Aspect_XRTrackedDeviceRole)theDevice, (::Aspect_XRGenericAction)theAction);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_XRAction::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Aspect_XRSession::GetString(Macad::Occt::Aspect_XRSession::InfoString theInfo)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::Aspect_XRSession*)_NativeInstance)->GetString((::Aspect_XRSession::InfoString)theInfo);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}


Macad::Occt::Aspect_XRSession^ Macad::Occt::Aspect_XRSession::CreateDowncasted(::Aspect_XRSession* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Aspect_OpenVRSession)))
		return Macad::Occt::Aspect_OpenVRSession::CreateDowncasted((::Aspect_OpenVRSession*)instance);

	return gcnew Macad::Occt::Aspect_XRSession( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_OpenVRSession
//---------------------------------------------------------------------

Macad::Occt::Aspect_OpenVRSession::Aspect_OpenVRSession()
	: Macad::Occt::Aspect_XRSession(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_OpenVRSession();
}

Macad::Occt::Aspect_OpenVRSession::Aspect_OpenVRSession(Macad::Occt::Aspect_OpenVRSession^ parameter1)
	: Macad::Occt::Aspect_XRSession(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_OpenVRSession(*(::Aspect_OpenVRSession*)parameter1->NativeInstance);
}

bool Macad::Occt::Aspect_OpenVRSession::IsHmdPresent()
{
	return ::Aspect_OpenVRSession::IsHmdPresent();
}

bool Macad::Occt::Aspect_OpenVRSession::IsOpen()
{
	return ((::Aspect_OpenVRSession*)_NativeInstance)->IsOpen();
}

bool Macad::Occt::Aspect_OpenVRSession::Open()
{
	return ((::Aspect_OpenVRSession*)_NativeInstance)->Open();
}

void Macad::Occt::Aspect_OpenVRSession::Close()
{
	((::Aspect_OpenVRSession*)_NativeInstance)->Close();
}

bool Macad::Occt::Aspect_OpenVRSession::WaitPoses()
{
	return ((::Aspect_OpenVRSession*)_NativeInstance)->WaitPoses();
}

bool Macad::Occt::Aspect_OpenVRSession::HasProjectionFrustums()
{
	return ((::Aspect_OpenVRSession*)_NativeInstance)->HasProjectionFrustums();
}

void Macad::Occt::Aspect_OpenVRSession::ProcessEvents()
{
	((::Aspect_OpenVRSession*)_NativeInstance)->ProcessEvents();
}

bool Macad::Occt::Aspect_OpenVRSession::SubmitEye(System::IntPtr theTexture, Macad::Occt::Aspect_GraphicsLibrary theGraphicsLib, Macad::Occt::Aspect_ColorSpace theColorSpace, Macad::Occt::Aspect_Eye theEye)
{
	return ((::Aspect_OpenVRSession*)_NativeInstance)->SubmitEye(theTexture.ToPointer(), (::Aspect_GraphicsLibrary)theGraphicsLib, (::Aspect_ColorSpace)theColorSpace, (::Aspect_Eye)theEye);
}

int Macad::Occt::Aspect_OpenVRSession::NamedTrackedDevice(Macad::Occt::Aspect_XRTrackedDeviceRole theDevice)
{
	return ((::Aspect_OpenVRSession*)_NativeInstance)->NamedTrackedDevice((::Aspect_XRTrackedDeviceRole)theDevice);
}

Macad::Occt::Aspect_XRDigitalActionData^ Macad::Occt::Aspect_OpenVRSession::GetDigitalActionData(Macad::Occt::Aspect_XRAction^ theAction)
{
	Handle(::Aspect_XRAction) h_theAction = theAction->NativeInstance;
	::Aspect_XRDigitalActionData* _result = new ::Aspect_XRDigitalActionData();
	*_result = ((::Aspect_OpenVRSession*)_NativeInstance)->GetDigitalActionData(h_theAction);
	theAction->NativeInstance = h_theAction.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_XRDigitalActionData(_result);
}

Macad::Occt::Aspect_XRAnalogActionData^ Macad::Occt::Aspect_OpenVRSession::GetAnalogActionData(Macad::Occt::Aspect_XRAction^ theAction)
{
	Handle(::Aspect_XRAction) h_theAction = theAction->NativeInstance;
	::Aspect_XRAnalogActionData* _result = new ::Aspect_XRAnalogActionData();
	*_result = ((::Aspect_OpenVRSession*)_NativeInstance)->GetAnalogActionData(h_theAction);
	theAction->NativeInstance = h_theAction.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_XRAnalogActionData(_result);
}

Macad::Occt::Aspect_XRPoseActionData^ Macad::Occt::Aspect_OpenVRSession::GetPoseActionDataForNextFrame(Macad::Occt::Aspect_XRAction^ theAction)
{
	Handle(::Aspect_XRAction) h_theAction = theAction->NativeInstance;
	::Aspect_XRPoseActionData* _result = new ::Aspect_XRPoseActionData();
	*_result = ((::Aspect_OpenVRSession*)_NativeInstance)->GetPoseActionDataForNextFrame(h_theAction);
	theAction->NativeInstance = h_theAction.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_XRPoseActionData(_result);
}


Macad::Occt::Aspect_OpenVRSession^ Macad::Occt::Aspect_OpenVRSession::CreateDowncasted(::Aspect_OpenVRSession* instance)
{
	return gcnew Macad::Occt::Aspect_OpenVRSession( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_RectangularGrid
//---------------------------------------------------------------------

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle, double aSecondAngle, double aRotationAngle)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle, double aSecondAngle)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin, double aFirstAngle)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin, double anYOrigin)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep, double anXOrigin)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(double aXStep, double aYStep)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Aspect_RectangularGrid::Aspect_RectangularGrid(Macad::Occt::Aspect_RectangularGrid^ parameter1)
	: Macad::Occt::Aspect_Grid(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::Aspect_RectangularGrid::SetXStep(double aStep)
{
	((::Aspect_RectangularGrid*)_NativeInstance)->SetXStep(aStep);
}

void Macad::Occt::Aspect_RectangularGrid::SetYStep(double aStep)
{
	((::Aspect_RectangularGrid*)_NativeInstance)->SetYStep(aStep);
}

void Macad::Occt::Aspect_RectangularGrid::SetAngle(double anAngle1, double anAngle2)
{
	((::Aspect_RectangularGrid*)_NativeInstance)->SetAngle(anAngle1, anAngle2);
}

void Macad::Occt::Aspect_RectangularGrid::SetGridValues(double XOrigin, double YOrigin, double XStep, double YStep, double RotationAngle)
{
	((::Aspect_RectangularGrid*)_NativeInstance)->SetGridValues(XOrigin, YOrigin, XStep, YStep, RotationAngle);
}

void Macad::Occt::Aspect_RectangularGrid::Compute(double X, double Y, double% gridX, double% gridY)
{
	pin_ptr<double> pp_gridX = &gridX;
	pin_ptr<double> pp_gridY = &gridY;
	((::Aspect_RectangularGrid*)_NativeInstance)->Compute(X, Y, *(Standard_Real*)pp_gridX, *(Standard_Real*)pp_gridY);
}

double Macad::Occt::Aspect_RectangularGrid::XStep()
{
	return ((::Aspect_RectangularGrid*)_NativeInstance)->XStep();
}

double Macad::Occt::Aspect_RectangularGrid::YStep()
{
	return ((::Aspect_RectangularGrid*)_NativeInstance)->YStep();
}

double Macad::Occt::Aspect_RectangularGrid::FirstAngle()
{
	return ((::Aspect_RectangularGrid*)_NativeInstance)->FirstAngle();
}

double Macad::Occt::Aspect_RectangularGrid::SecondAngle()
{
	return ((::Aspect_RectangularGrid*)_NativeInstance)->SecondAngle();
}

void Macad::Occt::Aspect_RectangularGrid::Init()
{
	((::Aspect_RectangularGrid*)_NativeInstance)->Init();
}


Macad::Occt::Aspect_RectangularGrid^ Macad::Occt::Aspect_RectangularGrid::CreateDowncasted(::Aspect_RectangularGrid* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::V3d_RectangularGrid)))
		return Macad::Occt::V3d_RectangularGrid::CreateDowncasted((::V3d_RectangularGrid*)instance);

	return gcnew Macad::Occt::Aspect_RectangularGrid( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_Touch
//---------------------------------------------------------------------

Macad::Occt::Aspect_Touch::Aspect_Touch()
	: BaseClass<::Aspect_Touch>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_Touch();
}

Macad::Occt::Aspect_Touch::Aspect_Touch(double theX, double theY, bool theIsPreciseDevice)
	: BaseClass<::Aspect_Touch>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_Touch(theX, theY, theIsPreciseDevice);
}

Macad::Occt::Aspect_Touch::Aspect_Touch(Macad::Occt::Aspect_Touch^ parameter1)
	: BaseClass<::Aspect_Touch>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Aspect_Touch(*(::Aspect_Touch*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Aspect_VKeySet
//---------------------------------------------------------------------

Macad::Occt::Aspect_VKeySet::Aspect_VKeySet()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_VKeySet();
}

unsigned int Macad::Occt::Aspect_VKeySet::Modifiers()
{
	return ((::Aspect_VKeySet*)_NativeInstance)->Modifiers();
}

double Macad::Occt::Aspect_VKeySet::DownTime(unsigned int theKey)
{
	return ((::Aspect_VKeySet*)_NativeInstance)->DownTime(theKey);
}

double Macad::Occt::Aspect_VKeySet::TimeUp(unsigned int theKey)
{
	return ((::Aspect_VKeySet*)_NativeInstance)->TimeUp(theKey);
}

bool Macad::Occt::Aspect_VKeySet::IsFreeKey(unsigned int theKey)
{
	return ((::Aspect_VKeySet*)_NativeInstance)->IsFreeKey(theKey);
}

bool Macad::Occt::Aspect_VKeySet::IsKeyDown(unsigned int theKey)
{
	return ((::Aspect_VKeySet*)_NativeInstance)->IsKeyDown(theKey);
}

void Macad::Occt::Aspect_VKeySet::Reset()
{
	((::Aspect_VKeySet*)_NativeInstance)->Reset();
}

void Macad::Occt::Aspect_VKeySet::KeyDown(unsigned int theKey, double theTime, double thePressure)
{
	((::Aspect_VKeySet*)_NativeInstance)->KeyDown(theKey, theTime, thePressure);
}

void Macad::Occt::Aspect_VKeySet::KeyDown(unsigned int theKey, double theTime)
{
	((::Aspect_VKeySet*)_NativeInstance)->KeyDown(theKey, theTime, 1.);
}

void Macad::Occt::Aspect_VKeySet::KeyUp(unsigned int theKey, double theTime)
{
	((::Aspect_VKeySet*)_NativeInstance)->KeyUp(theKey, theTime);
}

void Macad::Occt::Aspect_VKeySet::KeyFromAxis(unsigned int theNegative, unsigned int thePositive, double theTime, double thePressure)
{
	((::Aspect_VKeySet*)_NativeInstance)->KeyFromAxis(theNegative, thePositive, theTime, thePressure);
}

bool Macad::Occt::Aspect_VKeySet::HoldDuration(unsigned int theKey, double theTime, double% theDuration)
{
	pin_ptr<double> pp_theDuration = &theDuration;
	return ((::Aspect_VKeySet*)_NativeInstance)->HoldDuration(theKey, theTime, *(double*)pp_theDuration);
}

bool Macad::Occt::Aspect_VKeySet::HoldDuration(unsigned int theKey, double theTime, double% theDuration, double% thePressure)
{
	pin_ptr<double> pp_theDuration = &theDuration;
	pin_ptr<double> pp_thePressure = &thePressure;
	return ((::Aspect_VKeySet*)_NativeInstance)->HoldDuration(theKey, theTime, *(double*)pp_theDuration, *(double*)pp_thePressure);
}


Macad::Occt::Aspect_VKeySet^ Macad::Occt::Aspect_VKeySet::CreateDowncasted(::Aspect_VKeySet* instance)
{
	return gcnew Macad::Occt::Aspect_VKeySet( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_WindowDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Aspect_WindowDefinitionError::Aspect_WindowDefinitionError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_WindowDefinitionError();
}

Macad::Occt::Aspect_WindowDefinitionError::Aspect_WindowDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_WindowDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_WindowDefinitionError::Aspect_WindowDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Aspect_WindowDefinitionError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

Macad::Occt::Aspect_WindowDefinitionError::Aspect_WindowDefinitionError(Macad::Occt::Aspect_WindowDefinitionError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_WindowDefinitionError(*(::Aspect_WindowDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_WindowDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_WindowDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_WindowDefinitionError::Raise()
{
	::Aspect_WindowDefinitionError::Raise("");
}

Macad::Occt::Aspect_WindowDefinitionError^ Macad::Occt::Aspect_WindowDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_WindowDefinitionError) _result;
	_result = ::Aspect_WindowDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_WindowDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_WindowDefinitionError^ Macad::Occt::Aspect_WindowDefinitionError::NewInstance()
{
	Handle(::Aspect_WindowDefinitionError) _result;
	_result = ::Aspect_WindowDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_WindowDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_WindowDefinitionError^ Macad::Occt::Aspect_WindowDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Aspect_WindowDefinitionError) _result;
	_result = ::Aspect_WindowDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_WindowDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_WindowDefinitionError^ Macad::Occt::Aspect_WindowDefinitionError::CreateDowncasted(::Aspect_WindowDefinitionError* instance)
{
	return gcnew Macad::Occt::Aspect_WindowDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_WindowError
//---------------------------------------------------------------------

Macad::Occt::Aspect_WindowError::Aspect_WindowError()
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_WindowError();
}

Macad::Occt::Aspect_WindowError::Aspect_WindowError(System::String^ theMessage)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Aspect_WindowError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Aspect_WindowError::Aspect_WindowError(System::String^ theMessage, System::String^ theStackTrace)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	NativeInstance = new ::Aspect_WindowError(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

Macad::Occt::Aspect_WindowError::Aspect_WindowError(Macad::Occt::Aspect_WindowError^ parameter1)
	: Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Aspect_WindowError(*(::Aspect_WindowError*)parameter1->NativeInstance);
}

void Macad::Occt::Aspect_WindowError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Aspect_WindowError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Aspect_WindowError::Raise()
{
	::Aspect_WindowError::Raise("");
}

Macad::Occt::Aspect_WindowError^ Macad::Occt::Aspect_WindowError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Aspect_WindowError) _result;
	_result = ::Aspect_WindowError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_WindowError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_WindowError^ Macad::Occt::Aspect_WindowError::NewInstance()
{
	Handle(::Aspect_WindowError) _result;
	_result = ::Aspect_WindowError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_WindowError::CreateDowncasted( _result.get());
}

Macad::Occt::Aspect_WindowError^ Macad::Occt::Aspect_WindowError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
	Handle(::Aspect_WindowError) _result;
	_result = ::Aspect_WindowError::NewInstance(sz_theMessage, sz_theStackTrace);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
	 return _result.IsNull() ? nullptr : Macad::Occt::Aspect_WindowError::CreateDowncasted( _result.get());
}


Macad::Occt::Aspect_WindowError^ Macad::Occt::Aspect_WindowError::CreateDowncasted(::Aspect_WindowError* instance)
{
	return gcnew Macad::Occt::Aspect_WindowError( instance );
}



//---------------------------------------------------------------------
//  Class  Aspect_WindowInputListener
//---------------------------------------------------------------------

double Macad::Occt::Aspect_WindowInputListener::EventTime()
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->EventTime();
}

void Macad::Occt::Aspect_WindowInputListener::ProcessExpose()
{
	((::Aspect_WindowInputListener*)_NativeInstance)->ProcessExpose();
}

void Macad::Occt::Aspect_WindowInputListener::ProcessConfigure(bool theIsResized)
{
	((::Aspect_WindowInputListener*)_NativeInstance)->ProcessConfigure(theIsResized);
}

void Macad::Occt::Aspect_WindowInputListener::ProcessInput()
{
	((::Aspect_WindowInputListener*)_NativeInstance)->ProcessInput();
}

void Macad::Occt::Aspect_WindowInputListener::ProcessFocus(bool theIsActivated)
{
	((::Aspect_WindowInputListener*)_NativeInstance)->ProcessFocus(theIsActivated);
}

void Macad::Occt::Aspect_WindowInputListener::ProcessClose()
{
	((::Aspect_WindowInputListener*)_NativeInstance)->ProcessClose();
}

void Macad::Occt::Aspect_WindowInputListener::KeyDown(unsigned int theKey, double theTime, double thePressure)
{
	((::Aspect_WindowInputListener*)_NativeInstance)->KeyDown(theKey, theTime, thePressure);
}

void Macad::Occt::Aspect_WindowInputListener::KeyDown(unsigned int theKey, double theTime)
{
	((::Aspect_WindowInputListener*)_NativeInstance)->KeyDown(theKey, theTime, 1.);
}

void Macad::Occt::Aspect_WindowInputListener::KeyUp(unsigned int theKey, double theTime)
{
	((::Aspect_WindowInputListener*)_NativeInstance)->KeyUp(theKey, theTime);
}

void Macad::Occt::Aspect_WindowInputListener::KeyFromAxis(unsigned int theNegative, unsigned int thePositive, double theTime, double thePressure)
{
	((::Aspect_WindowInputListener*)_NativeInstance)->KeyFromAxis(theNegative, thePositive, theTime, thePressure);
}

bool Macad::Occt::Aspect_WindowInputListener::UpdateMouseScroll(Macad::Occt::Aspect_ScrollDelta^ theDelta)
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->UpdateMouseScroll(*(::Aspect_ScrollDelta*)theDelta->NativeInstance);
}

bool Macad::Occt::Aspect_WindowInputListener::UpdateMouseButtons(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated)
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->UpdateMouseButtons(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButtons, theModifiers, theIsEmulated);
}

bool Macad::Occt::Aspect_WindowInputListener::UpdateMousePosition(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated)
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->UpdateMousePosition(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButtons, theModifiers, theIsEmulated);
}

bool Macad::Occt::Aspect_WindowInputListener::PressMouseButton(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsEmulated)
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->PressMouseButton(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsEmulated);
}

bool Macad::Occt::Aspect_WindowInputListener::ReleaseMouseButton(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsEmulated)
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->ReleaseMouseButton(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsEmulated);
}

unsigned int Macad::Occt::Aspect_WindowInputListener::PressedMouseButtons()
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->PressedMouseButtons();
}

unsigned int Macad::Occt::Aspect_WindowInputListener::LastMouseFlags()
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->LastMouseFlags();
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Aspect_WindowInputListener::LastMousePosition()
{
	::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i(0);
	*_result =  (::Graphic3d_Vec2i)((::Aspect_WindowInputListener*)_NativeInstance)->LastMousePosition();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

bool Macad::Occt::Aspect_WindowInputListener::HasTouchPoints()
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->HasTouchPoints();
}

void Macad::Occt::Aspect_WindowInputListener::AddTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt, bool theClearBefore)
{
	((::Aspect_WindowInputListener*)_NativeInstance)->AddTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance, theClearBefore);
}

void Macad::Occt::Aspect_WindowInputListener::AddTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt)
{
	((::Aspect_WindowInputListener*)_NativeInstance)->AddTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance, false);
}

bool Macad::Occt::Aspect_WindowInputListener::RemoveTouchPoint(size_t theId, bool theClearSelectPnts)
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->RemoveTouchPoint(theId, theClearSelectPnts);
}

bool Macad::Occt::Aspect_WindowInputListener::RemoveTouchPoint(size_t theId)
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->RemoveTouchPoint(theId, false);
}

void Macad::Occt::Aspect_WindowInputListener::UpdateTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt)
{
	((::Aspect_WindowInputListener*)_NativeInstance)->UpdateTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance);
}

float Macad::Occt::Aspect_WindowInputListener::Get3dMouseTranslationScale()
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->Get3dMouseTranslationScale();
}

void Macad::Occt::Aspect_WindowInputListener::Set3dMouseTranslationScale(float theScale)
{
	((::Aspect_WindowInputListener*)_NativeInstance)->Set3dMouseTranslationScale(theScale);
}

float Macad::Occt::Aspect_WindowInputListener::Get3dMouseRotationScale()
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->Get3dMouseRotationScale();
}

void Macad::Occt::Aspect_WindowInputListener::Set3dMouseRotationScale(float theScale)
{
	((::Aspect_WindowInputListener*)_NativeInstance)->Set3dMouseRotationScale(theScale);
}

bool Macad::Occt::Aspect_WindowInputListener::To3dMousePreciseInput()
{
	return ((::Aspect_WindowInputListener*)_NativeInstance)->To3dMousePreciseInput();
}

void Macad::Occt::Aspect_WindowInputListener::Set3dMousePreciseInput(bool theIsQuadric)
{
	((::Aspect_WindowInputListener*)_NativeInstance)->Set3dMousePreciseInput(theIsQuadric);
}



