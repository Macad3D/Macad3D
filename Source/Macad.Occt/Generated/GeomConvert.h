// Generated wrapper code for package GeomConvert

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  GeomConvert
//---------------------------------------------------------------------
public ref class GeomConvert sealed : public BaseClass<::GeomConvert>
{

#ifdef Include_GeomConvert_h
public:
	Include_GeomConvert_h
#endif

public:
	GeomConvert(::GeomConvert* nativeInstance)
		: BaseClass<::GeomConvert>( nativeInstance, true )
	{}

	GeomConvert(::GeomConvert& nativeInstance)
		: BaseClass<::GeomConvert>( &nativeInstance, false )
	{}

	property ::GeomConvert* NativeInstance
	{
		::GeomConvert* get()
		{
			return static_cast<::GeomConvert*>(_NativeInstance);
		}
	}

public:
	GeomConvert();
	GeomConvert(Macad::Occt::GeomConvert^ parameter1);
	static Macad::Occt::Geom_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, int FromK1, int ToK2, bool SameOrientation);
	static Macad::Occt::Geom_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, int FromK1, int ToK2);
	static Macad::Occt::Geom_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance, bool SameOrientation);
	static Macad::Occt::Geom_BSplineCurve^ SplitBSplineCurve(Macad::Occt::Geom_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance);
	static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2, bool SameUOrientation, bool SameVOrientation);
	static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2, bool SameUOrientation);
	static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromUK1, int ToUK2, int FromVK1, int ToVK2);
	static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromK1, int ToK2, bool USplit, bool SameOrientation);
	static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, int FromK1, int ToK2, bool USplit);
	static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance, bool SameUOrientation, bool SameVOrientation);
	static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance, bool SameUOrientation);
	static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromU1, double ToU2, double FromV1, double ToV2, double ParametricTolerance);
	static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromParam1, double ToParam2, bool USplit, double ParametricTolerance, bool SameOrientation);
	static Macad::Occt::Geom_BSplineSurface^ SplitBSplineSurface(Macad::Occt::Geom_BSplineSurface^ S, double FromParam1, double ToParam2, bool USplit, double ParametricTolerance);
	static Macad::Occt::Geom_BSplineCurve^ CurveToBSplineCurve(Macad::Occt::Geom_Curve^ C, Macad::Occt::Convert_ParameterisationType Parameterisation);
	static Macad::Occt::Geom_BSplineCurve^ CurveToBSplineCurve(Macad::Occt::Geom_Curve^ C);
	static Macad::Occt::Geom_BSplineSurface^ SurfaceToBSplineSurface(Macad::Occt::Geom_Surface^ S);
	/* Method skipped due to unknown mapping: void ConcatG1(TColGeom_Array1OfBSplineCurve ArrayOfCurves, TColStd_Array1OfReal ArrayOfToler, TColGeom_HArray1OfBSplineCurve ArrayOfConcatenated, Standard_Boolean ClosedFlag, Standard_Real ClosedTolerance, ) */
	/* Method skipped due to unknown mapping: void ConcatC1(TColGeom_Array1OfBSplineCurve ArrayOfCurves, TColStd_Array1OfReal ArrayOfToler, TColStd_HArray1OfInteger ArrayOfIndices, TColGeom_HArray1OfBSplineCurve ArrayOfConcatenated, Standard_Boolean ClosedFlag, Standard_Real ClosedTolerance, ) */
	/* Method skipped due to unknown mapping: void ConcatC1(TColGeom_Array1OfBSplineCurve ArrayOfCurves, TColStd_Array1OfReal ArrayOfToler, TColStd_HArray1OfInteger ArrayOfIndices, TColGeom_HArray1OfBSplineCurve ArrayOfConcatenated, Standard_Boolean ClosedFlag, Standard_Real ClosedTolerance, Standard_Real AngularTolerance, ) */
	static void C0BSplineToC1BSplineCurve(Macad::Occt::Geom_BSplineCurve^ BS, double tolerance, double AngularTolerance);
	static void C0BSplineToC1BSplineCurve(Macad::Occt::Geom_BSplineCurve^ BS, double tolerance);
	/* Method skipped due to unknown mapping: void C0BSplineToArrayOfC1BSplineCurve(Geom_BSplineCurve BS, TColGeom_HArray1OfBSplineCurve tabBS, Standard_Real tolerance, ) */
	/* Method skipped due to unknown mapping: void C0BSplineToArrayOfC1BSplineCurve(Geom_BSplineCurve BS, TColGeom_HArray1OfBSplineCurve tabBS, Standard_Real AngularTolerance, Standard_Real tolerance, ) */
}; // class GeomConvert

