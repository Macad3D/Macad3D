// Generated wrapper code for package GeomAPI

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  GeomAPI
//---------------------------------------------------------------------
/// <summary>
/// The   GeomAPI   package  provides  an  Application
/// Programming Interface for the Geometry.
/// 
/// The API is a set of  classes and methods aiming to
/// provide :
/// 
/// * High level and simple calls  for the most common
/// operations.
/// 
/// *    Keeping   an   access  on    the    low-level
/// implementation of high-level calls.
/// 
/// The API  provides classes to  call the algorithms
/// of the Geometry
/// 
/// * The  constructors  of the classes  provides  the
/// different constructions methods.
/// 
/// * The  class keeps as fields the   different tools
/// used by the algorithms
/// 
/// *   The class  provides  a  casting  method to get
/// automatically the  result  with  a   function-like
/// call.
/// 
/// For example to evaluate the distance <D> between a
/// point <P> and a curve <C>, one can writes :
/// 
/// D = GeomAPI_ProjectPointOnCurve(P,C);
/// 
/// or
/// 
/// GeomAPI_ProjectPointOnCurve PonC(P,C);
/// D = PonC.LowerDistance();
/// </summary>
public ref class GeomAPI sealed
    : public Macad::Occt::BaseClass<::GeomAPI>
{

#ifdef Include_GeomAPI_h
public:
    Include_GeomAPI_h
#endif

public:
    GeomAPI(::GeomAPI* nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI>( nativeInstance, true )
    {}

    GeomAPI(::GeomAPI& nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI>( &nativeInstance, false )
    {}

    property ::GeomAPI* NativeInstance
    {
        ::GeomAPI* get()
        {
            return static_cast<::GeomAPI*>(_NativeInstance);
        }
    }

public:
    GeomAPI();
    /// <summary>
    /// This function builds (in the
    /// parametric space of the plane P) a 2D curve equivalent to the 3D curve
    /// C. The 3D curve C is considered to be located in the plane P.
    /// Warning
    /// The 3D curve C must be of one of the following types:
    /// -      a line
    /// -      a circle
    /// -      an ellipse
    /// -      a hyperbola
    /// -      a parabola
    /// -      a Bezier curve
    /// -      a BSpline curve
    /// Exceptions Standard_NoSuchObject if C is not a defined type curve.
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ To2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pln P);
    /// <summary>
    /// Builds a 3D curve equivalent to the 2D curve C
    /// described in the parametric space defined by the local
    /// coordinate system of plane P.
    /// The resulting 3D curve is of the same nature as that of the curve C.
    /// </summary>
    static Macad::Occt::Geom_Curve^ To3d(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pln P);
}; // class GeomAPI

//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaCurveCurve
//---------------------------------------------------------------------
/// <summary>
/// Describes functions for computing all the extrema
/// between two 3D curves.
/// An ExtremaCurveCurve algorithm minimizes or
/// maximizes the distance between a point on the first
/// curve and a point on the second curve. Thus, it
/// computes start and end points of perpendiculars
/// common to the two curves (an intersection point is
/// not an extremum unless the two curves are tangential at this point).
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
public ref class GeomAPI_ExtremaCurveCurve sealed
    : public Macad::Occt::BaseClass<::GeomAPI_ExtremaCurveCurve>
{

#ifdef Include_GeomAPI_ExtremaCurveCurve_h
public:
    Include_GeomAPI_ExtremaCurveCurve_h
#endif

public:
    GeomAPI_ExtremaCurveCurve(::GeomAPI_ExtremaCurveCurve* nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_ExtremaCurveCurve>( nativeInstance, true )
    {}

    GeomAPI_ExtremaCurveCurve(::GeomAPI_ExtremaCurveCurve& nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_ExtremaCurveCurve>( &nativeInstance, false )
    {}

    property ::GeomAPI_ExtremaCurveCurve* NativeInstance
    {
        ::GeomAPI_ExtremaCurveCurve* get()
        {
            return static_cast<::GeomAPI_ExtremaCurveCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty algorithm for computing
    /// extrema between two curves. Use an Init function
    /// to define the curves on which it is going to work.
    /// </summary>
    GeomAPI_ExtremaCurveCurve();
    /// <summary>
    /// Computes the extrema between the curves C1 and C2.
    /// </summary>
    GeomAPI_ExtremaCurveCurve(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2);
    /// <summary>
    /// Computes   the portion of the curve C1 limited by the two
    /// points of parameter (U1min,U1max), and
    /// -   the portion of the curve C2 limited by the two
    /// points of parameter (U2min,U2max).
    /// Warning
    /// Use the function NbExtrema to obtain the number
    /// of solutions. If this algorithm fails, NbExtrema returns 0.
    /// </summary>
    GeomAPI_ExtremaCurveCurve(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2, double U1min, double U1max, double U2min, double U2max);
    /// <summary>
    /// Initializes this algorithm with the given arguments
    /// and computes the extrema between the curves C1 and C2
    /// </summary>
    void Init(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2);
    /// <summary>
    /// Initializes this algorithm with the given arguments
    /// and computes the extrema between :
    /// -   the portion of the curve C1 limited by the two
    /// points of parameter (U1min,U1max), and
    /// -   the portion of the curve C2 limited by the two
    /// points of parameter (U2min,U2max).
    /// Warning
    /// Use the function NbExtrema to obtain the number
    /// of solutions. If this algorithm fails, NbExtrema returns 0.
    /// </summary>
    void Init(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2, double U1min, double U1max, double U2min, double U2max);
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
    void Points(int Index, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
    /// <summary>
    /// Returns the parameters U1 of the point on the first
    /// curve and U2 of the point on the second curve, which
    /// are the ends of the extremum of index Index computed by this algorithm.
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
    /// Returns True if the two curves are parallel.
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the points P1 on the first curve and P2 on
    /// the second curve, which are the ends of the shortest
    /// extremum computed by this algorithm.
    /// Exceptions StdFail_NotDone if this algorithm fails.
    /// </summary>
    void NearestPoints(Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
    /// <summary>
    /// Returns the parameters U1 of the point on the first
    /// curve and U2 of the point on the second curve, which
    /// are the ends of the shortest extremum computed by this algorithm.
    /// Exceptions StdFail_NotDone if this algorithm fails.
    /// </summary>
    void LowerDistanceParameters(double% U1, double% U2);
    /// <summary>
    /// Computes the distance between the end points of the
    /// shortest extremum computed by this algorithm.
    /// Exceptions StdFail_NotDone if this algorithm fails.
    /// </summary>
    double LowerDistance();
    /// <summary>
    /// set  in  <P1>  and <P2> the couple solution points
    /// such a the distance [P1,P2] is the minimum. taking  in  account
    /// extremity  points  of  curves.
    /// </summary>
    bool TotalNearestPoints(Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
    /// <summary>
    /// set  in <U1> and <U2> the parameters of the couple
    /// solution   points  which  represents  the  total  nearest
    /// solution.
    /// </summary>
    bool TotalLowerDistanceParameters(double% U1, double% U2);
    /// <summary>
    /// return the distance of the total  nearest couple solution
    /// point.
    /// if <myExtCC> is not done
    /// </summary>
    double TotalLowerDistance();
}; // class GeomAPI_ExtremaCurveCurve

//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaCurveSurface
//---------------------------------------------------------------------
/// <summary>
/// Describes functions for computing all the extrema
/// between a curve and a surface.
/// An ExtremaCurveSurface algorithm minimizes or
/// maximizes the distance between a point on the curve
/// and a point on the surface. Thus, it computes start
/// and end points of perpendiculars common to the
/// curve and the surface (an intersection point is not an
/// extremum except where the curve and the surface
/// are tangential at this point).
/// Solutions consist of pairs of points, and an extremum
/// is considered to be a segment joining the two points of a solution.
/// An ExtremaCurveSurface object provides a framework for:
/// -   defining the construction of the extrema,
/// -   implementing the construction algorithm, and
/// -   consulting the results.
/// Warning
/// In some cases, the nearest points between a curve
/// and a surface do not correspond to one of the
/// computed extrema. Instead, they may be given by:
/// -   a point of a bounding curve of the surface and one of the following:
/// -   its orthogonal projection on the curve,
/// -   a limit point of the curve; or
/// -   a limit point of the curve and its projection on the surface; or
/// -   an intersection point between the curve and the surface.
/// </summary>
public ref class GeomAPI_ExtremaCurveSurface sealed
    : public Macad::Occt::BaseClass<::GeomAPI_ExtremaCurveSurface>
{

#ifdef Include_GeomAPI_ExtremaCurveSurface_h
public:
    Include_GeomAPI_ExtremaCurveSurface_h
#endif

public:
    GeomAPI_ExtremaCurveSurface(::GeomAPI_ExtremaCurveSurface* nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_ExtremaCurveSurface>( nativeInstance, true )
    {}

    GeomAPI_ExtremaCurveSurface(::GeomAPI_ExtremaCurveSurface& nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_ExtremaCurveSurface>( &nativeInstance, false )
    {}

    property ::GeomAPI_ExtremaCurveSurface* NativeInstance
    {
        ::GeomAPI_ExtremaCurveSurface* get()
        {
            return static_cast<::GeomAPI_ExtremaCurveSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty algorithm for computing
    /// extrema between a curve and a surface. Use an
    /// Init function to define the curve and the surface on
    /// which it is going to work.
    /// </summary>
    GeomAPI_ExtremaCurveSurface();
    /// <summary>
    /// Computes  the  extrema  distances  between  the
    /// curve <C> and the surface  <S>.
    /// </summary>
    GeomAPI_ExtremaCurveSurface(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface);
    /// <summary>
    /// Computes  the  extrema  distances  between  the
    /// curve <C>  and the  surface  <S>.  The solution
    /// point are computed in the domain [Wmin,Wmax] of
    /// the  curve   and  in  the  domain   [Umin,Umax]
    /// [Vmin,Vmax] of the surface.
    /// Warning
    /// Use the function NbExtrema to obtain the number
    /// of solutions. If this algorithm fails, NbExtrema returns 0.
    /// </summary>
    GeomAPI_ExtremaCurveSurface(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface, double Wmin, double Wmax, double Umin, double Umax, double Vmin, double Vmax);
    /// <summary>
    /// Computes  the  extrema  distances  between  the
    /// curve <C> and the surface  <S>.
    /// </summary>
    void Init(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface);
    /// <summary>
    /// Computes  the  extrema  distances  between  the
    /// curve <C>  and the  surface  <S>.  The solution
    /// point are computed in the domain [Wmin,Wmax] of
    /// the  curve   and  in  the  domain   [Umin,Umax]
    /// [Vmin,Vmax] of the surface.
    /// Warning
    /// Use the function NbExtrema to obtain the number
    /// of solutions. If this algorithm fails, NbExtrema returns 0.
    /// </summary>
    void Init(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface, double Wmin, double Wmax, double Umin, double Umax, double Vmin, double Vmax);
    /// <summary>
    /// Returns the number of extrema computed by this algorithm.
    /// Note: if this algorithm fails, NbExtrema returns 0.
    /// </summary>
    int NbExtrema();
    /// <summary>
    /// Returns the points P1 on the curve and P2 on the
    /// surface, which are the ends of the extremum of index
    /// Index computed by this algorithm.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [
    /// 1,NbExtrema ], where NbExtrema is the
    /// number of extrema computed by this algorithm.
    /// </summary>
    void Points(int Index, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
    /// <summary>
    /// Returns the parameters W of the point on the curve,
    /// and (U,V) of the point on the surface, which are the
    /// ends of the extremum of index Index computed by this algorithm.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [
    /// 1,NbExtrema ], where NbExtrema is the
    /// number of extrema computed by this algorithm.
    /// </summary>
    void Parameters(int Index, double% W, double% U, double% V);
    /// <summary>
    /// Computes the distance between the end points of the
    /// extremum of index Index computed by this algorithm.
    /// Exceptions
    /// Standard_OutOfRange if index is not in the range [
    /// 1,NbExtrema ], where NbExtrema is the
    /// number of extrema computed by this algorithm.
    /// </summary>
    double Distance(int Index);
    /// <summary>
    /// Returns True if the curve is on a parallel surface.
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the points PC on the curve and PS on the
    /// surface, which are the ends of the shortest extremum computed by this algorithm.
    /// Exceptions - StdFail_NotDone if this algorithm fails.
    /// </summary>
    void NearestPoints(Macad::Occt::Pnt% PC, Macad::Occt::Pnt% PS);
    /// <summary>
    /// Returns the parameters W of the point on the curve
    /// and (U,V) of the point on the surface, which are the
    /// ends of the shortest extremum computed by this algorithm.
    /// Exceptions - StdFail_NotDone if this algorithm fails.
    /// </summary>
    void LowerDistanceParameters(double% W, double% U, double% V);
    /// <summary>
    /// Computes the distance between the end points of the
    /// shortest extremum computed by this algorithm.
    /// Exceptions - StdFail_NotDone if this algorithm fails.
    /// </summary>
    double LowerDistance();
}; // class GeomAPI_ExtremaCurveSurface

//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaSurfaceSurface
//---------------------------------------------------------------------
/// <summary>
/// Describes functions for computing all the extrema
/// between two surfaces.
/// An ExtremaSurfaceSurface algorithm minimizes or
/// maximizes the distance between a point on the first
/// surface and a point on the second surface. Results
/// are start and end points of perpendiculars common to the two surfaces.
/// Solutions consist of pairs of points, and an extremum
/// is considered to be a segment joining the two points of a solution.
/// An ExtremaSurfaceSurface object provides a framework for:
/// -   defining the construction of the extrema,
/// -   implementing the construction algorithm, and
/// -   consulting the results.
/// Warning
/// In some cases, the nearest points between the two
/// surfaces do not correspond to one of the computed
/// extrema. Instead, they may be given by:
/// -   a point of a bounding curve of one surface and one of the following:
/// -   its orthogonal projection on the other surface,
/// -   a point of a bounding curve of the other surface; or
/// -   any point on intersection curves between the two surfaces.
/// </summary>
public ref class GeomAPI_ExtremaSurfaceSurface sealed
    : public Macad::Occt::BaseClass<::GeomAPI_ExtremaSurfaceSurface>
{

#ifdef Include_GeomAPI_ExtremaSurfaceSurface_h
public:
    Include_GeomAPI_ExtremaSurfaceSurface_h
#endif

public:
    GeomAPI_ExtremaSurfaceSurface(::GeomAPI_ExtremaSurfaceSurface* nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_ExtremaSurfaceSurface>( nativeInstance, true )
    {}

    GeomAPI_ExtremaSurfaceSurface(::GeomAPI_ExtremaSurfaceSurface& nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_ExtremaSurfaceSurface>( &nativeInstance, false )
    {}

    property ::GeomAPI_ExtremaSurfaceSurface* NativeInstance
    {
        ::GeomAPI_ExtremaSurfaceSurface* get()
        {
            return static_cast<::GeomAPI_ExtremaSurfaceSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty algorithm for computing
    /// extrema between two surfaces. Use an Init function
    /// to define the surfaces on which it is going to work.
    /// </summary>
    GeomAPI_ExtremaSurfaceSurface();
    /// <summary>
    /// Computes  the  extrema  distances  between  the
    /// surfaces <S1>  and <S2>
    /// </summary>
    GeomAPI_ExtremaSurfaceSurface(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2);
    /// <summary>
    /// Computes  the  extrema  distances  between
    /// the portion of the surface S1 limited by the
    /// two values of parameter (U1min,U1max) in
    /// the u parametric direction, and by the two
    /// values of parameter (V1min,V1max) in the v
    /// parametric direction, and
    /// -   the portion of the surface S2 limited by the
    /// two values of parameter (U2min,U2max) in
    /// the u parametric direction, and by the two
    /// values of parameter (V2min,V2max) in the v
    /// parametric direction.
    /// </summary>
    GeomAPI_ExtremaSurfaceSurface(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double U1min, double U1max, double V1min, double V1max, double U2min, double U2max, double V2min, double V2max);
    /// <summary>
    /// Initializes this algorithm with the given arguments
    /// and computes  the  extrema  distances  between  the
    /// surfaces <S1>  and <S2>
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2);
    /// <summary>
    /// Initializes this algorithm with the given arguments
    /// and computes  the  extrema  distances  between -
    /// the portion of the surface S1 limited by the two
    /// values of parameter (U1min,U1max) in the u
    /// parametric direction, and by the two values of
    /// parameter (V1min,V1max) in the v parametric direction, and
    /// -   the portion of the surface S2 limited by the two
    /// values of parameter (U2min,U2max) in the u
    /// parametric direction, and by the two values of
    /// parameter (V2min,V2max) in the v parametric direction.
    /// </summary>
    void Init(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double U1min, double U1max, double V1min, double V1max, double U2min, double U2max, double V2min, double V2max);
    /// <summary>
    /// Returns the number of extrema computed by this algorithm.
    /// Note: if this algorithm fails, NbExtrema returns 0.
    /// </summary>
    int NbExtrema();
    /// <summary>
    /// Returns the points P1 on the first surface and P2 on
    /// the second surface, which are the ends of the
    /// extremum of index Index computed by this algorithm.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [
    /// 1,NbExtrema ], where NbExtrema is the
    /// number of extrema computed by this algorithm.
    /// </summary>
    void Points(int Index, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
    /// <summary>
    /// Returns the parameters (U1,V1) of the point on the
    /// first surface, and (U2,V2) of the point on the second
    /// surface, which are the ends of the extremum of index
    /// Index computed by this algorithm.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [
    /// 1,NbExtrema ], where NbExtrema is the
    /// number of extrema computed by this algorithm.
    /// </summary>
    void Parameters(int Index, double% U1, double% V1, double% U2, double% V2);
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
    /// Returns True if the surfaces are parallel
    /// </summary>
    bool IsParallel();
    /// <summary>
    /// Returns the points P1 on the first surface and P2 on
    /// the second surface, which are the ends of the
    /// shortest extremum computed by this algorithm.
    /// Exceptions StdFail_NotDone if this algorithm fails.
    /// </summary>
    void NearestPoints(Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
    /// <summary>
    /// Returns the parameters (U1,V1) of the point on the
    /// first surface and (U2,V2) of the point on the second
    /// surface, which are the ends of the shortest extremum
    /// computed by this algorithm.
    /// Exceptions - StdFail_NotDone if this algorithm fails.
    /// </summary>
    void LowerDistanceParameters(double% U1, double% V1, double% U2, double% V2);
    /// <summary>
    /// Computes the distance between the end points of the
    /// shortest extremum computed by this algorithm.
    /// Exceptions StdFail_NotDone if this algorithm fails.
    /// </summary>
    double LowerDistance();
    /// <summary>
    /// return the algorithmic object from Extrema
    /// </summary>
    Macad::Occt::Extrema_ExtSS^ Extrema();
}; // class GeomAPI_ExtremaSurfaceSurface

//---------------------------------------------------------------------
//  Class  GeomAPI_IntCS
//---------------------------------------------------------------------
/// <summary>
/// This class implements methods for
/// computing intersection points and  segments between a
/// </summary>
public ref class GeomAPI_IntCS sealed
    : public Macad::Occt::BaseClass<::GeomAPI_IntCS>
{

#ifdef Include_GeomAPI_IntCS_h
public:
    Include_GeomAPI_IntCS_h
#endif

public:
    GeomAPI_IntCS(::GeomAPI_IntCS* nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_IntCS>( nativeInstance, true )
    {}

    GeomAPI_IntCS(::GeomAPI_IntCS& nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_IntCS>( &nativeInstance, false )
    {}

    property ::GeomAPI_IntCS* NativeInstance
    {
        ::GeomAPI_IntCS* get()
        {
            return static_cast<::GeomAPI_IntCS*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an empty object. Use the
    /// function Perform for further initialization of the algorithm by
    /// the curve and the surface.
    /// </summary>
    GeomAPI_IntCS();
    /// <summary>
    /// Computes the intersections between
    /// the curve C and the surface S.
    /// Warning
    /// Use function IsDone to verify that the intersections are computed successfully.
    /// </summary>
    GeomAPI_IntCS(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// This function Initializes an algorithm with the curve C and the
    /// surface S and computes the intersections between C and S.
    /// Warning
    /// Use function IsDone to verify that the intersections are computed successfully.
    /// </summary>
    void Perform(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// Returns true if the intersections are successfully computed.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of Intersection Points
    /// if IsDone returns True.
    /// else NotDone is raised.
    /// </summary>
    int NbPoints();
    /// <summary>
    /// Returns the Intersection Point of range <Index>in case of cross intersection.
    /// Raises NotDone if the computation has failed or if
    /// the computation has not been done
    /// raises OutOfRange if Index is not in the range <1..NbPoints>
    /// </summary>
    Macad::Occt::Pnt Point(int Index);
    /// <summary>
    /// Returns parameter W on the curve
    /// and (parameters U,V) on the surface of the computed intersection point
    /// of index Index in case of cross intersection.
    /// Exceptions
    /// StdFail_NotDone if intersection algorithm fails or is not initialized.
    /// Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where
    /// NbPoints is the number of computed intersection points.
    /// </summary>
    void Parameters(int Index, double% U, double% V, double% W);
    /// <summary>
    /// Returns the number of computed
    /// intersection segments in case of tangential intersection.
    /// Exceptions
    /// StdFail_NotDone if the intersection algorithm fails or is not initialized.
    /// </summary>
    int NbSegments();
    /// <summary>
    /// Returns the computed intersection
    /// segment of index Index in case of tangential intersection.
    /// Intersection segment is a portion of the initial curve tangent to surface.
    /// Exceptions
    /// StdFail_NotDone if intersection algorithm fails or is not initialized.
    /// Standard_OutOfRange if Index is not in the range [ 1,NbSegments ],
    /// where NbSegments is the number of computed intersection segments.
    /// </summary>
    Macad::Occt::Geom_Curve^ Segment(int Index);
    /// <summary>
    /// Returns the parameters of the first (U1,V1) and the last (U2,V2) points
    /// of curve's segment on the surface in case of tangential intersection.
    /// Index is the number of computed intersection segments.
    /// Exceptions
    /// StdFail_NotDone if intersection algorithm fails or is not initialized.
    /// Standard_OutOfRange if Index is not in the range [ 1,NbSegments ],
    /// where NbSegments is the number of computed intersection segments.
    /// </summary>
    void Parameters(int Index, double% U1, double% V1, double% U2, double% V2);
}; // class GeomAPI_IntCS

//---------------------------------------------------------------------
//  Class  GeomAPI_Interpolate
//---------------------------------------------------------------------
/// <summary>
/// This  class  is  used  to  interpolate a  BsplineCurve
/// passing   through  an  array  of  points,  with  a  C2
/// Continuity if tangency is not requested at the point.
/// If tangency is requested at the point the continuity will
/// be C1.  If Perodicity is requested the curve will be closed
/// and the junction will be the first point given. The curve
/// will than be only C1
/// Describes functions for building a constrained 3D BSpline curve.
/// The curve is defined by a table of points
/// through which it passes, and if required:
/// -   by a parallel table of reals which gives the
/// value of the parameter of each point through
/// which the resulting BSpline curve passes, and
/// -   by vectors tangential to these points.
/// An Interpolate object provides a framework for:
/// -   defining the constraints of the BSpline curve,
/// -   implementing the interpolation algorithm, and
/// -   consulting the results.
/// </summary>
public ref class GeomAPI_Interpolate sealed
    : public Macad::Occt::BaseClass<::GeomAPI_Interpolate>
{

#ifdef Include_GeomAPI_Interpolate_h
public:
    Include_GeomAPI_Interpolate_h
#endif

public:
    GeomAPI_Interpolate(::GeomAPI_Interpolate* nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_Interpolate>( nativeInstance, true )
    {}

    GeomAPI_Interpolate(::GeomAPI_Interpolate& nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_Interpolate>( &nativeInstance, false )
    {}

    property ::GeomAPI_Interpolate* NativeInstance
    {
        ::GeomAPI_Interpolate* get()
        {
            return static_cast<::GeomAPI_Interpolate*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes an algorithm for constructing a
    /// constrained BSpline curve passing through the points of the table   Points.
    /// Tangential vectors can then be assigned, using the function Load.
    /// If PeriodicFlag is true, the constrained BSpline
    /// curve will be periodic and closed. In this case,
    /// the junction point is the first point of the table Points.
    /// The tolerance value Tolerance is used to check that:
    /// -   points are not too close to each other, or
    /// -   tangential vectors (defined using the
    /// function Load) are not too small.
    /// The resulting BSpline curve will be "C2"
    /// continuous, except where a tangency
    /// constraint is defined on a point through which
    /// the curve passes (by using the Load function).
    /// In this case, it will be only "C1" continuous.
    /// Once all the constraints are defined, use the
    /// function Perform to compute the curve.
    /// Warning
    /// -   There must be at least 2 points in the table Points.
    /// -   If PeriodicFlag is false, there must be as
    /// many parameters in the array Parameters as
    /// there are points in the array Points.
    /// -   If PeriodicFlag is true, there must be one
    /// more parameter in the table Parameters: this
    /// is used to give the parameter on the
    /// resulting BSpline curve of the junction point
    /// of the curve (which is also the first point of the table Points).
    /// Exceptions
    /// -   Standard_ConstructionError if the
    /// distance between two consecutive points in
    /// the table Points is less than or equal to Tolerance.
    /// -   Standard_OutOfRange if:
    /// -   there are less than two points in the table Points, or
    /// -   conditions relating to the respective
    /// number of elements in the parallel tables
    /// Points and Parameters are not respected.
    /// </summary>
    GeomAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt^ Points, bool PeriodicFlag, double Tolerance);
    /// <summary>
    /// Initializes an algorithm for constructing a
    /// constrained BSpline curve passing through the points of the table
    /// Points, where the parameters of each of its
    /// points are given by the parallel table Parameters.
    /// Tangential vectors can then be assigned, using the function Load.
    /// If PeriodicFlag is true, the constrained BSpline
    /// curve will be periodic and closed. In this case,
    /// the junction point is the first point of the table Points.
    /// The tolerance value Tolerance is used to check that:
    /// -   points are not too close to each other, or
    /// -   tangential vectors (defined using the
    /// function Load) are not too small.
    /// The resulting BSpline curve will be "C2"
    /// continuous, except where a tangency
    /// constraint is defined on a point through which
    /// the curve passes (by using the Load function).
    /// In this case, it will be only "C1" continuous.
    /// Once all the constraints are defined, use the
    /// function Perform to compute the curve.
    /// Warning
    /// -   There must be at least 2 points in the table Points.
    /// -   If PeriodicFlag is false, there must be as
    /// many parameters in the array Parameters as
    /// there are points in the array Points.
    /// -   If PeriodicFlag is true, there must be one
    /// more parameter in the table Parameters: this
    /// is used to give the parameter on the
    /// resulting BSpline curve of the junction point
    /// of the curve (which is also the first point of the table Points).
    /// Exceptions
    /// -   Standard_ConstructionError if the
    /// distance between two consecutive points in
    /// the table Points is less than or equal to Tolerance.
    /// -   Standard_OutOfRange if:
    /// -   there are less than two points in the table Points, or
    /// -   conditions relating to the respective
    /// number of elements in the parallel tables
    /// Points and Parameters are not respected.
    /// </summary>
    GeomAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt^ Points, Macad::Occt::TColStd_HArray1OfReal^ Parameters, bool PeriodicFlag, double Tolerance);
    /// <summary>
    /// Assigns this constrained BSpline curve to be
    /// tangential to vectors InitialTangent and FinalTangent
    /// at its first and last points respectively (i.e.
    /// the first and last points of the table of
    /// points through which the curve passes, as
    /// defined at the time of initialization).
    /// </summary>
    void Load(Macad::Occt::Vec InitialTangent, Macad::Occt::Vec FinalTangent, bool Scale);
    /// <summary>
    /// Assigns this constrained BSpline curve to be
    /// tangential to vectors InitialTangent and FinalTangent
    /// at its first and last points respectively (i.e.
    /// the first and last points of the table of
    /// points through which the curve passes, as
    /// defined at the time of initialization).
    /// </summary>
    void Load(Macad::Occt::Vec InitialTangent, Macad::Occt::Vec FinalTangent);
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
    /// </summary>
    void Load(Macad::Occt::TColgp_Array1OfVec^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags, bool Scale);
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
    /// </summary>
    void Load(Macad::Occt::TColgp_Array1OfVec^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags);
    /// <summary>
    /// Computes the constrained BSpline curve.
    /// Use the function IsDone to verify that the
    /// computation is successful, and then the function Curve to obtain the result.
    /// </summary>
    void Perform();
    /// <summary>
    /// Returns the computed BSpline curve.
    /// Raises StdFail_NotDone if the interpolation fails.
    /// </summary>
    Macad::Occt::Geom_BSplineCurve^ Curve();
    /// <summary>
    /// Returns true if the constrained BSpline curve is successfully constructed.
    /// Note: in this case, the result is given by the function Curve.
    /// </summary>
    bool IsDone();
}; // class GeomAPI_Interpolate

//---------------------------------------------------------------------
//  Class  GeomAPI_IntSS
//---------------------------------------------------------------------
/// <summary>
/// This class implements methods for
/// computing the intersection curves   between two surfaces.
/// The result is curves from Geom.  The "domain" used for
/// a surface   is the natural  parametric domain
/// unless the surface is a  RectangularTrimmedSurface
/// from Geom.
/// </summary>
public ref class GeomAPI_IntSS sealed
    : public Macad::Occt::BaseClass<::GeomAPI_IntSS>
{

#ifdef Include_GeomAPI_IntSS_h
public:
    Include_GeomAPI_IntSS_h
#endif

public:
    GeomAPI_IntSS(::GeomAPI_IntSS* nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_IntSS>( nativeInstance, true )
    {}

    GeomAPI_IntSS(::GeomAPI_IntSS& nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_IntSS>( &nativeInstance, false )
    {}

    property ::GeomAPI_IntSS* NativeInstance
    {
        ::GeomAPI_IntSS* get()
        {
            return static_cast<::GeomAPI_IntSS*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty object. Use the
    /// function Perform for further initialization algorithm by two surfaces.
    /// </summary>
    GeomAPI_IntSS();
    /// <summary>
    /// Computes the intersection curves
    /// between the two surfaces S1 and S2. Parameter Tol defines the precision
    /// of curves computation. For most cases the value 1.0e-7 is recommended to use.
    /// Warning
    /// Use the function IsDone to verify that the intersections are successfully computed.I
    /// </summary>
    GeomAPI_IntSS(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double Tol);
    /// <summary>
    /// Initializes an algorithm with the
    /// given arguments and computes the intersection curves between the two surfaces S1 and S2.
    /// Parameter Tol defines the precision of curves computation. For most
    /// cases the value 1.0e-7 is recommended to use.
    /// Warning
    /// Use function IsDone to verify that the intersections are successfully computed.
    /// </summary>
    void Perform(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double Tol);
    /// <summary>
    /// Returns True if the intersection was successful.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the number of computed intersection curves.
    /// Exceptions
    /// StdFail_NotDone if the computation fails.
    /// </summary>
    int NbLines();
    /// <summary>
    /// Returns the computed intersection curve of index Index.
    /// Exceptions
    /// StdFail_NotDone if the computation fails.
    /// Standard_OutOfRange if Index is out of range [1, NbLines] where NbLines
    /// is the number of computed intersection curves.
    /// </summary>
    Macad::Occt::Geom_Curve^ Line(int Index);
}; // class GeomAPI_IntSS

//---------------------------------------------------------------------
//  Class  GeomAPI_PointsToBSpline
//---------------------------------------------------------------------
/// <summary>
/// This  class  is  used  to  approximate a  BsplineCurve
/// passing  through an  array  of points,  with  a  given Continuity.
/// Describes functions for building a 3D BSpline
/// curve which approximates a set of points.
/// A PointsToBSpline object provides a framework for:
/// -   defining the data of the BSpline curve to be built,
/// -   implementing the approximation algorithm, and consulting the results.
/// </summary>
public ref class GeomAPI_PointsToBSpline sealed
    : public Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>
{

#ifdef Include_GeomAPI_PointsToBSpline_h
public:
    Include_GeomAPI_PointsToBSpline_h
#endif

public:
    GeomAPI_PointsToBSpline(::GeomAPI_PointsToBSpline* nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>( nativeInstance, true )
    {}

    GeomAPI_PointsToBSpline(::GeomAPI_PointsToBSpline& nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_PointsToBSpline>( &nativeInstance, false )
    {}

    property ::GeomAPI_PointsToBSpline* NativeInstance
    {
        ::GeomAPI_PointsToBSpline* get()
        {
            return static_cast<::GeomAPI_PointsToBSpline*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty approximation algorithm.
    /// Use an Init function to define and build the BSpline curve.
    /// </summary>
    GeomAPI_PointsToBSpline();
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points);
    /* Method skipped due to unknown mapping: void GeomAPI_PointsToBSpline(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /* Method skipped due to unknown mapping: void GeomAPI_PointsToBSpline(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /* Method skipped due to unknown mapping: void GeomAPI_PointsToBSpline(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /* Method skipped due to unknown mapping: void GeomAPI_PointsToBSpline(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /* Method skipped due to unknown mapping: void GeomAPI_PointsToBSpline(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin);
    /// <summary>
    /// Approximate  a BSpline  Curve passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points);
    /* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin);
    /// <summary>
    /// Approximate  a  BSpline  Curve  passing through an
    /// array of Point,  which parameters are given by the
    /// array <Parameters>.
    /// The resulting  BSpline   will have the   following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax);
    /// <summary>
    /// Approximate a BSpline Curve  passing through an
    /// array of Point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion
    /// </summary>
    void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3);
    /// <summary>
    /// Returns the computed BSpline curve.
    /// Raises StdFail_NotDone if the curve is not built.
    /// </summary>
    Macad::Occt::Geom_BSplineCurve^ Curve();
    bool IsDone();
}; // class GeomAPI_PointsToBSpline

//---------------------------------------------------------------------
//  Class  GeomAPI_PointsToBSplineSurface
//---------------------------------------------------------------------
/// <summary>
/// This class is used to approximate or interpolate
/// a BSplineSurface passing through an  Array2 of
/// points, with a given continuity.
/// Describes functions for building a BSpline
/// surface which approximates or interpolates a set of points.
/// A PointsToBSplineSurface object provides a framework for:
/// -   defining the data of the BSpline surface to be built,
/// -   implementing the approximation algorithm
/// or the interpolation algorithm, and consulting the results.
/// In fact, class contains 3 algorithms, 2 for approximation and 1
/// for interpolation.
/// First approximation algorithm is based on usual least square criterium:
/// minimization of square distance between samplimg points and result surface.
/// Second approximation algorithm uses least square criterium and additional
/// minimization of some local characteristic of surface (first, second and third
/// partial derivative), which allows managing shape of surface.
/// Interpolation algorithm produces surface, which passes through sampling points.
/// 
/// There is accordance between parametrization of result surface S(U, V) and
/// indexes of array Points(i, j): first index corresponds U parameter of surface,
/// second - V parameter of surface.
/// So, points of any j-th column Points(*, j) represent any V isoline of surface,
/// points of any i-th row Point(i, *) represent any U isoline of surface.
/// 
/// For each sampling point parameters U, V are calculated according to
/// type of parametrization, which can be Approx_ChordLength, Approx_Centripetal
/// or Approx_IsoParametric. Default value is Approx_ChordLength.
/// For ChordLength parametrisation U(i) = U(i-1) + P(i).Distance(P(i-1)),
/// For Centripetal type  U(i) = U(i-1) + Sqrt(P(i).Distance(P(i-1))).
/// Centripetal type can get better result for irregular distances between points.
/// 
/// Approximation and interpolation algorithms can build periodical surface along U
/// direction, which corresponds columns of array Points(i, j),
/// if corresponding parameter (thePeriodic, see comments below) of called
/// methods is set to True. Algorithm uses first row Points(1, *) as periodic boundary,
/// so to avoid getting wrong surface it is necessary to keep distance between
/// corresponding points of first and last rows of Points:
/// Points(1, *) != Points(Upper, *).
/// </summary>
public ref class GeomAPI_PointsToBSplineSurface sealed
    : public Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>
{

#ifdef Include_GeomAPI_PointsToBSplineSurface_h
public:
    Include_GeomAPI_PointsToBSplineSurface_h
#endif

public:
    GeomAPI_PointsToBSplineSurface(::GeomAPI_PointsToBSplineSurface* nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>( nativeInstance, true )
    {}

    GeomAPI_PointsToBSplineSurface(::GeomAPI_PointsToBSplineSurface& nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_PointsToBSplineSurface>( &nativeInstance, false )
    {}

    property ::GeomAPI_PointsToBSplineSurface* NativeInstance
    {
        ::GeomAPI_PointsToBSplineSurface* get()
        {
            return static_cast<::GeomAPI_PointsToBSplineSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an empty algorithm for
    /// approximation or interpolation of a surface.
    /// Use:
    /// -   an Init function to define and build the
    /// BSpline surface by approximation, or
    /// -   an Interpolate function to define and build
    /// the BSpline surface by interpolation.
    /// </summary>
    GeomAPI_PointsToBSplineSurface();
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D.
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D.
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D.
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D.
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D.
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points);
    /* Method skipped due to unknown mapping: void GeomAPI_PointsToBSplineSurface(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /* Method skipped due to unknown mapping: void GeomAPI_PointsToBSplineSurface(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /* Method skipped due to unknown mapping: void GeomAPI_PointsToBSplineSurface(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /* Method skipped due to unknown mapping: void GeomAPI_PointsToBSplineSurface(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /* Method skipped due to unknown mapping: void GeomAPI_PointsToBSplineSurface(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, ) */
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  points using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion.
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  points using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion.
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  points using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion.
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  points using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion.
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.
    /// 
    /// The points will be constructed as follow:
    /// P(i,j) = gp_Pnt( X0 + (i-1)*dX ,
    /// Y0 + (j-1)*dY ,
    /// ZPoints(i,j)   )
    /// 
    /// The resulting BSpline will  have the following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// 4- the parametrization of the surface will verify:
    /// S->Value( U, V) = gp_Pnt( U, V, Z(U,V) );
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.
    /// 
    /// The points will be constructed as follow:
    /// P(i,j) = gp_Pnt( X0 + (i-1)*dX ,
    /// Y0 + (j-1)*dY ,
    /// ZPoints(i,j)   )
    /// 
    /// The resulting BSpline will  have the following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// 4- the parametrization of the surface will verify:
    /// S->Value( U, V) = gp_Pnt( U, V, Z(U,V) );
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.
    /// 
    /// The points will be constructed as follow:
    /// P(i,j) = gp_Pnt( X0 + (i-1)*dX ,
    /// Y0 + (j-1)*dY ,
    /// ZPoints(i,j)   )
    /// 
    /// The resulting BSpline will  have the following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// 4- the parametrization of the surface will verify:
    /// S->Value( U, V) = gp_Pnt( U, V, Z(U,V) );
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.
    /// 
    /// The points will be constructed as follow:
    /// P(i,j) = gp_Pnt( X0 + (i-1)*dX ,
    /// Y0 + (j-1)*dY ,
    /// ZPoints(i,j)   )
    /// 
    /// The resulting BSpline will  have the following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// 4- the parametrization of the surface will verify:
    /// S->Value( U, V) = gp_Pnt( U, V, Z(U,V) );
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.
    /// 
    /// The points will be constructed as follow:
    /// P(i,j) = gp_Pnt( X0 + (i-1)*dX ,
    /// Y0 + (j-1)*dY ,
    /// ZPoints(i,j)   )
    /// 
    /// The resulting BSpline will  have the following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// 4- the parametrization of the surface will verify:
    /// S->Value( U, V) = gp_Pnt( U, V, Z(U,V) );
    /// </summary>
    GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY);
    /// <summary>
    /// Approximates  a BSpline Surface passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D.
    /// </summary>
    void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
    /// <summary>
    /// Approximates  a BSpline Surface passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D.
    /// </summary>
    void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximates  a BSpline Surface passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D.
    /// </summary>
    void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax);
    /// <summary>
    /// Approximates  a BSpline Surface passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D.
    /// </summary>
    void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin);
    /// <summary>
    /// Approximates  a BSpline Surface passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D.
    /// </summary>
    void Init(Macad::Occt::TColgp_Array2OfPnt^ Points);
    /// <summary>
    /// Interpolates  a BSpline Surface passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be 3.
    /// 2- his  continuity will be  C2.
    /// </summary>
    void Interpolate(Macad::Occt::TColgp_Array2OfPnt^ Points, bool thePeriodic);
    /// <summary>
    /// Interpolates  a BSpline Surface passing  through  an
    /// array of  Point.  The resulting BSpline will  have
    /// the following properties:
    /// 1- his degree will be 3.
    /// 2- his  continuity will be  C2.
    /// </summary>
    void Interpolate(Macad::Occt::TColgp_Array2OfPnt^ Points);
    /* Method skipped due to unknown mapping: void Interpolate(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, bool thePeriodic, ) */
    /* Method skipped due to unknown mapping: void Interpolate(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, bool thePeriodic, ) */
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.
    /// 
    /// The points will be constructed as follow:
    /// P(i,j) = gp_Pnt( X0 + (i-1)*dX ,
    /// Y0 + (j-1)*dY ,
    /// ZPoints(i,j)   )
    /// 
    /// The resulting BSpline will  have the following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// 4- the parametrization of the surface will verify:
    /// S->Value( U, V) = gp_Pnt( U, V, Z(U,V) );
    /// </summary>
    void Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.
    /// 
    /// The points will be constructed as follow:
    /// P(i,j) = gp_Pnt( X0 + (i-1)*dX ,
    /// Y0 + (j-1)*dY ,
    /// ZPoints(i,j)   )
    /// 
    /// The resulting BSpline will  have the following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// 4- the parametrization of the surface will verify:
    /// S->Value( U, V) = gp_Pnt( U, V, Z(U,V) );
    /// </summary>
    void Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.
    /// 
    /// The points will be constructed as follow:
    /// P(i,j) = gp_Pnt( X0 + (i-1)*dX ,
    /// Y0 + (j-1)*dY ,
    /// ZPoints(i,j)   )
    /// 
    /// The resulting BSpline will  have the following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// 4- the parametrization of the surface will verify:
    /// S->Value( U, V) = gp_Pnt( U, V, Z(U,V) );
    /// </summary>
    void Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.
    /// 
    /// The points will be constructed as follow:
    /// P(i,j) = gp_Pnt( X0 + (i-1)*dX ,
    /// Y0 + (j-1)*dY ,
    /// ZPoints(i,j)   )
    /// 
    /// The resulting BSpline will  have the following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// 4- the parametrization of the surface will verify:
    /// S->Value( U, V) = gp_Pnt( U, V, Z(U,V) );
    /// </summary>
    void Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin);
    /// <summary>
    /// Approximates  a BSpline  Surface passing  through  an
    /// array of  Points.
    /// 
    /// The points will be constructed as follow:
    /// P(i,j) = gp_Pnt( X0 + (i-1)*dX ,
    /// Y0 + (j-1)*dY ,
    /// ZPoints(i,j)   )
    /// 
    /// The resulting BSpline will  have the following
    /// properties:
    /// 1- his degree will be in the range [Degmin,Degmax]
    /// 2- his  continuity will be  at  least <Continuity>
    /// 3- the distance from the point <Points> to the
    /// BSpline will be lower to Tol3D
    /// 4- the parametrization of the surface will verify:
    /// S->Value( U, V) = gp_Pnt( U, V, Z(U,V) );
    /// </summary>
    void Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY);
    /// <summary>
    /// Interpolates  a BSpline  Surface passing  through  an
    /// array of  Points.
    /// 
    /// The points will be constructed as follow:
    /// P(i,j) = gp_Pnt( X0 + (i-1)*dX ,
    /// Y0 + (j-1)*dY ,
    /// ZPoints(i,j)   )
    /// 
    /// The resulting BSpline will  have the following
    /// properties:
    /// 1- his degree will be 3
    /// 2- his  continuity will be  C2.
    /// 4- the parametrization of the surface will verify:
    /// S->Value( U, V) = gp_Pnt( U, V, Z(U,V) );
    /// </summary>
    void Interpolate(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY);
    /* Method skipped due to unknown mapping: void Init(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, bool thePeriodic, ) */
    /* Method skipped due to unknown mapping: void Init(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, bool thePeriodic, ) */
    /* Method skipped due to unknown mapping: void Init(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, bool thePeriodic, ) */
    /* Method skipped due to unknown mapping: void Init(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, bool thePeriodic, ) */
    /* Method skipped due to unknown mapping: void Init(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, bool thePeriodic, ) */
    /* Method skipped due to unknown mapping: void Init(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, int DegMin, int DegMax, GeomAbs_Shape Continuity, double Tol3D, bool thePeriodic, ) */
    /// <summary>
    /// Approximates  a BSpline Surface passing  through  an
    /// array of  point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion.
    /// </summary>
    void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
    /// <summary>
    /// Approximates  a BSpline Surface passing  through  an
    /// array of  point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion.
    /// </summary>
    void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
    /// <summary>
    /// Approximates  a BSpline Surface passing  through  an
    /// array of  point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion.
    /// </summary>
    void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax);
    /// <summary>
    /// Approximates  a BSpline Surface passing  through  an
    /// array of  point using variational smoothing algorithm,
    /// which tries to minimize additional criterium:
    /// Weight1*CurveLength + Weight2*Curvature + Weight3*Torsion.
    /// </summary>
    void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3);
    /// <summary>
    /// Returns the approximate BSpline Surface
    /// </summary>
    Macad::Occt::Geom_BSplineSurface^ Surface();
    bool IsDone();
}; // class GeomAPI_PointsToBSplineSurface

//---------------------------------------------------------------------
//  Class  GeomAPI_ProjectPointOnCurve
//---------------------------------------------------------------------
/// <summary>
/// This class implements methods for  computing all the orthogonal
/// projections of a 3D point onto a  3D curve.
/// </summary>
public ref class GeomAPI_ProjectPointOnCurve sealed
    : public Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnCurve>
{

#ifdef Include_GeomAPI_ProjectPointOnCurve_h
public:
    Include_GeomAPI_ProjectPointOnCurve_h
#endif

public:
    GeomAPI_ProjectPointOnCurve(::GeomAPI_ProjectPointOnCurve* nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnCurve>( nativeInstance, true )
    {}

    GeomAPI_ProjectPointOnCurve(::GeomAPI_ProjectPointOnCurve& nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnCurve>( &nativeInstance, false )
    {}

    property ::GeomAPI_ProjectPointOnCurve* NativeInstance
    {
        ::GeomAPI_ProjectPointOnCurve* get()
        {
            return static_cast<::GeomAPI_ProjectPointOnCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an empty object. Use an
    /// Init function for further initialization.
    /// </summary>
    GeomAPI_ProjectPointOnCurve();
    /// <summary>
    /// Create the projection  of a  point  <P> on a curve
    /// <Curve>
    /// </summary>
    GeomAPI_ProjectPointOnCurve(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve);
    /// <summary>
    /// Create  the projection  of a point <P>  on a curve
    /// <Curve> limited by the two points of parameter Umin and Usup.
    /// </summary>
    GeomAPI_ProjectPointOnCurve(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve, double Umin, double Usup);
    /// <summary>
    /// Init the projection  of a  point  <P> on a curve
    /// <Curve>
    /// </summary>
    void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve);
    /// <summary>
    /// Init  the  projection  of a  point <P>  on a curve
    /// <Curve> limited by the two points of parameter Umin and Usup.
    /// </summary>
    void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve, double Umin, double Usup);
    /// <summary>
    /// Init  the  projection  of a  point <P>  on a curve
    /// <Curve> limited by the two points of parameter Umin and Usup.
    /// </summary>
    void Init(Macad::Occt::Geom_Curve^ Curve, double Umin, double Usup);
    /// <summary>
    /// Performs the projection of a point on the current curve.
    /// </summary>
    void Perform(Macad::Occt::Pnt P);
    /// <summary>
    /// Returns the number of computed
    /// orthogonal projection points.
    /// Note: if this algorithm fails, NbPoints returns 0.
    /// </summary>
    int NbPoints();
    /// <summary>
    /// Returns the orthogonal projection
    /// on the curve. Index is a number of a computed point.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where
    /// NbPoints is the number of solution points.
    /// </summary>
    Macad::Occt::Pnt Point(int Index);
    /// <summary>
    /// Returns the parameter on the curve
    /// of the point, which is the orthogonal projection. Index is a
    /// number of a computed point.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where
    /// NbPoints is the number of solution points.
    /// </summary>
    double Parameter(int Index);
    /// <summary>
    /// Returns the parameter on the curve
    /// of the point, which is the orthogonal projection. Index is a
    /// number of a computed point.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where
    /// NbPoints is the number of solution points.-
    /// </summary>
    void Parameter(int Index, double% U);
    /// <summary>
    /// Computes the distance between the
    /// point and its orthogonal projection on the curve. Index is a number of a computed point.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where
    /// NbPoints is the number of solution points.
    /// </summary>
    double Distance(int Index);
    /// <summary>
    /// Returns the nearest orthogonal
    /// projection of the point on the curve.
    /// Exceptions: StdFail_NotDone if this algorithm fails.
    /// </summary>
    Macad::Occt::Pnt NearestPoint();
    /// <summary>
    /// Returns the parameter on the curve
    /// of the nearest orthogonal projection of the point.
    /// Exceptions: StdFail_NotDone if this algorithm fails.
    /// </summary>
    double LowerDistanceParameter();
    /// <summary>
    /// Computes the distance between the
    /// point and its nearest orthogonal projection on the curve.
    /// Exceptions: StdFail_NotDone if this algorithm fails.
    /// </summary>
    double LowerDistance();
    /// <summary>
    /// return the algorithmic object from Extrema
    /// </summary>
    Macad::Occt::Extrema_ExtPC^ Extrema();
}; // class GeomAPI_ProjectPointOnCurve

//---------------------------------------------------------------------
//  Class  GeomAPI_ProjectPointOnSurf
//---------------------------------------------------------------------
/// <summary>
/// This class implements methods for  computing all the orthogonal
/// projections of a point onto a  surface.
/// </summary>
public ref class GeomAPI_ProjectPointOnSurf sealed
    : public Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnSurf>
{

#ifdef Include_GeomAPI_ProjectPointOnSurf_h
public:
    Include_GeomAPI_ProjectPointOnSurf_h
#endif

public:
    GeomAPI_ProjectPointOnSurf(::GeomAPI_ProjectPointOnSurf* nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnSurf>( nativeInstance, true )
    {}

    GeomAPI_ProjectPointOnSurf(::GeomAPI_ProjectPointOnSurf& nativeInstance)
        : Macad::Occt::BaseClass<::GeomAPI_ProjectPointOnSurf>( &nativeInstance, false )
    {}

    property ::GeomAPI_ProjectPointOnSurf* NativeInstance
    {
        ::GeomAPI_ProjectPointOnSurf* get()
        {
            return static_cast<::GeomAPI_ProjectPointOnSurf*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an empty object. Use the
    /// Init function for further initialization.
    /// </summary>
    GeomAPI_ProjectPointOnSurf();
    /// <summary>
    /// Create the projection  of a point <P> on a surface
    /// <Surface>
    /// </summary>
    GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, Macad::Occt::Extrema_ExtAlgo Algo);
    /// <summary>
    /// Create the projection  of a point <P> on a surface
    /// <Surface>
    /// </summary>
    GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface);
    /// <summary>
    /// Create the projection  of a point <P> on a surface
    /// <Surface>
    /// Create the projection of a point <P>  on a surface
    /// <Surface>. The solution are computed in the domain
    /// [Umin,Usup] [Vmin,Vsup] of the surface.
    /// </summary>
    GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Tolerance, Macad::Occt::Extrema_ExtAlgo Algo);
    /// <summary>
    /// Create the projection  of a point <P> on a surface
    /// <Surface>
    /// Create the projection of a point <P>  on a surface
    /// <Surface>. The solution are computed in the domain
    /// [Umin,Usup] [Vmin,Vsup] of the surface.
    /// </summary>
    GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Tolerance);
    GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance, Macad::Occt::Extrema_ExtAlgo Algo);
    GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance);
    /// <summary>
    /// Init the projection  of a point <P> on a surface
    /// <Surface>
    /// </summary>
    GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, Macad::Occt::Extrema_ExtAlgo Algo);
    /// <summary>
    /// Init the projection  of a point <P> on a surface
    /// <Surface>
    /// </summary>
    GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup);
    void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Tolerance, Macad::Occt::Extrema_ExtAlgo Algo);
    void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Tolerance);
    /// <summary>
    /// Init the projection of a point <P>  on a surface
    /// <Surface>. The solution are computed in the domain
    /// [Umin,Usup] [Vmin,Vsup] of the surface.
    /// </summary>
    void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, Macad::Occt::Extrema_ExtAlgo Algo);
    /// <summary>
    /// Init the projection of a point <P>  on a surface
    /// <Surface>. The solution are computed in the domain
    /// [Umin,Usup] [Vmin,Vsup] of the surface.
    /// </summary>
    void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface);
    void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance, Macad::Occt::Extrema_ExtAlgo Algo);
    void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance);
    /// <summary>
    /// Init the projection for many points on a surface
    /// <Surface>. The solutions will be computed in the domain
    /// [Umin,Usup] [Vmin,Vsup] of the surface.
    /// </summary>
    void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, Macad::Occt::Extrema_ExtAlgo Algo);
    /// <summary>
    /// Init the projection for many points on a surface
    /// <Surface>. The solutions will be computed in the domain
    /// [Umin,Usup] [Vmin,Vsup] of the surface.
    /// </summary>
    void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup);
    void Init(Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance, Macad::Occt::Extrema_ExtAlgo Algo);
    void Init(Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance);
    void Init(Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, Macad::Occt::Extrema_ExtAlgo Algo);
    void Init(Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup);
    /// <summary>
    /// Sets the Extrema search algorithm - Grad or Tree. <br>
    /// By default the Extrema is initialized with Grad algorithm.
    /// </summary>
    void SetExtremaAlgo(Macad::Occt::Extrema_ExtAlgo theAlgo);
    /// <summary>
    /// Sets the Extrema search flag - MIN or MAX or MINMAX.<br>
    /// By default the Extrema is set to search the MinMax solutions.
    /// </summary>
    void SetExtremaFlag(Macad::Occt::Extrema_ExtFlag theExtFlag);
    /// <summary>
    /// Performs the projection of a point on the current surface.
    /// </summary>
    void Perform(Macad::Occt::Pnt P);
    bool IsDone();
    /// <summary>
    /// Returns the number of computed orthogonal projection points.
    /// Note: if projection fails, NbPoints returns 0.
    /// </summary>
    int NbPoints();
    /// <summary>
    /// Returns the orthogonal projection
    /// on the surface. Index is a number of a computed point.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where
    /// NbPoints is the number of solution points.
    /// </summary>
    Macad::Occt::Pnt Point(int Index);
    /// <summary>
    /// Returns the parameters (U,V) on the
    /// surface of the orthogonal projection. Index is a number of a
    /// computed point.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where
    /// NbPoints is the number of solution points.
    /// </summary>
    void Parameters(int Index, double% U, double% V);
    /// <summary>
    /// Computes the distance between the
    /// point and its orthogonal projection on the surface. Index is a number
    /// of a computed point.
    /// Exceptions
    /// Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where
    /// NbPoints is the number of solution points.
    /// </summary>
    double Distance(int Index);
    /// <summary>
    /// Returns the nearest orthogonal projection of the point
    /// on the surface.
    /// Exceptions
    /// StdFail_NotDone if projection fails.
    /// </summary>
    Macad::Occt::Pnt NearestPoint();
    /// <summary>
    /// Returns the parameters (U,V) on the
    /// surface of the nearest computed orthogonal projection of the point.
    /// Exceptions
    /// StdFail_NotDone if projection fails.
    /// </summary>
    void LowerDistanceParameters(double% U, double% V);
    /// <summary>
    /// Computes the distance between the
    /// point and its nearest orthogonal projection on the surface.
    /// Exceptions
    /// StdFail_NotDone if projection fails.
    /// </summary>
    double LowerDistance();
}; // class GeomAPI_ProjectPointOnSurf

}; // namespace Occt
}; // namespace Macad
