// Generated wrapper code for package Geom2dConvert

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Geom2dConvert
//---------------------------------------------------------------------
public ref class Geom2dConvert sealed : public BaseClass<::Geom2dConvert>
{

#ifdef Include_Geom2dConvert_h
public:
	Include_Geom2dConvert_h
#endif

public:
	Geom2dConvert(::Geom2dConvert* nativeInstance)
		: BaseClass<::Geom2dConvert>( nativeInstance, true )
	{}

	Geom2dConvert(::Geom2dConvert& nativeInstance)
		: BaseClass<::Geom2dConvert>( &nativeInstance, false )
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
	Geom2dConvert(Macad::Occt::Geom2dConvert^ parameter1);
	static Macad::Occt::Geom2d_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, int FromK1, int ToK2, bool SameOrientation);
	static Macad::Occt::Geom2d_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, int FromK1, int ToK2);
	static Macad::Occt::Geom2d_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance, bool SameOrientation);
	static Macad::Occt::Geom2d_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance);
	static Macad::Occt::Geom2d_BSplineCurve^ CurveToBSplineCurve(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Convert_ParameterisationType Parameterisation);
	static Macad::Occt::Geom2d_BSplineCurve^ CurveToBSplineCurve(Macad::Occt::Geom2d_Curve^ C);
	/* Method skipped due to unknown mapping: void ConcatG1(TColGeom2d_Array1OfBSplineCurve ArrayOfCurves, TColStd_Array1OfReal ArrayOfToler, TColGeom2d_HArray1OfBSplineCurve ArrayOfConcatenated, Standard_Boolean ClosedFlag, Standard_Real ClosedTolerance, ) */
	/* Method skipped due to unknown mapping: void ConcatC1(TColGeom2d_Array1OfBSplineCurve ArrayOfCurves, TColStd_Array1OfReal ArrayOfToler, TColStd_HArray1OfInteger ArrayOfIndices, TColGeom2d_HArray1OfBSplineCurve ArrayOfConcatenated, Standard_Boolean ClosedFlag, Standard_Real ClosedTolerance, ) */
	/* Method skipped due to unknown mapping: void ConcatC1(TColGeom2d_Array1OfBSplineCurve ArrayOfCurves, TColStd_Array1OfReal ArrayOfToler, TColStd_HArray1OfInteger ArrayOfIndices, TColGeom2d_HArray1OfBSplineCurve ArrayOfConcatenated, Standard_Boolean ClosedFlag, Standard_Real ClosedTolerance, Standard_Real AngularTolerance, ) */
	static void C0BSplineToC1BSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ BS, double Tolerance);
	/* Method skipped due to unknown mapping: void C0BSplineToArrayOfC1BSplineCurve(Geom2d_BSplineCurve BS, TColGeom2d_HArray1OfBSplineCurve tabBS, Standard_Real Tolerance, ) */
	/* Method skipped due to unknown mapping: void C0BSplineToArrayOfC1BSplineCurve(Geom2d_BSplineCurve BS, TColGeom2d_HArray1OfBSplineCurve tabBS, Standard_Real AngularTolerance, Standard_Real Tolerance, ) */
}; // class Geom2dConvert

//---------------------------------------------------------------------
//  Class  Geom2dConvert_ApproxCurve
//---------------------------------------------------------------------
public ref class Geom2dConvert_ApproxCurve sealed : public BaseClass<::Geom2dConvert_ApproxCurve>
{

#ifdef Include_Geom2dConvert_ApproxCurve_h
public:
	Include_Geom2dConvert_ApproxCurve_h
#endif

public:
	Geom2dConvert_ApproxCurve(::Geom2dConvert_ApproxCurve* nativeInstance)
		: BaseClass<::Geom2dConvert_ApproxCurve>( nativeInstance, true )
	{}

	Geom2dConvert_ApproxCurve(::Geom2dConvert_ApproxCurve& nativeInstance)
		: BaseClass<::Geom2dConvert_ApproxCurve>( &nativeInstance, false )
	{}

	property ::Geom2dConvert_ApproxCurve* NativeInstance
	{
		::Geom2dConvert_ApproxCurve* get()
		{
			return static_cast<::Geom2dConvert_ApproxCurve*>(_NativeInstance);
		}
	}

public:
	Geom2dConvert_ApproxCurve(Macad::Occt::Geom2d_Curve^ Curve, double Tol2d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree);
	Geom2dConvert_ApproxCurve(Macad::Occt::Adaptor2d_Curve2d^ Curve, double Tol2d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree);
	Geom2dConvert_ApproxCurve(Macad::Occt::Geom2dConvert_ApproxCurve^ parameter1);
	Macad::Occt::Geom2d_BSplineCurve^ Curve();
	bool IsDone();
	bool HasResult();
	double MaxError();
	/* Method skipped due to unknown mapping: void Dump(ostream o, ) */
}; // class Geom2dConvert_ApproxCurve

