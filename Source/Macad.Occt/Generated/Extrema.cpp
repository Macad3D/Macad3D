// Generated wrapper code for package Extrema

#include "OcctPCH.h"
#include "Extrema.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "gp.h"
#include "Extrema.h"
#include "Adaptor3d.h"


//---------------------------------------------------------------------
//  Class  Extrema_POnCurv
//---------------------------------------------------------------------

Macad::Occt::Extrema_POnCurv::Extrema_POnCurv()
	: BaseClass<::Extrema_POnCurv>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Extrema_POnCurv();
}

Macad::Occt::Extrema_POnCurv::Extrema_POnCurv(double U, Macad::Occt::Pnt P)
	: BaseClass<::Extrema_POnCurv>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	_NativeInstance = new ::Extrema_POnCurv(U, *(gp_Pnt*)pp_P);
}

Macad::Occt::Extrema_POnCurv::Extrema_POnCurv(Macad::Occt::Extrema_POnCurv^ parameter1)
	: BaseClass<::Extrema_POnCurv>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Extrema_POnCurv(*(::Extrema_POnCurv*)parameter1->NativeInstance);
}

void Macad::Occt::Extrema_POnCurv::SetValues(double U, Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::Extrema_POnCurv*)_NativeInstance)->SetValues(U, *(gp_Pnt*)pp_P);
}

Macad::Occt::Pnt Macad::Occt::Extrema_POnCurv::Value()
{
	return Macad::Occt::Pnt(((::Extrema_POnCurv*)_NativeInstance)->Value());
}

double Macad::Occt::Extrema_POnCurv::Parameter()
{
	return ((::Extrema_POnCurv*)_NativeInstance)->Parameter();
}




//---------------------------------------------------------------------
//  Class  Extrema_ExtPC
//---------------------------------------------------------------------

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC()
	: BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Extrema_ExtPC();
}

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF)
	: BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	_NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_P, *(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup, TolF);
}

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup)
	: BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	_NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_P, *(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup, 1.0E-10);
}

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C, double TolF)
	: BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	_NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_P, *(::Adaptor3d_Curve*)C->NativeInstance, TolF);
}

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC(Macad::Occt::Pnt P, Macad::Occt::Adaptor3d_Curve^ C)
	: BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	_NativeInstance = new ::Extrema_ExtPC(*(gp_Pnt*)pp_P, *(::Adaptor3d_Curve*)C->NativeInstance, 1.0E-10);
}

Macad::Occt::Extrema_ExtPC::Extrema_ExtPC(Macad::Occt::Extrema_ExtPC^ parameter1)
	: BaseClass<::Extrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Extrema_ExtPC(*(::Extrema_ExtPC*)parameter1->NativeInstance);
}

void Macad::Occt::Extrema_ExtPC::Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup, double TolF)
{
	((::Extrema_ExtPC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup, TolF);
}

void Macad::Occt::Extrema_ExtPC::Initialize(Macad::Occt::Adaptor3d_Curve^ C, double Uinf, double Usup)
{
	((::Extrema_ExtPC*)_NativeInstance)->Initialize(*(::Adaptor3d_Curve*)C->NativeInstance, Uinf, Usup, 1.0E-10);
}

void Macad::Occt::Extrema_ExtPC::Perform(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::Extrema_ExtPC*)_NativeInstance)->Perform(*(gp_Pnt*)pp_P);
}

bool Macad::Occt::Extrema_ExtPC::IsDone()
{
	return ((::Extrema_ExtPC*)_NativeInstance)->IsDone();
}

double Macad::Occt::Extrema_ExtPC::SquareDistance(int N)
{
	return ((::Extrema_ExtPC*)_NativeInstance)->SquareDistance(N);
}

int Macad::Occt::Extrema_ExtPC::NbExt()
{
	return ((::Extrema_ExtPC*)_NativeInstance)->NbExt();
}

bool Macad::Occt::Extrema_ExtPC::IsMin(int N)
{
	return ((::Extrema_ExtPC*)_NativeInstance)->IsMin(N);
}

Macad::Occt::Extrema_POnCurv^ Macad::Occt::Extrema_ExtPC::Point(int N)
{
	::Extrema_POnCurv* _result = new ::Extrema_POnCurv();
	*_result =  (::Extrema_POnCurv)((::Extrema_ExtPC*)_NativeInstance)->Point(N);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Extrema_POnCurv(_result);
}

void Macad::Occt::Extrema_ExtPC::TrimmedSquareDistances(double% dist1, double% dist2, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2)
{
	pin_ptr<double> pp_dist1 = &dist1;
	pin_ptr<double> pp_dist2 = &dist2;
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	((::Extrema_ExtPC*)_NativeInstance)->TrimmedSquareDistances(*(Standard_Real*)pp_dist1, *(Standard_Real*)pp_dist2, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2);
}



