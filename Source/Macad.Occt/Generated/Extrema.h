// Generated wrapper code for package Extrema

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  Extrema_POnCurv
//---------------------------------------------------------------------
public ref class Extrema_POnCurv sealed : public BaseClass<::Extrema_POnCurv>
{

#ifdef Include_Extrema_POnCurv_h
public:
	Include_Extrema_POnCurv_h
#endif

public:
	Extrema_POnCurv(::Extrema_POnCurv* nativeInstance)
		: BaseClass<::Extrema_POnCurv>( nativeInstance, true )
	{}

	Extrema_POnCurv(::Extrema_POnCurv& nativeInstance)
		: BaseClass<::Extrema_POnCurv>( &nativeInstance, false )
	{}

	property ::Extrema_POnCurv* NativeInstance
	{
		::Extrema_POnCurv* get()
		{
			return static_cast<::Extrema_POnCurv*>(_NativeInstance);
		}
	}

public:
	Extrema_POnCurv();
	Extrema_POnCurv(double U, Macad::Occt::Pnt P);
	Extrema_POnCurv(Macad::Occt::Extrema_POnCurv^ parameter1);
	void SetValues(double U, Macad::Occt::Pnt P);
	Macad::Occt::Pnt Value();
	double Parameter();
}; // class Extrema_POnCurv

//---------------------------------------------------------------------
//  Class  Extrema_ExtPC
//---------------------------------------------------------------------
public ref class Extrema_ExtPC sealed : public BaseClass<::Extrema_ExtPC>
{

#ifdef Include_Extrema_ExtPC_h
public:
	Include_Extrema_ExtPC_h
#endif

public:
	Extrema_ExtPC(::Extrema_ExtPC* nativeInstance)
		: BaseClass<::Extrema_ExtPC>( nativeInstance, true )
	{}

	Extrema_ExtPC(::Extrema_ExtPC& nativeInstance)
		: BaseClass<::Extrema_ExtPC>( &nativeInstance, false )
	{}

	property ::Extrema_ExtPC* NativeInstance
	{
		::Extrema_ExtPC* get()
		{
			return static_cast<::Extrema_ExtPC*>(_NativeInstance);
		}
	}

public:
	Extrema_ExtPC();
	Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF);
	Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup);
	Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double TolF);
	Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C);
	Extrema_ExtPC(Macad::Occt::Extrema_ExtPC^ parameter1);
	void Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF);
	void Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup);
	void Perform(Macad::Occt::Pnt P);
	bool IsDone();
	double SquareDistance(int N);
	int NbExt();
	bool IsMin(int N);
	Macad::Occt::Extrema_POnCurv^ Point(int N);
	void TrimmedSquareDistances(double% dist1, double% dist2, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2);
}; // class Extrema_ExtPC

}; // namespace Occt
}; // namespace Macad
