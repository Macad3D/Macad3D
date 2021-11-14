// Generated wrapper code for package TopLoc

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TopLoc_MapLocationHasher
//---------------------------------------------------------------------
public ref class TopLoc_MapLocationHasher sealed : public BaseClass<::TopLoc_MapLocationHasher>
{

#ifdef Include_TopLoc_MapLocationHasher_h
public:
	Include_TopLoc_MapLocationHasher_h
#endif

public:
	TopLoc_MapLocationHasher(::TopLoc_MapLocationHasher* nativeInstance)
		: BaseClass<::TopLoc_MapLocationHasher>( nativeInstance, true )
	{}

	TopLoc_MapLocationHasher(::TopLoc_MapLocationHasher& nativeInstance)
		: BaseClass<::TopLoc_MapLocationHasher>( &nativeInstance, false )
	{}

	property ::TopLoc_MapLocationHasher* NativeInstance
	{
		::TopLoc_MapLocationHasher* get()
		{
			return static_cast<::TopLoc_MapLocationHasher*>(_NativeInstance);
		}
	}

public:
	TopLoc_MapLocationHasher();
	TopLoc_MapLocationHasher(Macad::Occt::TopLoc_MapLocationHasher^ parameter1);
	static int HashCode(Macad::Occt::TopLoc_Location^ theKey, int theUpperBound);
	static bool IsEqual(Macad::Occt::TopLoc_Location^ theKey1, Macad::Occt::TopLoc_Location^ theKey2);
}; // class TopLoc_MapLocationHasher

