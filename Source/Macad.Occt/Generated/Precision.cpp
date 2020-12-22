// Generated wrapper code for package Precision

#include "OcctPCH.h"
#include "Precision.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"


//---------------------------------------------------------------------
//  Class  Precision
//---------------------------------------------------------------------

Macad::Occt::Precision::Precision()
	: BaseClass<::Precision>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Precision();
}

Macad::Occt::Precision::Precision(Macad::Occt::Precision^ parameter1)
	: BaseClass<::Precision>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Precision(*(::Precision*)parameter1->NativeInstance);
}

double Macad::Occt::Precision::Angular()
{
	return ::Precision::Angular();
}

double Macad::Occt::Precision::Confusion()
{
	return ::Precision::Confusion();
}

double Macad::Occt::Precision::SquareConfusion()
{
	return ::Precision::SquareConfusion();
}

double Macad::Occt::Precision::Intersection()
{
	return ::Precision::Intersection();
}

double Macad::Occt::Precision::Approximation()
{
	return ::Precision::Approximation();
}

double Macad::Occt::Precision::Parametric(double P, double T)
{
	return ::Precision::Parametric(P, T);
}

double Macad::Occt::Precision::PConfusion(double T)
{
	return ::Precision::PConfusion(T);
}

double Macad::Occt::Precision::SquarePConfusion()
{
	return ::Precision::SquarePConfusion();
}

double Macad::Occt::Precision::PIntersection(double T)
{
	return ::Precision::PIntersection(T);
}

double Macad::Occt::Precision::PApproximation(double T)
{
	return ::Precision::PApproximation(T);
}

double Macad::Occt::Precision::Parametric(double P)
{
	return ::Precision::Parametric(P);
}

double Macad::Occt::Precision::PConfusion()
{
	return ::Precision::PConfusion();
}

double Macad::Occt::Precision::PIntersection()
{
	return ::Precision::PIntersection();
}

double Macad::Occt::Precision::PApproximation()
{
	return ::Precision::PApproximation();
}

bool Macad::Occt::Precision::IsInfinite(double R)
{
	return ::Precision::IsInfinite(R);
}

bool Macad::Occt::Precision::IsPositiveInfinite(double R)
{
	return ::Precision::IsPositiveInfinite(R);
}

bool Macad::Occt::Precision::IsNegativeInfinite(double R)
{
	return ::Precision::IsNegativeInfinite(R);
}

double Macad::Occt::Precision::Infinite()
{
	return ::Precision::Infinite();
}



