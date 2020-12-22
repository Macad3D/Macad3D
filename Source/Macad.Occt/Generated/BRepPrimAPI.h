// Generated wrapper code for package BRepPrimAPI

#pragma once

#include "BRepBuilderAPI.h"
#include "BRepPrimAPI.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeBox
//---------------------------------------------------------------------
public ref class BRepPrimAPI_MakeBox sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepPrimAPI_MakeBox_h
public:
	Include_BRepPrimAPI_MakeBox_h
#endif

public:
	BRepPrimAPI_MakeBox(::BRepPrimAPI_MakeBox* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepPrimAPI_MakeBox(::BRepPrimAPI_MakeBox& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepPrimAPI_MakeBox* NativeInstance
	{
		::BRepPrimAPI_MakeBox* get()
		{
			return static_cast<::BRepPrimAPI_MakeBox*>(_NativeInstance);
		}
	}

public:
	BRepPrimAPI_MakeBox(double dx, double dy, double dz);
	BRepPrimAPI_MakeBox(Macad::Occt::Pnt P, double dx, double dy, double dz);
	BRepPrimAPI_MakeBox(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2);
	BRepPrimAPI_MakeBox(Macad::Occt::Ax2 Axes, double dx, double dy, double dz);
	BRepPrimAPI_MakeBox(Macad::Occt::BRepPrimAPI_MakeBox^ parameter1);
	/* Method skipped due to unknown mapping: BRepPrim_Wedge Wedge() */
	void Build();
	Macad::Occt::TopoDS_Shell^ Shell();
	Macad::Occt::TopoDS_Solid^ Solid();
	Macad::Occt::TopoDS_Face^ BottomFace();
	Macad::Occt::TopoDS_Face^ BackFace();
	Macad::Occt::TopoDS_Face^ FrontFace();
	Macad::Occt::TopoDS_Face^ LeftFace();
	Macad::Occt::TopoDS_Face^ RightFace();
	Macad::Occt::TopoDS_Face^ TopFace();
}; // class BRepPrimAPI_MakeBox

//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeOneAxis
//---------------------------------------------------------------------
public ref class BRepPrimAPI_MakeOneAxis : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepPrimAPI_MakeOneAxis_h
public:
	Include_BRepPrimAPI_MakeOneAxis_h
#endif

protected:
	BRepPrimAPI_MakeOneAxis(InitMode init)
		: Macad::Occt::BRepBuilderAPI_MakeShape( init )
	{}

public:
	BRepPrimAPI_MakeOneAxis(::BRepPrimAPI_MakeOneAxis* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepPrimAPI_MakeOneAxis(::BRepPrimAPI_MakeOneAxis& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepPrimAPI_MakeOneAxis* NativeInstance
	{
		::BRepPrimAPI_MakeOneAxis* get()
		{
			return static_cast<::BRepPrimAPI_MakeOneAxis*>(_NativeInstance);
		}
	}

public:
	BRepPrimAPI_MakeOneAxis();
	BRepPrimAPI_MakeOneAxis(Macad::Occt::BRepPrimAPI_MakeOneAxis^ parameter1);
	System::IntPtr OneAxis();
	void Build();
	Macad::Occt::TopoDS_Face^ Face();
	Macad::Occt::TopoDS_Shell^ Shell();
	Macad::Occt::TopoDS_Solid^ Solid();
}; // class BRepPrimAPI_MakeOneAxis

//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeCone
//---------------------------------------------------------------------
public ref class BRepPrimAPI_MakeCone sealed : public Macad::Occt::BRepPrimAPI_MakeOneAxis
{

#ifdef Include_BRepPrimAPI_MakeCone_h
public:
	Include_BRepPrimAPI_MakeCone_h
#endif

public:
	BRepPrimAPI_MakeCone(::BRepPrimAPI_MakeCone* nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeOneAxis( nativeInstance )
	{}

	BRepPrimAPI_MakeCone(::BRepPrimAPI_MakeCone& nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeOneAxis( nativeInstance )
	{}

	property ::BRepPrimAPI_MakeCone* NativeInstance
	{
		::BRepPrimAPI_MakeCone* get()
		{
			return static_cast<::BRepPrimAPI_MakeCone*>(_NativeInstance);
		}
	}

public:
	BRepPrimAPI_MakeCone(double R1, double R2, double H);
	BRepPrimAPI_MakeCone(double R1, double R2, double H, double angle);
	BRepPrimAPI_MakeCone(Macad::Occt::Ax2 Axes, double R1, double R2, double H);
	BRepPrimAPI_MakeCone(Macad::Occt::Ax2 Axes, double R1, double R2, double H, double angle);
	BRepPrimAPI_MakeCone(Macad::Occt::BRepPrimAPI_MakeCone^ parameter1);
	System::IntPtr OneAxis();
	/* Method skipped due to unknown mapping: BRepPrim_Cone Cone() */
}; // class BRepPrimAPI_MakeCone

//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeCylinder
//---------------------------------------------------------------------
public ref class BRepPrimAPI_MakeCylinder sealed : public Macad::Occt::BRepPrimAPI_MakeOneAxis
{

#ifdef Include_BRepPrimAPI_MakeCylinder_h
public:
	Include_BRepPrimAPI_MakeCylinder_h
#endif

public:
	BRepPrimAPI_MakeCylinder(::BRepPrimAPI_MakeCylinder* nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeOneAxis( nativeInstance )
	{}

	BRepPrimAPI_MakeCylinder(::BRepPrimAPI_MakeCylinder& nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeOneAxis( nativeInstance )
	{}

	property ::BRepPrimAPI_MakeCylinder* NativeInstance
	{
		::BRepPrimAPI_MakeCylinder* get()
		{
			return static_cast<::BRepPrimAPI_MakeCylinder*>(_NativeInstance);
		}
	}

public:
	BRepPrimAPI_MakeCylinder(double R, double H);
	BRepPrimAPI_MakeCylinder(double R, double H, double Angle);
	BRepPrimAPI_MakeCylinder(Macad::Occt::Ax2 Axes, double R, double H);
	BRepPrimAPI_MakeCylinder(Macad::Occt::Ax2 Axes, double R, double H, double Angle);
	BRepPrimAPI_MakeCylinder(Macad::Occt::BRepPrimAPI_MakeCylinder^ parameter1);
	System::IntPtr OneAxis();
	/* Method skipped due to unknown mapping: BRepPrim_Cylinder Cylinder() */
}; // class BRepPrimAPI_MakeCylinder

//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeHalfSpace
//---------------------------------------------------------------------
public ref class BRepPrimAPI_MakeHalfSpace sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepPrimAPI_MakeHalfSpace_h
public:
	Include_BRepPrimAPI_MakeHalfSpace_h
#endif

public:
	BRepPrimAPI_MakeHalfSpace(::BRepPrimAPI_MakeHalfSpace* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepPrimAPI_MakeHalfSpace(::BRepPrimAPI_MakeHalfSpace& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepPrimAPI_MakeHalfSpace* NativeInstance
	{
		::BRepPrimAPI_MakeHalfSpace* get()
		{
			return static_cast<::BRepPrimAPI_MakeHalfSpace*>(_NativeInstance);
		}
	}

public:
	BRepPrimAPI_MakeHalfSpace(Macad::Occt::TopoDS_Face^ Face, Macad::Occt::Pnt RefPnt);
	BRepPrimAPI_MakeHalfSpace(Macad::Occt::TopoDS_Shell^ Shell, Macad::Occt::Pnt RefPnt);
	BRepPrimAPI_MakeHalfSpace(Macad::Occt::BRepPrimAPI_MakeHalfSpace^ parameter1);
	Macad::Occt::TopoDS_Solid^ Solid();
}; // class BRepPrimAPI_MakeHalfSpace

//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeSweep
//---------------------------------------------------------------------
public ref class BRepPrimAPI_MakeSweep : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepPrimAPI_MakeSweep_h
public:
	Include_BRepPrimAPI_MakeSweep_h
#endif

protected:
	BRepPrimAPI_MakeSweep(InitMode init)
		: Macad::Occt::BRepBuilderAPI_MakeShape( init )
	{}

public:
	BRepPrimAPI_MakeSweep(::BRepPrimAPI_MakeSweep* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepPrimAPI_MakeSweep(::BRepPrimAPI_MakeSweep& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepPrimAPI_MakeSweep* NativeInstance
	{
		::BRepPrimAPI_MakeSweep* get()
		{
			return static_cast<::BRepPrimAPI_MakeSweep*>(_NativeInstance);
		}
	}

public:
	BRepPrimAPI_MakeSweep(Macad::Occt::BRepPrimAPI_MakeSweep^ parameter1);
	BRepPrimAPI_MakeSweep();
	Macad::Occt::TopoDS_Shape^ FirstShape();
	Macad::Occt::TopoDS_Shape^ LastShape();
}; // class BRepPrimAPI_MakeSweep

//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakePrism
//---------------------------------------------------------------------
public ref class BRepPrimAPI_MakePrism sealed : public Macad::Occt::BRepPrimAPI_MakeSweep
{

#ifdef Include_BRepPrimAPI_MakePrism_h
public:
	Include_BRepPrimAPI_MakePrism_h
#endif

public:
	BRepPrimAPI_MakePrism(::BRepPrimAPI_MakePrism* nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeSweep( nativeInstance )
	{}

	BRepPrimAPI_MakePrism(::BRepPrimAPI_MakePrism& nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeSweep( nativeInstance )
	{}

	property ::BRepPrimAPI_MakePrism* NativeInstance
	{
		::BRepPrimAPI_MakePrism* get()
		{
			return static_cast<::BRepPrimAPI_MakePrism*>(_NativeInstance);
		}
	}

public:
	BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Vec V, bool Copy, bool Canonize);
	BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Vec V, bool Copy);
	BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Vec V);
	BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Dir D, bool Inf, bool Copy, bool Canonize);
	BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Dir D, bool Inf, bool Copy);
	BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Dir D, bool Inf);
	BRepPrimAPI_MakePrism(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Dir D);
	BRepPrimAPI_MakePrism(Macad::Occt::BRepPrimAPI_MakePrism^ parameter1);
	/* Method skipped due to unknown mapping: BRepSweep_Prism Prism() */
	void Build();
	Macad::Occt::TopoDS_Shape^ FirstShape();
	Macad::Occt::TopoDS_Shape^ LastShape();
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ FirstShape(Macad::Occt::TopoDS_Shape^ theShape);
	Macad::Occt::TopoDS_Shape^ LastShape(Macad::Occt::TopoDS_Shape^ theShape);
}; // class BRepPrimAPI_MakePrism

//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeRevol
//---------------------------------------------------------------------
public ref class BRepPrimAPI_MakeRevol sealed : public Macad::Occt::BRepPrimAPI_MakeSweep
{

#ifdef Include_BRepPrimAPI_MakeRevol_h
public:
	Include_BRepPrimAPI_MakeRevol_h
#endif

public:
	BRepPrimAPI_MakeRevol(::BRepPrimAPI_MakeRevol* nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeSweep( nativeInstance )
	{}

	BRepPrimAPI_MakeRevol(::BRepPrimAPI_MakeRevol& nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeSweep( nativeInstance )
	{}

	property ::BRepPrimAPI_MakeRevol* NativeInstance
	{
		::BRepPrimAPI_MakeRevol* get()
		{
			return static_cast<::BRepPrimAPI_MakeRevol*>(_NativeInstance);
		}
	}

public:
	BRepPrimAPI_MakeRevol(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Ax1 A, double D, bool Copy);
	BRepPrimAPI_MakeRevol(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Ax1 A, double D);
	BRepPrimAPI_MakeRevol(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Ax1 A, bool Copy);
	BRepPrimAPI_MakeRevol(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::Ax1 A);
	BRepPrimAPI_MakeRevol(Macad::Occt::BRepPrimAPI_MakeRevol^ parameter1);
	/* Method skipped due to unknown mapping: BRepSweep_Revol Revol() */
	void Build();
	Macad::Occt::TopoDS_Shape^ FirstShape();
	Macad::Occt::TopoDS_Shape^ LastShape();
	Macad::Occt::TopTools_ListOfShape^ Generated(Macad::Occt::TopoDS_Shape^ S);
	bool IsDeleted(Macad::Occt::TopoDS_Shape^ S);
	Macad::Occt::TopoDS_Shape^ FirstShape(Macad::Occt::TopoDS_Shape^ theShape);
	Macad::Occt::TopoDS_Shape^ LastShape(Macad::Occt::TopoDS_Shape^ theShape);
	bool HasDegenerated();
	Macad::Occt::TopTools_ListOfShape^ Degenerated();
}; // class BRepPrimAPI_MakeRevol

//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeRevolution
//---------------------------------------------------------------------
public ref class BRepPrimAPI_MakeRevolution sealed : public Macad::Occt::BRepPrimAPI_MakeOneAxis
{

#ifdef Include_BRepPrimAPI_MakeRevolution_h
public:
	Include_BRepPrimAPI_MakeRevolution_h
#endif

public:
	BRepPrimAPI_MakeRevolution(::BRepPrimAPI_MakeRevolution* nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeOneAxis( nativeInstance )
	{}

	BRepPrimAPI_MakeRevolution(::BRepPrimAPI_MakeRevolution& nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeOneAxis( nativeInstance )
	{}

	property ::BRepPrimAPI_MakeRevolution* NativeInstance
	{
		::BRepPrimAPI_MakeRevolution* get()
		{
			return static_cast<::BRepPrimAPI_MakeRevolution*>(_NativeInstance);
		}
	}

public:
	BRepPrimAPI_MakeRevolution(Macad::Occt::Geom_Curve^ Meridian);
	BRepPrimAPI_MakeRevolution(Macad::Occt::Geom_Curve^ Meridian, double angle);
	BRepPrimAPI_MakeRevolution(Macad::Occt::Geom_Curve^ Meridian, double VMin, double VMax);
	BRepPrimAPI_MakeRevolution(Macad::Occt::Geom_Curve^ Meridian, double VMin, double VMax, double angle);
	BRepPrimAPI_MakeRevolution(Macad::Occt::Ax2 Axes, Macad::Occt::Geom_Curve^ Meridian);
	BRepPrimAPI_MakeRevolution(Macad::Occt::Ax2 Axes, Macad::Occt::Geom_Curve^ Meridian, double angle);
	BRepPrimAPI_MakeRevolution(Macad::Occt::Ax2 Axes, Macad::Occt::Geom_Curve^ Meridian, double VMin, double VMax);
	BRepPrimAPI_MakeRevolution(Macad::Occt::Ax2 Axes, Macad::Occt::Geom_Curve^ Meridian, double VMin, double VMax, double angle);
	BRepPrimAPI_MakeRevolution(Macad::Occt::BRepPrimAPI_MakeRevolution^ parameter1);
	System::IntPtr OneAxis();
	/* Method skipped due to unknown mapping: BRepPrim_Revolution Revolution() */
}; // class BRepPrimAPI_MakeRevolution

//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeSphere
//---------------------------------------------------------------------
public ref class BRepPrimAPI_MakeSphere sealed : public Macad::Occt::BRepPrimAPI_MakeOneAxis
{

#ifdef Include_BRepPrimAPI_MakeSphere_h
public:
	Include_BRepPrimAPI_MakeSphere_h
#endif

public:
	BRepPrimAPI_MakeSphere(::BRepPrimAPI_MakeSphere* nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeOneAxis( nativeInstance )
	{}

	BRepPrimAPI_MakeSphere(::BRepPrimAPI_MakeSphere& nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeOneAxis( nativeInstance )
	{}

	property ::BRepPrimAPI_MakeSphere* NativeInstance
	{
		::BRepPrimAPI_MakeSphere* get()
		{
			return static_cast<::BRepPrimAPI_MakeSphere*>(_NativeInstance);
		}
	}

public:
	BRepPrimAPI_MakeSphere(double R);
	BRepPrimAPI_MakeSphere(double R, double angle);
	BRepPrimAPI_MakeSphere(double R, double angle1, double angle2);
	BRepPrimAPI_MakeSphere(double R, double angle1, double angle2, double angle3);
	BRepPrimAPI_MakeSphere(Macad::Occt::Pnt Center, double R);
	BRepPrimAPI_MakeSphere(Macad::Occt::Pnt Center, double R, double angle);
	BRepPrimAPI_MakeSphere(Macad::Occt::Pnt Center, double R, double angle1, double angle2);
	BRepPrimAPI_MakeSphere(Macad::Occt::Pnt Center, double R, double angle1, double angle2, double angle3);
	BRepPrimAPI_MakeSphere(Macad::Occt::Ax2 Axis, double R);
	BRepPrimAPI_MakeSphere(Macad::Occt::Ax2 Axis, double R, double angle);
	BRepPrimAPI_MakeSphere(Macad::Occt::Ax2 Axis, double R, double angle1, double angle2);
	BRepPrimAPI_MakeSphere(Macad::Occt::Ax2 Axis, double R, double angle1, double angle2, double angle3);
	BRepPrimAPI_MakeSphere(Macad::Occt::BRepPrimAPI_MakeSphere^ parameter1);
	System::IntPtr OneAxis();
	/* Method skipped due to unknown mapping: BRepPrim_Sphere Sphere() */
}; // class BRepPrimAPI_MakeSphere

//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeTorus
//---------------------------------------------------------------------
public ref class BRepPrimAPI_MakeTorus sealed : public Macad::Occt::BRepPrimAPI_MakeOneAxis
{

#ifdef Include_BRepPrimAPI_MakeTorus_h
public:
	Include_BRepPrimAPI_MakeTorus_h
#endif

public:
	BRepPrimAPI_MakeTorus(::BRepPrimAPI_MakeTorus* nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeOneAxis( nativeInstance )
	{}

	BRepPrimAPI_MakeTorus(::BRepPrimAPI_MakeTorus& nativeInstance)
		: Macad::Occt::BRepPrimAPI_MakeOneAxis( nativeInstance )
	{}

	property ::BRepPrimAPI_MakeTorus* NativeInstance
	{
		::BRepPrimAPI_MakeTorus* get()
		{
			return static_cast<::BRepPrimAPI_MakeTorus*>(_NativeInstance);
		}
	}

public:
	BRepPrimAPI_MakeTorus(double R1, double R2);
	BRepPrimAPI_MakeTorus(double R1, double R2, double angle);
	BRepPrimAPI_MakeTorus(double R1, double R2, double angle1, double angle2);
	BRepPrimAPI_MakeTorus(double R1, double R2, double angle1, double angle2, double angle);
	BRepPrimAPI_MakeTorus(Macad::Occt::Ax2 Axes, double R1, double R2);
	BRepPrimAPI_MakeTorus(Macad::Occt::Ax2 Axes, double R1, double R2, double angle);
	BRepPrimAPI_MakeTorus(Macad::Occt::Ax2 Axes, double R1, double R2, double angle1, double angle2);
	BRepPrimAPI_MakeTorus(Macad::Occt::Ax2 Axes, double R1, double R2, double angle1, double angle2, double angle);
	BRepPrimAPI_MakeTorus(Macad::Occt::BRepPrimAPI_MakeTorus^ parameter1);
	System::IntPtr OneAxis();
	/* Method skipped due to unknown mapping: BRepPrim_Torus Torus() */
}; // class BRepPrimAPI_MakeTorus

//---------------------------------------------------------------------
//  Class  BRepPrimAPI_MakeWedge
//---------------------------------------------------------------------
public ref class BRepPrimAPI_MakeWedge sealed : public Macad::Occt::BRepBuilderAPI_MakeShape
{

#ifdef Include_BRepPrimAPI_MakeWedge_h
public:
	Include_BRepPrimAPI_MakeWedge_h
#endif

public:
	BRepPrimAPI_MakeWedge(::BRepPrimAPI_MakeWedge* nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	BRepPrimAPI_MakeWedge(::BRepPrimAPI_MakeWedge& nativeInstance)
		: Macad::Occt::BRepBuilderAPI_MakeShape( nativeInstance )
	{}

	property ::BRepPrimAPI_MakeWedge* NativeInstance
	{
		::BRepPrimAPI_MakeWedge* get()
		{
			return static_cast<::BRepPrimAPI_MakeWedge*>(_NativeInstance);
		}
	}

public:
	BRepPrimAPI_MakeWedge(double dx, double dy, double dz, double ltx);
	BRepPrimAPI_MakeWedge(Macad::Occt::Ax2 Axes, double dx, double dy, double dz, double ltx);
	BRepPrimAPI_MakeWedge(double dx, double dy, double dz, double xmin, double zmin, double xmax, double zmax);
	BRepPrimAPI_MakeWedge(Macad::Occt::Ax2 Axes, double dx, double dy, double dz, double xmin, double zmin, double xmax, double zmax);
	BRepPrimAPI_MakeWedge(Macad::Occt::BRepPrimAPI_MakeWedge^ parameter1);
	/* Method skipped due to unknown mapping: BRepPrim_Wedge Wedge() */
	void Build();
	Macad::Occt::TopoDS_Shell^ Shell();
	Macad::Occt::TopoDS_Solid^ Solid();
}; // class BRepPrimAPI_MakeWedge

}; // namespace Occt
}; // namespace Macad
