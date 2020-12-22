#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Mat2d::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Mat2d^)(obj);
	return other->_Row1.Equals(_Row1) && other->_Row2.Equals(_Row2);
}

int Mat2d::GetHashCode()
{
	return _Row1.GetHashCode() ^ _Row2.GetHashCode();
}

String^ Mat2d::ToString()
{
	return String::Format("({0},{1})", _Row1, _Row2);
}

Mat2d::Mat2d(const ::gp_Mat2d& native)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	memcpy(this_ptr, &native, sizeof(Mat2d));
}

Mat2d::Mat2d(XY Col1, XY Col2)
{
	_Row1 = XY(Col1.X, Col2.X);
	_Row2 = XY(Col1.Y, Col2.Y);
}

void Mat2d::SetCol(int Col, XY Value)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	STRUCT_PIN(Value, XY, gp_XY);
	this_ptr->SetCol(Col, *Value_ptr);
}

void Mat2d::SetCols(XY Col1, XY Col2)
{
	_Row1 = XY(Col1.X, Col2.X);
	_Row2 = XY(Col1.Y, Col2.Y);
}

void Mat2d::SetDiagonal(double X1, double X2)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	this_ptr->SetDiagonal(X1, X2);
}

void Mat2d::SetIdentity()
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	this_ptr->SetIdentity();
}

void Mat2d::SetRotation(double Ang)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	this_ptr->SetRotation(Ang);
}

void Mat2d::SetRow(int Row, XY Value)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	STRUCT_PIN(Value, XY, gp_XY);
	this_ptr->SetRow(Row, *Value_ptr);
}

void Mat2d::SetRows(XY Row1, XY Row2)
{
	_Row1 = Row1;
	_Row2 = Row2;
}

void Mat2d::SetScale(double S)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	this_ptr->SetScale(S);
}

void Mat2d::SetValue(int Row, int Col, double Value)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	this_ptr->SetValue(Row, Col, Value);
}

XY Mat2d::Column(int Col)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	return XY(this_ptr->Column(Col));
}

double Mat2d::Determinant()
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	return this_ptr->Determinant();
}

XY Mat2d::Diagonal()
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	return XY(this_ptr->Diagonal());
}

XY Mat2d::Row(int Row)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	return XY(this_ptr->Row(Row));
}

double Mat2d::Value(int Row, int Col)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	return this_ptr->Value(Row, Col);
}

bool Mat2d::IsSingular()
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	return this_ptr->IsSingular();
}

void Mat2d::Add(Mat2d Other)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	STRUCT_PIN(Other, Mat2d, gp_Mat2d);
	this_ptr->Add(*Other_ptr);
}

Mat2d Mat2d::Added(Mat2d Other)
{
	Mat2d A = *this;
	A.Add(Other);
	return A;
}

void Mat2d::Divide(double Scalar)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	this_ptr->Divide(Scalar);
}

Mat2d Mat2d::Divided(double Scalar)
{
	Mat2d A = *this;
	A.Divide(Scalar);
	return A;
}

void Mat2d::Invert()
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	this_ptr->Invert();
}

Mat2d Mat2d::Inverted()
{
	Mat2d A = *this;
	A.Invert();
	return A;
}

void Mat2d::Multiply(Mat2d Other)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	STRUCT_PIN(Other, Mat2d, gp_Mat2d);
	this_ptr->Multiply(*Other_ptr);
}

Mat2d Mat2d::Multiplied(Mat2d Other)
{
	Mat2d A = *this;
	A.Multiply(Other);
	return A;
}

void Mat2d::PreMultiply(Mat2d Other)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	STRUCT_PIN(Other, Mat2d, gp_Mat2d);
	this_ptr->PreMultiply(*Other_ptr);
}

void Mat2d::Multiply(double Scalar)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	this_ptr->Multiply(Scalar);
}

Mat2d Mat2d::Multiplied(double Scalar)
{
	Mat2d A = *this;
	A.Multiply(Scalar);
	return A;
}

void Mat2d::Power(int N)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	this_ptr->Power(N);
}

Mat2d Mat2d::Powered(int N)
{
	Mat2d A = *this;
	A.Power(N);
	return A;
}

void Mat2d::Subtract(Mat2d Other)
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	STRUCT_PIN(Other, Mat2d, gp_Mat2d);
	this_ptr->Subtract(*Other_ptr);
}

Mat2d Mat2d::Subtracted(Mat2d Other)
{
	Mat2d A = *this;
	A.Subtract(Other);
	return A;
}

void Mat2d::Transpose()
{
	STRUCT_PINREF(this, Mat2d, gp_Mat2d);
	this_ptr->Transpose();
}

Mat2d Mat2d::Transposed()
{
	Mat2d A = *this;
	A.Transpose();
	return A;
}

