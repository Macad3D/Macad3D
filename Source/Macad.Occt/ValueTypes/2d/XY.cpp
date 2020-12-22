#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool XY::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (XY^)(obj);
	return (other->X == X) && (other->Y == Y);
}

int XY::GetHashCode()
{
	return X.GetHashCode() ^ Y.GetHashCode();
}

String^ XY::ToString()
{
	return String::Format(Globalization::CultureInfo::InvariantCulture, "{0},{1}", X, Y);
}

XY::XY(const ::gp_XY& native)
{
	X = native.X();
	Y = native.Y();
}

XY::XY(double x, double y)
{
	X = x;
	Y = y;
}

Pnt2d XY::ToPnt()
{
	return Pnt2d(*this);
}

Vec2d XY::ToVec()
{
	return Vec2d(*this);
}

Dir2d XY::ToDir()
{
	return Dir2d(*this);
}

double XY::Modulus()
{
	return Math::Sqrt(X * X + Y * Y);
}

double XY::SquareModulus()
{
	return X * X + Y * Y;
}

bool XY::IsEqual(XY Other, double Tolerance)
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

	return true;
}

void XY::Add(XY Other)
{
	X += Other.X;
	Y += Other.Y;
}

XY XY::Added(XY Other)
{
	return XY(X + Other.X, Y + Other.Y);
}

double XY::Crossed(XY Right)
{
	return X * Right.Y - Y * Right.X;
}

double XY::CrossMagnitude(XY Right)
{
	double val = X * Right.Y - Y * Right.X;
	if (val < 0) val = -val;
	return val;
}

double XY::CrossSquareMagnitude(XY Right)
{
	double Zresult = X * Right.Y - Y * Right.X;
	return Zresult * Zresult;
}

void XY::Divide(double Scalar)
{
	X /= Scalar;
	Y /= Scalar;
}

XY XY::Divided(double Scalar)
{
	return XY(X / Scalar, Y / Scalar);
}

double XY::Dot(XY Other)
{
	return(X * Other.X + Y * Other.Y);
}

void XY::Multiply(double Scalar)
{
	X *= Scalar;
	Y *= Scalar;
}

void XY::Multiply(XY Other)
{
	X *= Other.X;
	Y *= Other.Y;
}

void XY::Multiply(Mat2d Matrix)
{
	STRUCT_PINREF(this, XY, gp_XY);
	STRUCT_PIN(Matrix, Mat2d, gp_Mat2d);
	this_ptr->Multiply(*Matrix_ptr);
}

XY XY::Multiplied(double Scalar)
{
	return XY(X * Scalar, Y * Scalar);
}

XY XY::Multiplied(XY Other)
{
	return XY(X * Other.X, Y * Other.Y);
}

XY XY::Multiplied(Mat2d Matrix)
{
	XY res = *this;
	res.Multiply(Matrix);
	return res;
}

void XY::Normalize()
{
	double D = Modulus();
	if (D <= gp::Resolution)
		throw gcnew Exception("Cannot normalize value, it is to small.");
	X = X / D;  Y = Y / D;
}

XY XY::Normalized()
{
	double D = Modulus();
	if (D <= gp::Resolution)
		throw gcnew Exception("Cannot normalize value, it is to small.");
	return XY(X / D, Y / D);
}

void XY::Reverse()
{
	X = -X;
	Y = -Y;
}

XY XY::Reversed()
{
	return XY(-X, -Y);
}

void XY::Subtract(XY Right)
{
	X -= Right.X;
	Y -= Right.Y;
}

XY XY::Subtracted(XY Right)
{
	return XY(X - Right.X, Y - Right.Y);
}


void XY::SetLinearForm(double A1, XY XY1, double A2, XY XY2, XY XY3)
{
	X = A1 * XY1.X + A2 * XY2.X + XY3.X;
	Y = A1 * XY1.Y + A2 * XY2.Y + XY3.Y;
}

void XY::SetLinearForm(double A1, XY XY1, double A2, XY XY2)
{
	X = A1 * XY1.X + A2 * XY2.X;
	Y = A1 * XY1.Y + A2 * XY2.Y;
}

void XY::SetLinearForm(double A1, XY XY1, XY XY2)
{
	X = A1 * XY1.X + XY2.X;
	Y = A1 * XY1.Y + XY2.Y;
}

void XY::SetLinearForm(XY XY1, XY XY2)
{
	X = XY1.X + XY2.X;
	Y = XY1.Y + XY2.Y;
}

XY XY::operator * (XY Left, Mat2d Right)
{ 
	return Left.Multiplied(Right); 
}
