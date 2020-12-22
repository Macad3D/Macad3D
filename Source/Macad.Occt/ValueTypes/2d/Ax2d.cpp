#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Ax2d::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Ax2d^)(obj);
	return (other->_Loc.Equals(_Loc) && other->_Dir.Equals(_Dir));
}

int Ax2d::GetHashCode()
{
	return _Loc.GetHashCode() ^ _Dir.GetHashCode();
}

String^ Ax2d::ToString()
{
	return String::Format("({0}),({1})", _Loc.ToString(), _Dir.ToString());
}

Ax2d::Ax2d(const ::gp_Ax2d& native)
	: _Loc(native.Location())
	, _Dir(native.Direction())
{
}

Ax2d::Ax2d(Pnt2d P, Dir2d V)
	: _Loc(P)
	, _Dir(V)
{
}


bool Ax2d::IsCoaxial(Ax2d Other, double AngularTolerance, double LinearTolerance)
{
	STRUCT_PINREF(this, Ax2d, gp_Ax2d);
	STRUCT_PIN(Other, Ax2d, gp_Ax2d);
	return this_ptr->IsCoaxial(*Other_ptr, AngularTolerance, LinearTolerance);
}

bool Ax2d::IsNormal(Ax2d Other, double AngularTolerance)
{
	return _Dir.IsNormal(Other._Dir, AngularTolerance);
}

bool Ax2d::IsOpposite(Ax2d Other, double AngularTolerance)
{
	return _Dir.IsOpposite(Other._Dir, AngularTolerance);
}

bool Ax2d::IsParallel(Ax2d Other, double AngularTolerance)
{
	return _Dir.IsParallel(Other._Dir, AngularTolerance);
}

double Ax2d::Angle(Ax2d Other)
{
	return _Dir.Angle(Other._Dir);
}

void Ax2d::Reverse()
{
	return _Dir.Reverse();
}

Ax2d Ax2d::Reversed()
{
	Ax2d A = *this;
	A.Reverse();
	return A;
}

void Ax2d::Mirror(Pnt2d P)
{
	_Loc.Mirror(P);
	_Dir.Reverse();
}

Ax2d Ax2d::Mirrored(Pnt2d P)
{
	Ax2d A = *this;
	A.Mirror(P);
	return A;
}

void Ax2d::Mirror(Ax2d A1)
{
	_Loc.Mirror(A1);
	_Dir.Mirror(A1._Dir);
}

Ax2d Ax2d::Mirrored(Ax2d A1)
{
	Ax2d A = *this;
	A.Mirror(A1);
	return A;
}

void Ax2d::Rotate(Pnt2d P, double Ang)
{
	_Loc.Rotate(P, Ang);
	_Dir.Rotate(Ang);
}

Ax2d Ax2d::Rotated(Pnt2d P, double Ang)
{
	Ax2d A = *this;
	A.Rotate(P, Ang);
	return A;
}

void Ax2d::Scale(Pnt2d P, double S)
{
	_Loc.Scale(P, S);
	if (S < 0.0)  _Dir.Reverse();
}

Ax2d Ax2d::Scaled(Pnt2d P, double S)
{
	Ax2d A = *this;
	A.Scale(P, S);
	return A;
}

void Ax2d::Transform(Trsf2d T)
{
	STRUCT_PINREF(this, Ax2d, gp_Ax2d);
	STRUCT_PIN(T, Trsf2d, gp_Trsf2d);
	this_ptr->Transform(*T_ptr);
}

Ax2d Ax2d::Transformed(Trsf2d T)
{
	Ax2d A = *this;
	A.Transform(T);
	return A;
}

void Ax2d::Translate(Vec2d V)
{
	_Loc.Translate(V);
}

Ax2d Ax2d::Translated(Vec2d V)
{
	Ax2d A = *this;
	A._Loc.Translate(V);
	return A;
}

void Ax2d::Translate(Pnt2d P1, Pnt2d P2)
{
	_Loc.Translate(P1, P2);
}

Ax2d Ax2d::Translated(Pnt2d P1, Pnt2d P2)
{
	Ax2d A = *this;
	A._Loc.Translate(P1, P2);
	return A;
}

Ax2d Ax2d::operator * (Ax2d Left, Trsf2d Right)
{
	return Left.Transformed(Right);
}
