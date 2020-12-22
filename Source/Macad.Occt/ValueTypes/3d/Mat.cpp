#include "OcctPCH.h"

using namespace System;
using namespace Macad::Occt;


bool Mat::Equals(Object^ obj)
{
	if (obj == nullptr || GetType() != obj->GetType())
		return false;

	auto other = (Mat^)(obj);
	return other->_Row1.Equals(_Row1) && other->_Row2.Equals(_Row2) && other->_Row3.Equals(_Row3);
}

int Mat::GetHashCode()
{
	return _Row1.GetHashCode() ^ _Row2.GetHashCode() ^ _Row3.GetHashCode();
}

String^ Mat::ToString()
{
	return String::Format("({0},{1},{2})", _Row1, _Row2, _Row3);
}

Mat::Mat(const ::gp_Mat& native)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	memcpy(this_ptr, &native, sizeof(Mat));
}

Mat::Mat(double a11, double a12, double a13, double a21, double a22, double a23, double a31, double a32, double a33)
{
	_Row1 = XYZ(a11, a12, a13);
	_Row2 = XYZ(a21, a22, a23);
	_Row3 = XYZ(a31, a32, a33);
}

Mat::Mat(XYZ Col1, XYZ Col2, XYZ Col3)
{
	_Row1 = XYZ(Col1.X, Col2.X, Col3.X);
	_Row2 = XYZ(Col1.Y, Col2.Y, Col3.Y);
	_Row3 = XYZ(Col1.Z, Col2.Z, Col3.Z);
}

void Mat::SetCol(int Col, XYZ Value)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	STRUCT_PIN(Value, XYZ, gp_XYZ);
	this_ptr->SetCol(Col, *Value_ptr);
}

void Mat::SetCols(XYZ Col1, XYZ Col2, XYZ Col3)
{
	_Row1 = XYZ(Col1.X, Col2.X, Col3.X);
	_Row2 = XYZ(Col1.Y, Col2.Y, Col3.Y);
	_Row3 = XYZ(Col1.Z, Col2.Z, Col3.Z);
}

void Mat::SetCross(XYZ Ref)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	STRUCT_PIN(Ref, XYZ, gp_XYZ);
	this_ptr->SetCross(*Ref_ptr);
}

void Mat::SetDiagonal(double X1, double X2, double X3)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	this_ptr->SetDiagonal(X1, X2, X3);
}

void Mat::SetDot(XYZ Ref)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	STRUCT_PIN(Ref, XYZ, gp_XYZ);
	this_ptr->SetCross(*Ref_ptr);
}

void Mat::SetIdentity()
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	this_ptr->SetIdentity();
}

void Mat::SetRotation(XYZ Axis, double Ang)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	STRUCT_PIN(Axis, XYZ, gp_XYZ);
	this_ptr->SetRotation(*Axis_ptr, Ang);
}

void Mat::SetRow(int Row, XYZ Value)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	STRUCT_PIN(Value, XYZ, gp_XYZ);
	this_ptr->SetRow(Row, *Value_ptr);
}

void Mat::SetRows(XYZ Row1, XYZ Row2, XYZ Row3)
{
	_Row1 = Row1;
	_Row2 = Row2;
	_Row3 = Row3;
}

void Mat::SetScale(double S)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	this_ptr->SetScale(S);
}

void Mat::SetValue(int Row, int Col, double Value)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	this_ptr->SetValue(Row, Col, Value);
}

XYZ Mat::Column(int Col)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	return XYZ(this_ptr->Column(Col));
}

double Mat::Determinant()
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	return this_ptr->Determinant();
}

XYZ Mat::Diagonal()
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	return XYZ(this_ptr->Diagonal());
}

XYZ Mat::Row(int Row)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	return XYZ(this_ptr->Row(Row));
}

double Mat::Value(int Row, int Col)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	return this_ptr->Value(Row, Col);
}

bool Mat::IsSingular()
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	return this_ptr->IsSingular();
}

void Mat::Add(Mat Other)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	STRUCT_PIN(Other, Mat, gp_Mat);
	this_ptr->Add(*Other_ptr);
}

Mat Mat::Added(Mat Other)
{
	Mat A = *this;
	A.Add(Other);
	return A;
}

void Mat::Divide(double Scalar)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	this_ptr->Divide(Scalar);
}

Mat Mat::Divided(double Scalar)
{
	Mat A = *this;
	A.Divide(Scalar);
	return A;
}

void Mat::Invert()
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	this_ptr->Invert();
}

Mat Mat::Inverted()
{
	Mat A = *this;
	A.Invert();
	return A;
}

void Mat::Multiply(Mat Other)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	STRUCT_PIN(Other, Mat, gp_Mat);
	this_ptr->Multiply(*Other_ptr);
}

Mat Mat::Multiplied(Mat Other)
{
	Mat A = *this;
	A.Multiply(Other);
	return A;
}

void Mat::PreMultiply(Mat Other)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	STRUCT_PIN(Other, Mat, gp_Mat);
	this_ptr->PreMultiply(*Other_ptr);
}

void Mat::Multiply(double Scalar)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	this_ptr->Multiply(Scalar);
}

Mat Mat::Multiplied(double Scalar)
{
	Mat A = *this;
	A.Multiply(Scalar);
	return A;
}

void Mat::Power(int N)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	this_ptr->Power(N);
}

Mat Mat::Powered(int N)
{
	Mat A = *this;
	A.Power(N);
	return A;
}

void Mat::Subtract(Mat Other)
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	STRUCT_PIN(Other, Mat, gp_Mat);
	this_ptr->Subtract(*Other_ptr);
}

Mat Mat::Subtracted(Mat Other)
{
	Mat A = *this;
	A.Subtract(Other);
	return A;
}

void Mat::Transpose()
{
	STRUCT_PINREF(this, Mat, gp_Mat);
	this_ptr->Transpose();
}

Mat Mat::Transposed()
{
	Mat A = *this;
	A.Transpose();
	return A;
}

