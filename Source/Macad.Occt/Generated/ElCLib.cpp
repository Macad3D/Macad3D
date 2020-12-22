// Generated wrapper code for package ElCLib

#include "OcctPCH.h"
#include "ElCLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  ElCLib
//---------------------------------------------------------------------

Macad::Occt::ElCLib::ElCLib()
	: BaseClass<::ElCLib>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ElCLib();
}

Macad::Occt::ElCLib::ElCLib(Macad::Occt::ElCLib^ parameter1)
	: BaseClass<::ElCLib>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ElCLib(*(::ElCLib*)parameter1->NativeInstance);
}

double Macad::Occt::ElCLib::InPeriod(double U, double UFirst, double ULast)
{
	return ::ElCLib::InPeriod(U, UFirst, ULast);
}

void Macad::Occt::ElCLib::AdjustPeriodic(double UFirst, double ULast, double Precision, double% U1, double% U2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	::ElCLib::AdjustPeriodic(UFirst, ULast, Precision, *(Standard_Real*)pp_U1, *(Standard_Real*)pp_U2);
}

Macad::Occt::Pnt Macad::Occt::ElCLib::Value(double U, Macad::Occt::gp_Lin^ L)
{
	return Macad::Occt::Pnt(::ElCLib::Value(U, *(::gp_Lin*)L->NativeInstance));
}

Macad::Occt::Pnt Macad::Occt::ElCLib::Value(double U, Macad::Occt::gp_Circ^ C)
{
	return Macad::Occt::Pnt(::ElCLib::Value(U, *(::gp_Circ*)C->NativeInstance));
}

Macad::Occt::Pnt Macad::Occt::ElCLib::Value(double U, Macad::Occt::gp_Elips^ E)
{
	return Macad::Occt::Pnt(::ElCLib::Value(U, *(::gp_Elips*)E->NativeInstance));
}

Macad::Occt::Pnt Macad::Occt::ElCLib::Value(double U, Macad::Occt::gp_Hypr^ H)
{
	return Macad::Occt::Pnt(::ElCLib::Value(U, *(::gp_Hypr*)H->NativeInstance));
}

Macad::Occt::Pnt Macad::Occt::ElCLib::Value(double U, Macad::Occt::gp_Parab^ Prb)
{
	return Macad::Occt::Pnt(::ElCLib::Value(U, *(::gp_Parab*)Prb->NativeInstance));
}

