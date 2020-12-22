// Generated wrapper code for package IntAna2d

#include "OcctPCH.h"
#include "IntAna2d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "IntAna2d.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  IntAna2d_IntPoint
//---------------------------------------------------------------------

Macad::Occt::IntAna2d_IntPoint::IntAna2d_IntPoint(double X, double Y, double U1, double U2)
	: BaseClass<::IntAna2d_IntPoint>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_IntPoint(X, Y, U1, U2);
}

Macad::Occt::IntAna2d_IntPoint::IntAna2d_IntPoint(double X, double Y, double U1)
	: BaseClass<::IntAna2d_IntPoint>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_IntPoint(X, Y, U1);
}

Macad::Occt::IntAna2d_IntPoint::IntAna2d_IntPoint()
	: BaseClass<::IntAna2d_IntPoint>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_IntPoint();
}

Macad::Occt::IntAna2d_IntPoint::IntAna2d_IntPoint(Macad::Occt::IntAna2d_IntPoint^ parameter1)
	: BaseClass<::IntAna2d_IntPoint>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_IntPoint(*(::IntAna2d_IntPoint*)parameter1->NativeInstance);
}

void Macad::Occt::IntAna2d_IntPoint::SetValue(double X, double Y, double U1, double U2)
{
	((::IntAna2d_IntPoint*)_NativeInstance)->SetValue(X, Y, U1, U2);
}

void Macad::Occt::IntAna2d_IntPoint::SetValue(double X, double Y, double U1)
{
	((::IntAna2d_IntPoint*)_NativeInstance)->SetValue(X, Y, U1);
}

Macad::Occt::Pnt2d Macad::Occt::IntAna2d_IntPoint::Value()
{
	return Macad::Occt::Pnt2d(((::IntAna2d_IntPoint*)_NativeInstance)->Value());
}

bool Macad::Occt::IntAna2d_IntPoint::SecondIsImplicit()
{
	return ((::IntAna2d_IntPoint*)_NativeInstance)->SecondIsImplicit();
}

double Macad::Occt::IntAna2d_IntPoint::ParamOnFirst()
{
	return ((::IntAna2d_IntPoint*)_NativeInstance)->ParamOnFirst();
}

double Macad::Occt::IntAna2d_IntPoint::ParamOnSecond()
{
	return ((::IntAna2d_IntPoint*)_NativeInstance)->ParamOnSecond();
}




//---------------------------------------------------------------------
//  Class  IntAna2d_Conic
//---------------------------------------------------------------------

Macad::Occt::IntAna2d_Conic::IntAna2d_Conic(Macad::Occt::gp_Circ2d^ C)
	: BaseClass<::IntAna2d_Conic>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_Conic(*(::gp_Circ2d*)C->NativeInstance);
}

Macad::Occt::IntAna2d_Conic::IntAna2d_Conic(Macad::Occt::gp_Lin2d^ C)
	: BaseClass<::IntAna2d_Conic>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_Conic(*(::gp_Lin2d*)C->NativeInstance);
}

Macad::Occt::IntAna2d_Conic::IntAna2d_Conic(Macad::Occt::gp_Parab2d^ C)
	: BaseClass<::IntAna2d_Conic>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_Conic(*(::gp_Parab2d*)C->NativeInstance);
}

Macad::Occt::IntAna2d_Conic::IntAna2d_Conic(Macad::Occt::gp_Hypr2d^ C)
	: BaseClass<::IntAna2d_Conic>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_Conic(*(::gp_Hypr2d*)C->NativeInstance);
}

Macad::Occt::IntAna2d_Conic::IntAna2d_Conic(Macad::Occt::gp_Elips2d^ C)
	: BaseClass<::IntAna2d_Conic>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_Conic(*(::gp_Elips2d*)C->NativeInstance);
}

Macad::Occt::IntAna2d_Conic::IntAna2d_Conic(Macad::Occt::IntAna2d_Conic^ parameter1)
	: BaseClass<::IntAna2d_Conic>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_Conic(*(::IntAna2d_Conic*)parameter1->NativeInstance);
}

double Macad::Occt::IntAna2d_Conic::Value(double X, double Y)
{
	return ((::IntAna2d_Conic*)_NativeInstance)->Value(X, Y);
}

Macad::Occt::XY Macad::Occt::IntAna2d_Conic::Grad(double X, double Y)
{
	return Macad::Occt::XY(((::IntAna2d_Conic*)_NativeInstance)->Grad(X, Y));
}

