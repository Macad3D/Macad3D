// Generated wrapper code for package GProp

#include "OcctPCH.h"
#include "GProp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "BRepGProp.h"
#include "TColgp.h"
#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  GProp
//---------------------------------------------------------------------

Macad::Occt::GProp::GProp()
    : Macad::Occt::BaseClass<::GProp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp();
}

void Macad::Occt::GProp::HOperator(Macad::Occt::Pnt G, Macad::Occt::Pnt Q, double Mass, Macad::Occt::Mat% Operator)
{
    pin_ptr<Macad::Occt::Pnt> pp_G = &G;
    pin_ptr<Macad::Occt::Pnt> pp_Q = &Q;
    pin_ptr<Macad::Occt::Mat> pp_Operator = &Operator;
    ::GProp::HOperator(*(gp_Pnt*)pp_G, *(gp_Pnt*)pp_Q, Mass, *(gp_Mat*)pp_Operator);
}



//---------------------------------------------------------------------
//  Class  GProp_PrincipalProps
//---------------------------------------------------------------------

Macad::Occt::GProp_PrincipalProps::GProp_PrincipalProps()
    : Macad::Occt::BaseClass<::GProp_PrincipalProps>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PrincipalProps();
}

bool Macad::Occt::GProp_PrincipalProps::HasSymmetryAxis()
{
    bool _result = ((::GProp_PrincipalProps*)_NativeInstance)->HasSymmetryAxis();
    return _result;
}

bool Macad::Occt::GProp_PrincipalProps::HasSymmetryAxis(double aTol)
{
    bool _result = ((::GProp_PrincipalProps*)_NativeInstance)->HasSymmetryAxis(aTol);
    return _result;
}

bool Macad::Occt::GProp_PrincipalProps::HasSymmetryPoint()
{
    bool _result = ((::GProp_PrincipalProps*)_NativeInstance)->HasSymmetryPoint();
    return _result;
}

bool Macad::Occt::GProp_PrincipalProps::HasSymmetryPoint(double aTol)
{
    bool _result = ((::GProp_PrincipalProps*)_NativeInstance)->HasSymmetryPoint(aTol);
    return _result;
}

void Macad::Occt::GProp_PrincipalProps::Moments(double% Ixx, double% Iyy, double% Izz)
{
    pin_ptr<double> pp_Ixx = &Ixx;
    pin_ptr<double> pp_Iyy = &Iyy;
    pin_ptr<double> pp_Izz = &Izz;
    ((::GProp_PrincipalProps*)_NativeInstance)->Moments(*(double*)pp_Ixx, *(double*)pp_Iyy, *(double*)pp_Izz);
}

Macad::Occt::Vec Macad::Occt::GProp_PrincipalProps::FirstAxisOfInertia()
{
    ::gp_Vec _nativeResult = ((::GProp_PrincipalProps*)_NativeInstance)->FirstAxisOfInertia();
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::GProp_PrincipalProps::SecondAxisOfInertia()
{
    ::gp_Vec _nativeResult = ((::GProp_PrincipalProps*)_NativeInstance)->SecondAxisOfInertia();
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::GProp_PrincipalProps::ThirdAxisOfInertia()
{
    ::gp_Vec _nativeResult = ((::GProp_PrincipalProps*)_NativeInstance)->ThirdAxisOfInertia();
    return Macad::Occt::Vec(_nativeResult);
}

void Macad::Occt::GProp_PrincipalProps::RadiusOfGyration(double% Rxx, double% Ryy, double% Rzz)
{
    pin_ptr<double> pp_Rxx = &Rxx;
    pin_ptr<double> pp_Ryy = &Ryy;
    pin_ptr<double> pp_Rzz = &Rzz;
    ((::GProp_PrincipalProps*)_NativeInstance)->RadiusOfGyration(*(double*)pp_Rxx, *(double*)pp_Ryy, *(double*)pp_Rzz);
}



//---------------------------------------------------------------------
//  Class  GProp_GProps
//---------------------------------------------------------------------

Macad::Occt::GProp_GProps::GProp_GProps()
    : Macad::Occt::BaseClass<::GProp_GProps>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_GProps();
}

Macad::Occt::GProp_GProps::GProp_GProps(Macad::Occt::Pnt SystemLocation)
    : Macad::Occt::BaseClass<::GProp_GProps>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_SystemLocation = &SystemLocation;
    _NativeInstance = new ::GProp_GProps(*(gp_Pnt*)pp_SystemLocation);
}

