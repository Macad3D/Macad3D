// Generated wrapper code for package TCollection

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TCollection_HAsciiString
//---------------------------------------------------------------------
public ref class TCollection_HAsciiString sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TCollection_HAsciiString_h
public:
	Include_TCollection_HAsciiString_h
#endif

public:
	TCollection_HAsciiString(::TCollection_HAsciiString* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TCollection_HAsciiString(::TCollection_HAsciiString& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TCollection_HAsciiString* NativeInstance
	{
		::TCollection_HAsciiString* get()
		{
			return static_cast<::TCollection_HAsciiString*>(_NativeInstance);
		}
	}

	static Macad::Occt::TCollection_HAsciiString^ CreateDowncasted(::TCollection_HAsciiString* instance);

public:
	TCollection_HAsciiString();
	TCollection_HAsciiString(System::String^ message);
	TCollection_HAsciiString(char aChar);
	TCollection_HAsciiString(int length, char filler);
	TCollection_HAsciiString(int value);
	TCollection_HAsciiString(double value);
	TCollection_HAsciiString(Macad::Occt::TCollection_AsciiString^ aString);
	TCollection_HAsciiString(Macad::Occt::TCollection_HAsciiString^ aString);
	TCollection_HAsciiString(Macad::Occt::TCollection_HExtendedString^ aString, char replaceNonAscii);
	void AssignCat(System::String^ other);
	void AssignCat(Macad::Occt::TCollection_HAsciiString^ other);
	void Capitalize();
	Macad::Occt::TCollection_HAsciiString^ Cat(System::String^ other);
	Macad::Occt::TCollection_HAsciiString^ Cat(Macad::Occt::TCollection_HAsciiString^ other);
	void Center(int Width, char Filler);
	void ChangeAll(char aChar, char NewChar, bool CaseSensitive);
	void ChangeAll(char aChar, char NewChar);
	void Clear();
	int FirstLocationInSet(Macad::Occt::TCollection_HAsciiString^ Set, int FromIndex, int ToIndex);
	int FirstLocationNotInSet(Macad::Occt::TCollection_HAsciiString^ Set, int FromIndex, int ToIndex);
	void Insert(int where, char what);
	void Insert(int where, System::String^ what);
	void Insert(int where, Macad::Occt::TCollection_HAsciiString^ what);
	void InsertAfter(int Index, Macad::Occt::TCollection_HAsciiString^ other);
	void InsertBefore(int Index, Macad::Occt::TCollection_HAsciiString^ other);
	bool IsEmpty();
	bool IsLess(Macad::Occt::TCollection_HAsciiString^ other);
	bool IsGreater(Macad::Occt::TCollection_HAsciiString^ other);
	int IntegerValue();
	bool IsIntegerValue();
	bool IsRealValue();
	bool IsAscii();
	bool IsDifferent(Macad::Occt::TCollection_HAsciiString^ S);
	bool IsSameString(Macad::Occt::TCollection_HAsciiString^ S);
	bool IsSameString(Macad::Occt::TCollection_HAsciiString^ S, bool CaseSensitive);
	void LeftAdjust();
	void LeftJustify(int Width, char Filler);
	int Length();
	int Location(Macad::Occt::TCollection_HAsciiString^ other, int FromIndex, int ToIndex);
	int Location(int N, char C, int FromIndex, int ToIndex);
	void LowerCase();
	void Prepend(Macad::Occt::TCollection_HAsciiString^ other);
	/* Method skipped due to unknown mapping: void Print(ostream astream, ) */
	double RealValue();
	void RemoveAll(char C, bool CaseSensitive);
	void RemoveAll(char what);
	void Remove(int where, int ahowmany);
	void Remove(int where);
	void RightAdjust();
	void RightJustify(int Width, char Filler);
	int Search(System::String^ what);
	int Search(Macad::Occt::TCollection_HAsciiString^ what);
	int SearchFromEnd(System::String^ what);
	int SearchFromEnd(Macad::Occt::TCollection_HAsciiString^ what);
	void SetValue(int where, char what);
	void SetValue(int where, System::String^ what);
	void SetValue(int where, Macad::Occt::TCollection_HAsciiString^ what);
	Macad::Occt::TCollection_HAsciiString^ Split(int where);
	Macad::Occt::TCollection_HAsciiString^ SubString(int FromIndex, int ToIndex);
	System::String^ ToCString();
	Macad::Occt::TCollection_HAsciiString^ Token(System::String^ separators, int whichone);
	Macad::Occt::TCollection_HAsciiString^ Token(System::String^ separators);
	Macad::Occt::TCollection_HAsciiString^ Token();
	void Trunc(int ahowmany);
	void UpperCase();
	int UsefullLength();
	char Value(int where);
	Macad::Occt::TCollection_AsciiString^ String();
	bool IsSameState(Macad::Occt::TCollection_HAsciiString^ other);
}; // class TCollection_HAsciiString

//---------------------------------------------------------------------
//  Class  TCollection_ExtendedString
//---------------------------------------------------------------------
public ref class TCollection_ExtendedString sealed : public BaseClass<::TCollection_ExtendedString>
{

#ifdef Include_TCollection_ExtendedString_h
public:
	Include_TCollection_ExtendedString_h
#endif

public:
	TCollection_ExtendedString(::TCollection_ExtendedString* nativeInstance)
		: BaseClass<::TCollection_ExtendedString>( nativeInstance, true )
	{}

	TCollection_ExtendedString(::TCollection_ExtendedString& nativeInstance)
		: BaseClass<::TCollection_ExtendedString>( &nativeInstance, false )
	{}

	property ::TCollection_ExtendedString* NativeInstance
	{
		::TCollection_ExtendedString* get()
		{
			return static_cast<::TCollection_ExtendedString*>(_NativeInstance);
		}
	}

public:
	TCollection_ExtendedString();
	TCollection_ExtendedString(System::String^ astring, bool isMultiByte);
	TCollection_ExtendedString(System::String^ astring);
	/* Method skipped due to unknown mapping: void TCollection_ExtendedString(wchar_t theStringUtf, ) */
	TCollection_ExtendedString(char aChar);
	TCollection_ExtendedString(char16_t aChar);
	TCollection_ExtendedString(int length, char16_t filler);
	TCollection_ExtendedString(int value);
	TCollection_ExtendedString(double value);
	TCollection_ExtendedString(Macad::Occt::TCollection_ExtendedString^ astring);
	TCollection_ExtendedString(Macad::Occt::TCollection_AsciiString^ astring, bool isMultiByte);
	TCollection_ExtendedString(Macad::Occt::TCollection_AsciiString^ astring);
	void AssignCat(Macad::Occt::TCollection_ExtendedString^ other);
	/* Method skipped due to unknown mapping: void AssignCat(char16_t theChar, ) */
	Macad::Occt::TCollection_ExtendedString^ Cat(Macad::Occt::TCollection_ExtendedString^ other);
	void ChangeAll(char16_t aChar, char16_t NewChar);
	void Clear();
	void Copy(Macad::Occt::TCollection_ExtendedString^ fromwhere);
	void Swap(Macad::Occt::TCollection_ExtendedString^ theOther);
	void Insert(int where, char16_t what);
	void Insert(int where, Macad::Occt::TCollection_ExtendedString^ what);
	bool IsEmpty();
	bool IsEqual(System::String^ other);
	bool IsEqual(Macad::Occt::TCollection_ExtendedString^ other);
	bool IsDifferent(System::String^ other);
	bool IsDifferent(Macad::Occt::TCollection_ExtendedString^ other);
	bool IsLess(System::String^ other);
	bool IsLess(Macad::Occt::TCollection_ExtendedString^ other);
	bool IsGreater(System::String^ other);
	bool IsGreater(Macad::Occt::TCollection_ExtendedString^ other);
	bool StartsWith(Macad::Occt::TCollection_ExtendedString^ theStartString);
	bool EndsWith(Macad::Occt::TCollection_ExtendedString^ theEndString);
	bool IsAscii();
	int Length();
	/* Method skipped due to unknown mapping: void Print(ostream astream, ) */
	void RemoveAll(char16_t what);
	void Remove(int where, int ahowmany);
	void Remove(int where);
	int Search(Macad::Occt::TCollection_ExtendedString^ what);
	int SearchFromEnd(Macad::Occt::TCollection_ExtendedString^ what);
	void SetValue(int where, char16_t what);
	void SetValue(int where, Macad::Occt::TCollection_ExtendedString^ what);
	Macad::Occt::TCollection_ExtendedString^ Split(int where);
	Macad::Occt::TCollection_ExtendedString^ Token(System::String^ separators, int whichone);
	Macad::Occt::TCollection_ExtendedString^ Token(System::String^ separators);
	System::String^ ToExtString();
	/* Method skipped due to unknown mapping: wchar_t ToWideString() */
	void Trunc(int ahowmany);
	char16_t Value(int where);
	static int HashCode(Macad::Occt::TCollection_ExtendedString^ theString, int theUpperBound);
	static bool IsEqual(Macad::Occt::TCollection_ExtendedString^ theString1, Macad::Occt::TCollection_ExtendedString^ theString2);
	int LengthOfCString();
}; // class TCollection_ExtendedString

//---------------------------------------------------------------------
//  Class  TCollection_AsciiString
//---------------------------------------------------------------------
public ref class TCollection_AsciiString sealed : public BaseClass<::TCollection_AsciiString>
{

#ifdef Include_TCollection_AsciiString_h
public:
	Include_TCollection_AsciiString_h
#endif

public:
	TCollection_AsciiString(::TCollection_AsciiString* nativeInstance)
		: BaseClass<::TCollection_AsciiString>( nativeInstance, true )
	{}

	TCollection_AsciiString(::TCollection_AsciiString& nativeInstance)
		: BaseClass<::TCollection_AsciiString>( &nativeInstance, false )
	{}

	property ::TCollection_AsciiString* NativeInstance
	{
		::TCollection_AsciiString* get()
		{
			return static_cast<::TCollection_AsciiString*>(_NativeInstance);
		}
	}

public:
	TCollection_AsciiString();
	TCollection_AsciiString(System::String^ message);
	TCollection_AsciiString(System::String^ message, int aLen);
	TCollection_AsciiString(char aChar);
	TCollection_AsciiString(int length, char filler);
	TCollection_AsciiString(int value);
	TCollection_AsciiString(double value);
	TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ astring);
	TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ astring, char message);
	TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ astring, System::String^ message);
	TCollection_AsciiString(Macad::Occt::TCollection_AsciiString^ astring, Macad::Occt::TCollection_AsciiString^ message);
	TCollection_AsciiString(Macad::Occt::TCollection_ExtendedString^ astring, char replaceNonAscii);
	TCollection_AsciiString(Macad::Occt::TCollection_ExtendedString^ astring);
	/* Method skipped due to unknown mapping: void TCollection_AsciiString(wchar_t theStringUtf, ) */
	void AssignCat(char other);
	void AssignCat(int other);
	void AssignCat(double other);
	void AssignCat(System::String^ other);
	void AssignCat(Macad::Occt::TCollection_AsciiString^ other);
	void Capitalize();
	Macad::Occt::TCollection_AsciiString^ Cat(char other);
	Macad::Occt::TCollection_AsciiString^ Cat(int other);
	Macad::Occt::TCollection_AsciiString^ Cat(double other);
	Macad::Occt::TCollection_AsciiString^ Cat(System::String^ other);
	Macad::Occt::TCollection_AsciiString^ Cat(Macad::Occt::TCollection_AsciiString^ other);
	void Center(int Width, char Filler);
	void ChangeAll(char aChar, char NewChar, bool CaseSensitive);
	void ChangeAll(char aChar, char NewChar);
	void Clear();
	void Copy(System::String^ fromwhere);
	void Copy(Macad::Occt::TCollection_AsciiString^ fromwhere);
	void Swap(Macad::Occt::TCollection_AsciiString^ theOther);
	int FirstLocationInSet(Macad::Occt::TCollection_AsciiString^ Set, int FromIndex, int ToIndex);
	int FirstLocationNotInSet(Macad::Occt::TCollection_AsciiString^ Set, int FromIndex, int ToIndex);
	void Insert(int where, char what);
	void Insert(int where, System::String^ what);
	void Insert(int where, Macad::Occt::TCollection_AsciiString^ what);
	void InsertAfter(int Index, Macad::Occt::TCollection_AsciiString^ other);
	void InsertBefore(int Index, Macad::Occt::TCollection_AsciiString^ other);
	bool IsEmpty();
	bool IsEqual(System::String^ other);
	bool IsEqual(Macad::Occt::TCollection_AsciiString^ other);
	bool IsDifferent(System::String^ other);
	bool IsDifferent(Macad::Occt::TCollection_AsciiString^ other);
	bool IsLess(System::String^ other);
	bool IsLess(Macad::Occt::TCollection_AsciiString^ other);
	bool IsGreater(System::String^ other);
	bool IsGreater(Macad::Occt::TCollection_AsciiString^ other);
	bool StartsWith(Macad::Occt::TCollection_AsciiString^ theStartString);
	bool EndsWith(Macad::Occt::TCollection_AsciiString^ theEndString);
	int IntegerValue();
	bool IsIntegerValue();
	bool IsRealValue(bool theToCheckFull);
	bool IsRealValue();
	bool IsAscii();
	void LeftAdjust();
	void LeftJustify(int Width, char Filler);
	int Length();
	int Location(Macad::Occt::TCollection_AsciiString^ other, int FromIndex, int ToIndex);
	int Location(int N, char C, int FromIndex, int ToIndex);
	void LowerCase();
	void Prepend(Macad::Occt::TCollection_AsciiString^ other);
	/* Method skipped due to unknown mapping: void Print(ostream astream, ) */
	/* Method skipped due to unknown mapping: void Read(istream astream, ) */
	double RealValue();
	void RemoveAll(char C, bool CaseSensitive);
	void RemoveAll(char what);
	void Remove(int where, int ahowmany);
	void Remove(int where);
	void RightAdjust();
	void RightJustify(int Width, char Filler);
	int Search(System::String^ what);
	int Search(Macad::Occt::TCollection_AsciiString^ what);
	int SearchFromEnd(System::String^ what);
	int SearchFromEnd(Macad::Occt::TCollection_AsciiString^ what);
	void SetValue(int where, char what);
	void SetValue(int where, System::String^ what);
	void SetValue(int where, Macad::Occt::TCollection_AsciiString^ what);
	Macad::Occt::TCollection_AsciiString^ Split(int where);
	Macad::Occt::TCollection_AsciiString^ SubString(int FromIndex, int ToIndex);
	System::String^ ToCString();
	Macad::Occt::TCollection_AsciiString^ Token(System::String^ separators, int whichone);
	Macad::Occt::TCollection_AsciiString^ Token(System::String^ separators);
	Macad::Occt::TCollection_AsciiString^ Token();
	void Trunc(int ahowmany);
	void UpperCase();
	int UsefullLength();
	char Value(int where);
	static int HashCode(Macad::Occt::TCollection_AsciiString^ theAsciiString, int theUpperBound);
	static bool IsEqual(Macad::Occt::TCollection_AsciiString^ string1, Macad::Occt::TCollection_AsciiString^ string2);
	static bool IsEqual(Macad::Occt::TCollection_AsciiString^ string1, System::String^ string2);
	static bool IsSameString(Macad::Occt::TCollection_AsciiString^ theString1, Macad::Occt::TCollection_AsciiString^ theString2, bool theIsCaseSensitive);
}; // class TCollection_AsciiString

