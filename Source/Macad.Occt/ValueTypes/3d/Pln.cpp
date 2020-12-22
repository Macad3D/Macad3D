#include "OcctPCH.h"

#include "Generated\gp.h"

using namespace System;
using namespace Macad::Occt;


bool Pln::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Pln^)(obj);
	return other->_Pos.Equals(_Pos);
}

int Pln::GetHashCode()
{
	return _Pos.GetHashCode();
}

String^ Pln::ToString()
{
	return _Pos.ToString();
}

Pln::Pln(const ::gp_Pln& native)
	: _Pos(native.Position())
{
}

Pln::Pln(Ax3 A)
	: _Pos(A)
{
}

Pln::Pln(Pnt P, Dir V)
	: _Pos(P, V)
{
}

Pln::Pln(double A, double B, double C, double D)
{
	::gp_Pln native = ::gp_Pln(A, B, C, D);
	_Pos = Ax3(native.Position());
}

void Pln::Coefficients(double% A, double% B, double% C, double% D)
{
	STRUCT_PINREF(this, Pln, gp_Pln);
	pin_ptr<double> A_ptr = &A;
	pin_ptr<double> B_ptr = &B;
	pin_ptr<double> C_ptr = &C;
	pin_ptr<double> D_ptr = &D;
	this_ptr->Coefficients(*A_ptr, *B_ptr, *C_ptr, *D_ptr);
}

void Pln::UReverse()
{
	_Pos.XReverse();
}

void Pln::VReverse()
{
	_Pos.YReverse();
}

bool Pln::Direct()
{
	return _Pos.Direct();
}

double Pln::Distance(Pnt P)
{
	STRUCT_PINREF(this, Pln, gp_Pln);
	STRUCT_PIN(P, Pnt, gp_Pnt);
	return this_ptr->Distance(*P_ptr);
}

double Pln::Distance(Macad::Occt::gp_Lin^ L)
{
	STRUCT_PINREF(this, Pln, gp_Pln);
	return this_ptr->Distance((*(::gp_Lin*)L->NativeInstance));
}

double Pln::Distance(Pln Other)
{
	STRUCT_PINREF(this, Pln, gp_Pln);
	STRUCT_PIN(Other, Pln, gp_Pln);
	return this_ptr->Distance(*Other_ptr);
}

double Pln::SquareDistance(Pnt P)
{
	STRUCT_PINREF(this, Pln, gp_Pln);
	STRUCT_PIN(P, Pnt, gp_Pnt);
	return this_ptr->SquareDistance(*P_ptr);
}

double Pln::SquareDistance(Macad::Occt::gp_Lin^ L)
{
	STRUCT_PINREF(this, Pln, gp_Pln);
	return this_ptr->SquareDistance((*(::gp_Lin*)L->NativeInstance));
}

double Pln::SquareDistance(Pln Other)
{
	STRUCT_PINREF(this, Pln, gp_Pln);
	STRUCT_PIN(Other, Pln, gp_Pln);
	return this_ptr->SquareDistance(*Other_ptr);
}


bool Pln::Contains(Pnt P, double LinearTolerance)
{
	STRUCT_PINREF(this, Pln, gp_Pln);
	STRUCT_PIN(P, Pnt, gp_Pnt);
	return this_ptr->Contains(*P_ptr, LinearTolerance);
}

bool Pln::Contains(Macad::Occt::gp_Lin^ L, double LinearTolerance, double AngularTolerance)
{
	STRUCT_PINREF(this, Pln, gp_Pln);
	return this_ptr->Contains((*(::gp_Lin*)L->NativeInstance), LinearTolerance, AngularTolerance);
}

void Pln::Mirror(Pnt P)
{
	_Pos.Mirror(P);
}

Pln Pln::Mirrored(Pnt P)
{
	Pln A = *this;
	A._Pos.Mirror(P);
	return A;
}

void Pln::Mirror(Ax1 A1)
{
	_Pos.Mirror(A1);
}

Pln Pln::Mirrored(Ax1 A1)
{
	Pln A = *this;
	A._Pos.Mirror(A1);
	return A;
}

void Pln::Mirror(Ax2 A2)
{
	_Pos.Mirror(A2);
}

Pln Pln::Mirrored(Ax2 A2)
{
	Pln A = *this;
	A._Pos.Mirror(A2);
	return A;
}

void Pln::Rotate(Ax1 A1, double Ang)
{
	_Pos.Rotate(A1, Ang);
}

Pln Pln::Rotated(Ax1 A1, double Ang)
{
	Pln A = *this;
	A._Pos.Rotate(A1, Ang);
	return A;
}

void Pln::Scale(Pnt P, double S)
{
	_Pos.Scale(P, S);
}

Pln Pln::Scaled(Pnt P, double S)
{
	Pln A = *this;
	A._Pos.Scale(P, S);
	return A;
}

void Pln::Transform(Trsf T)
{
	_Pos.Transform(T);
}

Pln Pln::Transformed(Trsf T)
{
	Pln A = *this;
	A._Pos.Transform(T);
	return A;
}

void Pln::Translate(Vec V)
{
	_Pos.Translate(V);
}

Pln Pln::Translated(Vec V)
{
	Pln A = *this;
	A._Pos.Translate(V);
	return A;
}

void Pln::Translate(Pnt P1, Pnt P2)
{
	_Pos.Translate(P1, P2);
}

Pln Pln::Translated(Pnt P1, Pnt P2)
{
	Pln A = *this;
	A._Pos.Translate(P1, P2);
	return A;
}

Pln Pln::operator * (Pln Left, Trsf Right)
{
	return Left.Transformed(Right);
}
