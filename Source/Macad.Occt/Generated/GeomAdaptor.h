// Generated wrapper code for package GeomAdaptor

#pragma once

#include "Adaptor3d.h"
#include "GeomAdaptor.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  GeomAdaptor
//---------------------------------------------------------------------
public ref class GeomAdaptor sealed : public BaseClass<::GeomAdaptor>
{

#ifdef Include_GeomAdaptor_h
public:
	Include_GeomAdaptor_h
#endif

public:
	GeomAdaptor(::GeomAdaptor* nativeInstance)
		: BaseClass<::GeomAdaptor>( nativeInstance, true )
	{}

	GeomAdaptor(::GeomAdaptor& nativeInstance)
		: BaseClass<::GeomAdaptor>( &nativeInstance, false )
	{}

	property ::GeomAdaptor* NativeInstance
	{
		::GeomAdaptor* get()
		{
			return static_cast<::GeomAdaptor*>(_NativeInstance);
		}
	}

public:
	GeomAdaptor();
	GeomAdaptor(Macad::Occt::GeomAdaptor^ parameter1);
	static Macad::Occt::Geom_Curve^ MakeCurve(Macad::Occt::Adaptor3d_Curve^ C);
	static Macad::Occt::Geom_Surface^ MakeSurface(Macad::Occt::Adaptor3d_Surface^ theS, bool theTrimFlag);
	static Macad::Occt::Geom_Surface^ MakeSurface(Macad::Occt::Adaptor3d_Surface^ theS);
}; // class GeomAdaptor

//---------------------------------------------------------------------
//  Class  GeomAdaptor_Curve
//---------------------------------------------------------------------
public ref class GeomAdaptor_Curve sealed : public Macad::Occt::Adaptor3d_Curve
{

#ifdef Include_GeomAdaptor_Curve_h
public:
	Include_GeomAdaptor_Curve_h
#endif

public:
	GeomAdaptor_Curve(::GeomAdaptor_Curve* nativeInstance)
		: Macad::Occt::Adaptor3d_Curve( nativeInstance )
	{}

	GeomAdaptor_Curve(::GeomAdaptor_Curve& nativeInstance)
		: Macad::Occt::Adaptor3d_Curve( nativeInstance )
	{}

	property ::GeomAdaptor_Curve* NativeInstance
	{
		::GeomAdaptor_Curve* get()
		{
			return static_cast<::GeomAdaptor_Curve*>(_NativeInstance);
		}
	}

	static Macad::Occt::GeomAdaptor_Curve^ CreateDowncasted(::GeomAdaptor_Curve* instance);

public:
	GeomAdaptor_Curve();
	GeomAdaptor_Curve(Macad::Occt::Geom_Curve^ theCurve);
	GeomAdaptor_Curve(Macad::Occt::Geom_Curve^ theCurve, double theUFirst, double theULast);
	GeomAdaptor_Curve(Macad::Occt::GeomAdaptor_Curve^ parameter1);
	Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
	void Reset();
	void Load(Macad::Occt::Geom_Curve^ theCurve);
	void Load(Macad::Occt::Geom_Curve^ theCurve, double theUFirst, double theULast);
	Macad::Occt::Geom_Curve^ Curve();
	double FirstParameter();
	double LastParameter();
	Macad::Occt::GeomAbs_Shape Continuity();
	int NbIntervals(Macad::Occt::GeomAbs_Shape S);
	void Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	Macad::Occt::Adaptor3d_Curve^ Trim(double First, double Last, double Tol);
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	Macad::Occt::Pnt Value(double U);
	void D0(double U, Macad::Occt::Pnt% P);
	void D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V);
	void D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	void D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	Macad::Occt::Vec DN(double U, int N);
	double Resolution(double R3d);
	Macad::Occt::GeomAbs_CurveType GetGeomType();
	Macad::Occt::gp_Lin^ Line();
	Macad::Occt::gp_Circ^ Circle();
	Macad::Occt::gp_Elips^ Ellipse();
	Macad::Occt::gp_Hypr^ Hyperbola();
	Macad::Occt::gp_Parab^ Parabola();
	int Degree();
	bool IsRational();
	int NbPoles();
	int NbKnots();
	Macad::Occt::Geom_BezierCurve^ Bezier();
	Macad::Occt::Geom_BSplineCurve^ BSpline();
	Macad::Occt::Geom_OffsetCurve^ OffsetCurve();
}; // class GeomAdaptor_Curve

