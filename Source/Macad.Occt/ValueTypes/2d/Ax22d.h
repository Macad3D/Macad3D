#pragma once

#include <gp_Ax22d.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Pnt2d;
		value struct Vec2d;
		value struct Dir2d;
		value struct Trsf2d;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Ax22d
		{
		private:
			Pnt2d _Point;
			Dir2d _YDir;
			Dir2d _XDir;

		public:
			property Pnt2d Location { Pnt2d get() { return _Point; } void set(Pnt2d value) { _Point = value; } }
			property Dir2d XDirection { Dir2d get() { return _XDir; } void set(Dir2d value) { SetXDirection(value); } }
			property Dir2d YDirection { Dir2d get() { return _YDir; } void set(Dir2d value) { SetYDirection(value); } }
			property Ax2d XAxis { Ax2d get() { return Ax2d(_Point, _XDir); } void set(Ax2d value) { SetXAxis(value); } }
			property Ax2d YAxis { Ax2d get() { return Ax2d(_Point, _YDir); } void set(Ax2d value) { SetYAxis(value); } }

			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static Ax22d Identity = Ax22d(::gp_Ax22d());

			//--------------------------------------------------------------------------------------------------

			Ax22d(const ::gp_Ax22d& native);
			Ax22d(Pnt2d P, Dir2d Vx, Dir2d Vy);
			Ax22d(Pnt2d P, Dir2d Vx, bool Sense);
			Ax22d(Pnt2d P, Dir2d Vx);

			void Mirror(Pnt2d P);
			Ax22d Mirrored(Pnt2d P);
			void Mirror(Ax2d A1);
			Ax22d Mirrored(Ax2d A1);
			void Rotate(Pnt2d P, double Ang);
			Ax22d Rotated(Pnt2d P, double Ang);
			void Scale(Pnt2d P, double S);
			Ax22d Scaled(Pnt2d P, double S);
			void Transform(Trsf2d T);
			Ax22d Transformed(Trsf2d T);
			void Translate(Vec2d V);
			Ax22d Translated(Vec2d V);
			void Translate(Pnt2d P1, Pnt2d P2);
			Ax22d Translated(Pnt2d P1, Pnt2d P2);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Ax22d Left, Ax22d Right) { return Left.Equals(Right); }
			static bool operator != (Ax22d Left, Ax22d Right) { return !Left.Equals(Right); }
			static Ax22d operator + (Ax22d Left, Vec2d Right) { return Left.Translated(Right); }
			static Ax22d operator - (Ax22d Left, Vec2d Right) { return Left.Translated(Right.Reversed()); }
			static Ax22d operator * (Ax22d Left, Trsf2d Right);

			//--------------------------------------------------------------------------------------------------

		private:
			void SetXAxis(Ax2d A1);
			void SetYAxis(Ax2d A1);
			void SetXDirection(Dir2d Vx);
			void SetYDirection(Dir2d Vy);
		};
	} // namespace Occt
} // namespace Macad
