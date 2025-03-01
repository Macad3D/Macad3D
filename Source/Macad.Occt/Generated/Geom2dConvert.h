// Generated wrapper code for package Geom2dConvert

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Geom2dConvert_SequenceOfPPoint
//---------------------------------------------------------------------
public ref class Geom2dConvert_SequenceOfPPoint sealed
    : public Macad::Occt::BaseClass<::Geom2dConvert_SequenceOfPPoint>
    , public IIndexEnumerable<Macad::Occt::Geom2dConvert_PPoint^>
{

#ifdef Include_Geom2dConvert_SequenceOfPPoint_h
public:
    Include_Geom2dConvert_SequenceOfPPoint_h
#endif

public:
    Geom2dConvert_SequenceOfPPoint(::Geom2dConvert_SequenceOfPPoint* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_SequenceOfPPoint>( nativeInstance, true )
    {}

    Geom2dConvert_SequenceOfPPoint(::Geom2dConvert_SequenceOfPPoint& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_SequenceOfPPoint>( &nativeInstance, false )
    {}

    property ::Geom2dConvert_SequenceOfPPoint* NativeInstance
    {
        ::Geom2dConvert_SequenceOfPPoint* get()
        {
            return static_cast<::Geom2dConvert_SequenceOfPPoint*>(_NativeInstance);
        }
    }

public:
    ref class Iterator sealed
        : public Macad::Occt::BaseClass<::Geom2dConvert_SequenceOfPPoint::Iterator>
    {

#ifdef Include_Geom2dConvert_SequenceOfPPoint_Iterator_h
    public:
        Include_Geom2dConvert_SequenceOfPPoint_Iterator_h
#endif

    public:
        Iterator(::Geom2dConvert_SequenceOfPPoint::Iterator* nativeInstance)
            : Macad::Occt::BaseClass<::Geom2dConvert_SequenceOfPPoint::Iterator>( nativeInstance, true )
        {}

        Iterator(::Geom2dConvert_SequenceOfPPoint::Iterator& nativeInstance)
            : Macad::Occt::BaseClass<::Geom2dConvert_SequenceOfPPoint::Iterator>( &nativeInstance, false )
        {}

        property ::Geom2dConvert_SequenceOfPPoint::Iterator* NativeInstance
        {
            ::Geom2dConvert_SequenceOfPPoint::Iterator* get()
            {
                return static_cast<::Geom2dConvert_SequenceOfPPoint::Iterator*>(_NativeInstance);
            }
        }

    public:
        Iterator();
        bool More();
        void Next();
        Macad::Occt::Geom2dConvert_PPoint^ Value();
        Macad::Occt::Geom2dConvert_PPoint^ ChangeValue();
        bool IsEqual(Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator^ theOther);
        bool Equals(System::Object^ obj) override;
    }; // class Iterator

    Geom2dConvert_SequenceOfPPoint();
    Geom2dConvert_SequenceOfPPoint(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
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
    Macad::Occt::Geom2dConvert_SequenceOfPPoint^ Assign(Macad::Occt::Geom2dConvert_SequenceOfPPoint^ theOther);
    void Remove(Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator^ thePosition);
    void Append(Macad::Occt::Geom2dConvert_PPoint^ theItem);
    void Prepend(Macad::Occt::Geom2dConvert_PPoint^ theItem);
    void InsertBefore(int theIndex, Macad::Occt::Geom2dConvert_PPoint^ theItem);
    void InsertAfter(Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator^ thePosition, Macad::Occt::Geom2dConvert_PPoint^ theItem);
    void Split(int theIndex, Macad::Occt::Geom2dConvert_SequenceOfPPoint^ theSeq);
    Macad::Occt::Geom2dConvert_PPoint^ First();
    Macad::Occt::Geom2dConvert_PPoint^ ChangeFirst();
    Macad::Occt::Geom2dConvert_PPoint^ Last();
    Macad::Occt::Geom2dConvert_PPoint^ ChangeLast();
    virtual Macad::Occt::Geom2dConvert_PPoint^ Value(int theIndex);
    Macad::Occt::Geom2dConvert_PPoint^ ChangeValue(int theIndex);
    void SetValue(int theIndex, Macad::Occt::Geom2dConvert_PPoint^ theItem);
    virtual System::Collections::Generic::IEnumerator<Macad::Occt::Geom2dConvert_PPoint^>^ GetEnumerator();
    virtual System::Collections::IEnumerator^ GetEnumerator2() = System::Collections::IEnumerable::GetEnumerator;
}; // class Geom2dConvert_SequenceOfPPoint

//---------------------------------------------------------------------
//  Class  Geom2dConvert
//---------------------------------------------------------------------
/// <summary>
/// This package provides an implementation of algorithms to do
/// the conversion between equivalent geometric entities from
/// package Geom2d.
/// It gives the possibility :
/// . to obtain the B-spline representation of bounded curves.
/// . to split a B-spline curve into several B-spline curves
/// with some constraints of continuity,
/// . to convert a B-spline curve into several Bezier curves
/// or surfaces.
/// All the geometric entities used in this package are bounded.
/// References :
/// . Generating the Bezier Points of B-spline curves and surfaces
/// (Wolfgang Bohm) CAGD volume 13 number 6 november 1981
/// . On NURBS: A Survey  (Leslie Piegl) IEEE Computer Graphics and
/// Application January 1991
/// . Curve and surface construction using rational B-splines
/// (Leslie Piegl and Wayne Tiller) CAD Volume 19 number 9 november
/// 1987
/// . A survey of curve and surface methods in CAGD (Wolfgang BOHM)
/// CAGD 1 1984
/// </summary>
public ref class Geom2dConvert sealed
    : public Macad::Occt::BaseClass<::Geom2dConvert>
{

#ifdef Include_Geom2dConvert_h
public:
    Include_Geom2dConvert_h
#endif

public:
    Geom2dConvert(::Geom2dConvert* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert>( nativeInstance, true )
    {}

    Geom2dConvert(::Geom2dConvert& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert>( &nativeInstance, false )
    {}

    property ::Geom2dConvert* NativeInstance
    {
        ::Geom2dConvert* get()
        {
            return static_cast<::Geom2dConvert*>(_NativeInstance);
        }
    }

public:
    Geom2dConvert();
    /// <summary>
    /// -- Convert a curve to BSpline  by Approximation
    /// 
    /// This method computes the arc of B-spline curve between the two
    /// knots FromK1 and ToK2.  If C is periodic the arc has the same
    /// orientation as C if SameOrientation = Standard_True.
    /// If C is not periodic  SameOrientation is not used for the
    /// computation and C is oriented from the knot fromK1 to the
    /// knot toK2.
    /// We just keep the local definition of C between the knots
    /// FromK1 and ToK2.  The returned B-spline curve has its first
    /// and last knots with a multiplicity equal to degree + 1, where
    /// degree is the polynomial degree of C.
    /// The indexes of the knots FromK1 and ToK2 doesn't include the
    /// repetition of multiple knots in their definition.
    /// 
    /// Raised if FromK1 or ToK2 are out of the bounds
    /// [FirstUKnotIndex, LastUKnotIndex]
    /// Raised if FromK1 = ToK2
    /// </summary>
    static Macad::Occt::Geom2d_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, int FromK1, int ToK2, bool SameOrientation);
    /// <summary>
    /// -- Convert a curve to BSpline  by Approximation
    /// 
    /// This method computes the arc of B-spline curve between the two
    /// knots FromK1 and ToK2.  If C is periodic the arc has the same
    /// orientation as C if SameOrientation = Standard_True.
    /// If C is not periodic  SameOrientation is not used for the
    /// computation and C is oriented from the knot fromK1 to the
    /// knot toK2.
    /// We just keep the local definition of C between the knots
    /// FromK1 and ToK2.  The returned B-spline curve has its first
    /// and last knots with a multiplicity equal to degree + 1, where
    /// degree is the polynomial degree of C.
    /// The indexes of the knots FromK1 and ToK2 doesn't include the
    /// repetition of multiple knots in their definition.
    /// 
    /// Raised if FromK1 or ToK2 are out of the bounds
    /// [FirstUKnotIndex, LastUKnotIndex]
    /// Raised if FromK1 = ToK2
    /// </summary>
    static Macad::Occt::Geom2d_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, int FromK1, int ToK2);
    /// <summary>
    /// This function computes the segment of B-spline curve between the
    /// parametric values FromU1, ToU2.
    /// If C is periodic the arc has the same orientation as C if
    /// SameOrientation = True.
    /// If C is not periodic SameOrientation is not used for the
    /// computation and C is oriented fromU1 toU2.
    /// If U1 and U2 and two parametric values we consider that
    /// U1 = U2 if Abs (U1 - U2) <= ParametricTolerance and
    /// ParametricTolerance must  be greater or equal to Resolution
    /// from package gp.
    /// 
    /// Raised if FromU1 or ToU2 are out of the parametric bounds of the
    /// curve (The tolerance criterion is ParametricTolerance).
    /// Raised if Abs (FromU1 - ToU2) <= ParametricTolerance
    /// Raised if ParametricTolerance < Resolution from gp.
    /// </summary>
    static Macad::Occt::Geom2d_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance, bool SameOrientation);
    /// <summary>
    /// This function computes the segment of B-spline curve between the
    /// parametric values FromU1, ToU2.
    /// If C is periodic the arc has the same orientation as C if
    /// SameOrientation = True.
    /// If C is not periodic SameOrientation is not used for the
    /// computation and C is oriented fromU1 toU2.
    /// If U1 and U2 and two parametric values we consider that
    /// U1 = U2 if Abs (U1 - U2) <= ParametricTolerance and
    /// ParametricTolerance must  be greater or equal to Resolution
    /// from package gp.
    /// 
    /// Raised if FromU1 or ToU2 are out of the parametric bounds of the
    /// curve (The tolerance criterion is ParametricTolerance).
    /// Raised if Abs (FromU1 - ToU2) <= ParametricTolerance
    /// Raised if ParametricTolerance < Resolution from gp.
    /// </summary>
    static Macad::Occt::Geom2d_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance);
    /// <summary>
    /// This function converts a non infinite curve from
    /// Geom into a  B-spline curve.  C must  be  an ellipse or a
    /// circle or a trimmed conic  or a trimmed  line or a Bezier
    /// curve or a trimmed  Bezier curve or a  BSpline curve or  a
    /// trimmed BSpline   curve  or an  Offset  curve or a  trimmed
    /// Offset curve.
    /// The returned B-spline is not periodic except if C is a
    /// Circle or an Ellipse.
    /// ParameterisationType applies only if the curve is a Circle
    /// or an ellipse :
    /// TgtThetaOver2,
    /// TgtThetaOver2_1,
    /// TgtThetaOver2_2,
    /// TgtThetaOver2_3,
    /// TgtThetaOver2_4,
    /// Purpose: this is the classical rational parameterisation
    /// 2
    /// 1 - t
    /// cos(theta) = ------
    /// 2
    /// 1 + t
    /// 
    /// 2t
    /// sin(theta) = ------
    /// 2
    /// 1 + t
    /// 
    /// t = tan (theta/2)
    /// 
    /// with TgtThetaOver2  the routine will compute the number of spans
    /// using the rule num_spans = [ (ULast - UFirst) / 1.2 ] + 1
    /// with TgtThetaOver2_N, N  spans will be forced: an error will
    /// be raized if (ULast - UFirst) >= PI and N = 1,
    /// ULast - UFirst >= 2 PI and N = 2
    /// 
    /// QuasiAngular,
    /// here t is a rational function that approximates
    /// theta ----> tan(theta/2).
    /// Nevetheless the composing with above function yields exact
    /// functions whose square sum up to 1
    /// RationalC1 ;
    /// t is replaced by a polynomial function of u so as to grant
    /// C1 contiuity across knots.
    /// Exceptions
    /// Standard_DomainError if the curve C is infinite.
    /// Standard_ConstructionError:
    /// -   if C is a complete circle or ellipse, and if
    /// Parameterisation is not equal to
    /// Convert_TgtThetaOver2 or to Convert_RationalC1, or
    /// -   if C is a trimmed circle or ellipse and if
    /// Parameterisation is equal to
    /// Convert_TgtThetaOver2_1 and if U2 - U1 >
    /// 0.9999 * Pi where U1 and U2 are
    /// respectively the first and the last parameters of the
    /// trimmed curve (this method of parameterization
    /// cannot be used to convert a half-circle or a
    /// half-ellipse, for example), or
    /// -   if C is a trimmed circle or ellipse and
    /// Parameterisation is equal to
    /// Convert_TgtThetaOver2_2 and U2 - U1 >
    /// 1.9999 * Pi where U1 and U2 are
    /// respectively the first and the last parameters of the
    /// trimmed curve (this method of parameterization
    /// cannot be used to convert a quasi-complete circle or ellipse).
    /// </summary>
    static Macad::Occt::Geom2d_BSplineCurve^ CurveToBSplineCurve(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Convert_ParameterisationType Parameterisation);
    /// <summary>
    /// This function converts a non infinite curve from
    /// Geom into a  B-spline curve.  C must  be  an ellipse or a
    /// circle or a trimmed conic  or a trimmed  line or a Bezier
    /// curve or a trimmed  Bezier curve or a  BSpline curve or  a
    /// trimmed BSpline   curve  or an  Offset  curve or a  trimmed
    /// Offset curve.
    /// The returned B-spline is not periodic except if C is a
    /// Circle or an Ellipse.
    /// ParameterisationType applies only if the curve is a Circle
    /// or an ellipse :
    /// TgtThetaOver2,
    /// TgtThetaOver2_1,
    /// TgtThetaOver2_2,
    /// TgtThetaOver2_3,
    /// TgtThetaOver2_4,
    /// Purpose: this is the classical rational parameterisation
    /// 2
    /// 1 - t
    /// cos(theta) = ------
    /// 2
    /// 1 + t
    /// 
    /// 2t
    /// sin(theta) = ------
    /// 2
    /// 1 + t
    /// 
    /// t = tan (theta/2)
    /// 
    /// with TgtThetaOver2  the routine will compute the number of spans
    /// using the rule num_spans = [ (ULast - UFirst) / 1.2 ] + 1
    /// with TgtThetaOver2_N, N  spans will be forced: an error will
    /// be raized if (ULast - UFirst) >= PI and N = 1,
    /// ULast - UFirst >= 2 PI and N = 2
    /// 
    /// QuasiAngular,
    /// here t is a rational function that approximates
    /// theta ----> tan(theta/2).
    /// Nevetheless the composing with above function yields exact
    /// functions whose square sum up to 1
    /// RationalC1 ;
    /// t is replaced by a polynomial function of u so as to grant
    /// C1 contiuity across knots.
    /// Exceptions
    /// Standard_DomainError if the curve C is infinite.
    /// Standard_ConstructionError:
    /// -   if C is a complete circle or ellipse, and if
    /// Parameterisation is not equal to
    /// Convert_TgtThetaOver2 or to Convert_RationalC1, or
    /// -   if C is a trimmed circle or ellipse and if
    /// Parameterisation is equal to
    /// Convert_TgtThetaOver2_1 and if U2 - U1 >
    /// 0.9999 * Pi where U1 and U2 are
    /// respectively the first and the last parameters of the
    /// trimmed curve (this method of parameterization
    /// cannot be used to convert a half-circle or a
    /// half-ellipse, for example), or
    /// -   if C is a trimmed circle or ellipse and
    /// Parameterisation is equal to
    /// Convert_TgtThetaOver2_2 and U2 - U1 >
    /// 1.9999 * Pi where U1 and U2 are
    /// respectively the first and the last parameters of the
    /// trimmed curve (this method of parameterization
    /// cannot be used to convert a quasi-complete circle or ellipse).
    /// </summary>
    static Macad::Occt::Geom2d_BSplineCurve^ CurveToBSplineCurve(Macad::Occt::Geom2d_Curve^ C);
    /* Method skipped due to unknown mapping: void ConcatG1(TColGeom2d_Array1OfBSplineCurve ArrayOfCurves, TColStd_Array1OfReal ArrayOfToler, TColGeom2d_HArray1OfBSplineCurve ArrayOfConcatenated, bool ClosedFlag, double ClosedTolerance, ) */
    /* Method skipped due to unknown mapping: void ConcatC1(TColGeom2d_Array1OfBSplineCurve ArrayOfCurves, TColStd_Array1OfReal ArrayOfToler, TColStd_HArray1OfInteger ArrayOfIndices, TColGeom2d_HArray1OfBSplineCurve ArrayOfConcatenated, bool ClosedFlag, double ClosedTolerance, ) */
    /* Method skipped due to unknown mapping: void ConcatC1(TColGeom2d_Array1OfBSplineCurve ArrayOfCurves, TColStd_Array1OfReal ArrayOfToler, TColStd_HArray1OfInteger ArrayOfIndices, TColGeom2d_HArray1OfBSplineCurve ArrayOfConcatenated, bool ClosedFlag, double ClosedTolerance, double AngularTolerance, ) */
    /// <summary>
    /// This Method reduces as   far as it  is possible the
    /// multiplicities of  the  knots of  the BSpline BS.(keeping  the geometry).
    /// It returns a new BSpline which could still be C0.
    /// tolerance is a geometrical tolerance
    /// </summary>
    static void C0BSplineToC1BSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ BS, double Tolerance);
    /* Method skipped due to unknown mapping: void C0BSplineToArrayOfC1BSplineCurve(Geom2d_BSplineCurve BS, TColGeom2d_HArray1OfBSplineCurve tabBS, double Tolerance, ) */
    /* Method skipped due to unknown mapping: void C0BSplineToArrayOfC1BSplineCurve(Geom2d_BSplineCurve BS, TColGeom2d_HArray1OfBSplineCurve tabBS, double AngularTolerance, double Tolerance, ) */
}; // class Geom2dConvert

