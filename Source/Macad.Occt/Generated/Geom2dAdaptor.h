// Generated wrapper code for package Geom2dAdaptor

#pragma once

#include "Adaptor2d.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Geom2dAdaptor
//---------------------------------------------------------------------
public ref class Geom2dAdaptor sealed : public BaseClass<::Geom2dAdaptor>
{

#ifdef Include_Geom2dAdaptor_h
public:
	Include_Geom2dAdaptor_h
#endif

public:
	Geom2dAdaptor(::Geom2dAdaptor* nativeInstance)
		: BaseClass<::Geom2dAdaptor>( nativeInstance, true )
	{}

	Geom2dAdaptor(::Geom2dAdaptor& nativeInstance)
		: BaseClass<::Geom2dAdaptor>( &nativeInstance, false )
	{}

	property ::Geom2dAdaptor* NativeInstance
	{
		::Geom2dAdaptor* get()
		{
			return static_cast<::Geom2dAdaptor*>(_NativeInstance);
		}
	}

public:
	Geom2dAdaptor();
	Geom2dAdaptor(Macad::Occt::Geom2dAdaptor^ parameter1);
	static Macad::Occt::Geom2d_Curve^ MakeCurve(Macad::Occt::Adaptor2d_Curve2d^ HC);
}; // class Geom2dAdaptor

//---------------------------------------------------------------------
//  Class  Geom2dAdaptor_Curve
//---------------------------------------------------------------------
public ref class Geom2dAdaptor_Curve : public Macad::Occt::Adaptor2d_Curve2d
{

#ifdef Include_Geom2dAdaptor_Curve_h
public:
	Include_Geom2dAdaptor_Curve_h
#endif

protected:
	Geom2dAdaptor_Curve(InitMode init)
		: Macad::Occt::Adaptor2d_Curve2d( init )
	{}

public:
	Geom2dAdaptor_Curve(::Geom2dAdaptor_Curve* nativeInstance)
		: Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
	{}

	Geom2dAdaptor_Curve(::Geom2dAdaptor_Curve& nativeInstance)
		: Macad::Occt::Adaptor2d_Curve2d( nativeInstance )
	{}

	property ::Geom2dAdaptor_Curve* NativeInstance
	{
		::Geom2dAdaptor_Curve* get()
		{
			return static_cast<::Geom2dAdaptor_Curve*>(_NativeInstance);
		}
	}

	static Macad::Occt::Geom2dAdaptor_Curve^ CreateDowncasted(::Geom2dAdaptor_Curve* instance);

public:
	Geom2dAdaptor_Curve();
	Geom2dAdaptor_Curve(Macad::Occt::Geom2d_Curve^ C);
	Geom2dAdaptor_Curve(Macad::Occt::Geom2d_Curve^ C, double UFirst, double ULast);
	Geom2dAdaptor_Curve(Macad::Occt::Geom2dAdaptor_Curve^ parameter1);
	Macad::Occt::Adaptor2d_Curve2d^ ShallowCopy();
	void Reset();
	void Load(Macad::Occt::Geom2d_Curve^ theCurve);
	void Load(Macad::Occt::Geom2d_Curve^ theCurve, double theUFirst, double theULast);
	Macad::Occt::Geom2d_Curve^ Curve();
	double FirstParameter();
	double LastParameter();
	Macad::Occt::GeomAbs_Shape Continuity();
	int NbIntervals(Macad::Occt::GeomAbs_Shape S);
	void Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
	Macad::Occt::Adaptor2d_Curve2d^ Trim(double First, double Last, double Tol);
	bool IsClosed();
	bool IsPeriodic();
	double Period();
	Macad::Occt::Pnt2d Value(double U);
	void D0(double U, Macad::Occt::Pnt2d% P);
	void D1(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V);
	void D2(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	void D3(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	Macad::Occt::Vec2d DN(double U, int N);
	double Resolution(double Ruv);
	Macad::Occt::GeomAbs_CurveType GetGeomType();
	Macad::Occt::gp_Lin2d^ Line();
	Macad::Occt::gp_Circ2d^ Circle();
	Macad::Occt::gp_Elips2d^ Ellipse();
	Macad::Occt::gp_Hypr2d^ Hyperbola();
	Macad::Occt::gp_Parab2d^ Parabola();
	int Degree();
	bool IsRational();
	int NbPoles();
	int NbKnots();
	int NbSamples();
	Macad::Occt::Geom2d_BezierCurve^ Bezier();
	Macad::Occt::Geom2d_BSplineCurve^ BSpline();
}; // class Geom2dAdaptor_Curve

}; // namespace Occt
}; // namespace Macad
