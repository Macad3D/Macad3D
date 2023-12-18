// Generated wrapper code for package BSplSLib

#include "OcctPCH.h"
#include "BSplSLib.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TColgp.h"
#include "TColStd.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  BSplSLib_EvaluatorFunction
//---------------------------------------------------------------------

Macad::Occt::BSplSLib_EvaluatorFunction::BSplSLib_EvaluatorFunction()
    : Macad::Occt::BaseClass<::BSplSLib_EvaluatorFunction>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::BSplSLib_EvaluatorFunction::Evaluate(int theDerivativeRequest, double theUParameter, double theVParameter, double% theResult, int% theErrorCode)
{
    pin_ptr<double> pp_theResult = &theResult;
    pin_ptr<int> pp_theErrorCode = &theErrorCode;
    ((::BSplSLib_EvaluatorFunction*)_NativeInstance)->Evaluate(theDerivativeRequest, theUParameter, theVParameter, *(double*)pp_theResult, *(int*)pp_theErrorCode);
}



//---------------------------------------------------------------------
//  Class  BSplSLib
//---------------------------------------------------------------------

Macad::Occt::BSplSLib::BSplSLib()
    : Macad::Occt::BaseClass<::BSplSLib>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BSplSLib();
}

void Macad::Occt::BSplSLib::RationalDerivative(int UDeg, int VDeg, int N, int M, double% Ders, double% RDers, bool All)
{
    pin_ptr<double> pp_Ders = &Ders;
    pin_ptr<double> pp_RDers = &RDers;
    ::BSplSLib::RationalDerivative(UDeg, VDeg, N, M, *(double*)pp_Ders, *(double*)pp_RDers, All);
}

void Macad::Occt::BSplSLib::RationalDerivative(int UDeg, int VDeg, int N, int M, double% Ders, double% RDers)
{
    pin_ptr<double> pp_Ders = &Ders;
    pin_ptr<double> pp_RDers = &RDers;
    ::BSplSLib::RationalDerivative(UDeg, VDeg, N, M, *(double*)pp_Ders, *(double*)pp_RDers, true);
}

void Macad::Occt::BSplSLib::D0(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ::BSplSLib::D0(U, V, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, *(gp_Pnt*)pp_P);
}

void Macad::Occt::BSplSLib::D1(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int Degree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    ::BSplSLib::D1(U, V, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, Degree, VDegree, URat, VRat, UPer, VPer, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv);
}

void Macad::Occt::BSplSLib::D2(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    ::BSplSLib::D2(U, V, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv);
}

void Macad::Occt::BSplSLib::D3(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% P, Macad::Occt::Vec% Vu, Macad::Occt::Vec% Vv, Macad::Occt::Vec% Vuu, Macad::Occt::Vec% Vvv, Macad::Occt::Vec% Vuv, Macad::Occt::Vec% Vuuu, Macad::Occt::Vec% Vvvv, Macad::Occt::Vec% Vuuv, Macad::Occt::Vec% Vuvv)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_Vu = &Vu;
    pin_ptr<Macad::Occt::Vec> pp_Vv = &Vv;
    pin_ptr<Macad::Occt::Vec> pp_Vuu = &Vuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvv = &Vvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuv = &Vuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuu = &Vuuu;
    pin_ptr<Macad::Occt::Vec> pp_Vvvv = &Vvvv;
    pin_ptr<Macad::Occt::Vec> pp_Vuuv = &Vuuv;
    pin_ptr<Macad::Occt::Vec> pp_Vuvv = &Vuvv;
    ::BSplSLib::D3(U, V, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_Vu, *(gp_Vec*)pp_Vv, *(gp_Vec*)pp_Vuu, *(gp_Vec*)pp_Vvv, *(gp_Vec*)pp_Vuv, *(gp_Vec*)pp_Vuuu, *(gp_Vec*)pp_Vvvv, *(gp_Vec*)pp_Vuuv, *(gp_Vec*)pp_Vuvv);
}

void Macad::Occt::BSplSLib::DN(double U, double V, int Nu, int Nv, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Vec% Vn)
{
    pin_ptr<Macad::Occt::Vec> pp_Vn = &Vn;
    ::BSplSLib::DN(U, V, Nu, Nv, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, *(gp_Vec*)pp_Vn);
}

