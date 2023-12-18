// Generated wrapper code for package CSLib

#include "OcctPCH.h"
#include "CSLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "TColgp.h"


//---------------------------------------------------------------------
//  Class  CSLib
//---------------------------------------------------------------------

Macad::Occt::CSLib::CSLib()
    : Macad::Occt::BaseClass<::CSLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::CSLib();
}

void Macad::Occt::CSLib::Normal(Macad::Occt::Vec D1U, Macad::Occt::Vec D1V, double SinTol, Macad::Occt::CSLib_DerivativeStatus% theStatus, Macad::Occt::Dir% Normal)
{
    pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
    pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
    pin_ptr<Macad::Occt::CSLib_DerivativeStatus> pp_theStatus = &theStatus;
    pin_ptr<Macad::Occt::Dir> pp_Normal = &Normal;
    ::CSLib::Normal(*(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, SinTol, *(::CSLib_DerivativeStatus*)pp_theStatus, *(gp_Dir*)pp_Normal);
}

void Macad::Occt::CSLib::Normal(Macad::Occt::Vec D1U, Macad::Occt::Vec D1V, Macad::Occt::Vec D2U, Macad::Occt::Vec D2V, Macad::Occt::Vec D2UV, double SinTol, bool% Done, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% Normal)
{
    pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
    pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
    pin_ptr<Macad::Occt::Vec> pp_D2U = &D2U;
    pin_ptr<Macad::Occt::Vec> pp_D2V = &D2V;
    pin_ptr<Macad::Occt::Vec> pp_D2UV = &D2UV;
    pin_ptr<bool> pp_Done = &Done;
    pin_ptr<Macad::Occt::CSLib_NormalStatus> pp_theStatus = &theStatus;
    pin_ptr<Macad::Occt::Dir> pp_Normal = &Normal;
    ::CSLib::Normal(*(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, SinTol, *(bool*)pp_Done, *(::CSLib_NormalStatus*)pp_theStatus, *(gp_Dir*)pp_Normal);
}

void Macad::Occt::CSLib::Normal(Macad::Occt::Vec D1U, Macad::Occt::Vec D1V, double MagTol, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% Normal)
{
    pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
    pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
    pin_ptr<Macad::Occt::CSLib_NormalStatus> pp_theStatus = &theStatus;
    pin_ptr<Macad::Occt::Dir> pp_Normal = &Normal;
    ::CSLib::Normal(*(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, MagTol, *(::CSLib_NormalStatus*)pp_theStatus, *(gp_Dir*)pp_Normal);
}

void Macad::Occt::CSLib::Normal(int MaxOrder, Macad::Occt::TColgp_Array2OfVec^ DerNUV, double MagTol, double U, double V, double Umin, double Umax, double Vmin, double Vmax, Macad::Occt::CSLib_NormalStatus% theStatus, Macad::Occt::Dir% Normal, int% OrderU, int% OrderV)
{
    pin_ptr<Macad::Occt::CSLib_NormalStatus> pp_theStatus = &theStatus;
    pin_ptr<Macad::Occt::Dir> pp_Normal = &Normal;
    pin_ptr<int> pp_OrderU = &OrderU;
    pin_ptr<int> pp_OrderV = &OrderV;
    ::CSLib::Normal(MaxOrder, *(::TColgp_Array2OfVec*)DerNUV->NativeInstance, MagTol, U, V, Umin, Umax, Vmin, Vmax, *(::CSLib_NormalStatus*)pp_theStatus, *(gp_Dir*)pp_Normal, *(int*)pp_OrderU, *(int*)pp_OrderV);
}

Macad::Occt::Vec Macad::Occt::CSLib::DNNUV(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerSurf)
{
    ::gp_Vec _nativeResult = ::CSLib::DNNUV(Nu, Nv, *(::TColgp_Array2OfVec*)DerSurf->NativeInstance);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::CSLib::DNNUV(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerSurf1, Macad::Occt::TColgp_Array2OfVec^ DerSurf2)
{
    ::gp_Vec _nativeResult = ::CSLib::DNNUV(Nu, Nv, *(::TColgp_Array2OfVec*)DerSurf1->NativeInstance, *(::TColgp_Array2OfVec*)DerSurf2->NativeInstance);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::CSLib::DNNormal(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerNUV, int Iduref, int Idvref)
{
    ::gp_Vec _nativeResult = ::CSLib::DNNormal(Nu, Nv, *(::TColgp_Array2OfVec*)DerNUV->NativeInstance, Iduref, Idvref);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::CSLib::DNNormal(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerNUV, int Iduref)
{
    ::gp_Vec _nativeResult = ::CSLib::DNNormal(Nu, Nv, *(::TColgp_Array2OfVec*)DerNUV->NativeInstance, Iduref, 0);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::CSLib::DNNormal(int Nu, int Nv, Macad::Occt::TColgp_Array2OfVec^ DerNUV)
{
    ::gp_Vec _nativeResult = ::CSLib::DNNormal(Nu, Nv, *(::TColgp_Array2OfVec*)DerNUV->NativeInstance, 0, 0);
    return Macad::Occt::Vec(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  CSLib_Class2d
//---------------------------------------------------------------------

Macad::Occt::CSLib_Class2d::CSLib_Class2d(Macad::Occt::TColgp_Array1OfPnt2d^ thePnts2d, double theTolU, double theTolV, double theUMin, double theVMin, double theUMax, double theVMax)
    : Macad::Occt::BaseClass<::CSLib_Class2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::CSLib_Class2d(*(::TColgp_Array1OfPnt2d*)thePnts2d->NativeInstance, theTolU, theTolV, theUMin, theVMin, theUMax, theVMax);
}

Macad::Occt::CSLib_Class2d::CSLib_Class2d(Macad::Occt::TColgp_SequenceOfPnt2d^ thePnts2d, double theTolU, double theTolV, double theUMin, double theVMin, double theUMax, double theVMax)
    : Macad::Occt::BaseClass<::CSLib_Class2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::CSLib_Class2d(*(::TColgp_SequenceOfPnt2d*)thePnts2d->NativeInstance, theTolU, theTolV, theUMin, theVMin, theUMax, theVMax);
}

int Macad::Occt::CSLib_Class2d::SiDans(Macad::Occt::Pnt2d P)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    int _result = ((::CSLib_Class2d*)_NativeInstance)->SiDans(*(gp_Pnt2d*)pp_P);
    return _result;
}

int Macad::Occt::CSLib_Class2d::SiDans_OnMode(Macad::Occt::Pnt2d P, double Tol)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    int _result = ((::CSLib_Class2d*)_NativeInstance)->SiDans_OnMode(*(gp_Pnt2d*)pp_P, Tol);
    return _result;
}

int Macad::Occt::CSLib_Class2d::InternalSiDans(double X, double Y)
{
    int _result = ((::CSLib_Class2d*)_NativeInstance)->InternalSiDans(X, Y);
    return _result;
}

int Macad::Occt::CSLib_Class2d::InternalSiDansOuOn(double X, double Y)
{
    int _result = ((::CSLib_Class2d*)_NativeInstance)->InternalSiDansOuOn(X, Y);
    return _result;
}


