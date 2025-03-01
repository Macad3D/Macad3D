// Generated wrapper code for package gp

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  gp_TrsfNLerp
//---------------------------------------------------------------------
public ref class gp_TrsfNLerp sealed
    : public Macad::Occt::BaseClass<::gp_TrsfNLerp>
{

#ifdef Include_gp_TrsfNLerp_h
public:
    Include_gp_TrsfNLerp_h
#endif

public:
    gp_TrsfNLerp(::gp_TrsfNLerp* nativeInstance)
        : Macad::Occt::BaseClass<::gp_TrsfNLerp>( nativeInstance, true )
    {}

    gp_TrsfNLerp(::gp_TrsfNLerp& nativeInstance)
        : Macad::Occt::BaseClass<::gp_TrsfNLerp>( &nativeInstance, false )
    {}

    property ::gp_TrsfNLerp* NativeInstance
    {
        ::gp_TrsfNLerp* get()
        {
            return static_cast<::gp_TrsfNLerp*>(_NativeInstance);
        }
    }

public:
    gp_TrsfNLerp();
    gp_TrsfNLerp(Macad::Occt::Trsf theStart, Macad::Occt::Trsf theEnd);
    void Init(Macad::Occt::Trsf theStart, Macad::Occt::Trsf theEnd);
    void Interpolate(double theT, Macad::Occt::Trsf% theResult);
}; // class gp_TrsfNLerp

