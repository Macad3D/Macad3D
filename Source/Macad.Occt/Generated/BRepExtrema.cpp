// Generated wrapper code for package BRepExtrema

#include "OcctPCH.h"
#include "BRepExtrema.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TColStd.h"
#include "TopoDS.h"
#include "gp.h"
#include "Bnd.h"
#include "Extrema.h"
#include "Message.h"


//---------------------------------------------------------------------
//  Class  BRepExtrema_SeqOfSolution
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_SeqOfSolution::BRepExtrema_SeqOfSolution()
    : Macad::Occt::BaseClass<::BRepExtrema_SeqOfSolution>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SeqOfSolution();
}

Macad::Occt::BRepExtrema_SeqOfSolution::BRepExtrema_SeqOfSolution(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepExtrema_SeqOfSolution>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SeqOfSolution(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::BRepExtrema_SeqOfSolution::Size()
{
    int _result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::BRepExtrema_SeqOfSolution::Length()
{
    int _result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::BRepExtrema_SeqOfSolution::Lower()
{
    int _result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::BRepExtrema_SeqOfSolution::Upper()
{
    int _result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::BRepExtrema_SeqOfSolution::IsEmpty()
{
    bool _result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Reverse()
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Reverse();
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Exchange(int I, int J)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Clear()
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRepExtrema_SeqOfSolution^ Macad::Occt::BRepExtrema_SeqOfSolution::Assign(Macad::Occt::BRepExtrema_SeqOfSolution^ theOther)
{
    ::BRepExtrema_SeqOfSolution* _result = new ::BRepExtrema_SeqOfSolution();
    *_result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Assign(*(::BRepExtrema_SeqOfSolution*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SeqOfSolution(_result);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Remove(Macad::Occt::BRepExtrema_SeqOfSolution::Iterator^ thePosition)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Remove(*(::BRepExtrema_SeqOfSolution::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Append(Macad::Occt::BRepExtrema_SolutionElem^ theItem)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Append(*(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Prepend(Macad::Occt::BRepExtrema_SolutionElem^ theItem)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Prepend(*(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::InsertBefore(int theIndex, Macad::Occt::BRepExtrema_SolutionElem^ theItem)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->InsertBefore(theIndex, *(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::InsertAfter(Macad::Occt::BRepExtrema_SeqOfSolution::Iterator^ thePosition, Macad::Occt::BRepExtrema_SolutionElem^ theItem)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->InsertAfter(*(::BRepExtrema_SeqOfSolution::Iterator*)thePosition->NativeInstance, *(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Split(int theIndex, Macad::Occt::BRepExtrema_SeqOfSolution^ theSeq)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Split(theIndex, *(::BRepExtrema_SeqOfSolution*)theSeq->NativeInstance);
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::First()
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = (::BRepExtrema_SolutionElem)((::BRepExtrema_SeqOfSolution*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::ChangeFirst()
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::Last()
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = (::BRepExtrema_SolutionElem)((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::ChangeLast()
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::Value(int theIndex)
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = (::BRepExtrema_SolutionElem)((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::ChangeValue(int theIndex)
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::SetValue(int theIndex, Macad::Occt::BRepExtrema_SolutionElem^ theItem)
{
    ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->SetValue(theIndex, *(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

System::Collections::Generic::IEnumerator<Macad::Occt::BRepExtrema_SolutionElem^>^ Macad::Occt::BRepExtrema_SeqOfSolution::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepExtrema_SolutionElem^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::BRepExtrema_SeqOfSolution::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepExtrema_SolutionElem^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_SeqOfSolution::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_SeqOfSolution::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepExtrema_SeqOfSolution::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SeqOfSolution::Iterator();
}

bool Macad::Occt::BRepExtrema_SeqOfSolution::Iterator::More()
{
    bool _result = ((::BRepExtrema_SeqOfSolution::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Iterator::Next()
{
    ((::BRepExtrema_SeqOfSolution::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::Iterator::Value()
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = (::BRepExtrema_SolutionElem)((::BRepExtrema_SeqOfSolution::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::Iterator::ChangeValue()
{
    ::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
    *_result = ((::BRepExtrema_SeqOfSolution::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

bool Macad::Occt::BRepExtrema_SeqOfSolution::Iterator::IsEqual(Macad::Occt::BRepExtrema_SeqOfSolution::Iterator^ theOther)
{
    bool _result = ((::BRepExtrema_SeqOfSolution::Iterator*)_NativeInstance)->IsEqual(*(::BRepExtrema_SeqOfSolution::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepExtrema_SeqOfSolution::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::BRepExtrema_SeqOfSolution::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_MapOfIntegerPackedMapOfInteger
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::BRepExtrema_MapOfIntegerPackedMapOfInteger()
    : Macad::Occt::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
}

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::BRepExtrema_MapOfIntegerPackedMapOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::BRepExtrema_MapOfIntegerPackedMapOfInteger(int theNbBuckets)
    : Macad::Occt::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger(theNbBuckets, 0L);
}

void Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Exchange(Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ theOther)
{
    ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Exchange(*(::BRepExtrema_MapOfIntegerPackedMapOfInteger*)theOther->NativeInstance);
}

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Assign(Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ theOther)
{
    ::BRepExtrema_MapOfIntegerPackedMapOfInteger* _result = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
    *_result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Assign(*(::BRepExtrema_MapOfIntegerPackedMapOfInteger*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger(_result);
}

void Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::ReSize(int N)
{
    ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Bind(int theKey, Macad::Occt::TColStd_PackedMapOfInteger^ theItem)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Bind(*(int*)pp_theKey, *(::TColStd_PackedMapOfInteger*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TColStd_PackedMapOfInteger^ Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Bound(int theKey, Macad::Occt::TColStd_PackedMapOfInteger^ theItem)
{
    pin_ptr<int> pp_theKey = &theKey;
    ::TColStd_PackedMapOfInteger* _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Bound(*(int*)pp_theKey, *(::TColStd_PackedMapOfInteger*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_PackedMapOfInteger(_result);
}

bool Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::IsBound(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->IsBound(*(int*)pp_theKey);
    return _result;
}

bool Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::UnBind(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->UnBind(*(int*)pp_theKey);
    return _result;
}

Macad::Occt::TColStd_PackedMapOfInteger^ Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Seek(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    const ::TColStd_PackedMapOfInteger* _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Seek(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_PackedMapOfInteger((::TColStd_PackedMapOfInteger*)_result);
}

Macad::Occt::TColStd_PackedMapOfInteger^ Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Find(int theKey)
{
    ::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
    pin_ptr<int> pp_theKey = &theKey;
    *_result = (::TColStd_PackedMapOfInteger)((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Find(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_PackedMapOfInteger(_result);
}

Macad::Occt::TColStd_PackedMapOfInteger^ Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::ChangeSeek(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    ::TColStd_PackedMapOfInteger* _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->ChangeSeek(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_PackedMapOfInteger(_result);
}

Macad::Occt::TColStd_PackedMapOfInteger^ Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::ChangeFind(int theKey)
{
    ::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
    pin_ptr<int> pp_theKey = &theKey;
    *_result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_PackedMapOfInteger(_result);
}

void Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Clear(bool doReleaseMemory)
{
    ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Clear()
{
    ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Clear(false);
}

int Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Size()
{
    int _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator();
}

bool Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator::More()
{
    bool _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator::Next()
{
    ((::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TColStd_PackedMapOfInteger^ Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator::Value()
{
    ::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
    *_result = (::TColStd_PackedMapOfInteger)((::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_PackedMapOfInteger(_result);
}

Macad::Occt::TColStd_PackedMapOfInteger^ Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator::ChangeValue()
{
    ::TColStd_PackedMapOfInteger* _result = new ::TColStd_PackedMapOfInteger();
    *_result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_PackedMapOfInteger(_result);
}

int Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator::Key()
{
    int _result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ShapeList
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ShapeList::BRepExtrema_ShapeList(int theIncrement)
    : Macad::Occt::BaseClass<::BRepExtrema_ShapeList>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeList(theIncrement);
}

Macad::Occt::BRepExtrema_ShapeList::BRepExtrema_ShapeList()
    : Macad::Occt::BaseClass<::BRepExtrema_ShapeList>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeList(256);
}

Macad::Occt::BRepExtrema_ShapeList::BRepExtrema_ShapeList(int theIncrement, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepExtrema_ShapeList>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeList(theIncrement, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::BRepExtrema_ShapeList::Length()
{
    int _result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::BRepExtrema_ShapeList::Size()
{
    int _result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::BRepExtrema_ShapeList::Lower()
{
    int _result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::BRepExtrema_ShapeList::Upper()
{
    int _result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::BRepExtrema_ShapeList::IsEmpty()
{
    bool _result = ((::BRepExtrema_ShapeList*)_NativeInstance)->IsEmpty();
    return _result;
}

Macad::Occt::BRepExtrema_ShapeList^ Macad::Occt::BRepExtrema_ShapeList::Assign(Macad::Occt::BRepExtrema_ShapeList^ theOther, bool theOwnAllocator)
{
    ::BRepExtrema_ShapeList* _result = new ::BRepExtrema_ShapeList();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Assign(*(::BRepExtrema_ShapeList*)theOther->NativeInstance, theOwnAllocator);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_ShapeList(_result);
}

Macad::Occt::BRepExtrema_ShapeList^ Macad::Occt::BRepExtrema_ShapeList::Assign(Macad::Occt::BRepExtrema_ShapeList^ theOther)
{
    ::BRepExtrema_ShapeList* _result = new ::BRepExtrema_ShapeList();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Assign(*(::BRepExtrema_ShapeList*)theOther->NativeInstance, true);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_ShapeList(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_ShapeList::Append(Macad::Occt::TopoDS_Shape^ theValue)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Append(*(::TopoDS_Shape*)theValue->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepExtrema_ShapeList::EraseLast()
{
    ((::BRepExtrema_ShapeList*)_NativeInstance)->EraseLast();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_ShapeList::Appended()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->Appended();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_ShapeList::Value(int theIndex)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepExtrema_ShapeList*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_ShapeList::First()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepExtrema_ShapeList*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_ShapeList::ChangeFirst()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_ShapeList::Last()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepExtrema_ShapeList*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_ShapeList::ChangeLast()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_ShapeList::ChangeValue(int theIndex)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_ShapeList::SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theValue)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_ShapeList*)_NativeInstance)->SetValue(theIndex, *(::TopoDS_Shape*)theValue->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepExtrema_ShapeList::Clear(bool theReleaseMemory)
{
    ((::BRepExtrema_ShapeList*)_NativeInstance)->Clear(theReleaseMemory);
}

void Macad::Occt::BRepExtrema_ShapeList::Clear()
{
    ((::BRepExtrema_ShapeList*)_NativeInstance)->Clear(false);
}

void Macad::Occt::BRepExtrema_ShapeList::SetIncrement(int theIncrement)
{
    ((::BRepExtrema_ShapeList*)_NativeInstance)->SetIncrement(theIncrement);
}

System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ Macad::Occt::BRepExtrema_ShapeList::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TopoDS_Shape^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::BRepExtrema_ShapeList::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TopoDS_Shape^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ShapeList::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  BRepExtrema_ElementFilter
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ElementFilter::BRepExtrema_ElementFilter()
    : Macad::Occt::BaseClass<::BRepExtrema_ElementFilter>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ElementFilter();
}

Macad::Occt::BRepExtrema_ElementFilter::FilterResult Macad::Occt::BRepExtrema_ElementFilter::PreCheckElements(int parameter1, int parameter2)
{
    ::BRepExtrema_ElementFilter::FilterResult _result = ((::BRepExtrema_ElementFilter*)_NativeInstance)->PreCheckElements(parameter1, parameter2);
    return (Macad::Occt::BRepExtrema_ElementFilter::FilterResult)_result;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_SolutionElem
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_SolutionElem::BRepExtrema_SolutionElem()
    : Macad::Occt::BaseClass<::BRepExtrema_SolutionElem>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SolutionElem();
}

Macad::Occt::BRepExtrema_SolutionElem::BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Vertex^ theVertex)
    : Macad::Occt::BaseClass<::BRepExtrema_SolutionElem>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    _NativeInstance = new ::BRepExtrema_SolutionElem(theDist, *(gp_Pnt*)pp_thePoint, (::BRepExtrema_SupportType)theSolType, *(::TopoDS_Vertex*)theVertex->NativeInstance);
}

Macad::Occt::BRepExtrema_SolutionElem::BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Edge^ theEdge, double theParam)
    : Macad::Occt::BaseClass<::BRepExtrema_SolutionElem>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    _NativeInstance = new ::BRepExtrema_SolutionElem(theDist, *(gp_Pnt*)pp_thePoint, (::BRepExtrema_SupportType)theSolType, *(::TopoDS_Edge*)theEdge->NativeInstance, theParam);
}

Macad::Occt::BRepExtrema_SolutionElem::BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Face^ theFace, double theU, double theV)
    : Macad::Occt::BaseClass<::BRepExtrema_SolutionElem>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    _NativeInstance = new ::BRepExtrema_SolutionElem(theDist, *(gp_Pnt*)pp_thePoint, (::BRepExtrema_SupportType)theSolType, *(::TopoDS_Face*)theFace->NativeInstance, theU, theV);
}

double Macad::Occt::BRepExtrema_SolutionElem::Dist()
{
    double _result = ((::BRepExtrema_SolutionElem*)_NativeInstance)->Dist();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_SolutionElem::Point()
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_SolutionElem*)_NativeInstance)->Point();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::BRepExtrema_SupportType Macad::Occt::BRepExtrema_SolutionElem::SupportKind()
{
    ::BRepExtrema_SupportType _result = ((::BRepExtrema_SolutionElem*)_NativeInstance)->SupportKind();
    return (Macad::Occt::BRepExtrema_SupportType)_result;
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepExtrema_SolutionElem::Vertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepExtrema_SolutionElem*)_NativeInstance)->Vertex();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepExtrema_SolutionElem::Edge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepExtrema_SolutionElem*)_NativeInstance)->Edge();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepExtrema_SolutionElem::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepExtrema_SolutionElem*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

void Macad::Occt::BRepExtrema_SolutionElem::EdgeParameter(double% theParam)
{
    pin_ptr<double> pp_theParam = &theParam;
    ((::BRepExtrema_SolutionElem*)_NativeInstance)->EdgeParameter(*(double*)pp_theParam);
}

void Macad::Occt::BRepExtrema_SolutionElem::FaceParameter(double% theU, double% theV)
{
    pin_ptr<double> pp_theU = &theU;
    pin_ptr<double> pp_theV = &theV;
    ((::BRepExtrema_SolutionElem*)_NativeInstance)->FaceParameter(*(double*)pp_theU, *(double*)pp_theV);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_DistanceSS
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_DistanceSS::BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, double theDstRef, double theDeflection, Macad::Occt::Extrema_ExtFlag theExtFlag, Macad::Occt::Extrema_ExtAlgo theExtAlgo)
    : Macad::Occt::BaseClass<::BRepExtrema_DistanceSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistanceSS(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, *(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, theDstRef, theDeflection, (::Extrema_ExtFlag)theExtFlag, (::Extrema_ExtAlgo)theExtAlgo);
}

Macad::Occt::BRepExtrema_DistanceSS::BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, double theDstRef, double theDeflection, Macad::Occt::Extrema_ExtFlag theExtFlag)
    : Macad::Occt::BaseClass<::BRepExtrema_DistanceSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistanceSS(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, *(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, theDstRef, theDeflection, (::Extrema_ExtFlag)theExtFlag, Extrema_ExtAlgo_Grad);
}

Macad::Occt::BRepExtrema_DistanceSS::BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, double theDstRef, double theDeflection)
    : Macad::Occt::BaseClass<::BRepExtrema_DistanceSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistanceSS(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, *(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, theDstRef, theDeflection, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

Macad::Occt::BRepExtrema_DistanceSS::BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::Bnd_Box^ theBox1, Macad::Occt::Bnd_Box^ theBox2, double theDstRef)
    : Macad::Occt::BaseClass<::BRepExtrema_DistanceSS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistanceSS(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, *(::Bnd_Box*)theBox1->NativeInstance, *(::Bnd_Box*)theBox2->NativeInstance, theDstRef, ::Precision::Confusion(), Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

bool Macad::Occt::BRepExtrema_DistanceSS::IsDone()
{
    bool _result = ((::BRepExtrema_DistanceSS*)_NativeInstance)->IsDone();
    return _result;
}

double Macad::Occt::BRepExtrema_DistanceSS::DistValue()
{
    double _result = ((::BRepExtrema_DistanceSS*)_NativeInstance)->DistValue();
    return _result;
}

Macad::Occt::BRepExtrema_SeqOfSolution^ Macad::Occt::BRepExtrema_DistanceSS::Seq1Value()
{
    ::BRepExtrema_SeqOfSolution* _result = new ::BRepExtrema_SeqOfSolution();
    *_result = (::BRepExtrema_SeqOfSolution)((::BRepExtrema_DistanceSS*)_NativeInstance)->Seq1Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SeqOfSolution(_result);
}

Macad::Occt::BRepExtrema_SeqOfSolution^ Macad::Occt::BRepExtrema_DistanceSS::Seq2Value()
{
    ::BRepExtrema_SeqOfSolution* _result = new ::BRepExtrema_SeqOfSolution();
    *_result = (::BRepExtrema_SeqOfSolution)((::BRepExtrema_DistanceSS*)_NativeInstance)->Seq2Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SeqOfSolution(_result);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_DistShapeShape
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape()
    : Macad::Occt::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape();
}

Macad::Occt::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A, Macad::Occt::Message_ProgressRange^ theRange)
    : Macad::Occt::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, (::Extrema_ExtFlag)F, (::Extrema_ExtAlgo)A, *(::Message_ProgressRange*)theRange->NativeInstance);
}

Macad::Occt::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A)
    : Macad::Occt::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, (::Extrema_ExtFlag)F, (::Extrema_ExtAlgo)A, ::Message_ProgressRange());
}

Macad::Occt::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, Macad::Occt::Extrema_ExtFlag F)
    : Macad::Occt::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, (::Extrema_ExtFlag)F, Extrema_ExtAlgo_Grad, ::Message_ProgressRange());
}

Macad::Occt::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2)
    : Macad::Occt::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad, ::Message_ProgressRange());
}

Macad::Occt::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, double theDeflection, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A, Macad::Occt::Message_ProgressRange^ theRange)
    : Macad::Occt::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, theDeflection, (::Extrema_ExtFlag)F, (::Extrema_ExtAlgo)A, *(::Message_ProgressRange*)theRange->NativeInstance);
}

Macad::Occt::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, double theDeflection, Macad::Occt::Extrema_ExtFlag F, Macad::Occt::Extrema_ExtAlgo A)
    : Macad::Occt::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, theDeflection, (::Extrema_ExtFlag)F, (::Extrema_ExtAlgo)A, ::Message_ProgressRange());
}

Macad::Occt::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, double theDeflection, Macad::Occt::Extrema_ExtFlag F)
    : Macad::Occt::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, theDeflection, (::Extrema_ExtFlag)F, Extrema_ExtAlgo_Grad, ::Message_ProgressRange());
}

Macad::Occt::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, double theDeflection)
    : Macad::Occt::BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, theDeflection, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad, ::Message_ProgressRange());
}

void Macad::Occt::BRepExtrema_DistShapeShape::SetDeflection(double theDeflection)
{
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SetDeflection(theDeflection);
}

void Macad::Occt::BRepExtrema_DistShapeShape::LoadS1(Macad::Occt::TopoDS_Shape^ Shape1)
{
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->LoadS1(*(::TopoDS_Shape*)Shape1->NativeInstance);
}

void Macad::Occt::BRepExtrema_DistShapeShape::LoadS2(Macad::Occt::TopoDS_Shape^ Shape1)
{
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->LoadS2(*(::TopoDS_Shape*)Shape1->NativeInstance);
}

bool Macad::Occt::BRepExtrema_DistShapeShape::Perform(Macad::Occt::Message_ProgressRange^ theRange)
{
    bool _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theRange->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepExtrema_DistShapeShape::Perform()
{
    bool _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->Perform(::Message_ProgressRange());
    return _result;
}

bool Macad::Occt::BRepExtrema_DistShapeShape::IsDone()
{
    bool _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::BRepExtrema_DistShapeShape::NbSolution()
{
    int _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->NbSolution();
    return _result;
}

double Macad::Occt::BRepExtrema_DistShapeShape::Value()
{
    double _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->Value();
    return _result;
}

bool Macad::Occt::BRepExtrema_DistShapeShape::InnerSolution()
{
    bool _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->InnerSolution();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_DistShapeShape::PointOnShape1(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->PointOnShape1(N);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_DistShapeShape::PointOnShape2(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->PointOnShape2(N);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::BRepExtrema_SupportType Macad::Occt::BRepExtrema_DistShapeShape::SupportTypeShape1(int N)
{
    ::BRepExtrema_SupportType _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SupportTypeShape1(N);
    return (Macad::Occt::BRepExtrema_SupportType)_result;
}

Macad::Occt::BRepExtrema_SupportType Macad::Occt::BRepExtrema_DistShapeShape::SupportTypeShape2(int N)
{
    ::BRepExtrema_SupportType _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SupportTypeShape2(N);
    return (Macad::Occt::BRepExtrema_SupportType)_result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_DistShapeShape::SupportOnShape1(int N)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SupportOnShape1(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_DistShapeShape::SupportOnShape2(int N)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SupportOnShape2(N);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepExtrema_DistShapeShape::ParOnEdgeS1(int N, double% t)
{
    pin_ptr<double> pp_t = &t;
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->ParOnEdgeS1(N, *(double*)pp_t);
}

void Macad::Occt::BRepExtrema_DistShapeShape::ParOnEdgeS2(int N, double% t)
{
    pin_ptr<double> pp_t = &t;
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->ParOnEdgeS2(N, *(double*)pp_t);
}

void Macad::Occt::BRepExtrema_DistShapeShape::ParOnFaceS1(int N, double% u, double% v)
{
    pin_ptr<double> pp_u = &u;
    pin_ptr<double> pp_v = &v;
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->ParOnFaceS1(N, *(double*)pp_u, *(double*)pp_v);
}

void Macad::Occt::BRepExtrema_DistShapeShape::ParOnFaceS2(int N, double% u, double% v)
{
    pin_ptr<double> pp_u = &u;
    pin_ptr<double> pp_v = &v;
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->ParOnFaceS2(N, *(double*)pp_u, *(double*)pp_v);
}

void Macad::Occt::BRepExtrema_DistShapeShape::Dump(System::IO::TextWriter^ o)
{
    std::ostringstream oss_o;
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->Dump(oss_o);
    o->Write(gcnew System::String(oss_o.str().c_str()));
}

void Macad::Occt::BRepExtrema_DistShapeShape::SetFlag(Macad::Occt::Extrema_ExtFlag F)
{
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SetFlag((::Extrema_ExtFlag)F);
}

void Macad::Occt::BRepExtrema_DistShapeShape::SetAlgo(Macad::Occt::Extrema_ExtAlgo A)
{
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SetAlgo((::Extrema_ExtAlgo)A);
}

void Macad::Occt::BRepExtrema_DistShapeShape::SetMultiThread(bool theIsMultiThread)
{
    ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SetMultiThread(theIsMultiThread);
}

bool Macad::Occt::BRepExtrema_DistShapeShape::IsMultiThread()
{
    bool _result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->IsMultiThread();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtCC
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ExtCC::BRepExtrema_ExtCC()
    : Macad::Occt::BaseClass<::BRepExtrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtCC();
}

Macad::Occt::BRepExtrema_ExtCC::BRepExtrema_ExtCC(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
    : Macad::Occt::BaseClass<::BRepExtrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtCC(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtCC::Initialize(Macad::Occt::TopoDS_Edge^ E2)
{
    ((::BRepExtrema_ExtCC*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E2->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtCC::Perform(Macad::Occt::TopoDS_Edge^ E1)
{
    ((::BRepExtrema_ExtCC*)_NativeInstance)->Perform(*(::TopoDS_Edge*)E1->NativeInstance);
}

bool Macad::Occt::BRepExtrema_ExtCC::IsDone()
{
    bool _result = ((::BRepExtrema_ExtCC*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::BRepExtrema_ExtCC::NbExt()
{
    int _result = ((::BRepExtrema_ExtCC*)_NativeInstance)->NbExt();
    return _result;
}

bool Macad::Occt::BRepExtrema_ExtCC::IsParallel()
{
    bool _result = ((::BRepExtrema_ExtCC*)_NativeInstance)->IsParallel();
    return _result;
}

double Macad::Occt::BRepExtrema_ExtCC::SquareDistance(int N)
{
    double _result = ((::BRepExtrema_ExtCC*)_NativeInstance)->SquareDistance(N);
    return _result;
}

double Macad::Occt::BRepExtrema_ExtCC::ParameterOnE1(int N)
{
    double _result = ((::BRepExtrema_ExtCC*)_NativeInstance)->ParameterOnE1(N);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtCC::PointOnE1(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtCC*)_NativeInstance)->PointOnE1(N);
    return Macad::Occt::Pnt(_nativeResult);
}

double Macad::Occt::BRepExtrema_ExtCC::ParameterOnE2(int N)
{
    double _result = ((::BRepExtrema_ExtCC*)_NativeInstance)->ParameterOnE2(N);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtCC::PointOnE2(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtCC*)_NativeInstance)->PointOnE2(N);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::BRepExtrema_ExtCC::TrimmedSquareDistances(double% dist11, double% distP12, double% distP21, double% distP22, Macad::Occt::Pnt% P11, Macad::Occt::Pnt% P12, Macad::Occt::Pnt% P21, Macad::Occt::Pnt% P22)
{
    pin_ptr<double> pp_dist11 = &dist11;
    pin_ptr<double> pp_distP12 = &distP12;
    pin_ptr<double> pp_distP21 = &distP21;
    pin_ptr<double> pp_distP22 = &distP22;
    pin_ptr<Macad::Occt::Pnt> pp_P11 = &P11;
    pin_ptr<Macad::Occt::Pnt> pp_P12 = &P12;
    pin_ptr<Macad::Occt::Pnt> pp_P21 = &P21;
    pin_ptr<Macad::Occt::Pnt> pp_P22 = &P22;
    ((::BRepExtrema_ExtCC*)_NativeInstance)->TrimmedSquareDistances(*(double*)pp_dist11, *(double*)pp_distP12, *(double*)pp_distP21, *(double*)pp_distP22, *(gp_Pnt*)pp_P11, *(gp_Pnt*)pp_P12, *(gp_Pnt*)pp_P21, *(gp_Pnt*)pp_P22);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtCF
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ExtCF::BRepExtrema_ExtCF()
    : Macad::Occt::BaseClass<::BRepExtrema_ExtCF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtCF();
}

Macad::Occt::BRepExtrema_ExtCF::BRepExtrema_ExtCF(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::BaseClass<::BRepExtrema_ExtCF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtCF(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtCF::Initialize(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepExtrema_ExtCF*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtCF::Perform(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
    ((::BRepExtrema_ExtCF*)_NativeInstance)->Perform(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

bool Macad::Occt::BRepExtrema_ExtCF::IsDone()
{
    bool _result = ((::BRepExtrema_ExtCF*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::BRepExtrema_ExtCF::NbExt()
{
    int _result = ((::BRepExtrema_ExtCF*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::BRepExtrema_ExtCF::SquareDistance(int N)
{
    double _result = ((::BRepExtrema_ExtCF*)_NativeInstance)->SquareDistance(N);
    return _result;
}

bool Macad::Occt::BRepExtrema_ExtCF::IsParallel()
{
    bool _result = ((::BRepExtrema_ExtCF*)_NativeInstance)->IsParallel();
    return _result;
}

double Macad::Occt::BRepExtrema_ExtCF::ParameterOnEdge(int N)
{
    double _result = ((::BRepExtrema_ExtCF*)_NativeInstance)->ParameterOnEdge(N);
    return _result;
}

void Macad::Occt::BRepExtrema_ExtCF::ParameterOnFace(int N, double% U, double% V)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::BRepExtrema_ExtCF*)_NativeInstance)->ParameterOnFace(N, *(double*)pp_U, *(double*)pp_V);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtCF::PointOnEdge(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtCF*)_NativeInstance)->PointOnEdge(N);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtCF::PointOnFace(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtCF*)_NativeInstance)->PointOnFace(N);
    return Macad::Occt::Pnt(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtFF
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ExtFF::BRepExtrema_ExtFF()
    : Macad::Occt::BaseClass<::BRepExtrema_ExtFF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtFF();
}

Macad::Occt::BRepExtrema_ExtFF::BRepExtrema_ExtFF(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2)
    : Macad::Occt::BaseClass<::BRepExtrema_ExtFF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtFF(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtFF::Initialize(Macad::Occt::TopoDS_Face^ F2)
{
    ((::BRepExtrema_ExtFF*)_NativeInstance)->Initialize(*(::TopoDS_Face*)F2->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtFF::Perform(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2)
{
    ((::BRepExtrema_ExtFF*)_NativeInstance)->Perform(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
}

bool Macad::Occt::BRepExtrema_ExtFF::IsDone()
{
    bool _result = ((::BRepExtrema_ExtFF*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::BRepExtrema_ExtFF::IsParallel()
{
    bool _result = ((::BRepExtrema_ExtFF*)_NativeInstance)->IsParallel();
    return _result;
}

int Macad::Occt::BRepExtrema_ExtFF::NbExt()
{
    int _result = ((::BRepExtrema_ExtFF*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::BRepExtrema_ExtFF::SquareDistance(int N)
{
    double _result = ((::BRepExtrema_ExtFF*)_NativeInstance)->SquareDistance(N);
    return _result;
}

void Macad::Occt::BRepExtrema_ExtFF::ParameterOnFace1(int N, double% U, double% V)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::BRepExtrema_ExtFF*)_NativeInstance)->ParameterOnFace1(N, *(double*)pp_U, *(double*)pp_V);
}

void Macad::Occt::BRepExtrema_ExtFF::ParameterOnFace2(int N, double% U, double% V)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::BRepExtrema_ExtFF*)_NativeInstance)->ParameterOnFace2(N, *(double*)pp_U, *(double*)pp_V);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtFF::PointOnFace1(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtFF*)_NativeInstance)->PointOnFace1(N);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtFF::PointOnFace2(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtFF*)_NativeInstance)->PointOnFace2(N);
    return Macad::Occt::Pnt(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtPC
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ExtPC::BRepExtrema_ExtPC()
    : Macad::Occt::BaseClass<::BRepExtrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtPC();
}

Macad::Occt::BRepExtrema_ExtPC::BRepExtrema_ExtPC(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E)
    : Macad::Occt::BaseClass<::BRepExtrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtPC(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtPC::Initialize(Macad::Occt::TopoDS_Edge^ E)
{
    ((::BRepExtrema_ExtPC*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtPC::Perform(Macad::Occt::TopoDS_Vertex^ V)
{
    ((::BRepExtrema_ExtPC*)_NativeInstance)->Perform(*(::TopoDS_Vertex*)V->NativeInstance);
}

bool Macad::Occt::BRepExtrema_ExtPC::IsDone()
{
    bool _result = ((::BRepExtrema_ExtPC*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::BRepExtrema_ExtPC::NbExt()
{
    int _result = ((::BRepExtrema_ExtPC*)_NativeInstance)->NbExt();
    return _result;
}

bool Macad::Occt::BRepExtrema_ExtPC::IsMin(int N)
{
    bool _result = ((::BRepExtrema_ExtPC*)_NativeInstance)->IsMin(N);
    return _result;
}

double Macad::Occt::BRepExtrema_ExtPC::SquareDistance(int N)
{
    double _result = ((::BRepExtrema_ExtPC*)_NativeInstance)->SquareDistance(N);
    return _result;
}

double Macad::Occt::BRepExtrema_ExtPC::Parameter(int N)
{
    double _result = ((::BRepExtrema_ExtPC*)_NativeInstance)->Parameter(N);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtPC::Point(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtPC*)_NativeInstance)->Point(N);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::BRepExtrema_ExtPC::TrimmedSquareDistances(double% dist1, double% dist2, Macad::Occt::Pnt% pnt1, Macad::Occt::Pnt% pnt2)
{
    pin_ptr<double> pp_dist1 = &dist1;
    pin_ptr<double> pp_dist2 = &dist2;
    pin_ptr<Macad::Occt::Pnt> pp_pnt1 = &pnt1;
    pin_ptr<Macad::Occt::Pnt> pp_pnt2 = &pnt2;
    ((::BRepExtrema_ExtPC*)_NativeInstance)->TrimmedSquareDistances(*(double*)pp_dist1, *(double*)pp_dist2, *(gp_Pnt*)pp_pnt1, *(gp_Pnt*)pp_pnt2);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtPF
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ExtPF::BRepExtrema_ExtPF()
    : Macad::Occt::BaseClass<::BRepExtrema_ExtPF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtPF();
}

Macad::Occt::BRepExtrema_ExtPF::BRepExtrema_ExtPF(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace, Macad::Occt::Extrema_ExtFlag TheFlag, Macad::Occt::Extrema_ExtAlgo TheAlgo)
    : Macad::Occt::BaseClass<::BRepExtrema_ExtPF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtPF(*(::TopoDS_Vertex*)TheVertex->NativeInstance, *(::TopoDS_Face*)TheFace->NativeInstance, (::Extrema_ExtFlag)TheFlag, (::Extrema_ExtAlgo)TheAlgo);
}

Macad::Occt::BRepExtrema_ExtPF::BRepExtrema_ExtPF(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace, Macad::Occt::Extrema_ExtFlag TheFlag)
    : Macad::Occt::BaseClass<::BRepExtrema_ExtPF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtPF(*(::TopoDS_Vertex*)TheVertex->NativeInstance, *(::TopoDS_Face*)TheFace->NativeInstance, (::Extrema_ExtFlag)TheFlag, Extrema_ExtAlgo_Grad);
}

Macad::Occt::BRepExtrema_ExtPF::BRepExtrema_ExtPF(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace)
    : Macad::Occt::BaseClass<::BRepExtrema_ExtPF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ExtPF(*(::TopoDS_Vertex*)TheVertex->NativeInstance, *(::TopoDS_Face*)TheFace->NativeInstance, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

void Macad::Occt::BRepExtrema_ExtPF::Initialize(Macad::Occt::TopoDS_Face^ TheFace, Macad::Occt::Extrema_ExtFlag TheFlag, Macad::Occt::Extrema_ExtAlgo TheAlgo)
{
    ((::BRepExtrema_ExtPF*)_NativeInstance)->Initialize(*(::TopoDS_Face*)TheFace->NativeInstance, (::Extrema_ExtFlag)TheFlag, (::Extrema_ExtAlgo)TheAlgo);
}

void Macad::Occt::BRepExtrema_ExtPF::Initialize(Macad::Occt::TopoDS_Face^ TheFace, Macad::Occt::Extrema_ExtFlag TheFlag)
{
    ((::BRepExtrema_ExtPF*)_NativeInstance)->Initialize(*(::TopoDS_Face*)TheFace->NativeInstance, (::Extrema_ExtFlag)TheFlag, Extrema_ExtAlgo_Grad);
}

void Macad::Occt::BRepExtrema_ExtPF::Initialize(Macad::Occt::TopoDS_Face^ TheFace)
{
    ((::BRepExtrema_ExtPF*)_NativeInstance)->Initialize(*(::TopoDS_Face*)TheFace->NativeInstance, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

void Macad::Occt::BRepExtrema_ExtPF::Perform(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace)
{
    ((::BRepExtrema_ExtPF*)_NativeInstance)->Perform(*(::TopoDS_Vertex*)TheVertex->NativeInstance, *(::TopoDS_Face*)TheFace->NativeInstance);
}

bool Macad::Occt::BRepExtrema_ExtPF::IsDone()
{
    bool _result = ((::BRepExtrema_ExtPF*)_NativeInstance)->IsDone();
    return _result;
}

int Macad::Occt::BRepExtrema_ExtPF::NbExt()
{
    int _result = ((::BRepExtrema_ExtPF*)_NativeInstance)->NbExt();
    return _result;
}

double Macad::Occt::BRepExtrema_ExtPF::SquareDistance(int N)
{
    double _result = ((::BRepExtrema_ExtPF*)_NativeInstance)->SquareDistance(N);
    return _result;
}

void Macad::Occt::BRepExtrema_ExtPF::Parameter(int N, double% U, double% V)
{
    pin_ptr<double> pp_U = &U;
    pin_ptr<double> pp_V = &V;
    ((::BRepExtrema_ExtPF*)_NativeInstance)->Parameter(N, *(double*)pp_U, *(double*)pp_V);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtPF::Point(int N)
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ExtPF*)_NativeInstance)->Point(N);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::BRepExtrema_ExtPF::SetFlag(Macad::Occt::Extrema_ExtFlag F)
{
    ((::BRepExtrema_ExtPF*)_NativeInstance)->SetFlag((::Extrema_ExtFlag)F);
}

void Macad::Occt::BRepExtrema_ExtPF::SetAlgo(Macad::Occt::Extrema_ExtAlgo A)
{
    ((::BRepExtrema_ExtPF*)_NativeInstance)->SetAlgo((::Extrema_ExtAlgo)A);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_Poly
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_Poly::BRepExtrema_Poly()
    : Macad::Occt::BaseClass<::BRepExtrema_Poly>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_Poly();
}

bool Macad::Occt::BRepExtrema_Poly::Distance(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2, double% dist)
{
    pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
    pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
    pin_ptr<double> pp_dist = &dist;
    bool _result = ::BRepExtrema_Poly::Distance(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(double*)pp_dist);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_VertexInspector
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_VertexInspector::BRepExtrema_VertexInspector()
    : Macad::Occt::BaseClass<::BRepExtrema_VertexInspector>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_VertexInspector();
}

void Macad::Occt::BRepExtrema_VertexInspector::Add(Macad::Occt::XYZ thePnt)
{
    pin_ptr<Macad::Occt::XYZ> pp_thePnt = &thePnt;
    ((::BRepExtrema_VertexInspector*)_NativeInstance)->Add(*(gp_XYZ*)pp_thePnt);
}

void Macad::Occt::BRepExtrema_VertexInspector::SetTol(double theTol)
{
    ((::BRepExtrema_VertexInspector*)_NativeInstance)->SetTol(theTol);
}

void Macad::Occt::BRepExtrema_VertexInspector::SetCurrent(Macad::Occt::XYZ theCurPnt)
{
    pin_ptr<Macad::Occt::XYZ> pp_theCurPnt = &theCurPnt;
    ((::BRepExtrema_VertexInspector*)_NativeInstance)->SetCurrent(*(gp_XYZ*)pp_theCurPnt);
}

bool Macad::Occt::BRepExtrema_VertexInspector::IsNeedAdd()
{
    bool _result = ((::BRepExtrema_VertexInspector*)_NativeInstance)->IsNeedAdd();
    return _result;
}

Macad::Occt::NCollection_CellFilter_Action Macad::Occt::BRepExtrema_VertexInspector::Inspect(int theTarget)
{
    ::NCollection_CellFilter_Action _result = ((::BRepExtrema_VertexInspector*)_NativeInstance)->Inspect(theTarget);
    return (Macad::Occt::NCollection_CellFilter_Action)_result;
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ProximityValueTool
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ProximityValueTool::BRepExtrema_ProximityValueTool()
    : Macad::Occt::BaseClass<::BRepExtrema_ProximityValueTool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ProximityValueTool();
}

void Macad::Occt::BRepExtrema_ProximityValueTool::LoadShapeLists(Macad::Occt::BRepExtrema_ShapeList^ theShapeList1, Macad::Occt::BRepExtrema_ShapeList^ theShapeList2)
{
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->LoadShapeLists(*(::BRepExtrema_ShapeList*)theShapeList1->NativeInstance, *(::BRepExtrema_ShapeList*)theShapeList2->NativeInstance);
}

void Macad::Occt::BRepExtrema_ProximityValueTool::SetNbSamplePoints(int theSamples1, int theSamples2)
{
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->SetNbSamplePoints(theSamples1, theSamples2);
}

void Macad::Occt::BRepExtrema_ProximityValueTool::SetNbSamplePoints(int theSamples1)
{
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->SetNbSamplePoints(theSamples1, 0);
}

void Macad::Occt::BRepExtrema_ProximityValueTool::SetNbSamplePoints()
{
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->SetNbSamplePoints(0, 0);
}

void Macad::Occt::BRepExtrema_ProximityValueTool::Perform(double% theTolerance)
{
    pin_ptr<double> pp_theTolerance = &theTolerance;
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->Perform(*(double*)pp_theTolerance);
}

bool Macad::Occt::BRepExtrema_ProximityValueTool::IsDone()
{
    bool _result = ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->IsDone();
    return _result;
}

void Macad::Occt::BRepExtrema_ProximityValueTool::MarkDirty()
{
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->MarkDirty();
}

double Macad::Occt::BRepExtrema_ProximityValueTool::Distance()
{
    double _result = ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->Distance();
    return _result;
}

void Macad::Occt::BRepExtrema_ProximityValueTool::ProximityPoints(Macad::Occt::Pnt% thePoint1, Macad::Occt::Pnt% thePoint2)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePoint1 = &thePoint1;
    pin_ptr<Macad::Occt::Pnt> pp_thePoint2 = &thePoint2;
    ((::BRepExtrema_ProximityValueTool*)_NativeInstance)->ProximityPoints(*(gp_Pnt*)pp_thePoint1, *(gp_Pnt*)pp_thePoint2);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_SelfIntersection
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_SelfIntersection::BRepExtrema_SelfIntersection(double theTolerance)
    : Macad::Occt::BaseClass<::BRepExtrema_SelfIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SelfIntersection(theTolerance);
}

Macad::Occt::BRepExtrema_SelfIntersection::BRepExtrema_SelfIntersection()
    : Macad::Occt::BaseClass<::BRepExtrema_SelfIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SelfIntersection(0.);
}

Macad::Occt::BRepExtrema_SelfIntersection::BRepExtrema_SelfIntersection(Macad::Occt::TopoDS_Shape^ theShape, double theTolerance)
    : Macad::Occt::BaseClass<::BRepExtrema_SelfIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SelfIntersection(*(::TopoDS_Shape*)theShape->NativeInstance, theTolerance);
}

Macad::Occt::BRepExtrema_SelfIntersection::BRepExtrema_SelfIntersection(Macad::Occt::TopoDS_Shape^ theShape)
    : Macad::Occt::BaseClass<::BRepExtrema_SelfIntersection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_SelfIntersection(*(::TopoDS_Shape*)theShape->NativeInstance, 0.);
}

double Macad::Occt::BRepExtrema_SelfIntersection::Tolerance()
{
    double _result = ((::BRepExtrema_SelfIntersection*)_NativeInstance)->Tolerance();
    return _result;
}

void Macad::Occt::BRepExtrema_SelfIntersection::SetTolerance(double theTolerance)
{
    ((::BRepExtrema_SelfIntersection*)_NativeInstance)->SetTolerance(theTolerance);
}

bool Macad::Occt::BRepExtrema_SelfIntersection::LoadShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    bool _result = ((::BRepExtrema_SelfIntersection*)_NativeInstance)->LoadShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result;
}

void Macad::Occt::BRepExtrema_SelfIntersection::Perform()
{
    ((::BRepExtrema_SelfIntersection*)_NativeInstance)->Perform();
}

bool Macad::Occt::BRepExtrema_SelfIntersection::IsDone()
{
    bool _result = ((::BRepExtrema_SelfIntersection*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ Macad::Occt::BRepExtrema_SelfIntersection::OverlapElements()
{
    ::BRepExtrema_MapOfIntegerPackedMapOfInteger* _result = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
    *_result = (::BRepExtrema_MapOfIntegerPackedMapOfInteger)((::BRepExtrema_SelfIntersection*)_NativeInstance)->OverlapElements();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepExtrema_SelfIntersection::GetSubShape(int theID)
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepExtrema_SelfIntersection*)_NativeInstance)->GetSubShape(theID);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_ShapeProximity
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ShapeProximity::BRepExtrema_ShapeProximity(double theTolerance)
    : Macad::Occt::BaseClass<::BRepExtrema_ShapeProximity>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeProximity(theTolerance);
}

Macad::Occt::BRepExtrema_ShapeProximity::BRepExtrema_ShapeProximity()
    : Macad::Occt::BaseClass<::BRepExtrema_ShapeProximity>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeProximity(::Precision::Infinite());
}

Macad::Occt::BRepExtrema_ShapeProximity::BRepExtrema_ShapeProximity(Macad::Occt::TopoDS_Shape^ theShape1, Macad::Occt::TopoDS_Shape^ theShape2, double theTolerance)
    : Macad::Occt::BaseClass<::BRepExtrema_ShapeProximity>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeProximity(*(::TopoDS_Shape*)theShape1->NativeInstance, *(::TopoDS_Shape*)theShape2->NativeInstance, theTolerance);
}

Macad::Occt::BRepExtrema_ShapeProximity::BRepExtrema_ShapeProximity(Macad::Occt::TopoDS_Shape^ theShape1, Macad::Occt::TopoDS_Shape^ theShape2)
    : Macad::Occt::BaseClass<::BRepExtrema_ShapeProximity>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepExtrema_ShapeProximity(*(::TopoDS_Shape*)theShape1->NativeInstance, *(::TopoDS_Shape*)theShape2->NativeInstance, ::Precision::Infinite());
}

double Macad::Occt::BRepExtrema_ShapeProximity::Tolerance()
{
    double _result = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->Tolerance();
    return _result;
}

void Macad::Occt::BRepExtrema_ShapeProximity::SetTolerance(double theTolerance)
{
    ((::BRepExtrema_ShapeProximity*)_NativeInstance)->SetTolerance(theTolerance);
}

double Macad::Occt::BRepExtrema_ShapeProximity::Proximity()
{
    double _result = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->Proximity();
    return _result;
}

bool Macad::Occt::BRepExtrema_ShapeProximity::LoadShape1(Macad::Occt::TopoDS_Shape^ theShape1)
{
    bool _result = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->LoadShape1(*(::TopoDS_Shape*)theShape1->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepExtrema_ShapeProximity::LoadShape2(Macad::Occt::TopoDS_Shape^ theShape2)
{
    bool _result = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->LoadShape2(*(::TopoDS_Shape*)theShape2->NativeInstance);
    return _result;
}

void Macad::Occt::BRepExtrema_ShapeProximity::SetNbSamples1(int theNbSamples)
{
    ((::BRepExtrema_ShapeProximity*)_NativeInstance)->SetNbSamples1(theNbSamples);
}

void Macad::Occt::BRepExtrema_ShapeProximity::SetNbSamples2(int theNbSamples)
{
    ((::BRepExtrema_ShapeProximity*)_NativeInstance)->SetNbSamples2(theNbSamples);
}

void Macad::Occt::BRepExtrema_ShapeProximity::Perform()
{
    ((::BRepExtrema_ShapeProximity*)_NativeInstance)->Perform();
}

bool Macad::Occt::BRepExtrema_ShapeProximity::IsDone()
{
    bool _result = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ Macad::Occt::BRepExtrema_ShapeProximity::OverlapSubShapes1()
{
    ::BRepExtrema_MapOfIntegerPackedMapOfInteger* _result = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
    *_result = (::BRepExtrema_MapOfIntegerPackedMapOfInteger)((::BRepExtrema_ShapeProximity*)_NativeInstance)->OverlapSubShapes1();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger(_result);
}

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ Macad::Occt::BRepExtrema_ShapeProximity::OverlapSubShapes2()
{
    ::BRepExtrema_MapOfIntegerPackedMapOfInteger* _result = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
    *_result = (::BRepExtrema_MapOfIntegerPackedMapOfInteger)((::BRepExtrema_ShapeProximity*)_NativeInstance)->OverlapSubShapes2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_ShapeProximity::GetSubShape1(int theID)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepExtrema_ShapeProximity*)_NativeInstance)->GetSubShape1(theID);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_ShapeProximity::GetSubShape2(int theID)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepExtrema_ShapeProximity*)_NativeInstance)->GetSubShape2(theID);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ShapeProximity::ProximityPoint1()
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->ProximityPoint1();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ShapeProximity::ProximityPoint2()
{
    ::gp_Pnt _nativeResult = ((::BRepExtrema_ShapeProximity*)_NativeInstance)->ProximityPoint2();
    return Macad::Occt::Pnt(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  BRepExtrema_UnCompatibleShape
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_UnCompatibleShape::BRepExtrema_UnCompatibleShape()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepExtrema_UnCompatibleShape();
}

Macad::Occt::BRepExtrema_UnCompatibleShape::BRepExtrema_UnCompatibleShape(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::BRepExtrema_UnCompatibleShape(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::BRepExtrema_UnCompatibleShape::BRepExtrema_UnCompatibleShape(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::BRepExtrema_UnCompatibleShape(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::BRepExtrema_UnCompatibleShape::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::BRepExtrema_UnCompatibleShape::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::BRepExtrema_UnCompatibleShape::Raise()
{
    ::BRepExtrema_UnCompatibleShape::Raise("");
}

Macad::Occt::BRepExtrema_UnCompatibleShape^ Macad::Occt::BRepExtrema_UnCompatibleShape::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::BRepExtrema_UnCompatibleShape) _result = ::BRepExtrema_UnCompatibleShape::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::BRepExtrema_UnCompatibleShape::CreateDowncasted(_result.get());
}

Macad::Occt::BRepExtrema_UnCompatibleShape^ Macad::Occt::BRepExtrema_UnCompatibleShape::NewInstance()
{
    Handle(::BRepExtrema_UnCompatibleShape) _result = ::BRepExtrema_UnCompatibleShape::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::BRepExtrema_UnCompatibleShape::CreateDowncasted(_result.get());
}

Macad::Occt::BRepExtrema_UnCompatibleShape^ Macad::Occt::BRepExtrema_UnCompatibleShape::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::BRepExtrema_UnCompatibleShape) _result = ::BRepExtrema_UnCompatibleShape::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::BRepExtrema_UnCompatibleShape::CreateDowncasted(_result.get());
}

Macad::Occt::BRepExtrema_UnCompatibleShape^ Macad::Occt::BRepExtrema_UnCompatibleShape::CreateDowncasted(::BRepExtrema_UnCompatibleShape* instance)
{
    return gcnew Macad::Occt::BRepExtrema_UnCompatibleShape( instance );
}