Macad::Occt::GProp_PrincipalProps^ Macad::Occt::GProp_GProps::PrincipalProperties()
{
    ::GProp_PrincipalProps* _result = new ::GProp_PrincipalProps();
    *_result = ((::GProp_GProps*)_NativeInstance)->PrincipalProperties();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::GProp_PrincipalProps(_result);
}

void Macad::Occt::GProp_GProps::Add(Macad::Occt::GProp_GProps^ Item, double Density)
{
    ((::GProp_GProps*)_NativeInstance)->Add(*(::GProp_GProps*)Item->NativeInstance, Density);
}

void Macad::Occt::GProp_GProps::Add(Macad::Occt::GProp_GProps^ Item)
{
    ((::GProp_GProps*)_NativeInstance)->Add(*(::GProp_GProps*)Item->NativeInstance, 1.);
}

double Macad::Occt::GProp_GProps::Mass()
{
    double _result = ((::GProp_GProps*)_NativeInstance)->Mass();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::GProp_GProps::CentreOfMass()
{
    ::gp_Pnt _nativeResult = ((::GProp_GProps*)_NativeInstance)->CentreOfMass();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Mat Macad::Occt::GProp_GProps::MatrixOfInertia()
{
    ::gp_Mat _nativeResult = ((::GProp_GProps*)_NativeInstance)->MatrixOfInertia();
    return Macad::Occt::Mat(_nativeResult);
}

void Macad::Occt::GProp_GProps::StaticMoments(double% Ix, double% Iy, double% Iz)
{
    pin_ptr<double> pp_Ix = &Ix;
    pin_ptr<double> pp_Iy = &Iy;
    pin_ptr<double> pp_Iz = &Iz;
    ((::GProp_GProps*)_NativeInstance)->StaticMoments(*(double*)pp_Ix, *(double*)pp_Iy, *(double*)pp_Iz);
}

double Macad::Occt::GProp_GProps::MomentOfInertia(Macad::Occt::Ax1 A)
{
    pin_ptr<Macad::Occt::Ax1> pp_A = &A;
    double _result = ((::GProp_GProps*)_NativeInstance)->MomentOfInertia(*(gp_Ax1*)pp_A);
    return _result;
}

double Macad::Occt::GProp_GProps::RadiusOfGyration(Macad::Occt::Ax1 A)
{
    pin_ptr<Macad::Occt::Ax1> pp_A = &A;
    double _result = ((::GProp_GProps*)_NativeInstance)->RadiusOfGyration(*(gp_Ax1*)pp_A);
    return _result;
}



//---------------------------------------------------------------------
//  Class  GProp_CelGProps
//---------------------------------------------------------------------

Macad::Occt::GProp_CelGProps::GProp_CelGProps()
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_CelGProps();
}

Macad::Occt::GProp_CelGProps::GProp_CelGProps(Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt CLocation)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_CLocation = &CLocation;
    _NativeInstance = new ::GProp_CelGProps(*(::gp_Circ*)C->NativeInstance, *(gp_Pnt*)pp_CLocation);
}

Macad::Occt::GProp_CelGProps::GProp_CelGProps(Macad::Occt::gp_Circ^ C, double U1, double U2, Macad::Occt::Pnt CLocation)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_CLocation = &CLocation;
    _NativeInstance = new ::GProp_CelGProps(*(::gp_Circ*)C->NativeInstance, U1, U2, *(gp_Pnt*)pp_CLocation);
}

Macad::Occt::GProp_CelGProps::GProp_CelGProps(Macad::Occt::gp_Lin^ C, double U1, double U2, Macad::Occt::Pnt CLocation)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_CLocation = &CLocation;
    _NativeInstance = new ::GProp_CelGProps(*(::gp_Lin*)C->NativeInstance, U1, U2, *(gp_Pnt*)pp_CLocation);
}