//---------------------------------------------------------------------
//  Class  GeomConvert_ApproxCurve
//---------------------------------------------------------------------
public ref class GeomConvert_ApproxCurve sealed : public BaseClass<::GeomConvert_ApproxCurve>
{

#ifdef Include_GeomConvert_ApproxCurve_h
public:
	Include_GeomConvert_ApproxCurve_h
#endif

public:
	GeomConvert_ApproxCurve(::GeomConvert_ApproxCurve* nativeInstance)
		: BaseClass<::GeomConvert_ApproxCurve>( nativeInstance, true )
	{}

	GeomConvert_ApproxCurve(::GeomConvert_ApproxCurve& nativeInstance)
		: BaseClass<::GeomConvert_ApproxCurve>( &nativeInstance, false )
	{}

	property ::GeomConvert_ApproxCurve* NativeInstance
	{
		::GeomConvert_ApproxCurve* get()
		{
			return static_cast<::GeomConvert_ApproxCurve*>(_NativeInstance);
		}
	}

public:
	GeomConvert_ApproxCurve(Macad::Occt::Geom_Curve^ Curve, double Tol3d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree);
	GeomConvert_ApproxCurve(Macad::Occt::Adaptor3d_Curve^ Curve, double Tol3d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree);
	GeomConvert_ApproxCurve(Macad::Occt::GeomConvert_ApproxCurve^ parameter1);
	Macad::Occt::Geom_BSplineCurve^ Curve();
	bool IsDone();
	bool HasResult();
	double MaxError();
	/* Method skipped due to unknown mapping: void Dump(ostream o, ) */
}; // class GeomConvert_ApproxCurve

//---------------------------------------------------------------------
//  Class  GeomConvert_ApproxSurface
//---------------------------------------------------------------------
public ref class GeomConvert_ApproxSurface sealed : public BaseClass<::GeomConvert_ApproxSurface>
{

#ifdef Include_GeomConvert_ApproxSurface_h
public:
	Include_GeomConvert_ApproxSurface_h
#endif

public:
	GeomConvert_ApproxSurface(::GeomConvert_ApproxSurface* nativeInstance)
		: BaseClass<::GeomConvert_ApproxSurface>( nativeInstance, true )
	{}

	GeomConvert_ApproxSurface(::GeomConvert_ApproxSurface& nativeInstance)
		: BaseClass<::GeomConvert_ApproxSurface>( &nativeInstance, false )
	{}

	property ::GeomConvert_ApproxSurface* NativeInstance
	{
		::GeomConvert_ApproxSurface* get()
		{
			return static_cast<::GeomConvert_ApproxSurface*>(_NativeInstance);
		}
	}

public:
	GeomConvert_ApproxSurface(Macad::Occt::Geom_Surface^ Surf, double Tol3d, Macad::Occt::GeomAbs_Shape UContinuity, Macad::Occt::GeomAbs_Shape VContinuity, int MaxDegU, int MaxDegV, int MaxSegments, int PrecisCode);
	GeomConvert_ApproxSurface(Macad::Occt::Adaptor3d_Surface^ Surf, double Tol3d, Macad::Occt::GeomAbs_Shape UContinuity, Macad::Occt::GeomAbs_Shape VContinuity, int MaxDegU, int MaxDegV, int MaxSegments, int PrecisCode);
	GeomConvert_ApproxSurface(Macad::Occt::GeomConvert_ApproxSurface^ parameter1);
	Macad::Occt::Geom_BSplineSurface^ Surface();
	bool IsDone();
	bool HasResult();
	double MaxError();
	/* Method skipped due to unknown mapping: void Dump(ostream o, ) */
}; // class GeomConvert_ApproxSurface

