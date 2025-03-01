// Generated wrapper code for package IntAna

#pragma once

#include "NCollection.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  IntAna_ResultType
//---------------------------------------------------------------------
public enum class IntAna_ResultType
{
    Point = 0,
    Line = 1,
    Circle = 2,
    PointAndCircle = 3,
    Ellipse = 4,
    Parabola = 5,
    Hyperbola = 6,
    Empty = 7,
    Same = 8,
    NoGeometricSolution = 9
}; // enum  class IntAna_ResultType

//---------------------------------------------------------------------
//  Class  IntAna_ListOfCurve
//---------------------------------------------------------------------
public ref class IntAna_ListOfCurve sealed
    : public Macad::Occt::NCollection_BaseList
    , public IEnumerable<Macad::Occt::IntAna_Curve^>
{

#ifdef Include_IntAna_ListOfCurve_h
public:
    Include_IntAna_ListOfCurve_h
#endif

public:
    IntAna_ListOfCurve(::IntAna_ListOfCurve* nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    IntAna_ListOfCurve(::IntAna_ListOfCurve& nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    property ::IntAna_ListOfCurve* NativeInstance
    {
        ::IntAna_ListOfCurve* get()
        {
            return static_cast<::IntAna_ListOfCurve*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::IteratorEnumerator<Macad::Occt::IntAna_Curve^, ::IntAna_ListOfCurve::Iterator>
    {

#ifdef Include_IntAna_ListOfCurve_Iterator_h
    public:
        Include_IntAna_ListOfCurve_Iterator_h
#endif

    public:
        Iterator(::IntAna_ListOfCurve::Iterator* nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::IntAna_Curve^, ::IntAna_ListOfCurve::Iterator>( nativeInstance, true )
        {}

        Iterator(::IntAna_ListOfCurve::Iterator& nativeInstance)
            : Macad::Occt::IteratorEnumerator<Macad::Occt::IntAna_Curve^, ::IntAna_ListOfCurve::Iterator>( &nativeInstance, false )
        {}

        property ::IntAna_ListOfCurve::Iterator* NativeInstance
        {
            ::IntAna_ListOfCurve::Iterator* get()
            {
                return static_cast<::IntAna_ListOfCurve::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More() override;
        void Next() override;
        Macad::Occt::IntAna_Curve^ Value() override;
        Macad::Occt::IntAna_Curve^ ChangeValue();
    }; // class Iterator

    IntAna_ListOfCurve();
    IntAna_ListOfCurve(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    Macad::Occt::IntAna_ListOfCurve^ Assign(Macad::Occt::IntAna_ListOfCurve^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::IntAna_Curve^ First();
    Macad::Occt::IntAna_Curve^ Last();
    Macad::Occt::IntAna_Curve^ Append(Macad::Occt::IntAna_Curve^ theItem);
    Macad::Occt::IntAna_Curve^ Prepend(Macad::Occt::IntAna_Curve^ theItem);
    void RemoveFirst();
    void Remove(Macad::Occt::IntAna_ListOfCurve::Iterator^ theIter);
    Macad::Occt::IntAna_Curve^ InsertBefore(Macad::Occt::IntAna_Curve^ theItem, Macad::Occt::IntAna_ListOfCurve::Iterator^ theIter);
    Macad::Occt::IntAna_Curve^ InsertAfter(Macad::Occt::IntAna_Curve^ theItem, Macad::Occt::IntAna_ListOfCurve::Iterator^ theIter);
    void Reverse();
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::IntAna_Curve^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class IntAna_ListOfCurve

//---------------------------------------------------------------------
//  Class  IntAna_Curve
//---------------------------------------------------------------------
/// <summary>
/// Definition of a parametric Curve which is the result
/// of the intersection between two quadrics.
/// </summary>
public ref class IntAna_Curve sealed
    : public Macad::Occt::BaseClass<::IntAna_Curve>
{

#ifdef Include_IntAna_Curve_h
public:
    Include_IntAna_Curve_h
#endif

public:
    IntAna_Curve(::IntAna_Curve* nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_Curve>( nativeInstance, true )
    {}

    IntAna_Curve(::IntAna_Curve& nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_Curve>( &nativeInstance, false )
    {}

    property ::IntAna_Curve* NativeInstance
    {
        ::IntAna_Curve* get()
        {
            return static_cast<::IntAna_Curve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty Constructor
    /// </summary>
    IntAna_Curve();
    /// <summary>
    /// Sets the parameters used to compute Points and Derivative
    /// on the curve.
    /// </summary>
    void SetCylinderQuadValues(Macad::Occt::gp_Cylinder^ Cylinder, double Qxx, double Qyy, double Qzz, double Qxy, double Qxz, double Qyz, double Qx, double Qy, double Qz, double Q1, double Tol, double DomInf, double DomSup, bool TwoZForATheta, bool ZIsPositive);
    /// <summary>
    /// Sets  the parameters used    to compute Points  and
    /// Derivative on the curve.
    /// </summary>
    void SetConeQuadValues(Macad::Occt::gp_Cone^ Cone, double Qxx, double Qyy, double Qzz, double Qxy, double Qxz, double Qyz, double Qx, double Qy, double Qz, double Q1, double Tol, double DomInf, double DomSup, bool TwoZForATheta, bool ZIsPositive);
    /// <summary>
    /// Returns TRUE if the curve is not  infinite  at the
    /// last parameter or at the first parameter of the domain.
    /// </summary>
    bool IsOpen();
    /// <summary>
    /// Returns the parametric domain of the curve.
    /// </summary>
    void Domain(double% theFirst, double% theLast);
    /// <summary>
    /// Returns TRUE if the function is constant.
    /// </summary>
    bool IsConstant();
    /// <summary>
    /// Returns TRUE if the domain is open at the beginning.
    /// </summary>
    bool IsFirstOpen();
    /// <summary>
    /// Returns TRUE if the domain is open at the end.
    /// </summary>
    bool IsLastOpen();
    /// <summary>
    /// Returns the point at parameter Theta on the curve.
    /// </summary>
    Macad::Occt::Pnt Value(double Theta);
    /// <summary>
    /// Returns the point and the first derivative at parameter
    /// Theta on the curve.
    /// </summary>
    bool D1u(double Theta, Macad::Occt::Pnt% P, Macad::Occt::Vec% V);
    /// <summary>
    /// Tries to find the parameter of the point P on the curve.
    /// If the method returns False, the "projection" is
    /// impossible.
    /// If the method returns True at least one parameter has been found.
    /// theParams is always sorted in ascending order.
    /// </summary>
    void FindParameter(Macad::Occt::Pnt P, Macad::Occt::TColStd_ListOfReal^ theParams);
    /// <summary>
    /// If flag is True, the Curve is not defined at the
    /// first parameter of its domain.
    /// </summary>
    void SetIsFirstOpen(bool Flag);
    /// <summary>
    /// If flag is True, the Curve is not defined at the
    /// first parameter of its domain.
    /// </summary>
    void SetIsLastOpen(bool Flag);
    /// <summary>
    /// Trims this curve
    /// </summary>
    void SetDomain(double theFirst, double theLast);
}; // class IntAna_Curve

//---------------------------------------------------------------------
//  Class  IntAna_Int3Pln
//---------------------------------------------------------------------
/// <summary>
/// Intersection between 3 planes. The algorithm searches
/// for an intersection point. If two of the planes are
/// parallel or identical, IsEmpty returns TRUE.
/// </summary>
public ref class IntAna_Int3Pln sealed
    : public Macad::Occt::BaseClass<::IntAna_Int3Pln>
{

#ifdef Include_IntAna_Int3Pln_h
public:
    Include_IntAna_Int3Pln_h
#endif

public:
    IntAna_Int3Pln(::IntAna_Int3Pln* nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_Int3Pln>( nativeInstance, true )
    {}

    IntAna_Int3Pln(::IntAna_Int3Pln& nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_Int3Pln>( &nativeInstance, false )
    {}

    property ::IntAna_Int3Pln* NativeInstance
    {
        ::IntAna_Int3Pln* get()
        {
            return static_cast<::IntAna_Int3Pln*>(_NativeInstance);
        }
    }

public:
    IntAna_Int3Pln();
    /// <summary>
    /// Determination of the intersection point between
    /// 3 planes.
    /// </summary>
    IntAna_Int3Pln(Macad::Occt::Pln P1, Macad::Occt::Pln P2, Macad::Occt::Pln P3);
    /// <summary>
    /// Determination of the intersection point between
    /// 3 planes.
    /// </summary>
    void Perform(Macad::Occt::Pln P1, Macad::Occt::Pln P2, Macad::Occt::Pln P3);
    /// <summary>
    /// Returns True if the computation was successful.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns TRUE if there is no intersection POINT.
    /// If 2 planes are identical or parallel, IsEmpty
    /// will return TRUE.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// Returns the intersection point.
    /// </summary>
    Macad::Occt::Pnt Value();
}; // class IntAna_Int3Pln

//---------------------------------------------------------------------
//  Class  IntAna_Quadric
//---------------------------------------------------------------------
/// <summary>
/// This class provides a description of Quadrics by their
/// Coefficients in natural coordinate system.
/// </summary>
public ref class IntAna_Quadric sealed
    : public Macad::Occt::BaseClass<::IntAna_Quadric>
{

#ifdef Include_IntAna_Quadric_h
public:
    Include_IntAna_Quadric_h
#endif

public:
    IntAna_Quadric(::IntAna_Quadric* nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_Quadric>( nativeInstance, true )
    {}

    IntAna_Quadric(::IntAna_Quadric& nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_Quadric>( &nativeInstance, false )
    {}

    property ::IntAna_Quadric* NativeInstance
    {
        ::IntAna_Quadric* get()
        {
            return static_cast<::IntAna_Quadric*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty Constructor
    /// </summary>
    IntAna_Quadric();
    /// <summary>
    /// Creates a Quadric from a Pln
    /// </summary>
    IntAna_Quadric(Macad::Occt::Pln P);
    /// <summary>
    /// Creates a Quadric from a Sphere
    /// </summary>
    IntAna_Quadric(Macad::Occt::gp_Sphere^ Sph);
    /// <summary>
    /// Creates a Quadric from a Cylinder
    /// </summary>
    IntAna_Quadric(Macad::Occt::gp_Cylinder^ Cyl);
    /// <summary>
    /// Creates a Quadric from a Cone
    /// </summary>
    IntAna_Quadric(Macad::Occt::gp_Cone^ Cone);
    /// <summary>
    /// Initializes the quadric with a Pln
    /// </summary>
    void SetQuadric(Macad::Occt::Pln P);
    /// <summary>
    /// Initialize the quadric with a Sphere
    /// </summary>
    void SetQuadric(Macad::Occt::gp_Sphere^ Sph);
    /// <summary>
    /// Initializes the quadric with a Cone
    /// </summary>
    void SetQuadric(Macad::Occt::gp_Cone^ Con);
    /// <summary>
    /// Initializes the quadric with a Cylinder
    /// </summary>
    void SetQuadric(Macad::Occt::gp_Cylinder^ Cyl);
    /// <summary>
    /// Returns the coefficients of the polynomial equation
    /// which define the quadric:
    /// xCXX x**2 + xCYY y**2 + xCZZ z**2
    /// + 2 ( xCXY x y  + xCXZ x z  + xCYZ y z  )
    /// + 2 ( xCX x + xCY y + xCZ z )
    /// + xCCte
    /// </summary>
    void Coefficients(double% xCXX, double% xCYY, double% xCZZ, double% xCXY, double% xCXZ, double% xCYZ, double% xCX, double% xCY, double% xCZ, double% xCCte);
    /// <summary>
    /// Returns the coefficients of the polynomial equation
    /// ( written in the natural coordinates system )
    /// in the local coordinates system defined by Axis
    /// </summary>
    void NewCoefficients(double% xCXX, double% xCYY, double% xCZZ, double% xCXY, double% xCXZ, double% xCYZ, double% xCX, double% xCY, double% xCZ, double% xCCte, Macad::Occt::Ax3 Axis);
    /* Method skipped due to unknown mapping: NCollection_List<gp_Pnt> SpecialPoints() */
}; // class IntAna_Quadric

//---------------------------------------------------------------------
//  Class  IntAna_IntConicQuad
//---------------------------------------------------------------------
/// <summary>
/// This class provides the analytic intersection between
/// a conic defined as an element of gp (Lin,Circ,Elips,
/// Parab,Hypr) and a quadric as defined in the class
/// Quadric from IntAna.
/// The intersection between a conic and a plane is treated
/// as a special case.
/// 
/// The result of the intersection are points (Pnt from
/// gp), associated with the parameter on the conic.
/// 
/// A call to an Intersection  L:Lin from gp and
/// SPH: Sphere from gp can be written either :
/// IntAna_IntConicQuad Inter(L,IntAna_Quadric(SPH))
/// or :
/// IntAna_IntConicQuad Inter(L,SPH) (it is necessary
/// to include IntAna_Quadric.hxx in this case)
/// </summary>
public ref class IntAna_IntConicQuad sealed
    : public Macad::Occt::BaseClass<::IntAna_IntConicQuad>
{

#ifdef Include_IntAna_IntConicQuad_h
public:
    Include_IntAna_IntConicQuad_h
#endif

public:
    IntAna_IntConicQuad(::IntAna_IntConicQuad* nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_IntConicQuad>( nativeInstance, true )
    {}

    IntAna_IntConicQuad(::IntAna_IntConicQuad& nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_IntConicQuad>( &nativeInstance, false )
    {}

    property ::IntAna_IntConicQuad* NativeInstance
    {
        ::IntAna_IntConicQuad* get()
        {
            return static_cast<::IntAna_IntConicQuad*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    IntAna_IntConicQuad();
    /// <summary>
    /// Creates the intersection between a line and a quadric.
    /// </summary>
    IntAna_IntConicQuad(Macad::Occt::gp_Lin^ L, Macad::Occt::IntAna_Quadric^ Q);
    /// <summary>
    /// Creates the intersection between a circle and a quadric.
    /// </summary>
    IntAna_IntConicQuad(Macad::Occt::gp_Circ^ C, Macad::Occt::IntAna_Quadric^ Q);
    /// <summary>
    /// Creates the intersection between an ellipse and a quadric.
    /// </summary>
    IntAna_IntConicQuad(Macad::Occt::gp_Elips^ E, Macad::Occt::IntAna_Quadric^ Q);
    /// <summary>
    /// Creates the intersection between a parabola and a quadric.
    /// </summary>
    IntAna_IntConicQuad(Macad::Occt::gp_Parab^ P, Macad::Occt::IntAna_Quadric^ Q);
    /// <summary>
    /// Creates the intersection between an hyperbola and
    /// a quadric.
    /// </summary>
    IntAna_IntConicQuad(Macad::Occt::gp_Hypr^ H, Macad::Occt::IntAna_Quadric^ Q);
    /// <summary>
    /// Intersection between a line and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// Tol is used to check the distance between line and plane
    /// on the distance <Len> from the origin of the line.
    /// </summary>
    IntAna_IntConicQuad(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang, double Tol, double Len);
    /// <summary>
    /// Intersection between a line and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// Tol is used to check the distance between line and plane
    /// on the distance <Len> from the origin of the line.
    /// </summary>
    IntAna_IntConicQuad(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang, double Tol);
    /// <summary>
    /// Intersection between a line and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// Tol is used to check the distance between line and plane
    /// on the distance <Len> from the origin of the line.
    /// </summary>
    IntAna_IntConicQuad(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang);
    /// <summary>
    /// Intersection between a circle and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// Tol is used to determine if a distance is null.
    /// </summary>
    IntAna_IntConicQuad(Macad::Occt::gp_Circ^ C, Macad::Occt::Pln P, double Tolang, double Tol);
    /// <summary>
    /// Intersection between an ellipse and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// Tol is used to determine if a distance is null.
    /// </summary>
    IntAna_IntConicQuad(Macad::Occt::gp_Elips^ E, Macad::Occt::Pln P, double Tolang, double Tol);
    /// <summary>
    /// Intersection between a parabola and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// </summary>
    IntAna_IntConicQuad(Macad::Occt::gp_Parab^ Pb, Macad::Occt::Pln P, double Tolang);
    /// <summary>
    /// Intersection between an hyperbola and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// </summary>
    IntAna_IntConicQuad(Macad::Occt::gp_Hypr^ H, Macad::Occt::Pln P, double Tolang);
    /// <summary>
    /// Intersects a line and a quadric.
    /// </summary>
    void Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::IntAna_Quadric^ Q);
    /// <summary>
    /// Intersects a circle and a quadric.
    /// </summary>
    void Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::IntAna_Quadric^ Q);
    /// <summary>
    /// Intersects an ellipse and a quadric.
    /// </summary>
    void Perform(Macad::Occt::gp_Elips^ E, Macad::Occt::IntAna_Quadric^ Q);
    /// <summary>
    /// Intersects a parabola and a quadric.
    /// </summary>
    void Perform(Macad::Occt::gp_Parab^ P, Macad::Occt::IntAna_Quadric^ Q);
    /// <summary>
    /// Intersects an hyperbola and a quadric.
    /// </summary>
    void Perform(Macad::Occt::gp_Hypr^ H, Macad::Occt::IntAna_Quadric^ Q);
    /// <summary>
    /// Intersects a line and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// Tol is used to check the distance between line and plane
    /// on the distance <Len> from the origin of the line.
    /// </summary>
    void Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang, double Tol, double Len);
    /// <summary>
    /// Intersects a line and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// Tol is used to check the distance between line and plane
    /// on the distance <Len> from the origin of the line.
    /// </summary>
    void Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang, double Tol);
    /// <summary>
    /// Intersects a line and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// Tol is used to check the distance between line and plane
    /// on the distance <Len> from the origin of the line.
    /// </summary>
    void Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang);
    /// <summary>
    /// Intersects a circle and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// Tol is used to determine if a distance is null.
    /// </summary>
    void Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::Pln P, double Tolang, double Tol);
    /// <summary>
    /// Intersects an ellipse and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// Tol is used to determine if a distance is null.
    /// </summary>
    void Perform(Macad::Occt::gp_Elips^ E, Macad::Occt::Pln P, double Tolang, double Tol);
    /// <summary>
    /// Intersects a parabola and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// </summary>
    void Perform(Macad::Occt::gp_Parab^ Pb, Macad::Occt::Pln P, double Tolang);
    /// <summary>
    /// Intersects an hyperbola and a plane.
    /// Tolang is used to determine if the angle between two
    /// vectors is null.
    /// </summary>
    void Perform(Macad::Occt::gp_Hypr^ H, Macad::Occt::Pln P, double Tolang);
    /// <summary>
    /// Returns TRUE if the creation completed.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns TRUE if the conic is in the quadric.
    /// </summary>
    bool IsInQuadric();
    /// <summary>
    /// Returns TRUE if the line is in a quadric which
    /// is parallel to the quadric.
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the number of intersection point.
    /// </summary>
    int NbPoints();
    /// <summary>
    /// Returns the point of range N.
    /// </summary>
    Macad::Occt::Pnt Point(int N);
    /// <summary>
    /// Returns the parameter on the line of the intersection
    /// point of range N.
    /// </summary>
    double ParamOnConic(int N);
}; // class IntAna_IntConicQuad

//---------------------------------------------------------------------
//  Class  IntAna_IntLinTorus
//---------------------------------------------------------------------
/// <summary>
/// Intersection between a line and a torus.
/// </summary>
public ref class IntAna_IntLinTorus sealed
    : public Macad::Occt::BaseClass<::IntAna_IntLinTorus>
{

#ifdef Include_IntAna_IntLinTorus_h
public:
    Include_IntAna_IntLinTorus_h
#endif

public:
    IntAna_IntLinTorus(::IntAna_IntLinTorus* nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_IntLinTorus>( nativeInstance, true )
    {}

    IntAna_IntLinTorus(::IntAna_IntLinTorus& nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_IntLinTorus>( &nativeInstance, false )
    {}

    property ::IntAna_IntLinTorus* NativeInstance
    {
        ::IntAna_IntLinTorus* get()
        {
            return static_cast<::IntAna_IntLinTorus*>(_NativeInstance);
        }
    }

public:
    IntAna_IntLinTorus();
    /// <summary>
    /// Creates the intersection between a line and a torus.
    /// </summary>
    IntAna_IntLinTorus(Macad::Occt::gp_Lin^ L, Macad::Occt::gp_Torus^ T);
    /// <summary>
    /// Intersects a line and a torus.
    /// </summary>
    void Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::gp_Torus^ T);
    /// <summary>
    /// Returns True if the computation was successful.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of intersection points.
    /// </summary>
    int NbPoints();
    /// <summary>
    /// Returns the intersection point of range Index.
    /// </summary>
    Macad::Occt::Pnt Value(int Index);
    /// <summary>
    /// Returns the parameter on the line of the intersection
    /// point of range Index.
    /// </summary>
    double ParamOnLine(int Index);
    /// <summary>
    /// Returns the parameters on the torus of the intersection
    /// point of range Index.
    /// </summary>
    void ParamOnTorus(int Index, double% FI, double% THETA);
}; // class IntAna_IntLinTorus

//---------------------------------------------------------------------
//  Class  IntAna_IntQuadQuad
//---------------------------------------------------------------------
/// <summary>
/// This class provides the analytic intersection between a
/// cylinder or a cone from gp and another quadric, as defined
/// in the class Quadric from IntAna.
/// This algorithm is used when the geometric intersection
/// (class QuadQuadGeo from IntAna) returns no geometric
/// solution.
/// The result of the intersection may be
/// - Curves as defined in the class Curve from IntAna
/// - Points (Pnt from gp)
/// </summary>
public ref class IntAna_IntQuadQuad sealed
    : public Macad::Occt::BaseClass<::IntAna_IntQuadQuad>
{

#ifdef Include_IntAna_IntQuadQuad_h
public:
    Include_IntAna_IntQuadQuad_h
#endif

public:
    IntAna_IntQuadQuad(::IntAna_IntQuadQuad* nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_IntQuadQuad>( nativeInstance, true )
    {}

    IntAna_IntQuadQuad(::IntAna_IntQuadQuad& nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_IntQuadQuad>( &nativeInstance, false )
    {}

    property ::IntAna_IntQuadQuad* NativeInstance
    {
        ::IntAna_IntQuadQuad* get()
        {
            return static_cast<::IntAna_IntQuadQuad*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty Constructor
    /// </summary>
    IntAna_IntQuadQuad();
    /// <summary>
    /// Creates the intersection between a cylinder and a quadric .
    /// Tol est a definir plus precisemment.
    /// </summary>
    IntAna_IntQuadQuad(Macad::Occt::gp_Cylinder^ C, Macad::Occt::IntAna_Quadric^ Q, double Tol);
    /// <summary>
    /// Creates the intersection between a cone and a quadric.
    /// Tol est a definir plus precisemment.
    /// </summary>
    IntAna_IntQuadQuad(Macad::Occt::gp_Cone^ C, Macad::Occt::IntAna_Quadric^ Q, double Tol);
    /// <summary>
    /// Intersects a cylinder and a quadric .
    /// Tol est a definir plus precisemment.
    /// </summary>
    void Perform(Macad::Occt::gp_Cylinder^ C, Macad::Occt::IntAna_Quadric^ Q, double Tol);
    /// <summary>
    /// Intersects a cone and a quadric.
    /// Tol est a definir plus precisemment.
    /// </summary>
    void Perform(Macad::Occt::gp_Cone^ C, Macad::Occt::IntAna_Quadric^ Q, double Tol);
    /// <summary>
    /// Returns True if the computation was successful.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns TRUE if the cylinder, the cone or the sphere
    /// is identical to the quadric.
    /// </summary>
    bool IdenticalElements();
    /// <summary>
    /// Returns the number of curves solution.
    /// </summary>
    int NbCurve();
    /// <summary>
    /// Returns the curve of range N.
    /// </summary>
    Macad::Occt::IntAna_Curve^ Curve(int N);
    /// <summary>
    /// Returns the number of contact point.
    /// </summary>
    int NbPnt();
    /// <summary>
    /// Returns the point of range N.
    /// </summary>
    Macad::Occt::Pnt Point(int N);
    /// <summary>
    /// Returns the parameters on the "explicit quadric"
    /// (i.e  the cylinder or the  cone, the first argument given to the constructor) of the point of
    /// range N.
    /// </summary>
    void Parameters(int N, double% U1, double% U2);
    /// <summary>
    /// Returns True if the Curve I  shares its last bound
    /// with another curve.
    /// </summary>
    bool HasNextCurve(int I);
    /// <summary>
    /// If  HasNextCurve(I)  returns True,  this  function
    /// returns  the  Index J  of the curve  which   has a
    /// common bound  with the curve   I.  If  theOpposite ==
    /// True , then the last parameter of the curve I, and
    /// the last parameter of  the curve J  give  the same
    /// point. Else the last  parameter of the curve I and
    /// the first parameter  of  the curve J are  the same
    /// point.
    /// </summary>
    int NextCurve(int I, bool% theOpposite);
    /// <summary>
    /// Returns True if the Curve I shares its first bound
    /// with another curve.
    /// </summary>
    bool HasPreviousCurve(int I);
    /// <summary>
    /// if HasPreviousCurve(I) returns True, this function
    /// returns the   Index  J of the   curve  which has a
    /// common  bound with the  curve  I.  If theOpposite  ==
    /// True  , then the  first parameter of  the curve I,
    /// and the first parameter of the curve  J  give  the
    /// same point. Else the first  parameter of the curve
    /// I and the last  parameter  of the curve J  are the
    /// same point.
    /// </summary>
    int PreviousCurve(int I, bool% theOpposite);
}; // class IntAna_IntQuadQuad

//---------------------------------------------------------------------
//  Class  IntAna_QuadQuadGeo
//---------------------------------------------------------------------
/// <summary>
/// Geometric intersections between two natural quadrics
/// (Sphere , Cylinder , Cone , Pln from gp).
/// The possible intersections are :
/// - 1 point
/// - 1 or 2 line(s)
/// - 1 Point and 1 Line
/// - 1 circle
/// - 1 ellipse
/// - 1 parabola
/// - 1 or 2 hyperbola(s).
/// - Empty : there is no intersection between the two quadrics.
/// - Same  : the quadrics are identical
/// - NoGeometricSolution : there may be an intersection, but it
/// is necessary to use an analytic algorithm to determine
/// it. See class IntQuadQuad from IntAna.
/// </summary>
public ref class IntAna_QuadQuadGeo sealed
    : public Macad::Occt::BaseClass<::IntAna_QuadQuadGeo>
{

#ifdef Include_IntAna_QuadQuadGeo_h
public:
    Include_IntAna_QuadQuadGeo_h
#endif

public:
    IntAna_QuadQuadGeo(::IntAna_QuadQuadGeo* nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_QuadQuadGeo>( nativeInstance, true )
    {}

    IntAna_QuadQuadGeo(::IntAna_QuadQuadGeo& nativeInstance)
        : Macad::Occt::BaseClass<::IntAna_QuadQuadGeo>( &nativeInstance, false )
    {}

    property ::IntAna_QuadQuadGeo* NativeInstance
    {
        ::IntAna_QuadQuadGeo* get()
        {
            return static_cast<::IntAna_QuadQuadGeo*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    IntAna_QuadQuadGeo();
    /// <summary>
    /// Creates the intersection between two planes.
    /// TolAng is the angular tolerance used to determine
    /// if the planes are parallel.
    /// Tol is the tolerance used to determine if the planes
    /// are identical (only when they are parallel).
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::Pln P1, Macad::Occt::Pln P2, double TolAng, double Tol);
    /// <summary>
    /// Creates the intersection between a plane and a cylinder.
    /// TolAng is the angular tolerance used to determine
    /// if the axis of the cylinder is parallel to the plane.
    /// Tol is the tolerance used to determine if the result
    /// is a circle or an ellipse. If the maximum distance between
    /// the ellipse solution and the circle centered at the ellipse
    /// center is less than Tol, the result will be the circle.
    /// H is the height of the cylinder <Cyl>. It is  used to check
    /// whether the plane and cylinder are parallel.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::Pln P, Macad::Occt::gp_Cylinder^ C, double Tolang, double Tol, double H);
    /// <summary>
    /// Creates the intersection between a plane and a cylinder.
    /// TolAng is the angular tolerance used to determine
    /// if the axis of the cylinder is parallel to the plane.
    /// Tol is the tolerance used to determine if the result
    /// is a circle or an ellipse. If the maximum distance between
    /// the ellipse solution and the circle centered at the ellipse
    /// center is less than Tol, the result will be the circle.
    /// H is the height of the cylinder <Cyl>. It is  used to check
    /// whether the plane and cylinder are parallel.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::Pln P, Macad::Occt::gp_Cylinder^ C, double Tolang, double Tol);
    /// <summary>
    /// Creates the intersection between a plane and a sphere.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::Pln P, Macad::Occt::gp_Sphere^ S);
    /// <summary>
    /// Creates the intersection between a plane and a cone.
    /// TolAng is the angular tolerance used to determine
    /// if the axis of the cone is parallel or perpendicular
    /// to the plane, and if the generating line of the cone
    /// is parallel to the plane.
    /// Tol is the tolerance used to determine if the apex
    /// of the cone is in the plane.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::Pln P, Macad::Occt::gp_Cone^ C, double Tolang, double Tol);
    /// <summary>
    /// Creates the intersection between two cylinders.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::gp_Cylinder^ Cyl1, Macad::Occt::gp_Cylinder^ Cyl2, double Tol);
    /// <summary>
    /// Creates the intersection between a Cylinder and a Sphere.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Sphere^ Sph, double Tol);
    /// <summary>
    /// Creates the intersection between a Cylinder and a Cone
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Cone^ Con, double Tol);
    /// <summary>
    /// Creates the intersection between two Spheres.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::gp_Sphere^ Sph1, Macad::Occt::gp_Sphere^ Sph2, double Tol);
    /// <summary>
    /// Creates the intersection between a Sphere and a Cone.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::gp_Sphere^ Sph, Macad::Occt::gp_Cone^ Con, double Tol);
    /// <summary>
    /// Creates the intersection between two cones.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::gp_Cone^ Con1, Macad::Occt::gp_Cone^ Con2, double Tol);
    /// <summary>
    /// Creates the intersection between plane and torus.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::Pln Pln, Macad::Occt::gp_Torus^ Tor, double Tol);
    /// <summary>
    /// Creates the intersection between cylinder and torus.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Torus^ Tor, double Tol);
    /// <summary>
    /// Creates the intersection between cone and torus.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::gp_Cone^ Con, Macad::Occt::gp_Torus^ Tor, double Tol);
    /// <summary>
    /// Creates the intersection between sphere and torus.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::gp_Sphere^ Sph, Macad::Occt::gp_Torus^ Tor, double Tol);
    /// <summary>
    /// Creates the intersection between two toruses.
    /// </summary>
    IntAna_QuadQuadGeo(Macad::Occt::gp_Torus^ Tor1, Macad::Occt::gp_Torus^ Tor2, double Tol);
    /// <summary>
    /// Intersects two planes.
    /// TolAng is the angular tolerance used to determine
    /// if the planes are parallel.
    /// Tol is the tolerance used to determine if the planes
    /// are identical (only when they are parallel).
    /// </summary>
    void Perform(Macad::Occt::Pln P1, Macad::Occt::Pln P2, double TolAng, double Tol);
    /// <summary>
    /// Intersects a plane and a cylinder.
    /// TolAng is the angular tolerance used to determine
    /// if the axis of the cylinder is parallel to the plane.
    /// Tol is the tolerance used to determine if the result
    /// is a circle or an ellipse. If the maximum distance between
    /// the ellipse solution and the circle centered at the ellipse
    /// center is less than Tol, the result will be the circle.
    /// H is the height of the cylinder <Cyl>. It is  used to check
    /// whether the plane and cylinder are parallel.
    /// </summary>
    void Perform(Macad::Occt::Pln P, Macad::Occt::gp_Cylinder^ C, double Tolang, double Tol, double H);
    /// <summary>
    /// Intersects a plane and a cylinder.
    /// TolAng is the angular tolerance used to determine
    /// if the axis of the cylinder is parallel to the plane.
    /// Tol is the tolerance used to determine if the result
    /// is a circle or an ellipse. If the maximum distance between
    /// the ellipse solution and the circle centered at the ellipse
    /// center is less than Tol, the result will be the circle.
    /// H is the height of the cylinder <Cyl>. It is  used to check
    /// whether the plane and cylinder are parallel.
    /// </summary>
    void Perform(Macad::Occt::Pln P, Macad::Occt::gp_Cylinder^ C, double Tolang, double Tol);
    /// <summary>
    /// Intersects a plane and a sphere.
    /// </summary>
    void Perform(Macad::Occt::Pln P, Macad::Occt::gp_Sphere^ S);
    /// <summary>
    /// Intersects a plane and a cone.
    /// TolAng is the angular tolerance used to determine
    /// if the axis of the cone is parallel or perpendicular
    /// to the plane, and if the generating line of the cone
    /// is parallel to the plane.
    /// Tol is the tolerance used to determine if the apex
    /// of the cone is in the plane.
    /// </summary>
    void Perform(Macad::Occt::Pln P, Macad::Occt::gp_Cone^ C, double Tolang, double Tol);
    /// <summary>
    /// Intersects two cylinders
    /// </summary>
    void Perform(Macad::Occt::gp_Cylinder^ Cyl1, Macad::Occt::gp_Cylinder^ Cyl2, double Tol);
    /// <summary>
    /// Intersects a cylinder and a sphere.
    /// </summary>
    void Perform(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Sphere^ Sph, double Tol);
    /// <summary>
    /// Intersects a cylinder and a cone.
    /// </summary>
    void Perform(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Cone^ Con, double Tol);
    /// <summary>
    /// Intersects a two spheres.
    /// </summary>
    void Perform(Macad::Occt::gp_Sphere^ Sph1, Macad::Occt::gp_Sphere^ Sph2, double Tol);
    /// <summary>
    /// Intersects a sphere and a cone.
    /// </summary>
    void Perform(Macad::Occt::gp_Sphere^ Sph, Macad::Occt::gp_Cone^ Con, double Tol);
    /// <summary>
    /// Intersects two cones.
    /// </summary>
    void Perform(Macad::Occt::gp_Cone^ Con1, Macad::Occt::gp_Cone^ Con2, double Tol);
    /// <summary>
    /// Intersects plane and torus.
    /// </summary>
    void Perform(Macad::Occt::Pln Pln, Macad::Occt::gp_Torus^ Tor, double Tol);
    /// <summary>
    /// Intersects cylinder and torus.
    /// </summary>
    void Perform(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Torus^ Tor, double Tol);
    /// <summary>
    /// Intersects cone and torus.
    /// </summary>
    void Perform(Macad::Occt::gp_Cone^ Con, Macad::Occt::gp_Torus^ Tor, double Tol);
    /// <summary>
    /// Intersects sphere and torus.
    /// </summary>
    void Perform(Macad::Occt::gp_Sphere^ Sph, Macad::Occt::gp_Torus^ Tor, double Tol);
    /// <summary>
    /// Intersects two toruses.
    /// </summary>
    void Perform(Macad::Occt::gp_Torus^ Tor1, Macad::Occt::gp_Torus^ Tor2, double Tol);
    /// <summary>
    /// Returns Standard_True if the computation was successful.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the type of intersection.
    /// </summary>
    Macad::Occt::IntAna_ResultType TypeInter();
    /// <summary>
    /// Returns the number of intersections.
    /// The possible intersections are :
    /// - 1 point
    /// - 1 or 2 line(s)
    /// - 1 Point and 1 Line
    /// - 1 circle
    /// - 1 ellipse
    /// - 1 parabola
    /// - 1 or 2 hyperbola(s).
    /// </summary>
    int NbSolutions();
    /// <summary>
    /// Returns the point solution of range Num.
    /// </summary>
    Macad::Occt::Pnt Point(int Num);
    /// <summary>
    /// Returns the line solution of range Num.
    /// </summary>
    Macad::Occt::gp_Lin^ Line(int Num);
    /// <summary>
    /// Returns the circle solution of range Num.
    /// </summary>
    Macad::Occt::gp_Circ^ Circle(int Num);
    /// <summary>
    /// Returns the ellipse solution of range Num.
    /// </summary>
    Macad::Occt::gp_Elips^ Ellipse(int Num);
    /// <summary>
    /// Returns the parabola solution of range Num.
    /// </summary>
    Macad::Occt::gp_Parab^ Parabola(int Num);
    /// <summary>
    /// Returns the hyperbola solution of range Num.
    /// </summary>
    Macad::Occt::gp_Hypr^ Hyperbola(int Num);
    bool HasCommonGen();
    Macad::Occt::Pnt PChar();
}; // class IntAna_QuadQuadGeo

}; // namespace Occt
}; // namespace Macad
