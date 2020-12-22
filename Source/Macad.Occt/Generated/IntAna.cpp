// Generated wrapper code for package IntAna

#include "OcctPCH.h"
#include "IntAna.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "IntAna.h"
#include "Standard.h"
#include "gp.h"
#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  IntAna_ListOfCurve
//---------------------------------------------------------------------

Macad::Occt::IntAna_ListOfCurve::IntAna_ListOfCurve()
	: BaseClass<::IntAna_ListOfCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_ListOfCurve();
}

Macad::Occt::IntAna_ListOfCurve::IntAna_ListOfCurve(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::IntAna_ListOfCurve>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::IntAna_ListOfCurve(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::IntAna_ListOfCurve::IntAna_ListOfCurve(Macad::Occt::IntAna_ListOfCurve^ theOther)
	: BaseClass<::IntAna_ListOfCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_ListOfCurve(*(::IntAna_ListOfCurve*)theOther->NativeInstance);
}

int Macad::Occt::IntAna_ListOfCurve::Size()
{
	return ((::IntAna_ListOfCurve*)_NativeInstance)->Size();
}

Macad::Occt::IntAna_ListOfCurve^ Macad::Occt::IntAna_ListOfCurve::Assign(Macad::Occt::IntAna_ListOfCurve^ theOther)
{
	::IntAna_ListOfCurve* _result = new ::IntAna_ListOfCurve();
	*_result = ((::IntAna_ListOfCurve*)_NativeInstance)->Assign(*(::IntAna_ListOfCurve*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::IntAna_ListOfCurve(_result);
}

void Macad::Occt::IntAna_ListOfCurve::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::IntAna_ListOfCurve*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::IntAna_ListOfCurve::Clear()
{
	((::IntAna_ListOfCurve*)_NativeInstance)->Clear(0L);
}

Macad::Occt::IntAna_Curve^ Macad::Occt::IntAna_ListOfCurve::First()
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result =  (::IntAna_Curve)((::IntAna_ListOfCurve*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::IntAna_Curve(_result);
}

Macad::Occt::IntAna_Curve^ Macad::Occt::IntAna_ListOfCurve::Last()
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result =  (::IntAna_Curve)((::IntAna_ListOfCurve*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::IntAna_Curve(_result);
}

Macad::Occt::IntAna_Curve^ Macad::Occt::IntAna_ListOfCurve::Append(Macad::Occt::IntAna_Curve^ theItem)
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result = ((::IntAna_ListOfCurve*)_NativeInstance)->Append(*(::IntAna_Curve*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::IntAna_Curve(_result);
}

void Macad::Occt::IntAna_ListOfCurve::Append(Macad::Occt::IntAna_ListOfCurve^ theOther)
{
	((::IntAna_ListOfCurve*)_NativeInstance)->Append(*(::IntAna_ListOfCurve*)theOther->NativeInstance);
}

Macad::Occt::IntAna_Curve^ Macad::Occt::IntAna_ListOfCurve::Prepend(Macad::Occt::IntAna_Curve^ theItem)
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result = ((::IntAna_ListOfCurve*)_NativeInstance)->Prepend(*(::IntAna_Curve*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::IntAna_Curve(_result);
}

void Macad::Occt::IntAna_ListOfCurve::Prepend(Macad::Occt::IntAna_ListOfCurve^ theOther)
{
	((::IntAna_ListOfCurve*)_NativeInstance)->Prepend(*(::IntAna_ListOfCurve*)theOther->NativeInstance);
}

void Macad::Occt::IntAna_ListOfCurve::RemoveFirst()
{
	((::IntAna_ListOfCurve*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::IntAna_ListOfCurve::Reverse()
{
	((::IntAna_ListOfCurve*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  IntAna_Curve
//---------------------------------------------------------------------

Macad::Occt::IntAna_Curve::IntAna_Curve()
	: BaseClass<::IntAna_Curve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Curve();
}

Macad::Occt::IntAna_Curve::IntAna_Curve(Macad::Occt::IntAna_Curve^ parameter1)
	: BaseClass<::IntAna_Curve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Curve(*(::IntAna_Curve*)parameter1->NativeInstance);
}

void Macad::Occt::IntAna_Curve::SetCylinderQuadValues(Macad::Occt::gp_Cylinder^ Cylinder, double Qxx, double Qyy, double Qzz, double Qxy, double Qxz, double Qyz, double Qx, double Qy, double Qz, double Q1, double Tol, double DomInf, double DomSup, bool TwoZForATheta, bool ZIsPositive)
{
	((::IntAna_Curve*)_NativeInstance)->SetCylinderQuadValues(*(::gp_Cylinder*)Cylinder->NativeInstance, Qxx, Qyy, Qzz, Qxy, Qxz, Qyz, Qx, Qy, Qz, Q1, Tol, DomInf, DomSup, TwoZForATheta, ZIsPositive);
}

void Macad::Occt::IntAna_Curve::SetConeQuadValues(Macad::Occt::gp_Cone^ Cone, double Qxx, double Qyy, double Qzz, double Qxy, double Qxz, double Qyz, double Qx, double Qy, double Qz, double Q1, double Tol, double DomInf, double DomSup, bool TwoZForATheta, bool ZIsPositive)
{
	((::IntAna_Curve*)_NativeInstance)->SetConeQuadValues(*(::gp_Cone*)Cone->NativeInstance, Qxx, Qyy, Qzz, Qxy, Qxz, Qyz, Qx, Qy, Qz, Q1, Tol, DomInf, DomSup, TwoZForATheta, ZIsPositive);
}

bool Macad::Occt::IntAna_Curve::IsOpen()
{
	return ((::IntAna_Curve*)_NativeInstance)->IsOpen();
}

void Macad::Occt::IntAna_Curve::Domain(double% theFirst, double% theLast)
{
	pin_ptr<double> pp_theFirst = &theFirst;
	pin_ptr<double> pp_theLast = &theLast;
	((::IntAna_Curve*)_NativeInstance)->Domain(*(Standard_Real*)pp_theFirst, *(Standard_Real*)pp_theLast);
}

bool Macad::Occt::IntAna_Curve::IsConstant()
{
	return ((::IntAna_Curve*)_NativeInstance)->IsConstant();
}

bool Macad::Occt::IntAna_Curve::IsFirstOpen()
{
	return ((::IntAna_Curve*)_NativeInstance)->IsFirstOpen();
}

bool Macad::Occt::IntAna_Curve::IsLastOpen()
{
	return ((::IntAna_Curve*)_NativeInstance)->IsLastOpen();
}

Macad::Occt::Pnt Macad::Occt::IntAna_Curve::Value(double Theta)
{
	return Macad::Occt::Pnt(((::IntAna_Curve*)_NativeInstance)->Value(Theta));
}

bool Macad::Occt::IntAna_Curve::D1u(double Theta, Macad::Occt::Pnt% P, Macad::Occt::Vec% V)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Vec> pp_V = &V;
	return ((::IntAna_Curve*)_NativeInstance)->D1u(Theta, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void Macad::Occt::IntAna_Curve::FindParameter(Macad::Occt::Pnt P, Macad::Occt::TColStd_ListOfReal^ theParams)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::IntAna_Curve*)_NativeInstance)->FindParameter(*(gp_Pnt*)pp_P, *(::TColStd_ListOfReal*)theParams->NativeInstance);
}

void Macad::Occt::IntAna_Curve::SetIsFirstOpen(bool Flag)
{
	((::IntAna_Curve*)_NativeInstance)->SetIsFirstOpen(Flag);
}

void Macad::Occt::IntAna_Curve::SetIsLastOpen(bool Flag)
{
	((::IntAna_Curve*)_NativeInstance)->SetIsLastOpen(Flag);
}

void Macad::Occt::IntAna_Curve::SetDomain(double theFirst, double theLast)
{
	((::IntAna_Curve*)_NativeInstance)->SetDomain(theFirst, theLast);
}




//---------------------------------------------------------------------
//  Class  IntAna_Int3Pln
//---------------------------------------------------------------------

Macad::Occt::IntAna_Int3Pln::IntAna_Int3Pln()
	: BaseClass<::IntAna_Int3Pln>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Int3Pln();
}

Macad::Occt::IntAna_Int3Pln::IntAna_Int3Pln(Macad::Occt::Pln P1, Macad::Occt::Pln P2, Macad::Occt::Pln P3)
	: BaseClass<::IntAna_Int3Pln>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pln> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pln> pp_P3 = &P3;
	_NativeInstance = new ::IntAna_Int3Pln(*(gp_Pln*)pp_P1, *(gp_Pln*)pp_P2, *(gp_Pln*)pp_P3);
}

Macad::Occt::IntAna_Int3Pln::IntAna_Int3Pln(Macad::Occt::IntAna_Int3Pln^ parameter1)
	: BaseClass<::IntAna_Int3Pln>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Int3Pln(*(::IntAna_Int3Pln*)parameter1->NativeInstance);
}

void Macad::Occt::IntAna_Int3Pln::Perform(Macad::Occt::Pln P1, Macad::Occt::Pln P2, Macad::Occt::Pln P3)
{
	pin_ptr<Macad::Occt::Pln> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pln> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Pln> pp_P3 = &P3;
	((::IntAna_Int3Pln*)_NativeInstance)->Perform(*(gp_Pln*)pp_P1, *(gp_Pln*)pp_P2, *(gp_Pln*)pp_P3);
}

bool Macad::Occt::IntAna_Int3Pln::IsDone()
{
	return ((::IntAna_Int3Pln*)_NativeInstance)->IsDone();
}

bool Macad::Occt::IntAna_Int3Pln::IsEmpty()
{
	return ((::IntAna_Int3Pln*)_NativeInstance)->IsEmpty();
}

Macad::Occt::Pnt Macad::Occt::IntAna_Int3Pln::Value()
{
	return Macad::Occt::Pnt(((::IntAna_Int3Pln*)_NativeInstance)->Value());
}




//---------------------------------------------------------------------
//  Class  IntAna_Quadric
//---------------------------------------------------------------------

Macad::Occt::IntAna_Quadric::IntAna_Quadric()
	: BaseClass<::IntAna_Quadric>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Quadric();
}

Macad::Occt::IntAna_Quadric::IntAna_Quadric(Macad::Occt::Pln P)
	: BaseClass<::IntAna_Quadric>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_Quadric(*(gp_Pln*)pp_P);
}

Macad::Occt::IntAna_Quadric::IntAna_Quadric(Macad::Occt::gp_Sphere^ Sph)
	: BaseClass<::IntAna_Quadric>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Quadric(*(::gp_Sphere*)Sph->NativeInstance);
}

Macad::Occt::IntAna_Quadric::IntAna_Quadric(Macad::Occt::gp_Cylinder^ Cyl)
	: BaseClass<::IntAna_Quadric>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Quadric(*(::gp_Cylinder*)Cyl->NativeInstance);
}

Macad::Occt::IntAna_Quadric::IntAna_Quadric(Macad::Occt::gp_Cone^ Cone)
	: BaseClass<::IntAna_Quadric>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Quadric(*(::gp_Cone*)Cone->NativeInstance);
}

Macad::Occt::IntAna_Quadric::IntAna_Quadric(Macad::Occt::IntAna_Quadric^ parameter1)
	: BaseClass<::IntAna_Quadric>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_Quadric(*(::IntAna_Quadric*)parameter1->NativeInstance);
}

