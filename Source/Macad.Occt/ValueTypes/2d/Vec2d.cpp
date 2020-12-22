#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Vec2d::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Vec2d^)(obj);
	return (other->_Coord.X == _Coord.X) && (other->_Coord.Y == _Coord.Y);
}

int Vec2d::GetHashCode()
{
	return _Coord.X.GetHashCode() ^ _Coord.Y.GetHashCode();
}

String^ Vec2d::ToString()
{
	return _Coord.ToString();
}

Vec2d::Vec2d(const ::gp_Vec2d& native)
{
	_Coord.X = native.X();
	_Coord.Y = native.Y();
}

Vec2d::Vec2d(double x, double y)
{
	_Coord.X = x;
	_Coord.Y = y;
}

Vec2d::Vec2d(XY Coord)
{
	_Coord = Coord;
}

Vec2d::Vec2d(Pnt2d P1, Pnt2d P2)
{
	_Coord = P2.Coord.Subtracted(P1.Coord);
}

XY Vec2d::ToXY()
{
	return _Coord;
}

Pnt2d Vec2d::ToPnt()
{
	return Pnt2d(_Coord);
}

Dir2d Vec2d::ToDir()
{
	return Dir2d(_Coord);
}

bool Vec2d::IsEqual(Vec2d Other, double LinearTolerance, double AngularTolerance)
{
	const double theNorm = Magnitude();
	const double theOtherNorm = Other.Magnitude();
	double val = theNorm - theOtherNorm;
	if (val < 0.0) val = -val;
	// Check for equal lengths
	const bool isEqualLength = (val <= LinearTolerance);
	// Check for small vectors
	if (theNorm > LinearTolerance && theOtherNorm > LinearTolerance)
	{
		double Ang = Angle(Other);
		if (Ang < 0.0) Ang = -Ang;
		// Check for zero angle
		return isEqualLength && (Ang <= AngularTolerance);
	}
	return isEqualLength;
}

bool Vec2d::IsNormal(Vec2d Other, double AngularTolerance)
{
	double Ang = M_PI / 2.0 - Angle(Other);
	if (Ang < 0) Ang = -Ang;
	return  Ang <= AngularTolerance;
}

bool Vec2d::IsOpposite(Vec2d Other, double AngularTolerance)
{
	double Ang = M_PI - Angle(Other);
	return Ang <= AngularTolerance;	
}

bool Vec2d::IsParallel(Vec2d Other, double AngularTolerance)
{
	double Ang = Angle(Other);
	return Ang <= AngularTolerance || M_PI - Ang <= AngularTolerance;
}

double Vec2d::Angle(Vec2d Other)
{
	STRUCT_PINREF(this, Vec2d, gp_Vec2d);
	STRUCT_PIN(Other, Vec2d, gp_Vec2d);
	return this_ptr->Angle(*Other_ptr);
}

double Vec2d::Magnitude()
{
	return _Coord.Modulus();
}

double Vec2d::SquareMagnitude()
{
	return _Coord.SquareModulus();
}

void Vec2d::Add(Vec2d Other)
{
	_Coord.Add(Other._Coord);
}

Vec2d Vec2d::Added(Vec2d Other)
{
	Vec2d V = *this;
	V._Coord.Add(Other._Coord);
	return V;
}

void Vec2d::Subtract(Vec2d Right)
{
	_Coord.Subtract(Right._Coord);
}

Vec2d Vec2d::Subtracted(Vec2d Right)
{
	Vec2d V = *this;
	V._Coord.Subtract(Right._Coord);
	return V;
}

void Vec2d::Multiply(double Scalar)
{
	_Coord.Multiply(Scalar);
}

Vec2d Vec2d::Multiplied(double Scalar)
{
	Vec2d V = *this;
	V._Coord.Multiply(Scalar);
	return V;
}

void Vec2d::Divide(double Scalar)
{
	_Coord.Divide(Scalar);
}