void Macad::Occt::BSplSLib::Iso(double Param, bool IsU, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, int Degree, bool Periodic, Macad::Occt::TColgp_Array1OfPnt^ CPoles, Macad::Occt::TColStd_Array1OfReal^ CWeights)
{
    ::BSplSLib::Iso(Param, IsU, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, (::TColStd_Array1OfInteger*)Mults->NativeInstance, Degree, Periodic, *(::TColgp_Array1OfPnt*)CPoles->NativeInstance, (::TColStd_Array1OfReal*)CWeights->NativeInstance);
}

void Macad::Occt::BSplSLib::Reverse(Macad::Occt::TColgp_Array2OfPnt^ Poles, int Last, bool UDirection)
{
    ::BSplSLib::Reverse(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, Last, UDirection);
}

void Macad::Occt::BSplSLib::HomogeneousD0(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, double% W, Macad::Occt::Pnt% P)
{
    pin_ptr<double> pp_W = &W;
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ::BSplSLib::HomogeneousD0(U, V, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, *(double*)pp_W, *(gp_Pnt*)pp_P);
}

void Macad::Occt::BSplSLib::HomogeneousD1(double U, double V, int UIndex, int VIndex, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, Macad::Occt::Pnt% N, Macad::Occt::Vec% Nu, Macad::Occt::Vec% Nv, double% D, double% Du, double% Dv)
{
    pin_ptr<Macad::Occt::Pnt> pp_N = &N;
    pin_ptr<Macad::Occt::Vec> pp_Nu = &Nu;
    pin_ptr<Macad::Occt::Vec> pp_Nv = &Nv;
    pin_ptr<double> pp_D = &D;
    pin_ptr<double> pp_Du = &Du;
    pin_ptr<double> pp_Dv = &Dv;
    ::BSplSLib::HomogeneousD1(U, V, UIndex, VIndex, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, *(gp_Pnt*)pp_N, *(gp_Vec*)pp_Nu, *(gp_Vec*)pp_Nv, *(double*)pp_D, *(double*)pp_Du, *(double*)pp_Dv);
}

void Macad::Occt::BSplSLib::Reverse(Macad::Occt::TColStd_Array2OfReal^ Weights, int Last, bool UDirection)
{
    ::BSplSLib::Reverse(*(::TColStd_Array2OfReal*)Weights->NativeInstance, Last, UDirection);
}

bool Macad::Occt::BSplSLib::IsRational(Macad::Occt::TColStd_Array2OfReal^ Weights, int I1, int I2, int J1, int J2, double Epsilon)
{
    bool _result = ::BSplSLib::IsRational(*(::TColStd_Array2OfReal*)Weights->NativeInstance, I1, I2, J1, J2, Epsilon);
    return _result;
}

bool Macad::Occt::BSplSLib::IsRational(Macad::Occt::TColStd_Array2OfReal^ Weights, int I1, int I2, int J1, int J2)
{
    bool _result = ::BSplSLib::IsRational(*(::TColStd_Array2OfReal*)Weights->NativeInstance, I1, I2, J1, J2, 0.);
    return _result;
}

void Macad::Occt::BSplSLib::SetPoles(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array1OfReal^ FP, bool UDirection)
{
    ::BSplSLib::SetPoles(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array1OfReal*)FP->NativeInstance, UDirection);
}

void Macad::Occt::BSplSLib::SetPoles(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ FP, bool UDirection)
{
    ::BSplSLib::SetPoles(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)FP->NativeInstance, UDirection);
}

void Macad::Occt::BSplSLib::GetPoles(Macad::Occt::TColStd_Array1OfReal^ FP, Macad::Occt::TColgp_Array2OfPnt^ Poles, bool UDirection)
{
    ::BSplSLib::GetPoles(*(::TColStd_Array1OfReal*)FP->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, UDirection);
}

void Macad::Occt::BSplSLib::GetPoles(Macad::Occt::TColStd_Array1OfReal^ FP, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, bool UDirection)
{
    ::BSplSLib::GetPoles(*(::TColStd_Array1OfReal*)FP->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array2OfReal*)Weights->NativeInstance, UDirection);
}