void Macad::Occt::IntAna_Quadric::SetQuadric(Macad::Occt::Pln P)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	((::IntAna_Quadric*)_NativeInstance)->SetQuadric(*(gp_Pln*)pp_P);
}

void Macad::Occt::IntAna_Quadric::SetQuadric(Macad::Occt::gp_Sphere^ Sph)
{
	((::IntAna_Quadric*)_NativeInstance)->SetQuadric(*(::gp_Sphere*)Sph->NativeInstance);
}

void Macad::Occt::IntAna_Quadric::SetQuadric(Macad::Occt::gp_Cone^ Con)
{
	((::IntAna_Quadric*)_NativeInstance)->SetQuadric(*(::gp_Cone*)Con->NativeInstance);
}

void Macad::Occt::IntAna_Quadric::SetQuadric(Macad::Occt::gp_Cylinder^ Cyl)
{
	((::IntAna_Quadric*)_NativeInstance)->SetQuadric(*(::gp_Cylinder*)Cyl->NativeInstance);
}

void Macad::Occt::IntAna_Quadric::Coefficients(double% xCXX, double% xCYY, double% xCZZ, double% xCXY, double% xCXZ, double% xCYZ, double% xCX, double% xCY, double% xCZ, double% xCCte)
{
	pin_ptr<double> pp_xCXX = &xCXX;
	pin_ptr<double> pp_xCYY = &xCYY;
	pin_ptr<double> pp_xCZZ = &xCZZ;
	pin_ptr<double> pp_xCXY = &xCXY;
	pin_ptr<double> pp_xCXZ = &xCXZ;
	pin_ptr<double> pp_xCYZ = &xCYZ;
	pin_ptr<double> pp_xCX = &xCX;
	pin_ptr<double> pp_xCY = &xCY;
	pin_ptr<double> pp_xCZ = &xCZ;
	pin_ptr<double> pp_xCCte = &xCCte;
	((::IntAna_Quadric*)_NativeInstance)->Coefficients(*(Standard_Real*)pp_xCXX, *(Standard_Real*)pp_xCYY, *(Standard_Real*)pp_xCZZ, *(Standard_Real*)pp_xCXY, *(Standard_Real*)pp_xCXZ, *(Standard_Real*)pp_xCYZ, *(Standard_Real*)pp_xCX, *(Standard_Real*)pp_xCY, *(Standard_Real*)pp_xCZ, *(Standard_Real*)pp_xCCte);
}

