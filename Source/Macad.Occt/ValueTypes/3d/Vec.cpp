#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Vec::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Vec^)(obj);
	return (other->_Coord.X == _Coord.X) && (other->_Coord.Y == _Coord.Y) && (other->_Coord.Z == _Coord.Z);
}

int Vec::GetHashCode()
{
	return _Coord.X.GetHashCode() ^ _Coord.Y.GetHashCode() ^ _Coord.Z.GetHashCode();
}

String^ Vec::ToString()
{
	return _Coord.ToString();
}

Vec::Vec(const ::gp_Vec& native)
{
	_Coord.X = native.X();
	_Coord.Y = native.Y();
	_Coord.Z = native.Z();
}

Vec::Vec(double x, double y, double z)
{
	_Coord.X = x;
	_Coord.Y = y;
	_Coord.Z = z;
}


Vec::Vec(XYZ Coord)
{
	_Coord = Coord;
}

Vec::Vec(Pnt P1, Pnt P2)
{
	_Coord = P2.Coord.Subtracted(P1.Coord);
}

XYZ Vec::ToXYZ()
{
	return _Coord;
}

Pnt Vec::ToPnt()
{
	return Pnt(_Coord);
}

Dir Vec::ToDir()
{
	return Dir(_Coord);
}

bool Vec::IsEqual(Vec Other, double LinearTolerance, double AngularTolerance)
{
	if (Magnitude() <= LinearTolerance ||
		Other.Magnitude() <= LinearTolerance) {
		double val = Magnitude() - Other.Magnitude();
		if (val < 0) val = -val;
		return val <= LinearTolerance;
	}
	else {
		double val = Magnitude() - Other.Magnitude();
		if (val < 0) val = -val;
		return val <= LinearTolerance && Angle(Other) <= AngularTolerance;
	}
}

bool Vec::IsNormal(Vec Other, double AngularTolerance)
{
	double Ang = M_PI / 2.0 - Angle(Other);
	if (Ang < 0) Ang = -Ang;
	return  Ang <= AngularTolerance;
}

bool Vec::IsOpposite(Vec Other, double AngularTolerance)
{
	double Ang = M_PI - Angle(Other);
	return Ang <= AngularTolerance;	
}

bool Vec::IsParallel(Vec Other, double AngularTolerance)
{
	double Ang = Angle(Other);
	return Ang <= AngularTolerance || M_PI - Ang <= AngularTolerance;
}

double Vec::Angle(Vec Other)
{
	if (_Coord.Modulus() <= gp::Resolution
		|| Other._Coord.Modulus() <= gp::Resolution)
	{
		throw gcnew Exception("Vector has null magnitude.");
	}
	return Dir(_Coord).Angle(Dir(Other._Coord));
}

double Vec::AngleWithRef(Vec Other, Vec VRef)
{
	if(_Coord.Modulus() <= gp::Resolution
		|| VRef._Coord.Modulus() <= gp::Resolution
		|| Other._Coord.Modulus() <= gp::Resolution)
	{
		throw gcnew Exception("Vector has null magnitude.");
	}
	return Dir(_Coord).AngleWithRef(Dir(Other._Coord), Dir(VRef.Coord));
}

double Vec::Magnitude()
{
	return _Coord.Modulus();
}

double Vec::SquareMagnitude()
{
	return _Coord.SquareModulus();
}

void Vec::Add(Vec Other)
{
	_Coord.Add(Other._Coord);
}

Vec Vec::Added(Vec Other)
{
	Vec V = *this;
	V._Coord.Add(Other._Coord);
	return V;
}

void Vec::Subtract(Vec Right)
{
	_Coord.Subtract(Right._Coord);
}

Vec Vec::Subtracted(Vec Right)
{
	Vec V = *this;
	V._Coord.Subtract(Right._Coord);
	return V;
}

void Vec::Multiply(double Scalar)
{
	_Coord.Multiply(Scalar);
}

Vec Vec::Multiplied(double Scalar)
{
	Vec V = *this;
	V._Coord.Multiply(Scalar);
	return V;
}

void Vec::Divide(double Scalar)
{
	_Coord.Divide(Scalar);
}

Vec Vec::Divided(double Scalar)
{
	Vec V = *this;
	V._Coord.Divide(Scalar);
	return V;
}

void Vec::Cross(Vec Right)
{
	_Coord.Cross(Right._Coord);
}

Vec Vec::Crossed(Vec Right)
{
	Vec V = *this;
	V._Coord.Cross(Right._Coord);
	return V;
}

double Vec::CrossMagnitude(Vec Right)
{
	return _Coord.CrossMagnitude(Right._Coord);
}

