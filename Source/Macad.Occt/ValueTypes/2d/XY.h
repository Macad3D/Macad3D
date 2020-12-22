#pragma once

#include <gp_XY.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Mat2d;
		value struct Vec2d;
		value struct Dir2d;
		value struct Pnt2d;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct XY
		{
		public:
			double X;
			double Y;

			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static XY Zero = XY(0, 0);

			//--------------------------------------------------------------------------------------------------

			XY(const ::gp_XY& native);
			XY(double x, double y);
			Pnt2d ToPnt();
			Vec2d ToVec();
			Dir2d ToDir();

			double Modulus();
			double SquareModulus();
			bool IsEqual(XY Other, double Tolerance);
			void Add(XY Other);
			XY Added(XY Other);
			double Crossed(XY Right);
			double CrossMagnitude(XY Right);
			double CrossSquareMagnitude(XY Right);
			void Divide(double Scalar);
			XY Divided(double Scalar);
			double Dot(XY Other);
			void Multiply(double Scalar);
			void Multiply(XY Other);
			void Multiply(Mat2d Matrix);
			XY Multiplied(double Scalar);
			XY Multiplied(XY Other);
			XY Multiplied(Mat2d Matrix);
			void Normalize();
			XY Normalized();
			void Reverse();
			XY Reversed();
			void Subtract(XY Right);
			XY Subtracted(XY Right);
			void SetLinearForm(double A1, XY XY1, double A2, XY XY2, XY XY3);
			void SetLinearForm(double A1, XY XY1, double A2, XY XY2);
			void SetLinearForm(double A1, XY XY1, XY XY2);
			void SetLinearForm(XY XY1, XY XY2);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (XY Left, XY Right) { return Left.Equals(Right); }
			static bool operator != (XY Left, XY Right) { return !Left.Equals(Right); }
			static XY operator + (XY Left, XY Right) { return Left.Added(Right); }
			static XY operator - (XY Left, XY Right) { return Left.Subtracted(Right); }
			static XY operator * (XY Left, double Right) { return Left.Multiplied(Right); }
			static XY operator * (XY Left, XY Right) { return Left.Multiplied(Right); }
			static XY operator * (XY Left, Mat2d Right);
			static XY operator / (XY Left, double Right) { return Left.Divided(Right); }
		};
	} // namespace Occt
} // namespace Macad
