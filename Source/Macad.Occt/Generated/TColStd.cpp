// Generated wrapper code for package TColStd

#include "OcctPCH.h"
#include "TColStd.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TCollection.h"
#include "NCollection.h"
#include "Standard.h"


//---------------------------------------------------------------------
//  Class  TColStd_Array1OfAsciiString
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfAsciiString::TColStd_Array1OfAsciiString()
    : Macad::Occt::BaseClass<::TColStd_Array1OfAsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfAsciiString();
}

Macad::Occt::TColStd_Array1OfAsciiString::TColStd_Array1OfAsciiString(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfAsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfAsciiString(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfAsciiString::TColStd_Array1OfAsciiString(Macad::Occt::TCollection_AsciiString^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::TColStd_Array1OfAsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfAsciiString(*(::TCollection_AsciiString*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::TColStd_Array1OfAsciiString::TColStd_Array1OfAsciiString(Macad::Occt::TCollection_AsciiString^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfAsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfAsciiString(*(::TCollection_AsciiString*)theBegin->NativeInstance, theLower, theUpper, true);
}

void Macad::Occt::TColStd_Array1OfAsciiString::Init(Macad::Occt::TCollection_AsciiString^ theValue)
{
    ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Init(*(::TCollection_AsciiString*)theValue->NativeInstance);
}

int Macad::Occt::TColStd_Array1OfAsciiString::Size()
{
    int _result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array1OfAsciiString::Length()
{
    int _result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_Array1OfAsciiString::IsEmpty()
{
    bool _result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array1OfAsciiString::Lower()
{
    int _result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array1OfAsciiString::Upper()
{
    int _result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Upper();
    return _result;
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
    *_result = (::TCollection_AsciiString)((::TColStd_Array1OfAsciiString*)_NativeInstance)->First();
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
    *_result = (::TCollection_AsciiString)((::TColStd_Array1OfAsciiString*)_NativeInstance)->Last();
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
    *_result = (::TCollection_AsciiString)((::TColStd_Array1OfAsciiString*)_NativeInstance)->Value(theIndex);
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

void Macad::Occt::TColStd_Array1OfAsciiString::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array1OfAsciiString*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array1OfAsciiString::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array1OfAsciiString*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_Array1OfAsciiString::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_Array1OfAsciiString*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_Array1OfAsciiString::IsDeletable()
{
    bool _result = ((::TColStd_Array1OfAsciiString*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_AsciiString^>^ Macad::Occt::TColStd_Array1OfAsciiString::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_AsciiString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_Array1OfAsciiString::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_AsciiString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfAsciiString::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfBoolean
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfBoolean::TColStd_Array1OfBoolean()
    : Macad::Occt::BaseClass<::TColStd_Array1OfBoolean>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfBoolean();
}

Macad::Occt::TColStd_Array1OfBoolean::TColStd_Array1OfBoolean(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfBoolean>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfBoolean(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfBoolean::TColStd_Array1OfBoolean(bool theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::TColStd_Array1OfBoolean>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<bool> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array1OfBoolean(*(bool*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

Macad::Occt::TColStd_Array1OfBoolean::TColStd_Array1OfBoolean(bool theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfBoolean>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<bool> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array1OfBoolean(*(bool*)pp_theBegin, theLower, theUpper, true);
}

void Macad::Occt::TColStd_Array1OfBoolean::Init(bool theValue)
{
    pin_ptr<bool> pp_theValue = &theValue;
    ((::TColStd_Array1OfBoolean*)_NativeInstance)->Init(*(bool*)pp_theValue);
}

int Macad::Occt::TColStd_Array1OfBoolean::Size()
{
    int _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array1OfBoolean::Length()
{
    int _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_Array1OfBoolean::IsEmpty()
{
    bool _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array1OfBoolean::Lower()
{
    int _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array1OfBoolean::Upper()
{
    int _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Upper();
    return _result;
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
    bool _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->First();
    return _result;
}

bool Macad::Occt::TColStd_Array1OfBoolean::Last()
{
    bool _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Last();
    return _result;
}

bool Macad::Occt::TColStd_Array1OfBoolean::Value(int theIndex)
{
    bool _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->Value(theIndex);
    return _result;
}

bool Macad::Occt::TColStd_Array1OfBoolean::ChangeValue(int theIndex)
{
    bool _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TColStd_Array1OfBoolean::SetValue(int theIndex, bool theItem)
{
    pin_ptr<bool> pp_theItem = &theItem;
    ((::TColStd_Array1OfBoolean*)_NativeInstance)->SetValue(theIndex, *(bool*)pp_theItem);
}

void Macad::Occt::TColStd_Array1OfBoolean::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array1OfBoolean*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array1OfBoolean::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array1OfBoolean*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_Array1OfBoolean::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_Array1OfBoolean*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_Array1OfBoolean::IsDeletable()
{
    bool _result = ((::TColStd_Array1OfBoolean*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<bool>^ Macad::Occt::TColStd_Array1OfBoolean::GetEnumerator()
{
    return gcnew IndexEnumerator<bool>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_Array1OfBoolean::GetEnumerator2()
{
    return gcnew IndexEnumerator<bool>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfBoolean::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfByte
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfByte::TColStd_Array1OfByte()
    : Macad::Occt::BaseClass<::TColStd_Array1OfByte>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfByte();
}

Macad::Occt::TColStd_Array1OfByte::TColStd_Array1OfByte(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfByte>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfByte(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfByte::TColStd_Array1OfByte(unsigned char theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::TColStd_Array1OfByte>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<unsigned char> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array1OfByte(*(unsigned char*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

Macad::Occt::TColStd_Array1OfByte::TColStd_Array1OfByte(unsigned char theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfByte>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<unsigned char> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array1OfByte(*(unsigned char*)pp_theBegin, theLower, theUpper, true);
}

void Macad::Occt::TColStd_Array1OfByte::Init(unsigned char theValue)
{
    pin_ptr<unsigned char> pp_theValue = &theValue;
    ((::TColStd_Array1OfByte*)_NativeInstance)->Init(*(unsigned char*)pp_theValue);
}

int Macad::Occt::TColStd_Array1OfByte::Size()
{
    int _result = ((::TColStd_Array1OfByte*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array1OfByte::Length()
{
    int _result = ((::TColStd_Array1OfByte*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_Array1OfByte::IsEmpty()
{
    bool _result = ((::TColStd_Array1OfByte*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array1OfByte::Lower()
{
    int _result = ((::TColStd_Array1OfByte*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array1OfByte::Upper()
{
    int _result = ((::TColStd_Array1OfByte*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TColStd_Array1OfByte^ Macad::Occt::TColStd_Array1OfByte::Assign(Macad::Occt::TColStd_Array1OfByte^ theOther)
{
    ::TColStd_Array1OfByte* _result = new ::TColStd_Array1OfByte();
    *_result = ((::TColStd_Array1OfByte*)_NativeInstance)->Assign(*(::TColStd_Array1OfByte*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfByte(_result);
}

Macad::Occt::TColStd_Array1OfByte^ Macad::Occt::TColStd_Array1OfByte::Move(Macad::Occt::TColStd_Array1OfByte^ theOther)
{
    ::TColStd_Array1OfByte* _result = new ::TColStd_Array1OfByte();
    *_result = ((::TColStd_Array1OfByte*)_NativeInstance)->Move(*(::TColStd_Array1OfByte*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfByte(_result);
}

unsigned char Macad::Occt::TColStd_Array1OfByte::First()
{
    unsigned char _result = ((::TColStd_Array1OfByte*)_NativeInstance)->First();
    return _result;
}

unsigned char Macad::Occt::TColStd_Array1OfByte::Last()
{
    unsigned char _result = ((::TColStd_Array1OfByte*)_NativeInstance)->Last();
    return _result;
}

unsigned char Macad::Occt::TColStd_Array1OfByte::Value(int theIndex)
{
    unsigned char _result = ((::TColStd_Array1OfByte*)_NativeInstance)->Value(theIndex);
    return _result;
}

unsigned char Macad::Occt::TColStd_Array1OfByte::ChangeValue(int theIndex)
{
    unsigned char _result = ((::TColStd_Array1OfByte*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TColStd_Array1OfByte::SetValue(int theIndex, unsigned char theItem)
{
    pin_ptr<unsigned char> pp_theItem = &theItem;
    ((::TColStd_Array1OfByte*)_NativeInstance)->SetValue(theIndex, *(unsigned char*)pp_theItem);
}

void Macad::Occt::TColStd_Array1OfByte::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array1OfByte*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array1OfByte::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array1OfByte*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_Array1OfByte::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_Array1OfByte*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_Array1OfByte::IsDeletable()
{
    bool _result = ((::TColStd_Array1OfByte*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<unsigned char>^ Macad::Occt::TColStd_Array1OfByte::GetEnumerator()
{
    return gcnew IndexEnumerator<unsigned char>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_Array1OfByte::GetEnumerator2()
{
    return gcnew IndexEnumerator<unsigned char>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfByte::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfCharacter
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfCharacter::TColStd_Array1OfCharacter()
    : Macad::Occt::BaseClass<::TColStd_Array1OfCharacter>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfCharacter();
}

Macad::Occt::TColStd_Array1OfCharacter::TColStd_Array1OfCharacter(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfCharacter>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfCharacter(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfCharacter::TColStd_Array1OfCharacter(char theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::TColStd_Array1OfCharacter>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<char> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array1OfCharacter(*(char*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

Macad::Occt::TColStd_Array1OfCharacter::TColStd_Array1OfCharacter(char theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfCharacter>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<char> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array1OfCharacter(*(char*)pp_theBegin, theLower, theUpper, true);
}

void Macad::Occt::TColStd_Array1OfCharacter::Init(char theValue)
{
    pin_ptr<char> pp_theValue = &theValue;
    ((::TColStd_Array1OfCharacter*)_NativeInstance)->Init(*(char*)pp_theValue);
}

int Macad::Occt::TColStd_Array1OfCharacter::Size()
{
    int _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array1OfCharacter::Length()
{
    int _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_Array1OfCharacter::IsEmpty()
{
    bool _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array1OfCharacter::Lower()
{
    int _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array1OfCharacter::Upper()
{
    int _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Upper();
    return _result;
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
    char _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->First();
    return _result;
}

char Macad::Occt::TColStd_Array1OfCharacter::Last()
{
    char _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Last();
    return _result;
}

char Macad::Occt::TColStd_Array1OfCharacter::Value(int theIndex)
{
    char _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->Value(theIndex);
    return _result;
}

char Macad::Occt::TColStd_Array1OfCharacter::ChangeValue(int theIndex)
{
    char _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TColStd_Array1OfCharacter::SetValue(int theIndex, char theItem)
{
    pin_ptr<char> pp_theItem = &theItem;
    ((::TColStd_Array1OfCharacter*)_NativeInstance)->SetValue(theIndex, *(char*)pp_theItem);
}

void Macad::Occt::TColStd_Array1OfCharacter::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array1OfCharacter*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array1OfCharacter::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array1OfCharacter*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_Array1OfCharacter::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_Array1OfCharacter*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_Array1OfCharacter::IsDeletable()
{
    bool _result = ((::TColStd_Array1OfCharacter*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<char>^ Macad::Occt::TColStd_Array1OfCharacter::GetEnumerator()
{
    return gcnew IndexEnumerator<char>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_Array1OfCharacter::GetEnumerator2()
{
    return gcnew IndexEnumerator<char>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfCharacter::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfExtendedString
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfExtendedString::TColStd_Array1OfExtendedString()
    : Macad::Occt::BaseClass<::TColStd_Array1OfExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfExtendedString();
}

Macad::Occt::TColStd_Array1OfExtendedString::TColStd_Array1OfExtendedString(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfExtendedString(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfExtendedString::TColStd_Array1OfExtendedString(Macad::Occt::TCollection_ExtendedString^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::TColStd_Array1OfExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfExtendedString(*(::TCollection_ExtendedString*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::TColStd_Array1OfExtendedString::TColStd_Array1OfExtendedString(Macad::Occt::TCollection_ExtendedString^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfExtendedString(*(::TCollection_ExtendedString*)theBegin->NativeInstance, theLower, theUpper, true);
}

void Macad::Occt::TColStd_Array1OfExtendedString::Init(Macad::Occt::TCollection_ExtendedString^ theValue)
{
    ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Init(*(::TCollection_ExtendedString*)theValue->NativeInstance);
}

int Macad::Occt::TColStd_Array1OfExtendedString::Size()
{
    int _result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array1OfExtendedString::Length()
{
    int _result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_Array1OfExtendedString::IsEmpty()
{
    bool _result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array1OfExtendedString::Lower()
{
    int _result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array1OfExtendedString::Upper()
{
    int _result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Upper();
    return _result;
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
    *_result = (::TCollection_ExtendedString)((::TColStd_Array1OfExtendedString*)_NativeInstance)->First();
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
    *_result = (::TCollection_ExtendedString)((::TColStd_Array1OfExtendedString*)_NativeInstance)->Last();
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
    *_result = (::TCollection_ExtendedString)((::TColStd_Array1OfExtendedString*)_NativeInstance)->Value(theIndex);
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

void Macad::Occt::TColStd_Array1OfExtendedString::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array1OfExtendedString*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array1OfExtendedString::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array1OfExtendedString*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_Array1OfExtendedString::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_Array1OfExtendedString*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_Array1OfExtendedString::IsDeletable()
{
    bool _result = ((::TColStd_Array1OfExtendedString*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_ExtendedString^>^ Macad::Occt::TColStd_Array1OfExtendedString::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_ExtendedString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_Array1OfExtendedString::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_ExtendedString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfExtendedString::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfInteger::TColStd_Array1OfInteger()
    : Macad::Occt::BaseClass<::TColStd_Array1OfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfInteger();
}

Macad::Occt::TColStd_Array1OfInteger::TColStd_Array1OfInteger(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfInteger(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfInteger::TColStd_Array1OfInteger(int theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::TColStd_Array1OfInteger>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<int> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array1OfInteger(*(int*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

Macad::Occt::TColStd_Array1OfInteger::TColStd_Array1OfInteger(int theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfInteger>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<int> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array1OfInteger(*(int*)pp_theBegin, theLower, theUpper, true);
}

void Macad::Occt::TColStd_Array1OfInteger::Init(int theValue)
{
    pin_ptr<int> pp_theValue = &theValue;
    ((::TColStd_Array1OfInteger*)_NativeInstance)->Init(*(int*)pp_theValue);
}

int Macad::Occt::TColStd_Array1OfInteger::Size()
{
    int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array1OfInteger::Length()
{
    int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_Array1OfInteger::IsEmpty()
{
    bool _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array1OfInteger::Lower()
{
    int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array1OfInteger::Upper()
{
    int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Upper();
    return _result;
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
    int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->First();
    return _result;
}

int Macad::Occt::TColStd_Array1OfInteger::Last()
{
    int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Last();
    return _result;
}

int Macad::Occt::TColStd_Array1OfInteger::Value(int theIndex)
{
    int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->Value(theIndex);
    return _result;
}

int Macad::Occt::TColStd_Array1OfInteger::ChangeValue(int theIndex)
{
    int _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TColStd_Array1OfInteger::SetValue(int theIndex, int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    ((::TColStd_Array1OfInteger*)_NativeInstance)->SetValue(theIndex, *(int*)pp_theItem);
}

void Macad::Occt::TColStd_Array1OfInteger::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array1OfInteger*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array1OfInteger::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array1OfInteger*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_Array1OfInteger::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_Array1OfInteger*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_Array1OfInteger::IsDeletable()
{
    bool _result = ((::TColStd_Array1OfInteger*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<int>^ Macad::Occt::TColStd_Array1OfInteger::GetEnumerator()
{
    return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_Array1OfInteger::GetEnumerator2()
{
    return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfInteger::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_ListOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_ListOfInteger::TColStd_ListOfInteger()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_ListOfInteger();
}

Macad::Occt::TColStd_ListOfInteger::TColStd_ListOfInteger(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_ListOfInteger(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TColStd_ListOfInteger::Size()
{
    int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TColStd_ListOfInteger::Assign(Macad::Occt::TColStd_ListOfInteger^ theOther)
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    *_result = ((::TColStd_ListOfInteger*)_NativeInstance)->Assign(*(::TColStd_ListOfInteger*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

void Macad::Occt::TColStd_ListOfInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColStd_ListOfInteger*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TColStd_ListOfInteger::Clear()
{
    ((::TColStd_ListOfInteger*)_NativeInstance)->Clear(0L);
}

int Macad::Occt::TColStd_ListOfInteger::First()
{
    int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->First();
    return _result;
}

int Macad::Occt::TColStd_ListOfInteger::Last()
{
    int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->Last();
    return _result;
}

int Macad::Occt::TColStd_ListOfInteger::Append(int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->Append(*(int*)pp_theItem);
    return _result;
}

int Macad::Occt::TColStd_ListOfInteger::Prepend(int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->Prepend(*(int*)pp_theItem);
    return _result;
}

void Macad::Occt::TColStd_ListOfInteger::RemoveFirst()
{
    ((::TColStd_ListOfInteger*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::TColStd_ListOfInteger::Remove(Macad::Occt::TColStd_ListOfInteger::Iterator^ theIter)
{
    ((::TColStd_ListOfInteger*)_NativeInstance)->Remove(*(::TColStd_ListOfInteger::Iterator*)theIter->NativeInstance);
}

int Macad::Occt::TColStd_ListOfInteger::InsertBefore(int theItem, Macad::Occt::TColStd_ListOfInteger::Iterator^ theIter)
{
    pin_ptr<int> pp_theItem = &theItem;
    int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->InsertBefore(*(int*)pp_theItem, *(::TColStd_ListOfInteger::Iterator*)theIter->NativeInstance);
    return _result;
}

int Macad::Occt::TColStd_ListOfInteger::InsertAfter(int theItem, Macad::Occt::TColStd_ListOfInteger::Iterator^ theIter)
{
    pin_ptr<int> pp_theItem = &theItem;
    int _result = ((::TColStd_ListOfInteger*)_NativeInstance)->InsertAfter(*(int*)pp_theItem, *(::TColStd_ListOfInteger::Iterator*)theIter->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_ListOfInteger::Reverse()
{
    ((::TColStd_ListOfInteger*)_NativeInstance)->Reverse();
}

System::Collections::Generic::IEnumerator<int>^ Macad::Occt::TColStd_ListOfInteger::GetEnumerator()
{
    return gcnew Macad::Occt::TColStd_ListOfInteger::Iterator(new ::TColStd_ListOfInteger::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_ListOfInteger::GetEnumerator2()
{
    return gcnew Macad::Occt::TColStd_ListOfInteger::Iterator(new ::TColStd_ListOfInteger::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfInteger::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_ListOfInteger::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<int, ::TColStd_ListOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_ListOfInteger::Iterator();
}

bool Macad::Occt::TColStd_ListOfInteger::Iterator::More()
{
    bool _result = ((::TColStd_ListOfInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_ListOfInteger::Iterator::Next()
{
    ((::TColStd_ListOfInteger::Iterator*)_NativeInstance)->Next();
}

int Macad::Occt::TColStd_ListOfInteger::Iterator::Value()
{
    int _result = ((::TColStd_ListOfInteger::Iterator*)_NativeInstance)->Value();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfListOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfListOfInteger::TColStd_Array1OfListOfInteger()
    : Macad::Occt::BaseClass<::TColStd_Array1OfListOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfListOfInteger();
}

Macad::Occt::TColStd_Array1OfListOfInteger::TColStd_Array1OfListOfInteger(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfListOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfListOfInteger(theLower, theUpper);
}

int Macad::Occt::TColStd_Array1OfListOfInteger::Size()
{
    int _result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array1OfListOfInteger::Length()
{
    int _result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_Array1OfListOfInteger::IsEmpty()
{
    bool _result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array1OfListOfInteger::Lower()
{
    int _result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array1OfListOfInteger::Upper()
{
    int _result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Upper();
    return _result;
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

void Macad::Occt::TColStd_Array1OfListOfInteger::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array1OfListOfInteger::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_Array1OfListOfInteger::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_Array1OfListOfInteger::IsDeletable()
{
    bool _result = ((::TColStd_Array1OfListOfInteger*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfListOfInteger::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfReal::TColStd_Array1OfReal()
    : Macad::Occt::BaseClass<::TColStd_Array1OfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfReal();
}

Macad::Occt::TColStd_Array1OfReal::TColStd_Array1OfReal(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfReal(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfReal::TColStd_Array1OfReal(double theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::TColStd_Array1OfReal>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<double> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array1OfReal(*(double*)pp_theBegin, theLower, theUpper, theUseBuffer);
}

Macad::Occt::TColStd_Array1OfReal::TColStd_Array1OfReal(double theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfReal>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<double> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array1OfReal(*(double*)pp_theBegin, theLower, theUpper, true);
}

void Macad::Occt::TColStd_Array1OfReal::Init(double theValue)
{
    pin_ptr<double> pp_theValue = &theValue;
    ((::TColStd_Array1OfReal*)_NativeInstance)->Init(*(double*)pp_theValue);
}

int Macad::Occt::TColStd_Array1OfReal::Size()
{
    int _result = ((::TColStd_Array1OfReal*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array1OfReal::Length()
{
    int _result = ((::TColStd_Array1OfReal*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_Array1OfReal::IsEmpty()
{
    bool _result = ((::TColStd_Array1OfReal*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array1OfReal::Lower()
{
    int _result = ((::TColStd_Array1OfReal*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array1OfReal::Upper()
{
    int _result = ((::TColStd_Array1OfReal*)_NativeInstance)->Upper();
    return _result;
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
    double _result = ((::TColStd_Array1OfReal*)_NativeInstance)->First();
    return _result;
}

double Macad::Occt::TColStd_Array1OfReal::Last()
{
    double _result = ((::TColStd_Array1OfReal*)_NativeInstance)->Last();
    return _result;
}

double Macad::Occt::TColStd_Array1OfReal::Value(int theIndex)
{
    double _result = ((::TColStd_Array1OfReal*)_NativeInstance)->Value(theIndex);
    return _result;
}

double Macad::Occt::TColStd_Array1OfReal::ChangeValue(int theIndex)
{
    double _result = ((::TColStd_Array1OfReal*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TColStd_Array1OfReal::SetValue(int theIndex, double theItem)
{
    pin_ptr<double> pp_theItem = &theItem;
    ((::TColStd_Array1OfReal*)_NativeInstance)->SetValue(theIndex, *(double*)pp_theItem);
}

void Macad::Occt::TColStd_Array1OfReal::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array1OfReal*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array1OfReal::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array1OfReal*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_Array1OfReal::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_Array1OfReal*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_Array1OfReal::IsDeletable()
{
    bool _result = ((::TColStd_Array1OfReal*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<double>^ Macad::Occt::TColStd_Array1OfReal::GetEnumerator()
{
    return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_Array1OfReal::GetEnumerator2()
{
    return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfReal::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array1OfTransient::TColStd_Array1OfTransient()
    : Macad::Occt::BaseClass<::TColStd_Array1OfTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfTransient();
}

Macad::Occt::TColStd_Array1OfTransient::TColStd_Array1OfTransient(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfTransient(theLower, theUpper);
}

Macad::Occt::TColStd_Array1OfTransient::TColStd_Array1OfTransient(Macad::Occt::Standard_Transient^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::TColStd_Array1OfTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfTransient(Handle(::Standard_Transient)(theBegin->NativeInstance), theLower, theUpper, theUseBuffer);
}

Macad::Occt::TColStd_Array1OfTransient::TColStd_Array1OfTransient(Macad::Occt::Standard_Transient^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TColStd_Array1OfTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array1OfTransient(Handle(::Standard_Transient)(theBegin->NativeInstance), theLower, theUpper, true);
}

void Macad::Occt::TColStd_Array1OfTransient::Init(Macad::Occt::Standard_Transient^ theValue)
{
    ((::TColStd_Array1OfTransient*)_NativeInstance)->Init(Handle(::Standard_Transient)(theValue->NativeInstance));
}

int Macad::Occt::TColStd_Array1OfTransient::Size()
{
    int _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array1OfTransient::Length()
{
    int _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_Array1OfTransient::IsEmpty()
{
    bool _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array1OfTransient::Lower()
{
    int _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array1OfTransient::Upper()
{
    int _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Upper();
    return _result;
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
    Handle(::Standard_Transient) _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array1OfTransient::ChangeFirst()
{
    Handle(::Standard_Transient) _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array1OfTransient::Last()
{
    Handle(::Standard_Transient) _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array1OfTransient::ChangeLast()
{
    Handle(::Standard_Transient) _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array1OfTransient::Value(int theIndex)
{
    Handle(::Standard_Transient) _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array1OfTransient::ChangeValue(int theIndex)
{
    Handle(::Standard_Transient) _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_Array1OfTransient::SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_Array1OfTransient*)_NativeInstance)->SetValue(theIndex, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_Array1OfTransient::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array1OfTransient*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array1OfTransient::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array1OfTransient*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_Array1OfTransient::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_Array1OfTransient*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_Array1OfTransient::IsDeletable()
{
    bool _result = ((::TColStd_Array1OfTransient*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::Standard_Transient^>^ Macad::Occt::TColStd_Array1OfTransient::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Standard_Transient^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_Array1OfTransient::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Standard_Transient^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_Array1OfTransient::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfBoolean
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array2OfBoolean::TColStd_Array2OfBoolean()
    : Macad::Occt::BaseClass<::TColStd_Array2OfBoolean>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array2OfBoolean();
}

Macad::Occt::TColStd_Array2OfBoolean::TColStd_Array2OfBoolean(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TColStd_Array2OfBoolean>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array2OfBoolean(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColStd_Array2OfBoolean::TColStd_Array2OfBoolean(bool theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TColStd_Array2OfBoolean>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<bool> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array2OfBoolean(*(bool*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int Macad::Occt::TColStd_Array2OfBoolean::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColStd_Array2OfBoolean::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_Array2OfBoolean::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColStd_Array2OfBoolean::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_Array2OfBoolean::Size()
{
    int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array2OfBoolean::Length()
{
    int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_Array2OfBoolean::NbRows()
{
    int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TColStd_Array2OfBoolean::NbColumns()
{
    int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TColStd_Array2OfBoolean::RowLength()
{
    int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TColStd_Array2OfBoolean::ColLength()
{
    int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TColStd_Array2OfBoolean::LowerRow()
{
    int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TColStd_Array2OfBoolean::UpperRow()
{
    int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TColStd_Array2OfBoolean::LowerCol()
{
    int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TColStd_Array2OfBoolean::UpperCol()
{
    int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->UpperCol();
    return _result;
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
    bool _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

bool Macad::Occt::TColStd_Array2OfBoolean::ChangeValue(int theRow, int theCol)
{
    bool _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result;
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

void Macad::Occt::TColStd_Array2OfBoolean::Init(bool theValue)
{
    pin_ptr<bool> pp_theValue = &theValue;
    ((::TColStd_Array2OfBoolean*)_NativeInstance)->Init(*(bool*)pp_theValue);
}

bool Macad::Occt::TColStd_Array2OfBoolean::IsEmpty()
{
    bool _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array2OfBoolean::Lower()
{
    int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array2OfBoolean::Upper()
{
    int _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_Array2OfBoolean::First()
{
    bool _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->First();
    return _result;
}

bool Macad::Occt::TColStd_Array2OfBoolean::Last()
{
    bool _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->Last();
    return _result;
}

void Macad::Occt::TColStd_Array2OfBoolean::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array2OfBoolean*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array2OfBoolean::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array2OfBoolean*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::TColStd_Array2OfBoolean::IsDeletable()
{
    bool _result = ((::TColStd_Array2OfBoolean*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfBoolean::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfCharacter
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array2OfCharacter::TColStd_Array2OfCharacter()
    : Macad::Occt::BaseClass<::TColStd_Array2OfCharacter>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array2OfCharacter();
}

Macad::Occt::TColStd_Array2OfCharacter::TColStd_Array2OfCharacter(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TColStd_Array2OfCharacter>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array2OfCharacter(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColStd_Array2OfCharacter::TColStd_Array2OfCharacter(char theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TColStd_Array2OfCharacter>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<char> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array2OfCharacter(*(char*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int Macad::Occt::TColStd_Array2OfCharacter::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColStd_Array2OfCharacter::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_Array2OfCharacter::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColStd_Array2OfCharacter::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_Array2OfCharacter::Size()
{
    int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array2OfCharacter::Length()
{
    int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_Array2OfCharacter::NbRows()
{
    int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TColStd_Array2OfCharacter::NbColumns()
{
    int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TColStd_Array2OfCharacter::RowLength()
{
    int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TColStd_Array2OfCharacter::ColLength()
{
    int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TColStd_Array2OfCharacter::LowerRow()
{
    int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TColStd_Array2OfCharacter::UpperRow()
{
    int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TColStd_Array2OfCharacter::LowerCol()
{
    int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TColStd_Array2OfCharacter::UpperCol()
{
    int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->UpperCol();
    return _result;
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
    char _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

char Macad::Occt::TColStd_Array2OfCharacter::ChangeValue(int theRow, int theCol)
{
    char _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result;
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

void Macad::Occt::TColStd_Array2OfCharacter::Init(char theValue)
{
    pin_ptr<char> pp_theValue = &theValue;
    ((::TColStd_Array2OfCharacter*)_NativeInstance)->Init(*(char*)pp_theValue);
}

bool Macad::Occt::TColStd_Array2OfCharacter::IsEmpty()
{
    bool _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array2OfCharacter::Lower()
{
    int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array2OfCharacter::Upper()
{
    int _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Upper();
    return _result;
}

char Macad::Occt::TColStd_Array2OfCharacter::First()
{
    char _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->First();
    return _result;
}

char Macad::Occt::TColStd_Array2OfCharacter::Last()
{
    char _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->Last();
    return _result;
}

void Macad::Occt::TColStd_Array2OfCharacter::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array2OfCharacter*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array2OfCharacter::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array2OfCharacter*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::TColStd_Array2OfCharacter::IsDeletable()
{
    bool _result = ((::TColStd_Array2OfCharacter*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfCharacter::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array2OfInteger::TColStd_Array2OfInteger()
    : Macad::Occt::BaseClass<::TColStd_Array2OfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array2OfInteger();
}

Macad::Occt::TColStd_Array2OfInteger::TColStd_Array2OfInteger(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TColStd_Array2OfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array2OfInteger(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColStd_Array2OfInteger::TColStd_Array2OfInteger(int theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TColStd_Array2OfInteger>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<int> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array2OfInteger(*(int*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int Macad::Occt::TColStd_Array2OfInteger::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColStd_Array2OfInteger::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColStd_Array2OfInteger::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::Size()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::Length()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::NbRows()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::NbColumns()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::RowLength()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::ColLength()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::LowerRow()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::UpperRow()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::LowerCol()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::UpperCol()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->UpperCol();
    return _result;
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
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::ChangeValue(int theRow, int theCol)
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result;
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

void Macad::Occt::TColStd_Array2OfInteger::Init(int theValue)
{
    pin_ptr<int> pp_theValue = &theValue;
    ((::TColStd_Array2OfInteger*)_NativeInstance)->Init(*(int*)pp_theValue);
}

bool Macad::Occt::TColStd_Array2OfInteger::IsEmpty()
{
    bool _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::Lower()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::Upper()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Upper();
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::First()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->First();
    return _result;
}

int Macad::Occt::TColStd_Array2OfInteger::Last()
{
    int _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->Last();
    return _result;
}

void Macad::Occt::TColStd_Array2OfInteger::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array2OfInteger*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array2OfInteger::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array2OfInteger*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::TColStd_Array2OfInteger::IsDeletable()
{
    bool _result = ((::TColStd_Array2OfInteger*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfInteger::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array2OfReal::TColStd_Array2OfReal()
    : Macad::Occt::BaseClass<::TColStd_Array2OfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array2OfReal();
}

Macad::Occt::TColStd_Array2OfReal::TColStd_Array2OfReal(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TColStd_Array2OfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array2OfReal(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColStd_Array2OfReal::TColStd_Array2OfReal(double theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TColStd_Array2OfReal>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<double> pp_theBegin = &theBegin;
    _NativeInstance = new ::TColStd_Array2OfReal(*(double*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

int Macad::Occt::TColStd_Array2OfReal::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColStd_Array2OfReal::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_Array2OfReal::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColStd_Array2OfReal::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_Array2OfReal::Size()
{
    int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array2OfReal::Length()
{
    int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_Array2OfReal::NbRows()
{
    int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TColStd_Array2OfReal::NbColumns()
{
    int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TColStd_Array2OfReal::RowLength()
{
    int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TColStd_Array2OfReal::ColLength()
{
    int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TColStd_Array2OfReal::LowerRow()
{
    int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TColStd_Array2OfReal::UpperRow()
{
    int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TColStd_Array2OfReal::LowerCol()
{
    int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TColStd_Array2OfReal::UpperCol()
{
    int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->UpperCol();
    return _result;
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
    double _result = ((::TColStd_Array2OfReal*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

double Macad::Occt::TColStd_Array2OfReal::ChangeValue(int theRow, int theCol)
{
    double _result = ((::TColStd_Array2OfReal*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result;
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

void Macad::Occt::TColStd_Array2OfReal::Init(double theValue)
{
    pin_ptr<double> pp_theValue = &theValue;
    ((::TColStd_Array2OfReal*)_NativeInstance)->Init(*(double*)pp_theValue);
}

bool Macad::Occt::TColStd_Array2OfReal::IsEmpty()
{
    bool _result = ((::TColStd_Array2OfReal*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array2OfReal::Lower()
{
    int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array2OfReal::Upper()
{
    int _result = ((::TColStd_Array2OfReal*)_NativeInstance)->Upper();
    return _result;
}

double Macad::Occt::TColStd_Array2OfReal::First()
{
    double _result = ((::TColStd_Array2OfReal*)_NativeInstance)->First();
    return _result;
}

double Macad::Occt::TColStd_Array2OfReal::Last()
{
    double _result = ((::TColStd_Array2OfReal*)_NativeInstance)->Last();
    return _result;
}

void Macad::Occt::TColStd_Array2OfReal::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array2OfReal*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array2OfReal::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array2OfReal*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::TColStd_Array2OfReal::IsDeletable()
{
    bool _result = ((::TColStd_Array2OfReal*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfReal::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_Array2OfTransient::TColStd_Array2OfTransient()
    : Macad::Occt::BaseClass<::TColStd_Array2OfTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array2OfTransient();
}

Macad::Occt::TColStd_Array2OfTransient::TColStd_Array2OfTransient(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TColStd_Array2OfTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array2OfTransient(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColStd_Array2OfTransient::TColStd_Array2OfTransient(Macad::Occt::Standard_Transient^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TColStd_Array2OfTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_Array2OfTransient(Handle(::Standard_Transient)(theBegin->NativeInstance), theRowLower, theRowUpper, theColLower, theColUpper);
}

int Macad::Occt::TColStd_Array2OfTransient::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColStd_Array2OfTransient::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_Array2OfTransient::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColStd_Array2OfTransient::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_Array2OfTransient::Size()
{
    int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_Array2OfTransient::Length()
{
    int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_Array2OfTransient::NbRows()
{
    int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TColStd_Array2OfTransient::NbColumns()
{
    int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TColStd_Array2OfTransient::RowLength()
{
    int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TColStd_Array2OfTransient::ColLength()
{
    int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TColStd_Array2OfTransient::LowerRow()
{
    int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TColStd_Array2OfTransient::UpperRow()
{
    int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TColStd_Array2OfTransient::LowerCol()
{
    int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TColStd_Array2OfTransient::UpperCol()
{
    int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->UpperCol();
    return _result;
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
    Handle(::Standard_Transient) _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Value(theRow, theCol);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array2OfTransient::ChangeValue(int theRow, int theCol)
{
    Handle(::Standard_Transient) _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_Array2OfTransient::SetValue(int theRow, int theCol, Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_Array2OfTransient*)_NativeInstance)->SetValue(theRow, theCol, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_Array2OfTransient::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColStd_Array2OfTransient*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::TColStd_Array2OfTransient::Init(Macad::Occt::Standard_Transient^ theValue)
{
    ((::TColStd_Array2OfTransient*)_NativeInstance)->Init(Handle(::Standard_Transient)(theValue->NativeInstance));
}

bool Macad::Occt::TColStd_Array2OfTransient::IsEmpty()
{
    bool _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_Array2OfTransient::Lower()
{
    int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_Array2OfTransient::Upper()
{
    int _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array2OfTransient::First()
{
    Handle(::Standard_Transient) _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array2OfTransient::ChangeFirst()
{
    Handle(::Standard_Transient) _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array2OfTransient::Last()
{
    Handle(::Standard_Transient) _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_Array2OfTransient::ChangeLast()
{
    Handle(::Standard_Transient) _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_Array2OfTransient::UpdateLowerBound(int theLower)
{
    ((::TColStd_Array2OfTransient*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_Array2OfTransient::UpdateUpperBound(int theUpper)
{
    ((::TColStd_Array2OfTransient*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::TColStd_Array2OfTransient::IsDeletable()
{
    bool _result = ((::TColStd_Array2OfTransient*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_Array2OfTransient::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfAsciiStringInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfAsciiStringInteger::TColStd_DataMapOfAsciiStringInteger()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfAsciiStringInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfAsciiStringInteger();
}

Macad::Occt::TColStd_DataMapOfAsciiStringInteger::TColStd_DataMapOfAsciiStringInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfAsciiStringInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfAsciiStringInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TColStd_DataMapOfAsciiStringInteger::TColStd_DataMapOfAsciiStringInteger(int theNbBuckets)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfAsciiStringInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfAsciiStringInteger(theNbBuckets, 0L);
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

void Macad::Occt::TColStd_DataMapOfAsciiStringInteger::ReSize(int N)
{
    ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Bind(Macad::Occt::TCollection_AsciiString^ theKey, int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    bool _result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Bind(*(::TCollection_AsciiString*)theKey->NativeInstance, *(int*)pp_theItem);
    return _result;
}

int Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Bound(Macad::Occt::TCollection_AsciiString^ theKey, int theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::TColStd_DataMapOfAsciiStringInteger::IsBound(Macad::Occt::TCollection_AsciiString^ theKey)
{
    bool _result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->IsBound(*(::TCollection_AsciiString*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_DataMapOfAsciiStringInteger::UnBind(Macad::Occt::TCollection_AsciiString^ theKey)
{
    bool _result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->UnBind(*(::TCollection_AsciiString*)theKey->NativeInstance);
    return _result;
}

int Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Seek(Macad::Occt::TCollection_AsciiString^ theKey)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Find(Macad::Occt::TCollection_AsciiString^ theKey)
{
    int _result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Find(*(::TCollection_AsciiString*)theKey->NativeInstance);
    return _result;
}

int Macad::Occt::TColStd_DataMapOfAsciiStringInteger::ChangeSeek(Macad::Occt::TCollection_AsciiString^ theKey)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::TColStd_DataMapOfAsciiStringInteger::ChangeFind(Macad::Occt::TCollection_AsciiString^ theKey)
{
    int _result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->ChangeFind(*(::TCollection_AsciiString*)theKey->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Clear(bool doReleaseMemory)
{
    ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Clear()
{
    ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Size()
{
    int _result = ((::TColStd_DataMapOfAsciiStringInteger*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfAsciiStringInteger::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfAsciiStringInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfAsciiStringInteger::Iterator();
}

bool Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Iterator::More()
{
    bool _result = ((::TColStd_DataMapOfAsciiStringInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Iterator::Next()
{
    ((::TColStd_DataMapOfAsciiStringInteger::Iterator*)_NativeInstance)->Next();
}

int Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Iterator::Value()
{
    int _result = ((::TColStd_DataMapOfAsciiStringInteger::Iterator*)_NativeInstance)->Value();
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_DataMapOfAsciiStringInteger::Iterator::Key()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TColStd_DataMapOfAsciiStringInteger::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfIntegerInteger::TColStd_DataMapOfIntegerInteger()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerInteger();
}

Macad::Occt::TColStd_DataMapOfIntegerInteger::TColStd_DataMapOfIntegerInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TColStd_DataMapOfIntegerInteger::TColStd_DataMapOfIntegerInteger(int theNbBuckets)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerInteger(theNbBuckets, 0L);
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

void Macad::Occt::TColStd_DataMapOfIntegerInteger::ReSize(int N)
{
    ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TColStd_DataMapOfIntegerInteger::Bind(int theKey, int theItem)
{
    pin_ptr<int> pp_theKey = &theKey;
    pin_ptr<int> pp_theItem = &theItem;
    bool _result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Bind(*(int*)pp_theKey, *(int*)pp_theItem);
    return _result;
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::Bound(int theKey, int theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::TColStd_DataMapOfIntegerInteger::IsBound(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->IsBound(*(int*)pp_theKey);
    return _result;
}

bool Macad::Occt::TColStd_DataMapOfIntegerInteger::UnBind(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->UnBind(*(int*)pp_theKey);
    return _result;
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::Seek(int theKey)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::Find(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    int _result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Find(*(int*)pp_theKey);
    return _result;
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::ChangeSeek(int theKey)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::ChangeFind(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    int _result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
    return _result;
}

void Macad::Occt::TColStd_DataMapOfIntegerInteger::Clear(bool doReleaseMemory)
{
    ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_DataMapOfIntegerInteger::Clear()
{
    ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::Size()
{
    int _result = ((::TColStd_DataMapOfIntegerInteger*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerInteger::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfIntegerInteger::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerInteger::Iterator();
}

bool Macad::Occt::TColStd_DataMapOfIntegerInteger::Iterator::More()
{
    bool _result = ((::TColStd_DataMapOfIntegerInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_DataMapOfIntegerInteger::Iterator::Next()
{
    ((::TColStd_DataMapOfIntegerInteger::Iterator*)_NativeInstance)->Next();
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::Iterator::Value()
{
    int _result = ((::TColStd_DataMapOfIntegerInteger::Iterator*)_NativeInstance)->Value();
    return _result;
}

int Macad::Occt::TColStd_DataMapOfIntegerInteger::Iterator::Key()
{
    int _result = ((::TColStd_DataMapOfIntegerInteger::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerListOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::TColStd_DataMapOfIntegerListOfInteger()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerListOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerListOfInteger();
}

Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::TColStd_DataMapOfIntegerListOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerListOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerListOfInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::TColStd_DataMapOfIntegerListOfInteger(int theNbBuckets)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerListOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerListOfInteger(theNbBuckets, 0L);
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

void Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::ReSize(int N)
{
    ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Bind(int theKey, Macad::Occt::TColStd_ListOfInteger^ theItem)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Bind(*(int*)pp_theKey, *(::TColStd_ListOfInteger*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Bound(int theKey, Macad::Occt::TColStd_ListOfInteger^ theItem)
{
    pin_ptr<int> pp_theKey = &theKey;
    ::TColStd_ListOfInteger* _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Bound(*(int*)pp_theKey, *(::TColStd_ListOfInteger*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

bool Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::IsBound(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->IsBound(*(int*)pp_theKey);
    return _result;
}

bool Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::UnBind(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->UnBind(*(int*)pp_theKey);
    return _result;
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Seek(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    const ::TColStd_ListOfInteger* _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Seek(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger((::TColStd_ListOfInteger*)_result);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Find(int theKey)
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    pin_ptr<int> pp_theKey = &theKey;
    *_result = (::TColStd_ListOfInteger)((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Find(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::ChangeSeek(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    ::TColStd_ListOfInteger* _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->ChangeSeek(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::ChangeFind(int theKey)
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    pin_ptr<int> pp_theKey = &theKey;
    *_result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

void Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Clear(bool doReleaseMemory)
{
    ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Clear()
{
    ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Size()
{
    int _result = ((::TColStd_DataMapOfIntegerListOfInteger*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerListOfInteger::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerListOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerListOfInteger::Iterator();
}

bool Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Iterator::More()
{
    bool _result = ((::TColStd_DataMapOfIntegerListOfInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Iterator::Next()
{
    ((::TColStd_DataMapOfIntegerListOfInteger::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Iterator::Value()
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    *_result = (::TColStd_ListOfInteger)((::TColStd_DataMapOfIntegerListOfInteger::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Iterator::ChangeValue()
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    *_result = ((::TColStd_DataMapOfIntegerListOfInteger::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

int Macad::Occt::TColStd_DataMapOfIntegerListOfInteger::Iterator::Key()
{
    int _result = ((::TColStd_DataMapOfIntegerListOfInteger::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfIntegerReal::TColStd_DataMapOfIntegerReal()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerReal();
}

Macad::Occt::TColStd_DataMapOfIntegerReal::TColStd_DataMapOfIntegerReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerReal(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TColStd_DataMapOfIntegerReal::TColStd_DataMapOfIntegerReal(int theNbBuckets)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerReal(theNbBuckets, 0L);
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

void Macad::Occt::TColStd_DataMapOfIntegerReal::ReSize(int N)
{
    ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TColStd_DataMapOfIntegerReal::Bind(int theKey, double theItem)
{
    pin_ptr<int> pp_theKey = &theKey;
    pin_ptr<double> pp_theItem = &theItem;
    bool _result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Bind(*(int*)pp_theKey, *(double*)pp_theItem);
    return _result;
}

double Macad::Occt::TColStd_DataMapOfIntegerReal::Bound(int theKey, double theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::TColStd_DataMapOfIntegerReal::IsBound(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->IsBound(*(int*)pp_theKey);
    return _result;
}

bool Macad::Occt::TColStd_DataMapOfIntegerReal::UnBind(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->UnBind(*(int*)pp_theKey);
    return _result;
}

double Macad::Occt::TColStd_DataMapOfIntegerReal::Seek(int theKey)
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::TColStd_DataMapOfIntegerReal::Find(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    double _result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Find(*(int*)pp_theKey);
    return _result;
}

double Macad::Occt::TColStd_DataMapOfIntegerReal::ChangeSeek(int theKey)
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::TColStd_DataMapOfIntegerReal::ChangeFind(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    double _result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
    return _result;
}

void Macad::Occt::TColStd_DataMapOfIntegerReal::Clear(bool doReleaseMemory)
{
    ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_DataMapOfIntegerReal::Clear()
{
    ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TColStd_DataMapOfIntegerReal::Size()
{
    int _result = ((::TColStd_DataMapOfIntegerReal*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfIntegerReal::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerReal::Iterator();
}

bool Macad::Occt::TColStd_DataMapOfIntegerReal::Iterator::More()
{
    bool _result = ((::TColStd_DataMapOfIntegerReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_DataMapOfIntegerReal::Iterator::Next()
{
    ((::TColStd_DataMapOfIntegerReal::Iterator*)_NativeInstance)->Next();
}

double Macad::Occt::TColStd_DataMapOfIntegerReal::Iterator::Value()
{
    double _result = ((::TColStd_DataMapOfIntegerReal::Iterator*)_NativeInstance)->Value();
    return _result;
}

int Macad::Occt::TColStd_DataMapOfIntegerReal::Iterator::Key()
{
    int _result = ((::TColStd_DataMapOfIntegerReal::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfIntegerTransient::TColStd_DataMapOfIntegerTransient()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerTransient();
}

Macad::Occt::TColStd_DataMapOfIntegerTransient::TColStd_DataMapOfIntegerTransient(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerTransient(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TColStd_DataMapOfIntegerTransient::TColStd_DataMapOfIntegerTransient(int theNbBuckets)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerTransient(theNbBuckets, 0L);
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

void Macad::Occt::TColStd_DataMapOfIntegerTransient::ReSize(int N)
{
    ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TColStd_DataMapOfIntegerTransient::Bind(int theKey, Macad::Occt::Standard_Transient^ theItem)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Bind(*(int*)pp_theKey, Handle(::Standard_Transient)(theItem->NativeInstance));
    return _result;
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfIntegerTransient::Bound(int theKey, Macad::Occt::Standard_Transient^ theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::TColStd_DataMapOfIntegerTransient::IsBound(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->IsBound(*(int*)pp_theKey);
    return _result;
}

bool Macad::Occt::TColStd_DataMapOfIntegerTransient::UnBind(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->UnBind(*(int*)pp_theKey);
    return _result;
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfIntegerTransient::Seek(int theKey)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfIntegerTransient::Find(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Find(*(int*)pp_theKey);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfIntegerTransient::ChangeSeek(int theKey)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfIntegerTransient::ChangeFind(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_DataMapOfIntegerTransient::Clear(bool doReleaseMemory)
{
    ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_DataMapOfIntegerTransient::Clear()
{
    ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TColStd_DataMapOfIntegerTransient::Size()
{
    int _result = ((::TColStd_DataMapOfIntegerTransient*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerTransient::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfIntegerTransient::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfIntegerTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfIntegerTransient::Iterator();
}

bool Macad::Occt::TColStd_DataMapOfIntegerTransient::Iterator::More()
{
    bool _result = ((::TColStd_DataMapOfIntegerTransient::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_DataMapOfIntegerTransient::Iterator::Next()
{
    ((::TColStd_DataMapOfIntegerTransient::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfIntegerTransient::Iterator::Value()
{
    Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfIntegerTransient::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfIntegerTransient::Iterator::ChangeValue()
{
    Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfIntegerTransient::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

int Macad::Occt::TColStd_DataMapOfIntegerTransient::Iterator::Key()
{
    int _result = ((::TColStd_DataMapOfIntegerTransient::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfStringInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfStringInteger::TColStd_DataMapOfStringInteger()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfStringInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfStringInteger();
}

Macad::Occt::TColStd_DataMapOfStringInteger::TColStd_DataMapOfStringInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfStringInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfStringInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TColStd_DataMapOfStringInteger::TColStd_DataMapOfStringInteger(int theNbBuckets)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfStringInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfStringInteger(theNbBuckets, 0L);
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

void Macad::Occt::TColStd_DataMapOfStringInteger::ReSize(int N)
{
    ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TColStd_DataMapOfStringInteger::Bind(Macad::Occt::TCollection_ExtendedString^ theKey, int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    bool _result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Bind(*(::TCollection_ExtendedString*)theKey->NativeInstance, *(int*)pp_theItem);
    return _result;
}

int Macad::Occt::TColStd_DataMapOfStringInteger::Bound(Macad::Occt::TCollection_ExtendedString^ theKey, int theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::TColStd_DataMapOfStringInteger::IsBound(Macad::Occt::TCollection_ExtendedString^ theKey)
{
    bool _result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->IsBound(*(::TCollection_ExtendedString*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_DataMapOfStringInteger::UnBind(Macad::Occt::TCollection_ExtendedString^ theKey)
{
    bool _result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->UnBind(*(::TCollection_ExtendedString*)theKey->NativeInstance);
    return _result;
}

int Macad::Occt::TColStd_DataMapOfStringInteger::Seek(Macad::Occt::TCollection_ExtendedString^ theKey)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::TColStd_DataMapOfStringInteger::Find(Macad::Occt::TCollection_ExtendedString^ theKey)
{
    int _result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Find(*(::TCollection_ExtendedString*)theKey->NativeInstance);
    return _result;
}

int Macad::Occt::TColStd_DataMapOfStringInteger::ChangeSeek(Macad::Occt::TCollection_ExtendedString^ theKey)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::TColStd_DataMapOfStringInteger::ChangeFind(Macad::Occt::TCollection_ExtendedString^ theKey)
{
    int _result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->ChangeFind(*(::TCollection_ExtendedString*)theKey->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_DataMapOfStringInteger::Clear(bool doReleaseMemory)
{
    ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_DataMapOfStringInteger::Clear()
{
    ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TColStd_DataMapOfStringInteger::Size()
{
    int _result = ((::TColStd_DataMapOfStringInteger*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfStringInteger::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfStringInteger::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfStringInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfStringInteger::Iterator();
}

bool Macad::Occt::TColStd_DataMapOfStringInteger::Iterator::More()
{
    bool _result = ((::TColStd_DataMapOfStringInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_DataMapOfStringInteger::Iterator::Next()
{
    ((::TColStd_DataMapOfStringInteger::Iterator*)_NativeInstance)->Next();
}

int Macad::Occt::TColStd_DataMapOfStringInteger::Iterator::Value()
{
    int _result = ((::TColStd_DataMapOfStringInteger::Iterator*)_NativeInstance)->Value();
    return _result;
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_DataMapOfStringInteger::Iterator::Key()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::TColStd_DataMapOfStringInteger::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfTransientTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfTransientTransient::TColStd_DataMapOfTransientTransient()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfTransientTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfTransientTransient();
}

Macad::Occt::TColStd_DataMapOfTransientTransient::TColStd_DataMapOfTransientTransient(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfTransientTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfTransientTransient(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TColStd_DataMapOfTransientTransient::TColStd_DataMapOfTransientTransient(int theNbBuckets)
    : Macad::Occt::BaseClass<::TColStd_DataMapOfTransientTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfTransientTransient(theNbBuckets, 0L);
}

void Macad::Occt::TColStd_DataMapOfTransientTransient::Exchange(Macad::Occt::TColStd_DataMapOfTransientTransient^ theOther)
{
    ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Exchange(*(::TColStd_DataMapOfTransientTransient*)theOther->NativeInstance);
}

Macad::Occt::TColStd_DataMapOfTransientTransient^ Macad::Occt::TColStd_DataMapOfTransientTransient::Assign(Macad::Occt::TColStd_DataMapOfTransientTransient^ theOther)
{
    ::TColStd_DataMapOfTransientTransient* _result = new ::TColStd_DataMapOfTransientTransient();
    *_result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Assign(*(::TColStd_DataMapOfTransientTransient*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_DataMapOfTransientTransient(_result);
}

void Macad::Occt::TColStd_DataMapOfTransientTransient::ReSize(int N)
{
    ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TColStd_DataMapOfTransientTransient::Bind(Macad::Occt::Standard_Transient^ theKey, Macad::Occt::Standard_Transient^ theItem)
{
    bool _result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Bind(Handle(::Standard_Transient)(theKey->NativeInstance), Handle(::Standard_Transient)(theItem->NativeInstance));
    return _result;
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfTransientTransient::Bound(Macad::Occt::Standard_Transient^ theKey, Macad::Occt::Standard_Transient^ theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::TColStd_DataMapOfTransientTransient::IsBound(Macad::Occt::Standard_Transient^ theKey)
{
    bool _result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->IsBound(Handle(::Standard_Transient)(theKey->NativeInstance));
    return _result;
}

bool Macad::Occt::TColStd_DataMapOfTransientTransient::UnBind(Macad::Occt::Standard_Transient^ theKey)
{
    bool _result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->UnBind(Handle(::Standard_Transient)(theKey->NativeInstance));
    return _result;
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfTransientTransient::Seek(Macad::Occt::Standard_Transient^ theKey)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfTransientTransient::Find(Macad::Occt::Standard_Transient^ theKey)
{
    Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Find(Handle(::Standard_Transient)(theKey->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfTransientTransient::ChangeSeek(Macad::Occt::Standard_Transient^ theKey)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfTransientTransient::ChangeFind(Macad::Occt::Standard_Transient^ theKey)
{
    Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->ChangeFind(Handle(::Standard_Transient)(theKey->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_DataMapOfTransientTransient::Clear(bool doReleaseMemory)
{
    ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_DataMapOfTransientTransient::Clear()
{
    ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TColStd_DataMapOfTransientTransient::Size()
{
    int _result = ((::TColStd_DataMapOfTransientTransient*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfTransientTransient::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_DataMapOfTransientTransient::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_DataMapOfTransientTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_DataMapOfTransientTransient::Iterator();
}

bool Macad::Occt::TColStd_DataMapOfTransientTransient::Iterator::More()
{
    bool _result = ((::TColStd_DataMapOfTransientTransient::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_DataMapOfTransientTransient::Iterator::Next()
{
    ((::TColStd_DataMapOfTransientTransient::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfTransientTransient::Iterator::Value()
{
    Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfTransientTransient::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfTransientTransient::Iterator::ChangeValue()
{
    Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfTransientTransient::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_DataMapOfTransientTransient::Iterator::Key()
{
    Handle(::Standard_Transient) _result = ((::TColStd_DataMapOfTransientTransient::Iterator*)_NativeInstance)->Key();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAsciiString
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfAsciiString::TColStd_SequenceOfAsciiString()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfAsciiString();
}

Macad::Occt::TColStd_SequenceOfAsciiString::TColStd_SequenceOfAsciiString(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_SequenceOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfAsciiString(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TColStd_SequenceOfAsciiString::Size()
{
    int _result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfAsciiString::Length()
{
    int _result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfAsciiString::Lower()
{
    int _result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfAsciiString::Upper()
{
    int _result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfAsciiString::IsEmpty()
{
    bool _result = ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
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

void Macad::Occt::TColStd_SequenceOfAsciiString::Remove(Macad::Occt::TColStd_SequenceOfAsciiString::Iterator^ thePosition)
{
    ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Remove(*(::TColStd_SequenceOfAsciiString::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Append(Macad::Occt::TCollection_AsciiString^ theItem)
{
    ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Append(*(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Prepend(Macad::Occt::TCollection_AsciiString^ theItem)
{
    ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Prepend(*(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::InsertBefore(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem)
{
    ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->InsertBefore(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::InsertAfter(Macad::Occt::TColStd_SequenceOfAsciiString::Iterator^ thePosition, Macad::Occt::TCollection_AsciiString^ theItem)
{
    ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfAsciiString::Iterator*)thePosition->NativeInstance, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Split(int theIndex, Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq)
{
    ((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfAsciiString*)theSeq->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_SequenceOfAsciiString::First()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TColStd_SequenceOfAsciiString*)_NativeInstance)->First();
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
    *_result = (::TCollection_AsciiString)((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Last();
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
    *_result = (::TCollection_AsciiString)((::TColStd_SequenceOfAsciiString*)_NativeInstance)->Value(theIndex);
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

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_AsciiString^>^ Macad::Occt::TColStd_SequenceOfAsciiString::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_AsciiString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_SequenceOfAsciiString::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_AsciiString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAsciiString::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfAsciiString::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfAsciiString::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfAsciiString::Iterator();
}

bool Macad::Occt::TColStd_SequenceOfAsciiString::Iterator::More()
{
    bool _result = ((::TColStd_SequenceOfAsciiString::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_SequenceOfAsciiString::Iterator::Next()
{
    ((::TColStd_SequenceOfAsciiString::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_SequenceOfAsciiString::Iterator::Value()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TColStd_SequenceOfAsciiString::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_SequenceOfAsciiString::Iterator::ChangeValue()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TColStd_SequenceOfAsciiString::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::TColStd_SequenceOfAsciiString::Iterator::IsEqual(Macad::Occt::TColStd_SequenceOfAsciiString::Iterator^ theOther)
{
    bool _result = ((::TColStd_SequenceOfAsciiString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfAsciiString::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfAsciiString::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_SequenceOfAsciiString::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfExtendedString
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfExtendedString::TColStd_SequenceOfExtendedString()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfExtendedString();
}

Macad::Occt::TColStd_SequenceOfExtendedString::TColStd_SequenceOfExtendedString(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_SequenceOfExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfExtendedString(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TColStd_SequenceOfExtendedString::Size()
{
    int _result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfExtendedString::Length()
{
    int _result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfExtendedString::Lower()
{
    int _result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfExtendedString::Upper()
{
    int _result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfExtendedString::IsEmpty()
{
    bool _result = ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
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

void Macad::Occt::TColStd_SequenceOfExtendedString::Remove(Macad::Occt::TColStd_SequenceOfExtendedString::Iterator^ thePosition)
{
    ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Remove(*(::TColStd_SequenceOfExtendedString::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Append(Macad::Occt::TCollection_ExtendedString^ theItem)
{
    ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Append(*(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Prepend(Macad::Occt::TCollection_ExtendedString^ theItem)
{
    ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Prepend(*(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::InsertBefore(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem)
{
    ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->InsertBefore(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::InsertAfter(Macad::Occt::TColStd_SequenceOfExtendedString::Iterator^ thePosition, Macad::Occt::TCollection_ExtendedString^ theItem)
{
    ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfExtendedString::Iterator*)thePosition->NativeInstance, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Split(int theIndex, Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq)
{
    ((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfExtendedString*)theSeq->NativeInstance);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_SequenceOfExtendedString::First()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::TColStd_SequenceOfExtendedString*)_NativeInstance)->First();
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
    *_result = (::TCollection_ExtendedString)((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Last();
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
    *_result = (::TCollection_ExtendedString)((::TColStd_SequenceOfExtendedString*)_NativeInstance)->Value(theIndex);
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

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_ExtendedString^>^ Macad::Occt::TColStd_SequenceOfExtendedString::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_ExtendedString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_SequenceOfExtendedString::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_ExtendedString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfExtendedString::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfExtendedString::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfExtendedString::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfExtendedString::Iterator();
}

bool Macad::Occt::TColStd_SequenceOfExtendedString::Iterator::More()
{
    bool _result = ((::TColStd_SequenceOfExtendedString::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_SequenceOfExtendedString::Iterator::Next()
{
    ((::TColStd_SequenceOfExtendedString::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_SequenceOfExtendedString::Iterator::Value()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::TColStd_SequenceOfExtendedString::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_SequenceOfExtendedString::Iterator::ChangeValue()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = ((::TColStd_SequenceOfExtendedString::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

bool Macad::Occt::TColStd_SequenceOfExtendedString::Iterator::IsEqual(Macad::Occt::TColStd_SequenceOfExtendedString::Iterator^ theOther)
{
    bool _result = ((::TColStd_SequenceOfExtendedString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfExtendedString::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfExtendedString::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_SequenceOfExtendedString::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHAsciiString
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfHAsciiString::TColStd_SequenceOfHAsciiString()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfHAsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfHAsciiString();
}

Macad::Occt::TColStd_SequenceOfHAsciiString::TColStd_SequenceOfHAsciiString(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_SequenceOfHAsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfHAsciiString(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TColStd_SequenceOfHAsciiString::Size()
{
    int _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfHAsciiString::Length()
{
    int _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfHAsciiString::Lower()
{
    int _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfHAsciiString::Upper()
{
    int _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfHAsciiString::IsEmpty()
{
    bool _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
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

void Macad::Occt::TColStd_SequenceOfHAsciiString::Remove(Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator^ thePosition)
{
    ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Remove(*(::TColStd_SequenceOfHAsciiString::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Append(Macad::Occt::TCollection_HAsciiString^ theItem)
{
    ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Append(Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Prepend(Macad::Occt::TCollection_HAsciiString^ theItem)
{
    ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Prepend(Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::InsertBefore(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem)
{
    ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->InsertBefore(theIndex, Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::InsertAfter(Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator^ thePosition, Macad::Occt::TCollection_HAsciiString^ theItem)
{
    ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfHAsciiString::Iterator*)thePosition->NativeInstance, Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Split(int theIndex, Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq)
{
    ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfHAsciiString*)theSeq->NativeInstance);
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::First()
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::ChangeFirst()
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::Last()
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::ChangeLast()
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::Value(int theIndex)
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::ChangeValue(int theIndex)
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::SetValue(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem)
{
    ((::TColStd_SequenceOfHAsciiString*)_NativeInstance)->SetValue(theIndex, Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_HAsciiString^>^ Macad::Occt::TColStd_SequenceOfHAsciiString::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_HAsciiString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_SequenceOfHAsciiString::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_HAsciiString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHAsciiString::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfHAsciiString::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfHAsciiString::Iterator();
}

bool Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator::More()
{
    bool _result = ((::TColStd_SequenceOfHAsciiString::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator::Next()
{
    ((::TColStd_SequenceOfHAsciiString::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator::Value()
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator::ChangeValue()
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_SequenceOfHAsciiString::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

bool Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator::IsEqual(Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator^ theOther)
{
    bool _result = ((::TColStd_SequenceOfHAsciiString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfHAsciiString::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_SequenceOfHAsciiString::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHExtendedString
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfHExtendedString::TColStd_SequenceOfHExtendedString()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfHExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfHExtendedString();
}

Macad::Occt::TColStd_SequenceOfHExtendedString::TColStd_SequenceOfHExtendedString(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_SequenceOfHExtendedString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfHExtendedString(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TColStd_SequenceOfHExtendedString::Size()
{
    int _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfHExtendedString::Length()
{
    int _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfHExtendedString::Lower()
{
    int _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfHExtendedString::Upper()
{
    int _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfHExtendedString::IsEmpty()
{
    bool _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
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

void Macad::Occt::TColStd_SequenceOfHExtendedString::Remove(Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator^ thePosition)
{
    ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Remove(*(::TColStd_SequenceOfHExtendedString::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Append(Macad::Occt::TCollection_HExtendedString^ theItem)
{
    ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Append(Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Prepend(Macad::Occt::TCollection_HExtendedString^ theItem)
{
    ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Prepend(Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::InsertBefore(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem)
{
    ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->InsertBefore(theIndex, Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::InsertAfter(Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator^ thePosition, Macad::Occt::TCollection_HExtendedString^ theItem)
{
    ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfHExtendedString::Iterator*)thePosition->NativeInstance, Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Split(int theIndex, Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq)
{
    ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfHExtendedString*)theSeq->NativeInstance);
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::First()
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::ChangeFirst()
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::Last()
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::ChangeLast()
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::Value(int theIndex)
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::ChangeValue(int theIndex)
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::SetValue(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem)
{
    ((::TColStd_SequenceOfHExtendedString*)_NativeInstance)->SetValue(theIndex, Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_HExtendedString^>^ Macad::Occt::TColStd_SequenceOfHExtendedString::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_HExtendedString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_SequenceOfHExtendedString::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_HExtendedString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHExtendedString::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfHExtendedString::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfHExtendedString::Iterator();
}

bool Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator::More()
{
    bool _result = ((::TColStd_SequenceOfHExtendedString::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator::Next()
{
    ((::TColStd_SequenceOfHExtendedString::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator::Value()
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator::ChangeValue()
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_SequenceOfHExtendedString::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

bool Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator::IsEqual(Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator^ theOther)
{
    bool _result = ((::TColStd_SequenceOfHExtendedString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfHExtendedString::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_SequenceOfHExtendedString::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfInteger::TColStd_SequenceOfInteger()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfInteger();
}

Macad::Occt::TColStd_SequenceOfInteger::TColStd_SequenceOfInteger(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_SequenceOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfInteger(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TColStd_SequenceOfInteger::Size()
{
    int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfInteger::Length()
{
    int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfInteger::Lower()
{
    int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfInteger::Upper()
{
    int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfInteger::IsEmpty()
{
    bool _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_SequenceOfInteger*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
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

void Macad::Occt::TColStd_SequenceOfInteger::Remove(Macad::Occt::TColStd_SequenceOfInteger::Iterator^ thePosition)
{
    ((::TColStd_SequenceOfInteger*)_NativeInstance)->Remove(*(::TColStd_SequenceOfInteger::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfInteger::Append(int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    ((::TColStd_SequenceOfInteger*)_NativeInstance)->Append(*(int*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfInteger::Prepend(int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    ((::TColStd_SequenceOfInteger*)_NativeInstance)->Prepend(*(int*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfInteger::InsertBefore(int theIndex, int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    ((::TColStd_SequenceOfInteger*)_NativeInstance)->InsertBefore(theIndex, *(int*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfInteger::InsertAfter(Macad::Occt::TColStd_SequenceOfInteger::Iterator^ thePosition, int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    ((::TColStd_SequenceOfInteger*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfInteger::Iterator*)thePosition->NativeInstance, *(int*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfInteger::Split(int theIndex, Macad::Occt::TColStd_SequenceOfInteger^ theSeq)
{
    ((::TColStd_SequenceOfInteger*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfInteger*)theSeq->NativeInstance);
}

int Macad::Occt::TColStd_SequenceOfInteger::First()
{
    int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->First();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfInteger::Last()
{
    int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Last();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfInteger::Value(int theIndex)
{
    int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->Value(theIndex);
    return _result;
}

int Macad::Occt::TColStd_SequenceOfInteger::ChangeValue(int theIndex)
{
    int _result = ((::TColStd_SequenceOfInteger*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TColStd_SequenceOfInteger::SetValue(int theIndex, int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    ((::TColStd_SequenceOfInteger*)_NativeInstance)->SetValue(theIndex, *(int*)pp_theItem);
}

System::Collections::Generic::IEnumerator<int>^ Macad::Occt::TColStd_SequenceOfInteger::GetEnumerator()
{
    return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_SequenceOfInteger::GetEnumerator2()
{
    return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfInteger::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfInteger::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfInteger::Iterator();
}

bool Macad::Occt::TColStd_SequenceOfInteger::Iterator::More()
{
    bool _result = ((::TColStd_SequenceOfInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_SequenceOfInteger::Iterator::Next()
{
    ((::TColStd_SequenceOfInteger::Iterator*)_NativeInstance)->Next();
}

int Macad::Occt::TColStd_SequenceOfInteger::Iterator::Value()
{
    int _result = ((::TColStd_SequenceOfInteger::Iterator*)_NativeInstance)->Value();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfInteger::Iterator::IsEqual(Macad::Occt::TColStd_SequenceOfInteger::Iterator^ theOther)
{
    bool _result = ((::TColStd_SequenceOfInteger::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfInteger::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfInteger::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_SequenceOfInteger::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfReal::TColStd_SequenceOfReal()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfReal();
}

Macad::Occt::TColStd_SequenceOfReal::TColStd_SequenceOfReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_SequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfReal(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TColStd_SequenceOfReal::Size()
{
    int _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfReal::Length()
{
    int _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfReal::Lower()
{
    int _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfReal::Upper()
{
    int _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfReal::IsEmpty()
{
    bool _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_SequenceOfReal*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
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

void Macad::Occt::TColStd_SequenceOfReal::Remove(Macad::Occt::TColStd_SequenceOfReal::Iterator^ thePosition)
{
    ((::TColStd_SequenceOfReal*)_NativeInstance)->Remove(*(::TColStd_SequenceOfReal::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfReal::Append(double theItem)
{
    pin_ptr<double> pp_theItem = &theItem;
    ((::TColStd_SequenceOfReal*)_NativeInstance)->Append(*(double*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfReal::Prepend(double theItem)
{
    pin_ptr<double> pp_theItem = &theItem;
    ((::TColStd_SequenceOfReal*)_NativeInstance)->Prepend(*(double*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfReal::InsertBefore(int theIndex, double theItem)
{
    pin_ptr<double> pp_theItem = &theItem;
    ((::TColStd_SequenceOfReal*)_NativeInstance)->InsertBefore(theIndex, *(double*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfReal::InsertAfter(Macad::Occt::TColStd_SequenceOfReal::Iterator^ thePosition, double theItem)
{
    pin_ptr<double> pp_theItem = &theItem;
    ((::TColStd_SequenceOfReal*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfReal::Iterator*)thePosition->NativeInstance, *(double*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfReal::Split(int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theSeq)
{
    ((::TColStd_SequenceOfReal*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfReal*)theSeq->NativeInstance);
}

double Macad::Occt::TColStd_SequenceOfReal::First()
{
    double _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->First();
    return _result;
}

double Macad::Occt::TColStd_SequenceOfReal::Last()
{
    double _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Last();
    return _result;
}

double Macad::Occt::TColStd_SequenceOfReal::Value(int theIndex)
{
    double _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->Value(theIndex);
    return _result;
}

double Macad::Occt::TColStd_SequenceOfReal::ChangeValue(int theIndex)
{
    double _result = ((::TColStd_SequenceOfReal*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TColStd_SequenceOfReal::SetValue(int theIndex, double theItem)
{
    pin_ptr<double> pp_theItem = &theItem;
    ((::TColStd_SequenceOfReal*)_NativeInstance)->SetValue(theIndex, *(double*)pp_theItem);
}

System::Collections::Generic::IEnumerator<double>^ Macad::Occt::TColStd_SequenceOfReal::GetEnumerator()
{
    return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_SequenceOfReal::GetEnumerator2()
{
    return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfReal::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfReal::Iterator();
}

bool Macad::Occt::TColStd_SequenceOfReal::Iterator::More()
{
    bool _result = ((::TColStd_SequenceOfReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_SequenceOfReal::Iterator::Next()
{
    ((::TColStd_SequenceOfReal::Iterator*)_NativeInstance)->Next();
}

double Macad::Occt::TColStd_SequenceOfReal::Iterator::Value()
{
    double _result = ((::TColStd_SequenceOfReal::Iterator*)_NativeInstance)->Value();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfReal::Iterator::IsEqual(Macad::Occt::TColStd_SequenceOfReal::Iterator^ theOther)
{
    bool _result = ((::TColStd_SequenceOfReal::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfReal::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfReal::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_SequenceOfReal::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfTransient::TColStd_SequenceOfTransient()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfTransient();
}

Macad::Occt::TColStd_SequenceOfTransient::TColStd_SequenceOfTransient(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_SequenceOfTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfTransient(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TColStd_SequenceOfTransient::Size()
{
    int _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfTransient::Length()
{
    int _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfTransient::Lower()
{
    int _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfTransient::Upper()
{
    int _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfTransient::IsEmpty()
{
    bool _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_SequenceOfTransient*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
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

void Macad::Occt::TColStd_SequenceOfTransient::Remove(Macad::Occt::TColStd_SequenceOfTransient::Iterator^ thePosition)
{
    ((::TColStd_SequenceOfTransient*)_NativeInstance)->Remove(*(::TColStd_SequenceOfTransient::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfTransient::Append(Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_SequenceOfTransient*)_NativeInstance)->Append(Handle(::Standard_Transient)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_SequenceOfTransient::Prepend(Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_SequenceOfTransient*)_NativeInstance)->Prepend(Handle(::Standard_Transient)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_SequenceOfTransient::InsertBefore(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_SequenceOfTransient*)_NativeInstance)->InsertBefore(theIndex, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_SequenceOfTransient::InsertAfter(Macad::Occt::TColStd_SequenceOfTransient::Iterator^ thePosition, Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_SequenceOfTransient*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfTransient::Iterator*)thePosition->NativeInstance, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_SequenceOfTransient::Split(int theIndex, Macad::Occt::TColStd_SequenceOfTransient^ theSeq)
{
    ((::TColStd_SequenceOfTransient*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfTransient*)theSeq->NativeInstance);
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::First()
{
    Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::ChangeFirst()
{
    Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::Last()
{
    Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::ChangeLast()
{
    Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::Value(int theIndex)
{
    Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::ChangeValue(int theIndex)
{
    Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_SequenceOfTransient::SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_SequenceOfTransient*)_NativeInstance)->SetValue(theIndex, Handle(::Standard_Transient)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::Standard_Transient^>^ Macad::Occt::TColStd_SequenceOfTransient::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Standard_Transient^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_SequenceOfTransient::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Standard_Transient^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfTransient::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfTransient::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfTransient::Iterator();
}

bool Macad::Occt::TColStd_SequenceOfTransient::Iterator::More()
{
    bool _result = ((::TColStd_SequenceOfTransient::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_SequenceOfTransient::Iterator::Next()
{
    ((::TColStd_SequenceOfTransient::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::Iterator::Value()
{
    Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_SequenceOfTransient::Iterator::ChangeValue()
{
    Handle(::Standard_Transient) _result = ((::TColStd_SequenceOfTransient::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

bool Macad::Occt::TColStd_SequenceOfTransient::Iterator::IsEqual(Macad::Occt::TColStd_SequenceOfTransient::Iterator^ theOther)
{
    bool _result = ((::TColStd_SequenceOfTransient::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfTransient::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfTransient::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_SequenceOfTransient::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfAsciiString
//---------------------------------------------------------------------

Macad::Occt::TColStd_ListOfAsciiString::TColStd_ListOfAsciiString()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_ListOfAsciiString();
}

Macad::Occt::TColStd_ListOfAsciiString::TColStd_ListOfAsciiString(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_ListOfAsciiString(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TColStd_ListOfAsciiString::Size()
{
    int _result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::TColStd_ListOfAsciiString^ Macad::Occt::TColStd_ListOfAsciiString::Assign(Macad::Occt::TColStd_ListOfAsciiString^ theOther)
{
    ::TColStd_ListOfAsciiString* _result = new ::TColStd_ListOfAsciiString();
    *_result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->Assign(*(::TColStd_ListOfAsciiString*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfAsciiString(_result);
}

void Macad::Occt::TColStd_ListOfAsciiString::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColStd_ListOfAsciiString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TColStd_ListOfAsciiString::Clear()
{
    ((::TColStd_ListOfAsciiString*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_ListOfAsciiString::First()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TColStd_ListOfAsciiString*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_ListOfAsciiString::Last()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TColStd_ListOfAsciiString*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_ListOfAsciiString::Append(Macad::Occt::TCollection_AsciiString^ theItem)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->Append(*(::TCollection_AsciiString*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_ListOfAsciiString::Prepend(Macad::Occt::TCollection_AsciiString^ theItem)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->Prepend(*(::TCollection_AsciiString*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::TColStd_ListOfAsciiString::RemoveFirst()
{
    ((::TColStd_ListOfAsciiString*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::TColStd_ListOfAsciiString::Remove(Macad::Occt::TColStd_ListOfAsciiString::Iterator^ theIter)
{
    ((::TColStd_ListOfAsciiString*)_NativeInstance)->Remove(*(::TColStd_ListOfAsciiString::Iterator*)theIter->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_ListOfAsciiString::InsertBefore(Macad::Occt::TCollection_AsciiString^ theItem, Macad::Occt::TColStd_ListOfAsciiString::Iterator^ theIter)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->InsertBefore(*(::TCollection_AsciiString*)theItem->NativeInstance, *(::TColStd_ListOfAsciiString::Iterator*)theIter->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_ListOfAsciiString::InsertAfter(Macad::Occt::TCollection_AsciiString^ theItem, Macad::Occt::TColStd_ListOfAsciiString::Iterator^ theIter)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TColStd_ListOfAsciiString*)_NativeInstance)->InsertAfter(*(::TCollection_AsciiString*)theItem->NativeInstance, *(::TColStd_ListOfAsciiString::Iterator*)theIter->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::TColStd_ListOfAsciiString::Reverse()
{
    ((::TColStd_ListOfAsciiString*)_NativeInstance)->Reverse();
}

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_AsciiString^>^ Macad::Occt::TColStd_ListOfAsciiString::GetEnumerator()
{
    return gcnew Macad::Occt::TColStd_ListOfAsciiString::Iterator(new ::TColStd_ListOfAsciiString::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_ListOfAsciiString::GetEnumerator2()
{
    return gcnew Macad::Occt::TColStd_ListOfAsciiString::Iterator(new ::TColStd_ListOfAsciiString::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfAsciiString::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_ListOfAsciiString::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<Macad::Occt::TCollection_AsciiString^, ::TColStd_ListOfAsciiString::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_ListOfAsciiString::Iterator();
}

bool Macad::Occt::TColStd_ListOfAsciiString::Iterator::More()
{
    bool _result = ((::TColStd_ListOfAsciiString::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_ListOfAsciiString::Iterator::Next()
{
    ((::TColStd_ListOfAsciiString::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_ListOfAsciiString::Iterator::Value()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TColStd_ListOfAsciiString::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_ListOfAsciiString::Iterator::ChangeValue()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TColStd_ListOfAsciiString::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_ListOfReal::TColStd_ListOfReal()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_ListOfReal();
}

Macad::Occt::TColStd_ListOfReal::TColStd_ListOfReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_ListOfReal(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TColStd_ListOfReal::Size()
{
    int _result = ((::TColStd_ListOfReal*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::TColStd_ListOfReal^ Macad::Occt::TColStd_ListOfReal::Assign(Macad::Occt::TColStd_ListOfReal^ theOther)
{
    ::TColStd_ListOfReal* _result = new ::TColStd_ListOfReal();
    *_result = ((::TColStd_ListOfReal*)_NativeInstance)->Assign(*(::TColStd_ListOfReal*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfReal(_result);
}

void Macad::Occt::TColStd_ListOfReal::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColStd_ListOfReal*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TColStd_ListOfReal::Clear()
{
    ((::TColStd_ListOfReal*)_NativeInstance)->Clear(0L);
}

double Macad::Occt::TColStd_ListOfReal::First()
{
    double _result = ((::TColStd_ListOfReal*)_NativeInstance)->First();
    return _result;
}

double Macad::Occt::TColStd_ListOfReal::Last()
{
    double _result = ((::TColStd_ListOfReal*)_NativeInstance)->Last();
    return _result;
}

double Macad::Occt::TColStd_ListOfReal::Append(double theItem)
{
    pin_ptr<double> pp_theItem = &theItem;
    double _result = ((::TColStd_ListOfReal*)_NativeInstance)->Append(*(double*)pp_theItem);
    return _result;
}

double Macad::Occt::TColStd_ListOfReal::Prepend(double theItem)
{
    pin_ptr<double> pp_theItem = &theItem;
    double _result = ((::TColStd_ListOfReal*)_NativeInstance)->Prepend(*(double*)pp_theItem);
    return _result;
}

void Macad::Occt::TColStd_ListOfReal::RemoveFirst()
{
    ((::TColStd_ListOfReal*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::TColStd_ListOfReal::Remove(Macad::Occt::TColStd_ListOfReal::Iterator^ theIter)
{
    ((::TColStd_ListOfReal*)_NativeInstance)->Remove(*(::TColStd_ListOfReal::Iterator*)theIter->NativeInstance);
}

double Macad::Occt::TColStd_ListOfReal::InsertBefore(double theItem, Macad::Occt::TColStd_ListOfReal::Iterator^ theIter)
{
    pin_ptr<double> pp_theItem = &theItem;
    double _result = ((::TColStd_ListOfReal*)_NativeInstance)->InsertBefore(*(double*)pp_theItem, *(::TColStd_ListOfReal::Iterator*)theIter->NativeInstance);
    return _result;
}

double Macad::Occt::TColStd_ListOfReal::InsertAfter(double theItem, Macad::Occt::TColStd_ListOfReal::Iterator^ theIter)
{
    pin_ptr<double> pp_theItem = &theItem;
    double _result = ((::TColStd_ListOfReal*)_NativeInstance)->InsertAfter(*(double*)pp_theItem, *(::TColStd_ListOfReal::Iterator*)theIter->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_ListOfReal::Reverse()
{
    ((::TColStd_ListOfReal*)_NativeInstance)->Reverse();
}

System::Collections::Generic::IEnumerator<double>^ Macad::Occt::TColStd_ListOfReal::GetEnumerator()
{
    return gcnew Macad::Occt::TColStd_ListOfReal::Iterator(new ::TColStd_ListOfReal::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_ListOfReal::GetEnumerator2()
{
    return gcnew Macad::Occt::TColStd_ListOfReal::Iterator(new ::TColStd_ListOfReal::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_ListOfReal::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<double, ::TColStd_ListOfReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_ListOfReal::Iterator();
}

bool Macad::Occt::TColStd_ListOfReal::Iterator::More()
{
    bool _result = ((::TColStd_ListOfReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_ListOfReal::Iterator::Next()
{
    ((::TColStd_ListOfReal::Iterator*)_NativeInstance)->Next();
}

double Macad::Occt::TColStd_ListOfReal::Iterator::Value()
{
    double _result = ((::TColStd_ListOfReal::Iterator*)_NativeInstance)->Value();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_ListOfTransient::TColStd_ListOfTransient()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_ListOfTransient();
}

Macad::Occt::TColStd_ListOfTransient::TColStd_ListOfTransient(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_ListOfTransient(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TColStd_ListOfTransient::Size()
{
    int _result = ((::TColStd_ListOfTransient*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::TColStd_ListOfTransient^ Macad::Occt::TColStd_ListOfTransient::Assign(Macad::Occt::TColStd_ListOfTransient^ theOther)
{
    ::TColStd_ListOfTransient* _result = new ::TColStd_ListOfTransient();
    *_result = ((::TColStd_ListOfTransient*)_NativeInstance)->Assign(*(::TColStd_ListOfTransient*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfTransient(_result);
}

void Macad::Occt::TColStd_ListOfTransient::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColStd_ListOfTransient*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TColStd_ListOfTransient::Clear()
{
    ((::TColStd_ListOfTransient*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_ListOfTransient::First()
{
    Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_ListOfTransient::Last()
{
    Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_ListOfTransient::Append(Macad::Occt::Standard_Transient^ theItem)
{
    Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient*)_NativeInstance)->Append(Handle(::Standard_Transient)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_ListOfTransient::Prepend(Macad::Occt::Standard_Transient^ theItem)
{
    Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient*)_NativeInstance)->Prepend(Handle(::Standard_Transient)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_ListOfTransient::RemoveFirst()
{
    ((::TColStd_ListOfTransient*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::TColStd_ListOfTransient::Remove(Macad::Occt::TColStd_ListOfTransient::Iterator^ theIter)
{
    ((::TColStd_ListOfTransient*)_NativeInstance)->Remove(*(::TColStd_ListOfTransient::Iterator*)theIter->NativeInstance);
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_ListOfTransient::InsertBefore(Macad::Occt::Standard_Transient^ theItem, Macad::Occt::TColStd_ListOfTransient::Iterator^ theIter)
{
    Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient*)_NativeInstance)->InsertBefore(Handle(::Standard_Transient)(theItem->NativeInstance), *(::TColStd_ListOfTransient::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_ListOfTransient::InsertAfter(Macad::Occt::Standard_Transient^ theItem, Macad::Occt::TColStd_ListOfTransient::Iterator^ theIter)
{
    Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient*)_NativeInstance)->InsertAfter(Handle(::Standard_Transient)(theItem->NativeInstance), *(::TColStd_ListOfTransient::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_ListOfTransient::Reverse()
{
    ((::TColStd_ListOfTransient*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  TColStd_ListOfTransient::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_ListOfTransient::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_ListOfTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_ListOfTransient::Iterator();
}

bool Macad::Occt::TColStd_ListOfTransient::Iterator::More()
{
    bool _result = ((::TColStd_ListOfTransient::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_ListOfTransient::Iterator::Next()
{
    ((::TColStd_ListOfTransient::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_ListOfTransient::Iterator::Value()
{
    Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_ListOfTransient::Iterator::ChangeValue()
{
    Handle(::Standard_Transient) _result = ((::TColStd_ListOfTransient::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfAsciiString
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapOfAsciiString::TColStd_MapOfAsciiString()
    : Macad::Occt::BaseClass<::TColStd_MapOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfAsciiString();
}

Macad::Occt::TColStd_MapOfAsciiString::TColStd_MapOfAsciiString(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_MapOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfAsciiString(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TColStd_MapOfAsciiString::TColStd_MapOfAsciiString(int theNbBuckets)
    : Macad::Occt::BaseClass<::TColStd_MapOfAsciiString>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfAsciiString(theNbBuckets, 0L);
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

void Macad::Occt::TColStd_MapOfAsciiString::ReSize(int N)
{
    ((::TColStd_MapOfAsciiString*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TColStd_MapOfAsciiString::Add(Macad::Occt::TCollection_AsciiString^ theKey)
{
    bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Add(*(::TCollection_AsciiString*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_MapOfAsciiString::Added(Macad::Occt::TCollection_AsciiString^ theKey)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TColStd_MapOfAsciiString*)_NativeInstance)->Added(*(::TCollection_AsciiString*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::TColStd_MapOfAsciiString::Contains(Macad::Occt::TCollection_AsciiString^ theKey)
{
    bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Contains(*(::TCollection_AsciiString*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_MapOfAsciiString::Remove(Macad::Occt::TCollection_AsciiString^ K)
{
    bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Remove(*(::TCollection_AsciiString*)K->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfAsciiString::Clear(bool doReleaseMemory)
{
    ((::TColStd_MapOfAsciiString*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_MapOfAsciiString::Clear()
{
    ((::TColStd_MapOfAsciiString*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TColStd_MapOfAsciiString::Size()
{
    int _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Size();
    return _result;
}

bool Macad::Occt::TColStd_MapOfAsciiString::IsEqual(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
{
    bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->IsEqual(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfAsciiString::Union(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight)
{
    ((::TColStd_MapOfAsciiString*)_NativeInstance)->Union(*(::TColStd_MapOfAsciiString*)theLeft->NativeInstance, *(::TColStd_MapOfAsciiString*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfAsciiString::Unite(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
{
    bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Unite(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_MapOfAsciiString::HasIntersection(Macad::Occt::TColStd_MapOfAsciiString^ theMap)
{
    bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->HasIntersection(*(::TColStd_MapOfAsciiString*)theMap->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfAsciiString::Intersection(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight)
{
    ((::TColStd_MapOfAsciiString*)_NativeInstance)->Intersection(*(::TColStd_MapOfAsciiString*)theLeft->NativeInstance, *(::TColStd_MapOfAsciiString*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfAsciiString::Intersect(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
{
    bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Intersect(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfAsciiString::Subtraction(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight)
{
    ((::TColStd_MapOfAsciiString*)_NativeInstance)->Subtraction(*(::TColStd_MapOfAsciiString*)theLeft->NativeInstance, *(::TColStd_MapOfAsciiString*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfAsciiString::Subtract(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
{
    bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Subtract(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfAsciiString::Difference(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight)
{
    ((::TColStd_MapOfAsciiString*)_NativeInstance)->Difference(*(::TColStd_MapOfAsciiString*)theLeft->NativeInstance, *(::TColStd_MapOfAsciiString*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfAsciiString::Differ(Macad::Occt::TColStd_MapOfAsciiString^ theOther)
{
    bool _result = ((::TColStd_MapOfAsciiString*)_NativeInstance)->Differ(*(::TColStd_MapOfAsciiString*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_MapOfAsciiString::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_MapOfAsciiString::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TColStd_MapOfAsciiString^)obj)->NativeInstance);
    }
    return false;
}

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_AsciiString^>^ Macad::Occt::TColStd_MapOfAsciiString::GetEnumerator()
{
    return gcnew Macad::Occt::TColStd_MapOfAsciiString::Iterator(new ::TColStd_MapOfAsciiString::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_MapOfAsciiString::GetEnumerator2()
{
    return gcnew Macad::Occt::TColStd_MapOfAsciiString::Iterator(new ::TColStd_MapOfAsciiString::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfAsciiString::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapOfAsciiString::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<Macad::Occt::TCollection_AsciiString^, ::TColStd_MapOfAsciiString::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfAsciiString::Iterator();
}

bool Macad::Occt::TColStd_MapOfAsciiString::Iterator::More()
{
    bool _result = ((::TColStd_MapOfAsciiString::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_MapOfAsciiString::Iterator::Next()
{
    ((::TColStd_MapOfAsciiString::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_MapOfAsciiString::Iterator::Value()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TColStd_MapOfAsciiString::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_MapOfAsciiString::Iterator::Key()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TColStd_MapOfAsciiString::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapOfInteger::TColStd_MapOfInteger()
    : Macad::Occt::BaseClass<::TColStd_MapOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfInteger();
}

Macad::Occt::TColStd_MapOfInteger::TColStd_MapOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_MapOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TColStd_MapOfInteger::TColStd_MapOfInteger(int theNbBuckets)
    : Macad::Occt::BaseClass<::TColStd_MapOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfInteger(theNbBuckets, 0L);
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

void Macad::Occt::TColStd_MapOfInteger::ReSize(int N)
{
    ((::TColStd_MapOfInteger*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TColStd_MapOfInteger::Add(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Add(*(int*)pp_theKey);
    return _result;
}

int Macad::Occt::TColStd_MapOfInteger::Added(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    int _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Added(*(int*)pp_theKey);
    return _result;
}

bool Macad::Occt::TColStd_MapOfInteger::Contains(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Contains(*(int*)pp_theKey);
    return _result;
}

bool Macad::Occt::TColStd_MapOfInteger::Remove(int K)
{
    pin_ptr<int> pp_K = &K;
    bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Remove(*(int*)pp_K);
    return _result;
}

void Macad::Occt::TColStd_MapOfInteger::Clear(bool doReleaseMemory)
{
    ((::TColStd_MapOfInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_MapOfInteger::Clear()
{
    ((::TColStd_MapOfInteger*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TColStd_MapOfInteger::Size()
{
    int _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Size();
    return _result;
}

bool Macad::Occt::TColStd_MapOfInteger::IsEqual(Macad::Occt::TColStd_MapOfInteger^ theOther)
{
    bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->IsEqual(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfInteger::Union(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight)
{
    ((::TColStd_MapOfInteger*)_NativeInstance)->Union(*(::TColStd_MapOfInteger*)theLeft->NativeInstance, *(::TColStd_MapOfInteger*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfInteger::Unite(Macad::Occt::TColStd_MapOfInteger^ theOther)
{
    bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Unite(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_MapOfInteger::HasIntersection(Macad::Occt::TColStd_MapOfInteger^ theMap)
{
    bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->HasIntersection(*(::TColStd_MapOfInteger*)theMap->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfInteger::Intersection(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight)
{
    ((::TColStd_MapOfInteger*)_NativeInstance)->Intersection(*(::TColStd_MapOfInteger*)theLeft->NativeInstance, *(::TColStd_MapOfInteger*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfInteger::Intersect(Macad::Occt::TColStd_MapOfInteger^ theOther)
{
    bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Intersect(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfInteger::Subtraction(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight)
{
    ((::TColStd_MapOfInteger*)_NativeInstance)->Subtraction(*(::TColStd_MapOfInteger*)theLeft->NativeInstance, *(::TColStd_MapOfInteger*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfInteger::Subtract(Macad::Occt::TColStd_MapOfInteger^ theOther)
{
    bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Subtract(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfInteger::Difference(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight)
{
    ((::TColStd_MapOfInteger*)_NativeInstance)->Difference(*(::TColStd_MapOfInteger*)theLeft->NativeInstance, *(::TColStd_MapOfInteger*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfInteger::Differ(Macad::Occt::TColStd_MapOfInteger^ theOther)
{
    bool _result = ((::TColStd_MapOfInteger*)_NativeInstance)->Differ(*(::TColStd_MapOfInteger*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_MapOfInteger::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_MapOfInteger::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TColStd_MapOfInteger^)obj)->NativeInstance);
    }
    return false;
}

System::Collections::Generic::IEnumerator<int>^ Macad::Occt::TColStd_MapOfInteger::GetEnumerator()
{
    return gcnew Macad::Occt::TColStd_MapOfInteger::Iterator(new ::TColStd_MapOfInteger::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_MapOfInteger::GetEnumerator2()
{
    return gcnew Macad::Occt::TColStd_MapOfInteger::Iterator(new ::TColStd_MapOfInteger::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfInteger::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapOfInteger::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<int, ::TColStd_MapOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfInteger::Iterator();
}

bool Macad::Occt::TColStd_MapOfInteger::Iterator::More()
{
    bool _result = ((::TColStd_MapOfInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_MapOfInteger::Iterator::Next()
{
    ((::TColStd_MapOfInteger::Iterator*)_NativeInstance)->Next();
}

int Macad::Occt::TColStd_MapOfInteger::Iterator::Value()
{
    int _result = ((::TColStd_MapOfInteger::Iterator*)_NativeInstance)->Value();
    return _result;
}

int Macad::Occt::TColStd_MapOfInteger::Iterator::Key()
{
    int _result = ((::TColStd_MapOfInteger::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfReal
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapOfReal::TColStd_MapOfReal()
    : Macad::Occt::BaseClass<::TColStd_MapOfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfReal();
}

Macad::Occt::TColStd_MapOfReal::TColStd_MapOfReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_MapOfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfReal(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TColStd_MapOfReal::TColStd_MapOfReal(int theNbBuckets)
    : Macad::Occt::BaseClass<::TColStd_MapOfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfReal(theNbBuckets, 0L);
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

void Macad::Occt::TColStd_MapOfReal::ReSize(int N)
{
    ((::TColStd_MapOfReal*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TColStd_MapOfReal::Add(double theKey)
{
    pin_ptr<double> pp_theKey = &theKey;
    bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Add(*(double*)pp_theKey);
    return _result;
}

double Macad::Occt::TColStd_MapOfReal::Added(double theKey)
{
    pin_ptr<double> pp_theKey = &theKey;
    double _result = ((::TColStd_MapOfReal*)_NativeInstance)->Added(*(double*)pp_theKey);
    return _result;
}

bool Macad::Occt::TColStd_MapOfReal::Contains(double theKey)
{
    pin_ptr<double> pp_theKey = &theKey;
    bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Contains(*(double*)pp_theKey);
    return _result;
}

bool Macad::Occt::TColStd_MapOfReal::Remove(double K)
{
    pin_ptr<double> pp_K = &K;
    bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Remove(*(double*)pp_K);
    return _result;
}

void Macad::Occt::TColStd_MapOfReal::Clear(bool doReleaseMemory)
{
    ((::TColStd_MapOfReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_MapOfReal::Clear()
{
    ((::TColStd_MapOfReal*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TColStd_MapOfReal::Size()
{
    int _result = ((::TColStd_MapOfReal*)_NativeInstance)->Size();
    return _result;
}

bool Macad::Occt::TColStd_MapOfReal::IsEqual(Macad::Occt::TColStd_MapOfReal^ theOther)
{
    bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->IsEqual(*(::TColStd_MapOfReal*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfReal::Union(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight)
{
    ((::TColStd_MapOfReal*)_NativeInstance)->Union(*(::TColStd_MapOfReal*)theLeft->NativeInstance, *(::TColStd_MapOfReal*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfReal::Unite(Macad::Occt::TColStd_MapOfReal^ theOther)
{
    bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Unite(*(::TColStd_MapOfReal*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_MapOfReal::HasIntersection(Macad::Occt::TColStd_MapOfReal^ theMap)
{
    bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->HasIntersection(*(::TColStd_MapOfReal*)theMap->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfReal::Intersection(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight)
{
    ((::TColStd_MapOfReal*)_NativeInstance)->Intersection(*(::TColStd_MapOfReal*)theLeft->NativeInstance, *(::TColStd_MapOfReal*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfReal::Intersect(Macad::Occt::TColStd_MapOfReal^ theOther)
{
    bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Intersect(*(::TColStd_MapOfReal*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfReal::Subtraction(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight)
{
    ((::TColStd_MapOfReal*)_NativeInstance)->Subtraction(*(::TColStd_MapOfReal*)theLeft->NativeInstance, *(::TColStd_MapOfReal*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfReal::Subtract(Macad::Occt::TColStd_MapOfReal^ theOther)
{
    bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Subtract(*(::TColStd_MapOfReal*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfReal::Difference(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight)
{
    ((::TColStd_MapOfReal*)_NativeInstance)->Difference(*(::TColStd_MapOfReal*)theLeft->NativeInstance, *(::TColStd_MapOfReal*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfReal::Differ(Macad::Occt::TColStd_MapOfReal^ theOther)
{
    bool _result = ((::TColStd_MapOfReal*)_NativeInstance)->Differ(*(::TColStd_MapOfReal*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_MapOfReal::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_MapOfReal::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TColStd_MapOfReal^)obj)->NativeInstance);
    }
    return false;
}

System::Collections::Generic::IEnumerator<double>^ Macad::Occt::TColStd_MapOfReal::GetEnumerator()
{
    return gcnew Macad::Occt::TColStd_MapOfReal::Iterator(new ::TColStd_MapOfReal::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_MapOfReal::GetEnumerator2()
{
    return gcnew Macad::Occt::TColStd_MapOfReal::Iterator(new ::TColStd_MapOfReal::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapOfReal::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<double, ::TColStd_MapOfReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfReal::Iterator();
}

bool Macad::Occt::TColStd_MapOfReal::Iterator::More()
{
    bool _result = ((::TColStd_MapOfReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_MapOfReal::Iterator::Next()
{
    ((::TColStd_MapOfReal::Iterator*)_NativeInstance)->Next();
}

double Macad::Occt::TColStd_MapOfReal::Iterator::Value()
{
    double _result = ((::TColStd_MapOfReal::Iterator*)_NativeInstance)->Value();
    return _result;
}

double Macad::Occt::TColStd_MapOfReal::Iterator::Key()
{
    double _result = ((::TColStd_MapOfReal::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfTransient
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapOfTransient::TColStd_MapOfTransient()
    : Macad::Occt::BaseClass<::TColStd_MapOfTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfTransient();
}

Macad::Occt::TColStd_MapOfTransient::TColStd_MapOfTransient(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_MapOfTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfTransient(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TColStd_MapOfTransient::TColStd_MapOfTransient(int theNbBuckets)
    : Macad::Occt::BaseClass<::TColStd_MapOfTransient>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfTransient(theNbBuckets, 0L);
}

void Macad::Occt::TColStd_MapOfTransient::Exchange(Macad::Occt::TColStd_MapOfTransient^ theOther)
{
    ((::TColStd_MapOfTransient*)_NativeInstance)->Exchange(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
}

Macad::Occt::TColStd_MapOfTransient^ Macad::Occt::TColStd_MapOfTransient::Assign(Macad::Occt::TColStd_MapOfTransient^ theOther)
{
    ::TColStd_MapOfTransient* _result = new ::TColStd_MapOfTransient();
    *_result = ((::TColStd_MapOfTransient*)_NativeInstance)->Assign(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_MapOfTransient(_result);
}

void Macad::Occt::TColStd_MapOfTransient::ReSize(int N)
{
    ((::TColStd_MapOfTransient*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TColStd_MapOfTransient::Add(Macad::Occt::Standard_Transient^ theKey)
{
    bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Add(Handle(::Standard_Transient)(theKey->NativeInstance));
    return _result;
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_MapOfTransient::Added(Macad::Occt::Standard_Transient^ theKey)
{
    Handle(::Standard_Transient) _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Added(Handle(::Standard_Transient)(theKey->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

bool Macad::Occt::TColStd_MapOfTransient::Contains(Macad::Occt::Standard_Transient^ theKey)
{
    bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Contains(Handle(::Standard_Transient)(theKey->NativeInstance));
    return _result;
}

bool Macad::Occt::TColStd_MapOfTransient::Remove(Macad::Occt::Standard_Transient^ K)
{
    bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Remove(Handle(::Standard_Transient)(K->NativeInstance));
    return _result;
}

void Macad::Occt::TColStd_MapOfTransient::Clear(bool doReleaseMemory)
{
    ((::TColStd_MapOfTransient*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TColStd_MapOfTransient::Clear()
{
    ((::TColStd_MapOfTransient*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TColStd_MapOfTransient::Size()
{
    int _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Size();
    return _result;
}

bool Macad::Occt::TColStd_MapOfTransient::IsEqual(Macad::Occt::TColStd_MapOfTransient^ theOther)
{
    bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->IsEqual(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfTransient::Union(Macad::Occt::TColStd_MapOfTransient^ theLeft, Macad::Occt::TColStd_MapOfTransient^ theRight)
{
    ((::TColStd_MapOfTransient*)_NativeInstance)->Union(*(::TColStd_MapOfTransient*)theLeft->NativeInstance, *(::TColStd_MapOfTransient*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfTransient::Unite(Macad::Occt::TColStd_MapOfTransient^ theOther)
{
    bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Unite(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_MapOfTransient::HasIntersection(Macad::Occt::TColStd_MapOfTransient^ theMap)
{
    bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->HasIntersection(*(::TColStd_MapOfTransient*)theMap->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfTransient::Intersection(Macad::Occt::TColStd_MapOfTransient^ theLeft, Macad::Occt::TColStd_MapOfTransient^ theRight)
{
    ((::TColStd_MapOfTransient*)_NativeInstance)->Intersection(*(::TColStd_MapOfTransient*)theLeft->NativeInstance, *(::TColStd_MapOfTransient*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfTransient::Intersect(Macad::Occt::TColStd_MapOfTransient^ theOther)
{
    bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Intersect(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfTransient::Subtraction(Macad::Occt::TColStd_MapOfTransient^ theLeft, Macad::Occt::TColStd_MapOfTransient^ theRight)
{
    ((::TColStd_MapOfTransient*)_NativeInstance)->Subtraction(*(::TColStd_MapOfTransient*)theLeft->NativeInstance, *(::TColStd_MapOfTransient*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfTransient::Subtract(Macad::Occt::TColStd_MapOfTransient^ theOther)
{
    bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Subtract(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_MapOfTransient::Difference(Macad::Occt::TColStd_MapOfTransient^ theLeft, Macad::Occt::TColStd_MapOfTransient^ theRight)
{
    ((::TColStd_MapOfTransient*)_NativeInstance)->Difference(*(::TColStd_MapOfTransient*)theLeft->NativeInstance, *(::TColStd_MapOfTransient*)theRight->NativeInstance);
}

bool Macad::Occt::TColStd_MapOfTransient::Differ(Macad::Occt::TColStd_MapOfTransient^ theOther)
{
    bool _result = ((::TColStd_MapOfTransient*)_NativeInstance)->Differ(*(::TColStd_MapOfTransient*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_MapOfTransient::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_MapOfTransient::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TColStd_MapOfTransient^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_MapOfTransient::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_MapOfTransient::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_MapOfTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_MapOfTransient::Iterator();
}

bool Macad::Occt::TColStd_MapOfTransient::Iterator::More()
{
    bool _result = ((::TColStd_MapOfTransient::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_MapOfTransient::Iterator::Next()
{
    ((::TColStd_MapOfTransient::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_MapOfTransient::Iterator::Value()
{
    Handle(::Standard_Transient) _result = ((::TColStd_MapOfTransient::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_MapOfTransient::Iterator::Key()
{
    Handle(::Standard_Transient) _result = ((::TColStd_MapOfTransient::Iterator*)_NativeInstance)->Key();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAddress
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfAddress::TColStd_SequenceOfAddress()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfAddress>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfAddress();
}

Macad::Occt::TColStd_SequenceOfAddress::TColStd_SequenceOfAddress(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_SequenceOfAddress>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfAddress(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TColStd_SequenceOfAddress::Size()
{
    int _result = ((::TColStd_SequenceOfAddress*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfAddress::Length()
{
    int _result = ((::TColStd_SequenceOfAddress*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfAddress::Lower()
{
    int _result = ((::TColStd_SequenceOfAddress*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfAddress::Upper()
{
    int _result = ((::TColStd_SequenceOfAddress*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfAddress::IsEmpty()
{
    bool _result = ((::TColStd_SequenceOfAddress*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::TColStd_SequenceOfAddress::Reverse()
{
    ((::TColStd_SequenceOfAddress*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColStd_SequenceOfAddress::Exchange(int I, int J)
{
    ((::TColStd_SequenceOfAddress*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColStd_SequenceOfAddress::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::TColStd_SequenceOfAddress*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TColStd_SequenceOfAddress::Clear()
{
    ((::TColStd_SequenceOfAddress*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_SequenceOfAddress^ Macad::Occt::TColStd_SequenceOfAddress::Assign(Macad::Occt::TColStd_SequenceOfAddress^ theOther)
{
    ::TColStd_SequenceOfAddress* _result = new ::TColStd_SequenceOfAddress();
    *_result = ((::TColStd_SequenceOfAddress*)_NativeInstance)->Assign(*(::TColStd_SequenceOfAddress*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfAddress(_result);
}

void Macad::Occt::TColStd_SequenceOfAddress::Remove(Macad::Occt::TColStd_SequenceOfAddress::Iterator^ thePosition)
{
    ((::TColStd_SequenceOfAddress*)_NativeInstance)->Remove(*(::TColStd_SequenceOfAddress::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfAddress::Split(int theIndex, Macad::Occt::TColStd_SequenceOfAddress^ theSeq)
{
    ((::TColStd_SequenceOfAddress*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfAddress*)theSeq->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAddress::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfAddress::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfAddress::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfAddress::Iterator();
}

bool Macad::Occt::TColStd_SequenceOfAddress::Iterator::More()
{
    bool _result = ((::TColStd_SequenceOfAddress::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_SequenceOfAddress::Iterator::Next()
{
    ((::TColStd_SequenceOfAddress::Iterator*)_NativeInstance)->Next();
}

bool Macad::Occt::TColStd_SequenceOfAddress::Iterator::IsEqual(Macad::Occt::TColStd_SequenceOfAddress::Iterator^ theOther)
{
    bool _result = ((::TColStd_SequenceOfAddress::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfAddress::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfAddress::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_SequenceOfAddress::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfBoolean
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfBoolean::TColStd_SequenceOfBoolean()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfBoolean>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfBoolean();
}

Macad::Occt::TColStd_SequenceOfBoolean::TColStd_SequenceOfBoolean(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TColStd_SequenceOfBoolean>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfBoolean(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TColStd_SequenceOfBoolean::Size()
{
    int _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfBoolean::Length()
{
    int _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfBoolean::Lower()
{
    int _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_SequenceOfBoolean::Upper()
{
    int _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfBoolean::IsEmpty()
{
    bool _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
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

void Macad::Occt::TColStd_SequenceOfBoolean::Remove(Macad::Occt::TColStd_SequenceOfBoolean::Iterator^ thePosition)
{
    ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Remove(*(::TColStd_SequenceOfBoolean::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_SequenceOfBoolean::Append(bool theItem)
{
    pin_ptr<bool> pp_theItem = &theItem;
    ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Append(*(bool*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfBoolean::Prepend(bool theItem)
{
    pin_ptr<bool> pp_theItem = &theItem;
    ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Prepend(*(bool*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfBoolean::InsertBefore(int theIndex, bool theItem)
{
    pin_ptr<bool> pp_theItem = &theItem;
    ((::TColStd_SequenceOfBoolean*)_NativeInstance)->InsertBefore(theIndex, *(bool*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfBoolean::InsertAfter(Macad::Occt::TColStd_SequenceOfBoolean::Iterator^ thePosition, bool theItem)
{
    pin_ptr<bool> pp_theItem = &theItem;
    ((::TColStd_SequenceOfBoolean*)_NativeInstance)->InsertAfter(*(::TColStd_SequenceOfBoolean::Iterator*)thePosition->NativeInstance, *(bool*)pp_theItem);
}

void Macad::Occt::TColStd_SequenceOfBoolean::Split(int theIndex, Macad::Occt::TColStd_SequenceOfBoolean^ theSeq)
{
    ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Split(theIndex, *(::TColStd_SequenceOfBoolean*)theSeq->NativeInstance);
}

bool Macad::Occt::TColStd_SequenceOfBoolean::First()
{
    bool _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->First();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfBoolean::Last()
{
    bool _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Last();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfBoolean::Value(int theIndex)
{
    bool _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->Value(theIndex);
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfBoolean::ChangeValue(int theIndex)
{
    bool _result = ((::TColStd_SequenceOfBoolean*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TColStd_SequenceOfBoolean::SetValue(int theIndex, bool theItem)
{
    pin_ptr<bool> pp_theItem = &theItem;
    ((::TColStd_SequenceOfBoolean*)_NativeInstance)->SetValue(theIndex, *(bool*)pp_theItem);
}

System::Collections::Generic::IEnumerator<bool>^ Macad::Occt::TColStd_SequenceOfBoolean::GetEnumerator()
{
    return gcnew IndexEnumerator<bool>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_SequenceOfBoolean::GetEnumerator2()
{
    return gcnew IndexEnumerator<bool>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfBoolean::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_SequenceOfBoolean::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_SequenceOfBoolean::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_SequenceOfBoolean::Iterator();
}

bool Macad::Occt::TColStd_SequenceOfBoolean::Iterator::More()
{
    bool _result = ((::TColStd_SequenceOfBoolean::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_SequenceOfBoolean::Iterator::Next()
{
    ((::TColStd_SequenceOfBoolean::Iterator*)_NativeInstance)->Next();
}

bool Macad::Occt::TColStd_SequenceOfBoolean::Iterator::Value()
{
    bool _result = ((::TColStd_SequenceOfBoolean::Iterator*)_NativeInstance)->Value();
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfBoolean::Iterator::IsEqual(Macad::Occt::TColStd_SequenceOfBoolean::Iterator^ theOther)
{
    bool _result = ((::TColStd_SequenceOfBoolean::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_SequenceOfBoolean::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_SequenceOfBoolean::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_SequenceOfBoolean::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
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

Macad::Occt::TColStd_HArray1OfAsciiString::TColStd_HArray1OfAsciiString(Macad::Occt::TCollection_AsciiString^ theBegin, int theLower, int theUpper, bool parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HArray1OfAsciiString(*(::TCollection_AsciiString*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

Macad::Occt::TColStd_HArray1OfAsciiString::TColStd_HArray1OfAsciiString(Macad::Occt::TColStd_Array1OfAsciiString^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HArray1OfAsciiString(*(::TColStd_Array1OfAsciiString*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfAsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::Array1()
{
    ::TColStd_Array1OfAsciiString* _result = new ::TColStd_Array1OfAsciiString();
    *_result = (::TColStd_Array1OfAsciiString)((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Array1();
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
    int _result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfAsciiString::Length()
{
    int _result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_HArray1OfAsciiString::IsEmpty()
{
    bool _result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfAsciiString::Lower()
{
    int _result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfAsciiString::Upper()
{
    int _result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TColStd_HArray1OfAsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::Assign(Macad::Occt::TColStd_HArray1OfAsciiString^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray1OfAsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::Move(Macad::Occt::TColStd_HArray1OfAsciiString^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::First()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TColStd_HArray1OfAsciiString*)_NativeInstance)->First();
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
    *_result = (::TCollection_AsciiString)((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Last();
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
    *_result = (::TCollection_AsciiString)((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Value(theIndex);
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

void Macad::Occt::TColStd_HArray1OfAsciiString::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray1OfAsciiString::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_HArray1OfAsciiString::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_HArray1OfAsciiString::IsDeletable()
{
    bool _result = ((::TColStd_HArray1OfAsciiString*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray1OfAsciiString^ Macad::Occt::TColStd_HArray1OfAsciiString::CreateDowncasted(::TColStd_HArray1OfAsciiString* instance)
{
    return gcnew Macad::Occt::TColStd_HArray1OfAsciiString( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_AsciiString^>^ Macad::Occt::TColStd_HArray1OfAsciiString::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_AsciiString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HArray1OfAsciiString::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_AsciiString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfAsciiString::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TColStd_HArray1OfBoolean::TColStd_HArray1OfBoolean(bool theBegin, int theLower, int theUpper, bool parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<bool> pp_theBegin = &theBegin;
    NativeInstance = new ::TColStd_HArray1OfBoolean(*(bool*)pp_theBegin, theLower, theUpper, parameter1);
}

Macad::Occt::TColStd_HArray1OfBoolean::TColStd_HArray1OfBoolean(Macad::Occt::TColStd_Array1OfBoolean^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HArray1OfBoolean(*(::TColStd_Array1OfBoolean*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfBoolean^ Macad::Occt::TColStd_HArray1OfBoolean::Array1()
{
    ::TColStd_Array1OfBoolean* _result = new ::TColStd_Array1OfBoolean();
    *_result = (::TColStd_Array1OfBoolean)((::TColStd_HArray1OfBoolean*)_NativeInstance)->Array1();
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
    int _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfBoolean::Length()
{
    int _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_HArray1OfBoolean::IsEmpty()
{
    bool _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfBoolean::Lower()
{
    int _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfBoolean::Upper()
{
    int _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TColStd_HArray1OfBoolean^ Macad::Occt::TColStd_HArray1OfBoolean::Assign(Macad::Occt::TColStd_HArray1OfBoolean^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray1OfBoolean^ Macad::Occt::TColStd_HArray1OfBoolean::Move(Macad::Occt::TColStd_HArray1OfBoolean^ theOther)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::TColStd_HArray1OfBoolean::First()
{
    bool _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->First();
    return _result;
}

bool Macad::Occt::TColStd_HArray1OfBoolean::Last()
{
    bool _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Last();
    return _result;
}

bool Macad::Occt::TColStd_HArray1OfBoolean::Value(int theIndex)
{
    bool _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Value(theIndex);
    return _result;
}

bool Macad::Occt::TColStd_HArray1OfBoolean::ChangeValue(int theIndex)
{
    bool _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TColStd_HArray1OfBoolean::SetValue(int theIndex, bool theItem)
{
    pin_ptr<bool> pp_theItem = &theItem;
    ((::TColStd_HArray1OfBoolean*)_NativeInstance)->SetValue(theIndex, *(bool*)pp_theItem);
}

void Macad::Occt::TColStd_HArray1OfBoolean::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray1OfBoolean*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray1OfBoolean::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray1OfBoolean*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_HArray1OfBoolean::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_HArray1OfBoolean*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_HArray1OfBoolean::IsDeletable()
{
    bool _result = ((::TColStd_HArray1OfBoolean*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray1OfBoolean^ Macad::Occt::TColStd_HArray1OfBoolean::CreateDowncasted(::TColStd_HArray1OfBoolean* instance)
{
    return gcnew Macad::Occt::TColStd_HArray1OfBoolean( instance );
}

System::Collections::Generic::IEnumerator<bool>^ Macad::Occt::TColStd_HArray1OfBoolean::GetEnumerator()
{
    return gcnew IndexEnumerator<bool>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HArray1OfBoolean::GetEnumerator2()
{
    return gcnew IndexEnumerator<bool>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfBoolean::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TColStd_HArray1OfByte::TColStd_HArray1OfByte(unsigned char theBegin, int theLower, int theUpper, bool parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<unsigned char> pp_theBegin = &theBegin;
    NativeInstance = new ::TColStd_HArray1OfByte(*(unsigned char*)pp_theBegin, theLower, theUpper, parameter1);
}

Macad::Occt::TColStd_HArray1OfByte::TColStd_HArray1OfByte(Macad::Occt::TColStd_Array1OfByte^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HArray1OfByte(*(::TColStd_Array1OfByte*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfByte^ Macad::Occt::TColStd_HArray1OfByte::Array1()
{
    ::TColStd_Array1OfByte* _result = new ::TColStd_Array1OfByte();
    *_result = (::TColStd_Array1OfByte)((::TColStd_HArray1OfByte*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfByte(_result);
}

Macad::Occt::TColStd_Array1OfByte^ Macad::Occt::TColStd_HArray1OfByte::ChangeArray1()
{
    ::TColStd_Array1OfByte* _result = new ::TColStd_Array1OfByte();
    *_result = ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array1OfByte(_result);
}

void Macad::Occt::TColStd_HArray1OfByte::Init(unsigned char theValue)
{
    pin_ptr<unsigned char> pp_theValue = &theValue;
    ((::TColStd_HArray1OfByte*)_NativeInstance)->Init(*(unsigned char*)pp_theValue);
}

int Macad::Occt::TColStd_HArray1OfByte::Size()
{
    int _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfByte::Length()
{
    int _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_HArray1OfByte::IsEmpty()
{
    bool _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfByte::Lower()
{
    int _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfByte::Upper()
{
    int _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TColStd_HArray1OfByte^ Macad::Occt::TColStd_HArray1OfByte::Assign(Macad::Occt::TColStd_HArray1OfByte^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray1OfByte^ Macad::Occt::TColStd_HArray1OfByte::Move(Macad::Occt::TColStd_HArray1OfByte^ theOther)
{
    throw gcnew System::NotImplementedException();
}

unsigned char Macad::Occt::TColStd_HArray1OfByte::First()
{
    unsigned char _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->First();
    return _result;
}

unsigned char Macad::Occt::TColStd_HArray1OfByte::Last()
{
    unsigned char _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->Last();
    return _result;
}

unsigned char Macad::Occt::TColStd_HArray1OfByte::Value(int theIndex)
{
    unsigned char _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->Value(theIndex);
    return _result;
}

unsigned char Macad::Occt::TColStd_HArray1OfByte::ChangeValue(int theIndex)
{
    unsigned char _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TColStd_HArray1OfByte::SetValue(int theIndex, unsigned char theItem)
{
    pin_ptr<unsigned char> pp_theItem = &theItem;
    ((::TColStd_HArray1OfByte*)_NativeInstance)->SetValue(theIndex, *(unsigned char*)pp_theItem);
}

void Macad::Occt::TColStd_HArray1OfByte::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray1OfByte*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray1OfByte::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray1OfByte*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_HArray1OfByte::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_HArray1OfByte*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_HArray1OfByte::IsDeletable()
{
    bool _result = ((::TColStd_HArray1OfByte*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray1OfByte^ Macad::Occt::TColStd_HArray1OfByte::CreateDowncasted(::TColStd_HArray1OfByte* instance)
{
    return gcnew Macad::Occt::TColStd_HArray1OfByte( instance );
}

System::Collections::Generic::IEnumerator<unsigned char>^ Macad::Occt::TColStd_HArray1OfByte::GetEnumerator()
{
    return gcnew IndexEnumerator<unsigned char>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HArray1OfByte::GetEnumerator2()
{
    return gcnew IndexEnumerator<unsigned char>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfByte::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TColStd_HArray1OfCharacter::TColStd_HArray1OfCharacter(char theBegin, int theLower, int theUpper, bool parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<char> pp_theBegin = &theBegin;
    NativeInstance = new ::TColStd_HArray1OfCharacter(*(char*)pp_theBegin, theLower, theUpper, parameter1);
}

Macad::Occt::TColStd_HArray1OfCharacter::TColStd_HArray1OfCharacter(Macad::Occt::TColStd_Array1OfCharacter^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HArray1OfCharacter(*(::TColStd_Array1OfCharacter*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfCharacter^ Macad::Occt::TColStd_HArray1OfCharacter::Array1()
{
    ::TColStd_Array1OfCharacter* _result = new ::TColStd_Array1OfCharacter();
    *_result = (::TColStd_Array1OfCharacter)((::TColStd_HArray1OfCharacter*)_NativeInstance)->Array1();
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
    int _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfCharacter::Length()
{
    int _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_HArray1OfCharacter::IsEmpty()
{
    bool _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfCharacter::Lower()
{
    int _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfCharacter::Upper()
{
    int _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TColStd_HArray1OfCharacter^ Macad::Occt::TColStd_HArray1OfCharacter::Assign(Macad::Occt::TColStd_HArray1OfCharacter^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray1OfCharacter^ Macad::Occt::TColStd_HArray1OfCharacter::Move(Macad::Occt::TColStd_HArray1OfCharacter^ theOther)
{
    throw gcnew System::NotImplementedException();
}

char Macad::Occt::TColStd_HArray1OfCharacter::First()
{
    char _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->First();
    return _result;
}

char Macad::Occt::TColStd_HArray1OfCharacter::Last()
{
    char _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Last();
    return _result;
}

char Macad::Occt::TColStd_HArray1OfCharacter::Value(int theIndex)
{
    char _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Value(theIndex);
    return _result;
}

char Macad::Occt::TColStd_HArray1OfCharacter::ChangeValue(int theIndex)
{
    char _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TColStd_HArray1OfCharacter::SetValue(int theIndex, char theItem)
{
    pin_ptr<char> pp_theItem = &theItem;
    ((::TColStd_HArray1OfCharacter*)_NativeInstance)->SetValue(theIndex, *(char*)pp_theItem);
}

void Macad::Occt::TColStd_HArray1OfCharacter::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray1OfCharacter*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray1OfCharacter::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray1OfCharacter*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_HArray1OfCharacter::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_HArray1OfCharacter*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_HArray1OfCharacter::IsDeletable()
{
    bool _result = ((::TColStd_HArray1OfCharacter*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray1OfCharacter^ Macad::Occt::TColStd_HArray1OfCharacter::CreateDowncasted(::TColStd_HArray1OfCharacter* instance)
{
    return gcnew Macad::Occt::TColStd_HArray1OfCharacter( instance );
}

System::Collections::Generic::IEnumerator<char>^ Macad::Occt::TColStd_HArray1OfCharacter::GetEnumerator()
{
    return gcnew IndexEnumerator<char>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HArray1OfCharacter::GetEnumerator2()
{
    return gcnew IndexEnumerator<char>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfCharacter::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TColStd_HArray1OfExtendedString::TColStd_HArray1OfExtendedString(Macad::Occt::TCollection_ExtendedString^ theBegin, int theLower, int theUpper, bool parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HArray1OfExtendedString(*(::TCollection_ExtendedString*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

Macad::Occt::TColStd_HArray1OfExtendedString::TColStd_HArray1OfExtendedString(Macad::Occt::TColStd_Array1OfExtendedString^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HArray1OfExtendedString(*(::TColStd_Array1OfExtendedString*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::Array1()
{
    ::TColStd_Array1OfExtendedString* _result = new ::TColStd_Array1OfExtendedString();
    *_result = (::TColStd_Array1OfExtendedString)((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Array1();
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
    int _result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfExtendedString::Length()
{
    int _result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_HArray1OfExtendedString::IsEmpty()
{
    bool _result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfExtendedString::Lower()
{
    int _result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfExtendedString::Upper()
{
    int _result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TColStd_HArray1OfExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::Assign(Macad::Occt::TColStd_HArray1OfExtendedString^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray1OfExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::Move(Macad::Occt::TColStd_HArray1OfExtendedString^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::First()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::TColStd_HArray1OfExtendedString*)_NativeInstance)->First();
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
    *_result = (::TCollection_ExtendedString)((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Last();
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
    *_result = (::TCollection_ExtendedString)((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Value(theIndex);
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

void Macad::Occt::TColStd_HArray1OfExtendedString::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray1OfExtendedString::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_HArray1OfExtendedString::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_HArray1OfExtendedString::IsDeletable()
{
    bool _result = ((::TColStd_HArray1OfExtendedString*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray1OfExtendedString^ Macad::Occt::TColStd_HArray1OfExtendedString::CreateDowncasted(::TColStd_HArray1OfExtendedString* instance)
{
    return gcnew Macad::Occt::TColStd_HArray1OfExtendedString( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_ExtendedString^>^ Macad::Occt::TColStd_HArray1OfExtendedString::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_ExtendedString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HArray1OfExtendedString::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_ExtendedString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfExtendedString::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TColStd_HArray1OfInteger::TColStd_HArray1OfInteger(int theBegin, int theLower, int theUpper, bool parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<int> pp_theBegin = &theBegin;
    NativeInstance = new ::TColStd_HArray1OfInteger(*(int*)pp_theBegin, theLower, theUpper, parameter1);
}

Macad::Occt::TColStd_HArray1OfInteger::TColStd_HArray1OfInteger(Macad::Occt::TColStd_Array1OfInteger^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HArray1OfInteger(*(::TColStd_Array1OfInteger*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfInteger^ Macad::Occt::TColStd_HArray1OfInteger::Array1()
{
    ::TColStd_Array1OfInteger* _result = new ::TColStd_Array1OfInteger();
    *_result = (::TColStd_Array1OfInteger)((::TColStd_HArray1OfInteger*)_NativeInstance)->Array1();
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
    int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfInteger::Length()
{
    int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_HArray1OfInteger::IsEmpty()
{
    bool _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfInteger::Lower()
{
    int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfInteger::Upper()
{
    int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::TColStd_HArray1OfInteger::Assign(Macad::Occt::TColStd_HArray1OfInteger^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::TColStd_HArray1OfInteger::Move(Macad::Occt::TColStd_HArray1OfInteger^ theOther)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::TColStd_HArray1OfInteger::First()
{
    int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->First();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfInteger::Last()
{
    int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->Last();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfInteger::Value(int theIndex)
{
    int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->Value(theIndex);
    return _result;
}

int Macad::Occt::TColStd_HArray1OfInteger::ChangeValue(int theIndex)
{
    int _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TColStd_HArray1OfInteger::SetValue(int theIndex, int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    ((::TColStd_HArray1OfInteger*)_NativeInstance)->SetValue(theIndex, *(int*)pp_theItem);
}

void Macad::Occt::TColStd_HArray1OfInteger::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray1OfInteger*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray1OfInteger::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray1OfInteger*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_HArray1OfInteger::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_HArray1OfInteger*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_HArray1OfInteger::IsDeletable()
{
    bool _result = ((::TColStd_HArray1OfInteger*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::TColStd_HArray1OfInteger::CreateDowncasted(::TColStd_HArray1OfInteger* instance)
{
    return gcnew Macad::Occt::TColStd_HArray1OfInteger( instance );
}

System::Collections::Generic::IEnumerator<int>^ Macad::Occt::TColStd_HArray1OfInteger::GetEnumerator()
{
    return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HArray1OfInteger::GetEnumerator2()
{
    return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfInteger::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TColStd_Array1OfListOfInteger^ Macad::Occt::TColStd_HArray1OfListOfInteger::Array1()
{
    ::TColStd_Array1OfListOfInteger* _result = new ::TColStd_Array1OfListOfInteger();
    *_result = (::TColStd_Array1OfListOfInteger)((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Array1();
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
    int _result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfListOfInteger::Length()
{
    int _result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_HArray1OfListOfInteger::IsEmpty()
{
    bool _result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfListOfInteger::Lower()
{
    int _result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfListOfInteger::Upper()
{
    int _result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TColStd_HArray1OfListOfInteger^ Macad::Occt::TColStd_HArray1OfListOfInteger::Assign(Macad::Occt::TColStd_HArray1OfListOfInteger^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray1OfListOfInteger^ Macad::Occt::TColStd_HArray1OfListOfInteger::Move(Macad::Occt::TColStd_HArray1OfListOfInteger^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HArray1OfListOfInteger::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray1OfListOfInteger::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_HArray1OfListOfInteger::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_HArray1OfListOfInteger::IsDeletable()
{
    bool _result = ((::TColStd_HArray1OfListOfInteger*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray1OfListOfInteger^ Macad::Occt::TColStd_HArray1OfListOfInteger::CreateDowncasted(::TColStd_HArray1OfListOfInteger* instance)
{
    return gcnew Macad::Occt::TColStd_HArray1OfListOfInteger( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfListOfInteger::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TColStd_HArray1OfReal::TColStd_HArray1OfReal(double theBegin, int theLower, int theUpper, bool parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<double> pp_theBegin = &theBegin;
    NativeInstance = new ::TColStd_HArray1OfReal(*(double*)pp_theBegin, theLower, theUpper, parameter1);
}

Macad::Occt::TColStd_HArray1OfReal::TColStd_HArray1OfReal(Macad::Occt::TColStd_Array1OfReal^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HArray1OfReal(*(::TColStd_Array1OfReal*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfReal^ Macad::Occt::TColStd_HArray1OfReal::Array1()
{
    ::TColStd_Array1OfReal* _result = new ::TColStd_Array1OfReal();
    *_result = (::TColStd_Array1OfReal)((::TColStd_HArray1OfReal*)_NativeInstance)->Array1();
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
    int _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfReal::Length()
{
    int _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_HArray1OfReal::IsEmpty()
{
    bool _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfReal::Lower()
{
    int _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfReal::Upper()
{
    int _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::TColStd_HArray1OfReal::Assign(Macad::Occt::TColStd_HArray1OfReal^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::TColStd_HArray1OfReal::Move(Macad::Occt::TColStd_HArray1OfReal^ theOther)
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::TColStd_HArray1OfReal::First()
{
    double _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->First();
    return _result;
}

double Macad::Occt::TColStd_HArray1OfReal::Last()
{
    double _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->Last();
    return _result;
}

double Macad::Occt::TColStd_HArray1OfReal::Value(int theIndex)
{
    double _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->Value(theIndex);
    return _result;
}

double Macad::Occt::TColStd_HArray1OfReal::ChangeValue(int theIndex)
{
    double _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
}

void Macad::Occt::TColStd_HArray1OfReal::SetValue(int theIndex, double theItem)
{
    pin_ptr<double> pp_theItem = &theItem;
    ((::TColStd_HArray1OfReal*)_NativeInstance)->SetValue(theIndex, *(double*)pp_theItem);
}

void Macad::Occt::TColStd_HArray1OfReal::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray1OfReal*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray1OfReal::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray1OfReal*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_HArray1OfReal::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_HArray1OfReal*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_HArray1OfReal::IsDeletable()
{
    bool _result = ((::TColStd_HArray1OfReal*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted(::TColStd_HArray1OfReal* instance)
{
    return gcnew Macad::Occt::TColStd_HArray1OfReal( instance );
}

System::Collections::Generic::IEnumerator<double>^ Macad::Occt::TColStd_HArray1OfReal::GetEnumerator()
{
    return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HArray1OfReal::GetEnumerator2()
{
    return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfReal::Iterator
//---------------------------------------------------------------------



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
    NativeInstance = new ::TColStd_HArray1OfTransient(theLower, theUpper, Handle(::Standard_Transient)(theValue->NativeInstance));
}

Macad::Occt::TColStd_HArray1OfTransient::TColStd_HArray1OfTransient(Macad::Occt::Standard_Transient^ theBegin, int theLower, int theUpper, bool parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HArray1OfTransient(Handle(::Standard_Transient)(theBegin->NativeInstance), theLower, theUpper, parameter1);
}

Macad::Occt::TColStd_HArray1OfTransient::TColStd_HArray1OfTransient(Macad::Occt::TColStd_Array1OfTransient^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HArray1OfTransient(*(::TColStd_Array1OfTransient*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array1OfTransient^ Macad::Occt::TColStd_HArray1OfTransient::Array1()
{
    ::TColStd_Array1OfTransient* _result = new ::TColStd_Array1OfTransient();
    *_result = (::TColStd_Array1OfTransient)((::TColStd_HArray1OfTransient*)_NativeInstance)->Array1();
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
    ((::TColStd_HArray1OfTransient*)_NativeInstance)->Init(Handle(::Standard_Transient)(theValue->NativeInstance));
}

int Macad::Occt::TColStd_HArray1OfTransient::Size()
{
    int _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfTransient::Length()
{
    int _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TColStd_HArray1OfTransient::IsEmpty()
{
    bool _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfTransient::Lower()
{
    int _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray1OfTransient::Upper()
{
    int _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TColStd_HArray1OfTransient^ Macad::Occt::TColStd_HArray1OfTransient::Assign(Macad::Occt::TColStd_HArray1OfTransient^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray1OfTransient^ Macad::Occt::TColStd_HArray1OfTransient::Move(Macad::Occt::TColStd_HArray1OfTransient^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray1OfTransient::First()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray1OfTransient::ChangeFirst()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray1OfTransient::Last()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray1OfTransient::ChangeLast()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray1OfTransient::Value(int theIndex)
{
    Handle(::Standard_Transient) _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray1OfTransient::ChangeValue(int theIndex)
{
    Handle(::Standard_Transient) _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_HArray1OfTransient::SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_HArray1OfTransient*)_NativeInstance)->SetValue(theIndex, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_HArray1OfTransient::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray1OfTransient*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray1OfTransient::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray1OfTransient*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TColStd_HArray1OfTransient::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TColStd_HArray1OfTransient*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TColStd_HArray1OfTransient::IsDeletable()
{
    bool _result = ((::TColStd_HArray1OfTransient*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray1OfTransient^ Macad::Occt::TColStd_HArray1OfTransient::CreateDowncasted(::TColStd_HArray1OfTransient* instance)
{
    return gcnew Macad::Occt::TColStd_HArray1OfTransient( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::Standard_Transient^>^ Macad::Occt::TColStd_HArray1OfTransient::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Standard_Transient^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HArray1OfTransient::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Standard_Transient^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfTransient::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TColStd_Array2OfBoolean^ Macad::Occt::TColStd_HArray2OfBoolean::Array2()
{
    ::TColStd_Array2OfBoolean* _result = new ::TColStd_Array2OfBoolean();
    *_result = (::TColStd_Array2OfBoolean)((::TColStd_HArray2OfBoolean*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfBoolean(_result);
}

Macad::Occt::TColStd_Array2OfBoolean^ Macad::Occt::TColStd_HArray2OfBoolean::ChangeArray2()
{
    ::TColStd_Array2OfBoolean* _result = new ::TColStd_Array2OfBoolean();
    *_result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfBoolean(_result);
}

int Macad::Occt::TColStd_HArray2OfBoolean::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColStd_HArray2OfBoolean::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_HArray2OfBoolean::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColStd_HArray2OfBoolean::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_HArray2OfBoolean::Size()
{
    int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfBoolean::Length()
{
    int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfBoolean::NbRows()
{
    int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfBoolean::NbColumns()
{
    int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfBoolean::RowLength()
{
    int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfBoolean::ColLength()
{
    int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfBoolean::LowerRow()
{
    int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfBoolean::UpperRow()
{
    int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfBoolean::LowerCol()
{
    int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfBoolean::UpperCol()
{
    int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->UpperCol();
    return _result;
}

Macad::Occt::TColStd_HArray2OfBoolean^ Macad::Occt::TColStd_HArray2OfBoolean::Assign(Macad::Occt::TColStd_HArray2OfBoolean^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray2OfBoolean^ Macad::Occt::TColStd_HArray2OfBoolean::Move(Macad::Occt::TColStd_HArray2OfBoolean^ theOther)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::TColStd_HArray2OfBoolean::Value(int theRow, int theCol)
{
    bool _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

bool Macad::Occt::TColStd_HArray2OfBoolean::ChangeValue(int theRow, int theCol)
{
    bool _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result;
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

void Macad::Occt::TColStd_HArray2OfBoolean::Init(bool theValue)
{
    pin_ptr<bool> pp_theValue = &theValue;
    ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Init(*(bool*)pp_theValue);
}

bool Macad::Occt::TColStd_HArray2OfBoolean::IsEmpty()
{
    bool _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfBoolean::Lower()
{
    int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfBoolean::Upper()
{
    int _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_HArray2OfBoolean::First()
{
    bool _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->First();
    return _result;
}

bool Macad::Occt::TColStd_HArray2OfBoolean::Last()
{
    bool _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->Last();
    return _result;
}

void Macad::Occt::TColStd_HArray2OfBoolean::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray2OfBoolean*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray2OfBoolean::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray2OfBoolean*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::TColStd_HArray2OfBoolean::IsDeletable()
{
    bool _result = ((::TColStd_HArray2OfBoolean*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray2OfBoolean^ Macad::Occt::TColStd_HArray2OfBoolean::CreateDowncasted(::TColStd_HArray2OfBoolean* instance)
{
    return gcnew Macad::Occt::TColStd_HArray2OfBoolean( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfBoolean::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TColStd_Array2OfCharacter^ Macad::Occt::TColStd_HArray2OfCharacter::Array2()
{
    ::TColStd_Array2OfCharacter* _result = new ::TColStd_Array2OfCharacter();
    *_result = (::TColStd_Array2OfCharacter)((::TColStd_HArray2OfCharacter*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfCharacter(_result);
}

Macad::Occt::TColStd_Array2OfCharacter^ Macad::Occt::TColStd_HArray2OfCharacter::ChangeArray2()
{
    ::TColStd_Array2OfCharacter* _result = new ::TColStd_Array2OfCharacter();
    *_result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfCharacter(_result);
}

int Macad::Occt::TColStd_HArray2OfCharacter::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColStd_HArray2OfCharacter::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_HArray2OfCharacter::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColStd_HArray2OfCharacter::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_HArray2OfCharacter::Size()
{
    int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfCharacter::Length()
{
    int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfCharacter::NbRows()
{
    int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfCharacter::NbColumns()
{
    int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfCharacter::RowLength()
{
    int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfCharacter::ColLength()
{
    int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfCharacter::LowerRow()
{
    int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfCharacter::UpperRow()
{
    int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfCharacter::LowerCol()
{
    int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfCharacter::UpperCol()
{
    int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->UpperCol();
    return _result;
}

Macad::Occt::TColStd_HArray2OfCharacter^ Macad::Occt::TColStd_HArray2OfCharacter::Assign(Macad::Occt::TColStd_HArray2OfCharacter^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray2OfCharacter^ Macad::Occt::TColStd_HArray2OfCharacter::Move(Macad::Occt::TColStd_HArray2OfCharacter^ theOther)
{
    throw gcnew System::NotImplementedException();
}

char Macad::Occt::TColStd_HArray2OfCharacter::Value(int theRow, int theCol)
{
    char _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

char Macad::Occt::TColStd_HArray2OfCharacter::ChangeValue(int theRow, int theCol)
{
    char _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result;
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

void Macad::Occt::TColStd_HArray2OfCharacter::Init(char theValue)
{
    pin_ptr<char> pp_theValue = &theValue;
    ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Init(*(char*)pp_theValue);
}

bool Macad::Occt::TColStd_HArray2OfCharacter::IsEmpty()
{
    bool _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfCharacter::Lower()
{
    int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfCharacter::Upper()
{
    int _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Upper();
    return _result;
}

char Macad::Occt::TColStd_HArray2OfCharacter::First()
{
    char _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->First();
    return _result;
}

char Macad::Occt::TColStd_HArray2OfCharacter::Last()
{
    char _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->Last();
    return _result;
}

void Macad::Occt::TColStd_HArray2OfCharacter::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray2OfCharacter*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray2OfCharacter::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray2OfCharacter*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::TColStd_HArray2OfCharacter::IsDeletable()
{
    bool _result = ((::TColStd_HArray2OfCharacter*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray2OfCharacter^ Macad::Occt::TColStd_HArray2OfCharacter::CreateDowncasted(::TColStd_HArray2OfCharacter* instance)
{
    return gcnew Macad::Occt::TColStd_HArray2OfCharacter( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfCharacter::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TColStd_Array2OfInteger^ Macad::Occt::TColStd_HArray2OfInteger::Array2()
{
    ::TColStd_Array2OfInteger* _result = new ::TColStd_Array2OfInteger();
    *_result = (::TColStd_Array2OfInteger)((::TColStd_HArray2OfInteger*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfInteger(_result);
}

Macad::Occt::TColStd_Array2OfInteger^ Macad::Occt::TColStd_HArray2OfInteger::ChangeArray2()
{
    ::TColStd_Array2OfInteger* _result = new ::TColStd_Array2OfInteger();
    *_result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfInteger(_result);
}

int Macad::Occt::TColStd_HArray2OfInteger::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColStd_HArray2OfInteger::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColStd_HArray2OfInteger::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::Size()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::Length()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::NbRows()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::NbColumns()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::RowLength()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::ColLength()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::LowerRow()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::UpperRow()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::LowerCol()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::UpperCol()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->UpperCol();
    return _result;
}

Macad::Occt::TColStd_HArray2OfInteger^ Macad::Occt::TColStd_HArray2OfInteger::Assign(Macad::Occt::TColStd_HArray2OfInteger^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray2OfInteger^ Macad::Occt::TColStd_HArray2OfInteger::Move(Macad::Occt::TColStd_HArray2OfInteger^ theOther)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::TColStd_HArray2OfInteger::Value(int theRow, int theCol)
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::ChangeValue(int theRow, int theCol)
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result;
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

void Macad::Occt::TColStd_HArray2OfInteger::Init(int theValue)
{
    pin_ptr<int> pp_theValue = &theValue;
    ((::TColStd_HArray2OfInteger*)_NativeInstance)->Init(*(int*)pp_theValue);
}

bool Macad::Occt::TColStd_HArray2OfInteger::IsEmpty()
{
    bool _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::Lower()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::Upper()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->Upper();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::First()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->First();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfInteger::Last()
{
    int _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->Last();
    return _result;
}

void Macad::Occt::TColStd_HArray2OfInteger::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray2OfInteger*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray2OfInteger::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray2OfInteger*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::TColStd_HArray2OfInteger::IsDeletable()
{
    bool _result = ((::TColStd_HArray2OfInteger*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray2OfInteger^ Macad::Occt::TColStd_HArray2OfInteger::CreateDowncasted(::TColStd_HArray2OfInteger* instance)
{
    return gcnew Macad::Occt::TColStd_HArray2OfInteger( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfInteger::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TColStd_Array2OfReal^ Macad::Occt::TColStd_HArray2OfReal::Array2()
{
    ::TColStd_Array2OfReal* _result = new ::TColStd_Array2OfReal();
    *_result = (::TColStd_Array2OfReal)((::TColStd_HArray2OfReal*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfReal(_result);
}

Macad::Occt::TColStd_Array2OfReal^ Macad::Occt::TColStd_HArray2OfReal::ChangeArray2()
{
    ::TColStd_Array2OfReal* _result = new ::TColStd_Array2OfReal();
    *_result = ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfReal(_result);
}

int Macad::Occt::TColStd_HArray2OfReal::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColStd_HArray2OfReal::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_HArray2OfReal::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColStd_HArray2OfReal::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_HArray2OfReal::Size()
{
    int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfReal::Length()
{
    int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfReal::NbRows()
{
    int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfReal::NbColumns()
{
    int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfReal::RowLength()
{
    int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfReal::ColLength()
{
    int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfReal::LowerRow()
{
    int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfReal::UpperRow()
{
    int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfReal::LowerCol()
{
    int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfReal::UpperCol()
{
    int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->UpperCol();
    return _result;
}

Macad::Occt::TColStd_HArray2OfReal^ Macad::Occt::TColStd_HArray2OfReal::Assign(Macad::Occt::TColStd_HArray2OfReal^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray2OfReal^ Macad::Occt::TColStd_HArray2OfReal::Move(Macad::Occt::TColStd_HArray2OfReal^ theOther)
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::TColStd_HArray2OfReal::Value(int theRow, int theCol)
{
    double _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

double Macad::Occt::TColStd_HArray2OfReal::ChangeValue(int theRow, int theCol)
{
    double _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result;
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

void Macad::Occt::TColStd_HArray2OfReal::Init(double theValue)
{
    pin_ptr<double> pp_theValue = &theValue;
    ((::TColStd_HArray2OfReal*)_NativeInstance)->Init(*(double*)pp_theValue);
}

bool Macad::Occt::TColStd_HArray2OfReal::IsEmpty()
{
    bool _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfReal::Lower()
{
    int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfReal::Upper()
{
    int _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->Upper();
    return _result;
}

double Macad::Occt::TColStd_HArray2OfReal::First()
{
    double _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->First();
    return _result;
}

double Macad::Occt::TColStd_HArray2OfReal::Last()
{
    double _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->Last();
    return _result;
}

void Macad::Occt::TColStd_HArray2OfReal::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray2OfReal*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray2OfReal::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray2OfReal*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::TColStd_HArray2OfReal::IsDeletable()
{
    bool _result = ((::TColStd_HArray2OfReal*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray2OfReal^ Macad::Occt::TColStd_HArray2OfReal::CreateDowncasted(::TColStd_HArray2OfReal* instance)
{
    return gcnew Macad::Occt::TColStd_HArray2OfReal( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfReal::Iterator
//---------------------------------------------------------------------



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
    NativeInstance = new ::TColStd_HArray2OfTransient(theRowLow, theRowUpp, theColLow, theColUpp, Handle(::Standard_Transient)(theValue->NativeInstance));
}

Macad::Occt::TColStd_HArray2OfTransient::TColStd_HArray2OfTransient(Macad::Occt::TColStd_Array2OfTransient^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HArray2OfTransient(*(::TColStd_Array2OfTransient*)theOther->NativeInstance);
}

Macad::Occt::TColStd_Array2OfTransient^ Macad::Occt::TColStd_HArray2OfTransient::Array2()
{
    ::TColStd_Array2OfTransient* _result = new ::TColStd_Array2OfTransient();
    *_result = (::TColStd_Array2OfTransient)((::TColStd_HArray2OfTransient*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfTransient(_result);
}

Macad::Occt::TColStd_Array2OfTransient^ Macad::Occt::TColStd_HArray2OfTransient::ChangeArray2()
{
    ::TColStd_Array2OfTransient* _result = new ::TColStd_Array2OfTransient();
    *_result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfTransient(_result);
}

int Macad::Occt::TColStd_HArray2OfTransient::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TColStd_HArray2OfTransient::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_HArray2OfTransient::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TColStd_HArray2OfTransient::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TColStd_HArray2OfTransient::Size()
{
    int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfTransient::Length()
{
    int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfTransient::NbRows()
{
    int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfTransient::NbColumns()
{
    int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfTransient::RowLength()
{
    int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfTransient::ColLength()
{
    int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfTransient::LowerRow()
{
    int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfTransient::UpperRow()
{
    int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfTransient::LowerCol()
{
    int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfTransient::UpperCol()
{
    int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->UpperCol();
    return _result;
}

Macad::Occt::TColStd_HArray2OfTransient^ Macad::Occt::TColStd_HArray2OfTransient::Assign(Macad::Occt::TColStd_HArray2OfTransient^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TColStd_HArray2OfTransient^ Macad::Occt::TColStd_HArray2OfTransient::Move(Macad::Occt::TColStd_HArray2OfTransient^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray2OfTransient::Value(int theRow, int theCol)
{
    Handle(::Standard_Transient) _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->Value(theRow, theCol);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray2OfTransient::ChangeValue(int theRow, int theCol)
{
    Handle(::Standard_Transient) _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_HArray2OfTransient::SetValue(int theRow, int theCol, Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_HArray2OfTransient*)_NativeInstance)->SetValue(theRow, theCol, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_HArray2OfTransient::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
    ((::TColStd_HArray2OfTransient*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}

void Macad::Occt::TColStd_HArray2OfTransient::Init(Macad::Occt::Standard_Transient^ theValue)
{
    ((::TColStd_HArray2OfTransient*)_NativeInstance)->Init(Handle(::Standard_Transient)(theValue->NativeInstance));
}

bool Macad::Occt::TColStd_HArray2OfTransient::IsEmpty()
{
    bool _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfTransient::Lower()
{
    int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HArray2OfTransient::Upper()
{
    int _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray2OfTransient::First()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray2OfTransient::ChangeFirst()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray2OfTransient::Last()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HArray2OfTransient::ChangeLast()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_HArray2OfTransient::UpdateLowerBound(int theLower)
{
    ((::TColStd_HArray2OfTransient*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TColStd_HArray2OfTransient::UpdateUpperBound(int theUpper)
{
    ((::TColStd_HArray2OfTransient*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::TColStd_HArray2OfTransient::IsDeletable()
{
    bool _result = ((::TColStd_HArray2OfTransient*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TColStd_HArray2OfTransient^ Macad::Occt::TColStd_HArray2OfTransient::CreateDowncasted(::TColStd_HArray2OfTransient* instance)
{
    return gcnew Macad::Occt::TColStd_HArray2OfTransient( instance );
}



//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfTransient::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TColStd_PackedMapOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_PackedMapOfInteger::TColStd_PackedMapOfInteger(int theNbBuckets)
    : Macad::Occt::BaseClass<::TColStd_PackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_PackedMapOfInteger(theNbBuckets);
}

Macad::Occt::TColStd_PackedMapOfInteger::TColStd_PackedMapOfInteger()
    : Macad::Occt::BaseClass<::TColStd_PackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_PackedMapOfInteger(1);
}

Macad::Occt::TColStd_PackedMapOfInteger^ Macad::Occt::TColStd_PackedMapOfInteger::Assign(Macad::Occt::TColStd_PackedMapOfInteger^ parameter1)
{
    ::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
    *_result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Assign(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_PackedMapOfInteger(_result);
}

void Macad::Occt::TColStd_PackedMapOfInteger::ReSize(int NbBuckets)
{
    ((::TColStd_PackedMapOfInteger*)_NativeInstance)->ReSize(NbBuckets);
}

void Macad::Occt::TColStd_PackedMapOfInteger::Clear()
{
    ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Clear();
}

bool Macad::Occt::TColStd_PackedMapOfInteger::Add(int aKey)
{
    bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Add(aKey);
    return _result;
}

bool Macad::Occt::TColStd_PackedMapOfInteger::Contains(int aKey)
{
    bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Contains(aKey);
    return _result;
}

bool Macad::Occt::TColStd_PackedMapOfInteger::Remove(int aKey)
{
    bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Remove(aKey);
    return _result;
}

int Macad::Occt::TColStd_PackedMapOfInteger::NbBuckets()
{
    int _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->NbBuckets();
    return _result;
}

int Macad::Occt::TColStd_PackedMapOfInteger::Extent()
{
    int _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Extent();
    return _result;
}

bool Macad::Occt::TColStd_PackedMapOfInteger::IsEmpty()
{
    bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TColStd_PackedMapOfInteger::GetMinimalMapped()
{
    int _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->GetMinimalMapped();
    return _result;
}

int Macad::Occt::TColStd_PackedMapOfInteger::GetMaximalMapped()
{
    int _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->GetMaximalMapped();
    return _result;
}

void Macad::Occt::TColStd_PackedMapOfInteger::Statistics(System::IO::TextWriter^ theStream)
{
    std::ostringstream oss_theStream;
    ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Statistics(oss_theStream);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

void Macad::Occt::TColStd_PackedMapOfInteger::Union(Macad::Occt::TColStd_PackedMapOfInteger^ parameter1, Macad::Occt::TColStd_PackedMapOfInteger^ parameter2)
{
    ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Union(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance, *(::TColStd_PackedMapOfInteger*)parameter2->NativeInstance);
}

bool Macad::Occt::TColStd_PackedMapOfInteger::Unite(Macad::Occt::TColStd_PackedMapOfInteger^ parameter1)
{
    bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Unite(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_PackedMapOfInteger::Intersection(Macad::Occt::TColStd_PackedMapOfInteger^ parameter1, Macad::Occt::TColStd_PackedMapOfInteger^ parameter2)
{
    ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Intersection(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance, *(::TColStd_PackedMapOfInteger*)parameter2->NativeInstance);
}

bool Macad::Occt::TColStd_PackedMapOfInteger::Intersect(Macad::Occt::TColStd_PackedMapOfInteger^ parameter1)
{
    bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Intersect(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_PackedMapOfInteger::Subtraction(Macad::Occt::TColStd_PackedMapOfInteger^ parameter1, Macad::Occt::TColStd_PackedMapOfInteger^ parameter2)
{
    ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Subtraction(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance, *(::TColStd_PackedMapOfInteger*)parameter2->NativeInstance);
}

bool Macad::Occt::TColStd_PackedMapOfInteger::Subtract(Macad::Occt::TColStd_PackedMapOfInteger^ parameter1)
{
    bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Subtract(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
    return _result;
}

void Macad::Occt::TColStd_PackedMapOfInteger::Difference(Macad::Occt::TColStd_PackedMapOfInteger^ parameter1, Macad::Occt::TColStd_PackedMapOfInteger^ parameter2)
{
    ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Difference(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance, *(::TColStd_PackedMapOfInteger*)parameter2->NativeInstance);
}

bool Macad::Occt::TColStd_PackedMapOfInteger::Differ(Macad::Occt::TColStd_PackedMapOfInteger^ parameter1)
{
    bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->Differ(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_PackedMapOfInteger::IsEqual(Macad::Occt::TColStd_PackedMapOfInteger^ parameter1)
{
    bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->IsEqual(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_PackedMapOfInteger::IsSubset(Macad::Occt::TColStd_PackedMapOfInteger^ parameter1)
{
    bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->IsSubset(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_PackedMapOfInteger::HasIntersection(Macad::Occt::TColStd_PackedMapOfInteger^ parameter1)
{
    bool _result = ((::TColStd_PackedMapOfInteger*)_NativeInstance)->HasIntersection(*(::TColStd_PackedMapOfInteger*)parameter1->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_PackedMapOfInteger::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_PackedMapOfInteger::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TColStd_PackedMapOfInteger^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TColStd_PackedMapOfInteger::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_PackedMapOfInteger::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_PackedMapOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_PackedMapOfInteger::Iterator();
}

Macad::Occt::TColStd_PackedMapOfInteger::Iterator::Iterator(Macad::Occt::TColStd_PackedMapOfInteger^ theMap)
    : Macad::Occt::BaseClass<::TColStd_PackedMapOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_PackedMapOfInteger::Iterator(*(::TColStd_PackedMapOfInteger*)theMap->NativeInstance);
}

void Macad::Occt::TColStd_PackedMapOfInteger::Iterator::Initialize(Macad::Occt::TColStd_PackedMapOfInteger^ theMap)
{
    ((::TColStd_PackedMapOfInteger::Iterator*)_NativeInstance)->Initialize(*(::TColStd_PackedMapOfInteger*)theMap->NativeInstance);
}

void Macad::Occt::TColStd_PackedMapOfInteger::Iterator::Reset()
{
    ((::TColStd_PackedMapOfInteger::Iterator*)_NativeInstance)->Reset();
}

int Macad::Occt::TColStd_PackedMapOfInteger::Iterator::Key()
{
    int _result = ((::TColStd_PackedMapOfInteger::Iterator*)_NativeInstance)->Key();
    return _result;
}

bool Macad::Occt::TColStd_PackedMapOfInteger::Iterator::More()
{
    bool _result = ((::TColStd_PackedMapOfInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_PackedMapOfInteger::Iterator::Next()
{
    ((::TColStd_PackedMapOfInteger::Iterator*)_NativeInstance)->Next();
}



//---------------------------------------------------------------------
//  Class  TColStd_HPackedMapOfInteger
//---------------------------------------------------------------------

Macad::Occt::TColStd_HPackedMapOfInteger::TColStd_HPackedMapOfInteger(int NbBuckets)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HPackedMapOfInteger(NbBuckets);
}

Macad::Occt::TColStd_HPackedMapOfInteger::TColStd_HPackedMapOfInteger()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HPackedMapOfInteger(1);
}

Macad::Occt::TColStd_HPackedMapOfInteger::TColStd_HPackedMapOfInteger(Macad::Occt::TColStd_PackedMapOfInteger^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TColStd_HPackedMapOfInteger(*(::TColStd_PackedMapOfInteger*)theOther->NativeInstance);
}

Macad::Occt::TColStd_PackedMapOfInteger^ Macad::Occt::TColStd_HPackedMapOfInteger::Map()
{
    ::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
    *_result = (::TColStd_PackedMapOfInteger)((::TColStd_HPackedMapOfInteger*)_NativeInstance)->Map();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_PackedMapOfInteger(_result);
}

Macad::Occt::TColStd_PackedMapOfInteger^ Macad::Occt::TColStd_HPackedMapOfInteger::ChangeMap()
{
    ::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
    *_result = ((::TColStd_HPackedMapOfInteger*)_NativeInstance)->ChangeMap();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_PackedMapOfInteger(_result);
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

Macad::Occt::TColStd_SequenceOfAsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::Sequence()
{
    ::TColStd_SequenceOfAsciiString* _result = new ::TColStd_SequenceOfAsciiString();
    *_result = (::TColStd_SequenceOfAsciiString)((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Sequence();
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
    int _result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfAsciiString::Length()
{
    int _result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfAsciiString::Lower()
{
    int _result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfAsciiString::Upper()
{
    int _result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfAsciiString::IsEmpty()
{
    bool _result = ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Clear()
{
    ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_HSequenceOfAsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::Assign(Macad::Occt::TColStd_HSequenceOfAsciiString^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Remove(Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator^ thePosition)
{
    ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfAsciiString::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Prepend(Macad::Occt::TCollection_AsciiString^ theItem)
{
    ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Prepend(*(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::InsertBefore(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem)
{
    ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->InsertBefore(theIndex, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::InsertAfter(Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator^ thePosition, Macad::Occt::TCollection_AsciiString^ theItem)
{
    ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfAsciiString::Iterator*)thePosition->NativeInstance, *(::TCollection_AsciiString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Split(int theIndex, Macad::Occt::TColStd_HSequenceOfAsciiString^ theSeq)
{
    ((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfAsciiString*)theSeq->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::First()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->First();
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
    *_result = (::TCollection_AsciiString)((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Last();
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
    *_result = (::TCollection_AsciiString)((::TColStd_HSequenceOfAsciiString*)_NativeInstance)->Value(theIndex);
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

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_AsciiString^>^ Macad::Occt::TColStd_HSequenceOfAsciiString::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_AsciiString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HSequenceOfAsciiString::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_AsciiString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfAsciiString::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_HSequenceOfAsciiString::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_HSequenceOfAsciiString::Iterator();
}

bool Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator::More()
{
    bool _result = ((::TColStd_HSequenceOfAsciiString::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator::Next()
{
    ((::TColStd_HSequenceOfAsciiString::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator::Value()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::TColStd_HSequenceOfAsciiString::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator::ChangeValue()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::TColStd_HSequenceOfAsciiString::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator::IsEqual(Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator^ theOther)
{
    bool _result = ((::TColStd_HSequenceOfAsciiString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfAsciiString::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_HSequenceOfAsciiString::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
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

Macad::Occt::TColStd_SequenceOfExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::Sequence()
{
    ::TColStd_SequenceOfExtendedString* _result = new ::TColStd_SequenceOfExtendedString();
    *_result = (::TColStd_SequenceOfExtendedString)((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Sequence();
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
    int _result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfExtendedString::Length()
{
    int _result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfExtendedString::Lower()
{
    int _result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfExtendedString::Upper()
{
    int _result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfExtendedString::IsEmpty()
{
    bool _result = ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Clear()
{
    ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_HSequenceOfExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::Assign(Macad::Occt::TColStd_HSequenceOfExtendedString^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Remove(Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator^ thePosition)
{
    ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfExtendedString::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Prepend(Macad::Occt::TCollection_ExtendedString^ theItem)
{
    ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Prepend(*(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::InsertBefore(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem)
{
    ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->InsertBefore(theIndex, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::InsertAfter(Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator^ thePosition, Macad::Occt::TCollection_ExtendedString^ theItem)
{
    ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfExtendedString::Iterator*)thePosition->NativeInstance, *(::TCollection_ExtendedString*)theItem->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Split(int theIndex, Macad::Occt::TColStd_HSequenceOfExtendedString^ theSeq)
{
    ((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfExtendedString*)theSeq->NativeInstance);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::First()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->First();
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
    *_result = (::TCollection_ExtendedString)((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Last();
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
    *_result = (::TCollection_ExtendedString)((::TColStd_HSequenceOfExtendedString*)_NativeInstance)->Value(theIndex);
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

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_ExtendedString^>^ Macad::Occt::TColStd_HSequenceOfExtendedString::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_ExtendedString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HSequenceOfExtendedString::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_ExtendedString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfExtendedString::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_HSequenceOfExtendedString::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_HSequenceOfExtendedString::Iterator();
}

bool Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator::More()
{
    bool _result = ((::TColStd_HSequenceOfExtendedString::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator::Next()
{
    ((::TColStd_HSequenceOfExtendedString::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator::Value()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::TColStd_HSequenceOfExtendedString::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator::ChangeValue()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = ((::TColStd_HSequenceOfExtendedString::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

bool Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator::IsEqual(Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator^ theOther)
{
    bool _result = ((::TColStd_HSequenceOfExtendedString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfExtendedString::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_HSequenceOfExtendedString::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
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

Macad::Occt::TColStd_SequenceOfHAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::Sequence()
{
    ::TColStd_SequenceOfHAsciiString* _result = new ::TColStd_SequenceOfHAsciiString();
    *_result = (::TColStd_SequenceOfHAsciiString)((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfHAsciiString(_result);
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Append(Macad::Occt::TCollection_HAsciiString^ theItem)
{
    ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Append(Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
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
    int _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfHAsciiString::Length()
{
    int _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfHAsciiString::Lower()
{
    int _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfHAsciiString::Upper()
{
    int _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfHAsciiString::IsEmpty()
{
    bool _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Clear()
{
    ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_HSequenceOfHAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::Assign(Macad::Occt::TColStd_HSequenceOfHAsciiString^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Remove(Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator^ thePosition)
{
    ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfHAsciiString::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Prepend(Macad::Occt::TCollection_HAsciiString^ theItem)
{
    ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Prepend(Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::InsertBefore(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem)
{
    ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->InsertBefore(theIndex, Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::InsertAfter(Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator^ thePosition, Macad::Occt::TCollection_HAsciiString^ theItem)
{
    ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfHAsciiString::Iterator*)thePosition->NativeInstance, Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Split(int theIndex, Macad::Occt::TColStd_HSequenceOfHAsciiString^ theSeq)
{
    ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfHAsciiString*)theSeq->NativeInstance);
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::First()
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::ChangeFirst()
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::Last()
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::ChangeLast()
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::Value(int theIndex)
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::ChangeValue(int theIndex)
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::SetValue(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem)
{
    ((::TColStd_HSequenceOfHAsciiString*)_NativeInstance)->SetValue(theIndex, Handle(::TCollection_HAsciiString)(theItem->NativeInstance));
}

Macad::Occt::TColStd_HSequenceOfHAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::CreateDowncasted(::TColStd_HSequenceOfHAsciiString* instance)
{
    return gcnew Macad::Occt::TColStd_HSequenceOfHAsciiString( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_HAsciiString^>^ Macad::Occt::TColStd_HSequenceOfHAsciiString::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_HAsciiString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HSequenceOfHAsciiString::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_HAsciiString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHAsciiString::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_HSequenceOfHAsciiString::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_HSequenceOfHAsciiString::Iterator();
}

bool Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator::More()
{
    bool _result = ((::TColStd_HSequenceOfHAsciiString::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator::Next()
{
    ((::TColStd_HSequenceOfHAsciiString::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator::Value()
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator::ChangeValue()
{
    Handle(::TCollection_HAsciiString) _result = ((::TColStd_HSequenceOfHAsciiString::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

bool Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator::IsEqual(Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator^ theOther)
{
    bool _result = ((::TColStd_HSequenceOfHAsciiString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfHAsciiString::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_HSequenceOfHAsciiString::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
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

Macad::Occt::TColStd_SequenceOfHExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::Sequence()
{
    ::TColStd_SequenceOfHExtendedString* _result = new ::TColStd_SequenceOfHExtendedString();
    *_result = (::TColStd_SequenceOfHExtendedString)((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfHExtendedString(_result);
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Append(Macad::Occt::TCollection_HExtendedString^ theItem)
{
    ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Append(Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
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
    int _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfHExtendedString::Length()
{
    int _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfHExtendedString::Lower()
{
    int _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfHExtendedString::Upper()
{
    int _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfHExtendedString::IsEmpty()
{
    bool _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Clear()
{
    ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_HSequenceOfHExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::Assign(Macad::Occt::TColStd_HSequenceOfHExtendedString^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Remove(Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator^ thePosition)
{
    ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfHExtendedString::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Prepend(Macad::Occt::TCollection_HExtendedString^ theItem)
{
    ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Prepend(Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::InsertBefore(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem)
{
    ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->InsertBefore(theIndex, Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::InsertAfter(Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator^ thePosition, Macad::Occt::TCollection_HExtendedString^ theItem)
{
    ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfHExtendedString::Iterator*)thePosition->NativeInstance, Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Split(int theIndex, Macad::Occt::TColStd_HSequenceOfHExtendedString^ theSeq)
{
    ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfHExtendedString*)theSeq->NativeInstance);
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::First()
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::ChangeFirst()
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::Last()
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::ChangeLast()
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::Value(int theIndex)
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::ChangeValue(int theIndex)
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::SetValue(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem)
{
    ((::TColStd_HSequenceOfHExtendedString*)_NativeInstance)->SetValue(theIndex, Handle(::TCollection_HExtendedString)(theItem->NativeInstance));
}

Macad::Occt::TColStd_HSequenceOfHExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::CreateDowncasted(::TColStd_HSequenceOfHExtendedString* instance)
{
    return gcnew Macad::Occt::TColStd_HSequenceOfHExtendedString( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::TCollection_HExtendedString^>^ Macad::Occt::TColStd_HSequenceOfHExtendedString::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_HExtendedString^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HSequenceOfHExtendedString::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TCollection_HExtendedString^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHExtendedString::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_HSequenceOfHExtendedString::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_HSequenceOfHExtendedString::Iterator();
}

bool Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator::More()
{
    bool _result = ((::TColStd_HSequenceOfHExtendedString::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator::Next()
{
    ((::TColStd_HSequenceOfHExtendedString::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator::Value()
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator::ChangeValue()
{
    Handle(::TCollection_HExtendedString) _result = ((::TColStd_HSequenceOfHExtendedString::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted(_result.get());
}

bool Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator::IsEqual(Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator^ theOther)
{
    bool _result = ((::TColStd_HSequenceOfHExtendedString::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfHExtendedString::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_HSequenceOfHExtendedString::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
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

Macad::Occt::TColStd_SequenceOfInteger^ Macad::Occt::TColStd_HSequenceOfInteger::Sequence()
{
    ::TColStd_SequenceOfInteger* _result = new ::TColStd_SequenceOfInteger();
    *_result = (::TColStd_SequenceOfInteger)((::TColStd_HSequenceOfInteger*)_NativeInstance)->Sequence();
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
    int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfInteger::Length()
{
    int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfInteger::Lower()
{
    int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfInteger::Upper()
{
    int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfInteger::IsEmpty()
{
    bool _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfInteger::Clear()
{
    ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_HSequenceOfInteger^ Macad::Occt::TColStd_HSequenceOfInteger::Assign(Macad::Occt::TColStd_HSequenceOfInteger^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HSequenceOfInteger::Remove(Macad::Occt::TColStd_HSequenceOfInteger::Iterator^ thePosition)
{
    ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfInteger::Iterator*)thePosition->NativeInstance);
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

void Macad::Occt::TColStd_HSequenceOfInteger::InsertAfter(Macad::Occt::TColStd_HSequenceOfInteger::Iterator^ thePosition, int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    ((::TColStd_HSequenceOfInteger*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfInteger::Iterator*)thePosition->NativeInstance, *(int*)pp_theItem);
}

void Macad::Occt::TColStd_HSequenceOfInteger::Split(int theIndex, Macad::Occt::TColStd_HSequenceOfInteger^ theSeq)
{
    ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfInteger*)theSeq->NativeInstance);
}

int Macad::Occt::TColStd_HSequenceOfInteger::First()
{
    int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->First();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfInteger::Last()
{
    int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Last();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfInteger::Value(int theIndex)
{
    int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->Value(theIndex);
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfInteger::ChangeValue(int theIndex)
{
    int _result = ((::TColStd_HSequenceOfInteger*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
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

System::Collections::Generic::IEnumerator<int>^ Macad::Occt::TColStd_HSequenceOfInteger::GetEnumerator()
{
    return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HSequenceOfInteger::GetEnumerator2()
{
    return gcnew IndexEnumerator<int>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfInteger::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfInteger::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_HSequenceOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_HSequenceOfInteger::Iterator();
}

bool Macad::Occt::TColStd_HSequenceOfInteger::Iterator::More()
{
    bool _result = ((::TColStd_HSequenceOfInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_HSequenceOfInteger::Iterator::Next()
{
    ((::TColStd_HSequenceOfInteger::Iterator*)_NativeInstance)->Next();
}

int Macad::Occt::TColStd_HSequenceOfInteger::Iterator::Value()
{
    int _result = ((::TColStd_HSequenceOfInteger::Iterator*)_NativeInstance)->Value();
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfInteger::Iterator::IsEqual(Macad::Occt::TColStd_HSequenceOfInteger::Iterator^ theOther)
{
    bool _result = ((::TColStd_HSequenceOfInteger::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfInteger::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfInteger::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_HSequenceOfInteger::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
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

Macad::Occt::TColStd_SequenceOfReal^ Macad::Occt::TColStd_HSequenceOfReal::Sequence()
{
    ::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
    *_result = (::TColStd_SequenceOfReal)((::TColStd_HSequenceOfReal*)_NativeInstance)->Sequence();
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
    int _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfReal::Length()
{
    int _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfReal::Lower()
{
    int _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfReal::Upper()
{
    int _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfReal::IsEmpty()
{
    bool _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_HSequenceOfReal*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfReal::Clear()
{
    ((::TColStd_HSequenceOfReal*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_HSequenceOfReal^ Macad::Occt::TColStd_HSequenceOfReal::Assign(Macad::Occt::TColStd_HSequenceOfReal^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HSequenceOfReal::Remove(Macad::Occt::TColStd_HSequenceOfReal::Iterator^ thePosition)
{
    ((::TColStd_HSequenceOfReal*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfReal::Iterator*)thePosition->NativeInstance);
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

void Macad::Occt::TColStd_HSequenceOfReal::InsertAfter(Macad::Occt::TColStd_HSequenceOfReal::Iterator^ thePosition, double theItem)
{
    pin_ptr<double> pp_theItem = &theItem;
    ((::TColStd_HSequenceOfReal*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfReal::Iterator*)thePosition->NativeInstance, *(double*)pp_theItem);
}

void Macad::Occt::TColStd_HSequenceOfReal::Split(int theIndex, Macad::Occt::TColStd_HSequenceOfReal^ theSeq)
{
    ((::TColStd_HSequenceOfReal*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfReal*)theSeq->NativeInstance);
}

double Macad::Occt::TColStd_HSequenceOfReal::First()
{
    double _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->First();
    return _result;
}

double Macad::Occt::TColStd_HSequenceOfReal::Last()
{
    double _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->Last();
    return _result;
}

double Macad::Occt::TColStd_HSequenceOfReal::Value(int theIndex)
{
    double _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->Value(theIndex);
    return _result;
}

double Macad::Occt::TColStd_HSequenceOfReal::ChangeValue(int theIndex)
{
    double _result = ((::TColStd_HSequenceOfReal*)_NativeInstance)->ChangeValue(theIndex);
    return _result;
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

System::Collections::Generic::IEnumerator<double>^ Macad::Occt::TColStd_HSequenceOfReal::GetEnumerator()
{
    return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HSequenceOfReal::GetEnumerator2()
{
    return gcnew IndexEnumerator<double>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfReal::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_HSequenceOfReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_HSequenceOfReal::Iterator();
}

bool Macad::Occt::TColStd_HSequenceOfReal::Iterator::More()
{
    bool _result = ((::TColStd_HSequenceOfReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_HSequenceOfReal::Iterator::Next()
{
    ((::TColStd_HSequenceOfReal::Iterator*)_NativeInstance)->Next();
}

double Macad::Occt::TColStd_HSequenceOfReal::Iterator::Value()
{
    double _result = ((::TColStd_HSequenceOfReal::Iterator*)_NativeInstance)->Value();
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfReal::Iterator::IsEqual(Macad::Occt::TColStd_HSequenceOfReal::Iterator^ theOther)
{
    bool _result = ((::TColStd_HSequenceOfReal::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfReal::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfReal::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_HSequenceOfReal::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
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

Macad::Occt::TColStd_SequenceOfTransient^ Macad::Occt::TColStd_HSequenceOfTransient::Sequence()
{
    ::TColStd_SequenceOfTransient* _result = new ::TColStd_SequenceOfTransient();
    *_result = (::TColStd_SequenceOfTransient)((::TColStd_HSequenceOfTransient*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfTransient(_result);
}

void Macad::Occt::TColStd_HSequenceOfTransient::Append(Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Append(Handle(::Standard_Transient)(theItem->NativeInstance));
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
    int _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfTransient::Length()
{
    int _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfTransient::Lower()
{
    int _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TColStd_HSequenceOfTransient::Upper()
{
    int _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfTransient::IsEmpty()
{
    bool _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfTransient::Clear()
{
    ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColStd_HSequenceOfTransient^ Macad::Occt::TColStd_HSequenceOfTransient::Assign(Macad::Occt::TColStd_HSequenceOfTransient^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::TColStd_HSequenceOfTransient::Remove(Macad::Occt::TColStd_HSequenceOfTransient::Iterator^ thePosition)
{
    ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Remove(*(::TColStd_HSequenceOfTransient::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TColStd_HSequenceOfTransient::Prepend(Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Prepend(Handle(::Standard_Transient)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfTransient::InsertBefore(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_HSequenceOfTransient*)_NativeInstance)->InsertBefore(theIndex, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfTransient::InsertAfter(Macad::Occt::TColStd_HSequenceOfTransient::Iterator^ thePosition, Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_HSequenceOfTransient*)_NativeInstance)->InsertAfter(*(::TColStd_HSequenceOfTransient::Iterator*)thePosition->NativeInstance, Handle(::Standard_Transient)(theItem->NativeInstance));
}

void Macad::Occt::TColStd_HSequenceOfTransient::Split(int theIndex, Macad::Occt::TColStd_HSequenceOfTransient^ theSeq)
{
    ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Split(theIndex, *(::TColStd_HSequenceOfTransient*)theSeq->NativeInstance);
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::First()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::ChangeFirst()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::Last()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::ChangeLast()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::Value(int theIndex)
{
    Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::ChangeValue(int theIndex)
{
    Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::TColStd_HSequenceOfTransient::SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem)
{
    ((::TColStd_HSequenceOfTransient*)_NativeInstance)->SetValue(theIndex, Handle(::Standard_Transient)(theItem->NativeInstance));
}

Macad::Occt::TColStd_HSequenceOfTransient^ Macad::Occt::TColStd_HSequenceOfTransient::CreateDowncasted(::TColStd_HSequenceOfTransient* instance)
{
    return gcnew Macad::Occt::TColStd_HSequenceOfTransient( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::Standard_Transient^>^ Macad::Occt::TColStd_HSequenceOfTransient::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Standard_Transient^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TColStd_HSequenceOfTransient::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Standard_Transient^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfTransient::Iterator
//---------------------------------------------------------------------

Macad::Occt::TColStd_HSequenceOfTransient::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TColStd_HSequenceOfTransient::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TColStd_HSequenceOfTransient::Iterator();
}

bool Macad::Occt::TColStd_HSequenceOfTransient::Iterator::More()
{
    bool _result = ((::TColStd_HSequenceOfTransient::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TColStd_HSequenceOfTransient::Iterator::Next()
{
    ((::TColStd_HSequenceOfTransient::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::Iterator::Value()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::TColStd_HSequenceOfTransient::Iterator::ChangeValue()
{
    Handle(::Standard_Transient) _result = ((::TColStd_HSequenceOfTransient::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

bool Macad::Occt::TColStd_HSequenceOfTransient::Iterator::IsEqual(Macad::Occt::TColStd_HSequenceOfTransient::Iterator^ theOther)
{
    bool _result = ((::TColStd_HSequenceOfTransient::Iterator*)_NativeInstance)->IsEqual(*(::TColStd_HSequenceOfTransient::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TColStd_HSequenceOfTransient::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TColStd_HSequenceOfTransient::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}


