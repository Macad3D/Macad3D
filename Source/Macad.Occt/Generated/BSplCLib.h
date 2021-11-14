// Generated wrapper code for package BSplCLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  BSplCLib_KnotDistribution
//---------------------------------------------------------------------
public enum class BSplCLib_KnotDistribution
{
	BSplCLib_NonUniform = 0,
	BSplCLib_Uniform = 1
}; // enum  class BSplCLib_KnotDistribution

//---------------------------------------------------------------------
//  Enum  BSplCLib_MultDistribution
//---------------------------------------------------------------------
public enum class BSplCLib_MultDistribution
{
	BSplCLib_NonConstant = 0,
	BSplCLib_Constant = 1,
	BSplCLib_QuasiConstant = 2
}; // enum  class BSplCLib_MultDistribution

//---------------------------------------------------------------------
//  Class  BSplCLib_CacheParams
//---------------------------------------------------------------------
public ref class BSplCLib_CacheParams sealed : public BaseClass<::BSplCLib_CacheParams>
{

#ifdef Include_BSplCLib_CacheParams_h
public:
	Include_BSplCLib_CacheParams_h
#endif

public:
	BSplCLib_CacheParams(::BSplCLib_CacheParams* nativeInstance)
		: BaseClass<::BSplCLib_CacheParams>( nativeInstance, true )
	{}

	BSplCLib_CacheParams(::BSplCLib_CacheParams& nativeInstance)
		: BaseClass<::BSplCLib_CacheParams>( &nativeInstance, false )
	{}

	property ::BSplCLib_CacheParams* NativeInstance
	{
		::BSplCLib_CacheParams* get()
		{
			return static_cast<::BSplCLib_CacheParams*>(_NativeInstance);
		}
	}

public:
	BSplCLib_CacheParams(int theDegree, bool thePeriodic, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots);
	double PeriodicNormalization(double theParameter);
	bool IsCacheValid(double theParameter);
	void LocateParameter(double% theParameter, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots);
}; // class BSplCLib_CacheParams

//---------------------------------------------------------------------
//  Class  BSplCLib_EvaluatorFunction
//---------------------------------------------------------------------
public ref class BSplCLib_EvaluatorFunction : public BaseClass<::BSplCLib_EvaluatorFunction>
{

#ifdef Include_BSplCLib_EvaluatorFunction_h
public:
	Include_BSplCLib_EvaluatorFunction_h
#endif

public:
	BSplCLib_EvaluatorFunction(::BSplCLib_EvaluatorFunction* nativeInstance)
		: BaseClass<::BSplCLib_EvaluatorFunction>( nativeInstance, true )
	{}

	BSplCLib_EvaluatorFunction(::BSplCLib_EvaluatorFunction& nativeInstance)
		: BaseClass<::BSplCLib_EvaluatorFunction>( &nativeInstance, false )
	{}

	property ::BSplCLib_EvaluatorFunction* NativeInstance
	{
		::BSplCLib_EvaluatorFunction* get()
		{
			return static_cast<::BSplCLib_EvaluatorFunction*>(_NativeInstance);
		}
	}

public:
	void Evaluate(int theDerivativeRequest, double theStartEnd, double theParameter, double% theResult, int% theErrorCode);
}; // class BSplCLib_EvaluatorFunction