//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineCurveKnotSplitting
//---------------------------------------------------------------------
public ref class GeomConvert_BSplineCurveKnotSplitting sealed : public BaseClass<::GeomConvert_BSplineCurveKnotSplitting>
{

#ifdef Include_GeomConvert_BSplineCurveKnotSplitting_h
public:
	Include_GeomConvert_BSplineCurveKnotSplitting_h
#endif

public:
	GeomConvert_BSplineCurveKnotSplitting(::GeomConvert_BSplineCurveKnotSplitting* nativeInstance)
		: BaseClass<::GeomConvert_BSplineCurveKnotSplitting>( nativeInstance, true )
	{}

	GeomConvert_BSplineCurveKnotSplitting(::GeomConvert_BSplineCurveKnotSplitting& nativeInstance)
		: BaseClass<::GeomConvert_BSplineCurveKnotSplitting>( &nativeInstance, false )
	{}

	property ::GeomConvert_BSplineCurveKnotSplitting* NativeInstance
	{
		::GeomConvert_BSplineCurveKnotSplitting* get()
		{
			return static_cast<::GeomConvert_BSplineCurveKnotSplitting*>(_NativeInstance);
		}
	}

public:
	GeomConvert_BSplineCurveKnotSplitting(Macad::Occt::Geom_BSplineCurve^ BasisCurve, int ContinuityRange);
	GeomConvert_BSplineCurveKnotSplitting(Macad::Occt::GeomConvert_BSplineCurveKnotSplitting^ parameter1);
	int NbSplits();
	void Splitting(Macad::Occt::TColStd_Array1OfInteger^ SplitValues);
	int SplitValue(int Index);
}; // class GeomConvert_BSplineCurveKnotSplitting

//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineCurveToBezierCurve
//---------------------------------------------------------------------
public ref class GeomConvert_BSplineCurveToBezierCurve sealed : public BaseClass<::GeomConvert_BSplineCurveToBezierCurve>
{

#ifdef Include_GeomConvert_BSplineCurveToBezierCurve_h
public:
	Include_GeomConvert_BSplineCurveToBezierCurve_h
#endif

public:
	GeomConvert_BSplineCurveToBezierCurve(::GeomConvert_BSplineCurveToBezierCurve* nativeInstance)
		: BaseClass<::GeomConvert_BSplineCurveToBezierCurve>( nativeInstance, true )
	{}

	GeomConvert_BSplineCurveToBezierCurve(::GeomConvert_BSplineCurveToBezierCurve& nativeInstance)
		: BaseClass<::GeomConvert_BSplineCurveToBezierCurve>( &nativeInstance, false )
	{}

	property ::GeomConvert_BSplineCurveToBezierCurve* NativeInstance
	{
		::GeomConvert_BSplineCurveToBezierCurve* get()
		{
			return static_cast<::GeomConvert_BSplineCurveToBezierCurve*>(_NativeInstance);
		}
	}

public:
	GeomConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom_BSplineCurve^ BasisCurve);
	GeomConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom_BSplineCurve^ BasisCurve, double U1, double U2, double ParametricTolerance);
	GeomConvert_BSplineCurveToBezierCurve(Macad::Occt::GeomConvert_BSplineCurveToBezierCurve^ parameter1);
	Macad::Occt::Geom_BezierCurve^ Arc(int Index);
	/* Method skipped due to unknown mapping: void Arcs(TColGeom_Array1OfBezierCurve Curves, ) */
	void Knots(Macad::Occt::TColStd_Array1OfReal^ TKnots);
	int NbArcs();
}; // class GeomConvert_BSplineCurveToBezierCurve

