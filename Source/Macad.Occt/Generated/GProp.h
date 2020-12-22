// Generated wrapper code for package GProp

#pragma once

#include "GProp.h"
#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  GProp_EquaType
//---------------------------------------------------------------------
public enum class GProp_EquaType
{
	GProp_Plane = 0,
	GProp_Line = 1,
	GProp_Point = 2,
	GProp_Space = 3,
	GProp_None = 4
}; // enum  class GProp_EquaType

//---------------------------------------------------------------------
//  Enum  GProp_ValueType
//---------------------------------------------------------------------
public enum class GProp_ValueType
{
	GProp_Mass = 0,
	GProp_CenterMassX = 1,
	GProp_CenterMassY = 2,
	GProp_CenterMassZ = 3,
	GProp_InertiaXX = 4,
	GProp_InertiaYY = 5,
	GProp_InertiaZZ = 6,
	GProp_InertiaXY = 7,
	GProp_InertiaXZ = 8,
	GProp_InertiaYZ = 9,
	GProp_Unknown = 10
}; // enum  class GProp_ValueType

//---------------------------------------------------------------------
//  Class  GProp_GProps
//---------------------------------------------------------------------
public ref class GProp_GProps : public BaseClass<::GProp_GProps>
{

#ifdef Include_GProp_GProps_h
public:
	Include_GProp_GProps_h
#endif

protected:
	GProp_GProps(InitMode init)
		: BaseClass<::GProp_GProps>( init )
	{}

public:
	GProp_GProps(::GProp_GProps* nativeInstance)
		: BaseClass<::GProp_GProps>( nativeInstance, true )
	{}

	GProp_GProps(::GProp_GProps& nativeInstance)
		: BaseClass<::GProp_GProps>( &nativeInstance, false )
	{}

	property ::GProp_GProps* NativeInstance
	{
		::GProp_GProps* get()
		{
			return static_cast<::GProp_GProps*>(_NativeInstance);
		}
	}

public:
	GProp_GProps();
	GProp_GProps(Macad::Occt::Pnt SystemLocation);
	GProp_GProps(Macad::Occt::GProp_GProps^ parameter1);
	void Add(Macad::Occt::GProp_GProps^ Item, double Density);
	void Add(Macad::Occt::GProp_GProps^ Item);
	double Mass();
	Macad::Occt::Pnt CentreOfMass();
	Macad::Occt::Mat MatrixOfInertia();
	void StaticMoments(double% Ix, double% Iy, double% Iz);
	double MomentOfInertia(Macad::Occt::Ax1 A);
	Macad::Occt::GProp_PrincipalProps^ PrincipalProperties();
	double RadiusOfGyration(Macad::Occt::Ax1 A);
}; // class GProp_GProps

