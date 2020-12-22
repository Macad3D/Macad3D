#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Pnt2d::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Pnt2d^)(obj);
	return (other->_Coord.X == _Coord.X) && (other->_Coord.Y == _Coord.Y);
}

int Pnt2d::GetHashCode()
{
	return _Coord.X.GetHashCode() ^ _Coord.Y.GetHashCode();
}

String^ Pnt2d::ToString()
{
	return _Coord.ToString();
}

Pnt2d::Pnt2d(const ::gp_Pnt2d& native)
{
	_Coord.X = native.X();
	_Coord.Y = native.Y();
}

Pnt2d::Pnt2d(double x, double y)
{
	_Coord.X = x;
	_Coord.Y = y;
}


Pnt2d::Pnt2d(XY Coord)
{
	_Coord = Coord;
}

XY Pnt2d::ToXY()
{
	return _Coord;
}

Vec2d Pnt2d::ToVec()
{
	return Vec2d(_Coord);
}

Dir2d Pnt2d::ToDir()
{
	return Dir2d(_Coord);
}

bool Pnt2d::IsEqual(Pnt2d Other, double LinearTolerance)
{
	return Distance(Other) <= LinearTolerance;
}

double Pnt2d::Distance(Pnt2d Other)
{
	double d = 0, dd;
	dd = _Coord.X; dd -= Other.X; dd *= dd; d += dd;
	dd = _Coord.Y; dd -= Other.Y; dd *= dd; d += dd;
	return System::Math::Sqrt(d);
}

double Pnt2d::SquareDistance(Pnt2d Other)
{
	double d = 0, dd;
	dd = _Coord.X; dd -= Other.X; dd *= dd; d += dd;
	dd = _Coord.Y; dd -= Other.Y; dd *= dd; d += dd;
	return d;
}

void Pnt2d::Mirror(Pnt2d P)
{
	_Coord.Reverse();
	XY XY = P._Coord;
	XY.Multiply(2.0);
	_Coord.Add(XY);
}

Pnt2d Pnt2d::Mirrored(Pnt2d P)
{
	Pnt2d Pres = *this;
	Pres.Mirror(P);
	return Pres;
}

void Pnt2d::Mirror(Ax2d A2)
{
	STRUCT_PINREF(this, Pnt2d, gp_Pnt2d);
	STRUCT_PIN(A2, Ax2d, gp_Ax2d);
	this_ptr->Mirror(*A2_ptr);
}

Pnt2d Pnt2d::Mirrored(Ax2d A2)
{
	Pnt2d VRes = *this;
	VRes.Mirror(A2);
	return VRes;
}

void Pnt2d::Rotate(Pnt2d P, double Ang)
{
	STRUCT_PINREF(this, Pnt2d, gp_Pnt2d);
	STRUCT_PIN(P, Pnt2d, gp_Pnt2d);
	this_ptr->Rotate(*P_ptr, Ang);
}

Pnt2d Pnt2d::Rotated(Pnt2d P, double Ang)
{
	Pnt2d Pres = *this;
	Pres.Rotate(P, Ang);
	return Pres;
}

void Pnt2d::Scale(Pnt2d P, double S)
{
	XY XY = P._Coord;
	XY.Multiply(1.0 - S);
	_Coord.Multiply(S);
	_Coord.Add(XY);
}

Pnt2d Pnt2d::Scaled(Pnt2d P, double S)
{
	Pnt2d Pres = *this;
	Pres.Scale(P, S);
	return Pres;
}

void Pnt2d::Transform(Trsf2d T)
{
	STRUCT_PINREF(this, Pnt2d, gp_Pnt2d);
	STRUCT_PIN(T, Trsf2d, gp_Trsf2d);
	this_ptr->Transform(*T_ptr);
}

Pnt2d Pnt2d::Transformed(Trsf2d T)
{
	Pnt2d Pres = *this;
	Pres.Transform(T);
	return Pres;
}

void Pnt2d::Translate(Vec2d V)
{
	_Coord.Add(V.Coord);
}

Pnt2d Pnt2d::Translated(Vec2d V)
{
	Pnt2d Pres = *this;
	Pres.Translate(V);
	return Pres;
}

void Pnt2d::Translate(Pnt2d P1, Pnt2d P2)
{
	_Coord.X += P2.X - P1.X;
	_Coord.Y += P2.Y - P1.Y;
}

Pnt2d Pnt2d::Translated(Pnt2d P1, Pnt2d P2)
{
	return Pnt2d(
		_Coord.X + P2.X - P1.X,
		_Coord.Y + P2.Y - P1.Y);
}

Pnt2d Pnt2d::operator + (Pnt2d Left, Pnt2d Right)
{
	return Pnt2d(
		Left._Coord.X + Right._Coord.X,
		Left._Coord.Y + Right._Coord.Y);
}

Pnt2d Pnt2d::operator - (Pnt2d Left, Pnt2d Right)
{
	return Pnt2d(
		Left._Coord.X - Right._Coord.X,
		Left._Coord.Y - Right._Coord.Y);
}

Pnt2d Pnt2d::operator + (Pnt2d Left, Vec2d Right)
{
	return Left.Translated(Right);
}

Pnt2d Pnt2d::operator - (Pnt2d Left, Vec2d Right)
{
	return Left.Translated(Right.Reversed());
}

Pnt2d Pnt2d::operator * (Pnt2d Left, Trsf2d Right)
{
	return Left.Transformed(Right);
}
