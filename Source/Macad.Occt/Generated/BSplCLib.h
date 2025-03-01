// Generated wrapper code for package BSplCLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BSplCLib_KnotDistribution
//---------------------------------------------------------------------
/// <summary>
/// This enumeration describes the repartition of the
/// knots  sequence.   If all the knots  differ  by the
/// same positive constant from the  preceding knot the
/// "KnotDistribution" is    <Uniform>    else   it  is
/// <NonUniform>
/// </summary>
public enum class BSplCLib_KnotDistribution
{
    NonUniform = 0,
    Uniform = 1
}; // enum  class BSplCLib_KnotDistribution

//---------------------------------------------------------------------
//  Enum  BSplCLib_MultDistribution
//---------------------------------------------------------------------
/// <summary>
/// This   enumeration describes the   form  of  the
/// sequence of mutiplicities.  MultDistribution is :
/// 
/// Constant if all the multiplicities have the same
/// value.
/// 
/// QuasiConstant if all the internal knots have the
/// same multiplicity and if the first and last knot
/// have  a different  multiplicity.
/// 
/// NonConstant in other cases.
/// </summary>
public enum class BSplCLib_MultDistribution
{
    NonConstant = 0,
    Constant = 1,
    QuasiConstant = 2
}; // enum  class BSplCLib_MultDistribution

