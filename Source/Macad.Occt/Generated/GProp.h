// Generated wrapper code for package GProp

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  GProp_EquaType
//---------------------------------------------------------------------
public enum class GProp_EquaType
{
    Plane = 0,
    Line = 1,
    Point = 2,
    Space = 3,
    None = 4
}; // enum  class GProp_EquaType

//---------------------------------------------------------------------
//  Enum  GProp_ValueType
//---------------------------------------------------------------------
/// <summary>
/// Algorithms:
/// </summary>
public enum class GProp_ValueType
{
    Mass = 0,
    CenterMassX = 1,
    CenterMassY = 2,
    CenterMassZ = 3,
    InertiaXX = 4,
    InertiaYY = 5,
    InertiaZZ = 6,
    InertiaXY = 7,
    InertiaXZ = 8,
    InertiaYZ = 9,
    Unknown = 10
}; // enum  class GProp_ValueType

//---------------------------------------------------------------------
//  Class  GProp
//---------------------------------------------------------------------
/// <summary>
/// This package defines algorithms to compute the global properties
/// of a set of points, a curve, a surface, a solid (non infinite
/// region of space delimited with geometric entities), a compound
/// geometric system (heterogeneous composition of the previous
/// entities).
/// 
/// Global properties are :
/// . length, area, volume,
/// . centre of mass,
/// . axis of inertia,
/// . moments of inertia,
/// . radius of gyration.
/// 
/// It provides  also a class to  compile the average point or
/// line of a set of points.
/// </summary>
public ref class GProp sealed
    : public Macad::Occt::BaseClass<::GProp>
{

#ifdef Include_GProp_h
public:
    Include_GProp_h
#endif

public:
    GProp(::GProp* nativeInstance)
        : Macad::Occt::BaseClass<::GProp>( nativeInstance, true )
    {}

    GProp(::GProp& nativeInstance)
        : Macad::Occt::BaseClass<::GProp>( &nativeInstance, false )
    {}

    property ::GProp* NativeInstance
    {
        ::GProp* get()
        {
            return static_cast<::GProp*>(_NativeInstance);
        }
    }

public:
    GProp();
    /// <summary>
    /// methods of package
    /// Computes the matrix Operator, referred to as the
    /// "Huyghens Operator" of a geometric system at the
    /// point Q of the space, using the following data :
    /// - Mass, i.e. the mass of the system,
    /// - G, the center of mass of the system.
    /// The "Huyghens Operator" is used to compute
    /// Inertia/Q, the matrix of inertia of the system at
    /// the point Q using Huyghens' theorem :
    /// Inertia/Q = Inertia/G + HOperator (Q, G, Mass)
    /// where Inertia/G is the matrix of inertia of the
    /// system relative to its center of mass as returned by
    /// the function MatrixOfInertia on any GProp_GProps object.
    /// </summary>
    static void HOperator(Macad::Occt::Pnt G, Macad::Occt::Pnt Q, double Mass, Macad::Occt::Mat% Operator);
}; // class GProp

