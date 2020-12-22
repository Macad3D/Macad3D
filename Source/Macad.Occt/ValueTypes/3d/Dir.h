#pragma once

#include <gp_Dir.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Vec;
		value struct Ax1;
		value struct Ax2;
		value struct Trsf;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Dir
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

			const static Dir DX = Dir(1, 0, 0);
			const static Dir DY = Dir(0, 1, 0);
			const static Dir DZ = Dir(0, 0, 1);

			//--------------------------------------------------------------------------------------------------

			Dir(const ::gp_Dir& native);
			Dir(double x, double y, double z);
			Dir(XYZ Coord);
			Dir(Vec vec);
			XYZ ToXYZ();
			Vec ToVec();
			Ax1 ToAx1(Pnt loc);

			bool IsEqual(Dir Other, double AngularTolerance);
			bool IsNormal(Dir Other, double AngularTolerance);
			bool IsOpposite(Dir Other, double AngularTolerance);
			bool IsParallel(Dir Other, double AngularTolerance);
			double Angle(Dir Other);
			double AngleWithRef(Dir Other, Dir VRef);
			void Cross(Dir Right);
			Dir Crossed(Dir Right);
			void CrossCross(Dir V1, Dir V2);
			Dir CrossCrossed(Dir V1, Dir V2);
			double Dot(Dir Other);
			double DotCross(Dir V1, Dir V2);
			void Reverse();
			Dir Reversed();
			void Mirror(Dir V);
			Dir Mirrored(Dir V);
			void Mirror(Ax1 A1);
			Dir Mirrored(Ax1 A1);
			void Mirror(Ax2 A2);
			Dir Mirrored(Ax2 A2);
			void Rotate(Ax1 A1, double Ang);
			Dir Rotated(Ax1 A1, double Ang);
			void Transform(Trsf T);
			Dir Transformed(Trsf T);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Dir Left, Dir Right) { return Left.Equals(Right); }
			static bool operator != (Dir Left, Dir Right) { return !Left.Equals(Right); }
			static Dir operator - (Dir Left) { return Left.Reversed(); }
			static Dir operator * (Dir Left, Trsf Right);
		};
	} // namespace Occt
} // namespace Macad
