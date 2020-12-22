// Generated wrapper code for package TCollection

#include "OcctPCH.h"
#include "TCollection.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "TCollection.h"


//---------------------------------------------------------------------
//  Class  TCollection_AsciiString
//---------------------------------------------------------------------

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString()
	: BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_AsciiString();
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(System::String^ message)
	: BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
	const char* sz_message = (char*)(void*)Marshal::StringToHGlobalAnsi(message);
	_NativeInstance = new ::TCollection_AsciiString(sz_message);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_message);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(System::String^ message, int aLen)
	: BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
	const char* sz_message = (char*)(void*)Marshal::StringToHGlobalAnsi(message);
	_NativeInstance = new ::TCollection_AsciiString(sz_message, aLen);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_message);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(char aChar)
	: BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_AsciiString(aChar);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(int length, char filler)
	: BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_AsciiString(length, filler);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(int value)
	: BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_AsciiString(value);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(double value)
	: BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_AsciiString(value);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ astring)
	: BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_AsciiString(*(::TCollection_AsciiString*)astring->NativeInstance);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ astring, char message)
	: BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_AsciiString(*(::TCollection_AsciiString*)astring->NativeInstance, message);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ astring, System::String^ message)
	: BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
	const char* sz_message = (char*)(void*)Marshal::StringToHGlobalAnsi(message);
	_NativeInstance = new ::TCollection_AsciiString(*(::TCollection_AsciiString*)astring->NativeInstance, sz_message);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_message);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ astring, Macad::Occt::TCollection_AsciiString^ message)
	: BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_AsciiString(*(::TCollection_AsciiString*)astring->NativeInstance, *(::TCollection_AsciiString*)message->NativeInstance);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(Macad::Occt::TCollection_ExtendedString^ astring, char replaceNonAscii)
	: BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_AsciiString(*(::TCollection_ExtendedString*)astring->NativeInstance, replaceNonAscii);
}

Macad::Occt::TCollection_AsciiString::TCollection_AsciiString(Macad::Occt::TCollection_ExtendedString^ astring)
	: BaseClass<::TCollection_AsciiString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_AsciiString(*(::TCollection_ExtendedString*)astring->NativeInstance, 0);
}

void Macad::Occt::TCollection_AsciiString::AssignCat(char other)
{
	((::TCollection_AsciiString*)_NativeInstance)->AssignCat(other);
}

void Macad::Occt::TCollection_AsciiString::AssignCat(int other)
{
	((::TCollection_AsciiString*)_NativeInstance)->AssignCat(other);
}

void Macad::Occt::TCollection_AsciiString::AssignCat(double other)
{
	((::TCollection_AsciiString*)_NativeInstance)->AssignCat(other);
}

void Macad::Occt::TCollection_AsciiString::AssignCat(System::String^ other)
{
	const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
	((::TCollection_AsciiString*)_NativeInstance)->AssignCat(sz_other);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
}

void Macad::Occt::TCollection_AsciiString::AssignCat(Macad::Occt::TCollection_AsciiString^ other)
{
	((::TCollection_AsciiString*)_NativeInstance)->AssignCat(*(::TCollection_AsciiString*)other->NativeInstance);
}

void Macad::Occt::TCollection_AsciiString::Capitalize()
{
	((::TCollection_AsciiString*)_NativeInstance)->Capitalize();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Cat(char other)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(other);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Cat(int other)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(other);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Cat(double other)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(other);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Cat(System::String^ other)
{
	const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(sz_other);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Cat(Macad::Occt::TCollection_AsciiString^ other)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TCollection_AsciiString*)_NativeInstance)->Cat(*(::TCollection_AsciiString*)other->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::TCollection_AsciiString::Center(int Width, char Filler)
{
	((::TCollection_AsciiString*)_NativeInstance)->Center(Width, Filler);
}

void Macad::Occt::TCollection_AsciiString::ChangeAll(char aChar, char NewChar, bool CaseSensitive)
{
	((::TCollection_AsciiString*)_NativeInstance)->ChangeAll(aChar, NewChar, CaseSensitive);
}

void Macad::Occt::TCollection_AsciiString::ChangeAll(char aChar, char NewChar)
{
	((::TCollection_AsciiString*)_NativeInstance)->ChangeAll(aChar, NewChar, true);
}

void Macad::Occt::TCollection_AsciiString::Clear()
{
	((::TCollection_AsciiString*)_NativeInstance)->Clear();
}

void Macad::Occt::TCollection_AsciiString::Copy(System::String^ fromwhere)
{
	const char* sz_fromwhere = (char*)(void*)Marshal::StringToHGlobalAnsi(fromwhere);
	((::TCollection_AsciiString*)_NativeInstance)->Copy(sz_fromwhere);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_fromwhere);
}

void Macad::Occt::TCollection_AsciiString::Copy(Macad::Occt::TCollection_AsciiString^ fromwhere)
{
	((::TCollection_AsciiString*)_NativeInstance)->Copy(*(::TCollection_AsciiString*)fromwhere->NativeInstance);
}

void Macad::Occt::TCollection_AsciiString::Swap(Macad::Occt::TCollection_AsciiString^ theOther)
{
	((::TCollection_AsciiString*)_NativeInstance)->Swap(*(::TCollection_AsciiString*)theOther->NativeInstance);
}

int Macad::Occt::TCollection_AsciiString::FirstLocationInSet(Macad::Occt::TCollection_AsciiString^ Set, int FromIndex, int ToIndex)
{
	return ((::TCollection_AsciiString*)_NativeInstance)->FirstLocationInSet(*(::TCollection_AsciiString*)Set->NativeInstance, FromIndex, ToIndex);
}

int Macad::Occt::TCollection_AsciiString::FirstLocationNotInSet(Macad::Occt::TCollection_AsciiString^ Set, int FromIndex, int ToIndex)
{
	return ((::TCollection_AsciiString*)_NativeInstance)->FirstLocationNotInSet(*(::TCollection_AsciiString*)Set->NativeInstance, FromIndex, ToIndex);
}

void Macad::Occt::TCollection_AsciiString::Insert(int where, char what)
{
	((::TCollection_AsciiString*)_NativeInstance)->Insert(where, what);
}

void Macad::Occt::TCollection_AsciiString::Insert(int where, System::String^ what)
{
	const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
	((::TCollection_AsciiString*)_NativeInstance)->Insert(where, sz_what);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
}

void Macad::Occt::TCollection_AsciiString::Insert(int where, Macad::Occt::TCollection_AsciiString^ what)
{
	((::TCollection_AsciiString*)_NativeInstance)->Insert(where, *(::TCollection_AsciiString*)what->NativeInstance);
}

void Macad::Occt::TCollection_AsciiString::InsertAfter(int Index, Macad::Occt::TCollection_AsciiString^ other)
{
	((::TCollection_AsciiString*)_NativeInstance)->InsertAfter(Index, *(::TCollection_AsciiString*)other->NativeInstance);
}

