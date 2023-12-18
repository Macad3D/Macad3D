// Generated wrapper code for package Geom2dConvert

#include "OcctPCH.h"
#include "Geom2dConvert.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Geom2d.h"
#include "Convert.h"
#include "TColStd.h"
#include "gp.h"
#include "Adaptor2d.h"
#include "GeomAbs.h"


//---------------------------------------------------------------------
//  Class  Geom2dConvert_SequenceOfPPoint
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_SequenceOfPPoint::Geom2dConvert_SequenceOfPPoint()
    : Macad::Occt::BaseClass<::Geom2dConvert_SequenceOfPPoint>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_SequenceOfPPoint();
}

Macad::Occt::Geom2dConvert_SequenceOfPPoint::Geom2dConvert_SequenceOfPPoint(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Geom2dConvert_SequenceOfPPoint>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_SequenceOfPPoint(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Geom2dConvert_SequenceOfPPoint::Size()
{
    int _result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Geom2dConvert_SequenceOfPPoint::Length()
{
    int _result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Geom2dConvert_SequenceOfPPoint::Lower()
{
    int _result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Geom2dConvert_SequenceOfPPoint::Upper()
{
    int _result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::Geom2dConvert_SequenceOfPPoint::IsEmpty()
{
    bool _result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::Geom2dConvert_SequenceOfPPoint::Reverse()
{
    ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Reverse();
}

void Macad::Occt::Geom2dConvert_SequenceOfPPoint::Exchange(int I, int J)
{
    ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Geom2dConvert_SequenceOfPPoint::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Geom2dConvert_SequenceOfPPoint::Clear()
{
    ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Geom2dConvert_SequenceOfPPoint^ Macad::Occt::Geom2dConvert_SequenceOfPPoint::Assign(Macad::Occt::Geom2dConvert_SequenceOfPPoint^ theOther)
{
    ::Geom2dConvert_SequenceOfPPoint* _result = new ::Geom2dConvert_SequenceOfPPoint();
    *_result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Assign(*(::Geom2dConvert_SequenceOfPPoint*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Geom2dConvert_SequenceOfPPoint(_result);
}

void Macad::Occt::Geom2dConvert_SequenceOfPPoint::Remove(Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator^ thePosition)
{
    ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Remove(*(::Geom2dConvert_SequenceOfPPoint::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::Geom2dConvert_SequenceOfPPoint::Append(Macad::Occt::Geom2dConvert_PPoint^ theItem)
{
    ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Append(*(::Geom2dConvert_PPoint*)theItem->NativeInstance);
}

void Macad::Occt::Geom2dConvert_SequenceOfPPoint::Prepend(Macad::Occt::Geom2dConvert_PPoint^ theItem)
{
    ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Prepend(*(::Geom2dConvert_PPoint*)theItem->NativeInstance);
}

void Macad::Occt::Geom2dConvert_SequenceOfPPoint::InsertBefore(int theIndex, Macad::Occt::Geom2dConvert_PPoint^ theItem)
{
    ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->InsertBefore(theIndex, *(::Geom2dConvert_PPoint*)theItem->NativeInstance);
}

void Macad::Occt::Geom2dConvert_SequenceOfPPoint::InsertAfter(Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator^ thePosition, Macad::Occt::Geom2dConvert_PPoint^ theItem)
{
    ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->InsertAfter(*(::Geom2dConvert_SequenceOfPPoint::Iterator*)thePosition->NativeInstance, *(::Geom2dConvert_PPoint*)theItem->NativeInstance);
}

void Macad::Occt::Geom2dConvert_SequenceOfPPoint::Split(int theIndex, Macad::Occt::Geom2dConvert_SequenceOfPPoint^ theSeq)
{
    ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Split(theIndex, *(::Geom2dConvert_SequenceOfPPoint*)theSeq->NativeInstance);
}

Macad::Occt::Geom2dConvert_PPoint^ Macad::Occt::Geom2dConvert_SequenceOfPPoint::First()
{
    ::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
    *_result = (::Geom2dConvert_PPoint)((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Geom2dConvert_PPoint(_result);
}

Macad::Occt::Geom2dConvert_PPoint^ Macad::Occt::Geom2dConvert_SequenceOfPPoint::ChangeFirst()
{
    ::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
    *_result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Geom2dConvert_PPoint(_result);
}

Macad::Occt::Geom2dConvert_PPoint^ Macad::Occt::Geom2dConvert_SequenceOfPPoint::Last()
{
    ::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
    *_result = (::Geom2dConvert_PPoint)((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Geom2dConvert_PPoint(_result);
}

Macad::Occt::Geom2dConvert_PPoint^ Macad::Occt::Geom2dConvert_SequenceOfPPoint::ChangeLast()
{
    ::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
    *_result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Geom2dConvert_PPoint(_result);
}

Macad::Occt::Geom2dConvert_PPoint^ Macad::Occt::Geom2dConvert_SequenceOfPPoint::Value(int theIndex)
{
    ::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
    *_result = (::Geom2dConvert_PPoint)((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Geom2dConvert_PPoint(_result);
}

Macad::Occt::Geom2dConvert_PPoint^ Macad::Occt::Geom2dConvert_SequenceOfPPoint::ChangeValue(int theIndex)
{
    ::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
    *_result = ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Geom2dConvert_PPoint(_result);
}

void Macad::Occt::Geom2dConvert_SequenceOfPPoint::SetValue(int theIndex, Macad::Occt::Geom2dConvert_PPoint^ theItem)
{
    ((::Geom2dConvert_SequenceOfPPoint*)_NativeInstance)->SetValue(theIndex, *(::Geom2dConvert_PPoint*)theItem->NativeInstance);
}

System::Collections::Generic::IEnumerator<Macad::Occt::Geom2dConvert_PPoint^>^ Macad::Occt::Geom2dConvert_SequenceOfPPoint::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Geom2dConvert_PPoint^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Geom2dConvert_SequenceOfPPoint::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Geom2dConvert_PPoint^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_SequenceOfPPoint::Iterator
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Geom2dConvert_SequenceOfPPoint::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_SequenceOfPPoint::Iterator();
}

bool Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator::More()
{
    bool _result = ((::Geom2dConvert_SequenceOfPPoint::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator::Next()
{
    ((::Geom2dConvert_SequenceOfPPoint::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Geom2dConvert_PPoint^ Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator::Value()
{
    ::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
    *_result = (::Geom2dConvert_PPoint)((::Geom2dConvert_SequenceOfPPoint::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Geom2dConvert_PPoint(_result);
}

Macad::Occt::Geom2dConvert_PPoint^ Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator::ChangeValue()
{
    ::Geom2dConvert_PPoint* _result = new ::Geom2dConvert_PPoint();
    *_result = ((::Geom2dConvert_SequenceOfPPoint::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Geom2dConvert_PPoint(_result);
}

bool Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator::IsEqual(Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator^ theOther)
{
    bool _result = ((::Geom2dConvert_SequenceOfPPoint::Iterator*)_NativeInstance)->IsEqual(*(::Geom2dConvert_SequenceOfPPoint::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Geom2dConvert_SequenceOfPPoint::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert::Geom2dConvert()
    : Macad::Occt::BaseClass<::Geom2dConvert>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert();
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, int FromK1, int ToK2, bool SameOrientation)
{
    Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::SplitBSplineCurve(Handle(::Geom2d_BSplineCurve)(C->NativeInstance), FromK1, ToK2, SameOrientation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, int FromK1, int ToK2)
{
    Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::SplitBSplineCurve(Handle(::Geom2d_BSplineCurve)(C->NativeInstance), FromK1, ToK2, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance, bool SameOrientation)
{
    Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::SplitBSplineCurve(Handle(::Geom2d_BSplineCurve)(C->NativeInstance), FromU1, ToU2, ParametricTolerance, SameOrientation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::SplitBSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ C, double FromU1, double ToU2, double ParametricTolerance)
{
    Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::SplitBSplineCurve(Handle(::Geom2d_BSplineCurve)(C->NativeInstance), FromU1, ToU2, ParametricTolerance, true);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::CurveToBSplineCurve(Macad::Occt::Geom2d_Curve^ C, Macad::Occt::Convert_ParameterisationType Parameterisation)
{
    Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::CurveToBSplineCurve(Handle(::Geom2d_Curve)(C->NativeInstance), (::Convert_ParameterisationType)Parameterisation);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert::CurveToBSplineCurve(Macad::Occt::Geom2d_Curve^ C)
{
    Handle(::Geom2d_BSplineCurve) _result = ::Geom2dConvert::CurveToBSplineCurve(Handle(::Geom2d_Curve)(C->NativeInstance), Convert_TgtThetaOver2);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

void Macad::Occt::Geom2dConvert::C0BSplineToC1BSplineCurve(Macad::Occt::Geom2d_BSplineCurve^ BS, double Tolerance)
{
    Handle(::Geom2d_BSplineCurve) h_BS = BS->NativeInstance;
    ::Geom2dConvert::C0BSplineToC1BSplineCurve(h_BS, Tolerance);
    BS->NativeInstance = h_BS.get();
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_PPoint
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_PPoint::Geom2dConvert_PPoint()
    : Macad::Occt::BaseClass<::Geom2dConvert_PPoint>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_PPoint();
}

Macad::Occt::Geom2dConvert_PPoint::Geom2dConvert_PPoint(double theParameter, Macad::Occt::XY thePoint, Macad::Occt::XY theD1)
    : Macad::Occt::BaseClass<::Geom2dConvert_PPoint>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::XY> pp_thePoint = &thePoint;
    pin_ptr<Macad::Occt::XY> pp_theD1 = &theD1;
    _NativeInstance = new ::Geom2dConvert_PPoint(theParameter, *(gp_XY*)pp_thePoint, *(gp_XY*)pp_theD1);
}

Macad::Occt::Geom2dConvert_PPoint::Geom2dConvert_PPoint(double theParameter, Macad::Occt::Adaptor2d_Curve2d^ theAdaptor)
    : Macad::Occt::BaseClass<::Geom2dConvert_PPoint>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_PPoint(theParameter, *(::Adaptor2d_Curve2d*)theAdaptor->NativeInstance);
}

double Macad::Occt::Geom2dConvert_PPoint::Dist(Macad::Occt::Geom2dConvert_PPoint^ theOth)
{
    double _result = ((::Geom2dConvert_PPoint*)_NativeInstance)->Dist(*(::Geom2dConvert_PPoint*)theOth->NativeInstance);
    return _result;
}

double Macad::Occt::Geom2dConvert_PPoint::Parameter()
{
    double _result = ((::Geom2dConvert_PPoint*)_NativeInstance)->Parameter();
    return _result;
}

Macad::Occt::XY Macad::Occt::Geom2dConvert_PPoint::Point()
{
    ::gp_XY _nativeResult = ((::Geom2dConvert_PPoint*)_NativeInstance)->Point();
    return Macad::Occt::XY(_nativeResult);
}

Macad::Occt::XY Macad::Occt::Geom2dConvert_PPoint::D1()
{
    ::gp_XY _nativeResult = ((::Geom2dConvert_PPoint*)_NativeInstance)->D1();
    return Macad::Occt::XY(_nativeResult);
}

void Macad::Occt::Geom2dConvert_PPoint::SetD1(Macad::Occt::XY theD1)
{
    pin_ptr<Macad::Occt::XY> pp_theD1 = &theD1;
    ((::Geom2dConvert_PPoint*)_NativeInstance)->SetD1(*(gp_XY*)pp_theD1);
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_ApproxArcsSegments
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_ApproxArcsSegments::Geom2dConvert_ApproxArcsSegments(Macad::Occt::Adaptor2d_Curve2d^ theCurve, double theTolerance, double theAngleTol)
    : Macad::Occt::BaseClass<::Geom2dConvert_ApproxArcsSegments>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_ApproxArcsSegments(*(::Adaptor2d_Curve2d*)theCurve->NativeInstance, theTolerance, theAngleTol);
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_ApproxCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_ApproxCurve::Geom2dConvert_ApproxCurve(Macad::Occt::Geom2d_Curve^ Curve, double Tol2d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree)
    : Macad::Occt::BaseClass<::Geom2dConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_ApproxCurve(Handle(::Geom2d_Curve)(Curve->NativeInstance), Tol2d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
}

Macad::Occt::Geom2dConvert_ApproxCurve::Geom2dConvert_ApproxCurve(Macad::Occt::Adaptor2d_Curve2d^ Curve, double Tol2d, Macad::Occt::GeomAbs_Shape Order, int MaxSegments, int MaxDegree)
    : Macad::Occt::BaseClass<::Geom2dConvert_ApproxCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_ApproxCurve(Handle(::Adaptor2d_Curve2d)(Curve->NativeInstance), Tol2d, (::GeomAbs_Shape)Order, MaxSegments, MaxDegree);
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert_ApproxCurve::Curve()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

bool Macad::Occt::Geom2dConvert_ApproxCurve::IsDone()
{
    bool _result = ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::Geom2dConvert_ApproxCurve::HasResult()
{
    bool _result = ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->HasResult();
    return _result;
}

double Macad::Occt::Geom2dConvert_ApproxCurve::MaxError()
{
    double _result = ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->MaxError();
    return _result;
}

void Macad::Occt::Geom2dConvert_ApproxCurve::Dump(System::IO::TextWriter^ o)
{
    std::ostringstream oss_o;
    ((::Geom2dConvert_ApproxCurve*)_NativeInstance)->Dump(oss_o);
    o->Write(gcnew System::String(oss_o.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_BSplineCurveKnotSplitting
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting::Geom2dConvert_BSplineCurveKnotSplitting(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve, int ContinuityRange)
    : Macad::Occt::BaseClass<::Geom2dConvert_BSplineCurveKnotSplitting>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_BSplineCurveKnotSplitting(Handle(::Geom2d_BSplineCurve)(BasisCurve->NativeInstance), ContinuityRange);
}

int Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting::NbSplits()
{
    int _result = ((::Geom2dConvert_BSplineCurveKnotSplitting*)_NativeInstance)->NbSplits();
    return _result;
}

void Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting::Splitting(Macad::Occt::TColStd_Array1OfInteger^ SplitValues)
{
    ((::Geom2dConvert_BSplineCurveKnotSplitting*)_NativeInstance)->Splitting(*(::TColStd_Array1OfInteger*)SplitValues->NativeInstance);
}

int Macad::Occt::Geom2dConvert_BSplineCurveKnotSplitting::SplitValue(int Index)
{
    int _result = ((::Geom2dConvert_BSplineCurveKnotSplitting*)_NativeInstance)->SplitValue(Index);
    return _result;
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_BSplineCurveToBezierCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::Geom2dConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve)
    : Macad::Occt::BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_BSplineCurveToBezierCurve(Handle(::Geom2d_BSplineCurve)(BasisCurve->NativeInstance));
}

Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::Geom2dConvert_BSplineCurveToBezierCurve(Macad::Occt::Geom2d_BSplineCurve^ BasisCurve, double U1, double U2, double ParametricTolerance)
    : Macad::Occt::BaseClass<::Geom2dConvert_BSplineCurveToBezierCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_BSplineCurveToBezierCurve(Handle(::Geom2d_BSplineCurve)(BasisCurve->NativeInstance), U1, U2, ParametricTolerance);
}

Macad::Occt::Geom2d_BezierCurve^ Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::Arc(int Index)
{
    Handle(::Geom2d_BezierCurve) _result = ((::Geom2dConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Arc(Index);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BezierCurve::CreateDowncasted(_result.get());
}

void Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::Knots(Macad::Occt::TColStd_Array1OfReal^ TKnots)
{
    ((::Geom2dConvert_BSplineCurveToBezierCurve*)_NativeInstance)->Knots(*(::TColStd_Array1OfReal*)TKnots->NativeInstance);
}

int Macad::Occt::Geom2dConvert_BSplineCurveToBezierCurve::NbArcs()
{
    int _result = ((::Geom2dConvert_BSplineCurveToBezierCurve*)_NativeInstance)->NbArcs();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Geom2dConvert_CompCurveToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Convert_ParameterisationType Parameterisation)
    : Macad::Occt::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve((::Convert_ParameterisationType)Parameterisation);
}

Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve()
    : Macad::Occt::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve(Convert_TgtThetaOver2);
}

Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Geom2d_BoundedCurve^ BasisCurve, Macad::Occt::Convert_ParameterisationType Parameterisation)
    : Macad::Occt::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve(Handle(::Geom2d_BoundedCurve)(BasisCurve->NativeInstance), (::Convert_ParameterisationType)Parameterisation);
}

Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Geom2dConvert_CompCurveToBSplineCurve(Macad::Occt::Geom2d_BoundedCurve^ BasisCurve)
    : Macad::Occt::BaseClass<::Geom2dConvert_CompCurveToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Geom2dConvert_CompCurveToBSplineCurve(Handle(::Geom2d_BoundedCurve)(BasisCurve->NativeInstance), Convert_TgtThetaOver2);
}

bool Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom2d_BoundedCurve^ NewCurve, double Tolerance, bool After)
{
    bool _result = ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom2d_BoundedCurve)(NewCurve->NativeInstance), Tolerance, After);
    return _result;
}

bool Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Add(Macad::Occt::Geom2d_BoundedCurve^ NewCurve, double Tolerance)
{
    bool _result = ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->Add(Handle(::Geom2d_BoundedCurve)(NewCurve->NativeInstance), Tolerance, false);
    return _result;
}

Macad::Occt::Geom2d_BSplineCurve^ Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::BSplineCurve()
{
    Handle(::Geom2d_BSplineCurve) _result = ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->BSplineCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_BSplineCurve::CreateDowncasted(_result.get());
}

void Macad::Occt::Geom2dConvert_CompCurveToBSplineCurve::Clear()
{
    ((::Geom2dConvert_CompCurveToBSplineCurve*)_NativeInstance)->Clear();
}


