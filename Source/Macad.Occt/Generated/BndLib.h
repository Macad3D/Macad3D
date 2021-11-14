// Generated wrapper code for package BndLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BndLib
//---------------------------------------------------------------------
public ref class BndLib sealed : public BaseClass<::BndLib>
{

#ifdef Include_BndLib_h
public:
	Include_BndLib_h
#endif

public:
	BndLib(::BndLib* nativeInstance)
		: BaseClass<::BndLib>( nativeInstance, true )
	{}

	BndLib(::BndLib& nativeInstance)
		: BaseClass<::BndLib>( &nativeInstance, false )
	{}

	property ::BndLib* NativeInstance
	{
		::BndLib* get()
		{
			return static_cast<::BndLib*>(_NativeInstance);
		}
	}

public:
	BndLib();
	BndLib(Macad::Occt::BndLib^ parameter1);
	static void Add(Macad::Occt::gp_Lin^ L, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Lin2d^ L, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B);
	static void Add(Macad::Occt::gp_Circ^ C, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Circ^ C, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Circ2d^ C, double Tol, Macad::Occt::Bnd_Box2d^ B);
	static void Add(Macad::Occt::gp_Circ2d^ C, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B);
	static void Add(Macad::Occt::gp_Elips^ C, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Elips^ C, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Elips2d^ C, double Tol, Macad::Occt::Bnd_Box2d^ B);
	static void Add(Macad::Occt::gp_Elips2d^ C, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B);
	static void Add(Macad::Occt::gp_Parab^ P, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Parab2d^ P, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B);
	static void Add(Macad::Occt::gp_Hypr^ H, double P1, double P2, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Hypr2d^ H, double P1, double P2, double Tol, Macad::Occt::Bnd_Box2d^ B);
	static void Add(Macad::Occt::gp_Cylinder^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Cylinder^ S, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Cone^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Cone^ S, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Sphere^ S, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Sphere^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Torus^ P, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::gp_Torus^ P, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
}; // class BndLib

//---------------------------------------------------------------------
//  Class  BndLib_Add2dCurve
//---------------------------------------------------------------------
public ref class BndLib_Add2dCurve sealed : public BaseClass<::BndLib_Add2dCurve>
{

#ifdef Include_BndLib_Add2dCurve_h
public:
	Include_BndLib_Add2dCurve_h
#endif

public:
	BndLib_Add2dCurve(::BndLib_Add2dCurve* nativeInstance)
		: BaseClass<::BndLib_Add2dCurve>( nativeInstance, true )
	{}

	BndLib_Add2dCurve(::BndLib_Add2dCurve& nativeInstance)
		: BaseClass<::BndLib_Add2dCurve>( &nativeInstance, false )
	{}

	property ::BndLib_Add2dCurve* NativeInstance
	{
		::BndLib_Add2dCurve* get()
		{
			return static_cast<::BndLib_Add2dCurve*>(_NativeInstance);
		}
	}

public:
	BndLib_Add2dCurve();
	BndLib_Add2dCurve(Macad::Occt::BndLib_Add2dCurve^ parameter1);
	static void Add(Macad::Occt::Adaptor2d_Curve2d^ C, double Tol, Macad::Occt::Bnd_Box2d^ B);
	static void Add(Macad::Occt::Adaptor2d_Curve2d^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box2d^ B);
	static void Add(Macad::Occt::Geom2d_Curve^ C, double Tol, Macad::Occt::Bnd_Box2d^ Box);
	static void Add(Macad::Occt::Geom2d_Curve^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box2d^ B);
	static void AddOptimal(Macad::Occt::Geom2d_Curve^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box2d^ B);
}; // class BndLib_Add2dCurve

//---------------------------------------------------------------------
//  Class  BndLib_Add3dCurve
//---------------------------------------------------------------------
public ref class BndLib_Add3dCurve sealed : public BaseClass<::BndLib_Add3dCurve>
{

#ifdef Include_BndLib_Add3dCurve_h
public:
	Include_BndLib_Add3dCurve_h
#endif

public:
	BndLib_Add3dCurve(::BndLib_Add3dCurve* nativeInstance)
		: BaseClass<::BndLib_Add3dCurve>( nativeInstance, true )
	{}

	BndLib_Add3dCurve(::BndLib_Add3dCurve& nativeInstance)
		: BaseClass<::BndLib_Add3dCurve>( &nativeInstance, false )
	{}

	property ::BndLib_Add3dCurve* NativeInstance
	{
		::BndLib_Add3dCurve* get()
		{
			return static_cast<::BndLib_Add3dCurve*>(_NativeInstance);
		}
	}

public:
	BndLib_Add3dCurve();
	BndLib_Add3dCurve(Macad::Occt::BndLib_Add3dCurve^ parameter1);
	static void Add(Macad::Occt::Adaptor3d_Curve^ C, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::Adaptor3d_Curve^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box^ B);
	static void AddOptimal(Macad::Occt::Adaptor3d_Curve^ C, double Tol, Macad::Occt::Bnd_Box^ B);
	static void AddOptimal(Macad::Occt::Adaptor3d_Curve^ C, double U1, double U2, double Tol, Macad::Occt::Bnd_Box^ B);
	static void AddGenCurv(Macad::Occt::Adaptor3d_Curve^ C, double UMin, double UMax, double Tol, Macad::Occt::Bnd_Box^ B);
}; // class BndLib_Add3dCurve

//---------------------------------------------------------------------
//  Class  BndLib_AddSurface
//---------------------------------------------------------------------
public ref class BndLib_AddSurface sealed : public BaseClass<::BndLib_AddSurface>
{

#ifdef Include_BndLib_AddSurface_h
public:
	Include_BndLib_AddSurface_h
#endif

public:
	BndLib_AddSurface(::BndLib_AddSurface* nativeInstance)
		: BaseClass<::BndLib_AddSurface>( nativeInstance, true )
	{}

	BndLib_AddSurface(::BndLib_AddSurface& nativeInstance)
		: BaseClass<::BndLib_AddSurface>( &nativeInstance, false )
	{}

	property ::BndLib_AddSurface* NativeInstance
	{
		::BndLib_AddSurface* get()
		{
			return static_cast<::BndLib_AddSurface*>(_NativeInstance);
		}
	}

public:
	BndLib_AddSurface();
	BndLib_AddSurface(Macad::Occt::BndLib_AddSurface^ parameter1);
	static void Add(Macad::Occt::Adaptor3d_Surface^ S, double Tol, Macad::Occt::Bnd_Box^ B);
	static void Add(Macad::Occt::Adaptor3d_Surface^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
	static void AddOptimal(Macad::Occt::Adaptor3d_Surface^ S, double Tol, Macad::Occt::Bnd_Box^ B);
	static void AddOptimal(Macad::Occt::Adaptor3d_Surface^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
	static void AddGenSurf(Macad::Occt::Adaptor3d_Surface^ S, double UMin, double UMax, double VMin, double VMax, double Tol, Macad::Occt::Bnd_Box^ B);
}; // class BndLib_AddSurface

}; // namespace Occt
}; // namespace Macad
