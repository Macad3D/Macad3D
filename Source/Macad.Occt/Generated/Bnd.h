// Generated wrapper code for package Bnd

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox
//---------------------------------------------------------------------
public ref class Bnd_Array1OfBox sealed
    : public Macad::Occt::BaseClass<::Bnd_Array1OfBox>
    , public IIndexEnumerable<Macad::Occt::Bnd_Box^>
{

#ifdef Include_Bnd_Array1OfBox_h
public:
    Include_Bnd_Array1OfBox_h
#endif

public:
    Bnd_Array1OfBox(::Bnd_Array1OfBox* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Array1OfBox>( nativeInstance, true )
    {}

    Bnd_Array1OfBox(::Bnd_Array1OfBox& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Array1OfBox>( &nativeInstance, false )
    {}

    property ::Bnd_Array1OfBox* NativeInstance
    {
        ::Bnd_Array1OfBox* get()
        {
            return static_cast<::Bnd_Array1OfBox*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Bnd_Array1OfBox::Iterator>
    {

#ifdef Include_Bnd_Array1OfBox_Iterator_h
    public:
        Include_Bnd_Array1OfBox_Iterator_h
#endif

    public:
        Iterator(::Bnd_Array1OfBox::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_Array1OfBox::Iterator>( nativeInstance, true )
        {}

        Iterator(::Bnd_Array1OfBox::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_Array1OfBox::Iterator>( &nativeInstance, false )
        {}

        property ::Bnd_Array1OfBox::Iterator* NativeInstance
        {
            ::Bnd_Array1OfBox::Iterator* get()
            {
                return static_cast<::Bnd_Array1OfBox::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Bnd_Array1OfBox();
    Bnd_Array1OfBox(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void Bnd_Array1OfBox(allocator_type theAlloc, int theLower, int theUpper, ) */
    Bnd_Array1OfBox(Macad::Occt::Bnd_Box^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    Bnd_Array1OfBox(Macad::Occt::Bnd_Box^ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Bnd_Box^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Bnd_Array1OfBox^ Assign(Macad::Occt::Bnd_Array1OfBox^ theOther);
    Macad::Occt::Bnd_Array1OfBox^ Move(Macad::Occt::Bnd_Array1OfBox^ theOther);
    Macad::Occt::Bnd_Box^ First();
    Macad::Occt::Bnd_Box^ ChangeFirst();
    Macad::Occt::Bnd_Box^ Last();
    Macad::Occt::Bnd_Box^ ChangeLast();
    virtual Macad::Occt::Bnd_Box^ Value(int theIndex);
    Macad::Occt::Bnd_Box^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Bnd_Box^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Box^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Bnd_Array1OfBox

//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox2d
//---------------------------------------------------------------------
public ref class Bnd_Array1OfBox2d sealed
    : public Macad::Occt::BaseClass<::Bnd_Array1OfBox2d>
    , public IIndexEnumerable<Macad::Occt::Bnd_Box2d^>
{

#ifdef Include_Bnd_Array1OfBox2d_h
public:
    Include_Bnd_Array1OfBox2d_h
#endif

public:
    Bnd_Array1OfBox2d(::Bnd_Array1OfBox2d* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Array1OfBox2d>( nativeInstance, true )
    {}

    Bnd_Array1OfBox2d(::Bnd_Array1OfBox2d& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Array1OfBox2d>( &nativeInstance, false )
    {}

    property ::Bnd_Array1OfBox2d* NativeInstance
    {
        ::Bnd_Array1OfBox2d* get()
        {
            return static_cast<::Bnd_Array1OfBox2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Bnd_Array1OfBox2d::Iterator>
    {

#ifdef Include_Bnd_Array1OfBox2d_Iterator_h
    public:
        Include_Bnd_Array1OfBox2d_Iterator_h
#endif

    public:
        Iterator(::Bnd_Array1OfBox2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_Array1OfBox2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::Bnd_Array1OfBox2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_Array1OfBox2d::Iterator>( &nativeInstance, false )
        {}

        property ::Bnd_Array1OfBox2d::Iterator* NativeInstance
        {
            ::Bnd_Array1OfBox2d::Iterator* get()
            {
                return static_cast<::Bnd_Array1OfBox2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Bnd_Array1OfBox2d();
    Bnd_Array1OfBox2d(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void Bnd_Array1OfBox2d(allocator_type theAlloc, int theLower, int theUpper, ) */
    Bnd_Array1OfBox2d(Macad::Occt::Bnd_Box2d^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    Bnd_Array1OfBox2d(Macad::Occt::Bnd_Box2d^ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Bnd_Box2d^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Bnd_Array1OfBox2d^ Assign(Macad::Occt::Bnd_Array1OfBox2d^ theOther);
    Macad::Occt::Bnd_Array1OfBox2d^ Move(Macad::Occt::Bnd_Array1OfBox2d^ theOther);
    Macad::Occt::Bnd_Box2d^ First();
    Macad::Occt::Bnd_Box2d^ ChangeFirst();
    Macad::Occt::Bnd_Box2d^ Last();
    Macad::Occt::Bnd_Box2d^ ChangeLast();
    virtual Macad::Occt::Bnd_Box2d^ Value(int theIndex);
    Macad::Occt::Bnd_Box2d^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Bnd_Box2d^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Box2d^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Bnd_Array1OfBox2d

//---------------------------------------------------------------------
//  Class  Bnd_Array1OfSphere
//---------------------------------------------------------------------
public ref class Bnd_Array1OfSphere sealed
    : public Macad::Occt::BaseClass<::Bnd_Array1OfSphere>
    , public IIndexEnumerable<Macad::Occt::Bnd_Sphere^>
{

#ifdef Include_Bnd_Array1OfSphere_h
public:
    Include_Bnd_Array1OfSphere_h
#endif

public:
    Bnd_Array1OfSphere(::Bnd_Array1OfSphere* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Array1OfSphere>( nativeInstance, true )
    {}

    Bnd_Array1OfSphere(::Bnd_Array1OfSphere& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Array1OfSphere>( &nativeInstance, false )
    {}

    property ::Bnd_Array1OfSphere* NativeInstance
    {
        ::Bnd_Array1OfSphere* get()
        {
            return static_cast<::Bnd_Array1OfSphere*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Bnd_Array1OfSphere::Iterator>
    {

#ifdef Include_Bnd_Array1OfSphere_Iterator_h
    public:
        Include_Bnd_Array1OfSphere_Iterator_h
#endif

    public:
        Iterator(::Bnd_Array1OfSphere::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_Array1OfSphere::Iterator>( nativeInstance, true )
        {}

        Iterator(::Bnd_Array1OfSphere::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_Array1OfSphere::Iterator>( &nativeInstance, false )
        {}

        property ::Bnd_Array1OfSphere::Iterator* NativeInstance
        {
            ::Bnd_Array1OfSphere::Iterator* get()
            {
                return static_cast<::Bnd_Array1OfSphere::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Bnd_Array1OfSphere();
    Bnd_Array1OfSphere(int theLower, int theUpper);
    /* Method skipped due to unknown mapping: void Bnd_Array1OfSphere(allocator_type theAlloc, int theLower, int theUpper, ) */
    Bnd_Array1OfSphere(Macad::Occt::Bnd_Sphere^ theBegin, int theLower, int theUpper, bool theUseBuffer);
    Bnd_Array1OfSphere(Macad::Occt::Bnd_Sphere^ theBegin, int theLower, int theUpper);
    void Init(Macad::Occt::Bnd_Sphere^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Bnd_Array1OfSphere^ Assign(Macad::Occt::Bnd_Array1OfSphere^ theOther);
    Macad::Occt::Bnd_Array1OfSphere^ Move(Macad::Occt::Bnd_Array1OfSphere^ theOther);
    Macad::Occt::Bnd_Sphere^ First();
    Macad::Occt::Bnd_Sphere^ ChangeFirst();
    Macad::Occt::Bnd_Sphere^ Last();
    Macad::Occt::Bnd_Sphere^ ChangeLast();
    virtual Macad::Occt::Bnd_Sphere^ Value(int theIndex);
    Macad::Occt::Bnd_Sphere^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Bnd_Sphere^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Sphere^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Bnd_Array1OfSphere

//---------------------------------------------------------------------
//  Class  Bnd_Box
//---------------------------------------------------------------------
/// <summary>
/// Describes a bounding box in 3D space.
/// A bounding box is parallel to the axes of the coordinates
/// system. If it is finite, it is defined by the three intervals:
/// -   [ Xmin,Xmax ],
/// -   [ Ymin,Ymax ],
/// -   [ Zmin,Zmax ].
/// A bounding box may be infinite (i.e. open) in one or more
/// directions. It is said to be:
/// -   OpenXmin if it is infinite on the negative side of the   "X Direction";
/// -   OpenXmax if it is infinite on the positive side of the "X Direction";
/// -   OpenYmin if it is infinite on the negative side of the   "Y Direction";
/// -   OpenYmax if it is infinite on the positive side of the "Y Direction";
/// -   OpenZmin if it is infinite on the negative side of the   "Z Direction";
/// -   OpenZmax if it is infinite on the positive side of the "Z Direction";
/// -   WholeSpace if it is infinite in all six directions. In this
/// case, any point of the space is inside the box;
/// -   Void if it is empty. In this case, there is no point included in the box.
/// A bounding box is defined by:
/// -   six bounds (Xmin, Xmax, Ymin, Ymax, Zmin and
/// Zmax) which limit the bounding box if it is finite,
/// -   eight flags (OpenXmin, OpenXmax, OpenYmin,
/// OpenYmax, OpenZmin, OpenZmax,
/// WholeSpace and Void) which describe the
/// bounding box if it is infinite or empty, and
/// -   a gap, which is included on both sides in any direction
/// when consulting the finite bounds of the box.
/// </summary>
public ref class Bnd_Box sealed
    : public Macad::Occt::BaseClass<::Bnd_Box>
{

#ifdef Include_Bnd_Box_h
public:
    Include_Bnd_Box_h
#endif

public:
    Bnd_Box(::Bnd_Box* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Box>( nativeInstance, true )
    {}

    Bnd_Box(::Bnd_Box& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Box>( &nativeInstance, false )
    {}

    property ::Bnd_Box* NativeInstance
    {
        ::Bnd_Box* get()
        {
            return static_cast<::Bnd_Box*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  MaskFlags
    //---------------------------------------------------------------------
    /// <summary>
    /// Bit flags.
    /// </summary>
    enum class MaskFlags
    {
        VoidMask = 1,
        XminMask = 2,
        XmaxMask = 4,
        YminMask = 8,
        YmaxMask = 16,
        ZminMask = 32,
        ZmaxMask = 64,
        WholeMask = 126
    }; // enum  class MaskFlags

    /// <summary>
    /// Creates an empty Box.
    /// The constructed box is qualified Void. Its gap is null.
    /// </summary>
    Bnd_Box();
    /// <summary>
    /// Creates a bounding box, it contains:
    /// -   minimum/maximum point of bounding box,
    /// The constructed box is qualified Void. Its gap is null.
    /// </summary>
    Bnd_Box(Macad::Occt::Pnt theMin, Macad::Occt::Pnt theMax);
    /// <summary>
    /// Sets this bounding box so that it covers the whole of 3D space.
    /// It is infinitely long in all directions.
    /// </summary>
    void SetWhole();
    /// <summary>
    /// Sets this bounding box so that it is empty. All points are outside a void box.
    /// </summary>
    void SetVoid();
    /// <summary>
    /// Sets this bounding box so that it bounds
    /// -   the point P. This involves first setting this bounding box
    /// to be void and then adding the point P.
    /// </summary>
    void Set(Macad::Occt::Pnt P);
    /// <summary>
    /// Sets this bounding box so that it bounds
    /// the half-line defined by point P and direction D, i.e. all
    /// points M defined by M=P+u*D, where u is greater than
    /// or equal to 0, are inside the bounding volume. This
    /// involves first setting this box to be void and then adding   the half-line.
    /// </summary>
    void Set(Macad::Occt::Pnt P, Macad::Occt::Dir D);
    /// <summary>
    /// Enlarges this bounding box, if required, so that it
    /// contains at least:
    /// -   interval [ aXmin,aXmax ] in the "X Direction",
    /// -   interval [ aYmin,aYmax ] in the "Y Direction",
    /// -   interval [ aZmin,aZmax ] in the "Z Direction";
    /// </summary>
    void Update(double aXmin, double aYmin, double aZmin, double aXmax, double aYmax, double aZmax);
    /// <summary>
    /// Adds a point of coordinates (X,Y,Z) to this bounding box.
    /// </summary>
    void Update(double X, double Y, double Z);
    /// <summary>
    /// Returns the gap of this bounding box.
    /// </summary>
    double GetGap();
    /// <summary>
    /// Set the gap of this bounding box to abs(Tol).
    /// </summary>
    void SetGap(double Tol);
    /// <summary>
    /// Enlarges the      box    with    a   tolerance   value.
    /// (minvalues-Abs(<tol>) and maxvalues+Abs(<tol>))
    /// This means that the minimum values of its X, Y and Z
    /// intervals of definition, when they are finite, are reduced by
    /// the absolute value of Tol, while the maximum values are
    /// increased by the same amount.
    /// </summary>
    void Enlarge(double Tol);
    /// <summary>
    /// Returns the bounds of this bounding box. The gap is included.
    /// If this bounding box is infinite (i.e. "open"), returned values
    /// may be equal to +/- Precision::Infinite().
    /// Standard_ConstructionError exception will be thrown if the box is void.
    /// if IsVoid()
    /// </summary>
    void Get(double% theXmin, double% theYmin, double% theZmin, double% theXmax, double% theYmax, double% theZmax);
    /// <summary>
    /// Returns the lower corner of this bounding box. The gap is included.
    /// If this bounding box is infinite (i.e. "open"), returned values
    /// may be equal to +/- Precision::Infinite().
    /// Standard_ConstructionError exception will be thrown if the box is void.
    /// if IsVoid()
    /// </summary>
    Macad::Occt::Pnt CornerMin();
    /// <summary>
    /// Returns the upper corner of this bounding box. The gap is included.
    /// If this bounding box is infinite (i.e. "open"), returned values
    /// may be equal to +/- Precision::Infinite().
    /// Standard_ConstructionError exception will be thrown if the box is void.
    /// if IsVoid()
    /// </summary>
    Macad::Occt::Pnt CornerMax();
    /// <summary>
    /// The   Box will be   infinitely   long  in the Xmin
    /// direction.
    /// </summary>
    void OpenXmin();
    /// <summary>
    /// The   Box will be   infinitely   long  in the Xmax
    /// direction.
    /// </summary>
    void OpenXmax();
    /// <summary>
    /// The   Box will be   infinitely   long  in the Ymin
    /// direction.
    /// </summary>
    void OpenYmin();
    /// <summary>
    /// The   Box will be   infinitely   long  in the Ymax
    /// direction.
    /// </summary>
    void OpenYmax();
    /// <summary>
    /// The   Box will be   infinitely   long  in the Zmin
    /// direction.
    /// </summary>
    void OpenZmin();
    /// <summary>
    /// The   Box will be   infinitely   long  in the Zmax
    /// direction.
    /// </summary>
    void OpenZmax();
    /// <summary>
    /// Returns true if this bounding box has at least one open direction.
    /// </summary>
    bool IsOpen();
    /// <summary>
    /// Returns true if this bounding box is open in the  Xmin direction.
    /// </summary>
    bool IsOpenXmin();
    /// <summary>
    /// Returns true if this bounding box is open in the  Xmax direction.
    /// </summary>
    bool IsOpenXmax();
    /// <summary>
    /// Returns true if this bounding box is open in the  Ymix direction.
    /// </summary>
    bool IsOpenYmin();
    /// <summary>
    /// Returns true if this bounding box is open in the  Ymax direction.
    /// </summary>
    bool IsOpenYmax();
    /// <summary>
    /// Returns true if this bounding box is open in the  Zmin direction.
    /// </summary>
    bool IsOpenZmin();
    /// <summary>
    /// Returns true if this bounding box is open in the  Zmax  direction.
    /// </summary>
    bool IsOpenZmax();
    /// <summary>
    /// Returns true if this bounding box is infinite in all 6 directions (WholeSpace flag).
    /// </summary>
    bool IsWhole();
    /// <summary>
    /// Returns true if this bounding box is empty (Void flag).
    /// </summary>
    bool IsVoid();
    /// <summary>
    /// true if xmax-xmin < tol.
    /// </summary>
    bool IsXThin(double tol);
    /// <summary>
    /// true if ymax-ymin < tol.
    /// </summary>
    bool IsYThin(double tol);
    /// <summary>
    /// true if zmax-zmin < tol.
    /// </summary>
    bool IsZThin(double tol);
    /// <summary>
    /// Returns true if IsXThin, IsYThin and IsZThin are all true,
    /// i.e. if the box is thin in all three dimensions.
    /// </summary>
    bool IsThin(double tol);
    /// <summary>
    /// Returns a bounding box which is the result of applying the
    /// transformation T to this bounding box.
    /// Warning
    /// Applying a geometric transformation (for example, a
    /// rotation) to a bounding box generally increases its
    /// dimensions. This is not optimal for algorithms which use it.
    /// </summary>
    Macad::Occt::Bnd_Box^ Transformed(Macad::Occt::Trsf T);
    /// <summary>
    /// Adds the box <Other> to <me>.
    /// </summary>
    void Add(Macad::Occt::Bnd_Box^ Other);
    /// <summary>
    /// Adds a Pnt to the box.
    /// </summary>
    void Add(Macad::Occt::Pnt P);
    /// <summary>
    /// Extends  <me> from the Pnt <P> in the direction <D>.
    /// </summary>
    void Add(Macad::Occt::Pnt P, Macad::Occt::Dir D);
    /// <summary>
    /// Extends the Box  in the given Direction, i.e. adds
    /// an  half-line. The   box  may become   infinite in
    /// 1,2 or 3 directions.
    /// </summary>
    void Add(Macad::Occt::Dir D);
    /// <summary>
    /// Returns True if the Pnt is out the box.
    /// </summary>
    bool IsOut(Macad::Occt::Pnt P);
    /// <summary>
    /// Returns False if the line intersects the box.
    /// </summary>
    bool IsOut(Macad::Occt::gp_Lin^ L);
    /// <summary>
    /// Returns False if the plane intersects the box.
    /// </summary>
    bool IsOut(Macad::Occt::Pln P);
    /// <summary>
    /// Returns False if the <Box> intersects or is inside <me>.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_Box^ Other);
    /// <summary>
    /// Returns False if  the transformed <Box> intersects
    /// or  is inside <me>.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_Box^ Other, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns False  if the transformed <Box> intersects
    /// or  is inside the transformed box <me>.
    /// </summary>
    bool IsOut(Macad::Occt::Trsf T1, Macad::Occt::Bnd_Box^ Other, Macad::Occt::Trsf T2);
    /// <summary>
    /// Returns False  if the flat band lying between two parallel
    /// lines represented by their reference points <P1>, <P2> and
    /// direction <D> intersects the box.
    /// </summary>
    bool IsOut(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Dir D);
    /// <summary>
    /// Computes the minimum distance between two boxes.
    /// </summary>
    double Distance(Macad::Occt::Bnd_Box^ Other);
    void Dump();
    /// <summary>
    /// Computes the squared diagonal of me.
    /// </summary>
    double SquareExtent();
    /// <summary>
    /// Returns a finite part of an infinite bounding box (returns self if this is already finite
    /// box). This can be a Void box in case if its sides has been defined as infinite (Open) without
    /// adding any finite points. WARNING! This method relies on Open flags, the infinite points added
    /// using Add() method will be returned as is.
    /// </summary>
    Macad::Occt::Bnd_Box^ FinitePart();
    /// <summary>
    /// Returns TRUE if this box has finite part.
    /// </summary>
    bool HasFinitePart();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    /* Method skipped due to unknown mapping: bool InitFromJson(stringstream theSStream, int theStreamPos, ) */
}; // class Bnd_Box

//---------------------------------------------------------------------
//  Class  Bnd_Box2d
//---------------------------------------------------------------------
/// <summary>
/// Describes a bounding box in 2D space.
/// A bounding box is parallel to the axes of the coordinates
/// system. If it is finite, it is defined by the two intervals:
/// -   [ Xmin,Xmax ], and
/// -   [ Ymin,Ymax ].
/// A bounding box may be infinite (i.e. open) in one or more
/// directions. It is said to be:
/// -   OpenXmin if it is infinite on the negative side of the   "X Direction";
/// -   OpenXmax if it is infinite on the positive side of the   "X Direction";
/// -   OpenYmin if it is infinite on the negative side of the   "Y Direction";
/// -   OpenYmax if it is infinite on the positive side of the   "Y Direction";
/// -   WholeSpace if it is infinite in all four directions. In
/// this case, any point of the space is inside the box;
/// -   Void if it is empty. In this case, there is no point included in the box.
/// A bounding box is defined by four bounds (Xmin, Xmax, Ymin and Ymax) which
/// limit the bounding box if it is finite, six flags (OpenXmin, OpenXmax, OpenYmin,
/// OpenYmax, WholeSpace and Void) which describe the bounding box if it is infinite or empty, and
/// -   a gap, which is included on both sides in any direction when consulting the finite bounds of
/// the box.
/// </summary>
public ref class Bnd_Box2d sealed
    : public Macad::Occt::BaseClass<::Bnd_Box2d>
{

#ifdef Include_Bnd_Box2d_h
public:
    Include_Bnd_Box2d_h
#endif

public:
    Bnd_Box2d(::Bnd_Box2d* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Box2d>( nativeInstance, true )
    {}

    Bnd_Box2d(::Bnd_Box2d& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Box2d>( &nativeInstance, false )
    {}

    property ::Bnd_Box2d* NativeInstance
    {
        ::Bnd_Box2d* get()
        {
            return static_cast<::Bnd_Box2d*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  MaskFlags
    //---------------------------------------------------------------------
    /// <summary>
    /// Bit flags.
    /// </summary>
    enum class MaskFlags
    {
        VoidMask = 1,
        XminMask = 2,
        XmaxMask = 4,
        YminMask = 8,
        YmaxMask = 16,
        WholeMask = 30
    }; // enum  class MaskFlags

    /// <summary>
    /// Creates an empty 2D bounding box.
    /// The constructed box is qualified Void. Its gap is null.
    /// </summary>
    Bnd_Box2d();
    /// <summary>
    /// Sets this bounding box so that it covers the whole 2D
    /// space, i.e. it is infinite in all directions.
    /// </summary>
    void SetWhole();
    /// <summary>
    /// Sets this 2D bounding box so that it is empty. All points are outside a void box.
    /// </summary>
    void SetVoid();
    /// <summary>
    /// Sets this 2D bounding box so that it bounds
    /// the point P. This involves first setting this bounding box
    /// to be void and then adding the point PThe rectangle bounds   the  point <P>.
    /// </summary>
    void Set(Macad::Occt::Pnt2d thePnt);
    /// <summary>
    /// Sets this 2D bounding box so that it bounds
    /// the half-line defined by point P and direction D, i.e. all
    /// points M defined by M=P+u*D, where u is greater than
    /// or equal to 0, are inside the bounding area. This involves
    /// first setting this 2D box to be void and then adding the   half-line.
    /// </summary>
    void Set(Macad::Occt::Pnt2d thePnt, Macad::Occt::Dir2d theDir);
    /// <summary>
    /// Enlarges this 2D bounding box, if required, so that it
    /// contains at least:
    /// -   interval [ aXmin,aXmax ] in the "X Direction",
    /// -   interval [ aYmin,aYmax ] in the "Y Direction"
    /// </summary>
    void Update(double aXmin, double aYmin, double aXmax, double aYmax);
    /// <summary>
    /// Adds a point of coordinates (X,Y) to this bounding box.
    /// </summary>
    void Update(double X, double Y);
    /// <summary>
    /// Returns the gap of this 2D bounding box.
    /// </summary>
    double GetGap();
    /// <summary>
    /// Set the gap of this 2D bounding box to abs(Tol).
    /// </summary>
    void SetGap(double Tol);
    /// <summary>
    /// Enlarges     the  box  with    a  tolerance  value.
    /// This means that the minimum values of its X and Y
    /// intervals of definition, when they are finite, are reduced by
    /// the absolute value of Tol, while the maximum values are
    /// increased by the same amount.
    /// </summary>
    void Enlarge(double theTol);
    /// <summary>
    /// Returns the bounds of this 2D bounding box.
    /// The gap is included. If this bounding box is infinite (i.e. "open"), returned values
    /// may be equal to +/- Precision::Infinite().
    /// if IsVoid()
    /// </summary>
    void Get(double% aXmin, double% aYmin, double% aXmax, double% aYmax);
    /// <summary>
    /// The Box will be infinitely long in the Xmin direction.
    /// </summary>
    void OpenXmin();
    /// <summary>
    /// The Box will be infinitely long in the Xmax direction.
    /// </summary>
    void OpenXmax();
    /// <summary>
    /// The Box will be infinitely long in the Ymin direction.
    /// </summary>
    void OpenYmin();
    /// <summary>
    /// The Box will be infinitely long in the Ymax direction.
    /// </summary>
    void OpenYmax();
    /// <summary>
    /// Returns true if this bounding box is open in the Xmin direction.
    /// </summary>
    bool IsOpenXmin();
    /// <summary>
    /// Returns true if this bounding box is open in the Xmax direction.
    /// </summary>
    bool IsOpenXmax();
    /// <summary>
    /// Returns true if this bounding box is open in the Ymin direction.
    /// </summary>
    bool IsOpenYmin();
    /// <summary>
    /// Returns true if this bounding box is open in the Ymax direction.
    /// </summary>
    bool IsOpenYmax();
    /// <summary>
    /// Returns true if this bounding box is infinite in all 4
    /// directions (Whole Space flag).
    /// </summary>
    bool IsWhole();
    /// <summary>
    /// Returns true if this 2D bounding box is empty (Void flag).
    /// </summary>
    bool IsVoid();
    /// <summary>
    /// Returns a bounding box which is the result of applying the
    /// transformation T to this bounding box.
    /// Warning
    /// Applying a geometric transformation (for example, a
    /// rotation) to a bounding box generally increases its
    /// dimensions. This is not optimal for algorithms which use it.
    /// </summary>
    Macad::Occt::Bnd_Box2d^ Transformed(Macad::Occt::Trsf2d T);
    /// <summary>
    /// Adds the 2d box <Other> to <me>.
    /// </summary>
    void Add(Macad::Occt::Bnd_Box2d^ Other);
    /// <summary>
    /// Adds the 2d point.
    /// </summary>
    void Add(Macad::Occt::Pnt2d thePnt);
    /// <summary>
    /// Extends bounding box from thePnt in the direction theDir.
    /// </summary>
    void Add(Macad::Occt::Pnt2d thePnt, Macad::Occt::Dir2d theDir);
    /// <summary>
    /// Extends the Box  in the given Direction, i.e. adds
    /// a half-line. The box may become infinite in 1 or 2
    /// directions.
    /// </summary>
    void Add(Macad::Occt::Dir2d D);
    /// <summary>
    /// Returns True if the 2d pnt <P> is out <me>.
    /// </summary>
    bool IsOut(Macad::Occt::Pnt2d P);
    /// <summary>
    /// Returns True if the line doesn't intersect the box.
    /// </summary>
    bool IsOut(Macad::Occt::gp_Lin2d^ theL);
    /// <summary>
    /// Returns True if the segment doesn't intersect the box.
    /// </summary>
    bool IsOut(Macad::Occt::Pnt2d theP0, Macad::Occt::Pnt2d theP1);
    /// <summary>
    /// Returns True if <Box2d> is out <me>.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_Box2d^ Other);
    /// <summary>
    /// Returns True if transformed <Box2d> is out <me>.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_Box2d^ theOther, Macad::Occt::Trsf2d theTrsf);
    /// <summary>
    /// Compares  a transformed  bounding with  a    transformed
    /// bounding. The default implementation is  to make a copy
    /// of <me> and <Other>, to transform them and to test.
    /// </summary>
    bool IsOut(Macad::Occt::Trsf2d T1, Macad::Occt::Bnd_Box2d^ Other, Macad::Occt::Trsf2d T2);
    void Dump();
    /// <summary>
    /// Computes the squared diagonal of me.
    /// </summary>
    double SquareExtent();
}; // class Bnd_Box2d

//---------------------------------------------------------------------
//  Class  Bnd_Sphere
//---------------------------------------------------------------------
/// <summary>
/// This class represents a bounding sphere of a geometric entity
/// (triangle, segment of line or whatever else).
/// </summary>
public ref class Bnd_Sphere sealed
    : public Macad::Occt::BaseClass<::Bnd_Sphere>
{

#ifdef Include_Bnd_Sphere_h
public:
    Include_Bnd_Sphere_h
#endif

public:
    Bnd_Sphere(::Bnd_Sphere* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Sphere>( nativeInstance, true )
    {}

    Bnd_Sphere(::Bnd_Sphere& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Sphere>( &nativeInstance, false )
    {}

    property ::Bnd_Sphere* NativeInstance
    {
        ::Bnd_Sphere* get()
        {
            return static_cast<::Bnd_Sphere*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    Bnd_Sphere();
    /// <summary>
    /// Constructor of a definite sphere
    /// </summary>
    Bnd_Sphere(Macad::Occt::XYZ theCntr, double theRad, int theU, int theV);
    /// <summary>
    /// Returns the U parameter on shape
    /// </summary>
    int U();
    /// <summary>
    /// Returns the V parameter on shape
    /// </summary>
    int V();
    /// <summary>
    /// Returns validity status, indicating that this
    /// sphere corresponds to a real entity
    /// </summary>
    bool IsValid();
    void SetValid(bool isValid);
    /// <summary>
    /// Returns center of sphere object
    /// </summary>
    Macad::Occt::XYZ Center();
    /// <summary>
    /// Returns the radius value
    /// </summary>
    double Radius();
    /// <summary>
    /// Calculate and return minimal and maximal distance to sphere.
    /// NOTE: This function is tightly optimized; any modifications
    /// may affect performance!
    /// </summary>
    void Distances(Macad::Occt::XYZ theXYZ, double% theMin, double% theMax);
    /// <summary>
    /// Calculate and return minimal and maximal distance to sphere.
    /// NOTE: This function is tightly optimized; any modifications
    /// may affect performance!
    /// </summary>
    void SquareDistances(Macad::Occt::XYZ theXYZ, double% theMin, double% theMax);
    /// <summary>
    /// Projects a point on entity.
    /// Returns true if success
    /// </summary>
    bool Project(Macad::Occt::XYZ theNode, Macad::Occt::XYZ% theProjNode, double% theDist, bool% theInside);
    double Distance(Macad::Occt::XYZ theNode);
    double SquareDistance(Macad::Occt::XYZ theNode);
    void Add(Macad::Occt::Bnd_Sphere^ theOther);
    bool IsOut(Macad::Occt::Bnd_Sphere^ theOther);
    bool IsOut(Macad::Occt::XYZ thePnt, double% theMaxDist);
    double SquareExtent();
}; // class Bnd_Sphere

//---------------------------------------------------------------------
//  Class  Bnd_B2d
//---------------------------------------------------------------------
public ref class Bnd_B2d sealed
    : public Macad::Occt::BaseClass<::Bnd_B2d>
{

#ifdef Include_Bnd_B2d_h
public:
    Include_Bnd_B2d_h
#endif

public:
    Bnd_B2d(::Bnd_B2d* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_B2d>( nativeInstance, true )
    {}

    Bnd_B2d(::Bnd_B2d& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_B2d>( &nativeInstance, false )
    {}

    property ::Bnd_B2d* NativeInstance
    {
        ::Bnd_B2d* get()
        {
            return static_cast<::Bnd_B2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Bnd_B2d();
    /// <summary>
    /// Constructor.
    /// </summary>
    Bnd_B2d(Macad::Occt::XY theCenter, Macad::Occt::XY theHSize);
    /// <summary>
    /// Returns True if the box is void (non-initialized).
    /// </summary>
    bool IsVoid();
    /// <summary>
    /// Reset the box data.
    /// </summary>
    void Clear();
    /// <summary>
    /// Update the box by a point.
    /// </summary>
    void Add(Macad::Occt::XY thePnt);
    /// <summary>
    /// Update the box by a point.
    /// </summary>
    void Add(Macad::Occt::Pnt2d thePnt);
    /// <summary>
    /// Update the box by another box.
    /// </summary>
    void Add(Macad::Occt::Bnd_B2d^ theBox);
    /// <summary>
    /// Query a box corner: (Center - HSize). You must make sure that
    /// the box is NOT VOID (see IsVoid()), otherwise the method returns
    /// irrelevant result.
    /// </summary>
    Macad::Occt::XY CornerMin();
    /// <summary>
    /// Query a box corner: (Center + HSize). You must make sure that
    /// the box is NOT VOID (see IsVoid()), otherwise the method returns
    /// irrelevant result.
    /// </summary>
    Macad::Occt::XY CornerMax();
    /// <summary>
    /// Query the square diagonal. If the box is VOID (see method IsVoid())
    /// then a very big real value is returned.
    /// </summary>
    double SquareExtent();
    /// <summary>
    /// Extend the Box by the absolute value of theDiff.
    /// </summary>
    void Enlarge(double theDiff);
    /// <summary>
    /// Limit the Box by the internals of theOtherBox.
    /// Returns True if the limitation takes place, otherwise False
    /// indicating that the boxes do not intersect.
    /// </summary>
    bool Limit(Macad::Occt::Bnd_B2d^ theOtherBox);
    /// <summary>
    /// Transform the bounding box with the given transformation.
    /// The resulting box will be larger if theTrsf contains rotation.
    /// </summary>
    Macad::Occt::Bnd_B2d^ Transformed(Macad::Occt::Trsf2d theTrsf);
    /// <summary>
    /// Check the given point for the inclusion in the Box.
    /// Returns True if the point is outside.
    /// </summary>
    bool IsOut(Macad::Occt::XY thePnt);
    /// <summary>
    /// Check a circle for the intersection with the current box.
    /// Returns True if there is no intersection between boxes.
    /// </summary>
    bool IsOut(Macad::Occt::XY theCenter, double theRadius, bool isCircleHollow);
    /// <summary>
    /// Check a circle for the intersection with the current box.
    /// Returns True if there is no intersection between boxes.
    /// </summary>
    bool IsOut(Macad::Occt::XY theCenter, double theRadius);
    /// <summary>
    /// Check the given box for the intersection with the current box.
    /// Returns True if there is no intersection between boxes.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_B2d^ theOtherBox);
    /// <summary>
    /// Check the given box oriented by the given transformation
    /// for the intersection with the current box.
    /// Returns True if there is no intersection between boxes.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_B2d^ theOtherBox, Macad::Occt::Trsf2d theTrsf);
    /// <summary>
    /// Check the given Line for the intersection with the current box.
    /// Returns True if there is no intersection.
    /// </summary>
    bool IsOut(Macad::Occt::Ax2d theLine);
    /// <summary>
    /// Check the Segment defined by the couple of input points
    /// for the intersection with the current box.
    /// Returns True if there is no intersection.
    /// </summary>
    bool IsOut(Macad::Occt::XY theP0, Macad::Occt::XY theP1);
    /// <summary>
    /// Check that the box 'this' is inside the given box 'theBox'. Returns
    /// True if 'this' box is fully inside 'theBox'.
    /// </summary>
    bool IsIn(Macad::Occt::Bnd_B2d^ theBox);
    /// <summary>
    /// Check that the box 'this' is inside the given box 'theBox'
    /// transformed by 'theTrsf'. Returns True if 'this' box is fully
    /// inside the transformed 'theBox'.
    /// </summary>
    bool IsIn(Macad::Occt::Bnd_B2d^ theBox, Macad::Occt::Trsf2d theTrsf);
    /// <summary>
    /// Set the Center coordinates
    /// </summary>
    void SetCenter(Macad::Occt::XY theCenter);
    /// <summary>
    /// Set the HSize (half-diagonal) coordinates.
    /// All components of theHSize must be non-negative.
    /// </summary>
    void SetHSize(Macad::Occt::XY theHSize);
}; // class Bnd_B2d

//---------------------------------------------------------------------
//  Class  Bnd_B2f
//---------------------------------------------------------------------
public ref class Bnd_B2f sealed
    : public Macad::Occt::BaseClass<::Bnd_B2f>
{

#ifdef Include_Bnd_B2f_h
public:
    Include_Bnd_B2f_h
#endif

public:
    Bnd_B2f(::Bnd_B2f* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_B2f>( nativeInstance, true )
    {}

    Bnd_B2f(::Bnd_B2f& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_B2f>( &nativeInstance, false )
    {}

    property ::Bnd_B2f* NativeInstance
    {
        ::Bnd_B2f* get()
        {
            return static_cast<::Bnd_B2f*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Bnd_B2f();
    /// <summary>
    /// Constructor.
    /// </summary>
    Bnd_B2f(Macad::Occt::XY theCenter, Macad::Occt::XY theHSize);
    /// <summary>
    /// Returns True if the box is void (non-initialized).
    /// </summary>
    bool IsVoid();
    /// <summary>
    /// Reset the box data.
    /// </summary>
    void Clear();
    /// <summary>
    /// Update the box by a point.
    /// </summary>
    void Add(Macad::Occt::XY thePnt);
    /// <summary>
    /// Update the box by a point.
    /// </summary>
    void Add(Macad::Occt::Pnt2d thePnt);
    /// <summary>
    /// Update the box by another box.
    /// </summary>
    void Add(Macad::Occt::Bnd_B2f^ theBox);
    /// <summary>
    /// Query a box corner: (Center - HSize). You must make sure that
    /// the box is NOT VOID (see IsVoid()), otherwise the method returns
    /// irrelevant result.
    /// </summary>
    Macad::Occt::XY CornerMin();
    /// <summary>
    /// Query a box corner: (Center + HSize). You must make sure that
    /// the box is NOT VOID (see IsVoid()), otherwise the method returns
    /// irrelevant result.
    /// </summary>
    Macad::Occt::XY CornerMax();
    /// <summary>
    /// Query the square diagonal. If the box is VOID (see method IsVoid())
    /// then a very big real value is returned.
    /// </summary>
    double SquareExtent();
    /// <summary>
    /// Extend the Box by the absolute value of theDiff.
    /// </summary>
    void Enlarge(double theDiff);
    /// <summary>
    /// Limit the Box by the internals of theOtherBox.
    /// Returns True if the limitation takes place, otherwise False
    /// indicating that the boxes do not intersect.
    /// </summary>
    bool Limit(Macad::Occt::Bnd_B2f^ theOtherBox);
    /// <summary>
    /// Transform the bounding box with the given transformation.
    /// The resulting box will be larger if theTrsf contains rotation.
    /// </summary>
    Macad::Occt::Bnd_B2f^ Transformed(Macad::Occt::Trsf2d theTrsf);
    /// <summary>
    /// Check the given point for the inclusion in the Box.
    /// Returns True if the point is outside.
    /// </summary>
    bool IsOut(Macad::Occt::XY thePnt);
    /// <summary>
    /// Check a circle for the intersection with the current box.
    /// Returns True if there is no intersection between boxes.
    /// </summary>
    bool IsOut(Macad::Occt::XY theCenter, double theRadius, bool isCircleHollow);
    /// <summary>
    /// Check a circle for the intersection with the current box.
    /// Returns True if there is no intersection between boxes.
    /// </summary>
    bool IsOut(Macad::Occt::XY theCenter, double theRadius);
    /// <summary>
    /// Check the given box for the intersection with the current box.
    /// Returns True if there is no intersection between boxes.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_B2f^ theOtherBox);
    /// <summary>
    /// Check the given box oriented by the given transformation
    /// for the intersection with the current box.
    /// Returns True if there is no intersection between boxes.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_B2f^ theOtherBox, Macad::Occt::Trsf2d theTrsf);
    /// <summary>
    /// Check the given Line for the intersection with the current box.
    /// Returns True if there is no intersection.
    /// </summary>
    bool IsOut(Macad::Occt::Ax2d theLine);
    /// <summary>
    /// Check the Segment defined by the couple of input points
    /// for the intersection with the current box.
    /// Returns True if there is no intersection.
    /// </summary>
    bool IsOut(Macad::Occt::XY theP0, Macad::Occt::XY theP1);
    /// <summary>
    /// Check that the box 'this' is inside the given box 'theBox'. Returns
    /// True if 'this' box is fully inside 'theBox'.
    /// </summary>
    bool IsIn(Macad::Occt::Bnd_B2f^ theBox);
    /// <summary>
    /// Check that the box 'this' is inside the given box 'theBox'
    /// transformed by 'theTrsf'. Returns True if 'this' box is fully
    /// inside the transformed 'theBox'.
    /// </summary>
    bool IsIn(Macad::Occt::Bnd_B2f^ theBox, Macad::Occt::Trsf2d theTrsf);
    /// <summary>
    /// Set the Center coordinates
    /// </summary>
    void SetCenter(Macad::Occt::XY theCenter);
    /// <summary>
    /// Set the HSize (half-diagonal) coordinates.
    /// All components of theHSize must be non-negative.
    /// </summary>
    void SetHSize(Macad::Occt::XY theHSize);
}; // class Bnd_B2f

//---------------------------------------------------------------------
//  Class  Bnd_B3d
//---------------------------------------------------------------------
public ref class Bnd_B3d sealed
    : public Macad::Occt::BaseClass<::Bnd_B3d>
{

#ifdef Include_Bnd_B3d_h
public:
    Include_Bnd_B3d_h
#endif

public:
    Bnd_B3d(::Bnd_B3d* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_B3d>( nativeInstance, true )
    {}

    Bnd_B3d(::Bnd_B3d& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_B3d>( &nativeInstance, false )
    {}

    property ::Bnd_B3d* NativeInstance
    {
        ::Bnd_B3d* get()
        {
            return static_cast<::Bnd_B3d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Bnd_B3d();
    /// <summary>
    /// Constructor.
    /// </summary>
    Bnd_B3d(Macad::Occt::XYZ theCenter, Macad::Occt::XYZ theHSize);
    /// <summary>
    /// Returns True if the box is void (non-initialized).
    /// </summary>
    bool IsVoid();
    /// <summary>
    /// Reset the box data.
    /// </summary>
    void Clear();
    /// <summary>
    /// Update the box by a point.
    /// </summary>
    void Add(Macad::Occt::XYZ thePnt);
    /// <summary>
    /// Update the box by a point.
    /// </summary>
    void Add(Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Update the box by another box.
    /// </summary>
    void Add(Macad::Occt::Bnd_B3d^ theBox);
    /// <summary>
    /// Query the lower corner: (Center - HSize). You must make sure that
    /// the box is NOT VOID (see IsVoid()), otherwise the method returns
    /// irrelevant result.
    /// </summary>
    Macad::Occt::XYZ CornerMin();
    /// <summary>
    /// Query the upper corner: (Center + HSize). You must make sure that
    /// the box is NOT VOID (see IsVoid()), otherwise the method returns
    /// irrelevant result.
    /// </summary>
    Macad::Occt::XYZ CornerMax();
    /// <summary>
    /// Query the square diagonal. If the box is VOID (see method IsVoid())
    /// then a very big real value is returned.
    /// </summary>
    double SquareExtent();
    /// <summary>
    /// Extend the Box by the absolute value of theDiff.
    /// </summary>
    void Enlarge(double theDiff);
    /// <summary>
    /// Limit the Box by the internals of theOtherBox.
    /// Returns True if the limitation takes place, otherwise False
    /// indicating that the boxes do not intersect.
    /// </summary>
    bool Limit(Macad::Occt::Bnd_B3d^ theOtherBox);
    /// <summary>
    /// Transform the bounding box with the given transformation.
    /// The resulting box will be larger if theTrsf contains rotation.
    /// </summary>
    Macad::Occt::Bnd_B3d^ Transformed(Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Check the given point for the inclusion in the Box.
    /// Returns True if the point is outside.
    /// </summary>
    bool IsOut(Macad::Occt::XYZ thePnt);
    /// <summary>
    /// Check a sphere for the intersection with the current box.
    /// Returns True if there is no intersection between boxes. If the
    /// parameter 'IsSphereHollow' is True, then the intersection is not
    /// reported for a box that is completely inside the sphere (otherwise
    /// this method would report an intersection).
    /// </summary>
    bool IsOut(Macad::Occt::XYZ theCenter, double theRadius, bool isSphereHollow);
    /// <summary>
    /// Check a sphere for the intersection with the current box.
    /// Returns True if there is no intersection between boxes. If the
    /// parameter 'IsSphereHollow' is True, then the intersection is not
    /// reported for a box that is completely inside the sphere (otherwise
    /// this method would report an intersection).
    /// </summary>
    bool IsOut(Macad::Occt::XYZ theCenter, double theRadius);
    /// <summary>
    /// Check the given box for the intersection with the current box.
    /// Returns True if there is no intersection between boxes.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_B3d^ theOtherBox);
    /// <summary>
    /// Check the given box oriented by the given transformation
    /// for the intersection with the current box.
    /// Returns True if there is no intersection between boxes.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_B3d^ theOtherBox, Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Check the given Line for the intersection with the current box.
    /// Returns True if there is no intersection.
    /// isRay==True means intersection check with the positive half-line
    /// theOverthickness is the addition to the size of the current box
    /// (may be negative). If positive, it can be treated as the thickness
    /// of the line 'theLine' or the radius of the cylinder along 'theLine'
    /// </summary>
    bool IsOut(Macad::Occt::Ax1 theLine, bool isRay, double theOverthickness);
    /// <summary>
    /// Check the given Line for the intersection with the current box.
    /// Returns True if there is no intersection.
    /// isRay==True means intersection check with the positive half-line
    /// theOverthickness is the addition to the size of the current box
    /// (may be negative). If positive, it can be treated as the thickness
    /// of the line 'theLine' or the radius of the cylinder along 'theLine'
    /// </summary>
    bool IsOut(Macad::Occt::Ax1 theLine, bool isRay);
    /// <summary>
    /// Check the given Line for the intersection with the current box.
    /// Returns True if there is no intersection.
    /// isRay==True means intersection check with the positive half-line
    /// theOverthickness is the addition to the size of the current box
    /// (may be negative). If positive, it can be treated as the thickness
    /// of the line 'theLine' or the radius of the cylinder along 'theLine'
    /// </summary>
    bool IsOut(Macad::Occt::Ax1 theLine);
    /// <summary>
    /// Check the given Plane for the intersection with the current box.
    /// Returns True if there is no intersection.
    /// </summary>
    bool IsOut(Macad::Occt::Ax3 thePlane);
    /// <summary>
    /// Check that the box 'this' is inside the given box 'theBox'. Returns
    /// True if 'this' box is fully inside 'theBox'.
    /// </summary>
    bool IsIn(Macad::Occt::Bnd_B3d^ theBox);
    /// <summary>
    /// Check that the box 'this' is inside the given box 'theBox'
    /// transformed by 'theTrsf'. Returns True if 'this' box is fully
    /// inside the transformed 'theBox'.
    /// </summary>
    bool IsIn(Macad::Occt::Bnd_B3d^ theBox, Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Set the Center coordinates
    /// </summary>
    void SetCenter(Macad::Occt::XYZ theCenter);
    /// <summary>
    /// Set the HSize (half-diagonal) coordinates.
    /// All components of theHSize must be non-negative.
    /// </summary>
    void SetHSize(Macad::Occt::XYZ theHSize);
}; // class Bnd_B3d

//---------------------------------------------------------------------
//  Class  Bnd_B3f
//---------------------------------------------------------------------
public ref class Bnd_B3f sealed
    : public Macad::Occt::BaseClass<::Bnd_B3f>
{

#ifdef Include_Bnd_B3f_h
public:
    Include_Bnd_B3f_h
#endif

public:
    Bnd_B3f(::Bnd_B3f* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_B3f>( nativeInstance, true )
    {}

    Bnd_B3f(::Bnd_B3f& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_B3f>( &nativeInstance, false )
    {}

    property ::Bnd_B3f* NativeInstance
    {
        ::Bnd_B3f* get()
        {
            return static_cast<::Bnd_B3f*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Bnd_B3f();
    /// <summary>
    /// Constructor.
    /// </summary>
    Bnd_B3f(Macad::Occt::XYZ theCenter, Macad::Occt::XYZ theHSize);
    /// <summary>
    /// Returns True if the box is void (non-initialized).
    /// </summary>
    bool IsVoid();
    /// <summary>
    /// Reset the box data.
    /// </summary>
    void Clear();
    /// <summary>
    /// Update the box by a point.
    /// </summary>
    void Add(Macad::Occt::XYZ thePnt);
    /// <summary>
    /// Update the box by a point.
    /// </summary>
    void Add(Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Update the box by another box.
    /// </summary>
    void Add(Macad::Occt::Bnd_B3f^ theBox);
    /// <summary>
    /// Query the lower corner: (Center - HSize). You must make sure that
    /// the box is NOT VOID (see IsVoid()), otherwise the method returns
    /// irrelevant result.
    /// </summary>
    Macad::Occt::XYZ CornerMin();
    /// <summary>
    /// Query the upper corner: (Center + HSize). You must make sure that
    /// the box is NOT VOID (see IsVoid()), otherwise the method returns
    /// irrelevant result.
    /// </summary>
    Macad::Occt::XYZ CornerMax();
    /// <summary>
    /// Query the square diagonal. If the box is VOID (see method IsVoid())
    /// then a very big real value is returned.
    /// </summary>
    double SquareExtent();
    /// <summary>
    /// Extend the Box by the absolute value of theDiff.
    /// </summary>
    void Enlarge(double theDiff);
    /// <summary>
    /// Limit the Box by the internals of theOtherBox.
    /// Returns True if the limitation takes place, otherwise False
    /// indicating that the boxes do not intersect.
    /// </summary>
    bool Limit(Macad::Occt::Bnd_B3f^ theOtherBox);
    /// <summary>
    /// Transform the bounding box with the given transformation.
    /// The resulting box will be larger if theTrsf contains rotation.
    /// </summary>
    Macad::Occt::Bnd_B3f^ Transformed(Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Check the given point for the inclusion in the Box.
    /// Returns True if the point is outside.
    /// </summary>
    bool IsOut(Macad::Occt::XYZ thePnt);
    /// <summary>
    /// Check a sphere for the intersection with the current box.
    /// Returns True if there is no intersection between boxes. If the
    /// parameter 'IsSphereHollow' is True, then the intersection is not
    /// reported for a box that is completely inside the sphere (otherwise
    /// this method would report an intersection).
    /// </summary>
    bool IsOut(Macad::Occt::XYZ theCenter, double theRadius, bool isSphereHollow);
    /// <summary>
    /// Check a sphere for the intersection with the current box.
    /// Returns True if there is no intersection between boxes. If the
    /// parameter 'IsSphereHollow' is True, then the intersection is not
    /// reported for a box that is completely inside the sphere (otherwise
    /// this method would report an intersection).
    /// </summary>
    bool IsOut(Macad::Occt::XYZ theCenter, double theRadius);
    /// <summary>
    /// Check the given box for the intersection with the current box.
    /// Returns True if there is no intersection between boxes.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_B3f^ theOtherBox);
    /// <summary>
    /// Check the given box oriented by the given transformation
    /// for the intersection with the current box.
    /// Returns True if there is no intersection between boxes.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_B3f^ theOtherBox, Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Check the given Line for the intersection with the current box.
    /// Returns True if there is no intersection.
    /// isRay==True means intersection check with the positive half-line
    /// theOverthickness is the addition to the size of the current box
    /// (may be negative). If positive, it can be treated as the thickness
    /// of the line 'theLine' or the radius of the cylinder along 'theLine'
    /// </summary>
    bool IsOut(Macad::Occt::Ax1 theLine, bool isRay, double theOverthickness);
    /// <summary>
    /// Check the given Line for the intersection with the current box.
    /// Returns True if there is no intersection.
    /// isRay==True means intersection check with the positive half-line
    /// theOverthickness is the addition to the size of the current box
    /// (may be negative). If positive, it can be treated as the thickness
    /// of the line 'theLine' or the radius of the cylinder along 'theLine'
    /// </summary>
    bool IsOut(Macad::Occt::Ax1 theLine, bool isRay);
    /// <summary>
    /// Check the given Line for the intersection with the current box.
    /// Returns True if there is no intersection.
    /// isRay==True means intersection check with the positive half-line
    /// theOverthickness is the addition to the size of the current box
    /// (may be negative). If positive, it can be treated as the thickness
    /// of the line 'theLine' or the radius of the cylinder along 'theLine'
    /// </summary>
    bool IsOut(Macad::Occt::Ax1 theLine);
    /// <summary>
    /// Check the given Plane for the intersection with the current box.
    /// Returns True if there is no intersection.
    /// </summary>
    bool IsOut(Macad::Occt::Ax3 thePlane);
    /// <summary>
    /// Check that the box 'this' is inside the given box 'theBox'. Returns
    /// True if 'this' box is fully inside 'theBox'.
    /// </summary>
    bool IsIn(Macad::Occt::Bnd_B3f^ theBox);
    /// <summary>
    /// Check that the box 'this' is inside the given box 'theBox'
    /// transformed by 'theTrsf'. Returns True if 'this' box is fully
    /// inside the transformed 'theBox'.
    /// </summary>
    bool IsIn(Macad::Occt::Bnd_B3f^ theBox, Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Set the Center coordinates
    /// </summary>
    void SetCenter(Macad::Occt::XYZ theCenter);
    /// <summary>
    /// Set the HSize (half-diagonal) coordinates.
    /// All components of theHSize must be non-negative.
    /// </summary>
    void SetHSize(Macad::Occt::XYZ theHSize);
}; // class Bnd_B3f

//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox
//---------------------------------------------------------------------
public ref class Bnd_HArray1OfBox sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Bnd_Box^>
{

#ifdef Include_Bnd_HArray1OfBox_h
public:
    Include_Bnd_HArray1OfBox_h
#endif

public:
    Bnd_HArray1OfBox(::Bnd_HArray1OfBox* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Bnd_HArray1OfBox(::Bnd_HArray1OfBox& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Bnd_HArray1OfBox* NativeInstance
    {
        ::Bnd_HArray1OfBox* get()
        {
            return static_cast<::Bnd_HArray1OfBox*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Bnd_HArray1OfBox::Iterator>
    {

#ifdef Include_Bnd_HArray1OfBox_Iterator_h
    public:
        Include_Bnd_HArray1OfBox_Iterator_h
#endif

    public:
        Iterator(::Bnd_HArray1OfBox::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_HArray1OfBox::Iterator>( nativeInstance, true )
        {}

        Iterator(::Bnd_HArray1OfBox::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_HArray1OfBox::Iterator>( &nativeInstance, false )
        {}

        property ::Bnd_HArray1OfBox::Iterator* NativeInstance
        {
            ::Bnd_HArray1OfBox::Iterator* get()
            {
                return static_cast<::Bnd_HArray1OfBox::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Bnd_HArray1OfBox();
    Bnd_HArray1OfBox(int theLower, int theUpper);
    Bnd_HArray1OfBox(int theLower, int theUpper, Macad::Occt::Bnd_Box^ theValue);
    Bnd_HArray1OfBox(Macad::Occt::Bnd_Box^ theBegin, int theLower, int theUpper, bool parameter1);
    Bnd_HArray1OfBox(Macad::Occt::Bnd_Array1OfBox^ theOther);
    Macad::Occt::Bnd_Array1OfBox^ Array1();
    Macad::Occt::Bnd_Array1OfBox^ ChangeArray1();
    void Init(Macad::Occt::Bnd_Box^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Bnd_HArray1OfBox^ Assign(Macad::Occt::Bnd_HArray1OfBox^ theOther);
    Macad::Occt::Bnd_HArray1OfBox^ Move(Macad::Occt::Bnd_HArray1OfBox^ theOther);
    Macad::Occt::Bnd_Box^ First();
    Macad::Occt::Bnd_Box^ ChangeFirst();
    Macad::Occt::Bnd_Box^ Last();
    Macad::Occt::Bnd_Box^ ChangeLast();
    virtual Macad::Occt::Bnd_Box^ Value(int theIndex);
    Macad::Occt::Bnd_Box^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Bnd_Box^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::Bnd_HArray1OfBox^ CreateDowncasted(::Bnd_HArray1OfBox* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Box^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Bnd_HArray1OfBox

//---------------------------------------------------------------------
//  Class  Bnd_BoundSortBox
//---------------------------------------------------------------------
/// <summary>
/// A tool to compare a bounding box or a plane with a set of
/// bounding boxes. It sorts the set of bounding boxes to give
/// the list of boxes which intersect the element being compared.
/// The boxes being sorted generally bound a set of shapes,
/// while the box being compared bounds a shape to be
/// compared. The resulting list of intersecting boxes therefore
/// gives the list of items which potentially intersect the shape to be compared.
/// </summary>
public ref class Bnd_BoundSortBox sealed
    : public Macad::Occt::BaseClass<::Bnd_BoundSortBox>
{

#ifdef Include_Bnd_BoundSortBox_h
public:
    Include_Bnd_BoundSortBox_h
#endif

public:
    Bnd_BoundSortBox(::Bnd_BoundSortBox* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_BoundSortBox>( nativeInstance, true )
    {}

    Bnd_BoundSortBox(::Bnd_BoundSortBox& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_BoundSortBox>( &nativeInstance, false )
    {}

    property ::Bnd_BoundSortBox* NativeInstance
    {
        ::Bnd_BoundSortBox* get()
        {
            return static_cast<::Bnd_BoundSortBox*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty comparison algorithm for bounding boxes.
    /// The bounding boxes are then defined using the Initialize function.
    /// </summary>
    Bnd_BoundSortBox();
    /// <summary>
    /// Initializes this comparison algorithm with
    /// -   the set of bounding boxes SetOfBox.
    /// </summary>
    void Initialize(Macad::Occt::Bnd_Box^ CompleteBox, Macad::Occt::Bnd_HArray1OfBox^ SetOfBox);
    /// <summary>
    /// Initializes this comparison algorithm with
    /// -   the set of bounding boxes SetOfBox, where
    /// CompleteBox is given as the global bounding box of SetOfBox.
    /// </summary>
    void Initialize(Macad::Occt::Bnd_HArray1OfBox^ SetOfBox);
    /// <summary>
    /// Initializes this comparison algorithm, giving it only
    /// -   the maximum number nbComponents
    /// of the bounding boxes to be managed. Use the Add
    /// function to define the array of bounding boxes to be sorted by this algorithm.
    /// </summary>
    void Initialize(Macad::Occt::Bnd_Box^ CompleteBox, int nbComponents);
    /// <summary>
    /// Adds the bounding box theBox at position boxIndex in
    /// the array of boxes to be sorted by this comparison algorithm.
    /// This function is used only in conjunction with the third
    /// syntax described in the synopsis of Initialize.
    /// 
    /// Exceptions:
    /// 
    /// - Standard_OutOfRange if boxIndex is not in the
    /// range [ 1,nbComponents ] where
    /// nbComponents is the maximum number of bounding
    /// boxes declared for this comparison algorithm at
    /// initialization.
    /// 
    /// - Standard_MultiplyDefined if a box already exists at
    /// position boxIndex in the array of boxes to be sorted by
    /// this comparison algorithm.
    /// </summary>
    void Add(Macad::Occt::Bnd_Box^ theBox, int boxIndex);
    /// <summary>
    /// Compares the bounding box theBox,
    /// with the set of bounding boxes to be sorted by this
    /// comparison algorithm, and returns the list of intersecting
    /// bounding boxes as a list of indexes on the array of
    /// bounding boxes used by this algorithm.
    /// </summary>
    Macad::Occt::TColStd_ListOfInteger^ Compare(Macad::Occt::Bnd_Box^ theBox);
    /// <summary>
    /// Compares the plane P
    /// with the set of bounding boxes to be sorted by this
    /// comparison algorithm, and returns the list of intersecting
    /// bounding boxes as a list of indexes on the array of
    /// bounding boxes used by this algorithm.
    /// </summary>
    Macad::Occt::TColStd_ListOfInteger^ Compare(Macad::Occt::Pln P);
    void Dump();
    void Destroy();
}; // class Bnd_BoundSortBox

//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox2d
//---------------------------------------------------------------------
public ref class Bnd_HArray1OfBox2d sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Bnd_Box2d^>
{

#ifdef Include_Bnd_HArray1OfBox2d_h
public:
    Include_Bnd_HArray1OfBox2d_h
#endif

public:
    Bnd_HArray1OfBox2d(::Bnd_HArray1OfBox2d* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Bnd_HArray1OfBox2d(::Bnd_HArray1OfBox2d& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Bnd_HArray1OfBox2d* NativeInstance
    {
        ::Bnd_HArray1OfBox2d* get()
        {
            return static_cast<::Bnd_HArray1OfBox2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Bnd_HArray1OfBox2d::Iterator>
    {

#ifdef Include_Bnd_HArray1OfBox2d_Iterator_h
    public:
        Include_Bnd_HArray1OfBox2d_Iterator_h
#endif

    public:
        Iterator(::Bnd_HArray1OfBox2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_HArray1OfBox2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::Bnd_HArray1OfBox2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_HArray1OfBox2d::Iterator>( &nativeInstance, false )
        {}

        property ::Bnd_HArray1OfBox2d::Iterator* NativeInstance
        {
            ::Bnd_HArray1OfBox2d::Iterator* get()
            {
                return static_cast<::Bnd_HArray1OfBox2d::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Bnd_HArray1OfBox2d();
    Bnd_HArray1OfBox2d(int theLower, int theUpper);
    Bnd_HArray1OfBox2d(int theLower, int theUpper, Macad::Occt::Bnd_Box2d^ theValue);
    Bnd_HArray1OfBox2d(Macad::Occt::Bnd_Box2d^ theBegin, int theLower, int theUpper, bool parameter1);
    Bnd_HArray1OfBox2d(Macad::Occt::Bnd_Array1OfBox2d^ theOther);
    Macad::Occt::Bnd_Array1OfBox2d^ Array1();
    Macad::Occt::Bnd_Array1OfBox2d^ ChangeArray1();
    void Init(Macad::Occt::Bnd_Box2d^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Bnd_HArray1OfBox2d^ Assign(Macad::Occt::Bnd_HArray1OfBox2d^ theOther);
    Macad::Occt::Bnd_HArray1OfBox2d^ Move(Macad::Occt::Bnd_HArray1OfBox2d^ theOther);
    Macad::Occt::Bnd_Box2d^ First();
    Macad::Occt::Bnd_Box2d^ ChangeFirst();
    Macad::Occt::Bnd_Box2d^ Last();
    Macad::Occt::Bnd_Box2d^ ChangeLast();
    virtual Macad::Occt::Bnd_Box2d^ Value(int theIndex);
    Macad::Occt::Bnd_Box2d^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Bnd_Box2d^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::Bnd_HArray1OfBox2d^ CreateDowncasted(::Bnd_HArray1OfBox2d* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Box2d^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Bnd_HArray1OfBox2d

//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfSphere
//---------------------------------------------------------------------
public ref class Bnd_HArray1OfSphere sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Bnd_Sphere^>
{

#ifdef Include_Bnd_HArray1OfSphere_h
public:
    Include_Bnd_HArray1OfSphere_h
#endif

public:
    Bnd_HArray1OfSphere(::Bnd_HArray1OfSphere* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Bnd_HArray1OfSphere(::Bnd_HArray1OfSphere& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Bnd_HArray1OfSphere* NativeInstance
    {
        ::Bnd_HArray1OfSphere* get()
        {
            return static_cast<::Bnd_HArray1OfSphere*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Bnd_HArray1OfSphere::Iterator>
    {

#ifdef Include_Bnd_HArray1OfSphere_Iterator_h
    public:
        Include_Bnd_HArray1OfSphere_Iterator_h
#endif

    public:
        Iterator(::Bnd_HArray1OfSphere::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_HArray1OfSphere::Iterator>( nativeInstance, true )
        {}

        Iterator(::Bnd_HArray1OfSphere::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Bnd_HArray1OfSphere::Iterator>( &nativeInstance, false )
        {}

        property ::Bnd_HArray1OfSphere::Iterator* NativeInstance
        {
            ::Bnd_HArray1OfSphere::Iterator* get()
            {
                return static_cast<::Bnd_HArray1OfSphere::Iterator*>(_NativeInstance);
            }
        }

    public:
    }; // class Iterator

    Bnd_HArray1OfSphere();
    Bnd_HArray1OfSphere(int theLower, int theUpper);
    Bnd_HArray1OfSphere(int theLower, int theUpper, Macad::Occt::Bnd_Sphere^ theValue);
    Bnd_HArray1OfSphere(Macad::Occt::Bnd_Sphere^ theBegin, int theLower, int theUpper, bool parameter1);
    Bnd_HArray1OfSphere(Macad::Occt::Bnd_Array1OfSphere^ theOther);
    Macad::Occt::Bnd_Array1OfSphere^ Array1();
    Macad::Occt::Bnd_Array1OfSphere^ ChangeArray1();
    void Init(Macad::Occt::Bnd_Sphere^ theValue);
    int Size();
    int Length();
    bool IsEmpty();
    int Lower();
    int Upper();
    Macad::Occt::Bnd_HArray1OfSphere^ Assign(Macad::Occt::Bnd_HArray1OfSphere^ theOther);
    Macad::Occt::Bnd_HArray1OfSphere^ Move(Macad::Occt::Bnd_HArray1OfSphere^ theOther);
    Macad::Occt::Bnd_Sphere^ First();
    Macad::Occt::Bnd_Sphere^ ChangeFirst();
    Macad::Occt::Bnd_Sphere^ Last();
    Macad::Occt::Bnd_Sphere^ ChangeLast();
    virtual Macad::Occt::Bnd_Sphere^ Value(int theIndex);
    Macad::Occt::Bnd_Sphere^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Bnd_Sphere^ theItem);
    void UpdateLowerBound(int theLower);
    void UpdateUpperBound(int theUpper);
    void Resize(int theLower, int theUpper, bool theToCopyData);
    bool IsDeletable();
    static Macad::Occt::Bnd_HArray1OfSphere^ CreateDowncasted(::Bnd_HArray1OfSphere* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Bnd_Sphere^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Bnd_HArray1OfSphere

//---------------------------------------------------------------------
//  Class  Bnd_OBB
//---------------------------------------------------------------------
/// <summary>
/// The class describes the Oriented Bounding Box (OBB),
/// much tighter enclosing volume for the shape than the
/// Axis Aligned Bounding Box (AABB).
/// The OBB is defined by a center of the box, the axes and the halves
/// of its three dimensions.
/// The OBB can be used more effectively than AABB as a rejection mechanism
/// for non-interfering objects.
/// </summary>
public ref class Bnd_OBB sealed
    : public Macad::Occt::BaseClass<::Bnd_OBB>
{

#ifdef Include_Bnd_OBB_h
public:
    Include_Bnd_OBB_h
#endif

public:
    Bnd_OBB(::Bnd_OBB* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_OBB>( nativeInstance, true )
    {}

    Bnd_OBB(::Bnd_OBB& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_OBB>( &nativeInstance, false )
    {}

    property ::Bnd_OBB* NativeInstance
    {
        ::Bnd_OBB* get()
        {
            return static_cast<::Bnd_OBB*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    Bnd_OBB();
    /// <summary>
    /// Constructor taking all defining parameters
    /// </summary>
    Bnd_OBB(Macad::Occt::Pnt theCenter, Macad::Occt::Dir theXDirection, Macad::Occt::Dir theYDirection, Macad::Occt::Dir theZDirection, double theHXSize, double theHYSize, double theHZSize);
    /// <summary>
    /// Constructor to create OBB from AABB.
    /// </summary>
    Bnd_OBB(Macad::Occt::Bnd_Box^ theBox);
    /// <summary>
    /// Creates new OBB covering every point in theListOfPoints.
    /// Tolerance of every such point is set by *theListOfTolerances array.
    /// If this array is not void (not null-pointer) then the resulted Bnd_OBB
    /// will be enlarged using tolerances of points lying on the box surface.
    /// <theIsOptimal> flag defines the mode in which the OBB will be built.
    /// Constructing Optimal box takes more time, but the resulting box is usually
    /// more tight. In case of construction of Optimal OBB more possible
    /// axes are checked.
    /// </summary>
    void ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints, Macad::Occt::TColStd_Array1OfReal^ theListOfTolerances, bool theIsOptimal);
    /// <summary>
    /// Creates new OBB covering every point in theListOfPoints.
    /// Tolerance of every such point is set by *theListOfTolerances array.
    /// If this array is not void (not null-pointer) then the resulted Bnd_OBB
    /// will be enlarged using tolerances of points lying on the box surface.
    /// <theIsOptimal> flag defines the mode in which the OBB will be built.
    /// Constructing Optimal box takes more time, but the resulting box is usually
    /// more tight. In case of construction of Optimal OBB more possible
    /// axes are checked.
    /// </summary>
    void ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints, Macad::Occt::TColStd_Array1OfReal^ theListOfTolerances);
    /// <summary>
    /// Creates new OBB covering every point in theListOfPoints.
    /// Tolerance of every such point is set by *theListOfTolerances array.
    /// If this array is not void (not null-pointer) then the resulted Bnd_OBB
    /// will be enlarged using tolerances of points lying on the box surface.
    /// <theIsOptimal> flag defines the mode in which the OBB will be built.
    /// Constructing Optimal box takes more time, but the resulting box is usually
    /// more tight. In case of construction of Optimal OBB more possible
    /// axes are checked.
    /// </summary>
    void ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints);
    /// <summary>
    /// Sets the center of OBB
    /// </summary>
    void SetCenter(Macad::Occt::Pnt theCenter);
    /// <summary>
    /// Sets the X component of OBB - direction and size
    /// </summary>
    void SetXComponent(Macad::Occt::Dir theXDirection, double theHXSize);
    /// <summary>
    /// Sets the Y component of OBB - direction and size
    /// </summary>
    void SetYComponent(Macad::Occt::Dir theYDirection, double theHYSize);
    /// <summary>
    /// Sets the Z component of OBB - direction and size
    /// </summary>
    void SetZComponent(Macad::Occt::Dir theZDirection, double theHZSize);
    /// <summary>
    /// Returns the local coordinates system of this oriented box.
    /// So that applying it to axis-aligned box ((-XHSize, -YHSize, -ZHSize), (XHSize, YHSize,
    /// ZHSize)) will produce this oriented box.
    /// </summary>
    /// @code
    /// gp_Trsf aLoc;
    /// aLoc.SetTransformation (theOBB.Position(), gp::XOY());
    /// @endcode
    Macad::Occt::Ax3 Position();
    /// <summary>
    /// Returns the center of OBB
    /// </summary>
    Macad::Occt::XYZ Center();
    /// <summary>
    /// Returns the X Direction of OBB
    /// </summary>
    Macad::Occt::XYZ XDirection();
    /// <summary>
    /// Returns the Y Direction of OBB
    /// </summary>
    Macad::Occt::XYZ YDirection();
    /// <summary>
    /// Returns the Z Direction of OBB
    /// </summary>
    Macad::Occt::XYZ ZDirection();
    /// <summary>
    /// Returns the X Dimension of OBB
    /// </summary>
    double XHSize();
    /// <summary>
    /// Returns the Y Dimension of OBB
    /// </summary>
    double YHSize();
    /// <summary>
    /// Returns the Z Dimension of OBB
    /// </summary>
    double ZHSize();
    /// <summary>
    /// Checks if the box is empty.
    /// </summary>
    bool IsVoid();
    /// <summary>
    /// Clears this box
    /// </summary>
    void SetVoid();
    /// <summary>
    /// Sets the flag for axes aligned box
    /// </summary>
    void SetAABox(bool theFlag);
    /// <summary>
    /// Returns TRUE if the box is axes aligned
    /// </summary>
    bool IsAABox();
    /// <summary>
    /// Enlarges the box with the given value
    /// </summary>
    void Enlarge(double theGapAdd);
    /// <summary>
    /// Returns the array of vertices in <this>.
    /// The local coordinate of the vertex depending on the
    /// index of the array are follow:
    /// Index == 0: (-XHSize(), -YHSize(), -ZHSize())
    /// Index == 1: ( XHSize(), -YHSize(), -ZHSize())
    /// Index == 2: (-XHSize(),  YHSize(), -ZHSize())
    /// Index == 3: ( XHSize(),  YHSize(), -ZHSize())
    /// Index == 4: (-XHSize(), -YHSize(),  ZHSize())
    /// Index == 5: ( XHSize(), -YHSize(),  ZHSize())
    /// Index == 6: (-XHSize(),  YHSize(),  ZHSize())
    /// Index == 7: ( XHSize(),  YHSize(),  ZHSize()).
    /// </summary>
    bool GetVertex(Macad::Occt::Pnt theP);
    /// <summary>
    /// Returns square diagonal of this box
    /// </summary>
    double SquareExtent();
    /// <summary>
    /// Check if the box do not interfere the other box.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_OBB^ theOther);
    /// <summary>
    /// Check if the point is inside of <this>.
    /// </summary>
    bool IsOut(Macad::Occt::Pnt theP);
    /// <summary>
    /// Check if the theOther is completely inside *this.
    /// </summary>
    bool IsCompletelyInside(Macad::Occt::Bnd_OBB^ theOther);
    /// <summary>
    /// Rebuilds this in order to include all previous objects
    /// (which it was created from) and theOther.
    /// </summary>
    void Add(Macad::Occt::Bnd_OBB^ theOther);
    /// <summary>
    /// Rebuilds this in order to include all previous objects
    /// (which it was created from) and theP.
    /// </summary>
    void Add(Macad::Occt::Pnt theP);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Bnd_OBB

//---------------------------------------------------------------------
//  Class  Bnd_Range
//---------------------------------------------------------------------
/// <summary>
/// This class describes a range in 1D space restricted
/// by two real values.
/// A range can be void indicating there is no point included in the range.
/// </summary>
public ref class Bnd_Range sealed
    : public Macad::Occt::BaseClass<::Bnd_Range>
{

#ifdef Include_Bnd_Range_h
public:
    Include_Bnd_Range_h
#endif

public:
    Bnd_Range(::Bnd_Range* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Range>( nativeInstance, true )
    {}

    Bnd_Range(::Bnd_Range& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Range>( &nativeInstance, false )
    {}

    property ::Bnd_Range* NativeInstance
    {
        ::Bnd_Range* get()
        {
            return static_cast<::Bnd_Range*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Default constructor. Creates VOID range.
    /// </summary>
    Bnd_Range();
    /// <summary>
    /// Constructor. Never creates VOID range.
    /// </summary>
    Bnd_Range(double theMin, double theMax);
    /// <summary>
    /// Replaces <this> with common-part of <this> and theOther
    /// </summary>
    void Common(Macad::Occt::Bnd_Range^ theOther);
    /// <summary>
    /// Joins *this and theOther to one interval.
    /// Replaces *this to the result.
    /// Returns false if the operation cannot be done (e.g.
    /// input arguments are empty or separated).
    /// </summary>
    /// @sa use method ::Add() to merge two ranges unconditionally
    bool Union(Macad::Occt::Bnd_Range^ theOther);
    /* Method skipped due to unknown mapping: void Split(double theVal, NCollection_List<Bnd_Range> theList, double thePeriod, ) */
    /* Method skipped due to unknown mapping: void Split(double theVal, NCollection_List<Bnd_Range> theList, double thePeriod, ) */
    /// <summary>
    /// Checks if <this> intersects values like
    /// theVal+k*thePeriod, where k is an integer number (k = 0, +/-1, +/-2, ...).
    /// Returns:
    /// 0 - if <this> does not intersect the theVal+k*thePeriod.
    /// 1 - if <this> intersects theVal+k*thePeriod.
    /// 2 - if myFirst or/and myLast are equal to theVal+k*thePeriod.
    /// 
    /// ATTENTION!!!
    /// If (myFirst == myLast) then this function will return only either 0 or 2.
    /// </summary>
    int IsIntersected(double theVal, double thePeriod);
    /// <summary>
    /// Checks if <this> intersects values like
    /// theVal+k*thePeriod, where k is an integer number (k = 0, +/-1, +/-2, ...).
    /// Returns:
    /// 0 - if <this> does not intersect the theVal+k*thePeriod.
    /// 1 - if <this> intersects theVal+k*thePeriod.
    /// 2 - if myFirst or/and myLast are equal to theVal+k*thePeriod.
    /// 
    /// ATTENTION!!!
    /// If (myFirst == myLast) then this function will return only either 0 or 2.
    /// </summary>
    int IsIntersected(double theVal);
    /// <summary>
    /// Extends <this> to include theParameter
    /// </summary>
    void Add(double theParameter);
    /// <summary>
    /// Extends this range to include both ranges.
    /// </summary>
    /// @sa use method ::Union() to check if two ranges overlap method merging
    void Add(Macad::Occt::Bnd_Range^ theRange);
    /// <summary>
    /// Obtain MIN boundary of <this>.
    /// If <this> is VOID the method returns false.
    /// </summary>
    bool GetMin(double% thePar);
    /// <summary>
    /// Obtain MAX boundary of <this>.
    /// If <this> is VOID the method returns false.
    /// </summary>
    bool GetMax(double% thePar);
    /// <summary>
    /// Obtain first and last boundary of <this>.
    /// If <this> is VOID the method returns false.
    /// </summary>
    bool GetBounds(double% theFirstPar, double% theLastPar);
    /// <summary>
    /// Obtain theParameter satisfied to the equation
    /// (theParameter-MIN)/(MAX-MIN) == theLambda.
    /// *  theLambda == 0 --> MIN boundary will be returned;
    /// *  theLambda == 0.5 --> Middle point will be returned;
    /// *  theLambda == 1 --> MAX boundary will be returned;
    /// *  theLambda < 0 --> the value less than MIN will be returned;
    /// *  theLambda > 1 --> the value greater than MAX will be returned.
    /// If <this> is VOID the method returns false.
    /// </summary>
    bool GetIntermediatePoint(double theLambda, double% theParameter);
    /// <summary>
    /// Returns range value (MAX-MIN). Returns negative value for VOID range.
    /// </summary>
    double Delta();
    /// <summary>
    /// Is <this> initialized.
    /// </summary>
    bool IsVoid();
    /// <summary>
    /// Initializes <this> by default parameters. Makes <this> VOID.
    /// </summary>
    void SetVoid();
    /// <summary>
    /// Extends this to the given value (in both side)
    /// </summary>
    void Enlarge(double theDelta);
    /// <summary>
    /// Returns the copy of <*this> shifted by theVal
    /// </summary>
    Macad::Occt::Bnd_Range^ Shifted(double theVal);
    /// <summary>
    /// Shifts <*this> by theVal
    /// </summary>
    void Shift(double theVal);
    /// <summary>
    /// Trims the First value in range by the given lower limit.
    /// Marks range as Void if the given Lower value is greater than range Max.
    /// </summary>
    void TrimFrom(double theValLower);
    /// <summary>
    /// Trim the Last value in range by the given Upper limit.
    /// Marks range as Void if the given Upper value is smaller than range Max.
    /// </summary>
    void TrimTo(double theValUpper);
    /// <summary>
    /// Returns True if the value is out of this range.
    /// </summary>
    bool IsOut(double theValue);
    /// <summary>
    /// Returns True if the given range is out of this range.
    /// </summary>
    bool IsOut(Macad::Occt::Bnd_Range^ theRange);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class Bnd_Range

//---------------------------------------------------------------------
//  Class  Bnd_Tools
//---------------------------------------------------------------------
/// <summary>
/// Defines a set of static methods operating with bounding boxes
/// </summary>
public ref class Bnd_Tools sealed
    : public Macad::Occt::BaseClass<::Bnd_Tools>
{

#ifdef Include_Bnd_Tools_h
public:
    Include_Bnd_Tools_h
#endif

public:
    Bnd_Tools(::Bnd_Tools* nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Tools>( nativeInstance, true )
    {}

    Bnd_Tools(::Bnd_Tools& nativeInstance)
        : Macad::Occt::BaseClass<::Bnd_Tools>( &nativeInstance, false )
    {}

    property ::Bnd_Tools* NativeInstance
    {
        ::Bnd_Tools* get()
        {
            return static_cast<::Bnd_Tools*>(_NativeInstance);
        }
    }

public:
    Bnd_Tools();
    /* Method skipped due to unknown mapping: BVH_Box<double, 2> Bnd2BVH(Bnd_Box2d theBox, ) */
    /* Method skipped due to unknown mapping: Graphic3d_BndBox3d Bnd2BVH(Bnd_Box theBox, ) */
}; // class Bnd_Tools

}; // namespace Occt
}; // namespace Macad
