// Generated wrapper code for package Geom2dAPI

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Geom2dAPI_ExtremaCurveCurve
//---------------------------------------------------------------------
/// <summary>
/// Describes functions for computing all the extrema
/// between two 2D curves.
/// An ExtremaCurveCurve algorithm minimizes or
/// maximizes the distance between a point on the first
/// curve and a point on the second curve. Thus, it
/// computes the start point and end point of
/// perpendiculars common to the two curves (an
/// intersection point is not an extremum except where
/// the two curves are tangential at this point).
/// Solutions consist of pairs of points, and an extremum
/// is considered to be a segment joining the two points of a solution.
/// An ExtremaCurveCurve object provides a framework for:
/// -   defining the construction of the extrema,
/// -   implementing the construction algorithm, and
/// -   consulting the results.
/// Warning
/// In some cases, the nearest points between two
/// curves do not correspond to one of the computed
/// extrema. Instead, they may be given by:
/// -   a limit point of one curve and one of the following:
/// -   its orthogonal projection on the other curve,
/// -   a limit point of the other curve; or
/// -   an intersection point between the two curves.
/// </summary>
public ref class Geom2dAPI_ExtremaCurveCurve sealed
    : public Macad::Occt::BaseClass<::Geom2dAPI_ExtremaCurveCurve>
{

#ifdef Include_Geom2dAPI_ExtremaCurveCurve_h
public:
    Include_Geom2dAPI_ExtremaCurveCurve_h
#endif

public:
    Geom2dAPI_ExtremaCurveCurve(::Geom2dAPI_ExtremaCurveCurve* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dAPI_ExtremaCurveCurve>( nativeInstance, true )
    {}

    Geom2dAPI_ExtremaCurveCurve(::Geom2dAPI_ExtremaCurveCurve& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dAPI_ExtremaCurveCurve>( &nativeInstance, false )
    {}

    property ::Geom2dAPI_ExtremaCurveCurve* NativeInstance
    {
        ::Geom2dAPI_ExtremaCurveCurve* get()
        {
            return static_cast<::Geom2dAPI_ExtremaCurveCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Computes the extrema between
    /// -   the portion of the curve C1 limited by the two
    /// points of parameter (U1min,U1max), and
    /// -   the portion of the curve C2 limited by the two
    /// points of parameter (U2min,U2max).
    /// Warning
    /// Use the function NbExtrema to obtain the number
    /// of solutions. If this algorithm fails, NbExtrema returns 0.
    /// </summary>
    Geom2dAPI_ExtremaCurveCurve(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double U1min, double U1max, double U2min, double U2max);
    /// <summary>
    /// Returns the number of extrema computed by this algorithm.
    /// Note: if this algorithm fails, NbExtrema returns 0.
    /// </summary>
    int NbExtrema();
    /// <summary>
    /// Returns the points P1 on the first curve and P2 on
    /// the second curve, which are the ends of the
    /// extremum of index Index computed by this algorithm.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [
    /// 1,NbExtrema ], where NbExtrema is the
    /// number of extrema computed by this algorithm.
    /// </summary>
    void Points(int Index, Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2);
    /// <summary>
    /// Returns the parameters U1 of the point on the first
    /// curve and U2 of the point on the second curve, which
    /// are the ends of the extremum of index Index
    /// computed by this algorithm.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [
    /// 1,NbExtrema ], where NbExtrema is the
    /// number of extrema computed by this algorithm.
    /// </summary>
    void Parameters(int Index, double% U1, double% U2);
    /// <summary>
    /// Computes the distance between the end points of the
    /// extremum of index Index computed by this algorithm.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [
    /// 1,NbExtrema ], where NbExtrema is the
    /// number of extrema computed by this algorithm.
    /// </summary>
    double Distance(int Index);
    /// <summary>
    /// Returns the points P1 on the first curve and P2 on
    /// the second curve, which are the ends of the shortest
    /// extremum computed by this algorithm.
    /// Exceptions StdFail_NotDone if this algorithm fails.
    /// </summary>
    void NearestPoints(Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2);
    /// <summary>
    /// Returns the parameters U1 of the point on the first
    /// curve and U2 of the point on the second curve, which
    /// are the ends of the shortest extremum computed by this algorithm.
    /// Exceptions
    /// StdFail_NotDone if this algorithm fails.
    /// </summary>
    void LowerDistanceParameters(double% U1, double% U2);
    /// <summary>
    /// Computes the distance between the end points of the
    /// shortest extremum computed by this algorithm.
    /// Exceptions - StdFail_NotDone if this algorithm fails.
    /// </summary>
    double LowerDistance();
    Macad::Occt::Extrema_ExtCC2d^ Extrema();
}; // class Geom2dAPI_ExtremaCurveCurve

//---------------------------------------------------------------------
//  Class  Geom2dAPI_InterCurveCurve
//---------------------------------------------------------------------
/// <summary>
/// This class implements methods for computing
/// -       the intersections between  two 2D curves,
/// -       the self-intersections of a  2D curve.
/// Using the InterCurveCurve algorithm allows to get the following results:
/// -      intersection points in the  case of cross intersections,
/// -      intersection segments in the case of tangential intersections,
/// -       nothing in the case of no intersections.
/// </summary>
public ref class Geom2dAPI_InterCurveCurve sealed
    : public Macad::Occt::BaseClass<::Geom2dAPI_InterCurveCurve>
{

#ifdef Include_Geom2dAPI_InterCurveCurve_h
public:
    Include_Geom2dAPI_InterCurveCurve_h
#endif

public:
    Geom2dAPI_InterCurveCurve(::Geom2dAPI_InterCurveCurve* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dAPI_InterCurveCurve>( nativeInstance, true )
    {}

    Geom2dAPI_InterCurveCurve(::Geom2dAPI_InterCurveCurve& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dAPI_InterCurveCurve>( &nativeInstance, false )
    {}

    property ::Geom2dAPI_InterCurveCurve* NativeInstance
    {
        ::Geom2dAPI_InterCurveCurve* get()
        {
            return static_cast<::Geom2dAPI_InterCurveCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Create an empty intersector. Use the
    /// function Init for further initialization of the intersection
    /// algorithm by curves or curve.
    /// </summary>
    Geom2dAPI_InterCurveCurve();
    /// <summary>
    /// Creates an object and computes the
    /// intersections between the curves C1 and C2.
    /// </summary>
    Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double Tol);
    /// <summary>
    /// Creates an object and computes the
    /// intersections between the curves C1 and C2.
    /// </summary>
    Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2);
    /// <summary>
    /// Creates an object and computes self-intersections of the curve C1.
    /// Tolerance value Tol, defaulted to 1.0e-6, defines the precision of
    /// computing the intersection points.
    /// In case of a tangential intersection, Tol also defines the
    /// size of intersection segments (limited portions of the curves)
    /// where the distance between all points from two curves (or a curve
    /// in case of self-intersection) is less than Tol.
    /// Warning
    /// Use functions NbPoints and NbSegments to obtain the number of
    /// solutions. If the algorithm finds no intersections NbPoints and
    /// NbSegments return 0.
    /// </summary>
    Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1, double Tol);
    /// <summary>
    /// Creates an object and computes self-intersections of the curve C1.
    /// Tolerance value Tol, defaulted to 1.0e-6, defines the precision of
    /// computing the intersection points.
    /// In case of a tangential intersection, Tol also defines the
    /// size of intersection segments (limited portions of the curves)
    /// where the distance between all points from two curves (or a curve
    /// in case of self-intersection) is less than Tol.
    /// Warning
    /// Use functions NbPoints and NbSegments to obtain the number of
    /// solutions. If the algorithm finds no intersections NbPoints and
    /// NbSegments return 0.
    /// </summary>
    Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1);
    /// <summary>
    /// Initializes an algorithm with the
    /// given arguments and computes the intersections between the curves C1. and C2.
    /// </summary>
    void Init(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double Tol);
    /// <summary>
    /// Initializes an algorithm with the
    /// given arguments and computes the intersections between the curves C1. and C2.
    /// </summary>
    void Init(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2);
    /// <summary>
    /// Initializes an algorithm with the
    /// given arguments and computes the self-intersections of the curve C1.
    /// Tolerance value Tol, defaulted to 1.0e-6, defines the precision of
    /// computing the intersection points. In case of a tangential
    /// intersection, Tol also defines the size of intersection segments
    /// (limited portions of the curves) where the distance between all
    /// points from two curves (or a curve in case of self-intersection) is less than Tol.
    /// Warning
    /// Use functions NbPoints and NbSegments to obtain the number
    /// of solutions. If the algorithm finds no intersections NbPoints
    /// and NbSegments return 0.
    /// </summary>
    void Init(Macad::Occt::Geom2d_Curve^ C1, double Tol);
    /// <summary>
    /// Initializes an algorithm with the
    /// given arguments and computes the self-intersections of the curve C1.
    /// Tolerance value Tol, defaulted to 1.0e-6, defines the precision of
    /// computing the intersection points. In case of a tangential
    /// intersection, Tol also defines the size of intersection segments
    /// (limited portions of the curves) where the distance between all
    /// points from two curves (or a curve in case of self-intersection) is less than Tol.
    /// Warning
    /// Use functions NbPoints and NbSegments to obtain the number
    /// of solutions. If the algorithm finds no intersections NbPoints
    /// and NbSegments return 0.
    /// </summary>
    void Init(Macad::Occt::Geom2d_Curve^ C1);
    /// <summary>
    /// Returns the number of intersection-points in case of cross intersections.
    /// NbPoints returns 0 if no intersections were found.
    /// </summary>
    int NbPoints();
    /// <summary>
    /// Returns the intersection point of index Index.
    /// Intersection points are computed in case of cross intersections with a
    /// precision equal to the tolerance value assigned at the time of
    /// construction or in the function Init (this value is defaulted to 1.0e-6).
    /// Exceptions
    /// Standard_OutOfRange if index is not in the range [ 1,NbPoints ], where
    /// NbPoints is the number of computed intersection points
    /// </summary>
    Macad::Occt::Pnt2d Point(int Index);
    /// <summary>
    /// Returns the number of tangential intersections.
    /// NbSegments returns 0 if no intersections were found
    /// </summary>
    int NbSegments();
    /// <summary>
    /// Use this syntax only to get
    /// solutions of tangential intersection between two curves.
    /// Output values Curve1 and Curve2 are the intersection segments on the
    /// first curve and on the second curve accordingly. Parameter Index
    /// defines a number of computed solution.
    /// An intersection segment is a portion of an initial curve limited
    /// by two points. The distance from each point of this segment to the
    /// other curve is less or equal to the tolerance value assigned at the
    /// time of construction or in function Init (this value is defaulted to 1.0e-6).
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [ 1,NbSegments ],
    /// where NbSegments is the number of computed tangential intersections.
    /// Standard_NullObject if the algorithm is initialized for the
    /// computing of self-intersections on a curve.
    /// </summary>
    void Segment(int Index, Macad::Occt::Geom2d_Curve^ Curve1, Macad::Occt::Geom2d_Curve^ Curve2);
    /* Method skipped due to unknown mapping: Geom2dInt_GInter Intersector() */
}; // class Geom2dAPI_InterCurveCurve

//---------------------------------------------------------------------
//  Class  Geom2dAPI_Interpolate
//---------------------------------------------------------------------
/// <summary>
/// This  class  is  used  to  interpolate a  BsplineCurve
/// passing   through  an  array  of  points,  with  a  C2
/// Continuity if tangency is not requested at the point.
/// If tangency is requested at the point the continuity will
/// be C1.  If Perodicity is requested the curve will be closed
/// and the junction will be the first point given. The curve will than be only C1
/// The curve is defined by a table of points through which it passes, and if required
/// by a parallel table of reals which gives the value of the parameter of each point through
/// which the resulting BSpline curve passes, and by vectors tangential to these points.
/// An Interpolate object provides a framework for: defining the constraints of the BSpline curve,
/// -   implementing the interpolation algorithm, and consulting the results.
/// </summary>
public ref class Geom2dAPI_Interpolate sealed
    : public Macad::Occt::BaseClass<::Geom2dAPI_Interpolate>
{

#ifdef Include_Geom2dAPI_Interpolate_h
public:
    Include_Geom2dAPI_Interpolate_h
#endif

public:
    Geom2dAPI_Interpolate(::Geom2dAPI_Interpolate* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dAPI_Interpolate>( nativeInstance, true )
    {}

    Geom2dAPI_Interpolate(::Geom2dAPI_Interpolate& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dAPI_Interpolate>( &nativeInstance, false )
    {}

    property ::Geom2dAPI_Interpolate* NativeInstance
    {
        ::Geom2dAPI_Interpolate* get()
        {
            return static_cast<::Geom2dAPI_Interpolate*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Tolerance is to check if the points are not too close to one an other
    /// It is also used to check if the tangent vector is not too small.
    /// There should be at least 2 points
    /// if PeriodicFlag is True then the curve will be periodic.
    /// </summary>
    Geom2dAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt2d^ Points, bool PeriodicFlag, double Tolerance);
    /// <summary>
    /// if PeriodicFlag is True then the curve will be periodic
    /// Warning:
    /// There should be as many parameters as there are points
    /// except if PeriodicFlag is True : then there should be one more
    /// parameter to close the curve
    /// </summary>
    Geom2dAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt2d^ Points, Macad::Occt::TColStd_HArray1OfReal^ Parameters, bool PeriodicFlag, double Tolerance);
    /// <summary>
    /// Assigns this constrained BSpline curve to be
    /// tangential to vectors InitialTangent and FinalTangent
    /// at its first and last points respectively (i.e.
    /// the first and last points of the table of
    /// points through which the curve passes, as
    /// defined at the time of initialization).
    /// <Scale> - boolean flag defining whether tangent vectors are to
    /// be scaled according to derivatives of lagrange interpolation.
    /// </summary>
    void Load(Macad::Occt::Vec2d InitialTangent, Macad::Occt::Vec2d FinalTangent, bool Scale);
    /// <summary>
    /// Assigns this constrained BSpline curve to be
    /// tangential to vectors InitialTangent and FinalTangent
    /// at its first and last points respectively (i.e.
    /// the first and last points of the table of
    /// points through which the curve passes, as
    /// defined at the time of initialization).
    /// <Scale> - boolean flag defining whether tangent vectors are to
    /// be scaled according to derivatives of lagrange interpolation.
    /// </summary>
    void Load(Macad::Occt::Vec2d InitialTangent, Macad::Occt::Vec2d FinalTangent);
    /// <summary>
    /// Assigns this constrained BSpline curve to be
    /// tangential to vectors defined in the table Tangents,
    /// which is parallel to the table of points
    /// through which the curve passes, as
    /// defined at the time of initialization. Vectors
    /// in the table Tangents are defined only if
    /// the flag given in the parallel table
    /// TangentFlags is true: only these vectors
    /// are set as tangency constraints.
    /// <Scale> - boolean flag defining whether tangent vectors are to
    /// be scaled according to derivatives of lagrange interpolation.
    /// </summary>
    void Load(Macad::Occt::TColgp_Array1OfVec2d^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags, bool Scale);
    /// <summary>
    /// Assigns this constrained BSpline curve to be
    /// tangential to vectors defined in the table Tangents,
    /// which is parallel to the table of points
    /// through which the curve passes, as
    /// defined at the time of initialization. Vectors
    /// in the table Tangents are defined only if
    /// the flag given in the parallel table
    /// TangentFlags is true: only these vectors
    /// are set as tangency constraints.
    /// <Scale> - boolean flag defining whether tangent vectors are to
    /// be scaled according to derivatives of lagrange interpolation.
    /// </summary>
    void Load(Macad::Occt::TColgp_Array1OfVec2d^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags);
    /// <summary>
    /// Computes the constrained BSpline curve. Use the function IsDone to verify that the
    /// computation is successful, and then the function Curve to obtain the result.
    /// </summary>
    void Perform();
    /// <summary>
    /// Returns the computed BSpline curve. Raises  StdFail_NotDone if the interpolation fails.
    /// </summary>
    Macad::Occt::Geom2d_BSplineCurve^ Curve();
    /// <summary>
    /// Returns true if the constrained BSpline curve is successfully constructed.
    /// Note: in this case, the result is given by the function Curve.
    /// </summary>
    bool IsDone();
}; // class Geom2dAPI_Interpolate

//---------------------------------------------------------------------
//  Class  Geom2dAPI_PointsToBSpline
//---------------------------------------------------------------------
/// <summary>
/// This  class  is  used  to  approximate a  BsplineCurve
/// passing  through an  array  of points,  with  a  given
/// Continuity.
/// Describes functions for building a 2D BSpline
/// curve which approximates a set of points.
/// A PointsToBSpline object provides a framework for:
/// -   defining the data of the BSpline curve to be built,
/// -   implementing the approximation algorithm, and
/// -   consulting the results
/// </summary>
public ref class Geom2dAPI_PointsToBSpline sealed
    : public Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>
{

#ifdef Include_Geom2dAPI_PointsToBSpline_h
public:
    Include_Geom2dAPI_PointsToBSpline_h
#endif

public:
    Geom2dAPI_PointsToBSpline(::Geom2dAPI_PointsToBSpline* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>( nativeInstance, true )
    {}

    Geom2dAPI_PointsToBSpline(::Geom2dAPI_PointsToBSpline& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dAPI_PointsToBSpline>( &nativeInstance, false )
    {}

    property ::Geom2dAPI_PointsToBSpline* NativeInstance
    {
        ::Geom2dAPI_PointsToBSpline* get()
        {
            return static_cast<::Geom2dAPI_PointsToBSpline*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty approximation algorithm.
    /// Use an Init function to define and build the BSpline curve.
    /// </summary>
    Geom2dAPI_PointsToBSpline();
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  Of coordinates :
    /// 
    /// X = X0 + DX * (i-YValues.Lower())
    /// Y = YValues(i)
    /// 
    /// With i in the range YValues.Lower(), YValues.Upper()
    /// 
    /// The BSpline will be parametrized  from t = X0 to
    /// X0 + DX * (YValues.Upper() - YValues.Lower())
    /// 
    /// And will satisfy X(t) = t
    /// 
    /// The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  Of coordinates :
    /// 
    /// X = X0 + DX * (i-YValues.Lower())
    /// Y = YValues(i)
    /// 
    /// With i in the range YValues.Lower(), YValues.Upper()
    /// 
    /// The BSpline will be parametrized  from t = X0 to
    /// X0 + DX * (YValues.Upper() - YValues.Lower())
    /// 
    /// And will satisfy X(t) = t
    /// 
    /// The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  Of coordinates :
    /// 
    /// X = X0 + DX * (i-YValues.Lower())
    /// Y = YValues(i)
    /// 
    /// With i in the range YValues.Lower(), YValues.Upper()
    /// 
    /// The BSpline will be parametrized  from t = X0 to
    /// X0 + DX * (YValues.Upper() - YValues.Lower())
    /// 
    /// And will satisfy X(t) = t
    /// 
    /// The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  Of coordinates :
    /// 
    /// X = X0 + DX * (i-YValues.Lower())
    /// Y = YValues(i)
    /// 
    /// With i in the range YValues.Lower(), YValues.Upper()
    /// 
    /// The BSpline will be parametrized  from t = X0 to
    /// X0 + DX * (YValues.Upper() - YValues.Lower())
    /// 
    /// And will satisfy X(t) = t
    /// 
    /// The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  Of coordinates :
    /// 
    /// X = X0 + DX * (i-YValues.Lower())
    /// Y = YValues(i)
    /// 
    /// With i in the range YValues.Lower(), YValues.Upper()
    /// 
    /// The BSpline will be parametrized  from t = X0 to
    /// X0 + DX * (YValues.Upper() - YValues.Lower())
    /// 
    /// And will satisfy X(t) = t
    /// 
    /// The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX);
    /* Method skipped due to unknown mapping: void Geom2dAPI_PointsToBSpline(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol2D, ) */
    /* Method skipped due to unknown mapping: void Geom2dAPI_PointsToBSpline(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol2D, ) */
    /* Method skipped due to unknown mapping: void Geom2dAPI_PointsToBSpline(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol2D, ) */
    /* Method skipped due to unknown mapping: void Geom2dAPI_PointsToBSpline(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol2D, ) */
    /* Method skipped due to unknown mapping: void Geom2dAPI_PointsToBSpline(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol2D, ) */
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  Of coordinates :
    /// 
    /// X = X0 + DX * (i-YValues.Lower())
    /// Y = YValues(i)
    /// 
    /// With i in the range YValues.Lower(), YValues.Upper()
    /// 
    /// The BSpline will be parametrized  from t = X0 to
    /// X0 + DX * (YValues.Upper() - YValues.Lower())
    /// 
    /// And will satisfy X(t) = t
    /// 
    /// The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  Of coordinates :
    /// 
    /// X = X0 + DX * (i-YValues.Lower())
    /// Y = YValues(i)
    /// 
    /// With i in the range YValues.Lower(), YValues.Upper()
    /// 
    /// The BSpline will be parametrized  from t = X0 to
    /// X0 + DX * (YValues.Upper() - YValues.Lower())
    /// 
    /// And will satisfy X(t) = t
    /// 
    /// The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  Of coordinates :
    /// 
    /// X = X0 + DX * (i-YValues.Lower())
    /// Y = YValues(i)
    /// 
    /// With i in the range YValues.Lower(), YValues.Upper()
    /// 
    /// The BSpline will be parametrized  from t = X0 to
    /// X0 + DX * (YValues.Upper() - YValues.Lower())
    /// 
    /// And will satisfy X(t) = t
    /// 
    /// The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  Of coordinates :
    /// 
    /// X = X0 + DX * (i-YValues.Lower())
    /// Y = YValues(i)
    /// 
    /// With i in the range YValues.Lower(), YValues.Upper()
    /// 
    /// The BSpline will be parametrized  from t = X0 to
    /// X0 + DX * (YValues.Upper() - YValues.Lower())
    /// 
    /// And will satisfy X(t) = t
    /// 
    /// The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  Of coordinates :
    /// 
    /// X = X0 + DX * (i-YValues.Lower())
    /// Y = YValues(i)
    /// 
    /// With i in the range YValues.Lower(), YValues.Upper()
    /// 
    /// The BSpline will be parametrized  from t = X0 to
    /// X0 + DX * (YValues.Upper() - YValues.Lower())
    /// 
    /// And will satisfy X(t) = t
    /// 
    /// The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX);
    /* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol2D, ) */
    /* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol2D, ) */
    /* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol2D, ) */
    /* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol2D, ) */
    /* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol2D, ) */
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol2D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3);
    /// <summary>
    /// Returns the approximate BSpline Curve
    /// </summary>
    Macad::Occt::Geom2d_BSplineCurve^ Curve();
    bool IsDone();
}; // class Geom2dAPI_PointsToBSpline

//---------------------------------------------------------------------
//  Class  Geom2dAPI_ProjectPointOnCurve
//---------------------------------------------------------------------
/// <summary>
/// This class implements methods for computing all the orthogonal
/// projections of a 2D point onto a 2D curve.
/// </summary>
public ref class Geom2dAPI_ProjectPointOnCurve sealed
    : public Macad::Occt::BaseClass<::Geom2dAPI_ProjectPointOnCurve>
{

#ifdef Include_Geom2dAPI_ProjectPointOnCurve_h
public:
    Include_Geom2dAPI_ProjectPointOnCurve_h
#endif

public:
    Geom2dAPI_ProjectPointOnCurve(::Geom2dAPI_ProjectPointOnCurve* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dAPI_ProjectPointOnCurve>( nativeInstance, true )
    {}

    Geom2dAPI_ProjectPointOnCurve(::Geom2dAPI_ProjectPointOnCurve& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dAPI_ProjectPointOnCurve>( &nativeInstance, false )
    {}

    property ::Geom2dAPI_ProjectPointOnCurve* NativeInstance
    {
        ::Geom2dAPI_ProjectPointOnCurve* get()
        {
            return static_cast<::Geom2dAPI_ProjectPointOnCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty projector algorithm. Use an Init
    /// function to define the point and the curve on which it is going to work.
    /// </summary>
    Geom2dAPI_ProjectPointOnCurve();
    /// <summary>
    /// Create the projection  of a  point  <P> on a curve
    /// <Curve>
    /// </summary>
    Geom2dAPI_ProjectPointOnCurve(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve);
    /// <summary>
    /// Create  the projection  of a point <P>  on a curve
    /// <Curve> limited by the two   points of parameter Umin and Usup.
    /// Warning
    /// Use the function NbPoints to obtain the number of solutions. If
    /// projection fails, NbPoints returns 0.
    /// </summary>
    Geom2dAPI_ProjectPointOnCurve(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve, double Umin, double Usup);
    /// <summary>
    /// Initializes this algorithm with the given arguments, and
    /// computes the orthogonal  projections  of a  point  <P> on a curve <Curve>
    /// </summary>
    void Init(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve);
    /// <summary>
    /// Initializes this algorithm with the given arguments, and
    /// computes the orthogonal projections of the point P onto the portion
    /// of the curve Curve limited by the two points of parameter Umin and Usup.
    /// </summary>
    void Init(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve, double Umin, double Usup);
    /// <summary>
    /// return the number of of computed
    /// orthogonal projectionn points.
    /// </summary>
    int NbPoints();
    /// <summary>
    /// Returns the orthogonal projection
    /// on the curve. Index is a number of a computed point.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where
    /// NbPoints is the number of solution points.
    /// </summary>
    Macad::Occt::Pnt2d Point(int Index);
    /// <summary>
    /// Returns the parameter on the curve
    /// of a point which is the orthogonal projection. Index is a number of a
    /// computed projected point.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where
    /// NbPoints is the number of solution points.
    /// </summary>
    double Parameter(int Index);
    /// <summary>
    /// Returns the parameter on the curve
    /// of a point which is the orthogonal projection. Index is a number of a
    /// computed projected point.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where
    /// NbPoints is the number of solution points
    /// </summary>
    void Parameter(int Index, double% U);
    /// <summary>
    /// Computes the distance between the
    /// point and its computed orthogonal projection on the curve. Index is a
    /// number of computed projected point.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where
    /// NbPoints is the number of solution points.
    /// </summary>
    double Distance(int Index);
    /// <summary>
    /// Returns the nearest orthogonal projection of the point on the curve.
    /// Exceptions
    /// StdFail_NotDone if this algorithm fails.
    /// </summary>
    Macad::Occt::Pnt2d NearestPoint();
    /// <summary>
    /// Returns the parameter on the curve
    /// of the nearest orthogonal projection of the point.
    /// Exceptions
    /// StdFail_NotDone if this algorithm fails.
    /// </summary>
    double LowerDistanceParameter();
    /// <summary>
    /// Computes the distance between the
    /// point and its nearest orthogonal projection on the curve.
    /// Exceptions
    /// StdFail_NotDone if this algorithm fails.
    /// </summary>
    double LowerDistance();
    /// <summary>
    /// return the algorithmic object from Extrema
    /// </summary>
    Macad::Occt::Extrema_ExtPC2d^ Extrema();
}; // class Geom2dAPI_ProjectPointOnCurve

}; // namespace Occt
}; // namespace Macad