void Macad::Occt::IntAna_Quadric::NewCoefficients(double% xCXX, double% xCYY, double% xCZZ, double% xCXY, double% xCXZ, double% xCYZ, double% xCX, double% xCY, double% xCZ, double% xCCte, Macad::Occt::Ax3 Axis)
{
	pin_ptr<double> pp_xCXX = &xCXX;
	pin_ptr<double> pp_xCYY = &xCYY;
	pin_ptr<double> pp_xCZZ = &xCZZ;
	pin_ptr<double> pp_xCXY = &xCXY;
	pin_ptr<double> pp_xCXZ = &xCXZ;
	pin_ptr<double> pp_xCYZ = &xCYZ;
	pin_ptr<double> pp_xCX = &xCX;
	pin_ptr<double> pp_xCY = &xCY;
	pin_ptr<double> pp_xCZ = &xCZ;
	pin_ptr<double> pp_xCCte = &xCCte;
	pin_ptr<Macad::Occt::Ax3> pp_Axis = &Axis;
	((::IntAna_Quadric*)_NativeInstance)->NewCoefficients(*(Standard_Real*)pp_xCXX, *(Standard_Real*)pp_xCYY, *(Standard_Real*)pp_xCZZ, *(Standard_Real*)pp_xCXY, *(Standard_Real*)pp_xCXZ, *(Standard_Real*)pp_xCYZ, *(Standard_Real*)pp_xCX, *(Standard_Real*)pp_xCY, *(Standard_Real*)pp_xCZ, *(Standard_Real*)pp_xCCte, *(gp_Ax3*)pp_Axis);
}




