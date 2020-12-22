#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Pnt::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Pnt^)(obj);
	return (other->_Coord.X == _Coord.X) && (other->_Coord.Y == _Coord.Y) && (other->_Coord.Z == _Coord.Z);
}

int Pnt::GetHashCode()
{
	return _Coord.X.GetHashCode() ^ _Coord.Y.GetHashCode() ^ _Coord.Z.GetHashCode();
}

String^ Pnt::ToString()
{
	return _Coord.ToString();
}

Pnt::Pnt(const ::gp_Pnt& native)
{
	_Coord.X = native.X();
	_Coord.Y = native.Y();
	_Coord.Z = native.Z();
}

Pnt::Pnt(double x, double y, double z)
{
	_Coord.X = x;
	_Coord.Y = y;
	_Coord.Z = z;
}


Pnt::Pnt(XYZ Coord)
{
	_Coord = Coord;
}

XYZ Pnt::ToXYZ()
{
	return _Coord;
}

Vec Pnt::ToVec()
{
	return Vec(_Coord);
}

Dir Pnt::ToDir()
{
	return Dir(_Coord);
}

void Pnt::BaryCenter(double Alpha, Pnt P, double Beta)
{
	STRUCT_PINREF(this, Pnt, gp_Pnt);
	STRUCT_PIN(P, Pnt, gp_Pnt);
	this_ptr->BaryCenter(Alpha, *P_ptr, Beta);
}

bool Pnt::IsEqual(Pnt Other, double LinearTolerance)
{
	return Distance(Other) <= LinearTolerance;
}

double Pnt::Distance(Pnt Other)
{
	double d = 0, dd;
	dd = _Coord.X; dd -= Other.X; dd *= dd; d += dd;
	dd = _Coord.Y; dd -= Other.Y; dd *= dd; d += dd;
	dd = _Coord.Z; dd -= Other.Z; dd *= dd; d += dd;
	return System::Math::Sqrt(d);
}

double Pnt::SquareDistance(Pnt Other)
{
	double d = 0, dd;
	dd = _Coord.X; dd -= Other.X; dd *= dd; d += dd;
	dd = _Coord.Y; dd -= Other.Y; dd *= dd; d += dd;
	dd = _Coord.Z; dd -= Other.Z; dd *= dd; d += dd;
	return d;
}

void Pnt::Mirror(Pnt P)
{
	_Coord.Reverse();
	XYZ XYZ = P._Coord;
	XYZ.Multiply(2.0);
	_Coord.Add(XYZ);
}

Pnt Pnt::Mirrored(Pnt P)
{
	Pnt Pres = *this;
	Pres.Mirror(P);
	return Pres;
}

void Pnt::Mirror(Ax1 A1)
{
	STRUCT_PINREF(this, Pnt, gp_Pnt);
	STRUCT_PIN(A1, Ax1, gp_Ax1);
	this_ptr->Mirror(*A1_ptr);
}

Pnt Pnt::Mirrored(Ax1 A1)
{
	Pnt Pres = *this;
	Pres.Mirror(A1);
	return Pres;
}

void Pnt::Mirror(Ax2 A2)
{
	STRUCT_PINREF(this, Pnt, gp_Pnt);
	STRUCT_PIN(A2, Ax2, gp_Ax2);
	this_ptr->Mirror(*A2_ptr);
}

Pnt Pnt::Mirrored(Ax2 A2)
{
	Pnt VRes = *this;
	VRes.Mirror(A2);
	return VRes;
}

void Pnt::Rotate(Ax1 A1, double Ang)
{
	STRUCT_PINREF(this, Pnt, gp_Pnt);
	STRUCT_PIN(A1, Ax1, gp_Ax1);
	this_ptr->Rotate(*A1_ptr, Ang);
}

Pnt Pnt::Rotated(Ax1 A1, double Ang)
{
	Pnt Pres = *this;
	Pres.Rotate(A1, Ang);
	return Pres;
}

void Pnt::Scale(Pnt P, double S)
{
	XYZ XYZ = P._Coord;
	XYZ.Multiply(1.0 - S);
	_Coord.Multiply(S);
	_Coord.Add(XYZ);
}

Pnt Pnt::Scaled(Pnt P, double S)
{
	Pnt Pres = *this;
	Pres.Scale(P, S);
	return Pres;
}

void Pnt::Transform(Trsf T)
{
	STRUCT_PINREF(this, Pnt, gp_Pnt);
	STRUCT_PIN(T, Trsf, gp_Trsf);
	this_ptr->Transform(*T_ptr);
}

Pnt Pnt::Transformed(Trsf T)
{
	Pnt Pres = *this;
	Pres.Transform(T);
	return Pres;
}

void Pnt::Translate(Vec V)
{
	_Coord.Add(V.Coord);
}

Pnt Pnt::Translated(Vec V)
{
	Pnt Pres = *this;
	Pres.Translate(V);
	return Pres;
}

void Pnt::Translate(Pnt P1, Pnt P2)
{
	_Coord.X += P2.X - P1.X;
	_Coord.Y += P2.Y - P1.Y;
	_Coord.Z += P2.Z - P1.Z;
}

Pnt Pnt::Translated(Pnt P1, Pnt P2)
{
	return Pnt(
		_Coord.X + P2.X - P1.X,
		_Coord.Y + P2.Y - P1.Y,
		_Coord.Z + P2.Z - P1.Z);
}

Pnt Pnt::operator + (Pnt Left, Pnt Right)
{
	return Pnt(
		Left._Coord.X + Right._Coord.X,
		Left._Coord.Y + Right._Coord.Y,
		Left._Coord.Z + Right._Coord.Z);
}

Pnt Pnt::operator - (Pnt Left, Pnt Right)
{
	return Pnt(
		Left._Coord.X - Right._Coord.X,
		Left._Coord.Y - Right._Coord.Y,
		Left._Coord.Z - Right._Coord.Z);
}

Pnt Pnt::operator + (Pnt Left, Vec Right)
{
	return Left.Translated(Right);
}

Pnt Pnt::operator - (Pnt Left, Vec Right)
{
	return Left.Translated(Right.Reversed());
}

Pnt Pnt::operator * (Pnt Left, Trsf Right)
{
	return Left.Transformed(Right);
}
