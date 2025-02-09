#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Trsf2d::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Trsf2d^)(obj);
	return (other->_Scale.Equals(_Scale) && other->_Shape.Equals(_Shape) && other->_Matrix.Equals(_Matrix) && other->_Loc.Equals(_Loc));
}

int Trsf2d::GetHashCode()
{
	return _Scale.GetHashCode() ^ _Shape.GetHashCode() ^ _Matrix.GetHashCode() ^ _Loc.GetHashCode();
}

String^ Trsf2d::ToString()
{
	return String::Format("({0}),({1}),({2}),({3})", gcnew array<Object^>{ _Shape, _Scale, _Loc, _Matrix });
}

Trsf2d::Trsf2d(const ::gp_Trsf2d& native)
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	memcpy(this_ptr, &native, sizeof(Trsf2d));
}

Trsf2d::Trsf2d(Ax2d FromSystem1, Ax2d ToSystem2)
{
	SetTransformation(FromSystem1, ToSystem2);
}

Trsf2d::Trsf2d(Ax2d ToSystem)
{
	SetTransformation(ToSystem);
}

Trsf2d::Trsf2d(Pnt2d P, double Ang)
{
	SetRotation(P, Ang);
}

Trsf2d::Trsf2d(Vec2d V)
{
	SetTranslation(V);
}

Trsf2d::Trsf2d(Pnt2d P1, Pnt2d P2)
{
	SetTranslation(P1, P2);
}


void Trsf2d::SetMirror(Pnt2d P)
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	STRUCT_PIN(P, Pnt2d, gp_Pnt2d);
	this_ptr->SetMirror(*P_ptr);
}

void Trsf2d::SetMirror(Ax2d A1)
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	STRUCT_PIN(A1, Ax2d, gp_Ax2d);
	this_ptr->SetMirror(*A1_ptr);
}

void Trsf2d::SetRotation(Pnt2d P, double Ang)
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	STRUCT_PIN(P, Pnt2d, gp_Pnt2d);
	this_ptr->SetRotation(*P_ptr, Ang);
}

void Trsf2d::SetScale(Pnt2d P, double S) 
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	STRUCT_PIN(P, Pnt2d, gp_Pnt2d);
	this_ptr->SetScale(*P_ptr, S);
}

void Trsf2d::SetTransformation(Ax2d FromSystem1, Ax2d ToSystem2)
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	STRUCT_PIN(FromSystem1, Ax2d, gp_Ax2d);
	STRUCT_PIN(ToSystem2, Ax2d, gp_Ax2d);
	this_ptr->SetTransformation(*FromSystem1_ptr, *ToSystem2_ptr);
}

void Trsf2d::SetTransformation(Ax2d ToSystem)
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	STRUCT_PIN(ToSystem, Ax2d, gp_Ax2d);
	this_ptr->SetTransformation(*ToSystem_ptr);
}

void Trsf2d::SetTranslation(Vec2d V) 
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	STRUCT_PIN(V, Vec2d, gp_Vec2d);
	this_ptr->SetTranslation(*V_ptr);
}

void Trsf2d::SetTranslation(Pnt2d P1, Pnt2d P2) 
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	STRUCT_PIN(P1, Pnt2d, gp_Pnt2d);
	STRUCT_PIN(P2, Pnt2d, gp_Pnt2d);
	this_ptr->SetTranslation(*P1_ptr, *P2_ptr);
}

void Trsf2d::SetTranslationPart(Vec2d V)
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	STRUCT_PIN(V, Vec2d, gp_Vec2d);
	this_ptr->SetTranslationPart(*V_ptr);
}

void Trsf2d::SetScaleFactor(double S) 
{ 
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	this_ptr->SetScaleFactor(S);
}

void Trsf2d::SetValues(double a11, double a12, double a13, double a21, double a22, double a23)
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	this_ptr->SetValues(a11, a12, a13, a21, a22, a23);
}

bool Trsf2d::IsNegative() 
{
	return (_Scale < 0.0);;
}

double Trsf2d::RotationPart() 
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	return this_ptr->RotationPart();
}

double Trsf2d::ScaleFactor()
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	return this_ptr->ScaleFactor();
}

XY Trsf2d::TranslationPart()
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	return XY(this_ptr->TranslationPart());
}

Mat2d Trsf2d::HVectorialPart() 
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	return Mat2d(this_ptr->HVectorialPart());
}

Mat2d Trsf2d::VectorialPart()
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	return Mat2d(this_ptr->VectorialPart());
}

double Trsf2d::Value(int Row, int Col) 
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	return this_ptr->Value(Row, Col);
}

void Trsf2d::Invert() 
{ 
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	this_ptr->Invert();
}

Trsf2d Trsf2d::Inverted() 
{
	Trsf2d Tres = *this;
	Tres.Invert();
	return Tres;
}

Trsf2d Trsf2d::Multiplied(Trsf2d T) 
{
	Trsf2d Tres = *this;
	Tres.Multiply(T);
	return Tres;
}

void Trsf2d::Multiply(Trsf2d T) 
{ 
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	STRUCT_PIN(T, Trsf2d, gp_Trsf2d);
	this_ptr->Multiply(*T_ptr);
}

void Trsf2d::PreMultiply(Trsf2d T) 
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	STRUCT_PIN(T, Trsf2d, gp_Trsf2d);
	this_ptr->PreMultiply(*T_ptr);
}

void Trsf2d::Power(int N) 
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	this_ptr->Power(N);
}

Trsf2d Trsf2d::Powered(int N) 
{
	Trsf2d Tres = *this;
	Tres.Power(N);
	return Tres;
}

void Trsf2d::Transforms(double% X, double% Y) 
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	pin_ptr<double> X_ptr = &X;
	pin_ptr<double> Y_ptr = &Y;
	this_ptr->Transforms(*X_ptr, *Y_ptr);
}

void Trsf2d::Transforms(XY% Coord) 
{
	STRUCT_PINREF(this, Trsf2d, gp_Trsf2d);
	STRUCT_PIN(Coord, XY, gp_XY);
	this_ptr->Transforms(*Coord_ptr);
}