void Macad::Occt::GProp_CelGProps::SetLocation(Macad::Occt::Pnt CLocation)
{
    pin_ptr<Macad::Occt::Pnt> pp_CLocation = &CLocation;
    ((::GProp_CelGProps*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_CLocation);
}

void Macad::Occt::GProp_CelGProps::Perform(Macad::Occt::gp_Circ^ C, double U1, double U2)
{
    ((::GProp_CelGProps*)_NativeInstance)->Perform(*(::gp_Circ*)C->NativeInstance, U1, U2);
}

void Macad::Occt::GProp_CelGProps::Perform(Macad::Occt::gp_Lin^ C, double U1, double U2)
{
    ((::GProp_CelGProps*)_NativeInstance)->Perform(*(::gp_Lin*)C->NativeInstance, U1, U2);
}



//---------------------------------------------------------------------
//  Class  GProp_PEquation
//---------------------------------------------------------------------

Macad::Occt::GProp_PEquation::GProp_PEquation(Macad::Occt::TColgp_Array1OfPnt^ Pnts, double Tol)
    : Macad::Occt::BaseClass<::GProp_PEquation>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PEquation(*(::TColgp_Array1OfPnt*)Pnts->NativeInstance, Tol);
}

bool Macad::Occt::GProp_PEquation::IsPlanar()
{
    bool _result = ((::GProp_PEquation*)_NativeInstance)->IsPlanar();
    return _result;
}

bool Macad::Occt::GProp_PEquation::IsLinear()
{
    bool _result = ((::GProp_PEquation*)_NativeInstance)->IsLinear();
    return _result;
}

bool Macad::Occt::GProp_PEquation::IsPoint()
{
    bool _result = ((::GProp_PEquation*)_NativeInstance)->IsPoint();
    return _result;
}

bool Macad::Occt::GProp_PEquation::IsSpace()
{
    bool _result = ((::GProp_PEquation*)_NativeInstance)->IsSpace();
    return _result;
}

Macad::Occt::Pln Macad::Occt::GProp_PEquation::Plane()
{
    ::gp_Pln _nativeResult = ((::GProp_PEquation*)_NativeInstance)->Plane();
    return Macad::Occt::Pln(_nativeResult);
}

Macad::Occt::gp_Lin^ Macad::Occt::GProp_PEquation::Line()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = ((::GProp_PEquation*)_NativeInstance)->Line();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::Pnt Macad::Occt::GProp_PEquation::Point()
{
    ::gp_Pnt _nativeResult = ((::GProp_PEquation*)_NativeInstance)->Point();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::GProp_PEquation::Box(Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
    pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
    pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
    ((::GProp_PEquation*)_NativeInstance)->Box(*(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}



//---------------------------------------------------------------------
//  Class  GProp_PGProps
//---------------------------------------------------------------------

Macad::Occt::GProp_PGProps::GProp_PGProps()
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PGProps();
}

Macad::Occt::GProp_PGProps::GProp_PGProps(Macad::Occt::TColgp_Array1OfPnt^ Pnts)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PGProps(*(::TColgp_Array1OfPnt*)Pnts->NativeInstance);
}

Macad::Occt::GProp_PGProps::GProp_PGProps(Macad::Occt::TColgp_Array2OfPnt^ Pnts)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PGProps(*(::TColgp_Array2OfPnt*)Pnts->NativeInstance);
}

Macad::Occt::GProp_PGProps::GProp_PGProps(Macad::Occt::TColgp_Array1OfPnt^ Pnts, Macad::Occt::TColStd_Array1OfReal^ Density)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PGProps(*(::TColgp_Array1OfPnt*)Pnts->NativeInstance, *(::TColStd_Array1OfReal*)Density->NativeInstance);
}

Macad::Occt::GProp_PGProps::GProp_PGProps(Macad::Occt::TColgp_Array2OfPnt^ Pnts, Macad::Occt::TColStd_Array2OfReal^ Density)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_PGProps(*(::TColgp_Array2OfPnt*)Pnts->NativeInstance, *(::TColStd_Array2OfReal*)Density->NativeInstance);
}

void Macad::Occt::GProp_PGProps::AddPoint(Macad::Occt::Pnt P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GProp_PGProps*)_NativeInstance)->AddPoint(*(gp_Pnt*)pp_P);
}

