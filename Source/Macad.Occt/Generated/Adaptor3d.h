// Generated wrapper code for package Adaptor3d

#pragma once

#include "Adaptor3d.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Adaptor3d_Curve
//---------------------------------------------------------------------
public ref class Adaptor3d_Curve : public Macad::Occt::Standard_Transient
{

#ifdef Include_Adaptor3d_Curve_h
public:
	Include_Adaptor3d_Curve_h
#endif

protected:
	Adaptor3d_Curve(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Adaptor3d_Curve(::Adaptor3d_Curve* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Adaptor3d_Curve(::Adaptor3d_Curve& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Adaptor3d_Curve* NativeInstance
	{
		::Adaptor3d_Curve* get()
		{
			return static_cast<::Adaptor3d_Curve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Adaptor3d_Curve^ CreateDowncasted(::Adaptor3d_Curve* instance);

public:
	Adaptor3d_Curve(Macad::Occt::Adaptor3d_Curve^ parameter1);
	Adaptor3d_Curve();
	Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
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
}; // class Adaptor3d_Curve

//---------------------------------------------------------------------
//  Class  Adaptor3d_Surface
//---------------------------------------------------------------------
public ref class Adaptor3d_Surface : public Macad::Occt::Standard_Transient
{

#ifdef Include_Adaptor3d_Surface_h
public:
	Include_Adaptor3d_Surface_h
#endif

protected:
	Adaptor3d_Surface(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Adaptor3d_Surface(::Adaptor3d_Surface* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Adaptor3d_Surface(::Adaptor3d_Surface& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Adaptor3d_Surface* NativeInstance
	{
		::Adaptor3d_Surface* get()
		{
			return static_cast<::Adaptor3d_Surface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Adaptor3d_Surface^ CreateDowncasted(::Adaptor3d_Surface* instance);

public:
	Adaptor3d_Surface(Macad::Occt::Adaptor3d_Surface^ parameter1);
	Adaptor3d_Surface();
	Macad::Occt::Adaptor3d_Surface^ ShallowCopy();
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
}; // class Adaptor3d_Surface

//---------------------------------------------------------------------
//  Class  Adaptor3d_CurveOnSurface
//---------------------------------------------------------------------
public ref class Adaptor3d_CurveOnSurface sealed : public Macad::Occt::Adaptor3d_Curve
{

#ifdef Include_Adaptor3d_CurveOnSurface_h
public:
	Include_Adaptor3d_CurveOnSurface_h
#endif

public:
	Adaptor3d_CurveOnSurface(::Adaptor3d_CurveOnSurface* nativeInstance)
		: Macad::Occt::Adaptor3d_Curve( nativeInstance )
	{}

	Adaptor3d_CurveOnSurface(::Adaptor3d_CurveOnSurface& nativeInstance)
		: Macad::Occt::Adaptor3d_Curve( nativeInstance )
	{}

	property ::Adaptor3d_CurveOnSurface* NativeInstance
	{
		::Adaptor3d_CurveOnSurface* get()
		{
			return static_cast<::Adaptor3d_CurveOnSurface*>(_NativeInstance);
		}
	}

	static Macad::Occt::Adaptor3d_CurveOnSurface^ CreateDowncasted(::Adaptor3d_CurveOnSurface* instance);

public:
	Adaptor3d_CurveOnSurface();
	Adaptor3d_CurveOnSurface(Macad::Occt::Adaptor3d_Surface^ S);
	Adaptor3d_CurveOnSurface(Macad::Occt::Adaptor2d_Curve2d^ C, Macad::Occt::Adaptor3d_Surface^ S);
	Adaptor3d_CurveOnSurface(Macad::Occt::Adaptor3d_CurveOnSurface^ parameter1);
	Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
	void Load(Macad::Occt::Adaptor3d_Surface^ S);
	void Load(Macad::Occt::Adaptor2d_Curve2d^ C);
	void Load(Macad::Occt::Adaptor2d_Curve2d^ C, Macad::Occt::Adaptor3d_Surface^ S);
	Macad::Occt::Adaptor2d_Curve2d^ GetCurve();
	Macad::Occt::Adaptor3d_Surface^ GetSurface();
	Macad::Occt::Adaptor2d_Curve2d^ ChangeCurve();
	Macad::Occt::Adaptor3d_Surface^ ChangeSurface();
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
}; // class Adaptor3d_CurveOnSurface

//---------------------------------------------------------------------
//  Class  Adaptor3d_HSurfaceTool
//---------------------------------------------------------------------
public ref class Adaptor3d_HSurfaceTool sealed : public BaseClass<::Adaptor3d_HSurfaceTool>
{

#ifdef Include_Adaptor3d_HSurfaceTool_h
public:
	Include_Adaptor3d_HSurfaceTool_h
#endif

public:
	Adaptor3d_HSurfaceTool(::Adaptor3d_HSurfaceTool* nativeInstance)
		: BaseClass<::Adaptor3d_HSurfaceTool>( nativeInstance, true )
	{}

	Adaptor3d_HSurfaceTool(::Adaptor3d_HSurfaceTool& nativeInstance)
		: BaseClass<::Adaptor3d_HSurfaceTool>( &nativeInstance, false )
	{}

	property ::Adaptor3d_HSurfaceTool* NativeInstance
	{
		::Adaptor3d_HSurfaceTool* get()
		{
			return static_cast<::Adaptor3d_HSurfaceTool*>(_NativeInstance);
		}
	}

public:
	Adaptor3d_HSurfaceTool();
	Adaptor3d_HSurfaceTool(Macad::Occt::Adaptor3d_HSurfaceTool^ parameter1);
	static double FirstUParameter(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static double FirstVParameter(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static double LastUParameter(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static double LastVParameter(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static int NbUIntervals(Macad::Occt::Adaptor3d_Surface^ theSurf, Macad::Occt::GeomAbs_Shape theSh);
	static int NbVIntervals(Macad::Occt::Adaptor3d_Surface^ theSurf, Macad::Occt::GeomAbs_Shape theSh);
	static void UIntervals(Macad::Occt::Adaptor3d_Surface^ theSurf, Macad::Occt::TColStd_Array1OfReal^ theTab, Macad::Occt::GeomAbs_Shape theSh);
	static void VIntervals(Macad::Occt::Adaptor3d_Surface^ theSurf, Macad::Occt::TColStd_Array1OfReal^ theTab, Macad::Occt::GeomAbs_Shape theSh);
	static Macad::Occt::Adaptor3d_Surface^ UTrim(Macad::Occt::Adaptor3d_Surface^ theSurf, double theFirst, double theLast, double theTol);
	static Macad::Occt::Adaptor3d_Surface^ VTrim(Macad::Occt::Adaptor3d_Surface^ theSurf, double theFirst, double theLast, double theTol);
	static bool IsUClosed(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static bool IsVClosed(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static bool IsUPeriodic(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static double UPeriod(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static bool IsVPeriodic(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static double VPeriod(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static Macad::Occt::Pnt Value(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV);
	static void D0(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, Macad::Occt::Pnt% thePnt);
	static void D1(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, Macad::Occt::Pnt% thePnt, Macad::Occt::Vec% theD1U, Macad::Occt::Vec% theD1V);
	static void D2(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, Macad::Occt::Pnt% thePnt, Macad::Occt::Vec% theD1U, Macad::Occt::Vec% theD1V, Macad::Occt::Vec% theD2U, Macad::Occt::Vec% theD2V, Macad::Occt::Vec% theD2UV);
	static void D3(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, Macad::Occt::Pnt% thePnt, Macad::Occt::Vec% theD1U, Macad::Occt::Vec% theD1V, Macad::Occt::Vec% theD2U, Macad::Occt::Vec% theD2V, Macad::Occt::Vec% theD2UV, Macad::Occt::Vec% theD3U, Macad::Occt::Vec% theD3V, Macad::Occt::Vec% theD3UUV, Macad::Occt::Vec% theD3UVV);
	static Macad::Occt::Vec DN(Macad::Occt::Adaptor3d_Surface^ theSurf, double theU, double theV, int theNU, int theNV);
	static double UResolution(Macad::Occt::Adaptor3d_Surface^ theSurf, double theR3d);
	static double VResolution(Macad::Occt::Adaptor3d_Surface^ theSurf, double theR3d);
	static Macad::Occt::GeomAbs_SurfaceType GetGeomType(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static Macad::Occt::Pln Plane(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static Macad::Occt::gp_Cylinder^ Cylinder(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static Macad::Occt::gp_Cone^ Cone(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static Macad::Occt::gp_Torus^ Torus(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static Macad::Occt::gp_Sphere^ Sphere(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static Macad::Occt::Geom_BezierSurface^ Bezier(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static Macad::Occt::Geom_BSplineSurface^ BSpline(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static Macad::Occt::Ax1 AxeOfRevolution(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static Macad::Occt::Dir Direction(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static Macad::Occt::Adaptor3d_Curve^ BasisCurve(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static Macad::Occt::Adaptor3d_Surface^ BasisSurface(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static double OffsetValue(Macad::Occt::Adaptor3d_Surface^ theSurf);
	static int NbSamplesU(Macad::Occt::Adaptor3d_Surface^ S);
	static int NbSamplesV(Macad::Occt::Adaptor3d_Surface^ S);
	static int NbSamplesU(Macad::Occt::Adaptor3d_Surface^ S, double u1, double u2);
	static int NbSamplesV(Macad::Occt::Adaptor3d_Surface^ parameter1, double v1, double v2);
}; // class Adaptor3d_HSurfaceTool

//---------------------------------------------------------------------
//  Class  Adaptor3d_HVertex
//---------------------------------------------------------------------
public ref class Adaptor3d_HVertex sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Adaptor3d_HVertex_h
public:
	Include_Adaptor3d_HVertex_h
#endif

public:
	Adaptor3d_HVertex(::Adaptor3d_HVertex* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Adaptor3d_HVertex(::Adaptor3d_HVertex& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Adaptor3d_HVertex* NativeInstance
	{
		::Adaptor3d_HVertex* get()
		{
			return static_cast<::Adaptor3d_HVertex*>(_NativeInstance);
		}
	}

	static Macad::Occt::Adaptor3d_HVertex^ CreateDowncasted(::Adaptor3d_HVertex* instance);

public:
	Adaptor3d_HVertex();
	Adaptor3d_HVertex(Macad::Occt::Pnt2d P, Macad::Occt::TopAbs_Orientation Ori, double Resolution);
	Adaptor3d_HVertex(Macad::Occt::Adaptor3d_HVertex^ parameter1);
	Macad::Occt::Pnt2d Value();
	double Parameter(Macad::Occt::Adaptor2d_Curve2d^ C);
	double Resolution(Macad::Occt::Adaptor2d_Curve2d^ C);
	Macad::Occt::TopAbs_Orientation Orientation();
	bool IsSame(Macad::Occt::Adaptor3d_HVertex^ Other);
}; // class Adaptor3d_HVertex

//---------------------------------------------------------------------
//  Class  Adaptor3d_IsoCurve
//---------------------------------------------------------------------
public ref class Adaptor3d_IsoCurve sealed : public Macad::Occt::Adaptor3d_Curve
{

#ifdef Include_Adaptor3d_IsoCurve_h
public:
	Include_Adaptor3d_IsoCurve_h
#endif

public:
	Adaptor3d_IsoCurve(::Adaptor3d_IsoCurve* nativeInstance)
		: Macad::Occt::Adaptor3d_Curve( nativeInstance )
	{}

	Adaptor3d_IsoCurve(::Adaptor3d_IsoCurve& nativeInstance)
		: Macad::Occt::Adaptor3d_Curve( nativeInstance )
	{}

	property ::Adaptor3d_IsoCurve* NativeInstance
	{
		::Adaptor3d_IsoCurve* get()
		{
			return static_cast<::Adaptor3d_IsoCurve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Adaptor3d_IsoCurve^ CreateDowncasted(::Adaptor3d_IsoCurve* instance);

public:
	Adaptor3d_IsoCurve();
	Adaptor3d_IsoCurve(Macad::Occt::Adaptor3d_Surface^ S);
	Adaptor3d_IsoCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::GeomAbs_IsoType Iso, double Param);
	Adaptor3d_IsoCurve(Macad::Occt::Adaptor3d_Surface^ S, Macad::Occt::GeomAbs_IsoType Iso, double Param, double WFirst, double WLast);
	Adaptor3d_IsoCurve(Macad::Occt::Adaptor3d_IsoCurve^ parameter1);
	Macad::Occt::Adaptor3d_Curve^ ShallowCopy();
	void Load(Macad::Occt::Adaptor3d_Surface^ S);
	void Load(Macad::Occt::GeomAbs_IsoType Iso, double Param);
	void Load(Macad::Occt::GeomAbs_IsoType Iso, double Param, double WFirst, double WLast);
	Macad::Occt::Adaptor3d_Surface^ Surface();
	Macad::Occt::GeomAbs_IsoType Iso();
	double Parameter();
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
}; // class Adaptor3d_IsoCurve

//---------------------------------------------------------------------
//  Class  Adaptor3d_TopolTool
//---------------------------------------------------------------------
public ref class Adaptor3d_TopolTool sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Adaptor3d_TopolTool_h
public:
	Include_Adaptor3d_TopolTool_h
#endif

public:
	Adaptor3d_TopolTool(::Adaptor3d_TopolTool* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Adaptor3d_TopolTool(::Adaptor3d_TopolTool& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Adaptor3d_TopolTool* NativeInstance
	{
		::Adaptor3d_TopolTool* get()
		{
			return static_cast<::Adaptor3d_TopolTool*>(_NativeInstance);
		}
	}

	static Macad::Occt::Adaptor3d_TopolTool^ CreateDowncasted(::Adaptor3d_TopolTool* instance);

public:
	Adaptor3d_TopolTool();
	Adaptor3d_TopolTool(Macad::Occt::Adaptor3d_Surface^ Surface);
	Adaptor3d_TopolTool(Macad::Occt::Adaptor3d_TopolTool^ parameter1);
	void Initialize();
	void Initialize(Macad::Occt::Adaptor3d_Surface^ S);
	void Initialize(Macad::Occt::Adaptor2d_Curve2d^ Curve);
	void Init();
	bool More();
	Macad::Occt::Adaptor2d_Curve2d^ Value();
	void Next();
	void InitVertexIterator();
	bool MoreVertex();
	Macad::Occt::Adaptor3d_HVertex^ Vertex();
	void NextVertex();
	Macad::Occt::TopAbs_State Classify(Macad::Occt::Pnt2d P, double Tol, bool ReacdreOnPeriodic);
	Macad::Occt::TopAbs_State Classify(Macad::Occt::Pnt2d P, double Tol);
	bool IsThePointOn(Macad::Occt::Pnt2d P, double Tol, bool ReacdreOnPeriodic);
	bool IsThePointOn(Macad::Occt::Pnt2d P, double Tol);
	Macad::Occt::TopAbs_Orientation Orientation(Macad::Occt::Adaptor2d_Curve2d^ C);
	Macad::Occt::TopAbs_Orientation Orientation(Macad::Occt::Adaptor3d_HVertex^ V);
	bool Identical(Macad::Occt::Adaptor3d_HVertex^ V1, Macad::Occt::Adaptor3d_HVertex^ V2);
	bool Has3d();
	double Tol3d(Macad::Occt::Adaptor2d_Curve2d^ C);
	double Tol3d(Macad::Occt::Adaptor3d_HVertex^ V);
	Macad::Occt::Pnt Pnt(Macad::Occt::Adaptor3d_HVertex^ V);
	void ComputeSamplePoints();
	int NbSamplesU();
	int NbSamplesV();
	int NbSamples();
	void UParameters(Macad::Occt::TColStd_Array1OfReal^ theArray);
	void VParameters(Macad::Occt::TColStd_Array1OfReal^ theArray);
	void SamplePoint(int Index, Macad::Occt::Pnt2d% P2d, Macad::Occt::Pnt% P3d);
	bool DomainIsInfinite();
	System::IntPtr Edge();
	void SamplePnts(double theDefl, int theNUmin, int theNVmin);
	void BSplSamplePnts(double theDefl, int theNUmin, int theNVmin);
	bool IsUniformSampling();
}; // class Adaptor3d_TopolTool

}; // namespace Occt
}; // namespace Macad
