// Generated wrapper code for package gce

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  gce_ErrorType
//---------------------------------------------------------------------
/// <summary>
/// Indicates the outcome of a construction, i.e.
/// whether it is successful or not, as explained below.
/// gce_Done: Construction was successful.
/// gce_ConfusedPoints: Two points are coincident.
/// gce_NegativeRadius: Radius value is negative.
/// gce_ColinearPoints: Three points are collinear.
/// gce_IntersectionError: Intersection cannot be computed.
/// gce_NullAxis: Axis is undefined.
/// gce_NullAngle: Angle value is invalid (usually null).
/// gce_NullRadius: Radius is null.
/// gce_InvertAxis: Axis value is invalid.
/// gce_BadAngle: Angle value is invalid.
/// gce_InvertRadius: Radius value is incorrect
/// (usually with respect to another radius).
/// gce_NullFocusLength: Focal distance is null.
/// gce_NullVector: Vector is null.
/// gce_BadEquation: Coefficients are
/// incorrect (applies to the equation of a geometric object).
/// </summary>
public enum class gce_ErrorType
{
    Done = 0,
    ConfusedPoints = 1,
    NegativeRadius = 2,
    ColinearPoints = 3,
    IntersectionError = 4,
    NullAxis = 5,
    NullAngle = 6,
    NullRadius = 7,
    InvertAxis = 8,
    BadAngle = 9,
    InvertRadius = 10,
    NullFocusLength = 11,
    NullVector = 12,
    BadEquation = 13
}; // enum  class gce_ErrorType

//---------------------------------------------------------------------
//  Class  gce_Root
//---------------------------------------------------------------------
/// <summary>
/// This class implements the common services for
/// all classes of gce which report error.
/// </summary>
public ref class gce_Root
    : public Macad::Occt::BaseClass<::gce_Root>
{

#ifdef Include_gce_Root_h
public:
    Include_gce_Root_h
#endif

protected:
    gce_Root(InitMode init)
        : Macad::Occt::BaseClass<::gce_Root>( init )
    {}

public:
    gce_Root(::gce_Root* nativeInstance)
        : Macad::Occt::BaseClass<::gce_Root>( nativeInstance, true )
    {}

    gce_Root(::gce_Root& nativeInstance)
        : Macad::Occt::BaseClass<::gce_Root>( &nativeInstance, false )
    {}

    property ::gce_Root* NativeInstance
    {
        ::gce_Root* get()
        {
            return static_cast<::gce_Root*>(_NativeInstance);
        }
    }

public:
    gce_Root();
    /// <summary>
    /// Returns true if the construction is successful.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns the status of the construction:
    /// -   gce_Done, if the construction is successful, or
    /// -   another value of the gce_ErrorType enumeration
    /// indicating why the construction failed.
    /// </summary>
    Macad::Occt::gce_ErrorType Status();
}; // class gce_Root

//---------------------------------------------------------------------
//  Class  gce_MakeCirc
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create Circ from gp.
/// 
/// * Create a Circ coaxial to another and passing
/// though a point.
/// * Create a Circ coaxial to another at the distance
/// Dist.
/// * Create a Circ passing through 3 points.
/// * Create a Circ with its center and the normal of its
/// plane and its radius.
/// * Create a Circ with its center and its plane and its
/// radius.
/// * Create a Circ with its axis and radius.
/// * Create a Circ with two points giving its axis and
/// its radius.
/// * Create a Circ with is Ax2 and its Radius.
/// </summary>
public ref class gce_MakeCirc sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeCirc_h
public:
    Include_gce_MakeCirc_h
#endif

