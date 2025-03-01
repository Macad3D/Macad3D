// Generated wrapper code for package BndLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BndLib
//---------------------------------------------------------------------
/// <summary>
/// The BndLib package provides functions to add a geometric primitive to a bounding box.
/// Note: these functions work with gp objects, optionally
/// limited by parameter values. If the curves and surfaces
/// provided by the gp package are not explicitly
/// parameterized, they still have an implicit parameterization,
/// similar to that which they infer for the equivalent Geom or Geom2d objects.
/// Add : Package to compute the bounding boxes for elementary
/// objects from gp in 2d and 3d .
/// 
/// AddCurve2d : A class to compute the bounding box for a curve
/// in 2d dimensions ;the curve is defined by a tool
/// 
/// AddCurve : A class to compute the bounding box for a curve
/// in 3d dimensions ;the curve is defined by a tool
/// 
/// AddSurface : A class to compute the bounding box for a surface.
/// The surface is defined by a tool for the geometry and another
/// tool for the topology (only the edges in 2d dimensions)
/// </summary>
public ref class BndLib sealed
    : public Macad::Occt::BaseClass<::BndLib>
{

#ifdef Include_BndLib_h
public:
    Include_BndLib_h
#endif

public:
    BndLib(::BndLib* nativeInstance)
        : Macad::Occt::BaseClass<::BndLib>( nativeInstance, true )
    {}

    BndLib(::BndLib& nativeInstance)
        : Macad::Occt::BaseClass<::BndLib>( &nativeInstance, false )
    {}

    property ::BndLib* NativeInstance
    {
        ::BndLib* get()
        {
            return static_cast<::BndLib*>(_NativeInstance);
        }
    }

public:
    BndLib();
    /// <summary>
    /// Bounding box for a surface trimmed or not
    /// Adds the segment of the line L limited by the two
    /// parameter values P1 and P2, to the bounding box B, and
    /// then enlarges B by the tolerance value Tol.
    /// Tol is the tolerance value to enlarge the minimum and maximum dimension
    /// P1 and P2 may represent infinite values.
    /// Exceptions
    /// Standard_Failure if P1 and P2 are either two negative
    /// infinite real numbers, or two positive infinite real numbers.
    /// </summary>
    static void Add(Macad::Occt::gp_Lin^ L, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B);
    static void Add(Macad::Occt::gp_Lin2d^ L, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B);
    static void Add(Macad::Occt::gp_Circ^ C, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// P2-P1 can be in [0,2*pi]
    /// </summary>
    static void Add(Macad::Occt::gp_Circ^ C, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B);
    static void Add(Macad::Occt::gp_Circ2d^ C, double Tol, Macad::Occt::Bnd_Box2d^ B);
    /// <summary>
    /// Adds the circle C, or the arc of the circle C
    /// limited by the two parameter values P1 and P2,
    /// to the bounding box B, and then enlarges B by the tolerance value Tol.
    /// P2-P1 can be in [0,2*pi]
    /// </summary>
    static void Add(Macad::Occt::gp_Circ2d^ C, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B);
    static void Add(Macad::Occt::gp_Elips^ C, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// P2-P1 can be in [0,2*pi]
    /// </summary>
    static void Add(Macad::Occt::gp_Elips^ C, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B);
    static void Add(Macad::Occt::gp_Elips2d^ C, double Tol, Macad::Occt::Bnd_Box2d^ B);
    /// <summary>
    /// Adds the ellipse E, or the arc of the ellipse E
    /// limited by the two parameter values P1 and P2,
    /// to the bounding box B, and then enlarges B by the tolerance value Tol.
    /// P2-P1 can be in [0,2*pi]
    /// </summary>
    static void Add(Macad::Occt::gp_Elips2d^ C, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B);
    static void Add(Macad::Occt::gp_Parab^ P, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds the arc of the parabola P limited by the two
    /// parameter values P1 and P2, to the bounding box B, and
    /// then enlarges B by the tolerance value Tol.
    /// P1 and P2 may represent infinite values.
    /// Exceptions
    /// Standard_Failure if P1 and P2 are either two negative
    /// infinite real numbers, or two positive infinite real numbers.
    /// </summary>
    static void Add(Macad::Occt::gp_Parab2d^ P, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B);
    static void Add(Macad::Occt::gp_Hypr^ H, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds the arc of the branch of hyperbola H limited by the
    /// two parameter values P1 and P2, to the bounding box B,
    /// and then enlarges B by the tolerance value Tol.
    /// P1 and P2 may represent infinite values.
    /// Exceptions
    /// Standard_Failure if P1 and P2 are either two negative
    /// infinite real numbers, or two positive infinite real numbers.
    /// </summary>
    static void Add(Macad::Occt::gp_Hypr2d^ H, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B);
    /// <summary>
    /// UMax -UMin can be in [0,2*pi]
    /// </summary>
    static void Add(Macad::Occt::gp_Cylinder^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds to the bounding box B, the patch of the cylinder S limited
    /// -   in the v parametric direction, by the two parameter
    /// values VMin and VMax
    /// -   and optionally in the u parametric direction, by the two
    /// parameter values UMin and UMax.
    /// B is then enlarged by the tolerance value Tol.
    /// VMin and VMax may represent infinite values.
    /// Exceptions
    /// Standard_Failure if VMin and VMax are either two
    /// negative infinite real numbers, or two positive infinite real numbers.
    /// </summary>
    static void Add(Macad::Occt::gp_Cylinder^ S, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// UMax-UMin can be in [0,2*pi]
    /// </summary>
    static void Add(Macad::Occt::gp_Cone^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds to the bounding box B, the patch of the cone S limited
    /// -   in the v parametric direction, by the two parameter
    /// values VMin and VMax
    /// -   and optionally in the u parametric direction, by the two
    /// parameter values UMin and UMax,
    /// B is then enlarged by the tolerance value Tol.
    /// VMin and VMax may represent infinite values.
    /// Exceptions
    /// Standard_Failure if VMin and VMax are either two
    /// negative infinite real numbers, or two positive infinite real numbers.
    /// </summary>
    static void Add(Macad::Occt::gp_Cone^ S, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
    static void Add(Macad::Occt::gp_Sphere^ S, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds to the bounding box B the sphere S, or
    /// -   the patch of the sphere S, limited in the u parametric
    /// direction, by the two parameter values UMin and UMax,
    /// and in the v parametric direction, by the two parameter
    /// values VMin and VMax.
    /// B is then enlarged by the tolerance value Tol.
    /// UMax-UMin can be in [0,2*pi]
    /// VMin,VMax can be [-pi/2,pi/2]
    /// </summary>
    static void Add(Macad::Occt::gp_Sphere^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
    static void Add(Macad::Occt::gp_Torus^ P, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds to the bounding box B
    /// -   the torus S, or
    /// -   the patch of the torus S, limited in the u parametric
    /// direction, by the two parameter values UMin and UMax,
    /// and in the v parametric direction, by the two parameter
    /// values VMin and VMax.
    /// B is then enlarged by the tolerance value Tol.
    /// UMax-UMin can be in [0,2*pi],
    /// VMin,VMax can be [-pi/2,pi/2]
    /// </summary>
    static void Add(Macad::Occt::gp_Torus^ P, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
}; // class BndLib

//---------------------------------------------------------------------
//  Class  BndLib_Add2dCurve
//---------------------------------------------------------------------
/// <summary>
/// Computes the bounding box for a curve in 2d .
/// Functions to add a 2D curve to a bounding box.
/// The 2D curve is defined from a Geom2d curve.
/// </summary>
public ref class BndLib_Add2dCurve sealed
    : public Macad::Occt::BaseClass<::BndLib_Add2dCurve>
{

#ifdef Include_BndLib_Add2dCurve_h
public:
    Include_BndLib_Add2dCurve_h
#endif

public:
    BndLib_Add2dCurve(::BndLib_Add2dCurve* nativeInstance)
        : Macad::Occt::BaseClass<::BndLib_Add2dCurve>( nativeInstance, true )
    {}

    BndLib_Add2dCurve(::BndLib_Add2dCurve& nativeInstance)
        : Macad::Occt::BaseClass<::BndLib_Add2dCurve>( &nativeInstance, false )
    {}

    property ::BndLib_Add2dCurve* NativeInstance
    {
        ::BndLib_Add2dCurve* get()
        {
            return static_cast<::BndLib_Add2dCurve*>(_NativeInstance);
        }
    }

public:
    BndLib_Add2dCurve();
    /// <summary>
    /// Adds to the bounding box B the curve C
    /// B is then enlarged by the tolerance value Tol.
    /// Note: depending on the type of curve, one of the following
    /// representations of the curve C is used to include it in the bounding box B:
    /// -   an exact representation if C is built from a line, a circle   or a conic curve,
    /// -   the poles of the curve if C is built from a Bezier curve or   a BSpline curve,
    /// -   if not, the points of an approximation of the curve C.
    /// Warning
    /// C is an adapted curve, that is, an object which is an interface between:
    /// -   the services provided by a 2D curve from the package Geom2d
    /// -   and those required of the curve by the computation algorithm.
    /// The adapted curve is created in the following way:
    /// Handle(Geom2d_Curve) mycurve = ...
    /// ;
    /// Geom2dAdaptor_Curve C(mycurve);
    /// The bounding box B is then enlarged by adding it:
    /// Bnd_Box2d B;
    /// // ...
    /// Standard_Real Tol = ... ;
    /// Add2dCurve::Add ( C, Tol, B );
    /// Exceptions
    /// Standard_Failure if the curve is built from:
    /// -   a Geom_Line, or
    /// -   a Geom_Parabola, or
    /// -   a Geom_Hyperbola,
    /// and P1 and P2 are either two negative infinite real
    /// numbers, or two positive infinite real numbers.
    /// </summary>
    static void Add(Macad::Occt::Adaptor2d_Curve2d^ C, double Tol, Macad::Occt::Bnd_Box2d^ B);
    /// <summary>
    /// Adds to the bounding box Bthe arc of the curve C limited by the two parameter
    /// values P1 and P2.
    /// B is then enlarged by the tolerance value Tol.
    /// Note: depending on the type of curve, one of the following
    /// representations of the curve C is used to include it in the bounding box B:
    /// -   an exact representation if C is built from a line, a circle   or a conic curve,
    /// -   the poles of the curve if C is built from a Bezier curve or   a BSpline curve,
    /// -   if not, the points of an approximation of the curve C.
    /// Warning
    /// C is an adapted curve, that is, an object which is an interface between:
    /// -   the services provided by a 2D curve from the package Geom2d
    /// -   and those required of the curve by the computation algorithm.
    /// The adapted curve is created in the following way:
    /// Handle(Geom2d_Curve) mycurve = ...
    /// ;
    /// Geom2dAdaptor_Curve C(mycurve);
    /// The bounding box B is then enlarged by adding it:
    /// Bnd_Box2d B;
    /// // ...
    /// Standard_Real Tol = ... ;
    /// Add2dCurve::Add ( C, Tol, B );
    /// Exceptions
    /// Standard_Failure if the curve is built from:
    /// -   a Geom_Line, or
    /// -   a Geom_Parabola, or
    /// -   a Geom_Hyperbola,
    /// and P1 and P2 are either two negative infinite real
    /// numbers, or two positive infinite real numbers.
    /// </summary>
    static void Add(Macad::Occt::Adaptor2d_Curve2d^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box2d^ B);
    /// <summary>
    /// Adds to the bounding box B the curve C
    /// B is then enlarged by the tolerance value Tol.
    /// Note: depending on the type of curve, one of the following
    /// representations of the curve C is used to include it in the bounding box B:
    /// -   an exact representation if C is built from a line, a circle or a conic curve,
    /// -   the poles of the curve if C is built from a Bezier curve or a BSpline curve,
    /// -   if not, the points of an approximation of the curve C.
    /// </summary>
    static void Add(Macad::Occt::Geom2d_Curve^ C, double Tol, Macad::Occt::Bnd_Box2d^ Box);
    /// <summary>
    /// Adds to the bounding box B the part of curve C
    /// B is then enlarged by the tolerance value Tol.
    /// U1, U2 - the parametric range to compute the bounding box;
    /// Note: depending on the type of curve, one of the following
    /// representations of the curve C is used to include it in the bounding box B:
    /// -   an exact representation if C is built from a line, a circle or a conic curve,
    /// -   the poles of the curve if C is built from a Bezier curve or a BSpline curve,
    /// -   if not, the points of an approximation of the curve C.
    /// </summary>
    static void Add(Macad::Occt::Geom2d_Curve^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box2d^ B);
    /// <summary>
    /// Adds to the bounding box B the part of curve C
    /// B is then enlarged by the tolerance value Tol.
    /// U1, U2 - the parametric range to compute the bounding box;
    /// Note: depending on the type of curve, one of the following
    /// algorithms  is used to include it in the bounding box B:
    /// -   an exact analytical if C is built from a line, a circle or a conic curve,
    /// -   numerical calculation of bounding box sizes, based on minimization algorithm,  for other
    /// types of curve If Tol = < Precision::PConfusion(), Precision::PConfusion is used as tolerance
    /// for calculation
    /// </summary>
    static void AddOptimal(Macad::Occt::Geom2d_Curve^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box2d^ B);
}; // class BndLib_Add2dCurve

//---------------------------------------------------------------------
//  Class  BndLib_Add3dCurve
//---------------------------------------------------------------------
/// <summary>
/// Computes the bounding box for a curve in 3d.
/// Functions to add a 3D curve to a bounding box.
/// The 3D curve is defined from a Geom curve.
/// </summary>
public ref class BndLib_Add3dCurve sealed
    : public Macad::Occt::BaseClass<::BndLib_Add3dCurve>
{

#ifdef Include_BndLib_Add3dCurve_h
public:
    Include_BndLib_Add3dCurve_h
#endif

public:
    BndLib_Add3dCurve(::BndLib_Add3dCurve* nativeInstance)
        : Macad::Occt::BaseClass<::BndLib_Add3dCurve>( nativeInstance, true )
    {}

    BndLib_Add3dCurve(::BndLib_Add3dCurve& nativeInstance)
        : Macad::Occt::BaseClass<::BndLib_Add3dCurve>( &nativeInstance, false )
    {}

    property ::BndLib_Add3dCurve* NativeInstance
    {
        ::BndLib_Add3dCurve* get()
        {
            return static_cast<::BndLib_Add3dCurve*>(_NativeInstance);
        }
    }

public:
    BndLib_Add3dCurve();
    /// <summary>
    /// Adds to the bounding box B the curve C
    /// B is then enlarged by the tolerance value Tol.
    /// Note: depending on the type of curve, one of the following
    /// representations of the curve C is used to include it in the bounding box B:
    /// -   an exact representation if C is built from a line, a circle   or a conic curve,
    /// -   the poles of the curve if C is built from a Bezier curve or   a BSpline curve,
    /// if not, the points of an approximation of the curve C.
    /// Warning
    /// C is an adapted curve, that is, an object which is an interface between:
    /// -   the services provided by a 3D curve from the package   Geom
    /// -   and those required of the curve by the computation algorithm.
    /// The adapted curve is created in the following way:
    /// Handle(Geom_Curve) mycurve = ... ;
    /// GeomAdaptor_Curve C(mycurve);
    /// The bounding box B is then enlarged by adding it:
    /// Bnd_Box B;
    /// // ...
    /// Standard_Real Tol = ... ;
    /// Add3dCurve::Add ( C, Tol, B );
    /// Exceptions
    /// Standard_Failure if the curve is built from:
    /// -   a Geom_Line, or
    /// -   a Geom_Parabola, or
    /// -   a Geom_Hyperbola,
    /// and P1 and P2 are either two negative infinite real
    /// numbers, or two positive infinite real numbers.
    /// </summary>
    static void Add(Macad::Occt::Adaptor3d_Curve^ C, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds to the bounding box B the curve C
    /// the arc of the curve C limited by the two parameter values P1 and P2.
    /// Note: depending on the type of curve, one of the following
    /// representations of the curve C is used to include it in the bounding box B:
    /// -   an exact representation if C is built from a line, a circle   or a conic curve,
    /// -   the poles of the curve if C is built from a Bezier curve or   a BSpline curve,
    /// if not, the points of an approximation of the curve C.
    /// Warning
    /// C is an adapted curve, that is, an object which is an interface between:
    /// -   the services provided by a 3D curve from the package   Geom
    /// -   and those required of the curve by the computation algorithm.
    /// The adapted curve is created in the following way:
    /// Handle(Geom_Curve) mycurve = ... ;
    /// GeomAdaptor_Curve C(mycurve);
    /// The bounding box B is then enlarged by adding it:
    /// Bnd_Box B;
    /// // ...
    /// Standard_Real Tol = ... ;
    /// Add3dCurve::Add ( C, Tol, B );
    /// Exceptions
    /// Standard_Failure if the curve is built from:
    /// -   a Geom_Line, or
    /// -   a Geom_Parabola, or
    /// -   a Geom_Hyperbola,
    /// and P1 and P2 are either two negative infinite real
    /// numbers, or two positive infinite real numbers.
    /// </summary>
    static void Add(Macad::Occt::Adaptor3d_Curve^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds to the bounding box B the curve C
    /// These methods use more precise algorithms for building bnd box
    /// then methods Add(...)
    /// </summary>
    static void AddOptimal(Macad::Occt::Adaptor3d_Curve^ C, double Tol, Macad::Occt::Bnd_Box^ B);
    static void AddOptimal(Macad::Occt::Adaptor3d_Curve^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds to the bounding box B the curve C
    /// using numerical minimization algorithms
    /// This method is used in AddOptimal for not analytical curves.
    /// if Tol < Precision::Confusion(), Precision:;Confusion is used as computation tolerance
    /// </summary>
    static void AddGenCurv(Macad::Occt::Adaptor3d_Curve^ C, double UMin, double UMax, double Tol, Macad::Occt::Bnd_Box^ B);
}; // class BndLib_Add3dCurve

//---------------------------------------------------------------------
//  Class  BndLib_AddSurface
//---------------------------------------------------------------------
/// <summary>
/// computes the box from a surface
/// Functions to add a surface to a bounding box.
/// The surface is defined from a Geom surface.
/// </summary>
public ref class BndLib_AddSurface sealed
    : public Macad::Occt::BaseClass<::BndLib_AddSurface>
{

#ifdef Include_BndLib_AddSurface_h
public:
    Include_BndLib_AddSurface_h
#endif

public:
    BndLib_AddSurface(::BndLib_AddSurface* nativeInstance)
        : Macad::Occt::BaseClass<::BndLib_AddSurface>( nativeInstance, true )
    {}

    BndLib_AddSurface(::BndLib_AddSurface& nativeInstance)
        : Macad::Occt::BaseClass<::BndLib_AddSurface>( &nativeInstance, false )
    {}

    property ::BndLib_AddSurface* NativeInstance
    {
        ::BndLib_AddSurface* get()
        {
            return static_cast<::BndLib_AddSurface*>(_NativeInstance);
        }
    }

public:
    BndLib_AddSurface();
    /// <summary>
    /// Adds to the bounding box B the surface S
    /// B is then enlarged by the tolerance value Tol.
    /// Note: depending on the type of curve, one of the following
    /// representations of the surface S is used to include it in the bounding box B:
    /// -   an exact representation if S is built from a plane, a
    /// cylinder, a cone, a sphere or a torus,
    /// -   the poles of the surface if S is built from a Bezier
    /// surface or a BSpline surface,
    /// -   the points of an approximation of the surface S in
    /// cases other than offset surfaces;
    /// -   in the case of an offset surface, the basis surface is first
    /// included according to the previous rules; then the
    /// bounding box is enlarged by the offset value.
    /// Warning
    /// Do not use these functions to add a non-finite surface to
    /// the bounding box B.
    /// If UMin, UMax, VMin or VMax is an infinite value B will become WholeSpace.
    /// S is an adapted surface, that is, an object which is an interface between:
    /// -   the services provided by a surface from the package Geom
    /// -   and those required of the surface by the computation algorithm.
    /// The adapted surface is created in the following way:
    /// Handle(Geom_Surface) mysurface = ... ;
    /// GeomAdaptor_Surface S(mysurface);
    /// The bounding box B is then enlarged by adding this surface:
    /// Bnd_Box B;
    /// // ...
    /// Standard_Real Tol = ... ;
    /// AddSurface::Add ( S, Tol, B );
    /// </summary>
    static void Add(Macad::Occt::Adaptor3d_Surface^ S, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds to the bounding box B the surface S
    /// the patch of the surface S limited in the u parametric
    /// direction by the two parameter values UMin, UMax, and
    /// in the v parametric direction by the two parameter
    /// values VMin, VMax.
    /// Note: depending on the type of curve, one of the following
    /// representations of the surface S is used to include it in the bounding box B:
    /// -   an exact representation if S is built from a plane, a
    /// cylinder, a cone, a sphere or a torus,
    /// -   the poles of the surface if S is built from a Bezier
    /// surface or a BSpline surface,
    /// -   the points of an approximation of the surface S in
    /// cases other than offset surfaces;
    /// -   in the case of an offset surface, the basis surface is first
    /// included according to the previous rules; then the
    /// bounding box is enlarged by the offset value.
    /// Warning
    /// Do not use these functions to add a non-finite surface to
    /// the bounding box B.
    /// If UMin, UMax, VMin or VMax is an infinite value B will become WholeSpace.
    /// S is an adapted surface, that is, an object which is an interface between:
    /// -   the services provided by a surface from the package Geom
    /// -   and those required of the surface by the computation algorithm.
    /// The adapted surface is created in the following way:
    /// Handle(Geom_Surface) mysurface = ... ;
    /// GeomAdaptor_Surface S(mysurface);
    /// The bounding box B is then enlarged by adding this surface:
    /// Bnd_Box B;
    /// // ...
    /// Standard_Real Tol = ... ;
    /// AddSurface::Add ( S, Tol, B );
    /// </summary>
    static void Add(Macad::Occt::Adaptor3d_Surface^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds the surface S to the bounding box B.
    /// This algorithm builds precise bounding box
    /// </summary>
    static void AddOptimal(Macad::Occt::Adaptor3d_Surface^ S, double Tol, Macad::Occt::Bnd_Box^ B);
    static void AddOptimal(Macad::Occt::Adaptor3d_Surface^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
    /// <summary>
    /// Adds to the bounding box B the surface S
    /// using numerical minimization algorithms
    /// This method is used in AddOptimal for not analytical surfaces and torus.
    /// if Tol < Precision::Confusion(), Precision::Confusion is used as computation tolerance
    /// </summary>
    static void AddGenSurf(Macad::Occt::Adaptor3d_Surface^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
}; // class BndLib_AddSurface

}; // namespace Occt
}; // namespace Macad
