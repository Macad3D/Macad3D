// Generated wrapper code for package IntAna2d

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  IntAna2d_IntPoint
//---------------------------------------------------------------------
public ref class IntAna2d_IntPoint sealed : public BaseClass<::IntAna2d_IntPoint>
{

#ifdef Include_IntAna2d_IntPoint_h
public:
	Include_IntAna2d_IntPoint_h
#endif

public:
	IntAna2d_IntPoint(::IntAna2d_IntPoint* nativeInstance)
		: BaseClass<::IntAna2d_IntPoint>( nativeInstance, true )
	{}

	IntAna2d_IntPoint(::IntAna2d_IntPoint& nativeInstance)
		: BaseClass<::IntAna2d_IntPoint>( &nativeInstance, false )
	{}

	property ::IntAna2d_IntPoint* NativeInstance
	{
		::IntAna2d_IntPoint* get()
		{
			return static_cast<::IntAna2d_IntPoint*>(_NativeInstance);
		}
	}

public:
	IntAna2d_IntPoint(double X, double Y, double U1, double U2);
	IntAna2d_IntPoint(double X, double Y, double U1);
	IntAna2d_IntPoint();
	IntAna2d_IntPoint(Macad::Occt::IntAna2d_IntPoint^ parameter1);
	void SetValue(double X, double Y, double U1, double U2);
	void SetValue(double X, double Y, double U1);
	Macad::Occt::Pnt2d Value();
	bool SecondIsImplicit();
	double ParamOnFirst();
	double ParamOnSecond();
}; // class IntAna2d_IntPoint

//---------------------------------------------------------------------
//  Class  IntAna2d_Conic
//---------------------------------------------------------------------
public ref class IntAna2d_Conic sealed : public BaseClass<::IntAna2d_Conic>
{

#ifdef Include_IntAna2d_Conic_h
public:
	Include_IntAna2d_Conic_h
#endif

public:
	IntAna2d_Conic(::IntAna2d_Conic* nativeInstance)
		: BaseClass<::IntAna2d_Conic>( nativeInstance, true )
	{}

	IntAna2d_Conic(::IntAna2d_Conic& nativeInstance)
		: BaseClass<::IntAna2d_Conic>( &nativeInstance, false )
	{}

	property ::IntAna2d_Conic* NativeInstance
	{
		::IntAna2d_Conic* get()
		{
			return static_cast<::IntAna2d_Conic*>(_NativeInstance);
		}
	}

public:
	IntAna2d_Conic(Macad::Occt::gp_Circ2d^ C);
	IntAna2d_Conic(Macad::Occt::gp_Lin2d^ C);
	IntAna2d_Conic(Macad::Occt::gp_Parab2d^ C);
	IntAna2d_Conic(Macad::Occt::gp_Hypr2d^ C);
	IntAna2d_Conic(Macad::Occt::gp_Elips2d^ C);
	IntAna2d_Conic(Macad::Occt::IntAna2d_Conic^ parameter1);
	double Value(double X, double Y);
	Macad::Occt::XY Grad(double X, double Y);
	void ValAndGrad(double X, double Y, double% Val, Macad::Occt::XY% Grd);
	void Coefficients(double% A, double% B, double% C, double% D, double% E, double% F);
	void NewCoefficients(double% A, double% B, double% C, double% D, double% E, double% F, Macad::Occt::Ax2d Axis);
}; // class IntAna2d_Conic

