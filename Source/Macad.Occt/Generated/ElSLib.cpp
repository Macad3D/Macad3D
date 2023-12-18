// Generated wrapper code for package ElSLib

#include "OcctPCH.h"
#include "ElSLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"


//---------------------------------------------------------------------
//  Class  ElSLib
//---------------------------------------------------------------------

Macad::Occt::ElSLib::ElSLib()
    : Macad::Occt::BaseClass<::ElSLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ElSLib();
}

Macad::Occt::Pnt Macad::Occt::ElSLib::Value(double U, double V, Macad::Occt::Pln Pl)
{
    pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
    ::gp_Pnt _nativeResult = ::ElSLib::Value(U, V, *(gp_Pln*)pp_Pl);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::ElSLib::Value(double U, double V, Macad::Occt::gp_Cone^ C)
{
    ::gp_Pnt _nativeResult = ::ElSLib::Value(U, V, *(::gp_Cone*)C->NativeInstance);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::ElSLib::Value(double U, double V, Macad::Occt::gp_Cylinder^ C)
{
    ::gp_Pnt _nativeResult = ::ElSLib::Value(U, V, *(::gp_Cylinder*)C->NativeInstance);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::ElSLib::Value(double U, double V, Macad::Occt::gp_Sphere^ S)
{
    ::gp_Pnt _nativeResult = ::ElSLib::Value(U, V, *(::gp_Sphere*)S->NativeInstance);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::ElSLib::Value(double U, double V, Macad::Occt::gp_Torus^ T)
{
    ::gp_Pnt _nativeResult = ::ElSLib::Value(U, V, *(::gp_Torus*)T->NativeInstance);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::ElSLib::DN(double U, double V, Macad::Occt::Pln Pl, int Nu, int Nv)
{
    pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
    ::gp_Vec _nativeResult = ::ElSLib::DN(U, V, *(gp_Pln*)pp_Pl, Nu, Nv);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::ElSLib::DN(double U, double V, Macad::Occt::gp_Cone^ C, int Nu, int Nv)
{
    ::gp_Vec _nativeResult = ::ElSLib::DN(U, V, *(::gp_Cone*)C->NativeInstance, Nu, Nv);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::ElSLib::DN(double U, double V, Macad::Occt::gp_Cylinder^ C, int Nu, int Nv)
{
    ::gp_Vec _nativeResult = ::ElSLib::DN(U, V, *(::gp_Cylinder*)C->NativeInstance, Nu, Nv);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::ElSLib::DN(double U, double V, Macad::Occt::gp_Sphere^ S, int Nu, int Nv)
{
    ::gp_Vec _nativeResult = ::ElSLib::DN(U, V, *(::gp_Sphere*)S->NativeInstance, Nu, Nv);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::ElSLib::DN(double U, double V, Macad::Occt::gp_Torus^ T, int Nu, int Nv)
{
    ::gp_Vec _nativeResult = ::ElSLib::DN(U, V, *(::gp_Torus*)T->NativeInstance, Nu, Nv);
    return Macad::Occt::Vec(_nativeResult);
}

void Macad::Occt::ElSLib::D0(double U, double V, Macad::Occt::Pln Pl, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ::ElSLib::D0(U, V, *(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_P);
}

void Macad::Occt::ElSLib::D0(double U, double V, Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ::ElSLib::D0(U, V, *(::gp_Cone*)C->NativeInstance, *(gp_Pnt*)pp_P);
}

void Macad::Occt::ElSLib::D0(double U, double V, Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ::ElSLib::D0(U, V, *(::gp_Cylinder*)C->NativeInstance, *(gp_Pnt*)pp_P);
}

void Macad::Occt::ElSLib::D0(double U, double V, Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ::ElSLib::D0(U, V, *(::gp_Sphere*)S->NativeInstance, *(gp_Pnt*)pp_P);
}

void Macad::Occt::ElSLib::D0(double U, double V, Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ::ElSLib::D0(U, V, *(::gp_Torus*)T->NativeInstance, *(gp_Pnt*)pp_P);
}

void Macad::Occt::ElSLib::D1(double U, double V, Macad::Occt::Pln Pl, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv)
{
    pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    ::ElSLib::D1(U, V, *(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void Macad::Occt::ElSLib::D1(double U, double V, Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    ::ElSLib::D1(U, V, *(::gp_Cone*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void Macad::Occt::ElSLib::D1(double U, double V, Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    ::ElSLib::D1(U, V, *(::gp_Cylinder*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void Macad::Occt::ElSLib::D1(double U, double V, Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    ::ElSLib::D1(U, V, *(::gp_Sphere*)S->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void Macad::Occt::ElSLib::D1(double U, double V, Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    ::ElSLib::D1(U, V, *(::gp_Torus*)T->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void Macad::Occt::ElSLib::D2(double U, double V, Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    ::ElSLib::D2(U, V, *(::gp_Cone*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void Macad::Occt::ElSLib::D2(double U, double V, Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    ::ElSLib::D2(U, V, *(::gp_Cylinder*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void Macad::Occt::ElSLib::D2(double U, double V, Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    ::ElSLib::D2(U, V, *(::gp_Sphere*)S->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void Macad::Occt::ElSLib::D2(double U, double V, Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    ::ElSLib::D2(U, V, *(::gp_Torus*)T->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void Macad::Occt::ElSLib::D3(double U, double V, Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuu = &Vuuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvvv = &Vvvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuv = &Vuuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuvv = &Vuvv;
    ::ElSLib::D3(U, V, *(::gp_Cone*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void Macad::Occt::ElSLib::D3(double U, double V, Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuu = &Vuuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvvv = &Vvvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuv = &Vuuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuvv = &Vuvv;
    ::ElSLib::D3(U, V, *(::gp_Cylinder*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void Macad::Occt::ElSLib::D3(double U, double V, Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuu = &Vuuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvvv = &Vvvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuv = &Vuuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuvv = &Vuvv;
    ::ElSLib::D3(U, V, *(::gp_Sphere*)S->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void Macad::Occt::ElSLib::D3(double U, double V, Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuu = &Vuuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvvv = &Vvvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuv = &Vuuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuvv = &Vuvv;
    ::ElSLib::D3(U, V, *(::gp_Torus*)T->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

Macad::Occt::Pnt Macad::Occt::ElSLib::PlaneValue(double U, double V, Macad::Occt::Ax3 Pos)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    ::gp_Pnt _nativeResult = ::ElSLib::PlaneValue(U, V, *(gp_Ax3*)pp_Pos);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::ElSLib::CylinderValue(double U, double V, Macad::Occt::Ax3 Pos, double Radius)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    ::gp_Pnt _nativeResult = ::ElSLib::CylinderValue(U, V, *(gp_Ax3*)pp_Pos, Radius);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::ElSLib::ConeValue(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    ::gp_Pnt _nativeResult = ::ElSLib::ConeValue(U, V, *(gp_Ax3*)pp_Pos, Radius, SAngle);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::ElSLib::SphereValue(double U, double V, Macad::Occt::Ax3 Pos, double Radius)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    ::gp_Pnt _nativeResult = ::ElSLib::SphereValue(U, V, *(gp_Ax3*)pp_Pos, Radius);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::ElSLib::TorusValue(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    ::gp_Pnt _nativeResult = ::ElSLib::TorusValue(U, V, *(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::ElSLib::PlaneDN(double U, double V, Macad::Occt::Ax3 Pos, int Nu, int Nv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    ::gp_Vec _nativeResult = ::ElSLib::PlaneDN(U, V, *(gp_Ax3*)pp_Pos, Nu, Nv);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::ElSLib::CylinderDN(double U, double V, Macad::Occt::Ax3 Pos, double Radius, int Nu, int Nv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    ::gp_Vec _nativeResult = ::ElSLib::CylinderDN(U, V, *(gp_Ax3*)pp_Pos, Radius, Nu, Nv);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::ElSLib::ConeDN(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, int Nu, int Nv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    ::gp_Vec _nativeResult = ::ElSLib::ConeDN(U, V, *(gp_Ax3*)pp_Pos, Radius, SAngle, Nu, Nv);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::ElSLib::SphereDN(double U, double V, Macad::Occt::Ax3 Pos, double Radius, int Nu, int Nv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    ::gp_Vec _nativeResult = ::ElSLib::SphereDN(U, V, *(gp_Ax3*)pp_Pos, Radius, Nu, Nv);
    return Macad::Occt::Vec(_nativeResult);
}

Macad::Occt::Vec Macad::Occt::ElSLib::TorusDN(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, int Nu, int Nv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    ::gp_Vec _nativeResult = ::ElSLib::TorusDN(U, V, *(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, Nu, Nv);
    return Macad::Occt::Vec(_nativeResult);
}

void Macad::Occt::ElSLib::PlaneD0(double U, double V, Macad::Occt::Ax3 Pos, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ::ElSLib::PlaneD0(U, V, *(gp_Ax3*)pp_Pos, *(gp_Pnt*)pp_P);
}

void Macad::Occt::ElSLib::ConeD0(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ::ElSLib::ConeD0(U, V, *(gp_Ax3*)pp_Pos, Radius, SAngle, *(gp_Pnt*)pp_P);
}

void Macad::Occt::ElSLib::CylinderD0(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ::ElSLib::CylinderD0(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P);
}

void Macad::Occt::ElSLib::SphereD0(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ::ElSLib::SphereD0(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P);
}

void Macad::Occt::ElSLib::TorusD0(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ::ElSLib::TorusD0(U, V, *(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P);
}

void Macad::Occt::ElSLib::PlaneD1(double U, double V, Macad::Occt::Ax3 Pos, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    ::ElSLib::PlaneD1(U, V, *(gp_Ax3*)pp_Pos, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void Macad::Occt::ElSLib::ConeD1(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    ::ElSLib::ConeD1(U, V, *(gp_Ax3*)pp_Pos, Radius, SAngle, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void Macad::Occt::ElSLib::CylinderD1(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    ::ElSLib::CylinderD1(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void Macad::Occt::ElSLib::SphereD1(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    ::ElSLib::SphereD1(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void Macad::Occt::ElSLib::TorusD1(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    ::ElSLib::TorusD1(U, V, *(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void Macad::Occt::ElSLib::ConeD2(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    ::ElSLib::ConeD2(U, V, *(gp_Ax3*)pp_Pos, Radius, SAngle, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void Macad::Occt::ElSLib::CylinderD2(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    ::ElSLib::CylinderD2(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void Macad::Occt::ElSLib::SphereD2(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    ::ElSLib::SphereD2(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void Macad::Occt::ElSLib::TorusD2(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    ::ElSLib::TorusD2(U, V, *(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void Macad::Occt::ElSLib::ConeD3(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuu = &Vuuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvvv = &Vvvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuv = &Vuuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuvv = &Vuvv;
    ::ElSLib::ConeD3(U, V, *(gp_Ax3*)pp_Pos, Radius, SAngle, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void Macad::Occt::ElSLib::CylinderD3(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuu = &Vuuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvvv = &Vvvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuv = &Vuuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuvv = &Vuvv;
    ::ElSLib::CylinderD3(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void Macad::Occt::ElSLib::SphereD3(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuu = &Vuuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvvv = &Vvvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuv = &Vuuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuvv = &Vuvv;
    ::ElSLib::SphereD3(U, V, *(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void Macad::Occt::ElSLib::TorusD3(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuu = &Vuuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvvv = &Vvvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuv = &Vuuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuvv = &Vuvv;
    ::ElSLib::TorusD3(U, V, *(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void Macad::Occt::ElSLib::Parameters(Macad::Occt::Pln Pl, Macad::Occt::Pnt P, double% U, double% V)
{
    pin_ptr<Macad::Occt::Pln> pp_Pl = &Pl;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ::ElSLib::Parameters(*(gp_Pln*)pp_Pl, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void Macad::Occt::ElSLib::Parameters(Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt P, double% U, double% V)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ::ElSLib::Parameters(*(::gp_Cylinder*)C->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void Macad::Occt::ElSLib::Parameters(Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt P, double% U, double% V)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ::ElSLib::Parameters(*(::gp_Cone*)C->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void Macad::Occt::ElSLib::Parameters(Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt P, double% U, double% V)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ::ElSLib::Parameters(*(::gp_Sphere*)S->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void Macad::Occt::ElSLib::Parameters(Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt P, double% U, double% V)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ::ElSLib::Parameters(*(::gp_Torus*)T->NativeInstance, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void Macad::Occt::ElSLib::PlaneParameters(Macad::Occt::Ax3 Pos, Macad::Occt::Pnt P, double% U, double% V)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ::ElSLib::PlaneParameters(*(gp_Ax3*)pp_Pos, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void Macad::Occt::ElSLib::CylinderParameters(Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt P, double% U, double% V)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ::ElSLib::CylinderParameters(*(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void Macad::Occt::ElSLib::ConeParameters(Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt P, double% U, double% V)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ::ElSLib::ConeParameters(*(gp_Ax3*)pp_Pos, Radius, SAngle, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void Macad::Occt::ElSLib::SphereParameters(Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt P, double% U, double% V)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ::ElSLib::SphereParameters(*(gp_Ax3*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

void Macad::Occt::ElSLib::TorusParameters(Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt P, double% U, double% V)
{
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ::ElSLib::TorusParameters(*(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(double*)pp_U, *(double*)pp_V);
}

Macad::Occt::gp_Lin^ Macad::Occt::ElSLib::PlaneUIso(Macad::Occt::Ax3 Pos, double U)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    *_result = ::ElSLib::PlaneUIso(*(gp_Ax3*)pp_Pos, U);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Lin^ Macad::Occt::ElSLib::CylinderUIso(Macad::Occt::Ax3 Pos, double Radius, double U)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    *_result = ::ElSLib::CylinderUIso(*(gp_Ax3*)pp_Pos, Radius, U);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Lin^ Macad::Occt::ElSLib::ConeUIso(Macad::Occt::Ax3 Pos, double Radius, double SAngle, double U)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    *_result = ::ElSLib::ConeUIso(*(gp_Ax3*)pp_Pos, Radius, SAngle, U);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::ElSLib::SphereUIso(Macad::Occt::Ax3 Pos, double Radius, double U)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    *_result = ::ElSLib::SphereUIso(*(gp_Ax3*)pp_Pos, Radius, U);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::ElSLib::TorusUIso(Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, double U)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    *_result = ::ElSLib::TorusUIso(*(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, U);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Lin^ Macad::Occt::ElSLib::PlaneVIso(Macad::Occt::Ax3 Pos, double V)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    *_result = ::ElSLib::PlaneVIso(*(gp_Ax3*)pp_Pos, V);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::ElSLib::CylinderVIso(Macad::Occt::Ax3 Pos, double Radius, double V)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    *_result = ::ElSLib::CylinderVIso(*(gp_Ax3*)pp_Pos, Radius, V);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::ElSLib::ConeVIso(Macad::Occt::Ax3 Pos, double Radius, double SAngle, double V)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    *_result = ::ElSLib::ConeVIso(*(gp_Ax3*)pp_Pos, Radius, SAngle, V);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::ElSLib::SphereVIso(Macad::Occt::Ax3 Pos, double Radius, double V)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    *_result = ::ElSLib::SphereVIso(*(gp_Ax3*)pp_Pos, Radius, V);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::ElSLib::TorusVIso(Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, double V)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Ax3> pp_Pos = &Pos;
    *_result = ::ElSLib::TorusVIso(*(gp_Ax3*)pp_Pos, MajorRadius, MinorRadius, V);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}