//---------------------------------------------------------------------
//  Class  GProp_PGProps
//---------------------------------------------------------------------
public ref class GProp_PGProps sealed : public Macad::Occt::GProp_GProps
{

#ifdef Include_GProp_PGProps_h
public:
	Include_GProp_PGProps_h
#endif

public:
	GProp_PGProps(::GProp_PGProps* nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	GProp_PGProps(::GProp_PGProps& nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	property ::GProp_PGProps* NativeInstance
	{
		::GProp_PGProps* get()
		{
			return static_cast<::GProp_PGProps*>(_NativeInstance);
		}
	}

public:
	GProp_PGProps();
	GProp_PGProps(Macad::Occt::TColgp_Array1OfPnt^ Pnts);
	GProp_PGProps(Macad::Occt::TColgp_Array2OfPnt^ Pnts);
	GProp_PGProps(Macad::Occt::TColgp_Array1OfPnt^ Pnts, Macad::Occt::TColStd_Array1OfReal^ Density);
	GProp_PGProps(Macad::Occt::TColgp_Array2OfPnt^ Pnts, Macad::Occt::TColStd_Array2OfReal^ Density);
	GProp_PGProps(Macad::Occt::GProp_PGProps^ parameter1);
	void AddPoint(Macad::Occt::Pnt P);
	void AddPoint(Macad::Occt::Pnt P, double Density);
	static Macad::Occt::Pnt Barycentre(Macad::Occt::TColgp_Array1OfPnt^ Pnts);
	static Macad::Occt::Pnt Barycentre(Macad::Occt::TColgp_Array2OfPnt^ Pnts);
	static void Barycentre(Macad::Occt::TColgp_Array1OfPnt^ Pnts, Macad::Occt::TColStd_Array1OfReal^ Density, double% Mass, Macad::Occt::Pnt% G);
	static void Barycentre(Macad::Occt::TColgp_Array2OfPnt^ Pnts, Macad::Occt::TColStd_Array2OfReal^ Density, double% Mass, Macad::Occt::Pnt% G);
}; // class GProp_PGProps

//---------------------------------------------------------------------
//  Class  GProp_CelGProps
//---------------------------------------------------------------------
public ref class GProp_CelGProps sealed : public Macad::Occt::GProp_GProps
{

#ifdef Include_GProp_CelGProps_h
public:
	Include_GProp_CelGProps_h
#endif

public:
	GProp_CelGProps(::GProp_CelGProps* nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	GProp_CelGProps(::GProp_CelGProps& nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	property ::GProp_CelGProps* NativeInstance
	{
		::GProp_CelGProps* get()
		{
			return static_cast<::GProp_CelGProps*>(_NativeInstance);
		}
	}

public:
	GProp_CelGProps();
	GProp_CelGProps(Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt CLocation);
	GProp_CelGProps(Macad::Occt::gp_Circ^ C, double U1, double U2, Macad::Occt::Pnt CLocation);
	GProp_CelGProps(Macad::Occt::gp_Lin^ C, double U1, double U2, Macad::Occt::Pnt CLocation);
	GProp_CelGProps(Macad::Occt::GProp_CelGProps^ parameter1);
	void SetLocation(Macad::Occt::Pnt CLocation);
	void Perform(Macad::Occt::gp_Circ^ C, double U1, double U2);
	void Perform(Macad::Occt::gp_Lin^ C, double U1, double U2);
}; // class GProp_CelGProps

//---------------------------------------------------------------------
//  Class  GProp_SelGProps
//---------------------------------------------------------------------
public ref class GProp_SelGProps sealed : public Macad::Occt::GProp_GProps
{

#ifdef Include_GProp_SelGProps_h
public:
	Include_GProp_SelGProps_h
#endif

public:
	GProp_SelGProps(::GProp_SelGProps* nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	GProp_SelGProps(::GProp_SelGProps& nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	property ::GProp_SelGProps* NativeInstance
	{
		::GProp_SelGProps* get()
		{
			return static_cast<::GProp_SelGProps*>(_NativeInstance);
		}
	}

public:
	GProp_SelGProps();
	GProp_SelGProps(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt SLocation);
	GProp_SelGProps(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt SLocation);
	GProp_SelGProps(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt SLocation);
	GProp_SelGProps(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt SLocation);
	GProp_SelGProps(Macad::Occt::GProp_SelGProps^ parameter1);
	void SetLocation(Macad::Occt::Pnt SLocation);
	void Perform(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2);
	void Perform(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2);
	void Perform(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2);
	void Perform(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2);
}; // class GProp_SelGProps

//---------------------------------------------------------------------
//  Class  GProp_VelGProps
//---------------------------------------------------------------------
public ref class GProp_VelGProps sealed : public Macad::Occt::GProp_GProps
{

#ifdef Include_GProp_VelGProps_h
public:
	Include_GProp_VelGProps_h
#endif

public:
	GProp_VelGProps(::GProp_VelGProps* nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	GProp_VelGProps(::GProp_VelGProps& nativeInstance)
		: Macad::Occt::GProp_GProps( nativeInstance )
	{}

	property ::GProp_VelGProps* NativeInstance
	{
		::GProp_VelGProps* get()
		{
			return static_cast<::GProp_VelGProps*>(_NativeInstance);
		}
	}

public:
	GProp_VelGProps();
	GProp_VelGProps(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt VLocation);
	GProp_VelGProps(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2, Macad::Occt::Pnt VLocation);
	GProp_VelGProps(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt VLocation);
	GProp_VelGProps(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2, Macad::Occt::Pnt VLocation);
	GProp_VelGProps(Macad::Occt::GProp_VelGProps^ parameter1);
	void SetLocation(Macad::Occt::Pnt VLocation);
	void Perform(Macad::Occt::gp_Cylinder^ S, double Alpha1, double Alpha2, double Z1, double Z2);
	void Perform(Macad::Occt::gp_Cone^ S, double Alpha1, double Alpha2, double Z1, double Z2);
	void Perform(Macad::Occt::gp_Sphere^ S, double Teta1, double Teta2, double Alpha1, double Alpha2);
	void Perform(Macad::Occt::gp_Torus^ S, double Teta1, double Teta2, double Alpha1, double Alpha2);
}; // class GProp_VelGProps

//---------------------------------------------------------------------
//  Class  GProp_PrincipalProps
//---------------------------------------------------------------------
public ref class GProp_PrincipalProps sealed : public BaseClass<::GProp_PrincipalProps>
{

#ifdef Include_GProp_PrincipalProps_h
public:
	Include_GProp_PrincipalProps_h
#endif

public:
	GProp_PrincipalProps(::GProp_PrincipalProps* nativeInstance)
		: BaseClass<::GProp_PrincipalProps>( nativeInstance, true )
	{}

	GProp_PrincipalProps(::GProp_PrincipalProps& nativeInstance)
		: BaseClass<::GProp_PrincipalProps>( &nativeInstance, false )
	{}

	property ::GProp_PrincipalProps* NativeInstance
	{
		::GProp_PrincipalProps* get()
		{
			return static_cast<::GProp_PrincipalProps*>(_NativeInstance);
		}
	}

public:
	GProp_PrincipalProps();
	GProp_PrincipalProps(Macad::Occt::GProp_PrincipalProps^ parameter1);
	bool HasSymmetryAxis();
	bool HasSymmetryAxis(double aTol);
	bool HasSymmetryPoint();
	bool HasSymmetryPoint(double aTol);
	void Moments(double% Ixx, double% Iyy, double% Izz);
	Macad::Occt::Vec FirstAxisOfInertia();
	Macad::Occt::Vec SecondAxisOfInertia();
	Macad::Occt::Vec ThirdAxisOfInertia();
	void RadiusOfGyration(double% Rxx, double% Ryy, double% Rzz);
}; // class GProp_PrincipalProps

//---------------------------------------------------------------------
//  Class  GProp_PEquation
//---------------------------------------------------------------------
public ref class GProp_PEquation sealed : public BaseClass<::GProp_PEquation>
{

#ifdef Include_GProp_PEquation_h
public:
	Include_GProp_PEquation_h
#endif

public:
	GProp_PEquation(::GProp_PEquation* nativeInstance)
		: BaseClass<::GProp_PEquation>( nativeInstance, true )
	{}

	GProp_PEquation(::GProp_PEquation& nativeInstance)
		: BaseClass<::GProp_PEquation>( &nativeInstance, false )
	{}

	property ::GProp_PEquation* NativeInstance
	{
		::GProp_PEquation* get()
		{
			return static_cast<::GProp_PEquation*>(_NativeInstance);
		}
	}

public:
	GProp_PEquation(Macad::Occt::TColgp_Array1OfPnt^ Pnts, double Tol);
	GProp_PEquation(Macad::Occt::GProp_PEquation^ parameter1);
	bool IsPlanar();
	bool IsLinear();
	bool IsPoint();
	bool IsSpace();
	Macad::Occt::Pln Plane();
	Macad::Occt::gp_Lin^ Line();
	Macad::Occt::Pnt Point();
	void Box(Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
}; // class GProp_PEquation

//---------------------------------------------------------------------
//  Class  GProp
//---------------------------------------------------------------------
public ref class GProp sealed : public BaseClass<::GProp>
{

#ifdef Include_GProp_h
public:
	Include_GProp_h
#endif

public:
	GProp(::GProp* nativeInstance)
		: BaseClass<::GProp>( nativeInstance, true )
	{}

	GProp(::GProp& nativeInstance)
		: BaseClass<::GProp>( &nativeInstance, false )
	{}

	property ::GProp* NativeInstance
	{
		::GProp* get()
		{
			return static_cast<::GProp*>(_NativeInstance);
		}
	}

public:
	GProp();
	GProp(Macad::Occt::GProp^ parameter1);
	static void HOperator(Macad::Occt::Pnt G, Macad::Occt::Pnt Q, double Mass, Macad::Occt::Mat% Operator);
}; // class GProp

//---------------------------------------------------------------------
//  Class  GProp_UndefinedAxis
//---------------------------------------------------------------------
public ref class GProp_UndefinedAxis sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_GProp_UndefinedAxis_h
public:
	Include_GProp_UndefinedAxis_h
#endif

public:
	GProp_UndefinedAxis(::GProp_UndefinedAxis* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	GProp_UndefinedAxis(::GProp_UndefinedAxis& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::GProp_UndefinedAxis* NativeInstance
	{
		::GProp_UndefinedAxis* get()
		{
			return static_cast<::GProp_UndefinedAxis*>(_NativeInstance);
		}
	}

	static Macad::Occt::GProp_UndefinedAxis^ CreateDowncasted(::GProp_UndefinedAxis* instance);

public:
	GProp_UndefinedAxis();
	GProp_UndefinedAxis(System::String^ theMessage);
	GProp_UndefinedAxis(Macad::Occt::GProp_UndefinedAxis^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::GProp_UndefinedAxis^ NewInstance(System::String^ theMessage);
	static Macad::Occt::GProp_UndefinedAxis^ NewInstance();
}; // class GProp_UndefinedAxis

}; // namespace Occt
}; // namespace Macad
