// Generated wrapper code for package BRepCheck

#include "OcctPCH.h"
#include "BRepCheck.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TopoDS.h"
#include "Adaptor3d.h"
#include "TopTools.h"


//---------------------------------------------------------------------
//  Class  BRepCheck_ListOfStatus
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_ListOfStatus::BRepCheck_ListOfStatus()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_ListOfStatus();
}

Macad::Occt::BRepCheck_ListOfStatus::BRepCheck_ListOfStatus(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_ListOfStatus(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::BRepCheck_ListOfStatus::Size()
{
    int _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::BRepCheck_ListOfStatus^ Macad::Occt::BRepCheck_ListOfStatus::Assign(Macad::Occt::BRepCheck_ListOfStatus^ theOther)
{
    ::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
    *_result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->Assign(*(::BRepCheck_ListOfStatus*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepCheck_ListOfStatus(_result);
}

void Macad::Occt::BRepCheck_ListOfStatus::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::BRepCheck_ListOfStatus*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::BRepCheck_ListOfStatus::Clear()
{
    ((::BRepCheck_ListOfStatus*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_ListOfStatus::First()
{
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->First();
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_ListOfStatus::Last()
{
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->Last();
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_ListOfStatus::Append(Macad::Occt::BRepCheck_Status theItem)
{
    pin_ptr<Macad::Occt::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->Append(*(::BRepCheck_Status*)pp_theItem);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_ListOfStatus::Prepend(Macad::Occt::BRepCheck_Status theItem)
{
    pin_ptr<Macad::Occt::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->Prepend(*(::BRepCheck_Status*)pp_theItem);
    return (Macad::Occt::BRepCheck_Status)_result;
}

void Macad::Occt::BRepCheck_ListOfStatus::RemoveFirst()
{
    ((::BRepCheck_ListOfStatus*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::BRepCheck_ListOfStatus::Remove(Macad::Occt::BRepCheck_ListOfStatus::Iterator^ theIter)
{
    ((::BRepCheck_ListOfStatus*)_NativeInstance)->Remove(*(::BRepCheck_ListOfStatus::Iterator*)theIter->NativeInstance);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_ListOfStatus::InsertBefore(Macad::Occt::BRepCheck_Status theItem, Macad::Occt::BRepCheck_ListOfStatus::Iterator^ theIter)
{
    pin_ptr<Macad::Occt::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->InsertBefore(*(::BRepCheck_Status*)pp_theItem, *(::BRepCheck_ListOfStatus::Iterator*)theIter->NativeInstance);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_ListOfStatus::InsertAfter(Macad::Occt::BRepCheck_Status theItem, Macad::Occt::BRepCheck_ListOfStatus::Iterator^ theIter)
{
    pin_ptr<Macad::Occt::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->InsertAfter(*(::BRepCheck_Status*)pp_theItem, *(::BRepCheck_ListOfStatus::Iterator*)theIter->NativeInstance);
    return (Macad::Occt::BRepCheck_Status)_result;
}

void Macad::Occt::BRepCheck_ListOfStatus::Reverse()
{
    ((::BRepCheck_ListOfStatus*)_NativeInstance)->Reverse();
}

System::Collections::Generic::IEnumerator<Macad::Occt::BRepCheck_Status>^ Macad::Occt::BRepCheck_ListOfStatus::GetEnumerator()
{
    return gcnew Macad::Occt::BRepCheck_ListOfStatus::Iterator(new ::BRepCheck_ListOfStatus::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ Macad::Occt::BRepCheck_ListOfStatus::GetEnumerator2()
{
    return gcnew Macad::Occt::BRepCheck_ListOfStatus::Iterator(new ::BRepCheck_ListOfStatus::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  BRepCheck_ListOfStatus::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_ListOfStatus::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<Macad::Occt::BRepCheck_Status, ::BRepCheck_ListOfStatus::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_ListOfStatus::Iterator();
}

bool Macad::Occt::BRepCheck_ListOfStatus::Iterator::More()
{
    bool _result = ((::BRepCheck_ListOfStatus::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepCheck_ListOfStatus::Iterator::Next()
{
    ((::BRepCheck_ListOfStatus::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_ListOfStatus::Iterator::Value()
{
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus::Iterator*)_NativeInstance)->Value();
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_ListOfStatus::Iterator::ChangeValue()
{
    ::BRepCheck_Status _result = ((::BRepCheck_ListOfStatus::Iterator*)_NativeInstance)->ChangeValue();
    return (Macad::Occt::BRepCheck_Status)_result;
}



//---------------------------------------------------------------------
//  Class  BRepCheck_HListOfStatus
//---------------------------------------------------------------------

int Macad::Occt::BRepCheck_HListOfStatus::Size()
{
    int _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::BRepCheck_ListOfStatus^ Macad::Occt::BRepCheck_HListOfStatus::Assign(Macad::Occt::BRepCheck_ListOfStatus^ theOther)
{
    ::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
    *_result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->Assign(*(::BRepCheck_ListOfStatus*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepCheck_ListOfStatus(_result);
}

void Macad::Occt::BRepCheck_HListOfStatus::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::BRepCheck_HListOfStatus*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::BRepCheck_HListOfStatus::Clear()
{
    ((::BRepCheck_HListOfStatus*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_HListOfStatus::First()
{
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->First();
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_HListOfStatus::Last()
{
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->Last();
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_HListOfStatus::Append(Macad::Occt::BRepCheck_Status theItem)
{
    pin_ptr<Macad::Occt::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->Append(*(::BRepCheck_Status*)pp_theItem);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_HListOfStatus::Prepend(Macad::Occt::BRepCheck_Status theItem)
{
    pin_ptr<Macad::Occt::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->Prepend(*(::BRepCheck_Status*)pp_theItem);
    return (Macad::Occt::BRepCheck_Status)_result;
}

void Macad::Occt::BRepCheck_HListOfStatus::RemoveFirst()
{
    ((::BRepCheck_HListOfStatus*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::BRepCheck_HListOfStatus::Remove(Macad::Occt::BRepCheck_HListOfStatus::Iterator^ theIter)
{
    ((::BRepCheck_HListOfStatus*)_NativeInstance)->Remove(*(::BRepCheck_HListOfStatus::Iterator*)theIter->NativeInstance);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_HListOfStatus::InsertBefore(Macad::Occt::BRepCheck_Status theItem, Macad::Occt::BRepCheck_HListOfStatus::Iterator^ theIter)
{
    pin_ptr<Macad::Occt::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->InsertBefore(*(::BRepCheck_Status*)pp_theItem, *(::BRepCheck_HListOfStatus::Iterator*)theIter->NativeInstance);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_HListOfStatus::InsertAfter(Macad::Occt::BRepCheck_Status theItem, Macad::Occt::BRepCheck_HListOfStatus::Iterator^ theIter)
{
    pin_ptr<Macad::Occt::BRepCheck_Status> pp_theItem = &theItem;
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus*)_NativeInstance)->InsertAfter(*(::BRepCheck_Status*)pp_theItem, *(::BRepCheck_HListOfStatus::Iterator*)theIter->NativeInstance);
    return (Macad::Occt::BRepCheck_Status)_result;
}

void Macad::Occt::BRepCheck_HListOfStatus::Reverse()
{
    ((::BRepCheck_HListOfStatus*)_NativeInstance)->Reverse();
}

Macad::Occt::BRepCheck_HListOfStatus::BRepCheck_HListOfStatus()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_HListOfStatus();
}

Macad::Occt::BRepCheck_HListOfStatus^ Macad::Occt::BRepCheck_HListOfStatus::CreateDowncasted(::BRepCheck_HListOfStatus* instance)
{
    return gcnew Macad::Occt::BRepCheck_HListOfStatus( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_HListOfStatus::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_HListOfStatus::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepCheck_HListOfStatus::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_HListOfStatus::Iterator();
}

bool Macad::Occt::BRepCheck_HListOfStatus::Iterator::More()
{
    bool _result = ((::BRepCheck_HListOfStatus::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepCheck_HListOfStatus::Iterator::Next()
{
    ((::BRepCheck_HListOfStatus::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_HListOfStatus::Iterator::Value()
{
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus::Iterator*)_NativeInstance)->Value();
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_HListOfStatus::Iterator::ChangeValue()
{
    ::BRepCheck_Status _result = ((::BRepCheck_HListOfStatus::Iterator*)_NativeInstance)->ChangeValue();
    return (Macad::Occt::BRepCheck_Status)_result;
}



//---------------------------------------------------------------------
//  Class  BRepCheck_DataMapOfShapeListOfStatus
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::BRepCheck_DataMapOfShapeListOfStatus()
    : Macad::Occt::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_DataMapOfShapeListOfStatus();
}

Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::BRepCheck_DataMapOfShapeListOfStatus(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_DataMapOfShapeListOfStatus(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::BRepCheck_DataMapOfShapeListOfStatus(int theNbBuckets)
    : Macad::Occt::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_DataMapOfShapeListOfStatus(theNbBuckets, 0L);
}

void Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Exchange(Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus^ theOther)
{
    ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Exchange(*(::BRepCheck_DataMapOfShapeListOfStatus*)theOther->NativeInstance);
}

Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus^ Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Assign(Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus^ theOther)
{
    ::BRepCheck_DataMapOfShapeListOfStatus* _result = new ::BRepCheck_DataMapOfShapeListOfStatus();
    *_result = ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Assign(*(::BRepCheck_DataMapOfShapeListOfStatus*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus(_result);
}

void Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::ReSize(int N)
{
    ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

void Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Clear(bool doReleaseMemory)
{
    ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Clear()
{
    ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Clear(false);
}

int Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Size()
{
    int _result = ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepCheck_DataMapOfShapeListOfStatus::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepCheck_DataMapOfShapeListOfStatus::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_DataMapOfShapeListOfStatus::Iterator();
}

bool Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Iterator::More()
{
    bool _result = ((::BRepCheck_DataMapOfShapeListOfStatus::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Iterator::Next()
{
    ((::BRepCheck_DataMapOfShapeListOfStatus::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepCheck_DataMapOfShapeListOfStatus::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepCheck_IndexedDataMapOfShapeResult
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::BRepCheck_IndexedDataMapOfShapeResult()
    : Macad::Occt::BaseClass<::BRepCheck_IndexedDataMapOfShapeResult>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_IndexedDataMapOfShapeResult();
}

Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::BRepCheck_IndexedDataMapOfShapeResult(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepCheck_IndexedDataMapOfShapeResult>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_IndexedDataMapOfShapeResult(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::BRepCheck_IndexedDataMapOfShapeResult(int theNbBuckets)
    : Macad::Occt::BaseClass<::BRepCheck_IndexedDataMapOfShapeResult>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_IndexedDataMapOfShapeResult(theNbBuckets, 0L);
}

void Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::Exchange(Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult^ theOther)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Exchange(*(::BRepCheck_IndexedDataMapOfShapeResult*)theOther->NativeInstance);
}

Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult^ Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::Assign(Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult^ theOther)
{
    ::BRepCheck_IndexedDataMapOfShapeResult* _result = new ::BRepCheck_IndexedDataMapOfShapeResult();
    *_result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Assign(*(::BRepCheck_IndexedDataMapOfShapeResult*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult(_result);
}

void Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::ReSize(int N)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->ReSize(N);
}

int Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::Add(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::BRepCheck_Result^ theItem)
{
    int _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey1->NativeInstance, Handle(::BRepCheck_Result)(theItem->NativeInstance));
    return _result;
}

bool Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::Contains(Macad::Occt::TopoDS_Shape^ theKey1)
{
    bool _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

void Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::BRepCheck_Result^ theItem)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Substitute(theIndex, *(::TopoDS_Shape*)theKey1->NativeInstance, Handle(::BRepCheck_Result)(theItem->NativeInstance));
}

void Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::Swap(int theIndex1, int theIndex2)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::RemoveLast()
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::RemoveFromIndex(int theIndex)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->RemoveKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::FindKey(int theIndex)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->FindKey(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::FindFromIndex(int theIndex)
{
    Handle(::BRepCheck_Result) _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->FindFromIndex(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::BRepCheck_Result::CreateDowncasted(_result.get());
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::ChangeFromIndex(int theIndex)
{
    Handle(::BRepCheck_Result) _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->ChangeFromIndex(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::BRepCheck_Result::CreateDowncasted(_result.get());
}

int Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::FindIndex(Macad::Occt::TopoDS_Shape^ theKey1)
{
    int _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->FindIndex(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
    Handle(::BRepCheck_Result) _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->FindFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::BRepCheck_Result::CreateDowncasted(_result.get());
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
    Handle(::BRepCheck_Result) _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->ChangeFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::BRepCheck_Result::CreateDowncasted(_result.get());
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::Seek(Macad::Occt::TopoDS_Shape^ theKey1)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::Clear(bool doReleaseMemory)
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::Clear()
{
    ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Clear(false);
}

int Macad::Occt::BRepCheck_IndexedDataMapOfShapeResult::Size()
{
    int _result = ((::BRepCheck_IndexedDataMapOfShapeResult*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepCheck_IndexedDataMapOfShapeResult::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  BRepCheck
//---------------------------------------------------------------------

Macad::Occt::BRepCheck::BRepCheck()
    : Macad::Occt::BaseClass<::BRepCheck>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck();
}

void Macad::Occt::BRepCheck::Add(Macad::Occt::BRepCheck_ListOfStatus^ List, Macad::Occt::BRepCheck_Status Stat)
{
    ::BRepCheck::Add(*(::BRepCheck_ListOfStatus*)List->NativeInstance, (::BRepCheck_Status)Stat);
}

void Macad::Occt::BRepCheck::Print(Macad::Occt::BRepCheck_Status Stat, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ::BRepCheck::Print((::BRepCheck_Status)Stat, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

bool Macad::Occt::BRepCheck::SelfIntersection(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
{
    bool _result = ::BRepCheck::SelfIntersection(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance);
    return _result;
}

double Macad::Occt::BRepCheck::PrecCurve(Macad::Occt::Adaptor3d_Curve^ aAC3D)
{
    double _result = ::BRepCheck::PrecCurve(*(::Adaptor3d_Curve*)aAC3D->NativeInstance);
    return _result;
}

double Macad::Occt::BRepCheck::PrecSurface(Macad::Occt::Adaptor3d_Surface^ aAHSurf)
{
    double _result = ::BRepCheck::PrecSurface(Handle(::Adaptor3d_Surface)(aAHSurf->NativeInstance));
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Result
//---------------------------------------------------------------------

void Macad::Occt::BRepCheck_Result::Init(Macad::Occt::TopoDS_Shape^ S)
{
    ((::BRepCheck_Result*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepCheck_Result::InContext(Macad::Occt::TopoDS_Shape^ ContextShape)
{
    ((::BRepCheck_Result*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Result::Minimum()
{
    ((::BRepCheck_Result*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Result::Blind()
{
    ((::BRepCheck_Result*)_NativeInstance)->Blind();
}

void Macad::Occt::BRepCheck_Result::SetFailStatus(Macad::Occt::TopoDS_Shape^ S)
{
    ((::BRepCheck_Result*)_NativeInstance)->SetFailStatus(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::BRepCheck_ListOfStatus^ Macad::Occt::BRepCheck_Result::Status()
{
    ::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
    *_result = (::BRepCheck_ListOfStatus)((::BRepCheck_Result*)_NativeInstance)->Status();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepCheck_ListOfStatus(_result);
}

bool Macad::Occt::BRepCheck_Result::IsMinimum()
{
    bool _result = ((::BRepCheck_Result*)_NativeInstance)->IsMinimum();
    return _result;
}

bool Macad::Occt::BRepCheck_Result::IsBlind()
{
    bool _result = ((::BRepCheck_Result*)_NativeInstance)->IsBlind();
    return _result;
}

void Macad::Occt::BRepCheck_Result::InitContextIterator()
{
    ((::BRepCheck_Result*)_NativeInstance)->InitContextIterator();
}

bool Macad::Occt::BRepCheck_Result::MoreShapeInContext()
{
    bool _result = ((::BRepCheck_Result*)_NativeInstance)->MoreShapeInContext();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepCheck_Result::ContextualShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepCheck_Result*)_NativeInstance)->ContextualShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::BRepCheck_ListOfStatus^ Macad::Occt::BRepCheck_Result::StatusOnShape()
{
    ::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
    *_result = (::BRepCheck_ListOfStatus)((::BRepCheck_Result*)_NativeInstance)->StatusOnShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepCheck_ListOfStatus(_result);
}

void Macad::Occt::BRepCheck_Result::NextShapeInContext()
{
    ((::BRepCheck_Result*)_NativeInstance)->NextShapeInContext();
}

void Macad::Occt::BRepCheck_Result::SetParallel(bool theIsParallel)
{
    ((::BRepCheck_Result*)_NativeInstance)->SetParallel(theIsParallel);
}

bool Macad::Occt::BRepCheck_Result::IsStatusOnShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    bool _result = ((::BRepCheck_Result*)_NativeInstance)->IsStatusOnShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result;
}

Macad::Occt::BRepCheck_ListOfStatus^ Macad::Occt::BRepCheck_Result::StatusOnShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    ::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
    *_result = (::BRepCheck_ListOfStatus)((::BRepCheck_Result*)_NativeInstance)->StatusOnShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepCheck_ListOfStatus(_result);
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_Result::CreateDowncasted(::BRepCheck_Result* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Edge)))
        return Macad::Occt::BRepCheck_Edge::CreateDowncasted((::BRepCheck_Edge*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Face)))
        return Macad::Occt::BRepCheck_Face::CreateDowncasted((::BRepCheck_Face*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Shell)))
        return Macad::Occt::BRepCheck_Shell::CreateDowncasted((::BRepCheck_Shell*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Solid)))
        return Macad::Occt::BRepCheck_Solid::CreateDowncasted((::BRepCheck_Solid*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Vertex)))
        return Macad::Occt::BRepCheck_Vertex::CreateDowncasted((::BRepCheck_Vertex*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Wire)))
        return Macad::Occt::BRepCheck_Wire::CreateDowncasted((::BRepCheck_Wire*)instance);
    
    return gcnew Macad::Occt::BRepCheck_Result( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Analyzer
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Analyzer::BRepCheck_Analyzer(Macad::Occt::TopoDS_Shape^ S, bool GeomControls, bool theIsParallel, bool theIsExact)
    : Macad::Occt::BaseClass<::BRepCheck_Analyzer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_Analyzer(*(::TopoDS_Shape*)S->NativeInstance, GeomControls, theIsParallel, theIsExact);
}

Macad::Occt::BRepCheck_Analyzer::BRepCheck_Analyzer(Macad::Occt::TopoDS_Shape^ S, bool GeomControls, bool theIsParallel)
    : Macad::Occt::BaseClass<::BRepCheck_Analyzer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_Analyzer(*(::TopoDS_Shape*)S->NativeInstance, GeomControls, theIsParallel, false);
}

Macad::Occt::BRepCheck_Analyzer::BRepCheck_Analyzer(Macad::Occt::TopoDS_Shape^ S, bool GeomControls)
    : Macad::Occt::BaseClass<::BRepCheck_Analyzer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_Analyzer(*(::TopoDS_Shape*)S->NativeInstance, GeomControls, false, false);
}

Macad::Occt::BRepCheck_Analyzer::BRepCheck_Analyzer(Macad::Occt::TopoDS_Shape^ S)
    : Macad::Occt::BaseClass<::BRepCheck_Analyzer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepCheck_Analyzer(*(::TopoDS_Shape*)S->NativeInstance, true, false, false);
}

void Macad::Occt::BRepCheck_Analyzer::Init(Macad::Occt::TopoDS_Shape^ S, bool GeomControls)
{
    ((::BRepCheck_Analyzer*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, GeomControls);
}

void Macad::Occt::BRepCheck_Analyzer::Init(Macad::Occt::TopoDS_Shape^ S)
{
    ((::BRepCheck_Analyzer*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, true);
}

void Macad::Occt::BRepCheck_Analyzer::SetExactMethod(bool theIsExact)
{
    ((::BRepCheck_Analyzer*)_NativeInstance)->SetExactMethod(theIsExact);
}

bool Macad::Occt::BRepCheck_Analyzer::IsExactMethod()
{
    bool _result = ((::BRepCheck_Analyzer*)_NativeInstance)->IsExactMethod();
    return _result;
}

void Macad::Occt::BRepCheck_Analyzer::SetParallel(bool theIsParallel)
{
    ((::BRepCheck_Analyzer*)_NativeInstance)->SetParallel(theIsParallel);
}

bool Macad::Occt::BRepCheck_Analyzer::IsParallel()
{
    bool _result = ((::BRepCheck_Analyzer*)_NativeInstance)->IsParallel();
    return _result;
}

bool Macad::Occt::BRepCheck_Analyzer::IsValid(Macad::Occt::TopoDS_Shape^ S)
{
    bool _result = ((::BRepCheck_Analyzer*)_NativeInstance)->IsValid(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepCheck_Analyzer::IsValid()
{
    bool _result = ((::BRepCheck_Analyzer*)_NativeInstance)->IsValid();
    return _result;
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_Analyzer::Result(Macad::Occt::TopoDS_Shape^ theSubS)
{
    Handle(::BRepCheck_Result) _result = ((::BRepCheck_Analyzer*)_NativeInstance)->Result(*(::TopoDS_Shape*)theSubS->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::BRepCheck_Result::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Edge
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Edge::BRepCheck_Edge(Macad::Occt::TopoDS_Edge^ E)
    : Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_Edge(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepCheck_Edge::InContext(Macad::Occt::TopoDS_Shape^ ContextShape)
{
    ((::BRepCheck_Edge*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Edge::Minimum()
{
    ((::BRepCheck_Edge*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Edge::Blind()
{
    ((::BRepCheck_Edge*)_NativeInstance)->Blind();
}

bool Macad::Occt::BRepCheck_Edge::GeometricControls()
{
    bool _result = ((::BRepCheck_Edge*)_NativeInstance)->GeometricControls();
    return _result;
}

void Macad::Occt::BRepCheck_Edge::GeometricControls(bool B)
{
    ((::BRepCheck_Edge*)_NativeInstance)->GeometricControls(B);
}

double Macad::Occt::BRepCheck_Edge::Tolerance()
{
    double _result = ((::BRepCheck_Edge*)_NativeInstance)->Tolerance();
    return _result;
}

void Macad::Occt::BRepCheck_Edge::SetStatus(Macad::Occt::BRepCheck_Status theStatus)
{
    ((::BRepCheck_Edge*)_NativeInstance)->SetStatus((::BRepCheck_Status)theStatus);
}

void Macad::Occt::BRepCheck_Edge::SetExactMethod(bool theIsExact)
{
    ((::BRepCheck_Edge*)_NativeInstance)->SetExactMethod(theIsExact);
}

bool Macad::Occt::BRepCheck_Edge::IsExactMethod()
{
    bool _result = ((::BRepCheck_Edge*)_NativeInstance)->IsExactMethod();
    return _result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Edge::CheckPolygonOnTriangulation(Macad::Occt::TopoDS_Edge^ theEdge)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Edge*)_NativeInstance)->CheckPolygonOnTriangulation(*(::TopoDS_Edge*)theEdge->NativeInstance);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Edge^ Macad::Occt::BRepCheck_Edge::CreateDowncasted(::BRepCheck_Edge* instance)
{
    return gcnew Macad::Occt::BRepCheck_Edge( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Face
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Face::BRepCheck_Face(Macad::Occt::TopoDS_Face^ F)
    : Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_Face(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepCheck_Face::InContext(Macad::Occt::TopoDS_Shape^ ContextShape)
{
    ((::BRepCheck_Face*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Face::Minimum()
{
    ((::BRepCheck_Face*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Face::Blind()
{
    ((::BRepCheck_Face*)_NativeInstance)->Blind();
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Face::IntersectWires(bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Face*)_NativeInstance)->IntersectWires(Update);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Face::IntersectWires()
{
    ::BRepCheck_Status _result = ((::BRepCheck_Face*)_NativeInstance)->IntersectWires(false);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Face::ClassifyWires(bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Face*)_NativeInstance)->ClassifyWires(Update);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Face::ClassifyWires()
{
    ::BRepCheck_Status _result = ((::BRepCheck_Face*)_NativeInstance)->ClassifyWires(false);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Face::OrientationOfWires(bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Face*)_NativeInstance)->OrientationOfWires(Update);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Face::OrientationOfWires()
{
    ::BRepCheck_Status _result = ((::BRepCheck_Face*)_NativeInstance)->OrientationOfWires(false);
    return (Macad::Occt::BRepCheck_Status)_result;
}

void Macad::Occt::BRepCheck_Face::SetUnorientable()
{
    ((::BRepCheck_Face*)_NativeInstance)->SetUnorientable();
}

void Macad::Occt::BRepCheck_Face::SetStatus(Macad::Occt::BRepCheck_Status theStatus)
{
    ((::BRepCheck_Face*)_NativeInstance)->SetStatus((::BRepCheck_Status)theStatus);
}

bool Macad::Occt::BRepCheck_Face::IsUnorientable()
{
    bool _result = ((::BRepCheck_Face*)_NativeInstance)->IsUnorientable();
    return _result;
}

bool Macad::Occt::BRepCheck_Face::GeometricControls()
{
    bool _result = ((::BRepCheck_Face*)_NativeInstance)->GeometricControls();
    return _result;
}

void Macad::Occt::BRepCheck_Face::GeometricControls(bool B)
{
    ((::BRepCheck_Face*)_NativeInstance)->GeometricControls(B);
}

Macad::Occt::BRepCheck_Face^ Macad::Occt::BRepCheck_Face::CreateDowncasted(::BRepCheck_Face* instance)
{
    return gcnew Macad::Occt::BRepCheck_Face( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Shell
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Shell::BRepCheck_Shell(Macad::Occt::TopoDS_Shell^ S)
    : Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_Shell(*(::TopoDS_Shell*)S->NativeInstance);
}

void Macad::Occt::BRepCheck_Shell::InContext(Macad::Occt::TopoDS_Shape^ ContextShape)
{
    ((::BRepCheck_Shell*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Shell::Minimum()
{
    ((::BRepCheck_Shell*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Shell::Blind()
{
    ((::BRepCheck_Shell*)_NativeInstance)->Blind();
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Shell::Closed(bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Shell*)_NativeInstance)->Closed(Update);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Shell::Closed()
{
    ::BRepCheck_Status _result = ((::BRepCheck_Shell*)_NativeInstance)->Closed(false);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Shell::Orientation(bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Shell*)_NativeInstance)->Orientation(Update);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Shell::Orientation()
{
    ::BRepCheck_Status _result = ((::BRepCheck_Shell*)_NativeInstance)->Orientation(false);
    return (Macad::Occt::BRepCheck_Status)_result;
}

void Macad::Occt::BRepCheck_Shell::SetUnorientable()
{
    ((::BRepCheck_Shell*)_NativeInstance)->SetUnorientable();
}

bool Macad::Occt::BRepCheck_Shell::IsUnorientable()
{
    bool _result = ((::BRepCheck_Shell*)_NativeInstance)->IsUnorientable();
    return _result;
}

int Macad::Occt::BRepCheck_Shell::NbConnectedSet(Macad::Occt::TopTools_ListOfShape^ theSets)
{
    int _result = ((::BRepCheck_Shell*)_NativeInstance)->NbConnectedSet(*(::TopTools_ListOfShape*)theSets->NativeInstance);
    return _result;
}

Macad::Occt::BRepCheck_Shell^ Macad::Occt::BRepCheck_Shell::CreateDowncasted(::BRepCheck_Shell* instance)
{
    return gcnew Macad::Occt::BRepCheck_Shell( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Solid
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Solid::BRepCheck_Solid(Macad::Occt::TopoDS_Solid^ theS)
    : Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_Solid(*(::TopoDS_Solid*)theS->NativeInstance);
}

void Macad::Occt::BRepCheck_Solid::InContext(Macad::Occt::TopoDS_Shape^ theContextShape)
{
    ((::BRepCheck_Solid*)_NativeInstance)->InContext(*(::TopoDS_Shape*)theContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Solid::Minimum()
{
    ((::BRepCheck_Solid*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Solid::Blind()
{
    ((::BRepCheck_Solid*)_NativeInstance)->Blind();
}

Macad::Occt::BRepCheck_Solid^ Macad::Occt::BRepCheck_Solid::CreateDowncasted(::BRepCheck_Solid* instance)
{
    return gcnew Macad::Occt::BRepCheck_Solid( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Vertex
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Vertex::BRepCheck_Vertex(Macad::Occt::TopoDS_Vertex^ V)
    : Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_Vertex(*(::TopoDS_Vertex*)V->NativeInstance);
}

void Macad::Occt::BRepCheck_Vertex::InContext(Macad::Occt::TopoDS_Shape^ ContextShape)
{
    ((::BRepCheck_Vertex*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Vertex::Minimum()
{
    ((::BRepCheck_Vertex*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Vertex::Blind()
{
    ((::BRepCheck_Vertex*)_NativeInstance)->Blind();
}

double Macad::Occt::BRepCheck_Vertex::Tolerance()
{
    double _result = ((::BRepCheck_Vertex*)_NativeInstance)->Tolerance();
    return _result;
}

Macad::Occt::BRepCheck_Vertex^ Macad::Occt::BRepCheck_Vertex::CreateDowncasted(::BRepCheck_Vertex* instance)
{
    return gcnew Macad::Occt::BRepCheck_Vertex( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Wire
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Wire::BRepCheck_Wire(Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepCheck_Wire(*(::TopoDS_Wire*)W->NativeInstance);
}

void Macad::Occt::BRepCheck_Wire::InContext(Macad::Occt::TopoDS_Shape^ ContextShape)
{
    ((::BRepCheck_Wire*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Wire::Minimum()
{
    ((::BRepCheck_Wire*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Wire::Blind()
{
    ((::BRepCheck_Wire*)_NativeInstance)->Blind();
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::Closed(bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->Closed(Update);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::Closed()
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->Closed(false);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::Closed2d(Macad::Occt::TopoDS_Face^ F, bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->Closed2d(*(::TopoDS_Face*)F->NativeInstance, Update);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::Closed2d(Macad::Occt::TopoDS_Face^ F)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->Closed2d(*(::TopoDS_Face*)F->NativeInstance, false);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::Orientation(Macad::Occt::TopoDS_Face^ F, bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->Orientation(*(::TopoDS_Face*)F->NativeInstance, Update);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::Orientation(Macad::Occt::TopoDS_Face^ F)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->Orientation(*(::TopoDS_Face*)F->NativeInstance, false);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::SelfIntersect(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, bool Update)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->SelfIntersect(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, Update);
    return (Macad::Occt::BRepCheck_Status)_result;
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::SelfIntersect(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
{
    ::BRepCheck_Status _result = ((::BRepCheck_Wire*)_NativeInstance)->SelfIntersect(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, false);
    return (Macad::Occt::BRepCheck_Status)_result;
}

bool Macad::Occt::BRepCheck_Wire::GeometricControls()
{
    bool _result = ((::BRepCheck_Wire*)_NativeInstance)->GeometricControls();
    return _result;
}

void Macad::Occt::BRepCheck_Wire::GeometricControls(bool B)
{
    ((::BRepCheck_Wire*)_NativeInstance)->GeometricControls(B);
}

void Macad::Occt::BRepCheck_Wire::SetStatus(Macad::Occt::BRepCheck_Status theStatus)
{
    ((::BRepCheck_Wire*)_NativeInstance)->SetStatus((::BRepCheck_Status)theStatus);
}

Macad::Occt::BRepCheck_Wire^ Macad::Occt::BRepCheck_Wire::CreateDowncasted(::BRepCheck_Wire* instance)
{
    return gcnew Macad::Occt::BRepCheck_Wire( instance );
}