void Macad::Occt::TCollection_AsciiString::InsertBefore(int Index, Macad::Occt::TCollection_AsciiString^ other)
{
	((::TCollection_AsciiString*)_NativeInstance)->InsertBefore(Index, *(::TCollection_AsciiString*)other->NativeInstance);
}

bool Macad::Occt::TCollection_AsciiString::IsEmpty()
{
	return ((::TCollection_AsciiString*)_NativeInstance)->IsEmpty();
}

bool Macad::Occt::TCollection_AsciiString::IsEqual(System::String^ other)
{
	const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
	return ((::TCollection_AsciiString*)_NativeInstance)->IsEqual(sz_other);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
}

bool Macad::Occt::TCollection_AsciiString::IsEqual(Macad::Occt::TCollection_AsciiString^ other)
{
	return ((::TCollection_AsciiString*)_NativeInstance)->IsEqual(*(::TCollection_AsciiString*)other->NativeInstance);
}

bool Macad::Occt::TCollection_AsciiString::IsDifferent(System::String^ other)
{
	const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
	return ((::TCollection_AsciiString*)_NativeInstance)->IsDifferent(sz_other);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
}

bool Macad::Occt::TCollection_AsciiString::IsDifferent(Macad::Occt::TCollection_AsciiString^ other)
{
	return ((::TCollection_AsciiString*)_NativeInstance)->IsDifferent(*(::TCollection_AsciiString*)other->NativeInstance);
}

bool Macad::Occt::TCollection_AsciiString::IsLess(System::String^ other)
{
	const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
	return ((::TCollection_AsciiString*)_NativeInstance)->IsLess(sz_other);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
}

bool Macad::Occt::TCollection_AsciiString::IsLess(Macad::Occt::TCollection_AsciiString^ other)
{
	return ((::TCollection_AsciiString*)_NativeInstance)->IsLess(*(::TCollection_AsciiString*)other->NativeInstance);
}

bool Macad::Occt::TCollection_AsciiString::IsGreater(System::String^ other)
{
	const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
	return ((::TCollection_AsciiString*)_NativeInstance)->IsGreater(sz_other);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
}

bool Macad::Occt::TCollection_AsciiString::IsGreater(Macad::Occt::TCollection_AsciiString^ other)
{
	return ((::TCollection_AsciiString*)_NativeInstance)->IsGreater(*(::TCollection_AsciiString*)other->NativeInstance);
}

bool Macad::Occt::TCollection_AsciiString::StartsWith(Macad::Occt::TCollection_AsciiString^ theStartString)
{
	return ((::TCollection_AsciiString*)_NativeInstance)->StartsWith(*(::TCollection_AsciiString*)theStartString->NativeInstance);
}

bool Macad::Occt::TCollection_AsciiString::EndsWith(Macad::Occt::TCollection_AsciiString^ theEndString)
{
	return ((::TCollection_AsciiString*)_NativeInstance)->EndsWith(*(::TCollection_AsciiString*)theEndString->NativeInstance);
}

int Macad::Occt::TCollection_AsciiString::IntegerValue()
{
	return ((::TCollection_AsciiString*)_NativeInstance)->IntegerValue();
}

bool Macad::Occt::TCollection_AsciiString::IsIntegerValue()
{
	return ((::TCollection_AsciiString*)_NativeInstance)->IsIntegerValue();
}

bool Macad::Occt::TCollection_AsciiString::IsRealValue()
{
	return ((::TCollection_AsciiString*)_NativeInstance)->IsRealValue();
}

bool Macad::Occt::TCollection_AsciiString::IsAscii()
{
	return ((::TCollection_AsciiString*)_NativeInstance)->IsAscii();
}

void Macad::Occt::TCollection_AsciiString::LeftAdjust()
{
	((::TCollection_AsciiString*)_NativeInstance)->LeftAdjust();
}

void Macad::Occt::TCollection_AsciiString::LeftJustify(int Width, char Filler)
{
	((::TCollection_AsciiString*)_NativeInstance)->LeftJustify(Width, Filler);
}

int Macad::Occt::TCollection_AsciiString::Length()
{
	return ((::TCollection_AsciiString*)_NativeInstance)->Length();
}

int Macad::Occt::TCollection_AsciiString::Location(Macad::Occt::TCollection_AsciiString^ other, int FromIndex, int ToIndex)
{
	return ((::TCollection_AsciiString*)_NativeInstance)->Location(*(::TCollection_AsciiString*)other->NativeInstance, FromIndex, ToIndex);
}

int Macad::Occt::TCollection_AsciiString::Location(int N, char C, int FromIndex, int ToIndex)
{
	return ((::TCollection_AsciiString*)_NativeInstance)->Location(N, C, FromIndex, ToIndex);
}

void Macad::Occt::TCollection_AsciiString::LowerCase()
{
	((::TCollection_AsciiString*)_NativeInstance)->LowerCase();
}

void Macad::Occt::TCollection_AsciiString::Prepend(Macad::Occt::TCollection_AsciiString^ other)
{
	((::TCollection_AsciiString*)_NativeInstance)->Prepend(*(::TCollection_AsciiString*)other->NativeInstance);
}

double Macad::Occt::TCollection_AsciiString::RealValue()
{
	return ((::TCollection_AsciiString*)_NativeInstance)->RealValue();
}

void Macad::Occt::TCollection_AsciiString::RemoveAll(char C, bool CaseSensitive)
{
	((::TCollection_AsciiString*)_NativeInstance)->RemoveAll(C, CaseSensitive);
}

void Macad::Occt::TCollection_AsciiString::RemoveAll(char what)
{
	((::TCollection_AsciiString*)_NativeInstance)->RemoveAll(what);
}

void Macad::Occt::TCollection_AsciiString::Remove(int where, int ahowmany)
{
	((::TCollection_AsciiString*)_NativeInstance)->Remove(where, ahowmany);
}

void Macad::Occt::TCollection_AsciiString::Remove(int where)
{
	((::TCollection_AsciiString*)_NativeInstance)->Remove(where, 1);
}

void Macad::Occt::TCollection_AsciiString::RightAdjust()
{
	((::TCollection_AsciiString*)_NativeInstance)->RightAdjust();
}

void Macad::Occt::TCollection_AsciiString::RightJustify(int Width, char Filler)
{
	((::TCollection_AsciiString*)_NativeInstance)->RightJustify(Width, Filler);
}

int Macad::Occt::TCollection_AsciiString::Search(System::String^ what)
{
	const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
	return ((::TCollection_AsciiString*)_NativeInstance)->Search(sz_what);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
}

int Macad::Occt::TCollection_AsciiString::Search(Macad::Occt::TCollection_AsciiString^ what)
{
	return ((::TCollection_AsciiString*)_NativeInstance)->Search(*(::TCollection_AsciiString*)what->NativeInstance);
}

int Macad::Occt::TCollection_AsciiString::SearchFromEnd(System::String^ what)
{
	const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
	return ((::TCollection_AsciiString*)_NativeInstance)->SearchFromEnd(sz_what);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
}