//---------------------------------------------------------------------
//  Class  IntAna_IntConicQuad
//---------------------------------------------------------------------

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad()
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntConicQuad();
}

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad(Macad::Occt::gp_Lin^ L, Macad::Occt::IntAna_Quadric^ Q)
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Lin*)L->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad(Macad::Occt::gp_Circ^ C, Macad::Occt::IntAna_Quadric^ Q)
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Circ*)C->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad(Macad::Occt::gp_Elips^ E, Macad::Occt::IntAna_Quadric^ Q)
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Elips*)E->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad(Macad::Occt::gp_Parab^ P, Macad::Occt::IntAna_Quadric^ Q)
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Parab*)P->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad(Macad::Occt::gp_Hypr^ H, Macad::Occt::IntAna_Quadric^ Q)
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Hypr*)H->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang, double Tol, double Len)
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Lin*)L->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol, Len);
}

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang, double Tol)
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Lin*)L->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol, 0);
}

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang)
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Lin*)L->NativeInstance, *(gp_Pln*)pp_P, Tolang, 0, 0);
}

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad(Macad::Occt::gp_Circ^ C, Macad::Occt::Pln P, double Tolang, double Tol)
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Circ*)C->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol);
}

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad(Macad::Occt::gp_Elips^ E, Macad::Occt::Pln P, double Tolang, double Tol)
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Elips*)E->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol);
}

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad(Macad::Occt::gp_Parab^ Pb, Macad::Occt::Pln P, double Tolang)
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Parab*)Pb->NativeInstance, *(gp_Pln*)pp_P, Tolang);
}

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad(Macad::Occt::gp_Hypr^ H, Macad::Occt::Pln P, double Tolang)
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_IntConicQuad(*(::gp_Hypr*)H->NativeInstance, *(gp_Pln*)pp_P, Tolang);
}

Macad::Occt::IntAna_IntConicQuad::IntAna_IntConicQuad(Macad::Occt::IntAna_IntConicQuad^ parameter1)
	: BaseClass<::IntAna_IntConicQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntConicQuad(*(::IntAna_IntConicQuad*)parameter1->NativeInstance);
}

void Macad::Occt::IntAna_IntConicQuad::Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::IntAna_Quadric^ Q)
{
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

void Macad::Occt::IntAna_IntConicQuad::Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::IntAna_Quadric^ Q)
{
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Circ*)C->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

void Macad::Occt::IntAna_IntConicQuad::Perform(Macad::Occt::gp_Elips^ E, Macad::Occt::IntAna_Quadric^ Q)
{
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Elips*)E->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

void Macad::Occt::IntAna_IntConicQuad::Perform(Macad::Occt::gp_Parab^ P, Macad::Occt::IntAna_Quadric^ Q)
{
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Parab*)P->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

void Macad::Occt::IntAna_IntConicQuad::Perform(Macad::Occt::gp_Hypr^ H, Macad::Occt::IntAna_Quadric^ Q)
{
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Hypr*)H->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance);
}