//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineSurfaceKnotSplitting
//---------------------------------------------------------------------
public ref class GeomConvert_BSplineSurfaceKnotSplitting sealed : public BaseClass<::GeomConvert_BSplineSurfaceKnotSplitting>
{

#ifdef Include_GeomConvert_BSplineSurfaceKnotSplitting_h
public:
	Include_GeomConvert_BSplineSurfaceKnotSplitting_h
#endif

public:
	GeomConvert_BSplineSurfaceKnotSplitting(::GeomConvert_BSplineSurfaceKnotSplitting* nativeInstance)
		: BaseClass<::GeomConvert_BSplineSurfaceKnotSplitting>( nativeInstance, true )
	{}

	GeomConvert_BSplineSurfaceKnotSplitting(::GeomConvert_BSplineSurfaceKnotSplitting& nativeInstance)
		: BaseClass<::GeomConvert_BSplineSurfaceKnotSplitting>( &nativeInstance, false )
	{}

	property ::GeomConvert_BSplineSurfaceKnotSplitting* NativeInstance
	{
		::GeomConvert_BSplineSurfaceKnotSplitting* get()
		{
			return static_cast<::GeomConvert_BSplineSurfaceKnotSplitting*>(_NativeInstance);
		}
	}

public:
	GeomConvert_BSplineSurfaceKnotSplitting(Macad::Occt::Geom_BSplineSurface^ BasisSurface, int UContinuityRange, int VContinuityRange);
	GeomConvert_BSplineSurfaceKnotSplitting(Macad::Occt::GeomConvert_BSplineSurfaceKnotSplitting^ parameter1);
	int NbUSplits();
	int NbVSplits();
	void Splitting(Macad::Occt::TColStd_Array1OfInteger^ USplit, Macad::Occt::TColStd_Array1OfInteger^ VSplit);
	int USplitValue(int UIndex);
	int VSplitValue(int VIndex);
}; // class GeomConvert_BSplineSurfaceKnotSplitting

//---------------------------------------------------------------------
//  Class  GeomConvert_BSplineSurfaceToBezierSurface
//---------------------------------------------------------------------
public ref class GeomConvert_BSplineSurfaceToBezierSurface sealed : public BaseClass<::GeomConvert_BSplineSurfaceToBezierSurface>
{

#ifdef Include_GeomConvert_BSplineSurfaceToBezierSurface_h
public:
	Include_GeomConvert_BSplineSurfaceToBezierSurface_h
#endif

public:
	GeomConvert_BSplineSurfaceToBezierSurface(::GeomConvert_BSplineSurfaceToBezierSurface* nativeInstance)
		: BaseClass<::GeomConvert_BSplineSurfaceToBezierSurface>( nativeInstance, true )
	{}

	GeomConvert_BSplineSurfaceToBezierSurface(::GeomConvert_BSplineSurfaceToBezierSurface& nativeInstance)
		: BaseClass<::GeomConvert_BSplineSurfaceToBezierSurface>( &nativeInstance, false )
	{}

	property ::GeomConvert_BSplineSurfaceToBezierSurface* NativeInstance
	{
		::GeomConvert_BSplineSurfaceToBezierSurface* get()
		{
			return static_cast<::GeomConvert_BSplineSurfaceToBezierSurface*>(_NativeInstance);
		}
	}

public:
	GeomConvert_BSplineSurfaceToBezierSurface(Macad::Occt::Geom_BSplineSurface^ BasisSurface);
	GeomConvert_BSplineSurfaceToBezierSurface(Macad::Occt::Geom_BSplineSurface^ BasisSurface, double U1, double U2, double V1, double V2, double ParametricTolerance);
	GeomConvert_BSplineSurfaceToBezierSurface(Macad::Occt::GeomConvert_BSplineSurfaceToBezierSurface^ parameter1);
	Macad::Occt::Geom_BezierSurface^ Patch(int UIndex, int VIndex);
	/* Method skipped due to unknown mapping: void Patches(TColGeom_Array2OfBezierSurface Surfaces, ) */
	void UKnots(Macad::Occt::TColStd_Array1OfReal^ TKnots);
	void VKnots(Macad::Occt::TColStd_Array1OfReal^ TKnots);
	int NbUPatches();
	int NbVPatches();
}; // class GeomConvert_BSplineSurfaceToBezierSurface

