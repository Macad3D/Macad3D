// Generated wrapper code for package Precision

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Precision
//---------------------------------------------------------------------
public ref class Precision sealed : public BaseClass<::Precision>
{

#ifdef Include_Precision_h
public:
	Include_Precision_h
#endif

public:
	Precision(::Precision* nativeInstance)
		: BaseClass<::Precision>( nativeInstance, true )
	{}

	Precision(::Precision& nativeInstance)
		: BaseClass<::Precision>( &nativeInstance, false )
	{}

	property ::Precision* NativeInstance
	{
		::Precision* get()
		{
			return static_cast<::Precision*>(_NativeInstance);
		}
	}

public:
	Precision();
	Precision(Macad::Occt::Precision^ parameter1);
	static double Angular();
	static double Confusion();
	static double SquareConfusion();
	static double Intersection();
	static double Approximation();
	static double Parametric(double P, double T);
	static double PConfusion(double T);
	static double SquarePConfusion();
	static double PIntersection(double T);
	static double PApproximation(double T);
	static double Parametric(double P);
	static double PConfusion();
	static double PIntersection();
	static double PApproximation();
	static bool IsInfinite(double R);
	static bool IsPositiveInfinite(double R);
	static bool IsNegativeInfinite(double R);
	static double Infinite();
}; // class Precision

}; // namespace Occt
}; // namespace Macad