void Macad::Occt::BSplSLib::MovePoint(double U, double V, Macad::Occt::Vec Displ, int UIndex1, int UIndex2, int VIndex1, int VIndex2, int UDegree, int VDegree, bool Rational, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, int% UFirstIndex, int% ULastIndex, int% VFirstIndex, int% VLastIndex, Macad::Occt::TColgp_Array2OfPnt^ NewPoles)
{
    pin_ptr<Macad::Occt::Vec> pp_Displ = &Displ;
    pin_ptr<int> pp_UFirstIndex = &UFirstIndex;
    pin_ptr<int> pp_ULastIndex = &ULastIndex;
    pin_ptr<int> pp_VFirstIndex = &VFirstIndex;
    pin_ptr<int> pp_VLastIndex = &VLastIndex;
    ::BSplSLib::MovePoint(U, V, *(gp_Vec*)pp_Displ, UIndex1, UIndex2, VIndex1, VIndex2, UDegree, VDegree, Rational, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)VFlatKnots->NativeInstance, *(int*)pp_UFirstIndex, *(int*)pp_ULastIndex, *(int*)pp_VFirstIndex, *(int*)pp_VLastIndex, *(::TColgp_Array2OfPnt*)NewPoles->NativeInstance);
}

void Macad::Occt::BSplSLib::InsertKnots(bool UDirection, int Degree, bool Periodic, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon, bool Add)
{
    ::BSplSLib::InsertKnots(UDirection, Degree, Periodic, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)AddKnots->NativeInstance, (::TColStd_Array1OfInteger*)AddMults->NativeInstance, *(::TColgp_Array2OfPnt*)NewPoles->NativeInstance, (::TColStd_Array2OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Epsilon, Add);
}

void Macad::Occt::BSplSLib::InsertKnots(bool UDirection, int Degree, bool Periodic, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ AddKnots, Macad::Occt::TColStd_Array1OfInteger^ AddMults, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Epsilon)
{
    ::BSplSLib::InsertKnots(UDirection, Degree, Periodic, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)AddKnots->NativeInstance, (::TColStd_Array1OfInteger*)AddMults->NativeInstance, *(::TColgp_Array2OfPnt*)NewPoles->NativeInstance, (::TColStd_Array2OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Epsilon, true);
}

bool Macad::Occt::BSplSLib::RemoveKnot(bool UDirection, int Index, int Mult, int Degree, bool Periodic, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults, double Tolerance)
{
    bool _result = ::BSplSLib::RemoveKnot(UDirection, Index, Mult, Degree, Periodic, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array2OfPnt*)NewPoles->NativeInstance, (::TColStd_Array2OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, Tolerance);
    return _result;
}

void Macad::Occt::BSplSLib::IncreaseDegree(bool UDirection, int Degree, int NewDegree, bool Periodic, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColStd_Array1OfInteger^ NewMults)
{
    ::BSplSLib::IncreaseDegree(UDirection, Degree, NewDegree, Periodic, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColgp_Array2OfPnt*)NewPoles->NativeInstance, (::TColStd_Array2OfReal*)NewWeights->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance);
}

void Macad::Occt::BSplSLib::Unperiodize(bool UDirection, int Degree, Macad::Occt::TColStd_Array1OfInteger^ Mults, Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfInteger^ NewMults, Macad::Occt::TColStd_Array1OfReal^ NewKnots, Macad::Occt::TColgp_Array2OfPnt^ NewPoles, Macad::Occt::TColStd_Array2OfReal^ NewWeights)
{
    ::BSplSLib::Unperiodize(UDirection, Degree, *(::TColStd_Array1OfInteger*)Mults->NativeInstance, *(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfInteger*)NewMults->NativeInstance, *(::TColStd_Array1OfReal*)NewKnots->NativeInstance, *(::TColgp_Array2OfPnt*)NewPoles->NativeInstance, (::TColStd_Array2OfReal*)NewWeights->NativeInstance);
}

Macad::Occt::TColStd_Array2OfReal^ Macad::Occt::BSplSLib::NoWeights()
{
    ::TColStd_Array2OfReal* _result = ::BSplSLib::NoWeights();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_Array2OfReal(_result);
}

