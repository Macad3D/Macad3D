// Generated wrapper code for package TShort

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TShort_Array1OfShortReal
//---------------------------------------------------------------------
public ref class TShort_Array1OfShortReal sealed : public BaseClass<::TShort_Array1OfShortReal>
{

#ifdef Include_TShort_Array1OfShortReal_h
public:
	Include_TShort_Array1OfShortReal_h
#endif

public:
	TShort_Array1OfShortReal(::TShort_Array1OfShortReal* nativeInstance)
		: BaseClass<::TShort_Array1OfShortReal>( nativeInstance, true )
	{}

	TShort_Array1OfShortReal(::TShort_Array1OfShortReal& nativeInstance)
		: BaseClass<::TShort_Array1OfShortReal>( &nativeInstance, false )
	{}

	property ::TShort_Array1OfShortReal* NativeInstance
	{
		::TShort_Array1OfShortReal* get()
		{
			return static_cast<::TShort_Array1OfShortReal*>(_NativeInstance);
		}
	}

public:
	TShort_Array1OfShortReal();
	TShort_Array1OfShortReal(int theLower, int theUpper);
	TShort_Array1OfShortReal(Macad::Occt::TShort_Array1OfShortReal^ theOther);
	TShort_Array1OfShortReal(float theBegin, int theLower, int theUpper);
	void Init(float theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::TShort_Array1OfShortReal^ Assign(Macad::Occt::TShort_Array1OfShortReal^ theOther);
	Macad::Occt::TShort_Array1OfShortReal^ Move(Macad::Occt::TShort_Array1OfShortReal^ theOther);
	float First();
	float ChangeFirst();
	float Last();
	float ChangeLast();
	float Value(int theIndex);
	float ChangeValue(int theIndex);
	void SetValue(int theIndex, float theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TShort_Array1OfShortReal

//---------------------------------------------------------------------
//  Class  TShort_Array2OfShortReal
//---------------------------------------------------------------------
public ref class TShort_Array2OfShortReal sealed : public BaseClass<::TShort_Array2OfShortReal>
{

#ifdef Include_TShort_Array2OfShortReal_h
public:
	Include_TShort_Array2OfShortReal_h
#endif

public:
	TShort_Array2OfShortReal(::TShort_Array2OfShortReal* nativeInstance)
		: BaseClass<::TShort_Array2OfShortReal>( nativeInstance, true )
	{}

	TShort_Array2OfShortReal(::TShort_Array2OfShortReal& nativeInstance)
		: BaseClass<::TShort_Array2OfShortReal>( &nativeInstance, false )
	{}

	property ::TShort_Array2OfShortReal* NativeInstance
	{
		::TShort_Array2OfShortReal* get()
		{
			return static_cast<::TShort_Array2OfShortReal*>(_NativeInstance);
		}
	}

public:
	TShort_Array2OfShortReal();
	TShort_Array2OfShortReal(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	TShort_Array2OfShortReal(Macad::Occt::TShort_Array2OfShortReal^ theOther);
	TShort_Array2OfShortReal(float theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	void Init(float theValue);
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
	Macad::Occt::TShort_Array2OfShortReal^ Assign(Macad::Occt::TShort_Array2OfShortReal^ theOther);
	Macad::Occt::TShort_Array2OfShortReal^ Move(Macad::Occt::TShort_Array2OfShortReal^ theOther);
	float Value(int theRow, int theCol);
	float ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, float theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TShort_Array2OfShortReal

//---------------------------------------------------------------------
//  Class  TShort_SequenceOfShortReal
//---------------------------------------------------------------------
public ref class TShort_SequenceOfShortReal sealed : public BaseClass<::TShort_SequenceOfShortReal>
{

#ifdef Include_TShort_SequenceOfShortReal_h
public:
	Include_TShort_SequenceOfShortReal_h
#endif

public:
	TShort_SequenceOfShortReal(::TShort_SequenceOfShortReal* nativeInstance)
		: BaseClass<::TShort_SequenceOfShortReal>( nativeInstance, true )
	{}

	TShort_SequenceOfShortReal(::TShort_SequenceOfShortReal& nativeInstance)
		: BaseClass<::TShort_SequenceOfShortReal>( &nativeInstance, false )
	{}

	property ::TShort_SequenceOfShortReal* NativeInstance
	{
		::TShort_SequenceOfShortReal* get()
		{
			return static_cast<::TShort_SequenceOfShortReal*>(_NativeInstance);
		}
	}

public:
	TShort_SequenceOfShortReal();
	TShort_SequenceOfShortReal(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TShort_SequenceOfShortReal(Macad::Occt::TShort_SequenceOfShortReal^ theOther);
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
	Macad::Occt::TShort_SequenceOfShortReal^ Assign(Macad::Occt::TShort_SequenceOfShortReal^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(float theItem);
	void Append(Macad::Occt::TShort_SequenceOfShortReal^ theSeq);
	void Prepend(float theItem);
	void Prepend(Macad::Occt::TShort_SequenceOfShortReal^ theSeq);
	void InsertBefore(int theIndex, float theItem);
	void InsertBefore(int theIndex, Macad::Occt::TShort_SequenceOfShortReal^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, float theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::TShort_SequenceOfShortReal^ theSeq);
	void InsertAfter(int theIndex, float theItem);
	void Split(int theIndex, Macad::Occt::TShort_SequenceOfShortReal^ theSeq);
	float First();
	float ChangeFirst();
	float Last();
	float ChangeLast();
	float Value(int theIndex);
	float ChangeValue(int theIndex);
	void SetValue(int theIndex, float theItem);
}; // class TShort_SequenceOfShortReal

//---------------------------------------------------------------------
//  Class  TShort_HArray1OfShortReal
//---------------------------------------------------------------------
public ref class TShort_HArray1OfShortReal sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TShort_HArray1OfShortReal_h
public:
	Include_TShort_HArray1OfShortReal_h
#endif

public:
	TShort_HArray1OfShortReal(::TShort_HArray1OfShortReal* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TShort_HArray1OfShortReal(::TShort_HArray1OfShortReal& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TShort_HArray1OfShortReal* NativeInstance
	{
		::TShort_HArray1OfShortReal* get()
		{
			return static_cast<::TShort_HArray1OfShortReal*>(_NativeInstance);
		}
	}

	static Macad::Occt::TShort_HArray1OfShortReal^ CreateDowncasted(::TShort_HArray1OfShortReal* instance);

public:
	TShort_HArray1OfShortReal();
	TShort_HArray1OfShortReal(int theLower, int theUpper);
	TShort_HArray1OfShortReal(int theLower, int theUpper, float theValue);
	TShort_HArray1OfShortReal(Macad::Occt::TShort_Array1OfShortReal^ theOther);
	TShort_HArray1OfShortReal(Macad::Occt::TShort_HArray1OfShortReal^ parameter1);
	Macad::Occt::TShort_Array1OfShortReal^ Array1();
	Macad::Occt::TShort_Array1OfShortReal^ ChangeArray1();
	void Init(float theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<float> Assign(NCollection_Array1<float> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<float> Move(NCollection_Array1<float> theOther, ) */
	float First();
	float ChangeFirst();
	float Last();
	float ChangeLast();
	float Value(int theIndex);
	float ChangeValue(int theIndex);
	void SetValue(int theIndex, float theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TShort_HArray1OfShortReal

//---------------------------------------------------------------------
//  Class  TShort_HArray2OfShortReal
//---------------------------------------------------------------------
public ref class TShort_HArray2OfShortReal sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TShort_HArray2OfShortReal_h
public:
	Include_TShort_HArray2OfShortReal_h
#endif

public:
	TShort_HArray2OfShortReal(::TShort_HArray2OfShortReal* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TShort_HArray2OfShortReal(::TShort_HArray2OfShortReal& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TShort_HArray2OfShortReal* NativeInstance
	{
		::TShort_HArray2OfShortReal* get()
		{
			return static_cast<::TShort_HArray2OfShortReal*>(_NativeInstance);
		}
	}

	static Macad::Occt::TShort_HArray2OfShortReal^ CreateDowncasted(::TShort_HArray2OfShortReal* instance);

public:
	TShort_HArray2OfShortReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
	TShort_HArray2OfShortReal(int theRowLow, int theRowUpp, int theColLow, int theColUpp, float theValue);
	TShort_HArray2OfShortReal(Macad::Occt::TShort_Array2OfShortReal^ theOther);
	TShort_HArray2OfShortReal(Macad::Occt::TShort_HArray2OfShortReal^ parameter1);
	Macad::Occt::TShort_Array2OfShortReal^ Array2();
	Macad::Occt::TShort_Array2OfShortReal^ ChangeArray2();
	void Init(float theValue);
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
	/* Method skipped due to unknown mapping: NCollection_Array2<float> Assign(NCollection_Array2<float> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array2<float> Move(NCollection_Array2<float> theOther, ) */
	float Value(int theRow, int theCol);
	float ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, float theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TShort_HArray2OfShortReal

//---------------------------------------------------------------------
//  Class  TShort_HSequenceOfShortReal
//---------------------------------------------------------------------
public ref class TShort_HSequenceOfShortReal sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TShort_HSequenceOfShortReal_h
public:
	Include_TShort_HSequenceOfShortReal_h
#endif

public:
	TShort_HSequenceOfShortReal(::TShort_HSequenceOfShortReal* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TShort_HSequenceOfShortReal(::TShort_HSequenceOfShortReal& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TShort_HSequenceOfShortReal* NativeInstance
	{
		::TShort_HSequenceOfShortReal* get()
		{
			return static_cast<::TShort_HSequenceOfShortReal*>(_NativeInstance);
		}
	}

	static Macad::Occt::TShort_HSequenceOfShortReal^ CreateDowncasted(::TShort_HSequenceOfShortReal* instance);

public:
	TShort_HSequenceOfShortReal();
	TShort_HSequenceOfShortReal(Macad::Occt::TShort_SequenceOfShortReal^ theOther);
	TShort_HSequenceOfShortReal(Macad::Occt::TShort_HSequenceOfShortReal^ parameter1);
	Macad::Occt::TShort_SequenceOfShortReal^ Sequence();
	void Append(float theItem);
	void Append(Macad::Occt::TShort_SequenceOfShortReal^ theSequence);
	Macad::Occt::TShort_SequenceOfShortReal^ ChangeSequence();
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
	/* Method skipped due to unknown mapping: NCollection_Sequence<float> Assign(NCollection_Sequence<float> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<float> theSeq, ) */
	void Prepend(float theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<float> theSeq, ) */
	void InsertBefore(int theIndex, float theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<float> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, float theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<float> theSeq, ) */
	void InsertAfter(int theIndex, float theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<float> theSeq, ) */
	float First();
	float ChangeFirst();
	float Last();
	float ChangeLast();
	float Value(int theIndex);
	float ChangeValue(int theIndex);
	void SetValue(int theIndex, float theItem);
}; // class TShort_HSequenceOfShortReal

}; // namespace Occt
}; // namespace Macad
