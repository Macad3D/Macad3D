#pragma once

#include <gp_Pln.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Pnt;
		value struct Vec;
		value struct Dir;
		value struct Trsf;
		ref class gp_Lin;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Pln
		{
		private:
			Ax3 _Pos;

		public:
			property Ax3 Position { Ax3 get() { return _Pos; } void set(Ax3 value) { _Pos = value; } }
			property Pnt Location { Pnt get() { return _Pos.Location; } void set(Pnt value) { _Pos.Location = value; } }
			property Ax1 Axis { Ax1 get() { return _Pos.Axis; } void set(Ax1 value) { _Pos.Axis = value; } }
			property Ax1 XAxis { Ax1 get() { return Ax1(_Pos.Location, _Pos.XDirection); } }
			property Ax1 YAxis { Ax1 get() { return Ax1(_Pos.Location, _Pos.YDirection); } }

			//--------------------------------------------------------------------------------------------------
			
			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static Pln XOY = Pln(Ax3::XOY);
			const static Pln ZOX = Pln(Ax3::ZOX);
			const static Pln YOZ = Pln(Ax3::YOZ);

			//--------------------------------------------------------------------------------------------------

			Pln(const ::gp_Pln& native);
			Pln(Ax3 A);
			Pln(Pnt P, Dir V);
			Pln(double A, double B, double C, double D);

			void Coefficients(double% A, double% B, double% C, double% D);
			void UReverse();
			void VReverse();
			bool Direct();
			double Distance(Pnt P);
			double Distance(gp_Lin^ L);
			double Distance(Pln Other);
			double SquareDistance(Pnt P);
			double SquareDistance(gp_Lin^ L);
			double SquareDistance(Pln Other);
			bool Contains(Pnt P, double LinearTolerance);
			bool Contains(gp_Lin^ L, double LinearTolerance, double AngularTolerance);
			void Mirror(Pnt P);
			Pln Mirrored(Pnt P);
			void Mirror(Ax1 A1);
			Pln Mirrored(Ax1 A1);
			void Mirror(Ax2 A2);
			Pln Mirrored(Ax2 A2);
			void Rotate(Ax1 A1, double Ang);
			Pln Rotated(Ax1 A1, double Ang);
			void Scale(Pnt P, double S);
			Pln Scaled(Pnt P, double S);
			void Transform(Trsf T);
			Pln Transformed(Trsf T);
			void Translate(Vec V);
			Pln Translated(Vec V);
			void Translate(Pnt P1, Pnt P2);
			Pln Translated(Pnt P1, Pnt P2);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Pln Left, Pln Right) { return Left.Equals(Right); }
			static bool operator != (Pln Left, Pln Right) { return !Left.Equals(Right); }
			static Pln operator + (Pln Left, Vec Right) { return Left.Translated(Right); }
			static Pln operator - (Pln Left, Vec Right) { return Left.Translated(Right.Reversed()); }
			static Pln operator * (Pln Left, Trsf Right);

			//--------------------------------------------------------------------------------------------------
		};
	} // namespace Occt
} // namespace Macad