double Vec::CrossSquareMagnitude(Vec Right)
{
	return _Coord.CrossSquareMagnitude(Right._Coord);
}

void Vec::CrossCross(Vec V1, Vec V2)
{
	_Coord.CrossCross(V1._Coord, V2._Coord);
}

Vec Vec::CrossCrossed(Vec V1, Vec V2)
{
	Vec V = *this;
	V._Coord.CrossCross(V1._Coord, V2._Coord);
	return V;
}

double Vec::Dot(Vec Other)
{
	return _Coord.Dot(Other._Coord);
}

double Vec::DotCross(Vec V1, Vec V2)
{
	return _Coord.DotCross(V1._Coord, V2._Coord);
}

void Vec::Normalize()
{
	_Coord.Normalize();
}

Vec Vec::Normalized()
{
	Vec V = *this;
	V._Coord.Normalize();
	return V;
}

void Vec::Reverse()
{
	_Coord.Reverse();
}

Vec Vec::Reversed()
{
	Vec V = *this;
	V._Coord.Reverse();
	return V;
}

void Vec::SetLinearForm(double A1, Vec V1, double A2, Vec V2, double A3, Vec V3, Vec V4)
{
	_Coord.SetLinearForm(A1, V1._Coord, A2, V2._Coord, A3, V3._Coord, V4._Coord);
}

void Vec::SetLinearForm(double A1, Vec V1, double A2, Vec V2, double A3, Vec V3)
{
	_Coord.SetLinearForm(A1, V1._Coord, A2, V2._Coord, A3, V3._Coord);
}

void Vec::SetLinearForm(double A1, Vec V1, double A2, Vec V2, Vec V3)
{
	_Coord.SetLinearForm(A1, V1._Coord, A2, V2._Coord, V3._Coord);
}

void Vec::SetLinearForm(double A1, Vec V1, double A2, Vec V2)
{
	_Coord.SetLinearForm(A1, V1._Coord, A2, V2._Coord);
}

void Vec::SetLinearForm(double A1, Vec V1, Vec V2)
{
	_Coord.SetLinearForm(A1, V1._Coord, V2._Coord);
}

void Vec::SetLinearForm(Vec V1, Vec V2)
{
	_Coord.SetLinearForm(V1._Coord, V2._Coord);
}

void Vec::Mirror(Vec V)
{
	STRUCT_PINREF(this, Vec, gp_Vec);
	STRUCT_PIN(V, Vec, gp_Vec);
	this_ptr->Mirror(*V_ptr);
}

Vec Vec::Mirrored(Vec V)
{
	Vec VRes = *this;
	VRes.Mirror(V);
	return VRes;
}


void Vec::Mirror(Ax1 A1)
{
	STRUCT_PINREF(this, Vec, gp_Vec);
	STRUCT_PIN(A1, Ax1, gp_Ax1);
	this_ptr->Mirror(*A1_ptr);
}

Vec Vec::Mirrored(Ax1 A1)
{
	Vec VRes = *this;
	VRes.Mirror(A1);
	return VRes;
}

void Vec::Mirror(Ax2 A2)
{
	STRUCT_PINREF(this, Vec, gp_Vec);
	STRUCT_PIN(A2, Ax2, gp_Ax2);
	this_ptr->Mirror(*A2_ptr);
}

Vec Vec::Mirrored(Ax2 A2)
{
	Vec VRes = *this;
	VRes.Mirror(A2);
	return VRes;
}

void Vec::Rotate(Ax1 A1, double Ang)
{
	STRUCT_PINREF(this, Vec, gp_Vec);
	STRUCT_PIN(A1, Ax1, gp_Ax1);
	this_ptr->Rotate(*A1_ptr, Ang);
}

Vec Vec::Rotated(Ax1 A1, double Ang)
{
	Vec VRes = *this;
	VRes.Rotate(A1, Ang);
	return VRes;
}

void Vec::Scale(double S)
{
	_Coord.Multiply(S);
}

Vec Vec::Scaled(double S)
{
	Vec VRes = *this;
	VRes._Coord.Multiply(S);
	return VRes;
}

void Vec::Transform(Trsf T)
{
	STRUCT_PINREF(this, Vec, gp_Vec);
	STRUCT_PIN(T, Trsf, gp_Trsf);
	this_ptr->Transform(*T_ptr);
}

Vec Vec::Transformed(Trsf T)
{
	Vec VRes = *this;
	VRes.Transform(T);
	return VRes;
}

Vec Vec::operator * (Vec Left, Trsf Right)
{
	return Left.Transformed(Right);
}