void Macad::Occt::IntAna2d_Conic::ValAndGrad(double X, double Y, double% Val, Macad::Occt::XY% Grd)
{
	pin_ptr<double> pp_Val = &Val;
	pin_ptr<Macad::Occt::XY> pp_Grd = &Grd;
	((::IntAna2d_Conic*)_NativeInstance)->ValAndGrad(X, Y, *(Standard_Real*)pp_Val, *(gp_XY*)pp_Grd);
}

void Macad::Occt::IntAna2d_Conic::Coefficients(double% A, double% B, double% C, double% D, double% E, double% F)
{
	pin_ptr<double> pp_A = &A;
	pin_ptr<double> pp_B = &B;
	pin_ptr<double> pp_C = &C;
	pin_ptr<double> pp_D = &D;
	pin_ptr<double> pp_E = &E;
	pin_ptr<double> pp_F = &F;
	((::IntAna2d_Conic*)_NativeInstance)->Coefficients(*(Standard_Real*)pp_A, *(Standard_Real*)pp_B, *(Standard_Real*)pp_C, *(Standard_Real*)pp_D, *(Standard_Real*)pp_E, *(Standard_Real*)pp_F);
}

void Macad::Occt::IntAna2d_Conic::NewCoefficients(double% A, double% B, double% C, double% D, double% E, double% F, Macad::Occt::Ax2d Axis)
{
	pin_ptr<double> pp_A = &A;
	pin_ptr<double> pp_B = &B;
	pin_ptr<double> pp_C = &C;
	pin_ptr<double> pp_D = &D;
	pin_ptr<double> pp_E = &E;
	pin_ptr<double> pp_F = &F;
	pin_ptr<Macad::Occt::Ax2d> pp_Axis = &Axis;
	((::IntAna2d_Conic*)_NativeInstance)->NewCoefficients(*(Standard_Real*)pp_A, *(Standard_Real*)pp_B, *(Standard_Real*)pp_C, *(Standard_Real*)pp_D, *(Standard_Real*)pp_E, *(Standard_Real*)pp_F, *(gp_Ax2d*)pp_Axis);
}




//---------------------------------------------------------------------
//  Class  IntAna2d_AnaIntersection
//---------------------------------------------------------------------

Macad::Occt::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection()
	: BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_AnaIntersection();
}

Macad::Occt::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(Macad::Occt::gp_Lin2d^ L1, Macad::Occt::gp_Lin2d^ L2)
	: BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Lin2d*)L1->NativeInstance, *(::gp_Lin2d*)L2->NativeInstance);
}

Macad::Occt::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Circ2d^ C2)
	: BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Circ2d*)C1->NativeInstance, *(::gp_Circ2d*)C2->NativeInstance);
}

Macad::Occt::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(Macad::Occt::gp_Lin2d^ L, Macad::Occt::gp_Circ2d^ C)
	: BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Lin2d*)L->NativeInstance, *(::gp_Circ2d*)C->NativeInstance);
}

Macad::Occt::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(Macad::Occt::gp_Lin2d^ L, Macad::Occt::IntAna2d_Conic^ C)
	: BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Lin2d*)L->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

Macad::Occt::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(Macad::Occt::gp_Circ2d^ C, Macad::Occt::IntAna2d_Conic^ Co)
	: BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Circ2d*)C->NativeInstance, *(::IntAna2d_Conic*)Co->NativeInstance);
}

Macad::Occt::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(Macad::Occt::gp_Elips2d^ E, Macad::Occt::IntAna2d_Conic^ C)
	: BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Elips2d*)E->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

Macad::Occt::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(Macad::Occt::gp_Parab2d^ P, Macad::Occt::IntAna2d_Conic^ C)
	: BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Parab2d*)P->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

Macad::Occt::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(Macad::Occt::gp_Hypr2d^ H, Macad::Occt::IntAna2d_Conic^ C)
	: BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_AnaIntersection(*(::gp_Hypr2d*)H->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

Macad::Occt::IntAna2d_AnaIntersection::IntAna2d_AnaIntersection(Macad::Occt::IntAna2d_AnaIntersection^ parameter1)
	: BaseClass<::IntAna2d_AnaIntersection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna2d_AnaIntersection(*(::IntAna2d_AnaIntersection*)parameter1->NativeInstance);
}

void Macad::Occt::IntAna2d_AnaIntersection::Perform(Macad::Occt::gp_Lin2d^ L1, Macad::Occt::gp_Lin2d^ L2)
{
	((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Lin2d*)L1->NativeInstance, *(::gp_Lin2d*)L2->NativeInstance);
}

void Macad::Occt::IntAna2d_AnaIntersection::Perform(Macad::Occt::gp_Circ2d^ C1, Macad::Occt::gp_Circ2d^ C2)
{
	((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Circ2d*)C1->NativeInstance, *(::gp_Circ2d*)C2->NativeInstance);
}