//---------------------------------------------------------------------
//  Class  GeomConvert_CompBezierSurfacesToBSplineSurface
//---------------------------------------------------------------------
public ref class GeomConvert_CompBezierSurfacesToBSplineSurface sealed : public BaseClass<::GeomConvert_CompBezierSurfacesToBSplineSurface>
{

#ifdef Include_GeomConvert_CompBezierSurfacesToBSplineSurface_h
public:
	Include_GeomConvert_CompBezierSurfacesToBSplineSurface_h
#endif

public:
	GeomConvert_CompBezierSurfacesToBSplineSurface(::GeomConvert_CompBezierSurfacesToBSplineSurface* nativeInstance)
		: BaseClass<::GeomConvert_CompBezierSurfacesToBSplineSurface>( nativeInstance, true )
	{}

	GeomConvert_CompBezierSurfacesToBSplineSurface(::GeomConvert_CompBezierSurfacesToBSplineSurface& nativeInstance)
		: BaseClass<::GeomConvert_CompBezierSurfacesToBSplineSurface>( &nativeInstance, false )
	{}

	property ::GeomConvert_CompBezierSurfacesToBSplineSurface* NativeInstance
	{
		::GeomConvert_CompBezierSurfacesToBSplineSurface* get()
		{
			return static_cast<::GeomConvert_CompBezierSurfacesToBSplineSurface*>(_NativeInstance);
		}
	}

public:
	/* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, ) */
	/* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, Standard_Real Tolerance, Standard_Boolean RemoveKnots, ) */
	/* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, Standard_Real Tolerance, Standard_Boolean RemoveKnots, ) */
	/* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, TColStd_Array1OfReal UKnots, TColStd_Array1OfReal VKnots, GeomAbs_Shape UContinuity, GeomAbs_Shape VContinuity, Standard_Real Tolerance, ) */
	/* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, TColStd_Array1OfReal UKnots, TColStd_Array1OfReal VKnots, GeomAbs_Shape UContinuity, GeomAbs_Shape VContinuity, Standard_Real Tolerance, ) */
	/* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, TColStd_Array1OfReal UKnots, TColStd_Array1OfReal VKnots, GeomAbs_Shape UContinuity, GeomAbs_Shape VContinuity, Standard_Real Tolerance, ) */
	/* Method skipped due to unknown mapping: void GeomConvert_CompBezierSurfacesToBSplineSurface(TColGeom_Array2OfBezierSurface Beziers, TColStd_Array1OfReal UKnots, TColStd_Array1OfReal VKnots, GeomAbs_Shape UContinuity, GeomAbs_Shape VContinuity, Standard_Real Tolerance, ) */
	GeomConvert_CompBezierSurfacesToBSplineSurface(Macad::Occt::GeomConvert_CompBezierSurfacesToBSplineSurface^ parameter1);
	int NbUKnots();
	int NbUPoles();
	int NbVKnots();
	int NbVPoles();
	Macad::Occt::TColgp_HArray2OfPnt^ Poles();
	Macad::Occt::TColStd_HArray1OfReal^ UKnots();
	int UDegree();
	Macad::Occt::TColStd_HArray1OfReal^ VKnots();
	int VDegree();
	Macad::Occt::TColStd_HArray1OfInteger^ UMultiplicities();
	Macad::Occt::TColStd_HArray1OfInteger^ VMultiplicities();
	bool IsDone();
}; // class GeomConvert_CompBezierSurfacesToBSplineSurface

