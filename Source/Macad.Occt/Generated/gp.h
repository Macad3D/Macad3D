// Generated wrapper code for package gp

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  gp_Vec2f
//---------------------------------------------------------------------
public ref class gp_Vec2f sealed : public BaseClass<::gp_Vec2f>
{

#ifdef Include_gp_Vec2f_h
public:
	Include_gp_Vec2f_h
#endif

public:
	gp_Vec2f(::gp_Vec2f* nativeInstance)
		: BaseClass<::gp_Vec2f>( nativeInstance, true )
	{}

	gp_Vec2f(::gp_Vec2f& nativeInstance)
		: BaseClass<::gp_Vec2f>( &nativeInstance, false )
	{}

	property ::gp_Vec2f* NativeInstance
	{
		::gp_Vec2f* get()
		{
			return static_cast<::gp_Vec2f*>(_NativeInstance);
		}
	}

public:
	gp_Vec2f(float theXY);
	gp_Vec2f(float theX, float theY);
	gp_Vec2f(Macad::Occt::gp_Vec2f^ theOtherVec2);
	static int Length();
	void SetValues(float theX, float theY);
	float x();
	float y();
	Macad::Occt::gp_Vec2f^ xy();
	Macad::Occt::gp_Vec2f^ yx();
	bool IsEqual(Macad::Occt::gp_Vec2f^ theOther);
	float GetData();
	float ChangeData();
	void Multiply(float theFactor);
	Macad::Occt::gp_Vec2f^ Multiplied(float theFactor);
	Macad::Occt::gp_Vec2f^ cwiseMin(Macad::Occt::gp_Vec2f^ theVec);
	Macad::Occt::gp_Vec2f^ cwiseMax(Macad::Occt::gp_Vec2f^ theVec);
	Macad::Occt::gp_Vec2f^ cwiseAbs();
	float maxComp();
	float minComp();
	float Dot(Macad::Occt::gp_Vec2f^ theOther);
	float Modulus();
	float SquareModulus();
	static Macad::Occt::gp_Vec2f^ DX();
	static Macad::Occt::gp_Vec2f^ DY();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class gp_Vec2f

//---------------------------------------------------------------------
//  Class  gp_GTrsf2d
//---------------------------------------------------------------------
public ref class gp_GTrsf2d sealed : public BaseClass<::gp_GTrsf2d>
{

#ifdef Include_gp_GTrsf2d_h
public:
	Include_gp_GTrsf2d_h
#endif

public:
	gp_GTrsf2d(::gp_GTrsf2d* nativeInstance)
		: BaseClass<::gp_GTrsf2d>( nativeInstance, true )
	{}

	gp_GTrsf2d(::gp_GTrsf2d& nativeInstance)
		: BaseClass<::gp_GTrsf2d>( &nativeInstance, false )
	{}

	property ::gp_GTrsf2d* NativeInstance
	{
		::gp_GTrsf2d* get()
		{
			return static_cast<::gp_GTrsf2d*>(_NativeInstance);
		}
	}

public:
	gp_GTrsf2d();
	gp_GTrsf2d(Macad::Occt::Trsf2d theT);
	gp_GTrsf2d(Macad::Occt::Mat2d theM, Macad::Occt::XY theV);
	gp_GTrsf2d(Macad::Occt::gp_GTrsf2d^ parameter1);
	void SetAffinity(Macad::Occt::Ax2d theA, double theRatio);
	void SetValue(int theRow, int theCol, double theValue);
	void SetTranslationPart(Macad::Occt::XY theCoord);
	void SetTrsf2d(Macad::Occt::Trsf2d theT);
	void SetVectorialPart(Macad::Occt::Mat2d theMatrix);
	bool IsNegative();
	bool IsSingular();
	Macad::Occt::TrsfForm Form();
	Macad::Occt::XY TranslationPart();
	Macad::Occt::Mat2d VectorialPart();
	double Value(int theRow, int theCol);
	void Invert();
	Macad::Occt::gp_GTrsf2d^ Inverted();
	Macad::Occt::gp_GTrsf2d^ Multiplied(Macad::Occt::gp_GTrsf2d^ theT);
	void Multiply(Macad::Occt::gp_GTrsf2d^ theT);
	void PreMultiply(Macad::Occt::gp_GTrsf2d^ theT);
	void Power(int theN);
	Macad::Occt::gp_GTrsf2d^ Powered(int theN);
	void Transforms(Macad::Occt::XY% theCoord);
	Macad::Occt::XY Transformed(Macad::Occt::XY theCoord);
	void Transforms(double% theX, double% theY);
	Macad::Occt::Trsf2d Trsf2d();
}; // class gp_GTrsf2d

//---------------------------------------------------------------------
//  Class  gp_GTrsf
//---------------------------------------------------------------------
public ref class gp_GTrsf sealed : public BaseClass<::gp_GTrsf>
{

#ifdef Include_gp_GTrsf_h
public:
	Include_gp_GTrsf_h
#endif

public:
	gp_GTrsf(::gp_GTrsf* nativeInstance)
		: BaseClass<::gp_GTrsf>( nativeInstance, true )
	{}

	gp_GTrsf(::gp_GTrsf& nativeInstance)
		: BaseClass<::gp_GTrsf>( &nativeInstance, false )
	{}

	property ::gp_GTrsf* NativeInstance
	{
		::gp_GTrsf* get()
		{
			return static_cast<::gp_GTrsf*>(_NativeInstance);
		}
	}

public:
	gp_GTrsf();
	gp_GTrsf(Macad::Occt::Trsf theT);
	gp_GTrsf(Macad::Occt::Mat theM, Macad::Occt::XYZ theV);
	gp_GTrsf(Macad::Occt::gp_GTrsf^ parameter1);
	void SetAffinity(Macad::Occt::Ax1 theA1, double theRatio);
	void SetAffinity(Macad::Occt::Ax2 theA2, double theRatio);
	void SetValue(int theRow, int theCol, double theValue);
	void SetVectorialPart(Macad::Occt::Mat theMatrix);
	void SetTranslationPart(Macad::Occt::XYZ theCoord);
	void SetTrsf(Macad::Occt::Trsf theT);
	bool IsNegative();
	bool IsSingular();
	Macad::Occt::TrsfForm Form();
	void SetForm();
	Macad::Occt::XYZ TranslationPart();
	Macad::Occt::Mat VectorialPart();
	double Value(int theRow, int theCol);
	void Invert();
	Macad::Occt::gp_GTrsf^ Inverted();
	Macad::Occt::gp_GTrsf^ Multiplied(Macad::Occt::gp_GTrsf^ theT);
	void Multiply(Macad::Occt::gp_GTrsf^ theT);
	void PreMultiply(Macad::Occt::gp_GTrsf^ theT);
	void Power(int theN);
	Macad::Occt::gp_GTrsf^ Powered(int theN);
	void Transforms(Macad::Occt::XYZ% theCoord);
	void Transforms(double% theX, double% theY, double% theZ);
	Macad::Occt::Trsf Trsf();
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class gp_GTrsf

//---------------------------------------------------------------------
//  Class  gp_VectorWithNullMagnitude
//---------------------------------------------------------------------
public ref class gp_VectorWithNullMagnitude sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_gp_VectorWithNullMagnitude_h
public:
	Include_gp_VectorWithNullMagnitude_h
#endif

public:
	gp_VectorWithNullMagnitude(::gp_VectorWithNullMagnitude* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	gp_VectorWithNullMagnitude(::gp_VectorWithNullMagnitude& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::gp_VectorWithNullMagnitude* NativeInstance
	{
		::gp_VectorWithNullMagnitude* get()
		{
			return static_cast<::gp_VectorWithNullMagnitude*>(_NativeInstance);
		}
	}

	static Macad::Occt::gp_VectorWithNullMagnitude^ CreateDowncasted(::gp_VectorWithNullMagnitude* instance);

public:
	gp_VectorWithNullMagnitude();
	gp_VectorWithNullMagnitude(System::String^ theMessage);
	gp_VectorWithNullMagnitude(System::String^ theMessage, System::String^ theStackTrace);
	gp_VectorWithNullMagnitude(Macad::Occt::gp_VectorWithNullMagnitude^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::gp_VectorWithNullMagnitude^ NewInstance(System::String^ theMessage);
	static Macad::Occt::gp_VectorWithNullMagnitude^ NewInstance();
	static Macad::Occt::gp_VectorWithNullMagnitude^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class gp_VectorWithNullMagnitude

//---------------------------------------------------------------------
//  Class  gp_Circ
//---------------------------------------------------------------------
public ref class gp_Circ sealed : public BaseClass<::gp_Circ>
{

#ifdef Include_gp_Circ_h
public:
	Include_gp_Circ_h
#endif

public:
	gp_Circ(::gp_Circ* nativeInstance)
		: BaseClass<::gp_Circ>( nativeInstance, true )
	{}

	gp_Circ(::gp_Circ& nativeInstance)
		: BaseClass<::gp_Circ>( &nativeInstance, false )
	{}

	property ::gp_Circ* NativeInstance
	{
		::gp_Circ* get()
		{
			return static_cast<::gp_Circ*>(_NativeInstance);
		}
	}

public:
	gp_Circ();
	gp_Circ(Macad::Occt::Ax2 theA2, double theRadius);
	gp_Circ(Macad::Occt::gp_Circ^ parameter1);
	void SetAxis(Macad::Occt::Ax1 theA1);
	void SetLocation(Macad::Occt::Pnt theP);
	void SetPosition(Macad::Occt::Ax2 theA2);
	void SetRadius(double theRadius);
	double Area();
	Macad::Occt::Ax1 Axis();
	double Length();
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax2 Position();
	double Radius();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	double Distance(Macad::Occt::Pnt theP);
	double SquareDistance(Macad::Occt::Pnt theP);
	bool Contains(Macad::Occt::Pnt theP, double theLinearTolerance);
	void Mirror(Macad::Occt::Pnt theP);
	Macad::Occt::gp_Circ^ Mirrored(Macad::Occt::Pnt theP);
	void Mirror(Macad::Occt::Ax1 theA1);
	Macad::Occt::gp_Circ^ Mirrored(Macad::Occt::Ax1 theA1);
	void Mirror(Macad::Occt::Ax2 theA2);
	Macad::Occt::gp_Circ^ Mirrored(Macad::Occt::Ax2 theA2);
	void Rotate(Macad::Occt::Ax1 theA1, double theAng);
	Macad::Occt::gp_Circ^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
	void Scale(Macad::Occt::Pnt theP, double theS);
	Macad::Occt::gp_Circ^ Scaled(Macad::Occt::Pnt theP, double theS);
	void Transform(Macad::Occt::Trsf theT);
	Macad::Occt::gp_Circ^ Transformed(Macad::Occt::Trsf theT);
	void Translate(Macad::Occt::Vec theV);
	Macad::Occt::gp_Circ^ Translated(Macad::Occt::Vec theV);
	void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
	Macad::Occt::gp_Circ^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Circ

//---------------------------------------------------------------------
//  Class  gp_Circ2d
//---------------------------------------------------------------------
public ref class gp_Circ2d sealed : public BaseClass<::gp_Circ2d>
{

#ifdef Include_gp_Circ2d_h
public:
	Include_gp_Circ2d_h
#endif

public:
	gp_Circ2d(::gp_Circ2d* nativeInstance)
		: BaseClass<::gp_Circ2d>( nativeInstance, true )
	{}

	gp_Circ2d(::gp_Circ2d& nativeInstance)
		: BaseClass<::gp_Circ2d>( &nativeInstance, false )
	{}

	property ::gp_Circ2d* NativeInstance
	{
		::gp_Circ2d* get()
		{
			return static_cast<::gp_Circ2d*>(_NativeInstance);
		}
	}

public:
	gp_Circ2d();
	gp_Circ2d(Macad::Occt::Ax2d theXAxis, double theRadius, bool theIsSense);
	gp_Circ2d(Macad::Occt::Ax2d theXAxis, double theRadius);
	gp_Circ2d(Macad::Occt::Ax22d theAxis, double theRadius);
	gp_Circ2d(Macad::Occt::gp_Circ2d^ parameter1);
	void SetLocation(Macad::Occt::Pnt2d theP);
	void SetXAxis(Macad::Occt::Ax2d theA);
	void SetAxis(Macad::Occt::Ax22d theA);
	void SetYAxis(Macad::Occt::Ax2d theA);
	void SetRadius(double theRadius);
	double Area();
	void Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF);
	bool Contains(Macad::Occt::Pnt2d theP, double theLinearTolerance);
	double Distance(Macad::Occt::Pnt2d theP);
	double SquareDistance(Macad::Occt::Pnt2d theP);
	double Length();
	Macad::Occt::Pnt2d Location();
	double Radius();
	Macad::Occt::Ax22d Axis();
	Macad::Occt::Ax22d Position();
	Macad::Occt::Ax2d XAxis();
	Macad::Occt::Ax2d YAxis();
	void Reverse();
	Macad::Occt::gp_Circ2d^ Reversed();
	bool IsDirect();
	void Mirror(Macad::Occt::Pnt2d theP);
	Macad::Occt::gp_Circ2d^ Mirrored(Macad::Occt::Pnt2d theP);
	void Mirror(Macad::Occt::Ax2d theA);
	Macad::Occt::gp_Circ2d^ Mirrored(Macad::Occt::Ax2d theA);
	void Rotate(Macad::Occt::Pnt2d theP, double theAng);
	Macad::Occt::gp_Circ2d^ Rotated(Macad::Occt::Pnt2d theP, double theAng);
	void Scale(Macad::Occt::Pnt2d theP, double theS);
	Macad::Occt::gp_Circ2d^ Scaled(Macad::Occt::Pnt2d theP, double theS);
	void Transform(Macad::Occt::Trsf2d theT);
	Macad::Occt::gp_Circ2d^ Transformed(Macad::Occt::Trsf2d theT);
	void Translate(Macad::Occt::Vec2d theV);
	Macad::Occt::gp_Circ2d^ Translated(Macad::Occt::Vec2d theV);
	void Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
	Macad::Occt::gp_Circ2d^ Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
}; // class gp_Circ2d

//---------------------------------------------------------------------
//  Class  gp_Cone
//---------------------------------------------------------------------
public ref class gp_Cone sealed : public BaseClass<::gp_Cone>
{

#ifdef Include_gp_Cone_h
public:
	Include_gp_Cone_h
#endif

public:
	gp_Cone(::gp_Cone* nativeInstance)
		: BaseClass<::gp_Cone>( nativeInstance, true )
	{}

	gp_Cone(::gp_Cone& nativeInstance)
		: BaseClass<::gp_Cone>( &nativeInstance, false )
	{}

	property ::gp_Cone* NativeInstance
	{
		::gp_Cone* get()
		{
			return static_cast<::gp_Cone*>(_NativeInstance);
		}
	}

public:
	gp_Cone();
	gp_Cone(Macad::Occt::Ax3 theA3, double theAng, double theRadius);
	gp_Cone(Macad::Occt::gp_Cone^ parameter1);
	void SetAxis(Macad::Occt::Ax1 theA1);
	void SetLocation(Macad::Occt::Pnt theLoc);
	void SetPosition(Macad::Occt::Ax3 theA3);
	void SetRadius(double theR);
	void SetSemiAngle(double theAng);
	Macad::Occt::Pnt Apex();
	void UReverse();
	void VReverse();
	bool Direct();
	Macad::Occt::Ax1 Axis();
	void Coefficients(double% theA1, double% theA2, double% theA3, double% theB1, double% theB2, double% theB3, double% theC1, double% theC2, double% theC3, double% theD);
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax3 Position();
	double RefRadius();
	double SemiAngle();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	void Mirror(Macad::Occt::Pnt theP);
	Macad::Occt::gp_Cone^ Mirrored(Macad::Occt::Pnt theP);
	void Mirror(Macad::Occt::Ax1 theA1);
	Macad::Occt::gp_Cone^ Mirrored(Macad::Occt::Ax1 theA1);
	void Mirror(Macad::Occt::Ax2 theA2);
	Macad::Occt::gp_Cone^ Mirrored(Macad::Occt::Ax2 theA2);
	void Rotate(Macad::Occt::Ax1 theA1, double theAng);
	Macad::Occt::gp_Cone^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
	void Scale(Macad::Occt::Pnt theP, double theS);
	Macad::Occt::gp_Cone^ Scaled(Macad::Occt::Pnt theP, double theS);
	void Transform(Macad::Occt::Trsf theT);
	Macad::Occt::gp_Cone^ Transformed(Macad::Occt::Trsf theT);
	void Translate(Macad::Occt::Vec theV);
	Macad::Occt::gp_Cone^ Translated(Macad::Occt::Vec theV);
	void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
	Macad::Occt::gp_Cone^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Cone

//---------------------------------------------------------------------
//  Class  gp_Cylinder
//---------------------------------------------------------------------
public ref class gp_Cylinder sealed : public BaseClass<::gp_Cylinder>
{

#ifdef Include_gp_Cylinder_h
public:
	Include_gp_Cylinder_h
#endif

public:
	gp_Cylinder(::gp_Cylinder* nativeInstance)
		: BaseClass<::gp_Cylinder>( nativeInstance, true )
	{}

	gp_Cylinder(::gp_Cylinder& nativeInstance)
		: BaseClass<::gp_Cylinder>( &nativeInstance, false )
	{}

	property ::gp_Cylinder* NativeInstance
	{
		::gp_Cylinder* get()
		{
			return static_cast<::gp_Cylinder*>(_NativeInstance);
		}
	}

public:
	gp_Cylinder();
	gp_Cylinder(Macad::Occt::Ax3 theA3, double theRadius);
	gp_Cylinder(Macad::Occt::gp_Cylinder^ parameter1);
	void SetAxis(Macad::Occt::Ax1 theA1);
	void SetLocation(Macad::Occt::Pnt theLoc);
	void SetPosition(Macad::Occt::Ax3 theA3);
	void SetRadius(double theR);
	void UReverse();
	void VReverse();
	bool Direct();
	Macad::Occt::Ax1 Axis();
	void Coefficients(double% theA1, double% theA2, double% theA3, double% theB1, double% theB2, double% theB3, double% theC1, double% theC2, double% theC3, double% theD);
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax3 Position();
	double Radius();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	void Mirror(Macad::Occt::Pnt theP);
	Macad::Occt::gp_Cylinder^ Mirrored(Macad::Occt::Pnt theP);
	void Mirror(Macad::Occt::Ax1 theA1);
	Macad::Occt::gp_Cylinder^ Mirrored(Macad::Occt::Ax1 theA1);
	void Mirror(Macad::Occt::Ax2 theA2);
	Macad::Occt::gp_Cylinder^ Mirrored(Macad::Occt::Ax2 theA2);
	void Rotate(Macad::Occt::Ax1 theA1, double theAng);
	Macad::Occt::gp_Cylinder^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
	void Scale(Macad::Occt::Pnt theP, double theS);
	Macad::Occt::gp_Cylinder^ Scaled(Macad::Occt::Pnt theP, double theS);
	void Transform(Macad::Occt::Trsf theT);
	Macad::Occt::gp_Cylinder^ Transformed(Macad::Occt::Trsf theT);
	void Translate(Macad::Occt::Vec theV);
	Macad::Occt::gp_Cylinder^ Translated(Macad::Occt::Vec theV);
	void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
	Macad::Occt::gp_Cylinder^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Cylinder

//---------------------------------------------------------------------
//  Class  gp_Elips
//---------------------------------------------------------------------
public ref class gp_Elips sealed : public BaseClass<::gp_Elips>
{

#ifdef Include_gp_Elips_h
public:
	Include_gp_Elips_h
#endif

public:
	gp_Elips(::gp_Elips* nativeInstance)
		: BaseClass<::gp_Elips>( nativeInstance, true )
	{}

	gp_Elips(::gp_Elips& nativeInstance)
		: BaseClass<::gp_Elips>( &nativeInstance, false )
	{}

	property ::gp_Elips* NativeInstance
	{
		::gp_Elips* get()
		{
			return static_cast<::gp_Elips*>(_NativeInstance);
		}
	}

public:
	gp_Elips();
	gp_Elips(Macad::Occt::Ax2 theA2, double theMajorRadius, double theMinorRadius);
	gp_Elips(Macad::Occt::gp_Elips^ parameter1);
	void SetAxis(Macad::Occt::Ax1 theA1);
	void SetLocation(Macad::Occt::Pnt theP);
	void SetMajorRadius(double theMajorRadius);
	void SetMinorRadius(double theMinorRadius);
	void SetPosition(Macad::Occt::Ax2 theA2);
	double Area();
	Macad::Occt::Ax1 Axis();
	Macad::Occt::Ax1 Directrix1();
	Macad::Occt::Ax1 Directrix2();
	double Eccentricity();
	double Focal();
	Macad::Occt::Pnt Focus1();
	Macad::Occt::Pnt Focus2();
	Macad::Occt::Pnt Location();
	double MajorRadius();
	double MinorRadius();
	double Parameter();
	Macad::Occt::Ax2 Position();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	void Mirror(Macad::Occt::Pnt theP);
	Macad::Occt::gp_Elips^ Mirrored(Macad::Occt::Pnt theP);
	void Mirror(Macad::Occt::Ax1 theA1);
	Macad::Occt::gp_Elips^ Mirrored(Macad::Occt::Ax1 theA1);
	void Mirror(Macad::Occt::Ax2 theA2);
	Macad::Occt::gp_Elips^ Mirrored(Macad::Occt::Ax2 theA2);
	void Rotate(Macad::Occt::Ax1 theA1, double theAng);
	Macad::Occt::gp_Elips^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
	void Scale(Macad::Occt::Pnt theP, double theS);
	Macad::Occt::gp_Elips^ Scaled(Macad::Occt::Pnt theP, double theS);
	void Transform(Macad::Occt::Trsf theT);
	Macad::Occt::gp_Elips^ Transformed(Macad::Occt::Trsf theT);
	void Translate(Macad::Occt::Vec theV);
	Macad::Occt::gp_Elips^ Translated(Macad::Occt::Vec theV);
	void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
	Macad::Occt::gp_Elips^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Elips

//---------------------------------------------------------------------
//  Class  gp_Elips2d
//---------------------------------------------------------------------
public ref class gp_Elips2d sealed : public BaseClass<::gp_Elips2d>
{

#ifdef Include_gp_Elips2d_h
public:
	Include_gp_Elips2d_h
#endif

public:
	gp_Elips2d(::gp_Elips2d* nativeInstance)
		: BaseClass<::gp_Elips2d>( nativeInstance, true )
	{}

	gp_Elips2d(::gp_Elips2d& nativeInstance)
		: BaseClass<::gp_Elips2d>( &nativeInstance, false )
	{}

	property ::gp_Elips2d* NativeInstance
	{
		::gp_Elips2d* get()
		{
			return static_cast<::gp_Elips2d*>(_NativeInstance);
		}
	}

public:
	gp_Elips2d();
	gp_Elips2d(Macad::Occt::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius, bool theIsSense);
	gp_Elips2d(Macad::Occt::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius);
	gp_Elips2d(Macad::Occt::Ax22d theA, double theMajorRadius, double theMinorRadius);
	gp_Elips2d(Macad::Occt::gp_Elips2d^ parameter1);
	void SetLocation(Macad::Occt::Pnt2d theP);
	void SetMajorRadius(double theMajorRadius);
	void SetMinorRadius(double theMinorRadius);
	void SetAxis(Macad::Occt::Ax22d theA);
	void SetXAxis(Macad::Occt::Ax2d theA);
	void SetYAxis(Macad::Occt::Ax2d theA);
	double Area();
	void Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF);
	Macad::Occt::Ax2d Directrix1();
	Macad::Occt::Ax2d Directrix2();
	double Eccentricity();
	double Focal();
	Macad::Occt::Pnt2d Focus1();
	Macad::Occt::Pnt2d Focus2();
	Macad::Occt::Pnt2d Location();
	double MajorRadius();
	double MinorRadius();
	double Parameter();
	Macad::Occt::Ax22d Axis();
	Macad::Occt::Ax2d XAxis();
	Macad::Occt::Ax2d YAxis();
	void Reverse();
	Macad::Occt::gp_Elips2d^ Reversed();
	bool IsDirect();
	void Mirror(Macad::Occt::Pnt2d theP);
	Macad::Occt::gp_Elips2d^ Mirrored(Macad::Occt::Pnt2d theP);
	void Mirror(Macad::Occt::Ax2d theA);
	Macad::Occt::gp_Elips2d^ Mirrored(Macad::Occt::Ax2d theA);
	void Rotate(Macad::Occt::Pnt2d theP, double theAng);
	Macad::Occt::gp_Elips2d^ Rotated(Macad::Occt::Pnt2d theP, double theAng);
	void Scale(Macad::Occt::Pnt2d theP, double theS);
	Macad::Occt::gp_Elips2d^ Scaled(Macad::Occt::Pnt2d theP, double theS);
	void Transform(Macad::Occt::Trsf2d theT);
	Macad::Occt::gp_Elips2d^ Transformed(Macad::Occt::Trsf2d theT);
	void Translate(Macad::Occt::Vec2d theV);
	Macad::Occt::gp_Elips2d^ Translated(Macad::Occt::Vec2d theV);
	void Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
	Macad::Occt::gp_Elips2d^ Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
}; // class gp_Elips2d

//---------------------------------------------------------------------
//  Class  gp_Hypr
//---------------------------------------------------------------------
public ref class gp_Hypr sealed : public BaseClass<::gp_Hypr>
{

#ifdef Include_gp_Hypr_h
public:
	Include_gp_Hypr_h
#endif

public:
	gp_Hypr(::gp_Hypr* nativeInstance)
		: BaseClass<::gp_Hypr>( nativeInstance, true )
	{}

	gp_Hypr(::gp_Hypr& nativeInstance)
		: BaseClass<::gp_Hypr>( &nativeInstance, false )
	{}

	property ::gp_Hypr* NativeInstance
	{
		::gp_Hypr* get()
		{
			return static_cast<::gp_Hypr*>(_NativeInstance);
		}
	}

public:
	gp_Hypr();
	gp_Hypr(Macad::Occt::Ax2 theA2, double theMajorRadius, double theMinorRadius);
	gp_Hypr(Macad::Occt::gp_Hypr^ parameter1);
	void SetAxis(Macad::Occt::Ax1 theA1);
	void SetLocation(Macad::Occt::Pnt theP);
	void SetMajorRadius(double theMajorRadius);
	void SetMinorRadius(double theMinorRadius);
	void SetPosition(Macad::Occt::Ax2 theA2);
	Macad::Occt::Ax1 Asymptote1();
	Macad::Occt::Ax1 Asymptote2();
	Macad::Occt::Ax1 Axis();
	Macad::Occt::gp_Hypr^ ConjugateBranch1();
	Macad::Occt::gp_Hypr^ ConjugateBranch2();
	Macad::Occt::Ax1 Directrix1();
	Macad::Occt::Ax1 Directrix2();
	double Eccentricity();
	double Focal();
	Macad::Occt::Pnt Focus1();
	Macad::Occt::Pnt Focus2();
	Macad::Occt::Pnt Location();
	double MajorRadius();
	double MinorRadius();
	Macad::Occt::gp_Hypr^ OtherBranch();
	double Parameter();
	Macad::Occt::Ax2 Position();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	void Mirror(Macad::Occt::Pnt theP);
	Macad::Occt::gp_Hypr^ Mirrored(Macad::Occt::Pnt theP);
	void Mirror(Macad::Occt::Ax1 theA1);
	Macad::Occt::gp_Hypr^ Mirrored(Macad::Occt::Ax1 theA1);
	void Mirror(Macad::Occt::Ax2 theA2);
	Macad::Occt::gp_Hypr^ Mirrored(Macad::Occt::Ax2 theA2);
	void Rotate(Macad::Occt::Ax1 theA1, double theAng);
	Macad::Occt::gp_Hypr^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
	void Scale(Macad::Occt::Pnt theP, double theS);
	Macad::Occt::gp_Hypr^ Scaled(Macad::Occt::Pnt theP, double theS);
	void Transform(Macad::Occt::Trsf theT);
	Macad::Occt::gp_Hypr^ Transformed(Macad::Occt::Trsf theT);
	void Translate(Macad::Occt::Vec theV);
	Macad::Occt::gp_Hypr^ Translated(Macad::Occt::Vec theV);
	void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
	Macad::Occt::gp_Hypr^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Hypr

//---------------------------------------------------------------------
//  Class  gp_Hypr2d
//---------------------------------------------------------------------
public ref class gp_Hypr2d sealed : public BaseClass<::gp_Hypr2d>
{

#ifdef Include_gp_Hypr2d_h
public:
	Include_gp_Hypr2d_h
#endif

public:
	gp_Hypr2d(::gp_Hypr2d* nativeInstance)
		: BaseClass<::gp_Hypr2d>( nativeInstance, true )
	{}

	gp_Hypr2d(::gp_Hypr2d& nativeInstance)
		: BaseClass<::gp_Hypr2d>( &nativeInstance, false )
	{}

	property ::gp_Hypr2d* NativeInstance
	{
		::gp_Hypr2d* get()
		{
			return static_cast<::gp_Hypr2d*>(_NativeInstance);
		}
	}

public:
	gp_Hypr2d();
	gp_Hypr2d(Macad::Occt::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius, bool theIsSense);
	gp_Hypr2d(Macad::Occt::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius);
	gp_Hypr2d(Macad::Occt::Ax22d theA, double theMajorRadius, double theMinorRadius);
	gp_Hypr2d(Macad::Occt::gp_Hypr2d^ parameter1);
	void SetLocation(Macad::Occt::Pnt2d theP);
	void SetMajorRadius(double theMajorRadius);
	void SetMinorRadius(double theMinorRadius);
	void SetAxis(Macad::Occt::Ax22d theA);
	void SetXAxis(Macad::Occt::Ax2d theA);
	void SetYAxis(Macad::Occt::Ax2d theA);
	Macad::Occt::Ax2d Asymptote1();
	Macad::Occt::Ax2d Asymptote2();
	void Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF);
	Macad::Occt::gp_Hypr2d^ ConjugateBranch1();
	Macad::Occt::gp_Hypr2d^ ConjugateBranch2();
	Macad::Occt::Ax2d Directrix1();
	Macad::Occt::Ax2d Directrix2();
	double Eccentricity();
	double Focal();
	Macad::Occt::Pnt2d Focus1();
	Macad::Occt::Pnt2d Focus2();
	Macad::Occt::Pnt2d Location();
	double MajorRadius();
	double MinorRadius();
	Macad::Occt::gp_Hypr2d^ OtherBranch();
	double Parameter();
	Macad::Occt::Ax22d Axis();
	Macad::Occt::Ax2d XAxis();
	Macad::Occt::Ax2d YAxis();
	void Reverse();
	Macad::Occt::gp_Hypr2d^ Reversed();
	bool IsDirect();
	void Mirror(Macad::Occt::Pnt2d theP);
	Macad::Occt::gp_Hypr2d^ Mirrored(Macad::Occt::Pnt2d theP);
	void Mirror(Macad::Occt::Ax2d theA);
	Macad::Occt::gp_Hypr2d^ Mirrored(Macad::Occt::Ax2d theA);
	void Rotate(Macad::Occt::Pnt2d theP, double theAng);
	Macad::Occt::gp_Hypr2d^ Rotated(Macad::Occt::Pnt2d theP, double theAng);
	void Scale(Macad::Occt::Pnt2d theP, double theS);
	Macad::Occt::gp_Hypr2d^ Scaled(Macad::Occt::Pnt2d theP, double theS);
	void Transform(Macad::Occt::Trsf2d theT);
	Macad::Occt::gp_Hypr2d^ Transformed(Macad::Occt::Trsf2d theT);
	void Translate(Macad::Occt::Vec2d theV);
	Macad::Occt::gp_Hypr2d^ Translated(Macad::Occt::Vec2d theV);
	void Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
	Macad::Occt::gp_Hypr2d^ Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
}; // class gp_Hypr2d

//---------------------------------------------------------------------
//  Class  gp_Lin
//---------------------------------------------------------------------
public ref class gp_Lin sealed : public BaseClass<::gp_Lin>
{

#ifdef Include_gp_Lin_h
public:
	Include_gp_Lin_h
#endif

public:
	gp_Lin(::gp_Lin* nativeInstance)
		: BaseClass<::gp_Lin>( nativeInstance, true )
	{}

	gp_Lin(::gp_Lin& nativeInstance)
		: BaseClass<::gp_Lin>( &nativeInstance, false )
	{}

	property ::gp_Lin* NativeInstance
	{
		::gp_Lin* get()
		{
			return static_cast<::gp_Lin*>(_NativeInstance);
		}
	}

public:
	gp_Lin();
	gp_Lin(Macad::Occt::Ax1 theA1);
	gp_Lin(Macad::Occt::Pnt theP, Macad::Occt::Dir theV);
	gp_Lin(Macad::Occt::gp_Lin^ parameter1);
	void Reverse();
	Macad::Occt::gp_Lin^ Reversed();
	void SetDirection(Macad::Occt::Dir theV);
	void SetLocation(Macad::Occt::Pnt theP);
	void SetPosition(Macad::Occt::Ax1 theA1);
	Macad::Occt::Dir Direction();
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax1 Position();
	double Angle(Macad::Occt::gp_Lin^ theOther);
	bool Contains(Macad::Occt::Pnt theP, double theLinearTolerance);
	double Distance(Macad::Occt::Pnt theP);
	double Distance(Macad::Occt::gp_Lin^ theOther);
	double SquareDistance(Macad::Occt::Pnt theP);
	double SquareDistance(Macad::Occt::gp_Lin^ theOther);
	Macad::Occt::gp_Lin^ Normal(Macad::Occt::Pnt theP);
	void Mirror(Macad::Occt::Pnt theP);
	Macad::Occt::gp_Lin^ Mirrored(Macad::Occt::Pnt theP);
	void Mirror(Macad::Occt::Ax1 theA1);
	Macad::Occt::gp_Lin^ Mirrored(Macad::Occt::Ax1 theA1);
	void Mirror(Macad::Occt::Ax2 theA2);
	Macad::Occt::gp_Lin^ Mirrored(Macad::Occt::Ax2 theA2);
	void Rotate(Macad::Occt::Ax1 theA1, double theAng);
	Macad::Occt::gp_Lin^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
	void Scale(Macad::Occt::Pnt theP, double theS);
	Macad::Occt::gp_Lin^ Scaled(Macad::Occt::Pnt theP, double theS);
	void Transform(Macad::Occt::Trsf theT);
	Macad::Occt::gp_Lin^ Transformed(Macad::Occt::Trsf theT);
	void Translate(Macad::Occt::Vec theV);
	Macad::Occt::gp_Lin^ Translated(Macad::Occt::Vec theV);
	void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
	Macad::Occt::gp_Lin^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Lin

//---------------------------------------------------------------------
//  Class  gp_Lin2d
//---------------------------------------------------------------------
public ref class gp_Lin2d sealed : public BaseClass<::gp_Lin2d>
{

#ifdef Include_gp_Lin2d_h
public:
	Include_gp_Lin2d_h
#endif

public:
	gp_Lin2d(::gp_Lin2d* nativeInstance)
		: BaseClass<::gp_Lin2d>( nativeInstance, true )
	{}

	gp_Lin2d(::gp_Lin2d& nativeInstance)
		: BaseClass<::gp_Lin2d>( &nativeInstance, false )
	{}

	property ::gp_Lin2d* NativeInstance
	{
		::gp_Lin2d* get()
		{
			return static_cast<::gp_Lin2d*>(_NativeInstance);
		}
	}

public:
	gp_Lin2d();
	gp_Lin2d(Macad::Occt::Ax2d theA);
	gp_Lin2d(Macad::Occt::Pnt2d theP, Macad::Occt::Dir2d theV);
	gp_Lin2d(double theA, double theB, double theC);
	gp_Lin2d(Macad::Occt::gp_Lin2d^ parameter1);
	void Reverse();
	Macad::Occt::gp_Lin2d^ Reversed();
	void SetDirection(Macad::Occt::Dir2d theV);
	void SetLocation(Macad::Occt::Pnt2d theP);
	void SetPosition(Macad::Occt::Ax2d theA);
	void Coefficients(double% theA, double% theB, double% theC);
	Macad::Occt::Dir2d Direction();
	Macad::Occt::Pnt2d Location();
	Macad::Occt::Ax2d Position();
	double Angle(Macad::Occt::gp_Lin2d^ theOther);
	bool Contains(Macad::Occt::Pnt2d theP, double theLinearTolerance);
	double Distance(Macad::Occt::Pnt2d theP);
	double Distance(Macad::Occt::gp_Lin2d^ theOther);
	double SquareDistance(Macad::Occt::Pnt2d theP);
	double SquareDistance(Macad::Occt::gp_Lin2d^ theOther);
	Macad::Occt::gp_Lin2d^ Normal(Macad::Occt::Pnt2d theP);
	void Mirror(Macad::Occt::Pnt2d theP);
	Macad::Occt::gp_Lin2d^ Mirrored(Macad::Occt::Pnt2d theP);
	void Mirror(Macad::Occt::Ax2d theA);
	Macad::Occt::gp_Lin2d^ Mirrored(Macad::Occt::Ax2d theA);
	void Rotate(Macad::Occt::Pnt2d theP, double theAng);
	Macad::Occt::gp_Lin2d^ Rotated(Macad::Occt::Pnt2d theP, double theAng);
	void Scale(Macad::Occt::Pnt2d theP, double theS);
	Macad::Occt::gp_Lin2d^ Scaled(Macad::Occt::Pnt2d theP, double theS);
	void Transform(Macad::Occt::Trsf2d theT);
	Macad::Occt::gp_Lin2d^ Transformed(Macad::Occt::Trsf2d theT);
	void Translate(Macad::Occt::Vec2d theV);
	Macad::Occt::gp_Lin2d^ Translated(Macad::Occt::Vec2d theV);
	void Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
	Macad::Occt::gp_Lin2d^ Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
}; // class gp_Lin2d

//---------------------------------------------------------------------
//  Class  gp_Parab
//---------------------------------------------------------------------
public ref class gp_Parab sealed : public BaseClass<::gp_Parab>
{

#ifdef Include_gp_Parab_h
public:
	Include_gp_Parab_h
#endif

public:
	gp_Parab(::gp_Parab* nativeInstance)
		: BaseClass<::gp_Parab>( nativeInstance, true )
	{}

	gp_Parab(::gp_Parab& nativeInstance)
		: BaseClass<::gp_Parab>( &nativeInstance, false )
	{}

	property ::gp_Parab* NativeInstance
	{
		::gp_Parab* get()
		{
			return static_cast<::gp_Parab*>(_NativeInstance);
		}
	}

public:
	gp_Parab();
	gp_Parab(Macad::Occt::Ax2 theA2, double theFocal);
	gp_Parab(Macad::Occt::Ax1 theD, Macad::Occt::Pnt theF);
	gp_Parab(Macad::Occt::gp_Parab^ parameter1);
	void SetAxis(Macad::Occt::Ax1 theA1);
	void SetFocal(double theFocal);
	void SetLocation(Macad::Occt::Pnt theP);
	void SetPosition(Macad::Occt::Ax2 theA2);
	Macad::Occt::Ax1 Axis();
	Macad::Occt::Ax1 Directrix();
	double Focal();
	Macad::Occt::Pnt Focus();
	Macad::Occt::Pnt Location();
	double Parameter();
	Macad::Occt::Ax2 Position();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	void Mirror(Macad::Occt::Pnt theP);
	Macad::Occt::gp_Parab^ Mirrored(Macad::Occt::Pnt theP);
	void Mirror(Macad::Occt::Ax1 theA1);
	Macad::Occt::gp_Parab^ Mirrored(Macad::Occt::Ax1 theA1);
	void Mirror(Macad::Occt::Ax2 theA2);
	Macad::Occt::gp_Parab^ Mirrored(Macad::Occt::Ax2 theA2);
	void Rotate(Macad::Occt::Ax1 theA1, double theAng);
	Macad::Occt::gp_Parab^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
	void Scale(Macad::Occt::Pnt theP, double theS);
	Macad::Occt::gp_Parab^ Scaled(Macad::Occt::Pnt theP, double theS);
	void Transform(Macad::Occt::Trsf theT);
	Macad::Occt::gp_Parab^ Transformed(Macad::Occt::Trsf theT);
	void Translate(Macad::Occt::Vec theV);
	Macad::Occt::gp_Parab^ Translated(Macad::Occt::Vec theV);
	void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
	Macad::Occt::gp_Parab^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Parab

//---------------------------------------------------------------------
//  Class  gp_Parab2d
//---------------------------------------------------------------------
public ref class gp_Parab2d sealed : public BaseClass<::gp_Parab2d>
{

#ifdef Include_gp_Parab2d_h
public:
	Include_gp_Parab2d_h
#endif

public:
	gp_Parab2d(::gp_Parab2d* nativeInstance)
		: BaseClass<::gp_Parab2d>( nativeInstance, true )
	{}

	gp_Parab2d(::gp_Parab2d& nativeInstance)
		: BaseClass<::gp_Parab2d>( &nativeInstance, false )
	{}

	property ::gp_Parab2d* NativeInstance
	{
		::gp_Parab2d* get()
		{
			return static_cast<::gp_Parab2d*>(_NativeInstance);
		}
	}

public:
	gp_Parab2d();
	gp_Parab2d(Macad::Occt::Ax2d theMirrorAxis, double theFocalLength, bool theSense);
	gp_Parab2d(Macad::Occt::Ax2d theMirrorAxis, double theFocalLength);
	gp_Parab2d(Macad::Occt::Ax22d theAxes, double theFocalLength);
	gp_Parab2d(Macad::Occt::Ax2d theDirectrix, Macad::Occt::Pnt2d theFocus, bool theSense);
	gp_Parab2d(Macad::Occt::Ax2d theDirectrix, Macad::Occt::Pnt2d theFocus);
	gp_Parab2d(Macad::Occt::gp_Parab2d^ parameter1);
	void SetFocal(double theFocal);
	void SetLocation(Macad::Occt::Pnt2d theP);
	void SetMirrorAxis(Macad::Occt::Ax2d theA);
	void SetAxis(Macad::Occt::Ax22d theA);
	void Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF);
	Macad::Occt::Ax2d Directrix();
	double Focal();
	Macad::Occt::Pnt2d Focus();
	Macad::Occt::Pnt2d Location();
	Macad::Occt::Ax2d MirrorAxis();
	Macad::Occt::Ax22d Axis();
	double Parameter();
	void Reverse();
	Macad::Occt::gp_Parab2d^ Reversed();
	bool IsDirect();
	void Mirror(Macad::Occt::Pnt2d theP);
	Macad::Occt::gp_Parab2d^ Mirrored(Macad::Occt::Pnt2d theP);
	void Mirror(Macad::Occt::Ax2d theA);
	Macad::Occt::gp_Parab2d^ Mirrored(Macad::Occt::Ax2d theA);
	void Rotate(Macad::Occt::Pnt2d theP, double theAng);
	Macad::Occt::gp_Parab2d^ Rotated(Macad::Occt::Pnt2d theP, double theAng);
	void Scale(Macad::Occt::Pnt2d theP, double theS);
	Macad::Occt::gp_Parab2d^ Scaled(Macad::Occt::Pnt2d theP, double theS);
	void Transform(Macad::Occt::Trsf2d theT);
	Macad::Occt::gp_Parab2d^ Transformed(Macad::Occt::Trsf2d theT);
	void Translate(Macad::Occt::Vec2d theV);
	Macad::Occt::gp_Parab2d^ Translated(Macad::Occt::Vec2d theV);
	void Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
	Macad::Occt::gp_Parab2d^ Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2);
}; // class gp_Parab2d

//---------------------------------------------------------------------
//  Class  gp_QuaternionNLerp
//---------------------------------------------------------------------
public ref class gp_QuaternionNLerp sealed : public BaseClass<::gp_QuaternionNLerp>
{

#ifdef Include_gp_QuaternionNLerp_h
public:
	Include_gp_QuaternionNLerp_h
#endif

public:
	gp_QuaternionNLerp(::gp_QuaternionNLerp* nativeInstance)
		: BaseClass<::gp_QuaternionNLerp>( nativeInstance, true )
	{}

	gp_QuaternionNLerp(::gp_QuaternionNLerp& nativeInstance)
		: BaseClass<::gp_QuaternionNLerp>( &nativeInstance, false )
	{}

	property ::gp_QuaternionNLerp* NativeInstance
	{
		::gp_QuaternionNLerp* get()
		{
			return static_cast<::gp_QuaternionNLerp*>(_NativeInstance);
		}
	}

public:
	gp_QuaternionNLerp();
	gp_QuaternionNLerp(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd);
	gp_QuaternionNLerp(Macad::Occt::gp_QuaternionNLerp^ parameter1);
	static Macad::Occt::Quaternion Interpolate(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd, double theT);
	void Init(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd);
	void InitFromUnit(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd);
	void Interpolate(double theT, Macad::Occt::Quaternion% theResultQ);
}; // class gp_QuaternionNLerp

//---------------------------------------------------------------------
//  Class  gp_QuaternionSLerp
//---------------------------------------------------------------------
public ref class gp_QuaternionSLerp sealed : public BaseClass<::gp_QuaternionSLerp>
{

#ifdef Include_gp_QuaternionSLerp_h
public:
	Include_gp_QuaternionSLerp_h
#endif

public:
	gp_QuaternionSLerp(::gp_QuaternionSLerp* nativeInstance)
		: BaseClass<::gp_QuaternionSLerp>( nativeInstance, true )
	{}

	gp_QuaternionSLerp(::gp_QuaternionSLerp& nativeInstance)
		: BaseClass<::gp_QuaternionSLerp>( &nativeInstance, false )
	{}

	property ::gp_QuaternionSLerp* NativeInstance
	{
		::gp_QuaternionSLerp* get()
		{
			return static_cast<::gp_QuaternionSLerp*>(_NativeInstance);
		}
	}

public:
	gp_QuaternionSLerp();
	gp_QuaternionSLerp(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd);
	gp_QuaternionSLerp(Macad::Occt::gp_QuaternionSLerp^ parameter1);
	static Macad::Occt::Quaternion Interpolate(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd, double theT);
	void Init(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd);
	void InitFromUnit(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd);
	void Interpolate(double theT, Macad::Occt::Quaternion% theResultQ);
}; // class gp_QuaternionSLerp

//---------------------------------------------------------------------
//  Class  gp_Sphere
//---------------------------------------------------------------------
public ref class gp_Sphere sealed : public BaseClass<::gp_Sphere>
{

#ifdef Include_gp_Sphere_h
public:
	Include_gp_Sphere_h
#endif

public:
	gp_Sphere(::gp_Sphere* nativeInstance)
		: BaseClass<::gp_Sphere>( nativeInstance, true )
	{}

	gp_Sphere(::gp_Sphere& nativeInstance)
		: BaseClass<::gp_Sphere>( &nativeInstance, false )
	{}

	property ::gp_Sphere* NativeInstance
	{
		::gp_Sphere* get()
		{
			return static_cast<::gp_Sphere*>(_NativeInstance);
		}
	}

public:
	gp_Sphere();
	gp_Sphere(Macad::Occt::Ax3 theA3, double theRadius);
	gp_Sphere(Macad::Occt::gp_Sphere^ parameter1);
	void SetLocation(Macad::Occt::Pnt theLoc);
	void SetPosition(Macad::Occt::Ax3 theA3);
	void SetRadius(double theR);
	double Area();
	void Coefficients(double% theA1, double% theA2, double% theA3, double% theB1, double% theB2, double% theB3, double% theC1, double% theC2, double% theC3, double% theD);
	void UReverse();
	void VReverse();
	bool Direct();
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax3 Position();
	double Radius();
	double Volume();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	void Mirror(Macad::Occt::Pnt theP);
	Macad::Occt::gp_Sphere^ Mirrored(Macad::Occt::Pnt theP);
	void Mirror(Macad::Occt::Ax1 theA1);
	Macad::Occt::gp_Sphere^ Mirrored(Macad::Occt::Ax1 theA1);
	void Mirror(Macad::Occt::Ax2 theA2);
	Macad::Occt::gp_Sphere^ Mirrored(Macad::Occt::Ax2 theA2);
	void Rotate(Macad::Occt::Ax1 theA1, double theAng);
	Macad::Occt::gp_Sphere^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
	void Scale(Macad::Occt::Pnt theP, double theS);
	Macad::Occt::gp_Sphere^ Scaled(Macad::Occt::Pnt theP, double theS);
	void Transform(Macad::Occt::Trsf theT);
	Macad::Occt::gp_Sphere^ Transformed(Macad::Occt::Trsf theT);
	void Translate(Macad::Occt::Vec theV);
	Macad::Occt::gp_Sphere^ Translated(Macad::Occt::Vec theV);
	void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
	Macad::Occt::gp_Sphere^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Sphere

//---------------------------------------------------------------------
//  Class  gp_Torus
//---------------------------------------------------------------------
public ref class gp_Torus sealed : public BaseClass<::gp_Torus>
{

#ifdef Include_gp_Torus_h
public:
	Include_gp_Torus_h
#endif

public:
	gp_Torus(::gp_Torus* nativeInstance)
		: BaseClass<::gp_Torus>( nativeInstance, true )
	{}

	gp_Torus(::gp_Torus& nativeInstance)
		: BaseClass<::gp_Torus>( &nativeInstance, false )
	{}

	property ::gp_Torus* NativeInstance
	{
		::gp_Torus* get()
		{
			return static_cast<::gp_Torus*>(_NativeInstance);
		}
	}

public:
	gp_Torus();
	gp_Torus(Macad::Occt::Ax3 theA3, double theMajorRadius, double theMinorRadius);
	gp_Torus(Macad::Occt::gp_Torus^ parameter1);
	void SetAxis(Macad::Occt::Ax1 theA1);
	void SetLocation(Macad::Occt::Pnt theLoc);
	void SetMajorRadius(double theMajorRadius);
	void SetMinorRadius(double theMinorRadius);
	void SetPosition(Macad::Occt::Ax3 theA3);
	double Area();
	void UReverse();
	void VReverse();
	bool Direct();
	Macad::Occt::Ax1 Axis();
	void Coefficients(Macad::Occt::TColStd_Array1OfReal^ theCoef);
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax3 Position();
	double MajorRadius();
	double MinorRadius();
	double Volume();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	void Mirror(Macad::Occt::Pnt theP);
	Macad::Occt::gp_Torus^ Mirrored(Macad::Occt::Pnt theP);
	void Mirror(Macad::Occt::Ax1 theA1);
	Macad::Occt::gp_Torus^ Mirrored(Macad::Occt::Ax1 theA1);
	void Mirror(Macad::Occt::Ax2 theA2);
	Macad::Occt::gp_Torus^ Mirrored(Macad::Occt::Ax2 theA2);
	void Rotate(Macad::Occt::Ax1 theA1, double theAng);
	Macad::Occt::gp_Torus^ Rotated(Macad::Occt::Ax1 theA1, double theAng);
	void Scale(Macad::Occt::Pnt theP, double theS);
	Macad::Occt::gp_Torus^ Scaled(Macad::Occt::Pnt theP, double theS);
	void Transform(Macad::Occt::Trsf theT);
	Macad::Occt::gp_Torus^ Transformed(Macad::Occt::Trsf theT);
	void Translate(Macad::Occt::Vec theV);
	Macad::Occt::gp_Torus^ Translated(Macad::Occt::Vec theV);
	void Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
	Macad::Occt::gp_Torus^ Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2);
}; // class gp_Torus

}; // namespace Occt
}; // namespace Macad