//---------------------------------------------------------------------
//  Class  BSplCLib_CacheParams
//---------------------------------------------------------------------
/// <summary>
/// Simple structure containing parameters describing parameterization
/// of a B-spline curve or a surface in one direction (U or V),
/// and data of the current span for its caching
/// </summary>
public ref class BSplCLib_CacheParams sealed
    : public Macad::Occt::BaseClass<::BSplCLib_CacheParams>
{

#ifdef Include_BSplCLib_CacheParams_h
public:
    Include_BSplCLib_CacheParams_h
#endif

public:
    BSplCLib_CacheParams(::BSplCLib_CacheParams* nativeInstance)
        : Macad::Occt::BaseClass<::BSplCLib_CacheParams>( nativeInstance, true )
    {}

    BSplCLib_CacheParams(::BSplCLib_CacheParams& nativeInstance)
        : Macad::Occt::BaseClass<::BSplCLib_CacheParams>( &nativeInstance, false )
    {}

    property ::BSplCLib_CacheParams* NativeInstance
    {
        ::BSplCLib_CacheParams* get()
        {
            return static_cast<::BSplCLib_CacheParams*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// < parameter for the frst point of the span
    /// </summary>
    property double SpanStart {
        double get() {
            return ((::BSplCLib_CacheParams*)_NativeInstance)->SpanStart;
        }
        void set(double value) {
            ((::BSplCLib_CacheParams*)_NativeInstance)->SpanStart = value;
        }
    }

    /// <summary>
    /// < length of the span
    /// </summary>
    property double SpanLength {
        double get() {
            return ((::BSplCLib_CacheParams*)_NativeInstance)->SpanLength;
        }
        void set(double value) {
            ((::BSplCLib_CacheParams*)_NativeInstance)->SpanLength = value;
        }
    }

    /// <summary>
    /// < index of the span
    /// </summary>
    property int SpanIndex {
        int get() {
            return ((::BSplCLib_CacheParams*)_NativeInstance)->SpanIndex;
        }
        void set(int value) {
            ((::BSplCLib_CacheParams*)_NativeInstance)->SpanIndex = value;
        }
    }

    /// <summary>
    /// Constructor, prepares data structures for caching.
    /// \param theDegree     degree of the B-spline (or Bezier)
    /// \param thePeriodic   identify whether the B-spline is periodic
    /// \param theFlatKnots  knots of Bezier / B-spline parameterization
    /// </summary>
    BSplCLib_CacheParams(int theDegree, bool thePeriodic, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots);
    /// <summary>
    /// Normalizes the parameter for periodic B-splines
    /// \param theParameter the value to be normalized into the knots array
    /// </summary>
    double PeriodicNormalization(double theParameter);
    /// <summary>
    /// Verifies validity of the cache using flat parameter of the point
    /// \param theParameter parameter of the point placed in the span
    /// </summary>
    bool IsCacheValid(double theParameter);
    /// <summary>
    /// Computes span for the specified parameter
    /// \param theParameter parameter of the point placed in the span
    /// \param theFlatKnots  knots of Bezier / B-spline parameterization
    /// </summary>
    void LocateParameter(double% theParameter, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots);
}; // class BSplCLib_CacheParams

//---------------------------------------------------------------------
//  Class  BSplCLib_EvaluatorFunction
//---------------------------------------------------------------------
public ref class BSplCLib_EvaluatorFunction
    : public Macad::Occt::BaseClass<::BSplCLib_EvaluatorFunction>
{

#ifdef Include_BSplCLib_EvaluatorFunction_h
public:
    Include_BSplCLib_EvaluatorFunction_h
#endif

public:
    BSplCLib_EvaluatorFunction(::BSplCLib_EvaluatorFunction* nativeInstance)
        : Macad::Occt::BaseClass<::BSplCLib_EvaluatorFunction>( nativeInstance, true )
    {}

    BSplCLib_EvaluatorFunction(::BSplCLib_EvaluatorFunction& nativeInstance)
        : Macad::Occt::BaseClass<::BSplCLib_EvaluatorFunction>( &nativeInstance, false )
    {}

    property ::BSplCLib_EvaluatorFunction* NativeInstance
    {
        ::BSplCLib_EvaluatorFunction* get()
        {
            return static_cast<::BSplCLib_EvaluatorFunction*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    BSplCLib_EvaluatorFunction();
    /// <summary>
    /// Function evaluation method to be defined by descendant
    /// </summary>
    void Evaluate(int theDerivativeRequest, double theStartEnd, double theParameter, double% theResult, int% theErrorCode);
}; // class BSplCLib_EvaluatorFunction

//---------------------------------------------------------------------
//  Class  BSplCLib
//---------------------------------------------------------------------
/// <summary>
/// BSplCLib   B-spline curve Library.
/// 
/// The BSplCLib package is  a basic library  for BSplines. It
/// provides three categories of functions.
/// 
/// * Management methods to  process knots and multiplicities.
/// 
/// * Multi-Dimensions  spline methods.  BSpline methods where
/// poles have an arbitrary number of dimensions. They divides
/// in two groups :
/// 
/// - Global methods modifying the  whole set of  poles. The
/// poles are    described   by an array   of   Reals and  a
/// Dimension. Example : Inserting knots.
/// 
/// - Local methods  computing  points and derivatives.  The
/// poles  are described by a pointer  on  a local array  of
/// Reals and a Dimension. The local array is modified.
/// 
/// *  2D  and 3D spline   curves  methods.
/// 
/// Methods  for 2d and 3d BSplines  curves  rational or not
/// rational.
/// 
/// Those methods have the following structure :
/// 
/// - They extract the pole information in a working array.
/// 
/// -  They      process the  working   array    with   the
/// multi-dimension  methods. (for example  a  3d  rational
/// curve is processed as a 4 dimension curve).
/// 
/// - They get back the result in the original dimension.
/// 
/// Note that the  bspline   surface methods found   in the
/// package BSplSLib  uses  the same  structure and rely on
/// BSplCLib.
/// 
/// In the following list  of methods the  2d and 3d  curve
/// methods   will be  described   with  the  corresponding
/// multi-dimension method.
/// 
/// The 3d or 2d B-spline curve is defined with :
/// 
/// . its control points : TColgp_Array1OfPnt(2d)        Poles
/// . its weights        : TColStd_Array1OfReal          Weights
/// . its knots          : TColStd_Array1OfReal          Knots
/// . its multiplicities : TColStd_Array1OfInteger       Mults
/// . its degree         : Standard_Integer              Degree
/// . its periodicity    : Standard_Boolean              Periodic
/// 
/// Warnings :
/// The bounds of Poles and Weights should be the same.
/// The bounds of Knots and Mults   should be the same.
/// 
/// Note: weight and multiplicity arrays can be passed by pointer for
/// some functions so that NULL pointer is valid.
/// That means no weights/no multiplicities passed.
/// 
/// No weights (BSplCLib::NoWeights()) means the curve is non rational.
/// No mults (BSplCLib::NoMults()) means the knots are "flat" knots.
/// 
/// KeyWords :
/// B-spline curve, Functions, Library
/// 
/// References :
/// . A survey of curves and surfaces methods in CADG Wolfgang
/// BOHM CAGD 1 (1984)
/// . On de Boor-like algorithms and blossoming Wolfgang BOEHM
/// cagd 5 (1988)
/// . Blossoming and knot insertion algorithms for B-spline curves
/// Ronald N. GOLDMAN
/// . Modelisation des surfaces en CAO, Henri GIAUME Peugeot SA
/// . Curves and Surfaces for Computer Aided Geometric Design,
/// a practical guide Gerald Farin
/// </summary>
public ref class BSplCLib sealed
    : public Macad::Occt::BaseClass<::BSplCLib>
{

#ifdef Include_BSplCLib_h
public:
    Include_BSplCLib_h
#endif

public:
    BSplCLib(::BSplCLib* nativeInstance)
        : Macad::Occt::BaseClass<::BSplCLib>( nativeInstance, true )
    {}

    BSplCLib(::BSplCLib& nativeInstance)
        : Macad::Occt::BaseClass<::BSplCLib>( &nativeInstance, false )
    {}

    property ::BSplCLib* NativeInstance
    {
        ::BSplCLib* get()
        {
            return static_cast<::BSplCLib*>(_NativeInstance);
        }
    }

public:
    BSplCLib();
    /// <summary>
    /// This routine searches the position of the real value theX
    /// in the monotonically increasing set of real values theArray using bisection algorithm.
    /// 
    /// If the given value is out of range or array values, algorithm returns either
    /// theArray.Lower()-1 or theArray.Upper()+1 depending on theX position in the ordered set.
    /// 
    /// This routine is used to locate a knot value in a set of knots.
    /// </summary>
    static void Hunt(Macad::Occt::TColStd_Array1OfReal^ theArray, double theX, int% theXPos);
    /// <summary>
    /// Computes the index of the knots value which gives
    /// the start point of the curve.
    /// </summary>
    static int FirstUKnotIndex(int Degree, Macad::Occt::TColStd_Array1OfInteger^ Mults);
    /// <summary>
    /// Computes the index of the knots value which gives
    /// the end point of the curve.
    /// </summary>
    static int LastUKnotIndex(int Degree, Macad::Occt::TColStd_Array1OfInteger^ Mults);
    /// <summary>
    /// Computes the index  of  the  flats knots  sequence
    /// corresponding  to  <Index> in  the  knots sequence
    /// which multiplicities are <Mults>.
    /// </summary>
    static int FlatIndex(int Degree, int Index, Macad::Occt::TColStd_Array1OfInteger^ Mults, bool Periodic);
    /// <summary>
    /// Locates  the parametric value    U  in the knots
    /// sequence  between  the  knot K1   and the knot  K2.
    /// The value return in Index verifies.
    /// 
    /// Knots(Index) <= U < Knots(Index + 1)
    /// if U <= Knots (K1) then Index = K1
    /// if U >= Knots (K2) then Index = K2 - 1
    /// 
    /// If Periodic is True U  may be  modified  to fit in
    /// the range  Knots(K1), Knots(K2).  In any case  the
    /// correct value is returned in NewU.
    /// 
    /// Warnings :Index is used  as input   data to initialize  the
    /// searching  function.
    /// Warning: Knots have to be "with repetitions"
    /// </summary>
    static void LocateParameter(int Degree, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double U, bool IsPeriodic, int FromK1, int ToK2, int% KnotIndex, double% NewU);
    /// <summary>
    /// Locates  the parametric value    U  in the knots
    /// sequence  between  the  knot K1   and the knot  K2.
    /// The value return in Index verifies.
    /// 
    /// Knots(Index) <= U < Knots(Index + 1)
    /// if U <= Knots (K1) then Index = K1
    /// if U >= Knots (K2) then Index = K2 - 1
    /// 
    /// If Periodic is True U  may be  modified  to fit in
    /// the range  Knots(K1), Knots(K2).  In any case  the
    /// correct value is returned in NewU.
    /// 
    /// Warnings :Index is used  as input   data to initialize  the
    /// searching  function.
    /// Warning: Knots have to be "flat"
    /// </summary>
    static void LocateParameter(int Degree, Macad::Occt::TColStd_Array1OfReal^ Knots, double U, bool IsPeriodic, int FromK1, int ToK2, int% KnotIndex, double% NewU);
    static void LocateParameter(int Degree, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double U, bool Periodic, int% Index, double% NewU);
    /// <summary>
    /// Finds the greatest multiplicity in a set of knots
    /// between  K1  and K2.   Mults  is  the  multiplicity
    /// associated with each knot value.
    /// </summary>
    static int MaxKnotMult(Macad::Occt::TColStd_Array1OfInteger^ Mults, int K1, int K2);
    /// <summary>
    /// Finds the lowest multiplicity in  a  set of knots
    /// between   K1  and K2.   Mults is  the  multiplicity
    /// associated with each knot value.
    /// </summary>
    static int MinKnotMult(Macad::Occt::TColStd_Array1OfInteger^ Mults, int K1, int K2);
    /// <summary>
    /// Returns the number of poles of the curve. Returns 0 if
    /// one of the multiplicities is incorrect.
    /// 
    /// * Non positive.
    /// 
    /// * Greater than Degree,  or  Degree+1  at the first and
    /// last knot of a non periodic curve.
    /// 
    /// *  The  last periodicity  on  a periodic  curve is not
    /// equal to the first.
    /// </summary>
    static int NbPoles(int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfInteger^ Mults);
    /// <summary>
    /// Returns the length  of the sequence  of knots with
    /// repetition.
    /// 
    /// Periodic :
    /// 
    /// Sum(Mults(i), i = Mults.Lower(); i <= Mults.Upper());
    /// 
    /// Non Periodic :
    /// 
    /// Sum(Mults(i); i = Mults.Lower(); i < Mults.Upper())
    /// + 2 * Degree
    /// </summary>
    static int KnotSequenceLength(Macad::Occt::TColStd_Array1OfInteger^ Mults, int Degree, bool Periodic);
    static void KnotSequence(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ KnotSeq, bool Periodic);
    static void KnotSequence(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ KnotSeq);
    /// <summary>
    /// Computes  the  sequence   of knots KnotSeq  with
    /// repetition  of the  knots  of multiplicity  greater
    /// than 1.
    /// 
    /// Length of KnotSeq must be KnotSequenceLength(Mults,Degree,Periodic)
    /// </summary>
    static void KnotSequence(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ KnotSeq);
    /// <summary>
    /// Returns the  length  of the   sequence of  knots  (and
    /// Mults)  without repetition.
    /// </summary>
    static int KnotsLength(Macad::Occt::TColStd_Array1OfReal^ KnotSeq, bool Periodic);
    /// <summary>
    /// Returns the  length  of the   sequence of  knots  (and
    /// Mults)  without repetition.
    /// </summary>
    static int KnotsLength(Macad::Occt::TColStd_Array1OfReal^ KnotSeq);
    /// <summary>
    /// Computes  the  sequence   of knots Knots  without
    /// repetition  of the  knots  of multiplicity  greater
    /// than 1.
    /// 
    /// Length  of <Knots> and  <Mults> must be
    /// KnotsLength(KnotSequence,Periodic)
    /// </summary>
    static void Knots(Macad::Occt::TColStd_Array1OfReal^ KnotSeq, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, bool Periodic);
    /// <summary>
    /// Computes  the  sequence   of knots Knots  without
    /// repetition  of the  knots  of multiplicity  greater
    /// than 1.
    /// 
    /// Length  of <Knots> and  <Mults> must be
    /// KnotsLength(KnotSequence,Periodic)
    /// </summary>
    static void Knots(Macad::Occt::TColStd_Array1OfReal^ KnotSeq, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults);
    /// <summary>
    /// Analyses if the  knots distribution is "Uniform"
    /// or  "NonUniform" between  the  knot  FromK1 and the
    /// knot ToK2.  There is  no repetition of  knot in the
    /// knots'sequence <Knots>.
    /// </summary>
    static Macad::Occt::BSplCLib_KnotDistribution KnotForm(Macad::Occt::TColStd_Array1OfReal^ Knots, int FromK1, int ToK2);
    /// <summary>
    /// Analyses the distribution of multiplicities between
    /// the knot FromK1 and the Knot ToK2.
    /// </summary>
    static Macad::Occt::BSplCLib_MultDistribution MultForm(Macad::Occt::TColStd_Array1OfInteger^ Mults, int FromK1, int ToK2);
    /// <summary>
    /// Analyzes the array of knots.
    /// Returns the form and the maximum knot multiplicity.
    /// </summary>
    static void KnotAnalysis(int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ CKnots, Macad::Occt::TColStd_Array1OfInteger^ CMults, Macad::Occt::GeomAbs_BSplKnotDistribution% KnotForm, int% MaxKnotMult);
    /// <summary>
    /// Reparametrizes a B-spline curve to [U1, U2].
    /// The knot values are recomputed such that Knots (Lower) = U1
    /// and Knots (Upper) = U2   but the knot form is not modified.
    /// Warnings :
    /// In the array Knots the values must be in ascending order.
    /// U1 must not be equal to U2 to avoid division by zero.
    /// </summary>
    static void Reparametrize(double U1, double U2, Macad::Occt::TColStd_Array1OfReal^ Knots);
    /// <summary>
    /// Reverses  the  array   knots  to  become  the knots
    /// sequence of the reversed curve.
    /// </summary>
    static void Reverse(Macad::Occt::TColStd_Array1OfReal^ Knots);
    /// <summary>
    /// Reverses  the  array of multiplicities.
    /// </summary>
    static void Reverse(Macad::Occt::TColStd_Array1OfInteger^ Mults);
    /// <summary>
    /// Reverses the array of poles. Last is the  index of
    /// the new first pole. On  a  non periodic curve last
    /// is Poles.Upper(). On a periodic curve last is
    /// 
    /// (number of flat knots - degree - 1)
    /// 
    /// or
    /// 
    /// (sum of multiplicities(but  for the last) + degree
    /// - 1)
    /// </summary>
    static void Reverse(Macad::Occt::TColgp_Array1OfPnt^ Poles, int Last);
    /// <summary>
    /// Reverses the array of poles.
    /// </summary>
    static void Reverse(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, int Last);
    /// <summary>
    /// Reverses the array of poles.
    /// </summary>
    static void Reverse(Macad::Occt::TColStd_Array1OfReal^ Weights, int Last);
    /// <summary>
    /// Returns False if all the weights  of the  array <Weights>
    /// between   I1 an I2   are  identic.   Epsilon  is used for
    /// comparing  weights. If Epsilon  is 0. the  Epsilon of the
    /// first weight is used.
    /// </summary>
    static bool IsRational(Macad::Occt::TColStd_Array1OfReal^ Weights, int I1, int I2, double Epsilon);
    /// <summary>
    /// Returns False if all the weights  of the  array <Weights>
    /// between   I1 an I2   are  identic.   Epsilon  is used for
    /// comparing  weights. If Epsilon  is 0. the  Epsilon of the
    /// first weight is used.
    /// </summary>
    static bool IsRational(Macad::Occt::TColStd_Array1OfReal^ Weights, int I1, int I2);
    /// <summary>
    /// returns the degree maxima for a BSplineCurve.
    /// </summary>
    static int MaxDegree();
    /// <summary>
    /// Perform the Boor  algorithm  to  evaluate a point at
    /// parameter <U>, with <Degree> and <Dimension>.
    /// 
    /// Poles is  an array of  Reals of size
    /// 
    /// <Dimension> *  <Degree>+1
    /// 
    /// Containing  the poles.  At  the end <Poles> contains
    /// the current point.
    /// </summary>
    static void Eval(double U, int Degree, double% Knots, int Dimension, double% Poles);
    /// <summary>
    /// Performs the  Boor Algorithm  at  parameter <U> with
    /// the given <Degree> and the  array of <Knots> on  the
    /// poles <Poles> of dimension  <Dimension>.  The schema
    /// is  computed  until  level  <Depth>  on a   basis of
    /// <Length+1> poles.
    /// 
    /// * Knots is an array of reals of length :
    /// 
    /// <Length> + <Degree>
    /// 
    /// * Poles is an array of reals of length :
    /// 
    /// (2 * <Length> + 1) * <Dimension>
    /// 
    /// The poles values  must be  set  in the array at the
    /// positions.
    /// 
    /// 0..Dimension,
    /// 
    /// 2 * Dimension ..
    /// 3 * Dimension
    /// 
    /// 4  * Dimension ..
    /// 5  * Dimension
    /// 
    /// ...
    /// 
    /// The results are found in the array poles depending
    /// on the Depth. (See the method GetPole).
    /// </summary>
    static void BoorScheme(double U, int Degree, double% Knots, int Dimension, double% Poles, int Depth, int Length);
    /// <summary>
    /// Compute  the content of  Pole before the BoorScheme.
    /// This method is used to remove poles.
    /// 
    /// U is the poles to  remove, Knots should contains the
    /// knots of the curve after knot removal.
    /// 
    /// The first  and last poles  do not  change, the other
    /// poles are computed by averaging two possible values.
    /// The distance between  the  two   possible  poles  is
    /// computed, if it  is higher than <Tolerance> False is
    /// returned.
    /// </summary>
    static bool AntiBoorScheme(double U, int Degree, double% Knots, int Dimension, double% Poles, int Depth, int Length, double Tolerance);
    /// <summary>
    /// Computes   the   poles of  the    BSpline  giving the
    /// derivatives of order <Order>.
    /// 
    /// The formula for the first order is
    /// 
    /// Pole(i) = Degree * (Pole(i+1) - Pole(i)) /
    /// (Knots(i+Degree+1) - Knots(i+1))
    /// 
    /// This formula  is repeated  (Degree  is decremented at
    /// each step).
    /// </summary>
    static void Derivative(int Degree, double% Knots, int Dimension, int Length, int Order, double% Poles);
    /// <summary>
    /// Performs the Bohm  Algorithm at  parameter <U>. This
    /// algorithm computes the value and all the derivatives
    /// up to order N (N <= Degree).
    /// 
    /// <Poles> is the original array of poles.
    /// 
    /// The   result in  <Poles>  is    the value and    the
    /// derivatives.  Poles[0] is  the value,  Poles[Degree]
    /// is the last  derivative.
    /// </summary>
    static void Bohm(double U, int Degree, int N, double% Knots, int Dimension, double% Poles);
    /// <summary>
    /// Used as argument for a non rational curve.
    /// </summary>
    static Macad::Occt::TColStd_Array1OfReal^ NoWeights();
    /// <summary>
    /// Used as argument for a flatknots evaluation.
    /// </summary>
    static Macad::Occt::TColStd_Array1OfInteger^ NoMults();
    /// <summary>
    /// Stores in LK the useful knots for the BoorSchem
    /// on the span Knots(Index) - Knots(Index+1)
    /// </summary>
    static void BuildKnots(int Degree, int Index, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double% LK);
    /// <summary>
    /// Return the index of the  first Pole to  use on the
    /// span  Mults(Index)  - Mults(Index+1).  This  index
    /// must be added to Poles.Lower().
    /// </summary>
    static int PoleIndex(int Degree, int Index, bool Periodic, Macad::Occt::TColStd_Array1OfInteger^ Mults);
    static void BuildEval(int Degree, int Index, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, double% LP);
    static void BuildEval(int Degree, int Index, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, double% LP);
    /// <summary>
    /// Copy in <LP>  the poles and  weights for  the Eval
    /// scheme. starting from  Poles(Poles.Lower()+Index)
    /// </summary>
    static void BuildEval(int Degree, int Index, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, double% LP);
    /// <summary>
    /// Copy in <LP>  poles for <Dimension>  Boor  scheme.
    /// Starting  from    <Index>     *  <Dimension>, copy
    /// <Length+1> poles.
    /// </summary>
    static void BuildBoor(int Index, int Length, int Dimension, Macad::Occt::TColStd_Array1OfReal^ Poles, double% LP);
    /// <summary>
    /// Returns the index in  the Boor result array of the
    /// poles <Index>. If  the Boor  algorithm was perform
    /// with <Length> and <Depth>.
    /// </summary>
    static int BoorIndex(int Index, int Length, int Depth);
    /// <summary>
    /// Copy  the  pole at  position  <Index>  in  the Boor
    /// scheme of   dimension <Dimension> to  <Position> in
    /// the array <Pole>. <Position> is updated.
    /// </summary>
    static void GetPole(int Index, int Length, int Depth, int Dimension, double% LocPoles, int% Position, Macad::Occt::TColStd_Array1OfReal^ Pole);
    /// <summary>
    /// Returns in <NbPoles, NbKnots> the  new number of poles
    /// and  knots    if  the  sequence   of  knots <AddKnots,
    /// AddMults> is inserted in the sequence <Knots, Mults>.
    /// 
    /// Epsilon is used to compare knots for equality.
    /// 
    /// If Add is True  the multiplicities on  equal knots are
    /// added.
    /// 
    /// If Add is False the max value of the multiplicities is
    /// kept.
    /// 
    /// Return False if :
    /// The knew knots are knot increasing.
    /// The new knots are not in the range.
    /// </summary>
    static bool PrepareInsertKnots(int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, int% NbPoles, int% NbKnots, double Epsilon, bool Add);
    /// <summary>
    /// Returns in <NbPoles, NbKnots> the  new number of poles
    /// and  knots    if  the  sequence   of  knots <AddKnots,
    /// AddMults> is inserted in the sequence <Knots, Mults>.
    /// 
    /// Epsilon is used to compare knots for equality.
    /// 
    /// If Add is True  the multiplicities on  equal knots are
    /// added.
    /// 
    /// If Add is False the max value of the multiplicities is
    /// kept.
    /// 
    /// Return False if :
    /// The knew knots are knot increasing.
    /// The new knots are not in the range.
    /// </summary>
    static bool PrepareInsertKnots(int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, int% NbPoles, int% NbKnots, double Epsilon);
    static void InsertKnots(int Degree, bool Periodic, int Dimension, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColStd_Array1OfReal^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon, bool Add);
    static void InsertKnots(int Degree, bool Periodic, int Dimension, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColStd_Array1OfReal^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon);
    static void InsertKnots(int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon, bool Add);
    static void InsertKnots(int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon);
    /// <summary>
    /// Insert   a  sequence  of  knots <AddKnots> with
    /// multiplicities   <AddMults>. <AddKnots>   must  be a   non
    /// decreasing sequence and verifies :
    /// 
    /// Knots(Knots.Lower()) <= AddKnots(AddKnots.Lower())
    /// Knots(Knots.Upper()) >= AddKnots(AddKnots.Upper())
    /// 
    /// The NewPoles and NewWeights arrays must have a length :
    /// Poles.Length() + Sum(AddMults())
    /// 
    /// When a knot  to insert is identic  to an existing knot the
    /// multiplicities   are added.
    /// 
    /// Epsilon is used to test knots for equality.
    /// 
    /// When AddMult is negative or null the knot is not inserted.
    /// No multiplicity will becomes higher than the degree.
    /// 
    /// The new Knots and Multiplicities  are copied in <NewKnots>
    /// and  <NewMults>.
    /// 
    /// All the New arrays should be correctly dimensioned.
    /// 
    /// When all  the new knots  are existing knots, i.e. only the
    /// multiplicities  will  change it is   safe to  use the same
    /// arrays as input and output.
    /// </summary>
    static void InsertKnots(int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon, bool Add);
    /// <summary>
    /// Insert   a  sequence  of  knots <AddKnots> with
    /// multiplicities   <AddMults>. <AddKnots>   must  be a   non
    /// decreasing sequence and verifies :
    /// 
    /// Knots(Knots.Lower()) <= AddKnots(AddKnots.Lower())
    /// Knots(Knots.Upper()) >= AddKnots(AddKnots.Upper())
    /// 
    /// The NewPoles and NewWeights arrays must have a length :
    /// Poles.Length() + Sum(AddMults())
    /// 
    /// When a knot  to insert is identic  to an existing knot the
    /// multiplicities   are added.
    /// 
    /// Epsilon is used to test knots for equality.
    /// 
    /// When AddMult is negative or null the knot is not inserted.
    /// No multiplicity will becomes higher than the degree.
    /// 
    /// The new Knots and Multiplicities  are copied in <NewKnots>
    /// and  <NewMults>.
    /// 
    /// All the New arrays should be correctly dimensioned.
    /// 
    /// When all  the new knots  are existing knots, i.e. only the
    /// multiplicities  will  change it is   safe to  use the same
    /// arrays as input and output.
    /// </summary>
    static void InsertKnots(int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon);
    static void InsertKnot(int UIndex, double U, int UMult, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
    /// <summary>
    /// Insert a new knot U of multiplicity UMult in the
    /// knot sequence.
    /// 
    /// The  location of the new Knot  should be given as an input
    /// data.  UIndex locates the new knot U  in the knot sequence
    /// and Knots (UIndex) < U < Knots (UIndex + 1).
    /// 
    /// The new control points corresponding to this insertion are
    /// returned. Knots and Mults are not updated.
    /// </summary>
    static void InsertKnot(int UIndex, double U, int UMult, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
    static void RaiseMultiplicity(int KnotIndex, int Mult, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
    /// <summary>
    /// Raise the multiplicity of knot to <UMult>.
    /// 
    /// The new control points  are  returned. Knots and Mults are
    /// not updated.
    /// </summary>
    static void RaiseMultiplicity(int KnotIndex, int Mult, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
    static bool RemoveKnot(int Index, int Mult, int Degree, bool Periodic, int Dimension, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Tolerance);
    static bool RemoveKnot(int Index, int Mult, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Tolerance);
    /// <summary>
    /// Decrement the  multiplicity  of <Knots(Index)>
    /// to <Mult>. If <Mult>   is  null the   knot  is
    /// removed.
    /// 
    /// As there are two ways to compute the new poles
    /// the midlle   will  be used  as  long    as the
    /// distance is lower than Tolerance.
    /// 
    /// If a  distance is  bigger  than  tolerance the
    /// methods returns False  and  the new arrays are
    /// not modified.
    /// 
    /// A low  tolerance can be  used  to test  if the
    /// knot  can be  removed  without  modifying  the
    /// curve.
    /// 
    /// A high tolerance  can be used  to "smooth" the
    /// curve.
    /// </summary>
    static bool RemoveKnot(int Index, int Mult, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Tolerance);
    /// <summary>
    /// Returns the   number   of  knots   of  a  curve   with
    /// multiplicities <Mults> after elevating the degree from
    /// <Degree> to <NewDegree>. See the IncreaseDegree method
    /// for more comments.
    /// </summary>
    static int IncreaseDegreeCountKnots(int Degree, int NewDegree, bool Periodic, Macad::Occt::TColStd_Array1OfInteger^ Mults);
    static void IncreaseDegree(int Degree, int NewDegree, bool Periodic, int Dimension, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults);
    static void IncreaseDegree(int Degree, int NewDegree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults);
    static void IncreaseDegree(int Degree, int NewDegree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults);
    static void IncreaseDegree(int NewDegree, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
    /// <summary>
    /// Increase the degree of a bspline (or bezier) curve
    /// of dimension theDimension form theDegree to theNewDegree.
    /// 
    /// The number of poles in the new curve is:
    /// </summary>
    /// @code
    /// Poles.Length() + (NewDegree - Degree) * Number of spans
    /// @endcode
    /// Where the number of spans is:
    /// @code
    /// LastUKnotIndex(Mults) - FirstUKnotIndex(Mults) + 1
    /// @endcode
    /// for a non-periodic curve, and
    /// @code
    /// Knots.Length() - 1
    /// @endcode
    /// for a periodic curve.
    /// 
    /// The multiplicities of all knots are increased by the degree elevation.
    /// 
    /// The new knots are usually the same knots with the
    /// exception of a non-periodic curve with the first
    /// and last multiplicity not  equal to Degree+1 where
    /// knots are removed form the start and the bottom
    /// until the sum of the multiplicities is equal to
    /// NewDegree+1  at the knots corresponding to the
    /// first and last parameters of the curve.
    /// 
    /// Example: Suppose a curve of degree 3 starting
    /// with following knots and multiplicities:
    /// @code
    /// knot : 0.  1.  2.
    /// mult : 1   2   1
    /// @endcode
    /// 
    /// The FirstUKnot is 2.0 because the sum of multiplicities is
    /// @code
    /// Degree+1 : 1 + 2 + 1 = 4 = 3 + 1
    /// @endcode
    /// i.e. the first parameter of the curve is 2.0 and
    /// will still be 2.0 after degree elevation.
    /// Let raise this curve to degree 4.
    /// The multiplicities are increased by 2.
    /// 
    /// They  become 2 3 2.
    /// But we need a sum of multiplicities of 5 at knot 2.
    /// So the first knot is removed and the new knots are:
    /// @code
    /// knot : 1.  2.
    /// mult : 3   2
    /// @endcode
    /// The multiplicity of the first knot may also be reduced if the sum is still too big.
    /// 
    /// In the most common situations (periodic curve or curve with first
    /// and last multiplicities equals to Degree+1) the knots are knot changes.
    /// 
    /// The method IncreaseDegreeCountKnots can be used to compute the new number of knots.
    static void IncreaseDegree(int theNewDegree, Macad::Occt::TColgp_Array1OfPnt2d^ thePoles, Macad::Occt::TColStd_Array1OfReal^ theWeights, Macad::Occt::TColgp_Array1OfPnt2d^ theNewPoles, Macad::Occt::TColStd_Array1OfReal^ theNewWeights);
    /// <summary>
    /// Set in <NbKnots> and <NbPolesToAdd> the number of Knots and
    /// Poles   of  the NotPeriodic  Curve   identical  at the
    /// periodic     curve with    a  degree    <Degree>  ,  a
    /// knots-distribution with Multiplicities <Mults>.
    /// </summary>
    static void PrepareUnperiodize(int Degree, Macad::Occt::TColStd_Array1OfInteger^ Mults, int% NbKnots, int% NbPoles);
    static void Unperiodize(int Degree, int Dimension, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfInteger^ NewMults, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfReal^ NewPoles);
    static void Unperiodize(int Degree, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfInteger^ NewMults, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
    static void Unperiodize(int Degree, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfInteger^ NewMults, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
    /// <summary>
    /// Set in <NbKnots> and <NbPoles> the number of Knots and
    /// Poles of the curve resulting from  the trimming of the
    /// BSplinecurve defined with <degree>, <knots>, <mults>
    /// </summary>
    static void PrepareTrimming(int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double U1, double U2, int% NbKnots, int% NbPoles);
    static void Trimming(int Degree, bool Periodic, int Dimension, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ Poles, double U1, double U2, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, Macad::Occt::TColStd_Array1OfReal^ NewPoles);
    static void Trimming(int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, double U1, double U2, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
    static void Trimming(int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, double U1, double U2, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
    static void D0(double U, int Index, int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double% P);
    static void D0(double U, int Index, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::Pnt% P);
    static void D0(double U, int UIndex, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::Pnt2d% P);
    static void D0(double U, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% P);
    static void D0(double U, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% P);
    static void D1(double U, int Index, int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double% P, double% V);
    static void D1(double U, int Index, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::Pnt% P, Macad::Occt::Vec% V);
    static void D1(double U, int UIndex, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V);
    static void D1(double U, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% P, Macad::Occt::Vec% V);
    static void D1(double U, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V);
    static void D2(double U, int Index, int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double% P, double% V1, double% V2);
    static void D2(double U, int Index, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    static void D2(double U, int UIndex, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
    static void D2(double U, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
    static void D2(double U, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
    static void D3(double U, int Index, int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double% P, double% V1, double% V2, double% V3);
    static void D3(double U, int Index, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    static void D3(double U, int UIndex, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
    static void D3(double U, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
    static void D3(double U, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
    static void DN(double U, int N, int Index, int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double% VN);
    static void DN(double U, int N, int Index, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::Vec% VN);
    static void DN(double U, int N, int UIndex, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::Vec2d% V);
    /* Method skipped due to unknown mapping: int EvalBsplineBasis(int DerivativeOrder, int Order, TColStd_Array1OfReal FlatKnots, double Parameter, int FirstNonZeroBsplineIndex, math_Matrix BsplineBasis, bool isPeriodic, ) */
    /* Method skipped due to unknown mapping: int EvalBsplineBasis(int DerivativeOrder, int Order, TColStd_Array1OfReal FlatKnots, double Parameter, int FirstNonZeroBsplineIndex, math_Matrix BsplineBasis, bool isPeriodic, ) */
    /* Method skipped due to unknown mapping: int BuildBSpMatrix(TColStd_Array1OfReal Parameters, TColStd_Array1OfInteger OrderArray, TColStd_Array1OfReal FlatKnots, int Degree, math_Matrix Matrix, int UpperBandWidth, int LowerBandWidth, ) */
    /* Method skipped due to unknown mapping: int FactorBandedMatrix(math_Matrix Matrix, int UpperBandWidth, int LowerBandWidth, int PivotIndexProblem, ) */
    /* Method skipped due to unknown mapping: int SolveBandedSystem(math_Matrix Matrix, int UpperBandWidth, int LowerBandWidth, int ArrayDimension, double Array, ) */
    /* Method skipped due to unknown mapping: int SolveBandedSystem(math_Matrix Matrix, int UpperBandWidth, int LowerBandWidth, TColgp_Array1OfPnt2d Array, ) */
    /* Method skipped due to unknown mapping: int SolveBandedSystem(math_Matrix Matrix, int UpperBandWidth, int LowerBandWidth, TColgp_Array1OfPnt Array, ) */
    /* Method skipped due to unknown mapping: int SolveBandedSystem(math_Matrix Matrix, int UpperBandWidth, int LowerBandWidth, bool HomogenousFlag, int ArrayDimension, double Array, double Weights, ) */
    /* Method skipped due to unknown mapping: int SolveBandedSystem(math_Matrix Matrix, int UpperBandWidth, int LowerBandWidth, bool HomogenousFlag, TColgp_Array1OfPnt2d Array, TColStd_Array1OfReal Weights, ) */
    /* Method skipped due to unknown mapping: int SolveBandedSystem(math_Matrix Matrix, int UpperBandWidth, int LowerBandWidth, bool HomogeneousFlag, TColgp_Array1OfPnt Array, TColStd_Array1OfReal Weights, ) */
    /// <summary>
    /// Merges  two knot vector by   setting the starting and
    /// ending values to StartValue and EndValue
    /// </summary>
    static void MergeBSplineKnots(double Tolerance, double StartValue, double EndValue, int Degree1, Macad::Occt::TColStd_Array1OfReal^ Knots1, Macad::Occt::TColStd_Array1OfInteger^ Mults1, int Degree2, Macad::Occt::TColStd_Array1OfReal^ Knots2, Macad::Occt::TColStd_Array1OfInteger^ Mults2, int% NumPoles, Macad::Occt::TColStd_HArray1OfReal^ NewKnots, Macad::Occt::TColStd_HArray1OfInteger^ NewMults);
    /// <summary>
    /// This function will compose  a given Vectorial BSpline F(t)
    /// defined  by its  BSplineDegree and BSplineFlatKnotsl,
    /// its Poles  array which are coded as  an array of Real
    /// of  the  form  [1..NumPoles][1..PolesDimension] with  a
    /// function     a(t) which is   assumed to   satisfy the
    /// following:
    /// 
    /// 1. F(a(t))  is a polynomial BSpline
    /// that can be expressed  exactly as a BSpline of degree
    /// NewDegree on the knots FlatKnots
    /// 
    /// 2. a(t) defines a differentiable
    /// isomorphism between the range of FlatKnots to the range
    /// of BSplineFlatKnots which is the
    /// same as the  range of F(t)
    /// 
    /// Warning: it is
    /// the caller's responsibility to insure that conditions
    /// 1. and  2. above are  satisfied : no check whatsoever
    /// is made in this method
    /// 
    /// theStatus will return 0 if OK else it will return the pivot index
    /// of the matrix that was inverted to compute the multiplied
    /// BSpline : the method used is interpolation at Schoenenberg
    /// points of F(a(t))
    /// </summary>
    static void FunctionReparameterise(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, int PolesDimension, double% Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, double% NewPoles, int% theStatus);
    /// <summary>
    /// This function will compose  a given Vectorial BSpline F(t)
    /// defined  by its  BSplineDegree and BSplineFlatKnotsl,
    /// its Poles  array which are coded as  an array of Real
    /// of  the  form  [1..NumPoles][1..PolesDimension] with  a
    /// function     a(t) which is   assumed to   satisfy the
    /// following:
    /// 
    /// 1. F(a(t))  is a polynomial BSpline
    /// that can be expressed  exactly as a BSpline of degree
    /// NewDegree on the knots FlatKnots
    /// 
    /// 2. a(t) defines a differentiable
    /// isomorphism between the range of FlatKnots to the range
    /// of BSplineFlatKnots which is the
    /// same as the  range of F(t)
    /// 
    /// Warning: it is
    /// the caller's responsibility to insure that conditions
    /// 1. and  2. above are  satisfied : no check whatsoever
    /// is made in this method
    /// 
    /// theStatus will return 0 if OK else it will return the pivot index
    /// of the matrix that was inverted to compute the multiplied
    /// BSpline : the method used is interpolation at Schoenenberg
    /// points of F(a(t))
    /// </summary>
    static void FunctionReparameterise(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, Macad::Occt::TColStd_Array1OfReal^ NewPoles, int% theStatus);
    /// <summary>
    /// this will compose  a given Vectorial BSpline F(t)
    /// defined  by its  BSplineDegree and BSplineFlatKnotsl,
    /// its Poles  array which are coded as  an array of Real
    /// of  the  form  [1..NumPoles][1..PolesDimension] with  a
    /// function     a(t) which is   assumed to   satisfy the
    /// following  : 1. F(a(t))  is a polynomial BSpline
    /// that can be expressed  exactly as a BSpline of degree
    /// NewDegree on the knots FlatKnots
    /// 2. a(t) defines a differentiable
    /// isomorphism between the range of FlatKnots to the range
    /// of BSplineFlatKnots which is the
    /// same as the  range of F(t)
    /// Warning: it is
    /// the caller's responsibility to insure that conditions
    /// 1. and  2. above are  satisfied : no check whatsoever
    /// is made in this method
    /// theStatus will return 0 if OK else it will return the pivot index
    /// of the matrix that was inverted to compute the multiplied
    /// BSpline : the method used is interpolation at Schoenenberg
    /// points of F(a(t))
    /// </summary>
    static void FunctionReparameterise(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, int% theStatus);
    /// <summary>
    /// this will compose  a given Vectorial BSpline F(t)
    /// defined  by its  BSplineDegree and BSplineFlatKnotsl,
    /// its Poles  array which are coded as  an array of Real
    /// of  the  form  [1..NumPoles][1..PolesDimension] with  a
    /// function     a(t) which is   assumed to   satisfy the
    /// following  : 1. F(a(t))  is a polynomial BSpline
    /// that can be expressed  exactly as a BSpline of degree
    /// NewDegree on the knots FlatKnots
    /// 2. a(t) defines a differentiable
    /// isomorphism between the range of FlatKnots to the range
    /// of BSplineFlatKnots which is the
    /// same as the  range of F(t)
    /// Warning: it is
    /// the caller's responsibility to insure that conditions
    /// 1. and  2. above are  satisfied : no check whatsoever
    /// is made in this method
    /// theStatus will return 0 if OK else it will return the pivot index
    /// of the matrix that was inverted to compute the multiplied
    /// BSpline : the method used is interpolation at Schoenenberg
    /// points of F(a(t))
    /// </summary>
    static void FunctionReparameterise(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, int% theStatus);
    /// <summary>
    /// this will  multiply a given Vectorial BSpline F(t)
    /// defined  by its  BSplineDegree and BSplineFlatKnotsl,
    /// its Poles  array which are coded as  an array of Real
    /// of  the  form  [1..NumPoles][1..PolesDimension] by  a
    /// function     a(t) which is   assumed to   satisfy the
    /// following  : 1. a(t)  * F(t)  is a polynomial BSpline
    /// that can be expressed  exactly as a BSpline of degree
    /// NewDegree on the knots FlatKnots 2. the range of a(t)
    /// is the same as the  range of F(t)
    /// Warning: it is
    /// the caller's responsibility to insure that conditions
    /// 1. and  2. above are  satisfied : no check whatsoever
    /// is made in this method
    /// theStatus will return 0 if OK else it will return the pivot index
    /// of the matrix that was inverted to compute the multiplied
    /// BSpline : the method used is interpolation at Schoenenberg
    /// points of a(t)*F(t)
    /// </summary>
    static void FunctionMultiply(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, int PolesDimension, double% Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, double% NewPoles, int% theStatus);
    /// <summary>
    /// this will  multiply a given Vectorial BSpline F(t)
    /// defined  by its  BSplineDegree and BSplineFlatKnotsl,
    /// its Poles  array which are coded as  an array of Real
    /// of  the  form  [1..NumPoles][1..PolesDimension] by  a
    /// function     a(t) which is   assumed to   satisfy the
    /// following  : 1. a(t)  * F(t)  is a polynomial BSpline
    /// that can be expressed  exactly as a BSpline of degree
    /// NewDegree on the knots FlatKnots 2. the range of a(t)
    /// is the same as the  range of F(t)
    /// Warning: it is
    /// the caller's responsibility to insure that conditions
    /// 1. and  2. above are  satisfied : no check whatsoever
    /// is made in this method
    /// theStatus will return 0 if OK else it will return the pivot index
    /// of the matrix that was inverted to compute the multiplied
    /// BSpline : the method used is interpolation at Schoenenberg
    /// points of a(t)*F(t)
    /// </summary>
    static void FunctionMultiply(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, Macad::Occt::TColStd_Array1OfReal^ NewPoles, int% theStatus);
    /// <summary>
    /// this will  multiply a given Vectorial BSpline F(t)
    /// defined  by its  BSplineDegree and BSplineFlatKnotsl,
    /// its Poles  array which are coded as  an array of Real
    /// of  the  form  [1..NumPoles][1..PolesDimension] by  a
    /// function     a(t) which is   assumed to   satisfy the
    /// following  : 1. a(t)  * F(t)  is a polynomial BSpline
    /// that can be expressed  exactly as a BSpline of degree
    /// NewDegree on the knots FlatKnots 2. the range of a(t)
    /// is the same as the  range of F(t)
    /// Warning: it is
    /// the caller's responsibility to insure that conditions
    /// 1. and  2. above are  satisfied : no check whatsoever
    /// is made in this method
    /// theStatus will return 0 if OK else it will return the pivot index
    /// of the matrix that was inverted to compute the multiplied
    /// BSpline : the method used is interpolation at Schoenenberg
    /// points of a(t)*F(t)
    /// </summary>
    static void FunctionMultiply(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, int% theStatus);
    /// <summary>
    /// this will  multiply a given Vectorial BSpline F(t)
    /// defined  by its  BSplineDegree and BSplineFlatKnotsl,
    /// its Poles  array which are coded as  an array of Real
    /// of  the  form  [1..NumPoles][1..PolesDimension] by  a
    /// function     a(t) which is   assumed to   satisfy the
    /// following  : 1. a(t)  * F(t)  is a polynomial BSpline
    /// that can be expressed  exactly as a BSpline of degree
    /// NewDegree on the knots FlatKnots 2. the range of a(t)
    /// is the same as the  range of F(t)
    /// Warning: it is
    /// the caller's responsibility to insure that conditions
    /// 1. and  2. above are  satisfied : no check whatsoever
    /// is made in this method
    /// theStatus will return 0 if OK else it will return the pivot index
    /// of the matrix that was inverted to compute the multiplied
    /// BSpline : the method used is interpolation at Schoenenberg
    /// points of a(t)*F(t)
    /// </summary>
    static void FunctionMultiply(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, int% theStatus);
    /// <summary>
    /// Perform the De Boor   algorithm  to  evaluate a point at
    /// parameter <U>, with <Degree> and <Dimension>.
    /// 
    /// Poles is  an array of  Reals of size
    /// 
    /// <Dimension> *  <Degree>+1
    /// 
    /// Containing the  poles.  At  the end <Poles> contains
    /// the current point.   Poles Contain all  the poles of
    /// the BsplineCurve, Knots  also Contains all the knots
    /// of the BsplineCurve.  ExtrapMode has two slots [0] =
    /// Degree used to extrapolate before the first knot [1]
    /// = Degre used to  extrapolate after the last knot has
    /// to be between 1 and  Degree
    /// </summary>
    static void Eval(double U, bool PeriodicFlag, int DerivativeRequest, int% ExtrapMode, int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int ArrayDimension, double% Poles, double% Result);
    /// <summary>
    /// Perform the  De Boor algorithm  to evaluate a point at
    /// parameter   <U>,  with   <Degree>    and  <Dimension>.
    /// Evaluates by multiplying the  Poles by the Weights and
    /// gives  the homogeneous  result  in PolesResult that is
    /// the results of the evaluation of the numerator once it
    /// has     been  multiplied   by  the     weights and  in
    /// WeightsResult one has  the result of the evaluation of
    /// the denominator
    /// 
    /// Warning:   <PolesResult> and <WeightsResult>  must be   dimensioned
    /// properly.
    /// </summary>
    static void Eval(double U, bool PeriodicFlag, int DerivativeRequest, int% ExtrapMode, int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int ArrayDimension, double% Poles, double% Weights, double% PolesResult, double% WeightsResult);
    /// <summary>
    /// Perform the evaluation of the Bspline Basis
    /// and then multiplies by the weights
    /// this just evaluates the current point
    /// </summary>
    static void Eval(double U, bool PeriodicFlag, bool HomogeneousFlag, int% ExtrapMode, int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, double% Weight);
    /// <summary>
    /// Perform the evaluation of the Bspline Basis
    /// and then multiplies by the weights
    /// this just evaluates the current point
    /// </summary>
    static void Eval(double U, bool PeriodicFlag, bool HomogeneousFlag, int% ExtrapMode, int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, double% Weight);
    /// <summary>
    /// Extend a BSpline nD using the tangency map
    /// <C1Coefficient> is the coefficient of reparametrisation
    /// <Continuity> must be equal to 1, 2 or 3.
    /// <Degree> must be greater or equal than <Continuity> + 1.
    /// 
    /// Warning:   <KnotsResult> and <PolesResult>  must be   dimensioned
    /// properly.
    /// </summary>
    static void TangExtendToConstraint(Macad::Occt::TColStd_Array1OfReal^ FlatKnots, double C1Coefficient, int NumPoles, double% Poles, int Dimension, int Degree, Macad::Occt::TColStd_Array1OfReal^ ConstraintPoint, int Continuity, bool After, int% NbPolesResult, int% NbKnotsRsult, double% KnotsResult, double% PolesResult);
    /// <summary>
    /// Perform the evaluation of the of the cache
    /// the parameter must be normalized between
    /// the 0 and 1 for the span.
    /// The Cache must be valid when calling this
    /// routine. Geom Package will insure that.
    /// and then multiplies by the weights
    /// this just evaluates the current point
    /// the CacheParameter is where the Cache was
    /// constructed the SpanLength is to normalize
    /// the polynomial in the cache to avoid bad conditioning
    /// effects
    /// </summary>
    static void CacheD0(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point);
    /// <summary>
    /// Perform the evaluation of the Bspline Basis
    /// and then multiplies by the weights
    /// this just evaluates the current point
    /// the parameter must be normalized between
    /// the 0 and 1 for the span.
    /// The Cache must be valid when calling this
    /// routine. Geom Package will insure that.
    /// and then multiplies by the weights
    /// ththe CacheParameter is where the Cache was
    /// constructed the SpanLength is to normalize
    /// the polynomial in the cache to avoid bad conditioning
    /// effectsis just evaluates the current point
    /// </summary>
    static void CacheD0(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point);
    /// <summary>
    /// Calls CacheD0 for Bezier  Curves Arrays computed with
    /// the method PolesCoefficients.
    /// Warning: To be used for Beziercurves ONLY!!!
    /// </summary>
    static void CoefsD0(double U, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point);
    /// <summary>
    /// Calls CacheD0 for Bezier  Curves Arrays computed with
    /// the method PolesCoefficients.
    /// Warning: To be used for Beziercurves ONLY!!!
    /// </summary>
    static void CoefsD0(double U, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point);
    /// <summary>
    /// Perform the evaluation of the of the cache
    /// the parameter must be normalized between
    /// the 0 and 1 for the span.
    /// The Cache must be valid when calling this
    /// routine. Geom Package will insure that.
    /// and then multiplies by the weights
    /// this just evaluates the current point
    /// the CacheParameter is where the Cache was
    /// constructed the SpanLength is to normalize
    /// the polynomial in the cache to avoid bad conditioning
    /// effects
    /// </summary>
    static void CacheD1(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% Vec);
    /// <summary>
    /// Perform the evaluation of the Bspline Basis
    /// and then multiplies by the weights
    /// this just evaluates the current point
    /// the parameter must be normalized between
    /// the 0 and 1 for the span.
    /// The Cache must be valid when calling this
    /// routine. Geom Package will insure that.
    /// and then multiplies by the weights
    /// ththe CacheParameter is where the Cache was
    /// constructed the SpanLength is to normalize
    /// the polynomial in the cache to avoid bad conditioning
    /// effectsis just evaluates the current point
    /// </summary>
    static void CacheD1(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, Macad::Occt::Vec2d% Vec);
    /// <summary>
    /// Calls CacheD1 for Bezier  Curves Arrays computed with
    /// the method PolesCoefficients.
    /// Warning: To be used for Beziercurves ONLY!!!
    /// </summary>
    static void CoefsD1(double U, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% Vec);
    /// <summary>
    /// Calls CacheD1 for Bezier  Curves Arrays computed with
    /// the method PolesCoefficients.
    /// Warning: To be used for Beziercurves ONLY!!!
    /// </summary>
    static void CoefsD1(double U, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, Macad::Occt::Vec2d% Vec);
    /// <summary>
    /// Perform the evaluation of the of the cache
    /// the parameter must be normalized between
    /// the 0 and 1 for the span.
    /// The Cache must be valid when calling this
    /// routine. Geom Package will insure that.
    /// and then multiplies by the weights
    /// this just evaluates the current point
    /// the CacheParameter is where the Cache was
    /// constructed the SpanLength is to normalize
    /// the polynomial in the cache to avoid bad conditioning
    /// effects
    /// </summary>
    static void CacheD2(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% Vec1, Macad::Occt::Vec% Vec2);
    /// <summary>
    /// Perform the evaluation of the Bspline Basis
    /// and then multiplies by the weights
    /// this just evaluates the current point
    /// the parameter must be normalized between
    /// the 0 and 1 for the span.
    /// The Cache must be valid when calling this
    /// routine. Geom Package will insure that.
    /// and then multiplies by the weights
    /// ththe CacheParameter is where the Cache was
    /// constructed the SpanLength is to normalize
    /// the polynomial in the cache to avoid bad conditioning
    /// effectsis just evaluates the current point
    /// </summary>
    static void CacheD2(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, Macad::Occt::Vec2d% Vec1, Macad::Occt::Vec2d% Vec2);
    /// <summary>
    /// Calls CacheD1 for Bezier  Curves Arrays computed with
    /// the method PolesCoefficients.
    /// Warning: To be used for Beziercurves ONLY!!!
    /// </summary>
    static void CoefsD2(double U, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% Vec1, Macad::Occt::Vec% Vec2);
    /// <summary>
    /// Calls CacheD1 for Bezier  Curves Arrays computed with
    /// the method PolesCoefficients.
    /// Warning: To be used for Beziercurves ONLY!!!
    /// </summary>
    static void CoefsD2(double U, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, Macad::Occt::Vec2d% Vec1, Macad::Occt::Vec2d% Vec2);
    /// <summary>
    /// Perform the evaluation of the of the cache
    /// the parameter must be normalized between
    /// the 0 and 1 for the span.
    /// The Cache must be valid when calling this
    /// routine. Geom Package will insure that.
    /// and then multiplies by the weights
    /// this just evaluates the current point
    /// the CacheParameter is where the Cache was
    /// constructed the SpanLength is to normalize
    /// the polynomial in the cache to avoid bad conditioning
    /// effects
    /// </summary>
    static void CacheD3(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% Vec1, Macad::Occt::Vec% Vec2, Macad::Occt::Vec% Vec3);
    /// <summary>
    /// Perform the evaluation of the Bspline Basis
    /// and then multiplies by the weights
    /// this just evaluates the current point
    /// the parameter must be normalized between
    /// the 0 and 1 for the span.
    /// The Cache must be valid when calling this
    /// routine. Geom Package will insure that.
    /// and then multiplies by the weights
    /// ththe CacheParameter is where the Cache was
    /// constructed the SpanLength is to normalize
    /// the polynomial in the cache to avoid bad conditioning
    /// effectsis just evaluates the current point
    /// </summary>
    static void CacheD3(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, Macad::Occt::Vec2d% Vec1, Macad::Occt::Vec2d% Vec2, Macad::Occt::Vec2d% Vec3);
    /// <summary>
    /// Calls CacheD1 for Bezier  Curves Arrays computed with
    /// the method PolesCoefficients.
    /// Warning: To be used for Beziercurves ONLY!!!
    /// </summary>
    static void CoefsD3(double U, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% Vec1, Macad::Occt::Vec% Vec2, Macad::Occt::Vec% Vec3);
    /// <summary>
    /// Calls CacheD1 for Bezier  Curves Arrays computed with
    /// the method PolesCoefficients.
    /// Warning: To be used for Beziercurves ONLY!!!
    /// </summary>
    static void CoefsD3(double U, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, Macad::Occt::Vec2d% Vec1, Macad::Occt::Vec2d% Vec2, Macad::Occt::Vec2d% Vec3);
    /// <summary>
    /// Perform the evaluation of the Taylor expansion
    /// of the Bspline normalized between 0 and 1.
    /// If rational computes the homogeneous Taylor expansion
    /// for the numerator and stores it in CachePoles
    /// </summary>
    static void BuildCache(double U, double InverseOfSpanDomain, bool PeriodicFlag, int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColgp_Array1OfPnt^ CachePoles, Macad::Occt::TColStd_Array1OfReal^ CacheWeights);
    /// <summary>
    /// Perform the evaluation of the Taylor expansion
    /// of the Bspline normalized between 0 and 1.
    /// If rational computes the homogeneous Taylor expansion
    /// for the numerator and stores it in CachePoles
    /// </summary>
    static void BuildCache(double U, double InverseOfSpanDomain, bool PeriodicFlag, int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColgp_Array1OfPnt2d^ CachePoles, Macad::Occt::TColStd_Array1OfReal^ CacheWeights);
    /// <summary>
    /// Perform the evaluation of the Taylor expansion
    /// of the Bspline normalized between 0 and 1.
    /// Structure of result optimized for BSplCLib_Cache.
    /// </summary>
    static void BuildCache(double theParameter, double theSpanDomain, bool thePeriodicFlag, int theDegree, int theSpanIndex, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ thePoles, Macad::Occt::TColStd_Array1OfReal^ theWeights, Macad::Occt::TColStd_Array2OfReal^ theCacheArray);
    /// <summary>
    /// Perform the evaluation of the Taylor expansion
    /// of the Bspline normalized between 0 and 1.
    /// Structure of result optimized for BSplCLib_Cache.
    /// </summary>
    static void BuildCache(double theParameter, double theSpanDomain, bool thePeriodicFlag, int theDegree, int theSpanIndex, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ thePoles, Macad::Occt::TColStd_Array1OfReal^ theWeights, Macad::Occt::TColStd_Array2OfReal^ theCacheArray);
    static void PolesCoefficients(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColgp_Array1OfPnt2d^ CachePoles);
    static void PolesCoefficients(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColgp_Array1OfPnt2d^ CachePoles, Macad::Occt::TColStd_Array1OfReal^ CacheWeights);
    static void PolesCoefficients(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColgp_Array1OfPnt^ CachePoles);
    /// <summary>
    /// Encapsulation   of  BuildCache    to   perform   the
    /// evaluation  of the Taylor expansion for beziercurves
    /// at parameter 0.
    /// Warning: To be used for Beziercurves ONLY!!!
    /// </summary>
    static void PolesCoefficients(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColgp_Array1OfPnt^ CachePoles, Macad::Occt::TColStd_Array1OfReal^ CacheWeights);
    /// <summary>
    /// Returns pointer to statically allocated array representing
    /// flat knots for bezier curve of the specified degree.
    /// Raises OutOfRange if Degree > MaxDegree()
    /// </summary>
    static double FlatBezierKnots(int Degree);
    /// <summary>
    /// builds the Schoenberg points from the flat knot
    /// used to interpolate a BSpline since the
    /// BSpline matrix is invertible.
    /// </summary>
    static void BuildSchoenbergPoints(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters);
    /// <summary>
    /// Performs the interpolation of  the data given in
    /// the Poles  array  according  to the  requests in
    /// ContactOrderArray    that is      :           if
    /// ContactOrderArray(i) has value  d it means  that
    /// Poles(i)   contains the dth  derivative of  the
    /// function to be interpolated. The length L of the
    /// following arrays must be the same :
    /// Parameters, ContactOrderArray, Poles,
    /// The length of FlatKnots is Degree + L + 1
    /// Warning:
    /// the method used to do that interpolation is
    /// gauss elimination WITHOUT pivoting. Thus if the
    /// diagonal is not dominant there is no guarantee
    /// that the algorithm will work. Nevertheless for
    /// Cubic interpolation or interpolation at Scheonberg
    /// points the method will work
    /// The InversionProblem will report 0 if there was no
    /// problem else it will give the index of the faulty
    /// pivot
    /// </summary>
    static void Interpolate(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters, Macad::Occt::TColStd_Array1OfInteger^ ContactOrderArray, Macad::Occt::TColgp_Array1OfPnt^ Poles, int% InversionProblem);
    /// <summary>
    /// Performs the interpolation of  the data given in
    /// the Poles  array  according  to the  requests in
    /// ContactOrderArray    that is      :           if
    /// ContactOrderArray(i) has value  d it means  that
    /// Poles(i)   contains the dth  derivative of  the
    /// function to be interpolated. The length L of the
    /// following arrays must be the same :
    /// Parameters, ContactOrderArray, Poles,
    /// The length of FlatKnots is Degree + L + 1
    /// Warning:
    /// the method used to do that interpolation is
    /// gauss elimination WITHOUT pivoting. Thus if the
    /// diagonal is not dominant there is no guarantee
    /// that the algorithm will work. Nevertheless for
    /// Cubic interpolation at knots or interpolation at Scheonberg
    /// points the method will work.
    /// The InversionProblem w
    /// ll report 0 if there was no
    /// problem else it will give the index of the faulty
    /// pivot
    /// </summary>
    static void Interpolate(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters, Macad::Occt::TColStd_Array1OfInteger^ ContactOrderArray, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, int% InversionProblem);
    /// <summary>
    /// Performs the interpolation of  the data given in
    /// the Poles  array  according  to the  requests in
    /// ContactOrderArray    that is      :           if
    /// ContactOrderArray(i) has value  d it means  that
    /// Poles(i)   contains the dth  derivative of  the
    /// function to be interpolated. The length L of the
    /// following arrays must be the same :
    /// Parameters, ContactOrderArray, Poles,
    /// The length of FlatKnots is Degree + L + 1
    /// Warning:
    /// the method used to do that interpolation is
    /// gauss elimination WITHOUT pivoting. Thus if the
    /// diagonal is not dominant there is no guarantee
    /// that the algorithm will work. Nevertheless for
    /// Cubic interpolation at knots or interpolation at Scheonberg
    /// points the method will work.
    /// The InversionProblem will report 0 if there was no
    /// problem else it will give the index of the faulty
    /// pivot
    /// </summary>
    static void Interpolate(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters, Macad::Occt::TColStd_Array1OfInteger^ ContactOrderArray, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, int% InversionProblem);
    /// <summary>
    /// Performs the interpolation of  the data given in
    /// the Poles  array  according  to the  requests in
    /// ContactOrderArray    that is      :           if
    /// ContactOrderArray(i) has value  d it means  that
    /// Poles(i)   contains the dth  derivative of  the
    /// function to be interpolated. The length L of the
    /// following arrays must be the same :
    /// Parameters, ContactOrderArray, Poles,
    /// The length of FlatKnots is Degree + L + 1
    /// Warning:
    /// the method used to do that interpolation is
    /// gauss elimination WITHOUT pivoting. Thus if the
    /// diagonal is not dominant there is no guarantee
    /// that the algorithm will work. Nevertheless for
    /// Cubic interpolation at knots or interpolation at Scheonberg
    /// points the method will work.
    /// The InversionProblem w
    /// ll report 0 if there was no
    /// problem else it will give the i
    /// </summary>
    static void Interpolate(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters, Macad::Occt::TColStd_Array1OfInteger^ ContactOrderArray, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, int% InversionProblem);
    /// <summary>
    /// Performs the interpolation of  the data given in
    /// the Poles  array  according  to the  requests in
    /// ContactOrderArray    that is      :           if
    /// ContactOrderArray(i) has value  d it means  that
    /// Poles(i)   contains the dth  derivative of  the
    /// function to be interpolated. The length L of the
    /// following arrays must be the same :
    /// Parameters, ContactOrderArray
    /// The length of FlatKnots is Degree + L + 1
    /// The  PolesArray   is    an   seen   as    an
    /// Array[1..N][1..ArrayDimension] with N = tge length
    /// of the parameters array
    /// Warning:
    /// the method used to do that interpolation is
    /// gauss elimination WITHOUT pivoting. Thus if the
    /// diagonal is not dominant there is no guarantee
    /// that the algorithm will work. Nevertheless for
    /// Cubic interpolation or interpolation at Scheonberg
    /// points the method will work
    /// The InversionProblem will report 0 if there was no
    /// problem else it will give the index of the faulty
    /// pivot
    /// </summary>
    static void Interpolate(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters, Macad::Occt::TColStd_Array1OfInteger^ ContactOrderArray, int ArrayDimension, double% Poles, int% InversionProblem);
    static void Interpolate(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters, Macad::Occt::TColStd_Array1OfInteger^ ContactOrderArray, int ArrayDimension, double% Poles, double% Weights, int% InversionProblem);
    /// <summary>
    /// Find the new poles which allows  an old point (with a
    /// given  u as parameter) to reach a new position
    /// Index1 and Index2 indicate the range of poles we can move
    /// (1, NbPoles-1) or (2, NbPoles) -> no constraint for one side
    /// don't enter (1,NbPoles) -> error: rigid move
    /// (2, NbPoles-1) -> the ends are enforced
    /// (3, NbPoles-2) -> the ends and the tangency are enforced
    /// if Problem in BSplineBasis calculation, no change for the curve
    /// and FirstIndex, LastIndex = 0
    /// </summary>
    static void MovePoint(double U, Macad::Occt::Vec2d Displ, int Index1, int Index2, int Degree, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int% FirstIndex, int% LastIndex, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles);
    /// <summary>
    /// Find the new poles which allows  an old point (with a
    /// given  u as parameter) to reach a new position
    /// Index1 and Index2 indicate the range of poles we can move
    /// (1, NbPoles-1) or (2, NbPoles) -> no constraint for one side
    /// don't enter (1,NbPoles) -> error: rigid move
    /// (2, NbPoles-1) -> the ends are enforced
    /// (3, NbPoles-2) -> the ends and the tangency are enforced
    /// if Problem in BSplineBasis calculation, no change for the curve
    /// and FirstIndex, LastIndex = 0
    /// </summary>
    static void MovePoint(double U, Macad::Occt::Vec Displ, int Index1, int Index2, int Degree, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int% FirstIndex, int% LastIndex, Macad::Occt::TColgp_Array1OfPnt^ NewPoles);
    /// <summary>
    /// This is the dimension free version of the utility
    /// U is the parameter  must be within the  first FlatKnots and the
    /// last FlatKnots  Delta is the amount the  curve has  to be moved
    /// DeltaDerivative is the  amount the derivative  has to be moved.
    /// Delta  and   DeltaDerivative   must be    array   of  dimension
    /// ArrayDimension  Degree  is the degree  of   the BSpline and the
    /// FlatKnots are the knots of the BSpline  Starting Condition if =
    /// -1 means the starting point of the curve can move
    /// = 0 means the
    /// starting  point  of the curve  cannot  move but  tangent  starting
    /// point of the curve cannot move
    /// = 1 means the starting point and tangents cannot move
    /// = 2 means the starting point tangent and curvature cannot move
    /// = ...
    /// Same holds for EndingCondition
    /// Poles are the poles of the curve
    /// Weights are the weights of the curve if not NULL
    /// NewPoles are the poles of the deformed curve
    /// ErrorStatus will be 0 if no error happened
    /// 1 if there are not enough knots/poles
    /// the imposed conditions
    /// The way to solve this problem is to add knots to the BSpline
    /// If StartCondition = 1 and EndCondition = 1 then you need at least
    /// 4 + 2 = 6 poles so for example to have a C1 cubic you will need
    /// have at least 2 internal knots.
    /// </summary>
    static void MovePointAndTangent(double U, int ArrayDimension, double% Delta, double% DeltaDerivative, double Tolerance, int Degree, int StartingCondition, int EndingCondition, double% Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, double% NewPoles, int% ErrorStatus);
    /// <summary>
    /// This is the dimension free version of the utility
    /// U is the parameter  must be within the  first FlatKnots and the
    /// last FlatKnots  Delta is the amount the  curve has  to be moved
    /// DeltaDerivative is the  amount the derivative  has to be moved.
    /// Delta  and   DeltaDerivative   must be    array   of  dimension
    /// ArrayDimension  Degree  is the degree  of   the BSpline and the
    /// FlatKnots are the knots of the BSpline  Starting Condition if =
    /// -1 means the starting point of the curve can move
    /// = 0 means the
    /// starting  point  of the curve  cannot  move but  tangent  starting
    /// point of the curve cannot move
    /// = 1 means the starting point and tangents cannot move
    /// = 2 means the starting point tangent and curvature cannot move
    /// = ...
    /// Same holds for EndingCondition
    /// Poles are the poles of the curve
    /// Weights are the weights of the curve if not NULL
    /// NewPoles are the poles of the deformed curve
    /// ErrorStatus will be 0 if no error happened
    /// 1 if there are not enough knots/poles
    /// the imposed conditions
    /// The way to solve this problem is to add knots to the BSpline
    /// If StartCondition = 1 and EndCondition = 1 then you need at least
    /// 4 + 2 = 6 poles so for example to have a C1 cubic you will need
    /// have at least 2 internal knots.
    /// </summary>
    static void MovePointAndTangent(double U, Macad::Occt::Vec Delta, Macad::Occt::Vec DeltaDerivative, double Tolerance, int Degree, int StartingCondition, int EndingCondition, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, int% ErrorStatus);
    /// <summary>
    /// This is the dimension free version of the utility
    /// U is the parameter  must be within the  first FlatKnots and the
    /// last FlatKnots  Delta is the amount the  curve has  to be moved
    /// DeltaDerivative is the  amount the derivative  has to be moved.
    /// Delta  and   DeltaDerivative   must be    array   of  dimension
    /// ArrayDimension  Degree  is the degree  of   the BSpline and the
    /// FlatKnots are the knots of the BSpline  Starting Condition if =
    /// -1 means the starting point of the curve can move
    /// = 0 means the
    /// starting  point  of the curve  cannot  move but  tangent  starting
    /// point of the curve cannot move
    /// = 1 means the starting point and tangents cannot move
    /// = 2 means the starting point tangent and curvature cannot move
    /// = ...
    /// Same holds for EndingCondition
    /// Poles are the poles of the curve
    /// Weights are the weights of the curve if not NULL
    /// NewPoles are the poles of the deformed curve
    /// ErrorStatus will be 0 if no error happened
    /// 1 if there are not enough knots/poles
    /// the imposed conditions
    /// The way to solve this problem is to add knots to the BSpline
    /// If StartCondition = 1 and EndCondition = 1 then you need at least
    /// 4 + 2 = 6 poles so for example to have a C1 cubic you will need
    /// have at least 2 internal knots.
    /// </summary>
    static void MovePointAndTangent(double U, Macad::Occt::Vec2d Delta, Macad::Occt::Vec2d DeltaDerivative, double Tolerance, int Degree, int StartingCondition, int EndingCondition, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, int% ErrorStatus);
    /// <summary>
    /// given a tolerance in 3D space returns a
    /// tolerance    in U parameter space such that
    /// all u1 and u0 in the domain of the curve f(u)
    /// | u1 - u0 | < UTolerance and
    /// we have |f (u1) - f (u0)| < Tolerance3D
    /// </summary>
    static void Resolution(double% PolesArray, int ArrayDimension, int NumPoles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int Degree, double Tolerance3D, double% UTolerance);
    /// <summary>
    /// given a tolerance in 3D space returns a
    /// tolerance    in U parameter space such that
    /// all u1 and u0 in the domain of the curve f(u)
    /// | u1 - u0 | < UTolerance and
    /// we have |f (u1) - f (u0)| < Tolerance3D
    /// </summary>
    static void Resolution(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, int NumPoles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int Degree, double Tolerance3D, double% UTolerance);
    /// <summary>
    /// given a tolerance in 3D space returns a
    /// tolerance    in U parameter space such that
    /// all u1 and u0 in the domain of the curve f(u)
    /// | u1 - u0 | < UTolerance and
    /// we have |f (u1) - f (u0)| < Tolerance3D
    /// </summary>
    static void Resolution(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, int NumPoles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int Degree, double Tolerance3D, double% UTolerance);
    /// <summary>
    /// Splits the given range to BSpline intervals of given continuity
    /// </summary>
    /// <param name="in]">
    /// theKnots the knots of BSpline
    /// </param>
    /// <param name="in]">
    /// theMults the knots' multiplicities
    /// </param>
    /// <param name="in]">
    /// theDegree the degree of BSpline
    /// </param>
    /// <param name="in]">
    /// isPeriodic the periodicity of BSpline
    /// </param>
    /// <param name="in]">
    /// theContinuity the target interval's continuity
    /// </param>
    /// <param name="in]">
    /// theFirst the begin of the target range
    /// </param>
    /// <param name="in]">
    /// theLast the end of the target range
    /// </param>
    /// <param name="in]">
    /// theTolerance the tolerance
    /// </param>
    /// <param name="in,out]">
    /// theIntervals the array to store intervals if isn't nullptr
    /// </param>
    /// <returns>
    /// the number of intervals
    /// </returns>
    static int Intervals(Macad::Occt::TColStd_Array1OfReal^ theKnots, Macad::Occt::TColStd_Array1OfInteger^ theMults, int theDegree, bool isPeriodic, int theContinuity, double theFirst, double theLast, double theTolerance, Macad::Occt::TColStd_Array1OfReal^ theIntervals);
}; // class BSplCLib

//---------------------------------------------------------------------
//  Class  BSplCLib_Cache
//---------------------------------------------------------------------
/// <summary>
/// \brief A cache class for Bezier and B-spline curves.
/// 
/// Defines all data, that can be cached on a span of a curve.
/// The data should be recalculated in going from span to span.
/// </summary>
public ref class BSplCLib_Cache sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BSplCLib_Cache_h
public:
    Include_BSplCLib_Cache_h
#endif

public:
    BSplCLib_Cache(::BSplCLib_Cache* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BSplCLib_Cache(::BSplCLib_Cache& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BSplCLib_Cache* NativeInstance
    {
        ::BSplCLib_Cache* get()
        {
            return static_cast<::BSplCLib_Cache*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor, prepares data structures for caching values on a 2d curve.
    /// \param theDegree     degree of the curve
    /// \param thePeriodic   identify whether the curve is periodic
    /// \param theFlatKnots  knots of Bezier/B-spline curve (with repetitions)
    /// \param thePoles2d    array of poles of 2D curve
    /// \param theWeights    array of weights of corresponding poles
    /// </summary>
    BSplCLib_Cache(int theDegree, bool thePeriodic, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ thePoles2d, Macad::Occt::TColStd_Array1OfReal^ theWeights);
    /// <summary>
    /// Constructor, prepares data structures for caching values on a 2d curve.
    /// \param theDegree     degree of the curve
    /// \param thePeriodic   identify whether the curve is periodic
    /// \param theFlatKnots  knots of Bezier/B-spline curve (with repetitions)
    /// \param thePoles2d    array of poles of 2D curve
    /// \param theWeights    array of weights of corresponding poles
    /// </summary>
    BSplCLib_Cache(int theDegree, bool thePeriodic, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ thePoles2d);
    /// <summary>
    /// Constructor, prepares data structures for caching values on a 3d curve.
    /// \param theDegree     degree of the curve
    /// \param thePeriodic   identify whether the curve is periodic
    /// \param theFlatKnots  knots of Bezier/B-spline curve (with repetitions)
    /// \param thePoles      array of poles of 3D curve
    /// \param theWeights    array of weights of corresponding poles
    /// </summary>
    BSplCLib_Cache(int theDegree, bool thePeriodic, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ thePoles, Macad::Occt::TColStd_Array1OfReal^ theWeights);
    /// <summary>
    /// Constructor, prepares data structures for caching values on a 3d curve.
    /// \param theDegree     degree of the curve
    /// \param thePeriodic   identify whether the curve is periodic
    /// \param theFlatKnots  knots of Bezier/B-spline curve (with repetitions)
    /// \param thePoles      array of poles of 3D curve
    /// \param theWeights    array of weights of corresponding poles
    /// </summary>
    BSplCLib_Cache(int theDegree, bool thePeriodic, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ thePoles);
    /// <summary>
    /// Verifies validity of the cache using flat parameter of the point
    /// \param theParameter parameter of the point placed in the span
    /// </summary>
    bool IsCacheValid(double theParameter);
    /// <summary>
    /// Recomputes the cache data for 2D curves. Does not verify validity of the cache
    /// \param theParameter  the value on the knot's axis to identify the span
    /// \param theFlatKnots  knots of Bezier/B-spline curve (with repetitions)
    /// \param thePoles2d    array of poles of 2D curve
    /// \param theWeights    array of weights of corresponding poles
    /// </summary>
    void BuildCache(double theParameter, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ thePoles2d, Macad::Occt::TColStd_Array1OfReal^ theWeights);
    /// <summary>
    /// Recomputes the cache data for 3D curves. Does not verify validity of the cache
    /// \param theParameter  the value on the knot's axis to identify the span
    /// \param theFlatKnots  knots of Bezier/B-spline curve (with repetitions)
    /// \param thePoles      array of poles of 3D curve
    /// \param theWeights    array of weights of corresponding poles
    /// </summary>
    void BuildCache(double theParameter, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ thePoles, Macad::Occt::TColStd_Array1OfReal^ theWeights);
    /// <summary>
    /// Recomputes the cache data for 3D curves. Does not verify validity of the cache
    /// \param theParameter  the value on the knot's axis to identify the span
    /// \param theFlatKnots  knots of Bezier/B-spline curve (with repetitions)
    /// \param thePoles      array of poles of 3D curve
    /// \param theWeights    array of weights of corresponding poles
    /// </summary>
    void BuildCache(double theParameter, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ thePoles);
    /// <summary>
    /// Calculates the point on the curve in the specified parameter
    /// \param[in]  theParameter parameter of calculation of the value
    /// \param[out] thePoint     the result of calculation (the point on the curve)
    /// </summary>
    void D0(double theParameter, Macad::Occt::Pnt2d% thePoint);
    void D0(double theParameter, Macad::Occt::Pnt% thePoint);
    /// <summary>
    /// Calculates the point on the curve and its first derivative in the specified parameter
    /// \param[in]  theParameter parameter of calculation of the value
    /// \param[out] thePoint     the result of calculation (the point on the curve)
    /// \param[out] theTangent   tangent vector (first derivatives) for the curve in the calculated
    /// point
    /// </summary>
    void D1(double theParameter, Macad::Occt::Pnt2d% thePoint, Macad::Occt::Vec2d% theTangent);
    void D1(double theParameter, Macad::Occt::Pnt% thePoint, Macad::Occt::Vec% theTangent);
    /// <summary>
    /// Calculates the point on the curve and two derivatives in the specified parameter
    /// \param[in]  theParameter parameter of calculation of the value
    /// \param[out] thePoint     the result of calculation (the point on the curve)
    /// \param[out] theTangent   tangent vector (1st derivatives) for the curve in the calculated
    /// point \param[out] theCurvature curvature vector (2nd derivatives) for the curve in the
    /// calculated point
    /// </summary>
    void D2(double theParameter, Macad::Occt::Pnt2d% thePoint, Macad::Occt::Vec2d% theTangent, Macad::Occt::Vec2d% theCurvature);
    void D2(double theParameter, Macad::Occt::Pnt% thePoint, Macad::Occt::Vec% theTangent, Macad::Occt::Vec% theCurvature);
    /// <summary>
    /// Calculates the point on the curve and three derivatives in the specified parameter
    /// \param[in]  theParameter parameter of calculation of the value
    /// \param[out] thePoint     the result of calculation (the point on the curve)
    /// \param[out] theTangent   tangent vector (1st derivatives) for the curve in the calculated
    /// point \param[out] theCurvature curvature vector (2nd derivatives) for the curve in the
    /// calculated point \param[out] theTorsion   second curvature vector (3rd derivatives) for the
    /// curve in the calculated point
    /// </summary>
    void D3(double theParameter, Macad::Occt::Pnt2d% thePoint, Macad::Occt::Vec2d% theTangent, Macad::Occt::Vec2d% theCurvature, Macad::Occt::Vec2d% theTorsion);
    void D3(double theParameter, Macad::Occt::Pnt% thePoint, Macad::Occt::Vec% theTangent, Macad::Occt::Vec% theCurvature, Macad::Occt::Vec% theTorsion);
    static Macad::Occt::BSplCLib_Cache^ CreateDowncasted(::BSplCLib_Cache* instance);
}; // class BSplCLib_Cache

}; // namespace Occt
}; // namespace Macad
