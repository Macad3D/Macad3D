#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool XYZ::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (XYZ^)(obj);
	return (other->X == X) && (other->Y == Y) && (other->Z == Z);
}

int XYZ::GetHashCode()
{
	return X.GetHashCode() ^ Y.GetHashCode() ^ Z.GetHashCode();
}

String^ XYZ::ToString()
{
	return String::Format(Globalization::CultureInfo::InvariantCulture, "{0},{1},{2}", gcnew array<Object^>{ X, Y, Z });
}

XYZ::XYZ(const ::gp_XYZ& native)
{
	X = native.X();
	Y = native.Y();
	Z = native.Z();
}

XYZ::XYZ(double x, double y, double z)
{
	X = x;
	Y = y;
	Z = z;
}

Pnt XYZ::ToPnt()
{
	return Pnt(*this);
}

Vec XYZ::ToVec()
{
	return Vec(*this);
}

Dir XYZ::ToDir()
{
	return Dir(*this);
}

double XYZ::Modulus()
{
	return Math::Sqrt(X * X + Y * Y + Z * Z);
}

double XYZ::SquareModulus()
{
	return X * X + Y * Y + Z * Z;
}

bool XYZ::IsEqual(XYZ Other, double Tolerance)
{
	double val;
	val = X - Other.X;
	if (val < 0) val = -val;
	if (val > Tolerance) 
		return false;

	val = Y - Other.Y;
	if (val < 0) val = -val;
	if (val > Tolerance) 
		return false;

	val = Z - Other.Z;
	if (val < 0) val = -val;
	if (val > Tolerance) 
		return false;

	return true;
}

void XYZ::Add(XYZ Other)
{
	X += Other.X;
	Y += Other.Y;
	Z += Other.Z;
}

XYZ XYZ::Added(XYZ Other)
{
	return XYZ(X + Other.X, Y + Other.Y, Z + Other.Z);
}

void XYZ::Cross(XYZ Right)
{
	double Xresult = Y * Right.Z - Z * Right.Y;
	double Yresult = Z * Right.X - X * Right.Z;
	Z = X * Right.Y - Y * Right.X;
	X = Xresult;
	Y = Yresult;
}

XYZ XYZ::Crossed(XYZ Right)
{
	return XYZ(
		Y * Right.Z - Z * Right.Y,
		Z * Right.X - X * Right.Z,
		X * Right.Y - Y * Right.X);
}

double XYZ::CrossMagnitude(XYZ Right)
{
	double Xresult = Y * Right.Z - Z * Right.Y;
	double Yresult = Z * Right.X - X * Right.Z;
	double Zresult = X * Right.Y - Y * Right.X;
	return Math::Sqrt(Xresult * Xresult + Yresult * Yresult + Zresult * Zresult);
}

double XYZ::CrossSquareMagnitude(XYZ Right)
{
	double Xresult = Y * Right.Z - Z * Right.Y;
	double Yresult = Z * Right.X - X * Right.Z;
	double Zresult = X * Right.Y - Y * Right.X;
	return Xresult * Xresult + Yresult * Yresult + Zresult * Zresult;
}

void XYZ::CrossCross(XYZ Coord1, XYZ Coord2)
{
	double Xresult =
		Y * (Coord1.X * Coord2.Y - Coord1.Y * Coord2.X) -
		Z * (Coord1.Z * Coord2.X - Coord1.X * Coord2.Z);
	double Yresult =
		Z * (Coord1.Y * Coord2.Z - Coord1.Z * Coord2.Y) -
		X * (Coord1.X * Coord2.Y - Coord1.Y * Coord2.X);
	Z =
		X * (Coord1.Z * Coord2.X - Coord1.X * Coord2.Z) -
		Y * (Coord1.Y * Coord2.Z - Coord1.Z * Coord2.Y);
	X = Xresult;
	Y = Yresult;
}

XYZ XYZ::CrossCrossed(XYZ Coord1, XYZ Coord2)
{
	XYZ Coord0 = *this;
	Coord0.CrossCross(Coord1, Coord2);
	return Coord0;
}

void XYZ::Divide(double Scalar)
{
	X /= Scalar;
	Y /= Scalar;
	Z /= Scalar;
}

XYZ XYZ::Divided(double Scalar)
{
	return XYZ(X / Scalar, Y / Scalar, Z / Scalar);
}

double XYZ::Dot(XYZ Other)
{
	return(X * Other.X + Y * Other.Y + Z * Other.Z);
}

