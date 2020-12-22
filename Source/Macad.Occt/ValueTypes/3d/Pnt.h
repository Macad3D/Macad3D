#pragma once

#include <gp_Pnt.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Vec;
		value struct Dir;
		value struct Ax1;
		value struct Ax2;
		value struct Trsf;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Pnt
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

			const static Pnt Origin = Pnt(0, 0, 0);

			//--------------------------------------------------------------------------------------------------

			Pnt(const ::gp_Pnt& native);
			Pnt(double x, double y, double z);
			Pnt(XYZ Coord);
			XYZ ToXYZ();
			Vec ToVec();
			Dir ToDir();

			void BaryCenter(double Alpha, Pnt P, double Beta);
			bool IsEqual(Pnt Other, double LinearTolerance);
			double Distance(Pnt Other);
			double SquareDistance(Pnt Other);
			void Mirror(Pnt P);
			Pnt Mirrored(Pnt P);
			void Mirror(Ax1 A1);
			Pnt Mirrored(Ax1 A1);
			void Mirror(Ax2 A2);
			Pnt Mirrored(Ax2 A2);
			void Rotate(Ax1 A1, double Ang);
			Pnt Rotated(Ax1 A1, double Ang);
			void Scale(Pnt P, double S);
			Pnt Scaled(Pnt P, double S);
			void Transform(Trsf T);
			Pnt Transformed(Trsf T);
			void Translate(Vec V);
			Pnt Translated(Vec V);
			void Translate(Pnt P1, Pnt P2);
			Pnt Translated(Pnt P1, Pnt P2);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Pnt Left, Pnt Right) { return Left.Equals(Right); }
			static bool operator != (Pnt Left, Pnt Right) { return !Left.Equals(Right); }
			static Pnt operator + (Pnt Left, Pnt Right);
			static Pnt operator - (Pnt Left, Pnt Right);
			static Pnt operator + (Pnt Left, Vec Right);
			static Pnt operator - (Pnt Left, Vec Right);
			static Pnt operator * (Pnt Left, Trsf Right);
		};
	} // namespace Occt
} // namespace Macad
