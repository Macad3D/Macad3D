#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Dir::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Dir^)(obj);
	return (other->_Coord.X == _Coord.X) && (other->_Coord.Y == _Coord.Y) && (other->_Coord.Z == _Coord.Z);
}

int Dir::GetHashCode()
{
	return _Coord.X.GetHashCode() ^ _Coord.Y.GetHashCode() ^ _Coord.Z.GetHashCode();
}

String^ Dir::ToString()
{
	return _Coord.ToString();
}

Dir::Dir(const ::gp_Dir& native)
{
	double X = native.X();
	double Y = native.Y();
	double Z = native.Z();
	double D = sqrt(X * X + Y * Y + Z * Z);
	if (D <= gp::Resolution)
		throw gcnew Exception("Vector length too small.");
	_Coord.X = X / D;
	_Coord.Y = Y / D;
	_Coord.Z = Z / D;
}

Dir::Dir(double x, double y, double z)
{
	double D = sqrt(x * x + y * y + z * z);
	if (D <= gp::Resolution)
		throw gcnew Exception("Vector length too small.");
	_Coord.X = x / D;
	_Coord.Y = y / D;
	_Coord.Z = z / D;
}

Dir::Dir(XYZ Coord)
{
	double X = Coord.X;
	double Y = Coord.Y;
	double Z = Coord.Z;
	double D = sqrt(X * X + Y * Y + Z * Z);
	if (D <= gp::Resolution)
		throw gcnew Exception("Vector length too small.");
	_Coord.X = X / D;
	_Coord.Y = Y / D;
	_Coord.Z = Z / D;
}

Dir::Dir(Vec vec)
{
	double X = vec.X;
	double Y = vec.Y;
	double Z = vec.Z;
	double D = sqrt(X * X + Y * Y + Z * Z);
	if(D <= gp::Resolution)
		throw gcnew Exception("Vector length too small.");
	_Coord.X = X / D;
	_Coord.Y = Y / D;
	_Coord.Z = Z / D;
}

XYZ Dir::ToXYZ()
{
	return _Coord;
}

Vec Dir::ToVec()
{
	return Vec(_Coord);
}

Ax1 Dir::ToAx1(Pnt loc)
{
	return Ax1(loc, *this);
}

bool Dir::IsEqual(Dir Other, double AngularTolerance)
{
	return Angle(Other) <= AngularTolerance;
}

bool Dir::IsNormal(Dir Other, double AngularTolerance)
{
	double Ang = M_PI / 2.0 - Angle(Other);
	if (Ang < 0) Ang = -Ang;
	return  Ang <= AngularTolerance;
}

bool Dir::IsOpposite(Dir Other, double AngularTolerance)
{
	double Ang = M_PI - Angle(Other);
	return Ang <= AngularTolerance;	
}

bool Dir::IsParallel(Dir Other, double AngularTolerance)
{
	double Ang = Angle(Other);
	return Ang <= AngularTolerance || M_PI - Ang <= AngularTolerance;
}

double Dir::Angle(Dir Other)
{
	double Cosinus = _Coord.Dot(Other._Coord);
	if (Cosinus > -0.70710678118655 && Cosinus < 0.70710678118655)
		return acos(Cosinus);
	else {
		double Sinus = (_Coord.Crossed(Other._Coord)).Modulus();
		if (Cosinus < 0.0)  return M_PI - asin(Sinus);
		else               return      asin(Sinus);
	}
}

double Dir::AngleWithRef(Dir Other, Dir VRef)
{
	double Ang;
	XYZ XYZ = _Coord.Crossed(Other._Coord);
	double Cosinus = _Coord.Dot(Other._Coord);
	double Sinus = XYZ.Modulus();
	if (Cosinus > -0.70710678118655 && Cosinus < 0.70710678118655)
		Ang = acos(Cosinus);
	else {
		if (Cosinus < 0.0)  Ang = M_PI - asin(Sinus);
		else               Ang = asin(Sinus);
	}
	if (XYZ.Dot(VRef._Coord) >= 0.0)  return  Ang;
	else                              return -Ang;
}