//---------------------------------------------------------------------
//  Class  GeomAdaptor_Surface
//---------------------------------------------------------------------
public ref class GeomAdaptor_Surface : public Macad::Occt::Adaptor3d_Surface
{

#ifdef Include_GeomAdaptor_Surface_h
public:
	Include_GeomAdaptor_Surface_h
#endif

protected:
	GeomAdaptor_Surface(InitMode init)
		: Macad::Occt::Adaptor3d_Surface( init )
	{}

public:
	GeomAdaptor_Surface(::GeomAdaptor_Surface* nativeInstance)
		: Macad::Occt::Adaptor3d_Surface( nativeInstance )
	{}

	GeomAdaptor_Surface(::GeomAdaptor_Surface& nativeInstance)
		: Macad::Occt::Adaptor3d_Surface( nativeInstance )
	{}

	property ::GeomAdaptor_Surface* NativeInstance
	{
		::GeomAdaptor_Surface* get()
		{
			return static_cast<::GeomAdaptor_Surface*>(_NativeInstance);
		}
	}

	static Macad::Occt::GeomAdaptor_Surface^ CreateDowncasted(::GeomAdaptor_Surface* instance);

public:
	GeomAdaptor_Surface();
	GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf);
	GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU, double theTolV);
	GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU);
	GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast);
	GeomAdaptor_Surface(Macad::Occt::GeomAdaptor_Surface^ parameter1);
	Macad::Occt::Adaptor3d_Surface^ ShallowCopy();
	void Load(Macad::Occt::Geom_Surface^ theSurf);
	void Load(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU, double theTolV);
	void Load(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast, double theTolU);
	void Load(Macad::Occt::Geom_Surface^ theSurf, double theUFirst, double theULast, double theVFirst, double theVLast);
	Macad::Occt::Geom_Surface^ Surface();
	double FirstUParameter();
	double LastUParameter();
	double FirstVParameter();
	double LastVParameter();
	Macad::Occt::GeomAbs_Shape UContinuity();
	Macad::Occt::GeomAbs_Shape VContinuity();
	int NbUIntervals(Macad::Occt::GeomAbs_Shape S);
	int NbVIntervals(Macad::Occt::GeomAbs_Shape S);
	void UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	void VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	Macad::Occt::Adaptor3d_Surface^ UTrim(double First, double Last, double Tol);
	Macad::Occt::Adaptor3d_Surface^ VTrim(double First, double Last, double Tol);
	bool IsUClosed();
	bool IsVClosed();
	bool IsUPeriodic();
	double UPeriod();
	bool IsVPeriodic();
	double VPeriod();
	Macad::Occt::Pnt Value(double U, double V);
	void D0(double U, double V, Macad::Occt::Pnt% P);
	void D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V);
	void D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV);
	void D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV);
	Macad::Occt::Vec DN(double U, double V, int Nu, int Nv);
	double UResolution(double R3d);
	double VResolution(double R3d);
	Macad::Occt::GeomAbs_SurfaceType GetGeomType();
	Macad::Occt::Pln Plane();
	Macad::Occt::gp_Cylinder^ Cylinder();
	Macad::Occt::gp_Cone^ Cone();
	Macad::Occt::gp_Sphere^ Sphere();
	Macad::Occt::gp_Torus^ Torus();
	int UDegree();
	int NbUPoles();
	int VDegree();
	int NbVPoles();
	int NbUKnots();
	int NbVKnots();
	bool IsURational();
	bool IsVRational();
	Macad::Occt::Geom_BezierSurface^ Bezier();
	Macad::Occt::Geom_BSplineSurface^ BSpline();
	Macad::Occt::Ax1 AxeOfRevolution();
	Macad::Occt::Dir Direction();
	Macad::Occt::Adaptor3d_Curve^ BasisCurve();
	Macad::Occt::Adaptor3d_Surface^ BasisSurface();
	double OffsetValue();
}; // class GeomAdaptor_Surface

//---------------------------------------------------------------------
//  Class  GeomAdaptor_SurfaceOfLinearExtrusion
//---------------------------------------------------------------------
public ref class GeomAdaptor_SurfaceOfLinearExtrusion sealed : public Macad::Occt::GeomAdaptor_Surface
{

#ifdef Include_GeomAdaptor_SurfaceOfLinearExtrusion_h
public:
	Include_GeomAdaptor_SurfaceOfLinearExtrusion_h
#endif

public:
	GeomAdaptor_SurfaceOfLinearExtrusion(::GeomAdaptor_SurfaceOfLinearExtrusion* nativeInstance)
		: Macad::Occt::GeomAdaptor_Surface( nativeInstance )
	{}

	GeomAdaptor_SurfaceOfLinearExtrusion(::GeomAdaptor_SurfaceOfLinearExtrusion& nativeInstance)
		: Macad::Occt::GeomAdaptor_Surface( nativeInstance )
	{}

	property ::GeomAdaptor_SurfaceOfLinearExtrusion* NativeInstance
	{
		::GeomAdaptor_SurfaceOfLinearExtrusion* get()
		{
			return static_cast<::GeomAdaptor_SurfaceOfLinearExtrusion*>(_NativeInstance);
		}
	}

	static Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ CreateDowncasted(::GeomAdaptor_SurfaceOfLinearExtrusion* instance);

public:
	GeomAdaptor_SurfaceOfLinearExtrusion();
	GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::Adaptor3d_Curve^ C);
	GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Dir V);
	GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ parameter1);
	Macad::Occt::Adaptor3d_Surface^ ShallowCopy();
	void Load(Macad::Occt::Adaptor3d_Curve^ C);
	void Load(Macad::Occt::Dir V);
	double FirstUParameter();
	double LastUParameter();
	double FirstVParameter();
	double LastVParameter();
	Macad::Occt::GeomAbs_Shape UContinuity();
	Macad::Occt::GeomAbs_Shape VContinuity();
	int NbUIntervals(Macad::Occt::GeomAbs_Shape S);
	int NbVIntervals(Macad::Occt::GeomAbs_Shape S);
	void UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	void VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	Macad::Occt::Adaptor3d_Surface^ UTrim(double First, double Last, double Tol);
	Macad::Occt::Adaptor3d_Surface^ VTrim(double First, double Last, double Tol);
	bool IsUClosed();
	bool IsVClosed();
	bool IsUPeriodic();
	double UPeriod();
	bool IsVPeriodic();
	double VPeriod();
	double UResolution(double R3d);
	double VResolution(double R3d);
	Macad::Occt::GeomAbs_SurfaceType GetGeomType();
	Macad::Occt::Pln Plane();
	Macad::Occt::gp_Cylinder^ Cylinder();
	Macad::Occt::gp_Cone^ Cone();
	Macad::Occt::gp_Sphere^ Sphere();
	Macad::Occt::gp_Torus^ Torus();
	int UDegree();
	int NbUPoles();
	bool IsURational();
	bool IsVRational();
	Macad::Occt::Geom_BezierSurface^ Bezier();
	Macad::Occt::Geom_BSplineSurface^ BSpline();
	Macad::Occt::Ax1 AxeOfRevolution();
	Macad::Occt::Dir Direction();
	Macad::Occt::Adaptor3d_Curve^ BasisCurve();
}; // class GeomAdaptor_SurfaceOfLinearExtrusion

