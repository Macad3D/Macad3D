// Generated wrapper code for package Convert

#include "OcctPCH.h"
#include "Convert.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Convert.h"
#include "Standard.h"
#include "TColgp.h"
#include "gp.h"
#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  Convert_SequenceOfArray1OfPoles
//---------------------------------------------------------------------

Macad::Occt::Convert_SequenceOfArray1OfPoles::Convert_SequenceOfArray1OfPoles()
	: BaseClass<::Convert_SequenceOfArray1OfPoles>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_SequenceOfArray1OfPoles();
}

Macad::Occt::Convert_SequenceOfArray1OfPoles::Convert_SequenceOfArray1OfPoles(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Convert_SequenceOfArray1OfPoles>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Convert_SequenceOfArray1OfPoles(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Convert_SequenceOfArray1OfPoles::Convert_SequenceOfArray1OfPoles(Macad::Occt::Convert_SequenceOfArray1OfPoles^ theOther)
	: BaseClass<::Convert_SequenceOfArray1OfPoles>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_SequenceOfArray1OfPoles(*(::Convert_SequenceOfArray1OfPoles*)theOther->NativeInstance);
}

int Macad::Occt::Convert_SequenceOfArray1OfPoles::Size()
{
	return ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Size();
}

int Macad::Occt::Convert_SequenceOfArray1OfPoles::Length()
{
	return ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Length();
}

int Macad::Occt::Convert_SequenceOfArray1OfPoles::Lower()
{
	return ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Lower();
}

int Macad::Occt::Convert_SequenceOfArray1OfPoles::Upper()
{
	return ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Upper();
}

bool Macad::Occt::Convert_SequenceOfArray1OfPoles::IsEmpty()
{
	return ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Reverse()
{
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Reverse();
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Exchange(int I, int J)
{
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Clear()
{
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Convert_SequenceOfArray1OfPoles^ Macad::Occt::Convert_SequenceOfArray1OfPoles::Assign(Macad::Occt::Convert_SequenceOfArray1OfPoles^ theOther)
{
	::Convert_SequenceOfArray1OfPoles* _result = new ::Convert_SequenceOfArray1OfPoles();
	*_result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Assign(*(::Convert_SequenceOfArray1OfPoles*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Convert_SequenceOfArray1OfPoles(_result);
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Remove(int theIndex)
{
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Remove(int theFromIndex, int theToIndex)
{
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Append(Macad::Occt::TColgp_HArray1OfPnt^ theItem)
{
	Handle(::TColgp_HArray1OfPnt) h_theItem = theItem->NativeInstance;
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Append(Macad::Occt::Convert_SequenceOfArray1OfPoles^ theSeq)
{
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Append(*(::Convert_SequenceOfArray1OfPoles*)theSeq->NativeInstance);
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Prepend(Macad::Occt::TColgp_HArray1OfPnt^ theItem)
{
	Handle(::TColgp_HArray1OfPnt) h_theItem = theItem->NativeInstance;
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Prepend(Macad::Occt::Convert_SequenceOfArray1OfPoles^ theSeq)
{
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Prepend(*(::Convert_SequenceOfArray1OfPoles*)theSeq->NativeInstance);
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::InsertBefore(int theIndex, Macad::Occt::TColgp_HArray1OfPnt^ theItem)
{
	Handle(::TColgp_HArray1OfPnt) h_theItem = theItem->NativeInstance;
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::InsertBefore(int theIndex, Macad::Occt::Convert_SequenceOfArray1OfPoles^ theSeq)
{
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->InsertBefore(theIndex, *(::Convert_SequenceOfArray1OfPoles*)theSeq->NativeInstance);
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::InsertAfter(int theIndex, Macad::Occt::Convert_SequenceOfArray1OfPoles^ theSeq)
{
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->InsertAfter(theIndex, *(::Convert_SequenceOfArray1OfPoles*)theSeq->NativeInstance);
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::InsertAfter(int theIndex, Macad::Occt::TColgp_HArray1OfPnt^ theItem)
{
	Handle(::TColgp_HArray1OfPnt) h_theItem = theItem->NativeInstance;
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Split(int theIndex, Macad::Occt::Convert_SequenceOfArray1OfPoles^ theSeq)
{
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Split(theIndex, *(::Convert_SequenceOfArray1OfPoles*)theSeq->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::First()
{
	Handle(::TColgp_HArray1OfPnt) _result;
	_result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::ChangeFirst()
{
	Handle(::TColgp_HArray1OfPnt) _result;
	_result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::Last()
{
	Handle(::TColgp_HArray1OfPnt) _result;
	_result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::ChangeLast()
{
	Handle(::TColgp_HArray1OfPnt) _result;
	_result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::Value(int theIndex)
{
	Handle(::TColgp_HArray1OfPnt) _result;
	_result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::ChangeValue(int theIndex)
{
	Handle(::TColgp_HArray1OfPnt) _result;
	_result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted( _result.get());
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::SetValue(int theIndex, Macad::Occt::TColgp_HArray1OfPnt^ theItem)
{
	Handle(::TColgp_HArray1OfPnt) h_theItem = theItem->NativeInstance;
	((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  Convert_ConicToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::Convert_ConicToBSplineCurve::Convert_ConicToBSplineCurve(Macad::Occt::Convert_ConicToBSplineCurve^ parameter1)
	: BaseClass<::Convert_ConicToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_ConicToBSplineCurve(*(::Convert_ConicToBSplineCurve*)parameter1->NativeInstance);
}

int Macad::Occt::Convert_ConicToBSplineCurve::Degree()
{
	return ((::Convert_ConicToBSplineCurve*)_NativeInstance)->Degree();
}

int Macad::Occt::Convert_ConicToBSplineCurve::NbPoles()
{
	return ((::Convert_ConicToBSplineCurve*)_NativeInstance)->NbPoles();
}

int Macad::Occt::Convert_ConicToBSplineCurve::NbKnots()
{
	return ((::Convert_ConicToBSplineCurve*)_NativeInstance)->NbKnots();
}

bool Macad::Occt::Convert_ConicToBSplineCurve::IsPeriodic()
{
	return ((::Convert_ConicToBSplineCurve*)_NativeInstance)->IsPeriodic();
}

Macad::Occt::Pnt2d Macad::Occt::Convert_ConicToBSplineCurve::Pole(int Index)
{
	return Macad::Occt::Pnt2d(((::Convert_ConicToBSplineCurve*)_NativeInstance)->Pole(Index));
}

double Macad::Occt::Convert_ConicToBSplineCurve::Weight(int Index)
{
	return ((::Convert_ConicToBSplineCurve*)_NativeInstance)->Weight(Index);
}

double Macad::Occt::Convert_ConicToBSplineCurve::Knot(int Index)
{
	return ((::Convert_ConicToBSplineCurve*)_NativeInstance)->Knot(Index);
}

int Macad::Occt::Convert_ConicToBSplineCurve::Multiplicity(int Index)
{
	return ((::Convert_ConicToBSplineCurve*)_NativeInstance)->Multiplicity(Index);
}

void Macad::Occt::Convert_ConicToBSplineCurve::BuildCosAndSin(Macad::Occt::Convert_ParameterisationType Parametrisation, Macad::Occt::TColStd_HArray1OfReal^ CosNumerator, Macad::Occt::TColStd_HArray1OfReal^ SinNumerator, Macad::Occt::TColStd_HArray1OfReal^ Denominator, int% Degree, Macad::Occt::TColStd_HArray1OfReal^ Knots, Macad::Occt::TColStd_HArray1OfInteger^ Mults)
{
	Handle(::TColStd_HArray1OfReal) h_CosNumerator = CosNumerator->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_SinNumerator = SinNumerator->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_Denominator = Denominator->NativeInstance;
	pin_ptr<int> pp_Degree = &Degree;
	Handle(::TColStd_HArray1OfReal) h_Knots = Knots->NativeInstance;
	Handle(::TColStd_HArray1OfInteger) h_Mults = Mults->NativeInstance;
	((::Convert_ConicToBSplineCurve*)_NativeInstance)->BuildCosAndSin((::Convert_ParameterisationType)Parametrisation, h_CosNumerator, h_SinNumerator, h_Denominator, *(Standard_Integer*)pp_Degree, h_Knots, h_Mults);
	CosNumerator->NativeInstance = h_CosNumerator.get();
	SinNumerator->NativeInstance = h_SinNumerator.get();
	Denominator->NativeInstance = h_Denominator.get();
	Knots->NativeInstance = h_Knots.get();
	Mults->NativeInstance = h_Mults.get();
}

void Macad::Occt::Convert_ConicToBSplineCurve::BuildCosAndSin(Macad::Occt::Convert_ParameterisationType Parametrisation, double UFirst, double ULast, Macad::Occt::TColStd_HArray1OfReal^ CosNumerator, Macad::Occt::TColStd_HArray1OfReal^ SinNumerator, Macad::Occt::TColStd_HArray1OfReal^ Denominator, int% Degree, Macad::Occt::TColStd_HArray1OfReal^ Knots, Macad::Occt::TColStd_HArray1OfInteger^ Mults)
{
	Handle(::TColStd_HArray1OfReal) h_CosNumerator = CosNumerator->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_SinNumerator = SinNumerator->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_Denominator = Denominator->NativeInstance;
	pin_ptr<int> pp_Degree = &Degree;
	Handle(::TColStd_HArray1OfReal) h_Knots = Knots->NativeInstance;
	Handle(::TColStd_HArray1OfInteger) h_Mults = Mults->NativeInstance;
	((::Convert_ConicToBSplineCurve*)_NativeInstance)->BuildCosAndSin((::Convert_ParameterisationType)Parametrisation, UFirst, ULast, h_CosNumerator, h_SinNumerator, h_Denominator, *(Standard_Integer*)pp_Degree, h_Knots, h_Mults);
	CosNumerator->NativeInstance = h_CosNumerator.get();
	SinNumerator->NativeInstance = h_SinNumerator.get();
	Denominator->NativeInstance = h_Denominator.get();
	Knots->NativeInstance = h_Knots.get();
	Mults->NativeInstance = h_Mults.get();
}




//---------------------------------------------------------------------
//  Class  Convert_CircleToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::Convert_CircleToBSplineCurve::Convert_CircleToBSplineCurve(Macad::Occt::gp_Circ2d^ C, Macad::Occt::Convert_ParameterisationType Parameterisation)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CircleToBSplineCurve(*(::gp_Circ2d*)C->NativeInstance, (::Convert_ParameterisationType)Parameterisation);
}

Macad::Occt::Convert_CircleToBSplineCurve::Convert_CircleToBSplineCurve(Macad::Occt::gp_Circ2d^ C)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CircleToBSplineCurve(*(::gp_Circ2d*)C->NativeInstance, Convert_TgtThetaOver2);
}

Macad::Occt::Convert_CircleToBSplineCurve::Convert_CircleToBSplineCurve(Macad::Occt::gp_Circ2d^ C, double U1, double U2, Macad::Occt::Convert_ParameterisationType Parameterisation)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CircleToBSplineCurve(*(::gp_Circ2d*)C->NativeInstance, U1, U2, (::Convert_ParameterisationType)Parameterisation);
}

Macad::Occt::Convert_CircleToBSplineCurve::Convert_CircleToBSplineCurve(Macad::Occt::gp_Circ2d^ C, double U1, double U2)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CircleToBSplineCurve(*(::gp_Circ2d*)C->NativeInstance, U1, U2, Convert_TgtThetaOver2);
}

Macad::Occt::Convert_CircleToBSplineCurve::Convert_CircleToBSplineCurve(Macad::Occt::Convert_CircleToBSplineCurve^ parameter1)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CircleToBSplineCurve(*(::Convert_CircleToBSplineCurve*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Convert_CompBezierCurves2dToBSplineCurve2d
//---------------------------------------------------------------------

Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::Convert_CompBezierCurves2dToBSplineCurve2d(double AngularTolerance)
	: BaseClass<::Convert_CompBezierCurves2dToBSplineCurve2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CompBezierCurves2dToBSplineCurve2d(AngularTolerance);
}

Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::Convert_CompBezierCurves2dToBSplineCurve2d(Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d^ parameter1)
	: BaseClass<::Convert_CompBezierCurves2dToBSplineCurve2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CompBezierCurves2dToBSplineCurve2d(*(::Convert_CompBezierCurves2dToBSplineCurve2d*)parameter1->NativeInstance);
}

void Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::AddCurve(Macad::Occt::TColgp_Array1OfPnt2d^ Poles)
{
	((::Convert_CompBezierCurves2dToBSplineCurve2d*)_NativeInstance)->AddCurve(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance);
}

void Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::Perform()
{
	((::Convert_CompBezierCurves2dToBSplineCurve2d*)_NativeInstance)->Perform();
}

int Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::Degree()
{
	return ((::Convert_CompBezierCurves2dToBSplineCurve2d*)_NativeInstance)->Degree();
}

int Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::NbPoles()
{
	return ((::Convert_CompBezierCurves2dToBSplineCurve2d*)_NativeInstance)->NbPoles();
}

void Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::Poles(Macad::Occt::TColgp_Array1OfPnt2d^ Poles)
{
	((::Convert_CompBezierCurves2dToBSplineCurve2d*)_NativeInstance)->Poles(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance);
}

int Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::NbKnots()
{
	return ((::Convert_CompBezierCurves2dToBSplineCurve2d*)_NativeInstance)->NbKnots();
}

void Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::KnotsAndMults(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults)
{
	((::Convert_CompBezierCurves2dToBSplineCurve2d*)_NativeInstance)->KnotsAndMults(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Convert_CompBezierCurvesToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::Convert_CompBezierCurvesToBSplineCurve(double AngularTolerance)
	: BaseClass<::Convert_CompBezierCurvesToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CompBezierCurvesToBSplineCurve(AngularTolerance);
}

Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::Convert_CompBezierCurvesToBSplineCurve(Macad::Occt::Convert_CompBezierCurvesToBSplineCurve^ parameter1)
	: BaseClass<::Convert_CompBezierCurvesToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CompBezierCurvesToBSplineCurve(*(::Convert_CompBezierCurvesToBSplineCurve*)parameter1->NativeInstance);
}

void Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::AddCurve(Macad::Occt::TColgp_Array1OfPnt^ Poles)
{
	((::Convert_CompBezierCurvesToBSplineCurve*)_NativeInstance)->AddCurve(*(::TColgp_Array1OfPnt*)Poles->NativeInstance);
}

void Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::Perform()
{
	((::Convert_CompBezierCurvesToBSplineCurve*)_NativeInstance)->Perform();
}

int Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::Degree()
{
	return ((::Convert_CompBezierCurvesToBSplineCurve*)_NativeInstance)->Degree();
}

int Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::NbPoles()
{
	return ((::Convert_CompBezierCurvesToBSplineCurve*)_NativeInstance)->NbPoles();
}

void Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::Poles(Macad::Occt::TColgp_Array1OfPnt^ Poles)
{
	((::Convert_CompBezierCurvesToBSplineCurve*)_NativeInstance)->Poles(*(::TColgp_Array1OfPnt*)Poles->NativeInstance);
}

int Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::NbKnots()
{
	return ((::Convert_CompBezierCurvesToBSplineCurve*)_NativeInstance)->NbKnots();
}

void Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::KnotsAndMults(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults)
{
	((::Convert_CompBezierCurvesToBSplineCurve*)_NativeInstance)->KnotsAndMults(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Convert_CompPolynomialToPoles
//---------------------------------------------------------------------

Macad::Occt::Convert_CompPolynomialToPoles::Convert_CompPolynomialToPoles(int NumCurves, int Continuity, int Dimension, int MaxDegree, Macad::Occt::TColStd_HArray1OfInteger^ NumCoeffPerCurve, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray2OfReal^ PolynomialIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueIntervals)
	: BaseClass<::Convert_CompPolynomialToPoles>(BaseClass::InitMode::Uninitialized)
{
	Handle(::TColStd_HArray1OfInteger) h_NumCoeffPerCurve = NumCoeffPerCurve->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_Coefficients = Coefficients->NativeInstance;
	Handle(::TColStd_HArray2OfReal) h_PolynomialIntervals = PolynomialIntervals->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_TrueIntervals = TrueIntervals->NativeInstance;
	_NativeInstance = new ::Convert_CompPolynomialToPoles(NumCurves, Continuity, Dimension, MaxDegree, h_NumCoeffPerCurve, h_Coefficients, h_PolynomialIntervals, h_TrueIntervals);
	NumCoeffPerCurve->NativeInstance = h_NumCoeffPerCurve.get();
	Coefficients->NativeInstance = h_Coefficients.get();
	PolynomialIntervals->NativeInstance = h_PolynomialIntervals.get();
	TrueIntervals->NativeInstance = h_TrueIntervals.get();
}

Macad::Occt::Convert_CompPolynomialToPoles::Convert_CompPolynomialToPoles(int NumCurves, int Dimension, int MaxDegree, Macad::Occt::TColStd_Array1OfInteger^ Continuity, Macad::Occt::TColStd_Array1OfInteger^ NumCoeffPerCurve, Macad::Occt::TColStd_Array1OfReal^ Coefficients, Macad::Occt::TColStd_Array2OfReal^ PolynomialIntervals, Macad::Occt::TColStd_Array1OfReal^ TrueIntervals)
	: BaseClass<::Convert_CompPolynomialToPoles>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CompPolynomialToPoles(NumCurves, Dimension, MaxDegree, *(::TColStd_Array1OfInteger*)Continuity->NativeInstance, *(::TColStd_Array1OfInteger*)NumCoeffPerCurve->NativeInstance, *(::TColStd_Array1OfReal*)Coefficients->NativeInstance, *(::TColStd_Array2OfReal*)PolynomialIntervals->NativeInstance, *(::TColStd_Array1OfReal*)TrueIntervals->NativeInstance);
}

Macad::Occt::Convert_CompPolynomialToPoles::Convert_CompPolynomialToPoles(int Dimension, int MaxDegree, int Degree, Macad::Occt::TColStd_Array1OfReal^ Coefficients, Macad::Occt::TColStd_Array1OfReal^ PolynomialIntervals, Macad::Occt::TColStd_Array1OfReal^ TrueIntervals)
	: BaseClass<::Convert_CompPolynomialToPoles>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CompPolynomialToPoles(Dimension, MaxDegree, Degree, *(::TColStd_Array1OfReal*)Coefficients->NativeInstance, *(::TColStd_Array1OfReal*)PolynomialIntervals->NativeInstance, *(::TColStd_Array1OfReal*)TrueIntervals->NativeInstance);
}

Macad::Occt::Convert_CompPolynomialToPoles::Convert_CompPolynomialToPoles(Macad::Occt::Convert_CompPolynomialToPoles^ parameter1)
	: BaseClass<::Convert_CompPolynomialToPoles>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CompPolynomialToPoles(*(::Convert_CompPolynomialToPoles*)parameter1->NativeInstance);
}

int Macad::Occt::Convert_CompPolynomialToPoles::NbPoles()
{
	return ((::Convert_CompPolynomialToPoles*)_NativeInstance)->NbPoles();
}

void Macad::Occt::Convert_CompPolynomialToPoles::Poles(Macad::Occt::TColStd_HArray2OfReal^ Poles)
{
	Handle(::TColStd_HArray2OfReal) h_Poles = Poles->NativeInstance;
	((::Convert_CompPolynomialToPoles*)_NativeInstance)->Poles(h_Poles);
	Poles->NativeInstance = h_Poles.get();
}

int Macad::Occt::Convert_CompPolynomialToPoles::Degree()
{
	return ((::Convert_CompPolynomialToPoles*)_NativeInstance)->Degree();
}

int Macad::Occt::Convert_CompPolynomialToPoles::NbKnots()
{
	return ((::Convert_CompPolynomialToPoles*)_NativeInstance)->NbKnots();
}

void Macad::Occt::Convert_CompPolynomialToPoles::Knots(Macad::Occt::TColStd_HArray1OfReal^ K)
{
	Handle(::TColStd_HArray1OfReal) h_K = K->NativeInstance;
	((::Convert_CompPolynomialToPoles*)_NativeInstance)->Knots(h_K);
	K->NativeInstance = h_K.get();
}

void Macad::Occt::Convert_CompPolynomialToPoles::Multiplicities(Macad::Occt::TColStd_HArray1OfInteger^ M)
{
	Handle(::TColStd_HArray1OfInteger) h_M = M->NativeInstance;
	((::Convert_CompPolynomialToPoles*)_NativeInstance)->Multiplicities(h_M);
	M->NativeInstance = h_M.get();
}

bool Macad::Occt::Convert_CompPolynomialToPoles::IsDone()
{
	return ((::Convert_CompPolynomialToPoles*)_NativeInstance)->IsDone();
}




//---------------------------------------------------------------------
//  Class  Convert_ElementarySurfaceToBSplineSurface
//---------------------------------------------------------------------

Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::Convert_ElementarySurfaceToBSplineSurface(Macad::Occt::Convert_ElementarySurfaceToBSplineSurface^ parameter1)
	: BaseClass<::Convert_ElementarySurfaceToBSplineSurface>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_ElementarySurfaceToBSplineSurface(*(::Convert_ElementarySurfaceToBSplineSurface*)parameter1->NativeInstance);
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::UDegree()
{
	return ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->UDegree();
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::VDegree()
{
	return ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->VDegree();
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::NbUPoles()
{
	return ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->NbUPoles();
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::NbVPoles()
{
	return ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->NbVPoles();
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::NbUKnots()
{
	return ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->NbUKnots();
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::NbVKnots()
{
	return ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->NbVKnots();
}

bool Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::IsUPeriodic()
{
	return ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->IsUPeriodic();
}

bool Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::IsVPeriodic()
{
	return ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->IsVPeriodic();
}

Macad::Occt::Pnt Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::Pole(int UIndex, int VIndex)
{
	return Macad::Occt::Pnt(((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->Pole(UIndex, VIndex));
}

double Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::Weight(int UIndex, int VIndex)
{
	return ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->Weight(UIndex, VIndex);
}

double Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::UKnot(int UIndex)
{
	return ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->UKnot(UIndex);
}

double Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::VKnot(int UIndex)
{
	return ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->VKnot(UIndex);
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::UMultiplicity(int UIndex)
{
	return ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->UMultiplicity(UIndex);
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::VMultiplicity(int VIndex)
{
	return ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->VMultiplicity(VIndex);
}




//---------------------------------------------------------------------
//  Class  Convert_ConeToBSplineSurface
//---------------------------------------------------------------------

Macad::Occt::Convert_ConeToBSplineSurface::Convert_ConeToBSplineSurface(Macad::Occt::gp_Cone^ C, double U1, double U2, double V1, double V2)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_ConeToBSplineSurface(*(::gp_Cone*)C->NativeInstance, U1, U2, V1, V2);
}

Macad::Occt::Convert_ConeToBSplineSurface::Convert_ConeToBSplineSurface(Macad::Occt::gp_Cone^ C, double V1, double V2)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_ConeToBSplineSurface(*(::gp_Cone*)C->NativeInstance, V1, V2);
}

Macad::Occt::Convert_ConeToBSplineSurface::Convert_ConeToBSplineSurface(Macad::Occt::Convert_ConeToBSplineSurface^ parameter1)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_ConeToBSplineSurface(*(::Convert_ConeToBSplineSurface*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Convert_CylinderToBSplineSurface
//---------------------------------------------------------------------

Macad::Occt::Convert_CylinderToBSplineSurface::Convert_CylinderToBSplineSurface(Macad::Occt::gp_Cylinder^ Cyl, double U1, double U2, double V1, double V2)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CylinderToBSplineSurface(*(::gp_Cylinder*)Cyl->NativeInstance, U1, U2, V1, V2);
}

Macad::Occt::Convert_CylinderToBSplineSurface::Convert_CylinderToBSplineSurface(Macad::Occt::gp_Cylinder^ Cyl, double V1, double V2)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CylinderToBSplineSurface(*(::gp_Cylinder*)Cyl->NativeInstance, V1, V2);
}

Macad::Occt::Convert_CylinderToBSplineSurface::Convert_CylinderToBSplineSurface(Macad::Occt::Convert_CylinderToBSplineSurface^ parameter1)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_CylinderToBSplineSurface(*(::Convert_CylinderToBSplineSurface*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Convert_EllipseToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::Convert_EllipseToBSplineCurve::Convert_EllipseToBSplineCurve(Macad::Occt::gp_Elips2d^ E, Macad::Occt::Convert_ParameterisationType Parameterisation)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_EllipseToBSplineCurve(*(::gp_Elips2d*)E->NativeInstance, (::Convert_ParameterisationType)Parameterisation);
}

Macad::Occt::Convert_EllipseToBSplineCurve::Convert_EllipseToBSplineCurve(Macad::Occt::gp_Elips2d^ E)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_EllipseToBSplineCurve(*(::gp_Elips2d*)E->NativeInstance, Convert_TgtThetaOver2);
}

Macad::Occt::Convert_EllipseToBSplineCurve::Convert_EllipseToBSplineCurve(Macad::Occt::gp_Elips2d^ E, double U1, double U2, Macad::Occt::Convert_ParameterisationType Parameterisation)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_EllipseToBSplineCurve(*(::gp_Elips2d*)E->NativeInstance, U1, U2, (::Convert_ParameterisationType)Parameterisation);
}

Macad::Occt::Convert_EllipseToBSplineCurve::Convert_EllipseToBSplineCurve(Macad::Occt::gp_Elips2d^ E, double U1, double U2)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_EllipseToBSplineCurve(*(::gp_Elips2d*)E->NativeInstance, U1, U2, Convert_TgtThetaOver2);
}

Macad::Occt::Convert_EllipseToBSplineCurve::Convert_EllipseToBSplineCurve(Macad::Occt::Convert_EllipseToBSplineCurve^ parameter1)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_EllipseToBSplineCurve(*(::Convert_EllipseToBSplineCurve*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Convert_GridPolynomialToPoles
//---------------------------------------------------------------------

Macad::Occt::Convert_GridPolynomialToPoles::Convert_GridPolynomialToPoles(int MaxUDegree, int MaxVDegree, Macad::Occt::TColStd_HArray1OfInteger^ NumCoeff, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray1OfReal^ PolynomialUIntervals, Macad::Occt::TColStd_HArray1OfReal^ PolynomialVIntervals)
	: BaseClass<::Convert_GridPolynomialToPoles>(BaseClass::InitMode::Uninitialized)
{
	Handle(::TColStd_HArray1OfInteger) h_NumCoeff = NumCoeff->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_Coefficients = Coefficients->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_PolynomialUIntervals = PolynomialUIntervals->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_PolynomialVIntervals = PolynomialVIntervals->NativeInstance;
	_NativeInstance = new ::Convert_GridPolynomialToPoles(MaxUDegree, MaxVDegree, h_NumCoeff, h_Coefficients, h_PolynomialUIntervals, h_PolynomialVIntervals);
	NumCoeff->NativeInstance = h_NumCoeff.get();
	Coefficients->NativeInstance = h_Coefficients.get();
	PolynomialUIntervals->NativeInstance = h_PolynomialUIntervals.get();
	PolynomialVIntervals->NativeInstance = h_PolynomialVIntervals.get();
}

Macad::Occt::Convert_GridPolynomialToPoles::Convert_GridPolynomialToPoles(int NbUSurfaces, int NBVSurfaces, int UContinuity, int VContinuity, int MaxUDegree, int MaxVDegree, Macad::Occt::TColStd_HArray2OfInteger^ NumCoeffPerSurface, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray1OfReal^ PolynomialUIntervals, Macad::Occt::TColStd_HArray1OfReal^ PolynomialVIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueUIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueVIntervals)
	: BaseClass<::Convert_GridPolynomialToPoles>(BaseClass::InitMode::Uninitialized)
{
	Handle(::TColStd_HArray2OfInteger) h_NumCoeffPerSurface = NumCoeffPerSurface->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_Coefficients = Coefficients->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_PolynomialUIntervals = PolynomialUIntervals->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_PolynomialVIntervals = PolynomialVIntervals->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_TrueUIntervals = TrueUIntervals->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_TrueVIntervals = TrueVIntervals->NativeInstance;
	_NativeInstance = new ::Convert_GridPolynomialToPoles(NbUSurfaces, NBVSurfaces, UContinuity, VContinuity, MaxUDegree, MaxVDegree, h_NumCoeffPerSurface, h_Coefficients, h_PolynomialUIntervals, h_PolynomialVIntervals, h_TrueUIntervals, h_TrueVIntervals);
	NumCoeffPerSurface->NativeInstance = h_NumCoeffPerSurface.get();
	Coefficients->NativeInstance = h_Coefficients.get();
	PolynomialUIntervals->NativeInstance = h_PolynomialUIntervals.get();
	PolynomialVIntervals->NativeInstance = h_PolynomialVIntervals.get();
	TrueUIntervals->NativeInstance = h_TrueUIntervals.get();
	TrueVIntervals->NativeInstance = h_TrueVIntervals.get();
}

Macad::Occt::Convert_GridPolynomialToPoles::Convert_GridPolynomialToPoles(Macad::Occt::Convert_GridPolynomialToPoles^ parameter1)
	: BaseClass<::Convert_GridPolynomialToPoles>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_GridPolynomialToPoles(*(::Convert_GridPolynomialToPoles*)parameter1->NativeInstance);
}

void Macad::Occt::Convert_GridPolynomialToPoles::Perform(int UContinuity, int VContinuity, int MaxUDegree, int MaxVDegree, Macad::Occt::TColStd_HArray2OfInteger^ NumCoeffPerSurface, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray1OfReal^ PolynomialUIntervals, Macad::Occt::TColStd_HArray1OfReal^ PolynomialVIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueUIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueVIntervals)
{
	Handle(::TColStd_HArray2OfInteger) h_NumCoeffPerSurface = NumCoeffPerSurface->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_Coefficients = Coefficients->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_PolynomialUIntervals = PolynomialUIntervals->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_PolynomialVIntervals = PolynomialVIntervals->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_TrueUIntervals = TrueUIntervals->NativeInstance;
	Handle(::TColStd_HArray1OfReal) h_TrueVIntervals = TrueVIntervals->NativeInstance;
	((::Convert_GridPolynomialToPoles*)_NativeInstance)->Perform(UContinuity, VContinuity, MaxUDegree, MaxVDegree, h_NumCoeffPerSurface, h_Coefficients, h_PolynomialUIntervals, h_PolynomialVIntervals, h_TrueUIntervals, h_TrueVIntervals);
	NumCoeffPerSurface->NativeInstance = h_NumCoeffPerSurface.get();
	Coefficients->NativeInstance = h_Coefficients.get();
	PolynomialUIntervals->NativeInstance = h_PolynomialUIntervals.get();
	PolynomialVIntervals->NativeInstance = h_PolynomialVIntervals.get();
	TrueUIntervals->NativeInstance = h_TrueUIntervals.get();
	TrueVIntervals->NativeInstance = h_TrueVIntervals.get();
}

int Macad::Occt::Convert_GridPolynomialToPoles::NbUPoles()
{
	return ((::Convert_GridPolynomialToPoles*)_NativeInstance)->NbUPoles();
}

int Macad::Occt::Convert_GridPolynomialToPoles::NbVPoles()
{
	return ((::Convert_GridPolynomialToPoles*)_NativeInstance)->NbVPoles();
}

Macad::Occt::TColgp_HArray2OfPnt^ Macad::Occt::Convert_GridPolynomialToPoles::Poles()
{
	Handle(::TColgp_HArray2OfPnt) _result;
	_result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->Poles();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray2OfPnt::CreateDowncasted( _result.get());
}

int Macad::Occt::Convert_GridPolynomialToPoles::UDegree()
{
	return ((::Convert_GridPolynomialToPoles*)_NativeInstance)->UDegree();
}

int Macad::Occt::Convert_GridPolynomialToPoles::VDegree()
{
	return ((::Convert_GridPolynomialToPoles*)_NativeInstance)->VDegree();
}

int Macad::Occt::Convert_GridPolynomialToPoles::NbUKnots()
{
	return ((::Convert_GridPolynomialToPoles*)_NativeInstance)->NbUKnots();
}

int Macad::Occt::Convert_GridPolynomialToPoles::NbVKnots()
{
	return ((::Convert_GridPolynomialToPoles*)_NativeInstance)->NbVKnots();
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::Convert_GridPolynomialToPoles::UKnots()
{
	Handle(::TColStd_HArray1OfReal) _result;
	_result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->UKnots();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::Convert_GridPolynomialToPoles::VKnots()
{
	Handle(::TColStd_HArray1OfReal) _result;
	_result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->VKnots();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::Convert_GridPolynomialToPoles::UMultiplicities()
{
	Handle(::TColStd_HArray1OfInteger) _result;
	_result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->UMultiplicities();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfInteger::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::Convert_GridPolynomialToPoles::VMultiplicities()
{
	Handle(::TColStd_HArray1OfInteger) _result;
	_result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->VMultiplicities();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfInteger::CreateDowncasted( _result.get());
}

bool Macad::Occt::Convert_GridPolynomialToPoles::IsDone()
{
	return ((::Convert_GridPolynomialToPoles*)_NativeInstance)->IsDone();
}




//---------------------------------------------------------------------
//  Class  Convert_HyperbolaToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::Convert_HyperbolaToBSplineCurve::Convert_HyperbolaToBSplineCurve(Macad::Occt::gp_Hypr2d^ H, double U1, double U2)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_HyperbolaToBSplineCurve(*(::gp_Hypr2d*)H->NativeInstance, U1, U2);
}

Macad::Occt::Convert_HyperbolaToBSplineCurve::Convert_HyperbolaToBSplineCurve(Macad::Occt::Convert_HyperbolaToBSplineCurve^ parameter1)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_HyperbolaToBSplineCurve(*(::Convert_HyperbolaToBSplineCurve*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Convert_ParabolaToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::Convert_ParabolaToBSplineCurve::Convert_ParabolaToBSplineCurve(Macad::Occt::gp_Parab2d^ Prb, double U1, double U2)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_ParabolaToBSplineCurve(*(::gp_Parab2d*)Prb->NativeInstance, U1, U2);
}

Macad::Occt::Convert_ParabolaToBSplineCurve::Convert_ParabolaToBSplineCurve(Macad::Occt::Convert_ParabolaToBSplineCurve^ parameter1)
	: Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_ParabolaToBSplineCurve(*(::Convert_ParabolaToBSplineCurve*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Convert_SphereToBSplineSurface
//---------------------------------------------------------------------

Macad::Occt::Convert_SphereToBSplineSurface::Convert_SphereToBSplineSurface(Macad::Occt::gp_Sphere^ Sph, double U1, double U2, double V1, double V2)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_SphereToBSplineSurface(*(::gp_Sphere*)Sph->NativeInstance, U1, U2, V1, V2);
}

Macad::Occt::Convert_SphereToBSplineSurface::Convert_SphereToBSplineSurface(Macad::Occt::gp_Sphere^ Sph, double Param1, double Param2, bool UTrim)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_SphereToBSplineSurface(*(::gp_Sphere*)Sph->NativeInstance, Param1, Param2, UTrim);
}

Macad::Occt::Convert_SphereToBSplineSurface::Convert_SphereToBSplineSurface(Macad::Occt::gp_Sphere^ Sph, double Param1, double Param2)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_SphereToBSplineSurface(*(::gp_Sphere*)Sph->NativeInstance, Param1, Param2, true);
}

Macad::Occt::Convert_SphereToBSplineSurface::Convert_SphereToBSplineSurface(Macad::Occt::gp_Sphere^ Sph)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_SphereToBSplineSurface(*(::gp_Sphere*)Sph->NativeInstance);
}

Macad::Occt::Convert_SphereToBSplineSurface::Convert_SphereToBSplineSurface(Macad::Occt::Convert_SphereToBSplineSurface^ parameter1)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_SphereToBSplineSurface(*(::Convert_SphereToBSplineSurface*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Convert_TorusToBSplineSurface
//---------------------------------------------------------------------

Macad::Occt::Convert_TorusToBSplineSurface::Convert_TorusToBSplineSurface(Macad::Occt::gp_Torus^ T, double U1, double U2, double V1, double V2)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_TorusToBSplineSurface(*(::gp_Torus*)T->NativeInstance, U1, U2, V1, V2);
}

Macad::Occt::Convert_TorusToBSplineSurface::Convert_TorusToBSplineSurface(Macad::Occt::gp_Torus^ T, double Param1, double Param2, bool UTrim)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_TorusToBSplineSurface(*(::gp_Torus*)T->NativeInstance, Param1, Param2, UTrim);
}

Macad::Occt::Convert_TorusToBSplineSurface::Convert_TorusToBSplineSurface(Macad::Occt::gp_Torus^ T, double Param1, double Param2)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_TorusToBSplineSurface(*(::gp_Torus*)T->NativeInstance, Param1, Param2, true);
}

Macad::Occt::Convert_TorusToBSplineSurface::Convert_TorusToBSplineSurface(Macad::Occt::gp_Torus^ T)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_TorusToBSplineSurface(*(::gp_Torus*)T->NativeInstance);
}

Macad::Occt::Convert_TorusToBSplineSurface::Convert_TorusToBSplineSurface(Macad::Occt::Convert_TorusToBSplineSurface^ parameter1)
	: Macad::Occt::Convert_ElementarySurfaceToBSplineSurface(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Convert_TorusToBSplineSurface(*(::Convert_TorusToBSplineSurface*)parameter1->NativeInstance);
}



