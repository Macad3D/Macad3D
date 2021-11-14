// Generated wrapper code for package TopTools

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  TopTools_FormatVersion
//---------------------------------------------------------------------
public enum class TopTools_FormatVersion
{
	TopTools_FormatVersion_VERSION_1 = 1,
	TopTools_FormatVersion_VERSION_2 = 2,
	TopTools_FormatVersion_VERSION_3 = 3,
	TopTools_FormatVersion_CURRENT = 3
}; // enum  class TopTools_FormatVersion

//---------------------------------------------------------------------
//  Class  TopTools_ListOfShape
//---------------------------------------------------------------------
public ref class TopTools_ListOfShape sealed : public BaseClass<::TopTools_ListOfShape>
{

#ifdef Include_TopTools_ListOfShape_h
public:
	Include_TopTools_ListOfShape_h
#endif

public:
	TopTools_ListOfShape(::TopTools_ListOfShape* nativeInstance)
		: BaseClass<::TopTools_ListOfShape>( nativeInstance, true )
	{}

	TopTools_ListOfShape(::TopTools_ListOfShape& nativeInstance)
		: BaseClass<::TopTools_ListOfShape>( &nativeInstance, false )
	{}

	property ::TopTools_ListOfShape* NativeInstance
	{
		::TopTools_ListOfShape* get()
		{
			return static_cast<::TopTools_ListOfShape*>(_NativeInstance);
		}
	}

public:
	TopTools_ListOfShape();
	TopTools_ListOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_ListOfShape(Macad::Occt::TopTools_ListOfShape^ theOther);
	int Size();
	Macad::Occt::TopTools_ListOfShape^ Assign(Macad::Occt::TopTools_ListOfShape^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::TopoDS_Shape^ First();
	Macad::Occt::TopoDS_Shape^ Last();
	Macad::Occt::TopoDS_Shape^ Append(Macad::Occt::TopoDS_Shape^ theItem);
	/* Method skipped due to unknown mapping: void Append(TopoDS_Shape theItem, Iterator theIter, ) */
	void Append(Macad::Occt::TopTools_ListOfShape^ theOther);
	Macad::Occt::TopoDS_Shape^ Prepend(Macad::Occt::TopoDS_Shape^ theItem);
	void Prepend(Macad::Occt::TopTools_ListOfShape^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: TopoDS_Shape InsertBefore(TopoDS_Shape theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(TopTools_ListOfShape theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: TopoDS_Shape InsertAfter(TopoDS_Shape theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(TopTools_ListOfShape theOther, Iterator theIter, ) */
	void Reverse();
}; // class TopTools_ListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_Array1OfListOfShape
//---------------------------------------------------------------------
public ref class TopTools_Array1OfListOfShape sealed : public BaseClass<::TopTools_Array1OfListOfShape>
{

#ifdef Include_TopTools_Array1OfListOfShape_h
public:
	Include_TopTools_Array1OfListOfShape_h
#endif

public:
	TopTools_Array1OfListOfShape(::TopTools_Array1OfListOfShape* nativeInstance)
		: BaseClass<::TopTools_Array1OfListOfShape>( nativeInstance, true )
	{}

	TopTools_Array1OfListOfShape(::TopTools_Array1OfListOfShape& nativeInstance)
		: BaseClass<::TopTools_Array1OfListOfShape>( &nativeInstance, false )
	{}

	property ::TopTools_Array1OfListOfShape* NativeInstance
	{
		::TopTools_Array1OfListOfShape* get()
		{
			return static_cast<::TopTools_Array1OfListOfShape*>(_NativeInstance);
		}
	}

public:
	TopTools_Array1OfListOfShape();
	TopTools_Array1OfListOfShape(int theLower, int theUpper);
	TopTools_Array1OfListOfShape(Macad::Occt::TopTools_Array1OfListOfShape^ theOther);
	/* Method skipped due to unknown mapping: void TopTools_Array1OfListOfShape(NCollection_List<TopoDS_Shape> theBegin, Standard_Integer theLower, Standard_Integer theUpper, ) */
	/* Method skipped due to unknown mapping: void Init(NCollection_List<TopoDS_Shape> theValue, ) */
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::TopTools_Array1OfListOfShape^ Assign(Macad::Occt::TopTools_Array1OfListOfShape^ theOther);
	Macad::Occt::TopTools_Array1OfListOfShape^ Move(Macad::Occt::TopTools_Array1OfListOfShape^ theOther);
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> First() */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> ChangeFirst() */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> Last() */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> ChangeLast() */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> Value(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> ChangeValue(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: void SetValue(Standard_Integer theIndex, NCollection_List<TopoDS_Shape> theItem, ) */
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TopTools_Array1OfListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_Array1OfShape
//---------------------------------------------------------------------
public ref class TopTools_Array1OfShape sealed : public BaseClass<::TopTools_Array1OfShape>
{

#ifdef Include_TopTools_Array1OfShape_h
public:
	Include_TopTools_Array1OfShape_h
#endif

public:
	TopTools_Array1OfShape(::TopTools_Array1OfShape* nativeInstance)
		: BaseClass<::TopTools_Array1OfShape>( nativeInstance, true )
	{}

	TopTools_Array1OfShape(::TopTools_Array1OfShape& nativeInstance)
		: BaseClass<::TopTools_Array1OfShape>( &nativeInstance, false )
	{}

	property ::TopTools_Array1OfShape* NativeInstance
	{
		::TopTools_Array1OfShape* get()
		{
			return static_cast<::TopTools_Array1OfShape*>(_NativeInstance);
		}
	}

public:
	TopTools_Array1OfShape();
	TopTools_Array1OfShape(int theLower, int theUpper);
	TopTools_Array1OfShape(Macad::Occt::TopTools_Array1OfShape^ theOther);
	TopTools_Array1OfShape(Macad::Occt::TopoDS_Shape^ theBegin, int theLower, int theUpper);
	void Init(Macad::Occt::TopoDS_Shape^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::TopTools_Array1OfShape^ Assign(Macad::Occt::TopTools_Array1OfShape^ theOther);
	Macad::Occt::TopTools_Array1OfShape^ Move(Macad::Occt::TopTools_Array1OfShape^ theOther);
	Macad::Occt::TopoDS_Shape^ First();
	Macad::Occt::TopoDS_Shape^ ChangeFirst();
	Macad::Occt::TopoDS_Shape^ Last();
	Macad::Occt::TopoDS_Shape^ ChangeLast();
	Macad::Occt::TopoDS_Shape^ Value(int theIndex);
	Macad::Occt::TopoDS_Shape^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TopTools_Array1OfShape

//---------------------------------------------------------------------
//  Class  TopTools_Array2OfShape
//---------------------------------------------------------------------
public ref class TopTools_Array2OfShape sealed : public BaseClass<::TopTools_Array2OfShape>
{

#ifdef Include_TopTools_Array2OfShape_h
public:
	Include_TopTools_Array2OfShape_h
#endif

public:
	TopTools_Array2OfShape(::TopTools_Array2OfShape* nativeInstance)
		: BaseClass<::TopTools_Array2OfShape>( nativeInstance, true )
	{}

	TopTools_Array2OfShape(::TopTools_Array2OfShape& nativeInstance)
		: BaseClass<::TopTools_Array2OfShape>( &nativeInstance, false )
	{}

	property ::TopTools_Array2OfShape* NativeInstance
	{
		::TopTools_Array2OfShape* get()
		{
			return static_cast<::TopTools_Array2OfShape*>(_NativeInstance);
		}
	}

public:
	TopTools_Array2OfShape();
	TopTools_Array2OfShape(int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	TopTools_Array2OfShape(Macad::Occt::TopTools_Array2OfShape^ theOther);
	TopTools_Array2OfShape(Macad::Occt::TopoDS_Shape^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper);
	void Init(Macad::Occt::TopoDS_Shape^ theValue);
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
	Macad::Occt::TopTools_Array2OfShape^ Assign(Macad::Occt::TopTools_Array2OfShape^ theOther);
	Macad::Occt::TopTools_Array2OfShape^ Move(Macad::Occt::TopTools_Array2OfShape^ theOther);
	Macad::Occt::TopoDS_Shape^ Value(int theRow, int theCol);
	Macad::Occt::TopoDS_Shape^ ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, Macad::Occt::TopoDS_Shape^ theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TopTools_Array2OfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfIntegerListOfShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfIntegerListOfShape sealed : public BaseClass<::TopTools_DataMapOfIntegerListOfShape>
{

#ifdef Include_TopTools_DataMapOfIntegerListOfShape_h
public:
	Include_TopTools_DataMapOfIntegerListOfShape_h
#endif

public:
	TopTools_DataMapOfIntegerListOfShape(::TopTools_DataMapOfIntegerListOfShape* nativeInstance)
		: BaseClass<::TopTools_DataMapOfIntegerListOfShape>( nativeInstance, true )
	{}

	TopTools_DataMapOfIntegerListOfShape(::TopTools_DataMapOfIntegerListOfShape& nativeInstance)
		: BaseClass<::TopTools_DataMapOfIntegerListOfShape>( &nativeInstance, false )
	{}

	property ::TopTools_DataMapOfIntegerListOfShape* NativeInstance
	{
		::TopTools_DataMapOfIntegerListOfShape* get()
		{
			return static_cast<::TopTools_DataMapOfIntegerListOfShape*>(_NativeInstance);
		}
	}

public:
	TopTools_DataMapOfIntegerListOfShape();
	TopTools_DataMapOfIntegerListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_DataMapOfIntegerListOfShape(int theNbBuckets);
	TopTools_DataMapOfIntegerListOfShape(Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ theOther);
	void Exchange(Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ theOther);
	Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ Assign(Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ theOther);
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> Bound(int theKey, NCollection_List<TopoDS_Shape> theItem, ) */
	bool IsBound(int theKey);
	bool UnBind(int theKey);
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> Seek(int theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> Find(int theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(int theKey, NCollection_List<TopoDS_Shape> theValue, ) */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> ChangeSeek(int theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> ChangeFind(int theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_DataMapOfIntegerListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfIntegerShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfIntegerShape sealed : public BaseClass<::TopTools_DataMapOfIntegerShape>
{

#ifdef Include_TopTools_DataMapOfIntegerShape_h
public:
	Include_TopTools_DataMapOfIntegerShape_h
#endif

public:
	TopTools_DataMapOfIntegerShape(::TopTools_DataMapOfIntegerShape* nativeInstance)
		: BaseClass<::TopTools_DataMapOfIntegerShape>( nativeInstance, true )
	{}

	TopTools_DataMapOfIntegerShape(::TopTools_DataMapOfIntegerShape& nativeInstance)
		: BaseClass<::TopTools_DataMapOfIntegerShape>( &nativeInstance, false )
	{}

	property ::TopTools_DataMapOfIntegerShape* NativeInstance
	{
		::TopTools_DataMapOfIntegerShape* get()
		{
			return static_cast<::TopTools_DataMapOfIntegerShape*>(_NativeInstance);
		}
	}

public:
	TopTools_DataMapOfIntegerShape();
	TopTools_DataMapOfIntegerShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_DataMapOfIntegerShape(int theNbBuckets);
	TopTools_DataMapOfIntegerShape(Macad::Occt::TopTools_DataMapOfIntegerShape^ theOther);
	void Exchange(Macad::Occt::TopTools_DataMapOfIntegerShape^ theOther);
	Macad::Occt::TopTools_DataMapOfIntegerShape^ Assign(Macad::Occt::TopTools_DataMapOfIntegerShape^ theOther);
	Macad::Occt::TopoDS_Shape^ Bound(int theKey, Macad::Occt::TopoDS_Shape^ theItem);
	bool IsBound(int theKey);
	bool UnBind(int theKey);
	Macad::Occt::TopoDS_Shape^ Seek(int theKey);
	Macad::Occt::TopoDS_Shape^ Find(int theKey);
	bool Find(int theKey, Macad::Occt::TopoDS_Shape^ theValue);
	Macad::Occt::TopoDS_Shape^ ChangeSeek(int theKey);
	Macad::Occt::TopoDS_Shape^ ChangeFind(int theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_DataMapOfIntegerShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfOrientedShapeInteger
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfOrientedShapeInteger sealed : public BaseClass<::TopTools_DataMapOfOrientedShapeInteger>
{

#ifdef Include_TopTools_DataMapOfOrientedShapeInteger_h
public:
	Include_TopTools_DataMapOfOrientedShapeInteger_h
#endif

public:
	TopTools_DataMapOfOrientedShapeInteger(::TopTools_DataMapOfOrientedShapeInteger* nativeInstance)
		: BaseClass<::TopTools_DataMapOfOrientedShapeInteger>( nativeInstance, true )
	{}

	TopTools_DataMapOfOrientedShapeInteger(::TopTools_DataMapOfOrientedShapeInteger& nativeInstance)
		: BaseClass<::TopTools_DataMapOfOrientedShapeInteger>( &nativeInstance, false )
	{}

	property ::TopTools_DataMapOfOrientedShapeInteger* NativeInstance
	{
		::TopTools_DataMapOfOrientedShapeInteger* get()
		{
			return static_cast<::TopTools_DataMapOfOrientedShapeInteger*>(_NativeInstance);
		}
	}

public:
	TopTools_DataMapOfOrientedShapeInteger();
	TopTools_DataMapOfOrientedShapeInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_DataMapOfOrientedShapeInteger(int theNbBuckets);
	TopTools_DataMapOfOrientedShapeInteger(Macad::Occt::TopTools_DataMapOfOrientedShapeInteger^ theOther);
	void Exchange(Macad::Occt::TopTools_DataMapOfOrientedShapeInteger^ theOther);
	Macad::Occt::TopTools_DataMapOfOrientedShapeInteger^ Assign(Macad::Occt::TopTools_DataMapOfOrientedShapeInteger^ theOther);
	int Bound(Macad::Occt::TopoDS_Shape^ theKey, int theItem);
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	int Seek(Macad::Occt::TopoDS_Shape^ theKey);
	int Find(Macad::Occt::TopoDS_Shape^ theKey);
	bool Find(Macad::Occt::TopoDS_Shape^ theKey, int% theValue);
	int ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
	int ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_DataMapOfOrientedShapeInteger

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfOrientedShapeShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfOrientedShapeShape sealed : public BaseClass<::TopTools_DataMapOfOrientedShapeShape>
{

#ifdef Include_TopTools_DataMapOfOrientedShapeShape_h
public:
	Include_TopTools_DataMapOfOrientedShapeShape_h
#endif

public:
	TopTools_DataMapOfOrientedShapeShape(::TopTools_DataMapOfOrientedShapeShape* nativeInstance)
		: BaseClass<::TopTools_DataMapOfOrientedShapeShape>( nativeInstance, true )
	{}

	TopTools_DataMapOfOrientedShapeShape(::TopTools_DataMapOfOrientedShapeShape& nativeInstance)
		: BaseClass<::TopTools_DataMapOfOrientedShapeShape>( &nativeInstance, false )
	{}

	property ::TopTools_DataMapOfOrientedShapeShape* NativeInstance
	{
		::TopTools_DataMapOfOrientedShapeShape* get()
		{
			return static_cast<::TopTools_DataMapOfOrientedShapeShape*>(_NativeInstance);
		}
	}

public:
	TopTools_DataMapOfOrientedShapeShape();
	TopTools_DataMapOfOrientedShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_DataMapOfOrientedShapeShape(int theNbBuckets);
	TopTools_DataMapOfOrientedShapeShape(Macad::Occt::TopTools_DataMapOfOrientedShapeShape^ theOther);
	void Exchange(Macad::Occt::TopTools_DataMapOfOrientedShapeShape^ theOther);
	Macad::Occt::TopTools_DataMapOfOrientedShapeShape^ Assign(Macad::Occt::TopTools_DataMapOfOrientedShapeShape^ theOther);
	Macad::Occt::TopoDS_Shape^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theItem);
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::TopoDS_Shape^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::TopoDS_Shape^ Find(Macad::Occt::TopoDS_Shape^ theKey);
	bool Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theValue);
	Macad::Occt::TopoDS_Shape^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::TopoDS_Shape^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_DataMapOfOrientedShapeShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeInteger
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeInteger sealed : public BaseClass<::TopTools_DataMapOfShapeInteger>
{

#ifdef Include_TopTools_DataMapOfShapeInteger_h
public:
	Include_TopTools_DataMapOfShapeInteger_h
#endif

public:
	TopTools_DataMapOfShapeInteger(::TopTools_DataMapOfShapeInteger* nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeInteger>( nativeInstance, true )
	{}

	TopTools_DataMapOfShapeInteger(::TopTools_DataMapOfShapeInteger& nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeInteger>( &nativeInstance, false )
	{}

	property ::TopTools_DataMapOfShapeInteger* NativeInstance
	{
		::TopTools_DataMapOfShapeInteger* get()
		{
			return static_cast<::TopTools_DataMapOfShapeInteger*>(_NativeInstance);
		}
	}

public:
	TopTools_DataMapOfShapeInteger();
	TopTools_DataMapOfShapeInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_DataMapOfShapeInteger(int theNbBuckets);
	TopTools_DataMapOfShapeInteger(Macad::Occt::TopTools_DataMapOfShapeInteger^ theOther);
	void Exchange(Macad::Occt::TopTools_DataMapOfShapeInteger^ theOther);
	Macad::Occt::TopTools_DataMapOfShapeInteger^ Assign(Macad::Occt::TopTools_DataMapOfShapeInteger^ theOther);
	int Bound(Macad::Occt::TopoDS_Shape^ theKey, int theItem);
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	int Seek(Macad::Occt::TopoDS_Shape^ theKey);
	int Find(Macad::Occt::TopoDS_Shape^ theKey);
	bool Find(Macad::Occt::TopoDS_Shape^ theKey, int% theValue);
	int ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
	int ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_DataMapOfShapeInteger

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeListOfInteger
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeListOfInteger sealed : public BaseClass<::TopTools_DataMapOfShapeListOfInteger>
{

#ifdef Include_TopTools_DataMapOfShapeListOfInteger_h
public:
	Include_TopTools_DataMapOfShapeListOfInteger_h
#endif

public:
	TopTools_DataMapOfShapeListOfInteger(::TopTools_DataMapOfShapeListOfInteger* nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeListOfInteger>( nativeInstance, true )
	{}

	TopTools_DataMapOfShapeListOfInteger(::TopTools_DataMapOfShapeListOfInteger& nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeListOfInteger>( &nativeInstance, false )
	{}

	property ::TopTools_DataMapOfShapeListOfInteger* NativeInstance
	{
		::TopTools_DataMapOfShapeListOfInteger* get()
		{
			return static_cast<::TopTools_DataMapOfShapeListOfInteger*>(_NativeInstance);
		}
	}

public:
	TopTools_DataMapOfShapeListOfInteger();
	TopTools_DataMapOfShapeListOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_DataMapOfShapeListOfInteger(int theNbBuckets);
	TopTools_DataMapOfShapeListOfInteger(Macad::Occt::TopTools_DataMapOfShapeListOfInteger^ theOther);
	void Exchange(Macad::Occt::TopTools_DataMapOfShapeListOfInteger^ theOther);
	Macad::Occt::TopTools_DataMapOfShapeListOfInteger^ Assign(Macad::Occt::TopTools_DataMapOfShapeListOfInteger^ theOther);
	/* Method skipped due to unknown mapping: NCollection_List<int> Bound(TopoDS_Shape theKey, NCollection_List<int> theItem, ) */
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	/* Method skipped due to unknown mapping: NCollection_List<int> Seek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<int> Find(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(TopoDS_Shape theKey, NCollection_List<int> theValue, ) */
	/* Method skipped due to unknown mapping: NCollection_List<int> ChangeSeek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<int> ChangeFind(TopoDS_Shape theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_DataMapOfShapeListOfInteger

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeListOfShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeListOfShape sealed : public BaseClass<::TopTools_DataMapOfShapeListOfShape>
{

#ifdef Include_TopTools_DataMapOfShapeListOfShape_h
public:
	Include_TopTools_DataMapOfShapeListOfShape_h
#endif

public:
	TopTools_DataMapOfShapeListOfShape(::TopTools_DataMapOfShapeListOfShape* nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeListOfShape>( nativeInstance, true )
	{}

	TopTools_DataMapOfShapeListOfShape(::TopTools_DataMapOfShapeListOfShape& nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeListOfShape>( &nativeInstance, false )
	{}

	property ::TopTools_DataMapOfShapeListOfShape* NativeInstance
	{
		::TopTools_DataMapOfShapeListOfShape* get()
		{
			return static_cast<::TopTools_DataMapOfShapeListOfShape*>(_NativeInstance);
		}
	}

public:
	TopTools_DataMapOfShapeListOfShape();
	TopTools_DataMapOfShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_DataMapOfShapeListOfShape(int theNbBuckets);
	TopTools_DataMapOfShapeListOfShape(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theOther);
	void Exchange(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theOther);
	Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Assign(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theOther);
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> Bound(TopoDS_Shape theKey, NCollection_List<TopoDS_Shape> theItem, ) */
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> Seek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> Find(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(TopoDS_Shape theKey, NCollection_List<TopoDS_Shape> theValue, ) */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> ChangeSeek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> ChangeFind(TopoDS_Shape theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_DataMapOfShapeListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeReal
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeReal sealed : public BaseClass<::TopTools_DataMapOfShapeReal>
{

#ifdef Include_TopTools_DataMapOfShapeReal_h
public:
	Include_TopTools_DataMapOfShapeReal_h
#endif

public:
	TopTools_DataMapOfShapeReal(::TopTools_DataMapOfShapeReal* nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeReal>( nativeInstance, true )
	{}

	TopTools_DataMapOfShapeReal(::TopTools_DataMapOfShapeReal& nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeReal>( &nativeInstance, false )
	{}

	property ::TopTools_DataMapOfShapeReal* NativeInstance
	{
		::TopTools_DataMapOfShapeReal* get()
		{
			return static_cast<::TopTools_DataMapOfShapeReal*>(_NativeInstance);
		}
	}

public:
	TopTools_DataMapOfShapeReal();
	TopTools_DataMapOfShapeReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_DataMapOfShapeReal(int theNbBuckets);
	TopTools_DataMapOfShapeReal(Macad::Occt::TopTools_DataMapOfShapeReal^ theOther);
	void Exchange(Macad::Occt::TopTools_DataMapOfShapeReal^ theOther);
	Macad::Occt::TopTools_DataMapOfShapeReal^ Assign(Macad::Occt::TopTools_DataMapOfShapeReal^ theOther);
	double Bound(Macad::Occt::TopoDS_Shape^ theKey, double theItem);
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	double Seek(Macad::Occt::TopoDS_Shape^ theKey);
	double Find(Macad::Occt::TopoDS_Shape^ theKey);
	bool Find(Macad::Occt::TopoDS_Shape^ theKey, double% theValue);
	double ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
	double ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_DataMapOfShapeReal

//---------------------------------------------------------------------
//  Class  TopTools_SequenceOfShape
//---------------------------------------------------------------------
public ref class TopTools_SequenceOfShape sealed : public BaseClass<::TopTools_SequenceOfShape>
{

#ifdef Include_TopTools_SequenceOfShape_h
public:
	Include_TopTools_SequenceOfShape_h
#endif

public:
	TopTools_SequenceOfShape(::TopTools_SequenceOfShape* nativeInstance)
		: BaseClass<::TopTools_SequenceOfShape>( nativeInstance, true )
	{}

	TopTools_SequenceOfShape(::TopTools_SequenceOfShape& nativeInstance)
		: BaseClass<::TopTools_SequenceOfShape>( &nativeInstance, false )
	{}

	property ::TopTools_SequenceOfShape* NativeInstance
	{
		::TopTools_SequenceOfShape* get()
		{
			return static_cast<::TopTools_SequenceOfShape*>(_NativeInstance);
		}
	}

public:
	TopTools_SequenceOfShape();
	TopTools_SequenceOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_SequenceOfShape(Macad::Occt::TopTools_SequenceOfShape^ theOther);
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
	Macad::Occt::TopTools_SequenceOfShape^ Assign(Macad::Occt::TopTools_SequenceOfShape^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::TopoDS_Shape^ theItem);
	void Append(Macad::Occt::TopTools_SequenceOfShape^ theSeq);
	void Prepend(Macad::Occt::TopoDS_Shape^ theItem);
	void Prepend(Macad::Occt::TopTools_SequenceOfShape^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::TopTools_SequenceOfShape^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, TopoDS_Shape theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::TopTools_SequenceOfShape^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
	void Split(int theIndex, Macad::Occt::TopTools_SequenceOfShape^ theSeq);
	Macad::Occt::TopoDS_Shape^ First();
	Macad::Occt::TopoDS_Shape^ ChangeFirst();
	Macad::Occt::TopoDS_Shape^ Last();
	Macad::Occt::TopoDS_Shape^ ChangeLast();
	Macad::Occt::TopoDS_Shape^ Value(int theIndex);
	Macad::Occt::TopoDS_Shape^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
}; // class TopTools_SequenceOfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeSequenceOfShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeSequenceOfShape sealed : public BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>
{

#ifdef Include_TopTools_DataMapOfShapeSequenceOfShape_h
public:
	Include_TopTools_DataMapOfShapeSequenceOfShape_h
#endif

public:
	TopTools_DataMapOfShapeSequenceOfShape(::TopTools_DataMapOfShapeSequenceOfShape* nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>( nativeInstance, true )
	{}

	TopTools_DataMapOfShapeSequenceOfShape(::TopTools_DataMapOfShapeSequenceOfShape& nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>( &nativeInstance, false )
	{}

	property ::TopTools_DataMapOfShapeSequenceOfShape* NativeInstance
	{
		::TopTools_DataMapOfShapeSequenceOfShape* get()
		{
			return static_cast<::TopTools_DataMapOfShapeSequenceOfShape*>(_NativeInstance);
		}
	}

public:
	TopTools_DataMapOfShapeSequenceOfShape();
	TopTools_DataMapOfShapeSequenceOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_DataMapOfShapeSequenceOfShape(int theNbBuckets);
	TopTools_DataMapOfShapeSequenceOfShape(Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape^ theOther);
	void Exchange(Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape^ theOther);
	Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape^ Assign(Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape^ theOther);
	/* Method skipped due to unknown mapping: NCollection_Sequence<TopoDS_Shape> Bound(TopoDS_Shape theKey, NCollection_Sequence<TopoDS_Shape> theItem, ) */
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	/* Method skipped due to unknown mapping: NCollection_Sequence<TopoDS_Shape> Seek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_Sequence<TopoDS_Shape> Find(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean Find(TopoDS_Shape theKey, NCollection_Sequence<TopoDS_Shape> theValue, ) */
	/* Method skipped due to unknown mapping: NCollection_Sequence<TopoDS_Shape> ChangeSeek(TopoDS_Shape theKey, ) */
	/* Method skipped due to unknown mapping: NCollection_Sequence<TopoDS_Shape> ChangeFind(TopoDS_Shape theKey, ) */
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_DataMapOfShapeSequenceOfShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeShape
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeShape sealed : public BaseClass<::TopTools_DataMapOfShapeShape>
{

#ifdef Include_TopTools_DataMapOfShapeShape_h
public:
	Include_TopTools_DataMapOfShapeShape_h
#endif

public:
	TopTools_DataMapOfShapeShape(::TopTools_DataMapOfShapeShape* nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeShape>( nativeInstance, true )
	{}

	TopTools_DataMapOfShapeShape(::TopTools_DataMapOfShapeShape& nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeShape>( &nativeInstance, false )
	{}

	property ::TopTools_DataMapOfShapeShape* NativeInstance
	{
		::TopTools_DataMapOfShapeShape* get()
		{
			return static_cast<::TopTools_DataMapOfShapeShape*>(_NativeInstance);
		}
	}

public:
	TopTools_DataMapOfShapeShape();
	TopTools_DataMapOfShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_DataMapOfShapeShape(int theNbBuckets);
	TopTools_DataMapOfShapeShape(Macad::Occt::TopTools_DataMapOfShapeShape^ theOther);
	void Exchange(Macad::Occt::TopTools_DataMapOfShapeShape^ theOther);
	Macad::Occt::TopTools_DataMapOfShapeShape^ Assign(Macad::Occt::TopTools_DataMapOfShapeShape^ theOther);
	Macad::Occt::TopoDS_Shape^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theItem);
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::TopoDS_Shape^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::TopoDS_Shape^ Find(Macad::Occt::TopoDS_Shape^ theKey);
	bool Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theValue);
	Macad::Occt::TopoDS_Shape^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::TopoDS_Shape^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_DataMapOfShapeShape

//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeBox
//---------------------------------------------------------------------
public ref class TopTools_DataMapOfShapeBox sealed : public BaseClass<::TopTools_DataMapOfShapeBox>
{

#ifdef Include_TopTools_DataMapOfShapeBox_h
public:
	Include_TopTools_DataMapOfShapeBox_h
#endif

public:
	TopTools_DataMapOfShapeBox(::TopTools_DataMapOfShapeBox* nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeBox>( nativeInstance, true )
	{}

	TopTools_DataMapOfShapeBox(::TopTools_DataMapOfShapeBox& nativeInstance)
		: BaseClass<::TopTools_DataMapOfShapeBox>( &nativeInstance, false )
	{}

	property ::TopTools_DataMapOfShapeBox* NativeInstance
	{
		::TopTools_DataMapOfShapeBox* get()
		{
			return static_cast<::TopTools_DataMapOfShapeBox*>(_NativeInstance);
		}
	}

public:
	TopTools_DataMapOfShapeBox();
	TopTools_DataMapOfShapeBox(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_DataMapOfShapeBox(int theNbBuckets);
	TopTools_DataMapOfShapeBox(Macad::Occt::TopTools_DataMapOfShapeBox^ theOther);
	void Exchange(Macad::Occt::TopTools_DataMapOfShapeBox^ theOther);
	Macad::Occt::TopTools_DataMapOfShapeBox^ Assign(Macad::Occt::TopTools_DataMapOfShapeBox^ theOther);
	Macad::Occt::Bnd_Box^ Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box^ theItem);
	bool IsBound(Macad::Occt::TopoDS_Shape^ theKey);
	bool UnBind(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::Bnd_Box^ Seek(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::Bnd_Box^ Find(Macad::Occt::TopoDS_Shape^ theKey);
	bool Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box^ theValue);
	Macad::Occt::Bnd_Box^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey);
	Macad::Occt::Bnd_Box^ ChangeFind(Macad::Occt::TopoDS_Shape^ theKey);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_DataMapOfShapeBox

//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeListOfShape
//---------------------------------------------------------------------
public ref class TopTools_IndexedDataMapOfShapeListOfShape sealed : public BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>
{

#ifdef Include_TopTools_IndexedDataMapOfShapeListOfShape_h
public:
	Include_TopTools_IndexedDataMapOfShapeListOfShape_h
#endif

public:
	TopTools_IndexedDataMapOfShapeListOfShape(::TopTools_IndexedDataMapOfShapeListOfShape* nativeInstance)
		: BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>( nativeInstance, true )
	{}

	TopTools_IndexedDataMapOfShapeListOfShape(::TopTools_IndexedDataMapOfShapeListOfShape& nativeInstance)
		: BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>( &nativeInstance, false )
	{}

	property ::TopTools_IndexedDataMapOfShapeListOfShape* NativeInstance
	{
		::TopTools_IndexedDataMapOfShapeListOfShape* get()
		{
			return static_cast<::TopTools_IndexedDataMapOfShapeListOfShape*>(_NativeInstance);
		}
	}

public:
	TopTools_IndexedDataMapOfShapeListOfShape();
	TopTools_IndexedDataMapOfShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_IndexedDataMapOfShapeListOfShape(int theNbBuckets);
	TopTools_IndexedDataMapOfShapeListOfShape(Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ theOther);
	void Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ theOther);
	int Add(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopTools_ListOfShape^ theItem);
	bool Contains(Macad::Occt::TopoDS_Shape^ theKey1);
	void Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopTools_ListOfShape^ theItem);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	void RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopoDS_Shape^ FindKey(int theIndex);
	Macad::Occt::TopTools_ListOfShape^ FindFromIndex(int theIndex);
	Macad::Occt::TopTools_ListOfShape^ ChangeFromIndex(int theIndex);
	int FindIndex(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopTools_ListOfShape^ FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopTools_ListOfShape^ ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopTools_ListOfShape^ Seek(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopTools_ListOfShape^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1);
	bool FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopTools_ListOfShape^ theValue);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_IndexedDataMapOfShapeListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeReal
//---------------------------------------------------------------------
public ref class TopTools_IndexedDataMapOfShapeReal sealed : public BaseClass<::TopTools_IndexedDataMapOfShapeReal>
{

#ifdef Include_TopTools_IndexedDataMapOfShapeReal_h
public:
	Include_TopTools_IndexedDataMapOfShapeReal_h
#endif

public:
	TopTools_IndexedDataMapOfShapeReal(::TopTools_IndexedDataMapOfShapeReal* nativeInstance)
		: BaseClass<::TopTools_IndexedDataMapOfShapeReal>( nativeInstance, true )
	{}

	TopTools_IndexedDataMapOfShapeReal(::TopTools_IndexedDataMapOfShapeReal& nativeInstance)
		: BaseClass<::TopTools_IndexedDataMapOfShapeReal>( &nativeInstance, false )
	{}

	property ::TopTools_IndexedDataMapOfShapeReal* NativeInstance
	{
		::TopTools_IndexedDataMapOfShapeReal* get()
		{
			return static_cast<::TopTools_IndexedDataMapOfShapeReal*>(_NativeInstance);
		}
	}

public:
	TopTools_IndexedDataMapOfShapeReal();
	TopTools_IndexedDataMapOfShapeReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_IndexedDataMapOfShapeReal(int theNbBuckets);
	TopTools_IndexedDataMapOfShapeReal(Macad::Occt::TopTools_IndexedDataMapOfShapeReal^ theOther);
	void Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeReal^ theOther);
	int Add(Macad::Occt::TopoDS_Shape^ theKey1, double theItem);
	bool Contains(Macad::Occt::TopoDS_Shape^ theKey1);
	void Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, double theItem);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	void RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopoDS_Shape^ FindKey(int theIndex);
	double FindFromIndex(int theIndex);
	double ChangeFromIndex(int theIndex);
	int FindIndex(Macad::Occt::TopoDS_Shape^ theKey1);
	double FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
	double ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
	double Seek(Macad::Occt::TopoDS_Shape^ theKey1);
	double ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1);
	bool FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1, double% theValue);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_IndexedDataMapOfShapeReal

//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeShape
//---------------------------------------------------------------------
public ref class TopTools_IndexedDataMapOfShapeShape sealed : public BaseClass<::TopTools_IndexedDataMapOfShapeShape>
{

#ifdef Include_TopTools_IndexedDataMapOfShapeShape_h
public:
	Include_TopTools_IndexedDataMapOfShapeShape_h
#endif

public:
	TopTools_IndexedDataMapOfShapeShape(::TopTools_IndexedDataMapOfShapeShape* nativeInstance)
		: BaseClass<::TopTools_IndexedDataMapOfShapeShape>( nativeInstance, true )
	{}

	TopTools_IndexedDataMapOfShapeShape(::TopTools_IndexedDataMapOfShapeShape& nativeInstance)
		: BaseClass<::TopTools_IndexedDataMapOfShapeShape>( &nativeInstance, false )
	{}

	property ::TopTools_IndexedDataMapOfShapeShape* NativeInstance
	{
		::TopTools_IndexedDataMapOfShapeShape* get()
		{
			return static_cast<::TopTools_IndexedDataMapOfShapeShape*>(_NativeInstance);
		}
	}

public:
	TopTools_IndexedDataMapOfShapeShape();
	TopTools_IndexedDataMapOfShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_IndexedDataMapOfShapeShape(int theNbBuckets);
	TopTools_IndexedDataMapOfShapeShape(Macad::Occt::TopTools_IndexedDataMapOfShapeShape^ theOther);
	void Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeShape^ theOther);
	int Add(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_Shape^ theItem);
	bool Contains(Macad::Occt::TopoDS_Shape^ theKey1);
	void Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_Shape^ theItem);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	void RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopoDS_Shape^ FindKey(int theIndex);
	Macad::Occt::TopoDS_Shape^ FindFromIndex(int theIndex);
	Macad::Occt::TopoDS_Shape^ ChangeFromIndex(int theIndex);
	int FindIndex(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopoDS_Shape^ FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopoDS_Shape^ ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopoDS_Shape^ Seek(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopoDS_Shape^ ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1);
	bool FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_Shape^ theValue);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_IndexedDataMapOfShapeShape

//---------------------------------------------------------------------
//  Class  TopTools_IndexedMapOfOrientedShape
//---------------------------------------------------------------------
public ref class TopTools_IndexedMapOfOrientedShape sealed : public BaseClass<::TopTools_IndexedMapOfOrientedShape>
{

#ifdef Include_TopTools_IndexedMapOfOrientedShape_h
public:
	Include_TopTools_IndexedMapOfOrientedShape_h
#endif

public:
	TopTools_IndexedMapOfOrientedShape(::TopTools_IndexedMapOfOrientedShape* nativeInstance)
		: BaseClass<::TopTools_IndexedMapOfOrientedShape>( nativeInstance, true )
	{}

	TopTools_IndexedMapOfOrientedShape(::TopTools_IndexedMapOfOrientedShape& nativeInstance)
		: BaseClass<::TopTools_IndexedMapOfOrientedShape>( &nativeInstance, false )
	{}

	property ::TopTools_IndexedMapOfOrientedShape* NativeInstance
	{
		::TopTools_IndexedMapOfOrientedShape* get()
		{
			return static_cast<::TopTools_IndexedMapOfOrientedShape*>(_NativeInstance);
		}
	}

public:
	TopTools_IndexedMapOfOrientedShape();
	TopTools_IndexedMapOfOrientedShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_IndexedMapOfOrientedShape(int theNbBuckets);
	TopTools_IndexedMapOfOrientedShape(Macad::Occt::TopTools_IndexedMapOfOrientedShape^ theOther);
	void Exchange(Macad::Occt::TopTools_IndexedMapOfOrientedShape^ theOther);
	int Add(Macad::Occt::TopoDS_Shape^ theKey1);
	bool Contains(Macad::Occt::TopoDS_Shape^ theKey1);
	void Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	bool RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopoDS_Shape^ FindKey(int theIndex);
	int FindIndex(Macad::Occt::TopoDS_Shape^ theKey1);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_IndexedMapOfOrientedShape

//---------------------------------------------------------------------
//  Class  TopTools_IndexedMapOfShape
//---------------------------------------------------------------------
public ref class TopTools_IndexedMapOfShape sealed : public BaseClass<::TopTools_IndexedMapOfShape>
{

#ifdef Include_TopTools_IndexedMapOfShape_h
public:
	Include_TopTools_IndexedMapOfShape_h
#endif

public:
	TopTools_IndexedMapOfShape(::TopTools_IndexedMapOfShape* nativeInstance)
		: BaseClass<::TopTools_IndexedMapOfShape>( nativeInstance, true )
	{}

	TopTools_IndexedMapOfShape(::TopTools_IndexedMapOfShape& nativeInstance)
		: BaseClass<::TopTools_IndexedMapOfShape>( &nativeInstance, false )
	{}

	property ::TopTools_IndexedMapOfShape* NativeInstance
	{
		::TopTools_IndexedMapOfShape* get()
		{
			return static_cast<::TopTools_IndexedMapOfShape*>(_NativeInstance);
		}
	}

public:
	TopTools_IndexedMapOfShape();
	TopTools_IndexedMapOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_IndexedMapOfShape(int theNbBuckets);
	TopTools_IndexedMapOfShape(Macad::Occt::TopTools_IndexedMapOfShape^ theOther);
	void Exchange(Macad::Occt::TopTools_IndexedMapOfShape^ theOther);
	int Add(Macad::Occt::TopoDS_Shape^ theKey1);
	bool Contains(Macad::Occt::TopoDS_Shape^ theKey1);
	void Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	bool RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1);
	Macad::Occt::TopoDS_Shape^ FindKey(int theIndex);
	int FindIndex(Macad::Occt::TopoDS_Shape^ theKey1);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopTools_IndexedMapOfShape

//---------------------------------------------------------------------
//  Class  TopTools_ListOfListOfShape
//---------------------------------------------------------------------
public ref class TopTools_ListOfListOfShape sealed : public BaseClass<::TopTools_ListOfListOfShape>
{

#ifdef Include_TopTools_ListOfListOfShape_h
public:
	Include_TopTools_ListOfListOfShape_h
#endif

public:
	TopTools_ListOfListOfShape(::TopTools_ListOfListOfShape* nativeInstance)
		: BaseClass<::TopTools_ListOfListOfShape>( nativeInstance, true )
	{}

	TopTools_ListOfListOfShape(::TopTools_ListOfListOfShape& nativeInstance)
		: BaseClass<::TopTools_ListOfListOfShape>( &nativeInstance, false )
	{}

	property ::TopTools_ListOfListOfShape* NativeInstance
	{
		::TopTools_ListOfListOfShape* get()
		{
			return static_cast<::TopTools_ListOfListOfShape*>(_NativeInstance);
		}
	}

public:
	TopTools_ListOfListOfShape();
	TopTools_ListOfListOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_ListOfListOfShape(Macad::Occt::TopTools_ListOfListOfShape^ theOther);
	int Size();
	Macad::Occt::TopTools_ListOfListOfShape^ Assign(Macad::Occt::TopTools_ListOfListOfShape^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> First() */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> Last() */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> Append(NCollection_List<TopoDS_Shape> theItem, ) */
	/* Method skipped due to unknown mapping: void Append(NCollection_List<TopoDS_Shape> theItem, Iterator theIter, ) */
	void Append(Macad::Occt::TopTools_ListOfListOfShape^ theOther);
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> Prepend(NCollection_List<TopoDS_Shape> theItem, ) */
	void Prepend(Macad::Occt::TopTools_ListOfListOfShape^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> InsertBefore(NCollection_List<TopoDS_Shape> theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(TopTools_ListOfListOfShape theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> InsertAfter(NCollection_List<TopoDS_Shape> theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(TopTools_ListOfListOfShape theOther, Iterator theIter, ) */
	void Reverse();
}; // class TopTools_ListOfListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_MapOfOrientedShape
//---------------------------------------------------------------------
public ref class TopTools_MapOfOrientedShape sealed : public BaseClass<::TopTools_MapOfOrientedShape>
{

#ifdef Include_TopTools_MapOfOrientedShape_h
public:
	Include_TopTools_MapOfOrientedShape_h
#endif

public:
	TopTools_MapOfOrientedShape(::TopTools_MapOfOrientedShape* nativeInstance)
		: BaseClass<::TopTools_MapOfOrientedShape>( nativeInstance, true )
	{}

	TopTools_MapOfOrientedShape(::TopTools_MapOfOrientedShape& nativeInstance)
		: BaseClass<::TopTools_MapOfOrientedShape>( &nativeInstance, false )
	{}

	property ::TopTools_MapOfOrientedShape* NativeInstance
	{
		::TopTools_MapOfOrientedShape* get()
		{
			return static_cast<::TopTools_MapOfOrientedShape*>(_NativeInstance);
		}
	}

public:
	TopTools_MapOfOrientedShape();
	TopTools_MapOfOrientedShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_MapOfOrientedShape(int theNbBuckets);
	TopTools_MapOfOrientedShape(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
	void Exchange(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
	Macad::Occt::TopTools_MapOfOrientedShape^ Assign(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
	Macad::Occt::TopoDS_Shape^ Added(Macad::Occt::TopoDS_Shape^ K);
	bool Contains(Macad::Occt::TopoDS_Shape^ K);
	bool Remove(Macad::Occt::TopoDS_Shape^ K);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
	bool IsEqual(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
	bool Contains(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
	void Union(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight);
	bool Unite(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
	bool HasIntersection(Macad::Occt::TopTools_MapOfOrientedShape^ theMap);
	void Intersection(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight);
	bool Intersect(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
	void Subtraction(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight);
	bool Subtract(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
	void Difference(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight);
	bool Differ(Macad::Occt::TopTools_MapOfOrientedShape^ theOther);
}; // class TopTools_MapOfOrientedShape

//---------------------------------------------------------------------
//  Class  TopTools_MapOfShape
//---------------------------------------------------------------------
public ref class TopTools_MapOfShape sealed : public BaseClass<::TopTools_MapOfShape>
{

#ifdef Include_TopTools_MapOfShape_h
public:
	Include_TopTools_MapOfShape_h
#endif

public:
	TopTools_MapOfShape(::TopTools_MapOfShape* nativeInstance)
		: BaseClass<::TopTools_MapOfShape>( nativeInstance, true )
	{}

	TopTools_MapOfShape(::TopTools_MapOfShape& nativeInstance)
		: BaseClass<::TopTools_MapOfShape>( &nativeInstance, false )
	{}

	property ::TopTools_MapOfShape* NativeInstance
	{
		::TopTools_MapOfShape* get()
		{
			return static_cast<::TopTools_MapOfShape*>(_NativeInstance);
		}
	}

public:
	TopTools_MapOfShape();
	TopTools_MapOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopTools_MapOfShape(int theNbBuckets);
	TopTools_MapOfShape(Macad::Occt::TopTools_MapOfShape^ theOther);
	void Exchange(Macad::Occt::TopTools_MapOfShape^ theOther);
	Macad::Occt::TopTools_MapOfShape^ Assign(Macad::Occt::TopTools_MapOfShape^ theOther);
	Macad::Occt::TopoDS_Shape^ Added(Macad::Occt::TopoDS_Shape^ K);
	bool Contains(Macad::Occt::TopoDS_Shape^ K);
	bool Remove(Macad::Occt::TopoDS_Shape^ K);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
	bool IsEqual(Macad::Occt::TopTools_MapOfShape^ theOther);
	bool Contains(Macad::Occt::TopTools_MapOfShape^ theOther);
	void Union(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight);
	bool Unite(Macad::Occt::TopTools_MapOfShape^ theOther);
	bool HasIntersection(Macad::Occt::TopTools_MapOfShape^ theMap);
	void Intersection(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight);
	bool Intersect(Macad::Occt::TopTools_MapOfShape^ theOther);
	void Subtraction(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight);
	bool Subtract(Macad::Occt::TopTools_MapOfShape^ theOther);
	void Difference(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight);
	bool Differ(Macad::Occt::TopTools_MapOfShape^ theOther);
}; // class TopTools_MapOfShape

//---------------------------------------------------------------------
//  Class  TopTools_ShapeMapHasher
//---------------------------------------------------------------------
public ref class TopTools_ShapeMapHasher sealed : public BaseClass<::TopTools_ShapeMapHasher>
{

#ifdef Include_TopTools_ShapeMapHasher_h
public:
	Include_TopTools_ShapeMapHasher_h
#endif

public:
	TopTools_ShapeMapHasher(::TopTools_ShapeMapHasher* nativeInstance)
		: BaseClass<::TopTools_ShapeMapHasher>( nativeInstance, true )
	{}

	TopTools_ShapeMapHasher(::TopTools_ShapeMapHasher& nativeInstance)
		: BaseClass<::TopTools_ShapeMapHasher>( &nativeInstance, false )
	{}

	property ::TopTools_ShapeMapHasher* NativeInstance
	{
		::TopTools_ShapeMapHasher* get()
		{
			return static_cast<::TopTools_ShapeMapHasher*>(_NativeInstance);
		}
	}

public:
	TopTools_ShapeMapHasher();
	TopTools_ShapeMapHasher(Macad::Occt::TopTools_ShapeMapHasher^ parameter1);
	static int HashCode(Macad::Occt::TopoDS_Shape^ theShape, int theUpperBound);
	static bool IsEqual(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
}; // class TopTools_ShapeMapHasher

//---------------------------------------------------------------------
//  Class  TopTools_OrientedShapeMapHasher
//---------------------------------------------------------------------
public ref class TopTools_OrientedShapeMapHasher sealed : public BaseClass<::TopTools_OrientedShapeMapHasher>
{

#ifdef Include_TopTools_OrientedShapeMapHasher_h
public:
	Include_TopTools_OrientedShapeMapHasher_h
#endif

public:
	TopTools_OrientedShapeMapHasher(::TopTools_OrientedShapeMapHasher* nativeInstance)
		: BaseClass<::TopTools_OrientedShapeMapHasher>( nativeInstance, true )
	{}

	TopTools_OrientedShapeMapHasher(::TopTools_OrientedShapeMapHasher& nativeInstance)
		: BaseClass<::TopTools_OrientedShapeMapHasher>( &nativeInstance, false )
	{}

	property ::TopTools_OrientedShapeMapHasher* NativeInstance
	{
		::TopTools_OrientedShapeMapHasher* get()
		{
			return static_cast<::TopTools_OrientedShapeMapHasher*>(_NativeInstance);
		}
	}

public:
	TopTools_OrientedShapeMapHasher();
	TopTools_OrientedShapeMapHasher(Macad::Occt::TopTools_OrientedShapeMapHasher^ parameter1);
	static int HashCode(Macad::Occt::TopoDS_Shape^ theShape, int theUpperBound);
	static bool IsEqual(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
}; // class TopTools_OrientedShapeMapHasher

//---------------------------------------------------------------------
//  Class  TopTools_LocationSet
//---------------------------------------------------------------------
public ref class TopTools_LocationSet sealed : public BaseClass<::TopTools_LocationSet>
{

#ifdef Include_TopTools_LocationSet_h
public:
	Include_TopTools_LocationSet_h
#endif

public:
	TopTools_LocationSet(::TopTools_LocationSet* nativeInstance)
		: BaseClass<::TopTools_LocationSet>( nativeInstance, true )
	{}

	TopTools_LocationSet(::TopTools_LocationSet& nativeInstance)
		: BaseClass<::TopTools_LocationSet>( &nativeInstance, false )
	{}

	property ::TopTools_LocationSet* NativeInstance
	{
		::TopTools_LocationSet* get()
		{
			return static_cast<::TopTools_LocationSet*>(_NativeInstance);
		}
	}

public:
	TopTools_LocationSet();
	TopTools_LocationSet(Macad::Occt::TopTools_LocationSet^ parameter1);
	void Clear();
	int Add(Macad::Occt::TopLoc_Location^ L);
	Macad::Occt::TopLoc_Location^ Location(int I);
	int Index(Macad::Occt::TopLoc_Location^ L);
	/* Method skipped due to unknown mapping: void Dump(ostream OS, ) */
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theProgress, ) */
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theProgress, ) */
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theProgress, ) */
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theProgress, ) */
}; // class TopTools_LocationSet

//---------------------------------------------------------------------
//  Class  TopTools_ShapeSet
//---------------------------------------------------------------------
public ref class TopTools_ShapeSet : public BaseClass<::TopTools_ShapeSet>
{

#ifdef Include_TopTools_ShapeSet_h
public:
	Include_TopTools_ShapeSet_h
#endif

protected:
	TopTools_ShapeSet(InitMode init)
		: BaseClass<::TopTools_ShapeSet>( init )
	{}

public:
	TopTools_ShapeSet(::TopTools_ShapeSet* nativeInstance)
		: BaseClass<::TopTools_ShapeSet>( nativeInstance, true )
	{}

	TopTools_ShapeSet(::TopTools_ShapeSet& nativeInstance)
		: BaseClass<::TopTools_ShapeSet>( &nativeInstance, false )
	{}

	property ::TopTools_ShapeSet* NativeInstance
	{
		::TopTools_ShapeSet* get()
		{
			return static_cast<::TopTools_ShapeSet*>(_NativeInstance);
		}
	}

public:
	TopTools_ShapeSet();
	TopTools_ShapeSet(Macad::Occt::TopTools_ShapeSet^ parameter1);
	void SetFormatNb(int theFormatNb);
	int FormatNb();
	void Clear();
	int Add(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ Shape(int I);
	int Index(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopTools_LocationSet^ Locations();
	Macad::Occt::TopTools_LocationSet^ ChangeLocations();
	/* Method skipped due to unknown mapping: ostream DumpExtent(ostream OS, ) */
	void DumpExtent(Macad::Occt::TCollection_AsciiString^ S);
	/* Method skipped due to unknown mapping: void Dump(ostream OS, ) */
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theProgress, ) */
	/* Method skipped due to unknown mapping: void Write(ostream OS, Message_ProgressRange theProgress, ) */
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theProgress, ) */
	/* Method skipped due to unknown mapping: void Read(istream IS, Message_ProgressRange theProgress, ) */
	/* Method skipped due to unknown mapping: void Dump(TopoDS_Shape S, ostream OS, ) */
	/* Method skipped due to unknown mapping: void Write(TopoDS_Shape S, ostream OS, ) */
	/* Method skipped due to unknown mapping: void Read(TopoDS_Shape S, istream IS, ) */
	void AddGeometry(Macad::Occt::TopoDS_Shape^ S);
	/* Method skipped due to unknown mapping: void DumpGeometry(ostream OS, ) */
	/* Method skipped due to unknown mapping: void WriteGeometry(ostream OS, Message_ProgressRange theProgress, ) */
	/* Method skipped due to unknown mapping: void WriteGeometry(ostream OS, Message_ProgressRange theProgress, ) */
	/* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theProgress, ) */
	/* Method skipped due to unknown mapping: void ReadGeometry(istream IS, Message_ProgressRange theProgress, ) */
	/* Method skipped due to unknown mapping: void DumpGeometry(TopoDS_Shape S, ostream OS, ) */
	/* Method skipped due to unknown mapping: void WriteGeometry(TopoDS_Shape S, ostream OS, ) */
	/* Method skipped due to unknown mapping: void ReadGeometry(TopAbs_ShapeEnum T, istream IS, TopoDS_Shape S, ) */
	void AddShapes(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2);
	void Check(Macad::Occt::TopAbs_ShapeEnum T, Macad::Occt::TopoDS_Shape^ S);
	int NbShapes();
}; // class TopTools_ShapeSet

//---------------------------------------------------------------------
//  Class  TopTools
//---------------------------------------------------------------------
public ref class TopTools sealed : public BaseClass<::TopTools>
{

#ifdef Include_TopTools_h
public:
	Include_TopTools_h
#endif

public:
	TopTools(::TopTools* nativeInstance)
		: BaseClass<::TopTools>( nativeInstance, true )
	{}

	TopTools(::TopTools& nativeInstance)
		: BaseClass<::TopTools>( &nativeInstance, false )
	{}

	property ::TopTools* NativeInstance
	{
		::TopTools* get()
		{
			return static_cast<::TopTools*>(_NativeInstance);
		}
	}

public:
	TopTools();
	TopTools(Macad::Occt::TopTools^ parameter1);
	/* Method skipped due to unknown mapping: void Dump(TopoDS_Shape Sh, ostream S, ) */
	static void Dummy(int I);
}; // class TopTools

//---------------------------------------------------------------------
//  Class  TopTools_HArray1OfListOfShape
//---------------------------------------------------------------------
public ref class TopTools_HArray1OfListOfShape sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TopTools_HArray1OfListOfShape_h
public:
	Include_TopTools_HArray1OfListOfShape_h
#endif

public:
	TopTools_HArray1OfListOfShape(::TopTools_HArray1OfListOfShape* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TopTools_HArray1OfListOfShape(::TopTools_HArray1OfListOfShape& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TopTools_HArray1OfListOfShape* NativeInstance
	{
		::TopTools_HArray1OfListOfShape* get()
		{
			return static_cast<::TopTools_HArray1OfListOfShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopTools_HArray1OfListOfShape^ CreateDowncasted(::TopTools_HArray1OfListOfShape* instance);

public:
	TopTools_HArray1OfListOfShape();
	TopTools_HArray1OfListOfShape(int theLower, int theUpper);
	/* Method skipped due to unknown mapping: void TopTools_HArray1OfListOfShape(Standard_Integer theLower, Standard_Integer theUpper, value_type theValue, ) */
	TopTools_HArray1OfListOfShape(Macad::Occt::TopTools_Array1OfListOfShape^ theOther);
	TopTools_HArray1OfListOfShape(Macad::Occt::TopTools_HArray1OfListOfShape^ parameter1);
	Macad::Occt::TopTools_Array1OfListOfShape^ Array1();
	Macad::Occt::TopTools_Array1OfListOfShape^ ChangeArray1();
	/* Method skipped due to unknown mapping: void Init(NCollection_List<TopoDS_Shape> theValue, ) */
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<NCollection_List<TopoDS_Shape>> Assign(NCollection_Array1<NCollection_List<TopoDS_Shape>> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<NCollection_List<TopoDS_Shape>> Move(NCollection_Array1<NCollection_List<TopoDS_Shape>> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> First() */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> ChangeFirst() */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> Last() */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> ChangeLast() */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> Value(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: NCollection_List<TopoDS_Shape> ChangeValue(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: void SetValue(Standard_Integer theIndex, NCollection_List<TopoDS_Shape> theItem, ) */
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TopTools_HArray1OfListOfShape

//---------------------------------------------------------------------
//  Class  TopTools_HArray1OfShape
//---------------------------------------------------------------------
public ref class TopTools_HArray1OfShape sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TopTools_HArray1OfShape_h
public:
	Include_TopTools_HArray1OfShape_h
#endif

public:
	TopTools_HArray1OfShape(::TopTools_HArray1OfShape* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TopTools_HArray1OfShape(::TopTools_HArray1OfShape& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TopTools_HArray1OfShape* NativeInstance
	{
		::TopTools_HArray1OfShape* get()
		{
			return static_cast<::TopTools_HArray1OfShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopTools_HArray1OfShape^ CreateDowncasted(::TopTools_HArray1OfShape* instance);

public:
	TopTools_HArray1OfShape();
	TopTools_HArray1OfShape(int theLower, int theUpper);
	TopTools_HArray1OfShape(int theLower, int theUpper, Macad::Occt::TopoDS_Shape^ theValue);
	TopTools_HArray1OfShape(Macad::Occt::TopTools_Array1OfShape^ theOther);
	TopTools_HArray1OfShape(Macad::Occt::TopTools_HArray1OfShape^ parameter1);
	Macad::Occt::TopTools_Array1OfShape^ Array1();
	Macad::Occt::TopTools_Array1OfShape^ ChangeArray1();
	void Init(Macad::Occt::TopoDS_Shape^ theValue);
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	/* Method skipped due to unknown mapping: NCollection_Array1<TopoDS_Shape> Assign(NCollection_Array1<TopoDS_Shape> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array1<TopoDS_Shape> Move(NCollection_Array1<TopoDS_Shape> theOther, ) */
	Macad::Occt::TopoDS_Shape^ First();
	Macad::Occt::TopoDS_Shape^ ChangeFirst();
	Macad::Occt::TopoDS_Shape^ Last();
	Macad::Occt::TopoDS_Shape^ ChangeLast();
	Macad::Occt::TopoDS_Shape^ Value(int theIndex);
	Macad::Occt::TopoDS_Shape^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class TopTools_HArray1OfShape

//---------------------------------------------------------------------
//  Class  TopTools_HArray2OfShape
//---------------------------------------------------------------------
public ref class TopTools_HArray2OfShape sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TopTools_HArray2OfShape_h
public:
	Include_TopTools_HArray2OfShape_h
#endif

public:
	TopTools_HArray2OfShape(::TopTools_HArray2OfShape* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TopTools_HArray2OfShape(::TopTools_HArray2OfShape& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TopTools_HArray2OfShape* NativeInstance
	{
		::TopTools_HArray2OfShape* get()
		{
			return static_cast<::TopTools_HArray2OfShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopTools_HArray2OfShape^ CreateDowncasted(::TopTools_HArray2OfShape* instance);

public:
	TopTools_HArray2OfShape(int theRowLow, int theRowUpp, int theColLow, int theColUpp);
	TopTools_HArray2OfShape(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::TopoDS_Shape^ theValue);
	TopTools_HArray2OfShape(Macad::Occt::TopTools_Array2OfShape^ theOther);
	TopTools_HArray2OfShape(Macad::Occt::TopTools_HArray2OfShape^ parameter1);
	Macad::Occt::TopTools_Array2OfShape^ Array2();
	Macad::Occt::TopTools_Array2OfShape^ ChangeArray2();
	void Init(Macad::Occt::TopoDS_Shape^ theValue);
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
	/* Method skipped due to unknown mapping: NCollection_Array2<TopoDS_Shape> Assign(NCollection_Array2<TopoDS_Shape> theOther, ) */
	/* Method skipped due to unknown mapping: NCollection_Array2<TopoDS_Shape> Move(NCollection_Array2<TopoDS_Shape> theOther, ) */
	Macad::Occt::TopoDS_Shape^ Value(int theRow, int theCol);
	Macad::Occt::TopoDS_Shape^ ChangeValue(int theRow, int theCol);
	void SetValue(int theRow, int theCol, Macad::Occt::TopoDS_Shape^ theItem);
	void Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData);
}; // class TopTools_HArray2OfShape

//---------------------------------------------------------------------
//  Class  TopTools_HSequenceOfShape
//---------------------------------------------------------------------
public ref class TopTools_HSequenceOfShape sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TopTools_HSequenceOfShape_h
public:
	Include_TopTools_HSequenceOfShape_h
#endif

public:
	TopTools_HSequenceOfShape(::TopTools_HSequenceOfShape* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TopTools_HSequenceOfShape(::TopTools_HSequenceOfShape& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TopTools_HSequenceOfShape* NativeInstance
	{
		::TopTools_HSequenceOfShape* get()
		{
			return static_cast<::TopTools_HSequenceOfShape*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopTools_HSequenceOfShape^ CreateDowncasted(::TopTools_HSequenceOfShape* instance);

public:
	TopTools_HSequenceOfShape();
	TopTools_HSequenceOfShape(Macad::Occt::TopTools_SequenceOfShape^ theOther);
	TopTools_HSequenceOfShape(Macad::Occt::TopTools_HSequenceOfShape^ parameter1);
	Macad::Occt::TopTools_SequenceOfShape^ Sequence();
	void Append(Macad::Occt::TopoDS_Shape^ theItem);
	void Append(Macad::Occt::TopTools_SequenceOfShape^ theSequence);
	Macad::Occt::TopTools_SequenceOfShape^ ChangeSequence();
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
	/* Method skipped due to unknown mapping: NCollection_Sequence<TopoDS_Shape> Assign(NCollection_Sequence<TopoDS_Shape> theOther, ) */
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	/* Method skipped due to unknown mapping: void Append(NCollection_Sequence<TopoDS_Shape> theSeq, ) */
	void Prepend(Macad::Occt::TopoDS_Shape^ theItem);
	/* Method skipped due to unknown mapping: void Prepend(NCollection_Sequence<TopoDS_Shape> theSeq, ) */
	void InsertBefore(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
	/* Method skipped due to unknown mapping: void InsertBefore(Standard_Integer theIndex, NCollection_Sequence<TopoDS_Shape> theSeq, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, TopoDS_Shape theItem, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Standard_Integer theIndex, NCollection_Sequence<TopoDS_Shape> theSeq, ) */
	void InsertAfter(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
	/* Method skipped due to unknown mapping: void Split(Standard_Integer theIndex, NCollection_Sequence<TopoDS_Shape> theSeq, ) */
	Macad::Occt::TopoDS_Shape^ First();
	Macad::Occt::TopoDS_Shape^ ChangeFirst();
	Macad::Occt::TopoDS_Shape^ Last();
	Macad::Occt::TopoDS_Shape^ ChangeLast();
	Macad::Occt::TopoDS_Shape^ Value(int theIndex);
	Macad::Occt::TopoDS_Shape^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theItem);
}; // class TopTools_HSequenceOfShape

//---------------------------------------------------------------------
//  Class  TopTools_MutexForShapeProvider
//---------------------------------------------------------------------
public ref class TopTools_MutexForShapeProvider sealed : public BaseClass<::TopTools_MutexForShapeProvider>
{

#ifdef Include_TopTools_MutexForShapeProvider_h
public:
	Include_TopTools_MutexForShapeProvider_h
#endif

public:
	TopTools_MutexForShapeProvider(::TopTools_MutexForShapeProvider* nativeInstance)
		: BaseClass<::TopTools_MutexForShapeProvider>( nativeInstance, true )
	{}

	TopTools_MutexForShapeProvider(::TopTools_MutexForShapeProvider& nativeInstance)
		: BaseClass<::TopTools_MutexForShapeProvider>( &nativeInstance, false )
	{}

	property ::TopTools_MutexForShapeProvider* NativeInstance
	{
		::TopTools_MutexForShapeProvider* get()
		{
			return static_cast<::TopTools_MutexForShapeProvider*>(_NativeInstance);
		}
	}

public:
	TopTools_MutexForShapeProvider();
	void CreateMutexesForSubShapes(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopAbs_ShapeEnum theType);
	void CreateMutexForShape(Macad::Occt::TopoDS_Shape^ theShape);
	/* Method skipped due to unknown mapping: Standard_Mutex GetMutex(TopoDS_Shape theShape, ) */
	void RemoveAllMutexes();
}; // class TopTools_MutexForShapeProvider

}; // namespace Occt
}; // namespace Macad
