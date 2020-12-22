// Generated wrapper code for package gce

#pragma once

#include "gce.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  gce_ErrorType
//---------------------------------------------------------------------
public enum class gce_ErrorType
{
	gce_Done = 0,
	gce_ConfusedPoints = 1,
	gce_NegativeRadius = 2,
	gce_ColinearPoints = 3,
	gce_IntersectionError = 4,
	gce_NullAxis = 5,
	gce_NullAngle = 6,
	gce_NullRadius = 7,
	gce_InvertAxis = 8,
	gce_BadAngle = 9,
	gce_InvertRadius = 10,
	gce_NullFocusLength = 11,
	gce_NullVector = 12,
	gce_BadEquation = 13
}; // enum  class gce_ErrorType

//---------------------------------------------------------------------
//  Class  gce_Root
//---------------------------------------------------------------------
public ref class gce_Root : public BaseClass<::gce_Root>
{

#ifdef Include_gce_Root_h
public:
	Include_gce_Root_h
#endif

protected:
	gce_Root(InitMode init)
		: BaseClass<::gce_Root>( init )
	{}

public:
	gce_Root(::gce_Root* nativeInstance)
		: BaseClass<::gce_Root>( nativeInstance, true )
	{}

	gce_Root(::gce_Root& nativeInstance)
		: BaseClass<::gce_Root>( &nativeInstance, false )
	{}

	property ::gce_Root* NativeInstance
	{
		::gce_Root* get()
		{
			return static_cast<::gce_Root*>(_NativeInstance);
		}
	}

public:
	gce_Root();
	gce_Root(Macad::Occt::gce_Root^ parameter1);
	bool IsDone();
	Macad::Occt::gce_ErrorType Status();
}; // class gce_Root

//---------------------------------------------------------------------
//  Class  gce_MakeCirc
//---------------------------------------------------------------------
public ref class gce_MakeCirc sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeCirc_h
public:
	Include_gce_MakeCirc_h
#endif

