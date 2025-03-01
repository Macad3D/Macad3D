// Generated wrapper code for package Convert

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  Convert_ParameterisationType
//---------------------------------------------------------------------
/// <summary>
/// Identifies a type of parameterization of a circle or ellipse represented as a BSpline curve.
/// For a circle with a center C and a radius R (for example a Geom2d_Circle or a Geom_Circle),
/// the natural parameterization is angular. It uses the angle Theta made by the vector CM with
/// the 'X Axis' of the circle's local coordinate system as parameter for the current point M. The
/// coordinates of the point M are as follows:
/// X   =   R *cos ( Theta )
/// y   =   R * sin ( Theta )
/// Similarly, for an ellipse with a center C, a major radius R and a minor radius r, the circle
/// Circ with center C and radius R (and located in the same plane as the ellipse) lends its natural
/// angular parameterization to the ellipse. This is achieved by an affine transformation in the
/// plane of the ellipse, in the ratio r / R, about the 'X Axis' of its local coordinate system. The
/// coordinates of the current point M are as follows:
/// X   =   R * cos ( Theta )
/// y   =   r * sin ( Theta )
/// The process of converting a circle or an ellipse into a rational or non-rational BSpline curve
/// transforms the Theta angular parameter into a parameter t. This ensures the rational or
/// polynomial parameterization of the resulting BSpline curve. Several types of parametric
/// transformations are available.
/// TgtThetaOver2
/// The most usual method is Convert_TgtThetaOver2 where the parameter t on the BSpline
/// curve is obtained by means of transformation of the following type:
/// t = tan ( Theta / 2 )
/// The result of this definition is:
/// cos ( Theta ) = ( 1. - t**2 ) / ( 1. + t**2 )
/// sin ( Theta ) =      2. * t / ( 1. + t**2 )
/// which ensures the rational parameterization of the circle or the ellipse. However, this is not
/// the most suitable parameterization method where the arc of the circle or ellipse has a large
/// opening angle. In such cases, the curve will be represented by a BSpline with intermediate
/// knots. Each span, i.e. each portion of curve between two different knot values, will use
/// parameterization of this type. The number of spans is calculated using the following rule: ( 1.2
/// * Delta / Pi ) + 1 where Delta is equal to the opening angle (in radians) of the arc of the
/// circle (Delta is equal to 2.* Pi in the case of a complete circle). The resulting BSpline curve
/// is "exact", i.e. computing any point of parameter t on the BSpline curve gives an exact point on
/// the circle or the ellipse. TgtThetaOver2_N Where N is equal to 1, 2, 3 or 4, this ensures the
/// same type of parameterization as Convert_TgtThetaOver2 but sets the number of spans in the
/// resulting BSpline curve to N rather than allowing the algorithm to make this calculation.
/// However, the opening angle Delta (parametric angle, given in radians) of the arc of the circle
/// (or of the ellipse) must comply with the following:
/// -   Delta <= 0.9999 * Pi for the Convert_TgtThetaOver2_1 method, or
/// -   Delta <= 1.9999 * Pi for the Convert_TgtThetaOver2_2 method.
/// QuasiAngular
/// The Convert_QuasiAngular method of parameterization uses a different type of rational
/// parameterization. This method ensures that the parameter t along the resulting BSpline curve is
/// very close to the natural parameterization angle Theta of the circle or ellipse (i.e. which uses
/// the functions sin ( Theta ) and cos ( Theta ).
/// The resulting BSpline curve is "exact", i.e. computing any point of parameter t on the BSpline
/// curve gives an exact point on the circle or the ellipse.
/// RationalC1
/// The Convert_RationalC1 method of parameterization uses a further type of rational
/// parameterization. This method ensures that the equation relating to the resulting BSpline curve
/// has a "C1" continuous denominator, which is not the case with the above methods. RationalC1
/// enhances the degree of continuity at the junction point of the different spans of the curve.
/// The resulting BSpline curve is "exact", i.e. computing any point of parameter t on the BSpline
/// curve gives an exact point on the circle or the ellipse.
/// Polynomial
/// The Convert_Polynomial method is used to produce polynomial (i.e. non-rational)
/// parameterization of the resulting BSpline curve with 8 poles (i.e. a polynomial degree equal to
/// 7). However, the result is an approximation of the circle or ellipse (i.e. computing the point
/// of parameter t on the BSpline curve does not give an exact point on the circle or the ellipse).
/// </summary>
public enum class Convert_ParameterisationType
{
    TgtThetaOver2 = 0,
    TgtThetaOver2_1 = 1,
    TgtThetaOver2_2 = 2,
    TgtThetaOver2_3 = 3,
    TgtThetaOver2_4 = 4,
    QuasiAngular = 5,
    RationalC1 = 6,
    Polynomial = 7
}; // enum  class Convert_ParameterisationType

