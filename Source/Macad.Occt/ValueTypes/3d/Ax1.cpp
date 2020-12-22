#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Ax1::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Ax1^)(obj);
	return (other->_Loc.Equals(_Loc) && other->_Dir.Equals(_Dir));
}

int Ax1::GetHashCode()
{
	return _Loc.GetHashCode() ^ _Dir.GetHashCode();
}

String^ Ax1::ToString()
{
	return String::Format("({0}),({1})", _Loc.ToString(), _Dir.ToString());
}

Ax1::Ax1(const ::gp_Ax1& native)
	: _Loc(native.Location())
	, _Dir(native.Direction())
{
}

Ax1::Ax1(Pnt P, Dir V)
	: _Loc(P)
	, _Dir(V)
{
}


bool Ax1::IsCoaxial(Ax1 Other, double AngularTolerance, double LinearTolerance)
{
	STRUCT_PINREF(this, Ax1, gp_Ax1);
	STRUCT_PIN(Other, Ax1, gp_Ax1);
	return this_ptr->IsCoaxial(*Other_ptr, AngularTolerance, LinearTolerance);
}

bool Ax1::IsNormal(Ax1 Other, double AngularTolerance)
{
	return _Dir.IsNormal(Other._Dir, AngularTolerance);
}

bool Ax1::IsOpposite(Ax1 Other, double AngularTolerance)
{
	return _Dir.IsOpposite(Other._Dir, AngularTolerance);
}

bool Ax1::IsParallel(Ax1 Other, double AngularTolerance)
{
	return _Dir.IsParallel(Other._Dir, AngularTolerance);
}

double Ax1::Angle(Ax1 Other)
{
	return _Dir.Angle(Other._Dir);
}

void Ax1::Reverse()
{
	return _Dir.Reverse();
}

Ax1 Ax1::Reversed()
{
	Ax1 A = *this;
	A.Reverse();
	return A;
}

void Ax1::Mirror(Pnt P)
{
	_Loc.Mirror(P);
	_Dir.Reverse();
}

Ax1 Ax1::Mirrored(Pnt P)
{
	Ax1 A = *this;
	A.Mirror(P);
	return A;
}

void Ax1::Mirror(Ax1 A1)
{
	_Loc.Mirror(A1);
	_Dir.Mirror(A1._Dir);
}

Ax1 Ax1::Mirrored(Ax1 A1)
{
	Ax1 A = *this;
	A.Mirror(A1);
	return A;
}

void Ax1::Mirror(Ax2 A2)
{
	STRUCT_PINREF(this, Ax1, gp_Ax1);
	STRUCT_PIN(A2, Ax2, gp_Ax2);
	this_ptr->Mirror(*A2_ptr);
}

Ax1 Ax1::Mirrored(Ax2 A2)
{
	Ax1 VRes = *this;
	VRes.Mirror(A2);
	return VRes;
}

void Ax1::Rotate(Ax1 A1, double Ang)
{
	_Loc.Rotate(A1, Ang);
	_Dir.Rotate(A1, Ang);
}

Ax1 Ax1::Rotated(Ax1 A1, double Ang)
{
	Ax1 A = *this;
	A.Rotate(A1, Ang);
	return A;
}

void Ax1::Scale(Pnt P, double S)
{
	_Loc.Scale(P, S);
	if (S < 0.0)  _Dir.Reverse();
}

Ax1 Ax1::Scaled(Pnt P, double S)
{
	Ax1 A = *this;
	A.Scale(P, S);
	return A;
}

void Ax1::Transform(Trsf T)
{
	STRUCT_PINREF(this, Ax1, gp_Ax1);
	STRUCT_PIN(T, Trsf, gp_Trsf);
	this_ptr->Transform(*T_ptr);
}

Ax1 Ax1::Transformed(Trsf T)
{
	Ax1 A = *this;
	A.Transform(T);
	return A;
}

void Ax1::Translate(Vec V)
{
	_Loc.Translate(V);
}

Ax1 Ax1::Translated(Vec V)
{
	Ax1 A = *this;
	A._Loc.Translate(V);
	return A;
}

void Ax1::Translate(Pnt P1, Pnt P2)
{
	_Loc.Translate(P1, P2);
}

Ax1 Ax1::Translated(Pnt P1, Pnt P2)
{
	Ax1 A = *this;
	A._Loc.Translate(P1, P2);
	return A;
}

Ax1 Ax1::operator * (Ax1 Left, Trsf Right)
{
	return Left.Transformed(Right);
}
