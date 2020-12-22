#pragma once

#include <gp_Ax2d.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Ax2;
		value struct Trsf;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Ax2d
		{
		private:
			Pnt2d _Loc;
			Dir2d _Dir;

		public:
			property Pnt2d Location { Pnt2d get() { return _Loc; } void set(Pnt2d value) { _Loc = value; } }
			property Dir2d Direction { Dir2d get() { return _Dir; } void set(Dir2d value) { _Dir = value; } }

			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static Ax2d OX = Ax2d(Pnt2d(0, 0), Dir2d(1, 0));
			const static Ax2d OY = Ax2d(Pnt2d(0, 0), Dir2d(0, 1));

			//--------------------------------------------------------------------------------------------------

			Ax2d(const ::gp_Ax2d& native);
			Ax2d(Pnt2d P, Dir2d V);

			bool IsCoaxial(Ax2d Other, double AngularTolerance, double LinearTolerance);
			bool IsNormal(Ax2d Other, double AngularTolerance);
			bool IsOpposite(Ax2d Other, double AngularTolerance);
			bool IsParallel(Ax2d Other, double AngularTolerance);
			double Angle(Ax2d Other);
			void Reverse();
			Ax2d Reversed();
			void Mirror(Pnt2d P);
			Ax2d Mirrored(Pnt2d P);
			void Mirror(Ax2d A1);
			Ax2d Mirrored(Ax2d A1);
			void Rotate(Pnt2d P, double Ang);
			Ax2d Rotated(Pnt2d P, double Ang);
			void Scale(Pnt2d P, double S);
			Ax2d Scaled(Pnt2d P, double S);
			void Transform(Trsf2d T);
			Ax2d Transformed(Trsf2d T);
			void Translate(Vec2d V);
			Ax2d Translated(Vec2d V);
			void Translate(Pnt2d P1, Pnt2d P2);
			Ax2d Translated(Pnt2d P1, Pnt2d P2);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Ax2d Left, Ax2d Right) { return Left.Equals(Right); }
			static bool operator != (Ax2d Left, Ax2d Right) { return !Left.Equals(Right); }
			static Ax2d operator + (Ax2d Left, Vec2d Right) { return Left.Translated(Right); }
			static Ax2d operator - (Ax2d Left, Vec2d Right) { return Left.Translated(Right.Reversed()); }
			static Ax2d operator - (Ax2d Left) { return Left.Reversed(); }
			static Ax2d operator * (Ax2d Left, Trsf2d Right);
		};
	} // namespace Occt
} // namespace Macad
