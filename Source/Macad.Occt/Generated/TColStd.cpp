// Generated wrapper code for package TColStd

#include "OcctPCH.h"
#include "TColStd.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "TColStd.h"
#include "TCollection.h"
#include "NCollection.h"


//---------------------------------------------------------------------
//  Class  TColStd_Array1OfAsciiString
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfAsciiString::TColStd_Array1OfAsciiString()
	: BaseClass<::TColStd_Array1OfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfAsciiString();
}

Macad::Occt::TColStd_Array1OfAsciiString::TColStd_Array1OfAsciiString(int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfAsciiString(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfAsciiString::TColStd_Array1OfAsciiString(Macad::Occt::TColStd_Array1OfAsciiString^ theOther)
	: BaseClass<::TColStd_Array1OfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfAsciiString(*(::TColStd_Array1OfAsciiString*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfAsciiString::TColStd_Array1OfAsciiString(Macad::Occt::TCollection_AsciiString^ theBegin, int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfAsciiString(*(::TCollection_AsciiString*)theBegin->NativeInstance, theLower, theUpper);
}

void Macad::Occt::TColStd_Array1OfAsciiString::Init(Macad::Occt::TCollection_AsciiString^ theValue)
{
	((::TColStd_Array1OfAsciiString*)_NativeInstance)->Init(*(::TCollection_AsciiString*)theValue->NativeInstance);
}

int Macad::Occt::TColStd_Array1OfAsciiString::Size()
{
	return ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_Array1OfAsciiString::Length()
{
	return ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_Array1OfAsciiString::IsEmpty()
{
	return ((::TColStd_Array1OfAsciiString*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_Array1OfAsciiString::Lower()
{
	return ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_Array1OfAsciiString::Upper()
{
	return ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_Array1OfAsciiString::IsDeletable()
{
	return ((::TColStd_Array1OfAsciiString*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_Array1OfAsciiString::IsAllocated()
{
	return ((::TColStd_Array1OfAsciiString*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColStd_Array1OfAsciiString^ Macad::Occt::TColStd_Array1OfAsciiString::Assign(Macad::Occt::TColStd_Array1OfAsciiString^ theOther)
{
	::TColStd_Array1OfAsciiString* _result = new ::TColStd_Array1OfAsciiString();
	*_result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Assign(*(::TColStd_Array1OfAsciiString*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfAsciiString(_result);
}

Macad::Occt::TColStd_Array1OfAsciiString^ Macad::Occt::TColStd_Array1OfAsciiString::Move(Macad::Occt::TColStd_Array1OfAsciiString^ theOther)
{
	::TColStd_Array1OfAsciiString* _result = new ::TColStd_Array1OfAsciiString();
	*_result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Move(*(::TColStd_Array1OfAsciiString*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfAsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_Array1OfAsciiString::First()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_Array1OfAsciiString*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_Array1OfAsciiString::ChangeFirst()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_Array1OfAsciiString::Last()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_Array1OfAsciiString*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_Array1OfAsciiString::ChangeLast()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_Array1OfAsciiString::Value(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_Array1OfAsciiString*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_Array1OfAsciiString::ChangeValue(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::TColStd_Array1OfAsciiString::SetValue(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem)
{
	((::TColStd_Array1OfAsciiString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_Array1OfAsciiString::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfAsciiString*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColStd_Array1OfBoolean
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfBoolean::TColStd_Array1OfBoolean()
	: BaseClass<::TColStd_Array1OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfBoolean();
}

Macad::Occt::TColStd_Array1OfBoolean::TColStd_Array1OfBoolean(int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfBoolean(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfBoolean::TColStd_Array1OfBoolean(Macad::Occt::TColStd_Array1OfBoolean^ theOther)
	: BaseClass<::TColStd_Array1OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfBoolean(*(::TColStd_Array1OfBoolean*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfBoolean::TColStd_Array1OfBoolean(bool theBegin, int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<bool> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfBoolean(*(bool*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TColStd_Array1OfBoolean::Init(bool theValue)
{
	pin_ptr<bool> pp_theValue = &theValue;
	((::TColStd_Array1OfBoolean*)_NativeInstance)->Init(*(bool*)pp_theValue);
}

int Macad::Occt::TColStd_Array1OfBoolean::Size()
{
	return ((::TColStd_Array1OfBoolean*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_Array1OfBoolean::Length()
{
	return ((::TColStd_Array1OfBoolean*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_Array1OfBoolean::IsEmpty()
{
	return ((::TColStd_Array1OfBoolean*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_Array1OfBoolean::Lower()
{
	return ((::TColStd_Array1OfBoolean*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_Array1OfBoolean::Upper()
{
	return ((::TColStd_Array1OfBoolean*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_Array1OfBoolean::IsDeletable()
{
	return ((::TColStd_Array1OfBoolean*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_Array1OfBoolean::IsAllocated()
{
	return ((::TColStd_Array1OfBoolean*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColStd_Array1OfBoolean^ Macad::Occt::TColStd_Array1OfBoolean::Assign(Macad::Occt::TColStd_Array1OfBoolean^ theOther)
{
	::TColStd_Array1OfBoolean* _result = new ::TColStd_Array1OfBoolean();
	*_result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Assign(*(::TColStd_Array1OfBoolean*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfBoolean(_result);
}

Macad::Occt::TColStd_Array1OfBoolean^ Macad::Occt::TColStd_Array1OfBoolean::Move(Macad::Occt::TColStd_Array1OfBoolean^ theOther)
{
	::TColStd_Array1OfBoolean* _result = new ::TColStd_Array1OfBoolean();
	*_result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Move(*(::TColStd_Array1OfBoolean*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfBoolean(_result);
}

bool Macad::Occt::TColStd_Array1OfBoolean::First()
{
	return ((::TColStd_Array1OfBoolean*)_NativeInstance)->First();
}

bool Macad::Occt::TColStd_Array1OfBoolean::ChangeFirst()
{
	return ((::TColStd_Array1OfBoolean*)_NativeInstance)->ChangeFirst();
}

bool Macad::Occt::TColStd_Array1OfBoolean::Last()
{
	return ((::TColStd_Array1OfBoolean*)_NativeInstance)->Last();
}

bool Macad::Occt::TColStd_Array1OfBoolean::ChangeLast()
{
	return ((::TColStd_Array1OfBoolean*)_NativeInstance)->ChangeLast();
}

bool Macad::Occt::TColStd_Array1OfBoolean::Value(int theIndex)
{
	return ((::TColStd_Array1OfBoolean*)_NativeInstance)->Value(theIndex);
}

bool Macad::Occt::TColStd_Array1OfBoolean::ChangeValue(int theIndex)
{
	return ((::TColStd_Array1OfBoolean*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_Array1OfBoolean::SetValue(int theIndex, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_Array1OfBoolean*)_NativeInstance)->SetValue(theIndex, *(bool*)pp_theItem);
}

void Macad::Occt::TColStd_Array1OfBoolean::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfBoolean*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColStd_Array1OfCharacter
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfCharacter::TColStd_Array1OfCharacter()
	: BaseClass<::TColStd_Array1OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfCharacter();
}

Macad::Occt::TColStd_Array1OfCharacter::TColStd_Array1OfCharacter(int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfCharacter(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfCharacter::TColStd_Array1OfCharacter(Macad::Occt::TColStd_Array1OfCharacter^ theOther)
	: BaseClass<::TColStd_Array1OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfCharacter(*(::TColStd_Array1OfCharacter*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfCharacter::TColStd_Array1OfCharacter(char theBegin, int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<char> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfCharacter(*(char*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TColStd_Array1OfCharacter::Init(char theValue)
{
	pin_ptr<char> pp_theValue = &theValue;
	((::TColStd_Array1OfCharacter*)_NativeInstance)->Init(*(char*)pp_theValue);
}

int Macad::Occt::TColStd_Array1OfCharacter::Size()
{
	return ((::TColStd_Array1OfCharacter*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_Array1OfCharacter::Length()
{
	return ((::TColStd_Array1OfCharacter*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_Array1OfCharacter::IsEmpty()
{
	return ((::TColStd_Array1OfCharacter*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_Array1OfCharacter::Lower()
{
	return ((::TColStd_Array1OfCharacter*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_Array1OfCharacter::Upper()
{
	return ((::TColStd_Array1OfCharacter*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_Array1OfCharacter::IsDeletable()
{
	return ((::TColStd_Array1OfCharacter*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_Array1OfCharacter::IsAllocated()
{
	return ((::TColStd_Array1OfCharacter*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColStd_Array1OfCharacter^ Macad::Occt::TColStd_Array1OfCharacter::Assign(Macad::Occt::TColStd_Array1OfCharacter^ theOther)
{
	::TColStd_Array1OfCharacter* _result = new ::TColStd_Array1OfCharacter();
	*_result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Assign(*(::TColStd_Array1OfCharacter*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfCharacter(_result);
}

Macad::Occt::TColStd_Array1OfCharacter^ Macad::Occt::TColStd_Array1OfCharacter::Move(Macad::Occt::TColStd_Array1OfCharacter^ theOther)
{
	::TColStd_Array1OfCharacter* _result = new ::TColStd_Array1OfCharacter();
	*_result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Move(*(::TColStd_Array1OfCharacter*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfCharacter(_result);
}

char Macad::Occt::TColStd_Array1OfCharacter::First()
{
	return ((::TColStd_Array1OfCharacter*)_NativeInstance)->First();
}

char Macad::Occt::TColStd_Array1OfCharacter::ChangeFirst()
{
	return ((::TColStd_Array1OfCharacter*)_NativeInstance)->ChangeFirst();
}

char Macad::Occt::TColStd_Array1OfCharacter::Last()
{
	return ((::TColStd_Array1OfCharacter*)_NativeInstance)->Last();
}

char Macad::Occt::TColStd_Array1OfCharacter::ChangeLast()
{
	return ((::TColStd_Array1OfCharacter*)_NativeInstance)->ChangeLast();
}

char Macad::Occt::TColStd_Array1OfCharacter::Value(int theIndex)
{
	return ((::TColStd_Array1OfCharacter*)_NativeInstance)->Value(theIndex);
}

char Macad::Occt::TColStd_Array1OfCharacter::ChangeValue(int theIndex)
{
	return ((::TColStd_Array1OfCharacter*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_Array1OfCharacter::SetValue(int theIndex, char theItem)
{
	pin_ptr<char> pp_theItem = &theItem;
	((::TColStd_Array1OfCharacter*)_NativeInstance)->SetValue(theIndex, *(char*)pp_theItem);
}

void Macad::Occt::TColStd_Array1OfCharacter::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfCharacter*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColStd_Array1OfExtendedString
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfExtendedString::TColStd_Array1OfExtendedString()
	: BaseClass<::TColStd_Array1OfExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfExtendedString();
}

Macad::Occt::TColStd_Array1OfExtendedString::TColStd_Array1OfExtendedString(int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfExtendedString(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfExtendedString::TColStd_Array1OfExtendedString(Macad::Occt::TColStd_Array1OfExtendedString^ theOther)
	: BaseClass<::TColStd_Array1OfExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfExtendedString(*(::TColStd_Array1OfExtendedString*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfExtendedString::TColStd_Array1OfExtendedString(Macad::Occt::TCollection_ExtendedString^ theBegin, int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfExtendedString(*(::TCollection_ExtendedString*)theBegin->NativeInstance, theLower, theUpper);
}

void Macad::Occt::TColStd_Array1OfExtendedString::Init(Macad::Occt::TCollection_ExtendedString^ theValue)
{
	((::TColStd_Array1OfExtendedString*)_NativeInstance)->Init(*(::TCollection_ExtendedString*)theValue->NativeInstance);
}

int Macad::Occt::TColStd_Array1OfExtendedString::Size()
{
	return ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_Array1OfExtendedString::Length()
{
	return ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_Array1OfExtendedString::IsEmpty()
{
	return ((::TColStd_Array1OfExtendedString*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_Array1OfExtendedString::Lower()
{
	return ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_Array1OfExtendedString::Upper()
{
	return ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_Array1OfExtendedString::IsDeletable()
{
	return ((::TColStd_Array1OfExtendedString*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_Array1OfExtendedString::IsAllocated()
{
	return ((::TColStd_Array1OfExtendedString*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColStd_Array1OfExtendedString^ Macad::Occt::TColStd_Array1OfExtendedString::Assign(Macad::Occt::TColStd_Array1OfExtendedString^ theOther)
{
	::TColStd_Array1OfExtendedString* _result = new ::TColStd_Array1OfExtendedString();
	*_result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Assign(*(::TColStd_Array1OfExtendedString*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfExtendedString(_result);
}

Macad::Occt::TColStd_Array1OfExtendedString^ Macad::Occt::TColStd_Array1OfExtendedString::Move(Macad::Occt::TColStd_Array1OfExtendedString^ theOther)
{
	::TColStd_Array1OfExtendedString* _result = new ::TColStd_Array1OfExtendedString();
	*_result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Move(*(::TColStd_Array1OfExtendedString*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_Array1OfExtendedString::First()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::TColStd_Array1OfExtendedString*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_Array1OfExtendedString::ChangeFirst()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_Array1OfExtendedString::Last()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::TColStd_Array1OfExtendedString*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_Array1OfExtendedString::ChangeLast()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_Array1OfExtendedString::Value(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::TColStd_Array1OfExtendedString*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_Array1OfExtendedString::ChangeValue(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

void Macad::Occt::TColStd_Array1OfExtendedString::SetValue(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem)
{
	((::TColStd_Array1OfExtendedString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_Array1OfExtendedString::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfExtendedString*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColStd_Array1OfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfInteger::TColStd_Array1OfInteger()
	: BaseClass<::TColStd_Array1OfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfInteger();
}

Macad::Occt::TColStd_Array1OfInteger::TColStd_Array1OfInteger(int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfInteger(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfInteger::TColStd_Array1OfInteger(Macad::Occt::TColStd_Array1OfInteger^ theOther)
	: BaseClass<::TColStd_Array1OfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfInteger(*(::TColStd_Array1OfInteger*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfInteger::TColStd_Array1OfInteger(int theBegin, int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfInteger>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<int> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfInteger(*(int*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TColStd_Array1OfInteger::Init(int theValue)
{
	pin_ptr<int> pp_theValue = &theValue;
	((::TColStd_Array1OfInteger*)_NativeInstance)->Init(*(int*)pp_theValue);
}

int Macad::Occt::TColStd_Array1OfInteger::Size()
{
	return ((::TColStd_Array1OfInteger*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_Array1OfInteger::Length()
{
	return ((::TColStd_Array1OfInteger*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_Array1OfInteger::IsEmpty()
{
	return ((::TColStd_Array1OfInteger*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_Array1OfInteger::Lower()
{
	return ((::TColStd_Array1OfInteger*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_Array1OfInteger::Upper()
{
	return ((::TColStd_Array1OfInteger*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_Array1OfInteger::IsDeletable()
{
	return ((::TColStd_Array1OfInteger*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_Array1OfInteger::IsAllocated()
{
	return ((::TColStd_Array1OfInteger*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColStd_Array1OfInteger^ Macad::Occt::TColStd_Array1OfInteger::Assign(Macad::Occt::TColStd_Array1OfInteger^ theOther)
{
	::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
	*_result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Assign(*(::TColStd_Array1OfInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfInteger(_result);
}

Macad::Occt::TColStd_Array1OfInteger^ Macad::Occt::TColStd_Array1OfInteger::Move(Macad::Occt::TColStd_Array1OfInteger^ theOther)
{
	::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
	*_result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Move(*(::TColStd_Array1OfInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfInteger(_result);
}

int Macad::Occt::TColStd_Array1OfInteger::First()
{
	return ((::TColStd_Array1OfInteger*)_NativeInstance)->First();
}

int Macad::Occt::TColStd_Array1OfInteger::ChangeFirst()
{
	return ((::TColStd_Array1OfInteger*)_NativeInstance)->ChangeFirst();
}

int Macad::Occt::TColStd_Array1OfInteger::Last()
{
	return ((::TColStd_Array1OfInteger*)_NativeInstance)->Last();
}

int Macad::Occt::TColStd_Array1OfInteger::ChangeLast()
{
	return ((::TColStd_Array1OfInteger*)_NativeInstance)->ChangeLast();
}

int Macad::Occt::TColStd_Array1OfInteger::Value(int theIndex)
{
	return ((::TColStd_Array1OfInteger*)_NativeInstance)->Value(theIndex);
}

int Macad::Occt::TColStd_Array1OfInteger::ChangeValue(int theIndex)
{
	return ((::TColStd_Array1OfInteger*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_Array1OfInteger::SetValue(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_Array1OfInteger*)_NativeInstance)->SetValue(theIndex, *(int*)pp_theItem);
}

void Macad::Occt::TColStd_Array1OfInteger::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfInteger*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColStd_ListOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_ListOfInteger::TColStd_ListOfInteger()
	: BaseClass<::TColStd_ListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfInteger();
}

Macad::Occt::TColStd_ListOfInteger::TColStd_ListOfInteger(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_ListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_ListOfInteger(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_ListOfInteger::TColStd_ListOfInteger(Macad::Occt::TColStd_ListOfInteger^ theOther)
	: BaseClass<::TColStd_ListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfInteger(*(::TColStd_ListOfInteger*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_ListOfInteger::Size()
{
	return ((::TColStd_ListOfInteger*)_NativeInstance)->Size();
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TColStd_ListOfInteger::Assign(Macad::Occt::TColStd_ListOfInteger^ theOther)
{
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	*_result = ((::TColStd_ListOfInteger*)_NativeInstance)->Assign(*(::TColStd_ListOfInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

void Macad::Occt::TColStd_ListOfInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_ListOfInteger*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_ListOfInteger::Clear()
{
	((::TColStd_ListOfInteger*)_NativeInstance)->Clear(0L);
}

int Macad::Occt::TColStd_ListOfInteger::First()
{
	return ((::TColStd_ListOfInteger*)_NativeInstance)->First();
}

int Macad::Occt::TColStd_ListOfInteger::Last()
{
	return ((::TColStd_ListOfInteger*)_NativeInstance)->Last();
}

int Macad::Occt::TColStd_ListOfInteger::Append(int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	return ((::TColStd_ListOfInteger*)_NativeInstance)->Append(*(int*)pp_theItem);
}

void Macad::Occt::TColStd_ListOfInteger::Append(Macad::Occt::TColStd_ListOfInteger^ theOther)
{
	((::TColStd_ListOfInteger*)_NativeInstance)->Append(*(::TColStd_ListOfInteger*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_ListOfInteger::Prepend(int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	return ((::TColStd_ListOfInteger*)_NativeInstance)->Prepend(*(int*)pp_theItem);
}

void Macad::Occt::TColStd_ListOfInteger::Prepend(Macad::Occt::TColStd_ListOfInteger^ theOther)
{
	((::TColStd_ListOfInteger*)_NativeInstance)->Prepend(*(::TColStd_ListOfInteger*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_ListOfInteger::RemoveFirst()
{
	((::TColStd_ListOfInteger*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::TColStd_ListOfInteger::Reverse()
{
	((::TColStd_ListOfInteger*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  TColStd_Array1OfListOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfListOfInteger::TColStd_Array1OfListOfInteger()
	: BaseClass<::TColStd_Array1OfListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfListOfInteger();
}

Macad::Occt::TColStd_Array1OfListOfInteger::TColStd_Array1OfListOfInteger(int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfListOfInteger(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfListOfInteger::TColStd_Array1OfListOfInteger(Macad::Occt::TColStd_Array1OfListOfInteger^ theOther)
	: BaseClass<::TColStd_Array1OfListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfListOfInteger(*(::TColStd_Array1OfListOfInteger*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_Array1OfListOfInteger::Size()
{
	return ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_Array1OfListOfInteger::Length()
{
	return ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_Array1OfListOfInteger::IsEmpty()
{
	return ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_Array1OfListOfInteger::Lower()
{
	return ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_Array1OfListOfInteger::Upper()
{
	return ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_Array1OfListOfInteger::IsDeletable()
{
	return ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_Array1OfListOfInteger::IsAllocated()
{
	return ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColStd_Array1OfListOfInteger^ Macad::Occt::TColStd_Array1OfListOfInteger::Assign(Macad::Occt::TColStd_Array1OfListOfInteger^ theOther)
{
	::TColStd_Array1OfListOfInteger* _result = new ::TColStd_Array1OfListOfInteger();
	*_result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Assign(*(::TColStd_Array1OfListOfInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfListOfInteger(_result);
}

Macad::Occt::TColStd_Array1OfListOfInteger^ Macad::Occt::TColStd_Array1OfListOfInteger::Move(Macad::Occt::TColStd_Array1OfListOfInteger^ theOther)
{
	::TColStd_Array1OfListOfInteger* _result = new ::TColStd_Array1OfListOfInteger();
	*_result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Move(*(::TColStd_Array1OfListOfInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfListOfInteger(_result);
}

void Macad::Occt::TColStd_Array1OfListOfInteger::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColStd_Array1OfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfReal::TColStd_Array1OfReal()
	: BaseClass<::TColStd_Array1OfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfReal();
}

Macad::Occt::TColStd_Array1OfReal::TColStd_Array1OfReal(int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfReal(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfReal::TColStd_Array1OfReal(Macad::Occt::TColStd_Array1OfReal^ theOther)
	: BaseClass<::TColStd_Array1OfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfReal(*(::TColStd_Array1OfReal*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfReal::TColStd_Array1OfReal(double theBegin, int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfReal>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array1OfReal(*(double*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TColStd_Array1OfReal::Init(double theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	((::TColStd_Array1OfReal*)_NativeInstance)->Init(*(double*)pp_theValue);
}

int Macad::Occt::TColStd_Array1OfReal::Size()
{
	return ((::TColStd_Array1OfReal*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_Array1OfReal::Length()
{
	return ((::TColStd_Array1OfReal*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_Array1OfReal::IsEmpty()
{
	return ((::TColStd_Array1OfReal*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_Array1OfReal::Lower()
{
	return ((::TColStd_Array1OfReal*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_Array1OfReal::Upper()
{
	return ((::TColStd_Array1OfReal*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_Array1OfReal::IsDeletable()
{
	return ((::TColStd_Array1OfReal*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_Array1OfReal::IsAllocated()
{
	return ((::TColStd_Array1OfReal*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColStd_Array1OfReal^ Macad::Occt::TColStd_Array1OfReal::Assign(Macad::Occt::TColStd_Array1OfReal^ theOther)
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result = ((::TColStd_Array1OfReal*)_NativeInstance)->Assign(*(::TColStd_Array1OfReal*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfReal(_result);
}

Macad::Occt::TColStd_Array1OfReal^ Macad::Occt::TColStd_Array1OfReal::Move(Macad::Occt::TColStd_Array1OfReal^ theOther)
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result = ((::TColStd_Array1OfReal*)_NativeInstance)->Move(*(::TColStd_Array1OfReal*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfReal(_result);
}

double Macad::Occt::TColStd_Array1OfReal::First()
{
	return ((::TColStd_Array1OfReal*)_NativeInstance)->First();
}

double Macad::Occt::TColStd_Array1OfReal::ChangeFirst()
{
	return ((::TColStd_Array1OfReal*)_NativeInstance)->ChangeFirst();
}

double Macad::Occt::TColStd_Array1OfReal::Last()
{
	return ((::TColStd_Array1OfReal*)_NativeInstance)->Last();
}

double Macad::Occt::TColStd_Array1OfReal::ChangeLast()
{
	return ((::TColStd_Array1OfReal*)_NativeInstance)->ChangeLast();
}

double Macad::Occt::TColStd_Array1OfReal::Value(int theIndex)
{
	return ((::TColStd_Array1OfReal*)_NativeInstance)->Value(theIndex);
}

double Macad::Occt::TColStd_Array1OfReal::ChangeValue(int theIndex)
{
	return ((::TColStd_Array1OfReal*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_Array1OfReal::SetValue(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_Array1OfReal*)_NativeInstance)->SetValue(theIndex, *(double*)pp_theItem);
}

void Macad::Occt::TColStd_Array1OfReal::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfReal*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColStd_Array1OfTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfTransient::TColStd_Array1OfTransient()
	: BaseClass<::TColStd_Array1OfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfTransient();
}

Macad::Occt::TColStd_Array1OfTransient::TColStd_Array1OfTransient(int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfTransient(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfTransient::TColStd_Array1OfTransient(Macad::Occt::TColStd_Array1OfTransient^ theOther)
	: BaseClass<::TColStd_Array1OfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array1OfTransient(*(::TColStd_Array1OfTransient*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfTransient::TColStd_Array1OfTransient(Macad::Occt::Standard_Transient^ theBegin, int theLower, int theUpper)
	: BaseClass<::TColStd_Array1OfTransient>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_Array1OfTransient::Init(Macad::Occt::Standard_Transient^ theValue)
{
	throw gcnew System::NotImplementedException();
}

int Macad::Occt::TColStd_Array1OfTransient::Size()
{
	return ((::TColStd_Array1OfTransient*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_Array1OfTransient::Length()
{
	return ((::TColStd_Array1OfTransient*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_Array1OfTransient::IsEmpty()
{
	return ((::TColStd_Array1OfTransient*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_Array1OfTransient::Lower()
{
	return ((::TColStd_Array1OfTransient*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_Array1OfTransient::Upper()
{
	return ((::TColStd_Array1OfTransient*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_Array1OfTransient::IsDeletable()
{
	return ((::TColStd_Array1OfTransient*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_Array1OfTransient::IsAllocated()
{
	return ((::TColStd_Array1OfTransient*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColStd_Array1OfTransient^ Macad::Occt::TColStd_Array1OfTransient::Assign(Macad::Occt::TColStd_Array1OfTransient^ theOther)
{
	::TColStd_Array1OfTransient* _result = new ::TColStd_Array1OfTransient();
	*_result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Assign(*(::TColStd_Array1OfTransient*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfTransient(_result);
}

Macad::Occt::TColStd_Array1OfTransient^ Macad::Occt::TColStd_Array1OfTransient::Move(Macad::Occt::TColStd_Array1OfTransient^ theOther)
{
	::TColStd_Array1OfTransient* _result = new ::TColStd_Array1OfTransient();
	*_result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Move(*(::TColStd_Array1OfTransient*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfTransient(_result);
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array1OfTransient::First()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array1OfTransient::ChangeFirst()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array1OfTransient::Last()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array1OfTransient::ChangeLast()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array1OfTransient::Value(int theIndex)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array1OfTransient::ChangeValue(int theIndex)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_Array1OfTransient::SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_Array1OfTransient::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_Array1OfTransient*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColStd_Array2OfBoolean
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array2OfBoolean::TColStd_Array2OfBoolean()
	: BaseClass<::TColStd_Array2OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfBoolean();
}

Macad::Occt::TColStd_Array2OfBoolean::TColStd_Array2OfBoolean(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColStd_Array2OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfBoolean(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColStd_Array2OfBoolean::TColStd_Array2OfBoolean(Macad::Occt::TColStd_Array2OfBoolean^ theOther)
	: BaseClass<::TColStd_Array2OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfBoolean(*(::TColStd_Array2OfBoolean*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array2OfBoolean::TColStd_Array2OfBoolean(bool theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColStd_Array2OfBoolean>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<bool> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array2OfBoolean(*(bool*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColStd_Array2OfBoolean::Init(bool theValue)
{
	pin_ptr<bool> pp_theValue = &theValue;
	((::TColStd_Array2OfBoolean*)_NativeInstance)->Init(*(bool*)pp_theValue);
}

int Macad::Occt::TColStd_Array2OfBoolean::Size()
{
	return ((::TColStd_Array2OfBoolean*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_Array2OfBoolean::Length()
{
	return ((::TColStd_Array2OfBoolean*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_Array2OfBoolean::NbRows()
{
	return ((::TColStd_Array2OfBoolean*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColStd_Array2OfBoolean::NbColumns()
{
	return ((::TColStd_Array2OfBoolean*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColStd_Array2OfBoolean::RowLength()
{
	return ((::TColStd_Array2OfBoolean*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColStd_Array2OfBoolean::ColLength()
{
	return ((::TColStd_Array2OfBoolean*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColStd_Array2OfBoolean::LowerRow()
{
	return ((::TColStd_Array2OfBoolean*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColStd_Array2OfBoolean::UpperRow()
{
	return ((::TColStd_Array2OfBoolean*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColStd_Array2OfBoolean::LowerCol()
{
	return ((::TColStd_Array2OfBoolean*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColStd_Array2OfBoolean::UpperCol()
{
	return ((::TColStd_Array2OfBoolean*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColStd_Array2OfBoolean::IsDeletable()
{
	return ((::TColStd_Array2OfBoolean*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColStd_Array2OfBoolean^ Macad::Occt::TColStd_Array2OfBoolean::Assign(Macad::Occt::TColStd_Array2OfBoolean^ theOther)
{
	::TColStd_Array2OfBoolean* _result = new ::TColStd_Array2OfBoolean();
	*_result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Assign(*(::TColStd_Array2OfBoolean*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfBoolean(_result);
}

Macad::Occt::TColStd_Array2OfBoolean^ Macad::Occt::TColStd_Array2OfBoolean::Move(Macad::Occt::TColStd_Array2OfBoolean^ theOther)
{
	::TColStd_Array2OfBoolean* _result = new ::TColStd_Array2OfBoolean();
	*_result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Move(*(::TColStd_Array2OfBoolean*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfBoolean(_result);
}

bool Macad::Occt::TColStd_Array2OfBoolean::Value(int theRow, int theCol)
{
	return ((::TColStd_Array2OfBoolean*)_NativeInstance)->Value(theRow, theCol);
}

bool Macad::Occt::TColStd_Array2OfBoolean::ChangeValue(int theRow, int theCol)
{
	return ((::TColStd_Array2OfBoolean*)_NativeInstance)->ChangeValue(theRow, theCol);
}

void Macad::Occt::TColStd_Array2OfBoolean::SetValue(int theRow, int theCol, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_Array2OfBoolean*)_NativeInstance)->SetValue(theRow, theCol, *(bool*)pp_theItem);
}

void Macad::Occt::TColStd_Array2OfBoolean::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_Array2OfBoolean*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColStd_Array2OfCharacter
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array2OfCharacter::TColStd_Array2OfCharacter()
	: BaseClass<::TColStd_Array2OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfCharacter();
}

Macad::Occt::TColStd_Array2OfCharacter::TColStd_Array2OfCharacter(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColStd_Array2OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfCharacter(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColStd_Array2OfCharacter::TColStd_Array2OfCharacter(Macad::Occt::TColStd_Array2OfCharacter^ theOther)
	: BaseClass<::TColStd_Array2OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfCharacter(*(::TColStd_Array2OfCharacter*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array2OfCharacter::TColStd_Array2OfCharacter(char theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColStd_Array2OfCharacter>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<char> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array2OfCharacter(*(char*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColStd_Array2OfCharacter::Init(char theValue)
{
	pin_ptr<char> pp_theValue = &theValue;
	((::TColStd_Array2OfCharacter*)_NativeInstance)->Init(*(char*)pp_theValue);
}

int Macad::Occt::TColStd_Array2OfCharacter::Size()
{
	return ((::TColStd_Array2OfCharacter*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_Array2OfCharacter::Length()
{
	return ((::TColStd_Array2OfCharacter*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_Array2OfCharacter::NbRows()
{
	return ((::TColStd_Array2OfCharacter*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColStd_Array2OfCharacter::NbColumns()
{
	return ((::TColStd_Array2OfCharacter*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColStd_Array2OfCharacter::RowLength()
{
	return ((::TColStd_Array2OfCharacter*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColStd_Array2OfCharacter::ColLength()
{
	return ((::TColStd_Array2OfCharacter*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColStd_Array2OfCharacter::LowerRow()
{
	return ((::TColStd_Array2OfCharacter*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColStd_Array2OfCharacter::UpperRow()
{
	return ((::TColStd_Array2OfCharacter*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColStd_Array2OfCharacter::LowerCol()
{
	return ((::TColStd_Array2OfCharacter*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColStd_Array2OfCharacter::UpperCol()
{
	return ((::TColStd_Array2OfCharacter*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColStd_Array2OfCharacter::IsDeletable()
{
	return ((::TColStd_Array2OfCharacter*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColStd_Array2OfCharacter^ Macad::Occt::TColStd_Array2OfCharacter::Assign(Macad::Occt::TColStd_Array2OfCharacter^ theOther)
{
	::TColStd_Array2OfCharacter* _result = new ::TColStd_Array2OfCharacter();
	*_result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Assign(*(::TColStd_Array2OfCharacter*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfCharacter(_result);
}

Macad::Occt::TColStd_Array2OfCharacter^ Macad::Occt::TColStd_Array2OfCharacter::Move(Macad::Occt::TColStd_Array2OfCharacter^ theOther)
{
	::TColStd_Array2OfCharacter* _result = new ::TColStd_Array2OfCharacter();
	*_result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Move(*(::TColStd_Array2OfCharacter*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfCharacter(_result);
}

char Macad::Occt::TColStd_Array2OfCharacter::Value(int theRow, int theCol)
{
	return ((::TColStd_Array2OfCharacter*)_NativeInstance)->Value(theRow, theCol);
}

char Macad::Occt::TColStd_Array2OfCharacter::ChangeValue(int theRow, int theCol)
{
	return ((::TColStd_Array2OfCharacter*)_NativeInstance)->ChangeValue(theRow, theCol);
}

void Macad::Occt::TColStd_Array2OfCharacter::SetValue(int theRow, int theCol, char theItem)
{
	pin_ptr<char> pp_theItem = &theItem;
	((::TColStd_Array2OfCharacter*)_NativeInstance)->SetValue(theRow, theCol, *(char*)pp_theItem);
}

void Macad::Occt::TColStd_Array2OfCharacter::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_Array2OfCharacter*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColStd_Array2OfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array2OfInteger::TColStd_Array2OfInteger()
	: BaseClass<::TColStd_Array2OfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfInteger();
}

Macad::Occt::TColStd_Array2OfInteger::TColStd_Array2OfInteger(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColStd_Array2OfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfInteger(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColStd_Array2OfInteger::TColStd_Array2OfInteger(Macad::Occt::TColStd_Array2OfInteger^ theOther)
	: BaseClass<::TColStd_Array2OfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfInteger(*(::TColStd_Array2OfInteger*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array2OfInteger::TColStd_Array2OfInteger(int theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColStd_Array2OfInteger>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<int> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array2OfInteger(*(int*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColStd_Array2OfInteger::Init(int theValue)
{
	pin_ptr<int> pp_theValue = &theValue;
	((::TColStd_Array2OfInteger*)_NativeInstance)->Init(*(int*)pp_theValue);
}

int Macad::Occt::TColStd_Array2OfInteger::Size()
{
	return ((::TColStd_Array2OfInteger*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_Array2OfInteger::Length()
{
	return ((::TColStd_Array2OfInteger*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_Array2OfInteger::NbRows()
{
	return ((::TColStd_Array2OfInteger*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColStd_Array2OfInteger::NbColumns()
{
	return ((::TColStd_Array2OfInteger*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColStd_Array2OfInteger::RowLength()
{
	return ((::TColStd_Array2OfInteger*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColStd_Array2OfInteger::ColLength()
{
	return ((::TColStd_Array2OfInteger*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColStd_Array2OfInteger::LowerRow()
{
	return ((::TColStd_Array2OfInteger*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColStd_Array2OfInteger::UpperRow()
{
	return ((::TColStd_Array2OfInteger*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColStd_Array2OfInteger::LowerCol()
{
	return ((::TColStd_Array2OfInteger*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColStd_Array2OfInteger::UpperCol()
{
	return ((::TColStd_Array2OfInteger*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColStd_Array2OfInteger::IsDeletable()
{
	return ((::TColStd_Array2OfInteger*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColStd_Array2OfInteger^ Macad::Occt::TColStd_Array2OfInteger::Assign(Macad::Occt::TColStd_Array2OfInteger^ theOther)
{
	::TColStd_Array2OfInteger* _result = new ::TColStd_Array2OfInteger();
	*_result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Assign(*(::TColStd_Array2OfInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfInteger(_result);
}

Macad::Occt::TColStd_Array2OfInteger^ Macad::Occt::TColStd_Array2OfInteger::Move(Macad::Occt::TColStd_Array2OfInteger^ theOther)
{
	::TColStd_Array2OfInteger* _result = new ::TColStd_Array2OfInteger();
	*_result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Move(*(::TColStd_Array2OfInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfInteger(_result);
}

int Macad::Occt::TColStd_Array2OfInteger::Value(int theRow, int theCol)
{
	return ((::TColStd_Array2OfInteger*)_NativeInstance)->Value(theRow, theCol);
}

int Macad::Occt::TColStd_Array2OfInteger::ChangeValue(int theRow, int theCol)
{
	return ((::TColStd_Array2OfInteger*)_NativeInstance)->ChangeValue(theRow, theCol);
}

void Macad::Occt::TColStd_Array2OfInteger::SetValue(int theRow, int theCol, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_Array2OfInteger*)_NativeInstance)->SetValue(theRow, theCol, *(int*)pp_theItem);
}

void Macad::Occt::TColStd_Array2OfInteger::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_Array2OfInteger*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColStd_Array2OfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array2OfReal::TColStd_Array2OfReal()
	: BaseClass<::TColStd_Array2OfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfReal();
}

Macad::Occt::TColStd_Array2OfReal::TColStd_Array2OfReal(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColStd_Array2OfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfReal(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColStd_Array2OfReal::TColStd_Array2OfReal(Macad::Occt::TColStd_Array2OfReal^ theOther)
	: BaseClass<::TColStd_Array2OfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfReal(*(::TColStd_Array2OfReal*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array2OfReal::TColStd_Array2OfReal(double theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColStd_Array2OfReal>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColStd_Array2OfReal(*(double*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColStd_Array2OfReal::Init(double theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	((::TColStd_Array2OfReal*)_NativeInstance)->Init(*(double*)pp_theValue);
}

int Macad::Occt::TColStd_Array2OfReal::Size()
{
	return ((::TColStd_Array2OfReal*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_Array2OfReal::Length()
{
	return ((::TColStd_Array2OfReal*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_Array2OfReal::NbRows()
{
	return ((::TColStd_Array2OfReal*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColStd_Array2OfReal::NbColumns()
{
	return ((::TColStd_Array2OfReal*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColStd_Array2OfReal::RowLength()
{
	return ((::TColStd_Array2OfReal*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColStd_Array2OfReal::ColLength()
{
	return ((::TColStd_Array2OfReal*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColStd_Array2OfReal::LowerRow()
{
	return ((::TColStd_Array2OfReal*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColStd_Array2OfReal::UpperRow()
{
	return ((::TColStd_Array2OfReal*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColStd_Array2OfReal::LowerCol()
{
	return ((::TColStd_Array2OfReal*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColStd_Array2OfReal::UpperCol()
{
	return ((::TColStd_Array2OfReal*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColStd_Array2OfReal::IsDeletable()
{
	return ((::TColStd_Array2OfReal*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColStd_Array2OfReal^ Macad::Occt::TColStd_Array2OfReal::Assign(Macad::Occt::TColStd_Array2OfReal^ theOther)
{
	::TColStd_Array2OfReal* _result = new ::TColStd_Array2OfReal();
	*_result = ((::TColStd_Array2OfReal*)_NativeInstance)->Assign(*(::TColStd_Array2OfReal*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfReal(_result);
}

Macad::Occt::TColStd_Array2OfReal^ Macad::Occt::TColStd_Array2OfReal::Move(Macad::Occt::TColStd_Array2OfReal^ theOther)
{
	::TColStd_Array2OfReal* _result = new ::TColStd_Array2OfReal();
	*_result = ((::TColStd_Array2OfReal*)_NativeInstance)->Move(*(::TColStd_Array2OfReal*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfReal(_result);
}

double Macad::Occt::TColStd_Array2OfReal::Value(int theRow, int theCol)
{
	return ((::TColStd_Array2OfReal*)_NativeInstance)->Value(theRow, theCol);
}

double Macad::Occt::TColStd_Array2OfReal::ChangeValue(int theRow, int theCol)
{
	return ((::TColStd_Array2OfReal*)_NativeInstance)->ChangeValue(theRow, theCol);
}

void Macad::Occt::TColStd_Array2OfReal::SetValue(int theRow, int theCol, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_Array2OfReal*)_NativeInstance)->SetValue(theRow, theCol, *(double*)pp_theItem);
}

void Macad::Occt::TColStd_Array2OfReal::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_Array2OfReal*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColStd_Array2OfTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array2OfTransient::TColStd_Array2OfTransient()
	: BaseClass<::TColStd_Array2OfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfTransient();
}

Macad::Occt::TColStd_Array2OfTransient::TColStd_Array2OfTransient(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColStd_Array2OfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfTransient(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColStd_Array2OfTransient::TColStd_Array2OfTransient(Macad::Occt::TColStd_Array2OfTransient^ theOther)
	: BaseClass<::TColStd_Array2OfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_Array2OfTransient(*(::TColStd_Array2OfTransient*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array2OfTransient::TColStd_Array2OfTransient(Macad::Occt::Standard_Transient^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColStd_Array2OfTransient>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_Array2OfTransient::Init(Macad::Occt::Standard_Transient^ theValue)
{
	throw gcnew System::NotImplementedException();
}

int Macad::Occt::TColStd_Array2OfTransient::Size()
{
	return ((::TColStd_Array2OfTransient*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_Array2OfTransient::Length()
{
	return ((::TColStd_Array2OfTransient*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_Array2OfTransient::NbRows()
{
	return ((::TColStd_Array2OfTransient*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColStd_Array2OfTransient::NbColumns()
{
	return ((::TColStd_Array2OfTransient*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColStd_Array2OfTransient::RowLength()
{
	return ((::TColStd_Array2OfTransient*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColStd_Array2OfTransient::ColLength()
{
	return ((::TColStd_Array2OfTransient*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColStd_Array2OfTransient::LowerRow()
{
	return ((::TColStd_Array2OfTransient*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColStd_Array2OfTransient::UpperRow()
{
	return ((::TColStd_Array2OfTransient*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColStd_Array2OfTransient::LowerCol()
{
	return ((::TColStd_Array2OfTransient*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColStd_Array2OfTransient::UpperCol()
{
	return ((::TColStd_Array2OfTransient*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColStd_Array2OfTransient::IsDeletable()
{
	return ((::TColStd_Array2OfTransient*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColStd_Array2OfTransient^ Macad::Occt::TColStd_Array2OfTransient::Assign(Macad::Occt::TColStd_Array2OfTransient^ theOther)
{
	::TColStd_Array2OfTransient* _result = new ::TColStd_Array2OfTransient();
	*_result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Assign(*(::TColStd_Array2OfTransient*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfTransient(_result);
}

Macad::Occt::TColStd_Array2OfTransient^ Macad::Occt::TColStd_Array2OfTransient::Move(Macad::Occt::TColStd_Array2OfTransient^ theOther)
{
	::TColStd_Array2OfTransient* _result = new ::TColStd_Array2OfTransient();
	*_result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Move(*(::TColStd_Array2OfTransient*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfTransient(_result);
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array2OfTransient::Value(int theRow, int theCol)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array2OfTransient::ChangeValue(int theRow, int theCol)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_Array2OfTransient::SetValue(int theRow, int theCol, Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_Array2OfTransient::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_Array2OfTransient*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfAsciiStringInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfAsciiStringInteger::TColStd_DataMapOfAsciiStringInteger()
	: BaseClass<::TColStd_DataMapOfAsciiStringInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfAsciiStringInteger();
}

Macad::Occt::TColStd_DataMapOfAsciiStringInteger::TColStd_DataMapOfAsciiStringInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_DataMapOfAsciiStringInteger>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_DataMapOfAsciiStringInteger(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_DataMapOfAsciiStringInteger::TColStd_DataMapOfAsciiStringInteger(int theNbBuckets)
	: BaseClass<::TColStd_DataMapOfAsciiStringInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfAsciiStringInteger(theNbBuckets, 0L);
}

Macad::Occt::TColStd_DataMapOfAsciiStringInteger::TColStd_DataMapOfAsciiStringInteger(Macad::Occt::TColStd_DataMapOfAsciiStringInteger^ theOther)
	: BaseClass<::TColStd_DataMapOfAsciiStringInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfAsciiStringInteger(*(::TColStd_DataMapOfAsciiStringInteger*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Exchange(Macad::Occt::TColStd_DataMapOfAsciiStringInteger^ theOther)
{
	((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfAsciiStringInteger*)theOther->NativeInstance);
}

Macad::Occt::TColStd_DataMapOfAsciiStringInteger^ Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Assign(Macad::Occt::TColStd_DataMapOfAsciiStringInteger^ theOther)
{
	::TColStd_DataMapOfAsciiStringInteger* _result = new ::TColStd_DataMapOfAsciiStringInteger();
	*_result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Assign(*(::TColStd_DataMapOfAsciiStringInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_DataMapOfAsciiStringInteger(_result);
}

int Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Bound(Macad::Occt::TCollection_AsciiString^ theKey, int theItem)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::TColStd_DataMapOfAsciiStringInteger::IsBound(Macad::Occt::TCollection_AsciiString^ theKey)
{
	return ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->IsBound(*(::TCollection_AsciiString*)theKey->NativeInstance);
}

bool Macad::Occt::TColStd_DataMapOfAsciiStringInteger::UnBind(Macad::Occt::TCollection_AsciiString^ theKey)
{
	return ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->UnBind(*(::TCollection_AsciiString*)theKey->NativeInstance);
}

int Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Seek(Macad::Occt::TCollection_AsciiString^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Find(Macad::Occt::TCollection_AsciiString^ theKey)
{
	return ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Find(*(::TCollection_AsciiString*)theKey->NativeInstance);
}

bool Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Find(Macad::Occt::TCollection_AsciiString^ theKey, int% theValue)
{
	pin_ptr<int> pp_theValue = &theValue;
	return ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Find(*(::TCollection_AsciiString*)theKey->NativeInstance, *(int*)pp_theValue);
}

int Macad::Occt::TColStd_DataMapOfAsciiStringInteger::ChangeSeek(Macad::Occt::TCollection_AsciiString^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::TColStd_DataMapOfAsciiStringInteger::ChangeFind(Macad::Occt::TCollection_AsciiString^ theKey)
{
	return ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->ChangeFind(*(::TCollection_AsciiString*)theKey->NativeInstance);
}

void Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Clear(bool doReleaseMemory)
{
	((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Clear()
{
	((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Size()
{
	return ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TColStd_MapIntegerHasher
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapIntegerHasher::TColStd_MapIntegerHasher()
	: BaseClass<::TColStd_MapIntegerHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapIntegerHasher();
}

Macad::Occt::TColStd_MapIntegerHasher::TColStd_MapIntegerHasher(Macad::Occt::TColStd_MapIntegerHasher^ parameter1)
	: BaseClass<::TColStd_MapIntegerHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapIntegerHasher(*(::TColStd_MapIntegerHasher*)parameter1->NativeInstance);
}

int Macad::Occt::TColStd_MapIntegerHasher::HashCode(int theKey, int theUpperBound)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ::TColStd_MapIntegerHasher::HashCode(*(int*)pp_theKey, theUpperBound);
}

bool Macad::Occt::TColStd_MapIntegerHasher::IsEqual(int theKey1, int theKey2)
{
	pin_ptr<int> pp_theKey1 = &theKey1;
	pin_ptr<int> pp_theKey2 = &theKey2;
	return ::TColStd_MapIntegerHasher::IsEqual(*(int*)pp_theKey1, *(int*)pp_theKey2);
}




//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfIntegerInteger::TColStd_DataMapOfIntegerInteger()
	: BaseClass<::TColStd_DataMapOfIntegerInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerInteger();
}

Macad::Occt::TColStd_DataMapOfIntegerInteger::TColStd_DataMapOfIntegerInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_DataMapOfIntegerInteger>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_DataMapOfIntegerInteger(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_DataMapOfIntegerInteger::TColStd_DataMapOfIntegerInteger(int theNbBuckets)
	: BaseClass<::TColStd_DataMapOfIntegerInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerInteger(theNbBuckets, 0L);
}

Macad::Occt::TColStd_DataMapOfIntegerInteger::TColStd_DataMapOfIntegerInteger(Macad::Occt::TColStd_DataMapOfIntegerInteger^ theOther)
	: BaseClass<::TColStd_DataMapOfIntegerInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerInteger(*(::TColStd_DataMapOfIntegerInteger*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_DataMapOfIntegerInteger::Exchange(Macad::Occt::TColStd_DataMapOfIntegerInteger^ theOther)
{
	((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfIntegerInteger*)theOther->NativeInstance);
}

Macad::Occt::TColStd_DataMapOfIntegerInteger^ Macad::Occt::TColStd_DataMapOfIntegerInteger::Assign(Macad::Occt::TColStd_DataMapOfIntegerInteger^ theOther)
{
	::TColStd_DataMapOfIntegerInteger* _result = new ::TColStd_DataMapOfIntegerInteger();
	*_result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Assign(*(::TColStd_DataMapOfIntegerInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_DataMapOfIntegerInteger(_result);
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::Bound(int theKey, int theItem)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::TColStd_DataMapOfIntegerInteger::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->IsBound(*(int*)pp_theKey);
}

bool Macad::Occt::TColStd_DataMapOfIntegerInteger::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->UnBind(*(int*)pp_theKey);
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::Seek(int theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::Find(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Find(*(int*)pp_theKey);
}

bool Macad::Occt::TColStd_DataMapOfIntegerInteger::Find(int theKey, int% theValue)
{
	pin_ptr<int> pp_theKey = &theKey;
	pin_ptr<int> pp_theValue = &theValue;
	return ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Find(*(int*)pp_theKey, *(int*)pp_theValue);
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::ChangeSeek(int theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::ChangeFind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
}

void Macad::Occt::TColStd_DataMapOfIntegerInteger::Clear(bool doReleaseMemory)
{
	((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_DataMapOfIntegerInteger::Clear()
{
	((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TColStd_DataMapOfIntegerInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::Size()
{
	return ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerListOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::TColStd_DataMapOfIntegerListOfInteger()
	: BaseClass<::TColStd_DataMapOfIntegerListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerListOfInteger();
}

Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::TColStd_DataMapOfIntegerListOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_DataMapOfIntegerListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_DataMapOfIntegerListOfInteger(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::TColStd_DataMapOfIntegerListOfInteger(int theNbBuckets)
	: BaseClass<::TColStd_DataMapOfIntegerListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerListOfInteger(theNbBuckets, 0L);
}

Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::TColStd_DataMapOfIntegerListOfInteger(Macad::Occt::TColStd_DataMapOfIntegerListOfInteger^ theOther)
	: BaseClass<::TColStd_DataMapOfIntegerListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerListOfInteger(*(::TColStd_DataMapOfIntegerListOfInteger*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Exchange(Macad::Occt::TColStd_DataMapOfIntegerListOfInteger^ theOther)
{
	((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfIntegerListOfInteger*)theOther->NativeInstance);
}

Macad::Occt::TColStd_DataMapOfIntegerListOfInteger^ Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Assign(Macad::Occt::TColStd_DataMapOfIntegerListOfInteger^ theOther)
{
	::TColStd_DataMapOfIntegerListOfInteger* _result = new ::TColStd_DataMapOfIntegerListOfInteger();
	*_result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Assign(*(::TColStd_DataMapOfIntegerListOfInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_DataMapOfIntegerListOfInteger(_result);
}

bool Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->IsBound(*(int*)pp_theKey);
}

bool Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->UnBind(*(int*)pp_theKey);
}

void Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Clear(bool doReleaseMemory)
{
	((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Clear()
{
	((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Size()
{
	return ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfIntegerReal::TColStd_DataMapOfIntegerReal()
	: BaseClass<::TColStd_DataMapOfIntegerReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerReal();
}

Macad::Occt::TColStd_DataMapOfIntegerReal::TColStd_DataMapOfIntegerReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_DataMapOfIntegerReal>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_DataMapOfIntegerReal(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_DataMapOfIntegerReal::TColStd_DataMapOfIntegerReal(int theNbBuckets)
	: BaseClass<::TColStd_DataMapOfIntegerReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerReal(theNbBuckets, 0L);
}

Macad::Occt::TColStd_DataMapOfIntegerReal::TColStd_DataMapOfIntegerReal(Macad::Occt::TColStd_DataMapOfIntegerReal^ theOther)
	: BaseClass<::TColStd_DataMapOfIntegerReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerReal(*(::TColStd_DataMapOfIntegerReal*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_DataMapOfIntegerReal::Exchange(Macad::Occt::TColStd_DataMapOfIntegerReal^ theOther)
{
	((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfIntegerReal*)theOther->NativeInstance);
}

Macad::Occt::TColStd_DataMapOfIntegerReal^ Macad::Occt::TColStd_DataMapOfIntegerReal::Assign(Macad::Occt::TColStd_DataMapOfIntegerReal^ theOther)
{
	::TColStd_DataMapOfIntegerReal* _result = new ::TColStd_DataMapOfIntegerReal();
	*_result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Assign(*(::TColStd_DataMapOfIntegerReal*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_DataMapOfIntegerReal(_result);
}

double Macad::Occt::TColStd_DataMapOfIntegerReal::Bound(int theKey, double theItem)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::TColStd_DataMapOfIntegerReal::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->IsBound(*(int*)pp_theKey);
}

bool Macad::Occt::TColStd_DataMapOfIntegerReal::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->UnBind(*(int*)pp_theKey);
}

double Macad::Occt::TColStd_DataMapOfIntegerReal::Seek(int theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

double Macad::Occt::TColStd_DataMapOfIntegerReal::Find(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Find(*(int*)pp_theKey);
}

bool Macad::Occt::TColStd_DataMapOfIntegerReal::Find(int theKey, double% theValue)
{
	pin_ptr<int> pp_theKey = &theKey;
	pin_ptr<double> pp_theValue = &theValue;
	return ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Find(*(int*)pp_theKey, *(double*)pp_theValue);
}

double Macad::Occt::TColStd_DataMapOfIntegerReal::ChangeSeek(int theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

double Macad::Occt::TColStd_DataMapOfIntegerReal::ChangeFind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
}

void Macad::Occt::TColStd_DataMapOfIntegerReal::Clear(bool doReleaseMemory)
{
	((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_DataMapOfIntegerReal::Clear()
{
	((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TColStd_DataMapOfIntegerReal::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TColStd_DataMapOfIntegerReal::Size()
{
	return ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfIntegerTransient::TColStd_DataMapOfIntegerTransient()
	: BaseClass<::TColStd_DataMapOfIntegerTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerTransient();
}

Macad::Occt::TColStd_DataMapOfIntegerTransient::TColStd_DataMapOfIntegerTransient(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_DataMapOfIntegerTransient>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_DataMapOfIntegerTransient(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_DataMapOfIntegerTransient::TColStd_DataMapOfIntegerTransient(int theNbBuckets)
	: BaseClass<::TColStd_DataMapOfIntegerTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerTransient(theNbBuckets, 0L);
}

Macad::Occt::TColStd_DataMapOfIntegerTransient::TColStd_DataMapOfIntegerTransient(Macad::Occt::TColStd_DataMapOfIntegerTransient^ theOther)
	: BaseClass<::TColStd_DataMapOfIntegerTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfIntegerTransient(*(::TColStd_DataMapOfIntegerTransient*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_DataMapOfIntegerTransient::Exchange(Macad::Occt::TColStd_DataMapOfIntegerTransient^ theOther)
{
	((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfIntegerTransient*)theOther->NativeInstance);
}

Macad::Occt::TColStd_DataMapOfIntegerTransient^ Macad::Occt::TColStd_DataMapOfIntegerTransient::Assign(Macad::Occt::TColStd_DataMapOfIntegerTransient^ theOther)
{
	::TColStd_DataMapOfIntegerTransient* _result = new ::TColStd_DataMapOfIntegerTransient();
	*_result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Assign(*(::TColStd_DataMapOfIntegerTransient*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_DataMapOfIntegerTransient(_result);
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfIntegerTransient::Bound(int theKey, Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::TColStd_DataMapOfIntegerTransient::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->IsBound(*(int*)pp_theKey);
}

bool Macad::Occt::TColStd_DataMapOfIntegerTransient::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->UnBind(*(int*)pp_theKey);
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfIntegerTransient::Seek(int theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfIntegerTransient::Find(int theKey)
{
	throw gcnew System::NotImplementedException();
}

bool Macad::Occt::TColStd_DataMapOfIntegerTransient::Find(int theKey, Macad::Occt::Standard_Transient^ theValue)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfIntegerTransient::ChangeSeek(int theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfIntegerTransient::ChangeFind(int theKey)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_DataMapOfIntegerTransient::Clear(bool doReleaseMemory)
{
	((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_DataMapOfIntegerTransient::Clear()
{
	((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TColStd_DataMapOfIntegerTransient::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TColStd_DataMapOfIntegerTransient::Size()
{
	return ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfStringInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfStringInteger::TColStd_DataMapOfStringInteger()
	: BaseClass<::TColStd_DataMapOfStringInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfStringInteger();
}

Macad::Occt::TColStd_DataMapOfStringInteger::TColStd_DataMapOfStringInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_DataMapOfStringInteger>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_DataMapOfStringInteger(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_DataMapOfStringInteger::TColStd_DataMapOfStringInteger(int theNbBuckets)
	: BaseClass<::TColStd_DataMapOfStringInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfStringInteger(theNbBuckets, 0L);
}

Macad::Occt::TColStd_DataMapOfStringInteger::TColStd_DataMapOfStringInteger(Macad::Occt::TColStd_DataMapOfStringInteger^ theOther)
	: BaseClass<::TColStd_DataMapOfStringInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_DataMapOfStringInteger(*(::TColStd_DataMapOfStringInteger*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_DataMapOfStringInteger::Exchange(Macad::Occt::TColStd_DataMapOfStringInteger^ theOther)
{
	((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfStringInteger*)theOther->NativeInstance);
}

Macad::Occt::TColStd_DataMapOfStringInteger^ Macad::Occt::TColStd_DataMapOfStringInteger::Assign(Macad::Occt::TColStd_DataMapOfStringInteger^ theOther)
{
	::TColStd_DataMapOfStringInteger* _result = new ::TColStd_DataMapOfStringInteger();
	*_result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Assign(*(::TColStd_DataMapOfStringInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_DataMapOfStringInteger(_result);
}

int Macad::Occt::TColStd_DataMapOfStringInteger::Bound(Macad::Occt::TCollection_ExtendedString^ theKey, int theItem)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::TColStd_DataMapOfStringInteger::IsBound(Macad::Occt::TCollection_ExtendedString^ theKey)
{
	return ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->IsBound(*(::TCollection_ExtendedString*)theKey->NativeInstance);
}

bool Macad::Occt::TColStd_DataMapOfStringInteger::UnBind(Macad::Occt::TCollection_ExtendedString^ theKey)
{
	return ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->UnBind(*(::TCollection_ExtendedString*)theKey->NativeInstance);
}

int Macad::Occt::TColStd_DataMapOfStringInteger::Seek(Macad::Occt::TCollection_ExtendedString^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::TColStd_DataMapOfStringInteger::Find(Macad::Occt::TCollection_ExtendedString^ theKey)
{
	return ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Find(*(::TCollection_ExtendedString*)theKey->NativeInstance);
}

bool Macad::Occt::TColStd_DataMapOfStringInteger::Find(Macad::Occt::TCollection_ExtendedString^ theKey, int% theValue)
{
	pin_ptr<int> pp_theValue = &theValue;
	return ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Find(*(::TCollection_ExtendedString*)theKey->NativeInstance, *(int*)pp_theValue);
}

int Macad::Occt::TColStd_DataMapOfStringInteger::ChangeSeek(Macad::Occt::TCollection_ExtendedString^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::TColStd_DataMapOfStringInteger::ChangeFind(Macad::Occt::TCollection_ExtendedString^ theKey)
{
	return ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->ChangeFind(*(::TCollection_ExtendedString*)theKey->NativeInstance);
}

void Macad::Occt::TColStd_DataMapOfStringInteger::Clear(bool doReleaseMemory)
{
	((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_DataMapOfStringInteger::Clear()
{
	((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TColStd_DataMapOfStringInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TColStd_DataMapOfStringInteger::Size()
{
	return ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TColStd_MapTransientHasher
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapTransientHasher::TColStd_MapTransientHasher()
	: BaseClass<::TColStd_MapTransientHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapTransientHasher();
}

Macad::Occt::TColStd_MapTransientHasher::TColStd_MapTransientHasher(Macad::Occt::TColStd_MapTransientHasher^ parameter1)
	: BaseClass<::TColStd_MapTransientHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapTransientHasher(*(::TColStd_MapTransientHasher*)parameter1->NativeInstance);
}

int Macad::Occt::TColStd_MapTransientHasher::HashCode(Macad::Occt::Standard_Transient^ theKey, int theUpperBound)
{
	throw gcnew System::NotImplementedException();
}

bool Macad::Occt::TColStd_MapTransientHasher::IsEqual(Macad::Occt::Standard_Transient^ theKey1, Macad::Occt::Standard_Transient^ theKey2)
{
	throw gcnew System::NotImplementedException();
}




//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAsciiString
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfAsciiString::TColStd_SequenceOfAsciiString()
	: BaseClass<::TColStd_SequenceOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfAsciiString();
}

Macad::Occt::TColStd_SequenceOfAsciiString::TColStd_SequenceOfAsciiString(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_SequenceOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_SequenceOfAsciiString(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_SequenceOfAsciiString::TColStd_SequenceOfAsciiString(Macad::Occt::TColStd_SequenceOfAsciiString^ theOther)
	: BaseClass<::TColStd_SequenceOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfAsciiString(*(::TColStd_SequenceOfAsciiString*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_SequenceOfAsciiString::Size()
{
	return ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_SequenceOfAsciiString::Length()
{
	return ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_SequenceOfAsciiString::Lower()
{
	return ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_SequenceOfAsciiString::Upper()
{
	return ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_SequenceOfAsciiString::IsEmpty()
{
	return ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Reverse()
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Exchange(int I, int J)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Clear()
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_SequenceOfAsciiString^ Macad::Occt::TColStd_SequenceOfAsciiString::Assign(Macad::Occt::TColStd_SequenceOfAsciiString^ theOther)
{
	::TColStd_SequenceOfAsciiString* _result = new ::TColStd_SequenceOfAsciiString();
	*_result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Assign(*(::TColStd_SequenceOfAsciiString*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfAsciiString(_result);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Remove(int theIndex)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Append(Macad::Occt::TCollection_AsciiString^ theItem)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Append(*(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Append(Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Append(*(::TColStd_SequenceOfAsciiString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Prepend(Macad::Occt::TCollection_AsciiString^ theItem)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Prepend(*(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Prepend(Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Prepend(*(::TColStd_SequenceOfAsciiString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::InsertBefore(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->InsertBefore(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->InsertBefore(theIndex, *(::TColStd_SequenceOfAsciiString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->InsertAfter(theIndex, *(::TColStd_SequenceOfAsciiString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::InsertAfter(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->InsertAfter(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Split(int theIndex, Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfAsciiString*)theSeq->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_SequenceOfAsciiString::First()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_SequenceOfAsciiString*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_SequenceOfAsciiString::ChangeFirst()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_SequenceOfAsciiString::Last()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_SequenceOfAsciiString::ChangeLast()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_SequenceOfAsciiString::Value(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_SequenceOfAsciiString::ChangeValue(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::SetValue(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem)
{
	((::TColStd_SequenceOfAsciiString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfExtendedString
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfExtendedString::TColStd_SequenceOfExtendedString()
	: BaseClass<::TColStd_SequenceOfExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfExtendedString();
}

Macad::Occt::TColStd_SequenceOfExtendedString::TColStd_SequenceOfExtendedString(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_SequenceOfExtendedString>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_SequenceOfExtendedString(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_SequenceOfExtendedString::TColStd_SequenceOfExtendedString(Macad::Occt::TColStd_SequenceOfExtendedString^ theOther)
	: BaseClass<::TColStd_SequenceOfExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfExtendedString(*(::TColStd_SequenceOfExtendedString*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_SequenceOfExtendedString::Size()
{
	return ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_SequenceOfExtendedString::Length()
{
	return ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_SequenceOfExtendedString::Lower()
{
	return ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_SequenceOfExtendedString::Upper()
{
	return ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_SequenceOfExtendedString::IsEmpty()
{
	return ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Reverse()
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Exchange(int I, int J)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Clear()
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_SequenceOfExtendedString^ Macad::Occt::TColStd_SequenceOfExtendedString::Assign(Macad::Occt::TColStd_SequenceOfExtendedString^ theOther)
{
	::TColStd_SequenceOfExtendedString* _result = new ::TColStd_SequenceOfExtendedString();
	*_result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Assign(*(::TColStd_SequenceOfExtendedString*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfExtendedString(_result);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Remove(int theIndex)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Append(Macad::Occt::TCollection_ExtendedString^ theItem)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Append(*(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Append(Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Append(*(::TColStd_SequenceOfExtendedString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Prepend(Macad::Occt::TCollection_ExtendedString^ theItem)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Prepend(*(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Prepend(Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Prepend(*(::TColStd_SequenceOfExtendedString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::InsertBefore(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->InsertBefore(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->InsertBefore(theIndex, *(::TColStd_SequenceOfExtendedString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->InsertAfter(theIndex, *(::TColStd_SequenceOfExtendedString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::InsertAfter(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->InsertAfter(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Split(int theIndex, Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfExtendedString*)theSeq->NativeInstance);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_SequenceOfExtendedString::First()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::TColStd_SequenceOfExtendedString*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_SequenceOfExtendedString::ChangeFirst()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_SequenceOfExtendedString::Last()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_SequenceOfExtendedString::ChangeLast()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_SequenceOfExtendedString::Value(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_SequenceOfExtendedString::ChangeValue(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::SetValue(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem)
{
	((::TColStd_SequenceOfExtendedString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHAsciiString
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfHAsciiString::TColStd_SequenceOfHAsciiString()
	: BaseClass<::TColStd_SequenceOfHAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfHAsciiString();
}

Macad::Occt::TColStd_SequenceOfHAsciiString::TColStd_SequenceOfHAsciiString(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_SequenceOfHAsciiString>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_SequenceOfHAsciiString(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_SequenceOfHAsciiString::TColStd_SequenceOfHAsciiString(Macad::Occt::TColStd_SequenceOfHAsciiString^ theOther)
	: BaseClass<::TColStd_SequenceOfHAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfHAsciiString(*(::TColStd_SequenceOfHAsciiString*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_SequenceOfHAsciiString::Size()
{
	return ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_SequenceOfHAsciiString::Length()
{
	return ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_SequenceOfHAsciiString::Lower()
{
	return ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_SequenceOfHAsciiString::Upper()
{
	return ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_SequenceOfHAsciiString::IsEmpty()
{
	return ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Reverse()
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Exchange(int I, int J)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Clear()
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_SequenceOfHAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::Assign(Macad::Occt::TColStd_SequenceOfHAsciiString^ theOther)
{
	::TColStd_SequenceOfHAsciiString* _result = new ::TColStd_SequenceOfHAsciiString();
	*_result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Assign(*(::TColStd_SequenceOfHAsciiString*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfHAsciiString(_result);
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Remove(int theIndex)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Append(Macad::Occt::TCollection_HAsciiString^ theItem)
{
	Handle(::TCollection_HAsciiString) h_theItem = theItem->NativeInstance;
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Append(Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Append(*(::TColStd_SequenceOfHAsciiString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Prepend(Macad::Occt::TCollection_HAsciiString^ theItem)
{
	Handle(::TCollection_HAsciiString) h_theItem = theItem->NativeInstance;
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Prepend(Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Prepend(*(::TColStd_SequenceOfHAsciiString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::InsertBefore(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem)
{
	Handle(::TCollection_HAsciiString) h_theItem = theItem->NativeInstance;
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->InsertBefore(theIndex, *(::TColStd_SequenceOfHAsciiString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->InsertAfter(theIndex, *(::TColStd_SequenceOfHAsciiString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::InsertAfter(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem)
{
	Handle(::TCollection_HAsciiString) h_theItem = theItem->NativeInstance;
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Split(int theIndex, Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq)
{
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfHAsciiString*)theSeq->NativeInstance);
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::First()
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::ChangeFirst()
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::Last()
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::ChangeLast()
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::Value(int theIndex)
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::ChangeValue(int theIndex)
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::SetValue(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem)
{
	Handle(::TCollection_HAsciiString) h_theItem = theItem->NativeInstance;
	((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHExtendedString
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfHExtendedString::TColStd_SequenceOfHExtendedString()
	: BaseClass<::TColStd_SequenceOfHExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfHExtendedString();
}

Macad::Occt::TColStd_SequenceOfHExtendedString::TColStd_SequenceOfHExtendedString(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_SequenceOfHExtendedString>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_SequenceOfHExtendedString(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_SequenceOfHExtendedString::TColStd_SequenceOfHExtendedString(Macad::Occt::TColStd_SequenceOfHExtendedString^ theOther)
	: BaseClass<::TColStd_SequenceOfHExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfHExtendedString(*(::TColStd_SequenceOfHExtendedString*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_SequenceOfHExtendedString::Size()
{
	return ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_SequenceOfHExtendedString::Length()
{
	return ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_SequenceOfHExtendedString::Lower()
{
	return ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_SequenceOfHExtendedString::Upper()
{
	return ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_SequenceOfHExtendedString::IsEmpty()
{
	return ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Reverse()
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Exchange(int I, int J)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Clear()
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_SequenceOfHExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::Assign(Macad::Occt::TColStd_SequenceOfHExtendedString^ theOther)
{
	::TColStd_SequenceOfHExtendedString* _result = new ::TColStd_SequenceOfHExtendedString();
	*_result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Assign(*(::TColStd_SequenceOfHExtendedString*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfHExtendedString(_result);
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Remove(int theIndex)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Append(Macad::Occt::TCollection_HExtendedString^ theItem)
{
	Handle(::TCollection_HExtendedString) h_theItem = theItem->NativeInstance;
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Append(Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Append(*(::TColStd_SequenceOfHExtendedString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Prepend(Macad::Occt::TCollection_HExtendedString^ theItem)
{
	Handle(::TCollection_HExtendedString) h_theItem = theItem->NativeInstance;
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Prepend(Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Prepend(*(::TColStd_SequenceOfHExtendedString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::InsertBefore(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem)
{
	Handle(::TCollection_HExtendedString) h_theItem = theItem->NativeInstance;
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->InsertBefore(theIndex, *(::TColStd_SequenceOfHExtendedString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->InsertAfter(theIndex, *(::TColStd_SequenceOfHExtendedString*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::InsertAfter(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem)
{
	Handle(::TCollection_HExtendedString) h_theItem = theItem->NativeInstance;
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Split(int theIndex, Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq)
{
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfHExtendedString*)theSeq->NativeInstance);
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::First()
{
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::ChangeFirst()
{
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::Last()
{
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::ChangeLast()
{
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::Value(int theIndex)
{
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::ChangeValue(int theIndex)
{
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::SetValue(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem)
{
	Handle(::TCollection_HExtendedString) h_theItem = theItem->NativeInstance;
	((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfInteger::TColStd_SequenceOfInteger()
	: BaseClass<::TColStd_SequenceOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfInteger();
}

Macad::Occt::TColStd_SequenceOfInteger::TColStd_SequenceOfInteger(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_SequenceOfInteger>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_SequenceOfInteger(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_SequenceOfInteger::TColStd_SequenceOfInteger(Macad::Occt::TColStd_SequenceOfInteger^ theOther)
	: BaseClass<::TColStd_SequenceOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfInteger(*(::TColStd_SequenceOfInteger*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_SequenceOfInteger::Size()
{
	return ((::TColStd_SequenceOfInteger*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_SequenceOfInteger::Length()
{
	return ((::TColStd_SequenceOfInteger*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_SequenceOfInteger::Lower()
{
	return ((::TColStd_SequenceOfInteger*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_SequenceOfInteger::Upper()
{
	return ((::TColStd_SequenceOfInteger*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_SequenceOfInteger::IsEmpty()
{
	return ((::TColStd_SequenceOfInteger*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_SequenceOfInteger::Reverse()
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_SequenceOfInteger::Exchange(int I, int J)
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_SequenceOfInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_SequenceOfInteger::Clear()
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_SequenceOfInteger^ Macad::Occt::TColStd_SequenceOfInteger::Assign(Macad::Occt::TColStd_SequenceOfInteger^ theOther)
{
	::TColStd_SequenceOfInteger* _result = new ::TColStd_SequenceOfInteger();
	*_result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Assign(*(::TColStd_SequenceOfInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfInteger(_result);
}

void Macad::Occt::TColStd_SequenceOfInteger::Remove(int theIndex)
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_SequenceOfInteger::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_SequenceOfInteger::Append(int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Append(*(int*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfInteger::Append(Macad::Occt::TColStd_SequenceOfInteger^ theSeq)
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Append(*(::TColStd_SequenceOfInteger*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfInteger::Prepend(int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Prepend(*(int*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfInteger::Prepend(Macad::Occt::TColStd_SequenceOfInteger^ theSeq)
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Prepend(*(::TColStd_SequenceOfInteger*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfInteger::InsertBefore(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_SequenceOfInteger*)_NativeInstance)->InsertBefore(theIndex, *(int*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfInteger::InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfInteger^ theSeq)
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->InsertBefore(theIndex, *(::TColStd_SequenceOfInteger*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfInteger::InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfInteger^ theSeq)
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->InsertAfter(theIndex, *(::TColStd_SequenceOfInteger*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfInteger::InsertAfter(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_SequenceOfInteger*)_NativeInstance)->InsertAfter(theIndex, *(int*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfInteger::Split(int theIndex, Macad::Occt::TColStd_SequenceOfInteger^ theSeq)
{
	((::TColStd_SequenceOfInteger*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfInteger*)theSeq->NativeInstance);
}

int Macad::Occt::TColStd_SequenceOfInteger::First()
{
	return ((::TColStd_SequenceOfInteger*)_NativeInstance)->First();
}

int Macad::Occt::TColStd_SequenceOfInteger::ChangeFirst()
{
	return ((::TColStd_SequenceOfInteger*)_NativeInstance)->ChangeFirst();
}

int Macad::Occt::TColStd_SequenceOfInteger::Last()
{
	return ((::TColStd_SequenceOfInteger*)_NativeInstance)->Last();
}

int Macad::Occt::TColStd_SequenceOfInteger::ChangeLast()
{
	return ((::TColStd_SequenceOfInteger*)_NativeInstance)->ChangeLast();
}

int Macad::Occt::TColStd_SequenceOfInteger::Value(int theIndex)
{
	return ((::TColStd_SequenceOfInteger*)_NativeInstance)->Value(theIndex);
}

int Macad::Occt::TColStd_SequenceOfInteger::ChangeValue(int theIndex)
{
	return ((::TColStd_SequenceOfInteger*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_SequenceOfInteger::SetValue(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_SequenceOfInteger*)_NativeInstance)->SetValue(theIndex, *(int*)pp_theItem);
}




//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfReal::TColStd_SequenceOfReal()
	: BaseClass<::TColStd_SequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfReal();
}

Macad::Occt::TColStd_SequenceOfReal::TColStd_SequenceOfReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_SequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_SequenceOfReal(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_SequenceOfReal::TColStd_SequenceOfReal(Macad::Occt::TColStd_SequenceOfReal^ theOther)
	: BaseClass<::TColStd_SequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfReal(*(::TColStd_SequenceOfReal*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_SequenceOfReal::Size()
{
	return ((::TColStd_SequenceOfReal*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_SequenceOfReal::Length()
{
	return ((::TColStd_SequenceOfReal*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_SequenceOfReal::Lower()
{
	return ((::TColStd_SequenceOfReal*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_SequenceOfReal::Upper()
{
	return ((::TColStd_SequenceOfReal*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_SequenceOfReal::IsEmpty()
{
	return ((::TColStd_SequenceOfReal*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_SequenceOfReal::Reverse()
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_SequenceOfReal::Exchange(int I, int J)
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_SequenceOfReal::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_SequenceOfReal*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_SequenceOfReal::Clear()
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_SequenceOfReal^ Macad::Occt::TColStd_SequenceOfReal::Assign(Macad::Occt::TColStd_SequenceOfReal^ theOther)
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Assign(*(::TColStd_SequenceOfReal*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfReal(_result);
}

void Macad::Occt::TColStd_SequenceOfReal::Remove(int theIndex)
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_SequenceOfReal::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_SequenceOfReal::Append(double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_SequenceOfReal*)_NativeInstance)->Append(*(double*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfReal::Append(Macad::Occt::TColStd_SequenceOfReal^ theSeq)
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Append(*(::TColStd_SequenceOfReal*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfReal::Prepend(double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_SequenceOfReal*)_NativeInstance)->Prepend(*(double*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfReal::Prepend(Macad::Occt::TColStd_SequenceOfReal^ theSeq)
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Prepend(*(::TColStd_SequenceOfReal*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfReal::InsertBefore(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_SequenceOfReal*)_NativeInstance)->InsertBefore(theIndex, *(double*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfReal::InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theSeq)
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->InsertBefore(theIndex, *(::TColStd_SequenceOfReal*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfReal::InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theSeq)
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->InsertAfter(theIndex, *(::TColStd_SequenceOfReal*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfReal::InsertAfter(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_SequenceOfReal*)_NativeInstance)->InsertAfter(theIndex, *(double*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfReal::Split(int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theSeq)
{
	((::TColStd_SequenceOfReal*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfReal*)theSeq->NativeInstance);
}

double Macad::Occt::TColStd_SequenceOfReal::First()
{
	return ((::TColStd_SequenceOfReal*)_NativeInstance)->First();
}

double Macad::Occt::TColStd_SequenceOfReal::ChangeFirst()
{
	return ((::TColStd_SequenceOfReal*)_NativeInstance)->ChangeFirst();
}

double Macad::Occt::TColStd_SequenceOfReal::Last()
{
	return ((::TColStd_SequenceOfReal*)_NativeInstance)->Last();
}

double Macad::Occt::TColStd_SequenceOfReal::ChangeLast()
{
	return ((::TColStd_SequenceOfReal*)_NativeInstance)->ChangeLast();
}

double Macad::Occt::TColStd_SequenceOfReal::Value(int theIndex)
{
	return ((::TColStd_SequenceOfReal*)_NativeInstance)->Value(theIndex);
}

double Macad::Occt::TColStd_SequenceOfReal::ChangeValue(int theIndex)
{
	return ((::TColStd_SequenceOfReal*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_SequenceOfReal::SetValue(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_SequenceOfReal*)_NativeInstance)->SetValue(theIndex, *(double*)pp_theItem);
}




//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfTransient::TColStd_SequenceOfTransient()
	: BaseClass<::TColStd_SequenceOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfTransient();
}

Macad::Occt::TColStd_SequenceOfTransient::TColStd_SequenceOfTransient(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_SequenceOfTransient>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_SequenceOfTransient(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_SequenceOfTransient::TColStd_SequenceOfTransient(Macad::Occt::TColStd_SequenceOfTransient^ theOther)
	: BaseClass<::TColStd_SequenceOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfTransient(*(::TColStd_SequenceOfTransient*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_SequenceOfTransient::Size()
{
	return ((::TColStd_SequenceOfTransient*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_SequenceOfTransient::Length()
{
	return ((::TColStd_SequenceOfTransient*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_SequenceOfTransient::Lower()
{
	return ((::TColStd_SequenceOfTransient*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_SequenceOfTransient::Upper()
{
	return ((::TColStd_SequenceOfTransient*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_SequenceOfTransient::IsEmpty()
{
	return ((::TColStd_SequenceOfTransient*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_SequenceOfTransient::Reverse()
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_SequenceOfTransient::Exchange(int I, int J)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_SequenceOfTransient::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_SequenceOfTransient::Clear()
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_SequenceOfTransient^ Macad::Occt::TColStd_SequenceOfTransient::Assign(Macad::Occt::TColStd_SequenceOfTransient^ theOther)
{
	::TColStd_SequenceOfTransient* _result = new ::TColStd_SequenceOfTransient();
	*_result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Assign(*(::TColStd_SequenceOfTransient*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfTransient(_result);
}

void Macad::Occt::TColStd_SequenceOfTransient::Remove(int theIndex)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_SequenceOfTransient::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_SequenceOfTransient::Append(Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_SequenceOfTransient::Append(Macad::Occt::TColStd_SequenceOfTransient^ theSeq)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Append(*(::TColStd_SequenceOfTransient*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfTransient::Prepend(Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_SequenceOfTransient::Prepend(Macad::Occt::TColStd_SequenceOfTransient^ theSeq)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Prepend(*(::TColStd_SequenceOfTransient*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfTransient::InsertBefore(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_SequenceOfTransient::InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfTransient^ theSeq)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->InsertBefore(theIndex, *(::TColStd_SequenceOfTransient*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfTransient::InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfTransient^ theSeq)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->InsertAfter(theIndex, *(::TColStd_SequenceOfTransient*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfTransient::InsertAfter(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_SequenceOfTransient::Split(int theIndex, Macad::Occt::TColStd_SequenceOfTransient^ theSeq)
{
	((::TColStd_SequenceOfTransient*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfTransient*)theSeq->NativeInstance);
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::First()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::ChangeFirst()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::Last()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::ChangeLast()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::Value(int theIndex)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::ChangeValue(int theIndex)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_SequenceOfTransient::SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}




//---------------------------------------------------------------------
//  Class  TColStd_IndexedDataMapOfStringString
//---------------------------------------------------------------------

Macad::Occt::TColStd_IndexedDataMapOfStringString::TColStd_IndexedDataMapOfStringString()
	: BaseClass<::TColStd_IndexedDataMapOfStringString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedDataMapOfStringString();
}

Macad::Occt::TColStd_IndexedDataMapOfStringString::TColStd_IndexedDataMapOfStringString(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_IndexedDataMapOfStringString>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_IndexedDataMapOfStringString(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_IndexedDataMapOfStringString::TColStd_IndexedDataMapOfStringString(int theNbBuckets)
	: BaseClass<::TColStd_IndexedDataMapOfStringString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedDataMapOfStringString(theNbBuckets, 0L);
}

Macad::Occt::TColStd_IndexedDataMapOfStringString::TColStd_IndexedDataMapOfStringString(Macad::Occt::TColStd_IndexedDataMapOfStringString^ theOther)
	: BaseClass<::TColStd_IndexedDataMapOfStringString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedDataMapOfStringString(*(::TColStd_IndexedDataMapOfStringString*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_IndexedDataMapOfStringString::Exchange(Macad::Occt::TColStd_IndexedDataMapOfStringString^ theOther)
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Exchange(*(::TColStd_IndexedDataMapOfStringString*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_IndexedDataMapOfStringString::Add(Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::TCollection_AsciiString^ theItem)
{
	return ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Add(*(::TCollection_AsciiString*)theKey1->NativeInstance, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

bool Macad::Occt::TColStd_IndexedDataMapOfStringString::Contains(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	return ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Contains(*(::TCollection_AsciiString*)theKey1->NativeInstance);
}

void Macad::Occt::TColStd_IndexedDataMapOfStringString::Substitute(int theIndex, Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::TCollection_AsciiString^ theItem)
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Substitute(theIndex, *(::TCollection_AsciiString*)theKey1->NativeInstance, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_IndexedDataMapOfStringString::Swap(int theIndex1, int theIndex2)
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::TColStd_IndexedDataMapOfStringString::RemoveLast()
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::TColStd_IndexedDataMapOfStringString::RemoveFromIndex(int theIndex)
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::TColStd_IndexedDataMapOfStringString::RemoveKey(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->RemoveKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_IndexedDataMapOfStringString::FindKey(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->FindKey(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_IndexedDataMapOfStringString::FindFromIndex(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->FindFromIndex(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_IndexedDataMapOfStringString::ChangeFromIndex(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->ChangeFromIndex(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

int Macad::Occt::TColStd_IndexedDataMapOfStringString::FindIndex(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	return ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->FindIndex(*(::TCollection_AsciiString*)theKey1->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_IndexedDataMapOfStringString::FindFromKey(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->FindFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_IndexedDataMapOfStringString::ChangeFromKey(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->ChangeFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_IndexedDataMapOfStringString::Seek(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	::TCollection_AsciiString* _result;
	_result = (::TCollection_AsciiString*)((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Seek(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_IndexedDataMapOfStringString::ChangeSeek(Macad::Occt::TCollection_AsciiString^ theKey1)
{
	::TCollection_AsciiString* _result;
	_result = (::TCollection_AsciiString*)((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->ChangeSeek(*(::TCollection_AsciiString*)theKey1->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::TColStd_IndexedDataMapOfStringString::FindFromKey(Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::TCollection_AsciiString^ theValue)
{
	return ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->FindFromKey(*(::TCollection_AsciiString*)theKey1->NativeInstance, *(::TCollection_AsciiString*)theValue->NativeInstance);
}

void Macad::Occt::TColStd_IndexedDataMapOfStringString::Clear(bool doReleaseMemory)
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_IndexedDataMapOfStringString::Clear()
{
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TColStd_IndexedDataMapOfStringString::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TColStd_IndexedDataMapOfStringString::Size()
{
	return ((::TColStd_IndexedDataMapOfStringString*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_IndexedMapOfInteger::TColStd_IndexedMapOfInteger()
	: BaseClass<::TColStd_IndexedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfInteger();
}

Macad::Occt::TColStd_IndexedMapOfInteger::TColStd_IndexedMapOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_IndexedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_IndexedMapOfInteger(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_IndexedMapOfInteger::TColStd_IndexedMapOfInteger(int theNbBuckets)
	: BaseClass<::TColStd_IndexedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfInteger(theNbBuckets, 0L);
}

Macad::Occt::TColStd_IndexedMapOfInteger::TColStd_IndexedMapOfInteger(Macad::Occt::TColStd_IndexedMapOfInteger^ theOther)
	: BaseClass<::TColStd_IndexedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfInteger(*(::TColStd_IndexedMapOfInteger*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_IndexedMapOfInteger::Exchange(Macad::Occt::TColStd_IndexedMapOfInteger^ theOther)
{
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Exchange(*(::TColStd_IndexedMapOfInteger*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_IndexedMapOfInteger::Add(int theKey1)
{
	pin_ptr<int> pp_theKey1 = &theKey1;
	return ((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Add(*(int*)pp_theKey1);
}

bool Macad::Occt::TColStd_IndexedMapOfInteger::Contains(int theKey1)
{
	pin_ptr<int> pp_theKey1 = &theKey1;
	return ((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Contains(*(int*)pp_theKey1);
}

void Macad::Occt::TColStd_IndexedMapOfInteger::Substitute(int theIndex, int theKey1)
{
	pin_ptr<int> pp_theKey1 = &theKey1;
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Substitute(theIndex, *(int*)pp_theKey1);
}

void Macad::Occt::TColStd_IndexedMapOfInteger::Swap(int theIndex1, int theIndex2)
{
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::TColStd_IndexedMapOfInteger::RemoveLast()
{
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::TColStd_IndexedMapOfInteger::RemoveFromIndex(int theIndex)
{
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->RemoveFromIndex(theIndex);
}

bool Macad::Occt::TColStd_IndexedMapOfInteger::RemoveKey(int theKey1)
{
	pin_ptr<int> pp_theKey1 = &theKey1;
	return ((::TColStd_IndexedMapOfInteger*)_NativeInstance)->RemoveKey(*(int*)pp_theKey1);
}

int Macad::Occt::TColStd_IndexedMapOfInteger::FindKey(int theIndex)
{
	return ((::TColStd_IndexedMapOfInteger*)_NativeInstance)->FindKey(theIndex);
}

int Macad::Occt::TColStd_IndexedMapOfInteger::FindIndex(int theKey1)
{
	pin_ptr<int> pp_theKey1 = &theKey1;
	return ((::TColStd_IndexedMapOfInteger*)_NativeInstance)->FindIndex(*(int*)pp_theKey1);
}

void Macad::Occt::TColStd_IndexedMapOfInteger::Clear(bool doReleaseMemory)
{
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_IndexedMapOfInteger::Clear()
{
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TColStd_IndexedMapOfInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TColStd_IndexedMapOfInteger::Size()
{
	return ((::TColStd_IndexedMapOfInteger*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TColStd_MapRealHasher
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapRealHasher::TColStd_MapRealHasher()
	: BaseClass<::TColStd_MapRealHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapRealHasher();
}

Macad::Occt::TColStd_MapRealHasher::TColStd_MapRealHasher(Macad::Occt::TColStd_MapRealHasher^ parameter1)
	: BaseClass<::TColStd_MapRealHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapRealHasher(*(::TColStd_MapRealHasher*)parameter1->NativeInstance);
}

int Macad::Occt::TColStd_MapRealHasher::HashCode(double theKey, int theUpperBound)
{
	pin_ptr<double> pp_theKey = &theKey;
	return ::TColStd_MapRealHasher::HashCode(*(double*)pp_theKey, theUpperBound);
}

bool Macad::Occt::TColStd_MapRealHasher::IsEqual(double theKey1, double theKey2)
{
	pin_ptr<double> pp_theKey1 = &theKey1;
	pin_ptr<double> pp_theKey2 = &theKey2;
	return ::TColStd_MapRealHasher::IsEqual(*(double*)pp_theKey1, *(double*)pp_theKey2);
}




//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_IndexedMapOfReal::TColStd_IndexedMapOfReal()
	: BaseClass<::TColStd_IndexedMapOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfReal();
}

Macad::Occt::TColStd_IndexedMapOfReal::TColStd_IndexedMapOfReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_IndexedMapOfReal>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_IndexedMapOfReal(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_IndexedMapOfReal::TColStd_IndexedMapOfReal(int theNbBuckets)
	: BaseClass<::TColStd_IndexedMapOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfReal(theNbBuckets, 0L);
}

Macad::Occt::TColStd_IndexedMapOfReal::TColStd_IndexedMapOfReal(Macad::Occt::TColStd_IndexedMapOfReal^ theOther)
	: BaseClass<::TColStd_IndexedMapOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_IndexedMapOfReal(*(::TColStd_IndexedMapOfReal*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_IndexedMapOfReal::Exchange(Macad::Occt::TColStd_IndexedMapOfReal^ theOther)
{
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->Exchange(*(::TColStd_IndexedMapOfReal*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_IndexedMapOfReal::Add(double theKey1)
{
	pin_ptr<double> pp_theKey1 = &theKey1;
	return ((::TColStd_IndexedMapOfReal*)_NativeInstance)->Add(*(double*)pp_theKey1);
}

bool Macad::Occt::TColStd_IndexedMapOfReal::Contains(double theKey1)
{
	pin_ptr<double> pp_theKey1 = &theKey1;
	return ((::TColStd_IndexedMapOfReal*)_NativeInstance)->Contains(*(double*)pp_theKey1);
}

void Macad::Occt::TColStd_IndexedMapOfReal::Substitute(int theIndex, double theKey1)
{
	pin_ptr<double> pp_theKey1 = &theKey1;
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->Substitute(theIndex, *(double*)pp_theKey1);
}

void Macad::Occt::TColStd_IndexedMapOfReal::Swap(int theIndex1, int theIndex2)
{
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::TColStd_IndexedMapOfReal::RemoveLast()
{
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::TColStd_IndexedMapOfReal::RemoveFromIndex(int theIndex)
{
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->RemoveFromIndex(theIndex);
}

bool Macad::Occt::TColStd_IndexedMapOfReal::RemoveKey(double theKey1)
{
	pin_ptr<double> pp_theKey1 = &theKey1;
	return ((::TColStd_IndexedMapOfReal*)_NativeInstance)->RemoveKey(*(double*)pp_theKey1);
}

double Macad::Occt::TColStd_IndexedMapOfReal::FindKey(int theIndex)
{
	return ((::TColStd_IndexedMapOfReal*)_NativeInstance)->FindKey(theIndex);
}

int Macad::Occt::TColStd_IndexedMapOfReal::FindIndex(double theKey1)
{
	pin_ptr<double> pp_theKey1 = &theKey1;
	return ((::TColStd_IndexedMapOfReal*)_NativeInstance)->FindIndex(*(double*)pp_theKey1);
}

void Macad::Occt::TColStd_IndexedMapOfReal::Clear(bool doReleaseMemory)
{
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_IndexedMapOfReal::Clear()
{
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TColStd_IndexedMapOfReal::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_IndexedMapOfReal*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TColStd_IndexedMapOfReal::Size()
{
	return ((::TColStd_IndexedMapOfReal*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TColStd_ListOfAsciiString
//---------------------------------------------------------------------

Macad::Occt::TColStd_ListOfAsciiString::TColStd_ListOfAsciiString()
	: BaseClass<::TColStd_ListOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfAsciiString();
}

Macad::Occt::TColStd_ListOfAsciiString::TColStd_ListOfAsciiString(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_ListOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_ListOfAsciiString(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_ListOfAsciiString::TColStd_ListOfAsciiString(Macad::Occt::TColStd_ListOfAsciiString^ theOther)
	: BaseClass<::TColStd_ListOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfAsciiString(*(::TColStd_ListOfAsciiString*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_ListOfAsciiString::Size()
{
	return ((::TColStd_ListOfAsciiString*)_NativeInstance)->Size();
}

Macad::Occt::TColStd_ListOfAsciiString^ Macad::Occt::TColStd_ListOfAsciiString::Assign(Macad::Occt::TColStd_ListOfAsciiString^ theOther)
{
	::TColStd_ListOfAsciiString* _result = new ::TColStd_ListOfAsciiString();
	*_result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->Assign(*(::TColStd_ListOfAsciiString*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfAsciiString(_result);
}

void Macad::Occt::TColStd_ListOfAsciiString::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_ListOfAsciiString*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_ListOfAsciiString::Clear()
{
	((::TColStd_ListOfAsciiString*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_ListOfAsciiString::First()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_ListOfAsciiString*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_ListOfAsciiString::Last()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_ListOfAsciiString*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_ListOfAsciiString::Append(Macad::Occt::TCollection_AsciiString^ theItem)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->Append(*(::TCollection_AsciiString*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::TColStd_ListOfAsciiString::Append(Macad::Occt::TColStd_ListOfAsciiString^ theOther)
{
	((::TColStd_ListOfAsciiString*)_NativeInstance)->Append(*(::TColStd_ListOfAsciiString*)theOther->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_ListOfAsciiString::Prepend(Macad::Occt::TCollection_AsciiString^ theItem)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->Prepend(*(::TCollection_AsciiString*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::TColStd_ListOfAsciiString::Prepend(Macad::Occt::TColStd_ListOfAsciiString^ theOther)
{
	((::TColStd_ListOfAsciiString*)_NativeInstance)->Prepend(*(::TColStd_ListOfAsciiString*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_ListOfAsciiString::RemoveFirst()
{
	((::TColStd_ListOfAsciiString*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::TColStd_ListOfAsciiString::Reverse()
{
	((::TColStd_ListOfAsciiString*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  TColStd_ListOfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_ListOfReal::TColStd_ListOfReal()
	: BaseClass<::TColStd_ListOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfReal();
}

Macad::Occt::TColStd_ListOfReal::TColStd_ListOfReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_ListOfReal>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_ListOfReal(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_ListOfReal::TColStd_ListOfReal(Macad::Occt::TColStd_ListOfReal^ theOther)
	: BaseClass<::TColStd_ListOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfReal(*(::TColStd_ListOfReal*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_ListOfReal::Size()
{
	return ((::TColStd_ListOfReal*)_NativeInstance)->Size();
}

Macad::Occt::TColStd_ListOfReal^ Macad::Occt::TColStd_ListOfReal::Assign(Macad::Occt::TColStd_ListOfReal^ theOther)
{
	::TColStd_ListOfReal* _result = new ::TColStd_ListOfReal();
	*_result = ((::TColStd_ListOfReal*)_NativeInstance)->Assign(*(::TColStd_ListOfReal*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfReal(_result);
}

void Macad::Occt::TColStd_ListOfReal::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_ListOfReal*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_ListOfReal::Clear()
{
	((::TColStd_ListOfReal*)_NativeInstance)->Clear(0L);
}

double Macad::Occt::TColStd_ListOfReal::First()
{
	return ((::TColStd_ListOfReal*)_NativeInstance)->First();
}

double Macad::Occt::TColStd_ListOfReal::Last()
{
	return ((::TColStd_ListOfReal*)_NativeInstance)->Last();
}

double Macad::Occt::TColStd_ListOfReal::Append(double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	return ((::TColStd_ListOfReal*)_NativeInstance)->Append(*(double*)pp_theItem);
}

void Macad::Occt::TColStd_ListOfReal::Append(Macad::Occt::TColStd_ListOfReal^ theOther)
{
	((::TColStd_ListOfReal*)_NativeInstance)->Append(*(::TColStd_ListOfReal*)theOther->NativeInstance);
}

double Macad::Occt::TColStd_ListOfReal::Prepend(double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	return ((::TColStd_ListOfReal*)_NativeInstance)->Prepend(*(double*)pp_theItem);
}

void Macad::Occt::TColStd_ListOfReal::Prepend(Macad::Occt::TColStd_ListOfReal^ theOther)
{
	((::TColStd_ListOfReal*)_NativeInstance)->Prepend(*(::TColStd_ListOfReal*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_ListOfReal::RemoveFirst()
{
	((::TColStd_ListOfReal*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::TColStd_ListOfReal::Reverse()
{
	((::TColStd_ListOfReal*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  TColStd_ListOfTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_ListOfTransient::TColStd_ListOfTransient()
	: BaseClass<::TColStd_ListOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfTransient();
}

Macad::Occt::TColStd_ListOfTransient::TColStd_ListOfTransient(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_ListOfTransient>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_ListOfTransient(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_ListOfTransient::TColStd_ListOfTransient(Macad::Occt::TColStd_ListOfTransient^ theOther)
	: BaseClass<::TColStd_ListOfTransient>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_ListOfTransient(*(::TColStd_ListOfTransient*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_ListOfTransient::Size()
{
	return ((::TColStd_ListOfTransient*)_NativeInstance)->Size();
}

Macad::Occt::TColStd_ListOfTransient^ Macad::Occt::TColStd_ListOfTransient::Assign(Macad::Occt::TColStd_ListOfTransient^ theOther)
{
	::TColStd_ListOfTransient* _result = new ::TColStd_ListOfTransient();
	*_result = ((::TColStd_ListOfTransient*)_NativeInstance)->Assign(*(::TColStd_ListOfTransient*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfTransient(_result);
}

void Macad::Occt::TColStd_ListOfTransient::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_ListOfTransient*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_ListOfTransient::Clear()
{
	((::TColStd_ListOfTransient*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_ListOfTransient::First()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_ListOfTransient::Last()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_ListOfTransient::Append(Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_ListOfTransient::Append(Macad::Occt::TColStd_ListOfTransient^ theOther)
{
	((::TColStd_ListOfTransient*)_NativeInstance)->Append(*(::TColStd_ListOfTransient*)theOther->NativeInstance);
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_ListOfTransient::Prepend(Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_ListOfTransient::Prepend(Macad::Occt::TColStd_ListOfTransient^ theOther)
{
	((::TColStd_ListOfTransient*)_NativeInstance)->Prepend(*(::TColStd_ListOfTransient*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_ListOfTransient::RemoveFirst()
{
	((::TColStd_ListOfTransient*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::TColStd_ListOfTransient::Reverse()
{
	((::TColStd_ListOfTransient*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  TColStd_MapOfAsciiString
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapOfAsciiString::TColStd_MapOfAsciiString()
	: BaseClass<::TColStd_MapOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfAsciiString();
}

Macad::Occt::TColStd_MapOfAsciiString::TColStd_MapOfAsciiString(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_MapOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_MapOfAsciiString(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_MapOfAsciiString::TColStd_MapOfAsciiString(int theNbBuckets)
	: BaseClass<::TColStd_MapOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfAsciiString(theNbBuckets, 0L);
}

Macad::Occt::TColStd_MapOfAsciiString::TColStd_MapOfAsciiString(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
	: BaseClass<::TColStd_MapOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfAsciiString(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_MapOfAsciiString::Exchange(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Exchange(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
}

Macad::Occt::TColStd_MapOfAsciiString^ Macad::Occt::TColStd_MapOfAsciiString::Assign(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
{
	::TColStd_MapOfAsciiString* _result = new ::TColStd_MapOfAsciiString();
	*_result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Assign(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_MapOfAsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_MapOfAsciiString::Added(Macad::Occt::TCollection_AsciiString^ K)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_MapOfAsciiString*)_NativeInstance)->Added(*(::TCollection_AsciiString*)K->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::TColStd_MapOfAsciiString::Contains(Macad::Occt::TCollection_AsciiString^ K)
{
	return ((::TColStd_MapOfAsciiString*)_NativeInstance)->Contains(*(::TCollection_AsciiString*)K->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfAsciiString::Remove(Macad::Occt::TCollection_AsciiString^ K)
{
	return ((::TColStd_MapOfAsciiString*)_NativeInstance)->Remove(*(::TCollection_AsciiString*)K->NativeInstance);
}

void Macad::Occt::TColStd_MapOfAsciiString::Clear(bool doReleaseMemory)
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_MapOfAsciiString::Clear()
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TColStd_MapOfAsciiString::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TColStd_MapOfAsciiString::Size()
{
	return ((::TColStd_MapOfAsciiString*)_NativeInstance)->Size();
}

bool Macad::Occt::TColStd_MapOfAsciiString::IsEqual(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
{
	return ((::TColStd_MapOfAsciiString*)_NativeInstance)->IsEqual(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfAsciiString::Contains(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
{
	return ((::TColStd_MapOfAsciiString*)_NativeInstance)->Contains(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_MapOfAsciiString::Union(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight)
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Union(*(::TColStd_MapOfAsciiString*)theLeft->NativeInstance, *(::TColStd_MapOfAsciiString*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfAsciiString::Unite(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
{
	return ((::TColStd_MapOfAsciiString*)_NativeInstance)->Unite(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfAsciiString::HasIntersection(Macad::Occt::TColStd_MapOfAsciiString^ theMap)
{
	return ((::TColStd_MapOfAsciiString*)_NativeInstance)->HasIntersection(*(::TColStd_MapOfAsciiString*)theMap->NativeInstance);
}

void Macad::Occt::TColStd_MapOfAsciiString::Intersection(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight)
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Intersection(*(::TColStd_MapOfAsciiString*)theLeft->NativeInstance, *(::TColStd_MapOfAsciiString*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfAsciiString::Intersect(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
{
	return ((::TColStd_MapOfAsciiString*)_NativeInstance)->Intersect(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_MapOfAsciiString::Subtraction(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight)
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Subtraction(*(::TColStd_MapOfAsciiString*)theLeft->NativeInstance, *(::TColStd_MapOfAsciiString*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfAsciiString::Subtract(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
{
	return ((::TColStd_MapOfAsciiString*)_NativeInstance)->Subtract(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_MapOfAsciiString::Difference(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight)
{
	((::TColStd_MapOfAsciiString*)_NativeInstance)->Difference(*(::TColStd_MapOfAsciiString*)theLeft->NativeInstance, *(::TColStd_MapOfAsciiString*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfAsciiString::Differ(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
{
	return ((::TColStd_MapOfAsciiString*)_NativeInstance)->Differ(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TColStd_MapOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapOfInteger::TColStd_MapOfInteger()
	: BaseClass<::TColStd_MapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfInteger();
}

Macad::Occt::TColStd_MapOfInteger::TColStd_MapOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_MapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_MapOfInteger(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_MapOfInteger::TColStd_MapOfInteger(int theNbBuckets)
	: BaseClass<::TColStd_MapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfInteger(theNbBuckets, 0L);
}

Macad::Occt::TColStd_MapOfInteger::TColStd_MapOfInteger(Macad::Occt::TColStd_MapOfInteger^ theOther)
	: BaseClass<::TColStd_MapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfInteger(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_MapOfInteger::Exchange(Macad::Occt::TColStd_MapOfInteger^ theOther)
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Exchange(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
}

Macad::Occt::TColStd_MapOfInteger^ Macad::Occt::TColStd_MapOfInteger::Assign(Macad::Occt::TColStd_MapOfInteger^ theOther)
{
	::TColStd_MapOfInteger* _result = new ::TColStd_MapOfInteger();
	*_result = ((::TColStd_MapOfInteger*)_NativeInstance)->Assign(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_MapOfInteger(_result);
}

int Macad::Occt::TColStd_MapOfInteger::Added(int K)
{
	pin_ptr<int> pp_K = &K;
	return ((::TColStd_MapOfInteger*)_NativeInstance)->Added(*(int*)pp_K);
}

bool Macad::Occt::TColStd_MapOfInteger::Contains(int K)
{
	pin_ptr<int> pp_K = &K;
	return ((::TColStd_MapOfInteger*)_NativeInstance)->Contains(*(int*)pp_K);
}

bool Macad::Occt::TColStd_MapOfInteger::Remove(int K)
{
	pin_ptr<int> pp_K = &K;
	return ((::TColStd_MapOfInteger*)_NativeInstance)->Remove(*(int*)pp_K);
}

void Macad::Occt::TColStd_MapOfInteger::Clear(bool doReleaseMemory)
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_MapOfInteger::Clear()
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TColStd_MapOfInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_MapOfInteger*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TColStd_MapOfInteger::Size()
{
	return ((::TColStd_MapOfInteger*)_NativeInstance)->Size();
}

bool Macad::Occt::TColStd_MapOfInteger::IsEqual(Macad::Occt::TColStd_MapOfInteger^ theOther)
{
	return ((::TColStd_MapOfInteger*)_NativeInstance)->IsEqual(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfInteger::Contains(Macad::Occt::TColStd_MapOfInteger^ theOther)
{
	return ((::TColStd_MapOfInteger*)_NativeInstance)->Contains(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_MapOfInteger::Union(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight)
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Union(*(::TColStd_MapOfInteger*)theLeft->NativeInstance, *(::TColStd_MapOfInteger*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfInteger::Unite(Macad::Occt::TColStd_MapOfInteger^ theOther)
{
	return ((::TColStd_MapOfInteger*)_NativeInstance)->Unite(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfInteger::HasIntersection(Macad::Occt::TColStd_MapOfInteger^ theMap)
{
	return ((::TColStd_MapOfInteger*)_NativeInstance)->HasIntersection(*(::TColStd_MapOfInteger*)theMap->NativeInstance);
}

void Macad::Occt::TColStd_MapOfInteger::Intersection(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight)
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Intersection(*(::TColStd_MapOfInteger*)theLeft->NativeInstance, *(::TColStd_MapOfInteger*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfInteger::Intersect(Macad::Occt::TColStd_MapOfInteger^ theOther)
{
	return ((::TColStd_MapOfInteger*)_NativeInstance)->Intersect(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_MapOfInteger::Subtraction(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight)
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Subtraction(*(::TColStd_MapOfInteger*)theLeft->NativeInstance, *(::TColStd_MapOfInteger*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfInteger::Subtract(Macad::Occt::TColStd_MapOfInteger^ theOther)
{
	return ((::TColStd_MapOfInteger*)_NativeInstance)->Subtract(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_MapOfInteger::Difference(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight)
{
	((::TColStd_MapOfInteger*)_NativeInstance)->Difference(*(::TColStd_MapOfInteger*)theLeft->NativeInstance, *(::TColStd_MapOfInteger*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfInteger::Differ(Macad::Occt::TColStd_MapOfInteger^ theOther)
{
	return ((::TColStd_MapOfInteger*)_NativeInstance)->Differ(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TColStd_MapOfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapOfReal::TColStd_MapOfReal()
	: BaseClass<::TColStd_MapOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfReal();
}

Macad::Occt::TColStd_MapOfReal::TColStd_MapOfReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_MapOfReal>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_MapOfReal(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_MapOfReal::TColStd_MapOfReal(int theNbBuckets)
	: BaseClass<::TColStd_MapOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfReal(theNbBuckets, 0L);
}

Macad::Occt::TColStd_MapOfReal::TColStd_MapOfReal(Macad::Occt::TColStd_MapOfReal^ theOther)
	: BaseClass<::TColStd_MapOfReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_MapOfReal(*(::TColStd_MapOfReal*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_MapOfReal::Exchange(Macad::Occt::TColStd_MapOfReal^ theOther)
{
	((::TColStd_MapOfReal*)_NativeInstance)->Exchange(*(::TColStd_MapOfReal*)theOther->NativeInstance);
}

Macad::Occt::TColStd_MapOfReal^ Macad::Occt::TColStd_MapOfReal::Assign(Macad::Occt::TColStd_MapOfReal^ theOther)
{
	::TColStd_MapOfReal* _result = new ::TColStd_MapOfReal();
	*_result = ((::TColStd_MapOfReal*)_NativeInstance)->Assign(*(::TColStd_MapOfReal*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_MapOfReal(_result);
}

double Macad::Occt::TColStd_MapOfReal::Added(double K)
{
	pin_ptr<double> pp_K = &K;
	return ((::TColStd_MapOfReal*)_NativeInstance)->Added(*(double*)pp_K);
}

bool Macad::Occt::TColStd_MapOfReal::Contains(double K)
{
	pin_ptr<double> pp_K = &K;
	return ((::TColStd_MapOfReal*)_NativeInstance)->Contains(*(double*)pp_K);
}

bool Macad::Occt::TColStd_MapOfReal::Remove(double K)
{
	pin_ptr<double> pp_K = &K;
	return ((::TColStd_MapOfReal*)_NativeInstance)->Remove(*(double*)pp_K);
}

void Macad::Occt::TColStd_MapOfReal::Clear(bool doReleaseMemory)
{
	((::TColStd_MapOfReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_MapOfReal::Clear()
{
	((::TColStd_MapOfReal*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TColStd_MapOfReal::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_MapOfReal*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TColStd_MapOfReal::Size()
{
	return ((::TColStd_MapOfReal*)_NativeInstance)->Size();
}

bool Macad::Occt::TColStd_MapOfReal::IsEqual(Macad::Occt::TColStd_MapOfReal^ theOther)
{
	return ((::TColStd_MapOfReal*)_NativeInstance)->IsEqual(*(::TColStd_MapOfReal*)theOther->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfReal::Contains(Macad::Occt::TColStd_MapOfReal^ theOther)
{
	return ((::TColStd_MapOfReal*)_NativeInstance)->Contains(*(::TColStd_MapOfReal*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_MapOfReal::Union(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight)
{
	((::TColStd_MapOfReal*)_NativeInstance)->Union(*(::TColStd_MapOfReal*)theLeft->NativeInstance, *(::TColStd_MapOfReal*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfReal::Unite(Macad::Occt::TColStd_MapOfReal^ theOther)
{
	return ((::TColStd_MapOfReal*)_NativeInstance)->Unite(*(::TColStd_MapOfReal*)theOther->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfReal::HasIntersection(Macad::Occt::TColStd_MapOfReal^ theMap)
{
	return ((::TColStd_MapOfReal*)_NativeInstance)->HasIntersection(*(::TColStd_MapOfReal*)theMap->NativeInstance);
}

void Macad::Occt::TColStd_MapOfReal::Intersection(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight)
{
	((::TColStd_MapOfReal*)_NativeInstance)->Intersection(*(::TColStd_MapOfReal*)theLeft->NativeInstance, *(::TColStd_MapOfReal*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfReal::Intersect(Macad::Occt::TColStd_MapOfReal^ theOther)
{
	return ((::TColStd_MapOfReal*)_NativeInstance)->Intersect(*(::TColStd_MapOfReal*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_MapOfReal::Subtraction(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight)
{
	((::TColStd_MapOfReal*)_NativeInstance)->Subtraction(*(::TColStd_MapOfReal*)theLeft->NativeInstance, *(::TColStd_MapOfReal*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfReal::Subtract(Macad::Occt::TColStd_MapOfReal^ theOther)
{
	return ((::TColStd_MapOfReal*)_NativeInstance)->Subtract(*(::TColStd_MapOfReal*)theOther->NativeInstance);
}

void Macad::Occt::TColStd_MapOfReal::Difference(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight)
{
	((::TColStd_MapOfReal*)_NativeInstance)->Difference(*(::TColStd_MapOfReal*)theLeft->NativeInstance, *(::TColStd_MapOfReal*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfReal::Differ(Macad::Occt::TColStd_MapOfReal^ theOther)
{
	return ((::TColStd_MapOfReal*)_NativeInstance)->Differ(*(::TColStd_MapOfReal*)theOther->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfBoolean
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfBoolean::TColStd_SequenceOfBoolean()
	: BaseClass<::TColStd_SequenceOfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfBoolean();
}

Macad::Occt::TColStd_SequenceOfBoolean::TColStd_SequenceOfBoolean(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColStd_SequenceOfBoolean>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColStd_SequenceOfBoolean(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColStd_SequenceOfBoolean::TColStd_SequenceOfBoolean(Macad::Occt::TColStd_SequenceOfBoolean^ theOther)
	: BaseClass<::TColStd_SequenceOfBoolean>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColStd_SequenceOfBoolean(*(::TColStd_SequenceOfBoolean*)theOther->NativeInstance);
}

int Macad::Occt::TColStd_SequenceOfBoolean::Size()
{
	return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_SequenceOfBoolean::Length()
{
	return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_SequenceOfBoolean::Lower()
{
	return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_SequenceOfBoolean::Upper()
{
	return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_SequenceOfBoolean::IsEmpty()
{
	return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_SequenceOfBoolean::Reverse()
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_SequenceOfBoolean::Exchange(int I, int J)
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_SequenceOfBoolean::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_SequenceOfBoolean::Clear()
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_SequenceOfBoolean^ Macad::Occt::TColStd_SequenceOfBoolean::Assign(Macad::Occt::TColStd_SequenceOfBoolean^ theOther)
{
	::TColStd_SequenceOfBoolean* _result = new ::TColStd_SequenceOfBoolean();
	*_result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Assign(*(::TColStd_SequenceOfBoolean*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfBoolean(_result);
}

void Macad::Occt::TColStd_SequenceOfBoolean::Remove(int theIndex)
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_SequenceOfBoolean::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_SequenceOfBoolean::Append(bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Append(*(bool*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfBoolean::Append(Macad::Occt::TColStd_SequenceOfBoolean^ theSeq)
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Append(*(::TColStd_SequenceOfBoolean*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfBoolean::Prepend(bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Prepend(*(bool*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfBoolean::Prepend(Macad::Occt::TColStd_SequenceOfBoolean^ theSeq)
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Prepend(*(::TColStd_SequenceOfBoolean*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfBoolean::InsertBefore(int theIndex, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->InsertBefore(theIndex, *(bool*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfBoolean::InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfBoolean^ theSeq)
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->InsertBefore(theIndex, *(::TColStd_SequenceOfBoolean*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfBoolean::InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfBoolean^ theSeq)
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->InsertAfter(theIndex, *(::TColStd_SequenceOfBoolean*)theSeq->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfBoolean::InsertAfter(int theIndex, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->InsertAfter(theIndex, *(bool*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfBoolean::Split(int theIndex, Macad::Occt::TColStd_SequenceOfBoolean^ theSeq)
{
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfBoolean*)theSeq->NativeInstance);
}

bool Macad::Occt::TColStd_SequenceOfBoolean::First()
{
	return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->First();
}

bool Macad::Occt::TColStd_SequenceOfBoolean::ChangeFirst()
{
	return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->ChangeFirst();
}

bool Macad::Occt::TColStd_SequenceOfBoolean::Last()
{
	return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Last();
}

bool Macad::Occt::TColStd_SequenceOfBoolean::ChangeLast()
{
	return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->ChangeLast();
}

bool Macad::Occt::TColStd_SequenceOfBoolean::Value(int theIndex)
{
	return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Value(theIndex);
}

bool Macad::Occt::TColStd_SequenceOfBoolean::ChangeValue(int theIndex)
{
	return ((::TColStd_SequenceOfBoolean*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_SequenceOfBoolean::SetValue(int theIndex, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_SequenceOfBoolean*)_NativeInstance)->SetValue(theIndex, *(bool*)pp_theItem);
}




//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfAsciiString
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray1OfAsciiString::TColStd_HArray1OfAsciiString()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfAsciiString();
}

Macad::Occt::TColStd_HArray1OfAsciiString::TColStd_HArray1OfAsciiString(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfAsciiString(theLower, theUpper);
}

Macad::Occt::TColStd_HArray1OfAsciiString::TColStd_HArray1OfAsciiString(int theLower, int theUpper, Macad::Occt::TCollection_AsciiString^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfAsciiString(theLower, theUpper, *(::TCollection_AsciiString*)theValue->NativeInstance);
}

Macad::Occt::TColStd_HArray1OfAsciiString::TColStd_HArray1OfAsciiString(Macad::Occt::TColStd_Array1OfAsciiString^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfAsciiString(*(::TColStd_Array1OfAsciiString*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HArray1OfAsciiString::TColStd_HArray1OfAsciiString(Macad::Occt::TColStd_HArray1OfAsciiString^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfAsciiString(*(::TColStd_HArray1OfAsciiString*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_Array1OfAsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::Array1()
{
	::TColStd_Array1OfAsciiString* _result = new ::TColStd_Array1OfAsciiString();
	*_result =  (::TColStd_Array1OfAsciiString)((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfAsciiString(_result);
}

Macad::Occt::TColStd_Array1OfAsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::ChangeArray1()
{
	::TColStd_Array1OfAsciiString* _result = new ::TColStd_Array1OfAsciiString();
	*_result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfAsciiString(_result);
}

void Macad::Occt::TColStd_HArray1OfAsciiString::Init(Macad::Occt::TCollection_AsciiString^ theValue)
{
	((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Init(*(::TCollection_AsciiString*)theValue->NativeInstance);
}

int Macad::Occt::TColStd_HArray1OfAsciiString::Size()
{
	return ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray1OfAsciiString::Length()
{
	return ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_HArray1OfAsciiString::IsEmpty()
{
	return ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_HArray1OfAsciiString::Lower()
{
	return ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HArray1OfAsciiString::Upper()
{
	return ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HArray1OfAsciiString::IsDeletable()
{
	return ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_HArray1OfAsciiString::IsAllocated()
{
	return ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::First()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_HArray1OfAsciiString*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::ChangeFirst()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::Last()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::ChangeLast()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::Value(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::ChangeValue(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::TColStd_HArray1OfAsciiString::SetValue(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem)
{
	((::TColStd_HArray1OfAsciiString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HArray1OfAsciiString::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray1OfAsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::CreateDowncasted(::TColStd_HArray1OfAsciiString* instance)
{
	return gcnew Macad::Occt::TColStd_HArray1OfAsciiString( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfBoolean
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray1OfBoolean::TColStd_HArray1OfBoolean()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfBoolean();
}

Macad::Occt::TColStd_HArray1OfBoolean::TColStd_HArray1OfBoolean(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfBoolean(theLower, theUpper);
}

Macad::Occt::TColStd_HArray1OfBoolean::TColStd_HArray1OfBoolean(int theLower, int theUpper, bool theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<bool> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray1OfBoolean(theLower, theUpper, *(bool*)pp_theValue);
}

Macad::Occt::TColStd_HArray1OfBoolean::TColStd_HArray1OfBoolean(Macad::Occt::TColStd_Array1OfBoolean^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfBoolean(*(::TColStd_Array1OfBoolean*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HArray1OfBoolean::TColStd_HArray1OfBoolean(Macad::Occt::TColStd_HArray1OfBoolean^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfBoolean(*(::TColStd_HArray1OfBoolean*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_Array1OfBoolean^ Macad::Occt::TColStd_HArray1OfBoolean::Array1()
{
	::TColStd_Array1OfBoolean* _result = new ::TColStd_Array1OfBoolean();
	*_result =  (::TColStd_Array1OfBoolean)((::TColStd_HArray1OfBoolean*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfBoolean(_result);
}

Macad::Occt::TColStd_Array1OfBoolean^ Macad::Occt::TColStd_HArray1OfBoolean::ChangeArray1()
{
	::TColStd_Array1OfBoolean* _result = new ::TColStd_Array1OfBoolean();
	*_result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfBoolean(_result);
}

void Macad::Occt::TColStd_HArray1OfBoolean::Init(bool theValue)
{
	pin_ptr<bool> pp_theValue = &theValue;
	((::TColStd_HArray1OfBoolean*)_NativeInstance)->Init(*(bool*)pp_theValue);
}

int Macad::Occt::TColStd_HArray1OfBoolean::Size()
{
	return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray1OfBoolean::Length()
{
	return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_HArray1OfBoolean::IsEmpty()
{
	return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_HArray1OfBoolean::Lower()
{
	return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HArray1OfBoolean::Upper()
{
	return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HArray1OfBoolean::IsDeletable()
{
	return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_HArray1OfBoolean::IsAllocated()
{
	return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->IsAllocated();
}

bool Macad::Occt::TColStd_HArray1OfBoolean::First()
{
	return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->First();
}

bool Macad::Occt::TColStd_HArray1OfBoolean::ChangeFirst()
{
	return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeFirst();
}

bool Macad::Occt::TColStd_HArray1OfBoolean::Last()
{
	return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Last();
}

bool Macad::Occt::TColStd_HArray1OfBoolean::ChangeLast()
{
	return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeLast();
}

bool Macad::Occt::TColStd_HArray1OfBoolean::Value(int theIndex)
{
	return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Value(theIndex);
}

bool Macad::Occt::TColStd_HArray1OfBoolean::ChangeValue(int theIndex)
{
	return ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_HArray1OfBoolean::SetValue(int theIndex, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_HArray1OfBoolean*)_NativeInstance)->SetValue(theIndex, *(bool*)pp_theItem);
}

void Macad::Occt::TColStd_HArray1OfBoolean::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfBoolean*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray1OfBoolean^ Macad::Occt::TColStd_HArray1OfBoolean::CreateDowncasted(::TColStd_HArray1OfBoolean* instance)
{
	return gcnew Macad::Occt::TColStd_HArray1OfBoolean( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfByte
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray1OfByte::TColStd_HArray1OfByte()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfByte();
}

Macad::Occt::TColStd_HArray1OfByte::TColStd_HArray1OfByte(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfByte(theLower, theUpper);
}

Macad::Occt::TColStd_HArray1OfByte::TColStd_HArray1OfByte(int theLower, int theUpper, unsigned char theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<unsigned char> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray1OfByte(theLower, theUpper, *(unsigned char*)pp_theValue);
}

Macad::Occt::TColStd_HArray1OfByte::TColStd_HArray1OfByte(Macad::Occt::TColStd_HArray1OfByte^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfByte(*(::TColStd_HArray1OfByte*)parameter1->NativeInstance);
}

void Macad::Occt::TColStd_HArray1OfByte::Init(unsigned char theValue)
{
	pin_ptr<unsigned char> pp_theValue = &theValue;
	((::TColStd_HArray1OfByte*)_NativeInstance)->Init(*(unsigned char*)pp_theValue);
}

int Macad::Occt::TColStd_HArray1OfByte::Size()
{
	return ((::TColStd_HArray1OfByte*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray1OfByte::Length()
{
	return ((::TColStd_HArray1OfByte*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_HArray1OfByte::IsEmpty()
{
	return ((::TColStd_HArray1OfByte*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_HArray1OfByte::Lower()
{
	return ((::TColStd_HArray1OfByte*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HArray1OfByte::Upper()
{
	return ((::TColStd_HArray1OfByte*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HArray1OfByte::IsDeletable()
{
	return ((::TColStd_HArray1OfByte*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_HArray1OfByte::IsAllocated()
{
	return ((::TColStd_HArray1OfByte*)_NativeInstance)->IsAllocated();
}

unsigned char Macad::Occt::TColStd_HArray1OfByte::First()
{
	return ((::TColStd_HArray1OfByte*)_NativeInstance)->First();
}

unsigned char Macad::Occt::TColStd_HArray1OfByte::ChangeFirst()
{
	return ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeFirst();
}

unsigned char Macad::Occt::TColStd_HArray1OfByte::Last()
{
	return ((::TColStd_HArray1OfByte*)_NativeInstance)->Last();
}

unsigned char Macad::Occt::TColStd_HArray1OfByte::ChangeLast()
{
	return ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeLast();
}

unsigned char Macad::Occt::TColStd_HArray1OfByte::Value(int theIndex)
{
	return ((::TColStd_HArray1OfByte*)_NativeInstance)->Value(theIndex);
}

unsigned char Macad::Occt::TColStd_HArray1OfByte::ChangeValue(int theIndex)
{
	return ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_HArray1OfByte::SetValue(int theIndex, unsigned char theItem)
{
	pin_ptr<unsigned char> pp_theItem = &theItem;
	((::TColStd_HArray1OfByte*)_NativeInstance)->SetValue(theIndex, *(unsigned char*)pp_theItem);
}

void Macad::Occt::TColStd_HArray1OfByte::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfByte*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray1OfByte^ Macad::Occt::TColStd_HArray1OfByte::CreateDowncasted(::TColStd_HArray1OfByte* instance)
{
	return gcnew Macad::Occt::TColStd_HArray1OfByte( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfCharacter
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray1OfCharacter::TColStd_HArray1OfCharacter()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfCharacter();
}

Macad::Occt::TColStd_HArray1OfCharacter::TColStd_HArray1OfCharacter(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfCharacter(theLower, theUpper);
}

Macad::Occt::TColStd_HArray1OfCharacter::TColStd_HArray1OfCharacter(int theLower, int theUpper, char theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<char> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray1OfCharacter(theLower, theUpper, *(char*)pp_theValue);
}

Macad::Occt::TColStd_HArray1OfCharacter::TColStd_HArray1OfCharacter(Macad::Occt::TColStd_Array1OfCharacter^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfCharacter(*(::TColStd_Array1OfCharacter*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HArray1OfCharacter::TColStd_HArray1OfCharacter(Macad::Occt::TColStd_HArray1OfCharacter^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfCharacter(*(::TColStd_HArray1OfCharacter*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_Array1OfCharacter^ Macad::Occt::TColStd_HArray1OfCharacter::Array1()
{
	::TColStd_Array1OfCharacter* _result = new ::TColStd_Array1OfCharacter();
	*_result =  (::TColStd_Array1OfCharacter)((::TColStd_HArray1OfCharacter*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfCharacter(_result);
}

Macad::Occt::TColStd_Array1OfCharacter^ Macad::Occt::TColStd_HArray1OfCharacter::ChangeArray1()
{
	::TColStd_Array1OfCharacter* _result = new ::TColStd_Array1OfCharacter();
	*_result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfCharacter(_result);
}

void Macad::Occt::TColStd_HArray1OfCharacter::Init(char theValue)
{
	pin_ptr<char> pp_theValue = &theValue;
	((::TColStd_HArray1OfCharacter*)_NativeInstance)->Init(*(char*)pp_theValue);
}

int Macad::Occt::TColStd_HArray1OfCharacter::Size()
{
	return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray1OfCharacter::Length()
{
	return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_HArray1OfCharacter::IsEmpty()
{
	return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_HArray1OfCharacter::Lower()
{
	return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HArray1OfCharacter::Upper()
{
	return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HArray1OfCharacter::IsDeletable()
{
	return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_HArray1OfCharacter::IsAllocated()
{
	return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->IsAllocated();
}

char Macad::Occt::TColStd_HArray1OfCharacter::First()
{
	return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->First();
}

char Macad::Occt::TColStd_HArray1OfCharacter::ChangeFirst()
{
	return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeFirst();
}

char Macad::Occt::TColStd_HArray1OfCharacter::Last()
{
	return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Last();
}

char Macad::Occt::TColStd_HArray1OfCharacter::ChangeLast()
{
	return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeLast();
}

char Macad::Occt::TColStd_HArray1OfCharacter::Value(int theIndex)
{
	return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Value(theIndex);
}

char Macad::Occt::TColStd_HArray1OfCharacter::ChangeValue(int theIndex)
{
	return ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_HArray1OfCharacter::SetValue(int theIndex, char theItem)
{
	pin_ptr<char> pp_theItem = &theItem;
	((::TColStd_HArray1OfCharacter*)_NativeInstance)->SetValue(theIndex, *(char*)pp_theItem);
}

void Macad::Occt::TColStd_HArray1OfCharacter::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfCharacter*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray1OfCharacter^ Macad::Occt::TColStd_HArray1OfCharacter::CreateDowncasted(::TColStd_HArray1OfCharacter* instance)
{
	return gcnew Macad::Occt::TColStd_HArray1OfCharacter( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfExtendedString
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray1OfExtendedString::TColStd_HArray1OfExtendedString()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfExtendedString();
}

Macad::Occt::TColStd_HArray1OfExtendedString::TColStd_HArray1OfExtendedString(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfExtendedString(theLower, theUpper);
}

Macad::Occt::TColStd_HArray1OfExtendedString::TColStd_HArray1OfExtendedString(int theLower, int theUpper, Macad::Occt::TCollection_ExtendedString^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfExtendedString(theLower, theUpper, *(::TCollection_ExtendedString*)theValue->NativeInstance);
}

Macad::Occt::TColStd_HArray1OfExtendedString::TColStd_HArray1OfExtendedString(Macad::Occt::TColStd_Array1OfExtendedString^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfExtendedString(*(::TColStd_Array1OfExtendedString*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HArray1OfExtendedString::TColStd_HArray1OfExtendedString(Macad::Occt::TColStd_HArray1OfExtendedString^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfExtendedString(*(::TColStd_HArray1OfExtendedString*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_Array1OfExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::Array1()
{
	::TColStd_Array1OfExtendedString* _result = new ::TColStd_Array1OfExtendedString();
	*_result =  (::TColStd_Array1OfExtendedString)((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfExtendedString(_result);
}

Macad::Occt::TColStd_Array1OfExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::ChangeArray1()
{
	::TColStd_Array1OfExtendedString* _result = new ::TColStd_Array1OfExtendedString();
	*_result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfExtendedString(_result);
}

void Macad::Occt::TColStd_HArray1OfExtendedString::Init(Macad::Occt::TCollection_ExtendedString^ theValue)
{
	((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Init(*(::TCollection_ExtendedString*)theValue->NativeInstance);
}

int Macad::Occt::TColStd_HArray1OfExtendedString::Size()
{
	return ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray1OfExtendedString::Length()
{
	return ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_HArray1OfExtendedString::IsEmpty()
{
	return ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_HArray1OfExtendedString::Lower()
{
	return ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HArray1OfExtendedString::Upper()
{
	return ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HArray1OfExtendedString::IsDeletable()
{
	return ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_HArray1OfExtendedString::IsAllocated()
{
	return ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::First()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::TColStd_HArray1OfExtendedString*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::ChangeFirst()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::Last()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::ChangeLast()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::Value(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::ChangeValue(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

void Macad::Occt::TColStd_HArray1OfExtendedString::SetValue(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem)
{
	((::TColStd_HArray1OfExtendedString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HArray1OfExtendedString::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray1OfExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::CreateDowncasted(::TColStd_HArray1OfExtendedString* instance)
{
	return gcnew Macad::Occt::TColStd_HArray1OfExtendedString( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray1OfInteger::TColStd_HArray1OfInteger()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfInteger();
}

Macad::Occt::TColStd_HArray1OfInteger::TColStd_HArray1OfInteger(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfInteger(theLower, theUpper);
}

Macad::Occt::TColStd_HArray1OfInteger::TColStd_HArray1OfInteger(int theLower, int theUpper, int theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<int> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray1OfInteger(theLower, theUpper, *(int*)pp_theValue);
}

Macad::Occt::TColStd_HArray1OfInteger::TColStd_HArray1OfInteger(Macad::Occt::TColStd_Array1OfInteger^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfInteger(*(::TColStd_Array1OfInteger*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HArray1OfInteger::TColStd_HArray1OfInteger(Macad::Occt::TColStd_HArray1OfInteger^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfInteger(*(::TColStd_HArray1OfInteger*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_Array1OfInteger^ Macad::Occt::TColStd_HArray1OfInteger::Array1()
{
	::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
	*_result =  (::TColStd_Array1OfInteger)((::TColStd_HArray1OfInteger*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfInteger(_result);
}

Macad::Occt::TColStd_Array1OfInteger^ Macad::Occt::TColStd_HArray1OfInteger::ChangeArray1()
{
	::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
	*_result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfInteger(_result);
}

void Macad::Occt::TColStd_HArray1OfInteger::Init(int theValue)
{
	pin_ptr<int> pp_theValue = &theValue;
	((::TColStd_HArray1OfInteger*)_NativeInstance)->Init(*(int*)pp_theValue);
}

int Macad::Occt::TColStd_HArray1OfInteger::Size()
{
	return ((::TColStd_HArray1OfInteger*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray1OfInteger::Length()
{
	return ((::TColStd_HArray1OfInteger*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_HArray1OfInteger::IsEmpty()
{
	return ((::TColStd_HArray1OfInteger*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_HArray1OfInteger::Lower()
{
	return ((::TColStd_HArray1OfInteger*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HArray1OfInteger::Upper()
{
	return ((::TColStd_HArray1OfInteger*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HArray1OfInteger::IsDeletable()
{
	return ((::TColStd_HArray1OfInteger*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_HArray1OfInteger::IsAllocated()
{
	return ((::TColStd_HArray1OfInteger*)_NativeInstance)->IsAllocated();
}

int Macad::Occt::TColStd_HArray1OfInteger::First()
{
	return ((::TColStd_HArray1OfInteger*)_NativeInstance)->First();
}

int Macad::Occt::TColStd_HArray1OfInteger::ChangeFirst()
{
	return ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeFirst();
}

int Macad::Occt::TColStd_HArray1OfInteger::Last()
{
	return ((::TColStd_HArray1OfInteger*)_NativeInstance)->Last();
}

int Macad::Occt::TColStd_HArray1OfInteger::ChangeLast()
{
	return ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeLast();
}

int Macad::Occt::TColStd_HArray1OfInteger::Value(int theIndex)
{
	return ((::TColStd_HArray1OfInteger*)_NativeInstance)->Value(theIndex);
}

int Macad::Occt::TColStd_HArray1OfInteger::ChangeValue(int theIndex)
{
	return ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_HArray1OfInteger::SetValue(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HArray1OfInteger*)_NativeInstance)->SetValue(theIndex, *(int*)pp_theItem);
}

void Macad::Occt::TColStd_HArray1OfInteger::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfInteger*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::TColStd_HArray1OfInteger::CreateDowncasted(::TColStd_HArray1OfInteger* instance)
{
	return gcnew Macad::Occt::TColStd_HArray1OfInteger( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfListOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray1OfListOfInteger::TColStd_HArray1OfListOfInteger()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfListOfInteger();
}

Macad::Occt::TColStd_HArray1OfListOfInteger::TColStd_HArray1OfListOfInteger(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfListOfInteger(theLower, theUpper);
}

Macad::Occt::TColStd_HArray1OfListOfInteger::TColStd_HArray1OfListOfInteger(Macad::Occt::TColStd_Array1OfListOfInteger^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfListOfInteger(*(::TColStd_Array1OfListOfInteger*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HArray1OfListOfInteger::TColStd_HArray1OfListOfInteger(Macad::Occt::TColStd_HArray1OfListOfInteger^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfListOfInteger(*(::TColStd_HArray1OfListOfInteger*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_Array1OfListOfInteger^ Macad::Occt::TColStd_HArray1OfListOfInteger::Array1()
{
	::TColStd_Array1OfListOfInteger* _result = new ::TColStd_Array1OfListOfInteger();
	*_result =  (::TColStd_Array1OfListOfInteger)((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfListOfInteger(_result);
}

Macad::Occt::TColStd_Array1OfListOfInteger^ Macad::Occt::TColStd_HArray1OfListOfInteger::ChangeArray1()
{
	::TColStd_Array1OfListOfInteger* _result = new ::TColStd_Array1OfListOfInteger();
	*_result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfListOfInteger(_result);
}

int Macad::Occt::TColStd_HArray1OfListOfInteger::Size()
{
	return ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray1OfListOfInteger::Length()
{
	return ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_HArray1OfListOfInteger::IsEmpty()
{
	return ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_HArray1OfListOfInteger::Lower()
{
	return ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HArray1OfListOfInteger::Upper()
{
	return ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HArray1OfListOfInteger::IsDeletable()
{
	return ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_HArray1OfListOfInteger::IsAllocated()
{
	return ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->IsAllocated();
}

void Macad::Occt::TColStd_HArray1OfListOfInteger::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray1OfListOfInteger^ Macad::Occt::TColStd_HArray1OfListOfInteger::CreateDowncasted(::TColStd_HArray1OfListOfInteger* instance)
{
	return gcnew Macad::Occt::TColStd_HArray1OfListOfInteger( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray1OfReal::TColStd_HArray1OfReal()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfReal();
}

Macad::Occt::TColStd_HArray1OfReal::TColStd_HArray1OfReal(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfReal(theLower, theUpper);
}

Macad::Occt::TColStd_HArray1OfReal::TColStd_HArray1OfReal(int theLower, int theUpper, double theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray1OfReal(theLower, theUpper, *(double*)pp_theValue);
}

Macad::Occt::TColStd_HArray1OfReal::TColStd_HArray1OfReal(Macad::Occt::TColStd_Array1OfReal^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfReal(*(::TColStd_Array1OfReal*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HArray1OfReal::TColStd_HArray1OfReal(Macad::Occt::TColStd_HArray1OfReal^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfReal(*(::TColStd_HArray1OfReal*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_Array1OfReal^ Macad::Occt::TColStd_HArray1OfReal::Array1()
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result =  (::TColStd_Array1OfReal)((::TColStd_HArray1OfReal*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfReal(_result);
}

Macad::Occt::TColStd_Array1OfReal^ Macad::Occt::TColStd_HArray1OfReal::ChangeArray1()
{
	::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
	*_result = ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfReal(_result);
}

void Macad::Occt::TColStd_HArray1OfReal::Init(double theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	((::TColStd_HArray1OfReal*)_NativeInstance)->Init(*(double*)pp_theValue);
}

int Macad::Occt::TColStd_HArray1OfReal::Size()
{
	return ((::TColStd_HArray1OfReal*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray1OfReal::Length()
{
	return ((::TColStd_HArray1OfReal*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_HArray1OfReal::IsEmpty()
{
	return ((::TColStd_HArray1OfReal*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_HArray1OfReal::Lower()
{
	return ((::TColStd_HArray1OfReal*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HArray1OfReal::Upper()
{
	return ((::TColStd_HArray1OfReal*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HArray1OfReal::IsDeletable()
{
	return ((::TColStd_HArray1OfReal*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_HArray1OfReal::IsAllocated()
{
	return ((::TColStd_HArray1OfReal*)_NativeInstance)->IsAllocated();
}

double Macad::Occt::TColStd_HArray1OfReal::First()
{
	return ((::TColStd_HArray1OfReal*)_NativeInstance)->First();
}

double Macad::Occt::TColStd_HArray1OfReal::ChangeFirst()
{
	return ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeFirst();
}

double Macad::Occt::TColStd_HArray1OfReal::Last()
{
	return ((::TColStd_HArray1OfReal*)_NativeInstance)->Last();
}

double Macad::Occt::TColStd_HArray1OfReal::ChangeLast()
{
	return ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeLast();
}

double Macad::Occt::TColStd_HArray1OfReal::Value(int theIndex)
{
	return ((::TColStd_HArray1OfReal*)_NativeInstance)->Value(theIndex);
}

double Macad::Occt::TColStd_HArray1OfReal::ChangeValue(int theIndex)
{
	return ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_HArray1OfReal::SetValue(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HArray1OfReal*)_NativeInstance)->SetValue(theIndex, *(double*)pp_theItem);
}

void Macad::Occt::TColStd_HArray1OfReal::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfReal*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted(::TColStd_HArray1OfReal* instance)
{
	return gcnew Macad::Occt::TColStd_HArray1OfReal( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray1OfTransient::TColStd_HArray1OfTransient()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfTransient();
}

Macad::Occt::TColStd_HArray1OfTransient::TColStd_HArray1OfTransient(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfTransient(theLower, theUpper);
}

Macad::Occt::TColStd_HArray1OfTransient::TColStd_HArray1OfTransient(int theLower, int theUpper, Macad::Occt::Standard_Transient^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray1OfTransient::TColStd_HArray1OfTransient(Macad::Occt::TColStd_Array1OfTransient^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfTransient(*(::TColStd_Array1OfTransient*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HArray1OfTransient::TColStd_HArray1OfTransient(Macad::Occt::TColStd_HArray1OfTransient^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray1OfTransient(*(::TColStd_HArray1OfTransient*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_Array1OfTransient^ Macad::Occt::TColStd_HArray1OfTransient::Array1()
{
	::TColStd_Array1OfTransient* _result = new ::TColStd_Array1OfTransient();
	*_result =  (::TColStd_Array1OfTransient)((::TColStd_HArray1OfTransient*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfTransient(_result);
}

Macad::Occt::TColStd_Array1OfTransient^ Macad::Occt::TColStd_HArray1OfTransient::ChangeArray1()
{
	::TColStd_Array1OfTransient* _result = new ::TColStd_Array1OfTransient();
	*_result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfTransient(_result);
}

void Macad::Occt::TColStd_HArray1OfTransient::Init(Macad::Occt::Standard_Transient^ theValue)
{
	throw gcnew System::NotImplementedException();
}

int Macad::Occt::TColStd_HArray1OfTransient::Size()
{
	return ((::TColStd_HArray1OfTransient*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray1OfTransient::Length()
{
	return ((::TColStd_HArray1OfTransient*)_NativeInstance)->Length();
}

bool Macad::Occt::TColStd_HArray1OfTransient::IsEmpty()
{
	return ((::TColStd_HArray1OfTransient*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColStd_HArray1OfTransient::Lower()
{
	return ((::TColStd_HArray1OfTransient*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HArray1OfTransient::Upper()
{
	return ((::TColStd_HArray1OfTransient*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HArray1OfTransient::IsDeletable()
{
	return ((::TColStd_HArray1OfTransient*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_HArray1OfTransient::IsAllocated()
{
	return ((::TColStd_HArray1OfTransient*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray1OfTransient::First()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray1OfTransient::ChangeFirst()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray1OfTransient::Last()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray1OfTransient::ChangeLast()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray1OfTransient::Value(int theIndex)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray1OfTransient::ChangeValue(int theIndex)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HArray1OfTransient::SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HArray1OfTransient::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColStd_HArray1OfTransient*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray1OfTransient^ Macad::Occt::TColStd_HArray1OfTransient::CreateDowncasted(::TColStd_HArray1OfTransient* instance)
{
	return gcnew Macad::Occt::TColStd_HArray1OfTransient( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfBoolean
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray2OfBoolean::TColStd_HArray2OfBoolean(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfBoolean(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColStd_HArray2OfBoolean::TColStd_HArray2OfBoolean(int theRowLow, int theRowUpp, int theColLow, int theColUpp, bool theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<bool> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray2OfBoolean(theRowLow, theRowUpp, theColLow, theColUpp, *(bool*)pp_theValue);
}

Macad::Occt::TColStd_HArray2OfBoolean::TColStd_HArray2OfBoolean(Macad::Occt::TColStd_Array2OfBoolean^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfBoolean(*(::TColStd_Array2OfBoolean*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HArray2OfBoolean::TColStd_HArray2OfBoolean(Macad::Occt::TColStd_HArray2OfBoolean^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfBoolean(*(::TColStd_HArray2OfBoolean*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_Array2OfBoolean^ Macad::Occt::TColStd_HArray2OfBoolean::Array2()
{
	::TColStd_Array2OfBoolean* _result = new ::TColStd_Array2OfBoolean();
	*_result =  (::TColStd_Array2OfBoolean)((::TColStd_HArray2OfBoolean*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfBoolean(_result);
}

Macad::Occt::TColStd_Array2OfBoolean^ Macad::Occt::TColStd_HArray2OfBoolean::ChangeArray2()
{
	::TColStd_Array2OfBoolean* _result = new ::TColStd_Array2OfBoolean();
	*_result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfBoolean(_result);
}

void Macad::Occt::TColStd_HArray2OfBoolean::Init(bool theValue)
{
	pin_ptr<bool> pp_theValue = &theValue;
	((::TColStd_HArray2OfBoolean*)_NativeInstance)->Init(*(bool*)pp_theValue);
}

int Macad::Occt::TColStd_HArray2OfBoolean::Size()
{
	return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray2OfBoolean::Length()
{
	return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_HArray2OfBoolean::NbRows()
{
	return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColStd_HArray2OfBoolean::NbColumns()
{
	return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColStd_HArray2OfBoolean::RowLength()
{
	return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColStd_HArray2OfBoolean::ColLength()
{
	return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColStd_HArray2OfBoolean::LowerRow()
{
	return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColStd_HArray2OfBoolean::UpperRow()
{
	return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColStd_HArray2OfBoolean::LowerCol()
{
	return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColStd_HArray2OfBoolean::UpperCol()
{
	return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColStd_HArray2OfBoolean::IsDeletable()
{
	return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColStd_HArray2OfBoolean::Value(int theRow, int theCol)
{
	return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Value(theRow, theCol);
}

bool Macad::Occt::TColStd_HArray2OfBoolean::ChangeValue(int theRow, int theCol)
{
	return ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeValue(theRow, theCol);
}

void Macad::Occt::TColStd_HArray2OfBoolean::SetValue(int theRow, int theCol, bool theItem)
{
	pin_ptr<bool> pp_theItem = &theItem;
	((::TColStd_HArray2OfBoolean*)_NativeInstance)->SetValue(theRow, theCol, *(bool*)pp_theItem);
}

void Macad::Occt::TColStd_HArray2OfBoolean::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_HArray2OfBoolean*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray2OfBoolean^ Macad::Occt::TColStd_HArray2OfBoolean::CreateDowncasted(::TColStd_HArray2OfBoolean* instance)
{
	return gcnew Macad::Occt::TColStd_HArray2OfBoolean( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfCharacter
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray2OfCharacter::TColStd_HArray2OfCharacter(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfCharacter(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColStd_HArray2OfCharacter::TColStd_HArray2OfCharacter(int theRowLow, int theRowUpp, int theColLow, int theColUpp, char theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<char> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray2OfCharacter(theRowLow, theRowUpp, theColLow, theColUpp, *(char*)pp_theValue);
}

Macad::Occt::TColStd_HArray2OfCharacter::TColStd_HArray2OfCharacter(Macad::Occt::TColStd_Array2OfCharacter^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfCharacter(*(::TColStd_Array2OfCharacter*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HArray2OfCharacter::TColStd_HArray2OfCharacter(Macad::Occt::TColStd_HArray2OfCharacter^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfCharacter(*(::TColStd_HArray2OfCharacter*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_Array2OfCharacter^ Macad::Occt::TColStd_HArray2OfCharacter::Array2()
{
	::TColStd_Array2OfCharacter* _result = new ::TColStd_Array2OfCharacter();
	*_result =  (::TColStd_Array2OfCharacter)((::TColStd_HArray2OfCharacter*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfCharacter(_result);
}

Macad::Occt::TColStd_Array2OfCharacter^ Macad::Occt::TColStd_HArray2OfCharacter::ChangeArray2()
{
	::TColStd_Array2OfCharacter* _result = new ::TColStd_Array2OfCharacter();
	*_result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfCharacter(_result);
}

void Macad::Occt::TColStd_HArray2OfCharacter::Init(char theValue)
{
	pin_ptr<char> pp_theValue = &theValue;
	((::TColStd_HArray2OfCharacter*)_NativeInstance)->Init(*(char*)pp_theValue);
}

int Macad::Occt::TColStd_HArray2OfCharacter::Size()
{
	return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray2OfCharacter::Length()
{
	return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_HArray2OfCharacter::NbRows()
{
	return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColStd_HArray2OfCharacter::NbColumns()
{
	return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColStd_HArray2OfCharacter::RowLength()
{
	return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColStd_HArray2OfCharacter::ColLength()
{
	return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColStd_HArray2OfCharacter::LowerRow()
{
	return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColStd_HArray2OfCharacter::UpperRow()
{
	return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColStd_HArray2OfCharacter::LowerCol()
{
	return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColStd_HArray2OfCharacter::UpperCol()
{
	return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColStd_HArray2OfCharacter::IsDeletable()
{
	return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->IsDeletable();
}

char Macad::Occt::TColStd_HArray2OfCharacter::Value(int theRow, int theCol)
{
	return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Value(theRow, theCol);
}

char Macad::Occt::TColStd_HArray2OfCharacter::ChangeValue(int theRow, int theCol)
{
	return ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeValue(theRow, theCol);
}

void Macad::Occt::TColStd_HArray2OfCharacter::SetValue(int theRow, int theCol, char theItem)
{
	pin_ptr<char> pp_theItem = &theItem;
	((::TColStd_HArray2OfCharacter*)_NativeInstance)->SetValue(theRow, theCol, *(char*)pp_theItem);
}

void Macad::Occt::TColStd_HArray2OfCharacter::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_HArray2OfCharacter*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray2OfCharacter^ Macad::Occt::TColStd_HArray2OfCharacter::CreateDowncasted(::TColStd_HArray2OfCharacter* instance)
{
	return gcnew Macad::Occt::TColStd_HArray2OfCharacter( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray2OfInteger::TColStd_HArray2OfInteger(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfInteger(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColStd_HArray2OfInteger::TColStd_HArray2OfInteger(int theRowLow, int theRowUpp, int theColLow, int theColUpp, int theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<int> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray2OfInteger(theRowLow, theRowUpp, theColLow, theColUpp, *(int*)pp_theValue);
}

Macad::Occt::TColStd_HArray2OfInteger::TColStd_HArray2OfInteger(Macad::Occt::TColStd_Array2OfInteger^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfInteger(*(::TColStd_Array2OfInteger*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HArray2OfInteger::TColStd_HArray2OfInteger(Macad::Occt::TColStd_HArray2OfInteger^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfInteger(*(::TColStd_HArray2OfInteger*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_Array2OfInteger^ Macad::Occt::TColStd_HArray2OfInteger::Array2()
{
	::TColStd_Array2OfInteger* _result = new ::TColStd_Array2OfInteger();
	*_result =  (::TColStd_Array2OfInteger)((::TColStd_HArray2OfInteger*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfInteger(_result);
}

Macad::Occt::TColStd_Array2OfInteger^ Macad::Occt::TColStd_HArray2OfInteger::ChangeArray2()
{
	::TColStd_Array2OfInteger* _result = new ::TColStd_Array2OfInteger();
	*_result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfInteger(_result);
}

void Macad::Occt::TColStd_HArray2OfInteger::Init(int theValue)
{
	pin_ptr<int> pp_theValue = &theValue;
	((::TColStd_HArray2OfInteger*)_NativeInstance)->Init(*(int*)pp_theValue);
}

int Macad::Occt::TColStd_HArray2OfInteger::Size()
{
	return ((::TColStd_HArray2OfInteger*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray2OfInteger::Length()
{
	return ((::TColStd_HArray2OfInteger*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_HArray2OfInteger::NbRows()
{
	return ((::TColStd_HArray2OfInteger*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColStd_HArray2OfInteger::NbColumns()
{
	return ((::TColStd_HArray2OfInteger*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColStd_HArray2OfInteger::RowLength()
{
	return ((::TColStd_HArray2OfInteger*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColStd_HArray2OfInteger::ColLength()
{
	return ((::TColStd_HArray2OfInteger*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColStd_HArray2OfInteger::LowerRow()
{
	return ((::TColStd_HArray2OfInteger*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColStd_HArray2OfInteger::UpperRow()
{
	return ((::TColStd_HArray2OfInteger*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColStd_HArray2OfInteger::LowerCol()
{
	return ((::TColStd_HArray2OfInteger*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColStd_HArray2OfInteger::UpperCol()
{
	return ((::TColStd_HArray2OfInteger*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColStd_HArray2OfInteger::IsDeletable()
{
	return ((::TColStd_HArray2OfInteger*)_NativeInstance)->IsDeletable();
}

int Macad::Occt::TColStd_HArray2OfInteger::Value(int theRow, int theCol)
{
	return ((::TColStd_HArray2OfInteger*)_NativeInstance)->Value(theRow, theCol);
}

int Macad::Occt::TColStd_HArray2OfInteger::ChangeValue(int theRow, int theCol)
{
	return ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeValue(theRow, theCol);
}

void Macad::Occt::TColStd_HArray2OfInteger::SetValue(int theRow, int theCol, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HArray2OfInteger*)_NativeInstance)->SetValue(theRow, theCol, *(int*)pp_theItem);
}

void Macad::Occt::TColStd_HArray2OfInteger::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_HArray2OfInteger*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray2OfInteger^ Macad::Occt::TColStd_HArray2OfInteger::CreateDowncasted(::TColStd_HArray2OfInteger* instance)
{
	return gcnew Macad::Occt::TColStd_HArray2OfInteger( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray2OfReal::TColStd_HArray2OfReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfReal(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColStd_HArray2OfReal::TColStd_HArray2OfReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp, double theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theValue = &theValue;
	NativeInstance = new ::TColStd_HArray2OfReal(theRowLow, theRowUpp, theColLow, theColUpp, *(double*)pp_theValue);
}

Macad::Occt::TColStd_HArray2OfReal::TColStd_HArray2OfReal(Macad::Occt::TColStd_Array2OfReal^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfReal(*(::TColStd_Array2OfReal*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HArray2OfReal::TColStd_HArray2OfReal(Macad::Occt::TColStd_HArray2OfReal^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfReal(*(::TColStd_HArray2OfReal*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_Array2OfReal^ Macad::Occt::TColStd_HArray2OfReal::Array2()
{
	::TColStd_Array2OfReal* _result = new ::TColStd_Array2OfReal();
	*_result =  (::TColStd_Array2OfReal)((::TColStd_HArray2OfReal*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfReal(_result);
}

Macad::Occt::TColStd_Array2OfReal^ Macad::Occt::TColStd_HArray2OfReal::ChangeArray2()
{
	::TColStd_Array2OfReal* _result = new ::TColStd_Array2OfReal();
	*_result = ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfReal(_result);
}

void Macad::Occt::TColStd_HArray2OfReal::Init(double theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	((::TColStd_HArray2OfReal*)_NativeInstance)->Init(*(double*)pp_theValue);
}

int Macad::Occt::TColStd_HArray2OfReal::Size()
{
	return ((::TColStd_HArray2OfReal*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray2OfReal::Length()
{
	return ((::TColStd_HArray2OfReal*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_HArray2OfReal::NbRows()
{
	return ((::TColStd_HArray2OfReal*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColStd_HArray2OfReal::NbColumns()
{
	return ((::TColStd_HArray2OfReal*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColStd_HArray2OfReal::RowLength()
{
	return ((::TColStd_HArray2OfReal*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColStd_HArray2OfReal::ColLength()
{
	return ((::TColStd_HArray2OfReal*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColStd_HArray2OfReal::LowerRow()
{
	return ((::TColStd_HArray2OfReal*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColStd_HArray2OfReal::UpperRow()
{
	return ((::TColStd_HArray2OfReal*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColStd_HArray2OfReal::LowerCol()
{
	return ((::TColStd_HArray2OfReal*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColStd_HArray2OfReal::UpperCol()
{
	return ((::TColStd_HArray2OfReal*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColStd_HArray2OfReal::IsDeletable()
{
	return ((::TColStd_HArray2OfReal*)_NativeInstance)->IsDeletable();
}

double Macad::Occt::TColStd_HArray2OfReal::Value(int theRow, int theCol)
{
	return ((::TColStd_HArray2OfReal*)_NativeInstance)->Value(theRow, theCol);
}

double Macad::Occt::TColStd_HArray2OfReal::ChangeValue(int theRow, int theCol)
{
	return ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeValue(theRow, theCol);
}

void Macad::Occt::TColStd_HArray2OfReal::SetValue(int theRow, int theCol, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HArray2OfReal*)_NativeInstance)->SetValue(theRow, theCol, *(double*)pp_theItem);
}

void Macad::Occt::TColStd_HArray2OfReal::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_HArray2OfReal*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray2OfReal^ Macad::Occt::TColStd_HArray2OfReal::CreateDowncasted(::TColStd_HArray2OfReal* instance)
{
	return gcnew Macad::Occt::TColStd_HArray2OfReal( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_HArray2OfTransient::TColStd_HArray2OfTransient(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfTransient(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColStd_HArray2OfTransient::TColStd_HArray2OfTransient(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Standard_Transient^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray2OfTransient::TColStd_HArray2OfTransient(Macad::Occt::TColStd_Array2OfTransient^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfTransient(*(::TColStd_Array2OfTransient*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HArray2OfTransient::TColStd_HArray2OfTransient(Macad::Occt::TColStd_HArray2OfTransient^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HArray2OfTransient(*(::TColStd_HArray2OfTransient*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_Array2OfTransient^ Macad::Occt::TColStd_HArray2OfTransient::Array2()
{
	::TColStd_Array2OfTransient* _result = new ::TColStd_Array2OfTransient();
	*_result =  (::TColStd_Array2OfTransient)((::TColStd_HArray2OfTransient*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfTransient(_result);
}

Macad::Occt::TColStd_Array2OfTransient^ Macad::Occt::TColStd_HArray2OfTransient::ChangeArray2()
{
	::TColStd_Array2OfTransient* _result = new ::TColStd_Array2OfTransient();
	*_result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfTransient(_result);
}

void Macad::Occt::TColStd_HArray2OfTransient::Init(Macad::Occt::Standard_Transient^ theValue)
{
	throw gcnew System::NotImplementedException();
}

int Macad::Occt::TColStd_HArray2OfTransient::Size()
{
	return ((::TColStd_HArray2OfTransient*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HArray2OfTransient::Length()
{
	return ((::TColStd_HArray2OfTransient*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_HArray2OfTransient::NbRows()
{
	return ((::TColStd_HArray2OfTransient*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColStd_HArray2OfTransient::NbColumns()
{
	return ((::TColStd_HArray2OfTransient*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColStd_HArray2OfTransient::RowLength()
{
	return ((::TColStd_HArray2OfTransient*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColStd_HArray2OfTransient::ColLength()
{
	return ((::TColStd_HArray2OfTransient*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColStd_HArray2OfTransient::LowerRow()
{
	return ((::TColStd_HArray2OfTransient*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColStd_HArray2OfTransient::UpperRow()
{
	return ((::TColStd_HArray2OfTransient*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColStd_HArray2OfTransient::LowerCol()
{
	return ((::TColStd_HArray2OfTransient*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColStd_HArray2OfTransient::UpperCol()
{
	return ((::TColStd_HArray2OfTransient*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColStd_HArray2OfTransient::IsDeletable()
{
	return ((::TColStd_HArray2OfTransient*)_NativeInstance)->IsDeletable();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray2OfTransient::Value(int theRow, int theCol)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray2OfTransient::ChangeValue(int theRow, int theCol)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HArray2OfTransient::SetValue(int theRow, int theCol, Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HArray2OfTransient::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColStd_HArray2OfTransient*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColStd_HArray2OfTransient^ Macad::Occt::TColStd_HArray2OfTransient::CreateDowncasted(::TColStd_HArray2OfTransient* instance)
{
	return gcnew Macad::Occt::TColStd_HArray2OfTransient( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HPackedMapOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_HPackedMapOfInteger::TColStd_HPackedMapOfInteger(int NbBuckets)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HPackedMapOfInteger(NbBuckets);
}

Macad::Occt::TColStd_HPackedMapOfInteger::TColStd_HPackedMapOfInteger(Macad::Occt::TColStd_HPackedMapOfInteger^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HPackedMapOfInteger(*(::TColStd_HPackedMapOfInteger*)parameter1->NativeInstance);
}


Macad::Occt::TColStd_HPackedMapOfInteger^ Macad::Occt::TColStd_HPackedMapOfInteger::CreateDowncasted(::TColStd_HPackedMapOfInteger* instance)
{
	return gcnew Macad::Occt::TColStd_HPackedMapOfInteger( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfAsciiString
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfAsciiString::TColStd_HSequenceOfAsciiString()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfAsciiString();
}

Macad::Occt::TColStd_HSequenceOfAsciiString::TColStd_HSequenceOfAsciiString(Macad::Occt::TColStd_SequenceOfAsciiString^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfAsciiString(*(::TColStd_SequenceOfAsciiString*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HSequenceOfAsciiString::TColStd_HSequenceOfAsciiString(Macad::Occt::TColStd_HSequenceOfAsciiString^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfAsciiString(*(::TColStd_HSequenceOfAsciiString*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfAsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::Sequence()
{
	::TColStd_SequenceOfAsciiString* _result = new ::TColStd_SequenceOfAsciiString();
	*_result =  (::TColStd_SequenceOfAsciiString)((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfAsciiString(_result);
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Append(Macad::Occt::TCollection_AsciiString^ theItem)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Append(*(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Append(Macad::Occt::TColStd_SequenceOfAsciiString^ theSequence)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Append(*(::TColStd_SequenceOfAsciiString*)theSequence->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfAsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::ChangeSequence()
{
	::TColStd_SequenceOfAsciiString* _result = new ::TColStd_SequenceOfAsciiString();
	*_result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfAsciiString(_result);
}

int Macad::Occt::TColStd_HSequenceOfAsciiString::Size()
{
	return ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HSequenceOfAsciiString::Length()
{
	return ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_HSequenceOfAsciiString::Lower()
{
	return ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HSequenceOfAsciiString::Upper()
{
	return ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HSequenceOfAsciiString::IsEmpty()
{
	return ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Reverse()
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Clear()
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Remove(int theIndex)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Prepend(Macad::Occt::TCollection_AsciiString^ theItem)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Prepend(*(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::InsertBefore(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->InsertBefore(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::InsertAfter(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->InsertAfter(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::First()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::ChangeFirst()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::Last()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::ChangeLast()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::Value(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::ChangeValue(int theIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::SetValue(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem)
{
	((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}


Macad::Occt::TColStd_HSequenceOfAsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::CreateDowncasted(::TColStd_HSequenceOfAsciiString* instance)
{
	return gcnew Macad::Occt::TColStd_HSequenceOfAsciiString( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfExtendedString
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfExtendedString::TColStd_HSequenceOfExtendedString()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfExtendedString();
}

Macad::Occt::TColStd_HSequenceOfExtendedString::TColStd_HSequenceOfExtendedString(Macad::Occt::TColStd_SequenceOfExtendedString^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfExtendedString(*(::TColStd_SequenceOfExtendedString*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HSequenceOfExtendedString::TColStd_HSequenceOfExtendedString(Macad::Occt::TColStd_HSequenceOfExtendedString^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfExtendedString(*(::TColStd_HSequenceOfExtendedString*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::Sequence()
{
	::TColStd_SequenceOfExtendedString* _result = new ::TColStd_SequenceOfExtendedString();
	*_result =  (::TColStd_SequenceOfExtendedString)((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfExtendedString(_result);
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Append(Macad::Occt::TCollection_ExtendedString^ theItem)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Append(*(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Append(Macad::Occt::TColStd_SequenceOfExtendedString^ theSequence)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Append(*(::TColStd_SequenceOfExtendedString*)theSequence->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::ChangeSequence()
{
	::TColStd_SequenceOfExtendedString* _result = new ::TColStd_SequenceOfExtendedString();
	*_result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfExtendedString(_result);
}

int Macad::Occt::TColStd_HSequenceOfExtendedString::Size()
{
	return ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HSequenceOfExtendedString::Length()
{
	return ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_HSequenceOfExtendedString::Lower()
{
	return ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HSequenceOfExtendedString::Upper()
{
	return ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HSequenceOfExtendedString::IsEmpty()
{
	return ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Reverse()
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Clear()
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Remove(int theIndex)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Prepend(Macad::Occt::TCollection_ExtendedString^ theItem)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Prepend(*(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::InsertBefore(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->InsertBefore(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::InsertAfter(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->InsertAfter(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::First()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::ChangeFirst()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::Last()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::ChangeLast()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::Value(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::ChangeValue(int theIndex)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::SetValue(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem)
{
	((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->SetValue(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}


Macad::Occt::TColStd_HSequenceOfExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::CreateDowncasted(::TColStd_HSequenceOfExtendedString* instance)
{
	return gcnew Macad::Occt::TColStd_HSequenceOfExtendedString( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHAsciiString
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfHAsciiString::TColStd_HSequenceOfHAsciiString()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfHAsciiString();
}

Macad::Occt::TColStd_HSequenceOfHAsciiString::TColStd_HSequenceOfHAsciiString(Macad::Occt::TColStd_SequenceOfHAsciiString^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfHAsciiString(*(::TColStd_SequenceOfHAsciiString*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HSequenceOfHAsciiString::TColStd_HSequenceOfHAsciiString(Macad::Occt::TColStd_HSequenceOfHAsciiString^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfHAsciiString(*(::TColStd_HSequenceOfHAsciiString*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfHAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::Sequence()
{
	::TColStd_SequenceOfHAsciiString* _result = new ::TColStd_SequenceOfHAsciiString();
	*_result =  (::TColStd_SequenceOfHAsciiString)((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfHAsciiString(_result);
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Append(Macad::Occt::TCollection_HAsciiString^ theItem)
{
	Handle(::TCollection_HAsciiString) h_theItem = theItem->NativeInstance;
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Append(Macad::Occt::TColStd_SequenceOfHAsciiString^ theSequence)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Append(*(::TColStd_SequenceOfHAsciiString*)theSequence->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfHAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::ChangeSequence()
{
	::TColStd_SequenceOfHAsciiString* _result = new ::TColStd_SequenceOfHAsciiString();
	*_result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfHAsciiString(_result);
}

int Macad::Occt::TColStd_HSequenceOfHAsciiString::Size()
{
	return ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HSequenceOfHAsciiString::Length()
{
	return ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_HSequenceOfHAsciiString::Lower()
{
	return ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HSequenceOfHAsciiString::Upper()
{
	return ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HSequenceOfHAsciiString::IsEmpty()
{
	return ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Reverse()
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Clear()
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Remove(int theIndex)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Prepend(Macad::Occt::TCollection_HAsciiString^ theItem)
{
	Handle(::TCollection_HAsciiString) h_theItem = theItem->NativeInstance;
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::InsertBefore(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem)
{
	Handle(::TCollection_HAsciiString) h_theItem = theItem->NativeInstance;
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::InsertAfter(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem)
{
	Handle(::TCollection_HAsciiString) h_theItem = theItem->NativeInstance;
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::First()
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::ChangeFirst()
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::Last()
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::ChangeLast()
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::Value(int theIndex)
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::ChangeValue(int theIndex)
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::SetValue(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem)
{
	Handle(::TCollection_HAsciiString) h_theItem = theItem->NativeInstance;
	((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}


Macad::Occt::TColStd_HSequenceOfHAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::CreateDowncasted(::TColStd_HSequenceOfHAsciiString* instance)
{
	return gcnew Macad::Occt::TColStd_HSequenceOfHAsciiString( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHExtendedString
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfHExtendedString::TColStd_HSequenceOfHExtendedString()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfHExtendedString();
}

Macad::Occt::TColStd_HSequenceOfHExtendedString::TColStd_HSequenceOfHExtendedString(Macad::Occt::TColStd_SequenceOfHExtendedString^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfHExtendedString(*(::TColStd_SequenceOfHExtendedString*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HSequenceOfHExtendedString::TColStd_HSequenceOfHExtendedString(Macad::Occt::TColStd_HSequenceOfHExtendedString^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfHExtendedString(*(::TColStd_HSequenceOfHExtendedString*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfHExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::Sequence()
{
	::TColStd_SequenceOfHExtendedString* _result = new ::TColStd_SequenceOfHExtendedString();
	*_result =  (::TColStd_SequenceOfHExtendedString)((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfHExtendedString(_result);
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Append(Macad::Occt::TCollection_HExtendedString^ theItem)
{
	Handle(::TCollection_HExtendedString) h_theItem = theItem->NativeInstance;
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Append(Macad::Occt::TColStd_SequenceOfHExtendedString^ theSequence)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Append(*(::TColStd_SequenceOfHExtendedString*)theSequence->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfHExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::ChangeSequence()
{
	::TColStd_SequenceOfHExtendedString* _result = new ::TColStd_SequenceOfHExtendedString();
	*_result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfHExtendedString(_result);
}

int Macad::Occt::TColStd_HSequenceOfHExtendedString::Size()
{
	return ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HSequenceOfHExtendedString::Length()
{
	return ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_HSequenceOfHExtendedString::Lower()
{
	return ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HSequenceOfHExtendedString::Upper()
{
	return ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HSequenceOfHExtendedString::IsEmpty()
{
	return ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Reverse()
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Clear()
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Remove(int theIndex)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Prepend(Macad::Occt::TCollection_HExtendedString^ theItem)
{
	Handle(::TCollection_HExtendedString) h_theItem = theItem->NativeInstance;
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::InsertBefore(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem)
{
	Handle(::TCollection_HExtendedString) h_theItem = theItem->NativeInstance;
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::InsertAfter(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem)
{
	Handle(::TCollection_HExtendedString) h_theItem = theItem->NativeInstance;
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::First()
{
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::ChangeFirst()
{
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::Last()
{
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::ChangeLast()
{
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::Value(int theIndex)
{
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::ChangeValue(int theIndex)
{
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::SetValue(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem)
{
	Handle(::TCollection_HExtendedString) h_theItem = theItem->NativeInstance;
	((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}


Macad::Occt::TColStd_HSequenceOfHExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::CreateDowncasted(::TColStd_HSequenceOfHExtendedString* instance)
{
	return gcnew Macad::Occt::TColStd_HSequenceOfHExtendedString( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfInteger::TColStd_HSequenceOfInteger()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfInteger();
}

Macad::Occt::TColStd_HSequenceOfInteger::TColStd_HSequenceOfInteger(Macad::Occt::TColStd_SequenceOfInteger^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfInteger(*(::TColStd_SequenceOfInteger*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HSequenceOfInteger::TColStd_HSequenceOfInteger(Macad::Occt::TColStd_HSequenceOfInteger^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfInteger(*(::TColStd_HSequenceOfInteger*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfInteger^ Macad::Occt::TColStd_HSequenceOfInteger::Sequence()
{
	::TColStd_SequenceOfInteger* _result = new ::TColStd_SequenceOfInteger();
	*_result =  (::TColStd_SequenceOfInteger)((::TColStd_HSequenceOfInteger*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfInteger(_result);
}

void Macad::Occt::TColStd_HSequenceOfInteger::Append(int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Append(*(int*)pp_theItem);
}

void Macad::Occt::TColStd_HSequenceOfInteger::Append(Macad::Occt::TColStd_SequenceOfInteger^ theSequence)
{
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Append(*(::TColStd_SequenceOfInteger*)theSequence->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfInteger^ Macad::Occt::TColStd_HSequenceOfInteger::ChangeSequence()
{
	::TColStd_SequenceOfInteger* _result = new ::TColStd_SequenceOfInteger();
	*_result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfInteger(_result);
}

int Macad::Occt::TColStd_HSequenceOfInteger::Size()
{
	return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HSequenceOfInteger::Length()
{
	return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_HSequenceOfInteger::Lower()
{
	return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HSequenceOfInteger::Upper()
{
	return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HSequenceOfInteger::IsEmpty()
{
	return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_HSequenceOfInteger::Reverse()
{
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_HSequenceOfInteger::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_HSequenceOfInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_HSequenceOfInteger::Clear()
{
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColStd_HSequenceOfInteger::Remove(int theIndex)
{
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_HSequenceOfInteger::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_HSequenceOfInteger::Prepend(int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->Prepend(*(int*)pp_theItem);
}

void Macad::Occt::TColStd_HSequenceOfInteger::InsertBefore(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->InsertBefore(theIndex, *(int*)pp_theItem);
}

void Macad::Occt::TColStd_HSequenceOfInteger::InsertAfter(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->InsertAfter(theIndex, *(int*)pp_theItem);
}

int Macad::Occt::TColStd_HSequenceOfInteger::First()
{
	return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->First();
}

int Macad::Occt::TColStd_HSequenceOfInteger::ChangeFirst()
{
	return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeFirst();
}

int Macad::Occt::TColStd_HSequenceOfInteger::Last()
{
	return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Last();
}

int Macad::Occt::TColStd_HSequenceOfInteger::ChangeLast()
{
	return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeLast();
}

int Macad::Occt::TColStd_HSequenceOfInteger::Value(int theIndex)
{
	return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Value(theIndex);
}

int Macad::Occt::TColStd_HSequenceOfInteger::ChangeValue(int theIndex)
{
	return ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_HSequenceOfInteger::SetValue(int theIndex, int theItem)
{
	pin_ptr<int> pp_theItem = &theItem;
	((::TColStd_HSequenceOfInteger*)_NativeInstance)->SetValue(theIndex, *(int*)pp_theItem);
}


Macad::Occt::TColStd_HSequenceOfInteger^ Macad::Occt::TColStd_HSequenceOfInteger::CreateDowncasted(::TColStd_HSequenceOfInteger* instance)
{
	return gcnew Macad::Occt::TColStd_HSequenceOfInteger( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfReal::TColStd_HSequenceOfReal()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfReal();
}

Macad::Occt::TColStd_HSequenceOfReal::TColStd_HSequenceOfReal(Macad::Occt::TColStd_SequenceOfReal^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfReal(*(::TColStd_SequenceOfReal*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HSequenceOfReal::TColStd_HSequenceOfReal(Macad::Occt::TColStd_HSequenceOfReal^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfReal(*(::TColStd_HSequenceOfReal*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfReal^ Macad::Occt::TColStd_HSequenceOfReal::Sequence()
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result =  (::TColStd_SequenceOfReal)((::TColStd_HSequenceOfReal*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfReal(_result);
}

void Macad::Occt::TColStd_HSequenceOfReal::Append(double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Append(*(double*)pp_theItem);
}

void Macad::Occt::TColStd_HSequenceOfReal::Append(Macad::Occt::TColStd_SequenceOfReal^ theSequence)
{
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Append(*(::TColStd_SequenceOfReal*)theSequence->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfReal^ Macad::Occt::TColStd_HSequenceOfReal::ChangeSequence()
{
	::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
	*_result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfReal(_result);
}

int Macad::Occt::TColStd_HSequenceOfReal::Size()
{
	return ((::TColStd_HSequenceOfReal*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HSequenceOfReal::Length()
{
	return ((::TColStd_HSequenceOfReal*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_HSequenceOfReal::Lower()
{
	return ((::TColStd_HSequenceOfReal*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HSequenceOfReal::Upper()
{
	return ((::TColStd_HSequenceOfReal*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HSequenceOfReal::IsEmpty()
{
	return ((::TColStd_HSequenceOfReal*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_HSequenceOfReal::Reverse()
{
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_HSequenceOfReal::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_HSequenceOfReal::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_HSequenceOfReal::Clear()
{
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColStd_HSequenceOfReal::Remove(int theIndex)
{
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_HSequenceOfReal::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_HSequenceOfReal::Prepend(double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HSequenceOfReal*)_NativeInstance)->Prepend(*(double*)pp_theItem);
}

void Macad::Occt::TColStd_HSequenceOfReal::InsertBefore(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HSequenceOfReal*)_NativeInstance)->InsertBefore(theIndex, *(double*)pp_theItem);
}

void Macad::Occt::TColStd_HSequenceOfReal::InsertAfter(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HSequenceOfReal*)_NativeInstance)->InsertAfter(theIndex, *(double*)pp_theItem);
}

double Macad::Occt::TColStd_HSequenceOfReal::First()
{
	return ((::TColStd_HSequenceOfReal*)_NativeInstance)->First();
}

double Macad::Occt::TColStd_HSequenceOfReal::ChangeFirst()
{
	return ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeFirst();
}

double Macad::Occt::TColStd_HSequenceOfReal::Last()
{
	return ((::TColStd_HSequenceOfReal*)_NativeInstance)->Last();
}

double Macad::Occt::TColStd_HSequenceOfReal::ChangeLast()
{
	return ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeLast();
}

double Macad::Occt::TColStd_HSequenceOfReal::Value(int theIndex)
{
	return ((::TColStd_HSequenceOfReal*)_NativeInstance)->Value(theIndex);
}

double Macad::Occt::TColStd_HSequenceOfReal::ChangeValue(int theIndex)
{
	return ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColStd_HSequenceOfReal::SetValue(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColStd_HSequenceOfReal*)_NativeInstance)->SetValue(theIndex, *(double*)pp_theItem);
}


Macad::Occt::TColStd_HSequenceOfReal^ Macad::Occt::TColStd_HSequenceOfReal::CreateDowncasted(::TColStd_HSequenceOfReal* instance)
{
	return gcnew Macad::Occt::TColStd_HSequenceOfReal( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfTransient::TColStd_HSequenceOfTransient()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfTransient();
}

Macad::Occt::TColStd_HSequenceOfTransient::TColStd_HSequenceOfTransient(Macad::Occt::TColStd_SequenceOfTransient^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfTransient(*(::TColStd_SequenceOfTransient*)theOther->NativeInstance);
}

Macad::Occt::TColStd_HSequenceOfTransient::TColStd_HSequenceOfTransient(Macad::Occt::TColStd_HSequenceOfTransient^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColStd_HSequenceOfTransient(*(::TColStd_HSequenceOfTransient*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfTransient^ Macad::Occt::TColStd_HSequenceOfTransient::Sequence()
{
	::TColStd_SequenceOfTransient* _result = new ::TColStd_SequenceOfTransient();
	*_result =  (::TColStd_SequenceOfTransient)((::TColStd_HSequenceOfTransient*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfTransient(_result);
}

void Macad::Occt::TColStd_HSequenceOfTransient::Append(Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HSequenceOfTransient::Append(Macad::Occt::TColStd_SequenceOfTransient^ theSequence)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Append(*(::TColStd_SequenceOfTransient*)theSequence->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfTransient^ Macad::Occt::TColStd_HSequenceOfTransient::ChangeSequence()
{
	::TColStd_SequenceOfTransient* _result = new ::TColStd_SequenceOfTransient();
	*_result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfTransient(_result);
}

int Macad::Occt::TColStd_HSequenceOfTransient::Size()
{
	return ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Size();
}

int Macad::Occt::TColStd_HSequenceOfTransient::Length()
{
	return ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Length();
}

int Macad::Occt::TColStd_HSequenceOfTransient::Lower()
{
	return ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Lower();
}

int Macad::Occt::TColStd_HSequenceOfTransient::Upper()
{
	return ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColStd_HSequenceOfTransient::IsEmpty()
{
	return ((::TColStd_HSequenceOfTransient*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColStd_HSequenceOfTransient::Reverse()
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_HSequenceOfTransient::Exchange(int I, int J)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_HSequenceOfTransient::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColStd_HSequenceOfTransient::Clear()
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColStd_HSequenceOfTransient::Remove(int theIndex)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColStd_HSequenceOfTransient::Remove(int theFromIndex, int theToIndex)
{
	((::TColStd_HSequenceOfTransient*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColStd_HSequenceOfTransient::Prepend(Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HSequenceOfTransient::InsertBefore(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HSequenceOfTransient::InsertAfter(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::First()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::ChangeFirst()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::Last()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::ChangeLast()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::Value(int theIndex)
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::ChangeValue(int theIndex)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HSequenceOfTransient::SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
	throw gcnew System::NotImplementedException();
}


Macad::Occt::TColStd_HSequenceOfTransient^ Macad::Occt::TColStd_HSequenceOfTransient::CreateDowncasted(::TColStd_HSequenceOfTransient* instance)
{
	return gcnew Macad::Occt::TColStd_HSequenceOfTransient( instance );
}