int Macad::Occt::TCollection_AsciiString::SearchFromEnd(Macad::Occt::TCollection_AsciiString^ what)
{
	return ((::TCollection_AsciiString*)_NativeInstance)->SearchFromEnd(*(::TCollection_AsciiString*)what->NativeInstance);
}

void Macad::Occt::TCollection_AsciiString::SetValue(int where, char what)
{
	((::TCollection_AsciiString*)_NativeInstance)->SetValue(where, what);
}

void Macad::Occt::TCollection_AsciiString::SetValue(int where, System::String^ what)
{
	const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
	((::TCollection_AsciiString*)_NativeInstance)->SetValue(where, sz_what);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
}

void Macad::Occt::TCollection_AsciiString::SetValue(int where, Macad::Occt::TCollection_AsciiString^ what)
{
	((::TCollection_AsciiString*)_NativeInstance)->SetValue(where, *(::TCollection_AsciiString*)what->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Split(int where)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TCollection_AsciiString*)_NativeInstance)->Split(where);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::SubString(int FromIndex, int ToIndex)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TCollection_AsciiString*)_NativeInstance)->SubString(FromIndex, ToIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

System::String^ Macad::Occt::TCollection_AsciiString::ToCString()
{
	Standard_CString _result;
	_result = ((::TCollection_AsciiString*)_NativeInstance)->ToCString();
	return gcnew System::String(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Token(System::String^ separators, int whichone)
{
	const char* sz_separators = (char*)(void*)Marshal::StringToHGlobalAnsi(separators);
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TCollection_AsciiString*)_NativeInstance)->Token(sz_separators, whichone);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_separators);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Token(System::String^ separators)
{
	const char* sz_separators = (char*)(void*)Marshal::StringToHGlobalAnsi(separators);
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TCollection_AsciiString*)_NativeInstance)->Token(sz_separators, 1);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_separators);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_AsciiString::Token()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::TCollection_AsciiString*)_NativeInstance)->Token(" \t", 1);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::TCollection_AsciiString::Trunc(int ahowmany)
{
	((::TCollection_AsciiString*)_NativeInstance)->Trunc(ahowmany);
}

void Macad::Occt::TCollection_AsciiString::UpperCase()
{
	((::TCollection_AsciiString*)_NativeInstance)->UpperCase();
}

int Macad::Occt::TCollection_AsciiString::UsefullLength()
{
	return ((::TCollection_AsciiString*)_NativeInstance)->UsefullLength();
}

char Macad::Occt::TCollection_AsciiString::Value(int where)
{
	return ((::TCollection_AsciiString*)_NativeInstance)->Value(where);
}

int Macad::Occt::TCollection_AsciiString::HashCode(Macad::Occt::TCollection_AsciiString^ theAsciiString, int theUpperBound)
{
	return ::TCollection_AsciiString::HashCode(*(::TCollection_AsciiString*)theAsciiString->NativeInstance, theUpperBound);
}

bool Macad::Occt::TCollection_AsciiString::IsEqual(Macad::Occt::TCollection_AsciiString^ string1, Macad::Occt::TCollection_AsciiString^ string2)
{
	return ::TCollection_AsciiString::IsEqual(*(::TCollection_AsciiString*)string1->NativeInstance, *(::TCollection_AsciiString*)string2->NativeInstance);
}

bool Macad::Occt::TCollection_AsciiString::IsEqual(Macad::Occt::TCollection_AsciiString^ string1, System::String^ string2)
{
	const char* sz_string2 = (char*)(void*)Marshal::StringToHGlobalAnsi(string2);
	return ::TCollection_AsciiString::IsEqual(*(::TCollection_AsciiString*)string1->NativeInstance, sz_string2);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_string2);
}

bool Macad::Occt::TCollection_AsciiString::IsSameString(Macad::Occt::TCollection_AsciiString^ theString1, Macad::Occt::TCollection_AsciiString^ theString2, bool theIsCaseSensitive)
{
	return ::TCollection_AsciiString::IsSameString(*(::TCollection_AsciiString*)theString1->NativeInstance, *(::TCollection_AsciiString*)theString2->NativeInstance, theIsCaseSensitive);
}




//---------------------------------------------------------------------
//  Class  TCollection_ExtendedString
//---------------------------------------------------------------------

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString()
	: BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_ExtendedString();
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(System::String^ astring, bool isMultiByte)
	: BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
	const char* sz_astring = (char*)(void*)Marshal::StringToHGlobalAnsi(astring);
	_NativeInstance = new ::TCollection_ExtendedString(sz_astring, isMultiByte);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_astring);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(System::String^ astring)
	: BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<const wchar_t> pp_astring = PtrToStringChars(astring);
	_NativeInstance = new ::TCollection_ExtendedString((Standard_ExtString)pp_astring);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(char aChar)
	: BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_ExtendedString(aChar);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(char16_t aChar)
	: BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_ExtendedString(aChar);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(int length, char16_t filler)
	: BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_ExtendedString(length, filler);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(int value)
	: BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_ExtendedString(value);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(double value)
	: BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_ExtendedString(value);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(Macad::Occt::TCollection_ExtendedString^ astring)
	: BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_ExtendedString(*(::TCollection_ExtendedString*)astring->NativeInstance);
}

Macad::Occt::TCollection_ExtendedString::TCollection_ExtendedString(Macad::Occt::TCollection_AsciiString^ astring)
	: BaseClass<::TCollection_ExtendedString>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_ExtendedString(*(::TCollection_AsciiString*)astring->NativeInstance);
}

