#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Quaternion::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Quaternion^)(obj);
	return (other->X == X) && (other->Y == Y) && (other->Z == Z) && (other->W == W);
}

int Quaternion::GetHashCode()
{
	return X.GetHashCode() ^ Y.GetHashCode() ^ Z.GetHashCode() ^ W.GetHashCode();
}

String^ Quaternion::ToString()
{
	return String::Format(Globalization::CultureInfo::InvariantCulture, "{0},{1},{2},{3}", gcnew array<Object^>{ X, Y, Z, W });
}

Quaternion::Quaternion(const ::gp_Quaternion& native)
	: X(native.X())
	, Y(native.Y())
	, Z(native.Z())
	, W(native.W())
{
}

Quaternion::Quaternion(double x, double y, double z, double w)
	: X(x)
	, Y(y)
	, Z(z)
	, W(w)
{
}

Quaternion::Quaternion(Vec theVecFrom, Vec theVecTo)
{
	SetRotation(theVecFrom, theVecTo);
}

Quaternion::Quaternion(Vec theVecFrom, Vec theVecTo, Vec theHelpCrossVec)
{
	SetRotation(theVecFrom, theVecTo, theHelpCrossVec);
}

Quaternion::Quaternion(Vec theAxis, double theAngle)
{
	SetVectorAndAngle(theAxis, theAngle);
}

Quaternion::Quaternion(Mat theMat)
{
	SetMatrix(theMat);
}

Quaternion::Quaternion(double theAlpha, double theBeta, double theGamma)
{
	SetEulerAngles(theAlpha, theBeta, theGamma);
}

bool Quaternion::IsEqual(Quaternion theOther)
{
	return Math::Abs(X - theOther.X) <= gp::Resolution &&
		Math::Abs(Y - theOther.Y) <= gp::Resolution &&
		Math::Abs(Z - theOther.Z) <= gp::Resolution &&
		Math::Abs(W - theOther.W) <= gp::Resolution;
}

void Quaternion::SetRotation(Vec theVecFrom, Vec theVecTo)
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	STRUCT_PIN(theVecFrom, Vec, gp_Vec);
	STRUCT_PIN(theVecTo, Vec, gp_Vec);
	this_ptr->SetRotation(*theVecFrom_ptr, *theVecTo_ptr);
}

void Quaternion::SetRotation(Vec theVecFrom, Vec theVecTo, Vec theHelpCrossVec)
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	STRUCT_PIN(theVecFrom, Vec, gp_Vec);
	STRUCT_PIN(theVecTo, Vec, gp_Vec);
	STRUCT_PIN(theHelpCrossVec, Vec, gp_Vec);
	this_ptr->SetRotation(*theVecFrom_ptr, *theVecTo_ptr, *theHelpCrossVec_ptr);
}

void Quaternion::SetVectorAndAngle(Vec theAxis, double theAngle)
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	STRUCT_PIN(theAxis, Vec, gp_Vec);
	this_ptr->SetVectorAndAngle(*theAxis_ptr, theAngle);
}

void Quaternion::GetVectorAndAngle(Vec% theAxis, double% theAngle)
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	STRUCT_PIN(theAxis, Vec, gp_Vec);
	pin_ptr<double> theAngle_ptr = &theAngle;
	this_ptr->GetVectorAndAngle(*theAxis_ptr, *theAngle_ptr);
}

void Quaternion::SetMatrix(Mat theMat)
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	STRUCT_PIN(theMat, Mat, gp_Mat);
	this_ptr->SetMatrix(*theMat_ptr);
}

Mat Quaternion::GetMatrix()
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	return Mat(this_ptr->GetMatrix());
}

void Quaternion::SetEulerAngles(EulerSequence theOrder, double theAlpha, double theBeta, double theGamma)
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	this_ptr->SetEulerAngles((::gp_EulerSequence)theOrder, theAlpha, theBeta, theGamma);
}

void Quaternion::GetEulerAngles(EulerSequence theOrder, double% theAlpha, double% theBeta, double% theGamma)
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	pin_ptr<double> theAlpha_ptr = &theAlpha;
	pin_ptr<double> theBeta_ptr = &theBeta;
	pin_ptr<double> theGamma_ptr = &theGamma;
	this_ptr->GetEulerAngles((::gp_EulerSequence)theOrder, *theAlpha_ptr, *theBeta_ptr, *theGamma_ptr);
}