void Macad::Occt::GProp_PGProps::AddPoint(Macad::Occt::Pnt P, double Density)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::GProp_PGProps*)_NativeInstance)->AddPoint(*(gp_Pnt*)pp_P, Density);
}

Macad::Occt::Pnt Macad::Occt::GProp_PGProps::Barycentre(Macad::Occt::TColgp_Array1OfPnt^ Pnts)
{
    ::gp_Pnt _nativeResult = ::GProp_PGProps::Barycentre(*(::TColgp_Array1OfPnt*)Pnts->NativeInstance);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::GProp_PGProps::Barycentre(Macad::Occt::TColgp_Array2OfPnt^ Pnts)
{
    ::gp_Pnt _nativeResult = ::GProp_PGProps::Barycentre(*(::TColgp_Array2OfPnt*)Pnts->NativeInstance);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::GProp_PGProps::Barycentre(Macad::Occt::TColgp_Array1OfPnt^ Pnts, Macad::Occt::TColStd_Array1OfReal^ Density, double% Mass, Macad::Occt::Pnt% G)
{
    pin_ptr<double> pp_Mass = &Mass;
    pin_ptr<Macad::Occt::Pnt> pp_G = &G;
    ::GProp_PGProps::Barycentre(*(::TColgp_Array1OfPnt*)Pnts->NativeInstance, *(::TColStd_Array1OfReal*)Density->NativeInstance, *(double*)pp_Mass, *(gp_Pnt*)pp_G);
}

void Macad::Occt::GProp_PGProps::Barycentre(Macad::Occt::TColgp_Array2OfPnt^ Pnts, Macad::Occt::TColStd_Array2OfReal^ Density, double% Mass, Macad::Occt::Pnt% G)
{
    pin_ptr<double> pp_Mass = &Mass;
    pin_ptr<Macad::Occt::Pnt> pp_G = &G;
    ::GProp_PGProps::Barycentre(*(::TColgp_Array2OfPnt*)Pnts->NativeInstance, *(::TColStd_Array2OfReal*)Density->NativeInstance, *(double*)pp_Mass, *(gp_Pnt*)pp_G);
}



//---------------------------------------------------------------------
//  Class  GProp_SelGProps
//---------------------------------------------------------------------

Macad::Occt::GProp_SelGProps::GProp_SelGProps()
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_SelGProps();
}

Macad::Occt::GProp_SelGProps::GProp_SelGProps(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt SLocation)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_SLocation = &SLocation;
    _NativeInstance = new ::GProp_SelGProps(*(::gp_Cylinder*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2, *(gp_Pnt*)pp_SLocation);
}

Macad::Occt::GProp_SelGProps::GProp_SelGProps(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt SLocation)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_SLocation = &SLocation;
    _NativeInstance = new ::GProp_SelGProps(*(::gp_Cone*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2, *(gp_Pnt*)pp_SLocation);
}

Macad::Occt::GProp_SelGProps::GProp_SelGProps(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt SLocation)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_SLocation = &SLocation;
    _NativeInstance = new ::GProp_SelGProps(*(::gp_Sphere*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2, *(gp_Pnt*)pp_SLocation);
}

Macad::Occt::GProp_SelGProps::GProp_SelGProps(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt SLocation)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_SLocation = &SLocation;
    _NativeInstance = new ::GProp_SelGProps(*(::gp_Torus*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2, *(gp_Pnt*)pp_SLocation);
}

void Macad::Occt::GProp_SelGProps::SetLocation(Macad::Occt::Pnt SLocation)
{
    pin_ptr<Macad::Occt::Pnt> pp_SLocation = &SLocation;
    ((::GProp_SelGProps*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_SLocation);
}

void Macad::Occt::GProp_SelGProps::Perform(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2)
{
    ((::GProp_SelGProps*)_NativeInstance)->Perform(*(::gp_Cylinder*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2);
}

void Macad::Occt::GProp_SelGProps::Perform(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2)
{
    ((::GProp_SelGProps*)_NativeInstance)->Perform(*(::gp_Cone*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2);
}

void Macad::Occt::GProp_SelGProps::Perform(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2)
{
    ((::GProp_SelGProps*)_NativeInstance)->Perform(*(::gp_Sphere*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2);
}

void Macad::Occt::GProp_SelGProps::Perform(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2)
{
    ((::GProp_SelGProps*)_NativeInstance)->Perform(*(::gp_Torus*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2);
}



//---------------------------------------------------------------------
//  Class  GProp_UndefinedAxis
//---------------------------------------------------------------------

Macad::Occt::GProp_UndefinedAxis::GProp_UndefinedAxis()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::GProp_UndefinedAxis();
}

Macad::Occt::GProp_UndefinedAxis::GProp_UndefinedAxis(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::GProp_UndefinedAxis(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::GProp_UndefinedAxis::GProp_UndefinedAxis(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::GProp_UndefinedAxis(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::GProp_UndefinedAxis::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::GProp_UndefinedAxis::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::GProp_UndefinedAxis::Raise()
{
    ::GProp_UndefinedAxis::Raise("");
}

Macad::Occt::GProp_UndefinedAxis^ Macad::Occt::GProp_UndefinedAxis::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::GProp_UndefinedAxis) _result = ::GProp_UndefinedAxis::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::GProp_UndefinedAxis::CreateDowncasted(_result.get());
}

Macad::Occt::GProp_UndefinedAxis^ Macad::Occt::GProp_UndefinedAxis::NewInstance()
{
    Handle(::GProp_UndefinedAxis) _result = ::GProp_UndefinedAxis::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::GProp_UndefinedAxis::CreateDowncasted(_result.get());
}

Macad::Occt::GProp_UndefinedAxis^ Macad::Occt::GProp_UndefinedAxis::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::GProp_UndefinedAxis) _result = ::GProp_UndefinedAxis::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::GProp_UndefinedAxis::CreateDowncasted(_result.get());
}

Macad::Occt::GProp_UndefinedAxis^ Macad::Occt::GProp_UndefinedAxis::CreateDowncasted(::GProp_UndefinedAxis* instance)
{
    return gcnew Macad::Occt::GProp_UndefinedAxis( instance );
}



//---------------------------------------------------------------------
//  Class  GProp_VelGProps
//---------------------------------------------------------------------

Macad::Occt::GProp_VelGProps::GProp_VelGProps()
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::GProp_VelGProps();
}

Macad::Occt::GProp_VelGProps::GProp_VelGProps(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt VLocation)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::GProp_VelGProps(*(::gp_Cylinder*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2, *(gp_Pnt*)pp_VLocation);
}

Macad::Occt::GProp_VelGProps::GProp_VelGProps(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt VLocation)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::GProp_VelGProps(*(::gp_Cone*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2, *(gp_Pnt*)pp_VLocation);
}

Macad::Occt::GProp_VelGProps::GProp_VelGProps(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt VLocation)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::GProp_VelGProps(*(::gp_Sphere*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2, *(gp_Pnt*)pp_VLocation);
}

Macad::Occt::GProp_VelGProps::GProp_VelGProps(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt VLocation)
    : Macad::Occt::GProp_GProps(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
    _NativeInstance = new ::GProp_VelGProps(*(::gp_Torus*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2, *(gp_Pnt*)pp_VLocation);
}

void Macad::Occt::GProp_VelGProps::SetLocation(Macad::Occt::Pnt VLocation)
{
    pin_ptr<Macad::Occt::Pnt> pp_VLocation = &VLocation;
    ((::GProp_VelGProps*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_VLocation);
}

void Macad::Occt::GProp_VelGProps::Perform(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2)
{
    ((::GProp_VelGProps*)_NativeInstance)->Perform(*(::gp_Cylinder*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2);
}

void Macad::Occt::GProp_VelGProps::Perform(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2)
{
    ((::GProp_VelGProps*)_NativeInstance)->Perform(*(::gp_Cone*)S->NativeInstance, Alpha1, Alpha2, Z1, Z2);
}

void Macad::Occt::GProp_VelGProps::Perform(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2)
{
    ((::GProp_VelGProps*)_NativeInstance)->Perform(*(::gp_Sphere*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2);
}

void Macad::Occt::GProp_VelGProps::Perform(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2)
{
    ((::GProp_VelGProps*)_NativeInstance)->Perform(*(::gp_Torus*)S->NativeInstance, Teta1, Teta2, Alpha1, Alpha2);
}