void Macad::Occt::TCollection_ExtendedString::AssignCat(Macad::Occt::TCollection_ExtendedString^ other)
{
	((::TCollection_ExtendedString*)_NativeInstance)->AssignCat(*(::TCollection_ExtendedString*)other->NativeInstance);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::Cat(Macad::Occt::TCollection_ExtendedString^ other)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TCollection_ExtendedString*)_NativeInstance)->Cat(*(::TCollection_ExtendedString*)other->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

void Macad::Occt::TCollection_ExtendedString::ChangeAll(char16_t aChar, char16_t NewChar)
{
	((::TCollection_ExtendedString*)_NativeInstance)->ChangeAll(aChar, NewChar);
}

void Macad::Occt::TCollection_ExtendedString::Clear()
{
	((::TCollection_ExtendedString*)_NativeInstance)->Clear();
}

void Macad::Occt::TCollection_ExtendedString::Copy(Macad::Occt::TCollection_ExtendedString^ fromwhere)
{
	((::TCollection_ExtendedString*)_NativeInstance)->Copy(*(::TCollection_ExtendedString*)fromwhere->NativeInstance);
}

void Macad::Occt::TCollection_ExtendedString::Swap(Macad::Occt::TCollection_ExtendedString^ theOther)
{
	((::TCollection_ExtendedString*)_NativeInstance)->Swap(*(::TCollection_ExtendedString*)theOther->NativeInstance);
}

void Macad::Occt::TCollection_ExtendedString::Insert(int where, char16_t what)
{
	((::TCollection_ExtendedString*)_NativeInstance)->Insert(where, what);
}

void Macad::Occt::TCollection_ExtendedString::Insert(int where, Macad::Occt::TCollection_ExtendedString^ what)
{
	((::TCollection_ExtendedString*)_NativeInstance)->Insert(where, *(::TCollection_ExtendedString*)what->NativeInstance);
}

bool Macad::Occt::TCollection_ExtendedString::IsEmpty()
{
	return ((::TCollection_ExtendedString*)_NativeInstance)->IsEmpty();
}

bool Macad::Occt::TCollection_ExtendedString::IsEqual(System::String^ other)
{
	pin_ptr<const wchar_t> pp_other = PtrToStringChars(other);
	return ((::TCollection_ExtendedString*)_NativeInstance)->IsEqual((Standard_ExtString)pp_other);
}

bool Macad::Occt::TCollection_ExtendedString::IsEqual(Macad::Occt::TCollection_ExtendedString^ other)
{
	return ((::TCollection_ExtendedString*)_NativeInstance)->IsEqual(*(::TCollection_ExtendedString*)other->NativeInstance);
}

bool Macad::Occt::TCollection_ExtendedString::IsDifferent(System::String^ other)
{
	pin_ptr<const wchar_t> pp_other = PtrToStringChars(other);
	return ((::TCollection_ExtendedString*)_NativeInstance)->IsDifferent((Standard_ExtString)pp_other);
}

bool Macad::Occt::TCollection_ExtendedString::IsDifferent(Macad::Occt::TCollection_ExtendedString^ other)
{
	return ((::TCollection_ExtendedString*)_NativeInstance)->IsDifferent(*(::TCollection_ExtendedString*)other->NativeInstance);
}

bool Macad::Occt::TCollection_ExtendedString::IsLess(System::String^ other)
{
	pin_ptr<const wchar_t> pp_other = PtrToStringChars(other);
	return ((::TCollection_ExtendedString*)_NativeInstance)->IsLess((Standard_ExtString)pp_other);
}

bool Macad::Occt::TCollection_ExtendedString::IsLess(Macad::Occt::TCollection_ExtendedString^ other)
{
	return ((::TCollection_ExtendedString*)_NativeInstance)->IsLess(*(::TCollection_ExtendedString*)other->NativeInstance);
}

bool Macad::Occt::TCollection_ExtendedString::IsGreater(System::String^ other)
{
	pin_ptr<const wchar_t> pp_other = PtrToStringChars(other);
	return ((::TCollection_ExtendedString*)_NativeInstance)->IsGreater((Standard_ExtString)pp_other);
}

bool Macad::Occt::TCollection_ExtendedString::IsGreater(Macad::Occt::TCollection_ExtendedString^ other)
{
	return ((::TCollection_ExtendedString*)_NativeInstance)->IsGreater(*(::TCollection_ExtendedString*)other->NativeInstance);
}

bool Macad::Occt::TCollection_ExtendedString::StartsWith(Macad::Occt::TCollection_ExtendedString^ theStartString)
{
	return ((::TCollection_ExtendedString*)_NativeInstance)->StartsWith(*(::TCollection_ExtendedString*)theStartString->NativeInstance);
}

bool Macad::Occt::TCollection_ExtendedString::EndsWith(Macad::Occt::TCollection_ExtendedString^ theEndString)
{
	return ((::TCollection_ExtendedString*)_NativeInstance)->EndsWith(*(::TCollection_ExtendedString*)theEndString->NativeInstance);
}

bool Macad::Occt::TCollection_ExtendedString::IsAscii()
{
	return ((::TCollection_ExtendedString*)_NativeInstance)->IsAscii();
}

int Macad::Occt::TCollection_ExtendedString::Length()
{
	return ((::TCollection_ExtendedString*)_NativeInstance)->Length();
}

void Macad::Occt::TCollection_ExtendedString::RemoveAll(char16_t what)
{
	((::TCollection_ExtendedString*)_NativeInstance)->RemoveAll(what);
}

void Macad::Occt::TCollection_ExtendedString::Remove(int where, int ahowmany)
{
	((::TCollection_ExtendedString*)_NativeInstance)->Remove(where, ahowmany);
}

void Macad::Occt::TCollection_ExtendedString::Remove(int where)
{
	((::TCollection_ExtendedString*)_NativeInstance)->Remove(where, 1);
}

int Macad::Occt::TCollection_ExtendedString::Search(Macad::Occt::TCollection_ExtendedString^ what)
{
	return ((::TCollection_ExtendedString*)_NativeInstance)->Search(*(::TCollection_ExtendedString*)what->NativeInstance);
}

int Macad::Occt::TCollection_ExtendedString::SearchFromEnd(Macad::Occt::TCollection_ExtendedString^ what)
{
	return ((::TCollection_ExtendedString*)_NativeInstance)->SearchFromEnd(*(::TCollection_ExtendedString*)what->NativeInstance);
}

void Macad::Occt::TCollection_ExtendedString::SetValue(int where, char16_t what)
{
	((::TCollection_ExtendedString*)_NativeInstance)->SetValue(where, what);
}

void Macad::Occt::TCollection_ExtendedString::SetValue(int where, Macad::Occt::TCollection_ExtendedString^ what)
{
	((::TCollection_ExtendedString*)_NativeInstance)->SetValue(where, *(::TCollection_ExtendedString*)what->NativeInstance);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::Split(int where)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TCollection_ExtendedString*)_NativeInstance)->Split(where);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::Token(System::String^ separators, int whichone)
{
	pin_ptr<const wchar_t> pp_separators = PtrToStringChars(separators);
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TCollection_ExtendedString*)_NativeInstance)->Token((Standard_ExtString)pp_separators, whichone);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_ExtendedString::Token(System::String^ separators)
{
	pin_ptr<const wchar_t> pp_separators = PtrToStringChars(separators);
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result = ((::TCollection_ExtendedString*)_NativeInstance)->Token((Standard_ExtString)pp_separators, 1);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

System::String^ Macad::Occt::TCollection_ExtendedString::ToExtString()
{
	Standard_ExtString _result;
	_result = ((::TCollection_ExtendedString*)_NativeInstance)->ToExtString();
	return gcnew System::String((const wchar_t *)_result);
}

void Macad::Occt::TCollection_ExtendedString::Trunc(int ahowmany)
{
	((::TCollection_ExtendedString*)_NativeInstance)->Trunc(ahowmany);
}

char16_t Macad::Occt::TCollection_ExtendedString::Value(int where)
{
	return ((::TCollection_ExtendedString*)_NativeInstance)->Value(where);
}

int Macad::Occt::TCollection_ExtendedString::HashCode(Macad::Occt::TCollection_ExtendedString^ theString, int theUpperBound)
{
	return ::TCollection_ExtendedString::HashCode(*(::TCollection_ExtendedString*)theString->NativeInstance, theUpperBound);
}

bool Macad::Occt::TCollection_ExtendedString::IsEqual(Macad::Occt::TCollection_ExtendedString^ theString1, Macad::Occt::TCollection_ExtendedString^ theString2)
{
	return ::TCollection_ExtendedString::IsEqual(*(::TCollection_ExtendedString*)theString1->NativeInstance, *(::TCollection_ExtendedString*)theString2->NativeInstance);
}

int Macad::Occt::TCollection_ExtendedString::LengthOfCString()
{
	return ((::TCollection_ExtendedString*)_NativeInstance)->LengthOfCString();
}




//---------------------------------------------------------------------
//  Class  TCollection_HAsciiString
//---------------------------------------------------------------------

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TCollection_HAsciiString();
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(System::String^ message)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_message = (char*)(void*)Marshal::StringToHGlobalAnsi(message);
	NativeInstance = new ::TCollection_HAsciiString(sz_message);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_message);
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(char aChar)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TCollection_HAsciiString(aChar);
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(int length, char filler)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TCollection_HAsciiString(length, filler);
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(int value)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TCollection_HAsciiString(value);
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(double value)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TCollection_HAsciiString(value);
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(Macad::Occt::TCollection_AsciiString^ aString)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TCollection_HAsciiString(*(::TCollection_AsciiString*)aString->NativeInstance);
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(Macad::Occt::TCollection_HAsciiString^ aString)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::TCollection_HAsciiString) h_aString = aString->NativeInstance;
	NativeInstance = new ::TCollection_HAsciiString(h_aString);
	aString->NativeInstance = h_aString.get();
}

