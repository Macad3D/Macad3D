#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Ax22d::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Ax22d^)(obj);
	return (other->_Point.Equals(_Point) && other->_XDir.Equals(_XDir) && other->_YDir.Equals(_YDir));
}

int Ax22d::GetHashCode()
{
	return _Point.GetHashCode() ^ _XDir.GetHashCode() ^ _YDir.GetHashCode();
}

String^ Ax22d::ToString()
{
	return String::Format("({0}),({1}),({2})", 
		_Point.ToString(), _XDir.ToString(), _YDir.ToString());
}

Ax22d::Ax22d(const ::gp_Ax22d& native)
	: _Point(native.Location())
	, _XDir(native.XDirection())
	, _YDir(native.YDirection())
{
}

Ax22d::Ax22d(Pnt2d P, Dir2d Vx, Dir2d Vy)
	: _Point(P)
	, _XDir(Vx)
	, _YDir(Vy)
{
	double value = Vx.Crossed(Vy);
	if (value >= 0.0) _YDir.Coord = XY(-_XDir.Y, _XDir.X);
	else              _YDir.Coord = XY(_XDir.Y, -_XDir.X);
}

Ax22d::Ax22d(Pnt2d P, Dir2d Vx, bool Sense)
	: _Point(P)
	, _XDir(Vx)
{
	if (Sense) _YDir.Coord = XY(-Vx.Y, Vx.X);
	else       _YDir.Coord = XY(Vx.Y, -Vx.X);
}

Ax22d::Ax22d(Pnt2d P, Dir2d Vx)
	: _Point(P)
	, _XDir(Vx)
{
	_YDir.Coord = XY(-Vx.Y, Vx.X);
}

void Ax22d::Mirror(Pnt2d P)
{
	STRUCT_PINREF(this, Ax22d, gp_Ax22d);
	STRUCT_PIN(P, Pnt2d, gp_Pnt2d);
	return this_ptr->Mirror(*P_ptr);
}

Ax22d Ax22d::Mirrored(Pnt2d P)
{
	Ax22d A = *this;
	A.Mirror(P);
	return A;
}

void Ax22d::Mirror(Ax2d A1)
{
	STRUCT_PINREF(this, Ax22d, gp_Ax22d);
	STRUCT_PIN(A1, Ax2d, gp_Ax2d);
	return this_ptr->Mirror(*A1_ptr);
}

Ax22d Ax22d::Mirrored(Ax2d A1)
{
	Ax22d A = *this;
	A.Mirror(A1);
	return A;
}

void Ax22d::Rotate(Pnt2d P, double Ang)
{
	STRUCT_PINREF(this, Ax22d, gp_Ax22d);
	STRUCT_PIN(P, Pnt2d, gp_Pnt2d);
	return this_ptr->Rotate(*P_ptr, Ang);
}

Ax22d Ax22d::Rotated(Pnt2d P, double Ang)
{
	Ax22d A = *this;
	A.Rotate(P, Ang);
	return A;
}

void Ax22d::Scale(Pnt2d P, double S)
{
	STRUCT_PINREF(this, Ax22d, gp_Ax22d);
	STRUCT_PIN(P, Pnt2d, gp_Pnt2d);
	return this_ptr->Scale(*P_ptr, S);
}

Ax22d Ax22d::Scaled(Pnt2d P, double S)
{
	Ax22d A = *this;
	A.Scale(P, S);
	return A;
}

void Ax22d::Transform(Trsf2d T)
{
	STRUCT_PINREF(this, Ax22d, gp_Ax22d);
	STRUCT_PIN(T, Trsf2d, gp_Trsf2d);
	this_ptr->Transform(*T_ptr);
}

Ax22d Ax22d::Transformed(Trsf2d T)
{
	Ax22d A = *this;
	A.Transform(T);
	return A;
}

void Ax22d::Translate(Vec2d V)
{
	_Point.Translate(V);
}

Ax22d Ax22d::Translated(Vec2d V)
{
	Ax22d A = *this;
	A._Point.Translate(V);
	return A;
}

void Ax22d::Translate(Pnt2d P1, Pnt2d P2)
{
	_Point.Translate(P1, P2);
}

Ax22d Ax22d::Translated(Pnt2d P1, Pnt2d P2)
{
	Ax22d A = *this;
	A._Point.Translate(P1, P2);
	return A;
}

void Ax22d::SetXAxis(Ax2d A1)
{
	STRUCT_PINREF(this, Ax22d, gp_Ax22d);
	STRUCT_PIN(A1, Ax2d, gp_Ax2d);
	return this_ptr->SetAxis(*A1_ptr);
}

void Ax22d::SetYAxis(Ax2d A1)
{
	STRUCT_PINREF(this, Ax22d, gp_Ax22d);
	STRUCT_PIN(A1, Ax2d, gp_Ax2d);
	return this_ptr->SetAxis(*A1_ptr);
}

void Ax22d::SetXDirection(Dir2d Vx)
{
	STRUCT_PINREF(this, Ax22d, gp_Ax22d);
	STRUCT_PIN(Vx, Dir2d, gp_Dir2d);
	return this_ptr->SetXDirection(*Vx_ptr);
}

void Ax22d::SetYDirection(Dir2d Vy)
{
	STRUCT_PINREF(this, Ax22d, gp_Ax22d);
	STRUCT_PIN(Vy, Dir2d, gp_Dir2d);
	return this_ptr->SetYDirection(*Vy_ptr);
}

Ax22d Ax22d::operator * (Ax22d Left, Trsf2d Right)
{
	return Left.Transformed(Right);
}
