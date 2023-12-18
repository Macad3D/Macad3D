// Generated wrapper code for package BRepAdaptor

#include "OcctPCH.h"
#include "BRepAdaptor.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "Adaptor3d.h"
#include "gp.h"
#include "GeomAdaptor.h"
#include "GeomAbs.h"
#include "TColStd.h"
#include "Geom.h"
#include "Adaptor2d.h"


//---------------------------------------------------------------------
//  Class  BRepAdaptor_Array1OfCurve
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve()
    : Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAdaptor_Array1OfCurve();
}

Macad::Occt::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAdaptor_Array1OfCurve(theLower, theUpper);
}

Macad::Occt::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve(Macad::Occt::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAdaptor_Array1OfCurve(*(::BRepAdaptor_Curve*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::BRepAdaptor_Array1OfCurve::BRepAdaptor_Array1OfCurve(Macad::Occt::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::BRepAdaptor_Array1OfCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepAdaptor_Array1OfCurve(*(::BRepAdaptor_Curve*)theBegin->NativeInstance, theLower, theUpper, true);
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::Init(Macad::Occt::BRepAdaptor_Curve^ theValue)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Init(*(::BRepAdaptor_Curve*)theValue->NativeInstance);
}

int Macad::Occt::BRepAdaptor_Array1OfCurve::Size()
{
    int _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::BRepAdaptor_Array1OfCurve::Length()
{
    int _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::BRepAdaptor_Array1OfCurve::IsEmpty()
{
    bool _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::BRepAdaptor_Array1OfCurve::Lower()
{
    int _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::BRepAdaptor_Array1OfCurve::Upper()
{
    int _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::BRepAdaptor_Array1OfCurve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Assign(Macad::Occt::BRepAdaptor_Array1OfCurve^ theOther)
{
    ::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
    *_result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Assign(*(::BRepAdaptor_Array1OfCurve*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Array1OfCurve(_result);
}

Macad::Occt::BRepAdaptor_Array1OfCurve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Move(Macad::Occt::BRepAdaptor_Array1OfCurve^ theOther)
{
    ::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
    *_result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Move(*(::BRepAdaptor_Array1OfCurve*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Array1OfCurve(_result);
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::First()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->First();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::ChangeFirst()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->ChangeFirst();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Last()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Last();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::ChangeLast()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->ChangeLast();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::Value(int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Value(theIndex);
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Array1OfCurve::ChangeValue(int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->ChangeValue(theIndex);
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::SetValue(int theIndex, Macad::Occt::BRepAdaptor_Curve^ theItem)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->SetValue(theIndex, *(::BRepAdaptor_Curve*)theItem->NativeInstance);
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::UpdateLowerBound(int theLower)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::UpdateUpperBound(int theUpper)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::BRepAdaptor_Array1OfCurve::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::BRepAdaptor_Array1OfCurve::IsDeletable()
{
    bool _result = ((::BRepAdaptor_Array1OfCurve*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::BRepAdaptor_Curve^>^ Macad::Occt::BRepAdaptor_Array1OfCurve::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepAdaptor_Curve^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::BRepAdaptor_Array1OfCurve::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepAdaptor_Curve^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Array1OfCurve::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Curve
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_Curve::BRepAdaptor_Curve()
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve();
}

Macad::Occt::BRepAdaptor_Curve::BRepAdaptor_Curve(Macad::Occt::TopoDS_Edge^ E)
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve(*(::TopoDS_Edge*)E->NativeInstance);
}

Macad::Occt::BRepAdaptor_Curve::BRepAdaptor_Curve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_Curve::ShallowCopy()
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_Curve*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRepAdaptor_Curve::Reset()
{
    ((::BRepAdaptor_Curve*)_NativeInstance)->Reset();
}

void Macad::Occt::BRepAdaptor_Curve::Initialize(Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepAdaptor_Curve*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepAdaptor_Curve::Initialize(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepAdaptor_Curve*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::Trsf Macad::Occt::BRepAdaptor_Curve::Trsf()
{
    ::gp_Trsf _nativeResult = ((::BRepAdaptor_Curve*)_NativeInstance)->Trsf();
    return Macad::Occt::Trsf(_nativeResult);
}

bool Macad::Occt::BRepAdaptor_Curve::Is3DCurve()
{
    bool _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Is3DCurve();
    return _result;
}

bool Macad::Occt::BRepAdaptor_Curve::IsCurveOnSurface()
{
    bool _result = ((::BRepAdaptor_Curve*)_NativeInstance)->IsCurveOnSurface();
    return _result;
}

Macad::Occt::GeomAdaptor_Curve^ Macad::Occt::BRepAdaptor_Curve::Curve()
{
    const ::GeomAdaptor_Curve& _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Curve();
    return gcnew Macad::Occt::GeomAdaptor_Curve((::GeomAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::Adaptor3d_CurveOnSurface^ Macad::Occt::BRepAdaptor_Curve::CurveOnSurface()
{
    const ::Adaptor3d_CurveOnSurface& _result = ((::BRepAdaptor_Curve*)_NativeInstance)->CurveOnSurface();
    return gcnew Macad::Occt::Adaptor3d_CurveOnSurface((::Adaptor3d_CurveOnSurface*)_result.ShallowCopy().get());
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepAdaptor_Curve::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepAdaptor_Curve*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

double Macad::Occt::BRepAdaptor_Curve::Tolerance()
{
    double _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Tolerance();
    return _result;
}

double Macad::Occt::BRepAdaptor_Curve::FirstParameter()
{
    double _result = ((::BRepAdaptor_Curve*)_NativeInstance)->FirstParameter();
    return _result;
}

double Macad::Occt::BRepAdaptor_Curve::LastParameter()
{
    double _result = ((::BRepAdaptor_Curve*)_NativeInstance)->LastParameter();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepAdaptor_Curve::Continuity()
{
    ::GeomAbs_Shape _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Continuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::BRepAdaptor_Curve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::BRepAdaptor_Curve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void Macad::Occt::BRepAdaptor_Curve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::BRepAdaptor_Curve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_Curve::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

bool Macad::Occt::BRepAdaptor_Curve::IsClosed()
{
    bool _result = ((::BRepAdaptor_Curve*)_NativeInstance)->IsClosed();
    return _result;
}

bool Macad::Occt::BRepAdaptor_Curve::IsPeriodic()
{
    bool _result = ((::BRepAdaptor_Curve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double Macad::Occt::BRepAdaptor_Curve::Period()
{
    double _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Period();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::BRepAdaptor_Curve::Value(double U)
{
    ::gp_Pnt _nativeResult = ((::BRepAdaptor_Curve*)_NativeInstance)->Value(U);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::BRepAdaptor_Curve::D0(double U, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::BRepAdaptor_Curve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void Macad::Occt::BRepAdaptor_Curve::D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_V = &V;
    ((::BRepAdaptor_Curve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void Macad::Occt::BRepAdaptor_Curve::D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
    pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
    ((::BRepAdaptor_Curve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::BRepAdaptor_Curve::D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
    pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
    pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
    ((::BRepAdaptor_Curve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

Macad::Occt::Vec Macad::Occt::BRepAdaptor_Curve::DN(double U, int N)
{
    ::gp_Vec _nativeResult = ((::BRepAdaptor_Curve*)_NativeInstance)->DN(U, N);
    return Macad::Occt::Vec(_nativeResult);
}

double Macad::Occt::BRepAdaptor_Curve::Resolution(double R3d)
{
    double _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Resolution(R3d);
    return _result;
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::BRepAdaptor_Curve::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::BRepAdaptor_Curve*)_NativeInstance)->GetType();
    return (Macad::Occt::GeomAbs_CurveType)_result;
}

Macad::Occt::gp_Lin^ Macad::Occt::BRepAdaptor_Curve::Line()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Line();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::BRepAdaptor_Curve::Circle()
{
    ::gp_Circ* _result = new ::gp_Circ();
    *_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Circle();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::BRepAdaptor_Curve::Ellipse()
{
    ::gp_Elips* _result = new ::gp_Elips();
    *_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Ellipse();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::BRepAdaptor_Curve::Hyperbola()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Hyperbola();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::BRepAdaptor_Curve::Parabola()
{
    ::gp_Parab* _result = new ::gp_Parab();
    *_result = ((::BRepAdaptor_Curve*)_NativeInstance)->Parabola();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

int Macad::Occt::BRepAdaptor_Curve::Degree()
{
    int _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Degree();
    return _result;
}

bool Macad::Occt::BRepAdaptor_Curve::IsRational()
{
    bool _result = ((::BRepAdaptor_Curve*)_NativeInstance)->IsRational();
    return _result;
}

int Macad::Occt::BRepAdaptor_Curve::NbPoles()
{
    int _result = ((::BRepAdaptor_Curve*)_NativeInstance)->NbPoles();
    return _result;
}

int Macad::Occt::BRepAdaptor_Curve::NbKnots()
{
    int _result = ((::BRepAdaptor_Curve*)_NativeInstance)->NbKnots();
    return _result;
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::BRepAdaptor_Curve::Bezier()
{
    Handle(::Geom_BezierCurve) _result = ((::BRepAdaptor_Curve*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::BRepAdaptor_Curve::BSpline()
{
    Handle(::Geom_BSplineCurve) _result = ((::BRepAdaptor_Curve*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_OffsetCurve^ Macad::Occt::BRepAdaptor_Curve::OffsetCurve()
{
    Handle(::Geom_OffsetCurve) _result = ((::BRepAdaptor_Curve*)_NativeInstance)->OffsetCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_OffsetCurve::CreateDowncasted(_result.get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_Curve::CreateDowncasted(::BRepAdaptor_Curve* instance)
{
    return gcnew Macad::Occt::BRepAdaptor_Curve( instance );
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_HArray1OfCurve
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve();
}

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(int theLower, int theUpper)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve(theLower, theUpper);
}

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(int theLower, int theUpper, Macad::Occt::BRepAdaptor_Curve^ theValue)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve(theLower, theUpper, *(::BRepAdaptor_Curve*)theValue->NativeInstance);
}

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(Macad::Occt::BRepAdaptor_Curve^ theBegin, int theLower, int theUpper, bool parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve(*(::BRepAdaptor_Curve*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

Macad::Occt::BRepAdaptor_HArray1OfCurve::BRepAdaptor_HArray1OfCurve(Macad::Occt::BRepAdaptor_Array1OfCurve^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_HArray1OfCurve(*(::BRepAdaptor_Array1OfCurve*)theOther->NativeInstance);
}

Macad::Occt::BRepAdaptor_Array1OfCurve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::Array1()
{
    ::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
    *_result = (::BRepAdaptor_Array1OfCurve)((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Array1();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Array1OfCurve(_result);
}

Macad::Occt::BRepAdaptor_Array1OfCurve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::ChangeArray1()
{
    ::BRepAdaptor_Array1OfCurve* _result = new ::BRepAdaptor_Array1OfCurve();
    *_result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeArray1();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepAdaptor_Array1OfCurve(_result);
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::Init(Macad::Occt::BRepAdaptor_Curve^ theValue)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Init(*(::BRepAdaptor_Curve*)theValue->NativeInstance);
}

int Macad::Occt::BRepAdaptor_HArray1OfCurve::Size()
{
    int _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::BRepAdaptor_HArray1OfCurve::Length()
{
    int _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::BRepAdaptor_HArray1OfCurve::IsEmpty()
{
    bool _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::BRepAdaptor_HArray1OfCurve::Lower()
{
    int _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::BRepAdaptor_HArray1OfCurve::Upper()
{
    int _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::BRepAdaptor_HArray1OfCurve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::Assign(Macad::Occt::BRepAdaptor_HArray1OfCurve^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::BRepAdaptor_HArray1OfCurve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::Move(Macad::Occt::BRepAdaptor_HArray1OfCurve^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::First()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->First();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::ChangeFirst()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeFirst();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::Last()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Last();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::ChangeLast()
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeLast();
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::Value(int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Value(theIndex);
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

Macad::Occt::BRepAdaptor_Curve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::ChangeValue(int theIndex)
{
    const ::BRepAdaptor_Curve& _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->ChangeValue(theIndex);
    return gcnew Macad::Occt::BRepAdaptor_Curve((::BRepAdaptor_Curve*)_result.ShallowCopy().get());
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::SetValue(int theIndex, Macad::Occt::BRepAdaptor_Curve^ theItem)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->SetValue(theIndex, *(::BRepAdaptor_Curve*)theItem->NativeInstance);
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::UpdateLowerBound(int theLower)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::UpdateUpperBound(int theUpper)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::BRepAdaptor_HArray1OfCurve::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::BRepAdaptor_HArray1OfCurve::IsDeletable()
{
    bool _result = ((::BRepAdaptor_HArray1OfCurve*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::BRepAdaptor_HArray1OfCurve^ Macad::Occt::BRepAdaptor_HArray1OfCurve::CreateDowncasted(::BRepAdaptor_HArray1OfCurve* instance)
{
    return gcnew Macad::Occt::BRepAdaptor_HArray1OfCurve( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::BRepAdaptor_Curve^>^ Macad::Occt::BRepAdaptor_HArray1OfCurve::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepAdaptor_Curve^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::BRepAdaptor_HArray1OfCurve::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepAdaptor_Curve^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_HArray1OfCurve::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  BRepAdaptor_CompCurve
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve()
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_CompCurve();
}

Macad::Occt::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa)
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_CompCurve(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa);
}

Macad::Occt::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_CompCurve(*(::TopoDS_Wire*)W->NativeInstance, false);
}

Macad::Occt::BRepAdaptor_CompCurve::BRepAdaptor_CompCurve(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa, double First, double Last, double Tol)
    : Macad::Occt::Adaptor3d_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_CompCurve(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa, First, Last, Tol);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_CompCurve::ShallowCopy()
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

void Macad::Occt::BRepAdaptor_CompCurve::Initialize(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa)
{
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->Initialize(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa);
}

void Macad::Occt::BRepAdaptor_CompCurve::Initialize(Macad::Occt::TopoDS_Wire^ W, bool KnotByCurvilinearAbcissa, double First, double Last, double Tol)
{
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->Initialize(*(::TopoDS_Wire*)W->NativeInstance, KnotByCurvilinearAbcissa, First, Last, Tol);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepAdaptor_CompCurve::Wire()
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = (::TopoDS_Wire)((::BRepAdaptor_CompCurve*)_NativeInstance)->Wire();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

void Macad::Occt::BRepAdaptor_CompCurve::Edge(double U, Macad::Occt::TopoDS_Edge^ E, double% UonE)
{
    pin_ptr<double> pp_UonE = &UonE;
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->Edge(U, *(::TopoDS_Edge*)E->NativeInstance, *(double*)pp_UonE);
}

double Macad::Occt::BRepAdaptor_CompCurve::FirstParameter()
{
    double _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->FirstParameter();
    return _result;
}

double Macad::Occt::BRepAdaptor_CompCurve::LastParameter()
{
    double _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->LastParameter();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepAdaptor_CompCurve::Continuity()
{
    ::GeomAbs_Shape _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Continuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::BRepAdaptor_CompCurve::NbIntervals(Macad::Occt::GeomAbs_Shape S)
{
    int _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->NbIntervals((::GeomAbs_Shape)S);
    return _result;
}

void Macad::Occt::BRepAdaptor_CompCurve::Intervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->Intervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_CompCurve::Trim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Trim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

bool Macad::Occt::BRepAdaptor_CompCurve::IsClosed()
{
    bool _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->IsClosed();
    return _result;
}

bool Macad::Occt::BRepAdaptor_CompCurve::IsPeriodic()
{
    bool _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->IsPeriodic();
    return _result;
}

double Macad::Occt::BRepAdaptor_CompCurve::Period()
{
    double _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Period();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::BRepAdaptor_CompCurve::Value(double U)
{
    ::gp_Pnt _nativeResult = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Value(U);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::BRepAdaptor_CompCurve::D0(double U, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->D0(U, *(gp_Pnt*)pp_P);
}

void Macad::Occt::BRepAdaptor_CompCurve::D1(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_V = &V;
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->D1(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V);
}

void Macad::Occt::BRepAdaptor_CompCurve::D2(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
    pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->D2(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2);
}

void Macad::Occt::BRepAdaptor_CompCurve::D3(double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1, Macad::Occt::Vec% V2, Macad::Occt::Vec% V3)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_V1 = &V1;
    pin_ptr<Macad::Occt::Vec> pp_V2 = &V2;
    pin_ptr<Macad::Occt::Vec> pp_V3 = &V3;
    ((::BRepAdaptor_CompCurve*)_NativeInstance)->D3(U, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_V1, *(gp_Vec*)pp_V2, *(gp_Vec*)pp_V3);
}

Macad::Occt::Vec Macad::Occt::BRepAdaptor_CompCurve::DN(double U, int N)
{
    ::gp_Vec _nativeResult = ((::BRepAdaptor_CompCurve*)_NativeInstance)->DN(U, N);
    return Macad::Occt::Vec(_nativeResult);
}

double Macad::Occt::BRepAdaptor_CompCurve::Resolution(double R3d)
{
    double _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Resolution(R3d);
    return _result;
}

Macad::Occt::GeomAbs_CurveType Macad::Occt::BRepAdaptor_CompCurve::GetCurveType()
{
    ::GeomAbs_CurveType _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->GetType();
    return (Macad::Occt::GeomAbs_CurveType)_result;
}

Macad::Occt::gp_Lin^ Macad::Occt::BRepAdaptor_CompCurve::Line()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Line();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

Macad::Occt::gp_Circ^ Macad::Occt::BRepAdaptor_CompCurve::Circle()
{
    ::gp_Circ* _result = new ::gp_Circ();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Circle();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

Macad::Occt::gp_Elips^ Macad::Occt::BRepAdaptor_CompCurve::Ellipse()
{
    ::gp_Elips* _result = new ::gp_Elips();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Ellipse();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::BRepAdaptor_CompCurve::Hyperbola()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Hyperbola();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Parab^ Macad::Occt::BRepAdaptor_CompCurve::Parabola()
{
    ::gp_Parab* _result = new ::gp_Parab();
    *_result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Parabola();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

int Macad::Occt::BRepAdaptor_CompCurve::Degree()
{
    int _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Degree();
    return _result;
}

bool Macad::Occt::BRepAdaptor_CompCurve::IsRational()
{
    bool _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->IsRational();
    return _result;
}

int Macad::Occt::BRepAdaptor_CompCurve::NbPoles()
{
    int _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->NbPoles();
    return _result;
}

int Macad::Occt::BRepAdaptor_CompCurve::NbKnots()
{
    int _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->NbKnots();
    return _result;
}

Macad::Occt::Geom_BezierCurve^ Macad::Occt::BRepAdaptor_CompCurve::Bezier()
{
    Handle(::Geom_BezierCurve) _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierCurve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineCurve^ Macad::Occt::BRepAdaptor_CompCurve::BSpline()
{
    Handle(::Geom_BSplineCurve) _result = ((::BRepAdaptor_CompCurve*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineCurve::CreateDowncasted(_result.get());
}

Macad::Occt::BRepAdaptor_CompCurve^ Macad::Occt::BRepAdaptor_CompCurve::CreateDowncasted(::BRepAdaptor_CompCurve* instance)
{
    return gcnew Macad::Occt::BRepAdaptor_CompCurve( instance );
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Curve2d
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_Curve2d::BRepAdaptor_Curve2d()
    : Macad::Occt::Geom2dAdaptor_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve2d();
}

Macad::Occt::BRepAdaptor_Curve2d::BRepAdaptor_Curve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::Geom2dAdaptor_Curve(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Curve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::Adaptor2d_Curve2d^ Macad::Occt::BRepAdaptor_Curve2d::ShallowCopy()
{
    Handle(::Adaptor2d_Curve2d) _result = ((::BRepAdaptor_Curve2d*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor2d_Curve2d::CreateDowncasted(_result.get());
}

void Macad::Occt::BRepAdaptor_Curve2d::Initialize(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepAdaptor_Curve2d*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepAdaptor_Curve2d::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepAdaptor_Curve2d*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepAdaptor_Curve2d::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepAdaptor_Curve2d*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::BRepAdaptor_Curve2d^ Macad::Occt::BRepAdaptor_Curve2d::CreateDowncasted(::BRepAdaptor_Curve2d* instance)
{
    return gcnew Macad::Occt::BRepAdaptor_Curve2d( instance );
}



//---------------------------------------------------------------------
//  Class  BRepAdaptor_Surface
//---------------------------------------------------------------------

Macad::Occt::BRepAdaptor_Surface::BRepAdaptor_Surface()
    : Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Surface();
}

Macad::Occt::BRepAdaptor_Surface::BRepAdaptor_Surface(Macad::Occt::TopoDS_Face^ F, bool R)
    : Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Surface(*(::TopoDS_Face*)F->NativeInstance, R);
}

Macad::Occt::BRepAdaptor_Surface::BRepAdaptor_Surface(Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::Adaptor3d_Surface(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepAdaptor_Surface(*(::TopoDS_Face*)F->NativeInstance, true);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::BRepAdaptor_Surface::ShallowCopy()
{
    Handle(::Adaptor3d_Surface) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->ShallowCopy();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

void Macad::Occt::BRepAdaptor_Surface::Initialize(Macad::Occt::TopoDS_Face^ F, bool Restriction)
{
    ((::BRepAdaptor_Surface*)_NativeInstance)->Initialize(*(::TopoDS_Face*)F->NativeInstance, Restriction);
}

void Macad::Occt::BRepAdaptor_Surface::Initialize(Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepAdaptor_Surface*)_NativeInstance)->Initialize(*(::TopoDS_Face*)F->NativeInstance, true);
}

Macad::Occt::GeomAdaptor_Surface^ Macad::Occt::BRepAdaptor_Surface::Surface()
{
    const ::GeomAdaptor_Surface& _result = ((::BRepAdaptor_Surface*)_NativeInstance)->Surface();
    return gcnew Macad::Occt::GeomAdaptor_Surface((::GeomAdaptor_Surface*)_result.ShallowCopy().get());
}

Macad::Occt::GeomAdaptor_Surface^ Macad::Occt::BRepAdaptor_Surface::ChangeSurface()
{
    const ::GeomAdaptor_Surface& _result = ((::BRepAdaptor_Surface*)_NativeInstance)->ChangeSurface();
    return gcnew Macad::Occt::GeomAdaptor_Surface((::GeomAdaptor_Surface*)_result.ShallowCopy().get());
}

Macad::Occt::Trsf Macad::Occt::BRepAdaptor_Surface::Trsf()
{
    ::gp_Trsf _nativeResult = ((::BRepAdaptor_Surface*)_NativeInstance)->Trsf();
    return Macad::Occt::Trsf(_nativeResult);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepAdaptor_Surface::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepAdaptor_Surface*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

double Macad::Occt::BRepAdaptor_Surface::Tolerance()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->Tolerance();
    return _result;
}

double Macad::Occt::BRepAdaptor_Surface::FirstUParameter()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->FirstUParameter();
    return _result;
}

double Macad::Occt::BRepAdaptor_Surface::LastUParameter()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->LastUParameter();
    return _result;
}

double Macad::Occt::BRepAdaptor_Surface::FirstVParameter()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->FirstVParameter();
    return _result;
}

double Macad::Occt::BRepAdaptor_Surface::LastVParameter()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->LastVParameter();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepAdaptor_Surface::UContinuity()
{
    ::GeomAbs_Shape _result = ((::BRepAdaptor_Surface*)_NativeInstance)->UContinuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepAdaptor_Surface::VContinuity()
{
    ::GeomAbs_Shape _result = ((::BRepAdaptor_Surface*)_NativeInstance)->VContinuity();
    return (Macad::Occt::GeomAbs_Shape)_result;
}

int Macad::Occt::BRepAdaptor_Surface::NbUIntervals(Macad::Occt::GeomAbs_Shape theSh)
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->NbUIntervals((::GeomAbs_Shape)theSh);
    return _result;
}

int Macad::Occt::BRepAdaptor_Surface::NbVIntervals(Macad::Occt::GeomAbs_Shape theSh)
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->NbVIntervals((::GeomAbs_Shape)theSh);
    return _result;
}

void Macad::Occt::BRepAdaptor_Surface::UIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::BRepAdaptor_Surface*)_NativeInstance)->UIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

void Macad::Occt::BRepAdaptor_Surface::VIntervals(Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S)
{
    ((::BRepAdaptor_Surface*)_NativeInstance)->VIntervals(*(::TColStd_Array1OfReal*)T->NativeInstance, (::GeomAbs_Shape)S);
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::BRepAdaptor_Surface::UTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->UTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::BRepAdaptor_Surface::VTrim(double First, double Last, double Tol)
{
    Handle(::Adaptor3d_Surface) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->VTrim(First, Last, Tol);
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

bool Macad::Occt::BRepAdaptor_Surface::IsUClosed()
{
    bool _result = ((::BRepAdaptor_Surface*)_NativeInstance)->IsUClosed();
    return _result;
}

bool Macad::Occt::BRepAdaptor_Surface::IsVClosed()
{
    bool _result = ((::BRepAdaptor_Surface*)_NativeInstance)->IsVClosed();
    return _result;
}

bool Macad::Occt::BRepAdaptor_Surface::IsUPeriodic()
{
    bool _result = ((::BRepAdaptor_Surface*)_NativeInstance)->IsUPeriodic();
    return _result;
}

double Macad::Occt::BRepAdaptor_Surface::UPeriod()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->UPeriod();
    return _result;
}

bool Macad::Occt::BRepAdaptor_Surface::IsVPeriodic()
{
    bool _result = ((::BRepAdaptor_Surface*)_NativeInstance)->IsVPeriodic();
    return _result;
}

double Macad::Occt::BRepAdaptor_Surface::VPeriod()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->VPeriod();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::BRepAdaptor_Surface::Value(double U, double V)
{
    ::gp_Pnt _nativeResult = ((::BRepAdaptor_Surface*)_NativeInstance)->Value(U, V);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::BRepAdaptor_Surface::D0(double U, double V, Macad::Occt::Pnt% P)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    ((::BRepAdaptor_Surface*)_NativeInstance)->D0(U, V, *(gp_Pnt*)pp_P);
}

void Macad::Occt::BRepAdaptor_Surface::D1(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
    pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
    ((::BRepAdaptor_Surface*)_NativeInstance)->D1(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V);
}

void Macad::Occt::BRepAdaptor_Surface::D2(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
    pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
    pin_ptr<Macad::Occt::Vec> pp_D2U = &D2U;
    pin_ptr<Macad::Occt::Vec> pp_D2V = &D2V;
    pin_ptr<Macad::Occt::Vec> pp_D2UV = &D2UV;
    ((::BRepAdaptor_Surface*)_NativeInstance)->D2(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV);
}

void Macad::Occt::BRepAdaptor_Surface::D3(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% D1U, Macad::Occt::Vec% D1V, Macad::Occt::Vec% D2U, Macad::Occt::Vec% D2V, Macad::Occt::Vec% D2UV, Macad::Occt::Vec% D3U, Macad::Occt::Vec% D3V, Macad::Occt::Vec% D3UUV, Macad::Occt::Vec% D3UVV)
{
    pin_ptr<Macad::Occt::Pnt> pp_P = &P;
    pin_ptr<Macad::Occt::Vec> pp_D1U = &D1U;
    pin_ptr<Macad::Occt::Vec> pp_D1V = &D1V;
    pin_ptr<Macad::Occt::Vec> pp_D2U = &D2U;
    pin_ptr<Macad::Occt::Vec> pp_D2V = &D2V;
    pin_ptr<Macad::Occt::Vec> pp_D2UV = &D2UV;
    pin_ptr<Macad::Occt::Vec> pp_D3U = &D3U;
    pin_ptr<Macad::Occt::Vec> pp_D3V = &D3V;
    pin_ptr<Macad::Occt::Vec> pp_D3UUV = &D3UUV;
    pin_ptr<Macad::Occt::Vec> pp_D3UVV = &D3UVV;
    ((::BRepAdaptor_Surface*)_NativeInstance)->D3(U, V, *(gp_Pnt*)pp_P, *(gp_Vec*)pp_D1U, *(gp_Vec*)pp_D1V, *(gp_Vec*)pp_D2U, *(gp_Vec*)pp_D2V, *(gp_Vec*)pp_D2UV, *(gp_Vec*)pp_D3U, *(gp_Vec*)pp_D3V, *(gp_Vec*)pp_D3UUV, *(gp_Vec*)pp_D3UVV);
}

Macad::Occt::Vec Macad::Occt::BRepAdaptor_Surface::DN(double U, double V, int Nu, int Nv)
{
    ::gp_Vec _nativeResult = ((::BRepAdaptor_Surface*)_NativeInstance)->DN(U, V, Nu, Nv);
    return Macad::Occt::Vec(_nativeResult);
}

double Macad::Occt::BRepAdaptor_Surface::UResolution(double theR3d)
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->UResolution(theR3d);
    return _result;
}

double Macad::Occt::BRepAdaptor_Surface::VResolution(double theR3d)
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->VResolution(theR3d);
    return _result;
}

Macad::Occt::GeomAbs_SurfaceType Macad::Occt::BRepAdaptor_Surface::GetSurfaceType()
{
    ::GeomAbs_SurfaceType _result = ((::BRepAdaptor_Surface*)_NativeInstance)->GetType();
    return (Macad::Occt::GeomAbs_SurfaceType)_result;
}

Macad::Occt::Pln Macad::Occt::BRepAdaptor_Surface::Plane()
{
    ::gp_Pln _nativeResult = ((::BRepAdaptor_Surface*)_NativeInstance)->Plane();
    return Macad::Occt::Pln(_nativeResult);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::BRepAdaptor_Surface::Cylinder()
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    *_result = ((::BRepAdaptor_Surface*)_NativeInstance)->Cylinder();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

Macad::Occt::gp_Cone^ Macad::Occt::BRepAdaptor_Surface::Cone()
{
    ::gp_Cone* _result = new ::gp_Cone();
    *_result = ((::BRepAdaptor_Surface*)_NativeInstance)->Cone();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

Macad::Occt::gp_Sphere^ Macad::Occt::BRepAdaptor_Surface::Sphere()
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    *_result = ((::BRepAdaptor_Surface*)_NativeInstance)->Sphere();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

Macad::Occt::gp_Torus^ Macad::Occt::BRepAdaptor_Surface::Torus()
{
    ::gp_Torus* _result = new ::gp_Torus();
    *_result = ((::BRepAdaptor_Surface*)_NativeInstance)->Torus();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

int Macad::Occt::BRepAdaptor_Surface::UDegree()
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->UDegree();
    return _result;
}

int Macad::Occt::BRepAdaptor_Surface::NbUPoles()
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->NbUPoles();
    return _result;
}

int Macad::Occt::BRepAdaptor_Surface::VDegree()
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->VDegree();
    return _result;
}

int Macad::Occt::BRepAdaptor_Surface::NbVPoles()
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->NbVPoles();
    return _result;
}

int Macad::Occt::BRepAdaptor_Surface::NbUKnots()
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->NbUKnots();
    return _result;
}

int Macad::Occt::BRepAdaptor_Surface::NbVKnots()
{
    int _result = ((::BRepAdaptor_Surface*)_NativeInstance)->NbVKnots();
    return _result;
}

bool Macad::Occt::BRepAdaptor_Surface::IsURational()
{
    bool _result = ((::BRepAdaptor_Surface*)_NativeInstance)->IsURational();
    return _result;
}

bool Macad::Occt::BRepAdaptor_Surface::IsVRational()
{
    bool _result = ((::BRepAdaptor_Surface*)_NativeInstance)->IsVRational();
    return _result;
}

Macad::Occt::Geom_BezierSurface^ Macad::Occt::BRepAdaptor_Surface::Bezier()
{
    Handle(::Geom_BezierSurface) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->Bezier();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BezierSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_BSplineSurface^ Macad::Occt::BRepAdaptor_Surface::BSpline()
{
    Handle(::Geom_BSplineSurface) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->BSpline();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_BSplineSurface::CreateDowncasted(_result.get());
}

Macad::Occt::Ax1 Macad::Occt::BRepAdaptor_Surface::AxeOfRevolution()
{
    ::gp_Ax1 _nativeResult = ((::BRepAdaptor_Surface*)_NativeInstance)->AxeOfRevolution();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Dir Macad::Occt::BRepAdaptor_Surface::Direction()
{
    ::gp_Dir _nativeResult = ((::BRepAdaptor_Surface*)_NativeInstance)->Direction();
    return Macad::Occt::Dir(_nativeResult);
}

Macad::Occt::Adaptor3d_Curve^ Macad::Occt::BRepAdaptor_Surface::BasisCurve()
{
    Handle(::Adaptor3d_Curve) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->BasisCurve();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Adaptor3d_Surface^ Macad::Occt::BRepAdaptor_Surface::BasisSurface()
{
    Handle(::Adaptor3d_Surface) _result = ((::BRepAdaptor_Surface*)_NativeInstance)->BasisSurface();
    return _result.IsNull() ? nullptr : Macad::Occt::Adaptor3d_Surface::CreateDowncasted(_result.get());
}

double Macad::Occt::BRepAdaptor_Surface::OffsetValue()
{
    double _result = ((::BRepAdaptor_Surface*)_NativeInstance)->OffsetValue();
    return _result;
}

Macad::Occt::BRepAdaptor_Surface^ Macad::Occt::BRepAdaptor_Surface::CreateDowncasted(::BRepAdaptor_Surface* instance)
{
    return gcnew Macad::Occt::BRepAdaptor_Surface( instance );
}


