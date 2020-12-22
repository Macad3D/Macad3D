#pragma once

#include <gp_Ax2.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Pnt;
		value struct Vec;
		value struct Dir;
		value struct Trsf;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Ax2
		{
		private:
			Ax1 _Axis;
			Dir _YDir;
			Dir _XDir;

		public:
			property Pnt Location { Pnt get() { return _Axis.Location; } void set(Pnt value) { _Axis.Location = value; } }
			property Dir Direction { Dir get() { return _Axis.Direction; } void set(Dir value) { SetDirection(value); } }
			property Dir XDirection { Dir get() { return _XDir; } void set(Dir value) { SetXDirection(value); } }
			property Dir YDirection { Dir get() { return _YDir; } void set(Dir value) { SetYDirection(value); } }
			property Ax1 Axis { Ax1 get() { return _Axis; } void set(Ax1 value) { SetAxis(value); } }

			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static Ax2 XOY = Ax2(Pnt(0, 0, 0), Dir(0, 0, 1), Dir(1, 0, 0));
			const static Ax2 ZOX = Ax2(Pnt(0, 0, 0), Dir(0, 1, 0), Dir(0, 0, 1));
			const static Ax2 YOZ = Ax2(Pnt(0, 0, 0), Dir(1, 0, 0), Dir(0, 1, 0));

			//--------------------------------------------------------------------------------------------------

			Ax2(const ::gp_Ax2& native);
			Ax2(Pnt P, Dir N, Dir Vx);
			Ax2(Pnt P, Dir V);

			double Angle(Ax2 Other);
			bool IsCoplanar(Ax2 Other, double LinearTolerance, double AngularTolerance);
			bool IsCoplanar(Ax1 A1, double LinearTolerance, double AngularTolerance);
			void Mirror(Pnt P);
			Ax2 Mirrored(Pnt P);
			void Mirror(Ax1 A1);
			Ax2 Mirrored(Ax1 A1);
			void Mirror(Ax2 A2);
			Ax2 Mirrored(Ax2 A2);
			void Rotate(Ax1 A1, double Ang);
			Ax2 Rotated(Ax1 A1, double Ang);
			void Scale(Pnt P, double S);
			Ax2 Scaled(Pnt P, double S);
			void Transform(Trsf T);
			Ax2 Transformed(Trsf T);
			void Translate(Vec V);
			Ax2 Translated(Vec V);
			void Translate(Pnt P1, Pnt P2);
			Ax2 Translated(Pnt P1, Pnt P2);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Ax2 Left, Ax2 Right) { return Left.Equals(Right); }
			static bool operator != (Ax2 Left, Ax2 Right) { return !Left.Equals(Right); }
			static Ax2 operator + (Ax2 Left, Vec Right) { return Left.Translated(Right); }
			static Ax2 operator - (Ax2 Left, Vec Right) { return Left.Translated(Right.Reversed()); }
			static Ax2 operator * (Ax2 Left, Trsf Right);

			//--------------------------------------------------------------------------------------------------

		private:
			void SetAxis(Ax1 A1);
			void SetDirection(Dir V);
			void SetXDirection(Dir Vx);
			void SetYDirection(Dir Vy);
		};
	} // namespace Occt
} // namespace Macad