void Macad::Occt::BSplSLib::BuildCache(double U, double V, double USpanDomain, double VSpanDomain, bool UPeriodicFlag, bool VPeriodicFlag, int UDegree, int VDegree, int UIndex, int VIndex, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColgp_Array2OfPnt^ CachePoles, Macad::Occt::TColStd_Array2OfReal^ CacheWeights)
{
    ::BSplSLib::BuildCache(U, V, USpanDomain, VSpanDomain, UPeriodicFlag, VPeriodicFlag, UDegree, VDegree, UIndex, VIndex, *(::TColStd_Array1OfReal*)UFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)VFlatKnots->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColgp_Array2OfPnt*)CachePoles->NativeInstance, (::TColStd_Array2OfReal*)CacheWeights->NativeInstance);
}

void Macad::Occt::BSplSLib::BuildCache(double theU, double theV, double theUSpanDomain, double theVSpanDomain, bool theUPeriodic, bool theVPeriodic, int theUDegree, int theVDegree, int theUIndex, int theVIndex, Macad::Occt::TColStd_Array1OfReal^ theUFlatKnots, Macad::Occt::TColStd_Array1OfReal^ theVFlatKnots, Macad::Occt::TColgp_Array2OfPnt^ thePoles, Macad::Occt::TColStd_Array2OfReal^ theWeights, Macad::Occt::TColStd_Array2OfReal^ theCacheArray)
{
    ::BSplSLib::BuildCache(theU, theV, theUSpanDomain, theVSpanDomain, theUPeriodic, theVPeriodic, theUDegree, theVDegree, theUIndex, theVIndex, *(::TColStd_Array1OfReal*)theUFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)theVFlatKnots->NativeInstance, *(::TColgp_Array2OfPnt*)thePoles->NativeInstance, (::TColStd_Array2OfReal*)theWeights->NativeInstance, *(::TColStd_Array2OfReal*)theCacheArray->NativeInstance);
}

void Macad::Occt::BSplSLib::CacheD0(double U, double V, int UDegree, int VDegree, double UCacheParameter, double VCacheParameter, double USpanLenght, double VSpanLength, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    ::BSplSLib::CacheD0(U, V, UDegree, VDegree, UCacheParameter, VCacheParameter, USpanLenght, VSpanLength, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point);
}

void Macad::Occt::BSplSLib::CoefsD0(double U, double V, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    ::BSplSLib::CoefsD0(U, V, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point);
}

void Macad::Occt::BSplSLib::CacheD1(double U, double V, int UDegree, int VDegree, double UCacheParameter, double VCacheParameter, double USpanLenght, double VSpanLength, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% VecU, Macad::Occt::Vec% VecV)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    pin_ptr<Macad::Occt::Vec> pp_VecU = &VecU;
    pin_ptr<Macad::Occt::Vec> pp_VecV = &VecV;
    ::BSplSLib::CacheD1(U, V, UDegree, VDegree, UCacheParameter, VCacheParameter, USpanLenght, VSpanLength, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_VecU, *(gp_Vec*)pp_VecV);
}

void Macad::Occt::BSplSLib::CoefsD1(double U, double V, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% VecU, Macad::Occt::Vec% VecV)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    pin_ptr<Macad::Occt::Vec> pp_VecU = &VecU;
    pin_ptr<Macad::Occt::Vec> pp_VecV = &VecV;
    ::BSplSLib::CoefsD1(U, V, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_VecU, *(gp_Vec*)pp_VecV);
}

void Macad::Occt::BSplSLib::CacheD2(double U, double V, int UDegree, int VDegree, double UCacheParameter, double VCacheParameter, double USpanLenght, double VSpanLength, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% VecU, Macad::Occt::Vec% VecV, Macad::Occt::Vec% VecUU, Macad::Occt::Vec% VecUV, Macad::Occt::Vec% VecVV)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    pin_ptr<Macad::Occt::Vec> pp_VecU = &VecU;
    pin_ptr<Macad::Occt::Vec> pp_VecV = &VecV;
    pin_ptr<Macad::Occt::Vec> pp_VecUU = &VecUU;
    pin_ptr<Macad::Occt::Vec> pp_VecUV = &VecUV;
    pin_ptr<Macad::Occt::Vec> pp_VecVV = &VecVV;
    ::BSplSLib::CacheD2(U, V, UDegree, VDegree, UCacheParameter, VCacheParameter, USpanLenght, VSpanLength, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_VecU, *(gp_Vec*)pp_VecV, *(gp_Vec*)pp_VecUU, *(gp_Vec*)pp_VecUV, *(gp_Vec*)pp_VecVV);
}

