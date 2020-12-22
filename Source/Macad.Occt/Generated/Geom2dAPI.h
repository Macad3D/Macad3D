// Generated wrapper code for package Geom2dAPI

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Geom2dAPI_ExtremaCurveCurve
//---------------------------------------------------------------------
public ref class Geom2dAPI_ExtremaCurveCurve sealed : public BaseClass<::Geom2dAPI_ExtremaCurveCurve>
{

#ifdef Include_Geom2dAPI_ExtremaCurveCurve_h
public:
	Include_Geom2dAPI_ExtremaCurveCurve_h
#endif

public:
	Geom2dAPI_ExtremaCurveCurve(::Geom2dAPI_ExtremaCurveCurve* nativeInstance)
		: BaseClass<::Geom2dAPI_ExtremaCurveCurve>( nativeInstance, true )
	{}

	Geom2dAPI_ExtremaCurveCurve(::Geom2dAPI_ExtremaCurveCurve& nativeInstance)
		: BaseClass<::Geom2dAPI_ExtremaCurveCurve>( &nativeInstance, false )
	{}

	property ::Geom2dAPI_ExtremaCurveCurve* NativeInstance
	{
		::Geom2dAPI_ExtremaCurveCurve* get()
		{
			return static_cast<::Geom2dAPI_ExtremaCurveCurve*>(_NativeInstance);
		}
	}

public:
	Geom2dAPI_ExtremaCurveCurve(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double U1min, double U1max, double U2min, double U2max);
	Geom2dAPI_ExtremaCurveCurve(Macad::Occt::Geom2dAPI_ExtremaCurveCurve^ parameter1);
	int NbExtrema();
	void Points(int Index, Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2);
	void Parameters(int Index, double% U1, double% U2);
	double Distance(int Index);
	void NearestPoints(Macad::Occt::Pnt2d% P1, Macad::Occt::Pnt2d% P2);
	void LowerDistanceParameters(double% U1, double% U2);
	double LowerDistance();
	/* Method skipped due to unknown mapping: Extrema_ExtCC2d Extrema() */
}; // class Geom2dAPI_ExtremaCurveCurve

//---------------------------------------------------------------------
//  Class  Geom2dAPI_InterCurveCurve
//---------------------------------------------------------------------
public ref class Geom2dAPI_InterCurveCurve sealed : public BaseClass<::Geom2dAPI_InterCurveCurve>
{

#ifdef Include_Geom2dAPI_InterCurveCurve_h
public:
	Include_Geom2dAPI_InterCurveCurve_h
#endif

public:
	Geom2dAPI_InterCurveCurve(::Geom2dAPI_InterCurveCurve* nativeInstance)
		: BaseClass<::Geom2dAPI_InterCurveCurve>( nativeInstance, true )
	{}

	Geom2dAPI_InterCurveCurve(::Geom2dAPI_InterCurveCurve& nativeInstance)
		: BaseClass<::Geom2dAPI_InterCurveCurve>( &nativeInstance, false )
	{}

	property ::Geom2dAPI_InterCurveCurve* NativeInstance
	{
		::Geom2dAPI_InterCurveCurve* get()
		{
			return static_cast<::Geom2dAPI_InterCurveCurve*>(_NativeInstance);
		}
	}

public:
	Geom2dAPI_InterCurveCurve();
	Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double Tol);
	Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2);
	Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1, double Tol);
	Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2d_Curve^ C1);
	Geom2dAPI_InterCurveCurve(Macad::Occt::Geom2dAPI_InterCurveCurve^ parameter1);
	void Init(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double Tol);
	void Init(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2);
	void Init(Macad::Occt::Geom2d_Curve^ C1, double Tol);
	void Init(Macad::Occt::Geom2d_Curve^ C1);
	int NbPoints();
	Macad::Occt::Pnt2d Point(int Index);
	int NbSegments();
	void Segment(int Index, Macad::Occt::Geom2d_Curve^ Curve1, Macad::Occt::Geom2d_Curve^ Curve2);
	/* Method skipped due to unknown mapping: Geom2dInt_GInter Intersector() */
}; // class Geom2dAPI_InterCurveCurve

