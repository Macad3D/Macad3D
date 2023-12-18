// Generated wrapper code for package GeomAdaptor

#pragma once

#include "Adaptor3d.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  GeomAdaptor
//---------------------------------------------------------------------
/// <summary>
/// this package contains the  geometric definition of
/// curve and surface necessary to use algorithms.
/// </summary>
public ref class GeomAdaptor sealed
    : public Macad::Occt::BaseClass<::GeomAdaptor>
{

#ifdef Include_GeomAdaptor_h
public:
    Include_GeomAdaptor_h
#endif

public:
    GeomAdaptor(::GeomAdaptor* nativeInstance)
        : Macad::Occt::BaseClass<::GeomAdaptor>( nativeInstance, true )
    {}

    GeomAdaptor(::GeomAdaptor& nativeInstance)
        : Macad::Occt::BaseClass<::GeomAdaptor>( &nativeInstance, false )
    {}

    property ::GeomAdaptor* NativeInstance
    {
        ::GeomAdaptor* get()
        {
            return static_cast<::GeomAdaptor*>(_NativeInstance);
        }
    }

public:
    GeomAdaptor();
    /// <summary>
    /// Inherited  from    GHCurve.   Provides a  curve
    /// handled by reference.
    /// Build a Geom_Curve using the information from the
    /// Curve from Adaptor3d
    /// </summary>
    static Macad::Occt::Geom_Curve^ MakeCurve(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// Build a Geom_Surface using the information from the Surface from Adaptor3d
    /// </summary>
    /// <param name="theS">
    /// - Surface adaptor to convert.
    /// </param>
    /// <param name="theTrimFlag">
    /// - True if perform trim surface values by adaptor and false otherwise.
    /// </param>
    static Macad::Occt::Geom_Surface^ MakeSurface(Macad::Occt::Adaptor3d_Surface^ theS, bool theTrimFlag);
    /// <summary>
    /// Build a Geom_Surface using the information from the Surface from Adaptor3d
    /// </summary>
    /// <param name="theS">
    /// - Surface adaptor to convert.
    /// </param>
    /// <param name="theTrimFlag">
    /// - True if perform trim surface values by adaptor and false otherwise.
    /// </param>
    static Macad::Occt::Geom_Surface^ MakeSurface(Macad::Occt::Adaptor3d_Surface^ theS);
}; // class GeomAdaptor

//---------------------------------------------------------------------
//  Class  GeomAdaptor_Curve
//---------------------------------------------------------------------
/// <summary>
/// This class provides an interface between the services provided by any
/// curve from the package Geom and those required of the curve by algorithms which use it.
/// Creation of the loaded curve the curve is C1 by piece.
/// 
/// Polynomial coefficients of BSpline curves used for their evaluation are
/// cached for better performance. Therefore these evaluations are not
/// thread-safe and parallel evaluations need to be prevented.
/// </summary>
public ref class GeomAdaptor_Curve sealed
    : public Macad::Occt::Adaptor3d_Curve
{

#ifdef Include_GeomAdaptor_Curve_h
public:
    Include_GeomAdaptor_Curve_h
#endif

public:
    GeomAdaptor_Curve(::GeomAdaptor_Curve* nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    GeomAdaptor_Curve(::GeomAdaptor_Curve& nativeInstance)
        : Macad::Occt::Adaptor3d_Curve( nativeInstance )
    {}

    property ::GeomAdaptor_Curve* NativeInstance
    {
        ::GeomAdaptor_Curve* get()
        {
            return static_cast<::GeomAdaptor_Curve*>(_NativeInstance);
        }
    }

public:
    GeomAdaptor_Curve();
    GeomAdaptor_Curve(Macad::Occt::Geom_Curve^ theCurve);
    /// <summary>
    /// Standard_ConstructionError is raised if theUFirst>theULast
    /// </summary>
    GeomAdaptor_Curve(Macad::Occt::Geom_Curve^ theCurve, double theUFirst, double theULast);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
    /// <summary>
    /// Reset currently loaded curve (undone Load()).
    /// </summary>
    void Reset();
    void Load(Macad::Occt::Geom_Curve^ theCurve);
    /// <summary>
    /// Standard_ConstructionError is raised if theUFirst>theULast
    /// </summary>
    void Load(Macad::Occt::Geom_Curve^ theCurve, double theUFirst, double theULast);
    /// <summary>
    /// Provides a curve inherited from Hcurve from Adaptor.
    /// This is inherited to provide easy to use constructors.
    /// </summary>
    Macad::Occt::Geom_Curve^ Curve();
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
    /// Computes the point of parameter U on the curve
    /// </summary>
    Macad::Occt::Pnt Value(double U);
    /// <summary>
    /// Computes the point of parameter U.
    /// </summary>
    void D0(double U, Macad::Occt::Pnt% P);
    /// <summary>
    /// Computes the point of parameter U on the curve
    /// with its first derivative.
    /// 
    /// Warning : On the specific case of BSplineCurve:
    /// if the curve is cut in interval of continuity at least C1, the
    /// derivatives are computed on the current interval.
    /// else the derivatives are computed on the basis curve.
    /// </summary>
    void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V);
    /// <summary>
    /// Returns the point P of parameter U, the first and second
    /// derivatives V1 and V2.
    /// 
    /// Warning : On the specific case of BSplineCurve:
    /// if the curve is cut in interval of continuity at least C2, the
    /// derivatives are computed on the current interval.
    /// else the derivatives are computed on the basis curve.
    /// </summary>
    void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    /// <summary>
    /// Returns the point P of parameter U, the first, the second
    /// and the third derivative.
    /// 
    /// Warning : On the specific case of BSplineCurve:
    /// if the curve is cut in interval of continuity at least C3, the
    /// derivatives are computed on the current interval.
    /// else the derivatives are computed on the basis curve.
    /// </summary>
    void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// The returned vector gives the value of the derivative for the
    /// order of derivation N.
    /// Warning : On the specific case of BSplineCurve:
    /// if the curve is cut in interval of continuity CN, the
    /// derivatives are computed on the current interval.
    /// else the derivatives are computed on the basis curve.
    /// Raised if N < 1.
    /// </summary>
    Macad::Occt::Vec DN(double U, int N);
    /// <summary>
    /// returns the parametric resolution
    /// </summary>
    double Resolution(double R3d);
    Macad::Occt::GeomAbs_CurveType GetCurveType();
    Macad::Occt::gp_Lin^ Line();
    Macad::Occt::gp_Circ^ Circle();
    Macad::Occt::gp_Elips^ Ellipse();
    Macad::Occt::gp_Hypr^ Hyperbola();
    Macad::Occt::gp_Parab^ Parabola();
    /// <summary>
    /// this should NEVER make a copy
    /// of the underlying curve to read
    /// the relevant information
    /// </summary>
    int Degree();
    /// <summary>
    /// this should NEVER make a copy
    /// of the underlying curve to read
    /// the relevant information
    /// </summary>
    bool IsRational();
    /// <summary>
    /// this should NEVER make a copy
    /// of the underlying curve to read
    /// the relevant information
    /// </summary>
    int NbPoles();
    /// <summary>
    /// this should NEVER make a copy
    /// of the underlying curve to read
    /// the relevant information
    /// </summary>
    int NbKnots();
    /// <summary>
    /// this will NOT make a copy of the
    /// Bezier Curve : If you want to modify
    /// the Curve please make a copy yourself
    /// Also it will NOT trim the surface to
    /// myFirst/Last.
    /// </summary>
    Macad::Occt::Geom_BezierCurve^ Bezier();
    /// <summary>
    /// this will NOT make a copy of the
    /// BSpline Curve : If you want to modify
    /// the Curve please make a copy yourself
    /// Also it will NOT trim the surface to
    /// myFirst/Last.
    /// </summary>
    Macad::Occt::Geom_BSplineCurve^ BSpline();
    Macad::Occt::Geom_OffsetCurve^ OffsetCurve();
    static Macad::Occt::GeomAdaptor_Curve^ CreateDowncasted(::GeomAdaptor_Curve* instance);
}; // class GeomAdaptor_Curve

//---------------------------------------------------------------------
//  Class  GeomAdaptor_Surface
//---------------------------------------------------------------------
/// <summary>
/// An interface between the services provided by any
/// surface from the package Geom and those required
/// of the surface by algorithms which use it.
/// Creation of the loaded surface the surface is C1 by piece
/// 
/// Polynomial coefficients of BSpline surfaces used for their evaluation are
/// cached for better performance. Therefore these evaluations are not
/// thread-safe and parallel evaluations need to be prevented.
/// </summary>
public ref class GeomAdaptor_Surface
    : public Macad::Occt::Adaptor3d_Surface
{

#ifdef Include_GeomAdaptor_Surface_h
public:
    Include_GeomAdaptor_Surface_h
#endif

protected:
    GeomAdaptor_Surface(InitMode init)
        : Macad::Occt::Adaptor3d_Surface( init )
    {}

public:
    GeomAdaptor_Surface(::GeomAdaptor_Surface* nativeInstance)
        : Macad::Occt::Adaptor3d_Surface( nativeInstance )
    {}

    GeomAdaptor_Surface(::GeomAdaptor_Surface& nativeInstance)
        : Macad::Occt::Adaptor3d_Surface( nativeInstance )
    {}

    property ::GeomAdaptor_Surface* NativeInstance
    {
        ::GeomAdaptor_Surface* get()
        {
            return static_cast<::GeomAdaptor_Surface*>(_NativeInstance);
        }
    }

public:
    GeomAdaptor_Surface();
    GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf);
    /// <summary>
    /// Standard_ConstructionError is raised if UFirst>ULast or VFirst>VLast
    /// </summary>
    GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU, double theTolV);
    /// <summary>
    /// Standard_ConstructionError is raised if UFirst>ULast or VFirst>VLast
    /// </summary>
    GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU);
    /// <summary>
    /// Standard_ConstructionError is raised if UFirst>ULast or VFirst>VLast
    /// </summary>
    GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ ShallowCopy();
    void Load(Macad::Occt::Geom_Surface^ theSurf);
    /// <summary>
    /// Standard_ConstructionError is raised if theUFirst>theULast or theVFirst>theVLast
    /// </summary>
    void Load(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU, double theTolV);
    /// <summary>
    /// Standard_ConstructionError is raised if theUFirst>theULast or theVFirst>theVLast
    /// </summary>
    void Load(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU);
    /// <summary>
    /// Standard_ConstructionError is raised if theUFirst>theULast or theVFirst>theVLast
    /// </summary>
    void Load(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast);
    Macad::Occt::Geom_Surface^ Surface();
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
    /// </summary>
    Macad::Occt::Pnt Value(double U, double V);
    /// <summary>
    /// Computes the point of parameters U,V on the surface.
    /// </summary>
    void D0(double U, double V, Macad::Occt::Pnt% P);
    /// <summary>
    /// Computes the point  and the first derivatives on
    /// the surface.
    /// 
    /// Warning : On the specific case of BSplineSurface:
    /// if the surface is cut in interval of continuity at least C1,
    /// the derivatives are computed on the current interval.
    /// else the derivatives are computed on the basis surface.
    /// </summary>
    void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
    /// <summary>
    /// Computes   the point,  the  first  and  second
    /// derivatives on the surface.
    /// 
    /// Warning : On the specific case of BSplineSurface:
    /// if the surface is cut in interval of continuity at least C2,
    /// the derivatives are computed on the current interval.
    /// else the derivatives are computed on the basis surface.
    /// </summary>
    void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
    /// <summary>
    /// Computes the point,  the first, second and third
    /// derivatives on the surface.
    /// 
    /// Warning : On the specific case of BSplineSurface:
    /// if the surface is cut in interval of continuity at least C3,
    /// the derivatives are computed on the current interval.
    /// else the derivatives are computed on the basis surface.
    /// </summary>
    void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
    /// <summary>
    /// Computes the derivative of order Nu in the
    /// direction U and Nv in the direction V at the point P(U, V).
    /// 
    /// Warning : On the specific case of BSplineSurface:
    /// if the surface is cut in interval of continuity CN,
    /// the derivatives are computed on the current interval.
    /// else the derivatives are computed on the basis surface.
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
    /// <summary>
    /// This will NOT make a copy of the
    /// Bezier Surface : If you want to modify
    /// the Surface please make a copy yourself
    /// Also it will NOT trim the surface to
    /// myU/VFirst/Last.
    /// </summary>
    Macad::Occt::Geom_BezierSurface^ Bezier();
    /// <summary>
    /// This will NOT make a copy of the
    /// BSpline Surface : If you want to modify
    /// the Surface please make a copy yourself
    /// Also it will NOT trim the surface to
    /// myU/VFirst/Last.
    /// </summary>
    Macad::Occt::Geom_BSplineSurface^ BSpline();
    Macad::Occt::Ax1 AxeOfRevolution();
    Macad::Occt::Dir Direction();
    Macad::Occt::Adaptor3d_Curve^ BasisCurve();
    Macad::Occt::Adaptor3d_Surface^ BasisSurface();
    double OffsetValue();
    static Macad::Occt::GeomAdaptor_Surface^ CreateDowncasted(::GeomAdaptor_Surface* instance);
}; // class GeomAdaptor_Surface

