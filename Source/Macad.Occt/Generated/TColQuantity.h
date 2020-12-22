// Generated wrapper code for package TColQuantity

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TColQuantity_Array1OfLength
//---------------------------------------------------------------------
public ref class TColQuantity_Array1OfLength sealed : public BaseClass<::TColQuantity_Array1OfLength>
{

#ifdef Include_TColQuantity_Array1OfLength_h
public:
	Include_TColQuantity_Array1OfLength_h
#endif

public:
	TColQuantity_Array1OfLength(::TColQuantity_Array1OfLength* nativeInstance)
		: BaseClass<::TColQuantity_Array1OfLength>( nativeInstance, true )
	{}

	TColQuantity_Array1OfLength(::TColQuantity_Array1OfLength& nativeInstance)
		: BaseClass<::TColQuantity_Array1OfLength>( &nativeInstance, false )
	{}

	property ::TColQuantity_Array1OfLength* NativeInstance
	{
		::TColQuantity_Array1OfLength* get()
		{
			return static_cast<::TColQuantity_Array1OfLength*>(_NativeInstance);
		}
	}

public:
	TColQuantity_Array1OfLength();
	TColQuantity_Array1OfLength(int theLower, int theUpper);
	TColQuantity_Array1OfLength(Macad::Occt::TColQuantity_Array1OfLength^ theOther);
	TColQuantity_Array1OfLength(double theBegin, int theLower, int theUpper);
	void Init(double theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::TColQuantity_Array1OfLength^ Assign(Macad::Occt::TColQuantity_Array1OfLength^ theOther);
	Macad::Occt::TColQuantity_Array1OfLength^ Move(Macad::Occt::TColQuantity_Array1OfLength^ theOther);
	double First();
	double ChangeFirst();
	double Last();
	double ChangeLast();
	double Value(int theIndex);
	double ChangeValue(int theIndex);
	void SetValue(int theIndex, double theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TColQuantity_Array1OfLength

//---------------------------------------------------------------------
//  Class  TColQuantity_Array2OfLength
//---------------------------------------------------------------------
public ref class TColQuantity_Array2OfLength sealed : public BaseClass<::TColQuantity_Array2OfLength>
{

#ifdef Include_TColQuantity_Array2OfLength_h
public:
	Include_TColQuantity_Array2OfLength_h
#endif

public:
	TColQuantity_Array2OfLength(::TColQuantity_Array2OfLength* nativeInstance)
		: BaseClass<::TColQuantity_Array2OfLength>( nativeInstance, true )
	{}

	TColQuantity_Array2OfLength(::TColQuantity_Array2OfLength& nativeInstance)
		: BaseClass<::TColQuantity_Array2OfLength>( &nativeInstance, false )
	{}

	property ::TColQuantity_Array2OfLength* NativeInstance
	{
		::TColQuantity_Array2OfLength* get()
		{
			return static_cast<::TColQuantity_Array2OfLength*>(_NativeInstance);
		}
	}

public:
	TColQuantity_Array2OfLength();
	TColQuantity_Array2OfLength(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	TColQuantity_Array2OfLength(Macad::Occt::TColQuantity_Array2OfLength^ theOther);
	TColQuantity_Array2OfLength(double theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
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
	Macad::Occt::TColQuantity_Array2OfLength^ Assign(Macad::Occt::TColQuantity_Array2OfLength^ theOther);
	Macad::Occt::TColQuantity_Array2OfLength^ Move(Macad::Occt::TColQuantity_Array2OfLength^ theOther);
	double Value(int theRow, int theCol);
	double ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, double theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TColQuantity_Array2OfLength

//---------------------------------------------------------------------
//  Class  TColQuantity_HArray1OfLength
//---------------------------------------------------------------------
public ref class TColQuantity_HArray1OfLength sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColQuantity_HArray1OfLength_h
public:
	Include_TColQuantity_HArray1OfLength_h
#endif

public:
	TColQuantity_HArray1OfLength(::TColQuantity_HArray1OfLength* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColQuantity_HArray1OfLength(::TColQuantity_HArray1OfLength& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColQuantity_HArray1OfLength* NativeInstance
	{
		::TColQuantity_HArray1OfLength* get()
		{
			return static_cast<::TColQuantity_HArray1OfLength*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColQuantity_HArray1OfLength^ CreateDowncasted(::TColQuantity_HArray1OfLength* instance);

public:
	TColQuantity_HArray1OfLength();
	TColQuantity_HArray1OfLength(int theLower, int theUpper);
	TColQuantity_HArray1OfLength(int theLower, int theUpper, double theValue);
	TColQuantity_HArray1OfLength(Macad::Occt::TColQuantity_Array1OfLength^ theOther);
	TColQuantity_HArray1OfLength(Macad::Occt::TColQuantity_HArray1OfLength^ parameter1);
	Macad::Occt::TColQuantity_Array1OfLength^ Array1();
	Macad::Occt::TColQuantity_Array1OfLength^ ChangeArray1();
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
}; // class TColQuantity_HArray1OfLength

//---------------------------------------------------------------------
//  Class  TColQuantity_HArray2OfLength
//---------------------------------------------------------------------
public ref class TColQuantity_HArray2OfLength sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TColQuantity_HArray2OfLength_h
public:
	Include_TColQuantity_HArray2OfLength_h
#endif

public:
	TColQuantity_HArray2OfLength(::TColQuantity_HArray2OfLength* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TColQuantity_HArray2OfLength(::TColQuantity_HArray2OfLength& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TColQuantity_HArray2OfLength* NativeInstance
	{
		::TColQuantity_HArray2OfLength* get()
		{
			return static_cast<::TColQuantity_HArray2OfLength*>(_NativeInstance);
		}
	}

	static Macad::Occt::TColQuantity_HArray2OfLength^ CreateDowncasted(::TColQuantity_HArray2OfLength* instance);

public:
	TColQuantity_HArray2OfLength(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
	TColQuantity_HArray2OfLength(int theRowLow, int theRowUpp, int theColLow, int theColUpp, double theValue);
	TColQuantity_HArray2OfLength(Macad::Occt::TColQuantity_Array2OfLength^ theOther);
	TColQuantity_HArray2OfLength(Macad::Occt::TColQuantity_HArray2OfLength^ parameter1);
	Macad::Occt::TColQuantity_Array2OfLength^ Array2();
	Macad::Occt::TColQuantity_Array2OfLength^ ChangeArray2();
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
}; // class TColQuantity_HArray2OfLength

}; // namespace Occt
}; // namespace Macad
