// Generated wrapper code for package BndLib

#include "OcctPCH.h"
#include "BndLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "Bnd.h"
#include "Adaptor2d.h"
#include "Geom2d.h"
#include "Adaptor3d.h"


//---------------------------------------------------------------------
//  Class  BndLib
//---------------------------------------------------------------------

Macad::Occt::BndLib::BndLib()
    : Macad::Occt::BaseClass<::BndLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BndLib();
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Lin^ L, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Lin*)L->NativeInstance, P1, P2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Lin2d^ L, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Lin2d*)L->NativeInstance, P1, P2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Circ^ C, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Circ*)C->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Circ^ C, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Circ*)C->NativeInstance, P1, P2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Circ2d^ C, double Tol, Macad::Occt::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Circ2d*)C->NativeInstance, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Circ2d^ C, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Circ2d*)C->NativeInstance, P1, P2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Elips^ C, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Elips*)C->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Elips^ C, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Elips*)C->NativeInstance, P1, P2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Elips2d^ C, double Tol, Macad::Occt::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Elips2d*)C->NativeInstance, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Elips2d^ C, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Elips2d*)C->NativeInstance, P1, P2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Parab^ P, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Parab*)P->NativeInstance, P1, P2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Parab2d^ P, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Parab2d*)P->NativeInstance, P1, P2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Hypr^ H, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Hypr*)H->NativeInstance, P1, P2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Hypr2d^ H, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B)
{
    ::BndLib::Add(*(::gp_Hypr2d*)H->NativeInstance, P1, P2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Cylinder^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Cylinder*)S->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Cylinder^ S, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Cylinder*)S->NativeInstance, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Cone^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Cone*)S->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Cone^ S, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Cone*)S->NativeInstance, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Sphere^ S, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Sphere*)S->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Sphere^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Sphere*)S->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Torus^ P, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Torus*)P->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib::Add(Macad::Occt::gp_Torus^ P, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib::Add(*(::gp_Torus*)P->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BndLib_Add2dCurve
//---------------------------------------------------------------------

Macad::Occt::BndLib_Add2dCurve::BndLib_Add2dCurve()
    : Macad::Occt::BaseClass<::BndLib_Add2dCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BndLib_Add2dCurve();
}

void Macad::Occt::BndLib_Add2dCurve::Add(Macad::Occt::Adaptor2d_Curve2d^ C, double Tol, Macad::Occt::Bnd_Box2d^ B)
{
    ::BndLib_Add2dCurve::Add(*(::Adaptor2d_Curve2d*)C->NativeInstance, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void Macad::Occt::BndLib_Add2dCurve::Add(Macad::Occt::Adaptor2d_Curve2d^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box2d^ B)
{
    ::BndLib_Add2dCurve::Add(*(::Adaptor2d_Curve2d*)C->NativeInstance, U1, U2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void Macad::Occt::BndLib_Add2dCurve::Add(Macad::Occt::Geom2d_Curve^ C, double Tol, Macad::Occt::Bnd_Box2d^ Box)
{
    ::BndLib_Add2dCurve::Add(Handle(::Geom2d_Curve)(C->NativeInstance), Tol, *(::Bnd_Box2d*)Box->NativeInstance);
}

void Macad::Occt::BndLib_Add2dCurve::Add(Macad::Occt::Geom2d_Curve^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box2d^ B)
{
    ::BndLib_Add2dCurve::Add(Handle(::Geom2d_Curve)(C->NativeInstance), U1, U2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}

void Macad::Occt::BndLib_Add2dCurve::AddOptimal(Macad::Occt::Geom2d_Curve^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box2d^ B)
{
    ::BndLib_Add2dCurve::AddOptimal(Handle(::Geom2d_Curve)(C->NativeInstance), U1, U2, Tol, *(::Bnd_Box2d*)B->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BndLib_Add3dCurve
//---------------------------------------------------------------------

Macad::Occt::BndLib_Add3dCurve::BndLib_Add3dCurve()
    : Macad::Occt::BaseClass<::BndLib_Add3dCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BndLib_Add3dCurve();
}

void Macad::Occt::BndLib_Add3dCurve::Add(Macad::Occt::Adaptor3d_Curve^ C, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib_Add3dCurve::Add(*(::Adaptor3d_Curve*)C->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib_Add3dCurve::Add(Macad::Occt::Adaptor3d_Curve^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib_Add3dCurve::Add(*(::Adaptor3d_Curve*)C->NativeInstance, U1, U2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib_Add3dCurve::AddOptimal(Macad::Occt::Adaptor3d_Curve^ C, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib_Add3dCurve::AddOptimal(*(::Adaptor3d_Curve*)C->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib_Add3dCurve::AddOptimal(Macad::Occt::Adaptor3d_Curve^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib_Add3dCurve::AddOptimal(*(::Adaptor3d_Curve*)C->NativeInstance, U1, U2, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib_Add3dCurve::AddGenCurv(Macad::Occt::Adaptor3d_Curve^ C, double UMin, double UMax, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib_Add3dCurve::AddGenCurv(*(::Adaptor3d_Curve*)C->NativeInstance, UMin, UMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BndLib_AddSurface
//---------------------------------------------------------------------

Macad::Occt::BndLib_AddSurface::BndLib_AddSurface()
    : Macad::Occt::BaseClass<::BndLib_AddSurface>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BndLib_AddSurface();
}

void Macad::Occt::BndLib_AddSurface::Add(Macad::Occt::Adaptor3d_Surface^ S, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib_AddSurface::Add(*(::Adaptor3d_Surface*)S->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib_AddSurface::Add(Macad::Occt::Adaptor3d_Surface^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib_AddSurface::Add(*(::Adaptor3d_Surface*)S->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib_AddSurface::AddOptimal(Macad::Occt::Adaptor3d_Surface^ S, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib_AddSurface::AddOptimal(*(::Adaptor3d_Surface*)S->NativeInstance, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib_AddSurface::AddOptimal(Macad::Occt::Adaptor3d_Surface^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib_AddSurface::AddOptimal(*(::Adaptor3d_Surface*)S->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}

void Macad::Occt::BndLib_AddSurface::AddGenSurf(Macad::Occt::Adaptor3d_Surface^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B)
{
    ::BndLib_AddSurface::AddGenSurf(*(::Adaptor3d_Surface*)S->NativeInstance, UMin, UMax, VMin, VMax, Tol, *(::Bnd_Box*)B->NativeInstance);
}