//---------------------------------------------------------------------
//  Class  GeomAdaptor_SurfaceOfLinearExtrusion
//---------------------------------------------------------------------
/// <summary>
/// Generalised cylinder. This surface is obtained  by sweeping a  curve in  a given
/// direction. The parametrization range  for the parameter U is defined
/// with referenced the curve.
/// The parametrization range for the parameter V is ]-infinite,+infinite[
/// The  position of  the   curve gives  the origin for    the
/// parameter V.
/// The continuity of the surface is CN in the V direction.
/// </summary>
public ref class GeomAdaptor_SurfaceOfLinearExtrusion sealed
    : public Macad::Occt::GeomAdaptor_Surface
{

#ifdef Include_GeomAdaptor_SurfaceOfLinearExtrusion_h
public:
    Include_GeomAdaptor_SurfaceOfLinearExtrusion_h
#endif

public:
    GeomAdaptor_SurfaceOfLinearExtrusion(::GeomAdaptor_SurfaceOfLinearExtrusion* nativeInstance)
        : Macad::Occt::GeomAdaptor_Surface( nativeInstance )
    {}

    GeomAdaptor_SurfaceOfLinearExtrusion(::GeomAdaptor_SurfaceOfLinearExtrusion& nativeInstance)
        : Macad::Occt::GeomAdaptor_Surface( nativeInstance )
    {}

    property ::GeomAdaptor_SurfaceOfLinearExtrusion* NativeInstance
    {
        ::GeomAdaptor_SurfaceOfLinearExtrusion* get()
        {
            return static_cast<::GeomAdaptor_SurfaceOfLinearExtrusion*>(_NativeInstance);
        }
    }

public:
    GeomAdaptor_SurfaceOfLinearExtrusion();
    /// <summary>
    /// The Curve is loaded.
    /// </summary>
    GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// Thew Curve and the Direction are loaded.
    /// </summary>
    GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Dir V);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ ShallowCopy();
    /// <summary>
    /// Changes the Curve
    /// </summary>
    void Load(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// Changes the Direction
    /// </summary>
    void Load(Macad::Occt::Dir V);
    double FirstUParameter();
    double LastUParameter();
    double FirstVParameter();
    double LastVParameter();
    Macad::Occt::GeomAbs_Shape UContinuity();
    /// <summary>
    /// Return CN.
    /// </summary>
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
    bool IsURational();
    bool IsVRational();
    Macad::Occt::Geom_BezierSurface^ Bezier();
    Macad::Occt::Geom_BSplineSurface^ BSpline();
    Macad::Occt::Ax1 AxeOfRevolution();
    Macad::Occt::Dir Direction();
    Macad::Occt::Adaptor3d_Curve^ BasisCurve();
    static Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ CreateDowncasted(::GeomAdaptor_SurfaceOfLinearExtrusion* instance);
}; // class GeomAdaptor_SurfaceOfLinearExtrusion

