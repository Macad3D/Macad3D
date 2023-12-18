// Generated wrapper code for package ElSLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ElSLib
//---------------------------------------------------------------------
/// <summary>
/// Provides functions for basic geometric computation on
/// elementary surfaces.
/// This includes:
/// -   calculation of a point or derived vector on a surface
/// where the surface is provided by the gp package, or
/// defined in canonical form (as in the gp package), and
/// the point is defined with a parameter,
/// -   evaluation of the parameters corresponding to a
/// point on an elementary surface from gp,
/// -   calculation of isoparametric curves on an elementary
/// surface defined in canonical form (as in the gp package).
/// Notes:
/// -   ElSLib stands for Elementary Surfaces Library.
/// -   If the surfaces provided by the gp package are not
/// explicitly parameterized, they still have an implicit
/// parameterization, similar to that which they infer on
/// the equivalent Geom surfaces.
/// Note: ElSLib stands for Elementary Surfaces Library.
/// </summary>
public ref class ElSLib sealed
    : public Macad::Occt::BaseClass<::ElSLib>
{

#ifdef Include_ElSLib_h
public:
    Include_ElSLib_h
#endif

public:
    ElSLib(::ElSLib* nativeInstance)
        : Macad::Occt::BaseClass<::ElSLib>( nativeInstance, true )
    {}

    ElSLib(::ElSLib& nativeInstance)
        : Macad::Occt::BaseClass<::ElSLib>( &nativeInstance, false )
    {}

    property ::ElSLib* NativeInstance
    {
        ::ElSLib* get()
        {
            return static_cast<::ElSLib*>(_NativeInstance);
        }
    }

public:
    ElSLib();
    /// <summary>
    /// For elementary surfaces from the gp package (planes,
    /// cones, cylinders, spheres and tori), computes the point
    /// of parameters (U, V).
    /// </summary>
    static Macad::Occt::Pnt Value(double U, double V, Macad::Occt::Pln Pl);
    static Macad::Occt::Pnt Value(double U, double V, Macad::Occt::gp_Cone^ C);
    static Macad::Occt::Pnt Value(double U, double V, Macad::Occt::gp_Cylinder^ C);
    static Macad::Occt::Pnt Value(double U, double V, Macad::Occt::gp_Sphere^ S);
    static Macad::Occt::Pnt Value(double U, double V, Macad::Occt::gp_Torus^ T);
    /// <summary>
    /// For elementary surfaces from the gp package (planes,
    /// cones, cylinders, spheres and tori), computes the
    /// derivative vector of order Nu and Nv in the u and v
    /// parametric directions respectively, at the point of
    /// parameters (U, V).
    /// </summary>
    static Macad::Occt::Vec DN(double U, double V, Macad::Occt::Pln Pl, int Nu, int Nv);
    static Macad::Occt::Vec DN(double U, double V, Macad::Occt::gp_Cone^ C, int Nu, int Nv);
    static Macad::Occt::Vec DN(double U, double V, Macad::Occt::gp_Cylinder^ C, int Nu, int Nv);
    static Macad::Occt::Vec DN(double U, double V, Macad::Occt::gp_Sphere^ S, int Nu, int Nv);
    static Macad::Occt::Vec DN(double U, double V, Macad::Occt::gp_Torus^ T, int Nu, int Nv);
    /// <summary>
    /// For elementary surfaces from the gp package (planes,
    /// cones, cylinders, spheres and tori), computes the point P
    /// of parameters (U, V).inline
    /// </summary>
    static void D0(double U, double V, Macad::Occt::Pln Pl, Macad::Occt::Pnt% P);
    static void D0(double U, double V, Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt% P);
    static void D0(double U, double V, Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt% P);
    static void D0(double U, double V, Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt% P);
    static void D0(double U, double V, Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt% P);
    /// <summary>
    /// For elementary surfaces from the gp package (planes,
    /// cones, cylinders, spheres and tori), computes:
    /// -   the point P of parameters (U, V), and
    /// -   the first derivative vectors Vu and Vv at this point in
    /// the u and v parametric directions respectively.
    /// </summary>
    static void D1(double U, double V, Macad::Occt::Pln Pl, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
    static void D1(double U, double V, Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
    static void D1(double U, double V, Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
    static void D1(double U, double V, Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
    static void D1(double U, double V, Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
    /// <summary>
    /// For elementary surfaces from the gp package (cones,
    /// cylinders, spheres and tori), computes:
    /// -   the point P of parameters (U, V), and
    /// -   the first derivative vectors Vu and Vv at this point in
    /// the u and v parametric directions respectively, and
    /// -   the second derivative vectors Vuu, Vvv and Vuv at this point.
    /// </summary>
    static void D2(double U, double V, Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
    static void D2(double U, double V, Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
    static void D2(double U, double V, Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
    static void D2(double U, double V, Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
    /// <summary>
    /// For elementary surfaces from the gp package (cones,
    /// cylinders, spheres and tori), computes:
    /// -   the point P of parameters (U,V), and
    /// -   the first derivative vectors Vu and Vv at this point in
    /// the u and v parametric directions respectively, and
    /// -   the second derivative vectors Vuu, Vvv and Vuv at
    /// this point, and
    /// -   the third derivative vectors Vuuu, Vvvv, Vuuv and
    /// Vuvv at this point.
    /// </summary>
    static void D3(double U, double V, Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
    static void D3(double U, double V, Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
    static void D3(double U, double V, Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
    /// <summary>
    /// Surface evaluation
    /// The following functions compute the point and the
    /// derivatives on elementary surfaces defined with their
    /// geometric characteristics.
    /// You don't need to create the surface to use these functions.
    /// These functions are called by the previous  ones.
    /// Example :
    /// A cylinder is defined with its position and its radius.
    /// </summary>
    static void D3(double U, double V, Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
    static Macad::Occt::Pnt PlaneValue(double U, double V, Macad::Occt::Ax3 Pos);
    static Macad::Occt::Pnt CylinderValue(double U, double V, Macad::Occt::Ax3 Pos, double Radius);
    static Macad::Occt::Pnt ConeValue(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle);
    static Macad::Occt::Pnt SphereValue(double U, double V, Macad::Occt::Ax3 Pos, double Radius);
    static Macad::Occt::Pnt TorusValue(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius);
    static Macad::Occt::Vec PlaneDN(double U, double V, Macad::Occt::Ax3 Pos, int Nu, int Nv);
    static Macad::Occt::Vec CylinderDN(double U, double V, Macad::Occt::Ax3 Pos, double Radius, int Nu, int Nv);
    static Macad::Occt::Vec ConeDN(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, int Nu, int Nv);
    static Macad::Occt::Vec SphereDN(double U, double V, Macad::Occt::Ax3 Pos, double Radius, int Nu, int Nv);
    static Macad::Occt::Vec TorusDN(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, int Nu, int Nv);
    static void PlaneD0(double U, double V, Macad::Occt::Ax3 Pos, Macad::Occt::Pnt% P);
    static void ConeD0(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt% P);
    static void CylinderD0(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P);
    static void SphereD0(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P);
    static void TorusD0(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P);
    static void PlaneD1(double U, double V, Macad::Occt::Ax3 Pos, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
    static void ConeD1(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
    static void CylinderD1(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
    static void SphereD1(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
    static void TorusD1(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
    static void ConeD2(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
    static void CylinderD2(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
    static void SphereD2(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
    static void TorusD2(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
    static void ConeD3(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
    static void CylinderD3(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
    static void SphereD3(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
    /// <summary>
    /// The following functions compute the parametric values
    /// corresponding to a given point on a elementary surface.
    /// The point should be on the surface.
    /// </summary>
    static void TorusD3(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
    /// <summary>
    /// parametrization
    /// P (U, V) =
    /// Pl.Location() + U * Pl.XDirection() + V * Pl.YDirection()
    /// </summary>
    static void Parameters(Macad::Occt::Pln Pl, Macad::Occt::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) = Location + V * ZDirection +
    /// Radius * (Cos(U) * XDirection + Sin (U) * YDirection)
    /// </summary>
    static void Parameters(Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) =  Location + V * ZDirection +
    /// (Radius + V * Tan (SemiAngle)) *
    /// (Cos(U) * XDirection + Sin(U) * YDirection)
    /// </summary>
    static void Parameters(Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) = Location +
    /// Radius * Cos (V) * (Cos (U) * XDirection + Sin (U) * YDirection) +
    /// Radius * Sin (V) * ZDirection
    /// </summary>
    static void Parameters(Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) = Location +
    /// (MajorRadius + MinorRadius * Cos(U)) *
    /// (Cos(V) * XDirection - Sin(V) * YDirection) +
    /// MinorRadius * Sin(U) * ZDirection
    /// </summary>
    static void Parameters(Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) =
    /// Pl.Location() + U * Pl.XDirection() + V * Pl.YDirection()
    /// </summary>
    static void PlaneParameters(Macad::Occt::Ax3 Pos, Macad::Occt::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) = Location + V * ZDirection +
    /// Radius * (Cos(U) * XDirection + Sin (U) * YDirection)
    /// </summary>
    static void CylinderParameters(Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) =  Location + V * ZDirection +
    /// (Radius + V * Tan (SemiAngle)) *
    /// (Cos(U) * XDirection + Sin(U) * YDirection)
    /// </summary>
    static void ConeParameters(Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) = Location +
    /// Radius * Cos (V) * (Cos (U) * XDirection + Sin (U) * YDirection) +
    /// Radius * Sin (V) * ZDirection
    /// </summary>
    static void SphereParameters(Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt P, double% U, double% V);
    /// <summary>
    /// parametrization
    /// P (U, V) = Location +
    /// (MajorRadius + MinorRadius * Cos(U)) *
    /// (Cos(V) * XDirection - Sin(V) * YDirection) +
    /// MinorRadius * Sin(U) * ZDirection
    /// </summary>
    static void TorusParameters(Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt P, double% U, double% V);
    /// <summary>
    /// compute the U Isoparametric gp_Lin of the plane.
    /// </summary>
    static Macad::Occt::gp_Lin^ PlaneUIso(Macad::Occt::Ax3 Pos, double U);
    /// <summary>
    /// compute the U Isoparametric gp_Lin of the cylinder.
    /// </summary>
    static Macad::Occt::gp_Lin^ CylinderUIso(Macad::Occt::Ax3 Pos, double Radius, double U);
    /// <summary>
    /// compute the U Isoparametric gp_Lin of the cone.
    /// </summary>
    static Macad::Occt::gp_Lin^ ConeUIso(Macad::Occt::Ax3 Pos, double Radius, double SAngle, double U);
    /// <summary>
    /// compute the U Isoparametric gp_Circ of the sphere,
    /// (the meridian is not trimmed).
    /// </summary>
    static Macad::Occt::gp_Circ^ SphereUIso(Macad::Occt::Ax3 Pos, double Radius, double U);
    /// <summary>
    /// compute the U Isoparametric gp_Circ of the torus.
    /// </summary>
    static Macad::Occt::gp_Circ^ TorusUIso(Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, double U);
    /// <summary>
    /// compute the V Isoparametric gp_Lin of the plane.
    /// </summary>
    static Macad::Occt::gp_Lin^ PlaneVIso(Macad::Occt::Ax3 Pos, double V);
    /// <summary>
    /// compute the V Isoparametric gp_Circ of the cylinder.
    /// </summary>
    static Macad::Occt::gp_Circ^ CylinderVIso(Macad::Occt::Ax3 Pos, double Radius, double V);
    /// <summary>
    /// compute the V Isoparametric gp_Circ of the cone.
    /// </summary>
    static Macad::Occt::gp_Circ^ ConeVIso(Macad::Occt::Ax3 Pos, double Radius, double SAngle, double V);
    /// <summary>
    /// compute the V Isoparametric gp_Circ of the sphere,
    /// (the meridian is not trimmed).
    /// </summary>
    static Macad::Occt::gp_Circ^ SphereVIso(Macad::Occt::Ax3 Pos, double Radius, double V);
    /// <summary>
    /// compute the V Isoparametric gp_Circ of the torus.
    /// </summary>
    static Macad::Occt::gp_Circ^ TorusVIso(Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, double V);
}; // class ElSLib

}; // namespace Occt
}; // namespace Macad
