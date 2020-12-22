// Generated wrapper code for package ElCLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  ElCLib
//---------------------------------------------------------------------
public ref class ElCLib sealed : public BaseClass<::ElCLib>
{

#ifdef Include_ElCLib_h
public:
	Include_ElCLib_h
#endif

public:
	ElCLib(::ElCLib* nativeInstance)
		: BaseClass<::ElCLib>( nativeInstance, true )
	{}

	ElCLib(::ElCLib& nativeInstance)
		: BaseClass<::ElCLib>( &nativeInstance, false )
	{}

	property ::ElCLib* NativeInstance
	{
		::ElCLib* get()
		{
			return static_cast<::ElCLib*>(_NativeInstance);
		}
	}

public:
	ElCLib();
	ElCLib(Macad::Occt::ElCLib^ parameter1);
	static double InPeriod(double U, double UFirst, double ULast);
	static void AdjustPeriodic(double UFirst, double ULast, double Precision, double% U1, double% U2);
	static Macad::Occt::Pnt Value(double U, Macad::Occt::gp_Lin^ L);
	static Macad::Occt::Pnt Value(double U, Macad::Occt::gp_Circ^ C);
	static Macad::Occt::Pnt Value(double U, Macad::Occt::gp_Elips^ E);
	static Macad::Occt::Pnt Value(double U, Macad::Occt::gp_Hypr^ H);
	static Macad::Occt::Pnt Value(double U, Macad::Occt::gp_Parab^ Prb);
	static void D1(double U, Macad::Occt::gp_Lin^ L, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	static void D1(double U, Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	static void D1(double U, Macad::Occt::gp_Elips^ E, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	static void D1(double U, Macad::Occt::gp_Hypr^ H, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	static void D1(double U, Macad::Occt::gp_Parab^ Prb, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	static void D2(double U, Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	static void D2(double U, Macad::Occt::gp_Elips^ E, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	static void D2(double U, Macad::Occt::gp_Hypr^ H, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	static void D2(double U, Macad::Occt::gp_Parab^ Prb, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	static void D3(double U, Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	static void D3(double U, Macad::Occt::gp_Elips^ E, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	static void D3(double U, Macad::Occt::gp_Hypr^ H, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	static Macad::Occt::Vec DN(double U, Macad::Occt::gp_Lin^ L, int N);
	static Macad::Occt::Vec DN(double U, Macad::Occt::gp_Circ^ C, int N);
	static Macad::Occt::Vec DN(double U, Macad::Occt::gp_Elips^ E, int N);
	static Macad::Occt::Vec DN(double U, Macad::Occt::gp_Hypr^ H, int N);
	static Macad::Occt::Vec DN(double U, Macad::Occt::gp_Parab^ Prb, int N);
	static Macad::Occt::Pnt2d Value(double U, Macad::Occt::gp_Lin2d^ L);
	static Macad::Occt::Pnt2d Value(double U, Macad::Occt::gp_Circ2d^ C);
	static Macad::Occt::Pnt2d Value(double U, Macad::Occt::gp_Elips2d^ E);
	static Macad::Occt::Pnt2d Value(double U, Macad::Occt::gp_Hypr2d^ H);
	static Macad::Occt::Pnt2d Value(double U, Macad::Occt::gp_Parab2d^ Prb);
	static void D1(double U, Macad::Occt::gp_Lin2d^ L, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	static void D1(double U, Macad::Occt::gp_Circ2d^ C, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	static void D1(double U, Macad::Occt::gp_Elips2d^ E, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	static void D1(double U, Macad::Occt::gp_Hypr2d^ H, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	static void D1(double U, Macad::Occt::gp_Parab2d^ Prb, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	static void D2(double U, Macad::Occt::gp_Circ2d^ C, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	static void D2(double U, Macad::Occt::gp_Elips2d^ E, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	static void D2(double U, Macad::Occt::gp_Hypr2d^ H, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	static void D2(double U, Macad::Occt::gp_Parab2d^ Prb, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	static void D3(double U, Macad::Occt::gp_Circ2d^ C, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	static void D3(double U, Macad::Occt::gp_Elips2d^ E, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	static void D3(double U, Macad::Occt::gp_Hypr2d^ H, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	static Macad::Occt::Vec2d DN(double U, Macad::Occt::gp_Lin2d^ L, int N);
	static Macad::Occt::Vec2d DN(double U, Macad::Occt::gp_Circ2d^ C, int N);
	static Macad::Occt::Vec2d DN(double U, Macad::Occt::gp_Elips2d^ E, int N);
	static Macad::Occt::Vec2d DN(double U, Macad::Occt::gp_Hypr2d^ H, int N);
	static Macad::Occt::Vec2d DN(double U, Macad::Occt::gp_Parab2d^ Prb, int N);
	static Macad::Occt::Pnt LineValue(double U, Macad::Occt::Ax1 Pos);
	static Macad::Occt::Pnt CircleValue(double U, Macad::Occt::Ax2 Pos, double Radius);
	static Macad::Occt::Pnt EllipseValue(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius);
	static Macad::Occt::Pnt HyperbolaValue(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius);
	static Macad::Occt::Pnt ParabolaValue(double U, Macad::Occt::Ax2 Pos, double Focal);
	static void LineD1(double U, Macad::Occt::Ax1 Pos, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	static void CircleD1(double U, Macad::Occt::Ax2 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	static void EllipseD1(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	static void HyperbolaD1(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	static void ParabolaD1(double U, Macad::Occt::Ax2 Pos, double Focal, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
	static void CircleD2(double U, Macad::Occt::Ax2 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	static void EllipseD2(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	static void HyperbolaD2(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	static void ParabolaD2(double U, Macad::Occt::Ax2 Pos, double Focal, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2);
	static void CircleD3(double U, Macad::Occt::Ax2 Pos, double Radius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	static void EllipseD3(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	static void HyperbolaD3(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3);
	static Macad::Occt::Vec LineDN(double U, Macad::Occt::Ax1 Pos, int N);
	static Macad::Occt::Vec CircleDN(double U, Macad::Occt::Ax2 Pos, double Radius, int N);
	static Macad::Occt::Vec EllipseDN(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, int N);
	static Macad::Occt::Vec HyperbolaDN(double U, Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, int N);
	static Macad::Occt::Vec ParabolaDN(double U, Macad::Occt::Ax2 Pos, double Focal, int N);
	static Macad::Occt::Pnt2d LineValue(double U, Macad::Occt::Ax2d Pos);
	static Macad::Occt::Pnt2d CircleValue(double U, Macad::Occt::Ax22d Pos, double Radius);
	static Macad::Occt::Pnt2d EllipseValue(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius);
	static Macad::Occt::Pnt2d HyperbolaValue(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius);
	static Macad::Occt::Pnt2d ParabolaValue(double U, Macad::Occt::Ax22d Pos, double Focal);
	static void LineD1(double U, Macad::Occt::Ax2d Pos, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	static void CircleD1(double U, Macad::Occt::Ax22d Pos, double Radius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	static void EllipseD1(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	static void HyperbolaD1(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	static void ParabolaD1(double U, Macad::Occt::Ax22d Pos, double Focal, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
	static void CircleD2(double U, Macad::Occt::Ax22d Pos, double Radius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	static void EllipseD2(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	static void HyperbolaD2(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	static void ParabolaD2(double U, Macad::Occt::Ax22d Pos, double Focal, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2);
	static void CircleD3(double U, Macad::Occt::Ax22d Pos, double Radius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	static void EllipseD3(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	static void HyperbolaD3(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1, Macad::Occt::Vec2d% V2, Macad::Occt::Vec2d% V3);
	static Macad::Occt::Vec2d LineDN(double U, Macad::Occt::Ax2d Pos, int N);
	static Macad::Occt::Vec2d CircleDN(double U, Macad::Occt::Ax22d Pos, double Radius, int N);
	static Macad::Occt::Vec2d EllipseDN(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, int N);
	static Macad::Occt::Vec2d HyperbolaDN(double U, Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, int N);
	static Macad::Occt::Vec2d ParabolaDN(double U, Macad::Occt::Ax22d Pos, double Focal, int N);
	static double Parameter(Macad::Occt::gp_Lin^ L, Macad::Occt::Pnt P);
	static double Parameter(Macad::Occt::gp_Lin2d^ L, Macad::Occt::Pnt2d P);
	static double Parameter(Macad::Occt::gp_Circ^ C, Macad::Occt::Pnt P);
	static double Parameter(Macad::Occt::gp_Circ2d^ C, Macad::Occt::Pnt2d P);
	static double Parameter(Macad::Occt::gp_Elips^ E, Macad::Occt::Pnt P);
	static double Parameter(Macad::Occt::gp_Elips2d^ E, Macad::Occt::Pnt2d P);
	static double Parameter(Macad::Occt::gp_Hypr^ H, Macad::Occt::Pnt P);
	static double Parameter(Macad::Occt::gp_Hypr2d^ H, Macad::Occt::Pnt2d P);
	static double Parameter(Macad::Occt::gp_Parab^ Prb, Macad::Occt::Pnt P);
	static double Parameter(Macad::Occt::gp_Parab2d^ Prb, Macad::Occt::Pnt2d P);
	static double LineParameter(Macad::Occt::Ax1 Pos, Macad::Occt::Pnt P);
	static double LineParameter(Macad::Occt::Ax2d Pos, Macad::Occt::Pnt2d P);
	static double CircleParameter(Macad::Occt::Ax2 Pos, Macad::Occt::Pnt P);
	static double CircleParameter(Macad::Occt::Ax22d Pos, Macad::Occt::Pnt2d P);
	static double EllipseParameter(Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt P);
	static double EllipseParameter(Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d P);
	static double HyperbolaParameter(Macad::Occt::Ax2 Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt P);
	static double HyperbolaParameter(Macad::Occt::Ax22d Pos, double MajorRadius, double MinorRadius, Macad::Occt::Pnt2d P);
	static double ParabolaParameter(Macad::Occt::Ax2 Pos, Macad::Occt::Pnt P);
	static double ParabolaParameter(Macad::Occt::Ax22d Pos, Macad::Occt::Pnt2d P);
	static Macad::Occt::Pnt To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Pnt2d P);
	static Macad::Occt::Vec To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Vec2d V);
	static Macad::Occt::Dir To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Dir2d V);
	static Macad::Occt::Ax1 To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Ax2d A);
	static Macad::Occt::Ax2 To3d(Macad::Occt::Ax2 Pos, Macad::Occt::Ax22d A);
	static Macad::Occt::gp_Lin^ To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Lin2d^ L);
	static Macad::Occt::gp_Circ^ To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Circ2d^ C);
	static Macad::Occt::gp_Elips^ To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Elips2d^ E);
	static Macad::Occt::gp_Hypr^ To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Hypr2d^ H);
	static Macad::Occt::gp_Parab^ To3d(Macad::Occt::Ax2 Pos, Macad::Occt::gp_Parab2d^ Prb);
}; // class ElCLib

}; // namespace Occt
}; // namespace Macad