public:
    gce_MakeCirc(::gce_MakeCirc* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeCirc(::gce_MakeCirc& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeCirc* NativeInstance
    {
        ::gce_MakeCirc* get()
        {
            return static_cast<::gce_MakeCirc*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// A2 locates the circle and gives its orientation in 3D space.
    /// Warnings :
    /// It is not forbidden to create a circle with Radius = 0.0
    /// The status is "NegativeRadius" if Radius < 0.0
    /// </summary>
    gce_MakeCirc(Macad::Occt::Ax2 A2, double Radius);
    /// <summary>
    /// Makes a Circ from gp <TheCirc> coaxial to another
    /// Circ <Circ> at a distance <Dist>.
    /// If Dist is greater than zero the result is encloses
    /// the circle <Circ>, else the result is enclosed by the
    /// circle <Circ>.
    /// </summary>
    gce_MakeCirc(Macad::Occt::gp_Circ^ Circ, double Dist);
    /// <summary>
    /// Makes a Circ from gp <TheCirc> coaxial to another
    /// Circ <Circ> and passing through a Pnt2d <Point>.
    /// </summary>
    gce_MakeCirc(Macad::Occt::gp_Circ^ Circ, Macad::Occt::Pnt Point);
    /// <summary>
    /// Makes a Circ from gp <TheCirc> passing through 3
    /// Pnt2d <P1>,<P2>,<P3>.
    /// </summary>
    gce_MakeCirc(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
    /// <summary>
    /// Makes a Circ from gp <TheCirc> with its center
    /// <Center> and the normal of its plane <Norm> and
    /// its radius <Radius>.
    /// </summary>
    gce_MakeCirc(Macad::Occt::Pnt Center, Macad::Occt::Dir Norm, double Radius);
    /// <summary>
    /// Makes a Circ from gp <TheCirc> with its center
    /// <Center> and the normal of its plane <Plane> and
    /// its radius <Radius>.
    /// </summary>
    gce_MakeCirc(Macad::Occt::Pnt Center, Macad::Occt::Pln Plane, double Radius);
    /// <summary>
    /// Makes a Circ from gp <TheCirc> with its center
    /// <Center> and a point <Ptaxis> giving the normal
    /// of its plane <Plane> and its radius <Radius>.
    /// </summary>
    gce_MakeCirc(Macad::Occt::Pnt Center, Macad::Occt::Pnt Ptaxis, double Radius);
    /// <summary>
    /// Makes a Circ from gp <TheCirc> with its center
    /// <Center> and its radius <Radius>.
    /// Warning
    /// The MakeCirc class does not prevent the
    /// construction of a circle with a null radius.
    /// If an error occurs (that is, when IsDone returns
    /// false), the Status function returns:
    /// -   gce_Negative Radius if:
    /// -   Radius is less than 0.0, or
    /// -   Dist is less than 0.0 and the absolute value of
    /// Dist is greater than the radius of Circ;
    /// -   gce_IntersectionError if the points P1, P2 and
    /// P3 are collinear, and the three are not coincident;
    /// -   gce_ConfusedPoints if two of the three points
    /// P1, P2 and P3 are coincident; or
    /// -   gce_NullAxis if Center and Ptaxis are coincident.
    /// </summary>
    gce_MakeCirc(Macad::Occt::Ax1 Axis, double Radius);
    /// <summary>
    /// Returns the constructed circle.
    /// Exceptions StdFail_NotDone if no circle is constructed.
    /// </summary>
    Macad::Occt::gp_Circ^ Value();
    Macad::Occt::gp_Circ^ Operator();
}; // class gce_MakeCirc

//---------------------------------------------------------------------
//  Class  gce_MakeCirc2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create Circ2d from gp.
/// 
/// * Create a Circ2d concentric with another and passing
/// though a point.
/// * Create a Circ2d concentric with another at the distance
/// Dist.
/// * Create a Circ2d passing through 3 points.
/// * Create a Circ2d with its center and radius.
/// * Create a Circ2d with its center and a point given
/// the radius.
/// * Create a Circ2d with its axis and its radius.
/// </summary>
public ref class gce_MakeCirc2d sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeCirc2d_h
public:
    Include_gce_MakeCirc2d_h
#endif

public:
    gce_MakeCirc2d(::gce_MakeCirc2d* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeCirc2d(::gce_MakeCirc2d& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeCirc2d* NativeInstance
    {
        ::gce_MakeCirc2d* get()
        {
            return static_cast<::gce_MakeCirc2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The location point of XAxis is the center of the circle.
    /// Warnings :
    /// It is not forbidden to create a circle with Radius = 0.0
    /// If Sense is true the local coordinate system of the solution
    /// is direct and non direct in the other case.
    /// The status is "NegativeRadius" if Radius < 0.0.
    /// </summary>
    gce_MakeCirc2d(Macad::Occt::Ax2d XAxis, double Radius, bool Sense);
    /// <summary>
    /// The location point of XAxis is the center of the circle.
    /// Warnings :
    /// It is not forbidden to create a circle with Radius = 0.0
    /// If Sense is true the local coordinate system of the solution
    /// is direct and non direct in the other case.
    /// The status is "NegativeRadius" if Radius < 0.0.
    /// </summary>
    gce_MakeCirc2d(Macad::Occt::Ax2d XAxis, double Radius);
    /// <summary>
    /// The location point of Axis is the center of the circle.
    /// Warnings :
    /// It is not forbidden to create a circle with Radius = 0.0
    /// </summary>
    gce_MakeCirc2d(Macad::Occt::Ax22d Axis, double Radius);
    /// <summary>
    /// Makes a Circ2d from gp <TheCirc> concentric with another
    /// circ2d <Circ> with a distance <Dist>.
    /// If Dist is greater than zero the result encloses
    /// the circle <Circ>, else the result is enclosed by the
    /// circle <Circ>.
    /// The local coordinate system of the solution is the
    /// same as Circ.
    /// </summary>
    gce_MakeCirc2d(Macad::Occt::gp_Circ2d^ Circ, double Dist);
    /// <summary>
    /// Makes a Circ2d from gp <TheCirc> concentric with another
    /// circ2d <Circ> and passing through a Pnt2d <Point>.
    /// The local coordinate system of the solution is the
    /// same as Circ.
    /// </summary>
    gce_MakeCirc2d(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d Point);
    /// <summary>
    /// Makes a Circ2d from gp <TheCirc> passing through 3
    /// Pnt2d <P1>,<P2>,<P3>.
    /// The local coordinate system of the solution is given
    /// by the three points P1, P2, P3.
    /// </summary>
    gce_MakeCirc2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, Macad::Occt::Pnt2d P3);
    /// <summary>
    /// Makes a Circ2d from gp <TheCirc> with its center
    /// <Center> and its radius <Radius>.
    /// If Sense is true the local coordinate system of
    /// the solution is direct and non direct in the other case.
    /// </summary>
    gce_MakeCirc2d(Macad::Occt::Pnt2d Center, double Radius, bool Sense);
    /// <summary>
    /// Makes a Circ2d from gp <TheCirc> with its center
    /// <Center> and its radius <Radius>.
    /// If Sense is true the local coordinate system of
    /// the solution is direct and non direct in the other case.
    /// </summary>
    gce_MakeCirc2d(Macad::Occt::Pnt2d Center, double Radius);
    /// <summary>
    /// Makes a Circ2d from gp <TheCirc> with its center
    /// <Center> and a point giving the radius.
    /// If Sense is true the local coordinate system of
    /// the solution is direct and non direct in the other case.
    /// </summary>
    gce_MakeCirc2d(Macad::Occt::Pnt2d Center, Macad::Occt::Pnt2d Point, bool Sense);
    /// <summary>
    /// Makes a Circ2d from gp <TheCirc> with its center
    /// <Center> and a point giving the radius.
    /// If Sense is true the local coordinate system of
    /// the solution is direct and non direct in the other case.
    /// </summary>
    gce_MakeCirc2d(Macad::Occt::Pnt2d Center, Macad::Occt::Pnt2d Point);
    /// <summary>
    /// Returns the constructed circle.
    /// Exceptions StdFail_NotDone if no circle is constructed.
    /// </summary>
    Macad::Occt::gp_Circ2d^ Value();
    Macad::Occt::gp_Circ2d^ Operator();
}; // class gce_MakeCirc2d

//---------------------------------------------------------------------
//  Class  gce_MakeCone
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create a Cone from gp.
/// * Create a Cone coaxial to another and passing
/// through a point.
/// * Create a Cone coaxial to another at a distance
/// <Dist>.
/// * Create a Cone by 4 points.
/// * Create a Cone by its axis and 2 points.
/// * Create a Cone by 2 points and 2 radius.
/// * Create a Cone by an Ax2 an angle and the radius of
/// its reference section.
/// </summary>
public ref class gce_MakeCone sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeCone_h
public:
    Include_gce_MakeCone_h
#endif

public:
    gce_MakeCone(::gce_MakeCone* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeCone(::gce_MakeCone& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeCone* NativeInstance
    {
        ::gce_MakeCone* get()
        {
            return static_cast<::gce_MakeCone*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an infinite conical surface. A2 locates the cone
    /// in the space and defines the reference plane of the surface.
    /// Ang is the conical surface semi-angle between 0 and PI/2 radians.
    /// Radius is the radius of the circle in the reference plane of
    /// the cone.
    /// If Radius is lower than 0.0 the status is "
    /// If Ang < Resolution from gp  or Ang >= (PI/2) - Resolution.
    /// </summary>
    gce_MakeCone(Macad::Occt::Ax2 A2, double Ang, double Radius);
    /// <summary>
    /// Makes a Cone from gp <TheCone> coaxial to another
    /// Cone <Cone> and passing through a Pnt <Point>.
    /// </summary>
    gce_MakeCone(Macad::Occt::gp_Cone^ Cone, Macad::Occt::Pnt Point);
    /// <summary>
    /// Makes a Cone from gp <TheCone> coaxial to another
    /// Cone <Cone> at the distance <Dist> which can
    /// be greater or lower than zero.
    /// </summary>
    gce_MakeCone(Macad::Occt::gp_Cone^ Cone, double Dist);
    /// <summary>
    /// Makes a Cone from gp <TheCone> by four points <P1>,
    /// <P2>,<P3> and <P4>.
    /// Its axis is <P1P2> and the radius of its base is
    /// the distance between <P3> and <P1P2>.
    /// The distance between <P4> and <P1P2> is the radius of
    /// the section passing through <P4>.
    /// If <P1> and <P2> are confused or <P3> and <P4> are
    /// confused we have the status "ConfusedPoints"
    /// if <P1>,<P2>,<P3>,<P4> are colinear we have the
    /// status "ColinearPoints"
    /// If <P3P4> is perpendicular to <P1P2> we have the
    /// status "NullAngle".
    /// <P3P4> is colinear to <P1P2> we have the status
    /// "NullAngle".
    /// </summary>
    gce_MakeCone(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4);
    /// <summary>
    /// Makes a Cone by its axis <Axis> and two points.
    /// The distance between <P1> and the axis is the radius
    /// of the section passing through <P1>.
    /// The distance between <P2> and the axis is the radius
    /// of the section passing through <P2>.
    /// If <P1P2> is colinear to <Axis> we have the status
    /// "NullAngle"
    /// If <P3P4> is perpendicular to <Axis> we have the status
    /// "NullAngle"
    /// If <P1> and <P2> are confused we have the status
    /// "ConfusedPoints"
    /// </summary>
    gce_MakeCone(Macad::Occt::Ax1 Axis, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Makes a Cone by its axis <Axis> and two points.
    /// The distance between <P1> and the axis is the radius
    /// of the section passing through <P1>
    /// The distance between <P2> and the axis is the radius
    /// of the section passing through <P2>
    /// If <P1P2> is colinear to <Axis> we have the status
    /// "NullAngle"
    /// If <P3P4> is perpendicular to <Axis> we have the status
    /// "NullAngle"
    /// If <P1> and <P2> are confused we have the status
    /// "ConfusedPoints"
    /// </summary>
    gce_MakeCone(Macad::Occt::gp_Lin^ Axis, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Makes a Cone with two points and two radius.
    /// The axis of the solution is the line passing through
    /// <P1> and <P2>.
    /// <R1> is the radius of the section passing through <P1>
    /// and <R2> the radius of the section passing through <P2>.
    /// If <P1> and <P2> are confused we have the status "NullAxis".
    /// Warning
    /// If an error occurs (that is, when IsDone returns
    /// false), the Status function returns:
    /// -   gce_NegativeRadius if Radius, R1 or R2 is less than 0.0;
    /// -   gce_BadAngle if Ang is less than
    /// gp::Resolution() or greater than Pi/2.- gp::Resolution();
    /// -   gce_ConfusedPoints if P1 and P2 or P3 and P4 are coincident;
    /// -   gce_NullAxis if the points P1 and P2, are coincident (5th syntax only);
    /// -   gce_NullAngle if:
    /// -   the vector joining P1 to P2 is parallel to either
    /// Axis or the line joining P3 to P4, or
    /// -   R1 and R2 are equal, (that is, their difference is
    /// less than gp::Resolution()); or
    /// -   gce_NullRadius if:
    /// -   the vector joining P1 to P2 is perpendicular to the line joining P3 to P4,
    /// -   the vector joining P1 to P2 is perpendicular to Axis, or
    /// -   P1, P2, P3, and P4 are collinear.
    /// </summary>
    gce_MakeCone(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double R1, double R2);
    /// <summary>
    /// Returns the constructed cone.
    /// Exceptions StdFail_NotDone if no cone is constructed.
    /// </summary>
    Macad::Occt::gp_Cone^ Value();
    Macad::Occt::gp_Cone^ Operator();
}; // class gce_MakeCone

//---------------------------------------------------------------------
//  Class  gce_MakeCylinder
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create a Cylinder from gp.
/// * Create a Cylinder coaxial to another and passing
/// through a point.
/// * Create a Cylinder coaxial to another at a distance
/// <Dist>.
/// * Create a Cylinder with 3 points.
/// * Create a Cylinder by its axis and radius.
/// * Create a cylinder by its circular base.
/// </summary>
public ref class gce_MakeCylinder sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeCylinder_h
public:
    Include_gce_MakeCylinder_h
#endif

public:
    gce_MakeCylinder(::gce_MakeCylinder* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeCylinder(::gce_MakeCylinder& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeCylinder* NativeInstance
    {
        ::gce_MakeCylinder* get()
        {
            return static_cast<::gce_MakeCylinder*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// <A2> is the local cartesian coordinate system of <me>.
    /// The status is "NegativeRadius" if R < 0.0
    /// </summary>
    gce_MakeCylinder(Macad::Occt::Ax2 A2, double Radius);
    /// <summary>
    /// Makes a Cylinder from gp <TheCylinder> coaxial to another
    /// Cylinder <Cylinder> and passing through a Pnt <Point>.
    /// </summary>
    gce_MakeCylinder(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::Pnt Point);
    /// <summary>
    /// Makes a Cylinder from gp <TheCylinder> coaxial to another
    /// Cylinder <Cylinder> at the distance <Dist> which can
    /// be greater or lower than zero.
    /// The radius of the result is the absolute value of the
    /// radius of <Cyl> plus <Dist>
    /// </summary>
    gce_MakeCylinder(Macad::Occt::gp_Cylinder^ Cyl, double Dist);
    /// <summary>
    /// Makes a Cylinder from gp <TheCylinder> with 3 points
    /// <P1>,<P2>,<P3>.
    /// Its axis is <P1P2> and its radius is the distance
    /// between <P3> and <P1P2>
    /// </summary>
    gce_MakeCylinder(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
    /// <summary>
    /// Makes a Cylinder by its axis <Axis> and radius <Radius>.
    /// </summary>
    gce_MakeCylinder(Macad::Occt::Ax1 Axis, double Radius);
    /// <summary>
    /// Makes a Cylinder by its circular base.
    /// Warning
    /// If an error occurs (that is, when IsDone returns
    /// false), the Status function returns:
    /// -   gce_NegativeRadius if:
    /// -   Radius is less than 0.0, or
    /// -   Dist is negative and has an absolute value
    /// which is greater than the radius of Cyl; or
    /// -   gce_ConfusedPoints if points P1 and P2 are coincident.
    /// </summary>
    gce_MakeCylinder(Macad::Occt::gp_Circ^ Circ);
    /// <summary>
    /// Returns the constructed cylinder.
    /// Exceptions StdFail_NotDone if no cylinder is constructed.
    /// </summary>
    Macad::Occt::gp_Cylinder^ Value();
    Macad::Occt::gp_Cylinder^ Operator();
}; // class gce_MakeCylinder

//---------------------------------------------------------------------
//  Class  gce_MakeDir
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create a Dir from gp.
/// * Create a Dir parallel to another and passing
/// through a point.
/// * Create a Dir passing through 2 points.
/// * Create a Dir from its axis (Ax1 from gp).
/// * Create a Dir from a point and a direction.
/// </summary>
public ref class gce_MakeDir sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeDir_h
public:
    Include_gce_MakeDir_h
#endif

public:
    gce_MakeDir(::gce_MakeDir* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeDir(::gce_MakeDir& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeDir* NativeInstance
    {
        ::gce_MakeDir* get()
        {
            return static_cast<::gce_MakeDir*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Normalizes the vector V and creates a direction.
    /// Status is "NullVector" if V.Magnitude() <= Resolution.
    /// </summary>
    gce_MakeDir(Macad::Occt::Vec V);
    /// <summary>
    /// Creates a direction from a triplet of coordinates.
    /// Status is "NullVector" if Coord.Modulus() <=
    /// Resolution from gp.
    /// </summary>
    gce_MakeDir(Macad::Occt::XYZ Coord);
    /// <summary>
    /// Creates a direction with its 3 cartesian coordinates.
    /// Status is "NullVector" if Sqrt(Xv*Xv + Yv*Yv + Zv*Zv)
    /// <= Resolution
    /// </summary>
    gce_MakeDir(double Xv, double Yv, double Zv);
    /// <summary>
    /// Make a Dir from gp <TheDir> passing through 2
    /// Pnt <P1>,<P2>.
    /// Status is "ConfusedPoints" if <p1> and <P2> are confused.
    /// Warning
    /// If an error occurs (that is, when IsDone returns
    /// false), the Status function returns:
    /// -   gce_ConfusedPoints if points P1 and P2 are coincident, or
    /// -   gce_NullVector if one of the following is less
    /// than or equal to gp::Resolution():
    /// -   the magnitude of vector V,
    /// -   the modulus of Coord,
    /// -   Sqrt(Xv*Xv + Yv*Yv + Zv*Zv).
    /// </summary>
    gce_MakeDir(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Returns the constructed unit vector.
    /// Exceptions StdFail_NotDone if no unit vector is constructed.
    /// </summary>
    Macad::Occt::Dir Value();
    Macad::Occt::Dir Operator();
}; // class gce_MakeDir

//---------------------------------------------------------------------
//  Class  gce_MakeDir2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create a Dir2d from gp.
/// * Create a Dir2d with 2 points.
/// * Create a Dir2d with a Vec2d.
/// * Create a Dir2d with a XY from gp.
/// * Create a Dir2d with a 2 Reals (Coordinates).
/// </summary>
public ref class gce_MakeDir2d sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeDir2d_h
public:
    Include_gce_MakeDir2d_h
#endif

public:
    gce_MakeDir2d(::gce_MakeDir2d* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeDir2d(::gce_MakeDir2d& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeDir2d* NativeInstance
    {
        ::gce_MakeDir2d* get()
        {
            return static_cast<::gce_MakeDir2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Normalizes the vector V and creates a direction.
    /// Status is "NullVector" if V.Magnitude() <= Resolution.
    /// </summary>
    gce_MakeDir2d(Macad::Occt::Vec2d V);
    /// <summary>
    /// Creates a direction from a triplet of coordinates.
    /// Status is "NullVector" if Coord.Modulus() <=
    /// Resolution from gp.
    /// </summary>
    gce_MakeDir2d(Macad::Occt::XY Coord);
    /// <summary>
    /// Creates a direction with its 3 cartesian coordinates.
    /// Status is "NullVector" if Sqrt(Xv*Xv + Yv*Yv )
    /// <= Resolution
    /// </summary>
    gce_MakeDir2d(double Xv, double Yv);
    /// <summary>
    /// Make a Dir2d from gp <TheDir> passing through 2
    /// Pnt <P1>,<P2>.
    /// Status is "ConfusedPoints" if <P1> and <P2> are confused.
    /// Warning
    /// If an error occurs (that is, when IsDone returns
    /// false), the Status function returns:
    /// -   gce_ConfusedPoints if points P1 and P2 are coincident, or
    /// -   gce_NullVector if one of the following is less
    /// than or equal to gp::Resolution():
    /// -   the magnitude of vector V,
    /// -   the modulus of Coord,
    /// -   Sqrt(Xv*Xv + Yv*Yv).
    /// </summary>
    gce_MakeDir2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    /// <summary>
    /// Returns the constructed unit vector.
    /// Exceptions StdFail_NotDone if no unit vector is constructed.
    /// </summary>
    Macad::Occt::Dir2d Value();
    Macad::Occt::Dir2d Operator();
}; // class gce_MakeDir2d

//---------------------------------------------------------------------
//  Class  gce_MakeElips
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used to
/// create an ellipse from gp.
/// 
/// * Create an ellipse from its center, and two points:
/// one on the ciconference giving the major radius, the
/// other giving the value of the small radius.
/// </summary>
public ref class gce_MakeElips sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeElips_h
public:
    Include_gce_MakeElips_h
#endif

public:
    gce_MakeElips(::gce_MakeElips* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeElips(::gce_MakeElips& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeElips* NativeInstance
    {
        ::gce_MakeElips* get()
        {
            return static_cast<::gce_MakeElips*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The major radius of the ellipse is on the "XAxis" and the
    /// minor radius is on the "YAxis" of the ellipse. The "XAxis"
    /// is defined with the "XDirection" of A2 and the "YAxis" is
    /// defined with the "YDirection" of A2.
    /// Warnings :
    /// It is not forbidden to create an ellipse with
    /// MajorRadius = MinorRadius.
    /// </summary>
    gce_MakeElips(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
    /// <summary>
    /// Make an ellipse with its center and two points.
    /// Warning
    /// The MakeElips class does not prevent the
    /// construction of an ellipse where the MajorRadius is
    /// equal to the MinorRadius.
    /// If an error occurs (that is, when IsDone returns
    /// false), the Status function returns:
    /// -   gce_InvertRadius if MajorRadius is less than MinorRadius;
    /// -   gce_NegativeRadius if MinorRadius is less than 0.0;
    /// -   gce_NullAxis if the points S1 and Center are coincident; or
    /// -   gce_InvertAxis if:
    /// -   the major radius computed with Center and S1
    /// is less than the minor radius computed with Center, S1 and S2, or
    /// -   Center, S1 and S2 are collinear.
    /// </summary>
    gce_MakeElips(Macad::Occt::Pnt S1, Macad::Occt::Pnt S2, Macad::Occt::Pnt Center);
    /// <summary>
    /// Returns the constructed ellipse.
    /// Exceptions StdFail_NotDone if no ellipse is constructed.
    /// </summary>
    Macad::Occt::gp_Elips^ Value();
    Macad::Occt::gp_Elips^ Operator();
}; // class gce_MakeElips

//---------------------------------------------------------------------
//  Class  gce_MakeElips2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used to
/// create Elips2d from gp.
/// 
/// * Create an ellipse from its center, and two points:
/// one on the ciconference giving the major radius, the
/// other giving the value of the small radius.
/// * Create an ellipse from its major axis and its major
/// radius and its minor radius.
/// </summary>
public ref class gce_MakeElips2d sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeElips2d_h
public:
    Include_gce_MakeElips2d_h
#endif

public:
    gce_MakeElips2d(::gce_MakeElips2d* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeElips2d(::gce_MakeElips2d& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeElips2d* NativeInstance
    {
        ::gce_MakeElips2d* get()
        {
            return static_cast<::gce_MakeElips2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an ellipse with the major axis, the major and the
    /// minor radius. The location of the MajorAxis is the center
    /// of the  ellipse.
    /// The sense of parametrization is given by Sense.
    /// It is possible to create an ellipse with MajorRadius = MinorRadius.
    /// the status is "InvertRadius" if MajorRadius < MinorRadius or
    /// "NegativeRadius" if MinorRadius < 0.0
    /// </summary>
    gce_MakeElips2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense);
    /// <summary>
    /// Creates an ellipse with the major axis, the major and the
    /// minor radius. The location of the MajorAxis is the center
    /// of the  ellipse.
    /// The sense of parametrization is given by Sense.
    /// It is possible to create an ellipse with MajorRadius = MinorRadius.
    /// the status is "InvertRadius" if MajorRadius < MinorRadius or
    /// "NegativeRadius" if MinorRadius < 0.0
    /// </summary>
    gce_MakeElips2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius);
    /// <summary>
    /// Axis defines the Xaxis and Yaxis of the ellipse which defines
    /// the origin and the sense of parametrization.
    /// Creates an ellipse with the AxisPlacement the major and the
    /// minor radius. The location of Axis is the center
    /// of the  ellipse.
    /// It is possible to create an ellipse with MajorRadius = MinorRadius.
    /// the status is "InvertRadius" if MajorRadius < MinorRadius or
    /// "NegativeRadius" if MinorRadius < 0.0
    /// </summary>
    gce_MakeElips2d(Macad::Occt::Ax22d A, double MajorRadius, double MinorRadius);
    /// <summary>
    /// Makes an Elips2d with its center and two points.
    /// The sense of parametrization is given by S1, S2,
    /// and Center.
    /// Depending on the constructor, the  implicit orientation of the ellipse is:
    /// -   the sense defined by A,
    /// -   the sense defined by points Center, S1 and S2,
    /// -   the trigonometric sense if Sense is not given or is true, or
    /// -   the opposite if Sense is false.
    /// It is possible to construct an ellipse where the major
    /// and minor radii are equal.
    /// Warning
    /// If an error occurs (that is, when IsDone returns
    /// false), the Status function returns:
    /// -   gce_InvertRadius if MajorRadius is less than MinorRadius,
    /// -   gce_NegativeRadius if MajorRadius or
    /// MinorRadius is less than 0.0,
    /// -   gce_NullAxis if points S1, S2 and Center are collinear, or
    /// -   gce_InvertAxis if the major radius computed with
    /// Center and S1 is less than the minor radius
    /// computed with Center, S1 and S2.
    /// </summary>
    gce_MakeElips2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d S2, Macad::Occt::Pnt2d Center);
    /// <summary>
    /// Returns the constructed ellipse.
    /// Exceptions StdFail_NotDone if no ellipse is constructed.
    /// </summary>
    Macad::Occt::gp_Elips2d^ Value();
    Macad::Occt::gp_Elips2d^ Operator();
}; // class gce_MakeElips2d

//---------------------------------------------------------------------
//  Class  gce_MakeHypr
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used to
/// create Hyperbola from gp.
/// * Create an Hyperbola from its center, and two points:
/// one on its axis of symmetry giving the major radius, the
/// other giving the value of the small radius.
/// The three points give the plane of the hyperbola.
/// * Create an hyperbola from its axisplacement and its
/// MajorRadius and its MinorRadius.
/// 
/// ^YAxis
/// |
/// FirstConjugateBranch
/// |
/// Other            |                Main
/// --------------------- C ------------------------------>XAxis
/// Branch           |                Branch
/// |
/// |
/// SecondConjugateBranch
/// |
/// 
/// The local cartesian coordinate system of the ellipse is an
/// axis placement (two axis).
/// 
/// The "XDirection" and the "YDirection" of the axis placement
/// define the plane of the hyperbola.
/// 
/// The "Direction" of the axis placement defines the normal axis
/// to the hyperbola's plane.
/// 
/// The "XAxis" of the hyperbola ("Location", "XDirection") is the
/// major axis  and the  "YAxis" of the hyperbola ("Location",
/// "YDirection") is the minor axis.
/// 
/// Warnings :
/// The major radius (on the major axis) can be lower than the
/// minor radius (on the minor axis).
/// </summary>
public ref class gce_MakeHypr sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeHypr_h
public:
    Include_gce_MakeHypr_h
#endif

public:
    gce_MakeHypr(::gce_MakeHypr* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeHypr(::gce_MakeHypr& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeHypr* NativeInstance
    {
        ::gce_MakeHypr* get()
        {
            return static_cast<::gce_MakeHypr*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// A2 is the local coordinate system of the hyperbola.
    /// In the local coordinates system A2 the equation of the
    /// hyperbola is :
    /// X*X / MajorRadius*MajorRadius - Y*Y / MinorRadius*MinorRadius = 1.0
    /// It is not forbidden to create an Hyperbola with MajorRadius =
    /// MinorRadius.
    /// For the hyperbola the MajorRadius can be lower than the
    /// MinorRadius.
    /// The status is "NegativeRadius" if MajorRadius < 0.0 and
    /// "InvertRadius" if MinorRadius > MajorRadius.
    /// </summary>
    gce_MakeHypr(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
    /// <summary>
    /// Constructs a hyperbola
    /// -   centered on the point Center, where:
    /// -   the plane of the hyperbola is defined by Center, S1 and S2,
    /// -   its major axis is defined by Center and S1,
    /// -   its major radius is the distance between Center and S1, and
    /// -   its minor radius is the distance between S2 and the major axis.
    /// Warning
    /// If an error occurs (that is, when IsDone returns
    /// false), the Status function returns:
    /// -   gce_NegativeRadius if MajorRadius is less than 0.0;
    /// -   gce_InvertRadius if:
    /// -   the major radius (computed with Center, S1) is
    /// less than the minor radius (computed with Center, S1 and S2), or
    /// -   MajorRadius is less than MinorRadius; or
    /// -   gce_ColinearPoints if S1, S2 and Center are collinear.
    /// </summary>
    gce_MakeHypr(Macad::Occt::Pnt S1, Macad::Occt::Pnt S2, Macad::Occt::Pnt Center);
    /// <summary>
    /// Returns the constructed hyperbola.
    /// Exceptions StdFail_NotDone if no hyperbola is constructed.
    /// </summary>
    Macad::Occt::gp_Hypr^ Value();
    Macad::Occt::gp_Hypr^ Operator();
}; // class gce_MakeHypr

//---------------------------------------------------------------------
//  Class  gce_MakeHypr2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used to
/// create a 2d Hyperbola from gp.
/// * Create a 2d Hyperbola from its center and two points:
/// one on its axis of symmetry giving the major radius, the
/// other giving the value of the small radius.
/// * Create a 2d Hyperbola from its major axis and its major
/// radius and its minor radius.
/// 
/// ^YAxis
/// |
/// FirstConjugateBranch
/// |
/// Other            |                Main
/// --------------------- C ------------------------------>XAxis
/// Branch           |                Branch
/// |
/// |
/// SecondConjugateBranch
/// |
/// 
/// An axis placement (one axis) is associated with the hyperbola.
/// This axis is the "XAxis" or major axis of the hyperbola. It is
/// the symmetry axis of the main branch of hyperbola.
/// The "YAxis" is normal to this axis and pass through its location
/// point. It is the minor axis.
/// 
/// The major radius is the distance between the Location point
/// of the hyperbola C and the vertex of the Main Branch (or the
/// Other branch). The minor radius is the distance between the
/// Location point of the hyperbola C and the vertex of the First
/// (or Second) Conjugate branch.
/// The major radius can be lower than the minor radius.
/// </summary>
public ref class gce_MakeHypr2d sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeHypr2d_h
public:
    Include_gce_MakeHypr2d_h
#endif

public:
    gce_MakeHypr2d(::gce_MakeHypr2d* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeHypr2d(::gce_MakeHypr2d& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeHypr2d* NativeInstance
    {
        ::gce_MakeHypr2d* get()
        {
            return static_cast<::gce_MakeHypr2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a hyperbola
    /// centered on the point Center, where:
    /// -   the major axis of the hyperbola is defined by Center and point S1,
    /// -   the major radius is the distance between Center and S1, and
    /// -   the minor radius is the distance between point S2 and the major axis.
    /// </summary>
    gce_MakeHypr2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d S2, Macad::Occt::Pnt2d Center);
    /// <summary>
    /// Constructs a hyperbola with major and minor radii MajorRadius and
    /// MinorRadius, where:
    /// -   the center of the hyperbola is the origin of the axis MajorAxis, and
    /// -   the major axis is defined by MajorAxis if Sense
    /// is true, or the opposite axis to MajorAxis if Sense is false; or
    /// -   centered on the origin of the coordinate system
    /// A, with major and minor radii MajorRadius and
    /// MinorRadius, where its major axis is the "X Axis"
    /// of A (A is the local coordinate system of the hyperbola).
    /// </summary>
    gce_MakeHypr2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense);
    /// <summary>
    /// Creates a Hypr2d centered on the origin of the coordinate system
    /// A, with major and minor radii MajorRadius and
    /// MinorRadius, where its major axis is the "X Axis"
    /// of A (A is the local coordinate system of the hyperbola).
    /// </summary>
    gce_MakeHypr2d(Macad::Occt::Ax22d A, double MajorRadius, double MinorRadius);
    /// <summary>
    /// Returns the constructed hyperbola.
    /// Exceptions StdFail_NotDone if no hyperbola is constructed.
    /// </summary>
    Macad::Occt::gp_Hypr2d^ Value();
    Macad::Occt::gp_Hypr2d^ Operator();
}; // class gce_MakeHypr2d

//---------------------------------------------------------------------
//  Class  gce_MakeLin
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create a Lin from gp.
/// * Create a Lin parallel to another and passing
/// through a point.
/// * Create a Lin passing through 2 points.
/// * Create a lin from its axis (Ax1 from gp).
/// * Create a lin from a point and a direction.
/// </summary>
public ref class gce_MakeLin sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeLin_h
public:
    Include_gce_MakeLin_h
#endif

public:
    gce_MakeLin(::gce_MakeLin* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeLin(::gce_MakeLin& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeLin* NativeInstance
    {
        ::gce_MakeLin* get()
        {
            return static_cast<::gce_MakeLin*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a line located along the axis A1.
    /// </summary>
    gce_MakeLin(Macad::Occt::Ax1 A1);
    /// <summary>
    /// <P> is the location point (origin) of the line and
    /// <V> is the direction of the line.
    /// </summary>
    gce_MakeLin(Macad::Occt::Pnt P, Macad::Occt::Dir V);
    /// <summary>
    /// Make a Lin from gp <TheLin> parallel to another
    /// Lin <Lin> and passing through a Pnt <Point>.
    /// </summary>
    gce_MakeLin(Macad::Occt::gp_Lin^ Lin, Macad::Occt::Pnt Point);
    /// <summary>
    /// Make a Lin from gp <TheLin> passing through 2
    /// Pnt <P1>,<P2>.
    /// It returns false if <p1> and <P2> are confused.
    /// </summary>
    gce_MakeLin(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Returns the constructed line.
    /// Exceptions StdFail_NotDone is raised if no line is constructed.
    /// </summary>
    Macad::Occt::gp_Lin^ Value();
    Macad::Occt::gp_Lin^ Operator();
}; // class gce_MakeLin

//---------------------------------------------------------------------
//  Class  gce_MakeLin2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create Lin2d from gp.
/// 
/// * Create a Lin2d parallel to another and passing
/// through a point.
/// * Create a Lin2d parallel to another at the distance
/// Dist.
/// * Create a Lin2d passing through 2 points.
/// * Create a Lin2d from its axis (Ax1 from gp).
/// * Create a Lin2d from a point and a direction.
/// * Create a Lin2d from its equation.
/// </summary>
public ref class gce_MakeLin2d sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeLin2d_h
public:
    Include_gce_MakeLin2d_h
#endif

public:
    gce_MakeLin2d(::gce_MakeLin2d* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeLin2d(::gce_MakeLin2d& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeLin2d* NativeInstance
    {
        ::gce_MakeLin2d* get()
        {
            return static_cast<::gce_MakeLin2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a line located with A.
    /// </summary>
    gce_MakeLin2d(Macad::Occt::Ax2d A);
    /// <summary>
    /// <P> is the location point (origin) of the line and
    /// <V> is the direction of the line.
    /// </summary>
    gce_MakeLin2d(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d V);
    /// <summary>
    /// Creates the line from the equation A*X + B*Y + C = 0.0
    /// the status is "NullAxis"if Sqrt(A*A + B*B) <= Resolution from gp.
    /// </summary>
    gce_MakeLin2d(double A, double B, double C);
    /// <summary>
    /// Make a Lin2d from gp <TheLin> parallel to another
    /// Lin2d <Lin> at a distance <Dist>.
    /// If Dist is greater than zero the result is on the
    /// right of the Line <Lin>, else the result is on the
    /// left of the Line <Lin>.
    /// </summary>
    gce_MakeLin2d(Macad::Occt::gp_Lin2d^ Lin, double Dist);
    /// <summary>
    /// Make a Lin2d from gp <TheLin> parallel to another
    /// Lin2d <Lin> and passing through a Pnt2d <Point>.
    /// </summary>
    gce_MakeLin2d(Macad::Occt::gp_Lin2d^ Lin, Macad::Occt::Pnt2d Point);
    /// <summary>
    /// Make a Lin2d from gp <TheLin> passing through 2
    /// Pnt2d <P1>,<P2>.
    /// It returns false if <P1> and <P2> are confused.
    /// Warning
    /// If an error occurs (that is, when IsDone returns
    /// false), the Status function returns:
    /// -   gce_NullAxis if Sqrt(A*A + B*B) is less
    /// than or equal to gp::Resolution(), or
    /// -   gce_ConfusedPoints if points P1 and P2 are coincident.
    /// </summary>
    gce_MakeLin2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
    /// <summary>
    /// Returns the constructed line.
    /// Exceptions StdFail_NotDone if no line is constructed.
    /// </summary>
    Macad::Occt::gp_Lin2d^ Value();
    Macad::Occt::gp_Lin2d^ Operator();
}; // class gce_MakeLin2d

//---------------------------------------------------------------------
//  Class  gce_MakeMirror
//---------------------------------------------------------------------
/// <summary>
/// This class mplements elementary construction algorithms for a
/// symmetrical transformation in 3D space about a point,
/// axis or plane. The result is a gp_Trsf transformation.
/// A MakeMirror object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeMirror sealed
    : public Macad::Occt::BaseClass<::gce_MakeMirror>
{

#ifdef Include_gce_MakeMirror_h
public:
    Include_gce_MakeMirror_h
#endif

public:
    gce_MakeMirror(::gce_MakeMirror* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeMirror>( nativeInstance, true )
    {}

    gce_MakeMirror(::gce_MakeMirror& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeMirror>( &nativeInstance, false )
    {}

    property ::gce_MakeMirror* NativeInstance
    {
        ::gce_MakeMirror* get()
        {
            return static_cast<::gce_MakeMirror*>(_NativeInstance);
        }
    }

public:
    gce_MakeMirror(Macad::Occt::Pnt Point);
    gce_MakeMirror(Macad::Occt::Ax1 Axis);
    gce_MakeMirror(Macad::Occt::gp_Lin^ Line);
    /// <summary>
    /// Makes a symmetry transformation af axis defined by
    /// <Point> and <Direc>.
    /// </summary>
    gce_MakeMirror(Macad::Occt::Pnt Point, Macad::Occt::Dir Direc);
    /// <summary>
    /// Makes a symmetry transformation of plane <Plane>.
    /// </summary>
    gce_MakeMirror(Macad::Occt::Pln Plane);
    /// <summary>
    /// Makes a symmetry transformation of plane <Plane>.
    /// </summary>
    gce_MakeMirror(Macad::Occt::Ax2 Plane);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    Macad::Occt::Trsf Value();
    Macad::Occt::Trsf Operator();
}; // class gce_MakeMirror

//---------------------------------------------------------------------
//  Class  gce_MakeMirror2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// symmetrical transformation in 2D space about a point
/// or axis. The result is a gp_Trsf2d transformation.
/// A MakeMirror2d object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and consulting the result.
/// </summary>
public ref class gce_MakeMirror2d sealed
    : public Macad::Occt::BaseClass<::gce_MakeMirror2d>
{

#ifdef Include_gce_MakeMirror2d_h
public:
    Include_gce_MakeMirror2d_h
#endif

public:
    gce_MakeMirror2d(::gce_MakeMirror2d* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeMirror2d>( nativeInstance, true )
    {}

    gce_MakeMirror2d(::gce_MakeMirror2d& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeMirror2d>( &nativeInstance, false )
    {}

    property ::gce_MakeMirror2d* NativeInstance
    {
        ::gce_MakeMirror2d* get()
        {
            return static_cast<::gce_MakeMirror2d*>(_NativeInstance);
        }
    }

public:
    gce_MakeMirror2d(Macad::Occt::Pnt2d Point);
    gce_MakeMirror2d(Macad::Occt::Ax2d Axis);
    gce_MakeMirror2d(Macad::Occt::gp_Lin2d^ Line);
    /// <summary>
    /// Makes a symmetry transformation af axis defined by
    /// <Point> and <Direc>.
    /// </summary>
    gce_MakeMirror2d(Macad::Occt::Pnt2d Point, Macad::Occt::Dir2d Direc);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    Macad::Occt::Trsf2d Value();
    Macad::Occt::Trsf2d Operator();
}; // class gce_MakeMirror2d

//---------------------------------------------------------------------
//  Class  gce_MakeParab
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used to
/// create Parab from gp.
/// Defines the parabola in the parameterization range  :
/// ]-infinite, +infinite[
/// The vertex of the parabola is the "Location" point of the
/// local coordinate system (axis placement) of the parabola.
/// 
/// The "XDirection" and the "YDirection" of this system define
/// the plane of the parabola.
/// 
/// The "XAxis" of the parabola ("Location", "XDirection") is
/// the axis of symmetry of the parabola. The Xaxis is oriented
/// from the vertex of the parabola to the Focus of the parabola.
/// 
/// The "YAxis" of the parabola ("Location", "YDirection") is
/// parallel to the directrix of the parabola.
/// 
/// The equation of the parabola in the local coordinates system is
/// Y**2 = (2*P) * X
/// P is the distance between the focus and the directrix of the
/// parabola (called Parameter).
/// The focal length F = P/2 is the distance between the vertex
/// and the focus of the parabola.
/// 
/// * Creates a parabola with its local coordinate system "A2"
/// and it's focal length "Focal".
/// * Create a parabola with its directrix and its focus point.
/// </summary>
public ref class gce_MakeParab sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeParab_h
public:
    Include_gce_MakeParab_h
#endif

public:
    gce_MakeParab(::gce_MakeParab* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeParab(::gce_MakeParab& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeParab* NativeInstance
    {
        ::gce_MakeParab* get()
        {
            return static_cast<::gce_MakeParab*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// --- Purpose ;
    /// Creates a parabola with its local coordinate system "A2"
    /// and it's focal length "Focal".
    /// The XDirection of A2 defines the axis of symmetry of the
    /// parabola. The YDirection of A2 is parallel to the directrix
    /// of the parabola. The Location point of A2 is the vertex of
    /// the parabola
    /// The status is "NullFocusLength" if Focal < 0.0
    /// </summary>
    gce_MakeParab(Macad::Occt::Ax2 A2, double Focal);
    /// <summary>
    /// D is the directrix of the parabola and F the focus point.
    /// The symmetry axis (XAxis) of the parabola is normal to the
    /// directrix and pass through the focus point F, but its
    /// location point is the vertex of the parabola.
    /// The YAxis of the parabola is parallel to D and its location
    /// point is the vertex of the parabola. The normal to the plane
    /// of the parabola is the cross product between the XAxis and the
    /// YAxis.
    /// </summary>
    gce_MakeParab(Macad::Occt::Ax1 D, Macad::Occt::Pnt F);
    /// <summary>
    /// Returns the constructed parabola.
    /// Exceptions StdFail_NotDone if no parabola is constructed.
    /// </summary>
    Macad::Occt::gp_Parab^ Value();
    Macad::Occt::gp_Parab^ Operator();
}; // class gce_MakeParab

//---------------------------------------------------------------------
//  Class  gce_MakeParab2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used to
/// create Parab2d from gp.
/// Defines an infinite parabola.
/// An axis placement one axis defines the local cartesian
/// coordinate system ("XAxis") of the parabola.
/// The vertex of the parabola is the "Location" point of the
/// local coordinate system of the parabola.
/// The "XAxis" of the parabola is its axis of symmetry.
/// The "XAxis" is oriented from the vertex of the parabola to the
/// Focus of the parabola.
/// The "YAxis" is parallel to the directrix of the parabola and
/// its "Location" point is the vertex of the parabola.
/// The equation of the parabola in the local coordinate system is
/// Y**2 = (2*P) * X
/// P is the distance between the focus and the directrix of the
/// parabola called Parameter).
/// The focal length F = P/2 is the distance between the vertex
/// and the focus of the parabola.
/// 
/// * Create a Parab2d from one apex  and the center.
/// * Create a Parab2d with the directrix and the focus point.
/// * Create a Parab2d with its vertex point and its axis
/// of symmetry and its focus length.
/// </summary>
public ref class gce_MakeParab2d sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeParab2d_h
public:
    Include_gce_MakeParab2d_h
#endif

public:
    gce_MakeParab2d(::gce_MakeParab2d* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakeParab2d(::gce_MakeParab2d& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakeParab2d* NativeInstance
    {
        ::gce_MakeParab2d* get()
        {
            return static_cast<::gce_MakeParab2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a parabola with its axis of symmetry ("MirrorAxis")
    /// and its focal length.
    /// Warnings : It is possible to have Focal = 0.
    /// The status is "NullFocalLength" Raised if Focal < 0.0
    /// </summary>
    gce_MakeParab2d(Macad::Occt::Ax2d MirrorAxis, double Focal, bool Sense);
    /// <summary>
    /// Creates a parabola with its axis of symmetry ("MirrorAxis")
    /// and its focal length.
    /// Warnings : It is possible to have Focal = 0.
    /// The status is "NullFocalLength" Raised if Focal < 0.0
    /// </summary>
    gce_MakeParab2d(Macad::Occt::Ax2d MirrorAxis, double Focal);
    /// <summary>
    /// Creates a parabola with its local coordinate system <A>
    /// and its focal length.
    /// Warnings : It is possible to have Focal = 0.
    /// The status is "NullFocalLength" Raised if Focal < 0.0
    /// </summary>
    gce_MakeParab2d(Macad::Occt::Ax22d A, double Focal);
    /// <summary>
    /// Creates a parabola with the directrix and the focus point.
    /// The sense of parametrization is given by Sense.
    /// </summary>
    gce_MakeParab2d(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F, bool Sense);
    /// <summary>
    /// Creates a parabola with the directrix and the focus point.
    /// The sense of parametrization is given by Sense.
    /// </summary>
    gce_MakeParab2d(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F);
    /// <summary>
    /// Make an Parab2d with S1 as the Focal point and Center
    /// as the apex of the parabola
    /// Warning
    /// The MakeParab2d class does not prevent the
    /// construction of a parabola with a null focal distance.
    /// If an error occurs (that is, when IsDone returns
    /// false), the Status function returns:
    /// -   gce_NullFocusLength if Focal is less than 0.0, or
    /// -   gce_NullAxis if S1 and Center are coincident.
    /// </summary>
    gce_MakeParab2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d Center, bool Sense);
    /// <summary>
    /// Make an Parab2d with S1 as the Focal point and Center
    /// as the apex of the parabola
    /// Warning
    /// The MakeParab2d class does not prevent the
    /// construction of a parabola with a null focal distance.
    /// If an error occurs (that is, when IsDone returns
    /// false), the Status function returns:
    /// -   gce_NullFocusLength if Focal is less than 0.0, or
    /// -   gce_NullAxis if S1 and Center are coincident.
    /// </summary>
    gce_MakeParab2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d Center);
    /// <summary>
    /// Returns the constructed parabola.
    /// Exceptions StdFail_NotDone if no parabola is constructed.
    /// </summary>
    Macad::Occt::gp_Parab2d^ Value();
    Macad::Occt::gp_Parab2d^ Operator();
}; // class gce_MakeParab2d

//---------------------------------------------------------------------
//  Class  gce_MakePln
//---------------------------------------------------------------------
/// <summary>
/// This class implements the following algorithms used
/// to create a Plane from gp.
/// * Create a Pln parallel to another and passing
/// through a point.
/// * Create a Pln passing through 3 points.
/// * Create a Pln by its normal.
/// Defines a non-persistent plane.
/// The plane is located in 3D space with an axis placement
/// two axis. It is the local coordinate system of the plane.
/// 
/// The "Location" point and the main direction of this axis
/// placement define the "Axis" of the plane. It is the axis
/// normal to the plane which gives the orientation of the
/// plane.
/// 
/// The "XDirection" and the "YDirection" of the axis
/// placement define the plane ("XAxis" and "YAxis") .
/// </summary>
public ref class gce_MakePln sealed
    : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakePln_h
public:
    Include_gce_MakePln_h
#endif

public:
    gce_MakePln(::gce_MakePln* nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    gce_MakePln(::gce_MakePln& nativeInstance)
        : Macad::Occt::gce_Root( nativeInstance )
    {}

    property ::gce_MakePln* NativeInstance
    {
        ::gce_MakePln* get()
        {
            return static_cast<::gce_MakePln*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The coordinate system of the plane is defined with the axis
    /// placement A2.
    /// The "Direction" of A2 defines the normal to the plane.
    /// The "Location" of A2 defines the location (origin) of the plane.
    /// The "XDirection" and "YDirection" of A2 define the "XAxis" and
    /// the "YAxis" of the plane used to parametrize the plane.
    /// </summary>
    gce_MakePln(Macad::Occt::Ax2 A2);
    /// <summary>
    /// Creates a plane with the  "Location" point <P>
    /// and the normal direction <V>.
    /// </summary>
    gce_MakePln(Macad::Occt::Pnt P, Macad::Occt::Dir V);
    /// <summary>
    /// Creates a plane from its cartesian equation :
    /// A * X + B * Y + C * Z + D = 0.0
    /// 
    /// the status is "BadEquation" if Sqrt (A*A + B*B + C*C) <=
    /// Resolution from gp.
    /// </summary>
    gce_MakePln(double A, double B, double C, double D);
    /// <summary>
    /// Make a Pln from gp <ThePln> parallel to another
    /// Pln <Pln> and passing through a Pnt <Point>.
    /// </summary>
    gce_MakePln(Macad::Occt::Pln Pln, Macad::Occt::Pnt Point);
    /// <summary>
    /// Make a Pln from gp <ThePln> parallel to another
    /// Pln <Pln> at the distance <Dist> which can be greater
    /// or less than zero.
    /// In the first case the result is at the distance
    /// <Dist> to the plane <Pln> in the direction of the
    /// normal to <Pln>.
    /// Otherwise it is in the opposite direction.
    /// </summary>
    gce_MakePln(Macad::Occt::Pln Pln, double Dist);
    /// <summary>
    /// Make a Pln from gp <ThePln> passing through 3
    /// Pnt <P1>,<P2>,<P3>.
    /// It returns false if <P1> <P2> <P3> are confused.
    /// </summary>
    gce_MakePln(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
    /// <summary>
    /// Make a Pln from gp <ThePln> perpendicular to the line
    /// passing through <P1>,<P2>.
    /// The status is "ConfusedPoints" if <P1> <P2> are confused.
    /// </summary>
    gce_MakePln(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
    /// <summary>
    /// Make a pln  passing through the location of <Axis>and
    /// normal to the Direction of <Axis>.
    /// Warning -  If an error occurs (that is, when IsDone returns
    /// false), the Status function returns:
    /// -   gce_BadEquation if Sqrt(A*A + B*B +
    /// C*C) is less than or equal to gp::Resolution(),
    /// -   gce_ConfusedPoints if P1 and P2 are coincident, or
    /// -   gce_ColinearPoints if P1, P2 and P3 are collinear.
    /// </summary>
    gce_MakePln(Macad::Occt::Ax1 Axis);
    /// <summary>
    /// Returns the constructed plane.
    /// Exceptions StdFail_NotDone if no plane is constructed.
    /// </summary>
    Macad::Occt::Pln Value();
    Macad::Occt::Pln Operator();
}; // class gce_MakePln

//---------------------------------------------------------------------
//  Class  gce_MakeRotation
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// rotation in 3D space. The result is a gp_Trsf transformation.
/// A MakeRotation object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeRotation sealed
    : public Macad::Occt::BaseClass<::gce_MakeRotation>
{

#ifdef Include_gce_MakeRotation_h
public:
    Include_gce_MakeRotation_h
#endif

public:
    gce_MakeRotation(::gce_MakeRotation* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeRotation>( nativeInstance, true )
    {}

    gce_MakeRotation(::gce_MakeRotation& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeRotation>( &nativeInstance, false )
    {}

    property ::gce_MakeRotation* NativeInstance
    {
        ::gce_MakeRotation* get()
        {
            return static_cast<::gce_MakeRotation*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a rotation through angle Angle about the axis defined by the line Line.
    /// </summary>
    gce_MakeRotation(Macad::Occt::gp_Lin^ Line, double Angle);
    /// <summary>
    /// Constructs a rotation through angle Angle about the axis defined by the axis Axis.
    /// </summary>
    gce_MakeRotation(Macad::Occt::Ax1 Axis, double Angle);
    /// <summary>
    /// Constructs a rotation through angle Angle about the axis defined by:
    /// the point Point and the unit vector Direc.
    /// </summary>
    gce_MakeRotation(Macad::Occt::Pnt Point, Macad::Occt::Dir Direc, double Angle);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    Macad::Occt::Trsf Value();
    Macad::Occt::Trsf Operator();
}; // class gce_MakeRotation

//---------------------------------------------------------------------
//  Class  gce_MakeRotation2d
//---------------------------------------------------------------------
/// <summary>
/// Implements an elementary construction algorithm for
/// a rotation in 2D space. The result is a gp_Trsf2d transformation.
/// A MakeRotation2d object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeRotation2d sealed
    : public Macad::Occt::BaseClass<::gce_MakeRotation2d>
{

#ifdef Include_gce_MakeRotation2d_h
public:
    Include_gce_MakeRotation2d_h
#endif

public:
    gce_MakeRotation2d(::gce_MakeRotation2d* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeRotation2d>( nativeInstance, true )
    {}

    gce_MakeRotation2d(::gce_MakeRotation2d& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeRotation2d>( &nativeInstance, false )
    {}

    property ::gce_MakeRotation2d* NativeInstance
    {
        ::gce_MakeRotation2d* get()
        {
            return static_cast<::gce_MakeRotation2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a rotation through angle Angle about the center Point.
    /// </summary>
    gce_MakeRotation2d(Macad::Occt::Pnt2d Point, double Angle);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    Macad::Occt::Trsf2d Value();
    Macad::Occt::Trsf2d Operator();
}; // class gce_MakeRotation2d

//---------------------------------------------------------------------
//  Class  gce_MakeScale
//---------------------------------------------------------------------
/// <summary>
/// Implements an elementary construction algorithm for
/// a scaling transformation in 3D space. The result is a gp_Trsf transformation.
/// A MakeScale object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeScale sealed
    : public Macad::Occt::BaseClass<::gce_MakeScale>
{

#ifdef Include_gce_MakeScale_h
public:
    Include_gce_MakeScale_h
#endif

public:
    gce_MakeScale(::gce_MakeScale* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeScale>( nativeInstance, true )
    {}

    gce_MakeScale(::gce_MakeScale& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeScale>( &nativeInstance, false )
    {}

    property ::gce_MakeScale* NativeInstance
    {
        ::gce_MakeScale* get()
        {
            return static_cast<::gce_MakeScale*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a scaling transformation with
    /// -   Point as the center of the transformation, and
    /// -   Scale as the scale factor.
    /// </summary>
    gce_MakeScale(Macad::Occt::Pnt Point, double Scale);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    Macad::Occt::Trsf Value();
    Macad::Occt::Trsf Operator();
}; // class gce_MakeScale

//---------------------------------------------------------------------
//  Class  gce_MakeScale2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements an elementary construction algorithm for
/// a scaling transformation in 2D space. The result is a gp_Trsf2d transformation.
/// A MakeScale2d object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeScale2d sealed
    : public Macad::Occt::BaseClass<::gce_MakeScale2d>
{

#ifdef Include_gce_MakeScale2d_h
public:
    Include_gce_MakeScale2d_h
#endif

public:
    gce_MakeScale2d(::gce_MakeScale2d* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeScale2d>( nativeInstance, true )
    {}

    gce_MakeScale2d(::gce_MakeScale2d& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeScale2d>( &nativeInstance, false )
    {}

    property ::gce_MakeScale2d* NativeInstance
    {
        ::gce_MakeScale2d* get()
        {
            return static_cast<::gce_MakeScale2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a scaling transformation with:
    /// -   Point as the center of the transformation, and
    /// -   Scale as the scale factor.
    /// </summary>
    gce_MakeScale2d(Macad::Occt::Pnt2d Point, double Scale);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    Macad::Occt::Trsf2d Value();
    Macad::Occt::Trsf2d Operator();
}; // class gce_MakeScale2d

//---------------------------------------------------------------------
//  Class  gce_MakeTranslation
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// translation in 3D space. The result is a gp_Trsf transformation.
/// A MakeTranslation object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeTranslation sealed
    : public Macad::Occt::BaseClass<::gce_MakeTranslation>
{

#ifdef Include_gce_MakeTranslation_h
public:
    Include_gce_MakeTranslation_h
#endif

public:
    gce_MakeTranslation(::gce_MakeTranslation* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeTranslation>( nativeInstance, true )
    {}

    gce_MakeTranslation(::gce_MakeTranslation& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeTranslation>( &nativeInstance, false )
    {}

    property ::gce_MakeTranslation* NativeInstance
    {
        ::gce_MakeTranslation* get()
        {
            return static_cast<::gce_MakeTranslation*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a translation along the vector " Vect"
    /// </summary>
    gce_MakeTranslation(Macad::Occt::Vec Vect);
    /// <summary>
    /// Constructs a translation along the vector
    /// (Point1,Point2) defined from the point Point1 to the point Point2.
    /// </summary>
    gce_MakeTranslation(Macad::Occt::Pnt Point1, Macad::Occt::Pnt Point2);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    Macad::Occt::Trsf Value();
    Macad::Occt::Trsf Operator();
}; // class gce_MakeTranslation

//---------------------------------------------------------------------
//  Class  gce_MakeTranslation2d
//---------------------------------------------------------------------
/// <summary>
/// This class implements elementary construction algorithms for a
/// translation in 2D space. The result is a gp_Trsf2d transformation.
/// A MakeTranslation2d object provides a framework for:
/// -   defining the construction of the transformation,
/// -   implementing the construction algorithm, and
/// -   consulting the result.
/// </summary>
public ref class gce_MakeTranslation2d sealed
    : public Macad::Occt::BaseClass<::gce_MakeTranslation2d>
{

#ifdef Include_gce_MakeTranslation2d_h
public:
    Include_gce_MakeTranslation2d_h
#endif

public:
    gce_MakeTranslation2d(::gce_MakeTranslation2d* nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeTranslation2d>( nativeInstance, true )
    {}

    gce_MakeTranslation2d(::gce_MakeTranslation2d& nativeInstance)
        : Macad::Occt::BaseClass<::gce_MakeTranslation2d>( &nativeInstance, false )
    {}

    property ::gce_MakeTranslation2d* NativeInstance
    {
        ::gce_MakeTranslation2d* get()
        {
            return static_cast<::gce_MakeTranslation2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a translation along the vector Vect.
    /// </summary>
    gce_MakeTranslation2d(Macad::Occt::Vec2d Vect);
    /// <summary>
    /// Constructs a translation along the vector
    /// (Point1,Point2) defined from the point Point1 to the point Point2.
    /// </summary>
    gce_MakeTranslation2d(Macad::Occt::Pnt2d Point1, Macad::Occt::Pnt2d Point2);
    /// <summary>
    /// Returns the constructed transformation.
    /// </summary>
    Macad::Occt::Trsf2d Value();
    Macad::Occt::Trsf2d Operator();
}; // class gce_MakeTranslation2d

}; // namespace Occt
}; // namespace Macad