Macad::Occt::TCollection_HAsciiString::TCollection_HAsciiString(Macad::Occt::TCollection_HExtendedString^ aString, char replaceNonAscii)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::TCollection_HExtendedString) h_aString = aString->NativeInstance;
	NativeInstance = new ::TCollection_HAsciiString(h_aString, replaceNonAscii);
	aString->NativeInstance = h_aString.get();
}

void Macad::Occt::TCollection_HAsciiString::AssignCat(System::String^ other)
{
	const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
	((::TCollection_HAsciiString*)_NativeInstance)->AssignCat(sz_other);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
}

void Macad::Occt::TCollection_HAsciiString::AssignCat(Macad::Occt::TCollection_HAsciiString^ other)
{
	Handle(::TCollection_HAsciiString) h_other = other->NativeInstance;
	((::TCollection_HAsciiString*)_NativeInstance)->AssignCat(h_other);
	other->NativeInstance = h_other.get();
}

void Macad::Occt::TCollection_HAsciiString::Capitalize()
{
	((::TCollection_HAsciiString*)_NativeInstance)->Capitalize();
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::Cat(System::String^ other)
{
	const char* sz_other = (char*)(void*)Marshal::StringToHGlobalAnsi(other);
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TCollection_HAsciiString*)_NativeInstance)->Cat(sz_other);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_other);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::Cat(Macad::Occt::TCollection_HAsciiString^ other)
{
	Handle(::TCollection_HAsciiString) h_other = other->NativeInstance;
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TCollection_HAsciiString*)_NativeInstance)->Cat(h_other);
	other->NativeInstance = h_other.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

void Macad::Occt::TCollection_HAsciiString::Center(int Width, char Filler)
{
	((::TCollection_HAsciiString*)_NativeInstance)->Center(Width, Filler);
}

void Macad::Occt::TCollection_HAsciiString::ChangeAll(char aChar, char NewChar, bool CaseSensitive)
{
	((::TCollection_HAsciiString*)_NativeInstance)->ChangeAll(aChar, NewChar, CaseSensitive);
}

void Macad::Occt::TCollection_HAsciiString::ChangeAll(char aChar, char NewChar)
{
	((::TCollection_HAsciiString*)_NativeInstance)->ChangeAll(aChar, NewChar, true);
}

void Macad::Occt::TCollection_HAsciiString::Clear()
{
	((::TCollection_HAsciiString*)_NativeInstance)->Clear();
}

int Macad::Occt::TCollection_HAsciiString::FirstLocationInSet(Macad::Occt::TCollection_HAsciiString^ Set, int FromIndex, int ToIndex)
{
	Handle(::TCollection_HAsciiString) h_Set = Set->NativeInstance;
	return ((::TCollection_HAsciiString*)_NativeInstance)->FirstLocationInSet(h_Set, FromIndex, ToIndex);
	Set->NativeInstance = h_Set.get();
}

int Macad::Occt::TCollection_HAsciiString::FirstLocationNotInSet(Macad::Occt::TCollection_HAsciiString^ Set, int FromIndex, int ToIndex)
{
	Handle(::TCollection_HAsciiString) h_Set = Set->NativeInstance;
	return ((::TCollection_HAsciiString*)_NativeInstance)->FirstLocationNotInSet(h_Set, FromIndex, ToIndex);
	Set->NativeInstance = h_Set.get();
}

void Macad::Occt::TCollection_HAsciiString::Insert(int where, char what)
{
	((::TCollection_HAsciiString*)_NativeInstance)->Insert(where, what);
}

void Macad::Occt::TCollection_HAsciiString::Insert(int where, System::String^ what)
{
	const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
	((::TCollection_HAsciiString*)_NativeInstance)->Insert(where, sz_what);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
}

void Macad::Occt::TCollection_HAsciiString::Insert(int where, Macad::Occt::TCollection_HAsciiString^ what)
{
	Handle(::TCollection_HAsciiString) h_what = what->NativeInstance;
	((::TCollection_HAsciiString*)_NativeInstance)->Insert(where, h_what);
	what->NativeInstance = h_what.get();
}

void Macad::Occt::TCollection_HAsciiString::InsertAfter(int Index, Macad::Occt::TCollection_HAsciiString^ other)
{
	Handle(::TCollection_HAsciiString) h_other = other->NativeInstance;
	((::TCollection_HAsciiString*)_NativeInstance)->InsertAfter(Index, h_other);
	other->NativeInstance = h_other.get();
}

void Macad::Occt::TCollection_HAsciiString::InsertBefore(int Index, Macad::Occt::TCollection_HAsciiString^ other)
{
	Handle(::TCollection_HAsciiString) h_other = other->NativeInstance;
	((::TCollection_HAsciiString*)_NativeInstance)->InsertBefore(Index, h_other);
	other->NativeInstance = h_other.get();
}

bool Macad::Occt::TCollection_HAsciiString::IsEmpty()
{
	return ((::TCollection_HAsciiString*)_NativeInstance)->IsEmpty();
}

bool Macad::Occt::TCollection_HAsciiString::IsLess(Macad::Occt::TCollection_HAsciiString^ other)
{
	Handle(::TCollection_HAsciiString) h_other = other->NativeInstance;
	return ((::TCollection_HAsciiString*)_NativeInstance)->IsLess(h_other);
	other->NativeInstance = h_other.get();
}

bool Macad::Occt::TCollection_HAsciiString::IsGreater(Macad::Occt::TCollection_HAsciiString^ other)
{
	Handle(::TCollection_HAsciiString) h_other = other->NativeInstance;
	return ((::TCollection_HAsciiString*)_NativeInstance)->IsGreater(h_other);
	other->NativeInstance = h_other.get();
}