void Macad::Occt::IntAna_IntConicQuad::Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang, double Tol, double Len)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol, Len);
}

void Macad::Occt::IntAna_IntConicQuad::Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang, double Tol)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol, 0);
}

void Macad::Occt::IntAna_IntConicQuad::Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::Pln P, double Tolang)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, *(gp_Pln*)pp_P, Tolang, 0, 0);
}

void Macad::Occt::IntAna_IntConicQuad::Perform(Macad::Occt::gp_Circ^ C, Macad::Occt::Pln P, double Tolang, double Tol)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Circ*)C->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol);
}

void Macad::Occt::IntAna_IntConicQuad::Perform(Macad::Occt::gp_Elips^ E, Macad::Occt::Pln P, double Tolang, double Tol)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Elips*)E->NativeInstance, *(gp_Pln*)pp_P, Tolang, Tol);
}

void Macad::Occt::IntAna_IntConicQuad::Perform(Macad::Occt::gp_Parab^ Pb, Macad::Occt::Pln P, double Tolang)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Parab*)Pb->NativeInstance, *(gp_Pln*)pp_P, Tolang);
}

void Macad::Occt::IntAna_IntConicQuad::Perform(Macad::Occt::gp_Hypr^ H, Macad::Occt::Pln P, double Tolang)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	((::IntAna_IntConicQuad*)_NativeInstance)->Perform(*(::gp_Hypr*)H->NativeInstance, *(gp_Pln*)pp_P, Tolang);
}

bool Macad::Occt::IntAna_IntConicQuad::IsDone()
{
	return ((::IntAna_IntConicQuad*)_NativeInstance)->IsDone();
}

bool Macad::Occt::IntAna_IntConicQuad::IsInQuadric()
{
	return ((::IntAna_IntConicQuad*)_NativeInstance)->IsInQuadric();
}

bool Macad::Occt::IntAna_IntConicQuad::IsParallel()
{
	return ((::IntAna_IntConicQuad*)_NativeInstance)->IsParallel();
}

int Macad::Occt::IntAna_IntConicQuad::NbPoints()
{
	return ((::IntAna_IntConicQuad*)_NativeInstance)->NbPoints();
}

Macad::Occt::Pnt Macad::Occt::IntAna_IntConicQuad::Point(int N)
{
	return Macad::Occt::Pnt(((::IntAna_IntConicQuad*)_NativeInstance)->Point(N));
}

double Macad::Occt::IntAna_IntConicQuad::ParamOnConic(int N)
{
	return ((::IntAna_IntConicQuad*)_NativeInstance)->ParamOnConic(N);
}




//---------------------------------------------------------------------
//  Class  IntAna_IntLinTorus
//---------------------------------------------------------------------

Macad::Occt::IntAna_IntLinTorus::IntAna_IntLinTorus()
	: BaseClass<::IntAna_IntLinTorus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntLinTorus();
}

Macad::Occt::IntAna_IntLinTorus::IntAna_IntLinTorus(Macad::Occt::gp_Lin^ L, Macad::Occt::gp_Torus^ T)
	: BaseClass<::IntAna_IntLinTorus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntLinTorus(*(::gp_Lin*)L->NativeInstance, *(::gp_Torus*)T->NativeInstance);
}

Macad::Occt::IntAna_IntLinTorus::IntAna_IntLinTorus(Macad::Occt::IntAna_IntLinTorus^ parameter1)
	: BaseClass<::IntAna_IntLinTorus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntLinTorus(*(::IntAna_IntLinTorus*)parameter1->NativeInstance);
}

void Macad::Occt::IntAna_IntLinTorus::Perform(Macad::Occt::gp_Lin^ L, Macad::Occt::gp_Torus^ T)
{
	((::IntAna_IntLinTorus*)_NativeInstance)->Perform(*(::gp_Lin*)L->NativeInstance, *(::gp_Torus*)T->NativeInstance);
}

bool Macad::Occt::IntAna_IntLinTorus::IsDone()
{
	return ((::IntAna_IntLinTorus*)_NativeInstance)->IsDone();
}

int Macad::Occt::IntAna_IntLinTorus::NbPoints()
{
	return ((::IntAna_IntLinTorus*)_NativeInstance)->NbPoints();
}

Macad::Occt::Pnt Macad::Occt::IntAna_IntLinTorus::Value(int Index)
{
	return Macad::Occt::Pnt(((::IntAna_IntLinTorus*)_NativeInstance)->Value(Index));
}

double Macad::Occt::IntAna_IntLinTorus::ParamOnLine(int Index)
{
	return ((::IntAna_IntLinTorus*)_NativeInstance)->ParamOnLine(Index);
}

