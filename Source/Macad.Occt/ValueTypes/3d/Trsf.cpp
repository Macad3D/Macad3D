#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Trsf::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Trsf^)(obj);
	return (other->_Scale.Equals(_Scale) && other->_Shape.Equals(_Shape) && other->_Matrix.Equals(_Matrix) && other->_Loc.Equals(_Loc));
}

int Trsf::GetHashCode()
{
	return _Scale.GetHashCode() ^ _Shape.GetHashCode() ^ _Matrix.GetHashCode() ^ _Loc.GetHashCode();
}

String^ Trsf::ToString()
{
	return String::Format("({0}),({1}),({2}),({3})", gcnew array<Object^>{ _Shape, _Scale, _Loc, _Matrix });
}

Trsf::Trsf(const ::gp_Trsf& native)
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	memcpy(this_ptr, &native, sizeof(Trsf));
}

Trsf::Trsf(Trsf2d T)
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(T, Trsf2d, gp_Trsf2d);
	::gp_Trsf trsf(*T_ptr);
	memcpy(this_ptr, &trsf, sizeof(Trsf));
}

Trsf::Trsf(Ax3 FromSystem1, Ax3 ToSystem2)
{
	SetTransformation(FromSystem1, ToSystem2);
}

Trsf::Trsf(Ax3 ToSystem)
{
	SetTransformation(ToSystem);
}

Trsf::Trsf(Ax1 A1, double Ang)
{
	SetRotation(A1, Ang);
}

Trsf::Trsf(Quaternion R)
{
	SetRotation(R);
}

Trsf::Trsf(Quaternion R, Vec T)
{
	SetTransformation(R, T);
}

Trsf::Trsf(Vec V)
{
	SetTranslation(V);
}

Trsf::Trsf(Pnt P1, Pnt P2)
{
	SetTranslation(P1, P2);
}


void Trsf::SetMirror(Pnt P)
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(P, Pnt, gp_Pnt);
	this_ptr->SetMirror(*P_ptr);
}

void Trsf::SetMirror(Ax1 A1)
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(A1, Ax1, gp_Ax1);
	this_ptr->SetMirror(*A1_ptr);
}

void Trsf::SetMirror(Ax2 A2)
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(A2, Ax2, gp_Ax2);
	this_ptr->SetMirror(*A2_ptr);
}

void Trsf::SetRotation(Ax1 A1, double Ang)
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(A1, Ax1, gp_Ax1);
	this_ptr->SetRotation(*A1_ptr, Ang);
}

void Trsf::SetRotation(Quaternion R) 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(R, Quaternion, gp_Quaternion);
	this_ptr->SetRotation(*R_ptr);
}

void Trsf::SetScale(Pnt P, double S) 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(P, Pnt, gp_Pnt);
	this_ptr->SetScale(*P_ptr, S);
}

void Trsf::SetDisplacement(Ax3 FromSystem1, Ax3 ToSystem2) 
{ 
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(FromSystem1, Ax3, gp_Ax3);
	STRUCT_PIN(ToSystem2, Ax3, gp_Ax3);
	this_ptr->SetDisplacement(*FromSystem1_ptr, *ToSystem2_ptr);
}

void Trsf::SetTransformation(Ax3 FromSystem1, Ax3 ToSystem2) 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(FromSystem1, Ax3, gp_Ax3);
	STRUCT_PIN(ToSystem2, Ax3, gp_Ax3);
	this_ptr->SetTransformation(*FromSystem1_ptr, *ToSystem2_ptr);
}

void Trsf::SetTransformation(Ax3 ToSystem) 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(ToSystem, Ax3, gp_Ax3);
	this_ptr->SetTransformation(*ToSystem_ptr);
}

void Trsf::SetTransformation(Quaternion R, Vec T) 
{ 
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(R, Quaternion, gp_Quaternion);
	STRUCT_PIN(T, Vec, gp_Vec);
	this_ptr->SetTransformation(*R_ptr, *T_ptr);
}

void Trsf::SetTranslation(Vec V) 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(V, Vec, gp_Vec);
	this_ptr->SetTranslation(*V_ptr);
}

void Trsf::SetTranslation(Pnt P1, Pnt P2) 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(P1, Pnt, gp_Pnt);
	STRUCT_PIN(P2, Pnt, gp_Pnt);
	this_ptr->SetTranslation(*P1_ptr, *P2_ptr);
}

void Trsf::SetTranslationPart(Vec V) 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(V, Vec, gp_Vec);
	this_ptr->SetTranslationPart(*V_ptr);
}

void Trsf::SetScaleFactor(double S) 
{ 
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	this_ptr->SetScaleFactor(S);
}

void Trsf::SetValues(double a11, double a12, double a13, double a14, double a21, double a22, double a23, double a24, double a31, double a32, double a33, double a34)
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	this_ptr->SetValues(a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34);
}

bool Trsf::IsNegative() 
{
	return (_Scale < 0.0);;
}

bool Trsf::GetRotation(XYZ% theAxis, double% theAngle) 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(theAxis, XYZ, gp_XYZ);
	pin_ptr<double> theAngle_ptr = &theAngle;
	return this_ptr->GetRotation(*theAxis_ptr, *theAngle_ptr);
}

Quaternion Trsf::GetRotation() 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	return Quaternion(this_ptr->GetRotation());
}

double Trsf::ScaleFactor()
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	return this_ptr->ScaleFactor();
}

XYZ Trsf::TranslationPart()
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	return XYZ(this_ptr->TranslationPart());
}

Mat Trsf::HVectorialPart() 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	return Mat(this_ptr->HVectorialPart());
}

Mat Trsf::VectorialPart()
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	return Mat(this_ptr->VectorialPart());
}

double Trsf::Value(int Row, int Col) 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	return this_ptr->Value(Row, Col);
}

void Trsf::Invert() 
{ 
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	this_ptr->Invert();
}

Trsf Trsf::Inverted() 
{
	Trsf Tres = *this;
	Tres.Invert();
	return Tres;
}

Trsf Trsf::Multiplied(Trsf T) 
{
	Trsf Tres = *this;
	Tres.Multiply(T);
	return Tres;
}

void Trsf::Multiply(Trsf T) 
{ 
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(T, Trsf, gp_Trsf);
	this_ptr->Multiply(*T_ptr);
}

void Trsf::PreMultiply(Trsf T) 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(T, Trsf, gp_Trsf);
	this_ptr->PreMultiply(*T_ptr);
}

void Trsf::Power(int N) 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	this_ptr->Power(N);
}

Trsf Trsf::Powered(int N) 
{
	Trsf Tres = *this;
	Tres.Power(N);
	return Tres;
}

void Trsf::Transforms(double% X, double% Y, double% Z) 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	pin_ptr<double> X_ptr = &X;
	pin_ptr<double> Y_ptr = &Y;
	pin_ptr<double> Z_ptr = &Z;
	this_ptr->Transforms(*X_ptr, *Y_ptr, *Z_ptr);
}

void Trsf::Transforms(XYZ% Coord) 
{
	STRUCT_PINREF(this, Trsf, gp_Trsf);
	STRUCT_PIN(Coord, XYZ, gp_XYZ);
	this_ptr->Transforms(*Coord_ptr);
}