//---------------------------------------------------------------------
//  Class  Geom2dConvert_BSplineCurveKnotSplitting
//---------------------------------------------------------------------
public ref class Geom2dConvert_BSplineCurveKnotSplitting sealed : public BaseClass<::Geom2dConvert_BSplineCurveKnotSplitting>
{

#ifdef Include_Geom2dConvert_BSplineCurveKnotSplitting_h
public:
	Include_Geom2dConvert_BSplineCurveKnotSplitting_h
#endif

public:
	Geom2dConvert_BSplineCurveKnotSplitting(::Geom2dConvert_BSplineCurveKnotSplitting* nativeInstance)
		: BaseClass<::Geom2dConvert_BSplineCurveKnotSplitting>( nativeInstance, true )
	{}

	Geom2dConvert_BSplineCurveKnotSplitting(::Geom2dConvert_BSplineCurveKnotSplitting& nativeInstance)
		: BaseClass<::Geom2dConvert_BSplineCurveKnotSplitting>( &nativeInstance, false )
	{}

	property ::Geom2dConvert_BSplineCurveKnotSplitting* NativeInstance
	{
		::Geom2dConvert_BSplineCurveKnotSplitting* get()
		{
			return static_cast<::Geom2dConvert_BSplineCurveKnotSplitting*>(_NativeInstance);
		}
	}

public:
	Geom2dConvert_BSplineCurveKnotSplitting(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve, int ContinuityRange);
	Geom2dConvert_BSplineCurveKnotSplitting(Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting^ parameter1);
	int NbSplits();
	void Splitting(Macad::Occt::TColStd_Array1OfInteger^ SplitValues);
	int SplitValue(int Index);
}; // class Geom2dConvert_BSplineCurveKnotSplitting

//---------------------------------------------------------------------
//  Class  Geom2dConvert_BSplineCurveToBezierCurve
//---------------------------------------------------------------------
public ref class Geom2dConvert_BSplineCurveToBezierCurve sealed : public BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>
{

#ifdef Include_Geom2dConvert_BSplineCurveToBezierCurve_h
public:
	Include_Geom2dConvert_BSplineCurveToBezierCurve_h
#endif

public:
	Geom2dConvert_BSplineCurveToBezierCurve(::Geom2dConvert_BSplineCurveToBezierCurve* nativeInstance)
		: BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>( nativeInstance, true )
	{}

	Geom2dConvert_BSplineCurveToBezierCurve(::Geom2dConvert_BSplineCurveToBezierCurve& nativeInstance)
		: BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>( &nativeInstance, false )
	{}

	property ::Geom2dConvert_BSplineCurveToBezierCurve* NativeInstance
	{
		::Geom2dConvert_BSplineCurveToBezierCurve* get()
		{
			return static_cast<::Geom2dConvert_BSplineCurveToBezierCurve*>(_NativeInstance);
		}
	}

public:
	Geom2dConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve);
	Geom2dConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve, double U1, double U2, double ParametricTolerance);
	Geom2dConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve^ parameter1);
	Macad::Occt::Geom2d_BezierCurve^ Arc(int Index);
	/* Method skipped due to unknown mapping: void Arcs(TColGeom2d_Array1OfBezierCurve Curves, ) */
	void Knots(Macad::Occt::TColStd_Array1OfReal^ TKnots);
	int NbArcs();
}; // class Geom2dConvert_BSplineCurveToBezierCurve

//---------------------------------------------------------------------
//  Class  Geom2dConvert_CompCurveToBSplineCurve
//---------------------------------------------------------------------
public ref class Geom2dConvert_CompCurveToBSplineCurve sealed : public BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>
{

#ifdef Include_Geom2dConvert_CompCurveToBSplineCurve_h
public:
	Include_Geom2dConvert_CompCurveToBSplineCurve_h
#endif

public:
	Geom2dConvert_CompCurveToBSplineCurve(::Geom2dConvert_CompCurveToBSplineCurve* nativeInstance)
		: BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>( nativeInstance, true )
	{}

	Geom2dConvert_CompCurveToBSplineCurve(::Geom2dConvert_CompCurveToBSplineCurve& nativeInstance)
		: BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>( &nativeInstance, false )
	{}

	property ::Geom2dConvert_CompCurveToBSplineCurve* NativeInstance
	{
		::Geom2dConvert_CompCurveToBSplineCurve* get()
		{
			return static_cast<::Geom2dConvert_CompCurveToBSplineCurve*>(_NativeInstance);
		}
	}

public:
	Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Convert_ParameterisationType Parameterisation);
	Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Geom2d_BoundedCurve^ BasisCurve, Macad::Occt::Convert_ParameterisationType Parameterisation);
	Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Geom2d_BoundedCurve^ BasisCurve);
	Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve^ parameter1);
	bool Add(Macad::Occt::Geom2d_BoundedCurve^ NewCurve, double Tolerance, bool After);
	bool Add(Macad::Occt::Geom2d_BoundedCurve^ NewCurve, double Tolerance);
	Macad::Occt::Geom2d_BSplineCurve^ BSplineCurve();
	void Clear();
}; // class Geom2dConvert_CompCurveToBSplineCurve

}; // namespace Occt
}; // namespace Macad
