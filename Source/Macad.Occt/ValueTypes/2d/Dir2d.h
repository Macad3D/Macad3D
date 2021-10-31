#pragma once

#include <gp_Dir2d.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Vec2d;
		value struct Ax2d;
		value struct Trsf2d;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Dir2d
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

			const static Dir2d DX = Dir2d(1, 0);
			const static Dir2d DY = Dir2d(0, 1);

			//--------------------------------------------------------------------------------------------------

			Dir2d(const ::gp_Dir2d& native);
			Dir2d(double x, double y);
			Dir2d(XY Coord);
			Dir2d(Vec2d vec);
			XY ToXY();
			Vec2d ToVec();
			Vec2d ToVec(double scale);
			Ax2d ToAxis(Pnt2d loc);

			bool IsEqual(Dir2d Other, double AngularTolerance);
			bool IsNormal(Dir2d Other, double AngularTolerance);
			bool IsOpposite(Dir2d Other, double AngularTolerance);
			bool IsParallel(Dir2d Other, double AngularTolerance);
			double Angle(Dir2d Other);
			double Crossed(Dir2d Right);
			double Dot(Dir2d Other);
			void Reverse();
			Dir2d Reversed();
			void Mirror(Dir2d V);
			Dir2d Mirrored(Dir2d V);
			void Mirror(Ax2d A1);
			Dir2d Mirrored(Ax2d A1);
			void Rotate(double Ang);
			Dir2d Rotated(double Ang);
			void Transform(Trsf2d T);
			Dir2d Transformed(Trsf2d T);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Dir2d Left, Dir2d Right) { return Left.Equals(Right); }
			static bool operator != (Dir2d Left, Dir2d Right) { return !Left.Equals(Right); }
			static Dir2d operator - (Dir2d Left) { return Left.Reversed(); }
			static Dir2d operator * (Dir2d Left, Trsf2d Right);
		};
	} // namespace Occt
} // namespace Macad