//---------------------------------------------------------------------
//  Class  Geom2dConvert_PPoint
//---------------------------------------------------------------------
/// <summary>
/// Class representing a point on curve, with 2D coordinate and the tangent
/// </summary>
public ref class Geom2dConvert_PPoint sealed
    : public Macad::Occt::BaseClass<::Geom2dConvert_PPoint>
{

#ifdef Include_Geom2dConvert_PPoint_h
public:
    Include_Geom2dConvert_PPoint_h
#endif

public:
    Geom2dConvert_PPoint(::Geom2dConvert_PPoint* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_PPoint>( nativeInstance, true )
    {}

    Geom2dConvert_PPoint(::Geom2dConvert_PPoint& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_PPoint>( &nativeInstance, false )
    {}

    property ::Geom2dConvert_PPoint* NativeInstance
    {
        ::Geom2dConvert_PPoint* get()
        {
            return static_cast<::Geom2dConvert_PPoint*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    Geom2dConvert_PPoint();
    /// <summary>
    /// Constructor.
    /// </summary>
    Geom2dConvert_PPoint(double theParameter, Macad::Occt::XY thePoint, Macad::Occt::XY theD1);
    /// <summary>
    /// Constructor.
    /// </summary>
    Geom2dConvert_PPoint(double theParameter, Macad::Occt::Adaptor2d_Curve2d^ theAdaptor);
    /// <summary>
    /// Compute the distance between two 2d points.
    /// </summary>
    double Dist(Macad::Occt::Geom2dConvert_PPoint^ theOth);
    /// <summary>
    /// Query the parameter value.
    /// </summary>
    double Parameter();
    /// <summary>
    /// Query the point location.
    /// </summary>
    Macad::Occt::XY Point();
    /// <summary>
    /// Query the first derivatives.
    /// </summary>
    Macad::Occt::XY D1();
    /// <summary>
    /// Change the value of the derivative at the point.
    /// </summary>
    void SetD1(Macad::Occt::XY theD1);
}; // class Geom2dConvert_PPoint

//---------------------------------------------------------------------
//  Class  Geom2dConvert_ApproxArcsSegments
//---------------------------------------------------------------------
/// <summary>
/// Approximation of a free-form curve by a sequence of arcs+segments.
/// </summary>
public ref class Geom2dConvert_ApproxArcsSegments sealed
    : public Macad::Occt::BaseClass<::Geom2dConvert_ApproxArcsSegments>
{

#ifdef Include_Geom2dConvert_ApproxArcsSegments_h
public:
    Include_Geom2dConvert_ApproxArcsSegments_h
#endif

public:
    Geom2dConvert_ApproxArcsSegments(::Geom2dConvert_ApproxArcsSegments* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_ApproxArcsSegments>( nativeInstance, true )
    {}

    Geom2dConvert_ApproxArcsSegments(::Geom2dConvert_ApproxArcsSegments& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_ApproxArcsSegments>( &nativeInstance, false )
    {}

    property ::Geom2dConvert_ApproxArcsSegments* NativeInstance
    {
        ::Geom2dConvert_ApproxArcsSegments* get()
        {
            return static_cast<::Geom2dConvert_ApproxArcsSegments*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  Status
    //---------------------------------------------------------------------
    enum class Status
    {
        StatusOK = 0,
        StatusNotDone = 1,
        StatusError = 2
    }; // enum  class Status

    /// <summary>
    /// Constructor.
    /// </summary>
    Geom2dConvert_ApproxArcsSegments(Macad::Occt::Adaptor2d_Curve2d^ theCurve, double theTolerance, double theAngleTol);
    /* Method skipped due to unknown mapping: TColGeom2d_SequenceOfCurve GetResult() */
}; // class Geom2dConvert_ApproxArcsSegments

//---------------------------------------------------------------------
//  Class  Geom2dConvert_ApproxCurve
//---------------------------------------------------------------------
/// <summary>
/// A framework to convert a 2D curve to a BSpline.
/// This is done by approximation within a given tolerance.
/// </summary>
public ref class Geom2dConvert_ApproxCurve sealed
    : public Macad::Occt::BaseClass<::Geom2dConvert_ApproxCurve>
{

#ifdef Include_Geom2dConvert_ApproxCurve_h
public:
    Include_Geom2dConvert_ApproxCurve_h
#endif

public:
    Geom2dConvert_ApproxCurve(::Geom2dConvert_ApproxCurve* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_ApproxCurve>( nativeInstance, true )
    {}

    Geom2dConvert_ApproxCurve(::Geom2dConvert_ApproxCurve& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_ApproxCurve>( &nativeInstance, false )
    {}

    property ::Geom2dConvert_ApproxCurve* NativeInstance
    {
        ::Geom2dConvert_ApproxCurve* get()
        {
            return static_cast<::Geom2dConvert_ApproxCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructs an approximation framework defined by
    /// -   the 2D conic Curve
    /// -   the tolerance value Tol2d
    /// -   the degree of continuity Order
    /// -   the maximum number of segments allowed MaxSegments
    /// -   the highest degree MaxDegree which the
    /// polynomial defining the BSpline is allowed to have.
    /// </summary>
    Geom2dConvert_ApproxCurve(Macad::Occt::Geom2d_Curve^ Curve, double Tol2d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree);
    /// <summary>
    /// Constructs an approximation framework defined by
    /// -   the 2D conic Curve
    /// -   the tolerance value Tol2d
    /// -   the degree of continuity Order
    /// -   the maximum number of segments allowed MaxSegments
    /// -   the highest degree MaxDegree which the
    /// polynomial defining the BSpline is allowed to have.
    /// </summary>
    Geom2dConvert_ApproxCurve(Macad::Occt::Adaptor2d_Curve2d^ Curve, double Tol2d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree);
    /// <summary>
    /// Returns the 2D BSpline curve resulting from the
    /// approximation algorithm.
    /// </summary>
    Macad::Occt::Geom2d_BSplineCurve^ Curve();
    /// <summary>
    /// returns  Standard_True  if  the  approximation  has
    /// been  done  with  within  required tolerance
    /// </summary>
    bool IsDone();
    /// <summary>
    /// returns  Standard_True if the approximation did come out
    /// with a result that  is not NECESSARELY within the required tolerance
    /// </summary>
    bool HasResult();
    /// <summary>
    /// Returns the greatest distance between a point on the
    /// source conic and the BSpline curve resulting from the
    /// approximation. (>0 when an approximation
    /// has  been  done, 0  if  no  approximation)
    /// </summary>
    double MaxError();
    /// <summary>
    /// Print on the stream  o  information about the object
    /// </summary>
    void Dump(System::IO::TextWriter^ o);
}; // class Geom2dConvert_ApproxCurve

//---------------------------------------------------------------------
//  Class  Geom2dConvert_BSplineCurveKnotSplitting
//---------------------------------------------------------------------
/// <summary>
/// An algorithm to determine points at which a BSpline
/// curve should be split in order to obtain arcs of the same continuity.
/// If you require curves with a minimum continuity for
/// your computation, it is useful to know the points
/// between which an arc has a continuity of a given
/// order. The continuity order is given at the construction time.
/// For a BSpline curve, the discontinuities are
/// localized at the knot values. Between two knot values
/// the BSpline is infinitely and continuously
/// differentiable. At a given knot, the continuity is equal
/// to: Degree - Mult, where Degree is the
/// degree of the BSpline curve and Mult is the multiplicity of the knot.
/// It is possible to compute the arcs which correspond to
/// this splitting using the global function
/// SplitBSplineCurve provided by the package Geom2dConvert.
/// A BSplineCurveKnotSplitting object provides a framework for:
/// -   defining the curve to be analysed and the required degree of continuity,
/// -   implementing the computation algorithm, and
/// -   consulting the results.
/// </summary>
public ref class Geom2dConvert_BSplineCurveKnotSplitting sealed
    : public Macad::Occt::BaseClass<::Geom2dConvert_BSplineCurveKnotSplitting>
{

#ifdef Include_Geom2dConvert_BSplineCurveKnotSplitting_h
public:
    Include_Geom2dConvert_BSplineCurveKnotSplitting_h
#endif

public:
    Geom2dConvert_BSplineCurveKnotSplitting(::Geom2dConvert_BSplineCurveKnotSplitting* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_BSplineCurveKnotSplitting>( nativeInstance, true )
    {}

    Geom2dConvert_BSplineCurveKnotSplitting(::Geom2dConvert_BSplineCurveKnotSplitting& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_BSplineCurveKnotSplitting>( &nativeInstance, false )
    {}

    property ::Geom2dConvert_BSplineCurveKnotSplitting* NativeInstance
    {
        ::Geom2dConvert_BSplineCurveKnotSplitting* get()
        {
            return static_cast<::Geom2dConvert_BSplineCurveKnotSplitting*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Determines points at which the BSpline curve
    /// BasisCurve should be split in order to obtain arcs
    /// with a degree of continuity equal to ContinuityRange.
    /// These points are knot values of BasisCurve. They
    /// are identified by indices in the knots table of BasisCurve.
    /// Use the available interrogation functions to access
    /// computed values, followed by the global function
    /// SplitBSplineCurve (provided by the package
    /// Geom2dConvert) to split the curve.
    /// Exceptions
    /// Standard_RangeError if ContinuityRange is less than zero.
    /// </summary>
    Geom2dConvert_BSplineCurveKnotSplitting(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve, int ContinuityRange);
    /// <summary>
    /// Returns the number of points at which the analysed
    /// BSpline curve should be split, in order to obtain arcs
    /// with the continuity required by this framework.
    /// All these points correspond to knot values. Note that
    /// the first and last points of the curve, which bound the
    /// first and last arcs, are counted among these splitting points.
    /// </summary>
    int NbSplits();
    /// <summary>
    /// Loads the SplitValues table with the split knots
    /// values computed in this framework. Each value in the
    /// table is an index in the knots table of the BSpline
    /// curve analysed by this algorithm.
    /// The values in SplitValues are given in ascending
    /// order and comprise the indices of the knots which
    /// give the first and last points of the curve. Use two
    /// consecutive values from the table as arguments of the
    /// global function SplitBSplineCurve (provided by the
    /// package Geom2dConvert) to split the curve.
    /// Exceptions
    /// Standard_DimensionError if the array SplitValues
    /// was not created with the following bounds:
    /// -   1, and
    /// -   the number of split points computed in this
    /// framework (as given by the function NbSplits).
    /// </summary>
    void Splitting(Macad::Occt::TColStd_Array1OfInteger^ SplitValues);
    /// <summary>
    /// Returns the split knot of index Index to the split knots
    /// table computed in this framework. The returned value
    /// is an index in the knots table of the BSpline curve
    /// analysed by this algorithm.
    /// Notes:
    /// -   If Index is equal to 1, the corresponding knot
    /// gives the first point of the curve.
    /// -   If Index is equal to the number of split knots
    /// computed in this framework, the corresponding
    /// point is the last point of the curve.
    /// Exceptions
    /// Standard_RangeError if Index is less than 1 or
    /// greater than the number of split knots computed in this framework.
    /// </summary>
    int SplitValue(int Index);
}; // class Geom2dConvert_BSplineCurveKnotSplitting

//---------------------------------------------------------------------
//  Class  Geom2dConvert_BSplineCurveToBezierCurve
//---------------------------------------------------------------------
/// <summary>
/// An algorithm to convert a BSpline curve into a series
/// of adjacent Bezier curves.
/// A BSplineCurveToBezierCurve object provides a framework for:
/// -   defining the BSpline curve to be converted
/// -   implementing the construction algorithm, and
/// -   consulting the results.
/// References :
/// Generating the Bezier points of B-spline curves and surfaces
/// (Wolfgang Bohm) CAD volume 13 number 6 november 1981
/// </summary>
public ref class Geom2dConvert_BSplineCurveToBezierCurve sealed
    : public Macad::Occt::BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>
{

#ifdef Include_Geom2dConvert_BSplineCurveToBezierCurve_h
public:
    Include_Geom2dConvert_BSplineCurveToBezierCurve_h
#endif

public:
    Geom2dConvert_BSplineCurveToBezierCurve(::Geom2dConvert_BSplineCurveToBezierCurve* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>( nativeInstance, true )
    {}

    Geom2dConvert_BSplineCurveToBezierCurve(::Geom2dConvert_BSplineCurveToBezierCurve& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>( &nativeInstance, false )
    {}

    property ::Geom2dConvert_BSplineCurveToBezierCurve* NativeInstance
    {
        ::Geom2dConvert_BSplineCurveToBezierCurve* get()
        {
            return static_cast<::Geom2dConvert_BSplineCurveToBezierCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Computes all the data needed to convert
    /// -   the BSpline curve BasisCurve, into a series of adjacent Bezier arcs.
    /// The result consists of a series of BasisCurve arcs
    /// limited by points corresponding to knot values of the curve.
    /// Use the available interrogation functions to ascertain
    /// the number of computed Bezier arcs, and then to
    /// construct each individual Bezier curve (or all Bezier curves).
    /// Note: ParametricTolerance is not used.
    /// </summary>
    Geom2dConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve);
    /// <summary>
    /// Computes all the data needed to convert
    /// the portion of the BSpline curve BasisCurve
    /// limited by the two parameter values U1 and U2
    /// for Example if there is a Knot Uk and
    /// Uk < U < Uk + ParametricTolerance/2 the last curve
    /// corresponds to the span [Uk-1, Uk] and not to  [Uk, Uk+1]
    /// The result consists of a series of BasisCurve arcs
    /// limited by points corresponding to knot values of the curve.
    /// Use the available interrogation functions to ascertain
    /// the number of computed Bezier arcs, and then to
    /// construct each individual Bezier curve (or all Bezier curves).
    /// Note: ParametricTolerance is not used.
    /// Raises DomainError if U1 or U2 are out of the parametric bounds of the basis
    /// curve [FirstParameter, LastParameter]. The Tolerance criterion
    /// is ParametricTolerance.
    /// Raised if Abs (U2 - U1) <= ParametricTolerance.
    /// </summary>
    Geom2dConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve, double U1, double U2, double ParametricTolerance);
    /// <summary>
    /// Constructs and returns the Bezier curve of index
    /// Index to the table of adjacent Bezier arcs
    /// computed by this algorithm.
    /// This Bezier curve has the same orientation as the
    /// BSpline curve analyzed in this framework.
    /// Exceptions
    /// Standard_OutOfRange if Index is less than 1 or
    /// greater than the number of adjacent Bezier arcs
    /// computed by this algorithm.
    /// </summary>
    Macad::Occt::Geom2d_BezierCurve^ Arc(int Index);
    /* Method skipped due to unknown mapping: void Arcs(TColGeom2d_Array1OfBezierCurve Curves, ) */
    /// <summary>
    /// This methode returns the bspline's knots associated to
    /// the converted arcs
    /// Raises DimensionError if the length  of Curves is not equal to
    /// NbArcs +  1
    /// </summary>
    void Knots(Macad::Occt::TColStd_Array1OfReal^ TKnots);
    /// <summary>
    /// Returns the number of BezierCurve arcs.
    /// If at the creation time you have decomposed the basis curve
    /// between the parametric values UFirst, ULast the number of
    /// BezierCurve arcs depends on the number of knots included inside
    /// the interval [UFirst, ULast].
    /// If you have decomposed the whole basis B-spline curve the number
    /// of BezierCurve arcs NbArcs is equal to the number of knots less
    /// one.
    /// </summary>
    int NbArcs();
}; // class Geom2dConvert_BSplineCurveToBezierCurve

//---------------------------------------------------------------------
//  Class  Geom2dConvert_CompCurveToBSplineCurve
//---------------------------------------------------------------------
/// <summary>
/// This algorithm converts and concat several curve in an BSplineCurve
/// </summary>
public ref class Geom2dConvert_CompCurveToBSplineCurve sealed
    : public Macad::Occt::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>
{

#ifdef Include_Geom2dConvert_CompCurveToBSplineCurve_h
public:
    Include_Geom2dConvert_CompCurveToBSplineCurve_h
#endif

public:
    Geom2dConvert_CompCurveToBSplineCurve(::Geom2dConvert_CompCurveToBSplineCurve* nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>( nativeInstance, true )
    {}

    Geom2dConvert_CompCurveToBSplineCurve(::Geom2dConvert_CompCurveToBSplineCurve& nativeInstance)
        : Macad::Occt::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>( &nativeInstance, false )
    {}

    property ::Geom2dConvert_CompCurveToBSplineCurve* NativeInstance
    {
        ::Geom2dConvert_CompCurveToBSplineCurve* get()
        {
            return static_cast<::Geom2dConvert_CompCurveToBSplineCurve*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Initialize the algorithme
    /// - Parameterisation is used to convert
    /// </summary>
    Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Convert_ParameterisationType Parameterisation);
    /// <summary>
    /// Initialize the algorithme
    /// - Parameterisation is used to convert
    /// </summary>
    Geom2dConvert_CompCurveToBSplineCurve();
    /// <summary>
    /// Initialize the algorithme with one curve
    /// - Parameterisation is used to convert
    /// </summary>
    Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Geom2d_BoundedCurve^ BasisCurve, Macad::Occt::Convert_ParameterisationType Parameterisation);
    /// <summary>
    /// Initialize the algorithme with one curve
    /// - Parameterisation is used to convert
    /// </summary>
    Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Geom2d_BoundedCurve^ BasisCurve);
    /// <summary>
    /// Append a curve in the BSpline
    /// Return False if the curve is not G0 with the BSplineCurve.
    /// Tolerance is used to check continuity and decrease
    /// Multiplicity at the common Knot
    /// After is useful if BasisCurve is a closed curve .
    /// </summary>
    bool Add(Macad::Occt::Geom2d_BoundedCurve^ NewCurve, double Tolerance, bool After);
    /// <summary>
    /// Append a curve in the BSpline
    /// Return False if the curve is not G0 with the BSplineCurve.
    /// Tolerance is used to check continuity and decrease
    /// Multiplicity at the common Knot
    /// After is useful if BasisCurve is a closed curve .
    /// </summary>
    bool Add(Macad::Occt::Geom2d_BoundedCurve^ NewCurve, double Tolerance);
    Macad::Occt::Geom2d_BSplineCurve^ BSplineCurve();
    /// <summary>
    /// Clear result curve
    /// </summary>
    void Clear();
}; // class Geom2dConvert_CompCurveToBSplineCurve

}; // namespace Occt
}; // namespace Macad
