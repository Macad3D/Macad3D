#pragma once

#include <gp_XYZ.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Mat;
		value struct Vec;
		value struct Dir;
		value struct Pnt;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct XYZ
		{
		public:
			double X;
			double Y;
			double Z;

			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static XYZ Zero = XYZ(0, 0, 0);

			//--------------------------------------------------------------------------------------------------

			XYZ(const ::gp_XYZ& native);
			XYZ(double x, double y, double z);
			Pnt ToPnt();
			Vec ToVec();
			Dir ToDir();

			double Modulus();
			double SquareModulus();
			bool IsEqual(XYZ Other, double Tolerance);
			void Add(XYZ Other);
			XYZ Added(XYZ Other);
			void Cross(XYZ Right);
			XYZ Crossed(XYZ Right);
			double CrossMagnitude(XYZ Right);
			double CrossSquareMagnitude(XYZ Right);
			void CrossCross(XYZ Coord1, XYZ Coord2);
			XYZ CrossCrossed(XYZ Coord1, XYZ Coord2);
			void Divide(double Scalar);
			XYZ Divided(double Scalar);
			double Dot(XYZ Other);
			double DotCross(XYZ Coord1, XYZ Coord2);
			void Multiply(double Scalar);
			void Multiply(XYZ Other);
			void Multiply(Mat Matrix);
			XYZ Multiplied(double Scalar);
			XYZ Multiplied(XYZ Other);
			XYZ Multiplied(Mat Matrix);
			void Normalize();
			XYZ Normalized();
			void Reverse();
			XYZ Reversed();
			void Subtract(XYZ Right);
			XYZ Subtracted(XYZ Right);
			void SetLinearForm(double A1, XYZ XYZ1, double A2, XYZ XYZ2, double A3, XYZ XYZ3, XYZ XYZ4);
			void SetLinearForm(double A1, XYZ XYZ1, double A2, XYZ XYZ2, double A3, XYZ XYZ3);
			void SetLinearForm(double A1, XYZ XYZ1, double A2, XYZ XYZ2, XYZ XYZ3);
			void SetLinearForm(double A1, XYZ XYZ1, double A2, XYZ XYZ2);
			void SetLinearForm(double A1, XYZ XYZ1, XYZ XYZ2);
			void SetLinearForm(XYZ XYZ1, XYZ XYZ2);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (XYZ Left, XYZ Right) { return Left.Equals(Right); }
			static bool operator != (XYZ Left, XYZ Right) { return !Left.Equals(Right); }
			static XYZ operator + (XYZ Left, XYZ Right) { return Left.Added(Right); }
			static XYZ operator - (XYZ Left, XYZ Right) { return Left.Subtracted(Right); }
			static XYZ operator * (XYZ Left, double Right) { return Left.Multiplied(Right); }
			static XYZ operator * (XYZ Left, XYZ Right) { return Left.Multiplied(Right); }
			static XYZ operator * (XYZ Left, Mat Right);
			static XYZ operator / (XYZ Left, double Right) { return Left.Divided(Right); }
		};
	} // namespace Occt
} // namespace Macad