//---------------------------------------------------------------------
//  Class  gp_Vec2f
//---------------------------------------------------------------------
public ref class gp_Vec2f sealed
    : public Macad::Occt::BaseClass<::gp_Vec2f>
{

#ifdef Include_gp_Vec2f_h
public:
    Include_gp_Vec2f_h
#endif

public:
    gp_Vec2f(::gp_Vec2f* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Vec2f>( nativeInstance, true )
    {}

    gp_Vec2f(::gp_Vec2f& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Vec2f>( &nativeInstance, false )
    {}

    property ::gp_Vec2f* NativeInstance
    {
        ::gp_Vec2f* get()
        {
            return static_cast<::gp_Vec2f*>(_NativeInstance);
        }
    }

public:
    gp_Vec2f(float theXY);
    gp_Vec2f(float theX, float theY);
    static int Length();
    void SetValues(float theX, float theY);
    float x();
    float y();
    Macad::Occt::gp_Vec2f^ xy();
    Macad::Occt::gp_Vec2f^ yx();
    bool IsEqual(Macad::Occt::gp_Vec2f^ theOther);
    float GetData();
    float ChangeData();
    void Multiply(float theFactor);
    Macad::Occt::gp_Vec2f^ Multiplied(float theFactor);
    Macad::Occt::gp_Vec2f^ cwiseMin(Macad::Occt::gp_Vec2f^ theVec);
    Macad::Occt::gp_Vec2f^ cwiseMax(Macad::Occt::gp_Vec2f^ theVec);
    Macad::Occt::gp_Vec2f^ cwiseAbs();
    float maxComp();
    float minComp();
    float Dot(Macad::Occt::gp_Vec2f^ theOther);
    float Modulus();
    float SquareModulus();
    static Macad::Occt::gp_Vec2f^ DX();
    static Macad::Occt::gp_Vec2f^ DY();
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class gp_Vec2f

//---------------------------------------------------------------------
//  Class  gp_Vec3f
//---------------------------------------------------------------------
public ref class gp_Vec3f sealed
    : public Macad::Occt::BaseClass<::gp_Vec3f>
{

#ifdef Include_gp_Vec3f_h
public:
    Include_gp_Vec3f_h
#endif

public:
    gp_Vec3f(::gp_Vec3f* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Vec3f>( nativeInstance, true )
    {}

    gp_Vec3f(::gp_Vec3f& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Vec3f>( &nativeInstance, false )
    {}

    property ::gp_Vec3f* NativeInstance
    {
        ::gp_Vec3f* get()
        {
            return static_cast<::gp_Vec3f*>(_NativeInstance);
        }
    }

public:
    gp_Vec3f();
    gp_Vec3f(float theValue);
    gp_Vec3f(float theX, float theY, float theZ);
    gp_Vec3f(Macad::Occt::gp_Vec2f^ theVec2, float theZ);
    gp_Vec3f(Macad::Occt::gp_Vec2f^ theVec2);
    static int Length();
    void SetValues(float theX, float theY, float theZ);
    float x();
    float r();
    float y();
    float g();
    float z();
    float b();
    Macad::Occt::gp_Vec2f^ xy();
    Macad::Occt::gp_Vec2f^ yx();
    Macad::Occt::gp_Vec2f^ xz();
    Macad::Occt::gp_Vec2f^ zx();
    Macad::Occt::gp_Vec2f^ yz();
    Macad::Occt::gp_Vec2f^ zy();
    Macad::Occt::gp_Vec3f^ xyz();
    Macad::Occt::gp_Vec3f^ xzy();
    Macad::Occt::gp_Vec3f^ yxz();
    Macad::Occt::gp_Vec3f^ yzx();
    Macad::Occt::gp_Vec3f^ zyx();
    Macad::Occt::gp_Vec3f^ zxy();
    bool IsEqual(Macad::Occt::gp_Vec3f^ theOther);
    float GetData();
    float ChangeData();
    void Multiply(float theFactor);
    Macad::Occt::gp_Vec3f^ Multiplied(float theFactor);
    Macad::Occt::gp_Vec3f^ cwiseMin(Macad::Occt::gp_Vec3f^ theVec);
    Macad::Occt::gp_Vec3f^ cwiseMax(Macad::Occt::gp_Vec3f^ theVec);
    Macad::Occt::gp_Vec3f^ cwiseAbs();
    float maxComp();
    float minComp();
    float Dot(Macad::Occt::gp_Vec3f^ theOther);
    float Modulus();
    float SquareModulus();
    void Normalize();
    Macad::Occt::gp_Vec3f^ Normalized();
    static Macad::Occt::gp_Vec3f^ Cross(Macad::Occt::gp_Vec3f^ theVec1, Macad::Occt::gp_Vec3f^ theVec2);
    static Macad::Occt::gp_Vec3f^ GetLERP(Macad::Occt::gp_Vec3f^ theFrom, Macad::Occt::gp_Vec3f^ theTo, float theT);
    static Macad::Occt::gp_Vec3f^ DX();
    static Macad::Occt::gp_Vec3f^ DY();
    static Macad::Occt::gp_Vec3f^ DZ();
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    /* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, int theDepth, ) */
    bool Equals(System::Object^ obj) override;
}; // class gp_Vec3f

//---------------------------------------------------------------------
//  Class  gp_VectorWithNullMagnitude
//---------------------------------------------------------------------
public ref class gp_VectorWithNullMagnitude sealed
    : public Macad::Occt::Standard_DomainError
{

#ifdef Include_gp_VectorWithNullMagnitude_h
public:
    Include_gp_VectorWithNullMagnitude_h
#endif

public:
    gp_VectorWithNullMagnitude(::gp_VectorWithNullMagnitude* nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    gp_VectorWithNullMagnitude(::gp_VectorWithNullMagnitude& nativeInstance)
        : Macad::Occt::Standard_DomainError( nativeInstance )
    {}

    property ::gp_VectorWithNullMagnitude* NativeInstance
    {
        ::gp_VectorWithNullMagnitude* get()
        {
            return static_cast<::gp_VectorWithNullMagnitude*>(_NativeInstance);
        }
    }

public:
    gp_VectorWithNullMagnitude();
    gp_VectorWithNullMagnitude(System::String^ theMessage);
    gp_VectorWithNullMagnitude(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::gp_VectorWithNullMagnitude^ NewInstance(System::String^ theMessage);
    static Macad::Occt::gp_VectorWithNullMagnitude^ NewInstance();
    static Macad::Occt::gp_VectorWithNullMagnitude^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::gp_VectorWithNullMagnitude^ CreateDowncasted(::gp_VectorWithNullMagnitude* instance);
}; // class gp_VectorWithNullMagnitude

//---------------------------------------------------------------------
//  Class  gp_Circ
//---------------------------------------------------------------------
/// <summary>
/// Describes a circle in 3D space.
/// A circle is defined by its radius and positioned in space
/// with a coordinate system (a gp_Ax2 object) as follows:
/// -   the origin of the coordinate system is the center of the circle, and
/// -   the origin, "X Direction" and "Y Direction" of the
/// coordinate system define the plane of the circle.
/// This positioning coordinate system is the "local
/// coordinate system" of the circle. Its "main Direction"
/// gives the normal vector to the plane of the circle. The
/// "main Axis" of the coordinate system is referred to as
/// the "Axis" of the circle.
/// Note: when a gp_Circ circle is converted into a
/// Geom_Circle circle, some implicit properties of the
/// circle are used explicitly:
/// -   the "main Direction" of the local coordinate system
/// gives an implicit orientation to the circle (and defines
/// its trigonometric sense),
/// -   this orientation corresponds to the direction in
/// which parameter values increase,
/// -   the starting point for parameterization is that of the
/// "X Axis" of the local coordinate system (i.e. the "X Axis" of the circle).
/// See Also
/// gce_MakeCirc which provides functions for more complex circle constructions
/// Geom_Circle which provides additional functions for
/// constructing circles and works, in particular, with the
/// parametric equations of circles
/// </summary>
public ref class gp_Circ sealed
    : public Macad::Occt::BaseClass<::gp_Circ>
{

#ifdef Include_gp_Circ_h
public:
    Include_gp_Circ_h
#endif

public:
    gp_Circ(::gp_Circ* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Circ>( nativeInstance, true )
    {}

    gp_Circ(::gp_Circ& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Circ>( &nativeInstance, false )
    {}

    property ::gp_Circ* NativeInstance
    {
        ::gp_Circ* get()
        {
            return static_cast<::gp_Circ*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an indefinite circle.
    /// </summary>
    gp_Circ();
    /// <summary>
    /// A2 locates the circle and gives its orientation in 3D space.
    /// Warnings :
    /// It is not forbidden to create a circle with theRadius = 0.0  Raises ConstructionError if
    /// theRadius < 0.0
    /// </summary>
    gp_Circ(Macad::Occt::Ax2 theA2, double theRadius);
    /// <summary>
    /// Changes the main axis of the circle. It is the axis
    /// perpendicular to the plane of the circle.
    /// Raises ConstructionError if the direction of theA1
    /// is parallel to the "XAxis" of the circle.
    /// </summary>
    void SetAxis(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Changes the "Location" point (center) of the circle.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt theP);
    /// <summary>
    /// Changes the position of the circle.
    /// </summary>
    void SetPosition(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Modifies the radius of this circle.
    /// Warning. This class does not prevent the creation of a circle where theRadius is null.
    /// Exceptions
    /// Standard_ConstructionError if theRadius is negative.
    /// </summary>
    void SetRadius(double theRadius);
    /// <summary>
    /// Computes the area of the circle.
    /// </summary>
    double Area();
    /// <summary>
    /// Returns the main axis of the circle.
    /// It is the axis perpendicular to the plane of the circle,
    /// passing through the "Location" point (center) of the circle.
    /// </summary>
    Macad::Occt::Ax1 Axis();
    /// <summary>
    /// Computes the circumference of the circle.
    /// </summary>
    double Length();
    /// <summary>
    /// Returns the center of the circle. It is the
    /// "Location" point of the local coordinate system
    /// of the circle
    /// </summary>
    Macad::Occt::Pnt Location();
    /// <summary>
    /// Returns the position of the circle.
    /// It is the local coordinate system of the circle.
    /// </summary>
    Macad::Occt::Ax2 Position();
    /// <summary>
    /// Returns the radius of this circle.
    /// </summary>
    double Radius();
    /// <summary>
    /// Returns the "XAxis" of the circle.
    /// This axis is perpendicular to the axis of the conic.
    /// This axis and the "Yaxis" define the plane of the conic.
    /// </summary>
    Macad::Occt::Ax1 XAxis();
    /// <summary>
    /// Returns the "YAxis" of the circle.
    /// This axis and the "Xaxis" define the plane of the conic.
    /// The "YAxis" is perpendicular to the "Xaxis".
    /// </summary>
    Macad::Occt::Ax1 YAxis();
    /// <summary>
    /// Computes the minimum of distance between the point theP and
    /// any point on the circumference of the circle.
    /// </summary>
    double Distance(Macad::Occt::Pnt theP);
    /// <summary>
    /// Computes the square distance between <me> and the point theP.
    /// </summary>
    double SquareDistance(Macad::Occt::Pnt theP);
    /// <summary>
    /// Returns True if the point theP is on the circumference.
    /// The distance between <me> and <theP> must be lower or
    /// equal to theLinearTolerance.
    /// </summary>
    bool Contains(Macad::Occt::Pnt theP, double theLinearTolerance);
    void Mirror(Macad::Occt::Pnt theP);
    /// <summary>
    /// Performs the symmetrical transformation of a circle
    /// with respect to the point theP which is the center of the
    /// symmetry.
    /// </summary>
    Macad::Occt::gp_Circ^ Mirrored(Macad::Occt::Pnt theP);
    void Mirror(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Performs the symmetrical transformation of a circle with
    /// respect to an axis placement which is the axis of the
    /// symmetry.
    /// </summary>
    Macad::Occt::gp_Circ^ Mirrored(Macad::Occt::Ax1 theA1);
    void Mirror(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Performs the symmetrical transformation of a circle with respect
    /// to a plane. The axis placement theA2 locates the plane of the
    /// of the symmetry : (Location, XDirection, YDirection).
    /// </summary>
    Macad::Occt::gp_Circ^ Mirrored(Macad::Occt::Ax2 theA2);
    void Rotate(Macad::Occt::Ax1 theA1, double theAng);
    /// <summary>
    /// Rotates a circle. theA1 is the axis of the rotation.
    /// theAng is the angular value of the rotation in radians.
    /// </summary>
    Macad::Occt::gp_Circ^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
    void Scale(Macad::Occt::Pnt theP, double theS);
    /// <summary>
    /// Scales a circle. theS is the scaling value.
    /// Warnings :
    /// If theS is negative the radius stay positive but
    /// the "XAxis" and the "YAxis" are  reversed as for
    /// an ellipse.
    /// </summary>
    Macad::Occt::gp_Circ^ Scaled(Macad::Occt::Pnt theP, double theS);
    void Transform(Macad::Occt::Trsf theT);
    /// <summary>
    /// Transforms a circle with the transformation theT from class Trsf.
    /// </summary>
    Macad::Occt::gp_Circ^ Transformed(Macad::Occt::Trsf theT);
    void Translate(Macad::Occt::Vec theV);
    /// <summary>
    /// Translates a circle in the direction of the vector theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Circ^ Translated(Macad::Occt::Vec theV);
    void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
    /// <summary>
    /// Translates a circle from the point theP1 to the point theP2.
    /// </summary>
    Macad::Occt::gp_Circ^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Circ

//---------------------------------------------------------------------
//  Class  gp_Circ2d
//---------------------------------------------------------------------
/// <summary>
/// Describes a circle in the plane (2D space).
/// A circle is defined by its radius and positioned in the
/// plane with a coordinate system (a gp_Ax22d object) as follows:
/// -   the origin of the coordinate system is the center of the circle, and
/// -   the orientation (direct or indirect) of the coordinate
/// system gives an implicit orientation to the circle (and
/// defines its trigonometric sense).
/// This positioning coordinate system is the "local
/// coordinate system" of the circle.
/// Note: when a gp_Circ2d circle is converted into a
/// Geom2d_Circle circle, some implicit properties of the
/// circle are used explicitly:
/// -   the implicit orientation corresponds to the direction in
/// which parameter values increase,
/// -   the starting point for parameterization is that of the "X
/// Axis" of the local coordinate system (i.e. the "X Axis" of the circle).
/// See Also
/// GccAna and Geom2dGcc packages which provide
/// functions for constructing circles defined by geometric constraints
/// gce_MakeCirc2d which provides functions for more
/// complex circle constructions
/// Geom2d_Circle which provides additional functions for
/// constructing circles and works, with the parametric
/// equations of circles in particular  gp_Ax22d
/// </summary>
public ref class gp_Circ2d sealed
    : public Macad::Occt::BaseClass<::gp_Circ2d>
{

#ifdef Include_gp_Circ2d_h
public:
    Include_gp_Circ2d_h
#endif

public:
    gp_Circ2d(::gp_Circ2d* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Circ2d>( nativeInstance, true )
    {}

    gp_Circ2d(::gp_Circ2d& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Circ2d>( &nativeInstance, false )
    {}

    property ::gp_Circ2d* NativeInstance
    {
        ::gp_Circ2d* get()
        {
            return static_cast<::gp_Circ2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// creates an indefinite circle.
    /// </summary>
    gp_Circ2d();
    /// <summary>
    /// The location point of theXAxis is the center of the circle.
    /// Warnings :
    /// It is not forbidden to create a circle with theRadius = 0.0   Raises ConstructionError if
    /// theRadius < 0.0. Raised if theRadius < 0.0.
    /// </summary>
    gp_Circ2d(Macad::Occt::Ax2d theXAxis, double theRadius, bool theIsSense);
    /// <summary>
    /// The location point of theXAxis is the center of the circle.
    /// Warnings :
    /// It is not forbidden to create a circle with theRadius = 0.0   Raises ConstructionError if
    /// theRadius < 0.0. Raised if theRadius < 0.0.
    /// </summary>
    gp_Circ2d(Macad::Occt::Ax2d theXAxis, double theRadius);
    /// <summary>
    /// theAxis defines the Xaxis and Yaxis of the circle which defines
    /// the origin and the sense of parametrization.
    /// The location point of theAxis is the center of the circle.
    /// Warnings :
    /// It is not forbidden to create a circle with theRadius = 0.0 Raises ConstructionError if
    /// theRadius < 0.0. Raised if theRadius < 0.0.
    /// </summary>
    gp_Circ2d(Macad::Occt::Ax22d theAxis, double theRadius);
    /// <summary>
    /// Changes the location point (center) of the circle.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Changes the X axis of the circle.
    /// </summary>
    void SetXAxis(Macad::Occt::Ax2d theA);
    /// <summary>
    /// Changes the X axis of the circle.
    /// </summary>
    void SetAxis(Macad::Occt::Ax22d theA);
    /// <summary>
    /// Changes the Y axis of the circle.
    /// </summary>
    void SetYAxis(Macad::Occt::Ax2d theA);
    /// <summary>
    /// Modifies the radius of this circle.
    /// This class does not prevent the creation of a circle where
    /// theRadius is null.
    /// Exceptions
    /// Standard_ConstructionError if theRadius is negative.
    /// </summary>
    void SetRadius(double theRadius);
    /// <summary>
    /// Computes the area of the circle.
    /// </summary>
    double Area();
    /// <summary>
    /// Returns the normalized coefficients from the implicit equation
    /// of the circle :
    /// theA * (X**2) + theB * (Y**2) + 2*theC*(X*Y) + 2*theD*X + 2*theE*Y + theF = 0.0
    /// </summary>
    void Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF);
    /// <summary>
    /// Does <me> contain theP ?
    /// Returns True if the distance between theP and any point on
    /// the circumference of the circle is lower of equal to
    /// <theLinearTolerance>.
    /// </summary>
    bool Contains(Macad::Occt::Pnt2d theP, double theLinearTolerance);
    /// <summary>
    /// Computes the minimum of distance between the point theP and any
    /// point on the circumference of the circle.
    /// </summary>
    double Distance(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Computes the square distance between <me> and the point theP.
    /// </summary>
    double SquareDistance(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// computes the circumference of the circle.
    /// </summary>
    double Length();
    /// <summary>
    /// Returns the location point (center) of the circle.
    /// </summary>
    Macad::Occt::Pnt2d Location();
    /// <summary>
    /// Returns the radius value of the circle.
    /// </summary>
    double Radius();
    /// <summary>
    /// returns the position of the circle.
    /// </summary>
    Macad::Occt::Ax22d Axis();
    /// <summary>
    /// returns the position of the circle. Idem Axis(me).
    /// </summary>
    Macad::Occt::Ax22d Position();
    /// <summary>
    /// returns the X axis of the circle.
    /// </summary>
    Macad::Occt::Ax2d XAxis();
    /// <summary>
    /// Returns the Y axis of the circle.
    /// Reverses the direction of the circle.
    /// </summary>
    Macad::Occt::Ax2d YAxis();
    /// <summary>
    /// Reverses the orientation of the local coordinate system
    /// of this circle (the "Y Direction" is reversed) and therefore
    /// changes the implicit orientation of this circle.
    /// Reverse assigns the result to this circle,
    /// </summary>
    void Reverse();
    /// <summary>
    /// Reverses the orientation of the local coordinate system
    /// of this circle (the "Y Direction" is reversed) and therefore
    /// changes the implicit orientation of this circle.
    /// Reversed creates a new circle.
    /// </summary>
    Macad::Occt::gp_Circ2d^ Reversed();
    /// <summary>
    /// Returns true if the local coordinate system is direct
    /// and false in the other case.
    /// </summary>
    bool IsDirect();
    void Mirror(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Performs the symmetrical transformation of a circle with respect
    /// to the point theP which is the center of the symmetry
    /// </summary>
    Macad::Occt::gp_Circ2d^ Mirrored(Macad::Occt::Pnt2d theP);
    void Mirror(Macad::Occt::Ax2d theA);
    /// <summary>
    /// Performs the symmetrical transformation of a circle with respect
    /// to an axis placement which is the axis of the symmetry.
    /// </summary>
    Macad::Occt::gp_Circ2d^ Mirrored(Macad::Occt::Ax2d theA);
    void Rotate(Macad::Occt::Pnt2d theP, double theAng);
    /// <summary>
    /// Rotates a circle. theP is the center of the rotation.
    /// Ang is the angular value of the rotation in radians.
    /// </summary>
    Macad::Occt::gp_Circ2d^ Rotated(Macad::Occt::Pnt2d theP, double theAng);
    void Scale(Macad::Occt::Pnt2d theP, double theS);
    /// <summary>
    /// Scales a circle. theS is the scaling value.
    /// Warnings :
    /// If theS is negative the radius stay positive but
    /// the "XAxis" and the "YAxis" are  reversed as for
    /// an ellipse.
    /// </summary>
    Macad::Occt::gp_Circ2d^ Scaled(Macad::Occt::Pnt2d theP, double theS);
    void Transform(Macad::Occt::Trsf2d theT);
    /// <summary>
    /// Transforms a circle with the transformation theT from class Trsf2d.
    /// </summary>
    Macad::Occt::gp_Circ2d^ Transformed(Macad::Occt::Trsf2d theT);
    void Translate(Macad::Occt::Vec2d theV);
    /// <summary>
    /// Translates a circle in the direction of the vector theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Circ2d^ Translated(Macad::Occt::Vec2d theV);
    void Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
    /// <summary>
    /// Translates a circle from the point theP1 to the point theP2.
    /// </summary>
    Macad::Occt::gp_Circ2d^ Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
}; // class gp_Circ2d

//---------------------------------------------------------------------
//  Class  gp_Cone
//---------------------------------------------------------------------
/// <summary>
/// Defines an infinite conical surface.
/// A cone is defined by its half-angle (can be negative) at the apex and
/// positioned in space with a coordinate system (a gp_Ax3
/// object) and a "reference radius" where:
/// -   the "main Axis" of the coordinate system is the axis of   revolution of the cone,
/// -   the plane defined by the origin, the "X Direction" and
/// the "Y Direction" of the coordinate system is the
/// reference plane of the cone; the intersection of the
/// cone with this reference plane is a circle of radius
/// equal to the reference radius,
/// if the half-angle is positive, the apex of the cone is on
/// the negative side of the "main Axis" of the coordinate
/// system. If the half-angle is negative, the apex is on the   positive side.
/// This coordinate system is the "local coordinate system" of the cone.
/// Note: when a gp_Cone cone is converted into a
/// Geom_ConicalSurface cone, some implicit properties of
/// its local coordinate system are used explicitly:
/// -   its origin, "X Direction", "Y Direction" and "main
/// Direction" are used directly to define the parametric
/// directions on the cone and the origin of the parameters,
/// -   its implicit orientation (right-handed or left-handed)
/// gives the orientation (direct or indirect) of the
/// Geom_ConicalSurface cone.
/// See Also
/// gce_MakeCone which provides functions for more
/// complex cone constructions
/// Geom_ConicalSurface which provides additional
/// functions for constructing cones and works, in particular,
/// with the parametric equations of cones gp_Ax3
/// </summary>
public ref class gp_Cone sealed
    : public Macad::Occt::BaseClass<::gp_Cone>
{

#ifdef Include_gp_Cone_h
public:
    Include_gp_Cone_h
#endif

public:
    gp_Cone(::gp_Cone* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Cone>( nativeInstance, true )
    {}

    gp_Cone(::gp_Cone& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Cone>( &nativeInstance, false )
    {}

    property ::gp_Cone* NativeInstance
    {
        ::gp_Cone* get()
        {
            return static_cast<::gp_Cone*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an indefinite Cone.
    /// </summary>
    gp_Cone();
    /// <summary>
    /// Creates an infinite conical surface. theA3 locates the cone
    /// in the space and defines the reference plane of the surface.
    /// Ang is the conical surface semi-angle. Its absolute value is in range
    /// ]0, PI/2[.
    /// theRadius is the radius of the circle in the reference plane of
    /// the cone.
    /// theRaises ConstructionError
    /// * if theRadius is lower than 0.0
    /// * Abs(theAng) < Resolution from gp  or Abs(theAng) >= (PI/2) - Resolution.
    /// </summary>
    gp_Cone(Macad::Occt::Ax3 theA3, double theAng, double theRadius);
    /// <summary>
    /// Changes the symmetry axis of the cone.  Raises ConstructionError
    /// the direction of theA1 is parallel to the "XDirection"
    /// of the coordinate system of the cone.
    /// </summary>
    void SetAxis(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Changes the location of the cone.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt theLoc);
    /// <summary>
    /// Changes the local coordinate system of the cone.
    /// This coordinate system defines the reference plane of the cone.
    /// </summary>
    void SetPosition(Macad::Occt::Ax3 theA3);
    /// <summary>
    /// Changes the radius of the cone in the reference plane of
    /// the cone.
    /// Raised if theR < 0.0
    /// </summary>
    void SetRadius(double theR);
    /// <summary>
    /// Changes the semi-angle of the cone.
    /// Semi-angle can be negative. Its absolute value
    /// Abs(theAng) is in range ]0,PI/2[.
    /// Raises ConstructionError if Abs(theAng) < Resolution from gp or Abs(theAng) >= PI/2 -
    /// Resolution
    /// </summary>
    void SetSemiAngle(double theAng);
    /// <summary>
    /// Computes the cone's top. The Apex of the cone is on the
    /// negative side of the symmetry axis of the cone.
    /// </summary>
    Macad::Occt::Pnt Apex();
    /// <summary>
    /// Reverses the   U   parametrization of   the  cone
    /// reversing the YAxis.
    /// </summary>
    void UReverse();
    /// <summary>
    /// Reverses the   V   parametrization of   the  cone  reversing the ZAxis.
    /// </summary>
    void VReverse();
    /// <summary>
    /// Returns true if the local coordinate system of this cone is right-handed.
    /// </summary>
    bool Direct();
    /// <summary>
    /// returns the symmetry axis of the cone.
    /// </summary>
    Macad::Occt::Ax1 Axis();
    /// <summary>
    /// Computes the coefficients of the implicit equation of the quadric
    /// in the absolute cartesian coordinates system :
    /// theA1.X**2 + theA2.Y**2 + theA3.Z**2 + 2.(theB1.X.Y + theB2.X.Z + theB3.Y.Z) +
    /// 2.(theC1.X + theC2.Y + theC3.Z) + theD = 0.0
    /// </summary>
    void Coefficients(double% theA1, double% theA2, double% theA3, double% theB1, double% theB2, double% theB3, double% theC1, double% theC2, double% theC3, double% theD);
    /// <summary>
    /// returns the "Location" point of the cone.
    /// </summary>
    Macad::Occt::Pnt Location();
    /// <summary>
    /// Returns the local coordinates system of the cone.
    /// </summary>
    Macad::Occt::Ax3 Position();
    /// <summary>
    /// Returns the radius of the cone in the reference plane.
    /// </summary>
    double RefRadius();
    /// <summary>
    /// Returns the half-angle at the apex of this cone.
    /// Attention! Semi-angle can be negative.
    /// </summary>
    double SemiAngle();
    /// <summary>
    /// Returns the XAxis of the reference plane.
    /// </summary>
    Macad::Occt::Ax1 XAxis();
    /// <summary>
    /// Returns the YAxis of the reference plane.
    /// </summary>
    Macad::Occt::Ax1 YAxis();
    void Mirror(Macad::Occt::Pnt theP);
    /// <summary>
    /// Performs the symmetrical transformation of a cone
    /// with respect to the point theP which is the center of the
    /// symmetry.
    /// </summary>
    Macad::Occt::gp_Cone^ Mirrored(Macad::Occt::Pnt theP);
    void Mirror(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Performs the symmetrical transformation of a cone with
    /// respect to an axis placement which is the axis of the
    /// symmetry.
    /// </summary>
    Macad::Occt::gp_Cone^ Mirrored(Macad::Occt::Ax1 theA1);
    void Mirror(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Performs the symmetrical transformation of a cone with respect
    /// to a plane. The axis placement theA2 locates the plane of the
    /// of the symmetry : (Location, XDirection, YDirection).
    /// </summary>
    Macad::Occt::gp_Cone^ Mirrored(Macad::Occt::Ax2 theA2);
    void Rotate(Macad::Occt::Ax1 theA1, double theAng);
    /// <summary>
    /// Rotates a cone. theA1 is the axis of the rotation.
    /// Ang is the angular value of the rotation in radians.
    /// </summary>
    Macad::Occt::gp_Cone^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
    void Scale(Macad::Occt::Pnt theP, double theS);
    /// <summary>
    /// Scales a cone. theS is the scaling value.
    /// The absolute value of theS is used to scale the cone
    /// </summary>
    Macad::Occt::gp_Cone^ Scaled(Macad::Occt::Pnt theP, double theS);
    void Transform(Macad::Occt::Trsf theT);
    /// <summary>
    /// Transforms a cone with the transformation theT from class Trsf.
    /// </summary>
    Macad::Occt::gp_Cone^ Transformed(Macad::Occt::Trsf theT);
    void Translate(Macad::Occt::Vec theV);
    /// <summary>
    /// Translates a cone in the direction of the vector theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Cone^ Translated(Macad::Occt::Vec theV);
    void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
    /// <summary>
    /// Translates a cone from the point P1 to the point P2.
    /// </summary>
    Macad::Occt::gp_Cone^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Cone

//---------------------------------------------------------------------
//  Class  gp_Cylinder
//---------------------------------------------------------------------
/// <summary>
/// Describes an infinite cylindrical surface.
/// A cylinder is defined by its radius and positioned in space
/// with a coordinate system (a gp_Ax3 object), the "main
/// Axis" of which is the axis of the cylinder. This coordinate
/// system is the "local coordinate system" of the cylinder.
/// Note: when a gp_Cylinder cylinder is converted into a
/// Geom_CylindricalSurface cylinder, some implicit
/// properties of its local coordinate system are used explicitly:
/// -   its origin, "X Direction", "Y Direction" and "main
/// Direction" are used directly to define the parametric
/// directions on the cylinder and the origin of the parameters,
/// -   its implicit orientation (right-handed or left-handed)
/// gives an orientation (direct or indirect) to the
/// Geom_CylindricalSurface cylinder.
/// See Also
/// gce_MakeCylinder which provides functions for more
/// complex cylinder constructions
/// Geom_CylindricalSurface which provides additional
/// functions for constructing cylinders and works, in
/// particular, with the parametric equations of cylinders gp_Ax3
/// </summary>
public ref class gp_Cylinder sealed
    : public Macad::Occt::BaseClass<::gp_Cylinder>
{

#ifdef Include_gp_Cylinder_h
public:
    Include_gp_Cylinder_h
#endif

public:
    gp_Cylinder(::gp_Cylinder* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Cylinder>( nativeInstance, true )
    {}

    gp_Cylinder(::gp_Cylinder& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Cylinder>( &nativeInstance, false )
    {}

    property ::gp_Cylinder* NativeInstance
    {
        ::gp_Cylinder* get()
        {
            return static_cast<::gp_Cylinder*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a indefinite cylinder.
    /// </summary>
    gp_Cylinder();
    /// <summary>
    /// Creates a cylinder of radius Radius, whose axis is the "main
    /// Axis" of theA3. theA3 is the local coordinate system of the cylinder.   Raises
    /// ConstructionErrord if theRadius < 0.0
    /// </summary>
    gp_Cylinder(Macad::Occt::Ax3 theA3, double theRadius);
    /// <summary>
    /// Changes the symmetry axis of the cylinder. Raises ConstructionError if the direction of theA1
    /// is parallel to the "XDirection" of the coordinate system of the cylinder.
    /// </summary>
    void SetAxis(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Changes the location of the surface.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt theLoc);
    /// <summary>
    /// Change the local coordinate system of the surface.
    /// </summary>
    void SetPosition(Macad::Occt::Ax3 theA3);
    /// <summary>
    /// Modifies the radius of this cylinder.
    /// Exceptions
    /// Standard_ConstructionError if theR is negative.
    /// </summary>
    void SetRadius(double theR);
    /// <summary>
    /// Reverses the   U   parametrization of   the cylinder
    /// reversing the YAxis.
    /// </summary>
    void UReverse();
    /// <summary>
    /// Reverses the   V   parametrization of   the  plane
    /// reversing the Axis.
    /// </summary>
    void VReverse();
    /// <summary>
    /// Returns true if the local coordinate system of this cylinder is right-handed.
    /// </summary>
    bool Direct();
    /// <summary>
    /// Returns the symmetry axis of the cylinder.
    /// </summary>
    Macad::Occt::Ax1 Axis();
    /// <summary>
    /// Computes the coefficients of the implicit equation of the quadric
    /// in the absolute cartesian coordinate system :
    /// theA1.X**2 + theA2.Y**2 + theA3.Z**2 + 2.(theB1.X.Y + theB2.X.Z + theB3.Y.Z) +
    /// 2.(theC1.X + theC2.Y + theC3.Z) + theD = 0.0
    /// </summary>
    void Coefficients(double% theA1, double% theA2, double% theA3, double% theB1, double% theB2, double% theB3, double% theC1, double% theC2, double% theC3, double% theD);
    /// <summary>
    /// Returns the "Location" point of the cylinder.
    /// </summary>
    Macad::Occt::Pnt Location();
    /// <summary>
    /// Returns the local coordinate system of the cylinder.
    /// </summary>
    Macad::Occt::Ax3 Position();
    /// <summary>
    /// Returns the radius of the cylinder.
    /// </summary>
    double Radius();
    /// <summary>
    /// Returns the axis X of the cylinder.
    /// </summary>
    Macad::Occt::Ax1 XAxis();
    /// <summary>
    /// Returns the axis Y of the cylinder.
    /// </summary>
    Macad::Occt::Ax1 YAxis();
    void Mirror(Macad::Occt::Pnt theP);
    /// <summary>
    /// Performs the symmetrical transformation of a cylinder
    /// with respect to the point theP which is the center of the
    /// symmetry.
    /// </summary>
    Macad::Occt::gp_Cylinder^ Mirrored(Macad::Occt::Pnt theP);
    void Mirror(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Performs the symmetrical transformation of a cylinder with
    /// respect to an axis placement which is the axis of the
    /// symmetry.
    /// </summary>
    Macad::Occt::gp_Cylinder^ Mirrored(Macad::Occt::Ax1 theA1);
    void Mirror(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Performs the symmetrical transformation of a cylinder with respect
    /// to a plane. The axis placement theA2 locates the plane of the
    /// of the symmetry : (Location, XDirection, YDirection).
    /// </summary>
    Macad::Occt::gp_Cylinder^ Mirrored(Macad::Occt::Ax2 theA2);
    void Rotate(Macad::Occt::Ax1 theA1, double theAng);
    /// <summary>
    /// Rotates a cylinder. theA1 is the axis of the rotation.
    /// theAng is the angular value of the rotation in radians.
    /// </summary>
    Macad::Occt::gp_Cylinder^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
    void Scale(Macad::Occt::Pnt theP, double theS);
    /// <summary>
    /// Scales a cylinder. theS is the scaling value.
    /// The absolute value of theS is used to scale the cylinder
    /// </summary>
    Macad::Occt::gp_Cylinder^ Scaled(Macad::Occt::Pnt theP, double theS);
    void Transform(Macad::Occt::Trsf theT);
    /// <summary>
    /// Transforms a cylinder with the transformation theT from class Trsf.
    /// </summary>
    Macad::Occt::gp_Cylinder^ Transformed(Macad::Occt::Trsf theT);
    void Translate(Macad::Occt::Vec theV);
    /// <summary>
    /// Translates a cylinder in the direction of the vector theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Cylinder^ Translated(Macad::Occt::Vec theV);
    void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
    /// <summary>
    /// Translates a cylinder from the point theP1 to the point theP2.
    /// </summary>
    Macad::Occt::gp_Cylinder^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Cylinder

//---------------------------------------------------------------------
//  Class  gp_Elips
//---------------------------------------------------------------------
/// <summary>
/// Describes an ellipse in 3D space.
/// An ellipse is defined by its major and minor radii and
/// positioned in space with a coordinate system (a gp_Ax2 object) as follows:
/// -   the origin of the coordinate system is the center of the ellipse,
/// -   its "X Direction" defines the major axis of the ellipse, and
/// - its "Y Direction" defines the minor axis of the ellipse.
/// Together, the origin, "X Direction" and "Y Direction" of
/// this coordinate system define the plane of the ellipse.
/// This coordinate system is the "local coordinate system"
/// of the ellipse. In this coordinate system, the equation of
/// the ellipse is:
/// </summary>
/// @code
/// X*X / (MajorRadius**2) + Y*Y / (MinorRadius**2) = 1.0
/// @endcode
/// The "main Direction" of the local coordinate system gives
/// the normal vector to the plane of the ellipse. This vector
/// gives an implicit orientation to the ellipse (definition of the
/// trigonometric sense). We refer to the "main Axis" of the
/// local coordinate system as the "Axis" of the ellipse.
/// See Also
/// gce_MakeElips which provides functions for more
/// complex ellipse constructions
/// Geom_Ellipse which provides additional functions for
/// constructing ellipses and works, in particular, with the
/// parametric equations of ellipses
public ref class gp_Elips sealed
    : public Macad::Occt::BaseClass<::gp_Elips>
{

#ifdef Include_gp_Elips_h
public:
    Include_gp_Elips_h
#endif

public:
    gp_Elips(::gp_Elips* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Elips>( nativeInstance, true )
    {}

    gp_Elips(::gp_Elips& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Elips>( &nativeInstance, false )
    {}

    property ::gp_Elips* NativeInstance
    {
        ::gp_Elips* get()
        {
            return static_cast<::gp_Elips*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an indefinite ellipse.
    /// </summary>
    gp_Elips();
    /// <summary>
    /// The major radius of the ellipse is on the "XAxis" and the
    /// minor radius is on the "YAxis" of the ellipse. The "XAxis"
    /// is defined with the "XDirection" of theA2 and the "YAxis" is
    /// defined with the "YDirection" of theA2.
    /// Warnings :
    /// It is not forbidden to create an ellipse with theMajorRadius =
    /// theMinorRadius.
    /// Raises ConstructionError if theMajorRadius < theMinorRadius or theMinorRadius < 0.
    /// </summary>
    gp_Elips(Macad::Occt::Ax2 theA2, double theMajorRadius, double theMinorRadius);
    /// <summary>
    /// Changes the axis normal to the plane of the ellipse.
    /// It modifies the definition of this plane.
    /// The "XAxis" and the "YAxis" are recomputed.
    /// The local coordinate system is redefined so that:
    /// -   its origin and "main Direction" become those of the
    /// axis theA1 (the "X Direction" and "Y Direction" are then
    /// recomputed in the same way as for any gp_Ax2), or
    /// Raises ConstructionError if the direction of theA1
    /// is parallel to the direction of the "XAxis" of the ellipse.
    /// </summary>
    void SetAxis(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Modifies this ellipse, by redefining its local coordinate
    /// so that its origin becomes theP.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt theP);
    /// <summary>
    /// The major radius of the ellipse is on the "XAxis" (major axis)
    /// of the ellipse.
    /// Raises ConstructionError if theMajorRadius < MinorRadius.
    /// </summary>
    void SetMajorRadius(double theMajorRadius);
    /// <summary>
    /// The minor radius of the ellipse is on the "YAxis" (minor axis)
    /// of the ellipse.
    /// Raises ConstructionError if theMinorRadius > MajorRadius or MinorRadius < 0.
    /// </summary>
    void SetMinorRadius(double theMinorRadius);
    /// <summary>
    /// Modifies this ellipse, by redefining its local coordinate
    /// so that it becomes theA2.
    /// </summary>
    void SetPosition(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Computes the area of the Ellipse.
    /// </summary>
    double Area();
    /// <summary>
    /// Computes the axis normal to the plane of the ellipse.
    /// </summary>
    Macad::Occt::Ax1 Axis();
    /// <summary>
    /// Computes the first or second directrix of this ellipse.
    /// These are the lines, in the plane of the ellipse, normal to
    /// the major axis, at a distance equal to
    /// MajorRadius/e from the center of the ellipse, where
    /// e is the eccentricity of the ellipse.
    /// The first directrix (Directrix1) is on the positive side of
    /// the major axis. The second directrix (Directrix2) is on
    /// the negative side.
    /// The directrix is returned as an axis (gp_Ax1 object), the
    /// origin of which is situated on the "X Axis" of the local
    /// coordinate system of this ellipse.
    /// Exceptions
    /// Standard_ConstructionError if the eccentricity is null
    /// (the ellipse has degenerated into a circle).
    /// </summary>
    Macad::Occt::Ax1 Directrix1();
    /// <summary>
    /// This line is obtained by the symmetrical transformation
    /// of "Directrix1" with respect to the "YAxis" of the ellipse.
    /// Exceptions
    /// Standard_ConstructionError if the eccentricity is null
    /// (the ellipse has degenerated into a circle).
    /// </summary>
    Macad::Occt::Ax1 Directrix2();
    /// <summary>
    /// Returns the eccentricity of the ellipse  between 0.0 and 1.0
    /// If f is the distance between the center of the ellipse and
    /// the Focus1 then the eccentricity e = f / MajorRadius.
    /// Raises ConstructionError if MajorRadius = 0.0
    /// </summary>
    double Eccentricity();
    /// <summary>
    /// Computes the focal distance. It is the distance between the
    /// two focus focus1 and focus2 of the ellipse.
    /// </summary>
    double Focal();
    /// <summary>
    /// Returns the first focus of the ellipse. This focus is on the
    /// positive side of the "XAxis" of the ellipse.
    /// </summary>
    Macad::Occt::Pnt Focus1();
    /// <summary>
    /// Returns the second focus of the ellipse. This focus is on the
    /// negative side of the "XAxis" of the ellipse.
    /// </summary>
    Macad::Occt::Pnt Focus2();
    /// <summary>
    /// Returns the center of the ellipse. It is the "Location"
    /// point of the coordinate system of the ellipse.
    /// </summary>
    Macad::Occt::Pnt Location();
    /// <summary>
    /// Returns the major radius of the ellipse.
    /// </summary>
    double MajorRadius();
    /// <summary>
    /// Returns the minor radius of the ellipse.
    /// </summary>
    double MinorRadius();
    /// <summary>
    /// Returns p = (1 - e * e) * MajorRadius where e is the eccentricity
    /// of the ellipse.
    /// Returns 0 if MajorRadius = 0
    /// </summary>
    double Parameter();
    /// <summary>
    /// Returns the coordinate system of the ellipse.
    /// </summary>
    Macad::Occt::Ax2 Position();
    /// <summary>
    /// Returns the "XAxis" of the ellipse whose origin
    /// is the center of this ellipse. It is the major axis of the
    /// ellipse.
    /// </summary>
    Macad::Occt::Ax1 XAxis();
    /// <summary>
    /// Returns the "YAxis" of the ellipse whose unit vector is the "X Direction" or the "Y Direction"
    /// of the local coordinate system of this ellipse.
    /// This is the minor axis of the ellipse.
    /// </summary>
    Macad::Occt::Ax1 YAxis();
    void Mirror(Macad::Occt::Pnt theP);
    /// <summary>
    /// Performs the symmetrical transformation of an ellipse with
    /// respect to the point theP which is the center of the symmetry.
    /// </summary>
    Macad::Occt::gp_Elips^ Mirrored(Macad::Occt::Pnt theP);
    void Mirror(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Performs the symmetrical transformation of an ellipse with
    /// respect to an axis placement which is the axis of the symmetry.
    /// </summary>
    Macad::Occt::gp_Elips^ Mirrored(Macad::Occt::Ax1 theA1);
    void Mirror(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Performs the symmetrical transformation of an ellipse with
    /// respect to a plane. The axis placement theA2 locates the plane
    /// of the symmetry (Location, XDirection, YDirection).
    /// </summary>
    Macad::Occt::gp_Elips^ Mirrored(Macad::Occt::Ax2 theA2);
    void Rotate(Macad::Occt::Ax1 theA1, double theAng);
    /// <summary>
    /// Rotates an ellipse. theA1 is the axis of the rotation.
    /// theAng is the angular value of the rotation in radians.
    /// </summary>
    Macad::Occt::gp_Elips^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
    void Scale(Macad::Occt::Pnt theP, double theS);
    /// <summary>
    /// Scales an ellipse. theS is the scaling value.
    /// </summary>
    Macad::Occt::gp_Elips^ Scaled(Macad::Occt::Pnt theP, double theS);
    void Transform(Macad::Occt::Trsf theT);
    /// <summary>
    /// Transforms an ellipse with the transformation theT from class Trsf.
    /// </summary>
    Macad::Occt::gp_Elips^ Transformed(Macad::Occt::Trsf theT);
    void Translate(Macad::Occt::Vec theV);
    /// <summary>
    /// Translates an ellipse in the direction of the vector theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Elips^ Translated(Macad::Occt::Vec theV);
    void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
    /// <summary>
    /// Translates an ellipse from the point theP1 to the point theP2.
    /// </summary>
    Macad::Occt::gp_Elips^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Elips

//---------------------------------------------------------------------
//  Class  gp_Elips2d
//---------------------------------------------------------------------
/// <summary>
/// Describes an ellipse in the plane (2D space).
/// An ellipse is defined by its major and minor radii and
/// positioned in the plane with a coordinate system (a
/// gp_Ax22d object) as follows:
/// -   the origin of the coordinate system is the center of the ellipse,
/// -   its "X Direction" defines the major axis of the ellipse, and
/// -   its "Y Direction" defines the minor axis of the ellipse.
/// This coordinate system is the "local coordinate system"
/// of the ellipse. Its orientation (direct or indirect) gives an
/// implicit orientation to the ellipse. In this coordinate
/// system, the equation of the ellipse is:
/// </summary>
/// @code
/// X*X / (MajorRadius**2) + Y*Y / (MinorRadius**2) = 1.0
/// @endcode
/// See Also
/// gce_MakeElips2d which provides functions for more
/// complex ellipse constructions
/// Geom2d_Ellipse which provides additional functions for
/// constructing ellipses and works, in particular, with the
/// parametric equations of ellipses
public ref class gp_Elips2d sealed
    : public Macad::Occt::BaseClass<::gp_Elips2d>
{

#ifdef Include_gp_Elips2d_h
public:
    Include_gp_Elips2d_h
#endif

public:
    gp_Elips2d(::gp_Elips2d* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Elips2d>( nativeInstance, true )
    {}

    gp_Elips2d(::gp_Elips2d& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Elips2d>( &nativeInstance, false )
    {}

    property ::gp_Elips2d* NativeInstance
    {
        ::gp_Elips2d* get()
        {
            return static_cast<::gp_Elips2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an indefinite ellipse.
    /// </summary>
    gp_Elips2d();
    /// <summary>
    /// Creates an ellipse with the major axis, the major and the
    /// minor radius. The location of the theMajorAxis is the center
    /// of the  ellipse.
    /// The sense of parametrization is given by theIsSense.
    /// Warnings :
    /// It is possible to create an ellipse with
    /// theMajorRadius = theMinorRadius.
    /// Raises ConstructionError if theMajorRadius < theMinorRadius or theMinorRadius < 0.0
    /// </summary>
    gp_Elips2d(Macad::Occt::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius, bool theIsSense);
    /// <summary>
    /// Creates an ellipse with the major axis, the major and the
    /// minor radius. The location of the theMajorAxis is the center
    /// of the  ellipse.
    /// The sense of parametrization is given by theIsSense.
    /// Warnings :
    /// It is possible to create an ellipse with
    /// theMajorRadius = theMinorRadius.
    /// Raises ConstructionError if theMajorRadius < theMinorRadius or theMinorRadius < 0.0
    /// </summary>
    gp_Elips2d(Macad::Occt::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius);
    /// <summary>
    /// Creates an ellipse with radii MajorRadius and
    /// MinorRadius, positioned in the plane by coordinate system theA where:
    /// -   the origin of theA is the center of the ellipse,
    /// -   the "X Direction" of theA defines the major axis of
    /// the ellipse, that is, the major radius MajorRadius
    /// is measured along this axis, and
    /// -   the "Y Direction" of theA defines the minor axis of
    /// the ellipse, that is, the minor radius theMinorRadius
    /// is measured along this axis, and
    /// -   the orientation (direct or indirect sense) of theA
    /// gives the orientation of the ellipse.
    /// Warnings :
    /// It is possible to create an ellipse with
    /// theMajorRadius = theMinorRadius.
    /// Raises ConstructionError if theMajorRadius < theMinorRadius or theMinorRadius < 0.0
    /// </summary>
    gp_Elips2d(Macad::Occt::Ax22d theA, double theMajorRadius, double theMinorRadius);
    /// <summary>
    /// Modifies this ellipse, by redefining its local coordinate system so that
    /// -   its origin becomes theP.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Changes the value of the major radius.
    /// Raises ConstructionError if theMajorRadius < MinorRadius.
    /// </summary>
    void SetMajorRadius(double theMajorRadius);
    /// <summary>
    /// Changes the value of the minor radius.
    /// Raises ConstructionError if MajorRadius < theMinorRadius or MinorRadius < 0.0
    /// </summary>
    void SetMinorRadius(double theMinorRadius);
    /// <summary>
    /// Modifies this ellipse, by redefining its local coordinate system so that
    /// it becomes theA.
    /// </summary>
    void SetAxis(Macad::Occt::Ax22d theA);
    /// <summary>
    /// Modifies this ellipse, by redefining its local coordinate system so that
    /// its origin and its "X Direction"  become those
    /// of the axis theA. The "Y  Direction"  is then
    /// recomputed. The orientation of the local coordinate
    /// system is not modified.
    /// </summary>
    void SetXAxis(Macad::Occt::Ax2d theA);
    /// <summary>
    /// Modifies this ellipse, by redefining its local coordinate system so that
    /// its origin and its "Y Direction"  become those
    /// of the axis theA. The "X  Direction"  is then
    /// recomputed. The orientation of the local coordinate
    /// system is not modified.
    /// </summary>
    void SetYAxis(Macad::Occt::Ax2d theA);
    /// <summary>
    /// Computes the area of the ellipse.
    /// </summary>
    double Area();
    /// <summary>
    /// Returns the coefficients of the implicit equation of the ellipse.
    /// theA * (X**2) + theB * (Y**2) + 2*theC*(X*Y) + 2*theD*X + 2*theE*Y + theF = 0.
    /// </summary>
    void Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF);
    /// <summary>
    /// This directrix is the line normal to the XAxis of the ellipse
    /// in the local plane (Z = 0) at a distance d = MajorRadius / e
    /// from the center of the ellipse, where e is the eccentricity of
    /// the ellipse.
    /// This line is parallel to the "YAxis". The intersection point
    /// between directrix1 and the "XAxis" is the location point of the
    /// directrix1. This point is on the positive side of the "XAxis".
    /// 
    /// Raised if Eccentricity = 0.0. (The ellipse degenerates into a
    /// circle)
    /// </summary>
    Macad::Occt::Ax2d Directrix1();
    /// <summary>
    /// This line is obtained by the symmetrical transformation
    /// of "Directrix1" with respect to the minor axis of the ellipse.
    /// 
    /// Raised if Eccentricity = 0.0. (The ellipse degenerates into a
    /// circle).
    /// </summary>
    Macad::Occt::Ax2d Directrix2();
    /// <summary>
    /// Returns the eccentricity of the ellipse  between 0.0 and 1.0
    /// If f is the distance between the center of the ellipse and
    /// the Focus1 then the eccentricity e = f / MajorRadius.
    /// Returns 0 if MajorRadius = 0.
    /// </summary>
    double Eccentricity();
    /// <summary>
    /// Returns the distance between the center of the ellipse
    /// and focus1 or focus2.
    /// </summary>
    double Focal();
    /// <summary>
    /// Returns the first focus of the ellipse. This focus is on the
    /// positive side of the major axis of the ellipse.
    /// </summary>
    Macad::Occt::Pnt2d Focus1();
    /// <summary>
    /// Returns the second focus of the ellipse. This focus is on the
    /// negative side of the major axis of the ellipse.
    /// </summary>
    Macad::Occt::Pnt2d Focus2();
    /// <summary>
    /// Returns the center of the ellipse.
    /// </summary>
    Macad::Occt::Pnt2d Location();
    /// <summary>
    /// Returns the major radius of the Ellipse.
    /// </summary>
    double MajorRadius();
    /// <summary>
    /// Returns the minor radius of the Ellipse.
    /// </summary>
    double MinorRadius();
    /// <summary>
    /// Returns p = (1 - e * e) * MajorRadius where e is the eccentricity
    /// of the ellipse.
    /// Returns 0 if MajorRadius = 0
    /// </summary>
    double Parameter();
    /// <summary>
    /// Returns the major axis of the ellipse.
    /// </summary>
    Macad::Occt::Ax22d Axis();
    /// <summary>
    /// Returns the major axis of the ellipse.
    /// </summary>
    Macad::Occt::Ax2d XAxis();
    /// <summary>
    /// Returns the minor axis of the ellipse.
    /// Reverses the direction of the circle.
    /// </summary>
    Macad::Occt::Ax2d YAxis();
    void Reverse();
    Macad::Occt::gp_Elips2d^ Reversed();
    /// <summary>
    /// Returns true if the local coordinate system is direct
    /// and false in the other case.
    /// </summary>
    bool IsDirect();
    void Mirror(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Performs the symmetrical transformation of a ellipse with respect
    /// to the point theP which is the center of the symmetry
    /// </summary>
    Macad::Occt::gp_Elips2d^ Mirrored(Macad::Occt::Pnt2d theP);
    void Mirror(Macad::Occt::Ax2d theA);
    /// <summary>
    /// Performs the symmetrical transformation of a ellipse with respect
    /// to an axis placement which is the axis of the symmetry.
    /// </summary>
    Macad::Occt::gp_Elips2d^ Mirrored(Macad::Occt::Ax2d theA);
    void Rotate(Macad::Occt::Pnt2d theP, double theAng);
    Macad::Occt::gp_Elips2d^ Rotated(Macad::Occt::Pnt2d theP, double theAng);
    void Scale(Macad::Occt::Pnt2d theP, double theS);
    /// <summary>
    /// Scales a ellipse. theS is the scaling value.
    /// </summary>
    Macad::Occt::gp_Elips2d^ Scaled(Macad::Occt::Pnt2d theP, double theS);
    void Transform(Macad::Occt::Trsf2d theT);
    /// <summary>
    /// Transforms an ellipse with the transformation theT from class Trsf2d.
    /// </summary>
    Macad::Occt::gp_Elips2d^ Transformed(Macad::Occt::Trsf2d theT);
    void Translate(Macad::Occt::Vec2d theV);
    /// <summary>
    /// Translates a ellipse in the direction of the vector theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Elips2d^ Translated(Macad::Occt::Vec2d theV);
    void Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
    /// <summary>
    /// Translates a ellipse from the point theP1 to the point theP2.
    /// </summary>
    Macad::Occt::gp_Elips2d^ Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
}; // class gp_Elips2d

//---------------------------------------------------------------------
//  Class  gp_GTrsf
//---------------------------------------------------------------------
/// <summary>
/// Defines a non-persistent transformation in 3D space.
/// This transformation is a general transformation.
/// It can be a gp_Trsf, an affinity, or you can define
/// your own transformation giving the matrix of transformation.
/// 
/// With a gp_GTrsf you can transform only a triplet of coordinates gp_XYZ.
/// It is not possible to transform other geometric objects
/// because these transformations can change the nature of non-elementary geometric objects.
/// The transformation gp_GTrsf can be represented as follow:
/// </summary>
/// @code
/// V1   V2   V3    T       XYZ        XYZ
/// | a11  a12  a13   a14 |   | x |      | x'|
/// | a21  a22  a23   a24 |   | y |      | y'|
/// | a31  a32  a33   a34 |   | z |   =  | z'|
/// |  0    0    0     1  |   | 1 |      | 1 |
/// @endcode
/// where {V1, V2, V3} define the vectorial part of the
/// transformation and T defines the translation part of the transformation.
/// Warning
/// A gp_GTrsf transformation is only applicable to coordinates.
/// Be careful if you apply such a transformation to all points of a geometric object,
/// as this can change the nature of the object and thus render it incoherent!
/// Typically, a circle is transformed into an ellipse by an affinity transformation.
/// To avoid modifying the nature of an object, use a gp_Trsf transformation instead,
/// as objects of this class respect the nature of geometric objects.
public ref class gp_GTrsf sealed
    : public Macad::Occt::BaseClass<::gp_GTrsf>
{

#ifdef Include_gp_GTrsf_h
public:
    Include_gp_GTrsf_h
#endif

public:
    gp_GTrsf(::gp_GTrsf* nativeInstance)
        : Macad::Occt::BaseClass<::gp_GTrsf>( nativeInstance, true )
    {}

    gp_GTrsf(::gp_GTrsf& nativeInstance)
        : Macad::Occt::BaseClass<::gp_GTrsf>( &nativeInstance, false )
    {}

    property ::gp_GTrsf* NativeInstance
    {
        ::gp_GTrsf* get()
        {
            return static_cast<::gp_GTrsf*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns the Identity transformation.
    /// </summary>
    gp_GTrsf();
    /// <summary>
    /// Converts the gp_Trsf transformation theT into a
    /// general transformation, i.e. Returns a GTrsf with
    /// the same matrix of coefficients as the Trsf theT.
    /// </summary>
    gp_GTrsf(Macad::Occt::Trsf theT);
    /// <summary>
    /// Creates a transformation based on the matrix theM and the
    /// vector theV where theM defines the vectorial part of
    /// the transformation, and V the translation part, or
    /// </summary>
    gp_GTrsf(Macad::Occt::Mat theM, Macad::Occt::XYZ theV);
    /// <summary>
    /// Changes this transformation into an affinity of ratio theRatio
    /// with respect to the axis theA1.
    /// Note: an affinity is a point-by-point transformation that
    /// transforms any point P into a point P' such that if H is
    /// the orthogonal projection of P on the axis theA1 or the
    /// plane A2, the vectors HP and HP' satisfy:
    /// HP' = theRatio * HP.
    /// </summary>
    void SetAffinity(Macad::Occt::Ax1 theA1, double theRatio);
    /// <summary>
    /// Changes this transformation into an affinity of ratio theRatio
    /// with respect to  the plane defined by the origin, the "X Direction" and
    /// the "Y Direction" of coordinate system theA2.
    /// Note: an affinity is a point-by-point transformation that
    /// transforms any point P into a point P' such that if H is
    /// the orthogonal projection of P on the axis A1 or the
    /// plane theA2, the vectors HP and HP' satisfy:
    /// HP' = theRatio * HP.
    /// </summary>
    void SetAffinity(Macad::Occt::Ax2 theA2, double theRatio);
    /// <summary>
    /// Replaces  the coefficient (theRow, theCol) of the matrix representing
    /// this transformation by theValue.  Raises OutOfRange
    /// if  theRow < 1 or theRow > 3 or theCol < 1 or theCol > 4
    /// </summary>
    void SetValue(int theRow, int theCol, double theValue);
    /// <summary>
    /// Replaces the vectorial part of this transformation by theMatrix.
    /// </summary>
    void SetVectorialPart(Macad::Occt::Mat theMatrix);
    /// <summary>
    /// Replaces the translation part of
    /// this transformation by the coordinates of the number triple theCoord.
    /// </summary>
    void SetTranslationPart(Macad::Occt::XYZ theCoord);
    /// <summary>
    /// Assigns the vectorial and translation parts of theT to this transformation.
    /// </summary>
    void SetTrsf(Macad::Occt::Trsf theT);
    /// <summary>
    /// Returns true if the determinant of the vectorial part of
    /// this transformation is negative.
    /// </summary>
    bool IsNegative();
    /// <summary>
    /// Returns true if this transformation is singular (and
    /// therefore, cannot be inverted).
    /// Note: The Gauss LU decomposition is used to invert the
    /// transformation matrix. Consequently, the transformation
    /// is considered as singular if the largest pivot found is less
    /// than or equal to gp::Resolution().
    /// Warning
    /// If this transformation is singular, it cannot be inverted.
    /// </summary>
    bool IsSingular();
    /// <summary>
    /// Returns the nature of the transformation.  It can be an
    /// identity transformation, a rotation, a translation, a mirror
    /// transformation (relative to a point, an axis or a plane), a
    /// scaling transformation, a compound transformation or
    /// some other type of transformation.
    /// </summary>
    Macad::Occt::TrsfForm Form();
    /// <summary>
    /// verify and set the shape of the GTrsf Other or CompoundTrsf
    /// Ex :
    /// </summary>
    /// @code
    /// myGTrsf.SetValue(row1,col1,val1);
    /// myGTrsf.SetValue(row2,col2,val2);
    /// ...
    /// myGTrsf.SetForm();
    /// @endcode
    void SetForm();
    /// <summary>
    /// Returns the translation part of the GTrsf.
    /// </summary>
    Macad::Occt::XYZ TranslationPart();
    /// <summary>
    /// Computes the vectorial part of the GTrsf. The returned Matrix
    /// is a  3*3 matrix.
    /// </summary>
    Macad::Occt::Mat VectorialPart();
    /// <summary>
    /// Returns the coefficients of the global matrix of transformation.
    /// Raises OutOfRange if theRow < 1 or theRow > 3 or theCol < 1 or theCol > 4
    /// </summary>
    double Value(int theRow, int theCol);
    void Invert();
    /// <summary>
    /// Computes the reverse transformation.
    /// Raises an exception if the matrix of the transformation
    /// is not inversible.
    /// </summary>
    Macad::Occt::gp_GTrsf^ Inverted();
    /// <summary>
    /// Computes the transformation composed from theT and <me>.
    /// In a C++ implementation you can also write Tcomposed = <me> * theT.
    /// Example :
    /// </summary>
    /// @code
    /// gp_GTrsf T1, T2, Tcomp; ...............
    /// //composition :
    /// Tcomp = T2.Multiplied(T1);         // or   (Tcomp = T2 * T1)
    /// // transformation of a point
    /// gp_XYZ P(10.,3.,4.);
    /// gp_XYZ P1(P);
    /// Tcomp.Transforms(P1);               //using Tcomp
    /// gp_XYZ P2(P);
    /// T1.Transforms(P2);                  //using T1 then T2
    /// T2.Transforms(P2);                  // P1 = P2 !!!
    /// @endcode
    Macad::Occt::gp_GTrsf^ Multiplied(Macad::Occt::gp_GTrsf^ theT);
    /// <summary>
    /// Computes the transformation composed with <me> and theT.
    /// <me> = <me> * theT
    /// </summary>
    void Multiply(Macad::Occt::gp_GTrsf^ theT);
    /// <summary>
    /// Computes the product of the transformation theT and this
    /// transformation and assigns the result to this transformation.
    /// this = theT * this
    /// </summary>
    void PreMultiply(Macad::Occt::gp_GTrsf^ theT);
    void Power(int theN);
    /// <summary>
    /// Computes:
    /// -   the product of this transformation multiplied by itself
    /// theN times, if theN is positive, or
    /// -   the product of the inverse of this transformation
    /// multiplied by itself |theN| times, if theN is negative.
    /// If theN equals zero, the result is equal to the Identity
    /// transformation.
    /// I.e.:  <me> * <me> * .......* <me>, theN time.
    /// if theN =0 <me> = Identity
    /// if theN < 0 <me> = <me>.Inverse() *...........* <me>.Inverse().
    /// 
    /// Raises an exception if N < 0 and if the matrix of the
    /// transformation not inversible.
    /// </summary>
    Macad::Occt::gp_GTrsf^ Powered(int theN);
    void Transforms(Macad::Occt::XYZ% theCoord);
    /// <summary>
    /// Transforms a triplet XYZ with a GTrsf.
    /// </summary>
    void Transforms(double% theX, double% theY, double% theZ);
    Macad::Occt::Trsf Trsf();
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
}; // class gp_GTrsf

//---------------------------------------------------------------------
//  Class  gp_GTrsf2d
//---------------------------------------------------------------------
/// <summary>
/// Defines a non persistent transformation in 2D space.
/// This transformation is a general transformation.
/// It can be a gp_Trsf2d, an affinity, or you can
/// define your own transformation giving the corresponding matrix of transformation.
/// 
/// With a gp_GTrsf2d you can transform only a doublet of coordinates gp_XY.
/// It is not possible to transform other geometric objects
/// because these transformations can change the nature of non-elementary geometric objects.
/// A gp_GTrsf2d is represented with a 2 rows * 3 columns matrix:
/// </summary>
/// @code
/// V1   V2   T        XY         XY
/// | a11  a12  a14 |   | x |      | x'|
/// | a21  a22  a24 |   | y |   =  | y'|
/// |  0    0    1  |   | 1 |      | 1 |
/// @endcode
/// where {V1, V2} defines the vectorial part of the
/// transformation and T defines the translation part of the transformation.
/// Warning
/// A gp_GTrsf2d transformation is only applicable on coordinates.
/// Be careful if you apply such a transformation to all the points of a geometric object,
/// as this can change the nature of the object and thus render it incoherent!
/// Typically, a circle is transformed into an ellipse by an affinity transformation.
/// To avoid modifying the nature of an object, use a gp_Trsf2d transformation instead,
/// as objects of this class respect the nature of geometric objects.
public ref class gp_GTrsf2d sealed
    : public Macad::Occt::BaseClass<::gp_GTrsf2d>
{

#ifdef Include_gp_GTrsf2d_h
public:
    Include_gp_GTrsf2d_h
#endif

public:
    gp_GTrsf2d(::gp_GTrsf2d* nativeInstance)
        : Macad::Occt::BaseClass<::gp_GTrsf2d>( nativeInstance, true )
    {}

    gp_GTrsf2d(::gp_GTrsf2d& nativeInstance)
        : Macad::Occt::BaseClass<::gp_GTrsf2d>( &nativeInstance, false )
    {}

    property ::gp_GTrsf2d* NativeInstance
    {
        ::gp_GTrsf2d* get()
        {
            return static_cast<::gp_GTrsf2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// returns identity transformation.
    /// </summary>
    gp_GTrsf2d();
    /// <summary>
    /// Converts the gp_Trsf2d transformation theT into a
    /// general transformation.
    /// </summary>
    gp_GTrsf2d(Macad::Occt::Trsf2d theT);
    /// <summary>
    /// Creates   a transformation based on the matrix theM and the
    /// vector theV where theM defines the vectorial part of the
    /// transformation, and theV the translation part.
    /// </summary>
    gp_GTrsf2d(Macad::Occt::Mat2d theM, Macad::Occt::XY theV);
    /// <summary>
    /// Changes this transformation into an affinity of ratio theRatio
    /// with respect to the axis theA.
    /// Note: An affinity is a point-by-point transformation that
    /// transforms any point P into a point P' such that if H is
    /// the orthogonal projection of P on the axis theA, the vectors
    /// HP and HP' satisfy: HP' = theRatio * HP.
    /// </summary>
    void SetAffinity(Macad::Occt::Ax2d theA, double theRatio);
    /// <summary>
    /// Replaces   the coefficient (theRow, theCol) of the matrix representing
    /// this transformation by theValue,
    /// Raises OutOfRange if theRow < 1 or theRow > 2 or theCol < 1 or theCol > 3
    /// </summary>
    void SetValue(int theRow, int theCol, double theValue);
    /// <summary>
    /// Replaces the translation part of this
    /// transformation by the coordinates of the number pair theCoord.
    /// </summary>
    void SetTranslationPart(Macad::Occt::XY theCoord);
    /// <summary>
    /// Assigns the vectorial and translation parts of theT to this transformation.
    /// </summary>
    void SetTrsf2d(Macad::Occt::Trsf2d theT);
    /// <summary>
    /// Replaces the vectorial part of this transformation by theMatrix.
    /// </summary>
    void SetVectorialPart(Macad::Occt::Mat2d theMatrix);
    /// <summary>
    /// Returns true if the determinant of the vectorial part of
    /// this transformation is negative.
    /// </summary>
    bool IsNegative();
    /// <summary>
    /// Returns true if this transformation is singular (and
    /// therefore, cannot be inverted).
    /// Note: The Gauss LU decomposition is used to invert the
    /// transformation matrix. Consequently, the transformation
    /// is considered as singular if the largest pivot found is less
    /// than or equal to gp::Resolution().
    /// Warning
    /// If this transformation is singular, it cannot be inverted.
    /// </summary>
    bool IsSingular();
    /// <summary>
    /// Returns the nature of the transformation.  It can be
    /// an identity transformation, a rotation, a translation, a mirror
    /// transformation (relative to a point or axis), a scaling
    /// transformation, a compound transformation or some
    /// other type of transformation.
    /// </summary>
    Macad::Occt::TrsfForm Form();
    /// <summary>
    /// Returns the translation part of the GTrsf2d.
    /// </summary>
    Macad::Occt::XY TranslationPart();
    /// <summary>
    /// Computes the vectorial part of the GTrsf2d. The returned
    /// Matrix is a 2*2 matrix.
    /// </summary>
    Macad::Occt::Mat2d VectorialPart();
    /// <summary>
    /// Returns the coefficients of the global matrix of transformation.
    /// Raised OutOfRange if theRow < 1 or theRow > 2 or theCol < 1 or theCol > 3
    /// </summary>
    double Value(int theRow, int theCol);
    void Invert();
    /// <summary>
    /// Computes the reverse transformation.
    /// Raised an exception if the matrix of the transformation
    /// is not inversible.
    /// </summary>
    Macad::Occt::gp_GTrsf2d^ Inverted();
    /// <summary>
    /// Computes the transformation composed with theT and <me>.
    /// In a C++ implementation you can also write Tcomposed = <me> * theT.
    /// Example :
    /// </summary>
    /// @code
    /// gp_GTrsf2d T1, T2, Tcomp; ...............
    /// //composition :
    /// Tcomp = T2.Multiplied(T1);         // or   (Tcomp = T2 * T1)
    /// // transformation of a point
    /// gp_XY P(10.,3.);
    /// gp_XY P1(P);
    /// Tcomp.Transforms(P1);               //using Tcomp
    /// gp_XY P2(P);
    /// T1.Transforms(P2);                  //using T1 then T2
    /// T2.Transforms(P2);                  // P1 = P2 !!!
    /// @endcode
    Macad::Occt::gp_GTrsf2d^ Multiplied(Macad::Occt::gp_GTrsf2d^ theT);
    void Multiply(Macad::Occt::gp_GTrsf2d^ theT);
    /// <summary>
    /// Computes the product of the transformation theT and this
    /// transformation, and assigns the result to this transformation:
    /// this = theT * this
    /// </summary>
    void PreMultiply(Macad::Occt::gp_GTrsf2d^ theT);
    void Power(int theN);
    /// <summary>
    /// Computes the following composition of transformations
    /// <me> * <me> * .......* <me>, theN time.
    /// if theN = 0 <me> = Identity
    /// if theN < 0 <me> = <me>.Inverse() *...........* <me>.Inverse().
    /// 
    /// Raises an exception if theN < 0 and if the matrix of the
    /// transformation is not inversible.
    /// </summary>
    Macad::Occt::gp_GTrsf2d^ Powered(int theN);
    void Transforms(Macad::Occt::XY% theCoord);
    Macad::Occt::XY Transformed(Macad::Occt::XY theCoord);
    /// <summary>
    /// Applies this transformation to the coordinates:
    /// -   of the number pair Coord, or
    /// -   X and Y.
    /// 
    /// Note:
    /// -   Transforms modifies theX, theY, or the coordinate pair Coord, while
    /// -   Transformed creates a new coordinate pair.
    /// </summary>
    void Transforms(double% theX, double% theY);
    /// <summary>
    /// Converts this transformation into a gp_Trsf2d transformation.
    /// Exceptions
    /// Standard_ConstructionError if this transformation
    /// cannot be converted, i.e. if its form is gp_Other.
    /// </summary>
    Macad::Occt::Trsf2d Trsf2d();
}; // class gp_GTrsf2d

//---------------------------------------------------------------------
//  Class  gp_Hypr
//---------------------------------------------------------------------
/// <summary>
/// Describes a branch of a hyperbola in 3D space.
/// A hyperbola is defined by its major and minor radii and
/// positioned in space with a coordinate system (a gp_Ax2
/// object) of which:
/// -   the origin is the center of the hyperbola,
/// -   the "X Direction" defines the major axis of the
/// hyperbola, and
/// - the "Y Direction" defines the minor axis of the hyperbola.
/// The origin, "X Direction" and "Y Direction" of this
/// coordinate system together define the plane of the
/// hyperbola. This coordinate system is the "local
/// coordinate system" of the hyperbola. In this coordinate
/// system, the equation of the hyperbola is:
/// X*X/(MajorRadius**2)-Y*Y/(MinorRadius**2) = 1.0
/// The branch of the hyperbola described is the one located
/// on the positive side of the major axis.
/// The "main Direction" of the local coordinate system is a
/// normal vector to the plane of the hyperbola. This vector
/// gives an implicit orientation to the hyperbola. We refer to
/// the "main Axis" of the local coordinate system as the
/// "Axis" of the hyperbola.
/// The following schema shows the plane of the hyperbola,
/// and in it, the respective positions of the three branches of
/// hyperbolas constructed with the functions OtherBranch,
/// ConjugateBranch1, and ConjugateBranch2:
/// </summary>
/// @code
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
/// |                  ^YAxis
/// @endcode
/// Warning
/// The major radius can be less than the minor radius.
/// See Also
/// gce_MakeHypr which provides functions for more
/// complex hyperbola constructions
/// Geom_Hyperbola which provides additional functions for
/// constructing hyperbolas and works, in particular, with the
/// parametric equations of hyperbolas
public ref class gp_Hypr sealed
    : public Macad::Occt::BaseClass<::gp_Hypr>
{

#ifdef Include_gp_Hypr_h
public:
    Include_gp_Hypr_h
#endif

public:
    gp_Hypr(::gp_Hypr* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Hypr>( nativeInstance, true )
    {}

    gp_Hypr(::gp_Hypr& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Hypr>( &nativeInstance, false )
    {}

    property ::gp_Hypr* NativeInstance
    {
        ::gp_Hypr* get()
        {
            return static_cast<::gp_Hypr*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates of an indefinite hyperbola.
    /// </summary>
    gp_Hypr();
    /// <summary>
    /// Creates a hyperbola with radius theMajorRadius and
    /// theMinorRadius, positioned in the space by the
    /// coordinate system theA2 such that:
    /// -   the origin of theA2 is the center of the hyperbola,
    /// -   the "X Direction" of theA2 defines the major axis of
    /// the hyperbola, that is, the major radius
    /// theMajorRadius is measured along this axis, and
    /// -   the "Y Direction" of theA2 defines the minor axis of
    /// the hyperbola, that is, the minor radius
    /// theMinorRadius is measured along this axis.
    /// Note: This class does not prevent the creation of a
    /// hyperbola where:
    /// -   theMajorAxis is equal to theMinorAxis, or
    /// -   theMajorAxis is less than theMinorAxis.
    /// Exceptions
    /// Standard_ConstructionError if theMajorAxis or theMinorAxis is negative.
    /// Raises ConstructionError if theMajorRadius < 0.0 or theMinorRadius < 0.0
    /// Raised if theMajorRadius < 0.0 or theMinorRadius < 0.0
    /// </summary>
    gp_Hypr(Macad::Occt::Ax2 theA2, double theMajorRadius, double theMinorRadius);
    /// <summary>
    /// Modifies this hyperbola, by redefining its local coordinate
    /// system so that:
    /// -   its origin and "main Direction" become those of the
    /// axis theA1 (the "X Direction" and "Y Direction" are then
    /// recomputed in the same way as for any gp_Ax2).
    /// Raises ConstructionError if the direction of theA1 is parallel to the direction of
    /// the "XAxis" of the hyperbola.
    /// </summary>
    void SetAxis(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Modifies this hyperbola, by redefining its local coordinate
    /// system so that its origin becomes theP.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt theP);
    /// <summary>
    /// Modifies the major  radius of this hyperbola.
    /// Exceptions
    /// Standard_ConstructionError if theMajorRadius is negative.
    /// </summary>
    void SetMajorRadius(double theMajorRadius);
    /// <summary>
    /// Modifies the minor  radius of this hyperbola.
    /// Exceptions
    /// Standard_ConstructionError if theMinorRadius is negative.
    /// </summary>
    void SetMinorRadius(double theMinorRadius);
    /// <summary>
    /// Modifies this hyperbola, by redefining its local coordinate
    /// system so that it becomes A2.
    /// </summary>
    void SetPosition(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// In the local coordinate system of the hyperbola the equation of
    /// the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the
    /// equation of the first asymptote is Y = (B/A)*X
    /// where A is the major radius and B is the minor radius. Raises ConstructionError if MajorRadius
    /// = 0.0
    /// </summary>
    Macad::Occt::Ax1 Asymptote1();
    /// <summary>
    /// In the local coordinate system of the hyperbola the equation of
    /// the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the
    /// equation of the first asymptote is Y = -(B/A)*X.
    /// where A is the major radius and B is the minor radius. Raises ConstructionError if MajorRadius
    /// = 0.0
    /// </summary>
    Macad::Occt::Ax1 Asymptote2();
    /// <summary>
    /// Returns the axis passing through the center,
    /// and normal to the plane of this hyperbola.
    /// </summary>
    Macad::Occt::Ax1 Axis();
    /// <summary>
    /// Computes the branch of hyperbola which is on the positive side of the
    /// "YAxis" of <me>.
    /// </summary>
    Macad::Occt::gp_Hypr^ ConjugateBranch1();
    /// <summary>
    /// Computes the branch of hyperbola which is on the negative side of the
    /// "YAxis" of <me>.
    /// </summary>
    Macad::Occt::gp_Hypr^ ConjugateBranch2();
    /// <summary>
    /// This directrix is the line normal to the XAxis of the hyperbola
    /// in the local plane (Z = 0) at a distance d = MajorRadius / e
    /// from the center of the hyperbola, where e is the eccentricity of
    /// the hyperbola.
    /// This line is parallel to the "YAxis". The intersection point
    /// between the directrix1 and the "XAxis" is the "Location" point
    /// of the directrix1. This point is on the positive side of the
    /// "XAxis".
    /// </summary>
    Macad::Occt::Ax1 Directrix1();
    /// <summary>
    /// This line is obtained by the symmetrical transformation
    /// of "Directrix1" with respect to the "YAxis" of the hyperbola.
    /// </summary>
    Macad::Occt::Ax1 Directrix2();
    /// <summary>
    /// Returns the eccentricity of the hyperbola (e > 1).
    /// If f is the distance between the location of the hyperbola
    /// and the Focus1 then the eccentricity e = f / MajorRadius. Raises DomainError if MajorRadius =
    /// 0.0
    /// </summary>
    double Eccentricity();
    /// <summary>
    /// Computes the focal distance. It is the distance between the
    /// the two focus of the hyperbola.
    /// </summary>
    double Focal();
    /// <summary>
    /// Returns the first focus of the hyperbola. This focus is on the
    /// positive side of the "XAxis" of the hyperbola.
    /// </summary>
    Macad::Occt::Pnt Focus1();
    /// <summary>
    /// Returns the second focus of the hyperbola. This focus is on the
    /// negative side of the "XAxis" of the hyperbola.
    /// </summary>
    Macad::Occt::Pnt Focus2();
    /// <summary>
    /// Returns  the location point of the hyperbola. It is the
    /// intersection point between the "XAxis" and the "YAxis".
    /// </summary>
    Macad::Occt::Pnt Location();
    /// <summary>
    /// Returns the major radius of the hyperbola. It is the radius
    /// on the "XAxis" of the hyperbola.
    /// </summary>
    double MajorRadius();
    /// <summary>
    /// Returns the minor radius of the hyperbola. It is the radius
    /// on the "YAxis" of the hyperbola.
    /// </summary>
    double MinorRadius();
    /// <summary>
    /// Returns the branch of hyperbola obtained by doing the
    /// symmetrical transformation of <me> with respect to the
    /// "YAxis"  of <me>.
    /// </summary>
    Macad::Occt::gp_Hypr^ OtherBranch();
    /// <summary>
    /// Returns p = (e * e - 1) * MajorRadius where e is the
    /// eccentricity of the hyperbola.
    /// Raises DomainError if MajorRadius = 0.0
    /// </summary>
    double Parameter();
    /// <summary>
    /// Returns the coordinate system of the hyperbola.
    /// </summary>
    Macad::Occt::Ax2 Position();
    /// <summary>
    /// Computes an axis, whose
    /// -   the origin is the center of this hyperbola, and
    /// -   the unit vector is the "X Direction"
    /// of the local coordinate system of this hyperbola.
    /// These axes are, the major axis (the "X
    /// Axis") and  of this hyperboReturns the "XAxis" of the hyperbola.
    /// </summary>
    Macad::Occt::Ax1 XAxis();
    /// <summary>
    /// Computes an axis, whose
    /// -   the origin is the center of this hyperbola, and
    /// -   the unit vector is the "Y Direction"
    /// of the local coordinate system of this hyperbola.
    /// These axes are the minor axis (the "Y Axis") of this hyperbola
    /// </summary>
    Macad::Occt::Ax1 YAxis();
    void Mirror(Macad::Occt::Pnt theP);
    /// <summary>
    /// Performs the symmetrical transformation of an hyperbola with
    /// respect  to the point theP which is the center of the symmetry.
    /// </summary>
    Macad::Occt::gp_Hypr^ Mirrored(Macad::Occt::Pnt theP);
    void Mirror(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Performs the symmetrical transformation of an hyperbola with
    /// respect to an axis placement which is the axis of the symmetry.
    /// </summary>
    Macad::Occt::gp_Hypr^ Mirrored(Macad::Occt::Ax1 theA1);
    void Mirror(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Performs the symmetrical transformation of an hyperbola with
    /// respect to a plane. The axis placement theA2 locates the plane
    /// of the symmetry (Location, XDirection, YDirection).
    /// </summary>
    Macad::Occt::gp_Hypr^ Mirrored(Macad::Occt::Ax2 theA2);
    void Rotate(Macad::Occt::Ax1 theA1, double theAng);
    /// <summary>
    /// Rotates an hyperbola. theA1 is the axis of the rotation.
    /// theAng is the angular value of the rotation in radians.
    /// </summary>
    Macad::Occt::gp_Hypr^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
    void Scale(Macad::Occt::Pnt theP, double theS);
    /// <summary>
    /// Scales an hyperbola. theS is the scaling value.
    /// </summary>
    Macad::Occt::gp_Hypr^ Scaled(Macad::Occt::Pnt theP, double theS);
    void Transform(Macad::Occt::Trsf theT);
    /// <summary>
    /// Transforms an hyperbola with the transformation theT from
    /// class Trsf.
    /// </summary>
    Macad::Occt::gp_Hypr^ Transformed(Macad::Occt::Trsf theT);
    void Translate(Macad::Occt::Vec theV);
    /// <summary>
    /// Translates an hyperbola in the direction of the vector theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Hypr^ Translated(Macad::Occt::Vec theV);
    void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
    /// <summary>
    /// Translates an hyperbola from the point theP1 to the point theP2.
    /// </summary>
    Macad::Occt::gp_Hypr^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Hypr

//---------------------------------------------------------------------
//  Class  gp_Hypr2d
//---------------------------------------------------------------------
/// <summary>
/// Describes a branch of a hyperbola in the plane (2D space).
/// A hyperbola is defined by its major and minor radii, and
/// positioned in the plane with a coordinate system (a
/// gp_Ax22d object) of which:
/// -   the origin is the center of the hyperbola,
/// -   the "X Direction" defines the major axis of the hyperbola, and
/// -   the "Y Direction" defines the minor axis of the hyperbola.
/// This coordinate system is the "local coordinate system"
/// of the hyperbola. The orientation of this coordinate
/// system (direct or indirect) gives an implicit orientation to
/// the hyperbola. In this coordinate system, the equation of
/// the hyperbola is:
/// X*X/(MajorRadius**2)-Y*Y/(MinorRadius**2) = 1.0
/// The branch of the hyperbola described is the one located
/// on the positive side of the major axis.
/// The following schema shows the plane of the hyperbola,
/// and in it, the respective positions of the three branches of
/// hyperbolas constructed with the functions OtherBranch,
/// ConjugateBranch1, and ConjugateBranch2:
/// </summary>
/// @code
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
/// @endcode
/// Warning
/// The major radius can be less than the minor radius.
/// See Also
/// gce_MakeHypr2d which provides functions for more
/// complex hyperbola constructions
/// Geom2d_Hyperbola which provides additional functions
/// for constructing hyperbolas and works, in particular, with
/// the parametric equations of hyperbolas
public ref class gp_Hypr2d sealed
    : public Macad::Occt::BaseClass<::gp_Hypr2d>
{

#ifdef Include_gp_Hypr2d_h
public:
    Include_gp_Hypr2d_h
#endif

public:
    gp_Hypr2d(::gp_Hypr2d* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Hypr2d>( nativeInstance, true )
    {}

    gp_Hypr2d(::gp_Hypr2d& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Hypr2d>( &nativeInstance, false )
    {}

    property ::gp_Hypr2d* NativeInstance
    {
        ::gp_Hypr2d* get()
        {
            return static_cast<::gp_Hypr2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates of an indefinite hyperbola.
    /// </summary>
    gp_Hypr2d();
    /// <summary>
    /// Creates a hyperbola with radii theMajorRadius and
    /// theMinorRadius, centered on the origin of theMajorAxis
    /// and where the unit vector of theMajorAxis is the "X
    /// Direction" of the local coordinate system of the
    /// hyperbola. This coordinate system is direct if theIsSense
    /// is true (the default value), and indirect if theIsSense is false.
    /// Warnings :
    /// It is yet  possible to create an Hyperbola with
    /// theMajorRadius <= theMinorRadius.
    /// Raises ConstructionError if theMajorRadius < 0.0 or theMinorRadius < 0.0
    /// </summary>
    gp_Hypr2d(Macad::Occt::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius, bool theIsSense);
    /// <summary>
    /// Creates a hyperbola with radii theMajorRadius and
    /// theMinorRadius, centered on the origin of theMajorAxis
    /// and where the unit vector of theMajorAxis is the "X
    /// Direction" of the local coordinate system of the
    /// hyperbola. This coordinate system is direct if theIsSense
    /// is true (the default value), and indirect if theIsSense is false.
    /// Warnings :
    /// It is yet  possible to create an Hyperbola with
    /// theMajorRadius <= theMinorRadius.
    /// Raises ConstructionError if theMajorRadius < 0.0 or theMinorRadius < 0.0
    /// </summary>
    gp_Hypr2d(Macad::Occt::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius);
    /// <summary>
    /// a hyperbola with radii theMajorRadius and
    /// theMinorRadius, positioned in the plane by coordinate system theA where:
    /// -   the origin of theA is the center of the hyperbola,
    /// -   the "X Direction" of theA defines the major axis of
    /// the hyperbola, that is, the major radius
    /// theMajorRadius is measured along this axis, and
    /// -   the "Y Direction" of theA defines the minor axis of
    /// the hyperbola, that is, the minor radius
    /// theMinorRadius is measured along this axis, and
    /// -   the orientation (direct or indirect sense) of theA
    /// gives the implicit orientation of the hyperbola.
    /// Warnings :
    /// It is yet  possible to create an Hyperbola with
    /// theMajorRadius <= theMinorRadius.
    /// Raises ConstructionError if theMajorRadius < 0.0 or theMinorRadius < 0.0
    /// </summary>
    gp_Hypr2d(Macad::Occt::Ax22d theA, double theMajorRadius, double theMinorRadius);
    /// <summary>
    /// Modifies this hyperbola, by redefining its local
    /// coordinate system so that its origin becomes theP.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Modifies the major or minor radius of this hyperbola.
    /// Exceptions
    /// Standard_ConstructionError if theMajorRadius or
    /// MinorRadius is negative.
    /// </summary>
    void SetMajorRadius(double theMajorRadius);
    /// <summary>
    /// Modifies the major or minor radius of this hyperbola.
    /// Exceptions
    /// Standard_ConstructionError if MajorRadius or
    /// theMinorRadius is negative.
    /// </summary>
    void SetMinorRadius(double theMinorRadius);
    /// <summary>
    /// Modifies this hyperbola, by redefining its local
    /// coordinate system so that it becomes theA.
    /// </summary>
    void SetAxis(Macad::Occt::Ax22d theA);
    /// <summary>
    /// Changes the major axis of the hyperbola. The minor axis is
    /// recomputed and the location of the hyperbola too.
    /// </summary>
    void SetXAxis(Macad::Occt::Ax2d theA);
    /// <summary>
    /// Changes the minor axis of the hyperbola.The minor axis is
    /// recomputed and the location of the hyperbola too.
    /// </summary>
    void SetYAxis(Macad::Occt::Ax2d theA);
    /// <summary>
    /// In the local coordinate system of the hyperbola the equation of
    /// the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the
    /// equation of the first asymptote is Y = (B/A)*X
    /// where A is the major radius of the hyperbola and B the minor
    /// radius of the hyperbola.
    /// Raises ConstructionError if MajorRadius = 0.0
    /// </summary>
    Macad::Occt::Ax2d Asymptote1();
    /// <summary>
    /// In the local coordinate system of the hyperbola the equation of
    /// the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 and the
    /// equation of the first asymptote is Y = -(B/A)*X
    /// where A is the major radius of the hyperbola and B the minor
    /// radius of the hyperbola.
    /// Raises ConstructionError if MajorRadius = 0.0
    /// </summary>
    Macad::Occt::Ax2d Asymptote2();
    /// <summary>
    /// Computes the coefficients of the implicit equation of
    /// the hyperbola :
    /// theA * (X**2) + theB * (Y**2) + 2*theC*(X*Y) + 2*theD*X + 2*theE*Y + theF = 0.
    /// </summary>
    void Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF);
    /// <summary>
    /// Computes the branch of hyperbola which is on the positive side of the
    /// "YAxis" of <me>.
    /// </summary>
    Macad::Occt::gp_Hypr2d^ ConjugateBranch1();
    /// <summary>
    /// Computes the branch of hyperbola which is on the negative side of the
    /// "YAxis" of <me>.
    /// </summary>
    Macad::Occt::gp_Hypr2d^ ConjugateBranch2();
    /// <summary>
    /// Computes the directrix which is the line normal to the XAxis of the hyperbola
    /// in the local plane (Z = 0) at a distance d = MajorRadius / e
    /// from the center of the hyperbola, where e is the eccentricity of
    /// the hyperbola.
    /// This line is parallel to the "YAxis". The intersection point
    /// between the "Directrix1" and the "XAxis" is the "Location" point
    /// of the "Directrix1".
    /// This point is on the positive side of the "XAxis".
    /// </summary>
    Macad::Occt::Ax2d Directrix1();
    /// <summary>
    /// This line is obtained by the symmetrical transformation
    /// of "Directrix1" with respect to the "YAxis" of the hyperbola.
    /// </summary>
    Macad::Occt::Ax2d Directrix2();
    /// <summary>
    /// Returns the eccentricity of the hyperbola (e > 1).
    /// If f is the distance between the location of the hyperbola
    /// and the Focus1 then the eccentricity e = f / MajorRadius. Raises DomainError if MajorRadius =
    /// 0.0.
    /// </summary>
    double Eccentricity();
    /// <summary>
    /// Computes the focal distance. It is the distance between the
    /// "Location" of the hyperbola and "Focus1" or "Focus2".
    /// </summary>
    double Focal();
    /// <summary>
    /// Returns the first focus of the hyperbola. This focus is on the
    /// positive side of the "XAxis" of the hyperbola.
    /// </summary>
    Macad::Occt::Pnt2d Focus1();
    /// <summary>
    /// Returns the second focus of the hyperbola. This focus is on the
    /// negative side of the "XAxis" of the hyperbola.
    /// </summary>
    Macad::Occt::Pnt2d Focus2();
    /// <summary>
    /// Returns  the location point of the hyperbola.
    /// It is the intersection point between the "XAxis" and
    /// the "YAxis".
    /// </summary>
    Macad::Occt::Pnt2d Location();
    /// <summary>
    /// Returns the major radius of the hyperbola (it is the radius
    /// corresponding to the "XAxis" of the hyperbola).
    /// </summary>
    double MajorRadius();
    /// <summary>
    /// Returns the minor radius of the hyperbola (it is the radius
    /// corresponding to the "YAxis" of the hyperbola).
    /// </summary>
    double MinorRadius();
    /// <summary>
    /// Returns the branch of hyperbola obtained by doing the
    /// symmetrical transformation of <me> with respect to the
    /// "YAxis" of <me>.
    /// </summary>
    Macad::Occt::gp_Hypr2d^ OtherBranch();
    /// <summary>
    /// Returns p = (e * e - 1) * MajorRadius where e is the
    /// eccentricity of the hyperbola.
    /// Raises DomainError if MajorRadius = 0.0
    /// </summary>
    double Parameter();
    /// <summary>
    /// Returns the axisplacement of the hyperbola.
    /// </summary>
    Macad::Occt::Ax22d Axis();
    /// <summary>
    /// Computes an axis whose
    /// -   the origin is the center of this hyperbola, and
    /// -   the unit vector is the "X Direction" or "Y Direction"
    /// respectively of the local coordinate system of this hyperbola
    /// Returns the major axis of the hyperbola.
    /// </summary>
    Macad::Occt::Ax2d XAxis();
    /// <summary>
    /// Computes an axis whose
    /// -   the origin is the center of this hyperbola, and
    /// -   the unit vector is the "X Direction" or "Y Direction"
    /// respectively of the local coordinate system of this hyperbola
    /// Returns the minor axis of the hyperbola.
    /// </summary>
    Macad::Occt::Ax2d YAxis();
    void Reverse();
    /// <summary>
    /// Reverses the orientation of the local coordinate system
    /// of this hyperbola (the "Y Axis" is reversed). Therefore,
    /// the implicit orientation of this hyperbola is reversed.
    /// Note:
    /// -   Reverse assigns the result to this hyperbola, while
    /// -   Reversed creates a new one.
    /// </summary>
    Macad::Occt::gp_Hypr2d^ Reversed();
    /// <summary>
    /// Returns true if the local coordinate system is direct
    /// and false in the other case.
    /// </summary>
    bool IsDirect();
    void Mirror(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Performs the symmetrical transformation of an hyperbola with
    /// respect  to the point theP which is the center of the symmetry.
    /// </summary>
    Macad::Occt::gp_Hypr2d^ Mirrored(Macad::Occt::Pnt2d theP);
    void Mirror(Macad::Occt::Ax2d theA);
    /// <summary>
    /// Performs the symmetrical transformation of an hyperbola with
    /// respect to an axis placement which is the axis of the symmetry.
    /// </summary>
    Macad::Occt::gp_Hypr2d^ Mirrored(Macad::Occt::Ax2d theA);
    void Rotate(Macad::Occt::Pnt2d theP, double theAng);
    /// <summary>
    /// Rotates an hyperbola. theP is the center of the rotation.
    /// theAng is the angular value of the rotation in radians.
    /// </summary>
    Macad::Occt::gp_Hypr2d^ Rotated(Macad::Occt::Pnt2d theP, double theAng);
    void Scale(Macad::Occt::Pnt2d theP, double theS);
    /// <summary>
    /// Scales an hyperbola. <theS> is the scaling value.
    /// If <theS> is positive only the location point is
    /// modified. But if <theS> is negative the "XAxis" is
    /// reversed and the "YAxis" too.
    /// </summary>
    Macad::Occt::gp_Hypr2d^ Scaled(Macad::Occt::Pnt2d theP, double theS);
    void Transform(Macad::Occt::Trsf2d theT);
    /// <summary>
    /// Transforms an hyperbola with the transformation theT from
    /// class Trsf2d.
    /// </summary>
    Macad::Occt::gp_Hypr2d^ Transformed(Macad::Occt::Trsf2d theT);
    void Translate(Macad::Occt::Vec2d theV);
    /// <summary>
    /// Translates an hyperbola in the direction of the vector theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Hypr2d^ Translated(Macad::Occt::Vec2d theV);
    void Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
    /// <summary>
    /// Translates an hyperbola from the point theP1 to the point theP2.
    /// </summary>
    Macad::Occt::gp_Hypr2d^ Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
}; // class gp_Hypr2d

//---------------------------------------------------------------------
//  Class  gp_Lin
//---------------------------------------------------------------------
/// <summary>
/// Describes a line in 3D space.
/// A line is positioned in space with an axis (a gp_Ax1
/// object) which gives it an origin and a unit vector.
/// A line and an axis are similar objects, thus, we can
/// convert one into the other. A line provides direct access
/// to the majority of the edit and query functions available
/// on its positioning axis. In addition, however, a line has
/// specific functions for computing distances and positions.
/// See Also
/// gce_MakeLin which provides functions for more complex
/// line constructions
/// Geom_Line which provides additional functions for
/// constructing lines and works, in particular, with the
/// parametric equations of lines
/// </summary>
public ref class gp_Lin sealed
    : public Macad::Occt::BaseClass<::gp_Lin>
{

#ifdef Include_gp_Lin_h
public:
    Include_gp_Lin_h
#endif

public:
    gp_Lin(::gp_Lin* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Lin>( nativeInstance, true )
    {}

    gp_Lin(::gp_Lin& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Lin>( &nativeInstance, false )
    {}

    property ::gp_Lin* NativeInstance
    {
        ::gp_Lin* get()
        {
            return static_cast<::gp_Lin*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a Line corresponding to Z axis of the
    /// reference coordinate system.
    /// </summary>
    gp_Lin();
    /// <summary>
    /// Creates a line defined by axis theA1.
    /// </summary>
    gp_Lin(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Creates a line passing through point theP and parallel to
    /// vector theV (theP and theV are, respectively, the origin and
    /// the unit vector of the positioning axis of the line).
    /// </summary>
    gp_Lin(Macad::Occt::Pnt theP, Macad::Occt::Dir theV);
    void Reverse();
    /// <summary>
    /// Reverses the direction of the line.
    /// Note:
    /// -   Reverse assigns the result to this line, while
    /// -   Reversed creates a new one.
    /// </summary>
    Macad::Occt::gp_Lin^ Reversed();
    /// <summary>
    /// Changes the direction of the line.
    /// </summary>
    void SetDirection(Macad::Occt::Dir theV);
    /// <summary>
    /// Changes the location point (origin) of the line.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt theP);
    /// <summary>
    /// Complete redefinition of the line.
    /// The "Location" point of <theA1> is the origin of the line.
    /// The "Direction" of <theA1> is  the direction of the line.
    /// </summary>
    void SetPosition(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Returns the direction of the line.
    /// </summary>
    Macad::Occt::Dir Direction();
    /// <summary>
    /// Returns the location point (origin) of the line.
    /// </summary>
    Macad::Occt::Pnt Location();
    /// <summary>
    /// Returns the axis placement one axis with the same
    /// location and direction as <me>.
    /// </summary>
    Macad::Occt::Ax1 Position();
    /// <summary>
    /// Computes the angle between two lines in radians.
    /// </summary>
    double Angle(Macad::Occt::gp_Lin^ theOther);
    /// <summary>
    /// Returns true if this line contains the point theP, that is, if the
    /// distance between point theP and this line is less than or
    /// equal to theLinearTolerance..
    /// </summary>
    bool Contains(Macad::Occt::Pnt theP, double theLinearTolerance);
    /// <summary>
    /// Computes the distance between <me> and the point theP.
    /// </summary>
    double Distance(Macad::Occt::Pnt theP);
    /// <summary>
    /// Computes the distance between two lines.
    /// </summary>
    double Distance(Macad::Occt::gp_Lin^ theOther);
    /// <summary>
    /// Computes the square distance between <me> and the point theP.
    /// </summary>
    double SquareDistance(Macad::Occt::Pnt theP);
    /// <summary>
    /// Computes the square distance between two lines.
    /// </summary>
    double SquareDistance(Macad::Occt::gp_Lin^ theOther);
    /// <summary>
    /// Computes the line normal to the direction of <me>, passing
    /// through the point theP.  Raises ConstructionError
    /// if the distance between <me> and the point theP is lower
    /// or equal to Resolution from gp because there is an infinity of
    /// solutions in 3D space.
    /// </summary>
    Macad::Occt::gp_Lin^ Normal(Macad::Occt::Pnt theP);
    void Mirror(Macad::Occt::Pnt theP);
    /// <summary>
    /// Performs the symmetrical transformation of a line
    /// with respect to the point theP which is the center of
    /// the symmetry.
    /// </summary>
    Macad::Occt::gp_Lin^ Mirrored(Macad::Occt::Pnt theP);
    void Mirror(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Performs the symmetrical transformation of a line
    /// with respect to an axis placement which is the axis
    /// of the symmetry.
    /// </summary>
    Macad::Occt::gp_Lin^ Mirrored(Macad::Occt::Ax1 theA1);
    void Mirror(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Performs the symmetrical transformation of a line
    /// with respect to a plane. The axis placement  <theA2>
    /// locates the plane of the symmetry :
    /// (Location, XDirection, YDirection).
    /// </summary>
    Macad::Occt::gp_Lin^ Mirrored(Macad::Occt::Ax2 theA2);
    void Rotate(Macad::Occt::Ax1 theA1, double theAng);
    /// <summary>
    /// Rotates a line. A1 is the axis of the rotation.
    /// Ang is the angular value of the rotation in radians.
    /// </summary>
    Macad::Occt::gp_Lin^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
    void Scale(Macad::Occt::Pnt theP, double theS);
    /// <summary>
    /// Scales a line. theS is the scaling value.
    /// The "Location" point (origin) of the line is modified.
    /// The "Direction" is reversed if the scale is negative.
    /// </summary>
    Macad::Occt::gp_Lin^ Scaled(Macad::Occt::Pnt theP, double theS);
    void Transform(Macad::Occt::Trsf theT);
    /// <summary>
    /// Transforms a line with the transformation theT from class Trsf.
    /// </summary>
    Macad::Occt::gp_Lin^ Transformed(Macad::Occt::Trsf theT);
    void Translate(Macad::Occt::Vec theV);
    /// <summary>
    /// Translates a line in the direction of the vector theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Lin^ Translated(Macad::Occt::Vec theV);
    void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
    /// <summary>
    /// Translates a line from the point theP1 to the point theP2.
    /// </summary>
    Macad::Occt::gp_Lin^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Lin

//---------------------------------------------------------------------
//  Class  gp_Lin2d
//---------------------------------------------------------------------
/// <summary>
/// Describes a line in 2D space.
/// A line is positioned in the plane with an axis (a gp_Ax2d
/// object) which gives the line its origin and unit vector. A
/// line and an axis are similar objects, thus, we can convert
/// one into the other.
/// A line provides direct access to the majority of the edit
/// and query functions available on its positioning axis. In
/// addition, however, a line has specific functions for
/// computing distances and positions.
/// See Also
/// GccAna and Geom2dGcc packages which provide
/// functions for constructing lines defined by geometric
/// constraints
/// gce_MakeLin2d which provides functions for more
/// complex line constructions
/// Geom2d_Line which provides additional functions for
/// constructing lines and works, in particular, with the
/// parametric equations of lines
/// </summary>
public ref class gp_Lin2d sealed
    : public Macad::Occt::BaseClass<::gp_Lin2d>
{

#ifdef Include_gp_Lin2d_h
public:
    Include_gp_Lin2d_h
#endif

public:
    gp_Lin2d(::gp_Lin2d* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Lin2d>( nativeInstance, true )
    {}

    gp_Lin2d(::gp_Lin2d& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Lin2d>( &nativeInstance, false )
    {}

    property ::gp_Lin2d* NativeInstance
    {
        ::gp_Lin2d* get()
        {
            return static_cast<::gp_Lin2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates a Line corresponding to X axis of the
    /// reference coordinate system.
    /// </summary>
    gp_Lin2d();
    /// <summary>
    /// Creates a line located with theA.
    /// </summary>
    gp_Lin2d(Macad::Occt::Ax2d theA);
    /// <summary>
    /// <theP> is the location point (origin) of the line and
    /// <theV> is the direction of the line.
    /// </summary>
    gp_Lin2d(Macad::Occt::Pnt2d theP, Macad::Occt::Dir2d theV);
    /// <summary>
    /// Creates the line from the equation theA*X + theB*Y + theC = 0.0 Raises ConstructionError if
    /// Sqrt(theA*theA + theB*theB) <= Resolution from gp. Raised if Sqrt(theA*theA + theB*theB) <=
    /// Resolution from gp.
    /// </summary>
    gp_Lin2d(double theA, double theB, double theC);
    void Reverse();
    /// <summary>
    /// Reverses the positioning axis of this line.
    /// Note:
    /// -   Reverse assigns the result to this line, while
    /// -   Reversed creates a new one.
    /// </summary>
    Macad::Occt::gp_Lin2d^ Reversed();
    /// <summary>
    /// Changes the direction of the line.
    /// </summary>
    void SetDirection(Macad::Occt::Dir2d theV);
    /// <summary>
    /// Changes the origin of the line.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Complete redefinition of the line.
    /// The "Location" point of <theA> is the origin of the line.
    /// The "Direction" of <theA> is  the direction of the line.
    /// </summary>
    void SetPosition(Macad::Occt::Ax2d theA);
    /// <summary>
    /// Returns the normalized coefficients of the line :
    /// theA * X + theB * Y + theC = 0.
    /// </summary>
    void Coefficients(double% theA, double% theB, double% theC);
    /// <summary>
    /// Returns the direction of the line.
    /// </summary>
    Macad::Occt::Dir2d Direction();
    /// <summary>
    /// Returns the location point (origin) of the line.
    /// </summary>
    Macad::Occt::Pnt2d Location();
    /// <summary>
    /// Returns the axis placement one axis with the same
    /// location and direction as <me>.
    /// </summary>
    Macad::Occt::Ax2d Position();
    /// <summary>
    /// Computes the angle between two lines in radians.
    /// </summary>
    double Angle(Macad::Occt::gp_Lin2d^ theOther);
    /// <summary>
    /// Returns true if this line contains the point theP, that is, if the
    /// distance between point theP and this line is less than or
    /// equal to theLinearTolerance.
    /// </summary>
    bool Contains(Macad::Occt::Pnt2d theP, double theLinearTolerance);
    /// <summary>
    /// Computes the distance between <me> and the point <theP>.
    /// </summary>
    double Distance(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Computes the distance between two lines.
    /// </summary>
    double Distance(Macad::Occt::gp_Lin2d^ theOther);
    /// <summary>
    /// Computes the square distance between <me> and the point
    /// <theP>.
    /// </summary>
    double SquareDistance(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Computes the square distance between two lines.
    /// </summary>
    double SquareDistance(Macad::Occt::gp_Lin2d^ theOther);
    /// <summary>
    /// Computes the line normal to the direction of <me>,
    /// passing through the point <theP>.
    /// </summary>
    Macad::Occt::gp_Lin2d^ Normal(Macad::Occt::Pnt2d theP);
    void Mirror(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Performs the symmetrical transformation of a line
    /// with respect to the point <theP> which is the center
    /// of the symmetry
    /// </summary>
    Macad::Occt::gp_Lin2d^ Mirrored(Macad::Occt::Pnt2d theP);
    void Mirror(Macad::Occt::Ax2d theA);
    /// <summary>
    /// Performs the symmetrical transformation of a line
    /// with respect to an axis placement which is the axis
    /// of the symmetry.
    /// </summary>
    Macad::Occt::gp_Lin2d^ Mirrored(Macad::Occt::Ax2d theA);
    void Rotate(Macad::Occt::Pnt2d theP, double theAng);
    /// <summary>
    /// Rotates a line. theP is the center of the rotation.
    /// theAng is the angular value of the rotation in radians.
    /// </summary>
    Macad::Occt::gp_Lin2d^ Rotated(Macad::Occt::Pnt2d theP, double theAng);
    void Scale(Macad::Occt::Pnt2d theP, double theS);
    /// <summary>
    /// Scales a line. theS is the scaling value. Only the
    /// origin of the line is modified.
    /// </summary>
    Macad::Occt::gp_Lin2d^ Scaled(Macad::Occt::Pnt2d theP, double theS);
    void Transform(Macad::Occt::Trsf2d theT);
    /// <summary>
    /// Transforms a line with the transformation theT from class Trsf2d.
    /// </summary>
    Macad::Occt::gp_Lin2d^ Transformed(Macad::Occt::Trsf2d theT);
    void Translate(Macad::Occt::Vec2d theV);
    /// <summary>
    /// Translates a line in the direction of the vector theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Lin2d^ Translated(Macad::Occt::Vec2d theV);
    void Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
    /// <summary>
    /// Translates a line from the point theP1 to the point theP2.
    /// </summary>
    Macad::Occt::gp_Lin2d^ Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
}; // class gp_Lin2d

//---------------------------------------------------------------------
//  Class  gp_Parab
//---------------------------------------------------------------------
/// <summary>
/// Describes a parabola in 3D space.
/// A parabola is defined by its focal length (that is, the
/// distance between its focus and apex) and positioned in
/// space with a coordinate system (a gp_Ax2 object)
/// where:
/// -   the origin of the coordinate system is on the apex of
/// the parabola,
/// -   the "X Axis" of the coordinate system is the axis of
/// symmetry; the parabola is on the positive side of this axis, and
/// -   the origin, "X Direction" and "Y Direction" of the
/// coordinate system define the plane of the parabola.
/// The equation of the parabola in this coordinate system,
/// which is the "local coordinate system" of the parabola, is:
/// </summary>
/// @code
/// Y**2 = (2*P) * X.
/// @endcode
/// where P, referred to as the parameter of the parabola, is
/// the distance between the focus and the directrix (P is
/// twice the focal length).
/// The "main Direction" of the local coordinate system gives
/// the normal vector to the plane of the parabola.
/// See Also
/// gce_MakeParab which provides functions for more
/// complex parabola constructions
/// Geom_Parabola which provides additional functions for
/// constructing parabolas and works, in particular, with the
/// parametric equations of parabolas
public ref class gp_Parab sealed
    : public Macad::Occt::BaseClass<::gp_Parab>
{

#ifdef Include_gp_Parab_h
public:
    Include_gp_Parab_h
#endif

public:
    gp_Parab(::gp_Parab* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Parab>( nativeInstance, true )
    {}

    gp_Parab(::gp_Parab& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Parab>( &nativeInstance, false )
    {}

    property ::gp_Parab* NativeInstance
    {
        ::gp_Parab* get()
        {
            return static_cast<::gp_Parab*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an indefinite Parabola.
    /// </summary>
    gp_Parab();
    /// <summary>
    /// Creates a parabola with its local coordinate system "theA2"
    /// and it's focal length "Focal".
    /// The XDirection of theA2 defines the axis of symmetry of the
    /// parabola. The YDirection of theA2 is parallel to the directrix
    /// of the parabola. The Location point of theA2 is the vertex of
    /// the parabola
    /// Raises ConstructionError if theFocal < 0.0
    /// Raised if theFocal < 0.0
    /// </summary>
    gp_Parab(Macad::Occt::Ax2 theA2, double theFocal);
    /// <summary>
    /// theD is the directrix of the parabola and theF the focus point.
    /// The symmetry axis (XAxis) of the parabola is normal to the
    /// directrix and pass through the focus point theF, but its
    /// location point is the vertex of the parabola.
    /// The YAxis of the parabola is parallel to theD and its location
    /// point is the vertex of the parabola. The normal to the plane
    /// of the parabola is the cross product between the XAxis and the
    /// YAxis.
    /// </summary>
    gp_Parab(Macad::Occt::Ax1 theD, Macad::Occt::Pnt theF);
    /// <summary>
    /// Modifies this parabola by redefining its local coordinate system so that
    /// -   its origin and "main Direction" become those of the
    /// axis theA1 (the "X Direction" and "Y Direction" are then
    /// recomputed in the same way as for any gp_Ax2)
    /// Raises ConstructionError if the direction of theA1 is parallel to the previous
    /// XAxis of the parabola.
    /// </summary>
    void SetAxis(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Changes the focal distance of the parabola.
    /// Raises ConstructionError if theFocal < 0.0
    /// </summary>
    void SetFocal(double theFocal);
    /// <summary>
    /// Changes the location of the parabola. It is the vertex of
    /// the parabola.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt theP);
    /// <summary>
    /// Changes the local coordinate system of the parabola.
    /// </summary>
    void SetPosition(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Returns the main axis of the parabola.
    /// It is the axis normal to the plane of the parabola passing
    /// through the vertex of the parabola.
    /// </summary>
    Macad::Occt::Ax1 Axis();
    /// <summary>
    /// Computes the directrix of this parabola.
    /// The directrix is:
    /// -   a line parallel to the "Y Direction" of the local
    /// coordinate system of this parabola, and
    /// -   located on the negative side of the axis of symmetry,
    /// at a distance from the apex which is equal to the focal
    /// length of this parabola.
    /// The directrix is returned as an axis (a gp_Ax1 object),
    /// the origin of which is situated on the "X Axis" of this parabola.
    /// </summary>
    Macad::Occt::Ax1 Directrix();
    /// <summary>
    /// Returns the distance between the vertex and the focus
    /// of the parabola.
    /// </summary>
    double Focal();
    /// <summary>
    /// -   Computes the focus of the parabola.
    /// </summary>
    Macad::Occt::Pnt Focus();
    /// <summary>
    /// Returns the vertex of the parabola. It is the "Location"
    /// point of the coordinate system of the parabola.
    /// </summary>
    Macad::Occt::Pnt Location();
    /// <summary>
    /// Computes the parameter of the parabola.
    /// It is the distance between the focus and the directrix of
    /// the parabola. This distance is twice the focal length.
    /// </summary>
    double Parameter();
    /// <summary>
    /// Returns the local coordinate system of the parabola.
    /// </summary>
    Macad::Occt::Ax2 Position();
    /// <summary>
    /// Returns the symmetry axis of the parabola. The location point
    /// of the axis is the vertex of the parabola.
    /// </summary>
    Macad::Occt::Ax1 XAxis();
    /// <summary>
    /// It is an axis parallel to the directrix of the parabola.
    /// The location point of this axis is the vertex of the parabola.
    /// </summary>
    Macad::Occt::Ax1 YAxis();
    void Mirror(Macad::Occt::Pnt theP);
    /// <summary>
    /// Performs the symmetrical transformation of a parabola
    /// with respect to the point theP which is the center of the
    /// symmetry.
    /// </summary>
    Macad::Occt::gp_Parab^ Mirrored(Macad::Occt::Pnt theP);
    void Mirror(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Performs the symmetrical transformation of a parabola
    /// with respect to an axis placement which is the axis of
    /// the symmetry.
    /// </summary>
    Macad::Occt::gp_Parab^ Mirrored(Macad::Occt::Ax1 theA1);
    void Mirror(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Performs the symmetrical transformation of a parabola
    /// with respect to a plane. The axis placement theA2 locates
    /// the plane of the symmetry (Location, XDirection, YDirection).
    /// </summary>
    Macad::Occt::gp_Parab^ Mirrored(Macad::Occt::Ax2 theA2);
    void Rotate(Macad::Occt::Ax1 theA1, double theAng);
    /// <summary>
    /// Rotates a parabola. theA1 is the axis of the rotation.
    /// Ang is the angular value of the rotation in radians.
    /// </summary>
    Macad::Occt::gp_Parab^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
    void Scale(Macad::Occt::Pnt theP, double theS);
    /// <summary>
    /// Scales a parabola. theS is the scaling value.
    /// If theS is negative the direction of the symmetry axis
    /// XAxis is reversed and the direction of the YAxis too.
    /// </summary>
    Macad::Occt::gp_Parab^ Scaled(Macad::Occt::Pnt theP, double theS);
    void Transform(Macad::Occt::Trsf theT);
    /// <summary>
    /// Transforms a parabola with the transformation theT from class Trsf.
    /// </summary>
    Macad::Occt::gp_Parab^ Transformed(Macad::Occt::Trsf theT);
    void Translate(Macad::Occt::Vec theV);
    /// <summary>
    /// Translates a parabola in the direction of the vector theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Parab^ Translated(Macad::Occt::Vec theV);
    void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
    /// <summary>
    /// Translates a parabola from the point theP1 to the point theP2.
    /// </summary>
    Macad::Occt::gp_Parab^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Parab

//---------------------------------------------------------------------
//  Class  gp_Parab2d
//---------------------------------------------------------------------
/// <summary>
/// Describes a parabola in the plane (2D space).
/// A parabola is defined by its focal length (that is, the
/// distance between its focus and apex) and positioned in
/// the plane with a coordinate system (a gp_Ax22d object) where:
/// -   the origin of the coordinate system is on the apex of
/// the parabola, and
/// -   the "X Axis" of the coordinate system is the axis of
/// symmetry; the parabola is on the positive side of this axis.
/// This coordinate system is the "local coordinate system"
/// of the parabola. Its orientation (direct or indirect sense)
/// gives an implicit orientation to the parabola.
/// In this coordinate system, the equation for the parabola is:
/// </summary>
/// @code
/// Y**2 = (2*P) * X.
/// @endcode
/// where P, referred to as the parameter of the parabola, is
/// the distance between the focus and the directrix (P is
/// twice the focal length).
/// See Also
/// GCE2d_MakeParab2d which provides functions for
/// more complex parabola constructions
/// Geom2d_Parabola which provides additional functions
/// for constructing parabolas and works, in particular, with
/// the parametric equations of parabolas
public ref class gp_Parab2d sealed
    : public Macad::Occt::BaseClass<::gp_Parab2d>
{

#ifdef Include_gp_Parab2d_h
public:
    Include_gp_Parab2d_h
#endif

public:
    gp_Parab2d(::gp_Parab2d* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Parab2d>( nativeInstance, true )
    {}

    gp_Parab2d(::gp_Parab2d& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Parab2d>( &nativeInstance, false )
    {}

    property ::gp_Parab2d* NativeInstance
    {
        ::gp_Parab2d* get()
        {
            return static_cast<::gp_Parab2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an indefinite parabola.
    /// </summary>
    gp_Parab2d();
    /// <summary>
    /// Creates a parabola with its vertex point, its axis of symmetry
    /// ("XAxis") and its focal length.
    /// The sense of parametrization is given by theSense. If theSense == TRUE
    /// (by default) then right-handed coordinate system is used,
    /// otherwise - left-handed.
    /// Warnings : It is possible to have FocalLength = 0. In this case,
    /// the parabola looks like a line, which is parallel to the symmetry-axis.
    /// Raises ConstructionError if FocalLength < 0.0
    /// </summary>
    gp_Parab2d(Macad::Occt::Ax2d theMirrorAxis, double theFocalLength, bool theSense);
    /// <summary>
    /// Creates a parabola with its vertex point, its axis of symmetry
    /// ("XAxis") and its focal length.
    /// The sense of parametrization is given by theSense. If theSense == TRUE
    /// (by default) then right-handed coordinate system is used,
    /// otherwise - left-handed.
    /// Warnings : It is possible to have FocalLength = 0. In this case,
    /// the parabola looks like a line, which is parallel to the symmetry-axis.
    /// Raises ConstructionError if FocalLength < 0.0
    /// </summary>
    gp_Parab2d(Macad::Occt::Ax2d theMirrorAxis, double theFocalLength);
    /// <summary>
    /// Creates a parabola with its vertex point, its axis of symmetry
    /// ("XAxis"), correspond Y-axis and its focal length.
    /// Warnings : It is possible to have FocalLength = 0. In this case,
    /// the parabola looks like a line, which is parallel to the symmetry-axis.
    /// Raises ConstructionError if Focal < 0.0
    /// </summary>
    gp_Parab2d(Macad::Occt::Ax22d theAxes, double theFocalLength);
    /// <summary>
    /// Creates a parabola with the directrix and the focus point.
    /// Y-axis of the parabola (in User Coordinate System - UCS) is
    /// the direction of theDirectrix. X-axis always directs from theDirectrix
    /// to theFocus point and always comes through theFocus.
    /// Apex of the parabola is a middle point between the theFocus and the
    /// intersection point of theDirectrix and the X-axis.
    /// Warnings : It is possible to have FocalLength = 0 (when theFocus lies
    /// in theDirectrix). In this case, X-direction of the parabola is defined
    /// by theSense parameter. If theSense == TRUE (by default) then right-handed
    /// coordinate system is used, otherwise - left-handed. Result parabola will look
    /// like a line, which is perpendicular to the directrix.
    /// </summary>
    gp_Parab2d(Macad::Occt::Ax2d theDirectrix, Macad::Occt::Pnt2d theFocus, bool theSense);
    /// <summary>
    /// Creates a parabola with the directrix and the focus point.
    /// Y-axis of the parabola (in User Coordinate System - UCS) is
    /// the direction of theDirectrix. X-axis always directs from theDirectrix
    /// to theFocus point and always comes through theFocus.
    /// Apex of the parabola is a middle point between the theFocus and the
    /// intersection point of theDirectrix and the X-axis.
    /// Warnings : It is possible to have FocalLength = 0 (when theFocus lies
    /// in theDirectrix). In this case, X-direction of the parabola is defined
    /// by theSense parameter. If theSense == TRUE (by default) then right-handed
    /// coordinate system is used, otherwise - left-handed. Result parabola will look
    /// like a line, which is perpendicular to the directrix.
    /// </summary>
    gp_Parab2d(Macad::Occt::Ax2d theDirectrix, Macad::Occt::Pnt2d theFocus);
    /// <summary>
    /// Changes the focal distance of the parabola
    /// Warnings : It is possible to have theFocal = 0.
    /// Raises ConstructionError if theFocal < 0.0
    /// </summary>
    void SetFocal(double theFocal);
    /// <summary>
    /// Changes the "Location" point of the parabola. It is the
    /// vertex of the parabola.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Modifies this parabola, by redefining its local coordinate system so that
    /// its origin and "X Direction" become those of the axis
    /// MA. The "Y Direction" of the local coordinate system is
    /// then recomputed. The orientation of the local
    /// coordinate system is not modified.
    /// </summary>
    void SetMirrorAxis(Macad::Occt::Ax2d theA);
    /// <summary>
    /// Changes the local coordinate system of the parabola.
    /// The "Location" point of A becomes the vertex of the parabola.
    /// </summary>
    void SetAxis(Macad::Occt::Ax22d theA);
    /// <summary>
    /// Computes the coefficients of the implicit equation of the parabola
    /// (in WCS - World Coordinate System).
    /// </summary>
    /// @code
    /// theA * (X**2) + theB * (Y**2) + 2*theC*(X*Y) + 2*theD*X + 2*theE*Y + theF = 0.
    /// @endcode
    void Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF);
    /// <summary>
    /// Computes the directrix of the parabola.
    /// The directrix is:
    /// -   a line parallel to the "Y Direction" of the local
    /// coordinate system of this parabola, and
    /// -   located on the negative side of the axis of symmetry,
    /// at a distance from the apex which is equal to the focal  length of this parabola.
    /// The directrix is returned as an axis (a gp_Ax2d object),
    /// the origin of which is situated on the "X Axis" of this parabola.
    /// </summary>
    Macad::Occt::Ax2d Directrix();
    /// <summary>
    /// Returns the distance between the vertex and the focus
    /// of the parabola.
    /// </summary>
    double Focal();
    /// <summary>
    /// Returns the focus of the parabola.
    /// </summary>
    Macad::Occt::Pnt2d Focus();
    /// <summary>
    /// Returns the vertex of the parabola.
    /// </summary>
    Macad::Occt::Pnt2d Location();
    /// <summary>
    /// Returns the symmetry axis of the parabola.
    /// The "Location" point of this axis is the vertex of the parabola.
    /// </summary>
    Macad::Occt::Ax2d MirrorAxis();
    /// <summary>
    /// Returns the local coordinate system of the parabola.
    /// The "Location" point of this axis is the vertex of the parabola.
    /// </summary>
    Macad::Occt::Ax22d Axis();
    /// <summary>
    /// Returns the distance between the focus and the
    /// directrix of the parabola.
    /// </summary>
    double Parameter();
    void Reverse();
    /// <summary>
    /// Reverses the orientation of the local coordinate system
    /// of this parabola (the "Y Direction" is reversed).
    /// Therefore, the implicit orientation of this parabola is reversed.
    /// Note:
    /// -   Reverse assigns the result to this parabola, while
    /// -   Reversed creates a new one.
    /// </summary>
    Macad::Occt::gp_Parab2d^ Reversed();
    /// <summary>
    /// Returns true if the local coordinate system is direct
    /// and false in the other case.
    /// </summary>
    bool IsDirect();
    void Mirror(Macad::Occt::Pnt2d theP);
    /// <summary>
    /// Performs the symmetrical transformation of a parabola with respect
    /// to the point theP which is the center of the symmetry
    /// </summary>
    Macad::Occt::gp_Parab2d^ Mirrored(Macad::Occt::Pnt2d theP);
    void Mirror(Macad::Occt::Ax2d theA);
    /// <summary>
    /// Performs the symmetrical transformation of a parabola with respect
    /// to an axis placement which is the axis of the symmetry.
    /// </summary>
    Macad::Occt::gp_Parab2d^ Mirrored(Macad::Occt::Ax2d theA);
    void Rotate(Macad::Occt::Pnt2d theP, double theAng);
    /// <summary>
    /// Rotates a parabola. theP is the center of the rotation.
    /// theAng is the angular value of the rotation in radians.
    /// </summary>
    Macad::Occt::gp_Parab2d^ Rotated(Macad::Occt::Pnt2d theP, double theAng);
    void Scale(Macad::Occt::Pnt2d theP, double theS);
    /// <summary>
    /// Scales a parabola. theS is the scaling value.
    /// If theS is negative the direction of the symmetry axis
    /// "XAxis" is reversed and the direction of the "YAxis" too.
    /// </summary>
    Macad::Occt::gp_Parab2d^ Scaled(Macad::Occt::Pnt2d theP, double theS);
    void Transform(Macad::Occt::Trsf2d theT);
    /// <summary>
    /// Transforms an parabola with the transformation theT from class Trsf2d.
    /// </summary>
    Macad::Occt::gp_Parab2d^ Transformed(Macad::Occt::Trsf2d theT);
    void Translate(Macad::Occt::Vec2d theV);
    /// <summary>
    /// Translates a parabola in the direction of the vectorthe theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Parab2d^ Translated(Macad::Occt::Vec2d theV);
    void Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
    /// <summary>
    /// Translates a parabola from the point theP1 to the point theP2.
    /// </summary>
    Macad::Occt::gp_Parab2d^ Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
}; // class gp_Parab2d

//---------------------------------------------------------------------
//  Class  gp_QuaternionNLerp
//---------------------------------------------------------------------
/// <summary>
/// Class perform linear interpolation (approximate rotation interpolation),
/// result quaternion nonunit, its length lay between. sqrt(2)/2  and 1.0
/// </summary>
public ref class gp_QuaternionNLerp sealed
    : public Macad::Occt::BaseClass<::gp_QuaternionNLerp>
{

#ifdef Include_gp_QuaternionNLerp_h
public:
    Include_gp_QuaternionNLerp_h
#endif

public:
    gp_QuaternionNLerp(::gp_QuaternionNLerp* nativeInstance)
        : Macad::Occt::BaseClass<::gp_QuaternionNLerp>( nativeInstance, true )
    {}

    gp_QuaternionNLerp(::gp_QuaternionNLerp& nativeInstance)
        : Macad::Occt::BaseClass<::gp_QuaternionNLerp>( &nativeInstance, false )
    {}

    property ::gp_QuaternionNLerp* NativeInstance
    {
        ::gp_QuaternionNLerp* get()
        {
            return static_cast<::gp_QuaternionNLerp*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor,
    /// </summary>
    gp_QuaternionNLerp();
    /// <summary>
    /// Constructor with initialization.
    /// </summary>
    gp_QuaternionNLerp(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd);
    /// <summary>
    /// Compute interpolated quaternion between two quaternions.
    /// </summary>
    /// <param name="theStart">
    /// first  quaternion
    /// </param>
    /// <param name="theEnd">
    ///   second quaternion
    /// </param>
    /// <param name="theT">
    /// normalized interpolation coefficient within 0..1 range,
    /// with 0 pointing to theStart and 1 to theEnd.
    /// </param>
    static Macad::Occt::Quaternion Interpolate(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd, double theT);
    /// <summary>
    /// Initialize the tool with Start and End values.
    /// </summary>
    void Init(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd);
    /// <summary>
    /// Initialize the tool with Start and End unit quaternions.
    /// </summary>
    void InitFromUnit(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd);
    /// <summary>
    /// Set interpolated quaternion for theT position (from 0.0 to 1.0)
    /// </summary>
    void Interpolate(double theT, Macad::Occt::Quaternion% theResultQ);
}; // class gp_QuaternionNLerp

//---------------------------------------------------------------------
//  Class  gp_QuaternionSLerp
//---------------------------------------------------------------------
/// <summary>
/// Perform Spherical Linear Interpolation of the quaternions,
/// return unit length quaternion.
/// </summary>
public ref class gp_QuaternionSLerp sealed
    : public Macad::Occt::BaseClass<::gp_QuaternionSLerp>
{

#ifdef Include_gp_QuaternionSLerp_h
public:
    Include_gp_QuaternionSLerp_h
#endif

public:
    gp_QuaternionSLerp(::gp_QuaternionSLerp* nativeInstance)
        : Macad::Occt::BaseClass<::gp_QuaternionSLerp>( nativeInstance, true )
    {}

    gp_QuaternionSLerp(::gp_QuaternionSLerp& nativeInstance)
        : Macad::Occt::BaseClass<::gp_QuaternionSLerp>( &nativeInstance, false )
    {}

    property ::gp_QuaternionSLerp* NativeInstance
    {
        ::gp_QuaternionSLerp* get()
        {
            return static_cast<::gp_QuaternionSLerp*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor,
    /// </summary>
    gp_QuaternionSLerp();
    /// <summary>
    /// Constructor with initialization.
    /// </summary>
    gp_QuaternionSLerp(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd);
    /// <summary>
    /// Compute interpolated quaternion between two quaternions.
    /// </summary>
    /// <param name="theStart">
    /// first  quaternion
    /// </param>
    /// <param name="theEnd">
    ///   second quaternion
    /// </param>
    /// <param name="theT">
    /// normalized interpolation coefficient within 0..1 range,
    /// with 0 pointing to theStart and 1 to theEnd.
    /// </param>
    static Macad::Occt::Quaternion Interpolate(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd, double theT);
    /// <summary>
    /// Initialize the tool with Start and End values.
    /// </summary>
    void Init(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd);
    /// <summary>
    /// Initialize the tool with Start and End unit quaternions.
    /// </summary>
    void InitFromUnit(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd);
    /// <summary>
    /// Set interpolated quaternion for theT position (from 0.0 to 1.0)
    /// </summary>
    void Interpolate(double theT, Macad::Occt::Quaternion% theResultQ);
}; // class gp_QuaternionSLerp

//---------------------------------------------------------------------
//  Class  gp_Sphere
//---------------------------------------------------------------------
/// <summary>
/// Describes a sphere.
/// A sphere is defined by its radius and positioned in space
/// with a coordinate system (a gp_Ax3 object). The origin of
/// the coordinate system is the center of the sphere. This
/// coordinate system is the "local coordinate system" of the sphere.
/// Note: when a gp_Sphere sphere is converted into a
/// Geom_SphericalSurface sphere, some implicit
/// properties of its local coordinate system are used explicitly:
/// -   its origin, "X Direction", "Y Direction" and "main
/// Direction" are used directly to define the parametric
/// directions on the sphere and the origin of the parameters,
/// -   its implicit orientation (right-handed or left-handed)
/// gives the orientation (direct, indirect) to the
/// Geom_SphericalSurface sphere.
/// See Also
/// gce_MakeSphere which provides functions for more
/// complex sphere constructions
/// Geom_SphericalSurface which provides additional
/// functions for constructing spheres and works, in
/// particular, with the parametric equations of spheres.
/// </summary>
public ref class gp_Sphere sealed
    : public Macad::Occt::BaseClass<::gp_Sphere>
{

#ifdef Include_gp_Sphere_h
public:
    Include_gp_Sphere_h
#endif

public:
    gp_Sphere(::gp_Sphere* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Sphere>( nativeInstance, true )
    {}

    gp_Sphere(::gp_Sphere& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Sphere>( &nativeInstance, false )
    {}

    property ::gp_Sphere* NativeInstance
    {
        ::gp_Sphere* get()
        {
            return static_cast<::gp_Sphere*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Creates an indefinite sphere.
    /// </summary>
    gp_Sphere();
    /// <summary>
    /// Constructs a sphere with radius theRadius, centered on the origin
    /// of theA3.  theA3 is the local coordinate system of the sphere.
    /// Warnings :
    /// It is not forbidden to create a sphere with null radius.
    /// Raises ConstructionError if theRadius < 0.0
    /// </summary>
    gp_Sphere(Macad::Occt::Ax3 theA3, double theRadius);
    /// <summary>
    /// Changes the center of the sphere.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt theLoc);
    /// <summary>
    /// Changes the local coordinate system of the sphere.
    /// </summary>
    void SetPosition(Macad::Occt::Ax3 theA3);
    /// <summary>
    /// Assigns theR the radius of the Sphere.
    /// Warnings :
    /// It is not forbidden to create a sphere with null radius.
    /// Raises ConstructionError if theR < 0.0
    /// </summary>
    void SetRadius(double theR);
    /// <summary>
    /// Computes the area of the sphere.
    /// </summary>
    double Area();
    /// <summary>
    /// Computes the coefficients of the implicit equation of the quadric
    /// in the absolute cartesian coordinates system :
    /// </summary>
    /// @code
    /// theA1.X**2 + theA2.Y**2 + theA3.Z**2 + 2.(theB1.X.Y + theB2.X.Z + theB3.Y.Z) +
    /// 2.(theC1.X + theC2.Y + theC3.Z) + theD = 0.0
    /// @endcode
    void Coefficients(double% theA1, double% theA2, double% theA3, double% theB1, double% theB2, double% theB3, double% theC1, double% theC2, double% theC3, double% theD);
    /// <summary>
    /// Reverses the   U   parametrization of   the sphere
    /// reversing the YAxis.
    /// </summary>
    void UReverse();
    /// <summary>
    /// Reverses the   V   parametrization of   the  sphere
    /// reversing the ZAxis.
    /// </summary>
    void VReverse();
    /// <summary>
    /// Returns true if the local coordinate system of this sphere
    /// is right-handed.
    /// </summary>
    bool Direct();
    /// <summary>
    /// --- Purpose ;
    /// Returns the center of the sphere.
    /// </summary>
    Macad::Occt::Pnt Location();
    /// <summary>
    /// Returns the local coordinates system of the sphere.
    /// </summary>
    Macad::Occt::Ax3 Position();
    /// <summary>
    /// Returns the radius of the sphere.
    /// </summary>
    double Radius();
    /// <summary>
    /// Computes the volume of the sphere
    /// </summary>
    double Volume();
    /// <summary>
    /// Returns the axis X of the sphere.
    /// </summary>
    Macad::Occt::Ax1 XAxis();
    /// <summary>
    /// Returns the axis Y of the sphere.
    /// </summary>
    Macad::Occt::Ax1 YAxis();
    void Mirror(Macad::Occt::Pnt theP);
    /// <summary>
    /// Performs the symmetrical transformation of a sphere
    /// with respect to the point theP which is the center of the
    /// symmetry.
    /// </summary>
    Macad::Occt::gp_Sphere^ Mirrored(Macad::Occt::Pnt theP);
    void Mirror(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Performs the symmetrical transformation of a sphere with
    /// respect to an axis placement which is the axis of the
    /// symmetry.
    /// </summary>
    Macad::Occt::gp_Sphere^ Mirrored(Macad::Occt::Ax1 theA1);
    void Mirror(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Performs the symmetrical transformation of a sphere with respect
    /// to a plane. The axis placement theA2 locates the plane of the
    /// of the symmetry : (Location, XDirection, YDirection).
    /// </summary>
    Macad::Occt::gp_Sphere^ Mirrored(Macad::Occt::Ax2 theA2);
    void Rotate(Macad::Occt::Ax1 theA1, double theAng);
    /// <summary>
    /// Rotates a sphere. theA1 is the axis of the rotation.
    /// theAng is the angular value of the rotation in radians.
    /// </summary>
    Macad::Occt::gp_Sphere^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
    void Scale(Macad::Occt::Pnt theP, double theS);
    /// <summary>
    /// Scales a sphere. theS is the scaling value.
    /// The absolute value of S is used to scale the sphere
    /// </summary>
    Macad::Occt::gp_Sphere^ Scaled(Macad::Occt::Pnt theP, double theS);
    void Transform(Macad::Occt::Trsf theT);
    /// <summary>
    /// Transforms a sphere with the transformation theT from class Trsf.
    /// </summary>
    Macad::Occt::gp_Sphere^ Transformed(Macad::Occt::Trsf theT);
    void Translate(Macad::Occt::Vec theV);
    /// <summary>
    /// Translates a sphere in the direction of the vector theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Sphere^ Translated(Macad::Occt::Vec theV);
    void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
    /// <summary>
    /// Translates a sphere from the point theP1 to the point theP2.
    /// </summary>
    Macad::Occt::gp_Sphere^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Sphere

//---------------------------------------------------------------------
//  Class  gp_Torus
//---------------------------------------------------------------------
/// <summary>
/// Describes a torus.
/// A torus is defined by its major and minor radii and
/// positioned in space with a coordinate system (a gp_Ax3
/// object) as follows:
/// -   The origin of the coordinate system is the center of the torus;
/// -   The surface is obtained by rotating a circle of radius
/// equal to the minor radius of the torus about the "main
/// Direction" of the coordinate system. This circle is
/// located in the plane defined by the origin, the "X
/// Direction" and the "main Direction" of the coordinate
/// system. It is centered on the "X Axis" of this coordinate
/// system, and located at a distance, from the origin of
/// this coordinate system, equal to the major radius of the   torus;
/// -   The "X Direction" and "Y Direction" define the
/// reference plane of the torus.
/// The coordinate system described above is the "local
/// coordinate system" of the torus.
/// Note: when a gp_Torus torus is converted into a
/// Geom_ToroidalSurface torus, some implicit properties
/// of its local coordinate system are used explicitly:
/// -   its origin, "X Direction", "Y Direction" and "main
/// Direction" are used directly to define the parametric
/// directions on the torus and the origin of the parameters,
/// -   its implicit orientation (right-handed or left-handed)
/// gives the orientation (direct, indirect) to the
/// Geom_ToroidalSurface torus.
/// See Also
/// gce_MakeTorus which provides functions for more
/// complex torus constructions
/// Geom_ToroidalSurface which provides additional
/// functions for constructing tori and works, in particular,
/// with the parametric equations of tori.
/// </summary>
public ref class gp_Torus sealed
    : public Macad::Occt::BaseClass<::gp_Torus>
{

#ifdef Include_gp_Torus_h
public:
    Include_gp_Torus_h
#endif

public:
    gp_Torus(::gp_Torus* nativeInstance)
        : Macad::Occt::BaseClass<::gp_Torus>( nativeInstance, true )
    {}

    gp_Torus(::gp_Torus& nativeInstance)
        : Macad::Occt::BaseClass<::gp_Torus>( &nativeInstance, false )
    {}

    property ::gp_Torus* NativeInstance
    {
        ::gp_Torus* get()
        {
            return static_cast<::gp_Torus*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// creates an indefinite Torus.
    /// </summary>
    gp_Torus();
    /// <summary>
    /// a torus centered on the origin of coordinate system
    /// theA3, with major radius theMajorRadius and minor radius
    /// theMinorRadius, and with the reference plane defined
    /// by the origin, the "X Direction" and the "Y Direction" of theA3.
    /// Warnings :
    /// It is not forbidden to create a torus with
    /// theMajorRadius = theMinorRadius = 0.0
    /// Raises ConstructionError if theMinorRadius < 0.0 or if theMajorRadius < 0.0
    /// </summary>
    gp_Torus(Macad::Occt::Ax3 theA3, double theMajorRadius, double theMinorRadius);
    /// <summary>
    /// Modifies this torus, by redefining its local coordinate
    /// system so that:
    /// -   its origin and "main Direction" become those of the
    /// axis theA1 (the "X Direction" and "Y Direction" are then recomputed).
    /// Raises ConstructionError if the direction of theA1 is parallel to the "XDirection"
    /// of the coordinate system of the toroidal surface.
    /// </summary>
    void SetAxis(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Changes the location of the torus.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt theLoc);
    /// <summary>
    /// Assigns value to the major radius  of this torus.
    /// Raises ConstructionError if theMajorRadius - MinorRadius <= Resolution()
    /// </summary>
    void SetMajorRadius(double theMajorRadius);
    /// <summary>
    /// Assigns value to the  minor radius of this torus.
    /// Raises ConstructionError if theMinorRadius < 0.0 or if
    /// MajorRadius - theMinorRadius <= Resolution from gp.
    /// </summary>
    void SetMinorRadius(double theMinorRadius);
    /// <summary>
    /// Changes the local coordinate system of the surface.
    /// </summary>
    void SetPosition(Macad::Occt::Ax3 theA3);
    /// <summary>
    /// Computes the area of the torus.
    /// </summary>
    double Area();
    /// <summary>
    /// Reverses the   U   parametrization of   the  torus
    /// reversing the YAxis.
    /// </summary>
    void UReverse();
    /// <summary>
    /// Reverses the   V   parametrization of   the  torus
    /// reversing the ZAxis.
    /// </summary>
    void VReverse();
    /// <summary>
    /// returns true if the Ax3, the local coordinate system of this torus, is right handed.
    /// </summary>
    bool Direct();
    /// <summary>
    /// returns the symmetry axis of the torus.
    /// </summary>
    Macad::Occt::Ax1 Axis();
    /// <summary>
    /// Computes the coefficients of the implicit equation of the surface
    /// in the absolute Cartesian coordinate system:
    /// </summary>
    /// @code
    /// Coef(1) * X^4 + Coef(2) * Y^4 + Coef(3) * Z^4 +
    /// Coef(4) * X^3 * Y + Coef(5) * X^3 * Z + Coef(6) * Y^3 * X +
    /// Coef(7) * Y^3 * Z + Coef(8) * Z^3 * X + Coef(9) * Z^3 * Y +
    /// Coef(10) * X^2 * Y^2 + Coef(11) * X^2 * Z^2 +
    /// Coef(12) * Y^2 * Z^2 + Coef(13) * X^2 * Y * Z +
    /// Coef(14) * X * Y^2 * Z + Coef(15) * X * Y * Z^2 +
    /// Coef(16) * X^3 + Coef(17) * Y^3 + Coef(18) * Z^3 +
    /// Coef(19) * X^2 * Y + Coef(20) * X^2 * Z + Coef(21) * Y^2 * X +
    /// Coef(22) * Y^2 * Z + Coef(23) * Z^2 * X + Coef(24) * Z^2 * Y +
    /// Coef(25) * X * Y * Z +
    /// Coef(26) * X^2 + Coef(27) * Y^2 + Coef(28) * Z^2 +
    /// Coef(29) * X * Y + Coef(30) * X * Z + Coef(31) * Y * Z +
    /// Coef(32) * X + Coef(33) * Y + Coef(34) *  Z +
    /// Coef(35) = 0.0
    /// @endcode
    /// Raises DimensionError if the length of theCoef is lower than 35.
    void Coefficients(Macad::Occt::TColStd_Array1OfReal^ theCoef);
    /// <summary>
    /// Returns the Torus's location.
    /// </summary>
    Macad::Occt::Pnt Location();
    /// <summary>
    /// Returns the local coordinates system of the torus.
    /// </summary>
    Macad::Occt::Ax3 Position();
    /// <summary>
    /// returns the major radius of the torus.
    /// </summary>
    double MajorRadius();
    /// <summary>
    /// returns the minor radius of the torus.
    /// </summary>
    double MinorRadius();
    /// <summary>
    /// Computes the volume of the torus.
    /// </summary>
    double Volume();
    /// <summary>
    /// returns the axis X of the torus.
    /// </summary>
    Macad::Occt::Ax1 XAxis();
    /// <summary>
    /// returns the axis Y of the torus.
    /// </summary>
    Macad::Occt::Ax1 YAxis();
    void Mirror(Macad::Occt::Pnt theP);
    /// <summary>
    /// Performs the symmetrical transformation of a torus
    /// with respect to the point theP which is the center of the
    /// symmetry.
    /// </summary>
    Macad::Occt::gp_Torus^ Mirrored(Macad::Occt::Pnt theP);
    void Mirror(Macad::Occt::Ax1 theA1);
    /// <summary>
    /// Performs the symmetrical transformation of a torus with
    /// respect to an axis placement which is the axis of the
    /// symmetry.
    /// </summary>
    Macad::Occt::gp_Torus^ Mirrored(Macad::Occt::Ax1 theA1);
    void Mirror(Macad::Occt::Ax2 theA2);
    /// <summary>
    /// Performs the symmetrical transformation of a torus with respect
    /// to a plane. The axis placement theA2 locates the plane of the
    /// of the symmetry : (Location, XDirection, YDirection).
    /// </summary>
    Macad::Occt::gp_Torus^ Mirrored(Macad::Occt::Ax2 theA2);
    void Rotate(Macad::Occt::Ax1 theA1, double theAng);
    /// <summary>
    /// Rotates a torus. theA1 is the axis of the rotation.
    /// theAng is the angular value of the rotation in radians.
    /// </summary>
    Macad::Occt::gp_Torus^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
    void Scale(Macad::Occt::Pnt theP, double theS);
    /// <summary>
    /// Scales a torus. S is the scaling value.
    /// The absolute value of S is used to scale the torus
    /// </summary>
    Macad::Occt::gp_Torus^ Scaled(Macad::Occt::Pnt theP, double theS);
    void Transform(Macad::Occt::Trsf theT);
    /// <summary>
    /// Transforms a torus with the transformation theT from class Trsf.
    /// </summary>
    Macad::Occt::gp_Torus^ Transformed(Macad::Occt::Trsf theT);
    void Translate(Macad::Occt::Vec theV);
    /// <summary>
    /// Translates a torus in the direction of the vector theV.
    /// The magnitude of the translation is the vector's magnitude.
    /// </summary>
    Macad::Occt::gp_Torus^ Translated(Macad::Occt::Vec theV);
    void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
    /// <summary>
    /// Translates a torus from the point theP1 to the point theP2.
    /// </summary>
    Macad::Occt::gp_Torus^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Torus

}; // namespace Occt
}; // namespace Macad