void Quaternion::SetEulerAngles(double theAlpha, double theBeta, double theGamma)
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	this_ptr->SetEulerAngles(::gp_EulerSequence::gp_YawPitchRoll, theAlpha, theBeta, theGamma);
}

void Quaternion::GetEulerAngles(double% theAlpha, double% theBeta, double% theGamma)
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	pin_ptr<double> theAlpha_ptr = &theAlpha;
	pin_ptr<double> theBeta_ptr = &theBeta;
	pin_ptr<double> theGamma_ptr = &theGamma;
	this_ptr->GetEulerAngles(::gp_EulerSequence::gp_YawPitchRoll, *theAlpha_ptr, *theBeta_ptr, *theGamma_ptr);
}

void Quaternion::Set(double x, double y, double z, double w)
{
	X = x; Y = y; Z = z; W = w;
}

void Quaternion::SetIdent()
{
	X = Y = Z = 0.0;
	W = 1.0;
}

void Quaternion::Reverse()
{
	X = -X;
	Y = -Y;
	Z = -Z;
}

Quaternion Quaternion::Reversed()
{
	return Quaternion(-X, -Y, -Z, W);
}

void Quaternion::Invert()
{
	double in = 1.0 / SquareNorm();
	X = -X * in;
	Y = -Y * in;
	Z = -Z * in;
	W = W * in;
}

Quaternion Quaternion::Inverted()
{
	double in = 1.0 / SquareNorm();
	return Quaternion(-X * in, -Y * in, -Z * in, W * in);
}

double Quaternion::SquareNorm()
{
	return X * X + Y * Y + Z * Z + W * W;
}

double Quaternion::Norm()
{
	return Math::Sqrt(SquareNorm());
}

void Quaternion::Scale(double theScale)
{
	X *= theScale;
	Y *= theScale;
	Z *= theScale;
	W *= theScale;
}

Quaternion Quaternion::Scaled(double theScale)
{
	return Quaternion(X*theScale, Y*theScale, Z*theScale, W*theScale);
}

void Quaternion::StabilizeLength()
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	this_ptr->StabilizeLength();
}

void Quaternion::Normalize()
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	this_ptr->Normalize();
}

Quaternion Quaternion::Normalized()
{
	Quaternion Q = *this;
	Q.Normalize();
	return Q;
}

Quaternion Quaternion::Negated()
{
	return Quaternion(-X, -Y, -Z, -W);
}

void Quaternion::Add(Quaternion theOther)
{
	X += theOther.X;
	Y += theOther.Y;
	Z += theOther.Z;
	W += theOther.W;
}

Quaternion Quaternion::Added(Quaternion theOther)
{
	return Quaternion(X + theOther.X, Y + theOther.Y, Z + theOther.Z, W + theOther.W);
}

void Quaternion::Subtract(Quaternion theOther)
{
	X -= theOther.X;
	Y -= theOther.Y;
	Z -= theOther.Z;
	W -= theOther.W;
}

Quaternion Quaternion::Subtracted(Quaternion theOther)
{
	return Quaternion(X - theOther.X, Y - theOther.Y, Z - theOther.Z, W - theOther.W);
}

void Quaternion::Multiply(Quaternion theOther)
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	STRUCT_PIN(theOther, Quaternion, gp_Quaternion);
	this_ptr->Multiply(*theOther_ptr);
}

Quaternion Quaternion::Multiplied(Quaternion theOther)
{
	Quaternion Q = *this;
	Q.Multiply(theOther);
	return Q;
}

Vec Quaternion::Multiply(Vec theVec)
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	STRUCT_PIN(theVec, Vec, gp_Vec);
	return Vec(this_ptr->Multiply(*theVec_ptr));
}

double Quaternion::Dot(Quaternion theOther)
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	STRUCT_PIN(theOther, Quaternion, gp_Quaternion);
	return this_ptr->Dot(*theOther_ptr);
}

double Quaternion::GetRotationAngle()
{
	STRUCT_PINREF(this, Quaternion, gp_Quaternion);
	return this_ptr->GetRotationAngle();
}