//---------------------------------------------------------------------
//  Class  TopLoc_IndexedMapOfLocation
//---------------------------------------------------------------------
public ref class TopLoc_IndexedMapOfLocation sealed : public BaseClass<::TopLoc_IndexedMapOfLocation>
{

#ifdef Include_TopLoc_IndexedMapOfLocation_h
public:
	Include_TopLoc_IndexedMapOfLocation_h
#endif

public:
	TopLoc_IndexedMapOfLocation(::TopLoc_IndexedMapOfLocation* nativeInstance)
		: BaseClass<::TopLoc_IndexedMapOfLocation>( nativeInstance, true )
	{}

	TopLoc_IndexedMapOfLocation(::TopLoc_IndexedMapOfLocation& nativeInstance)
		: BaseClass<::TopLoc_IndexedMapOfLocation>( &nativeInstance, false )
	{}

	property ::TopLoc_IndexedMapOfLocation* NativeInstance
	{
		::TopLoc_IndexedMapOfLocation* get()
		{
			return static_cast<::TopLoc_IndexedMapOfLocation*>(_NativeInstance);
		}
	}

public:
	TopLoc_IndexedMapOfLocation();
	TopLoc_IndexedMapOfLocation(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopLoc_IndexedMapOfLocation(int theNbBuckets);
	TopLoc_IndexedMapOfLocation(Macad::Occt::TopLoc_IndexedMapOfLocation^ theOther);
	void Exchange(Macad::Occt::TopLoc_IndexedMapOfLocation^ theOther);
	int Add(Macad::Occt::TopLoc_Location^ theKey1);
	bool Contains(Macad::Occt::TopLoc_Location^ theKey1);
	void Substitute(int theIndex, Macad::Occt::TopLoc_Location^ theKey1);
	void Swap(int theIndex1, int theIndex2);
	void RemoveLast();
	void RemoveFromIndex(int theIndex);
	bool RemoveKey(Macad::Occt::TopLoc_Location^ theKey1);
	Macad::Occt::TopLoc_Location^ FindKey(int theIndex);
	int FindIndex(Macad::Occt::TopLoc_Location^ theKey1);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
}; // class TopLoc_IndexedMapOfLocation

//---------------------------------------------------------------------
//  Class  TopLoc_MapOfLocation
//---------------------------------------------------------------------
public ref class TopLoc_MapOfLocation sealed : public BaseClass<::TopLoc_MapOfLocation>
{

#ifdef Include_TopLoc_MapOfLocation_h
public:
	Include_TopLoc_MapOfLocation_h
#endif

public:
	TopLoc_MapOfLocation(::TopLoc_MapOfLocation* nativeInstance)
		: BaseClass<::TopLoc_MapOfLocation>( nativeInstance, true )
	{}

	TopLoc_MapOfLocation(::TopLoc_MapOfLocation& nativeInstance)
		: BaseClass<::TopLoc_MapOfLocation>( &nativeInstance, false )
	{}

	property ::TopLoc_MapOfLocation* NativeInstance
	{
		::TopLoc_MapOfLocation* get()
		{
			return static_cast<::TopLoc_MapOfLocation*>(_NativeInstance);
		}
	}

public:
	TopLoc_MapOfLocation();
	TopLoc_MapOfLocation(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	TopLoc_MapOfLocation(int theNbBuckets);
	TopLoc_MapOfLocation(Macad::Occt::TopLoc_MapOfLocation^ theOther);
	void Exchange(Macad::Occt::TopLoc_MapOfLocation^ theOther);
	Macad::Occt::TopLoc_MapOfLocation^ Assign(Macad::Occt::TopLoc_MapOfLocation^ theOther);
	Macad::Occt::TopLoc_Location^ Added(Macad::Occt::TopLoc_Location^ K);
	bool Contains(Macad::Occt::TopLoc_Location^ K);
	bool Remove(Macad::Occt::TopLoc_Location^ K);
	void Clear(bool doReleaseMemory);
	void Clear();
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	int Size();
	bool IsEqual(Macad::Occt::TopLoc_MapOfLocation^ theOther);
	bool Contains(Macad::Occt::TopLoc_MapOfLocation^ theOther);
	void Union(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight);
	bool Unite(Macad::Occt::TopLoc_MapOfLocation^ theOther);
	bool HasIntersection(Macad::Occt::TopLoc_MapOfLocation^ theMap);
	void Intersection(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight);
	bool Intersect(Macad::Occt::TopLoc_MapOfLocation^ theOther);
	void Subtraction(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight);
	bool Subtract(Macad::Occt::TopLoc_MapOfLocation^ theOther);
	void Difference(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight);
	bool Differ(Macad::Occt::TopLoc_MapOfLocation^ theOther);
}; // class TopLoc_MapOfLocation

//---------------------------------------------------------------------
//  Class  TopLoc_Datum3D
//---------------------------------------------------------------------
public ref class TopLoc_Datum3D sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TopLoc_Datum3D_h
public:
	Include_TopLoc_Datum3D_h
#endif

public:
	TopLoc_Datum3D(::TopLoc_Datum3D* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TopLoc_Datum3D(::TopLoc_Datum3D& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TopLoc_Datum3D* NativeInstance
	{
		::TopLoc_Datum3D* get()
		{
			return static_cast<::TopLoc_Datum3D*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopLoc_Datum3D^ CreateDowncasted(::TopLoc_Datum3D* instance);

public:
	TopLoc_Datum3D();
	TopLoc_Datum3D(Macad::Occt::Trsf T);
	TopLoc_Datum3D(Macad::Occt::TopLoc_Datum3D^ parameter1);
	Macad::Occt::Trsf Transformation();
	Macad::Occt::Trsf Trsf();
	Macad::Occt::TrsfForm Form();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void ShallowDump(ostream S, ) */
}; // class TopLoc_Datum3D

//---------------------------------------------------------------------
//  Class  TopLoc_SListNodeOfItemLocation
//---------------------------------------------------------------------
public ref class TopLoc_SListNodeOfItemLocation sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_TopLoc_SListNodeOfItemLocation_h
public:
	Include_TopLoc_SListNodeOfItemLocation_h
#endif

public:
	TopLoc_SListNodeOfItemLocation(::TopLoc_SListNodeOfItemLocation* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	TopLoc_SListNodeOfItemLocation(::TopLoc_SListNodeOfItemLocation& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::TopLoc_SListNodeOfItemLocation* NativeInstance
	{
		::TopLoc_SListNodeOfItemLocation* get()
		{
			return static_cast<::TopLoc_SListNodeOfItemLocation*>(_NativeInstance);
		}
	}

	static Macad::Occt::TopLoc_SListNodeOfItemLocation^ CreateDowncasted(::TopLoc_SListNodeOfItemLocation* instance);

public:
	TopLoc_SListNodeOfItemLocation(Macad::Occt::TopLoc_ItemLocation^ I, Macad::Occt::TopLoc_SListOfItemLocation^ aTail);
	TopLoc_SListNodeOfItemLocation(Macad::Occt::TopLoc_SListNodeOfItemLocation^ parameter1);
	Macad::Occt::TopLoc_SListOfItemLocation^ Tail();
	Macad::Occt::TopLoc_ItemLocation^ Value();
}; // class TopLoc_SListNodeOfItemLocation

//---------------------------------------------------------------------
//  Class  TopLoc_ItemLocation
//---------------------------------------------------------------------
public ref class TopLoc_ItemLocation sealed : public BaseClass<::TopLoc_ItemLocation>
{

#ifdef Include_TopLoc_ItemLocation_h
public:
	Include_TopLoc_ItemLocation_h
#endif

public:
	TopLoc_ItemLocation(::TopLoc_ItemLocation* nativeInstance)
		: BaseClass<::TopLoc_ItemLocation>( nativeInstance, true )
	{}

	TopLoc_ItemLocation(::TopLoc_ItemLocation& nativeInstance)
		: BaseClass<::TopLoc_ItemLocation>( &nativeInstance, false )
	{}

	property ::TopLoc_ItemLocation* NativeInstance
	{
		::TopLoc_ItemLocation* get()
		{
			return static_cast<::TopLoc_ItemLocation*>(_NativeInstance);
		}
	}

public:
	TopLoc_ItemLocation(Macad::Occt::TopLoc_Datum3D^ D, int P);
	TopLoc_ItemLocation(Macad::Occt::TopLoc_ItemLocation^ parameter1);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class TopLoc_ItemLocation

//---------------------------------------------------------------------
//  Class  TopLoc_SListOfItemLocation
//---------------------------------------------------------------------
public ref class TopLoc_SListOfItemLocation sealed : public BaseClass<::TopLoc_SListOfItemLocation>
{

#ifdef Include_TopLoc_SListOfItemLocation_h
public:
	Include_TopLoc_SListOfItemLocation_h
#endif

public:
	TopLoc_SListOfItemLocation(::TopLoc_SListOfItemLocation* nativeInstance)
		: BaseClass<::TopLoc_SListOfItemLocation>( nativeInstance, true )
	{}

	TopLoc_SListOfItemLocation(::TopLoc_SListOfItemLocation& nativeInstance)
		: BaseClass<::TopLoc_SListOfItemLocation>( &nativeInstance, false )
	{}

	property ::TopLoc_SListOfItemLocation* NativeInstance
	{
		::TopLoc_SListOfItemLocation* get()
		{
			return static_cast<::TopLoc_SListOfItemLocation*>(_NativeInstance);
		}
	}

public:
	TopLoc_SListOfItemLocation();
	TopLoc_SListOfItemLocation(Macad::Occt::TopLoc_ItemLocation^ anItem, Macad::Occt::TopLoc_SListOfItemLocation^ aTail);
	TopLoc_SListOfItemLocation(Macad::Occt::TopLoc_SListOfItemLocation^ Other);
	Macad::Occt::TopLoc_SListOfItemLocation^ Assign(Macad::Occt::TopLoc_SListOfItemLocation^ Other);
	bool IsEmpty();
	void Clear();
	Macad::Occt::TopLoc_ItemLocation^ Value();
	Macad::Occt::TopLoc_SListOfItemLocation^ Tail();
	void Construct(Macad::Occt::TopLoc_ItemLocation^ anItem);
	void ToTail();
	bool More();
	void Next();
}; // class TopLoc_SListOfItemLocation

//---------------------------------------------------------------------
//  Class  TopLoc_Location
//---------------------------------------------------------------------
public ref class TopLoc_Location sealed : public BaseClass<::TopLoc_Location>
{

#ifdef Include_TopLoc_Location_h
public:
	Include_TopLoc_Location_h
#endif

public:
	TopLoc_Location(::TopLoc_Location* nativeInstance)
		: BaseClass<::TopLoc_Location>( nativeInstance, true )
	{}

	TopLoc_Location(::TopLoc_Location& nativeInstance)
		: BaseClass<::TopLoc_Location>( &nativeInstance, false )
	{}

	property ::TopLoc_Location* NativeInstance
	{
		::TopLoc_Location* get()
		{
			return static_cast<::TopLoc_Location*>(_NativeInstance);
		}
	}

public:
	TopLoc_Location();
	TopLoc_Location(Macad::Occt::Trsf T);
	TopLoc_Location(Macad::Occt::TopLoc_Datum3D^ D);
	TopLoc_Location(Macad::Occt::TopLoc_Location^ parameter1);
	bool IsIdentity();
	void Identity();
	Macad::Occt::TopLoc_Datum3D^ FirstDatum();
	int FirstPower();
	Macad::Occt::TopLoc_Location^ NextLocation();
	Macad::Occt::Trsf Transformation();
	Macad::Occt::TopLoc_Location^ Inverted();
	Macad::Occt::TopLoc_Location^ Multiplied(Macad::Occt::TopLoc_Location^ Other);
	Macad::Occt::TopLoc_Location^ Divided(Macad::Occt::TopLoc_Location^ Other);
	Macad::Occt::TopLoc_Location^ Predivided(Macad::Occt::TopLoc_Location^ Other);
	Macad::Occt::TopLoc_Location^ Powered(int pwr);
	int HashCode(int theUpperBound);
	bool IsEqual(Macad::Occt::TopLoc_Location^ Other);
	bool IsDifferent(Macad::Occt::TopLoc_Location^ Other);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void ShallowDump(ostream S, ) */
	void Clear();
	static double ScalePrec();
}; // class TopLoc_Location

}; // namespace Occt
}; // namespace Macad
