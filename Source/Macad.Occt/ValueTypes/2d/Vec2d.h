#pragma once

#include <gp_Vec2d.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Dir2d;
		value struct Ax2d;
		value struct Trsf2d;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Vec2d
		{
		private:
			XY _Coord;

		public:
			property XY Coord { XY get() { return _Coord; } void set(XY value) { _Coord = value; } }
			property double X { double get() { return _Coord.X; } void set(double value) { _Coord.X = value; } }
			property double Y { double get() { return _Coord.Y; } void set(double value) { _Coord.Y = value; } }

			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static Vec2d Zero = Vec2d(0, 0);

			//--------------------------------------------------------------------------------------------------

			Vec2d(const ::gp_Vec2d& native);
			Vec2d(double x, double y);
			Vec2d(XY Coord);
			Vec2d(Pnt2d P1, Pnt2d P2);
			XY ToXY();
			Pnt2d ToPnt();
			Dir2d ToDir();

			bool IsEqual(Vec2d Other, double LinearTolerance, double AngularTolerance);
			bool IsNormal(Vec2d Other, double AngularTolerance);
			bool IsOpposite(Vec2d Other, double AngularTolerance);
			bool IsParallel(Vec2d Other, double AngularTolerance);
			double Angle(Vec2d Other);
			double Magnitude();
			double SquareMagnitude();
			void Add(Vec2d Other);
			Vec2d Added(Vec2d Other);
			void Subtract(Vec2d Right);
			Vec2d Subtracted(Vec2d Right);
			void Multiply(double Scalar);
			Vec2d Multiplied(double Scalar);
			void Divide(double Scalar);
			Vec2d Divided(double Scalar);
			double Crossed(Vec2d Right);
			double CrossMagnitude(Vec2d Right);
			double CrossSquareMagnitude(Vec2d Right);
			double Dot(Vec2d Other);
			void Normalize();
			Vec2d Normalized();
			void Reverse();
			Vec2d Reversed();
			void SetLinearForm(double A1, Vec2d V1, double A2, Vec2d V2, Vec2d V3);
			void SetLinearForm(double A1, Vec2d V1, double A2, Vec2d V2);
			void SetLinearForm(double A1, Vec2d V1, Vec2d V2);
			void SetLinearForm(Vec2d V1, Vec2d V2);
			void Mirror(Vec2d V);
			Vec2d Mirrored(Vec2d V);
			void Mirror(Ax2d A1);
			Vec2d Mirrored(Ax2d A1);
			void Rotate(double Ang);
			Vec2d Rotated(double Ang);
			void Scale(double S);
			Vec2d Scaled(double S);
			void Transform(Trsf2d T);
			Vec2d Transformed(Trsf2d T);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Vec2d Left, Vec2d Right) { return Left.Equals(Right); }
			static bool operator != (Vec2d Left, Vec2d Right) { return !Left.Equals(Right); }
			static Vec2d operator + (Vec2d Left, Vec2d Right) { return Left.Added(Right); }
			static Vec2d operator - (Vec2d Left, Vec2d Right) { return Left.Subtracted(Right); }
			static Vec2d operator - (Vec2d Left) { return Left.Reversed(); }
			static Vec2d operator * (Vec2d Left, double Right) { return Left.Multiplied(Right); }
			static Vec2d operator / (Vec2d Left, double Right) { return Left.Divided(Right); }
			static Vec2d operator * (Vec2d Left, Trsf2d Right);

		};
	} // namespace Occt
} // namespace Macad
