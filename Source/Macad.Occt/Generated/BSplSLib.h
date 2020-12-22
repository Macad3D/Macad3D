// Generated wrapper code for package BSplSLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BSplSLib_EvaluatorFunction
//---------------------------------------------------------------------
public ref class BSplSLib_EvaluatorFunction : public BaseClass<::BSplSLib_EvaluatorFunction>
{

#ifdef Include_BSplSLib_EvaluatorFunction_h
public:
	Include_BSplSLib_EvaluatorFunction_h
#endif

public:
	BSplSLib_EvaluatorFunction(::BSplSLib_EvaluatorFunction* nativeInstance)
		: BaseClass<::BSplSLib_EvaluatorFunction>( nativeInstance, true )
	{}

	BSplSLib_EvaluatorFunction(::BSplSLib_EvaluatorFunction& nativeInstance)
		: BaseClass<::BSplSLib_EvaluatorFunction>( &nativeInstance, false )
	{}

	property ::BSplSLib_EvaluatorFunction* NativeInstance
	{
		::BSplSLib_EvaluatorFunction* get()
		{
			return static_cast<::BSplSLib_EvaluatorFunction*>(_NativeInstance);
		}
	}

public:
	void Evaluate(int theDerivativeRequest, double theUParameter, double theVParameter, double% theResult, int% theErrorCode);
}; // class BSplSLib_EvaluatorFunction