public:
	gce_MakeCirc(::gce_MakeCirc* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeCirc(::gce_MakeCirc& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeCirc* NativeInstance
	{
		::gce_MakeCirc* get()
		{
			return static_cast<::gce_MakeCirc*>(_NativeInstance);
		}
	}

public:
	gce_MakeCirc(Macad::Occt::Ax2 A2, double Radius);
	gce_MakeCirc(Macad::Occt::gp_Circ^ Circ, double Dist);
	gce_MakeCirc(Macad::Occt::gp_Circ^ Circ, Macad::Occt::Pnt Point);
	gce_MakeCirc(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
	gce_MakeCirc(Macad::Occt::Pnt Center, Macad::Occt::Dir Norm, double Radius);
	gce_MakeCirc(Macad::Occt::Pnt Center, Macad::Occt::Pln Plane, double Radius);
	gce_MakeCirc(Macad::Occt::Pnt Center, Macad::Occt::Pnt Ptaxis, double Radius);
	gce_MakeCirc(Macad::Occt::Ax1 Axis, double Radius);
	gce_MakeCirc(Macad::Occt::gce_MakeCirc^ parameter1);
	Macad::Occt::gp_Circ^ Value();
	Macad::Occt::gp_Circ^ Operator();
}; // class gce_MakeCirc

//---------------------------------------------------------------------
//  Class  gce_MakeCirc2d
//---------------------------------------------------------------------
public ref class gce_MakeCirc2d sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeCirc2d_h
public:
	Include_gce_MakeCirc2d_h
#endif

public:
	gce_MakeCirc2d(::gce_MakeCirc2d* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeCirc2d(::gce_MakeCirc2d& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeCirc2d* NativeInstance
	{
		::gce_MakeCirc2d* get()
		{
			return static_cast<::gce_MakeCirc2d*>(_NativeInstance);
		}
	}

public:
	gce_MakeCirc2d(Macad::Occt::Ax2d XAxis, double Radius, bool Sense);
	gce_MakeCirc2d(Macad::Occt::Ax2d XAxis, double Radius);
	gce_MakeCirc2d(Macad::Occt::Ax22d Axis, double Radius);
	gce_MakeCirc2d(Macad::Occt::gp_Circ2d^ Circ, double Dist);
	gce_MakeCirc2d(Macad::Occt::gp_Circ2d^ Circ, Macad::Occt::Pnt2d Point);
	gce_MakeCirc2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2, Macad::Occt::Pnt2d P3);
	gce_MakeCirc2d(Macad::Occt::Pnt2d Center, double Radius, bool Sense);
	gce_MakeCirc2d(Macad::Occt::Pnt2d Center, double Radius);
	gce_MakeCirc2d(Macad::Occt::Pnt2d Center, Macad::Occt::Pnt2d Point, bool Sense);
	gce_MakeCirc2d(Macad::Occt::Pnt2d Center, Macad::Occt::Pnt2d Point);
	gce_MakeCirc2d(Macad::Occt::gce_MakeCirc2d^ parameter1);
	Macad::Occt::gp_Circ2d^ Value();
	Macad::Occt::gp_Circ2d^ Operator();
}; // class gce_MakeCirc2d

//---------------------------------------------------------------------
//  Class  gce_MakeCone
//---------------------------------------------------------------------
public ref class gce_MakeCone sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeCone_h
public:
	Include_gce_MakeCone_h
#endif

public:
	gce_MakeCone(::gce_MakeCone* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeCone(::gce_MakeCone& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeCone* NativeInstance
	{
		::gce_MakeCone* get()
		{
			return static_cast<::gce_MakeCone*>(_NativeInstance);
		}
	}

public:
	gce_MakeCone(Macad::Occt::Ax2 A2, double Ang, double Radius);
	gce_MakeCone(Macad::Occt::gp_Cone^ Cone, Macad::Occt::Pnt Point);
	gce_MakeCone(Macad::Occt::gp_Cone^ Cone, double Dist);
	gce_MakeCone(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3, Macad::Occt::Pnt P4);
	gce_MakeCone(Macad::Occt::Ax1 Axis, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	gce_MakeCone(Macad::Occt::gp_Lin^ Axis, Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	gce_MakeCone(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, double R1, double R2);
	gce_MakeCone(Macad::Occt::gce_MakeCone^ parameter1);
	Macad::Occt::gp_Cone^ Value();
	Macad::Occt::gp_Cone^ Operator();
}; // class gce_MakeCone

//---------------------------------------------------------------------
//  Class  gce_MakeCylinder
//---------------------------------------------------------------------
public ref class gce_MakeCylinder sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeCylinder_h
public:
	Include_gce_MakeCylinder_h
#endif

public:
	gce_MakeCylinder(::gce_MakeCylinder* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeCylinder(::gce_MakeCylinder& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeCylinder* NativeInstance
	{
		::gce_MakeCylinder* get()
		{
			return static_cast<::gce_MakeCylinder*>(_NativeInstance);
		}
	}

public:
	gce_MakeCylinder(Macad::Occt::Ax2 A2, double Radius);
	gce_MakeCylinder(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::Pnt Point);
	gce_MakeCylinder(Macad::Occt::gp_Cylinder^ Cyl, double Dist);
	gce_MakeCylinder(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
	gce_MakeCylinder(Macad::Occt::Ax1 Axis, double Radius);
	gce_MakeCylinder(Macad::Occt::gp_Circ^ Circ);
	gce_MakeCylinder(Macad::Occt::gce_MakeCylinder^ parameter1);
	Macad::Occt::gp_Cylinder^ Value();
	Macad::Occt::gp_Cylinder^ Operator();
}; // class gce_MakeCylinder

//---------------------------------------------------------------------
//  Class  gce_MakeDir
//---------------------------------------------------------------------
public ref class gce_MakeDir sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeDir_h
public:
	Include_gce_MakeDir_h
#endif

public:
	gce_MakeDir(::gce_MakeDir* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeDir(::gce_MakeDir& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeDir* NativeInstance
	{
		::gce_MakeDir* get()
		{
			return static_cast<::gce_MakeDir*>(_NativeInstance);
		}
	}

public:
	gce_MakeDir(Macad::Occt::Vec V);
	gce_MakeDir(Macad::Occt::XYZ Coord);
	gce_MakeDir(double Xv, double Yv, double Zv);
	gce_MakeDir(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	gce_MakeDir(Macad::Occt::gce_MakeDir^ parameter1);
	Macad::Occt::Dir Value();
	Macad::Occt::Dir Operator();
}; // class gce_MakeDir

//---------------------------------------------------------------------
//  Class  gce_MakeDir2d
//---------------------------------------------------------------------
public ref class gce_MakeDir2d sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeDir2d_h
public:
	Include_gce_MakeDir2d_h
#endif

public:
	gce_MakeDir2d(::gce_MakeDir2d* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeDir2d(::gce_MakeDir2d& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeDir2d* NativeInstance
	{
		::gce_MakeDir2d* get()
		{
			return static_cast<::gce_MakeDir2d*>(_NativeInstance);
		}
	}

public:
	gce_MakeDir2d(Macad::Occt::Vec2d V);
	gce_MakeDir2d(Macad::Occt::XY Coord);
	gce_MakeDir2d(double Xv, double Yv);
	gce_MakeDir2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	gce_MakeDir2d(Macad::Occt::gce_MakeDir2d^ parameter1);
	Macad::Occt::Dir2d Value();
	Macad::Occt::Dir2d Operator();
}; // class gce_MakeDir2d

//---------------------------------------------------------------------
//  Class  gce_MakeElips
//---------------------------------------------------------------------
public ref class gce_MakeElips sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeElips_h
public:
	Include_gce_MakeElips_h
#endif

public:
	gce_MakeElips(::gce_MakeElips* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeElips(::gce_MakeElips& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeElips* NativeInstance
	{
		::gce_MakeElips* get()
		{
			return static_cast<::gce_MakeElips*>(_NativeInstance);
		}
	}

public:
	gce_MakeElips(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
	gce_MakeElips(Macad::Occt::Pnt S1, Macad::Occt::Pnt S2, Macad::Occt::Pnt Center);
	gce_MakeElips(Macad::Occt::gce_MakeElips^ parameter1);
	Macad::Occt::gp_Elips^ Value();
	Macad::Occt::gp_Elips^ Operator();
}; // class gce_MakeElips

//---------------------------------------------------------------------
//  Class  gce_MakeElips2d
//---------------------------------------------------------------------
public ref class gce_MakeElips2d sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeElips2d_h
public:
	Include_gce_MakeElips2d_h
#endif

public:
	gce_MakeElips2d(::gce_MakeElips2d* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeElips2d(::gce_MakeElips2d& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeElips2d* NativeInstance
	{
		::gce_MakeElips2d* get()
		{
			return static_cast<::gce_MakeElips2d*>(_NativeInstance);
		}
	}

public:
	gce_MakeElips2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense);
	gce_MakeElips2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius);
	gce_MakeElips2d(Macad::Occt::Ax22d A, double MajorRadius, double MinorRadius);
	gce_MakeElips2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d S2, Macad::Occt::Pnt2d Center);
	gce_MakeElips2d(Macad::Occt::gce_MakeElips2d^ parameter1);
	Macad::Occt::gp_Elips2d^ Value();
	Macad::Occt::gp_Elips2d^ Operator();
}; // class gce_MakeElips2d

//---------------------------------------------------------------------
//  Class  gce_MakeHypr
//---------------------------------------------------------------------
public ref class gce_MakeHypr sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeHypr_h
public:
	Include_gce_MakeHypr_h
#endif

public:
	gce_MakeHypr(::gce_MakeHypr* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeHypr(::gce_MakeHypr& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeHypr* NativeInstance
	{
		::gce_MakeHypr* get()
		{
			return static_cast<::gce_MakeHypr*>(_NativeInstance);
		}
	}

public:
	gce_MakeHypr(Macad::Occt::Ax2 A2, double MajorRadius, double MinorRadius);
	gce_MakeHypr(Macad::Occt::Pnt S1, Macad::Occt::Pnt S2, Macad::Occt::Pnt Center);
	gce_MakeHypr(Macad::Occt::gce_MakeHypr^ parameter1);
	Macad::Occt::gp_Hypr^ Value();
	Macad::Occt::gp_Hypr^ Operator();
}; // class gce_MakeHypr

//---------------------------------------------------------------------
//  Class  gce_MakeHypr2d
//---------------------------------------------------------------------
public ref class gce_MakeHypr2d sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeHypr2d_h
public:
	Include_gce_MakeHypr2d_h
#endif

public:
	gce_MakeHypr2d(::gce_MakeHypr2d* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeHypr2d(::gce_MakeHypr2d& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeHypr2d* NativeInstance
	{
		::gce_MakeHypr2d* get()
		{
			return static_cast<::gce_MakeHypr2d*>(_NativeInstance);
		}
	}

public:
	gce_MakeHypr2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d S2, Macad::Occt::Pnt2d Center);
	gce_MakeHypr2d(Macad::Occt::Ax2d MajorAxis, double MajorRadius, double MinorRadius, bool Sense);
	gce_MakeHypr2d(Macad::Occt::Ax22d A, double MajorRadius, double MinorRadius);
	gce_MakeHypr2d(Macad::Occt::gce_MakeHypr2d^ parameter1);
	Macad::Occt::gp_Hypr2d^ Value();
	Macad::Occt::gp_Hypr2d^ Operator();
}; // class gce_MakeHypr2d

//---------------------------------------------------------------------
//  Class  gce_MakeLin
//---------------------------------------------------------------------
public ref class gce_MakeLin sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeLin_h
public:
	Include_gce_MakeLin_h
#endif

public:
	gce_MakeLin(::gce_MakeLin* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeLin(::gce_MakeLin& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeLin* NativeInstance
	{
		::gce_MakeLin* get()
		{
			return static_cast<::gce_MakeLin*>(_NativeInstance);
		}
	}

public:
	gce_MakeLin(Macad::Occt::Ax1 A1);
	gce_MakeLin(Macad::Occt::Pnt P, Macad::Occt::Dir V);
	gce_MakeLin(Macad::Occt::gp_Lin^ Lin, Macad::Occt::Pnt Point);
	gce_MakeLin(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	gce_MakeLin(Macad::Occt::gce_MakeLin^ parameter1);
	Macad::Occt::gp_Lin^ Value();
	Macad::Occt::gp_Lin^ Operator();
}; // class gce_MakeLin

//---------------------------------------------------------------------
//  Class  gce_MakeLin2d
//---------------------------------------------------------------------
public ref class gce_MakeLin2d sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeLin2d_h
public:
	Include_gce_MakeLin2d_h
#endif

public:
	gce_MakeLin2d(::gce_MakeLin2d* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeLin2d(::gce_MakeLin2d& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeLin2d* NativeInstance
	{
		::gce_MakeLin2d* get()
		{
			return static_cast<::gce_MakeLin2d*>(_NativeInstance);
		}
	}

public:
	gce_MakeLin2d(Macad::Occt::Ax2d A);
	gce_MakeLin2d(Macad::Occt::Pnt2d P, Macad::Occt::Dir2d V);
	gce_MakeLin2d(double A, double B, double C);
	gce_MakeLin2d(Macad::Occt::gp_Lin2d^ Lin, double Dist);
	gce_MakeLin2d(Macad::Occt::gp_Lin2d^ Lin, Macad::Occt::Pnt2d Point);
	gce_MakeLin2d(Macad::Occt::Pnt2d P1, Macad::Occt::Pnt2d P2);
	gce_MakeLin2d(Macad::Occt::gce_MakeLin2d^ parameter1);
	Macad::Occt::gp_Lin2d^ Value();
	Macad::Occt::gp_Lin2d^ Operator();
}; // class gce_MakeLin2d

//---------------------------------------------------------------------
//  Class  gce_MakeMirror
//---------------------------------------------------------------------
public ref class gce_MakeMirror sealed : public BaseClass<::gce_MakeMirror>
{

#ifdef Include_gce_MakeMirror_h
public:
	Include_gce_MakeMirror_h
#endif

public:
	gce_MakeMirror(::gce_MakeMirror* nativeInstance)
		: BaseClass<::gce_MakeMirror>( nativeInstance, true )
	{}

	gce_MakeMirror(::gce_MakeMirror& nativeInstance)
		: BaseClass<::gce_MakeMirror>( &nativeInstance, false )
	{}

	property ::gce_MakeMirror* NativeInstance
	{
		::gce_MakeMirror* get()
		{
			return static_cast<::gce_MakeMirror*>(_NativeInstance);
		}
	}

public:
	gce_MakeMirror(Macad::Occt::Pnt Point);
	gce_MakeMirror(Macad::Occt::Ax1 Axis);
	gce_MakeMirror(Macad::Occt::gp_Lin^ Line);
	gce_MakeMirror(Macad::Occt::Pnt Point, Macad::Occt::Dir Direc);
	gce_MakeMirror(Macad::Occt::Pln Plane);
	gce_MakeMirror(Macad::Occt::Ax2 Plane);
	gce_MakeMirror(Macad::Occt::gce_MakeMirror^ parameter1);
	Macad::Occt::Trsf Value();
	Macad::Occt::Trsf Operator();
}; // class gce_MakeMirror

//---------------------------------------------------------------------
//  Class  gce_MakeMirror2d
//---------------------------------------------------------------------
public ref class gce_MakeMirror2d sealed : public BaseClass<::gce_MakeMirror2d>
{

#ifdef Include_gce_MakeMirror2d_h
public:
	Include_gce_MakeMirror2d_h
#endif

public:
	gce_MakeMirror2d(::gce_MakeMirror2d* nativeInstance)
		: BaseClass<::gce_MakeMirror2d>( nativeInstance, true )
	{}

	gce_MakeMirror2d(::gce_MakeMirror2d& nativeInstance)
		: BaseClass<::gce_MakeMirror2d>( &nativeInstance, false )
	{}

	property ::gce_MakeMirror2d* NativeInstance
	{
		::gce_MakeMirror2d* get()
		{
			return static_cast<::gce_MakeMirror2d*>(_NativeInstance);
		}
	}

public:
	gce_MakeMirror2d(Macad::Occt::Pnt2d Point);
	gce_MakeMirror2d(Macad::Occt::Ax2d Axis);
	gce_MakeMirror2d(Macad::Occt::gp_Lin2d^ Line);
	gce_MakeMirror2d(Macad::Occt::Pnt2d Point, Macad::Occt::Dir2d Direc);
	gce_MakeMirror2d(Macad::Occt::gce_MakeMirror2d^ parameter1);
	Macad::Occt::Trsf2d Value();
	Macad::Occt::Trsf2d Operator();
}; // class gce_MakeMirror2d

//---------------------------------------------------------------------
//  Class  gce_MakeParab
//---------------------------------------------------------------------
public ref class gce_MakeParab sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeParab_h
public:
	Include_gce_MakeParab_h
#endif

public:
	gce_MakeParab(::gce_MakeParab* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeParab(::gce_MakeParab& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeParab* NativeInstance
	{
		::gce_MakeParab* get()
		{
			return static_cast<::gce_MakeParab*>(_NativeInstance);
		}
	}

public:
	gce_MakeParab(Macad::Occt::Ax2 A2, double Focal);
	gce_MakeParab(Macad::Occt::Ax1 D, Macad::Occt::Pnt F);
	gce_MakeParab(Macad::Occt::gce_MakeParab^ parameter1);
	Macad::Occt::gp_Parab^ Value();
	Macad::Occt::gp_Parab^ Operator();
}; // class gce_MakeParab

//---------------------------------------------------------------------
//  Class  gce_MakeParab2d
//---------------------------------------------------------------------
public ref class gce_MakeParab2d sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakeParab2d_h
public:
	Include_gce_MakeParab2d_h
#endif

public:
	gce_MakeParab2d(::gce_MakeParab2d* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakeParab2d(::gce_MakeParab2d& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakeParab2d* NativeInstance
	{
		::gce_MakeParab2d* get()
		{
			return static_cast<::gce_MakeParab2d*>(_NativeInstance);
		}
	}

public:
	gce_MakeParab2d(Macad::Occt::Ax2d MirrorAxis, double Focal, bool Sense);
	gce_MakeParab2d(Macad::Occt::Ax2d MirrorAxis, double Focal);
	gce_MakeParab2d(Macad::Occt::Ax22d A, double Focal);
	gce_MakeParab2d(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F, bool Sense);
	gce_MakeParab2d(Macad::Occt::Ax2d D, Macad::Occt::Pnt2d F);
	gce_MakeParab2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d Center, bool Sense);
	gce_MakeParab2d(Macad::Occt::Pnt2d S1, Macad::Occt::Pnt2d Center);
	gce_MakeParab2d(Macad::Occt::gce_MakeParab2d^ parameter1);
	Macad::Occt::gp_Parab2d^ Value();
	Macad::Occt::gp_Parab2d^ Operator();
}; // class gce_MakeParab2d

//---------------------------------------------------------------------
//  Class  gce_MakePln
//---------------------------------------------------------------------
public ref class gce_MakePln sealed : public Macad::Occt::gce_Root
{

#ifdef Include_gce_MakePln_h
public:
	Include_gce_MakePln_h
#endif

public:
	gce_MakePln(::gce_MakePln* nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	gce_MakePln(::gce_MakePln& nativeInstance)
		: Macad::Occt::gce_Root( nativeInstance )
	{}

	property ::gce_MakePln* NativeInstance
	{
		::gce_MakePln* get()
		{
			return static_cast<::gce_MakePln*>(_NativeInstance);
		}
	}

public:
	gce_MakePln(Macad::Occt::Ax2 A2);
	gce_MakePln(Macad::Occt::Pnt P, Macad::Occt::Dir V);
	gce_MakePln(double A, double B, double C, double D);
	gce_MakePln(Macad::Occt::Pln Pln, Macad::Occt::Pnt Point);
	gce_MakePln(Macad::Occt::Pln Pln, double Dist);
	gce_MakePln(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Pnt P3);
	gce_MakePln(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	gce_MakePln(Macad::Occt::Ax1 Axis);
	gce_MakePln(Macad::Occt::gce_MakePln^ parameter1);
	Macad::Occt::Pln Value();
	Macad::Occt::Pln Operator();
}; // class gce_MakePln

//---------------------------------------------------------------------
//  Class  gce_MakeRotation
//---------------------------------------------------------------------
public ref class gce_MakeRotation sealed : public BaseClass<::gce_MakeRotation>
{

#ifdef Include_gce_MakeRotation_h
public:
	Include_gce_MakeRotation_h
#endif

public:
	gce_MakeRotation(::gce_MakeRotation* nativeInstance)
		: BaseClass<::gce_MakeRotation>( nativeInstance, true )
	{}

	gce_MakeRotation(::gce_MakeRotation& nativeInstance)
		: BaseClass<::gce_MakeRotation>( &nativeInstance, false )
	{}

	property ::gce_MakeRotation* NativeInstance
	{
		::gce_MakeRotation* get()
		{
			return static_cast<::gce_MakeRotation*>(_NativeInstance);
		}
	}

public:
	gce_MakeRotation(Macad::Occt::gp_Lin^ Line, double Angle);
	gce_MakeRotation(Macad::Occt::Ax1 Axis, double Angle);
	gce_MakeRotation(Macad::Occt::Pnt Point, Macad::Occt::Dir Direc, double Angle);
	gce_MakeRotation(Macad::Occt::gce_MakeRotation^ parameter1);
	Macad::Occt::Trsf Value();
	Macad::Occt::Trsf Operator();
}; // class gce_MakeRotation

//---------------------------------------------------------------------
//  Class  gce_MakeRotation2d
//---------------------------------------------------------------------
public ref class gce_MakeRotation2d sealed : public BaseClass<::gce_MakeRotation2d>
{

#ifdef Include_gce_MakeRotation2d_h
public:
	Include_gce_MakeRotation2d_h
#endif

public:
	gce_MakeRotation2d(::gce_MakeRotation2d* nativeInstance)
		: BaseClass<::gce_MakeRotation2d>( nativeInstance, true )
	{}

	gce_MakeRotation2d(::gce_MakeRotation2d& nativeInstance)
		: BaseClass<::gce_MakeRotation2d>( &nativeInstance, false )
	{}

	property ::gce_MakeRotation2d* NativeInstance
	{
		::gce_MakeRotation2d* get()
		{
			return static_cast<::gce_MakeRotation2d*>(_NativeInstance);
		}
	}

public:
	gce_MakeRotation2d(Macad::Occt::Pnt2d Point, double Angle);
	gce_MakeRotation2d(Macad::Occt::gce_MakeRotation2d^ parameter1);
	Macad::Occt::Trsf2d Value();
	Macad::Occt::Trsf2d Operator();
}; // class gce_MakeRotation2d

//---------------------------------------------------------------------
//  Class  gce_MakeScale
//---------------------------------------------------------------------
public ref class gce_MakeScale sealed : public BaseClass<::gce_MakeScale>
{

#ifdef Include_gce_MakeScale_h
public:
	Include_gce_MakeScale_h
#endif

public:
	gce_MakeScale(::gce_MakeScale* nativeInstance)
		: BaseClass<::gce_MakeScale>( nativeInstance, true )
	{}

	gce_MakeScale(::gce_MakeScale& nativeInstance)
		: BaseClass<::gce_MakeScale>( &nativeInstance, false )
	{}

	property ::gce_MakeScale* NativeInstance
	{
		::gce_MakeScale* get()
		{
			return static_cast<::gce_MakeScale*>(_NativeInstance);
		}
	}

public:
	gce_MakeScale(Macad::Occt::Pnt Point, double Scale);
	gce_MakeScale(Macad::Occt::gce_MakeScale^ parameter1);
	Macad::Occt::Trsf Value();
	Macad::Occt::Trsf Operator();
}; // class gce_MakeScale

//---------------------------------------------------------------------
//  Class  gce_MakeScale2d
//---------------------------------------------------------------------
public ref class gce_MakeScale2d sealed : public BaseClass<::gce_MakeScale2d>
{

#ifdef Include_gce_MakeScale2d_h
public:
	Include_gce_MakeScale2d_h
#endif

public:
	gce_MakeScale2d(::gce_MakeScale2d* nativeInstance)
		: BaseClass<::gce_MakeScale2d>( nativeInstance, true )
	{}

	gce_MakeScale2d(::gce_MakeScale2d& nativeInstance)
		: BaseClass<::gce_MakeScale2d>( &nativeInstance, false )
	{}

	property ::gce_MakeScale2d* NativeInstance
	{
		::gce_MakeScale2d* get()
		{
			return static_cast<::gce_MakeScale2d*>(_NativeInstance);
		}
	}

public:
	gce_MakeScale2d(Macad::Occt::Pnt2d Point, double Scale);
	gce_MakeScale2d(Macad::Occt::gce_MakeScale2d^ parameter1);
	Macad::Occt::Trsf2d Value();
	Macad::Occt::Trsf2d Operator();
}; // class gce_MakeScale2d

//---------------------------------------------------------------------
//  Class  gce_MakeTranslation
//---------------------------------------------------------------------
public ref class gce_MakeTranslation sealed : public BaseClass<::gce_MakeTranslation>
{

#ifdef Include_gce_MakeTranslation_h
public:
	Include_gce_MakeTranslation_h
#endif

public:
	gce_MakeTranslation(::gce_MakeTranslation* nativeInstance)
		: BaseClass<::gce_MakeTranslation>( nativeInstance, true )
	{}

	gce_MakeTranslation(::gce_MakeTranslation& nativeInstance)
		: BaseClass<::gce_MakeTranslation>( &nativeInstance, false )
	{}

	property ::gce_MakeTranslation* NativeInstance
	{
		::gce_MakeTranslation* get()
		{
			return static_cast<::gce_MakeTranslation*>(_NativeInstance);
		}
	}

public:
	gce_MakeTranslation(Macad::Occt::Vec Vect);
	gce_MakeTranslation(Macad::Occt::Pnt Point1, Macad::Occt::Pnt Point2);
	gce_MakeTranslation(Macad::Occt::gce_MakeTranslation^ parameter1);
	Macad::Occt::Trsf Value();
	Macad::Occt::Trsf Operator();
}; // class gce_MakeTranslation

//---------------------------------------------------------------------
//  Class  gce_MakeTranslation2d
//---------------------------------------------------------------------
public ref class gce_MakeTranslation2d sealed : public BaseClass<::gce_MakeTranslation2d>
{

#ifdef Include_gce_MakeTranslation2d_h
public:
	Include_gce_MakeTranslation2d_h
#endif

public:
	gce_MakeTranslation2d(::gce_MakeTranslation2d* nativeInstance)
		: BaseClass<::gce_MakeTranslation2d>( nativeInstance, true )
	{}

	gce_MakeTranslation2d(::gce_MakeTranslation2d& nativeInstance)
		: BaseClass<::gce_MakeTranslation2d>( &nativeInstance, false )
	{}

	property ::gce_MakeTranslation2d* NativeInstance
	{
		::gce_MakeTranslation2d* get()
		{
			return static_cast<::gce_MakeTranslation2d*>(_NativeInstance);
		}
	}

public:
	gce_MakeTranslation2d(Macad::Occt::Vec2d Vect);
	gce_MakeTranslation2d(Macad::Occt::Pnt2d Point1, Macad::Occt::Pnt2d Point2);
	gce_MakeTranslation2d(Macad::Occt::gce_MakeTranslation2d^ parameter1);
	Macad::Occt::Trsf2d Value();
	Macad::Occt::Trsf2d Operator();
}; // class gce_MakeTranslation2d

}; // namespace Occt
}; // namespace Macad