double XYZ::DotCross(XYZ Coord1, XYZ Coord2)
{
	double Xresult = Coord1.Y * Coord2.Z - Coord1.Z * Coord2.Y;
	double Yresult = Coord1.Z * Coord2.X - Coord1.X * Coord2.Z;
	double Zresult = Coord1.X * Coord2.Y - Coord1.Y * Coord2.X;
	return (X * Xresult + Y * Yresult + Z * Zresult);
}

void XYZ::Multiply(double Scalar)
{
	X *= Scalar;
	Y *= Scalar;
	Z *= Scalar;
}

void XYZ::Multiply(XYZ Other)
{
	X *= Other.X;
	Y *= Other.Y;
	Z *= Other.Z;
}

void XYZ::Multiply(Mat Matrix)
{
	STRUCT_PINREF(this, XYZ, gp_XYZ);
	STRUCT_PIN(Matrix, Mat, gp_Mat);
	this_ptr->Multiply(*Matrix_ptr);
}

XYZ XYZ::Multiplied(double Scalar)
{
	return XYZ(X * Scalar, Y * Scalar, Z * Scalar);
}

XYZ XYZ::Multiplied(XYZ Other)
{
	return XYZ(X * Other.X, Y * Other.Y, Z * Other.Z);
}

XYZ XYZ::Multiplied(Mat Matrix)
{
	XYZ res = *this;
	res.Multiply(Matrix);
	return res;
}

void XYZ::Normalize()
{
	double D = Modulus();
	if (D <= gp::Resolution)
		throw gcnew Exception("Cannot normalize value, it is to small.");
	X = X / D;  Y = Y / D;  Z = Z / D;
}

XYZ XYZ::Normalized()
{
	double D = Modulus();
	if (D <= gp::Resolution)
		throw gcnew Exception("Cannot normalize value, it is to small.");
	return XYZ(X / D, Y / D, Z / D);
}

void XYZ::Reverse()
{
	X = -X;
	Y = -Y;
	Z = -Z;
}

XYZ XYZ::Reversed()
{
	return XYZ(-X, -Y, -Z);
}

void XYZ::Subtract(XYZ Right)
{
	X -= Right.X;
	Y -= Right.Y;
	Z -= Right.Z;
}

XYZ XYZ::Subtracted(XYZ Right)
{
	return XYZ(X - Right.X, Y - Right.Y, Z - Right.Z);
}

void XYZ::SetLinearForm(double A1, XYZ XYZ1, double A2, XYZ XYZ2, double A3, XYZ XYZ3, XYZ XYZ4)
{
	X = A1 * XYZ1.X + A2 * XYZ2.X + A3 * XYZ3.X + XYZ4.X;
	Y = A1 * XYZ1.Y + A2 * XYZ2.Y + A3 * XYZ3.Y + XYZ4.Y;
	Z = A1 * XYZ1.Z + A2 * XYZ2.Z + A3 * XYZ3.Z + XYZ4.Z;
}

void XYZ::SetLinearForm(double A1, XYZ XYZ1, double A2, XYZ XYZ2, double A3, XYZ XYZ3)
{
	X = A1 * XYZ1.X + A2 * XYZ2.X + A3 * XYZ3.X;
	Y = A1 * XYZ1.Y + A2 * XYZ2.Y + A3 * XYZ3.Y;
	Z = A1 * XYZ1.Z + A2 * XYZ2.Z + A3 * XYZ3.Z;
}

void XYZ::SetLinearForm(double A1, XYZ XYZ1, double A2, XYZ XYZ2, XYZ XYZ3)
{
	X = A1 * XYZ1.X + A2 * XYZ2.X + XYZ3.X;
	Y = A1 * XYZ1.Y + A2 * XYZ2.Y + XYZ3.Y;
	Z = A1 * XYZ1.Z + A2 * XYZ2.Z + XYZ3.Z;
}

void XYZ::SetLinearForm(double A1, XYZ XYZ1, double A2, XYZ XYZ2)
{
	X = A1 * XYZ1.X + A2 * XYZ2.X;
	Y = A1 * XYZ1.Y + A2 * XYZ2.Y;
	Z = A1 * XYZ1.Z + A2 * XYZ2.Z;
}

void XYZ::SetLinearForm(double A1, XYZ XYZ1, XYZ XYZ2)
{
	X = A1 * XYZ1.X + XYZ2.X;
	Y = A1 * XYZ1.Y + XYZ2.Y;
	Z = A1 * XYZ1.Z + XYZ2.Z;
}

void XYZ::SetLinearForm(XYZ XYZ1, XYZ XYZ2)
{
	X = XYZ1.X + XYZ2.X;
	Y = XYZ1.Y + XYZ2.Y;
	Z = XYZ1.Z + XYZ2.Z;
}

XYZ XYZ::operator * (XYZ Left, Mat Right)
{ 
	return Left.Multiplied(Right); 
}
