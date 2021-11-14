// Generated wrapper code for package GeomAPI

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  GeomAPI
//---------------------------------------------------------------------
public ref class GeomAPI sealed : public BaseClass<::GeomAPI>
{

#ifdef Include_GeomAPI_h
public:
	Include_GeomAPI_h
#endif

public:
	GeomAPI(::GeomAPI* nativeInstance)
		: BaseClass<::GeomAPI>( nativeInstance, true )
	{}

	GeomAPI(::GeomAPI& nativeInstance)
		: BaseClass<::GeomAPI>( &nativeInstance, false )
	{}

	property ::GeomAPI* NativeInstance
	{
		::GeomAPI* get()
		{
			return static_cast<::GeomAPI*>(_NativeInstance);
		}
	}

public:
	GeomAPI();
	GeomAPI(Macad::Occt::GeomAPI^ parameter1);
	static Macad::Occt::Geom2d_Curve^ To2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Pln P);
	static Macad::Occt::Geom_Curve^ To3d(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Pln P);
}; // class GeomAPI

//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaCurveCurve
//---------------------------------------------------------------------
public ref class GeomAPI_ExtremaCurveCurve sealed : public BaseClass<::GeomAPI_ExtremaCurveCurve>
{

#ifdef Include_GeomAPI_ExtremaCurveCurve_h
public:
	Include_GeomAPI_ExtremaCurveCurve_h
#endif

public:
	GeomAPI_ExtremaCurveCurve(::GeomAPI_ExtremaCurveCurve* nativeInstance)
		: BaseClass<::GeomAPI_ExtremaCurveCurve>( nativeInstance, true )
	{}

	GeomAPI_ExtremaCurveCurve(::GeomAPI_ExtremaCurveCurve& nativeInstance)
		: BaseClass<::GeomAPI_ExtremaCurveCurve>( &nativeInstance, false )
	{}

	property ::GeomAPI_ExtremaCurveCurve* NativeInstance
	{
		::GeomAPI_ExtremaCurveCurve* get()
		{
			return static_cast<::GeomAPI_ExtremaCurveCurve*>(_NativeInstance);
		}
	}

public:
	GeomAPI_ExtremaCurveCurve();
	GeomAPI_ExtremaCurveCurve(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2);
	GeomAPI_ExtremaCurveCurve(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2, double U1min, double U1max, double U2min, double U2max);
	void Init(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2);
	void Init(Macad::Occt::Geom_Curve^ C1, Macad::Occt::Geom_Curve^ C2, double U1min, double U1max, double U2min, double U2max);
	int NbExtrema();
	void Points(int Index, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
	void Parameters(int Index, double% U1, double% U2);
	double Distance(int Index);
	bool IsParallel();
	void NearestPoints(Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
	void LowerDistanceParameters(double% U1, double% U2);
	double LowerDistance();
	/* Method skipped due to unknown mapping: Extrema_ExtCC Extrema() */
	bool TotalNearestPoints(Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
	bool TotalLowerDistanceParameters(double% U1, double% U2);
	double TotalLowerDistance();
}; // class GeomAPI_ExtremaCurveCurve

//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaCurveSurface
//---------------------------------------------------------------------
public ref class GeomAPI_ExtremaCurveSurface sealed : public BaseClass<::GeomAPI_ExtremaCurveSurface>
{

#ifdef Include_GeomAPI_ExtremaCurveSurface_h
public:
	Include_GeomAPI_ExtremaCurveSurface_h
#endif

public:
	GeomAPI_ExtremaCurveSurface(::GeomAPI_ExtremaCurveSurface* nativeInstance)
		: BaseClass<::GeomAPI_ExtremaCurveSurface>( nativeInstance, true )
	{}

	GeomAPI_ExtremaCurveSurface(::GeomAPI_ExtremaCurveSurface& nativeInstance)
		: BaseClass<::GeomAPI_ExtremaCurveSurface>( &nativeInstance, false )
	{}

	property ::GeomAPI_ExtremaCurveSurface* NativeInstance
	{
		::GeomAPI_ExtremaCurveSurface* get()
		{
			return static_cast<::GeomAPI_ExtremaCurveSurface*>(_NativeInstance);
		}
	}

public:
	GeomAPI_ExtremaCurveSurface();
	GeomAPI_ExtremaCurveSurface(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface);
	GeomAPI_ExtremaCurveSurface(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface, double Wmin, double Wmax, double Umin, double Umax, double Vmin, double Vmax);
	void Init(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface);
	void Init(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Surface^ Surface, double Wmin, double Wmax, double Umin, double Umax, double Vmin, double Vmax);
	int NbExtrema();
	void Points(int Index, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
	void Parameters(int Index, double% W, double% U, double% V);
	double Distance(int Index);
	bool IsParallel();
	void NearestPoints(Macad::Occt::Pnt% PC, Macad::Occt::Pnt% PS);
	void LowerDistanceParameters(double% W, double% U, double% V);
	double LowerDistance();
	/* Method skipped due to unknown mapping: Extrema_ExtCS Extrema() */
}; // class GeomAPI_ExtremaCurveSurface

//---------------------------------------------------------------------
//  Class  GeomAPI_ExtremaSurfaceSurface
//---------------------------------------------------------------------
public ref class GeomAPI_ExtremaSurfaceSurface sealed : public BaseClass<::GeomAPI_ExtremaSurfaceSurface>
{

#ifdef Include_GeomAPI_ExtremaSurfaceSurface_h
public:
	Include_GeomAPI_ExtremaSurfaceSurface_h
#endif

public:
	GeomAPI_ExtremaSurfaceSurface(::GeomAPI_ExtremaSurfaceSurface* nativeInstance)
		: BaseClass<::GeomAPI_ExtremaSurfaceSurface>( nativeInstance, true )
	{}

	GeomAPI_ExtremaSurfaceSurface(::GeomAPI_ExtremaSurfaceSurface& nativeInstance)
		: BaseClass<::GeomAPI_ExtremaSurfaceSurface>( &nativeInstance, false )
	{}

	property ::GeomAPI_ExtremaSurfaceSurface* NativeInstance
	{
		::GeomAPI_ExtremaSurfaceSurface* get()
		{
			return static_cast<::GeomAPI_ExtremaSurfaceSurface*>(_NativeInstance);
		}
	}

public:
	GeomAPI_ExtremaSurfaceSurface();
	GeomAPI_ExtremaSurfaceSurface(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2);
	GeomAPI_ExtremaSurfaceSurface(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double U1min, double U1max, double V1min, double V1max, double U2min, double U2max, double V2min, double V2max);
	GeomAPI_ExtremaSurfaceSurface(Macad::Occt::GeomAPI_ExtremaSurfaceSurface^ parameter1);
	void Init(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2);
	void Init(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double U1min, double U1max, double V1min, double V1max, double U2min, double U2max, double V2min, double V2max);
	int NbExtrema();
	void Points(int Index, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
	void Parameters(int Index, double% U1, double% V1, double% U2, double% V2);
	double Distance(int Index);
	bool IsParallel();
	void NearestPoints(Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
	void LowerDistanceParameters(double% U1, double% V1, double% U2, double% V2);
	double LowerDistance();
	/* Method skipped due to unknown mapping: Extrema_ExtSS Extrema() */
}; // class GeomAPI_ExtremaSurfaceSurface

//---------------------------------------------------------------------
//  Class  GeomAPI_IntCS
//---------------------------------------------------------------------
public ref class GeomAPI_IntCS sealed : public BaseClass<::GeomAPI_IntCS>
{

#ifdef Include_GeomAPI_IntCS_h
public:
	Include_GeomAPI_IntCS_h
#endif

public:
	GeomAPI_IntCS(::GeomAPI_IntCS* nativeInstance)
		: BaseClass<::GeomAPI_IntCS>( nativeInstance, true )
	{}

	GeomAPI_IntCS(::GeomAPI_IntCS& nativeInstance)
		: BaseClass<::GeomAPI_IntCS>( &nativeInstance, false )
	{}

	property ::GeomAPI_IntCS* NativeInstance
	{
		::GeomAPI_IntCS* get()
		{
			return static_cast<::GeomAPI_IntCS*>(_NativeInstance);
		}
	}

public:
	GeomAPI_IntCS();
	GeomAPI_IntCS(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S);
	GeomAPI_IntCS(Macad::Occt::GeomAPI_IntCS^ parameter1);
	void Perform(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S);
	bool IsDone();
	int NbPoints();
	Macad::Occt::Pnt Point(int Index);
	void Parameters(int Index, double% U, double% V, double% W);
	int NbSegments();
	Macad::Occt::Geom_Curve^ Segment(int Index);
	void Parameters(int Index, double% U1, double% V1, double% U2, double% V2);
}; // class GeomAPI_IntCS

//---------------------------------------------------------------------
//  Class  GeomAPI_Interpolate
//---------------------------------------------------------------------
public ref class GeomAPI_Interpolate sealed : public BaseClass<::GeomAPI_Interpolate>
{

#ifdef Include_GeomAPI_Interpolate_h
public:
	Include_GeomAPI_Interpolate_h
#endif

public:
	GeomAPI_Interpolate(::GeomAPI_Interpolate* nativeInstance)
		: BaseClass<::GeomAPI_Interpolate>( nativeInstance, true )
	{}

	GeomAPI_Interpolate(::GeomAPI_Interpolate& nativeInstance)
		: BaseClass<::GeomAPI_Interpolate>( &nativeInstance, false )
	{}

	property ::GeomAPI_Interpolate* NativeInstance
	{
		::GeomAPI_Interpolate* get()
		{
			return static_cast<::GeomAPI_Interpolate*>(_NativeInstance);
		}
	}

public:
	GeomAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt^ Points, bool PeriodicFlag, double Tolerance);
	GeomAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt^ Points, Macad::Occt::TColStd_HArray1OfReal^ Parameters, bool PeriodicFlag, double Tolerance);
	GeomAPI_Interpolate(Macad::Occt::GeomAPI_Interpolate^ parameter1);
	void Load(Macad::Occt::Vec InitialTangent, Macad::Occt::Vec FinalTangent, bool Scale);
	void Load(Macad::Occt::Vec InitialTangent, Macad::Occt::Vec FinalTangent);
	void Load(Macad::Occt::TColgp_Array1OfVec^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags, bool Scale);
	void Load(Macad::Occt::TColgp_Array1OfVec^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags);
	void ClearTangents();
	void Perform();
	Macad::Occt::Geom_BSplineCurve^ Curve();
	bool IsDone();
}; // class GeomAPI_Interpolate

//---------------------------------------------------------------------
//  Class  GeomAPI_IntSS
//---------------------------------------------------------------------
public ref class GeomAPI_IntSS sealed : public BaseClass<::GeomAPI_IntSS>
{

#ifdef Include_GeomAPI_IntSS_h
public:
	Include_GeomAPI_IntSS_h
#endif

public:
	GeomAPI_IntSS(::GeomAPI_IntSS* nativeInstance)
		: BaseClass<::GeomAPI_IntSS>( nativeInstance, true )
	{}

	GeomAPI_IntSS(::GeomAPI_IntSS& nativeInstance)
		: BaseClass<::GeomAPI_IntSS>( &nativeInstance, false )
	{}

	property ::GeomAPI_IntSS* NativeInstance
	{
		::GeomAPI_IntSS* get()
		{
			return static_cast<::GeomAPI_IntSS*>(_NativeInstance);
		}
	}

public:
	GeomAPI_IntSS();
	GeomAPI_IntSS(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double Tol);
	GeomAPI_IntSS(Macad::Occt::GeomAPI_IntSS^ parameter1);
	void Perform(Macad::Occt::Geom_Surface^ S1, Macad::Occt::Geom_Surface^ S2, double Tol);
	bool IsDone();
	int NbLines();
	Macad::Occt::Geom_Curve^ Line(int Index);
}; // class GeomAPI_IntSS

//---------------------------------------------------------------------
//  Class  GeomAPI_PointsToBSpline
//---------------------------------------------------------------------
public ref class GeomAPI_PointsToBSpline sealed : public BaseClass<::GeomAPI_PointsToBSpline>
{

#ifdef Include_GeomAPI_PointsToBSpline_h
public:
	Include_GeomAPI_PointsToBSpline_h
#endif

public:
	GeomAPI_PointsToBSpline(::GeomAPI_PointsToBSpline* nativeInstance)
		: BaseClass<::GeomAPI_PointsToBSpline>( nativeInstance, true )
	{}

	GeomAPI_PointsToBSpline(::GeomAPI_PointsToBSpline& nativeInstance)
		: BaseClass<::GeomAPI_PointsToBSpline>( &nativeInstance, false )
	{}

	property ::GeomAPI_PointsToBSpline* NativeInstance
	{
		::GeomAPI_PointsToBSpline* get()
		{
			return static_cast<::GeomAPI_PointsToBSpline*>(_NativeInstance);
		}
	}

public:
	GeomAPI_PointsToBSpline();
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax);
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin);
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points);
	/* Method skipped due to unknown mapping: void GeomAPI_PointsToBSpline(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	/* Method skipped due to unknown mapping: void GeomAPI_PointsToBSpline(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	/* Method skipped due to unknown mapping: void GeomAPI_PointsToBSpline(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	/* Method skipped due to unknown mapping: void GeomAPI_PointsToBSpline(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	/* Method skipped due to unknown mapping: void GeomAPI_PointsToBSpline(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax);
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin);
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters);
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax);
	GeomAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3);
	GeomAPI_PointsToBSpline(Macad::Occt::GeomAPI_PointsToBSpline^ parameter1);
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin, int DegMax);
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, int DegMin);
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points);
	/* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	/* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	/* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	/* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	/* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax);
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin);
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters);
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax);
	void Init(Macad::Occt::TColgp_Array1OfPnt^ Points, double Weight1, double Weight2, double Weight3);
	Macad::Occt::Geom_BSplineCurve^ Curve();
	bool IsDone();
}; // class GeomAPI_PointsToBSpline

//---------------------------------------------------------------------
//  Class  GeomAPI_PointsToBSplineSurface
//---------------------------------------------------------------------
public ref class GeomAPI_PointsToBSplineSurface sealed : public BaseClass<::GeomAPI_PointsToBSplineSurface>
{

#ifdef Include_GeomAPI_PointsToBSplineSurface_h
public:
	Include_GeomAPI_PointsToBSplineSurface_h
#endif

public:
	GeomAPI_PointsToBSplineSurface(::GeomAPI_PointsToBSplineSurface* nativeInstance)
		: BaseClass<::GeomAPI_PointsToBSplineSurface>( nativeInstance, true )
	{}

	GeomAPI_PointsToBSplineSurface(::GeomAPI_PointsToBSplineSurface& nativeInstance)
		: BaseClass<::GeomAPI_PointsToBSplineSurface>( &nativeInstance, false )
	{}

	property ::GeomAPI_PointsToBSplineSurface* NativeInstance
	{
		::GeomAPI_PointsToBSplineSurface* get()
		{
			return static_cast<::GeomAPI_PointsToBSplineSurface*>(_NativeInstance);
		}
	}

public:
	GeomAPI_PointsToBSplineSurface();
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax);
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin);
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points);
	/* Method skipped due to unknown mapping: void GeomAPI_PointsToBSplineSurface(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	/* Method skipped due to unknown mapping: void GeomAPI_PointsToBSplineSurface(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	/* Method skipped due to unknown mapping: void GeomAPI_PointsToBSplineSurface(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	/* Method skipped due to unknown mapping: void GeomAPI_PointsToBSplineSurface(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	/* Method skipped due to unknown mapping: void GeomAPI_PointsToBSplineSurface(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, ) */
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax);
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3);
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax);
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin);
	GeomAPI_PointsToBSplineSurface(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY);
	GeomAPI_PointsToBSplineSurface(Macad::Occt::GeomAPI_PointsToBSplineSurface^ parameter1);
	void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
	void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin, int DegMax);
	void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, int DegMin);
	void Init(Macad::Occt::TColgp_Array2OfPnt^ Points);
	void Interpolate(Macad::Occt::TColgp_Array2OfPnt^ Points, bool thePeriodic);
	void Interpolate(Macad::Occt::TColgp_Array2OfPnt^ Points);
	/* Method skipped due to unknown mapping: void Interpolate(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, Standard_Boolean thePeriodic, ) */
	/* Method skipped due to unknown mapping: void Interpolate(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, Standard_Boolean thePeriodic, ) */
	void Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
	void Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	void Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin, int DegMax);
	void Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY, int DegMin);
	void Init(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY);
	void Interpolate(Macad::Occt::TColStd_Array2OfReal^ ZPoints, double X0, double dX, double Y0, double dY);
	/* Method skipped due to unknown mapping: void Init(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, Standard_Boolean thePeriodic, ) */
	/* Method skipped due to unknown mapping: void Init(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, Standard_Boolean thePeriodic, ) */
	/* Method skipped due to unknown mapping: void Init(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, Standard_Boolean thePeriodic, ) */
	/* Method skipped due to unknown mapping: void Init(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, Standard_Boolean thePeriodic, ) */
	/* Method skipped due to unknown mapping: void Init(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, Standard_Boolean thePeriodic, ) */
	/* Method skipped due to unknown mapping: void Init(TColgp_Array2OfPnt Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol3D, Standard_Boolean thePeriodic, ) */
	void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
	void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3, int DegMax);
	void Init(Macad::Occt::TColgp_Array2OfPnt^ Points, double Weight1, double Weight2, double Weight3);
	Macad::Occt::Geom_BSplineSurface^ Surface();
	bool IsDone();
}; // class GeomAPI_PointsToBSplineSurface

