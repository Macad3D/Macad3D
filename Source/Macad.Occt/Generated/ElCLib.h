// Generated wrapper code for package ElCLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ElCLib
//---------------------------------------------------------------------
/// <summary>
/// Provides functions for basic geometric computations on
/// elementary curves such as conics and lines in 2D and 3D space.
/// This includes:
/// -   calculation of a point or derived vector on a 2D or
/// 3D curve where:
/// -   the curve is provided by the gp package, or
/// defined in reference form (as in the gp package),
/// and
/// -   the point is defined by a parameter,
/// -   evaluation of the parameter corresponding to a point
/// on a 2D or 3D curve from gp,
/// -   various elementary computations which allow you to
/// position parameterized values within the period of a curve.
/// Notes:
/// -   ElCLib stands for Elementary Curves Library.
/// -   If the curves provided by the gp package are not
/// explicitly parameterized, they still have an implicit
/// parameterization, analogous to that which they infer
/// for the equivalent Geom or Geom2d curves.
/// </summary>
public ref class ElCLib sealed
    : public Macad::Occt::BaseClass<::ElCLib>
{

#ifdef Include_ElCLib_h
public:
    Include_ElCLib_h
#endif

public:
    ElCLib(::ElCLib* nativeInstance)
        : Macad::Occt::BaseClass<::ElCLib>( nativeInstance, true )
    {}

    ElCLib(::ElCLib& nativeInstance)
        : Macad::Occt::BaseClass<::ElCLib>( &nativeInstance, false )
    {}

    property ::ElCLib* NativeInstance
    {
        ::ElCLib* get()
        {
            return static_cast<::ElCLib*>(_NativeInstance);
        }
    }

public:
    ElCLib();
    /// <summary>
    /// Return a value in   the  range <UFirst, ULast>  by
    /// adding or removing the period <ULast -  UFirst> to
    /// <U>.
    /// ATTENTION!!!
    /// It is expected but not checked that (ULast > UFirst)
    /// </summary>
    static double InPeriod(double U, double UFirst, double ULast);
    /// <summary>
    /// Adjust U1 and  U2 in the  parametric range  UFirst
    /// Ulast of a periodic curve, where ULast -
    /// UFirst is its period. To do this, this function:
    /// -   sets U1 in the range [ UFirst, ULast ] by
    /// adding/removing the period to/from the value U1, then
    /// -   sets U2 in the range [ U1, U1 + period ] by
    /// adding/removing the period to/from the value U2.
    /// Precision is used to test the equalities.
    /// </summary>
    static void AdjustPeriodic(double UFirst, double ULast, double Precision, double% U1, double% U2);
    /// <summary>
    /// For elementary curves (lines, circles and conics) from
    /// the gp package, computes the point of parameter U.
    /// The result is either:
    /// -   a gp_Pnt point for a curve in 3D space, or
    /// -   a gp_Pnt2d point for a curve in 2D space.
    /// </summary>
    static Macad::Occt::Pnt Value(double U, Macad::Occt::gp_Lin^ L);
    static Macad::Occt::Pnt Value(double U, Macad::Occt::gp_Circ^ C);
    static Macad::Occt::Pnt Value(double U, Macad::Occt::gp_Elips^ E);
    static Macad::Occt::Pnt Value(double U, Macad::Occt::gp_Hypr^ H);
    static Macad::Occt::Pnt Value(double U, Macad::Occt::gp_Parab^ Prb);
    /// <summary>
    /// For elementary curves (lines, circles and conics) from the
    /// gp package, computes:
    /// -   the point P of parameter U, and
    /// -   the first derivative vector V1 at this point.
    /// The results P and V1 are either:
    /// -   a gp_Pnt point and a gp_Vec vector, for a curve in 3D  space, or
    /// -   a gp_Pnt2d point and a gp_Vec2d vector, for a curve in 2D space.
    /// </summary>
    static void D1(double U, Macad::Occt::gp_Lin^ L, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    static void D1(double U, Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    static void D1(double U, Macad::Occt::gp_Elips^ E, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    static void D1(double U, Macad::Occt::gp_Hypr^ H, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    static void D1(double U, Macad::Occt::gp_Parab^ Prb, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    /// <summary>
    /// For elementary curves (circles and conics) from the gp
    /// package, computes:
    /// - the point P of parameter U, and
    /// - the first and second derivative vectors V1 and V2 at this point.
    /// The results, P, V1 and V2, are either:
    /// -   a gp_Pnt point and two gp_Vec vectors, for a curve in 3D space, or
    /// -   a gp_Pnt2d point and two gp_Vec2d vectors, for a curve in 2D space.
    /// </summary>
    static void D2(double U, Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    static void D2(double U, Macad::Occt::gp_Elips^ E, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    static void D2(double U, Macad::Occt::gp_Hypr^ H, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    static void D2(double U, Macad::Occt::gp_Parab^ Prb, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    /// <summary>
    /// For elementary curves (circles, ellipses and hyperbolae)
    /// from the gp package, computes:
    /// -   the point P of parameter U, and
    /// -   the first, second and third derivative vectors V1, V2
    /// and V3 at this point.
    /// The results, P, V1, V2 and V3, are either:
    /// -   a gp_Pnt point and three gp_Vec vectors, for a curve in 3D space, or
    /// -   a gp_Pnt2d point and three gp_Vec2d vectors, for a curve in 2D space.
    /// </summary>
    static void D3(double U, Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    static void D3(double U, Macad::Occt::gp_Elips^ E, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    static void D3(double U, Macad::Occt::gp_Hypr^ H, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// For elementary curves (lines, circles and conics) from
    /// the gp package, computes the vector corresponding to
    /// the Nth derivative at the point of parameter U. The result is either:
    /// -   a gp_Vec vector for a curve in 3D space, or
    /// -   a gp_Vec2d vector for a curve in 2D space.
    /// In the following functions N is the order of derivation
    /// and should be greater than 0
    /// </summary>
    static Macad::Occt::Vec DN(double U, Macad::Occt::gp_Lin^ L, int N);
    static Macad::Occt::Vec DN(double U, Macad::Occt::gp_Circ^ C, int N);
    static Macad::Occt::Vec DN(double U, Macad::Occt::gp_Elips^ E, int N);
    static Macad::Occt::Vec DN(double U, Macad::Occt::gp_Hypr^ H, int N);
    static Macad::Occt::Vec DN(double U, Macad::Occt::gp_Parab^ Prb, int N);
    static Macad::Occt::Pnt2d Value(double U, Macad::Occt::gp_Lin2d^ L);
    static Macad::Occt::Pnt2d Value(double U, Macad::Occt::gp_Circ2d^ C);
    static Macad::Occt::Pnt2d Value(double U, Macad::Occt::gp_Elips2d^ E);
    static Macad::Occt::Pnt2d Value(double U, Macad::Occt::gp_Hypr2d^ H);
    static Macad::Occt::Pnt2d Value(double U, Macad::Occt::gp_Parab2d^ Prb);
    static void D1(double U, Macad::Occt::gp_Lin2d^ L, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
    static void D1(double U, Macad::Occt::gp_Circ2d^ C, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
    static void D1(double U, Macad::Occt::gp_Elips2d^ E, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
    static void D1(double U, Macad::Occt::gp_Hypr2d^ H, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
    static void D1(double U, Macad::Occt::gp_Parab2d^ Prb, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
    static void D2(double U, Macad::Occt::gp_Circ2d^ C, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
    static void D2(double U, Macad::Occt::gp_Elips2d^ E, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
    static void D2(double U, Macad::Occt::gp_Hypr2d^ H, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
    static void D2(double U, Macad::Occt::gp_Parab2d^ Prb, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
    static void D3(double U, Macad::Occt::gp_Circ2d^ C, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
    static void D3(double U, Macad::Occt::gp_Elips2d^ E, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
    /// <summary>
    /// In the following functions N is the order of derivation
    /// and should be greater than 0
    /// </summary>
    static void D3(double U, Macad::Occt::gp_Hypr2d^ H, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
    static Macad::Occt::Vec2d DN(double U, Macad::Occt::gp_Lin2d^ L, int N);
    static Macad::Occt::Vec2d DN(double U, Macad::Occt::gp_Circ2d^ C, int N);
    static Macad::Occt::Vec2d DN(double U, Macad::Occt::gp_Elips2d^ E, int N);
    static Macad::Occt::Vec2d DN(double U, Macad::Occt::gp_Hypr2d^ H, int N);
    static Macad::Occt::Vec2d DN(double U, Macad::Occt::gp_Parab2d^ Prb, int N);
    /// <summary>
    /// Curve evaluation
    /// The following basis functions compute the derivatives on
    /// elementary curves defined by their geometric characteristics.
    /// These functions can be called without constructing a conic
    /// from package gp. They are called by the previous functions.
    /// Example :
    /// A circle is defined by its position and its radius.
    /// </summary>
    static Macad::Occt::Pnt LineValue(double U, Macad::Occt::Ax1 Pos);
    static Macad::Occt::Pnt CircleValue(double U, Macad::Occt::Ax2 Pos, double Radius);
    static Macad::Occt::Pnt EllipseValue(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius);
    static Macad::Occt::Pnt HyperbolaValue(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius);
    static Macad::Occt::Pnt ParabolaValue(double U, Macad::Occt::Ax2 Pos, double Focal);
    static void LineD1(double U, Macad::Occt::Ax1 Pos, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    static void CircleD1(double U, Macad::Occt::Ax2 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    static void EllipseD1(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    static void HyperbolaD1(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    static void ParabolaD1(double U, Macad::Occt::Ax2 Pos, double Focal, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    static void CircleD2(double U, Macad::Occt::Ax2 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    static void EllipseD2(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    static void HyperbolaD2(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    static void ParabolaD2(double U, Macad::Occt::Ax2 Pos, double Focal, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    static void CircleD3(double U, Macad::Occt::Ax2 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    static void EllipseD3(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    static void HyperbolaD3(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    /// <summary>
    /// In the following functions N is the order of derivation
    /// and should be greater than 0
    /// </summary>
    static Macad::Occt::Vec LineDN(double U, Macad::Occt::Ax1 Pos, int N);
    static Macad::Occt::Vec CircleDN(double U, Macad::Occt::Ax2 Pos, double Radius, int N);
    static Macad::Occt::Vec EllipseDN(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, int N);
    static Macad::Occt::Vec HyperbolaDN(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, int N);
    static Macad::Occt::Vec ParabolaDN(double U, Macad::Occt::Ax2 Pos, double Focal, int N);
    static Macad::Occt::Pnt2d LineValue(double U, Macad::Occt::Ax2d Pos);
    static Macad::Occt::Pnt2d CircleValue(double U, Macad::Occt::Ax22d Pos, double Radius);
    static Macad::Occt::Pnt2d EllipseValue(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius);
    static Macad::Occt::Pnt2d HyperbolaValue(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius);
    static Macad::Occt::Pnt2d ParabolaValue(double U, Macad::Occt::Ax22d Pos, double Focal);
    static void LineD1(double U, Macad::Occt::Ax2d Pos, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
    static void CircleD1(double U, Macad::Occt::Ax22d Pos, double Radius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
    static void EllipseD1(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
    static void HyperbolaD1(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
    static void ParabolaD1(double U, Macad::Occt::Ax22d Pos, double Focal, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
    static void CircleD2(double U, Macad::Occt::Ax22d Pos, double Radius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
    static void EllipseD2(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
    static void HyperbolaD2(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
    static void ParabolaD2(double U, Macad::Occt::Ax22d Pos, double Focal, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
    static void CircleD3(double U, Macad::Occt::Ax22d Pos, double Radius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
    static void EllipseD3(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
    /// <summary>
    /// In the following functions N is the order of derivation
    /// and should be greater than 0
    /// </summary>
    static void HyperbolaD3(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
    static Macad::Occt::Vec2d LineDN(double U, Macad::Occt::Ax2d Pos, int N);
    static Macad::Occt::Vec2d CircleDN(double U, Macad::Occt::Ax22d Pos, double Radius, int N);
    static Macad::Occt::Vec2d EllipseDN(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, int N);
    static Macad::Occt::Vec2d HyperbolaDN(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, int N);
    /// <summary>
    /// The following functions compute the parametric value corresponding
    /// to a given point on a elementary curve. The point should be on the
    /// curve.
    /// </summary>
    static Macad::Occt::Vec2d ParabolaDN(double U, Macad::Occt::Ax22d Pos, double Focal, int N);
    /// <summary>
    /// Computes the parameter value of the point P on the given curve.
    /// Note: In its local coordinate system, the parametric
    /// equation of the curve is given by the following:
    /// -   for the line L: P(U) = Po + U*Vo
    /// where Po is the origin and Vo the unit vector of its positioning axis.
    /// -   for the circle C: X(U) = Radius*Cos(U), Y(U) = Radius*Sin(U)
    /// -   for the ellipse E: X(U) = MajorRadius*Cos(U). Y(U) = MinorRadius*Sin(U)
    /// -   for the hyperbola H: X(U) = MajorRadius*Ch(U), Y(U) = MinorRadius*Sh(U)
    /// -   for the parabola Prb:
    /// X(U) = U**2 / (2*p)
    /// Y(U) = U
    /// where p is the distance between the focus and the directrix.
    /// Warning
    /// The point P must be on the curve. These functions are
    /// not protected, however, and if point P is not on the
    /// curve, an exception may be raised.
    /// </summary>
    static double Parameter(Macad::Occt::gp_Lin^ L, Macad::Occt::Pnt P);
    /// <summary>
    /// parametrization
    /// P (U) = L.Location() + U * L.Direction()
    /// </summary>
    static double Parameter(Macad::Occt::gp_Lin2d^ L, Macad::Occt::Pnt2d P);
    static double Parameter(Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt P);
    /// <summary>
    /// parametrization
    /// In the local coordinate system of the circle
    /// X (U) = Radius * Cos (U)
    /// Y (U) = Radius * Sin (U)
    /// </summary>
    static double Parameter(Macad::Occt::gp_Circ2d^ C, Macad::Occt::Pnt2d P);
    static double Parameter(Macad::Occt::gp_Elips^ E, Macad::Occt::Pnt P);
    /// <summary>
    /// parametrization
    /// In the local coordinate system of the Ellipse
    /// X (U) = MajorRadius * Cos (U)
    /// Y (U) = MinorRadius * Sin (U)
    /// </summary>
    static double Parameter(Macad::Occt::gp_Elips2d^ E, Macad::Occt::Pnt2d P);
    static double Parameter(Macad::Occt::gp_Hypr^ H, Macad::Occt::Pnt P);
    /// <summary>
    /// parametrization
    /// In the local coordinate system of the Hyperbola
    /// X (U) = MajorRadius * Ch (U)
    /// Y (U) = MinorRadius * Sh (U)
    /// </summary>
    static double Parameter(Macad::Occt::gp_Hypr2d^ H, Macad::Occt::Pnt2d P);
    static double Parameter(Macad::Occt::gp_Parab^ Prb, Macad::Occt::Pnt P);
    /// <summary>
    /// parametrization
    /// In the local coordinate system of the parabola
    /// Y**2 = (2*P) * X where P is the distance between the focus
    /// and the directrix.
    /// </summary>
    static double Parameter(Macad::Occt::gp_Parab2d^ Prb, Macad::Occt::Pnt2d P);
    static double LineParameter(Macad::Occt::Ax1 Pos, Macad::Occt::Pnt P);
    /// <summary>
    /// parametrization
    /// P (U) = L.Location() + U * L.Direction()
    /// </summary>
    static double LineParameter(Macad::Occt::Ax2d Pos, Macad::Occt::Pnt2d P);
    static double CircleParameter(Macad::Occt::Ax2 Pos, Macad::Occt::Pnt P);
    /// <summary>
    /// Pos is the Axis of the Circle
    /// parametrization
    /// In the local coordinate system of the circle
    /// X (U) = Radius * Cos (U)
    /// Y (U) = Radius * Sin (U)
    /// </summary>
    static double CircleParameter(Macad::Occt::Ax22d Pos, Macad::Occt::Pnt2d P);
    static double EllipseParameter(Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt P);
    /// <summary>
    /// Pos is the Axis of the Ellipse
    /// parametrization
    /// In the local coordinate system of the Ellipse
    /// X (U) = MajorRadius * Cos (U)
    /// Y (U) = MinorRadius * Sin (U)
    /// </summary>
    static double EllipseParameter(Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d P);
    static double HyperbolaParameter(Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt P);
    /// <summary>
    /// Pos is the Axis of the Hyperbola
    /// parametrization
    /// In the local coordinate system of the Hyperbola
    /// X (U) = MajorRadius * Ch (U)
    /// Y (U) = MinorRadius * Sh (U)
    /// </summary>
    static double HyperbolaParameter(Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d P);
    static double ParabolaParameter(Macad::Occt::Ax2 Pos, Macad::Occt::Pnt P);
    /// <summary>
    /// Pos is the mirror axis of the parabola
    /// parametrization
    /// In the local coordinate system of the parabola
    /// Y**2 = (2*P) * X where P is the distance between the focus
    /// and the directrix.
    /// The following functions build  a 3d curve from a
    /// 2d curve at a given position defined with an Ax2.
    /// </summary>
    static double ParabolaParameter(Macad::Occt::Ax22d Pos, Macad::Occt::Pnt2d P);
    static Macad::Occt::Pnt To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Pnt2d P);
    static Macad::Occt::Vec To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Vec2d V);
    static Macad::Occt::Dir To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Dir2d V);
    static Macad::Occt::Ax1 To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Ax2d A);
    static Macad::Occt::Ax2 To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Ax22d A);
    static Macad::Occt::gp_Lin^ To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Lin2d^ L);
    static Macad::Occt::gp_Circ^ To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Circ2d^ C);
    static Macad::Occt::gp_Elips^ To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Elips2d^ E);
    static Macad::Occt::gp_Hypr^ To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Hypr2d^ H);
    /// <summary>
    /// These functions build a 3D geometric entity from a 2D geometric entity.
    /// The "X Axis" and the "Y Axis" of the global coordinate
    /// system (i.e. 2D space) are lined up respectively with the
    /// "X Axis" and "Y Axis" of the 3D coordinate system, Pos.
    /// </summary>
    static Macad::Occt::gp_Parab^ To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Parab2d^ Prb);
}; // class ElCLib

}; // namespace Occt
}; // namespace Macad