void Macad::Occt::IntAna_IntLinTorus::ParamOnTorus(int Index, double% FI, double% THETA)
{
	pin_ptr<double> pp_FI = &FI;
	pin_ptr<double> pp_THETA = &THETA;
	((::IntAna_IntLinTorus*)_NativeInstance)->ParamOnTorus(Index, *(Standard_Real*)pp_FI, *(Standard_Real*)pp_THETA);
}




//---------------------------------------------------------------------
//  Class  IntAna_IntQuadQuad
//---------------------------------------------------------------------

Macad::Occt::IntAna_IntQuadQuad::IntAna_IntQuadQuad()
	: BaseClass<::IntAna_IntQuadQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntQuadQuad();
}

Macad::Occt::IntAna_IntQuadQuad::IntAna_IntQuadQuad(Macad::Occt::gp_Cylinder^ C, Macad::Occt::IntAna_Quadric^ Q, double Tol)
	: BaseClass<::IntAna_IntQuadQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntQuadQuad(*(::gp_Cylinder*)C->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance, Tol);
}

Macad::Occt::IntAna_IntQuadQuad::IntAna_IntQuadQuad(Macad::Occt::gp_Cone^ C, Macad::Occt::IntAna_Quadric^ Q, double Tol)
	: BaseClass<::IntAna_IntQuadQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntQuadQuad(*(::gp_Cone*)C->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance, Tol);
}

Macad::Occt::IntAna_IntQuadQuad::IntAna_IntQuadQuad(Macad::Occt::IntAna_IntQuadQuad^ parameter1)
	: BaseClass<::IntAna_IntQuadQuad>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_IntQuadQuad(*(::IntAna_IntQuadQuad*)parameter1->NativeInstance);
}

void Macad::Occt::IntAna_IntQuadQuad::Perform(Macad::Occt::gp_Cylinder^ C, Macad::Occt::IntAna_Quadric^ Q, double Tol)
{
	((::IntAna_IntQuadQuad*)_NativeInstance)->Perform(*(::gp_Cylinder*)C->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance, Tol);
}

void Macad::Occt::IntAna_IntQuadQuad::Perform(Macad::Occt::gp_Cone^ C, Macad::Occt::IntAna_Quadric^ Q, double Tol)
{
	((::IntAna_IntQuadQuad*)_NativeInstance)->Perform(*(::gp_Cone*)C->NativeInstance, *(::IntAna_Quadric*)Q->NativeInstance, Tol);
}

bool Macad::Occt::IntAna_IntQuadQuad::IsDone()
{
	return ((::IntAna_IntQuadQuad*)_NativeInstance)->IsDone();
}

bool Macad::Occt::IntAna_IntQuadQuad::IdenticalElements()
{
	return ((::IntAna_IntQuadQuad*)_NativeInstance)->IdenticalElements();
}

int Macad::Occt::IntAna_IntQuadQuad::NbCurve()
{
	return ((::IntAna_IntQuadQuad*)_NativeInstance)->NbCurve();
}

Macad::Occt::IntAna_Curve^ Macad::Occt::IntAna_IntQuadQuad::Curve(int N)
{
	::IntAna_Curve* _result = new ::IntAna_Curve();
	*_result =  (::IntAna_Curve)((::IntAna_IntQuadQuad*)_NativeInstance)->Curve(N);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::IntAna_Curve(_result);
}

int Macad::Occt::IntAna_IntQuadQuad::NbPnt()
{
	return ((::IntAna_IntQuadQuad*)_NativeInstance)->NbPnt();
}

Macad::Occt::Pnt Macad::Occt::IntAna_IntQuadQuad::Point(int N)
{
	return Macad::Occt::Pnt(((::IntAna_IntQuadQuad*)_NativeInstance)->Point(N));
}

void Macad::Occt::IntAna_IntQuadQuad::Parameters(int N, double% U1, double% U2)
{
	pin_ptr<double> pp_U1 = &U1;
	pin_ptr<double> pp_U2 = &U2;
	((::IntAna_IntQuadQuad*)_NativeInstance)->Parameters(N, *(Standard_Real*)pp_U1, *(Standard_Real*)pp_U2);
}

bool Macad::Occt::IntAna_IntQuadQuad::HasNextCurve(int I)
{
	return ((::IntAna_IntQuadQuad*)_NativeInstance)->HasNextCurve(I);
}

int Macad::Occt::IntAna_IntQuadQuad::NextCurve(int I, bool% theOpposite)
{
	pin_ptr<bool> pp_theOpposite = &theOpposite;
	return ((::IntAna_IntQuadQuad*)_NativeInstance)->NextCurve(I, *(Standard_Boolean*)pp_theOpposite);
}

