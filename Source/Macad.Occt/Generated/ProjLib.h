// Generated wrapper code for package ProjLib

#pragma once

#include "Adaptor2d.h"
#include "Standard.h"
#include "Adaptor3d.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ProjLib_SequenceOfHSequenceOfPnt
//---------------------------------------------------------------------
public ref class ProjLib_SequenceOfHSequenceOfPnt sealed
    : public Macad::Occt::BaseClass<::ProjLib_SequenceOfHSequenceOfPnt>
    , public IIndexEnumerable<Macad::Occt::TColgp_HSequenceOfPnt^>
{

#ifdef Include_ProjLib_SequenceOfHSequenceOfPnt_h
public:
    Include_ProjLib_SequenceOfHSequenceOfPnt_h
#endif

public:
    ProjLib_SequenceOfHSequenceOfPnt(::ProjLib_SequenceOfHSequenceOfPnt* nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib_SequenceOfHSequenceOfPnt>( nativeInstance, true )
    {}

    ProjLib_SequenceOfHSequenceOfPnt(::ProjLib_SequenceOfHSequenceOfPnt& nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib_SequenceOfHSequenceOfPnt>( &nativeInstance, false )
    {}

    property ::ProjLib_SequenceOfHSequenceOfPnt* NativeInstance
    {
        ::ProjLib_SequenceOfHSequenceOfPnt* get()
        {
            return static_cast<::ProjLib_SequenceOfHSequenceOfPnt*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::ProjLib_SequenceOfHSequenceOfPnt::Iterator>
    {

#ifdef Include_ProjLib_SequenceOfHSequenceOfPnt_Iterator_h
    public:
        Include_ProjLib_SequenceOfHSequenceOfPnt_Iterator_h
#endif

    public:
        Iterator(::ProjLib_SequenceOfHSequenceOfPnt::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::ProjLib_SequenceOfHSequenceOfPnt::Iterator>( nativeInstance, true )
        {}

        Iterator(::ProjLib_SequenceOfHSequenceOfPnt::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::ProjLib_SequenceOfHSequenceOfPnt::Iterator>( &nativeInstance, false )
        {}

        property ::ProjLib_SequenceOfHSequenceOfPnt::Iterator* NativeInstance
        {
            ::ProjLib_SequenceOfHSequenceOfPnt::Iterator* get()
            {
                return static_cast<::ProjLib_SequenceOfHSequenceOfPnt::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TColgp_HSequenceOfPnt^ Value();
        Macad::Occt::TColgp_HSequenceOfPnt^ ChangeValue();
        bool IsEqual(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    ProjLib_SequenceOfHSequenceOfPnt();
    ProjLib_SequenceOfHSequenceOfPnt(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ Assign(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theOther);
    void Remove(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Iterator^ thePosition);
    void Append(Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
    void Prepend(Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
    void InsertAfter(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt::Iterator^ thePosition, Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
    void Split(int theIndex, Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSeq);
    Macad::Occt::TColgp_HSequenceOfPnt^ First();
    Macad::Occt::TColgp_HSequenceOfPnt^ ChangeFirst();
    Macad::Occt::TColgp_HSequenceOfPnt^ Last();
    Macad::Occt::TColgp_HSequenceOfPnt^ ChangeLast();
    virtual Macad::Occt::TColgp_HSequenceOfPnt^ Value(int theIndex);
    Macad::Occt::TColgp_HSequenceOfPnt^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TColgp_HSequenceOfPnt^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class ProjLib_SequenceOfHSequenceOfPnt

//---------------------------------------------------------------------
//  Class  ProjLib_ProjectedCurve
//---------------------------------------------------------------------
/// <summary>
/// Compute the 2d-curve.  Try to solve the particular
/// case if possible.  Otherwise, an approximation  is
/// done. For approximation some parameters are used, including
/// required tolerance of approximation.
/// Tolerance is maximal possible value of 3d deviation of 3d projection of projected curve from
/// "exact" 3d projection. Since algorithm searches 2d curve on surface, required 2d tolerance is
/// computed from 3d tolerance with help of U,V resolutions of surface. 3d and 2d tolerances have
/// sense only for curves on surface, it defines precision of projecting and approximation and have
/// nothing to do with distance between the projected curve and the surface.
/// </summary>
public ref class ProjLib_ProjectedCurve sealed
    : public Macad::Occt::Adaptor2d_Curve2d
{

#ifdef Include_ProjLib_ProjectedCurve_h
public:
    Include_ProjLib_ProjectedCurve_h
#endif

public:
    ProjLib_ProjectedCurve(::ProjLib_ProjectedCurve* nativeInstance)
        : Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
    {}

    ProjLib_ProjectedCurve(::ProjLib_ProjectedCurve& nativeInstance)
        : Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
    {}

    property ::ProjLib_ProjectedCurve* NativeInstance
    {
        ::ProjLib_ProjectedCurve* get()
        {
            return static_cast<::ProjLib_ProjectedCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor, it only sets some initial values for class fields.
    /// </summary>
    ProjLib_ProjectedCurve();
    /// <summary>
    /// Constructor with initialisation field mySurface
    /// </summary>
    ProjLib_ProjectedCurve(Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Constructor, which performs projecting.
    /// If projecting uses approximation, default parameters are used, in particular, 3d tolerance of
    /// approximation is Precision::Confusion()
    /// </summary>
    ProjLib_ProjectedCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// Constructor, which performs projecting.
    /// If projecting uses approximation, 3d tolerance is Tol, default parameters are used,
    /// </summary>
    ProjLib_ProjectedCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor3d_Curve^ C, double Tol);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor2d_Curve2d^ ShallowCopy();
    /// <summary>
    /// Changes the tolerance used to project
    /// the curve on the surface
    /// </summary>
    void Load(double Tolerance);
    /// <summary>
    /// Changes the Surface.
    /// </summary>
    void Load(Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Performs projecting for given curve.
    /// If projecting uses approximation,
    /// approximation parameters can be set before by corresponding methods
    /// SetDegree(...), SetMaxSegmets(...), SetBndPnt(...), SetMaxDist(...)
    /// </summary>
    void Perform(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// Set min and max possible degree of result BSpline curve2d, which is got by approximation.
    /// If theDegMin/Max < 0, algorithm uses values that are chosen depending of types curve 3d
    /// and surface.
    /// </summary>
    void SetDegree(int theDegMin, int theDegMax);
    /// <summary>
    /// Set the parameter, which defines maximal value of parametric intervals the projected
    /// curve can be cut for approximation. If theMaxSegments < 0, algorithm uses default
    /// value = 1000.
    /// </summary>
    void SetMaxSegments(int theMaxSegments);
    /* Method skipped due to unknown mapping: void SetBndPnt(AppParCurves_Constraint theBndPnt, ) */
    /// <summary>
    /// Set the parameter, which degines maximal possible distance between projected curve and
    /// surface. It uses only for projecting on not analytical surfaces. If theMaxDist < 0, algorithm
    /// uses default value 100.*Tolerance. If real distance between curve and surface more then
    /// theMaxDist, algorithm stops working.
    /// </summary>
    void SetMaxDist(double theMaxDist);
    Macad::Occt::Adaptor3d_Surface^ GetSurface();
    Macad::Occt::Adaptor3d_Curve^ GetCurve();
    /// <summary>
    /// returns the tolerance reached if an approximation
    /// is Done.
    /// </summary>
    double GetTolerance();
    double FirstParameter();
    double LastParameter();
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// If necessary,  breaks the  curve in  intervals  of
    /// continuity  <S>.    And  returns   the number   of
    /// intervals.
    /// </summary>
    int NbIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the  parameters bounding the intervals
    /// of continuity <S>.
    /// 
    /// The array must provide enough room to accommodate
    /// for the parameters. i.e. T.Length() > NbIntervals()
    /// </summary>
    void Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns    a  curve equivalent   of  <me>  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    Macad::Occt::Adaptor2d_Curve2d^ Trim(double First, double Last, double Tol);
    bool IsClosed();
    bool IsPeriodic();
    double Period();
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    Macad::Occt::Pnt2d Value(double U);
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt2d% P);
    /// <summary>
    /// Computes the point of parameter U on the curve with its
    /// first derivative.
    /// Raised if the continuity of the current interval
    /// is not C1.
    /// </summary>
    void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// Raised if the continuity of the current interval
    /// is not C2.
    /// </summary>
    void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
    /// <summary>
    /// Returns the point P of parameter U, the first, the second
    /// and the third derivative.
    /// Raised if the continuity of the current interval
    /// is not C3.
    /// </summary>
    void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// Raised if the continuity of the current interval
    /// is not CN.
    /// Raised if N < 1.
    /// </summary>
    Macad::Occt::Vec2d DN(double U, int N);
    /// <summary>
    /// Returns the parametric  resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double Resolution(double R3d);
    /// <summary>
    /// Returns  the  type of the   curve  in the  current
    /// interval :   Line,   Circle,   Ellipse, Hyperbola,
    /// Parabola, BezierCurve, BSplineCurve, OtherCurve.
    /// </summary>
    Macad::Occt::GeomAbs_CurveType GetCurveType();
    Macad::Occt::gp_Lin2d^ Line();
    Macad::Occt::gp_Circ2d^ Circle();
    Macad::Occt::gp_Elips2d^ Ellipse();
    Macad::Occt::gp_Hypr2d^ Hyperbola();
    Macad::Occt::gp_Parab2d^ Parabola();
    int Degree();
    bool IsRational();
    int NbPoles();
    int NbKnots();
    /// <summary>
    /// Warning ! This will  NOT make a copy  of the -- Bezier Curve -
    /// If you want to modify -- the Curve  please make a copy
    /// yourself --  Also it will  NOT trim the surface  to --
    /// myFirst/Last.
    /// </summary>
    Macad::Occt::Geom2d_BezierCurve^ Bezier();
    /// <summary>
    /// Warning ! This will NOT make a copy of the BSpline Curve - If
    /// you want to  modify the   Curve  please make a   copy
    /// yourself Also it   will  NOT  trim   the surface   to
    /// myFirst/Last.
    /// </summary>
    Macad::Occt::Geom2d_BSplineCurve^ BSpline();
    static Macad::Occt::ProjLib_ProjectedCurve^ CreateDowncasted(::ProjLib_ProjectedCurve* instance);
}; // class ProjLib_ProjectedCurve

//---------------------------------------------------------------------
//  Class  ProjLib
//---------------------------------------------------------------------
/// <summary>
/// The ProjLib package first provides projection of curves on a plane along a given Direction.
/// The result will be a 3D curve.
/// 
/// The ProjLib package provides projection of curves on surfaces to compute the curve in the
/// parametric space. It is assumed that the curve is on the surface.
/// 
/// It provides:
/// 
/// * Package methods to handle the easiest cases:
/// - Line, Circle, Ellipse, Parabola, Hyperbola on plane.
/// - Line, Circle on cylinder.
/// - Line, Circle on cone.
/// 
/// * Classes to handle the general cases:
/// - Plane.
/// - Cylinder.
/// - Cone.
/// - Sphere.
/// - Torus.
/// 
/// * A generic class to handle a Adaptor3d_Curve on a Adaptor3d_Surface.
/// </summary>
public ref class ProjLib sealed
    : public Macad::Occt::BaseClass<::ProjLib>
{

#ifdef Include_ProjLib_h
public:
    Include_ProjLib_h
#endif

public:
    ProjLib(::ProjLib* nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib>( nativeInstance, true )
    {}

    ProjLib(::ProjLib& nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib>( &nativeInstance, false )
    {}

    property ::ProjLib* NativeInstance
    {
        ::ProjLib* get()
        {
            return static_cast<::ProjLib*>(_NativeInstance);
        }
    }

public:
    ProjLib();
    static Macad::Occt::Pnt2d Project(Macad::Occt::Pln Pl, Macad::Occt::Pnt P);
    static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Lin^ L);
    static Macad::Occt::gp_Circ2d^ Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Circ^ C);
    static Macad::Occt::gp_Elips2d^ Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Elips^ E);
    static Macad::Occt::gp_Parab2d^ Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Parab^ P);
    static Macad::Occt::gp_Hypr2d^ Project(Macad::Occt::Pln Pl, Macad::Occt::gp_Hypr^ H);
    static Macad::Occt::Pnt2d Project(Macad::Occt::gp_Cylinder^ Cy, Macad::Occt::Pnt P);
    static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::gp_Cylinder^ Cy, Macad::Occt::gp_Lin^ L);
    static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::gp_Cylinder^ Cy, Macad::Occt::gp_Circ^ Ci);
    static Macad::Occt::Pnt2d Project(Macad::Occt::gp_Cone^ Co, Macad::Occt::Pnt P);
    static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::gp_Cone^ Co, Macad::Occt::gp_Lin^ L);
    static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::gp_Cone^ Co, Macad::Occt::gp_Circ^ Ci);
    static Macad::Occt::Pnt2d Project(Macad::Occt::gp_Sphere^ Sp, Macad::Occt::Pnt P);
    static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::gp_Sphere^ Sp, Macad::Occt::gp_Circ^ Ci);
    static Macad::Occt::Pnt2d Project(Macad::Occt::gp_Torus^ To, Macad::Occt::Pnt P);
    static Macad::Occt::gp_Lin2d^ Project(Macad::Occt::gp_Torus^ To, Macad::Occt::gp_Circ^ Ci);
    /// <summary>
    /// Make empty  P-Curve <aC> of relevant to <PC> type
    /// </summary>
    static void MakePCurveOfType(Macad::Occt::ProjLib_ProjectedCurve^ PC, Macad::Occt::Geom2d_Curve^ aC);
    /// <summary>
    /// Returns "true" if surface is analytical, that is it can be
    /// Plane, Cylinder, Cone, Sphere, Torus.
    /// For all other types of surface method returns "false".
    /// </summary>
    static bool IsAnaSurf(Macad::Occt::Adaptor3d_Surface^ theAS);
}; // class ProjLib

//---------------------------------------------------------------------
//  Class  ProjLib_HSequenceOfHSequenceOfPnt
//---------------------------------------------------------------------
public ref class ProjLib_HSequenceOfHSequenceOfPnt sealed
    : public Macad::Occt::Standard_Transient
    , public IIndexEnumerable<Macad::Occt::TColgp_HSequenceOfPnt^>
{

#ifdef Include_ProjLib_HSequenceOfHSequenceOfPnt_h
public:
    Include_ProjLib_HSequenceOfHSequenceOfPnt_h
#endif

public:
    ProjLib_HSequenceOfHSequenceOfPnt(::ProjLib_HSequenceOfHSequenceOfPnt* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    ProjLib_HSequenceOfHSequenceOfPnt(::ProjLib_HSequenceOfHSequenceOfPnt& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::ProjLib_HSequenceOfHSequenceOfPnt* NativeInstance
    {
        ::ProjLib_HSequenceOfHSequenceOfPnt* get()
        {
            return static_cast<::ProjLib_HSequenceOfHSequenceOfPnt*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::ProjLib_HSequenceOfHSequenceOfPnt::Iterator>
    {

#ifdef Include_ProjLib_HSequenceOfHSequenceOfPnt_Iterator_h
    public:
        Include_ProjLib_HSequenceOfHSequenceOfPnt_Iterator_h
#endif

    public:
        Iterator(::ProjLib_HSequenceOfHSequenceOfPnt::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::ProjLib_HSequenceOfHSequenceOfPnt::Iterator>( nativeInstance, true )
        {}

        Iterator(::ProjLib_HSequenceOfHSequenceOfPnt::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::ProjLib_HSequenceOfHSequenceOfPnt::Iterator>( &nativeInstance, false )
        {}

        property ::ProjLib_HSequenceOfHSequenceOfPnt::Iterator* NativeInstance
        {
            ::ProjLib_HSequenceOfHSequenceOfPnt::Iterator* get()
            {
                return static_cast<::ProjLib_HSequenceOfHSequenceOfPnt::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TColgp_HSequenceOfPnt^ Value();
        Macad::Occt::TColgp_HSequenceOfPnt^ ChangeValue();
        bool IsEqual(Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    ProjLib_HSequenceOfHSequenceOfPnt();
    ProjLib_HSequenceOfHSequenceOfPnt(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theOther);
    Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ Sequence();
    void Append(Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
    void Append(Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ theSequence);
    Macad::Occt::ProjLib_SequenceOfHSequenceOfPnt^ ChangeSequence();
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
    Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt^ Assign(Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt^ theOther);
    void Remove(Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Iterator^ thePosition);
    void Prepend(Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
    void InsertAfter(Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt::Iterator^ thePosition, Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
    void Split(int theIndex, Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt^ theSeq);
    Macad::Occt::TColgp_HSequenceOfPnt^ First();
    Macad::Occt::TColgp_HSequenceOfPnt^ ChangeFirst();
    Macad::Occt::TColgp_HSequenceOfPnt^ Last();
    Macad::Occt::TColgp_HSequenceOfPnt^ ChangeLast();
    virtual Macad::Occt::TColgp_HSequenceOfPnt^ Value(int theIndex);
    Macad::Occt::TColgp_HSequenceOfPnt^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::TColgp_HSequenceOfPnt^ theItem);
    static Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt^ CreateDowncasted(::ProjLib_HSequenceOfHSequenceOfPnt* instance);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TColgp_HSequenceOfPnt^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class ProjLib_HSequenceOfHSequenceOfPnt

//---------------------------------------------------------------------
//  Class  ProjLib_Projector
//---------------------------------------------------------------------
/// <summary>
/// Root class for projection algorithms, stores the result.
/// </summary>
public ref class ProjLib_Projector
    : public Macad::Occt::BaseClass<::ProjLib_Projector>
{

#ifdef Include_ProjLib_Projector_h
public:
    Include_ProjLib_Projector_h
#endif

protected:
    ProjLib_Projector(InitMode init)
        : Macad::Occt::BaseClass<::ProjLib_Projector>( init )
    {}

public:
    ProjLib_Projector(::ProjLib_Projector* nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib_Projector>( nativeInstance, true )
    {}

    ProjLib_Projector(::ProjLib_Projector& nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib_Projector>( &nativeInstance, false )
    {}

    property ::ProjLib_Projector* NativeInstance
    {
        ::ProjLib_Projector* get()
        {
            return static_cast<::ProjLib_Projector*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Sets the type to OtherCurve
    /// </summary>
    ProjLib_Projector();
    bool IsDone();
    /// <summary>
    /// Set isDone = Standard_True;
    /// </summary>
    void Done();
    Macad::Occt::GeomAbs_CurveType GetCurveType();
    void SetBSpline(Macad::Occt::Geom2d_BSplineCurve^ C);
    void SetBezier(Macad::Occt::Geom2d_BezierCurve^ C);
    void SetType(Macad::Occt::GeomAbs_CurveType Type);
    bool IsPeriodic();
    void SetPeriodic();
    Macad::Occt::gp_Lin2d^ Line();
    Macad::Occt::gp_Circ2d^ Circle();
    Macad::Occt::gp_Elips2d^ Ellipse();
    Macad::Occt::gp_Hypr2d^ Hyperbola();
    Macad::Occt::gp_Parab2d^ Parabola();
    Macad::Occt::Geom2d_BezierCurve^ Bezier();
    Macad::Occt::Geom2d_BSplineCurve^ BSpline();
    void Project(Macad::Occt::gp_Lin^ L);
    void Project(Macad::Occt::gp_Circ^ C);
    void Project(Macad::Occt::gp_Elips^ E);
    void Project(Macad::Occt::gp_Parab^ P);
    void Project(Macad::Occt::gp_Hypr^ H);
    /// <summary>
    /// Translates the 2d curve
    /// to set the part of the curve [CFirst, CLast]
    /// in the range [ UFirst, UFirst + Period [
    /// </summary>
    void UFrame(double CFirst, double CLast, double UFirst, double Period);
    /// <summary>
    /// Translates the 2d curve
    /// to set the part of the curve [CFirst, CLast]
    /// in the range [ VFirst, VFirst + Period [
    /// </summary>
    void VFrame(double CFirst, double CLast, double VFirst, double Period);
}; // class ProjLib_Projector

//---------------------------------------------------------------------
//  Class  ProjLib_CompProjectedCurve
//---------------------------------------------------------------------
public ref class ProjLib_CompProjectedCurve sealed
    : public Macad::Occt::Adaptor2d_Curve2d
{

#ifdef Include_ProjLib_CompProjectedCurve_h
public:
    Include_ProjLib_CompProjectedCurve_h
#endif

public:
    ProjLib_CompProjectedCurve(::ProjLib_CompProjectedCurve* nativeInstance)
        : Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
    {}

    ProjLib_CompProjectedCurve(::ProjLib_CompProjectedCurve& nativeInstance)
        : Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
    {}

    property ::ProjLib_CompProjectedCurve* NativeInstance
    {
        ::ProjLib_CompProjectedCurve* get()
        {
            return static_cast<::ProjLib_CompProjectedCurve*>(_NativeInstance);
        }
    }

public:
    ProjLib_CompProjectedCurve();
    /// <summary>
    /// try to find all solutions
    /// </summary>
    ProjLib_CompProjectedCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor3d_Curve^ C, double TolU, double TolV);
    /// <summary>
    /// this constructor tries to optimize the search using the
    /// assumption that maximum distance between surface and curve less or
    /// equal then MaxDist.
    /// if MaxDist < 0 then algorithm works as above.
    /// </summary>
    ProjLib_CompProjectedCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor3d_Curve^ C, double TolU, double TolV, double MaxDist);
    /// <summary>
    /// this constructor tries to optimize the search using the
    /// assumption that maximum distance between surface and curve less or
    /// equal then MaxDist.
    /// if MaxDist < 0 then algorithm try to find all solutions
    /// Tolerances of parameters are calculated automatically.
    /// </summary>
    ProjLib_CompProjectedCurve(double Tol3d, Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor3d_Curve^ C, double MaxDist);
    /// <summary>
    /// this constructor tries to optimize the search using the
    /// assumption that maximum distance between surface and curve less or
    /// equal then MaxDist.
    /// if MaxDist < 0 then algorithm try to find all solutions
    /// Tolerances of parameters are calculated automatically.
    /// </summary>
    ProjLib_CompProjectedCurve(double Tol3d, Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor2d_Curve2d^ ShallowCopy();
    /// <summary>
    /// computes a set of projected point and determine the
    /// continuous parts of the projected  curves. The  points
    /// corresponding to a projection on the bounds of the surface are
    /// included  in this set of points.
    /// </summary>
    void Init();
    /// <summary>
    /// Performs projecting for given curve.
    /// If projecting uses approximation,
    /// approximation parameters can be set before by corresponding methods
    /// SetTol3d(...), SeContinuity(...), SetMaxDegree(...), SetMaxSeg(...)
    /// </summary>
    void Perform();
    /// <summary>
    /// Set the parameter, which defines 3d tolerance of approximation.
    /// </summary>
    void SetTol3d(double theTol3d);
    /// <summary>
    /// Set the parameter, which defines curve continuity.
    /// Default value is GeomAbs_C2;
    /// </summary>
    void SetContinuity(Macad::Occt::GeomAbs_Shape theContinuity);
    /// <summary>
    /// Set max possible degree of result BSpline curve2d, which is got by approximation.
    /// If MaxDegree < 0, algorithm uses values that are chosen depending of types curve 3d
    /// and surface.
    /// </summary>
    void SetMaxDegree(int theMaxDegree);
    /// <summary>
    /// Set the parameter, which defines maximal value of parametric intervals the projected
    /// curve can be cut for approximation. If MaxSeg < 0, algorithm uses default
    /// value = 16.
    /// </summary>
    void SetMaxSeg(int theMaxSeg);
    /// <summary>
    /// Set the parameter, which defines necessity of 2d results.
    /// </summary>
    void SetProj2d(bool theProj2d);
    /// <summary>
    /// Set the parameter, which defines necessity of 3d results.
    /// </summary>
    void SetProj3d(bool theProj3d);
    /// <summary>
    /// Changes the surface.
    /// </summary>
    void Load(Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Changes the  curve.
    /// </summary>
    void Load(Macad::Occt::Adaptor3d_Curve^ C);
    Macad::Occt::Adaptor3d_Surface^ GetSurface();
    Macad::Occt::Adaptor3d_Curve^ GetCurve();
    void GetTolerance(double% TolU, double% TolV);
    /// <summary>
    /// returns the number of continuous part of the projected curve
    /// </summary>
    int NbCurves();
    /// <summary>
    /// returns the bounds of the continuous part corresponding to Index
    /// </summary>
    void Bounds(int Index, double% Udeb, double% Ufin);
    /// <summary>
    /// returns  True  if  part  of  projection with  number  Index is  a  single  point  and  writes
    /// its  coordinates in  P
    /// </summary>
    bool IsSinglePnt(int Index, Macad::Occt::Pnt2d% P);
    /// <summary>
    /// returns  True  if  part  of  projection with  number  Index is  an  u-isoparametric curve  of
    /// input  surface
    /// </summary>
    bool IsUIso(int Index, double% U);
    /// <summary>
    /// returns  True  if  part  of  projection with  number  Index is  an  v-isoparametric curve  of
    /// input  surface
    /// </summary>
    bool IsVIso(int Index, double% V);
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    Macad::Occt::Pnt2d Value(double U);
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt2d% P);
    /// <summary>
    /// Computes the point of parameter U on the curve with its
    /// first derivative.
    /// Raised if the continuity of the current interval
    /// is not C1.
    /// </summary>
    void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// Raised if the continuity of the current interval
    /// is not C2.
    /// </summary>
    void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// Raised if N < 1.
    /// Raised if N > 2.
    /// </summary>
    Macad::Occt::Vec2d DN(double U, int N);
    /// <summary>
    /// Returns  the  first  parameter of  the  curve  C
    /// which  has  a  projection  on  S.
    /// </summary>
    double FirstParameter();
    /// <summary>
    /// Returns  the  last  parameter of  the  curve  C
    /// which  has  a  projection  on  S.
    /// </summary>
    double LastParameter();
    /// <summary>
    /// Returns the Continuity used in the approximation.
    /// </summary>
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns  the number  of  intervals which  define
    /// an  S  continuous  part  of  the  projected  curve
    /// </summary>
    int NbIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns    a  curve equivalent   of  <me>  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 2d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    Macad::Occt::Adaptor2d_Curve2d^ Trim(double FirstParam, double LastParam, double Tol);
    /// <summary>
    /// Returns  the  parameters  corresponding  to
    /// S  discontinuities.
    /// 
    /// The array must provide  enough room to  accommodate
    /// for the parameters. i.e. T.Length() > NbIntervals()
    /// </summary>
    void Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// returns  the  maximum  distance  between
    /// curve  to  project  and  surface
    /// </summary>
    double MaxDistance(int Index);
    Macad::Occt::ProjLib_HSequenceOfHSequenceOfPnt^ GetSequence();
    /// <summary>
    /// Returns  the  type of the   curve  in the  current
    /// interval :   Line,   Circle,   Ellipse, Hyperbola,
    /// Parabola, BezierCurve, BSplineCurve, OtherCurve.
    /// </summary>
    Macad::Occt::GeomAbs_CurveType GetCurveType();
    /// <summary>
    /// Returns true if result of projecting of the curve interval
    /// with number Index is point.
    /// </summary>
    bool ResultIsPoint(int theIndex);
    /// <summary>
    /// Returns the error of approximation of U parameter 2d-curve as a result
    /// projecting of the curve interval with number Index.
    /// </summary>
    double GetResult2dUApproxError(int theIndex);
    /// <summary>
    /// Returns the error of approximation of V parameter 2d-curve as a result
    /// projecting of the curve interval with number Index.
    /// </summary>
    double GetResult2dVApproxError(int theIndex);
    /// <summary>
    /// Returns the error of approximation of 3d-curve as a result
    /// projecting of the curve interval with number Index.
    /// </summary>
    double GetResult3dApproxError(int theIndex);
    /// <summary>
    /// Returns the resulting 2d-curve of projecting
    /// of the curve interval with number Index.
    /// </summary>
    Macad::Occt::Geom2d_Curve^ GetResult2dC(int theIndex);
    /// <summary>
    /// Returns the resulting 3d-curve of projecting
    /// of the curve interval with number Index.
    /// </summary>
    Macad::Occt::Geom_Curve^ GetResult3dC(int theIndex);
    /// <summary>
    /// Returns the resulting 2d-point of projecting
    /// of the curve interval with number Index.
    /// </summary>
    Macad::Occt::Pnt2d GetResult2dP(int theIndex);
    /// <summary>
    /// Returns the resulting 3d-point of projecting
    /// of the curve interval with number Index.
    /// </summary>
    Macad::Occt::Pnt GetResult3dP(int theIndex);
    /// <summary>
    /// Returns the parameter, which defines necessity of only 2d results.
    /// </summary>
    bool GetProj2d();
    /// <summary>
    /// Returns the parameter, which defines necessity of only 3d results.
    /// </summary>
    bool GetProj3d();
    static Macad::Occt::ProjLib_CompProjectedCurve^ CreateDowncasted(::ProjLib_CompProjectedCurve* instance);
}; // class ProjLib_CompProjectedCurve

//---------------------------------------------------------------------
//  Class  ProjLib_ComputeApprox
//---------------------------------------------------------------------
/// <summary>
/// Approximate the  projection of  a 3d curve   on an
/// analytic surface and stores the result in Approx.
/// The result is a 2d curve.
/// For approximation some parameters are used, including
/// required tolerance of approximation.
/// Tolerance is maximal possible value of 3d deviation of 3d projection of projected curve from
/// "exact" 3d projection. Since algorithm searches 2d curve on surface, required 2d tolerance is
/// computed from 3d tolerance with help of U,V resolutions of surface. 3d and 2d tolerances have
/// sense only for curves on surface, it defines precision of projecting and approximation and have
/// nothing to do with distance between the projected curve and the surface.
/// </summary>
public ref class ProjLib_ComputeApprox sealed
    : public Macad::Occt::BaseClass<::ProjLib_ComputeApprox>
{

#ifdef Include_ProjLib_ComputeApprox_h
public:
    Include_ProjLib_ComputeApprox_h
#endif

public:
    ProjLib_ComputeApprox(::ProjLib_ComputeApprox* nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib_ComputeApprox>( nativeInstance, true )
    {}

    ProjLib_ComputeApprox(::ProjLib_ComputeApprox& nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib_ComputeApprox>( &nativeInstance, false )
    {}

    property ::ProjLib_ComputeApprox* NativeInstance
    {
        ::ProjLib_ComputeApprox* get()
        {
            return static_cast<::ProjLib_ComputeApprox*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor, it only sets some initial values for class fields.
    /// </summary>
    ProjLib_ComputeApprox();
    /// <summary>
    /// <Tol>    is   the   tolerance   with  which    the
    /// approximation is performed.
    /// Other parameters for approximation have default values.
    /// </summary>
    ProjLib_ComputeApprox(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double Tol);
    /// <summary>
    /// Performs projecting.
    /// In case of approximation current values of parameters are used:
    /// default values or set by corresponding methods Set...
    /// </summary>
    void Perform(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Set tolerance of approximation.
    /// Default value is Precision::Confusion().
    /// </summary>
    void SetTolerance(double theTolerance);
    /// <summary>
    /// Set min and max possible degree of result BSpline curve2d, which is got by approximation.
    /// If theDegMin/Max < 0, algorithm uses values that are chosen depending of types curve 3d
    /// and surface.
    /// </summary>
    void SetDegree(int theDegMin, int theDegMax);
    /// <summary>
    /// Set the parameter, which defines maximal value of parametric intervals the projected
    /// curve can be cut for approximation. If theMaxSegments < 0, algorithm uses default
    /// value = 1000.
    /// </summary>
    void SetMaxSegments(int theMaxSegments);
    /* Method skipped due to unknown mapping: void SetBndPnt(AppParCurves_Constraint theBndPnt, ) */
    Macad::Occt::Geom2d_BSplineCurve^ BSpline();
    Macad::Occt::Geom2d_BezierCurve^ Bezier();
    /// <summary>
    /// returns the reached Tolerance.
    /// </summary>
    double Tolerance();
}; // class ProjLib_ComputeApprox

//---------------------------------------------------------------------
//  Class  ProjLib_ComputeApproxOnPolarSurface
//---------------------------------------------------------------------
/// <summary>
/// Approximate the  projection  of a  3d curve  on an
/// polar  surface  and  stores the result  in  Approx.
/// The result is a  2d curve.  The evaluation of  the
/// current  point of the  2d  curve is done with  the
/// evaluation of the extrema  P3d - Surface.
/// For approximation some parameters are used, including
/// required tolerance of approximation.
/// Tolerance is maximal possible value of 3d deviation of 3d projection of projected curve from
/// "exact" 3d projection. Since algorithm searches 2d curve on surface, required 2d tolerance is
/// computed from 3d tolerance with help of U,V resolutions of surface. 3d and 2d tolerances have
/// sense only for curves on surface, it defines precision of projecting and approximation and have
/// nothing to do with distance between the projected curve and the surface.
/// </summary>
public ref class ProjLib_ComputeApproxOnPolarSurface sealed
    : public Macad::Occt::BaseClass<::ProjLib_ComputeApproxOnPolarSurface>
{

#ifdef Include_ProjLib_ComputeApproxOnPolarSurface_h
public:
    Include_ProjLib_ComputeApproxOnPolarSurface_h
#endif

public:
    ProjLib_ComputeApproxOnPolarSurface(::ProjLib_ComputeApproxOnPolarSurface* nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib_ComputeApproxOnPolarSurface>( nativeInstance, true )
    {}

    ProjLib_ComputeApproxOnPolarSurface(::ProjLib_ComputeApproxOnPolarSurface& nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib_ComputeApproxOnPolarSurface>( &nativeInstance, false )
    {}

    property ::ProjLib_ComputeApproxOnPolarSurface* NativeInstance
    {
        ::ProjLib_ComputeApproxOnPolarSurface* get()
        {
            return static_cast<::ProjLib_ComputeApproxOnPolarSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor, it only sets some initial values for class fields.
    /// </summary>
    ProjLib_ComputeApproxOnPolarSurface();
    /// <summary>
    /// Constructor, which performs projecting.
    /// </summary>
    ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double Tol);
    /// <summary>
    /// Constructor, which performs projecting.
    /// </summary>
    ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Constructor, which performs projecting, using initial curve 2d InitCurve2d, which is any rough
    /// approximation of result curve. Parameter Tol is 3d tolerance of approximation.
    /// </summary>
    ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::Adaptor2d_Curve2d^ InitCurve2d, Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double Tol);
    /// <summary>
    /// Constructor, which performs projecting, using two initial curves 2d: InitCurve2d and
    /// InitCurve2dBis that are any rough approximations of result curves. This constructor is used to
    /// get two pcurves for seem edge. Parameter Tol is 3d tolerance of approximation.
    /// </summary>
    ProjLib_ComputeApproxOnPolarSurface(Macad::Occt::Adaptor2d_Curve2d^ InitCurve2d, Macad::Occt::Adaptor2d_Curve2d^ InitCurve2dBis, Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, double Tol);
    /// <summary>
    /// Set min and max possible degree of result BSpline curve2d, which is got by approximation.
    /// If theDegMin/Max < 0, algorithm uses values min = 2, max = 8.
    /// </summary>
    void SetDegree(int theDegMin, int theDegMax);
    /// <summary>
    /// Set the parameter, which defines maximal value of parametric intervals the projected
    /// curve can be cut for approximation. If theMaxSegments < 0, algorithm uses default
    /// value = 1000.
    /// </summary>
    void SetMaxSegments(int theMaxSegments);
    /* Method skipped due to unknown mapping: void SetBndPnt(AppParCurves_Constraint theBndPnt, ) */
    /// <summary>
    /// Set the parameter, which defines maximal possible distance between projected curve and
    /// surface. It is used only for projecting on not analytical surfaces. If theMaxDist < 0,
    /// algorithm uses default value 100.*Tolerance. If real distance between curve and surface more
    /// then theMaxDist, algorithm stops working.
    /// </summary>
    void SetMaxDist(double theMaxDist);
    /// <summary>
    /// Set the tolerance used to project
    /// the curve on the surface.
    /// Default value is Precision::Approximation().
    /// </summary>
    void SetTolerance(double theTolerance);
    /// <summary>
    /// Method, which performs projecting, using default values of parameters or
    /// they must be set by corresponding methods before using.
    /// </summary>
    void Perform(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Method, which performs projecting, using default values of parameters or
    /// they must be set by corresponding methods before using.
    /// Parameter InitCurve2d is any rough estimation of 2d result curve.
    /// </summary>
    Macad::Occt::Geom2d_BSplineCurve^ Perform(Macad::Occt::Adaptor2d_Curve2d^ InitCurve2d, Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Builds initial 2d curve as BSpline with degree = 1 using Extrema algorithm.
    /// Method is used in method Perform(...).
    /// </summary>
    Macad::Occt::Adaptor2d_Curve2d^ BuildInitialCurve2d(Macad::Occt::Adaptor3d_Curve^ Curve, Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Method, which performs projecting.
    /// Method is used in method Perform(...).
    /// </summary>
    Macad::Occt::Geom2d_BSplineCurve^ ProjectUsingInitialCurve2d(Macad::Occt::Adaptor3d_Curve^ Curve, Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::Adaptor2d_Curve2d^ InitCurve2d);
    /// <summary>
    /// Returns result curve 2d.
    /// </summary>
    Macad::Occt::Geom2d_BSplineCurve^ BSpline();
    /// <summary>
    /// Returns second 2d curve.
    /// </summary>
    Macad::Occt::Geom2d_Curve^ Curve2d();
    bool IsDone();
    /// <summary>
    /// returns the reached Tolerance.
    /// </summary>
    double Tolerance();
}; // class ProjLib_ComputeApproxOnPolarSurface

//---------------------------------------------------------------------
//  Class  ProjLib_Cone
//---------------------------------------------------------------------
/// <summary>
/// Projects elementary curves on a cone.
/// </summary>
public ref class ProjLib_Cone sealed
    : public Macad::Occt::ProjLib_Projector
{

#ifdef Include_ProjLib_Cone_h
public:
    Include_ProjLib_Cone_h
#endif

public:
    ProjLib_Cone(::ProjLib_Cone* nativeInstance)
        : Macad::Occt::ProjLib_Projector( nativeInstance )
    {}

    ProjLib_Cone(::ProjLib_Cone& nativeInstance)
        : Macad::Occt::ProjLib_Projector( nativeInstance )
    {}

    property ::ProjLib_Cone* NativeInstance
    {
        ::ProjLib_Cone* get()
        {
            return static_cast<::ProjLib_Cone*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Undefined projection.
    /// </summary>
    ProjLib_Cone();
    /// <summary>
    /// Projection on the cone <Co>.
    /// </summary>
    ProjLib_Cone(Macad::Occt::gp_Cone^ Co);
    /// <summary>
    /// Projection of the line <L> on the cone <Co>.
    /// </summary>
    ProjLib_Cone(Macad::Occt::gp_Cone^ Co, Macad::Occt::gp_Lin^ L);
    /// <summary>
    /// Projection of the circle <C> on the cone <Co>.
    /// </summary>
    ProjLib_Cone(Macad::Occt::gp_Cone^ Co, Macad::Occt::gp_Circ^ C);
    void Init(Macad::Occt::gp_Cone^ Co);
    void Project(Macad::Occt::gp_Lin^ L);
    void Project(Macad::Occt::gp_Circ^ C);
    void Project(Macad::Occt::gp_Elips^ E);
    void Project(Macad::Occt::gp_Parab^ P);
    void Project(Macad::Occt::gp_Hypr^ H);
}; // class ProjLib_Cone

//---------------------------------------------------------------------
//  Class  ProjLib_Cylinder
//---------------------------------------------------------------------
/// <summary>
/// Projects elementary curves on a cylinder.
/// </summary>
public ref class ProjLib_Cylinder sealed
    : public Macad::Occt::ProjLib_Projector
{

#ifdef Include_ProjLib_Cylinder_h
public:
    Include_ProjLib_Cylinder_h
#endif

public:
    ProjLib_Cylinder(::ProjLib_Cylinder* nativeInstance)
        : Macad::Occt::ProjLib_Projector( nativeInstance )
    {}

    ProjLib_Cylinder(::ProjLib_Cylinder& nativeInstance)
        : Macad::Occt::ProjLib_Projector( nativeInstance )
    {}

    property ::ProjLib_Cylinder* NativeInstance
    {
        ::ProjLib_Cylinder* get()
        {
            return static_cast<::ProjLib_Cylinder*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Undefined projection.
    /// </summary>
    ProjLib_Cylinder();
    /// <summary>
    /// Projection on the cylinder <Cyl>.
    /// </summary>
    ProjLib_Cylinder(Macad::Occt::gp_Cylinder^ Cyl);
    /// <summary>
    /// Projection of the line <L> on the cylinder <Cyl>.
    /// </summary>
    ProjLib_Cylinder(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Lin^ L);
    /// <summary>
    /// Projection of the circle <C> on the cylinder <Cyl>.
    /// </summary>
    ProjLib_Cylinder(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Circ^ C);
    /// <summary>
    /// Projection of the ellipse <E> on the cylinder <Cyl>.
    /// </summary>
    ProjLib_Cylinder(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Elips^ E);
    void Init(Macad::Occt::gp_Cylinder^ Cyl);
    void Project(Macad::Occt::gp_Lin^ L);
    void Project(Macad::Occt::gp_Circ^ C);
    void Project(Macad::Occt::gp_Elips^ E);
    void Project(Macad::Occt::gp_Parab^ P);
    void Project(Macad::Occt::gp_Hypr^ H);
}; // class ProjLib_Cylinder

//---------------------------------------------------------------------
//  Class  ProjLib_Plane
//---------------------------------------------------------------------
/// <summary>
/// Projects elementary curves on a plane.
/// </summary>
public ref class ProjLib_Plane sealed
    : public Macad::Occt::ProjLib_Projector
{

#ifdef Include_ProjLib_Plane_h
public:
    Include_ProjLib_Plane_h
#endif

public:
    ProjLib_Plane(::ProjLib_Plane* nativeInstance)
        : Macad::Occt::ProjLib_Projector( nativeInstance )
    {}

    ProjLib_Plane(::ProjLib_Plane& nativeInstance)
        : Macad::Occt::ProjLib_Projector( nativeInstance )
    {}

    property ::ProjLib_Plane* NativeInstance
    {
        ::ProjLib_Plane* get()
        {
            return static_cast<::ProjLib_Plane*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Undefined projection.
    /// </summary>
    ProjLib_Plane();
    /// <summary>
    /// Projection on the plane <Pl>.
    /// </summary>
    ProjLib_Plane(Macad::Occt::Pln Pl);
    /// <summary>
    /// Projection of the line <L> on the plane <Pl>.
    /// </summary>
    ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Lin^ L);
    /// <summary>
    /// Projection of the circle <C> on the plane <Pl>.
    /// </summary>
    ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Circ^ C);
    /// <summary>
    /// Projection of the ellipse <E> on the plane <Pl>.
    /// </summary>
    ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Elips^ E);
    /// <summary>
    /// Projection of the parabola <P> on the plane <Pl>.
    /// </summary>
    ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Parab^ P);
    /// <summary>
    /// Projection of the hyperbola <H> on the plane <Pl>.
    /// </summary>
    ProjLib_Plane(Macad::Occt::Pln Pl, Macad::Occt::gp_Hypr^ H);
    void Init(Macad::Occt::Pln Pl);
    void Project(Macad::Occt::gp_Lin^ L);
    void Project(Macad::Occt::gp_Circ^ C);
    void Project(Macad::Occt::gp_Elips^ E);
    void Project(Macad::Occt::gp_Parab^ P);
    void Project(Macad::Occt::gp_Hypr^ H);
}; // class ProjLib_Plane

//---------------------------------------------------------------------
//  Class  ProjLib_PrjResolve
//---------------------------------------------------------------------
public ref class ProjLib_PrjResolve sealed
    : public Macad::Occt::BaseClass<::ProjLib_PrjResolve>
{

#ifdef Include_ProjLib_PrjResolve_h
public:
    Include_ProjLib_PrjResolve_h
#endif

public:
    ProjLib_PrjResolve(::ProjLib_PrjResolve* nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib_PrjResolve>( nativeInstance, true )
    {}

    ProjLib_PrjResolve(::ProjLib_PrjResolve& nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib_PrjResolve>( &nativeInstance, false )
    {}

    property ::ProjLib_PrjResolve* NativeInstance
    {
        ::ProjLib_PrjResolve* get()
        {
            return static_cast<::ProjLib_PrjResolve*>(_NativeInstance);
        }
    }

public:
    ProjLib_PrjResolve(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Adaptor3d_Surface^ S, int Fix);
    /// <summary>
    /// Calculates the ort from  C(t)  to  S  with a close point.
    /// The close point is defined by the parameter values U0 and V0.
    /// The function F(u,v)=distance(S(u,v),C(t)) has an extremum when gradient(F)=0.
    /// The algorithm searches a zero near the close point.
    /// </summary>
    void Perform(double t, double U, double V, Macad::Occt::Pnt2d Tol, Macad::Occt::Pnt2d Inf, Macad::Occt::Pnt2d Sup, double FTol, bool StrictInside);
    /// <summary>
    /// Calculates the ort from  C(t)  to  S  with a close point.
    /// The close point is defined by the parameter values U0 and V0.
    /// The function F(u,v)=distance(S(u,v),C(t)) has an extremum when gradient(F)=0.
    /// The algorithm searches a zero near the close point.
    /// </summary>
    void Perform(double t, double U, double V, Macad::Occt::Pnt2d Tol, Macad::Occt::Pnt2d Inf, Macad::Occt::Pnt2d Sup, double FTol);
    /// <summary>
    /// Calculates the ort from  C(t)  to  S  with a close point.
    /// The close point is defined by the parameter values U0 and V0.
    /// The function F(u,v)=distance(S(u,v),C(t)) has an extremum when gradient(F)=0.
    /// The algorithm searches a zero near the close point.
    /// </summary>
    void Perform(double t, double U, double V, Macad::Occt::Pnt2d Tol, Macad::Occt::Pnt2d Inf, Macad::Occt::Pnt2d Sup);
    /// <summary>
    /// Returns True if the distance is found.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the point of the extremum distance.
    /// </summary>
    Macad::Occt::Pnt2d Solution();
}; // class ProjLib_PrjResolve

//---------------------------------------------------------------------
//  Class  ProjLib_ProjectOnPlane
//---------------------------------------------------------------------
/// <summary>
/// Class  used  to project  a 3d curve   on a plane.  The
/// result will be a 3d curve.
/// 
/// You  can ask   the projected curve  to  have  the same
/// parametrization as the original curve.
/// 
/// The projection can be done  along every direction  not
/// parallel to the plane.
/// </summary>
public ref class ProjLib_ProjectOnPlane sealed
    : public Macad::Occt::Adaptor3d_Curve
{

#ifdef Include_ProjLib_ProjectOnPlane_h
public:
    Include_ProjLib_ProjectOnPlane_h
#endif

public:
    ProjLib_ProjectOnPlane(::ProjLib_ProjectOnPlane* nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    ProjLib_ProjectOnPlane(::ProjLib_ProjectOnPlane& nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    property ::ProjLib_ProjectOnPlane* NativeInstance
    {
        ::ProjLib_ProjectOnPlane* get()
        {
            return static_cast<::ProjLib_ProjectOnPlane*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    ProjLib_ProjectOnPlane();
    /// <summary>
    /// The projection will be normal to the Plane defined
    /// by the Ax3 <Pl>.
    /// </summary>
    ProjLib_ProjectOnPlane(Macad::Occt::Ax3 Pl);
    /// <summary>
    /// The projection will be  along the direction <D> on
    /// the plane defined by the Ax3 <Pl>.
    /// raises  if the direction  <D>  is parallel  to the
    /// plane <Pl>.
    /// </summary>
    ProjLib_ProjectOnPlane(Macad::Occt::Ax3 Pl, Macad::Occt::Dir D);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
    /// <summary>
    /// Sets the  Curve  and perform  the projection.
    /// if <KeepParametrization> is true, the parametrization
    /// of the Projected Curve <PC>  will  be the same  as
    /// the parametrization of the initial  curve <C>.
    /// It means: proj(C(u)) = PC(u) for each u.
    /// Otherwise, the parametrization may change.
    /// </summary>
    void Load(Macad::Occt::Adaptor3d_Curve^ C, double Tolerance, bool KeepParametrization);
    /// <summary>
    /// Sets the  Curve  and perform  the projection.
    /// if <KeepParametrization> is true, the parametrization
    /// of the Projected Curve <PC>  will  be the same  as
    /// the parametrization of the initial  curve <C>.
    /// It means: proj(C(u)) = PC(u) for each u.
    /// Otherwise, the parametrization may change.
    /// </summary>
    void Load(Macad::Occt::Adaptor3d_Curve^ C, double Tolerance);
    Macad::Occt::Ax3 GetPlane();
    Macad::Occt::Dir GetDirection();
    Macad::Occt::Adaptor3d_Curve^ GetCurve();
    Macad::Occt::GeomAdaptor_Curve^ GetResult();
    double FirstParameter();
    double LastParameter();
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// If necessary,  breaks the  curve in  intervals  of
    /// continuity  <S>.    And  returns   the number   of
    /// intervals.
    /// </summary>
    int NbIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the  parameters bounding the intervals of continuity <S>.
    /// 
    /// The array must provide enough room to accommodate
    /// for the parameters. i.e. T.Length() > NbIntervals()
    /// </summary>
    void Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns    a  curve equivalent   of  <me>  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    Macad::Occt::Adaptor3d_Curve^ Trim(double First, double Last, double Tol);
    bool IsClosed();
    bool IsPeriodic();
    double Period();
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    Macad::Occt::Pnt Value(double U);
    /// <summary>
    /// Computes the point of parameter U on the curve.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    /// <summary>
    /// Computes the point of parameter U on the curve with its
    /// first derivative.
    /// Raised if the continuity of the current interval
    /// is not C1.
    /// </summary>
    void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// Raised if the continuity of the current interval
    /// is not C2.
    /// </summary>
    void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    /// <summary>
    /// Returns the point P of parameter U, the first, the second
    /// and the third derivative.
    /// Raised if the continuity of the current interval
    /// is not C3.
    /// </summary>
    void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// Raised if the continuity of the current interval
    /// is not CN.
    /// Raised if N < 1.
    /// </summary>
    Macad::Occt::Vec DN(double U, int N);
    /// <summary>
    /// Returns the parametric  resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double Resolution(double R3d);
    /// <summary>
    /// Returns  the  type of the   curve  in the  current
    /// interval :   Line,   Circle,   Ellipse, Hyperbola,
    /// Parabola, BezierCurve, BSplineCurve, OtherCurve.
    /// </summary>
    Macad::Occt::GeomAbs_CurveType GetCurveType();
    Macad::Occt::gp_Lin^ Line();
    Macad::Occt::gp_Circ^ Circle();
    Macad::Occt::gp_Elips^ Ellipse();
    Macad::Occt::gp_Hypr^ Hyperbola();
    Macad::Occt::gp_Parab^ Parabola();
    int Degree();
    bool IsRational();
    int NbPoles();
    int NbKnots();
    /// <summary>
    /// Warning ! this will NOT make a copy of the
    /// Bezier Curve : If you want to modify
    /// the Curve please make a copy yourself
    /// Also it will NOT trim the surface to
    /// myFirst/Last.
    /// </summary>
    Macad::Occt::Geom_BezierCurve^ Bezier();
    /// <summary>
    /// Warning ! this will NOT make a copy of the
    /// BSpline Curve : If you want to modify
    /// the Curve please make a copy yourself
    /// Also it will NOT trim the surface to
    /// myFirst/Last.
    /// </summary>
    Macad::Occt::Geom_BSplineCurve^ BSpline();
    static Macad::Occt::ProjLib_ProjectOnPlane^ CreateDowncasted(::ProjLib_ProjectOnPlane* instance);
}; // class ProjLib_ProjectOnPlane

//---------------------------------------------------------------------
//  Class  ProjLib_ProjectOnSurface
//---------------------------------------------------------------------
/// <summary>
/// Project a curve on a  surface.  The result ( a  3D
/// Curve)  will be an approximation
/// </summary>
public ref class ProjLib_ProjectOnSurface sealed
    : public Macad::Occt::BaseClass<::ProjLib_ProjectOnSurface>
{

#ifdef Include_ProjLib_ProjectOnSurface_h
public:
    Include_ProjLib_ProjectOnSurface_h
#endif

public:
    ProjLib_ProjectOnSurface(::ProjLib_ProjectOnSurface* nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib_ProjectOnSurface>( nativeInstance, true )
    {}

    ProjLib_ProjectOnSurface(::ProjLib_ProjectOnSurface& nativeInstance)
        : Macad::Occt::BaseClass<::ProjLib_ProjectOnSurface>( &nativeInstance, false )
    {}

    property ::ProjLib_ProjectOnSurface* NativeInstance
    {
        ::ProjLib_ProjectOnSurface* get()
        {
            return static_cast<::ProjLib_ProjectOnSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Create an empty projector.
    /// </summary>
    ProjLib_ProjectOnSurface();
    /// <summary>
    /// Create a projector normally to the surface <S>.
    /// </summary>
    ProjLib_ProjectOnSurface(Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Set the Surface to <S>.
    /// To compute the projection, you have to Load the Curve.
    /// </summary>
    void Load(Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Compute the projection of the curve <C> on the Surface.
    /// </summary>
    void Load(Macad::Occt::Adaptor3d_Curve^ C, double Tolerance);
    bool IsDone();
    Macad::Occt::Geom_BSplineCurve^ BSpline();
}; // class ProjLib_ProjectOnSurface

//---------------------------------------------------------------------
//  Class  ProjLib_Sphere
//---------------------------------------------------------------------
/// <summary>
/// Projects elementary curves on a sphere.
/// </summary>
public ref class ProjLib_Sphere sealed
    : public Macad::Occt::ProjLib_Projector
{

#ifdef Include_ProjLib_Sphere_h
public:
    Include_ProjLib_Sphere_h
#endif

public:
    ProjLib_Sphere(::ProjLib_Sphere* nativeInstance)
        : Macad::Occt::ProjLib_Projector( nativeInstance )
    {}

    ProjLib_Sphere(::ProjLib_Sphere& nativeInstance)
        : Macad::Occt::ProjLib_Projector( nativeInstance )
    {}

    property ::ProjLib_Sphere* NativeInstance
    {
        ::ProjLib_Sphere* get()
        {
            return static_cast<::ProjLib_Sphere*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Undefined projection.
    /// </summary>
    ProjLib_Sphere();
    /// <summary>
    /// Projection on the sphere <Sp>.
    /// </summary>
    ProjLib_Sphere(Macad::Occt::gp_Sphere^ Sp);
    /// <summary>
    /// Projection of the circle <C> on the sphere <Sp>.
    /// </summary>
    ProjLib_Sphere(Macad::Occt::gp_Sphere^ Sp, Macad::Occt::gp_Circ^ C);
    void Init(Macad::Occt::gp_Sphere^ Sp);
    void Project(Macad::Occt::gp_Lin^ L);
    void Project(Macad::Occt::gp_Circ^ C);
    void Project(Macad::Occt::gp_Elips^ E);
    void Project(Macad::Occt::gp_Parab^ P);
    void Project(Macad::Occt::gp_Hypr^ H);
    /// <summary>
    /// Set the point of parameter U on C in the natural
    /// restrictions of the sphere.
    /// </summary>
    void SetInBounds(double U);
}; // class ProjLib_Sphere

//---------------------------------------------------------------------
//  Class  ProjLib_Torus
//---------------------------------------------------------------------
/// <summary>
/// Projects elementary curves on a torus.
/// </summary>
public ref class ProjLib_Torus sealed
    : public Macad::Occt::ProjLib_Projector
{

#ifdef Include_ProjLib_Torus_h
public:
    Include_ProjLib_Torus_h
#endif

public:
    ProjLib_Torus(::ProjLib_Torus* nativeInstance)
        : Macad::Occt::ProjLib_Projector( nativeInstance )
    {}

    ProjLib_Torus(::ProjLib_Torus& nativeInstance)
        : Macad::Occt::ProjLib_Projector( nativeInstance )
    {}

    property ::ProjLib_Torus* NativeInstance
    {
        ::ProjLib_Torus* get()
        {
            return static_cast<::ProjLib_Torus*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Undefined projection.
    /// </summary>
    ProjLib_Torus();
    /// <summary>
    /// Projection on the torus <To>.
    /// </summary>
    ProjLib_Torus(Macad::Occt::gp_Torus^ To);
    /// <summary>
    /// Projection of the circle <C> on the torus <To>.
    /// </summary>
    ProjLib_Torus(Macad::Occt::gp_Torus^ To, Macad::Occt::gp_Circ^ C);
    void Init(Macad::Occt::gp_Torus^ To);
    void Project(Macad::Occt::gp_Lin^ L);
    void Project(Macad::Occt::gp_Circ^ C);
    void Project(Macad::Occt::gp_Elips^ E);
    void Project(Macad::Occt::gp_Parab^ P);
    void Project(Macad::Occt::gp_Hypr^ H);
}; // class ProjLib_Torus

}; // namespace Occt
}; // namespace Macad
