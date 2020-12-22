#pragma once

#include <gp_Ax1.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Ax2;
		value struct Trsf;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Ax1
		{
		private:
			Pnt _Loc;
			Dir _Dir;

		public:
			property Pnt Location { Pnt get() { return _Loc; } void set(Pnt value) { _Loc = value; } }
			property Dir Direction { Dir get() { return _Dir; } void set(Dir value) { _Dir = value; } }

			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static Ax1 OX = Ax1(Pnt(0, 0, 0), Dir(1, 0, 0));
			const static Ax1 OY = Ax1(Pnt(0, 0, 0), Dir(0, 1, 0));
			const static Ax1 OZ = Ax1(Pnt(0, 0, 0), Dir(0, 0, 1));

			//--------------------------------------------------------------------------------------------------

			Ax1(const ::gp_Ax1& native);
			Ax1(Pnt P, Dir V);

			bool IsCoaxial(Ax1 Other, double AngularTolerance, double LinearTolerance);
			bool IsNormal(Ax1 Other, double AngularTolerance);
			bool IsOpposite(Ax1 Other, double AngularTolerance);
			bool IsParallel(Ax1 Other, double AngularTolerance);
			double Angle(Ax1 Other);
			void Reverse();
			Ax1 Reversed();
			void Mirror(Pnt P);
			Ax1 Mirrored(Pnt P);
			void Mirror(Ax1 A1);
			Ax1 Mirrored(Ax1 A1);
			void Mirror(Ax2 A2);
			Ax1 Mirrored(Ax2 A2);
			void Rotate(Ax1 A1, double Ang);
			Ax1 Rotated(Ax1 A1, double Ang);
			void Scale(Pnt P, double S);
			Ax1 Scaled(Pnt P, double S);
			void Transform(Trsf T);
			Ax1 Transformed(Trsf T);
			void Translate(Vec V);
			Ax1 Translated(Vec V);
			void Translate(Pnt P1, Pnt P2);
			Ax1 Translated(Pnt P1, Pnt P2);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Ax1 Left, Ax1 Right) { return Left.Equals(Right); }
			static bool operator != (Ax1 Left, Ax1 Right) { return !Left.Equals(Right); }
			static Ax1 operator + (Ax1 Left, Vec Right) { return Left.Translated(Right); }
			static Ax1 operator - (Ax1 Left, Vec Right) { return Left.Translated(Right.Reversed()); }
			static Ax1 operator - (Ax1 Left) { return Left.Reversed(); }
			static Ax1 operator * (Ax1 Left, Trsf Right);
		};
	} // namespace Occt
} // namespace Macad
