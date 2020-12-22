// Generated wrapper code for package GeomAdaptor

#pragma once

#include "Adaptor3d.h"
#include "GeomAdaptor.h"

namespace Macad
{
namespace Occt
{
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

public:
	GeomAdaptor_Curve();
	GeomAdaptor_Curve(Macad::Occt::Geom_Curve^ C);
	GeomAdaptor_Curve(Macad::Occt::Geom_Curve^ C, double UFirst, double ULast);
	GeomAdaptor_Curve(Macad::Occt::GeomAdaptor_Curve^ parameter1);
	void Reset();
	void Load(Macad::Occt::Geom_Curve^ C);
	void Load(Macad::Occt::Geom_Curve^ C, double UFirst, double ULast);
	Macad::Occt::Geom_Curve^ Curve();
	double FirstParameter();
	double LastParameter();
	Macad::Occt::GeomAbs_Shape Continuity();
	int NbIntervals(Macad::Occt::GeomAbs_Shape S);
	void Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	Macad::Occt::Adaptor3d_HCurve^ Trim(double First, double Last, double Tol);
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
	Macad::Occt::GeomAbs_CurveType GetTypeOcc();
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

public:
	GeomAdaptor_Surface();
	GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ S);
	GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double TolU, double TolV);
	GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double TolU);
	GeomAdaptor_Surface(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast);
	GeomAdaptor_Surface(Macad::Occt::GeomAdaptor_Surface^ parameter1);
	void Load(Macad::Occt::Geom_Surface^ S);
	void Load(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double TolU, double TolV);
	void Load(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double TolU);
	void Load(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast);
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
	Macad::Occt::Adaptor3d_HSurface^ UTrim(double First, double Last, double Tol);
	Macad::Occt::Adaptor3d_HSurface^ VTrim(double First, double Last, double Tol);
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
	Macad::Occt::GeomAbs_SurfaceType GetTypeOcc();
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
	Macad::Occt::Adaptor3d_HCurve^ BasisCurve();
	Macad::Occt::Adaptor3d_HSurface^ BasisSurface();
	double OffsetValue();
}; // class GeomAdaptor_Surface

