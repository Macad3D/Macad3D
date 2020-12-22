#pragma once

#include <gp_Pnt2d.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Vec2d;
		value struct Dir2d;
		value struct Ax2d;
		value struct Ax22d;
		value struct Trsf2d;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Pnt2d
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

			const static Pnt2d Origin = Pnt2d(0, 0);

			//--------------------------------------------------------------------------------------------------

			Pnt2d(const ::gp_Pnt2d& native);
			Pnt2d(double x, double y);
			Pnt2d(XY Coord);
			XY ToXY();
			Vec2d ToVec();
			Dir2d ToDir();

			bool IsEqual(Pnt2d Other, double LinearTolerance);
			double Distance(Pnt2d Other);
			double SquareDistance(Pnt2d Other);
			void Mirror(Pnt2d P);
			Pnt2d Mirrored(Pnt2d P);
			void Mirror(Ax2d A1);
			Pnt2d Mirrored(Ax2d A1);
			void Rotate(Pnt2d P, double Ang);
			Pnt2d Rotated(Pnt2d P, double Ang);
			void Scale(Pnt2d P, double S);
			Pnt2d Scaled(Pnt2d P, double S);
			void Transform(Trsf2d T);
			Pnt2d Transformed(Trsf2d T);
			void Translate(Vec2d V);
			Pnt2d Translated(Vec2d V);
			void Translate(Pnt2d P1, Pnt2d P2);
			Pnt2d Translated(Pnt2d P1, Pnt2d P2);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Pnt2d Left, Pnt2d Right) { return Left.Equals(Right); }
			static bool operator != (Pnt2d Left, Pnt2d Right) { return !Left.Equals(Right); }
			static Pnt2d operator + (Pnt2d Left, Pnt2d Right);
			static Pnt2d operator - (Pnt2d Left, Pnt2d Right);
			static Pnt2d operator + (Pnt2d Left, Vec2d Right);
			static Pnt2d operator - (Pnt2d Left, Vec2d Right);
			static Pnt2d operator * (Pnt2d Left, Trsf2d Right);
		};
	} // namespace Occt
} // namespace Macad
