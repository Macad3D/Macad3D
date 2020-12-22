#pragma once

#include <gp_Mat.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Pnt;
		value struct Vec;
		value struct Dir;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Mat
		{
		private:
			XYZ	_Row1;
			XYZ	_Row2;
			XYZ	_Row3;

		public:

			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static Mat Identity = Mat(::gp_Mat());

			//--------------------------------------------------------------------------------------------------

			Mat(const ::gp_Mat& native);
			Mat(double a11, double a12, double a13, double a21, double a22, double a23, double a31, double a32, double a33);
			Mat(XYZ Col1, XYZ Col2, XYZ Col3);

			void SetCol(int Col, XYZ Value);
			void SetCols(XYZ Col1, XYZ Col2, XYZ Col3);
			void SetCross(XYZ Ref);
			void SetDiagonal(double X1, double X2, double X3);
			void SetDot(XYZ Ref);
			void SetIdentity();
			void SetRotation(XYZ Axis, double Ang);
			void SetRow(int Row, XYZ Value);
			void SetRows(XYZ Row1, XYZ Row2, XYZ Row3);
			void SetScale(double S);
			void SetValue(int Row, int Col, double Value);
			XYZ Column(int Col);
			double Determinant();
			XYZ Diagonal();
			XYZ Row(int Row);
			double Value(int Row, int Col);
			bool IsSingular();
			void Add(Mat Other);
			Mat Added(Mat Other);
			void Divide(double Scalar);
			Mat Divided(double Scalar);
			void Invert();
			Mat Inverted();
			Mat Multiplied(Mat Other);
			void Multiply(Mat Other);
			void PreMultiply(Mat Other);
			Mat Multiplied(double Scalar);
			void Multiply(double Scalar);
			void Power(int N);
			Mat Powered(int N);
			void Subtract(Mat Other);
			Mat Subtracted(Mat Other);
			void Transpose();
			Mat Transposed();

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Mat Left, Mat Right) { return Left.Equals(Right); }
			static bool operator != (Mat Left, Mat Right) { return !Left.Equals(Right); }
			static Mat operator + (Mat Left, Mat Right) { return Left.Added(Right); }
			static Mat operator - (Mat Left, Mat Right) { return Left.Subtracted(Right); }
			static Mat operator - (Mat Left) { return Left.Inverted(); }
			static Mat operator * (Mat Left, double Right) { return Left.Multiplied(Right); }
			static Mat operator * (Mat Left, Mat Right) { return Left.Multiplied(Right); }
			static Mat operator / (Mat Left, double Right) { return Left.Divided(Right); }

		};
	} // namespace Occt
} // namespace Macad