//---------------------------------------------------------------------
//  Class  Convert_SequenceOfArray1OfPoles2d
//---------------------------------------------------------------------
public ref class Convert_SequenceOfArray1OfPoles2d sealed
    : public Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles2d>
    , public IIndexEnumerable<Macad::Occt::TColgp_HArray1OfPnt2d^>
{

#ifdef Include_Convert_SequenceOfArray1OfPoles2d_h
public:
    Include_Convert_SequenceOfArray1OfPoles2d_h
#endif

public:
    Convert_SequenceOfArray1OfPoles2d(::Convert_SequenceOfArray1OfPoles2d* nativeInstance)
        : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles2d>( nativeInstance, true )
    {}

    Convert_SequenceOfArray1OfPoles2d(::Convert_SequenceOfArray1OfPoles2d& nativeInstance)
        : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles2d>( &nativeInstance, false )
    {}

    property ::Convert_SequenceOfArray1OfPoles2d* NativeInstance
    {
        ::Convert_SequenceOfArray1OfPoles2d* get()
        {
            return static_cast<::Convert_SequenceOfArray1OfPoles2d*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles2d::Iterator>
    {

#ifdef Include_Convert_SequenceOfArray1OfPoles2d_Iterator_h
    public:
        Include_Convert_SequenceOfArray1OfPoles2d_Iterator_h
#endif

    public:
        Iterator(::Convert_SequenceOfArray1OfPoles2d::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles2d::Iterator>( nativeInstance, true )
        {}

        Iterator(::Convert_SequenceOfArray1OfPoles2d::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles2d::Iterator>( &nativeInstance, false )
        {}

        property ::Convert_SequenceOfArray1OfPoles2d::Iterator* NativeInstance
        {
            ::Convert_SequenceOfArray1OfPoles2d::Iterator* get()
            {
                return static_cast<::Convert_SequenceOfArray1OfPoles2d::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TColgp_HArray1OfPnt2d^ Value();
        Macad::Occt::TColgp_HArray1OfPnt2d^ ChangeValue();
        bool IsEqual(Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Convert_SequenceOfArray1OfPoles2d();
    Convert_SequenceOfArray1OfPoles2d(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    int Length();
    int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::Convert_SequenceOfArray1OfPoles2d^ Assign(Macad::Occt::Convert_SequenceOfArray1OfPoles2d^ theOther);
    void Remove(Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator^ thePosition);
    void Append(Macad::Occt::TColgp_HArray1OfPnt2d^ theItem);
    void Prepend(Macad::Occt::TColgp_HArray1OfPnt2d^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TColgp_HArray1OfPnt2d^ theItem);
    void InsertAfter(Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator^ thePosition, Macad::Occt::TColgp_HArray1OfPnt2d^ theItem);
    void Split(int theIndex, Macad::Occt::Convert_SequenceOfArray1OfPoles2d^ theSeq);
    Macad::Occt::TColgp_HArray1OfPnt2d^ First();
    Macad::Occt::TColgp_HArray1OfPnt2d^ ChangeFirst();
    Macad::Occt::TColgp_HArray1OfPnt2d^ Last();
    Macad::Occt::TColgp_HArray1OfPnt2d^ ChangeLast();
    virtual Macad::Occt::TColgp_HArray1OfPnt2d^ Value(int theIndex);
    Macad::Occt::TColgp_HArray1OfPnt2d^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::TColgp_HArray1OfPnt2d^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TColgp_HArray1OfPnt2d^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Convert_SequenceOfArray1OfPoles2d

//---------------------------------------------------------------------
//  Class  Convert_SequenceOfArray1OfPoles
//---------------------------------------------------------------------
public ref class Convert_SequenceOfArray1OfPoles sealed
    : public Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles>
    , public IIndexEnumerable<Macad::Occt::TColgp_HArray1OfPnt^>
{

#ifdef Include_Convert_SequenceOfArray1OfPoles_h
public:
    Include_Convert_SequenceOfArray1OfPoles_h
#endif

public:
    Convert_SequenceOfArray1OfPoles(::Convert_SequenceOfArray1OfPoles* nativeInstance)
        : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles>( nativeInstance, true )
    {}

    Convert_SequenceOfArray1OfPoles(::Convert_SequenceOfArray1OfPoles& nativeInstance)
        : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles>( &nativeInstance, false )
    {}

    property ::Convert_SequenceOfArray1OfPoles* NativeInstance
    {
        ::Convert_SequenceOfArray1OfPoles* get()
        {
            return static_cast<::Convert_SequenceOfArray1OfPoles*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles::Iterator>
    {

#ifdef Include_Convert_SequenceOfArray1OfPoles_Iterator_h
    public:
        Include_Convert_SequenceOfArray1OfPoles_Iterator_h
#endif

    public:
        Iterator(::Convert_SequenceOfArray1OfPoles::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles::Iterator>( nativeInstance, true )
        {}

        Iterator(::Convert_SequenceOfArray1OfPoles::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles::Iterator>( &nativeInstance, false )
        {}

        property ::Convert_SequenceOfArray1OfPoles::Iterator* NativeInstance
        {
            ::Convert_SequenceOfArray1OfPoles::Iterator* get()
            {
                return static_cast<::Convert_SequenceOfArray1OfPoles::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::TColgp_HArray1OfPnt^ Value();
        Macad::Occt::TColgp_HArray1OfPnt^ ChangeValue();
        bool IsEqual(Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Convert_SequenceOfArray1OfPoles();
    Convert_SequenceOfArray1OfPoles(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    int Size();
    int Length();
    int Lower();
    int Upper();
    bool IsEmpty();
    void Reverse();
    void Exchange(int I, int J);
    /* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    Macad::Occt::Convert_SequenceOfArray1OfPoles^ Assign(Macad::Occt::Convert_SequenceOfArray1OfPoles^ theOther);
    void Remove(Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator^ thePosition);
    void Append(Macad::Occt::TColgp_HArray1OfPnt^ theItem);
    void Prepend(Macad::Occt::TColgp_HArray1OfPnt^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::TColgp_HArray1OfPnt^ theItem);
    void InsertAfter(Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator^ thePosition, Macad::Occt::TColgp_HArray1OfPnt^ theItem);
    void Split(int theIndex, Macad::Occt::Convert_SequenceOfArray1OfPoles^ theSeq);
    Macad::Occt::TColgp_HArray1OfPnt^ First();
    Macad::Occt::TColgp_HArray1OfPnt^ ChangeFirst();
    Macad::Occt::TColgp_HArray1OfPnt^ Last();
    Macad::Occt::TColgp_HArray1OfPnt^ ChangeLast();
    virtual Macad::Occt::TColgp_HArray1OfPnt^ Value(int theIndex);
    Macad::Occt::TColgp_HArray1OfPnt^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::TColgp_HArray1OfPnt^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::TColgp_HArray1OfPnt^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Convert_SequenceOfArray1OfPoles

//---------------------------------------------------------------------
//  Class  Convert_ConicToBSplineCurve
//---------------------------------------------------------------------
/// <summary>
/// Root class for algorithms which convert a conic curve into
/// a BSpline curve (CircleToBSplineCurve, EllipseToBSplineCurve,
/// HyperbolaToBSplineCurve, ParabolaToBSplineCurve).
/// These algorithms all work on 2D curves from the gp
/// package and compute all the data needed to construct a
/// BSpline curve equivalent to the conic curve. This data consists of:
/// -   the degree of the curve,
/// -   the periodic characteristics of the curve,
/// -   a poles table with associated weights,
/// -   a knots table with associated multiplicities.
/// The abstract class ConicToBSplineCurve provides a
/// framework for storing and consulting this computed data.
/// The data may then be used to construct a
/// Geom2d_BSplineCurve curvSuper class of the following classes :
/// This abstract class implements the methods to get the geometric
/// representation of the B-spline curve equivalent to the conic.
/// The B-spline is computed at the creation time in the sub classes.
/// The B-spline curve is defined with its degree, its control points
/// (Poles), its weights, its knots and their multiplicity.
/// All the geometric entities used in this package are defined in 2D
/// space.
/// KeyWords :
/// Convert, Conic, BSplineCurve, 2D.
/// </summary>
public ref class Convert_ConicToBSplineCurve
    : public Macad::Occt::BaseClass<::Convert_ConicToBSplineCurve>
{

#ifdef Include_Convert_ConicToBSplineCurve_h
public:
    Include_Convert_ConicToBSplineCurve_h
#endif

protected:
    Convert_ConicToBSplineCurve(InitMode init)
        : Macad::Occt::BaseClass<::Convert_ConicToBSplineCurve>( init )
    {}

public:
    Convert_ConicToBSplineCurve(::Convert_ConicToBSplineCurve* nativeInstance)
        : Macad::Occt::BaseClass<::Convert_ConicToBSplineCurve>( nativeInstance, true )
    {}

    Convert_ConicToBSplineCurve(::Convert_ConicToBSplineCurve& nativeInstance)
        : Macad::Occt::BaseClass<::Convert_ConicToBSplineCurve>( &nativeInstance, false )
    {}

    property ::Convert_ConicToBSplineCurve* NativeInstance
    {
        ::Convert_ConicToBSplineCurve* get()
        {
            return static_cast<::Convert_ConicToBSplineCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Returns the degree of the BSpline curve whose data is
    /// computed in this framework.
    /// </summary>
    int Degree();
    /// <summary>
    /// Returns the number of poles of the BSpline curve whose
    /// data is computed in this framework.
    /// </summary>
    int NbPoles();
    /// <summary>
    /// Returns the number of knots of the BSpline curve whose
    /// data is computed in this framework.
    /// </summary>
    int NbKnots();
    /// <summary>
    /// Returns true if the BSpline curve whose data is computed in
    /// this framework is periodic.
    /// </summary>
    bool IsPeriodic();
    /// <summary>
    /// Returns the pole of index Index to the poles table of the
    /// BSpline curve whose data is computed in this framework.
    /// Exceptions
    /// Standard_OutOfRange if Index is outside the bounds of
    /// the poles table of the BSpline curve whose data is computed in this framework.
    /// </summary>
    Macad::Occt::Pnt2d Pole(int Index);
    /// <summary>
    /// Returns the weight of the pole of index Index to the poles
    /// table of the BSpline curve whose data is computed in this framework.
    /// Exceptions
    /// Standard_OutOfRange if Index is outside the bounds of
    /// the poles table of the BSpline curve whose data is computed in this framework.
    /// </summary>
    double Weight(int Index);
    /// <summary>
    /// Returns the knot of index Index to the knots table of the
    /// BSpline curve whose data is computed in this framework.
    /// Exceptions
    /// Standard_OutOfRange if Index is outside the bounds of
    /// the knots table of the BSpline curve whose data is computed in this framework.
    /// </summary>
    double Knot(int Index);
    /// <summary>
    /// Returns the multiplicity of the knot of index Index to the
    /// knots table of the BSpline curve whose data is computed in this framework.
    /// Exceptions
    /// Standard_OutOfRange if Index is outside the bounds of
    /// the knots table of the BSpline curve whose data is computed in this framework.
    /// </summary>
    int Multiplicity(int Index);
    void BuildCosAndSin(Macad::Occt::Convert_ParameterisationType Parametrisation, Macad::Occt::TColStd_HArray1OfReal^ CosNumerator, Macad::Occt::TColStd_HArray1OfReal^ SinNumerator, Macad::Occt::TColStd_HArray1OfReal^ Denominator, int% Degree, Macad::Occt::TColStd_HArray1OfReal^ Knots, Macad::Occt::TColStd_HArray1OfInteger^ Mults);
    void BuildCosAndSin(Macad::Occt::Convert_ParameterisationType Parametrisation, double UFirst, double ULast, Macad::Occt::TColStd_HArray1OfReal^ CosNumerator, Macad::Occt::TColStd_HArray1OfReal^ SinNumerator, Macad::Occt::TColStd_HArray1OfReal^ Denominator, int% Degree, Macad::Occt::TColStd_HArray1OfReal^ Knots, Macad::Occt::TColStd_HArray1OfInteger^ Mults);
}; // class Convert_ConicToBSplineCurve

//---------------------------------------------------------------------
//  Class  Convert_CircleToBSplineCurve
//---------------------------------------------------------------------
/// <summary>
/// This algorithm converts a circle into a rational B-spline curve.
/// The circle is a Circ2d from package gp and its parametrization is :
/// P (U) = Loc + R * (Cos(U) * Xdir + Sin(U) * YDir) where Loc is the
/// center of the circle Xdir and Ydir are the normalized directions
/// of the local cartesian coordinate system of the circle.
/// The parametrization range for the circle is U [0, 2Pi].
/// 
/// Warnings :
/// The parametrization range for the B-spline curve is not [0, 2Pi].
/// 
/// KeyWords :
/// Convert, Circle, BSplineCurve, 2D .
/// </summary>
public ref class Convert_CircleToBSplineCurve sealed
    : public Macad::Occt::Convert_ConicToBSplineCurve
{

#ifdef Include_Convert_CircleToBSplineCurve_h
public:
    Include_Convert_CircleToBSplineCurve_h
#endif

public:
    Convert_CircleToBSplineCurve(::Convert_CircleToBSplineCurve* nativeInstance)
        : Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
    {}

    Convert_CircleToBSplineCurve(::Convert_CircleToBSplineCurve& nativeInstance)
        : Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
    {}

    property ::Convert_CircleToBSplineCurve* NativeInstance
    {
        ::Convert_CircleToBSplineCurve* get()
        {
            return static_cast<::Convert_CircleToBSplineCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The equivalent B-spline curve has the same orientation
    /// as the circle C.
    /// </summary>
    Convert_CircleToBSplineCurve(Macad::Occt::gp_Circ2d^ C, Macad::Occt::Convert_ParameterisationType Parameterisation);
    /// <summary>
    /// The equivalent B-spline curve has the same orientation
    /// as the circle C.
    /// </summary>
    Convert_CircleToBSplineCurve(Macad::Occt::gp_Circ2d^ C);
    /// <summary>
    /// The circle C is limited between the parametric values U1, U2
    /// in radians. U1 and U2 [0.0, 2*Pi] .
    /// The equivalent B-spline curve is oriented from U1 to U2 and has
    /// the same orientation as the circle C.
    /// 
    /// Raised if U1 = U2 or U1 = U2 + 2.0 * Pi
    /// </summary>
    Convert_CircleToBSplineCurve(Macad::Occt::gp_Circ2d^ C, double U1, double U2, Macad::Occt::Convert_ParameterisationType Parameterisation);
    /// <summary>
    /// The circle C is limited between the parametric values U1, U2
    /// in radians. U1 and U2 [0.0, 2*Pi] .
    /// The equivalent B-spline curve is oriented from U1 to U2 and has
    /// the same orientation as the circle C.
    /// 
    /// Raised if U1 = U2 or U1 = U2 + 2.0 * Pi
    /// </summary>
    Convert_CircleToBSplineCurve(Macad::Occt::gp_Circ2d^ C, double U1, double U2);
}; // class Convert_CircleToBSplineCurve

//---------------------------------------------------------------------
//  Class  Convert_CompBezierCurves2dToBSplineCurve2d
//---------------------------------------------------------------------
/// <summary>
/// Converts a list  of connecting Bezier Curves 2d to  a
/// BSplineCurve 2d.
/// if possible, the continuity of the BSpline will be
/// increased to more than C0.
/// </summary>
public ref class Convert_CompBezierCurves2dToBSplineCurve2d sealed
    : public Macad::Occt::BaseClass<::Convert_CompBezierCurves2dToBSplineCurve2d>
{

#ifdef Include_Convert_CompBezierCurves2dToBSplineCurve2d_h
public:
    Include_Convert_CompBezierCurves2dToBSplineCurve2d_h
#endif

public:
    Convert_CompBezierCurves2dToBSplineCurve2d(::Convert_CompBezierCurves2dToBSplineCurve2d* nativeInstance)
        : Macad::Occt::BaseClass<::Convert_CompBezierCurves2dToBSplineCurve2d>( nativeInstance, true )
    {}

    Convert_CompBezierCurves2dToBSplineCurve2d(::Convert_CompBezierCurves2dToBSplineCurve2d& nativeInstance)
        : Macad::Occt::BaseClass<::Convert_CompBezierCurves2dToBSplineCurve2d>( &nativeInstance, false )
    {}

    property ::Convert_CompBezierCurves2dToBSplineCurve2d* NativeInstance
    {
        ::Convert_CompBezierCurves2dToBSplineCurve2d* get()
        {
            return static_cast<::Convert_CompBezierCurves2dToBSplineCurve2d*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a framework for converting a sequence of
    /// adjacent non-rational Bezier curves into a BSpline curve.
    /// Knots will be created on the computed BSpline curve at
    /// each junction point of two consecutive Bezier curves. The
    /// degree of continuity of the BSpline curve will be increased at
    /// the junction point of two consecutive Bezier curves if their
    /// tangent vectors at this point are parallel. AngularTolerance
    /// (given in radians, and defaulted to 1.0 e-4) will be used
    /// to check the parallelism of the two tangent vectors.
    /// Use the following functions:
    /// -   AddCurve to define in sequence the adjacent Bezier
    /// curves to be converted,
    /// -   Perform to compute the data needed to build the BSpline curve,
    /// -   and the available consultation functions to access the
    /// computed data. This data may be used to construct the BSpline curve.
    /// </summary>
    Convert_CompBezierCurves2dToBSplineCurve2d(double AngularTolerance);
    /// <summary>
    /// Constructs a framework for converting a sequence of
    /// adjacent non-rational Bezier curves into a BSpline curve.
    /// Knots will be created on the computed BSpline curve at
    /// each junction point of two consecutive Bezier curves. The
    /// degree of continuity of the BSpline curve will be increased at
    /// the junction point of two consecutive Bezier curves if their
    /// tangent vectors at this point are parallel. AngularTolerance
    /// (given in radians, and defaulted to 1.0 e-4) will be used
    /// to check the parallelism of the two tangent vectors.
    /// Use the following functions:
    /// -   AddCurve to define in sequence the adjacent Bezier
    /// curves to be converted,
    /// -   Perform to compute the data needed to build the BSpline curve,
    /// -   and the available consultation functions to access the
    /// computed data. This data may be used to construct the BSpline curve.
    /// </summary>
    Convert_CompBezierCurves2dToBSplineCurve2d();
    /// <summary>
    /// Adds the Bezier curve defined by the table of poles Poles, to
    /// the sequence (still contained in this framework) of adjacent
    /// Bezier curves to be converted into a BSpline curve.
    /// Only polynomial (i.e. non-rational) Bezier curves are
    /// converted using this framework.
    /// If this is not the first call to the function (i.e. if this framework
    /// still contains data in its sequence of Bezier curves), the
    /// degree of continuity of the BSpline curve will be increased at
    /// the time of computation at the first point of the added Bezier
    /// curve (i.e. the first point of the Poles table). This will be the
    /// case if the tangent vector of the curve at this point is
    /// parallel to the tangent vector at the end point of the
    /// preceding Bezier curve in the sequence of Bezier curves still
    /// contained in this framework. An angular tolerance given at
    /// the time of construction of this framework, will be used to
    /// check the parallelism of the two tangent vectors. This
    /// checking procedure, and all the relative computations will be
    /// performed by the function Perform.
    /// When the sequence of adjacent Bezier curves is complete,
    /// use the following functions:
    /// -   Perform to compute the data needed to build the BSpline curve,
    /// -   and the available consultation functions to access the
    /// computed data. This data may be used to construct the BSpline curve.
    /// Warning
    /// The sequence of Bezier curves treated by this framework is
    /// automatically initialized with the first Bezier curve when the
    /// function is first called. During subsequent use of this function,
    /// ensure that the first point of the added Bezier curve (i.e. the
    /// first point of the Poles table) is coincident with the last point
    /// of the sequence (i.e. the last point of the preceding Bezier
    /// curve in the sequence) of Bezier curves still contained in
    /// this framework. An error may occur at the time of
    /// computation if this condition is not satisfied. Particular care
    /// must be taken with respect to the above, as this condition is
    /// not checked either when defining the sequence of Bezier
    /// curves or at the time of computation.
    /// </summary>
    void AddCurve(Macad::Occt::TColgp_Array1OfPnt2d^ Poles);
    /// <summary>
    /// Computes all the data needed to build a BSpline curve
    /// equivalent to the sequence of adjacent Bezier curves still
    /// contained in this framework.
    /// A knot is inserted on the computed BSpline curve at the
    /// junction point of two consecutive Bezier curves. The
    /// degree of continuity of the BSpline curve will be increased
    /// at the junction point of two consecutive Bezier curves if
    /// their tangent vectors at this point are parallel. An angular
    /// tolerance given at the time of construction of this
    /// framework is used to check the parallelism of the two
    /// tangent vectors.
    /// Use the available consultation functions to access the
    /// computed data. This data may then be used to construct
    /// the BSpline curve.
    /// Warning
    /// Ensure that the curves in the sequence of Bezier curves
    /// contained in this framework are adjacent. An error may
    /// occur at the time of computation if this condition is not
    /// satisfied. Particular care must be taken with respect to the
    /// above as this condition is not checked, either when
    /// defining the Bezier curve sequence or at the time of computation.
    /// </summary>
    void Perform();
    /// <summary>
    /// Returns the degree of the BSpline curve whose data is
    /// computed in this framework.
    /// Warning
    /// Take particular care not to use this function before the
    /// computation is performed (Perform function), as this
    /// condition is not checked and an error may therefore occur.
    /// </summary>
    int Degree();
    /// <summary>
    /// Returns the number of poles of the BSpline curve whose
    /// data is computed in this framework.
    /// Warning
    /// Take particular care not to use this function before the
    /// computation is performed (Perform function), as this
    /// condition is not checked and an error may therefore occur.
    /// </summary>
    int NbPoles();
    /// <summary>
    /// Loads the Poles table with the poles of the BSpline curve
    /// whose data is computed in this framework.
    /// Warning
    /// -   Do not use this function before the computation is
    /// performed (Perform function).
    /// -   The length of the Poles array must be equal to the
    /// number of poles of the BSpline curve whose data is
    /// computed in this framework.
    /// Particular care must be taken with respect to the above, as
    /// these conditions are not checked, and an error may occur.
    /// </summary>
    void Poles(Macad::Occt::TColgp_Array1OfPnt2d^ Poles);
    /// <summary>
    /// Returns the number of knots of the BSpline curve whose
    /// data is computed in this framework.
    /// Warning
    /// Take particular care not to use this function before the
    /// computation is performed (Perform function), as this
    /// condition is not checked and an error may therefore occur.
    /// </summary>
    int NbKnots();
    /// <summary>
    /// Loads the Knots table with the knots
    /// and the Mults table with the corresponding multiplicities
    /// of the BSpline curve whose data is computed in this framework.
    /// Warning
    /// -   Do not use this function before the computation is
    /// performed (Perform function).
    /// -   The length of the Knots and Mults arrays must be equal
    /// to the number of knots in the BSpline curve whose data is
    /// computed in this framework.
    /// Particular care must be taken with respect to the above as
    /// these conditions are not checked, and an error may occur.
    /// </summary>
    void KnotsAndMults(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults);
}; // class Convert_CompBezierCurves2dToBSplineCurve2d

//---------------------------------------------------------------------
//  Class  Convert_CompBezierCurvesToBSplineCurve
//---------------------------------------------------------------------
/// <summary>
/// An algorithm to convert a sequence of adjacent
/// non-rational Bezier curves into a BSpline curve.
/// A CompBezierCurvesToBSplineCurve object provides a framework for:
/// -   defining the sequence of adjacent non-rational Bezier
/// curves to be converted into a BSpline curve,
/// -   implementing the computation algorithm, and
/// -   consulting the results.
/// Warning
/// Do not attempt to convert rational Bezier curves using this type of algorithm.
/// </summary>
public ref class Convert_CompBezierCurvesToBSplineCurve sealed
    : public Macad::Occt::BaseClass<::Convert_CompBezierCurvesToBSplineCurve>
{

#ifdef Include_Convert_CompBezierCurvesToBSplineCurve_h
public:
    Include_Convert_CompBezierCurvesToBSplineCurve_h
#endif

public:
    Convert_CompBezierCurvesToBSplineCurve(::Convert_CompBezierCurvesToBSplineCurve* nativeInstance)
        : Macad::Occt::BaseClass<::Convert_CompBezierCurvesToBSplineCurve>( nativeInstance, true )
    {}

    Convert_CompBezierCurvesToBSplineCurve(::Convert_CompBezierCurvesToBSplineCurve& nativeInstance)
        : Macad::Occt::BaseClass<::Convert_CompBezierCurvesToBSplineCurve>( &nativeInstance, false )
    {}

    property ::Convert_CompBezierCurvesToBSplineCurve* NativeInstance
    {
        ::Convert_CompBezierCurvesToBSplineCurve* get()
        {
            return static_cast<::Convert_CompBezierCurvesToBSplineCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs a framework for converting a sequence of
    /// adjacent non-rational Bezier curves into a BSpline curve.
    /// Knots will be created on the computed BSpline curve at
    /// each junction point of two consecutive Bezier curves. The
    /// degree of continuity of the BSpline curve will be increased at
    /// the junction point of two consecutive Bezier curves if their
    /// tangent vectors at this point are parallel. AngularTolerance
    /// (given in radians, and defaulted to 1.0 e-4) will be used
    /// to check the parallelism of the two tangent vectors.
    /// Use the following functions:
    /// -   AddCurve to define in sequence the adjacent Bezier
    /// curves to be converted,
    /// -   Perform to compute the data needed to build the BSpline curve,
    /// -   and the available consultation functions to access the
    /// computed data. This data may be used to construct the BSpline curve.
    /// </summary>
    Convert_CompBezierCurvesToBSplineCurve(double AngularTolerance);
    /// <summary>
    /// Constructs a framework for converting a sequence of
    /// adjacent non-rational Bezier curves into a BSpline curve.
    /// Knots will be created on the computed BSpline curve at
    /// each junction point of two consecutive Bezier curves. The
    /// degree of continuity of the BSpline curve will be increased at
    /// the junction point of two consecutive Bezier curves if their
    /// tangent vectors at this point are parallel. AngularTolerance
    /// (given in radians, and defaulted to 1.0 e-4) will be used
    /// to check the parallelism of the two tangent vectors.
    /// Use the following functions:
    /// -   AddCurve to define in sequence the adjacent Bezier
    /// curves to be converted,
    /// -   Perform to compute the data needed to build the BSpline curve,
    /// -   and the available consultation functions to access the
    /// computed data. This data may be used to construct the BSpline curve.
    /// </summary>
    Convert_CompBezierCurvesToBSplineCurve();
    /// <summary>
    /// Adds the Bezier curve defined by the table of poles Poles, to
    /// the sequence (still contained in this framework) of adjacent
    /// Bezier curves to be converted into a BSpline curve.
    /// Only polynomial (i.e. non-rational) Bezier curves are
    /// converted using this framework.
    /// If this is not the first call to the function (i.e. if this framework
    /// still contains data in its Bezier curve sequence), the degree
    /// of continuity of the BSpline curve will be increased at the
    /// time of computation at the first point of the added Bezier
    /// curve (i.e. the first point of the Poles table). This will be the
    /// case if the tangent vector of the curve at this point is
    /// parallel to the tangent vector at the end point of the
    /// preceding Bezier curve in the Bezier curve sequence still
    /// contained in this framework. An angular tolerance given at
    /// the time of construction of this framework will be used to
    /// check the parallelism of the two tangent vectors. This
    /// checking procedure and all related computations will be
    /// performed by the Perform function.
    /// When the adjacent Bezier curve sequence is complete, use
    /// the following functions:
    /// -   Perform to compute the data needed to build the BSpline curve,
    /// -   and the available consultation functions to access the
    /// computed data. This data may be used to construct the BSpline curve.
    /// Warning
    /// The Bezier curve sequence treated by this framework is
    /// automatically initialized with the first Bezier curve when the
    /// function is first called. During subsequent use of this function,
    /// ensure that the first point of the added Bezier curve (i.e. the
    /// first point of the Poles table) is coincident with the last point
    /// of the Bezier curve sequence (i.e. the last point of the
    /// preceding Bezier curve in the sequence) still contained in
    /// this framework. An error may occur at the time of
    /// computation if this condition is not satisfied. Particular care
    /// must be taken with respect to the above, as this condition is
    /// not checked either when defining the Bezier curve
    /// sequence or at the time of computation.
    /// </summary>
    void AddCurve(Macad::Occt::TColgp_Array1OfPnt^ Poles);
    /// <summary>
    /// Computes all the data needed to build a BSpline curve
    /// equivalent to the adjacent Bezier curve sequence still
    /// contained in this framework.
    /// A knot is inserted on the computed BSpline curve at the
    /// junction point of two consecutive Bezier curves. The
    /// degree of continuity of the BSpline curve will be increased
    /// at the junction point of two consecutive Bezier curves if
    /// their tangent vectors at this point are parallel. An angular
    /// tolerance given at the time of construction of this
    /// framework is used to check the parallelism of the two
    /// tangent vectors.
    /// Use the available consultation functions to access the
    /// computed data. This data may then be used to construct
    /// the BSpline curve.
    /// Warning
    /// Make sure that the curves in the Bezier curve sequence
    /// contained in this framework are adjacent. An error may
    /// occur at the time of computation if this condition is not
    /// satisfied. Particular care must be taken with respect to the
    /// above as this condition is not checked, either when
    /// defining the Bezier curve sequence or at the time of computation.
    /// </summary>
    void Perform();
    /// <summary>
    /// Returns the degree of the BSpline curve whose data is
    /// computed in this framework.
    /// Warning
    /// Take particular care not to use this function before the
    /// computation is performed (Perform function), as this
    /// condition is not checked and an error may  therefore occur.
    /// </summary>
    int Degree();
    /// <summary>
    /// Returns the number of poles of the BSpline curve whose
    /// data is computed in this framework.
    /// Warning
    /// Take particular care not to use this function before the
    /// computation is performed (Perform function), as this
    /// condition is not checked and an error may therefore occur.
    /// </summary>
    int NbPoles();
    /// <summary>
    /// Loads the Poles table with the poles of the BSpline curve
    /// whose data is computed in this framework.
    /// Warning
    /// -   Do not use this function before the computation is
    /// performed (Perform function).
    /// -   The length of the Poles array must be equal to the
    /// number of poles of the BSpline curve whose data is
    /// computed in this framework.
    /// Particular care must be taken with respect to the above, as
    /// these conditions are not checked, and an error may occur.
    /// </summary>
    void Poles(Macad::Occt::TColgp_Array1OfPnt^ Poles);
    /// <summary>
    /// Returns the number of knots of the BSpline curve whose
    /// data is computed in this framework.
    /// Warning
    /// Take particular care not to use this function before the
    /// computation is performed (Perform function), as this
    /// condition is not checked and an error may therefore occur.
    /// </summary>
    int NbKnots();
    /// <summary>
    /// -   loads the Knots table with the knots,
    /// -   and loads the Mults table with the corresponding multiplicities
    /// of the BSpline curve whose data is computed in this framework.
    /// Warning
    /// -   Do not use this function before the computation is
    /// performed (Perform function).
    /// -   The length of the Knots and Mults arrays must be equal
    /// to the number of knots in the BSpline curve whose data is
    /// computed in this framework.
    /// Particular care must be taken with respect to the above as
    /// these conditions are not checked, and an error may occur.
    /// </summary>
    void KnotsAndMults(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults);
}; // class Convert_CompBezierCurvesToBSplineCurve

//---------------------------------------------------------------------
//  Class  Convert_CompPolynomialToPoles
//---------------------------------------------------------------------
/// <summary>
/// Convert a serie of Polynomial N-Dimensional Curves
/// that are have continuity CM to an N-Dimensional Bspline Curve
/// that has continuity CM.
/// (to convert an function (curve) polynomial by span in a BSpline)
/// This class uses the following arguments :
/// NumCurves :  the number of Polynomial Curves
/// Continuity:  the requested continuity for the n-dimensional Spline
/// Dimension :  the dimension of the Spline
/// MaxDegree :  maximum allowed degree for each composite
/// polynomial segment.
/// NumCoeffPerCurve : the number of coefficient per segments = degree - 1
/// Coefficients  :  the coefficients organized in the following way
/// [1..<myNumPolynomials>][1..myMaxDegree +1][1..myDimension]
/// that is : index [n,d,i] is at slot
/// (n-1) * (myMaxDegree + 1) * myDimension + (d-1) * myDimension + i
/// PolynomialIntervals :  nth polynomial represents a polynomial between
/// myPolynomialIntervals->Value(n,0) and
/// myPolynomialIntervals->Value(n,1)
/// TrueIntervals : the nth polynomial has to be mapped linearly to be
/// defined on the following interval :
/// myTrueIntervals->Value(n) and myTrueIntervals->Value(n+1)
/// so that it adequately represents the function with the
/// required continuity
/// </summary>
public ref class Convert_CompPolynomialToPoles sealed
    : public Macad::Occt::BaseClass<::Convert_CompPolynomialToPoles>
{

#ifdef Include_Convert_CompPolynomialToPoles_h
public:
    Include_Convert_CompPolynomialToPoles_h
#endif

public:
    Convert_CompPolynomialToPoles(::Convert_CompPolynomialToPoles* nativeInstance)
        : Macad::Occt::BaseClass<::Convert_CompPolynomialToPoles>( nativeInstance, true )
    {}

    Convert_CompPolynomialToPoles(::Convert_CompPolynomialToPoles& nativeInstance)
        : Macad::Occt::BaseClass<::Convert_CompPolynomialToPoles>( &nativeInstance, false )
    {}

    property ::Convert_CompPolynomialToPoles* NativeInstance
    {
        ::Convert_CompPolynomialToPoles* get()
        {
            return static_cast<::Convert_CompPolynomialToPoles*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Warning!
    /// Continuity can be at MOST the maximum degree of
    /// the polynomial functions
    /// TrueIntervals :
    /// this is the true parameterisation for the composite curve
    /// that is : the curve has myContinuity if the nth curve
    /// is parameterized between myTrueIntervals(n) and myTrueIntervals(n+1)
    /// 
    /// Coefficients have to be the implicit "c form":
    /// Coefficients[Numcurves][MaxDegree+1][Dimension]
    /// 
    /// Warning!
    /// The NumberOfCoefficient of an polynome is his degree + 1
    /// Example: To convert the linear function f(x) = 2*x + 1 on the
    /// domaine [2,5] to BSpline with the bound [-1,1]. Arguments are :
    /// NumCurves  = 1;
    /// Continuity = 1;
    /// Dimension  = 1;
    /// MaxDegree  = 1;
    /// NumCoeffPerCurve [1] = {2};
    /// Coefficients[2] = {1, 2};
    /// PolynomialIntervals[1,2] = {{2,5}}
    /// TrueIntervals[2] = {-1, 1}
    /// </summary>
    Convert_CompPolynomialToPoles(int NumCurves, int Continuity, int Dimension, int MaxDegree, Macad::Occt::TColStd_HArray1OfInteger^ NumCoeffPerCurve, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray2OfReal^ PolynomialIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueIntervals);
    /// <summary>
    /// To Convert several span with different order of Continuity.
    /// Warning: The Length of Continuity have to be NumCurves-1
    /// </summary>
    Convert_CompPolynomialToPoles(int NumCurves, int Dimension, int MaxDegree, Macad::Occt::TColStd_Array1OfInteger^ Continuity, Macad::Occt::TColStd_Array1OfInteger^ NumCoeffPerCurve, Macad::Occt::TColStd_Array1OfReal^ Coefficients, Macad::Occt::TColStd_Array2OfReal^ PolynomialIntervals, Macad::Occt::TColStd_Array1OfReal^ TrueIntervals);
    /// <summary>
    /// To Convert only one span.
    /// </summary>
    Convert_CompPolynomialToPoles(int Dimension, int MaxDegree, int Degree, Macad::Occt::TColStd_Array1OfReal^ Coefficients, Macad::Occt::TColStd_Array1OfReal^ PolynomialIntervals, Macad::Occt::TColStd_Array1OfReal^ TrueIntervals);
    /// <summary>
    /// number of poles of the n-dimensional BSpline
    /// </summary>
    int NbPoles();
    /// <summary>
    /// returns the poles of the n-dimensional BSpline
    /// in the following format :
    /// [1..NumPoles][1..Dimension]
    /// </summary>
    void Poles(Macad::Occt::TColStd_HArray2OfReal^ Poles);
    int Degree();
    /// <summary>
    /// Degree of the n-dimensional Bspline
    /// </summary>
    int NbKnots();
    /// <summary>
    /// Knots of the n-dimensional Bspline
    /// </summary>
    void Knots(Macad::Occt::TColStd_HArray1OfReal^ K);
    /// <summary>
    /// Multiplicities of the knots in the BSpline
    /// </summary>
    void Multiplicities(Macad::Occt::TColStd_HArray1OfInteger^ M);
    bool IsDone();
}; // class Convert_CompPolynomialToPoles

//---------------------------------------------------------------------
//  Class  Convert_ElementarySurfaceToBSplineSurface
//---------------------------------------------------------------------
/// <summary>
/// Root class for algorithms which convert an elementary
/// surface (cylinder, cone, sphere or torus) into a BSpline
/// surface (CylinderToBSplineSurface, ConeToBSplineSurface,
/// SphereToBSplineSurface, TorusToBSplineSurface).
/// These algorithms all work on elementary surfaces from
/// the gp package and compute all the data needed to
/// construct a BSpline surface equivalent to the cylinder,
/// cone, sphere or torus. This data consists of the following:
/// -   degrees in the u and v parametric directions,
/// -   periodic characteristics in the u and v parametric directions,
/// -   a poles table with associated weights,
/// -   a knots table (for the u and v parametric directions)
/// with associated multiplicities.
/// The abstract class
/// ElementarySurfaceToBSplineSurface provides a
/// framework for storing and consulting this computed data.
/// This data may then be used to construct a
/// Geom_BSplineSurface surface, for example.
/// All those classes define algorithms to convert an
/// ElementarySurface into a B-spline surface.
/// This abstract class implements the methods to get
/// the geometric representation of the B-spline surface.
/// The B-spline representation is computed at the creation
/// time in the sub classes.
/// The B-spline surface is defined with its degree in the
/// parametric U and V directions, its control points (Poles),
/// its weights, its knots and their multiplicity.
/// KeyWords :
/// Convert, ElementarySurface, BSplineSurface.
/// </summary>
public ref class Convert_ElementarySurfaceToBSplineSurface
    : public Macad::Occt::BaseClass<::Convert_ElementarySurfaceToBSplineSurface>
{

#ifdef Include_Convert_ElementarySurfaceToBSplineSurface_h
public:
    Include_Convert_ElementarySurfaceToBSplineSurface_h
#endif

protected:
    Convert_ElementarySurfaceToBSplineSurface(InitMode init)
        : Macad::Occt::BaseClass<::Convert_ElementarySurfaceToBSplineSurface>( init )
    {}

public:
    Convert_ElementarySurfaceToBSplineSurface(::Convert_ElementarySurfaceToBSplineSurface* nativeInstance)
        : Macad::Occt::BaseClass<::Convert_ElementarySurfaceToBSplineSurface>( nativeInstance, true )
    {}

    Convert_ElementarySurfaceToBSplineSurface(::Convert_ElementarySurfaceToBSplineSurface& nativeInstance)
        : Macad::Occt::BaseClass<::Convert_ElementarySurfaceToBSplineSurface>( &nativeInstance, false )
    {}

    property ::Convert_ElementarySurfaceToBSplineSurface* NativeInstance
    {
        ::Convert_ElementarySurfaceToBSplineSurface* get()
        {
            return static_cast<::Convert_ElementarySurfaceToBSplineSurface*>(_NativeInstance);
        }
    }

public:
    int UDegree();
    /// <summary>
    /// Returns the degree for the u or v parametric direction of
    /// the BSpline surface whose data is computed in this framework.
    /// </summary>
    int VDegree();
    int NbUPoles();
    /// <summary>
    /// Returns the number of poles for the u or v parametric
    /// direction of the BSpline surface whose data is computed in this framework.
    /// </summary>
    int NbVPoles();
    int NbUKnots();
    /// <summary>
    /// Returns the number of knots for the u or v parametric
    /// direction of the BSpline surface whose data is computed in this framework .
    /// </summary>
    int NbVKnots();
    bool IsUPeriodic();
    /// <summary>
    /// Returns true if the BSpline surface whose data is computed
    /// in this framework is periodic in the u or v parametric direction.
    /// </summary>
    bool IsVPeriodic();
    /// <summary>
    /// Returns the pole of index (UIndex,VIndex) to the poles
    /// table of the BSpline surface whose data is computed in this framework.
    /// Exceptions
    /// Standard_OutOfRange if, for the BSpline surface whose
    /// data is computed in this framework:
    /// -   UIndex is outside the bounds of the poles table in the u
    /// parametric direction, or
    /// -   VIndex is outside the bounds of the poles table in the v
    /// parametric direction.
    /// </summary>
    Macad::Occt::Pnt Pole(int UIndex, int VIndex);
    /// <summary>
    /// Returns the weight of the pole of index (UIndex,VIndex) to
    /// the poles table of the BSpline surface whose data is computed in this framework.
    /// Exceptions
    /// Standard_OutOfRange if, for the BSpline surface whose
    /// data is computed in this framework:
    /// -   UIndex is outside the bounds of the poles table in the u
    /// parametric direction, or
    /// -   VIndex is outside the bounds of the poles table in the v
    /// parametric direction.
    /// </summary>
    double Weight(int UIndex, int VIndex);
    /// <summary>
    /// Returns the U-knot of range UIndex.
    /// Raised if UIndex < 1 or UIndex > NbUKnots.
    /// </summary>
    double UKnot(int UIndex);
    /// <summary>
    /// Returns the V-knot of range VIndex.
    /// Raised if VIndex < 1 or VIndex > NbVKnots.
    /// </summary>
    double VKnot(int UIndex);
    /// <summary>
    /// Returns the multiplicity of the U-knot of range UIndex.
    /// Raised if UIndex < 1 or UIndex > NbUKnots.
    /// </summary>
    int UMultiplicity(int UIndex);
    /// <summary>
    /// Returns the multiplicity of the V-knot of range VIndex.
    /// Raised if VIndex < 1 or VIndex > NbVKnots.
    /// </summary>
    int VMultiplicity(int VIndex);
}; // class Convert_ElementarySurfaceToBSplineSurface

//---------------------------------------------------------------------
//  Class  Convert_ConeToBSplineSurface
//---------------------------------------------------------------------
/// <summary>
/// This algorithm converts a bounded Cone into a rational
/// B-spline  surface.
/// The cone a Cone from package gp. Its parametrization is :
/// P (U, V) =  Loc + V * Zdir +
/// (R + V*Tan(Ang)) * (Cos(U)*Xdir + Sin(U)*Ydir)
/// where Loc is the location point of the cone, Xdir, Ydir and Zdir
/// are the normalized directions of the local cartesian coordinate
/// system of the cone (Zdir is the direction of the Cone's axis) ,
/// Ang is the cone semi-angle.  The U parametrization range is
/// [0, 2PI].
/// KeyWords :
/// Convert, Cone, BSplineSurface.
/// </summary>
public ref class Convert_ConeToBSplineSurface sealed
    : public Macad::Occt::Convert_ElementarySurfaceToBSplineSurface
{

#ifdef Include_Convert_ConeToBSplineSurface_h
public:
    Include_Convert_ConeToBSplineSurface_h
#endif

public:
    Convert_ConeToBSplineSurface(::Convert_ConeToBSplineSurface* nativeInstance)
        : Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
    {}

    Convert_ConeToBSplineSurface(::Convert_ConeToBSplineSurface& nativeInstance)
        : Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
    {}

    property ::Convert_ConeToBSplineSurface* NativeInstance
    {
        ::Convert_ConeToBSplineSurface* get()
        {
            return static_cast<::Convert_ConeToBSplineSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The equivalent B-spline surface as the same orientation as the
    /// Cone in the U and V parametric directions.
    /// 
    /// Raised if U1 = U2 or U1 = U2 + 2.0 * Pi
    /// Raised if V1 = V2.
    /// </summary>
    Convert_ConeToBSplineSurface(Macad::Occt::gp_Cone^ C, double U1, double U2, double V1, double V2);
    /// <summary>
    /// The equivalent B-spline surface as the same orientation as the
    /// Cone in the U and V parametric directions.
    /// 
    /// Raised if V1 = V2.
    /// </summary>
    Convert_ConeToBSplineSurface(Macad::Occt::gp_Cone^ C, double V1, double V2);
}; // class Convert_ConeToBSplineSurface

//---------------------------------------------------------------------
//  Class  Convert_CylinderToBSplineSurface
//---------------------------------------------------------------------
/// <summary>
/// This algorithm converts a bounded cylinder into a rational
/// B-spline surface. The cylinder is a Cylinder from package gp.
/// The parametrization of the cylinder is  :
/// P (U, V) = Loc + V * Zdir + Radius * (Xdir*Cos(U) + Ydir*Sin(U))
/// where Loc is the location point of the cylinder, Xdir, Ydir and
/// Zdir are the normalized directions of the local cartesian
/// coordinate system of the cylinder (Zdir is the direction of the
/// cylinder's axis). The U parametrization range is U [0, 2PI].
/// KeyWords :
/// Convert, Cylinder, BSplineSurface.
/// </summary>
public ref class Convert_CylinderToBSplineSurface sealed
    : public Macad::Occt::Convert_ElementarySurfaceToBSplineSurface
{

#ifdef Include_Convert_CylinderToBSplineSurface_h
public:
    Include_Convert_CylinderToBSplineSurface_h
#endif

public:
    Convert_CylinderToBSplineSurface(::Convert_CylinderToBSplineSurface* nativeInstance)
        : Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
    {}

    Convert_CylinderToBSplineSurface(::Convert_CylinderToBSplineSurface& nativeInstance)
        : Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
    {}

    property ::Convert_CylinderToBSplineSurface* NativeInstance
    {
        ::Convert_CylinderToBSplineSurface* get()
        {
            return static_cast<::Convert_CylinderToBSplineSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The equivalent B-splineSurface as the same orientation as the
    /// cylinder in the U and V parametric directions.
    /// 
    /// Raised if U1 = U2 or U1 = U2 + 2.0 * Pi
    /// Raised if V1 = V2.
    /// </summary>
    Convert_CylinderToBSplineSurface(Macad::Occt::gp_Cylinder^ Cyl, double U1, double U2, double V1, double V2);
    /// <summary>
    /// The equivalent B-splineSurface as the same orientation as the
    /// cylinder in the U and V parametric directions.
    /// 
    /// Raised if V1 = V2.
    /// </summary>
    Convert_CylinderToBSplineSurface(Macad::Occt::gp_Cylinder^ Cyl, double V1, double V2);
}; // class Convert_CylinderToBSplineSurface

//---------------------------------------------------------------------
//  Class  Convert_EllipseToBSplineCurve
//---------------------------------------------------------------------
/// <summary>
/// This algorithm converts a ellipse into a rational B-spline curve.
/// The ellipse is represented an Elips2d from package gp with
/// the parametrization :
/// P (U) =
/// Loc + (MajorRadius * Cos(U) * Xdir + MinorRadius * Sin(U) * Ydir)
/// where Loc is the center of the ellipse, Xdir and Ydir are the
/// normalized directions of the local cartesian coordinate system of
/// the ellipse. The parametrization range is U [0, 2PI].
/// KeyWords :
/// Convert, Ellipse, BSplineCurve, 2D .
/// </summary>
public ref class Convert_EllipseToBSplineCurve sealed
    : public Macad::Occt::Convert_ConicToBSplineCurve
{

#ifdef Include_Convert_EllipseToBSplineCurve_h
public:
    Include_Convert_EllipseToBSplineCurve_h
#endif

public:
    Convert_EllipseToBSplineCurve(::Convert_EllipseToBSplineCurve* nativeInstance)
        : Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
    {}

    Convert_EllipseToBSplineCurve(::Convert_EllipseToBSplineCurve& nativeInstance)
        : Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
    {}

    property ::Convert_EllipseToBSplineCurve* NativeInstance
    {
        ::Convert_EllipseToBSplineCurve* get()
        {
            return static_cast<::Convert_EllipseToBSplineCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The equivalent B-spline curve has the same orientation
    /// as the ellipse E.
    /// </summary>
    Convert_EllipseToBSplineCurve(Macad::Occt::gp_Elips2d^ E, Macad::Occt::Convert_ParameterisationType Parameterisation);
    /// <summary>
    /// The equivalent B-spline curve has the same orientation
    /// as the ellipse E.
    /// </summary>
    Convert_EllipseToBSplineCurve(Macad::Occt::gp_Elips2d^ E);
    /// <summary>
    /// The ellipse E is limited between the parametric values U1, U2.
    /// The equivalent B-spline curve is oriented from U1 to U2 and has
    /// the same orientation as E.
    /// 
    /// Raised if U1 = U2 or U1 = U2 + 2.0 * Pi
    /// </summary>
    Convert_EllipseToBSplineCurve(Macad::Occt::gp_Elips2d^ E, double U1, double U2, Macad::Occt::Convert_ParameterisationType Parameterisation);
    /// <summary>
    /// The ellipse E is limited between the parametric values U1, U2.
    /// The equivalent B-spline curve is oriented from U1 to U2 and has
    /// the same orientation as E.
    /// 
    /// Raised if U1 = U2 or U1 = U2 + 2.0 * Pi
    /// </summary>
    Convert_EllipseToBSplineCurve(Macad::Occt::gp_Elips2d^ E, double U1, double U2);
}; // class Convert_EllipseToBSplineCurve

//---------------------------------------------------------------------
//  Class  Convert_GridPolynomialToPoles
//---------------------------------------------------------------------
/// <summary>
/// Convert a grid of Polynomial Surfaces
/// that are have continuity CM to an
/// Bspline Surface that has continuity
/// CM
/// </summary>
public ref class Convert_GridPolynomialToPoles sealed
    : public Macad::Occt::BaseClass<::Convert_GridPolynomialToPoles>
{

#ifdef Include_Convert_GridPolynomialToPoles_h
public:
    Include_Convert_GridPolynomialToPoles_h
#endif

public:
    Convert_GridPolynomialToPoles(::Convert_GridPolynomialToPoles* nativeInstance)
        : Macad::Occt::BaseClass<::Convert_GridPolynomialToPoles>( nativeInstance, true )
    {}

    Convert_GridPolynomialToPoles(::Convert_GridPolynomialToPoles& nativeInstance)
        : Macad::Occt::BaseClass<::Convert_GridPolynomialToPoles>( &nativeInstance, false )
    {}

    property ::Convert_GridPolynomialToPoles* NativeInstance
    {
        ::Convert_GridPolynomialToPoles* get()
        {
            return static_cast<::Convert_GridPolynomialToPoles*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// To    only  one   polynomial  Surface.
    /// The  Length  of  <PolynomialUIntervals> and <PolynomialVIntervals>
    /// have to be 2.
    /// This values defined the parametric domain of the Polynomial Equation.
    /// 
    /// Coefficients :
    /// The <Coefficients> have to be formatted than an "C array"
    /// [MaxUDegree+1] [MaxVDegree+1] [3]
    /// </summary>
    Convert_GridPolynomialToPoles(int MaxUDegree, int MaxVDegree, Macad::Occt::TColStd_HArray1OfInteger^ NumCoeff, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray1OfReal^ PolynomialUIntervals, Macad::Occt::TColStd_HArray1OfReal^ PolynomialVIntervals);
    /// <summary>
    /// To one grid of polynomial Surface.
    /// Warning!
    /// Continuity in each parametric direction can be at MOST the
    /// maximum degree of the polynomial functions.
    /// 
    /// <TrueUIntervals>, <TrueVIntervals> :
    /// this is the true parameterisation for the composite surface
    /// 
    /// Coefficients :
    /// The Coefficients have to be formatted than an "C array"
    /// [NbVSurfaces] [NBUSurfaces] [MaxUDegree+1] [MaxVDegree+1] [3]
    /// raises DomainError    if <NumCoeffPerSurface> is not a
    /// [1, NbVSurfaces*NbUSurfaces, 1,2] array.
    /// if <Coefficients> is not a
    /// </summary>
    Convert_GridPolynomialToPoles(int NbUSurfaces, int NBVSurfaces, int UContinuity, int VContinuity, int MaxUDegree, int MaxVDegree, Macad::Occt::TColStd_HArray2OfInteger^ NumCoeffPerSurface, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray1OfReal^ PolynomialUIntervals, Macad::Occt::TColStd_HArray1OfReal^ PolynomialVIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueUIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueVIntervals);
    void Perform(int UContinuity, int VContinuity, int MaxUDegree, int MaxVDegree, Macad::Occt::TColStd_HArray2OfInteger^ NumCoeffPerSurface, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray1OfReal^ PolynomialUIntervals, Macad::Occt::TColStd_HArray1OfReal^ PolynomialVIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueUIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueVIntervals);
    int NbUPoles();
    int NbVPoles();
    /// <summary>
    /// returns the poles of the BSpline Surface
    /// </summary>
    Macad::Occt::TColgp_HArray2OfPnt^ Poles();
    int UDegree();
    int VDegree();
    int NbUKnots();
    int NbVKnots();
    /// <summary>
    /// Knots in the U direction
    /// </summary>
    Macad::Occt::TColStd_HArray1OfReal^ UKnots();
    /// <summary>
    /// Knots in the V direction
    /// </summary>
    Macad::Occt::TColStd_HArray1OfReal^ VKnots();
    /// <summary>
    /// Multiplicities of the knots in the U direction
    /// </summary>
    Macad::Occt::TColStd_HArray1OfInteger^ UMultiplicities();
    /// <summary>
    /// Multiplicities of the knots in the V direction
    /// </summary>
    Macad::Occt::TColStd_HArray1OfInteger^ VMultiplicities();
    bool IsDone();
}; // class Convert_GridPolynomialToPoles

//---------------------------------------------------------------------
//  Class  Convert_HyperbolaToBSplineCurve
//---------------------------------------------------------------------
/// <summary>
/// This algorithm converts a hyperbola into a rational B-spline curve.
/// The hyperbola is an Hypr2d from package gp with the
/// parametrization :
/// P (U) =
/// Loc + (MajorRadius * Cosh(U) * Xdir + MinorRadius * Sinh(U) * Ydir)
/// where Loc is the location point of the hyperbola, Xdir and Ydir are
/// the normalized directions of the local cartesian coordinate system
/// of the hyperbola.
/// KeyWords :
/// Convert, Hyperbola, BSplineCurve, 2D .
/// </summary>
public ref class Convert_HyperbolaToBSplineCurve sealed
    : public Macad::Occt::Convert_ConicToBSplineCurve
{

#ifdef Include_Convert_HyperbolaToBSplineCurve_h
public:
    Include_Convert_HyperbolaToBSplineCurve_h
#endif

public:
    Convert_HyperbolaToBSplineCurve(::Convert_HyperbolaToBSplineCurve* nativeInstance)
        : Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
    {}

    Convert_HyperbolaToBSplineCurve(::Convert_HyperbolaToBSplineCurve& nativeInstance)
        : Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
    {}

    property ::Convert_HyperbolaToBSplineCurve* NativeInstance
    {
        ::Convert_HyperbolaToBSplineCurve* get()
        {
            return static_cast<::Convert_HyperbolaToBSplineCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The hyperbola H is limited between the parametric values U1, U2
    /// and the equivalent B-spline curve has the same orientation as the
    /// hyperbola.
    /// </summary>
    Convert_HyperbolaToBSplineCurve(Macad::Occt::gp_Hypr2d^ H, double U1, double U2);
}; // class Convert_HyperbolaToBSplineCurve

//---------------------------------------------------------------------
//  Class  Convert_ParabolaToBSplineCurve
//---------------------------------------------------------------------
/// <summary>
/// This algorithm converts a parabola into a non rational B-spline
/// curve.
/// The parabola is a Parab2d from package gp with the parametrization
/// P (U) = Loc + F * (U*U * Xdir + 2 * U * Ydir) where Loc is the
/// apex of the parabola, Xdir is the normalized direction of the
/// symmetry axis of the parabola, Ydir is the normalized direction of
/// the directrix and F is the focal length.
/// KeyWords :
/// Convert, Parabola, BSplineCurve, 2D .
/// </summary>
public ref class Convert_ParabolaToBSplineCurve sealed
    : public Macad::Occt::Convert_ConicToBSplineCurve
{

#ifdef Include_Convert_ParabolaToBSplineCurve_h
public:
    Include_Convert_ParabolaToBSplineCurve_h
#endif

public:
    Convert_ParabolaToBSplineCurve(::Convert_ParabolaToBSplineCurve* nativeInstance)
        : Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
    {}

    Convert_ParabolaToBSplineCurve(::Convert_ParabolaToBSplineCurve& nativeInstance)
        : Macad::Occt::Convert_ConicToBSplineCurve( nativeInstance )
    {}

    property ::Convert_ParabolaToBSplineCurve* NativeInstance
    {
        ::Convert_ParabolaToBSplineCurve* get()
        {
            return static_cast<::Convert_ParabolaToBSplineCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The parabola Prb is limited between the parametric values U1, U2
    /// and the equivalent B-spline curve as the same orientation as the
    /// parabola Prb.
    /// </summary>
    Convert_ParabolaToBSplineCurve(Macad::Occt::gp_Parab2d^ Prb, double U1, double U2);
}; // class Convert_ParabolaToBSplineCurve

//---------------------------------------------------------------------
//  Class  Convert_SphereToBSplineSurface
//---------------------------------------------------------------------
/// <summary>
/// This algorithm converts a bounded Sphere into a rational
/// B-spline surface. The sphere is a Sphere from package gp.
/// The parametrization of the sphere is
/// P (U, V) = Loc  + Radius * Sin(V) * Zdir +
/// Radius * Cos(V) * (Cos(U)*Xdir + Sin(U)*Ydir)
/// where Loc is the center of the sphere Xdir, Ydir and Zdir are the
/// normalized directions of the local cartesian coordinate system of
/// the sphere. The parametrization range is U [0, 2PI] and
/// V [-PI/2, PI/2].
/// KeyWords :
/// Convert, Sphere, BSplineSurface.
/// </summary>
public ref class Convert_SphereToBSplineSurface sealed
    : public Macad::Occt::Convert_ElementarySurfaceToBSplineSurface
{

#ifdef Include_Convert_SphereToBSplineSurface_h
public:
    Include_Convert_SphereToBSplineSurface_h
#endif

public:
    Convert_SphereToBSplineSurface(::Convert_SphereToBSplineSurface* nativeInstance)
        : Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
    {}

    Convert_SphereToBSplineSurface(::Convert_SphereToBSplineSurface& nativeInstance)
        : Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
    {}

    property ::Convert_SphereToBSplineSurface* NativeInstance
    {
        ::Convert_SphereToBSplineSurface* get()
        {
            return static_cast<::Convert_SphereToBSplineSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The equivalent B-spline surface as the same orientation as the
    /// sphere in the U and V parametric directions.
    /// 
    /// Raised if U1 = U2 or U1 = U2 + 2.0 * Pi
    /// Raised if V1 = V2.
    /// </summary>
    Convert_SphereToBSplineSurface(Macad::Occt::gp_Sphere^ Sph, double U1, double U2, double V1, double V2);
    /// <summary>
    /// The equivalent B-spline surface as the same orientation
    /// as the sphere in the U and V parametric directions.
    /// 
    /// Raised if UTrim = True and Param1 = Param2 or
    /// Param1 = Param2 + 2.0 * Pi
    /// Raised if UTrim = False and Param1 = Param2
    /// </summary>
    Convert_SphereToBSplineSurface(Macad::Occt::gp_Sphere^ Sph, double Param1, double Param2, bool UTrim);
    /// <summary>
    /// The equivalent B-spline surface as the same orientation
    /// as the sphere in the U and V parametric directions.
    /// 
    /// Raised if UTrim = True and Param1 = Param2 or
    /// Param1 = Param2 + 2.0 * Pi
    /// Raised if UTrim = False and Param1 = Param2
    /// </summary>
    Convert_SphereToBSplineSurface(Macad::Occt::gp_Sphere^ Sph, double Param1, double Param2);
    /// <summary>
    /// The equivalent B-spline surface as the same orientation
    /// as the sphere in the U and V parametric directions.
    /// </summary>
    Convert_SphereToBSplineSurface(Macad::Occt::gp_Sphere^ Sph);
}; // class Convert_SphereToBSplineSurface

//---------------------------------------------------------------------
//  Class  Convert_TorusToBSplineSurface
//---------------------------------------------------------------------
/// <summary>
/// This algorithm converts a bounded Torus into a rational
/// B-spline surface. The torus is a Torus from package gp.
/// The parametrization of the torus is :
/// P (U, V) =
/// Loc  +  MinorRadius * Sin(V) * Zdir +
/// (MajorRadius+MinorRadius*Cos(V)) *  (Cos(U)*Xdir + Sin(U)*Ydir)
/// where Loc is the center of the torus, Xdir, Ydir and Zdir are the
/// normalized directions of the local cartesian coordinate system of
/// the Torus. The parametrization range is U [0, 2PI], V [0, 2PI].
/// KeyWords :
/// Convert, Torus, BSplineSurface.
/// </summary>
public ref class Convert_TorusToBSplineSurface sealed
    : public Macad::Occt::Convert_ElementarySurfaceToBSplineSurface
{

#ifdef Include_Convert_TorusToBSplineSurface_h
public:
    Include_Convert_TorusToBSplineSurface_h
#endif

public:
    Convert_TorusToBSplineSurface(::Convert_TorusToBSplineSurface* nativeInstance)
        : Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
    {}

    Convert_TorusToBSplineSurface(::Convert_TorusToBSplineSurface& nativeInstance)
        : Macad::Occt::Convert_ElementarySurfaceToBSplineSurface( nativeInstance )
    {}

    property ::Convert_TorusToBSplineSurface* NativeInstance
    {
        ::Convert_TorusToBSplineSurface* get()
        {
            return static_cast<::Convert_TorusToBSplineSurface*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// The equivalent B-spline surface as the same orientation as the
    /// torus in the U and V parametric directions.
    /// 
    /// Raised if U1 = U2 or U1 = U2 + 2.0 * Pi
    /// Raised if V1 = V2 or V1 = V2 + 2.0 * Pi
    /// </summary>
    Convert_TorusToBSplineSurface(Macad::Occt::gp_Torus^ T, double U1, double U2, double V1, double V2);
    /// <summary>
    /// The equivalent B-spline surface as the same orientation as the
    /// torus in the U and V parametric directions.
    /// 
    /// Raised if Param1 = Param2 or Param1 = Param2 + 2.0 * Pi
    /// </summary>
    Convert_TorusToBSplineSurface(Macad::Occt::gp_Torus^ T, double Param1, double Param2, bool UTrim);
    /// <summary>
    /// The equivalent B-spline surface as the same orientation as the
    /// torus in the U and V parametric directions.
    /// 
    /// Raised if Param1 = Param2 or Param1 = Param2 + 2.0 * Pi
    /// </summary>
    Convert_TorusToBSplineSurface(Macad::Occt::gp_Torus^ T, double Param1, double Param2);
    /// <summary>
    /// The equivalent B-spline surface as the same orientation as the
    /// torus in the U and V parametric directions.
    /// </summary>
    Convert_TorusToBSplineSurface(Macad::Occt::gp_Torus^ T);
}; // class Convert_TorusToBSplineSurface

}; // namespace Occt
}; // namespace Macad