//---------------------------------------------------------------------
//  Class  GeomAPI_ProjectPointOnCurve
//---------------------------------------------------------------------
public ref class GeomAPI_ProjectPointOnCurve sealed : public BaseClass<::GeomAPI_ProjectPointOnCurve>
{

#ifdef Include_GeomAPI_ProjectPointOnCurve_h
public:
	Include_GeomAPI_ProjectPointOnCurve_h
#endif

public:
	GeomAPI_ProjectPointOnCurve(::GeomAPI_ProjectPointOnCurve* nativeInstance)
		: BaseClass<::GeomAPI_ProjectPointOnCurve>( nativeInstance, true )
	{}

	GeomAPI_ProjectPointOnCurve(::GeomAPI_ProjectPointOnCurve& nativeInstance)
		: BaseClass<::GeomAPI_ProjectPointOnCurve>( &nativeInstance, false )
	{}

	property ::GeomAPI_ProjectPointOnCurve* NativeInstance
	{
		::GeomAPI_ProjectPointOnCurve* get()
		{
			return static_cast<::GeomAPI_ProjectPointOnCurve*>(_NativeInstance);
		}
	}

public:
	GeomAPI_ProjectPointOnCurve();
	GeomAPI_ProjectPointOnCurve(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve);
	GeomAPI_ProjectPointOnCurve(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve, double Umin, double Usup);
	GeomAPI_ProjectPointOnCurve(Macad::Occt::GeomAPI_ProjectPointOnCurve^ parameter1);
	void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve);
	void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Curve^ Curve, double Umin, double Usup);
	void Init(Macad::Occt::Geom_Curve^ Curve, double Umin, double Usup);
	void Perform(Macad::Occt::Pnt P);
	int NbPoints();
	Macad::Occt::Pnt Point(int Index);
	double Parameter(int Index);
	void Parameter(int Index, double% U);
	double Distance(int Index);
	Macad::Occt::Pnt NearestPoint();
	double LowerDistanceParameter();
	double LowerDistance();
	Macad::Occt::Extrema_ExtPC^ Extrema();
}; // class GeomAPI_ProjectPointOnCurve