void Macad::Occt::BSplSLib::CoefsD2(double U, double V, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::Pnt% Point, Macad::Occt::Vec% VecU, Macad::Occt::Vec% VecV, Macad::Occt::Vec% VecUU, Macad::Occt::Vec% VecUV, Macad::Occt::Vec% VecVV)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    pin_ptr<Macad::Occt::Vec> pp_VecU = &VecU;
    pin_ptr<Macad::Occt::Vec> pp_VecV = &VecV;
    pin_ptr<Macad::Occt::Vec> pp_VecUU = &VecUU;
    pin_ptr<Macad::Occt::Vec> pp_VecUV = &VecUV;
    pin_ptr<Macad::Occt::Vec> pp_VecVV = &VecVV;
    ::BSplSLib::CoefsD2(U, V, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(gp_Pnt*)pp_Point, *(gp_Vec*)pp_VecU, *(gp_Vec*)pp_VecV, *(gp_Vec*)pp_VecUU, *(gp_Vec*)pp_VecUV, *(gp_Vec*)pp_VecVV);
}

void Macad::Occt::BSplSLib::PolesCoefficients(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColgp_Array2OfPnt^ CachePoles)
{
    ::BSplSLib::PolesCoefficients(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColgp_Array2OfPnt*)CachePoles->NativeInstance);
}

void Macad::Occt::BSplSLib::PolesCoefficients(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColgp_Array2OfPnt^ CachePoles, Macad::Occt::TColStd_Array2OfReal^ CacheWeights)
{
    ::BSplSLib::PolesCoefficients(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColgp_Array2OfPnt*)CachePoles->NativeInstance, (::TColStd_Array2OfReal*)CacheWeights->NativeInstance);
}

void Macad::Occt::BSplSLib::Resolution(Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UKnots, Macad::Occt::TColStd_Array1OfReal^ VKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, int UDegree, int VDegree, bool URat, bool VRat, bool UPer, bool VPer, double Tolerance3D, double% UTolerance, double% VTolerance)
{
    pin_ptr<double> pp_UTolerance = &UTolerance;
    pin_ptr<double> pp_VTolerance = &VTolerance;
    ::BSplSLib::Resolution(*(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UKnots->NativeInstance, *(::TColStd_Array1OfReal*)VKnots->NativeInstance, *(::TColStd_Array1OfInteger*)UMults->NativeInstance, *(::TColStd_Array1OfInteger*)VMults->NativeInstance, UDegree, VDegree, URat, VRat, UPer, VPer, Tolerance3D, *(double*)pp_UTolerance, *(double*)pp_VTolerance);
}

void Macad::Occt::BSplSLib::Interpolate(int UDegree, int VDegree, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, Macad::Occt::TColStd_Array1OfReal^ UParameters, Macad::Occt::TColStd_Array1OfReal^ VParameters, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, int% InversionProblem)
{
    pin_ptr<int> pp_InversionProblem = &InversionProblem;
    ::BSplSLib::Interpolate(UDegree, VDegree, *(::TColStd_Array1OfReal*)UFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)VFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)UParameters->NativeInstance, *(::TColStd_Array1OfReal*)VParameters->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(::TColStd_Array2OfReal*)Weights->NativeInstance, *(int*)pp_InversionProblem);
}

void Macad::Occt::BSplSLib::Interpolate(int UDegree, int VDegree, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, Macad::Occt::TColStd_Array1OfReal^ UParameters, Macad::Occt::TColStd_Array1OfReal^ VParameters, Macad::Occt::TColgp_Array2OfPnt^ Poles, int% InversionProblem)
{
    pin_ptr<int> pp_InversionProblem = &InversionProblem;
    ::BSplSLib::Interpolate(UDegree, VDegree, *(::TColStd_Array1OfReal*)UFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)VFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)UParameters->NativeInstance, *(::TColStd_Array1OfReal*)VParameters->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, *(int*)pp_InversionProblem);
}

