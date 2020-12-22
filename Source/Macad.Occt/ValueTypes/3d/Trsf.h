#pragma once

#include <gp_Trsf.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Pnt;
		value struct Vec;
		value struct Dir;
		value struct Ax1;
		value struct Ax2;
		value struct Ax3;
		value struct Quaternion;
		value struct Trsf2d;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Trsf
		{
		private:
			double _Scale;
			TrsfForm _Shape;
			Mat _Matrix;
			XYZ _Loc;

		public:

			property TrsfForm Form { TrsfForm get() { return _Shape; } void set(TrsfForm value) { _Shape = value; } }

			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static Trsf Identity = Trsf(::gp_Trsf());

			//--------------------------------------------------------------------------------------------------

			Trsf(const ::gp_Trsf& native);
			Trsf(Trsf2d T);
			Trsf(Ax3 FromSystem1, Ax3 ToSystem2);
			Trsf(Ax3 ToSystem);
			Trsf(Ax1 A1, double Ang);
			Trsf(Quaternion R);
			Trsf(Quaternion R, Vec T);
			Trsf(Vec V);
			Trsf(Pnt P1, Pnt P2);

			void SetMirror(Pnt P);
			void SetMirror(Ax1 A1);
			void SetMirror(Ax2 A2);
			void SetRotation(Ax1 A1, double Ang);
			void SetRotation(Quaternion R);
			void SetScale(Pnt P, double S);
			void SetDisplacement(Ax3 FromSystem1, Ax3 ToSystem2);
			void SetTransformation(Ax3 FromSystem1, Ax3 ToSystem2);
			void SetTransformation(Ax3 ToSystem);
			void SetTransformation(Quaternion R, Vec T);
			void SetTranslation(Vec V);
			void SetTranslation(Pnt P1, Pnt P2);
			void SetTranslationPart(Vec V);
			void SetScaleFactor(double S);
			void SetValues(double a11, double a12, double a13, double a14, double a21, double a22, double a23, double a24, double a31, double a32, double a33, double a34);
			bool IsNegative();
			bool GetRotation(XYZ% theAxis, double% theAngle);
			Quaternion GetRotation();
			double ScaleFactor();
			XYZ TranslationPart();
			Mat HVectorialPart();
			Mat VectorialPart();
			double Value(int Row, int Col);
			void Invert();
			Trsf Inverted();
			Trsf Multiplied(Trsf T);
			void Multiply(Trsf T);
			void PreMultiply(Trsf T);
			void Power(int N);
			Trsf Powered(int N);
			void Transforms(double% X, double% Y, double% Z);
			void Transforms(XYZ% Coord);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Trsf Left, Trsf Right) { return Left.Equals(Right); }
			static bool operator != (Trsf Left, Trsf Right) { return !Left.Equals(Right); }
			static Trsf operator - (Trsf Left) { return Left.Inverted(); }
			static Trsf operator * (Trsf Left, Trsf Right) { return Left.Multiplied(Right); }

		};
	} // namespace Occt
} // namespace Macad
