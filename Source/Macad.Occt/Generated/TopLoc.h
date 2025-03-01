// Generated wrapper code for package TopLoc

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  TopLoc_MapOfLocation
//---------------------------------------------------------------------
public ref class TopLoc_MapOfLocation sealed
    : public Macad::Occt::BaseClass<::TopLoc_MapOfLocation>
    , public IEnumerable<Macad::Occt::TopLoc_Location^>
{

#ifdef Include_TopLoc_MapOfLocation_h
public:
    Include_TopLoc_MapOfLocation_h
#endif

public:
    TopLoc_MapOfLocation(::TopLoc_MapOfLocation* nativeInstance)
        : Macad::Occt::BaseClass<::TopLoc_MapOfLocation>( nativeInstance, true )
    {}

    TopLoc_MapOfLocation(::TopLoc_MapOfLocation& nativeInstance)
        : Macad::Occt::BaseClass<::TopLoc_MapOfLocation>( &nativeInstance, false )
    {}

    property ::TopLoc_MapOfLocation* NativeInstance
    {
        ::TopLoc_MapOfLocation* get()
        {
            return static_cast<::TopLoc_MapOfLocation*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::TopLoc_Location^, ::TopLoc_MapOfLocation::Iterator>
    {

#ifdef Include_TopLoc_MapOfLocation_Iterator_h
    public:
        Include_TopLoc_MapOfLocation_Iterator_h
#endif

    public:
        Iterator(::TopLoc_MapOfLocation::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopLoc_Location^, ::TopLoc_MapOfLocation::Iterator>( nativeInstance, true )
        {}

        Iterator(::TopLoc_MapOfLocation::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::TopLoc_Location^, ::TopLoc_MapOfLocation::Iterator>( &nativeInstance, false )
        {}

        property ::TopLoc_MapOfLocation::Iterator* NativeInstance
        {
            ::TopLoc_MapOfLocation::Iterator* get()
            {
                return static_cast<::TopLoc_MapOfLocation::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More() override;
        void Next() override;
        Macad::Occt::TopLoc_Location^ Value() override;
        Macad::Occt::TopLoc_Location^ Key();
    }; // class Iterator

    TopLoc_MapOfLocation();
    TopLoc_MapOfLocation(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    TopLoc_MapOfLocation(int theNbBuckets);
    void Exchange(Macad::Occt::TopLoc_MapOfLocation^ theOther);
    Macad::Occt::TopLoc_MapOfLocation^ Assign(Macad::Occt::TopLoc_MapOfLocation^ theOther);
    void ReSize(int N);
    bool Add(Macad::Occt::TopLoc_Location^ theKey);
    Macad::Occt::TopLoc_Location^ Added(Macad::Occt::TopLoc_Location^ theKey);
    bool Contains(Macad::Occt::TopLoc_Location^ theKey);
    bool Remove(Macad::Occt::TopLoc_Location^ K);
    void Clear(bool doReleaseMemory);
    void Clear();
    int Size();
    bool IsEqual(Macad::Occt::TopLoc_MapOfLocation^ theOther);
    void Union(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight);
    bool Unite(Macad::Occt::TopLoc_MapOfLocation^ theOther);
    bool HasIntersection(Macad::Occt::TopLoc_MapOfLocation^ theMap);
    void Intersection(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight);
    bool Intersect(Macad::Occt::TopLoc_MapOfLocation^ theOther);
    void Subtraction(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight);
    bool Subtract(Macad::Occt::TopLoc_MapOfLocation^ theOther);
    void Difference(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight);
    bool Differ(Macad::Occt::TopLoc_MapOfLocation^ theOther);
    bool Equals(System::Object^ obj) override;
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TopLoc_Location^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
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
public ref class TopLoc_Datum3D sealed
    : public Macad::Occt::Standard_Transient
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
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /// <summary>
    /// Writes the contents of this Datum3D to the stream S.
    /// </summary>
    void ShallowDump(System::IO::TextWriter^ S);
    static Macad::Occt::TopLoc_Datum3D^ CreateDowncasted(::TopLoc_Datum3D* instance);
}; // class TopLoc_Datum3D

//---------------------------------------------------------------------
//  Class  TopLoc_SListNodeOfItemLocation
//---------------------------------------------------------------------
public ref class TopLoc_SListNodeOfItemLocation sealed
    : public Macad::Occt::Standard_Transient
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

public:
    TopLoc_SListNodeOfItemLocation(Macad::Occt::TopLoc_ItemLocation^ I, Macad::Occt::TopLoc_SListOfItemLocation^ aTail);
    Macad::Occt::TopLoc_SListOfItemLocation^ Tail();
    Macad::Occt::TopLoc_ItemLocation^ Value();
    static Macad::Occt::TopLoc_SListNodeOfItemLocation^ CreateDowncasted(::TopLoc_SListNodeOfItemLocation* instance);
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
public ref class TopLoc_ItemLocation sealed
    : public Macad::Occt::BaseClass<::TopLoc_ItemLocation>
{

#ifdef Include_TopLoc_ItemLocation_h
public:
    Include_TopLoc_ItemLocation_h
#endif

public:
    TopLoc_ItemLocation(::TopLoc_ItemLocation* nativeInstance)
        : Macad::Occt::BaseClass<::TopLoc_ItemLocation>( nativeInstance, true )
    {}

    TopLoc_ItemLocation(::TopLoc_ItemLocation& nativeInstance)
        : Macad::Occt::BaseClass<::TopLoc_ItemLocation>( &nativeInstance, false )
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
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
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
public ref class TopLoc_SListOfItemLocation sealed
    : public Macad::Occt::BaseClass<::TopLoc_SListOfItemLocation>
{

#ifdef Include_TopLoc_SListOfItemLocation_h
public:
    Include_TopLoc_SListOfItemLocation_h
#endif

public:
    TopLoc_SListOfItemLocation(::TopLoc_SListOfItemLocation* nativeInstance)
        : Macad::Occt::BaseClass<::TopLoc_SListOfItemLocation>( nativeInstance, true )
    {}

    TopLoc_SListOfItemLocation(::TopLoc_SListOfItemLocation& nativeInstance)
        : Macad::Occt::BaseClass<::TopLoc_SListOfItemLocation>( &nativeInstance, false )
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
    /// Sets  a list  from  an  other  one. The  lists are
    /// shared. The list itself is returned.
    /// </summary>
    Macad::Occt::TopLoc_SListOfItemLocation^ Assign(Macad::Occt::TopLoc_SListOfItemLocation^ Other);
    /// <summary>
    /// Return true if this list is empty
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
public ref class TopLoc_Location sealed
    : public Macad::Occt::BaseClass<::TopLoc_Location>
{

#ifdef Include_TopLoc_Location_h
public:
    Include_TopLoc_Location_h
#endif

public:
    TopLoc_Location(::TopLoc_Location* nativeInstance)
        : Macad::Occt::BaseClass<::TopLoc_Location>( nativeInstance, true )
    {}

    TopLoc_Location(::TopLoc_Location& nativeInstance)
        : Macad::Occt::BaseClass<::TopLoc_Location>( &nativeInstance, false )
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
    /// Returns a hashed value for this local coordinate system. This value is used, with map tables,
    /// to store and retrieve the object easily
    /// </summary>
    /// <returns>
    /// a computed hash code
    /// </returns>
    long long unsigned int HashCode();
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
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /// <summary>
    /// Prints the contents of <me> on the stream <s>.
    /// </summary>
    void ShallowDump(System::IO::TextWriter^ S);
    /// <summary>
    /// Clear myItems
    /// </summary>
    void Clear();
    static double ScalePrec();
    bool Equals(System::Object^ obj) override;
}; // class TopLoc_Location

}; // namespace Occt
}; // namespace Macad
