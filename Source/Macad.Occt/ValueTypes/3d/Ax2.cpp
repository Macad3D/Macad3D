#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Ax2::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Ax2^)(obj);
	return (other->_Axis.Equals(_Axis) && other->_XDir.Equals(_XDir) && other->_YDir.Equals(_YDir));
}

int Ax2::GetHashCode()
{
	return _Axis.GetHashCode() ^ _XDir.GetHashCode() ^ _YDir.GetHashCode();
}

String^ Ax2::ToString()
{
	return String::Format("({0}),({1}),({2}),({3})", gcnew array<Object^>{ _Axis.Location, _XDir, _YDir, _Axis.Direction });
}

Ax2::Ax2(const ::gp_Ax2& native)
	: _Axis(native.Axis())
	, _XDir(native.XDirection())
	, _YDir(native.YDirection())
{
}

Ax2::Ax2(Pnt P, Dir N, Dir Vx)
	: _Axis(P, N)
	, _XDir(N)
	, _YDir(N)
{
	_XDir.CrossCross(Vx, N);
	_YDir.Cross(_XDir);
}

Ax2::Ax2(Pnt P, Dir V)
	: _Axis(P, V)
{
	double A = V.X;
	double B = V.Y;
	double C = V.Z;
	double Aabs = A;
	if (Aabs < 0) Aabs = -Aabs;
	double Babs = B;
	if (Babs < 0) Babs = -Babs;
	double Cabs = C;
	if (Cabs < 0) Cabs = -Cabs;
	Dir D;

	if (Babs <= Aabs && Babs <= Cabs) {
		if (Aabs > Cabs) D = Dir(-C, 0., A);
		else             D = Dir(C, 0., -A);
	}
	else if (Aabs <= Babs && Aabs <= Cabs) {
		if (Babs > Cabs) D = Dir(0., -C, B);
		else             D = Dir(0., C, -B);
	}
	else {
		if (Aabs > Babs) D = Dir(-B, A, 0.);
		else             D = Dir(B, -A, 0.);
	}
	SetXDirection(D);
}

bool Ax2::IsCoplanar(Ax2 Other, double LinearTolerance, double AngularTolerance)
{
	STRUCT_PINREF(this, Ax2, gp_Ax2);
	STRUCT_PIN(Other, Ax2, gp_Ax2);
	return this_ptr->IsCoplanar(*Other_ptr, LinearTolerance, AngularTolerance);
}

bool Ax2::IsCoplanar(Ax1 A1, double LinearTolerance, double AngularTolerance)
{
	STRUCT_PINREF(this, Ax2, gp_Ax2);
	STRUCT_PIN(A1, Ax1, gp_Ax1);
	return this_ptr->IsCoplanar(*A1_ptr, LinearTolerance, AngularTolerance);
}

double Ax2::Angle(Ax2 Other)
{
	return _Axis.Angle(Other._Axis);
}

void Ax2::Mirror(Pnt P)
{
	STRUCT_PINREF(this, Ax2, gp_Ax2);
	STRUCT_PIN(P, Pnt, gp_Pnt);
	return this_ptr->Mirror(*P_ptr);
}

Ax2 Ax2::Mirrored(Pnt P)
{
	Ax2 A = *this;
	A.Mirror(P);
	return A;
}

void Ax2::Mirror(Ax1 A1)
{
	STRUCT_PINREF(this, Ax2, gp_Ax2);
	STRUCT_PIN(A1, Ax1, gp_Ax1);
	return this_ptr->Mirror(*A1_ptr);
}

Ax2 Ax2::Mirrored(Ax1 A1)
{
	Ax2 A = *this;
	A.Mirror(A1);
	return A;
}

void Ax2::Mirror(Ax2 A2)
{
	STRUCT_PINREF(this, Ax2, gp_Ax2);
	STRUCT_PIN(A2, Ax2, gp_Ax2);
	return this_ptr->Mirror(*A2_ptr);
}

Ax2 Ax2::Mirrored(Ax2 A2)
{
	Ax2 A = *this;
	A.Mirror(A2);
	return A;
}

void Ax2::Rotate(Ax1 A1, double Ang)
{
	STRUCT_PINREF(this, Ax2, gp_Ax2);
	STRUCT_PIN(A1, Ax1, gp_Ax1);
	return this_ptr->Rotate(*A1_ptr, Ang);
}

Ax2 Ax2::Rotated(Ax1 A1, double Ang)
{
	Ax2 A = *this;
	A.Rotate(A1, Ang);
	return A;
}

void Ax2::Scale(Pnt P, double S)
{
	STRUCT_PINREF(this, Ax2, gp_Ax2);
	STRUCT_PIN(P, Pnt, gp_Pnt);
	return this_ptr->Scale(*P_ptr, S);
}

Ax2 Ax2::Scaled(Pnt P, double S)
{
	Ax2 A = *this;
	A.Scale(P, S);
	return A;
}

void Ax2::Transform(Trsf T)
{
	STRUCT_PINREF(this, Ax2, gp_Ax2);
	STRUCT_PIN(T, Trsf, gp_Trsf);
	this_ptr->Transform(*T_ptr);
}

Ax2 Ax2::Transformed(Trsf T)
{
	Ax2 A = *this;
	A.Transform(T);
	return A;
}

void Ax2::Translate(Vec V)
{
	_Axis.Translate(V);
}

Ax2 Ax2::Translated(Vec V)
{
	Ax2 A = *this;
	A._Axis.Translate(V);
	return A;
}

void Ax2::Translate(Pnt P1, Pnt P2)
{
	_Axis.Translate(P1, P2);
}

Ax2 Ax2::Translated(Pnt P1, Pnt P2)
{
	Ax2 A = *this;
	A._Axis.Translate(P1, P2);
	return A;
}

void Ax2::SetAxis(Ax1 A1)
{
	STRUCT_PINREF(this, Ax2, gp_Ax2);
	STRUCT_PIN(A1, Ax1, gp_Ax1);
	return this_ptr->SetAxis(*A1_ptr);
}

void Ax2::SetDirection(Dir V)
{
	STRUCT_PINREF(this, Ax2, gp_Ax2);
	STRUCT_PIN(V, Dir, gp_Dir);
	return this_ptr->SetDirection(*V_ptr);
}

void Ax2::SetXDirection(Dir Vx)
{
	STRUCT_PINREF(this, Ax2, gp_Ax2);
	STRUCT_PIN(Vx, Dir, gp_Dir);
	return this_ptr->SetXDirection(*Vx_ptr);
}

void Ax2::SetYDirection(Dir Vy)
{
	STRUCT_PINREF(this, Ax2, gp_Ax2);
	STRUCT_PIN(Vy, Dir, gp_Dir);
	return this_ptr->SetYDirection(*Vy_ptr);
}

Ax2 Ax2::operator * (Ax2 Left, Trsf Right)
{
	return Left.Transformed(Right);
}
