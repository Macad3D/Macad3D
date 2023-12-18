// Generated wrapper code for package Extrema

#include "OcctPCH.h"
#include "Extrema.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "Adaptor3d.h"


//---------------------------------------------------------------------
//  Class  Extrema_POnCurv
//---------------------------------------------------------------------

Macad::Occt::Extrema_POnCurv::Extrema_POnCurv()
    : Macad::Occt::BaseClass<::Extrema_POnCurv>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_POnCurv();
}

Macad::Occt::Extrema_POnCurv::Extrema_POnCurv(double U, Macad::Occt::Pnt P)
    : Macad::Occt::BaseClass<::Extrema_POnCurv>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_POnCurv(U, *(gp_Pnt*)pp_P);
}

void Macad::Occt::Extrema_POnCurv::SetValues(double U, Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_POnCurv*)_NativeInstance)->SetValues(U, *(gp_Pnt*)pp_P);
}

Macad::Occt::Pnt Macad::Occt::Extrema_POnCurv::Value()
{
    ::gp_Pnt _nativeResult = ((::Extrema_POnCurv*)_NativeInstance)->Value();
    return Macad::Occt::Pnt(_nativeResult);
}

double Macad::Occt::Extrema_POnCurv::Parameter()
{
    double _result = ((::Extrema_POnCurv*)_NativeInstance)->Parameter();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Extrema_ExtPC
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC()
    : Macad::Occt::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Extrema_ExtPC();
}

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF)
    : Macad::Occt::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_P, *(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup, TolF);
}

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup)
    : Macad::Occt::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_P, *(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup, 1.0E-10);
}

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double TolF)
    : Macad::Occt::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_P, *(::Adaptor3d_Curve*)C->NativeInstance, TolF);
}

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C)
    : Macad::Occt::BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    _NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_P, *(::Adaptor3d_Curve*)C->NativeInstance, 1.0E-10);
}

void Macad::Occt::Extrema_ExtPC::Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF)
{
    ((::Extrema_ExtPC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup, TolF);
}

void Macad::Occt::Extrema_ExtPC::Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup)
{
    ((::Extrema_ExtPC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup, 1.0E-10);
}

void Macad::Occt::Extrema_ExtPC::Perform(Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::Extrema_ExtPC*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P);
}

bool Macad::Occt::Extrema_ExtPC::IsDone()
{
    bool _result = ((::Extrema_ExtPC*)_NativeInstance)->IsDone();
    return _result;
}

double Macad::Occt::Extrema_ExtPC::SquareDistance(int N)
{
    double _result = ((::Extrema_ExtPC*)_NativeInstance)->SquareDistance(N);
    return _result;
}

int Macad::Occt::Extrema_ExtPC::NbExt()
{
    int _result = ((::Extrema_ExtPC*)_NativeInstance)->NbExt();
    return _result;
}

bool Macad::Occt::Extrema_ExtPC::IsMin(int N)
{
    bool _result = ((::Extrema_ExtPC*)_NativeInstance)->IsMin(N);
    return _result;
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_ExtPC::Point(int N)
{
    ::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
    *_result = (::Extrema_POnCurv)((::Extrema_ExtPC*)_NativeInstance)->Point(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

void Macad::Occt::Extrema_ExtPC::TrimmedSquareDistances(double% dist1, double% dist2, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2)
{
    pin_ptr<double> pp_dist1 = &dist1;
    pin_ptr<double> pp_dist2 = &dist2;
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    ((::Extrema_ExtPC*)_NativeInstance)->TrimmedSquareDistances(*(double*)pp_dist1, *(double*)pp_dist2, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}