//---------------------------------------------------------------------
//  Class  GeomAdaptor_GHSurface
//---------------------------------------------------------------------
public ref class GeomAdaptor_GHSurface : public Macad::Occt::Adaptor3d_HSurface
{

#ifdef Include_GeomAdaptor_GHSurface_h
public:
	Include_GeomAdaptor_GHSurface_h
#endif

protected:
	GeomAdaptor_GHSurface(InitMode init)
		: Macad::Occt::Adaptor3d_HSurface( init )
	{}

public:
	GeomAdaptor_GHSurface(::GeomAdaptor_GHSurface* nativeInstance)
		: Macad::Occt::Adaptor3d_HSurface( nativeInstance )
	{}

	GeomAdaptor_GHSurface(::GeomAdaptor_GHSurface& nativeInstance)
		: Macad::Occt::Adaptor3d_HSurface( nativeInstance )
	{}

	property ::GeomAdaptor_GHSurface* NativeInstance
	{
		::GeomAdaptor_GHSurface* get()
		{
			return static_cast<::GeomAdaptor_GHSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::GeomAdaptor_GHSurface^ CreateDowncasted(::GeomAdaptor_GHSurface* instance);

public:
	GeomAdaptor_GHSurface();
	GeomAdaptor_GHSurface(Macad::Occt::GeomAdaptor_Surface^ S);
	GeomAdaptor_GHSurface(Macad::Occt::GeomAdaptor_GHSurface^ parameter1);
	void Set(Macad::Occt::GeomAdaptor_Surface^ S);
	Macad::Occt::Adaptor3d_Surface^ Surface();
	Macad::Occt::GeomAdaptor_Surface^ ChangeSurface();
}; // class GeomAdaptor_GHSurface

//---------------------------------------------------------------------
//  Class  GeomAdaptor_HSurface
//---------------------------------------------------------------------
public ref class GeomAdaptor_HSurface sealed : public Macad::Occt::GeomAdaptor_GHSurface
{

#ifdef Include_GeomAdaptor_HSurface_h
public:
	Include_GeomAdaptor_HSurface_h
#endif

public:
	GeomAdaptor_HSurface(::GeomAdaptor_HSurface* nativeInstance)
		: Macad::Occt::GeomAdaptor_GHSurface( nativeInstance )
	{}

	GeomAdaptor_HSurface(::GeomAdaptor_HSurface& nativeInstance)
		: Macad::Occt::GeomAdaptor_GHSurface( nativeInstance )
	{}

	property ::GeomAdaptor_HSurface* NativeInstance
	{
		::GeomAdaptor_HSurface* get()
		{
			return static_cast<::GeomAdaptor_HSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::GeomAdaptor_HSurface^ CreateDowncasted(::GeomAdaptor_HSurface* instance);

public:
	GeomAdaptor_HSurface();
	GeomAdaptor_HSurface(Macad::Occt::GeomAdaptor_Surface^ AS);
	GeomAdaptor_HSurface(Macad::Occt::Geom_Surface^ S);
	GeomAdaptor_HSurface(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double TolU, double TolV);
	GeomAdaptor_HSurface(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double TolU);
	GeomAdaptor_HSurface(Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast);
	GeomAdaptor_HSurface(Macad::Occt::GeomAdaptor_HSurface^ parameter1);
}; // class GeomAdaptor_HSurface

//---------------------------------------------------------------------
//  Class  GeomAdaptor_GHCurve
//---------------------------------------------------------------------
public ref class GeomAdaptor_GHCurve : public Macad::Occt::Adaptor3d_HCurve
{

#ifdef Include_GeomAdaptor_GHCurve_h
public:
	Include_GeomAdaptor_GHCurve_h
#endif

protected:
	GeomAdaptor_GHCurve(InitMode init)
		: Macad::Occt::Adaptor3d_HCurve( init )
	{}

public:
	GeomAdaptor_GHCurve(::GeomAdaptor_GHCurve* nativeInstance)
		: Macad::Occt::Adaptor3d_HCurve( nativeInstance )
	{}

	GeomAdaptor_GHCurve(::GeomAdaptor_GHCurve& nativeInstance)
		: Macad::Occt::Adaptor3d_HCurve( nativeInstance )
	{}

	property ::GeomAdaptor_GHCurve* NativeInstance
	{
		::GeomAdaptor_GHCurve* get()
		{
			return static_cast<::GeomAdaptor_GHCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::GeomAdaptor_GHCurve^ CreateDowncasted(::GeomAdaptor_GHCurve* instance);

public:
	GeomAdaptor_GHCurve();
	GeomAdaptor_GHCurve(Macad::Occt::GeomAdaptor_Curve^ C);
	GeomAdaptor_GHCurve(Macad::Occt::GeomAdaptor_GHCurve^ parameter1);
	void Set(Macad::Occt::GeomAdaptor_Curve^ C);
	Macad::Occt::Adaptor3d_Curve^ Curve();
	Macad::Occt::Adaptor3d_Curve^ GetCurve();
	Macad::Occt::GeomAdaptor_Curve^ ChangeCurve();
}; // class GeomAdaptor_GHCurve

//---------------------------------------------------------------------
//  Class  GeomAdaptor_HCurve
//---------------------------------------------------------------------
public ref class GeomAdaptor_HCurve sealed : public Macad::Occt::GeomAdaptor_GHCurve
{

#ifdef Include_GeomAdaptor_HCurve_h
public:
	Include_GeomAdaptor_HCurve_h
#endif

public:
	GeomAdaptor_HCurve(::GeomAdaptor_HCurve* nativeInstance)
		: Macad::Occt::GeomAdaptor_GHCurve( nativeInstance )
	{}

	GeomAdaptor_HCurve(::GeomAdaptor_HCurve& nativeInstance)
		: Macad::Occt::GeomAdaptor_GHCurve( nativeInstance )
	{}

	property ::GeomAdaptor_HCurve* NativeInstance
	{
		::GeomAdaptor_HCurve* get()
		{
			return static_cast<::GeomAdaptor_HCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::GeomAdaptor_HCurve^ CreateDowncasted(::GeomAdaptor_HCurve* instance);

public:
	GeomAdaptor_HCurve();
	GeomAdaptor_HCurve(Macad::Occt::GeomAdaptor_Curve^ AS);
	GeomAdaptor_HCurve(Macad::Occt::Geom_Curve^ S);
	GeomAdaptor_HCurve(Macad::Occt::Geom_Curve^ S, double UFirst, double ULast);
	GeomAdaptor_HCurve(Macad::Occt::GeomAdaptor_HCurve^ parameter1);
}; // class GeomAdaptor_HCurve

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

public:
	GeomAdaptor_SurfaceOfLinearExtrusion();
	GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::Adaptor3d_HCurve^ C);
	GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::Adaptor3d_HCurve^ C, Macad::Occt::Dir V);
	GeomAdaptor_SurfaceOfLinearExtrusion(Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ parameter1);
	void Load(Macad::Occt::Adaptor3d_HCurve^ C);
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
	Macad::Occt::Adaptor3d_HSurface^ UTrim(double First, double Last, double Tol);
	Macad::Occt::Adaptor3d_HSurface^ VTrim(double First, double Last, double Tol);
	bool IsUClosed();
	bool IsVClosed();
	bool IsUPeriodic();
	double UPeriod();
	bool IsVPeriodic();
	double VPeriod();
	double UResolution(double R3d);
	double VResolution(double R3d);
	Macad::Occt::GeomAbs_SurfaceType GetTypeOcc();
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
	Macad::Occt::Adaptor3d_HCurve^ BasisCurve();
}; // class GeomAdaptor_SurfaceOfLinearExtrusion

//---------------------------------------------------------------------
//  Class  GeomAdaptor_HSurfaceOfLinearExtrusion
//---------------------------------------------------------------------
public ref class GeomAdaptor_HSurfaceOfLinearExtrusion sealed : public Macad::Occt::Adaptor3d_HSurface
{

#ifdef Include_GeomAdaptor_HSurfaceOfLinearExtrusion_h
public:
	Include_GeomAdaptor_HSurfaceOfLinearExtrusion_h
#endif

public:
	GeomAdaptor_HSurfaceOfLinearExtrusion(::GeomAdaptor_HSurfaceOfLinearExtrusion* nativeInstance)
		: Macad::Occt::Adaptor3d_HSurface( nativeInstance )
	{}

	GeomAdaptor_HSurfaceOfLinearExtrusion(::GeomAdaptor_HSurfaceOfLinearExtrusion& nativeInstance)
		: Macad::Occt::Adaptor3d_HSurface( nativeInstance )
	{}

	property ::GeomAdaptor_HSurfaceOfLinearExtrusion* NativeInstance
	{
		::GeomAdaptor_HSurfaceOfLinearExtrusion* get()
		{
			return static_cast<::GeomAdaptor_HSurfaceOfLinearExtrusion*>(_NativeInstance);
		}
	}

	static Macad::Occt::GeomAdaptor_HSurfaceOfLinearExtrusion^ CreateDowncasted(::GeomAdaptor_HSurfaceOfLinearExtrusion* instance);

public:
	GeomAdaptor_HSurfaceOfLinearExtrusion();
	GeomAdaptor_HSurfaceOfLinearExtrusion(Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ S);
	GeomAdaptor_HSurfaceOfLinearExtrusion(Macad::Occt::GeomAdaptor_HSurfaceOfLinearExtrusion^ parameter1);
	void Set(Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ S);
	Macad::Occt::Adaptor3d_Surface^ Surface();
	Macad::Occt::GeomAdaptor_SurfaceOfLinearExtrusion^ ChangeSurface();
}; // class GeomAdaptor_HSurfaceOfLinearExtrusion

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

public:
	GeomAdaptor_SurfaceOfRevolution();
	GeomAdaptor_SurfaceOfRevolution(Macad::Occt::Adaptor3d_HCurve^ C);
	GeomAdaptor_SurfaceOfRevolution(Macad::Occt::Adaptor3d_HCurve^ C, Macad::Occt::Ax1 V);
	GeomAdaptor_SurfaceOfRevolution(Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ parameter1);
	void Load(Macad::Occt::Adaptor3d_HCurve^ C);
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
	Macad::Occt::Adaptor3d_HSurface^ UTrim(double First, double Last, double Tol);
	Macad::Occt::Adaptor3d_HSurface^ VTrim(double First, double Last, double Tol);
	bool IsUClosed();
	bool IsVClosed();
	bool IsUPeriodic();
	double UPeriod();
	bool IsVPeriodic();
	double VPeriod();
	double UResolution(double R3d);
	double VResolution(double R3d);
	Macad::Occt::GeomAbs_SurfaceType GetTypeOcc();
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
	Macad::Occt::Adaptor3d_HCurve^ BasisCurve();
}; // class GeomAdaptor_SurfaceOfRevolution

//---------------------------------------------------------------------
//  Class  GeomAdaptor_HSurfaceOfRevolution
//---------------------------------------------------------------------
public ref class GeomAdaptor_HSurfaceOfRevolution sealed : public Macad::Occt::Adaptor3d_HSurface
{

#ifdef Include_GeomAdaptor_HSurfaceOfRevolution_h
public:
	Include_GeomAdaptor_HSurfaceOfRevolution_h
#endif

public:
	GeomAdaptor_HSurfaceOfRevolution(::GeomAdaptor_HSurfaceOfRevolution* nativeInstance)
		: Macad::Occt::Adaptor3d_HSurface( nativeInstance )
	{}

	GeomAdaptor_HSurfaceOfRevolution(::GeomAdaptor_HSurfaceOfRevolution& nativeInstance)
		: Macad::Occt::Adaptor3d_HSurface( nativeInstance )
	{}

	property ::GeomAdaptor_HSurfaceOfRevolution* NativeInstance
	{
		::GeomAdaptor_HSurfaceOfRevolution* get()
		{
			return static_cast<::GeomAdaptor_HSurfaceOfRevolution*>(_NativeInstance);
		}
	}

	static Macad::Occt::GeomAdaptor_HSurfaceOfRevolution^ CreateDowncasted(::GeomAdaptor_HSurfaceOfRevolution* instance);

public:
	GeomAdaptor_HSurfaceOfRevolution();
	GeomAdaptor_HSurfaceOfRevolution(Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ S);
	GeomAdaptor_HSurfaceOfRevolution(Macad::Occt::GeomAdaptor_HSurfaceOfRevolution^ parameter1);
	void Set(Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ S);
	Macad::Occt::Adaptor3d_Surface^ Surface();
	Macad::Occt::GeomAdaptor_SurfaceOfRevolution^ ChangeSurface();
}; // class GeomAdaptor_HSurfaceOfRevolution

}; // namespace Occt
}; // namespace Macad
