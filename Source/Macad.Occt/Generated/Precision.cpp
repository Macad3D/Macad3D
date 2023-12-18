// Generated wrapper code for package Precision

#include "OcctPCH.h"
#include "Precision.h"

using namespace System::Runtime::InteropServices; // for class Marshal



//---------------------------------------------------------------------
//  Class  Precision
//---------------------------------------------------------------------

Macad::Occt::Precision::Precision()
    : Macad::Occt::BaseClass<::Precision>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Precision();
}

double Macad::Occt::Precision::Angular()
{
    double _result = ::Precision::Angular();
    return _result;
}

double Macad::Occt::Precision::Confusion()
{
    double _result = ::Precision::Confusion();
    return _result;
}

double Macad::Occt::Precision::SquareConfusion()
{
    double _result = ::Precision::SquareConfusion();
    return _result;
}

double Macad::Occt::Precision::Intersection()
{
    double _result = ::Precision::Intersection();
    return _result;
}

double Macad::Occt::Precision::Approximation()
{
    double _result = ::Precision::Approximation();
    return _result;
}

double Macad::Occt::Precision::Parametric(double P, double T)
{
    double _result = ::Precision::Parametric(P, T);
    return _result;
}

double Macad::Occt::Precision::PConfusion(double T)
{
    double _result = ::Precision::PConfusion(T);
    return _result;
}

double Macad::Occt::Precision::SquarePConfusion()
{
    double _result = ::Precision::SquarePConfusion();
    return _result;
}

double Macad::Occt::Precision::PIntersection(double T)
{
    double _result = ::Precision::PIntersection(T);
    return _result;
}

double Macad::Occt::Precision::PApproximation(double T)
{
    double _result = ::Precision::PApproximation(T);
    return _result;
}

double Macad::Occt::Precision::Parametric(double P)
{
    double _result = ::Precision::Parametric(P);
    return _result;
}

double Macad::Occt::Precision::PConfusion()
{
    double _result = ::Precision::PConfusion();
    return _result;
}

double Macad::Occt::Precision::PIntersection()
{
    double _result = ::Precision::PIntersection();
    return _result;
}

double Macad::Occt::Precision::PApproximation()
{
    double _result = ::Precision::PApproximation();
    return _result;
}

bool Macad::Occt::Precision::IsInfinite(double R)
{
    bool _result = ::Precision::IsInfinite(R);
    return _result;
}

bool Macad::Occt::Precision::IsPositiveInfinite(double R)
{
    bool _result = ::Precision::IsPositiveInfinite(R);
    return _result;
}

bool Macad::Occt::Precision::IsNegativeInfinite(double R)
{
    bool _result = ::Precision::IsNegativeInfinite(R);
    return _result;
}

double Macad::Occt::Precision::Infinite()
{
    double _result = ::Precision::Infinite();
    return _result;
}


