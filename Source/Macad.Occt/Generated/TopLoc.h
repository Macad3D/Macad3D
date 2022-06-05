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
/// <summary>
/// Describes a coordinate transformation, i.e. a change
/// to an elementary 3D coordinate system, or position in 3D space.
/// A Datum3D is always described relative to the default datum.
/// The default datum is described relative to itself: its
/// origin is (0,0,0), and its axes are (1,0,0) (0,1,0) (0,0,1).
/// </summary>
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
	/// <summary>
	/// Constructs a default Datum3D.
	/// </summary>
	TopLoc_Datum3D();
	/// <summary>
	/// Constructs a Datum3D form a Trsf from gp. An error is
	/// raised if the Trsf is not a rigid transformation.
	/// </summary>
	TopLoc_Datum3D(Macad::Occt::Trsf T);
	TopLoc_Datum3D(Macad::Occt::TopLoc_Datum3D^ parameter1);
	/// <summary>
	/// Returns a gp_Trsf which, when applied to this datum, produces the default datum.
	/// </summary>
	Macad::Occt::Trsf Transformation();
	/// <summary>
	/// Returns a gp_Trsf which, when applied to this datum, produces the default datum.
	/// </summary>
	Macad::Occt::Trsf Trsf();
	/// <summary>
	/// Return transformation form.
	/// </summary>
	Macad::Occt::TrsfForm Form();
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Writes the contents of this Datum3D to the stream S.
	/// </summary>
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
/// <summary>
/// An ItemLocation is an elementary coordinate system
/// in a Location.
/// 
/// The  ItemLocation     contains :
/// 
/// * The elementary Datum.
/// 
/// * The exponent of the elementary Datum.
/// 
/// * The transformation associated to the composition.
/// </summary>
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
	/// <summary>
	/// Sets the elementary Datum to <D>
	/// Sets the exponent to <P>
	/// </summary>
	TopLoc_ItemLocation(Macad::Occt::TopLoc_Datum3D^ D, int P);
	TopLoc_ItemLocation(Macad::Occt::TopLoc_ItemLocation^ parameter1);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class TopLoc_ItemLocation

//---------------------------------------------------------------------
//  Class  TopLoc_SListOfItemLocation
//---------------------------------------------------------------------
/// <summary>
/// An SListOfItemLocation is a LISP like list of Items.
/// An SListOfItemLocation is :
/// . Empty.
/// . Or it has a Value and a  Tail  which is an other SListOfItemLocation.
/// 
/// The Tail of an empty list is an empty list.
/// SListOfItemLocation are  shared.  It  means   that they  can  be
/// modified through other lists.
/// SListOfItemLocation may  be used  as Iterators. They  have Next,
/// More, and value methods. To iterate on the content
/// of the list S just do.
/// 
/// SListOfItemLocation Iterator;
/// for (Iterator = S; Iterator.More(); Iterator.Next())
/// X = Iterator.Value();
/// </summary>
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
	/// <summary>
	/// Creates an empty List.
	/// </summary>
	TopLoc_SListOfItemLocation();
	/// <summary>
	/// Creates a List with <anItem> as value  and <aTail> as tail.
	/// </summary>
	TopLoc_SListOfItemLocation(Macad::Occt::TopLoc_ItemLocation^ anItem, Macad::Occt::TopLoc_SListOfItemLocation^ aTail);
	/// <summary>
	/// Creates a list from an other one. The lists  are shared.
	/// </summary>
	TopLoc_SListOfItemLocation(Macad::Occt::TopLoc_SListOfItemLocation^ Other);
	/// <summary>
	/// Sets  a list  from  an  other  one. The  lists are
	/// shared. The list itself is returned.
	/// </summary>
	Macad::Occt::TopLoc_SListOfItemLocation^ Assign(Macad::Occt::TopLoc_SListOfItemLocation^ Other);
	/// <summary>
	/// Returne true if this list is empty
	/// </summary>
	bool IsEmpty();
	/// <summary>
	/// Sets the list to be empty.
	/// </summary>
	void Clear();
	/// <summary>
	/// Returns the current value of the list. An error is
	/// raised  if the list is empty.
	/// </summary>
	Macad::Occt::TopLoc_ItemLocation^ Value();
	/// <summary>
	/// Returns the current tail of  the list. On an empty
	/// list the tail is the list itself.
	/// </summary>
	Macad::Occt::TopLoc_SListOfItemLocation^ Tail();
	/// <summary>
	/// Replaces the list by a list with <anItem> as Value
	/// and the  list <me> as  tail.
	/// </summary>
	void Construct(Macad::Occt::TopLoc_ItemLocation^ anItem);
	/// <summary>
	/// Replaces the list <me> by its tail.
	/// </summary>
	void ToTail();
	/// <summary>
	/// Returns True if the iterator  has a current value.
	/// This is !IsEmpty()
	/// </summary>
	bool More();
	/// <summary>
	/// Moves the iterator to the next object in the list.
	/// If the iterator is empty it will  stay empty. This is ToTail()
	/// </summary>
	void Next();
}; // class TopLoc_SListOfItemLocation