//---------------------------------------------------------------------
//  Class  GeomConvert_CompCurveToBSplineCurve
//---------------------------------------------------------------------
public ref class GeomConvert_CompCurveToBSplineCurve sealed : public BaseClass<::GeomConvert_CompCurveToBSplineCurve>
{

#ifdef Include_GeomConvert_CompCurveToBSplineCurve_h
public:
	Include_GeomConvert_CompCurveToBSplineCurve_h
#endif

public:
	GeomConvert_CompCurveToBSplineCurve(::GeomConvert_CompCurveToBSplineCurve* nativeInstance)
		: BaseClass<::GeomConvert_CompCurveToBSplineCurve>( nativeInstance, true )
	{}

	GeomConvert_CompCurveToBSplineCurve(::GeomConvert_CompCurveToBSplineCurve& nativeInstance)
		: BaseClass<::GeomConvert_CompCurveToBSplineCurve>( &nativeInstance, false )
	{}

	property ::GeomConvert_CompCurveToBSplineCurve* NativeInstance
	{
		::GeomConvert_CompCurveToBSplineCurve* get()
		{
			return static_cast<::GeomConvert_CompCurveToBSplineCurve*>(_NativeInstance);
		}
	}

public:
	GeomConvert_CompCurveToBSplineCurve(Macad::Occt::Convert_ParameterisationType Parameterisation);
	GeomConvert_CompCurveToBSplineCurve(Macad::Occt::Geom_BoundedCurve^ BasisCurve, Macad::Occt::Convert_ParameterisationType Parameterisation);
	GeomConvert_CompCurveToBSplineCurve(Macad::Occt::Geom_BoundedCurve^ BasisCurve);
	GeomConvert_CompCurveToBSplineCurve(Macad::Occt::GeomConvert_CompCurveToBSplineCurve^ parameter1);
	bool Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After, bool WithRatio, int MinM);
	bool Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After, bool WithRatio);
	bool Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance, bool After);
	bool Add(Macad::Occt::Geom_BoundedCurve^ NewCurve, double Tolerance);
	Macad::Occt::Geom_BSplineCurve^ BSplineCurve();
	void Clear();
}; // class GeomConvert_CompCurveToBSplineCurve

//---------------------------------------------------------------------
//  Class  GeomConvert_Units
//---------------------------------------------------------------------
public ref class GeomConvert_Units sealed : public BaseClass<::GeomConvert_Units>
{

#ifdef Include_GeomConvert_Units_h
public:
	Include_GeomConvert_Units_h
#endif

public:
	GeomConvert_Units(::GeomConvert_Units* nativeInstance)
		: BaseClass<::GeomConvert_Units>( nativeInstance, true )
	{}

	GeomConvert_Units(::GeomConvert_Units& nativeInstance)
		: BaseClass<::GeomConvert_Units>( &nativeInstance, false )
	{}

	property ::GeomConvert_Units* NativeInstance
	{
		::GeomConvert_Units* get()
		{
			return static_cast<::GeomConvert_Units*>(_NativeInstance);
		}
	}

public:
	GeomConvert_Units();
	GeomConvert_Units(Macad::Occt::GeomConvert_Units^ parameter1);
	static Macad::Occt::Geom2d_Curve^ RadianToDegree(Macad::Occt::Geom2d_Curve^ theCurve, Macad::Occt::Geom_Surface^ theSurface, double theLengthFactor, double theFactorRadianDegree);
	static Macad::Occt::Geom2d_Curve^ DegreeToRadian(Macad::Occt::Geom2d_Curve^ theCurve, Macad::Occt::Geom_Surface^ theSurface, double theLengthFactor, double theFactorRadianDegree);
	static Macad::Occt::Geom2d_Curve^ MirrorPCurve(Macad::Occt::Geom2d_Curve^ theCurve);
}; // class GeomConvert_Units

}; // namespace Occt
}; // namespace Macad
