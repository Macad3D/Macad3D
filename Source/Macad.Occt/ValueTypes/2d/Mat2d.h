#pragma once

#include <gp_Mat2d.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Pnt2d;
		value struct Vec2d;
		value struct Dir2d;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Mat2d
		{
		private:
			XY	_Row1;
			XY	_Row2;

		public:
			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static Mat2d Identity = Mat2d(::gp_Mat2d());

			//--------------------------------------------------------------------------------------------------

			Mat2d(const ::gp_Mat2d& native);
			Mat2d(XY Col1, XY Col2);

			void SetCol(int Col, XY Value);
			void SetCols(XY Col1, XY Col2);
			void SetDiagonal(double X1, double X2);
			void SetIdentity();
			void SetRotation(double Ang);
			void SetRow(int Row, XY Value);
			void SetRows(XY Row1, XY Row2);
			void SetScale(double S);
			void SetValue(int Row, int Col, double Value);
			XY Column(int Col);
			double Determinant();
			XY Diagonal();
			XY Row(int Row);
			double Value(int Row, int Col);
			bool IsSingular();
			void Add(Mat2d Other);
			Mat2d Added(Mat2d Other);
			void Divide(double Scalar);
			Mat2d Divided(double Scalar);
			void Invert();
			Mat2d Inverted();
			Mat2d Multiplied(Mat2d Other);
			void Multiply(Mat2d Other);
			void PreMultiply(Mat2d Other);
			Mat2d Multiplied(double Scalar);
			void Multiply(double Scalar);
			void Power(int N);
			Mat2d Powered(int N);
			void Subtract(Mat2d Other);
			Mat2d Subtracted(Mat2d Other);
			void Transpose();
			Mat2d Transposed();

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Mat2d Left, Mat2d Right) { return Left.Equals(Right); }
			static bool operator != (Mat2d Left, Mat2d Right) { return !Left.Equals(Right); }
			static Mat2d operator + (Mat2d Left, Mat2d Right) { return Left.Added(Right); }
			static Mat2d operator - (Mat2d Left, Mat2d Right) { return Left.Subtracted(Right); }
			static Mat2d operator - (Mat2d Left) { return Left.Inverted(); }
			static Mat2d operator * (Mat2d Left, double Right) { return Left.Multiplied(Right); }
			static Mat2d operator * (Mat2d Left, Mat2d Right) { return Left.Multiplied(Right); }
			static Mat2d operator / (Mat2d Left, double Right) { return Left.Divided(Right); }

		};
	} // namespace Occt
} // namespace Macad