//---------------------------------------------------------------------
//  Class  TopLoc_Location
//---------------------------------------------------------------------
/// <summary>
/// A Location is a composite transition. It comprises a
/// series of elementary reference coordinates, i.e.
/// objects of type TopLoc_Datum3D, and the powers to
/// which these objects are raised.
/// </summary>
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
	/// <summary>
	/// Constructs an empty local coordinate system object.
	/// Note: A Location constructed from a default datum is said to be "empty".
	/// </summary>
	TopLoc_Location();
	/// <summary>
	/// Constructs the local coordinate system object defined
	/// by the transformation T. T invokes in turn, a TopLoc_Datum3D object.
	/// </summary>
	TopLoc_Location(Macad::Occt::Trsf T);
	/// <summary>
	/// Constructs the local coordinate system object defined by the 3D datum D.
	/// Exceptions
	/// Standard_ConstructionError if the transformation
	/// T does not represent a 3D coordinate system.
	/// </summary>
	TopLoc_Location(Macad::Occt::TopLoc_Datum3D^ D);
	TopLoc_Location(Macad::Occt::TopLoc_Location^ parameter1);
	/// <summary>
	/// Returns true if this location is equal to the Identity transformation.
	/// </summary>
	bool IsIdentity();
	/// <summary>
	/// Resets this location to the Identity transformation.
	/// </summary>
	void Identity();
	/// <summary>
	/// Returns    the  first   elementary  datum  of  the
	/// Location.  Use the NextLocation function recursively to access
	/// the other data comprising this location.
	/// Exceptions
	/// Standard_NoSuchObject if this location is empty.
	/// </summary>
	Macad::Occt::TopLoc_Datum3D^ FirstDatum();
	/// <summary>
	/// Returns   the  power  elevation  of    the   first
	/// elementary datum.
	/// Exceptions
	/// Standard_NoSuchObject if this location is empty.
	/// </summary>
	int FirstPower();
	/// <summary>
	/// Returns  a Location representing  <me> without the
	/// first datum. We have the relation :
	/// 
	/// <me> = NextLocation() * FirstDatum() ^ FirstPower()
	/// Exceptions
	/// Standard_NoSuchObject if this location is empty.
	/// </summary>
	Macad::Occt::TopLoc_Location^ NextLocation();
	/// <summary>
	/// Returns  the transformation    associated  to  the
	/// coordinate system.
	/// </summary>
	Macad::Occt::Trsf Transformation();
	/// <summary>
	/// Returns the inverse of <me>.
	/// 
	/// <me> * Inverted() is an Identity.
	/// </summary>
	Macad::Occt::TopLoc_Location^ Inverted();
	/// <summary>
	/// Returns <me> * <Other>, the  elementary datums are
	/// concatenated.
	/// </summary>
	Macad::Occt::TopLoc_Location^ Multiplied(Macad::Occt::TopLoc_Location^ Other);
	/// <summary>
	/// Returns  <me> / <Other>.
	/// </summary>
	Macad::Occt::TopLoc_Location^ Divided(Macad::Occt::TopLoc_Location^ Other);
	/// <summary>
	/// Returns <Other>.Inverted() * <me>.
	/// </summary>
	Macad::Occt::TopLoc_Location^ Predivided(Macad::Occt::TopLoc_Location^ Other);
	/// <summary>
	/// Returns me at the power <pwr>.   If <pwr>  is zero
	/// returns  Identity.  <pwr> can  be lower  than zero
	/// (usual meaning for powers).
	/// </summary>
	Macad::Occt::TopLoc_Location^ Powered(int pwr);
	/// <summary>
	/// Returns a hashed value for this local coordinate system. This value is used, with map tables, to store and
	/// retrieve the object easily, and is in the range [1, theUpperBound].
	/// </summary>
	/// <param name="theUpperBound">
	/// the upper bound of the range a computing hash code must be within
	/// </param>
	/// <returns>
	/// a computed hash code, in the range [1, theUpperBound]
	/// </returns>
	int HashCode(int theUpperBound);
	/// <summary>
	/// Returns true if this location and the location Other
	/// have the same elementary data, i.e. contain the same
	/// series of TopLoc_Datum3D and respective powers.
	/// This method is an alias for operator ==.
	/// </summary>
	bool IsEqual(Macad::Occt::TopLoc_Location^ Other);
	/// <summary>
	/// Returns true if this location and the location Other do
	/// not have the same elementary data, i.e. do not
	/// contain the same series of TopLoc_Datum3D and respective powers.
	/// This method is an alias for operator !=.
	/// </summary>
	bool IsDifferent(Macad::Occt::TopLoc_Location^ Other);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Prints the contents of <me> on the stream <s>.
	/// </summary>
	/* Method skipped due to unknown mapping: void ShallowDump(ostream S, ) */
	/// <summary>
	/// Clear myItems
	/// </summary>
	void Clear();
	static double ScalePrec();
}; // class TopLoc_Location

}; // namespace Occt
}; // namespace Macad