int Macad::Occt::TCollection_HAsciiString::IntegerValue()
{
	return ((::TCollection_HAsciiString*)_NativeInstance)->IntegerValue();
}

bool Macad::Occt::TCollection_HAsciiString::IsIntegerValue()
{
	return ((::TCollection_HAsciiString*)_NativeInstance)->IsIntegerValue();
}

bool Macad::Occt::TCollection_HAsciiString::IsRealValue()
{
	return ((::TCollection_HAsciiString*)_NativeInstance)->IsRealValue();
}

bool Macad::Occt::TCollection_HAsciiString::IsAscii()
{
	return ((::TCollection_HAsciiString*)_NativeInstance)->IsAscii();
}

bool Macad::Occt::TCollection_HAsciiString::IsDifferent(Macad::Occt::TCollection_HAsciiString^ S)
{
	Handle(::TCollection_HAsciiString) h_S = S->NativeInstance;
	return ((::TCollection_HAsciiString*)_NativeInstance)->IsDifferent(h_S);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::TCollection_HAsciiString::IsSameString(Macad::Occt::TCollection_HAsciiString^ S)
{
	Handle(::TCollection_HAsciiString) h_S = S->NativeInstance;
	return ((::TCollection_HAsciiString*)_NativeInstance)->IsSameString(h_S);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::TCollection_HAsciiString::IsSameString(Macad::Occt::TCollection_HAsciiString^ S, bool CaseSensitive)
{
	Handle(::TCollection_HAsciiString) h_S = S->NativeInstance;
	return ((::TCollection_HAsciiString*)_NativeInstance)->IsSameString(h_S, CaseSensitive);
	S->NativeInstance = h_S.get();
}

void Macad::Occt::TCollection_HAsciiString::LeftAdjust()
{
	((::TCollection_HAsciiString*)_NativeInstance)->LeftAdjust();
}

void Macad::Occt::TCollection_HAsciiString::LeftJustify(int Width, char Filler)
{
	((::TCollection_HAsciiString*)_NativeInstance)->LeftJustify(Width, Filler);
}

int Macad::Occt::TCollection_HAsciiString::Length()
{
	return ((::TCollection_HAsciiString*)_NativeInstance)->Length();
}

int Macad::Occt::TCollection_HAsciiString::Location(Macad::Occt::TCollection_HAsciiString^ other, int FromIndex, int ToIndex)
{
	Handle(::TCollection_HAsciiString) h_other = other->NativeInstance;
	return ((::TCollection_HAsciiString*)_NativeInstance)->Location(h_other, FromIndex, ToIndex);
	other->NativeInstance = h_other.get();
}

int Macad::Occt::TCollection_HAsciiString::Location(int N, char C, int FromIndex, int ToIndex)
{
	return ((::TCollection_HAsciiString*)_NativeInstance)->Location(N, C, FromIndex, ToIndex);
}

void Macad::Occt::TCollection_HAsciiString::LowerCase()
{
	((::TCollection_HAsciiString*)_NativeInstance)->LowerCase();
}

void Macad::Occt::TCollection_HAsciiString::Prepend(Macad::Occt::TCollection_HAsciiString^ other)
{
	Handle(::TCollection_HAsciiString) h_other = other->NativeInstance;
	((::TCollection_HAsciiString*)_NativeInstance)->Prepend(h_other);
	other->NativeInstance = h_other.get();
}

double Macad::Occt::TCollection_HAsciiString::RealValue()
{
	return ((::TCollection_HAsciiString*)_NativeInstance)->RealValue();
}

void Macad::Occt::TCollection_HAsciiString::RemoveAll(char C, bool CaseSensitive)
{
	((::TCollection_HAsciiString*)_NativeInstance)->RemoveAll(C, CaseSensitive);
}

void Macad::Occt::TCollection_HAsciiString::RemoveAll(char what)
{
	((::TCollection_HAsciiString*)_NativeInstance)->RemoveAll(what);
}

void Macad::Occt::TCollection_HAsciiString::Remove(int where, int ahowmany)
{
	((::TCollection_HAsciiString*)_NativeInstance)->Remove(where, ahowmany);
}

void Macad::Occt::TCollection_HAsciiString::Remove(int where)
{
	((::TCollection_HAsciiString*)_NativeInstance)->Remove(where, 1);
}

void Macad::Occt::TCollection_HAsciiString::RightAdjust()
{
	((::TCollection_HAsciiString*)_NativeInstance)->RightAdjust();
}

void Macad::Occt::TCollection_HAsciiString::RightJustify(int Width, char Filler)
{
	((::TCollection_HAsciiString*)_NativeInstance)->RightJustify(Width, Filler);
}

int Macad::Occt::TCollection_HAsciiString::Search(System::String^ what)
{
	const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
	return ((::TCollection_HAsciiString*)_NativeInstance)->Search(sz_what);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
}

int Macad::Occt::TCollection_HAsciiString::Search(Macad::Occt::TCollection_HAsciiString^ what)
{
	Handle(::TCollection_HAsciiString) h_what = what->NativeInstance;
	return ((::TCollection_HAsciiString*)_NativeInstance)->Search(h_what);
	what->NativeInstance = h_what.get();
}

int Macad::Occt::TCollection_HAsciiString::SearchFromEnd(System::String^ what)
{
	const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
	return ((::TCollection_HAsciiString*)_NativeInstance)->SearchFromEnd(sz_what);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
}

int Macad::Occt::TCollection_HAsciiString::SearchFromEnd(Macad::Occt::TCollection_HAsciiString^ what)
{
	Handle(::TCollection_HAsciiString) h_what = what->NativeInstance;
	return ((::TCollection_HAsciiString*)_NativeInstance)->SearchFromEnd(h_what);
	what->NativeInstance = h_what.get();
}

void Macad::Occt::TCollection_HAsciiString::SetValue(int where, char what)
{
	((::TCollection_HAsciiString*)_NativeInstance)->SetValue(where, what);
}

void Macad::Occt::TCollection_HAsciiString::SetValue(int where, System::String^ what)
{
	const char* sz_what = (char*)(void*)Marshal::StringToHGlobalAnsi(what);
	((::TCollection_HAsciiString*)_NativeInstance)->SetValue(where, sz_what);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_what);
}

void Macad::Occt::TCollection_HAsciiString::SetValue(int where, Macad::Occt::TCollection_HAsciiString^ what)
{
	Handle(::TCollection_HAsciiString) h_what = what->NativeInstance;
	((::TCollection_HAsciiString*)_NativeInstance)->SetValue(where, h_what);
	what->NativeInstance = h_what.get();
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::Split(int where)
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TCollection_HAsciiString*)_NativeInstance)->Split(where);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::SubString(int FromIndex, int ToIndex)
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TCollection_HAsciiString*)_NativeInstance)->SubString(FromIndex, ToIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

System::String^ Macad::Occt::TCollection_HAsciiString::ToCString()
{
	Standard_CString _result;
	_result = ((::TCollection_HAsciiString*)_NativeInstance)->ToCString();
	return gcnew System::String(_result);
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::Token(System::String^ separators, int whichone)
{
	const char* sz_separators = (char*)(void*)Marshal::StringToHGlobalAnsi(separators);
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TCollection_HAsciiString*)_NativeInstance)->Token(sz_separators, whichone);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_separators);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::Token(System::String^ separators)
{
	const char* sz_separators = (char*)(void*)Marshal::StringToHGlobalAnsi(separators);
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TCollection_HAsciiString*)_NativeInstance)->Token(sz_separators, 1);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_separators);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::Token()
{
	Handle(::TCollection_HAsciiString) _result;
	_result = ((::TCollection_HAsciiString*)_NativeInstance)->Token(" \t", 1);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted( _result.get());
}

