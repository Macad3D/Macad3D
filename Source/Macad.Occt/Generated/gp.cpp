// Generated wrapper code for package gp

#include "OcctPCH.h"
#include "gp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "Standard.h"
#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  gp_GTrsf
//---------------------------------------------------------------------

Macad::Occt::gp_GTrsf::gp_GTrsf()
	: BaseClass<::gp_GTrsf>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_GTrsf();
}

Macad::Occt::gp_GTrsf::gp_GTrsf(Macad::Occt::Trsf T)
	: BaseClass<::gp_GTrsf>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	_NativeInstance = new ::gp_GTrsf(*(gp_Trsf*)pp_T);
}

Macad::Occt::gp_GTrsf::gp_GTrsf(Macad::Occt::Mat M, Macad::Occt::XYZ V)
	: BaseClass<::gp_GTrsf>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Mat> pp_M = &M;
	pin_ptr<Macad::Occt::XYZ> pp_V = &V;
	_NativeInstance = new ::gp_GTrsf(*(gp_Mat*)pp_M, *(gp_XYZ*)pp_V);
}

Macad::Occt::gp_GTrsf::gp_GTrsf(Macad::Occt::gp_GTrsf^ parameter1)
	: BaseClass<::gp_GTrsf>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_GTrsf(*(::gp_GTrsf*)parameter1->NativeInstance);
}

void Macad::Occt::gp_GTrsf::SetAffinity(Macad::Occt::Ax1 A1, double Ratio)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_GTrsf*)_NativeInstance)->SetAffinity(*(gp_Ax1*)pp_A1, Ratio);
}

void Macad::Occt::gp_GTrsf::SetAffinity(Macad::Occt::Ax2 A2, double Ratio)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_GTrsf*)_NativeInstance)->SetAffinity(*(gp_Ax2*)pp_A2, Ratio);
}

void Macad::Occt::gp_GTrsf::SetValue(int Row, int Col, double Value)
{
	((::gp_GTrsf*)_NativeInstance)->SetValue(Row, Col, Value);
}

void Macad::Occt::gp_GTrsf::SetVectorialPart(Macad::Occt::Mat Matrix)
{
	pin_ptr<Macad::Occt::Mat> pp_Matrix = &Matrix;
	((::gp_GTrsf*)_NativeInstance)->SetVectorialPart(*(gp_Mat*)pp_Matrix);
}

void Macad::Occt::gp_GTrsf::SetTranslationPart(Macad::Occt::XYZ Coord)
{
	pin_ptr<Macad::Occt::XYZ> pp_Coord = &Coord;
	((::gp_GTrsf*)_NativeInstance)->SetTranslationPart(*(gp_XYZ*)pp_Coord);
}

void Macad::Occt::gp_GTrsf::SetTrsf(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	((::gp_GTrsf*)_NativeInstance)->SetTrsf(*(gp_Trsf*)pp_T);
}

bool Macad::Occt::gp_GTrsf::IsNegative()
{
	return ((::gp_GTrsf*)_NativeInstance)->IsNegative();
}

bool Macad::Occt::gp_GTrsf::IsSingular()
{
	return ((::gp_GTrsf*)_NativeInstance)->IsSingular();
}

Macad::Occt::TrsfForm Macad::Occt::gp_GTrsf::Form()
{
	return (Macad::Occt::TrsfForm)((::gp_GTrsf*)_NativeInstance)->Form();
}

void Macad::Occt::gp_GTrsf::SetForm()
{
	((::gp_GTrsf*)_NativeInstance)->SetForm();
}

Macad::Occt::XYZ Macad::Occt::gp_GTrsf::TranslationPart()
{
	return Macad::Occt::XYZ(((::gp_GTrsf*)_NativeInstance)->TranslationPart());
}

Macad::Occt::Mat Macad::Occt::gp_GTrsf::VectorialPart()
{
	return Macad::Occt::Mat(((::gp_GTrsf*)_NativeInstance)->VectorialPart());
}

double Macad::Occt::gp_GTrsf::Value(int Row, int Col)
{
	return ((::gp_GTrsf*)_NativeInstance)->Value(Row, Col);
}

void Macad::Occt::gp_GTrsf::Invert()
{
	((::gp_GTrsf*)_NativeInstance)->Invert();
}

Macad::Occt::gp_GTrsf^ Macad::Occt::gp_GTrsf::Inverted()
{
	::gp_GTrsf* _result = new ::gp_GTrsf();
	*_result = ((::gp_GTrsf*)_NativeInstance)->Inverted();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf(_result);
}

Macad::Occt::gp_GTrsf^ Macad::Occt::gp_GTrsf::Multiplied(Macad::Occt::gp_GTrsf^ T)
{
	::gp_GTrsf* _result = new ::gp_GTrsf();
	*_result = ((::gp_GTrsf*)_NativeInstance)->Multiplied(*(::gp_GTrsf*)T->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf(_result);
}

void Macad::Occt::gp_GTrsf::Multiply(Macad::Occt::gp_GTrsf^ T)
{
	((::gp_GTrsf*)_NativeInstance)->Multiply(*(::gp_GTrsf*)T->NativeInstance);
}

void Macad::Occt::gp_GTrsf::PreMultiply(Macad::Occt::gp_GTrsf^ T)
{
	((::gp_GTrsf*)_NativeInstance)->PreMultiply(*(::gp_GTrsf*)T->NativeInstance);
}

void Macad::Occt::gp_GTrsf::Power(int N)
{
	((::gp_GTrsf*)_NativeInstance)->Power(N);
}

Macad::Occt::gp_GTrsf^ Macad::Occt::gp_GTrsf::Powered(int N)
{
	::gp_GTrsf* _result = new ::gp_GTrsf();
	*_result = ((::gp_GTrsf*)_NativeInstance)->Powered(N);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf(_result);
}

void Macad::Occt::gp_GTrsf::Transforms(Macad::Occt::XYZ% Coord)
{
	pin_ptr<Macad::Occt::XYZ> pp_Coord = &Coord;
	((::gp_GTrsf*)_NativeInstance)->Transforms(*(gp_XYZ*)pp_Coord);
}

void Macad::Occt::gp_GTrsf::Transforms(double% X, double% Y, double% Z)
{
	pin_ptr<double> pp_X = &X;
	pin_ptr<double> pp_Y = &Y;
	pin_ptr<double> pp_Z = &Z;
	((::gp_GTrsf*)_NativeInstance)->Transforms(*(Standard_Real*)pp_X, *(Standard_Real*)pp_Y, *(Standard_Real*)pp_Z);
}

Macad::Occt::Trsf Macad::Occt::gp_GTrsf::Trsf()
{
	return Macad::Occt::Trsf(((::gp_GTrsf*)_NativeInstance)->Trsf());
}




//---------------------------------------------------------------------
//  Class  gp_Lin
//---------------------------------------------------------------------

Macad::Occt::gp_Lin::gp_Lin()
	: BaseClass<::gp_Lin>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Lin();
}

Macad::Occt::gp_Lin::gp_Lin(Macad::Occt::Ax1 A1)
	: BaseClass<::gp_Lin>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	_NativeInstance = new ::gp_Lin(*(gp_Ax1*)pp_A1);
}

Macad::Occt::gp_Lin::gp_Lin(Macad::Occt::Pnt P, Macad::Occt::Dir V)
	: BaseClass<::gp_Lin>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Dir> pp_V = &V;
	_NativeInstance = new ::gp_Lin(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_V);
}

Macad::Occt::gp_Lin::gp_Lin(Macad::Occt::gp_Lin^ parameter1)
	: BaseClass<::gp_Lin>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Lin(*(::gp_Lin*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Lin::Reverse()
{
	((::gp_Lin*)_NativeInstance)->Reverse();
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Reversed()
{
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::gp_Lin*)_NativeInstance)->Reversed();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::SetDirection(Macad::Occt::Dir V)
{
	pin_ptr<Macad::Occt::Dir> pp_V = &V;
	((::gp_Lin*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_V);
}

void Macad::Occt::gp_Lin::SetLocation(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Lin*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_P);
}

void Macad::Occt::gp_Lin::SetPosition(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Lin*)_NativeInstance)->SetPosition(*(gp_Ax1*)pp_A1);
}

Macad::Occt::Dir Macad::Occt::gp_Lin::Direction()
{
	return Macad::Occt::Dir(((::gp_Lin*)_NativeInstance)->Direction());
}

Macad::Occt::Pnt Macad::Occt::gp_Lin::Location()
{
	return Macad::Occt::Pnt(((::gp_Lin*)_NativeInstance)->Location());
}

Macad::Occt::Ax1 Macad::Occt::gp_Lin::Position()
{
	return Macad::Occt::Ax1(((::gp_Lin*)_NativeInstance)->Position());
}

double Macad::Occt::gp_Lin::Angle(Macad::Occt::gp_Lin^ Other)
{
	return ((::gp_Lin*)_NativeInstance)->Angle(*(::gp_Lin*)Other->NativeInstance);
}

bool Macad::Occt::gp_Lin::Contains(Macad::Occt::Pnt P, double LinearTolerance)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ((::gp_Lin*)_NativeInstance)->Contains(*(gp_Pnt*)pp_P, LinearTolerance);
}

double Macad::Occt::gp_Lin::Distance(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ((::gp_Lin*)_NativeInstance)->Distance(*(gp_Pnt*)pp_P);
}

double Macad::Occt::gp_Lin::Distance(Macad::Occt::gp_Lin^ Other)
{
	return ((::gp_Lin*)_NativeInstance)->Distance(*(::gp_Lin*)Other->NativeInstance);
}

double Macad::Occt::gp_Lin::SquareDistance(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ((::gp_Lin*)_NativeInstance)->SquareDistance(*(gp_Pnt*)pp_P);
}

