#pragma once

#include <gp_Trsf2d.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Pnt2d;
		value struct Vec2d;
		value struct Dir2d;
		value struct Ax2d;
		value struct Ax22d;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Trsf2d
		{
		private:
			double _Scale;
			TrsfForm _Shape;
			Mat2d _Matrix;
			XY _Loc;

		public:

			property TrsfForm Form { TrsfForm get() { return _Shape; } void set(TrsfForm value) { _Shape = value; } }

			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static Trsf2d Identity = Trsf2d(::gp_Trsf2d());

			//--------------------------------------------------------------------------------------------------

			Trsf2d(const ::gp_Trsf2d& native);
			Trsf2d(Ax2d FromSystem1, Ax2d ToSystem2);
			Trsf2d(Ax2d ToSystem);
			Trsf2d(Pnt2d P, double Ang);
			Trsf2d(Vec2d V);
			Trsf2d(Pnt2d P1, Pnt2d P2);

			void SetMirror(Pnt2d P);
			void SetMirror(Ax2d A1);
			void SetRotation(Pnt2d P, double Ang);
			void SetScale(Pnt2d P, double S);
			void SetTransformation(Ax2d FromSystem1, Ax2d ToSystem2);
			void SetTransformation(Ax2d ToSystem);
			void SetTranslation(Vec2d V);
			void SetTranslation(Pnt2d P1, Pnt2d P2);
			void SetTranslationPart(Vec2d V);
			void SetScaleFactor(double S);
			void SetValues(double a11, double a12, double a13, double a21, double a22, double a23);
			bool IsNegative();
			double RotationPart();
			double ScaleFactor();
			XY TranslationPart();
			Mat2d HVectorialPart();
			Mat2d VectorialPart();
			double Value(int Row, int Col);
			void Invert();
			Trsf2d Inverted();
			Trsf2d Multiplied(Trsf2d T);
			void Multiply(Trsf2d T);
			void PreMultiply(Trsf2d T);
			void Power(int N);
			Trsf2d Powered(int N);
			void Transforms(double% X, double% Y);
			void Transforms(XY% Coord);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Trsf2d Left, Trsf2d Right) { return Left.Equals(Right); }
			static bool operator != (Trsf2d Left, Trsf2d Right) { return !Left.Equals(Right); }
			static Trsf2d operator - (Trsf2d Left) { return Left.Inverted(); }
			static Trsf2d operator * (Trsf2d Left, Trsf2d Right) { return Left.Multiplied(Right); }

		};
	} // namespace Occt
} // namespace Macad