//---------------------------------------------------------------------
//  Class  BSplSLib
//---------------------------------------------------------------------
public ref class BSplSLib sealed : public BaseClass<::BSplSLib>
{

#ifdef Include_BSplSLib_h
public:
	Include_BSplSLib_h
#endif

public:
	BSplSLib(::BSplSLib* nativeInstance)
		: BaseClass<::BSplSLib>( nativeInstance, true )
	{}

	BSplSLib(::BSplSLib& nativeInstance)
		: BaseClass<::BSplSLib>( &nativeInstance, false )
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
	BSplSLib(Macad::Occt::BSplSLib^ parameter1);
	static void RationalDerivative(int UDeg, int VDeg, int N, int M, double% Ders, double% RDers, bool All);
	static void RationalDerivative(int UDeg, int VDeg, int N, int M, double% Ders, double% RDers);
	static void D0(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% P);
	static void D1(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int Degree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
	static void D2(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
	static void D3(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
	static void DN(double U, double V, int Nu, int Nv, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Vec% Vn);
	static void Iso(double Param, bool IsU, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CWeights);
	static void Reverse(Macad::Occt::TColgp_Array2OfPnt^ Poles, int Last, bool UDirection);
	static void HomogeneousD0(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, double% W, Macad::Occt::Pnt% P);
	static void HomogeneousD1(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% N, Macad::Occt::Vec% Nu, Macad::Occt::Vec% Nv, double% D, double% Du, double% Dv);
	static void Reverse(Macad::Occt::TColStd_Array2OfReal^ Weights, int Last, bool UDirection);
	static bool IsRational(Macad::Occt::TColStd_Array2OfReal^ Weights, int I1, int I2, int J1, int J2, double Epsilon);
	static bool IsRational(Macad::Occt::TColStd_Array2OfReal^ Weights, int I1, int I2, int J1, int J2);
	static void SetPoles(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ FP, bool UDirection);
	static void SetPoles(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FP, bool UDirection);
	static void GetPoles(Macad::Occt::TColStd_Array1OfReal^ FP, Macad::Occt::TColgp_Array2OfPnt^ Poles, bool UDirection);
	static void GetPoles(Macad::Occt::TColStd_Array1OfReal^ FP, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, bool UDirection);
	static void MovePoint(double U, double V, Macad::Occt::Vec Displ, int UIndex1, int UIndex2, int VIndex1, int VIndex2, int UDegree, int VDegree, bool Rational, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, int% UFirstIndex, int% ULastIndex, int% VFirstIndex, int% VLastIndex, Macad::Occt::TColgp_Array2OfPnt^ NewPoles);
	static void InsertKnots(bool UDirection, int Degree, bool Periodic, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon, bool Add);
	static void InsertKnots(bool UDirection, int Degree, bool Periodic, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon);
	static bool RemoveKnot(bool UDirection, int Index, int Mult, int Degree, bool Periodic, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Tolerance);
	static void IncreaseDegree(bool UDirection, int Degree, int NewDegree, bool Periodic, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults);
	static void Unperiodize(bool UDirection, int Degree, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfInteger^ NewMults, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights);
	static Macad::Occt::TColStd_Array2OfReal^ NoWeights();
	static void BuildCache(double U, double V, double USpanDomain, double VSpanDomain, bool UPeriodicFlag, bool VPeriodicFlag, int UDegree, int VDegree, int UIndex, int VIndex, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColgp_Array2OfPnt^ CachePoles, Macad::Occt::TColStd_Array2OfReal^ CacheWeights);
	static void BuildCache(double theU, double theV, double theUSpanDomain, double theVSpanDomain, bool theUPeriodic, bool theVPeriodic, int theUDegree, int theVDegree, int theUIndex, int theVIndex, Macad::Occt::TColStd_Array1OfReal^ theUFlatKnots, Macad::Occt::TColStd_Array1OfReal^ theVFlatKnots, Macad::Occt::TColgp_Array2OfPnt^ thePoles, Macad::Occt::TColStd_Array2OfReal^ theWeights, Macad::Occt::TColStd_Array2OfReal^ theCacheArray);
	static void CacheD0(double U, double V, int UDegree, int VDegree, double UCacheParameter, double VCacheParameter, double USpanLenght, double VSpanLength, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point);
	static void CoefsD0(double U, double V, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point);
	static void CacheD1(double U, double V, int UDegree, int VDegree, double UCacheParameter, double VCacheParameter, double USpanLenght, double VSpanLength, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% VecU, Macad::Occt::Vec% VecV);
	static void CoefsD1(double U, double V, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% VecU, Macad::Occt::Vec% VecV);
	static void CacheD2(double U, double V, int UDegree, int VDegree, double UCacheParameter, double VCacheParameter, double USpanLenght, double VSpanLength, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% VecU, Macad::Occt::Vec% VecV, Macad::Occt::Vec% VecUU, Macad::Occt::Vec% VecUV, Macad::Occt::Vec% VecVV);
	static void CoefsD2(double U, double V, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% VecU, Macad::Occt::Vec% VecV, Macad::Occt::Vec% VecUU, Macad::Occt::Vec% VecUV, Macad::Occt::Vec% VecVV);
	static void PolesCoefficients(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColgp_Array2OfPnt^ CachePoles);
	static void PolesCoefficients(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColgp_Array2OfPnt^ CachePoles, Macad::Occt::TColStd_Array2OfReal^ CacheWeights);
	static void Resolution(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, double Tolerance3D, double% UTolerance, double% VTolerance);
	static void Interpolate(int UDegree, int VDegree, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, Macad::Occt::TColStd_Array1OfReal^ UParameters, Macad::Occt::TColStd_Array1OfReal^ VParameters, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, int% InversionProblem);
	static void Interpolate(int UDegree, int VDegree, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, Macad::Occt::TColStd_Array1OfReal^ UParameters, Macad::Occt::TColStd_Array1OfReal^ VParameters, Macad::Occt::TColgp_Array2OfPnt^ Poles, int% InversionProblem);
	static void FunctionMultiply(Macad::Occt::BSplSLib_EvaluatorFunction^ Function, int UBSplineDegree, int VBSplineDegree, Macad::Occt::TColStd_Array1OfReal^ UBSplineKnots, Macad::Occt::TColStd_Array1OfReal^ VBSplineKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, int UNewDegree, int VNewDegree, Macad::Occt::TColgp_Array2OfPnt^ NewNumerator, Macad::Occt::TColStd_Array2OfReal^ NewDenominator, int% theStatus);
}; // class BSplSLib

//---------------------------------------------------------------------
//  Class  BSplSLib_Cache
//---------------------------------------------------------------------
public ref class BSplSLib_Cache sealed : public Macad::Occt::Standard_Transient
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

	static Macad::Occt::BSplSLib_Cache^ CreateDowncasted(::BSplSLib_Cache* instance);

public:
	BSplSLib_Cache(int theDegreeU, bool thePeriodicU, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsU, int theDegreeV, bool thePeriodicV, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsV, Macad::Occt::TColStd_Array2OfReal^ theWeights);
	BSplSLib_Cache(int theDegreeU, bool thePeriodicU, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsU, int theDegreeV, bool thePeriodicV, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsV);
	bool IsCacheValid(double theParameterU, double theParameterV);
	void BuildCache(double theParameterU, double theParameterV, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsU, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsV, Macad::Occt::TColgp_Array2OfPnt^ thePoles, Macad::Occt::TColStd_Array2OfReal^ theWeights);
	void BuildCache(double theParameterU, double theParameterV, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsU, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsV, Macad::Occt::TColgp_Array2OfPnt^ thePoles);
	void D0(double theU, double theV, Macad::Occt::Pnt% thePoint);
	void D1(double theU, double theV, Macad::Occt::Pnt% thePoint, Macad::Occt::Vec% theTangentU, Macad::Occt::Vec% theTangentV);
	void D2(double theU, double theV, Macad::Occt::Pnt% thePoint, Macad::Occt::Vec% theTangentU, Macad::Occt::Vec% theTangentV, Macad::Occt::Vec% theCurvatureU, Macad::Occt::Vec% theCurvatureV, Macad::Occt::Vec% theCurvatureUV);
}; // class BSplSLib_Cache

}; // namespace Occt
}; // namespace Macad