//---------------------------------------------------------------------
//  Class  TCollection
//---------------------------------------------------------------------
public ref class TCollection sealed : public BaseClass<::TCollection>
{

#ifdef Include_TCollection_h
public:
	Include_TCollection_h
#endif

public:
	TCollection(::TCollection* nativeInstance)
		: BaseClass<::TCollection>( nativeInstance, true )
	{}

	TCollection(::TCollection& nativeInstance)
		: BaseClass<::TCollection>( &nativeInstance, false )
	{}

	property ::TCollection* NativeInstance
	{
		::TCollection* get()
		{
			return static_cast<::TCollection*>(_NativeInstance);
		}
	}

public:
	TCollection();
	TCollection(Macad::Occt::TCollection^ parameter1);
	static int NextPrimeForMap(int I);
}; // class TCollection

//---------------------------------------------------------------------
//  Class  TCollection_HExtendedString
//---------------------------------------------------------------------
public ref class TCollection_HExtendedString sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TCollection_HExtendedString_h
public:
	Include_TCollection_HExtendedString_h
#endif

public:
	TCollection_HExtendedString(::TCollection_HExtendedString* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TCollection_HExtendedString(::TCollection_HExtendedString& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TCollection_HExtendedString* NativeInstance
	{
		::TCollection_HExtendedString* get()
		{
			return static_cast<::TCollection_HExtendedString*>(_NativeInstance);
		}
	}

	static Macad::Occt::TCollection_HExtendedString^ CreateDowncasted(::TCollection_HExtendedString* instance);

public:
	TCollection_HExtendedString();
	TCollection_HExtendedString(System::String^ message);
	TCollection_HExtendedString(char16_t aChar);
	TCollection_HExtendedString(int length, char16_t filler);
	TCollection_HExtendedString(Macad::Occt::TCollection_ExtendedString^ aString);
	TCollection_HExtendedString(Macad::Occt::TCollection_HAsciiString^ aString);
	TCollection_HExtendedString(Macad::Occt::TCollection_HExtendedString^ aString);
	void AssignCat(Macad::Occt::TCollection_HExtendedString^ other);
	Macad::Occt::TCollection_HExtendedString^ Cat(Macad::Occt::TCollection_HExtendedString^ other);
	void ChangeAll(char16_t aChar, char16_t NewChar);
	void Clear();
	bool IsEmpty();
	void Insert(int where, char16_t what);
	void Insert(int where, Macad::Occt::TCollection_HExtendedString^ what);
	bool IsLess(Macad::Occt::TCollection_HExtendedString^ other);
	bool IsGreater(Macad::Occt::TCollection_HExtendedString^ other);
	bool IsAscii();
	int Length();
	void Remove(int where, int ahowmany);
	void Remove(int where);
	void RemoveAll(char16_t what);
	void SetValue(int where, char16_t what);
	void SetValue(int where, Macad::Occt::TCollection_HExtendedString^ what);
	Macad::Occt::TCollection_HExtendedString^ Split(int where);
	int Search(Macad::Occt::TCollection_HExtendedString^ what);
	int SearchFromEnd(Macad::Occt::TCollection_HExtendedString^ what);
	System::String^ ToExtString();
	Macad::Occt::TCollection_HExtendedString^ Token(System::String^ separators, int whichone);
	Macad::Occt::TCollection_HExtendedString^ Token(System::String^ separators);
	void Trunc(int ahowmany);
	char16_t Value(int where);
	Macad::Occt::TCollection_ExtendedString^ String();
	/* Method skipped due to unknown mapping: void Print(ostream astream, ) */
	bool IsSameState(Macad::Occt::TCollection_HExtendedString^ other);
}; // class TCollection_HExtendedString

}; // namespace Occt
}; // namespace Macad