Vec2d Vec2d::Divided(double Scalar)
{
	Vec2d V = *this;
	V._Coord.Divide(Scalar);
	return V;
}

double Vec2d::Crossed(Vec2d Right)
{
	return _Coord.Crossed(Right._Coord);
}

double Vec2d::CrossMagnitude(Vec2d Right)
{
	return _Coord.CrossMagnitude(Right._Coord);
}

double Vec2d::CrossSquareMagnitude(Vec2d Right)
{
	return _Coord.CrossSquareMagnitude(Right._Coord);
}

double Vec2d::Dot(Vec2d Other)
{
	return _Coord.Dot(Other._Coord);
}

void Vec2d::Normalize()
{
	_Coord.Normalize();
}

Vec2d Vec2d::Normalized()
{
	Vec2d V = *this;
	V._Coord.Normalize();
	return V;
}

void Vec2d::Reverse()
{
	_Coord.Reverse();
}

Vec2d Vec2d::Reversed()
{
	Vec2d V = *this;
	V._Coord.Reverse();
	return V;
}

void Vec2d::SetLinearForm(double A1, Vec2d V1, double A2, Vec2d V2, Vec2d V3)
{
	_Coord.SetLinearForm(A1, V1._Coord, A2, V2._Coord, V3._Coord);
}

void Vec2d::SetLinearForm(double A1, Vec2d V1, double A2, Vec2d V2)
{
	_Coord.SetLinearForm(A1, V1._Coord, A2, V2._Coord);
}

void Vec2d::SetLinearForm(double A1, Vec2d V1, Vec2d V2)
{
	_Coord.SetLinearForm(A1, V1._Coord, V2._Coord);
}

void Vec2d::SetLinearForm(Vec2d V1, Vec2d V2)
{
	_Coord.SetLinearForm(V1._Coord, V2._Coord);
}

void Vec2d::Mirror(Vec2d V)
{
	STRUCT_PINREF(this, Vec2d, gp_Vec2d);
	STRUCT_PIN(V, Vec2d, gp_Vec2d);
	this_ptr->Mirror(*V_ptr);
}

Vec2d Vec2d::Mirrored(Vec2d V)
{
	Vec2d VRes = *this;
	VRes.Mirror(V);
	return VRes;
}

void Vec2d::Mirror(Ax2d A1)
{
	STRUCT_PINREF(this, Vec2d, gp_Vec2d);
	STRUCT_PIN(A1, Ax2d, gp_Ax2d);
	this_ptr->Mirror(*A1_ptr);
}

Vec2d Vec2d::Mirrored(Ax2d A1)
{
	Vec2d VRes = *this;
	VRes.Mirror(A1);
	return VRes;
}

void Vec2d::Rotate(double Ang)
{
	STRUCT_PINREF(this, Vec2d, gp_Vec2d);
	Trsf2d T;
	T.SetRotation(Pnt2d(0.0, 0.0), Ang);
	_Coord.Multiply(T.VectorialPart());
}

Vec2d Vec2d::Rotated(double Ang)
{
	Vec2d VRes = *this;
	VRes.Rotate(Ang);
	return VRes;
}

void Vec2d::Scale(double S)
{
	_Coord.Multiply(S);
}

Vec2d Vec2d::Scaled(double S)
{
	Vec2d VRes = *this;
	VRes._Coord.Multiply(S);
	return VRes;
}

void Vec2d::Transform(Trsf2d T)
{
	STRUCT_PINREF(this, Vec2d, gp_Vec2d);
	STRUCT_PIN(T, Trsf2d, gp_Trsf2d);
	this_ptr->Transform(*T_ptr);
}

Vec2d Vec2d::Transformed(Trsf2d T)
{
	Vec2d VRes = *this;
	VRes.Transform(T);
	return VRes;
}

Vec2d Vec2d::operator * (Vec2d Left, Trsf2d Right)
{
	return Left.Transformed(Right);
}