void Macad::Occt::TCollection_HAsciiString::Trunc(int ahowmany)
{
	((::TCollection_HAsciiString*)_NativeInstance)->Trunc(ahowmany);
}

void Macad::Occt::TCollection_HAsciiString::UpperCase()
{
	((::TCollection_HAsciiString*)_NativeInstance)->UpperCase();
}

int Macad::Occt::TCollection_HAsciiString::UsefullLength()
{
	return ((::TCollection_HAsciiString*)_NativeInstance)->UsefullLength();
}

char Macad::Occt::TCollection_HAsciiString::Value(int where)
{
	return ((::TCollection_HAsciiString*)_NativeInstance)->Value(where);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::TCollection_HAsciiString::String()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::TCollection_HAsciiString*)_NativeInstance)->String();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::TCollection_HAsciiString::IsSameState(Macad::Occt::TCollection_HAsciiString^ other)
{
	Handle(::TCollection_HAsciiString) h_other = other->NativeInstance;
	return ((::TCollection_HAsciiString*)_NativeInstance)->IsSameState(h_other);
	other->NativeInstance = h_other.get();
}


Macad::Occt::TCollection_HAsciiString^ Macad::Occt::TCollection_HAsciiString::CreateDowncasted(::TCollection_HAsciiString* instance)
{
	return gcnew Macad::Occt::TCollection_HAsciiString( instance );
}



//---------------------------------------------------------------------
//  Class  TCollection_HExtendedString
//---------------------------------------------------------------------

Macad::Occt::TCollection_HExtendedString::TCollection_HExtendedString()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TCollection_HExtendedString();
}

Macad::Occt::TCollection_HExtendedString::TCollection_HExtendedString(System::String^ message)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_message = (char*)(void*)Marshal::StringToHGlobalAnsi(message);
	NativeInstance = new ::TCollection_HExtendedString(sz_message);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_message);
}

Macad::Occt::TCollection_HExtendedString::TCollection_HExtendedString(char16_t aChar)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TCollection_HExtendedString(aChar);
}

Macad::Occt::TCollection_HExtendedString::TCollection_HExtendedString(int length, char16_t filler)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TCollection_HExtendedString(length, filler);
}

Macad::Occt::TCollection_HExtendedString::TCollection_HExtendedString(Macad::Occt::TCollection_ExtendedString^ aString)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TCollection_HExtendedString(*(::TCollection_ExtendedString*)aString->NativeInstance);
}

Macad::Occt::TCollection_HExtendedString::TCollection_HExtendedString(Macad::Occt::TCollection_HAsciiString^ aString)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::TCollection_HAsciiString) h_aString = aString->NativeInstance;
	NativeInstance = new ::TCollection_HExtendedString(h_aString);
	aString->NativeInstance = h_aString.get();
}

Macad::Occt::TCollection_HExtendedString::TCollection_HExtendedString(Macad::Occt::TCollection_HExtendedString^ aString)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::TCollection_HExtendedString) h_aString = aString->NativeInstance;
	NativeInstance = new ::TCollection_HExtendedString(h_aString);
	aString->NativeInstance = h_aString.get();
}

void Macad::Occt::TCollection_HExtendedString::AssignCat(Macad::Occt::TCollection_HExtendedString^ other)
{
	Handle(::TCollection_HExtendedString) h_other = other->NativeInstance;
	((::TCollection_HExtendedString*)_NativeInstance)->AssignCat(h_other);
	other->NativeInstance = h_other.get();
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TCollection_HExtendedString::Cat(Macad::Occt::TCollection_HExtendedString^ other)
{
	Handle(::TCollection_HExtendedString) h_other = other->NativeInstance;
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TCollection_HExtendedString*)_NativeInstance)->Cat(h_other);
	other->NativeInstance = h_other.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

void Macad::Occt::TCollection_HExtendedString::ChangeAll(char16_t aChar, char16_t NewChar)
{
	((::TCollection_HExtendedString*)_NativeInstance)->ChangeAll(aChar, NewChar);
}

void Macad::Occt::TCollection_HExtendedString::Clear()
{
	((::TCollection_HExtendedString*)_NativeInstance)->Clear();
}