bool Macad::Occt::IntAna_IntQuadQuad::HasPreviousCurve(int I)
{
	return ((::IntAna_IntQuadQuad*)_NativeInstance)->HasPreviousCurve(I);
}

int Macad::Occt::IntAna_IntQuadQuad::PreviousCurve(int I, bool% theOpposite)
{
	pin_ptr<bool> pp_theOpposite = &theOpposite;
	return ((::IntAna_IntQuadQuad*)_NativeInstance)->PreviousCurve(I, *(Standard_Boolean*)pp_theOpposite);
}




//---------------------------------------------------------------------
//  Class  IntAna_QuadQuadGeo
//---------------------------------------------------------------------

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo()
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo();
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::Pln P1, Macad::Occt::Pln P2, double TolAng, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pln> pp_P2 = &P2;
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(gp_Pln*)pp_P1, *(gp_Pln*)pp_P2, TolAng, Tol);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::Pln P, Macad::Occt::gp_Cylinder^ C, double Tolang, double Tol, double H)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(gp_Pln*)pp_P, *(::gp_Cylinder*)C->NativeInstance, Tolang, Tol, H);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::Pln P, Macad::Occt::gp_Cylinder^ C, double Tolang, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(gp_Pln*)pp_P, *(::gp_Cylinder*)C->NativeInstance, Tolang, Tol, 0);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::Pln P, Macad::Occt::gp_Sphere^ S)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(gp_Pln*)pp_P, *(::gp_Sphere*)S->NativeInstance);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::Pln P, Macad::Occt::gp_Cone^ C, double Tolang, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(gp_Pln*)pp_P, *(::gp_Cone*)C->NativeInstance, Tolang, Tol);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::gp_Cylinder^ Cyl1, Macad::Occt::gp_Cylinder^ Cyl2, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Cylinder*)Cyl1->NativeInstance, *(::gp_Cylinder*)Cyl2->NativeInstance, Tol);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Sphere^ Sph, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Sphere*)Sph->NativeInstance, Tol);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Cone^ Con, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Cone*)Con->NativeInstance, Tol);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::gp_Sphere^ Sph1, Macad::Occt::gp_Sphere^ Sph2, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Sphere*)Sph1->NativeInstance, *(::gp_Sphere*)Sph2->NativeInstance, Tol);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::gp_Sphere^ Sph, Macad::Occt::gp_Cone^ Con, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Sphere*)Sph->NativeInstance, *(::gp_Cone*)Con->NativeInstance, Tol);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::gp_Cone^ Con1, Macad::Occt::gp_Cone^ Con2, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Cone*)Con1->NativeInstance, *(::gp_Cone*)Con2->NativeInstance, Tol);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::Pln Pln, Macad::Occt::gp_Torus^ Tor, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pln> pp_Pln = &Pln;
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(gp_Pln*)pp_Pln, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Torus^ Tor, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::gp_Cone^ Con, Macad::Occt::gp_Torus^ Tor, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Cone*)Con->NativeInstance, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::gp_Sphere^ Sph, Macad::Occt::gp_Torus^ Tor, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Sphere*)Sph->NativeInstance, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::gp_Torus^ Tor1, Macad::Occt::gp_Torus^ Tor2, double Tol)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::gp_Torus*)Tor1->NativeInstance, *(::gp_Torus*)Tor2->NativeInstance, Tol);
}

