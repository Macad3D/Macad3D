// Generated wrapper code for package TColStd

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TColStd_Array1OfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_Array1OfAsciiString sealed : public BaseClass<::TColStd_Array1OfAsciiString>
{

#ifdef Include_TColStd_Array1OfAsciiString_h
public:
	Include_TColStd_Array1OfAsciiString_h
#endif

public:
	TColStd_Array1OfAsciiString(::TColStd_Array1OfAsciiString* nativeInstance)
		: BaseClass<::TColStd_Array1OfAsciiString>( nativeInstance, true )
	{}

	TColStd_Array1OfAsciiString(::TColStd_Array1OfAsciiString& nativeInstance)
		: BaseClass<::TColStd_Array1OfAsciiString>( &nativeInstance, false )
	{}

	property ::TColStd_Array1OfAsciiString* NativeInstance
	{
		::TColStd_Array1OfAsciiString* get()
		{
			return static_cast<::TColStd_Array1OfAsciiString*>(_NativeInstance);
		}
	}

public:
	TColStd_Array1OfAsciiString();
	TColStd_Array1OfAsciiString(int theLower, int theUpper);
	TColStd_Array1OfAsciiString(Macad::Occt::TColStd_Array1OfAsciiString^ theOther);
	TColStd_Array1OfAsciiString(Macad::Occt::TCollection_AsciiString^ theBegin, int theLower, int theUpper);
	void Init(Macad::Occt::TCollection_AsciiString^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::TColStd_Array1OfAsciiString^ Assign(Macad::Occt::TColStd_Array1OfAsciiString^ theOther);
	Macad::Occt::TColStd_Array1OfAsciiString^ Move(Macad::Occt::TColStd_Array1OfAsciiString^ theOther);
	Macad::Occt::TCollection_AsciiString^ First();
	Macad::Occt::TCollection_AsciiString^ ChangeFirst();
	Macad::Occt::TCollection_AsciiString^ Last();
	Macad::Occt::TCollection_AsciiString^ ChangeLast();
	Macad::Occt::TCollection_AsciiString^ Value(int theIndex);
	Macad::Occt::TCollection_AsciiString^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_Array1OfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfBoolean
//---------------------------------------------------------------------
public ref class TColStd_Array1OfBoolean sealed : public BaseClass<::TColStd_Array1OfBoolean>
{

#ifdef Include_TColStd_Array1OfBoolean_h
public:
	Include_TColStd_Array1OfBoolean_h
#endif

public:
	TColStd_Array1OfBoolean(::TColStd_Array1OfBoolean* nativeInstance)
		: BaseClass<::TColStd_Array1OfBoolean>( nativeInstance, true )
	{}

	TColStd_Array1OfBoolean(::TColStd_Array1OfBoolean& nativeInstance)
		: BaseClass<::TColStd_Array1OfBoolean>( &nativeInstance, false )
	{}

	property ::TColStd_Array1OfBoolean* NativeInstance
	{
		::TColStd_Array1OfBoolean* get()
		{
			return static_cast<::TColStd_Array1OfBoolean*>(_NativeInstance);
		}
	}

public:
	TColStd_Array1OfBoolean();
	TColStd_Array1OfBoolean(int theLower, int theUpper);
	TColStd_Array1OfBoolean(Macad::Occt::TColStd_Array1OfBoolean^ theOther);
	TColStd_Array1OfBoolean(bool theBegin, int theLower, int theUpper);
	void Init(bool theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::TColStd_Array1OfBoolean^ Assign(Macad::Occt::TColStd_Array1OfBoolean^ theOther);
	Macad::Occt::TColStd_Array1OfBoolean^ Move(Macad::Occt::TColStd_Array1OfBoolean^ theOther);
	bool First();
	bool ChangeFirst();
	bool Last();
	bool ChangeLast();
	bool Value(int theIndex);
	bool ChangeValue(int theIndex);
	void SetValue(int theIndex, bool theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_Array1OfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfCharacter
//---------------------------------------------------------------------
public ref class TColStd_Array1OfCharacter sealed : public BaseClass<::TColStd_Array1OfCharacter>
{

#ifdef Include_TColStd_Array1OfCharacter_h
public:
	Include_TColStd_Array1OfCharacter_h
#endif

public:
	TColStd_Array1OfCharacter(::TColStd_Array1OfCharacter* nativeInstance)
		: BaseClass<::TColStd_Array1OfCharacter>( nativeInstance, true )
	{}

	TColStd_Array1OfCharacter(::TColStd_Array1OfCharacter& nativeInstance)
		: BaseClass<::TColStd_Array1OfCharacter>( &nativeInstance, false )
	{}

	property ::TColStd_Array1OfCharacter* NativeInstance
	{
		::TColStd_Array1OfCharacter* get()
		{
			return static_cast<::TColStd_Array1OfCharacter*>(_NativeInstance);
		}
	}

public:
	TColStd_Array1OfCharacter();
	TColStd_Array1OfCharacter(int theLower, int theUpper);
	TColStd_Array1OfCharacter(Macad::Occt::TColStd_Array1OfCharacter^ theOther);
	TColStd_Array1OfCharacter(char theBegin, int theLower, int theUpper);
	void Init(char theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::TColStd_Array1OfCharacter^ Assign(Macad::Occt::TColStd_Array1OfCharacter^ theOther);
	Macad::Occt::TColStd_Array1OfCharacter^ Move(Macad::Occt::TColStd_Array1OfCharacter^ theOther);
	char First();
	char ChangeFirst();
	char Last();
	char ChangeLast();
	char Value(int theIndex);
	char ChangeValue(int theIndex);
	void SetValue(int theIndex, char theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_Array1OfCharacter

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfExtendedString
//---------------------------------------------------------------------
public ref class TColStd_Array1OfExtendedString sealed : public BaseClass<::TColStd_Array1OfExtendedString>
{

#ifdef Include_TColStd_Array1OfExtendedString_h
public:
	Include_TColStd_Array1OfExtendedString_h
#endif

public:
	TColStd_Array1OfExtendedString(::TColStd_Array1OfExtendedString* nativeInstance)
		: BaseClass<::TColStd_Array1OfExtendedString>( nativeInstance, true )
	{}

	TColStd_Array1OfExtendedString(::TColStd_Array1OfExtendedString& nativeInstance)
		: BaseClass<::TColStd_Array1OfExtendedString>( &nativeInstance, false )
	{}

	property ::TColStd_Array1OfExtendedString* NativeInstance
	{
		::TColStd_Array1OfExtendedString* get()
		{
			return static_cast<::TColStd_Array1OfExtendedString*>(_NativeInstance);
		}
	}

public:
	TColStd_Array1OfExtendedString();
	TColStd_Array1OfExtendedString(int theLower, int theUpper);
	TColStd_Array1OfExtendedString(Macad::Occt::TColStd_Array1OfExtendedString^ theOther);
	TColStd_Array1OfExtendedString(Macad::Occt::TCollection_ExtendedString^ theBegin, int theLower, int theUpper);
	void Init(Macad::Occt::TCollection_ExtendedString^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::TColStd_Array1OfExtendedString^ Assign(Macad::Occt::TColStd_Array1OfExtendedString^ theOther);
	Macad::Occt::TColStd_Array1OfExtendedString^ Move(Macad::Occt::TColStd_Array1OfExtendedString^ theOther);
	Macad::Occt::TCollection_ExtendedString^ First();
	Macad::Occt::TCollection_ExtendedString^ ChangeFirst();
	Macad::Occt::TCollection_ExtendedString^ Last();
	Macad::Occt::TCollection_ExtendedString^ ChangeLast();
	Macad::Occt::TCollection_ExtendedString^ Value(int theIndex);
	Macad::Occt::TCollection_ExtendedString^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_Array1OfExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfInteger
//---------------------------------------------------------------------
public ref class TColStd_Array1OfInteger sealed : public BaseClass<::TColStd_Array1OfInteger>
{

#ifdef Include_TColStd_Array1OfInteger_h
public:
	Include_TColStd_Array1OfInteger_h
#endif

public:
	TColStd_Array1OfInteger(::TColStd_Array1OfInteger* nativeInstance)
		: BaseClass<::TColStd_Array1OfInteger>( nativeInstance, true )
	{}

	TColStd_Array1OfInteger(::TColStd_Array1OfInteger& nativeInstance)
		: BaseClass<::TColStd_Array1OfInteger>( &nativeInstance, false )
	{}

	property ::TColStd_Array1OfInteger* NativeInstance
	{
		::TColStd_Array1OfInteger* get()
		{
			return static_cast<::TColStd_Array1OfInteger*>(_NativeInstance);
		}
	}

public:
	TColStd_Array1OfInteger();
	TColStd_Array1OfInteger(int theLower, int theUpper);
	TColStd_Array1OfInteger(Macad::Occt::TColStd_Array1OfInteger^ theOther);
	TColStd_Array1OfInteger(int theBegin, int theLower, int theUpper);
	void Init(int theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::TColStd_Array1OfInteger^ Assign(Macad::Occt::TColStd_Array1OfInteger^ theOther);
	Macad::Occt::TColStd_Array1OfInteger^ Move(Macad::Occt::TColStd_Array1OfInteger^ theOther);
	int First();
	int ChangeFirst();
	int Last();
	int ChangeLast();
	int Value(int theIndex);
	int ChangeValue(int theIndex);
	void SetValue(int theIndex, int theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_Array1OfInteger

//---------------------------------------------------------------------
//  Class  TColStd_ListOfInteger
//---------------------------------------------------------------------
public ref class TColStd_ListOfInteger sealed : public BaseClass<::TColStd_ListOfInteger>
{

#ifdef Include_TColStd_ListOfInteger_h
public:
	Include_TColStd_ListOfInteger_h
#endif

public:
	TColStd_ListOfInteger(::TColStd_ListOfInteger* nativeInstance)
		: BaseClass<::TColStd_ListOfInteger>( nativeInstance, true )
	{}

	TColStd_ListOfInteger(::TColStd_ListOfInteger& nativeInstance)
		: BaseClass<::TColStd_ListOfInteger>( &nativeInstance, false )
	{}

	property ::TColStd_ListOfInteger* NativeInstance
	{
		::TColStd_ListOfInteger* get()
		{
			return static_cast<::TColStd_ListOfInteger*>(_NativeInstance);
		}
	}

public:
	TColStd_ListOfInteger();
	TColStd_ListOfInteger(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_ListOfInteger(Macad::Occt::TColStd_ListOfInteger^ theOther);
	int Size();
	Macad::Occt::TColStd_ListOfInteger^ Assign(Macad::Occt::TColStd_ListOfInteger^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	int First();
	int Last();
	int Append(int theItem);
	/* Method skipped due to unknown mapping: void Append(int theItem, Iterator theIter, ) */
	void Append(Macad::Occt::TColStd_ListOfInteger^ theOther);
	int Prepend(int theItem);
	void Prepend(Macad::Occt::TColStd_ListOfInteger^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: int InsertBefore(int theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(TColStd_ListOfInteger theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: int InsertAfter(int theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(TColStd_ListOfInteger theOther, Iterator theIter, ) */
	void Reverse();
}; // class TColStd_ListOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfListOfInteger
//---------------------------------------------------------------------
public ref class TColStd_Array1OfListOfInteger sealed : public BaseClass<::TColStd_Array1OfListOfInteger>
{

#ifdef Include_TColStd_Array1OfListOfInteger_h
public:
	Include_TColStd_Array1OfListOfInteger_h
#endif

public:
	TColStd_Array1OfListOfInteger(::TColStd_Array1OfListOfInteger* nativeInstance)
		: BaseClass<::TColStd_Array1OfListOfInteger>( nativeInstance, true )
	{}

	TColStd_Array1OfListOfInteger(::TColStd_Array1OfListOfInteger& nativeInstance)
		: BaseClass<::TColStd_Array1OfListOfInteger>( &nativeInstance, false )
	{}

	property ::TColStd_Array1OfListOfInteger* NativeInstance
	{
		::TColStd_Array1OfListOfInteger* get()
		{
			return static_cast<::TColStd_Array1OfListOfInteger*>(_NativeInstance);
		}
	}

public:
	TColStd_Array1OfListOfInteger();
	TColStd_Array1OfListOfInteger(int theLower, int theUpper);
	TColStd_Array1OfListOfInteger(Macad::Occt::TColStd_Array1OfListOfInteger^ theOther);
	/* Method skipped due to unknown mapping: void TColStd_Array1OfListOfInteger(NCollection_List<int> theBegin, Standard_Integer theLower, Standard_Integer theUpper, ) */
	/* Method skipped due to unknown mapping: void Init(NCollection_List<int> theValue, ) */
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::TColStd_Array1OfListOfInteger^ Assign(Macad::Occt::TColStd_Array1OfListOfInteger^ theOther);
	Macad::Occt::TColStd_Array1OfListOfInteger^ Move(Macad::Occt::TColStd_Array1OfListOfInteger^ theOther);
	/* Method skipped due to unknown mapping: NCollection_List<int> First() */
	/* Method skipped due to unknown mapping: NCollection_List<int> ChangeFirst() */
	/* Method skipped due to unknown mapping: NCollection_List<int> Last() */
	/* Method skipped due to unknown mapping: NCollection_List<int> ChangeLast() */
	/* Method skipped due to unknown mapping: NCollection_List<int> Value(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: NCollection_List<int> ChangeValue(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: void SetValue(Standard_Integer theIndex, NCollection_List<int> theItem, ) */
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_Array1OfListOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfReal
//---------------------------------------------------------------------
public ref class TColStd_Array1OfReal sealed : public BaseClass<::TColStd_Array1OfReal>
{

#ifdef Include_TColStd_Array1OfReal_h
public:
	Include_TColStd_Array1OfReal_h
#endif

public:
	TColStd_Array1OfReal(::TColStd_Array1OfReal* nativeInstance)
		: BaseClass<::TColStd_Array1OfReal>( nativeInstance, true )
	{}

	TColStd_Array1OfReal(::TColStd_Array1OfReal& nativeInstance)
		: BaseClass<::TColStd_Array1OfReal>( &nativeInstance, false )
	{}

	property ::TColStd_Array1OfReal* NativeInstance
	{
		::TColStd_Array1OfReal* get()
		{
			return static_cast<::TColStd_Array1OfReal*>(_NativeInstance);
		}
	}

public:
	TColStd_Array1OfReal();
	TColStd_Array1OfReal(int theLower, int theUpper);
	TColStd_Array1OfReal(Macad::Occt::TColStd_Array1OfReal^ theOther);
	TColStd_Array1OfReal(double theBegin, int theLower, int theUpper);
	void Init(double theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::TColStd_Array1OfReal^ Assign(Macad::Occt::TColStd_Array1OfReal^ theOther);
	Macad::Occt::TColStd_Array1OfReal^ Move(Macad::Occt::TColStd_Array1OfReal^ theOther);
	double First();
	double ChangeFirst();
	double Last();
	double ChangeLast();
	double Value(int theIndex);
	double ChangeValue(int theIndex);
	void SetValue(int theIndex, double theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_Array1OfReal

//---------------------------------------------------------------------
//  Class  TColStd_Array1OfTransient
//---------------------------------------------------------------------
public ref class TColStd_Array1OfTransient sealed : public BaseClass<::TColStd_Array1OfTransient>
{

#ifdef Include_TColStd_Array1OfTransient_h
public:
	Include_TColStd_Array1OfTransient_h
#endif

public:
	TColStd_Array1OfTransient(::TColStd_Array1OfTransient* nativeInstance)
		: BaseClass<::TColStd_Array1OfTransient>( nativeInstance, true )
	{}

	TColStd_Array1OfTransient(::TColStd_Array1OfTransient& nativeInstance)
		: BaseClass<::TColStd_Array1OfTransient>( &nativeInstance, false )
	{}

	property ::TColStd_Array1OfTransient* NativeInstance
	{
		::TColStd_Array1OfTransient* get()
		{
			return static_cast<::TColStd_Array1OfTransient*>(_NativeInstance);
		}
	}

public:
	TColStd_Array1OfTransient();
	TColStd_Array1OfTransient(int theLower, int theUpper);
	TColStd_Array1OfTransient(Macad::Occt::TColStd_Array1OfTransient^ theOther);
	TColStd_Array1OfTransient(Macad::Occt::Standard_Transient^ theBegin, int theLower, int theUpper);
	void Init(Macad::Occt::Standard_Transient^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::TColStd_Array1OfTransient^ Assign(Macad::Occt::TColStd_Array1OfTransient^ theOther);
	Macad::Occt::TColStd_Array1OfTransient^ Move(Macad::Occt::TColStd_Array1OfTransient^ theOther);
	Macad::Occt::Standard_Transient^ First();
	Macad::Occt::Standard_Transient^ ChangeFirst();
	Macad::Occt::Standard_Transient^ Last();
	Macad::Occt::Standard_Transient^ ChangeLast();
	Macad::Occt::Standard_Transient^ Value(int theIndex);
	Macad::Occt::Standard_Transient^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_Array1OfTransient

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfBoolean
//---------------------------------------------------------------------
public ref class TColStd_Array2OfBoolean sealed : public BaseClass<::TColStd_Array2OfBoolean>
{

#ifdef Include_TColStd_Array2OfBoolean_h
public:
	Include_TColStd_Array2OfBoolean_h
#endif

public:
	TColStd_Array2OfBoolean(::TColStd_Array2OfBoolean* nativeInstance)
		: BaseClass<::TColStd_Array2OfBoolean>( nativeInstance, true )
	{}

	TColStd_Array2OfBoolean(::TColStd_Array2OfBoolean& nativeInstance)
		: BaseClass<::TColStd_Array2OfBoolean>( &nativeInstance, false )
	{}

	property ::TColStd_Array2OfBoolean* NativeInstance
	{
		::TColStd_Array2OfBoolean* get()
		{
			return static_cast<::TColStd_Array2OfBoolean*>(_NativeInstance);
		}
	}

public:
	TColStd_Array2OfBoolean();
	TColStd_Array2OfBoolean(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	TColStd_Array2OfBoolean(Macad::Occt::TColStd_Array2OfBoolean^ theOther);
	TColStd_Array2OfBoolean(bool theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	void Init(bool theValue);
	int Size();
	int Length();
	int NbRows();
	int NbColumns();
	int RowLength();
	int ColLength();
	int LowerRow();
	int UpperRow();
	int LowerCol();
	int UpperCol();
	bool IsDeletable();
	Macad::Occt::TColStd_Array2OfBoolean^ Assign(Macad::Occt::TColStd_Array2OfBoolean^ theOther);
	Macad::Occt::TColStd_Array2OfBoolean^ Move(Macad::Occt::TColStd_Array2OfBoolean^ theOther);
	bool Value(int theRow, int theCol);
	bool ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, bool theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TColStd_Array2OfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfCharacter
//---------------------------------------------------------------------
public ref class TColStd_Array2OfCharacter sealed : public BaseClass<::TColStd_Array2OfCharacter>
{

#ifdef Include_TColStd_Array2OfCharacter_h
public:
	Include_TColStd_Array2OfCharacter_h
#endif

public:
	TColStd_Array2OfCharacter(::TColStd_Array2OfCharacter* nativeInstance)
		: BaseClass<::TColStd_Array2OfCharacter>( nativeInstance, true )
	{}

	TColStd_Array2OfCharacter(::TColStd_Array2OfCharacter& nativeInstance)
		: BaseClass<::TColStd_Array2OfCharacter>( &nativeInstance, false )
	{}

	property ::TColStd_Array2OfCharacter* NativeInstance
	{
		::TColStd_Array2OfCharacter* get()
		{
			return static_cast<::TColStd_Array2OfCharacter*>(_NativeInstance);
		}
	}

public:
	TColStd_Array2OfCharacter();
	TColStd_Array2OfCharacter(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	TColStd_Array2OfCharacter(Macad::Occt::TColStd_Array2OfCharacter^ theOther);
	TColStd_Array2OfCharacter(char theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	void Init(char theValue);
	int Size();
	int Length();
	int NbRows();
	int NbColumns();
	int RowLength();
	int ColLength();
	int LowerRow();
	int UpperRow();
	int LowerCol();
	int UpperCol();
	bool IsDeletable();
	Macad::Occt::TColStd_Array2OfCharacter^ Assign(Macad::Occt::TColStd_Array2OfCharacter^ theOther);
	Macad::Occt::TColStd_Array2OfCharacter^ Move(Macad::Occt::TColStd_Array2OfCharacter^ theOther);
	char Value(int theRow, int theCol);
	char ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, char theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TColStd_Array2OfCharacter

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfInteger
//---------------------------------------------------------------------
public ref class TColStd_Array2OfInteger sealed : public BaseClass<::TColStd_Array2OfInteger>
{

#ifdef Include_TColStd_Array2OfInteger_h
public:
	Include_TColStd_Array2OfInteger_h
#endif

public:
	TColStd_Array2OfInteger(::TColStd_Array2OfInteger* nativeInstance)
		: BaseClass<::TColStd_Array2OfInteger>( nativeInstance, true )
	{}

	TColStd_Array2OfInteger(::TColStd_Array2OfInteger& nativeInstance)
		: BaseClass<::TColStd_Array2OfInteger>( &nativeInstance, false )
	{}

	property ::TColStd_Array2OfInteger* NativeInstance
	{
		::TColStd_Array2OfInteger* get()
		{
			return static_cast<::TColStd_Array2OfInteger*>(_NativeInstance);
		}
	}

public:
	TColStd_Array2OfInteger();
	TColStd_Array2OfInteger(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	TColStd_Array2OfInteger(Macad::Occt::TColStd_Array2OfInteger^ theOther);
	TColStd_Array2OfInteger(int theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	void Init(int theValue);
	int Size();
	int Length();
	int NbRows();
	int NbColumns();
	int RowLength();
	int ColLength();
	int LowerRow();
	int UpperRow();
	int LowerCol();
	int UpperCol();
	bool IsDeletable();
	Macad::Occt::TColStd_Array2OfInteger^ Assign(Macad::Occt::TColStd_Array2OfInteger^ theOther);
	Macad::Occt::TColStd_Array2OfInteger^ Move(Macad::Occt::TColStd_Array2OfInteger^ theOther);
	int Value(int theRow, int theCol);
	int ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, int theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TColStd_Array2OfInteger

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfReal
//---------------------------------------------------------------------
public ref class TColStd_Array2OfReal sealed : public BaseClass<::TColStd_Array2OfReal>
{

#ifdef Include_TColStd_Array2OfReal_h
public:
	Include_TColStd_Array2OfReal_h
#endif

public:
	TColStd_Array2OfReal(::TColStd_Array2OfReal* nativeInstance)
		: BaseClass<::TColStd_Array2OfReal>( nativeInstance, true )
	{}

	TColStd_Array2OfReal(::TColStd_Array2OfReal& nativeInstance)
		: BaseClass<::TColStd_Array2OfReal>( &nativeInstance, false )
	{}

	property ::TColStd_Array2OfReal* NativeInstance
	{
		::TColStd_Array2OfReal* get()
		{
			return static_cast<::TColStd_Array2OfReal*>(_NativeInstance);
		}
	}

public:
	TColStd_Array2OfReal();
	TColStd_Array2OfReal(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	TColStd_Array2OfReal(Macad::Occt::TColStd_Array2OfReal^ theOther);
	TColStd_Array2OfReal(double theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	void Init(double theValue);
	int Size();
	int Length();
	int NbRows();
	int NbColumns();
	int RowLength();
	int ColLength();
	int LowerRow();
	int UpperRow();
	int LowerCol();
	int UpperCol();
	bool IsDeletable();
	Macad::Occt::TColStd_Array2OfReal^ Assign(Macad::Occt::TColStd_Array2OfReal^ theOther);
	Macad::Occt::TColStd_Array2OfReal^ Move(Macad::Occt::TColStd_Array2OfReal^ theOther);
	double Value(int theRow, int theCol);
	double ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, double theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TColStd_Array2OfReal

//---------------------------------------------------------------------
//  Class  TColStd_Array2OfTransient
//---------------------------------------------------------------------
public ref class TColStd_Array2OfTransient sealed : public BaseClass<::TColStd_Array2OfTransient>
{

#ifdef Include_TColStd_Array2OfTransient_h
public:
	Include_TColStd_Array2OfTransient_h
#endif

public:
	TColStd_Array2OfTransient(::TColStd_Array2OfTransient* nativeInstance)
		: BaseClass<::TColStd_Array2OfTransient>( nativeInstance, true )
	{}

	TColStd_Array2OfTransient(::TColStd_Array2OfTransient& nativeInstance)
		: BaseClass<::TColStd_Array2OfTransient>( &nativeInstance, false )
	{}

	property ::TColStd_Array2OfTransient* NativeInstance
	{
		::TColStd_Array2OfTransient* get()
		{
			return static_cast<::TColStd_Array2OfTransient*>(_NativeInstance);
		}
	}

public:
	TColStd_Array2OfTransient();
	TColStd_Array2OfTransient(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	TColStd_Array2OfTransient(Macad::Occt::TColStd_Array2OfTransient^ theOther);
	TColStd_Array2OfTransient(Macad::Occt::Standard_Transient^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	void Init(Macad::Occt::Standard_Transient^ theValue);
	int Size();
	int Length();
	int NbRows();
	int NbColumns();
	int RowLength();
	int ColLength();
	int LowerRow();
	int UpperRow();
	int LowerCol();
	int UpperCol();
	bool IsDeletable();
	Macad::Occt::TColStd_Array2OfTransient^ Assign(Macad::Occt::TColStd_Array2OfTransient^ theOther);
	Macad::Occt::TColStd_Array2OfTransient^ Move(Macad::Occt::TColStd_Array2OfTransient^ theOther);
	Macad::Occt::Standard_Transient^ Value(int theRow, int theCol);
	Macad::Occt::Standard_Transient^ ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, Macad::Occt::Standard_Transient^ theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TColStd_Array2OfTransient

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfAsciiStringInteger
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfAsciiStringInteger sealed : public BaseClass<::TColStd_DataMapOfAsciiStringInteger>
{

#ifdef Include_TColStd_DataMapOfAsciiStringInteger_h
public:
	Include_TColStd_DataMapOfAsciiStringInteger_h
#endif

public:
	TColStd_DataMapOfAsciiStringInteger(::TColStd_DataMapOfAsciiStringInteger* nativeInstance)
		: BaseClass<::TColStd_DataMapOfAsciiStringInteger>( nativeInstance, true )
	{}

	TColStd_DataMapOfAsciiStringInteger(::TColStd_DataMapOfAsciiStringInteger& nativeInstance)
		: BaseClass<::TColStd_DataMapOfAsciiStringInteger>( &nativeInstance, false )
	{}

	property ::TColStd_DataMapOfAsciiStringInteger* NativeInstance
	{
		::TColStd_DataMapOfAsciiStringInteger* get()
		{
			return static_cast<::TColStd_DataMapOfAsciiStringInteger*>(_NativeInstance);
		}
	}

public:
	TColStd_DataMapOfAsciiStringInteger();
	TColStd_DataMapOfAsciiStringInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_DataMapOfAsciiStringInteger(int theNbBuckets);
	TColStd_DataMapOfAsciiStringInteger(Macad::Occt::TColStd_DataMapOfAsciiStringInteger^ theOther);
	void Exchange(Macad::Occt::TColStd_DataMapOfAsciiStringInteger^ theOther);
	Macad::Occt::TColStd_DataMapOfAsciiStringInteger^ Assign(Macad::Occt::TColStd_DataMapOfAsciiStringInteger^ theOther);
	int Bound(Macad::Occt::TCollection_AsciiString^ theKey, int theItem);
	bool IsBound(Macad::Occt::TCollection_AsciiString^ theKey);
	bool UnBind(Macad::Occt::TCollection_AsciiString^ theKey);
	int Seek(Macad::Occt::TCollection_AsciiString^ theKey);
	int Find(Macad::Occt::TCollection_AsciiString^ theKey);
	bool Find(Macad::Occt::TCollection_AsciiString^ theKey, int% theValue);
	int ChangeSeek(Macad::Occt::TCollection_AsciiString^ theKey);
	int ChangeFind(Macad::Occt::TCollection_AsciiString^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TColStd_DataMapOfAsciiStringInteger

//---------------------------------------------------------------------
//  Class  TColStd_MapIntegerHasher
//---------------------------------------------------------------------
public ref class TColStd_MapIntegerHasher sealed : public BaseClass<::TColStd_MapIntegerHasher>
{

#ifdef Include_TColStd_MapIntegerHasher_h
public:
	Include_TColStd_MapIntegerHasher_h
#endif

public:
	TColStd_MapIntegerHasher(::TColStd_MapIntegerHasher* nativeInstance)
		: BaseClass<::TColStd_MapIntegerHasher>( nativeInstance, true )
	{}

	TColStd_MapIntegerHasher(::TColStd_MapIntegerHasher& nativeInstance)
		: BaseClass<::TColStd_MapIntegerHasher>( &nativeInstance, false )
	{}

	property ::TColStd_MapIntegerHasher* NativeInstance
	{
		::TColStd_MapIntegerHasher* get()
		{
			return static_cast<::TColStd_MapIntegerHasher*>(_NativeInstance);
		}
	}

public:
	TColStd_MapIntegerHasher();
	TColStd_MapIntegerHasher(Macad::Occt::TColStd_MapIntegerHasher^ parameter1);
	static int HashCode(int theKey, int theUpperBound);
	static bool IsEqual(int theKey1, int theKey2);
}; // class TColStd_MapIntegerHasher

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerInteger
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfIntegerInteger sealed : public BaseClass<::TColStd_DataMapOfIntegerInteger>
{

#ifdef Include_TColStd_DataMapOfIntegerInteger_h
public:
	Include_TColStd_DataMapOfIntegerInteger_h
#endif

public:
	TColStd_DataMapOfIntegerInteger(::TColStd_DataMapOfIntegerInteger* nativeInstance)
		: BaseClass<::TColStd_DataMapOfIntegerInteger>( nativeInstance, true )
	{}

	TColStd_DataMapOfIntegerInteger(::TColStd_DataMapOfIntegerInteger& nativeInstance)
		: BaseClass<::TColStd_DataMapOfIntegerInteger>( &nativeInstance, false )
	{}

	property ::TColStd_DataMapOfIntegerInteger* NativeInstance
	{
		::TColStd_DataMapOfIntegerInteger* get()
		{
			return static_cast<::TColStd_DataMapOfIntegerInteger*>(_NativeInstance);
		}
	}

public:
	TColStd_DataMapOfIntegerInteger();
	TColStd_DataMapOfIntegerInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_DataMapOfIntegerInteger(int theNbBuckets);
	TColStd_DataMapOfIntegerInteger(Macad::Occt::TColStd_DataMapOfIntegerInteger^ theOther);
	void Exchange(Macad::Occt::TColStd_DataMapOfIntegerInteger^ theOther);
	Macad::Occt::TColStd_DataMapOfIntegerInteger^ Assign(Macad::Occt::TColStd_DataMapOfIntegerInteger^ theOther);
	int Bound(int theKey, int theItem);
	bool IsBound(int theKey);
	bool UnBind(int theKey);
	int Seek(int theKey);
	int Find(int theKey);
	bool Find(int theKey, int% theValue);
	int ChangeSeek(int theKey);
	int ChangeFind(int theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TColStd_DataMapOfIntegerInteger

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerListOfInteger
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfIntegerListOfInteger sealed : public BaseClass<::TColStd_DataMapOfIntegerListOfInteger>
{

#ifdef Include_TColStd_DataMapOfIntegerListOfInteger_h
public:
	Include_TColStd_DataMapOfIntegerListOfInteger_h
#endif

public:
	TColStd_DataMapOfIntegerListOfInteger(::TColStd_DataMapOfIntegerListOfInteger* nativeInstance)
		: BaseClass<::TColStd_DataMapOfIntegerListOfInteger>( nativeInstance, true )
	{}

	TColStd_DataMapOfIntegerListOfInteger(::TColStd_DataMapOfIntegerListOfInteger& nativeInstance)
		: BaseClass<::TColStd_DataMapOfIntegerListOfInteger>( &nativeInstance, false )
	{}

	property ::TColStd_DataMapOfIntegerListOfInteger* NativeInstance
	{
		::TColStd_DataMapOfIntegerListOfInteger* get()
		{
			return static_cast<::TColStd_DataMapOfIntegerListOfInteger*>(_NativeInstance);
		}
	}

public:
	TColStd_DataMapOfIntegerListOfInteger();
	TColStd_DataMapOfIntegerListOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_DataMapOfIntegerListOfInteger(int theNbBuckets);
	TColStd_DataMapOfIntegerListOfInteger(Macad::Occt::TColStd_DataMapOfIntegerListOfInteger^ theOther);
	void Exchange(Macad::Occt::TColStd_DataMapOfIntegerListOfInteger^ theOther);
	Macad::Occt::TColStd_DataMapOfIntegerListOfInteger^ Assign(Macad::Occt::TColStd_DataMapOfIntegerListOfInteger^ theOther);
	/* Method skipped due to unknown mapping: NCollection_List<int> Bound(int theKey, NCollection_List<int> theItem, ) */
	bool IsBound(int theKey);
	bool UnBind(int theKey);
	/* Method skipped due to unknown mapping: NCollection_List<int> Seek(int theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<int> Find(int theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(int theKey, NCollection_List<int> theValue, ) */
	/* Method skipped due to unknown mapping: NCollection_List<int> ChangeSeek(int theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<int> ChangeFind(int theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TColStd_DataMapOfIntegerListOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerReal
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfIntegerReal sealed : public BaseClass<::TColStd_DataMapOfIntegerReal>
{

#ifdef Include_TColStd_DataMapOfIntegerReal_h
public:
	Include_TColStd_DataMapOfIntegerReal_h
#endif

public:
	TColStd_DataMapOfIntegerReal(::TColStd_DataMapOfIntegerReal* nativeInstance)
		: BaseClass<::TColStd_DataMapOfIntegerReal>( nativeInstance, true )
	{}

	TColStd_DataMapOfIntegerReal(::TColStd_DataMapOfIntegerReal& nativeInstance)
		: BaseClass<::TColStd_DataMapOfIntegerReal>( &nativeInstance, false )
	{}

	property ::TColStd_DataMapOfIntegerReal* NativeInstance
	{
		::TColStd_DataMapOfIntegerReal* get()
		{
			return static_cast<::TColStd_DataMapOfIntegerReal*>(_NativeInstance);
		}
	}

public:
	TColStd_DataMapOfIntegerReal();
	TColStd_DataMapOfIntegerReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_DataMapOfIntegerReal(int theNbBuckets);
	TColStd_DataMapOfIntegerReal(Macad::Occt::TColStd_DataMapOfIntegerReal^ theOther);
	void Exchange(Macad::Occt::TColStd_DataMapOfIntegerReal^ theOther);
	Macad::Occt::TColStd_DataMapOfIntegerReal^ Assign(Macad::Occt::TColStd_DataMapOfIntegerReal^ theOther);
	double Bound(int theKey, double theItem);
	bool IsBound(int theKey);
	bool UnBind(int theKey);
	double Seek(int theKey);
	double Find(int theKey);
	bool Find(int theKey, double% theValue);
	double ChangeSeek(int theKey);
	double ChangeFind(int theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TColStd_DataMapOfIntegerReal

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfIntegerTransient
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfIntegerTransient sealed : public BaseClass<::TColStd_DataMapOfIntegerTransient>
{

#ifdef Include_TColStd_DataMapOfIntegerTransient_h
public:
	Include_TColStd_DataMapOfIntegerTransient_h
#endif

public:
	TColStd_DataMapOfIntegerTransient(::TColStd_DataMapOfIntegerTransient* nativeInstance)
		: BaseClass<::TColStd_DataMapOfIntegerTransient>( nativeInstance, true )
	{}

	TColStd_DataMapOfIntegerTransient(::TColStd_DataMapOfIntegerTransient& nativeInstance)
		: BaseClass<::TColStd_DataMapOfIntegerTransient>( &nativeInstance, false )
	{}

	property ::TColStd_DataMapOfIntegerTransient* NativeInstance
	{
		::TColStd_DataMapOfIntegerTransient* get()
		{
			return static_cast<::TColStd_DataMapOfIntegerTransient*>(_NativeInstance);
		}
	}

public:
	TColStd_DataMapOfIntegerTransient();
	TColStd_DataMapOfIntegerTransient(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_DataMapOfIntegerTransient(int theNbBuckets);
	TColStd_DataMapOfIntegerTransient(Macad::Occt::TColStd_DataMapOfIntegerTransient^ theOther);
	void Exchange(Macad::Occt::TColStd_DataMapOfIntegerTransient^ theOther);
	Macad::Occt::TColStd_DataMapOfIntegerTransient^ Assign(Macad::Occt::TColStd_DataMapOfIntegerTransient^ theOther);
	Macad::Occt::Standard_Transient^ Bound(int theKey, Macad::Occt::Standard_Transient^ theItem);
	bool IsBound(int theKey);
	bool UnBind(int theKey);
	Macad::Occt::Standard_Transient^ Seek(int theKey);
	Macad::Occt::Standard_Transient^ Find(int theKey);
	bool Find(int theKey, Macad::Occt::Standard_Transient^ theValue);
	Macad::Occt::Standard_Transient^ ChangeSeek(int theKey);
	Macad::Occt::Standard_Transient^ ChangeFind(int theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TColStd_DataMapOfIntegerTransient

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfStringInteger
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfStringInteger sealed : public BaseClass<::TColStd_DataMapOfStringInteger>
{

#ifdef Include_TColStd_DataMapOfStringInteger_h
public:
	Include_TColStd_DataMapOfStringInteger_h
#endif

public:
	TColStd_DataMapOfStringInteger(::TColStd_DataMapOfStringInteger* nativeInstance)
		: BaseClass<::TColStd_DataMapOfStringInteger>( nativeInstance, true )
	{}

	TColStd_DataMapOfStringInteger(::TColStd_DataMapOfStringInteger& nativeInstance)
		: BaseClass<::TColStd_DataMapOfStringInteger>( &nativeInstance, false )
	{}

	property ::TColStd_DataMapOfStringInteger* NativeInstance
	{
		::TColStd_DataMapOfStringInteger* get()
		{
			return static_cast<::TColStd_DataMapOfStringInteger*>(_NativeInstance);
		}
	}

public:
	TColStd_DataMapOfStringInteger();
	TColStd_DataMapOfStringInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_DataMapOfStringInteger(int theNbBuckets);
	TColStd_DataMapOfStringInteger(Macad::Occt::TColStd_DataMapOfStringInteger^ theOther);
	void Exchange(Macad::Occt::TColStd_DataMapOfStringInteger^ theOther);
	Macad::Occt::TColStd_DataMapOfStringInteger^ Assign(Macad::Occt::TColStd_DataMapOfStringInteger^ theOther);
	int Bound(Macad::Occt::TCollection_ExtendedString^ theKey, int theItem);
	bool IsBound(Macad::Occt::TCollection_ExtendedString^ theKey);
	bool UnBind(Macad::Occt::TCollection_ExtendedString^ theKey);
	int Seek(Macad::Occt::TCollection_ExtendedString^ theKey);
	int Find(Macad::Occt::TCollection_ExtendedString^ theKey);
	bool Find(Macad::Occt::TCollection_ExtendedString^ theKey, int% theValue);
	int ChangeSeek(Macad::Occt::TCollection_ExtendedString^ theKey);
	int ChangeFind(Macad::Occt::TCollection_ExtendedString^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TColStd_DataMapOfStringInteger

//---------------------------------------------------------------------
//  Class  TColStd_MapTransientHasher
//---------------------------------------------------------------------
public ref class TColStd_MapTransientHasher sealed : public BaseClass<::TColStd_MapTransientHasher>
{

#ifdef Include_TColStd_MapTransientHasher_h
public:
	Include_TColStd_MapTransientHasher_h
#endif

public:
	TColStd_MapTransientHasher(::TColStd_MapTransientHasher* nativeInstance)
		: BaseClass<::TColStd_MapTransientHasher>( nativeInstance, true )
	{}

	TColStd_MapTransientHasher(::TColStd_MapTransientHasher& nativeInstance)
		: BaseClass<::TColStd_MapTransientHasher>( &nativeInstance, false )
	{}

	property ::TColStd_MapTransientHasher* NativeInstance
	{
		::TColStd_MapTransientHasher* get()
		{
			return static_cast<::TColStd_MapTransientHasher*>(_NativeInstance);
		}
	}

public:
	TColStd_MapTransientHasher();
	TColStd_MapTransientHasher(Macad::Occt::TColStd_MapTransientHasher^ parameter1);
	static int HashCode(Macad::Occt::Standard_Transient^ theKey, int theUpperBound);
	static bool IsEqual(Macad::Occt::Standard_Transient^ theKey1, Macad::Occt::Standard_Transient^ theKey2);
}; // class TColStd_MapTransientHasher

//---------------------------------------------------------------------
//  Class  TColStd_DataMapOfTransientTransient
//---------------------------------------------------------------------
public ref class TColStd_DataMapOfTransientTransient sealed : public BaseClass<::TColStd_DataMapOfTransientTransient>
{

#ifdef Include_TColStd_DataMapOfTransientTransient_h
public:
	Include_TColStd_DataMapOfTransientTransient_h
#endif

public:
	TColStd_DataMapOfTransientTransient(::TColStd_DataMapOfTransientTransient* nativeInstance)
		: BaseClass<::TColStd_DataMapOfTransientTransient>( nativeInstance, true )
	{}

	TColStd_DataMapOfTransientTransient(::TColStd_DataMapOfTransientTransient& nativeInstance)
		: BaseClass<::TColStd_DataMapOfTransientTransient>( &nativeInstance, false )
	{}

	property ::TColStd_DataMapOfTransientTransient* NativeInstance
	{
		::TColStd_DataMapOfTransientTransient* get()
		{
			return static_cast<::TColStd_DataMapOfTransientTransient*>(_NativeInstance);
		}
	}

public:
	TColStd_DataMapOfTransientTransient();
	TColStd_DataMapOfTransientTransient(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_DataMapOfTransientTransient(int theNbBuckets);
	TColStd_DataMapOfTransientTransient(Macad::Occt::TColStd_DataMapOfTransientTransient^ theOther);
	void Exchange(Macad::Occt::TColStd_DataMapOfTransientTransient^ theOther);
	Macad::Occt::TColStd_DataMapOfTransientTransient^ Assign(Macad::Occt::TColStd_DataMapOfTransientTransient^ theOther);
	Macad::Occt::Standard_Transient^ Bound(Macad::Occt::Standard_Transient^ theKey, Macad::Occt::Standard_Transient^ theItem);
	bool IsBound(Macad::Occt::Standard_Transient^ theKey);
	bool UnBind(Macad::Occt::Standard_Transient^ theKey);
	Macad::Occt::Standard_Transient^ Seek(Macad::Occt::Standard_Transient^ theKey);
	Macad::Occt::Standard_Transient^ Find(Macad::Occt::Standard_Transient^ theKey);
	bool Find(Macad::Occt::Standard_Transient^ theKey, Macad::Occt::Standard_Transient^ theValue);
	Macad::Occt::Standard_Transient^ ChangeSeek(Macad::Occt::Standard_Transient^ theKey);
	Macad::Occt::Standard_Transient^ ChangeFind(Macad::Occt::Standard_Transient^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TColStd_DataMapOfTransientTransient

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfAsciiString sealed : public BaseClass<::TColStd_SequenceOfAsciiString>
{

#ifdef Include_TColStd_SequenceOfAsciiString_h
public:
	Include_TColStd_SequenceOfAsciiString_h
#endif

public:
	TColStd_SequenceOfAsciiString(::TColStd_SequenceOfAsciiString* nativeInstance)
		: BaseClass<::TColStd_SequenceOfAsciiString>( nativeInstance, true )
	{}

	TColStd_SequenceOfAsciiString(::TColStd_SequenceOfAsciiString& nativeInstance)
		: BaseClass<::TColStd_SequenceOfAsciiString>( &nativeInstance, false )
	{}

	property ::TColStd_SequenceOfAsciiString* NativeInstance
	{
		::TColStd_SequenceOfAsciiString* get()
		{
			return static_cast<::TColStd_SequenceOfAsciiString*>(_NativeInstance);
		}
	}

public:
	TColStd_SequenceOfAsciiString();
	TColStd_SequenceOfAsciiString(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_SequenceOfAsciiString(Macad::Occt::TColStd_SequenceOfAsciiString^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::TColStd_SequenceOfAsciiString^ Assign(Macad::Occt::TColStd_SequenceOfAsciiString^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::TCollection_AsciiString^ theItem);
	void Append(Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
	void Prepend(Macad::Occt::TCollection_AsciiString^ theItem);
	void Prepend(Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, TCollection_AsciiString theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
	void Split(int theIndex, Macad::Occt::TColStd_SequenceOfAsciiString^ theSeq);
	Macad::Occt::TCollection_AsciiString^ First();
	Macad::Occt::TCollection_AsciiString^ ChangeFirst();
	Macad::Occt::TCollection_AsciiString^ Last();
	Macad::Occt::TCollection_AsciiString^ ChangeLast();
	Macad::Occt::TCollection_AsciiString^ Value(int theIndex);
	Macad::Occt::TCollection_AsciiString^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
}; // class TColStd_SequenceOfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfExtendedString
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfExtendedString sealed : public BaseClass<::TColStd_SequenceOfExtendedString>
{

#ifdef Include_TColStd_SequenceOfExtendedString_h
public:
	Include_TColStd_SequenceOfExtendedString_h
#endif

public:
	TColStd_SequenceOfExtendedString(::TColStd_SequenceOfExtendedString* nativeInstance)
		: BaseClass<::TColStd_SequenceOfExtendedString>( nativeInstance, true )
	{}

	TColStd_SequenceOfExtendedString(::TColStd_SequenceOfExtendedString& nativeInstance)
		: BaseClass<::TColStd_SequenceOfExtendedString>( &nativeInstance, false )
	{}

	property ::TColStd_SequenceOfExtendedString* NativeInstance
	{
		::TColStd_SequenceOfExtendedString* get()
		{
			return static_cast<::TColStd_SequenceOfExtendedString*>(_NativeInstance);
		}
	}

public:
	TColStd_SequenceOfExtendedString();
	TColStd_SequenceOfExtendedString(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_SequenceOfExtendedString(Macad::Occt::TColStd_SequenceOfExtendedString^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::TColStd_SequenceOfExtendedString^ Assign(Macad::Occt::TColStd_SequenceOfExtendedString^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::TCollection_ExtendedString^ theItem);
	void Append(Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
	void Prepend(Macad::Occt::TCollection_ExtendedString^ theItem);
	void Prepend(Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, TCollection_ExtendedString theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
	void Split(int theIndex, Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq);
	Macad::Occt::TCollection_ExtendedString^ First();
	Macad::Occt::TCollection_ExtendedString^ ChangeFirst();
	Macad::Occt::TCollection_ExtendedString^ Last();
	Macad::Occt::TCollection_ExtendedString^ ChangeLast();
	Macad::Occt::TCollection_ExtendedString^ Value(int theIndex);
	Macad::Occt::TCollection_ExtendedString^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
}; // class TColStd_SequenceOfExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHAsciiString
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfHAsciiString sealed : public BaseClass<::TColStd_SequenceOfHAsciiString>
{

#ifdef Include_TColStd_SequenceOfHAsciiString_h
public:
	Include_TColStd_SequenceOfHAsciiString_h
#endif

public:
	TColStd_SequenceOfHAsciiString(::TColStd_SequenceOfHAsciiString* nativeInstance)
		: BaseClass<::TColStd_SequenceOfHAsciiString>( nativeInstance, true )
	{}

	TColStd_SequenceOfHAsciiString(::TColStd_SequenceOfHAsciiString& nativeInstance)
		: BaseClass<::TColStd_SequenceOfHAsciiString>( &nativeInstance, false )
	{}

	property ::TColStd_SequenceOfHAsciiString* NativeInstance
	{
		::TColStd_SequenceOfHAsciiString* get()
		{
			return static_cast<::TColStd_SequenceOfHAsciiString*>(_NativeInstance);
		}
	}

public:
	TColStd_SequenceOfHAsciiString();
	TColStd_SequenceOfHAsciiString(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_SequenceOfHAsciiString(Macad::Occt::TColStd_SequenceOfHAsciiString^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::TColStd_SequenceOfHAsciiString^ Assign(Macad::Occt::TColStd_SequenceOfHAsciiString^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::TCollection_HAsciiString^ theItem);
	void Append(Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
	void Prepend(Macad::Occt::TCollection_HAsciiString^ theItem);
	void Prepend(Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, TCollection_HAsciiString theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
	void Split(int theIndex, Macad::Occt::TColStd_SequenceOfHAsciiString^ theSeq);
	Macad::Occt::TCollection_HAsciiString^ First();
	Macad::Occt::TCollection_HAsciiString^ ChangeFirst();
	Macad::Occt::TCollection_HAsciiString^ Last();
	Macad::Occt::TCollection_HAsciiString^ ChangeLast();
	Macad::Occt::TCollection_HAsciiString^ Value(int theIndex);
	Macad::Occt::TCollection_HAsciiString^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
}; // class TColStd_SequenceOfHAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfHExtendedString
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfHExtendedString sealed : public BaseClass<::TColStd_SequenceOfHExtendedString>
{

#ifdef Include_TColStd_SequenceOfHExtendedString_h
public:
	Include_TColStd_SequenceOfHExtendedString_h
#endif

public:
	TColStd_SequenceOfHExtendedString(::TColStd_SequenceOfHExtendedString* nativeInstance)
		: BaseClass<::TColStd_SequenceOfHExtendedString>( nativeInstance, true )
	{}

	TColStd_SequenceOfHExtendedString(::TColStd_SequenceOfHExtendedString& nativeInstance)
		: BaseClass<::TColStd_SequenceOfHExtendedString>( &nativeInstance, false )
	{}

	property ::TColStd_SequenceOfHExtendedString* NativeInstance
	{
		::TColStd_SequenceOfHExtendedString* get()
		{
			return static_cast<::TColStd_SequenceOfHExtendedString*>(_NativeInstance);
		}
	}

public:
	TColStd_SequenceOfHExtendedString();
	TColStd_SequenceOfHExtendedString(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_SequenceOfHExtendedString(Macad::Occt::TColStd_SequenceOfHExtendedString^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::TColStd_SequenceOfHExtendedString^ Assign(Macad::Occt::TColStd_SequenceOfHExtendedString^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::TCollection_HExtendedString^ theItem);
	void Append(Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
	void Prepend(Macad::Occt::TCollection_HExtendedString^ theItem);
	void Prepend(Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, TCollection_HExtendedString theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
	void Split(int theIndex, Macad::Occt::TColStd_SequenceOfHExtendedString^ theSeq);
	Macad::Occt::TCollection_HExtendedString^ First();
	Macad::Occt::TCollection_HExtendedString^ ChangeFirst();
	Macad::Occt::TCollection_HExtendedString^ Last();
	Macad::Occt::TCollection_HExtendedString^ ChangeLast();
	Macad::Occt::TCollection_HExtendedString^ Value(int theIndex);
	Macad::Occt::TCollection_HExtendedString^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
}; // class TColStd_SequenceOfHExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfInteger
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfInteger sealed : public BaseClass<::TColStd_SequenceOfInteger>
{

#ifdef Include_TColStd_SequenceOfInteger_h
public:
	Include_TColStd_SequenceOfInteger_h
#endif

public:
	TColStd_SequenceOfInteger(::TColStd_SequenceOfInteger* nativeInstance)
		: BaseClass<::TColStd_SequenceOfInteger>( nativeInstance, true )
	{}

	TColStd_SequenceOfInteger(::TColStd_SequenceOfInteger& nativeInstance)
		: BaseClass<::TColStd_SequenceOfInteger>( &nativeInstance, false )
	{}

	property ::TColStd_SequenceOfInteger* NativeInstance
	{
		::TColStd_SequenceOfInteger* get()
		{
			return static_cast<::TColStd_SequenceOfInteger*>(_NativeInstance);
		}
	}

public:
	TColStd_SequenceOfInteger();
	TColStd_SequenceOfInteger(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_SequenceOfInteger(Macad::Occt::TColStd_SequenceOfInteger^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::TColStd_SequenceOfInteger^ Assign(Macad::Occt::TColStd_SequenceOfInteger^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(int theItem);
	void Append(Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
	void Prepend(int theItem);
	void Prepend(Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
	void InsertBefore(int theIndex, int theItem);
	void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, int theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
	void InsertAfter(int theIndex, int theItem);
	void Split(int theIndex, Macad::Occt::TColStd_SequenceOfInteger^ theSeq);
	int First();
	int ChangeFirst();
	int Last();
	int ChangeLast();
	int Value(int theIndex);
	int ChangeValue(int theIndex);
	void SetValue(int theIndex, int theItem);
}; // class TColStd_SequenceOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfReal
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfReal sealed : public BaseClass<::TColStd_SequenceOfReal>
{

#ifdef Include_TColStd_SequenceOfReal_h
public:
	Include_TColStd_SequenceOfReal_h
#endif

public:
	TColStd_SequenceOfReal(::TColStd_SequenceOfReal* nativeInstance)
		: BaseClass<::TColStd_SequenceOfReal>( nativeInstance, true )
	{}

	TColStd_SequenceOfReal(::TColStd_SequenceOfReal& nativeInstance)
		: BaseClass<::TColStd_SequenceOfReal>( &nativeInstance, false )
	{}

	property ::TColStd_SequenceOfReal* NativeInstance
	{
		::TColStd_SequenceOfReal* get()
		{
			return static_cast<::TColStd_SequenceOfReal*>(_NativeInstance);
		}
	}

public:
	TColStd_SequenceOfReal();
	TColStd_SequenceOfReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_SequenceOfReal(Macad::Occt::TColStd_SequenceOfReal^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::TColStd_SequenceOfReal^ Assign(Macad::Occt::TColStd_SequenceOfReal^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(double theItem);
	void Append(Macad::Occt::TColStd_SequenceOfReal^ theSeq);
	void Prepend(double theItem);
	void Prepend(Macad::Occt::TColStd_SequenceOfReal^ theSeq);
	void InsertBefore(int theIndex, double theItem);
	void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, double theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theSeq);
	void InsertAfter(int theIndex, double theItem);
	void Split(int theIndex, Macad::Occt::TColStd_SequenceOfReal^ theSeq);
	double First();
	double ChangeFirst();
	double Last();
	double ChangeLast();
	double Value(int theIndex);
	double ChangeValue(int theIndex);
	void SetValue(int theIndex, double theItem);
}; // class TColStd_SequenceOfReal

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfTransient
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfTransient sealed : public BaseClass<::TColStd_SequenceOfTransient>
{

#ifdef Include_TColStd_SequenceOfTransient_h
public:
	Include_TColStd_SequenceOfTransient_h
#endif

public:
	TColStd_SequenceOfTransient(::TColStd_SequenceOfTransient* nativeInstance)
		: BaseClass<::TColStd_SequenceOfTransient>( nativeInstance, true )
	{}

	TColStd_SequenceOfTransient(::TColStd_SequenceOfTransient& nativeInstance)
		: BaseClass<::TColStd_SequenceOfTransient>( &nativeInstance, false )
	{}

	property ::TColStd_SequenceOfTransient* NativeInstance
	{
		::TColStd_SequenceOfTransient* get()
		{
			return static_cast<::TColStd_SequenceOfTransient*>(_NativeInstance);
		}
	}

public:
	TColStd_SequenceOfTransient();
	TColStd_SequenceOfTransient(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_SequenceOfTransient(Macad::Occt::TColStd_SequenceOfTransient^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::TColStd_SequenceOfTransient^ Assign(Macad::Occt::TColStd_SequenceOfTransient^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Standard_Transient^ theItem);
	void Append(Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
	void Prepend(Macad::Occt::Standard_Transient^ theItem);
	void Prepend(Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Standard_Transient^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Standard_Transient theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Standard_Transient^ theItem);
	void Split(int theIndex, Macad::Occt::TColStd_SequenceOfTransient^ theSeq);
	Macad::Occt::Standard_Transient^ First();
	Macad::Occt::Standard_Transient^ ChangeFirst();
	Macad::Occt::Standard_Transient^ Last();
	Macad::Occt::Standard_Transient^ ChangeLast();
	Macad::Occt::Standard_Transient^ Value(int theIndex);
	Macad::Occt::Standard_Transient^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem);
}; // class TColStd_SequenceOfTransient

//---------------------------------------------------------------------
//  Class  TColStd_IndexedDataMapOfStringString
//---------------------------------------------------------------------
public ref class TColStd_IndexedDataMapOfStringString sealed : public BaseClass<::TColStd_IndexedDataMapOfStringString>
{

#ifdef Include_TColStd_IndexedDataMapOfStringString_h
public:
	Include_TColStd_IndexedDataMapOfStringString_h
#endif

public:
	TColStd_IndexedDataMapOfStringString(::TColStd_IndexedDataMapOfStringString* nativeInstance)
		: BaseClass<::TColStd_IndexedDataMapOfStringString>( nativeInstance, true )
	{}

	TColStd_IndexedDataMapOfStringString(::TColStd_IndexedDataMapOfStringString& nativeInstance)
		: BaseClass<::TColStd_IndexedDataMapOfStringString>( &nativeInstance, false )
	{}

	property ::TColStd_IndexedDataMapOfStringString* NativeInstance
	{
		::TColStd_IndexedDataMapOfStringString* get()
		{
			return static_cast<::TColStd_IndexedDataMapOfStringString*>(_NativeInstance);
		}
	}

public:
	TColStd_IndexedDataMapOfStringString();
	TColStd_IndexedDataMapOfStringString(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_IndexedDataMapOfStringString(int theNbBuckets);
	TColStd_IndexedDataMapOfStringString(Macad::Occt::TColStd_IndexedDataMapOfStringString^ theOther);
	void Exchange(Macad::Occt::TColStd_IndexedDataMapOfStringString^ theOther);
	int Add(Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::TCollection_AsciiString^ theItem);
	bool Contains(Macad::Occt::TCollection_AsciiString^ theKey1);
	void Substitute(int theIndex, Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::TCollection_AsciiString^ theItem);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	void RemoveKey(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::TCollection_AsciiString^ FindKey(int theIndex);
	Macad::Occt::TCollection_AsciiString^ FindFromIndex(int theIndex);
	Macad::Occt::TCollection_AsciiString^ ChangeFromIndex(int theIndex);
	int FindIndex(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::TCollection_AsciiString^ FindFromKey(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::TCollection_AsciiString^ ChangeFromKey(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::TCollection_AsciiString^ Seek(Macad::Occt::TCollection_AsciiString^ theKey1);
	Macad::Occt::TCollection_AsciiString^ ChangeSeek(Macad::Occt::TCollection_AsciiString^ theKey1);
	bool FindFromKey(Macad::Occt::TCollection_AsciiString^ theKey1, Macad::Occt::TCollection_AsciiString^ theValue);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TColStd_IndexedDataMapOfStringString

//---------------------------------------------------------------------
//  Class  TColStd_IndexedDataMapOfTransientTransient
//---------------------------------------------------------------------
public ref class TColStd_IndexedDataMapOfTransientTransient sealed : public BaseClass<::TColStd_IndexedDataMapOfTransientTransient>
{

#ifdef Include_TColStd_IndexedDataMapOfTransientTransient_h
public:
	Include_TColStd_IndexedDataMapOfTransientTransient_h
#endif

public:
	TColStd_IndexedDataMapOfTransientTransient(::TColStd_IndexedDataMapOfTransientTransient* nativeInstance)
		: BaseClass<::TColStd_IndexedDataMapOfTransientTransient>( nativeInstance, true )
	{}

	TColStd_IndexedDataMapOfTransientTransient(::TColStd_IndexedDataMapOfTransientTransient& nativeInstance)
		: BaseClass<::TColStd_IndexedDataMapOfTransientTransient>( &nativeInstance, false )
	{}

	property ::TColStd_IndexedDataMapOfTransientTransient* NativeInstance
	{
		::TColStd_IndexedDataMapOfTransientTransient* get()
		{
			return static_cast<::TColStd_IndexedDataMapOfTransientTransient*>(_NativeInstance);
		}
	}

public:
	TColStd_IndexedDataMapOfTransientTransient();
	TColStd_IndexedDataMapOfTransientTransient(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_IndexedDataMapOfTransientTransient(int theNbBuckets);
	TColStd_IndexedDataMapOfTransientTransient(Macad::Occt::TColStd_IndexedDataMapOfTransientTransient^ theOther);
	void Exchange(Macad::Occt::TColStd_IndexedDataMapOfTransientTransient^ theOther);
	int Add(Macad::Occt::Standard_Transient^ theKey1, Macad::Occt::Standard_Transient^ theItem);
	bool Contains(Macad::Occt::Standard_Transient^ theKey1);
	void Substitute(int theIndex, Macad::Occt::Standard_Transient^ theKey1, Macad::Occt::Standard_Transient^ theItem);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	void RemoveKey(Macad::Occt::Standard_Transient^ theKey1);
	Macad::Occt::Standard_Transient^ FindKey(int theIndex);
	Macad::Occt::Standard_Transient^ FindFromIndex(int theIndex);
	Macad::Occt::Standard_Transient^ ChangeFromIndex(int theIndex);
	int FindIndex(Macad::Occt::Standard_Transient^ theKey1);
	Macad::Occt::Standard_Transient^ FindFromKey(Macad::Occt::Standard_Transient^ theKey1);
	Macad::Occt::Standard_Transient^ ChangeFromKey(Macad::Occt::Standard_Transient^ theKey1);
	Macad::Occt::Standard_Transient^ Seek(Macad::Occt::Standard_Transient^ theKey1);
	Macad::Occt::Standard_Transient^ ChangeSeek(Macad::Occt::Standard_Transient^ theKey1);
	bool FindFromKey(Macad::Occt::Standard_Transient^ theKey1, Macad::Occt::Standard_Transient^ theValue);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TColStd_IndexedDataMapOfTransientTransient

//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfInteger
//---------------------------------------------------------------------
public ref class TColStd_IndexedMapOfInteger sealed : public BaseClass<::TColStd_IndexedMapOfInteger>
{

#ifdef Include_TColStd_IndexedMapOfInteger_h
public:
	Include_TColStd_IndexedMapOfInteger_h
#endif

public:
	TColStd_IndexedMapOfInteger(::TColStd_IndexedMapOfInteger* nativeInstance)
		: BaseClass<::TColStd_IndexedMapOfInteger>( nativeInstance, true )
	{}

	TColStd_IndexedMapOfInteger(::TColStd_IndexedMapOfInteger& nativeInstance)
		: BaseClass<::TColStd_IndexedMapOfInteger>( &nativeInstance, false )
	{}

	property ::TColStd_IndexedMapOfInteger* NativeInstance
	{
		::TColStd_IndexedMapOfInteger* get()
		{
			return static_cast<::TColStd_IndexedMapOfInteger*>(_NativeInstance);
		}
	}

public:
	TColStd_IndexedMapOfInteger();
	TColStd_IndexedMapOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_IndexedMapOfInteger(int theNbBuckets);
	TColStd_IndexedMapOfInteger(Macad::Occt::TColStd_IndexedMapOfInteger^ theOther);
	void Exchange(Macad::Occt::TColStd_IndexedMapOfInteger^ theOther);
	int Add(int theKey1);
	bool Contains(int theKey1);
	void Substitute(int theIndex, int theKey1);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	bool RemoveKey(int theKey1);
	int FindKey(int theIndex);
	int FindIndex(int theKey1);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TColStd_IndexedMapOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_MapRealHasher
//---------------------------------------------------------------------
public ref class TColStd_MapRealHasher sealed : public BaseClass<::TColStd_MapRealHasher>
{

#ifdef Include_TColStd_MapRealHasher_h
public:
	Include_TColStd_MapRealHasher_h
#endif

public:
	TColStd_MapRealHasher(::TColStd_MapRealHasher* nativeInstance)
		: BaseClass<::TColStd_MapRealHasher>( nativeInstance, true )
	{}

	TColStd_MapRealHasher(::TColStd_MapRealHasher& nativeInstance)
		: BaseClass<::TColStd_MapRealHasher>( &nativeInstance, false )
	{}

	property ::TColStd_MapRealHasher* NativeInstance
	{
		::TColStd_MapRealHasher* get()
		{
			return static_cast<::TColStd_MapRealHasher*>(_NativeInstance);
		}
	}

public:
	TColStd_MapRealHasher();
	TColStd_MapRealHasher(Macad::Occt::TColStd_MapRealHasher^ parameter1);
	static int HashCode(double theKey, int theUpperBound);
	static bool IsEqual(double theKey1, double theKey2);
}; // class TColStd_MapRealHasher

//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfReal
//---------------------------------------------------------------------
public ref class TColStd_IndexedMapOfReal sealed : public BaseClass<::TColStd_IndexedMapOfReal>
{

#ifdef Include_TColStd_IndexedMapOfReal_h
public:
	Include_TColStd_IndexedMapOfReal_h
#endif

public:
	TColStd_IndexedMapOfReal(::TColStd_IndexedMapOfReal* nativeInstance)
		: BaseClass<::TColStd_IndexedMapOfReal>( nativeInstance, true )
	{}

	TColStd_IndexedMapOfReal(::TColStd_IndexedMapOfReal& nativeInstance)
		: BaseClass<::TColStd_IndexedMapOfReal>( &nativeInstance, false )
	{}

	property ::TColStd_IndexedMapOfReal* NativeInstance
	{
		::TColStd_IndexedMapOfReal* get()
		{
			return static_cast<::TColStd_IndexedMapOfReal*>(_NativeInstance);
		}
	}

public:
	TColStd_IndexedMapOfReal();
	TColStd_IndexedMapOfReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_IndexedMapOfReal(int theNbBuckets);
	TColStd_IndexedMapOfReal(Macad::Occt::TColStd_IndexedMapOfReal^ theOther);
	void Exchange(Macad::Occt::TColStd_IndexedMapOfReal^ theOther);
	int Add(double theKey1);
	bool Contains(double theKey1);
	void Substitute(int theIndex, double theKey1);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	bool RemoveKey(double theKey1);
	double FindKey(int theIndex);
	int FindIndex(double theKey1);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TColStd_IndexedMapOfReal

//---------------------------------------------------------------------
//  Class  TColStd_IndexedMapOfTransient
//---------------------------------------------------------------------
public ref class TColStd_IndexedMapOfTransient sealed : public BaseClass<::TColStd_IndexedMapOfTransient>
{

#ifdef Include_TColStd_IndexedMapOfTransient_h
public:
	Include_TColStd_IndexedMapOfTransient_h
#endif

public:
	TColStd_IndexedMapOfTransient(::TColStd_IndexedMapOfTransient* nativeInstance)
		: BaseClass<::TColStd_IndexedMapOfTransient>( nativeInstance, true )
	{}

	TColStd_IndexedMapOfTransient(::TColStd_IndexedMapOfTransient& nativeInstance)
		: BaseClass<::TColStd_IndexedMapOfTransient>( &nativeInstance, false )
	{}

	property ::TColStd_IndexedMapOfTransient* NativeInstance
	{
		::TColStd_IndexedMapOfTransient* get()
		{
			return static_cast<::TColStd_IndexedMapOfTransient*>(_NativeInstance);
		}
	}

public:
	TColStd_IndexedMapOfTransient();
	TColStd_IndexedMapOfTransient(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_IndexedMapOfTransient(int theNbBuckets);
	TColStd_IndexedMapOfTransient(Macad::Occt::TColStd_IndexedMapOfTransient^ theOther);
	void Exchange(Macad::Occt::TColStd_IndexedMapOfTransient^ theOther);
	int Add(Macad::Occt::Standard_Transient^ theKey1);
	bool Contains(Macad::Occt::Standard_Transient^ theKey1);
	void Substitute(int theIndex, Macad::Occt::Standard_Transient^ theKey1);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	bool RemoveKey(Macad::Occt::Standard_Transient^ theKey1);
	Macad::Occt::Standard_Transient^ FindKey(int theIndex);
	int FindIndex(Macad::Occt::Standard_Transient^ theKey1);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TColStd_IndexedMapOfTransient

//---------------------------------------------------------------------
//  Class  TColStd_ListOfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_ListOfAsciiString sealed : public BaseClass<::TColStd_ListOfAsciiString>
{

#ifdef Include_TColStd_ListOfAsciiString_h
public:
	Include_TColStd_ListOfAsciiString_h
#endif

public:
	TColStd_ListOfAsciiString(::TColStd_ListOfAsciiString* nativeInstance)
		: BaseClass<::TColStd_ListOfAsciiString>( nativeInstance, true )
	{}

	TColStd_ListOfAsciiString(::TColStd_ListOfAsciiString& nativeInstance)
		: BaseClass<::TColStd_ListOfAsciiString>( &nativeInstance, false )
	{}

	property ::TColStd_ListOfAsciiString* NativeInstance
	{
		::TColStd_ListOfAsciiString* get()
		{
			return static_cast<::TColStd_ListOfAsciiString*>(_NativeInstance);
		}
	}

public:
	TColStd_ListOfAsciiString();
	TColStd_ListOfAsciiString(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_ListOfAsciiString(Macad::Occt::TColStd_ListOfAsciiString^ theOther);
	int Size();
	Macad::Occt::TColStd_ListOfAsciiString^ Assign(Macad::Occt::TColStd_ListOfAsciiString^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::TCollection_AsciiString^ First();
	Macad::Occt::TCollection_AsciiString^ Last();
	Macad::Occt::TCollection_AsciiString^ Append(Macad::Occt::TCollection_AsciiString^ theItem);
	/* Method skipped due to unknown mapping: void Append(TCollection_AsciiString theItem, Iterator theIter, ) */
	void Append(Macad::Occt::TColStd_ListOfAsciiString^ theOther);
	Macad::Occt::TCollection_AsciiString^ Prepend(Macad::Occt::TCollection_AsciiString^ theItem);
	void Prepend(Macad::Occt::TColStd_ListOfAsciiString^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: TCollection_AsciiString InsertBefore(TCollection_AsciiString theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(TColStd_ListOfAsciiString theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: TCollection_AsciiString InsertAfter(TCollection_AsciiString theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(TColStd_ListOfAsciiString theOther, Iterator theIter, ) */
	void Reverse();
}; // class TColStd_ListOfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_ListOfReal
//---------------------------------------------------------------------
public ref class TColStd_ListOfReal sealed : public BaseClass<::TColStd_ListOfReal>
{

#ifdef Include_TColStd_ListOfReal_h
public:
	Include_TColStd_ListOfReal_h
#endif

public:
	TColStd_ListOfReal(::TColStd_ListOfReal* nativeInstance)
		: BaseClass<::TColStd_ListOfReal>( nativeInstance, true )
	{}

	TColStd_ListOfReal(::TColStd_ListOfReal& nativeInstance)
		: BaseClass<::TColStd_ListOfReal>( &nativeInstance, false )
	{}

	property ::TColStd_ListOfReal* NativeInstance
	{
		::TColStd_ListOfReal* get()
		{
			return static_cast<::TColStd_ListOfReal*>(_NativeInstance);
		}
	}

public:
	TColStd_ListOfReal();
	TColStd_ListOfReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_ListOfReal(Macad::Occt::TColStd_ListOfReal^ theOther);
	int Size();
	Macad::Occt::TColStd_ListOfReal^ Assign(Macad::Occt::TColStd_ListOfReal^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	double First();
	double Last();
	double Append(double theItem);
	/* Method skipped due to unknown mapping: void Append(double theItem, Iterator theIter, ) */
	void Append(Macad::Occt::TColStd_ListOfReal^ theOther);
	double Prepend(double theItem);
	void Prepend(Macad::Occt::TColStd_ListOfReal^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: double InsertBefore(double theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(TColStd_ListOfReal theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: double InsertAfter(double theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(TColStd_ListOfReal theOther, Iterator theIter, ) */
	void Reverse();
}; // class TColStd_ListOfReal

//---------------------------------------------------------------------
//  Class  TColStd_ListOfTransient
//---------------------------------------------------------------------
public ref class TColStd_ListOfTransient sealed : public BaseClass<::TColStd_ListOfTransient>
{

#ifdef Include_TColStd_ListOfTransient_h
public:
	Include_TColStd_ListOfTransient_h
#endif

public:
	TColStd_ListOfTransient(::TColStd_ListOfTransient* nativeInstance)
		: BaseClass<::TColStd_ListOfTransient>( nativeInstance, true )
	{}

	TColStd_ListOfTransient(::TColStd_ListOfTransient& nativeInstance)
		: BaseClass<::TColStd_ListOfTransient>( &nativeInstance, false )
	{}

	property ::TColStd_ListOfTransient* NativeInstance
	{
		::TColStd_ListOfTransient* get()
		{
			return static_cast<::TColStd_ListOfTransient*>(_NativeInstance);
		}
	}

public:
	TColStd_ListOfTransient();
	TColStd_ListOfTransient(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_ListOfTransient(Macad::Occt::TColStd_ListOfTransient^ theOther);
	int Size();
	Macad::Occt::TColStd_ListOfTransient^ Assign(Macad::Occt::TColStd_ListOfTransient^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::Standard_Transient^ First();
	Macad::Occt::Standard_Transient^ Last();
	Macad::Occt::Standard_Transient^ Append(Macad::Occt::Standard_Transient^ theItem);
	/* Method skipped due to unknown mapping: void Append(Standard_Transient theItem, Iterator theIter, ) */
	void Append(Macad::Occt::TColStd_ListOfTransient^ theOther);
	Macad::Occt::Standard_Transient^ Prepend(Macad::Occt::Standard_Transient^ theItem);
	void Prepend(Macad::Occt::TColStd_ListOfTransient^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: Standard_Transient InsertBefore(Standard_Transient theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(TColStd_ListOfTransient theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: Standard_Transient InsertAfter(Standard_Transient theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(TColStd_ListOfTransient theOther, Iterator theIter, ) */
	void Reverse();
}; // class TColStd_ListOfTransient

//---------------------------------------------------------------------
//  Class  TColStd_MapOfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_MapOfAsciiString sealed : public BaseClass<::TColStd_MapOfAsciiString>
{

#ifdef Include_TColStd_MapOfAsciiString_h
public:
	Include_TColStd_MapOfAsciiString_h
#endif

public:
	TColStd_MapOfAsciiString(::TColStd_MapOfAsciiString* nativeInstance)
		: BaseClass<::TColStd_MapOfAsciiString>( nativeInstance, true )
	{}

	TColStd_MapOfAsciiString(::TColStd_MapOfAsciiString& nativeInstance)
		: BaseClass<::TColStd_MapOfAsciiString>( &nativeInstance, false )
	{}

	property ::TColStd_MapOfAsciiString* NativeInstance
	{
		::TColStd_MapOfAsciiString* get()
		{
			return static_cast<::TColStd_MapOfAsciiString*>(_NativeInstance);
		}
	}

public:
	TColStd_MapOfAsciiString();
	TColStd_MapOfAsciiString(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_MapOfAsciiString(int theNbBuckets);
	TColStd_MapOfAsciiString(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
	void Exchange(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
	Macad::Occt::TColStd_MapOfAsciiString^ Assign(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
	Macad::Occt::TCollection_AsciiString^ Added(Macad::Occt::TCollection_AsciiString^ K);
	bool Contains(Macad::Occt::TCollection_AsciiString^ K);
	bool Remove(Macad::Occt::TCollection_AsciiString^ K);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
	bool IsEqual(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
	bool Contains(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
	void Union(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight);
	bool Unite(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
	bool HasIntersection(Macad::Occt::TColStd_MapOfAsciiString^ theMap);
	void Intersection(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight);
	bool Intersect(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
	void Subtraction(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight);
	bool Subtract(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
	void Difference(Macad::Occt::TColStd_MapOfAsciiString^ theLeft, Macad::Occt::TColStd_MapOfAsciiString^ theRight);
	bool Differ(Macad::Occt::TColStd_MapOfAsciiString^ theOther);
}; // class TColStd_MapOfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_MapOfInteger
//---------------------------------------------------------------------
public ref class TColStd_MapOfInteger sealed : public BaseClass<::TColStd_MapOfInteger>
{

#ifdef Include_TColStd_MapOfInteger_h
public:
	Include_TColStd_MapOfInteger_h
#endif

public:
	TColStd_MapOfInteger(::TColStd_MapOfInteger* nativeInstance)
		: BaseClass<::TColStd_MapOfInteger>( nativeInstance, true )
	{}

	TColStd_MapOfInteger(::TColStd_MapOfInteger& nativeInstance)
		: BaseClass<::TColStd_MapOfInteger>( &nativeInstance, false )
	{}

	property ::TColStd_MapOfInteger* NativeInstance
	{
		::TColStd_MapOfInteger* get()
		{
			return static_cast<::TColStd_MapOfInteger*>(_NativeInstance);
		}
	}

public:
	TColStd_MapOfInteger();
	TColStd_MapOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_MapOfInteger(int theNbBuckets);
	TColStd_MapOfInteger(Macad::Occt::TColStd_MapOfInteger^ theOther);
	void Exchange(Macad::Occt::TColStd_MapOfInteger^ theOther);
	Macad::Occt::TColStd_MapOfInteger^ Assign(Macad::Occt::TColStd_MapOfInteger^ theOther);
	int Added(int K);
	bool Contains(int K);
	bool Remove(int K);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
	bool IsEqual(Macad::Occt::TColStd_MapOfInteger^ theOther);
	bool Contains(Macad::Occt::TColStd_MapOfInteger^ theOther);
	void Union(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight);
	bool Unite(Macad::Occt::TColStd_MapOfInteger^ theOther);
	bool HasIntersection(Macad::Occt::TColStd_MapOfInteger^ theMap);
	void Intersection(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight);
	bool Intersect(Macad::Occt::TColStd_MapOfInteger^ theOther);
	void Subtraction(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight);
	bool Subtract(Macad::Occt::TColStd_MapOfInteger^ theOther);
	void Difference(Macad::Occt::TColStd_MapOfInteger^ theLeft, Macad::Occt::TColStd_MapOfInteger^ theRight);
	bool Differ(Macad::Occt::TColStd_MapOfInteger^ theOther);
}; // class TColStd_MapOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_MapOfReal
//---------------------------------------------------------------------
public ref class TColStd_MapOfReal sealed : public BaseClass<::TColStd_MapOfReal>
{

#ifdef Include_TColStd_MapOfReal_h
public:
	Include_TColStd_MapOfReal_h
#endif

public:
	TColStd_MapOfReal(::TColStd_MapOfReal* nativeInstance)
		: BaseClass<::TColStd_MapOfReal>( nativeInstance, true )
	{}

	TColStd_MapOfReal(::TColStd_MapOfReal& nativeInstance)
		: BaseClass<::TColStd_MapOfReal>( &nativeInstance, false )
	{}

	property ::TColStd_MapOfReal* NativeInstance
	{
		::TColStd_MapOfReal* get()
		{
			return static_cast<::TColStd_MapOfReal*>(_NativeInstance);
		}
	}

public:
	TColStd_MapOfReal();
	TColStd_MapOfReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_MapOfReal(int theNbBuckets);
	TColStd_MapOfReal(Macad::Occt::TColStd_MapOfReal^ theOther);
	void Exchange(Macad::Occt::TColStd_MapOfReal^ theOther);
	Macad::Occt::TColStd_MapOfReal^ Assign(Macad::Occt::TColStd_MapOfReal^ theOther);
	double Added(double K);
	bool Contains(double K);
	bool Remove(double K);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
	bool IsEqual(Macad::Occt::TColStd_MapOfReal^ theOther);
	bool Contains(Macad::Occt::TColStd_MapOfReal^ theOther);
	void Union(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight);
	bool Unite(Macad::Occt::TColStd_MapOfReal^ theOther);
	bool HasIntersection(Macad::Occt::TColStd_MapOfReal^ theMap);
	void Intersection(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight);
	bool Intersect(Macad::Occt::TColStd_MapOfReal^ theOther);
	void Subtraction(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight);
	bool Subtract(Macad::Occt::TColStd_MapOfReal^ theOther);
	void Difference(Macad::Occt::TColStd_MapOfReal^ theLeft, Macad::Occt::TColStd_MapOfReal^ theRight);
	bool Differ(Macad::Occt::TColStd_MapOfReal^ theOther);
}; // class TColStd_MapOfReal

//---------------------------------------------------------------------
//  Class  TColStd_MapOfTransient
//---------------------------------------------------------------------
public ref class TColStd_MapOfTransient sealed : public BaseClass<::TColStd_MapOfTransient>
{

#ifdef Include_TColStd_MapOfTransient_h
public:
	Include_TColStd_MapOfTransient_h
#endif

public:
	TColStd_MapOfTransient(::TColStd_MapOfTransient* nativeInstance)
		: BaseClass<::TColStd_MapOfTransient>( nativeInstance, true )
	{}

	TColStd_MapOfTransient(::TColStd_MapOfTransient& nativeInstance)
		: BaseClass<::TColStd_MapOfTransient>( &nativeInstance, false )
	{}

	property ::TColStd_MapOfTransient* NativeInstance
	{
		::TColStd_MapOfTransient* get()
		{
			return static_cast<::TColStd_MapOfTransient*>(_NativeInstance);
		}
	}

public:
	TColStd_MapOfTransient();
	TColStd_MapOfTransient(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_MapOfTransient(int theNbBuckets);
	TColStd_MapOfTransient(Macad::Occt::TColStd_MapOfTransient^ theOther);
	void Exchange(Macad::Occt::TColStd_MapOfTransient^ theOther);
	Macad::Occt::TColStd_MapOfTransient^ Assign(Macad::Occt::TColStd_MapOfTransient^ theOther);
	Macad::Occt::Standard_Transient^ Added(Macad::Occt::Standard_Transient^ K);
	bool Contains(Macad::Occt::Standard_Transient^ K);
	bool Remove(Macad::Occt::Standard_Transient^ K);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
	bool IsEqual(Macad::Occt::TColStd_MapOfTransient^ theOther);
	bool Contains(Macad::Occt::TColStd_MapOfTransient^ theOther);
	void Union(Macad::Occt::TColStd_MapOfTransient^ theLeft, Macad::Occt::TColStd_MapOfTransient^ theRight);
	bool Unite(Macad::Occt::TColStd_MapOfTransient^ theOther);
	bool HasIntersection(Macad::Occt::TColStd_MapOfTransient^ theMap);
	void Intersection(Macad::Occt::TColStd_MapOfTransient^ theLeft, Macad::Occt::TColStd_MapOfTransient^ theRight);
	bool Intersect(Macad::Occt::TColStd_MapOfTransient^ theOther);
	void Subtraction(Macad::Occt::TColStd_MapOfTransient^ theLeft, Macad::Occt::TColStd_MapOfTransient^ theRight);
	bool Subtract(Macad::Occt::TColStd_MapOfTransient^ theOther);
	void Difference(Macad::Occt::TColStd_MapOfTransient^ theLeft, Macad::Occt::TColStd_MapOfTransient^ theRight);
	bool Differ(Macad::Occt::TColStd_MapOfTransient^ theOther);
}; // class TColStd_MapOfTransient

//---------------------------------------------------------------------
//  Class  TColStd_SequenceOfBoolean
//---------------------------------------------------------------------
public ref class TColStd_SequenceOfBoolean sealed : public BaseClass<::TColStd_SequenceOfBoolean>
{

#ifdef Include_TColStd_SequenceOfBoolean_h
public:
	Include_TColStd_SequenceOfBoolean_h
#endif

public:
	TColStd_SequenceOfBoolean(::TColStd_SequenceOfBoolean* nativeInstance)
		: BaseClass<::TColStd_SequenceOfBoolean>( nativeInstance, true )
	{}

	TColStd_SequenceOfBoolean(::TColStd_SequenceOfBoolean& nativeInstance)
		: BaseClass<::TColStd_SequenceOfBoolean>( &nativeInstance, false )
	{}

	property ::TColStd_SequenceOfBoolean* NativeInstance
	{
		::TColStd_SequenceOfBoolean* get()
		{
			return static_cast<::TColStd_SequenceOfBoolean*>(_NativeInstance);
		}
	}

public:
	TColStd_SequenceOfBoolean();
	TColStd_SequenceOfBoolean(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TColStd_SequenceOfBoolean(Macad::Occt::TColStd_SequenceOfBoolean^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::TColStd_SequenceOfBoolean^ Assign(Macad::Occt::TColStd_SequenceOfBoolean^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(bool theItem);
	void Append(Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
	void Prepend(bool theItem);
	void Prepend(Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
	void InsertBefore(int theIndex, bool theItem);
	void InsertBefore(int theIndex, Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, bool theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
	void InsertAfter(int theIndex, bool theItem);
	void Split(int theIndex, Macad::Occt::TColStd_SequenceOfBoolean^ theSeq);
	bool First();
	bool ChangeFirst();
	bool Last();
	bool ChangeLast();
	bool Value(int theIndex);
	bool ChangeValue(int theIndex);
	void SetValue(int theIndex, bool theItem);
}; // class TColStd_SequenceOfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfAsciiString sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray1OfAsciiString_h
public:
	Include_TColStd_HArray1OfAsciiString_h
#endif

public:
	TColStd_HArray1OfAsciiString(::TColStd_HArray1OfAsciiString* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray1OfAsciiString(::TColStd_HArray1OfAsciiString& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray1OfAsciiString* NativeInstance
	{
		::TColStd_HArray1OfAsciiString* get()
		{
			return static_cast<::TColStd_HArray1OfAsciiString*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray1OfAsciiString^ CreateDowncasted(::TColStd_HArray1OfAsciiString* instance);

public:
	TColStd_HArray1OfAsciiString();
	TColStd_HArray1OfAsciiString(int theLower, int theUpper);
	TColStd_HArray1OfAsciiString(int theLower, int theUpper, Macad::Occt::TCollection_AsciiString^ theValue);
	TColStd_HArray1OfAsciiString(Macad::Occt::TColStd_Array1OfAsciiString^ theOther);
	TColStd_HArray1OfAsciiString(Macad::Occt::TColStd_HArray1OfAsciiString^ parameter1);
	Macad::Occt::TColStd_Array1OfAsciiString^ Array1();
	Macad::Occt::TColStd_Array1OfAsciiString^ ChangeArray1();
	void Init(Macad::Occt::TCollection_AsciiString^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<TCollection_AsciiString> Assign(NCollection_Array1<TCollection_AsciiString> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<TCollection_AsciiString> Move(NCollection_Array1<TCollection_AsciiString> theOther, ) */
	Macad::Occt::TCollection_AsciiString^ First();
	Macad::Occt::TCollection_AsciiString^ ChangeFirst();
	Macad::Occt::TCollection_AsciiString^ Last();
	Macad::Occt::TCollection_AsciiString^ ChangeLast();
	Macad::Occt::TCollection_AsciiString^ Value(int theIndex);
	Macad::Occt::TCollection_AsciiString^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_HArray1OfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfBoolean
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfBoolean sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray1OfBoolean_h
public:
	Include_TColStd_HArray1OfBoolean_h
#endif

public:
	TColStd_HArray1OfBoolean(::TColStd_HArray1OfBoolean* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray1OfBoolean(::TColStd_HArray1OfBoolean& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray1OfBoolean* NativeInstance
	{
		::TColStd_HArray1OfBoolean* get()
		{
			return static_cast<::TColStd_HArray1OfBoolean*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray1OfBoolean^ CreateDowncasted(::TColStd_HArray1OfBoolean* instance);

public:
	TColStd_HArray1OfBoolean();
	TColStd_HArray1OfBoolean(int theLower, int theUpper);
	TColStd_HArray1OfBoolean(int theLower, int theUpper, bool theValue);
	TColStd_HArray1OfBoolean(Macad::Occt::TColStd_Array1OfBoolean^ theOther);
	TColStd_HArray1OfBoolean(Macad::Occt::TColStd_HArray1OfBoolean^ parameter1);
	Macad::Occt::TColStd_Array1OfBoolean^ Array1();
	Macad::Occt::TColStd_Array1OfBoolean^ ChangeArray1();
	void Init(bool theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<bool> Assign(NCollection_Array1<bool> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<bool> Move(NCollection_Array1<bool> theOther, ) */
	bool First();
	bool ChangeFirst();
	bool Last();
	bool ChangeLast();
	bool Value(int theIndex);
	bool ChangeValue(int theIndex);
	void SetValue(int theIndex, bool theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_HArray1OfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfByte
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfByte sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray1OfByte_h
public:
	Include_TColStd_HArray1OfByte_h
#endif

public:
	TColStd_HArray1OfByte(::TColStd_HArray1OfByte* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray1OfByte(::TColStd_HArray1OfByte& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray1OfByte* NativeInstance
	{
		::TColStd_HArray1OfByte* get()
		{
			return static_cast<::TColStd_HArray1OfByte*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray1OfByte^ CreateDowncasted(::TColStd_HArray1OfByte* instance);

public:
	TColStd_HArray1OfByte();
	TColStd_HArray1OfByte(int theLower, int theUpper);
	TColStd_HArray1OfByte(int theLower, int theUpper, unsigned char theValue);
	/* Method skipped due to unknown mapping: void TColStd_HArray1OfByte(TColStd_Array1OfByte theOther, ) */
	TColStd_HArray1OfByte(Macad::Occt::TColStd_HArray1OfByte^ parameter1);
	/* Method skipped due to unknown mapping: TColStd_Array1OfByte Array1() */
	/* Method skipped due to unknown mapping: TColStd_Array1OfByte ChangeArray1() */
	void Init(unsigned char theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<unsigned char> Assign(NCollection_Array1<unsigned char> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<unsigned char> Move(NCollection_Array1<unsigned char> theOther, ) */
	unsigned char First();
	unsigned char ChangeFirst();
	unsigned char Last();
	unsigned char ChangeLast();
	unsigned char Value(int theIndex);
	unsigned char ChangeValue(int theIndex);
	void SetValue(int theIndex, unsigned char theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_HArray1OfByte

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfCharacter
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfCharacter sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray1OfCharacter_h
public:
	Include_TColStd_HArray1OfCharacter_h
#endif

public:
	TColStd_HArray1OfCharacter(::TColStd_HArray1OfCharacter* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray1OfCharacter(::TColStd_HArray1OfCharacter& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray1OfCharacter* NativeInstance
	{
		::TColStd_HArray1OfCharacter* get()
		{
			return static_cast<::TColStd_HArray1OfCharacter*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray1OfCharacter^ CreateDowncasted(::TColStd_HArray1OfCharacter* instance);

public:
	TColStd_HArray1OfCharacter();
	TColStd_HArray1OfCharacter(int theLower, int theUpper);
	TColStd_HArray1OfCharacter(int theLower, int theUpper, char theValue);
	TColStd_HArray1OfCharacter(Macad::Occt::TColStd_Array1OfCharacter^ theOther);
	TColStd_HArray1OfCharacter(Macad::Occt::TColStd_HArray1OfCharacter^ parameter1);
	Macad::Occt::TColStd_Array1OfCharacter^ Array1();
	Macad::Occt::TColStd_Array1OfCharacter^ ChangeArray1();
	void Init(char theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<char> Assign(NCollection_Array1<char> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<char> Move(NCollection_Array1<char> theOther, ) */
	char First();
	char ChangeFirst();
	char Last();
	char ChangeLast();
	char Value(int theIndex);
	char ChangeValue(int theIndex);
	void SetValue(int theIndex, char theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_HArray1OfCharacter

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfExtendedString
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfExtendedString sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray1OfExtendedString_h
public:
	Include_TColStd_HArray1OfExtendedString_h
#endif

public:
	TColStd_HArray1OfExtendedString(::TColStd_HArray1OfExtendedString* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray1OfExtendedString(::TColStd_HArray1OfExtendedString& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray1OfExtendedString* NativeInstance
	{
		::TColStd_HArray1OfExtendedString* get()
		{
			return static_cast<::TColStd_HArray1OfExtendedString*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray1OfExtendedString^ CreateDowncasted(::TColStd_HArray1OfExtendedString* instance);

public:
	TColStd_HArray1OfExtendedString();
	TColStd_HArray1OfExtendedString(int theLower, int theUpper);
	TColStd_HArray1OfExtendedString(int theLower, int theUpper, Macad::Occt::TCollection_ExtendedString^ theValue);
	TColStd_HArray1OfExtendedString(Macad::Occt::TColStd_Array1OfExtendedString^ theOther);
	TColStd_HArray1OfExtendedString(Macad::Occt::TColStd_HArray1OfExtendedString^ parameter1);
	Macad::Occt::TColStd_Array1OfExtendedString^ Array1();
	Macad::Occt::TColStd_Array1OfExtendedString^ ChangeArray1();
	void Init(Macad::Occt::TCollection_ExtendedString^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<TCollection_ExtendedString> Assign(NCollection_Array1<TCollection_ExtendedString> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<TCollection_ExtendedString> Move(NCollection_Array1<TCollection_ExtendedString> theOther, ) */
	Macad::Occt::TCollection_ExtendedString^ First();
	Macad::Occt::TCollection_ExtendedString^ ChangeFirst();
	Macad::Occt::TCollection_ExtendedString^ Last();
	Macad::Occt::TCollection_ExtendedString^ ChangeLast();
	Macad::Occt::TCollection_ExtendedString^ Value(int theIndex);
	Macad::Occt::TCollection_ExtendedString^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_HArray1OfExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfInteger
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfInteger sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray1OfInteger_h
public:
	Include_TColStd_HArray1OfInteger_h
#endif

public:
	TColStd_HArray1OfInteger(::TColStd_HArray1OfInteger* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray1OfInteger(::TColStd_HArray1OfInteger& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray1OfInteger* NativeInstance
	{
		::TColStd_HArray1OfInteger* get()
		{
			return static_cast<::TColStd_HArray1OfInteger*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray1OfInteger^ CreateDowncasted(::TColStd_HArray1OfInteger* instance);

public:
	TColStd_HArray1OfInteger();
	TColStd_HArray1OfInteger(int theLower, int theUpper);
	TColStd_HArray1OfInteger(int theLower, int theUpper, int theValue);
	TColStd_HArray1OfInteger(Macad::Occt::TColStd_Array1OfInteger^ theOther);
	TColStd_HArray1OfInteger(Macad::Occt::TColStd_HArray1OfInteger^ parameter1);
	Macad::Occt::TColStd_Array1OfInteger^ Array1();
	Macad::Occt::TColStd_Array1OfInteger^ ChangeArray1();
	void Init(int theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<int> Assign(NCollection_Array1<int> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<int> Move(NCollection_Array1<int> theOther, ) */
	int First();
	int ChangeFirst();
	int Last();
	int ChangeLast();
	int Value(int theIndex);
	int ChangeValue(int theIndex);
	void SetValue(int theIndex, int theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_HArray1OfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfListOfInteger
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfListOfInteger sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray1OfListOfInteger_h
public:
	Include_TColStd_HArray1OfListOfInteger_h
#endif

public:
	TColStd_HArray1OfListOfInteger(::TColStd_HArray1OfListOfInteger* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray1OfListOfInteger(::TColStd_HArray1OfListOfInteger& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray1OfListOfInteger* NativeInstance
	{
		::TColStd_HArray1OfListOfInteger* get()
		{
			return static_cast<::TColStd_HArray1OfListOfInteger*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray1OfListOfInteger^ CreateDowncasted(::TColStd_HArray1OfListOfInteger* instance);

public:
	TColStd_HArray1OfListOfInteger();
	TColStd_HArray1OfListOfInteger(int theLower, int theUpper);
	/* Method skipped due to unknown mapping: void TColStd_HArray1OfListOfInteger(Standard_Integer theLower, Standard_Integer theUpper, value_type theValue, ) */
	TColStd_HArray1OfListOfInteger(Macad::Occt::TColStd_Array1OfListOfInteger^ theOther);
	TColStd_HArray1OfListOfInteger(Macad::Occt::TColStd_HArray1OfListOfInteger^ parameter1);
	Macad::Occt::TColStd_Array1OfListOfInteger^ Array1();
	Macad::Occt::TColStd_Array1OfListOfInteger^ ChangeArray1();
	/* Method skipped due to unknown mapping: void Init(NCollection_List<int> theValue, ) */
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<NCollection_List<int>> Assign(NCollection_Array1<NCollection_List<int>> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<NCollection_List<int>> Move(NCollection_Array1<NCollection_List<int>> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_List<int> First() */
	/* Method skipped due to unknown mapping: NCollection_List<int> ChangeFirst() */
	/* Method skipped due to unknown mapping: NCollection_List<int> Last() */
	/* Method skipped due to unknown mapping: NCollection_List<int> ChangeLast() */
	/* Method skipped due to unknown mapping: NCollection_List<int> Value(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: NCollection_List<int> ChangeValue(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: void SetValue(Standard_Integer theIndex, NCollection_List<int> theItem, ) */
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_HArray1OfListOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfReal
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfReal sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray1OfReal_h
public:
	Include_TColStd_HArray1OfReal_h
#endif

public:
	TColStd_HArray1OfReal(::TColStd_HArray1OfReal* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray1OfReal(::TColStd_HArray1OfReal& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray1OfReal* NativeInstance
	{
		::TColStd_HArray1OfReal* get()
		{
			return static_cast<::TColStd_HArray1OfReal*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray1OfReal^ CreateDowncasted(::TColStd_HArray1OfReal* instance);

public:
	TColStd_HArray1OfReal();
	TColStd_HArray1OfReal(int theLower, int theUpper);
	TColStd_HArray1OfReal(int theLower, int theUpper, double theValue);
	TColStd_HArray1OfReal(Macad::Occt::TColStd_Array1OfReal^ theOther);
	TColStd_HArray1OfReal(Macad::Occt::TColStd_HArray1OfReal^ parameter1);
	Macad::Occt::TColStd_Array1OfReal^ Array1();
	Macad::Occt::TColStd_Array1OfReal^ ChangeArray1();
	void Init(double theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<double> Assign(NCollection_Array1<double> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<double> Move(NCollection_Array1<double> theOther, ) */
	double First();
	double ChangeFirst();
	double Last();
	double ChangeLast();
	double Value(int theIndex);
	double ChangeValue(int theIndex);
	void SetValue(int theIndex, double theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_HArray1OfReal

//---------------------------------------------------------------------
//  Class  TColStd_HArray1OfTransient
//---------------------------------------------------------------------
public ref class TColStd_HArray1OfTransient sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray1OfTransient_h
public:
	Include_TColStd_HArray1OfTransient_h
#endif

public:
	TColStd_HArray1OfTransient(::TColStd_HArray1OfTransient* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray1OfTransient(::TColStd_HArray1OfTransient& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray1OfTransient* NativeInstance
	{
		::TColStd_HArray1OfTransient* get()
		{
			return static_cast<::TColStd_HArray1OfTransient*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray1OfTransient^ CreateDowncasted(::TColStd_HArray1OfTransient* instance);

public:
	TColStd_HArray1OfTransient();
	TColStd_HArray1OfTransient(int theLower, int theUpper);
	TColStd_HArray1OfTransient(int theLower, int theUpper, Macad::Occt::Standard_Transient^ theValue);
	TColStd_HArray1OfTransient(Macad::Occt::TColStd_Array1OfTransient^ theOther);
	TColStd_HArray1OfTransient(Macad::Occt::TColStd_HArray1OfTransient^ parameter1);
	Macad::Occt::TColStd_Array1OfTransient^ Array1();
	Macad::Occt::TColStd_Array1OfTransient^ ChangeArray1();
	void Init(Macad::Occt::Standard_Transient^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<opencascade::handle<Standard_Transient>> Assign(NCollection_Array1<opencascade::handle<Standard_Transient>> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<opencascade::handle<Standard_Transient>> Move(NCollection_Array1<opencascade::handle<Standard_Transient>> theOther, ) */
	Macad::Occt::Standard_Transient^ First();
	Macad::Occt::Standard_Transient^ ChangeFirst();
	Macad::Occt::Standard_Transient^ Last();
	Macad::Occt::Standard_Transient^ ChangeLast();
	Macad::Occt::Standard_Transient^ Value(int theIndex);
	Macad::Occt::Standard_Transient^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColStd_HArray1OfTransient

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfBoolean
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfBoolean sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfBoolean_h
public:
	Include_TColStd_HArray2OfBoolean_h
#endif

public:
	TColStd_HArray2OfBoolean(::TColStd_HArray2OfBoolean* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray2OfBoolean(::TColStd_HArray2OfBoolean& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray2OfBoolean* NativeInstance
	{
		::TColStd_HArray2OfBoolean* get()
		{
			return static_cast<::TColStd_HArray2OfBoolean*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray2OfBoolean^ CreateDowncasted(::TColStd_HArray2OfBoolean* instance);

public:
	TColStd_HArray2OfBoolean(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
	TColStd_HArray2OfBoolean(int theRowLow, int theRowUpp, int theColLow, int theColUpp, bool theValue);
	TColStd_HArray2OfBoolean(Macad::Occt::TColStd_Array2OfBoolean^ theOther);
	TColStd_HArray2OfBoolean(Macad::Occt::TColStd_HArray2OfBoolean^ parameter1);
	Macad::Occt::TColStd_Array2OfBoolean^ Array2();
	Macad::Occt::TColStd_Array2OfBoolean^ ChangeArray2();
	void Init(bool theValue);
	int Size();
	int Length();
	int NbRows();
	int NbColumns();
	int RowLength();
	int ColLength();
	int LowerRow();
	int UpperRow();
	int LowerCol();
	int UpperCol();
	bool IsDeletable();
	/* Method skipped due to unknown mapping: NCollection_Array2<bool> Assign(NCollection_Array2<bool> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array2<bool> Move(NCollection_Array2<bool> theOther, ) */
	bool Value(int theRow, int theCol);
	bool ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, bool theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TColStd_HArray2OfBoolean

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfCharacter
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfCharacter sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfCharacter_h
public:
	Include_TColStd_HArray2OfCharacter_h
#endif

public:
	TColStd_HArray2OfCharacter(::TColStd_HArray2OfCharacter* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray2OfCharacter(::TColStd_HArray2OfCharacter& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray2OfCharacter* NativeInstance
	{
		::TColStd_HArray2OfCharacter* get()
		{
			return static_cast<::TColStd_HArray2OfCharacter*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray2OfCharacter^ CreateDowncasted(::TColStd_HArray2OfCharacter* instance);

public:
	TColStd_HArray2OfCharacter(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
	TColStd_HArray2OfCharacter(int theRowLow, int theRowUpp, int theColLow, int theColUpp, char theValue);
	TColStd_HArray2OfCharacter(Macad::Occt::TColStd_Array2OfCharacter^ theOther);
	TColStd_HArray2OfCharacter(Macad::Occt::TColStd_HArray2OfCharacter^ parameter1);
	Macad::Occt::TColStd_Array2OfCharacter^ Array2();
	Macad::Occt::TColStd_Array2OfCharacter^ ChangeArray2();
	void Init(char theValue);
	int Size();
	int Length();
	int NbRows();
	int NbColumns();
	int RowLength();
	int ColLength();
	int LowerRow();
	int UpperRow();
	int LowerCol();
	int UpperCol();
	bool IsDeletable();
	/* Method skipped due to unknown mapping: NCollection_Array2<char> Assign(NCollection_Array2<char> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array2<char> Move(NCollection_Array2<char> theOther, ) */
	char Value(int theRow, int theCol);
	char ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, char theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TColStd_HArray2OfCharacter

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfInteger
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfInteger sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfInteger_h
public:
	Include_TColStd_HArray2OfInteger_h
#endif

public:
	TColStd_HArray2OfInteger(::TColStd_HArray2OfInteger* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray2OfInteger(::TColStd_HArray2OfInteger& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray2OfInteger* NativeInstance
	{
		::TColStd_HArray2OfInteger* get()
		{
			return static_cast<::TColStd_HArray2OfInteger*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray2OfInteger^ CreateDowncasted(::TColStd_HArray2OfInteger* instance);

public:
	TColStd_HArray2OfInteger(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
	TColStd_HArray2OfInteger(int theRowLow, int theRowUpp, int theColLow, int theColUpp, int theValue);
	TColStd_HArray2OfInteger(Macad::Occt::TColStd_Array2OfInteger^ theOther);
	TColStd_HArray2OfInteger(Macad::Occt::TColStd_HArray2OfInteger^ parameter1);
	Macad::Occt::TColStd_Array2OfInteger^ Array2();
	Macad::Occt::TColStd_Array2OfInteger^ ChangeArray2();
	void Init(int theValue);
	int Size();
	int Length();
	int NbRows();
	int NbColumns();
	int RowLength();
	int ColLength();
	int LowerRow();
	int UpperRow();
	int LowerCol();
	int UpperCol();
	bool IsDeletable();
	/* Method skipped due to unknown mapping: NCollection_Array2<int> Assign(NCollection_Array2<int> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array2<int> Move(NCollection_Array2<int> theOther, ) */
	int Value(int theRow, int theCol);
	int ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, int theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TColStd_HArray2OfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfReal
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfReal sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfReal_h
public:
	Include_TColStd_HArray2OfReal_h
#endif

public:
	TColStd_HArray2OfReal(::TColStd_HArray2OfReal* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray2OfReal(::TColStd_HArray2OfReal& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray2OfReal* NativeInstance
	{
		::TColStd_HArray2OfReal* get()
		{
			return static_cast<::TColStd_HArray2OfReal*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray2OfReal^ CreateDowncasted(::TColStd_HArray2OfReal* instance);

public:
	TColStd_HArray2OfReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
	TColStd_HArray2OfReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp, double theValue);
	TColStd_HArray2OfReal(Macad::Occt::TColStd_Array2OfReal^ theOther);
	TColStd_HArray2OfReal(Macad::Occt::TColStd_HArray2OfReal^ parameter1);
	Macad::Occt::TColStd_Array2OfReal^ Array2();
	Macad::Occt::TColStd_Array2OfReal^ ChangeArray2();
	void Init(double theValue);
	int Size();
	int Length();
	int NbRows();
	int NbColumns();
	int RowLength();
	int ColLength();
	int LowerRow();
	int UpperRow();
	int LowerCol();
	int UpperCol();
	bool IsDeletable();
	/* Method skipped due to unknown mapping: NCollection_Array2<double> Assign(NCollection_Array2<double> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array2<double> Move(NCollection_Array2<double> theOther, ) */
	double Value(int theRow, int theCol);
	double ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, double theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TColStd_HArray2OfReal

//---------------------------------------------------------------------
//  Class  TColStd_HArray2OfTransient
//---------------------------------------------------------------------
public ref class TColStd_HArray2OfTransient sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HArray2OfTransient_h
public:
	Include_TColStd_HArray2OfTransient_h
#endif

public:
	TColStd_HArray2OfTransient(::TColStd_HArray2OfTransient* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HArray2OfTransient(::TColStd_HArray2OfTransient& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HArray2OfTransient* NativeInstance
	{
		::TColStd_HArray2OfTransient* get()
		{
			return static_cast<::TColStd_HArray2OfTransient*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HArray2OfTransient^ CreateDowncasted(::TColStd_HArray2OfTransient* instance);

public:
	TColStd_HArray2OfTransient(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
	TColStd_HArray2OfTransient(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Standard_Transient^ theValue);
	TColStd_HArray2OfTransient(Macad::Occt::TColStd_Array2OfTransient^ theOther);
	TColStd_HArray2OfTransient(Macad::Occt::TColStd_HArray2OfTransient^ parameter1);
	Macad::Occt::TColStd_Array2OfTransient^ Array2();
	Macad::Occt::TColStd_Array2OfTransient^ ChangeArray2();
	void Init(Macad::Occt::Standard_Transient^ theValue);
	int Size();
	int Length();
	int NbRows();
	int NbColumns();
	int RowLength();
	int ColLength();
	int LowerRow();
	int UpperRow();
	int LowerCol();
	int UpperCol();
	bool IsDeletable();
	/* Method skipped due to unknown mapping: NCollection_Array2<opencascade::handle<Standard_Transient>> Assign(NCollection_Array2<opencascade::handle<Standard_Transient>> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array2<opencascade::handle<Standard_Transient>> Move(NCollection_Array2<opencascade::handle<Standard_Transient>> theOther, ) */
	Macad::Occt::Standard_Transient^ Value(int theRow, int theCol);
	Macad::Occt::Standard_Transient^ ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, Macad::Occt::Standard_Transient^ theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TColStd_HArray2OfTransient

//---------------------------------------------------------------------
//  Class  TColStd_HPackedMapOfInteger
//---------------------------------------------------------------------
public ref class TColStd_HPackedMapOfInteger sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HPackedMapOfInteger_h
public:
	Include_TColStd_HPackedMapOfInteger_h
#endif

public:
	TColStd_HPackedMapOfInteger(::TColStd_HPackedMapOfInteger* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HPackedMapOfInteger(::TColStd_HPackedMapOfInteger& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HPackedMapOfInteger* NativeInstance
	{
		::TColStd_HPackedMapOfInteger* get()
		{
			return static_cast<::TColStd_HPackedMapOfInteger*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HPackedMapOfInteger^ CreateDowncasted(::TColStd_HPackedMapOfInteger* instance);

public:
	TColStd_HPackedMapOfInteger(int NbBuckets);
	/* Method skipped due to unknown mapping: void TColStd_HPackedMapOfInteger(TColStd_PackedMapOfInteger theOther, ) */
	TColStd_HPackedMapOfInteger(Macad::Occt::TColStd_HPackedMapOfInteger^ parameter1);
	/* Method skipped due to unknown mapping: TColStd_PackedMapOfInteger Map() */
	/* Method skipped due to unknown mapping: TColStd_PackedMapOfInteger ChangeMap() */
}; // class TColStd_HPackedMapOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfAsciiString
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfAsciiString sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HSequenceOfAsciiString_h
public:
	Include_TColStd_HSequenceOfAsciiString_h
#endif

public:
	TColStd_HSequenceOfAsciiString(::TColStd_HSequenceOfAsciiString* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HSequenceOfAsciiString(::TColStd_HSequenceOfAsciiString& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HSequenceOfAsciiString* NativeInstance
	{
		::TColStd_HSequenceOfAsciiString* get()
		{
			return static_cast<::TColStd_HSequenceOfAsciiString*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HSequenceOfAsciiString^ CreateDowncasted(::TColStd_HSequenceOfAsciiString* instance);

public:
	TColStd_HSequenceOfAsciiString();
	TColStd_HSequenceOfAsciiString(Macad::Occt::TColStd_SequenceOfAsciiString^ theOther);
	TColStd_HSequenceOfAsciiString(Macad::Occt::TColStd_HSequenceOfAsciiString^ parameter1);
	Macad::Occt::TColStd_SequenceOfAsciiString^ Sequence();
	void Append(Macad::Occt::TCollection_AsciiString^ theItem);
	void Append(Macad::Occt::TColStd_SequenceOfAsciiString^ theSequence);
	Macad::Occt::TColStd_SequenceOfAsciiString^ ChangeSequence();
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	/* Method skipped due to unknown mapping: NCollection_Sequence<TCollection_AsciiString> Assign(NCollection_Sequence<TCollection_AsciiString> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<TCollection_AsciiString> theSeq, ) */
	void Prepend(Macad::Occt::TCollection_AsciiString^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<TCollection_AsciiString> theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<TCollection_AsciiString> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, TCollection_AsciiString theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<TCollection_AsciiString> theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<TCollection_AsciiString> theSeq, ) */
	Macad::Occt::TCollection_AsciiString^ First();
	Macad::Occt::TCollection_AsciiString^ ChangeFirst();
	Macad::Occt::TCollection_AsciiString^ Last();
	Macad::Occt::TCollection_AsciiString^ ChangeLast();
	Macad::Occt::TCollection_AsciiString^ Value(int theIndex);
	Macad::Occt::TCollection_AsciiString^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TCollection_AsciiString^ theItem);
}; // class TColStd_HSequenceOfAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfExtendedString
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfExtendedString sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HSequenceOfExtendedString_h
public:
	Include_TColStd_HSequenceOfExtendedString_h
#endif

public:
	TColStd_HSequenceOfExtendedString(::TColStd_HSequenceOfExtendedString* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HSequenceOfExtendedString(::TColStd_HSequenceOfExtendedString& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HSequenceOfExtendedString* NativeInstance
	{
		::TColStd_HSequenceOfExtendedString* get()
		{
			return static_cast<::TColStd_HSequenceOfExtendedString*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HSequenceOfExtendedString^ CreateDowncasted(::TColStd_HSequenceOfExtendedString* instance);

public:
	TColStd_HSequenceOfExtendedString();
	TColStd_HSequenceOfExtendedString(Macad::Occt::TColStd_SequenceOfExtendedString^ theOther);
	TColStd_HSequenceOfExtendedString(Macad::Occt::TColStd_HSequenceOfExtendedString^ parameter1);
	Macad::Occt::TColStd_SequenceOfExtendedString^ Sequence();
	void Append(Macad::Occt::TCollection_ExtendedString^ theItem);
	void Append(Macad::Occt::TColStd_SequenceOfExtendedString^ theSequence);
	Macad::Occt::TColStd_SequenceOfExtendedString^ ChangeSequence();
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	/* Method skipped due to unknown mapping: NCollection_Sequence<TCollection_ExtendedString> Assign(NCollection_Sequence<TCollection_ExtendedString> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<TCollection_ExtendedString> theSeq, ) */
	void Prepend(Macad::Occt::TCollection_ExtendedString^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<TCollection_ExtendedString> theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<TCollection_ExtendedString> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, TCollection_ExtendedString theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<TCollection_ExtendedString> theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<TCollection_ExtendedString> theSeq, ) */
	Macad::Occt::TCollection_ExtendedString^ First();
	Macad::Occt::TCollection_ExtendedString^ ChangeFirst();
	Macad::Occt::TCollection_ExtendedString^ Last();
	Macad::Occt::TCollection_ExtendedString^ ChangeLast();
	Macad::Occt::TCollection_ExtendedString^ Value(int theIndex);
	Macad::Occt::TCollection_ExtendedString^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TCollection_ExtendedString^ theItem);
}; // class TColStd_HSequenceOfExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHAsciiString
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfHAsciiString sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HSequenceOfHAsciiString_h
public:
	Include_TColStd_HSequenceOfHAsciiString_h
#endif

public:
	TColStd_HSequenceOfHAsciiString(::TColStd_HSequenceOfHAsciiString* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HSequenceOfHAsciiString(::TColStd_HSequenceOfHAsciiString& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HSequenceOfHAsciiString* NativeInstance
	{
		::TColStd_HSequenceOfHAsciiString* get()
		{
			return static_cast<::TColStd_HSequenceOfHAsciiString*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HSequenceOfHAsciiString^ CreateDowncasted(::TColStd_HSequenceOfHAsciiString* instance);

public:
	TColStd_HSequenceOfHAsciiString();
	TColStd_HSequenceOfHAsciiString(Macad::Occt::TColStd_SequenceOfHAsciiString^ theOther);
	TColStd_HSequenceOfHAsciiString(Macad::Occt::TColStd_HSequenceOfHAsciiString^ parameter1);
	Macad::Occt::TColStd_SequenceOfHAsciiString^ Sequence();
	void Append(Macad::Occt::TCollection_HAsciiString^ theItem);
	void Append(Macad::Occt::TColStd_SequenceOfHAsciiString^ theSequence);
	Macad::Occt::TColStd_SequenceOfHAsciiString^ ChangeSequence();
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<TCollection_HAsciiString>> Assign(NCollection_Sequence<opencascade::handle<TCollection_HAsciiString>> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<TCollection_HAsciiString>> theSeq, ) */
	void Prepend(Macad::Occt::TCollection_HAsciiString^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<TCollection_HAsciiString>> theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<TCollection_HAsciiString>> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, TCollection_HAsciiString theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<TCollection_HAsciiString>> theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<TCollection_HAsciiString>> theSeq, ) */
	Macad::Occt::TCollection_HAsciiString^ First();
	Macad::Occt::TCollection_HAsciiString^ ChangeFirst();
	Macad::Occt::TCollection_HAsciiString^ Last();
	Macad::Occt::TCollection_HAsciiString^ ChangeLast();
	Macad::Occt::TCollection_HAsciiString^ Value(int theIndex);
	Macad::Occt::TCollection_HAsciiString^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TCollection_HAsciiString^ theItem);
}; // class TColStd_HSequenceOfHAsciiString

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfHExtendedString
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfHExtendedString sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HSequenceOfHExtendedString_h
public:
	Include_TColStd_HSequenceOfHExtendedString_h
#endif

public:
	TColStd_HSequenceOfHExtendedString(::TColStd_HSequenceOfHExtendedString* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HSequenceOfHExtendedString(::TColStd_HSequenceOfHExtendedString& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HSequenceOfHExtendedString* NativeInstance
	{
		::TColStd_HSequenceOfHExtendedString* get()
		{
			return static_cast<::TColStd_HSequenceOfHExtendedString*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HSequenceOfHExtendedString^ CreateDowncasted(::TColStd_HSequenceOfHExtendedString* instance);

public:
	TColStd_HSequenceOfHExtendedString();
	TColStd_HSequenceOfHExtendedString(Macad::Occt::TColStd_SequenceOfHExtendedString^ theOther);
	TColStd_HSequenceOfHExtendedString(Macad::Occt::TColStd_HSequenceOfHExtendedString^ parameter1);
	Macad::Occt::TColStd_SequenceOfHExtendedString^ Sequence();
	void Append(Macad::Occt::TCollection_HExtendedString^ theItem);
	void Append(Macad::Occt::TColStd_SequenceOfHExtendedString^ theSequence);
	Macad::Occt::TColStd_SequenceOfHExtendedString^ ChangeSequence();
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<TCollection_HExtendedString>> Assign(NCollection_Sequence<opencascade::handle<TCollection_HExtendedString>> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<TCollection_HExtendedString>> theSeq, ) */
	void Prepend(Macad::Occt::TCollection_HExtendedString^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<TCollection_HExtendedString>> theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<TCollection_HExtendedString>> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, TCollection_HExtendedString theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<TCollection_HExtendedString>> theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<TCollection_HExtendedString>> theSeq, ) */
	Macad::Occt::TCollection_HExtendedString^ First();
	Macad::Occt::TCollection_HExtendedString^ ChangeFirst();
	Macad::Occt::TCollection_HExtendedString^ Last();
	Macad::Occt::TCollection_HExtendedString^ ChangeLast();
	Macad::Occt::TCollection_HExtendedString^ Value(int theIndex);
	Macad::Occt::TCollection_HExtendedString^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TCollection_HExtendedString^ theItem);
}; // class TColStd_HSequenceOfHExtendedString

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfInteger
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfInteger sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HSequenceOfInteger_h
public:
	Include_TColStd_HSequenceOfInteger_h
#endif

public:
	TColStd_HSequenceOfInteger(::TColStd_HSequenceOfInteger* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HSequenceOfInteger(::TColStd_HSequenceOfInteger& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HSequenceOfInteger* NativeInstance
	{
		::TColStd_HSequenceOfInteger* get()
		{
			return static_cast<::TColStd_HSequenceOfInteger*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HSequenceOfInteger^ CreateDowncasted(::TColStd_HSequenceOfInteger* instance);

public:
	TColStd_HSequenceOfInteger();
	TColStd_HSequenceOfInteger(Macad::Occt::TColStd_SequenceOfInteger^ theOther);
	TColStd_HSequenceOfInteger(Macad::Occt::TColStd_HSequenceOfInteger^ parameter1);
	Macad::Occt::TColStd_SequenceOfInteger^ Sequence();
	void Append(int theItem);
	void Append(Macad::Occt::TColStd_SequenceOfInteger^ theSequence);
	Macad::Occt::TColStd_SequenceOfInteger^ ChangeSequence();
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	/* Method skipped due to unknown mapping: NCollection_Sequence<int> Assign(NCollection_Sequence<int> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<int> theSeq, ) */
	void Prepend(int theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<int> theSeq, ) */
	void InsertBefore(int theIndex, int theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<int> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, int theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<int> theSeq, ) */
	void InsertAfter(int theIndex, int theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<int> theSeq, ) */
	int First();
	int ChangeFirst();
	int Last();
	int ChangeLast();
	int Value(int theIndex);
	int ChangeValue(int theIndex);
	void SetValue(int theIndex, int theItem);
}; // class TColStd_HSequenceOfInteger

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfReal
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfReal sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HSequenceOfReal_h
public:
	Include_TColStd_HSequenceOfReal_h
#endif

public:
	TColStd_HSequenceOfReal(::TColStd_HSequenceOfReal* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HSequenceOfReal(::TColStd_HSequenceOfReal& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HSequenceOfReal* NativeInstance
	{
		::TColStd_HSequenceOfReal* get()
		{
			return static_cast<::TColStd_HSequenceOfReal*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HSequenceOfReal^ CreateDowncasted(::TColStd_HSequenceOfReal* instance);

public:
	TColStd_HSequenceOfReal();
	TColStd_HSequenceOfReal(Macad::Occt::TColStd_SequenceOfReal^ theOther);
	TColStd_HSequenceOfReal(Macad::Occt::TColStd_HSequenceOfReal^ parameter1);
	Macad::Occt::TColStd_SequenceOfReal^ Sequence();
	void Append(double theItem);
	void Append(Macad::Occt::TColStd_SequenceOfReal^ theSequence);
	Macad::Occt::TColStd_SequenceOfReal^ ChangeSequence();
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	/* Method skipped due to unknown mapping: NCollection_Sequence<double> Assign(NCollection_Sequence<double> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<double> theSeq, ) */
	void Prepend(double theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<double> theSeq, ) */
	void InsertBefore(int theIndex, double theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<double> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, double theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<double> theSeq, ) */
	void InsertAfter(int theIndex, double theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<double> theSeq, ) */
	double First();
	double ChangeFirst();
	double Last();
	double ChangeLast();
	double Value(int theIndex);
	double ChangeValue(int theIndex);
	void SetValue(int theIndex, double theItem);
}; // class TColStd_HSequenceOfReal

//---------------------------------------------------------------------
//  Class  TColStd_HSequenceOfTransient
//---------------------------------------------------------------------
public ref class TColStd_HSequenceOfTransient sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColStd_HSequenceOfTransient_h
public:
	Include_TColStd_HSequenceOfTransient_h
#endif

public:
	TColStd_HSequenceOfTransient(::TColStd_HSequenceOfTransient* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColStd_HSequenceOfTransient(::TColStd_HSequenceOfTransient& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColStd_HSequenceOfTransient* NativeInstance
	{
		::TColStd_HSequenceOfTransient* get()
		{
			return static_cast<::TColStd_HSequenceOfTransient*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColStd_HSequenceOfTransient^ CreateDowncasted(::TColStd_HSequenceOfTransient* instance);

public:
	TColStd_HSequenceOfTransient();
	TColStd_HSequenceOfTransient(Macad::Occt::TColStd_SequenceOfTransient^ theOther);
	TColStd_HSequenceOfTransient(Macad::Occt::TColStd_HSequenceOfTransient^ parameter1);
	Macad::Occt::TColStd_SequenceOfTransient^ Sequence();
	void Append(Macad::Occt::Standard_Transient^ theItem);
	void Append(Macad::Occt::TColStd_SequenceOfTransient^ theSequence);
	Macad::Occt::TColStd_SequenceOfTransient^ ChangeSequence();
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	/* Method skipped due to unknown mapping: NCollection_Sequence<opencascade::handle<Standard_Transient>> Assign(NCollection_Sequence<opencascade::handle<Standard_Transient>> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<opencascade::handle<Standard_Transient>> theSeq, ) */
	void Prepend(Macad::Occt::Standard_Transient^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<opencascade::handle<Standard_Transient>> theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::Standard_Transient^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Standard_Transient>> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Standard_Transient theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Standard_Transient>> theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::Standard_Transient^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<opencascade::handle<Standard_Transient>> theSeq, ) */
	Macad::Occt::Standard_Transient^ First();
	Macad::Occt::Standard_Transient^ ChangeFirst();
	Macad::Occt::Standard_Transient^ Last();
	Macad::Occt::Standard_Transient^ ChangeLast();
	Macad::Occt::Standard_Transient^ Value(int theIndex);
	Macad::Occt::Standard_Transient^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Standard_Transient^ theItem);
}; // class TColStd_HSequenceOfTransient

}; // namespace Occt
}; // namespace Macad
