#pragma once

#include <gp_Quaternion.hxx>

namespace Macad
{
	namespace Occt
	{
		value struct Pnt;
		value struct Vec;
		value struct Dir;
		value struct Mat;

		[System::Runtime::InteropServices::StructLayout(System::Runtime::InteropServices::LayoutKind::Sequential, Pack = 8)]
		public value struct Quaternion
		{
		public:
			double X;
			double Y;
			double Z;
			double W;

			//--------------------------------------------------------------------------------------------------

			bool Equals(System::Object^ obj) override;
			int GetHashCode() override;
			System::String^ ToString() override;

			//--------------------------------------------------------------------------------------------------

			const static Quaternion Identity = Quaternion(::gp_Quaternion());

			//--------------------------------------------------------------------------------------------------

			Quaternion(const ::gp_Quaternion& native);
			Quaternion(Vec theVecFrom, Vec theVecTo);
			Quaternion(Vec theVecFrom, Vec theVecTo, Vec theHelpCrossVec);
			Quaternion(Vec theAxis, double theAngle);
			Quaternion(Mat theMat);
			Quaternion(double x, double y, double z, double w);
			Quaternion(double theAlpha, double theBeta, double theGamma);

			bool IsEqual(Quaternion theOther);
			void SetRotation(Vec theVecFrom, Vec theVecTo);
			void SetRotation(Vec theVecFrom, Vec theVecTo, Vec theHelpCrossVec);
			void SetVectorAndAngle(Vec theAxis, double theAngle);
			void GetVectorAndAngle(Vec% theAxis, double% theAngle);
			void SetMatrix(Mat theMat);
			Mat GetMatrix();
			void SetEulerAngles(double theAlpha, double theBeta, double theGamma);
			void GetEulerAngles(double% theAlpha, double% theBeta, double% theGamma);
			void SetEulerAngles(EulerSequence theOrder, double theAlpha, double theBeta, double theGamma);
			void GetEulerAngles(EulerSequence theOrder, double% theAlpha, double% theBeta, double% theGamma);
			void Set(double x, double y, double z, double w);
			void SetIdent();
			void Reverse();
			Quaternion Reversed();
			void Invert();
			Quaternion Inverted();
			double SquareNorm();
			double Norm();
			void Scale(double theScale);
			Quaternion Scaled(double theScale);
			void StabilizeLength();
			void Normalize();
			Quaternion Normalized();
			Quaternion Negated();
			Quaternion Added(Quaternion theOther);
			Quaternion Subtracted(Quaternion theOther);
			Quaternion Multiplied(Quaternion theOther);
			void Add(Quaternion theOther);
			void Subtract(Quaternion theOther);
			void Multiply(Quaternion theOther);
			double Dot(Quaternion theOther);
			double GetRotationAngle();
			Vec Multiply(Vec theVec);

			//--------------------------------------------------------------------------------------------------

			static bool operator == (Quaternion Left, Quaternion Right) { return Left.Equals(Right); }
			static bool operator != (Quaternion Left, Quaternion Right) { return !Left.Equals(Right); }
			static Quaternion operator + (Quaternion Left, Quaternion Right) { return Left.Added(Right); }
			static Quaternion operator - (Quaternion Left, Quaternion Right) { return Left.Subtracted(Right); }
			static Quaternion operator - (Quaternion Left) { return Left.Reversed(); }
			static Quaternion operator * (Quaternion Left, double Right) { return Left.Scaled(Right); }
			static Quaternion operator * (Quaternion Left, Quaternion Right) { return Left.Multiplied(Right); }
			static Vec operator * (Quaternion Left, Vec Right) { return Left.Multiply(Right); }
		};
	} // namespace Occt
} // namespace Macad