Macad::Occt::IntAna_QuadQuadGeo::IntAna_QuadQuadGeo(Macad::Occt::IntAna_QuadQuadGeo^ parameter1)
	: BaseClass<::IntAna_QuadQuadGeo>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::IntAna_QuadQuadGeo(*(::IntAna_QuadQuadGeo*)parameter1->NativeInstance);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::Pln P1, Macad::Occt::Pln P2, double TolAng, double Tol)
{
	pin_ptr<Macad::Occt::Pln> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pln> pp_P2 = &P2;
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(gp_Pln*)pp_P1, *(gp_Pln*)pp_P2, TolAng, Tol);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::Pln P, Macad::Occt::gp_Cylinder^ C, double Tolang, double Tol, double H)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(gp_Pln*)pp_P, *(::gp_Cylinder*)C->NativeInstance, Tolang, Tol, H);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::Pln P, Macad::Occt::gp_Cylinder^ C, double Tolang, double Tol)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(gp_Pln*)pp_P, *(::gp_Cylinder*)C->NativeInstance, Tolang, Tol, 0);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::Pln P, Macad::Occt::gp_Sphere^ S)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(gp_Pln*)pp_P, *(::gp_Sphere*)S->NativeInstance);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::Pln P, Macad::Occt::gp_Cone^ C, double Tolang, double Tol)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(gp_Pln*)pp_P, *(::gp_Cone*)C->NativeInstance, Tolang, Tol);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::gp_Cylinder^ Cyl1, Macad::Occt::gp_Cylinder^ Cyl2, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Cylinder*)Cyl1->NativeInstance, *(::gp_Cylinder*)Cyl2->NativeInstance, Tol);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Sphere^ Sph, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Sphere*)Sph->NativeInstance, Tol);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Cone^ Con, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Cone*)Con->NativeInstance, Tol);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::gp_Sphere^ Sph1, Macad::Occt::gp_Sphere^ Sph2, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Sphere*)Sph1->NativeInstance, *(::gp_Sphere*)Sph2->NativeInstance, Tol);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::gp_Sphere^ Sph, Macad::Occt::gp_Cone^ Con, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Sphere*)Sph->NativeInstance, *(::gp_Cone*)Con->NativeInstance, Tol);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::gp_Cone^ Con1, Macad::Occt::gp_Cone^ Con2, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Cone*)Con1->NativeInstance, *(::gp_Cone*)Con2->NativeInstance, Tol);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::Pln Pln, Macad::Occt::gp_Torus^ Tor, double Tol)
{
	pin_ptr<Macad::Occt::Pln> pp_Pln = &Pln;
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(gp_Pln*)pp_Pln, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::gp_Cylinder^ Cyl, Macad::Occt::gp_Torus^ Tor, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Cylinder*)Cyl->NativeInstance, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::gp_Cone^ Con, Macad::Occt::gp_Torus^ Tor, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Cone*)Con->NativeInstance, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::gp_Sphere^ Sph, Macad::Occt::gp_Torus^ Tor, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Sphere*)Sph->NativeInstance, *(::gp_Torus*)Tor->NativeInstance, Tol);
}

void Macad::Occt::IntAna_QuadQuadGeo::Perform(Macad::Occt::gp_Torus^ Tor1, Macad::Occt::gp_Torus^ Tor2, double Tol)
{
	((::IntAna_QuadQuadGeo*)_NativeInstance)->Perform(*(::gp_Torus*)Tor1->NativeInstance, *(::gp_Torus*)Tor2->NativeInstance, Tol);
}

bool Macad::Occt::IntAna_QuadQuadGeo::IsDone()
{
	return ((::IntAna_QuadQuadGeo*)_NativeInstance)->IsDone();
}

Macad::Occt::IntAna_ResultType Macad::Occt::IntAna_QuadQuadGeo::TypeInter()
{
	return (Macad::Occt::IntAna_ResultType)((::IntAna_QuadQuadGeo*)_NativeInstance)->TypeInter();
}

int Macad::Occt::IntAna_QuadQuadGeo::NbSolutions()
{
	return ((::IntAna_QuadQuadGeo*)_NativeInstance)->NbSolutions();
}

Macad::Occt::Pnt Macad::Occt::IntAna_QuadQuadGeo::Point(int Num)
{
	return Macad::Occt::Pnt(((::IntAna_QuadQuadGeo*)_NativeInstance)->Point(Num));
}

Macad::Occt::gp_Lin^ Macad::Occt::IntAna_QuadQuadGeo::Line(int Num)
{
	::gp_Lin* _result = new ::gp_Lin();
	*_result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->Line(Num);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::IntAna_QuadQuadGeo::Circle(int Num)
{
	::gp_Circ* _result = new ::gp_Circ();
	*_result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->Circle(Num);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::IntAna_QuadQuadGeo::Ellipse(int Num)
{
	::gp_Elips* _result = new ::gp_Elips();
	*_result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->Ellipse(Num);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::IntAna_QuadQuadGeo::Parabola(int Num)
{
	::gp_Parab* _result = new ::gp_Parab();
	*_result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->Parabola(Num);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::IntAna_QuadQuadGeo::Hyperbola(int Num)
{
	::gp_Hypr* _result = new ::gp_Hypr();
	*_result = ((::IntAna_QuadQuadGeo*)_NativeInstance)->Hyperbola(Num);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

bool Macad::Occt::IntAna_QuadQuadGeo::HasCommonGen()
{
	return ((::IntAna_QuadQuadGeo*)_NativeInstance)->HasCommonGen();
}

Macad::Occt::Pnt Macad::Occt::IntAna_QuadQuadGeo::PChar()
{
	return Macad::Occt::Pnt(((::IntAna_QuadQuadGeo*)_NativeInstance)->PChar());
}