void Macad::Occt::BSplSLib::FunctionMultiply(Macad::Occt::BSplSLib_EvaluatorFunction^ Function, int UBSplineDegree, int VBSplineDegree, Macad::Occt::TColStd_Array1OfReal^ UBSplineKnots, Macad::Occt::TColStd_Array1OfReal^ VBSplineKnots, Macad::Occt::TColStd_Array1OfInteger^ UMults, Macad::Occt::TColStd_Array1OfInteger^ VMults, Macad::Occt::TColgp_Array2OfPnt^ Poles, Macad::Occt::TColStd_Array2OfReal^ Weights, Macad::Occt::TColStd_Array1OfReal^ UFlatKnots, Macad::Occt::TColStd_Array1OfReal^ VFlatKnots, int UNewDegree, int VNewDegree, Macad::Occt::TColgp_Array2OfPnt^ NewNumerator, Macad::Occt::TColStd_Array2OfReal^ NewDenominator, int% theStatus)
{
    pin_ptr<int> pp_theStatus = &theStatus;
    ::BSplSLib::FunctionMultiply(*(::BSplSLib_EvaluatorFunction*)Function->NativeInstance, UBSplineDegree, VBSplineDegree, *(::TColStd_Array1OfReal*)UBSplineKnots->NativeInstance, *(::TColStd_Array1OfReal*)VBSplineKnots->NativeInstance, (::TColStd_Array1OfInteger*)UMults->NativeInstance, (::TColStd_Array1OfInteger*)VMults->NativeInstance, *(::TColgp_Array2OfPnt*)Poles->NativeInstance, (::TColStd_Array2OfReal*)Weights->NativeInstance, *(::TColStd_Array1OfReal*)UFlatKnots->NativeInstance, *(::TColStd_Array1OfReal*)VFlatKnots->NativeInstance, UNewDegree, VNewDegree, *(::TColgp_Array2OfPnt*)NewNumerator->NativeInstance, *(::TColStd_Array2OfReal*)NewDenominator->NativeInstance, *(int*)pp_theStatus);
}



//---------------------------------------------------------------------
//  Class  BSplSLib_Cache
//---------------------------------------------------------------------

Macad::Occt::BSplSLib_Cache::BSplSLib_Cache(int theDegreeU, bool thePeriodicU, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsU, int theDegreeV, bool thePeriodicV, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsV, Macad::Occt::TColStd_Array2OfReal^ theWeights)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<int> pp_theDegreeU = &theDegreeU;
    pin_ptr<bool> pp_thePeriodicU = &thePeriodicU;
    pin_ptr<int> pp_theDegreeV = &theDegreeV;
    pin_ptr<bool> pp_thePeriodicV = &thePeriodicV;
    NativeInstance = new ::BSplSLib_Cache(*(int*)pp_theDegreeU, *(bool*)pp_thePeriodicU, *(::TColStd_Array1OfReal*)theFlatKnotsU->NativeInstance, *(int*)pp_theDegreeV, *(bool*)pp_thePeriodicV, *(::TColStd_Array1OfReal*)theFlatKnotsV->NativeInstance, (::TColStd_Array2OfReal*)theWeights->NativeInstance);
}

Macad::Occt::BSplSLib_Cache::BSplSLib_Cache(int theDegreeU, bool thePeriodicU, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsU, int theDegreeV, bool thePeriodicV, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsV)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<int> pp_theDegreeU = &theDegreeU;
    pin_ptr<bool> pp_thePeriodicU = &thePeriodicU;
    pin_ptr<int> pp_theDegreeV = &theDegreeV;
    pin_ptr<bool> pp_thePeriodicV = &thePeriodicV;
    NativeInstance = new ::BSplSLib_Cache(*(int*)pp_theDegreeU, *(bool*)pp_thePeriodicU, *(::TColStd_Array1OfReal*)theFlatKnotsU->NativeInstance, *(int*)pp_theDegreeV, *(bool*)pp_thePeriodicV, *(::TColStd_Array1OfReal*)theFlatKnotsV->NativeInstance, nullptr);
}

bool Macad::Occt::BSplSLib_Cache::IsCacheValid(double theParameterU, double theParameterV)
{
    bool _result = ((::BSplSLib_Cache*)_NativeInstance)->IsCacheValid(theParameterU, theParameterV);
    return _result;
}

