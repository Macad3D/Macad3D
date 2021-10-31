#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Dir2d::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Dir2d^)(obj);
	return (other->_Coord.X == _Coord.X) && (other->_Coord.Y == _Coord.Y);
}

int Dir2d::GetHashCode()
{
	return _Coord.X.GetHashCode() ^ _Coord.Y.GetHashCode();
}

String^ Dir2d::ToString()
{
	return _Coord.ToString();
}

Dir2d::Dir2d(const ::gp_Dir2d& native)
{
	double X = native.X();
	double Y = native.Y();
	double D = sqrt(X * X + Y * Y);
	if (D <= gp::Resolution)
		throw gcnew Exception("Vector length too small.");
	_Coord.X = X / D;
	_Coord.Y = Y / D;
}

Dir2d::Dir2d(double x, double y)
{
	double D = sqrt(x * x + y * y);
	if (D <= gp::Resolution)
		throw gcnew Exception("Vector length too small.");
	_Coord.X = x / D;
	_Coord.Y = y / D;
}

Dir2d::Dir2d(XY Coord)
{
	double X = Coord.X;
	double Y = Coord.Y;
	double D = sqrt(X * X + Y * Y);
	if (D <= gp::Resolution)
		throw gcnew Exception("Vector length too small.");
	_Coord.X = X / D;
	_Coord.Y = Y / D;
}

Dir2d::Dir2d(Vec2d vec)
{
	double X = vec.X;
	double Y = vec.Y;
	double D = sqrt(X * X + Y * Y);
	if(D <= gp::Resolution)
		throw gcnew Exception("Vector length too small.");
	_Coord.X = X / D;
	_Coord.Y = Y / D;
}

XY Dir2d::ToXY()
{
	return _Coord;
}

Vec2d Dir2d::ToVec()
{
	return Vec2d(_Coord);
}

Vec2d Dir2d::ToVec(double scale)
{
	return Vec2d(_Coord).Scaled(scale);
}

Ax2d Dir2d::ToAxis(Pnt2d loc)
{
	return Ax2d(loc, *this);
}

bool Dir2d::IsEqual(Dir2d Other, double AngularTolerance)
{
	return Angle(Other) <= AngularTolerance;
}

bool Dir2d::IsNormal(Dir2d Other, double AngularTolerance)
{
	double Ang = Angle(Other);
	if (Ang < 0) Ang = -Ang;
	Ang = M_PI / 2.0 - Ang;
	if (Ang < 0) Ang = -Ang;
	return   Ang <= AngularTolerance;
}

bool Dir2d::IsOpposite(Dir2d Other, double AngularTolerance)
{
	double Ang = Angle(Other);
	if (Ang < 0) Ang = -Ang;
	return M_PI - Ang <= AngularTolerance;
}

bool Dir2d::IsParallel(Dir2d Other, double AngularTolerance)
{
	double Ang = Angle(Other);
	if (Ang < 0) Ang = -Ang;
	return   Ang <= AngularTolerance || M_PI - Ang <= AngularTolerance;
}

double Dir2d::Angle(Dir2d Other)
{
	STRUCT_PINREF(this, Dir2d, gp_Dir2d);
	STRUCT_PIN(Other, Dir2d, gp_Dir2d);
	return this_ptr->Angle(*Other_ptr);
}

double Dir2d::Crossed(Dir2d Right)
{
	return _Coord.Crossed(Right._Coord);
}

double Dir2d::Dot(Dir2d Other)
{
	return _Coord.Dot(Other._Coord);
}

void Dir2d::Reverse()
{
	_Coord.Reverse();
}

Dir2d Dir2d::Reversed()
{
	Dir2d V = *this;
	V._Coord.Reverse();
	return V;
}

void Dir2d::Mirror(Dir2d V)
{
	STRUCT_PINREF(this, Dir2d, gp_Dir2d);
	STRUCT_PIN(V, Dir2d, gp_Dir2d);
	this_ptr->Mirror(*V_ptr);
}

Dir2d Dir2d::Mirrored(Dir2d V)
{
	Dir2d VRes = *this;
	VRes.Mirror(V);
	return VRes;
}

void Dir2d::Mirror(Ax2d A1)
{
	STRUCT_PINREF(this, Dir2d, gp_Dir2d);
	STRUCT_PIN(A1, Ax2d, gp_Ax2d);
	this_ptr->Mirror(*A1_ptr);
}

Dir2d Dir2d::Mirrored(Ax2d A1)
{
	Dir2d VRes = *this;
	VRes.Mirror(A1);
	return VRes;
}

void Dir2d::Rotate(double Ang)
{
	STRUCT_PINREF(this, Dir2d, gp_Dir2d);
	this_ptr->Rotate(Ang);
}

Dir2d Dir2d::Rotated(double Ang)
{
	Dir2d VRes = *this;
	VRes.Rotate(Ang);
	return VRes;
}

void Dir2d::Transform(Trsf2d T)
{
	STRUCT_PINREF(this, Dir2d, gp_Dir2d);
	STRUCT_PIN(T, Trsf2d, gp_Trsf2d);
	this_ptr->Transform(*T_ptr);
}

Dir2d Dir2d::Transformed(Trsf2d T)
{
	Dir2d VRes = *this;
	VRes.Transform(T);
	return VRes;
}

Dir2d Dir2d::operator * (Dir2d Left, Trsf2d Right)
{
	return Left.Transformed(Right);
}
