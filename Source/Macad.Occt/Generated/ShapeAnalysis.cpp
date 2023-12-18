// Generated wrapper code for package ShapeAnalysis

#include "OcctPCH.h"
#include "ShapeAnalysis.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Bnd.h"
#include "TopoDS.h"
#include "TColStd.h"
#include "gp.h"
#include "Geom.h"
#include "TopTools.h"
#include "Adaptor3d.h"
#include "Geom2d.h"
#include "TColgp.h"
#include "TopLoc.h"
#include "TopAbs.h"
#include "GeomAdaptor.h"


//---------------------------------------------------------------------
//  Class  ShapeAnalysis_BoxBndTree
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_BoxBndTree::ShapeAnalysis_BoxBndTree()
    : Macad::Occt::BaseClass<::ShapeAnalysis_BoxBndTree>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_BoxBndTree();
}

Macad::Occt::ShapeAnalysis_BoxBndTree::ShapeAnalysis_BoxBndTree(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::ShapeAnalysis_BoxBndTree>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_BoxBndTree(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

bool Macad::Occt::ShapeAnalysis_BoxBndTree::Add(int theObj, Macad::Occt::Bnd_Box^ theBnd)
{
    pin_ptr<int> pp_theObj = &theObj;
    bool _result = ((::ShapeAnalysis_BoxBndTree*)_NativeInstance)->Add(*(int*)pp_theObj, *(::Bnd_Box*)theBnd->NativeInstance);
    return _result;
}

void Macad::Occt::ShapeAnalysis_BoxBndTree::Clear(Macad::Occt::NCollection_BaseAllocator^ aNewAlloc)
{
    ((::ShapeAnalysis_BoxBndTree*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(aNewAlloc->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_BoxBndTree::Clear()
{
    ((::ShapeAnalysis_BoxBndTree*)_NativeInstance)->Clear(0L);
}

bool Macad::Occt::ShapeAnalysis_BoxBndTree::IsEmpty()
{
    bool _result = ((::ShapeAnalysis_BoxBndTree*)_NativeInstance)->IsEmpty();
    return _result;
}

Macad::Occt::NCollection_BaseAllocator^ Macad::Occt::ShapeAnalysis_BoxBndTree::Allocator()
{
    Handle(::NCollection_BaseAllocator) _result = ((::ShapeAnalysis_BoxBndTree*)_NativeInstance)->Allocator();
    return _result.IsNull() ? nullptr : Macad::Occt::NCollection_BaseAllocator::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_DataMapOfShapeListOfReal
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::ShapeAnalysis_DataMapOfShapeListOfReal()
    : Macad::Occt::BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_DataMapOfShapeListOfReal();
}

Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::ShapeAnalysis_DataMapOfShapeListOfReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_DataMapOfShapeListOfReal(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::ShapeAnalysis_DataMapOfShapeListOfReal(int theNbBuckets)
    : Macad::Occt::BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_DataMapOfShapeListOfReal(theNbBuckets, 0L);
}

void Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Exchange(Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ theOther)
{
    ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Exchange(*(::ShapeAnalysis_DataMapOfShapeListOfReal*)theOther->NativeInstance);
}

Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Assign(Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ theOther)
{
    ::ShapeAnalysis_DataMapOfShapeListOfReal* _result = new ::ShapeAnalysis_DataMapOfShapeListOfReal();
    *_result = ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Assign(*(::ShapeAnalysis_DataMapOfShapeListOfReal*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal(_result);
}

void Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::ReSize(int N)
{
    ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColStd_ListOfReal^ theItem)
{
    bool _result = ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TColStd_ListOfReal*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TColStd_ListOfReal^ Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColStd_ListOfReal^ theItem)
{
    ::TColStd_ListOfReal* _result = ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TColStd_ListOfReal*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfReal(_result);
}

bool Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TColStd_ListOfReal^ Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    const ::TColStd_ListOfReal* _result = ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfReal((::TColStd_ListOfReal*)_result);
}

Macad::Occt::TColStd_ListOfReal^ Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColStd_ListOfReal* _result = new ::TColStd_ListOfReal();
    *_result = (::TColStd_ListOfReal)((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfReal(_result);
}

Macad::Occt::TColStd_ListOfReal^ Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColStd_ListOfReal* _result = ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfReal(_result);
}

Macad::Occt::TColStd_ListOfReal^ Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColStd_ListOfReal* _result = new ::TColStd_ListOfReal();
    *_result = ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfReal(_result);
}

void Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Clear(bool doReleaseMemory)
{
    ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Clear()
{
    ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Clear(false);
}

int Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Size()
{
    int _result = ((::ShapeAnalysis_DataMapOfShapeListOfReal*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_DataMapOfShapeListOfReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator::Iterator()
    : Macad::Occt::BaseClass<::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator();
}

bool Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator::More()
{
    bool _result = ((::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator::Next()
{
    ((::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TColStd_ListOfReal^ Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator::Value()
{
    ::TColStd_ListOfReal* _result = new ::TColStd_ListOfReal();
    *_result = (::TColStd_ListOfReal)((::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfReal(_result);
}

Macad::Occt::TColStd_ListOfReal^ Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator::ChangeValue()
{
    ::TColStd_ListOfReal* _result = new ::TColStd_ListOfReal();
    *_result = ((::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfReal(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::ShapeAnalysis_DataMapOfShapeListOfReal::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_SequenceOfFreeBounds
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::ShapeAnalysis_SequenceOfFreeBounds()
    : Macad::Occt::BaseClass<::ShapeAnalysis_SequenceOfFreeBounds>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_SequenceOfFreeBounds();
}

Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::ShapeAnalysis_SequenceOfFreeBounds(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::ShapeAnalysis_SequenceOfFreeBounds>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_SequenceOfFreeBounds(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Size()
{
    int _result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Length()
{
    int _result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Lower()
{
    int _result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Upper()
{
    int _result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::IsEmpty()
{
    bool _result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Reverse()
{
    ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Reverse();
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Exchange(int I, int J)
{
    ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Clear()
{
    ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Clear(0L);
}

Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Assign(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theOther)
{
    ::ShapeAnalysis_SequenceOfFreeBounds* _result = new ::ShapeAnalysis_SequenceOfFreeBounds();
    *_result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Assign(*(::ShapeAnalysis_SequenceOfFreeBounds*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds(_result);
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Remove(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator^ thePosition)
{
    ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Remove(*(::ShapeAnalysis_SequenceOfFreeBounds::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Append(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
    ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Append(Handle(::ShapeAnalysis_FreeBoundData)(theItem->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Prepend(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
    ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Prepend(Handle(::ShapeAnalysis_FreeBoundData)(theItem->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::InsertBefore(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
    ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->InsertBefore(theIndex, Handle(::ShapeAnalysis_FreeBoundData)(theItem->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::InsertAfter(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator^ thePosition, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
    ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->InsertAfter(*(::ShapeAnalysis_SequenceOfFreeBounds::Iterator*)thePosition->NativeInstance, Handle(::ShapeAnalysis_FreeBoundData)(theItem->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Split(int theIndex, Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSeq)
{
    ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Split(theIndex, *(::ShapeAnalysis_SequenceOfFreeBounds*)theSeq->NativeInstance);
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::First()
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::ChangeFirst()
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Last()
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::ChangeLast()
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Value(int theIndex)
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::ChangeValue(int theIndex)
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::SetValue(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
    ((::ShapeAnalysis_SequenceOfFreeBounds*)_NativeInstance)->SetValue(theIndex, Handle(::ShapeAnalysis_FreeBoundData)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::ShapeAnalysis_FreeBoundData^>^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::ShapeAnalysis_FreeBoundData^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::ShapeAnalysis_FreeBoundData^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_SequenceOfFreeBounds::Iterator
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator::Iterator()
    : Macad::Occt::BaseClass<::ShapeAnalysis_SequenceOfFreeBounds::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_SequenceOfFreeBounds::Iterator();
}

bool Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator::More()
{
    bool _result = ((::ShapeAnalysis_SequenceOfFreeBounds::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator::Next()
{
    ((::ShapeAnalysis_SequenceOfFreeBounds::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator::Value()
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_SequenceOfFreeBounds::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator::ChangeValue()
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_SequenceOfFreeBounds::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

bool Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator::IsEqual(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator^ theOther)
{
    bool _result = ((::ShapeAnalysis_SequenceOfFreeBounds::Iterator*)_NativeInstance)->IsEqual(*(::ShapeAnalysis_SequenceOfFreeBounds::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis::ShapeAnalysis()
    : Macad::Occt::BaseClass<::ShapeAnalysis>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis();
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::ShapeAnalysis::OuterWire(Macad::Occt::TopoDS_Face^ theFace)
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = ::ShapeAnalysis::OuterWire(*(::TopoDS_Face*)theFace->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

double Macad::Occt::ShapeAnalysis::ContourArea(Macad::Occt::TopoDS_Wire^ theWire)
{
    double _result = ::ShapeAnalysis::ContourArea(*(::TopoDS_Wire*)theWire->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis::IsOuterBound(Macad::Occt::TopoDS_Face^ face)
{
    bool _result = ::ShapeAnalysis::IsOuterBound(*(::TopoDS_Face*)face->NativeInstance);
    return _result;
}

double Macad::Occt::ShapeAnalysis::AdjustByPeriod(double Val, double ToVal, double Period)
{
    double _result = ::ShapeAnalysis::AdjustByPeriod(Val, ToVal, Period);
    return _result;
}

double Macad::Occt::ShapeAnalysis::AdjustToPeriod(double Val, double ValMin, double ValMax)
{
    double _result = ::ShapeAnalysis::AdjustToPeriod(Val, ValMin, ValMax);
    return _result;
}

void Macad::Occt::ShapeAnalysis::FindBounds(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
    ::ShapeAnalysis::FindBounds(*(::TopoDS_Shape*)shape->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

void Macad::Occt::ShapeAnalysis::GetFaceUVBounds(Macad::Occt::TopoDS_Face^ F, double% Umin, double% Umax, double% Vmin, double% Vmax)
{
    pin_ptr<double> pp_Umin = &Umin;
    pin_ptr<double> pp_Umax = &Umax;
    pin_ptr<double> pp_Vmin = &Vmin;
    pin_ptr<double> pp_Vmax = &Vmax;
    ::ShapeAnalysis::GetFaceUVBounds(*(::TopoDS_Face*)F->NativeInstance, *(double*)pp_Umin, *(double*)pp_Umax, *(double*)pp_Vmin, *(double*)pp_Vmax);
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_CanonicalRecognition
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_CanonicalRecognition::ShapeAnalysis_CanonicalRecognition()
    : Macad::Occt::BaseClass<::ShapeAnalysis_CanonicalRecognition>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_CanonicalRecognition();
}

Macad::Occt::ShapeAnalysis_CanonicalRecognition::ShapeAnalysis_CanonicalRecognition(Macad::Occt::TopoDS_Shape^ theShape)
    : Macad::Occt::BaseClass<::ShapeAnalysis_CanonicalRecognition>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_CanonicalRecognition(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_CanonicalRecognition::SetShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    ((::ShapeAnalysis_CanonicalRecognition*)_NativeInstance)->SetShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeAnalysis_CanonicalRecognition::GetShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::ShapeAnalysis_CanonicalRecognition*)_NativeInstance)->GetShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

double Macad::Occt::ShapeAnalysis_CanonicalRecognition::GetGap()
{
    double _result = ((::ShapeAnalysis_CanonicalRecognition*)_NativeInstance)->GetGap();
    return _result;
}

int Macad::Occt::ShapeAnalysis_CanonicalRecognition::GetStatus()
{
    int _result = ((::ShapeAnalysis_CanonicalRecognition*)_NativeInstance)->GetStatus();
    return _result;
}

void Macad::Occt::ShapeAnalysis_CanonicalRecognition::ClearStatus()
{
    ((::ShapeAnalysis_CanonicalRecognition*)_NativeInstance)->ClearStatus();
}

bool Macad::Occt::ShapeAnalysis_CanonicalRecognition::IsPlane(double theTol, Macad::Occt::Pln% thePln)
{
    pin_ptr<Macad::Occt::Pln> pp_thePln = &thePln;
    bool _result = ((::ShapeAnalysis_CanonicalRecognition*)_NativeInstance)->IsPlane(theTol, *(gp_Pln*)pp_thePln);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CanonicalRecognition::IsCylinder(double theTol, Macad::Occt::gp_Cylinder^ theCyl)
{
    bool _result = ((::ShapeAnalysis_CanonicalRecognition*)_NativeInstance)->IsCylinder(theTol, *(::gp_Cylinder*)theCyl->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CanonicalRecognition::IsCone(double theTol, Macad::Occt::gp_Cone^ theCone)
{
    bool _result = ((::ShapeAnalysis_CanonicalRecognition*)_NativeInstance)->IsCone(theTol, *(::gp_Cone*)theCone->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CanonicalRecognition::IsSphere(double theTol, Macad::Occt::gp_Sphere^ theSphere)
{
    bool _result = ((::ShapeAnalysis_CanonicalRecognition*)_NativeInstance)->IsSphere(theTol, *(::gp_Sphere*)theSphere->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CanonicalRecognition::IsLine(double theTol, Macad::Occt::gp_Lin^ theLin)
{
    bool _result = ((::ShapeAnalysis_CanonicalRecognition*)_NativeInstance)->IsLine(theTol, *(::gp_Lin*)theLin->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CanonicalRecognition::IsCircle(double theTol, Macad::Occt::gp_Circ^ theCirc)
{
    bool _result = ((::ShapeAnalysis_CanonicalRecognition*)_NativeInstance)->IsCircle(theTol, *(::gp_Circ*)theCirc->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CanonicalRecognition::IsEllipse(double theTol, Macad::Occt::gp_Elips^ theElips)
{
    bool _result = ((::ShapeAnalysis_CanonicalRecognition*)_NativeInstance)->IsEllipse(theTol, *(::gp_Elips*)theElips->NativeInstance);
    return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_CheckSmallFace
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_CheckSmallFace::ShapeAnalysis_CheckSmallFace()
    : Macad::Occt::BaseClass<::ShapeAnalysis_CheckSmallFace>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_CheckSmallFace();
}

int Macad::Occt::ShapeAnalysis_CheckSmallFace::IsSpotFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% spot, double% spotol, double tol)
{
    pin_ptr<Macad::Occt::Pnt> pp_spot = &spot;
    pin_ptr<double> pp_spotol = &spotol;
    int _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->IsSpotFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_spot, *(double*)pp_spotol, tol);
    return _result;
}

int Macad::Occt::ShapeAnalysis_CheckSmallFace::IsSpotFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Pnt% spot, double% spotol)
{
    pin_ptr<Macad::Occt::Pnt> pp_spot = &spot;
    pin_ptr<double> pp_spotol = &spotol;
    int _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->IsSpotFace(*(::TopoDS_Face*)F->NativeInstance, *(gp_Pnt*)pp_spot, *(double*)pp_spotol, -1.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckSpotFace(Macad::Occt::TopoDS_Face^ F, double tol)
{
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckSpotFace(*(::TopoDS_Face*)F->NativeInstance, tol);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckSpotFace(Macad::Occt::TopoDS_Face^ F)
{
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckSpotFace(*(::TopoDS_Face*)F->NativeInstance, -1.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::IsStripSupport(Macad::Occt::TopoDS_Face^ F, double tol)
{
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->IsStripSupport(*(::TopoDS_Face*)F->NativeInstance, tol);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::IsStripSupport(Macad::Occt::TopoDS_Face^ F)
{
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->IsStripSupport(*(::TopoDS_Face*)F->NativeInstance, -1.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckStripEdges(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol, double% dmax)
{
    pin_ptr<double> pp_dmax = &dmax;
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckStripEdges(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, tol, *(double*)pp_dmax);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::FindStripEdges(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol, double% dmax)
{
    pin_ptr<double> pp_dmax = &dmax;
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->FindStripEdges(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, tol, *(double*)pp_dmax);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckSingleStrip(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol)
{
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckSingleStrip(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, tol);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckSingleStrip(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
{
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckSingleStrip(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, -1.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckStripFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol)
{
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckStripFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, tol);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckStripFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
{
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckStripFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, -1.);
    return _result;
}

int Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckSplittingVertices(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ MapEdges, Macad::Occt::ShapeAnalysis_DataMapOfShapeListOfReal^ MapParam, Macad::Occt::TopoDS_Compound^ theAllVert)
{
    int _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckSplittingVertices(*(::TopoDS_Face*)F->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)MapEdges->NativeInstance, *(::ShapeAnalysis_DataMapOfShapeListOfReal*)MapParam->NativeInstance, *(::TopoDS_Compound*)theAllVert->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckPin(Macad::Occt::TopoDS_Face^ F, int% whatrow, int% sence)
{
    pin_ptr<int> pp_whatrow = &whatrow;
    pin_ptr<int> pp_sence = &sence;
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckPin(*(::TopoDS_Face*)F->NativeInstance, *(int*)pp_whatrow, *(int*)pp_sence);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckTwisted(Macad::Occt::TopoDS_Face^ F, double% paramu, double% paramv)
{
    pin_ptr<double> pp_paramu = &paramu;
    pin_ptr<double> pp_paramv = &paramv;
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckTwisted(*(::TopoDS_Face*)F->NativeInstance, *(double*)pp_paramu, *(double*)pp_paramv);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckPinFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ mapEdges, double toler)
{
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckPinFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopTools_DataMapOfShapeShape*)mapEdges->NativeInstance, toler);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckPinFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ mapEdges)
{
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckPinFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopTools_DataMapOfShapeShape*)mapEdges->NativeInstance, -1.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_CheckSmallFace::CheckPinEdges(Macad::Occt::TopoDS_Edge^ theFirstEdge, Macad::Occt::TopoDS_Edge^ theSecondEdge, double coef1, double coef2, double toler)
{
    bool _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->CheckPinEdges(*(::TopoDS_Edge*)theFirstEdge->NativeInstance, *(::TopoDS_Edge*)theSecondEdge->NativeInstance, coef1, coef2, toler);
    return _result;
}

void Macad::Occt::ShapeAnalysis_CheckSmallFace::SetTolerance(double tol)
{
    ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->SetTolerance(tol);
}

double Macad::Occt::ShapeAnalysis_CheckSmallFace::Tolerance()
{
    double _result = ((::ShapeAnalysis_CheckSmallFace*)_NativeInstance)->Tolerance();
    return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Curve
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_Curve::ShapeAnalysis_Curve()
    : Macad::Occt::BaseClass<::ShapeAnalysis_Curve>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_Curve();
}

double Macad::Occt::ShapeAnalysis_Curve::Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, bool AdjustToEnds)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
    pin_ptr<double> pp_param = &param;
    double _result = ((::ShapeAnalysis_Curve*)_NativeInstance)->Project(Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(double*)pp_param, AdjustToEnds);
    return _result;
}

double Macad::Occt::ShapeAnalysis_Curve::Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
    pin_ptr<double> pp_param = &param;
    double _result = ((::ShapeAnalysis_Curve*)_NativeInstance)->Project(Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(double*)pp_param, true);
    return _result;
}

double Macad::Occt::ShapeAnalysis_Curve::Project(Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, bool AdjustToEnds)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
    pin_ptr<double> pp_param = &param;
    double _result = ((::ShapeAnalysis_Curve*)_NativeInstance)->Project(*(::Adaptor3d_Curve*)C3D->NativeInstance, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(double*)pp_param, AdjustToEnds);
    return _result;
}

double Macad::Occt::ShapeAnalysis_Curve::Project(Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
    pin_ptr<double> pp_param = &param;
    double _result = ((::ShapeAnalysis_Curve*)_NativeInstance)->Project(*(::Adaptor3d_Curve*)C3D->NativeInstance, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(double*)pp_param, true);
    return _result;
}

double Macad::Occt::ShapeAnalysis_Curve::Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl, bool AdjustToEnds)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
    pin_ptr<double> pp_param = &param;
    double _result = ((::ShapeAnalysis_Curve*)_NativeInstance)->Project(Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(double*)pp_param, cf, cl, AdjustToEnds);
    return _result;
}

double Macad::Occt::ShapeAnalysis_Curve::Project(Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
    pin_ptr<double> pp_param = &param;
    double _result = ((::ShapeAnalysis_Curve*)_NativeInstance)->Project(Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(double*)pp_param, cf, cl, true);
    return _result;
}

double Macad::Occt::ShapeAnalysis_Curve::ProjectAct(Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
    pin_ptr<double> pp_param = &param;
    double _result = ((::ShapeAnalysis_Curve*)_NativeInstance)->ProjectAct(*(::Adaptor3d_Curve*)C3D->NativeInstance, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(double*)pp_param);
    return _result;
}

double Macad::Occt::ShapeAnalysis_Curve::NextProject(double paramPrev, Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl, bool AdjustToEnds)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
    pin_ptr<double> pp_param = &param;
    double _result = ((::ShapeAnalysis_Curve*)_NativeInstance)->NextProject(paramPrev, Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(double*)pp_param, cf, cl, AdjustToEnds);
    return _result;
}

double Macad::Occt::ShapeAnalysis_Curve::NextProject(double paramPrev, Macad::Occt::Geom_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param, double cf, double cl)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
    pin_ptr<double> pp_param = &param;
    double _result = ((::ShapeAnalysis_Curve*)_NativeInstance)->NextProject(paramPrev, Handle(::Geom_Curve)(C3D->NativeInstance), *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(double*)pp_param, cf, cl, true);
    return _result;
}

double Macad::Occt::ShapeAnalysis_Curve::NextProject(double paramPrev, Macad::Occt::Adaptor3d_Curve^ C3D, Macad::Occt::Pnt P3D, double preci, Macad::Occt::Pnt% proj, double% param)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    pin_ptr<Macad::Occt::Pnt> pp_proj = &proj;
    pin_ptr<double> pp_param = &param;
    double _result = ((::ShapeAnalysis_Curve*)_NativeInstance)->NextProject(paramPrev, *(::Adaptor3d_Curve*)C3D->NativeInstance, *(gp_Pnt*)pp_P3D, preci, *(gp_Pnt*)pp_proj, *(double*)pp_param);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Curve::ValidateRange(Macad::Occt::Geom_Curve^ Crv, double% First, double% Last, double prec)
{
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    bool _result = ((::ShapeAnalysis_Curve*)_NativeInstance)->ValidateRange(Handle(::Geom_Curve)(Crv->NativeInstance), *(double*)pp_First, *(double*)pp_Last, prec);
    return _result;
}

void Macad::Occt::ShapeAnalysis_Curve::FillBndBox(Macad::Occt::Geom2d_Curve^ C2d, double First, double Last, int NPoints, bool Exact, Macad::Occt::Bnd_Box2d^ Box)
{
    ((::ShapeAnalysis_Curve*)_NativeInstance)->FillBndBox(Handle(::Geom2d_Curve)(C2d->NativeInstance), First, Last, NPoints, Exact, *(::Bnd_Box2d*)Box->NativeInstance);
}

int Macad::Occt::ShapeAnalysis_Curve::SelectForwardSeam(Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2)
{
    int _result = ((::ShapeAnalysis_Curve*)_NativeInstance)->SelectForwardSeam(Handle(::Geom2d_Curve)(C1->NativeInstance), Handle(::Geom2d_Curve)(C2->NativeInstance));
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Curve::IsPlanar(Macad::Occt::TColgp_Array1OfPnt^ pnts, Macad::Occt::XYZ% Normal, double preci)
{
    pin_ptr<Macad::Occt::XYZ> pp_Normal = &Normal;
    bool _result = ::ShapeAnalysis_Curve::IsPlanar(*(::TColgp_Array1OfPnt*)pnts->NativeInstance, *(gp_XYZ*)pp_Normal, preci);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Curve::IsPlanar(Macad::Occt::TColgp_Array1OfPnt^ pnts, Macad::Occt::XYZ% Normal)
{
    pin_ptr<Macad::Occt::XYZ> pp_Normal = &Normal;
    bool _result = ::ShapeAnalysis_Curve::IsPlanar(*(::TColgp_Array1OfPnt*)pnts->NativeInstance, *(gp_XYZ*)pp_Normal, 0.0);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Curve::IsPlanar(Macad::Occt::Geom_Curve^ curve, Macad::Occt::XYZ% Normal, double preci)
{
    pin_ptr<Macad::Occt::XYZ> pp_Normal = &Normal;
    bool _result = ::ShapeAnalysis_Curve::IsPlanar(Handle(::Geom_Curve)(curve->NativeInstance), *(gp_XYZ*)pp_Normal, preci);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Curve::IsPlanar(Macad::Occt::Geom_Curve^ curve, Macad::Occt::XYZ% Normal)
{
    pin_ptr<Macad::Occt::XYZ> pp_Normal = &Normal;
    bool _result = ::ShapeAnalysis_Curve::IsPlanar(Handle(::Geom_Curve)(curve->NativeInstance), *(gp_XYZ*)pp_Normal, 0.0);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Curve::GetSamplePoints(Macad::Occt::Geom2d_Curve^ curve, double first, double last, Macad::Occt::TColgp_SequenceOfPnt2d^ seq)
{
    bool _result = ::ShapeAnalysis_Curve::GetSamplePoints(Handle(::Geom2d_Curve)(curve->NativeInstance), first, last, *(::TColgp_SequenceOfPnt2d*)seq->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Curve::GetSamplePoints(Macad::Occt::Geom_Curve^ curve, double first, double last, Macad::Occt::TColgp_SequenceOfPnt^ seq)
{
    bool _result = ::ShapeAnalysis_Curve::GetSamplePoints(Handle(::Geom_Curve)(curve->NativeInstance), first, last, *(::TColgp_SequenceOfPnt*)seq->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Curve::IsClosed(Macad::Occt::Geom_Curve^ curve, double preci)
{
    bool _result = ::ShapeAnalysis_Curve::IsClosed(Handle(::Geom_Curve)(curve->NativeInstance), preci);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Curve::IsClosed(Macad::Occt::Geom_Curve^ curve)
{
    bool _result = ::ShapeAnalysis_Curve::IsClosed(Handle(::Geom_Curve)(curve->NativeInstance), -1);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Curve::IsPeriodic(Macad::Occt::Geom_Curve^ curve)
{
    bool _result = ::ShapeAnalysis_Curve::IsPeriodic(Handle(::Geom_Curve)(curve->NativeInstance));
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Curve::IsPeriodic(Macad::Occt::Geom2d_Curve^ curve)
{
    bool _result = ::ShapeAnalysis_Curve::IsPeriodic(Handle(::Geom2d_Curve)(curve->NativeInstance));
    return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Edge
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_Edge::ShapeAnalysis_Edge()
    : Macad::Occt::BaseClass<::ShapeAnalysis_Edge>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_Edge();
}

bool Macad::Occt::ShapeAnalysis_Edge::HasCurve3d(Macad::Occt::TopoDS_Edge^ edge)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->HasCurve3d(*(::TopoDS_Edge*)edge->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::Curve3d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Curve^ C3d, double% cf, double% cl, bool orient)
{
    Handle(::Geom_Curve) h_C3d = C3d->NativeInstance;
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->Curve3d(*(::TopoDS_Edge*)edge->NativeInstance, h_C3d, *(double*)pp_cf, *(double*)pp_cl, orient);
    C3d->NativeInstance = h_C3d.get();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::Curve3d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Curve^ C3d, double% cf, double% cl)
{
    Handle(::Geom_Curve) h_C3d = C3d->NativeInstance;
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->Curve3d(*(::TopoDS_Edge*)edge->NativeInstance, h_C3d, *(double*)pp_cf, *(double*)pp_cl, true);
    C3d->NativeInstance = h_C3d.get();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::IsClosed3d(Macad::Occt::TopoDS_Edge^ edge)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->IsClosed3d(*(::TopoDS_Edge*)edge->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::HasPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->HasPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::HasPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->HasPCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl, bool orient)
{
    Handle(::Geom2d_Curve) h_C2d = C2d->NativeInstance;
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->PCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, h_C2d, *(double*)pp_cf, *(double*)pp_cl, orient);
    C2d->NativeInstance = h_C2d.get();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl)
{
    Handle(::Geom2d_Curve) h_C2d = C2d->NativeInstance;
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->PCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, h_C2d, *(double*)pp_cf, *(double*)pp_cl, true);
    C2d->NativeInstance = h_C2d.get();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl, bool orient)
{
    Handle(::Geom2d_Curve) h_C2d = C2d->NativeInstance;
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->PCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance, h_C2d, *(double*)pp_cf, *(double*)pp_cl, orient);
    C2d->NativeInstance = h_C2d.get();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::PCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, Macad::Occt::Geom2d_Curve^ C2d, double% cf, double% cl)
{
    Handle(::Geom2d_Curve) h_C2d = C2d->NativeInstance;
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->PCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance, h_C2d, *(double*)pp_cf, *(double*)pp_cl, true);
    C2d->NativeInstance = h_C2d.get();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::BoundUV(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, Macad::Occt::Pnt2d% first, Macad::Occt::Pnt2d% last)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_first = &first;
    pin_ptr<Macad::Occt::Pnt2d> pp_last = &last;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->BoundUV(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, *(gp_Pnt2d*)pp_first, *(gp_Pnt2d*)pp_last);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::BoundUV(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, Macad::Occt::Pnt2d% first, Macad::Occt::Pnt2d% last)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_first = &first;
    pin_ptr<Macad::Occt::Pnt2d> pp_last = &last;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->BoundUV(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance, *(gp_Pnt2d*)pp_first, *(gp_Pnt2d*)pp_last);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::IsSeam(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->IsSeam(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::IsSeam(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->IsSeam(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeAnalysis_Edge::FirstVertex(Macad::Occt::TopoDS_Edge^ edge)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::ShapeAnalysis_Edge*)_NativeInstance)->FirstVertex(*(::TopoDS_Edge*)edge->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeAnalysis_Edge::LastVertex(Macad::Occt::TopoDS_Edge^ edge)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::ShapeAnalysis_Edge*)_NativeInstance)->LastVertex(*(::TopoDS_Edge*)edge->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

bool Macad::Occt::ShapeAnalysis_Edge::GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang, double dparam)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_pos = &pos;
    pin_ptr<Macad::Occt::Vec2d> pp_tang = &tang;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->GetEndTangent2d(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, atEnd, *(gp_Pnt2d*)pp_pos, *(gp_Vec2d*)pp_tang, dparam);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_pos = &pos;
    pin_ptr<Macad::Occt::Vec2d> pp_tang = &tang;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->GetEndTangent2d(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, atEnd, *(gp_Pnt2d*)pp_pos, *(gp_Vec2d*)pp_tang, 0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang, double dparam)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_pos = &pos;
    pin_ptr<Macad::Occt::Vec2d> pp_tang = &tang;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->GetEndTangent2d(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance, atEnd, *(gp_Pnt2d*)pp_pos, *(gp_Vec2d*)pp_tang, dparam);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::GetEndTangent2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool atEnd, Macad::Occt::Pnt2d% pos, Macad::Occt::Vec2d% tang)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_pos = &pos;
    pin_ptr<Macad::Occt::Vec2d> pp_tang = &tang;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->GetEndTangent2d(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance, atEnd, *(gp_Pnt2d*)pp_pos, *(gp_Vec2d*)pp_tang, 0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithCurve3d(Macad::Occt::TopoDS_Edge^ edge, double preci, int vtx)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithCurve3d(*(::TopoDS_Edge*)edge->NativeInstance, preci, vtx);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithCurve3d(Macad::Occt::TopoDS_Edge^ edge, double preci)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithCurve3d(*(::TopoDS_Edge*)edge->NativeInstance, preci, 0);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithCurve3d(Macad::Occt::TopoDS_Edge^ edge)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithCurve3d(*(::TopoDS_Edge*)edge->NativeInstance, -1, 0);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double preci, int vtx)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, preci, vtx);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double preci)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, preci, 0);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, -1, 0);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, double preci, int vtx)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance, preci, vtx);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, double preci)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance, preci, 0);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVerticesWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVerticesWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance, -1, 0);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVertexTolerance(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double% toler1, double% toler2)
{
    pin_ptr<double> pp_toler1 = &toler1;
    pin_ptr<double> pp_toler2 = &toler2;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVertexTolerance(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, *(double*)pp_toler1, *(double*)pp_toler2);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckVertexTolerance(Macad::Occt::TopoDS_Edge^ edge, double% toler1, double% toler2)
{
    pin_ptr<double> pp_toler1 = &toler1;
    pin_ptr<double> pp_toler2 = &toler2;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckVertexTolerance(*(::TopoDS_Edge*)edge->NativeInstance, *(double*)pp_toler1, *(double*)pp_toler2);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckCurve3dWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckCurve3dWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckCurve3dWithPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckCurve3dWithPCurve(*(::TopoDS_Edge*)edge->NativeInstance, Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckSameParameter(Macad::Occt::TopoDS_Edge^ edge, double% maxdev, int NbControl)
{
    pin_ptr<double> pp_maxdev = &maxdev;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckSameParameter(*(::TopoDS_Edge*)edge->NativeInstance, *(double*)pp_maxdev, NbControl);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckSameParameter(Macad::Occt::TopoDS_Edge^ edge, double% maxdev)
{
    pin_ptr<double> pp_maxdev = &maxdev;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckSameParameter(*(::TopoDS_Edge*)edge->NativeInstance, *(double*)pp_maxdev, 23);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckSameParameter(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace, double% theMaxdev, int theNbControl)
{
    pin_ptr<double> pp_theMaxdev = &theMaxdev;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckSameParameter(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance, *(double*)pp_theMaxdev, theNbControl);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckSameParameter(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Face^ theFace, double% theMaxdev)
{
    pin_ptr<double> pp_theMaxdev = &theMaxdev;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckSameParameter(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Face*)theFace->NativeInstance, *(double*)pp_theMaxdev, 23);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckPCurveRange(double theFirst, double theLast, Macad::Occt::Geom2d_Curve^ thePC)
{
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckPCurveRange(theFirst, theLast, Handle(::Geom2d_Curve)(thePC->NativeInstance));
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckOverlapping(Macad::Occt::TopoDS_Edge^ theEdge1, Macad::Occt::TopoDS_Edge^ theEdge2, double% theTolOverlap, double theDomainDist)
{
    pin_ptr<double> pp_theTolOverlap = &theTolOverlap;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckOverlapping(*(::TopoDS_Edge*)theEdge1->NativeInstance, *(::TopoDS_Edge*)theEdge2->NativeInstance, *(double*)pp_theTolOverlap, theDomainDist);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Edge::CheckOverlapping(Macad::Occt::TopoDS_Edge^ theEdge1, Macad::Occt::TopoDS_Edge^ theEdge2, double% theTolOverlap)
{
    pin_ptr<double> pp_theTolOverlap = &theTolOverlap;
    bool _result = ((::ShapeAnalysis_Edge*)_NativeInstance)->CheckOverlapping(*(::TopoDS_Edge*)theEdge1->NativeInstance, *(::TopoDS_Edge*)theEdge2->NativeInstance, *(double*)pp_theTolOverlap, 0.);
    return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_FreeBoundData
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_FreeBoundData::ShapeAnalysis_FreeBoundData()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeAnalysis_FreeBoundData();
}

Macad::Occt::ShapeAnalysis_FreeBoundData::ShapeAnalysis_FreeBoundData(Macad::Occt::TopoDS_Wire^ freebound)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeAnalysis_FreeBoundData(*(::TopoDS_Wire*)freebound->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::Clear()
{
    ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Clear();
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::SetFreeBound(Macad::Occt::TopoDS_Wire^ freebound)
{
    ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->SetFreeBound(*(::TopoDS_Wire*)freebound->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::SetArea(double area)
{
    ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->SetArea(area);
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::SetPerimeter(double perimeter)
{
    ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->SetPerimeter(perimeter);
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::SetRatio(double ratio)
{
    ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->SetRatio(ratio);
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::SetWidth(double width)
{
    ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->SetWidth(width);
}

void Macad::Occt::ShapeAnalysis_FreeBoundData::AddNotch(Macad::Occt::TopoDS_Wire^ notch, double width)
{
    ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->AddNotch(*(::TopoDS_Wire*)notch->NativeInstance, width);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::ShapeAnalysis_FreeBoundData::FreeBound()
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->FreeBound();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

double Macad::Occt::ShapeAnalysis_FreeBoundData::Area()
{
    double _result = ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Area();
    return _result;
}

double Macad::Occt::ShapeAnalysis_FreeBoundData::Perimeter()
{
    double _result = ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Perimeter();
    return _result;
}

double Macad::Occt::ShapeAnalysis_FreeBoundData::Ratio()
{
    double _result = ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Ratio();
    return _result;
}

double Macad::Occt::ShapeAnalysis_FreeBoundData::Width()
{
    double _result = ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Width();
    return _result;
}

int Macad::Occt::ShapeAnalysis_FreeBoundData::NbNotches()
{
    int _result = ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->NbNotches();
    return _result;
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_FreeBoundData::Notches()
{
    Handle(::TopTools_HSequenceOfShape) _result = ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Notches();
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::ShapeAnalysis_FreeBoundData::Notch(int index)
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->Notch(index);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

double Macad::Occt::ShapeAnalysis_FreeBoundData::NotchWidth(int index)
{
    double _result = ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->NotchWidth(index);
    return _result;
}

double Macad::Occt::ShapeAnalysis_FreeBoundData::NotchWidth(Macad::Occt::TopoDS_Wire^ notch)
{
    double _result = ((::ShapeAnalysis_FreeBoundData*)_NativeInstance)->NotchWidth(*(::TopoDS_Wire*)notch->NativeInstance);
    return _result;
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(::ShapeAnalysis_FreeBoundData* instance)
{
    return gcnew Macad::Occt::ShapeAnalysis_FreeBoundData( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_FreeBounds
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds()
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBounds();
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double toler, bool splitclosed, bool splitopen)
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, toler, splitclosed, splitopen);
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double toler, bool splitclosed)
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, toler, splitclosed, true);
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double toler)
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, toler, false, true);
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen, bool checkinternaledges)
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, splitopen, checkinternaledges);
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen)
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, splitopen, false);
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed)
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, true, false);
}

Macad::Occt::ShapeAnalysis_FreeBounds::ShapeAnalysis_FreeBounds(Macad::Occt::TopoDS_Shape^ shape)
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, false, true, false);
}

Macad::Occt::TopoDS_Compound^ Macad::Occt::ShapeAnalysis_FreeBounds::GetClosedWires()
{
    ::TopoDS_Compound* _result = new ::TopoDS_Compound();
    *_result = (::TopoDS_Compound)((::ShapeAnalysis_FreeBounds*)_NativeInstance)->GetClosedWires();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Compound(_result);
}

Macad::Occt::TopoDS_Compound^ Macad::Occt::ShapeAnalysis_FreeBounds::GetOpenWires()
{
    ::TopoDS_Compound* _result = new ::TopoDS_Compound();
    *_result = (::TopoDS_Compound)((::ShapeAnalysis_FreeBounds*)_NativeInstance)->GetOpenWires();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Compound(_result);
}

void Macad::Occt::ShapeAnalysis_FreeBounds::ConnectEdgesToWires(Macad::Occt::TopTools_HSequenceOfShape^ edges, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ wires)
{
    Handle(::TopTools_HSequenceOfShape) h_edges = edges->NativeInstance;
    Handle(::TopTools_HSequenceOfShape) h_wires = wires->NativeInstance;
    ::ShapeAnalysis_FreeBounds::ConnectEdgesToWires(h_edges, toler, shared, h_wires);
    edges->NativeInstance = h_edges.get();
    wires->NativeInstance = h_wires.get();
}

void Macad::Occt::ShapeAnalysis_FreeBounds::ConnectWiresToWires(Macad::Occt::TopTools_HSequenceOfShape^ iwires, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ owires)
{
    Handle(::TopTools_HSequenceOfShape) h_iwires = iwires->NativeInstance;
    Handle(::TopTools_HSequenceOfShape) h_owires = owires->NativeInstance;
    ::ShapeAnalysis_FreeBounds::ConnectWiresToWires(h_iwires, toler, shared, h_owires);
    iwires->NativeInstance = h_iwires.get();
    owires->NativeInstance = h_owires.get();
}

void Macad::Occt::ShapeAnalysis_FreeBounds::ConnectWiresToWires(Macad::Occt::TopTools_HSequenceOfShape^ iwires, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ owires, Macad::Occt::TopTools_DataMapOfShapeShape^ vertices)
{
    Handle(::TopTools_HSequenceOfShape) h_iwires = iwires->NativeInstance;
    Handle(::TopTools_HSequenceOfShape) h_owires = owires->NativeInstance;
    ::ShapeAnalysis_FreeBounds::ConnectWiresToWires(h_iwires, toler, shared, h_owires, *(::TopTools_DataMapOfShapeShape*)vertices->NativeInstance);
    iwires->NativeInstance = h_iwires.get();
    owires->NativeInstance = h_owires.get();
}

void Macad::Occt::ShapeAnalysis_FreeBounds::SplitWires(Macad::Occt::TopTools_HSequenceOfShape^ wires, double toler, bool shared, Macad::Occt::TopTools_HSequenceOfShape^ closed, Macad::Occt::TopTools_HSequenceOfShape^ open)
{
    Handle(::TopTools_HSequenceOfShape) h_closed = closed->NativeInstance;
    Handle(::TopTools_HSequenceOfShape) h_open = open->NativeInstance;
    ::ShapeAnalysis_FreeBounds::SplitWires(Handle(::TopTools_HSequenceOfShape)(wires->NativeInstance), toler, shared, h_closed, h_open);
    closed->NativeInstance = h_closed.get();
    open->NativeInstance = h_open.get();
}

void Macad::Occt::ShapeAnalysis_FreeBounds::DispatchWires(Macad::Occt::TopTools_HSequenceOfShape^ wires, Macad::Occt::TopoDS_Compound^ closed, Macad::Occt::TopoDS_Compound^ open)
{
    ::ShapeAnalysis_FreeBounds::DispatchWires(Handle(::TopTools_HSequenceOfShape)(wires->NativeInstance), *(::TopoDS_Compound*)closed->NativeInstance, *(::TopoDS_Compound*)open->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_HSequenceOfFreeBounds
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::ShapeAnalysis_HSequenceOfFreeBounds()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeAnalysis_HSequenceOfFreeBounds();
}

Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::ShapeAnalysis_HSequenceOfFreeBounds(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeAnalysis_HSequenceOfFreeBounds(*(::ShapeAnalysis_SequenceOfFreeBounds*)theOther->NativeInstance);
}

Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Sequence()
{
    ::ShapeAnalysis_SequenceOfFreeBounds* _result = new ::ShapeAnalysis_SequenceOfFreeBounds();
    *_result = (::ShapeAnalysis_SequenceOfFreeBounds)((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Sequence();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds(_result);
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Append(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
    ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Append(Handle(::ShapeAnalysis_FreeBoundData)(theItem->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Append(Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ theSequence)
{
    ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Append(*(::ShapeAnalysis_SequenceOfFreeBounds*)theSequence->NativeInstance);
}

Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::ChangeSequence()
{
    ::ShapeAnalysis_SequenceOfFreeBounds* _result = new ::ShapeAnalysis_SequenceOfFreeBounds();
    *_result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->ChangeSequence();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeAnalysis_SequenceOfFreeBounds(_result);
}

int Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Size()
{
    int _result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Length()
{
    int _result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Lower()
{
    int _result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Upper()
{
    int _result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::IsEmpty()
{
    bool _result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Reverse()
{
    ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Reverse();
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Exchange(int I, int J)
{
    ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Clear()
{
    ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Clear(0L);
}

Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Assign(Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Remove(Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator^ thePosition)
{
    ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Remove(*(::ShapeAnalysis_HSequenceOfFreeBounds::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Prepend(Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
    ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Prepend(Handle(::ShapeAnalysis_FreeBoundData)(theItem->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::InsertBefore(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
    ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->InsertBefore(theIndex, Handle(::ShapeAnalysis_FreeBoundData)(theItem->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::InsertAfter(Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator^ thePosition, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
    ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->InsertAfter(*(::ShapeAnalysis_HSequenceOfFreeBounds::Iterator*)thePosition->NativeInstance, Handle(::ShapeAnalysis_FreeBoundData)(theItem->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Split(int theIndex, Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ theSeq)
{
    ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Split(theIndex, *(::ShapeAnalysis_HSequenceOfFreeBounds*)theSeq->NativeInstance);
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::First()
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::ChangeFirst()
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Last()
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::ChangeLast()
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Value(int theIndex)
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::ChangeValue(int theIndex)
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::SetValue(int theIndex, Macad::Occt::ShapeAnalysis_FreeBoundData^ theItem)
{
    ((::ShapeAnalysis_HSequenceOfFreeBounds*)_NativeInstance)->SetValue(theIndex, Handle(::ShapeAnalysis_FreeBoundData)(theItem->NativeInstance));
}

Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::CreateDowncasted(::ShapeAnalysis_HSequenceOfFreeBounds* instance)
{
    return gcnew Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::ShapeAnalysis_FreeBoundData^>^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::ShapeAnalysis_FreeBoundData^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::ShapeAnalysis_FreeBoundData^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_HSequenceOfFreeBounds::Iterator
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator::Iterator()
    : Macad::Occt::BaseClass<::ShapeAnalysis_HSequenceOfFreeBounds::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_HSequenceOfFreeBounds::Iterator();
}

bool Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator::More()
{
    bool _result = ((::ShapeAnalysis_HSequenceOfFreeBounds::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator::Next()
{
    ((::ShapeAnalysis_HSequenceOfFreeBounds::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator::Value()
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_HSequenceOfFreeBounds::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator::ChangeValue()
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_HSequenceOfFreeBounds::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

bool Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator::IsEqual(Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator^ theOther)
{
    bool _result = ((::ShapeAnalysis_HSequenceOfFreeBounds::Iterator*)_NativeInstance)->IsEqual(*(::ShapeAnalysis_HSequenceOfFreeBounds::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_FreeBoundsProperties
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties()
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties();
}

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed, bool splitopen)
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties(*(::TopoDS_Shape*)shape->NativeInstance, tolerance, splitclosed, splitopen);
}

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed)
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties(*(::TopoDS_Shape*)shape->NativeInstance, tolerance, splitclosed, false);
}

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, double tolerance)
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties(*(::TopoDS_Shape*)shape->NativeInstance, tolerance, false, false);
}

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen)
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, splitopen);
}

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed)
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, false);
}

Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ShapeAnalysis_FreeBoundsProperties(Macad::Occt::TopoDS_Shape^ shape)
    : Macad::Occt::BaseClass<::ShapeAnalysis_FreeBoundsProperties>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_FreeBoundsProperties(*(::TopoDS_Shape*)shape->NativeInstance, false, false);
}

void Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Init(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed, bool splitopen)
{
    ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance, tolerance, splitclosed, splitopen);
}

void Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Init(Macad::Occt::TopoDS_Shape^ shape, double tolerance, bool splitclosed)
{
    ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance, tolerance, splitclosed, false);
}

void Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Init(Macad::Occt::TopoDS_Shape^ shape, double tolerance)
{
    ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance, tolerance, false, false);
}

void Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Init(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed, bool splitopen)
{
    ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, splitopen);
}

void Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Init(Macad::Occt::TopoDS_Shape^ shape, bool splitclosed)
{
    ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance, splitclosed, false);
}

void Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Init(Macad::Occt::TopoDS_Shape^ shape)
{
    ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance, false, false);
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Perform()
{
    bool _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Perform();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::IsLoaded()
{
    bool _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->IsLoaded();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

double Macad::Occt::ShapeAnalysis_FreeBoundsProperties::Tolerance()
{
    double _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->Tolerance();
    return _result;
}

int Macad::Occt::ShapeAnalysis_FreeBoundsProperties::NbFreeBounds()
{
    int _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->NbFreeBounds();
    return _result;
}

int Macad::Occt::ShapeAnalysis_FreeBoundsProperties::NbClosedFreeBounds()
{
    int _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->NbClosedFreeBounds();
    return _result;
}

int Macad::Occt::ShapeAnalysis_FreeBoundsProperties::NbOpenFreeBounds()
{
    int _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->NbOpenFreeBounds();
    return _result;
}

Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ClosedFreeBounds()
{
    Handle(::ShapeAnalysis_HSequenceOfFreeBounds) _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->ClosedFreeBounds();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds^ Macad::Occt::ShapeAnalysis_FreeBoundsProperties::OpenFreeBounds()
{
    Handle(::ShapeAnalysis_HSequenceOfFreeBounds) _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->OpenFreeBounds();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_HSequenceOfFreeBounds::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_FreeBoundsProperties::ClosedFreeBound(int index)
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->ClosedFreeBound(index);
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

Macad::Occt::ShapeAnalysis_FreeBoundData^ Macad::Occt::ShapeAnalysis_FreeBoundsProperties::OpenFreeBound(int index)
{
    Handle(::ShapeAnalysis_FreeBoundData) _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->OpenFreeBound(index);
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_FreeBoundData::CreateDowncasted(_result.get());
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::DispatchBounds()
{
    bool _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->DispatchBounds();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckContours(double prec)
{
    bool _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckContours(prec);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckContours()
{
    bool _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckContours(0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckNotches(double prec)
{
    bool _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckNotches(prec);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckNotches()
{
    bool _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckNotches(0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckNotches(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData, double prec)
{
    Handle(::ShapeAnalysis_FreeBoundData) h_fbData = fbData->NativeInstance;
    bool _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckNotches(h_fbData, prec);
    fbData->NativeInstance = h_fbData.get();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckNotches(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData)
{
    Handle(::ShapeAnalysis_FreeBoundData) h_fbData = fbData->NativeInstance;
    bool _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckNotches(h_fbData, 0.);
    fbData->NativeInstance = h_fbData.get();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckNotches(Macad::Occt::TopoDS_Wire^ freebound, int num, Macad::Occt::TopoDS_Wire^ notch, double% distMax, double prec)
{
    pin_ptr<double> pp_distMax = &distMax;
    bool _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckNotches(*(::TopoDS_Wire*)freebound->NativeInstance, num, *(::TopoDS_Wire*)notch->NativeInstance, *(double*)pp_distMax, prec);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::CheckNotches(Macad::Occt::TopoDS_Wire^ freebound, int num, Macad::Occt::TopoDS_Wire^ notch, double% distMax)
{
    pin_ptr<double> pp_distMax = &distMax;
    bool _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->CheckNotches(*(::TopoDS_Wire*)freebound->NativeInstance, num, *(::TopoDS_Wire*)notch->NativeInstance, *(double*)pp_distMax, 0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::FillProperties(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData, double prec)
{
    Handle(::ShapeAnalysis_FreeBoundData) h_fbData = fbData->NativeInstance;
    bool _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->FillProperties(h_fbData, prec);
    fbData->NativeInstance = h_fbData.get();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_FreeBoundsProperties::FillProperties(Macad::Occt::ShapeAnalysis_FreeBoundData^ fbData)
{
    Handle(::ShapeAnalysis_FreeBoundData) h_fbData = fbData->NativeInstance;
    bool _result = ((::ShapeAnalysis_FreeBoundsProperties*)_NativeInstance)->FillProperties(h_fbData, 0.);
    fbData->NativeInstance = h_fbData.get();
    return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Geom
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_Geom::ShapeAnalysis_Geom()
    : Macad::Occt::BaseClass<::ShapeAnalysis_Geom>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_Geom();
}

bool Macad::Occt::ShapeAnalysis_Geom::NearestPlane(Macad::Occt::TColgp_Array1OfPnt^ Pnts, Macad::Occt::Pln% aPln, double% Dmax)
{
    pin_ptr<Macad::Occt::Pln> pp_aPln = &aPln;
    pin_ptr<double> pp_Dmax = &Dmax;
    bool _result = ::ShapeAnalysis_Geom::NearestPlane(*(::TColgp_Array1OfPnt*)Pnts->NativeInstance, *(gp_Pln*)pp_aPln, *(double*)pp_Dmax);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Geom::PositionTrsf(Macad::Occt::TColStd_HArray2OfReal^ coefs, Macad::Occt::Trsf% trsf, double unit, double prec)
{
    pin_ptr<Macad::Occt::Trsf> pp_trsf = &trsf;
    bool _result = ::ShapeAnalysis_Geom::PositionTrsf(Handle(::TColStd_HArray2OfReal)(coefs->NativeInstance), *(gp_Trsf*)pp_trsf, unit, prec);
    return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_ShapeContents
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_ShapeContents::ShapeAnalysis_ShapeContents()
    : Macad::Occt::BaseClass<::ShapeAnalysis_ShapeContents>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_ShapeContents();
}

void Macad::Occt::ShapeAnalysis_ShapeContents::Clear()
{
    ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->Clear();
}

void Macad::Occt::ShapeAnalysis_ShapeContents::ClearFlags()
{
    ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->ClearFlags();
}

void Macad::Occt::ShapeAnalysis_ShapeContents::Perform(Macad::Occt::TopoDS_Shape^ shape)
{
    ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->Perform(*(::TopoDS_Shape*)shape->NativeInstance);
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSolids()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSolids();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbShells()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbShells();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbFaces()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbFaces();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbWires()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbWires();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbEdges()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbEdges();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbVertices()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbVertices();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSolidsWithVoids()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSolidsWithVoids();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbBigSplines()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbBigSplines();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbC0Surfaces()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbC0Surfaces();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbC0Curves()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbC0Curves();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbOffsetSurf()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbOffsetSurf();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbIndirectSurf()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbIndirectSurf();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbOffsetCurves()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbOffsetCurves();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbTrimmedCurve2d()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbTrimmedCurve2d();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbTrimmedCurve3d()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbTrimmedCurve3d();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbBSplibeSurf()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbBSplibeSurf();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbBezierSurf()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbBezierSurf();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbTrimSurf()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbTrimSurf();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbWireWitnSeam()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbWireWitnSeam();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbWireWithSevSeams()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbWireWithSevSeams();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbFaceWithSevWires()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbFaceWithSevWires();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbNoPCurve()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbNoPCurve();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbFreeFaces()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbFreeFaces();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbFreeWires()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbFreeWires();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbFreeEdges()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbFreeEdges();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedSolids()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedSolids();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedShells()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedShells();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedFaces()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedFaces();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedWires()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedWires();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedFreeWires()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedFreeWires();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedFreeEdges()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedFreeEdges();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedEdges()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedEdges();
    return _result;
}

int Macad::Occt::ShapeAnalysis_ShapeContents::NbSharedVertices()
{
    int _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->NbSharedVertices();
    return _result;
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeContents::BigSplineSec()
{
    Handle(::TopTools_HSequenceOfShape) _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->BigSplineSec();
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeContents::IndirectSec()
{
    Handle(::TopTools_HSequenceOfShape) _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->IndirectSec();
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeContents::OffsetSurfaceSec()
{
    Handle(::TopTools_HSequenceOfShape) _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->OffsetSurfaceSec();
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeContents::Trimmed3dSec()
{
    Handle(::TopTools_HSequenceOfShape) _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->Trimmed3dSec();
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeContents::OffsetCurveSec()
{
    Handle(::TopTools_HSequenceOfShape) _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->OffsetCurveSec();
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeContents::Trimmed2dSec()
{
    Handle(::TopTools_HSequenceOfShape) _result = ((::ShapeAnalysis_ShapeContents*)_NativeInstance)->Trimmed2dSec();
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_ShapeTolerance
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_ShapeTolerance::ShapeAnalysis_ShapeTolerance()
    : Macad::Occt::BaseClass<::ShapeAnalysis_ShapeTolerance>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_ShapeTolerance();
}

double Macad::Occt::ShapeAnalysis_ShapeTolerance::Tolerance(Macad::Occt::TopoDS_Shape^ shape, int mode, Macad::Occt::TopAbs_ShapeEnum type)
{
    double _result = ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->Tolerance(*(::TopoDS_Shape*)shape->NativeInstance, mode, (::TopAbs_ShapeEnum)type);
    return _result;
}

double Macad::Occt::ShapeAnalysis_ShapeTolerance::Tolerance(Macad::Occt::TopoDS_Shape^ shape, int mode)
{
    double _result = ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->Tolerance(*(::TopoDS_Shape*)shape->NativeInstance, mode, TopAbs_SHAPE);
    return _result;
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeTolerance::OverTolerance(Macad::Occt::TopoDS_Shape^ shape, double value, Macad::Occt::TopAbs_ShapeEnum type)
{
    Handle(::TopTools_HSequenceOfShape) _result = ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->OverTolerance(*(::TopoDS_Shape*)shape->NativeInstance, value, (::TopAbs_ShapeEnum)type);
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeTolerance::OverTolerance(Macad::Occt::TopoDS_Shape^ shape, double value)
{
    Handle(::TopTools_HSequenceOfShape) _result = ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->OverTolerance(*(::TopoDS_Shape*)shape->NativeInstance, value, TopAbs_SHAPE);
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeTolerance::InTolerance(Macad::Occt::TopoDS_Shape^ shape, double valmin, double valmax, Macad::Occt::TopAbs_ShapeEnum type)
{
    Handle(::TopTools_HSequenceOfShape) _result = ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->InTolerance(*(::TopoDS_Shape*)shape->NativeInstance, valmin, valmax, (::TopAbs_ShapeEnum)type);
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::ShapeAnalysis_ShapeTolerance::InTolerance(Macad::Occt::TopoDS_Shape^ shape, double valmin, double valmax)
{
    Handle(::TopTools_HSequenceOfShape) _result = ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->InTolerance(*(::TopoDS_Shape*)shape->NativeInstance, valmin, valmax, TopAbs_SHAPE);
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted(_result.get());
}

void Macad::Occt::ShapeAnalysis_ShapeTolerance::InitTolerance()
{
    ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->InitTolerance();
}

void Macad::Occt::ShapeAnalysis_ShapeTolerance::AddTolerance(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::TopAbs_ShapeEnum type)
{
    ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->AddTolerance(*(::TopoDS_Shape*)shape->NativeInstance, (::TopAbs_ShapeEnum)type);
}

void Macad::Occt::ShapeAnalysis_ShapeTolerance::AddTolerance(Macad::Occt::TopoDS_Shape^ shape)
{
    ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->AddTolerance(*(::TopoDS_Shape*)shape->NativeInstance, TopAbs_SHAPE);
}

double Macad::Occt::ShapeAnalysis_ShapeTolerance::GlobalTolerance(int mode)
{
    double _result = ((::ShapeAnalysis_ShapeTolerance*)_NativeInstance)->GlobalTolerance(mode);
    return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Shell
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_Shell::ShapeAnalysis_Shell()
    : Macad::Occt::BaseClass<::ShapeAnalysis_Shell>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_Shell();
}

void Macad::Occt::ShapeAnalysis_Shell::Clear()
{
    ((::ShapeAnalysis_Shell*)_NativeInstance)->Clear();
}

void Macad::Occt::ShapeAnalysis_Shell::LoadShells(Macad::Occt::TopoDS_Shape^ shape)
{
    ((::ShapeAnalysis_Shell*)_NativeInstance)->LoadShells(*(::TopoDS_Shape*)shape->NativeInstance);
}

bool Macad::Occt::ShapeAnalysis_Shell::CheckOrientedShells(Macad::Occt::TopoDS_Shape^ shape, bool alsofree, bool checkinternaledges)
{
    bool _result = ((::ShapeAnalysis_Shell*)_NativeInstance)->CheckOrientedShells(*(::TopoDS_Shape*)shape->NativeInstance, alsofree, checkinternaledges);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Shell::CheckOrientedShells(Macad::Occt::TopoDS_Shape^ shape, bool alsofree)
{
    bool _result = ((::ShapeAnalysis_Shell*)_NativeInstance)->CheckOrientedShells(*(::TopoDS_Shape*)shape->NativeInstance, alsofree, false);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Shell::CheckOrientedShells(Macad::Occt::TopoDS_Shape^ shape)
{
    bool _result = ((::ShapeAnalysis_Shell*)_NativeInstance)->CheckOrientedShells(*(::TopoDS_Shape*)shape->NativeInstance, false, false);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Shell::IsLoaded(Macad::Occt::TopoDS_Shape^ shape)
{
    bool _result = ((::ShapeAnalysis_Shell*)_NativeInstance)->IsLoaded(*(::TopoDS_Shape*)shape->NativeInstance);
    return _result;
}

int Macad::Occt::ShapeAnalysis_Shell::NbLoaded()
{
    int _result = ((::ShapeAnalysis_Shell*)_NativeInstance)->NbLoaded();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeAnalysis_Shell::Loaded(int num)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::ShapeAnalysis_Shell*)_NativeInstance)->Loaded(num);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::ShapeAnalysis_Shell::HasBadEdges()
{
    bool _result = ((::ShapeAnalysis_Shell*)_NativeInstance)->HasBadEdges();
    return _result;
}

Macad::Occt::TopoDS_Compound^ Macad::Occt::ShapeAnalysis_Shell::BadEdges()
{
    ::TopoDS_Compound* _result = new ::TopoDS_Compound();
    *_result = ((::ShapeAnalysis_Shell*)_NativeInstance)->BadEdges();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Compound(_result);
}

bool Macad::Occt::ShapeAnalysis_Shell::HasFreeEdges()
{
    bool _result = ((::ShapeAnalysis_Shell*)_NativeInstance)->HasFreeEdges();
    return _result;
}

Macad::Occt::TopoDS_Compound^ Macad::Occt::ShapeAnalysis_Shell::FreeEdges()
{
    ::TopoDS_Compound* _result = new ::TopoDS_Compound();
    *_result = ((::ShapeAnalysis_Shell*)_NativeInstance)->FreeEdges();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Compound(_result);
}

bool Macad::Occt::ShapeAnalysis_Shell::HasConnectedEdges()
{
    bool _result = ((::ShapeAnalysis_Shell*)_NativeInstance)->HasConnectedEdges();
    return _result;
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Surface
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_Surface::ShapeAnalysis_Surface(Macad::Occt::Geom_Surface^ S)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeAnalysis_Surface(Handle(::Geom_Surface)(S->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_Surface::Init(Macad::Occt::Geom_Surface^ S)
{
    ((::ShapeAnalysis_Surface*)_NativeInstance)->Init(Handle(::Geom_Surface)(S->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_Surface::Init(Macad::Occt::ShapeAnalysis_Surface^ other)
{
    ((::ShapeAnalysis_Surface*)_NativeInstance)->Init(Handle(::ShapeAnalysis_Surface)(other->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_Surface::SetDomain(double U1, double U2, double V1, double V2)
{
    ((::ShapeAnalysis_Surface*)_NativeInstance)->SetDomain(U1, U2, V1, V2);
}

Macad::Occt::Geom_Surface^ Macad::Occt::ShapeAnalysis_Surface::Surface()
{
    Handle(::Geom_Surface) _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::GeomAdaptor_Surface^ Macad::Occt::ShapeAnalysis_Surface::Adaptor3d()
{
    Handle(::GeomAdaptor_Surface) _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->Adaptor3d();
    return _result.IsNull() ? nullptr : Macad::Occt::GeomAdaptor_Surface::CreateDowncasted(_result.get());
}

Macad::Occt::GeomAdaptor_Surface^ Macad::Occt::ShapeAnalysis_Surface::TrueAdaptor3d()
{
    Handle(::GeomAdaptor_Surface) _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->TrueAdaptor3d();
    return _result.IsNull() ? nullptr : Macad::Occt::GeomAdaptor_Surface::CreateDowncasted(_result.get());
}

double Macad::Occt::ShapeAnalysis_Surface::Gap()
{
    double _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->Gap();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::ShapeAnalysis_Surface::Value(double u, double v)
{
    ::gp_Pnt _nativeResult = ((::ShapeAnalysis_Surface*)_NativeInstance)->Value(u, v);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::ShapeAnalysis_Surface::Value(Macad::Occt::Pnt2d p2d)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_p2d = &p2d;
    ::gp_Pnt _nativeResult = ((::ShapeAnalysis_Surface*)_NativeInstance)->Value(*(gp_Pnt2d*)pp_p2d);
    return Macad::Occt::Pnt(_nativeResult);
}

bool Macad::Occt::ShapeAnalysis_Surface::HasSingularities(double preci)
{
    bool _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->HasSingularities(preci);
    return _result;
}

int Macad::Occt::ShapeAnalysis_Surface::NbSingularities(double preci)
{
    int _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->NbSingularities(preci);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Surface::Singularity(int num, double% preci, Macad::Occt::Pnt% P3d, Macad::Occt::Pnt2d% firstP2d, Macad::Occt::Pnt2d% lastP2d, double% firstpar, double% lastpar, bool% uisodeg)
{
    pin_ptr<double> pp_preci = &preci;
    pin_ptr<Macad::Occt::Pnt> pp_P3d = &P3d;
    pin_ptr<Macad::Occt::Pnt2d> pp_firstP2d = &firstP2d;
    pin_ptr<Macad::Occt::Pnt2d> pp_lastP2d = &lastP2d;
    pin_ptr<double> pp_firstpar = &firstpar;
    pin_ptr<double> pp_lastpar = &lastpar;
    pin_ptr<bool> pp_uisodeg = &uisodeg;
    bool _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->Singularity(num, *(double*)pp_preci, *(gp_Pnt*)pp_P3d, *(gp_Pnt2d*)pp_firstP2d, *(gp_Pnt2d*)pp_lastP2d, *(double*)pp_firstpar, *(double*)pp_lastpar, *(bool*)pp_uisodeg);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Surface::IsDegenerated(Macad::Occt::Pnt P3d, double preci)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3d = &P3d;
    bool _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->IsDegenerated(*(gp_Pnt*)pp_P3d, preci);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Surface::DegeneratedValues(Macad::Occt::Pnt P3d, double preci, Macad::Occt::Pnt2d% firstP2d, Macad::Occt::Pnt2d% lastP2d, double% firstpar, double% lastpar, bool forward)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3d = &P3d;
    pin_ptr<Macad::Occt::Pnt2d> pp_firstP2d = &firstP2d;
    pin_ptr<Macad::Occt::Pnt2d> pp_lastP2d = &lastP2d;
    pin_ptr<double> pp_firstpar = &firstpar;
    pin_ptr<double> pp_lastpar = &lastpar;
    bool _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->DegeneratedValues(*(gp_Pnt*)pp_P3d, preci, *(gp_Pnt2d*)pp_firstP2d, *(gp_Pnt2d*)pp_lastP2d, *(double*)pp_firstpar, *(double*)pp_lastpar, forward);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Surface::DegeneratedValues(Macad::Occt::Pnt P3d, double preci, Macad::Occt::Pnt2d% firstP2d, Macad::Occt::Pnt2d% lastP2d, double% firstpar, double% lastpar)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3d = &P3d;
    pin_ptr<Macad::Occt::Pnt2d> pp_firstP2d = &firstP2d;
    pin_ptr<Macad::Occt::Pnt2d> pp_lastP2d = &lastP2d;
    pin_ptr<double> pp_firstpar = &firstpar;
    pin_ptr<double> pp_lastpar = &lastpar;
    bool _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->DegeneratedValues(*(gp_Pnt*)pp_P3d, preci, *(gp_Pnt2d*)pp_firstP2d, *(gp_Pnt2d*)pp_lastP2d, *(double*)pp_firstpar, *(double*)pp_lastpar, true);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Surface::ProjectDegenerated(Macad::Occt::Pnt P3d, double preci, Macad::Occt::Pnt2d neighbour, Macad::Occt::Pnt2d% result)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3d = &P3d;
    pin_ptr<Macad::Occt::Pnt2d> pp_neighbour = &neighbour;
    pin_ptr<Macad::Occt::Pnt2d> pp_result = &result;
    bool _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->ProjectDegenerated(*(gp_Pnt*)pp_P3d, preci, *(gp_Pnt2d*)pp_neighbour, *(gp_Pnt2d*)pp_result);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Surface::ProjectDegenerated(int nbrPnt, Macad::Occt::TColgp_SequenceOfPnt^ points, Macad::Occt::TColgp_SequenceOfPnt2d^ pnt2d, double preci, bool direct)
{
    bool _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->ProjectDegenerated(nbrPnt, *(::TColgp_SequenceOfPnt*)points->NativeInstance, *(::TColgp_SequenceOfPnt2d*)pnt2d->NativeInstance, preci, direct);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Surface::IsDegenerated(Macad::Occt::Pnt2d p2d1, Macad::Occt::Pnt2d p2d2, double tol, double ratio)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_p2d1 = &p2d1;
    pin_ptr<Macad::Occt::Pnt2d> pp_p2d2 = &p2d2;
    bool _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->IsDegenerated(*(gp_Pnt2d*)pp_p2d1, *(gp_Pnt2d*)pp_p2d2, tol, ratio);
    return _result;
}

void Macad::Occt::ShapeAnalysis_Surface::Bounds(double% ufirst, double% ulast, double% vfirst, double% vlast)
{
    pin_ptr<double> pp_ufirst = &ufirst;
    pin_ptr<double> pp_ulast = &ulast;
    pin_ptr<double> pp_vfirst = &vfirst;
    pin_ptr<double> pp_vlast = &vlast;
    ((::ShapeAnalysis_Surface*)_NativeInstance)->Bounds(*(double*)pp_ufirst, *(double*)pp_ulast, *(double*)pp_vfirst, *(double*)pp_vlast);
}

void Macad::Occt::ShapeAnalysis_Surface::ComputeBoundIsos()
{
    ((::ShapeAnalysis_Surface*)_NativeInstance)->ComputeBoundIsos();
}

Macad::Occt::Geom_Curve^ Macad::Occt::ShapeAnalysis_Surface::UIso(double U)
{
    Handle(::Geom_Curve) _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->UIso(U);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom_Curve^ Macad::Occt::ShapeAnalysis_Surface::VIso(double V)
{
    Handle(::Geom_Curve) _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->VIso(V);
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

bool Macad::Occt::ShapeAnalysis_Surface::IsUClosed(double preci)
{
    bool _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->IsUClosed(preci);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Surface::IsUClosed()
{
    bool _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->IsUClosed(-1);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Surface::IsVClosed(double preci)
{
    bool _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->IsVClosed(preci);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Surface::IsVClosed()
{
    bool _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->IsVClosed(-1);
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::ShapeAnalysis_Surface::ValueOfUV(Macad::Occt::Pnt P3D, double preci)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    ::gp_Pnt2d _nativeResult = ((::ShapeAnalysis_Surface*)_NativeInstance)->ValueOfUV(*(gp_Pnt*)pp_P3D, preci);
    return Macad::Occt::Pnt2d(_nativeResult);
}

Macad::Occt::Pnt2d Macad::Occt::ShapeAnalysis_Surface::NextValueOfUV(Macad::Occt::Pnt2d p2dPrev, Macad::Occt::Pnt P3D, double preci, double maxpreci)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_p2dPrev = &p2dPrev;
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    ::gp_Pnt2d _nativeResult = ((::ShapeAnalysis_Surface*)_NativeInstance)->NextValueOfUV(*(gp_Pnt2d*)pp_p2dPrev, *(gp_Pnt*)pp_P3D, preci, maxpreci);
    return Macad::Occt::Pnt2d(_nativeResult);
}

Macad::Occt::Pnt2d Macad::Occt::ShapeAnalysis_Surface::NextValueOfUV(Macad::Occt::Pnt2d p2dPrev, Macad::Occt::Pnt P3D, double preci)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_p2dPrev = &p2dPrev;
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    ::gp_Pnt2d _nativeResult = ((::ShapeAnalysis_Surface*)_NativeInstance)->NextValueOfUV(*(gp_Pnt2d*)pp_p2dPrev, *(gp_Pnt*)pp_P3D, preci, -1.);
    return Macad::Occt::Pnt2d(_nativeResult);
}

double Macad::Occt::ShapeAnalysis_Surface::UVFromIso(Macad::Occt::Pnt P3D, double preci, double% U, double% V)
{
    pin_ptr<Macad::Occt::Pnt> pp_P3D = &P3D;
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    double _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->UVFromIso(*(gp_Pnt*)pp_P3D, preci, *(double*)pp_U, *(double*)pp_V);
    return _result;
}

double Macad::Occt::ShapeAnalysis_Surface::UCloseVal()
{
    double _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->UCloseVal();
    return _result;
}

double Macad::Occt::ShapeAnalysis_Surface::VCloseVal()
{
    double _result = ((::ShapeAnalysis_Surface*)_NativeInstance)->VCloseVal();
    return _result;
}

Macad::Occt::Bnd_Box^ Macad::Occt::ShapeAnalysis_Surface::GetBoxUF()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::ShapeAnalysis_Surface*)_NativeInstance)->GetBoxUF();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::ShapeAnalysis_Surface::GetBoxUL()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::ShapeAnalysis_Surface*)_NativeInstance)->GetBoxUL();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::ShapeAnalysis_Surface::GetBoxVF()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::ShapeAnalysis_Surface*)_NativeInstance)->GetBoxVF();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::ShapeAnalysis_Surface::GetBoxVL()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::ShapeAnalysis_Surface*)_NativeInstance)->GetBoxVL();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::ShapeAnalysis_Surface^ Macad::Occt::ShapeAnalysis_Surface::CreateDowncasted(::ShapeAnalysis_Surface* instance)
{
    return gcnew Macad::Occt::ShapeAnalysis_Surface( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_TransferParameters
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_TransferParameters::ShapeAnalysis_TransferParameters()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeAnalysis_TransferParameters();
}

Macad::Occt::ShapeAnalysis_TransferParameters::ShapeAnalysis_TransferParameters(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeAnalysis_TransferParameters(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_TransferParameters::Init(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    ((::ShapeAnalysis_TransferParameters*)_NativeInstance)->Init(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_TransferParameters::SetMaxTolerance(double maxtol)
{
    ((::ShapeAnalysis_TransferParameters*)_NativeInstance)->SetMaxTolerance(maxtol);
}

Macad::Occt::TColStd_HSequenceOfReal^ Macad::Occt::ShapeAnalysis_TransferParameters::Perform(Macad::Occt::TColStd_HSequenceOfReal^ Params, bool To2d)
{
    Handle(::TColStd_HSequenceOfReal) _result = ((::ShapeAnalysis_TransferParameters*)_NativeInstance)->Perform(Handle(::TColStd_HSequenceOfReal)(Params->NativeInstance), To2d);
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfReal::CreateDowncasted(_result.get());
}

double Macad::Occt::ShapeAnalysis_TransferParameters::Perform(double Param, bool To2d)
{
    double _result = ((::ShapeAnalysis_TransferParameters*)_NativeInstance)->Perform(Param, To2d);
    return _result;
}

void Macad::Occt::ShapeAnalysis_TransferParameters::TransferRange(Macad::Occt::TopoDS_Edge^ newEdge, double prevPar, double currPar, bool To2d)
{
    ((::ShapeAnalysis_TransferParameters*)_NativeInstance)->TransferRange(*(::TopoDS_Edge*)newEdge->NativeInstance, prevPar, currPar, To2d);
}

bool Macad::Occt::ShapeAnalysis_TransferParameters::IsSameRange()
{
    bool _result = ((::ShapeAnalysis_TransferParameters*)_NativeInstance)->IsSameRange();
    return _result;
}

Macad::Occt::ShapeAnalysis_TransferParameters^ Macad::Occt::ShapeAnalysis_TransferParameters::CreateDowncasted(::ShapeAnalysis_TransferParameters* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::ShapeAnalysis_TransferParametersProj)))
        return Macad::Occt::ShapeAnalysis_TransferParametersProj::CreateDowncasted((::ShapeAnalysis_TransferParametersProj*)instance);
    
    return gcnew Macad::Occt::ShapeAnalysis_TransferParameters( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_TransferParametersProj
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_TransferParametersProj::ShapeAnalysis_TransferParametersProj()
    : Macad::Occt::ShapeAnalysis_TransferParameters(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeAnalysis_TransferParametersProj();
}

Macad::Occt::ShapeAnalysis_TransferParametersProj::ShapeAnalysis_TransferParametersProj(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::ShapeAnalysis_TransferParameters(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeAnalysis_TransferParametersProj(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_TransferParametersProj::Init(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    ((::ShapeAnalysis_TransferParametersProj*)_NativeInstance)->Init(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::TColStd_HSequenceOfReal^ Macad::Occt::ShapeAnalysis_TransferParametersProj::Perform(Macad::Occt::TColStd_HSequenceOfReal^ Papams, bool To2d)
{
    Handle(::TColStd_HSequenceOfReal) _result = ((::ShapeAnalysis_TransferParametersProj*)_NativeInstance)->Perform(Handle(::TColStd_HSequenceOfReal)(Papams->NativeInstance), To2d);
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HSequenceOfReal::CreateDowncasted(_result.get());
}

double Macad::Occt::ShapeAnalysis_TransferParametersProj::Perform(double Param, bool To2d)
{
    double _result = ((::ShapeAnalysis_TransferParametersProj*)_NativeInstance)->Perform(Param, To2d);
    return _result;
}

void Macad::Occt::ShapeAnalysis_TransferParametersProj::TransferRange(Macad::Occt::TopoDS_Edge^ newEdge, double prevPar, double currPar, bool Is2d)
{
    ((::ShapeAnalysis_TransferParametersProj*)_NativeInstance)->TransferRange(*(::TopoDS_Edge*)newEdge->NativeInstance, prevPar, currPar, Is2d);
}

bool Macad::Occt::ShapeAnalysis_TransferParametersProj::IsSameRange()
{
    bool _result = ((::ShapeAnalysis_TransferParametersProj*)_NativeInstance)->IsSameRange();
    return _result;
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeAnalysis_TransferParametersProj::CopyNMVertex(Macad::Occt::TopoDS_Vertex^ theVert, Macad::Occt::TopoDS_Edge^ toedge, Macad::Occt::TopoDS_Edge^ fromedge)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ::ShapeAnalysis_TransferParametersProj::CopyNMVertex(*(::TopoDS_Vertex*)theVert->NativeInstance, *(::TopoDS_Edge*)toedge->NativeInstance, *(::TopoDS_Edge*)fromedge->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeAnalysis_TransferParametersProj::CopyNMVertex(Macad::Occt::TopoDS_Vertex^ theVert, Macad::Occt::TopoDS_Face^ toFace, Macad::Occt::TopoDS_Face^ fromFace)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ::ShapeAnalysis_TransferParametersProj::CopyNMVertex(*(::TopoDS_Vertex*)theVert->NativeInstance, *(::TopoDS_Face*)toFace->NativeInstance, *(::TopoDS_Face*)fromFace->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::ShapeAnalysis_TransferParametersProj^ Macad::Occt::ShapeAnalysis_TransferParametersProj::CreateDowncasted(::ShapeAnalysis_TransferParametersProj* instance)
{
    return gcnew Macad::Occt::ShapeAnalysis_TransferParametersProj( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_WireOrder
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_WireOrder::ShapeAnalysis_WireOrder()
    : Macad::Occt::BaseClass<::ShapeAnalysis_WireOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_WireOrder();
}

Macad::Occt::ShapeAnalysis_WireOrder::ShapeAnalysis_WireOrder(bool theMode3D, double theTolerance, bool theModeBoth)
    : Macad::Occt::BaseClass<::ShapeAnalysis_WireOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_WireOrder(theMode3D, theTolerance, theModeBoth);
}

Macad::Occt::ShapeAnalysis_WireOrder::ShapeAnalysis_WireOrder(bool theMode3D, double theTolerance)
    : Macad::Occt::BaseClass<::ShapeAnalysis_WireOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_WireOrder(theMode3D, theTolerance, false);
}

void Macad::Occt::ShapeAnalysis_WireOrder::SetMode(bool theMode3D, double theTolerance, bool theModeBoth)
{
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->SetMode(theMode3D, theTolerance, theModeBoth);
}

void Macad::Occt::ShapeAnalysis_WireOrder::SetMode(bool theMode3D, double theTolerance)
{
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->SetMode(theMode3D, theTolerance, false);
}

double Macad::Occt::ShapeAnalysis_WireOrder::Tolerance()
{
    double _result = ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Tolerance();
    return _result;
}

void Macad::Occt::ShapeAnalysis_WireOrder::Clear()
{
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Clear();
}

void Macad::Occt::ShapeAnalysis_WireOrder::Add(Macad::Occt::XYZ theStart3d, Macad::Occt::XYZ theEnd3d)
{
    pin_ptr<Macad::Occt::XYZ> pp_theStart3d = &theStart3d;
    pin_ptr<Macad::Occt::XYZ> pp_theEnd3d = &theEnd3d;
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Add(*(gp_XYZ*)pp_theStart3d, *(gp_XYZ*)pp_theEnd3d);
}

void Macad::Occt::ShapeAnalysis_WireOrder::Add(Macad::Occt::XY theStart2d, Macad::Occt::XY theEnd2d)
{
    pin_ptr<Macad::Occt::XY> pp_theStart2d = &theStart2d;
    pin_ptr<Macad::Occt::XY> pp_theEnd2d = &theEnd2d;
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Add(*(gp_XY*)pp_theStart2d, *(gp_XY*)pp_theEnd2d);
}

void Macad::Occt::ShapeAnalysis_WireOrder::Add(Macad::Occt::XYZ theStart3d, Macad::Occt::XYZ theEnd3d, Macad::Occt::XY theStart2d, Macad::Occt::XY theEnd2d)
{
    pin_ptr<Macad::Occt::XYZ> pp_theStart3d = &theStart3d;
    pin_ptr<Macad::Occt::XYZ> pp_theEnd3d = &theEnd3d;
    pin_ptr<Macad::Occt::XY> pp_theStart2d = &theStart2d;
    pin_ptr<Macad::Occt::XY> pp_theEnd2d = &theEnd2d;
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Add(*(gp_XYZ*)pp_theStart3d, *(gp_XYZ*)pp_theEnd3d, *(gp_XY*)pp_theStart2d, *(gp_XY*)pp_theEnd2d);
}

int Macad::Occt::ShapeAnalysis_WireOrder::NbEdges()
{
    int _result = ((::ShapeAnalysis_WireOrder*)_NativeInstance)->NbEdges();
    return _result;
}

void Macad::Occt::ShapeAnalysis_WireOrder::Perform(bool closed)
{
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Perform(closed);
}

void Macad::Occt::ShapeAnalysis_WireOrder::Perform()
{
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Perform(true);
}

bool Macad::Occt::ShapeAnalysis_WireOrder::IsDone()
{
    bool _result = ((::ShapeAnalysis_WireOrder*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::ShapeAnalysis_WireOrder::Status()
{
    int _result = ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Status();
    return _result;
}

int Macad::Occt::ShapeAnalysis_WireOrder::Ordered(int theIdx)
{
    int _result = ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Ordered(theIdx);
    return _result;
}

void Macad::Occt::ShapeAnalysis_WireOrder::XYZ(int theIdx, Macad::Occt::XYZ% theStart3D, Macad::Occt::XYZ% theEnd3D)
{
    pin_ptr<Macad::Occt::XYZ> pp_theStart3D = &theStart3D;
    pin_ptr<Macad::Occt::XYZ> pp_theEnd3D = &theEnd3D;
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->XYZ(theIdx, *(gp_XYZ*)pp_theStart3D, *(gp_XYZ*)pp_theEnd3D);
}

void Macad::Occt::ShapeAnalysis_WireOrder::XY(int theIdx, Macad::Occt::XY% theStart2D, Macad::Occt::XY% theEnd2D)
{
    pin_ptr<Macad::Occt::XY> pp_theStart2D = &theStart2D;
    pin_ptr<Macad::Occt::XY> pp_theEnd2D = &theEnd2D;
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->XY(theIdx, *(gp_XY*)pp_theStart2D, *(gp_XY*)pp_theEnd2D);
}

double Macad::Occt::ShapeAnalysis_WireOrder::Gap(int num)
{
    double _result = ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Gap(num);
    return _result;
}

double Macad::Occt::ShapeAnalysis_WireOrder::Gap()
{
    double _result = ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Gap(0);
    return _result;
}

void Macad::Occt::ShapeAnalysis_WireOrder::SetChains(double gap)
{
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->SetChains(gap);
}

int Macad::Occt::ShapeAnalysis_WireOrder::NbChains()
{
    int _result = ((::ShapeAnalysis_WireOrder*)_NativeInstance)->NbChains();
    return _result;
}

void Macad::Occt::ShapeAnalysis_WireOrder::Chain(int num, int% n1, int% n2)
{
    pin_ptr<int> pp_n1 = &n1;
    pin_ptr<int> pp_n2 = &n2;
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Chain(num, *(int*)pp_n1, *(int*)pp_n2);
}

void Macad::Occt::ShapeAnalysis_WireOrder::SetCouples(double gap)
{
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->SetCouples(gap);
}

int Macad::Occt::ShapeAnalysis_WireOrder::NbCouples()
{
    int _result = ((::ShapeAnalysis_WireOrder*)_NativeInstance)->NbCouples();
    return _result;
}

void Macad::Occt::ShapeAnalysis_WireOrder::Couple(int num, int% n1, int% n2)
{
    pin_ptr<int> pp_n1 = &n1;
    pin_ptr<int> pp_n2 = &n2;
    ((::ShapeAnalysis_WireOrder*)_NativeInstance)->Couple(num, *(int*)pp_n1, *(int*)pp_n2);
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_Wire
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_Wire::ShapeAnalysis_Wire()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeAnalysis_Wire();
}

Macad::Occt::ShapeAnalysis_Wire::ShapeAnalysis_Wire(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double precision)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::ShapeAnalysis_Wire(*(::TopoDS_Wire*)wire->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, precision);
}

void Macad::Occt::ShapeAnalysis_Wire::Init(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double precision)
{
    ((::ShapeAnalysis_Wire*)_NativeInstance)->Init(*(::TopoDS_Wire*)wire->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, precision);
}

void Macad::Occt::ShapeAnalysis_Wire::Load(Macad::Occt::TopoDS_Wire^ wire)
{
    ((::ShapeAnalysis_Wire*)_NativeInstance)->Load(*(::TopoDS_Wire*)wire->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_Wire::SetFace(Macad::Occt::TopoDS_Face^ face)
{
    ((::ShapeAnalysis_Wire*)_NativeInstance)->SetFace(*(::TopoDS_Face*)face->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_Wire::SetSurface(Macad::Occt::Geom_Surface^ surface)
{
    ((::ShapeAnalysis_Wire*)_NativeInstance)->SetSurface(Handle(::Geom_Surface)(surface->NativeInstance));
}

void Macad::Occt::ShapeAnalysis_Wire::SetSurface(Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location)
{
    ((::ShapeAnalysis_Wire*)_NativeInstance)->SetSurface(Handle(::Geom_Surface)(surface->NativeInstance), *(::TopLoc_Location*)location->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_Wire::SetPrecision(double precision)
{
    ((::ShapeAnalysis_Wire*)_NativeInstance)->SetPrecision(precision);
}

void Macad::Occt::ShapeAnalysis_Wire::ClearStatuses()
{
    ((::ShapeAnalysis_Wire*)_NativeInstance)->ClearStatuses();
}

bool Macad::Occt::ShapeAnalysis_Wire::IsLoaded()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->IsLoaded();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::IsReady()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->IsReady();
    return _result;
}

double Macad::Occt::ShapeAnalysis_Wire::Precision()
{
    double _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->Precision();
    return _result;
}

int Macad::Occt::ShapeAnalysis_Wire::NbEdges()
{
    int _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->NbEdges();
    return _result;
}

Macad::Occt::TopoDS_Face^ Macad::Occt::ShapeAnalysis_Wire::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::ShapeAnalysis_Wire*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::ShapeAnalysis_Surface^ Macad::Occt::ShapeAnalysis_Wire::Surface()
{
    Handle(::ShapeAnalysis_Surface) _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->Surface();
    return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_Surface::CreateDowncasted(_result.get());
}

bool Macad::Occt::ShapeAnalysis_Wire::Perform()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->Perform();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOrder(bool isClosed, bool mode3d)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOrder(isClosed, mode3d);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOrder(bool isClosed)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOrder(isClosed, true);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOrder()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOrder(true, true);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckConnected(double prec)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckConnected(prec);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckConnected()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckConnected(0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSmall(double precsmall)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSmall(precsmall);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSmall()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSmall(0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckEdgeCurves()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckEdgeCurves();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckDegenerated()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckDegenerated();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckClosed(double prec)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckClosed(prec);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckClosed()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckClosed(0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSelfIntersection()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSelfIntersection();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckLacking()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckLacking();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckGaps3d()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckGaps3d();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckGaps2d()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckGaps2d();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckCurveGaps()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckCurveGaps();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo, bool isClosed, bool theMode3D, bool theModeBoth)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOrder(*(::ShapeAnalysis_WireOrder*)sawo->NativeInstance, isClosed, theMode3D, theModeBoth);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo, bool isClosed, bool theMode3D)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOrder(*(::ShapeAnalysis_WireOrder*)sawo->NativeInstance, isClosed, theMode3D, false);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo, bool isClosed)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOrder(*(::ShapeAnalysis_WireOrder*)sawo->NativeInstance, isClosed, true, false);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOrder(Macad::Occt::ShapeAnalysis_WireOrder^ sawo)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOrder(*(::ShapeAnalysis_WireOrder*)sawo->NativeInstance, true, true, false);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckConnected(int num, double prec)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckConnected(num, prec);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckConnected(int num)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckConnected(num, 0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSmall(int num, double precsmall)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSmall(num, precsmall);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSmall(int num)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSmall(num, 0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSeam(int num, Macad::Occt::Geom2d_Curve^ C1, Macad::Occt::Geom2d_Curve^ C2, double% cf, double% cl)
{
    Handle(::Geom2d_Curve) h_C1 = C1->NativeInstance;
    Handle(::Geom2d_Curve) h_C2 = C2->NativeInstance;
    pin_ptr<double> pp_cf = &cf;
    pin_ptr<double> pp_cl = &cl;
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSeam(num, h_C1, h_C2, *(double*)pp_cf, *(double*)pp_cl);
    C1->NativeInstance = h_C1.get();
    C2->NativeInstance = h_C2.get();
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSeam(int num)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSeam(num);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckDegenerated(int num, Macad::Occt::Pnt2d% dgnr1, Macad::Occt::Pnt2d% dgnr2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_dgnr1 = &dgnr1;
    pin_ptr<Macad::Occt::Pnt2d> pp_dgnr2 = &dgnr2;
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckDegenerated(num, *(gp_Pnt2d*)pp_dgnr1, *(gp_Pnt2d*)pp_dgnr2);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckDegenerated(int num)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckDegenerated(num);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckGap3d(int num)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckGap3d(num);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckGap3d()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckGap3d(0);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckGap2d(int num)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckGap2d(num);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckGap2d()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckGap2d(0);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckCurveGap(int num)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckCurveGap(num);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckCurveGap()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckCurveGap(0);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSelfIntersectingEdge(int num)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSelfIntersectingEdge(num);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckIntersectingEdges(int num)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckIntersectingEdges(num);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckIntersectingEdges(int num1, int num2)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckIntersectingEdges(num1, num2);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckLacking(int num, double Tolerance, Macad::Occt::Pnt2d% p2d1, Macad::Occt::Pnt2d% p2d2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_p2d1 = &p2d1;
    pin_ptr<Macad::Occt::Pnt2d> pp_p2d2 = &p2d2;
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckLacking(num, Tolerance, *(gp_Pnt2d*)pp_p2d1, *(gp_Pnt2d*)pp_p2d2);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckLacking(int num, double Tolerance)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckLacking(num, Tolerance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckLacking(int num)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckLacking(num, 0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOuterBound(bool APIMake)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOuterBound(APIMake);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckOuterBound()
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckOuterBound(true);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckNotchedEdges(int num, int% shortNum, double% param, double Tolerance)
{
    pin_ptr<int> pp_shortNum = &shortNum;
    pin_ptr<double> pp_param = &param;
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckNotchedEdges(num, *(int*)pp_shortNum, *(double*)pp_param, Tolerance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckNotchedEdges(int num, int% shortNum, double% param)
{
    pin_ptr<int> pp_shortNum = &shortNum;
    pin_ptr<double> pp_param = &param;
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckNotchedEdges(num, *(int*)pp_shortNum, *(double*)pp_param, 0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckSmallArea(Macad::Occt::TopoDS_Wire^ theWire)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckSmallArea(*(::TopoDS_Wire*)theWire->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckShapeConnect(Macad::Occt::TopoDS_Shape^ shape, double prec)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckShapeConnect(*(::TopoDS_Shape*)shape->NativeInstance, prec);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckShapeConnect(Macad::Occt::TopoDS_Shape^ shape)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckShapeConnect(*(::TopoDS_Shape*)shape->NativeInstance, 0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckShapeConnect(double% tailhead, double% tailtail, double% headtail, double% headhead, Macad::Occt::TopoDS_Shape^ shape, double prec)
{
    pin_ptr<double> pp_tailhead = &tailhead;
    pin_ptr<double> pp_tailtail = &tailtail;
    pin_ptr<double> pp_headtail = &headtail;
    pin_ptr<double> pp_headhead = &headhead;
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckShapeConnect(*(double*)pp_tailhead, *(double*)pp_tailtail, *(double*)pp_headtail, *(double*)pp_headhead, *(::TopoDS_Shape*)shape->NativeInstance, prec);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckShapeConnect(double% tailhead, double% tailtail, double% headtail, double% headhead, Macad::Occt::TopoDS_Shape^ shape)
{
    pin_ptr<double> pp_tailhead = &tailhead;
    pin_ptr<double> pp_tailtail = &tailtail;
    pin_ptr<double> pp_headtail = &headtail;
    pin_ptr<double> pp_headhead = &headhead;
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckShapeConnect(*(double*)pp_tailhead, *(double*)pp_tailtail, *(double*)pp_headtail, *(double*)pp_headhead, *(::TopoDS_Shape*)shape->NativeInstance, 0.);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckLoop(Macad::Occt::TopTools_IndexedMapOfShape^ aMapLoopVertices, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ aMapVertexEdges, Macad::Occt::TopTools_MapOfShape^ aMapSmallEdges, Macad::Occt::TopTools_MapOfShape^ aMapSeemEdges)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckLoop(*(::TopTools_IndexedMapOfShape*)aMapLoopVertices->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)aMapVertexEdges->NativeInstance, *(::TopTools_MapOfShape*)aMapSmallEdges->NativeInstance, *(::TopTools_MapOfShape*)aMapSeemEdges->NativeInstance);
    return _result;
}

bool Macad::Occt::ShapeAnalysis_Wire::CheckTail(Macad::Occt::TopoDS_Edge^ theEdge1, Macad::Occt::TopoDS_Edge^ theEdge2, double theMaxSine, double theMaxWidth, double theMaxTolerance, Macad::Occt::TopoDS_Edge^ theEdge11, Macad::Occt::TopoDS_Edge^ theEdge12, Macad::Occt::TopoDS_Edge^ theEdge21, Macad::Occt::TopoDS_Edge^ theEdge22)
{
    bool _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->CheckTail(*(::TopoDS_Edge*)theEdge1->NativeInstance, *(::TopoDS_Edge*)theEdge2->NativeInstance, theMaxSine, theMaxWidth, theMaxTolerance, *(::TopoDS_Edge*)theEdge11->NativeInstance, *(::TopoDS_Edge*)theEdge12->NativeInstance, *(::TopoDS_Edge*)theEdge21->NativeInstance, *(::TopoDS_Edge*)theEdge22->NativeInstance);
    return _result;
}

double Macad::Occt::ShapeAnalysis_Wire::MinDistance3d()
{
    double _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->MinDistance3d();
    return _result;
}

double Macad::Occt::ShapeAnalysis_Wire::MinDistance2d()
{
    double _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->MinDistance2d();
    return _result;
}

double Macad::Occt::ShapeAnalysis_Wire::MaxDistance3d()
{
    double _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->MaxDistance3d();
    return _result;
}

double Macad::Occt::ShapeAnalysis_Wire::MaxDistance2d()
{
    double _result = ((::ShapeAnalysis_Wire*)_NativeInstance)->MaxDistance2d();
    return _result;
}

Macad::Occt::ShapeAnalysis_Wire^ Macad::Occt::ShapeAnalysis_Wire::CreateDowncasted(::ShapeAnalysis_Wire* instance)
{
    return gcnew Macad::Occt::ShapeAnalysis_Wire( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeAnalysis_WireVertex
//---------------------------------------------------------------------

Macad::Occt::ShapeAnalysis_WireVertex::ShapeAnalysis_WireVertex()
    : Macad::Occt::BaseClass<::ShapeAnalysis_WireVertex>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::ShapeAnalysis_WireVertex();
}

void Macad::Occt::ShapeAnalysis_WireVertex::Init(Macad::Occt::TopoDS_Wire^ wire, double preci)
{
    ((::ShapeAnalysis_WireVertex*)_NativeInstance)->Init(*(::TopoDS_Wire*)wire->NativeInstance, preci);
}

void Macad::Occt::ShapeAnalysis_WireVertex::Load(Macad::Occt::TopoDS_Wire^ wire)
{
    ((::ShapeAnalysis_WireVertex*)_NativeInstance)->Load(*(::TopoDS_Wire*)wire->NativeInstance);
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetPrecision(double preci)
{
    ((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetPrecision(preci);
}

void Macad::Occt::ShapeAnalysis_WireVertex::Analyze()
{
    ((::ShapeAnalysis_WireVertex*)_NativeInstance)->Analyze();
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetSameVertex(int num)
{
    ((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetSameVertex(num);
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetSameCoords(int num)
{
    ((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetSameCoords(num);
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetClose(int num)
{
    ((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetClose(num);
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetEnd(int num, Macad::Occt::XYZ pos, double ufol)
{
    pin_ptr<Macad::Occt::XYZ> pp_pos = &pos;
    ((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetEnd(num, *(gp_XYZ*)pp_pos, ufol);
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetStart(int num, Macad::Occt::XYZ pos, double upre)
{
    pin_ptr<Macad::Occt::XYZ> pp_pos = &pos;
    ((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetStart(num, *(gp_XYZ*)pp_pos, upre);
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetInters(int num, Macad::Occt::XYZ pos, double upre, double ufol)
{
    pin_ptr<Macad::Occt::XYZ> pp_pos = &pos;
    ((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetInters(num, *(gp_XYZ*)pp_pos, upre, ufol);
}

void Macad::Occt::ShapeAnalysis_WireVertex::SetDisjoined(int num)
{
    ((::ShapeAnalysis_WireVertex*)_NativeInstance)->SetDisjoined(num);
}

bool Macad::Occt::ShapeAnalysis_WireVertex::IsDone()
{
    bool _result = ((::ShapeAnalysis_WireVertex*)_NativeInstance)->IsDone();
    return _result;
}

double Macad::Occt::ShapeAnalysis_WireVertex::Precision()
{
    double _result = ((::ShapeAnalysis_WireVertex*)_NativeInstance)->Precision();
    return _result;
}

int Macad::Occt::ShapeAnalysis_WireVertex::NbEdges()
{
    int _result = ((::ShapeAnalysis_WireVertex*)_NativeInstance)->NbEdges();
    return _result;
}

int Macad::Occt::ShapeAnalysis_WireVertex::Status(int num)
{
    int _result = ((::ShapeAnalysis_WireVertex*)_NativeInstance)->Status(num);
    return _result;
}

Macad::Occt::XYZ Macad::Occt::ShapeAnalysis_WireVertex::Position(int num)
{
    ::gp_XYZ _nativeResult = ((::ShapeAnalysis_WireVertex*)_NativeInstance)->Position(num);
    return Macad::Occt::XYZ(_nativeResult);
}

double Macad::Occt::ShapeAnalysis_WireVertex::UPrevious(int num)
{
    double _result = ((::ShapeAnalysis_WireVertex*)_NativeInstance)->UPrevious(num);
    return _result;
}

double Macad::Occt::ShapeAnalysis_WireVertex::UFollowing(int num)
{
    double _result = ((::ShapeAnalysis_WireVertex*)_NativeInstance)->UFollowing(num);
    return _result;
}

int Macad::Occt::ShapeAnalysis_WireVertex::Data(int num, Macad::Occt::XYZ% pos, double% upre, double% ufol)
{
    pin_ptr<Macad::Occt::XYZ> pp_pos = &pos;
    pin_ptr<double> pp_upre = &upre;
    pin_ptr<double> pp_ufol = &ufol;
    int _result = ((::ShapeAnalysis_WireVertex*)_NativeInstance)->Data(num, *(gp_XYZ*)pp_pos, *(double*)pp_upre, *(double*)pp_ufol);
    return _result;
}

int Macad::Occt::ShapeAnalysis_WireVertex::NextStatus(int stat, int num)
{
    int _result = ((::ShapeAnalysis_WireVertex*)_NativeInstance)->NextStatus(stat, num);
    return _result;
}

int Macad::Occt::ShapeAnalysis_WireVertex::NextStatus(int stat)
{
    int _result = ((::ShapeAnalysis_WireVertex*)_NativeInstance)->NextStatus(stat, 0);
    return _result;
}

int Macad::Occt::ShapeAnalysis_WireVertex::NextCriter(int crit, int num)
{
    int _result = ((::ShapeAnalysis_WireVertex*)_NativeInstance)->NextCriter(crit, num);
    return _result;
}

int Macad::Occt::ShapeAnalysis_WireVertex::NextCriter(int crit)
{
    int _result = ((::ShapeAnalysis_WireVertex*)_NativeInstance)->NextCriter(crit, 0);
    return _result;
}