//---------------------------------------------------------------------
//  Class  GeomAdaptor_SurfaceOfRevolution
//---------------------------------------------------------------------
/// <summary>
/// This class defines a complete surface of revolution.
/// The surface is obtained by rotating a curve a complete revolution
/// about an axis. The curve and the axis must be in the same plane.
/// If the curve and the axis are not in the same plane it is always
/// possible to be in the previous case after a cylindrical projection
/// of the curve in a referenced plane.
/// For a complete surface of revolution the parametric range is
/// 0 <= U <= 2*PI.       --
/// The parametric range for V is defined with the revolved curve.
/// The origin of the U parametrization is given by the position
/// of the revolved curve (reference). The direction of the revolution
/// axis defines the positive sense of rotation (trigonometric sense)
/// corresponding to the increasing of the parametric value U.
/// The derivatives are always defined for the u direction.
/// For the v direction the definition of the derivatives depends on
/// the degree of continuity of the referenced curve.
/// </summary>
public ref class GeomAdaptor_SurfaceOfRevolution sealed
    : public Macad::Occt::GeomAdaptor_Surface
{

#ifdef Include_GeomAdaptor_SurfaceOfRevolution_h
public:
    Include_GeomAdaptor_SurfaceOfRevolution_h
#endif

public:
    GeomAdaptor_SurfaceOfRevolution(::GeomAdaptor_SurfaceOfRevolution* nativeInstance)
        : Macad::Occt::GeomAdaptor_Surface( nativeInstance )
    {}

    GeomAdaptor_SurfaceOfRevolution(::GeomAdaptor_SurfaceOfRevolution& nativeInstance)
        : Macad::Occt::GeomAdaptor_Surface( nativeInstance )
    {}

    property ::GeomAdaptor_SurfaceOfRevolution* NativeInstance
    {
        ::GeomAdaptor_SurfaceOfRevolution* get()
        {
            return static_cast<::GeomAdaptor_SurfaceOfRevolution*>(_NativeInstance);
        }
    }

public:
    GeomAdaptor_SurfaceOfRevolution();
    /// <summary>
    /// The Curve is loaded.
    /// </summary>
    GeomAdaptor_SurfaceOfRevolution(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// The Curve and the Direction are loaded.
    /// </summary>
    GeomAdaptor_SurfaceOfRevolution(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Ax1 V);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor3d_Surface^ ShallowCopy();
    /// <summary>
    /// Changes the Curve
    /// </summary>
    void Load(Macad::Occt::Adaptor3d_Curve^ C);
    /// <summary>
    /// Changes the Direction
    /// </summary>
    void Load(Macad::Occt::Ax1 V);
    Macad::Occt::Ax1 AxeOfRevolution();
    double FirstUParameter();
    double LastUParameter();
    double FirstVParameter();
    double LastVParameter();
    Macad::Occt::GeomAbs_Shape UContinuity();
    /// <summary>
    /// Return CN.
    /// </summary>
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
    /// <summary>
    /// Apex of the Cone = Cone.Position().Location()
    /// ==> ReferenceRadius = 0.
    /// </summary>
    Macad::Occt::gp_Cone^ Cone();
    Macad::Occt::gp_Sphere^ Sphere();
    Macad::Occt::gp_Torus^ Torus();
    int VDegree();
    int NbVPoles();
    int NbVKnots();
    bool IsURational();
    bool IsVRational();
    Macad::Occt::Geom_BezierSurface^ Bezier();
    Macad::Occt::Geom_BSplineSurface^ BSpline();
    Macad::Occt::Ax3 Axis();
    Macad::Occt::Adaptor3d_Curve^ BasisCurve();
    static Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ CreateDowncasted(::GeomAdaptor_SurfaceOfRevolution* instance);
}; // class GeomAdaptor_SurfaceOfRevolution

}; // namespace Occt
}; // namespace Macad
