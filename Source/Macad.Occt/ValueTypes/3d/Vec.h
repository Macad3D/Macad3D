#pragma once

#include <gp_Vec.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Dir;
		value struct Ax1;
		value struct Ax2;
		value struct Trsf;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Vec
		{
		private:
			XYZ _Coord;

		public:
			property XYZ Coord { XYZ get() { return _Coord; } void set(XYZ value) { _Coord = value; } }
			property double X { double get() { return _Coord.X; } void set(double value) { _Coord.X = value; } }
			property double Y { double get() { return _Coord.Y; } void set(double value) { _Coord.Y = value; } }
			property double Z { double get() { return _Coord.Z; } void set(double value) { _Coord.Z = value; } }

			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static Vec Zero = Vec(0, 0, 0);

			//--------------------------------------------------------------------------------------------------

			Vec(const ::gp_Vec& native);
			Vec(double x, double y, double z);
			Vec(XYZ Coord);
			Vec(Pnt P1, Pnt P2);
			XYZ ToXYZ();
			Pnt ToPnt();
			Dir ToDir();

			bool IsEqual(Vec Other, double LinearTolerance, double AngularTolerance);
			bool IsNormal(Vec Other, double AngularTolerance);
			bool IsOpposite(Vec Other, double AngularTolerance);
			bool IsParallel(Vec Other, double AngularTolerance);
			double Angle(Vec Other);
			double AngleWithRef(Vec Other, Vec VRef);
			double Magnitude();
			double SquareMagnitude();
			void Add(Vec Other);
			Vec Added(Vec Other);
			void Subtract(Vec Right);
			Vec Subtracted(Vec Right);
			void Multiply(double Scalar);
			Vec Multiplied(double Scalar);
			void Divide(double Scalar);
			Vec Divided(double Scalar);
			void Cross(Vec Right);
			Vec Crossed(Vec Right);
			double CrossMagnitude(Vec Right);
			double CrossSquareMagnitude(Vec Right);
			void CrossCross(Vec V1, Vec V2);
			Vec CrossCrossed(Vec V1, Vec V2);
			double Dot(Vec Other);
			double DotCross(Vec V1, Vec V2);
			void Normalize();
			Vec Normalized();
			void Reverse();
			Vec Reversed();
			void SetLinearForm(double A1, Vec V1, double A2, Vec V2, double A3, Vec V3, Vec V4);
			void SetLinearForm(double A1, Vec V1, double A2, Vec V2, double A3, Vec V3);
			void SetLinearForm(double A1, Vec V1, double A2, Vec V2, Vec V3);
			void SetLinearForm(double A1, Vec V1, double A2, Vec V2);
			void SetLinearForm(double A1, Vec V1, Vec V2);
			void SetLinearForm(Vec V1, Vec V2);
			void Mirror(Vec V);
			Vec Mirrored(Vec V);
			void Mirror(Ax1 A1);
			Vec Mirrored(Ax1 A1);
			void Mirror(Ax2 A2);
			Vec Mirrored(Ax2 A2);
			void Rotate(Ax1 A1, double Ang);
			Vec Rotated(Ax1 A1, double Ang);
			void Scale(double S);
			Vec Scaled(double S);
			void Transform(Trsf T);
			Vec Transformed(Trsf T);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Vec Left, Vec Right) { return Left.Equals(Right); }
			static bool operator != (Vec Left, Vec Right) { return !Left.Equals(Right); }
			static Vec operator + (Vec Left, Vec Right) { return Left.Added(Right); }
			static Vec operator - (Vec Left, Vec Right) { return Left.Subtracted(Right); }
			static Vec operator - (Vec Left) { return Left.Reversed(); }
			static Vec operator * (Vec Left, double Right) { return Left.Multiplied(Right); }
			static Vec operator / (Vec Left, double Right) { return Left.Divided(Right); }
			static Vec operator * (Vec Left, Trsf Right);

		};
	} // namespace Occt
} // namespace Macad