//---------------------------------------------------------------------
//  Class  GeomAPI_ProjectPointOnSurf
//---------------------------------------------------------------------
public ref class GeomAPI_ProjectPointOnSurf sealed : public BaseClass<::GeomAPI_ProjectPointOnSurf>
{

#ifdef Include_GeomAPI_ProjectPointOnSurf_h
public:
	Include_GeomAPI_ProjectPointOnSurf_h
#endif

public:
	GeomAPI_ProjectPointOnSurf(::GeomAPI_ProjectPointOnSurf* nativeInstance)
		: BaseClass<::GeomAPI_ProjectPointOnSurf>( nativeInstance, true )
	{}

	GeomAPI_ProjectPointOnSurf(::GeomAPI_ProjectPointOnSurf& nativeInstance)
		: BaseClass<::GeomAPI_ProjectPointOnSurf>( &nativeInstance, false )
	{}

	property ::GeomAPI_ProjectPointOnSurf* NativeInstance
	{
		::GeomAPI_ProjectPointOnSurf* get()
		{
			return static_cast<::GeomAPI_ProjectPointOnSurf*>(_NativeInstance);
		}
	}

public:
	GeomAPI_ProjectPointOnSurf();
	/* Method skipped due to unknown mapping: void GeomAPI_ProjectPointOnSurf(gp_Pnt P, Geom_Surface Surface, Extrema_ExtAlgo Algo, ) */
	GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface);
	/* Method skipped due to unknown mapping: void GeomAPI_ProjectPointOnSurf(gp_Pnt P, Geom_Surface Surface, Standard_Real Tolerance, Extrema_ExtAlgo Algo, ) */
	GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Tolerance);
	/* Method skipped due to unknown mapping: void GeomAPI_ProjectPointOnSurf(gp_Pnt P, Geom_Surface Surface, Standard_Real Umin, Standard_Real Usup, Standard_Real Vmin, Standard_Real Vsup, Standard_Real Tolerance, Extrema_ExtAlgo Algo, ) */
	GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance);
	/* Method skipped due to unknown mapping: void GeomAPI_ProjectPointOnSurf(gp_Pnt P, Geom_Surface Surface, Standard_Real Umin, Standard_Real Usup, Standard_Real Vmin, Standard_Real Vsup, Extrema_ExtAlgo Algo, ) */
	GeomAPI_ProjectPointOnSurf(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup);
	/* Method skipped due to unknown mapping: void Init(gp_Pnt P, Geom_Surface Surface, Standard_Real Tolerance, Extrema_ExtAlgo Algo, ) */
	void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Tolerance);
	/* Method skipped due to unknown mapping: void Init(gp_Pnt P, Geom_Surface Surface, Extrema_ExtAlgo Algo, ) */
	void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface);
	/* Method skipped due to unknown mapping: void Init(gp_Pnt P, Geom_Surface Surface, Standard_Real Umin, Standard_Real Usup, Standard_Real Vmin, Standard_Real Vsup, Standard_Real Tolerance, Extrema_ExtAlgo Algo, ) */
	void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance);
	/* Method skipped due to unknown mapping: void Init(gp_Pnt P, Geom_Surface Surface, Standard_Real Umin, Standard_Real Usup, Standard_Real Vmin, Standard_Real Vsup, Extrema_ExtAlgo Algo, ) */
	void Init(Macad::Occt::Pnt P, Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup);
	/* Method skipped due to unknown mapping: void Init(Geom_Surface Surface, Standard_Real Umin, Standard_Real Usup, Standard_Real Vmin, Standard_Real Vsup, Standard_Real Tolerance, Extrema_ExtAlgo Algo, ) */
	void Init(Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup, double Tolerance);
	/* Method skipped due to unknown mapping: void Init(Geom_Surface Surface, Standard_Real Umin, Standard_Real Usup, Standard_Real Vmin, Standard_Real Vsup, Extrema_ExtAlgo Algo, ) */
	void Init(Macad::Occt::Geom_Surface^ Surface, double Umin, double Usup, double Vmin, double Vsup);
	/* Method skipped due to unknown mapping: void SetExtremaAlgo(Extrema_ExtAlgo theAlgo, ) */
	/* Method skipped due to unknown mapping: void SetExtremaFlag(Extrema_ExtFlag theExtFlag, ) */
	void Perform(Macad::Occt::Pnt P);
	bool IsDone();
	int NbPoints();
	Macad::Occt::Pnt Point(int Index);
	void Parameters(int Index, double% U, double% V);
	double Distance(int Index);
	Macad::Occt::Pnt NearestPoint();
	void LowerDistanceParameters(double% U, double% V);
	double LowerDistance();
	/* Method skipped due to unknown mapping: Extrema_ExtPS Extrema() */
}; // class GeomAPI_ProjectPointOnSurf

}; // namespace Occt
}; // namespace Macad
