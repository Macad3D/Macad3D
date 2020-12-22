// Generated wrapper code for package ElSLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ElSLib
//---------------------------------------------------------------------
public ref class ElSLib sealed : public BaseClass<::ElSLib>
{

#ifdef Include_ElSLib_h
public:
	Include_ElSLib_h
#endif

public:
	ElSLib(::ElSLib* nativeInstance)
		: BaseClass<::ElSLib>( nativeInstance, true )
	{}

	ElSLib(::ElSLib& nativeInstance)
		: BaseClass<::ElSLib>( &nativeInstance, false )
	{}

	property ::ElSLib* NativeInstance
	{
		::ElSLib* get()
		{
			return static_cast<::ElSLib*>(_NativeInstance);
		}
	}

public:
	ElSLib();
	ElSLib(Macad::Occt::ElSLib^ parameter1);
	static Macad::Occt::Pnt Value(double U, double V, Macad::Occt::Pln Pl);
	static Macad::Occt::Pnt Value(double U, double V, Macad::Occt::gp_Cone^ C);
	static Macad::Occt::Pnt Value(double U, double V, Macad::Occt::gp_Cylinder^ C);
	static Macad::Occt::Pnt Value(double U, double V, Macad::Occt::gp_Sphere^ S);
	static Macad::Occt::Pnt Value(double U, double V, Macad::Occt::gp_Torus^ T);
	static Macad::Occt::Vec DN(double U, double V, Macad::Occt::Pln Pl, int Nu, int Nv);
	static Macad::Occt::Vec DN(double U, double V, Macad::Occt::gp_Cone^ C, int Nu, int Nv);
	static Macad::Occt::Vec DN(double U, double V, Macad::Occt::gp_Cylinder^ C, int Nu, int Nv);
	static Macad::Occt::Vec DN(double U, double V, Macad::Occt::gp_Sphere^ S, int Nu, int Nv);
	static Macad::Occt::Vec DN(double U, double V, Macad::Occt::gp_Torus^ T, int Nu, int Nv);
	static void D0(double U, double V, Macad::Occt::Pln Pl, Macad::Occt::Pnt% P);
	static void D0(double U, double V, Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt% P);
	static void D0(double U, double V, Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt% P);
	static void D0(double U, double V, Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt% P);
	static void D0(double U, double V, Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt% P);
	static void D1(double U, double V, Macad::Occt::Pln Pl, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
	static void D1(double U, double V, Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
	static void D1(double U, double V, Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
	static void D1(double U, double V, Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
	static void D1(double U, double V, Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
	static void D2(double U, double V, Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
	static void D2(double U, double V, Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
	static void D2(double U, double V, Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
	static void D2(double U, double V, Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
	static void D3(double U, double V, Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
	static void D3(double U, double V, Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
	static void D3(double U, double V, Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
	static void D3(double U, double V, Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
	static Macad::Occt::Pnt PlaneValue(double U, double V, Macad::Occt::Ax3 Pos);
	static Macad::Occt::Pnt CylinderValue(double U, double V, Macad::Occt::Ax3 Pos, double Radius);
	static Macad::Occt::Pnt ConeValue(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle);
	static Macad::Occt::Pnt SphereValue(double U, double V, Macad::Occt::Ax3 Pos, double Radius);
	static Macad::Occt::Pnt TorusValue(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius);
	static Macad::Occt::Vec PlaneDN(double U, double V, Macad::Occt::Ax3 Pos, int Nu, int Nv);
	static Macad::Occt::Vec CylinderDN(double U, double V, Macad::Occt::Ax3 Pos, double Radius, int Nu, int Nv);
	static Macad::Occt::Vec ConeDN(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, int Nu, int Nv);
	static Macad::Occt::Vec SphereDN(double U, double V, Macad::Occt::Ax3 Pos, double Radius, int Nu, int Nv);
	static Macad::Occt::Vec TorusDN(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, int Nu, int Nv);
	static void PlaneD0(double U, double V, Macad::Occt::Ax3 Pos, Macad::Occt::Pnt% P);
	static void ConeD0(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt% P);
	static void CylinderD0(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P);
	static void SphereD0(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P);
	static void TorusD0(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P);
	static void PlaneD1(double U, double V, Macad::Occt::Ax3 Pos, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
	static void ConeD1(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
	static void CylinderD1(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
	static void SphereD1(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
	static void TorusD1(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv);
	static void ConeD2(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
	static void CylinderD2(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
	static void SphereD2(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
	static void TorusD2(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv);
	static void ConeD3(double U, double V, Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
	static void CylinderD3(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
	static void SphereD3(double U, double V, Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
	static void TorusD3(double U, double V, Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv);
	static void Parameters(Macad::Occt::Pln Pl, Macad::Occt::Pnt P, double% U, double% V);
	static void Parameters(Macad::Occt::gp_Cylinder^ C, Macad::Occt::Pnt P, double% U, double% V);
	static void Parameters(Macad::Occt::gp_Cone^ C, Macad::Occt::Pnt P, double% U, double% V);
	static void Parameters(Macad::Occt::gp_Sphere^ S, Macad::Occt::Pnt P, double% U, double% V);
	static void Parameters(Macad::Occt::gp_Torus^ T, Macad::Occt::Pnt P, double% U, double% V);
	static void PlaneParameters(Macad::Occt::Ax3 Pos, Macad::Occt::Pnt P, double% U, double% V);
	static void CylinderParameters(Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt P, double% U, double% V);
	static void ConeParameters(Macad::Occt::Ax3 Pos, double Radius, double SAngle, Macad::Occt::Pnt P, double% U, double% V);
	static void SphereParameters(Macad::Occt::Ax3 Pos, double Radius, Macad::Occt::Pnt P, double% U, double% V);
	static void TorusParameters(Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt P, double% U, double% V);
	static Macad::Occt::gp_Lin^ PlaneUIso(Macad::Occt::Ax3 Pos, double U);
	static Macad::Occt::gp_Lin^ CylinderUIso(Macad::Occt::Ax3 Pos, double Radius, double U);
	static Macad::Occt::gp_Lin^ ConeUIso(Macad::Occt::Ax3 Pos, double Radius, double SAngle, double U);
	static Macad::Occt::gp_Circ^ SphereUIso(Macad::Occt::Ax3 Pos, double Radius, double U);
	static Macad::Occt::gp_Circ^ TorusUIso(Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, double U);
	static Macad::Occt::gp_Lin^ PlaneVIso(Macad::Occt::Ax3 Pos, double V);
	static Macad::Occt::gp_Circ^ CylinderVIso(Macad::Occt::Ax3 Pos, double Radius, double V);
	static Macad::Occt::gp_Circ^ ConeVIso(Macad::Occt::Ax3 Pos, double Radius, double SAngle, double V);
	static Macad::Occt::gp_Circ^ SphereVIso(Macad::Occt::Ax3 Pos, double Radius, double V);
	static Macad::Occt::gp_Circ^ TorusVIso(Macad::Occt::Ax3 Pos, double MajorRadius, double MinorRadius, double V);
}; // class ElSLib

}; // namespace Occt
}; // namespace Macad
