// Generated wrapper code for package IntAna2d

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  IntAna2d_IntPoint
//---------------------------------------------------------------------
/// <summary>
/// Geometrical intersection between two 2d elements.
/// </summary>
public ref class IntAna2d_IntPoint sealed
    : public Macad::Occt::BaseClass<::IntAna2d_IntPoint>
{

#ifdef Include_IntAna2d_IntPoint_h
public:
    Include_IntAna2d_IntPoint_h
#endif

public:
    IntAna2d_IntPoint(::IntAna2d_IntPoint* nativeInstance)
        : Macad::Occt::BaseClass<::IntAna2d_IntPoint>( nativeInstance, true )
    {}

    IntAna2d_IntPoint(::IntAna2d_IntPoint& nativeInstance)
        : Macad::Occt::BaseClass<::IntAna2d_IntPoint>( &nativeInstance, false )
    {}

    property ::IntAna2d_IntPoint* NativeInstance
    {
        ::IntAna2d_IntPoint* get()
        {
            return static_cast<::IntAna2d_IntPoint*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Create an intersection point between 2 parametric 2d lines.
    /// X,Y are the coordinate of the point. U1 is the parameter
    /// on the first element, U2 the parameter on the second one.
    /// </summary>
    IntAna2d_IntPoint(double X, double Y, double U1, double U2);
    /// <summary>
    /// Create an intersection point between a parametric 2d line,
    /// and a line given by an implicit equation (ImplicitCurve).
    /// X,Y are the coordinate of the point. U1 is the parameter
    /// on the parametric element.
    /// Empty constructor. It's necessary to use one of
    /// the SetValue method after this one.
    /// </summary>
    IntAna2d_IntPoint(double X, double Y, double U1);
    IntAna2d_IntPoint();
    /// <summary>
    /// Set the values for a "non-implicit" point.
    /// </summary>
    void SetValue(double X, double Y, double U1, double U2);
    /// <summary>
    /// Set the values for an "implicit" point.
    /// </summary>
    void SetValue(double X, double Y, double U1);
    /// <summary>
    /// Returns the geometric point.
    /// </summary>
    Macad::Occt::Pnt2d Value();
    /// <summary>
    /// Returns True if the second curve is implicit.
    /// </summary>
    bool SecondIsImplicit();
    /// <summary>
    /// Returns the parameter on the first element.
    /// </summary>
    double ParamOnFirst();
    /// <summary>
    /// Returns the parameter on the second element.
    /// If the second element is an implicit curve, an exception
    /// is raised.
    /// </summary>
    double ParamOnSecond();
}; // class IntAna2d_IntPoint

//---------------------------------------------------------------------
//  Class  IntAna2d_Conic
//---------------------------------------------------------------------
/// <summary>
/// Definition of a conic by its implicit quadaratic equation:
/// A.X**2 + B.Y**2 + 2.C.X*Y + 2.D.X + 2.E.Y + F = 0.
/// </summary>
public ref class IntAna2d_Conic sealed
    : public Macad::Occt::BaseClass<::IntAna2d_Conic>
{

#ifdef Include_IntAna2d_Conic_h
public:
    Include_IntAna2d_Conic_h
#endif

public:
    IntAna2d_Conic(::IntAna2d_Conic* nativeInstance)
        : Macad::Occt::BaseClass<::IntAna2d_Conic>( nativeInstance, true )
    {}

    IntAna2d_Conic(::IntAna2d_Conic& nativeInstance)
        : Macad::Occt::BaseClass<::IntAna2d_Conic>( &nativeInstance, false )
    {}

    property ::IntAna2d_Conic* NativeInstance
    {
        ::IntAna2d_Conic* get()
        {
            return static_cast<::IntAna2d_Conic*>(_NativeInstance);
        }
    }

public:
    IntAna2d_Conic(Macad::Occt::gp_Circ2d^ C);
    IntAna2d_Conic(Macad::Occt::gp_Lin2d^ C);
    IntAna2d_Conic(Macad::Occt::gp_Parab2d^ C);
    IntAna2d_Conic(Macad::Occt::gp_Hypr2d^ C);
    IntAna2d_Conic(Macad::Occt::gp_Elips2d^ C);
    /// <summary>
    /// value of the function F at the point X,Y.
    /// </summary>
    double Value(double X, double Y);
    /// <summary>
    /// returns the value of the gradient of F at the point X,Y.
    /// </summary>
    Macad::Occt::XY Grad(double X, double Y);
    /// <summary>
    /// Returns the value of the function and its gradient at
    /// the point X,Y.
    /// </summary>
    void ValAndGrad(double X, double Y, double% Val, Macad::Occt::XY% Grd);
    /// <summary>
    /// returns the coefficients of the polynomial equation
    /// which defines the conic:
    /// A.X**2 + B.Y**2 + 2.C.X*Y + 2.D.X + 2.E.Y + F = 0.
    /// </summary>
    void Coefficients(double% A, double% B, double% C, double% D, double% E, double% F);
    /// <summary>
    /// Returns the coefficients of the polynomial equation
    /// ( written in the natural coordinates system )
    /// A x x + B y y + 2 C x y + 2 D x + 2 E y + F
    /// in the local coordinates system defined by Axis
    /// </summary>
    void NewCoefficients(double% A, double% B, double% C, double% D, double% E, double% F, Macad::Occt::Ax2d Axis);
}; // class IntAna2d_Conic

//---------------------------------------------------------------------
//  Class  IntAna2d_AnaIntersection
//---------------------------------------------------------------------
/// <summary>
/// Implementation of the analytical intersection between:
/// - two Lin2d,
/// - two Circ2d,
/// - a Lin2d and a Circ2d,
/// - an element of gp (Lin2d, Circ2d, Elips2d, Parab2d, Hypr2d)
/// and another conic.
/// No tolerance is given for all the intersections: the tolerance
/// will be the "precision machine".
/// </summary>
public ref class IntAna2d_AnaIntersection sealed
    : public Macad::Occt::BaseClass<::IntAna2d_AnaIntersection>
{

#ifdef Include_IntAna2d_AnaIntersection_h
public:
    Include_IntAna2d_AnaIntersection_h
#endif

public:
    IntAna2d_AnaIntersection(::IntAna2d_AnaIntersection* nativeInstance)
        : Macad::Occt::BaseClass<::IntAna2d_AnaIntersection>( nativeInstance, true )
    {}

    IntAna2d_AnaIntersection(::IntAna2d_AnaIntersection& nativeInstance)
        : Macad::Occt::BaseClass<::IntAna2d_AnaIntersection>( &nativeInstance, false )
    {}

    property ::IntAna2d_AnaIntersection* NativeInstance
    {
        ::IntAna2d_AnaIntersection* get()
        {
            return static_cast<::IntAna2d_AnaIntersection*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor. IsDone returns False.
    /// </summary>
    IntAna2d_AnaIntersection();
    /// <summary>
    /// Intersection between two lines.
    /// </summary>
    IntAna2d_AnaIntersection(Macad::Occt::gp_Lin2d^ L1, Macad::Occt::gp_Lin2d^ L2);
    /// <summary>
    /// Intersection between two circles.
    /// </summary>
    IntAna2d_AnaIntersection(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Circ2d^ C2);
    /// <summary>
    /// Intersection between a line and a circle.
    /// </summary>
    IntAna2d_AnaIntersection(Macad::Occt::gp_Lin2d^ L, Macad::Occt::gp_Circ2d^ C);
    /// <summary>
    /// Intersection between a line and a conic.
    /// </summary>
    IntAna2d_AnaIntersection(Macad::Occt::gp_Lin2d^ L, Macad::Occt::IntAna2d_Conic^ C);
    /// <summary>
    /// Intersection between a circle and another conic.
    /// </summary>
    IntAna2d_AnaIntersection(Macad::Occt::gp_Circ2d^ C, Macad::Occt::IntAna2d_Conic^ Co);
    /// <summary>
    /// Intersection between an ellipse and another conic.
    /// </summary>
    IntAna2d_AnaIntersection(Macad::Occt::gp_Elips2d^ E, Macad::Occt::IntAna2d_Conic^ C);
    /// <summary>
    /// Intersection between a parabola and another conic.
    /// </summary>
    IntAna2d_AnaIntersection(Macad::Occt::gp_Parab2d^ P, Macad::Occt::IntAna2d_Conic^ C);
    /// <summary>
    /// Intersection between an hyperbola and another conic.
    /// </summary>
    IntAna2d_AnaIntersection(Macad::Occt::gp_Hypr2d^ H, Macad::Occt::IntAna2d_Conic^ C);
    /// <summary>
    /// Intersection between two lines.
    /// </summary>
    void Perform(Macad::Occt::gp_Lin2d^ L1, Macad::Occt::gp_Lin2d^ L2);
    /// <summary>
    /// Intersection between two circles.
    /// </summary>
    void Perform(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Circ2d^ C2);
    /// <summary>
    /// Intersection between a line and a circle.
    /// </summary>
    void Perform(Macad::Occt::gp_Lin2d^ L, Macad::Occt::gp_Circ2d^ C);
    /// <summary>
    /// Intersection between a line and a conic.
    /// </summary>
    void Perform(Macad::Occt::gp_Lin2d^ L, Macad::Occt::IntAna2d_Conic^ C);
    /// <summary>
    /// Intersection between a circle and another conic.
    /// </summary>
    void Perform(Macad::Occt::gp_Circ2d^ C, Macad::Occt::IntAna2d_Conic^ Co);
    /// <summary>
    /// Intersection between an ellipse and another conic.
    /// </summary>
    void Perform(Macad::Occt::gp_Elips2d^ E, Macad::Occt::IntAna2d_Conic^ C);
    /// <summary>
    /// Intersection between a parabola and another conic.
    /// </summary>
    void Perform(Macad::Occt::gp_Parab2d^ P, Macad::Occt::IntAna2d_Conic^ C);
    /// <summary>
    /// Intersection between an hyperbola and another conic.
    /// </summary>
    void Perform(Macad::Occt::gp_Hypr2d^ H, Macad::Occt::IntAna2d_Conic^ C);
    /// <summary>
    /// Returns TRUE if the computation was successful.
    /// </summary>
    bool IsDone();
    /// <summary>
    /// Returns TRUE when there is no intersection, i-e
    /// - no intersection point
    /// - the elements are not identical.
    /// The element may be parallel in this case.
    /// </summary>
    bool IsEmpty();
    /// <summary>
    /// For the intersection between an element of gp and a conic
    /// known by an implicit equation, the result will be TRUE
    /// if the element of gp verifies the implicit equation.
    /// For the intersection between two Lin2d or two Circ2d, the
    /// result will be TRUE if the elements are identical.
    /// The function returns FALSE in all the other cases.
    /// </summary>
    bool IdenticalElements();
    /// <summary>
    /// For the intersection between two Lin2d or two Circ2d,
    /// the function returns TRUE if the elements are parallel.
    /// The function returns FALSE in all the other cases.
    /// </summary>
    bool ParallelElements();
    /// <summary>
    /// returns the number of IntPoint between the 2 curves.
    /// </summary>
    int NbPoints();
    /// <summary>
    /// returns the intersection point of range N;
    /// If (N<=0) or (N>NbPoints), an exception is raised.
    /// </summary>
    Macad::Occt::IntAna2d_IntPoint^ Point(int N);
}; // class IntAna2d_AnaIntersection

}; // namespace Occt
}; // namespace Macad