//---------------------------------------------------------------------
//  Class  BSplCLib
//---------------------------------------------------------------------
public ref class BSplCLib sealed : public BaseClass<::BSplCLib>
{

#ifdef Include_BSplCLib_h
public:
	Include_BSplCLib_h
#endif

public:
	BSplCLib(::BSplCLib* nativeInstance)
		: BaseClass<::BSplCLib>( nativeInstance, true )
	{}

	BSplCLib(::BSplCLib& nativeInstance)
		: BaseClass<::BSplCLib>( &nativeInstance, false )
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
	BSplCLib(Macad::Occt::BSplCLib^ parameter1);
	static void Hunt(Macad::Occt::TColStd_Array1OfReal^ theArray, double theX, int% theXPos);
	static int FirstUKnotIndex(int Degree, Macad::Occt::TColStd_Array1OfInteger^ Mults);
	static int LastUKnotIndex(int Degree, Macad::Occt::TColStd_Array1OfInteger^ Mults);
	static int FlatIndex(int Degree, int Index, Macad::Occt::TColStd_Array1OfInteger^ Mults, bool Periodic);
	static void LocateParameter(int Degree, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double U, bool IsPeriodic, int FromK1, int ToK2, int% KnotIndex, double% NewU);
	static void LocateParameter(int Degree, Macad::Occt::TColStd_Array1OfReal^ Knots, double U, bool IsPeriodic, int FromK1, int ToK2, int% KnotIndex, double% NewU);
	static void LocateParameter(int Degree, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double U, bool Periodic, int% Index, double% NewU);
	static int MaxKnotMult(Macad::Occt::TColStd_Array1OfInteger^ Mults, int K1, int K2);
	static int MinKnotMult(Macad::Occt::TColStd_Array1OfInteger^ Mults, int K1, int K2);
	static int NbPoles(int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfInteger^ Mults);
	static int KnotSequenceLength(Macad::Occt::TColStd_Array1OfInteger^ Mults, int Degree, bool Periodic);
	static void KnotSequence(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ KnotSeq, bool Periodic);
	static void KnotSequence(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ KnotSeq);
	static void KnotSequence(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ KnotSeq);
	static int KnotsLength(Macad::Occt::TColStd_Array1OfReal^ KnotSeq, bool Periodic);
	static int KnotsLength(Macad::Occt::TColStd_Array1OfReal^ KnotSeq);
	static void Knots(Macad::Occt::TColStd_Array1OfReal^ KnotSeq, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, bool Periodic);
	static void Knots(Macad::Occt::TColStd_Array1OfReal^ KnotSeq, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults);
	static Macad::Occt::BSplCLib_KnotDistribution KnotForm(Macad::Occt::TColStd_Array1OfReal^ Knots, int FromK1, int ToK2);
	static Macad::Occt::BSplCLib_MultDistribution MultForm(Macad::Occt::TColStd_Array1OfInteger^ Mults, int FromK1, int ToK2);
	static void KnotAnalysis(int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ CKnots, Macad::Occt::TColStd_Array1OfInteger^ CMults, Macad::Occt::GeomAbs_BSplKnotDistribution% KnotForm, int% MaxKnotMult);
	static void Reparametrize(double U1, double U2, Macad::Occt::TColStd_Array1OfReal^ Knots);
	static void Reverse(Macad::Occt::TColStd_Array1OfReal^ Knots);
	static void Reverse(Macad::Occt::TColStd_Array1OfInteger^ Mults);
	static void Reverse(Macad::Occt::TColgp_Array1OfPnt^ Poles, int Last);
	static void Reverse(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, int Last);
	static void Reverse(Macad::Occt::TColStd_Array1OfReal^ Weights, int Last);
	static bool IsRational(Macad::Occt::TColStd_Array1OfReal^ Weights, int I1, int I2, double Epsilon);
	static bool IsRational(Macad::Occt::TColStd_Array1OfReal^ Weights, int I1, int I2);
	static int MaxDegree();
	static void Eval(double U, int Degree, double% Knots, int Dimension, double% Poles);
	static void BoorScheme(double U, int Degree, double% Knots, int Dimension, double% Poles, int Depth, int Length);
	static bool AntiBoorScheme(double U, int Degree, double% Knots, int Dimension, double% Poles, int Depth, int Length, double Tolerance);
	static void Derivative(int Degree, double% Knots, int Dimension, int Length, int Order, double% Poles);
	static void Bohm(double U, int Degree, int N, double% Knots, int Dimension, double% Poles);
	static Macad::Occt::TColStd_Array1OfReal^ NoWeights();
	static Macad::Occt::TColStd_Array1OfInteger^ NoMults();
	static void BuildKnots(int Degree, int Index, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, double% LK);
	static int PoleIndex(int Degree, int Index, bool Periodic, Macad::Occt::TColStd_Array1OfInteger^ Mults);
	static void BuildEval(int Degree, int Index, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, double% LP);
	static void BuildEval(int Degree, int Index, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, double% LP);
	static void BuildEval(int Degree, int Index, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, double% LP);
	static void BuildBoor(int Index, int Length, int Dimension, Macad::Occt::TColStd_Array1OfReal^ Poles, double% LP);
	static int BoorIndex(int Index, int Length, int Depth);
	static void GetPole(int Index, int Length, int Depth, int Dimension, double% LocPoles, int% Position, Macad::Occt::TColStd_Array1OfReal^ Pole);
	static bool PrepareInsertKnots(int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, int% NbPoles, int% NbKnots, double Epsilon, bool Add);
	static bool PrepareInsertKnots(int Degree, bool Periodic, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, int% NbPoles, int% NbKnots, double Epsilon);
	static void InsertKnots(int Degree, bool Periodic, int Dimension, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColStd_Array1OfReal^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon, bool Add);
	static void InsertKnots(int Degree, bool Periodic, int Dimension, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColStd_Array1OfReal^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon);
	static void InsertKnots(int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon, bool Add);
	static void InsertKnots(int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon);
	static void InsertKnots(int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon, bool Add);
	static void InsertKnots(int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon);
	static void InsertKnot(int UIndex, double U, int UMult, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
	static void InsertKnot(int UIndex, double U, int UMult, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
	static void RaiseMultiplicity(int KnotIndex, int Mult, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
	static void RaiseMultiplicity(int KnotIndex, int Mult, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
	static bool RemoveKnot(int Index, int Mult, int Degree, bool Periodic, int Dimension, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Tolerance);
	static bool RemoveKnot(int Index, int Mult, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Tolerance);
	static bool RemoveKnot(int Index, int Mult, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Tolerance);
	static int IncreaseDegreeCountKnots(int Degree, int NewDegree, bool Periodic, Macad::Occt::TColStd_Array1OfInteger^ Mults);
	static void IncreaseDegree(int Degree, int NewDegree, bool Periodic, int Dimension, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults);
	static void IncreaseDegree(int Degree, int NewDegree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults);
	static void IncreaseDegree(int Degree, int NewDegree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults);
	static void IncreaseDegree(int NewDegree, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
	static void IncreaseDegree(int theNewDegree, Macad::Occt::TColgp_Array1OfPnt2d^ thePoles, Macad::Occt::TColStd_Array1OfReal^ theWeights, Macad::Occt::TColgp_Array1OfPnt2d^ theNewPoles, Macad::Occt::TColStd_Array1OfReal^ theNewWeights);
	static void PrepareUnperiodize(int Degree, Macad::Occt::TColStd_Array1OfInteger^ Mults, int% NbKnots, int% NbPoles);
	static void Unperiodize(int Degree, int Dimension, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfInteger^ NewMults, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfReal^ NewPoles);
	static void Unperiodize(int Degree, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfInteger^ NewMults, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
	static void Unperiodize(int Degree, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfInteger^ NewMults, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, Macad::Occt::TColStd_Array1OfReal^ NewWeights);
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
	static void DN(double U, int N, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% P, Macad::Occt::Vec% VN);
	static void DN(double U, int N, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% VN);
	/* Method skipped due to unknown mapping: Standard_Integer EvalBsplineBasis(Standard_Integer DerivativeOrder, Standard_Integer Order, TColStd_Array1OfReal FlatKnots, Standard_Real Parameter, Standard_Integer FirstNonZeroBsplineIndex, math_Matrix BsplineBasis, Standard_Boolean isPeriodic, ) */
	/* Method skipped due to unknown mapping: Standard_Integer EvalBsplineBasis(Standard_Integer DerivativeOrder, Standard_Integer Order, TColStd_Array1OfReal FlatKnots, Standard_Real Parameter, Standard_Integer FirstNonZeroBsplineIndex, math_Matrix BsplineBasis, Standard_Boolean isPeriodic, ) */
	/* Method skipped due to unknown mapping: Standard_Integer BuildBSpMatrix(TColStd_Array1OfReal Parameters, TColStd_Array1OfInteger OrderArray, TColStd_Array1OfReal FlatKnots, Standard_Integer Degree, math_Matrix Matrix, Standard_Integer UpperBandWidth, Standard_Integer LowerBandWidth, ) */
	/* Method skipped due to unknown mapping: Standard_Integer FactorBandedMatrix(math_Matrix Matrix, Standard_Integer UpperBandWidth, Standard_Integer LowerBandWidth, Standard_Integer PivotIndexProblem, ) */
	/* Method skipped due to unknown mapping: Standard_Integer SolveBandedSystem(math_Matrix Matrix, Standard_Integer UpperBandWidth, Standard_Integer LowerBandWidth, Standard_Integer ArrayDimension, Standard_Real Array, ) */
	/* Method skipped due to unknown mapping: Standard_Integer SolveBandedSystem(math_Matrix Matrix, Standard_Integer UpperBandWidth, Standard_Integer LowerBandWidth, TColgp_Array1OfPnt2d Array, ) */
	/* Method skipped due to unknown mapping: Standard_Integer SolveBandedSystem(math_Matrix Matrix, Standard_Integer UpperBandWidth, Standard_Integer LowerBandWidth, TColgp_Array1OfPnt Array, ) */
	/* Method skipped due to unknown mapping: Standard_Integer SolveBandedSystem(math_Matrix Matrix, Standard_Integer UpperBandWidth, Standard_Integer LowerBandWidth, Standard_Boolean HomogenousFlag, Standard_Integer ArrayDimension, Standard_Real Array, Standard_Real Weights, ) */
	/* Method skipped due to unknown mapping: Standard_Integer SolveBandedSystem(math_Matrix Matrix, Standard_Integer UpperBandWidth, Standard_Integer LowerBandWidth, Standard_Boolean HomogenousFlag, TColgp_Array1OfPnt2d Array, TColStd_Array1OfReal Weights, ) */
	/* Method skipped due to unknown mapping: Standard_Integer SolveBandedSystem(math_Matrix Matrix, Standard_Integer UpperBandWidth, Standard_Integer LowerBandWidth, Standard_Boolean HomogeneousFlag, TColgp_Array1OfPnt Array, TColStd_Array1OfReal Weights, ) */
	static void MergeBSplineKnots(double Tolerance, double StartValue, double EndValue, int Degree1, Macad::Occt::TColStd_Array1OfReal^ Knots1, Macad::Occt::TColStd_Array1OfInteger^ Mults1, int Degree2, Macad::Occt::TColStd_Array1OfReal^ Knots2, Macad::Occt::TColStd_Array1OfInteger^ Mults2, int% NumPoles, Macad::Occt::TColStd_HArray1OfReal^ NewKnots, Macad::Occt::TColStd_HArray1OfInteger^ NewMults);
	static void FunctionReparameterise(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, int PolesDimension, double% Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, double% NewPoles, int% theStatus);
	static void FunctionReparameterise(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, Macad::Occt::TColStd_Array1OfReal^ NewPoles, int% theStatus);
	static void FunctionReparameterise(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, int% theStatus);
	static void FunctionReparameterise(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, int% theStatus);
	static void FunctionMultiply(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, int PolesDimension, double% Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, double% NewPoles, int% theStatus);
	static void FunctionMultiply(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, Macad::Occt::TColStd_Array1OfReal^ Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, Macad::Occt::TColStd_Array1OfReal^ NewPoles, int% theStatus);
	static void FunctionMultiply(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, int% theStatus);
	static void FunctionMultiply(Macad::Occt::BSplCLib_EvaluatorFunction^ Function, int BSplineDegree, Macad::Occt::TColStd_Array1OfReal^ BSplineFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int NewDegree, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, int% theStatus);
	static void Eval(double U, bool PeriodicFlag, int DerivativeRequest, int% ExtrapMode, int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int ArrayDimension, double% Poles, double% Result);
	static void Eval(double U, bool PeriodicFlag, int DerivativeRequest, int% ExtrapMode, int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int ArrayDimension, double% Poles, double% Weights, double% PolesResult, double% WeightsResult);
	static void Eval(double U, bool PeriodicFlag, bool HomogeneousFlag, int% ExtrapMode, int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, double% Weight);
	static void Eval(double U, bool PeriodicFlag, bool HomogeneousFlag, int% ExtrapMode, int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, double% Weight);
	static void TangExtendToConstraint(Macad::Occt::TColStd_Array1OfReal^ FlatKnots, double C1Coefficient, int NumPoles, double% Poles, int Dimension, int Degree, Macad::Occt::TColStd_Array1OfReal^ ConstraintPoint, int Continuity, bool After, int% NbPolesResult, int% NbKnotsRsult, double% KnotsResult, double% PolesResult);
	static void CacheD0(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point);
	static void CacheD0(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point);
	static void CoefsD0(double U, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point);
	static void CoefsD0(double U, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point);
	static void CacheD1(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% Vec);
	static void CacheD1(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, Macad::Occt::Vec2d% Vec);
	static void CoefsD1(double U, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% Vec);
	static void CoefsD1(double U, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, Macad::Occt::Vec2d% Vec);
	static void CacheD2(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% Vec1, Macad::Occt::Vec% Vec2);
	static void CacheD2(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, Macad::Occt::Vec2d% Vec1, Macad::Occt::Vec2d% Vec2);
	static void CoefsD2(double U, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% Vec1, Macad::Occt::Vec% Vec2);
	static void CoefsD2(double U, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, Macad::Occt::Vec2d% Vec1, Macad::Occt::Vec2d% Vec2);
	static void CacheD3(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% Vec1, Macad::Occt::Vec% Vec2, Macad::Occt::Vec% Vec3);
	static void CacheD3(double U, int Degree, double CacheParameter, double SpanLenght, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, Macad::Occt::Vec2d% Vec1, Macad::Occt::Vec2d% Vec2, Macad::Occt::Vec2d% Vec3);
	static void CoefsD3(double U, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% Vec1, Macad::Occt::Vec% Vec2, Macad::Occt::Vec% Vec3);
	static void CoefsD3(double U, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::Pnt2d% Point, Macad::Occt::Vec2d% Vec1, Macad::Occt::Vec2d% Vec2, Macad::Occt::Vec2d% Vec3);
	static void BuildCache(double U, double InverseOfSpanDomain, bool PeriodicFlag, int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColgp_Array1OfPnt^ CachePoles, Macad::Occt::TColStd_Array1OfReal^ CacheWeights);
	static void BuildCache(double U, double InverseOfSpanDomain, bool PeriodicFlag, int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColgp_Array1OfPnt2d^ CachePoles, Macad::Occt::TColStd_Array1OfReal^ CacheWeights);
	static void BuildCache(double theParameter, double theSpanDomain, bool thePeriodicFlag, int theDegree, int theSpanIndex, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ thePoles, Macad::Occt::TColStd_Array1OfReal^ theWeights, Macad::Occt::TColStd_Array2OfReal^ theCacheArray);
	static void BuildCache(double theParameter, double theSpanDomain, bool thePeriodicFlag, int theDegree, int theSpanIndex, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ thePoles, Macad::Occt::TColStd_Array1OfReal^ theWeights, Macad::Occt::TColStd_Array2OfReal^ theCacheArray);
	static void PolesCoefficients(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColgp_Array1OfPnt2d^ CachePoles);
	static void PolesCoefficients(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColgp_Array1OfPnt2d^ CachePoles, Macad::Occt::TColStd_Array1OfReal^ CacheWeights);
	static void PolesCoefficients(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColgp_Array1OfPnt^ CachePoles);
	static void PolesCoefficients(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColgp_Array1OfPnt^ CachePoles, Macad::Occt::TColStd_Array1OfReal^ CacheWeights);
	static double FlatBezierKnots(int Degree);
	static void BuildSchoenbergPoints(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters);
	static void Interpolate(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters, Macad::Occt::TColStd_Array1OfInteger^ ContactOrderArray, Macad::Occt::TColgp_Array1OfPnt^ Poles, int% InversionProblem);
	static void Interpolate(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters, Macad::Occt::TColStd_Array1OfInteger^ ContactOrderArray, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, int% InversionProblem);
	static void Interpolate(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters, Macad::Occt::TColStd_Array1OfInteger^ ContactOrderArray, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, int% InversionProblem);
	static void Interpolate(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters, Macad::Occt::TColStd_Array1OfInteger^ ContactOrderArray, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, int% InversionProblem);
	static void Interpolate(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters, Macad::Occt::TColStd_Array1OfInteger^ ContactOrderArray, int ArrayDimension, double% Poles, int% InversionProblem);
	static void Interpolate(int Degree, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColStd_Array1OfReal^ Parameters, Macad::Occt::TColStd_Array1OfInteger^ ContactOrderArray, int ArrayDimension, double% Poles, double% Weights, int% InversionProblem);
	static void MovePoint(double U, Macad::Occt::Vec2d Displ, int Index1, int Index2, int Degree, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int% FirstIndex, int% LastIndex, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles);
	static void MovePoint(double U, Macad::Occt::Vec Displ, int Index1, int Index2, int Degree, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int% FirstIndex, int% LastIndex, Macad::Occt::TColgp_Array1OfPnt^ NewPoles);
	static void MovePointAndTangent(double U, int ArrayDimension, double% Delta, double% DeltaDerivative, double Tolerance, int Degree, int StartingCondition, int EndingCondition, double% Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, double% NewPoles, int% ErrorStatus);
	static void MovePointAndTangent(double U, Macad::Occt::Vec Delta, Macad::Occt::Vec DeltaDerivative, double Tolerance, int Degree, int StartingCondition, int EndingCondition, Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColgp_Array1OfPnt^ NewPoles, int% ErrorStatus);
	static void MovePointAndTangent(double U, Macad::Occt::Vec2d Delta, Macad::Occt::Vec2d DeltaDerivative, double Tolerance, int Degree, int StartingCondition, int EndingCondition, Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ NewPoles, int% ErrorStatus);
	static void Resolution(double% PolesArray, int ArrayDimension, int NumPoles, Macad::Occt::TColStd_Array1OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int Degree, double Tolerance3D, double% UTolerance);
	static void Resolution(Macad::Occt::TColgp_Array1OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, int NumPoles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int Degree, double Tolerance3D, double% UTolerance);
	static void Resolution(Macad::Occt::TColgp_Array1OfPnt2d^ Poles, Macad::Occt::TColStd_Array1OfReal^ Weights, int NumPoles, Macad::Occt::TColStd_Array1OfReal^ FlatKnots, int Degree, double Tolerance3D, double% UTolerance);
}; // class BSplCLib

//---------------------------------------------------------------------
//  Class  BSplCLib_Cache
//---------------------------------------------------------------------
public ref class BSplCLib_Cache sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::BSplCLib_Cache^ CreateDowncasted(::BSplCLib_Cache* instance);

public:
	BSplCLib_Cache(int theDegree, bool thePeriodic, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ thePoles2d, Macad::Occt::TColStd_Array1OfReal^ theWeights);
	BSplCLib_Cache(int theDegree, bool thePeriodic, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ thePoles2d);
	BSplCLib_Cache(int theDegree, bool thePeriodic, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ thePoles, Macad::Occt::TColStd_Array1OfReal^ theWeights);
	BSplCLib_Cache(int theDegree, bool thePeriodic, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ thePoles);
	bool IsCacheValid(double theParameter);
	void BuildCache(double theParameter, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt2d^ thePoles2d, Macad::Occt::TColStd_Array1OfReal^ theWeights);
	void BuildCache(double theParameter, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ thePoles, Macad::Occt::TColStd_Array1OfReal^ theWeights);
	void BuildCache(double theParameter, Macad::Occt::TColStd_Array1OfReal^ theFlatKnots, Macad::Occt::TColgp_Array1OfPnt^ thePoles);
	void D0(double theParameter, Macad::Occt::Pnt2d% thePoint);
	void D0(double theParameter, Macad::Occt::Pnt% thePoint);
	void D1(double theParameter, Macad::Occt::Pnt2d% thePoint, Macad::Occt::Vec2d% theTangent);
	void D1(double theParameter, Macad::Occt::Pnt% thePoint, Macad::Occt::Vec% theTangent);
	void D2(double theParameter, Macad::Occt::Pnt2d% thePoint, Macad::Occt::Vec2d% theTangent, Macad::Occt::Vec2d% theCurvature);
	void D2(double theParameter, Macad::Occt::Pnt% thePoint, Macad::Occt::Vec% theTangent, Macad::Occt::Vec% theCurvature);
	void D3(double theParameter, Macad::Occt::Pnt2d% thePoint, Macad::Occt::Vec2d% theTangent, Macad::Occt::Vec2d% theCurvature, Macad::Occt::Vec2d% theTorsion);
	void D3(double theParameter, Macad::Occt::Pnt% thePoint, Macad::Occt::Vec% theTangent, Macad::Occt::Vec% theCurvature, Macad::Occt::Vec% theTorsion);
}; // class BSplCLib_Cache

}; // namespace Occt
}; // namespace Macad