void Macad::Occt::ElCLib::D1(double U, Macad::Occt::gp_Lin^ L, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	::ElCLib::D1(U, *(::gp_Lin*)L->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void Macad::Occt::ElCLib::D1(double U, Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	::ElCLib::D1(U, *(::gp_Circ*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void Macad::Occt::ElCLib::D1(double U, Macad::Occt::gp_Elips^ E, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	::ElCLib::D1(U, *(::gp_Elips*)E->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void Macad::Occt::ElCLib::D1(double U, Macad::Occt::gp_Hypr^ H, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	::ElCLib::D1(U, *(::gp_Hypr*)H->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void Macad::Occt::ElCLib::D1(double U, Macad::Occt::gp_Parab^ Prb, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	::ElCLib::D1(U, *(::gp_Parab*)Prb->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void Macad::Occt::ElCLib::D2(double U, Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	::ElCLib::D2(U, *(::gp_Circ*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::ElCLib::D2(double U, Macad::Occt::gp_Elips^ E, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	::ElCLib::D2(U, *(::gp_Elips*)E->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::ElCLib::D2(double U, Macad::Occt::gp_Hypr^ H, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	::ElCLib::D2(U, *(::gp_Hypr*)H->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::ElCLib::D2(double U, Macad::Occt::gp_Parab^ Prb, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	::ElCLib::D2(U, *(::gp_Parab*)Prb->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::ElCLib::D3(double U, Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	::ElCLib::D3(U, *(::gp_Circ*)C->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

void Macad::Occt::ElCLib::D3(double U, Macad::Occt::gp_Elips^ E, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	::ElCLib::D3(U, *(::gp_Elips*)E->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

void Macad::Occt::ElCLib::D3(double U, Macad::Occt::gp_Hypr^ H, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	::ElCLib::D3(U, *(::gp_Hypr*)H->NativeInstance, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

Macad::Occt::Vec Macad::Occt::ElCLib::DN(double U, Macad::Occt::gp_Lin^ L, int N)
{
	return Macad::Occt::Vec(::ElCLib::DN(U, *(::gp_Lin*)L->NativeInstance, N));
}

Macad::Occt::Vec Macad::Occt::ElCLib::DN(double U, Macad::Occt::gp_Circ^ C, int N)
{
	return Macad::Occt::Vec(::ElCLib::DN(U, *(::gp_Circ*)C->NativeInstance, N));
}

Macad::Occt::Vec Macad::Occt::ElCLib::DN(double U, Macad::Occt::gp_Elips^ E, int N)
{
	return Macad::Occt::Vec(::ElCLib::DN(U, *(::gp_Elips*)E->NativeInstance, N));
}

Macad::Occt::Vec Macad::Occt::ElCLib::DN(double U, Macad::Occt::gp_Hypr^ H, int N)
{
	return Macad::Occt::Vec(::ElCLib::DN(U, *(::gp_Hypr*)H->NativeInstance, N));
}

Macad::Occt::Vec Macad::Occt::ElCLib::DN(double U, Macad::Occt::gp_Parab^ Prb, int N)
{
	return Macad::Occt::Vec(::ElCLib::DN(U, *(::gp_Parab*)Prb->NativeInstance, N));
}

Macad::Occt::Pnt2d Macad::Occt::ElCLib::Value(double U, Macad::Occt::gp_Lin2d^ L)
{
	return Macad::Occt::Pnt2d(::ElCLib::Value(U, *(::gp_Lin2d*)L->NativeInstance));
}

Macad::Occt::Pnt2d Macad::Occt::ElCLib::Value(double U, Macad::Occt::gp_Circ2d^ C)
{
	return Macad::Occt::Pnt2d(::ElCLib::Value(U, *(::gp_Circ2d*)C->NativeInstance));
}

Macad::Occt::Pnt2d Macad::Occt::ElCLib::Value(double U, Macad::Occt::gp_Elips2d^ E)
{
	return Macad::Occt::Pnt2d(::ElCLib::Value(U, *(::gp_Elips2d*)E->NativeInstance));
}

Macad::Occt::Pnt2d Macad::Occt::ElCLib::Value(double U, Macad::Occt::gp_Hypr2d^ H)
{
	return Macad::Occt::Pnt2d(::ElCLib::Value(U, *(::gp_Hypr2d*)H->NativeInstance));
}

Macad::Occt::Pnt2d Macad::Occt::ElCLib::Value(double U, Macad::Occt::gp_Parab2d^ Prb)
{
	return Macad::Occt::Pnt2d(::ElCLib::Value(U, *(::gp_Parab2d*)Prb->NativeInstance));
}

void Macad::Occt::ElCLib::D1(double U, Macad::Occt::gp_Lin2d^ L, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	::ElCLib::D1(U, *(::gp_Lin2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::ElCLib::D1(double U, Macad::Occt::gp_Circ2d^ C, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	::ElCLib::D1(U, *(::gp_Circ2d*)C->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::ElCLib::D1(double U, Macad::Occt::gp_Elips2d^ E, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	::ElCLib::D1(U, *(::gp_Elips2d*)E->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::ElCLib::D1(double U, Macad::Occt::gp_Hypr2d^ H, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	::ElCLib::D1(U, *(::gp_Hypr2d*)H->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::ElCLib::D1(double U, Macad::Occt::gp_Parab2d^ Prb, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	::ElCLib::D1(U, *(::gp_Parab2d*)Prb->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::ElCLib::D2(double U, Macad::Occt::gp_Circ2d^ C, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	::ElCLib::D2(U, *(::gp_Circ2d*)C->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::ElCLib::D2(double U, Macad::Occt::gp_Elips2d^ E, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	::ElCLib::D2(U, *(::gp_Elips2d*)E->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::ElCLib::D2(double U, Macad::Occt::gp_Hypr2d^ H, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	::ElCLib::D2(U, *(::gp_Hypr2d*)H->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::ElCLib::D2(double U, Macad::Occt::gp_Parab2d^ Prb, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	::ElCLib::D2(U, *(::gp_Parab2d*)Prb->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::ElCLib::D3(double U, Macad::Occt::gp_Circ2d^ C, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	::ElCLib::D3(U, *(::gp_Circ2d*)C->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

void Macad::Occt::ElCLib::D3(double U, Macad::Occt::gp_Elips2d^ E, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	::ElCLib::D3(U, *(::gp_Elips2d*)E->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

void Macad::Occt::ElCLib::D3(double U, Macad::Occt::gp_Hypr2d^ H, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	::ElCLib::D3(U, *(::gp_Hypr2d*)H->NativeInstance, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::ElCLib::DN(double U, Macad::Occt::gp_Lin2d^ L, int N)
{
	return Macad::Occt::Vec2d(::ElCLib::DN(U, *(::gp_Lin2d*)L->NativeInstance, N));
}

Macad::Occt::Vec2d Macad::Occt::ElCLib::DN(double U, Macad::Occt::gp_Circ2d^ C, int N)
{
	return Macad::Occt::Vec2d(::ElCLib::DN(U, *(::gp_Circ2d*)C->NativeInstance, N));
}

Macad::Occt::Vec2d Macad::Occt::ElCLib::DN(double U, Macad::Occt::gp_Elips2d^ E, int N)
{
	return Macad::Occt::Vec2d(::ElCLib::DN(U, *(::gp_Elips2d*)E->NativeInstance, N));
}

Macad::Occt::Vec2d Macad::Occt::ElCLib::DN(double U, Macad::Occt::gp_Hypr2d^ H, int N)
{
	return Macad::Occt::Vec2d(::ElCLib::DN(U, *(::gp_Hypr2d*)H->NativeInstance, N));
}

Macad::Occt::Vec2d Macad::Occt::ElCLib::DN(double U, Macad::Occt::gp_Parab2d^ Prb, int N)
{
	return Macad::Occt::Vec2d(::ElCLib::DN(U, *(::gp_Parab2d*)Prb->NativeInstance, N));
}

Macad::Occt::Pnt Macad::Occt::ElCLib::LineValue(double U, Macad::Occt::Ax1 Pos)
{
	pin_ptr<Macad::Occt::Ax1> pp_Pos = &Pos;
	return Macad::Occt::Pnt(::ElCLib::LineValue(U, *(gp_Ax1*)pp_Pos));
}

Macad::Occt::Pnt Macad::Occt::ElCLib::CircleValue(double U, Macad::Occt::Ax2 Pos, double Radius)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	return Macad::Occt::Pnt(::ElCLib::CircleValue(U, *(gp_Ax2*)pp_Pos, Radius));
}

Macad::Occt::Pnt Macad::Occt::ElCLib::EllipseValue(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	return Macad::Occt::Pnt(::ElCLib::EllipseValue(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius));
}

Macad::Occt::Pnt Macad::Occt::ElCLib::HyperbolaValue(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	return Macad::Occt::Pnt(::ElCLib::HyperbolaValue(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius));
}

Macad::Occt::Pnt Macad::Occt::ElCLib::ParabolaValue(double U, Macad::Occt::Ax2 Pos, double Focal)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	return Macad::Occt::Pnt(::ElCLib::ParabolaValue(U, *(gp_Ax2*)pp_Pos, Focal));
}

void Macad::Occt::ElCLib::LineD1(double U, Macad::Occt::Ax1 Pos, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
	pin_ptr<Macad::Occt::Ax1> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	::ElCLib::LineD1(U, *(gp_Ax1*)pp_Pos, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void Macad::Occt::ElCLib::CircleD1(double U, Macad::Occt::Ax2 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	::ElCLib::CircleD1(U, *(gp_Ax2*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void Macad::Occt::ElCLib::EllipseD1(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	::ElCLib::EllipseD1(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void Macad::Occt::ElCLib::HyperbolaD1(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	::ElCLib::HyperbolaD1(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void Macad::Occt::ElCLib::ParabolaD1(double U, Macad::Occt::Ax2 Pos, double Focal, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	::ElCLib::ParabolaD1(U, *(gp_Ax2*)pp_Pos, Focal, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1);
}

void Macad::Occt::ElCLib::CircleD2(double U, Macad::Occt::Ax2 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	::ElCLib::CircleD2(U, *(gp_Ax2*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::ElCLib::EllipseD2(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	::ElCLib::EllipseD2(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::ElCLib::HyperbolaD2(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	::ElCLib::HyperbolaD2(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::ElCLib::ParabolaD2(double U, Macad::Occt::Ax2 Pos, double Focal, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	::ElCLib::ParabolaD2(U, *(gp_Ax2*)pp_Pos, Focal, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::ElCLib::CircleD3(double U, Macad::Occt::Ax2 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	::ElCLib::CircleD3(U, *(gp_Ax2*)pp_Pos, Radius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

void Macad::Occt::ElCLib::EllipseD3(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	::ElCLib::EllipseD3(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

void Macad::Occt::ElCLib::HyperbolaD3(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
	::ElCLib::HyperbolaD3(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

Macad::Occt::Vec Macad::Occt::ElCLib::LineDN(double U, Macad::Occt::Ax1 Pos, int N)
{
	pin_ptr<Macad::Occt::Ax1> pp_Pos = &Pos;
	return Macad::Occt::Vec(::ElCLib::LineDN(U, *(gp_Ax1*)pp_Pos, N));
}

Macad::Occt::Vec Macad::Occt::ElCLib::CircleDN(double U, Macad::Occt::Ax2 Pos, double Radius, int N)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	return Macad::Occt::Vec(::ElCLib::CircleDN(U, *(gp_Ax2*)pp_Pos, Radius, N));
}

Macad::Occt::Vec Macad::Occt::ElCLib::EllipseDN(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, int N)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	return Macad::Occt::Vec(::ElCLib::EllipseDN(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, N));
}

Macad::Occt::Vec Macad::Occt::ElCLib::HyperbolaDN(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, int N)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	return Macad::Occt::Vec(::ElCLib::HyperbolaDN(U, *(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, N));
}

Macad::Occt::Vec Macad::Occt::ElCLib::ParabolaDN(double U, Macad::Occt::Ax2 Pos, double Focal, int N)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	return Macad::Occt::Vec(::ElCLib::ParabolaDN(U, *(gp_Ax2*)pp_Pos, Focal, N));
}

Macad::Occt::Pnt2d Macad::Occt::ElCLib::LineValue(double U, Macad::Occt::Ax2d Pos)
{
	pin_ptr<Macad::Occt::Ax2d> pp_Pos = &Pos;
	return Macad::Occt::Pnt2d(::ElCLib::LineValue(U, *(gp_Ax2d*)pp_Pos));
}

Macad::Occt::Pnt2d Macad::Occt::ElCLib::CircleValue(double U, Macad::Occt::Ax22d Pos, double Radius)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	return Macad::Occt::Pnt2d(::ElCLib::CircleValue(U, *(gp_Ax22d*)pp_Pos, Radius));
}

Macad::Occt::Pnt2d Macad::Occt::ElCLib::EllipseValue(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	return Macad::Occt::Pnt2d(::ElCLib::EllipseValue(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius));
}

Macad::Occt::Pnt2d Macad::Occt::ElCLib::HyperbolaValue(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	return Macad::Occt::Pnt2d(::ElCLib::HyperbolaValue(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius));
}

Macad::Occt::Pnt2d Macad::Occt::ElCLib::ParabolaValue(double U, Macad::Occt::Ax22d Pos, double Focal)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	return Macad::Occt::Pnt2d(::ElCLib::ParabolaValue(U, *(gp_Ax22d*)pp_Pos, Focal));
}

void Macad::Occt::ElCLib::LineD1(double U, Macad::Occt::Ax2d Pos, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Ax2d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	::ElCLib::LineD1(U, *(gp_Ax2d*)pp_Pos, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::ElCLib::CircleD1(double U, Macad::Occt::Ax22d Pos, double Radius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	::ElCLib::CircleD1(U, *(gp_Ax22d*)pp_Pos, Radius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::ElCLib::EllipseD1(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	::ElCLib::EllipseD1(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::ElCLib::HyperbolaD1(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	::ElCLib::HyperbolaD1(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::ElCLib::ParabolaD1(double U, Macad::Occt::Ax22d Pos, double Focal, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	::ElCLib::ParabolaD1(U, *(gp_Ax22d*)pp_Pos, Focal, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1);
}

void Macad::Occt::ElCLib::CircleD2(double U, Macad::Occt::Ax22d Pos, double Radius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	::ElCLib::CircleD2(U, *(gp_Ax22d*)pp_Pos, Radius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::ElCLib::EllipseD2(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	::ElCLib::EllipseD2(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::ElCLib::HyperbolaD2(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	::ElCLib::HyperbolaD2(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::ElCLib::ParabolaD2(double U, Macad::Occt::Ax22d Pos, double Focal, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	::ElCLib::ParabolaD2(U, *(gp_Ax22d*)pp_Pos, Focal, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2);
}

void Macad::Occt::ElCLib::CircleD3(double U, Macad::Occt::Ax22d Pos, double Radius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	::ElCLib::CircleD3(U, *(gp_Ax22d*)pp_Pos, Radius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

void Macad::Occt::ElCLib::EllipseD3(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	::ElCLib::EllipseD3(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

void Macad::Occt::ElCLib::HyperbolaD3(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Vec2d> pp_V1 = &V1;
	pin_ptr<Macad::Occt::Vec2d> pp_V2 = &V2;
	pin_ptr<Macad::Occt::Vec2d> pp_V3 = &V3;
	::ElCLib::HyperbolaD3(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P, *(gp_Vec2d*)pp_V1, *(gp_Vec2d*)pp_V2, *(gp_Vec2d*)pp_V3);
}

Macad::Occt::Vec2d Macad::Occt::ElCLib::LineDN(double U, Macad::Occt::Ax2d Pos, int N)
{
	pin_ptr<Macad::Occt::Ax2d> pp_Pos = &Pos;
	return Macad::Occt::Vec2d(::ElCLib::LineDN(U, *(gp_Ax2d*)pp_Pos, N));
}

Macad::Occt::Vec2d Macad::Occt::ElCLib::CircleDN(double U, Macad::Occt::Ax22d Pos, double Radius, int N)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	return Macad::Occt::Vec2d(::ElCLib::CircleDN(U, *(gp_Ax22d*)pp_Pos, Radius, N));
}

Macad::Occt::Vec2d Macad::Occt::ElCLib::EllipseDN(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, int N)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	return Macad::Occt::Vec2d(::ElCLib::EllipseDN(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, N));
}

Macad::Occt::Vec2d Macad::Occt::ElCLib::HyperbolaDN(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, int N)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	return Macad::Occt::Vec2d(::ElCLib::HyperbolaDN(U, *(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, N));
}

Macad::Occt::Vec2d Macad::Occt::ElCLib::ParabolaDN(double U, Macad::Occt::Ax22d Pos, double Focal, int N)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	return Macad::Occt::Vec2d(::ElCLib::ParabolaDN(U, *(gp_Ax22d*)pp_Pos, Focal, N));
}

double Macad::Occt::ElCLib::Parameter(Macad::Occt::gp_Lin^ L, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ::ElCLib::Parameter(*(::gp_Lin*)L->NativeInstance, *(gp_Pnt*)pp_P);
}

double Macad::Occt::ElCLib::Parameter(Macad::Occt::gp_Lin2d^ L, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ::ElCLib::Parameter(*(::gp_Lin2d*)L->NativeInstance, *(gp_Pnt2d*)pp_P);
}

double Macad::Occt::ElCLib::Parameter(Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ::ElCLib::Parameter(*(::gp_Circ*)C->NativeInstance, *(gp_Pnt*)pp_P);
}

double Macad::Occt::ElCLib::Parameter(Macad::Occt::gp_Circ2d^ C, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ::ElCLib::Parameter(*(::gp_Circ2d*)C->NativeInstance, *(gp_Pnt2d*)pp_P);
}

double Macad::Occt::ElCLib::Parameter(Macad::Occt::gp_Elips^ E, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ::ElCLib::Parameter(*(::gp_Elips*)E->NativeInstance, *(gp_Pnt*)pp_P);
}

double Macad::Occt::ElCLib::Parameter(Macad::Occt::gp_Elips2d^ E, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ::ElCLib::Parameter(*(::gp_Elips2d*)E->NativeInstance, *(gp_Pnt2d*)pp_P);
}

double Macad::Occt::ElCLib::Parameter(Macad::Occt::gp_Hypr^ H, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ::ElCLib::Parameter(*(::gp_Hypr*)H->NativeInstance, *(gp_Pnt*)pp_P);
}

double Macad::Occt::ElCLib::Parameter(Macad::Occt::gp_Hypr2d^ H, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ::ElCLib::Parameter(*(::gp_Hypr2d*)H->NativeInstance, *(gp_Pnt2d*)pp_P);
}

double Macad::Occt::ElCLib::Parameter(Macad::Occt::gp_Parab^ Prb, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ::ElCLib::Parameter(*(::gp_Parab*)Prb->NativeInstance, *(gp_Pnt*)pp_P);
}

double Macad::Occt::ElCLib::Parameter(Macad::Occt::gp_Parab2d^ Prb, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ::ElCLib::Parameter(*(::gp_Parab2d*)Prb->NativeInstance, *(gp_Pnt2d*)pp_P);
}

double Macad::Occt::ElCLib::LineParameter(Macad::Occt::Ax1 Pos, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Ax1> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ::ElCLib::LineParameter(*(gp_Ax1*)pp_Pos, *(gp_Pnt*)pp_P);
}

double Macad::Occt::ElCLib::LineParameter(Macad::Occt::Ax2d Pos, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Ax2d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ::ElCLib::LineParameter(*(gp_Ax2d*)pp_Pos, *(gp_Pnt2d*)pp_P);
}

double Macad::Occt::ElCLib::CircleParameter(Macad::Occt::Ax2 Pos, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ::ElCLib::CircleParameter(*(gp_Ax2*)pp_Pos, *(gp_Pnt*)pp_P);
}

double Macad::Occt::ElCLib::CircleParameter(Macad::Occt::Ax22d Pos, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ::ElCLib::CircleParameter(*(gp_Ax22d*)pp_Pos, *(gp_Pnt2d*)pp_P);
}

double Macad::Occt::ElCLib::EllipseParameter(Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ::ElCLib::EllipseParameter(*(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P);
}

double Macad::Occt::ElCLib::EllipseParameter(Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ::ElCLib::EllipseParameter(*(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P);
}

double Macad::Occt::ElCLib::HyperbolaParameter(Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ::ElCLib::HyperbolaParameter(*(gp_Ax2*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt*)pp_P);
}

double Macad::Occt::ElCLib::HyperbolaParameter(Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ::ElCLib::HyperbolaParameter(*(gp_Ax22d*)pp_Pos, MajorRadius, MinorRadius, *(gp_Pnt2d*)pp_P);
}

double Macad::Occt::ElCLib::ParabolaParameter(Macad::Occt::Ax2 Pos, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ::ElCLib::ParabolaParameter(*(gp_Ax2*)pp_Pos, *(gp_Pnt*)pp_P);
}

double Macad::Occt::ElCLib::ParabolaParameter(Macad::Occt::Ax22d Pos, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ::ElCLib::ParabolaParameter(*(gp_Ax22d*)pp_Pos, *(gp_Pnt2d*)pp_P);
}

Macad::Occt::Pnt Macad::Occt::ElCLib::To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return Macad::Occt::Pnt(::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(gp_Pnt2d*)pp_P));
}

Macad::Occt::Vec Macad::Occt::ElCLib::To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	return Macad::Occt::Vec(::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(gp_Vec2d*)pp_V));
}

Macad::Occt::Dir Macad::Occt::ElCLib::To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Dir2d V)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Dir2d> pp_V = &V;
	return Macad::Occt::Dir(::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(gp_Dir2d*)pp_V));
}

Macad::Occt::Ax1 Macad::Occt::ElCLib::To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	return Macad::Occt::Ax1(::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(gp_Ax2d*)pp_A));
}

Macad::Occt::Ax2 Macad::Occt::ElCLib::To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Ax22d A)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	pin_ptr<Macad::Occt::Ax22d> pp_A = &A;
	return Macad::Occt::Ax2(::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(gp_Ax22d*)pp_A));
}

Macad::Occt::gp_Lin^ Macad::Occt::ElCLib::To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Lin2d^ L)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(::gp_Lin2d*)L->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::ElCLib::To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Circ2d^ C)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(::gp_Circ2d*)C->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::ElCLib::To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Elips2d^ E)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(::gp_Elips2d*)E->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::ElCLib::To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Hypr2d^ H)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(::gp_Hypr2d*)H->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::ElCLib::To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Parab2d^ Prb)
{
	pin_ptr<Macad::Occt::Ax2> pp_Pos = &Pos;
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ::ElCLib::To3d(*(gp_Ax2*)pp_Pos, *(::gp_Parab2d*)Prb->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}



