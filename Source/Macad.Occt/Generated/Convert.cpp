// Generated wrapper code for package Convert

#include "OcctPCH.h"
#include "Convert.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TColgp.h"
#include "gp.h"
#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  Convert_SequenceOfArray1OfPoles2d
//---------------------------------------------------------------------

Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Convert_SequenceOfArray1OfPoles2d()
    : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_SequenceOfArray1OfPoles2d();
}

Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Convert_SequenceOfArray1OfPoles2d(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_SequenceOfArray1OfPoles2d(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Size()
{
    int _result = ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Length()
{
    int _result = ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Lower()
{
    int _result = ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Upper()
{
    int _result = ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::Convert_SequenceOfArray1OfPoles2d::IsEmpty()
{
    bool _result = ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Reverse()
{
    ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Reverse();
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Exchange(int I, int J)
{
    ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Clear()
{
    ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Convert_SequenceOfArray1OfPoles2d^ Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Assign(Macad::Occt::Convert_SequenceOfArray1OfPoles2d^ theOther)
{
    ::Convert_SequenceOfArray1OfPoles2d* _result = new ::Convert_SequenceOfArray1OfPoles2d();
    *_result = ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Assign(*(::Convert_SequenceOfArray1OfPoles2d*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Convert_SequenceOfArray1OfPoles2d(_result);
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Remove(Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator^ thePosition)
{
    ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Remove(*(::Convert_SequenceOfArray1OfPoles2d::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Append(Macad::Occt::TColgp_HArray1OfPnt2d^ theItem)
{
    ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Append(Handle(::TColgp_HArray1OfPnt2d)(theItem->NativeInstance));
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Prepend(Macad::Occt::TColgp_HArray1OfPnt2d^ theItem)
{
    ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Prepend(Handle(::TColgp_HArray1OfPnt2d)(theItem->NativeInstance));
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles2d::InsertBefore(int theIndex, Macad::Occt::TColgp_HArray1OfPnt2d^ theItem)
{
    ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->InsertBefore(theIndex, Handle(::TColgp_HArray1OfPnt2d)(theItem->NativeInstance));
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles2d::InsertAfter(Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator^ thePosition, Macad::Occt::TColgp_HArray1OfPnt2d^ theItem)
{
    ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->InsertAfter(*(::Convert_SequenceOfArray1OfPoles2d::Iterator*)thePosition->NativeInstance, Handle(::TColgp_HArray1OfPnt2d)(theItem->NativeInstance));
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Split(int theIndex, Macad::Occt::Convert_SequenceOfArray1OfPoles2d^ theSeq)
{
    ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Split(theIndex, *(::Convert_SequenceOfArray1OfPoles2d*)theSeq->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::Convert_SequenceOfArray1OfPoles2d::First()
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::Convert_SequenceOfArray1OfPoles2d::ChangeFirst()
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Last()
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::Convert_SequenceOfArray1OfPoles2d::ChangeLast()
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Value(int theIndex)
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::Convert_SequenceOfArray1OfPoles2d::ChangeValue(int theIndex)
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles2d::SetValue(int theIndex, Macad::Occt::TColgp_HArray1OfPnt2d^ theItem)
{
    ((::Convert_SequenceOfArray1OfPoles2d*)_NativeInstance)->SetValue(theIndex, Handle(::TColgp_HArray1OfPnt2d)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::TColgp_HArray1OfPnt2d^>^ Macad::Occt::Convert_SequenceOfArray1OfPoles2d::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TColgp_HArray1OfPnt2d^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Convert_SequenceOfArray1OfPoles2d::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TColgp_HArray1OfPnt2d^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Convert_SequenceOfArray1OfPoles2d::Iterator
//---------------------------------------------------------------------

Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles2d::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_SequenceOfArray1OfPoles2d::Iterator();
}

bool Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator::More()
{
    bool _result = ((::Convert_SequenceOfArray1OfPoles2d::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator::Next()
{
    ((::Convert_SequenceOfArray1OfPoles2d::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator::Value()
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::Convert_SequenceOfArray1OfPoles2d::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator::ChangeValue()
{
    Handle(::TColgp_HArray1OfPnt2d) _result = ((::Convert_SequenceOfArray1OfPoles2d::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted(_result.get());
}

bool Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator::IsEqual(Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator^ theOther)
{
    bool _result = ((::Convert_SequenceOfArray1OfPoles2d::Iterator*)_NativeInstance)->IsEqual(*(::Convert_SequenceOfArray1OfPoles2d::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Convert_SequenceOfArray1OfPoles2d::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Convert_SequenceOfArray1OfPoles
//---------------------------------------------------------------------

Macad::Occt::Convert_SequenceOfArray1OfPoles::Convert_SequenceOfArray1OfPoles()
    : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_SequenceOfArray1OfPoles();
}

Macad::Occt::Convert_SequenceOfArray1OfPoles::Convert_SequenceOfArray1OfPoles(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_SequenceOfArray1OfPoles(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Convert_SequenceOfArray1OfPoles::Size()
{
    int _result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Convert_SequenceOfArray1OfPoles::Length()
{
    int _result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Convert_SequenceOfArray1OfPoles::Lower()
{
    int _result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Convert_SequenceOfArray1OfPoles::Upper()
{
    int _result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::Convert_SequenceOfArray1OfPoles::IsEmpty()
{
    bool _result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
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

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Remove(Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator^ thePosition)
{
    ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Remove(*(::Convert_SequenceOfArray1OfPoles::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Append(Macad::Occt::TColgp_HArray1OfPnt^ theItem)
{
    ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Append(Handle(::TColgp_HArray1OfPnt)(theItem->NativeInstance));
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Prepend(Macad::Occt::TColgp_HArray1OfPnt^ theItem)
{
    ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Prepend(Handle(::TColgp_HArray1OfPnt)(theItem->NativeInstance));
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::InsertBefore(int theIndex, Macad::Occt::TColgp_HArray1OfPnt^ theItem)
{
    ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->InsertBefore(theIndex, Handle(::TColgp_HArray1OfPnt)(theItem->NativeInstance));
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::InsertAfter(Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator^ thePosition, Macad::Occt::TColgp_HArray1OfPnt^ theItem)
{
    ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->InsertAfter(*(::Convert_SequenceOfArray1OfPoles::Iterator*)thePosition->NativeInstance, Handle(::TColgp_HArray1OfPnt)(theItem->NativeInstance));
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Split(int theIndex, Macad::Occt::Convert_SequenceOfArray1OfPoles^ theSeq)
{
    ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Split(theIndex, *(::Convert_SequenceOfArray1OfPoles*)theSeq->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::First()
{
    Handle(::TColgp_HArray1OfPnt) _result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::ChangeFirst()
{
    Handle(::TColgp_HArray1OfPnt) _result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::Last()
{
    Handle(::TColgp_HArray1OfPnt) _result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::ChangeLast()
{
    Handle(::TColgp_HArray1OfPnt) _result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::Value(int theIndex)
{
    Handle(::TColgp_HArray1OfPnt) _result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::ChangeValue(int theIndex)
{
    Handle(::TColgp_HArray1OfPnt) _result = ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted(_result.get());
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::SetValue(int theIndex, Macad::Occt::TColgp_HArray1OfPnt^ theItem)
{
    ((::Convert_SequenceOfArray1OfPoles*)_NativeInstance)->SetValue(theIndex, Handle(::TColgp_HArray1OfPnt)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::TColgp_HArray1OfPnt^>^ Macad::Occt::Convert_SequenceOfArray1OfPoles::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TColgp_HArray1OfPnt^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Convert_SequenceOfArray1OfPoles::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TColgp_HArray1OfPnt^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Convert_SequenceOfArray1OfPoles::Iterator
//---------------------------------------------------------------------

Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Convert_SequenceOfArray1OfPoles::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_SequenceOfArray1OfPoles::Iterator();
}

bool Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator::More()
{
    bool _result = ((::Convert_SequenceOfArray1OfPoles::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator::Next()
{
    ((::Convert_SequenceOfArray1OfPoles::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator::Value()
{
    Handle(::TColgp_HArray1OfPnt) _result = ((::Convert_SequenceOfArray1OfPoles::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted(_result.get());
}

Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator::ChangeValue()
{
    Handle(::TColgp_HArray1OfPnt) _result = ((::Convert_SequenceOfArray1OfPoles::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted(_result.get());
}

bool Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator::IsEqual(Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator^ theOther)
{
    bool _result = ((::Convert_SequenceOfArray1OfPoles::Iterator*)_NativeInstance)->IsEqual(*(::Convert_SequenceOfArray1OfPoles::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Convert_SequenceOfArray1OfPoles::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Convert_ConicToBSplineCurve
//---------------------------------------------------------------------

int Macad::Occt::Convert_ConicToBSplineCurve::Degree()
{
    int _result = ((::Convert_ConicToBSplineCurve*)_NativeInstance)->Degree();
    return _result;
}

int Macad::Occt::Convert_ConicToBSplineCurve::NbPoles()
{
    int _result = ((::Convert_ConicToBSplineCurve*)_NativeInstance)->NbPoles();
    return _result;
}

int Macad::Occt::Convert_ConicToBSplineCurve::NbKnots()
{
    int _result = ((::Convert_ConicToBSplineCurve*)_NativeInstance)->NbKnots();
    return _result;
}

bool Macad::Occt::Convert_ConicToBSplineCurve::IsPeriodic()
{
    bool _result = ((::Convert_ConicToBSplineCurve*)_NativeInstance)->IsPeriodic();
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::Convert_ConicToBSplineCurve::Pole(int Index)
{
    ::gp_Pnt2d _nativeResult = ((::Convert_ConicToBSplineCurve*)_NativeInstance)->Pole(Index);
    return Macad::Occt::Pnt2d(_nativeResult);
}

double Macad::Occt::Convert_ConicToBSplineCurve::Weight(int Index)
{
    double _result = ((::Convert_ConicToBSplineCurve*)_NativeInstance)->Weight(Index);
    return _result;
}

double Macad::Occt::Convert_ConicToBSplineCurve::Knot(int Index)
{
    double _result = ((::Convert_ConicToBSplineCurve*)_NativeInstance)->Knot(Index);
    return _result;
}

int Macad::Occt::Convert_ConicToBSplineCurve::Multiplicity(int Index)
{
    int _result = ((::Convert_ConicToBSplineCurve*)_NativeInstance)->Multiplicity(Index);
    return _result;
}

void Macad::Occt::Convert_ConicToBSplineCurve::BuildCosAndSin(Macad::Occt::Convert_ParameterisationType Parametrisation, Macad::Occt::TColStd_HArray1OfReal^ CosNumerator, Macad::Occt::TColStd_HArray1OfReal^ SinNumerator, Macad::Occt::TColStd_HArray1OfReal^ Denominator, int% Degree, Macad::Occt::TColStd_HArray1OfReal^ Knots, Macad::Occt::TColStd_HArray1OfInteger^ Mults)
{
    Handle(::TColStd_HArray1OfReal) h_CosNumerator = CosNumerator->NativeInstance;
    Handle(::TColStd_HArray1OfReal) h_SinNumerator = SinNumerator->NativeInstance;
    Handle(::TColStd_HArray1OfReal) h_Denominator = Denominator->NativeInstance;
    pin_ptr<int> pp_Degree = &Degree;
    Handle(::TColStd_HArray1OfReal) h_Knots = Knots->NativeInstance;
    Handle(::TColStd_HArray1OfInteger) h_Mults = Mults->NativeInstance;
    ((::Convert_ConicToBSplineCurve*)_NativeInstance)->BuildCosAndSin((::Convert_ParameterisationType)Parametrisation, h_CosNumerator, h_SinNumerator, h_Denominator, *(int*)pp_Degree, h_Knots, h_Mults);
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
    ((::Convert_ConicToBSplineCurve*)_NativeInstance)->BuildCosAndSin((::Convert_ParameterisationType)Parametrisation, UFirst, ULast, h_CosNumerator, h_SinNumerator, h_Denominator, *(int*)pp_Degree, h_Knots, h_Mults);
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



//---------------------------------------------------------------------
//  Class  Convert_CompBezierCurves2dToBSplineCurve2d
//---------------------------------------------------------------------

Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::Convert_CompBezierCurves2dToBSplineCurve2d(double AngularTolerance)
    : Macad::Occt::BaseClass<::Convert_CompBezierCurves2dToBSplineCurve2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_CompBezierCurves2dToBSplineCurve2d(AngularTolerance);
}

Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::Convert_CompBezierCurves2dToBSplineCurve2d()
    : Macad::Occt::BaseClass<::Convert_CompBezierCurves2dToBSplineCurve2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_CompBezierCurves2dToBSplineCurve2d(1.0E-4);
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
    int _result = ((::Convert_CompBezierCurves2dToBSplineCurve2d*)_NativeInstance)->Degree();
    return _result;
}

int Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::NbPoles()
{
    int _result = ((::Convert_CompBezierCurves2dToBSplineCurve2d*)_NativeInstance)->NbPoles();
    return _result;
}

void Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::Poles(Macad::Occt::TColgp_Array1OfPnt2d^ Poles)
{
    ((::Convert_CompBezierCurves2dToBSplineCurve2d*)_NativeInstance)->Poles(*(::TColgp_Array1OfPnt2d*)Poles->NativeInstance);
}

int Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::NbKnots()
{
    int _result = ((::Convert_CompBezierCurves2dToBSplineCurve2d*)_NativeInstance)->NbKnots();
    return _result;
}

void Macad::Occt::Convert_CompBezierCurves2dToBSplineCurve2d::KnotsAndMults(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults)
{
    ((::Convert_CompBezierCurves2dToBSplineCurve2d*)_NativeInstance)->KnotsAndMults(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Convert_CompBezierCurvesToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::Convert_CompBezierCurvesToBSplineCurve(double AngularTolerance)
    : Macad::Occt::BaseClass<::Convert_CompBezierCurvesToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_CompBezierCurvesToBSplineCurve(AngularTolerance);
}

Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::Convert_CompBezierCurvesToBSplineCurve()
    : Macad::Occt::BaseClass<::Convert_CompBezierCurvesToBSplineCurve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_CompBezierCurvesToBSplineCurve(1.0E-4);
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
    int _result = ((::Convert_CompBezierCurvesToBSplineCurve*)_NativeInstance)->Degree();
    return _result;
}

int Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::NbPoles()
{
    int _result = ((::Convert_CompBezierCurvesToBSplineCurve*)_NativeInstance)->NbPoles();
    return _result;
}

void Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::Poles(Macad::Occt::TColgp_Array1OfPnt^ Poles)
{
    ((::Convert_CompBezierCurvesToBSplineCurve*)_NativeInstance)->Poles(*(::TColgp_Array1OfPnt*)Poles->NativeInstance);
}

int Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::NbKnots()
{
    int _result = ((::Convert_CompBezierCurvesToBSplineCurve*)_NativeInstance)->NbKnots();
    return _result;
}

void Macad::Occt::Convert_CompBezierCurvesToBSplineCurve::KnotsAndMults(Macad::Occt::TColStd_Array1OfReal^ Knots, Macad::Occt::TColStd_Array1OfInteger^ Mults)
{
    ((::Convert_CompBezierCurvesToBSplineCurve*)_NativeInstance)->KnotsAndMults(*(::TColStd_Array1OfReal*)Knots->NativeInstance, *(::TColStd_Array1OfInteger*)Mults->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Convert_CompPolynomialToPoles
//---------------------------------------------------------------------

Macad::Occt::Convert_CompPolynomialToPoles::Convert_CompPolynomialToPoles(int NumCurves, int Continuity, int Dimension, int MaxDegree, Macad::Occt::TColStd_HArray1OfInteger^ NumCoeffPerCurve, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray2OfReal^ PolynomialIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueIntervals)
    : Macad::Occt::BaseClass<::Convert_CompPolynomialToPoles>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_CompPolynomialToPoles(NumCurves, Continuity, Dimension, MaxDegree, Handle(::TColStd_HArray1OfInteger)(NumCoeffPerCurve->NativeInstance), Handle(::TColStd_HArray1OfReal)(Coefficients->NativeInstance), Handle(::TColStd_HArray2OfReal)(PolynomialIntervals->NativeInstance), Handle(::TColStd_HArray1OfReal)(TrueIntervals->NativeInstance));
}

Macad::Occt::Convert_CompPolynomialToPoles::Convert_CompPolynomialToPoles(int NumCurves, int Dimension, int MaxDegree, Macad::Occt::TColStd_Array1OfInteger^ Continuity, Macad::Occt::TColStd_Array1OfInteger^ NumCoeffPerCurve, Macad::Occt::TColStd_Array1OfReal^ Coefficients, Macad::Occt::TColStd_Array2OfReal^ PolynomialIntervals, Macad::Occt::TColStd_Array1OfReal^ TrueIntervals)
    : Macad::Occt::BaseClass<::Convert_CompPolynomialToPoles>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_CompPolynomialToPoles(NumCurves, Dimension, MaxDegree, *(::TColStd_Array1OfInteger*)Continuity->NativeInstance, *(::TColStd_Array1OfInteger*)NumCoeffPerCurve->NativeInstance, *(::TColStd_Array1OfReal*)Coefficients->NativeInstance, *(::TColStd_Array2OfReal*)PolynomialIntervals->NativeInstance, *(::TColStd_Array1OfReal*)TrueIntervals->NativeInstance);
}

Macad::Occt::Convert_CompPolynomialToPoles::Convert_CompPolynomialToPoles(int Dimension, int MaxDegree, int Degree, Macad::Occt::TColStd_Array1OfReal^ Coefficients, Macad::Occt::TColStd_Array1OfReal^ PolynomialIntervals, Macad::Occt::TColStd_Array1OfReal^ TrueIntervals)
    : Macad::Occt::BaseClass<::Convert_CompPolynomialToPoles>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_CompPolynomialToPoles(Dimension, MaxDegree, Degree, *(::TColStd_Array1OfReal*)Coefficients->NativeInstance, *(::TColStd_Array1OfReal*)PolynomialIntervals->NativeInstance, *(::TColStd_Array1OfReal*)TrueIntervals->NativeInstance);
}

int Macad::Occt::Convert_CompPolynomialToPoles::NbPoles()
{
    int _result = ((::Convert_CompPolynomialToPoles*)_NativeInstance)->NbPoles();
    return _result;
}

void Macad::Occt::Convert_CompPolynomialToPoles::Poles(Macad::Occt::TColStd_HArray2OfReal^ Poles)
{
    Handle(::TColStd_HArray2OfReal) h_Poles = Poles->NativeInstance;
    ((::Convert_CompPolynomialToPoles*)_NativeInstance)->Poles(h_Poles);
    Poles->NativeInstance = h_Poles.get();
}

int Macad::Occt::Convert_CompPolynomialToPoles::Degree()
{
    int _result = ((::Convert_CompPolynomialToPoles*)_NativeInstance)->Degree();
    return _result;
}

int Macad::Occt::Convert_CompPolynomialToPoles::NbKnots()
{
    int _result = ((::Convert_CompPolynomialToPoles*)_NativeInstance)->NbKnots();
    return _result;
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
    bool _result = ((::Convert_CompPolynomialToPoles*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Convert_ElementarySurfaceToBSplineSurface
//---------------------------------------------------------------------

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::UDegree()
{
    int _result = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->UDegree();
    return _result;
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::VDegree()
{
    int _result = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->VDegree();
    return _result;
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::NbUPoles()
{
    int _result = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->NbUPoles();
    return _result;
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::NbVPoles()
{
    int _result = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->NbVPoles();
    return _result;
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::NbUKnots()
{
    int _result = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->NbUKnots();
    return _result;
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::NbVKnots()
{
    int _result = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->NbVKnots();
    return _result;
}

bool Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::IsUPeriodic()
{
    bool _result = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->IsUPeriodic();
    return _result;
}

bool Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::IsVPeriodic()
{
    bool _result = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->IsVPeriodic();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::Pole(int UIndex, int VIndex)
{
    ::gp_Pnt _nativeResult = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->Pole(UIndex, VIndex);
    return Macad::Occt::Pnt(_nativeResult);
}

double Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::Weight(int UIndex, int VIndex)
{
    double _result = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->Weight(UIndex, VIndex);
    return _result;
}

double Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::UKnot(int UIndex)
{
    double _result = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->UKnot(UIndex);
    return _result;
}

double Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::VKnot(int UIndex)
{
    double _result = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->VKnot(UIndex);
    return _result;
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::UMultiplicity(int UIndex)
{
    int _result = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->UMultiplicity(UIndex);
    return _result;
}

int Macad::Occt::Convert_ElementarySurfaceToBSplineSurface::VMultiplicity(int VIndex)
{
    int _result = ((::Convert_ElementarySurfaceToBSplineSurface*)_NativeInstance)->VMultiplicity(VIndex);
    return _result;
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



//---------------------------------------------------------------------
//  Class  Convert_GridPolynomialToPoles
//---------------------------------------------------------------------

Macad::Occt::Convert_GridPolynomialToPoles::Convert_GridPolynomialToPoles(int MaxUDegree, int MaxVDegree, Macad::Occt::TColStd_HArray1OfInteger^ NumCoeff, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray1OfReal^ PolynomialUIntervals, Macad::Occt::TColStd_HArray1OfReal^ PolynomialVIntervals)
    : Macad::Occt::BaseClass<::Convert_GridPolynomialToPoles>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_GridPolynomialToPoles(MaxUDegree, MaxVDegree, Handle(::TColStd_HArray1OfInteger)(NumCoeff->NativeInstance), Handle(::TColStd_HArray1OfReal)(Coefficients->NativeInstance), Handle(::TColStd_HArray1OfReal)(PolynomialUIntervals->NativeInstance), Handle(::TColStd_HArray1OfReal)(PolynomialVIntervals->NativeInstance));
}

Macad::Occt::Convert_GridPolynomialToPoles::Convert_GridPolynomialToPoles(int NbUSurfaces, int NBVSurfaces, int UContinuity, int VContinuity, int MaxUDegree, int MaxVDegree, Macad::Occt::TColStd_HArray2OfInteger^ NumCoeffPerSurface, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray1OfReal^ PolynomialUIntervals, Macad::Occt::TColStd_HArray1OfReal^ PolynomialVIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueUIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueVIntervals)
    : Macad::Occt::BaseClass<::Convert_GridPolynomialToPoles>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_GridPolynomialToPoles(NbUSurfaces, NBVSurfaces, UContinuity, VContinuity, MaxUDegree, MaxVDegree, Handle(::TColStd_HArray2OfInteger)(NumCoeffPerSurface->NativeInstance), Handle(::TColStd_HArray1OfReal)(Coefficients->NativeInstance), Handle(::TColStd_HArray1OfReal)(PolynomialUIntervals->NativeInstance), Handle(::TColStd_HArray1OfReal)(PolynomialVIntervals->NativeInstance), Handle(::TColStd_HArray1OfReal)(TrueUIntervals->NativeInstance), Handle(::TColStd_HArray1OfReal)(TrueVIntervals->NativeInstance));
}

void Macad::Occt::Convert_GridPolynomialToPoles::Perform(int UContinuity, int VContinuity, int MaxUDegree, int MaxVDegree, Macad::Occt::TColStd_HArray2OfInteger^ NumCoeffPerSurface, Macad::Occt::TColStd_HArray1OfReal^ Coefficients, Macad::Occt::TColStd_HArray1OfReal^ PolynomialUIntervals, Macad::Occt::TColStd_HArray1OfReal^ PolynomialVIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueUIntervals, Macad::Occt::TColStd_HArray1OfReal^ TrueVIntervals)
{
    ((::Convert_GridPolynomialToPoles*)_NativeInstance)->Perform(UContinuity, VContinuity, MaxUDegree, MaxVDegree, Handle(::TColStd_HArray2OfInteger)(NumCoeffPerSurface->NativeInstance), Handle(::TColStd_HArray1OfReal)(Coefficients->NativeInstance), Handle(::TColStd_HArray1OfReal)(PolynomialUIntervals->NativeInstance), Handle(::TColStd_HArray1OfReal)(PolynomialVIntervals->NativeInstance), Handle(::TColStd_HArray1OfReal)(TrueUIntervals->NativeInstance), Handle(::TColStd_HArray1OfReal)(TrueVIntervals->NativeInstance));
}

int Macad::Occt::Convert_GridPolynomialToPoles::NbUPoles()
{
    int _result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->NbUPoles();
    return _result;
}

int Macad::Occt::Convert_GridPolynomialToPoles::NbVPoles()
{
    int _result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->NbVPoles();
    return _result;
}

Macad::Occt::TColgp_HArray2OfPnt^ Macad::Occt::Convert_GridPolynomialToPoles::Poles()
{
    Handle(::TColgp_HArray2OfPnt) _result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->Poles();
    return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray2OfPnt::CreateDowncasted(_result.get());
}

int Macad::Occt::Convert_GridPolynomialToPoles::UDegree()
{
    int _result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->UDegree();
    return _result;
}

int Macad::Occt::Convert_GridPolynomialToPoles::VDegree()
{
    int _result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->VDegree();
    return _result;
}

int Macad::Occt::Convert_GridPolynomialToPoles::NbUKnots()
{
    int _result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->NbUKnots();
    return _result;
}

int Macad::Occt::Convert_GridPolynomialToPoles::NbVKnots()
{
    int _result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->NbVKnots();
    return _result;
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::Convert_GridPolynomialToPoles::UKnots()
{
    Handle(::TColStd_HArray1OfReal) _result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->UKnots();
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted(_result.get());
}

Macad::Occt::TColStd_HArray1OfReal^ Macad::Occt::Convert_GridPolynomialToPoles::VKnots()
{
    Handle(::TColStd_HArray1OfReal) _result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->VKnots();
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfReal::CreateDowncasted(_result.get());
}

Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::Convert_GridPolynomialToPoles::UMultiplicities()
{
    Handle(::TColStd_HArray1OfInteger) _result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->UMultiplicities();
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfInteger::CreateDowncasted(_result.get());
}

Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::Convert_GridPolynomialToPoles::VMultiplicities()
{
    Handle(::TColStd_HArray1OfInteger) _result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->VMultiplicities();
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfInteger::CreateDowncasted(_result.get());
}

bool Macad::Occt::Convert_GridPolynomialToPoles::IsDone()
{
    bool _result = ((::Convert_GridPolynomialToPoles*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Convert_HyperbolaToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::Convert_HyperbolaToBSplineCurve::Convert_HyperbolaToBSplineCurve(Macad::Occt::gp_Hypr2d^ H, double U1, double U2)
    : Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_HyperbolaToBSplineCurve(*(::gp_Hypr2d*)H->NativeInstance, U1, U2);
}



//---------------------------------------------------------------------
//  Class  Convert_ParabolaToBSplineCurve
//---------------------------------------------------------------------

Macad::Occt::Convert_ParabolaToBSplineCurve::Convert_ParabolaToBSplineCurve(Macad::Occt::gp_Parab2d^ Prb, double U1, double U2)
    : Macad::Occt::Convert_ConicToBSplineCurve(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Convert_ParabolaToBSplineCurve(*(::gp_Parab2d*)Prb->NativeInstance, U1, U2);
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