//---------------------------------------------------------------------
//  Class  GProp_PrincipalProps
//---------------------------------------------------------------------
/// <summary>
/// A framework to present the principal properties of
/// inertia of a system of which global properties are
/// computed by a GProp_GProps object.
/// There is always a set of axes for which the
/// products of inertia of a geometric system are equal
/// to 0; i.e. the matrix of inertia of the system is
/// diagonal. These axes are the principal axes of
/// inertia. Their origin is coincident with the center of
/// mass of the system. The associated moments are
/// called the principal moments of inertia.
/// This sort of presentation object is created, filled and
/// returned by the function PrincipalProperties for
/// any GProp_GProps object, and can be queried to access the result.
/// Note: The system whose principal properties of
/// inertia are returned by this framework is referred to
/// as the current system. The current system,
/// however, is retained neither by this presentation
/// framework nor by the GProp_GProps object which activates it.
/// </summary>
public ref class GProp_PrincipalProps sealed
    : public Macad::Occt::BaseClass<::GProp_PrincipalProps>
{

#ifdef Include_GProp_PrincipalProps_h
public:
    Include_GProp_PrincipalProps_h
#endif

public:
    GProp_PrincipalProps(::GProp_PrincipalProps* nativeInstance)
        : Macad::Occt::BaseClass<::GProp_PrincipalProps>( nativeInstance, true )
    {}

    GProp_PrincipalProps(::GProp_PrincipalProps& nativeInstance)
        : Macad::Occt::BaseClass<::GProp_PrincipalProps>( &nativeInstance, false )
    {}

    property ::GProp_PrincipalProps* NativeInstance
    {
        ::GProp_PrincipalProps* get()
        {
            return static_cast<::GProp_PrincipalProps*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// creates an undefined PrincipalProps.
    /// </summary>
    GProp_PrincipalProps();
    /// <summary>
    /// returns true if the geometric system has an axis of symmetry.
    /// For  comparing  moments  relative  tolerance  1.e-10  is  used.
    /// Usually  it  is  enough  for  objects,  restricted  by  faces  with
    /// analytical  geometry.
    /// </summary>
    bool HasSymmetryAxis();
    /// <summary>
    /// returns true if the geometric system has an axis of symmetry.
    /// aTol  is  relative  tolerance for  checking  equality  of  moments
    /// If  aTol  ==  0,  relative  tolerance  is  ~  1.e-16  (Epsilon(I))
    /// </summary>
    bool HasSymmetryAxis(double aTol);
    /// <summary>
    /// returns true if the geometric system has a point of symmetry.
    /// For  comparing  moments  relative  tolerance  1.e-10  is  used.
    /// Usually  it  is  enough  for  objects,  restricted  by  faces  with
    /// analytical  geometry.
    /// </summary>
    bool HasSymmetryPoint();
    /// <summary>
    /// returns true if the geometric system has a point of symmetry.
    /// aTol  is  relative  tolerance for  checking  equality  of  moments
    /// If  aTol  ==  0,  relative  tolerance  is  ~  1.e-16  (Epsilon(I))
    /// </summary>
    bool HasSymmetryPoint(double aTol);
    /// <summary>
    /// Ixx, Iyy and Izz return the principal moments of inertia
    /// in the current system.
    /// Notes :
    /// - If the current system has an axis of symmetry, two
    /// of the three values Ixx, Iyy and Izz are equal. They
    /// indicate which eigen vectors define an infinity of
    /// axes of principal inertia.
    /// - If the current system has a center of symmetry, Ixx,
    /// Iyy and Izz are equal.
    /// </summary>
    void Moments(double% Ixx, double% Iyy, double% Izz);
    /// <summary>
    /// returns the first axis of inertia.
    /// 
    /// if the system has a point of symmetry there is an infinity of
    /// solutions. It is not possible to defines the three axis of
    /// inertia.
    /// </summary>
    Macad::Occt::Vec FirstAxisOfInertia();
    /// <summary>
    /// returns the second axis of inertia.
    /// 
    /// if the system has a point of symmetry or an axis of symmetry the
    /// second and the third axis of symmetry are undefined.
    /// </summary>
    Macad::Occt::Vec SecondAxisOfInertia();
    /// <summary>
    /// returns the third axis of inertia.
    /// This and the above functions return the first, second or third eigen vector of the
    /// matrix of inertia of the current system.
    /// The first, second and third principal axis of inertia
    /// pass through the center of mass of the current
    /// system. They are respectively parallel to these three eigen vectors.
    /// Note that:
    /// - If the current system has an axis of symmetry, any
    /// axis is an axis of principal inertia if it passes
    /// through the center of mass of the system, and runs
    /// parallel to a linear combination of the two eigen
    /// vectors of the matrix of inertia, corresponding to the
    /// two eigen values which are equal. If the current
    /// system has a center of symmetry, any axis passing
    /// through the center of mass of the system is an axis
    /// of principal inertia. Use the functions
    /// HasSymmetryAxis and HasSymmetryPoint to
    /// check these particular cases, where the returned
    /// eigen vectors define an infinity of principal axis of inertia.
    /// - The Moments function can be used to know which
    /// of the three eigen vectors corresponds to the two
    /// eigen values which are equal.
    /// 
    /// if the system has a point of symmetry or an axis of symmetry the
    /// second and the third axis of symmetry are undefined.
    /// </summary>
    Macad::Occt::Vec ThirdAxisOfInertia();
    /// <summary>
    /// Returns the principal radii of gyration  Rxx, Ryy
    /// and Rzz are the radii of gyration of the current
    /// system about its three principal axes of inertia.
    /// Note that:
    /// - If the current system has an axis of symmetry,
    /// two of the three values Rxx, Ryy and Rzz are equal.
    /// - If the current system has a center of symmetry,
    /// Rxx, Ryy and Rzz are equal.
    /// </summary>
    void RadiusOfGyration(double% Rxx, double% Ryy, double% Rzz);
}; // class GProp_PrincipalProps

//---------------------------------------------------------------------
//  Class  GProp_GProps
//---------------------------------------------------------------------
/// <summary>
/// Implements a general mechanism to compute the global properties of
/// a "compound geometric system" in 3d space    by composition of the
/// global properties of "elementary geometric entities"       such as
/// (curve, surface, solid, set of points).  It is possible to compose
/// the properties of several "compound geometric systems" too.
/// 
/// To computes the global properties of a compound geometric
/// system you should :
/// . declare the GProps using a constructor which initializes the
/// GProps and defines the location point used to compute the inertia
/// . compose the global properties of your geometric components with
/// the properties of your system using the method Add.
/// 
/// To compute the global properties of the geometric components of
/// the system you should  use the services of the following classes :
/// - class PGProps for a set of points,
/// - class CGProps for a curve,
/// - class SGProps for a surface,
/// - class VGProps for a "solid".
/// The classes CGProps, SGProps, VGProps are generic classes and
/// must be instantiated for your application.
/// 
/// The global properties computed are :
/// - the dimension (length, area or volume)
/// - the mass,
/// - the centre of mass,
/// - the moments of inertia (static moments and quadratic moments),
/// - the moment about an axis,
/// - the radius of gyration about an axis,
/// - the principal properties of inertia  :
/// (sea also class PrincipalProps)
/// . the principal moments,
/// . the principal axis of inertia,
/// . the principal radius of gyration,
/// 
/// Example of utilisation in a simplified C++ implementation :
/// 
/// //declares the GProps, the point (0.0, 0.0, 0.0) of the
/// //absolute cartesian coordinate system is used as
/// //default reference point to compute the centre of mass
/// GProp_GProps System ();
/// 
/// //computes the inertia of a 3d curve
/// Your_CGProps Component1 (curve, ....);
/// 
/// //computes the inertia of surfaces
/// Your_SGprops Component2 (surface1, ....);
/// Your_SGprops Component3 (surface2,....);
/// 
/// //composes the global properties of components 1, 2, 3
/// //a density can be associated with the components, the
/// //density can be defaulted to 1.
/// Real Density1 = 2.0;
/// Real Density2 = 3.0;
/// System.Add (Component1, Density1);
/// System.Add (Component2, Density2);
/// System.Add (Component3);
/// 
/// //returns the centre of mass of the system in the
/// //absolute cartesian coordinate system
/// gp_Pnt G = System.CentreOfMass ();
/// 
/// //computes the principales inertia of the system
/// GProp_PrincipalProps Pp  = System.PrincipalProperties();
/// 
/// //returns the principal moments and radius of gyration
/// Real Ixx, Iyy, Izz, Rxx, Ryy, Rzz;
/// Pp.Moments (Ixx, Iyy, Izz);
/// Pp.RadiusOfGyration (Ixx, Iyy, Izz);
/// </summary>
public ref class GProp_GProps
    : public Macad::Occt::BaseClass<::GProp_GProps>
{

#ifdef Include_GProp_GProps_h
public:
    Include_GProp_GProps_h
#endif

protected:
    GProp_GProps(InitMode init)
        : Macad::Occt::BaseClass<::GProp_GProps>( init )
    {}

public:
    GProp_GProps(::GProp_GProps* nativeInstance)
        : Macad::Occt::BaseClass<::GProp_GProps>( nativeInstance, true )
    {}

    GProp_GProps(::GProp_GProps& nativeInstance)
        : Macad::Occt::BaseClass<::GProp_GProps>( &nativeInstance, false )
    {}

    property ::GProp_GProps* NativeInstance
    {
        ::GProp_GProps* get()
        {
            return static_cast<::GProp_GProps*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The origin (0, 0, 0) of the absolute cartesian coordinate system
    /// is used to compute the global properties.
    /// </summary>
    GProp_GProps();
    /// <summary>
    /// The point SystemLocation is used to compute the global properties
    /// of the system. For more accuracy it is better to define this
    /// point closed to the location of the system. For example it could
    /// be a point around the centre of mass of the system.
    /// This point is referred to as the reference point for
    /// this framework. For greater accuracy it is better for
    /// the reference point to be close to the location of the
    /// system. It can, for example, be a point near the
    /// center of mass of the system.
    /// At initialization, the framework is empty; i.e. it
    /// retains no dimensional information such as mass, or
    /// inertia. However, it is now able to bring together
    /// global properties of various other systems, whose
    /// global properties have already been computed
    /// using another framework. To do this, use the
    /// function Add to define the components of the
    /// system. Use it once per component of the system,
    /// and then use the interrogation functions available to
    /// access the computed values.
    /// </summary>
    GProp_GProps(Macad::Occt::Pnt SystemLocation);
    /// <summary>
    /// Computes the principal properties of inertia of the current system.
    /// There is always a set of axes for which the products
    /// of inertia of a geometric system are equal to 0; i.e. the
    /// matrix of inertia of the system is diagonal. These axes
    /// are the principal axes of inertia. Their origin is
    /// coincident with the center of mass of the system. The
    /// associated moments are called the principal moments of inertia.
    /// This function computes the eigen values and the
    /// eigen vectors of the matrix of inertia of the system.
    /// Results are stored by using a presentation framework
    /// of principal properties of inertia
    /// (GProp_PrincipalProps object) which may be
    /// queried to access the value sought.
    /// </summary>
    Macad::Occt::GProp_PrincipalProps^ PrincipalProperties();
    /// <summary>
    /// Either
    /// - initializes the global properties retained by this
    /// framework from those retained by the framework Item, or
    /// - brings together the global properties still retained by
    /// this framework with those retained by the framework Item.
    /// The value Density, which is 1.0 by default, is used as
    /// the density of the system analysed by Item.
    /// Sometimes the density will have already been given at
    /// the time of construction of the framework Item. This
    /// may be the case for example, if Item is a
    /// GProp_PGProps framework built to compute the
    /// global properties of a set of points ; or another
    /// GProp_GProps object which already retains
    /// composite global properties. In these cases the real
    /// density was perhaps already taken into account at the
    /// time of construction of Item. Note that this is not
    /// checked: if the density of parts of the system is taken
    /// into account two or more times, results of the
    /// computation will be false.
    /// Notes :
    /// - The point relative to which the inertia of Item is
    /// computed (i.e. the reference point of Item) may be
    /// different from the reference point in this
    /// framework. Huygens' theorem is applied
    /// automatically to transfer inertia values to the
    /// reference point in this framework.
    /// - The function Add is used once per component of
    /// the system. After that, you use the interrogation
    /// functions available to access values computed for the system.
    /// - The system whose global properties are already
    /// brought together by this framework is referred to
    /// as the current system. However, the current system
    /// is not retained by this framework, which maintains
    /// only its global properties.
    /// Exceptions
    /// Standard_DomainError if Density is less than or
    /// equal to gp::Resolution().
    /// </summary>
    void Add(Macad::Occt::GProp_GProps^ Item, double Density);
    /// <summary>
    /// Either
    /// - initializes the global properties retained by this
    /// framework from those retained by the framework Item, or
    /// - brings together the global properties still retained by
    /// this framework with those retained by the framework Item.
    /// The value Density, which is 1.0 by default, is used as
    /// the density of the system analysed by Item.
    /// Sometimes the density will have already been given at
    /// the time of construction of the framework Item. This
    /// may be the case for example, if Item is a
    /// GProp_PGProps framework built to compute the
    /// global properties of a set of points ; or another
    /// GProp_GProps object which already retains
    /// composite global properties. In these cases the real
    /// density was perhaps already taken into account at the
    /// time of construction of Item. Note that this is not
    /// checked: if the density of parts of the system is taken
    /// into account two or more times, results of the
    /// computation will be false.
    /// Notes :
    /// - The point relative to which the inertia of Item is
    /// computed (i.e. the reference point of Item) may be
    /// different from the reference point in this
    /// framework. Huygens' theorem is applied
    /// automatically to transfer inertia values to the
    /// reference point in this framework.
    /// - The function Add is used once per component of
    /// the system. After that, you use the interrogation
    /// functions available to access values computed for the system.
    /// - The system whose global properties are already
    /// brought together by this framework is referred to
    /// as the current system. However, the current system
    /// is not retained by this framework, which maintains
    /// only its global properties.
    /// Exceptions
    /// Standard_DomainError if Density is less than or
    /// equal to gp::Resolution().
    /// </summary>
    void Add(Macad::Occt::GProp_GProps^ Item);
    /// <summary>
    /// Returns the mass of the current system.
    /// If no density is attached to the components of the
    /// current system the returned value corresponds to :
    /// - the total length of the edges of the current
    /// system if this framework retains only linear
    /// properties, as is the case for example, when
    /// using only the LinearProperties function to
    /// combine properties of lines from shapes, or
    /// - the total area of the faces of the current system if
    /// this framework retains only surface properties,
    /// as is the case for example, when using only the
    /// SurfaceProperties function to combine
    /// properties of surfaces from shapes, or
    /// - the total volume of the solids of the current
    /// system if this framework retains only volume
    /// properties, as is the case for example, when
    /// using only the VolumeProperties function to
    /// combine properties of volumes from solids.
    /// Warning
    /// A length, an area, or a volume is computed in the
    /// current data unit system. The mass of a single
    /// object is obtained by multiplying its length, its area
    /// or its volume by the given density. You must be
    /// consistent with respect to the units used.
    /// </summary>
    double Mass();
    /// <summary>
    /// Returns the center of mass of the current system. If
    /// the gravitational field is uniform, it is the center of gravity.
    /// The coordinates returned for the center of mass are
    /// expressed in the absolute Cartesian coordinate system.
    /// </summary>
    Macad::Occt::Pnt CentreOfMass();
    /// <summary>
    /// returns the matrix of inertia. It is a symmetrical matrix.
    /// The coefficients of the matrix are the quadratic moments of
    /// inertia.
    /// 
    /// | Ixx  Ixy  Ixz |
    /// matrix =    | Ixy  Iyy  Iyz |
    /// | Ixz  Iyz  Izz |
    /// 
    /// The moments of inertia are denoted by Ixx, Iyy, Izz.
    /// The products of inertia are denoted by Ixy, Ixz, Iyz.
    /// The matrix of inertia is returned in the central coordinate
    /// system (G, Gx, Gy, Gz) where G is the centre of mass of the
    /// system and Gx, Gy, Gz the directions parallel to the X(1,0,0)
    /// Y(0,1,0) Z(0,0,1) directions of the absolute cartesian
    /// coordinate system. It is possible to compute the matrix of
    /// inertia at another location point using the Huyghens theorem
    /// (you can use the method of package GProp : HOperator).
    /// </summary>
    Macad::Occt::Mat MatrixOfInertia();
    /// <summary>
    /// Returns Ix, Iy, Iz, the static moments of inertia of the
    /// current system; i.e. the moments of inertia about the
    /// three axes of the Cartesian coordinate system.
    /// </summary>
    void StaticMoments(double% Ix, double% Iy, double% Iz);
    /// <summary>
    /// computes the moment of inertia of the material system about the
    /// axis A.
    /// </summary>
    double MomentOfInertia(Macad::Occt::Ax1 A);
    /// <summary>
    /// Returns the radius of gyration of the current system about the axis A.
    /// </summary>
    double RadiusOfGyration(Macad::Occt::Ax1 A);
}; // class GProp_GProps

//---------------------------------------------------------------------
//  Class  GProp_CelGProps
//---------------------------------------------------------------------
/// <summary>
/// Computes the  global properties of bounded curves
/// in 3D space.
/// It can be an elementary curve from package gp such as
/// Lin, Circ, Elips, Parab .
/// </summary>
public ref class GProp_CelGProps sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_GProp_CelGProps_h
public:
    Include_GProp_CelGProps_h
#endif

public:
    GProp_CelGProps(::GProp_CelGProps* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    GProp_CelGProps(::GProp_CelGProps& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::GProp_CelGProps* NativeInstance
    {
        ::GProp_CelGProps* get()
        {
            return static_cast<::GProp_CelGProps*>(_NativeInstance);
        }
    }

public:
    GProp_CelGProps();
    GProp_CelGProps(Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt CLocation);
    GProp_CelGProps(Macad::Occt::gp_Circ^ C, double U1, double U2, Macad::Occt::Pnt CLocation);
    GProp_CelGProps(Macad::Occt::gp_Lin^ C, double U1, double U2, Macad::Occt::Pnt CLocation);
    void SetLocation(Macad::Occt::Pnt CLocation);
    void Perform(Macad::Occt::gp_Circ^ C, double U1, double U2);
    void Perform(Macad::Occt::gp_Lin^ C, double U1, double U2);
}; // class GProp_CelGProps

//---------------------------------------------------------------------
//  Class  GProp_PEquation
//---------------------------------------------------------------------
/// <summary>
/// A framework to analyze a collection - or cloud
/// - of points and to verify if they are coincident,
/// collinear or coplanar within a given precision. If
/// so, it also computes the mean point, the mean
/// line or the mean plane of the points. If not, it
/// computes the minimal box which includes all the points.
/// </summary>
public ref class GProp_PEquation sealed
    : public Macad::Occt::BaseClass<::GProp_PEquation>
{

#ifdef Include_GProp_PEquation_h
public:
    Include_GProp_PEquation_h
#endif

public:
    GProp_PEquation(::GProp_PEquation* nativeInstance)
        : Macad::Occt::BaseClass<::GProp_PEquation>( nativeInstance, true )
    {}

    GProp_PEquation(::GProp_PEquation& nativeInstance)
        : Macad::Occt::BaseClass<::GProp_PEquation>( &nativeInstance, false )
    {}

    property ::GProp_PEquation* NativeInstance
    {
        ::GProp_PEquation* get()
        {
            return static_cast<::GProp_PEquation*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a framework to analyze the
    /// collection of points Pnts and computes:
    /// -   the mean point if the points in question are
    /// considered to be coincident within the precision Tol, or
    /// -   the mean line if they are considered to be
    /// collinear within the precision Tol, or
    /// -   the mean plane if they are considered to be
    /// coplanar within the precision Tol, or
    /// -   the minimal box which contains all the points. Use :
    /// -   the functions IsPoint, IsLinear, IsPlanar
    /// and IsSpace to find the result of the analysis, and
    /// -   the function Point, Line, Plane or Box to
    /// access the computed result.
    /// </summary>
    GProp_PEquation(Macad::Occt::TColgp_Array1OfPnt^ Pnts, double Tol);
    /// <summary>
    /// Returns true if, according to the given
    /// tolerance, the points analyzed by this framework are  coplanar.
    /// Use the function  Plane  to access the computed result.
    /// </summary>
    bool IsPlanar();
    /// <summary>
    /// Returns true if, according to the given
    /// tolerance, the points analyzed by this framework are  colinear.
    /// Use the function  Line  to access the computed result.
    /// </summary>
    bool IsLinear();
    /// <summary>
    /// Returns true if, according to the given
    /// tolerance, the points analyzed by this framework are  coincident.
    /// Use the function  Point  to access the computed result.
    /// </summary>
    bool IsPoint();
    /// <summary>
    /// Returns true if, according to the given
    /// tolerance value, the points analyzed by this
    /// framework are neither coincident, nor collinear, nor coplanar.
    /// Use the function Box to query the smallest box
    /// that includes the collection of points.
    /// </summary>
    bool IsSpace();
    /// <summary>
    /// Returns the mean plane passing near all the
    /// points analyzed by this framework if, according
    /// to the given precision, the points are considered to be coplanar.
    /// Exceptions
    /// Standard_NoSuchObject if, according to the
    /// given precision value, the points analyzed by
    /// this framework are considered to be:
    /// -   coincident, or
    /// -   collinear, or
    /// -   not coplanar.
    /// </summary>
    Macad::Occt::Pln Plane();
    /// <summary>
    /// Returns the mean line passing near all the
    /// points analyzed by this framework if, according
    /// to the given precision value, the points are considered to be collinear.
    /// Exceptions
    /// Standard_NoSuchObject if, according to the
    /// given precision, the points analyzed by this
    /// framework are considered to be:
    /// -   coincident, or
    /// -   not collinear.
    /// </summary>
    Macad::Occt::gp_Lin^ Line();
    /// <summary>
    /// Returns the mean point of all the points
    /// analyzed by this framework if, according to the
    /// given precision, the points are considered to be coincident.
    /// Exceptions
    /// Standard_NoSuchObject if, according to the
    /// given precision, the points analyzed by this
    /// framework are not considered to be coincident.
    /// </summary>
    Macad::Occt::Pnt Point();
    /// <summary>
    /// Returns the definition of the smallest box which
    /// contains all the points analyzed by this
    /// framework if, according to the given precision
    /// value, the points are considered to be neither
    /// coincident, nor collinear and nor coplanar.
    /// This box is centered on the barycenter P of the
    /// collection of points. Its sides are parallel to the
    /// three vectors V1, V2 and V3, the length of
    /// which is the length of the box in the corresponding direction.
    /// Note: Vectors V1, V2 and V3 are parallel to
    /// the three axes of principal inertia of the system
    /// composed of the collection of points where each point is of equal mass.
    /// Exceptions
    /// Standard_NoSuchObject if, according to the given precision,
    /// the points analyzed by this framework are considered to be coincident, collinear or coplanar.
    /// </summary>
    void Box(Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
}; // class GProp_PEquation

//---------------------------------------------------------------------
//  Class  GProp_PGProps
//---------------------------------------------------------------------
/// <summary>
/// A framework for computing the global properties of a
/// set of points.
/// A point mass is attached to each point. The global
/// mass of the system is the sum of each individual
/// mass. By default, the point mass is equal to 1 and the
/// mass of a system composed of N points is equal to N.
/// Warning
/// A framework of this sort provides functions to handle
/// sets of points easily. But, like any GProp_GProps
/// object, by using the Add function, it can theoretically
/// bring together the computed global properties and
/// those of a system more complex than a set of points .
/// The mass of each point and the density of each
/// component of the composed system must be
/// coherent. Note that this coherence cannot be checked.
/// Nonetheless, you are advised to restrict your use of a
/// GProp_PGProps object to a set of points and to
/// create a GProp_GProps object in order to bring
/// together global properties of different systems.
/// </summary>
public ref class GProp_PGProps sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_GProp_PGProps_h
public:
    Include_GProp_PGProps_h
#endif

public:
    GProp_PGProps(::GProp_PGProps* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    GProp_PGProps(::GProp_PGProps& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::GProp_PGProps* NativeInstance
    {
        ::GProp_PGProps* get()
        {
            return static_cast<::GProp_PGProps*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initializes a framework to compute global properties
    /// on a set of points.
    /// The point relative to which the inertia of the system is
    /// computed will be the origin (0, 0, 0) of the
    /// absolute Cartesian coordinate system.
    /// At initialization, the framework is empty, i.e. it retains
    /// no dimensional information such as mass and inertia.
    /// It is, however, now able to keep global properties of a
    /// set of points while new points are added using the
    /// AddPoint function.
    /// The set of points whose global properties are brought
    /// together by this framework will then be referred to as
    /// the current system. The current system is, however,
    /// not kept by this framework, which only keeps that
    /// system's global properties. Note that the current
    /// system may be more complex than a set of points.
    /// </summary>
    GProp_PGProps();
    /// <summary>
    /// computes the global properties of the system of points Pnts.
    /// The density of the points are defaulted to all being 1
    /// </summary>
    GProp_PGProps(Macad::Occt::TColgp_Array1OfPnt^ Pnts);
    /// <summary>
    /// computes the global properties of the system of points Pnts.
    /// The density of the points are defaulted to all being 1
    /// </summary>
    GProp_PGProps(Macad::Occt::TColgp_Array2OfPnt^ Pnts);
    /// <summary>
    /// computes the global properties of the system of points Pnts.
    /// A density is associated with each point.
    /// 
    /// raises if a density is lower or equal to Resolution from package
    /// gp.
    /// 
    /// raises if the length of Pnts and the length of Density
    /// is not the same.
    /// </summary>
    GProp_PGProps(Macad::Occt::TColgp_Array1OfPnt^ Pnts, Macad::Occt::TColStd_Array1OfReal^ Density);
    /// <summary>
    /// computes the global properties of the system of points Pnts.
    /// A density is associated with each point.
    /// 
    /// Raised if a density is lower or equal to Resolution from package
    /// gp.
    /// 
    /// Raised if the length of Pnts and the length of Density
    /// is not the same.
    /// </summary>
    GProp_PGProps(Macad::Occt::TColgp_Array2OfPnt^ Pnts, Macad::Occt::TColStd_Array2OfReal^ Density);
    /// <summary>
    /// Brings together the global properties already
    /// retained by this framework with those induced by
    /// the point Pnt. Pnt may be the first point of the current system.
    /// A point mass is attached to the point Pnt, it is either
    /// equal to 1. or to Density.
    /// </summary>
    void AddPoint(Macad::Occt::Pnt P);
    /// <summary>
    /// Adds a new point P with its density in the system of points
    /// Exceptions
    /// Standard_DomainError if the mass value Density
    /// is less than gp::Resolution().
    /// </summary>
    void AddPoint(Macad::Occt::Pnt P, double Density);
    /// <summary>
    /// Computes the barycentre of a set of points. The density of the
    /// points is defaulted to 1.
    /// </summary>
    static Macad::Occt::Pnt Barycentre(Macad::Occt::TColgp_Array1OfPnt^ Pnts);
    /// <summary>
    /// Computes the barycentre of a set of points. The density of the
    /// points is defaulted to 1.
    /// </summary>
    static Macad::Occt::Pnt Barycentre(Macad::Occt::TColgp_Array2OfPnt^ Pnts);
    /// <summary>
    /// Computes the barycentre of a set of points. A density is associated
    /// with each point.
    /// 
    /// raises if a density is lower or equal to Resolution from package
    /// gp.
    /// 
    /// Raised if the length of Pnts and the length of Density
    /// is not the same.
    /// </summary>
    static void Barycentre(Macad::Occt::TColgp_Array1OfPnt^ Pnts, Macad::Occt::TColStd_Array1OfReal^ Density, double% Mass, Macad::Occt::Pnt% G);
    /// <summary>
    /// Computes the barycentre of a set of points. A density is associated
    /// with each point.
    /// 
    /// Raised if a density is lower or equal to Resolution from package
    /// gp.
    /// 
    /// Raised if the length of Pnts and the length of Density
    /// is not the same.
    /// </summary>
    static void Barycentre(Macad::Occt::TColgp_Array2OfPnt^ Pnts, Macad::Occt::TColStd_Array2OfReal^ Density, double% Mass, Macad::Occt::Pnt% G);
}; // class GProp_PGProps

//---------------------------------------------------------------------
//  Class  GProp_SelGProps
//---------------------------------------------------------------------
/// <summary>
/// Computes the global properties of a bounded
/// elementary surface in 3d (surface of the gp package)
/// </summary>
public ref class GProp_SelGProps sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_GProp_SelGProps_h
public:
    Include_GProp_SelGProps_h
#endif

public:
    GProp_SelGProps(::GProp_SelGProps* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    GProp_SelGProps(::GProp_SelGProps& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::GProp_SelGProps* NativeInstance
    {
        ::GProp_SelGProps* get()
        {
            return static_cast<::GProp_SelGProps*>(_NativeInstance);
        }
    }

public:
    GProp_SelGProps();
    GProp_SelGProps(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt SLocation);
    GProp_SelGProps(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt SLocation);
    GProp_SelGProps(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt SLocation);
    GProp_SelGProps(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt SLocation);
    void SetLocation(Macad::Occt::Pnt SLocation);
    void Perform(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2);
    void Perform(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2);
    void Perform(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2);
    void Perform(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2);
}; // class GProp_SelGProps

//---------------------------------------------------------------------
//  Class  GProp_UndefinedAxis
//---------------------------------------------------------------------
public ref class GProp_UndefinedAxis sealed
    : public Macad::Occt::Standard_DomainError
{

#ifdef Include_GProp_UndefinedAxis_h
public:
    Include_GProp_UndefinedAxis_h
#endif

public:
    GProp_UndefinedAxis(::GProp_UndefinedAxis* nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    GProp_UndefinedAxis(::GProp_UndefinedAxis& nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    property ::GProp_UndefinedAxis* NativeInstance
    {
        ::GProp_UndefinedAxis* get()
        {
            return static_cast<::GProp_UndefinedAxis*>(_NativeInstance);
        }
    }

public:
    GProp_UndefinedAxis();
    GProp_UndefinedAxis(System::String^ theMessage);
    GProp_UndefinedAxis(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::GProp_UndefinedAxis^ NewInstance(System::String^ theMessage);
    static Macad::Occt::GProp_UndefinedAxis^ NewInstance();
    static Macad::Occt::GProp_UndefinedAxis^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::GProp_UndefinedAxis^ CreateDowncasted(::GProp_UndefinedAxis* instance);
}; // class GProp_UndefinedAxis

//---------------------------------------------------------------------
//  Class  GProp_VelGProps
//---------------------------------------------------------------------
/// <summary>
/// Computes the global properties and the volume of a geometric solid
/// (3D closed region of space)
/// The solid can be elementary(definition in the gp package)
/// </summary>
public ref class GProp_VelGProps sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_GProp_VelGProps_h
public:
    Include_GProp_VelGProps_h
#endif

public:
    GProp_VelGProps(::GProp_VelGProps* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    GProp_VelGProps(::GProp_VelGProps& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::GProp_VelGProps* NativeInstance
    {
        ::GProp_VelGProps* get()
        {
            return static_cast<::GProp_VelGProps*>(_NativeInstance);
        }
    }

public:
    GProp_VelGProps();
    GProp_VelGProps(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt VLocation);
    GProp_VelGProps(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt VLocation);
    GProp_VelGProps(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt VLocation);
    GProp_VelGProps(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt VLocation);
    void SetLocation(Macad::Occt::Pnt VLocation);
    void Perform(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2);
    void Perform(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2);
    void Perform(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2);
    void Perform(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2);
}; // class GProp_VelGProps

}; // namespace Occt
}; // namespace Macad
