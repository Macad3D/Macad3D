// Generated wrapper code for package gp

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
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
	gp_GTrsf(Macad::Occt::Trsf T);
	gp_GTrsf(Macad::Occt::Mat M, Macad::Occt::XYZ V);
	gp_GTrsf(Macad::Occt::gp_GTrsf^ parameter1);
	void SetAffinity(Macad::Occt::Ax1 A1, double Ratio);
	void SetAffinity(Macad::Occt::Ax2 A2, double Ratio);
	void SetValue(int Row, int Col, double Value);
	void SetVectorialPart(Macad::Occt::Mat Matrix);
	void SetTranslationPart(Macad::Occt::XYZ Coord);
	void SetTrsf(Macad::Occt::Trsf T);
	bool IsNegative();
	bool IsSingular();
	Macad::Occt::TrsfForm Form();
	void SetForm();
	Macad::Occt::XYZ TranslationPart();
	Macad::Occt::Mat VectorialPart();
	double Value(int Row, int Col);
	void Invert();
	Macad::Occt::gp_GTrsf^ Inverted();
	Macad::Occt::gp_GTrsf^ Multiplied(Macad::Occt::gp_GTrsf^ T);
	void Multiply(Macad::Occt::gp_GTrsf^ T);
	void PreMultiply(Macad::Occt::gp_GTrsf^ T);
	void Power(int N);
	Macad::Occt::gp_GTrsf^ Powered(int N);
	void Transforms(Macad::Occt::XYZ% Coord);
	void Transforms(double% X, double% Y, double% Z);
	Macad::Occt::Trsf Trsf();
}; // class gp_GTrsf

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
	gp_Lin(Macad::Occt::Ax1 A1);
	gp_Lin(Macad::Occt::Pnt P, Macad::Occt::Dir V);
	gp_Lin(Macad::Occt::gp_Lin^ parameter1);
	void Reverse();
	Macad::Occt::gp_Lin^ Reversed();
	void SetDirection(Macad::Occt::Dir V);
	void SetLocation(Macad::Occt::Pnt P);
	void SetPosition(Macad::Occt::Ax1 A1);
	Macad::Occt::Dir Direction();
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax1 Position();
	double Angle(Macad::Occt::gp_Lin^ Other);
	bool Contains(Macad::Occt::Pnt P, double LinearTolerance);
	double Distance(Macad::Occt::Pnt P);
	double Distance(Macad::Occt::gp_Lin^ Other);
	double SquareDistance(Macad::Occt::Pnt P);
	double SquareDistance(Macad::Occt::gp_Lin^ Other);
	Macad::Occt::gp_Lin^ Normal(Macad::Occt::Pnt P);
	void Mirror(Macad::Occt::Pnt P);
	Macad::Occt::gp_Lin^ Mirrored(Macad::Occt::Pnt P);
	void Mirror(Macad::Occt::Ax1 A1);
	Macad::Occt::gp_Lin^ Mirrored(Macad::Occt::Ax1 A1);
	void Mirror(Macad::Occt::Ax2 A2);
	Macad::Occt::gp_Lin^ Mirrored(Macad::Occt::Ax2 A2);
	void Rotate(Macad::Occt::Ax1 A1, double Ang);
	Macad::Occt::gp_Lin^ Rotated(Macad::Occt::Ax1 A1, double Ang);
	void Scale(Macad::Occt::Pnt P, double S);
	Macad::Occt::gp_Lin^ Scaled(Macad::Occt::Pnt P, double S);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::gp_Lin^ Transformed(Macad::Occt::Trsf T);
	void Translate(Macad::Occt::Vec V);
	Macad::Occt::gp_Lin^ Translated(Macad::Occt::Vec V);
	void Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	Macad::Occt::gp_Lin^ Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
}; // class gp_Lin

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
	gp_Circ(Macad::Occt::Ax2 A2, double Radius);
	gp_Circ(Macad::Occt::gp_Circ^ parameter1);
	void SetAxis(Macad::Occt::Ax1 A1);
	void SetLocation(Macad::Occt::Pnt P);
	void SetPosition(Macad::Occt::Ax2 A2);
	void SetRadius(double Radius);
	double Area();
	Macad::Occt::Ax1 Axis();
	double Length();
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax2 Position();
	double Radius();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	double Distance(Macad::Occt::Pnt P);
	double SquareDistance(Macad::Occt::Pnt P);
	bool Contains(Macad::Occt::Pnt P, double LinearTolerance);
	void Mirror(Macad::Occt::Pnt P);
	Macad::Occt::gp_Circ^ Mirrored(Macad::Occt::Pnt P);
	void Mirror(Macad::Occt::Ax1 A1);
	Macad::Occt::gp_Circ^ Mirrored(Macad::Occt::Ax1 A1);
	void Mirror(Macad::Occt::Ax2 A2);
	Macad::Occt::gp_Circ^ Mirrored(Macad::Occt::Ax2 A2);
	void Rotate(Macad::Occt::Ax1 A1, double Ang);
	Macad::Occt::gp_Circ^ Rotated(Macad::Occt::Ax1 A1, double Ang);
	void Scale(Macad::Occt::Pnt P, double S);
	Macad::Occt::gp_Circ^ Scaled(Macad::Occt::Pnt P, double S);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::gp_Circ^ Transformed(Macad::Occt::Trsf T);
	void Translate(Macad::Occt::Vec V);
	Macad::Occt::gp_Circ^ Translated(Macad::Occt::Vec V);
	void Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	Macad::Occt::gp_Circ^ Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
}; // class gp_Circ

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
	gp_Elips(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
	gp_Elips(Macad::Occt::gp_Elips^ parameter1);
	void SetAxis(Macad::Occt::Ax1 A1);
	void SetLocation(Macad::Occt::Pnt P);
	void SetMajorRadius(double MajorRadius);
	void SetMinorRadius(double MinorRadius);
	void SetPosition(Macad::Occt::Ax2 A2);
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
	void Mirror(Macad::Occt::Pnt P);
	Macad::Occt::gp_Elips^ Mirrored(Macad::Occt::Pnt P);
	void Mirror(Macad::Occt::Ax1 A1);
	Macad::Occt::gp_Elips^ Mirrored(Macad::Occt::Ax1 A1);
	void Mirror(Macad::Occt::Ax2 A2);
	Macad::Occt::gp_Elips^ Mirrored(Macad::Occt::Ax2 A2);
	void Rotate(Macad::Occt::Ax1 A1, double Ang);
	Macad::Occt::gp_Elips^ Rotated(Macad::Occt::Ax1 A1, double Ang);
	void Scale(Macad::Occt::Pnt P, double S);
	Macad::Occt::gp_Elips^ Scaled(Macad::Occt::Pnt P, double S);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::gp_Elips^ Transformed(Macad::Occt::Trsf T);
	void Translate(Macad::Occt::Vec V);
	Macad::Occt::gp_Elips^ Translated(Macad::Occt::Vec V);
	void Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	Macad::Occt::gp_Elips^ Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
}; // class gp_Elips

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
	gp_Hypr(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
	gp_Hypr(Macad::Occt::gp_Hypr^ parameter1);
	void SetAxis(Macad::Occt::Ax1 A1);
	void SetLocation(Macad::Occt::Pnt P);
	void SetMajorRadius(double MajorRadius);
	void SetMinorRadius(double MinorRadius);
	void SetPosition(Macad::Occt::Ax2 A2);
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
	void Mirror(Macad::Occt::Pnt P);
	Macad::Occt::gp_Hypr^ Mirrored(Macad::Occt::Pnt P);
	void Mirror(Macad::Occt::Ax1 A1);
	Macad::Occt::gp_Hypr^ Mirrored(Macad::Occt::Ax1 A1);
	void Mirror(Macad::Occt::Ax2 A2);
	Macad::Occt::gp_Hypr^ Mirrored(Macad::Occt::Ax2 A2);
	void Rotate(Macad::Occt::Ax1 A1, double Ang);
	Macad::Occt::gp_Hypr^ Rotated(Macad::Occt::Ax1 A1, double Ang);
	void Scale(Macad::Occt::Pnt P, double S);
	Macad::Occt::gp_Hypr^ Scaled(Macad::Occt::Pnt P, double S);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::gp_Hypr^ Transformed(Macad::Occt::Trsf T);
	void Translate(Macad::Occt::Vec V);
	Macad::Occt::gp_Hypr^ Translated(Macad::Occt::Vec V);
	void Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	Macad::Occt::gp_Hypr^ Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
}; // class gp_Hypr

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
	gp_Parab(Macad::Occt::Ax2 A2, double Focal);
	gp_Parab(Macad::Occt::Ax1 D, Macad::Occt::Pnt F);
	gp_Parab(Macad::Occt::gp_Parab^ parameter1);
	void SetAxis(Macad::Occt::Ax1 A1);
	void SetFocal(double Focal);
	void SetLocation(Macad::Occt::Pnt P);
	void SetPosition(Macad::Occt::Ax2 A2);
	Macad::Occt::Ax1 Axis();
	Macad::Occt::Ax1 Directrix();
	double Focal();
	Macad::Occt::Pnt Focus();
	Macad::Occt::Pnt Location();
	double Parameter();
	Macad::Occt::Ax2 Position();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	void Mirror(Macad::Occt::Pnt P);
	Macad::Occt::gp_Parab^ Mirrored(Macad::Occt::Pnt P);
	void Mirror(Macad::Occt::Ax1 A1);
	Macad::Occt::gp_Parab^ Mirrored(Macad::Occt::Ax1 A1);
	void Mirror(Macad::Occt::Ax2 A2);
	Macad::Occt::gp_Parab^ Mirrored(Macad::Occt::Ax2 A2);
	void Rotate(Macad::Occt::Ax1 A1, double Ang);
	Macad::Occt::gp_Parab^ Rotated(Macad::Occt::Ax1 A1, double Ang);
	void Scale(Macad::Occt::Pnt P, double S);
	Macad::Occt::gp_Parab^ Scaled(Macad::Occt::Pnt P, double S);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::gp_Parab^ Transformed(Macad::Occt::Trsf T);
	void Translate(Macad::Occt::Vec V);
	Macad::Occt::gp_Parab^ Translated(Macad::Occt::Vec V);
	void Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	Macad::Occt::gp_Parab^ Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
}; // class gp_Parab

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
	gp_Cylinder(Macad::Occt::Ax3 A3, double Radius);
	gp_Cylinder(Macad::Occt::gp_Cylinder^ parameter1);
	void SetAxis(Macad::Occt::Ax1 A1);
	void SetLocation(Macad::Occt::Pnt Loc);
	void SetPosition(Macad::Occt::Ax3 A3);
	void SetRadius(double R);
	void UReverse();
	void VReverse();
	bool Direct();
	Macad::Occt::Ax1 Axis();
	void Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D);
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax3 Position();
	double Radius();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	void Mirror(Macad::Occt::Pnt P);
	Macad::Occt::gp_Cylinder^ Mirrored(Macad::Occt::Pnt P);
	void Mirror(Macad::Occt::Ax1 A1);
	Macad::Occt::gp_Cylinder^ Mirrored(Macad::Occt::Ax1 A1);
	void Mirror(Macad::Occt::Ax2 A2);
	Macad::Occt::gp_Cylinder^ Mirrored(Macad::Occt::Ax2 A2);
	void Rotate(Macad::Occt::Ax1 A1, double Ang);
	Macad::Occt::gp_Cylinder^ Rotated(Macad::Occt::Ax1 A1, double Ang);
	void Scale(Macad::Occt::Pnt P, double S);
	Macad::Occt::gp_Cylinder^ Scaled(Macad::Occt::Pnt P, double S);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::gp_Cylinder^ Transformed(Macad::Occt::Trsf T);
	void Translate(Macad::Occt::Vec V);
	Macad::Occt::gp_Cylinder^ Translated(Macad::Occt::Vec V);
	void Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	Macad::Occt::gp_Cylinder^ Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
}; // class gp_Cylinder

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
	gp_Sphere(Macad::Occt::Ax3 A3, double Radius);
	gp_Sphere(Macad::Occt::gp_Sphere^ parameter1);
	void SetLocation(Macad::Occt::Pnt Loc);
	void SetPosition(Macad::Occt::Ax3 A3);
	void SetRadius(double R);
	double Area();
	void Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D);
	void UReverse();
	void VReverse();
	bool Direct();
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax3 Position();
	double Radius();
	double Volume();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	void Mirror(Macad::Occt::Pnt P);
	Macad::Occt::gp_Sphere^ Mirrored(Macad::Occt::Pnt P);
	void Mirror(Macad::Occt::Ax1 A1);
	Macad::Occt::gp_Sphere^ Mirrored(Macad::Occt::Ax1 A1);
	void Mirror(Macad::Occt::Ax2 A2);
	Macad::Occt::gp_Sphere^ Mirrored(Macad::Occt::Ax2 A2);
	void Rotate(Macad::Occt::Ax1 A1, double Ang);
	Macad::Occt::gp_Sphere^ Rotated(Macad::Occt::Ax1 A1, double Ang);
	void Scale(Macad::Occt::Pnt P, double S);
	Macad::Occt::gp_Sphere^ Scaled(Macad::Occt::Pnt P, double S);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::gp_Sphere^ Transformed(Macad::Occt::Trsf T);
	void Translate(Macad::Occt::Vec V);
	Macad::Occt::gp_Sphere^ Translated(Macad::Occt::Vec V);
	void Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	Macad::Occt::gp_Sphere^ Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
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
	gp_Torus(Macad::Occt::Ax3 A3, double MajorRadius, double MinorRadius);
	gp_Torus(Macad::Occt::gp_Torus^ parameter1);
	void SetAxis(Macad::Occt::Ax1 A1);
	void SetLocation(Macad::Occt::Pnt Loc);
	void SetMajorRadius(double MajorRadius);
	void SetMinorRadius(double MinorRadius);
	void SetPosition(Macad::Occt::Ax3 A3);
	double Area();
	void UReverse();
	void VReverse();
	bool Direct();
	Macad::Occt::Ax1 Axis();
	void Coefficients(Macad::Occt::TColStd_Array1OfReal^ Coef);
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax3 Position();
	double MajorRadius();
	double MinorRadius();
	double Volume();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	void Mirror(Macad::Occt::Pnt P);
	Macad::Occt::gp_Torus^ Mirrored(Macad::Occt::Pnt P);
	void Mirror(Macad::Occt::Ax1 A1);
	Macad::Occt::gp_Torus^ Mirrored(Macad::Occt::Ax1 A1);
	void Mirror(Macad::Occt::Ax2 A2);
	Macad::Occt::gp_Torus^ Mirrored(Macad::Occt::Ax2 A2);
	void Rotate(Macad::Occt::Ax1 A1, double Ang);
	Macad::Occt::gp_Torus^ Rotated(Macad::Occt::Ax1 A1, double Ang);
	void Scale(Macad::Occt::Pnt P, double S);
	Macad::Occt::gp_Torus^ Scaled(Macad::Occt::Pnt P, double S);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::gp_Torus^ Transformed(Macad::Occt::Trsf T);
	void Translate(Macad::Occt::Vec V);
	Macad::Occt::gp_Torus^ Translated(Macad::Occt::Vec V);
	void Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	Macad::Occt::gp_Torus^ Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
}; // class gp_Torus

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
	gp_Cone(Macad::Occt::Ax3 A3, double Ang, double Radius);
	gp_Cone(Macad::Occt::gp_Cone^ parameter1);
	void SetAxis(Macad::Occt::Ax1 A1);
	void SetLocation(Macad::Occt::Pnt Loc);
	void SetPosition(Macad::Occt::Ax3 A3);
	void SetRadius(double R);
	void SetSemiAngle(double Ang);
	Macad::Occt::Pnt Apex();
	void UReverse();
	void VReverse();
	bool Direct();
	Macad::Occt::Ax1 Axis();
	void Coefficients(double% A1, double% A2, double% A3, double% B1, double% B2, double% B3, double% C1, double% C2, double% C3, double% D);
	Macad::Occt::Pnt Location();
	Macad::Occt::Ax3 Position();
	double RefRadius();
	double SemiAngle();
	Macad::Occt::Ax1 XAxis();
	Macad::Occt::Ax1 YAxis();
	void Mirror(Macad::Occt::Pnt P);
	Macad::Occt::gp_Cone^ Mirrored(Macad::Occt::Pnt P);
	void Mirror(Macad::Occt::Ax1 A1);
	Macad::Occt::gp_Cone^ Mirrored(Macad::Occt::Ax1 A1);
	void Mirror(Macad::Occt::Ax2 A2);
	Macad::Occt::gp_Cone^ Mirrored(Macad::Occt::Ax2 A2);
	void Rotate(Macad::Occt::Ax1 A1, double Ang);
	Macad::Occt::gp_Cone^ Rotated(Macad::Occt::Ax1 A1, double Ang);
	void Scale(Macad::Occt::Pnt P, double S);
	Macad::Occt::gp_Cone^ Scaled(Macad::Occt::Pnt P, double S);
	void Transform(Macad::Occt::Trsf T);
	Macad::Occt::gp_Cone^ Transformed(Macad::Occt::Trsf T);
	void Translate(Macad::Occt::Vec V);
	Macad::Occt::gp_Cone^ Translated(Macad::Occt::Vec V);
	void Translate(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	Macad::Occt::gp_Cone^ Translated(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
}; // class gp_Cone

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
	gp_GTrsf2d(Macad::Occt::Trsf2d T);
	gp_GTrsf2d(Macad::Occt::Mat2d M, Macad::Occt::XY V);
	gp_GTrsf2d(Macad::Occt::gp_GTrsf2d^ parameter1);
	void SetAffinity(Macad::Occt::Ax2d A, double Ratio);
	void SetValue(int Row, int Col, double Value);
	void SetTranslationPart(Macad::Occt::XY Coord);
	void SetTrsf2d(Macad::Occt::Trsf2d T);
	void SetVectorialPart(Macad::Occt::Mat2d Matrix);
	bool IsNegative();
	bool IsSingular();
	Macad::Occt::TrsfForm Form();
	Macad::Occt::XY TranslationPart();
	Macad::Occt::Mat2d VectorialPart();
	double Value(int Row, int Col);
	void Invert();
	Macad::Occt::gp_GTrsf2d^ Inverted();
	Macad::Occt::gp_GTrsf2d^ Multiplied(Macad::Occt::gp_GTrsf2d^ T);
	void Multiply(Macad::Occt::gp_GTrsf2d^ T);
	void PreMultiply(Macad::Occt::gp_GTrsf2d^ T);
	void Power(int N);
	Macad::Occt::gp_GTrsf2d^ Powered(int N);
	void Transforms(Macad::Occt::XY% Coord);
	Macad::Occt::XY Transformed(Macad::Occt::XY Coord);
	void Transforms(double% X, double% Y);
	Macad::Occt::Trsf2d Trsf2d();
}; // class gp_GTrsf2d

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
	gp_Lin2d(Macad::Occt::Ax2d A);
	gp_Lin2d(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d V);
	gp_Lin2d(double A, double B, double C);
	gp_Lin2d(Macad::Occt::gp_Lin2d^ parameter1);
	void Reverse();
	Macad::Occt::gp_Lin2d^ Reversed();
	void SetDirection(Macad::Occt::Dir2d V);
	void SetLocation(Macad::Occt::Pnt2d P);
	void SetPosition(Macad::Occt::Ax2d A);
	void Coefficients(double% A, double% B, double% C);
	Macad::Occt::Dir2d Direction();
	Macad::Occt::Pnt2d Location();
	Macad::Occt::Ax2d Position();
	double Angle(Macad::Occt::gp_Lin2d^ Other);
	bool Contains(Macad::Occt::Pnt2d P, double LinearTolerance);
	double Distance(Macad::Occt::Pnt2d P);
	double Distance(Macad::Occt::gp_Lin2d^ Other);
	double SquareDistance(Macad::Occt::Pnt2d P);
	double SquareDistance(Macad::Occt::gp_Lin2d^ Other);
	Macad::Occt::gp_Lin2d^ Normal(Macad::Occt::Pnt2d P);
	void Mirror(Macad::Occt::Pnt2d P);
	Macad::Occt::gp_Lin2d^ Mirrored(Macad::Occt::Pnt2d P);
	void Mirror(Macad::Occt::Ax2d A);
	Macad::Occt::gp_Lin2d^ Mirrored(Macad::Occt::Ax2d A);
	void Rotate(Macad::Occt::Pnt2d P, double Ang);
	Macad::Occt::gp_Lin2d^ Rotated(Macad::Occt::Pnt2d P, double Ang);
	void Scale(Macad::Occt::Pnt2d P, double S);
	Macad::Occt::gp_Lin2d^ Scaled(Macad::Occt::Pnt2d P, double S);
	void Transform(Macad::Occt::Trsf2d T);
	Macad::Occt::gp_Lin2d^ Transformed(Macad::Occt::Trsf2d T);
	void Translate(Macad::Occt::Vec2d V);
	Macad::Occt::gp_Lin2d^ Translated(Macad::Occt::Vec2d V);
	void Translate(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	Macad::Occt::gp_Lin2d^ Translated(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
}; // class gp_Lin2d

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
	gp_Circ2d(Macad::Occt::Ax2d XAxis, double Radius, bool Sense);
	gp_Circ2d(Macad::Occt::Ax2d XAxis, double Radius);
	gp_Circ2d(Macad::Occt::Ax22d Axis, double Radius);
	gp_Circ2d(Macad::Occt::gp_Circ2d^ parameter1);
	void SetLocation(Macad::Occt::Pnt2d P);
	void SetXAxis(Macad::Occt::Ax2d A);
	void SetAxis(Macad::Occt::Ax22d A);
	void SetYAxis(Macad::Occt::Ax2d A);
	void SetRadius(double Radius);
	double Area();
	void Coefficients(double% A, double% B, double% C, double% D, double% E, double% F);
	bool Contains(Macad::Occt::Pnt2d P, double LinearTolerance);
	double Distance(Macad::Occt::Pnt2d P);
	double SquareDistance(Macad::Occt::Pnt2d P);
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
	void Mirror(Macad::Occt::Pnt2d P);
	Macad::Occt::gp_Circ2d^ Mirrored(Macad::Occt::Pnt2d P);
	void Mirror(Macad::Occt::Ax2d A);
	Macad::Occt::gp_Circ2d^ Mirrored(Macad::Occt::Ax2d A);
	void Rotate(Macad::Occt::Pnt2d P, double Ang);
	Macad::Occt::gp_Circ2d^ Rotated(Macad::Occt::Pnt2d P, double Ang);
	void Scale(Macad::Occt::Pnt2d P, double S);
	Macad::Occt::gp_Circ2d^ Scaled(Macad::Occt::Pnt2d P, double S);
	void Transform(Macad::Occt::Trsf2d T);
	Macad::Occt::gp_Circ2d^ Transformed(Macad::Occt::Trsf2d T);
	void Translate(Macad::Occt::Vec2d V);
	Macad::Occt::gp_Circ2d^ Translated(Macad::Occt::Vec2d V);
	void Translate(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	Macad::Occt::gp_Circ2d^ Translated(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
}; // class gp_Circ2d

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
	gp_Elips2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense);
	gp_Elips2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius);
	gp_Elips2d(Macad::Occt::Ax22d A, double MajorRadius, double MinorRadius);
	gp_Elips2d(Macad::Occt::gp_Elips2d^ parameter1);
	void SetLocation(Macad::Occt::Pnt2d P);
	void SetMajorRadius(double MajorRadius);
	void SetMinorRadius(double MinorRadius);
	void SetAxis(Macad::Occt::Ax22d A);
	void SetXAxis(Macad::Occt::Ax2d A);
	void SetYAxis(Macad::Occt::Ax2d A);
	double Area();
	void Coefficients(double% A, double% B, double% C, double% D, double% E, double% F);
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
	void Mirror(Macad::Occt::Pnt2d P);
	Macad::Occt::gp_Elips2d^ Mirrored(Macad::Occt::Pnt2d P);
	void Mirror(Macad::Occt::Ax2d A);
	Macad::Occt::gp_Elips2d^ Mirrored(Macad::Occt::Ax2d A);
	void Rotate(Macad::Occt::Pnt2d P, double Ang);
	Macad::Occt::gp_Elips2d^ Rotated(Macad::Occt::Pnt2d P, double Ang);
	void Scale(Macad::Occt::Pnt2d P, double S);
	Macad::Occt::gp_Elips2d^ Scaled(Macad::Occt::Pnt2d P, double S);
	void Transform(Macad::Occt::Trsf2d T);
	Macad::Occt::gp_Elips2d^ Transformed(Macad::Occt::Trsf2d T);
	void Translate(Macad::Occt::Vec2d V);
	Macad::Occt::gp_Elips2d^ Translated(Macad::Occt::Vec2d V);
	void Translate(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	Macad::Occt::gp_Elips2d^ Translated(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
}; // class gp_Elips2d

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
	gp_Hypr2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense);
	gp_Hypr2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius);
	gp_Hypr2d(Macad::Occt::Ax22d A, double MajorRadius, double MinorRadius);
	gp_Hypr2d(Macad::Occt::gp_Hypr2d^ parameter1);
	void SetLocation(Macad::Occt::Pnt2d P);
	void SetMajorRadius(double MajorRadius);
	void SetMinorRadius(double MinorRadius);
	void SetAxis(Macad::Occt::Ax22d A);
	void SetXAxis(Macad::Occt::Ax2d A);
	void SetYAxis(Macad::Occt::Ax2d A);
	Macad::Occt::Ax2d Asymptote1();
	Macad::Occt::Ax2d Asymptote2();
	void Coefficients(double% A, double% B, double% C, double% D, double% E, double% F);
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
	void Mirror(Macad::Occt::Pnt2d P);
	Macad::Occt::gp_Hypr2d^ Mirrored(Macad::Occt::Pnt2d P);
	void Mirror(Macad::Occt::Ax2d A);
	Macad::Occt::gp_Hypr2d^ Mirrored(Macad::Occt::Ax2d A);
	void Rotate(Macad::Occt::Pnt2d P, double Ang);
	Macad::Occt::gp_Hypr2d^ Rotated(Macad::Occt::Pnt2d P, double Ang);
	void Scale(Macad::Occt::Pnt2d P, double S);
	Macad::Occt::gp_Hypr2d^ Scaled(Macad::Occt::Pnt2d P, double S);
	void Transform(Macad::Occt::Trsf2d T);
	Macad::Occt::gp_Hypr2d^ Transformed(Macad::Occt::Trsf2d T);
	void Translate(Macad::Occt::Vec2d V);
	Macad::Occt::gp_Hypr2d^ Translated(Macad::Occt::Vec2d V);
	void Translate(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	Macad::Occt::gp_Hypr2d^ Translated(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
}; // class gp_Hypr2d

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
	void SetFocal(double Focal);
	void SetLocation(Macad::Occt::Pnt2d P);
	void SetMirrorAxis(Macad::Occt::Ax2d A);
	void SetAxis(Macad::Occt::Ax22d A);
	void Coefficients(double% A, double% B, double% C, double% D, double% E, double% F);
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
	void Mirror(Macad::Occt::Pnt2d P);
	Macad::Occt::gp_Parab2d^ Mirrored(Macad::Occt::Pnt2d P);
	void Mirror(Macad::Occt::Ax2d A);
	Macad::Occt::gp_Parab2d^ Mirrored(Macad::Occt::Ax2d A);
	void Rotate(Macad::Occt::Pnt2d P, double Ang);
	Macad::Occt::gp_Parab2d^ Rotated(Macad::Occt::Pnt2d P, double Ang);
	void Scale(Macad::Occt::Pnt2d P, double S);
	Macad::Occt::gp_Parab2d^ Scaled(Macad::Occt::Pnt2d P, double S);
	void Transform(Macad::Occt::Trsf2d T);
	Macad::Occt::gp_Parab2d^ Transformed(Macad::Occt::Trsf2d T);
	void Translate(Macad::Occt::Vec2d V);
	Macad::Occt::gp_Parab2d^ Translated(Macad::Occt::Vec2d V);
	void Translate(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	Macad::Occt::gp_Parab2d^ Translated(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
}; // class gp_Parab2d

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
	gp_VectorWithNullMagnitude(Macad::Occt::gp_VectorWithNullMagnitude^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::gp_VectorWithNullMagnitude^ NewInstance(System::String^ theMessage);
	static Macad::Occt::gp_VectorWithNullMagnitude^ NewInstance();
}; // class gp_VectorWithNullMagnitude

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

}; // namespace Occt
}; // namespace Macad