void Macad::Occt::IntAna2d_AnaIntersection::Perform(Macad::Occt::gp_Lin2d^ L, Macad::Occt::gp_Circ2d^ C)
{
	((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Lin2d*)L->NativeInstance, *(::gp_Circ2d*)C->NativeInstance);
}

void Macad::Occt::IntAna2d_AnaIntersection::Perform(Macad::Occt::gp_Lin2d^ L, Macad::Occt::IntAna2d_Conic^ C)
{
	((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Lin2d*)L->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

void Macad::Occt::IntAna2d_AnaIntersection::Perform(Macad::Occt::gp_Circ2d^ C, Macad::Occt::IntAna2d_Conic^ Co)
{
	((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Circ2d*)C->NativeInstance, *(::IntAna2d_Conic*)Co->NativeInstance);
}

void Macad::Occt::IntAna2d_AnaIntersection::Perform(Macad::Occt::gp_Elips2d^ E, Macad::Occt::IntAna2d_Conic^ C)
{
	((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Elips2d*)E->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

void Macad::Occt::IntAna2d_AnaIntersection::Perform(Macad::Occt::gp_Parab2d^ P, Macad::Occt::IntAna2d_Conic^ C)
{
	((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Parab2d*)P->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

void Macad::Occt::IntAna2d_AnaIntersection::Perform(Macad::Occt::gp_Hypr2d^ H, Macad::Occt::IntAna2d_Conic^ C)
{
	((::IntAna2d_AnaIntersection*)_NativeInstance)->Perform(*(::gp_Hypr2d*)H->NativeInstance, *(::IntAna2d_Conic*)C->NativeInstance);
}

bool Macad::Occt::IntAna2d_AnaIntersection::IsDone()
{
	return ((::IntAna2d_AnaIntersection*)_NativeInstance)->IsDone();
}

bool Macad::Occt::IntAna2d_AnaIntersection::IsEmpty()
{
	return ((::IntAna2d_AnaIntersection*)_NativeInstance)->IsEmpty();
}

bool Macad::Occt::IntAna2d_AnaIntersection::IdenticalElements()
{
	return ((::IntAna2d_AnaIntersection*)_NativeInstance)->IdenticalElements();
}

bool Macad::Occt::IntAna2d_AnaIntersection::ParallelElements()
{
	return ((::IntAna2d_AnaIntersection*)_NativeInstance)->ParallelElements();
}

int Macad::Occt::IntAna2d_AnaIntersection::NbPoints()
{
	return ((::IntAna2d_AnaIntersection*)_NativeInstance)->NbPoints();
}

Macad::Occt::IntAna2d_IntPoint^ Macad::Occt::IntAna2d_AnaIntersection::Point(int N)
{
	::IntAna2d_IntPoint* _result = new ::IntAna2d_IntPoint(0.0, 0.0, 0.0, 0.0);
	*_result =  (::IntAna2d_IntPoint)((::IntAna2d_AnaIntersection*)_NativeInstance)->Point(N);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::IntAna2d_IntPoint(_result);
}




//---------------------------------------------------------------------
//  Class  MyDirectPolynomialRoots
//---------------------------------------------------------------------

Macad::Occt::MyDirectPolynomialRoots::MyDirectPolynomialRoots(double A4, double A3, double A2, double A1, double A0)
	: BaseClass<::MyDirectPolynomialRoots>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}

Macad::Occt::MyDirectPolynomialRoots::MyDirectPolynomialRoots(double A2, double A1, double A0)
	: BaseClass<::MyDirectPolynomialRoots>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}

Macad::Occt::MyDirectPolynomialRoots::MyDirectPolynomialRoots(Macad::Occt::MyDirectPolynomialRoots^ parameter1)
	: BaseClass<::MyDirectPolynomialRoots>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::MyDirectPolynomialRoots(*(::MyDirectPolynomialRoots*)parameter1->NativeInstance);
}

int Macad::Occt::MyDirectPolynomialRoots::NbSolutions()
{
	return ((::MyDirectPolynomialRoots*)_NativeInstance)->NbSolutions();
}

double Macad::Occt::MyDirectPolynomialRoots::Value(int i)
{
	return ((::MyDirectPolynomialRoots*)_NativeInstance)->Value(i);
}

double Macad::Occt::MyDirectPolynomialRoots::IsDone()
{
	return ((::MyDirectPolynomialRoots*)_NativeInstance)->IsDone();
}

bool Macad::Occt::MyDirectPolynomialRoots::InfiniteRoots()
{
	return ((::MyDirectPolynomialRoots*)_NativeInstance)->InfiniteRoots();
}



