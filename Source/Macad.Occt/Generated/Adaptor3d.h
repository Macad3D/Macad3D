// Generated wrapper code for package Adaptor3d

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Adaptor3d_Curve
//---------------------------------------------------------------------
/// <summary>
/// Root class for 3D curves on which geometric
/// algorithms work.
/// An adapted curve is an interface between the
/// services provided by a curve and those required of
/// the curve by algorithms which use it.
/// Two derived concrete classes are provided:
/// - GeomAdaptor_Curve for a curve from the Geom package
/// - Adaptor3d_CurveOnSurface for a curve lying on
/// a surface from the Geom package.
/// 
/// Polynomial coefficients of BSpline curves used for their evaluation are
/// cached for better performance. Therefore these evaluations are not
/// thread-safe and parallel evaluations need to be prevented.
/// </summary>
public ref class Adaptor3d_Curve
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Adaptor3d_Curve_h
public:
    Include_Adaptor3d_Curve_h
#endif

protected:
    Adaptor3d_Curve(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    Adaptor3d_Curve(::Adaptor3d_Curve* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Adaptor3d_Curve(::Adaptor3d_Curve& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Adaptor3d_Curve* NativeInstance
    {
        ::Adaptor3d_Curve* get()
        {
            return static_cast<::Adaptor3d_Curve*>(_NativeInstance);
        }
    }

public:
    Adaptor3d_Curve();
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
    double FirstParameter();
    double LastParameter();
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns  the number  of  intervals for  continuity
    /// <S>. May be one if Continuity(me) >= <S>
    /// </summary>
    int NbIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the  parameters bounding the intervals
    /// of continuity <S>.
    /// 
    /// The array must provide  enough room to  accommodate
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
    Macad::Occt::Geom_BezierCurve^ Bezier();
    Macad::Occt::Geom_BSplineCurve^ BSpline();
    Macad::Occt::Geom_OffsetCurve^ OffsetCurve();
    static Macad::Occt::Adaptor3d_Curve^ CreateDowncasted(::Adaptor3d_Curve* instance);
}; // class Adaptor3d_Curve

//---------------------------------------------------------------------
//  Class  Adaptor3d_Surface
//---------------------------------------------------------------------
/// <summary>
/// Root class for surfaces on which geometric algorithms work.
/// An adapted surface is an interface between the
/// services provided by a surface and those required of
/// the surface by algorithms which use it.
/// A derived concrete class is provided:
/// GeomAdaptor_Surface for a surface from the Geom package.
/// The  Surface class describes  the standard behaviour
/// of a surface for generic algorithms.
/// 
/// The Surface can  be decomposed in intervals of any
/// continuity in U and V using the method NbIntervals.
/// A current interval can be set.
/// Most of the methods apply to the current interval.
/// Warning: All the methods are virtual and implemented with a
/// raise to allow to redefined only the methods really used.
/// 
/// Polynomial coefficients of BSpline surfaces used for their evaluation are cached for better
/// performance. Therefore these evaluations are not thread-safe and parallel evaluations need to be
/// prevented.
/// </summary>
public ref class Adaptor3d_Surface
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Adaptor3d_Surface_h
public:
    Include_Adaptor3d_Surface_h
#endif

protected:
    Adaptor3d_Surface(InitMode init)
        : Macad::Occt::Standard_Transient( init )
    {}

public:
    Adaptor3d_Surface(::Adaptor3d_Surface* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Adaptor3d_Surface(::Adaptor3d_Surface& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Adaptor3d_Surface* NativeInstance
    {
        ::Adaptor3d_Surface* get()
        {
            return static_cast<::Adaptor3d_Surface*>(_NativeInstance);
        }
    }

public:
    Adaptor3d_Surface();
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ ShallowCopy();
    double FirstUParameter();
    double LastUParameter();
    double FirstVParameter();
    double LastVParameter();
    Macad::Occt::GeomAbs_Shape UContinuity();
    Macad::Occt::GeomAbs_Shape VContinuity();
    /// <summary>
    /// Returns the number of U intervals for  continuity
    /// <S>. May be one if UContinuity(me) >= <S>
    /// </summary>
    int NbUIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the number of V intervals for  continuity
    /// <S>. May be one if VContinuity(me) >= <S>
    /// </summary>
    int NbVIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the  intervals with the requested continuity
    /// in the U direction.
    /// </summary>
    void UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns the  intervals with the requested continuity
    /// in the V direction.
    /// </summary>
    void VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Returns    a  surface trimmed in the U direction
    /// equivalent   of  <me>  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ UTrim(double First, double Last, double Tol);
    /// <summary>
    /// Returns    a  surface trimmed in the V direction  between
    /// parameters <First>  and <Last>. <Tol>  is used  to
    /// test for 3d points confusion.
    /// If <First> >= <Last>
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ VTrim(double First, double Last, double Tol);
    bool IsUClosed();
    bool IsVClosed();
    bool IsUPeriodic();
    double UPeriod();
    bool IsVPeriodic();
    double VPeriod();
    /// <summary>
    /// Computes the point of parameters U,V on the surface.
    /// Tip: use GeomLib::NormEstim() to calculate surface normal at specified (U, V) point.
    /// </summary>
    Macad::Occt::Pnt Value(double U, double V);
    /// <summary>
    /// Computes the point of parameters U,V on the surface.
    /// </summary>
    void D0(double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// Computes the point  and the first derivatives on the surface.
    /// Raised if the continuity of the current intervals is not C1.
    /// 
    /// Tip: use GeomLib::NormEstim() to calculate surface normal at specified (U, V) point.
    /// </summary>
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// Computes   the point,  the  first  and  second
    /// derivatives on the surface.
    /// Raised  if   the   continuity   of the current
    /// intervals is not C2.
    /// </summary>
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Computes the point,  the first, second and third
    /// derivatives on the surface.
    /// Raised  if   the   continuity   of the current
    /// intervals is not C3.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the direction U and Nv
    /// in the direction V at the point P(U, V).
    /// Raised if the current U  interval is not not CNu
    /// and the current V interval is not CNv.
    /// Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
    /// </summary>
    Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
    /// <summary>
    /// Returns the parametric U  resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double UResolution(double R3d);
    /// <summary>
    /// Returns the parametric V  resolution corresponding
    /// to the real space resolution <R3d>.
    /// </summary>
    double VResolution(double R3d);
    /// <summary>
    /// Returns the type of the surface : Plane, Cylinder,
    /// Cone,      Sphere,        Torus,    BezierSurface,
    /// BSplineSurface,               SurfaceOfRevolution,
    /// SurfaceOfExtrusion, OtherSurface
    /// </summary>
    Macad::Occt::GeomAbs_SurfaceType GetSurfaceType();
    Macad::Occt::Pln Plane();
    Macad::Occt::gp_Cylinder^ Cylinder();
    Macad::Occt::gp_Cone^ Cone();
    Macad::Occt::gp_Sphere^ Sphere();
    Macad::Occt::gp_Torus^ Torus();
    int UDegree();
    int NbUPoles();
    int VDegree();
    int NbVPoles();
    int NbUKnots();
    int NbVKnots();
    bool IsURational();
    bool IsVRational();
    Macad::Occt::Geom_BezierSurface^ Bezier();
    Macad::Occt::Geom_BSplineSurface^ BSpline();
    Macad::Occt::Ax1 AxeOfRevolution();
    Macad::Occt::Dir Direction();
    Macad::Occt::Adaptor3d_Curve^ BasisCurve();
    Macad::Occt::Adaptor3d_Surface^ BasisSurface();
    double OffsetValue();
    static Macad::Occt::Adaptor3d_Surface^ CreateDowncasted(::Adaptor3d_Surface* instance);
}; // class Adaptor3d_Surface

//---------------------------------------------------------------------
//  Class  Adaptor3d_CurveOnSurface
//---------------------------------------------------------------------
/// <summary>
/// An interface between the services provided by a curve
/// lying on a surface from the package Geom and those
/// required of the curve by algorithms which use it. The
/// curve is defined as a 2D curve from the Geom2d
/// package, in the parametric space of the surface.
/// </summary>
public ref class Adaptor3d_CurveOnSurface sealed
    : public Macad::Occt::Adaptor3d_Curve
{

#ifdef Include_Adaptor3d_CurveOnSurface_h
public:
    Include_Adaptor3d_CurveOnSurface_h
#endif

public:
    Adaptor3d_CurveOnSurface(::Adaptor3d_CurveOnSurface* nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    Adaptor3d_CurveOnSurface(::Adaptor3d_CurveOnSurface& nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    property ::Adaptor3d_CurveOnSurface* NativeInstance
    {
        ::Adaptor3d_CurveOnSurface* get()
        {
            return static_cast<::Adaptor3d_CurveOnSurface*>(_NativeInstance);
        }
    }

public:
    Adaptor3d_CurveOnSurface();
    Adaptor3d_CurveOnSurface(Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Creates a CurveOnSurface from the 2d curve <C> and
    /// the surface <S>.
    /// </summary>
    Adaptor3d_CurveOnSurface(Macad::Occt::Adaptor2d_Curve2d^ C, Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
    /// <summary>
    /// Changes the surface.
    /// </summary>
    void Load(Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Changes the 2d curve.
    /// </summary>
    void Load(Macad::Occt::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// Load both curve and surface.
    /// </summary>
    void Load(Macad::Occt::Adaptor2d_Curve2d^ C, Macad::Occt::Adaptor3d_Surface^ S);
    Macad::Occt::Adaptor2d_Curve2d^ GetCurve();
    Macad::Occt::Adaptor3d_Surface^ GetSurface();
    Macad::Occt::Adaptor2d_Curve2d^ ChangeCurve();
    Macad::Occt::Adaptor3d_Surface^ ChangeSurface();
    double FirstParameter();
    double LastParameter();
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns  the number  of  intervals for  continuity
    /// <S>. May be one if Continuity(me) >= <S>
    /// </summary>
    int NbIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the  parameters bounding the intervals
    /// of continuity <S>.
    /// 
    /// The array must provide  enough room to  accommodate
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
    Macad::Occt::Geom_BezierCurve^ Bezier();
    Macad::Occt::Geom_BSplineCurve^ BSpline();
    static Macad::Occt::Adaptor3d_CurveOnSurface^ CreateDowncasted(::Adaptor3d_CurveOnSurface* instance);
}; // class Adaptor3d_CurveOnSurface

//---------------------------------------------------------------------
//  Class  Adaptor3d_HSurfaceTool
//---------------------------------------------------------------------
public ref class Adaptor3d_HSurfaceTool sealed
    : public Macad::Occt::BaseClass<::Adaptor3d_HSurfaceTool>
{

#ifdef Include_Adaptor3d_HSurfaceTool_h
public:
    Include_Adaptor3d_HSurfaceTool_h
#endif

public:
    Adaptor3d_HSurfaceTool(::Adaptor3d_HSurfaceTool* nativeInstance)
        : Macad::Occt::BaseClass<::Adaptor3d_HSurfaceTool>( nativeInstance, true )
    {}

    Adaptor3d_HSurfaceTool(::Adaptor3d_HSurfaceTool& nativeInstance)
        : Macad::Occt::BaseClass<::Adaptor3d_HSurfaceTool>( &nativeInstance, false )
    {}

    property ::Adaptor3d_HSurfaceTool* NativeInstance
    {
        ::Adaptor3d_HSurfaceTool* get()
        {
            return static_cast<::Adaptor3d_HSurfaceTool*>(_NativeInstance);
        }
    }

public:
    Adaptor3d_HSurfaceTool();
    static double FirstUParameter(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static double FirstVParameter(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static double LastUParameter(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static double LastVParameter(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static int NbUIntervals(Macad::Occt::Adaptor3d_Surface^ theSurf, Macad::Occt::GeomAbs_Shape theSh);
    static int NbVIntervals(Macad::Occt::Adaptor3d_Surface^ theSurf, Macad::Occt::GeomAbs_Shape theSh);
    static void UIntervals(Macad::Occt::Adaptor3d_Surface^ theSurf, Macad::Occt::TColStd_Array1OfReal^ theTab, Macad::Occt::GeomAbs_Shape theSh);
    static void VIntervals(Macad::Occt::Adaptor3d_Surface^ theSurf, Macad::Occt::TColStd_Array1OfReal^ theTab, Macad::Occt::GeomAbs_Shape theSh);
    /// <summary>
    /// If <First> >= <Last>
    /// </summary>
    static Macad::Occt::Adaptor3d_Surface^ UTrim(Macad::Occt::Adaptor3d_Surface^ theSurf, double theFirst, double theLast, double theTol);
    /// <summary>
    /// If <First> >= <Last>
    /// </summary>
    static Macad::Occt::Adaptor3d_Surface^ VTrim(Macad::Occt::Adaptor3d_Surface^ theSurf, double theFirst, double theLast, double theTol);
    static bool IsUClosed(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static bool IsVClosed(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static bool IsUPeriodic(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static double UPeriod(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static bool IsVPeriodic(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static double VPeriod(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static Macad::Occt::Pnt Value(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV);
    static void D0(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, Macad::Occt::Pnt% thePnt);
    static void D1(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, Macad::Occt::Pnt% thePnt, Macad::Occt::Vec% theD1U, Macad::Occt::Vec% theD1V);
    static void D2(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, Macad::Occt::Pnt% thePnt, Macad::Occt::Vec% theD1U, Macad::Occt::Vec% theD1V, Macad::Occt::Vec% theD2U, Macad::Occt::Vec% theD2V, Macad::Occt::Vec% theD2UV);
    static void D3(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, Macad::Occt::Pnt% thePnt, Macad::Occt::Vec% theD1U, Macad::Occt::Vec% theD1V, Macad::Occt::Vec% theD2U, Macad::Occt::Vec% theD2V, Macad::Occt::Vec% theD2UV, Macad::Occt::Vec% theD3U, Macad::Occt::Vec% theD3V, Macad::Occt::Vec% theD3UUV, Macad::Occt::Vec% theD3UVV);
    static Macad::Occt::Vec DN(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, int theNU, int theNV);
    static double UResolution(Macad::Occt::Adaptor3d_Surface^ theSurf, double theR3d);
    static double VResolution(Macad::Occt::Adaptor3d_Surface^ theSurf, double theR3d);
    static Macad::Occt::GeomAbs_SurfaceType GetSurfaceType(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static Macad::Occt::Pln Plane(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static Macad::Occt::gp_Cylinder^ Cylinder(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static Macad::Occt::gp_Cone^ Cone(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static Macad::Occt::gp_Torus^ Torus(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static Macad::Occt::gp_Sphere^ Sphere(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static Macad::Occt::Geom_BezierSurface^ Bezier(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static Macad::Occt::Geom_BSplineSurface^ BSpline(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static Macad::Occt::Ax1 AxeOfRevolution(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static Macad::Occt::Dir Direction(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static Macad::Occt::Adaptor3d_Curve^ BasisCurve(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static Macad::Occt::Adaptor3d_Surface^ BasisSurface(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static double OffsetValue(Macad::Occt::Adaptor3d_Surface^ theSurf);
    static bool IsSurfG1(Macad::Occt::Adaptor3d_Surface^ theSurf, bool theAlongU, double theAngTol);
    static bool IsSurfG1(Macad::Occt::Adaptor3d_Surface^ theSurf, bool theAlongU);
    static int NbSamplesU(Macad::Occt::Adaptor3d_Surface^ S);
    static int NbSamplesV(Macad::Occt::Adaptor3d_Surface^ S);
    static int NbSamplesU(Macad::Occt::Adaptor3d_Surface^ S, double u1, double u2);
    static int NbSamplesV(Macad::Occt::Adaptor3d_Surface^ parameter1, double v1, double v2);
}; // class Adaptor3d_HSurfaceTool

//---------------------------------------------------------------------
//  Class  Adaptor3d_HVertex
//---------------------------------------------------------------------
public ref class Adaptor3d_HVertex sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Adaptor3d_HVertex_h
public:
    Include_Adaptor3d_HVertex_h
#endif

public:
    Adaptor3d_HVertex(::Adaptor3d_HVertex* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Adaptor3d_HVertex(::Adaptor3d_HVertex& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Adaptor3d_HVertex* NativeInstance
    {
        ::Adaptor3d_HVertex* get()
        {
            return static_cast<::Adaptor3d_HVertex*>(_NativeInstance);
        }
    }

public:
    Adaptor3d_HVertex();
    Adaptor3d_HVertex(Macad::Occt::Pnt2d P, Macad::Occt::TopAbs_Orientation Ori, double Resolution);
    Macad::Occt::Pnt2d Value();
    double Parameter(Macad::Occt::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// Parametric resolution (2d).
    /// </summary>
    double Resolution(Macad::Occt::Adaptor2d_Curve2d^ C);
    Macad::Occt::TopAbs_Orientation Orientation();
    bool IsSame(Macad::Occt::Adaptor3d_HVertex^ Other);
    static Macad::Occt::Adaptor3d_HVertex^ CreateDowncasted(::Adaptor3d_HVertex* instance);
}; // class Adaptor3d_HVertex

//---------------------------------------------------------------------
//  Class  Adaptor3d_IsoCurve
//---------------------------------------------------------------------
/// <summary>
/// Defines an isoparametric curve on  a surface.  The
/// type  of isoparametric curve  (U  or V) is defined
/// with the   enumeration  IsoType from   GeomAbs  if
/// NoneIso is given an error is raised.
/// </summary>
public ref class Adaptor3d_IsoCurve sealed
    : public Macad::Occt::Adaptor3d_Curve
{

#ifdef Include_Adaptor3d_IsoCurve_h
public:
    Include_Adaptor3d_IsoCurve_h
#endif

public:
    Adaptor3d_IsoCurve(::Adaptor3d_IsoCurve* nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    Adaptor3d_IsoCurve(::Adaptor3d_IsoCurve& nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    property ::Adaptor3d_IsoCurve* NativeInstance
    {
        ::Adaptor3d_IsoCurve* get()
        {
            return static_cast<::Adaptor3d_IsoCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The iso is set to NoneIso.
    /// </summary>
    Adaptor3d_IsoCurve();
    /// <summary>
    /// The surface is loaded. The iso is set to NoneIso.
    /// </summary>
    Adaptor3d_IsoCurve(Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Creates  an  IsoCurve curve.   Iso  defines the
    /// type (isoU or  isoU) Param defines the value of
    /// the iso. The bounds  of  the iso are the bounds
    /// of the surface.
    /// </summary>
    Adaptor3d_IsoCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::GeomAbs_IsoType Iso, double Param);
    /// <summary>
    /// Create an IsoCurve curve.  Iso defines the type
    /// (isoU or isov).  Param defines the value of the
    /// iso. WFirst,WLast define the bounds of the iso.
    /// </summary>
    Adaptor3d_IsoCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::GeomAbs_IsoType Iso, double Param, double WFirst, double WLast);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
    /// <summary>
    /// Changes  the surface.  The  iso  is  reset  to
    /// NoneIso.
    /// </summary>
    void Load(Macad::Occt::Adaptor3d_Surface^ S);
    /// <summary>
    /// Changes the iso on the current surface.
    /// </summary>
    void Load(Macad::Occt::GeomAbs_IsoType Iso, double Param);
    /// <summary>
    /// Changes the iso on the current surface.
    /// </summary>
    void Load(Macad::Occt::GeomAbs_IsoType Iso, double Param, double WFirst, double WLast);
    Macad::Occt::Adaptor3d_Surface^ Surface();
    Macad::Occt::GeomAbs_IsoType Iso();
    double Parameter();
    double FirstParameter();
    double LastParameter();
    Macad::Occt::GeomAbs_Shape Continuity();
    /// <summary>
    /// Returns  the number  of  intervals for  continuity
    /// <S>. May be one if Continuity(me) >= <S>
    /// </summary>
    int NbIntervals(Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the  parameters bounding the intervals
    /// of continuity <S>.
    /// 
    /// The array must provide  enough room to  accommodate
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
    Macad::Occt::Geom_BezierCurve^ Bezier();
    Macad::Occt::Geom_BSplineCurve^ BSpline();
    static Macad::Occt::Adaptor3d_IsoCurve^ CreateDowncasted(::Adaptor3d_IsoCurve* instance);
}; // class Adaptor3d_IsoCurve

//---------------------------------------------------------------------
//  Class  Adaptor3d_TopolTool
//---------------------------------------------------------------------
/// <summary>
/// This class provides a default topological tool,
/// based on the Umin,Vmin,Umax,Vmax of an HSurface from Adaptor3d.
/// All methods and fields may be redefined when inheriting from this class.
/// This class is used to instantiate algorithms as Intersection, outlines,...
/// </summary>
public ref class Adaptor3d_TopolTool sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Adaptor3d_TopolTool_h
public:
    Include_Adaptor3d_TopolTool_h
#endif

public:
    Adaptor3d_TopolTool(::Adaptor3d_TopolTool* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Adaptor3d_TopolTool(::Adaptor3d_TopolTool& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Adaptor3d_TopolTool* NativeInstance
    {
        ::Adaptor3d_TopolTool* get()
        {
            return static_cast<::Adaptor3d_TopolTool*>(_NativeInstance);
        }
    }

public:
    Adaptor3d_TopolTool();
    Adaptor3d_TopolTool(Macad::Occt::Adaptor3d_Surface^ Surface);
    void Initialize();
    void Initialize(Macad::Occt::Adaptor3d_Surface^ S);
    void Initialize(Macad::Occt::Adaptor2d_Curve2d^ Curve);
    void Init();
    bool More();
    Macad::Occt::Adaptor2d_Curve2d^ Value();
    void Next();
    void InitVertexIterator();
    bool MoreVertex();
    Macad::Occt::Adaptor3d_HVertex^ Vertex();
    void NextVertex();
    Macad::Occt::TopAbs_State Classify(Macad::Occt::Pnt2d P, double Tol, bool ReacdreOnPeriodic);
    Macad::Occt::TopAbs_State Classify(Macad::Occt::Pnt2d P, double Tol);
    bool IsThePointOn(Macad::Occt::Pnt2d P, double Tol, bool ReacdreOnPeriodic);
    bool IsThePointOn(Macad::Occt::Pnt2d P, double Tol);
    /// <summary>
    /// If the function returns the orientation of the arc.
    /// If the orientation is FORWARD or REVERSED, the arc is
    /// a "real" limit of the surface.
    /// If the orientation is INTERNAL or EXTERNAL, the arc is
    /// considered as an arc on the surface.
    /// </summary>
    Macad::Occt::TopAbs_Orientation Orientation(Macad::Occt::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// Returns the orientation of the vertex V.
    /// The vertex has been found with an exploration on
    /// a given arc. The orientation is the orientation
    /// of the vertex on this arc.
    /// </summary>
    Macad::Occt::TopAbs_Orientation Orientation(Macad::Occt::Adaptor3d_HVertex^ V);
    /// <summary>
    /// Returns True if the vertices V1 and V2 are identical.
    /// This method does not take the orientation of the
    /// vertices in account.
    /// </summary>
    bool Identical(Macad::Occt::Adaptor3d_HVertex^ V1, Macad::Occt::Adaptor3d_HVertex^ V2);
    /// <summary>
    /// answers if arcs and vertices may have 3d representations,
    /// so that we could use Tol3d and Pnt methods.
    /// </summary>
    bool Has3d();
    /// <summary>
    /// returns 3d tolerance of the arc C
    /// </summary>
    double Tol3d(Macad::Occt::Adaptor2d_Curve2d^ C);
    /// <summary>
    /// returns 3d tolerance of the vertex V
    /// </summary>
    double Tol3d(Macad::Occt::Adaptor3d_HVertex^ V);
    /// <summary>
    /// returns 3d point of the vertex V
    /// </summary>
    Macad::Occt::Pnt Pnt(Macad::Occt::Adaptor3d_HVertex^ V);
    void ComputeSamplePoints();
    /// <summary>
    /// compute the sample-points for the intersections algorithms
    /// </summary>
    int NbSamplesU();
    /// <summary>
    /// compute the sample-points for the intersections algorithms
    /// </summary>
    int NbSamplesV();
    /// <summary>
    /// compute the sample-points for the intersections algorithms
    /// </summary>
    int NbSamples();
    /// <summary>
    /// return the set of U parameters on the surface
    /// obtained by the method SamplePnts
    /// </summary>
    void UParameters(Macad::Occt::TColStd_Array1OfReal^ theArray);
    /// <summary>
    /// return the set of V parameters on the surface
    /// obtained by the method SamplePnts
    /// </summary>
    void VParameters(Macad::Occt::TColStd_Array1OfReal^ theArray);
    void SamplePoint(int Index, Macad::Occt::Pnt2d% P2d, Macad::Occt::Pnt% P3d);
    bool DomainIsInfinite();
    System::IntPtr Edge();
    /// <summary>
    /// Compute the sample-points for the intersections algorithms by adaptive algorithm for BSpline
    /// surfaces. For other surfaces algorithm is the same as in method ComputeSamplePoints(), but
    /// only fill arrays of U and V sample parameters;
    /// </summary>
    /// <param name="in]">
    /// theDefl   a required deflection
    /// </param>
    /// <param name="in]">
    /// theNUmin  minimal nb points for U
    /// </param>
    /// <param name="in]">
    /// theNVmin  minimal nb points for V
    /// </param>
    void SamplePnts(double theDefl, int theNUmin, int theNVmin);
    /// <summary>
    /// Compute the sample-points for the intersections algorithms
    /// by adaptive algorithm for BSpline surfaces - is used in SamplePnts
    /// </summary>
    /// <param name="in]">
    /// theDefl   required deflection
    /// </param>
    /// <param name="in]">
    /// theNUmin  minimal nb points for U
    /// </param>
    /// <param name="in]">
    /// theNVmin  minimal nb points for V
    /// </param>
    void BSplSamplePnts(double theDefl, int theNUmin, int theNVmin);
    /// <summary>
    /// Returns true if provide uniform sampling of points.
    /// </summary>
    bool IsUniformSampling();
    /// <summary>
    /// Computes the cone's apex parameters.
    /// </summary>
    /// <param name="in]">
    /// theC conical surface
    /// </param>
    /// <param name="in]">
    /// theU U parameter of cone's apex
    /// </param>
    /// <param name="in]">
    /// theV V parameter of cone's apex
    /// </param>
    static void GetConeApexParam(Macad::Occt::gp_Cone^ theC, double% theU, double% theV);
    static Macad::Occt::Adaptor3d_TopolTool^ CreateDowncasted(::Adaptor3d_TopolTool* instance);
}; // class Adaptor3d_TopolTool

}; // namespace Occt
}; // namespace Macad
