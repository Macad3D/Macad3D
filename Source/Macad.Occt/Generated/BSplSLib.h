// Generated wrapper code for package BSplSLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BSplSLib_EvaluatorFunction
//---------------------------------------------------------------------
public ref class BSplSLib_EvaluatorFunction
    : public Macad::Occt::BaseClass<::BSplSLib_EvaluatorFunction>
{

#ifdef Include_BSplSLib_EvaluatorFunction_h
public:
    Include_BSplSLib_EvaluatorFunction_h
#endif

public:
    BSplSLib_EvaluatorFunction(::BSplSLib_EvaluatorFunction* nativeInstance)
        : Macad::Occt::BaseClass<::BSplSLib_EvaluatorFunction>( nativeInstance, true )
    {}

    BSplSLib_EvaluatorFunction(::BSplSLib_EvaluatorFunction& nativeInstance)
        : Macad::Occt::BaseClass<::BSplSLib_EvaluatorFunction>( &nativeInstance, false )
    {}

    property ::BSplSLib_EvaluatorFunction* NativeInstance
    {
        ::BSplSLib_EvaluatorFunction* get()
        {
            return static_cast<::BSplSLib_EvaluatorFunction*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    BSplSLib_EvaluatorFunction();
    /// <summary>
    /// Function evaluation method to be defined by descendant
    /// </summary>
    void Evaluate(int theDerivativeRequest, double theUParameter, double theVParameter, double% theResult, int% theErrorCode);
}; // class BSplSLib_EvaluatorFunction

//---------------------------------------------------------------------
//  Class  BSplSLib
//---------------------------------------------------------------------
/// <summary>
/// BSplSLib   B-spline surface Library
/// This  package provides   an  implementation  of  geometric
/// functions for rational and non rational, periodic  and non
/// periodic B-spline surface computation.
/// 
/// this package uses   the  multi-dimensions splines  methods
/// provided in the package BSplCLib.
/// 
/// In this package the B-spline surface is defined with :
/// . its control points :  Array2OfPnt     Poles
/// . its weights        :  Array2OfReal    Weights
/// . its knots and their multiplicity in the two parametric
/// direction U and V  :  Array1OfReal    UKnots, VKnots and
/// Array1OfInteger UMults, VMults.
/// . the degree of the normalized Spline functions :
/// UDegree, VDegree
/// 
/// . the Booleans URational, VRational to know if the weights
/// are constant in the U or V direction.
/// 
/// . the Booleans UPeriodic,   VRational  to know if the  the
/// surface is periodic in the U or V direction.
/// 
/// Warnings : The  bounds of UKnots  and UMults should be the
/// same, the bounds of VKnots and VMults should be  the same,
/// the bounds of Poles and Weights should be the same.
/// 
/// The Control points representation is :
/// Poles(Uorigin,Vorigin) ...................Poles(Uorigin,Vend)
/// .                                     .
/// .                                     .
/// Poles(Uend, Vorigin) .....................Poles(Uend, Vend)
/// 
/// For  the double array  the row indice   corresponds to the
/// parametric U direction  and the columns indice corresponds
/// to the parametric V direction.
/// 
/// Note: weight and multiplicity arrays can be passed by pointer for
/// some functions so that NULL pointer is valid.
/// That means no weights/no multiplicities passed.
/// 
/// KeyWords :
/// B-spline surface, Functions, Library
/// 
/// References :
/// . A survey of curve and surface methods in CADG Wolfgang BOHM
/// CAGD 1 (1984)
/// . On de Boor-like algorithms and blossoming Wolfgang BOEHM
/// cagd 5 (1988)
/// . Blossoming and knot insertion algorithms for B-spline curves
/// Ronald N. GOLDMAN
/// . Modelisation des surfaces en CAO, Henri GIAUME Peugeot SA
/// . Curves and Surfaces for Computer Aided Geometric Design,
/// a practical guide Gerald Farin
/// </summary>
public ref class BSplSLib sealed
    : public Macad::Occt::BaseClass<::BSplSLib>
{

#ifdef Include_BSplSLib_h
public:
    Include_BSplSLib_h
#endif

public:
    BSplSLib(::BSplSLib* nativeInstance)
        : Macad::Occt::BaseClass<::BSplSLib>( nativeInstance, true )
    {}

    BSplSLib(::BSplSLib& nativeInstance)
        : Macad::Occt::BaseClass<::BSplSLib>( &nativeInstance, false )
    {}

    property ::BSplSLib* NativeInstance
    {
        ::BSplSLib* get()
        {
            return static_cast<::BSplSLib*>(_NativeInstance);
        }
    }

public:
    BSplSLib();
    /// <summary>
    /// this is a one dimensional function
    /// typedef  void (*EvaluatorFunction)  (
    /// Standard_Integer     // Derivative Request
    /// Standard_Real    *   // StartEnd[2][2]
    /// //  [0] = U
    /// //  [1] = V
    /// //        [0] = start
    /// //        [1] = end
    /// Standard_Real        // UParameter
    /// Standard_Real        // VParamerer
    /// Standard_Real    &   // Result
    /// Standard_Integer &) ;// Error Code
    /// serves to multiply a given vectorial BSpline by a function
    /// Computes  the     derivatives   of  a    ratio  of
    /// two-variables functions  x(u,v) / w(u,v) at orders
    /// <N,M>,    x(u,v)    is   a  vector in    dimension
    /// <3>.
    /// 
    /// <Ders> is  an array  containing the values  of the
    /// input derivatives from 0  to Min(<N>,<UDeg>), 0 to
    /// Min(<M>,<VDeg>).    For orders    higher      than
    /// <UDeg,VDeg>  the  input derivatives are assumed to
    /// be 0.
    /// 
    /// The <Ders> is a 2d array and the  dimension of the
    /// lines is always (<VDeg>+1) * (<3>+1), even
    /// if   <N> is smaller  than  <Udeg> (the derivatives
    /// higher than <N> are not used).
    /// 
    /// Content of <Ders> :
    /// 
    /// x(i,j)[k] means :  the composant  k of x derivated
    /// (i) times in u and (j) times in v.
    /// 
    /// ... First line ...
    /// 
    /// x[1],x[2],...,x[3],w
    /// x(0,1)[1],...,x(0,1)[3],w(1,0)
    /// ...
    /// x(0,VDeg)[1],...,x(0,VDeg)[3],w(0,VDeg)
    /// 
    /// ... Then second line ...
    /// 
    /// x(1,0)[1],...,x(1,0)[3],w(1,0)
    /// x(1,1)[1],...,x(1,1)[3],w(1,1)
    /// ...
    /// x(1,VDeg)[1],...,x(1,VDeg)[3],w(1,VDeg)
    /// 
    /// ...
    /// 
    /// ... Last line ...
    /// 
    /// x(UDeg,0)[1],...,x(UDeg,0)[3],w(UDeg,0)
    /// x(UDeg,1)[1],...,x(UDeg,1)[3],w(UDeg,1)
    /// ...
    /// x(Udeg,VDeg)[1],...,x(UDeg,VDeg)[3],w(Udeg,VDeg)
    /// 
    /// If <All>  is false, only  the derivative  at order
    /// <N,M> is computed.  <RDers> is an  array of length
    /// 3 which will contain the result :
    /// 
    /// x(1)/w , x(2)/w ,  ... derivated <N> <M> times
    /// 
    /// If   <All>    is  true  multiples  derivatives are
    /// computed. All the  derivatives (i,j) with 0 <= i+j
    /// <= Max(N,M) are  computed.  <RDers> is an array of
    /// length 3 *  (<N>+1)  * (<M>+1) which  will
    /// contains :
    /// 
    /// x(1)/w , x(2)/w ,  ...
    /// x(1)/w , x(2)/w ,  ... derivated <0,1> times
    /// x(1)/w , x(2)/w ,  ... derivated <0,2> times
    /// ...
    /// x(1)/w , x(2)/w ,  ... derivated <0,N> times
    /// 
    /// x(1)/w , x(2)/w ,  ... derivated <1,0> times
    /// x(1)/w , x(2)/w ,  ... derivated <1,1> times
    /// ...
    /// x(1)/w , x(2)/w ,  ... derivated <1,N> times
    /// 
    /// x(1)/w , x(2)/w ,  ... derivated <N,0> times
    /// ....
    /// Warning: <RDers> must be dimensioned properly.
    /// </summary>
    static void RationalDerivative(int UDeg, int VDeg, int N, int M, double% Ders, double% RDers, bool All);
    /// <summary>
    /// this is a one dimensional function
    /// typedef  void (*EvaluatorFunction)  (
    /// Standard_Integer     // Derivative Request
    /// Standard_Real    *   // StartEnd[2][2]
    /// //  [0] = U
    /// //  [1] = V
    /// //        [0] = start
    /// //        [1] = end
    /// Standard_Real        // UParameter
    /// Standard_Real        // VParamerer
    /// Standard_Real    &   // Result
    /// Standard_Integer &) ;// Error Code
    /// serves to multiply a given vectorial BSpline by a function
    /// Computes  the     derivatives   of  a    ratio  of
    /// two-variables functions  x(u,v) / w(u,v) at orders
    /// <N,M>,    x(u,v)    is   a  vector in    dimension
    /// <3>.
    /// 
    /// <Ders> is  an array  containing the values  of the
    /// input derivatives from 0  to Min(<N>,<UDeg>), 0 to
    /// Min(<M>,<VDeg>).    For orders    higher      than
    /// <UDeg,VDeg>  the  input derivatives are assumed to
    /// be 0.
    /// 
    /// The <Ders> is a 2d array and the  dimension of the
    /// lines is always (<VDeg>+1) * (<3>+1), even
    /// if   <N> is smaller  than  <Udeg> (the derivatives
    /// higher than <N> are not used).
    /// 
    /// Content of <Ders> :
    /// 
    /// x(i,j)[k] means :  the composant  k of x derivated
    /// (i) times in u and (j) times in v.
    /// 
    /// ... First line ...
    /// 
    /// x[1],x[2],...,x[3],w
    /// x(0,1)[1],...,x(0,1)[3],w(1,0)
    /// ...
    /// x(0,VDeg)[1],...,x(0,VDeg)[3],w(0,VDeg)
    /// 
    /// ... Then second line ...
    /// 
    /// x(1,0)[1],...,x(1,0)[3],w(1,0)
    /// x(1,1)[1],...,x(1,1)[3],w(1,1)
    /// ...
    /// x(1,VDeg)[1],...,x(1,VDeg)[3],w(1,VDeg)
    /// 
    /// ...
    /// 
    /// ... Last line ...
    /// 
    /// x(UDeg,0)[1],...,x(UDeg,0)[3],w(UDeg,0)
    /// x(UDeg,1)[1],...,x(UDeg,1)[3],w(UDeg,1)
    /// ...
    /// x(Udeg,VDeg)[1],...,x(UDeg,VDeg)[3],w(Udeg,VDeg)
    /// 
    /// If <All>  is false, only  the derivative  at order
    /// <N,M> is computed.  <RDers> is an  array of length
    /// 3 which will contain the result :
    /// 
    /// x(1)/w , x(2)/w ,  ... derivated <N> <M> times
    /// 
    /// If   <All>    is  true  multiples  derivatives are
    /// computed. All the  derivatives (i,j) with 0 <= i+j
    /// <= Max(N,M) are  computed.  <RDers> is an array of
    /// length 3 *  (<N>+1)  * (<M>+1) which  will
    /// contains :
    /// 
    /// x(1)/w , x(2)/w ,  ...
    /// x(1)/w , x(2)/w ,  ... derivated <0,1> times
    /// x(1)/w , x(2)/w ,  ... derivated <0,2> times
    /// ...
    /// x(1)/w , x(2)/w ,  ... derivated <0,N> times
    /// 
    /// x(1)/w , x(2)/w ,  ... derivated <1,0> times
    /// x(1)/w , x(2)/w ,  ... derivated <1,1> times
    /// ...
    /// x(1)/w , x(2)/w ,  ... derivated <1,N> times
    /// 
    /// x(1)/w , x(2)/w ,  ... derivated <N,0> times
    /// ....
    /// Warning: <RDers> must be dimensioned properly.
    /// </summary>
    static void RationalDerivative(int UDeg, int VDeg, int N, int M, double% Ders, double% RDers);
    static void D0(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% P);
    static void D1(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int Degree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
    static void D2(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
    static void D3(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
    static void DN(double U, double V, int Nu, int Nv, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Vec% Vn);
    /// <summary>
    /// Computes the  poles and weights of an isoparametric
    /// curve at parameter  <Param> (UIso if <IsU> is True,
    /// VIso  else).
    /// </summary>
    static void Iso(double Param, bool IsU, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CWeights);
    /// <summary>
    /// Reverses the array of poles. Last is the Index of
    /// the new first Row( Col) of Poles.
    /// On  a  non periodic surface Last is
    /// Poles.Upper().
    /// On a periodic curve last is
    /// (number of flat knots - degree - 1)
    /// or
    /// (sum of multiplicities(but  for the last) + degree
    /// - 1)
    /// </summary>
    static void Reverse(Macad::Occt::TColgp_Array2OfPnt^ Poles, int Last, bool UDirection);
    /// <summary>
    /// Makes an homogeneous  evaluation of Poles and Weights
    /// any and returns in P the Numerator value and
    /// in W the Denominator value if Weights are present
    /// otherwise returns 1.0e0
    /// </summary>
    static void HomogeneousD0(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, double% W, Macad::Occt::Pnt% P);
    /// <summary>
    /// Makes an homogeneous  evaluation of Poles and Weights
    /// any and returns in P the Numerator value and
    /// in W the Denominator value if Weights are present
    /// otherwise returns 1.0e0
    /// </summary>
    static void HomogeneousD1(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% N, Macad::Occt::Vec% Nu, Macad::Occt::Vec% Nv, double% D, double% Du, double% Dv);
    /// <summary>
    /// Reverses the array of weights.
    /// </summary>
    static void Reverse(Macad::Occt::TColStd_Array2OfReal^ Weights, int Last, bool UDirection);
    /// <summary>
    /// Returns False if all the weights  of the  array <Weights>
    /// in the area [I1,I2] * [J1,J2] are  identic.
    /// Epsilon  is used for comparing  weights.
    /// If Epsilon  is 0. the  Epsilon of the first weight is used.
    /// </summary>
    static bool IsRational(Macad::Occt::TColStd_Array2OfReal^ Weights, int I1, int I2, int J1, int J2, double Epsilon);
    /// <summary>
    /// Returns False if all the weights  of the  array <Weights>
    /// in the area [I1,I2] * [J1,J2] are  identic.
    /// Epsilon  is used for comparing  weights.
    /// If Epsilon  is 0. the  Epsilon of the first weight is used.
    /// </summary>
    static bool IsRational(Macad::Occt::TColStd_Array2OfReal^ Weights, int I1, int I2, int J1, int J2);
    /// <summary>
    /// Copy in FP the coordinates of the poles.
    /// </summary>
    static void SetPoles(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ FP, bool UDirection);
    /// <summary>
    /// Copy in FP the coordinates of the poles.
    /// </summary>
    static void SetPoles(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FP, bool UDirection);
    /// <summary>
    /// Get from FP the coordinates of the poles.
    /// </summary>
    static void GetPoles(Macad::Occt::TColStd_Array1OfReal^ FP, Macad::Occt::TColgp_Array2OfPnt^ Poles, bool UDirection);
    /// <summary>
    /// Get from FP the coordinates of the poles.
    /// </summary>
    static void GetPoles(Macad::Occt::TColStd_Array1OfReal^ FP, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, bool UDirection);
    /// <summary>
    /// Find the new poles which allows an old point (with a
    /// given u,v  as parameters)  to  reach a  new position
    /// UIndex1,UIndex2 indicate the  range of poles we can
    /// move for U
    /// (1, UNbPoles-1) or (2, UNbPoles) -> no constraint
    /// for one side in U
    /// (2, UNbPoles-1)   -> the ends are enforced for U
    /// don't enter (1,NbPoles) and (1,VNbPoles)
    /// -> error: rigid move
    /// if problem in BSplineBasis calculation, no change
    /// for the curve  and
    /// UFirstIndex, VLastIndex = 0
    /// VFirstIndex, VLastIndex = 0
    /// </summary>
    static void MovePoint(double U, double V, Macad::Occt::Vec Displ, int UIndex1, int UIndex2, int VIndex1, int VIndex2, int UDegree, int VDegree, bool Rational, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, int% UFirstIndex, int% ULastIndex, int% VFirstIndex, int% VLastIndex, Macad::Occt::TColgp_Array2OfPnt^ NewPoles);
    static void InsertKnots(bool UDirection, int Degree, bool Periodic, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon, bool Add);
    static void InsertKnots(bool UDirection, int Degree, bool Periodic, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon);
    static bool RemoveKnot(bool UDirection, int Index, int Mult, int Degree, bool Periodic, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Tolerance);
    static void IncreaseDegree(bool UDirection, int Degree, int NewDegree, bool Periodic, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults);
    static void Unperiodize(bool UDirection, int Degree, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfInteger^ NewMults, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights);
    /// <summary>
    /// Used as argument for a non rational curve.
    /// </summary>
    static Macad::Occt::TColStd_Array2OfReal^ NoWeights();
    /// <summary>
    /// Perform the evaluation of the Taylor expansion
    /// of the Bspline normalized between 0 and 1.
    /// If rational computes the homogeneous Taylor expansion
    /// for the numerator and stores it in CachePoles
    /// </summary>
    static void BuildCache(double U, double V, double USpanDomain, double VSpanDomain, bool UPeriodicFlag, bool VPeriodicFlag, int UDegree, int VDegree, int UIndex, int VIndex, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColgp_Array2OfPnt^ CachePoles, Macad::Occt::TColStd_Array2OfReal^ CacheWeights);
    /// <summary>
    /// Perform the evaluation of the Taylor expansion
    /// of the Bspline normalized between 0 and 1.
    /// Structure of result optimized for BSplSLib_Cache.
    /// </summary>
    static void BuildCache(double theU, double theV, double theUSpanDomain, double theVSpanDomain, bool theUPeriodic, bool theVPeriodic, int theUDegree, int theVDegree, int theUIndex, int theVIndex, Macad::Occt::TColStd_Array1OfReal^ theUFlatKnots, Macad::Occt::TColStd_Array1OfReal^ theVFlatKnots, Macad::Occt::TColgp_Array2OfPnt^ thePoles, Macad::Occt::TColStd_Array2OfReal^ theWeights, Macad::Occt::TColStd_Array2OfReal^ theCacheArray);
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
    static void CacheD0(double U, double V, int UDegree, int VDegree, double UCacheParameter, double VCacheParameter, double USpanLenght, double VSpanLength, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point);
    /// <summary>
    /// Calls CacheD0 for Bezier Surfaces Arrays computed with
    /// the method PolesCoefficients.
    /// Warning: To be used for BezierSurfaces ONLY!!!
    /// </summary>
    static void CoefsD0(double U, double V, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point);
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
    static void CacheD1(double U, double V, int UDegree, int VDegree, double UCacheParameter, double VCacheParameter, double USpanLenght, double VSpanLength, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% VecU, Macad::Occt::Vec% VecV);
    /// <summary>
    /// Calls CacheD0 for Bezier Surfaces Arrays computed with
    /// the method PolesCoefficients.
    /// Warning: To be used for BezierSurfaces ONLY!!!
    /// </summary>
    static void CoefsD1(double U, double V, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% VecU, Macad::Occt::Vec% VecV);
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
    static void CacheD2(double U, double V, int UDegree, int VDegree, double UCacheParameter, double VCacheParameter, double USpanLenght, double VSpanLength, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% VecU, Macad::Occt::Vec% VecV, Macad::Occt::Vec% VecUU, Macad::Occt::Vec% VecUV, Macad::Occt::Vec% VecVV);
    /// <summary>
    /// Calls CacheD0 for Bezier Surfaces Arrays computed with
    /// the method PolesCoefficients.
    /// Warning: To be used for BezierSurfaces ONLY!!!
    /// </summary>
    static void CoefsD2(double U, double V, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% VecU, Macad::Occt::Vec% VecV, Macad::Occt::Vec% VecUU, Macad::Occt::Vec% VecUV, Macad::Occt::Vec% VecVV);
    /// <summary>
    /// Warning! To be used for BezierSurfaces ONLY!!!
    /// </summary>
    static void PolesCoefficients(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColgp_Array2OfPnt^ CachePoles);
    /// <summary>
    /// Encapsulation   of  BuildCache    to   perform   the
    /// evaluation  of the Taylor expansion for beziersurfaces
    /// at parameters 0.,0.;
    /// Warning: To be used for BezierSurfaces ONLY!!!
    /// </summary>
    static void PolesCoefficients(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColgp_Array2OfPnt^ CachePoles, Macad::Occt::TColStd_Array2OfReal^ CacheWeights);
    /// <summary>
    /// Given a tolerance in 3D space returns two
    /// tolerances, one in U one in V such that for
    /// all (u1,v1) and (u0,v0) in the domain of
    /// the surface f(u,v)  we have :
    /// | u1 - u0 | < UTolerance and
    /// | v1 - v0 | < VTolerance
    /// we have |f (u1,v1) - f (u0,v0)| < Tolerance3D
    /// </summary>
    static void Resolution(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, double Tolerance3D, double% UTolerance, double% VTolerance);
    /// <summary>
    /// Performs the interpolation of the data points given in
    /// the   Poles       array      in   the      form
    /// [1,...,RL][1,...,RC][1...PolesDimension]    .    The
    /// ColLength CL and the Length of UParameters must be the
    /// same. The length of VFlatKnots is VDegree + CL + 1.
    /// 
    /// The  RowLength RL and the Length of VParameters must be
    /// the  same. The length of VFlatKnots is Degree + RL + 1.
    /// 
    /// Warning: the method used  to do that  interpolation
    /// is gauss  elimination  WITHOUT pivoting.  Thus if  the
    /// diagonal is not  dominant  there is no guarantee  that
    /// the   algorithm will    work.  Nevertheless  for Cubic
    /// interpolation  at knots or interpolation at Scheonberg
    /// points  the method   will work.  The  InversionProblem
    /// will  report 0 if there   was no problem  else it will
    /// give the index of the faulty pivot
    /// </summary>
    static void Interpolate(int UDegree, int VDegree, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, Macad::Occt::TColStd_Array1OfReal^ UParameters, Macad::Occt::TColStd_Array1OfReal^ VParameters, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, int% InversionProblem);
    /// <summary>
    /// Performs the interpolation of the data points given in
    /// the  Poles array.
    /// The  ColLength CL and the Length of UParameters must be
    /// the  same. The length of VFlatKnots is VDegree + CL + 1.
    /// 
    /// The  RowLength RL and the Length of VParameters must be
    /// the  same. The length of VFlatKnots is Degree + RL + 1.
    /// 
    /// Warning: the method used  to do that  interpolation
    /// is gauss  elimination  WITHOUT pivoting.  Thus if  the
    /// diagonal is not  dominant  there is no guarantee  that
    /// the   algorithm will    work.  Nevertheless  for Cubic
    /// interpolation  at knots or interpolation at Scheonberg
    /// points  the method   will work.  The  InversionProblem
    /// will  report 0 if there   was no problem  else it will
    /// give the index of the faulty pivot
    /// </summary>
    static void Interpolate(int UDegree, int VDegree, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, Macad::Occt::TColStd_Array1OfReal^ UParameters, Macad::Occt::TColStd_Array1OfReal^ VParameters, Macad::Occt::TColgp_Array2OfPnt^ Poles, int% InversionProblem);
    /// <summary>
    /// this will multiply  a given BSpline numerator  N(u,v)
    /// and    denominator    D(u,v)  defined     by   its
    /// U/VBSplineDegree   and    U/VBSplineKnots,     and
    /// U/VMults. Its Poles  and Weights are arrays which are
    /// coded   as      array2      of      the    form
    /// [1..UNumPoles][1..VNumPoles]  by  a function a(u,v)
    /// which  is assumed  to satisfy    the following :  1.
    /// a(u,v)  * N(u,v) and a(u,v) *  D(u,v)  is a polynomial
    /// BSpline that can be expressed exactly as a BSpline of
    /// degree U/VNewDegree  on  the knots U/VFlatKnots 2. the range
    /// of a(u,v) is   the   same as  the range   of  N(u,v)
    /// or D(u,v)
    /// ---Warning:  it is   the caller's  responsibility  to
    /// insure that conditions 1. and  2. above are satisfied
    /// : no  check  whatsoever is made   in  this method  --
    /// theStatus will  return 0 if  OK else it will return  the
    /// pivot index -- of the   matrix that was inverted to
    /// compute the multiplied -- BSpline  : the method used
    /// is  interpolation   at Schoenenberg   --  points  of
    /// a(u,v)* N(u,v) and a(u,v) * D(u,v)
    /// theStatus will return 0 if OK else it will return the pivot index
    /// of the matrix that was inverted to compute the multiplied
    /// BSpline : the method used is interpolation at Schoenenberg
    /// points of a(u,v)*F(u,v)
    /// --
    /// </summary>
    static void FunctionMultiply(Macad::Occt::BSplSLib_EvaluatorFunction^ Function, int UBSplineDegree, int VBSplineDegree, Macad::Occt::TColStd_Array1OfReal^ UBSplineKnots, Macad::Occt::TColStd_Array1OfReal^ VBSplineKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, int UNewDegree, int VNewDegree, Macad::Occt::TColgp_Array2OfPnt^ NewNumerator, Macad::Occt::TColStd_Array2OfReal^ NewDenominator, int% theStatus);
}; // class BSplSLib

//---------------------------------------------------------------------
//  Class  BSplSLib_Cache
//---------------------------------------------------------------------
/// <summary>
/// \brief A cache class for Bezier and B-spline surfaces.
/// 
/// Defines all data, that can be cached on a span of the surface.
/// The data should be recalculated in going from span to span.
/// </summary>
public ref class BSplSLib_Cache sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_BSplSLib_Cache_h
public:
    Include_BSplSLib_Cache_h
#endif

public:
    BSplSLib_Cache(::BSplSLib_Cache* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    BSplSLib_Cache(::BSplSLib_Cache& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::BSplSLib_Cache* NativeInstance
    {
        ::BSplSLib_Cache* get()
        {
            return static_cast<::BSplSLib_Cache*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor for caching of the span for the surface
    /// \param theDegreeU    degree along the first parameter (U) of the surface
    /// \param thePeriodicU  identify the surface is periodical along U axis
    /// \param theFlatKnotsU knots of the surface (with repetition) along U axis
    /// \param theDegreeV    degree along the second parameter (V) of the surface
    /// \param thePeriodicV  identify the surface is periodical along V axis
    /// \param theFlatKnotsV knots of the surface (with repetition) along V axis
    /// \param theWeights    array of weights of corresponding poles
    /// </summary>
    BSplSLib_Cache(int theDegreeU, bool thePeriodicU, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsU, int theDegreeV, bool thePeriodicV, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsV, Macad::Occt::TColStd_Array2OfReal^ theWeights);
    /// <summary>
    /// Constructor for caching of the span for the surface
    /// \param theDegreeU    degree along the first parameter (U) of the surface
    /// \param thePeriodicU  identify the surface is periodical along U axis
    /// \param theFlatKnotsU knots of the surface (with repetition) along U axis
    /// \param theDegreeV    degree along the second parameter (V) of the surface
    /// \param thePeriodicV  identify the surface is periodical along V axis
    /// \param theFlatKnotsV knots of the surface (with repetition) along V axis
    /// \param theWeights    array of weights of corresponding poles
    /// </summary>
    BSplSLib_Cache(int theDegreeU, bool thePeriodicU, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsU, int theDegreeV, bool thePeriodicV, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsV);
    /// <summary>
    /// Verifies validity of the cache using parameters of the point
    /// \param theParameterU  first parameter of the point placed in the span
    /// \param theParameterV  second parameter of the point placed in the span
    /// </summary>
    bool IsCacheValid(double theParameterU, double theParameterV);
    /// <summary>
    /// Recomputes the cache data. Does not verify validity of the cache
    /// \param theParameterU  the parametric value on the U axis to identify the span
    /// \param theParameterV  the parametric value on the V axis to identify the span
    /// \param theDegreeU     degree along U axis
    /// \param thePeriodicU   identify whether the surface is periodic along U axis
    /// \param theFlatKnotsU  flat knots of the surface along U axis
    /// \param theDegreeV     degree along V axis
    /// \param thePeriodicV   identify whether the surface is periodic along V axis
    /// \param theFlatKnotsV  flat knots of the surface along V axis
    /// \param thePoles       array of poles of the surface
    /// \param theWeights     array of weights of corresponding poles
    /// </summary>
    void BuildCache(double theParameterU, double theParameterV, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsU, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsV, Macad::Occt::TColgp_Array2OfPnt^ thePoles, Macad::Occt::TColStd_Array2OfReal^ theWeights);
    /// <summary>
    /// Recomputes the cache data. Does not verify validity of the cache
    /// \param theParameterU  the parametric value on the U axis to identify the span
    /// \param theParameterV  the parametric value on the V axis to identify the span
    /// \param theDegreeU     degree along U axis
    /// \param thePeriodicU   identify whether the surface is periodic along U axis
    /// \param theFlatKnotsU  flat knots of the surface along U axis
    /// \param theDegreeV     degree along V axis
    /// \param thePeriodicV   identify whether the surface is periodic along V axis
    /// \param theFlatKnotsV  flat knots of the surface along V axis
    /// \param thePoles       array of poles of the surface
    /// \param theWeights     array of weights of corresponding poles
    /// </summary>
    void BuildCache(double theParameterU, double theParameterV, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsU, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsV, Macad::Occt::TColgp_Array2OfPnt^ thePoles);
    /// <summary>
    /// Calculates the point on the surface for specified parameters
    /// \param[in]  theU      first parameter for calculation of the value
    /// \param[in]  theV      second parameter for calculation of the value
    /// \param[out] thePoint  the result of calculation (the point on the surface)
    /// </summary>
    void D0(double theU, double theV, Macad::Occt::Pnt% thePoint);
    /// <summary>
    /// Calculates the point on the surface and its first derivative
    /// \param[in]  theU         first parameter of calculation of the value
    /// \param[in]  theV         second parameter of calculation of the value
    /// \param[out] thePoint     the result of calculation (the point on the surface)
    /// \param[out] theTangentU  tangent vector along U axis in the calculated point
    /// \param[out] theTangentV  tangent vector along V axis in the calculated point
    /// </summary>
    void D1(double theU, double theV, Macad::Occt::Pnt% thePoint, Macad::Occt::Vec% theTangentU, Macad::Occt::Vec% theTangentV);
    /// <summary>
    /// Calculates the point on the surface and derivatives till second order
    /// \param[in]  theU            first parameter of calculation of the value
    /// \param[in]  theV            second parameter of calculation of the value
    /// \param[out] thePoint        the result of calculation (the point on the surface)
    /// \param[out] theTangentU     tangent vector along U axis in the calculated point
    /// \param[out] theTangentV     tangent vector along V axis in the calculated point
    /// \param[out] theCurvatureU   curvature vector (2nd derivative on U) along U axis
    /// \param[out] theCurvatureV   curvature vector (2nd derivative on V) along V axis
    /// \param[out] theCurvatureUV  2nd mixed derivative on U anv V
    /// </summary>
    void D2(double theU, double theV, Macad::Occt::Pnt% thePoint, Macad::Occt::Vec% theTangentU, Macad::Occt::Vec% theTangentV, Macad::Occt::Vec% theCurvatureU, Macad::Occt::Vec% theCurvatureV, Macad::Occt::Vec% theCurvatureUV);
    static Macad::Occt::BSplSLib_Cache^ CreateDowncasted(::BSplSLib_Cache* instance);
}; // class BSplSLib_Cache

}; // namespace Occt
}; // namespace Macad