bool Macad::Occt::TCollection_HExtendedString::IsEmpty()
{
	return ((::TCollection_HExtendedString*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TCollection_HExtendedString::Insert(int where, char16_t what)
{
	((::TCollection_HExtendedString*)_NativeInstance)->Insert(where, what);
}

void Macad::Occt::TCollection_HExtendedString::Insert(int where, Macad::Occt::TCollection_HExtendedString^ what)
{
	Handle(::TCollection_HExtendedString) h_what = what->NativeInstance;
	((::TCollection_HExtendedString*)_NativeInstance)->Insert(where, h_what);
	what->NativeInstance = h_what.get();
}

bool Macad::Occt::TCollection_HExtendedString::IsLess(Macad::Occt::TCollection_HExtendedString^ other)
{
	Handle(::TCollection_HExtendedString) h_other = other->NativeInstance;
	return ((::TCollection_HExtendedString*)_NativeInstance)->IsLess(h_other);
	other->NativeInstance = h_other.get();
}

bool Macad::Occt::TCollection_HExtendedString::IsGreater(Macad::Occt::TCollection_HExtendedString^ other)
{
	Handle(::TCollection_HExtendedString) h_other = other->NativeInstance;
	return ((::TCollection_HExtendedString*)_NativeInstance)->IsGreater(h_other);
	other->NativeInstance = h_other.get();
}

bool Macad::Occt::TCollection_HExtendedString::IsAscii()
{
	return ((::TCollection_HExtendedString*)_NativeInstance)->IsAscii();
}

int Macad::Occt::TCollection_HExtendedString::Length()
{
	return ((::TCollection_HExtendedString*)_NativeInstance)->Length();
}

void Macad::Occt::TCollection_HExtendedString::Remove(int where, int ahowmany)
{
	((::TCollection_HExtendedString*)_NativeInstance)->Remove(where, ahowmany);
}

void Macad::Occt::TCollection_HExtendedString::Remove(int where)
{
	((::TCollection_HExtendedString*)_NativeInstance)->Remove(where, 1);
}

void Macad::Occt::TCollection_HExtendedString::RemoveAll(char16_t what)
{
	((::TCollection_HExtendedString*)_NativeInstance)->RemoveAll(what);
}

void Macad::Occt::TCollection_HExtendedString::SetValue(int where, char16_t what)
{
	((::TCollection_HExtendedString*)_NativeInstance)->SetValue(where, what);
}

void Macad::Occt::TCollection_HExtendedString::SetValue(int where, Macad::Occt::TCollection_HExtendedString^ what)
{
	Handle(::TCollection_HExtendedString) h_what = what->NativeInstance;
	((::TCollection_HExtendedString*)_NativeInstance)->SetValue(where, h_what);
	what->NativeInstance = h_what.get();
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TCollection_HExtendedString::Split(int where)
{
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TCollection_HExtendedString*)_NativeInstance)->Split(where);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

int Macad::Occt::TCollection_HExtendedString::Search(Macad::Occt::TCollection_HExtendedString^ what)
{
	Handle(::TCollection_HExtendedString) h_what = what->NativeInstance;
	return ((::TCollection_HExtendedString*)_NativeInstance)->Search(h_what);
	what->NativeInstance = h_what.get();
}

int Macad::Occt::TCollection_HExtendedString::SearchFromEnd(Macad::Occt::TCollection_HExtendedString^ what)
{
	Handle(::TCollection_HExtendedString) h_what = what->NativeInstance;
	return ((::TCollection_HExtendedString*)_NativeInstance)->SearchFromEnd(h_what);
	what->NativeInstance = h_what.get();
}

System::String^ Macad::Occt::TCollection_HExtendedString::ToExtString()
{
	Standard_ExtString _result;
	_result = ((::TCollection_HExtendedString*)_NativeInstance)->ToExtString();
	return gcnew System::String((const wchar_t *)_result);
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TCollection_HExtendedString::Token(System::String^ separators, int whichone)
{
	pin_ptr<const wchar_t> pp_separators = PtrToStringChars(separators);
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TCollection_HExtendedString*)_NativeInstance)->Token((Standard_ExtString)pp_separators, whichone);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TCollection_HExtendedString::Token(System::String^ separators)
{
	pin_ptr<const wchar_t> pp_separators = PtrToStringChars(separators);
	Handle(::TCollection_HExtendedString) _result;
	_result = ((::TCollection_HExtendedString*)_NativeInstance)->Token((Standard_ExtString)pp_separators, 1);
	 return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HExtendedString::CreateDowncasted( _result.get());
}

void Macad::Occt::TCollection_HExtendedString::Trunc(int ahowmany)
{
	((::TCollection_HExtendedString*)_NativeInstance)->Trunc(ahowmany);
}

char16_t Macad::Occt::TCollection_HExtendedString::Value(int where)
{
	return ((::TCollection_HExtendedString*)_NativeInstance)->Value(where);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::TCollection_HExtendedString::String()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::TCollection_HExtendedString*)_NativeInstance)->String();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

bool Macad::Occt::TCollection_HExtendedString::IsSameState(Macad::Occt::TCollection_HExtendedString^ other)
{
	Handle(::TCollection_HExtendedString) h_other = other->NativeInstance;
	return ((::TCollection_HExtendedString*)_NativeInstance)->IsSameState(h_other);
	other->NativeInstance = h_other.get();
}


Macad::Occt::TCollection_HExtendedString^ Macad::Occt::TCollection_HExtendedString::CreateDowncasted(::TCollection_HExtendedString* instance)
{
	return gcnew Macad::Occt::TCollection_HExtendedString( instance );
}



//---------------------------------------------------------------------
//  Class  TCollection_BaseSequence
//---------------------------------------------------------------------

bool Macad::Occt::TCollection_BaseSequence::IsEmpty()
{
	return ((::TCollection_BaseSequence*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TCollection_BaseSequence::Length()
{
	return ((::TCollection_BaseSequence*)_NativeInstance)->Length();
}

void Macad::Occt::TCollection_BaseSequence::Reverse()
{
	((::TCollection_BaseSequence*)_NativeInstance)->Reverse();
}

void Macad::Occt::TCollection_BaseSequence::Exchange(int I, int J)
{
	((::TCollection_BaseSequence*)_NativeInstance)->Exchange(I, J);
}




//---------------------------------------------------------------------
//  Class  TCollection_BasicMap
//---------------------------------------------------------------------

Macad::Occt::TCollection_BasicMap::TCollection_BasicMap(Macad::Occt::TCollection_BasicMap^ parameter1)
	: BaseClass<::TCollection_BasicMap>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_BasicMap(*(::TCollection_BasicMap*)parameter1->NativeInstance);
}

int Macad::Occt::TCollection_BasicMap::NbBuckets()
{
	return ((::TCollection_BasicMap*)_NativeInstance)->NbBuckets();
}

int Macad::Occt::TCollection_BasicMap::Extent()
{
	return ((::TCollection_BasicMap*)_NativeInstance)->Extent();
}

bool Macad::Occt::TCollection_BasicMap::IsEmpty()
{
	return ((::TCollection_BasicMap*)_NativeInstance)->IsEmpty();
}




//---------------------------------------------------------------------
//  Class  TCollection_MapNode
//---------------------------------------------------------------------

Macad::Occt::TCollection_MapNode::TCollection_MapNode(Macad::Occt::TCollection_MapNode^ n)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TCollection_MapNode(*(::TCollection_MapNode*)n->NativeInstance);
}

Macad::Occt::TCollection_MapNode^ Macad::Occt::TCollection_MapNode::Next()
{
	throw gcnew System::NotImplementedException();
}


Macad::Occt::TCollection_MapNode^ Macad::Occt::TCollection_MapNode::CreateDowncasted(::TCollection_MapNode* instance)
{
	return gcnew Macad::Occt::TCollection_MapNode( instance );
}



//---------------------------------------------------------------------
//  Class  TCollection_BasicMapIterator
//---------------------------------------------------------------------

Macad::Occt::TCollection_BasicMapIterator::TCollection_BasicMapIterator(Macad::Occt::TCollection_BasicMapIterator^ parameter1)
	: BaseClass<::TCollection_BasicMapIterator>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection_BasicMapIterator(*(::TCollection_BasicMapIterator*)parameter1->NativeInstance);
}

void Macad::Occt::TCollection_BasicMapIterator::Reset()
{
	((::TCollection_BasicMapIterator*)_NativeInstance)->Reset();
}

bool Macad::Occt::TCollection_BasicMapIterator::More()
{
	return ((::TCollection_BasicMapIterator*)_NativeInstance)->More();
}

void Macad::Occt::TCollection_BasicMapIterator::Next()
{
	((::TCollection_BasicMapIterator*)_NativeInstance)->Next();
}




//---------------------------------------------------------------------
//  Class  TCollection
//---------------------------------------------------------------------

Macad::Occt::TCollection::TCollection()
	: BaseClass<::TCollection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection();
}

Macad::Occt::TCollection::TCollection(Macad::Occt::TCollection^ parameter1)
	: BaseClass<::TCollection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TCollection(*(::TCollection*)parameter1->NativeInstance);
}

int Macad::Occt::TCollection::NextPrimeForMap(int I)
{
	return ::TCollection::NextPrimeForMap(I);
}