double Macad::Occt::gp_Lin::SquareDistance(Macad::Occt::gp_Lin^ Other)
{
	return ((::gp_Lin*)_NativeInstance)->SquareDistance(*(::gp_Lin*)Other->NativeInstance);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Normal(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::gp_Lin*)_NativeInstance)->Normal(*(gp_Pnt*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Mirror(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Lin*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_P);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Mirrored(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::gp_Lin*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Mirror(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Lin*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_A1);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Mirrored(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::gp_Lin*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_A1);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Mirror(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_Lin*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_A2);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Mirrored(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::gp_Lin*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_A2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Rotate(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Lin*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_A1, Ang);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Rotated(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::gp_Lin*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_A1, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Scale(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Lin*)_NativeInstance)->Scale(*(gp_Pnt*)pp_P, S);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Scaled(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::gp_Lin*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Transform(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	((::gp_Lin*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Transformed(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::gp_Lin*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Translate(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::gp_Lin*)_NativeInstance)->Translate(*(gp_Vec*)pp_V);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Translated(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::gp_Lin*)_NativeInstance)->Translated(*(gp_Vec*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::gp_Lin*)_NativeInstance)->Translate(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::gp_Lin*)_NativeInstance)->Translated(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}




//---------------------------------------------------------------------
//  Class  gp_Circ
//---------------------------------------------------------------------

Macad::Occt::gp_Circ::gp_Circ()
	: BaseClass<::gp_Circ>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Circ();
}

Macad::Occt::gp_Circ::gp_Circ(Macad::Occt::Ax2 A2, double Radius)
	: BaseClass<::gp_Circ>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	_NativeInstance = new ::gp_Circ(*(gp_Ax2*)pp_A2, Radius);
}

Macad::Occt::gp_Circ::gp_Circ(Macad::Occt::gp_Circ^ parameter1)
	: BaseClass<::gp_Circ>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Circ(*(::gp_Circ*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Circ::SetAxis(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Circ*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_A1);
}

void Macad::Occt::gp_Circ::SetLocation(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Circ*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_P);
}

void Macad::Occt::gp_Circ::SetPosition(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_Circ*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_A2);
}

void Macad::Occt::gp_Circ::SetRadius(double Radius)
{
	((::gp_Circ*)_NativeInstance)->SetRadius(Radius);
}

double Macad::Occt::gp_Circ::Area()
{
	return ((::gp_Circ*)_NativeInstance)->Area();
}

Macad::Occt::Ax1 Macad::Occt::gp_Circ::Axis()
{
	return Macad::Occt::Ax1(((::gp_Circ*)_NativeInstance)->Axis());
}

double Macad::Occt::gp_Circ::Length()
{
	return ((::gp_Circ*)_NativeInstance)->Length();
}

Macad::Occt::Pnt Macad::Occt::gp_Circ::Location()
{
	return Macad::Occt::Pnt(((::gp_Circ*)_NativeInstance)->Location());
}

Macad::Occt::Ax2 Macad::Occt::gp_Circ::Position()
{
	return Macad::Occt::Ax2(((::gp_Circ*)_NativeInstance)->Position());
}

double Macad::Occt::gp_Circ::Radius()
{
	return ((::gp_Circ*)_NativeInstance)->Radius();
}

Macad::Occt::Ax1 Macad::Occt::gp_Circ::XAxis()
{
	return Macad::Occt::Ax1(((::gp_Circ*)_NativeInstance)->XAxis());
}

Macad::Occt::Ax1 Macad::Occt::gp_Circ::YAxis()
{
	return Macad::Occt::Ax1(((::gp_Circ*)_NativeInstance)->YAxis());
}

double Macad::Occt::gp_Circ::Distance(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ((::gp_Circ*)_NativeInstance)->Distance(*(gp_Pnt*)pp_P);
}

double Macad::Occt::gp_Circ::SquareDistance(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ((::gp_Circ*)_NativeInstance)->SquareDistance(*(gp_Pnt*)pp_P);
}

bool Macad::Occt::gp_Circ::Contains(Macad::Occt::Pnt P, double LinearTolerance)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ((::gp_Circ*)_NativeInstance)->Contains(*(gp_Pnt*)pp_P, LinearTolerance);
}

void Macad::Occt::gp_Circ::Mirror(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Circ*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_P);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Mirrored(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::gp_Circ*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Mirror(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Circ*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_A1);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Mirrored(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::gp_Circ*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_A1);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Mirror(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_Circ*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_A2);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Mirrored(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::gp_Circ*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_A2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Rotate(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Circ*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_A1, Ang);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Rotated(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::gp_Circ*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_A1, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Scale(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Circ*)_NativeInstance)->Scale(*(gp_Pnt*)pp_P, S);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Scaled(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::gp_Circ*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Transform(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	((::gp_Circ*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Transformed(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::gp_Circ*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Translate(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::gp_Circ*)_NativeInstance)->Translate(*(gp_Vec*)pp_V);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Translated(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::gp_Circ*)_NativeInstance)->Translated(*(gp_Vec*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::gp_Circ*)_NativeInstance)->Translate(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::gp_Circ*)_NativeInstance)->Translated(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}




//---------------------------------------------------------------------
//  Class  gp_Elips
//---------------------------------------------------------------------

Macad::Occt::gp_Elips::gp_Elips()
	: BaseClass<::gp_Elips>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Elips();
}

Macad::Occt::gp_Elips::gp_Elips(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius)
	: BaseClass<::gp_Elips>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	_NativeInstance = new ::gp_Elips(*(gp_Ax2*)pp_A2, MajorRadius, MinorRadius);
}

Macad::Occt::gp_Elips::gp_Elips(Macad::Occt::gp_Elips^ parameter1)
	: BaseClass<::gp_Elips>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Elips(*(::gp_Elips*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Elips::SetAxis(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Elips*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_A1);
}

void Macad::Occt::gp_Elips::SetLocation(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Elips*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_P);
}

void Macad::Occt::gp_Elips::SetMajorRadius(double MajorRadius)
{
	((::gp_Elips*)_NativeInstance)->SetMajorRadius(MajorRadius);
}

void Macad::Occt::gp_Elips::SetMinorRadius(double MinorRadius)
{
	((::gp_Elips*)_NativeInstance)->SetMinorRadius(MinorRadius);
}

void Macad::Occt::gp_Elips::SetPosition(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_Elips*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_A2);
}

double Macad::Occt::gp_Elips::Area()
{
	return ((::gp_Elips*)_NativeInstance)->Area();
}

Macad::Occt::Ax1 Macad::Occt::gp_Elips::Axis()
{
	return Macad::Occt::Ax1(((::gp_Elips*)_NativeInstance)->Axis());
}

Macad::Occt::Ax1 Macad::Occt::gp_Elips::Directrix1()
{
	return Macad::Occt::Ax1(((::gp_Elips*)_NativeInstance)->Directrix1());
}

Macad::Occt::Ax1 Macad::Occt::gp_Elips::Directrix2()
{
	return Macad::Occt::Ax1(((::gp_Elips*)_NativeInstance)->Directrix2());
}

double Macad::Occt::gp_Elips::Eccentricity()
{
	return ((::gp_Elips*)_NativeInstance)->Eccentricity();
}

double Macad::Occt::gp_Elips::Focal()
{
	return ((::gp_Elips*)_NativeInstance)->Focal();
}

Macad::Occt::Pnt Macad::Occt::gp_Elips::Focus1()
{
	return Macad::Occt::Pnt(((::gp_Elips*)_NativeInstance)->Focus1());
}

Macad::Occt::Pnt Macad::Occt::gp_Elips::Focus2()
{
	return Macad::Occt::Pnt(((::gp_Elips*)_NativeInstance)->Focus2());
}

Macad::Occt::Pnt Macad::Occt::gp_Elips::Location()
{
	return Macad::Occt::Pnt(((::gp_Elips*)_NativeInstance)->Location());
}

double Macad::Occt::gp_Elips::MajorRadius()
{
	return ((::gp_Elips*)_NativeInstance)->MajorRadius();
}

double Macad::Occt::gp_Elips::MinorRadius()
{
	return ((::gp_Elips*)_NativeInstance)->MinorRadius();
}

double Macad::Occt::gp_Elips::Parameter()
{
	return ((::gp_Elips*)_NativeInstance)->Parameter();
}

Macad::Occt::Ax2 Macad::Occt::gp_Elips::Position()
{
	return Macad::Occt::Ax2(((::gp_Elips*)_NativeInstance)->Position());
}

Macad::Occt::Ax1 Macad::Occt::gp_Elips::XAxis()
{
	return Macad::Occt::Ax1(((::gp_Elips*)_NativeInstance)->XAxis());
}

Macad::Occt::Ax1 Macad::Occt::gp_Elips::YAxis()
{
	return Macad::Occt::Ax1(((::gp_Elips*)_NativeInstance)->YAxis());
}

void Macad::Occt::gp_Elips::Mirror(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Elips*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_P);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Mirrored(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::gp_Elips*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Mirror(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Elips*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_A1);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Mirrored(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::gp_Elips*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_A1);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Mirror(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_Elips*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_A2);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Mirrored(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::gp_Elips*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_A2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Rotate(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Elips*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_A1, Ang);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Rotated(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::gp_Elips*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_A1, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Scale(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Elips*)_NativeInstance)->Scale(*(gp_Pnt*)pp_P, S);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Scaled(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::gp_Elips*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Transform(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	((::gp_Elips*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Transformed(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::gp_Elips*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Translate(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::gp_Elips*)_NativeInstance)->Translate(*(gp_Vec*)pp_V);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Translated(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::gp_Elips*)_NativeInstance)->Translated(*(gp_Vec*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::gp_Elips*)_NativeInstance)->Translate(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::gp_Elips*)_NativeInstance)->Translated(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}




//---------------------------------------------------------------------
//  Class  gp_Hypr
//---------------------------------------------------------------------

Macad::Occt::gp_Hypr::gp_Hypr()
	: BaseClass<::gp_Hypr>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Hypr();
}

Macad::Occt::gp_Hypr::gp_Hypr(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius)
	: BaseClass<::gp_Hypr>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	_NativeInstance = new ::gp_Hypr(*(gp_Ax2*)pp_A2, MajorRadius, MinorRadius);
}

Macad::Occt::gp_Hypr::gp_Hypr(Macad::Occt::gp_Hypr^ parameter1)
	: BaseClass<::gp_Hypr>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Hypr(*(::gp_Hypr*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Hypr::SetAxis(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Hypr*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_A1);
}

void Macad::Occt::gp_Hypr::SetLocation(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Hypr*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_P);
}

void Macad::Occt::gp_Hypr::SetMajorRadius(double MajorRadius)
{
	((::gp_Hypr*)_NativeInstance)->SetMajorRadius(MajorRadius);
}

void Macad::Occt::gp_Hypr::SetMinorRadius(double MinorRadius)
{
	((::gp_Hypr*)_NativeInstance)->SetMinorRadius(MinorRadius);
}

void Macad::Occt::gp_Hypr::SetPosition(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_Hypr*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_A2);
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::Asymptote1()
{
	return Macad::Occt::Ax1(((::gp_Hypr*)_NativeInstance)->Asymptote1());
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::Asymptote2()
{
	return Macad::Occt::Ax1(((::gp_Hypr*)_NativeInstance)->Asymptote2());
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::Axis()
{
	return Macad::Occt::Ax1(((::gp_Hypr*)_NativeInstance)->Axis());
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::ConjugateBranch1()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::gp_Hypr*)_NativeInstance)->ConjugateBranch1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::ConjugateBranch2()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::gp_Hypr*)_NativeInstance)->ConjugateBranch2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::Directrix1()
{
	return Macad::Occt::Ax1(((::gp_Hypr*)_NativeInstance)->Directrix1());
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::Directrix2()
{
	return Macad::Occt::Ax1(((::gp_Hypr*)_NativeInstance)->Directrix2());
}

double Macad::Occt::gp_Hypr::Eccentricity()
{
	return ((::gp_Hypr*)_NativeInstance)->Eccentricity();
}

double Macad::Occt::gp_Hypr::Focal()
{
	return ((::gp_Hypr*)_NativeInstance)->Focal();
}

Macad::Occt::Pnt Macad::Occt::gp_Hypr::Focus1()
{
	return Macad::Occt::Pnt(((::gp_Hypr*)_NativeInstance)->Focus1());
}

Macad::Occt::Pnt Macad::Occt::gp_Hypr::Focus2()
{
	return Macad::Occt::Pnt(((::gp_Hypr*)_NativeInstance)->Focus2());
}

Macad::Occt::Pnt Macad::Occt::gp_Hypr::Location()
{
	return Macad::Occt::Pnt(((::gp_Hypr*)_NativeInstance)->Location());
}

double Macad::Occt::gp_Hypr::MajorRadius()
{
	return ((::gp_Hypr*)_NativeInstance)->MajorRadius();
}

double Macad::Occt::gp_Hypr::MinorRadius()
{
	return ((::gp_Hypr*)_NativeInstance)->MinorRadius();
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::OtherBranch()
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::gp_Hypr*)_NativeInstance)->OtherBranch();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

double Macad::Occt::gp_Hypr::Parameter()
{
	return ((::gp_Hypr*)_NativeInstance)->Parameter();
}

Macad::Occt::Ax2 Macad::Occt::gp_Hypr::Position()
{
	return Macad::Occt::Ax2(((::gp_Hypr*)_NativeInstance)->Position());
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::XAxis()
{
	return Macad::Occt::Ax1(((::gp_Hypr*)_NativeInstance)->XAxis());
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::YAxis()
{
	return Macad::Occt::Ax1(((::gp_Hypr*)_NativeInstance)->YAxis());
}

void Macad::Occt::gp_Hypr::Mirror(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Hypr*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_P);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Mirrored(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::gp_Hypr*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Mirror(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Hypr*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_A1);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Mirrored(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::gp_Hypr*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_A1);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Mirror(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_Hypr*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_A2);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Mirrored(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::gp_Hypr*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_A2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Rotate(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Hypr*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_A1, Ang);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Rotated(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::gp_Hypr*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_A1, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Scale(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Hypr*)_NativeInstance)->Scale(*(gp_Pnt*)pp_P, S);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Scaled(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::gp_Hypr*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Transform(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	((::gp_Hypr*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Transformed(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::gp_Hypr*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Translate(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::gp_Hypr*)_NativeInstance)->Translate(*(gp_Vec*)pp_V);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Translated(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::gp_Hypr*)_NativeInstance)->Translated(*(gp_Vec*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::gp_Hypr*)_NativeInstance)->Translate(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::gp_Hypr*)_NativeInstance)->Translated(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}




//---------------------------------------------------------------------
//  Class  gp_Parab
//---------------------------------------------------------------------

Macad::Occt::gp_Parab::gp_Parab()
	: BaseClass<::gp_Parab>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Parab();
}

Macad::Occt::gp_Parab::gp_Parab(Macad::Occt::Ax2 A2, double Focal)
	: BaseClass<::gp_Parab>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	_NativeInstance = new ::gp_Parab(*(gp_Ax2*)pp_A2, Focal);
}

Macad::Occt::gp_Parab::gp_Parab(Macad::Occt::Ax1 D, Macad::Occt::Pnt F)
	: BaseClass<::gp_Parab>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax1> pp_D = &D;
	pin_ptr<Macad::Occt::Pnt> pp_F = &F;
	_NativeInstance = new ::gp_Parab(*(gp_Ax1*)pp_D, *(gp_Pnt*)pp_F);
}

Macad::Occt::gp_Parab::gp_Parab(Macad::Occt::gp_Parab^ parameter1)
	: BaseClass<::gp_Parab>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Parab(*(::gp_Parab*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Parab::SetAxis(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Parab*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_A1);
}

void Macad::Occt::gp_Parab::SetFocal(double Focal)
{
	((::gp_Parab*)_NativeInstance)->SetFocal(Focal);
}

void Macad::Occt::gp_Parab::SetLocation(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Parab*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_P);
}

void Macad::Occt::gp_Parab::SetPosition(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_Parab*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_A2);
}

Macad::Occt::Ax1 Macad::Occt::gp_Parab::Axis()
{
	return Macad::Occt::Ax1(((::gp_Parab*)_NativeInstance)->Axis());
}

Macad::Occt::Ax1 Macad::Occt::gp_Parab::Directrix()
{
	return Macad::Occt::Ax1(((::gp_Parab*)_NativeInstance)->Directrix());
}

double Macad::Occt::gp_Parab::Focal()
{
	return ((::gp_Parab*)_NativeInstance)->Focal();
}

Macad::Occt::Pnt Macad::Occt::gp_Parab::Focus()
{
	return Macad::Occt::Pnt(((::gp_Parab*)_NativeInstance)->Focus());
}

Macad::Occt::Pnt Macad::Occt::gp_Parab::Location()
{
	return Macad::Occt::Pnt(((::gp_Parab*)_NativeInstance)->Location());
}

double Macad::Occt::gp_Parab::Parameter()
{
	return ((::gp_Parab*)_NativeInstance)->Parameter();
}

Macad::Occt::Ax2 Macad::Occt::gp_Parab::Position()
{
	return Macad::Occt::Ax2(((::gp_Parab*)_NativeInstance)->Position());
}

Macad::Occt::Ax1 Macad::Occt::gp_Parab::XAxis()
{
	return Macad::Occt::Ax1(((::gp_Parab*)_NativeInstance)->XAxis());
}

Macad::Occt::Ax1 Macad::Occt::gp_Parab::YAxis()
{
	return Macad::Occt::Ax1(((::gp_Parab*)_NativeInstance)->YAxis());
}

void Macad::Occt::gp_Parab::Mirror(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Parab*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_P);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Mirrored(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::gp_Parab*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Mirror(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Parab*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_A1);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Mirrored(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::gp_Parab*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_A1);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Mirror(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_Parab*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_A2);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Mirrored(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::gp_Parab*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_A2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Rotate(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Parab*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_A1, Ang);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Rotated(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::gp_Parab*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_A1, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Scale(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Parab*)_NativeInstance)->Scale(*(gp_Pnt*)pp_P, S);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Scaled(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::gp_Parab*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Transform(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	((::gp_Parab*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Transformed(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::gp_Parab*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Translate(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::gp_Parab*)_NativeInstance)->Translate(*(gp_Vec*)pp_V);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Translated(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::gp_Parab*)_NativeInstance)->Translated(*(gp_Vec*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::gp_Parab*)_NativeInstance)->Translate(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::gp_Parab*)_NativeInstance)->Translated(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}




//---------------------------------------------------------------------
//  Class  gp_Cylinder
//---------------------------------------------------------------------

Macad::Occt::gp_Cylinder::gp_Cylinder()
	: BaseClass<::gp_Cylinder>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Cylinder();
}

Macad::Occt::gp_Cylinder::gp_Cylinder(Macad::Occt::Ax3 A3, double Radius)
	: BaseClass<::gp_Cylinder>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax3> pp_A3 = &A3;
	_NativeInstance = new ::gp_Cylinder(*(gp_Ax3*)pp_A3, Radius);
}

Macad::Occt::gp_Cylinder::gp_Cylinder(Macad::Occt::gp_Cylinder^ parameter1)
	: BaseClass<::gp_Cylinder>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Cylinder(*(::gp_Cylinder*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Cylinder::SetAxis(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Cylinder*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_A1);
}

void Macad::Occt::gp_Cylinder::SetLocation(Macad::Occt::Pnt Loc)
{
	pin_ptr<Macad::Occt::Pnt> pp_Loc = &Loc;
	((::gp_Cylinder*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_Loc);
}

void Macad::Occt::gp_Cylinder::SetPosition(Macad::Occt::Ax3 A3)
{
	pin_ptr<Macad::Occt::Ax3> pp_A3 = &A3;
	((::gp_Cylinder*)_NativeInstance)->SetPosition(*(gp_Ax3*)pp_A3);
}

void Macad::Occt::gp_Cylinder::SetRadius(double R)
{
	((::gp_Cylinder*)_NativeInstance)->SetRadius(R);
}

void Macad::Occt::gp_Cylinder::UReverse()
{
	((::gp_Cylinder*)_NativeInstance)->UReverse();
}

void Macad::Occt::gp_Cylinder::VReverse()
{
	((::gp_Cylinder*)_NativeInstance)->VReverse();
}

bool Macad::Occt::gp_Cylinder::Direct()
{
	return ((::gp_Cylinder*)_NativeInstance)->Direct();
}

Macad::Occt::Ax1 Macad::Occt::gp_Cylinder::Axis()
{
	return Macad::Occt::Ax1(((::gp_Cylinder*)_NativeInstance)->Axis());
}

void Macad::Occt::gp_Cylinder::Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D)
{
	pin_ptr<double> pp_A1 = &A1;
	pin_ptr<double> pp_A2 = &A2;
	pin_ptr<double> pp_A3 = &A3;
	pin_ptr<double> pp_B1 = &B1;
	pin_ptr<double> pp_B2 = &B2;
	pin_ptr<double> pp_B3 = &B3;
	pin_ptr<double> pp_C1 = &C1;
	pin_ptr<double> pp_C2 = &C2;
	pin_ptr<double> pp_C3 = &C3;
	pin_ptr<double> pp_D = &D;
	((::gp_Cylinder*)_NativeInstance)->Coefficients(*(Standard_Real*)pp_A1, *(Standard_Real*)pp_A2, *(Standard_Real*)pp_A3, *(Standard_Real*)pp_B1, *(Standard_Real*)pp_B2, *(Standard_Real*)pp_B3, *(Standard_Real*)pp_C1, *(Standard_Real*)pp_C2, *(Standard_Real*)pp_C3, *(Standard_Real*)pp_D);
}

Macad::Occt::Pnt Macad::Occt::gp_Cylinder::Location()
{
	return Macad::Occt::Pnt(((::gp_Cylinder*)_NativeInstance)->Location());
}

Macad::Occt::Ax3 Macad::Occt::gp_Cylinder::Position()
{
	return Macad::Occt::Ax3(((::gp_Cylinder*)_NativeInstance)->Position());
}

double Macad::Occt::gp_Cylinder::Radius()
{
	return ((::gp_Cylinder*)_NativeInstance)->Radius();
}

Macad::Occt::Ax1 Macad::Occt::gp_Cylinder::XAxis()
{
	return Macad::Occt::Ax1(((::gp_Cylinder*)_NativeInstance)->XAxis());
}

Macad::Occt::Ax1 Macad::Occt::gp_Cylinder::YAxis()
{
	return Macad::Occt::Ax1(((::gp_Cylinder*)_NativeInstance)->YAxis());
}

void Macad::Occt::gp_Cylinder::Mirror(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Cylinder*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_P);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Mirrored(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::gp_Cylinder*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Mirror(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Cylinder*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_A1);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Mirrored(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::gp_Cylinder*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_A1);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Mirror(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_Cylinder*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_A2);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Mirrored(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::gp_Cylinder*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_A2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Rotate(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Cylinder*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_A1, Ang);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Rotated(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::gp_Cylinder*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_A1, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Scale(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Cylinder*)_NativeInstance)->Scale(*(gp_Pnt*)pp_P, S);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Scaled(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::gp_Cylinder*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Transform(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	((::gp_Cylinder*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Transformed(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::gp_Cylinder*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Translate(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::gp_Cylinder*)_NativeInstance)->Translate(*(gp_Vec*)pp_V);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Translated(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::gp_Cylinder*)_NativeInstance)->Translated(*(gp_Vec*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::gp_Cylinder*)_NativeInstance)->Translate(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	::gp_Cylinder* _result = new ::gp_Cylinder();
	*_result = ((::gp_Cylinder*)_NativeInstance)->Translated(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}




//---------------------------------------------------------------------
//  Class  gp_Sphere
//---------------------------------------------------------------------

Macad::Occt::gp_Sphere::gp_Sphere()
	: BaseClass<::gp_Sphere>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Sphere();
}

Macad::Occt::gp_Sphere::gp_Sphere(Macad::Occt::Ax3 A3, double Radius)
	: BaseClass<::gp_Sphere>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax3> pp_A3 = &A3;
	_NativeInstance = new ::gp_Sphere(*(gp_Ax3*)pp_A3, Radius);
}

Macad::Occt::gp_Sphere::gp_Sphere(Macad::Occt::gp_Sphere^ parameter1)
	: BaseClass<::gp_Sphere>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Sphere(*(::gp_Sphere*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Sphere::SetLocation(Macad::Occt::Pnt Loc)
{
	pin_ptr<Macad::Occt::Pnt> pp_Loc = &Loc;
	((::gp_Sphere*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_Loc);
}

void Macad::Occt::gp_Sphere::SetPosition(Macad::Occt::Ax3 A3)
{
	pin_ptr<Macad::Occt::Ax3> pp_A3 = &A3;
	((::gp_Sphere*)_NativeInstance)->SetPosition(*(gp_Ax3*)pp_A3);
}

void Macad::Occt::gp_Sphere::SetRadius(double R)
{
	((::gp_Sphere*)_NativeInstance)->SetRadius(R);
}

double Macad::Occt::gp_Sphere::Area()
{
	return ((::gp_Sphere*)_NativeInstance)->Area();
}

void Macad::Occt::gp_Sphere::Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D)
{
	pin_ptr<double> pp_A1 = &A1;
	pin_ptr<double> pp_A2 = &A2;
	pin_ptr<double> pp_A3 = &A3;
	pin_ptr<double> pp_B1 = &B1;
	pin_ptr<double> pp_B2 = &B2;
	pin_ptr<double> pp_B3 = &B3;
	pin_ptr<double> pp_C1 = &C1;
	pin_ptr<double> pp_C2 = &C2;
	pin_ptr<double> pp_C3 = &C3;
	pin_ptr<double> pp_D = &D;
	((::gp_Sphere*)_NativeInstance)->Coefficients(*(Standard_Real*)pp_A1, *(Standard_Real*)pp_A2, *(Standard_Real*)pp_A3, *(Standard_Real*)pp_B1, *(Standard_Real*)pp_B2, *(Standard_Real*)pp_B3, *(Standard_Real*)pp_C1, *(Standard_Real*)pp_C2, *(Standard_Real*)pp_C3, *(Standard_Real*)pp_D);
}

void Macad::Occt::gp_Sphere::UReverse()
{
	((::gp_Sphere*)_NativeInstance)->UReverse();
}

void Macad::Occt::gp_Sphere::VReverse()
{
	((::gp_Sphere*)_NativeInstance)->VReverse();
}

bool Macad::Occt::gp_Sphere::Direct()
{
	return ((::gp_Sphere*)_NativeInstance)->Direct();
}

Macad::Occt::Pnt Macad::Occt::gp_Sphere::Location()
{
	return Macad::Occt::Pnt(((::gp_Sphere*)_NativeInstance)->Location());
}

Macad::Occt::Ax3 Macad::Occt::gp_Sphere::Position()
{
	return Macad::Occt::Ax3(((::gp_Sphere*)_NativeInstance)->Position());
}

double Macad::Occt::gp_Sphere::Radius()
{
	return ((::gp_Sphere*)_NativeInstance)->Radius();
}

double Macad::Occt::gp_Sphere::Volume()
{
	return ((::gp_Sphere*)_NativeInstance)->Volume();
}

Macad::Occt::Ax1 Macad::Occt::gp_Sphere::XAxis()
{
	return Macad::Occt::Ax1(((::gp_Sphere*)_NativeInstance)->XAxis());
}

Macad::Occt::Ax1 Macad::Occt::gp_Sphere::YAxis()
{
	return Macad::Occt::Ax1(((::gp_Sphere*)_NativeInstance)->YAxis());
}

void Macad::Occt::gp_Sphere::Mirror(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Sphere*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_P);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Mirrored(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::gp_Sphere*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Mirror(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Sphere*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_A1);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Mirrored(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::gp_Sphere*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_A1);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Mirror(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_Sphere*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_A2);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Mirrored(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::gp_Sphere*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_A2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Rotate(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Sphere*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_A1, Ang);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Rotated(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::gp_Sphere*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_A1, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Scale(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Sphere*)_NativeInstance)->Scale(*(gp_Pnt*)pp_P, S);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Scaled(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::gp_Sphere*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Transform(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	((::gp_Sphere*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Transformed(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::gp_Sphere*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Translate(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::gp_Sphere*)_NativeInstance)->Translate(*(gp_Vec*)pp_V);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Translated(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::gp_Sphere*)_NativeInstance)->Translated(*(gp_Vec*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::gp_Sphere*)_NativeInstance)->Translate(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	::gp_Sphere* _result = new ::gp_Sphere();
	*_result = ((::gp_Sphere*)_NativeInstance)->Translated(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}




//---------------------------------------------------------------------
//  Class  gp_Torus
//---------------------------------------------------------------------

Macad::Occt::gp_Torus::gp_Torus()
	: BaseClass<::gp_Torus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Torus();
}

Macad::Occt::gp_Torus::gp_Torus(Macad::Occt::Ax3 A3, double MajorRadius, double MinorRadius)
	: BaseClass<::gp_Torus>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax3> pp_A3 = &A3;
	_NativeInstance = new ::gp_Torus(*(gp_Ax3*)pp_A3, MajorRadius, MinorRadius);
}

Macad::Occt::gp_Torus::gp_Torus(Macad::Occt::gp_Torus^ parameter1)
	: BaseClass<::gp_Torus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Torus(*(::gp_Torus*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Torus::SetAxis(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Torus*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_A1);
}

void Macad::Occt::gp_Torus::SetLocation(Macad::Occt::Pnt Loc)
{
	pin_ptr<Macad::Occt::Pnt> pp_Loc = &Loc;
	((::gp_Torus*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_Loc);
}

void Macad::Occt::gp_Torus::SetMajorRadius(double MajorRadius)
{
	((::gp_Torus*)_NativeInstance)->SetMajorRadius(MajorRadius);
}

void Macad::Occt::gp_Torus::SetMinorRadius(double MinorRadius)
{
	((::gp_Torus*)_NativeInstance)->SetMinorRadius(MinorRadius);
}

void Macad::Occt::gp_Torus::SetPosition(Macad::Occt::Ax3 A3)
{
	pin_ptr<Macad::Occt::Ax3> pp_A3 = &A3;
	((::gp_Torus*)_NativeInstance)->SetPosition(*(gp_Ax3*)pp_A3);
}

double Macad::Occt::gp_Torus::Area()
{
	return ((::gp_Torus*)_NativeInstance)->Area();
}

void Macad::Occt::gp_Torus::UReverse()
{
	((::gp_Torus*)_NativeInstance)->UReverse();
}

void Macad::Occt::gp_Torus::VReverse()
{
	((::gp_Torus*)_NativeInstance)->VReverse();
}

bool Macad::Occt::gp_Torus::Direct()
{
	return ((::gp_Torus*)_NativeInstance)->Direct();
}

Macad::Occt::Ax1 Macad::Occt::gp_Torus::Axis()
{
	return Macad::Occt::Ax1(((::gp_Torus*)_NativeInstance)->Axis());
}

void Macad::Occt::gp_Torus::Coefficients(Macad::Occt::TColStd_Array1OfReal^ Coef)
{
	((::gp_Torus*)_NativeInstance)->Coefficients(*(::TColStd_Array1OfReal*)Coef->NativeInstance);
}

Macad::Occt::Pnt Macad::Occt::gp_Torus::Location()
{
	return Macad::Occt::Pnt(((::gp_Torus*)_NativeInstance)->Location());
}

Macad::Occt::Ax3 Macad::Occt::gp_Torus::Position()
{
	return Macad::Occt::Ax3(((::gp_Torus*)_NativeInstance)->Position());
}

double Macad::Occt::gp_Torus::MajorRadius()
{
	return ((::gp_Torus*)_NativeInstance)->MajorRadius();
}

double Macad::Occt::gp_Torus::MinorRadius()
{
	return ((::gp_Torus*)_NativeInstance)->MinorRadius();
}

double Macad::Occt::gp_Torus::Volume()
{
	return ((::gp_Torus*)_NativeInstance)->Volume();
}

Macad::Occt::Ax1 Macad::Occt::gp_Torus::XAxis()
{
	return Macad::Occt::Ax1(((::gp_Torus*)_NativeInstance)->XAxis());
}

Macad::Occt::Ax1 Macad::Occt::gp_Torus::YAxis()
{
	return Macad::Occt::Ax1(((::gp_Torus*)_NativeInstance)->YAxis());
}

void Macad::Occt::gp_Torus::Mirror(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Torus*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_P);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Mirrored(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::gp_Torus*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Mirror(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Torus*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_A1);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Mirrored(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::gp_Torus*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_A1);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Mirror(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_Torus*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_A2);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Mirrored(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::gp_Torus*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_A2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Rotate(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Torus*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_A1, Ang);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Rotated(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::gp_Torus*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_A1, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Scale(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Torus*)_NativeInstance)->Scale(*(gp_Pnt*)pp_P, S);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Scaled(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::gp_Torus*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Transform(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	((::gp_Torus*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Transformed(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::gp_Torus*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Translate(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::gp_Torus*)_NativeInstance)->Translate(*(gp_Vec*)pp_V);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Translated(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::gp_Torus*)_NativeInstance)->Translated(*(gp_Vec*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::gp_Torus*)_NativeInstance)->Translate(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	::gp_Torus* _result = new ::gp_Torus();
	*_result = ((::gp_Torus*)_NativeInstance)->Translated(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}




//---------------------------------------------------------------------
//  Class  gp_Cone
//---------------------------------------------------------------------

Macad::Occt::gp_Cone::gp_Cone()
	: BaseClass<::gp_Cone>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Cone();
}

Macad::Occt::gp_Cone::gp_Cone(Macad::Occt::Ax3 A3, double Ang, double Radius)
	: BaseClass<::gp_Cone>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax3> pp_A3 = &A3;
	_NativeInstance = new ::gp_Cone(*(gp_Ax3*)pp_A3, Ang, Radius);
}

Macad::Occt::gp_Cone::gp_Cone(Macad::Occt::gp_Cone^ parameter1)
	: BaseClass<::gp_Cone>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Cone(*(::gp_Cone*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Cone::SetAxis(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Cone*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_A1);
}

void Macad::Occt::gp_Cone::SetLocation(Macad::Occt::Pnt Loc)
{
	pin_ptr<Macad::Occt::Pnt> pp_Loc = &Loc;
	((::gp_Cone*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_Loc);
}

void Macad::Occt::gp_Cone::SetPosition(Macad::Occt::Ax3 A3)
{
	pin_ptr<Macad::Occt::Ax3> pp_A3 = &A3;
	((::gp_Cone*)_NativeInstance)->SetPosition(*(gp_Ax3*)pp_A3);
}

void Macad::Occt::gp_Cone::SetRadius(double R)
{
	((::gp_Cone*)_NativeInstance)->SetRadius(R);
}

void Macad::Occt::gp_Cone::SetSemiAngle(double Ang)
{
	((::gp_Cone*)_NativeInstance)->SetSemiAngle(Ang);
}

Macad::Occt::Pnt Macad::Occt::gp_Cone::Apex()
{
	return Macad::Occt::Pnt(((::gp_Cone*)_NativeInstance)->Apex());
}

void Macad::Occt::gp_Cone::UReverse()
{
	((::gp_Cone*)_NativeInstance)->UReverse();
}

void Macad::Occt::gp_Cone::VReverse()
{
	((::gp_Cone*)_NativeInstance)->VReverse();
}

bool Macad::Occt::gp_Cone::Direct()
{
	return ((::gp_Cone*)_NativeInstance)->Direct();
}

Macad::Occt::Ax1 Macad::Occt::gp_Cone::Axis()
{
	return Macad::Occt::Ax1(((::gp_Cone*)_NativeInstance)->Axis());
}

void Macad::Occt::gp_Cone::Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D)
{
	pin_ptr<double> pp_A1 = &A1;
	pin_ptr<double> pp_A2 = &A2;
	pin_ptr<double> pp_A3 = &A3;
	pin_ptr<double> pp_B1 = &B1;
	pin_ptr<double> pp_B2 = &B2;
	pin_ptr<double> pp_B3 = &B3;
	pin_ptr<double> pp_C1 = &C1;
	pin_ptr<double> pp_C2 = &C2;
	pin_ptr<double> pp_C3 = &C3;
	pin_ptr<double> pp_D = &D;
	((::gp_Cone*)_NativeInstance)->Coefficients(*(Standard_Real*)pp_A1, *(Standard_Real*)pp_A2, *(Standard_Real*)pp_A3, *(Standard_Real*)pp_B1, *(Standard_Real*)pp_B2, *(Standard_Real*)pp_B3, *(Standard_Real*)pp_C1, *(Standard_Real*)pp_C2, *(Standard_Real*)pp_C3, *(Standard_Real*)pp_D);
}

Macad::Occt::Pnt Macad::Occt::gp_Cone::Location()
{
	return Macad::Occt::Pnt(((::gp_Cone*)_NativeInstance)->Location());
}

Macad::Occt::Ax3 Macad::Occt::gp_Cone::Position()
{
	return Macad::Occt::Ax3(((::gp_Cone*)_NativeInstance)->Position());
}

double Macad::Occt::gp_Cone::RefRadius()
{
	return ((::gp_Cone*)_NativeInstance)->RefRadius();
}

double Macad::Occt::gp_Cone::SemiAngle()
{
	return ((::gp_Cone*)_NativeInstance)->SemiAngle();
}

Macad::Occt::Ax1 Macad::Occt::gp_Cone::XAxis()
{
	return Macad::Occt::Ax1(((::gp_Cone*)_NativeInstance)->XAxis());
}

Macad::Occt::Ax1 Macad::Occt::gp_Cone::YAxis()
{
	return Macad::Occt::Ax1(((::gp_Cone*)_NativeInstance)->YAxis());
}

void Macad::Occt::gp_Cone::Mirror(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Cone*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_P);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Mirrored(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::gp_Cone*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Mirror(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Cone*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_A1);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Mirrored(Macad::Occt::Ax1 A1)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::gp_Cone*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_A1);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Mirror(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	((::gp_Cone*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_A2);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Mirrored(Macad::Occt::Ax2 A2)
{
	pin_ptr<Macad::Occt::Ax2> pp_A2 = &A2;
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::gp_Cone*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_A2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Rotate(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	((::gp_Cone*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_A1, Ang);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Rotated(Macad::Occt::Ax1 A1, double Ang)
{
	pin_ptr<Macad::Occt::Ax1> pp_A1 = &A1;
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::gp_Cone*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_A1, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Scale(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::gp_Cone*)_NativeInstance)->Scale(*(gp_Pnt*)pp_P, S);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Scaled(Macad::Occt::Pnt P, double S)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::gp_Cone*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Transform(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	((::gp_Cone*)_NativeInstance)->Transform(*(gp_Trsf*)pp_T);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Transformed(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::gp_Cone*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Translate(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	((::gp_Cone*)_NativeInstance)->Translate(*(gp_Vec*)pp_V);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Translated(Macad::Occt::Vec V)
{
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::gp_Cone*)_NativeInstance)->Translated(*(gp_Vec*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::gp_Cone*)_NativeInstance)->Translate(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	::gp_Cone* _result = new ::gp_Cone();
	*_result = ((::gp_Cone*)_NativeInstance)->Translated(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}




//---------------------------------------------------------------------
//  Class  gp_GTrsf2d
//---------------------------------------------------------------------

Macad::Occt::gp_GTrsf2d::gp_GTrsf2d()
	: BaseClass<::gp_GTrsf2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_GTrsf2d();
}

Macad::Occt::gp_GTrsf2d::gp_GTrsf2d(Macad::Occt::Trsf2d T)
	: BaseClass<::gp_GTrsf2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	_NativeInstance = new ::gp_GTrsf2d(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::gp_GTrsf2d::gp_GTrsf2d(Macad::Occt::Mat2d M, Macad::Occt::XY V)
	: BaseClass<::gp_GTrsf2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Mat2d> pp_M = &M;
	pin_ptr<Macad::Occt::XY> pp_V = &V;
	_NativeInstance = new ::gp_GTrsf2d(*(gp_Mat2d*)pp_M, *(gp_XY*)pp_V);
}

Macad::Occt::gp_GTrsf2d::gp_GTrsf2d(Macad::Occt::gp_GTrsf2d^ parameter1)
	: BaseClass<::gp_GTrsf2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_GTrsf2d(*(::gp_GTrsf2d*)parameter1->NativeInstance);
}

void Macad::Occt::gp_GTrsf2d::SetAffinity(Macad::Occt::Ax2d A, double Ratio)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_GTrsf2d*)_NativeInstance)->SetAffinity(*(gp_Ax2d*)pp_A, Ratio);
}

void Macad::Occt::gp_GTrsf2d::SetValue(int Row, int Col, double Value)
{
	((::gp_GTrsf2d*)_NativeInstance)->SetValue(Row, Col, Value);
}

void Macad::Occt::gp_GTrsf2d::SetTranslationPart(Macad::Occt::XY Coord)
{
	pin_ptr<Macad::Occt::XY> pp_Coord = &Coord;
	((::gp_GTrsf2d*)_NativeInstance)->SetTranslationPart(*(gp_XY*)pp_Coord);
}

void Macad::Occt::gp_GTrsf2d::SetTrsf2d(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::gp_GTrsf2d*)_NativeInstance)->SetTrsf2d(*(gp_Trsf2d*)pp_T);
}

void Macad::Occt::gp_GTrsf2d::SetVectorialPart(Macad::Occt::Mat2d Matrix)
{
	pin_ptr<Macad::Occt::Mat2d> pp_Matrix = &Matrix;
	((::gp_GTrsf2d*)_NativeInstance)->SetVectorialPart(*(gp_Mat2d*)pp_Matrix);
}

bool Macad::Occt::gp_GTrsf2d::IsNegative()
{
	return ((::gp_GTrsf2d*)_NativeInstance)->IsNegative();
}

bool Macad::Occt::gp_GTrsf2d::IsSingular()
{
	return ((::gp_GTrsf2d*)_NativeInstance)->IsSingular();
}

Macad::Occt::TrsfForm Macad::Occt::gp_GTrsf2d::Form()
{
	return (Macad::Occt::TrsfForm)((::gp_GTrsf2d*)_NativeInstance)->Form();
}

Macad::Occt::XY Macad::Occt::gp_GTrsf2d::TranslationPart()
{
	return Macad::Occt::XY(((::gp_GTrsf2d*)_NativeInstance)->TranslationPart());
}

Macad::Occt::Mat2d Macad::Occt::gp_GTrsf2d::VectorialPart()
{
	return Macad::Occt::Mat2d(((::gp_GTrsf2d*)_NativeInstance)->VectorialPart());
}

double Macad::Occt::gp_GTrsf2d::Value(int Row, int Col)
{
	return ((::gp_GTrsf2d*)_NativeInstance)->Value(Row, Col);
}

void Macad::Occt::gp_GTrsf2d::Invert()
{
	((::gp_GTrsf2d*)_NativeInstance)->Invert();
}

Macad::Occt::gp_GTrsf2d^ Macad::Occt::gp_GTrsf2d::Inverted()
{
	::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
	*_result = ((::gp_GTrsf2d*)_NativeInstance)->Inverted();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf2d(_result);
}

Macad::Occt::gp_GTrsf2d^ Macad::Occt::gp_GTrsf2d::Multiplied(Macad::Occt::gp_GTrsf2d^ T)
{
	::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
	*_result = ((::gp_GTrsf2d*)_NativeInstance)->Multiplied(*(::gp_GTrsf2d*)T->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf2d(_result);
}

void Macad::Occt::gp_GTrsf2d::Multiply(Macad::Occt::gp_GTrsf2d^ T)
{
	((::gp_GTrsf2d*)_NativeInstance)->Multiply(*(::gp_GTrsf2d*)T->NativeInstance);
}

void Macad::Occt::gp_GTrsf2d::PreMultiply(Macad::Occt::gp_GTrsf2d^ T)
{
	((::gp_GTrsf2d*)_NativeInstance)->PreMultiply(*(::gp_GTrsf2d*)T->NativeInstance);
}

void Macad::Occt::gp_GTrsf2d::Power(int N)
{
	((::gp_GTrsf2d*)_NativeInstance)->Power(N);
}

Macad::Occt::gp_GTrsf2d^ Macad::Occt::gp_GTrsf2d::Powered(int N)
{
	::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
	*_result = ((::gp_GTrsf2d*)_NativeInstance)->Powered(N);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf2d(_result);
}

void Macad::Occt::gp_GTrsf2d::Transforms(Macad::Occt::XY% Coord)
{
	pin_ptr<Macad::Occt::XY> pp_Coord = &Coord;
	((::gp_GTrsf2d*)_NativeInstance)->Transforms(*(gp_XY*)pp_Coord);
}

Macad::Occt::XY Macad::Occt::gp_GTrsf2d::Transformed(Macad::Occt::XY Coord)
{
	pin_ptr<Macad::Occt::XY> pp_Coord = &Coord;
	return Macad::Occt::XY(((::gp_GTrsf2d*)_NativeInstance)->Transformed(*(gp_XY*)pp_Coord));
}

void Macad::Occt::gp_GTrsf2d::Transforms(double% X, double% Y)
{
	pin_ptr<double> pp_X = &X;
	pin_ptr<double> pp_Y = &Y;
	((::gp_GTrsf2d*)_NativeInstance)->Transforms(*(Standard_Real*)pp_X, *(Standard_Real*)pp_Y);
}

Macad::Occt::Trsf2d Macad::Occt::gp_GTrsf2d::Trsf2d()
{
	return Macad::Occt::Trsf2d(((::gp_GTrsf2d*)_NativeInstance)->Trsf2d());
}




//---------------------------------------------------------------------
//  Class  gp_Lin2d
//---------------------------------------------------------------------

Macad::Occt::gp_Lin2d::gp_Lin2d()
	: BaseClass<::gp_Lin2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Lin2d();
}

Macad::Occt::gp_Lin2d::gp_Lin2d(Macad::Occt::Ax2d A)
	: BaseClass<::gp_Lin2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	_NativeInstance = new ::gp_Lin2d(*(gp_Ax2d*)pp_A);
}

Macad::Occt::gp_Lin2d::gp_Lin2d(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d V)
	: BaseClass<::gp_Lin2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	pin_ptr<Macad::Occt::Dir2d> pp_V = &V;
	_NativeInstance = new ::gp_Lin2d(*(gp_Pnt2d*)pp_P, *(gp_Dir2d*)pp_V);
}

Macad::Occt::gp_Lin2d::gp_Lin2d(double A, double B, double C)
	: BaseClass<::gp_Lin2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Lin2d(A, B, C);
}

Macad::Occt::gp_Lin2d::gp_Lin2d(Macad::Occt::gp_Lin2d^ parameter1)
	: BaseClass<::gp_Lin2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Lin2d(*(::gp_Lin2d*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Lin2d::Reverse()
{
	((::gp_Lin2d*)_NativeInstance)->Reverse();
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Reversed()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::gp_Lin2d*)_NativeInstance)->Reversed();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::SetDirection(Macad::Occt::Dir2d V)
{
	pin_ptr<Macad::Occt::Dir2d> pp_V = &V;
	((::gp_Lin2d*)_NativeInstance)->SetDirection(*(gp_Dir2d*)pp_V);
}

void Macad::Occt::gp_Lin2d::SetLocation(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Lin2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_P);
}

void Macad::Occt::gp_Lin2d::SetPosition(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_Lin2d*)_NativeInstance)->SetPosition(*(gp_Ax2d*)pp_A);
}

void Macad::Occt::gp_Lin2d::Coefficients(double% A, double% B, double% C)
{
	pin_ptr<double> pp_A = &A;
	pin_ptr<double> pp_B = &B;
	pin_ptr<double> pp_C = &C;
	((::gp_Lin2d*)_NativeInstance)->Coefficients(*(Standard_Real*)pp_A, *(Standard_Real*)pp_B, *(Standard_Real*)pp_C);
}

Macad::Occt::Dir2d Macad::Occt::gp_Lin2d::Direction()
{
	return Macad::Occt::Dir2d(((::gp_Lin2d*)_NativeInstance)->Direction());
}

Macad::Occt::Pnt2d Macad::Occt::gp_Lin2d::Location()
{
	return Macad::Occt::Pnt2d(((::gp_Lin2d*)_NativeInstance)->Location());
}

Macad::Occt::Ax2d Macad::Occt::gp_Lin2d::Position()
{
	return Macad::Occt::Ax2d(((::gp_Lin2d*)_NativeInstance)->Position());
}

double Macad::Occt::gp_Lin2d::Angle(Macad::Occt::gp_Lin2d^ Other)
{
	return ((::gp_Lin2d*)_NativeInstance)->Angle(*(::gp_Lin2d*)Other->NativeInstance);
}

bool Macad::Occt::gp_Lin2d::Contains(Macad::Occt::Pnt2d P, double LinearTolerance)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ((::gp_Lin2d*)_NativeInstance)->Contains(*(gp_Pnt2d*)pp_P, LinearTolerance);
}

double Macad::Occt::gp_Lin2d::Distance(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ((::gp_Lin2d*)_NativeInstance)->Distance(*(gp_Pnt2d*)pp_P);
}

double Macad::Occt::gp_Lin2d::Distance(Macad::Occt::gp_Lin2d^ Other)
{
	return ((::gp_Lin2d*)_NativeInstance)->Distance(*(::gp_Lin2d*)Other->NativeInstance);
}

double Macad::Occt::gp_Lin2d::SquareDistance(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ((::gp_Lin2d*)_NativeInstance)->SquareDistance(*(gp_Pnt2d*)pp_P);
}

double Macad::Occt::gp_Lin2d::SquareDistance(Macad::Occt::gp_Lin2d^ Other)
{
	return ((::gp_Lin2d*)_NativeInstance)->SquareDistance(*(::gp_Lin2d*)Other->NativeInstance);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Normal(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::gp_Lin2d*)_NativeInstance)->Normal(*(gp_Pnt2d*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Mirror(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Lin2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_P);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Mirrored(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::gp_Lin2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Mirror(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_Lin2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_A);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Mirrored(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::gp_Lin2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_A);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Rotate(Macad::Occt::Pnt2d P, double Ang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Lin2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_P, Ang);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Rotated(Macad::Occt::Pnt2d P, double Ang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::gp_Lin2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_P, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Scale(Macad::Occt::Pnt2d P, double S)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Lin2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_P, S);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Scaled(Macad::Occt::Pnt2d P, double S)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::gp_Lin2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::gp_Lin2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Transformed(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::gp_Lin2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Translate(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::gp_Lin2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_V);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Translated(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::gp_Lin2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Translate(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	((::gp_Lin2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Translated(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::gp_Lin2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}




//---------------------------------------------------------------------
//  Class  gp_Circ2d
//---------------------------------------------------------------------

Macad::Occt::gp_Circ2d::gp_Circ2d()
	: BaseClass<::gp_Circ2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Circ2d();
}

Macad::Occt::gp_Circ2d::gp_Circ2d(Macad::Occt::Ax2d XAxis, double Radius, bool Sense)
	: BaseClass<::gp_Circ2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_XAxis = &XAxis;
	_NativeInstance = new ::gp_Circ2d(*(gp_Ax2d*)pp_XAxis, Radius, Sense);
}

Macad::Occt::gp_Circ2d::gp_Circ2d(Macad::Occt::Ax2d XAxis, double Radius)
	: BaseClass<::gp_Circ2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_XAxis = &XAxis;
	_NativeInstance = new ::gp_Circ2d(*(gp_Ax2d*)pp_XAxis, Radius, true);
}

Macad::Occt::gp_Circ2d::gp_Circ2d(Macad::Occt::Ax22d Axis, double Radius)
	: BaseClass<::gp_Circ2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax22d> pp_Axis = &Axis;
	_NativeInstance = new ::gp_Circ2d(*(gp_Ax22d*)pp_Axis, Radius);
}

Macad::Occt::gp_Circ2d::gp_Circ2d(Macad::Occt::gp_Circ2d^ parameter1)
	: BaseClass<::gp_Circ2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Circ2d(*(::gp_Circ2d*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Circ2d::SetLocation(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Circ2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_P);
}

void Macad::Occt::gp_Circ2d::SetXAxis(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_Circ2d*)_NativeInstance)->SetXAxis(*(gp_Ax2d*)pp_A);
}

void Macad::Occt::gp_Circ2d::SetAxis(Macad::Occt::Ax22d A)
{
	pin_ptr<Macad::Occt::Ax22d> pp_A = &A;
	((::gp_Circ2d*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_A);
}

void Macad::Occt::gp_Circ2d::SetYAxis(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_Circ2d*)_NativeInstance)->SetYAxis(*(gp_Ax2d*)pp_A);
}

void Macad::Occt::gp_Circ2d::SetRadius(double Radius)
{
	((::gp_Circ2d*)_NativeInstance)->SetRadius(Radius);
}

double Macad::Occt::gp_Circ2d::Area()
{
	return ((::gp_Circ2d*)_NativeInstance)->Area();
}

void Macad::Occt::gp_Circ2d::Coefficients(double% A, double% B, double% C, double% D, double% E, double% F)
{
	pin_ptr<double> pp_A = &A;
	pin_ptr<double> pp_B = &B;
	pin_ptr<double> pp_C = &C;
	pin_ptr<double> pp_D = &D;
	pin_ptr<double> pp_E = &E;
	pin_ptr<double> pp_F = &F;
	((::gp_Circ2d*)_NativeInstance)->Coefficients(*(Standard_Real*)pp_A, *(Standard_Real*)pp_B, *(Standard_Real*)pp_C, *(Standard_Real*)pp_D, *(Standard_Real*)pp_E, *(Standard_Real*)pp_F);
}

bool Macad::Occt::gp_Circ2d::Contains(Macad::Occt::Pnt2d P, double LinearTolerance)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ((::gp_Circ2d*)_NativeInstance)->Contains(*(gp_Pnt2d*)pp_P, LinearTolerance);
}

double Macad::Occt::gp_Circ2d::Distance(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ((::gp_Circ2d*)_NativeInstance)->Distance(*(gp_Pnt2d*)pp_P);
}

double Macad::Occt::gp_Circ2d::SquareDistance(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ((::gp_Circ2d*)_NativeInstance)->SquareDistance(*(gp_Pnt2d*)pp_P);
}

double Macad::Occt::gp_Circ2d::Length()
{
	return ((::gp_Circ2d*)_NativeInstance)->Length();
}

Macad::Occt::Pnt2d Macad::Occt::gp_Circ2d::Location()
{
	return Macad::Occt::Pnt2d(((::gp_Circ2d*)_NativeInstance)->Location());
}

double Macad::Occt::gp_Circ2d::Radius()
{
	return ((::gp_Circ2d*)_NativeInstance)->Radius();
}

Macad::Occt::Ax22d Macad::Occt::gp_Circ2d::Axis()
{
	return Macad::Occt::Ax22d(((::gp_Circ2d*)_NativeInstance)->Axis());
}

Macad::Occt::Ax22d Macad::Occt::gp_Circ2d::Position()
{
	return Macad::Occt::Ax22d(((::gp_Circ2d*)_NativeInstance)->Position());
}

Macad::Occt::Ax2d Macad::Occt::gp_Circ2d::XAxis()
{
	return Macad::Occt::Ax2d(((::gp_Circ2d*)_NativeInstance)->XAxis());
}

Macad::Occt::Ax2d Macad::Occt::gp_Circ2d::YAxis()
{
	return Macad::Occt::Ax2d(((::gp_Circ2d*)_NativeInstance)->YAxis());
}

void Macad::Occt::gp_Circ2d::Reverse()
{
	((::gp_Circ2d*)_NativeInstance)->Reverse();
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Reversed()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::gp_Circ2d*)_NativeInstance)->Reversed();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

bool Macad::Occt::gp_Circ2d::IsDirect()
{
	return ((::gp_Circ2d*)_NativeInstance)->IsDirect();
}

void Macad::Occt::gp_Circ2d::Mirror(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Circ2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_P);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Mirrored(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::gp_Circ2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::gp_Circ2d::Mirror(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_Circ2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_A);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Mirrored(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::gp_Circ2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_A);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::gp_Circ2d::Rotate(Macad::Occt::Pnt2d P, double Ang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Circ2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_P, Ang);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Rotated(Macad::Occt::Pnt2d P, double Ang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::gp_Circ2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_P, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::gp_Circ2d::Scale(Macad::Occt::Pnt2d P, double S)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Circ2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_P, S);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Scaled(Macad::Occt::Pnt2d P, double S)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::gp_Circ2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::gp_Circ2d::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::gp_Circ2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Transformed(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::gp_Circ2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::gp_Circ2d::Translate(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::gp_Circ2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_V);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Translated(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::gp_Circ2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::gp_Circ2d::Translate(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	((::gp_Circ2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Translated(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::gp_Circ2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}




//---------------------------------------------------------------------
//  Class  gp_Elips2d
//---------------------------------------------------------------------

Macad::Occt::gp_Elips2d::gp_Elips2d()
	: BaseClass<::gp_Elips2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Elips2d();
}

Macad::Occt::gp_Elips2d::gp_Elips2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense)
	: BaseClass<::gp_Elips2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
	_NativeInstance = new ::gp_Elips2d(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, Sense);
}

Macad::Occt::gp_Elips2d::gp_Elips2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius)
	: BaseClass<::gp_Elips2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
	_NativeInstance = new ::gp_Elips2d(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, true);
}

Macad::Occt::gp_Elips2d::gp_Elips2d(Macad::Occt::Ax22d A, double MajorRadius, double MinorRadius)
	: BaseClass<::gp_Elips2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax22d> pp_A = &A;
	_NativeInstance = new ::gp_Elips2d(*(gp_Ax22d*)pp_A, MajorRadius, MinorRadius);
}

Macad::Occt::gp_Elips2d::gp_Elips2d(Macad::Occt::gp_Elips2d^ parameter1)
	: BaseClass<::gp_Elips2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Elips2d(*(::gp_Elips2d*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Elips2d::SetLocation(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Elips2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_P);
}

void Macad::Occt::gp_Elips2d::SetMajorRadius(double MajorRadius)
{
	((::gp_Elips2d*)_NativeInstance)->SetMajorRadius(MajorRadius);
}

void Macad::Occt::gp_Elips2d::SetMinorRadius(double MinorRadius)
{
	((::gp_Elips2d*)_NativeInstance)->SetMinorRadius(MinorRadius);
}

void Macad::Occt::gp_Elips2d::SetAxis(Macad::Occt::Ax22d A)
{
	pin_ptr<Macad::Occt::Ax22d> pp_A = &A;
	((::gp_Elips2d*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_A);
}

void Macad::Occt::gp_Elips2d::SetXAxis(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_Elips2d*)_NativeInstance)->SetXAxis(*(gp_Ax2d*)pp_A);
}

void Macad::Occt::gp_Elips2d::SetYAxis(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_Elips2d*)_NativeInstance)->SetYAxis(*(gp_Ax2d*)pp_A);
}

double Macad::Occt::gp_Elips2d::Area()
{
	return ((::gp_Elips2d*)_NativeInstance)->Area();
}

void Macad::Occt::gp_Elips2d::Coefficients(double% A, double% B, double% C, double% D, double% E, double% F)
{
	pin_ptr<double> pp_A = &A;
	pin_ptr<double> pp_B = &B;
	pin_ptr<double> pp_C = &C;
	pin_ptr<double> pp_D = &D;
	pin_ptr<double> pp_E = &E;
	pin_ptr<double> pp_F = &F;
	((::gp_Elips2d*)_NativeInstance)->Coefficients(*(Standard_Real*)pp_A, *(Standard_Real*)pp_B, *(Standard_Real*)pp_C, *(Standard_Real*)pp_D, *(Standard_Real*)pp_E, *(Standard_Real*)pp_F);
}

Macad::Occt::Ax2d Macad::Occt::gp_Elips2d::Directrix1()
{
	return Macad::Occt::Ax2d(((::gp_Elips2d*)_NativeInstance)->Directrix1());
}

Macad::Occt::Ax2d Macad::Occt::gp_Elips2d::Directrix2()
{
	return Macad::Occt::Ax2d(((::gp_Elips2d*)_NativeInstance)->Directrix2());
}

double Macad::Occt::gp_Elips2d::Eccentricity()
{
	return ((::gp_Elips2d*)_NativeInstance)->Eccentricity();
}

double Macad::Occt::gp_Elips2d::Focal()
{
	return ((::gp_Elips2d*)_NativeInstance)->Focal();
}

Macad::Occt::Pnt2d Macad::Occt::gp_Elips2d::Focus1()
{
	return Macad::Occt::Pnt2d(((::gp_Elips2d*)_NativeInstance)->Focus1());
}

Macad::Occt::Pnt2d Macad::Occt::gp_Elips2d::Focus2()
{
	return Macad::Occt::Pnt2d(((::gp_Elips2d*)_NativeInstance)->Focus2());
}

Macad::Occt::Pnt2d Macad::Occt::gp_Elips2d::Location()
{
	return Macad::Occt::Pnt2d(((::gp_Elips2d*)_NativeInstance)->Location());
}

double Macad::Occt::gp_Elips2d::MajorRadius()
{
	return ((::gp_Elips2d*)_NativeInstance)->MajorRadius();
}

double Macad::Occt::gp_Elips2d::MinorRadius()
{
	return ((::gp_Elips2d*)_NativeInstance)->MinorRadius();
}

double Macad::Occt::gp_Elips2d::Parameter()
{
	return ((::gp_Elips2d*)_NativeInstance)->Parameter();
}

Macad::Occt::Ax22d Macad::Occt::gp_Elips2d::Axis()
{
	return Macad::Occt::Ax22d(((::gp_Elips2d*)_NativeInstance)->Axis());
}

Macad::Occt::Ax2d Macad::Occt::gp_Elips2d::XAxis()
{
	return Macad::Occt::Ax2d(((::gp_Elips2d*)_NativeInstance)->XAxis());
}

Macad::Occt::Ax2d Macad::Occt::gp_Elips2d::YAxis()
{
	return Macad::Occt::Ax2d(((::gp_Elips2d*)_NativeInstance)->YAxis());
}

void Macad::Occt::gp_Elips2d::Reverse()
{
	((::gp_Elips2d*)_NativeInstance)->Reverse();
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Reversed()
{
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::gp_Elips2d*)_NativeInstance)->Reversed();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

bool Macad::Occt::gp_Elips2d::IsDirect()
{
	return ((::gp_Elips2d*)_NativeInstance)->IsDirect();
}

void Macad::Occt::gp_Elips2d::Mirror(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Elips2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_P);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Mirrored(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::gp_Elips2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

void Macad::Occt::gp_Elips2d::Mirror(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_Elips2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_A);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Mirrored(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::gp_Elips2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_A);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

void Macad::Occt::gp_Elips2d::Rotate(Macad::Occt::Pnt2d P, double Ang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Elips2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_P, Ang);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Rotated(Macad::Occt::Pnt2d P, double Ang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::gp_Elips2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_P, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

void Macad::Occt::gp_Elips2d::Scale(Macad::Occt::Pnt2d P, double S)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Elips2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_P, S);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Scaled(Macad::Occt::Pnt2d P, double S)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::gp_Elips2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

void Macad::Occt::gp_Elips2d::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::gp_Elips2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Transformed(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::gp_Elips2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

void Macad::Occt::gp_Elips2d::Translate(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::gp_Elips2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_V);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Translated(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::gp_Elips2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

void Macad::Occt::gp_Elips2d::Translate(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	((::gp_Elips2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Translated(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	::gp_Elips2d* _result = new ::gp_Elips2d();
	*_result = ((::gp_Elips2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}




//---------------------------------------------------------------------
//  Class  gp_Hypr2d
//---------------------------------------------------------------------

Macad::Occt::gp_Hypr2d::gp_Hypr2d()
	: BaseClass<::gp_Hypr2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Hypr2d();
}

Macad::Occt::gp_Hypr2d::gp_Hypr2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense)
	: BaseClass<::gp_Hypr2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
	_NativeInstance = new ::gp_Hypr2d(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, Sense);
}

Macad::Occt::gp_Hypr2d::gp_Hypr2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius)
	: BaseClass<::gp_Hypr2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_MajorAxis = &MajorAxis;
	_NativeInstance = new ::gp_Hypr2d(*(gp_Ax2d*)pp_MajorAxis, MajorRadius, MinorRadius, true);
}

Macad::Occt::gp_Hypr2d::gp_Hypr2d(Macad::Occt::Ax22d A, double MajorRadius, double MinorRadius)
	: BaseClass<::gp_Hypr2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax22d> pp_A = &A;
	_NativeInstance = new ::gp_Hypr2d(*(gp_Ax22d*)pp_A, MajorRadius, MinorRadius);
}

Macad::Occt::gp_Hypr2d::gp_Hypr2d(Macad::Occt::gp_Hypr2d^ parameter1)
	: BaseClass<::gp_Hypr2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Hypr2d(*(::gp_Hypr2d*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Hypr2d::SetLocation(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Hypr2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_P);
}

void Macad::Occt::gp_Hypr2d::SetMajorRadius(double MajorRadius)
{
	((::gp_Hypr2d*)_NativeInstance)->SetMajorRadius(MajorRadius);
}

void Macad::Occt::gp_Hypr2d::SetMinorRadius(double MinorRadius)
{
	((::gp_Hypr2d*)_NativeInstance)->SetMinorRadius(MinorRadius);
}

void Macad::Occt::gp_Hypr2d::SetAxis(Macad::Occt::Ax22d A)
{
	pin_ptr<Macad::Occt::Ax22d> pp_A = &A;
	((::gp_Hypr2d*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_A);
}

void Macad::Occt::gp_Hypr2d::SetXAxis(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_Hypr2d*)_NativeInstance)->SetXAxis(*(gp_Ax2d*)pp_A);
}

void Macad::Occt::gp_Hypr2d::SetYAxis(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_Hypr2d*)_NativeInstance)->SetYAxis(*(gp_Ax2d*)pp_A);
}

Macad::Occt::Ax2d Macad::Occt::gp_Hypr2d::Asymptote1()
{
	return Macad::Occt::Ax2d(((::gp_Hypr2d*)_NativeInstance)->Asymptote1());
}

Macad::Occt::Ax2d Macad::Occt::gp_Hypr2d::Asymptote2()
{
	return Macad::Occt::Ax2d(((::gp_Hypr2d*)_NativeInstance)->Asymptote2());
}

void Macad::Occt::gp_Hypr2d::Coefficients(double% A, double% B, double% C, double% D, double% E, double% F)
{
	pin_ptr<double> pp_A = &A;
	pin_ptr<double> pp_B = &B;
	pin_ptr<double> pp_C = &C;
	pin_ptr<double> pp_D = &D;
	pin_ptr<double> pp_E = &E;
	pin_ptr<double> pp_F = &F;
	((::gp_Hypr2d*)_NativeInstance)->Coefficients(*(Standard_Real*)pp_A, *(Standard_Real*)pp_B, *(Standard_Real*)pp_C, *(Standard_Real*)pp_D, *(Standard_Real*)pp_E, *(Standard_Real*)pp_F);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::ConjugateBranch1()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::gp_Hypr2d*)_NativeInstance)->ConjugateBranch1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::ConjugateBranch2()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::gp_Hypr2d*)_NativeInstance)->ConjugateBranch2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::Ax2d Macad::Occt::gp_Hypr2d::Directrix1()
{
	return Macad::Occt::Ax2d(((::gp_Hypr2d*)_NativeInstance)->Directrix1());
}

Macad::Occt::Ax2d Macad::Occt::gp_Hypr2d::Directrix2()
{
	return Macad::Occt::Ax2d(((::gp_Hypr2d*)_NativeInstance)->Directrix2());
}

double Macad::Occt::gp_Hypr2d::Eccentricity()
{
	return ((::gp_Hypr2d*)_NativeInstance)->Eccentricity();
}

double Macad::Occt::gp_Hypr2d::Focal()
{
	return ((::gp_Hypr2d*)_NativeInstance)->Focal();
}

Macad::Occt::Pnt2d Macad::Occt::gp_Hypr2d::Focus1()
{
	return Macad::Occt::Pnt2d(((::gp_Hypr2d*)_NativeInstance)->Focus1());
}

Macad::Occt::Pnt2d Macad::Occt::gp_Hypr2d::Focus2()
{
	return Macad::Occt::Pnt2d(((::gp_Hypr2d*)_NativeInstance)->Focus2());
}

Macad::Occt::Pnt2d Macad::Occt::gp_Hypr2d::Location()
{
	return Macad::Occt::Pnt2d(((::gp_Hypr2d*)_NativeInstance)->Location());
}

double Macad::Occt::gp_Hypr2d::MajorRadius()
{
	return ((::gp_Hypr2d*)_NativeInstance)->MajorRadius();
}

double Macad::Occt::gp_Hypr2d::MinorRadius()
{
	return ((::gp_Hypr2d*)_NativeInstance)->MinorRadius();
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::OtherBranch()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::gp_Hypr2d*)_NativeInstance)->OtherBranch();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

double Macad::Occt::gp_Hypr2d::Parameter()
{
	return ((::gp_Hypr2d*)_NativeInstance)->Parameter();
}

Macad::Occt::Ax22d Macad::Occt::gp_Hypr2d::Axis()
{
	return Macad::Occt::Ax22d(((::gp_Hypr2d*)_NativeInstance)->Axis());
}

Macad::Occt::Ax2d Macad::Occt::gp_Hypr2d::XAxis()
{
	return Macad::Occt::Ax2d(((::gp_Hypr2d*)_NativeInstance)->XAxis());
}

Macad::Occt::Ax2d Macad::Occt::gp_Hypr2d::YAxis()
{
	return Macad::Occt::Ax2d(((::gp_Hypr2d*)_NativeInstance)->YAxis());
}

void Macad::Occt::gp_Hypr2d::Reverse()
{
	((::gp_Hypr2d*)_NativeInstance)->Reverse();
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Reversed()
{
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::gp_Hypr2d*)_NativeInstance)->Reversed();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

bool Macad::Occt::gp_Hypr2d::IsDirect()
{
	return ((::gp_Hypr2d*)_NativeInstance)->IsDirect();
}

void Macad::Occt::gp_Hypr2d::Mirror(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Hypr2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_P);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Mirrored(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::gp_Hypr2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

void Macad::Occt::gp_Hypr2d::Mirror(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_Hypr2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_A);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Mirrored(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::gp_Hypr2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_A);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

void Macad::Occt::gp_Hypr2d::Rotate(Macad::Occt::Pnt2d P, double Ang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Hypr2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_P, Ang);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Rotated(Macad::Occt::Pnt2d P, double Ang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::gp_Hypr2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_P, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

void Macad::Occt::gp_Hypr2d::Scale(Macad::Occt::Pnt2d P, double S)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Hypr2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_P, S);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Scaled(Macad::Occt::Pnt2d P, double S)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::gp_Hypr2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

void Macad::Occt::gp_Hypr2d::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::gp_Hypr2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Transformed(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::gp_Hypr2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

void Macad::Occt::gp_Hypr2d::Translate(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::gp_Hypr2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_V);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Translated(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::gp_Hypr2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

void Macad::Occt::gp_Hypr2d::Translate(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	((::gp_Hypr2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Translated(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	::gp_Hypr2d* _result = new ::gp_Hypr2d();
	*_result = ((::gp_Hypr2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}




//---------------------------------------------------------------------
//  Class  gp_Parab2d
//---------------------------------------------------------------------

Macad::Occt::gp_Parab2d::gp_Parab2d()
	: BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Parab2d();
}

Macad::Occt::gp_Parab2d::gp_Parab2d(Macad::Occt::Ax2d theMirrorAxis, double theFocalLength, bool theSense)
	: BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_theMirrorAxis = &theMirrorAxis;
	_NativeInstance = new ::gp_Parab2d(*(gp_Ax2d*)pp_theMirrorAxis, theFocalLength, theSense);
}

Macad::Occt::gp_Parab2d::gp_Parab2d(Macad::Occt::Ax2d theMirrorAxis, double theFocalLength)
	: BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_theMirrorAxis = &theMirrorAxis;
	_NativeInstance = new ::gp_Parab2d(*(gp_Ax2d*)pp_theMirrorAxis, theFocalLength, true);
}

Macad::Occt::gp_Parab2d::gp_Parab2d(Macad::Occt::Ax22d theAxes, double theFocalLength)
	: BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax22d> pp_theAxes = &theAxes;
	_NativeInstance = new ::gp_Parab2d(*(gp_Ax22d*)pp_theAxes, theFocalLength);
}

Macad::Occt::gp_Parab2d::gp_Parab2d(Macad::Occt::Ax2d theDirectrix, Macad::Occt::Pnt2d theFocus, bool theSense)
	: BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_theDirectrix = &theDirectrix;
	pin_ptr<Macad::Occt::Pnt2d> pp_theFocus = &theFocus;
	_NativeInstance = new ::gp_Parab2d(*(gp_Ax2d*)pp_theDirectrix, *(gp_Pnt2d*)pp_theFocus, theSense);
}

Macad::Occt::gp_Parab2d::gp_Parab2d(Macad::Occt::Ax2d theDirectrix, Macad::Occt::Pnt2d theFocus)
	: BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Ax2d> pp_theDirectrix = &theDirectrix;
	pin_ptr<Macad::Occt::Pnt2d> pp_theFocus = &theFocus;
	_NativeInstance = new ::gp_Parab2d(*(gp_Ax2d*)pp_theDirectrix, *(gp_Pnt2d*)pp_theFocus, true);
}

Macad::Occt::gp_Parab2d::gp_Parab2d(Macad::Occt::gp_Parab2d^ parameter1)
	: BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_Parab2d(*(::gp_Parab2d*)parameter1->NativeInstance);
}

void Macad::Occt::gp_Parab2d::SetFocal(double Focal)
{
	((::gp_Parab2d*)_NativeInstance)->SetFocal(Focal);
}

void Macad::Occt::gp_Parab2d::SetLocation(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Parab2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_P);
}

void Macad::Occt::gp_Parab2d::SetMirrorAxis(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_Parab2d*)_NativeInstance)->SetMirrorAxis(*(gp_Ax2d*)pp_A);
}

void Macad::Occt::gp_Parab2d::SetAxis(Macad::Occt::Ax22d A)
{
	pin_ptr<Macad::Occt::Ax22d> pp_A = &A;
	((::gp_Parab2d*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_A);
}

void Macad::Occt::gp_Parab2d::Coefficients(double% A, double% B, double% C, double% D, double% E, double% F)
{
	pin_ptr<double> pp_A = &A;
	pin_ptr<double> pp_B = &B;
	pin_ptr<double> pp_C = &C;
	pin_ptr<double> pp_D = &D;
	pin_ptr<double> pp_E = &E;
	pin_ptr<double> pp_F = &F;
	((::gp_Parab2d*)_NativeInstance)->Coefficients(*(Standard_Real*)pp_A, *(Standard_Real*)pp_B, *(Standard_Real*)pp_C, *(Standard_Real*)pp_D, *(Standard_Real*)pp_E, *(Standard_Real*)pp_F);
}

Macad::Occt::Ax2d Macad::Occt::gp_Parab2d::Directrix()
{
	return Macad::Occt::Ax2d(((::gp_Parab2d*)_NativeInstance)->Directrix());
}

double Macad::Occt::gp_Parab2d::Focal()
{
	return ((::gp_Parab2d*)_NativeInstance)->Focal();
}

Macad::Occt::Pnt2d Macad::Occt::gp_Parab2d::Focus()
{
	return Macad::Occt::Pnt2d(((::gp_Parab2d*)_NativeInstance)->Focus());
}

Macad::Occt::Pnt2d Macad::Occt::gp_Parab2d::Location()
{
	return Macad::Occt::Pnt2d(((::gp_Parab2d*)_NativeInstance)->Location());
}

Macad::Occt::Ax2d Macad::Occt::gp_Parab2d::MirrorAxis()
{
	return Macad::Occt::Ax2d(((::gp_Parab2d*)_NativeInstance)->MirrorAxis());
}

Macad::Occt::Ax22d Macad::Occt::gp_Parab2d::Axis()
{
	return Macad::Occt::Ax22d(((::gp_Parab2d*)_NativeInstance)->Axis());
}

double Macad::Occt::gp_Parab2d::Parameter()
{
	return ((::gp_Parab2d*)_NativeInstance)->Parameter();
}

void Macad::Occt::gp_Parab2d::Reverse()
{
	((::gp_Parab2d*)_NativeInstance)->Reverse();
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Reversed()
{
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::gp_Parab2d*)_NativeInstance)->Reversed();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

bool Macad::Occt::gp_Parab2d::IsDirect()
{
	return ((::gp_Parab2d*)_NativeInstance)->IsDirect();
}

void Macad::Occt::gp_Parab2d::Mirror(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Parab2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_P);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Mirrored(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::gp_Parab2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

void Macad::Occt::gp_Parab2d::Mirror(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	((::gp_Parab2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_A);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Mirrored(Macad::Occt::Ax2d A)
{
	pin_ptr<Macad::Occt::Ax2d> pp_A = &A;
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::gp_Parab2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_A);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

void Macad::Occt::gp_Parab2d::Rotate(Macad::Occt::Pnt2d P, double Ang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Parab2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_P, Ang);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Rotated(Macad::Occt::Pnt2d P, double Ang)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::gp_Parab2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_P, Ang);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

void Macad::Occt::gp_Parab2d::Scale(Macad::Occt::Pnt2d P, double S)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	((::gp_Parab2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_P, S);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Scaled(Macad::Occt::Pnt2d P, double S)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::gp_Parab2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_P, S);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

void Macad::Occt::gp_Parab2d::Transform(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	((::gp_Parab2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_T);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Transformed(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::gp_Parab2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

void Macad::Occt::gp_Parab2d::Translate(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	((::gp_Parab2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_V);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Translated(Macad::Occt::Vec2d V)
{
	pin_ptr<Macad::Occt::Vec2d> pp_V = &V;
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::gp_Parab2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_V);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

void Macad::Occt::gp_Parab2d::Translate(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	((::gp_Parab2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Translated(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt2d> pp_P2 = &P2;
	::gp_Parab2d* _result = new ::gp_Parab2d();
	*_result = ((::gp_Parab2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_P1, *(gp_Pnt2d*)pp_P2);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}




//---------------------------------------------------------------------
//  Class  gp_VectorWithNullMagnitude
//---------------------------------------------------------------------

Macad::Occt::gp_VectorWithNullMagnitude::gp_VectorWithNullMagnitude()
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::gp_VectorWithNullMagnitude();
}

Macad::Occt::gp_VectorWithNullMagnitude::gp_VectorWithNullMagnitude(System::String^ theMessage)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::gp_VectorWithNullMagnitude(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::gp_VectorWithNullMagnitude::gp_VectorWithNullMagnitude(Macad::Occt::gp_VectorWithNullMagnitude^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::gp_VectorWithNullMagnitude(*(::gp_VectorWithNullMagnitude*)parameter1->NativeInstance);
}

void Macad::Occt::gp_VectorWithNullMagnitude::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::gp_VectorWithNullMagnitude::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::gp_VectorWithNullMagnitude::Raise()
{
	::gp_VectorWithNullMagnitude::Raise("");
}

Macad::Occt::gp_VectorWithNullMagnitude^ Macad::Occt::gp_VectorWithNullMagnitude::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::gp_VectorWithNullMagnitude) _result;
	_result = ::gp_VectorWithNullMagnitude::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::gp_VectorWithNullMagnitude::CreateDowncasted( _result.get());
}

Macad::Occt::gp_VectorWithNullMagnitude^ Macad::Occt::gp_VectorWithNullMagnitude::NewInstance()
{
	Handle(::gp_VectorWithNullMagnitude) _result;
	_result = ::gp_VectorWithNullMagnitude::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::gp_VectorWithNullMagnitude::CreateDowncasted( _result.get());
}


Macad::Occt::gp_VectorWithNullMagnitude^ Macad::Occt::gp_VectorWithNullMagnitude::CreateDowncasted(::gp_VectorWithNullMagnitude* instance)
{
	return gcnew Macad::Occt::gp_VectorWithNullMagnitude( instance );
}



//---------------------------------------------------------------------
//  Class  gp_QuaternionNLerp
//---------------------------------------------------------------------

Macad::Occt::gp_QuaternionNLerp::gp_QuaternionNLerp()
	: BaseClass<::gp_QuaternionNLerp>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_QuaternionNLerp();
}

Macad::Occt::gp_QuaternionNLerp::gp_QuaternionNLerp(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd)
	: BaseClass<::gp_QuaternionNLerp>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
	pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
	_NativeInstance = new ::gp_QuaternionNLerp(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

Macad::Occt::gp_QuaternionNLerp::gp_QuaternionNLerp(Macad::Occt::gp_QuaternionNLerp^ parameter1)
	: BaseClass<::gp_QuaternionNLerp>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_QuaternionNLerp(*(::gp_QuaternionNLerp*)parameter1->NativeInstance);
}

Macad::Occt::Quaternion Macad::Occt::gp_QuaternionNLerp::Interpolate(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd, double theT)
{
	pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
	pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
	return Macad::Occt::Quaternion(::gp_QuaternionNLerp::Interpolate(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd, theT));
}

void Macad::Occt::gp_QuaternionNLerp::Init(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd)
{
	pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
	pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
	((::gp_QuaternionNLerp*)_NativeInstance)->Init(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

void Macad::Occt::gp_QuaternionNLerp::InitFromUnit(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd)
{
	pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
	pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
	((::gp_QuaternionNLerp*)_NativeInstance)->InitFromUnit(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

void Macad::Occt::gp_QuaternionNLerp::Interpolate(double theT, Macad::Occt::Quaternion% theResultQ)
{
	pin_ptr<Macad::Occt::Quaternion> pp_theResultQ = &theResultQ;
	((::gp_QuaternionNLerp*)_NativeInstance)->Interpolate(theT, *(gp_Quaternion*)pp_theResultQ);
}




//---------------------------------------------------------------------
//  Class  gp_QuaternionSLerp
//---------------------------------------------------------------------

Macad::Occt::gp_QuaternionSLerp::gp_QuaternionSLerp()
	: BaseClass<::gp_QuaternionSLerp>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_QuaternionSLerp();
}

Macad::Occt::gp_QuaternionSLerp::gp_QuaternionSLerp(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd)
	: BaseClass<::gp_QuaternionSLerp>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
	pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
	_NativeInstance = new ::gp_QuaternionSLerp(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

Macad::Occt::gp_QuaternionSLerp::gp_QuaternionSLerp(Macad::Occt::gp_QuaternionSLerp^ parameter1)
	: BaseClass<::gp_QuaternionSLerp>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::gp_QuaternionSLerp(*(::gp_QuaternionSLerp*)parameter1->NativeInstance);
}

Macad::Occt::Quaternion Macad::Occt::gp_QuaternionSLerp::Interpolate(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd, double theT)
{
	pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
	pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
	return Macad::Occt::Quaternion(::gp_QuaternionSLerp::Interpolate(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd, theT));
}

void Macad::Occt::gp_QuaternionSLerp::Init(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd)
{
	pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
	pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
	((::gp_QuaternionSLerp*)_NativeInstance)->Init(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

void Macad::Occt::gp_QuaternionSLerp::InitFromUnit(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd)
{
	pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
	pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
	((::gp_QuaternionSLerp*)_NativeInstance)->InitFromUnit(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

void Macad::Occt::gp_QuaternionSLerp::Interpolate(double theT, Macad::Occt::Quaternion% theResultQ)
{
	pin_ptr<Macad::Occt::Quaternion> pp_theResultQ = &theResultQ;
	((::gp_QuaternionSLerp*)_NativeInstance)->Interpolate(theT, *(gp_Quaternion*)pp_theResultQ);
}