//---------------------------------------------------------------------
//  Class  Geom2dAPI_Interpolate
//---------------------------------------------------------------------
public ref class Geom2dAPI_Interpolate sealed : public BaseClass<::Geom2dAPI_Interpolate>
{

#ifdef Include_Geom2dAPI_Interpolate_h
public:
	Include_Geom2dAPI_Interpolate_h
#endif

public:
	Geom2dAPI_Interpolate(::Geom2dAPI_Interpolate* nativeInstance)
		: BaseClass<::Geom2dAPI_Interpolate>( nativeInstance, true )
	{}

	Geom2dAPI_Interpolate(::Geom2dAPI_Interpolate& nativeInstance)
		: BaseClass<::Geom2dAPI_Interpolate>( &nativeInstance, false )
	{}

	property ::Geom2dAPI_Interpolate* NativeInstance
	{
		::Geom2dAPI_Interpolate* get()
		{
			return static_cast<::Geom2dAPI_Interpolate*>(_NativeInstance);
		}
	}

public:
	Geom2dAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt2d^ Points, bool PeriodicFlag, double Tolerance);
	Geom2dAPI_Interpolate(Macad::Occt::TColgp_HArray1OfPnt2d^ Points, Macad::Occt::TColStd_HArray1OfReal^ Parameters, bool PeriodicFlag, double Tolerance);
	Geom2dAPI_Interpolate(Macad::Occt::Geom2dAPI_Interpolate^ parameter1);
	void Load(Macad::Occt::Vec2d InitialTangent, Macad::Occt::Vec2d FinalTangent, bool Scale);
	void Load(Macad::Occt::Vec2d InitialTangent, Macad::Occt::Vec2d FinalTangent);
	void Load(Macad::Occt::TColgp_Array1OfVec2d^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags, bool Scale);
	void Load(Macad::Occt::TColgp_Array1OfVec2d^ Tangents, Macad::Occt::TColStd_HArray1OfBoolean^ TangentFlags);
	void ClearTangents();
	void Perform();
	Macad::Occt::Geom2d_BSplineCurve^ Curve();
	bool IsDone();
}; // class Geom2dAPI_Interpolate

