// Generated wrapper code for package Geom2dAdaptor

#pragma once

#include "Adaptor2d.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Geom2dAdaptor
//---------------------------------------------------------------------
/// <summary>
/// this package  contains the geometric definition of
/// 2d  curves compatible  with  the  Adaptor  package
/// templates.
/// </summary>
public ref class Geom2dAdaptor sealed
    : public Macad::Occt::BaseClass<::Geom2dAdaptor>
{

#ifdef Include_Geom2dAdaptor_h
public:
    Include_Geom2dAdaptor_h
#endif

public:
    Geom2dAdaptor(::Geom2dAdaptor* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dAdaptor>( nativeInstance, true )
    {}

    Geom2dAdaptor(::Geom2dAdaptor& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dAdaptor>( &nativeInstance, false )
    {}

    property ::Geom2dAdaptor* NativeInstance
    {
        ::Geom2dAdaptor* get()
        {
            return static_cast<::Geom2dAdaptor*>(_NativeInstance);
        }
    }

public:
    Geom2dAdaptor();
    /// <summary>
    /// Inherited  from    GHCurve.   Provides a  curve
    /// handled by reference.
    /// Creates  a 2d  curve  from  a  HCurve2d.  This
    /// cannot process the OtherCurves.
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ MakeCurve(Macad::Occt::Adaptor2d_Curve2d^ HC);
}; // class Geom2dAdaptor

//---------------------------------------------------------------------
//  Class  Geom2dAdaptor_Curve
//---------------------------------------------------------------------
/// <summary>
/// An interface between the services provided by any
/// curve from the package Geom2d and those required
/// of the curve by algorithms which use it.
/// 
/// Polynomial coefficients of BSpline curves used for their evaluation are
/// cached for better performance. Therefore these evaluations are not
/// thread-safe and parallel evaluations need to be prevented.
/// </summary>
public ref class Geom2dAdaptor_Curve
    : public Macad::Occt::Adaptor2d_Curve2d
{

#ifdef Include_Geom2dAdaptor_Curve_h
public:
    Include_Geom2dAdaptor_Curve_h
#endif

protected:
    Geom2dAdaptor_Curve(InitMode init)
        : Macad::Occt::Adaptor2d_Curve2d( init )
    {}

public:
    Geom2dAdaptor_Curve(::Geom2dAdaptor_Curve* nativeInstance)
        : Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
    {}

    Geom2dAdaptor_Curve(::Geom2dAdaptor_Curve& nativeInstance)
        : Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
    {}

    property ::Geom2dAdaptor_Curve* NativeInstance
    {
        ::Geom2dAdaptor_Curve* get()
        {
            return static_cast<::Geom2dAdaptor_Curve*>(_NativeInstance);
        }
    }

public:
    Geom2dAdaptor_Curve();
    Geom2dAdaptor_Curve(Macad::Occt::Geom2d_Curve^ C);
    /// <summary>
    /// Standard_ConstructionError is raised if Ufirst>Ulast
    /// </summary>
    Geom2dAdaptor_Curve(Macad::Occt::Geom2d_Curve^ C, double UFirst, double ULast);
    /// <summary>
    /// Shallow copy of adaptor
    /// </summary>
    Macad::Occt::Adaptor2d_Curve2d^ ShallowCopy();
    /// <summary>
    /// Reset currently loaded curve (undone Load()).
    /// </summary>
    void Reset();
    void Load(Macad::Occt::Geom2d_Curve^ theCurve);
    /// <summary>
    /// Standard_ConstructionError is raised if theUFirst>theULast
    /// </summary>
    void Load(Macad::Occt::Geom2d_Curve^ theCurve, double theUFirst, double theULast);
    Macad::Occt::Geom2d_Curve^ Curve();
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
    Macad::Occt::Adaptor2d_Curve2d^ Trim(double First, double Last, double Tol);
    bool IsClosed();
    bool IsPeriodic();
    double Period();
    /// <summary>
    /// Computes the point of parameter U on the curve
    /// </summary>
    Macad::Occt::Pnt2d Value(double U);
    /// <summary>
    /// Computes the point of parameter U.
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
    /// returns the parametric resolution
    /// </summary>
    double Resolution(double Ruv);
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
    int NbSamples();
    Macad::Occt::Geom2d_BezierCurve^ Bezier();
    Macad::Occt::Geom2d_BSplineCurve^ BSpline();
    static Macad::Occt::Geom2dAdaptor_Curve^ CreateDowncasted(::Geom2dAdaptor_Curve* instance);
}; // class Geom2dAdaptor_Curve

}; // namespace Occt
}; // namespace Macad