void Macad::Occt::BSplSLib_Cache::BuildCache(double theParameterU, double theParameterV, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsU, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsV, Macad::Occt::TColgp_Array2OfPnt^ thePoles, Macad::Occt::TColStd_Array2OfReal^ theWeights)
{
    pin_ptr<double> pp_theParameterU = &theParameterU;
    pin_ptr<double> pp_theParameterV = &theParameterV;
    ((::BSplSLib_Cache*)_NativeInstance)->BuildCache(*(double*)pp_theParameterU, *(double*)pp_theParameterV, *(::TColStd_Array1OfReal*)theFlatKnotsU->NativeInstance, *(::TColStd_Array1OfReal*)theFlatKnotsV->NativeInstance, *(::TColgp_Array2OfPnt*)thePoles->NativeInstance, (::TColStd_Array2OfReal*)theWeights->NativeInstance);
}

void Macad::Occt::BSplSLib_Cache::BuildCache(double theParameterU, double theParameterV, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsU, Macad::Occt::TColStd_Array1OfReal^ theFlatKnotsV, Macad::Occt::TColgp_Array2OfPnt^ thePoles)
{
    pin_ptr<double> pp_theParameterU = &theParameterU;
    pin_ptr<double> pp_theParameterV = &theParameterV;
    ((::BSplSLib_Cache*)_NativeInstance)->BuildCache(*(double*)pp_theParameterU, *(double*)pp_theParameterV, *(::TColStd_Array1OfReal*)theFlatKnotsU->NativeInstance, *(::TColStd_Array1OfReal*)theFlatKnotsV->NativeInstance, *(::TColgp_Array2OfPnt*)thePoles->NativeInstance, nullptr);
}

void Macad::Occt::BSplSLib_Cache::D0(double theU, double theV, Macad::Occt::Pnt% thePoint)
{
    pin_ptr<double> pp_theU = &theU;
    pin_ptr<double> pp_theV = &theV;
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    ((::BSplSLib_Cache*)_NativeInstance)->D0(*(double*)pp_theU, *(double*)pp_theV, *(gp_Pnt*)pp_thePoint);
}

void Macad::Occt::BSplSLib_Cache::D1(double theU, double theV, Macad::Occt::Pnt% thePoint, Macad::Occt::Vec% theTangentU, Macad::Occt::Vec% theTangentV)
{
    pin_ptr<double> pp_theU = &theU;
    pin_ptr<double> pp_theV = &theV;
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    pin_ptr<Macad::Occt::Vec> pp_theTangentU = &theTangentU;
    pin_ptr<Macad::Occt::Vec> pp_theTangentV = &theTangentV;
    ((::BSplSLib_Cache*)_NativeInstance)->D1(*(double*)pp_theU, *(double*)pp_theV, *(gp_Pnt*)pp_thePoint, *(gp_Vec*)pp_theTangentU, *(gp_Vec*)pp_theTangentV);
}

void Macad::Occt::BSplSLib_Cache::D2(double theU, double theV, Macad::Occt::Pnt% thePoint, Macad::Occt::Vec% theTangentU, Macad::Occt::Vec% theTangentV, Macad::Occt::Vec% theCurvatureU, Macad::Occt::Vec% theCurvatureV, Macad::Occt::Vec% theCurvatureUV)
{
    pin_ptr<double> pp_theU = &theU;
    pin_ptr<double> pp_theV = &theV;
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    pin_ptr<Macad::Occt::Vec> pp_theTangentU = &theTangentU;
    pin_ptr<Macad::Occt::Vec> pp_theTangentV = &theTangentV;
    pin_ptr<Macad::Occt::Vec> pp_theCurvatureU = &theCurvatureU;
    pin_ptr<Macad::Occt::Vec> pp_theCurvatureV = &theCurvatureV;
    pin_ptr<Macad::Occt::Vec> pp_theCurvatureUV = &theCurvatureUV;
    ((::BSplSLib_Cache*)_NativeInstance)->D2(*(double*)pp_theU, *(double*)pp_theV, *(gp_Pnt*)pp_thePoint, *(gp_Vec*)pp_theTangentU, *(gp_Vec*)pp_theTangentV, *(gp_Vec*)pp_theCurvatureU, *(gp_Vec*)pp_theCurvatureV, *(gp_Vec*)pp_theCurvatureUV);
}

Macad::Occt::BSplSLib_Cache^ Macad::Occt::BSplSLib_Cache::CreateDowncasted(::BSplSLib_Cache* instance)
{
    return gcnew Macad::Occt::BSplSLib_Cache( instance );
}