//---------------------------------------------------------------------
//  Class  Geom2dAPI_PointsToBSpline
//---------------------------------------------------------------------
public ref class Geom2dAPI_PointsToBSpline sealed : public BaseClass<::Geom2dAPI_PointsToBSpline>
{

#ifdef Include_Geom2dAPI_PointsToBSpline_h
public:
	Include_Geom2dAPI_PointsToBSpline_h
#endif

public:
	Geom2dAPI_PointsToBSpline(::Geom2dAPI_PointsToBSpline* nativeInstance)
		: BaseClass<::Geom2dAPI_PointsToBSpline>( nativeInstance, true )
	{}

	Geom2dAPI_PointsToBSpline(::Geom2dAPI_PointsToBSpline& nativeInstance)
		: BaseClass<::Geom2dAPI_PointsToBSpline>( &nativeInstance, false )
	{}

	property ::Geom2dAPI_PointsToBSpline* NativeInstance
	{
		::Geom2dAPI_PointsToBSpline* get()
		{
			return static_cast<::Geom2dAPI_PointsToBSpline*>(_NativeInstance);
		}
	}

public:
	Geom2dAPI_PointsToBSpline();
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX);
	/* Method skipped due to unknown mapping: void Geom2dAPI_PointsToBSpline(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol2D, ) */
	/* Method skipped due to unknown mapping: void Geom2dAPI_PointsToBSpline(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol2D, ) */
	/* Method skipped due to unknown mapping: void Geom2dAPI_PointsToBSpline(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol2D, ) */
	/* Method skipped due to unknown mapping: void Geom2dAPI_PointsToBSpline(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol2D, ) */
	/* Method skipped due to unknown mapping: void Geom2dAPI_PointsToBSpline(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol2D, ) */
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol3D);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax);
	Geom2dAPI_PointsToBSpline(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3);
	Geom2dAPI_PointsToBSpline(Macad::Occt::Geom2dAPI_PointsToBSpline^ parameter1);
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin, int DegMax);
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, int DegMin);
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points);
	void Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
	void Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	void Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin, int DegMax);
	void Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX, int DegMin);
	void Init(Macad::Occt::TColStd_Array1OfReal^ YValues, double X0, double DX);
	/* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol2D, ) */
	/* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol2D, ) */
	/* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol2D, ) */
	/* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol2D, ) */
	/* Method skipped due to unknown mapping: void Init(TColgp_Array1OfPnt2d Points, Approx_ParametrizationType ParType, Standard_Integer DegMin, Standard_Integer DegMax, GeomAbs_Shape Continuity, Standard_Real Tol2D, ) */
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin, int DegMax);
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters, int DegMin);
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, Macad::Occt::TColStd_Array1OfReal^ Parameters);
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity, double Tol2D);
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax, Macad::Occt::GeomAbs_Shape Continuity);
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3, int DegMax);
	void Init(Macad::Occt::TColgp_Array1OfPnt2d^ Points, double Weight1, double Weight2, double Weight3);
	Macad::Occt::Geom2d_BSplineCurve^ Curve();
	bool IsDone();
}; // class Geom2dAPI_PointsToBSpline

//---------------------------------------------------------------------
//  Class  Geom2dAPI_ProjectPointOnCurve
//---------------------------------------------------------------------
public ref class Geom2dAPI_ProjectPointOnCurve sealed : public BaseClass<::Geom2dAPI_ProjectPointOnCurve>
{

#ifdef Include_Geom2dAPI_ProjectPointOnCurve_h
public:
	Include_Geom2dAPI_ProjectPointOnCurve_h
#endif

public:
	Geom2dAPI_ProjectPointOnCurve(::Geom2dAPI_ProjectPointOnCurve* nativeInstance)
		: BaseClass<::Geom2dAPI_ProjectPointOnCurve>( nativeInstance, true )
	{}

	Geom2dAPI_ProjectPointOnCurve(::Geom2dAPI_ProjectPointOnCurve& nativeInstance)
		: BaseClass<::Geom2dAPI_ProjectPointOnCurve>( &nativeInstance, false )
	{}

	property ::Geom2dAPI_ProjectPointOnCurve* NativeInstance
	{
		::Geom2dAPI_ProjectPointOnCurve* get()
		{
			return static_cast<::Geom2dAPI_ProjectPointOnCurve*>(_NativeInstance);
		}
	}

public:
	Geom2dAPI_ProjectPointOnCurve();
	Geom2dAPI_ProjectPointOnCurve(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve);
	Geom2dAPI_ProjectPointOnCurve(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve, double Umin, double Usup);
	Geom2dAPI_ProjectPointOnCurve(Macad::Occt::Geom2dAPI_ProjectPointOnCurve^ parameter1);
	void Init(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve);
	void Init(Macad::Occt::Pnt2d P, Macad::Occt::Geom2d_Curve^ Curve, double Umin, double Usup);
	int NbPoints();
	Macad::Occt::Pnt2d Point(int Index);
	double Parameter(int Index);
	void Parameter(int Index, double% U);
	double Distance(int Index);
	Macad::Occt::Pnt2d NearestPoint();
	double LowerDistanceParameter();
	double LowerDistance();
	/* Method skipped due to unknown mapping: Extrema_ExtPC2d Extrema() */
}; // class Geom2dAPI_ProjectPointOnCurve

}; // namespace Occt
}; // namespace Macad
