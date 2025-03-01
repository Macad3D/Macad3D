// Generated wrapper code for package Geom

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Geom_SequenceOfBSplineSurface
//---------------------------------------------------------------------
public ref class Geom_SequenceOfBSplineSurface sealed
    : public Macad::Occt::BaseClass<::Geom_SequenceOfBSplineSurface>
    , public IIndexEnumerable<Macad::Occt::Geom_BSplineSurface^>
{

#ifdef Include_Geom_SequenceOfBSplineSurface_h
public:
    Include_Geom_SequenceOfBSplineSurface_h
#endif

public:
    Geom_SequenceOfBSplineSurface(::Geom_SequenceOfBSplineSurface* nativeInstance)
        : Macad::Occt::BaseClass<::Geom_SequenceOfBSplineSurface>( nativeInstance, true )
    {}

    Geom_SequenceOfBSplineSurface(::Geom_SequenceOfBSplineSurface& nativeInstance)
        : Macad::Occt::BaseClass<::Geom_SequenceOfBSplineSurface>( &nativeInstance, false )
    {}

    property ::Geom_SequenceOfBSplineSurface* NativeInstance
    {
        ::Geom_SequenceOfBSplineSurface* get()
        {
            return static_cast<::Geom_SequenceOfBSplineSurface*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Geom_SequenceOfBSplineSurface::Iterator>
    {

#ifdef Include_Geom_SequenceOfBSplineSurface_Iterator_h
    public:
        Include_Geom_SequenceOfBSplineSurface_Iterator_h
#endif

    public:
        Iterator(::Geom_SequenceOfBSplineSurface::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Geom_SequenceOfBSplineSurface::Iterator>( nativeInstance, true )
        {}

        Iterator(::Geom_SequenceOfBSplineSurface::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Geom_SequenceOfBSplineSurface::Iterator>( &nativeInstance, false )
        {}

        property ::Geom_SequenceOfBSplineSurface::Iterator* NativeInstance
        {
            ::Geom_SequenceOfBSplineSurface::Iterator* get()
            {
                return static_cast<::Geom_SequenceOfBSplineSurface::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Geom_BSplineSurface^ Value();
        Macad::Occt::Geom_BSplineSurface^ ChangeValue();
        bool IsEqual(Macad::Occt::Geom_SequenceOfBSplineSurface::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Geom_SequenceOfBSplineSurface();
    Geom_SequenceOfBSplineSurface(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::Geom_SequenceOfBSplineSurface^ Assign(Macad::Occt::Geom_SequenceOfBSplineSurface^ theOther);
    void Remove(Macad::Occt::Geom_SequenceOfBSplineSurface::Iterator^ thePosition);
    void Append(Macad::Occt::Geom_BSplineSurface^ theItem);
    void Prepend(Macad::Occt::Geom_BSplineSurface^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Geom_BSplineSurface^ theItem);
    void InsertAfter(Macad::Occt::Geom_SequenceOfBSplineSurface::Iterator^ thePosition, Macad::Occt::Geom_BSplineSurface^ theItem);
    void Split(int theIndex, Macad::Occt::Geom_SequenceOfBSplineSurface^ theSeq);
    Macad::Occt::Geom_BSplineSurface^ First();
    Macad::Occt::Geom_BSplineSurface^ ChangeFirst();
    Macad::Occt::Geom_BSplineSurface^ Last();
    Macad::Occt::Geom_BSplineSurface^ ChangeLast();
    virtual Macad::Occt::Geom_BSplineSurface^ Value(int theIndex);
    Macad::Occt::Geom_BSplineSurface^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Geom_BSplineSurface^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Geom_BSplineSurface^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Geom_SequenceOfBSplineSurface

//---------------------------------------------------------------------
//  Class  Geom_Geometry
//---------------------------------------------------------------------
/// <summary>
/// The abstract class Geometry for 3D space is the root
/// class of all geometric objects from the Geom
/// package. It describes the common behavior of these objects when:
/// - applying geometric transformations to objects, and
/// - constructing objects by geometric transformation (including copying).
/// Warning
/// Only transformations which do not modify the nature
/// of the geometry can be applied to Geom objects: this
/// is the case with translations, rotations, symmetries
/// and scales; this is also the case with gp_Trsf
/// composite transformations which are used to define
/// the geometric transformations applied using the
/// Transform or Transformed functions.
/// Note: Geometry defines the "prototype" of the
/// abstract method Transform which is defined for each
/// concrete type of derived object. All other
/// transformations are implemented using the Transform method.
/// </summary>
public ref class Geom_Geometry
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Geom_Geometry_h
public:
    Include_Geom_Geometry_h
#endif

protected:
    Geom_Geometry(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    Geom_Geometry(::Geom_Geometry* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Geom_Geometry(::Geom_Geometry& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Geom_Geometry* NativeInstance
    {
        ::Geom_Geometry* get()
        {
            return static_cast<::Geom_Geometry*>(_NativeInstance);
        }
    }

public:
    Geom_Geometry();
    /// <summary>
    /// Performs the symmetrical transformation of a Geometry
    /// with respect to the point P which is the center of the
    /// symmetry.
    /// </summary>
    void Mirror(Macad::Occt::Pnt P);
    /// <summary>
    /// Performs the symmetrical transformation of a Geometry
    /// with respect to an axis placement which is the axis of the
    /// symmetry.
    /// </summary>
    void Mirror(Macad::Occt::Ax1 A1);
    /// <summary>
    /// Performs the symmetrical transformation of a Geometry
    /// with respect to a plane. The axis placement A2 locates
    /// the plane of the symmetry : (Location, XDirection, YDirection).
    /// </summary>
    void Mirror(Macad::Occt::Ax2 A2);
    /// <summary>
    /// Rotates a Geometry. A1 is the axis of the rotation.
    /// Ang is the angular value of the rotation in radians.
    /// </summary>
    void Rotate(Macad::Occt::Ax1 A1, double Ang);
    /// <summary>
    /// Scales a Geometry. S is the scaling value.
    /// </summary>
    void Scale(Macad::Occt::Pnt P, double S);
    /// <summary>
    /// Translates a Geometry.  V is the vector of the translation.
    /// </summary>
    void Translate(Macad::Occt::Vec V);
    /// <summary>
    /// Translates a Geometry from the point P1 to the point P2.
    /// </summary>
    void Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Transformation of a geometric object. This transformation
    /// can be a translation, a rotation, a symmetry, a scaling
    /// or a complex transformation obtained by combination of
    /// the previous elementaries transformations.
    /// (see class Transformation of the package Geom).
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    Macad::Occt::Geom_Geometry^ Mirrored(Macad::Occt::Pnt P);
    Macad::Occt::Geom_Geometry^ Mirrored(Macad::Occt::Ax1 A1);
    Macad::Occt::Geom_Geometry^ Mirrored(Macad::Occt::Ax2 A2);
    Macad::Occt::Geom_Geometry^ Rotated(Macad::Occt::Ax1 A1, double Ang);
    Macad::Occt::Geom_Geometry^ Scaled(Macad::Occt::Pnt P, double S);
    Macad::Occt::Geom_Geometry^ Transformed(Macad::Occt::Trsf T);
    Macad::Occt::Geom_Geometry^ Translated(Macad::Occt::Vec V);
    Macad::Occt::Geom_Geometry^ Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Creates a new object which is a copy of this geometric object.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_Geometry^ CreateDowncasted(::Geom_Geometry* instance);
}; // class Geom_Geometry

//---------------------------------------------------------------------
//  Class  Geom_AxisPlacement
//---------------------------------------------------------------------
/// <summary>
/// The abstract class AxisPlacement describes the
/// common behavior of positioning systems in 3D space,
/// such as axis or coordinate systems.
/// The Geom package provides two implementations of
/// 3D positioning systems:
/// - the axis (Geom_Axis1Placement class), which is defined by:
/// - its origin, also termed the "Location point" of the  axis,
/// - its unit vector, termed the "Direction" or "main
/// Direction" of the axis;
/// - the right-handed coordinate system
/// (Geom_Axis2Placement class), which is defined by:
/// - its origin, also termed the "Location point" of the coordinate system,
/// - three orthogonal unit vectors, termed
/// respectively the "X Direction", the "Y Direction"
/// and the "Direction" of the coordinate system. As
/// the coordinate system is right-handed, these
/// unit vectors have the following relation:
/// "Direction" = "X Direction" ^
/// "Y Direction". The "Direction" is also
/// called the "main Direction" because, when the
/// unit vector is modified, the "X Direction" and "Y
/// Direction" are recomputed, whereas when the "X
/// Direction" or "Y Direction" is modified, the "main Direction" does not change.
/// The axis whose origin is the origin of the positioning
/// system and whose unit vector is its "main Direction" is
/// also called the "Axis" or "main Axis" of the positioning system.
/// </summary>
public ref class Geom_AxisPlacement
    : public Macad::Occt::Geom_Geometry
{

#ifdef Include_Geom_AxisPlacement_h
public:
    Include_Geom_AxisPlacement_h
#endif

protected:
    Geom_AxisPlacement(InitMode init)
        : Macad::Occt::Geom_Geometry( init )
    {}

public:
    Geom_AxisPlacement(::Geom_AxisPlacement* nativeInstance)
        : Macad::Occt::Geom_Geometry( nativeInstance )
    {}

    Geom_AxisPlacement(::Geom_AxisPlacement& nativeInstance)
        : Macad::Occt::Geom_Geometry( nativeInstance )
    {}

    property ::Geom_AxisPlacement* NativeInstance
    {
        ::Geom_AxisPlacement* get()
        {
            return static_cast<::Geom_AxisPlacement*>(_NativeInstance);
        }
    }

public:
    Geom_AxisPlacement();
    /// <summary>
    /// Assigns A1 as the "main Axis" of this positioning system. This modifies
    /// - its origin, and
    /// - its "main Direction".
    /// If this positioning system is a
    /// Geom_Axis2Placement, then its "X Direction" and
    /// "Y Direction" are recomputed.
    /// Exceptions
    /// For a Geom_Axis2Placement:
    /// Standard_ConstructionError if A1 and the
    /// previous "X Direction" of the coordinate system are parallel.
    /// </summary>
    void SetAxis(Macad::Occt::Ax1 A1);
    /// <summary>
    /// Changes the direction of the axis placement.
    /// If <me> is an axis placement two axis the main "Direction"
    /// is modified and the "XDirection" and "YDirection" are
    /// recomputed.
    /// Raises ConstructionError only for an axis placement two axis if V and the
    /// previous "XDirection" are parallel because it is not possible
    /// to calculate the new "XDirection" and the new "YDirection".
    /// </summary>
    void SetDirection(Macad::Occt::Dir V);
    /// <summary>
    /// Assigns the point P as the origin of this positioning  system.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt P);
    /// <summary>
    /// Computes the angular value, in radians, between the
    /// "main Direction" of this positioning system and that
    /// of positioning system Other. The result is a value between 0 and Pi.
    /// </summary>
    double Angle(Macad::Occt::Geom_AxisPlacement^ Other);
    /// <summary>
    /// Returns the main axis of the axis placement.
    /// For an "Axis2placement" it is the main axis (Location, Direction ).
    /// For an "Axis1Placement" this method returns a copy of <me>.
    /// </summary>
    Macad::Occt::Ax1 Axis();
    /// <summary>
    /// Returns the main "Direction" of an axis placement.
    /// </summary>
    Macad::Occt::Dir Direction();
    /// <summary>
    /// Returns the Location point (origin) of the axis placement.
    /// </summary>
    Macad::Occt::Pnt Location();
    static Macad::Occt::Geom_AxisPlacement^ CreateDowncasted(::Geom_AxisPlacement* instance);
}; // class Geom_AxisPlacement

//---------------------------------------------------------------------
//  Class  Geom_Axis1Placement
//---------------------------------------------------------------------
/// <summary>
/// Describes an axis in 3D space.
/// An axis is defined by:
/// - its origin, also termed the "Location point" of the axis,
/// - its unit vector, termed the "Direction" of the axis.
/// Note: Geom_Axis1Placement axes provide the
/// same kind of "geometric" services as gp_Ax1 axes
/// but have more complex data structures. The
/// geometric objects provided by the Geom package
/// use gp_Ax1 objects to include axes in their data
/// structures, or to define an axis of symmetry or axis of rotation.
/// Geom_Axis1Placement axes are used in a context
/// where they can be shared by several objects
/// contained inside a common data structure.
/// </summary>
public ref class Geom_Axis1Placement sealed
    : public Macad::Occt::Geom_AxisPlacement
{

#ifdef Include_Geom_Axis1Placement_h
public:
    Include_Geom_Axis1Placement_h
#endif

public:
    Geom_Axis1Placement(::Geom_Axis1Placement* nativeInstance)
        : Macad::Occt::Geom_AxisPlacement( nativeInstance )
    {}

    Geom_Axis1Placement(::Geom_Axis1Placement& nativeInstance)
        : Macad::Occt::Geom_AxisPlacement( nativeInstance )
    {}

    property ::Geom_Axis1Placement* NativeInstance
    {
        ::Geom_Axis1Placement* get()
        {
            return static_cast<::Geom_Axis1Placement*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns a transient copy of A1.
    /// </summary>
    Geom_Axis1Placement(Macad::Occt::Ax1 A1);
    /// <summary>
    /// P is the origin of the axis placement and V is the direction
    /// of the axis placement.
    /// </summary>
    Geom_Axis1Placement(Macad::Occt::Pnt P, Macad::Occt::Dir V);
    /// <summary>
    /// Returns a non transient copy of <me>.
    /// </summary>
    Macad::Occt::Ax1 Ax1();
    /// <summary>
    /// Reverses the direction of the axis placement.
    /// </summary>
    void Reverse();
    /// <summary>
    /// Returns a copy of <me> reversed.
    /// </summary>
    Macad::Occt::Geom_Axis1Placement^ Reversed();
    /// <summary>
    /// Assigns V to the unit vector of this axis.
    /// </summary>
    void SetDirection(Macad::Occt::Dir V);
    /// <summary>
    /// Applies the transformation T to this axis.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object, which is a copy of this axis.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    static Macad::Occt::Geom_Axis1Placement^ CreateDowncasted(::Geom_Axis1Placement* instance);
}; // class Geom_Axis1Placement

//---------------------------------------------------------------------
//  Class  Geom_Axis2Placement
//---------------------------------------------------------------------
/// <summary>
/// Describes a right-handed coordinate system in 3D space.
/// A coordinate system is defined by:
/// - its origin, also termed the "Location point" of the coordinate system,
/// - three orthogonal unit vectors, termed respectively
/// the "X Direction", "Y Direction" and "Direction" (or
/// "main Direction") of the coordinate system.
/// As a Geom_Axis2Placement coordinate system is
/// right-handed, its "Direction" is always equal to the
/// cross product of its "X Direction" and "Y Direction".
/// The "Direction" of a coordinate system is called the
/// "main Direction" because when this unit vector is
/// modified, the "X Direction" and "Y Direction" are
/// recomputed, whereas when the "X Direction" or "Y
/// Direction" is changed, the "main Direction" is
/// retained. The "main Direction" is also the "Z Direction".
/// Note: Geom_Axis2Placement coordinate systems
/// provide the same kind of "geometric" services as
/// gp_Ax2 coordinate systems but have more complex
/// data structures. The geometric objects provided by
/// the Geom package use gp_Ax2 objects to include
/// coordinate systems in their data structures, or to
/// define the geometric transformations, which are applied to them.
/// Geom_Axis2Placement coordinate systems are
/// used in a context where they can be shared by
/// several objects contained inside a common data structure.
/// </summary>
public ref class Geom_Axis2Placement sealed
    : public Macad::Occt::Geom_AxisPlacement
{

#ifdef Include_Geom_Axis2Placement_h
public:
    Include_Geom_Axis2Placement_h
#endif

public:
    Geom_Axis2Placement(::Geom_Axis2Placement* nativeInstance)
        : Macad::Occt::Geom_AxisPlacement( nativeInstance )
    {}

    Geom_Axis2Placement(::Geom_Axis2Placement& nativeInstance)
        : Macad::Occt::Geom_AxisPlacement( nativeInstance )
    {}

    property ::Geom_Axis2Placement* NativeInstance
    {
        ::Geom_Axis2Placement* get()
        {
            return static_cast<::Geom_Axis2Placement*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns a transient copy of A2.
    /// </summary>
    Geom_Axis2Placement(Macad::Occt::Ax2 A2);
    /// <summary>
    /// P is the origin of the axis placement, N is the main
    /// direction of the axis placement and Vx is the "XDirection".
    /// If the two directions N and Vx are not orthogonal the
    /// "XDirection" is computed as follow :
    /// XDirection = N ^ (Vx ^ N).
    /// Raised if N and Vx are parallel.
    /// </summary>
    Geom_Axis2Placement(Macad::Occt::Pnt P, Macad::Occt::Dir N, Macad::Occt::Dir Vx);
    /// <summary>
    /// Assigns the origin and the three unit vectors of A2 to
    /// this coordinate system.
    /// </summary>
    void SetAx2(Macad::Occt::Ax2 A2);
    /// <summary>
    /// Changes the main direction of the axis placement.
    /// The "Xdirection" is modified :
    /// New XDirection = V ^ (Previous_Xdirection ^ V).
    /// 
    /// Raised if V and the previous "XDirection" are parallel
    /// because it is impossible to calculate the new "XDirection"
    /// and the new "YDirection".
    /// </summary>
    void SetDirection(Macad::Occt::Dir V);
    /// <summary>
    /// Changes the "XDirection" of the axis placement, Vx is the
    /// new "XDirection". If Vx is not normal to the main direction
    /// then "XDirection" is computed as follow :
    /// XDirection = Direction ^ ( Vx ^ Direction).
    /// The main direction is not modified.
    /// Raised if Vx and "Direction"  are parallel.
    /// </summary>
    void SetXDirection(Macad::Occt::Dir Vx);
    /// <summary>
    /// Changes the "YDirection" of the axis placement, Vy is the
    /// new "YDirection". If Vy is not normal to the main direction
    /// then "YDirection" is computed as follow :
    /// YDirection = Direction ^ ( Vy ^ Direction).
    /// The main direction is not modified. The "XDirection" is
    /// modified.
    /// Raised if Vy and the main direction are parallel.
    /// </summary>
    void SetYDirection(Macad::Occt::Dir Vy);
    /// <summary>
    /// Returns a non transient copy of <me>.
    /// </summary>
    Macad::Occt::Ax2 Ax2();
    /// <summary>
    /// Returns the "XDirection". This is a unit vector.
    /// </summary>
    Macad::Occt::Dir XDirection();
    /// <summary>
    /// Returns the "YDirection". This is a unit vector.
    /// </summary>
    Macad::Occt::Dir YDirection();
    /// <summary>
    /// Transforms an axis placement with a Trsf.
    /// The "Location" point, the "XDirection" and the
    /// "YDirection" are transformed with T.  The resulting
    /// main "Direction" of <me> is the cross product between
    /// the "XDirection" and the "YDirection" after transformation.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this coordinate system.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    static Macad::Occt::Geom_Axis2Placement^ CreateDowncasted(::Geom_Axis2Placement* instance);
}; // class Geom_Axis2Placement

//---------------------------------------------------------------------
//  Class  Geom_Curve
//---------------------------------------------------------------------
/// <summary>
/// The abstract class Curve describes the common
/// behavior of curves in 3D space. The Geom package
/// provides numerous concrete classes of derived
/// curves, including lines, circles, conics, Bezier or
/// BSpline curves, etc.
/// The main characteristic of these curves is that they
/// are parameterized. The Geom_Curve class shows:
/// - how to work with the parametric equation of a curve
/// in order to calculate the point of parameter u,
/// together with the vector tangent and the derivative
/// vectors of order 2, 3,..., N at this point;
/// - how to obtain general information about the curve
/// (for example, level of continuity, closed
/// characteristics, periodicity, bounds of the parameter field);
/// - how the parameter changes when a geometric
/// transformation is applied to the curve or when the
/// orientation of the curve is inverted.
/// All curves must have a geometric continuity: a curve is
/// at least "C0". Generally, this property is checked at
/// the time of construction or when the curve is edited.
/// Where this is not the case, the documentation states so explicitly.
/// Warning
/// The Geom package does not prevent the
/// construction of curves with null length or curves which
/// self-intersect.
/// </summary>
public ref class Geom_Curve
    : public Macad::Occt::Geom_Geometry
{

#ifdef Include_Geom_Curve_h
public:
    Include_Geom_Curve_h
#endif

protected:
    Geom_Curve(InitMode init)
        : Macad::Occt::Geom_Geometry( init )
    {}

public:
    Geom_Curve(::Geom_Curve* nativeInstance)
        : Macad::Occt::Geom_Geometry( nativeInstance )
    {}

    Geom_Curve(::Geom_Curve& nativeInstance)
        : Macad::Occt::Geom_Geometry( nativeInstance )
    {}

    property ::Geom_Curve* NativeInstance
    {
        ::Geom_Curve* get()
        {
            return static_cast<::Geom_Curve*>(_NativeInstance);
        }
    }

public:
    Geom_Curve();
    /// <summary>
    /// Changes the direction of parametrization of <me>.
    /// The "FirstParameter" and the "LastParameter" are not changed
    /// but the orientation  of the curve is modified. If the curve
    /// is bounded the StartPoint of the initial curve becomes the
    /// EndPoint of the reversed curve  and the EndPoint of the initial
    /// curve becomes the StartPoint of the reversed curve.
    /// </summary>
    void Reverse();
    /// <summary>
    /// Returns the  parameter on the  reversed  curve for
    /// the point of parameter U on <me>.
    /// 
    /// me->Reversed()->Value(me->ReversedParameter(U))
    /// 
    /// is the same point as
    /// 
    /// me->Value(U)
    /// </summary>
    double ReversedParameter(double U);
    /// <summary>
    /// Returns the  parameter on the  transformed  curve for
    /// the transform of the point of parameter U on <me>.
    /// 
    /// me->Transformed(T)->Value(me->TransformedParameter(U,T))
    /// 
    /// is the same point as
    /// 
    /// me->Value(U).Transformed(T)
    /// 
    /// This methods returns <U>
    /// 
    /// It can be redefined. For example on the Line.
    /// </summary>
    double TransformedParameter(double U, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a  coefficient to compute the parameter on
    /// the transformed  curve  for  the transform  of the
    /// point on <me>.
    /// 
    /// Transformed(T)->Value(U * ParametricTransformation(T))
    /// 
    /// is the same point as
    /// 
    /// Value(U).Transformed(T)
    /// 
    /// This methods returns 1.
    /// 
    /// It can be redefined. For example on the Line.
    /// </summary>
    double ParametricTransformation(Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a copy of <me> reversed.
    /// </summary>
    Macad::Occt::Geom_Curve^ Reversed();
    /// <summary>
    /// Returns the value of the first parameter.
    /// Warnings :
    /// It can be RealFirst from package Standard
    /// if the curve is infinite
    /// </summary>
    double FirstParameter();
    /// <summary>
    /// Returns the value of the last parameter.
    /// Warnings :
    /// It can be RealLast from package Standard
    /// if the curve is infinite
    /// </summary>
    double LastParameter();
    /// <summary>
    /// Returns true if the curve is closed.
    /// Some curves such as circle are always closed, others such as line
    /// are never closed (by definition).
    /// Some Curves such as OffsetCurve can be closed or not. These curves
    /// are considered as closed if the distance between the first point
    /// and the last point of the curve is lower or equal to the Resolution
    /// from package gp which is a fixed criterion independent of the
    /// application.
    /// </summary>
    bool IsClosed();
    /// <summary>
    /// Is the parametrization of the curve periodic ?
    /// It is possible only if the curve is closed and if the
    /// following relation is satisfied :
    /// for each parametric value U the distance between the point
    /// P(u) and the point P (u + T) is lower or equal to Resolution
    /// from package gp, T is the period and must be a constant.
    /// There are three possibilities :
    /// . the curve is never periodic by definition (SegmentLine)
    /// . the curve is always periodic by definition (Circle)
    /// . the curve can be defined as periodic (BSpline). In this case
    /// a function SetPeriodic allows you to give the shape of the
    /// curve.  The general rule for this case is : if a curve can be
    /// periodic or not the default periodicity set is non periodic
    /// and you have to turn (explicitly) the curve into a periodic
    /// curve  if you want the curve to be periodic.
    /// </summary>
    bool IsPeriodic();
    /// <summary>
    /// Returns the period of this curve.
    /// Exceptions Standard_NoSuchObject if this curve is not periodic.
    /// </summary>
    double Period();
    /// <summary>
    /// It is the global continuity of the curve
    /// C0 : only geometric continuity,
    /// C1 : continuity of the first derivative all along the Curve,
    /// C2 : continuity of the second derivative all along the Curve,
    /// C3 : continuity of the third derivative all along the Curve,
    /// G1 : tangency continuity all along the Curve,
    /// G2 : curvature continuity all along the Curve,
    /// CN : the order of continuity is infinite.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns true if the degree of continuity of this curve is at least N.
    /// Exceptions -  Standard_RangeError if N is less than 0.
    /// </summary>
    bool IsCN(int N);
    /// <summary>
    /// Returns in P the point of parameter U.
    /// If the curve is periodic  then the returned point is P(U) with
    /// U = Ustart + (U - Uend)  where Ustart and Uend are the
    /// parametric bounds of the curve.
    /// 
    /// Raised only for the "OffsetCurve" if it is not possible to
    /// compute the current point. For example when the first
    /// derivative on the basis curve and the offset direction
    /// are parallel.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    /// <summary>
    /// Returns the point P of parameter U and the first derivative V1.
    /// Raised if the continuity of the curve is not C1.
    /// </summary>
    void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// Raised if the continuity of the curve is not C2.
    /// </summary>
    void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    /// <summary>
    /// Returns the point P of parameter U, the first, the second
    /// and the third derivative.
    /// Raised if the continuity of the curve is not C3.
    /// </summary>
    void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// Raised if the continuity of the curve is not CN.
    /// 
    /// Raised if the   derivative  cannot  be  computed
    /// easily. e.g. rational bspline and n > 3.
    /// Raised if N < 1.
    /// </summary>
    Macad::Occt::Vec DN(double U, int N);
    /// <summary>
    /// Computes the point of parameter U on <me>.
    /// If the curve is periodic  then the returned point is P(U) with
    /// U = Ustart + (U - Uend)  where Ustart and Uend are the
    /// parametric bounds of the curve.
    /// it is implemented with D0.
    /// 
    /// Raised only for the "OffsetCurve" if it is not possible to
    /// compute the current point. For example when the first
    /// derivative on the basis curve and the offset direction are parallel.
    /// </summary>
    Macad::Occt::Pnt Value(double U);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_Curve^ CreateDowncasted(::Geom_Curve* instance);
}; // class Geom_Curve

//---------------------------------------------------------------------
//  Class  Geom_BoundedCurve
//---------------------------------------------------------------------
/// <summary>
/// The abstract class BoundedCurve describes the
/// common behavior of bounded curves in 3D space. A
/// bounded curve is limited by two finite values of the
/// parameter, termed respectively "first parameter" and
/// "last parameter". The "first parameter" gives the "start
/// point" of the bounded curve, and the "last parameter"
/// gives the "end point" of the bounded curve.
/// The length of a bounded curve is finite.
/// The Geom package provides three concrete classes of bounded curves:
/// - two frequently used mathematical formulations of complex curves:
/// - Geom_BezierCurve,
/// - Geom_BSplineCurve, and
/// - Geom_TrimmedCurve to trim a curve, i.e. to only
/// take part of the curve limited by two values of the
/// parameter of the basis curve.
/// </summary>
public ref class Geom_BoundedCurve
    : public Macad::Occt::Geom_Curve
{

#ifdef Include_Geom_BoundedCurve_h
public:
    Include_Geom_BoundedCurve_h
#endif

protected:
    Geom_BoundedCurve(InitMode init)
        : Macad::Occt::Geom_Curve( init )
    {}

public:
    Geom_BoundedCurve(::Geom_BoundedCurve* nativeInstance)
        : Macad::Occt::Geom_Curve( nativeInstance )
    {}

    Geom_BoundedCurve(::Geom_BoundedCurve& nativeInstance)
        : Macad::Occt::Geom_Curve( nativeInstance )
    {}

    property ::Geom_BoundedCurve* NativeInstance
    {
        ::Geom_BoundedCurve* get()
        {
            return static_cast<::Geom_BoundedCurve*>(_NativeInstance);
        }
    }

public:
    Geom_BoundedCurve();
    /// <summary>
    /// Returns the end point of the curve.
    /// </summary>
    Macad::Occt::Pnt EndPoint();
    /// <summary>
    /// Returns the start point of the curve.
    /// </summary>
    Macad::Occt::Pnt StartPoint();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_BoundedCurve^ CreateDowncasted(::Geom_BoundedCurve* instance);
}; // class Geom_BoundedCurve

//---------------------------------------------------------------------
//  Class  Geom_BezierCurve
//---------------------------------------------------------------------
/// <summary>
/// Describes a rational or non-rational Bezier curve
/// - a non-rational Bezier curve is defined by a table of
/// poles (also called control points),
/// - a rational Bezier curve is defined by a table of
/// poles with varying weights.
/// These data are manipulated by two parallel arrays:
/// - the poles table, which is an array of gp_Pnt points, and
/// - the weights table, which is an array of reals.
/// The bounds of these arrays are 1 and "the number of "poles" of the curve.
/// The poles of the curve are "control points" used to deform the curve.
/// The first pole is the start point of the curve, and the
/// last pole is the end point of the curve. The segment
/// that joins the first pole to the second pole is the
/// tangent to the curve at its start point, and the
/// segment that joins the last pole to the
/// second-from-last pole is the tangent to the curve at its end point.
/// It is more difficult to give a geometric signification to
/// the weights but they are useful for providing the exact
/// representations of arcs of a circle or ellipse.
/// Moreover, if the weights of all poles are equal, the
/// curve is polynomial; it is therefore a non-rational
/// curve. The non-rational curve is a special and
/// frequently used case. The weights are defined and
/// used only in the case of a rational curve.
/// The degree of a Bezier curve is equal to the number
/// of poles, minus 1. It must be greater than or equal to
/// 1. However, the degree of a Geom_BezierCurve
/// curve is limited to a value (25) which is defined and
/// controlled by the system. This value is returned by the function MaxDegree.
/// The parameter range for a Bezier curve is [ 0, 1 ].
/// If the first and last control points of the Bezier curve
/// are the same point then the curve is closed. For
/// example, to create a closed Bezier curve with four
/// control points, you have to give the set of control
/// points P1, P2, P3 and P1.
/// The continuity of a Bezier curve is infinite.
/// It is not possible to build a Bezier curve with negative
/// weights. We consider that a weight value is zero if it
/// is less than or equal to gp::Resolution(). We
/// also consider that two weight values W1 and W2 are equal if:
/// |W2 - W1| <= gp::Resolution().
/// Warning
/// - When considering the continuity of a closed Bezier
/// curve at the junction point, remember that a curve
/// of this type is never periodic. This means that the
/// derivatives for the parameter u = 0 have no
/// reason to be the same as the derivatives for the
/// parameter u = 1 even if the curve is closed.
/// - The length of a Bezier curve can be null.
/// </summary>
public ref class Geom_BezierCurve sealed
    : public Macad::Occt::Geom_BoundedCurve
{

#ifdef Include_Geom_BezierCurve_h
public:
    Include_Geom_BezierCurve_h
#endif

public:
    Geom_BezierCurve(::Geom_BezierCurve* nativeInstance)
        : Macad::Occt::Geom_BoundedCurve( nativeInstance )
    {}

    Geom_BezierCurve(::Geom_BezierCurve& nativeInstance)
        : Macad::Occt::Geom_BoundedCurve( nativeInstance )
    {}

    property ::Geom_BezierCurve* NativeInstance
    {
        ::Geom_BezierCurve* get()
        {
            return static_cast<::Geom_BezierCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a non rational Bezier curve with a set of poles
    /// CurvePoles.  The weights are defaulted to all being 1.
    /// Raises ConstructionError if the number of poles is greater than MaxDegree + 1
    /// or lower than 2.
    /// </summary>
    Geom_BezierCurve(Macad::Occt::TColgp_Array1OfPnt^ CurvePoles);
    /// <summary>
    /// Creates a rational Bezier curve with the set of poles
    /// CurvePoles and the set of weights  PoleWeights .
    /// If all the weights are identical the curve is considered
    /// as non rational. Raises ConstructionError if
    /// the number of poles is greater than  MaxDegree + 1 or lower
    /// than 2 or CurvePoles and CurveWeights have not the same length
    /// or one weight value is lower or equal to Resolution from package gp.
    /// </summary>
    Geom_BezierCurve(Macad::Occt::TColgp_Array1OfPnt^ CurvePoles, Macad::Occt::TColStd_Array1OfReal^ PoleWeights);
    /// <summary>
    /// Increases the degree of a bezier curve. Degree is the new
    /// degree of <me>. Raises ConstructionError
    /// if Degree is greater than MaxDegree or lower than 2
    /// or lower than the initial degree of <me>.
    /// </summary>
    void Increase(int Degree);
    /// <summary>
    /// Inserts a pole P after the pole of range Index.
    /// If the curve <me> is rational the weight value for the new
    /// pole of range Index is 1.0.
    /// raised if Index is not in the range [1, NbPoles]
    /// 
    /// raised if the resulting number of poles is greater than
    /// MaxDegree + 1.
    /// </summary>
    void InsertPoleAfter(int Index, Macad::Occt::Pnt P);
    /// <summary>
    /// Inserts a pole with its weight in the set of poles after the
    /// pole of range Index. If the curve was non rational it can
    /// become rational if all the weights are not identical.
    /// Raised if Index is not in the range [1, NbPoles]
    /// 
    /// Raised if the resulting number of poles is greater than
    /// MaxDegree + 1.
    /// Raised if Weight is lower or equal to Resolution from package gp.
    /// </summary>
    void InsertPoleAfter(int Index, Macad::Occt::Pnt P, double Weight);
    /// <summary>
    /// Inserts a pole P before the pole of range Index.
    /// If the curve <me> is rational the weight value for the new
    /// pole of range Index is 1.0.
    /// Raised if Index is not in the range [1, NbPoles]
    /// 
    /// Raised if the resulting number of poles is greater than
    /// MaxDegree + 1.
    /// </summary>
    void InsertPoleBefore(int Index, Macad::Occt::Pnt P);
    /// <summary>
    /// Inserts a pole with its weight in the set of poles after
    /// the pole of range Index. If the curve was non rational it
    /// can become rational if all the weights are not identical.
    /// Raised if Index is not in the range [1, NbPoles]
    /// 
    /// Raised if the resulting number of poles is greater than
    /// MaxDegree + 1.
    /// Raised if Weight is lower or equal to Resolution from
    /// package gp.
    /// </summary>
    void InsertPoleBefore(int Index, Macad::Occt::Pnt P, double Weight);
    /// <summary>
    /// Removes the pole of range Index.
    /// If the curve was rational it can become non rational.
    /// Raised if Index is not in the range [1, NbPoles]
    /// Raised if Degree is lower than 2.
    /// </summary>
    void RemovePole(int Index);
    /// <summary>
    /// Reverses the direction of parametrization of <me>
    /// Value (NewU) =  Value (1 - OldU)
    /// </summary>
    void Reverse();
    /// <summary>
    /// Returns the  parameter on the  reversed  curve for
    /// the point of parameter U on <me>.
    /// 
    /// returns 1-U
    /// </summary>
    double ReversedParameter(double U);
    /// <summary>
    /// Segments the curve between U1 and U2 which can be out
    /// of the bounds of the curve. The curve is oriented from U1
    /// to U2.
    /// The control points are modified, the first and the last point
    /// are not the same but the parametrization range is [0, 1]
    /// else it could not be a Bezier curve.
    /// Warnings :
    /// Even if <me> is not closed it can become closed after the
    /// segmentation for example if U1 or U2 are out of the bounds
    /// of the curve <me> or if the curve makes loop.
    /// After the segmentation the length of a curve can be null.
    /// </summary>
    void Segment(double U1, double U2);
    /// <summary>
    /// Substitutes the pole of range index with P.
    /// If the curve <me> is rational the weight of range Index
    /// is not modified.
    /// raiseD if Index is not in the range [1, NbPoles]
    /// </summary>
    void SetPole(int Index, Macad::Occt::Pnt P);
    /// <summary>
    /// Substitutes the pole and the weights of range Index.
    /// If the curve <me> is not rational it can become rational
    /// if all the weights are not identical.
    /// If the curve was rational it can become non rational if
    /// all the weights are identical.
    /// Raised if Index is not in the range [1, NbPoles]
    /// Raised if Weight <= Resolution from package gp
    /// </summary>
    void SetPole(int Index, Macad::Occt::Pnt P, double Weight);
    /// <summary>
    /// Changes the weight of the pole of range Index.
    /// If the curve <me> is not rational it can become rational
    /// if all the weights are not identical.
    /// If the curve was rational it can become non rational if
    /// all the weights are identical.
    /// Raised if Index is not in the range [1, NbPoles]
    /// Raised if Weight <= Resolution from package gp
    /// </summary>
    void SetWeight(int Index, double Weight);
    /// <summary>
    /// Returns True if the distance between the first point
    /// and the last point of the curve is lower or equal to
    /// the Resolution from package gp.
    /// </summary>
    bool IsClosed();
    /// <summary>
    /// Continuity of the curve, returns True.
    /// </summary>
    bool IsCN(int N);
    /// <summary>
    /// Returns True if the parametrization of a curve is periodic.
    /// (P(u) = P(u + T) T = constante)
    /// </summary>
    bool IsPeriodic();
    /// <summary>
    /// Returns false if all the weights are identical. The tolerance
    /// criterion is Resolution from package gp.
    /// </summary>
    bool IsRational();
    /// <summary>
    /// a Bezier curve is CN
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns the polynomial degree of the curve.
    /// it is the number of poles - 1
    /// point P and derivatives (V1, V2, V3) computation
    /// The Bezier Curve has a Polynomial representation so the
    /// parameter U can be out of the bounds of the curve.
    /// </summary>
    int Degree();
    void D0(double U, Macad::Occt::Pnt% P);
    void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    /// <summary>
    /// For this Bezier curve, computes
    /// - the point P of parameter U, or
    /// - the point P and one or more of the following values:
    /// - V1, the first derivative vector,
    /// - V2, the second derivative vector,
    /// - V3, the third derivative vector.
    /// Note: the parameter U can be outside the bounds of the curve.
    /// </summary>
    void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// For the point of parameter U of this Bezier curve,
    /// computes the vector corresponding to the Nth derivative.
    /// Note: the parameter U can be outside the bounds of the curve.
    /// Exceptions Standard_RangeError if N is less than 1.
    /// </summary>
    Macad::Occt::Vec DN(double U, int N);
    /// <summary>
    /// Returns Value (U=0.), it is the first control point of the curve.
    /// </summary>
    Macad::Occt::Pnt StartPoint();
    /// <summary>
    /// Returns Value (U=1.), it is the last control point of the Bezier curve.
    /// </summary>
    Macad::Occt::Pnt EndPoint();
    /// <summary>
    /// Returns the value of the first  parameter of this
    /// Bezier curve. This is 0.0, which gives the start point of this Bezier curve
    /// </summary>
    double FirstParameter();
    /// <summary>
    /// Returns the value of the last parameter of this
    /// Bezier curve. This is  1.0, which gives the end point of this Bezier curve.
    /// </summary>
    double LastParameter();
    /// <summary>
    /// Returns the number of poles of this Bezier curve.
    /// </summary>
    int NbPoles();
    /// <summary>
    /// Returns the pole of range Index.
    /// Raised if Index is not in the range [1, NbPoles]
    /// </summary>
    Macad::Occt::Pnt Pole(int Index);
    /// <summary>
    /// Returns all the poles of the curve.
    /// 
    /// Raised if the length of P is not equal to the number of poles.
    /// </summary>
    void Poles(Macad::Occt::TColgp_Array1OfPnt^ P);
    /// <summary>
    /// Returns all the poles of the curve.
    /// </summary>
    Macad::Occt::TColgp_Array1OfPnt^ Poles();
    /// <summary>
    /// Returns the weight of range Index.
    /// Raised if Index is not in the range [1, NbPoles]
    /// </summary>
    double Weight(int Index);
    /// <summary>
    /// Returns all the weights of the curve.
    /// 
    /// Raised if the length of W is not equal to the number of poles.
    /// </summary>
    void Weights(Macad::Occt::TColStd_Array1OfReal^ W);
    /// <summary>
    /// Returns all the weights of the curve.
    /// </summary>
    Macad::Occt::TColStd_Array1OfReal^ Weights();
    /// <summary>
    /// Applies the transformation T to this Bezier curve.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Returns the value of the maximum polynomial degree
    /// of any Geom_BezierCurve curve. This value is 25.
    /// </summary>
    static int MaxDegree();
    /// <summary>
    /// Computes for this Bezier curve the parametric
    /// tolerance UTolerance for a given 3D tolerance Tolerance3D.
    /// If f(t) is the equation of this Bezier curve,
    /// UTolerance ensures that:
    /// |t1-t0| < UTolerance ===> |f(t1)-f(t0)| < Tolerance3D
    /// </summary>
    void Resolution(double Tolerance3D, double% UTolerance);
    /// <summary>
    /// Creates a new object which is a copy of this Bezier curve.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_BezierCurve^ CreateDowncasted(::Geom_BezierCurve* instance);
}; // class Geom_BezierCurve

//---------------------------------------------------------------------
//  Class  Geom_Surface
//---------------------------------------------------------------------
/// <summary>
/// Describes the common behavior of surfaces in 3D space.
/// The Geom package provides many implementations of concrete derived surfaces,
/// such as planes, cylinders, cones, spheres and tori, surfaces of linear extrusion,
/// surfaces of revolution, Bezier and BSpline surfaces, and so on.
/// The key characteristic of these surfaces is that they are parameterized.
/// Geom_Surface demonstrates:
/// - how to work with the parametric equation of a surface
/// to compute the point of parameters (u, v), and, at this point, the 1st, 2nd ... Nth
/// derivative;
/// - how to find global information about a surface in
/// each parametric direction (for example, level of continuity, whether the surface is closed,
/// its periodicity, the bounds of the parameters and so on);
/// - how the parameters change when geometric transformations are applied to the surface,
/// or the orientation is modified.
/// 
/// Note that all surfaces must have a geometric continuity, and any surface is at least "C0".
/// Generally, continuity is checked at construction time or when the curve is edited.
/// Where this is not the case, the documentation makes this explicit.
/// 
/// Warning
/// The Geom package does not prevent the construction of
/// surfaces with null areas, or surfaces which self-intersect.
/// </summary>
public ref class Geom_Surface
    : public Macad::Occt::Geom_Geometry
{

#ifdef Include_Geom_Surface_h
public:
    Include_Geom_Surface_h
#endif

protected:
    Geom_Surface(InitMode init)
        : Macad::Occt::Geom_Geometry( init )
    {}

public:
    Geom_Surface(::Geom_Surface* nativeInstance)
        : Macad::Occt::Geom_Geometry( nativeInstance )
    {}

    Geom_Surface(::Geom_Surface& nativeInstance)
        : Macad::Occt::Geom_Geometry( nativeInstance )
    {}

    property ::Geom_Surface* NativeInstance
    {
        ::Geom_Surface* get()
        {
            return static_cast<::Geom_Surface*>(_NativeInstance);
        }
    }

public:
    Geom_Surface();
    /// <summary>
    /// Reverses the U direction of parametrization of <me>.
    /// The bounds of the surface are not modified.
    /// </summary>
    void UReverse();
    /// <summary>
    /// Reverses the U direction of parametrization of <me>.
    /// The bounds of the surface are not modified.
    /// A copy of <me> is returned.
    /// </summary>
    Macad::Occt::Geom_Surface^ UReversed();
    /// <summary>
    /// Returns the  parameter on the  Ureversed surface for
    /// the point of parameter U on <me>.
    /// </summary>
    /// @code
    /// me->UReversed()->Value(me->UReversedParameter(U),V)
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V)
    /// @endcode
    double UReversedParameter(double U);
    /// <summary>
    /// Reverses the V direction of parametrization of <me>.
    /// The bounds of the surface are not modified.
    /// </summary>
    void VReverse();
    /// <summary>
    /// Reverses the V direction of parametrization of <me>.
    /// The bounds of the surface are not modified.
    /// A copy of <me> is returned.
    /// </summary>
    Macad::Occt::Geom_Surface^ VReversed();
    /// <summary>
    /// Returns the  parameter on the  Vreversed surface for
    /// the point of parameter V on <me>.
    /// </summary>
    /// @code
    /// me->VReversed()->Value(U,me->VReversedParameter(V))
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V)
    /// @endcode
    double VReversedParameter(double V);
    /// <summary>
    /// Computes the  parameters on the  transformed  surface for
    /// the transform of the point of parameters U,V on <me>.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are the new values of U,V after calling
    /// @code
    /// me->TransformParameters(U,V,T)
    /// @endcode
    /// This method does not change <U> and <V>
    /// 
    /// It  can be redefined.  For  example on  the Plane,
    /// Cylinder, Cone, Revolved and Extruded surfaces.
    void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a 2d transformation  used to find the  new
    /// parameters of a point on the transformed surface.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are  obtained by transforming U,V with
    /// the 2d transformation returned by
    /// @code
    /// me->ParametricTransformation(T)
    /// @endcode
    /// This method returns an identity transformation
    /// 
    /// It  can be redefined.  For  example on  the Plane,
    /// Cylinder, Cone, Revolved and Extruded surfaces.
    Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
    /// <summary>
    /// Returns the parametric bounds U1, U2, V1 and V2 of this surface.
    /// If the surface is infinite, this function can return a value
    /// equal to Precision::Infinite: instead of Standard_Real::LastReal.
    /// </summary>
    void Bounds(double% U1, double% U2, double% V1, double% V2);
    /// <summary>
    /// Checks whether this surface is closed in the u parametric direction.
    /// Returns true if, in the u parametric direction:
    /// taking uFirst and uLast as the parametric bounds in
    /// the u parametric direction, for each parameter v,
    /// the distance between the points P(uFirst, v) and
    /// P(uLast, v) is less than or equal to gp::Resolution().
    /// </summary>
    bool IsUClosed();
    /// <summary>
    /// Checks whether this surface is closed in the u parametric direction.
    /// Returns true if, in the v parametric direction:
    /// taking vFirst and vLast as the parametric bounds in the v parametric direction,
    /// for each parameter u, the distance between the points
    /// P(u, vFirst) and P(u, vLast) is less than or equal to gp::Resolution().
    /// </summary>
    bool IsVClosed();
    /// <summary>
    /// Checks if this surface is periodic in the u parametric direction.
    /// Returns true if:
    /// - this surface is closed in the u parametric direction, and
    /// - there is a constant T such that the distance
    /// between the points P (u, v) and P (u + T, v)
    /// (or the points P (u, v) and P (u, v + T)) is less than or equal to gp::Resolution().
    /// 
    /// Note: T is the parametric period in the u parametric direction.
    /// </summary>
    bool IsUPeriodic();
    /// <summary>
    /// Returns the period of this surface in the u parametric direction.
    /// Raises if the surface is not uperiodic.
    /// </summary>
    double UPeriod();
    /// <summary>
    /// Checks if this surface is periodic in the v parametric direction.
    /// Returns true if:
    /// - this surface is closed in the v parametric direction, and
    /// - there is a constant T such that the distance
    /// between the points P (u, v) and P (u + T, v)
    /// (or the points P (u, v) and P (u, v + T)) is less than or equal to gp::Resolution().
    /// 
    /// Note: T is the parametric period in the v parametric direction.
    /// </summary>
    bool IsVPeriodic();
    /// <summary>
    /// Returns the period of this surface in the v parametric direction.
    /// raises if the surface is not vperiodic.
    /// </summary>
    double VPeriod();
    /// <summary>
    /// Computes the U isoparametric curve.
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U);
    /// <summary>
    /// Computes the V isoparametric curve.
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V);
    /// <summary>
    /// Returns the Global Continuity of the surface in direction U and V :
    /// - C0: only geometric continuity,
    /// - C1: continuity of the first derivative all along the surface,
    /// - C2: continuity of the second derivative all along the surface,
    /// - C3: continuity of the third derivative all along the surface,
    /// - G1: tangency continuity all along the surface,
    /// - G2: curvature continuity all along the surface,
    /// - CN: the order of continuity is infinite.
    /// 
    /// Example:
    /// If the surface is C1 in the V parametric direction and C2
    /// in the U parametric direction Shape = C1.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns the order of continuity of the surface in the U parametric direction.
    /// Raised if N < 0.
    /// </summary>
    bool IsCNu(int N);
    /// <summary>
    /// Returns the order of continuity of the surface in the V parametric direction.
    /// Raised if N < 0.
    /// </summary>
    bool IsCNv(int N);
    /// <summary>
    /// Computes the point of parameter U,V on the surface.
    /// 
    /// Raised only for an "OffsetSurface" if it is not possible to
    /// compute the current point.
    /// </summary>
    void D0(double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// Computes the point P and the first derivatives in the directions U and V at this point.
    /// Raised if the continuity of the surface is not C1.
    /// 
    /// Tip: use GeomLib::NormEstim() to calculate surface normal at specified (U, V) point.
    /// </summary>
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// Computes the point P, the first and the second derivatives in
    /// the directions U and V at this point.
    /// Raised if the continuity of the surface is not C2.
    /// </summary>
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Computes the point P, the first,the second and the third
    /// derivatives in the directions U and V at this point.
    /// Raised if the continuity of the surface is not C2.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the direction U and Nv in the direction V at the point
    /// P(U, V).
    /// 
    /// Raised if the continuity of the surface is not CNu in the U direction or not CNv in the V
    /// direction. Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
    /// </summary>
    Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Computes the point of parameter (U, V) on the surface.
    /// 
    /// It is implemented with D0.
    /// Tip: use GeomLib::NormEstim() to calculate surface normal at specified (U, V) point.
    /// 
    /// Raised only for an "OffsetSurface" if it is not possible to compute the current point.
    /// </summary>
    Macad::Occt::Pnt Value(double U, double V);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_Surface^ CreateDowncasted(::Geom_Surface* instance);
}; // class Geom_Surface

//---------------------------------------------------------------------
//  Class  Geom_BoundedSurface
//---------------------------------------------------------------------
/// <summary>
/// The root class for bounded surfaces in 3D space. A
/// bounded surface is defined by a rectangle in its 2D parametric space, i.e.
/// - its u parameter, which ranges between two finite
/// values u0 and u1, referred to as "First u
/// parameter" and "Last u parameter" respectively, and
/// - its v parameter, which ranges between two finite
/// values v0 and v1, referred to as "First v
/// parameter" and the "Last v parameter" respectively.
/// The surface is limited by four curves which are the
/// boundaries of the surface:
/// - its u0 and u1 isoparametric curves in the u parametric direction, and
/// - its v0 and v1 isoparametric curves in the v parametric direction.
/// A bounded surface is finite.
/// The common behavior of all bounded surfaces is
/// described by the Geom_Surface class.
/// The Geom package provides three concrete
/// implementations of bounded surfaces:
/// - Geom_BezierSurface,
/// - Geom_BSplineSurface, and
/// - Geom_RectangularTrimmedSurface.
/// The first two of these implement well known
/// mathematical definitions of complex surfaces, the third
/// trims a surface using four isoparametric curves, i.e. it
/// limits the variation of its parameters to a rectangle in
/// 2D parametric space.
/// </summary>
public ref class Geom_BoundedSurface
    : public Macad::Occt::Geom_Surface
{

#ifdef Include_Geom_BoundedSurface_h
public:
    Include_Geom_BoundedSurface_h
#endif

protected:
    Geom_BoundedSurface(InitMode init)
        : Macad::Occt::Geom_Surface( init )
    {}

public:
    Geom_BoundedSurface(::Geom_BoundedSurface* nativeInstance)
        : Macad::Occt::Geom_Surface( nativeInstance )
    {}

    Geom_BoundedSurface(::Geom_BoundedSurface& nativeInstance)
        : Macad::Occt::Geom_Surface( nativeInstance )
    {}

    property ::Geom_BoundedSurface* NativeInstance
    {
        ::Geom_BoundedSurface* get()
        {
            return static_cast<::Geom_BoundedSurface*>(_NativeInstance);
        }
    }

public:
    Geom_BoundedSurface();
    static Macad::Occt::Geom_BoundedSurface^ CreateDowncasted(::Geom_BoundedSurface* instance);
}; // class Geom_BoundedSurface

//---------------------------------------------------------------------
//  Class  Geom_BezierSurface
//---------------------------------------------------------------------
/// <summary>
/// Describes a rational or non-rational Bezier surface.
/// - A non-rational Bezier surface is defined by a table
/// of poles (also known as control points).
/// - A rational Bezier surface is defined by a table of
/// poles with varying associated weights.
/// This data is manipulated using two associative 2D arrays:
/// - the poles table, which is a 2D array of gp_Pnt, and
/// - the weights table, which is a 2D array of reals.
/// The bounds of these arrays are:
/// - 1 and NbUPoles for the row bounds, where
/// NbUPoles is the number of poles of the surface
/// in the u parametric direction, and
/// - 1 and NbVPoles for the column bounds, where
/// NbVPoles is the number of poles of the surface
/// in the v parametric direction.
/// The poles of the surface, the "control points", are the
/// points used to shape and reshape the surface. They
/// comprise a rectangular network of points:
/// - The points (1, 1), (NbUPoles, 1), (1,
/// NbVPoles) and (NbUPoles, NbVPoles)
/// are the four parametric "corners" of the surface.
/// - The first column of poles and the last column of
/// poles define two Bezier curves which delimit the
/// surface in the v parametric direction. These are
/// the v isoparametric curves corresponding to
/// values 0 and 1 of the v parameter.
/// - The first row of poles and the last row of poles
/// define two Bezier curves which delimit the surface
/// in the u parametric direction. These are the u
/// isoparametric curves corresponding to values 0
/// and 1 of the u parameter.
/// It is more difficult to define a geometrical significance
/// for the weights. However they are useful for
/// representing a quadric surface precisely. Moreover, if
/// the weights of all the poles are equal, the surface has
/// a polynomial equation, and hence is a "non-rational surface".
/// The non-rational surface is a special, but frequently
/// used, case, where all poles have identical weights.
/// The weights are defined and used only in the case of
/// a rational surface. This rational characteristic is
/// defined in each parametric direction. Hence, a
/// surface can be rational in the u parametric direction,
/// and non-rational in the v parametric direction.
/// Likewise, the degree of a surface is defined in each
/// parametric direction. The degree of a Bezier surface
/// in a given parametric direction is equal to the number
/// of poles of the surface in that parametric direction,
/// minus 1. This must be greater than or equal to 1.
/// However, the degree for a Geom_BezierSurface is
/// limited to a value of (25) which is defined and
/// controlled by the system. This value is returned by the
/// function MaxDegree.
/// The parameter range for a Bezier surface is [ 0, 1 ]
/// in the two parametric directions.
/// A Bezier surface can also be closed, or open, in each
/// parametric direction. If the first row of poles is
/// identical to the last row of poles, the surface is closed
/// in the u parametric direction. If the first column of
/// poles is identical to the last column of poles, the
/// surface is closed in the v parametric direction.
/// The continuity of a Bezier surface is infinite in the u
/// parametric direction and the in v parametric direction.
/// Note: It is not possible to build a Bezier surface with
/// negative weights. Any weight value that is less than,
/// or equal to, gp::Resolution() is considered
/// to be zero. Two weight values, W1 and W2, are
/// considered equal if: |W2-W1| <= gp::Resolution()
/// </summary>
public ref class Geom_BezierSurface sealed
    : public Macad::Occt::Geom_BoundedSurface
{

#ifdef Include_Geom_BezierSurface_h
public:
    Include_Geom_BezierSurface_h
#endif

public:
    Geom_BezierSurface(::Geom_BezierSurface* nativeInstance)
        : Macad::Occt::Geom_BoundedSurface( nativeInstance )
    {}

    Geom_BezierSurface(::Geom_BezierSurface& nativeInstance)
        : Macad::Occt::Geom_BoundedSurface( nativeInstance )
    {}

    property ::Geom_BezierSurface* NativeInstance
    {
        ::Geom_BezierSurface* get()
        {
            return static_cast<::Geom_BezierSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a non-rational Bezier surface with a set of poles.
    /// Control points representation :
    /// SPoles(Uorigin,Vorigin) ...................SPoles(Uorigin,Vend)
    /// .                                     .
    /// .                                     .
    /// SPoles(Uend, Vorigin) .....................SPoles(Uend, Vend)
    /// For the double array the row indice corresponds to the parametric
    /// U direction and the columns indice corresponds to the parametric
    /// V direction.
    /// The weights are defaulted to all being 1.
    /// 
    /// Raised if the number of poles of the surface is lower than 2
    /// or greater than MaxDegree + 1 in one of the two directions
    /// U or V.
    /// </summary>
    Geom_BezierSurface(Macad::Occt::TColgp_Array2OfPnt^ SurfacePoles);
    /// <summary>
    /// ---Purpose
    /// Creates a rational Bezier surface with a set of poles and a
    /// set of weights.
    /// For the double array the row indice corresponds to the parametric
    /// U direction and the columns indice corresponds to the parametric
    /// V direction.
    /// If all the weights are identical the surface is considered as
    /// non-rational (the tolerance criterion is Resolution from package
    /// gp).
    /// 
    /// Raised if SurfacePoles and PoleWeights have not the same
    /// Rowlength or have not the same ColLength.
    /// Raised if PoleWeights (i, j) <= Resolution from gp;
    /// Raised if the number of poles of the surface is lower than 2
    /// or greater than MaxDegree + 1 in one of the two directions U or V.
    /// </summary>
    Geom_BezierSurface(Macad::Occt::TColgp_Array2OfPnt^ SurfacePoles, Macad::Occt::TColStd_Array2OfReal^ PoleWeights);
    /// <summary>
    /// Exchanges the direction U and V on a Bezier surface
    /// As a consequence:
    /// - the poles and weights tables are transposed,
    /// - degrees, rational characteristics and so on are
    /// exchanged between the two parametric directions, and
    /// - the orientation of the surface is reversed.
    /// </summary>
    void ExchangeUV();
    /// <summary>
    /// Increases the degree of this Bezier surface in the two parametric directions.
    /// 
    /// Raised if UDegree < UDegree <me>  or VDegree < VDegree <me>
    /// Raised if the degree of the surface is greater than MaxDegree
    /// in one of the two directions U or V.
    /// </summary>
    void Increase(int UDeg, int VDeg);
    /// <summary>
    /// Inserts a column of poles. If the surface is rational the weights
    /// values associated with CPoles are equal defaulted to 1.
    /// 
    /// Raised if Vindex < 1 or VIndex > NbVPoles.
    /// 
    /// raises if VDegree is greater than MaxDegree.
    /// raises if the Length of CPoles is not equal to NbUPoles
    /// </summary>
    void InsertPoleColAfter(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
    /// <summary>
    /// Inserts a column of poles and weights.
    /// If the surface was non-rational it can become rational.
    /// 
    /// Raised if Vindex < 1 or VIndex > NbVPoles.
    /// Raised if
    /// . VDegree is greater than MaxDegree.
    /// . the Length of CPoles is not equal to NbUPoles
    /// . a weight value is lower or equal to Resolution from
    /// package gp
    /// </summary>
    void InsertPoleColAfter(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
    /// <summary>
    /// Inserts a column of poles. If the surface is rational the weights
    /// values associated with CPoles are equal defaulted to 1.
    /// 
    /// Raised if Vindex < 1 or VIndex > NbVPoles.
    /// 
    /// Raised if VDegree is greater than MaxDegree.
    /// Raised if the Length of CPoles is not equal to NbUPoles
    /// </summary>
    void InsertPoleColBefore(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
    /// <summary>
    /// Inserts a column of poles and weights.
    /// If the surface was non-rational it can become rational.
    /// 
    /// Raised if Vindex < 1 or VIndex > NbVPoles.
    /// Raised if :
    /// . VDegree is greater than MaxDegree.
    /// . the Length of CPoles is not equal to NbUPoles
    /// . a weight value is lower or equal to Resolution from
    /// package gp
    /// </summary>
    void InsertPoleColBefore(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
    /// <summary>
    /// Inserts a row of poles. If the surface is rational the weights
    /// values associated with CPoles are equal defaulted to 1.
    /// 
    /// Raised if Uindex < 1 or UIndex > NbUPoles.
    /// 
    /// Raised if UDegree is greater than MaxDegree.
    /// Raised if the Length of CPoles is not equal to NbVPoles
    /// </summary>
    void InsertPoleRowAfter(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
    /// <summary>
    /// Inserts a row of poles and weights.
    /// If the surface was non-rational it can become rational.
    /// 
    /// Raised if Uindex < 1 or UIndex > NbUPoles.
    /// Raised if :
    /// . UDegree is greater than MaxDegree.
    /// . the Length of CPoles is not equal to NbVPoles
    /// . a weight value is lower or equal to Resolution from
    /// package gp
    /// </summary>
    void InsertPoleRowAfter(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
    /// <summary>
    /// Inserts a row of poles. If the surface is rational the weights
    /// values associated with CPoles are equal defaulted to 1.
    /// 
    /// Raised if Uindex < 1 or UIndex > NbUPoles.
    /// 
    /// Raised if UDegree is greater than MaxDegree.
    /// Raised if the Length of CPoles is not equal to NbVPoles
    /// </summary>
    void InsertPoleRowBefore(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
    /// <summary>
    /// Inserts a row of poles and weights.
    /// If the surface was non-rational it can become rational.
    /// 
    /// Raised if Uindex < 1 or UIndex > NbUPoles.
    /// Raised if :
    /// . UDegree is greater than MaxDegree.
    /// . the Length of CPoles is not equal to NbVPoles
    /// . a weight value is lower or equal to Resolution from
    /// package gp
    /// </summary>
    void InsertPoleRowBefore(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
    /// <summary>
    /// Removes a column of poles.
    /// If the surface was rational it can become non-rational.
    /// 
    /// Raised if NbVPoles <= 2 after removing, a Bezier surface
    /// must have at least two columns of poles.
    /// Raised if Vindex < 1 or VIndex > NbVPoles
    /// </summary>
    void RemovePoleCol(int VIndex);
    /// <summary>
    /// Removes a row of poles.
    /// If the surface was rational it can become non-rational.
    /// 
    /// Raised if NbUPoles <= 2 after removing, a Bezier surface
    /// must have at least two rows of poles.
    /// Raised if Uindex < 1 or UIndex > NbUPoles
    /// </summary>
    void RemovePoleRow(int UIndex);
    /// <summary>
    /// Modifies this Bezier surface by segmenting it
    /// between U1 and U2 in the u parametric direction,
    /// and between V1 and V2 in the v parametric
    /// direction. U1, U2, V1, and V2 can be outside the
    /// bounds of this surface.
    /// - U1 and U2 isoparametric Bezier curves,
    /// segmented between V1 and V2, become the two
    /// bounds of the surface in the v parametric
    /// direction (0. and 1. u isoparametric curves).
    /// - V1 and V2 isoparametric Bezier curves,
    /// segmented between U1 and U2, become the two
    /// bounds of the surface in the u parametric
    /// direction (0. and 1. v isoparametric curves).
    /// The poles and weights tables are modified, but the
    /// degree of this surface in the u and v parametric
    /// directions does not change.
    /// U1 can be greater than U2, and V1 can be greater
    /// than V2. In these cases, the corresponding
    /// parametric direction is inverted. The orientation of
    /// the surface is inverted if one (and only one)
    /// parametric direction is inverted.
    /// </summary>
    void Segment(double U1, double U2, double V1, double V2);
    /// <summary>
    /// Modifies a pole value.
    /// If the surface is rational the weight of range (UIndex, VIndex)
    /// is not modified.
    /// 
    /// Raised if  UIndex < 1 or UIndex > NbUPoles  or  VIndex < 1
    /// or VIndex > NbVPoles.
    /// </summary>
    void SetPole(int UIndex, int VIndex, Macad::Occt::Pnt P);
    /// <summary>
    /// Substitutes the pole and the weight of range UIndex, VIndex.
    /// If the surface <me> is not rational it can become rational.
    /// if the surface was rational it can become non-rational.
    /// 
    /// raises if  UIndex < 1 or UIndex > NbUPoles  or  VIndex < 1
    /// or VIndex > NbVPoles.
    /// Raised if Weight <= Resolution from package gp.
    /// </summary>
    void SetPole(int UIndex, int VIndex, Macad::Occt::Pnt P, double Weight);
    /// <summary>
    /// Modifies a column of poles.
    /// The length of CPoles can be lower but not greater than NbUPoles
    /// so you can modify just a part of the column.
    /// Raised if VIndex < 1 or  VIndex > NbVPoles
    /// 
    /// Raised if CPoles.Lower() < 1 or CPoles.Upper() > NbUPoles
    /// </summary>
    void SetPoleCol(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
    /// <summary>
    /// Modifies a column of poles.
    /// If the surface was rational it can become non-rational
    /// If the surface was non-rational it can become rational.
    /// The length of CPoles can be lower but not greater than NbUPoles
    /// so you can modify just a part of the column.
    /// Raised if VIndex < 1 or  VIndex > NbVPoles
    /// 
    /// Raised if CPoles.Lower() < 1 or CPoles.Upper() > NbUPoles
    /// Raised if CPoleWeights and CPoles have not the same bounds.
    /// Raised if one of the weight value CPoleWeights (i) is lower
    /// or equal to Resolution from package gp.
    /// </summary>
    void SetPoleCol(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
    /// <summary>
    /// Modifies a row of poles.
    /// The length of CPoles can be lower but not greater than NbVPoles
    /// so you can modify just a part of the row.
    /// Raised if UIndex < 1 or  UIndex > NbUPoles
    /// 
    /// Raised if CPoles.Lower() < 1 or CPoles.Upper() > NbVPoles
    /// </summary>
    void SetPoleRow(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
    /// <summary>
    /// Modifies a row of poles and weights.
    /// If the surface was rational it can become non-rational.
    /// If the surface was non-rational it can become rational.
    /// The length of CPoles can be lower but not greater than NbVPoles
    /// so you can modify just a part of the row.
    /// Raised if UIndex < 1 or  UIndex > NbUPoles
    /// 
    /// Raised if CPoles.Lower() < 1 or CPoles.Upper() > NbVPoles
    /// Raised if CPoleWeights and CPoles have not the same bounds.
    /// Raised if one of the weight value CPoleWeights (i) is lower
    /// or equal to Resolution from gp.
    /// </summary>
    void SetPoleRow(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
    /// <summary>
    /// Modifies the weight of the pole of range UIndex, VIndex.
    /// If the surface was non-rational it can become rational.
    /// If the surface was rational it can become non-rational.
    /// 
    /// Raised if UIndex < 1  or  UIndex > NbUPoles or VIndex < 1 or
    /// VIndex > NbVPoles.
    /// Raised if Weight <= Resolution from package gp.
    /// </summary>
    void SetWeight(int UIndex, int VIndex, double Weight);
    /// <summary>
    /// Modifies a column of weights.
    /// If the surface was rational it can become non-rational.
    /// If the surface was non-rational it can become rational.
    /// The length of CPoleWeights can be lower but not greater than
    /// NbUPoles.
    /// Raised if VIndex < 1 or  VIndex > NbVPoles
    /// 
    /// Raised if CPoleWeights.Lower() < 1 or CPoleWeights.Upper() >
    /// NbUPoles
    /// Raised if one of the weight value CPoleWeights (i) is lower
    /// or equal to Resolution from package gp.
    /// </summary>
    void SetWeightCol(int VIndex, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
    /// <summary>
    /// Modifies a row of weights.
    /// If the surface was rational it can become non-rational.
    /// If the surface was non-rational it can become rational.
    /// The length of CPoleWeights can be lower but not greater than
    /// NbVPoles.
    /// Raised if UIndex < 1 or  UIndex > NbUPoles
    /// 
    /// Raised if CPoleWeights.Lower() < 1 or CPoleWeights.Upper() >
    /// NbVPoles
    /// Raised if one of the weight value CPoleWeights (i) is lower
    /// or equal to Resolution from package gp.
    /// </summary>
    void SetWeightRow(int UIndex, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
    /// <summary>
    /// Changes the orientation of this Bezier surface in the
    /// u  parametric direction. The bounds of the
    /// surface are not changed, but the given parametric
    /// direction is reversed. Hence, the orientation of the surface is reversed.
    /// </summary>
    void UReverse();
    /// <summary>
    /// Computes the u (or v) parameter on the modified
    /// surface, produced by reversing its u (or v) parametric
    /// direction, for any point of u parameter U (or of v
    /// parameter V) on this Bezier surface.
    /// In the case of a Bezier surface, these functions return respectively:
    /// - 1.-U, or 1.-V.
    /// </summary>
    double UReversedParameter(double U);
    /// <summary>
    /// Changes the orientation of this Bezier surface in the
    /// v parametric direction. The bounds of the
    /// surface are not changed, but the given parametric
    /// direction is reversed. Hence, the orientation of the
    /// surface is reversed.
    /// </summary>
    void VReverse();
    /// <summary>
    /// Computes the u (or v) parameter on the modified
    /// surface, produced by reversing its u (or v) parametric
    /// direction, for any point of u parameter U (or of v
    /// parameter V) on this Bezier surface.
    /// In the case of a Bezier surface, these functions return respectively:
    /// - 1.-U, or 1.-V.
    /// </summary>
    double VReversedParameter(double V);
    /// <summary>
    /// Returns the parametric bounds U1, U2, V1 and V2 of
    /// this Bezier surface.
    /// In the case of a Bezier surface, this function returns
    /// U1 = 0, V1 = 0, U2 = 1, V2 = 1.
    /// </summary>
    void Bounds(double% U1, double% U2, double% V1, double% V2);
    /// <summary>
    /// Returns the continuity of the surface CN : the order of
    /// continuity is infinite.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    void D0(double U, double V, Macad::Occt::Pnt% P);
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Computes P, the point of parameters (U, V) of this Bezier surface, and
    /// - one or more of the following sets of vectors:
    /// - D1U and D1V, the first derivative vectors at this point,
    /// - D2U, D2V and D2UV, the second derivative
    /// vectors at this point,
    /// - D3U, D3V, D3UUV and D3UVV, the third
    /// derivative vectors at this point.
    /// Note: The parameters U and V can be outside the bounds of the surface.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the u
    /// parametric direction, and Nv in the v parametric
    /// direction, at the point of parameters (U, V) of this Bezier surface.
    /// Note: The parameters U and V can be outside the bounds of the surface.
    /// Exceptions
    /// Standard_RangeError if:
    /// - Nu + Nv is less than 1, or Nu or Nv is negative.
    /// </summary>
    Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Returns the number of poles in the U direction.
    /// </summary>
    int NbUPoles();
    /// <summary>
    /// Returns the number of poles in the V direction.
    /// </summary>
    int NbVPoles();
    /// <summary>
    /// Returns the pole of range UIndex, VIndex
    /// Raised if UIndex < 1 or UIndex > NbUPoles, or
    /// VIndex < 1 or VIndex > NbVPoles.
    /// </summary>
    Macad::Occt::Pnt Pole(int UIndex, int VIndex);
    /// <summary>
    /// Returns the poles of the Bezier surface.
    /// 
    /// Raised if the length of P in the U an V direction is not equal to
    /// NbUPoles and NbVPoles.
    /// </summary>
    void Poles(Macad::Occt::TColgp_Array2OfPnt^ P);
    /// <summary>
    /// Returns the poles of the Bezier surface.
    /// </summary>
    Macad::Occt::TColgp_Array2OfPnt^ Poles();
    /// <summary>
    /// Returns the degree of the surface in the U direction it is
    /// NbUPoles - 1
    /// </summary>
    int UDegree();
    /// <summary>
    /// Computes the U isoparametric curve. For a Bezier surface the
    /// UIso curve is a Bezier curve.
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U);
    /// <summary>
    /// Returns the degree of the surface in the V direction it is
    /// NbVPoles - 1
    /// </summary>
    int VDegree();
    /// <summary>
    /// Computes the V isoparametric curve. For a Bezier surface the
    /// VIso  curve is a Bezier curve.
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V);
    /// <summary>
    /// Returns the weight of range UIndex, VIndex
    /// 
    /// Raised if UIndex < 1 or UIndex > NbUPoles, or
    /// VIndex < 1 or VIndex > NbVPoles.
    /// </summary>
    double Weight(int UIndex, int VIndex);
    /// <summary>
    /// Returns the weights of the Bezier surface.
    /// 
    /// Raised if the length of W in the U an V direction is not
    /// equal to NbUPoles and NbVPoles.
    /// </summary>
    void Weights(Macad::Occt::TColStd_Array2OfReal^ W);
    /// <summary>
    /// Returns the weights of the Bezier surface.
    /// </summary>
    Macad::Occt::TColStd_Array2OfReal^ Weights();
    /// <summary>
    /// Returns True if the first control points row and the
    /// last control points row are identical. The tolerance
    /// criterion is Resolution from package gp.
    /// </summary>
    bool IsUClosed();
    /// <summary>
    /// Returns True if the first control points column
    /// and the last control points column are identical.
    /// The tolerance criterion is Resolution from package gp.
    /// </summary>
    bool IsVClosed();
    /// <summary>
    /// Returns True, a Bezier surface is always  CN
    /// </summary>
    bool IsCNu(int N);
    /// <summary>
    /// Returns True, a BezierSurface is always  CN
    /// </summary>
    bool IsCNv(int N);
    /// <summary>
    /// Returns False.
    /// </summary>
    bool IsUPeriodic();
    /// <summary>
    /// Returns False.
    /// </summary>
    bool IsVPeriodic();
    /// <summary>
    /// Returns False if the weights are identical in the U direction,
    /// The tolerance criterion is Resolution from package gp.
    /// Example :
    /// |1.0, 1.0, 1.0|
    /// if Weights =  |0.5, 0.5, 0.5|   returns False
    /// |2.0, 2.0, 2.0|
    /// </summary>
    bool IsURational();
    /// <summary>
    /// Returns False if the weights are identical in the V direction,
    /// The tolerance criterion is Resolution from package gp.
    /// Example :
    /// |1.0, 2.0, 0.5|
    /// if Weights =  |1.0, 2.0, 0.5|   returns False
    /// |1.0, 2.0, 0.5|
    /// </summary>
    bool IsVRational();
    /// <summary>
    /// Applies the transformation T to this Bezier surface.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Returns the value of the maximum polynomial degree of a
    /// Bezier surface. This value is 25.
    /// </summary>
    static int MaxDegree();
    /// <summary>
    /// Computes two tolerance values for this Bezier
    /// surface, based on the given tolerance in 3D space
    /// Tolerance3D. The tolerances computed are:
    /// - UTolerance in the u parametric direction, and
    /// - VTolerance in the v parametric direction.
    /// If f(u,v) is the equation of this Bezier surface,
    /// UTolerance and VTolerance guarantee that:
    /// | u1 - u0 | < UTolerance and
    /// | v1 - v0 | < VTolerance
    /// ====> |f (u1,v1) - f (u0,v0)| < Tolerance3D
    /// </summary>
    void Resolution(double Tolerance3D, double% UTolerance, double% VTolerance);
    /// <summary>
    /// Creates a new object which is a copy of this Bezier surface.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_BezierSurface^ CreateDowncasted(::Geom_BezierSurface* instance);
}; // class Geom_BezierSurface

//---------------------------------------------------------------------
//  Class  Geom_BSplineCurve
//---------------------------------------------------------------------
/// <summary>
/// Definition of the B_spline curve.
/// A B-spline curve can be
/// Uniform  or non-uniform
/// Rational or non-rational
/// Periodic or non-periodic
/// 
/// a b-spline curve is defined by :
/// its degree; the degree for a
/// Geom_BSplineCurve is limited to a value (25)
/// which is defined and controlled by the system.
/// This value is returned by the function MaxDegree;
/// - its periodic or non-periodic nature;
/// - a table of poles (also called control points), with
/// their associated weights if the BSpline curve is
/// rational. The poles of the curve are "control
/// points" used to deform the curve. If the curve is
/// non-periodic, the first pole is the start point of
/// the curve, and the last pole is the end point of
/// the curve. The segment which joins the first pole
/// to the second pole is the tangent to the curve at
/// its start point, and the segment which joins the
/// last pole to the second-from-last pole is the
/// tangent to the curve at its end point. If the curve
/// is periodic, these geometric properties are not
/// verified. It is more difficult to give a geometric
/// signification to the weights but are useful for
/// providing exact representations of the arcs of a
/// circle or ellipse. Moreover, if the weights of all the
/// poles are equal, the curve has a polynomial
/// equation; it is therefore a non-rational curve.
/// - a table of knots with their multiplicities. For a
/// Geom_BSplineCurve, the table of knots is an
/// increasing sequence of reals without repetition;
/// the multiplicities define the repetition of the knots.
/// A BSpline curve is a piecewise polynomial or
/// rational curve. The knots are the parameters of
/// junction points between two pieces. The
/// multiplicity Mult(i) of the knot Knot(i) of
/// the BSpline curve is related to the degree of
/// continuity of the curve at the knot Knot(i),
/// which is equal to Degree - Mult(i)
/// where Degree is the degree of the BSpline curve.
/// If the knots are regularly spaced (i.e. the difference
/// between two consecutive knots is a constant), three
/// specific and frequently used cases of knot
/// distribution can be identified:
/// - "uniform" if all multiplicities are equal to 1,
/// - "quasi-uniform" if all multiplicities are equal to 1,
/// except the first and the last knot which have a
/// multiplicity of Degree + 1, where Degree is
/// the degree of the BSpline curve,
/// - "Piecewise Bezier" if all multiplicities are equal to
/// Degree except the first and last knot which
/// have a multiplicity of Degree + 1, where
/// Degree is the degree of the BSpline curve. A
/// curve of this type is a concatenation of arcs of Bezier curves.
/// If the BSpline curve is not periodic:
/// - the bounds of the Poles and Weights tables are 1
/// and NbPoles, where NbPoles is the number
/// of poles of the BSpline curve,
/// - the bounds of the Knots and Multiplicities tables
/// are 1 and NbKnots, where NbKnots is the
/// number of knots of the BSpline curve.
/// If the BSpline curve is periodic, and if there are k
/// periodic knots and p periodic poles, the period is:
/// period = Knot(k + 1) - Knot(1)
/// and the poles and knots tables can be considered
/// as infinite tables, verifying:
/// - Knot(i+k) = Knot(i) + period
/// - Pole(i+p) = Pole(i)
/// Note: data structures of a periodic BSpline curve
/// are more complex than those of a non-periodic one.
/// Warning
/// In this class, weight value is considered to be zero if
/// the weight is less than or equal to gp::Resolution().
/// 
/// References :
/// . A survey of curve and surface methods in CADG Wolfgang BOHM
/// CAGD 1 (1984)
/// . On de Boor-like algorithms and blossoming Wolfgang BOEHM
/// cagd 5 (1988)
/// . Blossoming and knot insertion algorithms for B-spline curves
/// Ronald N. GOLDMAN
/// . Modelisation des surfaces en CAO, Henri GIAUME Peugeot SA
/// . Curves and Surfaces for Computer Aided Geometric Design,
/// a practical guide Gerald Farin
/// </summary>
public ref class Geom_BSplineCurve sealed
    : public Macad::Occt::Geom_BoundedCurve
{

#ifdef Include_Geom_BSplineCurve_h
public:
    Include_Geom_BSplineCurve_h
#endif

public:
    Geom_BSplineCurve(::Geom_BSplineCurve* nativeInstance)
        : Macad::Occt::Geom_BoundedCurve( nativeInstance )
    {}

    Geom_BSplineCurve(::Geom_BSplineCurve& nativeInstance)
        : Macad::Occt::Geom_BoundedCurve( nativeInstance )
    {}

    property ::Geom_BSplineCurve* NativeInstance
    {
        ::Geom_BSplineCurve* get()
        {
            return static_cast<::Geom_BSplineCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a  non-rational B_spline curve   on  the
    /// basis <Knots, Multiplicities> of degree <Degree>.
    /// </summary>
    Geom_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic);
    /// <summary>
    /// Creates a  non-rational B_spline curve   on  the
    /// basis <Knots, Multiplicities> of degree <Degree>.
    /// </summary>
    Geom_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree);
    /// <summary>
    /// Creates  a rational B_spline  curve  on the basis
    /// <Knots, Multiplicities> of degree <Degree>.
    /// Raises ConstructionError subject to the following conditions
    /// 0 < Degree <= MaxDegree.
    /// 
    /// Weights.Length() == Poles.Length()
    /// 
    /// Knots.Length() == Mults.Length() >= 2
    /// 
    /// Knots(i) < Knots(i+1) (Knots are increasing)
    /// 
    /// 1 <= Mults(i) <= Degree
    /// 
    /// On a non periodic curve the first and last multiplicities
    /// may be Degree+1 (this is even recommended if you want the
    /// curve to start and finish on the first and last pole).
    /// 
    /// On a periodic  curve the first  and  the last multicities
    /// must be the same.
    /// 
    /// on non-periodic curves
    /// 
    /// Poles.Length() == Sum(Mults(i)) - Degree - 1 >= 2
    /// 
    /// on periodic curves
    /// 
    /// Poles.Length() == Sum(Mults(i)) except the first or last
    /// </summary>
    Geom_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic, bool CheckRational);
    /// <summary>
    /// Creates  a rational B_spline  curve  on the basis
    /// <Knots, Multiplicities> of degree <Degree>.
    /// Raises ConstructionError subject to the following conditions
    /// 0 < Degree <= MaxDegree.
    /// 
    /// Weights.Length() == Poles.Length()
    /// 
    /// Knots.Length() == Mults.Length() >= 2
    /// 
    /// Knots(i) < Knots(i+1) (Knots are increasing)
    /// 
    /// 1 <= Mults(i) <= Degree
    /// 
    /// On a non periodic curve the first and last multiplicities
    /// may be Degree+1 (this is even recommended if you want the
    /// curve to start and finish on the first and last pole).
    /// 
    /// On a periodic  curve the first  and  the last multicities
    /// must be the same.
    /// 
    /// on non-periodic curves
    /// 
    /// Poles.Length() == Sum(Mults(i)) - Degree - 1 >= 2
    /// 
    /// on periodic curves
    /// 
    /// Poles.Length() == Sum(Mults(i)) except the first or last
    /// </summary>
    Geom_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree, bool Periodic);
    /// <summary>
    /// Creates  a rational B_spline  curve  on the basis
    /// <Knots, Multiplicities> of degree <Degree>.
    /// Raises ConstructionError subject to the following conditions
    /// 0 < Degree <= MaxDegree.
    /// 
    /// Weights.Length() == Poles.Length()
    /// 
    /// Knots.Length() == Mults.Length() >= 2
    /// 
    /// Knots(i) < Knots(i+1) (Knots are increasing)
    /// 
    /// 1 <= Mults(i) <= Degree
    /// 
    /// On a non periodic curve the first and last multiplicities
    /// may be Degree+1 (this is even recommended if you want the
    /// curve to start and finish on the first and last pole).
    /// 
    /// On a periodic  curve the first  and  the last multicities
    /// must be the same.
    /// 
    /// on non-periodic curves
    /// 
    /// Poles.Length() == Sum(Mults(i)) - Degree - 1 >= 2
    /// 
    /// on periodic curves
    /// 
    /// Poles.Length() == Sum(Mults(i)) except the first or last
    /// </summary>
    Geom_BSplineCurve(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Multiplicities, int Degree);
    /// <summary>
    /// Increases the degree of this BSpline curve to
    /// Degree. As a result, the poles, weights and
    /// multiplicities tables are modified; the knots table is
    /// not changed. Nothing is done if Degree is less than
    /// or equal to the current degree.
    /// Exceptions
    /// Standard_ConstructionError if Degree is greater than
    /// Geom_BSplineCurve::MaxDegree().
    /// </summary>
    void IncreaseDegree(int Degree);
    /// <summary>
    /// Increases the multiplicity  of the knot <Index> to
    /// <M>.
    /// 
    /// If   <M>   is   lower   or  equal   to  the current
    /// multiplicity nothing is done. If <M> is higher than
    /// the degree the degree is used.
    /// If <Index> is not in [FirstUKnotIndex, LastUKnotIndex]
    /// </summary>
    void IncreaseMultiplicity(int Index, int M);
    /// <summary>
    /// Increases  the  multiplicities   of  the knots  in
    /// [I1,I2] to <M>.
    /// 
    /// For each knot if  <M>  is  lower  or equal  to  the
    /// current multiplicity  nothing  is  done. If <M>  is
    /// higher than the degree the degree is used.
    /// If <I1,I2> are not in [FirstUKnotIndex, LastUKnotIndex]
    /// </summary>
    void IncreaseMultiplicity(int I1, int I2, int M);
    /// <summary>
    /// Increment  the  multiplicities   of  the knots  in
    /// [I1,I2] by <M>.
    /// 
    /// If <M> is not positive nithing is done.
    /// 
    /// For   each  knot   the resulting   multiplicity  is
    /// limited to the Degree.
    /// If <I1,I2> are not in [FirstUKnotIndex, LastUKnotIndex]
    /// </summary>
    void IncrementMultiplicity(int I1, int I2, int M);
    /// <summary>
    /// Inserts a knot value in the sequence of knots.  If
    /// <U>  is an  existing knot     the multiplicity  is
    /// increased by <M>.
    /// 
    /// If U  is  not  on the parameter  range  nothing is
    /// done.
    /// 
    /// If the multiplicity is negative or null nothing is
    /// done. The  new   multiplicity  is limited  to  the
    /// degree.
    /// 
    /// The  tolerance criterion  for  knots  equality  is
    /// the max of Epsilon(U) and ParametricTolerance.
    /// </summary>
    void InsertKnot(double U, int M, double ParametricTolerance, bool Add);
    /// <summary>
    /// Inserts a knot value in the sequence of knots.  If
    /// <U>  is an  existing knot     the multiplicity  is
    /// increased by <M>.
    /// 
    /// If U  is  not  on the parameter  range  nothing is
    /// done.
    /// 
    /// If the multiplicity is negative or null nothing is
    /// done. The  new   multiplicity  is limited  to  the
    /// degree.
    /// 
    /// The  tolerance criterion  for  knots  equality  is
    /// the max of Epsilon(U) and ParametricTolerance.
    /// </summary>
    void InsertKnot(double U, int M, double ParametricTolerance);
    /// <summary>
    /// Inserts a knot value in the sequence of knots.  If
    /// <U>  is an  existing knot     the multiplicity  is
    /// increased by <M>.
    /// 
    /// If U  is  not  on the parameter  range  nothing is
    /// done.
    /// 
    /// If the multiplicity is negative or null nothing is
    /// done. The  new   multiplicity  is limited  to  the
    /// degree.
    /// 
    /// The  tolerance criterion  for  knots  equality  is
    /// the max of Epsilon(U) and ParametricTolerance.
    /// </summary>
    void InsertKnot(double U, int M);
    /// <summary>
    /// Inserts a knot value in the sequence of knots.  If
    /// <U>  is an  existing knot     the multiplicity  is
    /// increased by <M>.
    /// 
    /// If U  is  not  on the parameter  range  nothing is
    /// done.
    /// 
    /// If the multiplicity is negative or null nothing is
    /// done. The  new   multiplicity  is limited  to  the
    /// degree.
    /// 
    /// The  tolerance criterion  for  knots  equality  is
    /// the max of Epsilon(U) and ParametricTolerance.
    /// </summary>
    void InsertKnot(double U);
    /// <summary>
    /// Inserts a set of knots  values in  the sequence of
    /// knots.
    /// 
    /// For each U = Knots(i), M = Mults(i)
    /// 
    /// If <U>  is an existing  knot  the  multiplicity is
    /// increased by  <M> if  <Add>  is True, increased to
    /// <M> if <Add> is False.
    /// 
    /// If U  is  not  on the parameter  range  nothing is
    /// done.
    /// 
    /// If the multiplicity is negative or null nothing is
    /// done. The  new   multiplicity  is limited  to  the
    /// degree.
    /// 
    /// The  tolerance criterion  for  knots  equality  is
    /// the max of Epsilon(U) and ParametricTolerance.
    /// </summary>
    void InsertKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance, bool Add);
    /// <summary>
    /// Inserts a set of knots  values in  the sequence of
    /// knots.
    /// 
    /// For each U = Knots(i), M = Mults(i)
    /// 
    /// If <U>  is an existing  knot  the  multiplicity is
    /// increased by  <M> if  <Add>  is True, increased to
    /// <M> if <Add> is False.
    /// 
    /// If U  is  not  on the parameter  range  nothing is
    /// done.
    /// 
    /// If the multiplicity is negative or null nothing is
    /// done. The  new   multiplicity  is limited  to  the
    /// degree.
    /// 
    /// The  tolerance criterion  for  knots  equality  is
    /// the max of Epsilon(U) and ParametricTolerance.
    /// </summary>
    void InsertKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance);
    /// <summary>
    /// Inserts a set of knots  values in  the sequence of
    /// knots.
    /// 
    /// For each U = Knots(i), M = Mults(i)
    /// 
    /// If <U>  is an existing  knot  the  multiplicity is
    /// increased by  <M> if  <Add>  is True, increased to
    /// <M> if <Add> is False.
    /// 
    /// If U  is  not  on the parameter  range  nothing is
    /// done.
    /// 
    /// If the multiplicity is negative or null nothing is
    /// done. The  new   multiplicity  is limited  to  the
    /// degree.
    /// 
    /// The  tolerance criterion  for  knots  equality  is
    /// the max of Epsilon(U) and ParametricTolerance.
    /// </summary>
    void InsertKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults);
    /// <summary>
    /// Reduces the multiplicity of the knot of index Index
    /// to M. If M is equal to 0, the knot is removed.
    /// With a modification of this type, the array of poles is also modified.
    /// Two different algorithms are systematically used to
    /// compute the new poles of the curve. If, for each
    /// pole, the distance between the pole calculated
    /// using the first algorithm and the same pole
    /// calculated using the second algorithm, is less than
    /// Tolerance, this ensures that the curve is not
    /// modified by more than Tolerance. Under these
    /// conditions, true is returned; otherwise, false is returned.
    /// A low tolerance is used to prevent modification of
    /// the curve. A high tolerance is used to "smooth" the curve.
    /// Exceptions
    /// Standard_OutOfRange if Index is outside the
    /// bounds of the knots table.
    /// pole insertion and pole removing
    /// this operation is limited to the Uniform or QuasiUniform
    /// BSplineCurve. The knot values are modified . If the BSpline is
    /// NonUniform or Piecewise Bezier an exception Construction error
    /// is raised.
    /// </summary>
    bool RemoveKnot(int Index, int M, double Tolerance);
    /// <summary>
    /// Changes the direction of parametrization of <me>. The Knot
    /// sequence is modified, the FirstParameter and the
    /// LastParameter are not modified. The StartPoint of the
    /// initial curve becomes the EndPoint of the reversed curve
    /// and the EndPoint of the initial curve becomes the StartPoint
    /// of the reversed curve.
    /// </summary>
    void Reverse();
    /// <summary>
    /// Returns the  parameter on the  reversed  curve for
    /// the point of parameter U on <me>.
    /// 
    /// returns UFirst + ULast - U
    /// </summary>
    double ReversedParameter(double U);
    /// <summary>
    /// Modifies this BSpline curve by segmenting it between
    /// U1 and U2. Either of these values can be outside the
    /// bounds of the curve, but U2 must be greater than U1.
    /// All data structure tables of this BSpline curve are
    /// modified, but the knots located between U1 and U2
    /// are retained. The degree of the curve is not modified.
    /// 
    /// Parameter theTolerance defines the possible proximity of the segment
    /// boundaries and B-spline knots to treat them as equal.
    /// 
    /// Warnings :
    /// Even if <me> is not closed it can become closed after the
    /// segmentation for example if U1 or U2 are out of the bounds
    /// of the curve <me> or if the curve makes loop.
    /// After the segmentation the length of a curve can be null.
    /// raises if U2 < U1.
    /// Standard_DomainError if U2 - U1 exceeds the period for periodic curves.
    /// i.e. ((U2 - U1) - Period) > Precision::PConfusion().
    /// </summary>
    void Segment(double U1, double U2, double theTolerance);
    /// <summary>
    /// Modifies this BSpline curve by segmenting it between
    /// U1 and U2. Either of these values can be outside the
    /// bounds of the curve, but U2 must be greater than U1.
    /// All data structure tables of this BSpline curve are
    /// modified, but the knots located between U1 and U2
    /// are retained. The degree of the curve is not modified.
    /// 
    /// Parameter theTolerance defines the possible proximity of the segment
    /// boundaries and B-spline knots to treat them as equal.
    /// 
    /// Warnings :
    /// Even if <me> is not closed it can become closed after the
    /// segmentation for example if U1 or U2 are out of the bounds
    /// of the curve <me> or if the curve makes loop.
    /// After the segmentation the length of a curve can be null.
    /// raises if U2 < U1.
    /// Standard_DomainError if U2 - U1 exceeds the period for periodic curves.
    /// i.e. ((U2 - U1) - Period) > Precision::PConfusion().
    /// </summary>
    void Segment(double U1, double U2);
    /// <summary>
    /// Modifies this BSpline curve by assigning the value K
    /// to the knot of index Index in the knots table. This is a
    /// relatively local modification because K must be such that:
    /// Knots(Index - 1) < K < Knots(Index + 1)
    /// The second syntax allows you also to increase the
    /// multiplicity of the knot to M (but it is not possible to
    /// decrease the multiplicity of the knot with this function).
    /// Standard_ConstructionError if:
    /// - K is not such that:
    /// Knots(Index - 1) < K < Knots(Index + 1)
    /// - M is greater than the degree of this BSpline curve
    /// or lower than the previous multiplicity of knot of
    /// index Index in the knots table.
    /// Standard_OutOfRange if Index is outside the bounds of the knots table.
    /// </summary>
    void SetKnot(int Index, double K);
    /// <summary>
    /// Modifies this BSpline curve by assigning the array
    /// K to its knots table. The multiplicity of the knots is not modified.
    /// Exceptions
    /// Standard_ConstructionError if the values in the
    /// array K are not in ascending order.
    /// Standard_OutOfRange if the bounds of the array
    /// K are not respectively 1 and the number of knots of this BSpline curve.
    /// </summary>
    void SetKnots(Macad::Occt::TColStd_Array1OfReal^ K);
    /// <summary>
    /// Changes the knot of range Index with its multiplicity.
    /// You can increase the multiplicity of a knot but it is
    /// not allowed to decrease the multiplicity of an existing knot.
    /// 
    /// Raised if K >= Knots(Index+1) or K <= Knots(Index-1).
    /// Raised if M is greater than Degree or lower than the previous
    /// multiplicity of knot of range Index.
    /// Raised if Index < 1 || Index > NbKnots
    /// </summary>
    void SetKnot(int Index, double K, int M);
    /// <summary>
    /// returns the parameter normalized within
    /// the period if the curve is periodic : otherwise
    /// does not do anything
    /// </summary>
    void PeriodicNormalization(double% U);
    /// <summary>
    /// Changes this BSpline curve into a periodic curve.
    /// To become periodic, the curve must first be closed.
    /// Next, the knot sequence must be periodic. For this,
    /// FirstUKnotIndex and LastUKnotIndex are used
    /// to compute I1 and I2, the indexes in the knots
    /// array of the knots corresponding to the first and
    /// last parameters of this BSpline curve.
    /// The period is therefore: Knots(I2) - Knots(I1).
    /// Consequently, the knots and poles tables are modified.
    /// Exceptions
    /// Standard_ConstructionError if this BSpline curve is not closed.
    /// </summary>
    void SetPeriodic();
    /// <summary>
    /// Assigns the knot of index Index in the knots table as
    /// the origin of this periodic BSpline curve. As a
    /// consequence, the knots and poles tables are modified.
    /// Exceptions
    /// Standard_NoSuchObject if this curve is not periodic.
    /// Standard_DomainError if Index is outside the bounds of the knots table.
    /// </summary>
    void SetOrigin(int Index);
    /// <summary>
    /// Set the origin of a periodic curve at Knot U. If U
    /// is  not a  knot  of  the  BSpline  a  new knot  is
    /// inserted. KnotVector and poles are modified.
    /// Raised if the curve is not periodic
    /// </summary>
    void SetOrigin(double U, double Tol);
    /// <summary>
    /// Changes this BSpline curve into a non-periodic
    /// curve. If this curve is already non-periodic, it is not modified.
    /// Note: the poles and knots tables are modified.
    /// Warning
    /// If this curve is periodic, as the multiplicity of the first
    /// and last knots is not modified, and is not equal to
    /// Degree + 1, where Degree is the degree of
    /// this BSpline curve, the start and end points of the
    /// curve are not its first and last poles.
    /// </summary>
    void SetNotPeriodic();
    /// <summary>
    /// Modifies this BSpline curve by assigning P to the pole
    /// of index Index in the poles table.
    /// Exceptions
    /// Standard_OutOfRange if Index is outside the
    /// bounds of the poles table.
    /// Standard_ConstructionError if Weight is negative or null.
    /// </summary>
    void SetPole(int Index, Macad::Occt::Pnt P);
    /// <summary>
    /// Modifies this BSpline curve by assigning P to the pole
    /// of index Index in the poles table.
    /// This syntax also allows you to modify the
    /// weight of the modified pole, which becomes Weight.
    /// In this case, if this BSpline curve is non-rational, it
    /// can become rational and vice versa.
    /// Exceptions
    /// Standard_OutOfRange if Index is outside the
    /// bounds of the poles table.
    /// Standard_ConstructionError if Weight is negative or null.
    /// </summary>
    void SetPole(int Index, Macad::Occt::Pnt P, double Weight);
    /// <summary>
    /// Changes the weight for the pole of range Index.
    /// If the curve was non rational it can become rational.
    /// If the curve was rational it can become non rational.
    /// 
    /// Raised if Index < 1 || Index > NbPoles
    /// Raised if Weight <= 0.0
    /// </summary>
    void SetWeight(int Index, double Weight);
    /// <summary>
    /// Moves the point of parameter U of this BSpline curve
    /// to P. Index1 and Index2 are the indexes in the table
    /// of poles of this BSpline curve of the first and last
    /// poles designated to be moved.
    /// FirstModifiedPole and LastModifiedPole are the
    /// indexes of the first and last poles which are effectively modified.
    /// In the event of incompatibility between Index1, Index2 and the value U:
    /// - no change is made to this BSpline curve, and
    /// - the FirstModifiedPole and LastModifiedPole are returned null.
    /// Exceptions
    /// Standard_OutOfRange if:
    /// - Index1 is greater than or equal to Index2, or
    /// - Index1 or Index2 is less than 1 or greater than the
    /// number of poles of this BSpline curve.
    /// </summary>
    void MovePoint(double U, Macad::Occt::Pnt P, int Index1, int Index2, int% FirstModifiedPole, int% LastModifiedPole);
    /// <summary>
    /// Move a point with parameter U to P.
    /// and makes it tangent at U be Tangent.
    /// StartingCondition = -1 means first can move
    /// EndingCondition   = -1 means last point can move
    /// StartingCondition = 0 means the first point cannot move
    /// EndingCondition   = 0 means the last point cannot move
    /// StartingCondition = 1 means the first point and tangent cannot move
    /// EndingCondition   = 1 means the last point and tangent cannot move
    /// and so forth
    /// ErrorStatus != 0 means that there are not enough degree of freedom
    /// with the constrain to deform the curve accordingly
    /// </summary>
    void MovePointAndTangent(double U, Macad::Occt::Pnt P, Macad::Occt::Vec Tangent, double Tolerance, int StartingCondition, int EndingCondition, int% ErrorStatus);
    /// <summary>
    /// Returns the continuity of the curve, the curve is at least C0.
    /// Raised if N < 0.
    /// </summary>
    bool IsCN(int N);
    /// <summary>
    /// Check if curve has at least G1 continuity in interval [theTf, theTl]
    /// Returns true if IsCN(1)
    /// or
    /// angle between "left" and "right" first derivatives at
    /// knots with C0 continuity is less then theAngTol
    /// only knots in interval [theTf, theTl] is checked
    /// </summary>
    bool IsG1(double theTf, double theTl, double theAngTol);
    /// <summary>
    /// Returns true if the distance between the first point and the
    /// last point of the curve is lower or equal to Resolution
    /// from package gp.
    /// Warnings :
    /// The first and the last point can be different from the first
    /// pole and the last pole of the curve.
    /// </summary>
    bool IsClosed();
    /// <summary>
    /// Returns True if the curve is periodic.
    /// </summary>
    bool IsPeriodic();
    /// <summary>
    /// Returns True if the weights are not identical.
    /// The tolerance criterion is Epsilon of the class Real.
    /// </summary>
    bool IsRational();
    /// <summary>
    /// Returns the global continuity of the curve :
    /// C0 : only geometric continuity,
    /// C1 : continuity of the first derivative all along the Curve,
    /// C2 : continuity of the second derivative all along the Curve,
    /// C3 : continuity of the third derivative all along the Curve,
    /// CN : the order of continuity is infinite.
    /// For a B-spline curve of degree d if a knot Ui has a
    /// multiplicity p the B-spline curve is only Cd-p continuous
    /// at Ui. So the global continuity of the curve can't be greater
    /// than Cd-p where p is the maximum multiplicity of the interior
    /// Knots. In the interior of a knot span the curve is infinitely
    /// continuously differentiable.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns the degree of this BSpline curve.
    /// The degree of a Geom_BSplineCurve curve cannot
    /// be greater than Geom_BSplineCurve::MaxDegree().
    /// Computation of value and derivatives
    /// </summary>
    int Degree();
    /// <summary>
    /// Returns in P the point of parameter U.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    /// <summary>
    /// Raised if the continuity of the curve is not C1.
    /// </summary>
    void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    /// <summary>
    /// Raised if the continuity of the curve is not C2.
    /// </summary>
    void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    /// <summary>
    /// Raised if the continuity of the curve is not C3.
    /// </summary>
    void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// For the point of parameter U of this BSpline curve,
    /// computes the vector corresponding to the Nth derivative.
    /// Warning
    /// On a point where the continuity of the curve is not the
    /// one requested, this function impacts the part defined
    /// by the parameter with a value greater than U, i.e. the
    /// part of the curve to the "right" of the singularity.
    /// Exceptions
    /// Standard_RangeError if N is less than 1.
    /// 
    /// The following functions compute the point of parameter U
    /// and the derivatives at this point on the B-spline curve
    /// arc defined between the knot FromK1 and the knot ToK2.
    /// U can be out of bounds [Knot (FromK1),  Knot (ToK2)] but
    /// for the computation we only use the definition of the curve
    /// between these two knots. This method is useful to compute
    /// local derivative, if the order of continuity of the whole
    /// curve is not greater enough.    Inside the parametric
    /// domain Knot (FromK1), Knot (ToK2) the evaluations are
    /// the same as if we consider the whole definition of the
    /// curve. Of course the evaluations are different outside
    /// this parametric domain.
    /// </summary>
    Macad::Occt::Vec DN(double U, int N);
    /// <summary>
    /// Raised if FromK1 = ToK2.
    /// </summary>
    Macad::Occt::Pnt LocalValue(double U, int FromK1, int ToK2);
    /// <summary>
    /// Raised if FromK1 = ToK2.
    /// </summary>
    void LocalD0(double U, int FromK1, int ToK2, Macad::Occt::Pnt% P);
    /// <summary>
    /// Raised if the local continuity of the curve is not C1
    /// between the knot K1 and the knot K2.
    /// Raised if FromK1 = ToK2.
    /// </summary>
    void LocalD1(double U, int FromK1, int ToK2, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    /// <summary>
    /// Raised if the local continuity of the curve is not C2
    /// between the knot K1 and the knot K2.
    /// Raised if FromK1 = ToK2.
    /// </summary>
    void LocalD2(double U, int FromK1, int ToK2, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    /// <summary>
    /// Raised if the local continuity of the curve is not C3
    /// between the knot K1 and the knot K2.
    /// Raised if FromK1 = ToK2.
    /// </summary>
    void LocalD3(double U, int FromK1, int ToK2, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// Raised if the local continuity of the curve is not CN
    /// between the knot K1 and the knot K2.
    /// Raised if FromK1 = ToK2.
    /// Raised if N < 1.
    /// </summary>
    Macad::Occt::Vec LocalDN(double U, int FromK1, int ToK2, int N);
    /// <summary>
    /// Returns the last point of the curve.
    /// Warnings :
    /// The last point of the curve is different from the last
    /// pole of the curve if the multiplicity of the last knot
    /// is lower than Degree.
    /// </summary>
    Macad::Occt::Pnt EndPoint();
    /// <summary>
    /// Returns the index in the knot array of the knot
    /// corresponding to the first or last parameter of this BSpline curve.
    /// For a BSpline curve, the first (or last) parameter
    /// (which gives the start (or end) point of the curve) is a
    /// knot value. However, if the multiplicity of the first (or
    /// last) knot is less than Degree + 1, where
    /// Degree is the degree of the curve, it is not the first
    /// (or last) knot of the curve.
    /// </summary>
    int FirstUKnotIndex();
    /// <summary>
    /// Returns the value of the first parameter of this
    /// BSpline curve. This is a knot value.
    /// The first parameter is the one of the start point of the BSpline curve.
    /// </summary>
    double FirstParameter();
    /// <summary>
    /// Returns the knot of range Index. When there is a knot
    /// with a multiplicity greater than 1 the knot is not repeated.
    /// The method Multiplicity can be used to get the multiplicity
    /// of the Knot.
    /// Raised if Index < 1 or Index > NbKnots
    /// </summary>
    double Knot(int Index);
    /// <summary>
    /// returns the knot values of the B-spline curve;
    /// Warning
    /// A knot with a multiplicity greater than 1 is not
    /// repeated in the knot table. The Multiplicity function
    /// can be used to obtain the multiplicity of each knot.
    /// 
    /// Raised K.Lower() is less than number of first knot or
    /// K.Upper() is more than number of last knot.
    /// </summary>
    void Knots(Macad::Occt::TColStd_Array1OfReal^ K);
    /// <summary>
    /// returns the knot values of the B-spline curve;
    /// Warning
    /// A knot with a multiplicity greater than 1 is not
    /// repeated in the knot table. The Multiplicity function
    /// can be used to obtain the multiplicity of each knot.
    /// </summary>
    Macad::Occt::TColStd_Array1OfReal^ Knots();
    /// <summary>
    /// Returns K, the knots sequence of this BSpline curve.
    /// In this sequence, knots with a multiplicity greater than 1 are repeated.
    /// In the case of a non-periodic curve the length of the
    /// sequence must be equal to the sum of the NbKnots
    /// multiplicities of the knots of the curve (where
    /// NbKnots is the number of knots of this BSpline
    /// curve). This sum is also equal to : NbPoles + Degree + 1
    /// where NbPoles is the number of poles and
    /// Degree the degree of this BSpline curve.
    /// In the case of a periodic curve, if there are k periodic
    /// knots, the period is Knot(k+1) - Knot(1).
    /// The initial sequence is built by writing knots 1 to k+1,
    /// which are repeated according to their corresponding multiplicities.
    /// If Degree is the degree of the curve, the degree of
    /// continuity of the curve at the knot of index 1 (or k+1)
    /// is equal to c = Degree + 1 - Mult(1). c
    /// knots are then inserted at the beginning and end of
    /// the initial sequence:
    /// - the c values of knots preceding the first item
    /// Knot(k+1) in the initial sequence are inserted
    /// at the beginning; the period is subtracted from these c values;
    /// - the c values of knots following the last item
    /// Knot(1) in the initial sequence are inserted at
    /// the end; the period is added to these c values.
    /// The length of the sequence must therefore be equal to:
    /// NbPoles + 2*Degree - Mult(1) + 2.
    /// Example
    /// For a non-periodic BSpline curve of degree 2 where:
    /// - the array of knots is: { k1 k2 k3 k4 },
    /// - with associated multiplicities: { 3 1 2 3 },
    /// the knot sequence is:
    /// K = { k1 k1 k1 k2 k3 k3 k4 k4 k4 }
    /// For a periodic BSpline curve of degree 4 , which is
    /// "C1" continuous at the first knot, and where :
    /// - the periodic knots are: { k1 k2 k3 (k4) }
    /// (3 periodic knots: the points of parameter k1 and k4
    /// are identical, the period is p = k4 - k1),
    /// - with associated multiplicities: { 3 1 2 (3) },
    /// the degree of continuity at knots k1 and k4 is:
    /// Degree + 1 - Mult(i) = 2.
    /// 2 supplementary knots are added at the beginning
    /// and end of the sequence:
    /// - at the beginning: the 2 knots preceding k4 minus
    /// the period; in this example, this is k3 - p both times;
    /// - at the end: the 2 knots following k1 plus the period;
    /// in this example, this is k2 + p and k3 + p.
    /// The knot sequence is therefore:
    /// K = { k3-p k3-p k1 k1 k1 k2 k3 k3
    /// k4 k4 k4 k2+p k3+p }
    /// Exceptions
    /// Raised if K.Lower() is less than number of first knot
    /// in knot sequence with repetitions or K.Upper() is more
    /// than number of last knot in knot sequence with repetitions.
    /// </summary>
    void KnotSequence(Macad::Occt::TColStd_Array1OfReal^ K);
    /// <summary>
    /// returns the knots of the B-spline curve.
    /// Knots with multiplicit greater than 1 are repeated
    /// </summary>
    Macad::Occt::TColStd_Array1OfReal^ KnotSequence();
    /// <summary>
    /// Returns NonUniform or Uniform or QuasiUniform or PiecewiseBezier.
    /// If all the knots differ by a positive constant from the
    /// preceding knot the BSpline Curve can be :
    /// - Uniform if all the knots are of multiplicity 1,
    /// - QuasiUniform if all the knots are of multiplicity 1 except for
    /// the first and last knot which are of multiplicity Degree + 1,
    /// - PiecewiseBezier if the first and last knots have multiplicity
    /// Degree + 1 and if interior knots have multiplicity Degree
    /// A piecewise Bezier with only two knots is a BezierCurve.
    /// else the curve is non uniform.
    /// The tolerance criterion is Epsilon from class Real.
    /// </summary>
    Macad::Occt::GeomAbs_BSplKnotDistribution KnotDistribution();
    /// <summary>
    /// For a BSpline curve the last parameter (which gives the
    /// end point of the curve) is a knot value but if the
    /// multiplicity of the last knot index is lower than
    /// Degree + 1 it is not the last knot of the curve. This
    /// method computes the index of the knot corresponding to
    /// the last parameter.
    /// </summary>
    int LastUKnotIndex();
    /// <summary>
    /// Computes the parametric value of the end point of the curve.
    /// It is a knot value.
    /// </summary>
    double LastParameter();
    /// <summary>
    /// Locates the parametric value U in the sequence of knots.
    /// If "WithKnotRepetition" is True we consider the knot's
    /// representation with repetition of multiple knot value,
    /// otherwise  we consider the knot's representation with
    /// no repetition of multiple knot values.
    /// Knots (I1) <= U <= Knots (I2)
    /// . if I1 = I2  U is a knot value (the tolerance criterion
    /// ParametricTolerance is used).
    /// . if I1 < 1  => U < Knots (1) - Abs(ParametricTolerance)
    /// . if I2 > NbKnots => U > Knots (NbKnots) + Abs(ParametricTolerance)
    /// </summary>
    void LocateU(double U, double ParametricTolerance, int% I1, int% I2, bool WithKnotRepetition);
    /// <summary>
    /// Locates the parametric value U in the sequence of knots.
    /// If "WithKnotRepetition" is True we consider the knot's
    /// representation with repetition of multiple knot value,
    /// otherwise  we consider the knot's representation with
    /// no repetition of multiple knot values.
    /// Knots (I1) <= U <= Knots (I2)
    /// . if I1 = I2  U is a knot value (the tolerance criterion
    /// ParametricTolerance is used).
    /// . if I1 < 1  => U < Knots (1) - Abs(ParametricTolerance)
    /// . if I2 > NbKnots => U > Knots (NbKnots) + Abs(ParametricTolerance)
    /// </summary>
    void LocateU(double U, double ParametricTolerance, int% I1, int% I2);
    /// <summary>
    /// Returns the multiplicity of the knots of range Index.
    /// Raised if Index < 1 or Index > NbKnots
    /// </summary>
    int Multiplicity(int Index);
    /// <summary>
    /// Returns the multiplicity of the knots of the curve.
    /// 
    /// Raised if the length of M is not equal to NbKnots.
    /// </summary>
    void Multiplicities(Macad::Occt::TColStd_Array1OfInteger^ M);
    /// <summary>
    /// returns the multiplicity of the knots of the curve.
    /// </summary>
    Macad::Occt::TColStd_Array1OfInteger^ Multiplicities();
    /// <summary>
    /// Returns the number of knots. This method returns the number of
    /// knot without repetition of multiple knots.
    /// </summary>
    int NbKnots();
    /// <summary>
    /// Returns the number of poles
    /// </summary>
    int NbPoles();
    /// <summary>
    /// Returns the pole of range Index.
    /// Raised if Index < 1 or Index > NbPoles.
    /// </summary>
    Macad::Occt::Pnt Pole(int Index);
    /// <summary>
    /// Returns the poles of the B-spline curve;
    /// 
    /// Raised if the length of P is not equal to the number of poles.
    /// </summary>
    void Poles(Macad::Occt::TColgp_Array1OfPnt^ P);
    /// <summary>
    /// Returns the poles of the B-spline curve;
    /// </summary>
    Macad::Occt::TColgp_Array1OfPnt^ Poles();
    /// <summary>
    /// Returns the start point of the curve.
    /// Warnings :
    /// This point is different from the first pole of the curve if the
    /// multiplicity of the first knot is lower than Degree.
    /// </summary>
    Macad::Occt::Pnt StartPoint();
    /// <summary>
    /// Returns the weight of the pole of range Index .
    /// Raised if Index < 1 or Index > NbPoles.
    /// </summary>
    double Weight(int Index);
    /// <summary>
    /// Returns the weights of the B-spline curve;
    /// 
    /// Raised if the length of W is not equal to NbPoles.
    /// </summary>
    void Weights(Macad::Occt::TColStd_Array1OfReal^ W);
    /// <summary>
    /// Returns the weights of the B-spline curve;
    /// </summary>
    Macad::Occt::TColStd_Array1OfReal^ Weights();
    /// <summary>
    /// Applies the transformation T to this BSpline curve.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Returns the value of the maximum degree of the normalized
    /// B-spline basis functions in this package.
    /// </summary>
    static int MaxDegree();
    /// <summary>
    /// Computes for this BSpline curve the parametric
    /// tolerance UTolerance for a given 3D tolerance Tolerance3D.
    /// If f(t) is the equation of this BSpline curve,
    /// UTolerance ensures that:
    /// | t1 - t0| < Utolerance ===>
    /// |f(t1) - f(t0)| < Tolerance3D
    /// </summary>
    void Resolution(double Tolerance3D, double% UTolerance);
    /// <summary>
    /// Creates a new object which is a copy of this BSpline curve.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Compare two Bspline curve on identity;
    /// </summary>
    bool IsEqual(Macad::Occt::Geom_BSplineCurve^ theOther, double thePreci);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_BSplineCurve^ CreateDowncasted(::Geom_BSplineCurve* instance);
}; // class Geom_BSplineCurve

//---------------------------------------------------------------------
//  Class  Geom_BSplineSurface
//---------------------------------------------------------------------
/// <summary>
/// Describes a BSpline surface.
/// In each parametric direction, a BSpline surface can be:
/// - uniform or non-uniform,
/// - rational or non-rational,
/// - periodic or non-periodic.
/// A BSpline surface is defined by:
/// - its degrees, in the u and v parametric directions,
/// - its periodic characteristic, in the u and v parametric directions,
/// - a table of poles, also called control points (together
/// with the associated weights if the surface is rational), and
/// - a table of knots, together with the associated multiplicities.
/// The degree of a Geom_BSplineSurface is limited to
/// a value (25) which is defined and controlled by the
/// system. This value is returned by the function MaxDegree.
/// Poles and Weights
/// Poles and Weights are manipulated using two associative double arrays:
/// - the poles table, which is a double array of gp_Pnt points, and
/// - the weights table, which is a double array of reals.
/// The bounds of the poles and weights arrays are:
/// - 1 and NbUPoles for the row bounds (provided
/// that the BSpline surface is not periodic in the u
/// parametric direction), where NbUPoles is the
/// number of poles of the surface in the u parametric direction, and
/// - 1 and NbVPoles for the column bounds (provided
/// that the BSpline surface is not periodic in the v
/// parametric direction), where NbVPoles is the
/// number of poles of the surface in the v parametric direction.
/// The poles of the surface are the points used to shape
/// and reshape the surface. They comprise a rectangular network.
/// If the surface is not periodic:
/// - The points (1, 1), (NbUPoles, 1), (1,
/// NbVPoles), and (NbUPoles, NbVPoles)
/// are the four parametric "corners" of the surface.
/// - The first column of poles and the last column of
/// poles define two BSpline curves which delimit the
/// surface in the v parametric direction. These are the
/// v isoparametric curves corresponding to the two
/// bounds of the v parameter.
/// - The first row of poles and the last row of poles
/// define two BSpline curves which delimit the surface
/// in the u parametric direction. These are the u
/// isoparametric curves corresponding to the two bounds of the u parameter.
/// If the surface is periodic, these geometric properties are not verified.
/// It is more difficult to define a geometrical significance
/// for the weights. However they are useful for
/// representing a quadric surface precisely. Moreover, if
/// the weights of all the poles are equal, the surface has
/// a polynomial equation, and hence is a "non-rational surface".
/// The non-rational surface is a special, but frequently
/// used, case, where all poles have identical weights.
/// The weights are defined and used only in the case of
/// a rational surface. The rational characteristic is
/// defined in each parametric direction. A surface can be
/// rational in the u parametric direction, and
/// non-rational in the v parametric direction.
/// Knots and Multiplicities
/// For a Geom_BSplineSurface the table of knots is
/// made up of two increasing sequences of reals, without
/// repetition, one for each parametric direction. The
/// multiplicities define the repetition of the knots.
/// A BSpline surface comprises multiple contiguous
/// patches, which are themselves polynomial or rational
/// surfaces. The knots are the parameters of the
/// isoparametric curves which limit these contiguous
/// patches. The multiplicity of a knot on a BSpline
/// surface (in a given parametric direction) is related to
/// the degree of continuity of the surface at that knot in
/// that parametric direction:
/// Degree of continuity at knot(i) = Degree - Multi(i) where:
/// - Degree is the degree of the BSpline surface in
/// the given parametric direction, and
/// - Multi(i) is the multiplicity of knot number i in
/// the given parametric direction.
/// There are some special cases, where the knots are
/// regularly spaced in one parametric direction (i.e. the
/// difference between two consecutive knots is a constant).
/// - "Uniform": all the multiplicities are equal to 1.
/// - "Quasi-uniform": all the multiplicities are equal to 1,
/// except for the first and last knots in this parametric
/// direction, and these are equal to Degree + 1.
/// - "Piecewise Bezier": all the multiplicities are equal to
/// Degree except for the first and last knots, which
/// are equal to Degree + 1. This surface is a
/// concatenation of Bezier patches in the given
/// parametric direction.
/// If the BSpline surface is not periodic in a given
/// parametric direction, the bounds of the knots and
/// multiplicities tables are 1 and NbKnots, where
/// NbKnots is the number of knots of the BSpline
/// surface in that parametric direction.
/// If the BSpline surface is periodic in a given parametric
/// direction, and there are k periodic knots and p
/// periodic poles in that parametric direction:
/// - the period is such that:
/// period = Knot(k+1) - Knot(1), and
/// - the poles and knots tables in that parametric
/// direction can be considered as infinite tables, such that:
/// Knot(i+k) = Knot(i) + period, and
/// Pole(i+p) = Pole(i)
/// Note: The data structure tables for a periodic BSpline
/// surface are more complex than those of a non-periodic one.
/// References :
/// . A survey of curve and surface methods in CADG Wolfgang BOHM
/// CAGD 1 (1984)
/// . On de Boor-like algorithms and blossoming Wolfgang BOEHM
/// cagd 5 (1988)
/// . Blossoming and knot insertion algorithms for B-spline curves
/// Ronald N. GOLDMAN
/// . Modelisation des surfaces en CAO, Henri GIAUME Peugeot SA
/// . Curves and Surfaces for Computer Aided Geometric Design,
/// a practical guide Gerald Farin
/// </summary>
public ref class Geom_BSplineSurface sealed
    : public Macad::Occt::Geom_BoundedSurface
{

#ifdef Include_Geom_BSplineSurface_h
public:
    Include_Geom_BSplineSurface_h
#endif

public:
    Geom_BSplineSurface(::Geom_BSplineSurface* nativeInstance)
        : Macad::Occt::Geom_BoundedSurface( nativeInstance )
    {}

    Geom_BSplineSurface(::Geom_BSplineSurface& nativeInstance)
        : Macad::Occt::Geom_BoundedSurface( nativeInstance )
    {}

    property ::Geom_BSplineSurface* NativeInstance
    {
        ::Geom_BSplineSurface* get()
        {
            return static_cast<::Geom_BSplineSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates  a non-rational b-spline surface (weights
    /// default value is 1.).
    /// The following conditions must be verified.
    /// 0 < UDegree <= MaxDegree.
    /// UKnots.Length() == UMults.Length() >= 2
    /// UKnots(i) < UKnots(i+1) (Knots are increasing)
    /// 1 <= UMults(i) <= UDegree
    /// On a   non  uperiodic   surface    the  first and    last
    /// umultiplicities  may  be     UDegree+1  (this   is   even
    /// recommended if you want the curve  to start and finish on
    /// the first and last pole).
    /// On a uperiodic     surface  the first    and   the   last
    /// umultiplicities must be the same.
    /// on non-uperiodic surfaces
    /// Poles.ColLength() == Sum(UMults(i)) - UDegree - 1 >= 2
    /// on uperiodic surfaces
    /// Poles.ColLength() == Sum(UMults(i)) except the first or last
    /// The previous conditions for U holds  also for V, with the
    /// RowLength of the poles.
    /// </summary>
    Geom_BSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool UPeriodic, bool VPeriodic);
    /// <summary>
    /// Creates  a non-rational b-spline surface (weights
    /// default value is 1.).
    /// The following conditions must be verified.
    /// 0 < UDegree <= MaxDegree.
    /// UKnots.Length() == UMults.Length() >= 2
    /// UKnots(i) < UKnots(i+1) (Knots are increasing)
    /// 1 <= UMults(i) <= UDegree
    /// On a   non  uperiodic   surface    the  first and    last
    /// umultiplicities  may  be     UDegree+1  (this   is   even
    /// recommended if you want the curve  to start and finish on
    /// the first and last pole).
    /// On a uperiodic     surface  the first    and   the   last
    /// umultiplicities must be the same.
    /// on non-uperiodic surfaces
    /// Poles.ColLength() == Sum(UMults(i)) - UDegree - 1 >= 2
    /// on uperiodic surfaces
    /// Poles.ColLength() == Sum(UMults(i)) except the first or last
    /// The previous conditions for U holds  also for V, with the
    /// RowLength of the poles.
    /// </summary>
    Geom_BSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool UPeriodic);
    /// <summary>
    /// Creates  a non-rational b-spline surface (weights
    /// default value is 1.).
    /// The following conditions must be verified.
    /// 0 < UDegree <= MaxDegree.
    /// UKnots.Length() == UMults.Length() >= 2
    /// UKnots(i) < UKnots(i+1) (Knots are increasing)
    /// 1 <= UMults(i) <= UDegree
    /// On a   non  uperiodic   surface    the  first and    last
    /// umultiplicities  may  be     UDegree+1  (this   is   even
    /// recommended if you want the curve  to start and finish on
    /// the first and last pole).
    /// On a uperiodic     surface  the first    and   the   last
    /// umultiplicities must be the same.
    /// on non-uperiodic surfaces
    /// Poles.ColLength() == Sum(UMults(i)) - UDegree - 1 >= 2
    /// on uperiodic surfaces
    /// Poles.ColLength() == Sum(UMults(i)) except the first or last
    /// The previous conditions for U holds  also for V, with the
    /// RowLength of the poles.
    /// </summary>
    Geom_BSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree);
    /// <summary>
    /// Creates  a non-rational b-spline surface (weights
    /// default value is 1.).
    /// 
    /// The following conditions must be verified.
    /// 0 < UDegree <= MaxDegree.
    /// 
    /// UKnots.Length() == UMults.Length() >= 2
    /// 
    /// UKnots(i) < UKnots(i+1) (Knots are increasing)
    /// 1 <= UMults(i) <= UDegree
    /// 
    /// On a   non  uperiodic   surface    the  first and    last
    /// umultiplicities  may  be     UDegree+1  (this   is   even
    /// recommended if you want the curve  to start and finish on
    /// the first and last pole).
    /// 
    /// On a uperiodic     surface  the first    and   the   last
    /// umultiplicities must be the same.
    /// 
    /// on non-uperiodic surfaces
    /// 
    /// Poles.ColLength() == Sum(UMults(i)) - UDegree - 1 >= 2
    /// 
    /// on uperiodic surfaces
    /// 
    /// Poles.ColLength() == Sum(UMults(i)) except the first or
    /// last
    /// 
    /// The previous conditions for U holds  also for V, with the
    /// RowLength of the poles.
    /// </summary>
    Geom_BSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool UPeriodic, bool VPeriodic);
    /// <summary>
    /// Creates  a non-rational b-spline surface (weights
    /// default value is 1.).
    /// 
    /// The following conditions must be verified.
    /// 0 < UDegree <= MaxDegree.
    /// 
    /// UKnots.Length() == UMults.Length() >= 2
    /// 
    /// UKnots(i) < UKnots(i+1) (Knots are increasing)
    /// 1 <= UMults(i) <= UDegree
    /// 
    /// On a   non  uperiodic   surface    the  first and    last
    /// umultiplicities  may  be     UDegree+1  (this   is   even
    /// recommended if you want the curve  to start and finish on
    /// the first and last pole).
    /// 
    /// On a uperiodic     surface  the first    and   the   last
    /// umultiplicities must be the same.
    /// 
    /// on non-uperiodic surfaces
    /// 
    /// Poles.ColLength() == Sum(UMults(i)) - UDegree - 1 >= 2
    /// 
    /// on uperiodic surfaces
    /// 
    /// Poles.ColLength() == Sum(UMults(i)) except the first or
    /// last
    /// 
    /// The previous conditions for U holds  also for V, with the
    /// RowLength of the poles.
    /// </summary>
    Geom_BSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool UPeriodic);
    /// <summary>
    /// Creates  a non-rational b-spline surface (weights
    /// default value is 1.).
    /// 
    /// The following conditions must be verified.
    /// 0 < UDegree <= MaxDegree.
    /// 
    /// UKnots.Length() == UMults.Length() >= 2
    /// 
    /// UKnots(i) < UKnots(i+1) (Knots are increasing)
    /// 1 <= UMults(i) <= UDegree
    /// 
    /// On a   non  uperiodic   surface    the  first and    last
    /// umultiplicities  may  be     UDegree+1  (this   is   even
    /// recommended if you want the curve  to start and finish on
    /// the first and last pole).
    /// 
    /// On a uperiodic     surface  the first    and   the   last
    /// umultiplicities must be the same.
    /// 
    /// on non-uperiodic surfaces
    /// 
    /// Poles.ColLength() == Sum(UMults(i)) - UDegree - 1 >= 2
    /// 
    /// on uperiodic surfaces
    /// 
    /// Poles.ColLength() == Sum(UMults(i)) except the first or
    /// last
    /// 
    /// The previous conditions for U holds  also for V, with the
    /// RowLength of the poles.
    /// </summary>
    Geom_BSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree);
    /// <summary>
    /// Exchanges the u and v parametric directions on
    /// this BSpline surface.
    /// As a consequence:
    /// - the poles and weights tables are transposed,
    /// - the knots and multiplicities tables are exchanged,
    /// - degrees of continuity, and rational, periodic and
    /// uniform characteristics are exchanged, and
    /// - the orientation of the surface is inverted.
    /// </summary>
    void ExchangeUV();
    /// <summary>
    /// Sets the surface U periodic.
    /// Modifies this surface to be periodic in the U
    /// parametric direction.
    /// To become periodic in a given parametric direction a
    /// surface must be closed in that parametric direction,
    /// and the knot sequence relative to that direction must be periodic.
    /// To generate this periodic sequence of knots, the
    /// functions FirstUKnotIndex and LastUKnotIndex  are used to
    /// compute I1 and I2. These are the indexes, in the
    /// knot array associated with the given parametric
    /// direction, of the knots that correspond to the first and
    /// last parameters of this BSpline surface in the given
    /// parametric direction. Hence the period is:
    /// Knots(I1) - Knots(I2)
    /// As a result, the knots and poles tables are modified.
    /// Exceptions
    /// Standard_ConstructionError if the surface is not
    /// closed in the given parametric direction.
    /// </summary>
    void SetUPeriodic();
    /// <summary>
    /// Sets the surface V periodic.
    /// Modifies this surface to be periodic in the V
    /// parametric direction.
    /// To become periodic in a given parametric direction a
    /// surface must be closed in that parametric direction,
    /// and the knot sequence relative to that direction must be periodic.
    /// To generate this periodic sequence of knots, the
    /// functions FirstVKnotIndex and LastVKnotIndex are used to
    /// compute I1 and I2. These are the indexes, in the
    /// knot array associated with the given parametric
    /// direction, of the knots that correspond to the first and
    /// last parameters of this BSpline surface in the given
    /// parametric direction. Hence the period is:
    /// Knots(I1) - Knots(I2)
    /// As a result, the knots and poles tables are modified.
    /// Exceptions
    /// Standard_ConstructionError if the surface is not
    /// closed in the given parametric direction.
    /// </summary>
    void SetVPeriodic();
    /// <summary>
    /// returns the parameter normalized within
    /// the period if the surface is periodic : otherwise
    /// does not do anything
    /// </summary>
    void PeriodicNormalization(double% U, double% V);
    /// <summary>
    /// Assigns the knot of index Index in the knots table in
    /// the corresponding parametric direction to be the
    /// origin of this periodic BSpline surface. As a
    /// consequence, the knots and poles tables are modified.
    /// Exceptions
    /// Standard_NoSuchObject if this BSpline surface is
    /// not periodic in the given parametric direction.
    /// Standard_DomainError if Index is outside the
    /// bounds of the knots table in the given parametric direction.
    /// </summary>
    void SetUOrigin(int Index);
    /// <summary>
    /// Assigns the knot of index Index in the knots table in
    /// the corresponding parametric direction to be the
    /// origin of this periodic BSpline surface. As a
    /// consequence, the knots and poles tables are modified.
    /// Exceptions
    /// Standard_NoSuchObject if this BSpline surface is
    /// not periodic in the given parametric direction.
    /// Standard_DomainError if Index is outside the
    /// bounds of the knots table in the given parametric direction.
    /// </summary>
    void SetVOrigin(int Index);
    /// <summary>
    /// Sets the surface U not periodic.
    /// Changes this BSpline surface into a non-periodic
    /// surface along U direction.
    /// If this surface is already non-periodic, it is not modified.
    /// Note: the poles and knots tables are modified.
    /// </summary>
    void SetUNotPeriodic();
    /// <summary>
    /// Sets the surface V not periodic.
    /// Changes this BSpline surface into a non-periodic
    /// surface along V direction.
    /// If this surface is already non-periodic, it is not modified.
    /// Note: the poles and knots tables are modified.
    /// </summary>
    void SetVNotPeriodic();
    /// <summary>
    /// Changes the orientation of this BSpline surface in the
    /// U parametric direction. The bounds of the
    /// surface are not changed but the given parametric
    /// direction is reversed. Hence the orientation of the
    /// surface is reversed.
    /// The knots and poles tables are modified.
    /// </summary>
    void UReverse();
    /// <summary>
    /// Changes the orientation of this BSpline surface in the
    /// V parametric direction. The bounds of the
    /// surface are not changed but the given parametric
    /// direction is reversed. Hence the orientation of the
    /// surface is reversed.
    /// The knots and poles tables are modified.
    /// </summary>
    void VReverse();
    /// <summary>
    /// Computes the u parameter on the modified
    /// surface, produced by reversing its U parametric
    /// direction, for the point of u parameter U,  on this BSpline surface.
    /// For a BSpline surface, these functions return respectively:
    /// - UFirst + ULast - U,
    /// where UFirst, ULast are
    /// the values of the first and last parameters of this
    /// BSpline surface, in the u parametric directions.
    /// </summary>
    double UReversedParameter(double U);
    /// <summary>
    /// Computes the v parameter on the modified
    /// surface, produced by reversing its V parametric
    /// direction, for the point of v parameter V on this BSpline surface.
    /// For a BSpline surface, these functions return respectively:
    /// - VFirst + VLast - V,
    /// VFirst and VLast are
    /// the values of the first and last parameters of this
    /// BSpline surface, in the v pametric directions.
    /// </summary>
    double VReversedParameter(double V);
    /// <summary>
    /// Increases the degrees of this BSpline surface to
    /// UDegree and VDegree in the u and v parametric
    /// directions respectively. As a result, the tables of poles,
    /// weights and multiplicities are modified. The tables of
    /// knots is not changed.
    /// Note: Nothing is done if the given degree is less than
    /// or equal to the current degree in the corresponding
    /// parametric direction.
    /// Exceptions
    /// Standard_ConstructionError if UDegree or
    /// VDegree is greater than
    /// Geom_BSplineSurface::MaxDegree().
    /// </summary>
    void IncreaseDegree(int UDegree, int VDegree);
    /// <summary>
    /// Inserts into the knots table for the U
    /// parametric direction of this BSpline surface:
    /// - the values of the array Knots, with their respective
    /// multiplicities, Mults.
    /// If the knot value to insert already exists in the table, its multiplicity is:
    /// - increased by M, if Add is true (the default), or
    /// - increased to M, if Add is false.
    /// The tolerance criterion used to check the equality of
    /// the knots is the larger of the values ParametricTolerance and
    /// Standard_Real::Epsilon(val), where val is the knot value to be inserted.
    /// Warning
    /// - If a given multiplicity coefficient is null, or negative, nothing is done.
    /// - The new multiplicity of a knot is limited to the degree of this BSpline surface in the
    /// corresponding parametric direction.
    /// Exceptions
    /// Standard_ConstructionError if a knot value to
    /// insert is outside the bounds of this BSpline surface in
    /// the specified parametric direction. The comparison
    /// uses the precision criterion ParametricTolerance.
    /// </summary>
    void InsertUKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance, bool Add);
    /// <summary>
    /// Inserts into the knots table for the U
    /// parametric direction of this BSpline surface:
    /// - the values of the array Knots, with their respective
    /// multiplicities, Mults.
    /// If the knot value to insert already exists in the table, its multiplicity is:
    /// - increased by M, if Add is true (the default), or
    /// - increased to M, if Add is false.
    /// The tolerance criterion used to check the equality of
    /// the knots is the larger of the values ParametricTolerance and
    /// Standard_Real::Epsilon(val), where val is the knot value to be inserted.
    /// Warning
    /// - If a given multiplicity coefficient is null, or negative, nothing is done.
    /// - The new multiplicity of a knot is limited to the degree of this BSpline surface in the
    /// corresponding parametric direction.
    /// Exceptions
    /// Standard_ConstructionError if a knot value to
    /// insert is outside the bounds of this BSpline surface in
    /// the specified parametric direction. The comparison
    /// uses the precision criterion ParametricTolerance.
    /// </summary>
    void InsertUKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance);
    /// <summary>
    /// Inserts into the knots table for the U
    /// parametric direction of this BSpline surface:
    /// - the values of the array Knots, with their respective
    /// multiplicities, Mults.
    /// If the knot value to insert already exists in the table, its multiplicity is:
    /// - increased by M, if Add is true (the default), or
    /// - increased to M, if Add is false.
    /// The tolerance criterion used to check the equality of
    /// the knots is the larger of the values ParametricTolerance and
    /// Standard_Real::Epsilon(val), where val is the knot value to be inserted.
    /// Warning
    /// - If a given multiplicity coefficient is null, or negative, nothing is done.
    /// - The new multiplicity of a knot is limited to the degree of this BSpline surface in the
    /// corresponding parametric direction.
    /// Exceptions
    /// Standard_ConstructionError if a knot value to
    /// insert is outside the bounds of this BSpline surface in
    /// the specified parametric direction. The comparison
    /// uses the precision criterion ParametricTolerance.
    /// </summary>
    void InsertUKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults);
    /// <summary>
    /// Inserts into the knots table for the V
    /// parametric direction of this BSpline surface:
    /// - the values of the array Knots, with their respective
    /// multiplicities, Mults.
    /// If the knot value to insert already exists in the table, its multiplicity is:
    /// - increased by M, if Add is true (the default), or
    /// - increased to M, if Add is false.
    /// The tolerance criterion used to check the equality of
    /// the knots is the larger of the values ParametricTolerance and
    /// Standard_Real::Epsilon(val), where val is the knot value to be inserted.
    /// Warning
    /// - If a given multiplicity coefficient is null, or negative, nothing is done.
    /// - The new multiplicity of a knot is limited to the degree of this BSpline surface in the
    /// corresponding parametric direction.
    /// Exceptions
    /// Standard_ConstructionError if a knot value to
    /// insert is outside the bounds of this BSpline surface in
    /// the specified parametric direction. The comparison
    /// uses the precision criterion ParametricTolerance.
    /// </summary>
    void InsertVKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance, bool Add);
    /// <summary>
    /// Inserts into the knots table for the V
    /// parametric direction of this BSpline surface:
    /// - the values of the array Knots, with their respective
    /// multiplicities, Mults.
    /// If the knot value to insert already exists in the table, its multiplicity is:
    /// - increased by M, if Add is true (the default), or
    /// - increased to M, if Add is false.
    /// The tolerance criterion used to check the equality of
    /// the knots is the larger of the values ParametricTolerance and
    /// Standard_Real::Epsilon(val), where val is the knot value to be inserted.
    /// Warning
    /// - If a given multiplicity coefficient is null, or negative, nothing is done.
    /// - The new multiplicity of a knot is limited to the degree of this BSpline surface in the
    /// corresponding parametric direction.
    /// Exceptions
    /// Standard_ConstructionError if a knot value to
    /// insert is outside the bounds of this BSpline surface in
    /// the specified parametric direction. The comparison
    /// uses the precision criterion ParametricTolerance.
    /// </summary>
    void InsertVKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double ParametricTolerance);
    /// <summary>
    /// Inserts into the knots table for the V
    /// parametric direction of this BSpline surface:
    /// - the values of the array Knots, with their respective
    /// multiplicities, Mults.
    /// If the knot value to insert already exists in the table, its multiplicity is:
    /// - increased by M, if Add is true (the default), or
    /// - increased to M, if Add is false.
    /// The tolerance criterion used to check the equality of
    /// the knots is the larger of the values ParametricTolerance and
    /// Standard_Real::Epsilon(val), where val is the knot value to be inserted.
    /// Warning
    /// - If a given multiplicity coefficient is null, or negative, nothing is done.
    /// - The new multiplicity of a knot is limited to the degree of this BSpline surface in the
    /// corresponding parametric direction.
    /// Exceptions
    /// Standard_ConstructionError if a knot value to
    /// insert is outside the bounds of this BSpline surface in
    /// the specified parametric direction. The comparison
    /// uses the precision criterion ParametricTolerance.
    /// </summary>
    void InsertVKnots(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults);
    /// <summary>
    /// Reduces to M the multiplicity of the knot of index
    /// Index in the U parametric direction. If M is 0, the knot is removed.
    /// With a modification of this type, the table of poles is also modified.
    /// Two different algorithms are used systematically to
    /// compute the new poles of the surface. For each
    /// pole, the distance between the pole calculated
    /// using the first algorithm and the same pole
    /// calculated using the second algorithm, is checked. If
    /// this distance is less than Tolerance it ensures that
    /// the surface is not modified by more than Tolerance.
    /// Under these conditions, the function returns true;
    /// otherwise, it returns false.
    /// A low tolerance prevents modification of the
    /// surface. A high tolerance "smoothes" the surface.
    /// Exceptions
    /// Standard_OutOfRange if Index is outside the
    /// bounds of the knots table of this BSpline surface.
    /// </summary>
    bool RemoveUKnot(int Index, int M, double Tolerance);
    /// <summary>
    /// Reduces to M the multiplicity of the knot of index
    /// Index in the V parametric direction. If M is 0, the knot is removed.
    /// With a modification of this type, the table of poles is also modified.
    /// Two different algorithms are used systematically to
    /// compute the new poles of the surface. For each
    /// pole, the distance between the pole calculated
    /// using the first algorithm and the same pole
    /// calculated using the second algorithm, is checked. If
    /// this distance is less than Tolerance it ensures that
    /// the surface is not modified by more than Tolerance.
    /// Under these conditions, the function returns true;
    /// otherwise, it returns false.
    /// A low tolerance prevents modification of the
    /// surface. A high tolerance "smoothes" the surface.
    /// Exceptions
    /// Standard_OutOfRange if Index is outside the
    /// bounds of the knots table of this BSpline surface.
    /// </summary>
    bool RemoveVKnot(int Index, int M, double Tolerance);
    /// <summary>
    /// Increases the multiplicity of the knot of range UIndex
    /// in the UKnots sequence.
    /// M is the new multiplicity. M must be greater than the
    /// previous multiplicity and lower or equal to the degree
    /// of the surface in the U parametric direction.
    /// Raised if M is not in the range [1, UDegree]
    /// 
    /// Raised if UIndex is not in the range [FirstUKnotIndex,
    /// LastUKnotIndex] given by the methods with the same name.
    /// </summary>
    void IncreaseUMultiplicity(int UIndex, int M);
    /// <summary>
    /// Increases until order M the multiplicity of the set of knots
    /// FromI1,...., ToI2 in the U direction. This method can be used
    /// to make a B_spline surface into a PiecewiseBezier B_spline
    /// surface.
    /// If <me> was uniform, it can become non uniform.
    /// 
    /// Raised if FromI1 or ToI2 is out of the range [FirstUKnotIndex,
    /// LastUKnotIndex].
    /// 
    /// M should be greater than the previous multiplicity of the
    /// all the knots FromI1,..., ToI2 and lower or equal to the
    /// Degree of the surface in the U parametric direction.
    /// </summary>
    void IncreaseUMultiplicity(int FromI1, int ToI2, int M);
    /// <summary>
    /// Increments the multiplicity of the consecutives uknots FromI1..ToI2
    /// by step.   The multiplicity of each knot FromI1,.....,ToI2 must be
    /// lower or equal to the UDegree of the B_spline.
    /// 
    /// Raised if FromI1 or ToI2 is not in the range
    /// [FirstUKnotIndex, LastUKnotIndex]
    /// 
    /// Raised if one knot has a multiplicity greater than UDegree.
    /// </summary>
    void IncrementUMultiplicity(int FromI1, int ToI2, int Step);
    /// <summary>
    /// Increases the multiplicity of a knot in the V direction.
    /// M is the new multiplicity.
    /// 
    /// M should be greater than the previous multiplicity and lower
    /// than the degree of the surface in the V parametric direction.
    /// 
    /// Raised if VIndex is not in the range [FirstVKnotIndex,
    /// LastVKnotIndex] given by the methods with the same name.
    /// </summary>
    void IncreaseVMultiplicity(int VIndex, int M);
    /// <summary>
    /// Increases until order M the multiplicity of the set of knots
    /// FromI1,...., ToI2 in the V direction. This method can be used to
    /// make a BSplineSurface into a PiecewiseBezier B_spline
    /// surface. If <me> was uniform, it can become non-uniform.
    /// 
    /// Raised if FromI1 or ToI2 is out of the range [FirstVKnotIndex,
    /// LastVKnotIndex] given by the methods with the same name.
    /// 
    /// M should be greater than the previous multiplicity of the
    /// all the knots FromI1,..., ToI2 and lower or equal to the
    /// Degree of the surface in the V parametric direction.
    /// </summary>
    void IncreaseVMultiplicity(int FromI1, int ToI2, int M);
    /// <summary>
    /// Increments the multiplicity of the consecutives vknots FromI1..ToI2
    /// by step.  The multiplicity of each knot FromI1,.....,ToI2 must be
    /// lower or equal to the VDegree of the B_spline.
    /// 
    /// Raised if FromI1 or ToI2 is not in the range
    /// [FirstVKnotIndex, LastVKnotIndex]
    /// 
    /// Raised if one knot has a multiplicity greater than VDegree.
    /// </summary>
    void IncrementVMultiplicity(int FromI1, int ToI2, int Step);
    /// <summary>
    /// Inserts a knot value in the sequence of UKnots. If U is a knot
    /// value this method increases the multiplicity of the knot if the
    /// previous multiplicity was lower than M else it does nothing. The
    /// tolerance criterion is ParametricTolerance. ParametricTolerance
    /// should be greater or equal than Resolution from package gp.
    /// 
    /// Raised if U is out of the bounds [U1, U2] given by the methods
    /// Bounds, the criterion ParametricTolerance is used.
    /// Raised if M is not in the range [1, UDegree].
    /// </summary>
    void InsertUKnot(double U, int M, double ParametricTolerance, bool Add);
    /// <summary>
    /// Inserts a knot value in the sequence of UKnots. If U is a knot
    /// value this method increases the multiplicity of the knot if the
    /// previous multiplicity was lower than M else it does nothing. The
    /// tolerance criterion is ParametricTolerance. ParametricTolerance
    /// should be greater or equal than Resolution from package gp.
    /// 
    /// Raised if U is out of the bounds [U1, U2] given by the methods
    /// Bounds, the criterion ParametricTolerance is used.
    /// Raised if M is not in the range [1, UDegree].
    /// </summary>
    void InsertUKnot(double U, int M, double ParametricTolerance);
    /// <summary>
    /// Inserts a knot value in the sequence of VKnots. If V is a knot
    /// value this method increases the multiplicity of the knot if the
    /// previous multiplicity was lower than M otherwise it does nothing.
    /// The tolerance criterion is ParametricTolerance.
    /// ParametricTolerance should be greater or equal than Resolution
    /// from package gp.
    /// 
    /// raises if V is out of the Bounds [V1, V2] given by the methods
    /// Bounds, the criterion ParametricTolerance is used.
    /// raises if M is not in the range [1, VDegree].
    /// </summary>
    void InsertVKnot(double V, int M, double ParametricTolerance, bool Add);
    /// <summary>
    /// Inserts a knot value in the sequence of VKnots. If V is a knot
    /// value this method increases the multiplicity of the knot if the
    /// previous multiplicity was lower than M otherwise it does nothing.
    /// The tolerance criterion is ParametricTolerance.
    /// ParametricTolerance should be greater or equal than Resolution
    /// from package gp.
    /// 
    /// raises if V is out of the Bounds [V1, V2] given by the methods
    /// Bounds, the criterion ParametricTolerance is used.
    /// raises if M is not in the range [1, VDegree].
    /// </summary>
    void InsertVKnot(double V, int M, double ParametricTolerance);
    /// <summary>
    /// Segments the surface between U1 and U2 in the U-Direction.
    /// between V1 and V2 in the V-Direction.
    /// The control points are modified, the first and the last point
    /// are not the same.
    /// 
    /// Parameters theUTolerance, theVTolerance define the possible proximity along the corresponding
    /// direction of the segment boundaries and B-spline knots to treat them as equal.
    /// 
    /// Warnings :
    /// Even if <me> is not closed it can become closed after the
    /// segmentation for example if U1 or U2 are out of the bounds
    /// of the surface <me> or if the surface makes loop.
    /// raises if U2 < U1 or V2 < V1.
    /// Standard_DomainError if U2 - U1 exceeds the uperiod for uperiodic surfaces.
    /// i.e. ((U2 - U1) - UPeriod) > Precision::PConfusion().
    /// Standard_DomainError if V2 - V1 exceeds the vperiod for vperiodic surfaces.
    /// i.e. ((V2 - V1) - VPeriod) > Precision::PConfusion()).
    /// </summary>
    void Segment(double U1, double U2, double V1, double V2, double theUTolerance, double theVTolerance);
    /// <summary>
    /// Segments the surface between U1 and U2 in the U-Direction.
    /// between V1 and V2 in the V-Direction.
    /// The control points are modified, the first and the last point
    /// are not the same.
    /// 
    /// Parameters theUTolerance, theVTolerance define the possible proximity along the corresponding
    /// direction of the segment boundaries and B-spline knots to treat them as equal.
    /// 
    /// Warnings :
    /// Even if <me> is not closed it can become closed after the
    /// segmentation for example if U1 or U2 are out of the bounds
    /// of the surface <me> or if the surface makes loop.
    /// raises if U2 < U1 or V2 < V1.
    /// Standard_DomainError if U2 - U1 exceeds the uperiod for uperiodic surfaces.
    /// i.e. ((U2 - U1) - UPeriod) > Precision::PConfusion().
    /// Standard_DomainError if V2 - V1 exceeds the vperiod for vperiodic surfaces.
    /// i.e. ((V2 - V1) - VPeriod) > Precision::PConfusion()).
    /// </summary>
    void Segment(double U1, double U2, double V1, double V2, double theUTolerance);
    /// <summary>
    /// Segments the surface between U1 and U2 in the U-Direction.
    /// between V1 and V2 in the V-Direction.
    /// The control points are modified, the first and the last point
    /// are not the same.
    /// 
    /// Parameters theUTolerance, theVTolerance define the possible proximity along the corresponding
    /// direction of the segment boundaries and B-spline knots to treat them as equal.
    /// 
    /// Warnings :
    /// Even if <me> is not closed it can become closed after the
    /// segmentation for example if U1 or U2 are out of the bounds
    /// of the surface <me> or if the surface makes loop.
    /// raises if U2 < U1 or V2 < V1.
    /// Standard_DomainError if U2 - U1 exceeds the uperiod for uperiodic surfaces.
    /// i.e. ((U2 - U1) - UPeriod) > Precision::PConfusion().
    /// Standard_DomainError if V2 - V1 exceeds the vperiod for vperiodic surfaces.
    /// i.e. ((V2 - V1) - VPeriod) > Precision::PConfusion()).
    /// </summary>
    void Segment(double U1, double U2, double V1, double V2);
    /// <summary>
    /// Segments the surface between U1 and U2 in the U-Direction.
    /// between V1 and V2 in the V-Direction.
    /// 
    /// same as Segment but do nothing if U1 and U2 (resp. V1 and V2) are
    /// equal to the bounds in U (resp. in V) of <me>.
    /// For example, if <me> is periodic in V, it will be always periodic
    /// in V after the segmentation if the bounds in V are unchanged
    /// 
    /// Parameters theUTolerance, theVTolerance define the possible proximity along the corresponding
    /// direction of the segment boundaries and B-spline knots to treat them as equal.
    /// 
    /// Warnings :
    /// Even if <me> is not closed it can become closed after the
    /// segmentation for example if U1 or U2 are out of the bounds
    /// of the surface <me> or if the surface makes loop.
    /// raises if U2 < U1 or V2 < V1.
    /// Standard_DomainError if U2 - U1 exceeds the uperiod for uperiodic surfaces.
    /// i.e. ((U2 - U1) - UPeriod) > Precision::PConfusion().
    /// Standard_DomainError if V2 - V1 exceeds the vperiod for vperiodic surfaces.
    /// i.e. ((V2 - V1) - VPeriod) > Precision::PConfusion()).
    /// </summary>
    void CheckAndSegment(double U1, double U2, double V1, double V2, double theUTolerance, double theVTolerance);
    /// <summary>
    /// Segments the surface between U1 and U2 in the U-Direction.
    /// between V1 and V2 in the V-Direction.
    /// 
    /// same as Segment but do nothing if U1 and U2 (resp. V1 and V2) are
    /// equal to the bounds in U (resp. in V) of <me>.
    /// For example, if <me> is periodic in V, it will be always periodic
    /// in V after the segmentation if the bounds in V are unchanged
    /// 
    /// Parameters theUTolerance, theVTolerance define the possible proximity along the corresponding
    /// direction of the segment boundaries and B-spline knots to treat them as equal.
    /// 
    /// Warnings :
    /// Even if <me> is not closed it can become closed after the
    /// segmentation for example if U1 or U2 are out of the bounds
    /// of the surface <me> or if the surface makes loop.
    /// raises if U2 < U1 or V2 < V1.
    /// Standard_DomainError if U2 - U1 exceeds the uperiod for uperiodic surfaces.
    /// i.e. ((U2 - U1) - UPeriod) > Precision::PConfusion().
    /// Standard_DomainError if V2 - V1 exceeds the vperiod for vperiodic surfaces.
    /// i.e. ((V2 - V1) - VPeriod) > Precision::PConfusion()).
    /// </summary>
    void CheckAndSegment(double U1, double U2, double V1, double V2, double theUTolerance);
    /// <summary>
    /// Segments the surface between U1 and U2 in the U-Direction.
    /// between V1 and V2 in the V-Direction.
    /// 
    /// same as Segment but do nothing if U1 and U2 (resp. V1 and V2) are
    /// equal to the bounds in U (resp. in V) of <me>.
    /// For example, if <me> is periodic in V, it will be always periodic
    /// in V after the segmentation if the bounds in V are unchanged
    /// 
    /// Parameters theUTolerance, theVTolerance define the possible proximity along the corresponding
    /// direction of the segment boundaries and B-spline knots to treat them as equal.
    /// 
    /// Warnings :
    /// Even if <me> is not closed it can become closed after the
    /// segmentation for example if U1 or U2 are out of the bounds
    /// of the surface <me> or if the surface makes loop.
    /// raises if U2 < U1 or V2 < V1.
    /// Standard_DomainError if U2 - U1 exceeds the uperiod for uperiodic surfaces.
    /// i.e. ((U2 - U1) - UPeriod) > Precision::PConfusion().
    /// Standard_DomainError if V2 - V1 exceeds the vperiod for vperiodic surfaces.
    /// i.e. ((V2 - V1) - VPeriod) > Precision::PConfusion()).
    /// </summary>
    void CheckAndSegment(double U1, double U2, double V1, double V2);
    /// <summary>
    /// Substitutes the UKnots of range UIndex with K.
    /// 
    /// Raised if UIndex < 1 or UIndex > NbUKnots
    /// 
    /// Raised if K >= UKnots(UIndex+1) or K <= UKnots(UIndex-1)
    /// </summary>
    void SetUKnot(int UIndex, double K);
    /// <summary>
    /// Changes all the U-knots of the surface.
    /// The multiplicity of the knots are not modified.
    /// 
    /// Raised if there is an index such that UK (Index+1) <= UK (Index).
    /// 
    /// Raised if  UK.Lower() < 1 or UK.Upper() > NbUKnots
    /// </summary>
    void SetUKnots(Macad::Occt::TColStd_Array1OfReal^ UK);
    /// <summary>
    /// Changes the value of the UKnots of range UIndex and
    /// increases its multiplicity.
    /// 
    /// Raised if UIndex is not in the range [FirstUKnotIndex,
    /// LastUKnotIndex] given by the methods with the same name.
    /// 
    /// Raised if K >= UKnots(UIndex+1) or K <= UKnots(UIndex-1)
    /// M must be lower than UDegree and greater than the previous
    /// multiplicity of the knot of range UIndex.
    /// </summary>
    void SetUKnot(int UIndex, double K, int M);
    /// <summary>
    /// Substitutes the VKnots of range VIndex with K.
    /// 
    /// Raised if VIndex < 1 or VIndex > NbVKnots
    /// 
    /// Raised if K >= VKnots(VIndex+1) or K <= VKnots(VIndex-1)
    /// </summary>
    void SetVKnot(int VIndex, double K);
    /// <summary>
    /// Changes all the V-knots of the surface.
    /// The multiplicity of the knots are not modified.
    /// 
    /// Raised if there is an index such that VK (Index+1) <= VK (Index).
    /// 
    /// Raised if  VK.Lower() < 1 or VK.Upper() > NbVKnots
    /// </summary>
    void SetVKnots(Macad::Occt::TColStd_Array1OfReal^ VK);
    /// <summary>
    /// Changes the value of the VKnots of range VIndex and increases
    /// its multiplicity.
    /// 
    /// Raised if VIndex is not in the range [FirstVKnotIndex,
    /// LastVKnotIndex] given by the methods with the same name.
    /// 
    /// Raised if K >= VKnots(VIndex+1) or K <= VKnots(VIndex-1)
    /// M must be lower than VDegree and greater than the previous
    /// multiplicity of the knot of range VIndex.
    /// </summary>
    void SetVKnot(int VIndex, double K, int M);
    /// <summary>
    /// Locates the parametric value U in the sequence of UKnots.
    /// If "WithKnotRepetition" is True we consider the knot's
    /// representation with repetition of multiple knot value,
    /// otherwise  we consider the knot's representation with
    /// no repetition of multiple knot values.
    /// UKnots (I1) <= U <= UKnots (I2)
    /// . if I1 = I2  U is a knot value (the tolerance criterion
    /// ParametricTolerance is used).
    /// . if I1 < 1  => U < UKnots(1) - Abs(ParametricTolerance)
    /// . if I2 > NbUKnots => U > UKnots(NbUKnots)+Abs(ParametricTolerance)
    /// </summary>
    void LocateU(double U, double ParametricTolerance, int% I1, int% I2, bool WithKnotRepetition);
    /// <summary>
    /// Locates the parametric value U in the sequence of UKnots.
    /// If "WithKnotRepetition" is True we consider the knot's
    /// representation with repetition of multiple knot value,
    /// otherwise  we consider the knot's representation with
    /// no repetition of multiple knot values.
    /// UKnots (I1) <= U <= UKnots (I2)
    /// . if I1 = I2  U is a knot value (the tolerance criterion
    /// ParametricTolerance is used).
    /// . if I1 < 1  => U < UKnots(1) - Abs(ParametricTolerance)
    /// . if I2 > NbUKnots => U > UKnots(NbUKnots)+Abs(ParametricTolerance)
    /// </summary>
    void LocateU(double U, double ParametricTolerance, int% I1, int% I2);
    /// <summary>
    /// Locates the parametric value V in the sequence of knots.
    /// If "WithKnotRepetition" is True we consider the knot's
    /// representation with repetition of multiple knot value,
    /// otherwise  we consider the knot's representation with
    /// no repetition of multiple knot values.
    /// VKnots (I1) <= V <= VKnots (I2)
    /// . if I1 = I2  V is a knot value (the tolerance criterion
    /// ParametricTolerance is used).
    /// . if I1 < 1  => V < VKnots(1) - Abs(ParametricTolerance)
    /// . if I2 > NbVKnots => V > VKnots(NbVKnots)+Abs(ParametricTolerance)
    /// poles insertion and removing
    /// The following methods are available only if the surface
    /// is Uniform or QuasiUniform in the considered direction
    /// The knot repartition is modified.
    /// </summary>
    void LocateV(double V, double ParametricTolerance, int% I1, int% I2, bool WithKnotRepetition);
    /// <summary>
    /// Locates the parametric value V in the sequence of knots.
    /// If "WithKnotRepetition" is True we consider the knot's
    /// representation with repetition of multiple knot value,
    /// otherwise  we consider the knot's representation with
    /// no repetition of multiple knot values.
    /// VKnots (I1) <= V <= VKnots (I2)
    /// . if I1 = I2  V is a knot value (the tolerance criterion
    /// ParametricTolerance is used).
    /// . if I1 < 1  => V < VKnots(1) - Abs(ParametricTolerance)
    /// . if I2 > NbVKnots => V > VKnots(NbVKnots)+Abs(ParametricTolerance)
    /// poles insertion and removing
    /// The following methods are available only if the surface
    /// is Uniform or QuasiUniform in the considered direction
    /// The knot repartition is modified.
    /// </summary>
    void LocateV(double V, double ParametricTolerance, int% I1, int% I2);
    /// <summary>
    /// Substitutes the pole of range (UIndex, VIndex) with P.
    /// If the surface is rational the weight of range (UIndex, VIndex)
    /// is not modified.
    /// 
    /// Raised if UIndex < 1 or UIndex > NbUPoles or VIndex < 1 or
    /// VIndex > NbVPoles.
    /// </summary>
    void SetPole(int UIndex, int VIndex, Macad::Occt::Pnt P);
    /// <summary>
    /// Substitutes the pole and the weight of range (UIndex, VIndex)
    /// with P and W.
    /// 
    /// Raised if UIndex < 1 or UIndex > NbUPoles or VIndex < 1 or
    /// VIndex > NbVPoles.
    /// Raised if Weight <= Resolution from package gp.
    /// </summary>
    void SetPole(int UIndex, int VIndex, Macad::Occt::Pnt P, double Weight);
    /// <summary>
    /// Changes a column of poles or a part of this column.
    /// Raised if Vindex < 1 or VIndex > NbVPoles.
    /// 
    /// Raised if CPoles.Lower() < 1 or CPoles.Upper() > NbUPoles.
    /// </summary>
    void SetPoleCol(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
    /// <summary>
    /// Changes a column of poles or a part of this column with the
    /// corresponding weights. If the surface was rational it can
    /// become non rational. If the surface was non rational it can
    /// become rational.
    /// Raised if Vindex < 1 or VIndex > NbVPoles.
    /// 
    /// Raised if CPoles.Lower() < 1 or CPoles.Upper() > NbUPoles
    /// Raised if the bounds of CPoleWeights are not the same as the
    /// bounds of CPoles.
    /// Raised if one of the weight value of CPoleWeights is lower or
    /// equal to Resolution from package gp.
    /// </summary>
    void SetPoleCol(int VIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
    /// <summary>
    /// Changes a row of poles or a part of this row with the
    /// corresponding weights. If the surface was rational it can
    /// become non rational. If the surface was non rational it can
    /// become rational.
    /// Raised if Uindex < 1 or UIndex > NbUPoles.
    /// 
    /// Raised if CPoles.Lower() < 1 or CPoles.Upper() > NbVPoles
    /// raises if the bounds of CPoleWeights are not the same as the
    /// bounds of CPoles.
    /// Raised if one of the weight value of CPoleWeights is lower or
    /// equal to Resolution from package gp.
    /// </summary>
    void SetPoleRow(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
    /// <summary>
    /// Changes a row of poles or a part of this row.
    /// Raised if Uindex < 1 or UIndex > NbUPoles.
    /// 
    /// Raised if CPoles.Lower() < 1 or CPoles.Upper() > NbVPoles.
    /// </summary>
    void SetPoleRow(int UIndex, Macad::Occt::TColgp_Array1OfPnt^ CPoles);
    /// <summary>
    /// Changes the weight of the pole of range UIndex, VIndex.
    /// If the surface was non rational it can become rational.
    /// If the surface was rational it can become non rational.
    /// 
    /// Raised if UIndex < 1 or UIndex > NbUPoles or VIndex < 1 or
    /// VIndex > NbVPoles
    /// 
    /// Raised if weight is lower or equal to Resolution from
    /// package gp
    /// </summary>
    void SetWeight(int UIndex, int VIndex, double Weight);
    /// <summary>
    /// Changes a column of weights of a part of this column.
    /// 
    /// Raised if VIndex < 1 or VIndex > NbVPoles
    /// 
    /// Raised if CPoleWeights.Lower() < 1 or
    /// CPoleWeights.Upper() > NbUPoles.
    /// Raised if a weight value is lower or equal to Resolution
    /// from package gp.
    /// </summary>
    void SetWeightCol(int VIndex, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
    /// <summary>
    /// Changes a row of weights or a part of this row.
    /// 
    /// Raised if UIndex < 1 or UIndex > NbUPoles
    /// 
    /// Raised if CPoleWeights.Lower() < 1 or
    /// CPoleWeights.Upper() > NbVPoles.
    /// Raised  if a weight value is lower or equal to Resolution
    /// from package gp.
    /// </summary>
    void SetWeightRow(int UIndex, Macad::Occt::TColStd_Array1OfReal^ CPoleWeights);
    /// <summary>
    /// Move a point with parameter U and V to P.
    /// given u,v  as parameters)  to  reach a  new position
    /// UIndex1, UIndex2, VIndex1, VIndex2:
    /// indicates the poles which can be moved
    /// if Problem in BSplineBasis calculation, no change
    /// for the curve and
    /// UFirstIndex, VLastIndex = 0
    /// VFirstIndex, VLastIndex = 0
    /// 
    /// Raised if UIndex1 < UIndex2 or VIndex1 < VIndex2 or
    /// UIndex1 < 1 || UIndex1 > NbUPoles or
    /// UIndex2 < 1 || UIndex2 > NbUPoles
    /// VIndex1 < 1 || VIndex1 > NbVPoles or
    /// VIndex2 < 1 || VIndex2 > NbVPoles
    /// characteristics of the surface
    /// </summary>
    void MovePoint(double U, double V, Macad::Occt::Pnt P, int UIndex1, int UIndex2, int VIndex1, int VIndex2, int% UFirstIndex, int% ULastIndex, int% VFirstIndex, int% VLastIndex);
    /// <summary>
    /// Returns true if the first control points row and the last
    /// control points row are identical. The tolerance criterion
    /// is Resolution from package gp.
    /// </summary>
    bool IsUClosed();
    /// <summary>
    /// Returns true if the first control points column and the
    /// last last control points column are identical.
    /// The tolerance criterion is Resolution from package gp.
    /// </summary>
    bool IsVClosed();
    /// <summary>
    /// Returns True if the order of continuity of the surface in the
    /// U direction  is N.
    /// Raised if N < 0.
    /// </summary>
    bool IsCNu(int N);
    /// <summary>
    /// Returns True if the order of continuity of the surface
    /// in the V direction  is N.
    /// Raised if N < 0.
    /// </summary>
    bool IsCNv(int N);
    /// <summary>
    /// Returns True if the surface is closed in the U direction
    /// and if the B-spline has been turned into a periodic surface
    /// using the function SetUPeriodic.
    /// </summary>
    bool IsUPeriodic();
    /// <summary>
    /// Returns False if for each row of weights all the weights
    /// are identical.
    /// The tolerance criterion is resolution from package gp.
    /// Example :
    /// |1.0, 1.0, 1.0|
    /// if Weights =  |0.5, 0.5, 0.5|   returns False
    /// |2.0, 2.0, 2.0|
    /// </summary>
    bool IsURational();
    /// <summary>
    /// Returns True if the surface is closed in the V direction
    /// and if the B-spline has been turned into a periodic
    /// surface using the function SetVPeriodic.
    /// </summary>
    bool IsVPeriodic();
    /// <summary>
    /// Returns False if for each column of weights all the weights
    /// are identical.
    /// The tolerance criterion is resolution from package gp.
    /// Examples :
    /// |1.0, 2.0, 0.5|
    /// if Weights =  |1.0, 2.0, 0.5|   returns False
    /// |1.0, 2.0, 0.5|
    /// </summary>
    bool IsVRational();
    /// <summary>
    /// Returns the parametric bounds of the surface.
    /// Warnings :
    /// These parametric values are the bounds of the array of
    /// knots UKnots and VKnots only if the first knots and the
    /// last knots have a multiplicity equal to UDegree + 1 or
    /// VDegree + 1
    /// </summary>
    void Bounds(double% U1, double% U2, double% V1, double% V2);
    /// <summary>
    /// Returns the continuity of the surface :
    /// C0 : only geometric continuity,
    /// C1 : continuity of the first derivative all along the Surface,
    /// C2 : continuity of the second derivative all along the Surface,
    /// C3 : continuity of the third derivative all along the Surface,
    /// CN : the order of continuity is infinite.
    /// A B-spline surface is infinitely continuously differentiable
    /// for the couple of parameters U, V such that U != UKnots(i)
    /// and V != VKnots(i). The continuity of the surface at a knot
    /// value depends on the multiplicity of this knot.
    /// Example :
    /// If the surface is C1 in the V direction and C2 in the U
    /// direction this function returns Shape = C1.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Computes the Index of the UKnots which gives the first
    /// parametric value of the surface in the U direction.
    /// The UIso curve corresponding to this value is a
    /// boundary curve of the surface.
    /// </summary>
    int FirstUKnotIndex();
    /// <summary>
    /// Computes the Index of the VKnots which gives the
    /// first parametric value of the surface in the V direction.
    /// The VIso curve corresponding to this knot is a boundary
    /// curve of the surface.
    /// </summary>
    int FirstVKnotIndex();
    /// <summary>
    /// Computes the Index of the UKnots which gives the
    /// last parametric value of the surface in the U direction.
    /// The UIso curve corresponding to this knot is a boundary
    /// curve of the surface.
    /// </summary>
    int LastUKnotIndex();
    /// <summary>
    /// Computes the Index of the VKnots which gives the
    /// last parametric value of the surface in the V direction.
    /// The VIso curve corresponding to this knot is a
    /// boundary curve of the surface.
    /// </summary>
    int LastVKnotIndex();
    /// <summary>
    /// Returns the number of knots in the U direction.
    /// </summary>
    int NbUKnots();
    /// <summary>
    /// Returns number of poles in the U direction.
    /// </summary>
    int NbUPoles();
    /// <summary>
    /// Returns the number of knots in the V direction.
    /// </summary>
    int NbVKnots();
    /// <summary>
    /// Returns the number of poles in the V direction.
    /// </summary>
    int NbVPoles();
    /// <summary>
    /// Returns the pole of range (UIndex, VIndex).
    /// 
    /// Raised if UIndex < 1 or UIndex > NbUPoles or VIndex < 1 or
    /// VIndex > NbVPoles.
    /// </summary>
    Macad::Occt::Pnt Pole(int UIndex, int VIndex);
    /// <summary>
    /// Returns the poles of the B-spline surface.
    /// 
    /// Raised if the length of P in the U and V direction
    /// is not equal to NbUpoles and NbVPoles.
    /// </summary>
    void Poles(Macad::Occt::TColgp_Array2OfPnt^ P);
    /// <summary>
    /// Returns the poles of the B-spline surface.
    /// </summary>
    Macad::Occt::TColgp_Array2OfPnt^ Poles();
    /// <summary>
    /// Returns the degree of the normalized B-splines Ni,n in the U
    /// direction.
    /// </summary>
    int UDegree();
    /// <summary>
    /// Returns the Knot value of range UIndex.
    /// Raised if UIndex < 1 or UIndex > NbUKnots
    /// </summary>
    double UKnot(int UIndex);
    /// <summary>
    /// Returns NonUniform or Uniform or QuasiUniform or
    /// PiecewiseBezier.  If all the knots differ by a
    /// positive constant from the preceding knot in the U
    /// direction the B-spline surface can be :
    /// - Uniform if all the knots are of multiplicity 1,
    /// - QuasiUniform if all the knots are of multiplicity 1
    /// except for the first and last knot which are of
    /// multiplicity Degree + 1,
    /// - PiecewiseBezier if the first and last knots have
    /// multiplicity Degree + 1 and if interior knots have
    /// multiplicity Degree
    /// otherwise the surface is non uniform in the U direction
    /// The tolerance criterion is Resolution from package gp.
    /// </summary>
    Macad::Occt::GeomAbs_BSplKnotDistribution UKnotDistribution();
    /// <summary>
    /// Returns the knots in the U direction.
    /// 
    /// Raised if the length of Ku is not equal to the number of knots
    /// in the U direction.
    /// </summary>
    void UKnots(Macad::Occt::TColStd_Array1OfReal^ Ku);
    /// <summary>
    /// Returns the knots in the U direction.
    /// </summary>
    Macad::Occt::TColStd_Array1OfReal^ UKnots();
    /// <summary>
    /// Returns the uknots sequence.
    /// In this sequence the knots with a multiplicity greater than 1
    /// are repeated.
    /// Example :
    /// Ku = {k1, k1, k1, k2, k3, k3, k4, k4, k4}
    /// 
    /// Raised if the length of Ku is not equal to NbUPoles + UDegree + 1
    /// </summary>
    void UKnotSequence(Macad::Occt::TColStd_Array1OfReal^ Ku);
    /// <summary>
    /// Returns the uknots sequence.
    /// In this sequence the knots with a multiplicity greater than 1
    /// are repeated.
    /// Example :
    /// Ku = {k1, k1, k1, k2, k3, k3, k4, k4, k4}
    /// </summary>
    Macad::Occt::TColStd_Array1OfReal^ UKnotSequence();
    /// <summary>
    /// Returns the multiplicity value of knot of range UIndex in
    /// the u direction.
    /// Raised if UIndex < 1 or UIndex > NbUKnots.
    /// </summary>
    int UMultiplicity(int UIndex);
    /// <summary>
    /// Returns the multiplicities of the knots in the U direction.
    /// 
    /// Raised if the length of Mu is not equal to the number of
    /// knots in the U direction.
    /// </summary>
    void UMultiplicities(Macad::Occt::TColStd_Array1OfInteger^ Mu);
    /// <summary>
    /// Returns the multiplicities of the knots in the U direction.
    /// </summary>
    Macad::Occt::TColStd_Array1OfInteger^ UMultiplicities();
    /// <summary>
    /// Returns the degree of the normalized B-splines Ni,d in the
    /// V direction.
    /// </summary>
    int VDegree();
    /// <summary>
    /// Returns the Knot value of range VIndex.
    /// Raised if VIndex < 1 or VIndex > NbVKnots
    /// </summary>
    double VKnot(int VIndex);
    /// <summary>
    /// Returns NonUniform or Uniform or QuasiUniform or
    /// PiecewiseBezier. If all the knots differ by a positive
    /// constant from the preceding knot in the V direction the
    /// B-spline surface can be :
    /// - Uniform if all the knots are of multiplicity 1,
    /// - QuasiUniform if all the knots are of multiplicity 1
    /// except for the first and last knot which are of
    /// multiplicity Degree + 1,
    /// - PiecewiseBezier if the first and last knots have
    /// multiplicity  Degree + 1 and if interior knots have
    /// multiplicity Degree
    /// otherwise the surface is non uniform in the V direction.
    /// The tolerance criterion is Resolution from package gp.
    /// </summary>
    Macad::Occt::GeomAbs_BSplKnotDistribution VKnotDistribution();
    /// <summary>
    /// Returns the knots in the V direction.
    /// 
    /// Raised if the length of Kv is not equal to the number of
    /// knots in the V direction.
    /// </summary>
    void VKnots(Macad::Occt::TColStd_Array1OfReal^ Kv);
    /// <summary>
    /// Returns the knots in the V direction.
    /// </summary>
    Macad::Occt::TColStd_Array1OfReal^ VKnots();
    /// <summary>
    /// Returns the vknots sequence.
    /// In this sequence the knots with a multiplicity greater than 1
    /// are repeated.
    /// Example :
    /// Kv = {k1, k1, k1, k2, k3, k3, k4, k4, k4}
    /// 
    /// Raised if the length of Kv is not equal to NbVPoles + VDegree + 1
    /// </summary>
    void VKnotSequence(Macad::Occt::TColStd_Array1OfReal^ Kv);
    /// <summary>
    /// Returns the vknots sequence.
    /// In this sequence the knots with a multiplicity greater than 1
    /// are repeated.
    /// Example :
    /// Ku = {k1, k1, k1, k2, k3, k3, k4, k4, k4}
    /// </summary>
    Macad::Occt::TColStd_Array1OfReal^ VKnotSequence();
    /// <summary>
    /// Returns the multiplicity value of knot of range VIndex in
    /// the v direction.
    /// Raised if VIndex < 1 or VIndex > NbVKnots
    /// </summary>
    int VMultiplicity(int VIndex);
    /// <summary>
    /// Returns the multiplicities of the knots in the V direction.
    /// 
    /// Raised if the length of Mv is not equal to the number of
    /// knots in the V direction.
    /// </summary>
    void VMultiplicities(Macad::Occt::TColStd_Array1OfInteger^ Mv);
    /// <summary>
    /// Returns the multiplicities of the knots in the V direction.
    /// </summary>
    Macad::Occt::TColStd_Array1OfInteger^ VMultiplicities();
    /// <summary>
    /// Returns the weight value of range UIndex, VIndex.
    /// 
    /// Raised if UIndex < 1 or UIndex > NbUPoles or VIndex < 1
    /// or VIndex > NbVPoles.
    /// </summary>
    double Weight(int UIndex, int VIndex);
    /// <summary>
    /// Returns the weights of the B-spline surface.
    /// 
    /// Raised if the length of W in the U and V direction is
    /// not equal to NbUPoles and NbVPoles.
    /// </summary>
    void Weights(Macad::Occt::TColStd_Array2OfReal^ W);
    /// <summary>
    /// Returns the weights of the B-spline surface.
    /// value and derivatives computation
    /// </summary>
    Macad::Occt::TColStd_Array2OfReal^ Weights();
    void D0(double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// Raised if the continuity of the surface is not C1.
    /// </summary>
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// Raised if the continuity of the surface is not C2.
    /// </summary>
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Raised if the continuity of the surface is not C3.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Nu is the order of derivation in the U parametric direction and
    /// Nv is the order of derivation in the V parametric direction.
    /// 
    /// Raised if the continuity of the surface is not CNu in the U
    /// direction and CNv in the V direction.
    /// 
    /// Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
    /// 
    /// The following functions computes the point for the
    /// parametric values (U, V) and the derivatives at
    /// this point on the B-spline surface patch delimited
    /// with the knots FromUK1, FromVK1 and the knots ToUK2,
    /// ToVK2.  (U, V) can be out of these parametric bounds
    /// but for the computation we only use the definition
    /// of the surface between these knots. This method is
    /// useful to compute local derivative, if the order of
    /// continuity of the whole surface is not greater enough.
    /// Inside the parametric knot's domain previously defined
    /// the evaluations are the same as if we consider the whole
    /// definition of the surface. Of course the evaluations are
    /// different outside this parametric domain.
    /// </summary>
    Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Raised if FromUK1 = ToUK2 or FromVK1 = ToVK2.
    /// </summary>
    void LocalD0(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, Macad::Occt::Pnt% P);
    /// <summary>
    /// Raised if the local continuity of the surface is not C1
    /// between the knots FromUK1, ToUK2 and FromVK1, ToVK2.
    /// Raised if FromUK1 = ToUK2 or FromVK1 = ToVK2.
    /// </summary>
    void LocalD1(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// Raised if the local continuity of the surface is not C2
    /// between the knots FromUK1, ToUK2 and FromVK1, ToVK2.
    /// Raised if FromUK1 = ToUK2 or FromVK1 = ToVK2.
    /// </summary>
    void LocalD2(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Raised if the local continuity of the surface is not C3
    /// between the knots FromUK1, ToUK2 and FromVK1, ToVK2.
    /// Raised if FromUK1 = ToUK2 or FromVK1 = ToVK2.
    /// </summary>
    void LocalD3(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Raised if the local continuity of the surface is not CNu
    /// between the knots FromUK1, ToUK2 and CNv between the knots
    /// FromVK1, ToVK2.
    /// Raised if FromUK1 = ToUK2 or FromVK1 = ToVK2.
    /// </summary>
    Macad::Occt::Vec LocalDN(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2, int Nu, int Nv);
    /// <summary>
    /// Computes the point of parameter U, V on the BSpline surface patch
    /// defines between the knots UK1 UK2, VK1, VK2. U can be out of the
    /// bounds [Knot UK1, Knot UK2] and V can be outof the bounds
    /// [Knot VK1, Knot VK2]  but for the computation we only use the
    /// definition of the surface between these knot values.
    /// Raises if FromUK1 = ToUK2 or FromVK1 = ToVK2.
    /// </summary>
    Macad::Occt::Pnt LocalValue(double U, double V, int FromUK1, int ToUK2, int FromVK1, int ToVK2);
    /// <summary>
    /// Computes the U isoparametric curve.
    /// A B-spline curve is returned.
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U);
    /// <summary>
    /// Computes the V isoparametric curve.
    /// A B-spline curve is returned.
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V);
    /// <summary>
    /// Computes the U isoparametric curve.
    /// If CheckRational=False, no try to make it non-rational.
    /// A B-spline curve is returned.
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U, bool CheckRational);
    /// <summary>
    /// Computes the V isoparametric curve.
    /// If CheckRational=False, no try to make it non-rational.
    /// A B-spline curve is returned.
    /// transformations
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V, bool CheckRational);
    /// <summary>
    /// Applies the transformation T to this BSpline surface.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Returns the value of the maximum degree of the normalized
    /// B-spline basis functions in the u and v directions.
    /// </summary>
    static int MaxDegree();
    /// <summary>
    /// Computes two tolerance values for this BSpline
    /// surface, based on the given tolerance in 3D space
    /// Tolerance3D. The tolerances computed are:
    /// - UTolerance in the u parametric direction, and
    /// - VTolerance in the v parametric direction.
    /// If f(u,v) is the equation of this BSpline surface,
    /// UTolerance and VTolerance guarantee that :
    /// | u1 - u0 | < UTolerance and
    /// | v1 - v0 | < VTolerance
    /// ====> |f (u1,v1) - f (u0,v0)| < Tolerance3D
    /// </summary>
    void Resolution(double Tolerance3D, double% UTolerance, double% VTolerance);
    /// <summary>
    /// Creates a new object which is a copy of this BSpline surface.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_BSplineSurface^ CreateDowncasted(::Geom_BSplineSurface* instance);
}; // class Geom_BSplineSurface

//---------------------------------------------------------------------
//  Class  Geom_Point
//---------------------------------------------------------------------
/// <summary>
/// The abstract class Point describes the common
/// behavior of geometric points in 3D space.
/// The Geom package also provides the concrete class
/// Geom_CartesianPoint.
/// </summary>
public ref class Geom_Point
    : public Macad::Occt::Geom_Geometry
{

#ifdef Include_Geom_Point_h
public:
    Include_Geom_Point_h
#endif

protected:
    Geom_Point(InitMode init)
        : Macad::Occt::Geom_Geometry( init )
    {}

public:
    Geom_Point(::Geom_Point* nativeInstance)
        : Macad::Occt::Geom_Geometry( nativeInstance )
    {}

    Geom_Point(::Geom_Point& nativeInstance)
        : Macad::Occt::Geom_Geometry( nativeInstance )
    {}

    property ::Geom_Point* NativeInstance
    {
        ::Geom_Point* get()
        {
            return static_cast<::Geom_Point*>(_NativeInstance);
        }
    }

public:
    Geom_Point();
    /// <summary>
    /// returns the Coordinates of <me>.
    /// </summary>
    void Coord(double% X, double% Y, double% Z);
    /// <summary>
    /// returns a non transient copy of <me>
    /// </summary>
    Macad::Occt::Pnt Pnt();
    /// <summary>
    /// returns the X coordinate of <me>.
    /// </summary>
    double X();
    /// <summary>
    /// returns  the Y coordinate of <me>.
    /// </summary>
    double Y();
    /// <summary>
    /// returns the Z coordinate of <me>.
    /// </summary>
    double Z();
    /// <summary>
    /// Computes the distance between <me> and <Other>.
    /// </summary>
    double Distance(Macad::Occt::Geom_Point^ Other);
    /// <summary>
    /// Computes the square distance between <me> and <Other>.
    /// </summary>
    double SquareDistance(Macad::Occt::Geom_Point^ Other);
    static Macad::Occt::Geom_Point^ CreateDowncasted(::Geom_Point* instance);
}; // class Geom_Point

//---------------------------------------------------------------------
//  Class  Geom_CartesianPoint
//---------------------------------------------------------------------
/// <summary>
/// Describes a point in 3D space. A
/// Geom_CartesianPoint is defined by a gp_Pnt point,
/// with its three Cartesian coordinates X, Y and Z.
/// </summary>
public ref class Geom_CartesianPoint sealed
    : public Macad::Occt::Geom_Point
{

#ifdef Include_Geom_CartesianPoint_h
public:
    Include_Geom_CartesianPoint_h
#endif

public:
    Geom_CartesianPoint(::Geom_CartesianPoint* nativeInstance)
        : Macad::Occt::Geom_Point( nativeInstance )
    {}

    Geom_CartesianPoint(::Geom_CartesianPoint& nativeInstance)
        : Macad::Occt::Geom_Point( nativeInstance )
    {}

    property ::Geom_CartesianPoint* NativeInstance
    {
        ::Geom_CartesianPoint* get()
        {
            return static_cast<::Geom_CartesianPoint*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns a transient copy of P.
    /// </summary>
    Geom_CartesianPoint(Macad::Occt::Pnt P);
    /// <summary>
    /// Constructs a point defined by its three Cartesian coordinates X, Y and Z.
    /// </summary>
    Geom_CartesianPoint(double X, double Y, double Z);
    /// <summary>
    /// Assigns the coordinates X, Y and Z to this point.
    /// </summary>
    void SetCoord(double X, double Y, double Z);
    /// <summary>
    /// Set <me> to P.X(), P.Y(), P.Z() coordinates.
    /// </summary>
    void SetPnt(Macad::Occt::Pnt P);
    /// <summary>
    /// Changes the X coordinate of me.
    /// </summary>
    void SetX(double X);
    /// <summary>
    /// Changes the Y coordinate of me.
    /// </summary>
    void SetY(double Y);
    /// <summary>
    /// Changes the Z coordinate of me.
    /// </summary>
    void SetZ(double Z);
    /// <summary>
    /// Returns the coordinates of <me>.
    /// </summary>
    void Coord(double% X, double% Y, double% Z);
    /// <summary>
    /// Returns a non transient cartesian point with
    /// the same coordinates as <me>.
    /// </summary>
    Macad::Occt::Pnt Pnt();
    /// <summary>
    /// Returns the X coordinate of <me>.
    /// </summary>
    double X();
    /// <summary>
    /// Returns the Y coordinate of <me>.
    /// </summary>
    double Y();
    /// <summary>
    /// Returns the Z coordinate of <me>.
    /// </summary>
    double Z();
    /// <summary>
    /// Applies the transformation T to this point.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this point.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    static Macad::Occt::Geom_CartesianPoint^ CreateDowncasted(::Geom_CartesianPoint* instance);
}; // class Geom_CartesianPoint

//---------------------------------------------------------------------
//  Class  Geom_Conic
//---------------------------------------------------------------------
/// <summary>
/// The abstract class Conic describes the common
/// behavior of conic curves in 3D space and, in
/// particular, their general characteristics. The Geom
/// package provides four concrete classes of conics:
/// Geom_Circle, Geom_Ellipse, Geom_Hyperbola and Geom_Parabola.
/// A conic is positioned in space with a right-handed
/// coordinate system (gp_Ax2 object), where:
/// - the origin is the center of the conic (or the apex in
/// the case of a parabola),
/// - the origin, "X Direction" and "Y Direction" define the
/// plane of the conic.
/// This coordinate system is the local coordinate
/// system of the conic.
/// The "main Direction" of this coordinate system is the
/// vector normal to the plane of the conic. The axis, of
/// which the origin and unit vector are respectively the
/// origin and "main Direction" of the local coordinate
/// system, is termed the "Axis" or "main Axis" of the conic.
/// The "main Direction" of the local coordinate system
/// gives an explicit orientation to the conic, determining
/// the direction in which the parameter increases along
/// the conic. The "X Axis" of the local coordinate system
/// also defines the origin of the parameter of the conic.
/// </summary>
public ref class Geom_Conic
    : public Macad::Occt::Geom_Curve
{

#ifdef Include_Geom_Conic_h
public:
    Include_Geom_Conic_h
#endif

protected:
    Geom_Conic(InitMode init)
        : Macad::Occt::Geom_Curve( init )
    {}

public:
    Geom_Conic(::Geom_Conic* nativeInstance)
        : Macad::Occt::Geom_Curve( nativeInstance )
    {}

    Geom_Conic(::Geom_Conic& nativeInstance)
        : Macad::Occt::Geom_Curve( nativeInstance )
    {}

    property ::Geom_Conic* NativeInstance
    {
        ::Geom_Conic* get()
        {
            return static_cast<::Geom_Conic*>(_NativeInstance);
        }
    }

public:
    Geom_Conic();
    /// <summary>
    /// Changes the orientation of the conic's plane. The normal
    /// axis to the plane is A1. The XAxis and the YAxis are recomputed.
    /// 
    /// raised if the A1 is parallel to the XAxis of the conic.
    /// </summary>
    void SetAxis(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// changes the location point of the conic.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt theP);
    /// <summary>
    /// changes the local coordinate system of the conic.
    /// </summary>
    void SetPosition(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Returns the "main Axis" of this conic. This axis is
    /// normal to the plane of the conic.
    /// </summary>
    Macad::Occt::Ax1 Axis();
    /// <summary>
    /// Returns the location point of the conic.
    /// For the circle, the ellipse and the hyperbola it is the center of
    /// the conic. For the parabola it is the Apex of the parabola.
    /// </summary>
    Macad::Occt::Pnt Location();
    /// <summary>
    /// Returns the local coordinates system of the conic.
    /// The main direction of the Axis2Placement is normal to the
    /// plane of the conic. The X direction of the Axis2placement
    /// is in the plane of the conic and corresponds to the origin
    /// for the conic's parametric value u.
    /// </summary>
    Macad::Occt::Ax2 Position();
    /// <summary>
    /// Returns the eccentricity value of the conic e.
    /// e = 0 for a circle
    /// 0 < e < 1 for an ellipse  (e = 0 if MajorRadius = MinorRadius)
    /// e > 1 for a hyperbola
    /// e = 1 for a parabola
    /// Exceptions
    /// Standard_DomainError in the case of a hyperbola if
    /// its major radius is null.
    /// </summary>
    double Eccentricity();
    /// <summary>
    /// Returns the XAxis of the conic.
    /// This axis defines the origin of parametrization of the conic.
    /// This axis is perpendicular to the Axis of the conic.
    /// This axis and the Yaxis define the plane of the conic.
    /// </summary>
    Macad::Occt::Ax1 XAxis();
    /// <summary>
    /// Returns the YAxis of the conic.
    /// The YAxis is perpendicular to the Xaxis.
    /// This axis and the Xaxis define the plane of the conic.
    /// </summary>
    Macad::Occt::Ax1 YAxis();
    /// <summary>
    /// Reverses the direction of parameterization of <me>.
    /// The local coordinate system of the conic is modified.
    /// </summary>
    void Reverse();
    /// <summary>
    /// Returns the  parameter on the  reversed  curve for
    /// the point of parameter U on <me>.
    /// </summary>
    double ReversedParameter(double U);
    /// <summary>
    /// The continuity of the conic is Cn.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns True.
    /// Raised if N < 0.
    /// </summary>
    bool IsCN(int N);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_Conic^ CreateDowncasted(::Geom_Conic* instance);
}; // class Geom_Conic

//---------------------------------------------------------------------
//  Class  Geom_Circle
//---------------------------------------------------------------------
/// <summary>
/// Describes a circle in 3D space.
/// A circle is defined by its radius and, as with any conic
/// curve, is positioned in space with a right-handed
/// coordinate system (gp_Ax2 object) where:
/// - the origin is the center of the circle, and
/// - the origin, "X Direction" and "Y Direction" define the
/// plane of the circle.
/// This coordinate system is the local coordinate
/// system of the circle.
/// The "main Direction" of this coordinate system is the
/// vector normal to the plane of the circle. The axis, of
/// which the origin and unit vector are respectively the
/// origin and "main Direction" of the local coordinate
/// system, is termed the "Axis" or "main Axis" of the circle.
/// The "main Direction" of the local coordinate system
/// gives an explicit orientation to the circle (definition of
/// the trigonometric sense), determining the direction in
/// which the parameter increases along the circle.
/// The Geom_Circle circle is parameterized by an angle:
/// P(U) = O + R*Cos(U)*XDir + R*Sin(U)*YDir, where:
/// - P is the point of parameter U,
/// - O, XDir and YDir are respectively the origin, "X
/// Direction" and "Y Direction" of its local coordinate system,
/// - R is the radius of the circle.
/// The "X Axis" of the local coordinate system therefore
/// defines the origin of the parameter of the circle. The
/// parameter is the angle with this "X Direction".
/// A circle is a closed and periodic curve. The period is
/// 2.*Pi and the parameter range is [ 0, 2.*Pi [.
/// </summary>
public ref class Geom_Circle sealed
    : public Macad::Occt::Geom_Conic
{

#ifdef Include_Geom_Circle_h
public:
    Include_Geom_Circle_h
#endif

public:
    Geom_Circle(::Geom_Circle* nativeInstance)
        : Macad::Occt::Geom_Conic( nativeInstance )
    {}

    Geom_Circle(::Geom_Circle& nativeInstance)
        : Macad::Occt::Geom_Conic( nativeInstance )
    {}

    property ::Geom_Circle* NativeInstance
    {
        ::Geom_Circle* get()
        {
            return static_cast<::Geom_Circle*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a circle by conversion of the gp_Circ circle C.
    /// </summary>
    Geom_Circle(Macad::Occt::gp_Circ^ C);
    /// <summary>
    /// Constructs a circle of radius Radius, where A2 locates the circle and
    /// defines its orientation in 3D space such that:
    /// - the center of the circle is the origin of A2,
    /// - the origin, "X Direction" and "Y Direction" of A2
    /// define the plane of the circle,
    /// - A2 is the local coordinate system of the circle.
    /// Note: It is possible to create a circle where Radius is equal to 0.0.
    /// raised if Radius < 0.
    /// </summary>
    Geom_Circle(Macad::Occt::Ax2 A2, double Radius);
    /// <summary>
    /// Set <me> so that <me> has the same geometric properties as C.
    /// </summary>
    void SetCirc(Macad::Occt::gp_Circ^ C);
    /// <summary>
    /// Assigns the value R to the radius of this circle.
    /// Note: it is possible to have a circle with a radius equal to 0.0.
    /// Exceptions - Standard_ConstructionError if R is negative.
    /// </summary>
    void SetRadius(double R);
    /// <summary>
    /// returns the non transient circle from gp with the same
    /// geometric properties as <me>.
    /// </summary>
    Macad::Occt::gp_Circ^ Circ();
    /// <summary>
    /// Returns the radius of this circle.
    /// </summary>
    double Radius();
    /// <summary>
    /// Computes the parameter on the reversed circle for
    /// the point of parameter U on this circle.
    /// For a circle, the returned value is: 2.*Pi - U.
    /// </summary>
    double ReversedParameter(double U);
    /// <summary>
    /// Returns the eccentricity  e = 0 for a circle.
    /// </summary>
    double Eccentricity();
    /// <summary>
    /// Returns the value of the first parameter of this
    /// circle. This is  0.0, which gives the start point of this circle, or
    /// The start point and end point of a circle are coincident.
    /// </summary>
    double FirstParameter();
    /// <summary>
    /// Returns the value of the last parameter of this
    /// circle. This is 2.*Pi, which gives the end point of this circle.
    /// The start point and end point of a circle are coincident.
    /// </summary>
    double LastParameter();
    /// <summary>
    /// returns True.
    /// </summary>
    bool IsClosed();
    /// <summary>
    /// returns True.
    /// </summary>
    bool IsPeriodic();
    /// <summary>
    /// Returns in P the point of parameter U.
    /// P = C + R * Cos (U) * XDir + R * Sin (U) * YDir
    /// where C is the center of the circle , XDir the XDirection and
    /// YDir the YDirection of the circle's local coordinate system.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    /// <summary>
    /// Returns the point P of parameter U and the first derivative V1.
    /// </summary>
    void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// </summary>
    void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    /// <summary>
    /// Returns the point P of parameter u, the first second and third
    /// derivatives V1 V2 and V3.
    /// </summary>
    void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// Raised if N < 1.
    /// </summary>
    Macad::Occt::Vec DN(double U, int N);
    /// <summary>
    /// Applies the transformation T to this circle.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this circle.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_Circle^ CreateDowncasted(::Geom_Circle* instance);
}; // class Geom_Circle

//---------------------------------------------------------------------
//  Class  Geom_ElementarySurface
//---------------------------------------------------------------------
/// <summary>
/// Describes the common behavior of surfaces which
/// have a simple parametric equation in a local
/// coordinate system. The Geom package provides
/// several implementations of concrete elementary surfaces:
/// - the plane, and
/// - four simple surfaces of revolution: the cylinder, the
/// cone, the sphere and the torus.
/// An elementary surface inherits the common behavior
/// of Geom_Surface surfaces. Furthermore, it is located
/// in 3D space by a coordinate system (a gp_Ax3
/// object) which is also its local coordinate system.
/// Any elementary surface is oriented, i.e. the normal
/// vector is always defined, and gives the same
/// orientation to the surface, at any point on the surface.
/// In topology this property is referred to as the "outside
/// region of the surface". This orientation is related to
/// the two parametric directions of the surface.
/// Rotation of a surface around the "main Axis" of its
/// coordinate system, in the trigonometric sense given
/// by the "X Direction" and the "Y Direction" of the
/// coordinate system, defines the u parametric direction
/// of that elementary surface of revolution. This is the
/// default construction mode.
/// It is also possible, however, to change the orientation
/// of a surface by reversing one of the two parametric
/// directions: use the UReverse or VReverse functions
/// to change the orientation of the normal at any point on the surface.
/// Warning
/// The local coordinate system of an elementary surface
/// is not necessarily direct:
/// - if it is direct, the trigonometric sense defined by its
/// "main Direction" is the same as the trigonometric
/// sense defined by its two vectors "X Direction" and "Y Direction":
/// "main Direction" = "X Direction" ^ "Y Direction"
/// - if it is indirect, the two definitions of trigonometric
/// sense are opposite:
/// "main Direction" = - "X Direction" ^ "Y Direction"
/// </summary>
public ref class Geom_ElementarySurface
    : public Macad::Occt::Geom_Surface
{

#ifdef Include_Geom_ElementarySurface_h
public:
    Include_Geom_ElementarySurface_h
#endif

protected:
    Geom_ElementarySurface(InitMode init)
        : Macad::Occt::Geom_Surface( init )
    {}

public:
    Geom_ElementarySurface(::Geom_ElementarySurface* nativeInstance)
        : Macad::Occt::Geom_Surface( nativeInstance )
    {}

    Geom_ElementarySurface(::Geom_ElementarySurface& nativeInstance)
        : Macad::Occt::Geom_Surface( nativeInstance )
    {}

    property ::Geom_ElementarySurface* NativeInstance
    {
        ::Geom_ElementarySurface* get()
        {
            return static_cast<::Geom_ElementarySurface*>(_NativeInstance);
        }
    }

public:
    Geom_ElementarySurface();
    /// <summary>
    /// Changes the main axis (ZAxis) of the elementary surface.
    /// 
    /// Raised if the direction of A1 is parallel to the XAxis of the
    /// coordinate system of the surface.
    /// </summary>
    void SetAxis(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Changes the location of the local coordinates system of the
    /// surface.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt theLoc);
    /// <summary>
    /// Changes the local coordinates system of the surface.
    /// </summary>
    void SetPosition(Macad::Occt::Ax3 theAx3);
    /// <summary>
    /// Returns the main axis of the surface (ZAxis).
    /// </summary>
    Macad::Occt::Ax1 Axis();
    /// <summary>
    /// Returns the location point of the local coordinate system of the
    /// surface.
    /// </summary>
    Macad::Occt::Pnt Location();
    /// <summary>
    /// Returns the local coordinates system of the surface.
    /// </summary>
    Macad::Occt::Ax3 Position();
    /// <summary>
    /// Reverses the U parametric direction of the surface.
    /// </summary>
    void UReverse();
    /// <summary>
    /// Return the  parameter on the  Ureversed surface for
    /// the point of parameter U on <me>.
    /// 
    /// me->UReversed()->Value(me->UReversedParameter(U),V)
    /// is the same point as
    /// me->Value(U,V)
    /// </summary>
    double UReversedParameter(double U);
    /// <summary>
    /// Reverses the V parametric direction of the surface.
    /// </summary>
    void VReverse();
    /// <summary>
    /// Return the  parameter on the  Vreversed surface for
    /// the point of parameter V on <me>.
    /// 
    /// me->VReversed()->Value(U,me->VReversedParameter(V))
    /// is the same point as
    /// me->Value(U,V)
    /// </summary>
    double VReversedParameter(double V);
    /// <summary>
    /// Returns GeomAbs_CN, the global continuity of any elementary surface.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsCNu(int N);
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsCNv(int N);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_ElementarySurface^ CreateDowncasted(::Geom_ElementarySurface* instance);
}; // class Geom_ElementarySurface

//---------------------------------------------------------------------
//  Class  Geom_ConicalSurface
//---------------------------------------------------------------------
/// <summary>
/// Describes a cone.
/// A cone is defined by the half-angle (can be negative) at its apex, and
/// is positioned in space by a coordinate system (a
/// gp_Ax3 object) and a reference radius as follows:
/// - The "main Axis" of the coordinate system is the
/// axis of revolution of the cone.
/// - The plane defined by the origin, the "X Direction"
/// and the "Y Direction" of the coordinate system is
/// the reference plane of the cone. The intersection
/// of the cone with this reference plane is a circle of
/// radius equal to the reference radius.
/// - The apex of the cone is on the negative side of
/// the "main Axis" of the coordinate system if the
/// half-angle is positive, and on the positive side if
/// the half-angle is negative.
/// This coordinate system is the "local coordinate
/// system" of the cone. The following apply:
/// - Rotation around its "main Axis", in the
/// trigonometric sense given by the "X Direction"
/// and the "Y Direction", defines the u parametric direction.
/// - Its "X Axis" gives the origin for the u parameter.
/// - Its "main Direction" is the v parametric direction of the cone.
/// - Its origin is the origin of the v parameter.
/// The parametric range of the two parameters is:
/// </summary>
/// @code
/// - [ 0, 2.*Pi ] for u, and
/// - ] -infinity, +infinity [ for v
/// @endcode
/// The parametric equation of the cone is:
/// @code
/// P(u, v) = O + (R + v*sin(Ang)) * (cos(u)*XDir + sin(u)*YDir) + v*cos(Ang)*ZDir
/// @endcode
/// where:
/// - O, XDir, YDir and ZDir are respectively
/// the origin, the "X Direction", the "Y Direction" and
/// the "Z Direction" of the cone's local coordinate system,
/// - Ang is the half-angle at the apex of the cone,   and
/// - R is the reference radius.
public ref class Geom_ConicalSurface sealed
    : public Macad::Occt::Geom_ElementarySurface
{

#ifdef Include_Geom_ConicalSurface_h
public:
    Include_Geom_ConicalSurface_h
#endif

public:
    Geom_ConicalSurface(::Geom_ConicalSurface* nativeInstance)
        : Macad::Occt::Geom_ElementarySurface( nativeInstance )
    {}

    Geom_ConicalSurface(::Geom_ConicalSurface& nativeInstance)
        : Macad::Occt::Geom_ElementarySurface( nativeInstance )
    {}

    property ::Geom_ConicalSurface* NativeInstance
    {
        ::Geom_ConicalSurface* get()
        {
            return static_cast<::Geom_ConicalSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// A3 defines the local coordinate system of the conical surface.
    /// Ang is the conical surface semi-angle. Its absolute value is in range
    /// ]0, PI/2[.
    /// Radius is the radius of the circle Viso in the placement plane
    /// of the conical surface defined with "XAxis" and "YAxis".
    /// The "ZDirection" of A3 defines the direction of the surface's
    /// axis of symmetry.
    /// If the location point of A3 is the apex of the surface
    /// Radius = 0 .
    /// At the creation the parametrization of the surface is defined
    /// such that the normal Vector (N = D1U ^ D1V) is oriented towards
    /// the "outside region" of the surface.
    /// 
    /// Raised if Radius < 0.0 or Abs(Ang) < Resolution from gp or
    /// Abs(Ang) >= PI/2 - Resolution
    /// </summary>
    Geom_ConicalSurface(Macad::Occt::Ax3 A3, double Ang, double Radius);
    /// <summary>
    /// Creates a ConicalSurface from a non transient gp_Cone.
    /// </summary>
    Geom_ConicalSurface(Macad::Occt::gp_Cone^ C);
    /// <summary>
    /// Set <me> so that <me> has the same geometric properties as C.
    /// </summary>
    void SetCone(Macad::Occt::gp_Cone^ C);
    /// <summary>
    /// Changes the radius of the conical surface in the placement plane (Z = 0, V = 0).
    /// The local coordinate system is not modified.
    /// Raised if R < 0.0
    /// </summary>
    void SetRadius(double R);
    /// <summary>
    /// Changes the semi angle of the conical surface.
    /// Semi-angle can be negative. Its absolute value
    /// Abs(Ang) is in range ]0,PI/2[.
    /// Raises ConstructionError if Abs(Ang) < Resolution from gp or
    /// Abs(Ang) >= PI/2 - Resolution
    /// </summary>
    void SetSemiAngle(double Ang);
    /// <summary>
    /// Returns a non transient cone with the same geometric properties as <me>.
    /// </summary>
    Macad::Occt::gp_Cone^ Cone();
    /// <summary>
    /// Eeturn 2.PI - U.
    /// </summary>
    double UReversedParameter(double U);
    /// <summary>
    /// Computes the u (or v) parameter on the modified surface,
    /// when reversing its u (or v) parametric direction,
    /// for any point of u parameter U (or of v parameter V) on this cone.
    /// In the case of a cone, these functions return respectively:
    /// - 2.*Pi - U, -V.
    /// </summary>
    double VReversedParameter(double V);
    /// <summary>
    /// Changes the orientation of this cone in the v parametric direction.
    /// The bounds of the surface are not changed but the v parametric direction is reversed.
    /// As a consequence, for a cone:
    /// - the "main Direction" of the local coordinate system
    /// is reversed, and
    /// - the half-angle at the apex is inverted.
    /// </summary>
    void VReverse();
    /// <summary>
    /// Computes the parameters on the transformed surface for
    /// the transform of the point of parameters U,V on <me>.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are the new values of U,V after calling
    /// @code
    /// me->TransformParameters(U,V,T)
    /// @endcode
    /// This method multiplies V by T.ScaleFactor()
    void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a 2d transformation used to find the new
    /// parameters of a point on the transformed surface.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are obtained by transforming U,V with the 2d transformation returned by
    /// @code
    /// me->ParametricTransformation(T)
    /// @endcode
    /// This method returns a scale centered on the U axis with T.ScaleFactor
    Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
    /// <summary>
    /// Computes the apex of this cone. It is on the negative
    /// side of the axis of revolution of this cone if the
    /// half-angle at the apex is positive, and on the positive
    /// side of the "main Axis" if the half-angle is negative.
    /// </summary>
    Macad::Occt::Pnt Apex();
    /// <summary>
    /// The conical surface is infinite in the V direction so
    /// V1 = Realfirst from Standard and V2 = RealLast.
    /// U1 = 0 and U2 = 2*PI.
    /// </summary>
    void Bounds(double% U1, double% U2, double% V1, double% V2);
    /// <summary>
    /// Returns the coefficients of the implicit equation of the
    /// quadric in the absolute cartesian coordinate system :
    /// These coefficients are normalized.
    /// </summary>
    /// @code
    /// A1.X**2 + A2.Y**2 + A3.Z**2 + 2.(B1.X.Y + B2.X.Z + B3.Y.Z) + 2.(C1.X + C2.Y + C3.Z) + D =
    /// 0.0
    /// @endcode
    void Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D);
    /// <summary>
    /// Returns the reference radius of this cone.
    /// The reference radius is the radius of the circle formed
    /// by the intersection of this cone and its reference
    /// plane (i.e. the plane defined by the origin, "X
    /// Direction" and "Y Direction" of the local coordinate
    /// system of this cone).
    /// If the apex of this cone is on the origin of the local
    /// coordinate system of this cone, the returned value is 0.
    /// </summary>
    double RefRadius();
    /// <summary>
    /// Returns the semi-angle at the apex of this cone.
    /// Attention! Semi-angle can be negative.
    /// </summary>
    double SemiAngle();
    /// <summary>
    /// returns True.
    /// </summary>
    bool IsUClosed();
    /// <summary>
    /// returns False.
    /// </summary>
    bool IsVClosed();
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsUPeriodic();
    /// <summary>
    /// Returns False.
    /// </summary>
    bool IsVPeriodic();
    /// <summary>
    /// Builds the U isoparametric line of this cone.
    /// The origin of this line is on the reference plane of this cone
    /// (i.e. the plane defined by the origin, "X Direction"
    /// and "Y Direction" of the local coordinate system of this cone).
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U);
    /// <summary>
    /// Builds the V isoparametric circle of this cone.
    /// It is the circle on this cone, located in the plane of Z
    /// coordinate V*cos(Semi-Angle) in the local coordinate system of this cone.
    /// The "Axis" of this circle is the axis of revolution of this cone.
    /// Its starting point is defined by the "X Direction" of this cone.
    /// Warning
    /// If the V isoparametric circle is close to the apex of
    /// this cone, the radius of the circle becomes very small.
    /// It is possible to have a circle with radius equal to 0.0.
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V);
    /// <summary>
    /// Computes the point P (U, V) on the surface.
    /// </summary>
    /// @code
    /// P (U, V) = Loc +
    /// (RefRadius + V * sin (Semi-Angle)) * (cos (U) * XDir + sin (U) * YDir) +
    /// V * cos (Semi-Angle) * ZDir
    /// @endcode
    /// where Loc is the origin of the placement plane (XAxis, YAxis)
    /// XDir is the direction of the XAxis and YDir the direction of the YAxis.
    void D0(double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// Computes the current point and the first derivatives in the directions U and V.
    /// </summary>
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// Computes the current point, the first and the second derivatives in the directions U and V.
    /// </summary>
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Computes the current point, the first,the second and the third
    /// derivatives in the directions U and V.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the u
    /// parametric direction, and Nv in the v parametric
    /// direction at the point of parameters (U, V) of this cone.
    /// Exceptions
    /// Standard_RangeError if:
    /// - Nu + Nv is less than 1,
    /// - Nu or Nv is negative.
    /// </summary>
    Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Applies the transformation T to this cone.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this cone.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_ConicalSurface^ CreateDowncasted(::Geom_ConicalSurface* instance);
}; // class Geom_ConicalSurface

//---------------------------------------------------------------------
//  Class  Geom_CylindricalSurface
//---------------------------------------------------------------------
/// <summary>
/// This class defines the infinite cylindrical surface.
/// 
/// Every cylindrical surface is set by the following equation:
/// </summary>
/// @code
/// S(U,V) = Location + R*cos(U)*XAxis + R*sin(U)*YAxis + V*ZAxis,
/// @endcode
/// where R is cylinder radius.
/// 
/// The local coordinate system of the CylindricalSurface is defined
/// with an axis placement (see class ElementarySurface).
/// 
/// The "ZAxis" is the symmetry axis of the CylindricalSurface,
/// it gives the direction of increasing parametric value V.
/// 
/// The parametrization range is :
/// @code
/// U [0, 2*PI],  V ]- infinite, + infinite[
/// @endcode
/// 
/// The "XAxis" and the "YAxis" define the placement plane of the
/// surface (Z = 0, and parametric value V = 0)  perpendicular to
/// the symmetry axis. The "XAxis" defines the origin of the
/// parameter U = 0.  The trigonometric sense gives the positive
/// orientation for the parameter U.
/// 
/// When you create a CylindricalSurface the U and V directions of
/// parametrization are such that at each point of the surface the
/// normal is oriented towards the "outside region".
/// 
/// The methods UReverse VReverse change the orientation of the
/// surface.
public ref class Geom_CylindricalSurface sealed
    : public Macad::Occt::Geom_ElementarySurface
{

#ifdef Include_Geom_CylindricalSurface_h
public:
    Include_Geom_CylindricalSurface_h
#endif

public:
    Geom_CylindricalSurface(::Geom_CylindricalSurface* nativeInstance)
        : Macad::Occt::Geom_ElementarySurface( nativeInstance )
    {}

    Geom_CylindricalSurface(::Geom_CylindricalSurface& nativeInstance)
        : Macad::Occt::Geom_ElementarySurface( nativeInstance )
    {}

    property ::Geom_CylindricalSurface* NativeInstance
    {
        ::Geom_CylindricalSurface* get()
        {
            return static_cast<::Geom_CylindricalSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// A3 defines the local coordinate system of the cylindrical surface.
    /// The "ZDirection" of A3 defines the direction of the surface's axis of symmetry.
    /// At the creation the parametrization of the surface is defined
    /// such that the normal Vector (N = D1U ^ D1V) is oriented towards
    /// the "outside region" of the surface.
    /// Warnings:
    /// It is not forbidden to create a cylindrical surface with
    /// Radius = 0.0
    /// Raised if Radius < 0.0
    /// </summary>
    Geom_CylindricalSurface(Macad::Occt::Ax3 A3, double Radius);
    /// <summary>
    /// Creates a CylindricalSurface from a non transient gp_Cylinder.
    /// </summary>
    Geom_CylindricalSurface(Macad::Occt::gp_Cylinder^ C);
    /// <summary>
    /// Set <me> so that <me> has the same geometric properties as C.
    /// </summary>
    void SetCylinder(Macad::Occt::gp_Cylinder^ C);
    /// <summary>
    /// Changes the radius of the cylinder.
    /// Raised if R < 0.0
    /// </summary>
    void SetRadius(double R);
    /// <summary>
    /// returns a non transient cylinder with the same geometric properties as <me>.
    /// </summary>
    Macad::Occt::gp_Cylinder^ Cylinder();
    /// <summary>
    /// Return the  parameter on the  Ureversed surface for
    /// the point of parameter U on <me>.
    /// Return 2.PI - U.
    /// </summary>
    double UReversedParameter(double U);
    /// <summary>
    /// Return the  parameter on the  Vreversed surface for
    /// the point of parameter V on <me>.
    /// Return -V
    /// </summary>
    double VReversedParameter(double V);
    /// <summary>
    /// Computes the  parameters on the  transformed  surface for
    /// the transform of the point of parameters U,V on <me>.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are the new values of U,V after calling
    /// @code
    /// me->TransformParameters(U,V,T)
    /// @endcode
    /// This method multiplies V by T.ScaleFactor()
    void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a 2d transformation used to find the new
    /// parameters of a point on the transformed surface.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are obtained by transforming U,V with the 2d transformation returned by
    /// @code
    /// me->ParametricTransformation(T)
    /// @endcode
    /// This method returns a scale centered on the U axis with T.ScaleFactor
    Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
    /// <summary>
    /// The CylindricalSurface is infinite in the V direction so
    /// V1 = Realfirst, V2 = RealLast from package Standard.
    /// U1 = 0 and U2 = 2*PI.
    /// </summary>
    void Bounds(double% U1, double% U2, double% V1, double% V2);
    /// <summary>
    /// Returns the coefficients of the implicit equation of the quadric
    /// in the absolute cartesian coordinate system :
    /// These coefficients are normalized.
    /// </summary>
    /// @code
    /// A1.X**2 + A2.Y**2 + A3.Z**2 + 2.(B1.X.Y + B2.X.Z + B3.Y.Z) + 2.(C1.X + C2.Y + C3.Z) + D = 0.0
    /// @endcode
    void Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D);
    /// <summary>
    /// Returns the radius of this cylinder.
    /// </summary>
    double Radius();
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsUClosed();
    /// <summary>
    /// Returns False.
    /// </summary>
    bool IsVClosed();
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsUPeriodic();
    /// <summary>
    /// Returns False.
    /// </summary>
    bool IsVPeriodic();
    /// <summary>
    /// The UIso curve is a Line. The location point of this line is
    /// on the placement plane (XAxis, YAxis) of the surface.
    /// This line is parallel to the axis of symmetry of the surface.
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U);
    /// <summary>
    /// The VIso curve is a circle. The start point of this circle
    /// (U = 0) is defined with the "XAxis" of the surface.
    /// The center of the circle is on the symmetry axis.
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V);
    /// <summary>
    /// Computes the  point P (U, V) on the surface.
    /// P (U, V) = Loc + Radius * (cos (U) * XDir + sin (U) * YDir) +
    /// V * ZDir
    /// where Loc is the origin of the placement plane (XAxis, YAxis)
    /// XDir is the direction of the XAxis and YDir the direction of
    /// the YAxis.
    /// </summary>
    void D0(double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// Computes the current point and the first derivatives in the
    /// directions U and V.
    /// </summary>
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// Computes the current point, the first and the second derivatives
    /// in the directions U and V.
    /// </summary>
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Computes the current point, the first, the second and the
    /// third   derivatives in the directions U and V.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the direction u and Nv
    /// in the direction v.
    /// Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
    /// </summary>
    Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Applies the transformation T to this cylinder.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this cylinder.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_CylindricalSurface^ CreateDowncasted(::Geom_CylindricalSurface* instance);
}; // class Geom_CylindricalSurface

//---------------------------------------------------------------------
//  Class  Geom_Vector
//---------------------------------------------------------------------
/// <summary>
/// The abstract class Vector describes the common
/// behavior of vectors in 3D space.
/// The Geom package provides two concrete classes of
/// vectors: Geom_Direction (unit vector) and Geom_VectorWithMagnitude.
/// </summary>
public ref class Geom_Vector
    : public Macad::Occt::Geom_Geometry
{

#ifdef Include_Geom_Vector_h
public:
    Include_Geom_Vector_h
#endif

protected:
    Geom_Vector(InitMode init)
        : Macad::Occt::Geom_Geometry( init )
    {}

public:
    Geom_Vector(::Geom_Vector* nativeInstance)
        : Macad::Occt::Geom_Geometry( nativeInstance )
    {}

    Geom_Vector(::Geom_Vector& nativeInstance)
        : Macad::Occt::Geom_Geometry( nativeInstance )
    {}

    property ::Geom_Vector* NativeInstance
    {
        ::Geom_Vector* get()
        {
            return static_cast<::Geom_Vector*>(_NativeInstance);
        }
    }

public:
    Geom_Vector();
    /// <summary>
    /// Reverses the vector <me>.
    /// </summary>
    void Reverse();
    /// <summary>
    /// Returns a copy of <me> reversed.
    /// </summary>
    Macad::Occt::Geom_Vector^ Reversed();
    /// <summary>
    /// Computes the angular value, in radians, between this
    /// vector and vector Other. The result is a value between 0 and Pi.
    /// Exceptions
    /// gp_VectorWithNullMagnitude if:
    /// - the magnitude of this vector is less than or equal to
    /// gp::Resolution(), or
    /// - the magnitude of vector Other is less than or equal
    /// to gp::Resolution().
    /// </summary>
    double Angle(Macad::Occt::Geom_Vector^ Other);
    /// <summary>
    /// Computes the angular value, in radians, between this
    /// vector and vector Other. The result is a value
    /// between -Pi and Pi. The vector VRef defines the
    /// positive sense of rotation: the angular value is positive
    /// if the cross product this ^ Other has the same
    /// orientation as VRef (in relation to the plane defined
    /// by this vector and vector Other). Otherwise, it is negative.
    /// Exceptions
    /// Standard_DomainError if this vector, vector Other
    /// and vector VRef are coplanar, except if this vector
    /// and vector Other are parallel.
    /// gp_VectorWithNullMagnitude if the magnitude of
    /// this vector, vector Other or vector VRef is less than
    /// or equal to gp::Resolution().
    /// </summary>
    double AngleWithRef(Macad::Occt::Geom_Vector^ Other, Macad::Occt::Geom_Vector^ VRef);
    /// <summary>
    /// Returns the coordinates X, Y and Z of this vector.
    /// </summary>
    void Coord(double% X, double% Y, double% Z);
    /// <summary>
    /// Returns the  Magnitude of <me>.
    /// </summary>
    double Magnitude();
    /// <summary>
    /// Returns the square magnitude of <me>.
    /// </summary>
    double SquareMagnitude();
    /// <summary>
    /// Returns the X coordinate of <me>.
    /// </summary>
    double X();
    /// <summary>
    /// Returns the Y coordinate of <me>.
    /// </summary>
    double Y();
    /// <summary>
    /// Returns the Z coordinate of <me>.
    /// </summary>
    double Z();
    /// <summary>
    /// Computes the cross product between <me> and <Other>.
    /// 
    /// Raised if <me> is a "Direction" and if <me> and <Other>
    /// are parallel because it is not possible to build a
    /// "Direction" with null length.
    /// </summary>
    void Cross(Macad::Occt::Geom_Vector^ Other);
    /// <summary>
    /// Computes the cross product between <me> and <Other>.
    /// A new direction is returned.
    /// 
    /// Raised if <me> is a "Direction" and if the two vectors
    /// are parallel because it is not possible to create a
    /// "Direction" with null length.
    /// </summary>
    Macad::Occt::Geom_Vector^ Crossed(Macad::Occt::Geom_Vector^ Other);
    /// <summary>
    /// Computes the triple vector product  <me> ^(V1 ^ V2).
    /// 
    /// Raised if <me> is a "Direction" and if V1 and V2 are parallel
    /// or <me> and (V1 ^ V2) are  parallel
    /// </summary>
    void CrossCross(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
    /// <summary>
    /// Computes the triple vector product <me> ^(V1 ^ V2).
    /// 
    /// Raised if <me> is a direction and if V1 and V2 are
    /// parallel or <me> and (V1 ^ V2) are parallel
    /// </summary>
    Macad::Occt::Geom_Vector^ CrossCrossed(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
    /// <summary>
    /// Computes the scalar product of this vector and vector Other.
    /// </summary>
    double Dot(Macad::Occt::Geom_Vector^ Other);
    /// <summary>
    /// Computes the triple scalar product. Returns me . (V1 ^ V2)
    /// </summary>
    double DotCross(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
    /// <summary>
    /// Converts this vector into a gp_Vec vector.
    /// </summary>
    Macad::Occt::Vec Vec();
    static Macad::Occt::Geom_Vector^ CreateDowncasted(::Geom_Vector* instance);
}; // class Geom_Vector

//---------------------------------------------------------------------
//  Class  Geom_Direction
//---------------------------------------------------------------------
/// <summary>
/// The class Direction specifies a vector that is never null.
/// It is a unit vector.
/// </summary>
public ref class Geom_Direction sealed
    : public Macad::Occt::Geom_Vector
{

#ifdef Include_Geom_Direction_h
public:
    Include_Geom_Direction_h
#endif

public:
    Geom_Direction(::Geom_Direction* nativeInstance)
        : Macad::Occt::Geom_Vector( nativeInstance )
    {}

    Geom_Direction(::Geom_Direction& nativeInstance)
        : Macad::Occt::Geom_Vector( nativeInstance )
    {}

    property ::Geom_Direction* NativeInstance
    {
        ::Geom_Direction* get()
        {
            return static_cast<::Geom_Direction*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a unit vector with it 3 cartesian coordinates.
    /// 
    /// Raised if Sqrt( X*X + Y*Y + Z*Z) <= Resolution from gp.
    /// </summary>
    Geom_Direction(double X, double Y, double Z);
    /// <summary>
    /// Creates a transient copy of <me>.
    /// </summary>
    Geom_Direction(Macad::Occt::Dir V);
    /// <summary>
    /// Sets <me> to X,Y,Z coordinates.
    /// 
    /// Raised if Sqrt( X*X + Y*Y + Z*Z) <= Resolution from gp.
    /// </summary>
    void SetCoord(double X, double Y, double Z);
    /// <summary>
    /// Converts the gp_Dir unit vector V into this unit vector.
    /// </summary>
    void SetDir(Macad::Occt::Dir V);
    /// <summary>
    /// Changes the X coordinate of <me>.
    /// 
    /// Raised if Sqrt( X*X + Y*Y + Z*Z) <= Resolution from gp.
    /// </summary>
    void SetX(double X);
    /// <summary>
    /// Changes the Y coordinate of <me>.
    /// 
    /// Raised if Sqrt( X*X + Y*Y + Z*Z) <= Resolution from gp.
    /// </summary>
    void SetY(double Y);
    /// <summary>
    /// Changes the Z coordinate of <me>.
    /// 
    /// Raised if Sqrt( X*X + Y*Y + Z*Z) <= Resolution from gp.
    /// </summary>
    void SetZ(double Z);
    /// <summary>
    /// Returns the non transient direction with the same
    /// coordinates as <me>.
    /// </summary>
    Macad::Occt::Dir Dir();
    /// <summary>
    /// returns 1.0 which is the magnitude of any unit vector.
    /// </summary>
    double Magnitude();
    /// <summary>
    /// returns 1.0 which is the square magnitude of any unit vector.
    /// </summary>
    double SquareMagnitude();
    /// <summary>
    /// Computes the cross product between <me> and <Other>.
    /// 
    /// Raised if the two vectors are parallel because it is
    /// not possible to have a direction with null length.
    /// </summary>
    void Cross(Macad::Occt::Geom_Vector^ Other);
    /// <summary>
    /// Computes the triple vector product  <me> ^(V1 ^ V2).
    /// 
    /// Raised if V1 and V2 are parallel or <me> and (V1 ^ V2) are
    /// parallel
    /// </summary>
    void CrossCross(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
    /// <summary>
    /// Computes the cross product between <me> and <Other>.
    /// A new direction is returned.
    /// 
    /// Raised if the two vectors are parallel because it is
    /// not possible to have a direction with null length.
    /// </summary>
    Macad::Occt::Geom_Vector^ Crossed(Macad::Occt::Geom_Vector^ Other);
    /// <summary>
    /// Computes the triple vector product <me> ^(V1 ^ V2).
    /// 
    /// Raised if V1 and V2 are parallel or <me> and (V1 ^ V2) are
    /// parallel
    /// </summary>
    Macad::Occt::Geom_Vector^ CrossCrossed(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
    /// <summary>
    /// Applies the transformation T to this unit vector, then normalizes it.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this unit vector.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    static Macad::Occt::Geom_Direction^ CreateDowncasted(::Geom_Direction* instance);
}; // class Geom_Direction

//---------------------------------------------------------------------
//  Class  Geom_Ellipse
//---------------------------------------------------------------------
/// <summary>
/// Describes an ellipse in 3D space.
/// An ellipse is defined by its major and minor radii and,
/// as with any conic curve, is positioned in space with a
/// right-handed coordinate system (gp_Ax2 object) where:
/// - the origin is the center of the ellipse,
/// - the "X Direction" defines the major axis, and
/// - the "Y Direction" defines the minor axis.
/// The origin, "X Direction" and "Y Direction" of this
/// coordinate system define the plane of the ellipse. The
/// coordinate system is the local coordinate system of the ellipse.
/// The "main Direction" of this coordinate system is the
/// vector normal to the plane of the ellipse. The axis, of
/// which the origin and unit vector are respectively the
/// origin and "main Direction" of the local coordinate
/// system, is termed the "Axis" or "main Axis" of the ellipse.
/// The "main Direction" of the local coordinate system
/// gives an explicit orientation to the ellipse (definition of
/// the trigonometric sense), determining the direction in
/// which the parameter increases along the ellipse.
/// The Geom_Ellipse ellipse is parameterized by an angle:
/// P(U) = O + MajorRad*Cos(U)*XDir + MinorRad*Sin(U)*YDir
/// where:
/// - P is the point of parameter U,
/// - O, XDir and YDir are respectively the origin, "X
/// Direction" and "Y Direction" of its local coordinate system,
/// - MajorRad and MinorRad are the major and minor radii of the ellipse.
/// The "X Axis" of the local coordinate system therefore
/// defines the origin of the parameter of the ellipse.
/// An ellipse is a closed and periodic curve. The period
/// is 2.*Pi and the parameter range is [ 0, 2.*Pi [.
/// </summary>
public ref class Geom_Ellipse sealed
    : public Macad::Occt::Geom_Conic
{

#ifdef Include_Geom_Ellipse_h
public:
    Include_Geom_Ellipse_h
#endif

public:
    Geom_Ellipse(::Geom_Ellipse* nativeInstance)
        : Macad::Occt::Geom_Conic( nativeInstance )
    {}

    Geom_Ellipse(::Geom_Ellipse& nativeInstance)
        : Macad::Occt::Geom_Conic( nativeInstance )
    {}

    property ::Geom_Ellipse* NativeInstance
    {
        ::Geom_Ellipse* get()
        {
            return static_cast<::Geom_Ellipse*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an ellipse by conversion of the gp_Elips ellipse E.
    /// </summary>
    Geom_Ellipse(Macad::Occt::gp_Elips^ E);
    /// <summary>
    /// Constructs an ellipse
    /// defined by its major and minor radii, MajorRadius
    /// and MinorRadius, where A2 locates the ellipse
    /// and defines its orientation in 3D space such that:
    /// - the center of the ellipse is the origin of A2,
    /// - the "X Direction" of A2 defines the major axis
    /// of the ellipse, i.e. the major radius
    /// MajorRadius is measured along this axis,
    /// - the "Y Direction" of A2 defines the minor axis
    /// of the ellipse, i.e. the minor radius
    /// MinorRadius is measured along this axis,
    /// - A2 is the local coordinate system of the ellipse.
    /// Exceptions
    /// Standard_ConstructionError if:
    /// - MajorRadius is less than MinorRadius, or
    /// - MinorRadius is less than 0.
    /// Warning The Geom package does not prevent the
    /// construction of an ellipse where MajorRadius and
    /// MinorRadius are equal.
    /// </summary>
    Geom_Ellipse(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
    /// <summary>
    /// Converts the gp_Elips ellipse E into this ellipse.
    /// </summary>
    void SetElips(Macad::Occt::gp_Elips^ E);
    /// <summary>
    /// Assigns a value to the major radius of this ellipse.
    /// ConstructionError raised if MajorRadius < MinorRadius.
    /// </summary>
    void SetMajorRadius(double MajorRadius);
    /// <summary>
    /// Assigns a value to the minor radius of this ellipse.
    /// ConstructionError raised if MajorRadius < MinorRadius or if MinorRadius < 0.
    /// </summary>
    void SetMinorRadius(double MinorRadius);
    /// <summary>
    /// returns the non transient ellipse from gp with the same
    /// </summary>
    Macad::Occt::gp_Elips^ Elips();
    /// <summary>
    /// Computes the parameter on the reversed ellipse for
    /// the point of parameter U on this ellipse.
    /// For an ellipse, the returned value is: 2.*Pi - U.
    /// </summary>
    double ReversedParameter(double U);
    /// <summary>
    /// This directrix is the line normal to the XAxis of the ellipse
    /// in the local plane (Z = 0) at a distance d = MajorRadius / e
    /// from the center of the ellipse, where e is the eccentricity of
    /// the ellipse.
    /// This line is parallel to the "YAxis". The intersection point
    /// between directrix1 and the "XAxis" is the "Location" point
    /// of the directrix1. This point is on the positive side of
    /// the "XAxis".
    /// Raised if Eccentricity = 0.0. (The ellipse degenerates
    /// into a circle)
    /// </summary>
    Macad::Occt::Ax1 Directrix1();
    /// <summary>
    /// This line is obtained by the symmetrical transformation
    /// of "Directrix1" with respect to the "YAxis" of the ellipse.
    /// 
    /// Raised if Eccentricity = 0.0. (The ellipse degenerates into a
    /// circle).
    /// </summary>
    Macad::Occt::Ax1 Directrix2();
    /// <summary>
    /// Returns the eccentricity of the ellipse  between 0.0 and 1.0
    /// If f is the distance between the center of the ellipse and
    /// the Focus1 then the eccentricity e = f / MajorRadius.
    /// Returns 0 if MajorRadius = 0
    /// </summary>
    double Eccentricity();
    /// <summary>
    /// Computes the focal distance. It is the distance between the
    /// the two focus of the ellipse.
    /// </summary>
    double Focal();
    /// <summary>
    /// Returns the first focus of the ellipse. This focus is on the
    /// positive side of the "XAxis" of the ellipse.
    /// </summary>
    Macad::Occt::Pnt Focus1();
    /// <summary>
    /// Returns the second focus of the ellipse. This focus is on
    /// the negative side of the "XAxis" of the ellipse.
    /// </summary>
    Macad::Occt::Pnt Focus2();
    /// <summary>
    /// Returns the major  radius of this ellipse.
    /// </summary>
    double MajorRadius();
    /// <summary>
    /// Returns the minor radius of this ellipse.
    /// </summary>
    double MinorRadius();
    /// <summary>
    /// Returns p = (1 - e * e) * MajorRadius where e is the eccentricity
    /// of the ellipse.
    /// Returns 0 if MajorRadius = 0
    /// </summary>
    double Parameter();
    /// <summary>
    /// Returns the value of the first parameter of this
    /// ellipse. This is respectively:
    /// - 0.0, which gives the start point of this ellipse, or
    /// The start point and end point of an ellipse are coincident.
    /// </summary>
    double FirstParameter();
    /// <summary>
    /// Returns the value of the  last parameter of this
    /// ellipse. This is respectively:
    /// - 2.*Pi, which gives the end point of this ellipse.
    /// The start point and end point of an ellipse are coincident.
    /// </summary>
    double LastParameter();
    /// <summary>
    /// return True.
    /// </summary>
    bool IsClosed();
    /// <summary>
    /// return True.
    /// </summary>
    bool IsPeriodic();
    /// <summary>
    /// Returns in P the point of parameter U.
    /// P = C + MajorRadius * Cos (U) * XDir + MinorRadius * Sin (U) * YDir
    /// where C is the center of the ellipse , XDir the direction of
    /// the "XAxis" and "YDir" the "YAxis" of the ellipse.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    /// <summary>
    /// Returns the point P of parameter U. The vectors V1 and V2
    /// are the first and second derivatives at this point.
    /// </summary>
    void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    /// <summary>
    /// Returns the point P of parameter U, the first second and
    /// third derivatives V1 V2 and V3.
    /// </summary>
    void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// For the point of parameter U of this ellipse, computes
    /// the vector corresponding to the Nth derivative.
    /// Exceptions Standard_RangeError if N is less than 1.
    /// </summary>
    Macad::Occt::Vec DN(double U, int N);
    /// <summary>
    /// Applies the transformation T to this ellipse.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this ellipse.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_Ellipse^ CreateDowncasted(::Geom_Ellipse* instance);
}; // class Geom_Ellipse

//---------------------------------------------------------------------
//  Class  Geom_HSequenceOfBSplineSurface
//---------------------------------------------------------------------
public ref class Geom_HSequenceOfBSplineSurface sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::Geom_BSplineSurface^>
{

#ifdef Include_Geom_HSequenceOfBSplineSurface_h
public:
    Include_Geom_HSequenceOfBSplineSurface_h
#endif

public:
    Geom_HSequenceOfBSplineSurface(::Geom_HSequenceOfBSplineSurface* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Geom_HSequenceOfBSplineSurface(::Geom_HSequenceOfBSplineSurface& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Geom_HSequenceOfBSplineSurface* NativeInstance
    {
        ::Geom_HSequenceOfBSplineSurface* get()
        {
            return static_cast<::Geom_HSequenceOfBSplineSurface*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Geom_HSequenceOfBSplineSurface::Iterator>
    {

#ifdef Include_Geom_HSequenceOfBSplineSurface_Iterator_h
    public:
        Include_Geom_HSequenceOfBSplineSurface_Iterator_h
#endif

    public:
        Iterator(::Geom_HSequenceOfBSplineSurface::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Geom_HSequenceOfBSplineSurface::Iterator>( nativeInstance, true )
        {}

        Iterator(::Geom_HSequenceOfBSplineSurface::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Geom_HSequenceOfBSplineSurface::Iterator>( &nativeInstance, false )
        {}

        property ::Geom_HSequenceOfBSplineSurface::Iterator* NativeInstance
        {
            ::Geom_HSequenceOfBSplineSurface::Iterator* get()
            {
                return static_cast<::Geom_HSequenceOfBSplineSurface::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Geom_BSplineSurface^ Value();
        Macad::Occt::Geom_BSplineSurface^ ChangeValue();
        bool IsEqual(Macad::Occt::Geom_HSequenceOfBSplineSurface::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Geom_HSequenceOfBSplineSurface();
    Geom_HSequenceOfBSplineSurface(Macad::Occt::Geom_SequenceOfBSplineSurface^ theOther);
    Macad::Occt::Geom_SequenceOfBSplineSurface^ Sequence();
    void Append(Macad::Occt::Geom_BSplineSurface^ theItem);
    void Append(Macad::Occt::Geom_SequenceOfBSplineSurface^ theSequence);
    Macad::Occt::Geom_SequenceOfBSplineSurface^ ChangeSequence();
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
    Macad::Occt::Geom_HSequenceOfBSplineSurface^ Assign(Macad::Occt::Geom_HSequenceOfBSplineSurface^ theOther);
    void Remove(Macad::Occt::Geom_HSequenceOfBSplineSurface::Iterator^ thePosition);
    void Prepend(Macad::Occt::Geom_BSplineSurface^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Geom_BSplineSurface^ theItem);
    void InsertAfter(Macad::Occt::Geom_HSequenceOfBSplineSurface::Iterator^ thePosition, Macad::Occt::Geom_BSplineSurface^ theItem);
    void Split(int theIndex, Macad::Occt::Geom_HSequenceOfBSplineSurface^ theSeq);
    Macad::Occt::Geom_BSplineSurface^ First();
    Macad::Occt::Geom_BSplineSurface^ ChangeFirst();
    Macad::Occt::Geom_BSplineSurface^ Last();
    Macad::Occt::Geom_BSplineSurface^ ChangeLast();
    virtual Macad::Occt::Geom_BSplineSurface^ Value(int theIndex);
    Macad::Occt::Geom_BSplineSurface^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Geom_BSplineSurface^ theItem);
    static Macad::Occt::Geom_HSequenceOfBSplineSurface^ CreateDowncasted(::Geom_HSequenceOfBSplineSurface* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Geom_BSplineSurface^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Geom_HSequenceOfBSplineSurface

//---------------------------------------------------------------------
//  Class  Geom_Hyperbola
//---------------------------------------------------------------------
/// <summary>
/// Describes a branch of a hyperbola in 3D space.
/// A hyperbola is defined by its major and minor radii
/// and, as with any conic curve, is positioned in space
/// with a right-handed coordinate system (gp_Ax2 object) where:
/// - the origin is the center of the hyperbola,
/// - the "X Direction" defines the major axis, and
/// - the "Y Direction" defines the minor axis.
/// The origin, "X Direction" and "Y Direction" of this
/// coordinate system define the plane of the hyperbola.
/// The coordinate system is the local coordinate
/// system of the hyperbola.
/// The branch of the hyperbola described is the one
/// located on the positive side of the major axis.
/// The "main Direction" of the local coordinate system is
/// a vector normal to the plane of the hyperbola. The
/// axis, of which the origin and unit vector are
/// respectively the origin and "main Direction" of the
/// local coordinate system, is termed the "Axis" or "main
/// Axis" of the hyperbola.
/// The "main Direction" of the local coordinate system
/// gives an explicit orientation to the hyperbola,
/// determining the direction in which the parameter
/// increases along the hyperbola.
/// The Geom_Hyperbola hyperbola is parameterized as follows:
/// P(U) = O + MajRad*Cosh(U)*XDir + MinRad*Sinh(U)*YDir, where:
/// - P is the point of parameter U,
/// - O, XDir and YDir are respectively the origin, "X
/// Direction" and "Y Direction" of its local coordinate system,
/// - MajRad and MinRad are the major and minor radii of the hyperbola.
/// The "X Axis" of the local coordinate system therefore
/// defines the origin of the parameter of the hyperbola.
/// The parameter range is ] -infinite, +infinite [.
/// The following diagram illustrates the respective
/// positions, in the plane of the hyperbola, of the three
/// branches of hyperbolas constructed using the
/// functions OtherBranch, ConjugateBranch1 and
/// ConjugateBranch2: Defines the main branch of an hyperbola.
/// ^YAxis
/// |
/// FirstConjugateBranch
/// |
/// Other            |                Main
/// --------------------- C ------------------------------>XAxis
/// Branch           |                Branch
/// |
/// SecondConjugateBranch
/// |
/// Warning
/// The value of the major radius (on the major axis) can
/// be less than the value of the minor radius (on the minor axis).
/// </summary>
public ref class Geom_Hyperbola sealed
    : public Macad::Occt::Geom_Conic
{

#ifdef Include_Geom_Hyperbola_h
public:
    Include_Geom_Hyperbola_h
#endif

public:
    Geom_Hyperbola(::Geom_Hyperbola* nativeInstance)
        : Macad::Occt::Geom_Conic( nativeInstance )
    {}

    Geom_Hyperbola(::Geom_Hyperbola& nativeInstance)
        : Macad::Occt::Geom_Conic( nativeInstance )
    {}

    property ::Geom_Hyperbola* NativeInstance
    {
        ::Geom_Hyperbola* get()
        {
            return static_cast<::Geom_Hyperbola*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a hyperbola by conversion of the gp_Hypr hyperbola H.
    /// </summary>
    Geom_Hyperbola(Macad::Occt::gp_Hypr^ H);
    /// <summary>
    /// Constructs a hyperbola defined by its major and
    /// minor radii, MajorRadius and MinorRadius, where A2 locates the
    /// hyperbola and defines its orientation in 3D space such that:
    /// - the center of the hyperbola is the origin of A2,
    /// - the "X Direction" of A2 defines the major axis
    /// of the hyperbola, i.e. the major radius
    /// MajorRadius is measured along this axis,
    /// - the "Y Direction" of A2 defines the minor axis
    /// of the hyperbola, i.e. the minor radius
    /// MinorRadius is measured along this axis,
    /// - A2 is the local coordinate system of the   hyperbola.
    /// Exceptions
    /// Standard_ConstructionError if:
    /// - MajorRadius is less than 0.0,
    /// - MinorRadius is less than 0.0.
    /// </summary>
    Geom_Hyperbola(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
    /// <summary>
    /// Converts the gp_Hypr hyperbola H into this hyperbola.
    /// </summary>
    void SetHypr(Macad::Occt::gp_Hypr^ H);
    /// <summary>
    /// Assigns a value to the major radius of this hyperbola.
    /// Exceptions
    /// Standard_ConstructionError if:
    /// - MajorRadius is less than 0.0, or
    /// - MinorRadius is less than 0.0.Raised if MajorRadius < 0.0
    /// </summary>
    void SetMajorRadius(double MajorRadius);
    /// <summary>
    /// Assigns a value to the minor radius of this hyperbola.
    /// Exceptions
    /// Standard_ConstructionError if:
    /// - MajorRadius is less than 0.0, or
    /// - MinorRadius is less than 0.0.Raised if MajorRadius < 0.0
    /// </summary>
    void SetMinorRadius(double MinorRadius);
    /// <summary>
    /// returns the non transient parabola from gp with the same
    /// geometric properties as <me>.
    /// </summary>
    Macad::Occt::gp_Hypr^ Hypr();
    /// <summary>
    /// Computes the parameter on the reversed hyperbola,
    /// for the point of parameter U on this hyperbola.
    /// For a hyperbola, the returned value is: -U.
    /// </summary>
    double ReversedParameter(double U);
    /// <summary>
    /// Returns RealFirst from Standard.
    /// </summary>
    double FirstParameter();
    /// <summary>
    /// returns RealLast from Standard.
    /// </summary>
    double LastParameter();
    /// <summary>
    /// Returns False.
    /// </summary>
    bool IsClosed();
    /// <summary>
    /// return False for an hyperbola.
    /// </summary>
    bool IsPeriodic();
    /// <summary>
    /// In the local coordinate system of the hyperbola the equation of
    /// the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the
    /// equation of the first asymptote is Y = (B/A)*X.
    /// Raises ConstructionError if MajorRadius = 0.0
    /// </summary>
    Macad::Occt::Ax1 Asymptote1();
    /// <summary>
    /// In the local coordinate system of the hyperbola the equation of
    /// the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the
    /// equation of the first asymptote is Y = -(B/A)*X.
    /// Raises ConstructionError if MajorRadius = 0.0
    /// </summary>
    Macad::Occt::Ax1 Asymptote2();
    /// <summary>
    /// This branch of hyperbola is on the positive side of the
    /// YAxis of <me>.
    /// </summary>
    Macad::Occt::gp_Hypr^ ConjugateBranch1();
    /// <summary>
    /// This branch of hyperbola is on the negative side of the
    /// YAxis of <me>.
    /// Note: The diagram given under the class purpose
    /// indicates where these two branches of hyperbola are
    /// positioned in relation to this branch of hyperbola.
    /// </summary>
    Macad::Occt::gp_Hypr^ ConjugateBranch2();
    /// <summary>
    /// This directrix is the line normal to the XAxis of the hyperbola
    /// in the local plane (Z = 0) at a distance d = MajorRadius / e
    /// from the center of the hyperbola, where e is the eccentricity of
    /// the hyperbola.
    /// This line is parallel to the YAxis. The intersection point between
    /// directrix1 and the XAxis is the location point of the directrix1.
    /// This point is on the positive side of the XAxis.
    /// </summary>
    Macad::Occt::Ax1 Directrix1();
    /// <summary>
    /// This line is obtained by the symmetrical transformation
    /// of "directrix1" with respect to the YAxis of the hyperbola.
    /// </summary>
    Macad::Occt::Ax1 Directrix2();
    /// <summary>
    /// Returns the eccentricity of the hyperbola (e > 1).
    /// If f is the distance between the location of the hyperbola
    /// and the Focus1 then the eccentricity e = f / MajorRadius.
    /// raised if MajorRadius = 0.0
    /// </summary>
    double Eccentricity();
    /// <summary>
    /// Computes the focal distance. It is the distance between the
    /// two focus of the hyperbola.
    /// </summary>
    double Focal();
    /// <summary>
    /// Returns the first focus of the hyperbola. This focus is on the
    /// positive side of the XAxis of the hyperbola.
    /// </summary>
    Macad::Occt::Pnt Focus1();
    /// <summary>
    /// Returns the second focus of the hyperbola. This focus is on the
    /// negative side of the XAxis of the hyperbola.
    /// </summary>
    Macad::Occt::Pnt Focus2();
    /// <summary>
    /// Returns the major or minor radius of this hyperbola.
    /// The major radius is also the distance between the
    /// center of the hyperbola and the apex of the main
    /// branch (located on the "X Axis" of the hyperbola).
    /// </summary>
    double MajorRadius();
    /// <summary>
    /// Returns the major or minor radius of this hyperbola.
    /// The minor radius is also the distance between the
    /// center of the hyperbola and the apex of a conjugate
    /// branch (located on the "Y Axis" of the hyperbola).
    /// </summary>
    double MinorRadius();
    /// <summary>
    /// Computes the "other" branch of this hyperbola. This
    /// is the symmetrical branch with respect to the center of this hyperbola.
    /// Note: The diagram given under the class purpose
    /// indicates where the "other" branch is positioned in
    /// relation to this branch of the hyperbola.
    /// </summary>
    Macad::Occt::gp_Hypr^ OtherBranch();
    /// <summary>
    /// Returns p = (e * e - 1) * MajorRadius where e is the
    /// eccentricity of the hyperbola.
    /// raised if MajorRadius = 0.0
    /// </summary>
    double Parameter();
    /// <summary>
    /// Returns in P the point of parameter U.
    /// P = C + MajorRadius * Cosh (U) * XDir +
    /// MinorRadius * Sinh (U) * YDir
    /// where C is the center of the hyperbola , XDir the XDirection and
    /// YDir the YDirection of the hyperbola's local coordinate system.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    /// <summary>
    /// Returns the point P of parameter U and the first derivative V1.
    /// </summary>
    void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// </summary>
    void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    /// <summary>
    /// Returns the point P of parameter U, the first second and
    /// third derivatives V1 V2 and V3.
    /// </summary>
    void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// Raised if N < 1.
    /// </summary>
    Macad::Occt::Vec DN(double U, int N);
    /// <summary>
    /// Applies the transformation T to this hyperbola.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this hyperbola.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_Hyperbola^ CreateDowncasted(::Geom_Hyperbola* instance);
}; // class Geom_Hyperbola

//---------------------------------------------------------------------
//  Class  Geom_Line
//---------------------------------------------------------------------
/// <summary>
/// Describes an infinite line.
/// A line is defined and positioned in space with an axis
/// (gp_Ax1 object) which gives it an origin and a unit vector.
/// The Geom_Line line is parameterized:
/// P (U) = O + U*Dir, where:
/// - P is the point of parameter U,
/// - O is the origin and Dir the unit vector of its positioning axis.
/// The parameter range is ] -infinite, +infinite [.
/// The orientation of the line is given by the unit vector
/// of its positioning axis.
/// </summary>
public ref class Geom_Line sealed
    : public Macad::Occt::Geom_Curve
{

#ifdef Include_Geom_Line_h
public:
    Include_Geom_Line_h
#endif

public:
    Geom_Line(::Geom_Line* nativeInstance)
        : Macad::Occt::Geom_Curve( nativeInstance )
    {}

    Geom_Line(::Geom_Line& nativeInstance)
        : Macad::Occt::Geom_Curve( nativeInstance )
    {}

    property ::Geom_Line* NativeInstance
    {
        ::Geom_Line* get()
        {
            return static_cast<::Geom_Line*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a line located in 3D space with the axis placement A1.
    /// The Location of A1 is the origin of the line.
    /// </summary>
    Geom_Line(Macad::Occt::Ax1 A1);
    /// <summary>
    /// Creates a line from a non transient line from package gp.
    /// </summary>
    Geom_Line(Macad::Occt::gp_Lin^ L);
    /// <summary>
    /// Constructs a line passing through point P and parallel to vector V
    /// (P and V are, respectively, the origin and the unit
    /// vector of the positioning axis of the line).
    /// </summary>
    Geom_Line(Macad::Occt::Pnt P, Macad::Occt::Dir V);
    /// <summary>
    /// Set <me> so that <me> has the same geometric properties as L.
    /// </summary>
    void SetLin(Macad::Occt::gp_Lin^ L);
    /// <summary>
    /// changes the direction of the line.
    /// </summary>
    void SetDirection(Macad::Occt::Dir V);
    /// <summary>
    /// changes the "Location" point (origin) of the line.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt P);
    /// <summary>
    /// changes the "Location" and a the "Direction" of <me>.
    /// </summary>
    void SetPosition(Macad::Occt::Ax1 A1);
    /// <summary>
    /// Returns non transient line from gp with the same geometric
    /// properties as <me>
    /// </summary>
    Macad::Occt::gp_Lin^ Lin();
    /// <summary>
    /// Returns the positioning axis of this line; this is also its local coordinate system.
    /// </summary>
    Macad::Occt::Ax1 Position();
    /// <summary>
    /// Changes the orientation of this line. As a result, the
    /// unit vector of the positioning axis of this line is reversed.
    /// </summary>
    void Reverse();
    /// <summary>
    /// Computes the parameter on the reversed line for the
    /// point of parameter U on this line.
    /// For a line, the returned value is -U.
    /// </summary>
    double ReversedParameter(double U);
    /// <summary>
    /// Returns the value of the first parameter of this
    /// line. This is Standard_Real::RealFirst().
    /// </summary>
    double FirstParameter();
    /// <summary>
    /// Returns the value of the last parameter of this
    /// line. This is  Standard_Real::RealLast().
    /// </summary>
    double LastParameter();
    /// <summary>
    /// returns False
    /// </summary>
    bool IsClosed();
    /// <summary>
    /// returns False
    /// </summary>
    bool IsPeriodic();
    /// <summary>
    /// Returns GeomAbs_CN, which is the global continuity of any line.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// returns True.
    /// Raised if N < 0.
    /// </summary>
    bool IsCN(int N);
    /// <summary>
    /// Returns in P the point of parameter U.
    /// P (U) = O + U * Dir where O is the "Location" point of the
    /// line and Dir the direction of the line.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    /// <summary>
    /// Returns the point P of parameter u and the first derivative V1.
    /// </summary>
    void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2. V2 is a vector with null magnitude
    /// for a line.
    /// </summary>
    void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    /// <summary>
    /// V2 and V3 are vectors with null magnitude for a line.
    /// </summary>
    void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// Raised if N < 1.
    /// </summary>
    Macad::Occt::Vec DN(double U, int N);
    /// <summary>
    /// Applies the transformation T to this line.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Returns the  parameter on the  transformed  curve for
    /// the transform of the point of parameter U on <me>.
    /// 
    /// me->Transformed(T)->Value(me->TransformedParameter(U,T))
    /// 
    /// is the same point as
    /// 
    /// me->Value(U).Transformed(T)
    /// 
    /// This methods returns <U> * T.ScaleFactor()
    /// </summary>
    double TransformedParameter(double U, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a  coefficient to compute the parameter on
    /// the transformed  curve  for  the transform  of the
    /// point on <me>.
    /// 
    /// Transformed(T)->Value(U * ParametricTransformation(T))
    /// 
    /// is the same point as
    /// 
    /// Value(U).Transformed(T)
    /// 
    /// This methods returns T.ScaleFactor()
    /// </summary>
    double ParametricTransformation(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this line.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_Line^ CreateDowncasted(::Geom_Line* instance);
}; // class Geom_Line

//---------------------------------------------------------------------
//  Class  Geom_OffsetCurve
//---------------------------------------------------------------------
/// <summary>
/// This class implements the basis services for an offset curve
/// in 3D space. The Offset curve in this package can be a self
/// intersecting curve even if the basis curve does not
/// self-intersect. The self intersecting portions are not deleted
/// at the construction time.
/// An offset curve is a curve at constant distance (Offset) from
/// a basis curve in a reference direction V. The offset curve
/// takes its parametrization from the basis curve.
/// The Offset curve is in the direction of the normal N
/// defined with the cross product  T^V, where the vector T
/// is given by the first derivative on the basis curve with
/// non zero length.
/// The distance offset may be positive or negative to indicate the
/// preferred side of the curve :
/// . distance offset >0 => the curve is in the direction of N
/// . distance offset <0 => the curve is in the direction of - N
/// 
/// On the Offset curve :
/// Value (U) = BasisCurve.Value(U) + (Offset * (T ^ V)) / ||T ^ V||
/// 
/// At any point the Offset direction V must not be parallel to the
/// vector T and the vector T must not have null length else the
/// offset curve is not defined. So the offset curve has not the
/// same continuity as the basis curve.
/// 
/// Warnings :
/// 
/// In this package we suppose that the continuity of the offset
/// curve is one degree less than the continuity of the basis
/// curve and we don't check that at any point ||T^V|| != 0.0
/// 
/// So to evaluate the curve it is better to check that the offset
/// curve is well defined at any point because an exception could
/// be raised. The check is not done in this package at the creation
/// of the offset curve because the control needs the use of an
/// algorithm which cannot be implemented in this package.
/// 
/// The OffsetCurve is closed if the first point and the last point
/// are the same (The distance between these two points is lower or
/// equal to the Resolution sea package gp) . The OffsetCurve can be
/// closed even if the basis curve is not closed.
/// </summary>
public ref class Geom_OffsetCurve sealed
    : public Macad::Occt::Geom_Curve
{

#ifdef Include_Geom_OffsetCurve_h
public:
    Include_Geom_OffsetCurve_h
#endif

public:
    Geom_OffsetCurve(::Geom_OffsetCurve* nativeInstance)
        : Macad::Occt::Geom_Curve( nativeInstance )
    {}

    Geom_OffsetCurve(::Geom_OffsetCurve& nativeInstance)
        : Macad::Occt::Geom_Curve( nativeInstance )
    {}

    property ::Geom_OffsetCurve* NativeInstance
    {
        ::Geom_OffsetCurve* get()
        {
            return static_cast<::Geom_OffsetCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// C is the basis curve, Offset is the distance between <me> and
    /// the basis curve at any point. V defines the fixed reference
    /// direction (offset direction). If P is a point on the basis
    /// curve and T the first derivative with non zero length
    /// at this point, the corresponding point on the offset curve is
    /// in the direction of the vector-product N = V ^ T   where
    /// N is a unitary vector.
    /// If isNotCheckC0 = TRUE checking if basis curve has C0-continuity
    /// is not made.
    /// Warnings :
    /// In this package the entities are not shared. The OffsetCurve is
    /// built with a copy of the curve C. So when C is modified the
    /// OffsetCurve is not modified
    /// 
    /// Raised if the basis curve C is not at least C1.
    /// Warnings :
    /// No check is done to know if ||V^T|| != 0.0 at any point.
    /// </summary>
    Geom_OffsetCurve(Macad::Occt::Geom_Curve^ C, double Offset, Macad::Occt::Dir V, bool isNotCheckC0);
    /// <summary>
    /// C is the basis curve, Offset is the distance between <me> and
    /// the basis curve at any point. V defines the fixed reference
    /// direction (offset direction). If P is a point on the basis
    /// curve and T the first derivative with non zero length
    /// at this point, the corresponding point on the offset curve is
    /// in the direction of the vector-product N = V ^ T   where
    /// N is a unitary vector.
    /// If isNotCheckC0 = TRUE checking if basis curve has C0-continuity
    /// is not made.
    /// Warnings :
    /// In this package the entities are not shared. The OffsetCurve is
    /// built with a copy of the curve C. So when C is modified the
    /// OffsetCurve is not modified
    /// 
    /// Raised if the basis curve C is not at least C1.
    /// Warnings :
    /// No check is done to know if ||V^T|| != 0.0 at any point.
    /// </summary>
    Geom_OffsetCurve(Macad::Occt::Geom_Curve^ C, double Offset, Macad::Occt::Dir V);
    /// <summary>
    /// Changes the orientation of this offset curve.
    /// As a result:
    /// - the basis curve is reversed,
    /// - the start point of the initial curve becomes the
    /// end point of the reversed curve,
    /// - the end point of the initial curve becomes the
    /// start point of the reversed curve, and
    /// - the first and last parameters are recomputed.
    /// </summary>
    void Reverse();
    /// <summary>
    /// Computes the parameter on the reversed curve for
    /// the point of parameter U on this offset curve.
    /// </summary>
    double ReversedParameter(double U);
    /// <summary>
    /// Changes this offset curve by assigning C
    /// as the basis curve from which it is built.
    /// If isNotCheckC0 = TRUE checking if basis curve
    /// has C0-continuity is not made.
    /// Exceptions
    /// Standard_ConstructionError if the curve C is not at least "C1" continuous.
    /// </summary>
    void SetBasisCurve(Macad::Occt::Geom_Curve^ C, bool isNotCheckC0);
    /// <summary>
    /// Changes this offset curve by assigning C
    /// as the basis curve from which it is built.
    /// If isNotCheckC0 = TRUE checking if basis curve
    /// has C0-continuity is not made.
    /// Exceptions
    /// Standard_ConstructionError if the curve C is not at least "C1" continuous.
    /// </summary>
    void SetBasisCurve(Macad::Occt::Geom_Curve^ C);
    /// <summary>
    /// Changes this offset curve by assigning V as the
    /// reference vector used to compute the offset direction.
    /// </summary>
    void SetDirection(Macad::Occt::Dir V);
    /// <summary>
    /// Changes this offset curve by assigning D as the offset value.
    /// </summary>
    void SetOffsetValue(double D);
    /// <summary>
    /// Returns the basis curve of this offset curve.
    /// Note: The basis curve can be an offset curve.
    /// </summary>
    Macad::Occt::Geom_Curve^ BasisCurve();
    /// <summary>
    /// Returns the global continuity of this offset curve as a
    /// value of the GeomAbs_Shape enumeration.
    /// The degree of continuity of this offset curve is equal
    /// to the degree of continuity of the basis curve minus 1.
    /// Continuity of the Offset curve :
    /// C0 : only geometric continuity,
    /// C1 : continuity of the first derivative all along the Curve,
    /// C2 : continuity of the second derivative all along the Curve,
    /// C3 : continuity of the third derivative all along the Curve,
    /// G1 : tangency continuity all along the Curve,
    /// G2 : curvature continuity all along the Curve,
    /// CN : the order of continuity is infinite.
    /// Warnings :
    /// Returns the continuity of the basis curve - 1.
    /// The offset curve must have a unique offset direction defined
    /// at any point.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns the reference vector of this offset curve.
    /// Value and derivatives
    /// Warnings :
    /// The exception UndefinedValue or UndefinedDerivative is
    /// raised if it is not possible to compute a unique offset
    /// direction.
    /// If T is the first derivative with not null length and
    /// V the offset direction the relation ||T(U) ^ V|| != 0
    /// must be satisfied to evaluate the offset curve.
    /// No check is done at the creation time and we suppose
    /// in this package that the offset curve is well defined.
    /// </summary>
    Macad::Occt::Dir Direction();
    /// <summary>
    /// Warning! this should not be called
    /// if the basis curve is not at least C1. Nevertheless
    /// if used on portion where the curve is C1, it is OK
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    /// <summary>
    /// Warning! this should not be called
    /// if the continuity of the basis curve is not C2.
    /// Nevertheless, it's OK to use it  on portion
    /// where the curve is C2
    /// </summary>
    void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    /// <summary>
    /// Warning! this should not be called
    /// if the continuity of the basis curve is not C3.
    /// Nevertheless, it's OK to use it  on portion
    /// where the curve is C3
    /// </summary>
    void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative
    /// for the order of derivation N.
    /// 
    /// The following functions compute the value and derivatives
    /// on the offset curve and returns the derivatives on the
    /// basis curve too.
    /// The computation of the value and derivatives on the basis
    /// curve are used to evaluate the offset curve
    /// 
    /// Warning:
    /// The exception UndefinedValue or UndefinedDerivative is
    /// raised if it is not possible to compute a unique offset
    /// direction.
    /// Raised if N < 1.
    /// </summary>
    Macad::Occt::Vec DN(double U, int N);
    /// <summary>
    /// Returns the value of the first parameter of this
    /// offset curve. The first parameter corresponds to the
    /// start point of the curve.
    /// Note: the first and last parameters of this offset curve
    /// are also the ones of its basis curve.
    /// </summary>
    double FirstParameter();
    /// <summary>
    /// Returns the value of the last parameter of this
    /// offset curve. The last parameter
    /// corresponds to the end point.
    /// Note: the first and last parameters of this offset curve
    /// are also the ones of its basis curve.
    /// </summary>
    double LastParameter();
    /// <summary>
    /// Returns the offset value of this offset curve.
    /// </summary>
    double Offset();
    /// <summary>
    /// Returns True if the distance between the start point
    /// and the end point of the curve is lower or equal to
    /// Resolution from package gp.
    /// </summary>
    bool IsClosed();
    /// <summary>
    /// Returns true if the degree of continuity of the basis
    /// curve of this offset curve is at least N + 1.
    /// This method answer True if the continuity of the basis curve
    /// is N + 1.  We suppose in this class that a normal direction
    /// to the basis curve (used to compute the offset curve) is
    /// defined at any point on the basis curve.
    /// Raised if N < 0.
    /// </summary>
    bool IsCN(int N);
    /// <summary>
    /// Returns true if this offset curve is periodic, i.e. if the
    /// basis curve of this offset curve is periodic.
    /// </summary>
    bool IsPeriodic();
    /// <summary>
    /// Returns the period of this offset curve, i.e. the period
    /// of the basis curve of this offset curve.
    /// Exceptions
    /// Standard_NoSuchObject if the basis curve is not periodic.
    /// </summary>
    double Period();
    /// <summary>
    /// Applies the transformation T to this offset curve.
    /// Note: the basis curve is also modified.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Returns the  parameter on the  transformed  curve for
    /// the transform of the point of parameter U on <me>.
    /// me->Transformed(T)->Value(me->TransformedParameter(U,T))
    /// is the same point as
    /// me->Value(U).Transformed(T)
    /// This methods calls the basis curve method.
    /// </summary>
    double TransformedParameter(double U, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a  coefficient to compute the parameter on
    /// the transformed  curve  for  the transform  of the
    /// point on <me>.
    /// 
    /// Transformed(T)->Value(U * ParametricTransformation(T))
    /// is the same point as
    /// Value(U).Transformed(T)
    /// This methods calls the basis curve method.
    /// </summary>
    double ParametricTransformation(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this offset curve.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Returns continuity of the basis curve.
    /// </summary>
    Macad::Occt::GeomAbs_Shape GetBasisCurveContinuity();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_OffsetCurve^ CreateDowncasted(::Geom_OffsetCurve* instance);
}; // class Geom_OffsetCurve

//---------------------------------------------------------------------
//  Class  Geom_OsculatingSurface
//---------------------------------------------------------------------
public ref class Geom_OsculatingSurface sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Geom_OsculatingSurface_h
public:
    Include_Geom_OsculatingSurface_h
#endif

public:
    Geom_OsculatingSurface(::Geom_OsculatingSurface* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Geom_OsculatingSurface(::Geom_OsculatingSurface& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Geom_OsculatingSurface* NativeInstance
    {
        ::Geom_OsculatingSurface* get()
        {
            return static_cast<::Geom_OsculatingSurface*>(_NativeInstance);
        }
    }

public:
    Geom_OsculatingSurface();
    /// <summary>
    /// detects if the  surface has punctual U  or  V
    /// isoparametric  curve along on  the bounds of the surface
    /// relatively to the tolerance Tol and Builds the corresponding
    /// osculating surfaces.
    /// </summary>
    Geom_OsculatingSurface(Macad::Occt::Geom_Surface^ BS, double Tol);
    void Init(Macad::Occt::Geom_Surface^ BS, double Tol);
    Macad::Occt::Geom_Surface^ BasisSurface();
    double Tolerance();
    /// <summary>
    /// if Standard_True, L is the local osculating surface
    /// along U at the point U,V.
    /// </summary>
    bool UOscSurf(double U, double V, bool% t, Macad::Occt::Geom_BSplineSurface^ L);
    /// <summary>
    /// if Standard_True, L is the local osculating surface
    /// along V at the point U,V.
    /// </summary>
    bool VOscSurf(double U, double V, bool% t, Macad::Occt::Geom_BSplineSurface^ L);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_OsculatingSurface^ CreateDowncasted(::Geom_OsculatingSurface* instance);
}; // class Geom_OsculatingSurface

//---------------------------------------------------------------------
//  Class  Geom_OffsetSurface
//---------------------------------------------------------------------
/// <summary>
/// Describes an offset surface in 3D space.
/// An offset surface is defined by:
/// - the basis surface to which it is parallel, and
/// - the distance between the offset surface and its basis surface.
/// A point on the offset surface is built by measuring the
/// offset value along the normal vector at a point on the
/// basis surface. This normal vector is given by the cross
/// product D1u^D1v, where D1u and D1v are the
/// vectors tangential to the basis surface in the u and v
/// parametric directions at this point. The side of the
/// basis surface on which the offset is measured
/// depends on the sign of the offset value.
/// A Geom_OffsetSurface surface can be
/// self-intersecting, even if the basis surface does not
/// self-intersect. The self-intersecting portions are not
/// deleted at the time of construction.
/// Warning
/// There must be only one normal vector defined at any
/// point on the basis surface. This must be verified by the
/// user as no check is made at the time of construction
/// to detect points with multiple possible normal
/// directions (for example, the top of a conical surface).
/// </summary>
public ref class Geom_OffsetSurface sealed
    : public Macad::Occt::Geom_Surface
{

#ifdef Include_Geom_OffsetSurface_h
public:
    Include_Geom_OffsetSurface_h
#endif

public:
    Geom_OffsetSurface(::Geom_OffsetSurface* nativeInstance)
        : Macad::Occt::Geom_Surface( nativeInstance )
    {}

    Geom_OffsetSurface(::Geom_OffsetSurface& nativeInstance)
        : Macad::Occt::Geom_Surface( nativeInstance )
    {}

    property ::Geom_OffsetSurface* NativeInstance
    {
        ::Geom_OffsetSurface* get()
        {
            return static_cast<::Geom_OffsetSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a surface offset from the basis surface
    /// S, where Offset is the distance between the offset
    /// surface and the basis surface at any point.
    /// A point on the offset surface is built by measuring
    /// the offset value along a normal vector at a point on
    /// S. This normal vector is given by the cross product
    /// D1u^D1v, where D1u and D1v are the vectors
    /// tangential to the basis surface in the u and v
    /// parametric directions at this point. The side of S on
    /// which the offset value is measured is indicated by
    /// this normal vector if Offset is positive, or is the
    /// inverse sense if Offset is negative.
    /// If isNotCheckC0 = TRUE checking if basis surface has C0-continuity
    /// is not made.
    /// Warnings :
    /// - The offset surface is built with a copy of the
    /// surface S. Therefore, when S is modified the
    /// offset surface is not modified.
    /// - No check is made at the time of construction to
    /// detect points on S with multiple possible normal directions.
    /// Raised if S is not at least C1.
    /// Warnings :
    /// No check is done to verify that a unique normal direction is
    /// defined at any point of the basis surface S.
    /// </summary>
    Geom_OffsetSurface(Macad::Occt::Geom_Surface^ S, double Offset, bool isNotCheckC0);
    /// <summary>
    /// Constructs a surface offset from the basis surface
    /// S, where Offset is the distance between the offset
    /// surface and the basis surface at any point.
    /// A point on the offset surface is built by measuring
    /// the offset value along a normal vector at a point on
    /// S. This normal vector is given by the cross product
    /// D1u^D1v, where D1u and D1v are the vectors
    /// tangential to the basis surface in the u and v
    /// parametric directions at this point. The side of S on
    /// which the offset value is measured is indicated by
    /// this normal vector if Offset is positive, or is the
    /// inverse sense if Offset is negative.
    /// If isNotCheckC0 = TRUE checking if basis surface has C0-continuity
    /// is not made.
    /// Warnings :
    /// - The offset surface is built with a copy of the
    /// surface S. Therefore, when S is modified the
    /// offset surface is not modified.
    /// - No check is made at the time of construction to
    /// detect points on S with multiple possible normal directions.
    /// Raised if S is not at least C1.
    /// Warnings :
    /// No check is done to verify that a unique normal direction is
    /// defined at any point of the basis surface S.
    /// </summary>
    Geom_OffsetSurface(Macad::Occt::Geom_Surface^ S, double Offset);
    /// <summary>
    /// Raised if S is not at least C1.
    /// Warnings :
    /// No check is done to verify that a unique normal direction is
    /// defined at any point of the basis surface S.
    /// If isNotCheckC0 = TRUE checking if basis surface has C0-continuity
    /// is not made.
    /// Exceptions
    /// Standard_ConstructionError if the surface S is not
    /// at least "C1" continuous.
    /// </summary>
    void SetBasisSurface(Macad::Occt::Geom_Surface^ S, bool isNotCheckC0);
    /// <summary>
    /// Raised if S is not at least C1.
    /// Warnings :
    /// No check is done to verify that a unique normal direction is
    /// defined at any point of the basis surface S.
    /// If isNotCheckC0 = TRUE checking if basis surface has C0-continuity
    /// is not made.
    /// Exceptions
    /// Standard_ConstructionError if the surface S is not
    /// at least "C1" continuous.
    /// </summary>
    void SetBasisSurface(Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// Changes this offset surface by assigning D as the offset value.
    /// </summary>
    void SetOffsetValue(double D);
    /// <summary>
    /// Returns the offset value of this offset surface.
    /// </summary>
    double Offset();
    /// <summary>
    /// Returns the basis surface of this offset surface.
    /// Note: The basis surface can be an offset surface.
    /// </summary>
    Macad::Occt::Geom_Surface^ BasisSurface();
    /// <summary>
    /// Returns osculating surface if base surface is B-spline or Bezier
    /// </summary>
    Macad::Occt::Geom_OsculatingSurface^ OsculatingSurface();
    /// <summary>
    /// Changes the orientation of this offset surface in the u
    /// parametric direction. The bounds of the surface
    /// are not changed but the given parametric direction is reversed.
    /// </summary>
    void UReverse();
    /// <summary>
    /// Computes the u  parameter on the modified
    /// surface, produced by reversing the u
    /// parametric direction of this offset surface, for any
    /// point of u parameter U  on this offset surface.
    /// </summary>
    double UReversedParameter(double U);
    /// <summary>
    /// Changes the orientation of this offset surface in the v parametric direction. The bounds of
    /// the surface are not changed but the given parametric direction is reversed.
    /// </summary>
    void VReverse();
    /// <summary>
    /// Computes the  v parameter on the modified
    /// surface, produced by reversing the or v
    /// parametric direction of this offset surface, for any
    /// point of  v parameter V on this offset surface.
    /// </summary>
    double VReversedParameter(double V);
    /// <summary>
    /// Returns the parametric bounds U1, U2, V1 and V2 of
    /// this offset surface.
    /// If the surface is infinite, this function can return:
    /// - Standard_Real::RealFirst(), or
    /// - Standard_Real::RealLast().
    /// </summary>
    void Bounds(double% U1, double% U2, double% V1, double% V2);
    /// <summary>
    /// This method returns the continuity of the basis surface - 1.
    /// Continuity of the Offset surface :
    /// C0 : only geometric continuity,
    /// C1 : continuity of the first derivative all along the Surface,
    /// C2 : continuity of the second derivative all along the Surface,
    /// C3 : continuity of the third derivative all along the Surface,
    /// CN : the order of continuity is infinite.
    /// Example :
    /// If the basis surface is C2 in the V direction and C3 in the U
    /// direction Shape = C1.
    /// Warnings :
    /// If the basis surface has a unique normal direction defined at
    /// any point this method gives the continuity of the offset
    /// surface otherwise the effective continuity can be lower than
    /// the continuity of the basis surface - 1.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// This method answer True if the continuity of the basis surface
    /// is N + 1 in the U parametric direction. We suppose in this
    /// class that a unique normal is defined at any point on the basis
    /// surface.
    /// Raised if N <0.
    /// </summary>
    bool IsCNu(int N);
    /// <summary>
    /// This method answer True if the continuity of the basis surface
    /// is N + 1 in the V parametric direction. We suppose in this
    /// class that a unique normal is defined at any point on the basis
    /// surface.
    /// Raised if N <0.
    /// </summary>
    bool IsCNv(int N);
    /// <summary>
    /// Checks whether this offset surface is closed in the u
    /// parametric direction.
    /// Returns true if, taking uFirst and uLast as
    /// the parametric bounds in the u parametric direction,
    /// the distance between the points P(uFirst,v)
    /// and P(uLast,v) is less than or equal to
    /// gp::Resolution() for each value of the   parameter v.
    /// </summary>
    bool IsUClosed();
    /// <summary>
    /// Checks whether this offset surface is closed in the u
    /// or v parametric direction. Returns true if taking vFirst and vLast as the
    /// parametric bounds in the v parametric direction, the
    /// distance between the points P(u,vFirst) and
    /// P(u,vLast) is less than or equal to
    /// gp::Resolution() for each value of the parameter u.
    /// </summary>
    bool IsVClosed();
    /// <summary>
    /// Returns true if this offset surface is periodic in the u
    /// parametric direction, i.e. if the basis
    /// surface of this offset surface is periodic in this direction.
    /// </summary>
    bool IsUPeriodic();
    /// <summary>
    /// Returns the period of this offset surface in the u
    /// parametric direction respectively, i.e. the period of the
    /// basis surface of this offset surface in this parametric direction.
    /// raises if the surface is not uperiodic.
    /// </summary>
    double UPeriod();
    /// <summary>
    /// Returns true if this offset surface is periodic in the v
    /// parametric direction, i.e. if the basis
    /// surface of this offset surface is periodic in this direction.
    /// </summary>
    bool IsVPeriodic();
    /// <summary>
    /// Returns the period of this offset surface in the v
    /// parametric direction respectively, i.e. the period of the
    /// basis surface of this offset surface in this parametric direction.
    /// raises if the surface is not vperiodic.
    /// </summary>
    double VPeriod();
    /// <summary>
    /// Computes the U isoparametric curve.
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U);
    /// <summary>
    /// Computes the V isoparametric curve.
    /// 
    /// The following methods compute value and derivatives.
    /// 
    /// Warnings
    /// An exception is raised if a unique normal vector is
    /// not defined on the basis surface for the parametric value (U,V).
    /// No check is done at the creation time and we suppose
    /// in this package that the offset surface can be defined at any point.
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V);
    /// <summary>
    /// </summary>
    /// @code
    /// P (U, V) = Pbasis + Offset * Ndir
    /// @endcode
    /// where
    /// @code
    /// Ndir = D1Ubasis ^ D1Vbasis / ||D1Ubasis ^ D1Vbasis||
    /// @endcode
    /// is the normal direction of the basis surface.
    /// Pbasis, D1Ubasis, D1Vbasis are the point and the first derivatives on the basis surface.
    /// If Ndir is undefined this method computes an approached normal
    /// direction using the following limited development:
    /// @code
    /// Ndir = N0 + DNdir/DU + DNdir/DV + Eps
    /// @endcode
    /// with Eps->0 which requires to compute the second derivatives on the basis surface.
    /// If the normal direction cannot be approximate for this order
    /// of derivation the exception UndefinedValue is raised.
    /// 
    /// Raised if the continuity of the basis surface is not C1.
    /// Raised if the order of derivation required to compute the
    /// normal direction is greater than the second order.
    void D0(double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// Raised if the continuity of the basis surface is not C2.
    /// </summary>
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// Raised if the continuity of the basis surface is not C3.
    /// </summary>
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Raised if the continuity of the basis surface is not C4.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the direction u and Nv in the direction v.
    /// 
    /// Raised if the continuity of the basis surface is not CNu + 1
    /// in the U direction and CNv + 1 in the V direction.
    /// Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
    /// 
    /// The following methods compute the value and derivatives
    /// on the offset surface and returns the derivatives on the
    /// basis surface too.
    /// The computation of the value and derivatives on the basis
    /// surface are used to evaluate the offset surface.
    /// 
    /// Warnings:
    /// The exception UndefinedValue or UndefinedDerivative is
    /// raised if it is not possible to compute a unique offset direction.
    /// </summary>
    Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Applies the transformation T to this offset surface.
    /// Note: the basis surface is also modified.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Computes the parameters on the transformed surface for
    /// the transform of the point of parameters U,V on <me>.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are the new values of U,V after calling
    /// @code
    /// me->TransformParameters(U,V,T)
    /// @endcode
    /// This method calls the basis surface method.
    void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a 2d transformation used to find the new
    /// parameters of a point on the transformed surface.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are obtained by transforming U,V with the 2d transformation returned by
    /// @code
    /// me->ParametricTransformation(T)
    /// @endcode
    /// This method calls the basis surface method.
    Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this offset surface.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// returns an  equivalent surface of the offset surface
    /// when  the basis surface   is a canonic  surface or a
    /// rectangular  limited surface on canonic surface or if
    /// the offset is null.
    /// </summary>
    Macad::Occt::Geom_Surface^ Surface();
    /// <summary>
    /// if Standard_True, L is  the local osculating surface
    /// along U at  the point U,V.   It means that  DL/DU is
    /// collinear to DS/DU .  If IsOpposite == Standard_True
    /// these vectors have opposite direction.
    /// </summary>
    bool UOsculatingSurface(double U, double V, bool% IsOpposite, Macad::Occt::Geom_BSplineSurface^ UOsculSurf);
    /// <summary>
    /// if Standard_True, L is the local osculating surface
    /// along V at the point U,V.
    /// It means that  DL/DV is
    /// collinear to DS/DV .  If IsOpposite == Standard_True
    /// these vectors have opposite direction.
    /// </summary>
    bool VOsculatingSurface(double U, double V, bool% IsOpposite, Macad::Occt::Geom_BSplineSurface^ VOsculSurf);
    /// <summary>
    /// Returns continuity of the basis surface.
    /// </summary>
    Macad::Occt::GeomAbs_Shape GetBasisSurfContinuity();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_OffsetSurface^ CreateDowncasted(::Geom_OffsetSurface* instance);
}; // class Geom_OffsetSurface

//---------------------------------------------------------------------
//  Class  Geom_Parabola
//---------------------------------------------------------------------
/// <summary>
/// Describes a parabola in 3D space.
/// A parabola is defined by its focal length (i.e. the
/// distance between its focus and its apex) and is
/// positioned in space with a coordinate system
/// (gp_Ax2 object) where:
/// - the origin is the apex of the parabola,
/// - the "X Axis" defines the axis of symmetry; the
/// parabola is on the positive side of this axis,
/// - the origin, "X Direction" and "Y Direction" define the
/// plane of the parabola.
/// This coordinate system is the local coordinate
/// system of the parabola.
/// The "main Direction" of this coordinate system is a
/// vector normal to the plane of the parabola. The axis,
/// of which the origin and unit vector are respectively the
/// origin and "main Direction" of the local coordinate
/// system, is termed the "Axis" or "main Axis" of the parabola.
/// The "main Direction" of the local coordinate system
/// gives an explicit orientation to the parabola,
/// determining the direction in which the parameter
/// increases along the parabola.
/// The Geom_Parabola parabola is parameterized as follows:
/// P(U) = O + U*U/(4.*F)*XDir + U*YDir
/// where:
/// - P is the point of parameter U,
/// - O, XDir and YDir are respectively the origin, "X
/// Direction" and "Y Direction" of its local coordinate system,
/// - F is the focal length of the parabola.
/// The parameter of the parabola is therefore its Y
/// coordinate in the local coordinate system, with the "X
/// Axis" of the local coordinate system defining the origin
/// of the parameter.
/// The parameter range is ] -infinite, +infinite [.
/// </summary>
public ref class Geom_Parabola sealed
    : public Macad::Occt::Geom_Conic
{

#ifdef Include_Geom_Parabola_h
public:
    Include_Geom_Parabola_h
#endif

public:
    Geom_Parabola(::Geom_Parabola* nativeInstance)
        : Macad::Occt::Geom_Conic( nativeInstance )
    {}

    Geom_Parabola(::Geom_Parabola& nativeInstance)
        : Macad::Occt::Geom_Conic( nativeInstance )
    {}

    property ::Geom_Parabola* NativeInstance
    {
        ::Geom_Parabola* get()
        {
            return static_cast<::Geom_Parabola*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a parabola from a non transient one.
    /// </summary>
    Geom_Parabola(Macad::Occt::gp_Parab^ Prb);
    /// <summary>
    /// Creates a parabola with its local coordinate system "A2"
    /// and it's focal length "Focal".
    /// The XDirection of A2 defines the axis of symmetry of the
    /// parabola. The YDirection of A2 is parallel to the directrix
    /// of the parabola. The Location point of A2 is the vertex of
    /// the parabola
    /// Raised if Focal < 0.0
    /// </summary>
    Geom_Parabola(Macad::Occt::Ax2 A2, double Focal);
    /// <summary>
    /// D is the directrix of the parabola and F the focus point.
    /// The symmetry axis (XAxis) of the parabola is normal to the
    /// directrix and pass through the focus point F, but its
    /// location point is the vertex of the parabola.
    /// The YAxis of the parabola is parallel to D and its location
    /// point is the vertex of the parabola. The normal to the plane
    /// of the parabola is the cross product between the XAxis and the
    /// YAxis.
    /// </summary>
    Geom_Parabola(Macad::Occt::Ax1 D, Macad::Occt::Pnt F);
    /// <summary>
    /// Assigns the value Focal to the focal distance of this parabola.
    /// Exceptions Standard_ConstructionError if Focal is negative.
    /// </summary>
    void SetFocal(double Focal);
    /// <summary>
    /// Converts the gp_Parab parabola Prb into this parabola.
    /// </summary>
    void SetParab(Macad::Occt::gp_Parab^ Prb);
    /// <summary>
    /// Returns the non transient parabola from gp with the same
    /// geometric properties as <me>.
    /// </summary>
    Macad::Occt::gp_Parab^ Parab();
    /// <summary>
    /// Computes the parameter on the reversed parabola,
    /// for the point of parameter U on this parabola.
    /// For a parabola, the returned value is: -U.
    /// </summary>
    double ReversedParameter(double U);
    /// <summary>
    /// Returns the value of the first or last parameter of this
    /// parabola. This is, respectively:
    /// - Standard_Real::RealFirst(), or
    /// - Standard_Real::RealLast().
    /// </summary>
    double FirstParameter();
    /// <summary>
    /// Returns the value of the first or last parameter of this
    /// parabola. This is, respectively:
    /// - Standard_Real::RealFirst(), or
    /// - Standard_Real::RealLast().
    /// </summary>
    double LastParameter();
    /// <summary>
    /// Returns False
    /// </summary>
    bool IsClosed();
    /// <summary>
    /// Returns False
    /// </summary>
    bool IsPeriodic();
    /// <summary>
    /// Computes the directrix of this parabola.
    /// This is a line normal to the axis of symmetry, in the
    /// plane of this parabola, located on the negative side
    /// of its axis of symmetry, at a distance from the apex
    /// equal to the focal length.
    /// The directrix is returned as an axis (gp_Ax1 object),
    /// where the origin is located on the "X Axis" of this parabola.
    /// </summary>
    Macad::Occt::Ax1 Directrix();
    /// <summary>
    /// Returns 1. (which is the eccentricity of any parabola).
    /// </summary>
    double Eccentricity();
    /// <summary>
    /// Computes the focus of this parabola. The focus is on the
    /// positive side of the "X Axis" of the local coordinate
    /// system of the parabola.
    /// </summary>
    Macad::Occt::Pnt Focus();
    /// <summary>
    /// Computes the focal distance of this parabola
    /// The focal distance is the distance between the apex
    /// and the focus of the parabola.
    /// </summary>
    double Focal();
    /// <summary>
    /// Computes the parameter of this parabola which is the
    /// distance between its focus and its directrix. This
    /// distance is twice the focal length.
    /// If P is the parameter of the parabola, the equation of
    /// the parabola in its local coordinate system is: Y**2 = 2.*P*X.
    /// </summary>
    double Parameter();
    /// <summary>
    /// Returns in P the point of parameter U.
    /// If U = 0 the returned point is the origin of the XAxis and
    /// the YAxis of the parabola and it is the vertex of the parabola.
    /// P = S + F * (U * U * XDir +  * U * YDir)
    /// where S is the vertex of the parabola, XDir the XDirection and
    /// YDir the YDirection of the parabola's local coordinate system.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    /// <summary>
    /// Returns the point P of parameter U and the first derivative V1.
    /// </summary>
    void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// </summary>
    void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    /// <summary>
    /// Returns the point P of parameter U, the first second and third
    /// derivatives V1 V2 and V3.
    /// </summary>
    void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// For the point of parameter U of this parabola,
    /// computes the vector corresponding to the Nth derivative.
    /// Exceptions Standard_RangeError if N is less than 1.
    /// </summary>
    Macad::Occt::Vec DN(double U, int N);
    /// <summary>
    /// Applies the transformation T to this parabola.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Returns the  parameter on the  transformed  curve for
    /// the transform of the point of parameter U on <me>.
    /// 
    /// me->Transformed(T)->Value(me->TransformedParameter(U,T))
    /// 
    /// is the same point as
    /// 
    /// me->Value(U).Transformed(T)
    /// 
    /// This methods returns <U> * T.ScaleFactor()
    /// </summary>
    double TransformedParameter(double U, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a  coefficient to compute the parameter on
    /// the transformed  curve  for  the transform  of the
    /// point on <me>.
    /// 
    /// Transformed(T)->Value(U * ParametricTransformation(T))
    /// 
    /// is the same point as
    /// 
    /// Value(U).Transformed(T)
    /// 
    /// This methods returns T.ScaleFactor()
    /// </summary>
    double ParametricTransformation(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this parabola.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_Parabola^ CreateDowncasted(::Geom_Parabola* instance);
}; // class Geom_Parabola

//---------------------------------------------------------------------
//  Class  Geom_Plane
//---------------------------------------------------------------------
/// <summary>
/// Describes a plane in 3D space.
/// A plane is positioned in space by a coordinate system
/// (a gp_Ax3 object) such that the plane is defined by
/// the origin, "X Direction" and "Y Direction" of this
/// coordinate system.
/// This coordinate system is the "local coordinate
/// system" of the plane. The following apply:
/// - Its "X Direction" and "Y Direction" are respectively
/// the u and v parametric directions of the plane.
/// - Its origin is the origin of the u and v parameters
/// (also called the "origin" of the plane).
/// - Its "main Direction" is a vector normal to the plane.
/// This normal vector gives the orientation of the
/// plane only if the local coordinate system is "direct".
/// (The orientation of the plane is always defined by
/// the "X Direction" and the "Y Direction" of its local
/// coordinate system.)
/// The parametric equation of the plane is:
/// </summary>
/// @code
/// P(u, v) = O + u*XDir + v*YDir
/// @endcode
/// where O, XDir and YDir are respectively the
/// origin, the "X Direction" and the "Y Direction" of the
/// local coordinate system of the plane.
/// The parametric range of the two parameters u and v
/// is ] -infinity, +infinity [.
public ref class Geom_Plane sealed
    : public Macad::Occt::Geom_ElementarySurface
{

#ifdef Include_Geom_Plane_h
public:
    Include_Geom_Plane_h
#endif

public:
    Geom_Plane(::Geom_Plane* nativeInstance)
        : Macad::Occt::Geom_ElementarySurface( nativeInstance )
    {}

    Geom_Plane(::Geom_Plane& nativeInstance)
        : Macad::Occt::Geom_ElementarySurface( nativeInstance )
    {}

    property ::Geom_Plane* NativeInstance
    {
        ::Geom_Plane* get()
        {
            return static_cast<::Geom_Plane*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a plane located in 3D space with an axis placement three axis.
    /// The "ZDirection" of "A3" is the direction normal
    /// to the plane.  The "Location" point of "A3" is the origin of the plane.
    /// The "XDirection" and "YDirection" of "A3" define
    /// the directions of the U isoparametric and V isoparametric curves.
    /// </summary>
    Geom_Plane(Macad::Occt::Ax3 A3);
    /// <summary>
    /// Creates a plane from a non transient plane from package gp.
    /// </summary>
    Geom_Plane(Macad::Occt::Pln Pl);
    /// <summary>
    /// P is the "Location" point or origin of the plane.
    /// V is the direction normal to the plane.
    /// </summary>
    Geom_Plane(Macad::Occt::Pnt P, Macad::Occt::Dir V);
    /// <summary>
    /// Creates a plane from its cartesian equation:
    /// </summary>
    /// @code
    /// Ax + By + Cz + D = 0.0
    /// @endcode
    /// Raised if Sqrt (A*A + B*B + C*C) <= Resolution from gp
    Geom_Plane(double A, double B, double C, double D);
    /// <summary>
    /// Set <me> so that <me> has the same geometric properties as Pl.
    /// </summary>
    void SetPln(Macad::Occt::Pln Pl);
    /// <summary>
    /// Converts this plane into a gp_Pln plane.
    /// </summary>
    Macad::Occt::Pln Pln();
    /// <summary>
    /// Changes the orientation of this plane in the u (or v) parametric direction.
    /// The bounds of the plane are not changed but the given parametric direction is reversed.
    /// Hence the orientation of the surface is reversed.
    /// </summary>
    void UReverse();
    /// <summary>
    /// Computes the u  parameter on the modified plane,
    /// produced when reversing the u parametric of this plane,
    /// for any point of u parameter U on this plane.
    /// In the case of a plane, these methods return - -U.
    /// </summary>
    double UReversedParameter(double U);
    /// <summary>
    /// Changes the orientation of this plane in the u (or v) parametric direction.
    /// The bounds of the plane are not changed but the given parametric direction is reversed.
    /// Hence the orientation of the surface is reversed.
    /// </summary>
    void VReverse();
    /// <summary>
    /// Computes the v parameter on the modified plane,
    /// produced when reversing the v parametric of this plane,
    /// for any point of v parameter V on this plane.
    /// In the case of a plane, these methods return -V.
    /// </summary>
    double VReversedParameter(double V);
    /// <summary>
    /// Computes the parameters on the transformed surface for
    /// the transform of the point of parameters U,V on <me>.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are the new values of U,V after calling
    /// @code
    /// me->TransformParameters(U,V,T)
    /// @endcode
    /// This method multiplies U and V by T.ScaleFactor()
    void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a 2d transformation used to find the new
    /// parameters of a point on the transformed surface.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are  obtained by transforming U,V with the 2d transformation returned by
    /// @code
    /// me->ParametricTransformation(T)
    /// @endcode
    /// This method returns a scale centered on the origin with T.ScaleFactor
    Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
    /// <summary>
    /// Returns the parametric bounds U1, U2, V1 and V2 of this plane.
    /// Because a plane is an infinite surface, the following is always true:
    /// - U1 = V1 =   Standard_Real::RealFirst()
    /// - U2 = V2 =   Standard_Real::RealLast().
    /// </summary>
    void Bounds(double% U1, double% U2, double% V1, double% V2);
    /// <summary>
    /// Computes the normalized coefficients of the plane's cartesian equation:
    /// </summary>
    /// @code
    /// Ax + By + Cz + D = 0.0
    /// @endcode
    void Coefficients(double% A, double% B, double% C, double% D);
    /// <summary>
    /// return False
    /// </summary>
    bool IsUClosed();
    /// <summary>
    /// return False
    /// </summary>
    bool IsVClosed();
    /// <summary>
    /// return False.
    /// </summary>
    bool IsUPeriodic();
    /// <summary>
    /// return False.
    /// </summary>
    bool IsVPeriodic();
    /// <summary>
    /// Computes the U isoparametric curve.
    /// This is a Line parallel to the YAxis of the plane.
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U);
    /// <summary>
    /// Computes the V isoparametric curve.
    /// This is a Line parallel to the XAxis of the plane.
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V);
    /// <summary>
    /// Computes the point P (U, V) on <me>.
    /// </summary>
    /// @code
    /// P = O + U * XDir + V * YDir.
    /// @endcode
    /// where O is the "Location" point of the plane, XDir the
    /// "XDirection" and YDir the "YDirection" of the plane's local coordinate system.
    void D0(double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// Computes the current point and the first derivatives in the directions U and V.
    /// </summary>
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// Computes the current point, the first and the second
    /// derivatives in the directions U and V.
    /// </summary>
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Computes the current point, the first,the second and the
    /// third derivatives in the directions U and V.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the direction u
    /// and Nv in the direction v.
    /// Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
    /// </summary>
    Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Applies the transformation T to this plane.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this plane.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_Plane^ CreateDowncasted(::Geom_Plane* instance);
}; // class Geom_Plane

//---------------------------------------------------------------------
//  Class  Geom_RectangularTrimmedSurface
//---------------------------------------------------------------------
/// <summary>
/// Describes a portion of a surface (a patch) limited
/// by two values of the u parameter in the u
/// parametric direction, and two values of the v
/// parameter in the v parametric direction. The
/// domain of the trimmed surface must be within the
/// domain of the surface being trimmed.
/// The trimmed surface is defined by:
/// - the basis surface, and
/// - the values (umin, umax) and (vmin, vmax)
/// which limit it in the u and v parametric directions.
/// The trimmed surface is built from a copy of the basis
/// surface. Therefore, when the basis surface is
/// modified the trimmed surface is not changed.
/// Consequently, the trimmed surface does not
/// necessarily have the same orientation as the basis surface.
/// Warning:  The  case of surface   being trimmed is  periodic and
/// parametrics values are outside the domain is possible.
/// But, domain of the  trimmed surface can be translated
/// by (n X) the period.
/// </summary>
public ref class Geom_RectangularTrimmedSurface sealed
    : public Macad::Occt::Geom_BoundedSurface
{

#ifdef Include_Geom_RectangularTrimmedSurface_h
public:
    Include_Geom_RectangularTrimmedSurface_h
#endif

public:
    Geom_RectangularTrimmedSurface(::Geom_RectangularTrimmedSurface* nativeInstance)
        : Macad::Occt::Geom_BoundedSurface( nativeInstance )
    {}

    Geom_RectangularTrimmedSurface(::Geom_RectangularTrimmedSurface& nativeInstance)
        : Macad::Occt::Geom_BoundedSurface( nativeInstance )
    {}

    property ::Geom_RectangularTrimmedSurface* NativeInstance
    {
        ::Geom_RectangularTrimmedSurface* get()
        {
            return static_cast<::Geom_RectangularTrimmedSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The U parametric direction of the surface is oriented from U1
    /// to U2. The V parametric direction of the surface is oriented
    /// from V1 to V2.
    /// These two directions define the orientation of the surface
    /// (normal). If the surface is not periodic USense and VSense are
    /// not used for the construction. If the surface S is periodic in
    /// one direction USense and VSense give the available part of the
    /// surface. By default in this case the surface has the same
    /// orientation as the basis surface S.
    /// The returned surface is not closed and not periodic.
    /// ConstructionError   Raised if
    /// S is not periodic in the UDirection and U1 or U2 are out of the
    /// bounds of S.
    /// S is not periodic in the VDirection and V1 or V2 are out of the
    /// bounds of S.
    /// U1 = U2 or V1 = V2
    /// </summary>
    Geom_RectangularTrimmedSurface(Macad::Occt::Geom_Surface^ S, double U1, double U2, double V1, double V2, bool USense, bool VSense);
    /// <summary>
    /// The U parametric direction of the surface is oriented from U1
    /// to U2. The V parametric direction of the surface is oriented
    /// from V1 to V2.
    /// These two directions define the orientation of the surface
    /// (normal). If the surface is not periodic USense and VSense are
    /// not used for the construction. If the surface S is periodic in
    /// one direction USense and VSense give the available part of the
    /// surface. By default in this case the surface has the same
    /// orientation as the basis surface S.
    /// The returned surface is not closed and not periodic.
    /// ConstructionError   Raised if
    /// S is not periodic in the UDirection and U1 or U2 are out of the
    /// bounds of S.
    /// S is not periodic in the VDirection and V1 or V2 are out of the
    /// bounds of S.
    /// U1 = U2 or V1 = V2
    /// </summary>
    Geom_RectangularTrimmedSurface(Macad::Occt::Geom_Surface^ S, double U1, double U2, double V1, double V2, bool USense);
    /// <summary>
    /// The U parametric direction of the surface is oriented from U1
    /// to U2. The V parametric direction of the surface is oriented
    /// from V1 to V2.
    /// These two directions define the orientation of the surface
    /// (normal). If the surface is not periodic USense and VSense are
    /// not used for the construction. If the surface S is periodic in
    /// one direction USense and VSense give the available part of the
    /// surface. By default in this case the surface has the same
    /// orientation as the basis surface S.
    /// The returned surface is not closed and not periodic.
    /// ConstructionError   Raised if
    /// S is not periodic in the UDirection and U1 or U2 are out of the
    /// bounds of S.
    /// S is not periodic in the VDirection and V1 or V2 are out of the
    /// bounds of S.
    /// U1 = U2 or V1 = V2
    /// </summary>
    Geom_RectangularTrimmedSurface(Macad::Occt::Geom_Surface^ S, double U1, double U2, double V1, double V2);
    /// <summary>
    /// The basis surface S is only trim in one parametric direction.
    /// If UTrim = True the surface is trimmed in the U parametric
    /// direction else the surface is trimmed in the V parametric
    /// direction.
    /// In the considered parametric direction the resulting surface is
    /// oriented from Param1 to Param2. If S is periodic Sense gives the
    /// available part of the surface. By default the trimmed surface has
    /// the same orientation as the basis surface S in the considered
    /// parametric direction (Sense = True).
    /// If the basis surface S is closed or periodic in the parametric
    /// direction opposite to the trimming direction the trimmed surface
    /// has the same characteristics as the surface S in this direction.
    /// Warnings :
    /// In this package the entities are not shared.
    /// The RectangularTrimmedSurface is built with a copy of the
    /// surface S. So when S is modified the RectangularTrimmedSurface
    /// is not modified
    /// Raised if
    /// S is not periodic in the considered parametric direction and
    /// Param1 or Param2 are out of the bounds of S.
    /// Param1 = Param2
    /// </summary>
    Geom_RectangularTrimmedSurface(Macad::Occt::Geom_Surface^ S, double Param1, double Param2, bool UTrim, bool Sense);
    /// <summary>
    /// The basis surface S is only trim in one parametric direction.
    /// If UTrim = True the surface is trimmed in the U parametric
    /// direction else the surface is trimmed in the V parametric
    /// direction.
    /// In the considered parametric direction the resulting surface is
    /// oriented from Param1 to Param2. If S is periodic Sense gives the
    /// available part of the surface. By default the trimmed surface has
    /// the same orientation as the basis surface S in the considered
    /// parametric direction (Sense = True).
    /// If the basis surface S is closed or periodic in the parametric
    /// direction opposite to the trimming direction the trimmed surface
    /// has the same characteristics as the surface S in this direction.
    /// Warnings :
    /// In this package the entities are not shared.
    /// The RectangularTrimmedSurface is built with a copy of the
    /// surface S. So when S is modified the RectangularTrimmedSurface
    /// is not modified
    /// Raised if
    /// S is not periodic in the considered parametric direction and
    /// Param1 or Param2 are out of the bounds of S.
    /// Param1 = Param2
    /// </summary>
    Geom_RectangularTrimmedSurface(Macad::Occt::Geom_Surface^ S, double Param1, double Param2, bool UTrim);
    /// <summary>
    /// Modifies this patch by changing the trim values
    /// applied to the original surface
    /// The u parametric direction of
    /// this patch is oriented from U1 to U2. The v
    /// parametric direction of this patch is oriented
    /// from V1 to V2. USense and VSense are used
    /// for the construction only if the surface is periodic
    /// in the corresponding parametric direction, and
    /// define the available part of the surface; by default
    /// in this case, this patch has the same orientation
    /// as the basis surface.
    /// Raised if
    /// The BasisSurface is not periodic in the UDirection and U1 or U2
    /// are out of the bounds of the BasisSurface.
    /// The BasisSurface is not periodic in the VDirection and V1 or V2
    /// are out of the bounds of the BasisSurface.
    /// U1 = U2 or V1 = V2
    /// </summary>
    void SetTrim(double U1, double U2, double V1, double V2, bool USense, bool VSense);
    /// <summary>
    /// Modifies this patch by changing the trim values
    /// applied to the original surface
    /// The u parametric direction of
    /// this patch is oriented from U1 to U2. The v
    /// parametric direction of this patch is oriented
    /// from V1 to V2. USense and VSense are used
    /// for the construction only if the surface is periodic
    /// in the corresponding parametric direction, and
    /// define the available part of the surface; by default
    /// in this case, this patch has the same orientation
    /// as the basis surface.
    /// Raised if
    /// The BasisSurface is not periodic in the UDirection and U1 or U2
    /// are out of the bounds of the BasisSurface.
    /// The BasisSurface is not periodic in the VDirection and V1 or V2
    /// are out of the bounds of the BasisSurface.
    /// U1 = U2 or V1 = V2
    /// </summary>
    void SetTrim(double U1, double U2, double V1, double V2, bool USense);
    /// <summary>
    /// Modifies this patch by changing the trim values
    /// applied to the original surface
    /// The u parametric direction of
    /// this patch is oriented from U1 to U2. The v
    /// parametric direction of this patch is oriented
    /// from V1 to V2. USense and VSense are used
    /// for the construction only if the surface is periodic
    /// in the corresponding parametric direction, and
    /// define the available part of the surface; by default
    /// in this case, this patch has the same orientation
    /// as the basis surface.
    /// Raised if
    /// The BasisSurface is not periodic in the UDirection and U1 or U2
    /// are out of the bounds of the BasisSurface.
    /// The BasisSurface is not periodic in the VDirection and V1 or V2
    /// are out of the bounds of the BasisSurface.
    /// U1 = U2 or V1 = V2
    /// </summary>
    void SetTrim(double U1, double U2, double V1, double V2);
    /// <summary>
    /// Modifies this patch by changing the trim values
    /// applied to the original surface
    /// The basis surface is trimmed only in one parametric direction: if UTrim
    /// is true, the surface is trimmed in the u parametric
    /// direction; if it is false, it is trimmed in the v
    /// parametric direction. In the "trimmed" direction,
    /// this patch is oriented from Param1 to Param2. If
    /// the basis surface is periodic in the "trimmed"
    /// direction, Sense defines its available part. By
    /// default in this case, this patch has the same
    /// orientation as the basis surface in this parametric
    /// direction. If the basis surface is closed or periodic
    /// in the other parametric direction (i.e. not the
    /// "trimmed" direction), this patch has the same
    /// characteristics as the basis surface in that parametric direction.
    /// Raised if
    /// The BasisSurface is not periodic in the considered direction and
    /// Param1 or Param2 are out of the bounds of the BasisSurface.
    /// Param1 = Param2
    /// </summary>
    void SetTrim(double Param1, double Param2, bool UTrim, bool Sense);
    /// <summary>
    /// Modifies this patch by changing the trim values
    /// applied to the original surface
    /// The basis surface is trimmed only in one parametric direction: if UTrim
    /// is true, the surface is trimmed in the u parametric
    /// direction; if it is false, it is trimmed in the v
    /// parametric direction. In the "trimmed" direction,
    /// this patch is oriented from Param1 to Param2. If
    /// the basis surface is periodic in the "trimmed"
    /// direction, Sense defines its available part. By
    /// default in this case, this patch has the same
    /// orientation as the basis surface in this parametric
    /// direction. If the basis surface is closed or periodic
    /// in the other parametric direction (i.e. not the
    /// "trimmed" direction), this patch has the same
    /// characteristics as the basis surface in that parametric direction.
    /// Raised if
    /// The BasisSurface is not periodic in the considered direction and
    /// Param1 or Param2 are out of the bounds of the BasisSurface.
    /// Param1 = Param2
    /// </summary>
    void SetTrim(double Param1, double Param2, bool UTrim);
    /// <summary>
    /// Returns the Basis surface of <me>.
    /// </summary>
    Macad::Occt::Geom_Surface^ BasisSurface();
    /// <summary>
    /// Changes the orientation of this patch in the u
    /// parametric direction. The bounds of the surface are
    /// not changed, but the given parametric direction is
    /// reversed. Hence the orientation of the surface is reversed.
    /// </summary>
    void UReverse();
    /// <summary>
    /// Computes the u  parameter on the modified
    /// surface, produced by when reversing its u
    /// parametric direction, for any point of u parameter U on this patch.
    /// </summary>
    double UReversedParameter(double U);
    /// <summary>
    /// Changes the orientation of this patch in the v
    /// parametric direction. The bounds of the surface are
    /// not changed, but the given parametric direction is
    /// reversed. Hence the orientation of the surface is reversed.
    /// </summary>
    void VReverse();
    /// <summary>
    /// Computes the v  parameter on the modified
    /// surface, produced by when reversing its v
    /// parametric direction, for any point of v parameter V on this patch.
    /// </summary>
    double VReversedParameter(double V);
    /// <summary>
    /// Returns the parametric bounds U1, U2, V1 and V2 of this patch.
    /// </summary>
    void Bounds(double% U1, double% U2, double% V1, double% V2);
    /// <summary>
    /// Returns  the continuity of the surface :
    /// C0 : only geometric continuity,
    /// C1 : continuity of the first derivative all along the Surface,
    /// C2 : continuity of the second derivative all along the Surface,
    /// C3 : continuity of the third derivative all along the Surface,
    /// CN : the order of continuity is infinite.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns true if this patch is closed in the given parametric direction.
    /// </summary>
    bool IsUClosed();
    /// <summary>
    /// Returns true if this patch is closed in the given parametric direction.
    /// </summary>
    bool IsVClosed();
    /// <summary>
    /// Returns true if the order of derivation in the U parametric
    /// direction is N.
    /// Raised if N < 0.
    /// </summary>
    bool IsCNu(int N);
    /// <summary>
    /// Returns true if the order of derivation in the V parametric
    /// direction is N.
    /// Raised if N < 0.
    /// </summary>
    bool IsCNv(int N);
    /// <summary>
    /// Returns true if this patch is periodic and not trimmed in the given
    /// parametric direction.
    /// </summary>
    bool IsUPeriodic();
    /// <summary>
    /// Returns the period of this patch in the u
    /// parametric direction.
    /// raises if the surface is not uperiodic.
    /// </summary>
    double UPeriod();
    /// <summary>
    /// Returns true if this patch is periodic and not trimmed in the given
    /// parametric direction.
    /// </summary>
    bool IsVPeriodic();
    /// <summary>
    /// Returns the period of this patch in the v
    /// parametric direction.
    /// raises if the surface is not vperiodic.
    /// value and derivatives
    /// </summary>
    double VPeriod();
    /// <summary>
    /// computes the U isoparametric curve.
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U);
    /// <summary>
    /// Computes the V isoparametric curve.
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V);
    /// <summary>
    /// Can be raised if the basis surface is an OffsetSurface.
    /// </summary>
    void D0(double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// The returned derivatives have the same orientation as the
    /// derivatives of the basis surface even if the trimmed surface
    /// has not the same parametric orientation.
    /// Warning!  UndefinedDerivative  raised if the continuity of the surface is not C1.
    /// </summary>
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// The returned derivatives have the same orientation as the
    /// derivatives of the basis surface even if the trimmed surface
    /// has not the same parametric orientation.
    /// Warning! UndefinedDerivative raised if the continuity of the surface is not C2.
    /// </summary>
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// The returned derivatives have the same orientation as the
    /// derivatives of the basis surface even if the trimmed surface
    /// has not the same parametric orientation.
    /// Warning UndefinedDerivative raised if the continuity of the surface is not C3.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// The returned derivative has the same orientation as the
    /// derivative of the basis surface even if the trimmed surface
    /// has not the same parametric orientation.
    /// Warning!  UndefinedDerivative raised if the continuity of the surface is not CNu in the U
    /// parametric direction and CNv in the V parametric direction.
    /// RangeError Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
    /// </summary>
    Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Applies the transformation T to this patch.
    /// Warning
    /// As a consequence, the basis surface included in the
    /// data structure of this patch is also modified.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Computes the  parameters on the  transformed  surface for
    /// the transform of the point of parameters U,V on <me>.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are the new values of U,V after calling
    /// @code
    /// me->TransformParameters(U,V,T)
    /// @endcode
    /// This method calls the basis surface method.
    void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a 2d transformation  used to find the  new
    /// parameters of a point on the transformed surface.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are  obtained by transforming U,V with
    /// the 2d transformation returned by
    /// @code
    /// me->ParametricTransformation(T)
    /// @endcode
    /// This method calls the basis surface method.
    Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this patch.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_RectangularTrimmedSurface^ CreateDowncasted(::Geom_RectangularTrimmedSurface* instance);
}; // class Geom_RectangularTrimmedSurface

//---------------------------------------------------------------------
//  Class  Geom_SphericalSurface
//---------------------------------------------------------------------
/// <summary>
/// Describes a sphere.
/// A sphere is defined by its radius, and is positioned in
/// space by a coordinate system (a gp_Ax3 object), the
/// origin of which is the center of the sphere.
/// This coordinate system is the "local coordinate
/// system" of the sphere. The following apply:
/// - Rotation around its "main Axis", in the trigonometric
/// sense given by the "X Direction" and the "Y
/// Direction", defines the u parametric direction.
/// - Its "X Axis" gives the origin for the u parameter.
/// - The "reference meridian" of the sphere is a
/// half-circle, of radius equal to the radius of the
/// sphere. It is located in the plane defined by the
/// origin, "X Direction" and "main Direction", centered
/// on the origin, and positioned on the positive side of the "X Axis".
/// - Rotation around the "Y Axis" gives the v parameter
/// on the reference meridian.
/// - The "X Axis" gives the origin of the v parameter on
/// the reference meridian.
/// - The v parametric direction is oriented by the "main
/// Direction", i.e. when v increases, the Z coordinate
/// increases. (This implies that the "Y Direction"
/// orients the reference meridian only when the local
/// coordinate system is indirect.)
/// - The u isoparametric curve is a half-circle obtained
/// by rotating the reference meridian of the sphere
/// through an angle u around the "main Axis", in the
/// trigonometric sense defined by the "X Direction"
/// and the "Y Direction".
/// The parametric equation of the sphere is:
/// P(u,v) = O + R*cos(v)*(cos(u)*XDir + sin(u)*YDir)+R*sin(v)*ZDir
/// where:
/// - O, XDir, YDir and ZDir are respectively the
/// origin, the "X Direction", the "Y Direction" and the "Z
/// Direction" of its local coordinate system, and
/// - R is the radius of the sphere.
/// The parametric range of the two parameters is:
/// - [ 0, 2.*Pi ] for u, and
/// - [ - Pi/2., + Pi/2. ] for v.
/// </summary>
public ref class Geom_SphericalSurface sealed
    : public Macad::Occt::Geom_ElementarySurface
{

#ifdef Include_Geom_SphericalSurface_h
public:
    Include_Geom_SphericalSurface_h
#endif

public:
    Geom_SphericalSurface(::Geom_SphericalSurface* nativeInstance)
        : Macad::Occt::Geom_ElementarySurface( nativeInstance )
    {}

    Geom_SphericalSurface(::Geom_SphericalSurface& nativeInstance)
        : Macad::Occt::Geom_ElementarySurface( nativeInstance )
    {}

    property ::Geom_SphericalSurface* NativeInstance
    {
        ::Geom_SphericalSurface* get()
        {
            return static_cast<::Geom_SphericalSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// A3 is the local coordinate system of the surface.
    /// At the creation the parametrization of the surface is defined
    /// such as the normal Vector (N = D1U ^ D1V) is directed away from
    /// the center of the sphere.
    /// The direction of increasing parametric value V is defined by the
    /// rotation around the "YDirection" of A2 in the trigonometric sense
    /// and the orientation of increasing parametric value U is defined
    /// by the rotation around the main direction of A2 in the
    /// trigonometric sense.
    /// Warnings :
    /// It is not forbidden to create a spherical surface with
    /// Radius = 0.0
    /// Raised if Radius < 0.0.
    /// </summary>
    Geom_SphericalSurface(Macad::Occt::Ax3 A3, double Radius);
    /// <summary>
    /// Creates a SphericalSurface from a non persistent Sphere from
    /// package gp.
    /// </summary>
    Geom_SphericalSurface(Macad::Occt::gp_Sphere^ S);
    /// <summary>
    /// Assigns the value R to the radius of this sphere.
    /// Exceptions Standard_ConstructionError if R is less than 0.0.
    /// </summary>
    void SetRadius(double R);
    /// <summary>
    /// Converts the gp_Sphere S into this sphere.
    /// </summary>
    void SetSphere(Macad::Occt::gp_Sphere^ S);
    /// <summary>
    /// Returns a non persistent sphere with the same geometric
    /// properties as <me>.
    /// </summary>
    Macad::Occt::gp_Sphere^ Sphere();
    /// <summary>
    /// Computes the u parameter on the modified
    /// surface, when reversing its u  parametric
    /// direction, for any point of u parameter U on this sphere.
    /// In the case of a sphere, these functions returns 2.PI - U.
    /// </summary>
    double UReversedParameter(double U);
    /// <summary>
    /// Computes the v parameter on the modified
    /// surface, when reversing its v parametric
    /// direction, for any point of v parameter V on this sphere.
    /// In the case of a sphere, these functions returns   -U.
    /// </summary>
    double VReversedParameter(double V);
    /// <summary>
    /// Computes the aera of the spherical surface.
    /// </summary>
    double Area();
    /// <summary>
    /// Returns the parametric bounds U1, U2, V1 and V2 of this sphere.
    /// For a sphere: U1 = 0, U2 = 2*PI, V1 = -PI/2, V2 = PI/2.
    /// </summary>
    void Bounds(double% U1, double% U2, double% V1, double% V2);
    /// <summary>
    /// Returns the coefficients of the implicit equation of the
    /// quadric in the absolute cartesian coordinates system :
    /// These coefficients are normalized.
    /// A1.X**2 + A2.Y**2 + A3.Z**2 + 2.(B1.X.Y + B2.X.Z + B3.Y.Z) +
    /// 2.(C1.X + C2.Y + C3.Z) + D = 0.0
    /// </summary>
    void Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D);
    /// <summary>
    /// Computes the coefficients of the implicit equation of
    /// this quadric in the absolute Cartesian coordinate system:
    /// A1.X**2 + A2.Y**2 + A3.Z**2 + 2.(B1.X.Y + B2.X.Z + B3.Y.Z) +
    /// 2.(C1.X + C2.Y + C3.Z) + D = 0.0
    /// An implicit normalization is applied (i.e. A1 = A2 = 1.
    /// in the local coordinate system of this sphere).
    /// </summary>
    double Radius();
    /// <summary>
    /// Computes the volume of the spherical surface.
    /// </summary>
    double Volume();
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsUClosed();
    /// <summary>
    /// Returns False.
    /// </summary>
    bool IsVClosed();
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsUPeriodic();
    /// <summary>
    /// Returns False.
    /// </summary>
    bool IsVPeriodic();
    /// <summary>
    /// Computes the U isoparametric curve.
    /// The U isoparametric curves of the surface are defined by the
    /// section of the spherical surface with plane obtained by rotation
    /// of the plane (Location, XAxis, ZAxis) around ZAxis. This plane
    /// defines the origin of parametrization u.
    /// For a SphericalSurface the UIso curve is a Circle.
    /// Warnings : The radius of this circle can be zero.
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U);
    /// <summary>
    /// Computes the V isoparametric curve.
    /// The V isoparametric curves of the surface  are defined by
    /// the section of the spherical surface with plane parallel to the
    /// plane (Location, XAxis, YAxis). This plane defines the origin of
    /// parametrization V.
    /// Be careful if  V is close to PI/2 or 3*PI/2 the radius of the
    /// circle becomes tiny. It is not forbidden in this toolkit to
    /// create circle with radius = 0.0
    /// For a SphericalSurface the VIso curve is a Circle.
    /// Warnings : The radius of this circle can be zero.
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V);
    /// <summary>
    /// Computes the  point P (U, V) on the surface.
    /// P (U, V) = Loc + Radius * Sin (V) * Zdir +
    /// Radius * Cos (V) * (cos (U) * XDir + sin (U) * YDir)
    /// where Loc is the origin of the placement plane (XAxis, YAxis)
    /// XDir is the direction of the XAxis and YDir the direction of
    /// the YAxis and ZDir the direction of the ZAxis.
    /// </summary>
    void D0(double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// Computes the current point and the first derivatives in the
    /// directions U and V.
    /// </summary>
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// Computes the current point, the first and the second derivatives
    /// in the directions U and V.
    /// </summary>
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Computes the current point, the first,the second and the third
    /// derivatives in the directions U and V.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the direction u
    /// and Nv in the direction v.
    /// Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
    /// </summary>
    Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Applies the transformation T to this sphere.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this sphere.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_SphericalSurface^ CreateDowncasted(::Geom_SphericalSurface* instance);
}; // class Geom_SphericalSurface

//---------------------------------------------------------------------
//  Class  Geom_SweptSurface
//---------------------------------------------------------------------
/// <summary>
/// Describes the common behavior for surfaces
/// constructed by sweeping a curve with another curve.
/// The Geom package provides two concrete derived
/// surfaces: surface of revolution (a revolved surface),
/// and surface of linear extrusion (an extruded surface).
/// </summary>
public ref class Geom_SweptSurface
    : public Macad::Occt::Geom_Surface
{

#ifdef Include_Geom_SweptSurface_h
public:
    Include_Geom_SweptSurface_h
#endif

protected:
    Geom_SweptSurface(InitMode init)
        : Macad::Occt::Geom_Surface( init )
    {}

public:
    Geom_SweptSurface(::Geom_SweptSurface* nativeInstance)
        : Macad::Occt::Geom_Surface( nativeInstance )
    {}

    Geom_SweptSurface(::Geom_SweptSurface& nativeInstance)
        : Macad::Occt::Geom_Surface( nativeInstance )
    {}

    property ::Geom_SweptSurface* NativeInstance
    {
        ::Geom_SweptSurface* get()
        {
            return static_cast<::Geom_SweptSurface*>(_NativeInstance);
        }
    }

public:
    Geom_SweptSurface();
    /// <summary>
    /// returns the continuity of the surface :
    /// C0 : only geometric continuity,
    /// C1 : continuity of the first derivative all along the surface,
    /// C2 : continuity of the second derivative all along the surface,
    /// C3 : continuity of the third derivative all along the surface,
    /// G1 : tangency continuity all along the surface,
    /// G2 : curvature continuity all along the surface,
    /// CN : the order of continuity is infinite.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns the reference direction of the swept surface.
    /// For a surface of revolution it is the direction of the
    /// revolution axis, for a surface of linear extrusion it is
    /// the direction of extrusion.
    /// </summary>
    Macad::Occt::Dir Direction();
    /// <summary>
    /// Returns the referenced curve of the surface.
    /// For a surface of revolution it is the revolution curve,
    /// for a surface of linear extrusion it is the extruded curve.
    /// </summary>
    Macad::Occt::Geom_Curve^ BasisCurve();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_SweptSurface^ CreateDowncasted(::Geom_SweptSurface* instance);
}; // class Geom_SweptSurface

//---------------------------------------------------------------------
//  Class  Geom_SurfaceOfLinearExtrusion
//---------------------------------------------------------------------
/// <summary>
/// Describes a surface of linear extrusion ("extruded
/// surface"), e.g. a generalized cylinder. Such a surface
/// is obtained by sweeping a curve (called the "extruded
/// curve" or "basis") in a given direction (referred to as
/// the "direction of extrusion" and defined by a unit vector).
/// The u parameter is along the extruded curve. The v
/// parameter is along the direction of extrusion.
/// The parameter range for the u parameter is defined
/// by the reference curve.
/// The parameter range for the v parameter is ] -
/// infinity, + infinity [.
/// The position of the curve gives the origin of the v parameter.
/// The surface is "CN" in the v parametric direction.
/// The form of a surface of linear extrusion is generally a
/// ruled surface (GeomAbs_RuledForm). It can be:
/// - a cylindrical surface, if the extruded curve is a circle,
/// or a trimmed circle, with an axis parallel to the
/// direction of extrusion (GeomAbs_CylindricalForm), or
/// - a planar surface, if the extruded curve is a line
/// (GeomAbs_PlanarForm).
/// Note: The surface of extrusion is built from a copy of
/// the original basis curve, so the original curve is not
/// modified when the surface is modified.
/// Warning
/// Degenerate surfaces are not detected. A degenerate
/// surface is obtained, for example, when the extruded
/// curve is a line and the direction of extrusion is parallel
/// to that line.
/// </summary>
public ref class Geom_SurfaceOfLinearExtrusion sealed
    : public Macad::Occt::Geom_SweptSurface
{

#ifdef Include_Geom_SurfaceOfLinearExtrusion_h
public:
    Include_Geom_SurfaceOfLinearExtrusion_h
#endif

public:
    Geom_SurfaceOfLinearExtrusion(::Geom_SurfaceOfLinearExtrusion* nativeInstance)
        : Macad::Occt::Geom_SweptSurface( nativeInstance )
    {}

    Geom_SurfaceOfLinearExtrusion(::Geom_SurfaceOfLinearExtrusion& nativeInstance)
        : Macad::Occt::Geom_SweptSurface( nativeInstance )
    {}

    property ::Geom_SurfaceOfLinearExtrusion* NativeInstance
    {
        ::Geom_SurfaceOfLinearExtrusion* get()
        {
            return static_cast<::Geom_SurfaceOfLinearExtrusion*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// V is the direction of extrusion.
    /// C is the extruded curve.
    /// The form of a SurfaceOfLinearExtrusion can be :
    /// . ruled surface (RuledForm),
    /// . a cylindrical surface if the extruded curve is a circle or
    /// a trimmed circle (CylindricalForm),
    /// . a plane surface if the extruded curve is a Line (PlanarForm).
    /// Warnings :
    /// Degenerated surface cases are not detected. For example if the
    /// curve C is a line and V is parallel to the direction of this
    /// line.
    /// </summary>
    Geom_SurfaceOfLinearExtrusion(Macad::Occt::Geom_Curve^ C, Macad::Occt::Dir V);
    /// <summary>
    /// Assigns V as the "direction of extrusion" for this
    /// surface of linear extrusion.
    /// </summary>
    void SetDirection(Macad::Occt::Dir V);
    /// <summary>
    /// Modifies this surface of linear extrusion by redefining
    /// its "basis curve" (the "extruded curve").
    /// </summary>
    void SetBasisCurve(Macad::Occt::Geom_Curve^ C);
    /// <summary>
    /// Changes the orientation of this surface of linear
    /// extrusion in the u  parametric direction. The
    /// bounds of the surface are not changed, but the given
    /// parametric direction is reversed. Hence the
    /// orientation of the surface is reversed.
    /// In the case of a surface of linear extrusion:
    /// - UReverse reverses the basis curve, and
    /// - VReverse reverses the direction of linear extrusion.
    /// </summary>
    void UReverse();
    /// <summary>
    /// Computes the u parameter on the modified
    /// surface, produced by reversing its u  parametric
    /// direction, for any point of u parameter U  on this surface of linear extrusion.
    /// In the case of an extruded surface:
    /// - UReverseParameter returns the reversed
    /// parameter given by the function
    /// ReversedParameter called with U on the basis   curve,
    /// </summary>
    double UReversedParameter(double U);
    /// <summary>
    /// Changes the orientation of this surface of linear
    /// extrusion in the v parametric direction. The
    /// bounds of the surface are not changed, but the given
    /// parametric direction is reversed. Hence the
    /// orientation of the surface is reversed.
    /// In the case of a surface of linear extrusion:
    /// - UReverse reverses the basis curve, and
    /// - VReverse reverses the direction of linear extrusion.
    /// </summary>
    void VReverse();
    /// <summary>
    /// Computes the v parameter on the modified
    /// surface, produced by reversing its u v parametric
    /// direction, for any point of v parameter V on this surface of linear extrusion.
    /// In the case of an extruded surface VReverse returns -V.
    /// </summary>
    double VReversedParameter(double V);
    /// <summary>
    /// Returns the parametric bounds U1, U2, V1 and V2 of
    /// this surface of linear extrusion.
    /// A surface of linear extrusion is infinite in the v
    /// parametric direction, so:
    /// - V1 = Standard_Real::RealFirst()
    /// - V2 = Standard_Real::RealLast().
    /// </summary>
    void Bounds(double% U1, double% U2, double% V1, double% V2);
    /// <summary>
    /// IsUClosed returns true if the "basis curve" of this
    /// surface of linear extrusion is closed.
    /// </summary>
    bool IsUClosed();
    /// <summary>
    /// IsVClosed always returns false.
    /// </summary>
    bool IsVClosed();
    /// <summary>
    /// IsCNu returns true if the degree of continuity for the
    /// "basis curve" of this surface of linear extrusion is at least N.
    /// Raises RangeError if N < 0.
    /// </summary>
    bool IsCNu(int N);
    /// <summary>
    /// IsCNv always returns true.
    /// </summary>
    bool IsCNv(int N);
    /// <summary>
    /// IsUPeriodic returns true if the "basis curve" of this
    /// surface of linear extrusion is periodic.
    /// </summary>
    bool IsUPeriodic();
    /// <summary>
    /// IsVPeriodic always returns false.
    /// </summary>
    bool IsVPeriodic();
    /// <summary>
    /// Computes the U isoparametric curve of this surface
    /// of linear extrusion. This is the line parallel to the
    /// direction of extrusion, passing through the point of
    /// parameter U of the basis curve.
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U);
    /// <summary>
    /// Computes the V isoparametric curve of this surface
    /// of linear extrusion. This curve is obtained by
    /// translating the extruded curve in the direction of
    /// extrusion, with the magnitude V.
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V);
    /// <summary>
    /// Computes the  point P (U, V) on the surface.
    /// The parameter U is the parameter on the extruded curve.
    /// The parametrization V is a linear parametrization, and
    /// the direction of parametrization is the direction of
    /// extrusion. If the point is on the extruded curve, V = 0.0
    /// </summary>
    void D0(double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// Computes the current point and the first derivatives in the
    /// directions U and V.
    /// Raises UndefinedDerivative if the continuity of the surface is not C1.
    /// </summary>
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// --- Purpose ;
    /// Computes the current point, the first and the second derivatives
    /// in the directions U and V.
    /// Raises UndefinedDerivative if the continuity of the surface is not C2.
    /// </summary>
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Computes the current point, the first,the second and the third
    /// derivatives in the directions U and V.
    /// Raises UndefinedDerivative if the continuity of the surface is not C3.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the direction u
    /// and Nv in the direction v.
    /// Raises UndefinedDerivative if the continuity of the surface is not CNu in the u
    /// direction and CNv in the v direction.
    /// Raises RangeError if Nu + Nv < 1 or Nu < 0 or Nv < 0.
    /// </summary>
    Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Applies the transformation T to this surface of linear extrusion.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Computes the  parameters on the  transformed  surface for
    /// the transform of the point of parameters U,V on <me>.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are the new values of U,V after calling
    /// @code
    /// me->TransformParameters(U,V,T)
    /// @endcode
    /// This method multiplies:
    /// U by BasisCurve()->ParametricTransformation(T)
    /// V by T.ScaleFactor()
    void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a 2d transformation  used to find the  new
    /// parameters of a point on the transformed surface.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are  obtained by transforming U,V with
    /// the 2d transformation returned by
    /// @code
    /// me->ParametricTransformation(T)
    /// @endcode
    /// This method returns a scale
    /// U by BasisCurve()->ParametricTransformation(T)
    /// V by T.ScaleFactor()
    Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this surface of linear extrusion.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_SurfaceOfLinearExtrusion^ CreateDowncasted(::Geom_SurfaceOfLinearExtrusion* instance);
}; // class Geom_SurfaceOfLinearExtrusion

//---------------------------------------------------------------------
//  Class  Geom_SurfaceOfRevolution
//---------------------------------------------------------------------
/// <summary>
/// Describes a surface of revolution (revolved surface).
/// Such a surface is obtained by rotating a curve (called
/// the "meridian") through a complete revolution about
/// an axis (referred to as the "axis of revolution"). The
/// curve and the axis must be in the same plane (the
/// "reference plane" of the surface).
/// Rotation around the axis of revolution in the
/// trigonometric sense defines the u parametric
/// direction. So the u parameter is an angle, and its
/// origin is given by the position of the meridian on the surface.
/// The parametric range for the u parameter is: [ 0, 2.*Pi ]
/// The v parameter is that of the meridian.
/// Note: A surface of revolution is built from a copy of the
/// original meridian. As a result the original meridian is
/// not modified when the surface is modified.
/// The form of a surface of revolution is typically a
/// general revolution surface
/// (GeomAbs_RevolutionForm). It can be:
/// - a conical surface, if the meridian is a line or a
/// trimmed line (GeomAbs_ConicalForm),
/// - a cylindrical surface, if the meridian is a line or a
/// trimmed line parallel to the axis of revolution
/// (GeomAbs_CylindricalForm),
/// - a planar surface if the meridian is a line or a
/// trimmed line perpendicular to the axis of revolution
/// of the surface (GeomAbs_PlanarForm),
/// - a toroidal surface, if the meridian is a circle or a
/// trimmed circle (GeomAbs_ToroidalForm), or
/// - a spherical surface, if the meridian is a circle, the
/// center of which is located on the axis of the
/// revolved surface (GeomAbs_SphericalForm).
/// Warning
/// Be careful not to construct a surface of revolution
/// where the curve and the axis or revolution are not
/// defined in the same plane. If you do not have a
/// correct configuration, you can correct your initial
/// curve, using a cylindrical projection in the reference plane.
/// </summary>
public ref class Geom_SurfaceOfRevolution sealed
    : public Macad::Occt::Geom_SweptSurface
{

#ifdef Include_Geom_SurfaceOfRevolution_h
public:
    Include_Geom_SurfaceOfRevolution_h
#endif

public:
    Geom_SurfaceOfRevolution(::Geom_SurfaceOfRevolution* nativeInstance)
        : Macad::Occt::Geom_SweptSurface( nativeInstance )
    {}

    Geom_SurfaceOfRevolution(::Geom_SurfaceOfRevolution& nativeInstance)
        : Macad::Occt::Geom_SweptSurface( nativeInstance )
    {}

    property ::Geom_SurfaceOfRevolution* NativeInstance
    {
        ::Geom_SurfaceOfRevolution* get()
        {
            return static_cast<::Geom_SurfaceOfRevolution*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// C : is the meridian  or the referenced curve.
    /// A1 is the axis of revolution.
    /// The form of a SurfaceOfRevolution can be :
    /// . a general revolution surface (RevolutionForm),
    /// . a conical surface if the meridian is a line or a trimmed line
    /// (ConicalForm),
    /// . a cylindrical surface if the meridian is a line or a trimmed
    /// line parallel to the revolution axis (CylindricalForm),
    /// . a planar surface if the meridian is a line perpendicular to
    /// the revolution axis of the surface (PlanarForm).
    /// . a spherical surface,
    /// . a toroidal surface,
    /// . a quadric surface.
    /// Warnings :
    /// It is not checked that the curve C is planar and that the
    /// surface axis is in the plane of the curve.
    /// It is not checked that the revolved curve C doesn't
    /// self-intersects.
    /// </summary>
    Geom_SurfaceOfRevolution(Macad::Occt::Geom_Curve^ C, Macad::Occt::Ax1 A1);
    /// <summary>
    /// Changes the axis of revolution.
    /// Warnings :
    /// It is not checked that the axis is in the plane of the
    /// revolved curve.
    /// </summary>
    void SetAxis(Macad::Occt::Ax1 A1);
    /// <summary>
    /// Changes the direction of the revolution axis.
    /// Warnings :
    /// It is not checked that the axis is in the plane of the
    /// revolved curve.
    /// </summary>
    void SetDirection(Macad::Occt::Dir V);
    /// <summary>
    /// Changes the revolved curve of the surface.
    /// Warnings :
    /// It is not checked that the curve C is planar and that the
    /// surface axis is in the plane of the curve.
    /// It is not checked that the revolved curve C doesn't
    /// self-intersects.
    /// </summary>
    void SetBasisCurve(Macad::Occt::Geom_Curve^ C);
    /// <summary>
    /// Changes the location point of the revolution axis.
    /// Warnings :
    /// It is not checked that the axis is in the plane of the
    /// revolved curve.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt P);
    /// <summary>
    /// Returns the revolution axis of the surface.
    /// </summary>
    Macad::Occt::Ax1 Axis();
    /// <summary>
    /// Returns the location point of the axis of revolution.
    /// </summary>
    Macad::Occt::Pnt Location();
    /// <summary>
    /// Computes the position of the reference plane of the surface
    /// defined by the basis curve and the symmetry axis.
    /// The location point is the location point of the revolution's
    /// axis, the XDirection of the plane is given by the revolution's
    /// axis and the orientation of the normal to the plane is given
    /// by the sense of revolution.
    /// 
    /// Raised if the revolved curve is not planar or if the revolved
    /// curve and the symmetry axis are not in the same plane or if
    /// the maximum of distance between the axis and the revolved
    /// curve is lower or equal to Resolution from gp.
    /// </summary>
    Macad::Occt::Ax2 ReferencePlane();
    /// <summary>
    /// Changes the orientation of this surface of revolution
    /// in the u  parametric direction. The bounds of the
    /// surface are not changed but the given parametric
    /// direction is reversed. Hence the orientation of the
    /// surface is reversed.
    /// As a consequence:
    /// - UReverse reverses the direction of the axis of
    /// revolution of this surface,
    /// </summary>
    void UReverse();
    /// <summary>
    /// Computes the u  parameter on the modified
    /// surface, when reversing its u  parametric
    /// direction, for any point of u parameter U  on this surface of revolution.
    /// In the case of a revolved surface:
    /// - UReversedParameter returns 2.*Pi - U
    /// </summary>
    double UReversedParameter(double U);
    /// <summary>
    /// Changes the orientation of this surface of revolution
    /// in the v parametric direction. The bounds of the
    /// surface are not changed but the given parametric
    /// direction is reversed. Hence the orientation of the
    /// surface is reversed.
    /// As a consequence:
    /// - VReverse reverses the meridian of this surface of revolution.
    /// </summary>
    void VReverse();
    /// <summary>
    /// Computes the  v parameter on the modified
    /// surface, when reversing its  v parametric
    /// direction, for any point of v parameter V on this surface of revolution.
    /// In the case of a revolved surface:
    /// - VReversedParameter returns the reversed
    /// parameter given by the function
    /// ReversedParameter called with V on the meridian.
    /// </summary>
    double VReversedParameter(double V);
    /// <summary>
    /// Computes the  parameters on the  transformed  surface for
    /// the transform of the point of parameters U,V on <me>.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are the new values of U,V after calling
    /// @code
    /// me->TransformParameters(U,V,T)
    /// @endcode
    /// This method multiplies V by BasisCurve()->ParametricTransformation(T)
    void TransformParameters(double% U, double% V, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a 2d transformation  used to find the  new
    /// parameters of a point on the transformed surface.
    /// </summary>
    /// @code
    /// me->Transformed(T)->Value(U',V')
    /// @endcode
    /// is the same point as
    /// @code
    /// me->Value(U,V).Transformed(T)
    /// @endcode
    /// Where U',V' are  obtained by transforming U,V with
    /// the 2d transformation returned by
    /// @code
    /// me->ParametricTransformation(T)
    /// @endcode
    /// This  method  returns  a scale  centered  on  the
    /// U axis with BasisCurve()->ParametricTransformation(T)
    Macad::Occt::gp_GTrsf2d^ ParametricTransformation(Macad::Occt::Trsf T);
    /// <summary>
    /// Returns the parametric bounds U1, U2 , V1 and V2 of this surface.
    /// A surface of revolution is always complete, so U1 = 0, U2 = 2*PI.
    /// </summary>
    void Bounds(double% U1, double% U2, double% V1, double% V2);
    /// <summary>
    /// IsUClosed always returns true.
    /// </summary>
    bool IsUClosed();
    /// <summary>
    /// IsVClosed returns true if the meridian of this
    /// surface of revolution is closed.
    /// </summary>
    bool IsVClosed();
    /// <summary>
    /// IsCNu always returns true.
    /// </summary>
    bool IsCNu(int N);
    /// <summary>
    /// IsCNv returns true if the degree of continuity of the
    /// meridian of this surface of revolution is at least N.
    /// Raised if N < 0.
    /// </summary>
    bool IsCNv(int N);
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsUPeriodic();
    /// <summary>
    /// IsVPeriodic returns true if the meridian of this
    /// surface of revolution is periodic.
    /// </summary>
    bool IsVPeriodic();
    /// <summary>
    /// Computes the U isoparametric curve of this surface
    /// of revolution. It is the curve obtained by rotating the
    /// meridian through an angle U about the axis of revolution.
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U);
    /// <summary>
    /// Computes the U isoparametric curve of this surface
    /// of revolution. It is the curve obtained by rotating the
    /// meridian through an angle U about the axis of revolution.
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V);
    /// <summary>
    /// Computes the  point P (U, V) on the surface.
    /// U is the angle of the rotation around the revolution axis.
    /// The direction of this axis gives the sense of rotation.
    /// V is the parameter of the revolved curve.
    /// </summary>
    void D0(double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// Computes the current point and the first derivatives
    /// in the directions U and V.
    /// Raised if the continuity of the surface is not C1.
    /// </summary>
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// Computes the current point, the first and the second derivatives
    /// in the directions U and V.
    /// Raised if the continuity of the surface is not C2.
    /// </summary>
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Computes the current point, the first,the second and the third
    /// derivatives in the directions U and V.
    /// Raised if the continuity of the surface is not C3.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the direction u and
    /// Nv in the direction v.
    /// 
    /// Raised if the continuity of the surface is not CNu in the u
    /// direction and CNv in the v direction.
    /// Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
    /// The following  functions  evaluates the  local
    /// derivatives on surface. Useful to manage discontinuities
    /// on the surface.
    /// if    Side  =  1  ->  P  =  S( U+,V )
    /// if    Side  = -1  ->  P  =  S( U-,V )
    /// else  P  is betveen discontinuities
    /// can be evaluated using methods  of
    /// global evaluations    P  =  S( U ,V )
    /// </summary>
    Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Applies the transformation T to this surface of revolution.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this surface of revolution.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_SurfaceOfRevolution^ CreateDowncasted(::Geom_SurfaceOfRevolution* instance);
}; // class Geom_SurfaceOfRevolution

//---------------------------------------------------------------------
//  Class  Geom_ToroidalSurface
//---------------------------------------------------------------------
/// <summary>
/// Describes a torus.
/// A torus is defined by its major and minor radii, and
/// positioned in space with a coordinate system (a
/// gp_Ax3 object) as follows:
/// - The origin is the center of the torus.
/// - The surface is obtained by rotating a circle around
/// the "main Direction". This circle has a radius equal
/// to the minor radius, and is located in the plane
/// defined by the origin, "X Direction" and "main
/// Direction". It is centered on the "X Axis", on its
/// positive side, and positioned at a distance from the
/// origin equal to the major radius. This circle is the
/// "reference circle" of the torus.
/// - The plane defined by the origin, the "X Direction"
/// and the "Y Direction" is called the "reference plane" of the torus.
/// This coordinate system is the "local coordinate
/// system" of the torus. The following apply:
/// - Rotation around its "main Axis", in the trigonometric
/// sense given by "X Direction" and "Y Direction",
/// defines the u parametric direction.
/// - The "X Axis" gives the origin for the u parameter.
/// - Rotation around an axis parallel to the "Y Axis" and
/// passing through the center of the "reference circle"
/// gives the v parameter on the "reference circle".
/// - The "X Axis" gives the origin of the v parameter on
/// the "reference circle".
/// - The v parametric direction is oriented by the
/// inverse of the "main Direction", i.e. near 0, as v
/// increases, the Z coordinate decreases. (This
/// implies that the "Y Direction" orients the reference
/// circle only when the local coordinate system is direct.)
/// - The u isoparametric curve is a circle obtained by
/// rotating the "reference circle" of the torus through
/// an angle u about the "main Axis".
/// The parametric equation of the torus is :
/// P(u, v) = O + (R + r*cos(v)) * (cos(u)*XDir +
/// sin(u)*YDir ) + r*sin(v)*ZDir, where:
/// - O, XDir, YDir and ZDir are respectively the
/// origin, the "X Direction", the "Y Direction" and the "Z
/// Direction" of the local coordinate system,
/// - r and R are, respectively, the minor and major radius.
/// The parametric range of the two parameters is:
/// - [ 0, 2.*Pi ] for u
/// - [ 0, 2.*Pi ] for v
/// </summary>
public ref class Geom_ToroidalSurface sealed
    : public Macad::Occt::Geom_ElementarySurface
{

#ifdef Include_Geom_ToroidalSurface_h
public:
    Include_Geom_ToroidalSurface_h
#endif

public:
    Geom_ToroidalSurface(::Geom_ToroidalSurface* nativeInstance)
        : Macad::Occt::Geom_ElementarySurface( nativeInstance )
    {}

    Geom_ToroidalSurface(::Geom_ToroidalSurface& nativeInstance)
        : Macad::Occt::Geom_ElementarySurface( nativeInstance )
    {}

    property ::Geom_ToroidalSurface* NativeInstance
    {
        ::Geom_ToroidalSurface* get()
        {
            return static_cast<::Geom_ToroidalSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// A3 is the local coordinate system of the surface.
    /// The orientation of increasing V parametric value is defined
    /// by the rotation around the main axis (ZAxis) in the
    /// trigonometric sense. The parametrization of the surface in the
    /// U direction is defined such as the normal Vector (N = D1U ^ D1V)
    /// is oriented towards the "outside region" of the surface.
    /// Warnings :
    /// It is not forbidden to create a toroidal surface with
    /// MajorRadius = MinorRadius = 0.0
    /// 
    /// Raised if MinorRadius < 0.0 or if MajorRadius < 0.0
    /// </summary>
    Geom_ToroidalSurface(Macad::Occt::Ax3 A3, double MajorRadius, double MinorRadius);
    /// <summary>
    /// Creates a ToroidalSurface from a non transient Torus from
    /// package gp.
    /// </summary>
    Geom_ToroidalSurface(Macad::Occt::gp_Torus^ T);
    /// <summary>
    /// Modifies this torus by changing its major radius.
    /// Exceptions
    /// Standard_ConstructionError if:
    /// - MajorRadius is negative, or
    /// - MajorRadius - r is less than or equal to
    /// gp::Resolution(), where r is the minor radius of this torus.
    /// </summary>
    void SetMajorRadius(double MajorRadius);
    /// <summary>
    /// Modifies this torus by changing its minor radius.
    /// Exceptions
    /// Standard_ConstructionError if:
    /// - MinorRadius is negative, or
    /// - R - MinorRadius is less than or equal to
    /// gp::Resolution(), where R is the major radius of this torus.
    /// </summary>
    void SetMinorRadius(double MinorRadius);
    /// <summary>
    /// Converts the gp_Torus torus T into this torus.
    /// </summary>
    void SetTorus(Macad::Occt::gp_Torus^ T);
    /// <summary>
    /// Returns the non transient torus with the same geometric
    /// properties as <me>.
    /// </summary>
    Macad::Occt::gp_Torus^ Torus();
    /// <summary>
    /// Return the  parameter on the  Ureversed surface for
    /// the point of parameter U on <me>.
    /// Return 2.PI - U.
    /// </summary>
    double UReversedParameter(double U);
    /// <summary>
    /// Return the  parameter on the  Ureversed surface for
    /// the point of parameter U on <me>.
    /// Return 2.PI - U.
    /// </summary>
    double VReversedParameter(double U);
    /// <summary>
    /// Computes the aera of the surface.
    /// </summary>
    double Area();
    /// <summary>
    /// Returns the parametric bounds U1, U2, V1 and V2 of this torus.
    /// For a torus: U1 = V1 = 0 and U2 = V2 = 2*PI .
    /// </summary>
    void Bounds(double% U1, double% U2, double% V1, double% V2);
    /// <summary>
    /// Returns the coefficients of the implicit equation of the surface
    /// in the absolute cartesian coordinate system :
    /// Coef(1) * X**4 + Coef(2) * Y**4 + Coef(3) * Z**4 +
    /// Coef(4) * X**3 * Y + Coef(5) * X**3 * Z + Coef(6) * Y**3 * X +
    /// Coef(7) * Y**3 * Z + Coef(8) * Z**3 * X + Coef(9) * Z**3 * Y +
    /// Coef(10) * X**2 * Y**2 + Coef(11) * X**2 * Z**2 +
    /// Coef(12) * Y**2 * Z**2 + Coef(13) * X**3 + Coef(14) * Y**3 +
    /// Coef(15) * Z**3 + Coef(16) * X**2 * Y + Coef(17) * X**2 * Z +
    /// Coef(18) * Y**2 * X + Coef(19) * Y**2 * Z + Coef(20) * Z**2 * X +
    /// Coef(21) * Z**2 * Y + Coef(22) * X**2 + Coef(23) * Y**2 +
    /// Coef(24) * Z**2 + Coef(25) * X * Y + Coef(26) * X * Z +
    /// Coef(27) * Y * Z + Coef(28) * X + Coef(29) * Y + Coef(30) *  Z +
    /// Coef(31) = 0.0
    /// Raised if the length of Coef is lower than 31.
    /// </summary>
    void Coefficients(Macad::Occt::TColStd_Array1OfReal^ Coef);
    /// <summary>
    /// Returns the major radius, or the minor radius, of this torus.
    /// </summary>
    double MajorRadius();
    /// <summary>
    /// Returns the major radius, or the minor radius, of this torus.
    /// </summary>
    double MinorRadius();
    /// <summary>
    /// Computes the volume.
    /// </summary>
    double Volume();
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsUClosed();
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsVClosed();
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsUPeriodic();
    /// <summary>
    /// Returns True.
    /// </summary>
    bool IsVPeriodic();
    /// <summary>
    /// Computes the U isoparametric curve.
    /// 
    /// For a toroidal surface the UIso curve is a circle.
    /// The center of the Uiso circle is at the distance MajorRadius
    /// from the location point of the toroidal surface.
    /// Warnings :
    /// The radius of the circle can be zero if for the surface
    /// MinorRadius = 0.0
    /// </summary>
    Macad::Occt::Geom_Curve^ UIso(double U);
    /// <summary>
    /// Computes the V isoparametric curve.
    /// 
    /// For a ToroidalSurface the VIso curve is a circle.
    /// The axis of the circle is the main axis (ZAxis) of the
    /// toroidal  surface.
    /// Warnings :
    /// The radius of the circle can be zero if for the surface
    /// MajorRadius = MinorRadius
    /// </summary>
    Macad::Occt::Geom_Curve^ VIso(double V);
    /// <summary>
    /// Computes the  point P (U, V) on the surface.
    /// P (U, V) = Loc + MinorRadius * Sin (V) * Zdir +
    /// (MajorRadius + MinorRadius * Cos(V)) *
    /// (cos (U) * XDir + sin (U) * YDir)
    /// where Loc is the origin of the placement plane (XAxis, YAxis)
    /// XDir is the direction of the XAxis and YDir the direction of
    /// the YAxis and ZDir the direction of the ZAxis.
    /// </summary>
    void D0(double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// Computes the current point and the first derivatives in
    /// the directions U and V.
    /// </summary>
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// Computes the current point, the first and the second derivatives
    /// in the directions U and V.
    /// </summary>
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Computes the current point, the first,the second and the
    /// third derivatives in the directions U and V.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the direction u and
    /// Nv in the direction v.
    /// Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
    /// </summary>
    Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Applies the transformation T to this torus.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this torus.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_ToroidalSurface^ CreateDowncasted(::Geom_ToroidalSurface* instance);
}; // class Geom_ToroidalSurface

//---------------------------------------------------------------------
//  Class  Geom_Transformation
//---------------------------------------------------------------------
/// <summary>
/// Describes how to construct the following elementary transformations
/// - translations,
/// - rotations,
/// - symmetries,
/// - scales.
/// The Transformation class can also be used to
/// construct complex transformations by combining these
/// elementary transformations.
/// However, these transformations can never change
/// the type of an object. For example, the projection
/// transformation can change a circle into an ellipse, and
/// therefore change the real type of the object. Such a
/// transformation is forbidden in this environment and
/// cannot be a Geom_Transformation.
/// The transformation can be represented as follow :
/// 
/// V1   V2   V3    T
/// | a11  a12  a13   a14 |   | x |      | x'|
/// | a21  a22  a23   a24 |   | y |      | y'|
/// | a31  a32  a33   a34 |   | z |   =  | z'|
/// |  0    0    0     1  |   | 1 |      | 1 |
/// 
/// where {V1, V2, V3} defines the vectorial part of the
/// transformation and T defines the translation part of
/// the transformation.
/// Note: Geom_Transformation transformations
/// provide the same kind of "geometric" services as
/// gp_Trsf ones but have more complex data structures.
/// The geometric objects provided by the Geom
/// package use gp_Trsf transformations in the syntaxes
/// Transform and Transformed.
/// Geom_Transformation transformations are used in
/// a context where they can be shared by several
/// objects contained inside a common data structure.
/// </summary>
public ref class Geom_Transformation sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Geom_Transformation_h
public:
    Include_Geom_Transformation_h
#endif

public:
    Geom_Transformation(::Geom_Transformation* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Geom_Transformation(::Geom_Transformation& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Geom_Transformation* NativeInstance
    {
        ::Geom_Transformation* get()
        {
            return static_cast<::Geom_Transformation*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an identity transformation.
    /// </summary>
    Geom_Transformation();
    /// <summary>
    /// Creates a transient copy of T.
    /// </summary>
    Geom_Transformation(Macad::Occt::Trsf T);
    /// <summary>
    /// Makes the transformation into a symmetrical transformation
    /// with respect to a point P.
    /// P is the center of the symmetry.
    /// </summary>
    void SetMirror(Macad::Occt::Pnt thePnt);
    /// <summary>
    /// Makes the transformation into a symmetrical transformation
    /// with respect to an axis A1.
    /// A1 is the center of the axial symmetry.
    /// </summary>
    void SetMirror(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Makes the transformation into a symmetrical transformation
    /// with respect to a plane.  The plane of the symmetry is
    /// defined with the axis placement A2. It is the plane
    /// (Location, XDirection, YDirection).
    /// </summary>
    void SetMirror(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Makes the transformation into a rotation.
    /// A1 is the axis rotation and Ang is the angular value
    /// of the rotation in radians.
    /// </summary>
    void SetRotation(Macad::Occt::Ax1 theA1, double theAng);
    /// <summary>
    /// Makes the transformation into a scale. P is the center of
    /// the scale and S is the scaling value.
    /// </summary>
    void SetScale(Macad::Occt::Pnt thePnt, double theScale);
    /// <summary>
    /// Makes a transformation allowing passage from the coordinate
    /// system "FromSystem1" to the coordinate system "ToSystem2".
    /// Example :
    /// In a C++ implementation :
    /// Real x1, y1, z1;  // are the coordinates of a point in the
    /// // local system FromSystem1
    /// Real x2, y2, z2;  // are the coordinates of a point in the
    /// // local system ToSystem2
    /// gp_Pnt P1 (x1, y1, z1)
    /// Geom_Transformation T;
    /// T.SetTransformation (FromSystem1, ToSystem2);
    /// gp_Pnt P2 = P1.Transformed (T);
    /// P2.Coord (x2, y2, z2);
    /// </summary>
    void SetTransformation(Macad::Occt::Ax3 theFromSystem1, Macad::Occt::Ax3 theToSystem2);
    /// <summary>
    /// Makes the transformation allowing passage from the basic
    /// coordinate system
    /// {P(0.,0.,0.), VX (1.,0.,0.), VY (0.,1.,0.), VZ (0., 0. ,1.) }
    /// to the local coordinate system defined with the Ax2 ToSystem.
    /// Same utilisation as the previous method. FromSystem1 is
    /// defaulted to the absolute coordinate system.
    /// </summary>
    void SetTransformation(Macad::Occt::Ax3 theToSystem);
    /// <summary>
    /// Makes the transformation into a translation.
    /// V is the vector of the translation.
    /// </summary>
    void SetTranslation(Macad::Occt::Vec theVec);
    /// <summary>
    /// Makes the transformation into a translation from the point
    /// P1 to the point P2.
    /// </summary>
    void SetTranslation(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Converts the gp_Trsf transformation T into this transformation.
    /// </summary>
    void SetTrsf(Macad::Occt::Trsf theTrsf);
    /// <summary>
    /// Checks whether this transformation is an indirect
    /// transformation: returns true if the determinant of the
    /// matrix of the vectorial part of the transformation is less than 0.
    /// </summary>
    bool IsNegative();
    /// <summary>
    /// Returns the nature of this transformation as a value
    /// of the gp_TrsfForm enumeration.
    /// </summary>
    Macad::Occt::TrsfForm Form();
    /// <summary>
    /// Returns the scale value of the transformation.
    /// </summary>
    double ScaleFactor();
    /// <summary>
    /// Returns a non transient copy of <me>.
    /// </summary>
    Macad::Occt::Trsf Trsf();
    /// <summary>
    /// Returns the coefficients of the global matrix of transformation.
    /// It is a 3 rows X 4 columns matrix.
    /// 
    /// Raised if  Row < 1 or Row > 3  or  Col < 1 or Col > 4
    /// </summary>
    double Value(int theRow, int theCol);
    /// <summary>
    /// Raised if the transformation is singular. This means that
    /// the ScaleFactor is lower or equal to Resolution from
    /// package gp.
    /// </summary>
    void Invert();
    /// <summary>
    /// Raised if the transformation is singular. This means that
    /// the ScaleFactor is lower or equal to Resolution from
    /// package gp.
    /// </summary>
    Macad::Occt::Geom_Transformation^ Inverted();
    /// <summary>
    /// Computes the transformation composed with Other and <me>.
    /// <me> * Other.
    /// Returns a new transformation
    /// </summary>
    Macad::Occt::Geom_Transformation^ Multiplied(Macad::Occt::Geom_Transformation^ Other);
    /// <summary>
    /// Computes the transformation composed with Other and <me> .
    /// <me> = <me> * Other.
    /// </summary>
    void Multiply(Macad::Occt::Geom_Transformation^ theOther);
    /// <summary>
    /// Computes the following composition of transformations
    /// if N > 0  <me> * <me> * .......* <me>.
    /// if N = 0  Identity
    /// if N < 0  <me>.Invert() * .........* <me>.Invert()
    /// 
    /// Raised if N < 0 and if the transformation is not inversible
    /// </summary>
    void Power(int N);
    /// <summary>
    /// Raised if N < 0 and if the transformation is not inversible
    /// </summary>
    Macad::Occt::Geom_Transformation^ Powered(int N);
    /// <summary>
    /// Computes the matrix of the transformation composed with
    /// <me> and Other.     <me> = Other * <me>
    /// </summary>
    void PreMultiply(Macad::Occt::Geom_Transformation^ Other);
    /// <summary>
    /// Applies the transformation <me> to the triplet {X, Y, Z}.
    /// </summary>
    void Transforms(double% theX, double% theY, double% theZ);
    /// <summary>
    /// Creates a new object which is a copy of this transformation.
    /// </summary>
    Macad::Occt::Geom_Transformation^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_Transformation^ CreateDowncasted(::Geom_Transformation* instance);
}; // class Geom_Transformation

//---------------------------------------------------------------------
//  Class  Geom_TrimmedCurve
//---------------------------------------------------------------------
/// <summary>
/// Describes a portion of a curve (termed the "basis
/// curve") limited by two parameter values inside the
/// parametric domain of the basis curve.
/// The trimmed curve is defined by:
/// - the basis curve, and
/// - the two parameter values which limit it.
/// The trimmed curve can either have the same
/// orientation as the basis curve or the opposite orientation.
/// </summary>
public ref class Geom_TrimmedCurve sealed
    : public Macad::Occt::Geom_BoundedCurve
{

#ifdef Include_Geom_TrimmedCurve_h
public:
    Include_Geom_TrimmedCurve_h
#endif

public:
    Geom_TrimmedCurve(::Geom_TrimmedCurve* nativeInstance)
        : Macad::Occt::Geom_BoundedCurve( nativeInstance )
    {}

    Geom_TrimmedCurve(::Geom_TrimmedCurve& nativeInstance)
        : Macad::Occt::Geom_BoundedCurve( nativeInstance )
    {}

    property ::Geom_TrimmedCurve* NativeInstance
    {
        ::Geom_TrimmedCurve* get()
        {
            return static_cast<::Geom_TrimmedCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a trimmed curve from the basis curve C
    /// which is limited between parameter values U1 and U2.
    /// Note: - U1 can be greater or less than U2; in both cases,
    /// the returned curve is oriented from U1 to U2.
    /// - If the basis curve C is periodic, there is an
    /// ambiguity because two parts are available. In this
    /// case, the trimmed curve has the same orientation
    /// as the basis curve if Sense is true (default value)
    /// or the opposite orientation if Sense is false.
    /// - If the curve is closed but not periodic, it is not
    /// possible to keep the part of the curve which
    /// includes the junction point (except if the junction
    /// point is at the beginning or at the end of the
    /// trimmed curve). If you tried to do this, you could
    /// alter the fundamental characteristics of the basis
    /// curve, which are used, for example, to compute
    /// the derivatives of the trimmed curve. The rules
    /// for a closed curve are therefore the same as
    /// those for an open curve.
    /// Warning: The trimmed curve is built from a copy of curve C.
    /// Therefore, when C is modified, the trimmed curve
    /// is not modified.
    /// - If the basis curve is periodic and theAdjustPeriodic is True,
    /// the bounds of the trimmed curve may be different from U1 and U2
    /// if the parametric origin of the basis curve is within
    /// the arc of the trimmed curve. In this case, the
    /// modified parameter will be equal to U1 or U2
    /// plus or minus the period.
    /// When theAdjustPeriodic is False, parameters U1 and U2 will be
    /// the same, without adjustment into the first period.
    /// Exceptions
    /// Standard_ConstructionError if:
    /// - C is not periodic and U1 or U2 is outside the
    /// bounds of C, or
    /// - U1 is equal to U2.
    /// </summary>
    Geom_TrimmedCurve(Macad::Occt::Geom_Curve^ C, double U1, double U2, bool Sense, bool theAdjustPeriodic);
    /// <summary>
    /// Constructs a trimmed curve from the basis curve C
    /// which is limited between parameter values U1 and U2.
    /// Note: - U1 can be greater or less than U2; in both cases,
    /// the returned curve is oriented from U1 to U2.
    /// - If the basis curve C is periodic, there is an
    /// ambiguity because two parts are available. In this
    /// case, the trimmed curve has the same orientation
    /// as the basis curve if Sense is true (default value)
    /// or the opposite orientation if Sense is false.
    /// - If the curve is closed but not periodic, it is not
    /// possible to keep the part of the curve which
    /// includes the junction point (except if the junction
    /// point is at the beginning or at the end of the
    /// trimmed curve). If you tried to do this, you could
    /// alter the fundamental characteristics of the basis
    /// curve, which are used, for example, to compute
    /// the derivatives of the trimmed curve. The rules
    /// for a closed curve are therefore the same as
    /// those for an open curve.
    /// Warning: The trimmed curve is built from a copy of curve C.
    /// Therefore, when C is modified, the trimmed curve
    /// is not modified.
    /// - If the basis curve is periodic and theAdjustPeriodic is True,
    /// the bounds of the trimmed curve may be different from U1 and U2
    /// if the parametric origin of the basis curve is within
    /// the arc of the trimmed curve. In this case, the
    /// modified parameter will be equal to U1 or U2
    /// plus or minus the period.
    /// When theAdjustPeriodic is False, parameters U1 and U2 will be
    /// the same, without adjustment into the first period.
    /// Exceptions
    /// Standard_ConstructionError if:
    /// - C is not periodic and U1 or U2 is outside the
    /// bounds of C, or
    /// - U1 is equal to U2.
    /// </summary>
    Geom_TrimmedCurve(Macad::Occt::Geom_Curve^ C, double U1, double U2, bool Sense);
    /// <summary>
    /// Constructs a trimmed curve from the basis curve C
    /// which is limited between parameter values U1 and U2.
    /// Note: - U1 can be greater or less than U2; in both cases,
    /// the returned curve is oriented from U1 to U2.
    /// - If the basis curve C is periodic, there is an
    /// ambiguity because two parts are available. In this
    /// case, the trimmed curve has the same orientation
    /// as the basis curve if Sense is true (default value)
    /// or the opposite orientation if Sense is false.
    /// - If the curve is closed but not periodic, it is not
    /// possible to keep the part of the curve which
    /// includes the junction point (except if the junction
    /// point is at the beginning or at the end of the
    /// trimmed curve). If you tried to do this, you could
    /// alter the fundamental characteristics of the basis
    /// curve, which are used, for example, to compute
    /// the derivatives of the trimmed curve. The rules
    /// for a closed curve are therefore the same as
    /// those for an open curve.
    /// Warning: The trimmed curve is built from a copy of curve C.
    /// Therefore, when C is modified, the trimmed curve
    /// is not modified.
    /// - If the basis curve is periodic and theAdjustPeriodic is True,
    /// the bounds of the trimmed curve may be different from U1 and U2
    /// if the parametric origin of the basis curve is within
    /// the arc of the trimmed curve. In this case, the
    /// modified parameter will be equal to U1 or U2
    /// plus or minus the period.
    /// When theAdjustPeriodic is False, parameters U1 and U2 will be
    /// the same, without adjustment into the first period.
    /// Exceptions
    /// Standard_ConstructionError if:
    /// - C is not periodic and U1 or U2 is outside the
    /// bounds of C, or
    /// - U1 is equal to U2.
    /// </summary>
    Geom_TrimmedCurve(Macad::Occt::Geom_Curve^ C, double U1, double U2);
    /// <summary>
    /// Changes the orientation of this trimmed curve.
    /// As a result:
    /// - the basis curve is reversed,
    /// - the start point of the initial curve becomes the
    /// end point of the reversed curve,
    /// - the end point of the initial curve becomes the
    /// start point of the reversed curve,
    /// - the first and last parameters are recomputed.
    /// If the trimmed curve was defined by:
    /// - a basis curve whose parameter range is [ 0., 1. ],
    /// - the two trim values U1 (first parameter) and U2 (last parameter),
    /// the reversed trimmed curve is defined by:
    /// - the reversed basis curve, whose parameter range is still [ 0., 1. ],
    /// - the two trim values 1. - U2 (first parameter) and 1. - U1 (last parameter).
    /// </summary>
    void Reverse();
    /// <summary>
    /// Computes the parameter on the reversed curve for
    /// the point of parameter U on this trimmed curve.
    /// </summary>
    double ReversedParameter(double U);
    /// <summary>
    /// Changes this trimmed curve, by redefining the
    /// parameter values U1 and U2 which limit its basis curve.
    /// Note: If the basis curve is periodic, the trimmed curve
    /// has the same orientation as the basis curve if Sense
    /// is true (default value) or the opposite orientation if Sense is false.
    /// Warning
    /// If the basis curve is periodic and theAdjustPeriodic is True,
    /// the bounds of the trimmed curve may be different from U1 and U2 if the
    /// parametric origin of the basis curve is within the arc of
    /// the trimmed curve. In this case, the modified
    /// parameter will be equal to U1 or U2 plus or minus the period.
    /// When theAdjustPeriodic is False, parameters U1 and U2 will be
    /// the same, without adjustment into the first period.
    /// Exceptions
    /// Standard_ConstructionError if:
    /// - the basis curve is not periodic, and either U1 or U2
    /// are outside the bounds of the basis curve, or
    /// - U1 is equal to U2.
    /// </summary>
    void SetTrim(double U1, double U2, bool Sense, bool theAdjustPeriodic);
    /// <summary>
    /// Changes this trimmed curve, by redefining the
    /// parameter values U1 and U2 which limit its basis curve.
    /// Note: If the basis curve is periodic, the trimmed curve
    /// has the same orientation as the basis curve if Sense
    /// is true (default value) or the opposite orientation if Sense is false.
    /// Warning
    /// If the basis curve is periodic and theAdjustPeriodic is True,
    /// the bounds of the trimmed curve may be different from U1 and U2 if the
    /// parametric origin of the basis curve is within the arc of
    /// the trimmed curve. In this case, the modified
    /// parameter will be equal to U1 or U2 plus or minus the period.
    /// When theAdjustPeriodic is False, parameters U1 and U2 will be
    /// the same, without adjustment into the first period.
    /// Exceptions
    /// Standard_ConstructionError if:
    /// - the basis curve is not periodic, and either U1 or U2
    /// are outside the bounds of the basis curve, or
    /// - U1 is equal to U2.
    /// </summary>
    void SetTrim(double U1, double U2, bool Sense);
    /// <summary>
    /// Changes this trimmed curve, by redefining the
    /// parameter values U1 and U2 which limit its basis curve.
    /// Note: If the basis curve is periodic, the trimmed curve
    /// has the same orientation as the basis curve if Sense
    /// is true (default value) or the opposite orientation if Sense is false.
    /// Warning
    /// If the basis curve is periodic and theAdjustPeriodic is True,
    /// the bounds of the trimmed curve may be different from U1 and U2 if the
    /// parametric origin of the basis curve is within the arc of
    /// the trimmed curve. In this case, the modified
    /// parameter will be equal to U1 or U2 plus or minus the period.
    /// When theAdjustPeriodic is False, parameters U1 and U2 will be
    /// the same, without adjustment into the first period.
    /// Exceptions
    /// Standard_ConstructionError if:
    /// - the basis curve is not periodic, and either U1 or U2
    /// are outside the bounds of the basis curve, or
    /// - U1 is equal to U2.
    /// </summary>
    void SetTrim(double U1, double U2);
    /// <summary>
    /// Returns the basis curve.
    /// Warning
    /// This function does not return a constant reference.
    /// Consequently, any modification of the returned value
    /// directly modifies the trimmed curve.
    /// </summary>
    Macad::Occt::Geom_Curve^ BasisCurve();
    /// <summary>
    /// Returns the continuity of the curve :
    /// C0 : only geometric continuity,
    /// C1 : continuity of the first derivative all along the Curve,
    /// C2 : continuity of the second derivative all along the Curve,
    /// C3 : continuity of the third derivative all along the Curve,
    /// CN : the order of continuity is infinite.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns true if the degree of continuity of the basis
    /// curve of this trimmed curve is at least N. A trimmed
    /// curve is at least "C0" continuous.
    /// Warnings :
    /// The continuity of the trimmed curve can be greater than
    /// the continuity of the basis curve because you consider
    /// only a part of the basis curve.
    /// Raised if N < 0.
    /// </summary>
    bool IsCN(int N);
    /// <summary>
    /// Returns the end point of <me>. This point is the
    /// evaluation of the curve for the "LastParameter".
    /// </summary>
    Macad::Occt::Pnt EndPoint();
    /// <summary>
    /// Returns the value of the first parameter of <me>.
    /// The first parameter is the parameter of the "StartPoint"
    /// of the trimmed curve.
    /// </summary>
    double FirstParameter();
    /// <summary>
    /// Returns True if the distance between the StartPoint and
    /// the EndPoint is lower or equal to Resolution from package gp.
    /// </summary>
    bool IsClosed();
    /// <summary>
    /// Always returns FALSE (independently of the type of basis curve).
    /// </summary>
    bool IsPeriodic();
    /// <summary>
    /// Returns the period of the basis curve of this trimmed curve.
    /// Exceptions
    /// Standard_NoSuchObject if the basis curve is not periodic.
    /// </summary>
    double Period();
    /// <summary>
    /// Returns the value of the last parameter of <me>.
    /// The last parameter is the parameter of the "EndPoint" of the
    /// trimmed curve.
    /// </summary>
    double LastParameter();
    /// <summary>
    /// Returns the start point of <me>.
    /// This point is the evaluation of the curve from the
    /// "FirstParameter".
    /// value and derivatives
    /// Warnings :
    /// The returned derivatives have the same orientation as the
    /// derivatives of the basis curve even if the trimmed curve
    /// has not the same orientation as the basis curve.
    /// </summary>
    Macad::Occt::Pnt StartPoint();
    /// <summary>
    /// Returns in P the point of parameter U.
    /// 
    /// If the basis curve is an OffsetCurve sometimes it is not
    /// possible to do the evaluation of the curve at the parameter
    /// U (see class OffsetCurve).
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    /// <summary>
    /// Raised if the continuity of the curve is not C1.
    /// </summary>
    void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    /// <summary>
    /// Raised if the continuity of the curve is not C2.
    /// </summary>
    void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    /// <summary>
    /// Raised if the continuity of the curve is not C3.
    /// </summary>
    void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// N is the order of derivation.
    /// Raised if the continuity of the curve is not CN.
    /// Raised if N < 1.
    /// geometric transformations
    /// </summary>
    Macad::Occt::Vec DN(double U, int N);
    /// <summary>
    /// Applies the transformation T to this trimmed curve.
    /// Warning The basis curve is also modified.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Returns the  parameter on the  transformed  curve for
    /// the transform of the point of parameter U on <me>.
    /// 
    /// me->Transformed(T)->Value(me->TransformedParameter(U,T))
    /// 
    /// is the same point as
    /// 
    /// me->Value(U).Transformed(T)
    /// 
    /// This methods calls the basis curve method.
    /// </summary>
    double TransformedParameter(double U, Macad::Occt::Trsf T);
    /// <summary>
    /// Returns a  coefficient to compute the parameter on
    /// the transformed  curve  for  the transform  of the
    /// point on <me>.
    /// 
    /// Transformed(T)->Value(U * ParametricTransformation(T))
    /// 
    /// is the same point as
    /// 
    /// Value(U).Transformed(T)
    /// 
    /// This methods calls the basis curve method.
    /// </summary>
    double ParametricTransformation(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this trimmed curve.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Geom_TrimmedCurve^ CreateDowncasted(::Geom_TrimmedCurve* instance);
}; // class Geom_TrimmedCurve

//---------------------------------------------------------------------
//  Class  Geom_UndefinedDerivative
//---------------------------------------------------------------------
public ref class Geom_UndefinedDerivative sealed
    : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Geom_UndefinedDerivative_h
public:
    Include_Geom_UndefinedDerivative_h
#endif

public:
    Geom_UndefinedDerivative(::Geom_UndefinedDerivative* nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    Geom_UndefinedDerivative(::Geom_UndefinedDerivative& nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    property ::Geom_UndefinedDerivative* NativeInstance
    {
        ::Geom_UndefinedDerivative* get()
        {
            return static_cast<::Geom_UndefinedDerivative*>(_NativeInstance);
        }
    }

public:
    Geom_UndefinedDerivative();
    Geom_UndefinedDerivative(System::String^ theMessage);
    Geom_UndefinedDerivative(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Geom_UndefinedDerivative^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Geom_UndefinedDerivative^ NewInstance();
    static Macad::Occt::Geom_UndefinedDerivative^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Geom_UndefinedDerivative^ CreateDowncasted(::Geom_UndefinedDerivative* instance);
}; // class Geom_UndefinedDerivative

//---------------------------------------------------------------------
//  Class  Geom_UndefinedValue
//---------------------------------------------------------------------
public ref class Geom_UndefinedValue sealed
    : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Geom_UndefinedValue_h
public:
    Include_Geom_UndefinedValue_h
#endif

public:
    Geom_UndefinedValue(::Geom_UndefinedValue* nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    Geom_UndefinedValue(::Geom_UndefinedValue& nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    property ::Geom_UndefinedValue* NativeInstance
    {
        ::Geom_UndefinedValue* get()
        {
            return static_cast<::Geom_UndefinedValue*>(_NativeInstance);
        }
    }

public:
    Geom_UndefinedValue();
    Geom_UndefinedValue(System::String^ theMessage);
    Geom_UndefinedValue(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Geom_UndefinedValue^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Geom_UndefinedValue^ NewInstance();
    static Macad::Occt::Geom_UndefinedValue^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Geom_UndefinedValue^ CreateDowncasted(::Geom_UndefinedValue* instance);
}; // class Geom_UndefinedValue

//---------------------------------------------------------------------
//  Class  Geom_VectorWithMagnitude
//---------------------------------------------------------------------
/// <summary>
/// Defines a vector with magnitude.
/// A vector with magnitude can have a zero length.
/// </summary>
public ref class Geom_VectorWithMagnitude sealed
    : public Macad::Occt::Geom_Vector
{

#ifdef Include_Geom_VectorWithMagnitude_h
public:
    Include_Geom_VectorWithMagnitude_h
#endif

public:
    Geom_VectorWithMagnitude(::Geom_VectorWithMagnitude* nativeInstance)
        : Macad::Occt::Geom_Vector( nativeInstance )
    {}

    Geom_VectorWithMagnitude(::Geom_VectorWithMagnitude& nativeInstance)
        : Macad::Occt::Geom_Vector( nativeInstance )
    {}

    property ::Geom_VectorWithMagnitude* NativeInstance
    {
        ::Geom_VectorWithMagnitude* get()
        {
            return static_cast<::Geom_VectorWithMagnitude*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a transient copy of V.
    /// </summary>
    Geom_VectorWithMagnitude(Macad::Occt::Vec V);
    /// <summary>
    /// Creates a vector with three cartesian coordinates.
    /// </summary>
    Geom_VectorWithMagnitude(double X, double Y, double Z);
    /// <summary>
    /// Creates a vector from the point P1 to the point P2.
    /// The magnitude of the vector is the distance between P1 and P2
    /// </summary>
    Geom_VectorWithMagnitude(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Assigns the values X, Y and Z to the coordinates of this vector.
    /// </summary>
    void SetCoord(double X, double Y, double Z);
    /// <summary>
    /// Converts the gp_Vec vector V into this vector.
    /// </summary>
    void SetVec(Macad::Occt::Vec V);
    /// <summary>
    /// Changes the X coordinate of <me>.
    /// </summary>
    void SetX(double X);
    /// <summary>
    /// Changes the Y coordinate of <me>
    /// </summary>
    void SetY(double Y);
    /// <summary>
    /// Changes the Z coordinate of <me>.
    /// </summary>
    void SetZ(double Z);
    /// <summary>
    /// Returns the magnitude of <me>.
    /// </summary>
    double Magnitude();
    /// <summary>
    /// Returns the square magnitude of <me>.
    /// </summary>
    double SquareMagnitude();
    /// <summary>
    /// Adds the Vector Other to <me>.
    /// </summary>
    void Add(Macad::Occt::Geom_Vector^ Other);
    /// <summary>
    /// Adds the vector Other to <me>.
    /// </summary>
    Macad::Occt::Geom_VectorWithMagnitude^ Added(Macad::Occt::Geom_Vector^ Other);
    /// <summary>
    /// Computes the cross product  between <me> and Other
    /// <me> ^ Other.
    /// </summary>
    void Cross(Macad::Occt::Geom_Vector^ Other);
    /// <summary>
    /// Computes the cross product  between <me> and Other
    /// <me> ^ Other. A new vector is returned.
    /// </summary>
    Macad::Occt::Geom_Vector^ Crossed(Macad::Occt::Geom_Vector^ Other);
    /// <summary>
    /// Computes the triple vector product  <me> ^ (V1 ^ V2).
    /// </summary>
    void CrossCross(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
    /// <summary>
    /// Computes the triple vector product  <me> ^ (V1 ^ V2).
    /// A new vector is returned.
    /// </summary>
    Macad::Occt::Geom_Vector^ CrossCrossed(Macad::Occt::Geom_Vector^ V1, Macad::Occt::Geom_Vector^ V2);
    /// <summary>
    /// Divides <me> by a scalar.
    /// </summary>
    void Divide(double Scalar);
    /// <summary>
    /// Divides <me> by a scalar. A new vector is returned.
    /// </summary>
    Macad::Occt::Geom_VectorWithMagnitude^ Divided(double Scalar);
    /// <summary>
    /// Computes the product of the vector <me> by a scalar.
    /// A new vector is returned.
    /// </summary>
    Macad::Occt::Geom_VectorWithMagnitude^ Multiplied(double Scalar);
    /// <summary>
    /// Computes the product of the vector <me> by a scalar.
    /// </summary>
    void Multiply(double Scalar);
    /// <summary>
    /// Normalizes <me>.
    /// 
    /// Raised if the magnitude of the vector is lower or equal to
    /// Resolution from package gp.
    /// </summary>
    void Normalize();
    /// <summary>
    /// Returns a copy of <me> Normalized.
    /// 
    /// Raised if the magnitude of the vector is lower or equal to
    /// Resolution from package gp.
    /// </summary>
    Macad::Occt::Geom_VectorWithMagnitude^ Normalized();
    /// <summary>
    /// Subtracts the Vector Other to <me>.
    /// </summary>
    void Subtract(Macad::Occt::Geom_Vector^ Other);
    /// <summary>
    /// Subtracts the vector Other to <me>. A new vector is returned.
    /// </summary>
    Macad::Occt::Geom_VectorWithMagnitude^ Subtracted(Macad::Occt::Geom_Vector^ Other);
    /// <summary>
    /// Applies the transformation T to this vector.
    /// </summary>
    void Transform(Macad::Occt::Trsf T);
    /// <summary>
    /// Creates a new object which is a copy of this vector.
    /// </summary>
    Macad::Occt::Geom_Geometry^ Copy();
    static Macad::Occt::Geom_VectorWithMagnitude^ CreateDowncasted(::Geom_VectorWithMagnitude* instance);
}; // class Geom_VectorWithMagnitude

}; // namespace Occt
}; // namespace Macad
