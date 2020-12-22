#pragma once

#include <gp_Ax3.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Pnt;
		value struct Vec;
		value struct Dir;
		value struct Trsf;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Ax3
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

			const static Ax3 XOY = Ax3(Pnt(0, 0, 0), Dir(0, 0, 1), Dir(1, 0, 0));
			const static Ax3 ZOX = Ax3(Pnt(0, 0, 0), Dir(0, 1, 0), Dir(0, 0, 1));
			const static Ax3 YOZ = Ax3(Pnt(0, 0, 0), Dir(1, 0, 0), Dir(0, 1, 0));

			//--------------------------------------------------------------------------------------------------

			Ax3(const ::gp_Ax3& native);
			Ax3(Ax2 A);
			Ax3(Pnt P, Dir N, Dir Vx);
			Ax3(Pnt P, Dir V);

			Ax2 ToAx2();

			void XReverse();
			void YReverse();
			void ZReverse();
			bool Direct();
			double Angle(Ax3 Other);
			bool IsCoplanar(Ax3 Other, double LinearTolerance, double AngularTolerance);
			bool IsCoplanar(Ax1 A1, double LinearTolerance, double AngularTolerance);
			void Mirror(Pnt P);
			Ax3 Mirrored(Pnt P);
			void Mirror(Ax1 A1);
			Ax3 Mirrored(Ax1 A1);
			void Mirror(Ax2 A2);
			Ax3 Mirrored(Ax2 A2);
			void Rotate(Ax1 A1, double Ang);
			Ax3 Rotated(Ax1 A1, double Ang);
			void Scale(Pnt P, double S);
			Ax3 Scaled(Pnt P, double S);
			void Transform(Trsf T);
			Ax3 Transformed(Trsf T);
			void Translate(Vec V);
			Ax3 Translated(Vec V);
			void Translate(Pnt P1, Pnt P2);
			Ax3 Translated(Pnt P1, Pnt P2);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Ax3 Left, Ax3 Right) { return Left.Equals(Right); }
			static bool operator != (Ax3 Left, Ax3 Right) { return !Left.Equals(Right); }
			static Ax3 operator + (Ax3 Left, Vec Right) { return Left.Translated(Right); }
			static Ax3 operator - (Ax3 Left, Vec Right) { return Left.Translated(Right.Reversed()); }
			static Ax3 operator * (Ax3 Left, Trsf Right);

			//--------------------------------------------------------------------------------------------------

		private:
			void SetAxis(Ax1 A1);
			void SetDirection(Dir V);
			void SetXDirection(Dir Vx);
			void SetYDirection(Dir Vy);
		};
	} // namespace Occt
} // namespace Macad