//---------------------------------------------------------------------
//  Class  IntAna2d_AnaIntersection
//---------------------------------------------------------------------
public ref class IntAna2d_AnaIntersection sealed : public BaseClass<::IntAna2d_AnaIntersection>
{

#ifdef Include_IntAna2d_AnaIntersection_h
public:
	Include_IntAna2d_AnaIntersection_h
#endif

public:
	IntAna2d_AnaIntersection(::IntAna2d_AnaIntersection* nativeInstance)
		: BaseClass<::IntAna2d_AnaIntersection>( nativeInstance, true )
	{}

	IntAna2d_AnaIntersection(::IntAna2d_AnaIntersection& nativeInstance)
		: BaseClass<::IntAna2d_AnaIntersection>( &nativeInstance, false )
	{}

	property ::IntAna2d_AnaIntersection* NativeInstance
	{
		::IntAna2d_AnaIntersection* get()
		{
			return static_cast<::IntAna2d_AnaIntersection*>(_NativeInstance);
		}
	}

public:
	IntAna2d_AnaIntersection();
	IntAna2d_AnaIntersection(Macad::Occt::gp_Lin2d^ L1, Macad::Occt::gp_Lin2d^ L2);
	IntAna2d_AnaIntersection(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Circ2d^ C2);
	IntAna2d_AnaIntersection(Macad::Occt::gp_Lin2d^ L, Macad::Occt::gp_Circ2d^ C);
	IntAna2d_AnaIntersection(Macad::Occt::gp_Lin2d^ L, Macad::Occt::IntAna2d_Conic^ C);
	IntAna2d_AnaIntersection(Macad::Occt::gp_Circ2d^ C, Macad::Occt::IntAna2d_Conic^ Co);
	IntAna2d_AnaIntersection(Macad::Occt::gp_Elips2d^ E, Macad::Occt::IntAna2d_Conic^ C);
	IntAna2d_AnaIntersection(Macad::Occt::gp_Parab2d^ P, Macad::Occt::IntAna2d_Conic^ C);
	IntAna2d_AnaIntersection(Macad::Occt::gp_Hypr2d^ H, Macad::Occt::IntAna2d_Conic^ C);
	IntAna2d_AnaIntersection(Macad::Occt::IntAna2d_AnaIntersection^ parameter1);
	void Perform(Macad::Occt::gp_Lin2d^ L1, Macad::Occt::gp_Lin2d^ L2);
	void Perform(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Circ2d^ C2);
	void Perform(Macad::Occt::gp_Lin2d^ L, Macad::Occt::gp_Circ2d^ C);
	void Perform(Macad::Occt::gp_Lin2d^ L, Macad::Occt::IntAna2d_Conic^ C);
	void Perform(Macad::Occt::gp_Circ2d^ C, Macad::Occt::IntAna2d_Conic^ Co);
	void Perform(Macad::Occt::gp_Elips2d^ E, Macad::Occt::IntAna2d_Conic^ C);
	void Perform(Macad::Occt::gp_Parab2d^ P, Macad::Occt::IntAna2d_Conic^ C);
	void Perform(Macad::Occt::gp_Hypr2d^ H, Macad::Occt::IntAna2d_Conic^ C);
	bool IsDone();
	bool IsEmpty();
	bool IdenticalElements();
	bool ParallelElements();
	int NbPoints();
	Macad::Occt::IntAna2d_IntPoint^ Point(int N);
}; // class IntAna2d_AnaIntersection

//---------------------------------------------------------------------
//  Class  MyDirectPolynomialRoots
//---------------------------------------------------------------------
public ref class MyDirectPolynomialRoots sealed : public BaseClass<::MyDirectPolynomialRoots>
{

#ifdef Include_MyDirectPolynomialRoots_h
public:
	Include_MyDirectPolynomialRoots_h
#endif

public:
	MyDirectPolynomialRoots(::MyDirectPolynomialRoots* nativeInstance)
		: BaseClass<::MyDirectPolynomialRoots>( nativeInstance, true )
	{}

	MyDirectPolynomialRoots(::MyDirectPolynomialRoots& nativeInstance)
		: BaseClass<::MyDirectPolynomialRoots>( &nativeInstance, false )
	{}

	property ::MyDirectPolynomialRoots* NativeInstance
	{
		::MyDirectPolynomialRoots* get()
		{
			return static_cast<::MyDirectPolynomialRoots*>(_NativeInstance);
		}
	}

public:
	MyDirectPolynomialRoots(double A4, double A3, double A2, double A1, double A0);
	MyDirectPolynomialRoots(double A2, double A1, double A0);
	MyDirectPolynomialRoots(Macad::Occt::MyDirectPolynomialRoots^ parameter1);
	int NbSolutions();
	double Value(int i);
	double IsDone();
	bool InfiniteRoots();
}; // class MyDirectPolynomialRoots

}; // namespace Occt
}; // namespace Macad