void Dir::Cross(Dir Right)
{
	_Coord.Cross(Right._Coord);
	double D = _Coord.Modulus();
	if (D <= gp::Resolution)
		throw gcnew Exception("Vector length too small.");
	_Coord.Divide(D);
}

Dir Dir::Crossed(Dir Right)
{
	Dir V = *this;
	V._Coord.Cross(Right._Coord);
	double D = V._Coord.Modulus();
	if (D <= gp::Resolution)
		throw gcnew Exception("Vector length too small.");
	V._Coord.Divide(D);
	return V;
}

void Dir::CrossCross(Dir V1, Dir V2)
{
	_Coord.CrossCross(V1._Coord, V2._Coord);
	Standard_Real D = _Coord.Modulus();
	if (D <= gp::Resolution)
		throw gcnew Exception("Vector length too small.");
	_Coord.Divide(D);
}

Dir Dir::CrossCrossed(Dir V1, Dir V2)
{
	Dir V = *this;
	(V._Coord).CrossCross(V1._Coord, V2._Coord);
	Standard_Real D = V._Coord.Modulus();
	if (D <= gp::Resolution)
		throw gcnew Exception("Vector length too small.");
	V._Coord.Divide(D);
	return V;
}

double Dir::Dot(Dir Other)
{
	return _Coord.Dot(Other._Coord);
}

double Dir::DotCross(Dir V1, Dir V2)
{
	return _Coord.DotCross(V1._Coord, V2._Coord);
}

void Dir::Reverse()
{
	_Coord.Reverse();
}

Dir Dir::Reversed()
{
	Dir V = *this;
	V._Coord.Reverse();
	return V;
}

void Dir::Mirror(Dir V)
{
	STRUCT_PINREF(this, Dir, gp_Dir);
	STRUCT_PIN(V, Dir, gp_Dir);
	this_ptr->Mirror(*V_ptr);
}

Dir Dir::Mirrored(Dir V)
{
	Dir VRes = *this;
	VRes.Mirror(V);
	return VRes;
}

void Dir::Mirror(Ax1 A1)
{
	STRUCT_PINREF(this, Dir, gp_Dir);
	STRUCT_PIN(A1, Ax1, gp_Ax1);
	this_ptr->Mirror(*A1_ptr);
}

Dir Dir::Mirrored(Ax1 A1)
{
	Dir VRes = *this;
	VRes.Mirror(A1);
	return VRes;
}

void Dir::Mirror(Ax2 A2)
{
	STRUCT_PINREF(this, Dir, gp_Dir);
	STRUCT_PIN(A2, Ax2, gp_Ax2);
	this_ptr->Mirror(*A2_ptr);
}

Dir Dir::Mirrored(Ax2 A2)
{
	Dir VRes = *this;
	VRes.Mirror(A2);
	return VRes;
}

void Dir::Rotate(Ax1 A1, double Ang)
{
	STRUCT_PINREF(this, Dir, gp_Dir);
	STRUCT_PIN(A1, Ax1, gp_Ax1);
	this_ptr->Rotate(*A1_ptr, Ang);
}

Dir Dir::Rotated(Ax1 A1, double Ang)
{
	Dir VRes = *this;
	VRes.Rotate(A1, Ang);
	return VRes;
}

void Dir::Transform(Trsf T)
{
	STRUCT_PINREF(this, Dir, gp_Dir);
	STRUCT_PIN(T, Trsf, gp_Trsf);
	this_ptr->Transform(*T_ptr);
}

Dir Dir::Transformed(Trsf T)
{
	Dir VRes = *this;
	VRes.Transform(T);
	return VRes;
}

Dir Dir::operator * (Dir Left, Trsf Right)
{
	return Left.Transformed(Right);
}