//---------------------------------------------------------------------
//  Class  GeomAdaptor_SurfaceOfRevolution
//---------------------------------------------------------------------
public ref class GeomAdaptor_SurfaceOfRevolution sealed : public Macad::Occt::GeomAdaptor_Surface
{

#ifdef Include_GeomAdaptor_SurfaceOfRevolution_h
public:
	Include_GeomAdaptor_SurfaceOfRevolution_h
#endif

public:
	GeomAdaptor_SurfaceOfRevolution(::GeomAdaptor_SurfaceOfRevolution* nativeInstance)
		: Macad::Occt::GeomAdaptor_Surface( nativeInstance )
	{}

	GeomAdaptor_SurfaceOfRevolution(::GeomAdaptor_SurfaceOfRevolution& nativeInstance)
		: Macad::Occt::GeomAdaptor_Surface( nativeInstance )
	{}

	property ::GeomAdaptor_SurfaceOfRevolution* NativeInstance
	{
		::GeomAdaptor_SurfaceOfRevolution* get()
		{
			return static_cast<::GeomAdaptor_SurfaceOfRevolution*>(_NativeInstance);
		}
	}

	static Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ CreateDowncasted(::GeomAdaptor_SurfaceOfRevolution* instance);

public:
	GeomAdaptor_SurfaceOfRevolution();
	GeomAdaptor_SurfaceOfRevolution(Macad::Occt::Adaptor3d_Curve^ C);
	GeomAdaptor_SurfaceOfRevolution(Macad::Occt::Adaptor3d_Curve^ C, Macad::Occt::Ax1 V);
	GeomAdaptor_SurfaceOfRevolution(Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ parameter1);
	Macad::Occt::Adaptor3d_Surface^ ShallowCopy();
	void Load(Macad::Occt::Adaptor3d_Curve^ C);
	void Load(Macad::Occt::Ax1 V);
	Macad::Occt::Ax1 AxeOfRevolution();
	double FirstUParameter();
	double LastUParameter();
	double FirstVParameter();
	double LastVParameter();
	Macad::Occt::GeomAbs_Shape UContinuity();
	Macad::Occt::GeomAbs_Shape VContinuity();
	int NbUIntervals(Macad::Occt::GeomAbs_Shape S);
	int NbVIntervals(Macad::Occt::GeomAbs_Shape S);
	void UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	void VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	Macad::Occt::Adaptor3d_Surface^ UTrim(double First, double Last, double Tol);
	Macad::Occt::Adaptor3d_Surface^ VTrim(double First, double Last, double Tol);
	bool IsUClosed();
	bool IsVClosed();
	bool IsUPeriodic();
	double UPeriod();
	bool IsVPeriodic();
	double VPeriod();
	double UResolution(double R3d);
	double VResolution(double R3d);
	Macad::Occt::GeomAbs_SurfaceType GetGeomType();
	Macad::Occt::Pln Plane();
	Macad::Occt::gp_Cylinder^ Cylinder();
	Macad::Occt::gp_Cone^ Cone();
	Macad::Occt::gp_Sphere^ Sphere();
	Macad::Occt::gp_Torus^ Torus();
	int VDegree();
	int NbVPoles();
	int NbVKnots();
	bool IsURational();
	bool IsVRational();
	Macad::Occt::Geom_BezierSurface^ Bezier();
	Macad::Occt::Geom_BSplineSurface^ BSpline();
	Macad::Occt::Ax3 Axis();
	Macad::Occt::Adaptor3d_Curve^ BasisCurve();
}; // class GeomAdaptor_SurfaceOfRevolution

}; // namespace Occt
}; // namespace Macad
